#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (0000000140116A40) ----------------------------------------------------
__int64            sr_player_event_text(int a1,      __m128i *a2)
{
  /* Clean implementation: src/engine/player_ring.c, checked against the original executable
     (tools/native-compare suite playerring). */
  extern int player_ring_text(int player, const unsigned char *text);
  return player_ring_text(a1, (const unsigned char *)a2);
}

//----- (0000000140116B00) ----------------------------------------------------
__int64            sr_player_event_values(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/player_ring.c, checked against the original executable
     (tools/native-compare suite playerring). */
  extern int player_ring_values(int player, unsigned int count, unsigned int channel, unsigned int value);
  return player_ring_values(a1, a2, a3, a4);
}
