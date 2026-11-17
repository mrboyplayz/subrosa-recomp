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

   Then run the launch gate in **"The gate that matters"** below: build with
   `scripts/build.py`, start `dist/subrosa-recomp.exe`, get past the menu into a
   round or practice, and confirm no `EXCEPTION` in
   `dist/subrosa-recomp-debug.log`. Repeat 3-4 times. Do this before asking for
   review, not after CI goes green.

7. **Check the scoreboard.** `python scripts/progress.py` prints the true count. **Never edit the README progress bar in a PR**: the README progress workflow (`.github/workflows/progress.yml`) recounts and commits the bar itself after every merge to master, and CI only prints the count (`progress.py` without `--check`) instead of failing on a stale bar. DO update the file-by-file table in `src/engine/README.md` yourself — that table is not touched by the workflow and CI never checks it.

8. **Ship.** `git fetch upstream` and merge upstream into your branch FIRST (upstream moves fast — check `gh pr list --repo mrboyplayz/subrosa-recomp`). Then commit, `git fetch origin` (other agents push fast — merge `origin/master` first) and push. Work is stacked into the open rolling PR (see the PR list) rather than separate PRs: push to the fork's `master` with `git push origin HEAD:master`. **Never force-push.** Watch `gh pr checks`.

9. **Keep batches launchable.** If your branch wraps many routines: does every
   suite still compile, and does the game still boot? A reviewer cannot check
   that by reading a diff. Before calling a batch ready, run every suite in
   `tools/native-compare/` plus the launch gate, and state in the PR body which
   of those you actually ran. A batch that only ran two suites is a batch nobody
   can trust, and one bad port in it costs more than the twenty good ones saved.

## The gate that matters: the game must start

A suite passing proves a routine matches on the inputs it was given. It proves
nothing about whether the client still boots. On 2026-11-17 a ~90-routine batch
merged with green suites and the game could not get past the menu, could not
load practice, and its Steam auth callback jumped into unmapped memory. Every
one of those was a one-line mistake in a port whose own suite was fine (or did
not exist).

Before a batch of ports is merged or trusted, all of these must hold:

1. **Every suite in `tools/native-compare/t_*.c` compiles and runs.** Six suites
   in that batch did not compile at all (`audio`, `block_geometry`, `collision`,
   `network`, `renderer_primitives`, `recovery_080000`) and three failed on
   unbound imports (`audio_mixer`, `net_replication`, `world_assets`). A suite
   that does not build is not verification, it is decoration. Check by running
   the whole directory, not the two suites you happened to touch.
2. **A failing suite is a blocker, never noise.** `physics` reported DIFFERENT
   in that batch and was ignored. Do not explain a diff away; at minimum record
   it in this file as a known-open divergence with the reason.
3. **Build both ways and diff the code.** `python scripts/build.py` and
   `python scripts/build_quick.py` must produce the same `.text`:
   ```
   objcopy -O binary --only-section=.text dist/subrosa-recomp.exe a.bin
   objcopy -O binary --only-section=.text dist/quick/subrosa-recomp.exe b.bin
   md5sum a.bin b.bin
   ```
   They differ only in debug symbols and asset staging, never in code.
4. **Run it.** Build, launch, and leave it up for at least ~40 s: past the menu
   into practice or a round, with `dist/subrosa-recomp-debug.log` showing no
   `EXCEPTION` line and `physics ticks N started, N completed` climbing. A run
   that reaches "Startup complete: menu ready" is not enough.
5. **Run it repeatedly.** Crashes in this codebase can be intermittent. One
   good run is not evidence. Do 3 or 4 launches and require all of them clean.

If a batch cannot meet these, revert the batch. Working code from before the
batch beats unverified code after it every time.

## The five bug classes that shipped green

Every one of these had a passing (or missing) suite. Check for them by shape,
because the tests will not.

- **`SR_GLOBAL` takes an absolute address, never a pointer.** `SR_GLOBAL`
  computes `state_array + (address - SR_STATE_BASE)`. Passing it
  `(uintptr_t)record + 0x48`, where `record` is a caller's buffer, produces a
  wild address. If a routine's argument is a pointer to its own record, use
  plain pointer arithmetic: `*(int32_t *)((char *)record + 0x48)`. This exact
  mistake in `sr_building_sbb_load` broke level loading.
