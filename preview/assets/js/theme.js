(() => {
  const root = document.documentElement;
  const key = 'portfolio-theme';
  const system = window.matchMedia('(prefers-color-scheme: dark)');
  let preference = null;
  try { preference = localStorage.getItem(key); } catch { /* System preference works without storage. */ }
  if (!['light', 'dark'].includes(preference)) preference = null;
  function apply() {
    const theme = preference || (system.matches ? 'dark' : 'light');
    root.dataset.theme = theme;
    document.querySelector('meta[name="theme-color"]')?.setAttribute('content', theme === 'dark' ? '#0e0e10' : '#f4f4f2');
    document.querySelectorAll('[data-theme-toggle]').forEach(button => {
      button.hidden = false;
      button.textContent = theme === 'dark' ? '☀' : '☾';
      const label = `Switch to ${theme === 'dark' ? 'light' : 'dark'} theme`;
      button.setAttribute('aria-label', label);
      button.setAttribute('title', label);
    });
    document.querySelectorAll('img[data-theme-light]').forEach(img => {
      img.src = theme === 'light' ? img.dataset.themeLight : img.dataset.themeDark;
    });
  }
  apply(); // Runs in the head before the first paint.
  document.addEventListener('DOMContentLoaded', () => {
    apply();
    document.querySelectorAll('[data-theme-toggle]').forEach(button => button.addEventListener('click', () => {
      preference = root.dataset.theme === 'dark' ? 'light' : 'dark';
      try { localStorage.setItem(key, preference); } catch { /* Keep the selection for this page. */ }
      apply();
    }));
  });
  system.addEventListener('change', () => { if (!preference) apply(); });
  window.addEventListener('storage', event => {
    if (event.key !== key && event.key !== null) return;
    preference = ['light', 'dark'].includes(event.newValue) ? event.newValue : null;
    apply();
  });
})();
