# Recompilation Status

## Windows client check, 2026-10-02

The latest launch passes font/UI assets, joystick/audio initialization, first
status-text drawing, buffer presentation, codec generation options and shader
compilation status. It reaches shader log output, where the next repair restores
the signed stream-buffer countdown. Subsequent launches enter world generation
and item-type initialization. The latest launch passes vehicle asset reads and
passes convex-weight generation and reaches the end of vehicle initialization,
then passes train and item-set storage. Filename enumeration, timestamp conversion, sorting and item-set loading now pass startup. Mesh generation and CMO model loading now pass startup. Procedural and quad builders now pass startup. Extrusion and layered models now pass startup. Branching models now pass startup. The latest model-copy failure traces to a four-byte ITM header read into a one-byte local, corrupting the saved item index; recovery restores the header object. Menu display and interaction remain unverified.
See [latest recovery evidence](client-state-recovery.md).

The latest object compiles with **zero errors** and 2,604 warnings. Linking
now succeeds with **zero unresolved symbols** and no duplicates. The time object,
its 87 string pointers, four missing DName virtual targets and their local
RTTI graph are restored. Four CRT thunks,
the qword fill helper and the x87 remainder loop are recovered. Codec storage
adds 139 aliases across 36,708 checked bytes and 73 relocated pointers.
63 native traps and three tail calls are restored. Startup initializer
tables, the missing timezone initializer, its writable name storage, and the
native JMP RAX call guard are recovered. There are 199 reviewed float-word
boundary repairs; all seven remaining narrow double coercions are resolved
and checked bit-copy macros compile across the client. The double-angle
small path passes 65,536 native comparisons. All 562 scalar square-root sites
now use a recovered SQRTSS helper, with another 65,536 result/MXCSR comparisons.
The vehicle storage/geometry gate passed all 109 client tooling/helper tests, the dependency fixture and four native
suites pass, including 49,152 x87 remainder, 32,768 DName and 73,729 ASCII
comparison cases. The final register and jump gaps use recovered assembly;
245,760 math and 49,152 bounded string-length comparisons pass. The linked PE's
7,913 instructions, 1,346 relative fixups, 68 read-only windows and 47 unwind
entries are verified. See [final linker evidence](client-native-link.md).
The first [warning batch](client-warning-recovery.md) removes 739 fread
diagnostics and passes 4,096 native argument/return comparisons.
The second batch removes another 1,529 warnings; full-width pointer casts
produce identical objects, and repaired fill/string helpers pass 49,409 and
67,617 native cases, including guard-page and alignment checks.
A previous
70-test discovery run has two unrelated server-fixture
failures, recorded in the state recovery notes.
Full startup, remaining pointer objects and packed math ABI remain incomplete;
launch attempts now pass the initial profile stores and time API resolver,
then pass default-agent-name formatting, stream allocation, filename conversion
and the first-read blocker. Formatted-input objects, return flow and integer
conversion locale storage are now recovered. Launch passes the world defaults
and versus defaults. SDL startup window and OpenGL context creation now pass.
The C locale descriptor, registered initializer and GL scanner output pointers
are restored. The GL version loader now returns the native EAX result and
passes its startup blocker. The copy helper's unaligned accesses now pass;
extension collection then exposed dropped allocation sizes in the malloc
thunk and the null-block realloc path. Both now forward the recovered size
to the typed native allocator. All five shader-source calls now pass their
native null fourth length-pointer argument. Launch passes shader setup and
reaches UI asset loading. The image reader now uses its contiguous 224-byte
context, three original callbacks and 128-byte buffer, and returns the decoded
pointer. The invalid callback jump is cleared. The file callback now routes
through the recovered CRT; the input buffer requests its native 4,096 bytes;
PNG signature bytes compare without signed promotion; and the UI loader
returns its native success/failure result. Launch enters PNG decompression,
where Huffman table setup now returns native success/failure values and uses
its contiguous count storage. Launch clears that routine and faults at a
fabricated cookie call in its dynamic-block caller `sub_14015CF70`. That
caller's scratch storage and result propagation are the next recovery target.
Successful font decode remains unverified.
The fiber slot,
all 14 CRT locks, low-level file descriptors and stream table now initialize.
Formatter layouts, locale backing and its narrow
emission return are recovered with 23,328 and 24,480 native comparisons.
The command-line bridge and six startup vector stores have been repaired;
The directory buffer, drive return and encoded API cache initializer are also
recovered, along with full-path and directory-change conversion pipelines;
Four profile default copies match native unaligned instructions;
49 API module ranges and all 20 native module names are also recovered;
Five thread allocations and the registered lock/PTD startup stages are restored;
Four file/stream allocation calls and 264 bytes of standard-stream backing
are restored; 960 pipeline and six startup failure/order comparisons pass.
File-open pointers and conversion objects are restored; 3,456 native chain
comparisons and 4,096 getc signed-countdown cases pass.
The scanner and integer conversion fixtures pass 38,400 and 36,288 native
comparisons. Eight profile/world/versus default copies pass 128 comparisons across
all destination alignments. SDL window setup passes 1,296 native boundary
comparisons. The complete 344-byte C locale descriptor, ten relocations and
768 case-map bytes pass verification; 24 native locale getter comparisons
and a scanner check above 4 GiB pass. The GL version loader passes 384 native
prefix/capability/clamp/return comparisons. The copy helper passes 174,530
native comparisons across alignment, overlap and dispatch paths. All 89 client
tests pass. The latest build and launch evidence is in
`reports/client-link-huffman-20261002/`. The allocator fixture adds
2,304 native malloc/realloc comparisons, including null-block allocation,
zero-size free, limits, failure/retry, errno and full-width returns. Shader
setup passes 256 native create/source/compile/attach sequence comparisons,
including source pointers above 4 GiB and explicit null length pointers.
The image wrapper passes 258 native comparisons across initial read lengths,
decode success/failure, callback layout, seek, close and complete pointer returns.
The file callback adds 4,096 native comparisons; UI failure returns add 1,024;
PNG signature/prefix/refill flow adds 147,528; stream buffer setup adds 512.
Huffman setup adds 8,421 comparisons of complete tables, guard bytes and returns.
The client does not reach the menu. See
[state-recovery evidence and limits](client-state-recovery.md).

