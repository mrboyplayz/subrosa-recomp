#include "shared_client.h"
#include "../engine/physics.h"

// 1400A0ABC: conditional instruction was optimized away because rdx.8 is in (1..FF)

//----- (00000001400A1640) ----------------------------------------------------
void            sub_1400A1640(int a1, unsigned int a2)
{
  __int64 input_value;
  int iteration_count;
  unsigned int *state_address;
  int table_value;
  __int64 scaled_index;
  int toupper_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  char table_value_2;
  unsigned int table_value_3;
  __int64 scaled_index_4;

  input_value = a1;
  if ( !g_183F7C754 )
  {
    iteration_count = 0;
    if ( (int)g_18329CC4C > 0 )
    {
      state_address = &g_18329CC54;
      do
      {
        if ( *(state_address - 1) )
          goto LABEL_34;
        table_value = state_address[2];
        if ( (unsigned int)(table_value - 97) > 0x19 )
        {
          if ( (unsigned int)(table_value - 33) > 0x3E )
            goto LABEL_16;
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
          scaled_index_2 = 14388 * input_value + 84LL * (int)dword_140404A6C[3597 * input_value + 71856362];
          if ( (state_address[3] & 3) != 0 )
            *(unsigned int *)((char *)&g_151620E30 + scaled_index_2) = dword_1402B29D0[table_value & 0x7F];
          else
            *(unsigned int *)((char *)&g_151620E30 + scaled_index_2) = table_value;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        else
        {
          scaled_index = 3597 * input_value;
          if ( (state_address[3] & 0xC0) != 0 )
            toupper_result = toupper(table_value) | 0x100;
          else
            toupper_result = toupper(table_value);
          dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856367 + scaled_index] = 2;
          dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856368 + scaled_index] = a2;
          dword_140404A6C[21 * (int)dword_140404A6C[scaled_index + 71856362] + 71856369 + scaled_index] = toupper_result;
          table_value = state_address[2];
          dword_140404A6C[scaled_index + 71856362] = ((unsigned __int8)dword_140404A6C[scaled_index + 71856362] + 1) & 0x3F;
        }
        *state_address = 1;
LABEL_16:
        if ( table_value == 32 )
        {
          *state_address = 1;
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 32;
          dword_140404A6C[3597 * input_value + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * input_value + 71856362] + 1) & 0x3F;
        }
        if ( table_value == 13 )
        {
          scaled_index_3 = 3597 * input_value;
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 10;
LABEL_22:
          table_value_2 = dword_140404A6C[scaled_index_3 + 71856362] + 1;
          *state_address = 1;
          dword_140404A6C[scaled_index_3 + 71856362] = table_value_2 & 0x3F;
          goto LABEL_23;
        }
        if ( table_value == 8 )
        {
          scaled_index_3 = 3597 * input_value;
          dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
          dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
          dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 8;
          goto LABEL_22;
        }
LABEL_23:
        table_value_3 = state_address[1];
        switch ( table_value_3 )
        {
          case 0xE0u:
            goto LABEL_33;
          case 0x52u:
            scaled_index_4 = 3597 * input_value;
            dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
            dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
            dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 16;
LABEL_32:
            dword_140404A6C[scaled_index_4 + 71856362] = ((unsigned __int8)dword_140404A6C[scaled_index_4 + 71856362] + 1) & 0x3F;
LABEL_33:
            *state_address = 1;
            break;
          case 0x51u:
            scaled_index_4 = 3597 * input_value;
            dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
            dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
            dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 17;
            goto LABEL_32;
          case 0x50u:
            scaled_index_4 = 3597 * input_value;
            dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
            dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
            dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 18;
            goto LABEL_32;
          case 0x4Fu:
            scaled_index_4 = 3597 * input_value;
            dword_140404A6C[3597 * input_value + 71856367 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 2;
            dword_140404A6C[3597 * input_value + 71856368 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = a2;
            dword_140404A6C[3597 * input_value + 71856369 + 21 * (int)dword_140404A6C[3597 * input_value + 71856362]] = 19;
            goto LABEL_32;
        }
LABEL_34:
        ++iteration_count;
        state_address += 5;
      }
      while ( iteration_count < (int)g_18329CC4C );
    }
  }
}

//----- (00000001400A1AE0) ----------------------------------------------------
__int64            sub_1400A1AE0(int a1)
{
  __int64 player_record_offset;
  __int64 table_value;
  __int64 scaled_index;
  __int64 table_value_2;
  double angle;
  float scaled_value;
  float weighted_sum;
  double angle_2;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_2;
  double dword2_result;
  float math_angle_difference_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A1AE0[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 0)) /* [rsp+0h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 32)) /* [rsp+20h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 48)) /* [rsp+30h] */
