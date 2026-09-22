const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const vm = require('node:vm');

const base = path.resolve(__dirname, '..');
const source = fs.readFileSync(path.join(base, 'assets/js/brand.js'), 'utf8');
const motionCSS = fs.readFileSync(path.join(base, 'assets/css/brand-motion.css'), 'utf8');
const reducedQuery = '(prefers-reduced-motion: reduce)';
const shortQuery = '(max-height: 580px)';

// Only the DOM surface used by the scene; visual layout is checked in a browser.
class Element {
  constructor(tagName = 'div') {
    this.tagName = tagName;
    this.attributes = {}; this.children = []; this.listeners = {};
    this.textContent = ''; this.disabled = false;
    this.opacityWrites = 0;
    this.geometryWrites = 0;
    this.style = new Proxy({removeProperty: key => delete this.style[key]}, {
      set: (style, key, value) => {
        if (key === 'opacity') this.opacityWrites++;
        style[key] = value; return true;
      }
    });
    const classes = new Set();
    this.classList = {add: key => classes.add(key), contains: key => classes.has(key),
      toggle: (key, on) => on ? classes.add(key) : classes.delete(key)};
  }
  setAttribute(key, value) {
    if ((key === 'd' || key === 'fill') && Object.hasOwn(this.attributes, key)) this.geometryWrites++;
    this.attributes[key] = String(value);
  }
  getAttribute(key) { return this.attributes[key]; }
  append(...children) { this.children.push(...children); }
  addEventListener(type, callback) { this.listeners[type] = callback; }
}

async function page({logo = 'ac', reduced = false, short = false, failed = false, width = 1440} = {}) {
  const root = new Element(); root.dataset = {logo};
  const object = new Element(), hero = new Element();
  const stage = new Element(), media = {}, frames = [];
  let top = 0;
  const isShort = () => media[shortQuery]?.matches ?? short;
  Object.defineProperty(stage, 'offsetHeight', {get: () => isShort() ? 740 : 900});
  hero.getBoundingClientRect = () => ({top, height: isShort() ? 740 : 1800});
  hero.querySelector = () => stage;
  const nodes = {'.hero-story': hero, '#brand-object': object};
  for (const selector of ['#hero-progress', '#brand-scene', '#menu-toggle', '#primary-nav']) nodes[selector] = new Element();
  const document = {documentElement: root, body: new Element(), addEventListener() {},
    querySelector: selector => nodes[selector] ?? null,
    querySelectorAll: () => [], createElement: tag => new Element(tag), createElementNS: (ns, tag) => new Element(tag)};
  const window = {innerWidth: width, innerHeight: short ? 500 : 900, listeners: {},
    addEventListener(type, callback) { this.listeners[type] = callback; },
    matchMedia(query) {
      return media[query] = {matches: query === reducedQuery ? reduced : query === shortQuery ? short : width <= 768,
        addEventListener(type, callback) { this.change = callback; }};
    }};
  const prefix = logo === 'ats' ? 'ats-' : '';
  const geometry = JSON.parse(fs.readFileSync(path.join(base, `assets/brand/${prefix}geometry.json`), 'utf8'));
  vm.runInNewContext(source, {document, window, URLSearchParams, location: {search: '?motion-check'},
    console: {assert: (condition, message) => assert.ok(condition, message), info() {}},
    requestAnimationFrame: callback => frames.push(callback),
    fetch: async url => {
      assert.ok(url.startsWith(`assets/brand/${prefix}geometry.json`));
      if (failed) throw new Error('Offline');
      return {ok: true, json: async () => geometry};
    }});

  await new Promise(setImmediate);
  function flush() {
    let count = 0;
    while (frames.length) { assert.ok(++count < 20, 'No continuous idle animation loop'); frames.shift()(); }
  }
  flush();
  return {root, object, geometry,
    scroll(value) { top = -value; window.listeners.scroll(); flush(); },
    preference(query, value) { media[query].matches = value; media[query].change(); flush(); },
    snapshot() { return JSON.stringify([object.style, object.children]); }};
}

function descendants(element) {
  return [element, ...element.children.flatMap(descendants)];
}

