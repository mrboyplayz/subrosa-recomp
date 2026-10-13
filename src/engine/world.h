/* World objects: humans, items, item types and the spatial grid used for
 * collision queries. Only the parts the ported routines use are named; the
 * layouts follow Sandium/RosaServer where the client's machine code agrees.
 */
#ifndef SR_ENGINE_WORLD_H
#define SR_ENGINE_WORLD_H

#include <stdint.h>
#include "memory.h"

/* ---- humans ---------------------------------------------------------------- */

#include "human.h"   /* WorldHuman, world_humans */

/* Copies each active human's bones from their bodies (pulling the upper
   body back from moves through the level), builds the box around the bones'
   capsules and its voxels, and breaks loose the block parts in them.
   0x1400B95E0 */
void world_update_human_bounds(void);

/* Makes loose, simulated items of the block parts in the voxels from
   voxel_min to voxel_max (x, y, z, inclusive). Part of 0x1401069C0 and
   0x1400B95E0. */
void world_break_blocks(const int32_t voxel_min[3], const int32_t voxel_max[3]);

/* ---- the level's blocks ------------------------------------------------------------ */

/* Four layers of voxels (layer 0 is the world), each 1,052,016 bytes apart
   from 0x15ADA9274: the size in 64-voxel chunks along x, y and z, a table of
   chunk slots (int per chunk, -1: empty; x fastest, then z, then y) and per
   chunk slot 513 cells of 8x8x8 voxels (x fastest, then z, then y), each the
   index of a block record or -1. A block record (27,720 bytes from
   0x15415D1F4) holds at +0x5008 the block id of each of its 512 voxels (bits
   0-9 the block type) and at +0x5808 a mask of the parts that are gone. */
#define WORLD_LEVEL_LAYER_STRIDE 0x100D70ULL
#define world_level_chunks(layer, axis) \
    SR_GLOBAL(int32_t, 0x15ADA9274ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + 4ULL * (uint64_t)(axis))
#define world_level_chunk_table_address(layer) \
    (&SR_GLOBAL(uint8_t, 0x15ADA9288ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer)))
#define world_level_cells(layer, slot) \
    (&SR_GLOBAL(int32_t, 0x15ADA97B0ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + 0x804ULL * (uint64_t)(int64_t)(slot)))
#define world_block_record_unknown_8(record) (&SR_GLOBAL(uint32_t, 0x154161248ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))
#define world_block_record_layout(record) (&SR_GLOBAL(uint32_t, 0x154164248ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))
#define world_block_record_ids(record) (&SR_GLOBAL(uint32_t, 0x154166248ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))
#define world_block_record_gone(record) (&SR_GLOBAL(uint32_t, 0x154166A48ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))

/* The block id at voxel x, y, z of a layer (0 outside the level or in an
   empty chunk or cell). 0x140016870 */
uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The gone-parts mask of the block at voxel x, y, z (0 where
   world_block_at() gives 0). 0x1400169B0 */
uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The entry of the block record's first table (0x2000 bytes before the ids
   world_block_at() reads) at voxel x, y, z, 0 where world_block_at() gives
   0. An entry whose top bits are 110 marks a voxel covered by a larger
   block: its low byte is the x distance back to the voxel holding it, the
   next byte the z distance, the third the y distance. 0x140016450 */
uint32_t world_block_layout_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The entry of the block record's table at +8 (0x3000 bytes before the
   layout table) at voxel x, y, z, 0 where world_block_at() gives 0.
   0x1400129D0 */
uint32_t world_block_unknown_8_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* world_block_layout_at(), with a covered voxel followed back to the voxel
   holding its block (once). 0x140016590 */
uint32_t world_block_resolved_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* ---- changing voxels (world_block_edit.c) ---------------------------------- */

/* Takes the first free of a layer's 512 chunk slots for chunk cx, cy, cz,
   fills its cells with -1 and returns it (-1: out of range or none free).
   0x140010020 */
int world_chunk_allocate(uint32_t layer, int32_t cx, int32_t cy, int32_t cz);

/* Takes the first free of the 4096 block records for the 8-voxel cell
   x8, y8, z8 of chunk slot `slot`: enters it in the slot, clears its
   tables (+8, +0x808, +0x3008, +0x4808, +0x5008), counts it in the layer
   and marks its four meshes absent. -1: out of range or none free.
   0x140012490 */
