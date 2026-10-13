/* The edges of a block shape's quads as lines (for outlining a block).
 */
#include <string.h>
#include "world.h"

/* A layer's origin (layer + 4). */
#define layer_origin(layer) \
    (&SR_GLOBAL(float, 0x15ADA9244ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer)))

/* Block shapes, 0xE8 bytes each from 0x145098C00: their points and quads. */
#define shape_field(shape, type, offset) \
    SR_GLOBAL(type, 0x145098C00ULL + 0xE8ULL * (uint64_t)(shape) + (offset))
#define shape_points(shape) shape_field(shape, const float *, 0x48)
#define shape_quad_count(shape) shape_field(shape, int32_t, 0x68)
#define shape_quads(shape) shape_field(shape, const int32_t *, 0x88)

#define OUTLINE_CAPACITY 256

static void add_line(WorldLineList *list, const float from[3], const float to[3])
{
    WorldLine *line;

    if (list->count >= OUTLINE_CAPACITY)
        return;
    line = &list->lines[list->count];
    for (int k = 0; k < 3; k++) {
        line->from[k] = from[k];
        line->to[k] = to[k];
    }
    list->count++;
}

void world_block_shape_outline(WorldLineList *list, int layer, const int32_t voxel[3], uint16_t shape, float scale)
{
    float origin[3];

    for (int k = 0; k < 3; k++)
        origin[k] = (float)voxel[k] * scale + layer_origin(layer)[k];
    for (int q = 0; q < shape_quad_count(shape); q++) {
        const int32_t *quad = &shape_quads(shape)[4 * q];
        float corner[4][3];

        for (int c = 0; c < 4; c++)
            for (int k = 0; k < 3; k++)
                corner[c][k] = scale * shape_points(shape)[3 * quad[c] + k] + origin[k];
        add_line(list, corner[0], corner[1]);
        add_line(list, corner[1], corner[2]);
        add_line(list, corner[2], corner[3]);
        add_line(list, corner[3], corner[0]);
    }
}

/* A unit cube's corners (0x1402B34F0), its edges as corner pairs
   (0x1402B3750) and the two faces each edge borders (0x1402B37B0; faces as
   in world_block_cube_patches()). */
static const float cube_corner[8][3] = {
    { 0, 0, 0 }, { 1, 0, 0 }, { 1, 0, 1 }, { 0, 0, 1 }, { 0, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 }, { 0, 1, 1 },
};
static const int cube_edge[12][2] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 0 }, { 0, 4 }, { 1, 5 }, { 2, 6 }, { 3, 7 }, { 4, 5 }, { 5, 6 }, { 6, 7 }, { 7, 4 },
};
static const int cube_edge_faces[12][2] = {
    { 0, 3 }, { 0, 4 }, { 0, 1 }, { 0, 2 }, { 2, 3 }, { 3, 4 }, { 4, 1 }, { 1, 2 }, { 3, 5 }, { 4, 5 }, { 1, 5 }, { 2, 5 },
};

/* A cube entry shows face f when it has bits f and f + 6. */
static int cube_face_shown(uint32_t cube, int face)
{
    return (cube >> face & 1) && (cube & (64u << face));
}

void world_block_cube_outline(WorldLineList *list, int layer, const int32_t voxel[3], uint32_t cube, float scale)
{
    float origin[3];

    for (int k = 0; k < 3; k++)
        origin[k] = (float)voxel[k] * scale + layer_origin(layer)[k];
    for (int e = 0; e < 12; e++) {
        float from[3], to[3];

        if (!cube_face_shown(cube, cube_edge_faces[e][0]) || !cube_face_shown(cube, cube_edge_faces[e][1]))
            continue;
        for (int k = 0; k < 3; k++) {
            from[k] = scale * cube_corner[cube_edge[e][0]][k] + origin[k];
            to[k] = scale * cube_corner[cube_edge[e][1]][k] + origin[k];
        }
        add_line(list, from, to);
    }
}

/* Records and their +8 and layout entries; a layer's scale and 1 / scale. */
#define layer_scale(layer) SR_GLOBAL(float, 0x15ADA9280ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer))
#define layer_inverse_scale(layer) \
    SR_GLOBAL(float, 0x15ADA9284ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer))

static void outline_entry(WorldLineList *list, int layer, const int32_t voxel[3], uint32_t entry)
{
    if ((entry & 0xE0000000u) == 0x40000000u)
        world_block_cube_outline(list, layer, voxel, entry, layer_scale(layer));
    else if ((entry & 0xE0000000u) == 0x80000000u)
        world_block_shape_outline(list, layer, voxel, (uint16_t)entry, layer_scale(layer));
}

void world_block_outline_box(WorldLineList *list, int layer, const float box_min[3], const float box_max[3])
{
    int32_t from[3], to[3], voxel[3];
    const int32_t *table;

    for (int k = 0; k < 3; k++) {
        from[k] = (int32_t)((box_min[k] - layer_origin(layer)[k]) * layer_inverse_scale(layer));
        to[k] = (int32_t)((box_max[k] - layer_origin(layer)[k]) * layer_inverse_scale(layer));
    }
    for (voxel[1] = from[1]; voxel[1] <= to[1]; voxel[1]++) {
        for (voxel[2] = from[2]; voxel[2] <= to[2]; voxel[2]++) {
            for (voxel[0] = from[0]; voxel[0] <= to[0]; voxel[0]++) {
                int32_t x = voxel[0], y = voxel[1], z = voxel[2], slot, record, at;

                if (x < 0 || x >= (int32_t)((uint32_t)world_level_chunks(layer, 0) << 6) || y < 0 ||
                    y >= (int32_t)((uint32_t)world_level_chunks(layer, 1) << 6) || z < 0 ||
                    z >= (int32_t)((uint32_t)world_level_chunks(layer, 2) << 6))
                    continue;
                memcpy(&table, world_level_chunk_table_address(layer), sizeof table);
                slot = table[(int32_t)((uint32_t)(x >> 6) +
                                       (uint32_t)world_level_chunks(layer, 0) *
                                           ((uint32_t)(z >> 6) + (uint32_t)world_level_chunks(layer, 2) * (uint32_t)(y >> 6)))];
                if (slot == -1)
                    continue;
                record = world_level_cells(layer, slot)[(x >> 3 & 7) + 8 * ((z >> 3 & 7) + 8 * (y >> 3 & 7))];
                if (record == -1)
                    continue;
                at = (x & 7) + 8 * ((z & 7) + 8 * (y & 7));
                outline_entry(list, layer, voxel, world_block_record_unknown_8(record)[at]);
                outline_entry(list, layer, voxel, world_block_record_layout(record)[at]);
            }
        }
    }
}
