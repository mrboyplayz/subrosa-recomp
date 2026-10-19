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
#include <stdint.h>
#include <stddef.h>

/* The 64 persistent contact slots in a collision shape. The preceding
   9,740 bytes and the remaining 68 slot bytes are not named here yet. */
typedef struct CollisionContactSlot {
    int32_t kind;
    uint8_t unknown_04[68];
} CollisionContactSlot;
typedef struct CollisionShapeContacts {
    uint8_t unknown_0000[9740];
    CollisionContactSlot slots[64];
} CollisionShapeContacts;
_Static_assert(offsetof(CollisionShapeContacts,slots) == 9740, "contact slot offset");
_Static_assert(sizeof(CollisionContactSlot) == 72, "contact slot stride");
uint32_t collision_find_free_contact(const CollisionShapeContacts *shape); /* 0x140048090 */

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

/* The segment variant rejects endpoints strictly on the same side, using
   the native unordered branch rules. On a parallel/unordered denominator
   it leaves *fraction as the start distance and point untouched.
   Aliased outputs retain the original scalar store order. 0x140077B30 */
uint32_t collision_segment_plane(float point[3], const float normal[3], float *fraction,
                                  const float from[3], const float to[3], const float plane[3]);

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

/* collision_sphere_triangle() without the edges: only sweeps that reach the
   face itself hit. 0x140035B70 */
int collision_sphere_triangle_face(float point[3], float normal[3], float *distance, const float from[3],
                                   const float to[3], float radius, const float a[3], const float b[3], const float c[3]);

/* The weights of `point` (in the plane of triangle a b c) in its corners:
   1 at a corner, 0 on the opposite edge's line. 0x14002D370 */
void collision_triangle_weights(float weights[3], const float point[3], const float a[3], const float b[3],
                                const float c[3]);

/* ---- convex meshes (collision_mesh.c) ------------------------------------------ */

#include <stdint.h>

/* A convex collision mesh: points (position and the vertex they move from),
   faces (3 or 4 point indices and a normal), edges (two point indices and a
   vertex on the far side, for the side test) and vertices. */
typedef struct CollisionMeshPoint {
    float position[3];
    int32_t vertex;
} CollisionMeshPoint;

typedef struct CollisionMeshFace {
    uint32_t unknown_0;
    int32_t corner_count;
    int32_t corner[4];
    float normal[3];
} CollisionMeshFace;

typedef struct CollisionMeshEdge {
    int32_t point[2];
    int32_t vertex;
} CollisionMeshEdge;

typedef struct CollisionMesh {
    int32_t point_count;
    uint32_t unknown_4;
    CollisionMeshPoint *points;
    int32_t face_count;
    uint32_t unknown_14;
    CollisionMeshFace *faces;
    int32_t edge_count;
    uint32_t unknown_24;
    CollisionMeshEdge *edges;
    int32_t vertex_count;
    float vertex[][3];
} CollisionMesh;

/* The mesh's points and face normals turned by rotation r (rows) and moved
   by position. 0x14004A480 */
void collision_mesh_transform(float (*points)[3], float (*normals)[3], const CollisionMesh *mesh,
                              const float position[3], const float r[9]);

/* The nearest face of a mesh (points and normals already transformed) that
   the line from `from` to `to` crosses from behind: its point, normal and
   fraction (left at 1 on a miss). 0x14004A1D0 */
typedef struct CollisionMeshHit {
    float point[3];
    float normal[3];
    float fraction;
} CollisionMeshHit;

int collision_mesh_point_faces(CollisionMeshHit *hit, const CollisionMesh *mesh, const float (*points)[3],
                               const float (*normals)[3], const float from[3], const float to[3]);

/* collision_mesh_point_faces() against mesh placed at position, rotation.
   0x14004A130 (no caller in the original) */
int collision_mesh_point_sweep(CollisionMeshHit *hit, const CollisionMesh *mesh, const float position[3],
                               const float rotation[9], const float from[3], const float to[3]);

/* The closest points of edges a0-a1 and b0-b1 when they lie within both
   edges, and their distance. 0x14008CEB0 */
int collision_edge_edge(float on_a[3], float on_b[3], float *distance, const float a0[3], const float a1[3],
                        const float b0[3], const float b1[3]);

/* Whether segment p0-p1 crosses the plane of triangle c e0 e1 inside the
   triangle (touching counts). 0x140187410 */
int collision_edge_side(const float p0[3], const float p1[3], const float c[3], const float e0[3], const float e1[3]);

/* Contacts between mesh a on body_a and mesh b on body_b, each placed by a
   position and rotation: points of each against the other's faces and every
   pair of edges. Bit 0 of flags (the only one read) skips a's points and one
   of the two side tests of an edge contact. Applies each contact
   (0x1400052C0) and returns whether there was any. 0x140048DA0 */
int collision_mesh_contact(int body_a, int body_b, const CollisionMesh *a, const CollisionMesh *b,
                           const float position_a[3], const float rotation_a[9], const float position_b[3],
                           const float rotation_b[9], uint32_t flags);

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
    float weights[3];                    /* rays: the hit point's weights in the face's corners */
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
