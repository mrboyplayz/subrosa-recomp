/* A ray against a vehicle whose body is made of physics points (a soft
 * body): its faces are triangles and quads over the vehicle's points, each
 * corner either a point or a point moved part of the way toward another.
 * Vehicles of a rigid type, and the wheels, use the other tests.
 */
#include <string.h>
#include "arith.h"
#include "collision.h"
#include "physics.h"
#include "world.h"

/* 0x40 bytes each, from vehicle + 0x7FC; count at vehicle + 0x7F8. */
typedef struct SoftFace {
    int32_t corner_count;                /* 4: a quad, tested as triangles a b c and a c d */
    int32_t corner[4];                   /* slots of the vehicle's point list */
    int32_t blend[4];                    /* slot each corner moves toward, -1: none */
    float weight[4];                     /* how far it moves */
    uint8_t unknown_34[0x3C - 0x34];
    int32_t active;                      /* above 0: the face collides */
} SoftFace;

_Static_assert(sizeof(SoftFace) == 0x40, "SoftFace size");

#define vehicle_type(v) SR_GLOBAL(int32_t, 0x15F2D9204ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define vehicle_bounds_min(v) (&SR_GLOBAL(float, 0x15F2D92B0ULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
#define vehicle_bounds_max(v) (&SR_GLOBAL(float, 0x15F2D92BCULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
#define vehicle_soft_face_count(v) SR_GLOBAL(int32_t, 0x15F2D99F8ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define vehicle_soft_faces(v) (&SR_GLOBAL(SoftFace, 0x15F2D99FCULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
/* For a slot, the slot whose point a hit reports (16 bytes per slot from vehicle + 0x2E0C). */
#define vehicle_slot_reported(v, slot) \
    SR_GLOBAL(int32_t, 0x15F2DC00CULL + 0x5168ULL * (uint64_t)(int64_t)(v) + 16ULL * (uint64_t)(int64_t)(slot))
/* Vehicle types whose body is rigid (0x1400DFB70 tests those). */
#define vehicle_type_rigid(type) SR_GLOBAL(int32_t, 0x192E9A680ULL + 0x185C0ULL * (uint64_t)(int64_t)(type))

static void corner_position(float out[3], int vehicle, const SoftFace *face, int k)
{
    const float *p = physics_points[world_vehicle_points(vehicle)[face->corner[k]]].position;

    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    if (face->blend[k] != -1) {
        const float *q = physics_points[world_vehicle_points(vehicle)[face->blend[k]]].position;
        float w = face->weight[k];
        out[0] = (q[0] - p[0]) * w + p[0];
        out[1] = (q[1] - p[1]) * w + p[1];
        out[2] = (q[2] - p[2]) * w + p[2];
    }
}

/* (c - a) x (b - a), unit (zero when its length is 0 or NaN). */
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

/* Which side of the edge from `start` to `end` point p lies, seen along n. */
static float edge_side(const float start[3], const float end[3], const float p[3], const float n[3])
{
    float ex = end[0] - start[0], ey = end[1] - start[1], ez = end[2] - start[2];
    float qx = p[0] - start[0], qy = p[1] - start[1], qz = p[2] - start[2];

    return ((ez * qy - ey * qz) * n[0] + (ex * qz - ez * qx) * n[1]) + (ey * qx - ex * qy) * n[2];
}

static float plane_distance(const float a[3], const float p[3], const float n[3])
{
    return ((a[1] - p[1]) * n[1] + (a[0] - p[0]) * n[0]) + (a[2] - p[2]) * n[2];
}

static void store_float(uint32_t *word, float value)
{
    memcpy(word, &value, 4);
}