#define frame_float_at_64 (*(float (*))(void *)(sr_frame_1400A1AE0 + 64)) /* [rsp+40h] */
#define unused_frame_slot_72 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 72)) /* [rsp+48h] */

  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)table_value != -1 )
  {
    scaled_index = 7166 * table_value;
    if ( (int)dword_140404A6C[7166 * table_value + 280658139] > 0 )
    {
      table_value_2 = (int)dword_140404A6C[scaled_index + 280658140];
      if ( (_DWORD)table_value_2 != -1 )
      {
        *(_QWORD *)&angle = dword_140404A6C[player_record_offset + 71856293];
        matrix = xmmword_140278D30;
        frame_float_at_64 = 1.0;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&dword_1402F6188, angle);
        scaled_value = *(float *)&matrix;
        weighted_sum = *((float *)&matrix + 2);
        *(_QWORD *)&angle_2 = dword_140404A6C[scaled_index + 280651341];
        matrix = xmmword_140278D30;
        frame_float_at_64 = 1.0;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&dword_1402F6188, angle_2);
        scaled_value_2 = (float)(g_183F7C6C8 * 1.25) * 0.0009765625;
        scaled_value_3 = (float)(g_183F7C6CC * 1.25) * 0.0009765625;
        weighted_sum_2 = sub_14023F704(
                *(float *)&dword_140404A6C[1760 * table_value_2 + 278845936],
                *(float *)&dword_140404A6C[1760 * table_value_2 + 278845934]);
        *(_QWORD *)&dword2_result = DWORD2(matrix);
        *(float *)&dword2_result = sub_14023F704(
                           (float)((float)(*((float *)&matrix + 2) * scaled_value_2) + weighted_sum) + (float)(frame_float_at_64 * scaled_value_3),
                           (float)((float)(*(float *)&matrix * scaled_value_2) + scaled_value) + (float)(*((float *)&cached_xmmword_140278d30 + 2) * scaled_value_3));
        math_angle_difference_result = SR_VEC_READ_LANES(128, sr_math_angle_difference(dword2_result, weighted_sum_2), f32)[0];
        if ( math_angle_difference_result >= -1.570796326795 )
        {
          if ( math_angle_difference_result > 1.570796326795 )
            math_angle_difference_result = 1.5707964;
        }
        else
        {
          math_angle_difference_result = -1.5707964;
        }
        *(float *)&dword_140404A6C[player_record_offset + 71856293] = weighted_sum_2 + math_angle_difference_result;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_64
#undef unused_frame_slot_72

//----- (00000001400A1D20) ----------------------------------------------------
__int64            sub_1400A1D20(int a1)
{
  __int64 float_word;
  __int64 result;
  __int64 input_value;
  bool comparison_result;
  int masked_bits;
  float weighted_sum;
  unsigned int state_word;
  float combined_products;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_delta;
  float component_delta_2;
  unsigned int float_word_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;

  float_word = a1;
  result = 14388LL * a1;
  input_value = a1;
  if ( *(unsigned int *)((char *)&g_151620DBC + result) != 3 )
  {
    *(_QWORD *)((char *)&g_151620D0C + result) = 0;
    *(unsigned int *)((char *)&g_151620D14 + result) = 0;
  }
  comparison_result = g_18329CC24 == 0;
  *(unsigned int *)((char *)&g_151620D94 + result) = 1;
  *(_QWORD *)((char *)&g_151620D00 + result) = 0;
  *(unsigned int *)((char *)&g_151620D08 + result) = 0;
  *(unsigned int *)((char *)&g_151620D80 + result) = 0;
  if ( comparison_result )
  {
    masked_bits = *(unsigned int *)((char *)&g_151620CFC + result);
    if ( masked_bits != -1 )
    {
      weighted_sum = 0.0;
      state_word = g_183F7C750;
      if ( !g_183F7C754 || g_183F7C750 )
      {
        if ( g_1A4D2DCE8 >= -1.0 )
        {
          if ( g_1A4D2DCE8 <= 1.0 )
            component_delta = 0.0;
          else
            component_delta = g_1A4D2DCE8 + -1.0;
        }
        else
        {
          component_delta = g_1A4D2DCE8 + 1.0;
        }
        if ( g_1A4D2DCEC >= -1.0 )
        {
          if ( g_1A4D2DCEC <= 1.0 )
            component_delta_2 = 0.0;
          else
            component_delta_2 = g_1A4D2DCEC + -1.0;
        }
        else
        {
          component_delta_2 = g_1A4D2DCEC + 1.0;
        }
        g_1A4D2DCE8 = component_delta
                                              + (float)((float)(g_183F7C6C8 * 0.125) * 0.5);
        *(float *)&float_word_2 = component_delta_2 + (float)((float)(g_183F7C6CC * 0.125) * 0.5);
        weighted_sum_4 = *(float *)((char *)&g_151620D00 + result);
        *(float *)((char *)&g_151620D08 + result) = g_1A4D2DCE8
                                                                + *(float *)((char *)&g_151620D08 + result);
        *(unsigned int *)&g_1A4D2DCEC = float_word_2;
        *(float *)((char *)&g_151620D00 + result) = weighted_sum_4 - *(float *)&float_word_2;
        if ( !state_word )
        {
          *(float *)((char *)&g_151620D10 + result) = *(float *)((char *)&g_151620D10
                                                                             + result)
                                                                  * 0.875;
          *(float *)((char *)&g_151620D14 + result) = *(float *)((char *)&g_151620D14
                                                                             + result)
                                                                  * 0.875;
        }
      }
      else
      {
        combined_products = 1.0 - *(float *)((char *)&g_151620D9C + result);
        weighted_sum_2 = (float)((float)(g_183F7C6C8 * combined_products) * 0.0015384615)
           + *(float *)((char *)&g_151620D10 + result);
        weighted_sum_3 = (float)((float)(g_183F7C6CC * combined_products) * 0.0015384615)
            + *(float *)((char *)&g_151620D14 + result);
        if ( weighted_sum_2 >= -2.74889357189125 )
        {
          *(float *)((char *)&g_151620D10 + result) = weighted_sum_2;
          if ( weighted_sum_2 > 2.74889357189125 )
            *(unsigned int *)((char *)&g_151620D10 + result) = 1076882911;
        }
        else
        {
          *(unsigned int *)((char *)&g_151620D10 + result) = -1070600737;
        }
        if ( weighted_sum_3 >= -1.570796326795 )
        {
          *(float *)((char *)&g_151620D14 + result) = weighted_sum_3;
          if ( weighted_sum_3 > 1.570796326795 )
            *(unsigned int *)((char *)&g_151620D14 + result) = 1070141403;
        }
        else
        {
          *(unsigned int *)((char *)&g_151620D14 + result) = -1077342245;
        }
      }
      weighted_sum_5 = (float)((float)(int)g_160FC481C * 0.125)
          + *(float *)((char *)&g_151620D98 + result);
      if ( weighted_sum_5 >= 0.0 )
      {
        weighted_sum = (float)((float)(int)g_160FC481C * 0.125)
           + *(float *)((char *)&g_151620D98 + result);
        if ( weighted_sum_5 > 0.875 )
          weighted_sum = 0.875;
      }
      comparison_result = g_18329B180 == 0;
      weighted_sum_6 = *(float *)((char *)&g_151620D9C + result);
      *(float *)((char *)&g_151620D98 + result) = weighted_sum;
      *(float *)((char *)&g_151620D9C + result) = (float)((float)(weighted_sum - weighted_sum_6) * 0.0625) + weighted_sum_6;
      if ( comparison_result )
      {
        if ( BYTE2(g_183F7C978) )
          *(float *)((char *)&g_151620D0C + result) = *(float *)((char *)&g_151620D0C
                                                                             + result)
                                                                  + 0.03125;
        if ( BYTE2(g_183F7C974) )
          *(float *)((char *)&g_151620D0C + result) = *(float *)((char *)&g_151620D0C
                                                                             + result)
                                                                  - 0.03125;
        if ( LOBYTE(g_183F7C964) )
          *(float *)((char *)&g_151620D04 + result) = *(float *)((char *)&g_151620D04
                                                                             + result)
                                                                  - 1.0;
        if ( HIBYTE(g_183F7C964) )
          *(float *)((char *)&g_151620D04 + result) = *(float *)((char *)&g_151620D04
                                                                             + result)
                                                                  + 1.0;
        if ( LOBYTE(g_183F7C98C) )
          *(unsigned int *)((char *)&g_151620D80 + result) |= 4u;
        if ( LOBYTE(g_183F7CA40) )
          *(unsigned int *)((char *)&g_151620D80 + result) |= 8u;
        if ( BYTE1(g_183F7CA40) )
          dword_140404A6C[3597 * float_word + 71856325] |= 0x10u;
        if ( LOBYTE(g_183F7C968) )
          dword_140404A6C[3597 * float_word + 71856325] |= 0x800u;
      }
      sub_14009EA20(float_word, masked_bits);
      result = 3597 * input_value;
      weighted_sum_7 = *(float *)&dword_140404A6C[3597 * input_value + 71856293];
      if ( weighted_sum_7 >= -1.0 )
      {
        if ( weighted_sum_7 > 1.0 )
          dword_140404A6C[3597 * input_value + 71856293] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * input_value + 71856293] = -1082130432;
      }
      weighted_sum_8 = *(float *)&dword_140404A6C[3597 * input_value + 71856294];
      if ( weighted_sum_8 >= -1.0 )
      {
        if ( weighted_sum_8 > 1.0 )
          dword_140404A6C[3597 * input_value + 71856294] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * input_value + 71856294] = -1082130432;
      }
      weighted_sum_9 = *(float *)&dword_140404A6C[3597 * input_value + 71856295];
      if ( weighted_sum_9 >= -1.0 )
      {
        if ( weighted_sum_9 > 1.0 )
          dword_140404A6C[3597 * input_value + 71856295] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * input_value + 71856295] = -1082130432;
      }
      weighted_sum_10 = *(float *)&dword_140404A6C[3597 * input_value + 71856296];
      if ( weighted_sum_10 >= -1.0 )
      {
        if ( weighted_sum_10 > 1.0 )
          dword_140404A6C[3597 * input_value + 71856296] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * input_value + 71856296] = -1082130432;
      }
    }
  }
  return result;
}

