/* Segments against placed item meshes (the grouped format of
 * collision_placed.h, points already placed in world axes).
 */
#include "arith.h"
#include "collision_placed.h"

int collision_segment_placed_mesh(float hit[7], const PlacedMesh *mesh, const float (*points)[3], const float from[3],
                                  const float to[3])
{
    hit[6] = 1.0f;
    if (mesh->group_count <= 0)
        return 0;
    for (int g = 0; g < mesh->group_count; g++) {
        const PlacedMeshGroup *group = &mesh->groups[g];

        for (int f = 0; f < group->face_count; f++) {
            const CollisionMeshFace *face = &group->faces[f];
            const float *a = points[face->corner[0]], *b = points[face->corner[1]], *c = points[face->corner[2]];
            float e1x = b[0] - a[0], e1y = b[1] - a[1], e1z = b[2] - a[2];
            float e2x = c[0] - a[0], e2y = c[1] - a[1], e2z = c[2] - a[2];
            float n[3], point[3], t, length;

            n[0] = e2y * e1z - e2z * e1y;
            n[1] = e2z * e1x - e2x * e1z;
            n[2] = e2x * e1y - e2y * e1x;
            length = sqrt_float((n[1] * n[1] + n[0] * n[0]) + n[2] * n[2]);
            if (is_zero_or_nan_quiet(length)) {
                n[0] = n[1] = n[2] = 0.0f;
            } else {
                float inverse = 1.0f / length;
                n[0] = n[0] * inverse;
                n[2] = n[2] * inverse;
                n[1] = n[1] * inverse;
            }
            for (int half = 0; half < 2; half++) {
                int found;

                if (half == 0)
                    found = collision_line_triangle(point, n, &t, from, to, a, b, c);
                else if (group->faces[f].corner_count == 4)
                    found = collision_line_triangle(point, n, &t, from, to, a, c, points[face->corner[3]]);
                else
                    break;
                if (!found || t >= hit[6])
                    continue;
                hit[0] = point[0];
                hit[2] = point[2];
                hit[1] = point[1];
                hit[3] = n[0];
                hit[4] = n[1];
                hit[5] = n[2];
                hit[6] = t;
            }
        }
    }
    return !(hit[6] >= 1.0f);
}
