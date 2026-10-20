#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140048DA0) ----------------------------------------------------
__int64            sr_collision_mesh_contact(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        char a9)
{
  /* src/engine/collision_mesh.c; only bit 0 of the flag is read. */
  return collision_mesh_contact(a1, a2, (const CollisionMesh *)(uintptr_t)a3, (const CollisionMesh *)(uintptr_t)a4, a5, a6, a7, a8,
                                (unsigned char)a9);
}

//----- (000000014004A130) ----------------------------------------------------
__int64            sr_collision_mesh_point_sweep(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  /* src/engine/collision_mesh.c. Hex-Rays had dropped the last two arguments (the sweep's ends, read from the stack)
     and passed two unset locals instead; no code of the original calls this routine. */
  return collision_mesh_point_sweep((CollisionMeshHit *)a1, (const CollisionMesh *)a2, a3, a4, a5, a6);
}

//----- (000000014004A1D0) ----------------------------------------------------
_BOOL8            sr_collision_mesh_point_faces(float *a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6)
{
  /* src/engine/collision_mesh.c */
  return collision_mesh_point_faces((CollisionMeshHit *)a1, (const CollisionMesh *)a2, (const float (*)[3])a3, (const float (*)[3])a4, a5, a6);
}

//----- (000000014004A480) ----------------------------------------------------
__int64            sr_collision_mesh_transform(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  /* src/engine/collision_mesh.c; the original returns a leftover pointer; its callers (0x14004A130 and
     0x140048DA0, now in src/engine) do not read it. */
  collision_mesh_transform((float (*)[3])a1, (float (*)[3])a2, (const CollisionMesh *)a3, a4, a5);
  return 0;
}

//----- (000000014008CEB0) ----------------------------------------------------
__int64            sr_collision_edge_edge(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  extern int collision_edge_edge(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                 const float *b0, const float *b1);
  /* src/engine/collision_mesh.c */
  return collision_edge_edge(a1, a2, a3, a4, a5, a6, a7);
}

//----- (0000000140187410) ----------------------------------------------------
_BOOL8            sr_collision_edge_side(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  extern int collision_edge_side(const float *p0, const float *p1, const float *c, const float *e0, const float *e1);
  /* src/engine/collision_mesh.c */
  return collision_edge_side(a1, a2, a3, a4, a5);
}