int world_block_record_allocate(int layer, int slot, int32_t x8, int32_t y8, int32_t z8);

/* Marks the record holding voxel x, y, z as changed (its meshes are rebuilt).
   0x1400173C0 */
void world_block_mark_changed(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* Writes the voxel's +8 shape entry, allocating its chunk slot and record
   when needed, and marks the record changed. 0x140017AC0 */
void world_block_set_unknown_8(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);

/* The faces of block shape `shape` on side `side` (0..5; the opposite side
   is 5 - side) that shape `neighbour` covers: `mask` & the shape's mask for
   that side, plus bit q for each outer quad q on that side that meets an
   outer quad of the neighbour on the opposite side corner for corner in the
   two axes along the side (NaN coordinates match). world_block_faces.c,
   0x14001B390 */
uint32_t world_block_covered_faces(int shape, int side, uint32_t mask, int neighbour);

/* Emits the faces of a cube block chosen by `faces` (bit f: face f, the
   cube faces of collision_segment_cell()) as 1 x 1 surface patches with
   corners origin + scale * corner, flags from the block's turn and the
   face's texture (textures 1-4 and 9-12 turned with the block).
   world_block_patches.c, 0x140019940 */
void world_block_cube_patches(int turn, const float origin[3], const float scale[3], uint32_t faces,
                              const int32_t textures[6]);

/* Turns the scratch shape being built a quarter turn about y: sets block
   shape `shape`'s size to `size` with x and z swapped, moves the points
   (x, z) -> (size z - z, x) and their two vectors (x, z) -> (-z, x), and
   turns the quads' texture and side flags with them.
   world_shape_build.c, 0x14004D170 */
void world_shape_build_turn(int shape, const int32_t size[3]);

/* Adds a thin slab to the scratch shape as one 1 x 1 patch moved by
   `offset`: kind 0 a floor 1/16 high, 5 a ceiling at 7/8, otherwise a wall
   1/16 in on side kind - 1; marks the new quad's +0x15133B768 entry 128.
   world_shape_build.c, 0x140019140 */
void world_shape_build_slab(int kind, const float offset[3]);

/* Copies the scratch shape into block shape `shape`: moves the outer quads
   (corners all on one side of the unit cube) to the front with a mask per
   side of the quads not on it, sets each quad's texture coordinates from the
   side it faces, and replaces the shape's arrays with fresh copies of the
   points, vectors, coordinates, quads (flags cut to the texture), the
   0x15138B768 entries and the first 12 words of each box.
   world_shape_build.c, 0x140017CA0 */
void world_shape_build_finish(int shape);

/* Adds two walls to the scratch shape as patches, turned `turn` quarter
   turns: one across x from 0 to x at depth z, one across z from 0 to z at x.
   world_shape_build.c, 0x14001A050 */
void world_shape_build_corner(int turn, float x, float z);

/* world_shape_build_slab() with the floor's or ceiling's edges pulled in by
   1/16 for each `trim` bit 0x02, 0x04, 0x08, 0x10 (walls are not trimmed).
   world_shape_build.c, 0x1400194B0 */
void world_shape_build_slab_trimmed(int kind, const float offset[3], uint32_t trim);

/* Removes quad q from the scratch shape, the last quad moving into its
   place. world_shape_build.c, 0x140184AB0 */
void world_shape_build_remove_quad(int q);

/* Adds a box to the scratch shape for each rectangle of list (a, b) at
   0x1ABC89C00: its four corners at depth 1/64 (1/256 for kind 1) on the
   patch grid, turned `turn` quarter turns (world_patch_grid_turn()).
   world_shape_build.c, 0x14001A590 */
void world_shape_build_boxes(int turn, int a, int b);

/* Adds the wall of rectangle list (a, b) to the scratch shape as cube
   patches 1/16 thick around its opening, then its framed pieces, turned
   `turn` quarter turns. world_shape_build.c, 0x14001A1C0 */
void world_shape_build_wall(int turn, int a, int b);

/* Builds block shape `code` (24 bits: four side kinds of 4 bits, 0x10000
   floor, 0x20000 ceiling, bits 18-21 the wall style) from slabs, walls,
   corner posts and boxes. Made shapes are kept per code and returned again;
   a new one gets the next free shape number (0 when there are 65,536).
   With `preview` the result stays in the scratch shape (shape 0xFFFF's
   size and side mask are set) instead. world_shape_build.c, 0x14001A990 */
int world_shape_build_procedural(int preview, uint32_t code);

/* Bezier curve of order 1-3 through p0..p3 at t (order 1 uses p0 and p3,
   order 2 p0, p1 and p3), and its slope along t. For other orders the
   original returns stack garbage; 0 here. world_patch_mesh.c, 0x140187180
   and 0x1401872F0 */
float patch_bezier(int order, float t, float p0, float p1, float p2, float p3);
float patch_bezier_slope(int order, float t, float p0, float p1, float p2, float p3);

/* Turns the patch control grid (0x14500A5C0, 4 x 4 points) `turns` quarter
   turns about y, (x, z) -> (1 - z, x), and returns `side_code` (a cube side
   in bits 16-18) turned with it. world_patch_mesh.c, 0x14001B5C0 */
uint32_t world_patch_grid_turn(int turns, uint32_t side_code);

/* Tessellates a Bezier patch (4 x 4 control points, rows 12 floats apart;
   4 x 4 texture coordinates) into the scratch shape: (steps_u + 1) x
   (steps_v + 1) points with normals and tangents, then steps_u x steps_v
   quads with `flags`. world_patch_mesh.c, 0x140001F20 */
void world_patch_tessellate(const float *points, const float *coordinates, int steps_u, int order_u, int steps_v,
                            int order_v, uint32_t flags);

/* Adds the faces of a box chosen by `faces` (bit f: face f of
   world_block_cube_patches()) to the scratch shape as flat quads, four
   points each with the face's normal, flagged `flags` and the cube side the
   normal faces most. world_block_patches.c, 0x140019C10 */
void world_block_cube_quads(const float corners[8][3], uint32_t flags, uint32_t faces);

/* ---- more voxel entries (world_blocks.c, world_block_edit.c) --------------- */

/* world_block_unknown_8_at(), with a covered voxel followed back to the
   voxel covering it. 0x140012B10 */
uint32_t world_block_unknown_8_resolved_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
/* Face word `index` of the voxel (record + 0x1008, 8 per voxel), word 7, and
   byte `index` of record + 0x3808 (8 per voxel); 0xFFFFFFFF where the voxel
   has no record. 0x140012DE0, 0x140012CA0, 0x140016720 */
uint32_t world_block_face_word_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t index);
uint32_t world_block_last_face_word_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
uint32_t world_block_unknown_3808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t index);