Earlier milestones below retain their original diagnostic counts.

### Current executable source layout

As of 2026-10-05, the client compiles **42 maintained C modules** directly
from `src/client/`, plus import, window, leaf and name glue. Shared declarations
and storage are in `shared_client.h` and `client_data.c`. The build does not
consume or regenerate a monolithic C source. SDL/Steam import libraries and
system/CRT libraries remain link inputs. Generated assembly supplies math constants,
storage aliases, relocated pointer tables, named data, spelling/codec/startup
storage, time-object/vtable storage and recovered native code.
Final assembly inputs are recorded in each `link.json` report. See
[the maintained source layout](client-source-split.md) and `src/client/README.md`.

### Source organization after startup recovery

The earlier generated split was promoted to maintained C files on 2026-10-05
at the user's request. Make source changes directly in the individual C files.
Client source regeneration is disabled so the build preserves those edits.

Group recovered functions by verified subsystem ownership, with candidate
modules for startup/configuration, platform/runtime, networking, world/assets,
simulation, rendering/UI and audio. Confirm boundaries from callers and shared
state before assigning functions. Give shared declarations explicit headers
and each global object one definition; preserve storage aliases, layouts,
calling conventions and initialization order.

Move functions through direct C edits, keep module ownership and declarations
synchronized, and compare native fixtures and startup behavior. The original
decompiler exports remain historical references. This is a recovery layout;
the original source-file boundaries remain unknown.

