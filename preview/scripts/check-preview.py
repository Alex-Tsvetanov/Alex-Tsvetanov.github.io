"""Verify local page, asset and fragment links after moving the preview."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit
import re

base = Path(__file__).resolve().parents[1]

class Page(HTMLParser):
    def __init__(self, source):
        super().__init__()
        self.refs, self.ids = [], set()
        self.feed(source)

    def handle_starttag(self, tag, attrs):
        attrs = dict(attrs)
        if 'id' in attrs:
            self.ids.add(attrs['id'])
        for key in ('src', 'href'):
            if attrs.get(key):
                self.refs.append(attrs[key])
        for candidate in attrs.get('srcset', '').split(','):
            if candidate.strip():
                self.refs.append(candidate.split()[0])

count = 0
for file in base.glob('*.html'):
    page = Page(file.read_text())
    for ref in page.refs:
        url = urlsplit(ref)
        if url.scheme or url.netloc:
            continue
        target = ((base.parent / unquote(url.path).lstrip('/')) if url.path.startswith('/') else (file.parent / unquote(url.path))).resolve() if url.path else file
        if target.is_dir():
            target = target / 'index.html'
        assert target.is_file(), f'{file.name}: missing {ref}'
        if url.fragment and target.suffix == '.html':
            assert unquote(url.fragment) in Page(target.read_text()).ids, f'{file.name}: missing anchor {ref}'
        count += 1
for file in (base / 'assets/css').glob('*.css'):
    for ref in re.findall(r'url\([\s\'"]*([^\)\'"\s]+)', file.read_text()):
        if not urlsplit(ref).scheme:
            assert (file.parent / ref).is_file(), f'{file.name}: missing {ref}'
            count += 1
print(f'PASS: {count} preview links, images, downloads, fragments and CSS assets resolve.')
