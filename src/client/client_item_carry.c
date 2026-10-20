#include "shared_client.h"

//----- (00000001401380F0) ----------------------------------------------------
__int64            sr_item_follow_body(int a1, int a2)
{
  /* Ported to src/engine/item_carry.c and compared with the original
     (tools/native-compare, suite itemcarry). The caller discards the result. */
  extern void item_follow_body(int, int);
  item_follow_body(a1, a2);
  return 0;
}

