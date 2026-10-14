# Routine restoration — 2026-10-14, second batch

12 more original routines have readable engine implementations and actual
client adapters. Together with the first batch, this restores 38 routines.
The full original-address inventory is in `README.md` and the headers.

| Implementation | Routines |
|---|---|
| `physics_create.c` | free bond lookup; rigid-body, point-mass, positional-bond and rotation-bond creation |
| `disk_files.c` | item drive resolution; file-record append |
| `net_bytes.c` | byte-stream read and write |
| `area_bounds.c` | corporation interior, vault and world-region membership |

## Behavior preserved

- Allocators preserve the original first-free order, nonzero occupied flags,
  exact clearing ranges, defaults and zero-extended `0xFFFFFFFF` failure.
  Both body-bond constructors clear their corresponding solver constraint.
  Point creation records the optional vehicle and advances the point count.
- Scalar vector copies preserve their original order when sources overlap
  the newly initialized record. Body mass crosses the legacy client ABI as
  a raw word in the fifth stack argument, then becomes a float in the engine.
- Inertia inversion preserves comparison and floating-point exception
  behavior. Minimum-inertia selection retains the original bits even when
  denormals-are-zero is enabled. A compiler-generated `MINSS` would lose
  that behavior, so selection uses integer words and explicit comparisons.
- Byte transfers retain 32-bit product wrapping, overlap-safe copies,
  alignment of partial bytes, and cursor reloads after an aliased copy.
  Reads check length before alignment. Writes check their starting position
  only, just as the original does.
- Disk drive zero resolves the first child; drive two resolves the item
  itself. File append retains the original unbounded NUL-terminated copy,
  content-before-copy order and file-count reloads.
- Corporation interiors test x/z only; vaults and world regions test all
  three axes. Lower faces are inclusive and upper faces exclusive. The
  native comparison branches reject unordered lower bounds but accept
  unordered upper bounds. Short-circuit order and FP status are preserved.

## Verification

The oracle is the local original `subrosa.exe`, SHA-256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The tests execute original machine code with the original memory-copy
implementations, then compare it with optimized engine C. No original
routine under test is replaced with a stub.

| Suite | Direct routine cases | Actual client-adapter cases |
|---|---:|---:|
| `physicsalloc` | 1,500 | 2,500 |
| `diskfiles` | 2,000 | 10,000 |
| `packetbytes` | 10,000 | 10,000 |
| `areabounds` | 15,000 | 15,000 |
| Total | 28,500 | 37,500 |

All 66,000 routine comparisons were identical. All 28 deliberate mutations
were detected: physics 12/12, disk files 5/5, packet bytes 6/6 and area
bounds 5/5. Existing packet-bit and record-allocation suites also passed
through their actual client adapters at 200 cases per operation. Their
output hash prefixes were `8526f03c580b9d22` and `372f941d9099e2c7`.

The physics fixture hashes complete object pools and constraints, checks
return-register width, and compares FP status under all four rounding
modes, with and without FTZ/DAZ. It includes first/last/full pools, arbitrary
occupied flags, null optional velocities, overlapping inputs, NaNs,
infinities and subnormals. Disk tests cover capacity, long names, aliases,
child-count signs and invalid drive numbers. Byte-stream tests cover zero
lengths, wrapping products, rejected and boundary-crossing transfers,
forward/backward overlap, cursor aliases and negative bit positions.
Bounds tests exercise each face, its adjacent representable float,
inverted bounds, ignored height, exceptional values and early exits.

The packet alias fixture was strengthened after a mutation survived:
its short-buffer schedule had rejected that case before the copy. The
final fixture explicitly permits the alias transfers.

```powershell
$env:SUBROSA_GAME_DIR = 'D:\SteamLibrary\steamapps\common\Sub Rosa'
python tools/native-compare/run.py physicsalloc --cases 300 --out build/restore2-physics-direct
python tools/native-compare/run.py diskfiles --cases 1000 --out build/restore2-disk-direct
python tools/native-compare/run.py packetbytes --cases 5000 --out build/restore2-bytes-direct-v2
python tools/native-compare/run.py areabounds --cases 5000 --out build/restore2-area-direct
python tools/native-compare/run.py physicsalloc --cases 500 --client-wrappers --timeout 300 --out build/restore2-physics-wrappers
python tools/native-compare/run.py diskfiles areabounds --cases 5000 --client-wrappers --out build/restore2-client-wrappers
python tools/native-compare/run.py packetbytes --cases 5000 --client-wrappers --out build/restore2-bytes-wrappers-v2
python tools/native-compare/mutate.py physicsalloc physics_create.c tools/native-compare/m_physicsalloc.txt --cases 100
python tools/native-compare/mutate.py diskfiles disk_files.c tools/native-compare/m_diskfiles.txt --cases 300
python tools/native-compare/mutate.py packetbytes net_bytes.c tools/native-compare/m_packetbytes.txt --cases 1400
python tools/native-compare/mutate.py areabounds area_bounds.c tools/native-compare/m_areabounds.txt --cases 1000
python tools/native-compare/run.py packetbits recordalloc --cases 200 --client-wrappers --out build/restore2-regression
```

Direct output SHA-256 prefixes reported by `run.py`: physicsalloc
`408462392230a7d5`, diskfiles `cf2250eb200fadcb`, packetbytes
`cf9b90be024e428b`, areabounds `37ad231e543b346c`. Actual client-adapter
prefixes: physicsalloc `cb82e9ae8b30f4bf`, diskfiles `a0d00f4164573fe7`,
packetbytes `cf9b90be024e428b`, areabounds `37ad231e543b346c`.

The full client compiled and linked under
`build/routine-restoration2-client/`. All four new engine translation units
compiled without warnings. The executable is 11,811,476 bytes, SHA-256
`87224683a0d9ff404ca699c2310aefec844370a543af13620b3b1717f8c67420`.

## Limits

These are finite differential checks, not an exhaustive proof. Inputs refer
to mapped storage; byte extents after 32-bit wrapping are nonnegative and
accessible; names terminate in accessible storage. Arbitrary invalid
pointers and unmasked floating-point exceptions are not tested. Native
buffer and filename overrun behavior is retained rather than silently
changing the game contract.

`physics_create_point` currently has no recompiled callers, but its original
client entry point is restored and tested. Some physics field meanings
remain unknown and retain their existing offset-based names. No gameplay
or rendering smoke test was performed for this batch.
