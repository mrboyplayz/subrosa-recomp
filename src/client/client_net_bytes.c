#include "shared_client.h"
#include "../engine/net_bits.h"

//----- (000000014007ADF0) ----------------------------------------------------
__int64            sr_net_read_bytes(__m128i *a1, int a2, int a3)
{
  return net_read_bytes(a1, a2, a3);
}

// 14007AE70: returning address of temporary local variable '%__return_address'

//----- (000000014007B180) ----------------------------------------------------
__int64            sr_net_write_bytes(     __m128i *a1, int a2, int a3)
{
  return net_write_bytes(a1, a2, a3);
}

