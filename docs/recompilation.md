# Recompilation Status

The raw Hex-Rays export does not yet compile into a game. Successful decompilation
means the tool emitted pseudocode, not that the inferred source has a valid ABI,
complete types, correct initialization, or equivalent behavior. No rebuilt game
executable has been produced by this step.

The latest complete diagnostic run, in strict mode, reports 4,841 client errors and
1,141 dedicated server errors, compared with 13,468 and 3,571 for the unmodified
exports. In lenient mode (`--lenient`), Hex-Rays pointer/integer conversion
artifacts are downgraded to warnings — every diagnostic remains in the SARIF —
leaving 1,332 client and 325 dedicated errors. These counts include cascades and
are not counts of independent defects. The prepared client has 4,078 SIMD edits,
240 restored address-named function declarations, 2,287 bound calls, 79 named
data objects, 190 verbatim-wrapped assembly dumps, 1,544 explicit function-address
casts, 592 per-function exports appended because the combined file omitted them,
and only 4 expressions retained for review. The prepared server has 1,094 SIMD
edits. All 19 transformation tests, the SIMD lane test, and the playable-logic
test pass. The full client object compilation still fails.

The complete client export covers 4,269 recognized functions after analysis settled.
This coverage figure does not measure recompilation or behavioral equivalence.

## What The Build Copy Rewrites

`scripts/prepare_rebuild.py` applies only mechanical, semantics-preserving
transforms and records every edit in `work/rebuild/<target>/preparation.json`:

- SIMD lane field accesses become checked storage views (`SR_VEC_LANES`).
  Lane reads on rvalues — typically intrinsic call results — use
  `SR_VEC_READ_LANES`, a GNU statement expression that evaluates the operand
  exactly once into temporary storage.
- `MEMORY[address]` calls whose address is a known function are rebound to its
  name; array-indexed data reads become `extern unsigned char sr_mem_*[]`
  objects named by address. Scalar reads and calls to unknown addresses are
  left as visible errors for review.
- The combined export omitted several hundred functions that the per-function
  export had decompiled. Those files are appended (their name-presence check
  runs against the sanitized text), which is what binds most previously
  unbound `MEMORY` calls: resolved calls rose from 1,499 to 2,287.
- Hex-Rays names that are not valid C are renamed consistently:
  `A::B` to `A__B`, backticked demangler segments to underscored identifiers,
  `Template<Args>` instantiations to `Template__Args`, lambda `operator()`
  names to `__operator_call`, and `#N` placeholders to `sr_anon_N`.
  Repeated template instantiations that sanitize to one name are kept by
  suffixing later definitions `_dup2`, `_dup3`, ...
- Hex-Rays' spurious `const` inference (it marks pointers the original code
  wrote through) is stripped from the export copy; system headers keep theirs.
- 128-bit integer constants that exceed 64 bits are split into lo/hi halves;
  constants that only overflow signed 64-bit get explicit `ull` suffixes.
  Integer-sourced `(__m128X)` casts become the register moves they denote
  (`_mm_cvtsi32_si128`/`_mm_cvtsi64_si128`, or a 16-byte load for `xmmword_`
  data); casts of already-vector operands are left alone.
- `?flt` unknown-float placeholders and empty `= ;` initializers become
  marked placeholders (`sr_unknown_float`, `sr_unknown_data`); the zeros are
  not recovered data.
- Referenced-but-never-declared data symbols (`off_140301EB8` and friends)
  gain extern objects sized by the Hex-Rays name prefix.
- MSVC inline assembly: `cpuid` and `xgetbv` become exact GCC extended asm
  bound to the `_RAX`-family register globals; all other MASM dumps are
  rewrapped verbatim as `.intel_syntax` basic-asm strings, so their contents
  (including any unresolved frame symbols) fail visibly at the assembler
  instead of poisoning the C parse.
- Prototypes that conflict with the definition, with a later prototype, or
  with system headers (imports and CRT/Win32 names, evidenced by GCC
  diagnostics) are dropped; the export's mis-inferred import prototypes were
  the source of most "conflicting types" errors.
- Assignments and initializations that store a function address through an
  inferred-integer view gain an explicit `(uintptr_t)` cast; variables
  declared as function pointers keep plain assignment.

`src/rebuild/export_compat.h` additionally provides declarations the export
assumes but MinGW headers do not: the SDL2, Steam, and `SHGetSpecialFolderPathA`
entry points (as unspecified-argument prototypes in a generated
`recovered_imports.h`), `fsqrt`, `guard_dispatch_icall_nop`, the `BYTE1`-`BYTE8`
/`WORD3`/`DWORD1`/`DWORD2` extraction helpers, and C versions of the
`__ROL`/`__ROR` rotate intrinsics that defs.h only defines for C++.

## Build And Diagnose

The optional CMake target compiles the actual client export. It is excluded from
normal builds while source recovery is unfinished. Compiler failures are retained;
missing functionality is not replaced with stubs.

```powershell
cmake -S . -B build/recompile -G Ninja -DSR_ENABLE_RAW_REBUILD=ON
cmake --build build/recompile --target subrosa_recompiled
python scripts/check-rebuild.py --compiler C:/Users/junin/mingw64/bin/gcc.exe
```

`scripts/check-rebuild.py` checks both binaries before and after this compatibility
header, writes GCC's structured SARIF diagnostics and the exact compiler command under
`reports/rebuild/`, and exits unsuccessfully if either source still fails. These are
syntax checks only; even passing them would not establish a successful link or a
working game. The diagnostic check is uncapped because this GCC build can exit
without flushing SARIF when an error limit is reached. Counts can include cascades
from earlier errors and should not be interpreted as independent defects. Pass
`--lenient` to downgrade the promoted pointer/integer conversion artifacts to
warnings; the diagnostics remain in the SARIF either way.

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
