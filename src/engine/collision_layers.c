/* Sweeping a segment through a block layer of the level.
 *
 * A layer is a voxel grid with its own position, rotation and cell size.
 * The segment is taken into the layer's frame and walked voxel by voxel
 * from its start (a three-axis line walk, at most 0x4001 voxels). In each
 * voxel that has a block record the sweep tests, in this order: the parts
 * of the voxel's block that are still there (item meshes, turned with the
 * block), the voxel's model, and the two shape entries of the voxel (cube
 * faces, a block shape, or a pointer back to the voxel that holds a larger
 * block). It stops in the first voxel that leaves a hit.
 */
#include <emmintrin.h>
#include "arith.h"
#include "collision.h"
#include "collision_placed.h"
#include "item.h"
#include "math3d.h"
#include "world.h"

/* ---- the layer's frame (layer + 0x00, 0x100D70 bytes each from 0x15ADA9240) */

#define layer_field(layer, offset) \
    (&SR_GLOBAL(float, 0x15ADA9240ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + (offset)))
#define layer_origin(layer) layer_field(layer, 0x4)
#define layer_rotation(layer) layer_field(layer, 0x10)
#define layer_cell_size(layer) (*layer_field(layer, 0x40))
#define layer_scale(layer) (*layer_field(layer, 0x44)) /* voxels per unit */
#define layer_bounds_min(layer) layer_field(layer, 0x50)
#define layer_bounds_max(layer) layer_field(layer, 0x5C)

/* A voxel's model: bits 0-6 the model (collision_models.c), bits 10-11 a
   quarter turn about y. Block record + 0x4808. */
#define world_block_record_model(record) (&SR_GLOBAL(int32_t, 0x154165A48ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))
/* A model's offset from the voxel's centre (model + 0x240C). */
#define collision_model_offset(model) (&SR_GLOBAL(float, 0x1A7600B8CULL + 0x2418ULL * (uint64_t)(int64_t)(model)))

/* A block type's breakable parts: 0x74 bytes each from block type + 0x44
   (block types 0xED0 bytes from 0x1812C20CC, which holds the part count). */
typedef struct BlockPart {
    int32_t item_type;                   /* whose mesh the part is */
    float offset[3];                     /* from the voxel's centre, before the block's turn */
    float rotation[9];
    uint8_t unknown_34[0x74 - 0x34];
} BlockPart;

#define block_parts(type) (&SR_GLOBAL(BlockPart, 0x1812C2110ULL + 0xED0ULL * (uint64_t)(int64_t)(type)))
#define item_type_placed_mesh(type) (&SR_GLOBAL(PlacedMesh, 0x182A7F088ULL + 0x13D0ULL * (uint64_t)(int64_t)(type)))

/* Details of the last hit after collision_hit. */
#define hit_voxel (&SR_GLOBAL(int32_t, 0x151A848D8ULL))
#define hit_shape SR_GLOBAL(uint32_t, 0x151A848F0ULL)   /* the shape entry hit, 0 for parts and models */
#define hit_model SR_GLOBAL(int32_t, 0x151A848FCULL)    /* the model hit, -1: none */
#define hit_block SR_GLOBAL(uint32_t, 0x151A84900ULL)   /* the block type whose part was hit */
#define hit_block_turn SR_GLOBAL(uint32_t, 0x151A84904ULL)
#define hit_part SR_GLOBAL(int32_t, 0x151A84908ULL)     /* -1: not a part */

static const float up_axis[3] = { 0.0f, 1.0f, 0.0f };
#define QUARTER_TURN 1.570796326795                      /* the original's double, a little short of pi / 2 */

typedef struct LayerSweep {
    float *point, *normal, *fraction;
    int layer;
    const float *rotation, *origin;
    float from[3], to[3];                /* in the layer's frame */
} LayerSweep;

/* A hit found in the layer's frame, taken back to the world's. */
static void keep_world_hit(const LayerSweep *s, const float point[3], const float normal[3], float t)
{
    const float *r = s->rotation;

    s->point[0] = ((point[1] * r[3] + point[0] * r[0]) + point[2] * r[6]) + s->origin[0];
    s->point[1] = ((point[1] * r[4] + point[0] * r[1]) + point[2] * r[7]) + s->origin[1];
    s->point[2] = ((point[1] * r[5] + point[0] * r[2]) + point[2] * r[8]) + s->origin[2];
    s->normal[0] = (normal[1] * r[3] + normal[0] * r[0]) + normal[2] * r[6];
    s->normal[1] = (normal[1] * r[4] + normal[0] * r[1]) + normal[2] * r[7];
    s->normal[2] = (normal[1] * r[5] + normal[0] * r[2]) + normal[2] * r[8];
    *s->fraction = t;
}

