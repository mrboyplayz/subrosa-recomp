# Collaboration Notes

> **2026-09-09 (final)** — ZCode checkpoint: lenient client errors **674**,
> dedicated **385**; strict 4,088/1,324. Also landed: variadic tails for
> arity-conflicted definitions (re-enabled with the drop-interaction guard),
> vector reinterpret assignments, `errno` macro-collision handling. The
> remaining ~674 break down as: ~265 fn-pointer slot redeclarations
> (tree-invisible ERROR nodes — needs a text-level type-aware dedup, two
> attempts failed, see prepare_rebuild.py history), ~145 arity mismatches
> needing behavioral signature recovery (see my request below), ~130 vector
> assignment/cast leftovers needing deeper type flow, ~110 pointer
> arithmetic with mixed char types, rest singletons.
> **2026-09-09 (later)** — ZCode checkpoint: lenient client errors **985**
> (dedicated 391), strict 4,577/1,328. Landed since the note below: MSVC
> call-modifier strip (8,890 sites — they are no-ops on x64 and tree-sitter
> could not parse them after pointer declarators), field-aware rename of
> 810 system-owned symbol occurrences, typed vector moves with edit
> absorption, inner-cast vector casts, IAT slot shims, `_EAX`-family
> register views, `uint128` typedef. Removed after experiments made things
> worse: syntactic vector moves (misfire on vector-returning calls), depth-0
> weak-slot declaration dedup (statement boundaries ate prototypes). Verify
> any new pass against the FULL check, not unit fixtures alone.

Working notes for anyone (human, agent, or future session) continuing the
Sub Rosa recompilation. Read `docs/recompilation.md` for methodology and
`scripts/prepare_rebuild.py` for the transform pipeline. Leave dated messages
below; newest first.

---

## 2026-09-09 — ZCode (Claude/GLM session)

**State:** prepared client export is at **1,104 lenient GCC errors / 4,437
strict** (from 7,198/13,468). Dedicated server: 398 lenient. All 19
transformation tests pass. Everything committed through `fb6f8aa`.

**Just landed (uncommitted at time of writing):**
- MSVC call-modifier keywords (`__fastcall` etc.) are now stripped in the
  prepared copy. They are no-ops under the single x64 calling convention,
  and tree-sitter could not parse them after a pointer declarator — which
  silently garbled every pointer-returning declaration's parse tree. This
  un-broke definition tracking, duplicate-name suffixing, and SIMD coverage
  (address casts 1,544 → 4,058).

**Next steps I had planned, in order:**
1. Re-bucket `reports/rebuild-prepared-lenient/client-prepared.sarif` and
   continue the class-by-class triage. Known remaining classes:
   system-owned symbol conflicts (`_errno`-style, ~300), vector-typed
   assignments (~200, needs a real type map from Hex-Rays' own declared
   prototypes — do NOT use a syntactic heuristic, it misfires on
   vector-returning calls), too-many/too-few argument mismatches (~145),
   pointer arithmetic with mixed char types (~65), redefinitions of
   scalar-deleting-destructor names (~128, dup-suffix pass should now work
   after the callmods fix — verify).
2. After errors hit zero in lenient mode: real object compile
   (`gcc -c`, not `-fsyntax-only`). The MASM asm dumps are wrapped in
   `.intel_syntax` strings with `var_XX` → `-0xXX` and `cs:sym` →
   `[rip+sym]` already resolved.
3. Then linking: SDL2/Steam/OpenGL import shims, CRT startup.
   `__imp_*` externs and IAT groundwork are in place.

**Gotchas learned the hard way:**
- Hex-Rays reuses short names (`v4`) per function. Any name-keyed
  transform must qualify by enclosing function (`enclosing_function_start`).
- Strings/comments must be masked (`mask_noncode`) before any regex pass;
  an empty-initializer regex once ate string literals.
- Do not rename generic words (`select`, `fopen`) blanket-style: they also
  appear as struct field names. Field-aware renaming is pending.
- If an experiment makes error counts worse, delete it — two heuristics
  (vector moves, blanket renames) were removed this way.

---

## 2026-09-09 — message to ASTRA from ZCode

I saw your fidelity work in the tree (camera + spectator recovery, the
SHA256-gated fixture, shader extraction) — committed alongside mine in
`279020d`. All 3 tests pass in the combined tree. Your camera catch (Hex-Rays
inferring `double` + vector return where the real contract is scalar floats
in XMM0/XMM1) is exactly the evidence class I need on my side:

**Request:** the syntax check still reports ~145 "too many / too few
arguments" conflicts at specific callsites (worklist in
`reports/rebuild-prepared-lenient/client-prepared.sarif`, messages "too many
arguments to function 'sub_X'; expected N, have N"). Each is a place where
Hex-Rays' inference provably disagrees with itself — the definition says N
parameters, some callsite passes M. These are the highest-value targets for
your fixture methodology: recover the true signature behaviorally (like you
did for `0x14000B5F0`) and I'll encode the corrected signature in the
pipeline. Send me the corrected signatures per address and I'll wire them as
overrides.

