/* Sweeping a segment across the terrain: a height field of 8 x 8 tiles,
 * each 2048 x 2048 cells of one unit, with heights at the cell corners
 * (2049 a row). A bit mask with one bit per 4 x 4 cells says where the
 * terrain is solid. The sweep walks the cells under the segment in x and z
 * from its start toward its end, tests each solid cell as two triangles,
 * and stops at the first cell that leaves a hit.
 */
#include <emmintrin.h>
#include "arith.h"
#include "collision.h"

typedef struct TerrainTile {
    float origin[3];                     /* of the tile's cell (0, 0) */
    uint8_t unknown_c[0x18 - 0xC];
    const float *heights;                /* 2049 x 2049, row by z */
    uint8_t unknown_20[0x3420 - 0x20];
} TerrainTile;

_Static_assert(sizeof(TerrainTile) == 0x3420, "TerrainTile size");

#define terrain_tiles (&SR_GLOBAL(TerrainTile, 0x1811BF840ULL))
#define terrain_origin (&SR_GLOBAL(float, 0x181290040ULL))
/* One bit per 4 x 4 cells, 16 bits per 16 x 16 cells, 1024 such words a row. */
#define terrain_solid SR_GLOBAL(const uint16_t *, 0x181290050ULL)

#define TERRAIN_ROW 2049

/* The original's floor in double: x itself when it is whole, NaN or beyond
   the 64-bit range. */
static double floor_double(double x)
{
    int64_t whole = _mm_cvttsd_si64(_mm_set_sd(x));

    if (whole == INT64_MIN || (double)whole == x)
        return x;
    return (double)(whole - (x < 0.0 || __builtin_signbit(x) ? 1 : 0));
}

/* Twice the distance from x to the middle of its unit, signed toward the
   walk's direction. */
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

/* Normalises n in place (zero when its length is 0 or NaN); the length sum
   is the original's (y, x, z) order. */
