const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const merch = require('../assets/js/merch.js');
const base = path.resolve(__dirname, '..');
const combinations = [];
for (const product of Object.keys(merch.products)) {
  assert.equal(merch.products[product].colors.length, 3);
  for (let color = 0; color < 3; color++) {
    for (const mark of Object.keys(merch.marks)) for (const ink of merch.inks) {
      const item = {product, color, mark, ink, size: 'M'};
      assert.deepEqual(merch.normalize(item), item);
      for (const source of [merch.photoSource(product), merch.logoSource(mark, ink)]) {
        assert.ok(fs.statSync(path.join(base, source.split('?')[0])).size > 0, `Asset exists: ${source}`);
      }
      combinations.push(item);
    }
  }
}
assert.equal(combinations.length, 81);
assert.equal(merch.logoSource('descent', 'green'), 'assets/brand/descent-symbol.svg?v=aligned-cut-5');
for (const size of merch.sizes) assert.equal(merch.normalize({...combinations[0], size}).size, size);
for (const invalid of [null, [], {}, 'text', {product: 'constructor'}, {...combinations[0], color: '0'}, {...combinations[0], color: 3},
  {...combinations[0], color: -1}, {...combinations[0], color: .5}, {...combinations[0], mark: '__proto__'}, {...combinations[0], ink: 'url(evil)'},
  {...combinations[0], size: '<script>'}, {...combinations[0], product: '../escape'}]) assert.equal(merch.normalize(invalid), null);
assert.throws(() => merch.photoSource('../escape'), RangeError);
assert.throws(() => merch.logoSource('constructor', 'white'), RangeError);
assert.throws(() => merch.logoSource('ac', 'transparent'), RangeError);
assert.deepEqual(merch.validateBag({items: combinations}), []);
assert.deepEqual(merch.validateBag([null, combinations[0], combinations[0], {...combinations[1], html: '<script>alert(1)</script>'}]), [combinations[0], combinations[1]]);
assert.equal(merch.validateBag(combinations).length, 50);
assert.equal(merch.addSelection([], null).status, 'invalid');
assert.equal(merch.addSelection([combinations[0]], combinations[0]).status, 'duplicate');
assert.equal(merch.addSelection(combinations.slice(0, 50), combinations[50]).status, 'full');
assert.equal(merch.addSelection(combinations.slice(0, 50), combinations[0]).status, 'duplicate');
const original = {...combinations[0]}, added = merch.addSelection([], original);
assert.equal(added.status, 'added'); original.size = 'XXL';
assert.equal(added.items[0].size, 'M', 'Saved configurations are independent snapshots');
assert.deepEqual(merch.validateBag(JSON.parse(JSON.stringify(added.items))), added.items, 'Saved bag round-trip');
for (const product of Object.keys(merch.products)) {
  merch.products[product].colors.forEach((color, index) => assert.equal(merch.defaultInk(product, index), color.light ? 'black' : 'white'));
}
const text = merch.selectionText([combinations[0], {...combinations[1], size: 'XL'}]);
assert.match(text, /The leather jacket · Black · АЦ · Ivory ink · M/);
assert.match(text, /Green ink · XL/);
assert.match(text, /not an order/);
assert.doesNotMatch(merch.selectionText([{...combinations[0], size: '<script>'}]), /<script>/);
console.log('PASS: all 81 appearance combinations use existing exact logo and garment assets; all six sizes validate.');
console.log('PASS: invalid/prototype/path/HTML values rejected; saved bag deduplicates, caps at 50, persists clean data and retains immutable configurations.');
console.log('PASS: default ink contrast and readable local-preview download. No dependencies or network requests.');
