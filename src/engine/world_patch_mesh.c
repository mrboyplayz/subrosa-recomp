/* Bezier patches tessellated into the scratch shape: a 4 x 4 grid of control
 * points (with texture coordinates) becomes a grid of points with normals and
 * tangents, and quads over it with the patch's flags.
 */
#include "world.h"

/* The scratch shape (see world_shape_build.c). */
#define build_point_count SR_GLOBAL(int32_t, 0x1510AB760ULL)
#define build_points (&SR_GLOBAL(float, 0x1511AB764ULL))       /* x y z each */
#define build_normals (&SR_GLOBAL(float, 0x1511DB764ULL))
#define build_tangents (&SR_GLOBAL(float, 0x15120B764ULL))
#define build_coordinates (&SR_GLOBAL(float, 0x15123B764ULL))  /* u v (third unused) per point */
#define build_quad_count SR_GLOBAL(int32_t, 0x1512DB764ULL)
#define build_quads (&SR_GLOBAL(int32_t, 0x1512DB768ULL))
#define build_quad_flags (&SR_GLOBAL(uint32_t, 0x15131B768ULL))
#define build_quad_unknown (&SR_GLOBAL(int32_t, 0x15133B768ULL))

/* The patch builder's control grid (4 x 4 points, x y z), shared with its
   callers, and the curves one row of the tessellation runs along: per grid
   column the point, the slope across the rows and the texture coordinates. */
#define patch_grid (&SR_GLOBAL(float, 0x14500A5C0ULL))
#define row_slopes (&SR_GLOBAL(float, 0x14500A3E0ULL))      /* [4][3] */
#define row_coordinates (&SR_GLOBAL(float, 0x14500A420ULL)) /* [4][2] */
#define row_points (&SR_GLOBAL(float, 0x14500A440ULL))      /* [4][3] */

/* Bezier curve of order 1-3 through p0 .. p3 at t (order 1 uses p0 and p3,
   order 2 p0, p1 and p3). Other orders: the original returns whatever its
   stack slot held; 0 here. 0x140187180 */
float patch_bezier(int order, float t, float p0, float p1, float p2, float p3)
{
    float s = 1.0f - t;

    if (order == 1)
        return s * p0 + t * p3;
    if (order == 2)
        return ((p1 + p1) * s + t * p3) * t + (s * p0) * s;
    if (order == 3)
        return ((s * s) * (p1 * 3.0f) + ((p2 * 3.0f) * s + t * p3) * t) * t + ((s * p0) * s) * s;
    return 0.0f;
}

/* Its derivative along t. 0x1401872F0 */
float patch_bezier_slope(int order, float t, float p0, float p1, float p2, float p3)
{
    float twice_t = t + t;

    if (order == 1)
        return p3 - p0;
    if (order == 2)
        return ((p0 - (p1 + p1)) + p3) * twice_t - (p0 + p0) + (p1 + p1);
    if (order == 3)
        return ((((p1 * 3.0f - p0) - p2 * 3.0f) + p3) * t) * (t * 3.0f) +
               ((p0 * 3.0f - p1 * 6.0f) + p2 * 3.0f) * twice_t - p0 * 3.0f + p1 * 3.0f;
    return 0.0f;
}

uint32_t world_patch_grid_turn(int turns, uint32_t side_code)
{
    for (int n = 0; n < turns; n++) {
        for (int i = 0; i < 16; i++) {
            float *p = &patch_grid[3 * i];
            float x = p[0];

            p[0] = 1.0f - p[2];
            p[2] = x;
        }
        switch (side_code) {
        case 0x60000: side_code = 0x10000; break;
        case 0x10000: side_code = 0x50000; break;
        case 0x50000: side_code = 0x20000; break;
        case 0x20000: side_code = 0x60000; break;
        }
    }
    return side_code;
}

/* (x, y, z) scaled to unit length; zero when its length is zero or NaN. */
static void unit(float *out, float x, float y, float z)
{
    float length = __builtin_sqrtf((x * x + y * y) + z * z);

    if (length == 0.0f || length != length) {
        out[0] = out[1] = out[2] = 0.0f;
        return;
    }
    float inverse = 1.0f / length;
    out[0] = inverse * x;
    out[1] = inverse * y;
    out[2] = inverse * z;
}

/* Appends a copy of point `from` (position, texture coordinates, normal,
   tangent, copied as raw words); returns its index. */
