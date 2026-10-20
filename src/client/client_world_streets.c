#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"

//----- (000000014002A680) ----------------------------------------------------
__int64            sr_world_build_race_track()
{
  extern void world_build_race_track(void);
  /* src/engine/world_streets.c; the original's return value is the street adder's, no caller reads it. */
  world_build_race_track();
  return 0;
}

//----- (000000014002A9A0) ----------------------------------------------------
__int64 sr_world_build_train_route()
{
  extern void world_build_train_route(void);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_build_train_route();
  return 0;
}

//----- (000000014005F6E0) ----------------------------------------------------
__int64            sr_world_add_street(unsigned int a1, float *a2, float a3, float a4)
{
  extern void world_add_street(unsigned int kind, const float *quad, float lower, float raise);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_add_street(a1, a2, a3, a4);
  return 0;
}

//----- (00000001400603A0) ----------------------------------------------------
__int64            sr_world_add_rail(unsigned int a1, float *a2, float *a3, float *a4, float *a5, float a6)
{
  extern int world_add_rail(unsigned int kind, const float *start, const float *end, const float *start_direction,
                            const float *end_direction, float width);
  /* src/engine/world_streets.c */
  return world_add_rail(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140188720) ----------------------------------------------------
__int64            sr_world_street_triangles_in_box(int *a1, float *a2, float *a3, int a4, int a5)
{
  /* Ported to src/engine/world_streets.c and compared with the original
     (tools/native-compare, suite streets). Callers discard the result. */
  extern void world_street_triangles_in_box(void *, const float *, const float *, int, int);
  world_street_triangles_in_box(a1, a2, a3, a4, a5);
  return 0;
}

//----- (0000000140188900) ----------------------------------------------------
__int64            sr_world_streets_triangles_in_box(int *a1, float *a2, float *a3, int a4)
{
  /* Ported to src/engine/world_streets.c and compared with the original
     (tools/native-compare, suite streets). Callers discard the result. */
  extern void world_streets_triangles_in_box(void *, const float *, const float *, int);
  world_streets_triangles_in_box(a1, a2, a3, a4);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4
#undef unused_macro_alias_5
#undef unused_macro_alias_6
#undef unused_macro_alias_7

//----- (00000001401899F0) ----------------------------------------------------
__int64            sr_world_file_street(int a1)
{
  extern void world_file_street(int index);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_file_street(a1);
  return 0;
}
