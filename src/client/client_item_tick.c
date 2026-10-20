#include "shared_client.h"

//----- (00000001400CC610) ----------------------------------------------------
__int64 sr_item_tick_states()
{
  /* Ported to src/engine/item_tick.c and compared with the original
     (tools/native-compare, suite itemtick). The caller discards the result. */
  extern void item_tick_states(void);
  item_tick_states();
  return 0;
}
#undef retaddr

// 1400CCE14: conditional instruction was optimized away because ecx.4<4651