User-provided Alex Austin video references:
[first video](https://www.youtube.com/watch?v=u2JRIdHhcic) and
[second video](https://www.youtube.com/watch?v=CI-QriinX8o).
The browser could not retrieve either video in this session; their contents
have not yet been reviewed, and no specific coding practices are inferred
from them.

The subsequent dependency pass preserves zero object-compilation errors and
reduces warnings to 5,021. The first link probe's 373 unresolved symbols are
down to 175 after checked constants, DLL imports, selected export helpers,
and the WinMain name binding were recovered. Linking still fails and the
client has not been launched. All 47 tooling/helper tests, the isolated
dependency fixture, and four selected native comparison suites pass. See
[link recovery evidence and remaining ABI work](client-link-recovery.md).

The initial prepared-client object pass achieved **native Windows object compilation with zero
compiler or assembler errors**, 5,032 warnings, and four notes. The resulting
`pe-bigobj-x86-64` object is 7,233,854 bytes. This is an object milestone;
no client executable has been linked or launched. All 36 preparation tests,
four diagnostic-tool tests, and four selected native comparison suites pass.
The exact command, input hashes, object hash, saved assembly, and diagnostics
are in `reports/client-object-final-20260930/`. See
[object compilation evidence and remaining limits](client-object-compilation.md).

With the current preparation script and MinGW compatibility header, the
prepared Windows client passes the lenient C syntax check with **zero errors**
and 5,027 warnings in the preceding syntax-only run. That pass reduced
errors from 186 through 110, 69, 34, and seven to zero. The report and exact
compiler command are in `reports/client-recompile-20260930/`.

This uses `-fsyntax-only` and the documented lenient conversion downgrades.
That syntax-only run produced no client object or executable. The source still has 29
Tree-sitter parser findings, and warnings, inferred types, ABI details, and
wrapped assembly remain part of recovery. See the
[expression and ABI evidence](client-expression-repairs.md) and the earlier
[load and address evidence](client-load-and-address-repairs.md).

Two recovered funclet entries additionally passed 8,192 direct comparisons
with their original machine code, checking callback inputs and returned bits.

The pinned binary supplied the exact bit patterns for 54 previously unknown
entries in `flt_1402B2CF4`; see [the table evidence](recovered-float-table.md).

The user-supplied [format and networking references](external-reference-crosswalk.md)
are recorded as leads for later behavior recovery. Their protocol claims have
not yet been substituted for evidence from this installed binary.

The raw Hex-Rays export does not yet compile into a game. Successful decompilation
means the tool emitted pseudocode, not that the inferred source has a valid ABI,
complete types, correct initialization, or equivalent behavior. No rebuilt game
executable has been produced by this step.

An earlier diagnostic run, in strict mode, reported 4,437 client errors and
1,126 dedicated server errors, compared with 13,468 and 3,571 for the unmodified
exports. In lenient mode (`--lenient`), Hex-Rays pointer/integer conversion
artifacts are downgraded to warnings â€” every diagnostic remains in the SARIF â€”
leaving 1,121 client and 398 dedicated errors. These counts include cascades and
are not counts of independent defects. The prepared client has 4,078 SIMD edits,
246 restored address-named function declarations, 2,426 bound calls, 112 named
data objects, 190 verbatim-wrapped assembly dumps, 1,544 explicit function-address
casts, 592 per-function exports appended because the combined file omitted them,
file-scope tag declarations for every referenced struct, and only 4 expressions
retained for review. The prepared server has 1,094 SIMD edits. All 19
transformation tests, the SIMD lane test, and the playable-logic test pass. The
full client object compilation failed at that earlier stage; the current
object milestone is documented above.

The complete client export covers 4,269 recognized functions after analysis settled.
This coverage figure does not measure recompilation or behavioral equivalence.

## What The Build Copy Rewrites

`scripts/prepare_rebuild.py` applies mechanical rewrites and recovery
hypotheses, recording every edit in `work/rebuild/<target>/preparation.json`.
The [preparation audit](preparation-audit.md) identifies the evidence still
required before those edits can be treated as behaviorally equivalent:

- SIMD lane field accesses become checked storage views (`SR_VEC_LANES`).
  Lane reads on rvalues â€” typically intrinsic call results â€” use
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
  `Template<Args>` instantiations (including nested and comma-separated
  argument lists) to `Template__Args`, lambda `operator()` and `operator=`
  names to `__operator_call`/`__operator_assign`, MSVC-mangled `??$...@`
  names to `sr_m_*`, `@<reg>` annotations to comments, and `#N` placeholders
  to `sr_anon_N`. Repeated template instantiations that sanitize to one name
  are kept by suffixing later definitions `_dup2`, `_dup3`, ...
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
- Referenced-but-never-declared data symbols (`off_140301EB8`, string
  symbols like `aApiMsWinCoreSy`, and `__imp_*` import slots) gain extern
  declarations sized by the Hex-Rays name prefix. Calls to addresses the
  inventory never resolved become `sr_func_*` extern functions.
- File-scope `struct X;` declarations are emitted for every referenced tag:
  a tag first seen inside a parameter list has prototype scope, which made
  identical-looking prototypes declare incompatible types.
- MSVC inline assembly: `cpuid` and `xgetbv` become exact GCC extended asm
  bound to the `_RAX`-family register globals; all other MASM dumps are
  rewrapped as `.intel_syntax` basic-asm strings. Two Hex-Rays dump
  notations are resolved (frame slots `var_XX` to `-0xXX`, and `cs:symbol`
  to the RIP-relative `[rip+symbol]`). Real instruction separators and GAS
  hash comments preserve the dumped instruction text. The 190 wrappers now
  assemble, but their register bindings, clobbers, and original stack-slot
  assumptions remain unverified.
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
native vector types. Earlier client preparation used a C syntax tree to convert
recognized field accesses into checked storage views. Those reports remain
historical evidence. The client now uses the maintained C modules directly;
`prepare_rebuild.py --binary dedicated` remains available for server recovery.

```powershell
python -m pip install --target work/python-deps -r scripts/rebuild-requirements.txt
python scripts/check-rebuild.py --binary client --object --debug --lenient --compiler C:/Users/junin/mingw64/bin/gcc.exe --output reports/client-object
python scripts/link_client.py --object-report reports/client-object/client-prepared.json --output reports/client-link
cmake -S . -B build/recompile -G Ninja -DSR_ENABLE_CLIENT_REBUILD=ON -DCMAKE_C_COMPILER=C:/Users/junin/mingw64/bin/gcc.exe
cmake --build build/recompile --target sr_vector_views_test
build/recompile/sr_vector_views_test.exe
cmake --build build/recompile --target sr_client_objects
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
