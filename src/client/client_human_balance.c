#include "shared_client.h"

//----- (00000001400BBF30) ----------------------------------------------------
__int64            sr_human_balance_on_leg(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  /* Clean implementation: src/engine/human_balance.c, checked against the original executable
     (tools/native-compare suite balance). */
  extern void human_balance_on_leg(int human, int leg, float *target, float *turn, const float *hip,
                                   const float *foot, const float *wanted_centre, const float *wanted_rotation,
                                   float share);
  human_balance_on_leg(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return 0; /* result discarded by its caller */
}

