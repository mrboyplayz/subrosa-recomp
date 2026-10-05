# Independently compiled client C files

The maintained client source is **42 C translation units**, plus import glue,
under `src/client/`. Its 4,260 recovered C bodies and 1,286 storage definitions
share `src/client/shared_client.h`. Edit the individual C files directly.
`client_data.c` is the single shared-storage owner. Module ownership is
declared in `sheets/02-plan.tsv`.

Semantic modules include startup, main loop, input, menus, audio, renderer,
master networking, collision, humans, vehicles, items, physics, terrain,
Practice, world generation, world assets, math, HUD, Character and effects.
Remaining functions use address buckets
pending subsystem classification. This does not reconstruct Alex Austin's
original file layout.

The build reads `src/client/manifest.json` and compiles the listed C files
directly. It validates actual function ownership and hashes all current
inputs. It does not read, create or regenerate a combined `subrosa.c`.
The previous client source generator is disabled, and the old prepared file
is retained as a historical text snapshot in the organization report.

`scripts/check-rebuild.py --binary client --prepared --lenient --object`
compiles each unit and combines their objects for the existing linker.
The monolithic build option has been removed. CMake can also compile these
same files through `SR_ENABLE_CLIENT_REBUILD` and `sr_client_objects`.

## Subsystem organization on 2026-10-05

Seventy functions moved from address buckets into named subsystem files.
The complete 4,260-function inventory retains exactly one C owner per body.
All emitted body hashes, the shared header and `client_data.c` match the
previous layout. The ownership book passes preflight without missing or
divergent rows; all behavioral statuses remain partial.

| Module | Recovered responsibility |
| --- | --- |
| `client_practice.c` | ResetGame and Practice spawner |
| `client_world_generation.c` | World generation and setup defaults |
| `client_humans.c` | Human creation, update, orientation and skeleton pose targets |
| `client_vehicles.c` | Vehicle creation, asset/type setup and train spawning/geometry |
| `client_items.c` | Item creation, itemset/type setup and contact candidates |
| `client_physics.c` | Joint processing and rotational integration |
| `client_collision.c` | Scene, mesh, sphere, swept and shape queries |
| `client_terrain.c` | Height initialization, tile writes, terrain raycast and draws |
| `client_world_assets.c` | Building, block and city files |
| `client_renderer.c` | Camera uniforms, visibility, world/building draws and viewport |
| `client_math.c` | Matrix products and rotations |
| `client_hud.c` | Health skeleton/capsules and menu prompt |
| `client_character.c` | Character preview and clothing assets |
| `client_effects.c` | Effect and particle updates |

`src/client/README.md` indexes the maintained C files and explains the build.
Make function fixes directly in those files and update shared declarations
when an interface changes. Keep the manifest, CMake source list and both
ownership sheets aligned when adding or moving functions. The build never
overwrites source edits. Native fixtures read these same modules and assemble
their selected test inputs in memory.

The migration's per-function evidence and unchanged-body checks are recorded
in `reports/client-module-organization-20261005/organization.json`.

## Verification on 2026-10-03

The following checks describe the earlier 30-file build.

- All 30 units compile; aggregate object and final PE link successfully.
- Zero unresolved or duplicate symbols in the final link.
- 2,606 distinct compiler warnings and four notes remain. There are 2,838
  raw warning occurrences because shared-header warnings repeat per unit.
  Raw unit reports remain available; deduplication does not suppress flags.
- The comparison object has no missing public symbols. Thirty additional
  public symbols are previously static helpers/data; compiler-generated
  `.refptr` symbols were excluded from that comparison.
- 146 recovery tests pass, including native differential fixtures and new
  storage/linkage, aggregate-return, schema-drift and duplicate-key checks.
- Both split and monolithic builds still fail before the third frame swap.
  The existing runtime recovery remains incomplete; splitting is not a
  playable-client milestone.

Evidence: `reports/client-object-split-20261003/`,
`reports/client-link-split-20261003/`,
`reports/client-split-symbol-comparison-20261003.json`, and
`reports/client-sheet-split-full-tests-20261003.txt`.
