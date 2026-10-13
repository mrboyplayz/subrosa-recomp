/* The faces of a cube block as surface patches for its mesh.
 */
#include <string.h>
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Flags for a face of a block turned `turn` quarter turns (side code: the
   face's side in bits 16-18). */
extern long long sub_14001B5C0(int turn, int side_code);
/* Tessellates a patch: control points, texture coordinates, steps and
   order along each direction, flags (texture in the low bits). */
extern long long sub_140001F20(float *points, float *coordinates, int steps_x, int order_x, int steps_y,
                               int order_y, int flags);

/* The patch builder's control points (a 4 x 4 grid of x y z) and texture
   coordinates. */
#define patch_points (&SR_GLOBAL(float, 0x14500A5C0ULL))
#define patch_coordinates (&SR_GLOBAL(float, 0x14500A680ULL))

/* A unit cube's corners and faces (0x1402B34F0 and 0x1402B3660). */
static const float cube_corner[8][3] = {
    { 0, 0, 0 }, { 1, 0, 0 }, { 1, 0, 1 }, { 0, 0, 1 }, { 0, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 }, { 0, 1, 1 },
};
static const int cube_face[6][4] = {
    { 3, 2, 1, 0 }, { 7, 6, 2, 3 }, { 4, 7, 3, 0 }, { 5, 4, 0, 1 }, { 6, 5, 1, 2 }, { 4, 5, 6, 7 },
};
/* The side codes 0x14001B5C0 takes, by face. */
static const int face_side_code[6] = { 0x30000, 0x60000, 0x10000, 0x50000, 0x20000, 0x40000 };

/* Grid point (row, column) of the control grid. */
static float *grid_point(int row, int column)
{
    return &patch_points[3 * (4 * row + column)];
}

static void place_corner(float *out, int corner, const float origin[3], const float scale[3])
{
    out[0] = scale[0] * cube_corner[corner][0] + origin[0];
    out[1] = scale[1] * cube_corner[corner][1] + origin[1];
    out[2] = scale[2] * cube_corner[corner][2] + origin[2];
}

void world_block_cube_patches(int turn, const float origin[3], const float scale[3], uint32_t faces,
                              const int32_t textures[6])
{
    uint32_t bit = 1;

    for (int f = 0; f < 6; f++, bit = bit << 1 | bit >> 31) {
        int32_t texture;
        uint32_t flags;

        if ((faces & bit) != bit)
            continue;
        place_corner(grid_point(0, 0), cube_face[f][0], origin, scale);
        place_corner(grid_point(0, 3), cube_face[f][1], origin, scale);
        place_corner(grid_point(3, 3), cube_face[f][2], origin, scale);
        place_corner(grid_point(3, 0), cube_face[f][3], origin, scale);
        flags = (uint32_t)sub_14001B5C0(turn, face_side_code[f]);
        texture = textures[f];
        /* Textures 1-4 and 9-12 come in four turned versions. */
        if ((uint32_t)(texture - 1) <= 3)
            texture = (int32_t)((((uint32_t)(texture - 1) + (uint32_t)turn) & 3) + 1);
        if ((uint32_t)(texture - 9) <= 3)
            texture = (int32_t)((((uint32_t)(texture - 1) + (uint32_t)turn) & 3) + 9);
        sub_140001F20(patch_points, patch_coordinates, 1, 1, 1, 1, (int)(flags | (uint32_t)texture));
    }
}

/* The scratch shape (see world_shape_build.c). */
#define build_point_count SR_GLOBAL(int32_t, 0x1510AB760ULL)
#define build_points (&SR_GLOBAL(uint32_t, 0x1511AB764ULL))     /* x y z each, copied as raw words */
#define build_normals (&SR_GLOBAL(float, 0x1511DB764ULL))
#define build_quad_count SR_GLOBAL(int32_t, 0x1512DB764ULL)
#define build_quads (&SR_GLOBAL(int32_t, 0x1512DB768ULL))
#define build_quad_flags (&SR_GLOBAL(uint32_t, 0x15131B768ULL))
#define build_quad_unknown (&SR_GLOBAL(int32_t, 0x15133B768ULL))

/* The cube side a unit normal faces most (0x10000 .. 0x60000, see
   world_block_cube_patches()). COMISS: a NaN component fails every `>` test
   and passes every `<` test. */
static uint32_t facing_side(const float n[3])
{
    if (n[1] > 0.707f)
        return 0x40000;
    if (!(n[1] >= -0.707f))
        return 0x30000;
    if (n[0] > 0.707f)
        return 0x20000;
    if (!(n[0] >= -0.707f))
        return 0x10000;
    return n[2] > 0.707f ? 0x60000 : 0x50000;
}

void world_block_cube_quads(const float corners[8][3], uint32_t flags, uint32_t faces)
{
    uint32_t bit = 1;

    for (int f = 0; f < 6; f++, bit = bit << 1 | bit >> 31) {
        const float *p0 = corners[cube_face[f][0]], *p1 = corners[cube_face[f][1]], *p2 = corners[cube_face[f][2]];
        float e1[3], e2[3], n[3], unit_n[3], length;
        int32_t first;

        if ((faces & bit) != bit)
            continue;
        for (int k = 0; k < 3; k++) {
            e1[k] = p1[k] - p0[k];
            e2[k] = p2[k] - p0[k];
        }
        /* e2 x e1 */
        n[0] = e2[1] * e1[2] - e2[2] * e1[1];
        n[1] = e2[2] * e1[0] - e2[0] * e1[2];
        n[2] = e2[0] * e1[1] - e2[1] * e1[0];
        length = __builtin_sqrtf((n[1] * n[1] + n[0] * n[0]) + n[2] * n[2]);
        if (length == 0.0f || length != length) {
            unit_n[0] = unit_n[1] = unit_n[2] = 0.0f;
        } else {
            float inverse = 1.0f / length;
            unit_n[0] = inverse * n[0];
            unit_n[1] = inverse * n[1];
            unit_n[2] = inverse * n[2];
        }
        /* four points of their own, the corners with the face normal */
        first = build_point_count;
        for (int c = 0; c < 4; c++) {
            int32_t at = build_point_count;

            memcpy(&build_points[3 * at], corners[cube_face[f][c]], 12);
            for (int k = 0; k < 3; k++)
                build_normals[3 * at + k] = unit_n[k];
            build_point_count = at + 1;
        }
        for (int c = 0; c < 4; c++)
            build_quads[4 * build_quad_count + c] = first + c;
        build_quad_flags[build_quad_count] = flags | facing_side(unit_n);
        build_quad_unknown[build_quad_count] = 0;
        build_quad_count++;
    }
}
