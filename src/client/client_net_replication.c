#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

//----- (0000000140105AB0) ----------------------------------------------------
unsigned int *           sub_140105AB0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 input_value;
  __int64 replication_peer_offset;
  unsigned int *result;
  unsigned int element_index;
  __int64 iteration_count;

  input_value = a1;
  replication_peer_offset = 47224LL * a1;
  result = (unsigned int *)(((unsigned __int16)dword_140404A6C[replication_peer_offset + 438924123] + 1) & 0x7FF);
  if ( (_DWORD)result != dword_140404A6C[replication_peer_offset + 438924125] )
  {
    element_index = 0;
    iteration_count = 0;
    result = &dword_140404A6C[replication_peer_offset + 438920027];
    while ( *result )
    {
      ++element_index;
      ++iteration_count;
      result += 4;
      if ( iteration_count >= 1024 )
        return result;
    }
    dword_140404A6C[47224 * input_value + 438920027 + 4 * element_index] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924126 + replication_peer_offset] = 0;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924127 + replication_peer_offset] = element_index;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924128 + replication_peer_offset] = a2;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924129 + replication_peer_offset] = a3;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924130 + replication_peer_offset] = a4;
    result = (unsigned int *)(((unsigned __int16)dword_140404A6C[replication_peer_offset + 438924123] + 1) & 0x7FF);
    dword_140404A6C[replication_peer_offset + 438924123] = (unsigned int)result;
  }
  return result;
}

//----- (0000000140105BD0) ----------------------------------------------------
__int64            sub_140105BD0(float a1)
{
  float pow_result;

  pow_result = pow(a1, 1.75);
  return (unsigned int)(int)(float)((float)(1.0 - (float)(pow_result * 0.00390625)) * 256.0);
}

//----- (0000000140105C20) ----------------------------------------------------
__int64            sub_140105C20(int a1, float *a2)
{
  __int64 replication_peer_offset;
  signed int iteration_count;
  unsigned int *record_byte_offset;
  unsigned int *state_address;
  __int64 input_value;
  __int64 table_value;
  signed int iteration_count_2;
  unsigned __int64 element_index;
  int rol4_result;
  int iteration_count_3;
  __int64 element_index_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  signed int iteration_count_4;
  float *state_address_2;
  unsigned __int64 element_index_3;
  _DWORD *running_total;
  int rol4_result_2;
  __int64 scaled_index_4;
  __int64 result;
  int masked_bits;
  __int64 scaled_index_5;
  __int64 masked_bits_2;
  __int64 scaled_index_6;

  replication_peer_offset = 47224LL * a1;
  g_144CBA9A0 = 0;
  g_144CBA9B0 = 0;
  iteration_count = 0;
  record_byte_offset = &dword_140404A6C[replication_peer_offset + 438920028];
  state_address = &g_18329E308;
  input_value = a1;
  do
  {
    if ( *(record_byte_offset - 1) )
    {
      if ( !*record_byte_offset )
      {
        table_value = (int)record_byte_offset[1];
        dword_140404A6C[(table_value >> 5) + 19060685] |= 1 << (record_byte_offset[1] & 0x1F);
        if ( !dword_140404A6C[7166 * table_value + 280651303] )
          sub_1401060F0(a1, iteration_count);
      }
    }
    ++iteration_count;
    record_byte_offset += 4;
  }
  while ( iteration_count < 1024 );
  iteration_count_2 = 0;
  element_index = 0;
  rol4_result = 1;
  do
  {
    if ( *state_address && (rol4_result & dword_140404A6C[(element_index >> 5) + 19060685]) == 0 )
      sub_140105AB0(a1, 0, 0, iteration_count_2);
    ++iteration_count_2;
    rol4_result = __ROL4__(rol4_result, 1);
    ++element_index;
    state_address += 7166;
  }
  while ( iteration_count_2 < 256 );
  iteration_count_3 = 0;
  g_144CBA9A0 = 0;
  element_index_2 = 0;
  g_144CBA9B0 = 0;
  g_144CBA9C0 = 0;
  g_144CBA9D0 = 0;
  g_144CBA9E0 = 0;
  g_144CBA9F0 = 0;
  g_144CBAA00 = 0;
  g_144CBAA10 = 0;
  do
  {
    if ( dword_140404A6C[47224 * input_value + 438920027 + 4 * element_index_2] )
    {
      if ( dword_140404A6C[47224 * input_value + 438920028 + 4 * element_index_2] == 1 )
      {
        scaled_index = (int)dword_140404A6C[47224 * input_value + 438920029 + 4 * element_index_2];
        dword_140404A6C[(scaled_index >> 5) + 19060685] |= 1 << (scaled_index & 0x1F);
        if ( !dword_140404A6C[1760 * scaled_index + 278845893]
          || dword_140404A6C[1760 * scaled_index + 278845905]
          || a1 != 255
          && (float)((float)((float)((float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845917] - a2[1])
                                   * (float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845917] - a2[1]))
                           + (float)((float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845916] - *a2)
                                   * (float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845916] - *a2)))
                   + (float)((float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845918] - a2[2])
                           * (float)(*(float *)&dword_140404A6C[1760 * scaled_index + 278845918] - a2[2]))) > 69696.0 )
        {
          scaled_index_2 = 47224 * input_value;
          scaled_index_3 = (int)dword_140404A6C[47224 * input_value + 438924123];
          if ( (((_WORD)scaled_index_3 + 1) & 0x7FF) != dword_140404A6C[47224 * input_value + 438924125] )
          {
            dword_140404A6C[5 * scaled_index_3 + 438924126 + scaled_index_2] = 1;
            dword_140404A6C[5 * (int)dword_140404A6C[scaled_index_2 + 438924123] + 438924127 + scaled_index_2] = iteration_count_3;
            dword_140404A6C[scaled_index_2 + 438924123] = ((unsigned __int16)dword_140404A6C[scaled_index_2 + 438924123] + 1) & 0x7FF;
          }
        }
      }
    }
    ++iteration_count_3;
    ++element_index_2;
  }
  while ( iteration_count_3 < 1024 );
  iteration_count_4 = 0;
  state_address_2 = (float *)&g_182BBB1E4;
  element_index_3 = 0;
  running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + replication_peer_offset * 4 + 1759770560);
  rol4_result_2 = 1;
  do
  {
    if ( *((_DWORD *)state_address_2 - 25)
      && (rol4_result_2 & dword_140404A6C[(element_index_3 >> 5) + 19060685]) == 0
      && !*((_DWORD *)state_address_2 - 13)
      && (a1 == 255
       || (float)((float)((float)((float)(*(state_address_2 - 1) - a2[1]) * (float)(*(state_address_2 - 1) - a2[1]))
                        + (float)((float)(*(state_address_2 - 2) - *a2) * (float)(*(state_address_2 - 2) - *a2)))
                + (float)((float)(*state_address_2 - a2[2]) * (float)(*state_address_2 - a2[2]))) < 65536.0) )
    {
      sub_140105AB0(a1, 1u, *((_DWORD *)state_address_2 - 20), iteration_count_4);
      *running_total = -1;
    }
    ++iteration_count_4;
    rol4_result_2 = __ROL4__(rol4_result_2, 1);
    ++element_index_3;
    state_address_2 += 1760;
    running_total += 5;
  }
  while ( iteration_count_4 < 1024 );
  scaled_index_4 = 47224 * input_value;
  result = dword_140404A6C[47224 * input_value + 438924124];
  if ( (_DWORD)result != dword_140404A6C[47224 * input_value + 438924123] )
  {
    masked_bits = dword_140404A6C[47224 * input_value + 438924124];
    do
    {
      scaled_index_5 = scaled_index_4 * 4 + 20LL * (int)result;
      masked_bits_2 = *(int *)((char *)&g_1A8E617E8 + scaled_index_5);
      if ( !*(unsigned int *)((char *)&g_1A8E617E4 + scaled_index_5) )
      {
        scaled_index_6 = 2 * (masked_bits_2 + 11806 * input_value);
        dword_140404A6C[2 * scaled_index_6 + 438920027] = 1;
        dword_140404A6C[2 * scaled_index_6 + 438920028] = dword_140404A6C[5 * (int)dword_140404A6C[scaled_index_4 + 438924124]
                                                             + 438924128
                                                             + scaled_index_4];
        dword_140404A6C[2 * scaled_index_6 + 438920029] = dword_140404A6C[5 * (int)dword_140404A6C[scaled_index_4 + 438924124]
                                                             + 438924130
                                                             + scaled_index_4];
        dword_140404A6C[2 * scaled_index_6 + 438920030] = 0x10000;
        masked_bits = dword_140404A6C[scaled_index_4 + 438924124];
      }
      if ( dword_140404A6C[5 * masked_bits + 438924126 + scaled_index_4] == 1 )
      {
        dword_140404A6C[47224 * input_value + 438920027 + 4 * masked_bits_2] = 0;
        masked_bits = dword_140404A6C[scaled_index_4 + 438924124];
      }
      result = ((_WORD)masked_bits + 1) & 0x7FF;
      dword_140404A6C[scaled_index_4 + 438924124] = result;
      masked_bits = ((_WORD)masked_bits + 1) & 0x7FF;
    }
    while ( (_DWORD)result != dword_140404A6C[scaled_index_4 + 438924123] );
  }
  return result;
}

//----- (00000001401060F0) ----------------------------------------------------
__int64            sub_1401060F0(int a1, unsigned int a2)
{
  __int64 replication_peer_offset;
  __int64 table_value;
  __int64 result;

  replication_peer_offset = 47224LL * a1;
  table_value = (int)dword_140404A6C[replication_peer_offset + 438924123];
  result = ((_WORD)table_value + 1) & 0x7FF;
  if ( (_DWORD)result != dword_140404A6C[replication_peer_offset + 438924125] )
  {
    dword_140404A6C[5 * table_value + 438924126 + replication_peer_offset] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[replication_peer_offset + 438924123] + 438924127 + replication_peer_offset] = a2;
    result = ((unsigned __int16)dword_140404A6C[replication_peer_offset + 438924123] + 1) & 0x7FF;
    dword_140404A6C[replication_peer_offset + 438924123] = result;
  }
  return result;
}

//----- (0000000140106160) ----------------------------------------------------
__int64            sub_140106160(int a1)
{
  __int64 input_value;
  __int64 replication_peer_offset;
  unsigned int table_value;
  __int64 result;
  __int64 running_total;
  int rol4_result;
  __int64 lookup_index;
  int rol4_result_2;
  __int64 running_total_2;
  __int64 element_index;
  __int64 remaining_count;
  __int64 scaled_index;
  unsigned int *state_address;
  __int64 element_index_2;
  int rol4_result_3;
  __int64 element_index_3;
  __int64 remaining_count_2;
  __int64 remaining_count_3;
  unsigned int *state_address_2;
  __int64 remaining_count_4;
  int rol4_result_4;
  __int64 running_total_3;
  __int64 element_index_4;
  __int64 iteration_count;
  unsigned int *state_address_3;

  input_value = a1;
  replication_peer_offset = 47224LL * a1;
  table_value = dword_140404A6C[replication_peer_offset + 438887426];
  result = g_1AD04B20C - table_value;
  if ( (int)result < 192 )
  {
    running_total = 0;
    rol4_result = 1;
    lookup_index = (unsigned __int8)table_value;
    rol4_result_2 = 1;
    running_total_2 = 0;
    element_index = 0;
    remaining_count = 256;
    scaled_index = 88LL * (unsigned __int8)table_value + 47224 * input_value;
    state_address = &dword_140404A6C[replication_peer_offset + 438888533];
    do
    {
      if ( (rol4_result_2 & dword_140404A6C[scaled_index + 438897493 + (element_index >> 5)]) != 0 )
      {
        state_address[2] = dword_140404A6C[replication_peer_offset + 438887426];
        *state_address = dword_140404A6C[79616 * lookup_index + 137297854 + running_total_2];
      }
      ++element_index;
      rol4_result_2 = __ROL4__(rol4_result_2, 1);
      running_total_2 += 121;
      state_address += 3;
      --remaining_count;
    }
    while ( remaining_count );
    element_index_2 = 0;
    rol4_result_3 = 1;
    element_index_3 = 0;
    remaining_count_2 = 512;
    do
    {
      if ( (rol4_result_3 & dword_140404A6C[scaled_index + 438897501 + (element_index_3 >> 5)]) != 0 )
        dword_140404A6C[47224 * input_value + 438887510 + 2 * element_index_2] = dword_140404A6C[replication_peer_offset + 438887426];
      ++element_index_3;
      rol4_result_3 = __ROL4__(rol4_result_3, 1);
      ++element_index_2;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    remaining_count_3 = 1024;
    state_address_2 = &dword_140404A6C[replication_peer_offset + 438889301];
    remaining_count_4 = 1024;
    rol4_result_4 = 1;
    running_total_3 = 0;
    element_index_4 = 0;
    do
    {
      if ( (rol4_result_4 & dword_140404A6C[scaled_index + 438897517 + (element_index_4 >> 5)]) != 0 )
      {
        state_address_2[2] = dword_140404A6C[replication_peer_offset + 438887426];
        *state_address_2 = dword_140404A6C[79616 * lookup_index + 137358014 + running_total_3];
      }
      ++element_index_4;
      rol4_result_4 = __ROL4__(rol4_result_4, 1);
      running_total_3 += 9;
      state_address_2 += 5;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    iteration_count = 0;
    state_address_3 = &dword_140404A6C[replication_peer_offset + 438894421];
    do
    {
      result = scaled_index + (iteration_count >> 5);
      if ( (rol4_result & dword_140404A6C[result + 438897549]) != 0 )
      {
        state_address_3[2] = dword_140404A6C[replication_peer_offset + 438887426];
        result = dword_140404A6C[79616 * lookup_index + 137367230 + running_total];
        *state_address_3 = result;
      }
      ++iteration_count;
      rol4_result = __ROL4__(rol4_result, 1);
      running_total += 10;
      state_address_3 += 3;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
  }
  return result;
}

//----- (000000014010E6C0) ----------------------------------------------------
__int64            sub_14010E6C0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int scaled_index;
  __int64 result;
  char lobyte_result;
  signed int remaining_amount;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  signed int remaining_amount_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_2;
  signed int remaining_amount_3;
  char cached_packet_out_bit;
  unsigned int remaining_bits_3;
  unsigned int integer_difference_3;
  int encoded_value;

  if ( !a3 )
    goto LABEL_27;
  scaled_index = *a1 - a2;
  if ( (unsigned int)(scaled_index + 8) <= 0xF )
  {
    result = packet_out_byte;
    lobyte_result = packet_out_bit;
    remaining_amount = 1;
    if ( (int)packet_out_byte < 0x10000 )
    {
      remaining_bits = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << remaining_amount) - 1) << lobyte_result);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
        integer_difference = 8 - packet_out_bit;
        result = packet_out_byte;
        if ( remaining_amount < 8 - packet_out_bit )
          break;
        lobyte_result = 0;
        packet_out_bit = 0;
        if ( remaining_amount == integer_difference )
        {
          result = ++packet_out_byte;
          goto LABEL_11;
        }
        result = packet_out_byte + 1;
        remaining_bits >>= integer_difference;
        remaining_amount -= integer_difference;
        ++packet_out_byte;
        if ( remaining_amount <= 0 )
          goto LABEL_11;
      }
      lobyte_result = remaining_amount + LOBYTE(packet_out_bit);
      packet_out_bit += remaining_amount;
    }
LABEL_11:
    remaining_amount_2 = 4;
    if ( (int)result < 0x10000 )
    {
      remaining_bits_2 = scaled_index & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << remaining_amount_2) - 1) << lobyte_result);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
        result = packet_out_bit;
        integer_difference_2 = 8 - packet_out_bit;
        if ( remaining_amount_2 < 8 - packet_out_bit )
          break;
        packet_out_bit = 0;
        if ( remaining_amount_2 == integer_difference_2 )
          goto LABEL_25;
        remaining_amount_2 -= integer_difference_2;
        result = packet_out_byte + 1;
        remaining_bits_2 >>= integer_difference_2;
        ++packet_out_byte;
        lobyte_result = 0;
        if ( remaining_amount_2 <= 0 )
          return result;
      }
      result = remaining_amount_2 + packet_out_bit;
      packet_out_bit += remaining_amount_2;
    }
    return result;
  }
  if ( (unsigned int)(scaled_index + 256) > 0x1FF )
  {
LABEL_27:
    encoded_value = 1;
    sr_net_write_bits(&encoded_value, 1);
    sr_net_write_bits(&encoded_value, 1);
    return sr_net_write_bits(a1, a4);
  }
  encoded_value = 1;
  sr_net_write_bits(&encoded_value, 1);
  encoded_value = 0;
  sr_net_write_bits(&encoded_value, 1);
  result = packet_out_byte;
  remaining_amount_3 = 9;
  if ( (int)packet_out_byte < 0x10000 )
  {
    cached_packet_out_bit = packet_out_bit;
    remaining_bits_3 = scaled_index & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + (int)result) &= ~(((1 << remaining_amount_3) - 1) << cached_packet_out_bit);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_3 << SLOBYTE(packet_out_bit);
      result = packet_out_bit;
      integer_difference_3 = 8 - packet_out_bit;
      if ( remaining_amount_3 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( remaining_amount_3 == integer_difference_3 )
      {
LABEL_25:
        ++packet_out_byte;
        return result;
      }
      remaining_amount_3 -= integer_difference_3;
      result = packet_out_byte + 1;
      remaining_bits_3 >>= integer_difference_3;
      ++packet_out_byte;
      cached_packet_out_bit = 0;
      if ( remaining_amount_3 <= 0 )
        return result;
    }
    result = remaining_amount_3 + packet_out_bit;
    packet_out_bit += remaining_amount_3;
  }
  return result;
}

//----- (000000014010E9B0) ----------------------------------------------------
__int64            sub_14010E9B0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int scaled_index;
  int selection_code;
  signed int cached_packet_out_byte;
  unsigned int integer_sum;
  signed int remaining_amount;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  signed int remaining_amount_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_2;
  signed int bit_count;
  _DWORD *encoded_value;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010E9B0[64];
