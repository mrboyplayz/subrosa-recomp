/* Segments against the faces of single voxel cells. */
#include "collision.h"

/* A unit cube's corners and faces, as the original's tables at 0x1402B34F0
   (corners), 0x1402B3550 (normals) and 0x1402B3660 (faces) have them. */
static const float cube_corner[8][3] = {
    { 0, 0, 0 }, { 1, 0, 0 }, { 1, 0, 1 }, { 0, 0, 1 }, { 0, 1, 0 }, { 1, 1, 0 }, { 1, 1, 1 }, { 0, 1, 1 },
};
static const float cube_normal[6][3] = {
    { 0, -1, 0 }, { 0, 0, 1 }, { -1, 0, 0 }, { 0, 0, -1 }, { 1, 0, 0 }, { 0, 1, 0 },
};
static const int cube_face[6][4] = {
    { 3, 2, 1, 0 }, { 7, 6, 2, 3 }, { 4, 7, 3, 0 }, { 5, 4, 0, 1 }, { 6, 5, 1, 2 }, { 4, 5, 6, 7 },
};

/* The face of the cell the last cell test hit. */
#define collision_hit_face SR_GLOBAL(int32_t, 0x151A848ECULL)

static void corner(float out[3], const float cell[3], int index, float scale)
{
    out[0] = (cell[0] + cube_corner[index][0]) * scale;
    out[1] = (cell[1] + cube_corner[index][1]) * scale;
    out[2] = (cell[2] + cube_corner[index][2]) * scale;
}

int collision_segment_cell(float point[3], float normal[3], float *t, const float from[3], const float to[3],
                           const int32_t voxel[3], uint32_t faces, float scale)
{
    float cell[3] = { (float)voxel[0], (float)voxel[1], (float)voxel[2] };

    for (int f = 0; f < 6; f++) {
        float a[3], b[3], c[3];

        if (!((faces >> f & 1) && (faces & (0x40u << f))))
            continue;
        corner(a, cell, cube_face[f][0], scale);
        corner(b, cell, cube_face[f][1], scale);
        corner(c, cell, cube_face[f][2], scale);
        normal[0] = cube_normal[f][0];
        normal[1] = cube_normal[f][1];
        normal[2] = cube_normal[f][2];
        if (!collision_line_triangle(point, normal, t, from, to, a, b, c)) {
            corner(b, cell, cube_face[f][2], scale);
            corner(c, cell, cube_face[f][3], scale);
            if (!collision_line_triangle(point, normal, t, from, to, a, b, c))
                continue;
        }
        collision_hit_face = f;
        return 1;
    }
    return 0;
}
