/* Swept-sphere collision against triangles and segments, as used by vehicle
 * and train collision meshes.
 *
 * A sweep moves a sphere of a given radius from `from` to `to`. Every
 * function gives the same results, bit for bit, as the original routine named
 * next to it, including its handling of NaN (which often differs from what
 * the decompiled comparisons suggest).
 */
#ifndef SR_ENGINE_COLLISION_H
#define SR_ENGINE_COLLISION_H

/* The closest points of the segments a0-a1 and b0-b1: on_a and on_b, and
   their distance in *distance. True when that distance is below radius.
   0x1400D6890 */
int collision_segment_segment(float on_a[3], float on_b[3], float *distance, const float a0[3], const float a1[3],
                              const float b0[3], const float b1[3], float radius);

/* Where the line from `from` to `to` meets the plane through plane_point with
   the given normal, when `to` is on or in front of it and `from` on or behind:
   *point, and *t (the fraction of the way). 0x1400779F0 */
int collision_line_plane(float point[3], const float normal[3], float *t, const float from[3], const float to[3],
                         const float plane_point[3]);

/* collision_line_plane() against the plane of triangle a b c (normal
   given), true when the point found lies inside the triangle. 0x140077FA0 */
int collision_line_triangle(float point[3], const float normal[3], float *t, const float from[3], const float to[3],
                            const float a[3], const float b[3], const float c[3]);

/* Sweeps a sphere against triangle a b c. On a hit: *point is where it
   touches, normal the direction to push it out, *distance how far along the
   sweep. normal is also overwritten with the face normal on a miss.
   0x140035690 */
int collision_sphere_triangle(float point[3], float normal[3], float *distance, const float from[3], const float to[3],
                              float radius, const float a[3], const float b[3], const float c[3]);

/* ---- vehicle meshes --------------------------------------------------------- */

#include <stdint.h>
#include "memory.h"

/* The closest hit found by a vehicle sweep or ray, 0x151A84880. */
typedef struct CollisionHit {
    float point[3];
    float normal[3];
    float fraction;                      /* rays: along the ray, starting at 1 */
    float distance;                      /* sweeps: along the sweep, starting at 65536 (no hit) */
    uint32_t unknown_20[3];              /* cleared by every face or window hit of a ray */
    int32_t window;                      /* rays: 0 a face was hit, 1 a window */
    int32_t part;                        /* rays: the face or window index, -1 for a wheel */
    int32_t unknown_34[3];               /* rays: the vehicle's unknown_f0 three times, or the wheel index first */
    uint32_t unknown_40;
    float weights[3];                    /* rays: the hit point's weights in the face's corners (0x14002D370) */
} CollisionHit;

#define collision_hit SR_GLOBAL(CollisionHit, 0x151A84880ULL)

/* A vehicle type's collision mesh, in the type's own axes: vertices
   (0x190297C5C), faces of 3 or 4 corners (0x19029AC60) and windows, quads
   that stop colliding once broken (0x1902B4C64); 180,288 bytes per type. */
#define VEHICLE_MESH_VERTEX_CAPACITY 1024

typedef struct VehicleMeshFace {
    int32_t corner_count;                /* 3 or 4 */
    int32_t corner[4];                   /* vertex indices */
    uint8_t unknown_14[104 - 0x14];
} VehicleMeshFace;

typedef struct VehicleMeshWindow {
    uint32_t unknown_0;
    float corner[4][3];
} VehicleMeshWindow;

#define vehicle_mesh_vertex_count(type) SR_GLOBAL(int32_t, 0x190297C5CULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define vehicle_mesh_vertices(type) ((const float (*)[3])&SR_GLOBAL(float, 0x190297C60ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))
#define vehicle_mesh_face_count(type) SR_GLOBAL(int32_t, 0x19029AC60ULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define vehicle_mesh_faces(type) (&SR_GLOBAL(VehicleMeshFace, 0x19029AC68ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))
#define vehicle_mesh_window_count(type) SR_GLOBAL(int32_t, 0x1902B4C64ULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define vehicle_mesh_windows(type) (&SR_GLOBAL(VehicleMeshWindow, 0x1902B4C68ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))

/* A vehicle type's hull, the mesh other vehicles and humans collide with:
   vertices (0x19028EC54) and faces (0x190291C58), same stride per type. */
typedef struct VehicleHullFace {
    int32_t corner_count;                /* 3 or 4 */
    int32_t corner[4];
    uint32_t unknown_14;
} VehicleHullFace;

#define vehicle_hull_vertex_count(type) SR_GLOBAL(int32_t, 0x19028EC54ULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define vehicle_hull_vertices(type) ((const float (*)[3])&SR_GLOBAL(float, 0x19028EC58ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))
#define vehicle_hull_face_count(type) SR_GLOBAL(int32_t, 0x190291C58ULL + 0x2C040ULL * (uint64_t)(int64_t)(type))
#define vehicle_hull_faces(type) (&SR_GLOBAL(VehicleHullFace, 0x190291C60ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))

/* Whether window w of vehicle v is broken (and no longer collides). */
#define vehicle_window_broken(vehicle, w) SR_GLOBAL(int32_t, 0x15F2DB9FCULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle) + 4ULL * (uint64_t)(int64_t)(w))

/* The vehicle's field at 0xF0, copied into face and window hits. */
#define vehicle_unknown_f0(vehicle) SR_GLOBAL(uint32_t, 0x15F2D92F0ULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle))

/* Wheels of a vehicle: count at 0x15F2D9200 + 0x3940; per wheel (172 bytes
   apart from 0x15F2DCB78) its radius, and at +0x18 the point the ray test
   0x1400DF380 takes. */
#define vehicle_wheel_count(vehicle) SR_GLOBAL(int32_t, 0x15F2DCB40ULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle))
#define vehicle_wheel_radius(vehicle, w) SR_GLOBAL(float, 0x15F2DCB78ULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle) + 172ULL * (uint64_t)(int64_t)(w))
#define vehicle_wheel_point(vehicle, w) (&SR_GLOBAL(float, 0x15F2DCB90ULL + 0x5168ULL * (uint64_t)(int64_t)(vehicle) + 172ULL * (uint64_t)(int64_t)(w)))

/* A ray from `from` to `to` against a sphere (a wheel): the entry point,
   the outward normal there and *fraction along the ray. Rays starting
   inside the sphere miss. 0x1400DF380 */
int collision_ray_sphere(float point[3], float normal[3], float *fraction, const float from[3], const float to[3],
                         const float centre[3], float radius);

/* A ray from `from` to `to` against a vehicle's collision mesh: its faces
   (one-sided), its unbroken windows (both sides) and, when `wheels` is
   set, its wheels. Leaves the nearest hit in collision_hit (fraction from 1
   down) and returns whether there was one. 0x1400DFB70 */
int collision_ray_vehicle(int vehicle, const float from[3], const float to[3], int wheels);

/* Sweeps a sphere against a vehicle's hull (a train's collision mesh
   instead, see collision_sweep_train()). Leaves the closest hit in
   collision_hit. 0x140037220 */
int collision_sweep_vehicle(int vehicle, const float from[3], const float to[3], float radius);

/* Sweeps a sphere against a train (vehicle type 13): its faces and unbroken
   windows, both sides of each window. Leaves the closest hit in
   collision_hit and returns whether there was one. 0x140035E50 */
int collision_sweep_train(int vehicle, const float from[3], const float to[3], float radius);

#endif
