#include "shared_client.h"

//----- (00000001400B9D90) ----------------------------------------------------
__int64            sr_human_sit_legs(int a1)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite legs). */
  extern void human_sit_legs(int human);
  human_sit_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BA210) ----------------------------------------------------
__int64            sr_human_lie_legs(int a1)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite legs). */
  extern void human_lie_legs(int human);
  human_lie_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BAA40) ----------------------------------------------------
__int64            sr_human_plan_steps(int a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite steps). a2 and a3 are two points each, one per leg. */
  extern void human_plan_steps(int human, const float (*from)[3], const float (*to)[3]);
  human_plan_steps(a1, (const float (*)[3])a2, (const float (*)[3])a3);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BB6B0) ----------------------------------------------------
__int64            sr_human_swing_step(int a1, int a2, __int64 a3, float *a4, intptr_t a5, float *a6)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite swing). The original does not read a3 or a5. */
  extern void human_swing_step(int human, int leg, const float *hip_target, const float *axes);
  (void)a3;
  (void)a5;
  human_swing_step(a1, a2, a4, a6);
  return 0; /* compatibility result discarded by all reviewed callers */
}