#define scratch_buffer (*(_DWORD (*)[6])(void *)(sr_frame_14010E9B0 + 0)) /* [rsp+20h] */
#define encoded_value_2 (*(int (*))(void *)(sr_frame_14010E9B0 + 48)) /* [rsp+50h] */

  if ( a3 )
  {
    scaled_index = *a1 - a2;
    scratch_buffer[0] = scaled_index;
    if ( g_16B2A224C && !scaled_index )
    {
      encoded_value_2 = 0;
      return sr_net_write_bits(&encoded_value_2, 1);
    }
    if ( scaled_index >= (signed int)-g_165D84970 && scaled_index < (int)g_165D84970 )
    {
      selection_code = 0;
      goto LABEL_11;
    }
    if ( scaled_index >= (signed int)-g_165D84974 )
    {
      selection_code = 1;
      if ( scaled_index < (int)g_165D84974 )
        goto LABEL_11;
    }
  }
  selection_code = 2;
LABEL_11:
  cached_packet_out_byte = packet_out_byte;
  LOBYTE(integer_sum) = packet_out_bit;
  if ( g_16B2A224C )
  {
    remaining_amount = 1;
    if ( (int)packet_out_byte < 0x10000 )
    {
      remaining_bits = 1;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount) - 1) << integer_sum);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
        integer_difference = 8 - packet_out_bit;
        cached_packet_out_byte = packet_out_byte;
        if ( remaining_amount < 8 - packet_out_bit )
          break;
        if ( remaining_amount == integer_difference )
        {
          cached_packet_out_byte = ++packet_out_byte;
          integer_sum = 0;
          goto LABEL_20;
        }
        cached_packet_out_byte = packet_out_byte + 1;
        remaining_bits >>= integer_difference;
        LOBYTE(integer_sum) = 0;
        ++packet_out_byte;
        remaining_amount -= integer_difference;
        packet_out_bit = 0;
        if ( remaining_amount <= 0 )
          goto LABEL_21;
      }
      integer_sum = remaining_amount + packet_out_bit;
LABEL_20:
      packet_out_bit = integer_sum;
    }
  }
LABEL_21:
  if ( selection_code )
  {
    encoded_value_2 = 1;
    if ( selection_code == 1 )
    {
      sr_net_write_bits(&encoded_value_2, 1);
      encoded_value_2 = 0;
      sr_net_write_bits(&encoded_value_2, 1);
      bit_count = g_165D84964;
      encoded_value = scratch_buffer;
    }
    else
    {
      sr_net_write_bits(&encoded_value_2, 1);
      sr_net_write_bits(&encoded_value_2, 1);
      bit_count = a4;
      encoded_value = a1;
    }
  }
  else
  {
    remaining_amount_2 = 1;
    if ( cached_packet_out_byte < 0x10000 )
    {
      remaining_bits_2 = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount_2) - 1) << integer_sum);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
        integer_difference_2 = 8 - packet_out_bit;
        if ( remaining_amount_2 < 8 - packet_out_bit )
          break;
        if ( remaining_amount_2 == integer_difference_2 )
        {
          ++packet_out_byte;
          encoded_value = scratch_buffer;
          bit_count = g_165D84960;
          packet_out_bit = 0;
          return sr_net_write_bits(encoded_value, bit_count);
        }
        LOBYTE(integer_sum) = 0;
        cached_packet_out_byte = packet_out_byte + 1;
        remaining_bits_2 >>= integer_difference_2;
        remaining_amount_2 -= integer_difference_2;
        ++packet_out_byte;
        packet_out_bit = 0;
        if ( remaining_amount_2 <= 0 )
        {
          bit_count = g_165D84960;
          encoded_value = scratch_buffer;
          return sr_net_write_bits(encoded_value, bit_count);
        }
      }
      packet_out_bit += remaining_amount_2;
    }
    bit_count = g_165D84960;
    encoded_value = scratch_buffer;
  }
  return sr_net_write_bits(encoded_value, bit_count);
}
#undef scratch_buffer
#undef encoded_value_2

//----- (000000014010EF40) ----------------------------------------------------
__int64            sub_14010EF40(int a1)
{
  __int64 item_record_offset;
  __int64 result;

  item_record_offset = 1760LL * a1;
  sr_net_write_bits(&dword_140404A6C[item_record_offset + 278845898], 8);
  sr_net_write_bits(&dword_140404A6C[item_record_offset + 278845903], 10);
  sr_net_write_bits(&dword_140404A6C[item_record_offset + 278845902], 10);
  result = sr_net_write_bits(&dword_140404A6C[item_record_offset + 278845904], 4);
  if ( dword_140404A6C[item_record_offset + 278845898] == 39 )
  {
    sr_net_write_bits(&dword_140404A6C[item_record_offset + 278846111], 5);
    return sr_net_write_bits(&dword_140404A6C[item_record_offset + 278846112], 5);
  }
  return result;
}

//----- (000000014010EFF0) ----------------------------------------------------
__int64            sub_14010EFF0(int a1, int a2)
{
  __int64 input_value;
  int saved_encoded_value;
  __int64 shifted_bits;
  int masked_bits;
  int masked_bits_2;
  int masked_bits_3;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int shifted_bits_2;
  __int64 saved_float_word;
  __int64 shifted_bits_3;
  int masked_bits_4;
  signed int bit_count;
  signed int cached_packet_out_byte;
  __int64 saved_cached_packet_out_byte;
  unsigned int masked_bits_5;
  __int64 saved_cached_packet_out_byte_2;
  unsigned int masked_bits_6;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  int masked_bits_7;
  __int64 masked_bits_8;
  unsigned int *state_address;
  __int64 iteration_count;
  unsigned int masked_bits_9;
  char lobyte_result;
  __int64 iteration_count_2;
  signed int cached_packet_out_byte_2;
  unsigned int *state_address_2;
  signed int remaining_amount;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  __int64 scaled_index_6;
  unsigned int *state_address_3;
  float packed_word_bits;
  float packed_word_bits_2;
  float weighted_sum;
  float squared_value;
  float square_root;
  float selected_scalar;
  int masked_bits_10;
  float selected_scalar_2;
  int cached_packet_out_bit;
  unsigned int masked_bits_11;
  __int64 i;
  signed int remaining_amount_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_2;
  char *state_address_4;
  unsigned int *encoded_value;
  _DWORD *encoded_value_2;
  unsigned int *state_address_5;
  __int64 saved_cached_packet_out_byte_3;
  unsigned int masked_bits_12;
  __int64 masked_bits_13;
  __int64 masked_bits_14;
  __int64 saved_cached_packet_out_byte_4;
  unsigned int masked_bits_15;
  int cached_masked_bits;
  _DWORD *saved_state_address;
  _DWORD *encoded_value_3;
  signed int cached_packet_out_byte_3;
  unsigned int *encoded_value_4;
  unsigned int *saved_state_address_2;
  _DWORD *encoded_value_5;
  _DWORD *encoded_value_6;
  __int64 j;
  signed int remaining_amount_3;
  unsigned int remaining_bits_3;
  unsigned int integer_difference_3;
  _DWORD *encoded_value_7;
  __int64 shifted_bits_4;
  __int64 saved_cached_packet_out_byte_5;
  unsigned int masked_bits_16;
  __int64 shifted_bits_5;
  __int64 saved_cached_packet_out_byte_6;
  unsigned int masked_bits_17;
  __int64 shifted_bits_6;
  int cached_masked_bits_2;
  _DWORD *saved_encoded_value_2;
  _DWORD *encoded_value_8;
  _DWORD *encoded_value_9;
  unsigned __int64 byte_count;
  __int64 saved_cached_packet_out_byte_7;
  unsigned int masked_bits_18;
  __int64 saved_encoded_value_3;
  signed int iteration_count_3;
  __int64 shifted_bits_7;
  signed int iteration_count_4;
  signed int iteration_count_5;
  signed int cached_packet_out_byte_4;
  __int64 saved_cached_packet_out_byte_8;
  unsigned int masked_bits_19;
  signed int iteration_count_6;
  __int64 masked_bits_20;
  __int64 saved_iteration_count;
  unsigned int masked_bits_21;
  signed int iteration_count_7;
  signed int iteration_count_8;
  signed int cached_packet_out_byte_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010EFF0[144];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 0)) /* [rsp+0h] */
#define encoded_value_10 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 32)) /* [rsp+20h] */
#define encoded_value_11 (*(int (*))(void *)(sr_frame_14010EFF0 + 40)) /* [rsp+28h] */
#define state_address_6 (*(char * (*))(void *)(sr_frame_14010EFF0 + 48)) /* [rsp+30h] */
#define state_address_7 (*(char * (*))(void *)(sr_frame_14010EFF0 + 56)) /* [rsp+38h] */
#define saved_masked_bits (*(int (*))(void *)(sr_frame_14010EFF0 + 64)) /* [rsp+40h] */
#define state_address_8 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 72)) /* [rsp+48h] */
#define encoded_value_12 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 80)) /* [rsp+50h] */
#define state_address_9 (*(char * (*))(void *)(sr_frame_14010EFF0 + 88)) /* [rsp+58h] */
#define encoded_value_13 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 96)) /* [rsp+60h] */
#define saved_float_word_2 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 104)) /* [rsp+68h] */
#define saved_encoded_value_4 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 112)) /* [rsp+70h] */
#define pair64_result (*(unsigned __int64 (*))(void *)(sr_frame_14010EFF0 + 120)) /* [rsp+78h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14010EFF0 + 128)) /* [rsp+80h] */
#define unused_frame_slot_136 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 136)) /* [rsp+88h] */

  input_value = a2;
  saved_encoded_value = a1;
  encoded_value_11 = a1;
  if ( a2 == 255 )
    goto LABEL_19;
  shifted_bits = (__int64)a1 << 7;
  if ( game_tick - *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) > 0x258 )
  {
    masked_bits = *(unsigned int *)((char *)&g_1873DE460 + shifted_bits);
    if ( masked_bits == 2 )
    {
      if ( ((*(unsigned int *)((char *)&g_1873DE484 + shifted_bits) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( masked_bits == 9 || masked_bits == 19 )
    {
      goto LABEL_70;
    }
  }
  masked_bits_2 = *(unsigned int *)((char *)&g_1873DE460 + shifted_bits);
  if ( masked_bits_2 == 2 )
  {
    masked_bits_3 = *(unsigned int *)((char *)&g_1873DE484 + shifted_bits);
    if ( masked_bits_3 == 4 )
    {
      if ( dword_140404A6C[47224 * input_value + 438887410] )
        goto LABEL_11;
LABEL_70:
      encoded_value_11 = 23;
      sr_net_write_bits(&encoded_value_11, 6);
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( masked_bits_3 == 6
      && dword_140404A6C[47224 * input_value + 438887411] != *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) )
    {
      goto LABEL_70;
    }
  }
  else if ( masked_bits_2 == 21 )
  {
    if ( *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) == dword_140404A6C[47224 * input_value + 438887411] )
      goto LABEL_19;
    goto LABEL_70;
  }
LABEL_11:
  switch ( masked_bits_2 )
  {
    case 12:
      scaled_index = (int)dword_140404A6C[47224 * input_value + 438887411];
      if ( (_DWORD)scaled_index == -1 )
        break;
      scaled_index_2 = 3597 * scaled_index;
      shifted_bits_2 = *(int *)((char *)&g_1873DE480 + shifted_bits) >> 4;
LABEL_31:
      if ( dword_140404A6C[scaled_index_2 + 71856286] != (shifted_bits_2 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      scaled_index_3 = (int)dword_140404A6C[47224 * input_value + 438887411];
      if ( (_DWORD)scaled_index_3 == -1 )
        break;
      shifted_bits_2 = *(unsigned int *)((char *)&g_1873DE480 + shifted_bits);
      scaled_index_2 = 3597 * scaled_index_3;
      goto LABEL_31;
    case 2:
      scaled_index_4 = 47224 * input_value;
      scaled_index_5 = (int)dword_140404A6C[47224 * input_value + 438887411];
      if ( (_DWORD)scaled_index_5 == -1 || !dword_140404A6C[3597 * scaled_index_5 + 71856277] )
      {
        masked_bits_7 = *(unsigned int *)((char *)&g_1873DE484 + shifted_bits);
        if ( (unsigned int)(masked_bits_7 - 1) <= 1 )
        {
          masked_bits_8 = *(int *)((char *)&g_1873DE488 + shifted_bits);
          if ( (_DWORD)masked_bits_8 != -1 )
          {
            if ( masked_bits_7 == 1 )
            {
              if ( (_DWORD)scaled_index_5 != -1 )
              {
                state_address = &dword_140404A6C[3597 * scaled_index_5 + 71859827];
                if ( *(_BYTE *)state_address )
                {
                  if ( dword_140404A6C[3597 * scaled_index_5 + 71856292] == (_DWORD)masked_bits_8 )
                  {
                    sr_net_write_bits((unsigned int *)((char *)&g_1873DE460 + shifted_bits), 6);
                    sr_net_write_bits((unsigned int *)((char *)&g_1873DE464 + shifted_bits), 28);
                    iteration_count = -1;
                    do
                      ++iteration_count;
                    while ( *((_BYTE *)state_address + iteration_count) );
                    encoded_value_11 = iteration_count;
                    sr_net_write_bits(&encoded_value_11, 6);
                    sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits), 4);
                    sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits), 10);
                    sr_net_write_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits), 4);
                    masked_bits_9 = iteration_count & 0x3F;
                    if ( masked_bits_9 )
                    {
                      lobyte_result = packet_out_bit;
                      iteration_count_2 = 0;
                      cached_packet_out_byte_2 = packet_out_byte;
                      state_address_2 = &dword_140404A6C[3597 * dword_140404A6C[47224 * input_value + 438887411] + 71859827];
                      do
                      {
                        remaining_amount = 7;
                        remaining_bits = *((_BYTE *)state_address_2 + iteration_count_2) & 0x7F;
                        if ( cached_packet_out_byte_2 < 0x10000 )
                        {
                          while ( 1 )
                          {
                            *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount) - 1) << lobyte_result);
                            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
                            integer_difference = 8 - packet_out_bit;
                            cached_packet_out_byte_2 = packet_out_byte;
                            if ( remaining_amount < 8 - packet_out_bit )
                              break;
                            lobyte_result = 0;
                            packet_out_bit = 0;
                            if ( remaining_amount == integer_difference )
                            {
                              cached_packet_out_byte_2 = ++packet_out_byte;
                              goto LABEL_53;
                            }
                            cached_packet_out_byte_2 = packet_out_byte + 1;
                            remaining_bits >>= integer_difference;
                            remaining_amount -= integer_difference;
                            ++packet_out_byte;
                            if ( remaining_amount <= 0 )
                              goto LABEL_53;
                          }
                          lobyte_result = remaining_amount + LOBYTE(packet_out_bit);
                          packet_out_bit += remaining_amount;
                        }
LABEL_53:
                        ++iteration_count_2;
                      }
                      while ( iteration_count_2 < masked_bits_9 );
                    }
                    return 0; /* compatibility result discarded by all reviewed callers */
                  }
                }
              }
              scaled_index_6 = 7166 * masked_bits_8;
              state_address_3 = &g_18329E8D4;
            }
            else
            {
              scaled_index_6 = 1760 * masked_bits_8;
              state_address_3 = &g_182BBB1DC;
            }
            LODWORD(packed_word_bits) = state_address_3[scaled_index_6];
            LODWORD(packed_word_bits_2) = state_address_3[scaled_index_6 + 1];
            weighted_sum = *(float *)&state_address_3[scaled_index_6 + 2];
            pair64_result = __PAIR64__(LODWORD(packed_word_bits_2), LODWORD(packed_word_bits));
            unused_written_slot = weighted_sum;
            squared_value = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920025] - packed_word_bits_2)
                                * (float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920025] - packed_word_bits_2))
                        + (float)((float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920024] - packed_word_bits)
                                * (float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920024] - packed_word_bits)))
                + (float)((float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920026] - weighted_sum)
                        * (float)(*(float *)&dword_140404A6C[scaled_index_4 + 438920026] - weighted_sum));
            square_root = fsqrt(squared_value);
            if ( squared_value <= 16384.0 )
            {
              selected_scalar = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&pair64_result, (float *)&dword_140404A6C[scaled_index_4 + 438920024], 0) )
                selected_scalar = 0.5;
              saved_encoded_value = encoded_value_11;
            }
            else
            {
              selected_scalar = 0.5;
            }
            masked_bits_10 = *(unsigned int *)((char *)&g_1873DE48C + shifted_bits);
            selected_scalar_2 = 64.0;
            if ( masked_bits_10 )
            {
              if ( masked_bits_10 == 2 )
                selected_scalar_2 = 128.0;
            }
            else
            {
              selected_scalar_2 = 8.0;
            }
            if ( *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) == 2 )
              selected_scalar_2 = 2.0;
            if ( square_root > (float)(selected_scalar_2 * selected_scalar) )
              goto LABEL_70;
          }
        }
      }
      break;
  }
LABEL_19:
  saved_float_word = saved_encoded_value;
  saved_float_word_2 = saved_encoded_value;
  shifted_bits_3 = (__int64)saved_encoded_value << 7;
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE460 + shifted_bits_3), 6);
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE464 + shifted_bits_3), 28);
  masked_bits_4 = *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3);
  saved_masked_bits = masked_bits_4;
  if ( !masked_bits_4 )
  {
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 4);
    bit_count = 10;
    goto LABEL_21;
  }
  if ( masked_bits_4 == 1 )
  {
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 4);
    bit_count = 6;
LABEL_21:
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), bit_count);
    cached_packet_out_byte = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        cached_packet_out_byte = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      saved_cached_packet_out_byte = cached_packet_out_byte;
      masked_bits_5 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3);
      *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte) = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_3);
      *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte) = masked_bits_5;
      cached_packet_out_byte = packet_out_byte + 12;
      packet_out_byte = cached_packet_out_byte;
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        saved_cached_packet_out_byte_2 = cached_packet_out_byte;
        masked_bits_6 = *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_3);
        *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_2) = *(_QWORD *)((char *)&g_1873DE474 + shifted_bits_3);
        *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_2) = masked_bits_6;
        cached_packet_out_byte = packet_out_byte + 12;
        packet_out_byte += 12;
      }
    }
