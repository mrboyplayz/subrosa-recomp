/* The spatial grid used for collision queries. See world.h. */
#include <string.h>
#include "arith.h"
#include "world.h"

void world_grid_insert(int layer, int32_t x, int32_t y, int32_t z, uint16_t object)
{
    uint32_t cx, cy, cz;
    int32_t *cell;
    int32_t block, leaf;
    int32_t *leaf_slot;
    WorldGridUnit *unit;

    if ((uint32_t)layer > 3 || x < 0 || y < 0 || z < 0)
        return;
    cx = (uint32_t)x >> 6;
    cy = (uint32_t)y >> 6;
    cz = (uint32_t)z >> 6;
    if ((int32_t)cx >= world_grid_size_x(layer) || (int32_t)cy >= world_grid_size_y(layer)
        || (int32_t)cz >= world_grid_size_z(layer))
        return;

    /* 64-unit cell: its block, allocated on first use. */
    cell = &world_grid_cells(layer)[add_int(multiply_int(add_int(multiply_int(world_grid_size_z(layer), (int32_t)cy),
                                                                 (int32_t)cz),
                                                         world_grid_size_x(layer)),
                                            (int32_t)cx)];
    block = *cell;
    if (block == -1) {
        block = world_grid_block_count++;
        *cell = block;
        memset(&world_grid_blocks[(intptr_t)block * 512], 0xFF, 0x800);
        if (block == -1)
            return;
    }

    /* 8-unit cell: its leaf, allocated on first use while leaves remain. */
    leaf_slot = &world_grid_blocks[((intptr_t)block << 9)
                                   + (((uint32_t)x >> 3) & 7) + 8 * ((((uint32_t)z >> 3) & 7) + 8 * (((uint32_t)y >> 3) & 7))];
    leaf = *leaf_slot;
    if (leaf == -1) {
        leaf = world_grid_leaf_count;
        if (leaf >= WORLD_GRID_LEAF_CAPACITY)
            return;
        world_grid_leaf_count = leaf + 1;
        *leaf_slot = leaf;
        for (int i = 0; i < 512; i++)
            world_grid_leaves[(intptr_t)leaf * 512 + i].count = 0;
        if (leaf == -1)
            return;
    }

    /* The unit itself. */
    unit = &world_grid_leaves[((intptr_t)leaf << 9) + (x & 7) + 8 * ((z & 7) + 8 * (y & 7))];
    if (unit->count < 32) {
        unit->objects[unit->count] = object;
        unit->count++;
    }
}

void world_grid_query_items(WorldGridItems *out, const int32_t minimum[3], const int32_t maximum[3])
{
    out->count = 0;
    uint32_t size_x = (uint32_t)world_grid_size_x(0);
    uint32_t size_z = (uint32_t)world_grid_size_z(0);
    WorldGridUnit *leaves = world_grid_leaves;
    /* Native traversal order is y, z, x, each inclusive. */
    for (int32_t y = minimum[1]; y <= maximum[1]; y = add_int(y, 1)) {
        if (y < 0 || y >= (int32_t)((uint32_t)world_grid_size_y(0) << 6))
            continue;
        for (int32_t z = minimum[2]; z <= maximum[2]; z = add_int(z, 1)) {
            if (z < 0 || z >= (int32_t)(size_z << 6))
                continue;
            for (int32_t x = minimum[0]; x <= maximum[0]; x = add_int(x, 1)) {
                if (x < 0 || x >= (int32_t)(size_x << 6))
                    continue;
                int32_t cell = add_int(x >> 6, multiply_int((int32_t)size_x,
                                      add_int(z >> 6, multiply_int((int32_t)size_z, y >> 6))));
                int32_t block = world_grid_cells(0)[cell];
                if (block == -1)
                    continue;
                int32_t leaf = world_grid_blocks[(intptr_t)block * 512
                                + ((x >> 3) & 7) + 8 * (((z >> 3) & 7) + 8 * ((y >> 3) & 7))];
                if (leaf == -1)
                    continue;
                intptr_t unit_index = (intptr_t)leaf * 512 + (x & 7) + 8 * ((z & 7) + 8 * (y & 7));
                for (int n = 0; n < leaves[unit_index].count; n++) {
                    if (out->count < 256) {
                        int32_t item = leaves[unit_index].objects[n] & 0x3FFF;
                        int k = 0;
                        while (k < out->count && out->entries[k].item != item)
                            k++;
                        if (k == out->count) {
                            out->entries[k].unknown_0 = 0;
                            out->entries[k].item = leaves[unit_index].objects[n] & 0x3FFF;
                            out->count++;
                            leaves = world_grid_leaves;
                        }
                    }
                }
                if (leaves[unit_index].count > 0) {
                    size_z = (uint32_t)world_grid_size_z(0);
                    size_x = (uint32_t)world_grid_size_x(0);
                }
            }
        }
    }
}

/* Index of chunk (cx, cy, cz) in a layer's cell table (x fastest, then z, then y). */
static int32_t grid_cell_index(int layer, int32_t cx, int32_t cy, int32_t cz)
{
    return add_int(cx, multiply_int(world_grid_size_x(layer),
                                    add_int(cz, multiply_int(cy, world_grid_size_z(layer)))));
}

int32_t world_grid_add_block(int layer, int32_t cx, int32_t cy, int32_t cz)
{
    int32_t block = world_grid_block_count++;

    world_grid_cells(layer)[grid_cell_index(layer, cx, cy, cz)] = block;
    memset(&world_grid_blocks[(intptr_t)block * 512], 0xFF, 0x800);
    return block;
}

void world_grid_rebuild(void)
{
    world_grid_block_count = 0;
    for (int32_t cy = 0; cy < world_grid_size_y(0); cy++)
        for (int32_t cz = 0; cz < world_grid_size_z(0); cz++)
            for (int32_t cx = 0; cx < world_grid_size_x(0); cx++)
                world_grid_cells(0)[grid_cell_index(0, cx, cy, cz)] = -1;
    world_grid_leaf_count = 0;

    for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
        const WorldItem *item = &world_items[i];

        if (!item->active || !world_item_types[item->type].occupies_space)
            continue;
        for (int32_t y = item->voxel_min[1]; y <= item->voxel_max[1]; y++)
            for (int32_t z = item->voxel_min[2]; z <= item->voxel_max[2]; z++)
                for (int32_t x = item->voxel_min[0]; x <= item->voxel_max[0]; x++)
                    world_grid_insert(0, x, y, z, (uint16_t)(i | 0x8000));
    }
}
