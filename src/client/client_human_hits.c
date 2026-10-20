#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400B3A80) ----------------------------------------------------
__int64            sr_human_collide_vehicle(unsigned int a1, int a2)
{
  /* Clean implementation: src/engine/human_hits.c, checked against the original executable
     (tools/native-compare suite hits). */
  extern void human_collide_vehicle(int human, int vehicle);
  human_collide_vehicle((int)a1, a2);
  return a1; /* as the original leaves it; discarded by its caller */
}