/* Writes the voxel's layout entry, allocating its chunk slot and record,
   releases the mesh of its band and marks it changed. 0x140016C80 */
void world_block_set_layout(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);
/* Writes the layout entry of a voxel that has a record, nothing else.
   0x140016E30 */
void world_block_write_layout(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);
/* Writes the gone-parts mask (+0x5808) of a voxel that has a record and
   sets the record's +0x6028 flag. 0x140017110 */
void world_block_write_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);
/* Writes the voxel's block id (+0x5008), allocating as needed, clears its
   gone-parts mask and releases the mesh of its band. 0x140016F60 */
void world_block_set_id(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);
/* Clears the first word of the entries of the voxel's band mesh part list
   that name this voxel and `part`. 0x140016AF0 */
void world_block_mesh_clear_part(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t part);
/* Empties the voxel's +8 and layout entries (a cube uncovers the faces of
   the cubes next to it) and marks it changed. 0x140012670 */
void world_block_clear(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
/* Like world_block_set_layout(); a shape entry (0x80000000) also stores
   the low bytes of `parts` at +0x3808 and points the rest of the shape's
   footprint back to this voxel. 0x140016130 */
void world_block_place_layout(int layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value, const uint16_t parts[8]);
/* Rebuilds a block record's meshes (0x14000C4C0, still recompiled) and
   copies its gone-parts masks into their model lists. 0x140017910 */
void world_block_record_refresh(int record);
/* Sets the +0x6C34 flag and the band's +0x6C38 flag of the record holding
   voxel x, y, z (the layer is not range checked). 0x14011C510 */
void world_block_mark_unknown_6c34(int layer, int32_t x, int32_t y, int32_t z);

/* Lines: a count and up to 256 lines. */
typedef struct {
    float from[3];
    float to[3];
} WorldLine;
typedef struct {
    int32_t count;
    WorldLine lines[256];
} WorldLineList;

/* Adds the edges of block shape `shape`'s quads, scaled by `scale` and placed
   at voxel `voxel` of a layer, to `list` (as long as it has room).
   world_block_outline.c, 0x140018CA0 */
void world_block_shape_outline(WorldLineList *list, int layer, const int32_t voxel[3], uint16_t shape, float scale);

/* Adds the edges of a cube entry (faces shown when both bit f and bit f + 6
   are set; an edge needs both its faces) like world_block_shape_outline().
   world_block_outline.c, 0x1400174D0 */
void world_block_cube_outline(WorldLineList *list, int layer, const int32_t voxel[3], uint32_t cube, float scale);

/* Outlines the +8 and layout entries (cubes and shapes) of every voxel of a
   layer in the world box box_min..box_max. world_block_outline.c,
   0x14000C180 */
void world_block_outline_box(WorldLineList *list, int layer, const float box_min[3], const float box_max[3]);

/* Sets up level layer `layer` (0-3) at `origin` with the given size in
   chunks and voxel scale: new chunk tables with every chunk empty, all its
   chunk slots and block records free, and every block mesh free.
   world_level.c, 0x14004DB20 */
void world_level_layer_init(int layer, const float origin[3], int32_t chunks_x, int32_t chunks_y, int32_t chunks_z,
                            float scale);

/* The block record holding voxel x, y, z, -1: none. 0x140013020 */
int world_block_record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* Writes the voxel's +0x808 entry when it has a record; returns the value,
   or 0xFFFFFFFF. 0x140017C40 */
uint32_t world_block_set_unknown_808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);

