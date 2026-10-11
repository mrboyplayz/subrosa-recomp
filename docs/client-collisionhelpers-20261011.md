# Collision helpers restored — 2026-10-11

Four dependencies of Claude's restored human collision routine now have
readable C implementations. The maintained client entry points call these
implementations, and the combined client builds successfully.

| Original address | Readable routine | Source |
| --- | --- | --- |
| `0x140005160` | `physics_add_world_contact` | `src/engine/physics_bonds.c` |
| `0x140038230` | `world_grid_query_items` | `src/engine/world_grid.c` |
| `0x14011BF40` | `collision_place_mesh` | `src/engine/collision_placed.c` |
| `0x140033BE0` | `collision_capsule_placed_mesh` | `src/engine/collision_placed.c` |

The wrappers are in `client_recovery_000000.c`, `client_blocks.c`,
`client_recovery_100000.c` and `client_recovery_020000.c`, respectively.
New prototypes/layouts are in `physics.h`, `world.h` and
`collision_placed.h`. Existing restored routines and Claude's last completed
standing, jumping and bone-collision ports were preserved.

## Behavior and layout

The level contact routine finds the first inactive slot in the 16,384-entry
bond pool. It clears the bond payload, creates a type-5 contact, clears all
but the first two bytes of its constraint, and records body, relative point,
normal, scaled depth, friction and stiffness. The unused incidental native
return is nevertheless preserved: the final normal word on success, or a
pointer just past the bond pool when full. Input aliasing with the cleared
constraint is tested. Body storage retains only its low 16 bits.

The voxel query visits an inclusive box in **y, z, x order**, using layer
zero. It skips coordinates outside the layer and absent blocks/leaves,
masks every listed object to 14 bits, suppresses duplicates, and caps the
result at 256 entries. It does not add an object-kind filter. The output is
a count followed by pairs of a cleared word and an item id, 2,052 bytes in
total; unused output bytes remain unchanged. Grid dimension arithmetic
preserves the original 32-bit shift/multiply behavior.

The placed mesh format differs from the existing convex `CollisionMesh`.
It uses point triples, a group count at +0x10 and inline 56-byte groups from
+0x30. Each group contains a face count and pointer; faces occupy 36 bytes.
Mesh placement preserves its particular operation grouping, in-place point
placement, and its incidental return (`out` for an empty mesh, otherwise
`points - out - 8`).

The capsule routine clears only the hit distance initially. It computes a
normal from each face's first triangle, tests that triangle, then tests
corners 0/2/3 for a quad. It retains the **largest positive distance**, with
strict greater-than replacement, and leaves hit word +0x18 untouched.
Normals are reused after the triangle helper, including changes made by
that helper. Face pointers/counts and group counts are reloaded where the
original reloads them. Controlled tests modify those fields between calls.

## Quiet-NaN correction

The real-kernel tests exposed an existing FP-status mismatch in
`math_vec3_normalize` (`0x14007A240`). Its ordered C zero/NaN test could emit
`COMISS`, raising the invalid-operation flag for a quiet NaN. The original
uses `UCOMISS + JE`, which takes the zero branch for an unordered result
without raising invalid for a quiet NaN.

A separate `is_zero_or_nan_quiet` helper in `arith.h` preserves that behavior
with quiet SSE equality/unordered predicates. It is used by vector
normalization and the newly restored capsule normal calculation. Existing
uses of the older comparison helper were left intact. The focused
`normalizeflags` fixture compares values and MXCSR for quiet/signaling NaNs,
zeros, subnormals, infinities, overflow and in-place normalization.

## Verification

The fixtures run isolated mapped images, without starting the game.
`collisionhelpers` records triangle helper calls, arguments and order;
`collisionhelpers_real` executes the actual original/restored triangle
kernel. In the direct real-engine fixture a bridge calls the snapshot's
restored kernel. The wrapped real fixture calls the integrated client
normally. Both modes retain the original radius-bits stack interface.
The original memset boundary uses an equivalent controlled memset callback.

Directed/generated cases include full/last-free contact pools, negative and
nonzero active flags, constraint input aliases, signed body indices, grid
boundaries at 7/8 and 63/64, clipped/reversed boxes, missing blocks/leaves,
duplicates and capacity limits, masked object bits, empty meshes, triangles
and quads, degenerate geometry, in-place placement, mutable mesh metadata,
equal/zero/negative/NaN distances, and NaN/overflow/subnormal arithmetic.

