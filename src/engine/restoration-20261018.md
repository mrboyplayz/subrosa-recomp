# Physics helpers restored on 2026-10-18

`physics_motion.c` replaces four client routines with readable C. All four
client entry points call these implementations in the rebuilt game.

| Original address | Implementation | Behavior |
| --- | --- | --- |
| `0x14002D820` | `physics_limit_slide` | Keeps normal velocity, limits tangential speed by friction, returns sliding work |
| `0x14002D9B0` | `physics_limit_slide_capped` | Applies the same friction limit and an additional maximum tangential speed |
| `0x14012B090` | `physics_apply_point_velocity` | Adds linear velocity and the corresponding change to angular momentum |
| `0x14012B170` | `physics_point_velocity` | Computes velocity at an offset from the body |

The ports were checked against the installed executable, SHA-256
`cc667f7d3c765a36940a8fcc583c7ee189fd1bdbf167e56e59ac3a9f6873ad12`.
The original machine code is called directly; none of these routines needs
recording stubs or operating-system imports.

## Behavior preserved

- Floating-point expression order and separate multiplication/addition.
- The sliding routines' early return on zero or NaN tangential length,
  after storing the normal projection.
- The second routine's separate friction and absolute limits, including
  the accumulation of work removed by each.
- Overlapping input/output vectors and inputs referring to body fields.
  Linear writes happen before the impulse inputs are read; angular inputs
  are captured before angular outputs are written.
- The game's cross-product sign and the original body-table pointer return.
- The client signatures' double carriers: the actual result is a float
  word, with a cleared upper word. The wrappers copy bits without converting
  the float numerically to a double.

## Verification

Run from the repository root in PowerShell:

```powershell
$env:SUBROSA_GAME_DIR = (Resolve-Path '..').Path
python tools/native-compare/run.py physicsmotion --cases 4000 --out build/restore-motion-20261018
python tools/native-compare/run.py physicsmotion --client-wrappers --cases 4000 --out build/restore-motion-wrappers-20261018
python tools/native-compare/mutate.py physicsmotion physics_motion.c tools/native-compare/physicsmotion.mutations --cases 600
```

Both direct and client-wrapper comparisons match across 4,000 cases per
routine (48,001 output lines per suite). Cases include every MXCSR rounding
mode, independently enabled denormals-are-zero and flush-to-zero, signed
zero, infinities, NaNs, subnormals, boundary limits and overlapping storage.
Outputs include complete test buffers, body records, return values and MXCSR.
As in the other native suites, NaN payload differences are normalized.

All 33 deliberate mutations were detected at 600 cases each, with zero
misses or invalid runs. They perturb projection, normalization, NaN/zero
handling, both limits and work accumulation, each velocity/torque axis,
and the point's linear-velocity contribution.

`--client-wrappers` extracts the four current definitions from `src/client/`
by their address comments and compiles them with the client's build flags.
It does not maintain copies of the wrappers in the fixture.

Regression comparisons of `math`, `gun` and `humanjoint` match at 1,000
cases. `effectsupdate` has an existing MXCSR invalid-flag mismatch
(`0x1fb2` native, `0x1fb3` port); the same mismatch was reproduced using an
engine source snapshot of the unchanged `HEAD` commit.

The full client build and link succeeded:

```powershell
python scripts/build.py --assets '..' --jobs 8
```

The result is `dist/subrosa-recomp.exe`, with the source-built SDL 2.0.12
library and asset links beside it. The DLL loads and reports version 2.0.12.
This batch was not manually tested in gameplay.

On this machine SDL's old CMake/windres rules failed on the space in
`Sub Rosa`. For this local build, SDL was compiled through a source junction
without spaces, with the redundant generated include flag removed from its
resource build rule. That DLL was placed in `build/sdl2012-build/SDL2.dll`,
which the existing build script caches. The SDL workaround only changes
local build artifacts; it is not a fix to the repository's clean-build script.
