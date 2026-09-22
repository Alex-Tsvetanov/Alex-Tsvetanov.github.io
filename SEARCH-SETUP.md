# Search and analytics

The six portfolio layouts use https://alex-tsvetanov.github.io/ as their canonical address. Search engines may select a different canonical; this is a signal, not a guarantee. All layouts remain accessible. The merchandise concept remains noindex.

The pages include visible profile and project summaries, source links, Person/ProfilePage structured data, social previews, and optimized legacy hero/portrait images. robots.txt permits crawling; sitemap.xml lists the preferred homepage. No special AI schema or llms.txt is required by Google for AI search eligibility.

## After deployment

1. Add a URL-prefix property for `https://alex-tsvetanov.github.io/` in [Google Search Console](https://search.google.com/search-console/). Verify ownership using Google's supplied HTML file or meta tag; never use a fabricated verification token.
2. Submit `https://alex-tsvetanov.github.io/sitemap.xml`. Inspect the homepage and request indexing. Check Google's selected canonical, indexing errors, queries, impressions and clicks. Changes take time to be crawled and do not guarantee position one.
3. Optionally import the verified property into [Bing Webmaster Tools](https://www.bing.com/webmasters/) and submit the same sitemap.
4. Keep project repositories, publications, talk pages and professional profiles linking to the homepage. Publish substantive project/research updates with evidence and descriptive titles. Avoid bought links, keyword stuffing and unsupported claims.

## Optional Google Analytics 4

Analytics measures results; it does not improve ranking. Tracking is disabled until a real property is configured.

1. In [Google Analytics](https://analytics.google.com/), create/select a GA4 property and a Web data stream for the production site.
2. Disable enhanced measurement in that stream: this site sends one page view and its own minimal contact, CV-download and outbound-link events. This avoids duplicate events and automatic collection of complete link URLs.
3. Copy the stream's public measurement ID (`G-…`) into `assets/js/analytics-config.js` and deploy. Do not put API secrets in this file.
4. On production, choose **Allow analytics** and verify a single page view in Realtime. Confirm **No thanks** makes no Google Analytics request in a fresh session. Use **Analytics preferences** near the bottom of each portfolio page or on the privacy page to withdraw consent.
5. Optional: link GA4 and Search Console in the account settings. Use the custom contact/CV events as key events if useful.

The shared loader runs only on the production hostname, loads Google only after consent, excludes query strings/fragments from explicit page locations, and stores the choice for 180 days. Advertising consent stays denied. Custom outbound events contain only the destination hostname. Review the privacy page if collection changes.

## Checks

Run from the repository root:

```
python3 scripts/check-discovery.py
node scripts/check-analytics.cjs
python3 preview/scripts/check-preview.py
```

References: [Google AI search guidance](https://developers.google.com/search/docs/appearance/ai-features), [canonical URLs](https://developers.google.com/search/docs/crawling-indexing/consolidate-duplicate-urls), [profile structured data](https://developers.google.com/search/docs/appearance/structured-data/profile-page), [Google consent](https://developers.google.com/tag-platform/security/guides/consent).
