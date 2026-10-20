#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (0000000140116210) ----------------------------------------------------
void sr_physics_tick()
{
  extern void physics_tick(void);
  /* src/engine/physics_tick.c; the debug console's tick markers stay here. */
  SR_DEBUG_TICK_BEGIN();
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "before physics tick");
  physics_tick();
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "after physics tick");
  SR_DEBUG_TICK_END();
}

