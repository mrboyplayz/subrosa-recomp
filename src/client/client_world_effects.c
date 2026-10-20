#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"

//----- (000000014005EE40) ----------------------------------------------------
__int64            sr_world_add_effect(unsigned int a1, unsigned int *a2, float *a3, float a4)
{
  /* Ported to src/engine/world_effects.c and compared with the original
     (tools/native-compare, suite effects). Returns the index zero-extended,
     or 0xFFFFFFFF when the table is full, as the original. */
  extern unsigned int world_add_effect(int, const float *, const float *, float);
  return world_add_effect((int)a1, (const float *)a2, (const float *)a3, a4);
}

//----- (00000001401597F0) ----------------------------------------------------
__int64 sr_world_update_effects()
{
  /* Ported to src/engine/world_effects.c and compared with the original
     (tools/native-compare, suite effectsupdate). The caller discards the result. */
  extern void world_update_effects(void);
  world_update_effects();
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4
#undef unused_macro_alias_5
#undef unused_macro_alias_6
#undef unused_macro_alias_7
#undef unused_macro_alias_8
#undef unused_macro_alias_9