//----- (00000001400A21B0) ----------------------------------------------------
void            sub_1400A21B0(int a1)
{
  __int64 player_record_offset;
  __int64 input_value;
  __int64 float_word;
  __int64 float_word_2;
  unsigned int scaled_index;
  signed int masked_bits;
  __int64 byte1_result;
  __int64 scaled_index_2;
  int table_value;
  float weighted_sum;
  int float_word_3;
  float state_scalar;
  unsigned int state_word;
  float state_scalar_2;
  float state_scalar_3;
  unsigned int state_address;
  float product_difference;
  float product_difference_2;
  float scaled_value;
  float product_difference_3;
  float weighted_sum_2;
  unsigned int state_word_2;
  unsigned int scaled_index_3;
  float math_angle_difference_result;
  float math_angle_difference_result_2;
  unsigned int masked_bits_2;
  float scaled_value_2;
  float *state_address_2;
  float weighted_sum_3;
  float component_delta;
  unsigned int state_word_3;
  unsigned int scaled_index_4;
  float math_angle_difference_result_3;
  unsigned int state_word_4;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float saved_limited_value;
  float limited_value;
  unsigned int state_address_3;
  float weighted_sum_7;
  float scaled_value_3;
  unsigned int masked_bits_3;
  float weighted_sum_8;
  float weighted_sum_9;
  unsigned int masked_bits_4;
  float weighted_sum_10;
  double weighted_sum_11;
  float math_angle_difference_result_4;
  float weighted_sum_12;
  float scaled_value_4;
  float component_delta_2;
  unsigned int state_address_4;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  __int64 scaled_index_5;
  int saved_float_word;

  player_record_offset = 3597LL * a1;
  input_value = a1;
  *(_QWORD *)&dword_140404A6C[player_record_offset + 71856294] = 0;
  dword_140404A6C[player_record_offset + 71856296] = 0;
  float_word = (int)dword_140404A6C[player_record_offset + 71856292];
  dword_140404A6C[player_record_offset + 71856325] = 0;
  saved_float_word = float_word;
  if ( (_DWORD)float_word != -1 )
  {
    float_word_2 = float_word;
    if ( dword_140404A6C[player_record_offset + 71856340] != 1 )
    {
      dword_140404A6C[player_record_offset + 71856293] = 0;
      dword_140404A6C[player_record_offset + 71856298] = dword_140404A6C[7166 * float_word + 280651342];
      scaled_index = dword_140404A6C[7166 * float_word + 280651357];
      dword_140404A6C[player_record_offset + 71856336] = 0;
      dword_140404A6C[player_record_offset + 71856301] = scaled_index;
    }
    if ( !g_18329CC24 )
    {
      masked_bits = -1;
      byte1_result = 28664 * float_word_2 + 40LL * (BYTE1(g_183F7CA40) != 0);
      if ( *(int *)((char *)&g_1832A4DD8 + byte1_result) > 0 )
        masked_bits = *(unsigned int *)((char *)&g_1832A4DDC + byte1_result);
      if ( dword_140404A6C[player_record_offset + 71856341] != masked_bits )
      {
        scaled_index_2 = 1760LL * masked_bits;
        if ( dword_140404A6C[scaled_index_2 + 278845898] == 28 )
          *(float *)&dword_140404A6C[player_record_offset + 71856293] = sub_14023F704(
                                                        *(float *)&dword_140404A6C[scaled_index_2 + 278845936],
                                                        *(float *)&dword_140404A6C[scaled_index_2 + 278845934]);
      }
      dword_140404A6C[player_record_offset + 71856341] = masked_bits;
      if ( masked_bits == -1 || dword_140404A6C[1760 * masked_bits + 278845898] != 18 )
      {
        dword_140404A6C[player_record_offset + 71856330] += g_160FC481C;
        g_160FC481C = 0;
      }
      else
      {
        sub_1400A2C00(a1, masked_bits);
      }
      table_value = dword_140404A6C[player_record_offset + 71856330];
      if ( table_value < 0 )
      {
        dword_140404A6C[player_record_offset + 71856330] = 0;
        dword_140404A6C[player_record_offset + 71856331] = 0;
        goto LABEL_23;
      }
      if ( table_value <= 2 )
      {
        if ( !table_value )
        {
          dword_140404A6C[player_record_offset + 71856331] = 0;
          goto LABEL_23;
        }
        if ( table_value == 1 )
        {
          dword_140404A6C[player_record_offset + 71856331] = 1031798784;
          goto LABEL_23;
        }
      }
      else
      {
        dword_140404A6C[player_record_offset + 71856330] = 2;
      }
      dword_140404A6C[player_record_offset + 71856331] = 1056964608;
LABEL_23:
      weighted_sum = *(float *)&dword_140404A6C[player_record_offset + 71856331];
      *(float *)&float_word_3 = -0.25;
      if ( weighted_sum >= -0.25 )
      {
        *(float *)&float_word_3 = 0.75;
        if ( weighted_sum <= 0.75 )
          goto LABEL_28;
        dword_140404A6C[player_record_offset + 71856331] = 1061158912;
      }
      else
      {
        dword_140404A6C[player_record_offset + 71856331] = -1098907648;
      }
      weighted_sum = *(float *)&float_word_3;
LABEL_28:
      state_scalar = g_183F7C6C8;
      state_word = g_151E46198;
      state_scalar_2 = g_183F7C6CC;
      state_scalar_3 = g_183F7C6CC;
      *(float *)&state_address = (float)((float)(weighted_sum - *(float *)&dword_140404A6C[player_record_offset + 71856332]) * 0.0625)
                     + *(float *)&dword_140404A6C[player_record_offset + 71856332];
      dword_140404A6C[player_record_offset + 71856332] = state_address;
      product_difference = state_scalar * (float)(1.0 - *(float *)&state_address);
      product_difference_2 = state_scalar_3 * (float)(1.0 - *(float *)&state_address);
      scaled_value = product_difference * 0.001953125;
      if ( state_word )
        product_difference_3 = product_difference_2 * -0.0009765625;
      else
        product_difference_3 = product_difference_2 * 0.0009765625;
      weighted_sum_2 = (float)(scaled_value * 0.5) + *(float *)&dword_140404A6C[player_record_offset + 71856309];
      *(float *)&dword_140404A6C[player_record_offset + 71856310] = (float)(product_difference_3 + *(float *)&dword_140404A6C[player_record_offset + 71856310]) * 0.9375;
      *(float *)&dword_140404A6C[player_record_offset + 71856309] = weighted_sum_2 * 0.9375;
      state_word_2 = g_18329B180;
      if ( !g_18329B180 && g_18329CC40 )
      {
        scaled_index_3 = dword_140404A6C[7166 * float_word_2 + 280651357];
        math_angle_difference_result = SR_VEC_READ_LANES(128, sr_math_angle_difference(COERCE_DOUBLE((unsigned __int64)scaled_index_3), *(float *)&dword_140404A6C[player_record_offset + 71856301]), f32)[0];
        math_angle_difference_result_2 = SR_VEC_READ_LANES(128, sr_math_angle_difference(COERCE_DOUBLE((unsigned __int64)dword_140404A6C[player_record_offset + 71856297]), math_angle_difference_result), f32)[0];
        *(float *)&masked_bits_2 = scaled_value + *(float *)&dword_140404A6C[player_record_offset + 71856299];
        scaled_value_2 = product_difference_2 * 0.001953125;
        state_address_2 = (float *)&dword_140404A6C[player_record_offset + 71856300];
        *(float *)&dword_140404A6C[player_record_offset + 71856297] = math_angle_difference_result_2;
        dword_140404A6C[player_record_offset + 71856301] = scaled_index_3;
        dword_140404A6C[player_record_offset + 71856299] = masked_bits_2;
        weighted_sum_3 = *(float *)&dword_140404A6C[player_record_offset + 71856300];
        if ( state_word )
          component_delta = weighted_sum_3 - scaled_value_2;
        else
          component_delta = weighted_sum_3 + scaled_value_2;
        state_word_3 = g_18329CC38;
        *state_address_2 = component_delta;
        dword_140404A6C[player_record_offset + 71856325] |= 2u;
LABEL_63:
        masked_bits_3 = dword_140404A6C[player_record_offset + 71856297];
        goto LABEL_64;
      }
      state_word_3 = g_18329CC38;
      if ( masked_bits == -1 || dword_140404A6C[1760 * masked_bits + 278845898] != 28 && !g_18329CC38 )
      {
        weighted_sum_10 = *(float *)&dword_140404A6C[player_record_offset + 71856301];
        *(_QWORD *)&weighted_sum_11 = dword_140404A6C[7166 * float_word_2 + 280651357];
        dword_140404A6C[player_record_offset + 71856301] = LODWORD(weighted_sum_11);
        math_angle_difference_result_4 = SR_VEC_READ_LANES(128, sr_math_angle_difference(weighted_sum_11, weighted_sum_10), f32)[0];
        weighted_sum_12 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
        scaled_value_4 = product_difference_2 * 0.001953125;
        if ( state_word )
          component_delta_2 = weighted_sum_12 - scaled_value_4;
        else
          component_delta_2 = weighted_sum_12 + scaled_value_4;
        state_address_2 = (float *)&dword_140404A6C[player_record_offset + 71856300];
        *(float *)&state_address_4 = (float)(*(float *)&dword_140404A6C[player_record_offset + 71856299] * 0.125)
                       + (float)((float)(*(float *)&dword_140404A6C[player_record_offset + 71856297] - math_angle_difference_result_4) + scaled_value);
        weighted_sum_13 = *(float *)&dword_140404A6C[player_record_offset + 71856300];
        *(float *)&dword_140404A6C[player_record_offset + 71856299] = *(float *)&dword_140404A6C[player_record_offset + 71856299] * 0.875;
        dword_140404A6C[player_record_offset + 71856297] = state_address_4;
        *(float *)&dword_140404A6C[player_record_offset + 71856300] = weighted_sum_13 * 0.875;
        *(float *)&dword_140404A6C[player_record_offset + 71856298] = (float)(weighted_sum_13 * 0.125) + component_delta_2;
        *(_QWORD *)&dword_140404A6C[player_record_offset + 71856364] = 0;
        dword_140404A6C[player_record_offset + 71856366] = 0;
        goto LABEL_63;
      }
      if ( !g_18329CC38 )
      {
        sub_1400A1AE0(a1);
        state_word_3 = g_18329CC38;
        state_word_2 = g_18329B180;
        state_address_2 = (float *)&dword_140404A6C[player_record_offset + 71856300];
        weighted_sum_8 = *(float *)&dword_140404A6C[player_record_offset + 71856299];
        weighted_sum_9 = *(float *)&dword_140404A6C[player_record_offset + 71856300];
        *(float *)&dword_140404A6C[player_record_offset + 71856299] = weighted_sum_8 * 0.875;
        *(float *)&masked_bits_3 = (float)(weighted_sum_8 * 0.125) + *(float *)&dword_140404A6C[player_record_offset + 71856297];
        *(float *)&masked_bits_4 = (float)(weighted_sum_9 * 0.125) + *(float *)&dword_140404A6C[player_record_offset + 71856298];
        dword_140404A6C[player_record_offset + 71856297] = masked_bits_3;
        *(float *)&dword_140404A6C[player_record_offset + 71856300] = weighted_sum_9 * 0.875;
        dword_140404A6C[player_record_offset + 71856298] = masked_bits_4;
        goto LABEL_64;
      }
      scaled_index_4 = dword_140404A6C[7166 * float_word_2 + 280651357];
      math_angle_difference_result_3 = *(float *)&dword_140404A6C[player_record_offset + 71856297]
          - SR_VEC_READ_LANES(128, sr_math_angle_difference(COERCE_DOUBLE((unsigned __int64)scaled_index_4), *(float *)&dword_140404A6C[player_record_offset + 71856301]), f32)[0];
      dword_140404A6C[player_record_offset + 71856301] = scaled_index_4;
      if ( math_angle_difference_result_3 < -3.14159265359 )
        math_angle_difference_result_3 = math_angle_difference_result_3 + 6.28318530718;
      if ( math_angle_difference_result_3 > 3.14159265359 )
        math_angle_difference_result_3 = math_angle_difference_result_3 - 6.28318530718;
      state_word_4 = g_183F7C750;
      weighted_sum_4 = (float)(product_difference * 0.00048828125) + math_angle_difference_result_3;
      *(float *)&dword_140404A6C[player_record_offset + 71856297] = weighted_sum_4;
      if ( !state_word_4 )
        *(float *)&dword_140404A6C[player_record_offset + 71856364] = (float)(*(float *)&g_151E461A4 * state_scalar_2)
                                                  + *(float *)&dword_140404A6C[player_record_offset + 71856364];
      weighted_sum_5 = *(float *)&dword_140404A6C[player_record_offset + 71856364];
      if ( weighted_sum_5 >= -1.570796326795 )
      {
        if ( weighted_sum_5 > 1.570796326795 )
        {
          weighted_sum_5 = 1.5707964;
          dword_140404A6C[player_record_offset + 71856364] = 1070141403;
        }
      }
      else
      {
        weighted_sum_5 = -1.5707964;
        dword_140404A6C[player_record_offset + 71856364] = -1077342245;
      }
      weighted_sum_6 = *(float *)&dword_140404A6C[player_record_offset + 71856365];
      saved_limited_value = 0.03125;
      limited_value = fmaxf((float)(weighted_sum_5 - weighted_sum_6) * 0.125, -0.03125);
      if ( limited_value <= 0.03125 )
        saved_limited_value = limited_value;
      state_address_2 = (float *)&dword_140404A6C[player_record_offset + 71856300];
      *(float *)&state_address_3 = (float)(saved_limited_value - (float)(*(float *)&dword_140404A6C[player_record_offset + 71856366] * 0.25))
                     + *(float *)&dword_140404A6C[player_record_offset + 71856366];
      dword_140404A6C[player_record_offset + 71856366] = state_address_3;
      *(float *)&dword_140404A6C[player_record_offset + 71856365] = *(float *)&state_address_3 + weighted_sum_6;
      *(float *)&dword_140404A6C[player_record_offset + 71856300] = weighted_sum_5 * 0.125;
      if ( state_word_4 )
      {
        weighted_sum_7 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
        scaled_value_3 = product_difference_2 * 0.0009765625;
        if ( !state_word )
        {
          *(float *)&masked_bits_3 = weighted_sum_4;
          *(float *)&dword_140404A6C[player_record_offset + 71856298] = weighted_sum_7 + scaled_value_3;
LABEL_64:
          if ( *(float *)&masked_bits_3 >= -2.74889357189125 )
          {
            if ( *(float *)&masked_bits_3 > 2.74889357189125 )
              dword_140404A6C[player_record_offset + 71856297] = 1076882911;
          }
          else
          {
            dword_140404A6C[player_record_offset + 71856297] = -1070600737;
          }
          weighted_sum_14 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
          if ( weighted_sum_14 >= -1.570796326795 )
          {
            if ( weighted_sum_14 > 1.570796326795 )
              dword_140404A6C[player_record_offset + 71856298] = 1070141403;
          }
          else
          {
            dword_140404A6C[player_record_offset + 71856298] = -1077342245;
          }
          weighted_sum_15 = *(float *)&dword_140404A6C[player_record_offset + 71856299];
          if ( weighted_sum_15 >= -2.74889357189125 )
          {
            if ( weighted_sum_15 > 2.74889357189125 )
              dword_140404A6C[player_record_offset + 71856299] = 1076882911;
          }
          else
          {
            dword_140404A6C[player_record_offset + 71856299] = -1070600737;
          }
          if ( *state_address_2 >= -1.570796326795 )
          {
            if ( *state_address_2 > 1.570796326795 )
              *state_address_2 = 1.5707964;
          }
          else
          {
            *state_address_2 = -1.5707964;
          }
          if ( !state_word_2 )
          {
            if ( BYTE2(g_183F7C978) )
              *(float *)&dword_140404A6C[player_record_offset + 71856296] = *(float *)&dword_140404A6C[player_record_offset + 71856296] + 1.0;
            if ( BYTE2(g_183F7C974) )
              *(float *)&dword_140404A6C[player_record_offset + 71856296] = *(float *)&dword_140404A6C[player_record_offset + 71856296] - 1.0;
            if ( LOBYTE(g_183F7C964) )
              *(float *)&dword_140404A6C[player_record_offset + 71856294] = *(float *)&dword_140404A6C[player_record_offset + 71856294] - 1.0;
            if ( HIBYTE(g_183F7C964) )
              *(float *)&dword_140404A6C[player_record_offset + 71856294] = *(float *)&dword_140404A6C[player_record_offset + 71856294] + 1.0;
            if ( LOBYTE(g_183F7C98C) )
              dword_140404A6C[3597 * input_value + 71856325] |= 4u;
            if ( state_word_3 )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x20u;
            if ( toggle_183f7c2fc && g_184397BA4 )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x20u;
            if ( BYTE1(g_183F7C974) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x1000u;
            if ( LOBYTE(g_183F7C9AC) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x40000u;
            if ( BYTE1(g_183F7CA40) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x10u;
            if ( LOBYTE(g_183F7CA40) )
              dword_140404A6C[3597 * input_value + 71856325] |= 8u;
            if ( BYTE1(g_183F7C97C) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x80000u;
            if ( masked_bits != -1 )
            {
              scaled_index_5 = 1760LL * masked_bits;
              if ( ((dword_140404A6C[scaled_index_5 + 278845898] - 25) & 0xFFFFFFF7) == 0 && dword_140404A6C[scaled_index_5 + 278846052] == 1 )
                sub_1400A2DC0(a1, masked_bits);
            }
            if ( LOBYTE(g_183F7C968) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x800u;
            if ( BYTE1(g_183F7C968) )
              dword_140404A6C[3597 * input_value + 71856325] |= 0x2000u;
          }
          sub_14009EA20(a1, saved_float_word);
          return;
        }
        *(float *)&dword_140404A6C[player_record_offset + 71856298] = weighted_sum_7 - scaled_value_3;
      }
      *(float *)&masked_bits_3 = weighted_sum_4;
      goto LABEL_64;
    }
  }
}

// 1400A2386: conditional instruction was optimized away because eax.4==2

//----- (00000001400A2DC0) ----------------------------------------------------
__int64            sub_1400A2DC0(int a1, unsigned int a2)
{
  __int64 result;

  if ( !BYTE2(g_183F7C9C0) && BYTE2(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9B8) && BYTE1(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C9B8) && BYTE2(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C9B8) && HIBYTE(g_183F7C7B8) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C9BC) && LOBYTE(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9BC) && BYTE1(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C9BC) && BYTE2(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C9BC) && HIBYTE(g_183F7C7BC) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C9C0) && LOBYTE(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C9C0) && BYTE1(g_183F7C7C0) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C984) && HIBYTE(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C97C) && BYTE2(g_183F7C77C) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C97C) && HIBYTE(g_183F7C77C) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C980) && LOBYTE(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C980) && BYTE1(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C980) && BYTE2(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(g_183F7C980) && HIBYTE(g_183F7C780) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(g_183F7C984) && LOBYTE(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(g_183F7C984) && BYTE1(g_183F7C784) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(g_183F7C984) )
  {
    if ( BYTE2(g_183F7C784) )
    {
      dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
      dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
      dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
      result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
      dword_140404A6C[3597 * a1 + 71856362] = result;
    }
  }
  return result;
}

//----- (00000001400A3770) ----------------------------------------------------
void            sub_1400A3770(int a1)
{
  __int64 player_record_offset;
  unsigned int xor_value;
  int state_word;
  unsigned int integer_sum;
  int saved_state_word;
  __int64 scaled_index;
  char integer_difference;
  unsigned __int8 integer_difference_2;
  int state_word_2;
  unsigned __int8 saved_state_word_2;
  unsigned int integer_sum_2;
  int cached_state_word;
  __int64 scaled_index_2;
  char integer_difference_3;

  if ( game_type == 4 && (player_record_offset = 3597LL * a1, dword_140404A6C[player_record_offset + 71856266]) )
  {
    if ( dword_140404A6C[player_record_offset + 71856342] == 1
      && HIBYTE(g_183F7C984)
      && !HIBYTE(g_183F7C784) )
    {
      xor_value = g_183F79DEC ^ 1;
      g_183F79DEC ^= 1u;
    }
    else
    {
      xor_value = g_183F79DEC;
    }
    if ( xor_value )
    {
      state_word = g_183F79DE4;
      if ( BYTE2(g_183F7C97C) )
        state_word = -1;
      g_183F79DE4 = state_word;
      if ( LOBYTE(g_183F7C98C) )
      {
        if ( !LOBYTE(g_183F7C78C) )
        {
          if ( state_word >= 0 )
          {
            LOBYTE(integer_sum) = state_word + 1;
            if ( BYTE1(g_183F7CA40) )
              LOBYTE(integer_sum) = state_word - 1;
          }
          else
          {
            LOBYTE(integer_sum) = 0;
            LOBYTE(state_word) = -1;
          }
          integer_sum = (unsigned __int8)integer_sum;
          saved_state_word = (unsigned __int8)state_word;
          while ( 1 )
          {
            scaled_index = 7166LL * integer_sum;
            if ( dword_140404A6C[scaled_index + 280651303] )
            {
              if ( (int)dword_140404A6C[scaled_index + 280651318] > 0 )
                break;
            }
            integer_difference = 1;
            if ( BYTE1(g_183F7CA40) )
              integer_difference = -1;
            integer_sum = (unsigned __int8)(integer_sum + integer_difference);
            if ( integer_sum == saved_state_word )
              return;
          }
          g_183F79DE4 = integer_sum;
        }
      }
    }
  }
  else
  {
    integer_difference_2 = 0;
    g_183F79DEC = 0;
    if ( (game_type == 3 || game_type - 5 <= 2)
      && !g_183F79DE8
      && !g_18329B180 )
    {
      state_word_2 = g_183F79DE4;
      if ( BYTE2(g_183F7C97C) )
        state_word_2 = -1;
      if ( LOBYTE(g_183F7C98C) && !LOBYTE(g_183F7C78C) )
      {
        saved_state_word_2 = state_word_2;
        if ( state_word_2 >= 0 )
        {
          integer_difference_2 = state_word_2 + 1;
          if ( BYTE1(g_183F7CA40) )
            integer_difference_2 = state_word_2 - 1;
        }
        else
        {
          saved_state_word_2 = -1;
        }
        integer_sum_2 = integer_difference_2;
        cached_state_word = saved_state_word_2;
        while ( 1 )
        {
          scaled_index_2 = 7166LL * integer_sum_2;
          if ( dword_140404A6C[scaled_index_2 + 280651303] )
          {
            if ( (int)dword_140404A6C[scaled_index_2 + 280651318] > 0 && dword_140404A6C[scaled_index_2 + 280658438] <= 2 )
              break;
          }
          integer_difference_3 = 1;
          if ( BYTE1(g_183F7CA40) )
            integer_difference_3 = -1;
          integer_sum_2 = (unsigned __int8)(integer_sum_2 + integer_difference_3);
          if ( integer_sum_2 == cached_state_word )
            goto LABEL_46;
        }
        state_word_2 = integer_sum_2;
      }
LABEL_46:
      if ( game_state != 2 )
        state_word_2 = -1;
      g_183F79DE4 = state_word_2;
    }
  }
}

//----- (00000001400A3D70) ----------------------------------------------------
__int64 sub_1400A3D70()
{
  int i;
  char masked_bits;
  int iteration_count;
  __int64 iteration_count_2;
  char masked_bits_2;
  unsigned int callee_output_word;

  for ( i = g_1862AE020; i < (int)g_1862AE024; g_1862AE020 = ++i )
  {
    masked_bits = *((_BYTE *)&g_1862AE028 + i);
    if ( (unsigned __int8)(masked_bits - 48) <= 9u )
      break;
    if ( masked_bits == 45 )
      break;
  }
  iteration_count = 0;
  if ( i < (int)g_1862AE024 )
  {
    iteration_count_2 = 0;
    do
    {
      if ( iteration_count_2 >= 255 )
        break;
      masked_bits_2 = *((_BYTE *)&g_1862AE028 + i);
      if ( (unsigned __int8)(masked_bits_2 - 48) > 9u && masked_bits_2 != 45 )
        break;
      *((_BYTE *)&g_1863AE028 + iteration_count_2) = masked_bits_2;
      ++iteration_count;
      ++iteration_count_2;
      i = ++g_1862AE020;
    }
    while ( (int)g_1862AE020 < (int)g_1862AE024 );
  }
  *((_BYTE *)&g_1863AE028 + iteration_count) = 0;
  crt_sscanf((__int64)&g_1863AE028, "%d", &callee_output_word);
  return callee_output_word;
}

//----- (00000001400A3E30) ----------------------------------------------------
__int64 sub_1400A3E30()
{
  struct hostent *returned_pointer;
  struct hostent *record_pointer;
  _QWORD *loaded_record_pointer;
  unsigned int state_word;
  __int64 element_index;
  int ntohl_sr_result;
  __int64 state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3E30[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400A3E30 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 544)) /* [rsp+220h] */

  if ( sub_140199037(name, 512) != -1 )
  {
    returned_pointer = sub_140199031(name);
    record_pointer = returned_pointer;
    if ( returned_pointer )
    {
      loaded_record_pointer = *((_QWORD **)returned_pointer + 3);
      state_word = g_16B0A7EE4;
      if ( *loaded_record_pointer )
      {
        element_index = 0;
        do
        {
          if ( element_index >= 16 )
            break;
          ntohl_sr_result = ntohl_sr(*(unsigned int *)loaded_record_pointer[element_index]);
          state_word_2 = (int)g_16B0A7EE4;
          ++element_index;
          dword_140404A6C[2 * g_16B0A7EE4 + 179457309] = ntohl_sr_result | 0xFF;
          LOWORD(dword_140404A6C[2 * state_word_2 + 179457310]) = g_18539D3F8;
          state_word = state_word_2 + 1;
          g_16B0A7EE4 = state_word;
          loaded_record_pointer = *((_QWORD **)record_pointer + 3);
        }
        while ( loaded_record_pointer[element_index] );
      }
      g_16B0A7EE0 = state_word;
    }
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef name
#undef unused_frame_slot_544

//----- (00000001400A4560) ----------------------------------------------------
__int64 sub_1400A4560()
{
  unsigned int iteration_count;
  unsigned int *state_address;

  iteration_count = 0;
  state_address = &g_182A7D580;
  while ( *state_address )
  {
    ++iteration_count;
    state_address += 3;
    if ( (__int64)state_address >= (__int64)&g_182A7E180 )
      return 0xFFFFFFFFLL;
  }
  return iteration_count;
}

//----- (00000001400A4620) ----------------------------------------------------
__int64            sub_1400A4620(int a1, float a2)
{
  __int64 replication_peer_offset;
  unsigned int iteration_count;
  __int64 iteration_count_2;
  unsigned int *state_address;
  unsigned int integer_difference;
  float weighted_sum;

  replication_peer_offset = 47224LL * a1;
  iteration_count = 0;
  iteration_count_2 = 0;
  state_address = &dword_140404A6C[replication_peer_offset + 438887428];
  while ( *state_address )
  {
    ++iteration_count;
    ++iteration_count_2;
    state_address += 10;
    if ( iteration_count_2 >= 8 )
    {
      integer_difference = -1;
      weighted_sum = 65536.0;
      if ( (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887426]
                 / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887427] + 0.0099999998)) < 65536.0 )
      {
        integer_difference = 0;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887436]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887437] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 1;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887446]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887447] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 2;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887456]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887457] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 3;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887466]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887467] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 4;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887476]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887477] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 5;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887486]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887487] + 0.0099999998);
      }
      if ( weighted_sum > (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        integer_difference = 6;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887496]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887497] + 0.0099999998);
      }
      if ( weighted_sum <= (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887436 + replication_peer_offset]
                       / (float)(*(float *)&dword_140404A6C[10 * (int)integer_difference + 438887437 + replication_peer_offset] + 0.0099999998)) )
      {
        if ( integer_difference != -1 )
          goto LABEL_21;
      }
      else
      {
        integer_difference = 7;
        weighted_sum = *(float *)&dword_140404A6C[replication_peer_offset + 438887506]
           / (float)(*(float *)&dword_140404A6C[replication_peer_offset + 438887507] + 0.0099999998);
LABEL_21:
        if ( weighted_sum > a2 )
          return integer_difference;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return iteration_count;
}

