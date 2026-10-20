#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400A70B0) ----------------------------------------------------
_UNKNOWN **           sr_item_grenade_explode(int a1)
{
  /* Ported to src/engine/item_grenade.c and compared with the original
     (tools/native-compare, suite grenade). The caller discards the result. */
  extern void item_grenade_explode(int);
  item_grenade_explode(a1);
  return 0;
}

