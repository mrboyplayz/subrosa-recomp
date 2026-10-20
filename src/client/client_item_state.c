#include "shared_client.h"

//----- (00000001400C3AB0) ----------------------------------------------------
__int64 sr_item_insert_cash_bill(int item, int bill, int denomination)
{
  extern unsigned long long item_insert_cash_bill(int, int, unsigned int);
  /* src/engine/item_state.c */
  return (__int64)item_insert_cash_bill(item, bill, (unsigned int)denomination);
}

//----- (00000001400C3BA0) ----------------------------------------------------
unsigned int *sr_item_register_link(int item, unsigned int link, unsigned int slot)
{
  /* src/engine/item_state.c */
  extern uintptr_t item_register_link(int, unsigned int, int32_t);
  return (unsigned int *)item_register_link(item, link, (int32_t)slot);
}

//----- (00000001400C3C90) ----------------------------------------------------
__int64 sr_item_append_inventory(unsigned int item, int human, int slot)
{
  extern unsigned long long item_append_inventory(unsigned int, int, int);
  /* src/engine/item_state.c */
  return (__int64)item_append_inventory(item, human, slot);
}

//----- (00000001400C3D10) ----------------------------------------------------
__int64 sr_item_cash_value(int item)
{
  extern unsigned long long item_cash_value(int);
  /* src/engine/item_state.c */
  return (__int64)item_cash_value(item);
}

//----- (00000001400CA740) ----------------------------------------------------
__int64 sr_item_remove_cash_bill(int item, int bill)
{
  extern unsigned long long item_remove_cash_bill(int item, int bill);
  return (__int64)item_remove_cash_bill(item, bill);
}

//----- (00000001400CDBD0) ----------------------------------------------------
__int64 sr_item_break_block_part(unsigned int block, int part, int layer, int x, int y, int z)
{
  extern unsigned long long item_break_block_part(unsigned int block, int part, int layer, int x, int y, int z);
  return (__int64)item_break_block_part(block, part, layer, x, y, z);
}

//----- (00000001400CDFF0) ----------------------------------------------------
__int64 sr_item_restore_block_part(int item)
{
  extern void item_restore_block_part(int item);
  item_restore_block_part(item);
  return 0; /* compatibility result is unused by the reviewed callers */
}

//----- (00000001400E35D0) ----------------------------------------------------
__int64 sr_item_transfer(int item, int child, int human, int slot)
{
  extern unsigned long long item_transfer(int, int, int, int);
  /* src/engine/item_state.c */
  return (__int64)item_transfer(item, child, human, slot);
}

//----- (00000001400E38A0) ----------------------------------------------------
__int64 sr_item_attach_child(int parent, int child)
{
  extern unsigned long long item_attach_child(int, int);
  /* src/engine/item_state.c */
  return (__int64)item_attach_child(parent, child);
}

