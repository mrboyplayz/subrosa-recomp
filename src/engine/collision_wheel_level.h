/* A wheel against the level: the terrain under it gathered as a small mesh,
   and the block layers. The wheel itself (a disc) and its test against one
   triangle are in vehicle.h / collision_wheel.c. */
#ifndef SR_ENGINE_COLLISION_WHEEL_LEVEL_H
#define SR_ENGINE_COLLISION_WHEEL_LEVEL_H

#include "vehicle.h"

#define LEVEL_MESH_VERTEX_CAPACITY 2048
#define LEVEL_MESH_FACE_CAPACITY 1024

typedef struct LevelMeshVertex {
    int32_t unknown_0;                   /* not written by the terrain */
    float position[3];
} LevelMeshVertex;

typedef struct LevelMeshFace {
    int32_t corner_count;                /* 3 or 4 */
    int32_t corner[4];                   /* vertex indices */
    float normal[3];
} LevelMeshFace;

/* Level geometry gathered near something, with shared corners. 73,744
   bytes. */
typedef struct LevelMesh {
    int32_t vertex_count;
    LevelMeshVertex vertex[LEVEL_MESH_VERTEX_CAPACITY];
    int32_t face_count;
    LevelMeshFace face[LEVEL_MESH_FACE_CAPACITY];
    int32_t extra_count;                 /* a third list the wheel routines only clear */
    int32_t extra[2049];
} LevelMesh;

_Static_assert(__builtin_offsetof(LevelMesh, face_count) == 0x8004, "LevelMesh layout");
_Static_assert(__builtin_offsetof(LevelMesh, extra_count) == 0x10008, "LevelMesh layout");
_Static_assert(sizeof(LevelMesh) == 73744, "LevelMesh size");

/* More of the shared hit record (collision_hit, 0x151A84880): the block
   layer touched (0 for the terrain too), what the block layer test last
   reported about its touch and the copy kept with the hit (meaning not
   settled; 0 for the terrain), and two fields cleared to -1 before a wheel
   test. */
#define collision_hit_layer SR_GLOBAL(int32_t, 0x151A848D4ULL)
#define collision_hit_block_info SR_GLOBAL(int32_t, 0x151A848E4ULL)
#define collision_layer_block_info SR_GLOBAL(int32_t, 0x151A848E8ULL)
#define collision_hit_unknown_7c SR_GLOBAL(int32_t, 0x151A848FCULL)
#define collision_hit_object_index SR_GLOBAL(int32_t, 0x151A84908ULL)

/* Adds to the mesh the terrain cells under the box min..max (x and z; a
   cell must be solid and reach above the box's bottom): four corners, shared
   with the corners already there, and two triangles with their normals.
   Stops adding faces when fewer than two fit. 0x1400D05B0 */
void collision_terrain_mesh_in_box(LevelMesh *mesh, const float box_min[3], const float box_max[3]);

/* A wheel against every face of a mesh (a four-cornered face as two
   triangles): the nearest touch in `hit`. 0x14003DAE0 */
int collision_wheel_level_mesh(CollisionWheelHit *hit, const LevelMesh *mesh, const float centre[3],
                               const float axle[3], float radius);

/* A wheel against the terrain and the four block layers: the nearest touch
   is left in collision_hit (point, normal, distance from the centre,
   fraction 0, the layer) and the result is whether there was one.
   0x14003DE80 */
int collision_wheel_level(const float centre[3], const float axle[3], float radius);

/* ---- a wheel against the blocks of one voxel (collision_wheel_blocks.c) ------ */

/* The id of the block face last touched: a cube's face number, or the id a
   shape gives its triangle or quad. 0x151A848EC */
#define collision_hit_face_id SR_GLOBAL(int32_t, 0x151A848ECULL)

/* A wheel against a cube block in a voxel. `faces` is the voxel's layout
   word: face f is solid when bits f and f + 6 are both set. Corners are
   (voxel + corner) * scale. The nearest touch gives point, the face's
   normal and *distance (65536 when none), and collision_hit_face_id.
   0x14003E100 */
int collision_wheel_cube(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3],
                         float radius, const int32_t voxel[3], uint32_t faces, float scale);

/* The same against a block shape's triangles and quads (each quad as two
   triangles), with normals worked out from the corners. 0x14003E4B0 */
int collision_wheel_shape(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3],
                          float radius, const int32_t voxel[3], uint16_t shape, float scale);

/* ---- a wheel against a block layer (collision_wheel_blocks.c) ---------------- */

/* A wheel against the blocks of one layer of the level. The wheel's centre
   is taken into the layer's frame (the axle is not: the original passes it
   as it is) and every voxel its box covers is tested: each of the voxel's
   two shape entries may be a cube (first entry only), a block shape, or a
   pointer back to the voxel holding a larger block. The nearest touch is
   returned in world axes; collision_layer_block_info gets the touched
   face's word of that voxel, and a shape touched through the first entry
   also sets the hit's layer, voxel and layout word. Nothing is tested when
   the wheel's box misses the layer's. 0x14003C760 */
int collision_wheel_block_layer(float point[3], float normal[3], float *distance, int layer, const float centre[3],
                                const float axle[3], float radius);

#endif
