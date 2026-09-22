// Run without network access: verify consent gates and the explicit event payloads.
const assert = require('node:assert/strict');
const vm = require('node:vm');
const fs = require('node:fs');
const source = fs.readFileSync(require('node:path').join(__dirname, '../assets/js/site-analytics.js'), 'utf8');
function run({id = 'G-TEST123', hostname = 'alex-tsvetanov.github.io', saved = null, storageFails = false} = {}) {
  const nodes = [], scripts = [], listeners = {};
  const button = {hidden: true, addEventListener() {}, focus() {}};
  const document = {
    title: 'Portfolio', referrer: 'https://example.org/private?query=secret', cookie: '_ga=old; other=keep',
    body: {append(node) {nodes.push(node);}}, head: {append(node) {scripts.push(node);}},
    createElement() {return {setAttribute() {}, addEventListener(type, fn) {this[type] = fn;}, querySelector() {return button;}};},
    querySelectorAll() {return [button];}, addEventListener(type, fn) {listeners[type] = fn;}
  };
  const location = {hostname, origin: `https://${hostname}`, pathname: '/preview/', href: `https://${hostname}/preview/?secret=yes#private`, reload() {this.reloaded = true;}};
  const window = {siteAnalyticsId: id, addEventListener() {}};
  const localStorage = {getItem() {if (storageFails) throw Error(); return JSON.stringify(saved);}, setItem() {if (storageFails) throw Error();}};
  vm.runInNewContext(source, {window, document, location, localStorage, URL, Date});
  return {window, document, location, nodes, scripts, listeners,
    choose(choice) {nodes[0].click({target: {closest() {return {dataset: {choice}};}}});},
    events() {return (window.dataLayer || []).map(a => Array.from(a));}};
}
for (const options of [{id: ''}, {hostname: 'localhost'}]) {
  const site = run(options); assert.equal(site.nodes.length, 0); assert.equal(site.scripts.length, 0);
}
const site = run();
assert.equal(site.nodes[0].hidden, false); assert.equal(site.scripts.length, 0);
site.choose('declined'); assert.equal(site.scripts.length, 0); assert.equal(site.window['ga-disable-G-TEST123'], true);
site.choose('accepted'); site.choose('accepted');
assert.equal(site.scripts.length, 1);
assert.equal(site.events().filter(e => e[0] === 'event' && e[1] === 'page_view').length, 1);
const config = site.events().find(e => e[0] === 'config')[2];
assert.equal(config.page_location, 'https://alex-tsvetanov.github.io/preview/');
assert.equal(config.page_referrer, 'https://example.org');
for (const href of ['mailto:private@example.org', 'https://external.org/private?secret=yes', 'https://alex-tsvetanov.github.io/CV.pdf']) {
  site.listeners.click({target: {closest() {return {href};}}});
}
assert.equal(site.events().filter(e => e[0] === 'event').length, 4);
assert(!JSON.stringify(site.events()).includes('secret'));
assert(!JSON.stringify(site.events()).includes('private@example'));
site.choose('declined'); assert.equal(site.window['ga-disable-G-TEST123'], true); assert(site.location.reloaded);
assert.equal(run({saved: {choice: 'accepted', time: Date.now()}}).scripts.length, 1);
assert.equal(run({saved: {choice: 'accepted', time: 0}}).scripts.length, 0);
assert.equal(run({saved: {choice: 'accepted', time: Date.now() + 86400000}}).scripts.length, 0);
assert.equal(run({storageFails: true}).scripts.length, 0);
console.log('PASS analytics: disabled configuration, local preview, consent, withdrawal, expiry, sanitized events and one page view');