/* Places block `value` in voxel x, y, z (nothing for 0), allocating its
   chunk slot and record: a cube (top bits 010: turn bits 24-25 kept, all
   faces set, then a face bit per non-negative face word; faces against
   neighbouring cubes, and the floor at y 0, are cleared on both sides) or a
   shape (100: the rest of its voxels get entries pointing back to this one,
   and the covered-face masks of this voxel and of neighbouring shapes are
   updated). faces: the voxel's eight face words. Marks the records changed.
   0x14000F830 */
void world_block_place(int layer, int32_t x, uint32_t y, int32_t z, uint32_t value, const uint16_t faces[8]);

/* Frees a record's mesh for height band `band` (the GPU buffers too).
   0x140012940 */
void world_block_release_mesh(int record, int band);

/* Writes the voxel's model entry (if it has a record) and frees the mesh of
   its height band ((y >> 1) & 3). 0x140017260 */
void world_block_set_model(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t value);

/* ---- vehicle lifetimes ------------------------------------------------------- */

/* Fields of a vehicle (PhysicsVehicle, 0x15F2D9200, 0x5168 bytes apart) the
   expiry stage uses. */
#define world_vehicle_lifetime(v) SR_GLOBAL(int32_t, 0x15F2D921CULL + 0x5168ULL * (uint64_t)(int64_t)(v))      /* ticks left; from 0xFFFF never expires */
#define world_vehicle_point_count(v) SR_GLOBAL(int32_t, 0x15F2D92ECULL + 0x5168ULL * (uint64_t)(int64_t)(v))   /* PhysicsPoints of the vehicle */
#define world_vehicle_points(v) (&SR_GLOBAL(int32_t, 0x15F2D92F0ULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
#define world_vehicle_wheel_count(v) SR_GLOBAL(int32_t, 0x15F2DCB40ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define world_vehicle_wheel_body(v, w)     SR_GLOBAL(int32_t, 0x15F2DCB44ULL + 0x5168ULL * (uint64_t)(int64_t)(v) + 172ULL * (uint64_t)(int64_t)(w))

