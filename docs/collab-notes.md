# Collaboration Notes

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

**Command cheat sheet:**
```powershell
python scripts/test_prepare_rebuild.py          # 19 unit tests
python scripts/prepare_rebuild.py               # regenerate work/rebuild/
python scripts/check-rebuild.py --prepared --lenient --output reports/rebuild-prepared-lenient
python work/bucket_errors.py client 20          # error bucketing helper
```