//----- (00000001400A4DD0) ----------------------------------------------------
__int64            sub_1400A4DD0(__int64 a1, int a2)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 float_word;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float state_address;
  float state_address_2;
  float state_address_3;
  float state_address_4;
  __int64 scaled_index_8;
  float scaled_value;
  float scaled_value_2;
  __int64 iteration_count;
  float weighted_sum;
  float *buffer_cursor;
  __int64 loaded_word;
  __int64 running_total;
  __int64 scaled_index_9;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float product_difference;
  float saved_scaled_ratio;
  float scaled_value_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float scaled_ratio_4;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A4DD0[112];
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400A4DD0 + 0)) /* [rsp+0h] */
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_1400A4DD0 + 8)) /* [rsp+8h] */
#define frame_float_at_16 (*(float (*))(void *)(sr_frame_1400A4DD0 + 16)) /* [rsp+10h] */
#define scratch_buffer (*(_OWORD (*)[4])(void *)(sr_frame_1400A4DD0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_96 (*(__int64 (*))(void *)(sr_frame_1400A4DD0 + 96)) /* [rsp+60h] */

  memcpy(&scratch_buffer[0], &xmmword_140278F80, 16);
  memcpy(&scratch_buffer[1], &xmmword_140279020, 16);
  input_value = a2;
  record_word_offset = 5210LL * a2;
  float_word = 60LL * (int)dword_140404A6C[5210 * a2 + 129716771];
  scaled_index = 60LL * (int)dword_140404A6C[5210 * a2 + 129716772];
  scaled_index_2 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716774];
  scaled_index_3 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716773];
  scaled_index_4 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716779];
  scaled_index_5 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716780];
  scaled_index_6 = 60LL * (int)dword_140404A6C[5210 * a2 + 129716782];
  scaled_index_7 = 60LL * (int)dword_140404A6C[record_word_offset + 129716781];
  state_address = (float)((float)(*(float *)&dword_140404A6C[float_word + 73007026] + *(float *)&dword_140404A6C[scaled_index + 73007026])
              + (float)(*(float *)&dword_140404A6C[scaled_index_2 + 73007026] + *(float *)&dword_140404A6C[scaled_index_3 + 73007026]))
      + (float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 73007026] + *(float *)&dword_140404A6C[scaled_index_7 + 73007026])
              + (float)(*(float *)&dword_140404A6C[scaled_index_4 + 73007026] + *(float *)&dword_140404A6C[scaled_index_5 + 73007026]));
  state_address_2 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_7 + 73007027] + *(float *)&dword_140404A6C[scaled_index_6 + 73007027])
              + (float)(*(float *)&dword_140404A6C[scaled_index_4 + 73007027] + *(float *)&dword_140404A6C[scaled_index_5 + 73007027]))
      + (float)((float)(*(float *)&dword_140404A6C[float_word + 73007027] + *(float *)&dword_140404A6C[scaled_index + 73007027])
              + (float)(*(float *)&dword_140404A6C[scaled_index_3 + 73007027] + *(float *)&dword_140404A6C[scaled_index_2 + 73007027]));
  state_address_3 = (float)(*(float *)&dword_140404A6C[scaled_index_7 + 73007028] + *(float *)&dword_140404A6C[scaled_index_6 + 73007028])
      + (float)(*(float *)&dword_140404A6C[scaled_index_5 + 73007028] + *(float *)&dword_140404A6C[scaled_index_4 + 73007028]);
  state_address_4 = (float)(*(float *)&dword_140404A6C[scaled_index_3 + 73007028] + *(float *)&dword_140404A6C[scaled_index_2 + 73007028])
      + (float)(*(float *)&dword_140404A6C[scaled_index + 73007028] + *(float *)&dword_140404A6C[float_word + 73007028]);
  scaled_index_8 = 5210 * input_value;
  scaled_value = state_address * 0.125;
  scaled_value_2 = state_address_2 * 0.125;
  *(_QWORD *)a1 = 0;
  iteration_count = 0;
  weighted_sum = (float)(state_address_3 + state_address_4) * 0.125;
  *(_DWORD *)(a1 + 8) = 0;
  float_word_2 = 0;
  frame_float_at_16 = 0.0;
  saved_weighted_sum = weighted_sum;
  do
  {
    buffer_cursor = (float *)&float_word_2;
    loaded_word = 5210 * input_value + *((int *)scratch_buffer + iteration_count);
    running_total = 0;
    do
    {
      scaled_index_9 = 60LL * (int)dword_140404A6C[loaded_word + 129716769];
      weighted_sum_2 = *(float *)&dword_140404A6C[running_total + 129716727 + scaled_index_8];
      weighted_sum_3 = *(float *)&dword_140404A6C[running_total + 129716726 + scaled_index_8];
      weighted_sum_4 = *(float *)&dword_140404A6C[running_total + 129716728 + scaled_index_8];
      combined_products = *(float *)&dword_140404A6C[scaled_index_9 + 73007028] - weighted_sum;
      combined_products_2 = *(float *)&dword_140404A6C[scaled_index_9 + 73007026] - scaled_value;
      combined_products_3 = *(float *)&dword_140404A6C[scaled_index_9 + 73007027] - scaled_value_2;
      combined_products_4 = -(float)((float)((float)(combined_products_2 * weighted_sum_3) + (float)(combined_products_3 * weighted_sum_2)) + (float)(combined_products * weighted_sum_4));
      weighted_sum_5 = (float)(weighted_sum_3 * combined_products_4) + combined_products_2;
      weighted_sum_6 = (float)(weighted_sum_4 * combined_products_4) + combined_products;
      weighted_sum_7 = (float)(weighted_sum_2 * combined_products_4) + combined_products_3;
      square_root = fsqrt((float)((float)(weighted_sum_7 * weighted_sum_7) + (float)(weighted_sum_5 * weighted_sum_5)) + (float)(weighted_sum_6 * weighted_sum_6));
      if ( square_root == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = weighted_sum_5 * (float)(1.0 / square_root);
        scaled_ratio_2 = weighted_sum_7 * (float)(1.0 / square_root);
        scaled_ratio_3 = weighted_sum_6 * (float)(1.0 / square_root);
      }
      weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_9 + 73007032];
      weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_9 + 73007034];
      weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_9 + 73007033];
      running_total += 3;
      product_difference = (float)(scaled_ratio * weighted_sum_9) - (float)(scaled_ratio_3 * weighted_sum_8);
      saved_scaled_ratio = scaled_ratio_2;
      *buffer_cursor = square_root + *buffer_cursor;
      scaled_value_3 = scaled_ratio_2 * weighted_sum_8;
      weighted_sum = saved_weighted_sum;
      *(float *)((char *)buffer_cursor + a1 - (_QWORD)&float_word_2) = (float)((float)(product_difference * weighted_sum_2)
                                                          + (float)((float)((float)(scaled_ratio_3 * weighted_sum_10) - (float)(saved_scaled_ratio * weighted_sum_9))
                                                                  * weighted_sum_3))
                                                  + (float)((float)((float)(scaled_value_3 - (float)(scaled_ratio * weighted_sum_10)) * weighted_sum_4)
                                                          + *(float *)((char *)buffer_cursor + a1 - (_QWORD)&float_word_2));
      ++buffer_cursor;
    }
    while ( running_total < 9 );
    ++iteration_count;
  }
  while ( iteration_count < 8 );
  weighted_sum_11 = *(float *)(a1 + 4) / *((float *)&float_word_2 + 1);
  weighted_sum_12 = *(float *)(a1 + 8) / frame_float_at_16;
  scaled_ratio_4 = *(float *)a1 / *(float *)&float_word_2;
  *(float *)(a1 + 4) = weighted_sum_11;
  *(float *)(a1 + 8) = weighted_sum_12;
  *(float *)a1 = scaled_ratio_4;
  weighted_sum_13 = scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * input_value + 129716726];
  *(float *)a1 = weighted_sum_13;
  weighted_sum_14 = scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * input_value + 129716727];
  *(float *)(a1 + 4) = weighted_sum_14;
  weighted_sum_15 = scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * input_value + 129716728];
  *(float *)(a1 + 8) = weighted_sum_15;
  state_address_5 = (float)(weighted_sum_11 * *(float *)&dword_140404A6C[5210 * input_value + 129716729]) + weighted_sum_13;
  *(float *)a1 = state_address_5;
  state_address_6 = (float)(weighted_sum_11 * *(float *)&dword_140404A6C[5210 * input_value + 129716730]) + weighted_sum_14;
  *(float *)(a1 + 4) = state_address_6;
  state_address_7 = (float)(weighted_sum_11 * *(float *)&dword_140404A6C[5210 * input_value + 129716731]) + weighted_sum_15;
  *(float *)(a1 + 8) = state_address_7;
  *(float *)a1 = (float)(weighted_sum_12 * *(float *)&dword_140404A6C[5210 * input_value + 129716732]) + state_address_5;
  *(float *)(a1 + 4) = (float)(weighted_sum_12 * *(float *)&dword_140404A6C[5210 * input_value + 129716733]) + state_address_6;
  *(float *)(a1 + 8) = (float)(weighted_sum_12 * *(float *)&dword_140404A6C[5210 * input_value + 129716734]) + state_address_7;
  return 0; /* the function has no caller */
}
#undef saved_weighted_sum
#undef float_word_2
#undef frame_float_at_16
#undef scratch_buffer
#undef unused_frame_slot_96

