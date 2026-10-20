#include "shared_client.h"

//----- (0000000140125DB0) ----------------------------------------------------
void            sr_world_draw_effects(void)
{
  /* Clean implementation: src/engine/world_effects_draw.c, checked against the original executable
     (tools/native-compare suite effectsdraw). The original takes no arguments. */
  extern void world_draw_effects(void);
  world_draw_effects();
}