/* A vehicle's wheel, 172 bytes from vehicle + 0x3944 (count at + 0x3940). */
typedef struct VehicleWheel {
    int32_t body;                        /* PhysicsBody of the wheel */
    float half_width;                    /* from the wheel body's centre to each end of its axle */
    int32_t unknown_8;                   /* from the type (RosaServer has isPopped here) */
    int32_t unknown_c;                   /* from the type */
    int32_t health;                      /* 8 in a new wheel (RosaServer: health) */
    int32_t unknown_14[4];               /* from the type */
    float mount[3];                      /* where the wheel hangs, in the car body's axes */
    float unknown_30;                    /* the drive divides by the engine's 8 plus this (the wheel's inertia?) */
    float radius;
    float unknown_38;                    /* without wheel bodies: scales unknown_3c into spin, and the drive's push */
    float unknown_3c;                    /* cleared before the wheels are solved */
    float spin;                          /* angular speed about the axle */
    float turned;                        /* spin summed up: the angle the wheel is drawn at */
    float steer;                         /* wheels 0 and 1: radians the axle turns about the car's up axis */
    float point[3];                      /* the point the wheel ray test 0x1400DF380 takes */
    float unknown_58[3];                 /* unknown_64 as it was before this tick's solve */
    float unknown_64[3];
    float visual_height;                 /* how far the wheel body is from its mount along the car's up axis, -1..1 */
    float extension;                     /* added to mount[1] */
    float spring;                        /* stiffness of the hold on the mount point */
    float damping;                       /* of the relative velocity there */
    float grip;                          /* scales a second push along the car's up axis */
    float skid;                          /* the wheel body's sliding against the ground, 0..1 */
    uint8_t unknown_88[0xAC - 0x88];
} VehicleWheel;

_Static_assert(sizeof(VehicleWheel) == 0xAC, "VehicleWheel size");
_Static_assert(__builtin_offsetof(VehicleWheel, extension) == 0x74, "VehicleWheel layout");

/* A vehicle's engine and brakes, from vehicle + 0x3894. */
typedef struct VehicleDrive {
    int32_t unknown_3894;                /* cleared every tick */
    float engine_speed;                  /* x 3600 x a type constant: where on the torque curve (1: its end) */
    float throttle;                      /* 0..1.125 */
    float unknown_38a0;                  /* torque scale */
    float unknown_38a4;                  /* the drive's state, pulled toward the engine and the wheels */
    float engine_inertia;                /* set to 8 every tick */
    float unknown_38ac;                  /* set to 64 every tick */
    float unknown_38b0;
    float unknown_38b4;
    float unknown_38b8;
    int32_t gear;                        /* -1 reverse, 0 neutral, 1 to 4 */
    int32_t previous_gear;               /* gear at the end of the tick before */
    uint8_t unknown_38c4[0x38C8 - 0x38C4];
    union {
        float unknown_38c8;              /* 0 (or not a number): the engine is not coupled to the drive */
        float gear_ratio;                /* engine turns per turn of the drive in this gear; 0 in neutral */
    };
    float inverse_gear_ratio;            /* 1 / gear_ratio, 0 in neutral */
    union {
        float unknown_38d0;
        float clutch;                    /* 0 (apart) to 1 (closed): how much of the engine's pull reaches the drive */
    };
    float brake;
    uint8_t unknown_38d8[0x38E0 - 0x38D8];
    int32_t driven_count;
    int32_t driven[(0x3930 - 0x38E4) / 4];   /* wheel indices */
    int32_t engine_rpm;                  /* engine_speed in turns per minute, 0 to 8191 (RosaServer: engineRPM) */
    int32_t automatic;                   /* the gear stick is at "automatic" this tick */
    int32_t shift_delay;                 /* ticks until the automatic gearbox may change gear again */
    float steer;                         /* the steering control as the wheels were set from it */
} VehicleDrive;

_Static_assert(sizeof(VehicleDrive) == 0x3940 - 0x3894, "VehicleDrive size");
_Static_assert(__builtin_offsetof(VehicleDrive, brake) == 0x38D4 - 0x3894, "VehicleDrive layout");

#define world_vehicle_drive(v) (&SR_GLOBAL(VehicleDrive, 0x15F2DCA94ULL + 0x5168ULL * (uint64_t)(int64_t)(v)))

/* Engines, brakes and the drive of every vehicle (except type 12) for one
   tick. With physics_points_no_gravity set the wheels are bodies (their
   spin is read from and torque given to the wheel bodies); otherwise only
   each wheel's spin value is driven. 0x140107ED0 */
void world_drive_vehicles(void);

#define world_vehicle_wheels(v) (&SR_GLOBAL(VehicleWheel, 0x15F2DCB44ULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
/* Cleared before the wheels are solved. 0x3894 */
#define world_vehicle_unknown_3894(v) SR_GLOBAL(int32_t, 0x15F2DCA94ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define WORLD_VEHICLE_TYPE_12 12             /* has no wheel joints */

