#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140051940) ----------------------------------------------------
__int64            sr_item_phone_changed(unsigned int a1)
{
  /* Ported to src/engine/item_phone.c and compared with the original
     (tools/native-compare, suite itemphone). Callers discard the result. */
  extern void item_phone_changed(int);
  item_phone_changed((int)a1);
  return 0;
}

