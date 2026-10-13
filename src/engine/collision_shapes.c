/* A segment against the shape of one block in a voxel: the block type's
 * quads (tested from their front) and its breakable parts (quads tested
 * from both sides) that are still there.
 */
#include "arith.h"
#include "collision.h"

/* 0x145098C00, 0xE8 bytes per block type. */
typedef struct BlockShape {
    uint8_t unknown_0[0x48];
    const float (*vertex)[3];
    uint8_t unknown_50[0x68 - 0x50];
    int32_t quad_count;
    uint8_t unknown_6c[0x88 - 0x6C];
    const int32_t (*quad)[4];            /* vertex indices */
    const int32_t *quad_id;              /* reported for a hit (parts use the entry at their own index) */
    uint8_t unknown_98[0xD8 - 0x98];
    int32_t part_count;
    uint32_t unknown_dc;
    const float (*part)[12];             /* four corners each, in the voxel's units */
} BlockShape;

_Static_assert(sizeof(BlockShape) == 0xE8, "BlockShape size");

#define block_shapes (&SR_GLOBAL(BlockShape, 0x145098C00ULL))
/* The id of the quad or part last hit, and its index (parts with 0x10000). */
#define collision_hit_face SR_GLOBAL(int32_t, 0x151A848ECULL)
#define collision_hit_shape_index SR_GLOBAL(int32_t, 0x151A848F4ULL)

/* (c - a) x (b - a), normalised as the original does (zero when its length
   is 0 or NaN). */
static void face_normal(float out[3], const float a[3], const float b[3], const float c[3])
{
    float e1x = b[0] - a[0], e1y = b[1] - a[1], e1z = b[2] - a[2];
    float e2x = c[0] - a[0], e2y = c[1] - a[1], e2z = c[2] - a[2];
    float length;

    out[0] = e2y * e1z - e2z * e1y;
    out[1] = e2z * e1x - e2x * e1z;
    out[2] = e2x * e1y - e2y * e1x;
    length = sqrt_float((out[1] * out[1] + out[0] * out[0]) + out[2] * out[2]);
    if (is_zero_or_nan_quiet(length)) {
        out[0] = out[1] = out[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        out[0] = inverse * out[0];
        out[1] = inverse * out[1];
        out[2] = inverse * out[2];
    }
}

typedef struct ShapeSweep {
    float *point, *normal, *t;
    const float *from, *to;
    const BlockShape *shape;
} ShapeSweep;

static void try_triangle(const ShapeSweep *s, const float n[3], const float a[3], const float b[3], const float c[3],
                         int index, int32_t code)
{
    float hit[3], t;

    if (!collision_line_triangle(hit, n, &t, s->from, s->to, a, b, c) || t >= *s->t)
        return;
    s->point[0] = hit[0];
    s->point[2] = hit[2];
    s->point[1] = hit[1];
    s->normal[0] = n[0];
    s->normal[1] = n[1];
    s->normal[2] = n[2];
    *s->t = t;
    collision_hit_shape_index = code;
    collision_hit_face = s->shape->quad_id[index];
}

int collision_segment_block_shape(float point[3], float normal[3], float *t, const float from[3], const float to[3],
                                  const int32_t voxel[3], uint32_t type_and_gone, float scale)
{
    const BlockShape *shape = &block_shapes[type_and_gone & 0xFFFF];
    uint32_t gone = type_and_gone >> 16, bit = 1;
    float cell[3] = { (float)voxel[0], (float)voxel[1], (float)voxel[2] };
    ShapeSweep s = { point, normal, t, from, to, shape };

    *t = 1.0f;
    for (int q = 0; q < shape->quad_count; q++) {
        float k[4][3], n[3];

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 3; j++)
                k[i][j] = (cell[j] + shape->vertex[shape->quad[q][i]][j]) * scale;
        face_normal(n, k[0], k[1], k[2]);
        try_triangle(&s, n, k[0], k[1], k[2], q, q);
        face_normal(n, k[0], k[2], k[3]);
        try_triangle(&s, n, k[0], k[2], k[3], q, q);
    }

    for (int p = 0; p < shape->part_count; p++, bit = bit << 1 | bit >> 31) {
        const float *corner = shape->part[p];
        float k[4][3], n[3];

        if (gone & bit & 0x3FF)
            continue;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 3; j++)
                k[i][j] = (cell[j] + corner[3 * i + j]) * scale;
        face_normal(n, k[0], k[1], k[2]);
        try_triangle(&s, n, k[0], k[1], k[2], p, p | 0x10000);
        try_triangle(&s, n, k[0], k[2], k[3], p, p | 0x10000);
        face_normal(n, k[0], k[2], k[1]);
        try_triangle(&s, n, k[0], k[2], k[1], p, p | 0x10000);
        try_triangle(&s, n, k[0], k[3], k[2], p, p | 0x10000);
    }
    return !(*t >= 1.0f);
}
