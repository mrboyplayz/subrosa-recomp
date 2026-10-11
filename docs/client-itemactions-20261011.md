# Item action recovery — 2026-10-11

Codex and Claude coordinate through `../CODEX-CLAUDE.md`. Claude owns human
locomotion and active ragdoll routines; this batch owns four item routines.

| Original address | Readable implementation | Behavior |
| --- | --- | --- |
| `0x1400CA1C0` | `item_solve_contacts` in `src/engine/item_contacts.c` | Voxel candidates, box rejection, mesh contact calls, settling flags |
| `0x1400CA740` | `item_remove_cash_bill` in `src/engine/item_state.c` | Remove a packed three-bit cash denomination, update count/lifetime, preserve EAX return |
| `0x1400CDBD0` | `item_break_block_part` in `src/engine/item_state.c` | Create an item from a block part, update the gone mask, record its origin and region metadata |
| `0x1400CDFF0` | `item_restore_block_part` in `src/engine/item_state.c` | Return a nearby broken item to its block part and request a block update |

`src/engine/item.h` declares the interface and named storage accessors. Existing
entry points in `client_items.c`, `client_recovery_0c0000.c`, and
`client_terminal.c` call the readable implementations. All three maintained
client modules compile to objects with zero errors. They retain 8, 20, and 33
existing decompiler warnings, respectively. The new engine modules also compile
with `-O2 -ffp-contract=off -fno-strict-aliasing -Wall -Wextra -Werror`.

The shared executable has not been rebuilt or deployed in this batch. Claude
is running mutation checks that temporarily change its live source; compiling
that source into a shared executable during the run would capture a mutation.

## Evidence and boundaries

The original PE matches SHA256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The code was checked against its disassembly, including:

- Signed settling thresholds, candidate order, and the native distinction
  between unordered minimum and maximum bounds.
- Cash count edge cases, zero-extended return values, and x86 shift counts
  masked to five bits, including indices whose packed shifts exceed 31.
- Double-to-float conversion of quarter-turn angles, exact arithmetic order,
  block-part bit masks, origin packing, and last matching region entry winning.
- NaN distance taking the block-restoration branch and NaN upper region bounds
  remaining eligible, as the original `COMISS` branches require.

`t_itemactions.c` compares 5,000 cases for each of three routines;
`t_itemblockpart.c` compares 5,000 cases for the fourth. The fixtures compare
state, return values where meaningful, call arguments/order, and MXCSR status.
NaN payloads in floating-point call arguments are normalized as in the existing
harness. Cash and contact fixtures hash the complete affected item records;
the block creation fixture compares origin metadata and computer team fields.
Directed cases exercise maximum candidate buffers, empty/negative counts,
threshold equality, NaNs, duplicate region records, and masked part indices.

Grid/mesh queries, matrix rotations, item creation, and block updates are
controlled at documented boundaries. Some block lookups still run from the
loaded executable. These comparisons establish each new routine's own work
and calls; they do not establish complete gameplay or callee equivalence.

## Existing rotation limitation

With real rotations enabled, block creation's values, state, and recorded
update calls match, but the linked recompile's FP status differs. The independent
`t_itemrotationprobe.c` reproduces this in `0x14007B2A0`: nonzero quarter turns
give the same matrix bits while the original sets MXCSR `0x1FA0` and the
recompile sets `0x1FB2`, adding denormal and underflow flags. This issue is in
the existing rotation boundary and is recorded for follow-up with Claude.
Neither that helper nor its client wrapper was changed in this batch.

The default item block fixture uses a recording rotation stub; define
`ITEM_REAL_ROTATION` when compiling it to reproduce the integration limitation.

## Reproduce the comparisons

Use Git Bash with MinGW GCC/binutils and Python available. The optional source
directory and output overrides isolate concurrent work:

```powershell
New-Item -ItemType Directory -Force build/codex-item-engine-snapshot | Out-Null
Copy-Item src/engine/*.h build/codex-item-engine-snapshot/
Copy-Item src/engine/item_contacts.c,src/engine/item_state.c build/codex-item-engine-snapshot/
$env:NATIVE_COMPARE_ENGINE_DIR = (Resolve-Path build/codex-item-engine-snapshot).Path
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-items"
$env:TESTS = 'itemactions itemblockpart'
$env:CASES = '5000'
& 'C:/Program Files/Git/bin/bash.exe' tools/native-compare/run.sh
```

Compilation reports are under `reports/codex-itemactions-20261011/objects/`.
Comparison output is under `build/native-compare-codex-items/`. Mutation inputs
are preserved beside the fixtures; mutate only a private source snapshot.
