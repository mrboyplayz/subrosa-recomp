#include "shared_client.h"
#include "../engine/net_bits.h"

//----- (000000014010E610) ----------------------------------------------------
__int64            sr_net_write_angle(float *angle, int bits)
{
  return net_write_angle(angle, bits);
}

