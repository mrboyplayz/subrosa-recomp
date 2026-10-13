# Engine (clean C)

A rewrite of the Sub Rosa client as ordinary, readable C, one routine at a
time. The goal is the same game exactly: the same data files, the same
simulation results on every tick, the same OpenGL calls, the same network
packets.

`src/client/` is the recompiled client: decompiler output repaired until it
runs. This directory replaces it piece by piece. The game stays playable
throughout because both halves share one memory layout (see `memory.h`), so a
routine can move here without anything else changing.

## Status

The table records the recovered routines by original address. Recovery is incomplete.

| File | Contents | Original routines |
|---|---|---|
| `renderer.c` | 2D drawing: the vertex batch behind lines and shapes, textured and flat rectangles, atlas sprites; the radix sort that orders things back to front | 0x14007D420, 0x14007D230, 0x14007D520, 0x14007D320, 0x14006E0D0, 0x14006E2D0, 0x14006CFF0, 0x14006D660, 0x14006D300, 0x14007D710 |
| `camera.c` | window letterbox, viewport and scissor from canvas rectangles, 2D/orthographic/perspective setup, view and model matrices and their products | 0x14006C780, 0x14007BB00, 0x14007A2C0, 0x14007A570, 0x14007BE20, 0x14007B990, 0x14007B6F0, 0x14007B7E0 |
| `math3d.c` | the frame across a direction (shared by bullets and decals), vector normalize and rotation, angle difference, triangle normal, point-to-segment distance, vector-matrix and matrix products, orthographic matrix, rotation of a basis about an axis | 0x14007A240, 0x14007B4D0, 0x14000B5F0, 0x14006EC40, 0x14007ABA0, 0x14007B0F0, 0x140079D60, 0x14007A010, 0x14007AE70, 0x14007A0E0, 0x140079F00, 0x14007B2A0, quaternion product 0x140105930 |
| `text.c` | text drawing and measuring | 0x14006D930, 0x14006DB90, 0x14006E530, 0x14006F060 |
| `physics.c`, `physics_bonds.c` | joint preparation, point and joint impulse kernels, bond expiry and removal, contacts against the level and between two bodies | 0x14001C780, 0x14001CBB0, 0x14001BF70, 0x14001FB90, 0x14007F370, 0x140005160, 0x1400052C0 |
| `physics_points.c` | point masses: movement and gravity, lifetimes (removal with renumbering of bonds, vehicles and humans) | 0x1401154D0, 0x140115830 |
| `physics_solve.c` | the bond solver of a tick | 0x14001D080 |
| `physics_rotation.c` | rotation of a body over a tick (fourth-order Runge-Kutta) | 0x14012B2D0 |
| `physics_tick.c` | the physics tick: order of its stages, gravity, grid clearing, item voxels and lifetimes | 0x140116210 |
| `world_grid.c` | insertion into the spatial grid and deduplicated item queries over a voxel box | 0x140037DE0, 0x140038230 |
| `world_items.c` | tick stage: items follow their bodies; boxes and voxels they occupy; removing an item, detaching it from its parent, taking it out of a human's hand or slot | 0x1400C9D20, 0x14007F970, 0x1400CA9B0, 0x1400CA7C0 |
| `item_contacts.c`, `item_state.c`, `item.h` | item/item and item/human contacts, cash insertion/removal and valuation, inventory append, item attachment/transfer and link registration, broken block parts becoming items and returning to their origins | 0x1400CA1C0, 0x1400CA430, 0x1400CA740, 0x1400C3AB0, 0x1400C3BA0, 0x1400C3D10, 0x1400C3C90, 0x1400E38A0, 0x1400E35D0, 0x1400CDBD0, 0x1400CDFF0 |
| `item_physics.c` | item physics for a tick: expiry, held/static bodies, world contacts and settling | 0x1400CE370 |
| `world_blocks.c` | block id and gone-parts lookups in the level's layers; block parts broken loose by vehicles and humans; tick stage: humans' bones follow their bodies, capsule boxes and voxels | 0x140016870, 0x1400169B0, 0x1400B95E0 |
| `world_vehicles.c` | tick stages: vehicles follow their bodies (boxes, voxels, block parts they break off); lifetimes and removal; wheel joints (suspension, grip, axle); drivetrain (engine curve, brakes, driven wheels) | 0x1401069C0, 0x14010BE50, 0x14010D610, 0x140107ED0 |
| `world_streets.c`, `world_streets.h` | World map ("test2") streets: street patches, railway segments, filing streets into the 64 x 64 street cells, the railway route with its stops, the race track | 0x14005F6E0, 0x1400603A0, 0x1401899F0, 0x14002A9A0, 0x14002A680 |
| `world_street_mesh.c` | the three street meshes (embankments, ground between the rails, track) and their GL upload | 0x140188B80 |
| `collision.c`, `collision.h` | swept-sphere collision: segment-segment, line-plane, line-triangle, sphere-triangle; sweeps against vehicle hulls and trains (faces and unbroken windows); rays against vehicles (faces, windows, wheels); a hit point's weights in a triangle; face-only sphere sweep | 0x1400D6890, 0x1400779F0, 0x140077FA0, 0x140035690, 0x140035B70, 0x14002D370, 0x140035E50, 0x140037220, 0x1400DFB70, 0x1400DF380 |
| `collision_mesh.c` | contact between two convex meshes (vehicle type 17 against items), with the original's overlapping frame tables; its parts: mesh transform, point sweep against faces, closest points of two edges, edge side test; point sweep against a placed mesh | 0x140048DA0, 0x14004A480, 0x14004A1D0, 0x14008CEB0, 0x140187410, 0x14004A130 |
| `collision_placed.c`, `collision_placed.h` | item mesh placement and capsule contacts against its grouped triangles and quads | 0x14011BF40, 0x140033BE0 |
| `world_particles.c`, `particle.h` | particles (pieces thrown off vehicles): spawning one with a random spin; the tick's flight, bounce off the level, landing sound and coming to rest in two static lists; the upload and drawing of those lists | 0x14005F150, 0x140158CD0, 0x1401259B0 |
| `human_ragdoll.c`, `human.h` | the active ragdoll: target poses of a human's joints (so far the look pose; the per-tick drive 0x1400AD2B0 is next) | 0x1400AD030 |
| `human_walk.c` | walking: the ground probe (level and near vehicles), the ground ahead (how level it is, how it rises, the vehicle stood on), the walk point's height, the walk point's move from the player's input (speed by mode, stamina, leans, the pull of a held item of type 28) | 0x1400B91E0, 0x1400AC890, 0x1400B2440, 0x1400B40B0 |
| `human_body.c` | the skeleton's joints; per tick the body's centre, mean velocities and the smoothed rotation of the pelvis | 0x1400AB7B0, 0x1400ABB10 |
| `human_feet.c` | a foot's ground bond for a tick (height, grip, the foot's turn), and the start of a jump from a planted foot | 0x1400B5460 |
| `human_legs.c` | where the feet are sent: sitting in a vehicle, lying down; the legs' states on foot (which foot steps next, landing, losing the ground, getting up); a stepping leg (where the step lands and the arc the foot follows) | 0x1400B9D90, 0x1400BA210, 0x1400BAA40, 0x1400BB6B0 |
| `human_balance.c` | how a planted leg holds the body up: the velocity and turn wanted of the body, limited, as the point the hip is sent to and the turn of the hip joint | 0x1400BBF30 |
| `human_stand.c` | the legs of a human on its feet: standing or falling, the walk point, steps, each leg's balance or swing, and the inverse kinematics that sends each foot where its leg's state says | 0x1400BCA30 |
| `human_jump.c` | the tick a jump leaves the ground: the push-off through the legs, the launch velocity and spin of every bone's body | 0x1400B78F0 |
| `human_collide.c` | a human's bones against the level's triangles, the items near it and the bones of other humans: a contact for each hit | 0x1400B2E70 |
| `human_hits.c` | a human struck by a vehicle: contacts of its bones with the hull, the harm of a hard blow, the event and score of a fatal one | 0x1400B3A80 |
| `human_health.c` | health for a tick: death, the looseness of a hurt body, recovery, bleeding and its event | 0x1400B5E70 |
| `world_streets.c` (additions) | street triangles near a box: one street's range, and every street filed in the box's cells | 0x140188720, 0x140188900 |
| `item_tick.c` | item states for a tick: type-26 lists, children following parents, lifetimes, type 27's vehicle, phones, computers, type 40, grenades, radios, type 30, first aid | 0x1400CC610 |
| `item_phone.c`, `item_carry.c`, `item_grenade.c`, `item_gun.c`, `item_text.c` | a phone's state event; items carried on the body; a grenade going off; guns (loading, firing, recoil); an item's text line linked to a record | 0x140051940, 0x1401380F0, 0x1400A70B0, 0x1400CF670, 0x140050F90 |
| `world_bullets.c`, `bullet.h` | firing a bullet | 0x14004E8A0 |
| `world_effects.c`, `effect.h` | world effects: adding one (bullet holes, blood drops, sparks, tracers); moving them for a tick (drag, gravity, bouncing off the level, the three-point EFFECT_4 body, drops landing as blood stains, EFFECT_3 marks) | 0x14005EE40, 0x1401597F0 |
| `world_effects_draw.c` | drawing the world effects in depth order: holes, blood drops and sparks as textured quads, EFFECT_3/EFFECT_4 pieces as a lit mesh, tracers as smooth lines | 0x140125DB0 |
| `gl.h` | OpenGL entry points with their real prototypes | |
| `memory.h` | access to the game state shared with `src/client/` | |
| `arith.h` | integer and conversion arithmetic as the original's instructions do it | |

