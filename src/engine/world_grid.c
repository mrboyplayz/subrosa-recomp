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
