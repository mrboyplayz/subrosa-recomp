#include "shared_client.h"

//----- (00000001400B5E70) ----------------------------------------------------
int            sr_human_update_health(int a1)
{
  /* Clean implementation: src/engine/human_health.c, checked against the original executable
     (tools/native-compare suite health). */
  extern void human_update_health(int human);
  human_update_health(a1);
  return 0; /* result discarded by its caller */
}

