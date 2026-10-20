#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (0000000140010020) ----------------------------------------------------
__int64            sr_world_create_chunk_slot(unsigned int a1, int a2, int a3, int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern int world_create_chunk_slot(unsigned int layer, int cx, int cy, int cz);
  return (unsigned int)world_create_chunk_slot(a1, a2, a3, a4);
}

//----- (0000000140012490) ----------------------------------------------------
__int64            sr_world_create_block_record(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern int world_create_block_record(unsigned int layer, unsigned int slot, int x, int y, int z);
  return (unsigned int)world_create_block_record(a1, a2, a3, a4, a5);
}

//----- (00000001400129D0) ----------------------------------------------------
__int64            sr_world_block_unknown_8_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_8_at(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_unknown_8_at(a1, a2, a3, a4);
}

//----- (0000000140012B10) ----------------------------------------------------
__int64            sr_world_block_unknown_8_origin(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_8_origin(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_unknown_8_origin(a1, a2, a3, a4);
}

//----- (0000000140012CA0) ----------------------------------------------------
__int64            sr_world_block_unknown_1008_last(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_1008_last(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_unknown_1008_last(a1, a2, a3, a4);
}

//----- (0000000140012DE0) ----------------------------------------------------
__int64            sr_world_block_unknown_1008_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_1008_at(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, int entry);
  return world_block_unknown_1008_at(a1, a2, a3, a4, a5);
}

//----- (0000000140013020) ----------------------------------------------------
__int64            sr_world_block_record_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern int world_block_record_at(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_record_at(a1, a2, a3, a4);
}

//----- (0000000140016450) ----------------------------------------------------
__int64            sr_world_block_unknown_3008_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_3008_at(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_unknown_3008_at(a1, a2, a3, a4);
}

//----- (0000000140016590) ----------------------------------------------------
__int64            sr_world_block_unknown_3008_origin(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_3008_origin(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  return (unsigned int)world_block_unknown_3008_origin(a1, a2, a3, a4);
}

//----- (0000000140016720) ----------------------------------------------------
__int64            sr_world_block_unknown_3808_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern unsigned int world_block_unknown_3808_at(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, int entry);
  return world_block_unknown_3808_at(a1, a2, a3, a4, a5);
}

//----- (0000000140016870) ----------------------------------------------------
__int64            sr_world_block_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  extern uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
  /* src/engine/world_blocks.c */
  return world_block_at(a1, a2, a3, a4);
}
//----- (00000001400169B0) ----------------------------------------------------
__int64            sr_world_block_gone_at(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  extern uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
  /* src/engine/world_blocks.c */
  return world_block_gone_at(a1, a2, a3, a4);
}
//----- (0000000140016E30) ----------------------------------------------------
void            sr_world_set_block_unknown_3008(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_set_block_unknown_3008(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, unsigned int value);
  world_set_block_unknown_3008(a1, a2, a3, a4, a5);
}

//----- (0000000140017110) ----------------------------------------------------
void            sr_world_set_block_gone(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_set_block_gone(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, unsigned int gone);
  world_set_block_gone(a1, a2, a3, a4, a5);
}

//----- (0000000140017260) ----------------------------------------------------
void            sr_world_set_block_unknown_4808(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_set_block_unknown_4808(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, unsigned int value);
  world_set_block_unknown_4808(a1, a2, a3, a4, a5);
}

//----- (00000001400173C0) ----------------------------------------------------
void            sr_world_mark_block_record(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_mark_block_record(unsigned int layer, unsigned int x, unsigned int y, unsigned int z);
  world_mark_block_record(a1, a2, a3, a4);
}

//----- (00000001400516B0) ----------------------------------------------------
void            sr_world_event_block_gone(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  /* Clean implementation: src/engine/world_blocks.c, checked against the original executable
     (tools/native-compare suite blocks). This wrapper keeps the entry point the recompiled callers use. */
  extern void world_event_block_gone(unsigned int layer, unsigned int x, unsigned int y, unsigned int z, unsigned int gone, unsigned int update);
  world_event_block_gone((unsigned int)a1, (unsigned int)a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
}

//----- (00000001400B95E0) ----------------------------------------------------
void sr_world_update_human_bounds()
{
  extern void world_update_human_bounds(void);
  /* src/engine/world_blocks.c */
  world_update_human_bounds();
}
