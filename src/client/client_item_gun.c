#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400CF670) ----------------------------------------------------
__int64            sr_item_gun_tick(signed int a1)
{
  /* Ported to src/engine/item_gun.c and compared with the original
     (tools/native-compare, suite gun). The caller discards the result. */
  extern void item_gun_tick(int);
  item_gun_tick(a1);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4

