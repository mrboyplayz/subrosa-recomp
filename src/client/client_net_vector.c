#include "shared_client.h"
#include "../engine/net_bits.h"

//----- (00000001401150E0) ----------------------------------------------------
void            sr_net_write_vector_delta(__int64 a1, float *a2, float a3, signed int a4)
{
  net_write_vector_delta((const float *)a1, a2, a3, a4);
}

//----- (00000001401151C0) ----------------------------------------------------
double            sr_net_write_magnitude(float *a1, float a2, int a3)
{
  return net_write_magnitude(a1, a2, a3);
}

//----- (0000000140115230) ----------------------------------------------------
__int64            sr_net_encode_direction(_DWORD *a1, float *a2, int a3)
{
  return net_encode_direction(a1, a2, a3);
}

