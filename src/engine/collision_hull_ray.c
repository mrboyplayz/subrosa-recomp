/* A ray against a vehicle's hull. See vehicle.h. */
#include "vehicle.h"
#include "collision.h"
#include "arith.h"

#define HULL_VERTEX_CAPACITY 256

/* Whether both ends of the ray lie outside the vehicle's box on one side. A
   coordinate that is not a number counts as below the box at the start of
   the ray and as beyond it at the end. */
static int ray_misses_box(const PhysicsVehicle *vehicle, const float from[3], const float to[3])
{
    for (int k = 0; k < 3; k++)
        if (!(from[k] >= vehicle->bounds_min[k]) && vehicle->bounds_min[k] > to[k])
            return 1;
    for (int k = 0; k < 3; k++)
        if (from[k] > vehicle->bounds_max[k] && !(vehicle->bounds_max[k] >= to[k]))
            return 1;
    return 0;
}

/* (c - a) x (b - a) at length 1; zero when the triangle has no area. */
static void triangle_normal(float normal[3], const float a[3], const float b[3], const float c[3])
{
    float bx = b[0] - a[0], by = b[1] - a[1], bz = b[2] - a[2];
    float cx = c[0] - a[0], cy = c[1] - a[1], cz = c[2] - a[2];
    float x = (cy * bz) - (cz * by);
    float y = (cz * bx) - (cx * bz);
    float z = (cx * by) - (cy * bx);
    float length = sqrt_float(((y * y) + (x * x)) + (z * z));

    if (is_zero_or_nan_quiet(length)) {
        normal[0] = normal[1] = normal[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;

        normal[0] = inverse * x;
        normal[1] = inverse * y;
        normal[2] = inverse * z;
    }
}

/* One triangle of a face: the hit is kept when it comes sooner along the
   ray than the best so far. */
static void ray_triangle(int face, const float from[3], const float to[3], const float a[3], const float b[3],
                         const float c[3])
{
    float point[4], normal[3], fraction;

    triangle_normal(normal, a, b, c);
    if (collision_line_triangle(point, normal, &fraction, from, to, a, b, c) && !(fraction >= collision_hit.fraction)) {
        for (int k = 0; k < 3; k++) {
            collision_hit.point[k] = point[k];
            collision_hit.normal[k] = normal[k];
        }
        collision_hit.fraction = fraction;
        collision_hit.part = face;
    }
}

int collision_ray_hull(int index, const float from[3], const float to[3])
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    const float *r = vehicle->rotation;
    static float world[HULL_VERTEX_CAPACITY][3];   /* the original's is on the stack */
    int64_t type;

    if (ray_misses_box(vehicle, from, to))
        return 0;

    type = vehicle->type;
    collision_hit.fraction = 1.0f;
    for (int i = 0; i < vehicle_hull_vertex_count(type); i++) {
        const float *p = vehicle_hull_vertices(type)[i];

        world[i][0] = (((r[0] * p[0]) + vehicle->position[0]) + (r[3] * p[1])) + (r[6] * p[2]);
        world[i][1] = (((r[1] * p[0]) + vehicle->position[1]) + (r[4] * p[1])) + (r[7] * p[2]);
        world[i][2] = (((r[2] * p[0]) + vehicle->position[2]) + (r[5] * p[1])) + (r[8] * p[2]);
    }
    for (int f = 0; f < vehicle_hull_face_count(type); f++) {
        const VehicleHullFace *face = &vehicle_hull_faces(type)[f];

        ray_triangle(f, from, to, world[face->corner[0]], world[face->corner[1]], world[face->corner[2]]);
        if (face->corner_count == 4)
            ray_triangle(f, from, to, world[face->corner[0]], world[face->corner[2]], world[face->corner[3]]);
    }
    return !(collision_hit.fraction >= 1.0f);
}
