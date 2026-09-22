(() => {
  const root = document.documentElement;
  root.classList.add('js');
  const hero = document.querySelector('.hero-story');
  const object = document.querySelector('#brand-object');
  const menu = document.querySelector('#menu-toggle');
  const nav = document.querySelector('#primary-nav');
  const motion = window.matchMedia('(prefers-reduced-motion: reduce)');
  const compact = window.matchMedia('(max-width: 768px)');
  const shortScreen = window.matchMedia('(max-height: 580px)');
  let ready = false;
  let queued = false;
  let pointerX = 0;
  let pointerY = 0;
  const fragments = [];
  const bar = document.querySelector('#hero-progress');

  const setMenu = open => {
    document.body.classList.toggle('menu-open', open);
    menu?.setAttribute('aria-expanded', String(open));
  };
  menu?.addEventListener('click', () => setMenu(menu.getAttribute('aria-expanded') !== 'true'));
  nav?.addEventListener('click', event => { if (event.target.closest('a')) setMenu(false); });
  document.addEventListener('keydown', event => {
    if (event.key === 'Escape' && document.body.classList.contains('menu-open')) {
      setMenu(false); menu.focus();
    }
  });

  const clamp = value => Math.max(0, Math.min(1, value));
  const ease = value => { const t = clamp(value); return t * t * (3 - 2 * t); };
  function sceneAt(progress) {
    const tilt = ease((progress - .08) / .25) * (1 - ease((progress - .65) / .25));
    return { x: 16 * tilt, y: -20 * tilt, z: -4 * tilt, pointer: tilt };
  }
  function fragmentAt(progress, index, mobile) {
    const reveal = ease((progress - .08 - index * .06) / .22);
    const remaining = 1 - ease((progress - .52 - index * .065) / .25);
    const spread = reveal * remaining;
    const spacing = mobile ? .65 : 1;
    // The chevrons turn into three separated letter pieces before those pieces assemble.
    const origins = [[-14, -14, 80, -16], [38, -40, -50, 17], [7, 15, 110, 8]];
    const [x, y, depth, tilt] = origins[index];
    return { x: x * spread * spacing, y: y * spread * spacing,
      depth: depth * spread * spacing, tilt: tilt * spread, turn: 180 * reveal };
  }
  // ponytail: one scroll-driven CSS scene; no frame sequence or render loop while idle.
  function render() {
    queued = false;
    if (!ready || motion.matches || shortScreen.matches) return;
    const rect = hero.getBoundingClientRect();
    const stage = hero.querySelector('.hero-stage');
    const progress = clamp(-rect.top / Math.max(1, rect.height - stage.offsetHeight));
    const state = sceneAt(progress);
    object.style.transform = `rotateX(${state.x + pointerY * state.pointer}deg) rotateY(${state.y + pointerX * state.pointer}deg) rotateZ(${state.z}deg)`;
    fragments.forEach(({element, turn}, index) => {
      const piece = fragmentAt(progress, index, compact.matches);
      element.style.transform = `translate3d(${piece.x}%,${piece.y}%,${piece.depth}px) rotateZ(${piece.tilt}deg)`;
      turn.style.transform = `rotateY(${piece.turn}deg)`;
    });
    object.classList.toggle('assembled', progress >= .94);
    if (bar) bar.style.transform = `scaleX(${progress})`;
    document.querySelectorAll('[data-depth]').forEach(element => {
      const box = element.getBoundingClientRect();
      if (box.bottom > 0 && box.top < window.innerHeight) {
        const position = clamp((window.innerHeight - box.top) / (window.innerHeight + box.height));
        element.style.transform = `perspective(1200px) rotateX(${(position - .5) * (compact.matches ? -2 : -5)}deg) translateY(${(position - .5) * -16}px)`;
      }
    });
  }
  function schedule() { if (!queued) { queued = true; requestAnimationFrame(render); } }
  function updateMotion() {
    const enhanced = ready && !motion.matches && !shortScreen.matches;
    root.classList.toggle('motion-ready', enhanced);

    if (!enhanced) {
      object?.style.removeProperty('transform');
      document.querySelectorAll('[data-depth]').forEach(el => el.style.removeProperty('transform'));
    }
    schedule();
  }
  motion.addEventListener('change', updateMotion);
  shortScreen.addEventListener('change', updateMotion);
  compact.addEventListener('change', schedule);
  window.addEventListener('scroll', schedule, {passive:true});
  window.addEventListener('resize', () => {
    if (window.innerWidth > 768) setMenu(false);
    schedule();
  }, {passive:true});
  const scene = document.querySelector('#brand-scene');
  scene?.addEventListener('pointermove', event => {
    if (event.pointerType !== 'mouse') return;
    const box = scene.getBoundingClientRect();
    pointerX = ((event.clientX - box.left) / box.width - .5) * 6;
    pointerY = -((event.clientY - box.top) / box.height - .5) * 6;
    schedule();
  });
  scene?.addEventListener('pointerleave', () => { pointerX = pointerY = 0; schedule(); });

  updateMotion();
  const prefix = root.dataset.logo === 'ats' ? 'ats-' : '';
  if (object && hero) fetch(`assets/brand/${prefix}geometry.json?v=aligned-cut-5`).then(response => {
    if (!response.ok) throw new Error('Logo geometry unavailable');
    return response.json();
  }).then(({viewBox, assembly, descent}) => {
    const ns = 'http://www.w3.org/2000/svg';
    const svgElement = (name, attributes) => {
      const element = document.createElementNS(ns, name);
      for (const [key, value] of Object.entries(attributes)) element.setAttribute(key, value);
      return element;
    };
    const solid = document.createElement('div'); solid.className = 'monogram-solid'; solid.setAttribute('aria-hidden','true');
    assembly.forEach((d, index) => {
      const element = document.createElement('div'); element.className = 'monogram-fragment';
      element.setAttribute('data-piece', ['a-left', 'a-right', prefix ? 'ts' : 'tse'][index]);
      const turn = document.createElement('div'); turn.className = 'monogram-turn';
      const chevron = descent.parts[index] + (index === 2 ? descent.parts[3] : '');
      for (const [name, shape] of [['descent', chevron], ['letter', d]]) {
        const face = document.createElement('div'); face.className = `monogram-face ${name}-face`;
        face.setAttribute('data-face', name);
        for (let layer = 0; layer < 9; layer++) {
          const front = layer === 8, green = name === 'descent' || index === 2;
          const slice = svgElement('svg', {viewBox, 'aria-hidden':'true'});
          slice.classList.add('monogram-slice'); slice.style.transform = `translateZ(${(layer - 8) * 1.4}px)`;
          slice.append(svgElement('path', {d: shape,
            fill:front ? (green ? '#1fe07a' : '#f4f4f2') : (green ? `hsl(147 72% ${16 + layer * 1.8}%)` : `hsl(190 7% ${29 + layer * 2.7}%)`)}));
          face.append(slice);
        }
        turn.append(face);
      }
      element.append(turn); fragments.push({element, turn}); solid.append(element);
    });
    object.append(solid); ready=true; updateMotion();
  }).catch(updateMotion); // Keep the static SVG if geometry cannot load.

  if (new URLSearchParams(location.search).has('motion-check')) {
    for (let index = 0; index < 3; index++) {
      console.assert(Object.values(fragmentAt(0,index,false)).every(value => value === 0), 'Start with the flat descent signature');
      const separated = fragmentAt(.46,index,false);
      console.assert(separated.turn === 180 && separated.x !== 0, 'Hold three separated letter pieces');
      const {turn, ...aligned} = fragmentAt(1,index,false);
      console.assert(turn === 180 && Object.values(aligned).every(value => value === 0), 'All three letter faces align exactly');
      for (let step = 0; step <= 100; step++) {
        console.assert(Object.values(fragmentAt(step / 100,index,false)).every(Number.isFinite), 'Finite piece positions');
      }
    }
    console.assert(fragmentAt(.8,0,false).x === 0 && fragmentAt(.8,2,false).x !== 0, 'Left A arrives before Ц / Ts');
    console.assert(fragmentAt(.46,0,true).depth < fragmentAt(.46,0,false).depth, 'Less depth on phones');
    console.assert(sceneAt(0).pointer === 0 && sceneAt(1).pointer === 0, 'Upright endpoints');
    console.info('Motion checks passed: descent signature, three solid letter pieces, exact assembly and reduced mobile depth.');
  }
})();