static void set_hit_voxel(int layer, int x, int y, int z)
{
    item_hit_layer = layer;
    hit_voxel[0] = x;
    hit_voxel[1] = y;
    hit_voxel[2] = z;
}

/* The parts of block `block` (in voxel x, y, z) not marked in `gone`. Hits
   are kept in the layer's frame: the original does not take them back to the
   world's. */
static void sweep_parts(const LayerSweep *s, uint32_t block, uint32_t gone, int x, int y, int z)
{
    static float placed[512][3];
    int type = (int)(block & 0x3FF);
    uint32_t turn = block >> 24 & 3, bit = 1;
    float size = layer_cell_size(s->layer);
    float cx = ((float)x + 0.5f) * size, cy = (float)y * size, cz = ((float)z + 0.5f) * size;

    for (int p = 0; p < world_block_part_count(type); p++, bit = bit << 1 | bit >> 31) {
        const BlockPart *part = &block_parts(type)[p];
        const PlacedMesh *mesh;
        float m[9] = { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f };
        float angle, position[3], hit[8];
        const float *o = part->offset;

        if (gone & bit)
            continue;
        angle = (float)((double)(float)(int32_t)turn * QUARTER_TURN);
        math_mat3_rotate_rows(m, up_axis, angle);
        position[0] = ((o[0] * m[0] + cx) + o[1] * m[3]) + o[2] * m[6];
        position[1] = ((o[0] * m[1] + cy) + o[1] * m[4]) + o[2] * m[7];
        position[2] = ((o[0] * m[2] + cz) + o[1] * m[5]) + o[2] * m[8];
        for (int k = 0; k < 9; k++)
            m[k] = part->rotation[k];
        math_mat3_rotate_rows(m, up_axis, angle);
        mesh = item_type_placed_mesh(part->item_type);
        if (mesh->points == NULL)
            continue;
        collision_place_mesh(placed, mesh, position, m);
        if (!collision_segment_placed_mesh(hit, mesh, (const float (*)[3])placed, s->from, s->to) ||
            hit[6] >= *s->fraction)
            continue;
        s->point[0] = hit[0];
        s->point[1] = hit[1];
        s->point[2] = hit[2];
        s->normal[0] = hit[3];
        s->normal[2] = hit[5];
        s->normal[1] = hit[4];
        set_hit_voxel(s->layer, x, y, z);
        hit_block = (uint32_t)type;
        hit_part = p;
        hit_shape = 0;
        hit_model = -1;
        hit_block_turn = turn;
        *s->fraction = hit[6];
    }
}

static float quarter_turns(uint32_t flags)
{
    return flags == 0x400 ? 1.5707963705062866f : flags == 0x800 ? 3.1415927410125732f : 4.71238899230957f;
}

static void sweep_model(const LayerSweep *s, int32_t entry, int x, int y, int z)
{
    int model = entry & 0x7F;
    uint32_t turn = (uint32_t)entry & 0xC00;
    float size = layer_cell_size(s->layer);
    float position[3], rotation[9] = { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f };
    float point[3], normal[3], t;

    position[0] = collision_model_offset(model)[0];
    position[1] = collision_model_offset(model)[1];
    position[2] = collision_model_offset(model)[2];
    if (turn)
        math_vec3_rotate(position, up_axis, quarter_turns(turn));
    position[0] = position[0] + ((float)x + 0.5f) * size;
    position[1] = position[1] + (float)y * size;
    position[2] = position[2] + ((float)z + 0.5f) * size;
    if (turn)
        math_mat3_rotate_rows(rotation, up_axis, quarter_turns(turn));
    if (!collision_sweep_model_at(point, normal, &t, model, position, rotation, s->from, s->to) ||
        t >= *s->fraction)
        return;
    keep_world_hit(s, point, normal, t);
    hit_shape = 0;
    set_hit_voxel(s->layer, x, y, z);
    hit_model = model;
    hit_part = -1;
}

