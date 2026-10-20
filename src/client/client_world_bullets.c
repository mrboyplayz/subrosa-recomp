#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (000000014002CE50) ----------------------------------------------------
__int64 sr_world_expire_bullets()
{
  /* Clean implementation: src/engine/world_bullets.c, checked against the original executable
     (tools/native-compare suite bulletexpire). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_expire_bullets(void);
  world_expire_bullets();
  return world_bullet_count; /* value the original leaves in EAX */
}

//----- (000000014004E8A0) ----------------------------------------------------
__int64            sr_world_fire_bullet(signed int a1, unsigned int *a2, float *a3, unsigned int a4)
{
  /* Ported to src/engine/world_bullets.c and compared with the original
     (tools/native-compare, suite bullet). Returns the index zero-extended,
     or 0xFFFFFFFF when the table is full, as the original. */
  extern unsigned int world_fire_bullet(int, const float *, const float *, int);
  return world_fire_bullet(a1, (const float *)a2, a3, (int)a4);
}

