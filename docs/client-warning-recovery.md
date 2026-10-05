# Client warning recovery — 2026-10-02

The linker queue is empty. Warning cleanup starts from the verified client
object's **4,955 warnings**, grouped into **301 diagnostic families** with
source locations and original function addresses. The inventory retains each
message; compiler warnings are not suppressed.

**Current gate: 2,657 warnings, zero errors, zero linker gaps, 67 passing
client tests.** The second batch removes 1,529 warnings from the preceding
4,216-warning object. The latest inventory contains 250 diagnostic families.

## fread buffer and stream ABI

The exported `fread_sr` buffer parameter was incorrectly restricted to
`__m128i *`. The original 29-byte wrapper at `0x14020c0c8` leaves RCX unchanged,
places the stream from R9 into the fifth stack argument, supplies SIZE_MAX in
RDX, and forwards element size/count in R8/R9 to `0x14020c0e8`.

The public buffer now uses `void *`. All 408 direct callers express buffer and
stream addresses through `uintptr_t` into `void *` and `FILE *`, respectively.
Caller address calculations and the forwarded size/count values are unchanged.
This addresses both ordinary buffer pointers and inferred integer address
containers while preserving the original register-width boundary.

An isolated fixture compares the actual prepared wrapper to original
instructions for **4,096** argument/return cases. It checks all five forwarded
arguments, full 64-bit sizes/counts, SIZE_MAX, null addresses and arbitrary
opaque pointer values. Its capture trampoline is test scaffolding; the client
continues to call its existing CRT helper. Complete file I/O, CRT FILE layout,
stream locking and error paths remain separate recovery work.

The first verified step removed **708 warnings**, leaving 4,247 with zero
compiler errors and a successful link. The remaining integer buffer callers
are covered by the same address-boundary repair in the final step.

The final object has **4,216 warnings and zero errors**: **739 warnings removed**
from the 4,955-warning baseline. No `fread_sr` diagnostics remain. The client
links with zero unresolved and duplicate symbols, and **56 client tests pass**.
The final native PE and dependency verifiers pass. The updated inventory has
299 diagnostic families. Reports are under `reports/client-object-file-abi-final-20261002/`,
`reports/client-link-file-abi-final-20261002/` and
`reports/client-warnings-file-abi-final-20261002/`.

## Full-width pointer storage

The compiler diagnosed 1,286 pointer assignments into `uint64` storage. Those
diagnostics identify **1,271 distinct assignment sites**; some macro-expanded
sites produced repeated messages. A source manifest records each function,
exact expression and occurrence. The pass spells the conversion as
`(uint64)(uintptr_t)(value)` and leaves narrower destinations untouched.

The baseline and cast-only source were compiled with the same object-build
flags and a static assertion that both address types are eight bytes. The
objects are **byte-for-byte identical**, including all **389 sections** and
relocations. Their matching SHA256 is
`f4038e88f90768666574fbeeced90abf30ce4925ca96a3108f9905b65762cbe0`.
This establishes preservation of the existing generated behavior; it does not
establish that every inferred field layout or pointer consumer is correct.
Evidence is in `reports/client-pointer-storage-equivalence-20261002/`.

## Byte-fill and bounded comparison

The byte-fill helper at `0x1401fcd30` accepts an untyped destination, with the
original word-scaled cursor retained inside its body. Its 280 direct callers
use a full-width address boundary. The comparison at `0x140236ff0` accepts
two byte-string pointers; its 41 direct callers retain the original addresses.
Unsigned address differences and full-width alignment masks replace inferred
signed subtraction and pointer-to-small-integer casts. Its native signed
64-bit -1/0/+1 returns remain unchanged.

Native comparisons exposed three actual byte-fill defects:

- The decompiler substituted a four-byte MOVD constructor for native MOVQ.
  The upper eight bytes of each 16-byte block became zero for nonzero fills.
  Eight-byte construction now restores all replicated bytes.
- Eleven vector stores used aligned C pointer dereferences where the native
  routine supports unaligned buffers. These use unaligned SSE intrinsics;
  aligned streaming stores retain their original alignment.
- The REP STOSB C helper returned an uninitialized local. Its sole native
  caller establishes R11 as the destination; the C helper now returns the
  explicit destination supplied by that caller.

Byte replication uses unsigned 64-bit multiplication, preserving native wrap
without signed-overflow undefined behavior. The new fixture passes **49,409
fill cases** and **67,617 bounded string cases**, including every alignment,
zero counts, null strings with zero count, protected page boundaries, return
pointers, guard bytes, REP/SSE dispatch and streaming-store thresholds.
The production O0 and no-strict-aliasing flags are used for this comparison.

The updated object has **2,687 warnings** with no new diagnostic families.
All 57 client tests, linked-native PE checks and dependency fixtures pass.
This batch preceded the first game launch. Its reports are under
`reports/client-object-pointer-memory-20261002/`,
`reports/client-link-pointer-memory-20261002/` and
`reports/client-warnings-pointer-memory-20261002/`.

## Next review targets

- 461 calls through incompatible function types, including startup Win32 calls.
- 442 casts from smaller integers to pointers and 395 pointer-to-smaller-integer
  casts. Each needs original register-width evidence.
- Opaque pointer/integer storage and incorrectly inferred memory helper types.

An explicit cast is appropriate only when the native ABI establishes that the
value carries an address with the same width. Function signatures, storage
layouts and arithmetic are recovered before conversion warnings are removed.

## Reproduction

```powershell
python scripts/prepare_rebuild.py --binary client
python scripts/check-rebuild.py --binary client --prepared --object --lenient --output reports/client-object-pointer-memory-20261002
python scripts/link_client.py --object-report reports/client-object-pointer-memory-20261002/client-prepared.json --output reports/client-link-pointer-memory-20261002
python scripts/verify_client_native_link.py --directory reports/client-link-pointer-memory-20261002
python scripts/verify_client_dependencies.py --report reports/client-link-pointer-memory-20261002/dependencies.json
python scripts/inventory_client_warnings.py --report reports/client-object-pointer-memory-20261002/client-prepared.json --output reports/client-warnings-pointer-memory-20261002/inventory.json
python -m unittest discover -s scripts -p test_client_file_abi.py -v
python -m unittest discover -s scripts -p test_client_memory_abi.py -v
```

Subsequent full-client launch attempts exposed startup argument forwarding,
unaligned vector stores and then a malformed CRT directory buffer. See
[startup launch evidence](client-state-recovery.md). The latest object has
2,657 warnings; all 67 client tests pass. The directory buffer, drive return
and encoded API cache initialization are recovered. Four profile copies now match native unaligned stores. Startup passes the
first two copies; 49 API ranges and 20 module names are now recovered.
CRT fiber/thread-state and lock initialization now pass. The next failure
is formatted-output locale/context storage;
directory-change and full-path conversions pass native pipeline comparisons.
It still does not reach the menu.

## API module pointer table

All 20 entries now refer to recovered native UTF-16 storage. This fixes the
absolute fibers-module address that faulted during startup and removes 19
incompatible pointer diagnostics from pointer-to-array initializers.
Warnings remain enabled. The final inventory has 2,657 warnings in 250 families
under `reports/client-warnings-api-modules-20261002/`.
