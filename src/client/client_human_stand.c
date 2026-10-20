#include "shared_client.h"

//----- (00000001400BCA30) ----------------------------------------------------
__int64            sr_human_stand_legs(int a1)
{
  /* Clean implementation: src/engine/human_stand.c, checked against the original executable
     (tools/native-compare suite stand). */
  extern void human_stand_legs(int human);
  human_stand_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

