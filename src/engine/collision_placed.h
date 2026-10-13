/* Item meshes placed for capsule collision. This format differs from the
   convex CollisionMesh used for body/body contacts. */
#ifndef SR_ENGINE_COLLISION_PLACED_H
#define SR_ENGINE_COLLISION_PLACED_H

#include "collision.h"

typedef struct PlacedMeshGroup {
    int32_t face_count;
    uint32_t unknown_4;
    CollisionMeshFace *faces;
    uint8_t unknown_10[0x38 - 0x10];
} PlacedMeshGroup;

typedef struct PlacedMesh {
    int32_t point_count;
    uint32_t unknown_4;
    const float (*points)[3];
    int32_t group_count;
    uint8_t unknown_14[0x30 - 0x14];
    PlacedMeshGroup groups[];
} PlacedMesh;

typedef struct PlacedMeshHit {
    float point[3];
    float normal[3];
    uint32_t unknown_18;                 /* left untouched */
    float distance;
} PlacedMeshHit;

_Static_assert(sizeof(PlacedMeshGroup) == 0x38, "PlacedMeshGroup size");
_Static_assert(__builtin_offsetof(PlacedMesh, groups) == 0x30, "PlacedMesh groups");
_Static_assert(sizeof(CollisionMeshFace) == 0x24, "PlacedMesh face size");
_Static_assert(sizeof(PlacedMeshHit) == 0x20, "PlacedMeshHit size");

/* 0x14011BF40: transform point triples to world axes. The incidental native
   return is retained: out on an empty mesh, points - out - 8 otherwise. */
uintptr_t collision_place_mesh(float (*out)[3], const PlacedMesh *mesh,
                               const float position[3], const float rotation[9]);

/* 0x140033BE0: test the capsule against every group's triangles, splitting
   quads at corners 0/2. Keeps the largest positive distance, as the original
   does. On a miss only hit->distance is cleared. */
int collision_capsule_placed_mesh(PlacedMeshHit *hit, const PlacedMesh *mesh,
                                  const float (*placed)[3], const float from[3],
                                  const float to[3], float radius);

/* 0x1400DA960: the nearest hit of the segment from -> to on the mesh's
   faces (quads as triangles a b c and a c d) with its points placed: hit
   gets point, unit normal ((c - a) x (b - a), zero when degenerate) and
   fraction (from 1). True when a hit lies before `to`. */
int collision_segment_placed_mesh(float hit[7], const PlacedMesh *mesh, const float (*points)[3], const float from[3],
                                  const float to[3]);

#endif
