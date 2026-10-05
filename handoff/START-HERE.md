# Sub Rosa C recovery handoff — 2026-10-03

Start with this document; older README/status documents describe earlier milestones.
This is an unfinished C recompilation/recovery, not Alex Austin's original source.

## Where the code is

- `exports/client/subrosa.c`: untouched combined Hex-Rays pseudocode export.
- `exports/client/functions/`: individual exported functions and metadata.
- `work/rebuild/client/subrosa.c`: prepared, repaired monolithic C attempt.
- `work/rebuild/client/modules/`: 30 independently compiled C files.
- `work/rebuild/client/shared_client.h`: shared recovered declarations/storage.
- `src/rebuild/`: ABI helpers, storage mappings and native assembly boundaries.
- `src/recovered/`: recovered C helpers, tests and differential fixture code.
- `scripts/`: preparation, repair, compile, link and verification pipeline.
- `sheets/`: function/module ownership and partial recovery ledger.
- `exports/dedicated/`, `work/rebuild/dedicated/`: earlier server C attempts.
- `reports/`: selected text/JSON build and recovery history.
- `artifacts/client-link-probe-split-20261003.exe`: historical linked C probe.
- `rust-client/`: source-only optional Rust leaf/recovery reference. The default
  C linker path does not require Rust. No Rust build cache/toolchain is included.

## Actual state

The archived split-build milestone linked with zero unresolved/duplicate symbols
and 2,606 distinct warnings (2,838 raw occurrences). It contained 4,248 C bodies
and 1,302 storage definitions. Sources subsequently received more repairs; this
handoff packages the current files, not a claim that their hashes equal that
historical build. Rebuild to obtain a current report.

The archived split probe fails before the third frame swap, with recorded status
`cookie_mismatch` and a stop in `sub_1401F8B20`. Native ABI/register/stack recovery
and complete runtime behavior remain unfinished. Read:

- `docs/client-source-split.md`
- `docs/client-native-link.md`
- `docs/client-warning-recovery.md`
- `docs/client-state-recovery.md`
- `reports/client-link-split-20261003/launch-status.json`
- `reports/client-link-split-20261003/live-debug.txt`

Some recovered gaps are machine-code assembly bridges; a successful link is not
proof of a complete C recreation. The custom lua51.dll is not a vanilla dependency.

## Set up on another Windows machine

Extract so `decompilation/` is immediately beside your own original game EXE:

```
C:\SubRosaWork\subrosa.exe
C:\SubRosaWork\SDL2.dll
C:\SubRosaWork\steam_api64.dll
C:\SubRosaWork\data\                  # needed for runtime/asset tests
C:\SubRosaWork\decompilation\START-HERE.md
```

Use your installed game files. They, the toolchains and analyzer databases are
not in this ZIP. The required vanilla EXE SHA256 is:

`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`

Install Python 3 and an x64 MinGW GCC/binutils toolchain. The working environment
used GCC 16.1.0; GCC must support `-fdiagnostics-format=sarif-stderr`. Put gcc,
nm, objdump and dlltool on PATH. CMake/Ninja are optional for the separate C
reconstruction/test targets. Existing standalone test scripts may hardcode the
author's MinGW path; adjust those on your machine. The handoff build wrapper
accepts your compiler path.

From `decompilation/`:

```powershell
python -m pip install -r requirements-handoff.txt
pwsh -File BUILD-HANDOFF.ps1 -Compiler 'C:\your-mingw\bin\gcc.exe'
```

The wrapper compiles the included prepared split snapshot and links using the
original EXE/DLLs beside this folder. It writes fresh reports under
`reports/handoff-build/`. It does not launch the output. Historical reports
contain original absolute paths; generate fresh reports rather than relinking
their archived object-report JSON files on your machine.

To regenerate the prepared sources first, add `-Regenerate`. This overwrites
generated prepared files, so preserve your edits before using it. Work in the
preparation/repair scripts for durable fixes; direct module edits can be lost
when regeneration runs. `--monolithic` on `check-rebuild.py` produces a separate
single-file comparison build.

## Integrity / contents

`HANDOFF-MANIFEST.json` records every packaged file's size and SHA256. Source
files are copied byte-for-byte. Historical evidence is retained separately;
large intermediate objects, repeated binaries, assets, build caches and analyzer
databases are omitted. The source package was checked by ZIP CRC and per-file
SHA256 comparison. `handoff/package_c_recovery.py` reproduces packaging.