/* Every wheel of every vehicle (except type 12) for one solver pass: holds
   the wheel body at its mount point on the car body with a spring and
   damper along the car's up axis, pushes again by its grip along that axis,
   and keeps the wheel's own x axis on the axle (the car's x axis, turned by
   steer for wheels 0 and 1). Adds to the bodies' velocity_change and
   angular_velocity_change. 0x14010D610 */
void world_solve_vehicle_wheels(void);

/* 1,024 records of 1,532 bytes from 0x15FD16260 (count after them) whose
   field at +8 names a vehicle. Meaning not settled. */
#define world_unknown_15fd16260_count SR_GLOBAL(int32_t, 0x15FE95260ULL)
#define world_unknown_15fd16260_vehicle(i) SR_GLOBAL(int32_t, 0x15FD16268ULL + 0x5FCULL * (uint64_t)(int64_t)(i))

/* An item of type 27 holds the vehicle it belongs to at +0x280. */
#define WORLD_ITEM_TYPE_27 27
#define world_item_vehicle(i) SR_GLOBAL(int32_t, 0x182BBB400ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* Events the game records (as RosaServer's Event), 128 bytes from
   0x1873DE460; the count, 16 bits, at 0x189C1DC64. */
typedef struct WorldEvent {
    int32_t type;
    int32_t tick;
    float vector_a[3];
    float vector_b[3];
    int32_t a, b, c;
    uint8_t unknown_2c[0x80 - 0x2C];
} WorldEvent;

#define world_events (&SR_GLOBAL(WorldEvent, 0x1873DE460ULL))
#define world_event_count SR_GLOBAL(int32_t, 0x189C1DC64ULL)
#define WORLD_EVENT_VEHICLE_REMOVED 4

/* Counts down each vehicle's lifetime and removes the vehicles whose time
   is up: frees their points, wheel and hull bodies, takes humans out, drops
   other references and, when connected, records event 4 with the vehicle's
   position. 0x14010BE50 */
void world_expire_vehicles(void);

/* Removes one vehicle at once, as world_expire_vehicles does when its time
   is up; nothing for a number that is not a vehicle's. 0x14007FE00 */
void world_remove_vehicle(int vehicle);

/* A vehicle's turning, from its points: for each of its axes the sum over
   the points of (axis x (point - origin)) . the point's velocity, written
   to the vehicle's angular velocity. 0x1400A48D0 */
void world_vehicle_spin_from_points(int vehicle, const float origin[3]);

/* ---- item types ---------------------------------------------------------- */

/* 0x182A7E180, 5,072 bytes each. */
typedef struct WorldItemType {
    uint8_t unknown_0[0xC];
    int32_t occupies_space;              /* items of this type are entered into the voxel grid */
    uint8_t unknown_10[0xF08 - 0x10];
    int32_t bound_point_count;
    uint8_t unknown_f0c[4];
    const float *bound_points;           /* x, y, z each, in the item's own axes */
    uint8_t unknown_f18[0x13D0 - 0xF18];
} WorldItemType;

#define world_item_types (&SR_GLOBAL(WorldItemType, 0x182A7E180ULL))

/* ---- items ----------------------------------------------------------------- */

#define WORLD_ITEM_CAPACITY 1024

/* 0x182BBB180, 7,040 bytes each. */
typedef struct WorldItem {
    int32_t active;
    int32_t physics_simulated;           /* RosaServer: physicsSim; the item follows its body */
    union {
        int32_t unknown_8;               /* set with physics_simulated when a vehicle breaks the item off a block */
        int32_t physics_settled;         /* RosaServer: physicsSettled; cleared when a vehicle touches the item */
    };
    union {
        uint8_t unknown_c[0x14 - 0xC];
        int32_t physics_settled_timer;   /* RosaServer: physicsSettledTimer */
    };
    int32_t type;                        /* WorldItemType index */
    uint8_t unknown_18[0x1C - 0x18];
    int32_t lifetime;                    /* ticks left; from 0xFFFF never expires */
    uint8_t unknown_20[0x24 - 0x20];
    int32_t holder;                      /* the human holding the item, -1: none */
    int32_t parent;                      /* the item this one is attached to, -1: none */
    int32_t slot;                        /* the holder's hand (0, 1) or slot on the body (2 and up) */
    uint8_t unknown_30[0x34 - 0x30];
    int32_t child_count;                 /* items attached to this one */
    int32_t children[(0x58 - 0x38) / 4];
    int32_t body;                        /* PhysicsBody index */
    float position[3];
    float previous_position[3];
    uint8_t unknown_74[0x80 - 0x74];
    float velocity[3];
    uint8_t unknown_8c[0xA4 - 0x8C];
    float rotation[9];
    float angular_velocity[3];
    uint8_t unknown_d4[0x104 - 0xD4];
    float bounds_min[3];                 /* box around the type's bound points, in world axes */
    float bounds_max[3];
    int32_t voxel_min[3];                /* x, y, z of the voxels the item occupies, inclusive */
    int32_t voxel_max[3];
    uint8_t unknown_134[0x138 - 0x134];
    int32_t unknown_138;                 /* with unknown_318: 0x1400CDFF0 runs on removal */
    uint8_t unknown_13c[0x170 - 0x13C];
    uint32_t link_mask[2];               /* bit n: links[n] is in use */
    int32_t links[64];                   /* entries of the table at 0x1857BD740 */
    uint8_t unknown_278[0x318 - 0x278];
    int32_t unknown_318;
    uint8_t unknown_31c[0x1B80 - 0x31C];
} WorldItem;

