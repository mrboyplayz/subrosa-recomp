#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014007F970) ----------------------------------------------------
void            sr_world_remove_item(int a1)
{
  extern void world_remove_item(int item);
  /* src/engine/world_items.c */
  world_remove_item(a1);
}
//----- (00000001400C9D20) ----------------------------------------------------
unsigned __int64 sr_world_update_item_bounds()
{
  extern void world_update_item_bounds(void);
  /* src/engine/world_items.c; the original's return value is a leftover, no caller reads it. */
  world_update_item_bounds();
  return 0;
}

//----- (00000001400CA7C0) ----------------------------------------------------
void            sr_world_take_item(int a1, int a2, int a3)
{
  extern void world_take_item(int item, int human, int slot);
  /* src/engine/world_items.c */
  world_take_item(a1, a2, a3);
}

//----- (00000001400CA9B0) ----------------------------------------------------
__int64            sr_world_detach_item(unsigned int a1, unsigned int a2)
{
  extern void world_detach_item(int item, int parent);
  /* src/engine/world_items.c. The original returns a leftover pointer; no caller reads it. */
  world_detach_item((int)a1, (int)a2);
  return 0;
}

