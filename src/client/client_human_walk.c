#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400AC890) ----------------------------------------------------
__int64            sr_human_feel_ground_ahead(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_feel_ground_ahead(int human);
  human_feel_ground_ahead(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B2440) ----------------------------------------------------
__int64            sr_human_update_walk_height(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_update_walk_height(int human);
  human_update_walk_height(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B40B0) ----------------------------------------------------
__int64            sr_human_update_walk_point(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_update_walk_point(int human);
  human_update_walk_point(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B91E0) ----------------------------------------------------
__int64            sr_human_probe_ground(int a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern int human_probe_ground(int human, float *from, float *to);
  return human_probe_ground(a1, a2, a3);
}

