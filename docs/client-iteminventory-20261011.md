# Cash and item inventory recovery — 2026-10-11

Five more original routines have readable implementations in
`src/engine/item_state.c`, with layouts and prototypes in `src/engine/item.h`.
The maintained client entry points delegate to these implementations.

| Original address | Readable routine | Behavior |
| --- | --- | --- |
| `0x1400C3AB0` | `item_insert_cash_bill` | Insert a packed denomination, move following bills, increment cash spread |
| `0x1400C3D10` | `item_cash_value` | Sum the inclusive bill range using the original denomination table |
| `0x1400C3C90` | `item_append_inventory` | Append an item index to a human inventory slot |
| `0x1400E38A0` | `item_attach_child` | Apply mount compatibility/capacity rules and update both item records |
| `0x1400E35D0` | `item_transfer` | Drop, hold or attach an item, including old-holder callbacks and connected change counts |

The source wrappers are in `client_terminal.c`, `client_recovery_0c0000.c`
and `client_recovery_0e0000.c`. All three compile to objects with zero errors.
The new engine code also compiles at `-O2` with `-Wall -Wextra -Werror`.
`python tools/build_client.py` compiled and linked the combined client with
zero unresolved symbols and zero duplicates. The tested copy is
`reports/codex-iteminventory-20261011/integrated-link-probe.exe`.

## Instruction-level details

The cash field at item `+0x2A4` is an inclusive last-bill index here: zero
still reads denomination zero, and nine rejects insertion. The related
removal routine has its own zero-index expiry behavior, preserved in the
previous batch. No attempt was made to normalize these conventions.

The insertion decompiler's `LOBYTE(v6) = a2` is misleading. At
`0x1400C3B1F`, `MOV R9D, EDX` copies the full bill argument. The port follows
the assembly. When insertion does not shift existing bills, it uses the
incremented last-bill index. The input denomination is not masked to three
bits. The native 32-bit shifts mask their counts to 31; the valuation
routine uses 64-bit shifts of zero-extended packed storage and masks to 63.
All integer sums and counters preserve 32-bit wrapping. In particular,
the valuation routine's `INT32_MAX` index path reads only bill zero.

Inventory slots beyond the two hand fields use the same 40-byte layout.
Separate accessors preserve that layout without changing Claude's human
header. The mount table is indexed by child type, then parent type.
Child types 17 and 18 allow five children; other types require the parent
to be empty. The transfer routine preserves callback order, the saved old
slot, and the inventory capacity recheck after dropping from an old holder.
The two simpler append/attach routines deliberately perform only their
original record updates.

## Verification

`t_iteminventory.c` compares return values, raw state hashes, callback
arguments/order and MXCSR against `re/binaries/subrosa-vanilla.exe`.
It initializes and checks sixteen complete item records, four complete
human records, sixteen physics bodies, forty item types, change counters,
and the last valid item record/index (1023).

Directed cases include full/empty cash, negative and overflowing counters,
packed shifts beyond 31 and 63, out-of-range denomination bits, negative
inventory counts, hand/body slot restrictions, asymmetric mount rules,
capacity boundaries, old-holder detachment, index rejection
and connected-counter wrapping.

The recording-helper suite exercises callbacks that change the destination
inventory, including the post-drop capacity branch. The real-helper suite
executes the original and already restored detach/drop routines. The
`_wrapped` suites enter through the newly linked client entry points.
These comparisons execute isolated mapped images; they do not start the game.

Final comparison/mutation counts and hashes are recorded in
`reports/codex-iteminventory-20261011/verification.json`.

- All four suites passed at 5,000 cases per routine: 100,000 routine
  comparisons and 183,188 identical output lines, including MXCSR.
- All 27 deliberate mutations were detected against a passing 500-case
  baseline. No mutation changed live source or the shared probe.
- Earlier item actions, block-part creation and item removal also passed
  regression comparisons at 1,000 cases per routine (114,614 output lines).
- The live item sources match their tested snapshot byte for byte.

This is evidence for these routines over the tested cases, rather than an
exhaustive game-wide proof. No game menu/practice smoke test was run for this
batch. Existing decompiler warnings remain in the client wrapper modules.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'iteminventory iteminventory_real iteminventory_wrapped iteminventory_wrapped_real'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-inventory-final"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-item2-engine-snapshot"
$env:RECOMP_EXE = "$PWD/reports/codex-iteminventory-20261011/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' tools/native-compare/run.sh
```

Run the 500-case `iteminventory` baseline in its separate mutation output
directory first, then:

```powershell
python tools/native-compare/mutate_snapshot.py iteminventory `
  build/codex-item2-engine-snapshot/item_state.c `
  tools/native-compare/iteminventory.mutations `
  --out build/native-compare-codex-inventory-mutations `
  --recomp reports/codex-iteminventory-20261011/integrated-link-probe.exe `
  --cases 500
```

The mutation runner requires a passing baseline and writes only private
source/object copies. It does not alter live sources or the shared executable.

Claude's movement and particle claims remain separate in `CODEX-CLAUDE.md`.
This batch has been integrated into the build; no game-folder executable was
installed or launched during this work. Game-wide recovery remains incomplete.
