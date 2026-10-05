# Sub Rosa Recomp

Private reverse-engineering and recompilation workspace for the installed Sub Rosa build in the parent directory.

This repository preserves the maintained C client, optional Rust recovery work,
client/server reference exports, build and comparison scripts, vendored reference
source, file-format specs, and recovery notes. Installed game files, analyzer
databases, toolchains, and large temporary build caches remain local. The current
rebuilt executable is available in the repository's private GitHub releases.

The maintained client currently compiles and links. Gameplay recovery is
unfinished: Practice completes level/game spawning, then the first constraint
solve produces invalid physics values. The current executable opens a debug
console automatically and saves `subrosa-recomp-debug.log` in its working
directory. See [debug console](docs/client-debug-console.md) and
[current Practice investigation](docs/client-practice-recovery-20261004.md).

## Build the current C client

Clone this repository into `decompilation/` immediately beside your installed
`subrosa.exe`, `SDL2.dll`, `steam_api64.dll`, and game asset folders. The original
client SHA256 must match the pin below. Use Python 3 and an x64 MinGW GCC/binutils
toolchain (the current build uses GCC 16.1.0). Put `gcc`, `nm`, `objdump`, and
`dlltool` on PATH. Some comparison scripts contain local toolchain paths that
need adjusting on another machine.

From the repository root in PowerShell:

```powershell
python -m pip install -r scripts/rebuild-requirements.txt capstone==5.0.9
python scripts/client_sheet_book.py preflight
python scripts/check-rebuild.py --binary client --object --debug --lenient --compiler gcc --output reports/current/objects
python scripts/link_client.py --object-report reports/current/objects/client-prepared.json --output reports/current/link
python scripts/verify_client_native_link.py --directory reports/current/link
Copy-Item reports/current/link/client-link-probe.exe ../subrosa-recomp.exe
```

Launch `subrosa-recomp.exe` from the game folder. The authoritative client source
is `src/client/`, with its ownership manifest and `sheets/` ledger; building reads
these maintained files directly. Older preparation/regeneration commands and
handoff snapshots document historical recovery steps.

The [standalone C rendering test](docs/standalone-render-test.md) builds
`../subrosa-render-test.exe` and passes the original shader programs, selected
draw APIs and a captured Practice shadow draw on the local GPU. It also has a
terrain viewer. The latest [Practice recovery](docs/client-practice-recovery-20261004.md)
builds and links a candidate client; gameplay equivalence remains unfinished.

The [Character preview repair](docs/client-character-preview.md) restores the
head and hair in the rebuilt client's character menu, with native trace
comparisons and a verified GPU capture.

The [Sandium source crosswalk](docs/sandium-recomp-reference-20261004.md) records
function signatures, entity layouts, render resources and camera/event clues
for C recovery, including discrepancies that need native verification.

The [executable-comparison work](docs/fidelity.md) now contains two reconstructed C
functions tested against the original machine code, plus byte-exact extraction and
GPU compilation of 27 original shader stages. These are isolated verified pieces,
not a completed replacement client. The playable blockout is not a 1:1 recreation.

## Full Local Decompiler Output

The tracked `exports/client/` and `exports/dedicated/` directories preserve the
Hex-Rays reference output used during recovery:

- `exports/client/subrosa.c`: combined client decompilation with inferred declarations.
- `exports/dedicated/subrosadedicated.c`: combined dedicated-server decompilation.
- `exports/client/functions/` and `exports/dedicated/functions/`: individual C files.
- Each export's `manifest.json`: function addresses, exact recovery counts, and errors.

This output is C-like pseudocode, not the original source or a buildable replacement
game. `src/client/` contains the separately maintained, repaired C client.
See [the export workflow](docs/full-decompilation.md) for reproduction and validation.

The user-supplied [format and networking reference crosswalk](docs/external-reference-crosswalk.md)
records additional research leads and which claims still need checking against
this installed build.

The [Windows client reference baseline](docs/reference-baseline.md) and
[preparation audit](docs/preparation-audit.md) start the accepted equivalence
work: they pin the installed inputs and expose the generated source's
unverified transformations.
The [first code inventory](docs/code-inventory.md) compares exported functions
with the executable's unwind table and lists uncovered entry candidates.
The [recovery ledger](docs/recovery-ledger.md) tracks the accepted plan's
subsystems and their next evidence gates.

## Current Build

Primary binary:

- `../subrosa.exe`
- SHA256: `e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`
- IDA image base: `0x140000000`
- Architecture: x86-64 PE
- Final exported client function count: 4,269
- IDA string count: 3,441

Companion binaries to track:

- `../subrosadedicated.exe`
- `../subrosa.x64`
- `../subrosadedicated.x64`
- `../Suitium.dll`

## Project Layout

- `docs/` - workflow, binary survey, subsystem maps, decisions.
- `specs/` - reconstructed file formats for `.sbl`, `.sbb`, `.sbc`, `.cmo`, `.cmc`, `.sbv`, etc.
- `src/` - clean-room recovered C source and probing tools.
- `ida/` - IDA helper scripts and analysis recipes.
- `scripts/` - repeatable local inventory/extraction scripts.
- `notes/` - scratch notes that are safe to commit.
- `rust-client/` - optional Rust reconstruction and native comparison reference.
- `third_party/` - vendored upstream reference source with its licenses.
- `RosaServer-cmo-port/` - local server reference source, including CMO changes.
- `work/rebuild/dedicated/` - preserved earlier dedicated-server C attempt.
- `handoff/` - historical source handoff tooling and instructions.

## First Milestones

1. Establish reproducible build inventory and hashes.
2. Identify executable entry path and main loop.
3. Map SDL input/window/audio/render initialization.
4. Map asset loading and all custom data formats.
5. Recover core structs for vectors, matrices, entities, vehicles, items, networking, and world state.
6. Rename functions/types in IDA with stable prefixes.
7. Write clean-room specs and small parsers for public documentation of observed file formats.
8. Build a separate reimplementation only from the specs and notes, not copied pseudocode.

## Boundaries

Do not commit:

- Game executables, DLLs, assets, IDA databases, or Steam files.
- Steam API secrets, account data, or bypass/DRM changes.

Do commit:

- Hashes, offsets, names, type hypotheses, diagrams, scripts, parser tests using synthetic fixtures, and clean-room documentation.
