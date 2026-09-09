# Reconstruction Against The Executable

## Status (2026-09-09)

The full game is NOT rebuilt. The complete local Hex-Rays export covers 4,269
recognized client functions, but pseudocode coverage is not source correctness,
a successful game build, or behavioral equivalence. `sr_play` remains a separate
invented blockout and contributes no evidence of original-game fidelity.

The work below targets the installed client with SHA256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The export inventory and this hash were reverified. No game binary was modified.

## Recovered C

`src/recovered/camera.c` is an isolated reconstructed library, not wired into a
replacement client yet. Names describe observed operations, not original symbols.

| Original address | Reconstructed operation | Direct comparison |
| --- | --- | --- |
| `0x14000B5F0` | Scalar angle difference with single-turn adjustment | 202,500 cases |
| `0x1400A3770` | Spectator subject selection and enable toggle | 24,348 cases |

All comparisons passed with the optimized MinGW GCC build. This is evidence for
the tested input/output contracts, not proof for every possible machine state.

The angle helper's Hex-Rays prototype incorrectly infers a `double` argument and
vector return. Instructions consume scalar floats in XMM0/XMM1. The C interface
compares the low float return lane, including exact bit patterns near the wrap
threshold, signed zero, subnormals, infinities, and selected quiet NaNs. Tests run
all four MXCSR rounding modes with exceptions masked. Upper SIMD lanes, exception
flags/traps, and all FTZ/DAZ combinations are not part of this contract. The two
double constants retain the executable's exact bits, which are not a replacement
with a higher-precision mathematical pi constant. Large angles are adjusted once,
not normalized repeatedly with `fmod`.

The spectator controller preserves edge-triggered keys, uint8 wraparound,
mode/connection gates, subject predicates, and the original stop-before-revisit
behavior. It uses the original 256-slot subject table and 323-byte key snapshots.
The enabled value uses XOR with 1, not boolean negation. Tests cover sparse tables,
slot 255, no valid subjects, forward/reverse cycling, gate combinations, player
indices 0 through 255, and deterministic randomized states.

### Original-Code Test Fixture

`original_fixture.c` checks the entire executable's SHA256 BEFORE executing any
copied code. It reserves a sparse address range, copies only the two reviewed leaf
functions and their two constants, and commits the data pages those functions
access. Both leaf functions have no calls or external dependencies. Their
RIP-relative/base-relative addresses remain intact; code is changed from writable
to executable/read-only after copying. The loader does not start the original
entry point, resolve imports, run Steam, patch the installed EXE, or load the
original whole game. An incorrect executable is rejected. Its negative hash test
also passed.

This fixture is validation infrastructure, not a way to label original machine
code as a C recompilation. The separate reconstructed library contains only C.

## Embedded Shaders

`scripts/extract_shaders.py` recovers the 27 original GLSL stages passed to shader
setup by `0x14014B2A0`: 13 vertex shaders, 13 fragment shaders, and one geometry
shader. Source addresses and program grouping are taken from that function's
arguments; RIP-relative LEAs establish that these are string addresses rather
than pointer slots. No names or shaders are guessed from appearance.

The script verifies the original hash, resolves file-backed PE sections, requires
terminated GLSL strings, and emits each source byte-for-byte. The generated
manifest contains its original VA, file offset, length, and SHA256. A generated C
header exposes the same bytes to native code. The sources and header stay in the
ignored `exports/client/shaders/` directory and are not added to Git.

All 27 stages compiled and all 13 programs linked, without source modifications,
on the local NVIDIA RTX 3060 Ti (OpenGL 4.6, driver 616.64). Six extraction tests
passed, including exact source-byte round trips and rejection of wrong binaries,
truncation, unterminated strings, and non-file-backed data.

Compilation/link success does not prove rendering equivalence. Texture formats,
uniform updates, vertex layouts, framebuffer/render-state setup, draw ordering,
lighting and world assets still need reconstruction and image comparison. These
shaders have deliberately not been pasted onto the blockout and called original.

## Reproduce

From `decompilation/` with Python, CMake and the existing x64 MinGW toolchain:

```powershell
python scripts/extract_shaders.py
python scripts/test_extract_shaders.py
cmake -S . -B build -DSR_ENABLE_SHADER_VALIDATION=ON -DSR_ORIGINAL_CLIENT="D:/SteamLibrary/steamapps/common/Sub Rosa/subrosa.exe"
cmake --build build --target sr_camera_diff_test sr_shader_compile_test sr_play_test
ctest --test-dir build --output-on-failure
```

The original-code and GPU tests are opt-in CMake settings. Generated shaders are
required before enabling the GPU test. Neither requires launching a visible game.

## Remaining Work

- Recover complete player/entity types, aliased global storage and initialization.
- Reconstruct full input, camera and physics call graphs, including nonstandard ABIs.
- Restore the renderer around the recovered shaders and load original assets.
- Reconstruct startup, world loading, audio, vehicles, inventory, UI and networking.
- Link a standalone client, then compare complete workflows to the installed game.

The existing whole-export preparation scripts remain a separate experimental
compilation path. Removing diagnostics, discarding calling-convention annotations,
or substituting unknown data does not establish fidelity. See `recompilation.md`
for the still-unfinished full-client build; the checks here do not certify it.