_Static_assert(__builtin_offsetof(WorldItem, children) == 0x38, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, body) == 0x58, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, links) == 0x178, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, unknown_318) == 0x318, "WorldItem layout");
_Static_assert(sizeof(WorldItem) == 0x1B80, "WorldItem size");

/* Per item, counted up when an item is removed or detached while connected
   (a change counter for the network?). 0x18329B1E0 */
#define world_item_change_count(i) SR_GLOBAL(int32_t, 0x18329B1E0ULL + 4ULL * (uint64_t)(int64_t)(i))
/* Items of type 29 alive. 0x183F7AEE8 */
#define world_item_29_count SR_GLOBAL(int32_t, 0x183F7AEE8ULL)
#define WORLD_ITEM_TYPE_29 29
/* Records of 156 bytes whose first field is cleared when an item that links
   to them is removed. Meaning not settled. 0x1857BD740 */
#define world_unknown_1857bd740(i) SR_GLOBAL(int32_t, 0x1857BD740ULL + 156ULL * (uint64_t)(int64_t)(i))

/* Removes item: runs the clean-ups still in recompiled code (0x1400CDFF0,
   0x1400CA7C0, 0x1400CA9B0), detaches its children, clears its links, its
   vehicle (type 27) and body, and marks it inactive. Indices above 1023 do
   nothing. 0x14007F970 */
void world_remove_item(int item);

/* Takes item out of slot `slot` of human (hands 0 and 1; from slot 2 on it
   is first put at the chest, a quarter unit back along the chest's second
   row, body and all), sets its previous position to the chest and, if the
   slot lists it, removes it there (the last entry moves into its place),
   clears its holder and counts the change when connected. Nothing happens
   when item or human is -1. 0x1400CA7C0 */
void world_take_item(int item, int human, int slot);

/* Detaches item from parent: takes it out of the parent's children (the
   last child moves into its place), clears its parent and counts the change
   for both when connected. 0x1400CA9B0 */
void world_detach_item(int item, int parent);

#define world_items (&SR_GLOBAL(WorldItem, 0x182BBB180ULL))

/* Part of a tick's movement kept by an item that passed through the level,
   before the factor 0.975. Meaning not settled. 0x151A84898 */
#define world_unknown_151a84898 SR_GLOBAL(float, 0x151A84898ULL)

/* Copies each simulated item's position, velocity and rotation from its
   body, pulls back items that moved through the level, and computes the
   box and voxels each occupies. 0x1400C9D20 */
void world_update_item_bounds(void);

/* ---- vehicles ---------------------------------------------------------------- */

/* The vehicles themselves are PhysicsVehicle in physics.h. Per vehicle type:
   the point of the body that is the vehicle's origin (0x192EB2BB4, 99,776
   bytes apart), and the points its box is drawn around (count at
   0x190297C5C, x, y, z each from 0x190297C60, 180,288 bytes apart). */
#define world_vehicle_type_origin(type) \
    (&SR_GLOBAL(float, 0x192EB2BB4ULL + 0x185C0ULL * (uint64_t)(int64_t)(type)))
