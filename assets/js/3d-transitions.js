/**
 * 3D Scroll Transitions — Z-Axis Dive Effect
 * Shared across all page variants (Bootstrap & Tailwind).
 * Uses GSAP ScrollTrigger + Lenis for smooth, immersive scroll transitions.
 * All HTML stays in the DOM — fully SEO-indexable.
 *
 * Glitch fixes applied:
 *  1. Perspective is set on a dedicated inner wrapper injected around sections,
 *     NOT on body/scroll-root — prevents fixed/sticky elements (nav, sidebar)
 *     from being pulled into the 3D stacking context and flickering.
 *  2. Entrance and exit use a single contiguous timeline per section with one
 *     ScrollTrigger — eliminates two competing scrub tweens fighting over the
 *     same CSS properties (z, opacity) which caused jitter/snap.
 *  3. gsap.set() for initial hidden state is deferred until after
 *     ScrollTrigger.refresh() — prevents sections above the fold being stuck
 *     invisible when the page loads mid-scroll (e.g. anchor links).
 *  4. Fog background color is read lazily from the section itself, not once
 *     from body at injection time — correct colour on all themes.
 *  5. Lenis raf is driven exclusively via gsap.ticker when GSAP is present;
 *     the rAF fallback loop is only used when GSAP is absent — prevents the
 *     double-drive stutter that occurred when both ran simultaneously.
 *  6. overflow-x clip on the perspective container is replaced with
 *     overflow:visible so translateZ children are never clipped mid-flight.
 */
