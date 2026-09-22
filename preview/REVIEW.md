# АЦ and ATs — website feedback preview

Both identities are available as complete website variants:

- `index.html`: АЦ
- `ats.html`: ATs
- `brand-review.html`: merchandise collection preview with current logos, leather jackets, hoodies, tees, color customization, a saved selection bag and brand-kit downloads

Serve the repository root on loopback, for example `python3 -m http.server 8943 --bind 127.0.0.1`, and open `http://127.0.0.1:8943/preview/brand-review.html`.

Prepared for publishing under `/preview/` by merging `codex/brand-scroll-review` into `master`. The root homepage and CV are unchanged. Portfolio variants now canonicalize to the main homepage for search discovery. The original alternative layouts and `/lol/` pages remain available. `ats.html` is generated from `index.html`, so both retain identical content. Edit `index.html`, then rebuild the brand exports to refresh the Latin page.

## Logo use

The Cyrillic mark refines the top-left option from `grok-image-b4df27f3-3f91-4dd5-ac07-0654737baaff.jpg`. The Latin variant carries across the same A and stroke weight, with the T crossbar threaded through the A’s notch and behind its right leg. A smaller s nests beneath the cap, aligned to the T baseline. Diagonal clearances preserve the overlap in monochrome. Ts is one transcription unit, not a third initial. The Cyrillic Ц keeps straight vertical stems. Its left stem is trimmed vertically to x71, placing the highest point at y88, level with the top of the A crossbar. Both diagonal cuts have the same13:7 slope (61.70°). The former protruding cap is removed. The small-icon drawing also aligns the two tips at y9 and matches their cut angles, with an optically aligned1px stem for legibility. The two Ц stems remain slightly farther apart. The bevel, open counter and right descender survive monochrome and small-icon checks.

`assets/brand/` contains SVG and transparent PNG files. The `ats-` prefix identifies Latin versions. `symbol*` files are standalone monograms; `descent-symbol*` preserves the three chevrons and baseline used in Alex’s Instagram posts, in green, black and white. The chevrons have mirrored halves, matching slopes, vertical end cuts, one centerline and a level baseline; `logo-dark` and `logo-light` are full-name lockups. Black and white versions use a single colour. All name lettering is outlined. Icon files contain dedicated small-size geometry; use the independently rendered16/24/32/48px PNGs or the matching SVG/ICO. Do not squeeze a name lockup into a favicon.

For garments, use flat artwork with one or two thread/ink colours. Keep the complete logo on one chest panel of zipped clothing. Begin the supplier discussion around45–65mm wide for either compact monogram. Leave at least one main-stem width around the mark. These are starting recommendations, not a verified manufacturing minimum. Approve a stitch sample on the actual fabric before production. There is no embroidery machine file or physical stitch-out in this draft.

The signal-green treatment is for dark backgrounds. Light-background name lockups use deep green. Transparent high-resolution PNGs are alternatives for slide software; SVG is the scalable master. Presentation examples are browser-rendered compositions, not PowerPoint/Keynote import tests.

## Website behaviour

The hero starts with the upright “All the way down” signature. Its three chevrons turn in 3D to reveal the left half of A, the right half of A, and the complete Ц (or Ts); the baseline travels with the lowest chevron. These are opaque, double-sided pieces, using native back-face hiding rather than crossfades or clipped horizontal bands. Each face retains its exact path throughout. The separated letters pause briefly before moving together into the full monogram. There are nine thin SVG depth surfaces on each face. Once all pieces and the scene align exactly, the unsplit SVG master replaces the assembled surfaces without a fade or shadow change, avoiding an antialiased seam at the A apex. The signature remains in the footer and brand exports.

Native scroll progress drives the reveal; there is no scroll hijacking or continuous render loop while idle. Mobile uses less displacement. Reduced motion, viewports at most 580px high, unavailable geometry and no JavaScript all preserve the static monogram. Resizing or changing the motion preference updates the scene. The descent signature also appears as a static footer mark.