LABEL_88:
    cached_packet_out_bit = packet_out_bit;
    goto LABEL_89;
  }
  if ( masked_bits_4 != 2 )
  {
    if ( masked_bits_4 == 3 )
    {
      state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 10);
      state_address_7 = (char *)&g_1873DE484 + shifted_bits_3;
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), 8);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits_3), 4);
      cached_packet_out_bit = packet_out_bit;
      state_address_4 = (char *)&g_1873DE480 + shifted_bits_3;
      cached_packet_out_byte = packet_out_byte;
      encoded_value = (unsigned int *)((char *)&g_1873DE484 + shifted_bits_3);
      state_address_9 = (char *)&g_1873DE484 + shifted_bits_3;
      encoded_value_2 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      state_address_6 = (char *)&g_1873DE480 + shifted_bits_3;
      state_address_5 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      encoded_value_13 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      goto LABEL_106;
    }
    cached_packet_out_byte = packet_out_byte;
    goto LABEL_88;
  }
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 6);
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), 4);
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits_3), 10);
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits_3), 4);
  cached_packet_out_bit = packet_out_bit;
  cached_packet_out_byte = packet_out_byte;
  masked_bits_11 = *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) & 0x3F;
  if ( masked_bits_11 )
  {
    for ( i = 0; i < masked_bits_11; ++i )
    {
      remaining_amount_2 = 7;
      remaining_bits_2 = *((_BYTE *)&g_1873DE4A0 + shifted_bits_3 + i) & 0x7F;
      if ( cached_packet_out_byte < 0x10000 )
      {
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount_2) - 1) << cached_packet_out_bit);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
          integer_difference_2 = 8 - packet_out_bit;
          cached_packet_out_byte = packet_out_byte;
          if ( remaining_amount_2 < 8 - packet_out_bit )
            break;
          cached_packet_out_bit = 0;
          packet_out_bit = 0;
          if ( remaining_amount_2 == integer_difference_2 )
          {
            cached_packet_out_byte = ++packet_out_byte;
            goto LABEL_83;
          }
          cached_packet_out_byte = packet_out_byte + 1;
          remaining_bits_2 >>= integer_difference_2;
          remaining_amount_2 -= integer_difference_2;
          ++packet_out_byte;
          if ( remaining_amount_2 <= 0 )
            goto LABEL_83;
        }
        cached_packet_out_bit = remaining_amount_2 + packet_out_bit;
        packet_out_bit += remaining_amount_2;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  state_address_4 = (char *)&g_1873DE480 + shifted_bits_3;
  state_address_6 = (char *)&g_1873DE480 + shifted_bits_3;
  state_address_7 = (char *)&g_1873DE484 + shifted_bits_3;
  state_address_9 = (char *)&g_1873DE484 + shifted_bits_3;
  encoded_value_13 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
  encoded_value = (unsigned int *)((char *)&g_1873DE484 + shifted_bits_3);
  state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
  encoded_value_2 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
  state_address_5 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
  if ( saved_masked_bits == 4 )
  {
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 10);
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), 4);
    sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits_3), 10);
    cached_packet_out_byte = packet_out_byte;
    state_address_4 = (char *)&g_1873DE480 + shifted_bits_3;
    state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        cached_packet_out_byte = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      saved_cached_packet_out_byte_3 = cached_packet_out_byte;
      masked_bits_12 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3);
      masked_bits_13 = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_3);
      state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_3) = masked_bits_13;
      *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_3) = masked_bits_12;
      cached_packet_out_byte = packet_out_byte + 12;
      packet_out_byte = cached_packet_out_byte;
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        masked_bits_14 = *(_QWORD *)((char *)&g_1873DE474 + shifted_bits_3);
        saved_cached_packet_out_byte_4 = cached_packet_out_byte;
        masked_bits_15 = *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_3);
        state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
        *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_4) = masked_bits_14;
        *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_4) = masked_bits_15;
        cached_packet_out_byte = packet_out_byte + 12;
        packet_out_byte += 12;
      }
    }
    cached_packet_out_bit = packet_out_bit;
  }
  else
  {
    if ( saved_masked_bits == 5 )
    {
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 20);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), 10);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits_3), 10);
      encoded_value_10 = (unsigned int *)((char *)&g_1873DE48C + shifted_bits_3);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits_3), 4);
      cached_packet_out_bit = packet_out_bit;
      cached_masked_bits = 5;
      encoded_value_12 = (unsigned int *)((char *)&g_1873DE488 + shifted_bits_3);
      cached_packet_out_byte = packet_out_byte;
      state_address_4 = (char *)&g_1873DE480 + shifted_bits_3;
      state_address_8 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
      goto LABEL_100;
    }
    state_address_5 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits_3);
  }
LABEL_106:
  cached_masked_bits = saved_masked_bits;
  encoded_value_4 = (unsigned int *)((char *)&g_1873DE488 + shifted_bits_3);
  encoded_value_10 = (unsigned int *)((char *)&g_1873DE48C + shifted_bits_3);
  encoded_value_12 = (unsigned int *)((char *)&g_1873DE488 + shifted_bits_3);
  if ( saved_masked_bits != 6 )
  {
LABEL_100:
    saved_state_address = state_address_4;
    encoded_value_3 = state_address_9;
    saved_encoded_value_4 = encoded_value_10;
    pair64_result = (unsigned __int64)state_address_7;
    if ( cached_masked_bits == 7 )
    {
      sr_net_write_bits(encoded_value_2, 16);
      sr_net_write_bits(encoded_value, 10);
      cached_packet_out_byte_3 = packet_out_byte;
      if ( (int)packet_out_byte >= 0x10000 )
      {
        encoded_value_4 = encoded_value_12;
      }
      else
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_3 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        encoded_value_4 = encoded_value_12;
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_3) = *encoded_value_12;
        packet_out_byte += 4;
      }
      sr_net_write_bits(encoded_value_10, 24);
      cached_packet_out_bit = packet_out_bit;
      cached_packet_out_byte = packet_out_byte;
      for ( j = 0; j < 31; ++j )
      {
        remaining_amount_3 = 7;
        remaining_bits_3 = *((_BYTE *)&g_1873DE4A0 + shifted_bits_3 + j) & 0x7F;
        if ( cached_packet_out_byte < 0x10000 )
        {
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount_3) - 1) << cached_packet_out_bit);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_3 << SLOBYTE(packet_out_bit);
            integer_difference_3 = 8 - packet_out_bit;
            cached_packet_out_byte = packet_out_byte;
            if ( remaining_amount_3 < 8 - packet_out_bit )
              break;
            cached_packet_out_bit = 0;
            packet_out_bit = 0;
            if ( remaining_amount_3 == integer_difference_3 )
            {
              cached_packet_out_byte = ++packet_out_byte;
              goto LABEL_117;
            }
            cached_packet_out_byte = packet_out_byte + 1;
            remaining_bits_3 >>= integer_difference_3;
            remaining_amount_3 -= integer_difference_3;
            ++packet_out_byte;
            if ( remaining_amount_3 <= 0 )
              goto LABEL_117;
          }
          cached_packet_out_bit = remaining_amount_3 + packet_out_bit;
          packet_out_bit += remaining_amount_3;
        }
LABEL_117:
        ;
      }
      saved_state_address_2 = state_address_8;
      encoded_value_5 = state_address_6;
      encoded_value_6 = encoded_value_13;
LABEL_156:
      saved_float_word = saved_float_word_2;
      goto LABEL_157;
    }
    encoded_value_5 = state_address_4;
    encoded_value_6 = encoded_value_13;
    state_address_6 = state_address_4;
    switch ( saved_masked_bits )
    {
      case 17:
        sr_net_write_bits(encoded_value_2, 10);
        sr_net_write_bits(encoded_value, 1);
        sr_net_write_bits(encoded_value_12, 8);
        encoded_value_5 = saved_state_address;
        saved_state_address_2 = state_address_8;
        encoded_value_6 = encoded_value_13;
        encoded_value_7 = (_DWORD *)pair64_result;
        cached_packet_out_bit = packet_out_bit;
        saved_float_word = saved_float_word_2;
        encoded_value_4 = encoded_value_12;
        encoded_value_10 = saved_encoded_value_4;
        cached_packet_out_byte = packet_out_byte;
        goto LABEL_158;
      case 8:
        saved_float_word = saved_float_word_2;
        shifted_bits_4 = saved_float_word_2 << 7;
        sr_net_write_bits(encoded_value_2, 8);
        cached_packet_out_byte = packet_out_byte;
        saved_state_address_2 = state_address_5;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *encoded_value;
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *encoded_value_12;
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        saved_cached_packet_out_byte_5 = cached_packet_out_byte;
        masked_bits_16 = *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_4);
        break;
      case 9:
        saved_float_word = saved_float_word_2;
        shifted_bits_5 = saved_float_word_2 << 7;
        sr_net_write_bits(encoded_value_2, 8);
        cached_packet_out_byte = packet_out_byte;
        saved_state_address_2 = state_address_5;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        saved_cached_packet_out_byte_6 = cached_packet_out_byte;
        masked_bits_17 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_5);
        *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_6) = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_5);
        *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_6) = masked_bits_17;
        cached_packet_out_byte = packet_out_byte + 12;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE490
                                                                                       + shifted_bits_5);
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        saved_cached_packet_out_byte_5 = cached_packet_out_byte;
        masked_bits_16 = *(unsigned int *)((char *)&g_1873DE494 + shifted_bits_5);
        break;
      default:
        saved_state_address_2 = state_address_5;
        if ( saved_masked_bits != 19 )
        {
          if ( saved_masked_bits == 10 )
          {
            sr_net_write_bits(encoded_value_13, 8);
            sr_net_write_bits(encoded_value, 1);
            return 0; /* compatibility result discarded by all reviewed callers */
          }
          encoded_value_4 = encoded_value_12;
          goto LABEL_156;
        }
        saved_float_word = saved_float_word_2;
        shifted_bits_6 = saved_float_word_2 << 7;
        sr_net_write_bits(encoded_value_13, 8);
        sr_net_write_bits(encoded_value, 16);
        cached_packet_out_byte = packet_out_byte;
        saved_state_address_2 = state_address_5;
        if ( (int)packet_out_byte >= 0x10000 )
          goto LABEL_133;
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = dword_140404A6C[32 * saved_float_word_2 + 297756297];
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte >= 0x10000 )
        {
LABEL_133:
          cached_packet_out_bit = packet_out_bit;
          encoded_value_4 = encoded_value_12;
          encoded_value_5 = state_address_6;
          encoded_value_6 = encoded_value_13;
          goto LABEL_157;
        }
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        saved_cached_packet_out_byte_5 = cached_packet_out_byte;
        masked_bits_16 = *(unsigned int *)((char *)&g_1873DE494 + shifted_bits_6);
        break;
    }
    *(unsigned int *)((char *)&packet_out_data + saved_cached_packet_out_byte_5) = masked_bits_16;
    cached_packet_out_byte = packet_out_byte + 4;
    packet_out_byte += 4;
    goto LABEL_133;
  }
  sr_net_write_bits(encoded_value_2, 10);
  sr_net_write_bits(encoded_value, 3);
  sr_net_write_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits_3), 16);
  sr_net_write_bits(encoded_value_10, 2);
  cached_packet_out_bit = packet_out_bit;
  cached_packet_out_byte = packet_out_byte;
  saved_state_address_2 = state_address_8;
  encoded_value_5 = state_address_6;
  encoded_value_6 = encoded_value_13;
  encoded_value_3 = state_address_9;
LABEL_157:
  encoded_value_7 = state_address_7;
LABEL_158:
  cached_masked_bits_2 = saved_masked_bits;
  saved_encoded_value_2 = encoded_value_10;
  if ( saved_masked_bits == 11 )
  {
    if ( cached_packet_out_byte < 0x10000 )
    {
      if ( cached_packet_out_bit > 0 )
      {
        ++cached_packet_out_byte;
        packet_out_bit = 0;
        packet_out_byte = cached_packet_out_byte;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE480
                                                                                     + shifted_bits_3);
      cached_packet_out_byte = packet_out_byte + 4;
      packet_out_byte = cached_packet_out_byte;
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE484
                                                                                       + shifted_bits_3);
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++cached_packet_out_byte;
            packet_out_bit = 0;
            packet_out_byte = cached_packet_out_byte;
          }
          *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + shifted_bits_3);
          cached_packet_out_byte = packet_out_byte + 4;
          packet_out_byte = cached_packet_out_byte;
          if ( cached_packet_out_byte < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              packet_out_bit = 0;
              packet_out_byte = cached_packet_out_byte + 1;
              *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte + 1) = *(unsigned int *)((char *)&g_1873DE48C
                                                                                                 + shifted_bits_3);
              packet_out_byte += 4;
              return 0; /* compatibility result discarded by all reviewed callers */
            }
LABEL_184:
            *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE48C
                                                                                           + shifted_bits_3);
            packet_out_byte += 4;
            return 0; /* compatibility result discarded by all reviewed callers */
          }
        }
      }
      encoded_value_9 = saved_encoded_value_2;
LABEL_210:
      cached_packet_out_bit = packet_out_bit;
      goto LABEL_228;
    }
    goto LABEL_227;
  }
  encoded_value_8 = encoded_value_10;
  switch ( saved_masked_bits )
  {
    case 12:
      encoded_value_9 = encoded_value_10;
      if ( cached_packet_out_byte >= 0x10000 )
        goto LABEL_228;
      if ( cached_packet_out_bit > 0 )
      {
        ++cached_packet_out_byte;
        packet_out_bit = 0;
        packet_out_byte = cached_packet_out_byte;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE480
                                                                                     + shifted_bits_3);
      cached_packet_out_byte = packet_out_byte + 4;
      packet_out_byte = cached_packet_out_byte;
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE484
                                                                                       + shifted_bits_3);
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte;
        if ( cached_packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++cached_packet_out_byte;
            packet_out_bit = 0;
            packet_out_byte = cached_packet_out_byte;
          }
          *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + shifted_bits_3);
          cached_packet_out_byte = packet_out_byte + 4;
          packet_out_byte = cached_packet_out_byte;
          if ( cached_packet_out_byte < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++cached_packet_out_byte;
              packet_out_bit = 0;
              packet_out_byte = cached_packet_out_byte;
            }
            goto LABEL_184;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sr_net_write_bits(encoded_value_6, 16);
      sr_net_write_bits(encoded_value_3, 6);
      sr_net_write_bits(encoded_value_4, 7);
      cached_packet_out_byte = packet_out_byte;
      byte_count = *(int *)((char *)&g_1873DE488 + shifted_bits_3);
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        crt_memcpy(
          (__m128i *)((char *)&packet_out_data + cached_packet_out_byte),
          (     __m128i *)((char *)&g_1873DE4A0 + shifted_bits_3),
          byte_count);
        packet_out_byte += byte_count;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      encoded_value_9 = encoded_value_10;
      cached_packet_out_bit = packet_out_bit;
      goto LABEL_228;
    case 21:
      sr_net_write_bits(encoded_value_5, 10);
      sr_net_write_bits(encoded_value_7, 4);
      sr_net_write_bits(encoded_value_4, 4);
      sr_net_write_bits(encoded_value_10, 30);
      cached_packet_out_byte = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        saved_cached_packet_out_byte_7 = cached_packet_out_byte;
        masked_bits_18 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3);
        *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_7) = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_3);
        *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_7) = masked_bits_18;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( cached_packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + shifted_bits_3);
        cached_packet_out_bit = packet_out_bit;
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      saved_encoded_value_3 = encoded_value_11;
      if ( cached_packet_out_byte >= 0x10000 )
      {
        encoded_value_9 = encoded_value_8;
        goto LABEL_228;
      }
      if ( cached_packet_out_bit > 0 )
      {
        ++cached_packet_out_byte;
        packet_out_bit = 0;
        packet_out_byte = cached_packet_out_byte;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE484
                                                                                     + shifted_bits_3);
      cached_packet_out_byte = packet_out_byte + 4;
      packet_out_byte = cached_packet_out_byte;
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = dword_140404A6C[32 * saved_encoded_value_3 + 297756295];
        packet_out_byte += 4;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
LABEL_207:
      cached_packet_out_bit = packet_out_bit;
      encoded_value_9 = encoded_value_8;
      goto LABEL_228;
    case 14:
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_3), 8);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits_3), 8);
      sr_net_write_bits(encoded_value_4, 8);
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits_3), 20);
      return 0; /* compatibility result discarded by all reviewed callers */
    case 15:
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( cached_packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *saved_state_address_2;
        cached_packet_out_bit = packet_out_bit;
        cached_packet_out_byte = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( cached_packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = dword_140404A6C[32 * saved_float_word + 297756294];
        iteration_count_3 = packet_out_byte + 4;
        packet_out_byte = iteration_count_3;
        if ( iteration_count_3 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_3;
            packet_out_bit = 0;
            packet_out_byte = iteration_count_3;
          }
          *(unsigned int *)((char *)&packet_out_data + iteration_count_3) = *(unsigned int *)((char *)&g_1873DE488
                                                                                         + shifted_bits_3);
          packet_out_byte += 4;
        }
      }
      sr_net_write_bits(encoded_value_8, 2);
      return 0; /* compatibility result discarded by all reviewed callers */
  }
LABEL_227:
  encoded_value_9 = encoded_value_10;