static void test_triangle(int vehicle, int face_index, const float a[3], const float b[3], const float c[3],
                          const int32_t slot[3], const float from[3], const float to[3])
{
    float n[3], dir[3], p[3], to_side, from_side, denominator, t;

    face_normal(n, a, b, c);
    to_side = plane_distance(a, to, n);
    from_side = plane_distance(a, from, n);
    /* Both ends on the same side misses; a NaN start counts as behind. */
    if (from_side > 0.0f) {
        if (to_side > 0.0f)
            return;
    } else if (!(from_side >= 0.0f) && !(to_side >= 0.0f)) {
        return;
    }
    dir[0] = to[0] - from[0];
    dir[1] = to[1] - from[1];
    dir[2] = to[2] - from[2];
    denominator = (dir[1] * n[1] + dir[0] * n[0]) + dir[2] * n[2];
    if (is_zero_or_nan_quiet(denominator))
        return;
    t = from_side / denominator;
    p[0] = t * dir[0] + from[0];
    p[1] = t * dir[1] + from[1];
    p[2] = t * dir[2] + from[2];
    if (!(edge_side(a, b, p, n) >= 0.0f) || !(edge_side(b, c, p, n) >= 0.0f) || !(edge_side(c, a, p, n) >= 0.0f))
        return;
    if (t >= collision_hit.fraction)
        return;

    collision_hit.point[0] = p[0];
    collision_hit.point[1] = p[1];
    collision_hit.point[2] = p[2];
    collision_hit.normal[0] = n[0];
    collision_hit.normal[1] = n[1];
    collision_hit.normal[2] = n[2];
    collision_hit.fraction = t;
    collision_hit.part = face_index;
    for (int k = 0; k < 3; k++)
        collision_hit.unknown_34[k] = world_vehicle_points(vehicle)[vehicle_slot_reported(vehicle, slot[k])];
    collision_triangle_weights(collision_hit.weights, collision_hit.point, a, b, c);
    {
        const float *w = collision_hit.weights;
        const float *v0 = physics_points[collision_hit.unknown_34[0]].velocity;
        const float *v1 = physics_points[collision_hit.unknown_34[1]].velocity;
        const float *v2 = physics_points[collision_hit.unknown_34[2]].velocity;
        /* The velocity of the surface at the hit. */
        store_float(&collision_hit.unknown_20[0], (w[0] * v0[0] + w[1] * v1[0]) + w[2] * v2[0]);
        store_float(&collision_hit.unknown_20[2], (w[1] * v1[2] + w[0] * v0[2]) + w[2] * v2[2]);
        store_float(&collision_hit.unknown_20[1], (w[1] * v1[1] + w[0] * v0[1]) + w[2] * v2[1]);
    }
}

int collision_ray_soft_vehicle(int vehicle, const float from[3], const float to[3], int wheels)
{
    const float *low = vehicle_bounds_min(vehicle), *high = vehicle_bounds_max(vehicle);

    if (vehicle_type_rigid(vehicle_type(vehicle)))
        return collision_ray_vehicle(vehicle, from, to, wheels);
    for (int k = 0; k < 3; k++)
        if (!(from[k] >= low[k]) && low[k] > to[k])
            return 0;
    for (int k = 0; k < 3; k++)
        if (from[k] > high[k] && !(high[k] >= to[k]))
            return 0;
    collision_hit.fraction = 1.0f;

    for (int f = 0; f < vehicle_soft_face_count(vehicle); f++) {
        const SoftFace *face = &vehicle_soft_faces(vehicle)[f];
        float a[3], b[3], c[3];

        if (face->active <= 0)
            continue;
        corner_position(a, vehicle, face, 0);
        corner_position(b, vehicle, face, 1);
        corner_position(c, vehicle, face, 2);
        {
            int32_t slot[3] = { face->corner[0], face->corner[1], face->corner[2] };
            test_triangle(vehicle, f, a, b, c, slot, from, to);
        }
        if (face->corner_count == 4) {
            float d[3];
            int32_t slot[3] = { face->corner[0], face->corner[2], face->corner[3] };

            corner_position(d, vehicle, face, 3);
            test_triangle(vehicle, f, a, c, d, slot, from, to);
        }
    }

    if (wheels)
        for (int w = 0; w < vehicle_wheel_count(vehicle); w++) {
            float point[3], normal[3], t;

            if (!collision_ray_sphere(point, normal, &t, from, to, vehicle_wheel_point(vehicle, w),
                                      vehicle_wheel_radius(vehicle, w)) ||
                t >= collision_hit.fraction)
                continue;
            collision_hit.point[0] = point[0];
            collision_hit.point[1] = point[1];
            collision_hit.point[2] = point[2];
            collision_hit.normal[0] = normal[0];
            collision_hit.normal[1] = normal[1];
            collision_hit.normal[2] = normal[2];
            collision_hit.fraction = t;
            collision_hit.part = -1;
            collision_hit.unknown_34[0] = w;
        }
    return !(collision_hit.fraction >= 1.0f);
}