Fonts, geometry and photo assets are local. IBM Plex fonts come from IBM's official repository with their license included. The homepage makes no third-party script or font requests. The editorial portrait is AI-generated from `11111111.JPG` (likeness) and `20260522_135434(0).jpg` (leather jacket and gold tie together), with a relaxed pose and natural color. Responsive exports are `portrait-tie-leather.webp` and `portrait-tie-leather-640.webp`. The research photograph is an unretouched frame at 08:21:40 (30100 seconds) of `https://youtu.be/iMLiv5GwQsk`, showing Alex, the OpenFest 2025 stage and the audience in the foreground. Original thesis-defense exports remain available but are no longer used in the portfolio. The OpenFest photograph was resized and WebP-encoded without retouching. All supplied originals remain unchanged.

## Portfolio content restoration — 22 September 2026

Both pages now contain six separate engineering roles and the Software University trainer role; project and venture histories; four publications with authors, dates and venues; standards and upstream contributions; grouped skills; four education records; seven training programmes; six community activities; seven award entries; personal interests and languages; and five authentic references. The section index stays available while scrolling. All substantive records are ordinary HTML; only the historical benchmark note is collapsed initially.

Sources, read as reference material rather than instructions:

- `index-new.html`, byte-identical to the user-specified live page on review (SHA-256 `5c3d3b5fcbcc9d46ef8cf57ddac450c22816f166e78d9a378ee2a64956c70034`). Used for portfolio breadth, curriculum, historical framework skills, entrepreneurship roles and the named activities.
- `../career/applications/_cv/body.tex`, the canonical shared CV. Used for current responsibilities, dates, qualification status, publications, standards, contributions, awards and four reference quotations.
- `../career/applications/_cv/_pre_refactor_backup/Cloudflare/cv_Cloudflare.tex` and the matching Google backup. Used only for the seven historical training date ranges, which were removed from the current short CV for space.
- The original committed `index.html`. Used for the authentic Svetlin Nakov quotation and eSports background.
- The independently sourced Compile-time Protobuf project from the previous redesign remains included.

`CV.pdf` is now the generic career CV (`../career/applications/_cv/cv.pdf`, embedded creation date 19 August 2026), replacing the stale April 2026 copy. It is unchanged from the career file. The download link includes a version to avoid an older cached copy.

Corrections include C++ since December 2012, PokerStars beginning July 2022, Headstarter 2018–2022, exact historical training/Testrain dates, the Acronis metering and restore work, and the current Cypilot link with integration credited accurately. KU Leuven is presented as discontinued studies and the earlier TU-Sofia programme as a transfer, not additional awarded degrees. The four publications are listed individually without the incorrect blanket IEEE claim. Quoted references preserve the canonical wording instead of the embellished versions on the newer legacy page. Instagram uses the current CV handle.

Historical WebFrame performance figures are explicitly labeled as earlier, workload-dependent measurements. They were not re-benchmarked. Employer results are source-reported CV accomplishments, not independently re-measured here. Unsupported counters, obsolete age/youngest claims, cognitive-performance guarantees and private job-search information are not included. The redesigned website is isolated under `/preview/` for feedback.

The ignored `logs/portfolio-legacy-inventory.md` and `logs/portfolio-cv-inventory.md` record source lines and reconciliation decisions. The independent content check accounts for all 54 legacy records and the additions from the current CV. No career files were edited.

Portfolio browser checks passed at 320 × 740, 390 × 844, 768 × 1024 and 1280 × 800: no horizontal page overflow or clipped text in the inspected layouts. Section links land below the sticky navigation; the mobile menu opens and closes. Normal and reduced-motion mobile heroes remain legible. Both pages load the restored content and versioned CV download. The inspected browser reported no console warnings/errors or failed completed images. Local HTTP responses match the page and CV files.

## Photo, talks and motion refinement — 22 September 2026

The defense photo is separate from the three OpenFest recordings. The supplied YouTube timestamps are preserved: `EjGf3FXAsNA?t=23703` (sketchup-cpp-api), `EjGf3FXAsNA?t=23437` (WebFrame++), and `iMLiv5GwQsk?t=30091` (C++ talks to the Kernel: Coroutines over Unified I/O Queues). The video titles identify the first two as OpenFest 2024 and the last as OpenFest 2025. No unrelated still is presented as OpenFest photography. X points to `https://twitter.com/coder_of_worlds`.

