#include "shared_client.h"

//----- (00000001400C2D50) ----------------------------------------------------
__int64            sr_math_seed_random(unsigned int seed)
{
  extern uint32_t math_seed_random(uint32_t seed);
  return math_seed_random(seed);
}
