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

59 of roughly 1,430 game routines are here.

| File | Contents | Original routines |
|---|---|---|
| `renderer.c` | 2D drawing: the vertex batch behind lines and shapes, textured and flat rectangles, atlas sprites | 0x14007D420, 0x14007D230, 0x14007D520, 0x14007D320, 0x14006E0D0, 0x14006E2D0, 0x14006CFF0, 0x14006D660, 0x14006D300 |
| `camera.c` | window letterbox, viewport and scissor from canvas rectangles, 2D/orthographic/perspective setup, view and model matrices and their products | 0x14006C780, 0x14007BB00, 0x14007A2C0, 0x14007A570, 0x14007BE20, 0x14007B990, 0x14007B6F0, 0x14007B7E0 |
| `math3d.c` | vector normalize and rotation, angle difference, triangle normal, point-to-segment distance, vector-matrix and matrix products, orthographic matrix, rotation of a basis about an axis | 0x14007A240, 0x14007B4D0, 0x14000B5F0, 0x14006EC40, 0x14007ABA0, 0x14007B0F0, 0x140079D60, 0x14007A010, 0x14007AE70, 0x14007A0E0, 0x140079F00, 0x14007B2A0, quaternion product 0x140105930 |
| `text.c` | text drawing and measuring | 0x14006D930, 0x14006DB90, 0x14006E530, 0x14006F060 |
| `physics.c`, `physics_bonds.c` | joint preparation, point and joint impulse kernels, bond expiry | 0x14001C780, 0x14001CBB0, 0x14001BF70, 0x14001FB90 |
| `physics_solve.c` | the bond solver of a tick | 0x14001D080 |
| `physics_rotation.c` | rotation of a body over a tick (fourth-order Runge-Kutta) | 0x14012B2D0 |
| `physics_tick.c` | the physics tick: order of its stages, gravity, grid clearing, item voxels and lifetimes | 0x140116210 |
| `world_grid.c` | insertion into the spatial grid | 0x140037DE0 |
| `world_items.c` | tick stage: items follow their bodies; boxes and voxels they occupy | 0x1400C9D20 |
| `world_vehicles.c` | tick stage: vehicles follow their bodies; boxes and voxels; block parts they break off | 0x1401069C0 |
| `world_streets.c`, `world_streets.h` | World map ("test2") streets: street patches, railway segments, filing streets into the 64 x 64 street cells, the railway route with its stops, the race track | 0x14005F6E0, 0x1400603A0, 0x1401899F0, 0x14002A9A0, 0x14002A680 |
| `world_street_mesh.c` | the three street meshes (embankments, ground between the rails, track) and their GL upload | 0x140188B80 |
| `collision.c`, `collision.h` | swept-sphere collision: segment-segment, line-plane, line-triangle, sphere-triangle; sweeps against vehicle hulls and trains (faces and unbroken windows); rays against vehicles (faces, windows, wheels) | 0x1400D6890, 0x1400779F0, 0x140077FA0, 0x140035690, 0x140035E50, 0x140037220, 0x1400DFB70, 0x1400DF380 |
| `human_ragdoll.c`, `human.h` | the active ragdoll: target poses of a human's joints (so far the look pose; the per-tick drive 0x1400AD2B0 is next) | 0x1400AD030 |
| `gl.h` | OpenGL entry points with their real prototypes | |
| `memory.h` | access to the game state shared with `src/client/` | |
| `arith.h` | integer and conversion arithmetic as the original's instructions do it | |

All of them are in use by the built client except `renderer_batch_vertex2f`
(0x14007D230), which no recompiled code calls yet.

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