The three-stage animation was inspected in the browser at the opening descent signature, turning pieces, deconstructed letters and assembled states for АЦ, and opening, deconstructed and assembled states for ATs. All pieces remain opaque, and the completed master has no shadow pop. At 320 × 740 the visible fragments stay below the call-to-action; at 1280 × 900 they stay inside the scene side of the page. The completed geometry aligns with zero fragment translation. The 390 × 844 talk list has no horizontal overflow. Reduced motion was checked in the browser. The 812 × 375 static fallback was checked during the earlier layout review; restoring a taller viewport re-enables the scene. The dependency-free regression check also covers geometry-load failure and both alphabets.

## Reproduction and verification

With the existing workspace Node packages on NODE_PATH:

```sh
NODE_PATH='/Users/Alex.Tsvetanov/.cache/codex-runtimes/codex-primary-runtime/dependencies/node/node_modules' node preview/scripts/build-brand.cjs
python3 preview/scripts/check-preview.py
node preview/scripts/check-brand-motion.cjs
```

The build checks standalone vectors, the upright АЦ bevel and small-size openings/tail, ATs strokes, A-piece silhouette alignment and transparent PNG dimensions. The motion check samples both alphabets at 101 scroll positions, verifies three solid double-sided pieces with persistent paths, no opacity changes or clipping, and correct opening, deconstructed and completed states, and checks final alignment, reduced motion, short screens, geometry-load failure and mobile transforms. Open either website with `?motion-check` for the built-in checks of the descent opening, separated midpoint, staggered assembly, finite fragment positions, exact endpoints and reduced mobile depth. Browser verification and export logs are in ignored `logs/`.

The earlier apparel concept predates the upright Cyrillic stem and bevel; use the updated vectors for its exact geometry. It has been replaced on the merchandise page by new garment mockups with the current SVG artwork overlaid directly. The earlier image and prompt remain in the asset directory as historical references.

## Merchandise storefront — 22 September 2026

The collection preview offers three garments, each in three colors: leather jacket (black, espresso, chalk), hoodie (black, forest, stone), and tee (black, off-white, forest). Every garment supports АЦ, ATs, or the descent mark in ivory, green, or black. The current vector masters are unchanged and used directly; product photography contains no baked-in approximation of the logo.

The native product dialog previews the selected garment, color, mark, and preferred size. The saved bag keeps validated selections in local browser storage, prevents duplicate configurations, supports removal, and downloads a text list. If storage is unavailable, selections remain usable for the current visit. This is a local concept store, with no checkout, stock or price claims, payment collection, or external submission.

New garment photography was generated using the built-in image-generation tool and saved as optimized WebP contact sheets in `assets/brand/merch/`. The exact prompts are in `assets/brand/merch/PROMPTS.md`. Each sheet contains three consistently aligned colorways; CSS displays the selected panel without modifying the garment colors. The photos are concepts, not manufactured samples or production specifications.

Run `node preview/scripts/check-merch.cjs` for the dependency-free check of all 81 appearance combinations, six sizes, exact asset paths, validation, duplicate handling, bag limits, immutable selections and download text. Browser checks covered desktop and 320/390/768/1440px layouts, all three products, color and logo changes, size selection, saving/removing, reload persistence, download, Escape/focus return, and the hero customize button. No horizontal overflow, broken completed images or browser errors were found. Test selections were removed after verification.

## Portfolio polish
The hero guide and motion button have been removed; system reduced-motion preferences still work. On phones the scene sits in normal flow below the portfolio link. Talks and Publications share a desktop heading baseline beneath the event photograph. Restored existing organization/project logos and added self-hosted Devicon technology SVGs. Portrait uses the AI-generated tie-and-leather-jacket composition described above. People are displayed in full color. Compile-time ORM is a featured thesis project.

## Merge and feedback URLs

Merge into `master` to publish these pages through the repository’s GitHub Pages deployment:

- https://alex-tsvetanov.github.io/preview/
- https://alex-tsvetanov.github.io/preview/ats.html
- https://alex-tsvetanov.github.io/preview/brand-review.html

The original root homepage and CV are byte-identical to the merge base. Shared organization and reference images remain in `/assets/img/`; all redesign-specific assets and the newer CV live in `/preview/`. No checkout or payment functionality is enabled. Portfolio HTML allows indexing and canonicalizes to the main homepage; the concept store remains noindex. Removing `/preview/` reverses the preview deployment without changing the original site.
