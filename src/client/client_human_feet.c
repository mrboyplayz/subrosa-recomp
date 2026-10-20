#include "shared_client.h"

//----- (00000001400B5460) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sr_human_foot_ground_contact(int a1, int a2)
{
  /* Clean implementation: src/engine/human_feet.c, checked against the original executable
     (tools/native-compare suite feet). */
  extern void human_foot_ground_contact(int human, int leg);
  human_foot_ground_contact(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}

