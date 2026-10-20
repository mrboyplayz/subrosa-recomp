# Sub Rosa Recomp

A rebuild of the Sub Rosa game client from its executable. It runs on its own:
no original `subrosa.exe` and no original `SDL2.dll` are needed.

The game is being turned into readable C one routine at a time. Every routine
in `src/engine/` is checked against the original machine code
(`tools/native-compare/`). Everything not yet rewritten is still the
decompiler's output in `src/client/`, repaired until it runs.

## Build

You need Python 3.12 and a 64-bit MinGW toolchain (WinLibs GCC, which also
provides cmake and ninja) on PATH, plus git.

```powershell
python scripts/build.py --assets "C:\Program Files (x86)\Steam\steamapps\common\Sub Rosa"
```

This writes `dist/subrosa-recomp.exe` and `dist/SDL2.dll`. It builds SDL 2.0.12
from source on first use. `--assets` links the game's data folders into
`dist/` so it can run from there; you only need it once.

Environment switches:

- `SUBROSA_DEBUG_EFFECTS=1` logs effects and audio statistics.
- `SUBROSA_AUTOSTART=practice` starts Practice directly.

## Check a rewritten routine against the original

```powershell
# The original subrosa.exe is taken from subrosaactual/ (or $env:SUBROSA_GAME_DIR).
python tools/native-compare/run.py                    # every suite, or name some: run.py effectsdraw sort
python tools/native-compare/mutate.py effectsdraw world_effects_draw.c tools/native-compare/effectsdraw.mutations
```

`run.py` runs the original routine (inside the mapped original executable) and
the port on the same random inputs and diffs everything they do. `mutate.py`
plants small bugs in the port to prove the suite would notice them.

## Layout

- `src/engine/` - the game as readable C, one verified routine per function (see its README).
- `src/client/` - decompiled client code. When a routine is ported, its body here becomes a call into `src/engine/`.
  Identified routines live in modules named for their purpose; `names.tsv`
  records behavior names and original addresses, and `function_modules.tsv`
  records the explicitly assigned owners. `client_recovery_*.c` holds the
  remaining routines still awaiting classification.
- `src/rebuild/` - what the decompiled code needs to compile and link:
  - compatibility headers
  - data and machine code recovered from the executable (`client_link/`)
  - DLL import lists
  - window-mode and debug-console code
- `src/recovered/` - small runtime helpers (the guard-dispatch leaf, C++ name demangling).
- `scripts/build.py` - the build. `scripts/wrap_client_function.py` points a client function at its engine port.
- `tools/native-compare/` - the comparison harness and one suite per ported area.
- `ida/` - IDA helper scripts (`ida/mcp/` drives IDA through ida-pro-mcp).

Not tracked:

- `build/` (intermediate files)
- `dist/` (the runnable game)
- `subrosaactual/` (a copy of the original game, used only by the comparison harness)

## Boundaries

Never commit game executables, DLLs, assets, IDA databases or Steam files.