#define world_vehicle_type_bound_point_count(type) \
    SR_GLOBAL(int32_t, 0x190297C5CULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define world_vehicle_type_bound_points(type) \
    (&SR_GLOBAL(float, 0x190297C60ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))

/* Number of parts of a block that can break off as items: 0x1812C20CC,
   3,792 bytes apart. */
#define world_block_part_count(block) SR_GLOBAL(int32_t, 0x1812C20CCULL + 0xED0ULL * (uint64_t)(block))

/* Moves each vehicle to its body, computes the box and voxels it occupies,
   and breaks the block parts in those voxels off as items. 0x1401069C0 */
void world_update_vehicle_bounds(void);

/* ---- spatial grid ----------------------------------------------------------- */

/* Objects are listed by position for collision queries in a three-level
   grid. Each of four layers divides space into 64-unit cells holding a
   block index (-1: empty); a block divides its cell into 8x8x8 8-unit cells
   holding a leaf index; a leaf holds the objects of each unit in its 8x8x8
   units, at most 32 per unit. Blocks and leaves are allocated per tick. */
#define WORLD_GRID_LAYERS 4
#define WORLD_GRID_BLOCK_CAPACITY 512
#define WORLD_GRID_LEAF_CAPACITY 2048

/* Cell counts of a layer along x, y and z: 0x15ADA9274, 0x100D70 bytes apart. */
#define world_grid_size_x(layer) SR_GLOBAL(int32_t, 0x15ADA9274ULL + 0x100D70ULL * (uint64_t)(layer))
#define world_grid_size_y(layer) SR_GLOBAL(int32_t, 0x15ADA9278ULL + 0x100D70ULL * (uint64_t)(layer))
#define world_grid_size_z(layer) SR_GLOBAL(int32_t, 0x15ADA927CULL + 0x100D70ULL * (uint64_t)(layer))
/* Each layer's cells, x fastest, then z, then y. */
#define world_grid_cells(layer)  SR_GLOBAL(int32_t *, 0x1A4BF0900ULL + 8ULL * (uint64_t)(layer))

#define world_grid_block_count   SR_GLOBAL(int32_t, 0x1A4BF0920ULL)
/* Block b holds 512 leaf indices; -1: empty. */
#define world_grid_blocks        (&SR_GLOBAL(int32_t, 0x1A4BF0924ULL))
#define world_grid_leaf_count    SR_GLOBAL(int32_t, 0x1A4CF0924ULL)

typedef struct WorldGridUnit {
    int32_t count;
    int32_t objects[32];                 /* object ids; items are 0x8000 + index */
} WorldGridUnit;

#define world_grid_leaves        SR_GLOBAL(WorldGridUnit *, 0x1A4CF0928ULL)   /* 512 units per leaf */

/* Lists object at unit (x, y, z) of a layer. Coordinates outside the
   layer, and objects beyond a unit's 32 or the 2,048 leaves, are dropped.
   0x140037DE0 */
void world_grid_insert(int layer, int32_t x, int32_t y, int32_t z, uint16_t object);

/* Gives chunk (cx, cy, cz) of a layer a new grid block, all its cells empty,
   and returns it (no checks). 0x140038130 */
int32_t world_grid_add_block(int layer, int32_t cx, int32_t cy, int32_t cz);

/* Empties layer 0's grid and enters every active item whose type occupies
   space into each voxel of its voxel box as 0x8000 + item. 0x140037FE0 */
void world_grid_rebuild(void);

_Static_assert(sizeof(WorldGridUnit) == 132, "WorldGridUnit size");
_Static_assert(sizeof(WorldItemType) == 0x13D0, "WorldItemType size");
_Static_assert(sizeof(WorldItem) == 0x1B80, "WorldItem size");
_Static_assert(__builtin_offsetof(WorldItem, voxel_max) == 0x128, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, body) == 0x58, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, rotation) == 0xA4, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItem, bounds_min) == 0x104, "WorldItem layout");
_Static_assert(__builtin_offsetof(WorldItemType, bound_points) == 0xF10, "WorldItemType layout");

/* 0x140038230 output: the count, then a cleared word and a masked item id
   for each result. Duplicate ids are suppressed; at most 256. */
typedef struct WorldGridItems {
    int32_t count;
    struct { int32_t unknown_0, item; } entries[256];
} WorldGridItems;

void world_grid_query_items(WorldGridItems *out, const int32_t minimum[3], const int32_t maximum[3]);
_Static_assert(sizeof(WorldGridItems) == 2052, "WorldGridItems size");

#endif
