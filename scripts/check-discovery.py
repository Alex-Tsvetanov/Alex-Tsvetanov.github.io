"""Check discoverability metadata and shared local resources on every layout."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import urlsplit
import json
import xml.etree.ElementTree as ET

ROOT = Path(__file__).resolve().parents[1]
CANONICAL = 'https://alex-tsvetanov.github.io/'
PAGES = ['index.html', 'index-dark.html', 'index-new.html', 'index-new-light.html', 'preview/index.html', 'preview/ats.html']

class Page(HTMLParser):
    def __init__(self):
        super().__init__(); self.tags = []; self.schema = []; self.read_schema = False
    def handle_starttag(self, tag, attrs):
        names = [key for key, _ in attrs]
        assert len(names) == len(set(names)), (tag, 'duplicate attributes', attrs)
        assert '/' not in names, (tag, 'misplaced self-closing slash')
        self.tags.append((tag, dict(attrs)))
        self.read_schema = tag == 'script' and dict(attrs).get('type') == 'application/ld+json'
    def handle_endtag(self, tag):
        if tag == 'script': self.read_schema = False
    def handle_data(self, data):
        if self.read_schema: self.schema.append(json.loads(data))

for name in PAGES:
    source = (ROOT / name).read_text(); page = Page(); page.feed(source)
    assert sum(t == 'title' for t, a in page.tags) == 1, name
    assert sum(t == 'h1' for t, a in page.tags) == 1, name
    canonicals = [a['href'] for t, a in page.tags if t == 'link' and a.get('rel') == 'canonical']
    assert canonicals == [CANONICAL], (name, canonicals)
    meta = {a.get('name', a.get('property')): a.get('content') for t, a in page.tags if t == 'meta'}
    assert meta['description'] and 'noindex' not in meta['robots'], name
    assert meta['og:url'] == CANONICAL and meta['twitter:creator'] == '@coder_of_worlds', name
    assert len(page.schema) == 1, name
    graph = page.schema[0]['@graph']
    assert {item['@type'] for item in graph} == {'Person', 'WebSite', 'ProfilePage'}, name
    assert next(item for item in graph if item['@type'] == 'ProfilePage')['mainEntity']['@id'] == CANONICAL + '#person'
    assert 'id="profile-facts-title"' in source and 'https://github.com/cpp-for-everything/ORM' in source, name
    for tag, attrs in page.tags:
        value = attrs.get('src') if tag == 'script' else attrs.get('href') if tag == 'link' else None
        if not value or urlsplit(value).scheme or value.startswith('//'): continue
        path = urlsplit(value).path
        target = ROOT / path.lstrip('/') if path.startswith('/') else (ROOT / name).parent / path
        assert target.exists(), (name, value)
    print('PASS', name)
urls = ET.parse(ROOT / 'sitemap.xml').findall('{*}url/{*}loc')
assert [u.text for u in urls] == [CANONICAL]
assert 'Sitemap: ' + CANONICAL + 'sitemap.xml' in (ROOT / 'robots.txt').read_text()
assert 'noindex' in (ROOT / 'preview/brand-review.html').read_text()
print('PASS sitemap, robots and store exclusion')
