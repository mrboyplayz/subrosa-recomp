#include "shared_client.h"
#include "../engine/net_bits.h"

//----- (0000000140115AE0) ----------------------------------------------------
__int64            sr_net_read_bits(_DWORD *a1, int a2)
{
  return net_read_bits(a1, a2);
}

//----- (0000000140115BD0) ----------------------------------------------------
__int64            sr_net_read_optional_index(int *a1, int a2)
{
  char encoded_bit_count;
  int decoded_index;
  int encoded_index;

  encoded_bit_count = a2;
  sr_net_read_bits(&encoded_index, a2);
  decoded_index = encoded_index;
  if ( encoded_index == (1 << encoded_bit_count) - 1 )
    decoded_index = -1;
  *a1 = decoded_index;
  return 1;
}

//----- (0000000140115C20) ----------------------------------------------------
__int64            sr_net_read_bits_scaled(_DWORD *a1, int a2, int a3)
{
  return net_read_bits_scaled(a1, a2, (unsigned int)a3);
}

//----- (0000000140115D20) ----------------------------------------------------
__int64            sr_net_read_signed_bits(int *a1, int a2)
{
  char encoded_bit_count;
  __int64 result;
  int encoded_signed_value;

  encoded_bit_count = a2;
  sr_net_read_bits(&encoded_signed_value, a2);
  result = 1;
  if ( (encoded_signed_value & (1 << (encoded_bit_count - 1))) == 1 << (encoded_bit_count - 1) )
    *a1 = encoded_signed_value | (-1 << encoded_bit_count);
  else
    *a1 = encoded_signed_value;
  return result;
}

//----- (0000000140115D90) ----------------------------------------------------
__int64            sr_net_write_bits(_DWORD *a1, signed int a2)
{
  return net_write_bits(a1, a2);
}

//----- (0000000140115E60) ----------------------------------------------------
__int64            sr_net_write_bits_always_success(_DWORD *a1, signed int a2)
{
  return net_write_bits_always_success(a1, a2);
}

//----- (0000000140115E80) ----------------------------------------------------
__int64            sr_net_write_bits_scaled(_DWORD *a1, int a2, unsigned int a3)
{
  return net_write_bits_scaled(a1, a2, a3);
}

//----- (0000000140115F70) ----------------------------------------------------
__int64            sr_net_write_bits_always_success_alt(_DWORD *a1, signed int a2)
{
  return net_write_bits_always_success_alt(a1, a2);
}

