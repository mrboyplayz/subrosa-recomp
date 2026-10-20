#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (00000001401069C0) ----------------------------------------------------
__int64 sr_world_update_vehicle_bounds()
{
  extern void world_update_vehicle_bounds(void);
  /* src/engine/world_vehicles.c; the original's return value is a leftover, no caller reads it. */
  world_update_vehicle_bounds();
  return 0;
}

//----- (0000000140107ED0) ----------------------------------------------------
void sr_world_drive_vehicles()
{
  extern void world_drive_vehicles(void);
  /* src/engine/world_vehicles.c */
  world_drive_vehicles();
}

//----- (000000014010BE50) ----------------------------------------------------
void sr_world_expire_vehicles()
{
  extern void world_expire_vehicles(void);
  /* src/engine/world_vehicles.c */
  world_expire_vehicles();
}

//----- (000000014010D610) ----------------------------------------------------
void sr_world_solve_vehicle_wheels()
{
  extern void world_solve_vehicle_wheels(void);
  /* src/engine/world_vehicles.c */
  world_solve_vehicle_wheels();
}

