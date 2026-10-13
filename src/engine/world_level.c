/* Setting up a layer of the level: its placement, size in chunks, chunk
 * tables (its own and the item grid's), and forgetting the chunks, records
 * and meshes it had.
 */
#include "crt.h"
#include "world.h"

#define layer_field(layer, type, offset) \
    SR_GLOBAL(type, 0x15ADA9240ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + (offset))
#define layer_active(layer) layer_field(layer, int32_t, 0x0)
#define layer_origin(layer) (&layer_field(layer, float, 0x4))
#define layer_rotation(layer) (&layer_field(layer, float, 0x10))        /* 3 x 3 */
#define layer_scale(layer) layer_field(layer, float, 0x40)
#define layer_inverse_scale(layer) layer_field(layer, float, 0x44)
#define layer_chunk_table(layer) layer_field(layer, int32_t *, 0x48)
#define layer_bounds_min(layer) (&layer_field(layer, float, 0x50))
#define layer_bounds_max(layer) (&layer_field(layer, float, 0x5C))
#define layer_unknown_68(layer) layer_field(layer, int32_t, 0x68)
#define layer_slot_used(layer, slot) \
    SR_GLOBAL(int32_t, 0x15ADA97ACULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + 0x804ULL * (uint64_t)(slot))

#define block_mesh_count SR_GLOBAL(int32_t, 0x151E46220ULL)
#define block_mesh_owner(mesh) SR_GLOBAL(int32_t, 0x151E46224ULL + 0x8C24ULL * (uint64_t)(mesh))
#define BLOCK_MESHES 1024
#define record_word(record, offset) SR_GLOBAL(int32_t, 0x154161240ULL + 0x6C48ULL * (uint64_t)(record) + (offset))
#define BLOCK_RECORDS 4096

void world_level_layer_init(int layer, const float origin[3], int32_t chunks_x, int32_t chunks_y, int32_t chunks_z,
                            float scale)
{
    static const float identity[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
    int64_t table_bytes;

    if ((uint32_t)layer > 3)
        return;
    layer_active(layer) = 1;
    for (int k = 0; k < 3; k++)
        layer_origin(layer)[k] = origin[k];
    for (int k = 0; k < 9; k++)
        layer_rotation(layer)[k] = identity[k];
    world_level_chunks(layer, 0) = chunks_x;
    world_level_chunks(layer, 1) = chunks_y;
    world_level_chunks(layer, 2) = chunks_z;
    layer_scale(layer) = scale;
    layer_inverse_scale(layer) = 1.0f / scale;

    /* Fresh chunk tables, every chunk empty. */
    table_bytes = (int32_t)(4u * (uint32_t)chunks_z * (uint32_t)chunks_y * (uint32_t)chunks_x);
    crt_free(layer_chunk_table(layer));
    layer_chunk_table(layer) = crt_malloc((uint64_t)table_bytes);
    crt_free(world_grid_cells(layer));   /* the item grid's cells, one per chunk too */
    world_grid_cells(layer) = crt_malloc((uint64_t)table_bytes);
    for (int y = 0; y < chunks_y; y++)
        for (int z = 0; z < chunks_z; z++)
            for (int x = 0; x < chunks_x; x++)
                layer_chunk_table(layer)[((int64_t)y * (int32_t)((uint32_t)chunks_z * (uint32_t)chunks_x) +
                                          (int64_t)z * chunks_x) + x] = -1;

    /* Every chunk slot, mesh and block record of the layer is free again
       (the meshes of all layers). */
    for (int slot = 0; slot < 512; slot++)
        layer_slot_used(layer, slot) = 0;
    block_mesh_count = 0;
    for (int mesh = 0; mesh < BLOCK_MESHES; mesh++)
        block_mesh_owner(mesh) = -1;
    for (int record = 0; record < BLOCK_RECORDS; record++)
        if (record_word(record, 0x4) == layer)
            record_word(record, 0x0) = 0;

    for (int k = 0; k < 3; k++)
        layer_bounds_min(layer)[k] = origin[k];
    layer_bounds_max(layer)[0] = (float)chunks_x * 64.0f * scale + origin[0];
    layer_bounds_max(layer)[1] = (float)chunks_y * 64.0f * scale + origin[1];
    layer_bounds_max(layer)[2] = (float)chunks_z * 64.0f * scale + origin[2];
    layer_unknown_68(layer) = 0;
}
