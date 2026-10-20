#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140050F90) ----------------------------------------------------
__int64            sr_item_link_text_line(int a1, signed int a2)
{
  /* Ported to src/engine/item_text.c and compared with the original
     (tools/native-compare, suite itemtext). Returns the record zero-extended,
     or 0xFFFFFFFF when none is free, as the original. */
  extern unsigned int item_link_text_line(int, int);
  return item_link_text_line((int)a1, (int)a2);
}

//----- (0000000140051170) ----------------------------------------------------
__int64            sr_item_allocate_text_record(int a1, unsigned int a2, int a3)
{
  return item_allocate_text_record(a1, a2, a3);
}

