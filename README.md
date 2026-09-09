# Sub Rosa Decompilation Project

Local reverse-engineering workspace for the installed Sub Rosa build in the parent directory.

This repo is for notes, scripts, type recovery, file-format specs, symbols, and clean-room reimplementation work. It intentionally does not track proprietary binaries, assets, IDA databases, or generated decompiler output.

The full game rebuild is unfinished. The `subrosa_recompiled` target currently fails
compilation; the existing UI and 3D executables remain prototypes. See
[recompilation status](docs/recompilation.md) for the build commands and blockers.

The [executable-comparison work](docs/fidelity.md) now contains two reconstructed C
functions tested against the original machine code, plus byte-exact extraction and
GPU compilation of 27 original shader stages. These are isolated verified pieces,
not a completed replacement client. The playable blockout is not a 1:1 recreation.

## Full Local Decompiler Output

The local `exports/` directory contains actual Hex-Rays C output from the installed
Windows binaries. It is ignored by Git, but the files are available on this machine:

- `exports/client/subrosa.c`: combined client decompilation with inferred declarations.
- `exports/dedicated/subrosadedicated.c`: combined dedicated-server decompilation.
- `exports/client/functions/` and `exports/dedicated/functions/`: individual C files.
- Each export's `manifest.json`: function addresses, exact recovery counts, and errors.

This output is C-like pseudocode, not the original source or a buildable replacement
game. `src/` still contains the separate, partial C reconstructions and viewers.
See [the export workflow](docs/full-decompilation.md) for reproduction and validation.

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
- Decompiled proprietary source or large verbatim pseudocode dumps.
- Steam API secrets, account data, or bypass/DRM changes.

Do commit:

- Hashes, offsets, names, type hypotheses, diagrams, scripts, parser tests using synthetic fixtures, and clean-room documentation.