LABEL_228:
  shifted_bits_7 = saved_float_word << 7;
  switch ( cached_masked_bits_2 )
  {
    case 16:
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( cached_packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + shifted_bits_7);
        iteration_count_4 = packet_out_byte + 4;
        packet_out_byte = iteration_count_4;
        if ( iteration_count_4 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_4;
            packet_out_bit = 0;
            packet_out_byte = iteration_count_4;
          }
          *(unsigned int *)((char *)&packet_out_data + iteration_count_4) = *(unsigned int *)((char *)&g_1873DE484
                                                                                         + shifted_bits_7);
          iteration_count_5 = packet_out_byte + 4;
          packet_out_byte = iteration_count_5;
          if ( iteration_count_5 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_5;
              packet_out_bit = 0;
              packet_out_byte = iteration_count_5;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_5) = *(unsigned int *)((char *)&g_1873DE488
                                                                                           + shifted_bits_7);
            packet_out_byte += 4;
          }
        }
      }
      sr_net_write_bits(encoded_value_9, 10);
      cached_packet_out_byte_4 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_4 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        saved_cached_packet_out_byte_8 = cached_packet_out_byte_4;
        masked_bits_19 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_7);
        *(_QWORD *)((char *)&packet_out_data + saved_cached_packet_out_byte_8) = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_7);
        *(unsigned int *)((char *)&g_18539D40C + saved_cached_packet_out_byte_8) = masked_bits_19;
        iteration_count_6 = packet_out_byte + 12;
        packet_out_byte = iteration_count_6;
        if ( iteration_count_6 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_6;
            packet_out_bit = 0;
            packet_out_byte = iteration_count_6;
          }
          masked_bits_20 = *(_QWORD *)((char *)&g_1873DE474 + shifted_bits_7);
          saved_iteration_count = iteration_count_6;
          masked_bits_21 = *(unsigned int *)((char *)&g_1873DE47C + shifted_bits_7);
LABEL_262:
          *(_QWORD *)((char *)&packet_out_data + saved_iteration_count) = masked_bits_20;
          *(unsigned int *)((char *)&g_18539D40C + saved_iteration_count) = masked_bits_21;
LABEL_263:
          packet_out_byte += 12;
        }
      }
      break;
    case 18:
      if ( cached_packet_out_byte < 0x10000 )
      {
        if ( cached_packet_out_bit > 0 )
        {
          ++cached_packet_out_byte;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = *(unsigned int *)((char *)&g_1873DE480
                                                                                       + shifted_bits_7);
        iteration_count_7 = packet_out_byte + 4;
        packet_out_byte = iteration_count_7;
        if ( iteration_count_7 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_7;
            packet_out_bit = 0;
            packet_out_byte = iteration_count_7;
          }
          *(unsigned int *)((char *)&packet_out_data + iteration_count_7) = *(unsigned int *)((char *)&g_1873DE484
                                                                                          + shifted_bits_7);
          iteration_count_8 = packet_out_byte + 4;
          packet_out_byte = iteration_count_8;
          if ( iteration_count_8 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_8;
              packet_out_bit = 0;
              packet_out_byte = iteration_count_8;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_8) = *(unsigned int *)((char *)&g_1873DE488
                                                                                            + shifted_bits_7);
            packet_out_byte += 4;
          }
        }
      }
      break;
    case 20:
      sr_net_write_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits_7), 8);
      cached_packet_out_byte_5 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_5 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        masked_bits_20 = *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_7);
        saved_iteration_count = cached_packet_out_byte_5;
        masked_bits_21 = *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_7);
        goto LABEL_262;
      }
      break;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef encoded_value_10
#undef encoded_value_11
#undef state_address_6
#undef state_address_7
#undef saved_masked_bits
#undef state_address_8
#undef encoded_value_12
#undef state_address_9
#undef encoded_value_13
#undef saved_float_word_2
#undef saved_encoded_value_4
#undef pair64_result
#undef unused_written_slot
#undef unused_frame_slot_136

// 14010F501: conditional instruction was optimized away because edx.4==2

//----- (0000000140110D00) ----------------------------------------------------
void            sub_140110D00(int a1, int a2)
{
  __int64 input_value;
  char state_word;
  __int64 input_value_2;
  int shifted_bits;
  char state_word_2;
  signed int cached_packet_out_byte;
  unsigned int scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  __int64 lookup_index;
  unsigned int float_word;
  __int64 scaled_index_4;
  signed int remaining_amount;
  int masked_bits_3;
  __int64 remaining_count;
  char cached_packet_out_bit;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  unsigned int integer_sum;
  __int64 scaled_index_5;
  __int64 remaining_count_2;
  unsigned int *state_address;
  unsigned int *record_byte_offset;
  __int64 table_value;
  float square_root;
  int integer_difference_2;
  __int64 table_value_2;
  float square_root_2;
  int integer_difference_3;
  __int64 table_value_3;
  float square_root_3;
  int integer_difference_4;
  __int64 table_value_4;
  float square_root_4;
  int integer_difference_5;
  __int64 table_value_5;
  float square_root_5;
  int integer_difference_6;
  __int64 table_value_6;
  float square_root_6;
  int integer_difference_7;
  __int64 table_value_7;
  float square_root_7;
  int integer_difference_8;
  __int64 table_value_8;
  float square_root_8;
  int integer_difference_9;
  __int64 lookup_index_2;
  int saved_packed_word_bits;
  unsigned int integer_sum_2;
  int iteration_count;
  unsigned int *record_byte_offset_2;
  unsigned int cached_renderer_sort_count;
  signed int remaining_count_3;
  __int64 remaining_count_4;
  signed int integer_difference_10;
  __int64 table_value_9;
  unsigned int *record_byte_offset_3;
  __int64 remaining_count_5;
  __int64 table_value_10;
  __int64 saved_pair64_result;
  float square_root_9;
  int rol4_result;
  __int64 scaled_index_6;
  __int64 record_byte_offset_4;
  __int64 remaining_count_6;
  unsigned int *record_byte_offset_5;
  __int64 shifted_bits_2;
  __int64 scaled_index_7;
  __int64 shifted_bits_3;
  int rol4_result_2;
  __int64 scaled_index_8;
  __int64 shifted_bits_4;
  int rol4_result_3;
  __int64 scaled_index_9;
  __int64 shifted_bits_5;
  int rol4_result_4;
  __int64 scaled_index_10;
  __int64 shifted_bits_6;
  int rol4_result_5;
  __int64 scaled_index_11;
  __int64 shifted_bits_7;
  int rol4_result_6;
  __int64 scaled_index_12;
  __int64 shifted_bits_8;
  int rol4_result_7;
  __int64 scaled_index_13;
  __int64 shifted_bits_9;
  int rol4_result_8;
  __int64 scaled_index_14;
  int masked_bits_4;
  int integer_difference_11;
  int integer_sum_3;
  unsigned int *record_byte_offset_6;
  unsigned int integer_sum_4;
  int iteration_count_2;
  __int64 remaining_count_7;
  unsigned int cached_renderer_sort_count_2;
  signed int remaining_count_8;
  __int64 remaining_count_9;
  signed int integer_difference_12;
  __int64 table_value_11;
  unsigned int *state_address_2;
  __int64 running_total;
  float squared_value;
  float square_root_10;
  float square_root_11;
  int integer_quotient;
  float squared_value_2;
  float square_root_12;
  float square_root_13;
  int integer_quotient_2;
  unsigned int *state_address_3;
  unsigned int integer_sum_5;
  __int64 record_byte_offset_7;
  unsigned int record_byte_offset_8;
  unsigned int cached_renderer_sort_count_3;
  int integer_sum_6;
  signed int remaining_count_10;
  __int64 remaining_count_11;
  __int64 table_value_12;
  __int64 state_word_3;
  int scaled_index_15;
  unsigned int state_word_4;
  unsigned int state_word_5;
  __int64 scaled_index_16;
  unsigned int *encoded_value;
  signed int table_value_13;
  __int64 remaining_count_12;
  signed int cached_packet_out_byte_2;
  signed int remaining_amount_2;
  char cached_packet_out_bit_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_13;
  signed int remaining_amount_3;
  int scaled_index_17;
  signed int cached_packet_out_byte_3;
  char cached_packet_out_bit_3;
  unsigned int remaining_bits_3;
  unsigned int integer_difference_14;
  signed int cached_packet_out_byte_4;
  unsigned int *buffer_cursor;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  unsigned int *encoded_value_2;
  unsigned int *record_byte_offset_9;
  __int64 integer_sum_7;
  __int64 lookup_index_3;
  unsigned int loaded_word;
  __int64 table_value_14;
  signed int remaining_amount_4;
  unsigned int table_value_15;
  signed int cached_packet_out_byte_5;
  int masked_bits_5;
  char cached_packet_out_bit_4;
  unsigned int remaining_bits_4;
  unsigned int integer_difference_15;
  __int64 table_value_16;
  signed int remaining_amount_5;
  __int64 lookup_index_4;
  unsigned int table_value_17;
  signed int cached_packet_out_byte_6;
  int masked_bits_6;
  char cached_packet_out_bit_5;
  unsigned int remaining_bits_5;
  unsigned int integer_difference_16;
  unsigned int integer_sum_8;
  __int64 scaled_index_20;
  char masked_bits_7;
  __int64 saved_pair64_result_2;
  char lobyte_result;
  signed int remaining_amount_6;
  unsigned int remaining_bits_6;
  unsigned int integer_difference_17;
  __int64 cached_record_byte_offset;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  unsigned int *state_address_4;
  __int64 scaled_index_24;
  signed int remaining_amount_7;
  unsigned int loaded_word_2;
  unsigned int remaining_bits_7;
  unsigned int integer_difference_18;
  signed int remaining_amount_8;
  unsigned int remaining_bits_8;
  unsigned int integer_difference_19;
  unsigned int scaled_index_25;
  __int64 cached_scaled_index;
  BOOL comparison_result;
  unsigned __int64 scaled_index_26;
  unsigned __int64 scaled_index_27;
  unsigned __int64 scaled_index_28;
  int *running_total_2;
  _DWORD *running_total_3;
  __int64 remaining_count_13;
  bool comparison_result_2;
  signed int saved_cached_packet_out_byte;
  signed int remaining_amount_9;
  unsigned int remaining_bits_9;
  unsigned int integer_difference_20;
  __int64 cached_world_unknown_15fd16260_count;
  int scaled_index_29;
  float *state_address_5;
  _DWORD *record_byte_offset_10;
  unsigned int shifted_bits_10;
  __int64 remaining_count_14;
  __int64 scaled_index_30;
  float square_root_14;
  float square_root_15;
  float state_address_6;
  int saved_state_address;
  float scaled_value;
  float product_difference;
  float square_root_16;
  float square_root_17;
  float state_address_7;
  int saved_state_address_2;
  float scaled_value_2;
  float product_difference_2;
  float square_root_18;
  float square_root_19;
  float state_address_8;
  int saved_state_address_3;
  float scaled_value_3;
  float product_difference_3;
  float square_root_20;
  float square_root_21;
  int saved_state_address_4;
  _DWORD *state_address_9;
  float *state_address_10;
  __int64 remaining_count_15;
  float square_root_22;
  float square_root_23;
  int integer_quotient_3;
  signed int integer_sum_9;
  int iteration_count_3;
  unsigned int *state_address_11;
  __int64 lookup_index_5;
  unsigned int loaded_word_3;
  int saved_packed_word_bits_2;
  int selection_code;
  signed int remaining_count_16;
  __int64 remaining_count_17;
  int integer_sum_10;
  signed int integer_difference_21;
  __int64 table_value_18;
  signed int remaining_amount_10;
  int rol4_result_9;
  unsigned int remaining_bits_10;
  unsigned int integer_difference_22;
  signed int remaining_amount_11;
  unsigned int remaining_bits_11;
  unsigned int integer_difference_23;
  unsigned int *buffer_cursor_2;
  __int64 remaining_count_18;
  __int64 scaled_index_31;
  int iteration_count_4;
  __int64 record_byte_offset_11;
  __int64 element_index;
  unsigned int *buffer_cursor_3;
  unsigned int *state_address_12;
  __int64 running_total_4;
  __int64 saved_remaining_count;
  unsigned int *saved_state_address_5;
  unsigned int *encoded_value_3;
  __int64 shifted_bits_11;
  __int64 cached_scaled_index_2;
  signed int remaining_amount_12;
  unsigned int remaining_bits_12;
  unsigned int integer_difference_24;
  signed int remaining_amount_13;
  unsigned int remaining_bits_13;
  unsigned int integer_difference_25;
  int selection_flag;
  signed int remaining_amount_14;
  unsigned int remaining_bits_14;
  unsigned int integer_difference_26;
  __int64 integer_sum_11;
  char lobyte_result_2;
  signed int remaining_amount_15;
  int masked_bits_8;
  bool comparison_result_3;
  unsigned int saved_masked_bits;
  signed int cached_packet_out_byte_7;
  unsigned int remaining_bits_15;
  unsigned int integer_difference_27;
  signed int remaining_amount_16;
  int masked_bits_9;
  unsigned int loaded_word_4;
  unsigned int remaining_bits_16;
  unsigned int integer_difference_28;
  unsigned int integer_sum_12;
  __int64 scaled_index_32;
  __int64 scaled_index_33;
  signed int remaining_amount_17;
  unsigned int remaining_bits_17;
  unsigned int integer_difference_29;
  signed int remaining_amount_18;
  signed int remaining_amount_19;
  unsigned int remaining_bits_18;
  unsigned int integer_difference_30;
  unsigned int *record_pointer;
  int masked_bits_10;
  unsigned int remaining_bits_19;
  unsigned int integer_difference_31;
  __int64 scaled_index_34;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140110D00[112];
#define integer_difference_32 (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define cached_integer_sum (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define saved_cached_world_unknown_15fd16260_count (*(__int64 (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define lobyte_result_3 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 8)) /* [rsp+58h] */
#define cached_packet_out_byte_8 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define saved_cached_packet_out_byte_2 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define saved_cached_packet_out_byte_3 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define saved_buffer_cursor (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define state_address_13 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define pair64_result (*(__int64 (*))(void *)(sr_frame_140110D00 + 24)) /* [rsp+68h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_140110D00 + 32)) /* [rsp+70h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_140110D00 + 40)) /* [rsp+78h] */
#define remaining_count_19 (*(__int64 (*))(void *)(sr_frame_140110D00 + 48)) /* [rsp+80h] */
#define saved_record_byte_offset (*(__int64 (*))(void *)(sr_frame_140110D00 + 56)) /* [rsp+88h] */
#define saved_buffer_cursor_2 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 64)) /* [rsp+90h] */
#define state_address_14 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 72)) /* [rsp+98h] */
#define scaled_index_35 (*(__int64 (*))(void *)(sr_frame_140110D00 + 80)) /* [rsp+A0h] */
#define saved_remaining_count_2 (*(__int64 (*))(void *)(sr_frame_140110D00 + 88)) /* [rsp+A8h] */
#define saved_record_byte_offset_2 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 96)) /* [rsp+B0h] */
#define lookup_index_6 (*(__int64 (*))(void *)(sr_frame_140110D00 + 104)) /* [rsp+B8h] */

  input_value = a1;
  state_word = g_165D84960;
  input_value_2 = a2;
  LODWORD(saved_running_total) = input_value;
  g_16B2A2248 = 0;
  if ( !g_165D84960 )
  {
    state_word = 4;
    g_165D84960 = 4;
  }
  shifted_bits = 1 << (state_word - 1);
  state_word_2 = g_165D84964;
  g_165D84970 = shifted_bits;
  if ( !g_165D84964 )
  {
    state_word_2 = 8;
    g_165D84964 = 8;
  }
  g_165D84974 = 1 << (state_word_2 - 1);
  sr_net_write_bits(&g_165D84960, 4);
  sr_net_write_bits(&g_165D84964, 4);
  sr_net_write_bits(&g_16B2A2248, 1);
  sr_net_write_bits(&g_16B2A224C, 1);
  cached_packet_out_byte = packet_out_byte;
  lobyte_result_3 = LOBYTE(g_1AD04B20C);
  if ( (int)packet_out_byte < 0x10000 )
  {
    if ( (int)packet_out_bit > 0 )
    {
      cached_packet_out_byte = packet_out_byte + 1;
      packet_out_bit = 0;
      ++packet_out_byte;
    }
    *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = g_1AD04B20C;
    cached_packet_out_byte = packet_out_byte + 4;
    packet_out_byte += 4;
  }
  scaled_index = -1;
  integer_difference_32 = -1;
  if ( (_DWORD)input_value_2 != -1 )
  {
    scaled_index_2 = (int)dword_140404A6C[3597 * input_value_2 + 71856292];
    if ( (_DWORD)scaled_index_2 != -1 )
    {
      scaled_index_3 = 7166 * scaled_index_2;
      if ( (int)dword_140404A6C[7166 * scaled_index_2 + 280651318] > 0 )
      {
        masked_bits = dword_140404A6C[scaled_index_3 + 280651335];
        scaled_index = dword_140404A6C[3597 * input_value_2 + 71856292];
        masked_bits_2 = dword_140404A6C[scaled_index_3 + 280651336];
        lookup_index = input_value;
        float_word = dword_140404A6C[scaled_index_3 + 280651337];
        integer_difference_32 = scaled_index;
        saved_record_byte_offset = input_value;
LABEL_16:
        unused_written_slot = float_word;
        pair64_result = __PAIR64__(masked_bits_2, masked_bits);
        goto LABEL_17;
      }
    }
  }
  lookup_index = input_value;
  saved_record_byte_offset = input_value;
  masked_bits = dword_140404A6C[47224 * input_value + 438920021];
  masked_bits_2 = dword_140404A6C[47224 * input_value + 438920022];
  float_word = dword_140404A6C[47224 * input_value + 438920023];
  pair64_result = __PAIR64__(masked_bits_2, masked_bits);
  unused_written_slot = float_word;
  if ( game_type == 4 )
  {
    saved_record_byte_offset = input_value;
    if ( !dword_140404A6C[3597 * input_value_2 + 71856266] )
    {
      masked_bits = *(unsigned int *)&g_16B2A2EC8;
      masked_bits_2 = *(unsigned int *)&g_16B2A2ECC;
      float_word = g_16B2A2ED0;
      saved_record_byte_offset = input_value;
      goto LABEL_16;
    }
  }
LABEL_17:
  sub_140105C20(input_value, (float *)&pair64_result);
  scaled_index_4 = 47224 * lookup_index;
  remaining_amount = 11;
  scaled_index_35 = 188896 * lookup_index;
  masked_bits_3 = dword_140404A6C[47224 * lookup_index + 438924125];
  remaining_count = dword_140404A6C[47224 * lookup_index + 438924123] - masked_bits_3;
  if ( (int)dword_140404A6C[47224 * lookup_index + 438924123] < masked_bits_3 )
    remaining_count = (unsigned int)(remaining_count + 2048);
  if ( (int)remaining_count > 2047 )
    remaining_count = 2047;
  if ( cached_packet_out_byte < 0x10000 )
  {
    cached_packet_out_bit = packet_out_bit;
    remaining_bits = remaining_count & 0x7FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount) - 1) << cached_packet_out_bit);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
      integer_difference = 8 - packet_out_bit;
      if ( remaining_amount < 8 - packet_out_bit )
        break;
      if ( remaining_amount == integer_difference )
      {
        ++packet_out_byte;
        integer_sum = 0;
        goto LABEL_29;
      }
      cached_packet_out_byte = packet_out_byte + 1;
      remaining_bits >>= integer_difference;
      remaining_amount -= integer_difference;
      ++packet_out_byte;
      packet_out_bit = 0;
      cached_packet_out_bit = 0;
      if ( remaining_amount <= 0 )
        goto LABEL_30;
    }
    integer_sum = remaining_amount + packet_out_bit;