static void normalise(float n[3])
{
    float length = sqrt_float((n[1] * n[1] + n[0] * n[0]) + n[2] * n[2]);

    if (is_zero_or_nan_quiet(length)) {
        n[0] = n[1] = n[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        n[0] = n[0] * inverse;
        n[1] = n[1] * inverse;
        n[2] = n[2] * inverse;
    }
}

static void keep_hit(float hit[7], const float point[3], const float n[3], float t)
{
    hit[0] = point[0];
    hit[2] = point[2];
    hit[1] = point[1];
    hit[3] = n[0];
    hit[4] = n[1];
    hit[5] = n[2];
    hit[6] = t;
}

/* The two triangles of cell (x, z) of a tile. The original computes their
   normals with the terms it knows to be zero left out; so does this. */
static void test_cell(float hit[7], const TerrainTile *tile, int x, int z, const float from[3], const float to[3])
{
    const float *h = &tile->heights[(uint32_t)(z * TERRAIN_ROW + x)];
    float x0 = (float)x, x1 = (float)(x + 1), z0 = (float)z, z1 = (float)(z + 1);
    float a[3], b[3], c[3], n[3], point[3], t;

    /* (x, z), (x + 1, z), (x + 1, z + 1) */
    a[0] = x0 + tile->origin[0];
    a[1] = tile->origin[1] + h[0];
    a[2] = tile->origin[2] + z0;
    b[0] = tile->origin[0] + x1;
    b[1] = tile->origin[1] + h[1];
    b[2] = tile->origin[2] + z0;
    c[0] = tile->origin[0] + x1;
    c[1] = tile->origin[1] + h[TERRAIN_ROW + 1];
    c[2] = tile->origin[2] + z1;
    {
        float dx = b[0] - a[0], rise_b = b[1] - a[1], rise_c = c[1] - a[1], dz = c[2] - a[2];
        n[0] = -(rise_b * dz);
        n[1] = dx * dz;
        n[2] = dx * rise_b - rise_c * dx;
    }
    normalise(n);
    if (collision_line_triangle(point, n, &t, from, to, a, b, c) && !(t >= hit[6]))
        keep_hit(hit, point, n, t);

    /* (x, z), (x + 1, z + 1), (x, z + 1) */
    a[0] = x0 + tile->origin[0];
    a[1] = tile->origin[1] + h[0];
    a[2] = tile->origin[2] + z0;
    b[0] = tile->origin[0] + x1;
    b[1] = tile->origin[1] + h[TERRAIN_ROW + 1];
    b[2] = tile->origin[2] + z1;
    c[0] = x0 + tile->origin[0];
    c[1] = tile->origin[1] + h[TERRAIN_ROW];
    c[2] = tile->origin[2] + z1;
    {
        float dx = b[0] - a[0], rise_b = b[1] - a[1], rise_c = c[1] - a[1], dz = b[2] - a[2];
        n[0] = rise_c * dz - rise_b * dz;
        n[1] = dx * dz;
        n[2] = -(rise_c * dx);
    }
    normalise(n);
    if (collision_line_triangle(point, n, &t, from, to, a, b, c) && !(t >= hit[6]))
        keep_hit(hit, point, n, t);
}

int collision_sweep_terrain(float hit[7], const float from[3], const float to[3])
{
    int32_t start[3], end[3], direction[3];
    float reach[3];
    /* Walk terms: across[k] and along[k] start as |delta| and are adjusted
       by each axis's offset in its cell; y's delta is taken as 0. */
    float across[3], along[3];
    int32_t steps, limit;

    for (int k = 0; k < 3; k++) {
        float delta = to[k] - from[k];

        start[k] = truncate_float(from[k] - terrain_origin[k]);
        end[k] = truncate_float(to[k] - terrain_origin[k]);
        if (k == 1)
            delta = 0.0f;
        direction[k] = delta > 0.0f ? 1 : -1;
        reach[k] = __builtin_fabsf(delta);
        across[k] = reach[k];
        along[k] = reach[k];
    }
    {
        float s = cell_offset(from[0], direction[0]);
        across[0] = reach[1] * s - across[0];
        along[0] = reach[2] * s - along[0];
        s = cell_offset(from[1], direction[1]);
        across[1] = reach[0] * s - across[1];
        along[1] = reach[2] * s - along[1];
        s = cell_offset(from[2], direction[2]);
        hit[6] = 1.0f;
        across[2] = reach[0] * s - across[2];
        along[2] = reach[1] * s - along[2];
    }

    steps = add_int(absolute(subtract_int(end[0], start[0])), absolute(subtract_int(end[2], start[2])));
    if (steps > 0x4000) {
        limit = 0x4000;
    } else {
        limit = steps;
        if (steps < 0)
            return 0;
    }

    for (int32_t i = 0; i <= limit; i++) {
        int32_t x = start[0], z = start[2];
        uint32_t tile_x = (uint32_t)(x >> 11), tile_z = (uint32_t)(z >> 11);

        if (tile_x <= 7 && tile_z <= 7) {
            uint32_t quad_x = (uint32_t)(x >> 2), quad_z = (uint32_t)(z >> 2);

            if (quad_x <= 0xFFF && quad_z <= 0xFFF) {
                uint32_t word = terrain_solid[(int32_t)(((int32_t)quad_z >> 2 << 10) + ((int32_t)quad_x >> 2))];
                uint32_t bit = (quad_x & 3) + 4 * (quad_z & 3);

                if (word >> bit & 1)
                    test_cell(hit, &terrain_tiles[(int32_t)(tile_x + tile_z * 8)], x & 0x7FF, z & 0x7FF, from, to);
            }
        }
        if (1.0f > hit[6])
            return 1;
        if (start[0] == end[0] && start[2] == end[2])
            return 0;
        if (across[2] > along[0] && !(across[0] >= across[1])) {
            start[0] += direction[0];
            across[0] += reach[1];
            across[1] -= reach[1];
            across[2] -= reach[2];
            along[0] += reach[2];
        } else if (along[1] > along[2]) {
            start[2] += direction[2];
            across[2] += reach[0];
            along[0] -= reach[0];
            along[1] -= reach[1];
            along[2] += reach[1];
        } else {
            start[1] += direction[1];
            across[0] -= reach[0];
            across[1] += reach[0];
            along[1] += reach[2];
            along[2] -= reach[2];
        }
    }
    return 0;
}
