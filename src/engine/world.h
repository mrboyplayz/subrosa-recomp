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
    uint8_t unknown_20[0x58 - 0x20];
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
    uint8_t unknown_134[0x1B80 - 0x134];
} WorldItem;

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

#endif
