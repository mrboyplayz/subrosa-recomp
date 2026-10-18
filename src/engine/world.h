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

/* Four layers of voxels (layer 0 is the world). Each is cut into chunks of
   64 x 64 x 64 voxels, each chunk into 8 x 8 x 8 cells of 8 x 8 x 8 voxels.
   A chunk that holds anything has a slot; a cell that holds anything has a
   block record with a word per voxel. Within a chunk slot and within a
   record x runs fastest, then z, then y; the chunk table runs the same way. */

#define WORLD_LEVEL_LAYER_COUNT 4
#define WORLD_CHUNK_SLOT_CAPACITY 512        /* per layer */
#define WORLD_BLOCK_RECORD_CAPACITY 4096     /* shared by the layers */

/* Index of a voxel within its record (or of a cell within its chunk) from
   the low three bits of each coordinate. */
#define WORLD_CELL_INDEX(x, y, z) (((x) & 7) + 8 * (((z) & 7) + 8 * ((y) & 7)))

/* A value of WorldBlockRecord.unknown_8 or unknown_3008 tagged so (top three
   bits 110) stands for the voxel it names: x less bits 0-7, z less bits
   8-15, y less bits 16-23; the getters with "_origin" follow it once. */
#define WORLD_BLOCK_LINK_MASK 0xE0000000u
#define WORLD_BLOCK_LINK      0xC0000000u

typedef struct WorldChunkSlot {
    int32_t used;
    int32_t cells[512];                  /* WorldBlockRecord indices, -1: empty */
} WorldChunkSlot;

/* 0x15ADA9240, 1,052,016 bytes each. */
typedef struct WorldLevelLayer {
    uint8_t unknown_0[0x34];
    int32_t chunks[3];                   /* size in chunks along x, y and z */
    uint8_t unknown_40[0x48 - 0x40];
    int32_t *chunk_table;                /* a slot per chunk, -1: empty */
    uint8_t unknown_50[0x56C - 0x50];
    WorldChunkSlot slots[WORLD_CHUNK_SLOT_CAPACITY];
    int32_t record_count;                /* records made in this layer (counted up only) */
} WorldLevelLayer;

/* 0x154161240, 27,720 bytes each: the voxels of one cell. Several arrays'
   meanings are not settled; the comments say what is known. */
typedef struct WorldBlockRecord {
    int32_t active;
    int32_t layer;
    uint32_t unknown_8[512];             /* cleared on creation; may hold a WORLD_BLOCK_LINK */
    uint32_t unknown_808[512];           /* cleared on creation */
    uint16_t unknown_1008[512][8];       /* not cleared on creation */
    uint32_t unknown_3008[512];          /* values tagged 0x80000000 travel in event 16; may hold a WORLD_BLOCK_LINK */
    uint8_t unknown_3808[512][8];        /* not cleared on creation */
    uint32_t unknown_4808[512];          /* shapes the record's meshes */
    uint32_t ids[512];                   /* block id (bits 0-9 the block type) */
    uint32_t gone[512];                  /* mask of the parts that are gone; not cleared on creation */
    int32_t meshes[4];                   /* mesh of each quarter (voxels with the same bits 1-2 of y), -1: none */
    int32_t cell[3];                     /* x, y, z of the cell, in cells */
    int32_t unknown_6024;                /* a flag (meaning not settled) */
    int32_t gone_changed;                /* the gone masks changed; 0x140017910 copies them into the meshes */
    int32_t unknown_602c;
    int32_t unknown_6030;                /* cleared on creation */
    uint8_t unknown_6034[0x6C48 - 0x6034];
} WorldBlockRecord;

_Static_assert(sizeof(WorldLevelLayer) == 0x100D70, "WorldLevelLayer size");
_Static_assert(__builtin_offsetof(WorldLevelLayer, slots) == 0x56C, "WorldLevelLayer layout");
_Static_assert(sizeof(WorldBlockRecord) == 0x6C48, "WorldBlockRecord size");
_Static_assert(__builtin_offsetof(WorldBlockRecord, ids) == 0x5008, "WorldBlockRecord layout");
_Static_assert(__builtin_offsetof(WorldBlockRecord, meshes) == 0x6008, "WorldBlockRecord layout");
_Static_assert(__builtin_offsetof(WorldBlockRecord, gone_changed) == 0x6028, "WorldBlockRecord layout");

#define world_level_layers (&SR_GLOBAL(WorldLevelLayer, 0x15ADA9240ULL))
#define world_block_records (&SR_GLOBAL(WorldBlockRecord, 0x154161240ULL))

/* The block id at voxel x, y, z of a layer (0 outside the level or in an
   empty chunk or cell). 0x140016870 */
uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The gone-parts mask of the block at voxel x, y, z (0 where
   world_block_at() gives 0). 0x1400169B0 */
uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The getters and setters below read 0 (or -1 where noted) and change
   nothing outside the level or in an empty chunk or cell. */

/* The block record of the cell holding voxel x, y, z, or -1. 0x140013020 */
int32_t world_block_record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The unknown_8 word of voxel x, y, z: as stored (0x1400129D0), and with a
   WORLD_BLOCK_LINK followed (0x140012B10). */
