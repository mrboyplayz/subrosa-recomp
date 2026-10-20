#include "shared_client.h"

//----- (000000014001D080) ----------------------------------------------------
unsigned int *sr_physics_solve()
{
  extern void physics_solve(void);
  physics_solve();
  /* The original returns its last bond-scan pointer; no caller uses it. */
  return &g_1B4657C80;
}
#undef unused_macro_alias
#undef unused_macro_alias_2

