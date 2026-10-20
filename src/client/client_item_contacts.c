#include "shared_client.h"
#include "../engine/physics.h"

//----- (00000001400CA1C0) ----------------------------------------------------
__int64 sr_item_solve_contacts(int item)
{
  extern void item_solve_contacts(int item);
  item_solve_contacts(item);
  return 0; /* compatibility result is unused by the reviewed callers */
}

//----- (00000001400CA430) ----------------------------------------------------
_UNKNOWN **sr_item_solve_human_contacts(int item)
{
  /* src/engine/item_contacts.c */
  extern void item_solve_human_contacts(int);
  /* The native leftover register result is discarded by every reviewed caller. */
  item_solve_human_contacts(item);
  return 0;
}

