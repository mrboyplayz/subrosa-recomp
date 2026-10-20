#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400B2E70) ----------------------------------------------------
__int64            sr_human_collide(int a1)
{
  /* Clean implementation: src/engine/human_collide.c, checked against the original executable
     (tools/native-compare suite bonehits). */
  extern void human_collide(int human);
  human_collide(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

