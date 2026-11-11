#include "shared_client.h"
#include "../engine/net_decode.h"

//----- (000000014018D440) ----------------------------------------------------
__int64            sr_net_read_angle(float *out, int bits)
{
  return net_read_angle(out, bits);
}

//----- (000000014018D510) ----------------------------------------------------
__int64            sr_net_read_delta(_DWORD *out, int base, int bits)
{
  return net_read_delta(out, base, bits);
}

//----- (0000000140192560) ----------------------------------------------------
__int64            sr_net_read_scaled_fraction(float *out, float scale, int bits)
{
  return net_read_scaled_fraction(out, scale, bits);
}
