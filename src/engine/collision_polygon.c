#include "collision.h"

/* Signed edge test in the face plane. Keep each product and sum in the
   native order. COMISS/JB rejects negative and unordered edge values. */
static float edge_side(const float point[3], const float normal[3],
                       const float start[3], const float end[3])
{
    float x = point[0] - start[0];
    float y = point[1] - start[1];
    float z = point[2] - start[2];
    float ex = end[0] - start[0];
    float ey = end[1] - start[1];
    float ez = end[2] - start[2];
    return ((y * ez - z * ey) * normal[0]
            + (z * ex - x * ez) * normal[1])
            + (x * ey - y * ex) * normal[2];
}

int collision_line_quad(float point[3], const float normal[3], float *fraction,
                        const float from[3], const float to[3],
                        const float a[3], const float b[3], const float c[3], const float d[3])
{
    if (!collision_line_plane(point, normal, fraction, from, to, a))
        return 0;
    if (!(edge_side(point, normal, a, b) >= 0.0f))
        return 0;
    if (!(edge_side(point, normal, b, c) >= 0.0f))
        return 0;
    return edge_side(point, normal, c, d) >= 0.0f
        && edge_side(point, normal, d, a) >= 0.0f;
}

int collision_segment_triangle(float point[3], const float normal[3], float *fraction,
                               const float from[3], const float to[3],
                               const float a[3], const float b[3], const float c[3])
{
    if (!collision_segment_plane(point, normal, fraction, from, to, a))
        return 0;
    if (!(edge_side(point, normal, a, b) >= 0.0f))
        return 0;
    if (!(edge_side(point, normal, b, c) >= 0.0f))
        return 0;
    return edge_side(point, normal, c, a) >= 0.0f;
}
