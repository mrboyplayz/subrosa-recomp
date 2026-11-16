#include "shared_client.h"

//----- (00000001400E8580) ----------------------------------------------------
__int64            asset_load_character_cmc_candidate(int a1, char *a2)
{
  extern void character_load_cmc(int character, const char *name);

  character_load_cmc(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400FBA50) ----------------------------------------------------
__int64 sub_1400FBA50()
{
  extern void character_draw_first_person(void);

  character_draw_first_person();
  return 0; /* compatibility result discarded by all reviewed callers */
}
