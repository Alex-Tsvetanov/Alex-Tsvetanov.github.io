const assert = require('node:assert/strict');
const fs = require('node:fs');
const vm = require('node:vm');
const source = fs.readFileSync(require('node:path').join(__dirname,'../assets/js/theme.js'),'utf8');
function page(saved, dark, fails = false) {
  const root = {dataset:{}}, events = {}, stored = [];
  const button = {setAttribute(k,v){this[k]=v;},addEventListener(k,f){this[k]=f;}};
  const img = {dataset:{themeLight:'light.svg',themeDark:'dark.svg'}};
  const system = {matches:dark,addEventListener(k,f){this[k]=f;}};
  const document = {documentElement:root,querySelector(){return null;},querySelectorAll(s){return s.startsWith('img')?[img]:[button];},addEventListener(k,f){events[k]=f;}};
  const window = {matchMedia(){return system;},addEventListener(k,f){events[k]=f;}};
  const localStorage = {getItem(){if(fails)throw Error();return saved;},setItem(k,v){if(fails)throw Error();stored.push(v);}};
  vm.runInNewContext(source,{document,window,localStorage});
  events.DOMContentLoaded();
  return {root,button,img,system,events,stored};
}
let p=page(null,true);assert.equal(p.root.dataset.theme,'dark');assert.equal(p.img.src,'dark.svg');
p.system.matches=false;p.system.change();assert.equal(p.root.dataset.theme,'light');
p.button.click();assert.equal(p.root.dataset.theme,'dark');assert.equal(p.stored[0],'dark');assert.equal(p.button['aria-label'],'Switch to light theme');
p.system.change();assert.equal(p.root.dataset.theme,'dark');
p.events.storage({key:'portfolio-theme',newValue:'light'});assert.equal(p.img.src,'light.svg');
assert.equal(page('light',true).root.dataset.theme,'light');
assert.equal(page('invalid',false).root.dataset.theme,'light');
p=page(null,true,true);p.button.click();assert.equal(p.root.dataset.theme,'light');
const css = fs.readFileSync(require('node:path').join(__dirname,'../assets/css/theme.css'),'utf8');
assert(css.includes('--logo-face:#f4f4f2') && css.includes('--logo-face:#0e0e10'));
console.log('PASS theme: system default and changes, persisted choice, toggle labels, paired images, cross-tab sync, unavailable storage');