LABEL_29:
    packet_out_bit = integer_sum;
  }
LABEL_30:
  sr_net_write_bits(&dword_140404A6C[47224 * lookup_index + 438924125], 11);
  LODWORD(saved_buffer_cursor_2) = 16;
  if ( (int)remaining_count > 0 )
  {
    do
    {
      scaled_index_5 = scaled_index_4 * 4 + 20LL * masked_bits_3;
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E617E8 + scaled_index_5), 10);
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E617E4 + scaled_index_5), 2);
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E617EC + scaled_index_5), 3);
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E617F0 + scaled_index_5), 10);
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E617F4 + scaled_index_5), 16);
      masked_bits_3 = ((_WORD)masked_bits_3 + 1) & 0x7FF;
      --remaining_count;
    }
    while ( remaining_count );
    scaled_index = integer_difference_32;
  }
  saved_buffer_cursor = &g_160FB67B0;
  crt_memset((void *)(uintptr_t)(&g_160FB67B0), 0, 0x1000u);
  remaining_count_2 = 128;
  state_address = &dword_140404A6C[scaled_index_4 + 438920028];
  state_address_14 = &dword_140404A6C[scaled_index_4 + 438920028];
  record_byte_offset = &dword_140404A6C[scaled_index_4 + 438920028];
  do
  {
    if ( *(record_byte_offset - 1) && !*record_byte_offset )
    {
      table_value = (int)record_byte_offset[1];
      square_root = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value + 280651337])));
      if ( dword_140404A6C[7166 * table_value + 280651313] != -1 )
        square_root = square_root + square_root;
      integer_difference_2 = (int)(float)(256.0 - square_root);
      if ( integer_difference_2 < 16 )
        integer_difference_2 = 16;
      if ( (_DWORD)table_value == scaled_index )
        integer_difference_2 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_2 = 1;
      record_byte_offset[2] += integer_difference_2;
    }
    if ( record_byte_offset[3] && !record_byte_offset[4] )
    {
      table_value_2 = (int)record_byte_offset[5];
      square_root_2 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_2 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_2 + 280651313] != -1 )
        square_root_2 = square_root_2 + square_root_2;
      integer_difference_3 = (int)(float)(256.0 - square_root_2);
      if ( integer_difference_3 < 16 )
        integer_difference_3 = 16;
      if ( (_DWORD)table_value_2 == scaled_index )
        integer_difference_3 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_3 = 1;
      record_byte_offset[6] += integer_difference_3;
    }
    if ( record_byte_offset[7] && !record_byte_offset[8] )
    {
      table_value_3 = (int)record_byte_offset[9];
      square_root_3 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_3 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_3 + 280651313] != -1 )
        square_root_3 = square_root_3 + square_root_3;
      integer_difference_4 = (int)(float)(256.0 - square_root_3);
      if ( integer_difference_4 < 16 )
        integer_difference_4 = 16;
      if ( (_DWORD)table_value_3 == scaled_index )
        integer_difference_4 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_4 = 1;
      record_byte_offset[10] += integer_difference_4;
    }
    if ( record_byte_offset[11] && !record_byte_offset[12] )
    {
      table_value_4 = (int)record_byte_offset[13];
      square_root_4 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_4 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_4 + 280651313] != -1 )
        square_root_4 = square_root_4 + square_root_4;
      integer_difference_5 = (int)(float)(256.0 - square_root_4);
      if ( integer_difference_5 < 16 )
        integer_difference_5 = 16;
      if ( (_DWORD)table_value_4 == scaled_index )
        integer_difference_5 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_5 = 1;
      record_byte_offset[14] += integer_difference_5;
    }
    if ( record_byte_offset[15] && !record_byte_offset[16] )
    {
      table_value_5 = (int)record_byte_offset[17];
      square_root_5 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_5 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_5 + 280651313] != -1 )
        square_root_5 = square_root_5 + square_root_5;
      integer_difference_6 = (int)(float)(256.0 - square_root_5);
      if ( integer_difference_6 < 16 )
        integer_difference_6 = 16;
      if ( (_DWORD)table_value_5 == scaled_index )
        integer_difference_6 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_6 = 1;
      record_byte_offset[18] += integer_difference_6;
    }
    if ( record_byte_offset[19] && !record_byte_offset[20] )
    {
      table_value_6 = (int)record_byte_offset[21];
      square_root_6 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_6 + 280651313] != -1 )
        square_root_6 = square_root_6 + square_root_6;
      integer_difference_7 = (int)(float)(256.0 - square_root_6);
      if ( integer_difference_7 < 16 )
        integer_difference_7 = 16;
      if ( (_DWORD)table_value_6 == scaled_index )
        integer_difference_7 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_7 = 1;
      record_byte_offset[22] += integer_difference_7;
    }
    if ( record_byte_offset[23] && !record_byte_offset[24] )
    {
      table_value_7 = (int)record_byte_offset[25];
      square_root_7 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_7 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_7 + 280651313] != -1 )
        square_root_7 = square_root_7 + square_root_7;
      integer_difference_8 = (int)(float)(256.0 - square_root_7);
      if ( integer_difference_8 < 16 )
        integer_difference_8 = 16;
      if ( (_DWORD)table_value_7 == scaled_index )
        integer_difference_8 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_8 = 1;
      record_byte_offset[26] += integer_difference_8;
    }
    if ( record_byte_offset[27] && !record_byte_offset[28] )
    {
      table_value_8 = (int)record_byte_offset[29];
      square_root_8 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651336])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651336]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651335])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651335])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651337])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[7166 * table_value_8 + 280651337])));
      if ( dword_140404A6C[7166 * table_value_8 + 280651313] != -1 )
        square_root_8 = square_root_8 + square_root_8;
      integer_difference_9 = (int)(float)(256.0 - square_root_8);
      if ( integer_difference_9 < 16 )
        integer_difference_9 = 16;
      if ( (_DWORD)table_value_8 == scaled_index )
        integer_difference_9 = 0x10000;
      if ( lookup_index == 255 )
        integer_difference_9 = 1;
      record_byte_offset[30] += integer_difference_9;
    }
    record_byte_offset += 32;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  lookup_index_2 = scaled_index_35;
  saved_packed_word_bits = saved_running_total;
  integer_sum_2 = 0;
  renderer_sort_count = 0;
  iteration_count = 0;
  remaining_count_19 = 1024;
  record_byte_offset_2 = state_address;
  do
  {
    if ( *(record_byte_offset_2 - 1) && !*record_byte_offset_2 )
    {
      dword_140404A6C[integer_sum_2 + 437192782] = record_byte_offset_2[2];
      dword_140404A6C[renderer_sort_count + 437454926] = iteration_count;
      integer_sum_2 = ++renderer_sort_count;
    }
    ++iteration_count;
    record_byte_offset_2 += 4;
  }
  while ( iteration_count < 1024 );
  sr_renderer_sort();
  cached_renderer_sort_count = 10;
  if ( saved_packed_word_bits == 255 )
    cached_renderer_sort_count = renderer_sort_count;
  remaining_count_3 = renderer_sort_count - 1;
  remaining_count_4 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    integer_difference_10 = renderer_sort_count - cached_renderer_sort_count;
    do
    {
      if ( remaining_count_3 >= integer_difference_10 )
      {
        table_value_9 = (int)dword_140404A6C[dword_140404A6C[remaining_count_4 + 436668494] + 437454926];
        dword_140404A6C[table_value_9 + 137283409] = 1;
        dword_140404A6C[47224 * lookup_index + 438920030 + 4 * table_value_9] = 0;
      }
      --remaining_count_3;
      --remaining_count_4;
    }
    while ( remaining_count_4 >= 0 );
    lookup_index_2 = scaled_index_35;
  }
  record_byte_offset_3 = state_address;
  saved_record_byte_offset_2 = state_address;
  remaining_count_5 = 1024;
  saved_remaining_count_2 = 1024;
  do
  {
    if ( *(record_byte_offset_3 - 1) && *record_byte_offset_3 == 1 )
    {
      table_value_10 = (int)record_byte_offset_3[1];
      saved_pair64_result = 7040 * table_value_10;
      pair64_result = 7040 * table_value_10;
      square_root_9 = fsqrt(
              (float)((float)((float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845917])
                            * (float)(*(float *)&masked_bits_2 - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845917]))
                    + (float)((float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845916])
                            * (float)(*(float *)&masked_bits - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845916])))
            + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845918])
                    * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[1760 * table_value_10 + 278845918])));
      if ( square_root_9 < 4.0 || saved_packed_word_bits == 255 )
      {
        rol4_result = 1;
        scaled_index_6 = 1760 * table_value_10;
        record_byte_offset_4 = 2;
        remaining_count_6 = 8;
        record_byte_offset_5 = &dword_140404A6C[1760 * table_value_10 + 278845988];
        do
        {
          shifted_bits_2 = (record_byte_offset_4 - 2) >> 5;
          if ( (rol4_result & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_2]) != 0 )
          {
            scaled_index_7 = 47224 * lookup_index + table_value_10 + shifted_bits_2 + 4 * table_value_10;
            if ( (rol4_result & dword_140404A6C[scaled_index_7 + 438889304]) == 0 )
            {
              dword_140404A6C[47224 * lookup_index + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = *(record_byte_offset_5 - 1);
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[scaled_index_7 + 438889304] |= rol4_result;
            }
          }
          shifted_bits_3 = (record_byte_offset_4 - 1) >> 5;
          rol4_result_2 = __ROL4__(rol4_result, 1);
          if ( (rol4_result_2 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_3]) != 0 )
          {
            scaled_index_8 = 47224 * lookup_index;
            if ( (rol4_result_2 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_3]) == 0 )
            {
              dword_140404A6C[scaled_index_8 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = *record_byte_offset_5;
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_8 + shifted_bits_3] |= rol4_result_2;
            }
          }
          shifted_bits_4 = record_byte_offset_4 >> 5;
          rol4_result_3 = __ROL4__(rol4_result, 2);
          if ( (rol4_result_3 & dword_140404A6C[scaled_index_6 + 278845985 + (record_byte_offset_4 >> 5)]) != 0 )
          {
            scaled_index_9 = 47224 * lookup_index;
            if ( (rol4_result_3 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_4]) == 0 )
            {
              dword_140404A6C[scaled_index_9 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[1];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + shifted_bits_4 + scaled_index_9] |= rol4_result_3;
            }
          }
          shifted_bits_5 = (record_byte_offset_4 + 1) >> 5;
          rol4_result_4 = __ROL4__(rol4_result, 3);
          if ( (rol4_result_4 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_5]) != 0 )
          {
            scaled_index_10 = 47224 * lookup_index;
            if ( (rol4_result_4 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_5]) == 0 )
            {
              dword_140404A6C[scaled_index_10 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[2];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_10 + shifted_bits_5] |= rol4_result_4;
            }
          }
          shifted_bits_6 = (record_byte_offset_4 + 2) >> 5;
          rol4_result_5 = __ROL4__(rol4_result, 4);
          if ( (rol4_result_5 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_6]) != 0 )
          {
            scaled_index_11 = 47224 * lookup_index;
            if ( (rol4_result_5 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_6]) == 0 )
            {
              dword_140404A6C[scaled_index_11 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[3];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_11 + shifted_bits_6] |= rol4_result_5;
            }
          }
          shifted_bits_7 = (record_byte_offset_4 + 3) >> 5;
          rol4_result_6 = __ROL4__(rol4_result, 5);
          if ( (rol4_result_6 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_7]) != 0 )
          {
            scaled_index_12 = 47224 * lookup_index;
            if ( (rol4_result_6 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_7]) == 0 )
            {
              dword_140404A6C[scaled_index_12 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[4];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_12 + shifted_bits_7] |= rol4_result_6;
            }
          }
          shifted_bits_8 = (record_byte_offset_4 + 4) >> 5;
          rol4_result_7 = __ROL4__(rol4_result, 6);
          if ( (rol4_result_7 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_8]) != 0 )
          {
            scaled_index_13 = 47224 * lookup_index;
            if ( (rol4_result_7 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_8]) == 0 )
            {
              dword_140404A6C[scaled_index_13 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[5];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_13 + shifted_bits_8] |= rol4_result_7;
            }
          }
          shifted_bits_9 = (record_byte_offset_4 + 5) >> 5;
          rol4_result_8 = __ROL4__(rol4_result, 7);
          if ( (rol4_result_8 & dword_140404A6C[scaled_index_6 + 278845985 + shifted_bits_9]) != 0 )
          {
            scaled_index_14 = 47224 * lookup_index;
            if ( (rol4_result_8 & dword_140404A6C[47224 * lookup_index + 438889304 + 5 * table_value_10 + shifted_bits_9]) == 0 )
            {
              dword_140404A6C[scaled_index_14 + 438934369 + *(int *)((char *)&g_1A8E6B7E4 + lookup_index_2)] = record_byte_offset_5[6];
              *(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2) = (unsigned __int8)(*(unsigned int *)((char *)&g_1A8E6B7E4 + lookup_index_2)
                                                                                             + 1);
              dword_140404A6C[5 * table_value_10 + 438889304 + scaled_index_14 + shifted_bits_9] |= rol4_result_8;
            }
          }
          record_byte_offset_4 += 8;
          rol4_result = __ROL4__(rol4_result, 8);
          record_byte_offset_5 += 8;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
        scaled_index = integer_difference_32;
        record_byte_offset_3 = saved_record_byte_offset_2;
        saved_pair64_result = pair64_result;
        remaining_count_5 = saved_remaining_count_2;
        saved_packed_word_bits = saved_running_total;
      }
      masked_bits_4 = *(unsigned int *)((char *)&g_182BBB1A4 + saved_pair64_result);
      integer_difference_11 = (int)(float)(256.0 - square_root_9);
      if ( integer_difference_11 < 16 )
        integer_difference_11 = 16;
      if ( *(unsigned int *)((char *)&g_182BBB188 + saved_pair64_result) )
        integer_difference_11 = 16;
      if ( masked_bits_4 != -1 )
      {
        if ( masked_bits_4 == scaled_index )
          integer_difference_11 = 0x10000;
        if ( *(int *)((char *)&g_182BBB1AC + saved_pair64_result) > 2 )
          integer_difference_11 = 16;
      }
      integer_sum_3 = integer_difference_11 + 256;
      if ( *(unsigned int *)((char *)&dword_140404A6C[5 * table_value_10 + 438889301] + lookup_index_2) == dword_140404A6C[table_value_10 + 280648157] )
        integer_sum_3 = integer_difference_11;
      if ( saved_packed_word_bits == 255 )
        integer_sum_3 = 1;
      record_byte_offset_3[2] += integer_sum_3;
    }
    record_byte_offset_3 += 4;
    --remaining_count_5;
    saved_record_byte_offset_2 = record_byte_offset_3;
    saved_remaining_count_2 = remaining_count_5;
  }
  while ( remaining_count_5 );
  record_byte_offset_6 = state_address_14;
  integer_sum_4 = 0;
  renderer_sort_count = 0;
  iteration_count_2 = 0;
  remaining_count_7 = 1024;
  do
  {
    if ( *(record_byte_offset_6 - 1) && *record_byte_offset_6 == 1 )
    {
      dword_140404A6C[integer_sum_4 + 437192782] = record_byte_offset_6[2];
      dword_140404A6C[renderer_sort_count + 437454926] = iteration_count_2;
      integer_sum_4 = ++renderer_sort_count;
    }
    ++iteration_count_2;
    record_byte_offset_6 += 4;
  }
  while ( iteration_count_2 < 1024 );
  sr_renderer_sort();
  cached_renderer_sort_count_2 = 32;
  if ( saved_packed_word_bits == 255 )
    cached_renderer_sort_count_2 = renderer_sort_count;
  remaining_count_8 = renderer_sort_count - 1;
  remaining_count_9 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    integer_difference_12 = renderer_sort_count - cached_renderer_sort_count_2;
    do
    {
      if ( remaining_count_8 >= integer_difference_12 )
      {
        table_value_11 = (int)dword_140404A6C[dword_140404A6C[remaining_count_9 + 436668494] + 437454926];
        dword_140404A6C[table_value_11 + 137283409] = 1;
        dword_140404A6C[47224 * lookup_index + 438920030 + 4 * table_value_11] = 0;
      }
      --remaining_count_8;
      --remaining_count_9;
    }
    while ( remaining_count_9 >= 0 );
  }
  state_address_2 = &g_15F2D9234;
  running_total = 0;
  do
  {
    if ( *(state_address_2 - 13) && *(state_address_2 - 11) != 3 )
    {
      squared_value = (float)((float)((float)(*(float *)&masked_bits_2 - *((float *)state_address_2 - 1))
                           * (float)(*(float *)&masked_bits_2 - *((float *)state_address_2 - 1)))
                   + (float)((float)(*(float *)&masked_bits - *((float *)state_address_2 - 2))
                           * (float)(*(float *)&masked_bits - *((float *)state_address_2 - 2))))
           + (float)((float)(*(float *)&float_word - *(float *)state_address_2) * (float)(*(float *)&float_word - *(float *)state_address_2));
      square_root_10 = fsqrt(squared_value) / (float)((float)(fabs(*((float *)state_address_2 + 3444)) * 4.0) + 1.0);
      square_root_11 = fsqrt(
               (float)((float)(*((float *)state_address_2 + 22) * *((float *)state_address_2 + 22))
                     + (float)(*((float *)state_address_2 + 23) * *((float *)state_address_2 + 23)))
             + (float)(*((float *)state_address_2 + 24) * *((float *)state_address_2 + 24)));
      if ( square_root_11 >= 0.016666668 )
        square_root_11 = 0.016666668;
      integer_quotient = (int)(float)(256.0 - (float)(square_root_10 / (float)((float)(square_root_11 * 240.0) + 1.0)));
      if ( integer_quotient < 32 )
        integer_quotient = 32;
      if ( squared_value < 16.0 )
        integer_quotient = 1024;
      if ( *(state_address_2 - 12) == 13 && squared_value < 144.0 )
        integer_quotient = 1024;
      if ( lookup_index == 255 )
        integer_quotient = 1;
      dword_140404A6C[47224 * lookup_index + 438887509 + 2 * running_total] += integer_quotient;
    }
    if ( state_address_2[5197] && state_address_2[5199] != 3 )
    {
      squared_value_2 = (float)((float)((float)(*(float *)&masked_bits_2 - *((float *)state_address_2 + 5209))
                           * (float)(*(float *)&masked_bits_2 - *((float *)state_address_2 + 5209)))
                   + (float)((float)(*(float *)&masked_bits - *((float *)state_address_2 + 5208))
                           * (float)(*(float *)&masked_bits - *((float *)state_address_2 + 5208))))
           + (float)((float)(*(float *)&float_word - *((float *)state_address_2 + 5210))
                   * (float)(*(float *)&float_word - *((float *)state_address_2 + 5210)));
      square_root_12 = fsqrt(squared_value_2) / (float)((float)(fabs(*((float *)state_address_2 + 8654)) * 4.0) + 1.0);
      square_root_13 = fsqrt(
               (float)((float)(*((float *)state_address_2 + 5232) * *((float *)state_address_2 + 5232))
                     + (float)(*((float *)state_address_2 + 5233) * *((float *)state_address_2 + 5233)))
             + (float)(*((float *)state_address_2 + 5234) * *((float *)state_address_2 + 5234)));
      if ( square_root_13 >= 0.016666668 )
        square_root_13 = 0.016666668;
      integer_quotient_2 = (int)(float)(256.0 - (float)(square_root_12 / (float)((float)(square_root_13 * 240.0) + 1.0)));
      if ( integer_quotient_2 < 32 )
        integer_quotient_2 = 32;
      if ( squared_value_2 < 16.0 )
        integer_quotient_2 = 1024;
      if ( state_address_2[5198] == 13 && squared_value_2 < 144.0 )
        integer_quotient_2 = 1024;
      if ( lookup_index == 255 )
        integer_quotient_2 = 1;
      dword_140404A6C[47224 * lookup_index + 438887511 + 2 * running_total] += integer_quotient_2;
    }
    running_total += 2;
    state_address_2 += 10420;
  }
  while ( (__int64)state_address_2 < (__int64)&g_15F564634 );
  state_address_3 = &g_15F2D9208;
  integer_sum_5 = 0;
  renderer_sort_count = 0;
  record_byte_offset_7 = 0;
  record_byte_offset_8 = 2;
  do
  {
    if ( *(state_address_3 - 2) && *state_address_3 != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887509 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 - 2;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[5208] && state_address_3[5210] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887511 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 - 1;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[10418] && state_address_3[10420] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887513 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[15628] && state_address_3[15630] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887515 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 + 1;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[20838] && state_address_3[20840] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887517 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 + 2;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[26048] && state_address_3[26050] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887519 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 + 3;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[31258] && state_address_3[31260] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887521 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 + 4;
      integer_sum_5 = ++renderer_sort_count;
    }
    if ( state_address_3[36468] && state_address_3[36470] != 3 )
    {
      dword_140404A6C[integer_sum_5 + 437192782] = dword_140404A6C[47224 * lookup_index + 438887523 + 2 * record_byte_offset_7];
      dword_140404A6C[renderer_sort_count + 437454926] = record_byte_offset_8 + 5;
      integer_sum_5 = ++renderer_sort_count;
    }
    record_byte_offset_8 += 8;
    record_byte_offset_7 += 8;
    state_address_3 += 41680;
  }
  while ( (int)(record_byte_offset_8 - 2) < 128 );
  sr_renderer_sort();
  cached_renderer_sort_count_3 = renderer_sort_count;
  integer_sum_6 = 0;
  cached_integer_sum = 0;
  g_160FB5DA4 = 0;
  remaining_count_10 = renderer_sort_count - 1;
  remaining_count_11 = renderer_sort_count - 1;
  if ( (signed int)(renderer_sort_count - 1) >= 0 )
  {
    while ( 1 )
    {
      table_value_12 = (int)dword_140404A6C[dword_140404A6C[remaining_count_11 + 436668494] + 437454926];
      if ( lookup_index == 255 )
        break;
      if ( remaining_count_10 >= (int)(cached_renderer_sort_count_3 - 2) )
      {
        dword_140404A6C[47224 * lookup_index + 438887509 + 2 * table_value_12] = 0;
        goto LABEL_254;
      }
      if ( remaining_count_10 >= (int)(cached_renderer_sort_count_3 - 8) )
      {
        dword_140404A6C[2 * integer_sum_6 + 137282767] = table_value_12;
        state_word_3 = (int)g_160FB5DA4;
        dword_140404A6C[47224 * lookup_index + 438887509 + 2 * table_value_12] = 0;
        dword_140404A6C[2 * state_word_3 + 137282768] = 1;
        goto LABEL_261;
      }
      if ( remaining_count_10 >= (int)(cached_renderer_sort_count_3 - 16) )
      {
        dword_140404A6C[2 * integer_sum_6 + 137282767] = table_value_12;
        dword_140404A6C[2 * g_160FB5DA4 + 137282768] = 2;
        goto LABEL_261;
      }
LABEL_262:
      --remaining_count_10;
      if ( --remaining_count_11 < 0 )
      {
        lookup_index_2 = scaled_index_35;
        cached_integer_sum = integer_sum_6;
        goto LABEL_264;
      }
    }
    dword_140404A6C[2 * table_value_12 + 450929629] = 0;
LABEL_254:
    dword_140404A6C[2 * integer_sum_6 + 137282767] = table_value_12;
    dword_140404A6C[2 * g_160FB5DA4 + 137282768] = 0;
LABEL_261:
    integer_sum_6 = ++g_160FB5DA4;
    goto LABEL_262;
  }