function checkSolidPieces(active, logo) {
  const pieces = active.object.children[0].children;
  assert.equal(pieces.length, 3, 'Exactly three actual letter pieces');
  assert.equal(new Set(active.geometry.assembly).size, 3, 'Three distinct exported paths');
  const names = ['a-left', 'a-right', logo === 'ats' ? 'ts' : 'tse'];
  pieces.forEach((piece, index) => {
    assert.equal(piece.getAttribute('data-piece'), names[index]);
    assert.equal(piece.children.length, 1, 'One turn container per solid');
    const faces = piece.children[0].children;
    assert.equal(faces.length, 2, 'A solid has descent and letter faces');
    assert.deepEqual(faces.map(face => face.getAttribute('data-face')).sort(), ['descent', 'letter']);
    faces.forEach(face => {
      const expected = face.getAttribute('data-face') === 'letter' ? active.geometry.assembly[index]
        : active.geometry.descent.parts[index] + (index === 2 ? active.geometry.descent.parts[3] : '');
      assert.equal(face.children.length, 9, 'Nine opaque depth layers per face');
      face.children.forEach(layer => {
        assert.equal(layer.tagName, 'svg');
        assert.equal(layer.children.length, 1, 'One persistent path per layer');
        const shape = layer.children[0];
        assert.equal(shape.tagName, 'path');
        assert.equal(shape.getAttribute('d').replace(/\s/g, ''), expected.replace(/\s/g, ''), 'Face retains its exported shape');
        assert.match(shape.getAttribute('fill').replace('var(--logo-face, #f4f4f2)', '#f4f4f2'), /^(#[\da-f]{6}|hsl\([\d. ]+% [\d.]+%\))$/i, 'Solid opaque paint');
      });
    });
  });
  for (const node of descendants(active.object)) {
    assert.notEqual(node.tagName, 'clipPath', 'No clipped logo bands');
    assert.equal(node.getAttribute('clip-path'), undefined);
    assert.equal(node.opacityWrites, 0, 'Never animate or assign style opacity');
    assert.equal(node.geometryWrites, 0, 'Never replace face geometry or paint during motion');
    for (const key of ['opacity', 'fill-opacity', 'stroke-opacity']) {
      assert.ok(node.getAttribute(key) === undefined || node.getAttribute(key) === '1', 'No transparent shapes');
    }
  }
}

function checkPose(active, progress, flip, separated, assembled) {
  active.scroll(progress * 900);

  assert.equal(active.object.classList.contains('assembled'), assembled);
  const pieces = active.object.children[0].children;
  for (const piece of pieces) {
    assert.equal(piece.children[0].style.transform, `rotateY(${flip}deg)`);
    const atOrigin = piece.style.transform === 'translate3d(0%,0%,0px) rotateZ(0deg)';
    assert.equal(atOrigin, !separated, 'Icon/end align; midpoint keeps actual pieces separated');
  }
  if (separated) assert.equal(new Set(pieces.map(piece => piece.style.transform)).size, 3);
  else assert.equal(active.object.style.transform, 'rotateX(0deg) rotateY(0deg) rotateZ(0deg)');
}

(async () => {
  assert.match(motionCSS, /\.letter-face\s*\{[^}]*transform:\s*rotateY\(180deg\)/, 'Letter face is reversed behind the descent face');
  assert.match(motionCSS, /\.monogram-slice\s*\{[^}]*backface-visibility:\s*hidden/, 'Only the facing side is visible');
  assert.match(motionCSS, /\.motion-ready #brand-object > img\s*\{[^}]*visibility:\s*hidden/, 'Static master stays hidden during the two moving phases');
  assert.match(motionCSS, /\.motion-ready #brand-object\.assembled > img\s*\{[^}]*visibility:\s*visible/, 'Aligned endpoint shows the exact master');
  assert.match(motionCSS, /\.motion-ready #brand-object\.assembled \.monogram-solid\s*\{[^}]*visibility:\s*hidden/, 'Aligned endpoint hides the split pieces');
  assert.doesNotMatch(motionCSS, /(?:opacity|clip-path)\s*:/, 'Face changes use rotation and visibility, not fades or clips');
  for (const logo of ['ac', 'ats']) {
    const active = await page({logo});
    assert.ok(active.root.classList.contains('motion-ready'));
    const paths = descendants(active.object).filter(node => node.tagName === 'path');
    for (let step = 0; step <= 100; step++) {
      active.scroll(step * 9);
      checkSolidPieces(active, logo);
      descendants(active.object).filter(node => node.tagName === 'path').forEach((node, index) => {
        assert.equal(node, paths[index], 'Path nodes persist throughout the three phases');
      });
    }
    checkPose(active, 0, 0, false, false);
    checkPose(active, .46, 180, true, false);
    checkPose(active, .93, 180, false, false);
    checkPose(active, .94, 180, false, true);
    checkPose(active, 1, 180, false, true);
    active.preference(reducedQuery, true);
    assert.equal(active.root.classList.contains('motion-ready'), false);
    assert.equal(active.object.style.transform, undefined);
    active.preference(reducedQuery, false);
    assert.ok(active.root.classList.contains('motion-ready'));
    console.log(`PASS ${logo}: descent icon → three separated letter pieces → aligned master; persistent opaque face geometry, no clipping/fades, reduced motion.`);
  }
  for (const options of [{reduced: true}, {short: true}, {failed: true}, {reduced: true, failed: true}]) {
    const fallback = await page(options);
    assert.equal(fallback.root.classList.contains('motion-ready'), false);
    fallback.scroll(1);
    assert.equal(fallback.object.style.transform, undefined, 'Static fallback cannot jump through the scene');
    if (options.short) {
      fallback.preference(shortQuery, false);
      assert.ok(fallback.root.classList.contains('motion-ready'));
      fallback.preference(shortQuery, true);
      assert.equal(fallback.root.classList.contains('motion-ready'), false);
      assert.equal(fallback.object.style.transform, undefined);
    }
    console.log('PASS fallback:', JSON.stringify(options));
  }
  const mobile = await page({width: 390});
  mobile.scroll(450);
  assert.ok(mobile.root.classList.contains('motion-ready'));
  checkSolidPieces(mobile, 'ac');
  assert.equal(/NaN|Infinity/.test(mobile.snapshot()), false);
  console.log('PASS mobile portrait: enhanced scene remains finite. No dependencies required.');
})().catch(error => { console.error(error); process.exitCode = 1; });