static int32_t copy_point(int32_t from)
{
    int32_t to = build_point_count;
    uint32_t *points = (uint32_t *)build_points, *coordinates = (uint32_t *)build_coordinates;
    uint32_t *normals = (uint32_t *)build_normals, *tangents = (uint32_t *)build_tangents;

    for (int k = 0; k < 3; k++)
        points[3 * to + k] = points[3 * from + k];
    for (int k = 0; k < 2; k++)
        coordinates[3 * to + k] = coordinates[3 * from + k];
    for (int k = 0; k < 3; k++)
        normals[3 * to + k] = normals[3 * from + k];
    for (int k = 0; k < 3; k++)
        tangents[3 * to + k] = tangents[3 * from + k];
    build_point_count = to + 1;
    return to;
}

void world_patch_tessellate(const float *points, const float *coordinates, int steps_u, int order_u, int steps_v,
                            int order_v, uint32_t flags)
{
    int32_t first = build_point_count;
    float step_u = 1.0f / (float)steps_u, step_v = 1.0f / (float)steps_v;
    float v = 0.0f;

    /* The grid of points, row by row (steps_v + 1 rows of steps_u + 1). */
    for (int row = 0; row <= steps_v; row++) {
        float u = 0.0f;

        for (int c = 0; c < 4; c++) {
            const float *p = &points[3 * c];   /* column c of the control grid, rows 12 floats apart */
            const float *uv0 = &coordinates[2 * c], *uv3 = &coordinates[24 + 2 * c];

            for (int k = 0; k < 3; k++)
                row_points[3 * c + k] = patch_bezier(order_v, v, p[k], p[12 + k], p[24 + k], p[36 + k]);
            for (int k = 0; k < 2; k++)
                row_coordinates[2 * c + k] = v * uv3[k] + (1.0f - v) * uv0[k];
            for (int k = 0; k < 3; k++)
                row_slopes[3 * c + k] = patch_bezier_slope(order_v, v, p[k], p[12 + k], p[24 + k], p[36 + k]);
        }
        for (int column = 0; column <= steps_u; column++) {
            int32_t n = build_point_count;
            const float *q = row_points, *d = row_slopes;
            float across[3], along[3];

            for (int k = 0; k < 3; k++)
                build_points[3 * n + k] = patch_bezier(order_u, u, q[k], q[3 + k], q[6 + k], q[9 + k]);
            for (int k = 0; k < 2; k++)
                build_coordinates[3 * n + k] = row_coordinates[k] * (1.0f - u) + row_coordinates[6 + k] * u;
            for (int k = 0; k < 3; k++)
                along[k] = patch_bezier_slope(order_u, u, q[k], q[3 + k], q[6 + k], q[9 + k]);
            for (int k = 0; k < 3; k++)
                across[k] = patch_bezier(order_u, u, d[k], d[3 + k], d[6 + k], d[9 + k]);
            /* normal: across x along, then unit length; tangent: along */
            build_normals[3 * n + 0] = across[1] * along[2] - across[2] * along[1];
            build_normals[3 * n + 1] = along[0] * across[2] - across[0] * along[2];
            build_normals[3 * n + 2] = across[0] * along[1] - along[0] * across[1];
            unit(&build_normals[3 * n], build_normals[3 * n], build_normals[3 * n + 1], build_normals[3 * n + 2]);
            unit(&build_tangents[3 * n], along[0], along[1], along[2]);
            u = u + step_u;
            build_point_count = n + 1;
        }
        v = v + step_v;
    }

    /* Quads over the grid. Each quad has its own copy of its corners
       (row, column) and (row, column + 1) except in the first row, and of
       (row + 1, column) except in the first column; (row + 1, column + 1)
       is always shared. */
    for (int row = 0; row < steps_v; row++) {
        int32_t at = first + row * (steps_u + 1);   /* grid point (row, 0) */

        for (int column = 0; column < steps_u; column++) {
            int32_t below = at + column, next_row = below + steps_u + 1;
            int32_t *quad = &build_quads[4 * build_quad_count];

            quad[0] = row == 0 && column == 0 ? below : copy_point(below);
            quad[1] = row == 0 ? below + 1 : copy_point(below + 1);
            quad[2] = next_row + 1;
            quad[3] = column == 0 ? next_row : copy_point(next_row);
            build_quad_flags[build_quad_count] = flags;
            build_quad_unknown[build_quad_count] = 0;
            build_quad_count++;
        }
    }
}
