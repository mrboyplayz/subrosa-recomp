#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"

//----- (0000000140033BE0) ----------------------------------------------------
_BOOL8 sr_collision_capsule_placed_mesh(float *hit, __int64 mesh, __int64 placed, float *from, float *to, int radius_bits)
{
  extern int collision_capsule_placed_mesh(void *, const void *, const float (*)[3], const float *, const float *, float);
  float radius;
  __builtin_memcpy(&radius, &radius_bits, 4);
  return collision_capsule_placed_mesh(hit, (const void *)(uintptr_t)mesh,
                                       (const float (*)[3])(uintptr_t)placed, from, to, radius);
}

//----- (000000014011BF40) ----------------------------------------------------
__int64 sr_collision_place_mesh(__int64 out, __int64 mesh, float *position, float *rotation)
{
  extern uintptr_t collision_place_mesh(float (*)[3], const void *, const float *, const float *);
  return (__int64)collision_place_mesh((float (*)[3])(uintptr_t)out, (const void *)(uintptr_t)mesh,
                                      position, rotation);
}

