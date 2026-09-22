// Rebuild the selected reference as clean vectors and independently sized icons.
const fs = require('node:fs');
const path = require('node:path');
const assert = require('node:assert/strict');
const sharp = require('sharp');
const { GlobalFonts, convertSVGTextToPath } = require('@napi-rs/canvas');
const out = path.resolve(__dirname, '../assets/brand');
const font = path.join(out, 'fonts/IBMPlexSans-SemiBold.ttf');
const A = 'M14 126L68 24L107 95H92L68 52L47 88H60L53 101H40L28 126Z';
// Two solid A pieces share the ridge from (68,24) to (68,52) without changing its silhouette.
const leftA = 'M14 126L68 24V52L47 88H60L53 101H40L28 126Z';
const rightA = 'M68 24L107 95H92L68 52Z';
// Vertically trimmed Ц stem: its tip and the A crossbar both start at y88, with matching13:7 cuts.
const TSE = 'M64 101L71 88V107Q71 115 86 115H120V64H134V115H147V139H134V128H84Q64 128 64 108Z';
// The T cap threads through the A notch; diagonal clearances keep the overlap readable in one ink.
const T = 'M63 88H82L89 101H85V139H71V101H56Z M110 88H141V101H117Z';
const S = 'M139 107H119Q104 107 104 116Q104 123 117 125L125 127Q130 128 130 130Q130 131 125 131H105V139H127Q143 139 143 130Q143 122 130 119L121 117Q116 116 116 114Q116 114 121 114H139Z';
const microA = 'M1 12L6.5 2L10.5 9H8.8L6.5 4.8L4.25 9H5.8L5 10.5H3.4L2.5 12Z';
const microTse = 'M6 10.875L7 9V10.7Q7 11.5 8.8 11.5H12V6H13.5V11.5H14.8V14H13.3V13H8.8Q6 13 6 11.2Z';
const microLatinA = microA;
const microLatinTs = 'M6.8 8.8H7.8L8.8 10.3H8V14H6.5V10.3H6Z M11.5 8.8H14.5V10.3H12.3Z M14.5 11H10V13H13V13.5H10V14.5H14.5V12.5H11.5V12H14.5Z';
// Three mirrored chevrons share one centerline, parallel slopes and upright terminal cuts.
const descent = {viewBox:'0 0 160 160',parts:[
  'M26 20L80 47L134 20V32L80 59L26 32Z',
  'M36 54L80 76L124 54V66L80 88L36 66Z',
  'M46 88L80 105L114 88V100L80 117L46 100Z',
  'M30 130H130V142H30Z'
]};
const svg = (body, w=160, h=160, label='АЦ') => `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ${w} ${h}" width="${w}" height="${h}" role="img" aria-label="Alex Tsvetanov — ${label}"><title>Alex Tsvetanov — ${label}</title>${body}</svg>`;
const mark = (a, c) => `<path fill="${a}" d="${A}"/><path fill="${c}" d="${TSE}"/>`;
const latinMark = (a,c) => `<path fill="${a}" d="${A}"/><path fill="${c}" d="${T}${S}"/>`;
const save = (name, data) => fs.writeFileSync(path.join(out, name), data);
async function png(name, width, dest=name.replace('.svg','.png')) {
  await sharp(path.join(out,name), {density:384}).resize({width}).png().toFile(path.join(out,dest));
}
async function main() {
  fs.mkdirSync(out,{recursive:true});
  assert(GlobalFonts.registerFromPath(font,'IBM Plex Sans'));
  save('symbol.svg',svg(mark('#F4F4F2','#1FE07A')));
  for (const [name,color] of Object.entries({black:'#0E0E10',white:'#F4F4F2',green:'#1FE07A'})) {
    save(`symbol-${name}.svg`,svg(mark(color,color)));
    await png(`symbol-${name}.svg`,1024);
  }
  await png('symbol.svg',1024);
  for(const [suffix,color] of Object.entries({'':'#1FE07A','-black':'#0E0E10','-white':'#F4F4F2'})) {
    save(`descent-symbol${suffix}.svg`,svg(descent.parts.map(d=>`<path fill="${color}" d="${d}"/>`).join(''),160,160,'All the way down'));
    await png(`descent-symbol${suffix}.svg`,1024);
  }
  save('ats-symbol.svg',svg(latinMark('#F4F4F2','#1FE07A'),160,160,'ATs'));
  await png('ats-symbol.svg',1024);
  for(const [name,color] of Object.entries({black:'#0E0E10',white:'#F4F4F2',green:'#1FE07A'})) {
    save(`ats-symbol-${name}.svg`,svg(latinMark(color,color),160,160,'ATs'));
    await png(`ats-symbol-${name}.svg`,1024);
  }
  for (const [theme,a,c,text] of [['dark','#F4F4F2','#1FE07A','#F4F4F2'],['light','#0E0E10','#0E8F54','#0E0E10']]) {
    const content=svg(`<g transform="translate(0 -7) scale(.6)">${mark(a,c)}</g><text x="105" y="59" fill="${text}" font-family="IBM Plex Sans" font-weight="600" font-size="48">Alex Tsvetanov</text>`,464,88);
    const outlined=convertSVGTextToPath(content).toString().replace(/<svg\b[^>]*>/,content.slice(0,content.indexOf('>')+1));
    save(`logo-${theme}.svg`,outlined);
    await png(`logo-${theme}.svg`,1856);
    const latin=svg(`<g transform="translate(0 -7) scale(.6)">${latinMark(a,c)}</g><text x="105" y="59" fill="${text}" font-family="IBM Plex Sans" font-weight="600" font-size="48">Alex Tsvetanov</text>`,464,88,'ATs');
    save(`ats-logo-${theme}.svg`,convertSVGTextToPath(latin).toString().replace(/<svg\b[^>]*>/,latin.slice(0,latin.indexOf('>')+1)));
    await png(`ats-logo-${theme}.svg`,1856);
  }
  save('favicon.svg',svg(`<rect width="16" height="16" rx="3" fill="#0E0E10"/><path fill="#F4F4F2" d="${microA}"/><path fill="#1FE07A" d="${microTse}"/>`,16,16));
  save('ats-favicon.svg',svg(`<rect width="16" height="16" rx="3" fill="#0E0E10"/><path fill="#F4F4F2" d="${microLatinA}"/><path fill="#1FE07A" d="${microLatinTs}"/>`,16,16,'ATs'));
  const sizes=[16,24,32,48,180,192,512];
  for(const prefix of ['', 'ats-']) {
    for(const size of sizes) {
      if (size >= 32) {
        const artwork=svg('<rect width="160" height="160" rx="30" fill="#0E0E10"/>'+(prefix ? latinMark : mark)('#F4F4F2','#1FE07A'),160,160,prefix ? 'ATs' : 'АЦ');
        await sharp(Buffer.from(artwork),{density:384}).resize(size,size).png().toFile(path.join(out,`${prefix}icon-${size}.png`));
      } else await png(`${prefix}favicon.svg`,size,`${prefix}icon-${size}.png`);
    }
    const frames=[16,32,48].map(s=>fs.readFileSync(path.join(out,`${prefix}icon-${s}.png`)));
    const header=Buffer.alloc(54); header.writeUInt16LE(1,2);header.writeUInt16LE(3,4);
    let offset=54;
    frames.forEach((f,i)=>{const p=6+i*16;header[p]=header[p+1]=[16,32,48][i];header.writeUInt16LE(1,p+4);header.writeUInt16LE(32,p+6);header.writeUInt32LE(f.length,p+8);header.writeUInt32LE(offset,p+12);offset+=f.length;});
    save(`${prefix}favicon.ico`,Buffer.concat([header,...frames]));
  }
  save('geometry.json',JSON.stringify({viewBox:'0 0 160 160',parts:[A,TSE],assembly:[leftA,rightA,TSE],descent}));
  save('ats-geometry.json',JSON.stringify({viewBox:'0 0 160 160',parts:[A,T+S],assembly:[leftA,rightA,T+S],descent}));
  // Both review pages share one layout source. Only their identity assets differ.
  const homepage=fs.readFileSync(path.resolve(__dirname,'../index.html'),'utf8');
  const latinPage=homepage.replace('data-logo="ac"','data-logo="ats"').replaceAll('assets/brand/symbol.svg','assets/brand/ats-symbol.svg').replaceAll('assets/brand/favicon.','assets/brand/ats-favicon.').replaceAll('assets/brand/icon-180.png','assets/brand/ats-icon-180.png').replace('<span>АЦ</span>','<span>ATs</span>');
  fs.writeFileSync(path.resolve(__dirname,'../ats.html'),latinPage);
  for (const file of fs.readdirSync(out).filter(f=>f.endsWith('.svg'))) {
    const text=fs.readFileSync(path.join(out,file),'utf8');
    assert(text.includes('viewBox='));
    assert(!/<(?:text|image|script|filter)[\s>]/.test(text),`${file} must be standalone paths`);
  }
  const {data}=await sharp(path.join(out,'icon-16.png')).ensureAlpha().raw().toBuffer({resolveWithObject:true});
  const green=(x,y)=>data[(y*16+x)*4+1]>130 && data[(y*16+x)*4]<130;
  const dark=(x,y)=>data[(y*16+x)*4+1]<110;
  assert(green(12,7),'Right Ц stem survives');
  assert(green(6,10) && green(6,11),'Trimmed left Ц stem survives at16px');
  assert(green(13,13),'Ц descender survives');
  assert(dark(10,10),'Ц opening stays open');
  assert(dark(6,6),'А opening stays open');
  for(const [a,c,name] of [[A,TSE,'master'],[microA,microTse,'micro']]) {
    const [,ay,ax,bx,by]=a.match(/L[\d.]+ ([\d.]+)H([\d.]+)L([\d.]+) ([\d.]+)H/).map(Number);
    const [,cx,cy,dx,dy]=c.match(/^M([\d.]+) ([\d.]+)L([\d.]+) ([\d.]+)/).map(Number);
    assert(Math.abs((bx-ax)*(dy-cy)-(by-ay)*(dx-cx))<1e-9,`${name}: A and Ц cuts must be parallel`);
    assert.equal(dy,ay,`${name}: Ц tip must align with the A crossbar top`);
    console.log(`PASS: ${name} A/Ц cut tips align at y=${ay} and have identical angles (${Math.atan2(Math.abs(by-ay),Math.abs(bx-ax))*180/Math.PI} degrees).`);
  }
  const cyrillic=await sharp(path.join(out,'symbol-black.svg')).resize(160,160).ensureAlpha().raw().toBuffer();
  const cyrillicInk=(x,y)=>cyrillic[(y*160+x)*4+3]>200;
  assert(cyrillicInk(67,99) && cyrillicInk(67,108),'Trimmed Ц bevel joins a straight left stem');
  assert(!cyrillicInk(74,94),'Vertical trim removes the former inner upper stem');
  assert(!cyrillicInk(70,84) && !cyrillicInk(60,99),'Ц top is bevelled and has no projecting cap');
  assert(!cyrillicInk(79,76),'Ц bevel tip remains separate from the A right leg');
  assert(!cyrillicInk(58,94),'A/Ц clearance stays open in monochrome');
  assert(cyrillicInk(127,75) && cyrillicInk(140,134),'Ц right stem and descender survive in monochrome');
  assert(!cyrillicInk(97,108) && cyrillicInk(97,121),'Ц remains open above its bottom joining stroke');
  const mono=await sharp(path.join(out,'ats-symbol-black.svg')).resize(160,160).ensureAlpha().raw().toBuffer();
  const ink=(x,y)=>mono[(y*160+x)*4+3]>200;
  assert(ink(77,122) && ink(70,94) && ink(127,94),'T has a nested stem and a crossbar on both sides of A');
  assert(!ink(58,94) && !ink(86,90) && !ink(110,96),'Interlock clearances stay open in monochrome');
  assert(ink(130,110) && ink(111,135) && !ink(108,127),'Lowercase s has two substantial strokes and an open lower counter');
  for(const size of sizes) assert.equal((await sharp(path.join(out,`icon-${size}.png`)).metadata()).width,size);
  // The only permitted raster difference is antialiasing on the two pieces' shared ridge.
  for(const size of [160,640,1024]) {
    const raster=async paths=>sharp(Buffer.from(svg(paths.map(d=>`<path fill="#000" d="${d}"/>`).join('')))).resize(size,size).ensureAlpha().raw().toBuffer();
    const original=await raster([A]), assembled=await raster([leftA,rightA]);
    let seamPixels=0,maxSeamDelta=0;
    for(let y=0;y<size;y++) for(let x=0;x<size;x++) {
      const delta=Math.abs(original[(y*size+x)*4+3]-assembled[(y*size+x)*4+3]);
      if(delta<=1) continue;
      const atRidge=Math.abs((x+.5)*160/size-68)<=160/size*2 && (y+.5)*160/size>=24-160/size*2 && (y+.5)*160/size<=52+160/size*2;
      assert(atRidge,`A assembly changes the silhouette at ${size}px (${x},${y})`);
      seamPixels++;maxSeamDelta=Math.max(maxSeamDelta,delta);
    }
    console.log(`PASS: A assembly ${size}px: unchanged outside ridge; ${seamPixels} antialiased seam pixels, max alpha delta ${maxSeamDelta}.`);
  }
  assert.equal(descent.parts.length,4,'Descent has three independent chevrons and a baseline');
  // Compare the actual rendered mark with its mirror, including at the footer's display size.
  for(const size of [44,160,1024]) {
    const data=await sharp(path.join(out,'descent-symbol.svg')).resize(size,size).ensureAlpha().raw().toBuffer();
    let maxDelta=0;
    for(let y=0;y<size;y++) for(let x=0;x<size/2;x++) {
      maxDelta=Math.max(maxDelta,Math.abs(data[(y*size+x)*4+3]-data[(y*size+size-1-x)*4+3]));
    }
    // SVG edge antialiasing differs slightly between rising and falling diagonals.
    assert(maxDelta<=20,`Descent silhouette must mirror at ${size}px; alpha delta ${maxDelta}`);
    console.log(`PASS: upright descent mirrored silhouette at ${size}px; max edge alpha delta ${maxDelta}/255.`);
  }
  console.log('PASS: АЦ upright left stem with bevel only, open counter and descender; A and ATs geometry unchanged.');
  console.log('PASS: ATs interlock crossbar, stem, lowercase s and monochrome clearances; four independent descent contours.');
  console.log('PASS: vector-only logos; independently rendered16–512px PNGs and16/32/48ICO; А/Ц openings, both Ц stems and tail remain visible at16px.');
  console.log('Reference: grok-image-b4df27f3-3f91-4dd5-ac07-0654737baaff.jpg, top-left option1.');
  console.log('Output:',out);
}
main().catch(e=>{console.error(e);process.exitCode=1});