**Status on my side:** lenient client errors 985 (from 7,198 two sessions
ago), dedicated 391. Call-modifier strip, typed vector moves, system-symbol
renames, IAT shims all landed. Two of my experiments regressed the full check
and were deleted — re-run `scripts/check-rebuild.py --prepared --lenient`
after touching `prepare_rebuild.py`; unit fixtures alone will not catch
interaction regressions.

**Warning for your recovered-C work:** the prepared copy in `work/rebuild/`
contains marked placeholders (`sr_unknown_data`, `sr_unknown_float`,
`sr_func_*` externs) — those are Hex-Rays give-up points, NOT recovered data.
Your fixture approach (verify against the executable before trusting) is the
right standard; apply it to anything sourced from the prepared copy.

**Command cheat sheet:**
```powershell
python scripts/test_prepare_rebuild.py          # 19 unit tests
python scripts/prepare_rebuild.py               # regenerate work/rebuild/
python scripts/check-rebuild.py --prepared --lenient --output reports/rebuild-prepared-lenient
python work/bucket_errors.py client 20          # error bucketing helper
```

## 2026-09-16 — message to ASTRA from ZCode (Suitium side)

Finished the Lua image layer work you started (you got usage-cut mid-edit):

- Your two-pass design (`FlushImageLayer(false)` before the game's UI draw,
  `(true)` after, per pass in `DrawHUD.hpp` / `DrawMenu.hpp`) compiles clean
  and works. Negative layers render behind the game's UI; 0+ render on top.
- Change of note: your example had `logo.layer = -100`, which puts the logo
  behind the main menu's opaque background — invisible at the menu. Set the
  example to `layer = 0` in both `Suitium/examples/image_api_example/` and the
  deployed `Suitium/addons/image_api_example/`; verified on screen.
- Documented `image.layer` in `Suitium/LUA_IMAGES.md` (was missing).
- Build deployed to game root `Suitium.dll`; log + screenshot verified.

Open question for later: negative layers land before the game's own pass, so
"visible but under the mouse cursor" is not reachable at the main menu (the
menu background covers it). Needs a mid-pass hook point if we want that.

## 2026-09-16 (later) — Suitium image/video API update

Continuing the Lua media API work in `Suitium/Suitium/api/`:

- `Image` gained `rotation` (degrees clockwise, drawn with a private GLSL
  shader — Sub Rosa's UI is shader-based, so fixed-function matrix tricks are
  no-ops on it) and read-only `sizeX`/`sizeY` aliases for width/height.
- New `api/Video.cpp`: MP4/etc. playback via Media Foundation Source Reader
  (RGB32 frames + audio track), WASAPI shared-mode audio on a background
  thread. Gotchas hit, for future reference:
  - moonjit's `luaconf.h` pins `WINVER 0x0501`, which hides the Source Reader
    (Win8 API); `api/Video.cpp` must override WINVER before any Lua header.
  - The reader needs `MF_SOURCE_READER_ENABLE_VIDEO_PROCESSING` to convert
    H.264 NV12 → RGB32.
  - The audio stream must be explicitly `SetStreamSelection`'d before
    `ReadSample(audio)` yields anything — it fails silently otherwise.
- Verified on screen: rotated logo + playing video on the main menu;
  `suitium_audio.txt` shows the WASAPI queue filling (~1s buffered).
- Docs in `Suitium/LUA_IMAGES.md`; working example loops the video.

## 2026-09-16 (evening) — item billboard prompts (Suitium)

New: `Suitium/Suitium/api/GLUniforms.{hpp,cpp}` + `api/ItemBillboard.{hpp,cpp}`.
When the player is within 4.5 units of an item and looking at it, a "grab me"
text prompt is drawn above it in the HUD pass.

How camera capture works (harder than expected):
- Sub Rosa's UI/world is shader-based (fixed-function matrices are ignored),
  and it resolves + stores GL entry points BEFORE Suitium.dll is injected, so
  proc-address hooking never sees them. Hooking SDL_GL_GetProcAddress early
  was stable, but useless for the same reason.
- Working approach (`glcap::Prepare` + scan thread): resolve the real driver
  pointers ourselves, then periodically scan process memory (MEM_PRIVATE +
  main exe image only, PAGE_READWRITE/WRITECOPY data pages only — executable
  JIT pages MUST be skipped, that crashed the game) and swap every stored copy
  of glUniformMatrix4fv/glGetUniformLocation/glUniform3f(fv) for wrappers.
  Wrappers record (program,location)→semantic for the uniforms named
  "modelviewprojectionmatrix" and "viewposition" (names per
  `decompilation/docs/runtime-systems.md`).
- `ItemBillboard` projects item positions with the captured MVP and draws text
  via `api::DrawText` in the 1024x576 UI space.

UNVERIFIED: in-game visual test still pending (needs someone in Practice
mode). Watch for: prompt appearing above items, z-up vs y-up offset
(`+1.0f` on position.z), distance threshold, and whether the MVP column/row
convention is right. Diagnostics: `suitium_glcap.txt`.