//----- (00000001400A5340) ----------------------------------------------------
__int64 sub_1400A5340()
{
  _WORD *state_address;
  bool comparison_result;
  char *destination_text;

  sub_14024B8D4(&g_182A7D140, 512);
  ((void (           *)(_QWORD, unsigned int *, __int64))SHGetSpecialFolderPathA)(0, &g_182A7D340, 5);
  crt_chdir(&g_182A7D340);
  if ( (unsigned int)crt_chdir(Path) == -1 )
  {
    mkdir(Path);
    crt_chdir(Path);
  }
  state_address = (_WORD *)((char *)&g_182A7D33C + 3);
  do
  {
    comparison_result = *((_BYTE *)state_address + 1) == 0;
    state_address = (_WORD *)((char *)state_address + 1);
  }
  while ( !comparison_result );
  destination_text = (char *)&g_182A7D33C + 3;
  *state_address = 47;
  do
    comparison_result = *++destination_text == 0;
  while ( !comparison_result );
  strcpy(destination_text, Path);
  return crt_chdir(&g_182A7D140);
}

// 14026E550: invalid function type 'BOOL (__stdcall *SHGetSpecialFolderPathA)(HWND hwnd, LPSTR pszPath, int csidl, BOOL fCreate)' has been ignored

//----- (00000001400A5400) ----------------------------------------------------
__int64            sub_1400A5400(__int64 a1)
{
  int element_index;
  _BYTE *buffer_cursor;
  __int64 i;
  char loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5400[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400A5400 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1400A5400 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 560)) /* [rsp+230h] */

  element_index = 0;
  buffer_cursor = scratch_buffer;
  for ( i = 0; i < 16; ++i )
  {
    loaded_word = *(_BYTE *)(i + a1);
    if ( !loaded_word )
      break;
    if ( (unsigned __int8)(loaded_word - 48) <= 9u )
    {
      ++element_index;
      *buffer_cursor++ = loaded_word;
    }
  }
  if ( (unsigned __int64)element_index >= 0x200 )
    sub_1401F8694();
  scratch_buffer[element_index] = 0;
  crt_sscanf((__int64)scratch_buffer, "%u", &callee_output_word);
  return (unsigned int)callee_output_word; /* 0x1400A546E: mov eax, dword ptr [rsp + 0x20] */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (00000001400A54F0) ----------------------------------------------------