LABEL_264:
  g_160FB61A8 = 0;
  if ( saved_packed_word_bits != 255 )
  {
    scaled_index_15 = dword_140404A6C[47224 * saved_packed_word_bits + 438887424];
    if ( (int)world_event_count < scaled_index_15 )
    {
      if ( (signed int)(world_event_count - scaled_index_15 + 0x10000) > 22 )
      {
        state_word_5 = g_160FB59A0;
        if ( (int)g_160FB59A0 > 2 )
          state_word_5 = 2;
        g_160FB59A0 = state_word_5;
        if ( integer_sum_6 > 2 )
          integer_sum_6 = 2;
        cached_integer_sum = integer_sum_6;
        g_160FB5DA4 = integer_sum_6;
      }
    }
    else if ( (signed int)(world_event_count - scaled_index_15) > 22 )
    {
      state_word_4 = g_160FB59A0;
      if ( (int)g_160FB59A0 > 2 )
        state_word_4 = 2;
      g_160FB59A0 = state_word_4;
      if ( integer_sum_6 > 2 )
      {
        cached_integer_sum = 2;
        g_160FB5DA4 = 2;
      }
    }
  }
  scaled_index_16 = 47224LL * saved_packed_word_bits;
  encoded_value = &dword_140404A6C[scaled_index_16 + 438934368];
  saved_record_byte_offset_2 = (unsigned int *)(scaled_index_16 * 4);
  table_value_13 = dword_140404A6C[scaled_index_16 + 438934368];
  remaining_count_12 = dword_140404A6C[scaled_index_16 + 438934366] - table_value_13;
  if ( (int)dword_140404A6C[scaled_index_16 + 438934366] < table_value_13 )
    remaining_count_12 = (unsigned int)(remaining_count_12 + 256);
  cached_packet_out_byte_2 = packet_out_byte;
  if ( (int)remaining_count_12 > 255 )
    remaining_count_12 = 255;
  remaining_amount_2 = 8;
  if ( (int)packet_out_byte < 0x10000 )
  {
    cached_packet_out_bit_2 = packet_out_bit;
    remaining_bits_2 = (unsigned __int8)remaining_count_12;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount_2) - 1) << cached_packet_out_bit_2);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
      integer_difference_13 = 8 - packet_out_bit;
      if ( remaining_amount_2 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( remaining_amount_2 == integer_difference_13 )
      {
        ++packet_out_byte;
        goto LABEL_289;
      }
      remaining_amount_2 -= integer_difference_13;
      cached_packet_out_byte_2 = packet_out_byte + 1;
      remaining_bits_2 >>= integer_difference_13;
      ++packet_out_byte;
      cached_packet_out_bit_2 = 0;
      if ( remaining_amount_2 <= 0 )
        goto LABEL_289;
    }
    packet_out_bit += remaining_amount_2;
  }
LABEL_289:
  sr_net_write_bits(encoded_value, 8);
  if ( (int)remaining_count_12 > 0 )
  {
    do
    {
      remaining_amount_3 = 16;
      scaled_index_17 = dword_140404A6C[47224 * lookup_index + 438934369 + table_value_13];
      cached_packet_out_byte_3 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        cached_packet_out_bit_3 = packet_out_bit;
        remaining_bits_3 = (unsigned __int16)scaled_index_17;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_3) &= ~(((1 << remaining_amount_3) - 1) << cached_packet_out_bit_3);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_3 << SLOBYTE(packet_out_bit);
          integer_difference_14 = 8 - packet_out_bit;
          if ( remaining_amount_3 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( remaining_amount_3 == integer_difference_14 )
          {
            ++packet_out_byte;
            goto LABEL_298;
          }
          remaining_amount_3 -= integer_difference_14;
          cached_packet_out_byte_3 = packet_out_byte + 1;
          remaining_bits_3 >>= integer_difference_14;
          ++packet_out_byte;
          cached_packet_out_bit_3 = 0;
          if ( remaining_amount_3 <= 0 )
            goto LABEL_298;
        }
        packet_out_bit += remaining_amount_3;
      }
LABEL_298:
      sub_14008ED50(scaled_index_17);
      table_value_13 = (unsigned __int8)(table_value_13 + 1);
      --remaining_count_12;
    }
    while ( remaining_count_12 );
    lookup_index_2 = scaled_index_35;
    remaining_count_7 = 1024;
  }
  cached_packet_out_byte_4 = packet_out_byte;
  buffer_cursor = &g_160FB67B0;
  scaled_index_18 = 88LL * lobyte_result_3;
  scaled_index_19 = 47224 * lookup_index;
  cached_packet_out_byte_8 = packet_out_byte;
  encoded_value_2 = &g_160FB67B0;
  record_byte_offset_9 = state_address_14;
  lookup_index_6 = scaled_index_18;
  saved_remaining_count_2 = scaled_index_19;
  integer_sum_7 = scaled_index_18 + scaled_index_19;
  lookup_index_3 = saved_remaining_count_2;
  pair64_result = integer_sum_7;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897493] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897495] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897497] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897499] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897517] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897519] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897521] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897523] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897525] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897527] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897529] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897531] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897533] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897535] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897537] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897539] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897541] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897543] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897545] = 0;
  *(_QWORD *)&dword_140404A6C[integer_sum_7 + 438897547] = 0;
  do
  {
    if ( *(record_byte_offset_9 - 1) )
    {
      sr_net_write_bits(encoded_value_2, 1);
      if ( (*(_BYTE *)buffer_cursor & 1) == 0 )
        goto LABEL_328;
      loaded_word = *record_byte_offset_9;
      if ( !*record_byte_offset_9 )
      {
        table_value_14 = (int)record_byte_offset_9[1];
        remaining_amount_4 = 1;
        table_value_15 = dword_140404A6C[table_value_14 + 282485789];
        cached_packet_out_byte_5 = packet_out_byte;
        masked_bits_5 = *(unsigned int *)((char *)&dword_140404A6C[3 * table_value_14 + 438888533] + lookup_index_2);
        if ( (int)packet_out_byte < 0x10000 )
        {
          cached_packet_out_bit_4 = packet_out_bit;
          remaining_bits_4 = masked_bits_5 != table_value_15;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte_5) &= ~(((1 << remaining_amount_4) - 1) << cached_packet_out_bit_4);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_4 << SLOBYTE(packet_out_bit);
            integer_difference_15 = 8 - packet_out_bit;
            if ( remaining_amount_4 < 8 - packet_out_bit )
              break;
            if ( remaining_amount_4 == integer_difference_15 )
            {
              ++packet_out_byte;
              packet_out_bit = 0;
              goto LABEL_309;
            }
            cached_packet_out_bit_4 = 0;
            cached_packet_out_byte_5 = packet_out_byte + 1;
            remaining_bits_4 >>= integer_difference_15;
            remaining_amount_4 -= integer_difference_15;
            ++packet_out_byte;
            packet_out_bit = 0;
            if ( remaining_amount_4 <= 0 )
              goto LABEL_309;
          }
          packet_out_bit += remaining_amount_4;
        }
LABEL_309:
        if ( masked_bits_5 != table_value_15 )
        {
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280651305], 8);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658439], 1);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658440], 5);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658441], 3);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658443], 4);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658444], 3);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658442], 4);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658445], 5);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658446], 4);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658447], 4);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658449], 4);
          sr_net_write_bits(&dword_140404A6C[7166 * table_value_14 + 280658450], 2);
        }
        sub_1401107F0(saved_running_total, lobyte_result_3, table_value_14);
        dword_140404A6C[scaled_index_18 + 438897493 + lookup_index_3 + (table_value_14 >> 5)] |= 1 << (table_value_14 & 0x1F);
        loaded_word = *record_byte_offset_9;
        buffer_cursor = saved_buffer_cursor;
      }
      if ( loaded_word == 1 )
      {
        table_value_16 = (int)record_byte_offset_9[1];
        remaining_amount_5 = 1;
        lookup_index_4 = table_value_16;
        table_value_17 = dword_140404A6C[table_value_16 + 280648157];
        cached_packet_out_byte_6 = packet_out_byte;
        masked_bits_6 = *(unsigned int *)((char *)&dword_140404A6C[5 * table_value_16 + 438889301] + lookup_index_2);
        if ( (int)packet_out_byte < 0x10000 )
        {
          cached_packet_out_bit_5 = packet_out_bit;
          remaining_bits_5 = masked_bits_6 != table_value_17;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte_6) &= ~(((1 << remaining_amount_5) - 1) << cached_packet_out_bit_5);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_5 << SLOBYTE(packet_out_bit);
            integer_difference_16 = 8 - packet_out_bit;
            if ( remaining_amount_5 < 8 - packet_out_bit )
              break;
            if ( remaining_amount_5 == integer_difference_16 )
            {
              ++packet_out_byte;
              integer_sum_8 = 0;
              goto LABEL_323;
            }
            cached_packet_out_bit_5 = 0;
            cached_packet_out_byte_6 = packet_out_byte + 1;
            remaining_bits_5 >>= integer_difference_16;
            remaining_amount_5 -= integer_difference_16;
            ++packet_out_byte;
            packet_out_bit = 0;
            if ( remaining_amount_5 <= 0 )
              goto LABEL_324;
          }
          integer_sum_8 = remaining_amount_5 + packet_out_bit;
LABEL_323:
          packet_out_bit = integer_sum_8;
        }
LABEL_324:
        if ( masked_bits_6 != table_value_17 )
        {
          scaled_index_20 = 1760 * table_value_16;
          sr_net_write_bits(&dword_140404A6C[1760 * table_value_16 + 278845898], 8);
          sr_net_write_bits(&dword_140404A6C[1760 * table_value_16 + 278845903], 10);
          sr_net_write_bits(&dword_140404A6C[1760 * table_value_16 + 278845902], 10);
          sr_net_write_bits(&dword_140404A6C[1760 * table_value_16 + 278845904], 4);
          if ( dword_140404A6C[1760 * table_value_16 + 278845898] == 39 )
          {
            sr_net_write_bits(&dword_140404A6C[scaled_index_20 + 278846111], 5);
            sr_net_write_bits(&dword_140404A6C[scaled_index_20 + 278846112], 5);
          }
        }
        sub_14010EC30(saved_running_total, lobyte_result_3, table_value_16);
        cached_packet_out_byte_4 = packet_out_byte;
        remaining_count_7 = remaining_count_19;
        masked_bits_7 = table_value_16 & 0x1F;
        scaled_index_18 = lookup_index_6;
        dword_140404A6C[lookup_index_6 + 438897517 + lookup_index_3 + (lookup_index_4 >> 5)] |= 1 << masked_bits_7;
        buffer_cursor = saved_buffer_cursor;
      }
      else
      {
LABEL_328:
        cached_packet_out_byte_4 = packet_out_byte;
        remaining_count_7 = remaining_count_19;
      }
    }
    ++buffer_cursor;
    ++encoded_value_2;
    record_byte_offset_9 += 4;
    saved_buffer_cursor = buffer_cursor;
    remaining_count_19 = --remaining_count_7;
  }
  while ( remaining_count_7 );
  saved_pair64_result_2 = pair64_result;
  g_16B2A223C += cached_packet_out_byte_4 - cached_packet_out_byte_8;
  lobyte_result = packet_out_bit;
  remaining_amount_6 = 8;
  saved_cached_packet_out_byte_2 = cached_packet_out_byte_4;
  *(_QWORD *)&dword_140404A6C[pair64_result + 438897501] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897503] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897505] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897507] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897509] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897511] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897513] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897515] = 0;
  if ( cached_packet_out_byte_4 < 0x10000 )
  {
    remaining_bits_6 = (unsigned __int8)cached_integer_sum;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_6) - 1) << lobyte_result);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_6 << SLOBYTE(packet_out_bit);
      integer_difference_17 = 8 - packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      if ( remaining_amount_6 < 8 - packet_out_bit )
        break;
      lobyte_result = 0;
      packet_out_bit = 0;
      if ( remaining_amount_6 == integer_difference_17 )
      {
        cached_packet_out_byte_4 = ++packet_out_byte;
        goto LABEL_338;
      }
      cached_packet_out_byte_4 = packet_out_byte + 1;
      remaining_bits_6 >>= integer_difference_17;
      remaining_amount_6 -= integer_difference_17;
      ++packet_out_byte;
      if ( remaining_amount_6 <= 0 )
        goto LABEL_338;
    }
    lobyte_result = remaining_amount_6 + LOBYTE(packet_out_bit);
    packet_out_bit += remaining_amount_6;
  }
