(() => {
  const products = {
    jacket: {name: 'The leather jacket', mark: 'ac', description: 'A leather jacket concept with a compact chest mark, kept clear of the zip.', colors: [
      {name: 'Black', hex: '#202020'}, {name: 'Espresso', hex: '#4c362c'}, {name: 'Chalk', hex: '#e9dfcc', light: true}]},
    hoodie: {name: 'Foundation hoodie', mark: 'descent', description: 'A hoodie concept carrying your chosen mark on the chest.', colors: [
      {name: 'Black', hex: '#202020'}, {name: 'Forest', hex: '#203d30'}, {name: 'Stone', hex: '#cbc4b5', light: true}]},
    tee: {name: 'Everyday tee', mark: 'ats', description: 'A T-shirt concept with a small, single-colour chest mark.', colors: [
      {name: 'Black', hex: '#202020'}, {name: 'Off-white', hex: '#eeede4', light: true}, {name: 'Forest', hex: '#203d30'}]}
  };
  const marks = {ac: 'АЦ', ats: 'ATs', descent: 'All the way down'};
  const inks = ['white', 'green', 'black'];
  const inkNames = {white: 'Ivory', green: 'Green', black: 'Black'};
  const sizes = ['XS', 'S', 'M', 'L', 'XL', 'XXL'];
  const storageKey = 'ats-merch-selection-v1';
  const limit = 50;

  function normalize(value) {
    if (!value || typeof value !== 'object' || Array.isArray(value)
      || typeof value.product !== 'string' || !Object.hasOwn(products, value.product)
      || !Number.isInteger(value.color) || value.color < 0 || value.color > 2
      || typeof value.mark !== 'string' || !Object.hasOwn(marks, value.mark)
      || !inks.includes(value.ink) || !sizes.includes(value.size)) return null;
    return {product: value.product, color: value.color, mark: value.mark, ink: value.ink, size: value.size};
  }
  const key = item => [item.product, item.color, item.mark, item.ink, item.size].join('|');
  function validateBag(values) {
    if (!Array.isArray(values)) return [];
    const seen = new Set();
    return values.slice(0, limit).map(normalize).filter(item => {
      if (!item || seen.has(key(item))) return false;
      seen.add(key(item)); return true;
    });
  }
  function addSelection(values, value) {
    const items = validateBag(values), item = normalize(value);
    if (!item) return {items, status: 'invalid'};
    if (items.some(saved => key(saved) === key(item))) return {items, status: 'duplicate'};
    if (items.length === limit) return {items, status: 'full'};
    return {items: [...items, item], status: 'added'};
  }
  function logoSource(mark, ink) {
    if (!Object.hasOwn(marks, mark) || !inks.includes(ink)) throw new RangeError('Unknown mark or ink');
    const name = mark === 'ac' ? 'symbol' : mark === 'ats' ? 'ats-symbol' : 'descent-symbol';
    const suffix = mark === 'descent' && ink === 'green' ? '' : `-${ink}`;
    return `assets/brand/${name}${suffix}.svg?v=aligned-cut-5`;
  }
  function photoSource(product) {
    if (!Object.hasOwn(products, product)) throw new RangeError('Unknown garment');
    return `assets/brand/merch/${product}-colors.webp`;
  }
  const defaultInk = (product, color) => products[product].colors[color].light ? 'black' : 'white';
  const describe = item => `${products[item.product].name} · ${products[item.product].colors[item.color].name} · ${marks[item.mark]} · ${inkNames[item.ink]} ink · ${item.size}`;
  function selectionText(values) {
    return ['Alex Tsvetanov — saved merchandise concepts', '', ...validateBag(values).map((item, index) => `${index + 1}. ${describe(item)}`), '',
      'Local design preview only. This is not an order, payment request or production specification.', ''].join('\n');
  }

  // The same small data checks run in Node without a browser or dependencies.
  if (typeof module !== 'undefined' && module.exports) module.exports = {products, marks, inks, sizes, normalize, validateBag, addSelection, logoSource, photoSource, defaultInk, selectionText};
  if (typeof document === 'undefined') return;
  const productDialog = document.querySelector('#product-dialog');
  const bagDialog = document.querySelector('#bag-dialog');
  if (!productDialog || !bagDialog) return;
  const form = document.querySelector('#product-options');
  const preview = document.querySelector('#product-preview');
  const colorOptions = document.querySelector('#product-colors');
  const sizeSelect = document.querySelector('#product-size');
  const save = document.querySelector('#save-selection');
  const saveNote = form.querySelector('.save-note');
  const defaultSaveNote = saveNote.textContent;
  saveNote.setAttribute('aria-live', 'polite');
  const bagItems = document.querySelector('#bag-items');
  const download = document.querySelector('#download-selection');
  const status = document.querySelector('#store-status');
  const openBag = document.querySelector('#open-bag');
  const openers = new WeakMap();
  let activeProduct = 'jacket', bag = [], storageUnavailable = false, statusTimer;
  const announce = message => {
    clearTimeout(statusTimer);
    status.textContent = message + (storageUnavailable ? ' Saved for this visit only; browser storage is unavailable.' : '');
    statusTimer = setTimeout(() => { status.textContent = ''; }, 5000);
  };
  try {
    const saved = localStorage.getItem(storageKey);
    if (saved) { try { bag = validateBag(JSON.parse(saved)); } catch { bag = []; } }
  } catch { storageUnavailable = true; }
  function persist() {
    try { localStorage.setItem(storageKey, JSON.stringify(bag)); storageUnavailable = false; }
    catch { storageUnavailable = true; }
  }
  function paint(visual, item) {
    visual.dataset.product = item.product;
    visual.style.setProperty('--color-index', item.color);
    visual.setAttribute('role', 'img');
    visual.setAttribute('aria-label', describe(item));
    visual.querySelector('.garment-photo').src = photoSource(item.product);
    visual.querySelector('.product-mark').src = logoSource(item.mark, item.ink);
  }
  function selected() {
    return normalize({product: activeProduct, color: Number(colorOptions.querySelector('input:checked')?.value),
      mark: form.querySelector('[name="mark"]:checked')?.value, ink: form.querySelector('[name="ink"]:checked')?.value, size: sizeSelect.value});
  }
  function updatePreview() {
    const item = selected(); save.disabled = !item;
    if (!item) return;
    paint(preview, item);
    document.querySelector('#color-name').textContent = products[item.product].colors[item.color].name;
    const description = document.querySelector('#preview-description');
    if (description) description.textContent = describe(item);
  }
  function showDialog(dialog, opener) {
    openers.set(dialog, opener); dialog.showModal();
  }
  function openProduct(product, color, opener) {
    if (!Object.hasOwn(products, product)) return;
    activeProduct = product; form.reset();
    saveNote.textContent = defaultSaveNote;
    document.querySelector('#product-title').textContent = products[product].name;
    document.querySelector('#product-description').textContent = products[product].description;
    colorOptions.replaceChildren();
    products[product].colors.forEach((choice, index) => {
      const label = document.createElement('label'); label.className = 'color-option';
      const input = document.createElement('input'); input.type = 'radio'; input.name = 'color'; input.value = index; input.checked = index === color;
      const swatch = document.createElement('span'); swatch.className = 'color-swatch'; swatch.style.setProperty('--swatch', choice.hex); swatch.setAttribute('aria-hidden', 'true');
      const text = document.createElement('span'); text.className = 'color-label'; text.textContent = choice.name;
      label.append(input, swatch, text); colorOptions.append(label);
    });
    form.querySelectorAll('[name="mark"]').forEach(input => { input.checked = input.value === products[product].mark; });
    form.querySelectorAll('[name="ink"]').forEach(input => { input.checked = input.value === defaultInk(product, color); });
    sizeSelect.value = 'M'; updatePreview(); showDialog(productDialog, opener);
  }
  const customizers = new WeakSet();
  document.querySelectorAll('[data-product]').forEach(card => {
    const button = card.querySelector('[data-customize]'), product = card.dataset.product;
    if (!button || !Object.hasOwn(products, product)) return;
    let color = 0;
    const setColor = value => {
      if (!Number.isInteger(value) || value < 0 || value > 2) return;
      color = value;
      card.querySelectorAll('[data-card-color]').forEach(control => control.setAttribute('aria-pressed', String(Number(control.dataset.cardColor) === color)));
      const label = card.querySelector('.card-color-name');
      if (label) label.textContent = products[product].colors[color].name;
      paint(card.querySelector('.product-visual'), {product, color, mark: products[product].mark, ink: defaultInk(product, color), size: 'M'});
    };
    card.querySelectorAll('[data-card-color]').forEach(control => {
      control.disabled = false;
      control.addEventListener('click', () => setColor(Number(control.dataset.cardColor)));
    });
    setColor(0); button.disabled = false;
    customizers.add(button);
    button.addEventListener('click', () => openProduct(product, color, button));
  });
  document.querySelectorAll('[data-customize]').forEach(button => {
    const product = button.dataset.customize;
    if (customizers.has(button) || !Object.hasOwn(products, product)) return;
    button.disabled = false;
    button.addEventListener('click', () => openProduct(product, 0, button));
  });
  form.addEventListener('change', updatePreview);
  if (!form.contains(colorOptions)) colorOptions.addEventListener('change', updatePreview);
  form.addEventListener('submit', event => {
    event.preventDefault();
    const result = addSelection(bag, selected());
    if (result.status === 'invalid') return;
    if (result.status === 'full') {
      saveNote.textContent = 'Your saved bag has 50 concepts. Remove one before adding another.';
      return;
    }
    bag = result.items; persist(); renderBag(); productDialog.close();
    announce(result.status === 'duplicate' ? 'This configuration is already in your saved bag.' : 'Selection added to your saved bag.');
  });
  function renderBag() {
    document.querySelector('#bag-count').textContent = String(bag.length);
    document.querySelector('#bag-empty').hidden = bag.length > 0;
    download.disabled = bag.length === 0; bagItems.replaceChildren();
    bag.forEach((item, index) => {
      const row = document.createElement('li'); row.className = 'bag-item';
      const visual = document.createElement('div'); visual.className = 'bag-visual product-visual';
      for (const name of ['garment-photo', 'product-mark']) {
        const img = document.createElement('img'); img.className = name; img.alt = ''; visual.append(img);
      }
      paint(visual, item);
      const copy = document.createElement('div'); copy.className = 'bag-item-copy';
      const name = document.createElement('strong'); name.textContent = products[item.product].name;
      const details = document.createElement('p'); details.textContent = `${products[item.product].colors[item.color].name} · ${marks[item.mark]} · ${inkNames[item.ink]} ink · ${item.size}`;
      copy.append(name, details);
      const remove = document.createElement('button'); remove.className = 'bag-remove'; remove.type = 'button'; remove.textContent = 'Remove';
      remove.setAttribute('aria-label', `Remove ${describe(item)}`);
      remove.addEventListener('click', () => {
        bag.splice(index, 1); persist(); renderBag(); announce('Selection removed.');
        const buttons = bagItems.querySelectorAll('.bag-remove');
        (buttons[index] || buttons[buttons.length - 1] || bagDialog.querySelector('.close-dialog')).focus();
      });
      row.append(visual, copy, remove); bagItems.append(row);
    });
  }
  document.querySelectorAll('.close-dialog').forEach(button => button.addEventListener('click', () => button.closest('dialog').close()));
  for (const dialog of [productDialog, bagDialog]) dialog.addEventListener('close', () => openers.get(dialog)?.focus());
  openBag.disabled = false;
  openBag.addEventListener('click', () => { renderBag(); showDialog(bagDialog, openBag); });
  download.addEventListener('click', () => {
    if (!bag.length) return;
    const url = URL.createObjectURL(new Blob([selectionText(bag)], {type: 'text/plain;charset=utf-8'}));
    const link = document.createElement('a'); link.href = url; link.download = 'alex-tsvetanov-merch-selection.txt';
    document.body.append(link); link.click(); link.remove();
    setTimeout(() => URL.revokeObjectURL(url), 1000);
  });
  renderBag(); document.documentElement.classList.add('store-ready');
  if (storageUnavailable) announce('You can still build and download a selection.');
})();