/* One shape entry of voxel x, y, z: cube faces (top bits 010), a block shape
   (100), or (110) the voxel holding a larger block, whose entry in the same
   table (`lookup`) is then tested there. */
static void sweep_shape(const LayerSweep *s, uint32_t entry, int x, int y, int z,
                        uint32_t (*lookup)(uint32_t, uint32_t, uint32_t, uint32_t))
{
    int32_t voxel[3] = { x, y, z };
    float point[3], normal[3], t, size = layer_cell_size(s->layer);
    int found;

    switch (entry & 0xE0000000u) {
    case 0x40000000u:
        found = collision_segment_cell(point, normal, &t, s->from, s->to, voxel, entry, size);
        break;
    case 0x80000000u:
        found = collision_segment_block_shape(point, normal, &t, s->from, s->to, voxel, entry, size);
        break;
    case 0xC0000000u:
        voxel[0] = (int32_t)((uint32_t)x - (entry & 0xFF));
        voxel[1] = (int32_t)((uint32_t)y - (entry >> 16 & 0xFF));
        voxel[2] = (int32_t)((uint32_t)z - (entry >> 8 & 0xFF));
        entry = lookup((uint32_t)s->layer, (uint32_t)voxel[0], (uint32_t)voxel[1], (uint32_t)voxel[2]);
        found = collision_segment_block_shape(point, normal, &t, s->from, s->to, voxel, entry, size);
        break;
    default:
        return;
    }
    if (!found || t >= *s->fraction)
        return;
    keep_world_hit(s, point, normal, t);
    hit_shape = entry;
    set_hit_voxel(s->layer, voxel[0], voxel[1], voxel[2]);
    hit_model = -1;
    hit_part = -1;
}

/* The record table index of voxel x, y, z of the layer, -1 when it has none. */
static int64_t voxel_entry(int layer, int x, int y, int z)
{
    int32_t size_x = world_level_chunks(layer, 0), slot, record;
    const int32_t *table;

    if (x < 0 || x >= (int32_t)((uint32_t)size_x << 6) || y < 0 ||
        y >= (int32_t)((uint32_t)world_level_chunks(layer, 1) << 6) || z < 0 ||
        z >= (int32_t)((uint32_t)world_level_chunks(layer, 2) << 6))
        return -1;
    __builtin_memcpy(&table, world_level_chunk_table_address(layer), sizeof table);
    slot = table[add_int(multiply_int(add_int(multiply_int(y >> 6, world_level_chunks(layer, 2)), z >> 6), size_x),
                         x >> 6)];
    if (slot == -1)
        return -1;
    record = world_level_cells(layer, slot)[(x >> 3 & 7) + 8 * ((z >> 3 & 7) + 8 * (y >> 3 & 7))];
    if (record == -1)
        return -1;
    return (int64_t)record * 0x1B12 + ((x & 7) + 8 * ((z & 7) + 8 * (y & 7)));
}

#define record_table(base, entry) SR_GLOBAL(uint32_t, (base) + 4ULL * (uint64_t)(entry))

/* The original's floor in double (see collision_terrain.c). */
static double floor_double(double x)
{
    int64_t whole = _mm_cvttsd_si64(_mm_set_sd(x));

    if (whole == INT64_MIN || (double)whole == x)
        return x;
    return (double)(whole - (__builtin_signbit(x) ? 1 : 0));
}

static float cell_offset(float x, int direction)
{
    double wide = (double)x;
    float offset = (float)(wide - (floor_double(wide) + 0.5));

    if (direction > 0)
        offset = -offset;
    return offset + offset;
}

static int32_t absolute(int32_t value)
{
    uint32_t sign = (uint32_t)(value >> 31);
    return (int32_t)(((uint32_t)value ^ sign) - sign);
}