LABEL_338:
  cached_record_byte_offset = saved_record_byte_offset;
  if ( cached_integer_sum > 0 )
  {
    scaled_index_21 = 23612LL * (int)saved_running_total;
    scaled_index_22 = 23612 * saved_record_byte_offset;
    scaled_index_23 = 79616LL * lobyte_result_3;
    state_address_4 = &g_160FB5DAC;
    remaining_count_19 = (unsigned int)cached_integer_sum;
    state_address_14 = &g_160FB5DAC;
    while ( 1 )
    {
      scaled_index_24 = (int)*(state_address_4 - 1);
      remaining_amount_7 = 10;
      loaded_word_2 = *state_address_4;
      if ( cached_packet_out_byte_4 < 0x10000 )
      {
        remaining_bits_7 = *(state_address_4 - 1) & 0x3FF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_7) - 1) << lobyte_result);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_7 << SLOBYTE(packet_out_bit);
          integer_difference_18 = 8 - packet_out_bit;
          cached_packet_out_byte_4 = packet_out_byte;
          if ( remaining_amount_7 < 8 - packet_out_bit )
            break;
          if ( remaining_amount_7 == integer_difference_18 )
          {
            cached_packet_out_byte_4 = ++packet_out_byte;
            lobyte_result = 0;
            packet_out_bit = 0;
            goto LABEL_348;
          }
          remaining_bits_7 >>= integer_difference_18;
          cached_packet_out_byte_4 = packet_out_byte + 1;
          packet_out_bit = 0;
          remaining_amount_7 -= integer_difference_18;
          ++packet_out_byte;
          lobyte_result = 0;
          if ( remaining_amount_7 <= 0 )
            goto LABEL_348;
        }
        lobyte_result = remaining_amount_7 + LOBYTE(packet_out_bit);
        packet_out_bit += remaining_amount_7;
      }
LABEL_348:
      remaining_amount_8 = 2;
      if ( cached_packet_out_byte_4 < 0x10000 )
      {
        remaining_bits_8 = loaded_word_2 & 3;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_8) - 1) << lobyte_result);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_8 << SLOBYTE(packet_out_bit);
          integer_difference_19 = 8 - packet_out_bit;
          if ( remaining_amount_8 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( remaining_amount_8 == integer_difference_19 )
          {
            ++packet_out_byte;
            goto LABEL_356;
          }
          remaining_amount_8 -= integer_difference_19;
          cached_packet_out_byte_4 = packet_out_byte + 1;
          remaining_bits_8 >>= integer_difference_19;
          ++packet_out_byte;
          lobyte_result = 0;
          if ( remaining_amount_8 <= 0 )
            goto LABEL_356;
        }
        packet_out_bit += remaining_amount_8;
      }
LABEL_356:
      sr_net_write_bits(&dword_140404A6C[5210 * scaled_index_24 + 129720183], 10);
      sr_net_write_bits(&dword_140404A6C[2 * scaled_index_21 + 438887510 + 2 * scaled_index_24], 8);
      scaled_index_25 = dword_140404A6C[2 * scaled_index_22 + 438887510 + 2 * scaled_index_24];
      cached_scaled_index = (unsigned __int8)scaled_index_25;
      comparison_result = (int)(g_1AD04B20C - scaled_index_25) < 192;
      scaled_index_26 = 228 * scaled_index_24;
      if ( (int)(g_1AD04B20C - scaled_index_25) >= 192 )
        cached_scaled_index = 0;
      scaled_index_27 = scaled_index_23 * 4 + scaled_index_26;
      scaled_index_28 = scaled_index_26 + 318464 * cached_scaled_index;
      sub_14010E6C0(
        &dword_140404A6C[scaled_index_23 + 137328830 + scaled_index_26 / 4],
        *(unsigned int *)((char *)&g_160FE2D64 + scaled_index_28),
        (int)(g_1AD04B20C - scaled_index_25) < 192,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_160FE2D68 + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D68 + scaled_index_28),
        comparison_result,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_160FE2D6C + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D6C + scaled_index_28),
        comparison_result,
        28);
      sr_net_write_bits((unsigned int *)((char *)&g_160FE2D70 + scaled_index_27), 2);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D74 + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D74 + scaled_index_28),
        comparison_result,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D78 + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D78 + scaled_index_28),
        comparison_result,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D7C + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D7C + scaled_index_28),
        comparison_result,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_160FE2D80 + scaled_index_27),
        *(unsigned int *)((char *)&g_160FE2D80 + scaled_index_28),
        comparison_result,
        9);
      running_total_2 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_28 + 553528712);
      running_total_3 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_27 + 553528712);
      remaining_count_13 = 4;
      do
      {
        sub_14010E6C0(running_total_3 - 1, *(running_total_2 - 1), comparison_result, 8);
        sub_14010E9B0(running_total_3, *running_total_2, comparison_result, 9);
        sub_14010E6C0(running_total_3 + 1, running_total_2[1], comparison_result, 8);
        running_total_3 += 3;
        running_total_2 += 3;
        --remaining_count_13;
      }
      while ( remaining_count_13 );
      sr_net_write_bits(&dword_140404A6C[5210 * scaled_index_24 + 129720369], 13);
      lobyte_result = packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      dword_140404A6C[lookup_index_6 + 438897501 + saved_remaining_count_2 + (scaled_index_24 >> 5)] |= 1 << (scaled_index_24 & 0x1F);
      state_address_4 = state_address_14 + 2;
      comparison_result_2 = remaining_count_19-- == 1;
      state_address_14 += 2;
      if ( comparison_result_2 )
        break;
      scaled_index_23 = 79616LL * lobyte_result_3;
    }
    lookup_index_2 = scaled_index_35;
    cached_record_byte_offset = saved_record_byte_offset;
    saved_pair64_result_2 = pair64_result;
  }
  saved_cached_packet_out_byte = cached_packet_out_byte_4;
  remaining_amount_9 = 8;
  g_16B2A2240 += cached_packet_out_byte_4 - saved_cached_packet_out_byte_2;
  if ( cached_packet_out_byte_4 < 0x10000 )
  {
    remaining_bits_9 = 0;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_9) - 1) << lobyte_result);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_9 << SLOBYTE(packet_out_bit);
      integer_difference_20 = 8 - packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      if ( remaining_amount_9 < 8 - packet_out_bit )
        break;
      lobyte_result = 0;
      packet_out_bit = 0;
      if ( remaining_amount_9 == integer_difference_20 )
      {
        cached_packet_out_byte_4 = ++packet_out_byte;
        goto LABEL_371;
      }
      cached_packet_out_byte_4 = packet_out_byte + 1;
      remaining_bits_9 >>= integer_difference_20;
      remaining_amount_9 -= integer_difference_20;
      ++packet_out_byte;
      if ( remaining_amount_9 <= 0 )
        goto LABEL_371;
    }
    lobyte_result = remaining_amount_9 + LOBYTE(packet_out_bit);
    packet_out_bit += remaining_amount_9;
  }
LABEL_371:
  cached_world_unknown_15fd16260_count = world_unknown_15fd16260_count;
  g_16B2A2244 += cached_packet_out_byte_4 - saved_cached_packet_out_byte;
  scaled_index_29 = 0;
  if ( (int)world_unknown_15fd16260_count < 4 )
  {
    if ( (int)world_unknown_15fd16260_count <= 0 )
      goto LABEL_410;
    scaled_index_30 = 0;
    goto LABEL_402;
  }
  state_address_5 = (float *)&g_15FD16278;
  record_byte_offset_10 = (unsigned int *)((char *)&g_1A8E447D0 + lookup_index_2);
  shifted_bits_10 = ((world_unknown_15fd16260_count - 4) >> 2) + 1;
  remaining_count_14 = shifted_bits_10;
  scaled_index_29 = 4 * shifted_bits_10;
  scaled_index_30 = 4LL * shifted_bits_10;
  do
  {
    square_root_14 = fsqrt(
             (float)((float)((float)(*(float *)&masked_bits_2 - *(state_address_5 - 1)) * (float)(*(float *)&masked_bits_2 - *(state_address_5 - 1)))
                   + (float)((float)(*(float *)&masked_bits - *(state_address_5 - 2)) * (float)(*(float *)&masked_bits - *(state_address_5 - 2))))
           + (float)((float)(*(float *)&float_word - *state_address_5) * (float)(*(float *)&float_word - *state_address_5)))
         / (float)((float)(fabs(state_address_5[14]) * 4.0) + 1.0);
    square_root_15 = fsqrt((float)((float)(state_address_5[1] * state_address_5[1]) + (float)(state_address_5[2] * state_address_5[2])) + (float)(state_address_5[3] * state_address_5[3]));
    if ( square_root_15 >= 0.016666668 )
      square_root_15 = 0.016666668;
    state_address_6 = (float)((float)(*(float *)&masked_bits_2 - state_address_5[382]) * (float)(*(float *)&masked_bits_2 - state_address_5[382]))
         + (float)((float)(*(float *)&masked_bits - state_address_5[381]) * (float)(*(float *)&masked_bits - state_address_5[381]));
    saved_state_address = (int)(float)(256.0 - (float)((float)(square_root_14 / (float)((float)(square_root_15 * 240.0) + 1.0)) * 0.5));
    scaled_value = state_address_5[385] * state_address_5[385];
    product_difference = *(float *)&float_word - state_address_5[383];
    if ( saved_state_address < 16 )
      saved_state_address = (int)saved_buffer_cursor_2;
    if ( cached_record_byte_offset == 255 )
      saved_state_address = 1;
    *(record_byte_offset_10 - 3) += saved_state_address;
    square_root_16 = fsqrt(state_address_6 + (float)(product_difference * product_difference)) / (float)((float)(fabs(state_address_5[397]) * 4.0) + 1.0);
    square_root_17 = fsqrt((float)((float)(state_address_5[384] * state_address_5[384]) + scaled_value) + (float)(state_address_5[386] * state_address_5[386]));
    if ( square_root_17 >= 0.016666668 )
      square_root_17 = 0.016666668;
    state_address_7 = (float)((float)(*(float *)&masked_bits_2 - state_address_5[765]) * (float)(*(float *)&masked_bits_2 - state_address_5[765]))
         + (float)((float)(*(float *)&masked_bits - state_address_5[764]) * (float)(*(float *)&masked_bits - state_address_5[764]));
    saved_state_address_2 = (int)(float)(256.0 - (float)((float)(square_root_16 / (float)((float)(square_root_17 * 240.0) + 1.0)) * 0.5));
    scaled_value_2 = state_address_5[768] * state_address_5[768];
    product_difference_2 = *(float *)&float_word - state_address_5[766];
    if ( saved_state_address_2 < 16 )
      saved_state_address_2 = (int)saved_buffer_cursor_2;
    if ( cached_record_byte_offset == 255 )
      saved_state_address_2 = 1;
    *record_byte_offset_10 += saved_state_address_2;
    square_root_18 = fsqrt(state_address_7 + (float)(product_difference_2 * product_difference_2)) / (float)((float)(fabs(state_address_5[780]) * 4.0) + 1.0);
    square_root_19 = fsqrt((float)((float)(state_address_5[767] * state_address_5[767]) + scaled_value_2) + (float)(state_address_5[769] * state_address_5[769]));
    if ( square_root_19 >= 0.016666668 )
      square_root_19 = 0.016666668;
    state_address_8 = (float)((float)(*(float *)&masked_bits_2 - state_address_5[1148]) * (float)(*(float *)&masked_bits_2 - state_address_5[1148]))
         + (float)((float)(*(float *)&masked_bits - state_address_5[1147]) * (float)(*(float *)&masked_bits - state_address_5[1147]));
    saved_state_address_3 = (int)(float)(256.0 - (float)((float)(square_root_18 / (float)((float)(square_root_19 * 240.0) + 1.0)) * 0.5));
    scaled_value_3 = state_address_5[1151] * state_address_5[1151];
    product_difference_3 = *(float *)&float_word - state_address_5[1149];
    if ( saved_state_address_3 < 16 )
      saved_state_address_3 = (int)saved_buffer_cursor_2;
    if ( cached_record_byte_offset == 255 )
      saved_state_address_3 = 1;
    record_byte_offset_10[3] += saved_state_address_3;
    square_root_20 = fsqrt(state_address_8 + (float)(product_difference_3 * product_difference_3)) / (float)((float)(fabs(state_address_5[1163]) * 4.0) + 1.0);
    square_root_21 = fsqrt((float)((float)(state_address_5[1150] * state_address_5[1150]) + scaled_value_3) + (float)(state_address_5[1152] * state_address_5[1152]));
    if ( square_root_21 >= 0.016666668 )
      square_root_21 = 0.016666668;
    saved_state_address_4 = (int)(float)(256.0 - (float)((float)(square_root_20 / (float)((float)(square_root_21 * 240.0) + 1.0)) * 0.5));
    if ( saved_state_address_4 < 16 )
      saved_state_address_4 = (int)saved_buffer_cursor_2;
    if ( cached_record_byte_offset == 255 )
      saved_state_address_4 = 1;
    state_address_5 += 1532;
    record_byte_offset_10[6] += saved_state_address_4;
    record_byte_offset_10 += 12;
    --remaining_count_14;
  }
  while ( remaining_count_14 );
  if ( scaled_index_29 < (int)cached_world_unknown_15fd16260_count )
  {
LABEL_402:
    state_address_9 = (unsigned int *)((char *)&dword_140404A6C[3 * scaled_index_30 + 438894422] + lookup_index_2);
    state_address_10 = (float *)&dword_140404A6C[383 * scaled_index_30 + 132400643];
    remaining_count_15 = (unsigned int)(cached_world_unknown_15fd16260_count - scaled_index_29);
    do
    {
      square_root_22 = fsqrt(
               (float)((float)((float)(*(float *)&masked_bits_2 - *(state_address_10 - 1)) * (float)(*(float *)&masked_bits_2 - *(state_address_10 - 1)))
                     + (float)((float)(*(float *)&masked_bits - *(state_address_10 - 2)) * (float)(*(float *)&masked_bits - *(state_address_10 - 2))))
             + (float)((float)(*(float *)&float_word - *state_address_10) * (float)(*(float *)&float_word - *state_address_10)))
           / (float)((float)(fabs(state_address_10[14]) * 4.0) + 1.0);
      square_root_23 = fsqrt((float)((float)(state_address_10[1] * state_address_10[1]) + (float)(state_address_10[2] * state_address_10[2])) + (float)(state_address_10[3] * state_address_10[3]));
      if ( square_root_23 >= 0.016666668 )
        square_root_23 = 0.016666668;
      integer_quotient_3 = (int)(float)(256.0 - (float)((float)(square_root_22 / (float)((float)(square_root_23 * 240.0) + 1.0)) * 0.5));
      if ( integer_quotient_3 < 16 )
        integer_quotient_3 = 16;
      if ( cached_record_byte_offset == 255 )
        integer_quotient_3 = 1;
      state_address_10 += 383;
      *state_address_9 += integer_quotient_3;
      state_address_9 += 3;
      --remaining_count_15;
    }
    while ( remaining_count_15 );
  }
LABEL_410:
  integer_sum_9 = 0;
  iteration_count_3 = 0;
  renderer_sort_count = 0;
  if ( (int)cached_world_unknown_15fd16260_count > 0 )
  {
    state_address_11 = (unsigned int *)((char *)&g_1A8E447C4 + lookup_index_2);
    do
    {
      lookup_index_5 = integer_sum_9;
      loaded_word_3 = *state_address_11;
      state_address_11 += 3;
      dword_140404A6C[lookup_index_5 + 437192782] = loaded_word_3;
      dword_140404A6C[renderer_sort_count + 437454926] = iteration_count_3++;
      integer_sum_9 = ++renderer_sort_count;
    }
    while ( iteration_count_3 < (int)cached_world_unknown_15fd16260_count );
  }
  sr_renderer_sort();
  saved_packed_word_bits_2 = saved_running_total;
  g_160FC37B4 = 0;
  selection_code = 32;
  remaining_count_16 = renderer_sort_count - 1;
  if ( (_DWORD)saved_running_total != 255 )
    selection_code = 16;
  remaining_count_17 = remaining_count_16;
  integer_sum_10 = 0;
  if ( remaining_count_16 >= 0 )
  {
    integer_difference_21 = renderer_sort_count - selection_code;
    do
    {
      table_value_18 = (int)dword_140404A6C[dword_140404A6C[remaining_count_17 + 436668494] + 437454926];
      if ( remaining_count_16 >= integer_difference_21 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[3 * table_value_18 + 438894422] + lookup_index_2) = 0;
        dword_140404A6C[integer_sum_10 + 137296723] = table_value_18;
        integer_sum_10 = ++g_160FC37B4;
      }
      --remaining_count_16;
      --remaining_count_17;
    }
    while ( remaining_count_17 >= 0 );
  }
  remaining_amount_10 = 10;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897549] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897551] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897553] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897555] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897557] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897559] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897561] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897563] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897565] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897567] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897569] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897571] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897573] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897575] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897577] = 0;
  *(_QWORD *)&dword_140404A6C[saved_pair64_result_2 + 438897579] = 0;
  rol4_result_9 = 1;
  saved_cached_packet_out_byte_3 = cached_packet_out_byte_4;
  if ( cached_packet_out_byte_4 < 0x10000 )
  {
    remaining_bits_10 = cached_world_unknown_15fd16260_count & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_10) - 1) << lobyte_result);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_10 << SLOBYTE(packet_out_bit);
      integer_difference_22 = 8 - packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      if ( remaining_amount_10 < 8 - packet_out_bit )
        break;
      lobyte_result = 0;
      packet_out_bit = 0;
      if ( remaining_amount_10 == integer_difference_22 )
      {
        cached_packet_out_byte_4 = ++packet_out_byte;
        goto LABEL_428;
      }
      cached_packet_out_byte_4 = packet_out_byte + 1;
      remaining_bits_10 >>= integer_difference_22;
      remaining_amount_10 -= integer_difference_22;
      ++packet_out_byte;
      if ( remaining_amount_10 <= 0 )
        goto LABEL_428;
    }
    lobyte_result = remaining_amount_10 + LOBYTE(packet_out_bit);
    packet_out_bit += remaining_amount_10;
  }
