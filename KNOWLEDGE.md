# KNOWLEDGE.md — how this project works (for agentic AI helping contribute)

> **Heads-up:** this file is the live document: record every workflow change and
> session state here. Adjust anything that does not match your setup.

**Draft workflow:** agents may draft recovered routines in a `draft_routine/`
folder, verify them there against the original machine code, and only then
move them where they belong (`src/engine/`, `src/client/`, the comparison
suites).

Read this before doing anything.

## What this project is
The original game is `subrosaactual/subrosa.exe` (Steam build). **WARN: the executable is not in this repo.** Obtain it separately and place it in `subrosaactual/` (or point `SUBROSA_GAME_DIR` at its folder). Almost all of its code was auto-decompiled into C, but that decompiled code is ugly and machine-generated: names like `sub_14007C980`, weird casts, magic numbers, `windows.h` everywhere.

The goal: take those routines one by one and **rewrite them into clean, readable, portable C** in `src/engine/`, then prove the clean version behaves **bit-exactly** like the original machine code.

## The loop (how one routine gets finished)

1. **Find one.** Browse `src/client/names.tsv` and the decompiler stubs in `src/client/client_*.c` for routines that still look like `__int64 __fastcall sub_140XXXXXXX(...)` junk. Routines come in clusters per module — grab a whole cluster.

   **Check upstream first (from now on, do this periodically, not just at ship time):** run `git fetch upstream` and re-check `git log upstream/master --oneline` plus the merged PRs (`gh pr list --repo mrboyplayz/subrosa-recomp --state merged`) before picking. Upstream moves fast and other PRs land whole clusters — verify the routine/cluster you are about to start is not already wrapped in `src/client/client_*.c` on `upstream/master`. Redoing a completed routine wastes the whole loop.

2. **Read the assembly.** The disassembly is the spec, never the decompiled C alone:
   ```
   objdump -d --start-address=0x140XXXXXX --stop-address=0x140YYYYYY subrosaactual/subrosa.exe
   ```
   (Needs WinLibs `objdump`/`gcc` and Python on the PATH. On Windows with Git Bash, prepend their `bin`
   directories to `PATH` first; the exact locations depend on your install.) Note: branch boundaries, signed vs unsigned ops, magic-number divisions (decode them — they are just the compiler's multiply-by-reciprocal), and which shared state it reads/writes.

3. **Write the port.** Clean C in `src/engine/<module>.c` + `.h`:
   - Real names, no magic numbers, no decompiler casts.
   - Shared game state is one flat region; reach it with `SR_GLOBAL(type, address)` from `memory.h`.
   - Original address in a comment on every routine.
   - Never invent semantics. If the assembly is odd, copy the oddness.

4. **Rewire the wrapper.** Replace the decompiled body in `src/client/client_*.c` with a call into the engine port. If the routine had scoped locals listed in `local_names.tsv`, delete them — CI (`split_client_modules.py --check`) fails a PR that wraps a routine but leaves dead names.

5. **Write the comparison suite.** `tools/native-compare/t_<suite>.c` + `<suite>.mutations`. The harness builds the same test twice — once calling the **original machine code** at its address in the real exe, once calling your C port — runs both with thousands of inputs, and diffs the output line by line.
   - Cover every branch boundary, signed/unsigned edges, zero/negative/garbage inputs, plus randoms. A weak suite proves nothing.
   - Add `// NC_WRAPPERS: 0x140XXXXXX` to also compare the real client entry point.

6. **Prove it.** The gate:
   ```
   python tools/native-compare/run.py <suite>                        # native vs port: identical
   python tools/native-compare/run.py <suite> --client-wrappers      # real entry point too
   python tools/native-compare/run.py <neighbor-suite>               # regression
   python tools/native-compare/mutate.py <suite> <file>.c tools/native-compare/<suite>.mutations
   ```
   The mutation run breaks your C on purpose (scale by 100, drop a subtraction, flip a boundary) — **every mutant must be detected**. Identical output with a weak test means nothing; mutants are what make the test trustworthy.

7. **Check the scoreboard.** `python scripts/progress.py` prints the true count. **Never edit the README progress bar in a PR**: the README progress workflow (`.github/workflows/progress.yml`) recounts and commits the bar itself after every merge to master, and CI only prints the count (`progress.py` without `--check`) instead of failing on a stale bar. DO update the file-by-file table in `src/engine/README.md` yourself — that table is not touched by the workflow and CI never checks it.

8. **Ship.** `git fetch upstream` and merge upstream into your branch FIRST (upstream moves fast — check `gh pr list --repo mrboyplayz/subrosa-recomp`). Then commit, `git fetch origin` (other agents push fast — merge `origin/master` first) and push. Work is stacked into the open rolling PR (see the PR list) rather than separate PRs: push to the fork's `master` with `git push origin HEAD:master`. **Never force-push.** Watch `gh pr checks`.

## What "done" means
Nobody trusts "looks right". A routine is done when:
- the test cannot tell your C apart from the original machine code,
- the test cannot be fooled (all mutants detected),
- neighbor suites still pass,
- the scoreboard and CI are green,
- the PR is merged.

## Where things live
| Thing | Place |
|---|---|
| Clean ports | `src/engine/*.c/.h` |
| Client entry points that call them | `src/client/client_*.c` |
| Name -> address maps | `src/client/names.tsv`, `local_names.tsv`, `function_modules.tsv` |
| Comparison harness | `tools/native-compare/` (`run.py`, `mutate.py`, `nc.c/.h`, `t_<suite>.c` + `.mutations`) |
| The original binary | `subrosaactual/subrosa.exe` |
| Build | `python scripts/build.py` (full client), `scripts/build_quick.py` (incremental) |
| Session state / next steps | this file — record the current state and next recovery targets here |

## Gotchas that cost us time
- **Upstream outruns you.** Clusters get finished and merged by other PRs while you work. Re-sync with `git fetch upstream` periodically (at pick time AND mid-session), not just in step 8 — a routine already wrapped upstream is done; drop it and pick another.
- One port-build pass is **~5-10 minutes** — a tool timeout under that looks like a hang. It isn't. Use background jobs.
- Background jobs die at **600 s** here. `mutate.py` rebuilds the engine per mutant — budget for it.
- Never run two `mutate.py` of the **same suite** at once (they fight over `build/mutate/<suite>/` and crash with `WinError 145`). Different suites can run in parallel.
- `mutate.py` wants the engine file **relative to the engine dir**: `mutate.py clockms clock.c ...`, not `src/engine/clock.c ...`.
- `.gitignore` is a `*` whitelist — new root-level docs stay local unless you add a `!NAME` rule. `KNOWLEDGE.md` is tracked (has its own `!KNOWLEDGE.md` rule) and is the one doc that gets published; keep everything agents need in it.
- Some routines cannot be finished: e.g. `sr_cpu_has_sse41` (CPUID) — mutation testing cannot cross OS/hardware. Document and skip those.
- History note: an old "t_clockms hangs" report was just the build time; the suite passes at 1000 cases.

## Where we are
Progress lives in `scripts/progress.py` (currently **332 / 1,119** game routines restored). The 3,110 runtime/stb routines stay as decompiled C — they are not the work. The root README progress image is recomputed by `.github/workflows/progress.yml` after every merge to master.