All of them are in use by the built client except `renderer_batch_vertex2f`
(0x14007D230), which no recompiled code calls yet.

The rows above added on 2026-10-12/13 were compared against the installed
Steam build (`cc667f7d…`, see `scripts/client_target.py`) with the rebuilt
harness in `tools/native-compare/` (`run.py`, `mutate.py`). Earlier rows were
verified against the export build (`e9500422…`) with the earlier, lost harness;
of those, 0x1400A56B0, 0x14007A240, 0x14007B4D0, 0x14006EC40, 0x14007ABA0 and
0x1400C3BA0 have been re-checked against the installed build so far.

## Rules

1. **A routine moves here only when it is proven equal to the original.**
   `tools/native-compare/run.sh` runs the original executable's routine and the
   one here with the same inputs and compares results, resulting state and
   every OpenGL call. A port is done when that comparison is identical, and
   changing any single operation of the port makes it differ (unless the
   change is equivalent, such as `x * -2` for `-(x + x)`).
2. **Floating-point expressions keep the original's order of operations.**
   `(a + b) + c` and `a + (b + c)` round differently, and physics diverges
   from a single different bit. Names and structure are free; the arithmetic
   is not.
3. **No addresses outside the headers.** State is reached through a named
   struct or accessor declared next to its address (`renderer_batch`,
   `renderer_ui_program`). Fields whose meaning is not known yet are called
   `unknown_<offset>` and say so.
