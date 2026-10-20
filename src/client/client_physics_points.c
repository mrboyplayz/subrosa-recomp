#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (00000001401154D0) ----------------------------------------------------
__int64 sr_physics_integrate_points()
{
  extern void physics_integrate_points(void);
  /* src/engine/physics_points.c; the original returns a leftover value, its one caller (the physics tick) does not
     read it. */
  physics_integrate_points();
  return 0;
}

//----- (0000000140115830) ----------------------------------------------------
void sr_physics_expire_points()
{
  extern void physics_expire_points(void);
  /* src/engine/physics_points.c */
  physics_expire_points();
}