(function () {
  'use strict';

  /* ─── FPS Monitor with Auto-Fallback ──────────────────────────── */
  var perfState = { lowPerf: false, samples: [], startTime: 0, monitoring: true };

  function startFPSMonitor() {
    perfState.startTime = performance.now();
    var lastFrame = performance.now();

    function tick() {
      if (!perfState.monitoring) return;
      var now = performance.now();
      var delta = now - lastFrame;
      lastFrame = now;
      if (delta > 0) perfState.samples.push(1000 / delta);

      if (perfState.samples.length >= 120) {
        var avg = perfState.samples.reduce(function (a, b) { return a + b; }, 0) / perfState.samples.length;
        if (avg < 30) {
          perfState.lowPerf = true;
          perfState.monitoring = false;
          document.documentElement.classList.add('low-perf');
          console.warn('[3D-Transitions] Low FPS detected (' + Math.round(avg) + '), reducing intensity.');
          reduceTo2D();
          return;
        }
        perfState.samples = [];
      }

      if (now - perfState.startTime > 8000) {
        perfState.monitoring = false;
        return;
      }
      requestAnimationFrame(tick);
    }
    requestAnimationFrame(tick);
  }

  function reduceTo2D() {
    if (typeof ScrollTrigger !== 'undefined') {
      ScrollTrigger.getAll().forEach(function (st) {
        if (st.vars && st.vars._is3d) st.kill();
      });
    }
    document.querySelectorAll('[data-scene]').forEach(function (el) {
      gsap.set(el, { clearProps: 'all' });
    });
  }

  /* ─── Lenis Smooth Scroll ─────────────────────────────────────── */
  function initLenis() {
    if (typeof Lenis === 'undefined') return null;

    var lenis = new Lenis({
      duration: 1.2,
      easing: function (t) { return Math.min(1, 1.001 - Math.pow(2, -10 * t)); },
      orientation: 'vertical',
      gestureOrientation: 'vertical',
      smoothWheel: true,
      wheelMultiplier: 1,
      touchMultiplier: 2,
      infinite: false
    });

    if (window.gsap) {
      // Fix 5: Only use GSAP ticker — never also start rAF loop
      gsap.ticker.add(function (time) { lenis.raf(time * 1000); });
      gsap.ticker.lagSmoothing(0);
    } else {
      // GSAP absent — use rAF loop only
      (function raf(time) { lenis.raf(time); requestAnimationFrame(raf); })(performance.now());
    }

    if (typeof ScrollTrigger !== 'undefined') {
      lenis.on('scroll', function () { ScrollTrigger.update(); });
    }

    return lenis;
  }

  /* ─── Detect Page Type ────────────────────────────────────────── */
  function getPageConfig() {
    var scrollRoot = document.getElementById('scroll-root');
    if (scrollRoot) {
      return {
        type: 'tailwind',
        perspectiveHost: scrollRoot,
        sections: Array.prototype.slice.call(scrollRoot.querySelectorAll('.scene'))
      };
    }
    var main = document.getElementById('main');
    var hero = document.getElementById('hero');
    var allSections = [];
    if (hero) allSections.push(hero);
    if (main) {
      main.querySelectorAll('section').forEach(function (s) { allSections.push(s); });
    }
    return {
      type: 'bootstrap',
      perspectiveHost: document.body,
      sections: allSections
    };
  }

  /* ─── 3D Perspective Setup ────────────────────────────────────── */
  function setupPerspective(config) {
    if (config.type === 'tailwind') {
      // Tailwind pages: inject a dedicated perspective wrapper inside #scroll-root
      // so the fixed side-nav (outside scroll-root) is never inside the 3D context.
      var host = config.perspectiveHost;
      var wrapper = document.getElementById('_3d-perspective-root');
      if (!wrapper) {
        wrapper = document.createElement('div');
        wrapper.id = '_3d-perspective-root';
        wrapper.style.cssText = [
          'perspective:1200px',
          'perspective-origin:50% 50%',
          'overflow:visible',
          'position:relative',
          'width:100%'
        ].join(';');

        // All .scene elements are direct children of #scroll-root
        var directChildren = config.sections.filter(function (s) {
          return s.parentNode === host;
        });

        if (directChildren.length > 0) {
          host.insertBefore(wrapper, directChildren[0]);
          directChildren.forEach(function (section) {
            wrapper.appendChild(section);
          });
        } else {
          // Fallback: just set perspective on scroll-root itself
          host.style.perspective = '1200px';
          host.style.perspectiveOrigin = '50% 50%';
        }
      }
    } else {
      // Bootstrap pages: perspective on body is safe.
      // CSS spec: position:fixed elements ignore ancestor perspective unless
      // the ancestor has a CSS transform — body has none, so the fixed
      // sidebar/header won't be pulled into the 3D stacking context.
      document.body.style.perspective = '1200px';
      document.body.style.perspectiveOrigin = '50% 50%';
    }

    config.sections.forEach(function (section) {
      section.setAttribute('data-scene', 'true');
      section.style.transformStyle = 'preserve-3d';
      section.style.willChange = 'transform, opacity';
      section.style.backfaceVisibility = 'hidden';
      section.style.webkitBackfaceVisibility = 'hidden';
    });
  }

  /* ─── Section Entrance / Exit Animations ──────────────────────── */
  function initSectionTransitions(config) {
    if (!window.gsap || typeof ScrollTrigger === 'undefined') {
      console.warn('[3D-Transitions] GSAP or ScrollTrigger missing.');
      return;
    }
    gsap.registerPlugin(ScrollTrigger);

    // Fix 3: Collect initial states but apply AFTER refresh
    var initialStates = [];

    config.sections.forEach(function (section, index) {
      if (index === 0) {
        // Hero / first section — exit only (push away as user scrolls down)
        gsap.to(section, {
          z: 280,
          rotateX: -1.5,
          opacity: 0.25,
          scale: 0.93,
          ease: 'none',
          scrollTrigger: {
            trigger: section,
            start: 'top top',
            end: 'bottom top',
            scrub: 1.5,
            _is3d: true
          }
        });
        return;
      }

      // Fix 2: Single timeline spanning entrance → resting → exit in one scrub
      // Keyframes: [enter far back] → [center, fully visible] → [exit past camera]
      // Using a fromTo with keyframes array on a single ScrollTrigger avoids
      // two competing tweens on the same properties.
      initialStates.push({ el: section, props: { z: -260, rotateX: 3, opacity: 0, scale: 0.88, transformOrigin: '50% 50%' } });

      var tl = gsap.timeline({
        scrollTrigger: {
          trigger: section,
          start: 'top 90%',      // begin entering
          end: 'bottom -10%',    // finish exiting
          scrub: 1.2,
          _is3d: true
        }
      });

      tl.to(section, {
        z: 0,
        rotateX: 0,
        opacity: 1,
        scale: 1,
        ease: 'power2.out',
        duration: 0.45
      })
      .to(section, {
        z: 220,
        rotateX: -1.5,
        opacity: 0.35,
        scale: 0.94,
        ease: 'power1.in',
        duration: 0.55
      });
    });

    // Fix 3: Refresh first so GSAP knows real heights, then apply hidden state
    ScrollTrigger.refresh();
    initialStates.forEach(function (item) {
      // Only hide if truly below the fold
      var rect = item.el.getBoundingClientRect();
      if (rect.top > window.innerHeight * 0.95) {
        gsap.set(item.el, item.props);
      }
    });
  }

  /* ─── Inner Element Parallax ──────────────────────────────────── */
  function initParallaxLayers(config) {
    if (!window.gsap || typeof ScrollTrigger === 'undefined') return;

    config.sections.forEach(function (section) {
      var headlines = section.querySelectorAll('h1, h2, .nexus-headline, .about-headline, .lab-headline, .stage-headline, .testimonials-headline, .section-title h2');
      headlines.forEach(function (h) {
        gsap.to(h, {
          z: 35,
          y: -12,
          ease: 'none',
          scrollTrigger: {
            trigger: section,
            start: 'top bottom',
            end: 'bottom top',
            scrub: 2,
            _is3d: true
          }
        });
      });

      var cards = section.querySelectorAll('.story-card, .testimonial-card, .skill-category, .project-card, .resume-item, .count-box');
      cards.forEach(function (card, i) {
        gsap.from(card, {
          z: -50 - (i % 3) * 15,
          opacity: 0,
          y: 25 + (i % 3) * 8,
          ease: 'power2.out',
          scrollTrigger: {
            trigger: card,
            start: 'top 88%',
            end: 'top 52%',
            scrub: 1,
            _is3d: true
          }
        });
      });

      var images = section.querySelectorAll('.portrait-container, .img-fluid, .testimonial-img, .testimonial-avatar');
      images.forEach(function (img) {
        gsap.to(img, {
          z: 20,
          y: -8,
          ease: 'none',
          scrollTrigger: {
            trigger: section,
            start: 'top bottom',
            end: 'bottom top',
            scrub: 3,
            _is3d: true
          }
        });
      });
    });
  }

  /* ─── Fog / Depth Fade Overlays ───────────────────────────────── */
  function initFogOverlays(config) {
    if (!window.gsap || typeof ScrollTrigger === 'undefined') return;

    config.sections.forEach(function (section, index) {
      if (index === 0) return;

      if (getComputedStyle(section).position === 'static') {
        section.style.position = 'relative';
      }

      var fog = document.createElement('div');
      fog.className = 'scene-fog';

      // Fix 4: Read colour from the section itself, not from body once
      var bgColor = getComputedStyle(section).backgroundColor;
      fog.style.cssText = [
        'position:absolute',
        'inset:0',
        'pointer-events:none',
        'z-index:50',
        'opacity:1',
        'background:linear-gradient(180deg,' + bgColor + ' 0%,transparent 28%,transparent 72%,' + bgColor + ' 100%)'
      ].join(';');
      section.appendChild(fog);

      // Single timeline for fog: fade out → stay clear → fade back in
      var fogTl = gsap.timeline({
        scrollTrigger: {
          trigger: section,
          start: 'top 82%',
          end: 'bottom 5%',
          scrub: 1,
          _is3d: true
        }
      });

      fogTl
        .to(fog, { opacity: 0, ease: 'power1.out', duration: 0.4 })
        .to(fog, { opacity: 0, ease: 'none', duration: 0.2 })
        .to(fog, { opacity: 0.65, ease: 'power1.in', duration: 0.4 });
    });
  }

  /* ─── Bootstrap-specific Enhancements ──────────────────────────── */
  function initBootstrapEnhancements(config) {
    if (config.type !== 'bootstrap') return;
    if (!window.gsap || typeof ScrollTrigger === 'undefined') return;

    var bars = document.querySelectorAll('.progress');
    bars.forEach(function (bar) {
      gsap.from(bar, {
        z: -35,
        x: -15,
        opacity: 0,
        ease: 'power2.out',
        scrollTrigger: {
          trigger: bar,
          start: 'top 90%',
          end: 'top 68%',
          scrub: 0.8,
          _is3d: true
        }
      });
    });
  }

  /* ─── Initialize Everything ───────────────────────────────────── */
  function init() {
    var config = getPageConfig();
    if (config.sections.length === 0) {
      console.warn('[3D-Transitions] No sections found.');
      return;
    }

    setupPerspective(config);
    var lenis = initLenis(); // eslint-disable-line no-unused-vars
    initSectionTransitions(config);   // includes ScrollTrigger.refresh()
    initParallaxLayers(config);
    initFogOverlays(config);
    initBootstrapEnhancements(config);
    startFPSMonitor();

    console.log('[3D-Transitions] Initialized (' + config.type + ' mode, ' + config.sections.length + ' sections)');
  }

  if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', init);
  } else {
    setTimeout(init, 120);
  }

})();