4. **OpenGL is called through `gl.h` only**, so every call has a prototype.
   Many rendering bugs in the recompiled client came from calls without one.

## How a routine is replaced

The recompiled function keeps its name and place in `src/client/` and its
body becomes a call into this directory:

    void sub_14007B2A0(__int64 a1, float *a2, double a3)
    {
      extern void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle);
      math_mat3_rotate_rows((float *)a1, a2, *(float *)&a3);
    }

Recompiled callers are untouched, and the client's ownership inventory
(`src/client/manifest.json`) still lists every original routine. When all
callers of a wrapper have moved here as well, the wrapper can go.

## Build

`scripts/check-rebuild.py` compiles every `*.c` in this directory and links
the objects into the client. Unlike the recompiled sources these files are
built with optimization (`-O2`); they must stay free of undefined behaviour.
`-fno-strict-aliasing` is required because the shared state is one array
viewed through structs.

## Known limits of the comparison

- Results are compared bit for bit, except that any not-a-number result
  counts as equal to any other. Which of two NaN operands a processor
  propagates depends on operand order, which the compiler chooses.
- A routine that calls routines not ported yet is compared with those
  replaced, in both programs, by the same recording stub. That proves the
  routine's own work and its calls, not what the callees do.
- The comparison runs code that computes and that calls OpenGL. It cannot yet
  run code that reads files or talks to the operating system, and OpenGL calls
  are recorded, not drawn.

The 2026-10-11 item batches are documented in `../../docs/client-itemactions-20261011.md`, `../../docs/client-iteminventory-20261011.md` and `../../docs/client-itemphysics-20261011.md`. Their wrappers are integrated into the combined executable. The existing linked rotation helper has a documented FP-status mismatch; the cash/inventory routines do not use that boundary.

The four collision helpers restored after Claude stopped, and the quiet-NaN FP-status correction in vector normalization, are documented in `../../docs/client-collisionhelpers-20261011.md`.