The contact and grid phases compare raw state hashes, including output
guards and untouched input grids; the contact pools are also hashed after
the final case. Floating mesh outputs and callback arguments canonicalize
NaN payloads. Incidental pointer returns are normalized relative to the
corresponding storage. MXCSR is compared after every routine from an initial
value of `0x1F80`.

- Four helper suites passed at **5,000 cases per routine**: 80,000 new-routine
  comparisons, direct and wrapped, controlled and real-kernel modes.
- Direct and wrapped normalization checks passed at 5,000 cases each.
  Together the six suites matched **90,000 calls and 181,172 output lines**.
- All **52 mutations** were detected against passing 500-case baselines:
  12 world contact, 16 grid query, 23 placed-mesh and 1 normalization.
  One invalid-leaf mutation was detected by a fault; the others produced
  different outputs. None was missed or rejected for failing to build.
- Six regression suites passed at 1,000 cases each: `math`, `collide`,
  `grid`, `contact`, `itemphysics` and `bonehits`, comparing 1,319,285 lines.
  The human/item regression fixtures control their dependency boundaries;
  these do not constitute an in-game motion test.
- All four changed engine C modules compiled at `-O2 -Wall -Wextra -Werror`.
  The four client wrapper modules compiled with zero errors; existing
  decompiler warnings remain. The combined build has zero unresolved
  symbols and zero duplicate symbols.

`reports/codex-collisionhelpers-20261011/verification.json` records hashes,
source/snapshot equality, mutation results, object diagnostics and comparison
counts. The frozen executable is
`reports/codex-collisionhelpers-20261011/integrated-link-probe.exe`.
Mutation checks use private source/object/executable copies.

The tests provide evidence over these cases, not exhaustive game-wide
equivalence. This batch did not install or launch a game executable.
Claude's last installed build and walking probe remain separate evidence.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'collisionhelpers collisionhelpers_real collisionhelpers_wrapped collisionhelpers_wrapped_real normalizeflags normalizeflags_wrapped'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-collisionhelpers-final"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-collisionhelpers-engine-snapshot"
$env:RECOMP_EXE = "$PWD/reports/codex-collisionhelpers-20261011/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' tools/native-compare/run.sh
```

First run a separate 500-case baseline with tests
`collisionhelpers collisionhelpers_real normalizeflags` and output directory
`build/native-compare-codex-collisionhelpers-mutations`, then:

```powershell
python tools/native-compare/mutate_snapshot.py collisionhelpers build/codex-collisionhelpers-engine-snapshot/physics_bonds.c tools/native-compare/collisionhelpers-worldcontact.mutations --out build/native-compare-codex-collisionhelpers-mutations --recomp reports/codex-collisionhelpers-20261011/integrated-link-probe.exe --cases 500 --label worldcontact
python tools/native-compare/mutate_snapshot.py collisionhelpers build/codex-collisionhelpers-engine-snapshot/world_grid.c tools/native-compare/collisionhelpers-gridquery.mutations --out build/native-compare-codex-collisionhelpers-mutations --recomp reports/codex-collisionhelpers-20261011/integrated-link-probe.exe --cases 500 --label gridquery
python tools/native-compare/mutate_snapshot.py collisionhelpers build/codex-collisionhelpers-engine-snapshot/collision_placed.c tools/native-compare/collisionhelpers-placedmesh.mutations --out build/native-compare-codex-collisionhelpers-mutations --recomp reports/codex-collisionhelpers-20261011/integrated-link-probe.exe --cases 500 --label placedmesh
python tools/native-compare/mutate_snapshot.py normalizeflags build/codex-collisionhelpers-engine-snapshot/math3d.c tools/native-compare/collisionhelpers-normalize.mutations --out build/native-compare-codex-collisionhelpers-mutations --recomp reports/codex-collisionhelpers-20261011/integrated-link-probe.exe --cases 500 --label normalize
```

The default `run.sh` list now includes controlled/real helper tests and the
normalization check. Remaining nearby work includes `0x140188900` (level
triangles in a box), `0x1400CC610` (item state tick), `0x14004A7A0` (convex
mesh contacts), and Claude's unfinished human/effect routines.
