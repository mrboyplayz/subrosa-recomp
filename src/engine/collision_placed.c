#include <string.h>
#include "arith.h"
#include "collision_placed.h"

/* The radius occupies the sixth argument's stack slot as float bits. */
extern uint32_t sr_collision_sphere_triangle(float point[3], float normal[3], float *distance,
                             const float from[3], const float to[3], uint64_t radius_bits,
                             const float a[3], const float b[3], const float c[3]);

uintptr_t collision_place_mesh(float (*out)[3], const PlacedMesh *mesh,
                               const float position[3], const float r[9])
{
    uintptr_t result = (uintptr_t)out;
    for (int i = 0; i < mesh->point_count; i++) {
        const float *v = mesh->points[i];
        float x = v[0], y = v[1], z = v[2];
        result = (uintptr_t)mesh->points - (uintptr_t)out - 8u;
        /* This grouping differs from the convex-mesh transform. */
        out[i][0] = (x * r[0] + z * r[6]) + (y * r[3] + position[0]);
        out[i][1] = (z * r[7] + x * r[1]) + (y * r[4] + position[1]);
        out[i][2] = (z * r[8] + x * r[2]) + (y * r[5] + position[2]);
    }
    return result;
}

static void keep_capsule_hit(PlacedMeshHit *hit, const float point[3], const float normal[3], float distance)
{
    if (distance > hit->distance) {
        memcpy(hit->point, point, sizeof hit->point);
        memcpy(hit->normal, normal, sizeof hit->normal);
        hit->distance = distance;
    }
}

int collision_capsule_placed_mesh(PlacedMeshHit *hit, const PlacedMesh *mesh,
                                  const float (*placed)[3], const float from[3],
                                  const float to[3], float radius)
{
    uint32_t radius_bits;
    memcpy(&radius_bits, &radius, sizeof radius_bits);
    hit->distance = 0.0f;
    for (int group = 0; group < mesh->group_count; group++) {
        const PlacedMeshGroup *g = &mesh->groups[group];
        for (int face = 0; face < g->face_count; face++) {
            const CollisionMeshFace *f = &g->faces[face];
            float a[3], b[3], c[3], d[3];
            memcpy(a, placed[f->corner[0]], sizeof a);
            memcpy(b, placed[f->corner[1]], sizeof b);
            memcpy(c, placed[f->corner[2]], sizeof c);
            float u[3] = {b[0] - a[0], b[1] - a[1], b[2] - a[2]};
            float v[3] = {c[0] - a[0], c[1] - a[1], c[2] - a[2]};
            float nx = v[1] * u[2] - v[2] * u[1];
            float ny = v[2] * u[0] - v[0] * u[2];
            float nz = v[0] * u[1] - v[1] * u[0];
            float length = sqrt_float((ny * ny + nx * nx) + nz * nz);
            float normal[3] = {0.0f, 0.0f, 0.0f}, point[3], distance;
            /* UCOMISS + JE: quiet NaNs also take the zero branch. */
            if (!is_zero_or_nan_quiet(length)) {
                float inverse = 1.0f / length;
                normal[0] = nx * inverse;
                normal[1] = ny * inverse;
                normal[2] = nz * inverse;
            }
            if (f->corner_count == 4)
                memcpy(d, placed[f->corner[3]], sizeof d);
            if (sr_collision_sphere_triangle(point, normal, &distance, from, to, radius_bits, a, b, c))
                keep_capsule_hit(hit, point, normal, distance);
            /* The helper may change the face list or its corner count. */
            if (g->faces[face].corner_count == 4 &&
                sr_collision_sphere_triangle(point, normal, &distance, from, to, radius_bits, a, c, d))
                keep_capsule_hit(hit, point, normal, distance);
        }
    }
    return hit->distance > 0.0f;
}
