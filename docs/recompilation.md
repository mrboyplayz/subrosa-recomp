# Recompilation Status

The raw Hex-Rays export does not yet compile into a game. Successful decompilation
means the tool emitted pseudocode, not that the inferred source has a valid ABI,
complete types, correct initialization, or equivalent behavior. No rebuilt game
executable has been produced by this step.

The latest complete diagnostic run reports 7,198 client errors and 1,738 dedicated
server errors, compared with 13,468 and 3,571 for the unmodified exports. These counts
include cascades and are not counts of independent defects. The prepared client has
3,902 SIMD edits, 118 restored address-named function declarations, and 1,483 bound
calls. The prepared server has 1,066 SIMD edits. Seven transformation tests and the
optimized SIMD lane test pass. The full client object compilation still fails.

The complete client export covers 4,269 recognized functions after analysis settled.
This coverage figure does not measure recompilation or behavioral equivalence.

## Build And Diagnose

The optional CMake target compiles the actual client export. It is excluded from
normal builds while source recovery is unfinished. Compiler failures are retained;
missing functionality is not replaced with stubs.

```powershell
cmake -S . -B build/recompile -G Ninja -DSR_ENABLE_RAW_REBUILD=ON
cmake --build build/recompile --target subrosa_recompiled
python scripts/check-rebuild.py --compiler C:/Users/junin/mingw64/bin/gcc.exe
```

`src/rebuild/export_compat.h` supplies standard library declarations and 128-bit
storage for `_OWORD`, using Hex-Rays' local helper header. It does not erase custom
register calling conventions or invent unknown structure layouts.

`scripts/check-rebuild.py` checks both binaries before and after this compatibility
header, writes GCC's structured SARIF diagnostics and the exact compiler command under
`reports/rebuild/`, and exits unsuccessfully if either source still fails. These are
syntax checks only; even passing them would not establish a successful link or a
working game. The diagnostic check is uncapped because this GCC build can exit
without flushing SARIF when an error limit is reached. Counts can include cascades
from earlier errors and should not be interpreted as independent defects.

## SIMD Build Copy

The IDA type catalog represents SIMD values with lane members such as
`m128_f32` and `m128i_i32`, all at offset zero. GCC represents these registers with
native vector types. `scripts/prepare_rebuild.py` uses a C syntax tree to convert
recognized field accesses into checked storage views in `work/rebuild/`. The raw
export remains unchanged. Comments, strings, and expressions needing individual
review remain unchanged. Each generated copy has a byte-range edit report.

```powershell
python -m pip install --target work/python-deps -r scripts/rebuild-requirements.txt
python scripts/prepare_rebuild.py
python scripts/test_prepare_rebuild.py
python scripts/check-rebuild.py --prepared --output reports/rebuild-prepared
cmake -S . -B build/recompile -G Ninja -DSR_ENABLE_RAW_REBUILD=ON -DSR_REBUILD_CLIENT_SOURCE="D:/SteamLibrary/steamapps/common/Sub Rosa/decompilation/work/rebuild/client/subrosa.c"
cmake --build build/recompile --target sr_vector_views_test
build/recompile/sr_vector_views_test.exe
cmake --build build/recompile --target subrosa_recompiled
```

Compile these views with `-fno-strict-aliasing`. They retain storage size,
const/volatile qualifiers, and single evaluation of pointer/index expressions.
Tests exercise lane values, exact bit patterns, generated code, and rejection of
readonly writes and incorrect storage widths. This fixes a representation mismatch;
it does not establish the correctness of the surrounding decompiled code.

`MEMORY[address]` function definitions and calls are rebound only when the address
matches the function inventory and the translation contains a corresponding
declaration or definition. Forward declarations retain the definitions' inferred
signatures, so unresolved types and ABI errors remain visible to the compiler.
Unknown memory accesses are not replaced with guessed globals or pointer casts.

## Remaining Blockers

- Restore valid C declarations and accurate layouts for anonymous and inferred
  types, including invalid decompiler names such as `struct #67`.
- Resolve inferred C++ names, CRT internals, and standard-library declarations
  without treating a symbol rename as proof of an equivalent implementation.
- Recover register-based function signatures and SIMD representations. Removing
  `@<register>` annotations without preserving the calling convention loses behavior.
- Restore the original global data layout and initialization. Decompiled accesses
  to fixed image addresses do not automatically become relocated C objects.
- Restore and link the SDL2, Steam, OpenGL, audio, and operating-system interfaces.
- Validate startup, world loading, rendering, input, physics, and networking against
  the installed build. Existing UI and wireframe viewers are not the full game.
