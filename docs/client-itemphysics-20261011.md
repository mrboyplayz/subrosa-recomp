# Item physics, human contacts and links — 2026-10-11

Three more routines have readable C implementations and maintained client
wrappers. The combined client compiles and links successfully.

| Original address | Readable routine | Source | Behavior |
| --- | --- | --- | --- |
| `0x1400CE370` | `item_update_physics` | `src/engine/item_physics.c` | Expiry, pocket flags, held/static bodies, world contacts and settling for all 1,024 items |
| `0x1400CA430` | `item_solve_human_contacts` | `src/engine/item_contacts.c` | Sphere contacts against the bones of active humans |
| `0x1400C3BA0` | `item_register_link` | `src/engine/item_state.c` | Allocate or overwrite a link slot and clear its replication masks |

`src/engine/item.h` contains the additional named accessors and prototypes.
The client wrappers are in `client_collision.c` and
`client_recovery_0c0000.c`. Claude's human and physics layouts were reused.

## Details preserved from the original

The item tick caches its initial body and type definition. A mesh callback
can change the item's type or body field; later branches read the changed
type while continuing to use the cached body and original definition.
Held bodies copy their holder's pelvis velocity and the item's pose. Static
and settled bodies freeze their velocities. Types 39, 40, 42 and 43 force
the item's settled flag. Types 25 and 26 bypass the held-pocket rule.

Type 35 uses the sphere path, type 44 uses its explicit bound points, and
other eligible types use eight rotated box corners. Types 28, 35 and 44
are excluded from the corner path. Corner queries also skip a held item
whose holder is in a vehicle. Contact arithmetic retains the original
operation order and coefficient values.

The sphere path clears hit field **+0x7C (`0x151A848FC`)**, rather than the
vehicle ray's part field at +0x30. Raw hit-state comparison exposed this
initial discrepancy. The corrected implementation has a separate
`item_hit_unknown_7c` accessor. The block-part loop reloads shared block
type, turn and part count after callbacks, including its loop limit.

Native unordered comparisons are preserved: NaN distances can enter the
sphere contact and human contact paths, and NaN speeds can satisfy the
settling condition. The human routine excludes bones 5, 6, 8 and 9 and
reloads item position/body between callbacks. Zero or NaN distance produces
a zero normal before negation. The radius values remain 0.11 and 0.36.

Link registration searches 64 slots only when the supplied slot is -1.
An explicit occupied slot is overwritten. Its signed mask-word calculation
and masked bit shift follow the original instructions. Return paths also
match: a full auto-allocation returns the last mask; no peers returns the
numeric word/item offset; positive peer count returns the pointer just past
the last processed peer mask. The fixture compares pointer returns relative
to their corresponding peer-mask base.

The incidental native return registers of the item tick and human contact
routine are **not preserved or compared**. Reviewed callers discard these
values; the readable routines are void and their legacy wrappers return
zero. In particular, the human routine can leave a stack pointer or the last
contact-helper return in RAX. Link registration's used return is preserved.

## Verification

`t_itemphysics.c` calls each routine in isolated mapped images of the
original and recompiled client. `t_itemphysics_wrapped.c` enters through the
newly linked client entry points. Each fixture runs the tick, human contact
and link phases, with identical recording callbacks for dependencies.

The tick phase controls mesh/human contacts, sphere/ray queries, world
contact insertion and block-part destruction. The separate human phase
executes the restored human routine with a controlled contact kernel.
Thus the comparisons cover these routines' work and call order/arguments;
they do not prove the complete behavior of their callees together.

Coverage includes first/last item and human indices, nonzero active flags,
static/held/parented/free items, all special type branches, sphere distance
and layer selection, mutable callback state, exact settling thresholds,
timer edges, below-world expiry, NaNs, 16-bit event-count wrapping, full and
partly full link masks, occupied explicit slot zero, mask boundaries and
negative/zero/positive peer counts. Explicit slots 64 and 65 also exercise
the native unchecked indexing within the initialized test record.

The output compares raw hashes of complete selected item/human records,
80 bodies, hit metadata, event records and link masks; it also hashes the
whole item/human arrays at the end. Calls print float words with NaN payloads
canonicalized. Raw record hashes retain all bytes. MXCSR is compared after
each routine, using the same initial value of `0x1F80`.

- Both final suites passed at 5,000 cases per routine: **30,000 routine
  comparisons and 464,760 identical output lines**, including MXCSR.
- All **54 deliberate mutations** were detected against a passing 500-case
  baseline: 34 item-tick, 12 human-contact and 8 link mutations. No misses.
- The first mutation round missed `slot == -1` becoming `slot <= 0` because
  generated explicit slot zero was always free. An occupied-slot directed
  case fixed that coverage gap. Both final suites and all 54 mutations were
  rerun with the improved fixture. The initial round remains recorded in
  `reports/codex-itemphysics-20261011/mutation-round1.json`.
- Six regression suites passed at 1,000 cases per routine: `itemactions`,
  `itemblockpart`, `iteminventory`, `iteminventory_real`, `itemremove` and
  `tick` (203,960 identical lines). The tick regression records its stage
  calls; the new item tick is tested separately above.
- The three changed engine sources compiled at `-O2 -Wall -Wextra -Werror`.
  The two wrapper modules compiled with zero errors and their existing
  decompiler warnings. The combined build passed with zero unresolved and
  zero duplicate symbols; existing client warnings remain.

Hashes, results and source/snapshot equality are recorded in
`reports/codex-itemphysics-20261011/verification.json`. The frozen integrated
executable is `reports/codex-itemphysics-20261011/integrated-link-probe.exe`.
Private sources/objects were used during mutations; the live sources and
shared executable were not mutated.

These tests provide evidence over the tested cases, not an exhaustive
game-wide proof. This batch did not install or launch a game executable.
Claude's walking probe and installed build remain separate evidence in
`CODEX-CLAUDE.md`.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'itemphysics itemphysics_wrapped'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-itemphysics-final"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-item3-engine-snapshot"
$env:RECOMP_EXE = "$PWD/reports/codex-itemphysics-20261011/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' tools/native-compare/run.sh
```

Run a separate 500-case `itemphysics` baseline with output directory
`build/native-compare-codex-itemphysics-mutations`, then run each set:

```powershell
python tools/native-compare/mutate_snapshot.py itemphysics build/codex-item3-engine-snapshot/item_physics.c tools/native-compare/itemphysics-physics.mutations --out build/native-compare-codex-itemphysics-mutations --recomp reports/codex-itemphysics-20261011/integrated-link-probe.exe --cases 500 --label physics
python tools/native-compare/mutate_snapshot.py itemphysics build/codex-item3-engine-snapshot/item_contacts.c tools/native-compare/itemphysics-human.mutations --out build/native-compare-codex-itemphysics-mutations --recomp reports/codex-itemphysics-20261011/integrated-link-probe.exe --cases 500 --label human
python tools/native-compare/mutate_snapshot.py itemphysics build/codex-item3-engine-snapshot/item_state.c tools/native-compare/itemphysics-links.mutations --out build/native-compare-codex-itemphysics-mutations --recomp reports/codex-itemphysics-20261011/integrated-link-probe.exe --cases 500 --label links
```

The labels isolate each set's mutation output directory. The runner requires
an identical native/engine baseline and records source, fixture, executable
and baseline hashes. `run.sh` now includes `itemphysics` by default.

Further item work remains at `0x1400CC610` and the convex mesh contact
routine `0x14004A7A0`; neither is claimed by this completed batch.