uint32_t world_block_unknown_8_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
uint32_t world_block_unknown_8_origin(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* The same for unknown_3008: 0x140016450, 0x140016590. */
uint32_t world_block_unknown_3008_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
uint32_t world_block_unknown_3008_origin(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* Entry `entry` (0-7, not checked) of voxel x, y, z's unknown_1008
   (0x140012DE0) and unknown_3808 (0x140016720); -1 where there is none.
   world_block_unknown_1008_last is entry 7 (0x140012CA0). */
uint32_t world_block_unknown_1008_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int entry);
uint32_t world_block_unknown_1008_last(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
uint32_t world_block_unknown_3808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int entry);

/* Sets the gone-parts mask of the block at voxel x, y, z and marks the
   record's masks changed. 0x140017110 */
void world_set_block_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t gone);

/* Sets the unknown_3008 word of voxel x, y, z. 0x140016E30 */
void world_set_block_unknown_3008(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);

/* Sets the unknown_4808 word of voxel x, y, z and frees the mesh of its
   quarter of the record, if it has one (0x140012940). 0x140017260 */
void world_set_block_unknown_4808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);

/* Sets the unknown_6024 flag of the record holding voxel x, y, z. 0x1400173C0 */
void world_mark_block_record(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

/* Gives chunk cx, cy, cz of a layer the first unused slot, all its cells
   empty. Returns the slot, or -1 outside the layer or when all 512 are
   used. 0x140010020 */
int32_t world_create_chunk_slot(uint32_t layer, int32_t cx, int32_t cy, int32_t cz);

/* Makes the first inactive block record the record of cell x, y, z (in
   cells) of chunk slot `slot` of a layer, with its words cleared as
   WorldBlockRecord says and no meshes. Returns it, or -1 outside the layer
   or when all are active. 0x140012490 */
int32_t world_create_block_record(uint32_t layer, uint32_t slot, int32_t x, int32_t y, int32_t z);

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
    uint8_t unknown_4[0x24 - 0x4];
    float mount[3];                      /* where the wheel hangs, in the car body's axes */
    float unknown_30;                    /* the drive divides by the engine's 8 plus this (the wheel's inertia?) */
    float radius;
    float unknown_38;                    /* without wheel bodies: scales unknown_3c into spin, and the drive's push */
    float unknown_3c;                    /* cleared before the wheels are solved */
    float spin;                          /* angular speed about the axle */
    uint8_t unknown_44[0x48 - 0x44];
    float steer;                         /* wheels 0 and 1: radians the axle turns about the car's up axis */
    float point[3];                      /* the point the wheel ray test 0x1400DF380 takes */
    float unknown_58[3];                 /* unknown_64 as it was before this tick's solve */
    float unknown_64[3];
    uint8_t unknown_70[0x74 - 0x70];
    float extension;                     /* added to mount[1] */
    float spring;                        /* stiffness of the hold on the mount point */
    float damping;                       /* of the relative velocity there */
    float grip;                          /* scales a second push along the car's up axis */
    uint8_t unknown_84[0xAC - 0x84];
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
    uint8_t unknown_38bc[0x38C8 - 0x38BC];
    float unknown_38c8;                  /* 0 (or not a number): the engine is not coupled to the drive */
    uint8_t unknown_38cc[0x38D0 - 0x38CC];
    float unknown_38d0;
    float brake;
    uint8_t unknown_38d8[0x38E0 - 0x38D8];
    int32_t driven_count;
    int32_t driven[(0x3940 - 0x38E4) / 4];   /* wheel indices */
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
    int32_t unknown_2c;                  /* phone state (type 6): the phone's word at +0x278 */
    float unknown_30, unknown_34;        /* phone rings (type 19): 1 and 1, or 0.5 and 1 (volume, pitch?) */
    uint8_t unknown_38[0x80 - 0x38];
} WorldEvent;

_Static_assert(sizeof(WorldEvent) == 0x80, "WorldEvent size");

#define world_events (&SR_GLOBAL(WorldEvent, 0x1873DE460ULL))
#define world_event_count SR_GLOBAL(int32_t, 0x189C1DC64ULL)
#define WORLD_EVENT_VEHICLE_REMOVED 4
#define WORLD_EVENT_BLOCK_GONE 15

/* When connected, records event 15: the gone-parts mask of the block at
   voxel x, y, z of a layer changed (a: layer | x << 16, b: y | z << 16,
   c: the mask, unknown_2c: update, 1 from the item routines). 0x1400516B0 */
void world_event_block_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t gone, uint32_t update);

/* Counts down each vehicle's lifetime and removes the vehicles whose time
   is up: frees their points, wheel and hull bodies, takes humans out, drops
   other references and, when connected, records event 4 with the vehicle's
   position. 0x14010BE50 */
void world_expire_vehicles(void);

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
    int32_t unknown_8;                   /* set with physics_simulated when a vehicle breaks the item off a block */
    uint8_t unknown_c[0x14 - 0xC];
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