LABEL_428:
  remaining_amount_11 = 8;
  if ( cached_packet_out_byte_4 < 0x10000 )
  {
    remaining_bits_11 = (unsigned __int8)integer_sum_10;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_11) - 1) << lobyte_result);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_11 << SLOBYTE(packet_out_bit);
      integer_difference_23 = 8 - packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      if ( remaining_amount_11 < 8 - packet_out_bit )
        break;
      lobyte_result = 0;
      packet_out_bit = 0;
      if ( remaining_amount_11 == integer_difference_23 )
      {
        cached_packet_out_byte_4 = ++packet_out_byte;
        goto LABEL_436;
      }
      cached_packet_out_byte_4 = packet_out_byte + 1;
      remaining_bits_11 >>= integer_difference_23;
      remaining_amount_11 -= integer_difference_23;
      ++packet_out_byte;
      if ( remaining_amount_11 <= 0 )
        goto LABEL_436;
    }
    lobyte_result = remaining_amount_11 + LOBYTE(packet_out_bit);
    packet_out_bit += remaining_amount_11;
  }
LABEL_436:
  *(_OWORD *)&g_160FC4840 = 0;
  *(_OWORD *)&g_160FC4850 = 0;
  g_160FC4860 = 0;
  g_160FC4870 = 0;
  g_160FC4880 = 0;
  g_160FC4890 = 0;
  g_160FC48A0 = 0;
  g_160FC48B0 = 0;
  if ( integer_sum_10 > 0 )
  {
    buffer_cursor_2 = &g_160FC37B8;
    remaining_count_18 = (unsigned int)integer_sum_10;
    do
    {
      scaled_index_31 = (int)*buffer_cursor_2++;
      dword_140404A6C[(scaled_index_31 >> 5) + 137297781] |= 1 << (scaled_index_31 & 0x1F);
      --remaining_count_18;
    }
    while ( remaining_count_18 );
  }
  if ( LOBYTE(g_183F7C960) && saved_packed_word_bits_2 == 255 )
  {
    crt_sprintf(
      &g_16B2A1DC8,
      "%08x %08x %08x %08x %08x %08x %08x %08x\n",
      g_160FC4840,
      g_160FC4844,
      g_160FC4848,
      g_160FC484C,
      g_160FC4850,
      g_160FC4854,
      g_160FC4858,
      g_160FC485C);
    lobyte_result = packet_out_bit;
    cached_packet_out_byte_4 = packet_out_byte;
    cached_world_unknown_15fd16260_count = world_unknown_15fd16260_count;
  }
  iteration_count_4 = 0;
  if ( (int)cached_world_unknown_15fd16260_count <= 0 )
    goto LABEL_511;
  record_byte_offset_11 = 0;
  saved_running_total = 0;
  element_index = 0;
  remaining_count_19 = 0;
  buffer_cursor_3 = &g_15FE95280;
  state_address_14 = nullptr;
  state_address_12 = &g_15FD16268;
  saved_record_byte_offset = 0;
  running_total_4 = 0;
  pair64_result = 0;
  saved_remaining_count = 0;
  saved_buffer_cursor_2 = &g_15FE95280;
  saved_state_address_5 = nullptr;
  state_address_13 = &g_15FD16268;
  encoded_value_3 = &g_15FD16838;
  saved_cached_world_unknown_15fd16260_count = cached_world_unknown_15fd16260_count;
  do
  {
    shifted_bits_11 = element_index >> 5;
    cached_scaled_index_2 = scaled_index_35;
    if ( (rol4_result_9 & dword_140404A6C[(element_index >> 5) + 137297781]) != 0 )
    {
      if ( iteration_count_4 > 0 )
      {
        remaining_amount_12 = 1;
        if ( cached_packet_out_byte_4 < 0x10000 )
        {
          remaining_bits_12 = 0;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_12) - 1) << lobyte_result);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_12 << SLOBYTE(packet_out_bit);
            integer_difference_24 = 8 - packet_out_bit;
            cached_packet_out_byte_4 = packet_out_byte;
            if ( remaining_amount_12 < 8 - packet_out_bit )
              break;
            lobyte_result = 0;
            packet_out_bit = 0;
            if ( remaining_amount_12 == integer_difference_24 )
            {
              cached_packet_out_byte_4 = ++packet_out_byte;
              goto LABEL_454;
            }
            cached_packet_out_byte_4 = packet_out_byte + 1;
            remaining_bits_12 >>= integer_difference_24;
            remaining_amount_12 -= integer_difference_24;
            ++packet_out_byte;
            if ( remaining_amount_12 <= 0 )
              goto LABEL_454;
          }
          lobyte_result = remaining_amount_12 + LOBYTE(packet_out_bit);
          packet_out_bit += remaining_amount_12;
        }
LABEL_454:
        remaining_amount_13 = 10;
        if ( cached_packet_out_byte_4 < 0x10000 )
        {
          remaining_bits_13 = iteration_count_4 & 0x3FF;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_13) - 1) << lobyte_result);
            *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_13 << SLOBYTE(packet_out_bit);
            integer_difference_25 = 8 - packet_out_bit;
            cached_packet_out_byte_4 = packet_out_byte;
            if ( remaining_amount_13 < 8 - packet_out_bit )
              break;
            lobyte_result = 0;
            packet_out_bit = 0;
            if ( remaining_amount_13 == integer_difference_25 )
            {
              cached_packet_out_byte_4 = ++packet_out_byte;
              goto LABEL_462;
            }
            cached_packet_out_byte_4 = packet_out_byte + 1;
            remaining_bits_13 >>= integer_difference_25;
            remaining_amount_13 -= integer_difference_25;
            ++packet_out_byte;
            if ( remaining_amount_13 <= 0 )
              goto LABEL_462;
          }
          lobyte_result = remaining_amount_13 + LOBYTE(packet_out_bit);
          packet_out_bit += remaining_amount_13;
        }
      }
LABEL_462:
      selection_flag = 0;
      iteration_count_4 = 0;
      remaining_amount_14 = 1;
      if ( cached_packet_out_byte_4 < 0x10000 )
      {
        remaining_bits_14 = 1;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_14) - 1) << lobyte_result);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_14 << SLOBYTE(packet_out_bit);
          integer_difference_26 = 8 - packet_out_bit;
          if ( remaining_amount_14 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( remaining_amount_14 == integer_difference_26 )
          {
            ++packet_out_byte;
            goto LABEL_470;
          }
          remaining_amount_14 -= integer_difference_26;
          cached_packet_out_byte_4 = packet_out_byte + 1;
          remaining_bits_14 >>= integer_difference_26;
          ++packet_out_byte;
          lobyte_result = 0;
          if ( remaining_amount_14 <= 0 )
            goto LABEL_470;
        }
        packet_out_bit += remaining_amount_14;
      }
LABEL_470:
      sr_net_write_bits((unsigned int *)((char *)&g_1A8E447C8 + (unsigned __int64)saved_record_byte_offset_2 + (_QWORD)saved_state_address_5), 8);
      integer_sum_11 = cached_scaled_index_2 + saved_record_byte_offset;
      lobyte_result_2 = packet_out_bit;
      remaining_amount_15 = 1;
      masked_bits_8 = *(unsigned int *)((char *)&g_1A8E447C8 + cached_scaled_index_2 + saved_record_byte_offset);
      comparison_result_3 = (signed int)(g_1AD04B20C - masked_bits_8) < 192;
      saved_masked_bits = (unsigned __int8)masked_bits_8;
      cached_packet_out_byte_7 = packet_out_byte;
      LOBYTE(selection_flag) = comparison_result_3;
      if ( !comparison_result_3 )
        saved_masked_bits = 0;
      if ( (int)packet_out_byte < 0x10000 )
      {
        remaining_bits_15 = *state_address_13 != -1;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_7) &= ~(((1 << remaining_amount_15) - 1) << lobyte_result_2);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_15 << SLOBYTE(packet_out_bit);
          integer_difference_27 = 8 - packet_out_bit;
          cached_packet_out_byte_7 = packet_out_byte;
          if ( remaining_amount_15 < 8 - packet_out_bit )
            break;
          if ( remaining_amount_15 == integer_difference_27 )
          {
            cached_packet_out_byte_7 = ++packet_out_byte;
            lobyte_result_2 = 0;
            packet_out_bit = 0;
            goto LABEL_480;
          }
          remaining_bits_15 >>= integer_difference_27;
          cached_packet_out_byte_7 = packet_out_byte + 1;
          packet_out_bit = 0;
          remaining_amount_15 -= integer_difference_27;
          ++packet_out_byte;
          lobyte_result_2 = 0;
          if ( remaining_amount_15 <= 0 )
            goto LABEL_480;
        }
        lobyte_result_2 = remaining_amount_15 + LOBYTE(packet_out_bit);
        packet_out_bit += remaining_amount_15;
      }
LABEL_480:
      remaining_amount_16 = 1;
      masked_bits_9 = *(unsigned int *)((char *)&g_1A8E447C0 + integer_sum_11);
      loaded_word_4 = *saved_buffer_cursor_2;
      if ( cached_packet_out_byte_7 < 0x10000 )
      {
        remaining_bits_16 = masked_bits_9 != loaded_word_4;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_7) &= ~(((1 << remaining_amount_16) - 1) << lobyte_result_2);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_16 << SLOBYTE(packet_out_bit);
          integer_difference_28 = 8 - packet_out_bit;
          if ( remaining_amount_16 < 8 - packet_out_bit )
            break;
          if ( remaining_amount_16 == integer_difference_28 )
          {
            ++packet_out_byte;
            integer_sum_12 = 0;
            goto LABEL_488;
          }
          cached_packet_out_byte_7 = packet_out_byte + 1;
          remaining_bits_16 >>= integer_difference_28;
          remaining_amount_16 -= integer_difference_28;
          ++packet_out_byte;
          packet_out_bit = 0;
          lobyte_result_2 = 0;
          if ( remaining_amount_16 <= 0 )
            goto LABEL_489;
        }
        integer_sum_12 = remaining_amount_16 + packet_out_bit;
LABEL_488:
        packet_out_bit = integer_sum_12;
      }
LABEL_489:
      if ( masked_bits_9 != loaded_word_4 )
      {
        sr_net_write_bits(encoded_value_3 - 374, 6);
        sr_net_write_bits(encoded_value_3, 4);
      }
      scaled_index_32 = saved_running_total + 318464LL * saved_masked_bits;
      scaled_index_33 = remaining_count_19 + 318464LL * lobyte_result_3;
      sub_14010E6C0(
        (unsigned int *)((char *)&g_161008568 + scaled_index_33),
        *(unsigned int *)((char *)&g_161008568 + scaled_index_32),
        selection_flag,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_16100856C + scaled_index_33),
        *(unsigned int *)((char *)&g_16100856C + scaled_index_32),
        selection_flag,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&g_161008570 + scaled_index_33),
        *(unsigned int *)((char *)&g_161008570 + scaled_index_32),
        selection_flag,
        28);
      sub_14010E9B0(
        (unsigned int *)((char *)&g_161008584 + scaled_index_33),
        *(unsigned int *)((char *)&g_161008584 + scaled_index_32),
        selection_flag,
        9);
      lobyte_result = packet_out_bit;
      cached_packet_out_byte_4 = packet_out_byte;
      buffer_cursor_3 = saved_buffer_cursor_2;
      record_byte_offset_11 = saved_record_byte_offset;
      dword_140404A6C[saved_remaining_count_2 + 438897549 + shifted_bits_11 + lookup_index_6] |= rol4_result_9;
      element_index = pair64_result;
      state_address_12 = state_address_13;
      saved_state_address_5 = state_address_14;
      running_total_4 = saved_running_total;
      saved_remaining_count = remaining_count_19;
      cached_world_unknown_15fd16260_count = saved_cached_world_unknown_15fd16260_count;
    }
    else
    {
      ++iteration_count_4;
    }
    ++element_index;
    rol4_result_9 = __ROL4__(rol4_result_9, 1);
    saved_state_address_5 += 3;
    pair64_result = element_index;
    saved_remaining_count += 40;
    state_address_14 = saved_state_address_5;
    state_address_12 += 383;
    remaining_count_19 = saved_remaining_count;
    record_byte_offset_11 += 12;
    state_address_13 = state_address_12;
    ++buffer_cursor_3;
    saved_record_byte_offset = record_byte_offset_11;
    running_total_4 += 40;
    saved_buffer_cursor_2 = buffer_cursor_3;
    encoded_value_3 += 383;
    saved_running_total = running_total_4;
    saved_cached_world_unknown_15fd16260_count = --cached_world_unknown_15fd16260_count;
  }
  while ( cached_world_unknown_15fd16260_count );
  if ( iteration_count_4 <= 0 )
  {
LABEL_511:
    remaining_amount_18 = 10;
  }
  else
  {
    remaining_amount_17 = 1;
    if ( cached_packet_out_byte_4 < 0x10000 )
    {
      remaining_bits_17 = 0;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_17) - 1) << lobyte_result);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_17 << SLOBYTE(packet_out_bit);
        integer_difference_29 = 8 - packet_out_bit;
        cached_packet_out_byte_4 = packet_out_byte;
        if ( remaining_amount_17 < 8 - packet_out_bit )
          break;
        lobyte_result = 0;
        packet_out_bit = 0;
        if ( remaining_amount_17 == integer_difference_29 )
        {
          cached_packet_out_byte_4 = ++packet_out_byte;
          goto LABEL_503;
        }
        cached_packet_out_byte_4 = packet_out_byte + 1;
        remaining_bits_17 >>= integer_difference_29;
        remaining_amount_17 -= integer_difference_29;
        ++packet_out_byte;
        if ( remaining_amount_17 <= 0 )
          goto LABEL_503;
      }
      lobyte_result = remaining_amount_17 + LOBYTE(packet_out_bit);
      packet_out_bit += remaining_amount_17;
    }
LABEL_503:
    remaining_amount_18 = 10;
    remaining_amount_19 = 10;
    if ( cached_packet_out_byte_4 < 0x10000 )
    {
      remaining_bits_18 = iteration_count_4 & 0x3FF;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_19) - 1) << lobyte_result);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_18 << SLOBYTE(packet_out_bit);
        integer_difference_30 = 8 - packet_out_bit;
        cached_packet_out_byte_4 = packet_out_byte;
        if ( remaining_amount_19 < 8 - packet_out_bit )
          break;
        lobyte_result = 0;
        packet_out_bit = 0;
        if ( remaining_amount_19 == integer_difference_30 )
        {
          cached_packet_out_byte_4 = ++packet_out_byte;
          goto LABEL_512;
        }
        cached_packet_out_byte_4 = packet_out_byte + 1;
        remaining_bits_18 >>= integer_difference_30;
        remaining_amount_19 -= integer_difference_30;
        ++packet_out_byte;
        if ( remaining_amount_19 <= 0 )
          goto LABEL_512;
      }
      lobyte_result = remaining_amount_19 + LOBYTE(packet_out_bit);
      packet_out_bit += remaining_amount_19;
    }
  }
LABEL_512:
  g_16B2A2238 += cached_packet_out_byte_4 - saved_cached_packet_out_byte_3;
  record_pointer = saved_record_byte_offset_2;
  if ( (int)g_175FD145C <= 0 )
    masked_bits_10 = 0;
  else
    masked_bits_10 = *(signed int *)((char *)&g_1A8E3DA74 + (_QWORD)saved_record_byte_offset_2) % (signed int)g_175FD145C;
  if ( cached_packet_out_byte_4 < 0x10000 )
  {
    remaining_bits_19 = masked_bits_10 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) &= ~(((1 << remaining_amount_18) - 1) << lobyte_result);
      *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_19 << SLOBYTE(packet_out_bit);
      integer_difference_31 = 8 - packet_out_bit;
      if ( remaining_amount_18 < 8 - packet_out_bit )
        break;
      packet_out_bit = 0;
      if ( remaining_amount_18 == integer_difference_31 )
      {
        ++packet_out_byte;
        goto LABEL_523;
      }
      remaining_amount_18 -= integer_difference_31;
      cached_packet_out_byte_4 = packet_out_byte + 1;
      remaining_bits_19 >>= integer_difference_31;
      ++packet_out_byte;
      lobyte_result = 0;
      if ( remaining_amount_18 <= 0 )
        goto LABEL_523;
    }
    packet_out_bit += remaining_amount_18;
  }
LABEL_523:
  scaled_index_34 = 34LL * masked_bits_10;
  sr_net_write_bits(&dword_140404A6C[scaled_index_34 + 225391250], 2);
  sr_net_write_bits(&dword_140404A6C[scaled_index_34 + 225391251], 2);
  sr_net_write_bits(&dword_140404A6C[scaled_index_34 + 225391252], 2);
  sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_34 * 4 + 905778368), 2);
  ++*(unsigned int *)((char *)&g_1A8E3DA74 + (_QWORD)record_pointer);
}
#undef integer_difference_32
#undef cached_integer_sum
#undef saved_cached_world_unknown_15fd16260_count
#undef lobyte_result_3
#undef cached_packet_out_byte_8
#undef saved_cached_packet_out_byte_2
#undef saved_cached_packet_out_byte_3
#undef saved_buffer_cursor
#undef state_address_13
#undef pair64_result
#undef unused_written_slot
#undef saved_running_total
#undef remaining_count_19
#undef saved_record_byte_offset
#undef saved_buffer_cursor_2
#undef state_address_14
#undef scaled_index_35
#undef saved_remaining_count_2
#undef saved_record_byte_offset_2
#undef lookup_index_6

