/* Which outer faces of a block shape are covered by the shape next to it.
 */
#include "world.h"

/* Block shapes (0xE8 bytes each from 0x145098C00), the fields used here. */
#define shape_field(shape, offset) (&SR_GLOBAL(uint8_t, 0x145098C00ULL + 0xE8ULL * (uint64_t)(int64_t)(shape) + (offset)))
#define shape_vertices(shape) (*(const float **)(void *)shape_field(shape, 0x48))
#define shape_outer_count(shape) (*(const int32_t *)(void *)shape_field(shape, 0x6C))
#define shape_side_mask(shape, side) (*(const uint32_t *)(void *)shape_field(shape, 0x70 + 4 * (side)))
#define shape_quads(shape) (*(const int32_t (**)[4])(void *)shape_field(shape, 0x88))
#define shape_quad_sides(shape) (*(const int32_t **)(void *)shape_field(shape, 0xA0))

/* UCOMISS + JNE: different only when ordered and unequal (NaN matches). */
static int differ(float a, float b)
{
    return a < b || a > b;
}

static float coordinate(const float *vertices, int32_t vertex, int axis)
{
    return vertices[(int32_t)((uint32_t)vertex * 3u + (uint32_t)axis)];
}

uint32_t world_block_covered_faces(int shape, int side, uint32_t mask, int neighbour)
{
    int opposite = 5 - side;
    int across = side >= 3 ? opposite : side;   /* the axis the side faces along */
    uint32_t result = mask & shape_side_mask(shape, side);

    for (int qa = 0; qa < shape_outer_count(shape); qa++) {
        int32_t count;

        if (shape_quad_sides(shape)[qa] != side)
            continue;
        count = shape_outer_count(neighbour);
        if (count <= 0)
            continue;
        for (int qb = 0; qb < count; qb++) {
            int k;

            if (shape_quad_sides(neighbour)[qb] != opposite)
                continue;
            for (k = 0; k < 3; k++) {
                const float *va = shape_vertices(shape), *vb = shape_vertices(neighbour);
                const int32_t *a = shape_quads(shape)[qa], *b = shape_quads(neighbour)[qb];

                if (k == across)
                    continue;
                if (differ(coordinate(vb, b[1], k), coordinate(va, a[0], k)) ||
                    differ(coordinate(vb, b[0], k), coordinate(va, a[1], k)) ||
                    differ(coordinate(vb, b[3], k), coordinate(va, a[2], k)) ||
                    differ(coordinate(vb, b[2], k), coordinate(va, a[3], k)))
                    break;
            }
            if (k == 3)
                result |= 1u << (qa & 31);
        }
    }
    return result;
}