__int64 sub_1400A54F0()
{
  return (unsigned __int16)sub_14009DE80();
}

//----- (00000001400A5C50) ----------------------------------------------------
void            sub_1400A5C50(float *a1, float *a2, float *a3)
{
  float component_delta;
  float square_root;
  float expf_result;
  float expf_result_2;
  float expf_result_3;

  component_delta = a3[2] - a2[2];
  square_root = fsqrt(
         (float)((float)((float)(a3[1] - a2[1]) * (float)(a3[1] - a2[1]))
               + (float)((float)(*a3 - *a2) * (float)(*a3 - *a2)))
       + (float)(component_delta * component_delta))
     * 0.029296875;
  expf_result = expf(-(float)(*(float *)&dword_1402B23D0 * square_root));
  expf_result_2 = expf(-(float)(*(float *)&dword_1402B23D4 * square_root));
  expf_result_3 = expf(-(float)(*(float *)&dword_1402B23D8 * square_root));
  *a1 = expf_result;
  a1[1] = expf_result_2;
  a1[2] = expf_result_3;
}

//----- (00000001400A65B0) ----------------------------------------------------
__int64            sub_1400A65B0(_DWORD *a1, int *a2)
{
  unsigned __int64 integer_quotient;
  __int64 SystemTimeAsFileTime;

  if ( a1 )
  {
    ((void (           *)(__int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    integer_quotient = (SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = integer_quotient / 0xF4240;
    a1[1] = integer_quotient % 0xF4240;
  }
  if ( a2 )
  {
    if ( !g_1449815C8 )
    {
      sub_140238064();
      ++g_1449815C8;
    }
    *a2 = (int)*sub_140237128() / 60;
    a2[1] = *sub_140237118();
  }
  return 0;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored

//----- (00000001400A6670) ----------------------------------------------------
__int64 sub_1400A6670()
{
  __int64 int64_result;
  __int64 result;
  unsigned int saved_call_status;

  int64_result = ((__int64 (           *)(     __int16 *))LoadLibraryW)(L"opengl32.dll");
  g_144980D88 = int64_result;
  if ( !int64_result )
    return 0;
  g_144980D90 = ((__int64 (           *)(__int64,      char *))GetProcAddress)(
                                            int64_result,
                                            "wglGetProcAddress");
  if ( !g_144980D90 )
    return 0;
  result = sub_1400A6700((__int64 (           *)(     char *))sub_14009E190);
  saved_call_status = result;
  if ( g_144980D88 )
  {
    ((void (*)(void))FreeLibrary)();
    result = saved_call_status;
    g_144980D88 = 0;
  }
  return result;
}

// 14026E2F8: invalid function type 'HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)' has been ignored
// 14026E300: invalid function type 'FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)' has been ignored
// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (00000001400A74D0) ----------------------------------------------------
__int64            sub_1400A74D0(int a1, float a2, float a3)
{
  float state_scalar;
  int masked_bits;
  __int64 record_word_offset;
  float combined_products;
  unsigned int float_word;
  int state_address;
  unsigned int table_value;
  int saved_state_address;
  signed int scaled_index;
  signed int *loaded_record_pointer;

  state_scalar = (float)(int)g_160FC481C;
  masked_bits = 0;
  g_160FC481C = 0;
  record_word_offset = 122LL * a1;
  combined_products = *(float *)&dword_140404A6C[record_word_offset + 70087232] - (float)(state_scalar * 16.0);
  if ( combined_products < 0.0 )
    combined_products = 0.0;
  float_word = dword_140404A6C[record_word_offset + 70087234];
  *(float *)&dword_140404A6C[record_word_offset + 70087232] = combined_products;
  if ( combined_products > *(float *)&float_word )
  {
    dword_140404A6C[record_word_offset + 70087232] = float_word;
    combined_products = *(float *)&float_word;
  }
  state_address = 0;
  if ( (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[record_word_offset + 70087230] + *(float *)&dword_140404A6C[record_word_offset + 70087228])) >= 0 )
    state_address = (int)(float)(a2 / (float)(*(float *)&dword_140404A6C[record_word_offset + 70087230] + *(float *)&dword_140404A6C[record_word_offset + 70087228]));
  table_value = dword_140404A6C[record_word_offset + 70087227];
  saved_state_address = table_value - 1;
  if ( state_address <= (int)(table_value - 1) )
    saved_state_address = state_address;
  if ( (int)(float)((float)(combined_products + a3)
                  / (float)(*(float *)&dword_140404A6C[record_word_offset + 70087230] + *(float *)&dword_140404A6C[record_word_offset + 70087229])) >= 0 )
    masked_bits = (int)(float)((float)(combined_products + a3)
                    / (float)(*(float *)&dword_140404A6C[record_word_offset + 70087230] + *(float *)&dword_140404A6C[record_word_offset + 70087229]));
  scaled_index = table_value * masked_bits + saved_state_address;
  if ( scaled_index > (int)(dword_140404A6C[record_word_offset + 70087220] - 1) )
  {
    dword_140404A6C[record_word_offset + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[record_word_offset + 70087223] = scaled_index;
  if ( scaled_index == -1 || g_151042650 || !g_1510426EC || a1 != g_150F61174 )
    return 0;
  loaded_record_pointer = *(signed int **)&dword_140404A6C[record_word_offset + 70087225];
  dword_140404A6C[record_word_offset + 70087222] = scaled_index;
  if ( loaded_record_pointer )
    *loaded_record_pointer = scaled_index;
  return 1;
}

//----- (00000001400A7620) ----------------------------------------------------
__int64            sub_1400A7620(     __m128i *a1)
{
       __m128i *loaded_record_pointer;
       __m128i *loaded_record_pointer_2;
  __int64 element_index;
       __m128i *packed_vector;
  char **text_cursor;
  int iteration_count;
  char *text_cursor_2;
  char *byte_cursor;
  int table_value;
  int scaled_index;

  if ( (int)g_144980D98 >= 3 )
  {
    text_cursor = *(char ***)&g_144980DB0;
    if ( g_144980DB0 )
    {
      iteration_count = 0;
      if ( (int)g_144980DA8 > 0 )
      {
        while ( 1 )
        {
          text_cursor_2 = *text_cursor;
          if ( *text_cursor )
          {
            byte_cursor = (char *)((char *)a1 - text_cursor_2);
            do
            {
              table_value = (unsigned __int8)byte_cursor[(_QWORD)text_cursor_2];
              scaled_index = (unsigned __int8)*text_cursor_2 - table_value;
              if ( scaled_index )
                break;
              ++text_cursor_2;
            }
            while ( table_value );
            if ( !scaled_index )
              break;
          }
          ++iteration_count;
          ++text_cursor;
          if ( iteration_count >= (int)g_144980DA8 )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  loaded_record_pointer = *(     __m128i **)(unsigned int *)&g_144980DA0;
  if ( !g_144980DA0 )
    return 0;
  if ( !a1 )
    return 0;
  loaded_record_pointer_2 = sub_1401FC614(*(     __m128i **)(unsigned int *)&g_144980DA0, a1);
  if ( !loaded_record_pointer_2 )
    return 0;
  while ( 1 )
  {
    element_index = -1;
    do
      ++element_index;
    while ( SR_VEC_PTR_LANES(128, a1, i8)[element_index] );
    packed_vector = (     __m128i *)((char *)loaded_record_pointer_2 + element_index);
    if ( (loaded_record_pointer_2 == loaded_record_pointer || SR_VEC_LANES(128, loaded_record_pointer_2[-1], i8)[15] == 32) && (SR_VEC_PTR_LANES(128, packed_vector, i8)[0] & 0xDF) == 0 )
      break;
    loaded_record_pointer = packed_vector;
    loaded_record_pointer_2 = sub_1401FC614(packed_vector, a1);
    if ( !loaded_record_pointer_2 )
      return 0;
  }
  return 1;
}

//----- (00000001400A7A40) ----------------------------------------------------
void            sub_1400A7A40(float a1, float a2, float a3, float a4, float a5)
{
  float input_value = a2; // xmm1_4: y0 (0x1400A7A7C); Hex-Rays had lost it
  float input_value_2 = a3; // xmm2_4: x1 (0x1400A7A62)
  float cached_input_value;
  float cached_input_value_2;
  float component_delta;
  float component_delta_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  char iteration_count;
  __int64 element_index;
  float component_delta_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float component_sum;
  float component_sum_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 masked_bits;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float component_sum_3;
  float component_sum_4;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A7A40[16];
#define position (*(float (*))(void *)(sr_frame_1400A7A40 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400A7A40 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400A7A40 + 8)) /* [rsp+28h] */

  cached_input_value = input_value_2;
  cached_input_value_2 = input_value;
  component_delta = a4 - input_value;
  component_delta_2 = input_value_2 - a1;
  square_root = fsqrt((float)(component_delta * component_delta) + (float)(component_delta_2 * component_delta_2));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
  }
  else
  {
    scaled_ratio = component_delta_2 * (float)(1.0 / square_root);
    scaled_ratio_2 = component_delta * (float)(1.0 / square_root);
  }
  iteration_count = 0;
  g_1AD059440 = 2;
  element_index = 0;
  g_1AD059448 = 0;
  unused_written_slot_2 = 0;
  component_delta_3 = -scaled_ratio;
  g_1AD05944C = 9;
  do
  {
    weighted_sum = a5 * *(float *)&dword_140404A6C[2 * element_index + 346696314];
    weighted_sum_2 = a5 * *(float *)&dword_140404A6C[2 * element_index + 346696315];
    weighted_sum_3 = (float)(scaled_ratio * weighted_sum_2) + (float)(scaled_ratio_2 * weighted_sum);
    weighted_sum_4 = (float)(component_delta_3 * weighted_sum) + (float)(scaled_ratio_2 * weighted_sum_2);
    if ( (unsigned __int64)element_index >= 0x20 )
    {
      component_sum = weighted_sum_3 + a1;
      component_sum_2 = weighted_sum_4 + cached_input_value_2;
    }
    else
    {
      component_sum = weighted_sum_3 + cached_input_value;
      component_sum_2 = weighted_sum_4 + a4;
    }
    unused_written_slot = component_sum_2;
    position = component_sum;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, a2, a3);
    masked_bits = ++iteration_count & 0x3F;
    weighted_sum_5 = a5 * *(float *)&dword_140404A6C[2 * masked_bits + 346696314];
    weighted_sum_6 = a5 * *(float *)&dword_140404A6C[2 * masked_bits + 346696315];
    weighted_sum_7 = (float)(scaled_ratio * weighted_sum_6) + (float)(scaled_ratio_2 * weighted_sum_5);
    weighted_sum_8 = (float)(component_delta_3 * weighted_sum_5) + (float)(scaled_ratio_2 * weighted_sum_6);
    if ( (iteration_count & 0x3Fu) >= 0x20 )
    {
      component_sum_3 = weighted_sum_7 + a1;
      component_sum_4 = weighted_sum_8 + cached_input_value_2;
    }
    else
    {
      component_sum_3 = weighted_sum_7 + cached_input_value;
      component_sum_4 = weighted_sum_8 + a4;
    }
    unused_written_slot = component_sum_4;
    position = component_sum_3;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value, unrecovered_register_value_2);
    ++element_index;
  }
  while ( element_index < 64 );
  sr_renderer_batch_flush(void_2, a2, a3);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (00000001400ACD90) ----------------------------------------------------
void            sub_1400ACD90(float *a1, float *a2, float *a3)
{
  float reordered_vector;
  float float_lane_2;
  float float_lane_0;
  float float_lane_1;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float product_difference;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  double acos_result;
  float component_sum;
  float scaled_value;
  float scaled_value_2;
  float sr_relative_quaternion[4];
  __m128 xor_vector;

  sr_math_quat_from_mat3(&sr_relative_quaternion[0], a3);
  sr_math_quat_from_mat3(SR_VEC_LANES(128, xor_vector, f32), a2);
  reordered_vector = SR_VEC_LANES(128, xor_vector, f32)[3];
  float_lane_2 = SR_VEC_LANES(128, xor_vector, f32)[2];
  float_lane_0 = SR_VEC_LANES(128, xor_vector, f32)[0];
  float_lane_1 = SR_VEC_LANES(128, xor_vector, f32)[1];
  if ( (float)((float)((float)(sr_relative_quaternion[3] * SR_VEC_LANES(128, xor_vector, f32)[3]) + (float)(sr_relative_quaternion[2] * SR_VEC_LANES(128, xor_vector, f32)[2]))
             + (float)((float)(sr_relative_quaternion[0] * SR_VEC_LANES(128, xor_vector, f32)[0]) + (float)(sr_relative_quaternion[1] * SR_VEC_LANES(128, xor_vector, f32)[1]))) < 0.0 )
  {
    xor_vector = _mm_xor_ps(xor_vector, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    float_lane_2 = SR_VEC_LANES(128, xor_vector, f32)[2];
    float_lane_1 = SR_VEC_LANES(128, xor_vector, f32)[1];
    float_lane_0 = SR_VEC_LANES(128, xor_vector, f32)[0];
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(xor_vector, xor_vector, 255), f32)[0];
  }
  component_delta = -float_lane_1;
  component_delta_2 = -float_lane_0;
  component_delta_3 = -float_lane_2;
  combined_products = (float)((float)((float)(component_delta_2 * sr_relative_quaternion[3]) + (float)(reordered_vector * sr_relative_quaternion[0])) + (float)(component_delta * sr_relative_quaternion[2])) - (float)(component_delta_3 * sr_relative_quaternion[1]);
  combined_products_2 = (float)((float)((float)(reordered_vector * sr_relative_quaternion[1]) - (float)(component_delta_2 * sr_relative_quaternion[2])) + (float)(component_delta * sr_relative_quaternion[3])) + (float)(component_delta_3 * sr_relative_quaternion[0]);
  combined_products_3 = (float)((float)((float)(component_delta_2 * sr_relative_quaternion[1]) + (float)(reordered_vector * sr_relative_quaternion[2])) - (float)(component_delta * sr_relative_quaternion[0])) + (float)(component_delta_3 * sr_relative_quaternion[3]);
  product_difference = (float)((float)((float)(sr_relative_quaternion[3] * reordered_vector) - (float)(component_delta_2 * sr_relative_quaternion[0])) - (float)(component_delta * sr_relative_quaternion[1])) - (float)(component_delta_3 * sr_relative_quaternion[2]);
  square_root = fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products)) + (float)(combined_products_3 * combined_products_3));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = combined_products_3 * (float)(1.0 / square_root);
    scaled_ratio_2 = combined_products_2 * (float)(1.0 / square_root);
    scaled_ratio_3 = combined_products * (float)(1.0 / square_root);
  }
  *a1 = scaled_ratio_3;
  a1[1] = scaled_ratio_2;
  a1[2] = scaled_ratio;
  acos_result = acos(fminf(fmaxf(product_difference, -1.0), 1.0));
  component_sum = acos_result + acos_result;
  *(float *)&acos_result = component_sum * *a1;
  scaled_value = component_sum * a1[1];
  scaled_value_2 = component_sum * a1[2];
  *a1 = *(float *)&acos_result;
  a1[1] = scaled_value;
  a1[2] = scaled_value_2;
}

//----- (00000001400B5410) ----------------------------------------------------
__int64            sub_1400B5410(int a1, signed int a2, signed int a3, float *a4)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 result;

  input_value = a3;
  input_value_2 = a1;
  result = sr_human_create_joint_bond(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    dword_140404A6C[7166 * input_value_2 + 280651511 + 78 * input_value] = result;
  return result;
}

//----- (00000001400B94B0) ----------------------------------------------------
__int64            sub_1400B94B0(int a1, int a2)
{
  unsigned int *state_address;
  float *state_address_2;
  float saved_math_point_segment_distance_result;
  unsigned int unused_written_slot;
  int iteration_count;
  float *state_address_3;
  float scaled_value;
  float scaled_value_2;
  float math_point_segment_distance_result;
  float float_buffer[4];

  state_address = &g_182BBB194;
  state_address_2 = (float *)&g_182BBB1DC;
  saved_math_point_segment_distance_result = 0.5;
  unused_written_slot = -1;
  iteration_count = 0;
  state_address_3 = (float *)&dword_140404A6C[7166 * a1 + 280651293];
  scaled_value = state_address_3[401] * 1.5;
  scaled_value_2 = state_address_3[400] * 1.5;
  float_buffer[0] = state_address_3[381] - (float)(state_address_3[399] * 1.5);
  float_buffer[1] = state_address_3[382] - scaled_value_2;
  float_buffer[2] = state_address_3[383] - scaled_value;
  do
  {
    if ( *(state_address - 5) && (a2 == -1 || *state_address == a2) && state_address[4] == -1 )
    {
      math_point_segment_distance_result = sr_math_point_segment_distance(state_address_3 + 381, float_buffer, state_address_2);
      if ( math_point_segment_distance_result < saved_math_point_segment_distance_result )
      {
        unused_written_slot = iteration_count;
        saved_math_point_segment_distance_result = math_point_segment_distance_result;
      }
    }
    ++iteration_count;
    state_address_2 += 1760;
    state_address += 1760;
  }
  while ( iteration_count < 1024 );
  return unused_written_slot;
}

