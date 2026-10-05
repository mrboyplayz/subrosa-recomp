# Windows client link recovery, 2026-09-30

The [final linker recovery](client-native-link.md) now links with zero
unresolved symbols. This document records the earlier dependency milestone.

The first link probe reported 373 distinct unresolved symbols and no duplicate
definitions. Checked dependency recovery reduced this to **175 unresolved
symbols**, still with no duplicates. Linking remains unsuccessful; no rebuilt
client was executed. The updated client object compiles with zero errors,
5,021 warnings, and four notes.

## Reproduce

```powershell
python scripts/check-rebuild.py --binary client --prepared --lenient --object --output reports/client-object-dependencies-20260930
python scripts/link_client.py --object-report reports/client-object-dependencies-20260930/client-prepared.json --output reports/client-link-final-20260930
python scripts/verify_client_dependencies.py --report reports/client-link-final-20260930/dependencies.json
```

The link command exits unsuccessfully while recovery is incomplete. The
verification command launches only an isolated dependency fixture. Reports
retain commands, hashes, stderr, generated sources, import libraries, and the
remaining symbol list. The link tool checks the original object and local
input hashes before using them.

## Recovered dependencies

### Math constants

112 undefined `dword_`, `qword_`, and `xmmword_` symbols identify original
addresses in the pinned executable. Their exact 4-, 8-, or 16-byte values
are extracted into 81 groups. Overlapping and adjacent ranges share backing
storage; each symbol retains its offset within that storage. Each group's
alignment preserves the original address modulo 16.

Only readable, non-executable, non-writable, file-backed bytes are accepted.
Any overlap with a PE base relocation is rejected. This matters because the
larger region also contains relocated pointers: copying the whole region as
anonymous constants would retain invalid original addresses. No relocated
pointer was copied into the recovered groups.

The isolated fixture compares every symbol's bytes with a separate read of
the original file, verifies alignment, and checks overlapping alias offsets.
All 112 symbols pass. This proves recovered storage bytes and alias layout,
not the correctness of the arithmetic or register bindings that use them.

### DLL imports and IAT slots

Import libraries are generated for the 65 recorded SDL imports and ten
recorded Steam imports. The installed DLLs are checked for x64 architecture
and each requested exported name. DLL hashes are recorded in the dependency
report. The DLL files are not modified. Custom Lua and mod-manager DLLs do
not participate in this recovery.

Five renamed IAT objects are built from the existing generated import shim.
They bind to `SDL_memset`, `SDL_CreateSemaphore`, `SDL_SemWait`,
`SDL_CreateThread`, and `SDL_RWFromFile`.

The runtime fixture verifies all five pointer bindings. It performs 4,096
indirect `SDL_memset` comparisons with the installed SDL function, including
return pointers and bytes around the destination buffer. SDL reports version
2.0.12. No window, thread, Steam session, or game loop is started by this fixture.
Steam import names are checked against the export table; Steam behavior has
not been exercised here.

### Decompiler helpers

The supplied `defs.h` defines C++ bit-copy coercions and a byte-by-byte forward
`qmemcpy`, but does not supply equivalent working C definitions. The new
`client_export_helpers.h` restores `COERCE_FLOAT`, `COERCE_INT`,
`COERCE_UNSIGNED_INT`, the assignable signed lane views `SDWORD1`/`SDWORD2`,
and forward `qmemcpy`. Inputs are evaluated once. Bit coercions copy the
target width and reject widening beyond the source storage.

Three tests check 4,096 bit-pattern trials against native MOVD/MOVQ register
moves, signed lane reads/writes, single evaluation, overlapping forward
copies, zero-length copies, and rejection of invalid widening. Forward copy
behavior is significant: when the destination overlaps above the source,
the original helper propagates earlier writes rather than using memmove.

The strict width check exposed **149 `COERCE_DOUBLE` calls with four-byte
inputs**, plus **three four-byte inputs to 64-bit integer coercions**. These
cannot safely use the supplied C++ helper's eight-byte memcpy contract.
The ambiguous names remain unresolved, with their intended return widths
declared. The generic checked bit-copy primitive passes its fixture, but
these exported double/64-bit call sites still need original instruction and
type evidence. Failed intermediate builds are retained in the reports.

### WinMain name binding

The object defines `WinMain_sr`; the preparation pass renamed the original
export's WinMain to avoid a header conflict. The pinned bytes at
`0x1400011d0` are `e9 5b fe ff ff`, a jump to `0x140001030`, matching the
existing exported wrapper's call to `WinMain_0`.

The link probe binds the missing `WinMain` name to `WinMain_sr` with a linker
symbol alias after checking those bytes and the object's defined symbol.
It supplies no new startup implementation. This resolves that name only;
the original PE entry at `0x1401f9460`, security-cookie setup, CRT/TLS state,
command-line conversions, and startup ordering remain recovery work. The
probe currently uses MinGW startup, which has not been shown equivalent.

## Remaining linker queue

| Category | Distinct symbols |
| --- | ---: |
| Absolute-memory aliases (`sr_mem_...`) | 112 |
| Address-named strings | 21 |
| Opaque data and pointer objects | 16 |
| Pseudo-register globals | 14 |
| CRT/decompiler helpers | 9 |
| Ambiguous double/64-bit bit coercions | 3 |
| Total | 175 |

The machine-readable queue is in
`reports/client-link-final-20260930/recovery-queue.json`. Absolute addresses
must map to recovered storage, imports, or functions while preserving aliases
and relocations. Strings need their original encoding and lifetime. Pseudo
registers require real data-flow/ABI recovery; defining zero-valued globals
would not make the existing basic assembly use those globals correctly.
Opaque pointer objects need targets and initialization recovered. None of
these remaining symbols was replaced with a dummy definition.

All 47 tooling/helper tests and four selected native comparison suites pass.
These checks cover the recovered dependencies and selected earlier functions,
not a linked client. Full startup, subsystem integration, and scenario-level
behavior comparisons remain unfinished.
