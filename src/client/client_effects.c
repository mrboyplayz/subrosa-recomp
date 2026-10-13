#include "shared_client.h"

//----- (0000000140158CD0) ----------------------------------------------------
__int64 sub_140158CD0()
{
  /* Clean implementation: src/engine/world_particles.c, checked against the original executable
     (tools/native-compare suite particles). */
  extern void world_update_particles(void);
  world_update_particles();
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001401597F0) ----------------------------------------------------
__int64 sub_1401597F0()
{
  /* Ported to src/engine/world_effects.c and compared with the original
     (tools/native-compare, suite effectsupdate). The caller discards the result. */
  extern void world_update_effects(void);
  world_update_effects();
  return 0;
}
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v200
