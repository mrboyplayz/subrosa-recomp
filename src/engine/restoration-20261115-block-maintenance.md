# World block data and mesh maintenance

Four client entry points now delegate to `world_block_maintenance.c`.
Together with the current upstream work, progress is 303/1,119 game routines.

| Original address | Engine routine | Behavior |
|---|---|---|
| 0x140012F30 | world_block_unknown_808_at | Reads the voxel's unknown_808 word, or zero for a missing record. |
| 0x140017C40 | world_set_block_unknown_808 | Writes that word and returns the value, preserving the lookup's full return on a missing record. |
| 0x140012940 | world_release_block_mesh | Detaches a quarter mesh and its back-link, then releases channels 0, 3 and 5 in order. |
| 0x140017890 | world_invalidate_block_meshes | Calls the existing preparation routine for an active record, releases four meshes, clears unknown_6024, and increments a counter for record 1008. |

The voxel field's meaning is not established. The mesh routines belong to
world/block rendering maintenance; these are behavior-preserving restorations,
not rendering optimizations. Both were checked against native disassembly.
The counter is unsigned to preserve native wraparound without signed overflow.

`block808` uses a recording lookup stub in both builds. It checks all 512
local voxel positions, high coordinate bits, records 0/1/1008/4095, missing
records with arbitrary upper return bits, return values and whole-record
hashes. It verifies these accessors rather than re-verifying the lookup.
Record lookup returns are restricted to valid allocated records or -1.

`blockmeshes` records the existing preparation and GPU-release boundaries.
The release routine itself is real in both builds, including calls made
from the invalidation routine. Inputs cover first/last/out-of-range records,
all four valid quarters, inactive and nonzero active flags, valid and invalid
mesh IDs, duplicate mesh IDs, preparation changing active/mesh state, and
counter wraparound and an unchanged one-past-capacity guard. Logs capture state at each release call as well as final
record and back-link hashes, so store and call order are observable.
Quarter values outside 0..3 are outside the fixture's domain; the original
does not validate them. GPU work and preparation internals are not tested.

Validation commands (SUBROSA_GAME_DIR points to the installed game):

```
python tools/native-compare/run.py block808 blockmeshes --cases 4096 --client-wrappers
python tools/native-compare/mutate.py block808 world_block_maintenance.c tools/native-compare/block808.mutations --cases 600
python tools/native-compare/mutate.py blockmeshes world_block_maintenance.c tools/native-compare/blockmeshes.mutations --cases 600
python scripts/build_quick.py --compile-only
```

The quick build compiled and linked successfully in 6.65 seconds, rebuilding
five units after the branch change. Gameplay launch has not been verified.

Native wrapper comparisons matched: `block808` produced 12,289 lines
(digest `8d85a92ce44e52dc`), and `blockmeshes` produced 30,255 lines
(digest `96ee7ed114bf50f9`). Removed the ten local-name entries belonging
to decompiler locals eliminated by these four wrappers.

All nine deliberate mutations were detected: four voxel-access mutations
and five mesh-maintenance mutations. The final boundary mutation verifies
that accepting record 4096 is detected through the adjacent-state guard.

The module checker passes function uniqueness, ownership, the CMake source
list and named symbols, then reports the existing stale local-name entry
`14006C510 v7 callee_output_word` from the earlier packet-stream restoration.