- **Never use an original `.text` address as a value.** `0x1401880C0` is a
  function in the *original* image. This binary's copy lives elsewhere, so
  passing that literal to Steam as a callback made the dispatcher execute
  garbage, and using it as a data buffer wrote into the wrong place. Call the
  real function, or take its address from C. This broke Steam auth.
- **Struct strides and record sizes come from the assembly, not from a guess.**
  `sr_practice_place_spawn` used a 383-*byte* stride for a record the original
  walks with `imul $0x5fc`. Read the `imul` at the record addressing site and
  match it.
- **Field indices must land inside the record.** The same routine wrote
  `slot[0x1A1]`..`slot[0x1A7]`, which is byte `0x684` in a `0x5FC` record, so
  every spawn overwrote the following records. Compute the offset from the
  disassembly (`0x1FD167F0` is dword `0x163`) and check it is smaller than the
  record size.
- **Transcribe hex constants character by character.** `0x175FF34B` for
  `0x175FF34BC` is a dropped digit and a wild read on every spawn placement.

When a routine reads a base pointer and adds a small offset, verify *which*
base: the state array, an image address, or a caller's allocation. Three of the
five bugs above are that one question answered wrongly.

## When something is broken, bisect against a known-good runtime

Before theorising, find the last build that actually ran and start there:

- Older binaries sit next to the game (`subrosa-recomp.before-*.exe`). Running
  one tells you instantly whether a crash is the toolchain, the GPU or the code.
- `git checkout <good-commit> -- <path>` one subsystem at a time and re-run the
  launch test above. Reverting until it runs, then re-adding, is faster than
  reading 90 commits.
- Save work on a branch first (`git checkout -b wip && git commit -a`). A revert
  that loses a day of fixes is worse than the bug.

## What "done" means
Nobody trusts "looks right". A routine is done when:
- the test cannot tell your C apart from the original machine code,
- the test cannot be fooled (all mutants detected),
- neighbor suites still pass,
- **the game still builds and still boots into practice with no exception**,
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
- **A green suite is not a running game.** See the gate section above. The
  cheapest routine to port is one you have to revert because the client no
  longer boots.
- **Upstream outruns you.** Clusters get finished and merged by other PRs while you work. Re-sync with `git fetch upstream` periodically (at pick time AND mid-session), not just in step 8 — a routine already wrapped upstream is done; drop it and pick another.
- **Review a batch PR by risk, not by count.** A 90-routine PR is ~90 chances
  to break startup and one passing suite cannot cover them all. If you cannot
  launch-test the whole batch, merge it in smaller groups that each pass the
  gate.
- One port-build pass is **~5-10 minutes** — a tool timeout under that looks like a hang. It isn't. Use background jobs.
- `scripts/build.py` refuses to overwrite `dist/` if the exe or `SDL2.dll` is
  held open. `taskkill //F //IM subrosa-recomp.exe` and delete the stale
  `dist/SDL2.dll` before rebuilding.
- Background jobs die at **600 s** here. `mutate.py` rebuilds the engine per mutant — budget for it.
- Never run two `mutate.py` of the **same suite** at once (they fight over `build/mutate/<suite>/` and crash with `WinError 145`). Different suites can run in parallel.
- `mutate.py` wants the engine file **relative to the engine dir**: `mutate.py clockms clock.c ...`, not `src/engine/clock.c ...`.
- `.gitignore` is a `*` whitelist — new root-level docs stay local unless you add a `!NAME` rule. `KNOWLEDGE.md` is tracked (has its own `!KNOWLEDGE.md` rule) and is the one doc that gets published; keep everything agents need in it.
- Some routines cannot be finished: e.g. `sr_cpu_has_sse41` (CPUID) — mutation testing cannot cross OS/hardware. Document and skip those.
- History note: an old "t_clockms hangs" report was just the build time; the suite passes at 1000 cases.
- **A ~90-routine batch (PR #16, 2026-11-17) was reverted wholesale.** It merged
  with its own suites reporting green, then the client crashed during asset
  load, could not load practice, and its Steam auth callback executed an address
  from the original image. Five distinct port bugs plus a broken GL atlas
  upload. `master` was reset to the commit before the merge (`572883e`).
  Nothing from that batch is in the tree. If a routine from it is wanted,
  re-port it through the gate above rather than resurrecting the branch.

## Where we are
Progress lives in `scripts/progress.py` (currently **332 / 1,119** game routines restored). The 3,110 runtime/stb routines stay as decompiled C — they are not the work. The root README progress image is recomputed by `.github/workflows/progress.yml` after every merge to master.
