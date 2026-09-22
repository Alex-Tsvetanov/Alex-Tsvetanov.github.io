(() => {
  'use strict';
  const id = window.siteAnalyticsId;
  if (!/^G-[A-Z0-9]+$/.test(id || '') || location.hostname !== 'alex-tsvetanov.github.io') return;
  const key = 'portfolio-analytics-consent-v1';
  const lifetime = 180 * 24 * 60 * 60 * 1000;
  let choice = null, loaded = false;
  try {
    const saved = JSON.parse(localStorage.getItem(key));
    if (saved && Number.isFinite(saved.time) && saved.time <= Date.now() && Date.now() - saved.time < lifetime && ['accepted', 'declined'].includes(saved.choice)) choice = saved.choice;
  } catch { /* Consent stays unset when storage is unavailable. */ }
  const disabled = `ga-disable-${id}`;
  window[disabled] = true;
  window.dataLayer = window.dataLayer || [];
  const tag = function () { window.dataLayer.push(arguments); };
  window.gtag = tag;
  tag('consent', 'default', { analytics_storage: 'denied', ad_storage: 'denied', ad_user_data: 'denied', ad_personalization: 'denied' });
  const panel = document.createElement('section');
  panel.className = 'analytics-consent';
  panel.setAttribute('aria-label', 'Analytics preferences');
  panel.innerHTML = '<p>Allow optional Google Analytics cookies to help me understand which portfolio pages people visit? No advertising tracking. <a href="/privacy.html">Privacy details</a></p><button type="button" data-choice="accepted">Allow analytics</button><button type="button" data-choice="declined">No thanks</button>';
  panel.hidden = choice !== null;
  document.body.append(panel);
  const settings = document.querySelectorAll('[data-analytics-settings]');
  settings.forEach(button => {
    button.hidden = false;
    button.addEventListener('click', () => { panel.hidden = false; panel.querySelector('button').focus(); });
  });
  function enable() {
    window[disabled] = false;
    tag('consent', 'update', { analytics_storage: 'granted' });
    if (loaded) return;
    loaded = true;
    tag('js', new Date());
    tag('config', id, {
      send_page_view: false, allow_google_signals: false, allow_ad_personalization_signals: false,
      page_location: location.origin + location.pathname,
      page_referrer: document.referrer ? new URL(document.referrer).origin : '',
      cookie_flags: 'SameSite=Lax;Secure'
    });
    tag('event', 'page_view', { page_location: location.origin + location.pathname, page_title: document.title });
    const script = document.createElement('script');
    script.async = true;
    script.src = `https://www.googletagmanager.com/gtag/js?id=${id}`;
    document.head.append(script);
  }
  function clearCookies() {
    for (const cookie of document.cookie.split(';')) {
      const name = cookie.trim().split('=')[0];
      if (!/^_ga(?:_|$)/.test(name)) continue;
      for (const domain of ['', `;domain=${location.hostname}`, `;domain=.${location.hostname}`]) {
        document.cookie = `${name}=;max-age=0;path=/${domain};SameSite=Lax;Secure`;
      }
    }
  }
  panel.addEventListener('click', event => {
    const button = event.target.closest('[data-choice]');
    if (!button) return;
    choice = button.dataset.choice;
    try { localStorage.setItem(key, JSON.stringify({choice, time: Date.now()})); } catch { /* Applies for this page only. */ }
    panel.hidden = true;
    if (choice === 'accepted') enable();
    else {
      window[disabled] = true;
      tag('consent', 'update', { analytics_storage: 'denied' });
      clearCookies();
      // Unload the Google tag entirely after withdrawal.
      if (loaded) location.reload();
    }
    settings[0]?.focus();
  });
  window.addEventListener('storage', event => { if (event.key === key) location.reload(); });
  document.addEventListener('click', event => {
    if (choice !== 'accepted') return;
    const link = event.target.closest('a[href]');
    if (!link) return;
    const url = new URL(link.href, location.href);
    if (url.protocol === 'mailto:') tag('event', 'contact_click', { method: 'email' });
    else if (url.origin === location.origin && /\/CV\.pdf$/i.test(url.pathname)) tag('event', 'cv_download');
    else if (url.protocol === 'https:' && url.origin !== location.origin) tag('event', 'outbound_click', { destination_host: url.hostname });
  });
  if (choice === 'accepted') enable();
})();