int collision_sweep_layer(float point[3], float normal[3], float *fraction, int layer, const float from[3],
                          const float to[3])
{
    const float *low = layer_bounds_min(layer), *high = layer_bounds_max(layer);
    const float *r = layer_rotation(layer), *o = layer_origin(layer);
    LayerSweep s = { point, normal, fraction, layer, r, o, { 0 }, { 0 } };
    float scale, delta[3], reach[3], e[6];
    int32_t start[3], end[3], direction[3], limit;

    for (int k = 0; k < 3; k++)
        if (!(from[k] >= low[k]) && low[k] > to[k])
            return 0;
    for (int k = 0; k < 3; k++)
        if (from[k] > high[k] && !(high[k] >= to[k]))
            return 0;
    *fraction = 1.0f;

    {
        float dx = from[0] - o[0], dy = from[1] - o[1], dz = from[2] - o[2];
        float tx = to[0] - o[0], ty = to[1] - o[1], tz = to[2] - o[2];

        s.from[0] = (r[1] * dy + r[0] * dx) + r[2] * dz;
        s.from[1] = (r[4] * dy + r[3] * dx) + r[5] * dz;
        s.from[2] = (r[7] * dy + r[6] * dx) + r[8] * dz;
        s.to[0] = (r[1] * ty + r[0] * tx) + r[2] * tz;
        s.to[1] = (r[4] * ty + r[3] * tx) + r[5] * tz;
        s.to[2] = (r[7] * ty + r[6] * tx) + r[8] * tz;
    }
    scale = layer_scale(layer);
    for (int k = 0; k < 3; k++) {
        start[k] = truncate_float(s.from[k] * scale);
        end[k] = truncate_float(scale * s.to[k]);
        delta[k] = (s.to[k] - s.from[k]) * scale;
        direction[k] = delta[k] > 0.0f ? 1 : -1;
        reach[k] = __builtin_fabsf(delta[k]);
    }

    if (start[0] == end[0] && start[1] == end[1] && start[2] == end[2]) {
        /* (the walk ends in this voxel: its terms are never used) */
        limit = 0;
        for (int k = 0; k < 6; k++)
            e[k] = 0.0f;
    } else {
        float s0 = cell_offset(scale * s.from[0], direction[0]);
        float s1 = cell_offset(scale * s.from[1], direction[1]);
        float s2 = cell_offset(scale * s.from[2], direction[2]);
        int32_t steps;

        e[0] = s0 * reach[1] - reach[0];
        e[3] = s0 * reach[2] - reach[0];
        e[1] = s1 * reach[0] - reach[1];
        e[4] = s1 * reach[2] - reach[1];
        e[2] = s2 * reach[0] - reach[2];
        e[5] = reach[1] * s2 - reach[2];
        steps = add_int(add_int(absolute(subtract_int(end[0], start[0])), absolute(subtract_int(end[2], start[2]))),
                        absolute(subtract_int(end[1], start[1])));
        if (steps > 0x4000) {
            limit = 0x4000;
        } else {
            limit = steps;
            if (steps < 0)
                return 0;
        }
    }

    for (int32_t i = 0;;) {
        int x = start[0], y = start[1], z = start[2];
        int64_t entry = voxel_entry(layer, x, y, z);

        if (entry != -1) {
            uint32_t block = record_table(0x154166248ULL, entry);
            int32_t model;
            uint32_t shape;

            if (block != 0 && world_block_part_count(block & 0x3FF) > 0)
                sweep_parts(&s, block, record_table(0x154166A48ULL, entry), x, y, z);
            model = (int32_t)record_table(0x154165A48ULL, entry);
            if (model > 0)
                sweep_model(&s, model, x, y, z);
            shape = record_table(0x154161248ULL, entry);
            if (shape != 0)
                sweep_shape(&s, shape, x, y, z, world_block_unknown_8_at);
            shape = record_table(0x154164248ULL, entry);
            if (shape != 0)
                sweep_shape(&s, shape, x, y, z, world_block_layout_at);
            if (1.0f > *fraction)
                return 1;
        }
        if (start[0] == end[0] && start[1] == end[1] && start[2] == end[2])
            return 0;
        if (e[2] > e[3] && !(e[0] >= e[1])) {
            start[0] += direction[0];
            e[0] += reach[1];
            e[1] -= reach[1];
            e[2] -= reach[2];
            e[3] += reach[2];
        } else if (e[4] > e[5]) {
            start[2] += direction[2];
            e[2] += reach[0];
            e[3] -= reach[0];
            e[4] -= reach[1];
            e[5] += reach[1];
        } else {
            start[1] += direction[1];
            e[0] -= reach[0];
            e[1] += reach[0];
            e[4] += reach[2];
            e[5] -= reach[2];
        }
        if (++i > limit)
            return 0;
    }
}
