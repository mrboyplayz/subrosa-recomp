#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (000000014005F150) ----------------------------------------------------
__int64            sr_world_spawn_particle(unsigned int a1, unsigned int *a2, unsigned int *a3, float *a4)
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particles). */
  extern int world_spawn_particle(int type, const float *position, const float *velocity, const float *rotation);
  return (unsigned int)world_spawn_particle((int)a1, (const float *)a2, (const float *)a3, a4);
}

//----- (00000001401259B0) ----------------------------------------------------
void            sr_world_draw_resting_particles(int a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particledraw). Only a1 is an argument. */
  extern void world_draw_resting_particles(int depth_only);
  (void)a2;
  (void)a3;
  world_draw_resting_particles(a1);
}

//----- (0000000140158CD0) ----------------------------------------------------
__int64 sr_world_update_particles()
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particles). */
  extern void world_update_particles(void);
  world_update_particles();
  return 0; /* compatibility result discarded by all reviewed callers */
}

