#include "shared_client.h"

//----- (000000014000B950) ----------------------------------------------------
__int64            sub_14000B950(int *a1, signed int a2, float *a3, float *a4)
{
  int iteration_count;
  float source_component_y;
  float scaled_value;
  int saved_scaled_value;
  float scaled_value_2;
  int iteration_count_2;
  float source_component_z;
  int saved_scaled_value_2;
  float scaled_value_3;
  int saved_scaled_value_3;
  float scaled_value_4;
  int scaled_index;
  int saved_scaled_value_4;
  __int64 input_value;
  __int64 scaled_index_2;
  int iteration_count_3;
  int iteration_count_4;
  __int64 iteration_count_5;
  __int64 scaled_index_3;
  _DWORD *saved_byte1_result;
  _DWORD *saved_byte2_result;
  _DWORD *saved_x;
  _DWORD *record_byte_offset;
  int cached_scaled_value;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits;
  unsigned int table_value;
  unsigned int masked_bits_2;
  __int64 scaled_index_4;
  __int64 iteration_count_6;
  _DWORD *record_byte_offset_2;
  unsigned int x;
  unsigned int byte2_result;
  __int64 iteration_count_7;
  unsigned int byte1_result;
  _DWORD *record_byte_offset_3;
  _DWORD *record_pointer;
  unsigned int world_block_unknown_8_at_result;
  int table_value_2;
  unsigned int masked_bits_3;
  __int64 scaled_index_5;
  __int64 iteration_count_8;
  _DWORD *record_byte_offset_4;
  int saved_byte1_result_2;
  float weighted_sum;
  int saved_byte2_result_2;
  int saved_x_2;
  unsigned int x_2;
  unsigned int byte2_result_2;
  __int64 iteration_count_9;
  unsigned int byte1_result_2;
  _DWORD *record_byte_offset_5;
  _DWORD *record_pointer_2;
  unsigned int world_block_unknown_3008_at_result;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000B950[4256];
#define saved_world_block_unknown_3008_at_result (*(unsigned int (*))(void *)(sr_frame_14000B950 + 0)) /* [rsp+0h] */
#define weighted_sum_2 (*(float (*))(void *)(sr_frame_14000B950 + 8)) /* [rsp+8h] */
#define record_pointer_3 (*(float * (*))(void *)(sr_frame_14000B950 + 16)) /* [rsp+10h] */
#define record_pointer_4 (*(float * (*))(void *)(sr_frame_14000B950 + 24)) /* [rsp+18h] */
#define cached_scaled_value_2 (*(int (*))(void *)(sr_frame_14000B950 + 32)) /* [rsp+20h] */
#define iteration_count_10 (*(int (*))(void *)(sr_frame_14000B950 + 36)) /* [rsp+24h] */
#define saved_record_byte_offset (*(_DWORD * (*))(void *)(sr_frame_14000B950 + 40)) /* [rsp+28h] */
#define state_address (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 48)) /* [rsp+30h] */
#define state_address_2 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 56)) /* [rsp+38h] */
#define state_address_3 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 64)) /* [rsp+40h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_14000B950 + 72)) /* [rsp+48h] */
#define input_cursor (*(int * (*))(void *)(sr_frame_14000B950 + 80)) /* [rsp+50h] */
#define scaled_index_6 (*(unsigned __int64 (*))(void *)(sr_frame_14000B950 + 88)) /* [rsp+58h] */
#define layer (*(unsigned int (*))(void *)(sr_frame_14000B950 + 96)) /* [rsp+60h] */
#define input_cursor_2 (*(float * (*))(void *)(sr_frame_14000B950 + 104)) /* [rsp+68h] */
#define input_cursor_3 (*(float * (*))(void *)(sr_frame_14000B950 + 112)) /* [rsp+70h] */
#define cached_scaled_value_3 (*(int (*))(void *)(sr_frame_14000B950 + 120)) /* [rsp+78h] */
#define saved_scaled_value_5 (*(int (*))(void *)(sr_frame_14000B950 + 124)) /* [rsp+7Ch] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_14000B950 + 128)) /* [rsp+80h] */
#define cached_scaled_value_4 (*(int (*))(void *)(sr_frame_14000B950 + 132)) /* [rsp+84h] */
#define callee_output_word (*(_BYTE (*)[4])(void *)(sr_frame_14000B950 + 144)) /* [rsp+90h] */
#define callee_output_word_2 (*(_BYTE (*)[4092])(void *)(sr_frame_14000B950 + 148)) /* [rsp+94h] */
#define unused_frame_slot_4240 (*(__int64 (*))(void *)(sr_frame_14000B950 + 4240)) /* [rsp+1090h] */

  input_cursor = a1;
  iteration_count = 0;
  iteration_count_10 = 0;
  input_cursor_3 = a3;
  *a1 = 0;
  a1[8193] = 0;
  a1[16386] = 0;
  source_component_y = a3[1];
  scaled_value = *a3 * 0.25;
  input_cursor_2 = a4;
  layer = a2;
  saved_scaled_value = (int)scaled_value;
  scaled_value_2 = *a4 * 0.25;
  cached_scaled_value_3 = saved_scaled_value;
  iteration_count_2 = (int)(float)(source_component_y * 0.25);
  source_component_z = a3[2];
  saved_scaled_value_2 = (int)scaled_value_2;
  scaled_value_3 = a4[1] * 0.25;
  cached_scaled_value_2 = saved_scaled_value_2;
  saved_scaled_value_3 = (int)scaled_value_3;
  scaled_value_4 = a4[2] * 0.25;
  cached_scaled_value_4 = saved_scaled_value_3;
  scaled_index = (int)(float)(source_component_z * 0.25);
  saved_scaled_value_4 = (int)scaled_value_4;
  cached_scaled_index = scaled_index;
  saved_scaled_value_5 = (int)scaled_value_4;
  if ( iteration_count_2 <= saved_scaled_value_3 )
  {
    input_value = a2;
    input_value_2 = a2;
    while ( 1 )
    {
      if ( iteration_count_2 >= 0 )
      {
        scaled_index_2 = 1052016 * input_value;
        scaled_index_6 = 1052016 * input_value;
        if ( iteration_count_2 < (int)(dword_140404A6C[263004 * input_value + 111579651] << 6) )
        {
          iteration_count_3 = scaled_index;
          if ( scaled_index <= saved_scaled_value_4 )
            break;
        }
      }
LABEL_79:
      if ( ++iteration_count_2 > saved_scaled_value_3 )
        return 0; /* the function has no caller */
    }
    while ( 1 )
    {
      if ( iteration_count_3 >= 0 && iteration_count_3 < (int)(*(unsigned int *)((char *)&g_15ADA927C + scaled_index_2) << 6) )
      {
        iteration_count_4 = saved_scaled_value;
        if ( saved_scaled_value <= saved_scaled_value_2 )
          break;
      }
LABEL_77:
      if ( ++iteration_count_3 > saved_scaled_value_4 )
      {
        scaled_index = cached_scaled_index;
        saved_scaled_value_3 = cached_scaled_value_4;
        goto LABEL_79;
      }
    }
    iteration_count_5 = iteration_count;
    scaled_index_3 = 16LL * iteration_count;
    saved_byte1_result = &callee_output_word_2[scaled_index_3 + 8];
    saved_byte2_result = &callee_output_word_2[scaled_index_3 + 4];
    state_address = &callee_output_word_2[scaled_index_3 + 8];
    saved_x = &callee_output_word_2[scaled_index_3];
    state_address_2 = &callee_output_word_2[scaled_index_3 + 4];
    record_byte_offset = &callee_output_word[scaled_index_3];
    state_address_3 = &callee_output_word_2[scaled_index_3];
    cached_scaled_value = cached_scaled_value_2;
    saved_record_byte_offset = record_byte_offset;
    while ( iteration_count_4 < 0 )
    {
LABEL_75:
      saved_byte1_result = state_address;
      ++iteration_count_4;
      saved_byte2_result = state_address_2;
      saved_x = state_address_3;
      record_byte_offset = saved_record_byte_offset;
      iteration_count = iteration_count_10;
      scaled_index_2 = scaled_index_6;
      if ( iteration_count_4 > cached_scaled_value )
      {
        saved_scaled_value_2 = cached_scaled_value_2;
        saved_scaled_value = cached_scaled_value_3;
        saved_scaled_value_4 = saved_scaled_value_5;
        goto LABEL_77;
      }
    }
    if ( iteration_count_4 >= (int)(*(unsigned int *)((char *)&g_15ADA9274 + scaled_index_2) << 6)
      || (shifted_bits = *(int *)(*(_QWORD *)((char *)(unsigned int *)&g_15ADA9288 + scaled_index_2)
                       + 4LL
                       * (int)((iteration_count_4 >> 6)
                             + *(unsigned int *)((char *)&g_15ADA9274 + scaled_index_2)
                             * ((iteration_count_3 >> 6) + *(unsigned int *)((char *)&g_15ADA927C + scaled_index_2) * (iteration_count_2 >> 6)))),
          (_DWORD)shifted_bits == -1)
      || (shifted_bits_2 = (int)dword_140404A6C[263004 * input_value
                                   + 111579985
                                   + 513 * shifted_bits
                                   + 64 * ((iteration_count_2 >> 3) & 7)
                                   + 8 * ((iteration_count_3 >> 3) & 7)
                                   + ((iteration_count_4 >> 3) & 7)],
          (_DWORD)shifted_bits_2 == -1) )
    {
LABEL_74:
      cached_scaled_value = cached_scaled_value_2;
      goto LABEL_75;
    }
    masked_bits = 6930 * shifted_bits_2 + (iteration_count_4 & 7) + 8 * ((iteration_count_3 & 7) + 8 * (iteration_count_2 & 7u));
    table_value = dword_140404A6C[masked_bits + 83194359];
    if ( table_value )
    {
      masked_bits_2 = table_value & 0xE0000000;
      if ( (table_value & 0xE0000000) == 0x40000000 )
      {
        sub_14000E8B0(input_cursor, iteration_count_4, iteration_count_2, iteration_count_3, table_value, *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index_2));
LABEL_31:
        saved_byte1_result = state_address;
        saved_byte2_result = state_address_2;
        saved_x = state_address_3;
        goto LABEL_44;
      }
      if ( masked_bits_2 == 0x80000000 )
      {
        scaled_index_4 = 58LL * (unsigned __int16)table_value;
        if ( dword_140404A6C[scaled_index_4 + 20074645] != 1
          || dword_140404A6C[scaled_index_4 + 20074646] != 1
          || dword_140404A6C[scaled_index_4 + 20074647] != 1 )
        {
          iteration_count_6 = 0;
          if ( iteration_count_5 > 0 )
          {
            record_byte_offset_2 = callee_output_word_2;
            while ( *(record_byte_offset_2 - 1) || *record_byte_offset_2 != iteration_count_4 || record_byte_offset_2[1] != iteration_count_2 || record_byte_offset_2[2] != iteration_count_3 )
            {
              ++iteration_count_6;
              record_byte_offset_2 += 4;
              if ( iteration_count_6 >= iteration_count_5 )
                goto LABEL_28;
            }
            goto LABEL_44;
          }
LABEL_28:
          if ( iteration_count_5 < 256 )
          {
            ++iteration_count;
            *record_byte_offset = 0;
            record_byte_offset += 4;
            *saved_x = iteration_count_4;
            *saved_byte2_result = iteration_count_2;
            *saved_byte1_result = iteration_count_3;
            ++iteration_count_5;
            iteration_count_10 = iteration_count;
            saved_record_byte_offset = record_byte_offset;
            state_address = saved_byte1_result + 4;
            state_address_3 = saved_x + 4;
            state_address_2 = saved_byte2_result + 4;
          }
        }
        sub_14000EF70(input_cursor, iteration_count_4, iteration_count_2, iteration_count_3, table_value, *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index_2), input_cursor_3, input_cursor_2);
        goto LABEL_31;
      }
      if ( masked_bits_2 == -1073741824 )
      {
        x = iteration_count_4 - (unsigned __int8)table_value;
        byte2_result = iteration_count_2 - BYTE2(table_value);
        iteration_count_7 = 0;
        byte1_result = iteration_count_3 - BYTE1(table_value);
        if ( iteration_count_5 <= 0 )
        {
LABEL_40:
          if ( iteration_count_5 < 256 )
          {
            record_pointer = saved_record_byte_offset;
            ++iteration_count_5;
            ++iteration_count_10;
            *saved_x = x;
            *saved_byte2_result = byte2_result;
            *record_pointer = 0;
            *saved_byte1_result = byte1_result;
            state_address = saved_byte1_result + 4;
            saved_record_byte_offset = record_pointer + 4;
            state_address_3 = saved_x + 4;
            state_address_2 = saved_byte2_result + 4;
          }
          world_block_unknown_8_at_result = sr_world_block_unknown_8_at(layer, x, byte2_result, byte1_result);
          record_pointer_4 = input_cursor_2;
          record_pointer_3 = input_cursor_3;
          sub_14000EF70(input_cursor, x, byte2_result, byte1_result, world_block_unknown_8_at_result, *(float *)&dword_140404A6C[scaled_index_6 / 4 + 111579653], input_cursor_3, input_cursor_2);
          saved_byte1_result = state_address;
          saved_byte2_result = state_address_2;
          saved_x = state_address_3;
        }
        else
        {
          record_byte_offset_3 = callee_output_word_2;
          while ( *(record_byte_offset_3 - 1) || *record_byte_offset_3 != x || record_byte_offset_3[1] != byte2_result || record_byte_offset_3[2] != byte1_result )
          {
            ++iteration_count_7;
            record_byte_offset_3 += 4;
            if ( iteration_count_7 >= iteration_count_5 )
              goto LABEL_40;
          }
        }
        scaled_index_2 = scaled_index_6;
        iteration_count = iteration_count_10;
        record_byte_offset = saved_record_byte_offset;
      }
    }
LABEL_44:
    table_value_2 = dword_140404A6C[masked_bits + 83197431];
    if ( table_value_2 )
    {
      masked_bits_3 = table_value_2 & 0xE0000000;
      if ( (table_value_2 & 0xE0000000) != 0x40000000 )
      {
        if ( masked_bits_3 == 0x80000000 )
        {
          scaled_index_5 = 58LL * (unsigned __int16)table_value_2;
          if ( dword_140404A6C[scaled_index_5 + 20074645] != 1
            || dword_140404A6C[scaled_index_5 + 20074646] != 1
            || dword_140404A6C[scaled_index_5 + 20074647] != 1 )
          {
            iteration_count_8 = 0;
            if ( iteration_count_5 > 0 )
            {
              record_byte_offset_4 = callee_output_word_2;
              while ( *(record_byte_offset_4 - 1) != 1 || *record_byte_offset_4 != iteration_count_4 || record_byte_offset_4[1] != iteration_count_2 || record_byte_offset_4[2] != iteration_count_3 )
              {
                ++iteration_count_8;
                record_byte_offset_4 += 4;
                if ( iteration_count_8 >= iteration_count_5 )
                  goto LABEL_58;
              }
              goto LABEL_73;
            }
LABEL_58:
            if ( iteration_count_5 < 256 )
            {
              *record_byte_offset = 1;
              *saved_x = iteration_count_4;
              *saved_byte2_result = iteration_count_2;
              *saved_byte1_result = iteration_count_3;
              ++iteration_count_5;
              iteration_count_10 = iteration_count + 1;
              saved_record_byte_offset = record_byte_offset + 4;
              state_address = saved_byte1_result + 4;
              state_address_3 = saved_x + 4;
              state_address_2 = saved_byte2_result + 4;
            }
          }
          saved_byte1_result_2 = iteration_count_3;
          weighted_sum = *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index_2);
          saved_byte2_result_2 = iteration_count_2;
          record_pointer_4 = input_cursor_2;
          record_pointer_3 = input_cursor_3;
          weighted_sum_2 = weighted_sum;
          saved_world_block_unknown_3008_at_result = table_value_2;
          saved_x_2 = iteration_count_4;
        }
        else
        {
          if ( masked_bits_3 != -1073741824 )
            goto LABEL_73;
          x_2 = iteration_count_4 - (unsigned __int8)table_value_2;
          byte2_result_2 = iteration_count_2 - BYTE2(table_value_2);
          iteration_count_9 = 0;
          byte1_result_2 = iteration_count_3 - BYTE1(table_value_2);
          if ( iteration_count_5 > 0 )
          {
            record_byte_offset_5 = callee_output_word_2;
            while ( *(record_byte_offset_5 - 1) != 1 || *record_byte_offset_5 != x_2 || record_byte_offset_5[1] != byte2_result_2 || record_byte_offset_5[2] != byte1_result_2 )
            {
              ++iteration_count_9;
              record_byte_offset_5 += 4;
              if ( iteration_count_9 >= iteration_count_5 )
                goto LABEL_69;
            }
            goto LABEL_73;
          }
LABEL_69:
          if ( iteration_count_5 < 256 )
          {
            record_pointer_2 = saved_record_byte_offset;
            ++iteration_count_5;
            ++iteration_count_10;
            *saved_x = x_2;
            *saved_byte2_result = byte2_result_2;
            *record_pointer_2 = 1;
            *saved_byte1_result = byte1_result_2;
            state_address = saved_byte1_result + 4;
            saved_record_byte_offset = record_pointer_2 + 4;
            state_address_3 = saved_x + 4;
            state_address_2 = saved_byte2_result + 4;
          }
          world_block_unknown_3008_at_result = sr_world_block_unknown_3008_at(layer, x_2, byte2_result_2, byte1_result_2);
          record_pointer_4 = input_cursor_2;
          saved_byte1_result_2 = byte1_result_2;
          saved_x_2 = x_2;
          record_pointer_3 = input_cursor_3;
          saved_byte2_result_2 = byte2_result_2;
          weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_6 / 4 + 111579653];
          saved_world_block_unknown_3008_at_result = world_block_unknown_3008_at_result;
        }
        sub_14000EF70(input_cursor, saved_x_2, saved_byte2_result_2, saved_byte1_result_2, saved_world_block_unknown_3008_at_result, weighted_sum_2, record_pointer_3, record_pointer_4);
        goto LABEL_73;
      }
      sub_14000E8B0(input_cursor, iteration_count_4, iteration_count_2, iteration_count_3, table_value_2, *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index_2));
    }
LABEL_73:
    input_value = input_value_2;
    goto LABEL_74;
  }
  return 0; /* the function has no caller */
}
#undef saved_world_block_unknown_3008_at_result
#undef weighted_sum_2
#undef record_pointer_3
#undef record_pointer_4
#undef cached_scaled_value_2
#undef iteration_count_10
#undef saved_record_byte_offset
#undef state_address
#undef state_address_2
#undef state_address_3
#undef input_value_2
#undef input_cursor
#undef scaled_index_6
#undef layer
#undef input_cursor_2
#undef input_cursor_3
#undef cached_scaled_value_3
#undef saved_scaled_value_5
#undef cached_scaled_index
#undef cached_scaled_value_4
#undef callee_output_word
#undef callee_output_word_2
#undef unused_frame_slot_4240

//----- (000000014000C180) ----------------------------------------------------
__int64            sub_14000C180(int *a1, int a2, float *a3, float *a4)
{
  __int64 block_record_offset;
  __int64 block_record_offset_2;
  float weighted_sum;
  float product_difference;
  float product_difference_2;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 result;
  float source_component_y;
  int scaled_index;
  float weighted_sum_4;
  int iteration_count;
  float component_delta;
  float product_difference_3;
  int scaled_index_2;
  float source_component_z;
  int saved_product_difference;
  int scaled_index_3;
  int iteration_count_2;
  int iteration_count_3;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits;
  unsigned int table_value;
  unsigned int table_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C180[48];
#define saved_call_status (*(int (*))(void *)(sr_frame_14000C180 + 0)) /* [rsp+30h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14000C180 + 4)) /* [rsp+34h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14000C180 + 8)) /* [rsp+38h] */
#define saved_call_status_2 (*(unsigned int (*))(void *)(sr_frame_14000C180 + 16)) /* [rsp+40h] */
#define saved_product_difference_2 (*(int (*))(void *)(sr_frame_14000C180 + 20)) /* [rsp+44h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_14000C180 + 24)) /* [rsp+48h] */
#define cached_scaled_index_2 (*(int (*))(void *)(sr_frame_14000C180 + 28)) /* [rsp+4Ch] */
#define saved_block_record_offset (*(__int64 (*))(void *)(sr_frame_14000C180 + 32)) /* [rsp+50h] */

  block_record_offset = 263004LL * a2;
  block_record_offset_2 = 263004LL * a2;
  weighted_sum = *(float *)&dword_140404A6C[block_record_offset_2 + 111579638];
  product_difference = *a3 - weighted_sum;
  product_difference_2 = *a4 - weighted_sum;
  weighted_sum_2 = *(float *)&dword_140404A6C[block_record_offset_2 + 111579640];
  saved_block_record_offset = block_record_offset;
  weighted_sum_3 = *(float *)&dword_140404A6C[block_record_offset_2 + 111579654];
  result = (unsigned int)(int)(float)(product_difference * weighted_sum_3);
  source_component_y = a3[1];
  scaled_index = (int)(float)(product_difference_2 * weighted_sum_3);
  saved_call_status_2 = result;
  weighted_sum_4 = *(float *)&dword_140404A6C[block_record_offset_2 + 111579639];
  iteration_count = (int)(float)((float)(source_component_y - weighted_sum_4) * weighted_sum_3);
  component_delta = a4[1] - weighted_sum_4;
  unused_written_slot = iteration_count;
  product_difference_3 = (float)(a4[2] - weighted_sum_2) * weighted_sum_3;
  scaled_index_2 = (int)(float)(component_delta * weighted_sum_3);
  source_component_z = a3[2];
  cached_scaled_index_2 = scaled_index_2;
  saved_product_difference = (int)product_difference_3;
  saved_product_difference_2 = (int)product_difference_3;
  scaled_index_3 = (int)(float)((float)(source_component_z - weighted_sum_2) * weighted_sum_3);
  cached_scaled_index = scaled_index_3;
  if ( iteration_count <= scaled_index_2 )
  {
    unused_written_slot = iteration_count;
    do
    {
      unused_written_slot_2 = scaled_index_3;
      iteration_count_2 = scaled_index_3;
      if ( scaled_index_3 <= saved_product_difference )
      {
        do
        {
          saved_call_status = result;
          iteration_count_3 = result;
          if ( (int)result <= scaled_index )
          {
            do
            {
              if ( iteration_count_3 >= 0
                && iteration_count_3 < (int)(dword_140404A6C[block_record_offset_2 + 111579650] << 6)
                && iteration_count >= 0
                && iteration_count < (int)(dword_140404A6C[block_record_offset_2 + 111579651] << 6)
                && iteration_count_2 >= 0
                && iteration_count_2 < (int)(dword_140404A6C[block_record_offset_2 + 111579652] << 6) )
              {
                shifted_bits = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset_2 + 111579655]
                             + 4LL
                             * (int)((iteration_count_3 >> 6)
                                   + dword_140404A6C[block_record_offset_2 + 111579650]
                                   * ((iteration_count_2 >> 6) + dword_140404A6C[block_record_offset_2 + 111579652] * (iteration_count >> 6))));
                if ( (_DWORD)shifted_bits != -1 )
                {
                  shifted_bits_2 = (int)dword_140404A6C[513 * shifted_bits
                                           + 111579985
                                           + 64 * ((iteration_count >> 3) & 7u)
                                           + 8 * ((iteration_count_2 >> 3) & 7)
                                           + block_record_offset
                                           + ((iteration_count_3 >> 3) & 7)];
                  if ( (_DWORD)shifted_bits_2 != -1 )
                  {
                    masked_bits = 6930 * shifted_bits_2 + (iteration_count_3 & 7) + 8 * ((iteration_count_2 & 7) + 8 * (iteration_count & 7u));
                    table_value = dword_140404A6C[masked_bits + 83194359];
                    if ( (table_value & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &saved_call_status, table_value, *(float *)&dword_140404A6C[block_record_offset_2 + 111579653]);
                    }
                    else if ( (table_value & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &saved_call_status, table_value, *(float *)&dword_140404A6C[block_record_offset_2 + 111579653]);
                    }
                    table_value_2 = dword_140404A6C[masked_bits + 83197431];
                    if ( (table_value_2 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &saved_call_status, table_value_2, *(float *)&dword_140404A6C[block_record_offset_2 + 111579653]);
                    }
                    else if ( (table_value_2 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &saved_call_status, table_value_2, *(float *)&dword_140404A6C[block_record_offset_2 + 111579653]);
                    }
                  }
                }
              }
              block_record_offset = saved_block_record_offset;
              saved_call_status = ++iteration_count_3;
            }
            while ( iteration_count_3 <= scaled_index );
            result = saved_call_status_2;
            saved_product_difference = saved_product_difference_2;
          }
          unused_written_slot_2 = ++iteration_count_2;
        }
        while ( iteration_count_2 <= saved_product_difference );
        scaled_index_3 = cached_scaled_index;
        scaled_index_2 = cached_scaled_index_2;
      }
      unused_written_slot = ++iteration_count;
    }
    while ( iteration_count <= scaled_index_2 );
  }
  return result;
}
#undef saved_call_status
#undef unused_written_slot
#undef unused_written_slot_2
#undef saved_call_status_2
#undef saved_product_difference_2
#undef cached_scaled_index
#undef cached_scaled_index_2
#undef saved_block_record_offset

//----- (000000014000C4C0) ----------------------------------------------------
__int64            sub_14000C4C0(unsigned int a1)
{
  __int64 bit_mask;
  __m128i converted_vector;
  __m128 converted_vector_2;
  signed int state_word;
  unsigned int state_word_2;
  int iteration_count;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __int64 scaled_index;
  char *state_address;
  char *state_address_2;
  float bit_mask_2;
  float converted_vector_5;
  float converted_vector_6;
  float converted_vector_7;
  signed int iteration_count_2;
  char *saved_state_address;
  signed int iteration_count_3;
  char *record_byte_offset;
  unsigned int loaded_word;
  int iteration_count_4;
  unsigned __int64 element_index;
  __int16 masked_bits;
  int *record_byte_offset_2;
  int iteration_count_5;
  int rol4_result;
  unsigned __int64 running_total;
  __int64 running_total_2;
  __int64 masked_bits_2;
  __int64 element_index_2;
  int *buffer_cursor;
  float weighted_sum;
  __int64 remaining_count;
  int integer_quotient;
  int integer_quotient_2;
  int integer_quotient_3;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  unsigned int state_word_3;
  float cached_iteration_count;
  float cached_iteration_count_2;
  float weighted_sum_5;
  float weighted_sum_6;
  int loaded_word_2;
  __int64 cached_scaled_index;
  float cached_iteration_count_3;
  float saved_loaded_word;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float weighted_sum_7;
  float weighted_sum_8;
  float state_address_3;
  float cached_converted_vector;
  float weighted_sum_9;
  float cached_converted_vector_2;
  __int64 scaled_index_5;
  float cached_converted_vector_3;
  float weighted_sum_10;
  __int64 scaled_index_6;
  float weighted_sum_11;
  __int64 remaining_count_2;
  __int64 scaled_index_7;
  unsigned int scaled_index_8;
  unsigned int scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  int element_index_3;
  int masked_bits_3;
  unsigned int hibyte_result;
  unsigned int scaled_index_17;
  int masked_bits_4;
  unsigned int scaled_index_18;
  int masked_bits_5;
  int element_index_4;
  unsigned int scaled_index_19;
  int saved_record_byte_offset;
  __int64 scaled_index_20;
  int scaled_index_21;
  unsigned __int64 scaled_index_22;
  unsigned __int16 masked_bits_6;
  __int64 scaled_index_23;
  unsigned int state_word_4;
  int table_value;
  __int64 masked_bits_7;
  float weighted_sum_12;
  __int64 record_byte_offset_3;
  __int64 masked_bits_8;
  float weighted_sum_13;
  float weighted_sum_14;
  float *weighted_sum_15;
  float weighted_sum_16;
  __int64 remaining_count_3;
  float cached_converted_vector_4;
  __m128i converted_vector_8;
  __int64 masked_bits_9;
  __m128i converted_vector_9;
  __int64 masked_bits_10;
  unsigned int *running_total_3;
  __int64 integer_difference;
  unsigned int *running_total_4;
  __int64 integer_difference_2;
  float converted_vector_10;
  float cached_iteration_count_4;
  float converted_vector_11;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  __int64 scaled_index_26;
  __int64 scaled_index_27;
  __int64 scaled_index_28;
  int table_value_2;
  signed int iteration_count_6;
  signed int table_value_3;
  __int64 record_byte_offset_4;
  unsigned int state_word_5;
  __int64 record_byte_offset_5;
  int bit_mask_3;
  __int64 masked_bits_11;
  __int64 masked_bits_12;
  __int64 masked_bits_13;
  __int64 remaining_count_4;
  __int64 scaled_index_29;
  unsigned int scaled_index_30;
  unsigned int scaled_index_31;
  __int64 scaled_index_32;
  __int64 scaled_index_33;
  __int64 scaled_index_34;
  __int64 scaled_index_35;
  __int64 scaled_index_36;
  __int64 scaled_index_37;
  __m128 xor_vector;
  __m128 xor_vector_2;
  __m128 xor_vector_3;
  __m128 xor_vector_4;
  __m128 xor_vector_5;
  __m128 xor_vector_6;
  __int64 remaining_count_5;
  __m128 saved_xor_vector;
  __m128 saved_xor_vector_2;
  __m128 saved_xor_vector_3;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  __int64 scaled_index_38;
  float state_address_4;
  float state_address_5;
  float state_address_6;
  __int64 scaled_index_39;
  float state_address_7;
  float state_address_8;
  float state_address_9;
  __int64 scaled_index_40;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  __int64 scaled_index_41;
  float state_address_13;
  float state_address_14;
  float state_address_15;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float *state_address_16;
  int table_value_4;
  __int64 remaining_count_6;
  __int64 record_byte_offset_6;
  __int64 record_byte_offset_7;
  unsigned int state_word_6;
  int loaded_word_3;
  int i;
  __int64 integer_sum;
  __int64 scaled_index_42;
  __int64 scaled_index_43;
  __int64 scaled_index_44;
  __int64 scaled_index_45;
  int remaining_count_7;
  signed int iteration_count_7;
  int iteration_count_8;
  unsigned int *state_address_17;
  __int64 scaled_index_46;
  __int64 scaled_index_47;
  __int64 scaled_index_48;
  __int64 scaled_index_49;
  unsigned int table_value_5;
  int iteration_count_9;
  unsigned int *saved_iteration_count;
  unsigned int saved_remaining_count;
  int iteration_count_10;
  int record_byte_offset_8;
  __int64 saved_record_byte_offset_2;
  __int64 integer_sum_2;
  int cached_input_value;
  int state_word_7;
  int iteration_count_11;
  int running_total_5;
  __int64 saved_running_total;
  signed int iteration_count_12;
  int running_total_6;
  signed int iteration_count_13;
  unsigned int *state_address_18;
  unsigned int *saved_iteration_count_2;
  int element_index_5;
  __int64 j;
  int integer_sum_3;
  __int64 scaled_index_50;
  __int64 scaled_index_51;
  __int64 scaled_index_52;
  __int64 scaled_index_53;
  __int64 scaled_index_54;
  __int64 scaled_index_55;
  __int64 scaled_index_56;
  __int64 scaled_index_57;
  __int64 scaled_index_58;
  int element_index_6;
  int running_total_7;
  int running_total_8;
  int integer_difference_3;
  unsigned int table_value_6;
  unsigned int scaled_index_59;
  unsigned int table_value_7;
  unsigned int scaled_index_60;
  unsigned int table_value_8;
  unsigned int scaled_index_61;
  unsigned int table_value_9;
  __int64 scaled_index_62;
  unsigned int integer_sum_4;
  __int64 masked_bits_14;
  int k;
  int iteration_count_14;
  unsigned int *state_address_19;
  unsigned int *buffer_cursor_2;
  __int64 scaled_index_63;
  __int64 masked_bits_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C4C0[192];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 0)) /* [rsp+0h] */
#define saved_converted_vector (*(float (*))(void *)(sr_frame_14000C4C0 + 32)) /* [rsp+20h] */
#define saved_converted_vector_2 (*(float (*))(void *)(sr_frame_14000C4C0 + 36)) /* [rsp+24h] */
#define saved_converted_vector_3 (*(float (*))(void *)(sr_frame_14000C4C0 + 40)) /* [rsp+28h] */
#define saved_iteration_count_3 (*(int (*))(void *)(sr_frame_14000C4C0 + 44)) /* [rsp+2Ch] */
#define saved_iteration_count_4 (*(int (*))(void *)(sr_frame_14000C4C0 + 48)) /* [rsp+30h] */
#define saved_iteration_count_5 (*(int (*))(void *)(sr_frame_14000C4C0 + 52)) /* [rsp+34h] */
#define record_byte_offset_9 (*(int (*))(void *)(sr_frame_14000C4C0 + 56)) /* [rsp+38h] */
#define input_value (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 60)) /* [rsp+3Ch] */
#define hibyte_result_2 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 64)) /* [rsp+40h] */
#define state_word_8 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 68)) /* [rsp+44h] */
#define cached_scaled_index_2 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 72)) /* [rsp+48h] */
#define saved_record_byte_offset_3 (*(char * (*))(void *)(sr_frame_14000C4C0 + 80)) /* [rsp+50h] */
#define saved_bit_mask (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 88)) /* [rsp+58h] */
#define buffer_cursor_3 (*(_DWORD * (*))(void *)(sr_frame_14000C4C0 + 96)) /* [rsp+60h] */
#define saved_record_byte_offset_4 (*(int * (*))(void *)(sr_frame_14000C4C0 + 104)) /* [rsp+68h] */
#define saved_running_total_2 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 112)) /* [rsp+70h] */
#define record_byte_offset_10 (*(char * (*))(void *)(sr_frame_14000C4C0 + 120)) /* [rsp+78h] */
#define saved_state_address_2 (*(char * (*))(void *)(sr_frame_14000C4C0 + 128)) /* [rsp+80h] */
#define state_address_20 (*(char * (*))(void *)(sr_frame_14000C4C0 + 136)) /* [rsp+88h] */
#define saved_state_address_3 (*(char * (*))(void *)(sr_frame_14000C4C0 + 144)) /* [rsp+90h] */
#define scratch_buffer (*(unsigned __int16 (*)[8])(void *)(sr_frame_14000C4C0 + 152)) /* [rsp+98h] */
#define callee_output_word (*(_BYTE (*)[15])(void *)(sr_frame_14000C4C0 + 169)) /* [rsp+A9h] */
#define unused_frame_slot_184 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 184)) /* [rsp+B8h] */

  input_value = a1;
  if ( a1 <= 0xFFF )
  {
    bit_mask = 27720LL * (int)a1;
    saved_bit_mask = bit_mask;
    if ( *(unsigned int *)((char *)&g_154161240 + bit_mask) )
    {
      converted_vector = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200507]);
      converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
      state_word = 0;
      state_word_2 = 0;
      iteration_count = 0;
      converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200508]);
      converted_vector_4 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200509]);
      scaled_index = 1052016LL * (int)dword_140404A6C[6930 * a1 + 83194358];
      g_15155B7B0 = 0;
      state_address = (char *)&g_154161A48 + bit_mask;
      cached_scaled_index_2 = scaled_index;
      state_address_2 = (char *)&g_154162248 + bit_mask - (_QWORD)callee_output_word;
      g_1510AB760 = 0;
      g_1512DB764 = 0;
      g_15138B768 = 0;
      bit_mask_2 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index);
      saved_iteration_count_3 = 0;
      record_byte_offset_9 = 0;
      state_address_20 = (char *)&g_154161A48 + bit_mask;
      saved_state_address_3 = state_address_2;
      converted_vector_5 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_4), f32)[0] * 8.0) * bit_mask_2;
      converted_vector_6 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 8.0) * bit_mask_2;
      converted_vector_7 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * 8.0) * bit_mask_2;
      saved_converted_vector_3 = converted_vector_5;
      saved_converted_vector = converted_vector_6;
      saved_converted_vector_2 = converted_vector_7;
      do
      {
        iteration_count_2 = 0;
        saved_iteration_count_5 = 0;
        record_byte_offset_10 = state_address;
        saved_state_address = state_address_2;
        saved_state_address_2 = state_address_2;
        do
        {
          iteration_count_3 = 0;
          saved_iteration_count_4 = 0;
          buffer_cursor_3 = state_address;
          record_byte_offset = saved_state_address;
          saved_record_byte_offset_3 = saved_state_address;
          do
          {
            loaded_word = *((_DWORD *)state_address - 512);
            state_word_8 = loaded_word;
            if ( (loaded_word & 0xE0000000) == 0x40000000 )
            {
              hibyte_result_2 = HIBYTE(loaded_word) & 3;
              iteration_count_4 = 0;
              element_index = 0;
              do
              {
                masked_bits = *(_WORD *)&callee_output_word[element_index * 2 + (_QWORD)record_byte_offset];
                *(_WORD *)&callee_output_word[element_index * 2 - 1] = masked_bits;
                if ( element_index >= 8 )
                  goto LABEL_162;
                scratch_buffer[element_index] = 0;
                if ( (masked_bits & 0x4000) != 0 )
                {
                  callee_output_word[element_index * 2] = 0;
                  scratch_buffer[element_index] = HIBYTE(masked_bits) & 0x1F;
                  masked_bits = *(_WORD *)&callee_output_word[element_index * 2 - 1];
                }
                if ( masked_bits < 0 )
                {
                  scratch_buffer[element_index] = masked_bits & 0x3FF;
                  *(_WORD *)&callee_output_word[element_index * 2 - 1] = g_1A4CFF7E4;
                }
                ++iteration_count_4;
                ++element_index;
              }
              while ( iteration_count_4 < 8 );
              record_byte_offset_2 = dword_1402B3660;
              saved_running_total_2 = 0;
              saved_record_byte_offset_4 = dword_1402B3660;
              iteration_count_5 = 0;
              rol4_result = 1;
              running_total = 0;
              running_total_2 = 0;
              do
              {
                if ( (rol4_result & loaded_word) != 0 )
                {
                  masked_bits_2 = *(unsigned __int16 *)&callee_output_word[running_total_2 - 1];
                  element_index_2 = 0;
                  buffer_cursor = record_byte_offset_2;
                  weighted_sum = *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index);
                  remaining_count = 4;
                  integer_quotient = dword_1402B3550[running_total / 4];
                  integer_quotient_2 = dword_1402B3554[running_total / 4];
                  integer_quotient_3 = dword_1402B3558[running_total / 4];
                  weighted_sum_2 = *(float *)((char *)&unk_1402B35A0 + running_total);
                  weighted_sum_3 = *(float *)((char *)&unk_1402B35A4 + running_total);
                  weighted_sum_4 = *(float *)((char *)&unk_1402B35A8 + running_total);
                  state_word_3 = g_1A4CFF7E4;
                  cached_iteration_count = (float)saved_iteration_count_4;
                  cached_iteration_count_2 = (float)saved_iteration_count_3;
                  weighted_sum_5 = *(float *)&dword_140404A6C[46 * masked_bits_2 + 421784734];
                  weighted_sum_6 = *(float *)&dword_140404A6C[46 * masked_bits_2 + 421784735];
                  loaded_word_2 = *(unsigned __int16 *)((char *)scratch_buffer + running_total_2);
                  cached_scaled_index = cached_scaled_index_2;
                  cached_iteration_count_3 = (float)saved_iteration_count_5;
                  saved_loaded_word = (float)loaded_word_2;
                  do
                  {
                    scaled_index_2 = 3LL * *buffer_cursor;
                    *(float *)&dword_140404A6C[3 * state_word_2 + 70687550] = (float)(cached_iteration_count + *(float *)&dword_1402B34F0[3 * *buffer_cursor])
                                                                  * weighted_sum;
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] = (float)(cached_iteration_count_2
                                                                                                 + *(float *)&dword_1402B34F4[scaled_index_2])
                                                                                         * weighted_sum;
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] = (float)(cached_iteration_count_3
                                                                                                 + *(float *)&dword_1402B34F8[scaled_index_2])
                                                                                         * weighted_sum;
                    dword_140404A6C[g_1510AB760 + 70933310] = (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687550];
                    dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] << 10;
                    dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] << 20;
                    scaled_index_3 = 3LL * (int)g_1510AB760;
                    dword_140404A6C[scaled_index_3 + 70736702] = integer_quotient;
                    dword_140404A6C[scaled_index_3 + 70736703] = integer_quotient_2;
                    dword_140404A6C[scaled_index_3 + 70736704] = integer_quotient_3;
                    scaled_index_4 = 3LL * (int)g_1510AB760;
                    *(float *)&dword_140404A6C[scaled_index_4 + 70785854] = weighted_sum_2;
                    *(float *)&dword_140404A6C[scaled_index_4 + 70785855] = weighted_sum_3;
                    *(float *)&dword_140404A6C[scaled_index_4 + 70785856] = weighted_sum_4;
                    weighted_sum_7 = *(float *)((char *)&unk_1402B35F0 + running_total);
                    weighted_sum_8 = *(float *)((char *)&unk_1402B35F8 + running_total);
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835006] = (float)((float)((float)(weighted_sum_3 * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551]) + (float)(weighted_sum_2 * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687550]))
                                                                                                 + (float)(weighted_sum_4 * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552]))
                                                                                         * weighted_sum_5;
                    state_address_3 = (float)(*(float *)((char *)&unk_1402B35F4 + running_total)
                                * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551])
                        + (float)(weighted_sum_7 * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687550]);
                    cached_converted_vector = saved_converted_vector;
                    weighted_sum_9 = state_address_3 + (float)(weighted_sum_8 * *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552]);
                    cached_converted_vector_2 = saved_converted_vector_2;
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835007] = weighted_sum_9 * weighted_sum_6;
                    dword_140404A6C[3 * g_1510AB760 + 70835008] = 0;
                    scaled_index_5 = 3LL * (int)g_1510AB760;
                    *(float *)&dword_140404A6C[scaled_index_5 + 70687550] = cached_converted_vector
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * g_1510AB760
                                                                                          + 70687550];
                    cached_converted_vector_3 = saved_converted_vector_3;
                    *(float *)&dword_140404A6C[scaled_index_5 + 70687551] = cached_converted_vector_2 + *(float *)&dword_140404A6C[scaled_index_5 + 70687551];
                    weighted_sum_10 = *(float *)((char *)&g_15ADA9248 + cached_scaled_index);
                    *(float *)&dword_140404A6C[scaled_index_5 + 70687552] = cached_converted_vector_3 + *(float *)&dword_140404A6C[scaled_index_5 + 70687552];
                    scaled_index_6 = 3LL * (int)g_1510AB760;
                    *(float *)&dword_140404A6C[scaled_index_6 + 70687550] = *(float *)((char *)&g_15ADA9244 + cached_scaled_index)
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * g_1510AB760
                                                                                          + 70687550];
                    weighted_sum_11 = *(float *)((char *)&g_15ADA924C + cached_scaled_index);
                    *(float *)&dword_140404A6C[scaled_index_6 + 70687551] = weighted_sum_10 + *(float *)&dword_140404A6C[scaled_index_6 + 70687551];
                    *(float *)&dword_140404A6C[scaled_index_6 + 70687552] = weighted_sum_11 + *(float *)&dword_140404A6C[scaled_index_6 + 70687552];
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835008] = saved_loaded_word;
                    dword_140404A6C[3 * g_1510AB760 + 70884158] = 1065353216;
                    dword_140404A6C[3 * g_1510AB760 + 70884159] = 1065353216;
                    dword_140404A6C[3 * g_1510AB760 + 70884160] = 1065353216;
                    if ( (unsigned int)(iteration_count_5 - 1) <= 3 && (_DWORD)masked_bits_2 == state_word_3 )
                      *(float *)&dword_140404A6C[3 * g_1510AB760 + 70835008] = saved_loaded_word;
                    ++buffer_cursor;
                    dword_140404A6C[4 * (int)g_1512DB764 + 70998847 + element_index_2++] = g_1510AB760;
                    state_word_2 = ++g_1510AB760;
                    --remaining_count;
                  }
                  while ( remaining_count );
                  running_total_2 = saved_running_total_2;
                  record_byte_offset_2 = saved_record_byte_offset_4;
                  if ( iteration_count_5 == 5 && hibyte_result_2 )
                  {
                    remaining_count_2 = hibyte_result_2;
                    do
                    {
                      scaled_index_7 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998847];
                      scaled_index_8 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847] + 70835006];
                      scaled_index_9 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847] + 70835007];
                      scaled_index_10 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                      dword_140404A6C[scaled_index_7 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * g_1512DB764
                                                                                      + 70998850]
                                                                      + 70835006];
                      dword_140404A6C[scaled_index_7 + 70835007] = dword_140404A6C[scaled_index_10 + 70835007];
                      scaled_index_11 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                      scaled_index_12 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                      dword_140404A6C[scaled_index_12 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * g_1512DB764
                                                                                      + 70998849]
                                                                      + 70835006];
                      dword_140404A6C[scaled_index_12 + 70835007] = dword_140404A6C[scaled_index_11 + 70835007];
                      scaled_index_13 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                      scaled_index_14 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                      dword_140404A6C[scaled_index_14 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * g_1512DB764
                                                                                      + 70998848]
                                                                      + 70835006];
                      dword_140404A6C[scaled_index_14 + 70835007] = dword_140404A6C[scaled_index_13 + 70835007];
                      scaled_index_15 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                      dword_140404A6C[scaled_index_15 + 70835006] = scaled_index_8;
                      dword_140404A6C[scaled_index_15 + 70835007] = scaled_index_9;
                      --remaining_count_2;
                    }
                    while ( remaining_count_2 );
                  }
                  loaded_word = state_word_8;
                  scaled_index = cached_scaled_index_2;
                  dword_140404A6C[g_1512DB764 + 71064383] = masked_bits_2;
                  scaled_index_16 = 3LL * (int)g_1512DB764;
                  dword_140404A6C[scaled_index_16 + 71113535] = integer_quotient;
                  dword_140404A6C[scaled_index_16 + 71113536] = integer_quotient_2;
                  dword_140404A6C[scaled_index_16 + 71113537] = integer_quotient_3;
                  ++g_1512DB764;
                  state_word_2 = g_1510AB760;
                }
                record_byte_offset_2 += 4;
                rol4_result = __ROL4__(rol4_result, 1);
                running_total_2 += 2;
                saved_record_byte_offset_4 = record_byte_offset_2;
                ++iteration_count_5;
                saved_running_total_2 = running_total_2;
                running_total += 12LL;
              }
              while ( iteration_count_5 < 6 );
              state_word = g_15155B7B0;
              converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
              converted_vector_7 = saved_converted_vector_2;
              converted_vector_5 = saved_converted_vector_3;
              bit_mask = saved_bit_mask;
              iteration_count_2 = saved_iteration_count_5;
              iteration_count_3 = saved_iteration_count_4;
              iteration_count = saved_iteration_count_3;
              record_byte_offset = saved_record_byte_offset_3;
            }
            else if ( (loaded_word & 0xE0000000) == 0x80000000 )
            {
              element_index_3 = 0;
              if ( state_word <= 0 )
              {
LABEL_38:
                masked_bits_3 = *(unsigned int *)((char *)&g_154167258 + bit_mask);
                hibyte_result = HIBYTE(loaded_word) & 3;
                hibyte_result_2 = hibyte_result;
                scaled_index_17 = iteration_count_3 + 8 * masked_bits_3;
                masked_bits_4 = *(unsigned int *)((char *)&g_15416725C + bit_mask);
                dword_140404A6C[3 * state_word + 71654226] = scaled_index_17;
                scaled_index_18 = iteration_count + 8 * masked_bits_4;
                masked_bits_5 = *(unsigned int *)((char *)&g_154167260 + bit_mask);
                dword_140404A6C[3 * g_15155B7B0 + 71654227] = scaled_index_18;
                element_index_4 = 0;
                scaled_index_19 = iteration_count_2 + 8 * masked_bits_5;
                saved_record_byte_offset = record_byte_offset_9;
                dword_140404A6C[3 * g_15155B7B0 + 71654228] = scaled_index_19;
                state_word = g_15155B7B0 + 1;
                scaled_index_20 = 6930LL * (int)input_value;
                ++g_15155B7B0;
                scaled_index_21 = 4 * (iteration_count_3 + 8 * (iteration_count_2 + saved_record_byte_offset));
                do
                {
                  scaled_index_22 = 2LL * element_index_4;
                  masked_bits_6 = *((_WORD *)&dword_140404A6C[scaled_index_20 + 83195383 + scaled_index_21] + element_index_4);
                  *(_WORD *)&callee_output_word[scaled_index_22 - 1] = masked_bits_6;
                  if ( scaled_index_22 >= 0x10 )
LABEL_162:
                    sub_1401F8694();
                  scratch_buffer[element_index_4] = 0;
                  if ( (masked_bits_6 & 0x4000) != 0 )
                    scratch_buffer[element_index_4] = HIBYTE(masked_bits_6) & 0x1F;
                  ++element_index_4;
                  callee_output_word[scaled_index_22] = 0;
                }
                while ( element_index_4 < 8 );
                state_word_2 = g_1510AB760;
                scaled_index_23 = 58LL * (unsigned __int16)loaded_word;
                state_word_4 = g_1510AB760;
                state_word_8 = g_1510AB760;
                table_value = dword_140404A6C[scaled_index_23 + 20074613];
                if ( table_value > 0 )
                {
                  masked_bits_7 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074615];
                  weighted_sum_12 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + scaled_index);
                  record_byte_offset_3 = 0;
                  masked_bits_8 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074619];
                  weighted_sum_13 = *(float *)((char *)&g_15ADA9244 + scaled_index);
                  weighted_sum_14 = *(float *)((char *)&g_15ADA9248 + scaled_index);
                  weighted_sum_15 = (float *)(masked_bits_7 + 8);
                  weighted_sum_16 = *(float *)((char *)&g_15ADA924C + scaled_index);
                  remaining_count_3 = (unsigned int)table_value;
                  cached_converted_vector_4 = saved_converted_vector;
                  converted_vector_8 = _mm_cvtsi32_si128(iteration_count_3);
                  masked_bits_9 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074617];
                  converted_vector_9 = _mm_cvtsi32_si128(iteration_count_2);
                  masked_bits_10 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074621];
                  running_total_3 = (unsigned int *)(masked_bits_8 + 8);
                  integer_difference = masked_bits_8 - masked_bits_7;
                  running_total_4 = (unsigned int *)(masked_bits_9 + 8);
                  integer_difference_2 = masked_bits_9 - masked_bits_7;
                  converted_vector_10 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_8), f32)[0];
                  cached_iteration_count_4 = (float)saved_iteration_count_3;
                  converted_vector_11 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_9), f32)[0];
                  do
                  {
                    *(float *)&dword_140404A6C[3 * state_word_2 + 70687550] = (float)(converted_vector_10 + *(weighted_sum_15 - 2)) * weighted_sum_12;
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] = (float)(cached_iteration_count_4 + *(weighted_sum_15 - 1))
                                                                                         * weighted_sum_12;
                    *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] = (float)(converted_vector_11 + *weighted_sum_15) * weighted_sum_12;
                    dword_140404A6C[g_1510AB760 + 70933310] = (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687550];
                    dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] << 10;
                    dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] << 20;
                    scaled_index_24 = 3LL * (int)g_1510AB760;
                    *(float *)&dword_140404A6C[scaled_index_24 + 70687550] = cached_converted_vector_4
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * g_1510AB760
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[scaled_index_24 + 70687551] = converted_vector_7 + *(float *)&dword_140404A6C[scaled_index_24 + 70687551];
                    *(float *)&dword_140404A6C[scaled_index_24 + 70687552] = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_24 + 70687552];
                    scaled_index_25 = 3LL * (int)g_1510AB760;
                    *(float *)&dword_140404A6C[scaled_index_25 + 70687550] = weighted_sum_13
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * g_1510AB760
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[scaled_index_25 + 70687551] = weighted_sum_14 + *(float *)&dword_140404A6C[scaled_index_25 + 70687551];
                    *(float *)&dword_140404A6C[scaled_index_25 + 70687552] = weighted_sum_16 + *(float *)&dword_140404A6C[scaled_index_25 + 70687552];
                    scaled_index_26 = 3LL * (int)g_1510AB760;
                    dword_140404A6C[scaled_index_26 + 70736702] = *(_DWORD *)((char *)weighted_sum_15 + integer_difference_2 - 8);
                    dword_140404A6C[scaled_index_26 + 70736703] = *(running_total_4 - 1);
                    dword_140404A6C[scaled_index_26 + 70736704] = *running_total_4;
                    scaled_index_27 = 3LL * (int)g_1510AB760;
                    dword_140404A6C[scaled_index_27 + 70785854] = *(_DWORD *)((char *)weighted_sum_15 + integer_difference - 8);
                    dword_140404A6C[scaled_index_27 + 70785855] = *(running_total_3 - 1);
                    dword_140404A6C[scaled_index_27 + 70785856] = *running_total_3;
                    scaled_index_28 = 3LL * (int)g_1510AB760;
                    dword_140404A6C[scaled_index_28 + 70884158] = 1065353216;
                    dword_140404A6C[scaled_index_28 + 70884159] = 1065353216;
                    dword_140404A6C[scaled_index_28 + 70884160] = 1065353216;
                    dword_140404A6C[3 * g_1510AB760 + 70835006] = *(_DWORD *)(masked_bits_10 + record_byte_offset_3);
                    weighted_sum_15 += 3;
                    dword_140404A6C[3 * g_1510AB760 + 70835007] = *(_DWORD *)(masked_bits_10 + record_byte_offset_3 + 4);
                    running_total_4 += 3;
                    running_total_3 += 3;
                    record_byte_offset_3 += 8;
                    dword_140404A6C[3 * g_1510AB760 + 70835008] = 0;
                    state_word_2 = ++g_1510AB760;
                    --remaining_count_3;
                  }
                  while ( remaining_count_3 );
                  state_word = g_15155B7B0;
                  converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                  converted_vector_6 = saved_converted_vector;
                  state_word_4 = state_word_8;
                  hibyte_result = hibyte_result_2;
                }
                table_value_2 = dword_140404A6C[scaled_index_23 + 20074623];
                iteration_count_6 = 0;
                if ( table_value_2 > 0 )
                {
                  table_value_3 = dword_140404A6C[scaled_index_23 + 20074624];
                  record_byte_offset_4 = 0;
                  state_word_5 = g_1512DB764;
                  record_byte_offset_5 = 8;
                  do
                  {
                    if ( iteration_count_6 >= table_value_3 || (bit_mask_3 = *buffer_cursor_3, !_bittest(&bit_mask_3, iteration_count_6)) )
                    {
                      masked_bits_11 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074633];
                      masked_bits_12 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074631];
                      dword_140404A6C[4 * state_word_5 + 70998847] = state_word_4 + *(_DWORD *)(masked_bits_12 + record_byte_offset_5 - 8);
                      dword_140404A6C[4 * g_1512DB764 + 70998848] = state_word_4 + *(_DWORD *)(masked_bits_12 + record_byte_offset_5 - 4);
                      dword_140404A6C[4 * g_1512DB764 + 70998849] = state_word_4 + *(_DWORD *)(masked_bits_12 + record_byte_offset_5);
                      dword_140404A6C[4 * g_1512DB764 + 70998850] = state_word_4 + *(_DWORD *)(masked_bits_12 + record_byte_offset_5 + 4);
                      dword_140404A6C[g_1512DB764 + 71064383] = *(unsigned __int16 *)&callee_output_word[2 * *(unsigned __int8 *)(record_byte_offset_4 + masked_bits_11) - 1];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                               + 70835008] = (float)scratch_buffer[*(unsigned __int8 *)(record_byte_offset_4 + masked_bits_11)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998848]
                                               + 70835008] = (float)scratch_buffer[*(unsigned __int8 *)(record_byte_offset_4 + masked_bits_11)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998849]
                                               + 70835008] = (float)scratch_buffer[*(unsigned __int8 *)(record_byte_offset_4 + masked_bits_11)];
                      masked_bits_13 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074635];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998850]
                                               + 70835008] = (float)scratch_buffer[*(unsigned __int8 *)(record_byte_offset_4 + masked_bits_11)];
                      if ( (*(_BYTE *)(record_byte_offset_4 + masked_bits_13) & 1) != 0 )
                      {
                        if ( hibyte_result )
                        {
                          remaining_count_4 = hibyte_result;
                          do
                          {
                            scaled_index_29 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998847];
                            scaled_index_30 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                 + 70835006];
                            scaled_index_31 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                 + 70835007];
                            scaled_index_32 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                            dword_140404A6C[scaled_index_29 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * g_1512DB764
                                                                                             + 70998850]
                                                                             + 70835006];
                            dword_140404A6C[scaled_index_29 + 70835007] = dword_140404A6C[scaled_index_32 + 70835007];
                            scaled_index_33 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                            scaled_index_34 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                            dword_140404A6C[scaled_index_34 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * g_1512DB764
                                                                                             + 70998849]
                                                                             + 70835006];
                            dword_140404A6C[scaled_index_34 + 70835007] = dword_140404A6C[scaled_index_33 + 70835007];
                            scaled_index_35 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                            scaled_index_36 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                            dword_140404A6C[scaled_index_36 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * g_1512DB764
                                                                                             + 70998848]
                                                                             + 70835006];
                            dword_140404A6C[scaled_index_36 + 70835007] = dword_140404A6C[scaled_index_35 + 70835007];
                            scaled_index_37 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                            dword_140404A6C[scaled_index_37 + 70835006] = scaled_index_30;
                            dword_140404A6C[scaled_index_37 + 70835007] = scaled_index_31;
                            --remaining_count_4;
                          }
                          while ( remaining_count_4 );
                        }
                        xor_vector = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), converted_vector_2);
                        xor_vector_2 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), converted_vector_2);
                        xor_vector_3 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        xor_vector_4 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), converted_vector_2);
                        xor_vector_5 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        xor_vector_6 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        remaining_count_5 = ((_BYTE)hibyte_result + (unsigned __int8)(*(int *)(record_byte_offset_4 + masked_bits_11) >> 12)) & 3;
                        if ( (((_BYTE)hibyte_result + (unsigned __int8)(*(int *)(record_byte_offset_4 + masked_bits_11) >> 12)) & 3) != 0 )
                        {
                          do
                          {
                            saved_xor_vector = xor_vector_6;
                            saved_xor_vector_2 = xor_vector_5;
                            saved_xor_vector_3 = xor_vector_3;
                            xor_vector_3 = _mm_xor_ps(xor_vector, converted_vector_2);
                            xor_vector_5 = _mm_xor_ps(xor_vector_2, converted_vector_2);
                            xor_vector_6 = _mm_xor_ps(xor_vector_4, converted_vector_2);
                            xor_vector = saved_xor_vector_3;
                            xor_vector_2 = saved_xor_vector_2;
                            xor_vector_4 = saved_xor_vector;
                            --remaining_count_5;
                          }
                          while ( remaining_count_5 );
                        }
                        weighted_sum_17 = *(float *)((char *)(unsigned int *)&g_15ADA9284 + cached_scaled_index_2);
                        weighted_sum_18 = *(float *)((char *)&g_15ADA9244 + cached_scaled_index_2);
                        weighted_sum_19 = *(float *)((char *)&g_15ADA9248 + cached_scaled_index_2);
                        weighted_sum_20 = *(float *)((char *)&g_15ADA924C + cached_scaled_index_2);
                        scaled_index_38 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998847];
                        state_address_4 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687550]
                                     - converted_vector_6)
                             - weighted_sum_18;
                        state_address_5 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687551]
                                     - saved_converted_vector_2)
                             - weighted_sum_19;
                        state_address_6 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687552]
                                     - saved_converted_vector_3)
                             - weighted_sum_20;
                        *(float *)&dword_140404A6C[scaled_index_38 + 70835006] = (float)((float)((float)(state_address_4 * SR_VEC_LANES(128, xor_vector_3, f32)[0])
                                                                                    + (float)(state_address_5 * SR_VEC_LANES(128, xor_vector_5, f32)[0]))
                                                                            + (float)(state_address_6 * SR_VEC_LANES(128, xor_vector_6, f32)[0]))
                                                                    * weighted_sum_17;
                        *(float *)&dword_140404A6C[scaled_index_38 + 70835007] = (float)((float)((float)(state_address_4 * SR_VEC_LANES(128, xor_vector, f32)[0])
                                                                                    + (float)(state_address_5 * SR_VEC_LANES(128, xor_vector_2, f32)[0]))
                                                                            + (float)(state_address_6 * SR_VEC_LANES(128, xor_vector_4, f32)[0]))
                                                                    * weighted_sum_17;
                        scaled_index_39 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                        state_address_7 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687550]
                                     - saved_converted_vector)
                             - weighted_sum_18;
                        state_address_8 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687551]
                                     - saved_converted_vector_2)
                             - weighted_sum_19;
                        state_address_9 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687552]
                                     - saved_converted_vector_3)
                             - weighted_sum_20;
                        *(float *)&dword_140404A6C[scaled_index_39 + 70835006] = (float)((float)((float)(state_address_7 * SR_VEC_LANES(128, xor_vector_3, f32)[0])
                                                                                    + (float)(state_address_8 * SR_VEC_LANES(128, xor_vector_5, f32)[0]))
                                                                            + (float)(state_address_9 * SR_VEC_LANES(128, xor_vector_6, f32)[0]))
                                                                    * weighted_sum_17;
                        *(float *)&dword_140404A6C[scaled_index_39 + 70835007] = (float)((float)((float)(state_address_7 * SR_VEC_LANES(128, xor_vector, f32)[0])
                                                                                    + (float)(state_address_8 * SR_VEC_LANES(128, xor_vector_2, f32)[0]))
                                                                            + (float)(state_address_9 * SR_VEC_LANES(128, xor_vector_4, f32)[0]))
                                                                    * weighted_sum_17;
                        scaled_index_40 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                        state_address_10 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687550]
                                     - saved_converted_vector)
                             - weighted_sum_18;
                        state_address_11 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687551]
                                     - saved_converted_vector_2)
                             - weighted_sum_19;
                        state_address_12 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687552]
                                     - saved_converted_vector_3)
                             - weighted_sum_20;
                        *(float *)&dword_140404A6C[scaled_index_40 + 70835006] = (float)((float)((float)(state_address_10 * SR_VEC_LANES(128, xor_vector_3, f32)[0])
                                                                                    + (float)(state_address_11 * SR_VEC_LANES(128, xor_vector_5, f32)[0]))
                                                                            + (float)(state_address_12 * SR_VEC_LANES(128, xor_vector_6, f32)[0]))
                                                                    * weighted_sum_17;
                        *(float *)&dword_140404A6C[scaled_index_40 + 70835007] = (float)((float)((float)(state_address_10 * SR_VEC_LANES(128, xor_vector, f32)[0])
                                                                                    + (float)(state_address_11 * SR_VEC_LANES(128, xor_vector_2, f32)[0]))
                                                                            + (float)(state_address_12 * SR_VEC_LANES(128, xor_vector_4, f32)[0]))
                                                                    * weighted_sum_17;
                        scaled_index_41 = (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                        state_address_13 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_41 + 70687550] - saved_converted_vector) - weighted_sum_18;
                        state_address_14 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_41 + 70687551] - saved_converted_vector_2) - weighted_sum_19;
                        state_address_15 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_41 + 70687552] - saved_converted_vector_3) - weighted_sum_20;
                        *(float *)&dword_140404A6C[3 * scaled_index_41 + 70835006] = (float)((float)((float)(state_address_13 * SR_VEC_LANES(128, xor_vector_3, f32)[0])
                                                                                        + (float)(state_address_14 * SR_VEC_LANES(128, xor_vector_5, f32)[0]))
                                                                                + (float)(state_address_15 * SR_VEC_LANES(128, xor_vector_6, f32)[0]))
                                                                        * weighted_sum_17;
                        *(float *)&dword_140404A6C[3 * scaled_index_41 + 70835007] = (float)((float)((float)(state_address_13 * SR_VEC_LANES(128, xor_vector, f32)[0])
                                                                                        + (float)(state_address_14 * SR_VEC_LANES(128, xor_vector_2, f32)[0]))
                                                                                + (float)(state_address_15 * SR_VEC_LANES(128, xor_vector_4, f32)[0]))
                                                                        * weighted_sum_17;
                      }
                      weighted_sum_21 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                      + 70687550];
                      weighted_sum_22 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                      + 70687551];
                      weighted_sum_23 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                      + 70687552];
                      combined_products = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998848]
                                                      + 70687550]
                           - weighted_sum_21;
                      combined_products_2 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998848]
                                                      + 70687551]
                           - weighted_sum_22;
                      combined_products_3 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998848]
                                                      + 70687552]
                           - weighted_sum_23;
                      combined_products_4 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998849]
                                                      + 70687551]
                           - weighted_sum_22;
                      combined_products_5 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998849]
                                                      + 70687552]
                           - weighted_sum_23;
                      combined_products_6 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998849]
                                                      + 70687550]
                           - weighted_sum_21;
                      state_address_16 = (float *)&dword_140404A6C[3LL * (int)g_1512DB764 + 71113535];
                      *state_address_16 = (float)(combined_products_4 * combined_products_3) - (float)(combined_products_5 * combined_products_2);
                      state_address_16[1] = (float)(combined_products * combined_products_5) - (float)(combined_products_6 * combined_products_3);
                      state_address_16[2] = (float)(combined_products_6 * combined_products_2) - (float)(combined_products * combined_products_4);
                      sr_math_vec3_normalize((__int64)state_address_16, state_address_16);
                      converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                      state_word_5 = ++g_1512DB764;
                    }
                    converted_vector_6 = saved_converted_vector;
                    ++iteration_count_6;
                    record_byte_offset_5 += 16;
                    record_byte_offset_4 += 4;
                  }
                  while ( iteration_count_6 < table_value_2 );
                  state_word = g_15155B7B0;
                  state_word_2 = g_1510AB760;
                  converted_vector_7 = saved_converted_vector_2;
                  converted_vector_5 = saved_converted_vector_3;
                }
                table_value_4 = dword_140404A6C[scaled_index_23 + 20074639];
                if ( table_value_4 > 0 )
                {
                  remaining_count_6 = (unsigned int)table_value_4;
                  record_byte_offset_6 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074643];
                  record_byte_offset_7 = *(_QWORD *)&dword_140404A6C[scaled_index_23 + 20074641] + 8LL;
                  state_word_6 = g_15138B768;
                  do
                  {
                    loaded_word_3 = *(_DWORD *)(record_byte_offset_7 - 8);
                    record_byte_offset_7 += 12;
                    record_byte_offset_6 += 4;
                    dword_140404A6C[3 * state_word_6 + 71179072] = state_word_4 + loaded_word_3;
                    dword_140404A6C[3 * g_15138B768 + 71179073] = state_word_4 + *(_DWORD *)(record_byte_offset_7 - 16);
                    dword_140404A6C[3 * g_15138B768 + 71179074] = state_word_4 + *(_DWORD *)(record_byte_offset_7 - 12);
                    dword_140404A6C[g_15138B768 + 71277377] = *(unsigned __int16 *)&callee_output_word[2 * *(int *)(record_byte_offset_6 - 4) - 1];
                    state_word_6 = ++g_15138B768;
                    --remaining_count_6;
                  }
                  while ( remaining_count_6 );
                  state_word = g_15155B7B0;
                  state_word_2 = g_1510AB760;
                }
                bit_mask = saved_bit_mask;
                iteration_count_2 = saved_iteration_count_5;
                iteration_count_3 = saved_iteration_count_4;
                iteration_count = saved_iteration_count_3;
                record_byte_offset = saved_record_byte_offset_3;
              }
              else
              {
                while ( iteration_count_3 + 8 * *(unsigned int *)((char *)&g_154167258 + bit_mask) != dword_140404A6C[3 * element_index_3 + 71654226]
                     || iteration_count + 8 * *(unsigned int *)((char *)&g_15416725C + bit_mask) != dword_140404A6C[3 * element_index_3 + 71654227]
                     || iteration_count_2 + 8 * *(unsigned int *)((char *)&g_154167260 + bit_mask) != dword_140404A6C[3 * element_index_3 + 71654228] )
                {
                  if ( ++element_index_3 >= state_word )
                    goto LABEL_38;
                }
              }
            }
            ++iteration_count_3;
            converted_vector_6 = saved_converted_vector;
            state_address = (char *)(buffer_cursor_3 + 1);
            scaled_index = cached_scaled_index_2;
            record_byte_offset += 16;
            saved_iteration_count_4 = iteration_count_3;
            ++buffer_cursor_3;
            saved_record_byte_offset_3 = record_byte_offset;
          }
          while ( iteration_count_3 < 8 );
          ++iteration_count_2;
          state_address = record_byte_offset_10 + 32;
          saved_state_address = saved_state_address_2 + 128;
          saved_iteration_count_5 = iteration_count_2;
          record_byte_offset_10 += 32;
          saved_state_address_2 += 128;
        }
        while ( iteration_count_2 < 8 );
        ++iteration_count;
        state_address = state_address_20 + 256;
        state_address_2 = saved_state_address_3 + 1024;
        saved_iteration_count_3 = iteration_count;
        record_byte_offset_9 += 8;
        state_address_20 += 256;
        saved_state_address_3 += 1024;
      }
      while ( record_byte_offset_9 < 64 );
      sub_140184BB0();
      for ( i = 0; i < (int)g_1512DB764; ++g_15138B768 )
      {
        integer_sum = i++;
        dword_140404A6C[3 * g_15138B768 + 71179072] = dword_140404A6C[4 * integer_sum + 70998847];
        dword_140404A6C[3 * g_15138B768 + 71179073] = dword_140404A6C[4 * integer_sum + 70998848];
        dword_140404A6C[3 * g_15138B768 + 71179074] = dword_140404A6C[4 * integer_sum + 70998849];
        scaled_index_42 = 3LL * (int)dword_140404A6C[4 * integer_sum + 70998847];
        scaled_index_43 = 3LL * (int)g_15138B768;
        dword_140404A6C[scaled_index_43 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * integer_sum + 70998847] + 70736702];
        dword_140404A6C[scaled_index_43 + 71310146] = dword_140404A6C[scaled_index_42 + 70736703];
        dword_140404A6C[scaled_index_43 + 71310147] = dword_140404A6C[scaled_index_42 + 70736704];
        dword_140404A6C[g_15138B768 + 71277377] = dword_140404A6C[integer_sum + 71064383];
        ++g_15138B768;
        dword_140404A6C[3 * g_15138B768 + 71179072] = dword_140404A6C[4 * integer_sum + 70998847];
        dword_140404A6C[3 * g_15138B768 + 71179073] = dword_140404A6C[4 * integer_sum + 70998849];
        dword_140404A6C[3 * g_15138B768 + 71179074] = dword_140404A6C[4 * integer_sum + 70998850];
        scaled_index_44 = 3LL * (int)dword_140404A6C[4 * integer_sum + 70998847];
        scaled_index_45 = 3LL * (int)g_15138B768;
        dword_140404A6C[scaled_index_45 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * integer_sum + 70998847] + 70736702];
        dword_140404A6C[scaled_index_45 + 71310146] = dword_140404A6C[scaled_index_44 + 70736703];
        dword_140404A6C[scaled_index_45 + 71310147] = dword_140404A6C[scaled_index_44 + 70736704];
        dword_140404A6C[g_15138B768 + 71277377] = dword_140404A6C[integer_sum + 71064383];
      }
      remaining_count_7 = g_1510AB760;
      iteration_count_7 = 0;
      while ( iteration_count_7 < remaining_count_7 )
      {
        iteration_count_8 = 0;
        if ( (int)g_15138B768 <= 0 )
        {
LABEL_75:
          g_1510AB760 = --remaining_count_7;
          if ( iteration_count_7 >= remaining_count_7 )
            break;
          scaled_index_46 = 3LL * iteration_count_7;
          dword_140404A6C[scaled_index_46 + 70687550] = dword_140404A6C[3 * remaining_count_7 + 70687550];
          dword_140404A6C[scaled_index_46 + 70687551] = dword_140404A6C[3 * remaining_count_7 + 70687551];
          dword_140404A6C[scaled_index_46 + 70687552] = dword_140404A6C[3 * remaining_count_7 + 70687552];
          scaled_index_47 = 3LL * (int)g_1510AB760;
          dword_140404A6C[scaled_index_46 + 70736702] = dword_140404A6C[3 * g_1510AB760 + 70736702];
          dword_140404A6C[scaled_index_46 + 70736703] = dword_140404A6C[scaled_index_47 + 70736703];
          dword_140404A6C[scaled_index_46 + 70736704] = dword_140404A6C[scaled_index_47 + 70736704];
          scaled_index_48 = 3LL * (int)g_1510AB760;
          dword_140404A6C[scaled_index_46 + 70785854] = dword_140404A6C[3 * g_1510AB760 + 70785854];
          dword_140404A6C[scaled_index_46 + 70785855] = dword_140404A6C[scaled_index_48 + 70785855];
          dword_140404A6C[scaled_index_46 + 70785856] = dword_140404A6C[scaled_index_48 + 70785856];
          dword_140404A6C[scaled_index_46 + 70835006] = dword_140404A6C[3 * g_1510AB760 + 70835006];
          dword_140404A6C[scaled_index_46 + 70835007] = dword_140404A6C[3 * g_1510AB760 + 70835007];
          dword_140404A6C[scaled_index_46 + 70835008] = dword_140404A6C[3 * g_1510AB760 + 70835008];
          scaled_index_49 = 3LL * (int)g_1510AB760;
          dword_140404A6C[scaled_index_46 + 70884158] = dword_140404A6C[3 * g_1510AB760 + 70884158];
          dword_140404A6C[scaled_index_46 + 70884159] = dword_140404A6C[scaled_index_49 + 70884159];
          table_value_5 = dword_140404A6C[scaled_index_49 + 70884160];
          iteration_count_9 = 0;
          dword_140404A6C[scaled_index_46 + 70884160] = table_value_5;
          remaining_count_7 = g_1510AB760;
          if ( (int)g_15138B768 > 0 )
          {
            saved_iteration_count = &g_15138B770;
            do
            {
              if ( *(saved_iteration_count - 1) == remaining_count_7 )
              {
                *(saved_iteration_count - 1) = iteration_count_7;
                remaining_count_7 = g_1510AB760;
              }
              if ( *saved_iteration_count == remaining_count_7 )
              {
                *saved_iteration_count = iteration_count_7;
                remaining_count_7 = g_1510AB760;
              }
              if ( saved_iteration_count[1] == remaining_count_7 )
              {
                saved_iteration_count[1] = iteration_count_7;
                remaining_count_7 = g_1510AB760;
              }
              ++iteration_count_9;
              saved_iteration_count += 3;
            }
            while ( iteration_count_9 < (int)g_15138B768 );
          }
        }
        else
        {
          state_address_17 = &g_15138B770;
          while ( *(state_address_17 - 1) != iteration_count_7 && *state_address_17 != iteration_count_7 && state_address_17[1] != iteration_count_7 )
          {
            ++iteration_count_8;
            state_address_17 += 3;
            if ( iteration_count_8 >= (int)g_15138B768 )
              goto LABEL_75;
          }
          ++iteration_count_7;
        }
      }
      saved_remaining_count = g_16B27E3B8;
      iteration_count_10 = 0;
      if ( (int)g_16B27E3B8 < remaining_count_7 )
        saved_remaining_count = remaining_count_7;
      g_16B27E3B8 = saved_remaining_count;
      if ( remaining_count_7 > 0 )
      {
        record_byte_offset_8 = 0;
        do
        {
          saved_record_byte_offset_2 = record_byte_offset_8;
          record_byte_offset_8 += 16;
          integer_sum_2 = iteration_count_10++;
          *(_QWORD *)&dword_140404A6C[saved_record_byte_offset_2 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_2 + 70687550];
          dword_140404A6C[saved_record_byte_offset_2 + 70425408] = dword_140404A6C[3 * integer_sum_2 + 70687552];
          *(_QWORD *)&dword_140404A6C[saved_record_byte_offset_2 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_2 + 70736702];
          dword_140404A6C[saved_record_byte_offset_2 + 70425411] = dword_140404A6C[3 * integer_sum_2 + 70736704];
          *(_QWORD *)&dword_140404A6C[saved_record_byte_offset_2 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_2 + 70785854];
          dword_140404A6C[saved_record_byte_offset_2 + 70425414] = dword_140404A6C[3 * integer_sum_2 + 70785856];
          *(_QWORD *)&dword_140404A6C[saved_record_byte_offset_2 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_2 + 70835006];
          dword_140404A6C[saved_record_byte_offset_2 + 70425417] = dword_140404A6C[3 * integer_sum_2 + 70835008];
          remaining_count_7 = g_1510AB760;
        }
        while ( iteration_count_10 < (int)g_1510AB760 );
      }
      cached_input_value = input_value;
      sub_140193FE0(1, input_value, (__int64)&g_1510AB764, remaining_count_7 << 6);
      state_word_7 = g_15138B768;
      iteration_count_11 = 0;
      *(unsigned int *)((char *)&g_15416726C + bit_mask) = g_15138B768;
      if ( state_word_7 > 0 )
      {
        running_total_5 = 0;
        do
        {
          saved_running_total = running_total_5;
          ++iteration_count_11;
          running_total_5 += 3;
          *(_QWORD *)&dword_140404A6C[saved_running_total + 71359297] = -1;
          dword_140404A6C[saved_running_total + 71359299] = -1;
          state_word_7 = g_15138B768;
        }
        while ( iteration_count_11 < (int)g_15138B768 );
      }
      iteration_count_12 = 0;
      if ( state_word_7 > 0 )
      {
        running_total_6 = 0;
        do
        {
          iteration_count_13 = 0;
          if ( state_word_7 > 0 )
          {
            state_address_18 = &g_15146B77C;
            saved_iteration_count_2 = &g_15143B770;
            do
            {
              if ( iteration_count_12 != iteration_count_13 )
              {
                element_index_5 = 0;
                for ( j = 0; j < 3; ++j )
                {
                  integer_sum_3 = running_total_6 + element_index_5;
                  if ( dword_140404A6C[running_total_6 + 71359297 + element_index_5] == -1 )
                  {
                    if ( *saved_iteration_count_2 == -1 )
                    {
                      scaled_index_50 = 3LL * iteration_count_12;
                      scaled_index_51 = (int)*(saved_iteration_count_2 - 180224);
                      if ( fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_50] + 70687550]
                           - *(float *)&dword_140404A6C[3 * scaled_index_51 + 70687550]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_50] + 70687551]
                           - *(float *)&dword_140404A6C[3 * scaled_index_51 + 70687551]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_50] + 70687552]
                           - *(float *)&dword_140404A6C[3 * scaled_index_51 + 70687552]) < 0.000099999997 )
                      {
                        scaled_index_52 = (int)*(saved_iteration_count_2 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_50 + 71179072 + (element_index_5 + 1) % 3]
                                                        + 70687550]
                             - *(float *)&dword_140404A6C[3 * scaled_index_52 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_50 + 71179072 + (element_index_5 + 1) % 3]
                                                        + 70687551]
                             - *(float *)&dword_140404A6C[3 * scaled_index_52 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_50 + 71179072 + (element_index_5 + 1) % 3]
                                                        + 70687552]
                             - *(float *)&dword_140404A6C[3 * scaled_index_52 + 70687552]) < 0.000099999997 )
                        {
                          dword_140404A6C[integer_sum_3 + 71359297] = iteration_count_13;
                          dword_140404A6C[2 * integer_sum_3 + 71408450] = 2;
                          *saved_iteration_count_2 = iteration_count_12;
                          *(state_address_18 - 2) = (element_index_5 + 2) % 3;
                        }
                      }
                    }
                    if ( dword_140404A6C[integer_sum_3 + 71359297] == -1 )
                    {
                      if ( saved_iteration_count_2[1] == -1 )
                      {
                        scaled_index_53 = 3LL * iteration_count_12;
                        scaled_index_54 = (int)*(saved_iteration_count_2 - 180223);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_53] + 70687550]
                             - *(float *)&dword_140404A6C[3 * scaled_index_54 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_53] + 70687551]
                             - *(float *)&dword_140404A6C[3 * scaled_index_54 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_53] + 70687552]
                             - *(float *)&dword_140404A6C[3 * scaled_index_54 + 70687552]) < 0.000099999997 )
                        {
                          scaled_index_55 = (int)*(saved_iteration_count_2 - 180224);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_53 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * scaled_index_55 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_53 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * scaled_index_55 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_53 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * scaled_index_55 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[integer_sum_3 + 71359297] = iteration_count_13;
                            dword_140404A6C[2 * integer_sum_3 + 71408450] = 0;
                            saved_iteration_count_2[1] = iteration_count_12;
                            *state_address_18 = (element_index_5 + 2) % 3;
                          }
                        }
                      }
                      if ( dword_140404A6C[integer_sum_3 + 71359297] == -1 && saved_iteration_count_2[2] == -1 )
                      {
                        scaled_index_56 = 3LL * iteration_count_12;
                        scaled_index_57 = (int)*(saved_iteration_count_2 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_56] + 70687550]
                             - *(float *)&dword_140404A6C[3 * scaled_index_57 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_56] + 70687551]
                             - *(float *)&dword_140404A6C[3 * scaled_index_57 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + scaled_index_56] + 70687552]
                             - *(float *)&dword_140404A6C[3 * scaled_index_57 + 70687552]) < 0.000099999997 )
                        {
                          scaled_index_58 = (int)*(saved_iteration_count_2 - 180223);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_56 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * scaled_index_58 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_56 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * scaled_index_58 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[scaled_index_56 + 71179072 + (element_index_5 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * scaled_index_58 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[integer_sum_3 + 71359297] = iteration_count_13;
                            dword_140404A6C[2 * integer_sum_3 + 71408450] = 1;
                            saved_iteration_count_2[2] = iteration_count_12;
                            state_address_18[2] = (element_index_5 + 2) % 3;
                          }
                        }
                      }
                    }
                  }
                  ++element_index_5;
                }
                state_word_7 = g_15138B768;
              }
              ++iteration_count_13;
              saved_iteration_count_2 += 3;
              state_address_18 += 6;
            }
            while ( iteration_count_13 < state_word_7 );
          }
          ++iteration_count_12;
          running_total_6 += 3;
        }
        while ( iteration_count_12 < state_word_7 );
        bit_mask = saved_bit_mask;
        cached_input_value = input_value;
      }
      element_index_6 = 0;
      if ( state_word_7 > 0 )
      {
        running_total_7 = 0;
        running_total_8 = 3;
        do
        {
          dword_140404A6C[running_total_8 + 71408446] = dword_140404A6C[3 * element_index_6 + 71179072];
          integer_difference_3 = running_total_8 - 2;
          table_value_6 = dword_140404A6C[running_total_7 + 71359297];
          if ( table_value_6 == -1 )
          {
            scaled_index_59 = dword_140404A6C[3 * element_index_6 + 71179072];
          }
          else
          {
            table_value_7 = dword_140404A6C[integer_difference_3 + 71408449];
            if ( table_value_7 > 2 )
            {
              dword_140404A6C[integer_difference_3 + 71408449] = 0;
              table_value_7 = 0;
              table_value_6 = dword_140404A6C[running_total_7 + 71359297];
            }
            scaled_index_59 = dword_140404A6C[3 * table_value_6 + 71179072 + table_value_7];
          }
          dword_140404A6C[running_total_8 + 71408447] = scaled_index_59;
          dword_140404A6C[running_total_8 + 71408448] = dword_140404A6C[3 * element_index_6 + 71179073];
          if ( dword_140404A6C[running_total_7 + 71359298] == -1 )
          {
            scaled_index_60 = dword_140404A6C[3 * element_index_6 + 71179073];
          }
          else
          {
            table_value_8 = dword_140404A6C[running_total_8 + 71408449];
            if ( table_value_8 > 2 )
            {
              dword_140404A6C[running_total_8 + 71408449] = 0;
              table_value_8 = 0;
            }
            scaled_index_60 = dword_140404A6C[3 * dword_140404A6C[running_total_7 + 71359298] + 71179072 + table_value_8];
          }
          dword_140404A6C[running_total_8 + 71408449] = scaled_index_60;
          dword_140404A6C[running_total_8 + 71408450] = dword_140404A6C[3 * element_index_6 + 71179074];
          if ( dword_140404A6C[running_total_7 + 71359299] == -1 )
          {
            scaled_index_61 = dword_140404A6C[3 * element_index_6 + 71179074];
          }
          else
          {
            table_value_9 = dword_140404A6C[running_total_8 + 71408451];
            if ( table_value_9 > 2 )
            {
              dword_140404A6C[running_total_8 + 71408451] = 0;
              table_value_9 = 0;
            }
            scaled_index_61 = dword_140404A6C[3 * dword_140404A6C[running_total_7 + 71359299] + 71179072 + table_value_9];
          }
          dword_140404A6C[running_total_8 + 71408451] = scaled_index_61;
          ++element_index_6;
          state_word_7 = g_15138B768;
          running_total_7 += 3;
          running_total_8 += 6;
        }
        while ( element_index_6 < (int)g_15138B768 );
      }
      scaled_index_62 = 2310LL * cached_input_value;
      integer_sum_4 = 0;
      g_1513BB76C = 0;
      LODWORD(masked_bits_14) = 0;
      *(unsigned int *)((char *)&g_154167270 + bit_mask) = 0;
      for ( k = 0; k < 256; ++k )
      {
        iteration_count_14 = 0;
        LOBYTE(dword_140404A6C[3 * scaled_index_62 + 83200514 + 3 * (int)masked_bits_14]) = k;
        dword_140404A6C[3 * scaled_index_62 + 83200515 + 3 * *(int *)((char *)&g_154167270 + bit_mask)] = 0;
        dword_140404A6C[3 * scaled_index_62 + 83200516 + 3 * *(int *)((char *)&g_154167270 + bit_mask)] = integer_sum_4;
        if ( state_word_7 > 0 )
        {
          state_address_19 = &g_15138B76C;
          buffer_cursor_2 = &g_1513EB770;
          do
          {
            if ( *buffer_cursor_2 == k )
            {
              scaled_index_63 = (int)(3 * integer_sum_4);
              *(_QWORD *)&dword_140404A6C[scaled_index_63 + 71228225] = *(_QWORD *)state_address_19;
              dword_140404A6C[scaled_index_63 + 71228227] = state_address_19[2];
              masked_bits_15 = scaled_index_62 + *(int *)((char *)&g_154167270 + bit_mask);
              state_word_7 = g_15138B768;
              integer_sum_4 = ++g_1513BB76C;
              ++dword_140404A6C[3 * masked_bits_15 + 83200515];
            }
            ++iteration_count_14;
            ++buffer_cursor_2;
            state_address_19 += 3;
          }
          while ( iteration_count_14 < state_word_7 );
        }
        masked_bits_14 = *(int *)((char *)&g_154167270 + bit_mask);
        if ( (int)dword_140404A6C[3 * scaled_index_62 + 83200515 + 3 * masked_bits_14] > 0 )
        {
          LODWORD(masked_bits_14) = masked_bits_14 + 1;
          *(unsigned int *)((char *)&g_154167270 + bit_mask) = masked_bits_14;
        }
      }
      sub_140193FE0(2, cached_input_value, (__int64)&g_1513BB770, 12 * state_word_7);
      sub_140193FE0(4, cached_input_value, (__int64)&g_15146B770, 24 * g_15138B768);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef saved_converted_vector
#undef saved_converted_vector_2
#undef saved_converted_vector_3
#undef saved_iteration_count_3
#undef saved_iteration_count_4
#undef saved_iteration_count_5
#undef record_byte_offset_9
#undef input_value
#undef hibyte_result_2
#undef state_word_8
#undef cached_scaled_index_2
#undef saved_record_byte_offset_3
#undef saved_bit_mask
#undef buffer_cursor_3
#undef saved_record_byte_offset_4
#undef saved_running_total_2
#undef record_byte_offset_10
#undef saved_state_address_2
#undef state_address_20
#undef saved_state_address_3
#undef scratch_buffer
#undef callee_output_word
#undef unused_frame_slot_184

//----- (000000014000F830) ----------------------------------------------------
void            sub_14000F830(signed int a1, int a2, unsigned int a3, int a4, unsigned int a5, _WORD *a6)
{
  __int64 layer;
  unsigned int z;
  unsigned int x;
  __int64 block_record_offset;
  int cx;
  signed int table_value;
  int cy;
  signed int table_value_2;
  int cz;
  unsigned int world_create_chunk_slot_result;
  signed int world_create_block_record_result;
  __int64 masked_bits;
  unsigned int *hibyte_result;
  __int64 scaled_index;
  int world_block_unknown_8_at_result;
  int world_block_unknown_8_at_result_2;
  int world_block_unknown_8_at_result_3;
  int world_block_unknown_8_at_result_4;
  int world_block_unknown_8_at_result_5;
  int world_block_unknown_8_at_result_6;
  signed int iteration_count;
  __int64 masked_bits_2;
  __int64 scaled_index_2;
  __int64 record_word_offset;
  signed int i;
  signed int j;
  unsigned int z_2;
  unsigned int x_2;
  int iteration_count_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  unsigned int z_3;
  unsigned int y;
  unsigned int x_3;
  int world_block_unknown_8_at_result_7;
  int world_block_record_at_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000F830[112];
#define comparison_result (*(int (*))(void *)(sr_frame_14000F830 + 0)) /* [rsp+30h] */
#define saved_world_block_unknown_8_at_result (*(int (*))(void *)(sr_frame_14000F830 + 4)) /* [rsp+34h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define world_block_record_at_result_2 (*(int (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define scaled_index_3 (*(__int64 (*))(void *)(sr_frame_14000F830 + 24)) /* [rsp+48h] */
#define call_result (*(int (*))(void *)(sr_frame_14000F830 + 96)) /* [rsp+90h] */

  layer = a1;
  z = a4;
  x = a2;
  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && a4 >= 0 )
  {
    block_record_offset = 263004LL * a1;
    cx = (unsigned int)a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( cx < table_value )
    {
      cy = a3 >> 6;
      if ( cy < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        cz = (unsigned int)a4 >> 6;
        if ( cz < table_value_2 )
        {
          if ( a5 )
          {
            world_create_chunk_slot_result = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (cx + table_value * (cz + table_value_2 * cy)));
            if ( world_create_chunk_slot_result != -1 || (world_create_chunk_slot_result = sr_world_create_chunk_slot(layer, cx, cy, cz), world_create_chunk_slot_result != -1) )
            {
              world_create_block_record_result = dword_140404A6C[263004 * layer
                                  + 111579985
                                  + 513 * (int)world_create_chunk_slot_result
                                  + (int)(((x >> 3) & 7) + 8 * (((z >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
              if ( world_create_block_record_result != -1 || (world_create_block_record_result = sr_world_create_block_record(layer, world_create_chunk_slot_result, x >> 3, a3 >> 3, z >> 3), world_create_block_record_result != -1) )
              {
                if ( (a5 & 0xE0000000) == 0x40000000 )
                {
                  masked_bits = (x & 7) + 8 * ((z & 7) + 8 * (a3 & 7));
                  hibyte_result = &dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits];
                  *hibyte_result = ((HIBYTE(a5) & 3) << 24) | 0x4000003F;
                  scaled_index = 13860LL * world_create_block_record_result + 8 * masked_bits;
                  *((_WORD *)&g_154162248 + scaled_index) = *a6;
                  if ( (__int16)*a6 >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x40u;
                  *((_WORD *)&g_154162248 + scaled_index + 1) = a6[1];
                  if ( (__int16)a6[1] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x80u;
                  *((_WORD *)&g_15416224C + scaled_index) = a6[2];
                  if ( (__int16)a6[2] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x100u;
                  *((_WORD *)&g_15416224C + scaled_index + 1) = a6[3];
                  if ( (__int16)a6[3] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x200u;
                  *((_WORD *)&g_154162250 + scaled_index) = a6[4];
                  if ( (__int16)a6[4] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x400u;
                  *((_WORD *)&g_154162250 + scaled_index + 1) = a6[5];
                  if ( (__int16)a6[5] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x800u;
                  *((_WORD *)&g_154162254 + scaled_index) = a6[6];
                  if ( (__int16)a6[6] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x1000u;
                  *((_WORD *)&g_154162254 + scaled_index + 1) = a6[7];
                  if ( (__int16)a6[7] >= 0 )
                    dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits] |= 0x2000u;
                  world_block_unknown_8_at_result = sr_world_block_unknown_8_at(layer, x, a3 - 1, z);
                  if ( (world_block_unknown_8_at_result & 0xE0000000) == 0x40000000 || !a3 )
                  {
                    *hibyte_result &= ~1u;
                    sub_140017AC0(layer, x, a3 - 1, z, world_block_unknown_8_at_result & 0xFFFFFFDF);
                  }
                  world_block_unknown_8_at_result_2 = sr_world_block_unknown_8_at(layer, x, a3 + 1, z);
                  if ( (world_block_unknown_8_at_result_2 & 0xE0000000) == 0x40000000 )
                  {
                    *hibyte_result &= ~0x20u;
                    sub_140017AC0(layer, x, a3 + 1, z, world_block_unknown_8_at_result_2 & 0xFFFFFFFE);
                  }
                  world_block_unknown_8_at_result_3 = sr_world_block_unknown_8_at(layer, x, a3, z + 1);
                  if ( (world_block_unknown_8_at_result_3 & 0xE0000000) == 0x40000000 )
                  {
                    *hibyte_result &= ~2u;
                    sub_140017AC0(layer, x, a3, z + 1, world_block_unknown_8_at_result_3 & 0xFFFFFFF7);
                  }
                  world_block_unknown_8_at_result_4 = sr_world_block_unknown_8_at(layer, x, a3, z - 1);
                  if ( (world_block_unknown_8_at_result_4 & 0xE0000000) == 0x40000000 )
                  {
                    *hibyte_result &= ~8u;
                    sub_140017AC0(layer, x, a3, z - 1, world_block_unknown_8_at_result_4 & 0xFFFFFFFD);
                  }
                  world_block_unknown_8_at_result_5 = sr_world_block_unknown_8_at(layer, x - 1, a3, z);
                  if ( (world_block_unknown_8_at_result_5 & 0xE0000000) == 0x40000000 )
                  {
                    *hibyte_result &= ~4u;
                    sub_140017AC0(layer, x - 1, a3, z, world_block_unknown_8_at_result_5 & 0xFFFFFFEF);
                  }
                  world_block_unknown_8_at_result_6 = sr_world_block_unknown_8_at(layer, x + 1, a3, z);
                  if ( (world_block_unknown_8_at_result_6 & 0xE0000000) == 0x40000000 )
                  {
                    *hibyte_result &= ~0x10u;
                    sub_140017AC0(layer, x + 1, a3, z, world_block_unknown_8_at_result_6 & 0xFFFFFFFB);
                  }
                  sr_world_mark_block_record(layer, x, a3, z);
                }
                else if ( (a5 & 0xE0000000) == 0x80000000 )
                {
                  iteration_count = 0;
                  masked_bits_2 = (x & 7) + 8 * ((z & 7) + 8 * (a3 & 7));
                  dword_140404A6C[6930 * world_create_block_record_result + 83194359 + masked_bits_2] = a5;
                  scaled_index_3 = masked_bits_2 + 6930LL * world_create_block_record_result;
                  scaled_index_2 = 13860LL * world_create_block_record_result + 8 * masked_bits_2;
                  *((_WORD *)&g_154162248 + scaled_index_2) = *a6;
                  *((_WORD *)&g_154162248 + scaled_index_2 + 1) = a6[1];
                  *((_WORD *)&g_15416224C + scaled_index_2) = a6[2];
                  *((_WORD *)&g_15416224C + scaled_index_2 + 1) = a6[3];
                  *((_WORD *)&g_154162250 + scaled_index_2) = a6[4];
                  *((_WORD *)&g_154162250 + scaled_index_2 + 1) = a6[5];
                  *((_WORD *)&g_154162254 + scaled_index_2) = a6[6];
                  *((_WORD *)&g_154162254 + scaled_index_2 + 1) = a6[7];
                  record_word_offset = 232LL * (unsigned __int16)a5;
                  saved_record_word_offset = record_word_offset;
                  if ( *(int *)((char *)&g_145098CC4 + record_word_offset) > 0 )
                  {
                    do
                    {
                      for ( i = 0; i < *(int *)((char *)&g_145098CC8 + record_word_offset); ++i )
                      {
                        for ( j = 0; j < *(int *)((char *)&g_145098CC0 + record_word_offset); ++j )
                        {
                          if ( iteration_count || i || j )
                          {
                            z_2 = i + z;
                            x_2 = j + x;
                            sub_140017AC0(layer, x_2, iteration_count + a3, z_2, j | ((i | (iteration_count << 8)) << 8) | 0xC0000000);
                            sr_world_mark_block_record(layer, x_2, iteration_count + a3, z_2);
                            record_word_offset = saved_record_word_offset;
                            x = a2;
                            z = a4;
                          }
                        }
                      }
                      ++iteration_count;
                    }
                    while ( iteration_count < *(int *)((char *)&g_145098CC4 + record_word_offset) );
                  }
                  iteration_count_2 = 0;
                  call_result = dword_140404A6C[scaled_index_3 + 83194871];
                  do
                  {
                    integer_difference = 0;
                    integer_difference_2 = 0;
                    integer_difference_3 = 0;
                    if ( iteration_count_2 )
                    {
                      switch ( iteration_count_2 )
                      {
                        case 1:
                          integer_difference_2 = -1;
                          break;
                        case 2:
                          integer_difference_3 = -1;
                          break;
                        case 3:
                          integer_difference_3 = 1;
                          break;
                        case 4:
                          integer_difference_2 = 1;
                          break;
                        default:
                          integer_difference = 1;
                          break;
                      }
                    }
                    else
                    {
                      integer_difference = -1;
                    }
                    z_3 = integer_difference_3 + z;
                    y = integer_difference_2 + a3;
                    x_3 = integer_difference + x;
                    world_block_unknown_8_at_result_7 = sr_world_block_unknown_8_at(layer, integer_difference + x, integer_difference_2 + a3, integer_difference_3 + z);
                    if ( (world_block_unknown_8_at_result_7 & 0xE0000000) == 0x80000000 )
                    {
                      saved_world_block_unknown_8_at_result = (unsigned __int16)world_block_unknown_8_at_result_7;
                      call_result = sub_14001B390((unsigned __int16)a5, iteration_count_2, call_result, (unsigned __int16)world_block_unknown_8_at_result_7);
                      world_block_record_at_result = sr_world_block_record_at(layer, x_3, y, z_3);
                      comparison_result = world_block_record_at_result == -1
                          ? 0
                          : dword_140404A6C[6930 * world_block_record_at_result + 83194871 + 64 * (y & 7) + 8 * (z_3 & 7) + (x_3 & 7)];
                      world_block_record_at_result_2 = sr_world_block_record_at(layer, x_3, y, z_3);
                      if ( world_block_record_at_result_2 != -1 )
                        dword_140404A6C[6930 * world_block_record_at_result_2 + 83194871 + 64 * (y & 7) + 8 * (z_3 & 7) + (x_3 & 7)] = sub_14001B390(saved_world_block_unknown_8_at_result, 5 - iteration_count_2, comparison_result, (unsigned __int16)a5);
                    }
                    ++iteration_count_2;
                  }
                  while ( iteration_count_2 < 6 );
                  dword_140404A6C[scaled_index_3 + 83194871] = call_result;
                  sr_world_mark_block_record(layer, x, a3, z);
                }
              }
            }
          }
        }
      }
    }
  }
}
#undef comparison_result
#undef saved_world_block_unknown_8_at_result
#undef saved_record_word_offset
#undef world_block_record_at_result_2
#undef scaled_index_3
#undef call_result

//----- (0000000140010110) ----------------------------------------------------
__int64 sub_140010110()
{
  int *buffer_cursor;
  unsigned int float_word;
  unsigned int *buffer_cursor_2;
  __int64 remaining_count;
  __int64 record_byte_offset;
  __int64 iteration_count;
  unsigned int integer_sum;
  __int64 i;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor_3;
  __int64 j;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor_4;
  unsigned int state_word;
  int integer_sum_2;
  unsigned int element_index;
  unsigned int integer_sum_3;
  unsigned int *record_byte_offset_2;
  unsigned int *state_address;
  unsigned int *state_address_2;
  char input_byte;
  unsigned int *record_byte_offset_3;
  __int64 remaining_count_4;
  unsigned int state_word_2;
  int integer_sum_4;
  __int64 integer_sum_5;
  __int64 packed_word_bits;
  unsigned int *state_address_3;
  char *byte_cursor;
  char input_byte_2;
  int comparison_result;
  unsigned int saved_packed_word_bits;
  int comparison_result_2;
  unsigned int saved_packed_word_bits_2;
  int comparison_result_3;
  unsigned int saved_packed_word_bits_3;
  int comparison_result_4;
  unsigned int saved_packed_word_bits_4;
  int comparison_result_5;
  unsigned int saved_packed_word_bits_5;
  char *cached_str1;
  char input_byte_3;
  __int64 state_word_3;
  unsigned int element_index_2;
  __int64 element_index_3;
  unsigned int *record_byte_offset_4;
  unsigned int *state_address_4;
  char *byte_cursor_2;
  int table_value;
  int loaded_word;
  int cached_k;
  __int64 scaled_index;
  __int64 remaining_count_5;
  unsigned int *state_address_5;
  __int64 record_byte_offset_5;
  __int64 remaining_count_6;
  int m;
  __int64 scaled_index_2;
  __int64 remaining_count_7;
  unsigned int *state_address_6;
  __int64 remaining_count_8;
  unsigned int *buffer_cursor_5;
  int element_index_4;
  int *state_address_7;
  int iteration_count_2;
  unsigned int *state_address_8;
  signed __int64 state_address_9;
  unsigned int *record_byte_offset_6;
  unsigned int *record_byte_offset_7;
  __int64 remaining_count_9;
  unsigned int option_flags;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  int state_word_4;
  int state_word_5;
  int iteration_count_3;
  int iteration_count_4;
  int state_word_6;
  signed int integer_difference;
  int iteration_count_5;
  int iteration_count_6;
  int integer_difference_2;
  int iteration_count_7;
  int iteration_count_8;
  int iteration_count_9;
  int iteration_count_10;
  int iteration_count_11;
  int iteration_count_12;
  int integer_difference_3;
  int iteration_count_13;
  int iteration_count_14;
  __int64 scaled_index_3;
  unsigned int *state_address_13;
  int saved_element_index;
  __int64 scaled_index_4;
  __int64 remaining_count_10;
  int iteration_count_15;
  __int64 packed_word_bits_2;
  int saved_element_index_2;
  __int64 scaled_index_5;
  __int64 record_byte_offset_8;
  __int64 iteration_count_16;
  __int64 element_index_5;
  float scaled_ratio_4;
  float component_sum;
  __int64 remaining_count_11;
  int *buffer_cursor_6;
  float scaled_value;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  unsigned int float_word_2;
  float scaled_value_2;
  int saved_element_index_3;
  __int64 scaled_index_6;
  __int64 n;
  __int128 saved_masked_bits;
  __int64 remaining_count_12;
  int *buffer_cursor_7;
  __int128 masked_bits;
  int saved_element_index_4;
  __int64 scaled_index_7;
  __int64 element_index_6;
  __int64 remaining_count_13;
  int saved_element_index_5;
  __int64 scaled_index_8;
  int saved_element_index_6;
  __int64 scaled_index_9;
  __int64 remaining_count_14;
  int saved_element_index_7;
  __int64 scaled_index_10;
  __int64 remaining_count_15;
  int saved_element_index_8;
  __int64 scaled_index_11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140010110[800];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140010110 + 0)) /* [rsp+8h] */
#define element_index_7 (*(unsigned int (*))(void *)(sr_frame_140010110 + 80)) /* [rsp+58h] */
#define saved_iteration_count (*(float (*))(void *)(sr_frame_140010110 + 88)) /* [rsp+60h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140010110 + 92)) /* [rsp+64h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140010110 + 96)) /* [rsp+68h] */
#define Buffer (*(int (*))(void *)(sr_frame_140010110 + 104)) /* [rsp+70h] */
#define k (*(int (*))(void *)(sr_frame_140010110 + 108)) /* [rsp+74h] */
#define packed_word_bits_3 (*(__int64 (*))(void *)(sr_frame_140010110 + 112)) /* [rsp+78h] */
#define iteration_count_17 (*(__int64 (*))(void *)(sr_frame_140010110 + 120)) /* [rsp+80h] */
#define saved_packed_word_bits_6 (*(__int64 (*))(void *)(sr_frame_140010110 + 128)) /* [rsp+88h] */
#define selection_code (*(__int64 (*))(void *)(sr_frame_140010110 + 136)) /* [rsp+90h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140010110 + 144)) /* [rsp+98h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_140010110 + 160)) /* [rsp+A8h] */
#define float_word_3 (*(_DWORD (*)[8])(void *)(sr_frame_140010110 + 176)) /* [rsp+B8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_140010110 + 208)) /* [rsp+D8h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_140010110 + 216)) /* [rsp+E0h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140010110 + 220)) /* [rsp+E4h] */
#define unused_written_slot_7 (*(float (*))(void *)(sr_frame_140010110 + 228)) /* [rsp+ECh] */
#define unused_written_slot_8 (*(int (*))(void *)(sr_frame_140010110 + 232)) /* [rsp+F0h] */
#define unused_written_slot_9 (*(int (*))(void *)(sr_frame_140010110 + 236)) /* [rsp+F4h] */
#define unused_written_slot_10 (*(float (*))(void *)(sr_frame_140010110 + 240)) /* [rsp+F8h] */
#define unused_written_slot_11 (*(int (*))(void *)(sr_frame_140010110 + 244)) /* [rsp+FCh] */
#define unused_written_slot_12 (*(int (*))(void *)(sr_frame_140010110 + 248)) /* [rsp+100h] */
#define unused_written_slot_13 (*(float (*))(void *)(sr_frame_140010110 + 252)) /* [rsp+104h] */
#define unused_written_slot_14 (*(__int64 (*))(void *)(sr_frame_140010110 + 256)) /* [rsp+108h] */
#define unused_written_slot_15 (*(float (*))(void *)(sr_frame_140010110 + 264)) /* [rsp+110h] */
#define unused_written_slot_16 (*(int (*))(void *)(sr_frame_140010110 + 268)) /* [rsp+114h] */
#define Str1 (*(char (*)[512])(void *)(sr_frame_140010110 + 272)) /* [rsp+118h] */
#define unused_frame_slot_784 (*(__int64 (*))(void *)(sr_frame_140010110 + 784)) /* [rsp+318h] */

  buffer_cursor = (int *)&g_14500A70C;
  float_word = 0;
  buffer_cursor_2 = &g_14500A70C;
  g_14500A700 = 0;
  do
  {
    *buffer_cursor_2++ = float_word;
    float_word = ++g_14500A700;
  }
  while ( (__int64)buffer_cursor_2 < (__int64)&g_14500A74C );
  g_14500A74C = float_word;
  g_14500A750 = float_word + 1;
  g_14500A754 = float_word + 2;
  g_14500A758 = float_word + 3;
  g_14500A75C = float_word + 4;
  g_14500A760 = float_word + 5;
  g_14500A764 = float_word + 6;
  g_14500A768 = float_word + 7;
  g_14500A76C = float_word + 8;
  g_14500A770 = float_word + 9;
  g_14500A774 = float_word + 10;
  g_14500A778 = float_word + 11;
  g_14500A77C = float_word + 12;
  g_14500A780 = float_word + 13;
  g_14500A784 = float_word + 14;
  g_14500A788 = float_word + 15;
  g_14500A78C = float_word + 16;
  g_14500A790 = float_word + 17;
  g_14500A794 = float_word + 18;
  g_14500A798 = float_word + 19;
  g_14500CAD4 = float_word + 20;
  g_14500CAD8 = float_word + 21;
  g_14500CADC = float_word + 22;
  g_14500CAE0 = float_word + 23;
  g_14500CAE4 = float_word + 24;
  g_14500CAE8 = float_word + 25;
  g_14500CAEC = float_word + 26;
  g_14500CAF0 = float_word + 27;
  g_14500CAF4 = float_word + 28;
  g_14500CAF8 = float_word + 29;
  g_14500CAFC = float_word + 30;
  g_14500CB00 = float_word + 31;
  g_14500CB04 = float_word + 32;
  g_14500CB08 = float_word + 33;
  g_14500CB0C = float_word + 34;
  g_14500CB10 = float_word + 35;
  g_14500CB14 = float_word + 36;
  g_14500CB18 = float_word + 37;
  g_14500CB1C = float_word + 38;
  g_14500CB20 = float_word + 39;
  g_14500A79C = float_word + 40;
  g_14500A7A0 = float_word + 41;
  saved_packed_word_bits_6 = 4;
  g_14500A7A4 = float_word + 42;
  selection_code = 16;
  g_14500A7A8 = float_word + 43;
  remaining_count = 9;
  record_byte_offset = 16;
  g_14500A7AC = float_word + 44;
  iteration_count = 4;
  g_14500A7B0 = float_word + 45;
  g_14500A7B4 = float_word + 46;
  g_14500A7B8 = float_word + 47;
  g_14500A7BC = float_word + 48;
  g_14500A7C0 = float_word + 49;
  integer_sum = float_word + 50;
  g_14500A700 = integer_sum;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( record_byte_offset > 0 )
      {
        remaining_count_2 = iteration_count;
        buffer_cursor_3 = &dword_140404A6C[16 * (i + record_byte_offset) + 19929066];
        do
        {
          *buffer_cursor_3++ = integer_sum;
          integer_sum = ++g_14500A700;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
    }
    for ( j = 0; j < 4; ++j )
    {
      if ( record_byte_offset > 0 )
      {
        remaining_count_3 = iteration_count;
        buffer_cursor_4 = &dword_140404A6C[16 * (j + record_byte_offset) + 19930090];
        do
        {
          *buffer_cursor_4++ = integer_sum;
          integer_sum = ++g_14500A700;
          --remaining_count_3;
        }
        while ( remaining_count_3 );
      }
    }
    ++iteration_count;
    record_byte_offset += 4;
    --remaining_count;
  }
  while ( remaining_count );
  g_14500A704 = (integer_sum + 3) & 0xFFFFFFFC;
  g_14500CA24 = (integer_sum + 3) & 0xFFFFFFFC;
  g_14500CA28 = g_14500A704 + 1;
  g_14500CA2C = g_14500A704 + 2;
  g_14500CA30 = g_14500A704 + 3;
  g_14500CA34 = g_14500A704 + 4;
  g_14500CA38 = g_14500A704 + 5;
  g_14500CA3C = g_14500A704 + 6;
  g_14500CA40 = g_14500A704 + 7;
  g_14500CA74 = g_14500A704 + 8;
  g_14500CA78 = g_14500A704 + 9;
  g_14500CA7C = g_14500A704 + 10;
  g_14500CA80 = g_14500A704 + 11;
  g_14500CA84 = g_14500A704 + 12;
  g_14500CA88 = g_14500A704 + 13;
  g_14500CA8C = g_14500A704 + 14;
  g_14500CA90 = g_14500A704 + 15;
  g_14500CA44 = g_14500A704 + 16;
  g_14500CA48 = g_14500A704 + 17;
  g_14500CA4C = g_14500A704 + 18;
  g_14500CA50 = g_14500A704 + 19;
  g_14500CA54 = g_14500A704 + 20;
  g_14500CA58 = g_14500A704 + 21;
  g_14500CA5C = g_14500A704 + 22;
  g_14500CA60 = g_14500A704 + 23;
  g_14500CA64 = g_14500A704 + 24;
  g_14500CA68 = g_14500A704 + 25;
  g_14500CA6C = g_14500A704 + 26;
  g_14500CA70 = g_14500A704 + 27;
  g_14500CA94 = g_14500A704 + 28;
  g_14500CA98 = g_14500A704 + 29;
  g_14500CA9C = g_14500A704 + 30;
  g_14500CAA0 = g_14500A704 + 31;
  g_14500CAA4 = g_14500A704 + 32;
  g_14500CAA8 = g_14500A704 + 33;
  g_14500CAAC = g_14500A704 + 34;
  g_14500CAB0 = g_14500A704 + 35;
  g_14500CAB4 = g_14500A704 + 36;
  g_14500CAB8 = g_14500A704 + 37;
  g_14500CABC = g_14500A704 + 38;
  g_14500CAC0 = g_14500A704 + 39;
  state_word = g_1863AE154;
  g_14500CAC4 = g_14500A704 + 40;
  integer_sum_2 = 0;
  g_18622DFE0 = 0;
  g_14500CAC8 = g_14500A704 + 41;
  element_index = 0;
  g_14500CACC = g_14500A704 + 42;
  g_14500CAD0 = g_14500A704 + 43;
  g_14500CB24 = g_14500A704 + 44;
  g_14500CB28 = g_14500A704 + 45;
  g_14500CB2C = g_14500A704 + 46;
  g_14500CB30 = g_14500A704 + 47;
  g_14500CB34 = g_14500A704 + 48;
  g_14500CB38 = g_14500A704 + 49;
  g_14500CB3C = g_14500A704 + 50;
  g_14500CB40 = g_14500A704 + 51;
  g_14500CB54 = g_14500A704 + 52;
  g_14500CB58 = g_14500A704 + 53;
  g_14500CB5C = g_14500A704 + 54;
  g_14500CB60 = g_14500A704 + 55;
  g_14500CB64 = g_14500A704 + 56;
  g_14500CB68 = g_14500A704 + 57;
  g_14500CB6C = g_14500A704 + 58;
  g_14500CB70 = g_14500A704 + 59;
  g_14500CB74 = g_14500A704 + 60;
  g_14500CB78 = g_14500A704 + 61;
  g_14500CB7C = g_14500A704 + 62;
  g_14500CB80 = g_14500A704 + 63;
  g_14500CB84 = g_14500A704 + 64;
  g_14500CB88 = g_14500A704 + 65;
  g_14500CB8C = g_14500A704 + 66;
  g_14500CB90 = g_14500A704 + 67;
  g_14500CB94 = g_14500A704 + 68;
  g_14500CB98 = g_14500A704 + 69;
  g_14500CB9C = g_14500A704 + 70;
  g_14500CBA0 = g_14500A704 + 71;
  integer_sum_3 = g_14500A704 + 72;
  g_14500A700 = g_14500A704 + 72;
  if ( g_1863AE154 )
  {
    record_byte_offset_2 = &g_1863AE158;
    do
    {
      if ( *record_byte_offset_2 == 1482293249 )
      {
        state_address = &dword_140404A6C[16 * (__int64)(int)element_index + 293512638];
        state_address_2 = &dword_140404A6C[16 * (__int64)integer_sum_2 + 293119326];
        do
        {
          input_byte = *(_BYTE *)state_address;
          state_address = (unsigned int *)((char *)state_address + 1);
          *(_BYTE *)state_address_2 = input_byte;
          state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
        }
        while ( input_byte );
        integer_sum_2 = ++g_18622DFE0;
      }
      ++element_index;
      record_byte_offset_2 += 16;
    }
    while ( element_index < state_word );
    if ( integer_sum_2 > 0 )
    {
      record_byte_offset_3 = &g_14500CBAC;
      remaining_count_4 = (unsigned int)integer_sum_2;
      do
      {
        *(record_byte_offset_3 - 1) = integer_sum_3;
        record_byte_offset_3 += 4;
        *(record_byte_offset_3 - 4) = ++g_14500A700;
        *(record_byte_offset_3 - 3) = ++g_14500A700;
        *(record_byte_offset_3 - 2) = ++g_14500A700;
        integer_sum_3 = ++g_14500A700;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
    }
  }
  g_14500A708 = integer_sum_3;
  g_14500A7C8 = integer_sum_3 + 1;
  g_14500A7C4 = integer_sum_3;
  g_14500A7CC = integer_sum_3 + 2;
  g_14500A7D0 = integer_sum_3 + 3;
  g_14500A700 = integer_sum_3 + 4;
  crt_memset((void *)(uintptr_t)(&g_145F54C00), 0xFFu, 0x4000000u);
  state_word_2 = 0;
  integer_sum_4 = 0;
  g_14500CBA4 = 0;
  LODWORD(packed_word_bits_3) = 0;
  if ( integer_sum_2 > 0 )
  {
    integer_sum_5 = 0;
    iteration_count_17 = 0;
    while ( 1 )
    {
      g_14500CBA4 = state_word_2 + 1;
      packed_word_bits = (int)dword_140404A6C[4 * integer_sum_5 + 19931215];
      state_address_3 = &dword_140404A6C[16 * (__int64)integer_sum_4 + 293119326];
      element_index_7 = dword_140404A6C[4 * integer_sum_5 + 19931215];
      byte_cursor = (char *)(Str1 - (char *)state_address_3);
      do
      {
        input_byte_2 = *(_BYTE *)state_address_3;
        byte_cursor[(_QWORD)state_address_3] = *(_BYTE *)state_address_3;
        state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
      }
      while ( input_byte_2 );
      comparison_result = strcmp_sr(Str1, "bc-safe01");
      saved_packed_word_bits = g_150F61038;
      if ( !comparison_result )
        saved_packed_word_bits = packed_word_bits;
      g_150F61038 = saved_packed_word_bits;
      comparison_result_2 = strcmp_sr(Str1, "bc-roof-4x4");
      saved_packed_word_bits_2 = g_150F61034;
      if ( !comparison_result_2 )
        saved_packed_word_bits_2 = packed_word_bits;
      g_150F61034 = saved_packed_word_bits_2;
      comparison_result_3 = strcmp_sr(Str1, "bc-roof-5x4");
      saved_packed_word_bits_3 = g_150F61030;
      if ( !comparison_result_3 )
        saved_packed_word_bits_3 = packed_word_bits;
      g_150F61030 = saved_packed_word_bits_3;
      comparison_result_4 = strcmp_sr(Str1, "bc-roof-2x4");
      saved_packed_word_bits_4 = g_149F54C04;
      if ( !comparison_result_4 )
        saved_packed_word_bits_4 = packed_word_bits;
      g_149F54C04 = saved_packed_word_bits_4;
      comparison_result_5 = strcmp_sr(Str1, "basetable");
      saved_packed_word_bits_5 = g_149F54C00;
      if ( !comparison_result_5 )
        saved_packed_word_bits_5 = packed_word_bits;
      g_149F54C00 = saved_packed_word_bits_5;
      if ( !strcmp_sr(Str1, "garagedoor") )
      {
        g_14500CA14 = packed_word_bits;
        g_14500CA18 = packed_word_bits + 1;
        g_14500CA1C = packed_word_bits + 2;
        g_14500CA20 = packed_word_bits + 3;
        dword_140404A6C[58 * packed_word_bits + 20074650] = 1;
        dword_140404A6C[58 * packed_word_bits + 20074708] = 1;
        dword_140404A6C[58 * packed_word_bits + 20074766] = 1;
        dword_140404A6C[58 * packed_word_bits + 20074824] = 1;
      }
      g_1510AB760 = 0;
      g_1512DB764 = 0;
      g_15138B768 = 0;
      g_15155CFB4 = 0;
      cached_str1 = Str1;
      do
      {
        input_byte_3 = *cached_str1;
        *((_BYTE *)&g_145098C00 + 232 * packed_word_bits - (_QWORD)Str1 + (_QWORD)cached_str1) = *cached_str1;
        ++cached_str1;
      }
      while ( input_byte_3 );
      state_word_3 = g_1863AE140;
      if ( g_1863AE140 )
      {
        if ( !g_1863AE148 )
        {
          element_index_2 = 0;
          element_index_3 = 0;
          if ( state_word )
          {
            record_byte_offset_4 = &g_1863AE158;
            while ( 1 )
            {
              if ( *record_byte_offset_4 == 1482293249 )
              {
                state_address_4 = &dword_140404A6C[16 * (__int64)(int)element_index_2 + 293512638];
                byte_cursor_2 = (char *)(Str1 - (char *)state_address_4);
                do
                {
                  table_value = (unsigned __int8)byte_cursor_2[(_QWORD)state_address_4];
                  loaded_word = *(unsigned __int8 *)state_address_4 - table_value;
                  if ( loaded_word )
                    break;
                  state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
                }
                while ( table_value );
                if ( !loaded_word )
                  break;
              }
              ++element_index_2;
              ++element_index_3;
              record_byte_offset_4 += 16;
              if ( element_index_2 >= state_word )
                goto LABEL_55;
            }
            sub_14020C4A8(*(__int64 *)&g_1863AE140, dword_140404A6C[16 * element_index_3 + 293512636], 0);
            LODWORD(packed_word_bits) = element_index_7;
            state_word_3 = g_1863AE140;
          }
        }
LABEL_55:
        if ( state_word_3 )
        {
          Buffer = 1;
          fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(state_word_3));
          if ( Buffer == 1 )
          {
            fread_sr((void *)(uintptr_t)(&g_144FBFBA0), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBA4), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBA8), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBAC), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBB0), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBB4), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBB8), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBBC), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBC0), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            fread_sr((void *)(uintptr_t)(&g_144FBFBC4), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            cached_k = 0;
            for ( k = 0; k < (int)g_144FBFBC4; cached_k = k )
            {
              scaled_index = 87LL * cached_k;
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852378]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852376]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852379]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852377]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852460]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852461]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
              remaining_count_5 = 4;
              state_address_5 = &dword_140404A6C[scaled_index + 19852428];
              record_byte_offset_5 = (intptr_t)&dword_140404A6C[scaled_index + 19852380];
              do
              {
                remaining_count_6 = 4;
                do
                {
                  fread_sr((void *)(uintptr_t)(record_byte_offset_5), 4, 3, (FILE *)(uintptr_t)(state_word_3));
                  fread_sr((void *)(uintptr_t)(state_address_5), 4, 2, (FILE *)(uintptr_t)(state_word_3));
                  record_byte_offset_5 += 12;
                  state_address_5 += 2;
                  --remaining_count_6;
                }
                while ( remaining_count_6 );
                --remaining_count_5;
              }
              while ( remaining_count_5 );
              ++k;
            }
            fread_sr((void *)(uintptr_t)(&g_144FEB3C8), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            for ( m = 0; m < (int)g_144FEB3C8; ++m )
            {
              scaled_index_2 = 31LL * m;
              remaining_count_7 = 8;
              state_address_6 = &dword_140404A6C[scaled_index_2 + 19896920];
              do
              {
                fread_sr((void *)(uintptr_t)(state_address_6), 4, 3, (FILE *)(uintptr_t)(state_word_3));
                state_address_6 += 3;
                --remaining_count_7;
              }
              while ( remaining_count_7 );
              remaining_count_8 = 6;
              buffer_cursor_5 = &dword_140404A6C[scaled_index_2 + 19896944];
              do
              {
                fread_sr((void *)(uintptr_t)(buffer_cursor_5++), 4, 1, (FILE *)(uintptr_t)(state_word_3));
                --remaining_count_8;
              }
              while ( remaining_count_8 );
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 19896950]), 4, 1, (FILE *)(uintptr_t)(state_word_3));
            }
          }
          LODWORD(packed_word_bits) = element_index_7;
        }
      }
      element_index_4 = 0;
      if ( (int)g_144FEB3C8 > 0 )
      {
        state_address_7 = (int *)&g_144FEB42C;
        do
        {
          sub_140019C10((__int64)&dword_140404A6C[31 * element_index_4++ + 19896920], *state_address_7, state_address_7[6]);
          state_address_7 += 31;
        }
        while ( element_index_4 < (int)g_144FEB3C8 );
        LODWORD(packed_word_bits) = element_index_7;
      }
      iteration_count_2 = 0;
      if ( (int)g_144FBFBC4 > 0 )
        break;
LABEL_93:
      state_word_4 = g_144FBFBA8;
      state_word_5 = g_144FBFBA0;
      if ( g_144FBFBAC )
      {
        iteration_count_3 = 0;
        if ( (int)g_144FBFBA8 > 0 )
        {
          do
          {
            iteration_count_4 = 0;
            if ( state_word_5 > 0 )
            {
              unused_written_slot = 0.0;
              unused_written_slot_2 = (float)iteration_count_3;
              do
              {
                saved_iteration_count = (float)iteration_count_4;
                sub_140019140(0, &saved_iteration_count);
                state_word_5 = g_144FBFBA0;
                ++iteration_count_4;
              }
              while ( iteration_count_4 < (int)g_144FBFBA0 );
              state_word_4 = g_144FBFBA8;
            }
            ++iteration_count_3;
          }
          while ( iteration_count_3 < state_word_4 );
          LODWORD(packed_word_bits) = element_index_7;
        }
      }
      state_word_6 = g_144FBFBA4;
      if ( g_144FBFBB0 )
      {
        integer_difference = g_144FBFBA4 - 1;
        iteration_count_5 = 0;
        if ( state_word_4 > 0 )
        {
          do
          {
            iteration_count_6 = 0;
            if ( state_word_5 > 0 )
            {
              unused_written_slot = (float)integer_difference;
              unused_written_slot_2 = (float)iteration_count_5;
              do
              {
                saved_iteration_count = (float)iteration_count_6;
                sub_140019140(5, &saved_iteration_count);
                state_word_5 = g_144FBFBA0;
                ++iteration_count_6;
              }
              while ( iteration_count_6 < (int)g_144FBFBA0 );
              state_word_4 = g_144FBFBA8;
            }
            ++iteration_count_5;
          }
          while ( iteration_count_5 < state_word_4 );
          LODWORD(packed_word_bits) = element_index_7;
          state_word_6 = g_144FBFBA4;
        }
      }
      if ( g_144FBFBB4 )
      {
        integer_difference_2 = state_word_4 - 1;
        iteration_count_7 = 0;
        if ( state_word_6 > 0 )
        {
          do
          {
            iteration_count_8 = 0;
            if ( state_word_5 > 0 )
            {
              unused_written_slot = (float)iteration_count_7;
              unused_written_slot_2 = (float)integer_difference_2;
              do
              {
                saved_iteration_count = (float)iteration_count_8;
                sub_140019140(3, &saved_iteration_count);
                state_word_5 = g_144FBFBA0;
                ++iteration_count_8;
              }
              while ( iteration_count_8 < (int)g_144FBFBA0 );
              state_word_6 = g_144FBFBA4;
            }
            ++iteration_count_7;
          }
          while ( iteration_count_7 < state_word_6 );
          LODWORD(packed_word_bits) = element_index_7;
          state_word_4 = g_144FBFBA8;
        }
      }
      if ( g_144FBFBB8 )
      {
        iteration_count_9 = 0;
        if ( state_word_6 > 0 )
        {
          do
          {
            iteration_count_10 = 0;
            if ( state_word_4 > 0 )
            {
              saved_iteration_count = 0.0;
              unused_written_slot = (float)iteration_count_9;
              do
              {
                unused_written_slot_2 = (float)iteration_count_10;
                sub_140019140(4, &saved_iteration_count);
                state_word_4 = g_144FBFBA8;
                ++iteration_count_10;
              }
              while ( iteration_count_10 < (int)g_144FBFBA8 );
              state_word_6 = g_144FBFBA4;
            }
            ++iteration_count_9;
          }
          while ( iteration_count_9 < state_word_6 );
          LODWORD(packed_word_bits) = element_index_7;
          state_word_5 = g_144FBFBA0;
        }
      }
      if ( g_144FBFBBC )
      {
        iteration_count_11 = 0;
        if ( state_word_6 > 0 )
        {
          do
          {
            iteration_count_12 = 0;
            if ( state_word_5 > 0 )
            {
              unused_written_slot_2 = 0.0;
              unused_written_slot = (float)iteration_count_11;
              do
              {
                saved_iteration_count = (float)iteration_count_12;
                sub_140019140(1, &saved_iteration_count);
                state_word_5 = g_144FBFBA0;
                ++iteration_count_12;
              }
              while ( iteration_count_12 < (int)g_144FBFBA0 );
              state_word_6 = g_144FBFBA4;
            }
            ++iteration_count_11;
          }
          while ( iteration_count_11 < state_word_6 );
          LODWORD(packed_word_bits) = element_index_7;
          state_word_4 = g_144FBFBA8;
        }
      }
      if ( g_144FBFBC0 )
      {
        integer_difference_3 = state_word_5 - 1;
        iteration_count_13 = 0;
        if ( state_word_6 > 0 )
        {
          do
          {
            iteration_count_14 = 0;
            if ( state_word_4 > 0 )
            {
              saved_iteration_count = (float)integer_difference_3;
              unused_written_slot = (float)iteration_count_13;
              do
              {
                unused_written_slot_2 = (float)iteration_count_14;
                sub_140019140(2, &saved_iteration_count);
                state_word_4 = g_144FBFBA8;
                ++iteration_count_14;
              }
              while ( iteration_count_14 < (int)g_144FBFBA8 );
              state_word_6 = g_144FBFBA4;
            }
            ++iteration_count_13;
          }
          while ( iteration_count_13 < state_word_6 );
          LODWORD(packed_word_bits) = element_index_7;
          state_word_5 = g_144FBFBA0;
        }
      }
      scaled_index_3 = 58LL * (int)packed_word_bits;
      state_address_13 = &dword_140404A6C[scaled_index_3 + 20074645];
      dword_140404A6C[scaled_index_3 + 20074645] = state_word_5;
      dword_140404A6C[scaled_index_3 + 20074646] = state_word_6;
      dword_140404A6C[scaled_index_3 + 20074647] = state_word_4;
      sub_140017CA0(packed_word_bits);
      sub_14004D170(++element_index_7, state_address_13);
      sub_140017CA0(element_index_7);
      sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
      sub_140017CA0(++element_index_7);
      sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
      sub_140017CA0(element_index_7 + 1);
      integer_sum_4 = packed_word_bits_3 + 1;
      integer_sum_5 = iteration_count_17 + 1;
      LODWORD(packed_word_bits_3) = integer_sum_4;
      ++iteration_count_17;
      if ( integer_sum_4 >= (int)g_18622DFE0 )
      {
        buffer_cursor = (int *)&g_14500A70C;
        goto LABEL_144;
      }
      state_word_2 = g_14500CBA4;
      state_word = g_1863AE154;
    }
    state_address_8 = &g_144FBFBE4;
    state_address_9 = (char *)&g_14500A5C8 - (char *)&g_144FBFBE4;
    while ( 1 )
    {
      record_byte_offset_6 = state_address_8 + 49;
      record_byte_offset_7 = state_address_8;
      remaining_count_9 = 4;
      do
      {
        record_byte_offset_6 += 8;
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 8) = *(record_byte_offset_7 - 2);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 4) = *(record_byte_offset_7 - 1);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9) = *record_byte_offset_7;
        record_byte_offset_7 += 12;
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 44) = *(record_byte_offset_6 - 11);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 40) = *(record_byte_offset_6 - 10);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 44) = *(record_byte_offset_7 - 11);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 40) = *(record_byte_offset_7 - 10);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 36) = *(record_byte_offset_7 - 9);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 36) = *(record_byte_offset_6 - 9);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 32) = *(record_byte_offset_6 - 8);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 32) = *(record_byte_offset_7 - 8);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 28) = *(record_byte_offset_7 - 7);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 24) = *(record_byte_offset_7 - 6);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 28) = *(record_byte_offset_6 - 7);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 24) = *(record_byte_offset_6 - 6);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 20) = *(record_byte_offset_7 - 5);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 16) = *(record_byte_offset_7 - 4);
        *(unsigned int *)((char *)record_byte_offset_7 + state_address_9 - 12) = *(record_byte_offset_7 - 3);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 20) = *(record_byte_offset_6 - 5);
        *(unsigned int *)((char *)record_byte_offset_6 + state_address_9 - 16) = *(record_byte_offset_6 - 4);
        --remaining_count_9;
      }
      while ( remaining_count_9 );
      option_flags = state_address_8[78];
      if ( !state_address_8[79] )
        goto LABEL_91;
      state_address_10 = (float)((float)(*(float *)&g_14500A678 - *(float *)&g_14500A5C4)
                  * (float)(*(float *)&g_14500A5EC - *(float *)&g_14500A5C8))
          - (float)((float)(*(float *)&g_14500A67C - *(float *)&g_14500A5C8)
                  * (float)(*(float *)&g_14500A5E8 - *(float *)&g_14500A5C4));
      state_address_11 = (float)((float)(*(float *)&g_14500A674 - *(float *)&g_14500A5C0)
                  * (float)(*(float *)&g_14500A5E8 - *(float *)&g_14500A5C4))
          - (float)((float)(*(float *)&g_14500A678 - *(float *)&g_14500A5C4)
                  * (float)(*(float *)&g_14500A5E4 - *(float *)&g_14500A5C0));
      state_address_12 = (float)((float)(*(float *)&g_14500A67C - *(float *)&g_14500A5C8)
                  * (float)(*(float *)&g_14500A5E4 - *(float *)&g_14500A5C0))
          - (float)((float)(*(float *)&g_14500A674 - *(float *)&g_14500A5C0)
                  * (float)(*(float *)&g_14500A5EC - *(float *)&g_14500A5C8));
      square_root = fsqrt((float)((float)(state_address_12 * state_address_12) + (float)(state_address_10 * state_address_10)) + (float)(state_address_11 * state_address_11));
      if ( square_root == 0.0 )
        break;
      scaled_ratio = state_address_12 * (float)(1.0 / square_root);
      scaled_ratio_2 = state_address_10 * (float)(1.0 / square_root);
      scaled_ratio_3 = state_address_11 * (float)(1.0 / square_root);
      if ( scaled_ratio <= 0.70700002 )
      {
        if ( scaled_ratio >= -0.70700002 )
        {
          if ( scaled_ratio_2 <= 0.70700002 )
          {
            if ( scaled_ratio_2 >= -0.70700002 )
            {
              if ( scaled_ratio_3 <= 0.70700002 )
                break;
              option_flags |= 0x60000u;
            }
            else
            {
              option_flags |= 0x10000u;
            }
          }
          else
          {
            option_flags |= 0x20000u;
          }
        }
        else
        {
          option_flags |= 0x30000u;
        }
      }
      else
      {
        option_flags |= 0x40000u;
      }
LABEL_91:
      sub_140001F20(
        (__int64)&g_14500A5C0,
        (__int64)&g_14500A680,
        *(state_address_8 - 6),
        *(state_address_8 - 4),
        *(state_address_8 - 5),
        *(state_address_8 - 3),
        option_flags);
      ++iteration_count_2;
      state_address_8 += 87;
      state_address_9 -= 348LL;
      if ( iteration_count_2 >= (int)g_144FBFBC4 )
      {
        LODWORD(packed_word_bits) = element_index_7;
        goto LABEL_93;
      }
    }
    option_flags |= 0x50000u;
    goto LABEL_91;
  }
LABEL_144:
  element_index_7 = g_14500A74C;
  g_1510AB760 = 0;
  g_1512DB764 = 0;
  g_15138B768 = 0;
  *(_QWORD *)&g_14500A5C0 = 0;
  g_14500A5C8 = 0;
  g_14500A5F0 = 0;
  g_14500A5F8 = 1048576000;
  g_14500A620 = 0;
  g_14500A624 = 1031798784;
  g_14500A628 = 1061158912;
  g_14500A650 = 0;
  g_14500A654 = 1031798784;
  g_14500A658 = 1065353216;
  *(_QWORD *)&g_14500A5E4 = 1065353216;
  g_14500A5EC = 0;
  g_14500A614 = 1065353216;
  g_14500A61C = 1048576000;
  g_14500A644 = 1065353216;
  g_14500A648 = 1031798784;
  g_14500A64C = 1061158912;
  *(_OWORD *)&g_14500A674 = xmmword_140278E40;
  g_14500A684 = 1065353216;
  g_14500A698 = 1065353216;
  g_14500A69C = 1065353216;
  g_14500A6F8 = 1065353216;
  g_14500A6E0 = 0;
  sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 8, 3, 0x30000u);
  saved_element_index = element_index_7;
  scaled_index_4 = 58LL * (int)element_index_7;
  dword_140404A6C[scaled_index_4 + 20074645] = 1;
  dword_140404A6C[scaled_index_4 + 20074646] = 1;
  dword_140404A6C[scaled_index_4 + 20074647] = 1;
  sub_140017CA0(saved_element_index);
  remaining_count_10 = 3;
  do
  {
    sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
    sub_140017CA0(++element_index_7);
    --remaining_count_10;
  }
  while ( remaining_count_10 );
  iteration_count_15 = 0;
  LODWORD(packed_word_bits_2) = 4;
  do
  {
    element_index_7 = *buffer_cursor;
    g_1510AB760 = 0;
    g_1512DB764 = 0;
    g_15138B768 = 0;
    g_14500A5C0 = 0;
    *(_QWORD *)&g_14500A5C4 = 1031798784;
    g_14500A5E4 = 1065353216;
    *(_QWORD *)&g_14500A5E8 = 1031798784;
    g_14500A674 = 1065353216;
    g_14500A678 = 1031798784;
    *(_QWORD *)&g_14500A67C = 1065353216;
    g_14500A650 = 0;
    g_14500A654 = 1031798784;
    g_14500A658 = 1065353216;
    g_14500A684 = 1065353216;
    g_14500A698 = 1065353216;
    g_14500A69C = 1065353216;
    g_14500A6F8 = 1065353216;
    g_14500A6E0 = 0;
    sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 5u);
    if ( (iteration_count_15 & 1) != 0 )
    {
      g_14500A5C0 = 1065353216;
      *(_QWORD *)&g_14500A5C4 = 1031798784;
      g_14500A5E4 = 0;
      *(_QWORD *)&g_14500A5E8 = 1031798784;
      *(_QWORD *)&g_14500A674 = 0;
      *(_QWORD *)&g_14500A67C = 0;
      *(_QWORD *)&g_14500A650 = 1065353216;
      g_14500A658 = 0;
      g_14500A684 = 1031798784;
      g_14500A698 = 1065353216;
      g_14500A69C = 1031798784;
      g_14500A6F8 = 1065353216;
      g_14500A6E0 = 0;
      sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
    }
    if ( (iteration_count_15 & 8) != 0 )
    {
      g_14500A5C0 = 0;
      *(_QWORD *)&g_14500A5C4 = 1031798784;
      g_14500A5E4 = 0;
      g_14500A5E8 = 1031798784;
      g_14500A5EC = 1065353216;
      *(_QWORD *)&g_14500A674 = 0;
      *(_QWORD *)&g_14500A67C = 1065353216;
      *(_QWORD *)&g_14500A650 = 0;
      g_14500A658 = 0;
      g_14500A684 = 1031798784;
      g_14500A698 = 1065353216;
      g_14500A69C = 1031798784;
      g_14500A6F8 = 1065353216;
      g_14500A6E0 = 0;
      sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
    }
    if ( (iteration_count_15 & 4) != 0 )
    {
      g_14500A5C0 = 0;
      g_14500A5C4 = 1031798784;
      g_14500A5C8 = 1065353216;
      g_14500A5E4 = 1065353216;
      g_14500A5E8 = 1031798784;
      g_14500A5EC = 1065353216;
      *(_QWORD *)&g_14500A674 = 1065353216;
      *(_QWORD *)&g_14500A67C = 1065353216;
      *(_QWORD *)&g_14500A650 = 0;
      g_14500A658 = 1065353216;
      g_14500A684 = 1031798784;
      g_14500A698 = 1065353216;
      g_14500A69C = 1031798784;
      g_14500A6F8 = 1065353216;
      g_14500A6E0 = 0;
      sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
    }
    if ( (iteration_count_15 & 2) != 0 )
    {
      g_14500A5C0 = 1065353216;
      g_14500A5C4 = 1031798784;
      g_14500A5C8 = 1065353216;
      g_14500A5E4 = 1065353216;
      *(_QWORD *)&g_14500A5E8 = 1031798784;
      *(_QWORD *)&g_14500A674 = 1065353216;
      *(_QWORD *)&g_14500A67C = 0;
      *(_QWORD *)&g_14500A650 = 1065353216;
      g_14500A658 = 1065353216;
      g_14500A684 = 1031798784;
      g_14500A698 = 1065353216;
      g_14500A69C = 1031798784;
      g_14500A6F8 = 1065353216;
      g_14500A6E0 = 0;
      sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
    }
    saved_element_index_2 = element_index_7;
    scaled_index_5 = 58LL * (int)element_index_7;
    dword_140404A6C[scaled_index_5 + 20074645] = 1;
    dword_140404A6C[scaled_index_5 + 20074646] = 1;
    dword_140404A6C[scaled_index_5 + 20074647] = 1;
    sub_140017CA0(saved_element_index_2);
    ++iteration_count_15;
    ++buffer_cursor;
  }
  while ( iteration_count_15 < 16 );
  record_byte_offset_8 = selection_code;
  iteration_count_16 = 4;
  do
  {
    element_index_5 = 0;
    scaled_ratio_4 = 1.0 / (float)(int)packed_word_bits_2;
    do
    {
      component_sum = 0.0;
      if ( record_byte_offset_8 > 0 )
      {
        remaining_count_11 = iteration_count_16;
        buffer_cursor_6 = (int *)&dword_140404A6C[16 * (record_byte_offset_8 + element_index_5) + 19930090];
        do
        {
          element_index_7 = *buffer_cursor_6;
          scaled_value = component_sum + 0.0625;
          g_1510AB760 = 0;
          g_1512DB764 = 0;
          g_15138B768 = 0;
          g_14500A5C0 = 0;
          g_14500A5C8 = 0;
          component_sum_2 = component_sum + 0.0625;
          g_14500A5E4 = 1065353216;
          if ( (unsigned __int64)element_index_5 < 2 )
          {
            *(float *)&g_14500A5C4 = component_sum + 0.0625;
            component_sum_3 = component_sum + 0.0625;
            if ( element_index_5 == 1 )
              goto LABEL_165;
          }
          else
          {
            component_sum_2 = scaled_value + scaled_ratio_4;
            *(float *)&g_14500A5C4 = scaled_value + scaled_ratio_4;
            component_sum_3 = scaled_value + scaled_ratio_4;
          }
          if ( element_index_5 == 2 )
          {
LABEL_165:
            *(float *)&g_14500A5E8 = component_sum + 0.0625;
            g_14500A5EC = 0;
            *(float *)&float_word_2 = scaled_value + scaled_ratio_4;
            g_14500A674 = 1065353216;
            component_sum_4 = component_sum + 0.0625;
            if ( element_index_5 == 2 )
              goto LABEL_168;
            goto LABEL_166;
          }
          g_14500A5EC = 0;
          component_sum_4 = scaled_value + scaled_ratio_4;
          g_14500A674 = 1065353216;
          *(float *)&g_14500A5E8 = scaled_value + scaled_ratio_4;
          *(float *)&float_word_2 = scaled_value + scaled_ratio_4;
LABEL_166:
          if ( element_index_5 != 3 )
          {
            g_14500A678 = float_word_2;
            scaled_value_2 = *(float *)&float_word_2;
            g_14500A67C = 1065353216;
            g_14500A650 = 0;
            goto LABEL_169;
          }
LABEL_168:
          *(float *)&g_14500A678 = component_sum + 0.0625;
          scaled_value_2 = component_sum + 0.0625;
          g_14500A67C = 1065353216;
          g_14500A650 = 0;
          if ( element_index_5 == 3 )
            goto LABEL_171;
LABEL_169:
          if ( !element_index_5 )
          {
LABEL_171:
            *(float *)&g_14500A654 = component_sum + 0.0625;
            goto LABEL_172;
          }
          g_14500A654 = float_word_2;
          scaled_value = *(float *)&float_word_2;
LABEL_172:
          unused_written_slot_10 = component_sum_4;
          unused_written_slot_13 = scaled_value_2;
          unused_written_slot_15 = scaled_value;
          unused_written_slot_7 = component_sum_3;
          g_14500A658 = 1065353216;
          *(float *)&float_word_3[1] = component_sum_2 - 0.0625;
          *(float *)&float_word_3[4] = component_sum_4 - 0.0625;
          *(float *)&float_word_3[7] = scaled_value_2 - 0.0625;
          unused_written_slot_5 = scaled_value - 0.0625;
          unused_written_slot_6 = 1065353216;
          unused_written_slot_8 = 0;
          unused_written_slot_9 = 1065353216;
          unused_written_slot_11 = 0;
          unused_written_slot_12 = 1065353216;
          unused_written_slot_14 = 1065353216;
          unused_written_slot_16 = 1065353216;
          float_word_3[0] = 0;
          float_word_3[2] = 0;
          float_word_3[3] = 1065353216;
          float_word_3[5] = 0;
          float_word_3[6] = 1065353216;
          unused_written_slot_4 = 1065353216;
          sub_140019C10((__int64)float_word_3, 0, 62);
          saved_element_index_3 = element_index_7;
          scaled_index_6 = 58LL * (int)element_index_7;
          dword_140404A6C[scaled_index_6 + 20074645] = 1;
          dword_140404A6C[scaled_index_6 + 20074646] = 1;
          if ( *(float *)&float_word_2 >= 1.0 )
            dword_140404A6C[scaled_index_6 + 20074646] = 2;
          dword_140404A6C[scaled_index_6 + 20074647] = 1;
          sub_140017CA0(saved_element_index_3);
          ++buffer_cursor_6;
          component_sum = component_sum + scaled_ratio_4;
          --remaining_count_11;
        }
        while ( remaining_count_11 );
      }
      ++element_index_5;
    }
    while ( element_index_5 < 4 );
    for ( n = 0; n < 4; ++n )
    {
      saved_masked_bits = 0;
      if ( record_byte_offset_8 > 0 )
      {
        remaining_count_12 = iteration_count_16;
        buffer_cursor_7 = (int *)&dword_140404A6C[16 * (record_byte_offset_8 + n) + 19929066];
        do
        {
          masked_bits = saved_masked_bits;
          element_index_7 = *buffer_cursor_7;
          g_1510AB760 = 0;
          g_1512DB764 = 0;
          g_15138B768 = 0;
          g_14500A5C0 = 0;
          g_14500A5C8 = 0;
          g_14500A5E4 = 1065353216;
          if ( (unsigned __int64)n < 2 )
          {
            g_14500A5C4 = saved_masked_bits;
            if ( n == 1 )
              goto LABEL_184;
          }
          else
          {
            *(float *)&g_14500A5C4 = *(float *)&saved_masked_bits + scaled_ratio_4;
          }
          if ( n == 2 )
          {
LABEL_184:
            g_14500A5E8 = saved_masked_bits;
            g_14500A5EC = 0;
            g_14500A674 = 1065353216;
            if ( n == 2 )
              goto LABEL_187;
            goto LABEL_185;
          }
          *(float *)&g_14500A5E8 = *(float *)&saved_masked_bits + scaled_ratio_4;
          g_14500A5EC = 0;
          g_14500A674 = 1065353216;
LABEL_185:
          if ( n != 3 )
          {
            *(float *)&g_14500A678 = *(float *)&saved_masked_bits + scaled_ratio_4;
            g_14500A67C = 1065353216;
            g_14500A650 = 0;
            goto LABEL_188;
          }
LABEL_187:
          g_14500A678 = saved_masked_bits;
          g_14500A67C = 1065353216;
          g_14500A650 = 0;
          if ( n == 3 )
            goto LABEL_190;
LABEL_188:
          if ( !n )
          {
LABEL_190:
            g_14500A654 = saved_masked_bits;
            goto LABEL_191;
          }
          *(float *)&g_14500A654 = *(float *)&saved_masked_bits + scaled_ratio_4;
LABEL_191:
          g_14500A658 = 1065353216;
          *(_QWORD *)&g_14500A680 = 0;
          *(_QWORD *)&g_14500A698 = 1065353216;
          *(unsigned int *)&g_14500A6F8 = 1065353216;
          g_14500A6FC = 1065353216;
          *(unsigned int *)&g_14500A6E0 = 0;
          g_14500A6E4 = 1065353216;
          sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
          saved_element_index_4 = element_index_7;
          scaled_index_7 = 58LL * (int)element_index_7;
          dword_140404A6C[scaled_index_7 + 20074645] = 1;
          dword_140404A6C[scaled_index_7 + 20074646] = 1;
          dword_140404A6C[scaled_index_7 + 20074647] = 1;
          sub_140017CA0(saved_element_index_4);
          ++buffer_cursor_7;
          *(float *)&masked_bits = *(float *)&saved_masked_bits + scaled_ratio_4;
          saved_masked_bits = masked_bits;
          --remaining_count_12;
        }
        while ( remaining_count_12 );
      }
    }
    ++iteration_count_16;
    packed_word_bits_2 = (unsigned int)(saved_packed_word_bits_6 + 1);
    record_byte_offset_8 += 4;
    saved_packed_word_bits_6 = packed_word_bits_2;
  }
  while ( (int)packed_word_bits_2 <= 12 );
  element_index_6 = 0;
  remaining_count_13 = 3;
  while ( 2 )
  {
    element_index_7 = dword_140404A6C[element_index_6 + 19928918];
    g_1510AB760 = 0;
    g_1512DB764 = 0;
    g_15138B768 = 0;
    g_14500A5C0 = 0;
    if ( element_index_6 && element_index_6 != 3 )
    {
      *(_QWORD *)&g_14500A5C4 = 0;
      g_14500A5E4 = 1065353216;
      goto LABEL_199;
    }
    *(_QWORD *)&g_14500A5C4 = 1065353216;
    g_14500A5E4 = 1065353216;
    if ( element_index_6 )
    {
LABEL_199:
      if ( element_index_6 != 1 )
      {
        *(_QWORD *)&g_14500A5E8 = 0;
        g_14500A674 = 1065353216;
        goto LABEL_202;
      }
    }
    *(_QWORD *)&g_14500A5E8 = 1065353216;
    g_14500A674 = 1065353216;
    if ( element_index_6 != 1 )
    {
LABEL_202:
      if ( element_index_6 != 2 )
      {
        g_14500A678 = 0;
        g_14500A67C = 1065353216;
        g_14500A650 = 0;
        goto LABEL_205;
      }
    }
    g_14500A678 = 1065353216;
    g_14500A67C = 1065353216;
    g_14500A650 = 0;
    if ( element_index_6 == 2 )
    {
LABEL_206:
      g_14500A654 = 1065353216;
    }
    else
    {
LABEL_205:
      g_14500A654 = 0;
      if ( element_index_6 == 3 )
        goto LABEL_206;
    }
    g_14500A658 = 1065353216;
    g_14500A680 = 0;
    g_14500A684 = 1065353216;
    g_14500A698 = 1065353216;
    g_14500A69C = 1065353216;
    g_14500A6F8 = 1065353216;
    g_14500A6E0 = 0;
    sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, 0);
    saved_element_index_5 = element_index_7;
    scaled_index_8 = 58LL * (int)element_index_7;
    dword_140404A6C[scaled_index_8 + 20074645] = 1;
    dword_140404A6C[scaled_index_8 + 20074646] = 1;
    dword_140404A6C[scaled_index_8 + 20074647] = 1;
    sub_140017CA0(saved_element_index_5);
    if ( ++element_index_6 < 4 )
      continue;
    break;
  }
  element_index_7 = g_14500CB84;
  g_1510AB760 = 0;
  g_1512DB764 = 0;
  g_15138B768 = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278EE0);
  unused_written_slot_3 = 0x100000001LL;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, scaled_ratio_4, 1.0, 0x22u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.3125, 0.0625, 0x2Au, SR_VEC_LANES(128, si128, i32));
  saved_element_index_6 = element_index_7;
  scaled_index_9 = 58LL * (int)element_index_7;
  dword_140404A6C[scaled_index_9 + 20074645] = 1;
  dword_140404A6C[scaled_index_9 + 20074646] = 1;
  dword_140404A6C[scaled_index_9 + 20074647] = 1;
  sub_140017CA0(saved_element_index_6);
  remaining_count_14 = 3;
  do
  {
    sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
    sub_140017CA0(++element_index_7);
    --remaining_count_14;
  }
  while ( remaining_count_14 );
  element_index_7 = g_14500CB94;
  g_1510AB760 = 0;
  g_1512DB764 = 0;
  g_15138B768 = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, scaled_ratio_4, 1.0, 0x32u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 0.0625, 0.3125, 0.0625, 0x32u, SR_VEC_LANES(128, si128, i32));
  saved_element_index_7 = element_index_7;
  scaled_index_10 = 58LL * (int)element_index_7;
  dword_140404A6C[scaled_index_10 + 20074645] = 1;
  dword_140404A6C[scaled_index_10 + 20074646] = 1;
  dword_140404A6C[scaled_index_10 + 20074647] = 1;
  sub_140017CA0(saved_element_index_7);
  remaining_count_15 = 3;
  do
  {
    sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
    sub_140017CA0(++element_index_7);
    --remaining_count_15;
  }
  while ( remaining_count_15 );
  element_index_7 = g_14500A75C;
  g_1510AB760 = 0;
  g_1512DB764 = 0;
  g_15138B768 = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.0625, 1.0, 0x2Au, SR_VEC_LANES(128, si128, i32));
  si128 = _mm_cvtsi64_si128((long long)(0));
  unused_written_slot_3 = 0;
  sub_140019940(0, 0.5, 0.0, 0.5, 0.0625, 0.3125, 0.0625, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.25, 0.4375, 1.0, 0.1875, 0.125, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  saved_element_index_8 = element_index_7;
  scaled_index_11 = 58LL * (int)element_index_7;
  dword_140404A6C[scaled_index_11 + 20074645] = 1;
  dword_140404A6C[scaled_index_11 + 20074646] = 1;
  dword_140404A6C[scaled_index_11 + 20074647] = 1;
  sub_140017CA0(saved_element_index_8);
  do
  {
    sub_14004D170(element_index_7 + 1, &dword_140404A6C[58 * element_index_7 + 20074645]);
    sub_140017CA0(++element_index_7);
    --remaining_count_13;
  }
  while ( remaining_count_13 );
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef element_index_7
#undef saved_iteration_count
#undef unused_written_slot
#undef unused_written_slot_2
#undef Buffer
#undef k
#undef packed_word_bits_3
#undef iteration_count_17
#undef saved_packed_word_bits_6
#undef selection_code
#undef si128
#undef unused_written_slot_3
#undef float_word_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef unused_written_slot_9
#undef unused_written_slot_10
#undef unused_written_slot_11
#undef unused_written_slot_12
#undef unused_written_slot_13
#undef unused_written_slot_14
#undef unused_written_slot_15
#undef unused_written_slot_16
#undef Str1
#undef unused_frame_slot_784

//----- (0000000140012670) ----------------------------------------------------
void            sub_140012670(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 block_record_offset;
  signed int table_value;
  signed int shifted_bits;
  signed int table_value_2;
  signed int shifted_bits_2;
  __int64 shifted_bits_3;
  __int64 shifted_bits_4;
  __int64 masked_bits;
  int world_block_unknown_8_at_result;
  int world_block_unknown_8_at_result_2;
  int world_block_unknown_8_at_result_3;
  int world_block_unknown_8_at_result_4;
  int world_block_unknown_8_at_result_5;
  int world_block_unknown_8_at_result_6;

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * (int)a1;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( (int)(a2 >> 6) < table_value )
    {
      shifted_bits = a3 >> 6;
      if ( shifted_bits < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        shifted_bits_2 = a4 >> 6;
        if ( shifted_bits_2 < table_value_2 )
        {
          shifted_bits_3 = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (int)((a2 >> 6) + table_value * (shifted_bits_2 + shifted_bits * table_value_2)));
          if ( (_DWORD)shifted_bits_3 != -1 )
          {
            shifted_bits_4 = (int)dword_140404A6C[263004 * (int)a1
                                     + 111579985
                                     + 513 * shifted_bits_3
                                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( (_DWORD)shifted_bits_4 != -1 )
            {
              masked_bits = 6930 * shifted_bits_4 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
              if ( (dword_140404A6C[masked_bits + 83194359] & 0xE0000000) == 0x40000000 )
              {
                world_block_unknown_8_at_result = sr_world_block_unknown_8_at(a1, a2, a3 - 1, a4);
                if ( (world_block_unknown_8_at_result & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 - 1, a4, world_block_unknown_8_at_result | 0x20);
                world_block_unknown_8_at_result_2 = sr_world_block_unknown_8_at(a1, a2, a3 + 1, a4);
                if ( (world_block_unknown_8_at_result_2 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 + 1, a4, world_block_unknown_8_at_result_2 | 1);
                world_block_unknown_8_at_result_3 = sr_world_block_unknown_8_at(a1, a2, a3, a4 + 1);
                if ( (world_block_unknown_8_at_result_3 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 + 1, world_block_unknown_8_at_result_3 | 8);
                world_block_unknown_8_at_result_4 = sr_world_block_unknown_8_at(a1, a2, a3, a4 - 1);
                if ( (world_block_unknown_8_at_result_4 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 - 1, world_block_unknown_8_at_result_4 | 2);
                world_block_unknown_8_at_result_5 = sr_world_block_unknown_8_at(a1, a2 - 1, a3, a4);
                if ( (world_block_unknown_8_at_result_5 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 - 1, a3, a4, world_block_unknown_8_at_result_5 | 0x10);
                world_block_unknown_8_at_result_6 = sr_world_block_unknown_8_at(a1, a2 + 1, a3, a4);
                if ( (world_block_unknown_8_at_result_6 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 + 1, a3, a4, world_block_unknown_8_at_result_6 | 4);
              }
              dword_140404A6C[masked_bits + 83194359] = 0;
              dword_140404A6C[masked_bits + 83197431] = 0;
              sr_world_mark_block_record(a1, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

//----- (0000000140013120) ----------------------------------------------------
__int64            sub_140013120(signed int a1, signed int a2)
{
  __int64 float_word;
  unsigned int float_word_2;
  __int64 record_word_offset;
  __int64 scaled_index;
  unsigned int table_value;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __int64 scaled_index_2;
  unsigned int float_word_3;
  int state_word;
  float weighted_sum;
  signed int iteration_count;
  float converted_vector_4;
  float converted_vector_5;
  float converted_vector_6;
  int record_byte_offset;
  int *state_address;
  signed int iteration_count_2;
  signed int iteration_count_3;
  int loaded_word;
  unsigned int state_address_2;
  __int64 scaled_index_3;
  float scaled_value;
  int shifted_bits;
  int masked_bits;
  __int64 masked_bits_2;
  float weighted_sum_2;
  __int64 record_byte_offset_2;
  __int64 masked_bits_3;
  __int64 remaining_count;
  __int64 masked_bits_4;
  __m128i converted_vector_7;
  float *weighted_sum_3;
  __int64 masked_bits_5;
  __m128i converted_vector_8;
  __m128i converted_vector_9;
  unsigned int *running_total;
  float converted_vector_10;
  unsigned int *running_total_2;
  __int64 integer_difference;
  __int64 integer_difference_2;
  float converted_vector_11;
  float converted_vector_12;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  unsigned int loaded_word_2;
  signed int iteration_count_4;
  int masked_bits_6;
  int saved_iteration_count;
  __int64 record_byte_offset_3;
  int saved_float_word;
  __int64 masked_bits_7;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float cached_iteration_count;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float *product_difference;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  unsigned int *loaded_record_pointer;
  __int64 record_byte_offset_4;
  char *record_byte_offset_5;
  __int64 masked_bits_8;
  __int64 masked_bits_9;
  int cached_scaled_index;
  int masked_bits_10;
  __int16 masked_bits_11;
  __int64 remaining_count_2;
  __int64 scaled_index_17;
  unsigned int scaled_index_18;
  unsigned int scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  __m128 xor_vector;
  __m128 xor_vector_2;
  __m128 xor_vector_3;
  __m128 xor_vector_4;
  __m128 xor_vector_5;
  __m128 xor_vector_6;
  char shifted_bits_2;
  __int64 remaining_count_3;
  __m128 saved_xor_vector;
  __m128 saved_xor_vector_2;
  __m128 saved_xor_vector_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  __int64 scaled_index_26;
  float state_address_3;
  float state_address_4;
  float state_address_5;
  float weighted_sum_15;
  __int64 scaled_index_27;
  float state_address_6;
  float state_address_7;
  float state_address_8;
  float weighted_sum_16;
  __int64 scaled_index_28;
  float state_address_9;
  float state_address_10;
  float scaled_value_2;
  float state_address_11;
  float scaled_value_3;
  float saved_scaled_value;
  float weighted_sum_17;
  float scaled_value_4;
  float saved_scaled_value_2;
  float weighted_sum_18;
  __int64 scaled_index_29;
  float state_address_12;
  float state_address_13;
  float state_address_14;
  float weighted_sum_19;
  float weighted_sum_20;
  __int64 scaled_index_30;
  float combined_products_7;
  float weighted_sum_21;
  float combined_products_8;
  __int64 scaled_index_31;
  float component_delta;
  float combined_products_9;
  float combined_products_10;
  float combined_products_11;
  float *product_difference_2;
  int masked_bits_12;
  __int64 remaining_count_4;
  int *buffer_cursor;
  _DWORD *state_address_15;
  __int64 loaded_word_3;
  __int64 saved_float_word_2;
  int *state_address_16;
  int *buffer_cursor_2;
  int scaled_index_32;
  int i;
  int j;
  int loaded_word_4;
  __int64 masked_bits_13;
  int state_address_17;
  int state_address_18;
  unsigned int float_word_4;
  __int64 selection_code;
  float weighted_sum_22;
  float weighted_sum_23;
  __int64 scaled_index_33;
  __int64 scaled_index_34;
  char *state_address_19;
  __int64 selection_code_2;
  int scaled_index_35;
  int iteration_count_5;
  unsigned int *record_byte_offset_6;
  unsigned int masked_bits_14;
  int record_byte_offset_7;
  int k;
  int m;
  unsigned int scaled_index_36;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  unsigned int scaled_index_37;
  float weighted_sum_30;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float weighted_sum_35;
  unsigned int scaled_index_38;
  float weighted_sum_36;
  float weighted_sum_37;
  float weighted_sum_38;
  float weighted_sum_39;
  float weighted_sum_40;
  float weighted_sum_41;
  unsigned int scaled_index_39;
  float weighted_sum_42;
  float weighted_sum_43;
  float weighted_sum_44;
  float weighted_sum_45;
  float weighted_sum_46;
  float weighted_sum_47;
  int lookup_index;
  int saved_state_word;
  unsigned int state_word_2;
  int state_word_3;
  int iteration_count_6;
  int running_total_3;
  int running_total_4;
  __int64 saved_running_total;
  __int64 saved_running_total_2;
  __int64 integer_sum;
  __int64 scaled_index_40;
  __int64 scaled_index_41;
  int saved_float_word_3;
  int element_index;
  __int64 saved_element_index;
  __int64 scaled_index_42;
  __int64 scaled_index_43;
  __int64 scaled_index_44;
  __int64 scaled_index_45;
  __int64 scaled_index_46;
  __int64 scaled_index_47;
  __int64 scaled_index_48;
  __int64 scaled_index_49;
  __int64 scaled_index_50;
  __int64 scaled_index_51;
  __int64 scaled_index_52;
  __int64 scaled_index_53;
  __int64 scaled_index_54;
  int remaining_count_5;
  int n;
  __int64 integer_sum_2;
  int iteration_count_7;
  __int64 integer_sum_3;
  signed int element_index_2;
  __int64 scaled_index_55;
  __int64 scaled_index_56;
  __int64 scaled_index_57;
  __int64 scaled_index_58;
  unsigned int table_value_2;
  int iteration_count_8;
  unsigned int *saved_element_index_2;
  __int64 masked_bits_15;
  __int16 loword_result;
  unsigned int saved_remaining_count;
  int iteration_count_9;
  __int64 integer_sum_4;
  int running_total_5;
  float saved_scaled_value_3;
  float saved_scaled_value_4;
  int integer_sum_5;
  __int64 scaled_index_59;
  unsigned int *state_address_20;
  _DWORD *running_total_6;
  unsigned int *state_address_21;
  __int64 running_total_7;
  signed __int64 state_address_22;
  unsigned int *saved_buffer_cursor;
  float scaled_value_5;
  int saved_element_index_3;
  int *buffer_cursor_3;
  __int64 element_index_3;
  int element_index_4;
  int iteration_count_10;
  unsigned int *buffer_cursor_4;
  __int64 loaded_word_5;
  __int64 scaled_index_60;
  __int64 table_value_3;
  __int64 scaled_index_61;
  __int64 scaled_index_62;
  __int64 scaled_index_63;
  __int64 saved_float_word_4;
  int element_index_5;
  int running_total_8;
  int running_total_9;
  int integer_difference_3;
  unsigned int table_value_4;
  unsigned int scaled_index_64;
  unsigned int table_value_5;
  unsigned int scaled_index_65;
  unsigned int table_value_6;
  unsigned int scaled_index_66;
  unsigned int table_value_7;
  int iteration_count_11;
  int record_byte_offset_8;
  __int64 saved_record_byte_offset;
  __int64 integer_sum_6;
  int state_word_4;
  unsigned int integer_sum_7;
  __int64 masked_bits_16;
  int ii;
  int iteration_count_12;
  unsigned int *state_address_23;
  unsigned int *buffer_cursor_5;
  __int64 scaled_index_67;
  __int64 masked_bits_17;
  int state_word_5;
  __int64 remaining_count_6;
  char *state_address_24;
  unsigned int *state_address_25;
  int scaled_index_68;
  unsigned int table_value_8;
  int scaled_index_69;
  int scaled_index_70;
  int scaled_index_71;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140013120[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140013120 + 0)) /* [rsp+0h] */
#define scaled_value_6 (*(float (*))(void *)(sr_frame_140013120 + 32)) /* [rsp+20h] */
#define scaled_value_7 (*(float (*))(void *)(sr_frame_140013120 + 36)) /* [rsp+24h] */
#define element_index_6 (*(int (*))(void *)(sr_frame_140013120 + 40)) /* [rsp+28h] */
#define saved_converted_vector (*(int (*))(void *)(sr_frame_140013120 + 44)) /* [rsp+2Ch] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_140013120 + 48)) /* [rsp+30h] */
#define iteration_count_13 (*(int (*))(void *)(sr_frame_140013120 + 52)) /* [rsp+34h] */
#define float_word_5 (*(int (*))(void *)(sr_frame_140013120 + 56)) /* [rsp+38h] */
#define saved_state_address (*(signed __int64 (*))(void *)(sr_frame_140013120 + 64)) /* [rsp+40h] */
#define saved_running_total_3 (*(__int64 (*))(void *)(sr_frame_140013120 + 72)) /* [rsp+48h] */
#define saved_converted_vector_2 (*(float (*))(void *)(sr_frame_140013120 + 80)) /* [rsp+50h] */
#define state_word_6 (*(signed int (*))(void *)(sr_frame_140013120 + 84)) /* [rsp+54h] */
#define float_word_6 (*(unsigned int (*))(void *)(sr_frame_140013120 + 88)) /* [rsp+58h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140013120 + 92)) /* [rsp+5Ch] */
#define weighted_sum_48 (*(float (*))(void *)(sr_frame_140013120 + 96)) /* [rsp+60h] */
#define saved_converted_vector_3 (*(__int64 (*))(void *)(sr_frame_140013120 + 104)) /* [rsp+68h] */
#define scaled_index_72 (*(int (*))(void *)(sr_frame_140013120 + 112)) /* [rsp+70h] */
#define state_address_26 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 120)) /* [rsp+78h] */
#define buffer_cursor_6 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 128)) /* [rsp+80h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140013120 + 136)) /* [rsp+88h] */
#define cached_scaled_index_2 (*(__int64 (*))(void *)(sr_frame_140013120 + 144)) /* [rsp+90h] */
#define cached_scaled_index_3 (*(__int64 (*))(void *)(sr_frame_140013120 + 152)) /* [rsp+98h] */
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_140013120 + 160)) /* [rsp+A0h] */

  float_word = a1;
  float_word_2 = a2;
  LODWORD(saved_state_address) = a2;
  LODWORD(saved_running_total_3) = a1;
  if ( (unsigned int)a1 <= 0xFFF )
  {
    record_word_offset = 27720LL * a1;
    saved_record_word_offset = record_word_offset;
    if ( *(unsigned int *)((char *)&g_154161240 + record_word_offset) )
    {
      scaled_index = a2 + 6930LL * a1;
      cached_scaled_index_3 = scaled_index;
      table_value = dword_140404A6C[scaled_index + 83200503];
      if ( table_value != -2
        && table_value > 0x3FF
        && ((int)g_150F61024 < 1 || (unsigned int)sub_140198F9B() - g_150F61028 < 0x10) )
      {
        converted_vector = _mm_cvtsi32_si128(dword_140404A6C[6930 * float_word + 83200507]);
        converted_vector_2 = _mm_cvtsi32_si128(dword_140404A6C[6930 * float_word + 83200508]);
        converted_vector_3 = _mm_cvtsi32_si128(dword_140404A6C[6930 * float_word + 83200509]);
        state_word_6 = g_151E46220;
        scaled_index_2 = 263004LL * (int)dword_140404A6C[6930 * float_word + 83194358];
        g_15155B7B0 = 0;
        *(float *)&float_word_3 = 0.0;
        g_1510AB760 = 0;
        state_word = 0;
        g_1512DB764 = 0;
        g_15138B768 = 0;
        weighted_sum = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
        g_15155CFB4 = 0;
        iteration_count = 2 * float_word_2;
        saved_iteration_count_2 = 2 * float_word_2;
        converted_vector_4 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 8.0) * weighted_sum;
        converted_vector_5 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0] * 8.0) * weighted_sum;
        converted_vector_6 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * 8.0) * weighted_sum;
        saved_converted_vector_2 = converted_vector_4;
        *(float *)&saved_converted_vector_3 = converted_vector_5;
        *(float *)&saved_converted_vector = converted_vector_6;
        if ( (int)(2 * float_word_2) < (int)(2 * float_word_2 + 2) )
        {
          record_byte_offset = 16 * float_word_2;
          state_address = (int *)((char *)&dword_140404A6C[64 * (__int64)(int)(2 * float_word_2) + 83197431] + record_word_offset);
          element_index_6 = 16 * float_word_2;
          do
          {
            iteration_count_2 = 0;
            float_word_5 = 0;
            do
            {
              iteration_count_3 = 0;
              iteration_count_13 = 0;
              buffer_cursor_6 = (unsigned int *)state_address;
              do
              {
                loaded_word = *state_address;
                if ( (*state_address & 0xE0000000) == 0x80000000 )
                {
                  scaled_value_7 = *(float *)&float_word_3;
                  scaled_index_72 = 8 * (iteration_count_3 + 8 * (record_byte_offset + iteration_count_2));
                  state_address_2 = (loaded_word >> 24) & 3;
                  scaled_index_3 = 232LL * (unsigned __int16)loaded_word;
                  scaled_value = *(float *)&float_word_3;
                  shifted_bits = loaded_word >> 16;
                  scaled_value_6 = *(float *)&state_address_2;
                  cached_scaled_index_2 = scaled_index_3;
                  masked_bits = *(unsigned int *)((char *)&g_145098C40 + scaled_index_3);
                  scratch_buffer[0] = *(_QWORD *)((char *)&g_154164A48 + record_word_offset + scaled_index_72);
                  if ( masked_bits > 0 )
                  {
                    masked_bits_2 = *(_QWORD *)((char *)&g_145098C48 + scaled_index_3);
                    weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                    record_byte_offset_2 = 0;
                    masked_bits_3 = *(_QWORD *)((char *)&g_145098C58 + scaled_index_3);
                    remaining_count = (unsigned int)masked_bits;
                    masked_bits_4 = *(_QWORD *)((char *)&g_145098C60 + scaled_index_3);
                    converted_vector_7 = _mm_cvtsi32_si128(iteration_count);
                    weighted_sum_3 = (float *)(masked_bits_2 + 8);
                    masked_bits_5 = *(_QWORD *)((char *)&g_145098C50 + scaled_index_3);
                    converted_vector_8 = _mm_cvtsi32_si128(iteration_count_2);
                    converted_vector_9 = _mm_cvtsi32_si128(iteration_count_3);
                    running_total = (unsigned int *)(masked_bits_3 + 8);
                    converted_vector_10 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_9), f32)[0];
                    running_total_2 = (unsigned int *)(masked_bits_5 + 8);
                    integer_difference = masked_bits_5 - masked_bits_2;
                    integer_difference_2 = masked_bits_3 - masked_bits_2;
                    converted_vector_11 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_7), f32)[0];
                    converted_vector_12 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_8), f32)[0];
                    do
                    {
                      *(float *)&dword_140404A6C[3 * float_word_3 + 70687550] = (float)(converted_vector_10 + *(weighted_sum_3 - 2)) * weighted_sum_2;
                      *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] = (float)(converted_vector_11 + *(weighted_sum_3 - 1))
                                                                                           * weighted_sum_2;
                      *(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] = (float)(converted_vector_12 + *weighted_sum_3) * weighted_sum_2;
                      dword_140404A6C[g_1510AB760 + 70933310] = (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687550];
                      dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687551] << 8;
                      dword_140404A6C[g_1510AB760 + 70933310] |= (int)*(float *)&dword_140404A6C[3 * g_1510AB760 + 70687552] << 16;
                      scaled_index_4 = 3LL * (int)g_1510AB760;
                      *(float *)&dword_140404A6C[scaled_index_4 + 70687550] = converted_vector_4
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * g_1510AB760
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[scaled_index_4 + 70687551] = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_4 + 70687551];
                      *(float *)&dword_140404A6C[scaled_index_4 + 70687552] = converted_vector_6 + *(float *)&dword_140404A6C[scaled_index_4 + 70687552];
                      scaled_index_5 = 3LL * (int)g_1510AB760;
                      *(float *)&dword_140404A6C[scaled_index_5 + 70687550] = *(float *)&dword_140404A6C[scaled_index_2 + 111579638]
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * g_1510AB760
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[scaled_index_5 + 70687551] = *(float *)&dword_140404A6C[scaled_index_2 + 111579639]
                                                                 + *(float *)&dword_140404A6C[scaled_index_5 + 70687551];
                      *(float *)&dword_140404A6C[scaled_index_5 + 70687552] = *(float *)&dword_140404A6C[scaled_index_2 + 111579640]
                                                                 + *(float *)&dword_140404A6C[scaled_index_5 + 70687552];
                      scaled_index_6 = 3LL * (int)g_1510AB760;
                      dword_140404A6C[scaled_index_6 + 70736702] = *(_DWORD *)((char *)weighted_sum_3 + integer_difference - 8);
                      dword_140404A6C[scaled_index_6 + 70736703] = *(running_total_2 - 1);
                      dword_140404A6C[scaled_index_6 + 70736704] = *running_total_2;
                      dword_140404A6C[g_1510AB760 + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * g_1510AB760 + 70736702]
                                                                                          + 1.0) << 24;
                      dword_140404A6C[g_1510AB760 + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * g_1510AB760 + 70736703]
                                                                                          + 1.0) << 26;
                      running_total_2 += 3;
                      dword_140404A6C[g_1510AB760 + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * g_1510AB760 + 70736704]
                                                                                          + 1.0) << 28;
                      scaled_index_7 = 3LL * (int)g_1510AB760;
                      dword_140404A6C[scaled_index_7 + 70785854] = *(_DWORD *)((char *)weighted_sum_3 + integer_difference_2 - 8);
                      weighted_sum_3 += 3;
                      dword_140404A6C[scaled_index_7 + 70785855] = *(running_total - 1);
                      loaded_word_2 = *running_total;
                      running_total += 3;
                      dword_140404A6C[scaled_index_7 + 70785856] = loaded_word_2;
                      dword_140404A6C[3 * g_1510AB760 + 70835006] = *(_DWORD *)(record_byte_offset_2 + masked_bits_4);
                      dword_140404A6C[3 * g_1510AB760 + 70835007] = *(_DWORD *)(record_byte_offset_2 + masked_bits_4 + 4);
                      record_byte_offset_2 += 8;
                      dword_140404A6C[3 * g_1510AB760 + 70835008] = 0;
                      dword_140404A6C[3 * g_1510AB760 + 70884158] = 1065353216;
                      dword_140404A6C[3 * g_1510AB760 + 70884159] = 1065353216;
                      dword_140404A6C[3 * g_1510AB760 + 70884160] = 1065353216;
                      float_word_3 = ++g_1510AB760;
                      --remaining_count;
                    }
                    while ( remaining_count );
                    state_word = g_15155CFB4;
                    scaled_value = scaled_value_7;
                    *(float *)&state_address_2 = scaled_value_6;
                  }
                  iteration_count_4 = 0;
                  masked_bits_6 = *(unsigned int *)((char *)&g_145098CD8 + scaled_index_3);
                  if ( masked_bits_6 > 0 )
                  {
                    saved_iteration_count = iteration_count_13;
                    record_byte_offset_3 = 40;
                    saved_float_word = float_word_5;
                    do
                    {
                      if ( ((unsigned __int8)(1 << iteration_count_4) & (unsigned __int8)shifted_bits) == 0 && state_word < 256 )
                      {
                        masked_bits_7 = *(_QWORD *)((char *)&g_145098CE0 + scaled_index_3);
                        weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                        weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                        weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                        weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                        cached_iteration_count = (float)saved_iteration_count_2;
                        *(float *)&dword_140404A6C[20 * state_word + 71655768] = (float)((float)saved_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 4))
                                                                        * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655769] = (float)(cached_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655770] = (float)((float)saved_float_word + *(float *)(masked_bits_7 + record_byte_offset_3 + 4))
                                                                                              * weighted_sum_4;
                        scaled_index_8 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_8 + 71655768] = converted_vector_4
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655768];
                        *(float *)&dword_140404A6C[2 * scaled_index_8 + 71655769] = converted_vector_5
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_8 + 71655769];
                        *(float *)&dword_140404A6C[2 * scaled_index_8 + 71655770] = converted_vector_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_8 + 71655770];
                        scaled_index_9 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_9 + 71655768] = weighted_sum_5
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655768];
                        *(float *)&dword_140404A6C[2 * scaled_index_9 + 71655769] = weighted_sum_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_9 + 71655769];
                        *(float *)&dword_140404A6C[2 * scaled_index_9 + 71655770] = weighted_sum_7
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_9 + 71655770];
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655771] = (float)((float)saved_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 16))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655772] = (float)(cached_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 12))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655773] = (float)((float)saved_float_word + *(float *)(masked_bits_7 + record_byte_offset_3 - 8))
                                                                                              * weighted_sum_4;
                        scaled_index_10 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_10 + 71655771] = converted_vector_4
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655771];
                        *(float *)&dword_140404A6C[2 * scaled_index_10 + 71655772] = converted_vector_5
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_10 + 71655772];
                        *(float *)&dword_140404A6C[2 * scaled_index_10 + 71655773] = converted_vector_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_10 + 71655773];
                        scaled_index_11 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_11 + 71655771] = weighted_sum_5
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655771];
                        *(float *)&dword_140404A6C[2 * scaled_index_11 + 71655772] = weighted_sum_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_11 + 71655772];
                        *(float *)&dword_140404A6C[2 * scaled_index_11 + 71655773] = weighted_sum_7
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_11 + 71655773];
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655774] = (float)((float)saved_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 28))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655775] = (float)(cached_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 24))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655776] = (float)((float)saved_float_word + *(float *)(masked_bits_7 + record_byte_offset_3 - 20))
                                                                                              * weighted_sum_4;
                        scaled_index_12 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_12 + 71655774] = converted_vector_4
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655774];
                        *(float *)&dword_140404A6C[2 * scaled_index_12 + 71655775] = converted_vector_5
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_12 + 71655775];
                        *(float *)&dword_140404A6C[2 * scaled_index_12 + 71655776] = converted_vector_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_12 + 71655776];
                        scaled_index_13 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_13 + 71655774] = weighted_sum_5
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655774];
                        *(float *)&dword_140404A6C[2 * scaled_index_13 + 71655775] = weighted_sum_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_13 + 71655775];
                        *(float *)&dword_140404A6C[2 * scaled_index_13 + 71655776] = weighted_sum_7
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_13 + 71655776];
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655777] = (float)((float)saved_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 40))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655778] = (float)(cached_iteration_count + *(float *)(masked_bits_7 + record_byte_offset_3 - 36))
                                                                                              * weighted_sum_4;
                        *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655779] = (float)((float)saved_float_word + *(float *)(masked_bits_7 + record_byte_offset_3 - 32))
                                                                                              * weighted_sum_4;
                        scaled_index_14 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_14 + 71655777] = converted_vector_4
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655777];
                        *(float *)&dword_140404A6C[2 * scaled_index_14 + 71655778] = converted_vector_5
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_14 + 71655778];
                        *(float *)&dword_140404A6C[2 * scaled_index_14 + 71655779] = converted_vector_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_14 + 71655779];
                        scaled_index_15 = 10LL * (int)g_15155CFB4;
                        *(float *)&dword_140404A6C[2 * scaled_index_15 + 71655777] = weighted_sum_5
                                                                       + *(float *)&dword_140404A6C[20 * g_15155CFB4 + 71655777];
                        *(float *)&dword_140404A6C[2 * scaled_index_15 + 71655778] = weighted_sum_6
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_15 + 71655778];
                        *(float *)&dword_140404A6C[2 * scaled_index_15 + 71655779] = weighted_sum_7
                                                                       + *(float *)&dword_140404A6C[2 * scaled_index_15 + 71655779];
                        scaled_index_16 = 20LL * (int)g_15155CFB4;
                        weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_16 + 71655769];
                        weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_16 + 71655768];
                        weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_16 + 71655770];
                        combined_products = *(float *)&dword_140404A6C[scaled_index_16 + 71655775] - weighted_sum_8;
                        combined_products_2 = *(float *)&dword_140404A6C[scaled_index_16 + 71655776] - weighted_sum_10;
                        combined_products_3 = *(float *)&dword_140404A6C[scaled_index_16 + 71655772] - weighted_sum_8;
                        combined_products_4 = *(float *)&dword_140404A6C[scaled_index_16 + 71655773] - weighted_sum_10;
                        combined_products_5 = *(float *)&dword_140404A6C[scaled_index_16 + 71655771] - weighted_sum_9;
                        combined_products_6 = *(float *)&dword_140404A6C[scaled_index_16 + 71655774] - weighted_sum_9;
                        saved_weighted_sum = weighted_sum_8;
                        *(float *)&float_word_6 = weighted_sum_9;
                        weighted_sum_48 = weighted_sum_10;
                        product_difference = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_16 * 4 + 290836476);
                        *product_difference = (float)(combined_products * combined_products_4) - (float)(combined_products_2 * combined_products_3);
                        product_difference[1] = (float)(combined_products_2 * combined_products_5) - (float)(combined_products_4 * combined_products_6);
                        product_difference[2] = (float)(combined_products_3 * combined_products_6) - (float)(combined_products * combined_products_5);
                        sr_math_vec3_normalize((__int64)product_difference, product_difference);
                        dword_140404A6C[20 * g_15155CFB4 + 71655763] = 1;
                        dword_140404A6C[20 * g_15155CFB4 + 71655764] = saved_iteration_count;
                        dword_140404A6C[20 * g_15155CFB4 + 71655765] = saved_iteration_count_2;
                        dword_140404A6C[20 * g_15155CFB4 + 71655766] = saved_float_word;
                        dword_140404A6C[20 * g_15155CFB4 + 71655767] = iteration_count_4;
                        state_word = ++g_15155CFB4;
                      }
                      ++iteration_count_4;
                      record_byte_offset_3 += 48;
                    }
                    while ( iteration_count_4 < masked_bits_6 );
                    float_word_3 = g_1510AB760;
                    scaled_value = scaled_value_7;
                    *(float *)&state_address_2 = scaled_value_6;
                  }
                  loaded_record_pointer = (unsigned int *)*(unsigned int *)((char *)&g_145098C68 + scaled_index_3);
                  if ( (int)loaded_record_pointer > 0 )
                  {
                    record_byte_offset_4 = 8;
                    record_byte_offset_5 = *(char **)((char *)&g_145098C98 + scaled_index_3);
                    masked_bits_8 = *(_QWORD *)((char *)&g_145098C88 + scaled_index_3);
                    masked_bits_9 = *(_QWORD *)((char *)&g_145098C90 + scaled_index_3) - (_QWORD)record_byte_offset_5;
                    cached_scaled_index = scaled_index_72;
                    state_address_26 = loaded_record_pointer;
                    do
                    {
                      dword_140404A6C[4 * g_1512DB764 + 70998847] = LODWORD(scaled_value)
                                                                                + *(_DWORD *)(masked_bits_8 + record_byte_offset_4 - 8);
                      dword_140404A6C[4 * g_1512DB764 + 70998848] = LODWORD(scaled_value)
                                                                                + *(_DWORD *)(masked_bits_8 + record_byte_offset_4 - 4);
                      dword_140404A6C[4 * g_1512DB764 + 70998849] = LODWORD(scaled_value) + *(_DWORD *)(masked_bits_8 + record_byte_offset_4);
                      dword_140404A6C[4 * g_1512DB764 + 70998850] = LODWORD(scaled_value)
                                                                                + *(_DWORD *)(masked_bits_8 + record_byte_offset_4 + 4);
                      masked_bits_10 = *(_DWORD *)&record_byte_offset_5[masked_bits_9];
                      if ( (unsigned __int8)masked_bits_10 >= 8u )
                      {
                        masked_bits_11 = *((_WORD *)&dword_140404A6C[6930 * (int)saved_running_total_3 + 83195379] + cached_scaled_index + (unsigned __int8)masked_bits_10);
                        if ( masked_bits_11 >= 0 )
                        {
                          dword_140404A6C[g_1512DB764 + 71064383] = (unsigned __int16)masked_bits_11;
                          dword_140404A6C[g_1512DB764 + 71064383] = (unsigned __int8)dword_140404A6C[g_1512DB764 + 71064383];
                        }
                        else
                        {
                          dword_140404A6C[g_1512DB764 + 71064383] = dword_140404A6C[3
                                                                                                * (*((_WORD *)&dword_140404A6C[6930 * (int)saved_running_total_3 + 83195379] + cached_scaled_index + (unsigned __int8)masked_bits_10)
                                                                                                 & 0x3FF)
                                                                                                + 421769142];
                        }
                      }
                      else
                      {
                        dword_140404A6C[g_1512DB764 + 71064383] = *((unsigned __int8 *)scratch_buffer
                                                                                + (unsigned __int8)masked_bits_10);
                      }
                      if ( (*record_byte_offset_5 & 1) != 0 )
                      {
                        if ( *(float *)&state_address_2 != 0.0 )
                        {
                          remaining_count_2 = state_address_2;
                          do
                          {
                            scaled_index_17 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998847];
                            scaled_index_18 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                + 70835006];
                            scaled_index_19 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                + 70835007];
                            scaled_index_20 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                            dword_140404A6C[scaled_index_17 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * g_1512DB764
                                                                                            + 70998850]
                                                                            + 70835006];
                            dword_140404A6C[scaled_index_17 + 70835007] = dword_140404A6C[scaled_index_20 + 70835007];
                            scaled_index_21 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                            scaled_index_22 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                            dword_140404A6C[scaled_index_22 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * g_1512DB764
                                                                                            + 70998849]
                                                                            + 70835006];
                            dword_140404A6C[scaled_index_22 + 70835007] = dword_140404A6C[scaled_index_21 + 70835007];
                            scaled_index_23 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                            scaled_index_24 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                            dword_140404A6C[scaled_index_24 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * g_1512DB764
                                                                                            + 70998848]
                                                                            + 70835006];
                            dword_140404A6C[scaled_index_24 + 70835007] = dword_140404A6C[scaled_index_23 + 70835007];
                            scaled_index_25 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                            dword_140404A6C[scaled_index_25 + 70835006] = scaled_index_18;
                            dword_140404A6C[scaled_index_25 + 70835007] = scaled_index_19;
                            --remaining_count_2;
                          }
                          while ( remaining_count_2 );
                        }
                        xor_vector = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        xor_vector_2 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        xor_vector_3 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        xor_vector_4 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        xor_vector_5 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        xor_vector_6 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        shifted_bits_2 = state_address_2 + (*(int *)&record_byte_offset_5[masked_bits_9] >> 12);
                        scaled_value_6 = SR_VEC_LANES(128, xor_vector, f32)[0];
                        scaled_value_7 = SR_VEC_LANES(128, xor_vector_2, f32)[0];
                        remaining_count_3 = shifted_bits_2 & 3;
                        if ( (_DWORD)remaining_count_3 )
                        {
                          do
                          {
                            saved_xor_vector = xor_vector_6;
                            saved_xor_vector_2 = xor_vector_5;
                            saved_xor_vector_3 = xor_vector_3;
                            xor_vector_3 = _mm_xor_ps(xor_vector, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            xor_vector_5 = _mm_xor_ps(xor_vector_4, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            xor_vector_6 = _mm_xor_ps(xor_vector_2, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            xor_vector = saved_xor_vector_3;
                            xor_vector_4 = saved_xor_vector_2;
                            xor_vector_2 = saved_xor_vector;
                            --remaining_count_3;
                          }
                          while ( remaining_count_3 );
                          scaled_value_7 = SR_VEC_LANES(128, saved_xor_vector, f32)[0];
                          scaled_value_6 = SR_VEC_LANES(128, saved_xor_vector_3, f32)[0];
                        }
                        weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_2 + 111579654];
                        weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                        weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                        weighted_sum_14 = *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                        scaled_index_26 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998847];
                        state_address_3 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687550]
                                     - saved_converted_vector_2)
                             - weighted_sum_12;
                        state_address_4 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687552]
                                     - *(float *)&saved_converted_vector)
                             - weighted_sum_14;
                        state_address_5 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998847]
                                                                + 70687551]
                                     - *(float *)&saved_converted_vector_3)
                             - weighted_sum_13;
                        weighted_sum_15 = (float)((float)(SR_VEC_LANES(128, xor_vector_4, f32)[0] * state_address_5) + (float)(scaled_value_6 * state_address_3)) + (float)(scaled_value_7 * state_address_4);
                        *(float *)&dword_140404A6C[scaled_index_26 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, xor_vector_5, f32)[0] * state_address_5)
                                                                                    + (float)(SR_VEC_LANES(128, xor_vector_3, f32)[0] * state_address_3))
                                                                            + (float)(SR_VEC_LANES(128, xor_vector_6, f32)[0] * state_address_4))
                                                                    * weighted_sum_11;
                        *(float *)&dword_140404A6C[scaled_index_26 + 70835007] = weighted_sum_15 * weighted_sum_11;
                        scaled_index_27 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                        state_address_6 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687550]
                                     - saved_converted_vector_2)
                             - weighted_sum_12;
                        state_address_7 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687551]
                                     - *(float *)&saved_converted_vector_3)
                             - weighted_sum_13;
                        state_address_8 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998848]
                                                                + 70687552]
                                     - *(float *)&saved_converted_vector)
                             - weighted_sum_14;
                        weighted_sum_16 = (float)((float)(SR_VEC_LANES(128, xor_vector_4, f32)[0] * state_address_7) + (float)(scaled_value_6 * state_address_6)) + (float)(scaled_value_7 * state_address_8);
                        *(float *)&dword_140404A6C[scaled_index_27 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, xor_vector_5, f32)[0] * state_address_7)
                                                                                    + (float)(SR_VEC_LANES(128, xor_vector_3, f32)[0] * state_address_6))
                                                                            + (float)(SR_VEC_LANES(128, xor_vector_6, f32)[0] * state_address_8))
                                                                    * weighted_sum_11;
                        *(float *)&dword_140404A6C[scaled_index_27 + 70835007] = weighted_sum_16 * weighted_sum_11;
                        scaled_index_28 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                        state_address_9 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687550]
                                     - saved_converted_vector_2)
                             - weighted_sum_12;
                        state_address_10 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687551]
                                     - *(float *)&saved_converted_vector_3)
                             - weighted_sum_13;
                        scaled_value_2 = SR_VEC_LANES(128, xor_vector_5, f32)[0] * state_address_10;
                        state_address_11 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * g_1512DB764
                                                                                + 70998849]
                                                                + 70687552]
                                     - *(float *)&saved_converted_vector)
                             - weighted_sum_14;
                        scaled_value_3 = SR_VEC_LANES(128, xor_vector_4, f32)[0] * state_address_10;
                        saved_scaled_value = scaled_value_6;
                        weighted_sum_17 = scaled_value_2 + (float)(SR_VEC_LANES(128, xor_vector_3, f32)[0] * state_address_9);
                        scaled_value_4 = scaled_value_6 * state_address_9;
                        saved_scaled_value_2 = scaled_value_7;
                        weighted_sum_18 = (float)(scaled_value_3 + scaled_value_4) + (float)(scaled_value_7 * state_address_11);
                        *(float *)&dword_140404A6C[scaled_index_28 + 70835006] = (float)(weighted_sum_17 + (float)(SR_VEC_LANES(128, xor_vector_6, f32)[0] * state_address_11))
                                                                    * weighted_sum_11;
                        *(float *)&dword_140404A6C[scaled_index_28 + 70835007] = weighted_sum_18 * weighted_sum_11;
                        scaled_index_29 = (int)dword_140404A6C[4 * g_1512DB764 + 70998850];
                        state_address_12 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_29 + 70687550] - saved_converted_vector_2) - weighted_sum_12;
                        state_address_13 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_29 + 70687551] - *(float *)&saved_converted_vector_3) - weighted_sum_13;
                        state_address_14 = (float)(*(float *)&dword_140404A6C[3 * scaled_index_29 + 70687552] - *(float *)&saved_converted_vector) - weighted_sum_14;
                        *(float *)&dword_140404A6C[3 * scaled_index_29 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, xor_vector_5, f32)[0] * state_address_13)
                                                                                        + (float)(SR_VEC_LANES(128, xor_vector_3, f32)[0] * state_address_12))
                                                                                + (float)(SR_VEC_LANES(128, xor_vector_6, f32)[0] * state_address_14))
                                                                        * weighted_sum_11;
                        *(float *)&dword_140404A6C[3 * scaled_index_29 + 70835007] = (float)((float)((float)(SR_VEC_LANES(128, xor_vector_4, f32)[0] * state_address_13)
                                                                                        + (float)(saved_scaled_value * state_address_12))
                                                                                + (float)(saved_scaled_value_2 * state_address_14))
                                                                        * weighted_sum_11;
                      }
                      dword_140404A6C[g_1512DB764 + 71097151] = 0;
                      if ( *record_byte_offset_5 < 0 )
                        dword_140404A6C[g_1512DB764 + 71097151] = 128;
                      weighted_sum_19 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                      + 70687551];
                      weighted_sum_20 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847]
                                                      + 70687552];
                      scaled_index_30 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998848];
                      float_word_6 = dword_140404A6C[3 * dword_140404A6C[4 * g_1512DB764 + 70998847] + 70687550];
                      combined_products_7 = *(float *)&dword_140404A6C[scaled_index_30 + 70687550] - *(float *)&float_word_6;
                      weighted_sum_21 = *(float *)&dword_140404A6C[scaled_index_30 + 70687552];
                      combined_products_8 = *(float *)&dword_140404A6C[scaled_index_30 + 70687551] - weighted_sum_19;
                      scaled_index_31 = 3LL * (int)dword_140404A6C[4 * g_1512DB764 + 70998849];
                      saved_weighted_sum = weighted_sum_19;
                      component_delta = weighted_sum_21 - weighted_sum_20;
                      combined_products_9 = *(float *)&dword_140404A6C[scaled_index_31 + 70687551] - weighted_sum_19;
                      combined_products_10 = *(float *)&dword_140404A6C[scaled_index_31 + 70687552] - weighted_sum_20;
                      combined_products_11 = *(float *)&dword_140404A6C[scaled_index_31 + 70687550] - *(float *)&float_word_6;
                      weighted_sum_48 = weighted_sum_20;
                      product_difference_2 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * (int)g_1512DB764 + 288667496);
                      *product_difference_2 = (float)(combined_products_9 * component_delta) - (float)(combined_products_10 * combined_products_8);
                      product_difference_2[1] = (float)(combined_products_7 * combined_products_10) - (float)(combined_products_11 * component_delta);
                      product_difference_2[2] = (float)(combined_products_11 * combined_products_8) - (float)(combined_products_7 * combined_products_9);
                      sr_math_vec3_normalize((__int64)product_difference_2, product_difference_2);
                      ++g_1512DB764;
                      record_byte_offset_4 += 16;
                      record_byte_offset_5 += 4;
                      state_address_26 = (unsigned int *)((char *)state_address_26 - 1);
                    }
                    while ( state_address_26 );
                    state_word = g_15155CFB4;
                    float_word_3 = g_1510AB760;
                    converted_vector_4 = saved_converted_vector_2;
                    converted_vector_5 = *(float *)&saved_converted_vector_3;
                    converted_vector_6 = *(float *)&saved_converted_vector;
                    scaled_index_3 = cached_scaled_index_2;
                  }
                  masked_bits_12 = *(unsigned int *)((char *)&g_145098CA8 + scaled_index_3);
                  if ( masked_bits_12 > 0 )
                  {
                    remaining_count_4 = (unsigned int)masked_bits_12;
                    buffer_cursor = *(int **)((char *)&g_145098CB8 + scaled_index_3);
                    state_address_15 = (_DWORD *)(*(_QWORD *)((char *)&g_145098CB0 + scaled_index_3) + 8LL);
                    do
                    {
                      dword_140404A6C[3 * g_15138B768 + 71179072] = LODWORD(scaled_value) + *(state_address_15 - 2);
                      dword_140404A6C[3 * g_15138B768 + 71179073] = LODWORD(scaled_value) + *(state_address_15 - 1);
                      dword_140404A6C[3 * g_15138B768 + 71179074] = LODWORD(scaled_value) + *state_address_15;
                      loaded_word_3 = *buffer_cursor;
                      if ( (int)loaded_word_3 >= 8 )
                        dword_140404A6C[g_15138B768 + 71277377] = 0;
                      else
                        dword_140404A6C[g_15138B768 + 71277377] = *((unsigned __int8 *)scratch_buffer + loaded_word_3);
                      state_address_15 += 3;
                      ++buffer_cursor;
                      dword_140404A6C[g_15138B768 + 71293761] = 0;
                      ++g_15138B768;
                      --remaining_count_4;
                    }
                    while ( remaining_count_4 );
                    state_word = g_15155CFB4;
                    float_word_3 = g_1510AB760;
                  }
                  record_word_offset = saved_record_word_offset;
                  record_byte_offset = element_index_6;
                  iteration_count = saved_iteration_count_2;
                  iteration_count_2 = float_word_5;
                  iteration_count_3 = iteration_count_13;
                }
                ++iteration_count_3;
                state_address = (int *)(buffer_cursor_6 + 1);
                iteration_count_13 = iteration_count_3;
                ++buffer_cursor_6;
              }
              while ( iteration_count_3 < 8 );
              float_word_5 = ++iteration_count_2;
            }
            while ( iteration_count_2 < 8 );
            ++iteration_count;
            record_byte_offset += 8;
            saved_iteration_count_2 = iteration_count;
            element_index_6 = record_byte_offset;
          }
          while ( iteration_count < 2 * (int)saved_state_address + 2 );
          saved_float_word_2 = 35876LL * state_word_6;
          state_address_16 = (int *)((char *)&g_151E46234 + saved_float_word_2);
          saved_converted_vector_3 = saved_float_word_2;
          buffer_cursor_2 = (int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)saved_state_address) + 83198967] + record_word_offset);
          element_index_6 = 2 * saved_state_address;
          *(unsigned int *)((char *)&g_151E46234 + saved_float_word_2) = 0;
          scaled_index_32 = 0;
          while ( 1 )
          {
            for ( i = 0; i < 8; ++i )
            {
              for ( j = 0; j < 8; ++j )
              {
                loaded_word_4 = *buffer_cursor_2;
                if ( *buffer_cursor_2 <= 0 )
                  goto LABEL_72;
                masked_bits_13 = loaded_word_4 & 0x7F;
                state_address_17 = (loaded_word_4 >> 12) & 0xFFF;
                state_address_18 = (loaded_word_4 >> 10) & 3;
                *(unsigned int *)((char *)&dword_140404A6C[15 * scaled_index_32 + 73991667] + saved_float_word_2) = masked_bits_13;
                float_word_4 = dword_140404A6C[2310 * masked_bits_13 + 432533577];
                float_word_6 = dword_140404A6C[2310 * masked_bits_13 + 432533576];
                weighted_sum_48 = *(float *)&dword_140404A6C[2310 * masked_bits_13 + 432533578];
                saved_weighted_sum = *(float *)&float_word_4;
                switch ( state_address_18 )
                {
                  case 1:
                    selection_code = 1070141403;
                    break;
                  case 2:
                    selection_code = 1078530011;
                    break;
                  case 3:
                    selection_code = 1083624420;
                    break;
                  default:
                    goto LABEL_64;
                }
                sr_math_vec3_rotate((float *)&float_word_6, (float *)&dword_1402F6188, *(double *)&selection_code);
LABEL_64:
                weighted_sum_22 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                *(float *)((char *)&dword_140404A6C[15 * *state_address_16 + 73991670] + saved_float_word_2) = (float)((float)((float)j + 0.5)
                                                                                           * weighted_sum_22)
                                                                                   + *(float *)&float_word_6;
                weighted_sum_23 = (float)((float)((float)i + 0.5) * weighted_sum_22) + weighted_sum_48;
                *(float *)((char *)&dword_140404A6C[15 * *state_address_16 + 73991671] + saved_float_word_2) = (float)((float)element_index_6 * weighted_sum_22) + saved_weighted_sum;
                *(float *)((char *)&dword_140404A6C[15 * *state_address_16 + 73991672] + saved_float_word_2) = weighted_sum_23;
                scaled_index_33 = saved_float_word_2 + 60LL * *state_address_16;
                *(float *)((char *)&g_151E46244 + scaled_index_33) = converted_vector_4
                                                                      + *(float *)((char *)&g_151E46244
                                                                                 + scaled_index_33);
                *(float *)((char *)&g_151E46248 + scaled_index_33) = converted_vector_5
                                                                      + *(float *)((char *)&g_151E46248
                                                                                 + scaled_index_33);
                *(float *)((char *)&g_151E4624C + scaled_index_33) = converted_vector_6
                                                                      + *(float *)((char *)&g_151E4624C
                                                                                 + scaled_index_33);
                scaled_index_34 = saved_float_word_2 + 60LL * *state_address_16;
                *(float *)((char *)&g_151E46244 + scaled_index_34) = *(float *)&dword_140404A6C[scaled_index_2 + 111579638]
                                                                      + *(float *)((char *)&g_151E46244
                                                                                 + scaled_index_34);
                *(float *)((char *)&g_151E46248 + scaled_index_34) = *(float *)((char *)&g_151E46248
                                                                                 + scaled_index_34)
                                                                      + *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                *(float *)((char *)&g_151E4624C + scaled_index_34) = *(float *)((char *)&g_151E4624C
                                                                                 + scaled_index_34)
                                                                      + *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                state_address_19 = (char *)&dword_140404A6C[15 * *state_address_16 + 73991673] + saved_float_word_2;
                *(_QWORD *)state_address_19 = 1065353216;
                *((_QWORD *)state_address_19 + 1) = 0;
                *((_QWORD *)state_address_19 + 2) = 1065353216;
                *((_QWORD *)state_address_19 + 3) = 0;
                *((_DWORD *)state_address_19 + 8) = 1065353216;
                switch ( state_address_18 )
                {
                  case 1:
                    selection_code_2 = 1070141403;
LABEL_70:
                    sr_math_mat3_rotate_rows(
                      (__int64)&dword_140404A6C[15 * *state_address_16 + 73991673] + saved_float_word_2,
                      (float *)&dword_1402F6188,
                      *(double *)&selection_code_2);
                    break;
                  case 2:
                    selection_code_2 = 1078530011;
                    goto LABEL_70;
                  case 3:
                    selection_code_2 = 1083624420;
                    goto LABEL_70;
                }
                *(unsigned int *)((char *)&dword_140404A6C[15 * *state_address_16 + 73991668] + saved_float_word_2) = state_address_17;
                *(unsigned int *)((char *)&dword_140404A6C[15 * *state_address_16 + 73991669] + saved_float_word_2) = ((_BYTE)state_address_18 - 2) & 3;
                scaled_index_32 = *state_address_16 + 1;
                *state_address_16 = scaled_index_32;
LABEL_72:
                ++buffer_cursor_2;
              }
            }
            float_word_2 = saved_state_address;
            ++element_index_6;
            scaled_index_35 = 2 * saved_state_address + 2;
            if ( element_index_6 >= scaled_index_35 )
            {
              iteration_count_5 = 2 * saved_state_address;
              record_byte_offset_6 = (unsigned int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)saved_state_address) + 83199991] + saved_record_word_offset);
              *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = 0;
              masked_bits_14 = 0;
              record_byte_offset_7 = 16 * float_word_2;
              do
              {
                for ( k = 0; k < 8; ++k )
                {
                  for ( m = 0; m < 8; m += 4 )
                  {
                    scaled_index_36 = *(record_byte_offset_6 - 512);
                    if ( scaled_index_36 )
                    {
                      weighted_sum_24 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                      weighted_sum_25 = converted_vector_4 + *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * masked_bits_14 + 73993588] + saved_float_word_2) = *(record_byte_offset_6 - 512) & 0x3FF;
                      weighted_sum_26 = (float)((float)((float)m + 0.5) * weighted_sum_24) + weighted_sum_25;
                      weighted_sum_27 = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993590]
                                      + saved_float_word_2) = *record_byte_offset_6;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993589]
                                      + saved_float_word_2) = m + 8 * (record_byte_offset_7 + k);
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993591]
                                      + saved_float_word_2) = HIBYTE(scaled_index_36) & 3;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993592]
                               + saved_float_word_2) = weighted_sum_26;
                      weighted_sum_28 = (float)((float)iteration_count_5 * weighted_sum_24) + weighted_sum_27;
                      weighted_sum_29 = converted_vector_6 + *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993593]
                               + saved_float_word_2) = weighted_sum_28;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993594]
                               + saved_float_word_2) = (float)((float)((float)k + 0.5) * weighted_sum_24) + weighted_sum_29;
                      masked_bits_14 = *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) + 1;
                      *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = masked_bits_14;
                    }
                    scaled_index_37 = *(record_byte_offset_6 - 511);
                    if ( scaled_index_37 )
                    {
                      weighted_sum_30 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                      weighted_sum_31 = converted_vector_4 + *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * masked_bits_14 + 73993588] + saved_float_word_2) = *(record_byte_offset_6 - 511) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993590]
                                      + saved_float_word_2) = record_byte_offset_6[1];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993589]
                                      + saved_float_word_2) = m + 8 * (record_byte_offset_7 + k) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993591]
                                      + saved_float_word_2) = HIBYTE(scaled_index_37) & 3;
                      weighted_sum_32 = (float)((float)((float)(m + 1) + 0.5) * weighted_sum_30) + weighted_sum_31;
                      weighted_sum_33 = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993592]
                               + saved_float_word_2) = weighted_sum_32;
                      weighted_sum_34 = (float)((float)iteration_count_5 * weighted_sum_30) + weighted_sum_33;
                      weighted_sum_35 = converted_vector_6 + *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993593]
                               + saved_float_word_2) = weighted_sum_34;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993594]
                               + saved_float_word_2) = (float)((float)((float)k + 0.5) * weighted_sum_30) + weighted_sum_35;
                      masked_bits_14 = *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) + 1;
                      *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = masked_bits_14;
                    }
                    scaled_index_38 = *(record_byte_offset_6 - 510);
                    if ( scaled_index_38 )
                    {
                      weighted_sum_36 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                      weighted_sum_37 = converted_vector_4 + *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * masked_bits_14 + 73993588] + saved_float_word_2) = *(record_byte_offset_6 - 510) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993590]
                                      + saved_float_word_2) = record_byte_offset_6[2];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993589]
                                      + saved_float_word_2) = m + 8 * (record_byte_offset_7 + k) + 2;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993591]
                                      + saved_float_word_2) = HIBYTE(scaled_index_38) & 3;
                      weighted_sum_38 = (float)((float)((float)(m + 2) + 0.5) * weighted_sum_36) + weighted_sum_37;
                      weighted_sum_39 = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993592]
                               + saved_float_word_2) = weighted_sum_38;
                      weighted_sum_40 = (float)((float)iteration_count_5 * weighted_sum_36) + weighted_sum_39;
                      weighted_sum_41 = converted_vector_6 + *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993593]
                               + saved_float_word_2) = weighted_sum_40;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993594]
                               + saved_float_word_2) = (float)((float)((float)k + 0.5) * weighted_sum_36) + weighted_sum_41;
                      masked_bits_14 = *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) + 1;
                      *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = masked_bits_14;
                    }
                    scaled_index_39 = *(record_byte_offset_6 - 509);
                    if ( scaled_index_39 )
                    {
                      weighted_sum_42 = *(float *)&dword_140404A6C[scaled_index_2 + 111579653];
                      weighted_sum_43 = converted_vector_4 + *(float *)&dword_140404A6C[scaled_index_2 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * masked_bits_14 + 73993588] + saved_float_word_2) = *(record_byte_offset_6 - 509) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993590]
                                      + saved_float_word_2) = record_byte_offset_6[3];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993589]
                                      + saved_float_word_2) = m + 8 * (record_byte_offset_7 + k) + 3;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&g_151E48038
                                                                                 + saved_float_word_2)
                                                               + 73993591]
                                      + saved_float_word_2) = HIBYTE(scaled_index_39) & 3;
                      weighted_sum_44 = (float)((float)((float)(m + 3) + 0.5) * weighted_sum_42) + weighted_sum_43;
                      weighted_sum_45 = converted_vector_5 + *(float *)&dword_140404A6C[scaled_index_2 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993592]
                               + saved_float_word_2) = weighted_sum_44;
                      weighted_sum_46 = (float)((float)iteration_count_5 * weighted_sum_42) + weighted_sum_45;
                      weighted_sum_47 = converted_vector_6 + *(float *)&dword_140404A6C[scaled_index_2 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993593]
                               + saved_float_word_2) = weighted_sum_46;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2)
                                                        + 73993594]
                               + saved_float_word_2) = (float)((float)((float)k + 0.5) * weighted_sum_42) + weighted_sum_47;
                      masked_bits_14 = *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) + 1;
                      *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = masked_bits_14;
                    }
                    record_byte_offset_6 += 4;
                  }
                }
                ++iteration_count_5;
                record_byte_offset_7 += 8;
              }
              while ( iteration_count_5 < scaled_index_35 );
              scaled_index = cached_scaled_index_3;
              LODWORD(float_word) = saved_running_total_3;
              lookup_index = 0;
              saved_state_word = state_word_6;
              goto LABEL_91;
            }
          }
        }
        saved_state_word = state_word_6;
        saved_float_word_2 = 35876LL * state_word_6;
        saved_converted_vector_3 = saved_float_word_2;
        state_address_16 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + saved_float_word_2 + 300180020);
        lookup_index = 0;
        masked_bits_14 = 0;
        *(unsigned int *)((char *)&g_151E48038 + saved_float_word_2) = 0;
        *state_address_16 = 0;
LABEL_91:
        if ( g_1512DB764 || g_15138B768 || *state_address_16 || masked_bits_14 )
        {
          ++g_150F61024;
          sub_140185D00();
          state_word_2 = g_151A84860;
          state_word_3 = g_1512DB764;
          iteration_count_6 = 0;
          if ( (int)g_151A84860 < (int)g_1512DB764 )
            state_word_2 = g_1512DB764;
          g_151A84860 = state_word_2;
          if ( (int)g_15138B768 > 0 )
          {
            running_total_3 = 0;
            running_total_4 = 0;
            do
            {
              saved_running_total = running_total_3;
              running_total_3 += 9;
              saved_running_total_2 = running_total_4;
              running_total_4 += 3;
              dword_140404A6C[saved_running_total_2 + 71359297] = -1;
              *(_QWORD *)&dword_140404A6C[saved_running_total + 71506753] = 0;
              dword_140404A6C[saved_running_total + 71506755] = 0;
              dword_140404A6C[saved_running_total_2 + 71359298] = -1;
              *(_QWORD *)&dword_140404A6C[saved_running_total + 71506756] = 0;
              dword_140404A6C[saved_running_total + 71506758] = 0;
              dword_140404A6C[saved_running_total_2 + 71359299] = -1;
              *(_QWORD *)&dword_140404A6C[saved_running_total + 71506759] = 0;
              dword_140404A6C[saved_running_total + 71506761] = 0;
              integer_sum = iteration_count_6++;
              scaled_index_40 = 3 * integer_sum;
              scaled_index_41 = 3LL * (int)dword_140404A6C[3 * integer_sum + 71179072];
              dword_140404A6C[scaled_index_40 + 71310145] = dword_140404A6C[3 * dword_140404A6C[3 * integer_sum + 71179072] + 70736702];
              dword_140404A6C[scaled_index_40 + 71310146] = dword_140404A6C[scaled_index_41 + 70736703];
              dword_140404A6C[scaled_index_40 + 71310147] = dword_140404A6C[scaled_index_41 + 70736704];
            }
            while ( iteration_count_6 < (int)g_15138B768 );
            state_word_3 = g_1512DB764;
          }
          saved_float_word_3 = 2;
          element_index = 0;
          saved_converted_vector = 2;
          if ( state_word_3 > 0 )
          {
            do
            {
              saved_element_index = element_index;
              scaled_index_42 = 2LL * element_index;
              dword_140404A6C[3 * g_15138B768 + 71179072] = dword_140404A6C[4 * element_index + 70998847];
              dword_140404A6C[3 * g_15138B768 + 71179073] = dword_140404A6C[4 * element_index + 70998848];
              dword_140404A6C[3 * g_15138B768 + 71179074] = dword_140404A6C[4 * element_index + 70998849];
              scaled_index_43 = 3LL * (int)dword_140404A6C[4 * element_index + 70998847];
              scaled_index_44 = 3LL * (int)g_15138B768;
              dword_140404A6C[scaled_index_44 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * element_index + 70998847] + 70736702];
              dword_140404A6C[scaled_index_44 + 71310146] = dword_140404A6C[scaled_index_43 + 70736703];
              dword_140404A6C[scaled_index_44 + 71310147] = dword_140404A6C[scaled_index_43 + 70736704];
              dword_140404A6C[g_15138B768 + 71277377] = dword_140404A6C[element_index + 71064383];
              dword_140404A6C[g_15138B768 + 71293761] = dword_140404A6C[element_index + 71097151];
              dword_140404A6C[3 * g_15138B768 + 71359297] = -1;
              scaled_index_45 = 9 * g_15138B768;
              *(_QWORD *)&dword_140404A6C[scaled_index_45 + 71506753] = 0;
              dword_140404A6C[scaled_index_45 + 71506755] = 0;
              dword_140404A6C[3 * g_15138B768 + 71359298] = -1;
              scaled_index_46 = 9 * g_15138B768;
              *(_QWORD *)&dword_140404A6C[scaled_index_46 + 71506756] = 0;
              dword_140404A6C[scaled_index_46 + 71506758] = 0;
              dword_140404A6C[3 * g_15138B768 + 71359299] = g_15138B768 + 1;
              dword_140404A6C[6 * g_15138B768 + 71408454] = 2;
              scaled_index_47 = 3LL * (int)dword_140404A6C[4 * element_index + 70998847];
              scaled_index_48 = 9 * g_15138B768;
              dword_140404A6C[scaled_index_48 + 71506759] = dword_140404A6C[3 * dword_140404A6C[4 * element_index + 70998847] + 70736702];
              dword_140404A6C[scaled_index_48 + 71506760] = dword_140404A6C[scaled_index_47 + 70736703];
              dword_140404A6C[scaled_index_48 + 71506761] = dword_140404A6C[scaled_index_47 + 70736704];
              ++g_15138B768;
              dword_140404A6C[3 * g_15138B768 + 71179072] = dword_140404A6C[4 * element_index + 70998847];
              dword_140404A6C[3 * g_15138B768 + 71179073] = dword_140404A6C[4 * element_index++ + 70998849];
              dword_140404A6C[3 * g_15138B768 + 71179074] = dword_140404A6C[2 * scaled_index_42 + 70998850];
              scaled_index_49 = 3LL * (int)dword_140404A6C[2 * scaled_index_42 + 70998847];
              scaled_index_50 = 3LL * (int)g_15138B768;
              dword_140404A6C[scaled_index_50 + 71310145] = dword_140404A6C[3 * dword_140404A6C[2 * scaled_index_42 + 70998847] + 70736702];
              dword_140404A6C[scaled_index_50 + 71310146] = dword_140404A6C[scaled_index_49 + 70736703];
              dword_140404A6C[scaled_index_50 + 71310147] = dword_140404A6C[scaled_index_49 + 70736704];
              dword_140404A6C[g_15138B768 + 71277377] = dword_140404A6C[saved_element_index + 71064383];
              dword_140404A6C[g_15138B768 + 71293761] = dword_140404A6C[saved_element_index + 71097151];
              dword_140404A6C[3 * g_15138B768 + 71359297] = g_15138B768 - 1;
              dword_140404A6C[6 * g_15138B768 + 71408450] = 1;
              scaled_index_51 = 3LL * (int)dword_140404A6C[2 * scaled_index_42 + 70998847];
              scaled_index_52 = 9 * g_15138B768;
              dword_140404A6C[scaled_index_52 + 71506753] = dword_140404A6C[3 * dword_140404A6C[2 * scaled_index_42 + 70998847] + 70736702];
              dword_140404A6C[scaled_index_52 + 71506754] = dword_140404A6C[scaled_index_51 + 70736703];
              dword_140404A6C[scaled_index_52 + 71506755] = dword_140404A6C[scaled_index_51 + 70736704];
              dword_140404A6C[3 * g_15138B768 + 71359298] = -1;
              scaled_index_53 = 9 * g_15138B768;
              *(_QWORD *)&dword_140404A6C[scaled_index_53 + 71506756] = 0;
              dword_140404A6C[scaled_index_53 + 71506758] = 0;
              dword_140404A6C[3 * g_15138B768 + 71359299] = -1;
              scaled_index_54 = 9 * g_15138B768;
              *(_QWORD *)&dword_140404A6C[scaled_index_54 + 71506759] = 0;
              dword_140404A6C[scaled_index_54 + 71506761] = 0;
              ++g_15138B768;
            }
            while ( element_index < (int)g_1512DB764 );
          }
          remaining_count_5 = g_1510AB760;
          for ( n = 0; n < (int)g_1510AB760; remaining_count_5 = g_1510AB760 )
          {
            integer_sum_2 = n++;
            dword_140404A6C[integer_sum_2 + 70982462] = 0;
          }
          iteration_count_7 = 0;
          if ( (int)g_15138B768 > 0 )
          {
            do
            {
              integer_sum_3 = iteration_count_7++;
              dword_140404A6C[dword_140404A6C[3 * integer_sum_3 + 71179072] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * integer_sum_3 + 71179073] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * integer_sum_3 + 71179074] + 70982462] = 1;
            }
            while ( iteration_count_7 < (int)g_15138B768 );
            remaining_count_5 = g_1510AB760;
          }
          element_index_2 = 0;
          while ( element_index_2 < remaining_count_5 )
          {
            if ( dword_140404A6C[element_index_2 + 70982462] )
            {
              ++element_index_2;
            }
            else
            {
              g_1510AB760 = --remaining_count_5;
              if ( element_index_2 >= remaining_count_5 )
                break;
              scaled_index_55 = 3LL * element_index_2;
              dword_140404A6C[scaled_index_55 + 70687550] = dword_140404A6C[3 * remaining_count_5 + 70687550];
              dword_140404A6C[scaled_index_55 + 70687551] = dword_140404A6C[3 * remaining_count_5 + 70687551];
              dword_140404A6C[scaled_index_55 + 70687552] = dword_140404A6C[3 * remaining_count_5 + 70687552];
              scaled_index_56 = 3LL * (int)g_1510AB760;
              dword_140404A6C[scaled_index_55 + 70736702] = dword_140404A6C[3 * g_1510AB760 + 70736702];
              dword_140404A6C[scaled_index_55 + 70736703] = dword_140404A6C[scaled_index_56 + 70736703];
              dword_140404A6C[scaled_index_55 + 70736704] = dword_140404A6C[scaled_index_56 + 70736704];
              scaled_index_57 = 3LL * (int)g_1510AB760;
              dword_140404A6C[scaled_index_55 + 70785854] = dword_140404A6C[3 * g_1510AB760 + 70785854];
              dword_140404A6C[scaled_index_55 + 70785855] = dword_140404A6C[scaled_index_57 + 70785855];
              dword_140404A6C[scaled_index_55 + 70785856] = dword_140404A6C[scaled_index_57 + 70785856];
              dword_140404A6C[scaled_index_55 + 70835006] = dword_140404A6C[3 * g_1510AB760 + 70835006];
              dword_140404A6C[scaled_index_55 + 70835007] = dword_140404A6C[3 * g_1510AB760 + 70835007];
              dword_140404A6C[scaled_index_55 + 70835008] = dword_140404A6C[3 * g_1510AB760 + 70835008];
              scaled_index_58 = 3LL * (int)g_1510AB760;
              dword_140404A6C[scaled_index_55 + 70884158] = dword_140404A6C[3 * g_1510AB760 + 70884158];
              dword_140404A6C[scaled_index_55 + 70884159] = dword_140404A6C[scaled_index_58 + 70884159];
              table_value_2 = dword_140404A6C[scaled_index_58 + 70884160];
              iteration_count_8 = 0;
              dword_140404A6C[scaled_index_55 + 70884160] = table_value_2;
              dword_140404A6C[element_index_2 + 70933310] = dword_140404A6C[g_1510AB760 + 70933310];
              dword_140404A6C[element_index_2 + 70982462] = dword_140404A6C[g_1510AB760 + 70982462];
              remaining_count_5 = g_1510AB760;
              if ( (int)g_15138B768 > 0 )
              {
                saved_element_index_2 = &g_15138B770;
                do
                {
                  if ( *(saved_element_index_2 - 1) == remaining_count_5 )
                  {
                    *(saved_element_index_2 - 1) = element_index_2;
                    remaining_count_5 = g_1510AB760;
                  }
                  if ( *saved_element_index_2 == remaining_count_5 )
                  {
                    *saved_element_index_2 = element_index_2;
                    remaining_count_5 = g_1510AB760;
                  }
                  if ( saved_element_index_2[1] == remaining_count_5 )
                  {
                    saved_element_index_2[1] = element_index_2;
                    remaining_count_5 = g_1510AB760;
                  }
                  ++iteration_count_8;
                  saved_element_index_2 += 3;
                }
                while ( iteration_count_8 < (int)g_15138B768 );
              }
            }
          }
          masked_bits_15 = *(int *)((char *)&g_151E46224 + saved_float_word_2);
          if ( (_DWORD)masked_bits_15 != -1 )
            dword_140404A6C[6930 * masked_bits_15 + 83200503 + *(int *)((char *)&g_151E46228 + saved_float_word_2)] = -1;
          ++g_16B27E3A8;
          g_16B27E3A4 += remaining_count_5;
          *(unsigned int *)((char *)&g_151E46224 + saved_float_word_2) = float_word;
          *(unsigned int *)((char *)&g_151E46228 + saved_float_word_2) = float_word_2;
          loword_result = LOWORD(g_151E46220) + 1;
          dword_140404A6C[scaled_index + 83200503] = saved_state_word;
          g_151E46220 = loword_result & 0x3FF;
          if ( remaining_count_5 > 0 && (!g_16B27E3B0 || (int)g_16B27E3B0 > remaining_count_5) )
            g_16B27E3B0 = remaining_count_5;
          saved_remaining_count = g_16B27E3AC;
          iteration_count_9 = 0;
          if ( (int)g_16B27E3AC < remaining_count_5 )
            saved_remaining_count = remaining_count_5;
          g_16B27E3AC = saved_remaining_count;
          if ( remaining_count_5 > 0 )
          {
            do
            {
              integer_sum_4 = iteration_count_9++;
              HIBYTE(dword_140404A6C[integer_sum_4 + 70933310]) = 0;
              dword_140404A6C[integer_sum_4 + 70966078] = -1;
              remaining_count_5 = g_1510AB760;
            }
            while ( iteration_count_9 < (int)g_1510AB760 );
          }
          if ( (int)g_15138B768 > 0 )
          {
            running_total_5 = 0;
            saved_scaled_value_3 = 0.0;
            saved_iteration_count_2 = 0;
            saved_scaled_value_4 = 0.0;
            scaled_value_6 = 0.0;
            scaled_value_7 = 0.0;
            do
            {
              integer_sum_5 = lookup_index + 1;
              scaled_index_72 = lookup_index + 1;
              iteration_count_13 = lookup_index + 1;
              if ( lookup_index + 1 < (int)g_15138B768 )
              {
                scaled_index_59 = 3LL * integer_sum_5;
                state_address_20 = &dword_140404A6C[scaled_index_59 + 71310147];
                running_total_6 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * integer_sum_5 + 290240376);
                scratch_buffer[0] = (uint64)(uintptr_t)(running_total_6);
                state_address_21 = &dword_140404A6C[scaled_index_59 + 71359297];
                running_total_7 = 3LL * integer_sum_5;
                state_address_22 = (_UNKNOWN *)((char *)&unk_1402F61A8 - scaled_index_59 * 4) - (_UNKNOWN *)&g_15143B770;
                saved_running_total_3 = running_total_7;
                saved_buffer_cursor = &dword_140404A6C[6 * integer_sum_5 + 71408450];
                saved_state_address = state_address_22;
                state_address_26 = &dword_140404A6C[scaled_index_59 + 71359297];
                buffer_cursor_6 = saved_buffer_cursor;
                do
                {
                  scaled_value_5 = scaled_value_7;
                  saved_element_index_3 = LODWORD(saved_scaled_value_3);
                  element_index_6 = LODWORD(saved_scaled_value_3);
                  buffer_cursor_3 = (int *)&unk_1402F61A8;
                  element_index_3 = 0;
                  float_word_5 = LODWORD(scaled_value_7);
                  element_index_4 = running_total_5;
                  do
                  {
                    if ( dword_140404A6C[element_index_4 + 71359297] == -1 )
                    {
                      iteration_count_10 = 0;
                      buffer_cursor_4 = state_address_21;
                      do
                      {
                        if ( *buffer_cursor_4 == -1 )
                        {
                          loaded_word_5 = (int)dword_140404A6C[running_total_7 + 71179072 + *(int *)((char *)buffer_cursor_4 + state_address_22)];
                          scaled_index_60 = 3LL * lookup_index;
                          table_value_3 = (int)dword_140404A6C[element_index_3 + 71179072 + scaled_index_60];
                          if ( dword_140404A6C[table_value_3 + 70933310] == dword_140404A6C[loaded_word_5 + 70933310] )
                          {
                            scaled_index_61 = (int)dword_140404A6C[scaled_index_60 + 71179072 + *buffer_cursor_3];
                            scaled_index_62 = (int)*(buffer_cursor_4 - 180225);
                            if ( dword_140404A6C[scaled_index_61 + 70933310] == dword_140404A6C[scaled_index_62 + 70933310] )
                            {
                              scaled_index_63 = 3 * loaded_word_5;
                              if ( fabs(
                                     *(float *)&dword_140404A6C[3 * table_value_3 + 70687550]
                                   - *(float *)&dword_140404A6C[scaled_index_63 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * table_value_3 + 70687551]
                                   - *(float *)&dword_140404A6C[scaled_index_63 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * table_value_3 + 70687552]
                                   - *(float *)&dword_140404A6C[scaled_index_63 + 70687552]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * scaled_index_61 + 70687550]
                                   - *(float *)&dword_140404A6C[3 * scaled_index_62 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * scaled_index_61 + 70687551]
                                   - *(float *)&dword_140404A6C[3 * scaled_index_62 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * scaled_index_61 + 70687552]
                                   - *(float *)&dword_140404A6C[3 * scaled_index_62 + 70687552]) < 0.000099999997 )
                              {
                                dword_140404A6C[element_index_4 + 71359297] = iteration_count_13;
                                dword_140404A6C[element_index_6 + 71408450] = (iteration_count_10 + 2) % 3;
                                saved_float_word_4 = float_word_5;
                                dword_140404A6C[float_word_5 + 71506753] = *(state_address_20 - 2);
                                dword_140404A6C[saved_float_word_4 + 71506754] = *(state_address_20 - 1);
                                dword_140404A6C[saved_float_word_4 + 71506755] = *state_address_20;
                                LODWORD(saved_float_word_4) = saved_converted_vector;
                                *buffer_cursor_4 = lookup_index;
                                *saved_buffer_cursor = (element_index_4 + (int)saved_float_word_4) % 3;
                                *(running_total_6 - 2) = dword_140404A6C[3 * lookup_index + 71310145];
                                *(running_total_6 - 1) = dword_140404A6C[3 * lookup_index + 71310146];
                                *running_total_6 = dword_140404A6C[3 * lookup_index + 71310147];
                              }
                            }
                          }
                          state_address_22 = saved_state_address;
                          running_total_7 = saved_running_total_3;
                        }
                        ++iteration_count_10;
                        saved_buffer_cursor += 2;
                        running_total_6 += 3;
                        ++buffer_cursor_4;
                      }
                      while ( iteration_count_10 < 3 );
                      scaled_value_5 = *(float *)&float_word_5;
                      saved_element_index_3 = element_index_6;
                      running_total_6 = (_DWORD *)scratch_buffer[0];
                      state_address_21 = state_address_26;
                      saved_buffer_cursor = buffer_cursor_6;
                    }
                    saved_element_index_3 += 2;
                    LODWORD(scaled_value_5) += 3;
                    element_index_6 = saved_element_index_3;
                    ++element_index_4;
                    float_word_5 = LODWORD(scaled_value_5);
                    ++element_index_3;
                    ++buffer_cursor_3;
                  }
                  /* End of the three-entry table unk_1402F61A8. The original compares with the address of
                     the symbol that follows it (dword_1402F61B4), which is not adjacent in this build. */
                  while ( (__int64)buffer_cursor_3 < (__int64)((int *)&unk_1402F61A8 + 3) );
                  running_total_7 += 3;
                  saved_scaled_value_3 = scaled_value_6;
                  saved_buffer_cursor += 6;
                  ++iteration_count_13;
                  running_total_6 += 9;
                  saved_running_total_3 = running_total_7;
                  state_address_21 += 3;
                  buffer_cursor_6 = saved_buffer_cursor;
                  state_address_22 -= 12LL;
                  scratch_buffer[0] = (uint64)(uintptr_t)(running_total_6);
                  state_address_20 += 3;
                  state_address_26 = state_address_21;
                  running_total_5 = saved_iteration_count_2;
                  saved_state_address = state_address_22;
                }
                while ( iteration_count_13 < (int)g_15138B768 );
                saved_float_word_3 = saved_converted_vector;
                saved_scaled_value_4 = scaled_value_7;
                integer_sum_5 = scaled_index_72;
              }
              LODWORD(saved_scaled_value_4) += 9;
              LODWORD(saved_scaled_value_3) += 6;
              running_total_5 += 3;
              scaled_value_7 = saved_scaled_value_4;
              saved_float_word_3 -= 3;
              scaled_value_6 = saved_scaled_value_3;
              lookup_index = integer_sum_5;
              saved_iteration_count_2 = running_total_5;
              saved_converted_vector = saved_float_word_3;
            }
            while ( integer_sum_5 < (int)g_15138B768 );
            remaining_count_5 = g_1510AB760;
            saved_float_word_2 = saved_converted_vector_3;
            saved_state_word = state_word_6;
          }
          element_index_5 = 0;
          if ( (int)g_15138B768 > 0 )
          {
            running_total_8 = 0;
            running_total_9 = 3;
            do
            {
              dword_140404A6C[running_total_9 + 71408446] = dword_140404A6C[3 * element_index_5 + 71179072];
              integer_difference_3 = running_total_9 - 2;
              table_value_4 = dword_140404A6C[running_total_8 + 71359297];
              if ( table_value_4 == -1 )
              {
                scaled_index_64 = dword_140404A6C[3 * element_index_5 + 71179072];
              }
              else
              {
                table_value_5 = dword_140404A6C[integer_difference_3 + 71408449];
                if ( table_value_5 > 2 )
                {
                  dword_140404A6C[integer_difference_3 + 71408449] = 0;
                  table_value_5 = 0;
                  table_value_4 = dword_140404A6C[running_total_8 + 71359297];
                }
                scaled_index_64 = dword_140404A6C[3 * table_value_4 + 71179072 + table_value_5];
              }
              dword_140404A6C[running_total_9 + 71408447] = scaled_index_64;
              dword_140404A6C[running_total_9 + 71408448] = dword_140404A6C[3 * element_index_5 + 71179073];
              if ( dword_140404A6C[running_total_8 + 71359298] == -1 )
              {
                scaled_index_65 = dword_140404A6C[3 * element_index_5 + 71179073];
              }
              else
              {
                table_value_6 = dword_140404A6C[running_total_9 + 71408449];
                if ( table_value_6 > 2 )
                {
                  dword_140404A6C[running_total_9 + 71408449] = 0;
                  table_value_6 = 0;
                }
                scaled_index_65 = dword_140404A6C[3 * dword_140404A6C[running_total_8 + 71359298] + 71179072 + table_value_6];
              }
              dword_140404A6C[running_total_9 + 71408449] = scaled_index_65;
              dword_140404A6C[running_total_9 + 71408450] = dword_140404A6C[3 * element_index_5 + 71179074];
              if ( dword_140404A6C[running_total_8 + 71359299] == -1 )
              {
                scaled_index_66 = dword_140404A6C[3 * element_index_5 + 71179074];
              }
              else
              {
                table_value_7 = dword_140404A6C[running_total_9 + 71408451];
                if ( table_value_7 > 2 )
                {
                  dword_140404A6C[running_total_9 + 71408451] = 0;
                  table_value_7 = 0;
                }
                scaled_index_66 = dword_140404A6C[3 * dword_140404A6C[running_total_8 + 71359299] + 71179072 + table_value_7];
              }
              ++element_index_5;
              dword_140404A6C[running_total_9 + 71408451] = scaled_index_66;
              running_total_8 += 3;
              running_total_9 += 6;
            }
            while ( element_index_5 < (int)g_15138B768 );
            remaining_count_5 = g_1510AB760;
          }
          *(unsigned int *)((char *)&g_151E4622C + saved_float_word_2) = remaining_count_5;
          iteration_count_11 = 0;
          if ( remaining_count_5 > 0 )
          {
            record_byte_offset_8 = 0;
            do
            {
              saved_record_byte_offset = record_byte_offset_8;
              record_byte_offset_8 += 16;
              integer_sum_6 = iteration_count_11++;
              *(_QWORD *)&dword_140404A6C[saved_record_byte_offset + 70425406] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_6 + 70687550];
              dword_140404A6C[saved_record_byte_offset + 70425408] = dword_140404A6C[3 * integer_sum_6 + 70687552];
              *(_QWORD *)&dword_140404A6C[saved_record_byte_offset + 70425409] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_6 + 70736702];
              dword_140404A6C[saved_record_byte_offset + 70425411] = dword_140404A6C[3 * integer_sum_6 + 70736704];
              *(_QWORD *)&dword_140404A6C[saved_record_byte_offset + 70425412] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_6 + 70785854];
              dword_140404A6C[saved_record_byte_offset + 70425414] = dword_140404A6C[3 * integer_sum_6 + 70785856];
              *(_QWORD *)&dword_140404A6C[saved_record_byte_offset + 70425415] = *(_QWORD *)&dword_140404A6C[3 * integer_sum_6 + 70835006];
              dword_140404A6C[saved_record_byte_offset + 70425417] = dword_140404A6C[3 * integer_sum_6 + 70835008];
              remaining_count_5 = g_1510AB760;
            }
            while ( iteration_count_11 < (int)g_1510AB760 );
          }
          sub_140193FE0(0, saved_state_word, (__int64)&g_1510AB764, remaining_count_5 << 6);
          state_word_4 = g_15138B768;
          integer_sum_7 = 0;
          *(unsigned int *)((char *)&g_151E46230 + saved_float_word_2) = g_15138B768;
          g_1513BB76C = 0;
          LODWORD(masked_bits_16) = 0;
          *(unsigned int *)((char *)&g_151E48E3C + saved_float_word_2) = 0;
          for ( ii = 0; ii < 256; ++ii )
          {
            iteration_count_12 = 0;
            *((_BYTE *)&dword_140404A6C[3 * (int)masked_bits_16 + 73994485] + saved_float_word_2) = ii;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&g_151E48E3C + saved_float_word_2)
                                                     + 73994486]
                            + saved_float_word_2) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&g_151E48E3C + saved_float_word_2)
                                                     + 73994487]
                            + saved_float_word_2) = integer_sum_7;
            if ( state_word_4 > 0 )
            {
              state_address_23 = &g_15138B76C;
              buffer_cursor_5 = &g_1513EB770;
              do
              {
                if ( *buffer_cursor_5 == ii )
                {
                  scaled_index_67 = (int)(3 * integer_sum_7);
                  *(_QWORD *)&dword_140404A6C[scaled_index_67 + 71228225] = *(_QWORD *)state_address_23;
                  dword_140404A6C[scaled_index_67 + 71228227] = state_address_23[2];
                  masked_bits_17 = *(int *)((char *)&g_151E48E3C + saved_float_word_2);
                  state_word_4 = g_15138B768;
                  integer_sum_7 = ++g_1513BB76C;
                  ++*(unsigned int *)((char *)&dword_140404A6C[3 * masked_bits_17 + 73994486] + saved_float_word_2);
                }
                ++iteration_count_12;
                ++buffer_cursor_5;
                state_address_23 += 3;
              }
              while ( iteration_count_12 < state_word_4 );
            }
            masked_bits_16 = *(int *)((char *)&g_151E48E3C + saved_float_word_2);
            if ( *(int *)((char *)&dword_140404A6C[3 * masked_bits_16 + 73994486] + saved_float_word_2) > 0 )
            {
              LODWORD(masked_bits_16) = masked_bits_16 + 1;
              *(unsigned int *)((char *)&g_151E48E3C + saved_float_word_2) = masked_bits_16;
            }
          }
          sub_140193FE0(3, saved_state_word, (__int64)&g_1513BB770, 12 * state_word_4);
          sub_140193FE0(5, saved_state_word, (__int64)&g_15146B770, 24 * g_15138B768);
          state_word_5 = g_15155CFB4;
          *(unsigned int *)((char *)&g_151E49A44 + saved_float_word_2) = g_15155CFB4;
          if ( state_word_5 > 0 )
          {
            remaining_count_6 = (unsigned int)state_word_5;
            state_address_24 = (char *)&g_151E49A68 + saved_float_word_2;
            state_address_25 = &g_15155CFD4;
            do
            {
              scaled_index_68 = *(state_address_25 - 7);
              table_value_8 = state_address_25[9];
              state_address_25 += 20;
              *((_DWORD *)state_address_24 - 7) = scaled_index_68;
              scaled_index_69 = *(state_address_25 - 26);
              *((_DWORD *)state_address_24 - 8) = 1;
              *((_DWORD *)state_address_24 - 6) = scaled_index_69;
              state_address_24 += 84;
              *((_DWORD *)state_address_24 - 26) = *(state_address_25 - 25);
              *((_DWORD *)state_address_24 - 25) = *(state_address_25 - 24);
              *((_DWORD *)state_address_24 - 24) = *(state_address_25 - 23);
              *((_DWORD *)state_address_24 - 23) = *(state_address_25 - 22);
              *((_DWORD *)state_address_24 - 22) = *(state_address_25 - 21);
              *((_DWORD *)state_address_24 - 21) = *(state_address_25 - 20);
              *((_DWORD *)state_address_24 - 20) = *(state_address_25 - 19);
              *((_DWORD *)state_address_24 - 19) = *(state_address_25 - 18);
              *((_DWORD *)state_address_24 - 18) = *(state_address_25 - 17);
              *((_DWORD *)state_address_24 - 17) = *(state_address_25 - 16);
              *((_DWORD *)state_address_24 - 16) = *(state_address_25 - 15);
              *((_DWORD *)state_address_24 - 15) = *(state_address_25 - 14);
              scaled_index_70 = *(state_address_25 - 13);
              *((_DWORD *)state_address_24 - 12) = table_value_8;
              scaled_index_71 = *(state_address_25 - 10);
              *((_DWORD *)state_address_24 - 14) = scaled_index_70;
              *((_DWORD *)state_address_24 - 13) = *(state_address_25 - 12);
              *((_DWORD *)state_address_24 - 11) = scaled_index_71;
              *((_DWORD *)state_address_24 - 10) = *(state_address_25 - 9);
              *((_DWORD *)state_address_24 - 9) = *(state_address_25 - 8);
              --remaining_count_6;
            }
            while ( remaining_count_6 );
          }
        }
        else
        {
          dword_140404A6C[scaled_index + 83200503] = -2;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scaled_value_6
#undef scaled_value_7
#undef element_index_6
#undef saved_converted_vector
#undef saved_iteration_count_2
#undef iteration_count_13
#undef float_word_5
#undef saved_state_address
#undef saved_running_total_3
#undef saved_converted_vector_2
#undef state_word_6
#undef float_word_6
#undef saved_weighted_sum
#undef weighted_sum_48
#undef saved_converted_vector_3
#undef scaled_index_72
#undef state_address_26
#undef buffer_cursor_6
#undef saved_record_word_offset
#undef cached_scaled_index_2
#undef cached_scaled_index_3
#undef scratch_buffer

//----- (0000000140016130) ----------------------------------------------------
void            sub_140016130(
        signed int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 layer;
  __int64 block_record_offset;
  int cx;
  signed int table_value;
  int cy;
  signed int table_value_2;
  int cz;
  unsigned int world_create_chunk_slot_result;
  signed int world_create_block_record_result;
  signed int iteration_count;
  __int64 masked_bits;
  __int64 scaled_index;
  __int64 record_word_offset;
  signed int i;
  signed int j;
  __int64 state_address;
  __int64 saved_record_word_offset;

  layer = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * a1;
    cx = a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( cx < table_value )
    {
      cy = a3 >> 6;
      if ( cy < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        cz = a4 >> 6;
        if ( cz < table_value_2 )
        {
          world_create_chunk_slot_result = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (cx + table_value * (cz + cy * table_value_2)));
          if ( world_create_chunk_slot_result != -1 || (world_create_chunk_slot_result = sr_world_create_chunk_slot(layer, cx, cy, cz), world_create_chunk_slot_result != -1) )
          {
            world_create_block_record_result = dword_140404A6C[263004 * layer
                                + 111579985
                                + 513 * (int)world_create_chunk_slot_result
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( world_create_block_record_result != -1 || (world_create_block_record_result = sr_world_create_block_record(layer, world_create_chunk_slot_result, a2 >> 3, a3 >> 3, a4 >> 3), world_create_block_record_result != -1) )
            {
              if ( (a5 & 0xE0000000) == 0x80000000 )
              {
                iteration_count = 0;
                masked_bits = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
                dword_140404A6C[6930 * world_create_block_record_result + 83197431 + masked_bits] = a5;
                scaled_index = 2 * (masked_bits + 3465LL * world_create_block_record_result);
                LOBYTE(dword_140404A6C[scaled_index + 83197943]) = *a6;
                BYTE1(dword_140404A6C[scaled_index + 83197943]) = a6[2];
                BYTE2(dword_140404A6C[scaled_index + 83197943]) = a6[4];
                HIBYTE(dword_140404A6C[scaled_index + 83197943]) = a6[6];
                LOBYTE(dword_140404A6C[scaled_index + 83197944]) = a6[8];
                BYTE1(dword_140404A6C[scaled_index + 83197944]) = a6[10];
                BYTE2(dword_140404A6C[scaled_index + 83197944]) = a6[12];
                HIBYTE(dword_140404A6C[scaled_index + 83197944]) = a6[14];
                record_word_offset = 232LL * (unsigned __int16)a5;
                saved_record_word_offset = record_word_offset;
                if ( *(int *)((char *)&g_145098CC4 + record_word_offset) > 0 )
                {
                  do
                  {
                    for ( i = 0; i < *(int *)((char *)&g_145098CC8 + record_word_offset); ++i )
                    {
                      for ( j = 0; j < *(int *)((char *)&g_145098CC0 + record_word_offset); ++j )
                      {
                        if ( iteration_count || i || j )
                        {
                          sub_140016C80(layer, j + a2, iteration_count + a3, i + a4, j | ((i | (iteration_count << 8)) << 8) | 0xC0000000);
                          record_word_offset = saved_record_word_offset;
                        }
                      }
                    }
                    ++iteration_count;
                  }
                  while ( iteration_count < *(int *)((char *)&g_145098CC4 + record_word_offset) );
                }
              }
              state_address = (a3 >> 1) & 3;
              if ( (dword_140404A6C[6930 * world_create_block_record_result + 83200503 + state_address] & 0x80000000) == 0 )
                sub_140012940(world_create_block_record_result, state_address);
              sr_world_mark_block_record(layer, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

//----- (0000000140016AF0) ----------------------------------------------------
void            sub_140016AF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 block_record_offset;
  signed int table_value;
  signed int table_value_2;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 shifted_bits_3;
  __int64 scaled_index;
  signed int iteration_count;
  int masked_bits;
  unsigned int *state_address;

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * (int)a1;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( (int)(a2 >> 6) < table_value && (int)(a3 >> 6) < (int)dword_140404A6C[block_record_offset + 111579651] )
    {
      table_value_2 = dword_140404A6C[block_record_offset + 111579652];
      if ( (int)(a4 >> 6) < table_value_2 )
      {
        shifted_bits = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655]
                    + 4LL * (int)((a2 >> 6) + table_value * ((a4 >> 6) + table_value_2 * (a3 >> 6))));
        if ( (_DWORD)shifted_bits != -1 )
        {
          shifted_bits_2 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * shifted_bits
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)shifted_bits_2 != -1 )
          {
            shifted_bits_3 = (int)dword_140404A6C[6930 * shifted_bits_2 + 83200503 + ((unsigned __int64)(a3 & 6) >> 1)];
            if ( (_DWORD)shifted_bits_3 != -1 )
            {
              scaled_index = 8969 * shifted_bits_3;
              iteration_count = 0;
              if ( (int)dword_140404A6C[8969 * shifted_bits_3 + 73995254] > 0 )
              {
                masked_bits = a2 & 7;
                state_address = &dword_140404A6C[scaled_index + 73995258];
                do
                {
                  if ( *(state_address - 1) == masked_bits && *state_address == (a3 & 7) && state_address[1] == (a4 & 7) && state_address[2] == a5 )
                    *(state_address - 3) = 0;
                  ++iteration_count;
                  state_address += 21;
                }
                while ( iteration_count < (int)dword_140404A6C[scaled_index + 73995254] );
              }
            }
          }
        }
      }
    }
  }
}

//----- (0000000140016C80) ----------------------------------------------------
void            sub_140016C80(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 layer;
  __int64 block_record_offset;
  int cx;
  signed int table_value;
  int cy;
  signed int table_value_2;
  int cz;
  unsigned int world_create_chunk_slot_result;
  signed int world_create_block_record_result;
  __int64 scaled_index;

  layer = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * a1;
    cx = a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( cx < table_value )
    {
      cy = a3 >> 6;
      if ( cy < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        cz = a4 >> 6;
        if ( cz < table_value_2 )
        {
          world_create_chunk_slot_result = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (cx + table_value * (cz + cy * table_value_2)));
          if ( world_create_chunk_slot_result != -1 || (world_create_chunk_slot_result = sr_world_create_chunk_slot(layer, cx, cy, cz), world_create_chunk_slot_result != -1) )
          {
            world_create_block_record_result = dword_140404A6C[263004 * layer
                                + 111579985
                                + 513 * (int)world_create_chunk_slot_result
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( world_create_block_record_result != -1 || (world_create_block_record_result = sr_world_create_block_record(layer, world_create_chunk_slot_result, a2 >> 3, a3 >> 3, a4 >> 3), world_create_block_record_result != -1) )
            {
              scaled_index = 6930LL * world_create_block_record_result;
              dword_140404A6C[64 * (a3 & 7) + 83197431 + 8 * (a4 & 7) + scaled_index + (a2 & 7)] = a5;
              if ( (dword_140404A6C[scaled_index + 83200503 + ((a3 >> 1) & 3)] & 0x80000000) == 0 )
                sub_140012940(world_create_block_record_result, (a3 >> 1) & 3);
              sr_world_mark_block_record(layer, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

//----- (0000000140016F60) ----------------------------------------------------
void            sub_140016F60(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 layer;
  __int64 block_record_offset;
  int cx;
  signed int table_value;
  int cy;
  signed int table_value_2;
  int cz;
  unsigned int world_create_chunk_slot_result;
  signed int world_create_block_record_result;
  __int64 scaled_index;
  int masked_bits;
  __int64 state_address;
  __int64 masked_bits_2;

  layer = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * a1;
    cx = a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( cx < table_value )
    {
      cy = a3 >> 6;
      if ( cy < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        cz = a4 >> 6;
        if ( cz < table_value_2 )
        {
          world_create_chunk_slot_result = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (cx + table_value * (cz + cy * table_value_2)));
          if ( world_create_chunk_slot_result != -1 || (world_create_chunk_slot_result = sr_world_create_chunk_slot(layer, cx, cy, cz), world_create_chunk_slot_result != -1) )
          {
            world_create_block_record_result = dword_140404A6C[263004 * layer
                                + 111579985
                                + 513 * (int)world_create_chunk_slot_result
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( world_create_block_record_result != -1 || (world_create_block_record_result = sr_world_create_block_record(layer, world_create_chunk_slot_result, a2 >> 3, a3 >> 3, a4 >> 3), world_create_block_record_result != -1) )
            {
              scaled_index = 6930LL * world_create_block_record_result;
              masked_bits = a3 & 7;
              state_address = (a3 >> 1) & 3;
              masked_bits_2 = scaled_index + (a2 & 7) + 8 * ((a4 & 7) + 8 * masked_bits);
              dword_140404A6C[masked_bits_2 + 83199479] = a5;
              dword_140404A6C[masked_bits_2 + 83199991] = 0;
              if ( (dword_140404A6C[scaled_index + 83200503 + state_address] & 0x80000000) == 0 )
                sub_140012940(world_create_block_record_result, state_address);
            }
          }
        }
      }
    }
  }
}

//----- (0000000140017910) ----------------------------------------------------
void            sub_140017910(signed int a1)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  signed int iteration_count;
  unsigned int *state_address;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  signed int iteration_count_2;
  unsigned int *state_address_2;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  signed int iteration_count_3;
  unsigned int *state_address_3;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  signed int iteration_count_4;
  unsigned int *state_address_4;
  __int64 scaled_index_13;

  if ( (unsigned int)a1 <= 0xFFF )
  {
    input_value = a1;
    record_word_offset = 6930LL * a1;
    if ( dword_140404A6C[record_word_offset + 83194357] )
    {
      sub_14000C4C0(a1);
      scaled_index = 6930 * input_value;
      scaled_index_2 = (int)dword_140404A6C[6930 * input_value + 83200503];
      if ( (_DWORD)scaled_index_2 != -1 )
      {
        scaled_index_3 = 8969 * scaled_index_2;
        iteration_count = 0;
        if ( (int)dword_140404A6C[8969 * scaled_index_2 + 73993587] > 0 )
        {
          state_address = &dword_140404A6C[scaled_index_3 + 73993590];
          do
          {
            scaled_index_4 = (int)*(state_address - 1);
            state_address += 7;
            ++iteration_count;
            *(state_address - 7) = dword_140404A6C[scaled_index + 83199991 + scaled_index_4];
          }
          while ( iteration_count < (int)dword_140404A6C[scaled_index_3 + 73993587] );
        }
      }
      scaled_index_5 = (int)dword_140404A6C[6930 * input_value + 83200504];
      if ( (_DWORD)scaled_index_5 != -1 )
      {
        scaled_index_6 = 8969 * scaled_index_5;
        iteration_count_2 = 0;
        if ( (int)dword_140404A6C[8969 * scaled_index_5 + 73993587] > 0 )
        {
          state_address_2 = &dword_140404A6C[scaled_index_6 + 73993590];
          do
          {
            scaled_index_7 = (int)*(state_address_2 - 1);
            state_address_2 += 7;
            ++iteration_count_2;
            *(state_address_2 - 7) = dword_140404A6C[scaled_index + 83199991 + scaled_index_7];
          }
          while ( iteration_count_2 < (int)dword_140404A6C[scaled_index_6 + 73993587] );
        }
      }
      scaled_index_8 = (int)dword_140404A6C[6930 * input_value + 83200505];
      if ( (_DWORD)scaled_index_8 != -1 )
      {
        scaled_index_9 = 8969 * scaled_index_8;
        iteration_count_3 = 0;
        if ( (int)dword_140404A6C[8969 * scaled_index_8 + 73993587] > 0 )
        {
          state_address_3 = &dword_140404A6C[scaled_index_9 + 73993590];
          do
          {
            scaled_index_10 = (int)*(state_address_3 - 1);
            state_address_3 += 7;
            ++iteration_count_3;
            *(state_address_3 - 7) = dword_140404A6C[scaled_index + 83199991 + scaled_index_10];
          }
          while ( iteration_count_3 < (int)dword_140404A6C[scaled_index_9 + 73993587] );
        }
      }
      scaled_index_11 = (int)dword_140404A6C[6930 * input_value + 83200506];
      if ( (_DWORD)scaled_index_11 != -1 )
      {
        scaled_index_12 = 8969 * scaled_index_11;
        iteration_count_4 = 0;
        if ( (int)dword_140404A6C[8969 * scaled_index_11 + 73993587] > 0 )
        {
          state_address_4 = &dword_140404A6C[scaled_index_12 + 73993590];
          do
          {
            scaled_index_13 = (int)*(state_address_4 - 1);
            state_address_4 += 7;
            ++iteration_count_4;
            *(state_address_4 - 7) = dword_140404A6C[scaled_index + 83199991 + scaled_index_13];
          }
          while ( iteration_count_4 < (int)dword_140404A6C[scaled_index_12 + 73993587] );
        }
      }
      dword_140404A6C[record_word_offset + 83200511] = 0;
    }
  }
}

//----- (0000000140017AC0) ----------------------------------------------------
void            sub_140017AC0(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 layer;
  __int64 block_record_offset;
  int cx;
  signed int table_value;
  int cy;
  signed int table_value_2;
  int cz;
  unsigned int world_create_chunk_slot_result;
  unsigned int world_create_block_record_result;

  layer = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    block_record_offset = 263004LL * a1;
    cx = a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( cx < table_value )
    {
      cy = a3 >> 6;
      if ( cy < (int)dword_140404A6C[block_record_offset + 111579651] )
      {
        table_value_2 = dword_140404A6C[block_record_offset + 111579652];
        cz = a4 >> 6;
        if ( cz < table_value_2 )
        {
          world_create_chunk_slot_result = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] + 4LL * (cx + table_value * (cz + cy * table_value_2)));
          if ( world_create_chunk_slot_result != -1 || (world_create_chunk_slot_result = sr_world_create_chunk_slot(layer, cx, cy, cz), world_create_chunk_slot_result != -1) )
          {
            world_create_block_record_result = dword_140404A6C[263004 * layer
                                + 111579985
                                + 513 * (int)world_create_chunk_slot_result
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( world_create_block_record_result != -1 || (world_create_block_record_result = sr_world_create_block_record(layer, world_create_chunk_slot_result, a2 >> 3, a3 >> 3, a4 >> 3), world_create_block_record_result != -1) )
            {
              dword_140404A6C[6930 * world_create_block_record_result + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
              sr_world_mark_block_record(layer, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

//----- (0000000140017CA0) ----------------------------------------------------
__int64            sub_140017CA0(int a1)
{
  signed int iteration_count;
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  bool comparison_result;
  unsigned int table_value;
  int iteration_count_2;
  int lookup_index;
  __int64 element_index;
  signed int saved_running_total;
  int running_total;
  __int64 scaled_index;
  float selected_scalar;
  float selected_scalar_2;
  float selected_scalar_3;
  float selected_scalar_4;
  float selected_scalar_5;
  float selected_scalar_6;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 scaled_index_2;
  __int64 table_value_4;
  int iteration_count_3;
  unsigned int *buffer_cursor;
  unsigned int *record_byte_offset;
  int masked_bits;
  __int64 scaled_index_3;
  unsigned int scaled_index_4;
  __int64 scaled_index_5;
  unsigned int scaled_index_6;
  void *allocation_buffer;
  __int64 allocated_buffer;
  void *allocation_buffer_2;
  __int64 allocated_buffer_2;
  void *allocation_buffer_3;
  __int64 allocated_buffer_3;
  void *allocation_buffer_4;
  __int64 allocated_buffer_4;
  int iteration_count_4;
  __int64 record_byte_offset_2;
  __int64 running_total_2;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  __int64 masked_bits_4;
  __int64 masked_bits_5;
  void *allocation_buffer_5;
  __int64 allocated_buffer_5;
  void *allocation_buffer_6;
  __int64 allocated_buffer_6;
  void *allocation_buffer_7;
  __int64 allocated_buffer_7;
  void *allocation_buffer_8;
  __int64 allocated_buffer_8;
  void *allocation_buffer_9;
  __int64 allocated_buffer_9;
  void *allocation_buffer_10;
  __int64 allocated_buffer_10;
  __m128i *destination_buffer;
  signed int iteration_count_5;
  __int64 record_byte_offset_3;
  void *allocation_buffer_11;
  __int64 result;
  __int64 record_byte_offset_4;
  unsigned int *state_address;
  int scaled_index_7;
  __int64 masked_bits_6;
  __int64 masked_bits_7;
  __int64 masked_bits_8;
  __int64 masked_bits_9;
  int unrecovered_register_value;

  iteration_count = 0;
  record_word_offset = 58LL * a1;
  record_word_offset_2 = 58LL * a1;
  comparison_result = (signed int)g_1512DB764 <= 0;
  table_value = 0;
  dword_140404A6C[record_word_offset + 20074624] = 0;
  iteration_count_2 = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 20074625] = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 20074627] = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 20074629] = 0;
  if ( !comparison_result )
  {
    lookup_index = unrecovered_register_value;
    element_index = 0;
    do
    {
      saved_running_total = -1;
      running_total = 0;
      scaled_index = 3LL * (int)dword_140404A6C[4 * element_index + 70998847];
      do
      {
        if ( !running_total || running_total == 5 )
          lookup_index = 0;
        if ( running_total == 1 || running_total == 4 )
          lookup_index = 1;
        if ( (unsigned int)(running_total - 2) <= 1 )
          lookup_index = 2;
        if ( running_total >= 3 )
          selected_scalar = 1.0;
        else
          selected_scalar = 0.0;
        if ( selected_scalar == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total;
        }
        if ( running_total == -1 || running_total == 4 )
          lookup_index = 0;
        if ( !running_total || running_total == 3 )
          lookup_index = 1;
        if ( (unsigned int)(running_total - 1) <= 1 )
          lookup_index = 2;
        if ( running_total + 1 >= 3 )
          selected_scalar_2 = 1.0;
        else
          selected_scalar_2 = 0.0;
        if ( selected_scalar_2 == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar_2 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar_2 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar_2 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total + 1;
        }
        if ( running_total == -2 || running_total == 3 )
          lookup_index = 0;
        if ( running_total == -1 || running_total == 2 )
          lookup_index = 1;
        if ( (unsigned int)running_total <= 1 )
          lookup_index = 2;
        if ( running_total + 2 >= 3 )
          selected_scalar_3 = 1.0;
        else
          selected_scalar_3 = 0.0;
        if ( selected_scalar_3 == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar_3 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar_3 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar_3 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total + 2;
        }
        if ( running_total == -3 || running_total == 2 )
          lookup_index = 0;
        if ( running_total == -2 || running_total == 1 )
          lookup_index = 1;
        if ( (unsigned int)(running_total + 1) <= 1 )
          lookup_index = 2;
        if ( running_total + 3 >= 3 )
          selected_scalar_4 = 1.0;
        else
          selected_scalar_4 = 0.0;
        if ( selected_scalar_4 == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar_4 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar_4 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar_4 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total + 3;
        }
        if ( running_total == -4 || running_total == 1 )
          lookup_index = 0;
        if ( running_total == -3 || !running_total )
          lookup_index = 1;
        if ( (unsigned int)(running_total + 2) <= 1 )
          lookup_index = 2;
        if ( running_total + 4 >= 3 )
          selected_scalar_5 = 1.0;
        else
          selected_scalar_5 = 0.0;
        if ( selected_scalar_5 == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar_5 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar_5 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar_5 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total + 4;
        }
        if ( running_total == -5 || !running_total )
          lookup_index = 0;
        if ( running_total == -4 || running_total == -1 )
          lookup_index = 1;
        if ( (unsigned int)(running_total + 3) <= 1 )
          lookup_index = 2;
        if ( running_total + 5 >= 3 )
          selected_scalar_6 = 1.0;
        else
          selected_scalar_6 = 0.0;
        if ( selected_scalar_6 == *(float *)&dword_140404A6C[lookup_index + 70687550 + scaled_index]
          && selected_scalar_6 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998848]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998848]]
          && selected_scalar_6 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998849]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998849]]
          && selected_scalar_6 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * element_index + 70998850]
                                             + 70687550
                                             + lookup_index
                                             + dword_140404A6C[4 * element_index + 70998850]] )
        {
          saved_running_total = running_total + 5;
        }
        running_total += 6;
      }
      while ( running_total < 6 );
      if ( saved_running_total != -1 )
      {
        table_value_2 = (int)dword_140404A6C[record_word_offset + 20074624];
        if ( iteration_count_2 > (int)table_value_2 )
        {
          table_value_3 = (int)dword_140404A6C[record_word_offset + 20074624];
          g_1512DF768 = dword_140404A6C[4 * table_value_3 + 70998847];
          g_1512DF76C = dword_140404A6C[4 * table_value_3 + 70998848];
          g_1512DF770 = dword_140404A6C[4 * table_value_3 + 70998849];
          g_1512DF774 = dword_140404A6C[4 * table_value_3 + 70998850];
          scaled_index_2 = 2 * table_value_3;
          g_15131C768 = dword_140404A6C[table_value_2 + 71064383];
          g_15133C768 = dword_140404A6C[table_value_2 + 71097151];
          dword_140404A6C[2 * scaled_index_2 + 70998847] = dword_140404A6C[4 * element_index + 70998847];
          dword_140404A6C[2 * scaled_index_2 + 70998848] = dword_140404A6C[4 * element_index + 70998848];
          dword_140404A6C[2 * scaled_index_2 + 70998849] = dword_140404A6C[4 * element_index + 70998849];
          dword_140404A6C[2 * scaled_index_2 + 70998850] = dword_140404A6C[4 * element_index + 70998850];
          dword_140404A6C[table_value_2 + 71064383] = dword_140404A6C[element_index + 71064383];
          dword_140404A6C[table_value_2 + 71097151] = dword_140404A6C[element_index + 71097151];
          dword_140404A6C[4 * element_index + 70998847] = g_1512DF768;
          dword_140404A6C[4 * element_index + 70998848] = g_1512DF76C;
          dword_140404A6C[4 * element_index + 70998849] = g_1512DF770;
          dword_140404A6C[4 * element_index + 70998850] = g_1512DF774;
          dword_140404A6C[element_index + 71064383] = g_15131C768;
          dword_140404A6C[element_index + 71097151] = g_15133C768;
        }
        dword_140404A6C[record_word_offset_2 + 20074625 + saved_running_total] |= 1 << table_value_2;
        table_value_4 = (int)dword_140404A6C[record_word_offset + 20074624];
        dword_140404A6C[table_value_4 + 71080767] = saved_running_total;
        dword_140404A6C[record_word_offset + 20074624] = table_value_4 + 1;
      }
      ++iteration_count_2;
      ++element_index;
    }
    while ( iteration_count_2 < (int)g_1512DB764 );
    table_value = dword_140404A6C[record_word_offset_2 + 20074625];
  }
  comparison_result = (signed int)g_1512DB764 <= 0;
  dword_140404A6C[record_word_offset_2 + 20074626] = ~dword_140404A6C[record_word_offset_2 + 20074626];
  iteration_count_3 = 0;
  dword_140404A6C[record_word_offset_2 + 20074627] = ~dword_140404A6C[record_word_offset_2 + 20074627];
  dword_140404A6C[record_word_offset_2 + 20074628] = ~dword_140404A6C[record_word_offset_2 + 20074628];
  dword_140404A6C[record_word_offset_2 + 20074629] = ~dword_140404A6C[record_word_offset_2 + 20074629];
  dword_140404A6C[record_word_offset_2 + 20074630] = ~dword_140404A6C[record_word_offset_2 + 20074630];
  dword_140404A6C[record_word_offset_2 + 20074625] = ~table_value;
  if ( !comparison_result )
  {
    buffer_cursor = &g_15133B768;
    record_byte_offset = &g_1512DB76C;
    do
    {
      masked_bits = *(buffer_cursor - 0x8000) & 0xF0000;
      if ( masked_bits )
      {
        switch ( masked_bits )
        {
          case 65536:
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687552];
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687551];
            dword_140404A6C[3 * *record_byte_offset + 70835006] = dword_140404A6C[3 * *record_byte_offset + 70687552];
            dword_140404A6C[3 * *record_byte_offset + 70835007] = dword_140404A6C[3 * *record_byte_offset + 70687551];
            dword_140404A6C[3 * record_byte_offset[1] + 70835006] = dword_140404A6C[3 * record_byte_offset[1] + 70687552];
            dword_140404A6C[3 * record_byte_offset[1] + 70835007] = dword_140404A6C[3 * record_byte_offset[1] + 70687551];
            scaled_index_3 = 3LL * (int)record_byte_offset[2];
            scaled_index_4 = dword_140404A6C[3 * record_byte_offset[2] + 70687552];
            goto LABEL_122;
          case 131072:
            *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70687552];
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *record_byte_offset + 70687552];
            dword_140404A6C[3 * *record_byte_offset + 70835007] = dword_140404A6C[3 * *record_byte_offset + 70687551];
            *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70687552];
            dword_140404A6C[3 * record_byte_offset[1] + 70835007] = dword_140404A6C[3 * record_byte_offset[1] + 70687551];
            *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70687552];
            goto LABEL_123;
          case 196608:
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687550];
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687552];
            dword_140404A6C[3 * *record_byte_offset + 70835006] = dword_140404A6C[3 * *record_byte_offset + 70687550];
            dword_140404A6C[3 * *record_byte_offset + 70835007] = dword_140404A6C[3 * *record_byte_offset + 70687552];
            dword_140404A6C[3 * record_byte_offset[1] + 70835006] = dword_140404A6C[3 * record_byte_offset[1] + 70687550];
            dword_140404A6C[3 * record_byte_offset[1] + 70835007] = dword_140404A6C[3 * record_byte_offset[1] + 70687552];
            dword_140404A6C[3 * record_byte_offset[2] + 70835006] = dword_140404A6C[3 * record_byte_offset[2] + 70687550];
            scaled_index_5 = 3LL * (int)record_byte_offset[2];
            scaled_index_6 = dword_140404A6C[3 * record_byte_offset[2] + 70687552];
LABEL_124:
            dword_140404A6C[scaled_index_5 + 70835007] = scaled_index_6;
            break;
          case 262144:
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687550];
            *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70687552];
            dword_140404A6C[3 * *record_byte_offset + 70835006] = dword_140404A6C[3 * *record_byte_offset + 70687550];
            *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *record_byte_offset + 70687552];
            dword_140404A6C[3 * record_byte_offset[1] + 70835006] = dword_140404A6C[3 * record_byte_offset[1] + 70687550];
            *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70687552];
            dword_140404A6C[3 * record_byte_offset[2] + 70835006] = dword_140404A6C[3 * record_byte_offset[2] + 70687550];
            *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70687552];
            *buffer_cursor |= 1u;
            break;
          case 327680:
            *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(record_byte_offset - 1) + 70687550];
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *record_byte_offset + 70687550];
            dword_140404A6C[3 * *record_byte_offset + 70835007] = dword_140404A6C[3 * *record_byte_offset + 70687551];
            *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70687550];
            dword_140404A6C[3 * record_byte_offset[1] + 70835007] = dword_140404A6C[3 * record_byte_offset[1] + 70687551];
            *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70687550];
LABEL_123:
            scaled_index_5 = 3LL * (int)record_byte_offset[2];
            scaled_index_6 = dword_140404A6C[3 * record_byte_offset[2] + 70687551];
            goto LABEL_124;
          case 393216:
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835006] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687550];
            dword_140404A6C[3 * *(record_byte_offset - 1) + 70835007] = dword_140404A6C[3 * *(record_byte_offset - 1) + 70687551];
            dword_140404A6C[3 * *record_byte_offset + 70835006] = dword_140404A6C[3 * *record_byte_offset + 70687550];
            dword_140404A6C[3 * *record_byte_offset + 70835007] = dword_140404A6C[3 * *record_byte_offset + 70687551];
            dword_140404A6C[3 * record_byte_offset[1] + 70835006] = dword_140404A6C[3 * record_byte_offset[1] + 70687550];
            dword_140404A6C[3 * record_byte_offset[1] + 70835007] = dword_140404A6C[3 * record_byte_offset[1] + 70687551];
            scaled_index_3 = 3LL * (int)record_byte_offset[2];
            scaled_index_4 = dword_140404A6C[3 * record_byte_offset[2] + 70687550];
LABEL_122:
            dword_140404A6C[scaled_index_3 + 70835006] = scaled_index_4;
            goto LABEL_123;
        }
      }
      ++iteration_count_3;
      ++buffer_cursor;
      record_byte_offset += 4;
    }
    while ( iteration_count_3 < (int)g_1512DB764 );
  }
  allocation_buffer = *(void **)&dword_140404A6C[record_word_offset + 20074615];
  dword_140404A6C[record_word_offset + 20074613] = g_1510AB760;
  free(allocation_buffer);
  allocated_buffer = sr_path_malloc(12 * g_1510AB760);
  allocation_buffer_2 = *(void **)&dword_140404A6C[record_word_offset + 20074617];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615] = allocated_buffer;
  free(allocation_buffer_2);
  allocated_buffer_2 = sr_path_malloc(12 * g_1510AB760);
  allocation_buffer_3 = *(void **)&dword_140404A6C[record_word_offset + 20074619];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074617] = allocated_buffer_2;
  free(allocation_buffer_3);
  allocated_buffer_3 = sr_path_malloc(12 * g_1510AB760);
  allocation_buffer_4 = *(void **)&dword_140404A6C[record_word_offset + 20074621];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074619] = allocated_buffer_3;
  free(allocation_buffer_4);
  allocated_buffer_4 = sr_path_malloc(8 * g_1510AB760);
  comparison_result = (signed int)g_1510AB760 <= 0;
  iteration_count_4 = 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074621] = allocated_buffer_4;
  if ( !comparison_result )
  {
    record_byte_offset_2 = 0;
    running_total_2 = 0;
    do
    {
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[running_total_2 + 70687550];
      running_total_2 += 3;
      masked_bits_3 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
      record_byte_offset_2 += 8;
      ++iteration_count_4;
      *(_QWORD *)(masked_bits_3 + running_total_2 * 4 - 12) = masked_bits_2;
      *(_DWORD *)(masked_bits_3 + running_total_2 * 4 - 4) = dword_140404A6C[running_total_2 + 70687549];
      masked_bits_4 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074617];
      *(_QWORD *)(masked_bits_4 + running_total_2 * 4 - 12) = *(_QWORD *)&dword_140404A6C[running_total_2 + 70736699];
      *(_DWORD *)(masked_bits_4 + running_total_2 * 4 - 4) = dword_140404A6C[running_total_2 + 70736701];
      masked_bits_5 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074619];
      *(_QWORD *)(masked_bits_5 + running_total_2 * 4 - 12) = *(_QWORD *)&dword_140404A6C[running_total_2 + 70785851];
      *(_DWORD *)(masked_bits_5 + running_total_2 * 4 - 4) = dword_140404A6C[running_total_2 + 70785853];
      *(_QWORD *)(record_byte_offset_2 + *(_QWORD *)&dword_140404A6C[record_word_offset + 20074621] - 8) = *(_QWORD *)&dword_140404A6C[running_total_2 + 70835003];
    }
    while ( iteration_count_4 < (int)g_1510AB760 );
  }
  allocation_buffer_5 = *(void **)&dword_140404A6C[record_word_offset + 20074631];
  dword_140404A6C[record_word_offset + 20074623] = g_1512DB764;
  dword_140404A6C[record_word_offset + 20074639] = g_15138B768;
  free(allocation_buffer_5);
  allocated_buffer_5 = sr_path_malloc(16 * g_1512DB764);
  allocation_buffer_6 = *(void **)&dword_140404A6C[record_word_offset + 20074633];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074631] = allocated_buffer_5;
  free(allocation_buffer_6);
  allocated_buffer_6 = sr_path_malloc(4 * g_1512DB764);
  allocation_buffer_7 = *(void **)&dword_140404A6C[record_word_offset + 20074637];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074633] = allocated_buffer_6;
  free(allocation_buffer_7);
  allocated_buffer_7 = sr_path_malloc(4 * g_1512DB764);
  allocation_buffer_8 = *(void **)&dword_140404A6C[record_word_offset + 20074635];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074637] = allocated_buffer_7;
  free(allocation_buffer_8);
  allocated_buffer_8 = sr_path_malloc(4 * g_1512DB764);
  allocation_buffer_9 = *(void **)&dword_140404A6C[record_word_offset + 20074641];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074635] = allocated_buffer_8;
  free(allocation_buffer_9);
  allocated_buffer_9 = sr_path_malloc(12 * g_15138B768);
  allocation_buffer_10 = *(void **)&dword_140404A6C[record_word_offset + 20074643];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074641] = allocated_buffer_9;
  free(allocation_buffer_10);
  allocated_buffer_10 = sr_path_malloc(4 * g_15138B768);
  destination_buffer = *(__m128i **)&dword_140404A6C[record_word_offset + 20074631];
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074643] = allocated_buffer_10;
  crt_memcpy(destination_buffer, (     __m128i *)&g_1512DB768, 16 * g_1512DB764);
  crt_memcpy(
    *(__m128i **)&dword_140404A6C[record_word_offset + 20074633],
    (     __m128i *)&g_15131B768,
    4 * g_1512DB764);
  crt_memcpy(
    *(__m128i **)&dword_140404A6C[record_word_offset + 20074637],
    (     __m128i *)&g_15132B768,
    4 * g_1512DB764);
  crt_memcpy(
    *(__m128i **)&dword_140404A6C[record_word_offset + 20074635],
    (     __m128i *)&g_15133B768,
    4 * g_1512DB764);
  crt_memcpy(
    *(__m128i **)&dword_140404A6C[record_word_offset + 20074641],
    (     __m128i *)&g_15138B76C,
    12 * g_15138B768);
  crt_memcpy(
    *(__m128i **)&dword_140404A6C[record_word_offset + 20074643],
    (     __m128i *)&g_1513EB770,
    4 * g_15138B768);
  iteration_count_5 = 0;
  if ( (int)dword_140404A6C[record_word_offset + 20074623] > 0 )
  {
    record_byte_offset_3 = 0;
    do
    {
      record_byte_offset_3 += 4;
      ++iteration_count_5;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[record_word_offset + 20074633] + record_byte_offset_3 - 4) &= 0xFFFu;
    }
    while ( iteration_count_5 < (int)dword_140404A6C[record_word_offset + 20074623] );
  }
  allocation_buffer_11 = *(void **)&dword_140404A6C[record_word_offset + 20074653];
  dword_140404A6C[record_word_offset + 20074651] = g_15155CFB4;
  free(allocation_buffer_11);
  result = sr_path_malloc(48 * g_15155CFB4);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653] = result;
  if ( (int)dword_140404A6C[record_word_offset + 20074651] > 0 )
  {
    record_byte_offset_4 = 0;
    state_address = &g_15155CFD4;
    do
    {
      scaled_index_7 = *(state_address - 2);
      state_address += 20;
      masked_bits_6 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653];
      record_byte_offset_4 += 48;
      ++iteration_count;
      *(_DWORD *)(record_byte_offset_4 + masked_bits_6 - 48) = scaled_index_7;
      *(_DWORD *)(record_byte_offset_4 + masked_bits_6 - 44) = *(state_address - 21);
      *(_DWORD *)(record_byte_offset_4 + masked_bits_6 - 40) = *(state_address - 20);
      masked_bits_7 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653];
      *(_DWORD *)(masked_bits_7 + record_byte_offset_4 - 36) = *(state_address - 19);
      *(_DWORD *)(masked_bits_7 + record_byte_offset_4 - 32) = *(state_address - 18);
      *(_DWORD *)(masked_bits_7 + record_byte_offset_4 - 28) = *(state_address - 17);
      masked_bits_8 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653];
      *(_DWORD *)(masked_bits_8 + record_byte_offset_4 - 24) = *(state_address - 16);
      *(_DWORD *)(masked_bits_8 + record_byte_offset_4 - 20) = *(state_address - 15);
      *(_DWORD *)(masked_bits_8 + record_byte_offset_4 - 16) = *(state_address - 14);
      masked_bits_9 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074653];
      *(_DWORD *)(masked_bits_9 + record_byte_offset_4 - 12) = *(state_address - 13);
      *(_DWORD *)(masked_bits_9 + record_byte_offset_4 - 8) = *(state_address - 12);
      result = *(state_address - 11);
      *(_DWORD *)(masked_bits_9 + record_byte_offset_4 - 4) = result;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 20074651] );
  }
  return result;
}

//----- (0000000140018CA0) ----------------------------------------------------
__int64            sub_140018CA0(int *a1, int a2, int *a3, unsigned __int16 a4, float a5)
{
  signed int iteration_count;
  __int64 result;
  __int64 block_record_offset;
  __int64 record_word_offset;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  int loaded_word;
  __int64 record_byte_offset;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word_2;
  int float_word;
  int float_word_2;
  int float_word_3;
  __int64 loaded_word_3;
  int float_word_4;
  int float_word_5;
  int float_word_6;
  __int64 loaded_word_4;
  int float_word_7;
  int float_word_8;
  int float_word_9;
  __int64 loaded_word_5;
  float weighted_sum_4;
  float weighted_sum_5;
  int float_word_10;
  int float_word_11;
  int float_word_12;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;

  iteration_count = 0;
  result = a2;
  block_record_offset = 263004LL * a2;
  record_word_offset = 58LL * a4;
  weighted_sum = (float)((float)*a3 * a5) + *(float *)&dword_140404A6C[block_record_offset + 111579638];
  weighted_sum_2 = (float)((float)a3[1] * a5) + *(float *)&dword_140404A6C[block_record_offset + 111579639];
  weighted_sum_3 = (float)((float)a3[2] * a5) + *(float *)&dword_140404A6C[block_record_offset + 111579640];
  if ( (int)dword_140404A6C[record_word_offset + 20074623] > 0 )
  {
    loaded_word = *a1;
    record_byte_offset = 0;
    do
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074631];
      loaded_word_2 = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset);
      *(float *)&float_word = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_2)) + weighted_sum;
      *(float *)&float_word_2 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_2 + 4)) + weighted_sum_2;
      *(float *)&float_word_3 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_2 + 8)) + weighted_sum_3;
      loaded_word_3 = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset + 4);
      *(float *)&float_word_4 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_3)) + weighted_sum;
      *(float *)&float_word_5 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_3 + 4)) + weighted_sum_2;
      *(float *)&float_word_6 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_3 + 8)) + weighted_sum_3;
      loaded_word_4 = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset + 8);
      *(float *)&float_word_7 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_4)) + weighted_sum;
      *(float *)&float_word_8 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_4 + 4)) + weighted_sum_2;
      *(float *)&float_word_9 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_4 + 8)) + weighted_sum_3;
      loaded_word_5 = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset + 12);
      weighted_sum_4 = a5 * *(float *)(masked_bits + 4 * loaded_word_5 + 4);
      weighted_sum_5 = a5 * *(float *)(masked_bits + 4 * loaded_word_5 + 8);
      *(float *)&float_word_10 = (float)(a5 * *(float *)(masked_bits + 4 * loaded_word_5)) + weighted_sum;
      result = (unsigned int)loaded_word;
      *(float *)&float_word_11 = weighted_sum_4 + weighted_sum_2;
      *(float *)&float_word_12 = weighted_sum_5 + weighted_sum_3;
      if ( loaded_word < 256 )
      {
        scaled_index = 3LL * loaded_word;
        a1[2 * scaled_index + 1] = float_word;
        a1[2 * scaled_index + 2] = float_word_2;
        a1[2 * scaled_index + 3] = float_word_3;
        scaled_index_2 = 3LL * *a1;
        a1[2 * scaled_index_2 + 4] = float_word_4;
        a1[2 * scaled_index_2 + 5] = float_word_5;
        a1[2 * scaled_index_2 + 6] = float_word_6;
        result = (unsigned int)++*a1;
      }
      loaded_word = result;
      if ( (int)result < 256 )
      {
        scaled_index_3 = 3LL * (int)result;
        a1[2 * scaled_index_3 + 1] = float_word_4;
        a1[2 * scaled_index_3 + 2] = float_word_5;
        a1[2 * scaled_index_3 + 3] = float_word_6;
        result = *a1;
        scaled_index_4 = 3 * result;
        a1[2 * scaled_index_4 + 4] = float_word_7;
        a1[2 * scaled_index_4 + 5] = float_word_8;
        a1[2 * scaled_index_4 + 6] = float_word_9;
        loaded_word = ++*a1;
      }
      if ( loaded_word < 256 )
      {
        scaled_index_5 = 3LL * loaded_word;
        a1[2 * scaled_index_5 + 1] = float_word_7;
        a1[2 * scaled_index_5 + 2] = float_word_8;
        a1[2 * scaled_index_5 + 3] = float_word_9;
        result = *a1;
        scaled_index_6 = 3 * result;
        a1[2 * scaled_index_6 + 4] = float_word_10;
        a1[2 * scaled_index_6 + 5] = float_word_11;
        a1[2 * scaled_index_6 + 6] = float_word_12;
        loaded_word = ++*a1;
        if ( *a1 < 256 )
        {
          scaled_index_7 = 3LL * loaded_word;
          a1[2 * scaled_index_7 + 1] = float_word_10;
          a1[2 * scaled_index_7 + 2] = float_word_11;
          a1[2 * scaled_index_7 + 3] = float_word_12;
          result = *a1;
          scaled_index_8 = 3 * result;
          a1[2 * scaled_index_8 + 4] = float_word;
          a1[2 * scaled_index_8 + 5] = float_word_2;
          a1[2 * scaled_index_8 + 6] = float_word_3;
          loaded_word = ++*a1;
        }
      }
      ++iteration_count;
      record_byte_offset += 16;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 20074623] );
  }
  return result;
}

//----- (0000000140019140) ----------------------------------------------------
unsigned int *           sub_140019140(int a1, float *a2)
{
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float scaled_value_11;
  float scaled_value_12;
  int call_result;

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      scaled_value = 0.875;
      scaled_value_2 = 0.0;
      scaled_value_4 = 1.0;
      scaled_value_10 = 0.0;
      scaled_value_6 = 0.0;
      g_14500A5C0 = 0;
      scaled_value_12 = 0.0;
      g_14500A5C4 = 1063256064;
      g_14500A5C8 = 1065353216;
      scaled_value_3 = 1.0;
      g_14500A5E4 = 1065353216;
      scaled_value_7 = 0.875;
      g_14500A5E8 = 1063256064;
      scaled_value_5 = 1.0;
      g_14500A5EC = 1065353216;
      scaled_value_8 = 1.0;
      g_14500A674 = 1065353216;
      scaled_value_9 = 0.875;
      g_14500A678 = 1063256064;
      scaled_value_11 = 0.875;
      g_14500A67C = 0;
      call_result = 196608;
      g_14500A650 = 0;
      g_14500A654 = 1063256064;
      g_14500A658 = 0;
    }
    else
    {
      g_14500A5C0 = 0;
      g_14500A5C4 = 1065353216;
      g_14500A5C8 = 1031798784;
      g_14500A5E4 = 1065353216;
      g_14500A5E8 = 1065353216;
      g_14500A5EC = 1031798784;
      *(_QWORD *)&g_14500A674 = 1065353216;
      g_14500A67C = 1031798784;
      *(_QWORD *)&g_14500A650 = 0;
      g_14500A658 = 1031798784;
      call_result = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      scaled_value_5 = *(float *)&g_14500A5EC;
      scaled_value_7 = *(float *)&g_14500A5E8;
      scaled_value_3 = *(float *)&g_14500A5E4;
      scaled_value_4 = *(float *)&g_14500A5C8;
      scaled_value = *(float *)&g_14500A5C4;
      scaled_value_2 = *(float *)&g_14500A5C0;
      scaled_value_10 = *(float *)&g_14500A67C;
      scaled_value_9 = *(float *)&g_14500A678;
      scaled_value_8 = *(float *)&g_14500A674;
      scaled_value_12 = *(float *)&g_14500A658;
      scaled_value_11 = *(float *)&g_14500A654;
      scaled_value_6 = *(float *)&g_14500A650;
    }
  }
  else
  {
    scaled_value = 0.0625;
    scaled_value_2 = 0.0;
    scaled_value_3 = 1.0;
    scaled_value_4 = 0.0;
    scaled_value_5 = 0.0;
    g_14500A5C0 = 0;
    scaled_value_6 = 0.0;
    g_14500A5C4 = 1031798784;
    g_14500A5C8 = 0;
    scaled_value_7 = 0.0625;
    g_14500A5E4 = 1065353216;
    scaled_value_8 = 1.0;
    g_14500A5E8 = 1031798784;
    scaled_value_9 = 0.0625;
    g_14500A5EC = 0;
    scaled_value_10 = 1.0;
    g_14500A674 = 1065353216;
    scaled_value_11 = 0.0625;
    g_14500A678 = 1031798784;
    scaled_value_12 = 1.0;
    g_14500A67C = 1065353216;
    call_result = 0x40000;
    g_14500A650 = 0;
    g_14500A654 = 1031798784;
    g_14500A658 = 1065353216;
  }
  *(float *)&g_14500A5C0 = scaled_value_2 + *a2;
  *(float *)&g_14500A5C4 = scaled_value + a2[1];
  *(float *)&g_14500A5C8 = scaled_value_4 + a2[2];
  *(float *)&g_14500A5E4 = scaled_value_3 + *a2;
  *(float *)&g_14500A5E8 = scaled_value_7 + a2[1];
  *(float *)&g_14500A5EC = scaled_value_5 + a2[2];
  *(float *)&g_14500A674 = scaled_value_8 + *a2;
  *(float *)&g_14500A678 = scaled_value_9 + a2[1];
  *(float *)&g_14500A67C = scaled_value_10 + a2[2];
  *(float *)&g_14500A650 = scaled_value_6 + *a2;
  *(float *)&g_14500A654 = scaled_value_11 + a2[1];
  *(float *)&g_14500A658 = scaled_value_12 + a2[2];
  sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, a1 | call_result);
  dword_140404A6C[g_1512DB764 + 71097150] = 128;
  return &g_15133B768;
}

//----- (00000001400194B0) ----------------------------------------------------
unsigned int *           sub_1400194B0(int a1, float *a2, char a3)
{
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float scaled_value_11;
  float scaled_value_12;
  int call_result;

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      scaled_value = 0.875;
      scaled_value_2 = 0.0;
      scaled_value_4 = 1.0;
      scaled_value_10 = 0.0;
      scaled_value_6 = 0.0;
      scaled_value_12 = 0.0;
      g_14500A5C0 = 0;
      scaled_value_3 = 1.0;
      g_14500A5C4 = 1063256064;
      scaled_value_7 = 0.875;
      g_14500A5C8 = 1065353216;
      scaled_value_5 = 1.0;
      g_14500A5E4 = 1065353216;
      scaled_value_8 = 1.0;
      g_14500A5E8 = 1063256064;
      scaled_value_9 = 0.875;
      g_14500A5EC = 1065353216;
      scaled_value_11 = 0.875;
      g_14500A674 = 1065353216;
      g_14500A678 = 1063256064;
      g_14500A67C = 0;
      g_14500A650 = 0;
      g_14500A654 = 1063256064;
      g_14500A658 = 0;
      if ( (a3 & 2) != 0 )
      {
        scaled_value_10 = 0.0625;
        scaled_value_12 = 0.0625;
        g_14500A67C = 1031798784;
        g_14500A658 = 1031798784;
      }
      if ( (a3 & 4) != 0 )
      {
        scaled_value_3 = 0.9375;
        g_14500A674 = 1064304640;
        g_14500A5E4 = 1064304640;
        scaled_value_8 = 0.9375;
      }
      if ( (a3 & 8) != 0 )
      {
        scaled_value_4 = 0.9375;
        scaled_value_5 = 0.9375;
        g_14500A5C8 = 1064304640;
        g_14500A5EC = 1064304640;
      }
      if ( (a3 & 0x10) != 0 )
      {
        scaled_value_2 = 0.0625;
        scaled_value_6 = 0.0625;
        g_14500A5C0 = 1031798784;
        g_14500A650 = 1031798784;
      }
      call_result = 196608;
    }
    else
    {
      g_14500A5C0 = 0;
      g_14500A5C4 = 1065353216;
      g_14500A5C8 = 1031798784;
      g_14500A5E4 = 1065353216;
      g_14500A5E8 = 1065353216;
      g_14500A5EC = 1031798784;
      *(_QWORD *)&g_14500A674 = 1065353216;
      g_14500A67C = 1031798784;
      *(_QWORD *)&g_14500A650 = 0;
      g_14500A658 = 1031798784;
      call_result = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      scaled_value_6 = *(float *)&g_14500A650;
      scaled_value_5 = *(float *)&g_14500A5EC;
      scaled_value_3 = *(float *)&g_14500A5E4;
      scaled_value_4 = *(float *)&g_14500A5C8;
      scaled_value = *(float *)&g_14500A5C4;
      scaled_value_2 = *(float *)&g_14500A5C0;
      scaled_value_10 = *(float *)&g_14500A67C;
      scaled_value_9 = *(float *)&g_14500A678;
      scaled_value_8 = *(float *)&g_14500A674;
      scaled_value_12 = *(float *)&g_14500A658;
      scaled_value_11 = *(float *)&g_14500A654;
      scaled_value_7 = *(float *)&g_14500A5E8;
    }
  }
  else
  {
    scaled_value = 0.0625;
    scaled_value_2 = 0.0;
    scaled_value_3 = 1.0;
    scaled_value_4 = 0.0;
    g_14500A5C0 = 0;
    scaled_value_5 = 0.0;
    g_14500A5C4 = 1031798784;
    scaled_value_6 = 0.0;
    g_14500A5C8 = 0;
    scaled_value_7 = 0.0625;
    g_14500A5E4 = 1065353216;
    scaled_value_8 = 1.0;
    g_14500A5E8 = 1031798784;
    scaled_value_9 = 0.0625;
    g_14500A5EC = 0;
    scaled_value_10 = 1.0;
    g_14500A674 = 1065353216;
    scaled_value_11 = 0.0625;
    g_14500A678 = 1031798784;
    scaled_value_12 = 1.0;
    g_14500A67C = 1065353216;
    g_14500A650 = 0;
    g_14500A654 = 1031798784;
    g_14500A658 = 1065353216;
    if ( (a3 & 2) != 0 )
    {
      g_14500A5C8 = 1031798784;
      scaled_value_4 = 0.0625;
      g_14500A5EC = 1031798784;
      scaled_value_5 = 0.0625;
    }
    if ( (a3 & 4) != 0 )
    {
      scaled_value_3 = 0.9375;
      g_14500A674 = 1064304640;
      g_14500A5E4 = 1064304640;
      scaled_value_8 = 0.9375;
    }
    if ( (a3 & 8) != 0 )
    {
      scaled_value_10 = 0.9375;
      scaled_value_12 = 0.9375;
      g_14500A67C = 1064304640;
      g_14500A658 = 1064304640;
    }
    if ( (a3 & 0x10) != 0 )
    {
      g_14500A5C0 = 1031798784;
      scaled_value_2 = 0.0625;
      g_14500A650 = 1031798784;
      scaled_value_6 = 0.0625;
    }
    call_result = 0x40000;
  }
  *(float *)&g_14500A5C0 = scaled_value_2 + *a2;
  *(float *)&g_14500A5C4 = scaled_value + a2[1];
  *(float *)&g_14500A5C8 = scaled_value_4 + a2[2];
  *(float *)&g_14500A5E4 = scaled_value_3 + *a2;
  *(float *)&g_14500A5E8 = scaled_value_7 + a2[1];
  *(float *)&g_14500A5EC = scaled_value_5 + a2[2];
  *(float *)&g_14500A674 = scaled_value_8 + *a2;
  *(float *)&g_14500A678 = scaled_value_9 + a2[1];
  *(float *)&g_14500A67C = scaled_value_10 + a2[2];
  *(float *)&g_14500A650 = scaled_value_6 + *a2;
  *(float *)&g_14500A654 = scaled_value_11 + a2[1];
  *(float *)&g_14500A658 = scaled_value_12 + a2[2];
  sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, a1 | call_result);
  dword_140404A6C[g_1512DB764 + 71097150] = 128;
  return &g_15133B768;
}

//----- (0000000140019940) ----------------------------------------------------
unsigned __int64            sub_140019940(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        unsigned int a8,
        int *a9)
{
  int *record_byte_offset;
  int iteration_count;
  int rol4_result;
  unsigned __int64 result;
  __int64 scaled_index;
  __int64 loaded_word;
  float weighted_sum;
  __int64 scaled_index_2;
  __int64 table_value;
  float weighted_sum_2;
  __int64 scaled_index_3;
  __int64 table_value_2;
  unsigned int selection_code;
  int call_result;
  int masked_bits;

  record_byte_offset = dword_1402B3664;
  iteration_count = 0;
  rol4_result = 1;
  do
  {
    result = a8 & rol4_result;
    if ( (_DWORD)result == rol4_result )
    {
      scaled_index = 3LL * *(record_byte_offset - 1);
      loaded_word = *record_byte_offset;
      *(float *)&g_14500A5C0 = (float)(a5 * *(float *)&dword_1402B34F0[3 * *(record_byte_offset - 1)]) + a2;
      *(float *)&g_14500A5C4 = (float)(a6 * *(float *)&dword_1402B34F0[scaled_index + 1]) + a3;
      weighted_sum = a7 * *(float *)&dword_1402B34F0[scaled_index + 2];
      scaled_index_2 = 3 * loaded_word;
      table_value = record_byte_offset[1];
      *(float *)&g_14500A5C8 = weighted_sum + a4;
      *(float *)&g_14500A5E4 = (float)(a5 * *(float *)&dword_1402B34F0[scaled_index_2]) + a2;
      *(float *)&g_14500A5E8 = (float)(a6 * *(float *)&dword_1402B34F0[scaled_index_2 + 1]) + a3;
      weighted_sum_2 = a7 * *(float *)&dword_1402B34F0[scaled_index_2 + 2];
      scaled_index_3 = 3 * table_value;
      table_value_2 = record_byte_offset[2];
      *(float *)&g_14500A5EC = weighted_sum_2 + a4;
      *(float *)&g_14500A674 = (float)(a5 * *(float *)&dword_1402B34F0[scaled_index_3]) + a2;
      *(float *)&g_14500A678 = (float)(a6 * *(float *)&dword_1402B34F0[scaled_index_3 + 1]) + a3;
      *(float *)&g_14500A67C = (float)(a7 * *(float *)&dword_1402B34F0[scaled_index_3 + 2]) + a4;
      *(float *)&g_14500A650 = (float)(a5 * *(float *)&dword_1402B34F0[3 * table_value_2]) + a2;
      *(float *)&g_14500A654 = (float)(a6 * *(float *)&dword_1402B34F0[3 * table_value_2 + 1]) + a3;
      *(float *)&g_14500A658 = (float)(a7 * *(float *)&dword_1402B34F0[3 * table_value_2 + 2]) + a4;
      if ( iteration_count )
      {
        switch ( iteration_count )
        {
          case 1:
            selection_code = 393216;
            break;
          case 2:
            selection_code = 0x10000;
            break;
          case 3:
            selection_code = 327680;
            break;
          default:
            selection_code = 0x40000;
            if ( iteration_count == 4 )
              selection_code = 0x20000;
            break;
        }
      }
      else
      {
        selection_code = 196608;
      }
      call_result = sub_14001B5C0(a1, selection_code);
      masked_bits = *a9;
      if ( (unsigned int)(*a9 - 1) <= 3 )
        masked_bits = (((_BYTE)a1 + (_BYTE)masked_bits - 1) & 3) + 1;
      if ( (unsigned int)(masked_bits - 9) <= 3 )
        masked_bits = (((_BYTE)a1 + (_BYTE)masked_bits - 1) & 3) + 9;
      result = sub_140001F20(
                 (__int64)&g_14500A5C0,
                 (__int64)&g_14500A680,
                 1,
                 1,
                 1,
                 1,
                 call_result | (unsigned int)masked_bits);
    }
    ++iteration_count;
    rol4_result = __ROL4__(rol4_result, 1);
    record_byte_offset += 4;
    ++a9;
  }
  while ( iteration_count < 6 );
  return result;
}

//----- (0000000140019C10) ----------------------------------------------------
__int64            sub_140019C10(__int64 a1, int a2, int a3)
{
  int *record_byte_offset;
  int rol4_result;
  __int64 remaining_count;
  __int64 result;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float weighted_sum;
  float combined_products_5;
  float product_difference;
  float combined_products_6;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  unsigned int float_word;
  unsigned int float_word_2;
  unsigned int float_word_3;
  unsigned int state_word;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 table_value;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  int selection_code;

  record_byte_offset = dword_1402B3664;
  rol4_result = 1;
  remaining_count = 6;
  do
  {
    result = a3 & (unsigned int)rol4_result;
    if ( (_DWORD)result == rol4_result )
    {
      scaled_index = 3LL * record_byte_offset[1];
      scaled_index_2 = 3LL * *record_byte_offset;
      scaled_index_3 = *(record_byte_offset - 1);
      combined_products = *(float *)(a1 + 12LL * *record_byte_offset + 8) - *(float *)(a1 + 12 * scaled_index_3 + 8);
      combined_products_2 = *(float *)(a1 + 12LL * record_byte_offset[1] + 4) - *(float *)(a1 + 12 * scaled_index_3 + 4);
      combined_products_3 = *(float *)(a1 + 12LL * record_byte_offset[1] + 8) - *(float *)(a1 + 12 * scaled_index_3 + 8);
      combined_products_4 = *(float *)(a1 + 12LL * *record_byte_offset + 4) - *(float *)(a1 + 12 * scaled_index_3 + 4);
      weighted_sum = *(float *)(a1 + 12 * scaled_index_3);
      combined_products_5 = *(float *)(a1 + 12LL * *record_byte_offset) - weighted_sum;
      product_difference = (float)(combined_products_2 * combined_products) - (float)(combined_products_3 * combined_products_4);
      combined_products_6 = *(float *)(a1 + 12LL * record_byte_offset[1]) - weighted_sum;
      product_difference_2 = (float)(combined_products_6 * combined_products_4) - (float)(combined_products_2 * combined_products_5);
      product_difference_3 = (float)(combined_products_3 * combined_products_5) - (float)(combined_products_6 * combined_products);
      square_root = fsqrt((float)((float)(product_difference_3 * product_difference_3) + (float)(product_difference * product_difference)) + (float)(product_difference_2 * product_difference_2));
      if ( square_root == 0.0 )
      {
        *(float *)&float_word = 0.0;
        *(float *)&float_word_2 = 0.0;
        *(float *)&float_word_3 = 0.0;
      }
      else
      {
        *(float *)&float_word = (float)(1.0 / square_root) * product_difference;
        *(float *)&float_word_2 = (float)(1.0 / square_root) * product_difference_3;
        *(float *)&float_word_3 = (float)(1.0 / square_root) * product_difference_2;
      }
      state_word = g_1510AB760;
      scaled_index_4 = 3LL * (int)g_1510AB760;
      *(float *)&dword_140404A6C[scaled_index_4 + 70687550] = weighted_sum;
      dword_140404A6C[scaled_index_4 + 70687551] = *(_DWORD *)(a1 + 12 * scaled_index_3 + 4);
      dword_140404A6C[scaled_index_4 + 70687552] = *(_DWORD *)(a1 + 12 * scaled_index_3 + 8);
      scaled_index_5 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_5 + 70736702] = float_word;
      dword_140404A6C[scaled_index_5 + 70736703] = float_word_2;
      dword_140404A6C[scaled_index_5 + 70736704] = float_word_3;
      scaled_index_6 = 3LL * (int)++g_1510AB760;
      dword_140404A6C[scaled_index_6 + 70687550] = *(_DWORD *)(a1 + 4 * scaled_index_2);
      dword_140404A6C[scaled_index_6 + 70687551] = *(_DWORD *)(a1 + 4 * scaled_index_2 + 4);
      dword_140404A6C[scaled_index_6 + 70687552] = *(_DWORD *)(a1 + 4 * scaled_index_2 + 8);
      scaled_index_7 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_7 + 70736702] = float_word;
      dword_140404A6C[scaled_index_7 + 70736703] = float_word_2;
      dword_140404A6C[scaled_index_7 + 70736704] = float_word_3;
      scaled_index_8 = 3LL * (int)++g_1510AB760;
      dword_140404A6C[scaled_index_8 + 70687550] = *(_DWORD *)(a1 + 4 * scaled_index);
      dword_140404A6C[scaled_index_8 + 70687551] = *(_DWORD *)(a1 + 4 * scaled_index + 4);
      dword_140404A6C[scaled_index_8 + 70687552] = *(_DWORD *)(a1 + 4 * scaled_index + 8);
      scaled_index_9 = 3LL * (int)g_1510AB760;
      table_value = record_byte_offset[2];
      dword_140404A6C[scaled_index_9 + 70736702] = float_word;
      dword_140404A6C[scaled_index_9 + 70736703] = float_word_2;
      dword_140404A6C[scaled_index_9 + 70736704] = float_word_3;
      scaled_index_10 = 3LL * (int)++g_1510AB760;
      dword_140404A6C[scaled_index_10 + 70687550] = *(_DWORD *)(a1 + 12 * table_value);
      dword_140404A6C[scaled_index_10 + 70687551] = *(_DWORD *)(a1 + 12 * table_value + 4);
      dword_140404A6C[scaled_index_10 + 70687552] = *(_DWORD *)(a1 + 12 * table_value + 8);
      scaled_index_11 = 3LL * (int)g_1510AB760;
      dword_140404A6C[scaled_index_11 + 70736702] = float_word;
      dword_140404A6C[scaled_index_11 + 70736703] = float_word_2;
      dword_140404A6C[scaled_index_11 + 70736704] = float_word_3;
      ++g_1510AB760;
      if ( *(float *)&float_word_2 <= 0.70700002 )
      {
        if ( *(float *)&float_word_2 >= -0.70700002 )
        {
          if ( *(float *)&float_word <= 0.70700002 )
          {
            if ( *(float *)&float_word >= -0.70700002 )
            {
              selection_code = 327680;
              if ( *(float *)&float_word_3 > 0.70700002 )
                selection_code = 393216;
            }
            else
            {
              selection_code = 0x10000;
            }
          }
          else
          {
            selection_code = 0x20000;
          }
        }
        else
        {
          selection_code = 196608;
        }
      }
      else
      {
        selection_code = 0x40000;
      }
      dword_140404A6C[4 * g_1512DB764 + 70998847] = state_word;
      dword_140404A6C[4 * g_1512DB764 + 70998848] = state_word + 1;
      dword_140404A6C[4 * g_1512DB764 + 70998849] = state_word + 2;
      dword_140404A6C[4 * g_1512DB764 + 70998850] = state_word + 3;
      dword_140404A6C[g_1512DB764 + 71064383] = selection_code | a2;
      result = (int)g_1512DB764;
      dword_140404A6C[g_1512DB764 + 71097151] = 0;
      ++g_1512DB764;
    }
    rol4_result = __ROL4__(rol4_result, 1);
    record_byte_offset += 4;
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (000000014001A050) ----------------------------------------------------
unsigned __int64            sub_14001A050(__int64 a1, float a2, float a3)
{
  unsigned int input_value;
  int call_result;
  int call_result_2;

  *(float *)&g_14500A5E4 = a2;
  *(float *)&g_14500A5C8 = a3;
  input_value = a1;
  *(float *)&g_14500A5EC = a3;
  *(float *)&g_14500A67C = a3;
  *(float *)&g_14500A658 = a3;
  *(float *)&g_14500A674 = a2;
  g_14500A5C0 = 0;
  g_14500A5C4 = 1065353216;
  g_14500A5E8 = 1065353216;
  g_14500A678 = 0;
  *(_QWORD *)&g_14500A650 = 0;
  call_result = sub_14001B5C0(a1, 0x60000u);
  sub_140001F20((__int64)&g_14500A5C0, (__int64)&g_14500A680, 1, 1, 1, 1, call_result | (input_value + 1));
  *(float *)&g_14500A5C0 = a2;
  *(float *)&g_14500A5C8 = a3;
  *(float *)&g_14500A5E4 = a2;
  *(float *)&g_14500A674 = a2;
  *(float *)&g_14500A650 = a2;
  *(float *)&g_14500A658 = a3;
  g_14500A5C4 = 1065353216;
  *(_QWORD *)&g_14500A5E8 = 1065353216;
  *(_QWORD *)&g_14500A678 = 0;
  g_14500A654 = 0;
  call_result_2 = sub_14001B5C0(input_value, 0x20000u);
  return sub_140001F20(
           (__int64)&g_14500A5C0,
           (__int64)&g_14500A680,
           1,
           1,
           1,
           1,
           call_result_2 | ((((_BYTE)input_value - 1) & 3u) + 1));
}

//----- (000000014001A590) ----------------------------------------------------
__int64            sub_14001A590(unsigned int a1, int a2, int a3)
{
  __int64 record_word_offset;
  unsigned int selection_code;
  __int64 result;
  __int64 input_value;
  __int64 record_word_offset_2;
  __int64 scaled_index;
  __int64 remaining_count;
  unsigned int table_value;
  float *state_address;
  signed int state_word;
  unsigned int float_word;
  float scaled_value;
  unsigned int float_word_2;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int state_word_2;
  unsigned int state_word_3;
  unsigned int saved_masked_bits;
  unsigned int saved_masked_bits_2;
  unsigned int state_word_4;
  unsigned int saved_float_word;
  unsigned int saved_float_word_2;
  unsigned int state_word_5;
  __int64 remaining_count_2;
  unsigned int *record_byte_offset;
  float product_difference;
  unsigned int table_value_2;
  unsigned int table_value_3;
  float combined_products;
  unsigned int table_value_4;
  float combined_products_2;
  float combined_products_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;

  record_word_offset = 3088LL * a2;
  selection_code = 1015021568;
  result = a3;
  input_value = a1;
  record_word_offset_2 = 192LL * a3;
  scaled_index = record_word_offset_2 * 4 + record_word_offset * 4;
  if ( dword_140404A6C[record_word_offset_2 + 451023989 + record_word_offset] == 1 )
    selection_code = 998244352;
  remaining_count = *(int *)((char *)&g_1ABC89C74 + scaled_index);
  if ( remaining_count > 0 )
  {
    table_value = dword_140404A6C[record_word_offset_2 + 451023989 + record_word_offset];
    state_address = (float *)((char *)&g_1ABC89C80 + scaled_index);
    state_word = g_15155CFB4;
    do
    {
      if ( table_value == 1 && (int)input_value >= 2 )
      {
        float_word = *((unsigned int *)state_address - 1);
        scaled_value = *state_address;
      }
      else
      {
        scaled_value = *state_address;
        *(float *)&float_word = 1.0 - (float)(*state_address + *(state_address - 1));
      }
      float_word_2 = *((unsigned int *)state_address + 1);
      *(float *)&masked_bits = scaled_value + *(float *)&float_word;
      g_14500A5C0 = float_word;
      *(float *)&masked_bits_2 = *(float *)&float_word_2 + state_address[2];
      g_14500A678 = float_word_2;
      g_14500A67C = selection_code;
      state_word_2 = selection_code;
      g_14500A5C8 = selection_code;
      state_word_3 = selection_code;
      g_14500A5E4 = masked_bits;
      saved_masked_bits = masked_bits;
      g_14500A5C4 = masked_bits_2;
      saved_masked_bits_2 = masked_bits_2;
      g_14500A5E8 = masked_bits_2;
      state_word_4 = selection_code;
      g_14500A5EC = selection_code;
      saved_float_word = float_word;
      g_14500A674 = masked_bits;
      saved_float_word_2 = float_word_2;
      g_14500A650 = float_word;
      state_word_5 = selection_code;
      g_14500A654 = float_word_2;
      g_14500A658 = selection_code;
      if ( (int)input_value > 0 )
      {
        remaining_count_2 = input_value;
        do
        {
          record_byte_offset = &g_14500A5C8;
          do
          {
            product_difference = 1.0 - *(float *)record_byte_offset;
            table_value_2 = record_byte_offset[1];
            *record_byte_offset = *(record_byte_offset - 2);
            table_value_3 = record_byte_offset[4];
            *((float *)record_byte_offset - 2) = product_difference;
            combined_products = 1.0 - *((float *)record_byte_offset + 3);
            record_byte_offset[3] = table_value_2;
            table_value_4 = record_byte_offset[7];
            *((float *)record_byte_offset + 1) = combined_products;
            combined_products_2 = 1.0 - *((float *)record_byte_offset + 6);
            record_byte_offset[6] = table_value_3;
            *((float *)record_byte_offset + 4) = combined_products_2;
            combined_products_3 = 1.0 - *((float *)record_byte_offset + 9);
            record_byte_offset[9] = table_value_4;
            *((float *)record_byte_offset + 7) = combined_products_3;
            record_byte_offset += 12;
          }
          while ( (__int64)record_byte_offset < (__int64)&g_14500A688 );
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        state_word_4 = g_14500A67C;
        float_word_2 = g_14500A678;
        saved_masked_bits = g_14500A674;
        state_word_5 = g_14500A658;
        saved_float_word_2 = g_14500A654;
        saved_float_word = g_14500A650;
        state_word_3 = g_14500A5EC;
        saved_masked_bits_2 = g_14500A5E8;
        masked_bits = g_14500A5E4;
        state_word_2 = g_14500A5C8;
        masked_bits_2 = g_14500A5C4;
        float_word = g_14500A5C0;
      }
      state_address += 5;
      scaled_index_2 = 10LL * state_word;
      dword_140404A6C[2 * scaled_index_2 + 71655768] = float_word;
      dword_140404A6C[2 * scaled_index_2 + 71655769] = masked_bits_2;
      dword_140404A6C[2 * scaled_index_2 + 71655770] = state_word_2;
      scaled_index_3 = 10LL * (int)g_15155CFB4;
      dword_140404A6C[2 * scaled_index_3 + 71655771] = masked_bits;
      dword_140404A6C[2 * scaled_index_3 + 71655772] = saved_masked_bits_2;
      dword_140404A6C[2 * scaled_index_3 + 71655773] = state_word_3;
      scaled_index_4 = 10LL * (int)g_15155CFB4;
      dword_140404A6C[2 * scaled_index_4 + 71655774] = saved_masked_bits;
      dword_140404A6C[2 * scaled_index_4 + 71655775] = float_word_2;
      dword_140404A6C[2 * scaled_index_4 + 71655776] = state_word_4;
      result = (int)g_15155CFB4;
      scaled_index_5 = 10LL * (int)g_15155CFB4;
      dword_140404A6C[2 * scaled_index_5 + 71655777] = saved_float_word;
      dword_140404A6C[2 * scaled_index_5 + 71655778] = saved_float_word_2;
      dword_140404A6C[2 * scaled_index_5 + 71655779] = state_word_5;
      state_word = ++g_15155CFB4;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

// 14001A7D8: conditional instruction was optimized away because ecx.4==0
// 14001A7E7: conditional instruction was optimized away because ecx.4==0
// 14001A7F6: conditional instruction was optimized away because ecx.4==0
// 14001A805: conditional instruction was optimized away because ecx.4==0

//----- (000000014001A990) ----------------------------------------------------
__int64            sub_14001A990(int a1, int a2)
{
  __int64 masked_bits;
  signed int state_word;
  signed int iteration_count;
  int *buffer_cursor;
  int masked_bits_2;
  __int64 scaled_index;
  int shifted_bits;
  signed int shifted_bits_2;
  int shifted_bits_3;
  __int64 shifted_bits_4;
  __int64 loaded_word;
  int saved_masked_bits;
  bool comparison_result;
  char option_flags;
  int saved_masked_bits_2;
  char saved_option_flags;
  int *buffer_cursor_2;
  signed int i;
  int loaded_word_2;
  int call_result;
  int call_result_2;
  signed int state_word_2;
  signed int iteration_count_2;
  _WORD *state_address;
  unsigned int *j;
  int masked_bits_3;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  __int64 scaled_index_4;
  unsigned int scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A990[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14001A990 + 0)) /* [rsp+0h] */
#define state_word_3 (*(int (*))(void *)(sr_frame_14001A990 + 64)) /* [rsp+40h] */
#define float_word (*(__int64 (*))(void *)(sr_frame_14001A990 + 72)) /* [rsp+48h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14001A990 + 80)) /* [rsp+50h] */
#define masked_bits_4 (*(int (*))(void *)(sr_frame_14001A990 + 88)) /* [rsp+58h] */
#define masked_bits_5 (*(int (*))(void *)(sr_frame_14001A990 + 92)) /* [rsp+5Ch] */
#define input_value (*(int (*))(void *)(sr_frame_14001A990 + 96)) /* [rsp+60h] */
#define scratch_buffer (*(_DWORD (*)[4])(void *)(sr_frame_14001A990 + 104)) /* [rsp+68h] */
#define unused_frame_slot_120 (*(__int64 (*))(void *)(sr_frame_14001A990 + 120)) /* [rsp+78h] */

  masked_bits = a2 & 0xFFFFFF;
  input_value = a1;
  if ( a1 )
  {
    state_word = 0xFFFF;
    state_word_3 = 0xFFFF;
LABEL_6:
    iteration_count = 0;
    buffer_cursor = scratch_buffer;
    masked_bits_2 = masked_bits & 0xF;
    scaled_index = 58LL * state_word;
    masked_bits_4 = masked_bits & 0x10000;
    shifted_bits = (unsigned __int8)masked_bits >> 4;
    shifted_bits_2 = ((unsigned int)masked_bits >> 8) & 0xF;
    dword_140404A6C[scaled_index + 20074648] = 0;
    shifted_bits_3 = (unsigned __int16)masked_bits >> 12;
    g_1510AB760 = 0;
    g_1512DB764 = 0;
    g_15138B768 = 0;
    g_15155CFB4 = 0;
    masked_bits_5 = masked_bits & 0x20000;
    scratch_buffer[0] = (unsigned __int8)masked_bits_2;
    scratch_buffer[1] = (unsigned __int8)shifted_bits;
    scratch_buffer[2] = shifted_bits_2;
    scratch_buffer[3] = (unsigned __int16)shifted_bits_3;
    shifted_bits_4 = ((unsigned int)masked_bits >> 18) & 0xF;
    do
    {
      loaded_word = *buffer_cursor;
      if ( (unsigned int)(loaded_word - 3) <= 0xC
        && (!dword_140404A6C[3088 * shifted_bits_4 + 451023413 + 192 * loaded_word] || (unsigned int)iteration_count < 2) )
      {
        sub_14001A590(iteration_count, shifted_bits_4, loaded_word - 3);
      }
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( iteration_count < 4 );
    saved_masked_bits = masked_bits_4;
    comparison_result = masked_bits_4 == 0;
    dword_140404A6C[scaled_index + 20074649] = 0;
    option_flags = !comparison_result;
    if ( masked_bits_2 > 0 && masked_bits_2 != 2 )
      option_flags |= 2u;
    if ( shifted_bits > 0 && shifted_bits != 2 )
      option_flags |= 4u;
    if ( shifted_bits_2 > 0 && shifted_bits_2 != 2 )
      option_flags |= 8u;
    if ( shifted_bits_3 > 0 && shifted_bits_3 != 2 )
      option_flags |= 0x10u;
    saved_masked_bits_2 = masked_bits_5;
    saved_option_flags = option_flags | 0x20;
    if ( !masked_bits_5 )
      saved_option_flags = option_flags;
    if ( saved_masked_bits )
    {
      float_word = 0;
      unused_written_slot = 0;
      sub_1400194B0(0, (float *)&float_word, saved_option_flags);
      dword_140404A6C[scaled_index + 20074649] |= 1u;
    }
    if ( saved_masked_bits_2 )
    {
      float_word = 0;
      unused_written_slot = 0;
      sub_1400194B0(5, (float *)&float_word, saved_option_flags);
      dword_140404A6C[scaled_index + 20074649] |= 0x20u;
    }
    buffer_cursor_2 = scratch_buffer;
    for ( i = 0; i < 4; ++i )
    {
      loaded_word_2 = *buffer_cursor_2;
      if ( *buffer_cursor_2 == 1 )
      {
        float_word = 0;
        unused_written_slot = 0;
        sub_140019140(i + 1, (float *)&float_word);
        dword_140404A6C[scaled_index + 20074649] |= 1 << (i + 1);
      }
      else
      {
        if ( (unsigned int)(loaded_word_2 - 3) <= 0xC )
          sub_14001A1C0(i, shifted_bits_4, loaded_word_2 - 3);
        if ( loaded_word_2 == 2 )
        {
          g_14500A5C0 = 0;
          g_14500A5C4 = 1065353216;
          g_14500A5C8 = 1031798784;
          g_14500A5E4 = 1031798784;
          g_14500A5E8 = 1065353216;
          g_14500A5EC = 1031798784;
          *(_QWORD *)&g_14500A674 = 1031798784;
          g_14500A67C = 1031798784;
          *(_QWORD *)&g_14500A650 = 0;
          g_14500A658 = 1031798784;
          call_result = sub_14001B5C0((unsigned int)i, 0x60000u);
          sub_140001F20(
            (__int64)&g_14500A5C0,
            (__int64)&g_14500A680,
            1,
            1,
            1,
            1,
            call_result | (i + 1));
          g_14500A5C0 = 1031798784;
          g_14500A5C4 = 1065353216;
          g_14500A5C8 = 1031798784;
          g_14500A5E4 = 1031798784;
          *(_QWORD *)&g_14500A5E8 = 1065353216;
          *(_QWORD *)&g_14500A674 = 1031798784;
          g_14500A67C = 0;
          *(_QWORD *)&g_14500A650 = 1031798784;
          g_14500A658 = 1031798784;
          call_result_2 = sub_14001B5C0((unsigned int)i, 0x20000u);
          sub_140001F20(
            (__int64)&g_14500A5C0,
            (__int64)&g_14500A680,
            1,
            1,
            1,
            1,
            call_result_2 | ((((_BYTE)i - 1) & 3) + 1));
        }
      }
      ++buffer_cursor_2;
    }
    dword_140404A6C[scaled_index + 20074645] = 1;
    dword_140404A6C[scaled_index + 20074646] = 1;
    dword_140404A6C[scaled_index + 20074647] = 1;
    if ( !input_value )
    {
      sub_140017CA0(state_word_3);
      return state_word_3; /* native EAX restored from [rsp+0x40] */
    }
    state_word_2 = g_1512DB764;
    iteration_count_2 = 0;
    if ( (int)g_1512DB764 <= 0 )
      return state_word_3; /* native EAX restored from [rsp+0x40] */
    state_address = (_WORD *)&g_15131B768 + 1;
    for ( j = &g_1512DB76C; ; j += 4 )
    {
      masked_bits_3 = *(_DWORD *)(state_address - 1) & 0xF0000;
      if ( masked_bits_3 )
        break;
LABEL_59:
      ++iteration_count_2;
      state_address += 2;
      if ( iteration_count_2 >= state_word_2 )
        return state_word_3; /* native EAX restored from [rsp+0x40] */
    }
    switch ( masked_bits_3 )
    {
      case 65536:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        scaled_index_2 = 3LL * (int)j[2];
        scaled_index_3 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_55:
        dword_140404A6C[scaled_index_2 + 70835006] = scaled_index_3;
        goto LABEL_56;
      case 131072:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
LABEL_56:
        scaled_index_4 = 3LL * (int)j[2];
        scaled_index_5 = dword_140404A6C[3 * j[2] + 70687551];
        goto LABEL_57;
      case 196608:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        scaled_index_4 = 3LL * (int)j[2];
        scaled_index_5 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_57:
        dword_140404A6C[scaled_index_4 + 70835007] = scaled_index_5;
        break;
      case 262144:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        *(float *)&dword_140404A6C[3 * *j + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        *(float *)&dword_140404A6C[3 * j[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        *(float *)&dword_140404A6C[3 * j[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
        break;
      case 327680:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_56;
      case 393216:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        scaled_index_2 = 3LL * (int)j[2];
        scaled_index_3 = dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_55;
    }
    *state_address = 0;
    state_word_2 = g_1512DB764;
    goto LABEL_59;
  }
  if ( dword_140404A6C[masked_bits + 23937125] == -1 )
  {
    state_word = g_14500A700;
    state_word_3 = g_14500A700;
    if ( (int)g_14500A700 < 0x10000 )
    {
      dword_140404A6C[masked_bits + 23937125] = g_14500A700;
      g_14500A700 = state_word + 1;
      goto LABEL_6;
    }
    return 0; /* 0x14001A9DE: xor eax, eax when the block table is full */
  }
  /* 0x14001A9BB: an existing entry is returned in EAX straight from the lookup table. */
  return (int)dword_140404A6C[masked_bits + 23937125];
}
#undef unused_frame_slot_0
#undef state_word_3
#undef float_word
#undef unused_written_slot
#undef masked_bits_4
#undef masked_bits_5
#undef input_value
#undef scratch_buffer
#undef unused_frame_slot_120

//----- (000000014001B390) ----------------------------------------------------
__int64            sub_14001B390(int a1, int a2, int a3, int a4)
{
  int input_value;
  __int64 input_value_2;
  int integer_difference;
  int integer_difference_2;
  __int64 record_word_offset;
  unsigned int option_flags;
  signed int iteration_count;
  _DWORD *buffer_cursor;
  __int64 record_byte_offset;
  __int64 record_word_offset_2;
  __int64 remaining_count;
  _DWORD *buffer_cursor_2;
  __int64 record_byte_offset_2;
  int iteration_count_2;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  __int64 masked_bits_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B390[128];
#define rol4_result (*(int (*))(void *)(sr_frame_14001B390 + 0)) /* [rsp+0h] */
#define integer_difference_3 (*(__int64 (*))(void *)(sr_frame_14001B390 + 8)) /* [rsp+8h] */
#define saved_buffer_cursor (*(_DWORD * (*))(void *)(sr_frame_14001B390 + 16)) /* [rsp+10h] */
#define integer_difference_4 (*(int (*))(void *)(sr_frame_14001B390 + 96)) /* [rsp+60h] */
#define saved_iteration_count (*(signed int (*))(void *)(sr_frame_14001B390 + 112)) /* [rsp+70h] */

  input_value = a2;
  input_value_2 = a1;
  integer_difference = a2;
  integer_difference_2 = 5 - a2;
  integer_difference_4 = 5 - a2;
  if ( a2 >= 3 )
    integer_difference = 5 - a2;
  record_word_offset = 58LL * a1;
  option_flags = dword_140404A6C[58 * a1 + 20074625 + a2] & a3;
  iteration_count = 0;
  saved_iteration_count = 0;
  if ( (int)dword_140404A6C[58 * input_value_2 + 20074624] > 0 )
  {
    buffer_cursor = *(_DWORD **)&dword_140404A6C[record_word_offset + 20074637];
    record_byte_offset = 8;
    record_word_offset_2 = 58LL * a4;
    saved_buffer_cursor = buffer_cursor;
    do
    {
      if ( *buffer_cursor == input_value )
      {
        remaining_count = dword_140404A6C[record_word_offset_2 + 20074624];
        if ( (int)remaining_count > 0 )
        {
          buffer_cursor_2 = *(_DWORD **)&dword_140404A6C[record_word_offset_2 + 20074637];
          record_byte_offset_2 = 12;
          rol4_result = __ROL4__(1, iteration_count);
          integer_difference_3 = dword_140404A6C[record_word_offset_2 + 20074624];
          do
          {
            if ( *buffer_cursor_2 == integer_difference_2 )
            {
              iteration_count_2 = 0;
              while ( 1 )
              {
                if ( iteration_count_2 != integer_difference )
                {
                  masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074631];
                  masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 20074631];
                  masked_bits_3 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
                  masked_bits_4 = *(_QWORD *)&dword_140404A6C[record_word_offset_2 + 20074615];
                  if ( *(float *)(masked_bits_4 + 4LL * (*(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 8) + iteration_count_2 + 2 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 8))) != *(float *)(masked_bits_3 + 4LL * (iteration_count_2 + 2 * *(_DWORD *)(masked_bits + record_byte_offset - 8) + *(_DWORD *)(masked_bits + record_byte_offset - 8)))
                    || *(float *)(masked_bits_4 + 4LL * (*(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 12) + iteration_count_2 + 2 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 12))) != *(float *)(masked_bits_3 + 4LL * (iteration_count_2 + 2 * *(_DWORD *)(masked_bits + record_byte_offset - 4) + *(_DWORD *)(masked_bits + record_byte_offset - 4)))
                    || *(float *)(masked_bits_4 + 4LL * (*(_DWORD *)(masked_bits_2 + record_byte_offset_2) + iteration_count_2 + 2 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2))) != *(float *)(masked_bits_3 + 4LL * (iteration_count_2 + 2 * *(_DWORD *)(masked_bits + record_byte_offset) + *(_DWORD *)(masked_bits + record_byte_offset)))
                    || *(float *)(masked_bits_4 + 4LL * (*(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 4) + iteration_count_2 + 2 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2 - 4))) != *(float *)(masked_bits_3 + 4LL * (iteration_count_2 + 2 * *(_DWORD *)(masked_bits + record_byte_offset + 4) + *(_DWORD *)(masked_bits + record_byte_offset + 4))) )
                  {
                    break;
                  }
                }
                if ( ++iteration_count_2 >= 3 )
                {
                  option_flags |= rol4_result;
                  break;
                }
              }
              remaining_count = integer_difference_3;
              integer_difference_2 = integer_difference_4;
            }
            ++buffer_cursor_2;
            record_byte_offset_2 += 16;
            integer_difference_3 = --remaining_count;
          }
          while ( remaining_count );
          iteration_count = saved_iteration_count;
          buffer_cursor = saved_buffer_cursor;
          input_value = a2;
        }
      }
      ++iteration_count;
      ++buffer_cursor;
      record_byte_offset += 16;
      saved_iteration_count = iteration_count;
      saved_buffer_cursor = buffer_cursor;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 20074624] );
  }
  return option_flags;
}
#undef rol4_result
#undef integer_difference_3
#undef saved_buffer_cursor
#undef integer_difference_4
#undef saved_iteration_count

//----- (0000000140020580) ----------------------------------------------------
__int64            sub_140020580(int a1)
{
  __int64 record_word_offset;
  int integer_quotient;
  __int64 packed_word_bits;
  __int64 scaled_index;
  unsigned int integer_difference;
  unsigned int table_value;
  signed int remaining_count;
  int scaled_index_2;
  unsigned int scaled_index_3;
  int integer_difference_2;
  int abs32_result;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  int integer_sum;
  int iteration_count;
  int integer_difference_3;
  __int64 lookup_index;
  unsigned int remaining_count_2;
  bool comparison_result;
  __int64 shifted_bits_6;
  int integer_sum_2;
  int integer_difference_4;
  __int64 integer_sum_3;
  unsigned int saved_remaining_count;
  unsigned int state_word;
  unsigned int table_value_2;
  __int64 integer_difference_5;
  int integer_sum_4;
  int integer_sum_5;
  unsigned int table_value_3;
  signed int table_value_4;
  signed int iteration_count_2;
  __int16 selection_code;
  __int64 shifted_bits_7;
  unsigned int integer_difference_6;
  unsigned int combined_flags;
  signed int iteration_count_3;
  __int64 scaled_index_4;
  int i;
  int table_value_5;
  unsigned int table_value_6;
  int table_value_7;
  __int64 scaled_index_5;
  int table_value_8;
  int integer_quotient_2;
  __int64 packed_word_bits_2;
  __int64 scaled_index_6;
  unsigned int integer_difference_7;
  unsigned int table_value_9;
  signed int remaining_count_3;
  int scaled_index_7;
  unsigned int scaled_index_8;
  int integer_difference_8;
  int abs32_result_2;
  int shifted_bits_8;
  int shifted_bits_9;
  int shifted_bits_10;
  int shifted_bits_11;
  int shifted_bits_12;
  int integer_sum_6;
  int iteration_count_4;
  int integer_difference_9;
  __int64 lookup_index_2;
  unsigned int remaining_count_4;
  __int64 shifted_bits_13;
  int integer_sum_7;
  int integer_difference_10;
  __int64 integer_sum_8;
  unsigned int saved_remaining_count_2;
  unsigned int state_word_2;
  unsigned int table_value_10;
  __int64 integer_difference_11;
  int integer_sum_9;
  int integer_sum_10;
  unsigned int table_value_11;
  signed int table_value_12;
  signed int iteration_count_5;
  __int64 lookup_index_3;
  __int16 selection_code_2;
  bool comparison_result_2;
  __int64 shifted_bits_14;
  unsigned int integer_difference_12;
  unsigned int combined_flags_2;
  signed int iteration_count_6;
  __int64 scaled_index_9;
  int j;
  int table_value_13;
  int table_value_14;
  __int64 scaled_index_10;
  int table_value_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020580[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140020580 + 0)) /* [rsp+8h] */
#define packed_word_bits_3 (*(__int64 (*))(void *)(sr_frame_140020580 + 32)) /* [rsp+28h] */
#define state_address (*(__int64 * (*))(void *)(sr_frame_140020580 + 40)) /* [rsp+30h] */
#define lookup_index_4 (*(int (*))(void *)(sr_frame_140020580 + 48)) /* [rsp+38h] */
#define integer_quotient_3 (*(int (*))(void *)(sr_frame_140020580 + 52)) /* [rsp+3Ch] */
#define saved_shifted_bits (*(int (*))(void *)(sr_frame_140020580 + 56)) /* [rsp+40h] */
#define saved_shifted_bits_2 (*(int (*))(void *)(sr_frame_140020580 + 60)) /* [rsp+44h] */
#define cached_integer_difference (*(int (*))(void *)(sr_frame_140020580 + 64)) /* [rsp+48h] */
#define saved_shifted_bits_3 (*(signed int (*))(void *)(sr_frame_140020580 + 68)) /* [rsp+4Ch] */
#define saved_shifted_bits_4 (*(signed int (*))(void *)(sr_frame_140020580 + 72)) /* [rsp+50h] */
#define cached_integer_difference_2 (*(int (*))(void *)(sr_frame_140020580 + 76)) /* [rsp+54h] */
#define cached_integer_quotient (*(__int64 (*))(void *)(sr_frame_140020580 + 80)) /* [rsp+58h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_140020580 + 88)) /* [rsp+60h] */
#define selection_code_3 (*(__int64 (*))(void *)(sr_frame_140020580 + 96)) /* [rsp+68h] */
#define selection_code_4 (*(__int64 (*))(void *)(sr_frame_140020580 + 104)) /* [rsp+70h] */
#define unused_frame_slot_112 (*(__int64 (*))(void *)(sr_frame_140020580 + 112)) /* [rsp+78h] */

  record_word_offset = 396LL * a1;
  if ( !dword_140404A6C[record_word_offset + 225426058] )
  {
    integer_quotient = 6;
    packed_word_bits = (int)dword_140404A6C[record_word_offset + 225426056];
    scaled_index = 34LL * (int)dword_140404A6C[record_word_offset + 225426057];
    integer_difference = dword_140404A6C[scaled_index + 225391230] - dword_140404A6C[scaled_index + 225391242];
    table_value = dword_140404A6C[scaled_index + 225391231];
    integer_quotient_3 = 6;
    remaining_count = dword_140404A6C[34 * packed_word_bits + 225391231];
    scaled_index_2 = integer_difference - (dword_140404A6C[34 * packed_word_bits + 225391240] + dword_140404A6C[34 * packed_word_bits + 225391230]);
    scaled_index_3 = dword_140404A6C[34 * packed_word_bits + 225391232];
    integer_difference_2 = table_value - remaining_count;
    saved_shifted_bits = dword_140404A6C[34 * packed_word_bits + 225391240] + dword_140404A6C[34 * packed_word_bits + 225391230];
    cached_integer_difference = integer_difference_2;
    cached_scaled_index = scaled_index_2;
    abs32_result = abs32(integer_difference_2);
    if ( abs32_result > 0 )
    {
      integer_quotient = scaled_index_2 / abs32_result;
      integer_quotient_3 = scaled_index_2 / abs32_result;
    }
    shifted_bits = scaled_index_2 >> 1;
    shifted_bits_2 = (integer_quotient * abs32_result) >> 1;
    shifted_bits_3 = (scaled_index_2 >> 1) - shifted_bits_2;
    saved_shifted_bits_2 = shifted_bits_3;
    shifted_bits_4 = (scaled_index_2 >> 1) + shifted_bits_2;
    saved_shifted_bits_4 = shifted_bits_4;
    if ( g_183F7CB60 )
    {
      integer_quotient = 6;
      integer_quotient_3 = 6;
      if ( abs32_result > 0 )
      {
        if ( scaled_index_2 / 10 >= abs32_result )
          integer_quotient = 10;
        integer_quotient_3 = integer_quotient;
      }
      shifted_bits_5 = abs32_result * ((unsigned int)integer_quotient >> 1);
      shifted_bits_3 = shifted_bits - shifted_bits_5;
      saved_shifted_bits_2 = shifted_bits - shifted_bits_5;
      shifted_bits_4 = shifted_bits + shifted_bits_5;
      saved_shifted_bits_4 = shifted_bits + shifted_bits_5;
    }
    integer_sum = 0;
    iteration_count = 0;
    lookup_index_4 = 0;
    if ( scaled_index_2 > 0 )
    {
      integer_difference_3 = scaled_index_2 - 1;
      lookup_index = integer_quotient;
      remaining_count_2 = remaining_count + 1;
      cached_integer_quotient = integer_quotient;
      saved_shifted_bits_3 = remaining_count + 1;
      cached_integer_difference_2 = integer_difference_3;
      while ( 1 )
      {
        if ( iteration_count >= shifted_bits_3 && iteration_count < shifted_bits_4 && integer_difference_2 > 0 )
        {
          integer_difference_3 = cached_integer_difference_2;
          comparison_result = integer_sum % integer_quotient == 0;
          integer_sum = lookup_index_4;
          if ( comparison_result )
          {
            ++remaining_count;
            saved_shifted_bits_3 = ++remaining_count_2;
          }
        }
        selection_code_3 = 0;
        selection_code_4 = 0;
        if ( iteration_count )
        {
          if ( iteration_count < integer_difference_3 )
          {
            if ( iteration_count < shifted_bits_3 || iteration_count >= shifted_bits_4 )
            {
              integer_sum_2 = iteration_count + saved_shifted_bits;
              sub_14000F830(
                0,
                iteration_count + saved_shifted_bits,
                remaining_count_2,
                scaled_index_3 - dword_140404A6C[record_word_offset + 225426059] - 1,
                g_14500A748 | 0x80000000,
                &selection_code_3);
              state_word = g_14500A748;
              saved_remaining_count = remaining_count_2;
              table_value_2 = dword_140404A6C[record_word_offset + 225426060];
            }
            else
            {
              shifted_bits_6 = lookup_index << 6;
              integer_sum_2 = iteration_count + saved_shifted_bits;
              integer_difference_4 = scaled_index_3 - dword_140404A6C[record_word_offset + 225426059] - 1;
              if ( cached_integer_difference <= 0 )
              {
                integer_difference_5 = shifted_bits_6 + integer_quotient - integer_sum;
                sub_14000F830(0, integer_sum_2, remaining_count, integer_difference_4, dword_140404A6C[integer_difference_5 + 19930121] | 0x80000000, &selection_code_3);
                saved_remaining_count = remaining_count;
                state_word = dword_140404A6C[integer_difference_5 + 19930121];
              }
              else
              {
                integer_sum_3 = shifted_bits_6 + integer_sum;
                sub_14000F830(0, integer_sum_2, remaining_count, integer_difference_4, dword_140404A6C[integer_sum_3 + 19930090] | 0x80000000, &selection_code_3);
                saved_remaining_count = remaining_count;
                state_word = dword_140404A6C[integer_sum_3 + 19930090];
              }
              table_value_2 = dword_140404A6C[record_word_offset + 225426060];
            }
            integer_sum_4 = table_value_2 + scaled_index_3;
            integer_sum_5 = integer_sum_2;
            state_address = &selection_code_3;
            LODWORD(packed_word_bits_3) = state_word | 0x80000000;
            goto LABEL_31;
          }
          if ( iteration_count != integer_difference_3 )
            goto LABEL_32;
          sub_14000F830(
            0,
            iteration_count + saved_shifted_bits,
            remaining_count_2,
            scaled_index_3 - dword_140404A6C[record_word_offset + 225426059] - 1,
            g_14500A748 | 0x80000000,
            &selection_code_3);
          integer_sum_5 = iteration_count + saved_shifted_bits;
        }
        else
        {
          sub_14000F830(
            0,
            saved_shifted_bits,
            remaining_count_2,
            scaled_index_3 - dword_140404A6C[record_word_offset + 225426059] - 1,
            g_14500A748 | 0x80000000,
            &selection_code_3);
          integer_sum_5 = saved_shifted_bits;
        }
        table_value_3 = dword_140404A6C[record_word_offset + 225426060];
        state_address = &selection_code_3;
        integer_sum_4 = scaled_index_3 + table_value_3;
        LODWORD(packed_word_bits_3) = g_14500A748 | 0x80000000;
        saved_remaining_count = remaining_count_2;
LABEL_31:
        sub_14000F830(0, integer_sum_5, saved_remaining_count, integer_sum_4, packed_word_bits_3, state_address);
        shifted_bits_3 = saved_shifted_bits_2;
        lookup_index = cached_integer_quotient;
LABEL_32:
        selection_code_3 = 0x1000100010001LL;
        table_value_4 = dword_140404A6C[record_word_offset + 225426060];
        iteration_count_2 = -dword_140404A6C[record_word_offset + 225426059];
        selection_code_4 = 0x1000100010001LL;
        if ( iteration_count_2 >= table_value_4 )
          goto LABEL_52;
        do
        {
          if ( iteration_count_2 == -1 )
          {
            selection_code = 16897;
          }
          else if ( iteration_count_2 )
          {
            if ( iteration_count_2 > -2 )
            {
              if ( iteration_count_2 >= table_value_4 - 1 )
              {
LABEL_42:
                selection_code = 1;
                goto LABEL_43;
              }
              selection_code = 17409;
            }
            else
            {
              if ( -iteration_count_2 > (int)(dword_140404A6C[record_word_offset + 225426059] - 1) )
                goto LABEL_42;
              selection_code = 17665;
            }
          }
          else
          {
            selection_code = 16641;
          }
LABEL_43:
          WORD1(selection_code_4) = selection_code;
          if ( iteration_count < shifted_bits_3 || iteration_count >= saved_shifted_bits_4 )
          {
            combined_flags = 0x40000000;
          }
          else
          {
            LOWORD(selection_code_3) = selection_code;
            shifted_bits_7 = lookup_index << 6;
            if ( cached_integer_difference <= 0 )
              integer_difference_6 = dword_140404A6C[lookup_index + 19929097 + shifted_bits_7 - lookup_index_4];
            else
              integer_difference_6 = dword_140404A6C[lookup_index_4 + 19929066 + shifted_bits_7];
            combined_flags = integer_difference_6 | 0x80000000;
          }
          sub_14000F830(0, iteration_count + saved_shifted_bits, remaining_count, scaled_index_3 + iteration_count_2, combined_flags, &selection_code_3);
          shifted_bits_3 = saved_shifted_bits_2;
          table_value_4 = dword_140404A6C[record_word_offset + 225426060];
          ++iteration_count_2;
          lookup_index = cached_integer_quotient;
        }
        while ( iteration_count_2 < table_value_4 );
        remaining_count_2 = saved_shifted_bits_3;
LABEL_52:
        iteration_count_3 = ~dword_140404A6C[record_word_offset + 225426059];
        if ( iteration_count_3 <= table_value_4 )
        {
          do
          {
            sub_14003FA40(iteration_count + saved_shifted_bits, iteration_count_3 + scaled_index_3, (float)remaining_count * 4.0);
            ++iteration_count_3;
          }
          while ( iteration_count_3 <= (int)dword_140404A6C[record_word_offset + 225426060] );
          remaining_count_2 = saved_shifted_bits_3;
        }
        shifted_bits_3 = saved_shifted_bits_2;
        shifted_bits_4 = saved_shifted_bits_4;
        integer_difference_2 = cached_integer_difference;
        if ( iteration_count < saved_shifted_bits_2 || iteration_count >= saved_shifted_bits_4 )
        {
          integer_sum = lookup_index_4;
          integer_quotient = integer_quotient_3;
        }
        else
        {
          integer_quotient = integer_quotient_3;
          if ( cached_integer_difference < 0 && lookup_index_4 % integer_quotient_3 == integer_quotient_3 - 1 )
          {
            --remaining_count;
            saved_shifted_bits_3 = --remaining_count_2;
          }
          integer_sum = (lookup_index_4 + 1) % integer_quotient_3;
          lookup_index_4 = integer_sum;
        }
        lookup_index = cached_integer_quotient;
        ++iteration_count;
        integer_difference_3 = cached_integer_difference_2;
        if ( iteration_count >= cached_scaled_index )
        {
          LODWORD(packed_word_bits) = dword_140404A6C[record_word_offset + 225426056];
          break;
        }
      }
    }
    scaled_index_4 = 34LL * (int)packed_word_bits;
    for ( i = dword_140404A6C[scaled_index_4 + 225391232] - dword_140404A6C[record_word_offset + 225426059];
          i < (int)(dword_140404A6C[record_word_offset + 225426060] + dword_140404A6C[scaled_index_4 + 225391232]);
          scaled_index_4 = 34LL * (int)dword_140404A6C[record_word_offset + 225426056] )
    {
      table_value_5 = dword_140404A6C[scaled_index_4 + 225391240];
      table_value_6 = dword_140404A6C[scaled_index_4 + 225391231];
      table_value_7 = table_value_5 + dword_140404A6C[scaled_index_4 + 225391230];
      WORD1(selection_code_4) = 18433;
      if ( table_value_5 > 0 && ((int)dword_140404A6C[scaled_index_4 + 225391241] > 0 || (int)dword_140404A6C[scaled_index_4 + 225391243] > 0) )
        sub_14000F830(0, table_value_7, table_value_6, i, 0x40000000u, &selection_code_3);
      scaled_index_5 = 34LL * (int)dword_140404A6C[record_word_offset + 225426057];
      table_value_8 = dword_140404A6C[scaled_index_5 + 225391242];
      if ( table_value_8 > 0 && ((int)dword_140404A6C[scaled_index_5 + 225391241] > 0 || (int)dword_140404A6C[scaled_index_5 + 225391243] > 0) )
        sub_14000F830(
          0,
          dword_140404A6C[scaled_index_5 + 225391230] - table_value_8 - 1,
          dword_140404A6C[scaled_index_5 + 225391231],
          i,
          0x40000000u,
          &selection_code_3);
      ++i;
    }
  }
  if ( dword_140404A6C[record_word_offset + 225426058] == 1 )
  {
    integer_quotient_2 = 6;
    packed_word_bits_2 = (int)dword_140404A6C[record_word_offset + 225426056];
    scaled_index_6 = 34LL * (int)dword_140404A6C[record_word_offset + 225426057];
    integer_difference_7 = dword_140404A6C[scaled_index_6 + 225391232] - dword_140404A6C[scaled_index_6 + 225391243];
    table_value_9 = dword_140404A6C[scaled_index_6 + 225391231];
    integer_quotient_3 = 6;
    remaining_count_3 = dword_140404A6C[34 * packed_word_bits_2 + 225391231];
    scaled_index_7 = integer_difference_7 - (dword_140404A6C[34 * packed_word_bits_2 + 225391241] + dword_140404A6C[34 * packed_word_bits_2 + 225391232]);
    scaled_index_8 = dword_140404A6C[34 * packed_word_bits_2 + 225391230];
    integer_difference_8 = table_value_9 - remaining_count_3;
    saved_shifted_bits_2 = dword_140404A6C[34 * packed_word_bits_2 + 225391241] + dword_140404A6C[34 * packed_word_bits_2 + 225391232];
    cached_integer_difference = integer_difference_8;
    cached_scaled_index = scaled_index_7;
    abs32_result_2 = abs32(integer_difference_8);
    if ( abs32_result_2 > 0 )
    {
      integer_quotient_2 = scaled_index_7 / abs32_result_2;
      integer_quotient_3 = scaled_index_7 / abs32_result_2;
    }
    shifted_bits_8 = scaled_index_7 >> 1;
    shifted_bits_9 = (integer_quotient_2 * abs32_result_2) >> 1;
    shifted_bits_10 = (scaled_index_7 >> 1) - shifted_bits_9;
    shifted_bits_11 = (scaled_index_7 >> 1) + shifted_bits_9;
    saved_shifted_bits = shifted_bits_10;
    saved_shifted_bits_3 = shifted_bits_11;
    if ( g_183F7CB60 )
    {
      integer_quotient_2 = 6;
      integer_quotient_3 = 6;
      if ( abs32_result_2 > 0 )
      {
        if ( scaled_index_7 / 10 >= abs32_result_2 )
          integer_quotient_2 = 10;
        integer_quotient_3 = integer_quotient_2;
      }
      shifted_bits_12 = abs32_result_2 * ((unsigned int)integer_quotient_2 >> 1);
      shifted_bits_10 = shifted_bits_8 - shifted_bits_12;
      saved_shifted_bits = shifted_bits_8 - shifted_bits_12;
      shifted_bits_11 = shifted_bits_8 + shifted_bits_12;
      saved_shifted_bits_3 = shifted_bits_8 + shifted_bits_12;
    }
    lookup_index_4 = 0;
    integer_sum_6 = 0;
    iteration_count_4 = 0;
    if ( scaled_index_7 > 0 )
    {
      integer_difference_9 = scaled_index_7 - 1;
      lookup_index_2 = integer_quotient_2;
      remaining_count_4 = remaining_count_3 + 1;
      cached_integer_quotient = integer_quotient_2;
      saved_shifted_bits_4 = remaining_count_3 + 1;
      cached_integer_difference_2 = integer_difference_9;
      while ( 1 )
      {
        if ( iteration_count_4 >= shifted_bits_10 && iteration_count_4 < shifted_bits_11 && integer_difference_8 > 0 )
        {
          integer_difference_9 = cached_integer_difference_2;
          if ( !(integer_sum_6 % integer_quotient_2) )
          {
            ++remaining_count_3;
            saved_shifted_bits_4 = ++remaining_count_4;
          }
        }
        selection_code_3 = 0;
        selection_code_4 = 0;
        if ( !iteration_count_4 )
        {
          sub_14000F830(
            0,
            scaled_index_8 - dword_140404A6C[record_word_offset + 225426059] - 1,
            remaining_count_4,
            saved_shifted_bits_2,
            g_14500A748 | 0x80000000,
            &selection_code_3);
          integer_sum_10 = saved_shifted_bits_2;
          goto LABEL_103;
        }
        if ( iteration_count_4 < integer_difference_9 )
          break;
        if ( iteration_count_4 == integer_difference_9 )
        {
          sub_14000F830(
            0,
            scaled_index_8 - dword_140404A6C[record_word_offset + 225426059] - 1,
            remaining_count_4,
            iteration_count_4 + saved_shifted_bits_2,
            g_14500A748 | 0x80000000,
            &selection_code_3);
          integer_sum_10 = iteration_count_4 + saved_shifted_bits_2;
LABEL_103:
          table_value_11 = dword_140404A6C[record_word_offset + 225426060];
          state_address = &selection_code_3;
          integer_sum_9 = scaled_index_8 + table_value_11;
          LODWORD(packed_word_bits_3) = g_14500A748 | 0x80000000;
          saved_remaining_count_2 = remaining_count_4;
LABEL_104:
          sub_14000F830(0, integer_sum_9, saved_remaining_count_2, integer_sum_10, packed_word_bits_3, state_address);
          shifted_bits_10 = saved_shifted_bits;
          lookup_index_2 = cached_integer_quotient;
          integer_sum_6 = lookup_index_4;
        }
        selection_code_3 = 0x1000100010001LL;
        table_value_12 = dword_140404A6C[record_word_offset + 225426060];
        iteration_count_5 = -dword_140404A6C[record_word_offset + 225426059];
        selection_code_4 = 0x1000100010001LL;
        if ( iteration_count_5 >= table_value_12 )
          goto LABEL_125;
        lookup_index_3 = integer_sum_6;
        do
        {
          if ( iteration_count_5 == -1 )
          {
            selection_code_2 = 18177;
          }
          else if ( iteration_count_5 )
          {
            if ( iteration_count_5 > -2 )
            {
              comparison_result_2 = iteration_count_5 < table_value_12 - 1;
              selection_code_2 = 18689;
              if ( !comparison_result_2 )
LABEL_115:
                selection_code_2 = 1;
            }
            else
            {
              if ( -iteration_count_5 > (int)(dword_140404A6C[record_word_offset + 225426059] - 1) )
                goto LABEL_115;
              selection_code_2 = 18945;
            }
          }
          else
          {
            selection_code_2 = 17921;
          }
          WORD1(selection_code_4) = selection_code_2;
          if ( iteration_count_4 < shifted_bits_10 || iteration_count_4 >= saved_shifted_bits_3 )
          {
            combined_flags_2 = 0x40000000;
          }
          else
          {
            LOWORD(selection_code_3) = selection_code_2;
            shifted_bits_14 = lookup_index_2 << 6;
            if ( cached_integer_difference <= 0 )
              integer_difference_12 = dword_140404A6C[lookup_index_2 + 19929113 + shifted_bits_14 - lookup_index_3];
            else
              integer_difference_12 = dword_140404A6C[lookup_index_3 + 19929082 + shifted_bits_14];
            combined_flags_2 = integer_difference_12 | 0x80000000;
          }
          sub_14000F830(0, scaled_index_8 + iteration_count_5, remaining_count_3, iteration_count_4 + saved_shifted_bits_2, combined_flags_2, &selection_code_3);
          shifted_bits_10 = saved_shifted_bits;
          table_value_12 = dword_140404A6C[record_word_offset + 225426060];
          ++iteration_count_5;
          lookup_index_2 = cached_integer_quotient;
        }
        while ( iteration_count_5 < table_value_12 );
        remaining_count_4 = saved_shifted_bits_4;
LABEL_125:
        iteration_count_6 = ~dword_140404A6C[record_word_offset + 225426059];
        if ( iteration_count_6 <= table_value_12 )
        {
          do
          {
            sub_14003FA40(iteration_count_6 + scaled_index_8, iteration_count_4 + saved_shifted_bits_2, (float)remaining_count_3 * 4.0);
            ++iteration_count_6;
          }
          while ( iteration_count_6 <= (int)dword_140404A6C[record_word_offset + 225426060] );
          remaining_count_4 = saved_shifted_bits_4;
        }
        shifted_bits_10 = saved_shifted_bits;
        shifted_bits_11 = saved_shifted_bits_3;
        integer_difference_8 = cached_integer_difference;
        integer_quotient_2 = integer_quotient_3;
        if ( iteration_count_4 < saved_shifted_bits || iteration_count_4 >= saved_shifted_bits_3 )
        {
          integer_sum_6 = lookup_index_4;
        }
        else
        {
          if ( cached_integer_difference < 0 && lookup_index_4 % integer_quotient_3 == integer_quotient_3 - 1 )
          {
            --remaining_count_3;
            saved_shifted_bits_4 = --remaining_count_4;
          }
          integer_sum_6 = (lookup_index_4 + 1) % integer_quotient_3;
          lookup_index_4 = integer_sum_6;
        }
        lookup_index_2 = cached_integer_quotient;
        ++iteration_count_4;
        integer_difference_9 = cached_integer_difference_2;
        if ( iteration_count_4 >= cached_scaled_index )
        {
          LODWORD(packed_word_bits_2) = dword_140404A6C[record_word_offset + 225426056];
          goto LABEL_137;
        }
      }
      if ( iteration_count_4 < shifted_bits_10 || iteration_count_4 >= shifted_bits_11 )
      {
        integer_sum_7 = iteration_count_4 + saved_shifted_bits_2;
        sub_14000F830(
          0,
          scaled_index_8 - dword_140404A6C[record_word_offset + 225426059] - 1,
          remaining_count_4,
          iteration_count_4 + saved_shifted_bits_2,
          g_14500A748 | 0x80000000,
          &selection_code_3);
        state_word_2 = g_14500A748;
        saved_remaining_count_2 = remaining_count_4;
        table_value_10 = dword_140404A6C[record_word_offset + 225426060];
      }
      else
      {
        shifted_bits_13 = lookup_index_2 << 6;
        integer_sum_7 = iteration_count_4 + saved_shifted_bits_2;
        integer_difference_10 = scaled_index_8 - dword_140404A6C[record_word_offset + 225426059] - 1;
        if ( cached_integer_difference <= 0 )
        {
          integer_difference_11 = shifted_bits_13 + integer_quotient_2 - integer_sum_6;
          sub_14000F830(0, integer_difference_10, remaining_count_3, integer_sum_7, dword_140404A6C[integer_difference_11 + 19930137] | 0x80000000, &selection_code_3);
          saved_remaining_count_2 = remaining_count_3;
          state_word_2 = dword_140404A6C[integer_difference_11 + 19930137];
        }
        else
        {
          integer_sum_8 = shifted_bits_13 + integer_sum_6;
          sub_14000F830(0, integer_difference_10, remaining_count_3, integer_sum_7, dword_140404A6C[integer_sum_8 + 19930106] | 0x80000000, &selection_code_3);
          saved_remaining_count_2 = remaining_count_3;
          state_word_2 = dword_140404A6C[integer_sum_8 + 19930106];
        }
        table_value_10 = dword_140404A6C[record_word_offset + 225426060];
      }
      integer_sum_9 = table_value_10 + scaled_index_8;
      integer_sum_10 = integer_sum_7;
      state_address = &selection_code_3;
      LODWORD(packed_word_bits_3) = state_word_2 | 0x80000000;
      goto LABEL_104;
    }
LABEL_137:
    scaled_index_9 = 34LL * (int)packed_word_bits_2;
    for ( j = dword_140404A6C[scaled_index_9 + 225391230] - dword_140404A6C[record_word_offset + 225426059];
          j < (int)(dword_140404A6C[record_word_offset + 225426060] + dword_140404A6C[scaled_index_9 + 225391230]);
          scaled_index_9 = 34LL * (int)dword_140404A6C[record_word_offset + 225426056] )
    {
      table_value_13 = dword_140404A6C[scaled_index_9 + 225391241];
      table_value_14 = table_value_13 + dword_140404A6C[scaled_index_9 + 225391232];
      WORD1(selection_code_4) = 17153;
      if ( table_value_13 > 0 && ((int)dword_140404A6C[scaled_index_9 + 225391240] > 0 || (int)dword_140404A6C[scaled_index_9 + 225391242] > 0) )
        sub_14000F830(0, j, dword_140404A6C[scaled_index_9 + 225391231], table_value_14, 0x40000000u, &selection_code_3);
      scaled_index_10 = 34LL * (int)dword_140404A6C[record_word_offset + 225426057];
      table_value_15 = dword_140404A6C[scaled_index_10 + 225391243];
      if ( table_value_15 > 0 && ((int)dword_140404A6C[scaled_index_10 + 225391240] > 0 || (int)dword_140404A6C[scaled_index_10 + 225391242] > 0) )
        sub_14000F830(
          0,
          j,
          dword_140404A6C[scaled_index_10 + 225391231],
          dword_140404A6C[scaled_index_10 + 225391232] - table_value_15 - 1,
          0x40000000u,
          &selection_code_3);
      ++j;
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef packed_word_bits_3
#undef state_address
#undef lookup_index_4
#undef integer_quotient_3
#undef saved_shifted_bits
#undef saved_shifted_bits_2
#undef cached_integer_difference
#undef saved_shifted_bits_3
#undef saved_shifted_bits_4
#undef cached_integer_difference_2
#undef cached_integer_quotient
#undef cached_scaled_index
#undef selection_code_3
#undef selection_code_4
#undef unused_frame_slot_112

// 1400209C7: conditional instruction was optimized away because ebx.4>=1
// 14002102A: conditional instruction was optimized away because ebx.4>=1

//----- (0000000140022DF0) ----------------------------------------------------
double            sub_140022DF0(int a1, int a2)
{
  __int64 element_index;
  __int64 human_record_offset;
  __int64 float_word;
  __int64 input_value;
  unsigned int table_value;
  unsigned int comparison_result;
  unsigned int table_value_2;
  __int64 saved_comparison_result;
  __int64 lookup_index;
  __int64 table_value_3;
  unsigned int running_total;
  int table_value_4;
  __int64 scaled_index;
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  unsigned int masked_bits;
  float weighted_sum;
  unsigned int masked_bits_2;
  float weighted_sum_2;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  unsigned int masked_bits_3;
  __int64 scaled_index_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 table_value_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float weighted_sum_9;
  float state_address;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  unsigned int masked_bits_4;
  unsigned int masked_bits_5;
  float combined_products;
  float combined_products_2;
  float weighted_sum_15;
  float weighted_sum_16;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  __int64 scaled_index_8;
  float weighted_sum_17;
  float state_address_2;
  float state_address_3;
  float weighted_sum_18;
  float weighted_sum_19;
  float component_sum;
  float weighted_sum_20;
  float weighted_sum_21;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  double result;
  unsigned int running_total_2;
  int scaled_index_25;
  int table_value_6;
  unsigned int scaled_index_26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140022DF0[16];
#define lookup_index_2 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 0)) /* [rsp+120h] */
#define scaled_index_27 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 8)) /* [rsp+128h] */

  element_index = 0;
  human_record_offset = 7166LL * a1;
  float_word = a1;
  input_value = a2;
  table_value = dword_140404A6C[human_record_offset + 280658445];
  comparison_result = table_value == 1;
  if ( table_value == 2 )
  {
    comparison_result = 2;
  }
  else if ( table_value == 3 )
  {
    comparison_result = 3;
  }
  table_value_2 = dword_140404A6C[human_record_offset + 280658439];
  saved_comparison_result = comparison_result + 8;
  if ( table_value_2 != 1 )
    saved_comparison_result = comparison_result;
  lookup_index = (unsigned int)saved_comparison_result;
  table_value_3 = (int)dword_140404A6C[saved_comparison_result + 283827638];
  running_total = dword_140404A6C[908 * table_value_3 + 178527465];
  if ( (int)dword_140404A6C[human_record_offset + 280658447] > 0 )
    running_total += dword_140404A6C[908 * dword_140404A6C[2 * table_value_2 + 16 + 283827638] + 178527465];
  table_value_4 = dword_140404A6C[human_record_offset + 280658449];
  if ( table_value_4 > 0 )
    running_total += dword_140404A6C[908 * dword_140404A6C[table_value_4 + 2 * table_value_2 + 283827657] + 178527465];
  scaled_index = 908 * input_value;
  lookup_index_2 = input_value;
  scaled_index_27 = 908 * input_value;
  if ( dword_140404A6C[908 * input_value + 178527465] != running_total )
  {
    dword_140404A6C[scaled_index + 178527465] = running_total;
    dword_140404A6C[scaled_index + 178527462] = 8;
    dword_140404A6C[scaled_index + 178527475] = dword_140404A6C[908 * table_value_3 + 178527465];
    dword_140404A6C[scaled_index + 178527484] = table_value_3;
  }
  record_word_offset = 344LL * a1;
  record_word_offset_2 = 240LL * a1;
  *(float *)&masked_bits = *(float *)&dword_140404A6C[record_word_offset + 284956344]
                 - (float)(*(float *)&dword_140404A6C[record_word_offset + 284956350] * 0.125);
  weighted_sum = *(float *)&dword_140404A6C[record_word_offset + 284956351] * 0.125;
  dword_140404A6C[record_word_offset_2 + 23875734] = dword_140404A6C[record_word_offset + 284956345];
  dword_140404A6C[record_word_offset_2 + 23875735] = dword_140404A6C[record_word_offset + 284956346];
  dword_140404A6C[record_word_offset_2 + 23875733] = masked_bits;
  *(float *)&masked_bits_2 = *(float *)&dword_140404A6C[record_word_offset_2 + 23875734] - weighted_sum;
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 284956352] * 0.125;
  dword_140404A6C[record_word_offset_2 + 23875734] = masked_bits_2;
  *(float *)&dword_140404A6C[record_word_offset_2 + 23875735] = *(float *)&dword_140404A6C[record_word_offset_2 + 23875735] - weighted_sum_2;
  do
  {
    scaled_index_2 = 25 * element_index;
    scaled_index_3 = record_word_offset * 4 + 84 * element_index;
    scaled_index_4 = record_word_offset_2 * 4 + 36 * element_index;
    weighted_sum_3 = *(float *)((char *)&g_18430A564 + scaled_index_3);
    weighted_sum_4 = *(float *)((char *)&g_18430A568 + scaled_index_3);
    weighted_sum_5 = *(float *)((char *)&g_18430A56C + scaled_index_3);
    *(unsigned int *)((char *)&g_145F18D80 + scaled_index_4) = *(unsigned int *)((char *)&g_18430A558
                                                                                  + scaled_index_3);
    *(unsigned int *)((char *)&g_145F18D84 + scaled_index_4) = *(unsigned int *)((char *)&g_18430A55C
                                                                                  + scaled_index_3);
    *(unsigned int *)((char *)&g_145F18D88 + scaled_index_4) = *(unsigned int *)((char *)&g_18430A560
                                                                                  + scaled_index_3);
    masked_bits_3 = *(unsigned int *)((char *)&g_18430A570 + scaled_index_3);
    *(float *)((char *)&g_145F18D8C + scaled_index_4) = weighted_sum_3;
    *(float *)((char *)&g_145F18D90 + scaled_index_4) = weighted_sum_4;
    *(float *)((char *)&g_145F18D94 + scaled_index_4) = weighted_sum_5;
    *(unsigned int *)((char *)&g_145F18D98 + scaled_index_4) = masked_bits_3;
    *(unsigned int *)((char *)&g_145F18D9C + scaled_index_4) = *(unsigned int *)((char *)&g_18430A574
                                                                                  + scaled_index_3);
    *(unsigned int *)((char *)&g_145F18DA0 + scaled_index_4) = *(unsigned int *)((char *)&g_18430A578
                                                                                  + scaled_index_3);
    if ( !element_index )
      goto LABEL_38;
    scaled_index_5 = 786828 * lookup_index + 24 * element_index;
    weighted_sum_6 = *(float *)((char *)&g_166A649D8 + scaled_index_5);
    weighted_sum_7 = *(float *)((char *)&g_166A649DC + scaled_index_5);
    weighted_sum_8 = *(float *)((char *)&g_166A649E0 + scaled_index_5);
    if ( (unsigned __int64)(element_index - 1) <= 1 )
      weighted_sum_7 = 0.25;
    if ( element_index == 10 || element_index == 13 )
      weighted_sum_7 = 0.125;
    if ( (unsigned __int64)(element_index - 5) <= 1 || (unsigned __int64)(element_index - 8) <= 1 )
    {
      square_root = fsqrt((float)((float)(weighted_sum_7 * weighted_sum_7) + (float)(weighted_sum_6 * weighted_sum_6)) + (float)(weighted_sum_8 * weighted_sum_8));
      if ( square_root == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = weighted_sum_6 * (float)(1.0 / square_root);
        scaled_ratio_2 = weighted_sum_7 * (float)(1.0 / square_root);
        scaled_ratio_3 = weighted_sum_8 * (float)(1.0 / square_root);
      }
      weighted_sum_6 = scaled_ratio * 0.328125;
      weighted_sum_7 = scaled_ratio_2 * 0.328125;
      weighted_sum_8 = scaled_ratio_3 * 0.328125;
    }
    if ( element_index == 4 )
    {
      weighted_sum_6 = -0.1875;
    }
    else
    {
      if ( element_index != 7 )
        goto LABEL_31;
      weighted_sum_6 = 0.1875;
    }
    weighted_sum_7 = 0.125;
LABEL_31:
    table_value_5 = (int)dword_140404A6C[scaled_index_2 + 282486045];
    scaled_index_6 = record_word_offset_2 * 4 + 36 * table_value_5;
    scaled_index_7 = 3 * (element_index + 80 * float_word);
    weighted_sum_9 = *(float *)((char *)&g_145F18D90 + scaled_index_6);
    state_address = (float)(weighted_sum_8 * *(float *)((char *)&g_145F18D98 + scaled_index_6))
        + (float)(weighted_sum_6 * *(float *)((char *)&g_145F18D80 + scaled_index_6));
    weighted_sum_10 = *(float *)((char *)&g_145F18D94 + scaled_index_6);
    weighted_sum_11 = *(float *)((char *)&g_145F18D88 + scaled_index_6);
    weighted_sum_12 = weighted_sum_8 * *(float *)((char *)&g_145F18D9C + scaled_index_6);
    weighted_sum_13 = weighted_sum_6 * *(float *)((char *)&g_145F18D84 + scaled_index_6);
    weighted_sum_14 = weighted_sum_8 * *(float *)((char *)&g_145F18DA0 + scaled_index_6);
    *(float *)&dword_140404A6C[scaled_index_7 + 23875733] = state_address
                                               + (float)((float)(weighted_sum_7
                                                               * *(float *)((char *)&g_145F18D8C + scaled_index_6))
                                                       + *(float *)&dword_140404A6C[240 * float_word + 23875733 + 3 * table_value_5]);
    *(float *)&dword_140404A6C[scaled_index_7 + 23875734] = (float)(weighted_sum_12 + weighted_sum_13)
                                               + (float)((float)(weighted_sum_7 * weighted_sum_9)
                                                       + *(float *)&dword_140404A6C[240 * float_word + 23875734 + 3 * table_value_5]);
    *(float *)&dword_140404A6C[scaled_index_7 + 23875735] = (float)((float)(weighted_sum_6 * weighted_sum_11) + weighted_sum_14)
                                               + (float)((float)(weighted_sum_7 * weighted_sum_10)
                                                       + *(float *)&dword_140404A6C[240 * float_word + 23875735 + 3 * table_value_5]);
    if ( element_index == 4 || element_index == 7 )
    {
      *(float *)&masked_bits_4 = (float)(weighted_sum_4 * 0.1640625) + *(float *)((char *)&g_18430A550 + scaled_index_3);
      *(float *)&masked_bits_5 = (float)(weighted_sum_5 * 0.1640625) + *(float *)((char *)&g_18430A554 + scaled_index_3);
      *(float *)&dword_140404A6C[240 * float_word + 23875733 + 3 * element_index] = (float)(weighted_sum_3 * 0.1640625)
                                                               + *(float *)((char *)&g_18430A54C + scaled_index_3);
      dword_140404A6C[240 * float_word + 23875734 + 3 * element_index] = masked_bits_4;
      dword_140404A6C[240 * float_word + 23875735 + 3 * element_index] = masked_bits_5;
    }
    combined_products = *(float *)&dword_140404A6C[25 * table_value_5 + 282486050] - *(float *)&dword_140404A6C[25 * table_value_5 + 282486047];
    combined_products_2 = *(float *)&dword_140404A6C[25 * table_value_5 + 282486051] - *(float *)&dword_140404A6C[25 * table_value_5 + 282486048];
    if ( element_index == 12 || element_index == 15 )
    {
      combined_products_2 = combined_products_2 - 0.0625;
      combined_products = combined_products - 0.09375;
    }
    weighted_sum_15 = *(float *)((char *)&g_145F18D94 + scaled_index_6);
    weighted_sum_16 = *(float *)((char *)&g_145F18DA0 + scaled_index_6);
    combined_products_3 = *(float *)&dword_140404A6C[scaled_index_2 + 282486050] - combined_products;
    combined_products_4 = *(float *)&dword_140404A6C[scaled_index_2 + 282486049]
        - (float)(*(float *)&dword_140404A6C[25 * table_value_5 + 282486049] - *(float *)&dword_140404A6C[25 * table_value_5 + 282486046]);
    combined_products_5 = *(float *)&dword_140404A6C[scaled_index_2 + 282486051] - combined_products_2;
    scaled_index_8 = human_record_offset * 4 + 312 * element_index;
    weighted_sum_17 = combined_products_3 * *(float *)((char *)&g_145F18D90 + scaled_index_6);
    state_address_2 = (float)(*(float *)((char *)&g_145F18D9C + scaled_index_6) * combined_products_5)
        + (float)(*(float *)((char *)&g_145F18D84 + scaled_index_6) * combined_products_4);
    state_address_3 = (float)((float)(combined_products_5 * *(float *)((char *)&g_145F18D98 + scaled_index_6))
                + (float)(combined_products_4 * *(float *)((char *)&g_145F18D80 + scaled_index_6)))
        + (float)((float)(combined_products_3 * *(float *)((char *)&g_145F18D8C + scaled_index_6))
                + *(float *)&dword_140404A6C[240 * float_word + 23875733 + 3 * table_value_5]);
    weighted_sum_18 = *(float *)((char *)&g_145F18D88 + scaled_index_6) * combined_products_4;
    *(float *)&dword_140404A6C[240 * float_word + 23875733 + 3 * element_index] = state_address_3;
    weighted_sum_19 = weighted_sum_17 + *(float *)&dword_140404A6C[240 * float_word + 23875734 + 3 * table_value_5];
    *(float *)((char *)&g_18329E64C + scaled_index_8) = state_address_3;
    component_sum = state_address_2 + weighted_sum_19;
    *(float *)&dword_140404A6C[240 * float_word + 23875734 + 3 * element_index] = component_sum;
    weighted_sum_20 = (float)(weighted_sum_15 * combined_products_3) + *(float *)&dword_140404A6C[240 * float_word + 23875735 + 3 * table_value_5];
    *(float *)((char *)&g_18329E650 + scaled_index_8) = component_sum;
    weighted_sum_21 = (float)((float)(weighted_sum_16 * combined_products_5) + weighted_sum_18) + weighted_sum_20;
    *(float *)&dword_140404A6C[240 * float_word + 23875735 + 3 * element_index] = weighted_sum_21;
    *(float *)((char *)&g_18329E654 + scaled_index_8) = weighted_sum_21;
LABEL_38:
    ++element_index;
  }
  while ( element_index < 16 );
  scaled_index_9 = 240 * float_word;
  dword_140404A6C[scaled_index_9 + 23875685] = dword_140404A6C[196707 * lookup_index + 161054680];
  dword_140404A6C[scaled_index_9 + 23875686] = dword_140404A6C[196707 * lookup_index + 161054681];
  dword_140404A6C[scaled_index_9 + 23875687] = dword_140404A6C[196707 * lookup_index + 161054682];
  scaled_index_10 = 240 * float_word;
  dword_140404A6C[scaled_index_10 + 23875688] = dword_140404A6C[196707 * lookup_index + 161054686];
  dword_140404A6C[scaled_index_10 + 23875689] = dword_140404A6C[196707 * lookup_index + 161054687];
  dword_140404A6C[scaled_index_10 + 23875690] = dword_140404A6C[196707 * lookup_index + 161054688];
  scaled_index_11 = 240 * float_word;
  dword_140404A6C[scaled_index_11 + 23875691] = dword_140404A6C[196707 * lookup_index + 161054692];
  dword_140404A6C[scaled_index_11 + 23875692] = dword_140404A6C[196707 * lookup_index + 161054693];
  dword_140404A6C[scaled_index_11 + 23875693] = dword_140404A6C[196707 * lookup_index + 161054694];
  scaled_index_12 = 240 * float_word;
  dword_140404A6C[scaled_index_12 + 23875694] = dword_140404A6C[196707 * lookup_index + 161054698];
  dword_140404A6C[scaled_index_12 + 23875695] = dword_140404A6C[196707 * lookup_index + 161054699];
  dword_140404A6C[scaled_index_12 + 23875696] = dword_140404A6C[196707 * lookup_index + 161054700];
  scaled_index_13 = 240 * float_word;
  dword_140404A6C[scaled_index_13 + 23875697] = dword_140404A6C[196707 * lookup_index + 161054704];
  dword_140404A6C[scaled_index_13 + 23875698] = dword_140404A6C[196707 * lookup_index + 161054705];
  dword_140404A6C[scaled_index_13 + 23875699] = dword_140404A6C[196707 * lookup_index + 161054706];
  scaled_index_14 = 240 * float_word;
  dword_140404A6C[scaled_index_14 + 23875700] = dword_140404A6C[196707 * lookup_index + 161054710];
  dword_140404A6C[scaled_index_14 + 23875701] = dword_140404A6C[196707 * lookup_index + 161054711];
  dword_140404A6C[scaled_index_14 + 23875702] = dword_140404A6C[196707 * lookup_index + 161054712];
  scaled_index_15 = 240 * float_word;
  dword_140404A6C[scaled_index_15 + 23875703] = dword_140404A6C[196707 * lookup_index + 161054716];
  dword_140404A6C[scaled_index_15 + 23875704] = dword_140404A6C[196707 * lookup_index + 161054717];
  dword_140404A6C[scaled_index_15 + 23875705] = dword_140404A6C[196707 * lookup_index + 161054718];
  scaled_index_16 = 240 * float_word;
  dword_140404A6C[scaled_index_16 + 23875706] = dword_140404A6C[196707 * lookup_index + 161054722];
  dword_140404A6C[scaled_index_16 + 23875707] = dword_140404A6C[196707 * lookup_index + 161054723];
  dword_140404A6C[scaled_index_16 + 23875708] = dword_140404A6C[196707 * lookup_index + 161054724];
  scaled_index_17 = 240 * float_word;
  dword_140404A6C[scaled_index_17 + 23875709] = dword_140404A6C[196707 * lookup_index + 161054728];
  dword_140404A6C[scaled_index_17 + 23875710] = dword_140404A6C[196707 * lookup_index + 161054729];
  dword_140404A6C[scaled_index_17 + 23875711] = dword_140404A6C[196707 * lookup_index + 161054730];
  scaled_index_18 = 240 * float_word;
  dword_140404A6C[scaled_index_18 + 23875712] = dword_140404A6C[196707 * lookup_index + 161054734];
  dword_140404A6C[scaled_index_18 + 23875713] = dword_140404A6C[196707 * lookup_index + 161054735];
  dword_140404A6C[scaled_index_18 + 23875714] = dword_140404A6C[196707 * lookup_index + 161054736];
  scaled_index_19 = 240 * float_word;
  dword_140404A6C[scaled_index_19 + 23875715] = dword_140404A6C[196707 * lookup_index + 161054740];
  dword_140404A6C[scaled_index_19 + 23875716] = dword_140404A6C[196707 * lookup_index + 161054741];
  dword_140404A6C[scaled_index_19 + 23875717] = dword_140404A6C[196707 * lookup_index + 161054742];
  scaled_index_20 = 240 * float_word;
  dword_140404A6C[scaled_index_20 + 23875718] = dword_140404A6C[196707 * lookup_index + 161054746];
  dword_140404A6C[scaled_index_20 + 23875719] = dword_140404A6C[196707 * lookup_index + 161054747];
  dword_140404A6C[scaled_index_20 + 23875720] = dword_140404A6C[196707 * lookup_index + 161054748];
  scaled_index_21 = 240 * float_word;
  dword_140404A6C[scaled_index_21 + 23875721] = dword_140404A6C[196707 * lookup_index + 161054752];
  dword_140404A6C[scaled_index_21 + 23875722] = dword_140404A6C[196707 * lookup_index + 161054753];
  dword_140404A6C[scaled_index_21 + 23875723] = dword_140404A6C[196707 * lookup_index + 161054754];
  scaled_index_22 = 240 * float_word;
  dword_140404A6C[scaled_index_22 + 23875724] = dword_140404A6C[196707 * lookup_index + 161054758];
  dword_140404A6C[scaled_index_22 + 23875725] = dword_140404A6C[196707 * lookup_index + 161054759];
  dword_140404A6C[scaled_index_22 + 23875726] = dword_140404A6C[196707 * lookup_index + 161054760];
  scaled_index_23 = 240 * float_word;
  dword_140404A6C[scaled_index_23 + 23875727] = dword_140404A6C[196707 * lookup_index + 161054764];
  dword_140404A6C[scaled_index_23 + 23875728] = dword_140404A6C[196707 * lookup_index + 161054765];
  dword_140404A6C[scaled_index_23 + 23875729] = dword_140404A6C[196707 * lookup_index + 161054766];
  scaled_index_24 = 240 * float_word;
  dword_140404A6C[scaled_index_24 + 23875730] = dword_140404A6C[196707 * lookup_index + 161054770];
  dword_140404A6C[scaled_index_24 + 23875731] = dword_140404A6C[196707 * lookup_index + 161054771];
  dword_140404A6C[scaled_index_24 + 23875732] = dword_140404A6C[196707 * lookup_index + 161054772];
  glBindBufferBase(35982, 0, dword_140404A6C[2 * dword_140404A6C[lookup_index_2 + 283790166] + 283793813]);
  result = sub_14011E730(a1, lookup_index);
  running_total_2 = dword_140404A6C[908 * dword_140404A6C[lookup_index + 283827638] + 178527465];
  if ( (int)dword_140404A6C[human_record_offset + 280658447] > 0 )
  {
    scaled_index_25 = 2 * dword_140404A6C[human_record_offset + 280658439] + 16;
    glBindBufferRange(35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[lookup_index_2 + 283790166] + 283793813],
      (int)(12 * running_total_2 * dword_140404A6C[scaled_index_27 + 178527462]),
      (int)(12 * dword_140404A6C[scaled_index_27 + 178527462] * dword_140404A6C[908 * dword_140404A6C[scaled_index_25 + 283827638] + 178527465]));
    result = sub_14011E730(a1, scaled_index_25);
    running_total_2 += dword_140404A6C[908 * dword_140404A6C[scaled_index_25 + 283827638] + 178527465];
  }
  table_value_6 = dword_140404A6C[human_record_offset + 280658449];
  if ( table_value_6 > 0 )
  {
    scaled_index_26 = table_value_6 + 2 * dword_140404A6C[human_record_offset + 280658439];
    glBindBufferRange(35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[lookup_index_2 + 283790166] + 283793813],
      (int)(12 * running_total_2 * dword_140404A6C[scaled_index_27 + 178527462]),
      (int)(12 * dword_140404A6C[scaled_index_27 + 178527462] * dword_140404A6C[908 * dword_140404A6C[scaled_index_26 + 283827657] + 178527465]));
    return sub_14011E730(a1, scaled_index_26 + 19);
  }
  return result;
}
#undef lookup_index_2
#undef scaled_index_27

//----- (0000000140037FE0) ----------------------------------------------------
void sub_140037FE0()
{
  signed int state_word;
  int iteration_count;
  signed int iteration_count_2;
  int state_word_2;
  int state_word_3;
  int iteration_count_3;
  int iteration_count_4;
  int scaled_index;
  unsigned int *state_address;
  signed int i;
  signed int iteration_count_5;
  signed int loaded_word;
  int iteration_count_6;

  state_word = g_15ADA9278;
  iteration_count = 0;
  world_grid_block_count = 0;
  iteration_count_2 = 0;
  if ( (int)g_15ADA9278 > 0 )
  {
    state_word_2 = g_15ADA927C;
    state_word_3 = g_15ADA9274;
    do
    {
      iteration_count_3 = 0;
      if ( state_word_2 > 0 )
      {
        do
        {
          iteration_count_4 = 0;
          if ( state_word_3 > 0 )
          {
            do
            {
              scaled_index = iteration_count_4 + state_word_3 * (iteration_count_3 + iteration_count_2 * state_word_2);
              ++iteration_count_4;
              *(_DWORD *)(g_1A4BF0900 + 4LL * scaled_index) = -1;
              state_word_3 = g_15ADA9274;
              state_word_2 = g_15ADA927C;
            }
            while ( iteration_count_4 < (int)g_15ADA9274 );
          }
          ++iteration_count_3;
        }
        while ( iteration_count_3 < state_word_2 );
        state_word = g_15ADA9278;
      }
      ++iteration_count_2;
    }
    while ( iteration_count_2 < state_word );
  }
  world_grid_leaf_count = 0;
  state_address = &g_182BBB2A8;
  do
  {
    if ( *(state_address - 74) )
    {
      if ( dword_140404A6C[1268 * *(state_address - 69) + 278521288] )
      {
        for ( i = *(state_address - 2); i <= (int)state_address[1]; ++i )
        {
          iteration_count_5 = *(state_address - 1);
          if ( iteration_count_5 <= (int)state_address[2] )
          {
            loaded_word = *state_address;
            do
            {
              iteration_count_6 = *(state_address - 3);
              if ( iteration_count_6 <= loaded_word )
              {
                do
                {
                  sub_140037DE0(0, iteration_count_6, i, iteration_count_5, iteration_count | 0x8000);
                  loaded_word = *state_address;
                  ++iteration_count_6;
                }
                while ( iteration_count_6 <= (int)*state_address );
              }
              ++iteration_count_5;
            }
            while ( iteration_count_5 <= (int)state_address[2] );
          }
        }
      }
    }
    ++iteration_count;
    state_address += 1760;
  }
  while ( iteration_count < 1024 );
}

//----- (000000014003E4B0) ----------------------------------------------------
_BOOL8            sub_14003E4B0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        int *a7,
        unsigned __int16 a8,
        float a9)
{
  float scaled_value;
  signed int iteration_count;
  float input_value;
  __int64 record_word_offset;
  float scaled_value_2;
  float source_component_y;
  float source_component_z;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 packed_word_bits;
  float scaled_value_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 scaled_index;
  float product_difference;
  float product_difference_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  float square_root;
  float input_value_2;
  int comparison_operand;
  int comparison_operand_2;
  int saved_float_word;
  int comparison_operand_3;
  signed int iteration_count_2;
  __int64 record_byte_offset_3;
  __int64 record_byte_offset_4;
  __int64 masked_bits_3;
  __int64 masked_bits_4;
  __int64 loaded_word_2;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  __int64 packed_word_bits_2;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  __int64 scaled_index_2;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 loaded_word_3;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float product_difference_10;
  float product_difference_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  float product_difference_15;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float product_difference_16;
  float product_difference_17;
  float product_difference_18;
  float square_root_2;
  float input_value_3;
  int comparison_operand_4;
  int comparison_operand_5;
  int saved_float_word_2;
  int comparison_operand_6;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float product_difference_19;
  float product_difference_20;
  float product_difference_21;
  float square_root_3;
  float input_value_4;
  int comparison_operand_7;
  int comparison_operand_8;
  int saved_float_word_3;
  int comparison_operand_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003E4B0[400];
#define float_word (*(__int64 (*))(void *)(sr_frame_14003E4B0 + 0)) /* [rsp+50h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_14003E4B0 + 8)) /* [rsp+58h] */
#define float_word_2 (*(int (*))(void *)(sr_frame_14003E4B0 + 16)) /* [rsp+60h] */
#define frame_word_at_20 (*(int (*))(void *)(sr_frame_14003E4B0 + 20)) /* [rsp+64h] */
#define frame_word_at_24 (*(int (*))(void *)(sr_frame_14003E4B0 + 24)) /* [rsp+68h] */
#define scaled_value_7 (*(float (*))(void *)(sr_frame_14003E4B0 + 32)) /* [rsp+70h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14003E4B0 + 36)) /* [rsp+74h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14003E4B0 + 40)) /* [rsp+78h] */
#define scaled_value_8 (*(float (*))(void *)(sr_frame_14003E4B0 + 48)) /* [rsp+80h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_14003E4B0 + 52)) /* [rsp+84h] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_14003E4B0 + 56)) /* [rsp+88h] */
#define scaled_value_9 (*(float (*))(void *)(sr_frame_14003E4B0 + 64)) /* [rsp+90h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_14003E4B0 + 68)) /* [rsp+94h] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_14003E4B0 + 72)) /* [rsp+98h] */
#define scaled_value_10 (*(float (*))(void *)(sr_frame_14003E4B0 + 80)) /* [rsp+A0h] */
#define scaled_value_11 (*(float (*))(void *)(sr_frame_14003E4B0 + 84)) /* [rsp+A4h] */
#define saved_source_component_y (*(float (*))(void *)(sr_frame_14003E4B0 + 88)) /* [rsp+A8h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14003E4B0 + 96)) /* [rsp+B0h] */
#define saved_source_component_z (*(float (*))(void *)(sr_frame_14003E4B0 + 352)) /* [rsp+1B0h] */
#define input_cursor (*(float * (*))(void *)(sr_frame_14003E4B0 + 360)) /* [rsp+1B8h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_14003E4B0 + 384)) /* [rsp+1D0h] */
#define scaled_value_12 (*(float (*))(void *)(sr_frame_14003E4B0 + 392)) /* [rsp+1D8h] */

  input_cursor = a4;
  scaled_value = 65536.0;
  iteration_count = 0;
  input_value = a9;
  *a3 = 65536.0;
  record_word_offset = 58LL * a8;
  scaled_value_2 = (float)*a7;
  source_component_y = (float)a7[1];
  source_component_z = (float)a7[2];
  saved_scaled_value = scaled_value_2;
  saved_source_component_y = source_component_y;
  saved_source_component_z = source_component_z;
  if ( (int)dword_140404A6C[record_word_offset + 20074639] > 0 )
  {
    record_byte_offset = 0;
    record_byte_offset_2 = 0;
    do
    {
      masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074641];
      loaded_word = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2);
      weighted_sum = source_component_z + *(float *)(masked_bits + 4 * loaded_word + 8);
      weighted_sum_2 = source_component_y + *(float *)(masked_bits + 4 * loaded_word + 4);
      weighted_sum_3 = scaled_value_2 + *(float *)(masked_bits + 4 * loaded_word);
      packed_word_bits = 3 * *(_DWORD *)(masked_bits_2 + record_byte_offset_2 + 4);
      unused_written_slot_4 = weighted_sum * input_value;
      scaled_value_3 = weighted_sum_3 * input_value;
      weighted_sum_4 = source_component_z + *(float *)(masked_bits + 4 * packed_word_bits + 8);
      weighted_sum_5 = source_component_y + *(float *)(masked_bits + 4 * packed_word_bits + 4);
      weighted_sum_6 = scaled_value_2 + *(float *)(masked_bits + 4 * packed_word_bits);
      LODWORD(packed_word_bits) = *(_DWORD *)(masked_bits_2 + record_byte_offset_2 + 8);
      unused_written_slot_3 = weighted_sum_2 * input_value;
      scaled_index = 3 * (int)packed_word_bits;
      unused_written_slot_6 = weighted_sum_4 * input_value;
      product_difference = (float)(weighted_sum_4 * input_value) - (float)(weighted_sum * input_value);
      unused_written_slot_5 = weighted_sum_5 * input_value;
      product_difference_2 = (float)(weighted_sum_5 * input_value) - (float)(weighted_sum_2 * input_value);
      weighted_sum_7 = source_component_y + *(float *)(masked_bits + 4 * scaled_index + 4);
      weighted_sum_8 = source_component_z + *(float *)(masked_bits + 4 * scaled_index + 8);
      weighted_sum_9 = scaled_value_2 + *(float *)(masked_bits + 4 * scaled_index);
      scaled_value_9 = weighted_sum_6 * input_value;
      product_difference_3 = (float)(weighted_sum_6 * input_value) - scaled_value_3;
      scaled_value_8 = scaled_value_3;
      unused_written_slot = weighted_sum_7 * input_value;
      product_difference_4 = (float)(weighted_sum_7 * input_value) - (float)(weighted_sum_2 * input_value);
      unused_written_slot_2 = weighted_sum_8 * input_value;
      product_difference_5 = (float)(weighted_sum_8 * input_value) - (float)(weighted_sum * input_value);
      scaled_value_7 = weighted_sum_9 * input_value;
      product_difference_6 = (float)(weighted_sum_9 * input_value) - scaled_value_3;
      product_difference_7 = (float)(product_difference_4 * product_difference) - (float)(product_difference_5 * product_difference_2);
      product_difference_8 = (float)(product_difference_5 * product_difference_3) - (float)(product_difference_6 * product_difference);
      product_difference_9 = (float)(product_difference_6 * product_difference_2) - (float)(product_difference_4 * product_difference_3);
      square_root = fsqrt((float)((float)(product_difference_8 * product_difference_8) + (float)(product_difference_7 * product_difference_7)) + (float)(product_difference_9 * product_difference_9));
      if ( square_root == 0.0 )
      {
        float_word = 0;
        scaled_ratio = 0.0;
      }
      else
      {
        *(float *)&float_word = product_difference_7 * (float)(1.0 / square_root);
        *((float *)&float_word + 1) = product_difference_8 * (float)(1.0 / square_root);
        scaled_ratio = product_difference_9 * (float)(1.0 / square_root);
      }
      if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, &a9, a4, a5, a6, &scaled_value_8, &scaled_value_9, &scaled_value_7) )
      {
        input_value_2 = a9;
        if ( a9 < *a3 )
        {
          comparison_operand = frame_word_at_20;
          *a1 = float_word_2;
          comparison_operand_2 = frame_word_at_24;
          a1[1] = comparison_operand;
          saved_float_word = float_word;
          a1[2] = comparison_operand_2;
          comparison_operand_3 = HIDWORD(float_word);
          *(_DWORD *)a2 = saved_float_word;
          *(float *)(a2 + 8) = scaled_ratio;
          *(_DWORD *)(a2 + 4) = comparison_operand_3;
          *a3 = input_value_2;
          g_151A848EC = *(_DWORD *)(record_byte_offset + *(_QWORD *)&dword_140404A6C[record_word_offset + 20074643]);
        }
      }
      scaled_value_2 = saved_scaled_value;
      a4 = input_cursor;
      ++iteration_count;
      record_byte_offset_2 += 12;
      record_byte_offset += 4;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 20074639] );
    scaled_value = *a3;
  }
  iteration_count_2 = 0;
  if ( (int)dword_140404A6C[record_word_offset + 20074623] > 0 )
  {
    record_byte_offset_3 = 0;
    record_byte_offset_4 = 0;
    do
    {
      masked_bits_3 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074615];
      masked_bits_4 = *(_QWORD *)&dword_140404A6C[record_word_offset + 20074631];
      loaded_word_2 = 3 * *(_DWORD *)(masked_bits_4 + record_byte_offset_4);
      weighted_sum_10 = scaled_value_2 + *(float *)(masked_bits_3 + 4 * loaded_word_2);
      weighted_sum_11 = source_component_y + *(float *)(masked_bits_3 + 4 * loaded_word_2 + 4);
      weighted_sum_12 = source_component_z + *(float *)(masked_bits_3 + 4 * loaded_word_2 + 8);
      packed_word_bits_2 = 3 * *(_DWORD *)(masked_bits_4 + record_byte_offset_4 + 4);
      scaled_value_12 = weighted_sum_10 * input_value;
      weighted_sum_13 = scaled_value_2 + *(float *)(masked_bits_3 + 4 * packed_word_bits_2);
      weighted_sum_14 = source_component_y + *(float *)(masked_bits_3 + 4 * packed_word_bits_2 + 4);
      weighted_sum_15 = source_component_z + *(float *)(masked_bits_3 + 4 * packed_word_bits_2 + 8);
      LODWORD(packed_word_bits_2) = *(_DWORD *)(masked_bits_4 + record_byte_offset_4 + 8);
      scaled_value_8 = weighted_sum_10 * input_value;
      scaled_value_10 = weighted_sum_11 * input_value;
      unused_written_slot_3 = weighted_sum_11 * input_value;
      scaled_value_11 = weighted_sum_12 * input_value;
      scaled_index_2 = 3 * (int)packed_word_bits_2;
      unused_written_slot_4 = weighted_sum_12 * input_value;
      weighted_sum_16 = source_component_z + *(float *)(masked_bits_3 + 4 * scaled_index_2 + 8);
      weighted_sum_17 = scaled_value_2 + *(float *)(masked_bits_3 + 4 * scaled_index_2);
      weighted_sum_18 = source_component_y + *(float *)(masked_bits_3 + 4 * scaled_index_2 + 4);
      loaded_word_3 = 3 * *(_DWORD *)(masked_bits_4 + record_byte_offset_4 + 12);
      weighted_sum_19 = scaled_value_2 + *(float *)(masked_bits_3 + 4 * loaded_word_3);
      weighted_sum_20 = source_component_y + *(float *)(masked_bits_3 + 4 * loaded_word_3 + 4);
      weighted_sum_21 = saved_source_component_z + *(float *)(masked_bits_3 + 4 * loaded_word_3 + 8);
      unused_written_slot = weighted_sum_18 * input_value;
      product_difference_10 = (float)(weighted_sum_18 * input_value) - (float)(weighted_sum_11 * input_value);
      unused_written_slot_2 = weighted_sum_16 * input_value;
      product_difference_11 = (float)(weighted_sum_16 * input_value) - (float)(weighted_sum_12 * input_value);
      unused_written_slot_5 = weighted_sum_14 * input_value;
      product_difference_12 = (float)(weighted_sum_14 * input_value) - (float)(weighted_sum_11 * input_value);
      unused_written_slot_6 = weighted_sum_15 * input_value;
      product_difference_13 = (float)(weighted_sum_15 * input_value) - (float)(weighted_sum_12 * input_value);
      scaled_value_9 = weighted_sum_13 * input_value;
      product_difference_14 = (float)(weighted_sum_13 * input_value) - (float)(weighted_sum_10 * input_value);
      scaled_value_7 = weighted_sum_17 * input_value;
      product_difference_15 = (float)(weighted_sum_17 * input_value) - (float)(weighted_sum_10 * input_value);
      scaled_value_4 = weighted_sum_19 * input_value;
      scaled_value_5 = weighted_sum_20 * input_value;
      scaled_value_6 = weighted_sum_21 * input_value;
      product_difference_16 = (float)(product_difference_10 * product_difference_13) - (float)(product_difference_11 * product_difference_12);
      float_buffer[0] = scaled_value_4;
      float_buffer[1] = scaled_value_5;
      float_buffer[2] = scaled_value_6;
      product_difference_17 = (float)(product_difference_11 * product_difference_14) - (float)(product_difference_15 * product_difference_13);
      product_difference_18 = (float)(product_difference_15 * product_difference_12) - (float)(product_difference_10 * product_difference_14);
      square_root_2 = fsqrt((float)((float)(product_difference_17 * product_difference_17) + (float)(product_difference_16 * product_difference_16)) + (float)(product_difference_18 * product_difference_18));
      if ( square_root_2 == 0.0 )
      {
        float_word = 0;
        scaled_ratio = 0.0;
      }
      else
      {
        *(float *)&float_word = (float)(1.0 / square_root_2) * product_difference_16;
        *((float *)&float_word + 1) = (float)(1.0 / square_root_2) * product_difference_17;
        scaled_ratio = (float)(1.0 / square_root_2) * product_difference_18;
      }
      if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, &a9, a4, a5, a6, &scaled_value_8, &scaled_value_9, &scaled_value_7) )
      {
        input_value_3 = a9;
        if ( a9 < *a3 )
        {
          comparison_operand_4 = frame_word_at_20;
          *a1 = float_word_2;
          comparison_operand_5 = frame_word_at_24;
          a1[1] = comparison_operand_4;
          saved_float_word_2 = float_word;
          a1[2] = comparison_operand_5;
          comparison_operand_6 = HIDWORD(float_word);
          *(_DWORD *)a2 = saved_float_word_2;
          *(float *)(a2 + 8) = scaled_ratio;
          *(_DWORD *)(a2 + 4) = comparison_operand_6;
          *a3 = input_value_3;
          g_151A848EC = *(_DWORD *)(record_byte_offset_3 + *(_QWORD *)&dword_140404A6C[record_word_offset + 20074633]);
        }
      }
      component_delta = scaled_value_4 - scaled_value_12;
      component_delta_2 = scaled_value_5 - scaled_value_10;
      component_delta_3 = scaled_value_6 - scaled_value_11;
      product_difference_19 = (float)(component_delta_2 * product_difference_11) - (float)(component_delta_3 * product_difference_10);
      product_difference_20 = (float)(product_difference_15 * component_delta_3) - (float)(component_delta * product_difference_11);
      product_difference_21 = (float)(component_delta * product_difference_10) - (float)(product_difference_15 * component_delta_2);
      square_root_3 = fsqrt((float)((float)(product_difference_20 * product_difference_20) + (float)(product_difference_19 * product_difference_19)) + (float)(product_difference_21 * product_difference_21));
      if ( square_root_3 == 0.0 )
      {
        float_word = 0;
        scaled_ratio = 0.0;
      }
      else
      {
        *(float *)&float_word = (float)(1.0 / square_root_3) * product_difference_19;
        *((float *)&float_word + 1) = (float)(1.0 / square_root_3) * product_difference_20;
        scaled_ratio = (float)(1.0 / square_root_3) * product_difference_21;
      }
      if ( sub_14003F0B0((float *)&float_word_2, (float *)&float_word, &a9, input_cursor, a5, a6, &scaled_value_8, &scaled_value_7, float_buffer) )
      {
        input_value_4 = a9;
        if ( a9 < *a3 )
        {
          comparison_operand_7 = frame_word_at_20;
          *a1 = float_word_2;
          comparison_operand_8 = frame_word_at_24;
          a1[1] = comparison_operand_7;
          saved_float_word_3 = float_word;
          a1[2] = comparison_operand_8;
          comparison_operand_9 = HIDWORD(float_word);
          *(_DWORD *)a2 = saved_float_word_3;
          *(float *)(a2 + 8) = scaled_ratio;
          *(_DWORD *)(a2 + 4) = comparison_operand_9;
          *a3 = input_value_4;
          g_151A848EC = *(_DWORD *)(record_byte_offset_3 + *(_QWORD *)&dword_140404A6C[record_word_offset + 20074633]);
        }
      }
      scaled_value_2 = saved_scaled_value;
      source_component_y = saved_source_component_y;
      ++iteration_count_2;
      source_component_z = saved_source_component_z;
      record_byte_offset_4 += 16;
      a4 = input_cursor;
      record_byte_offset_3 += 4;
    }
    while ( iteration_count_2 < (int)dword_140404A6C[record_word_offset + 20074623] );
    scaled_value = *a3;
  }
  return scaled_value < 65536.0;
}
#undef float_word
#undef scaled_ratio
#undef float_word_2
#undef frame_word_at_20
#undef frame_word_at_24
#undef scaled_value_7
#undef unused_written_slot
#undef unused_written_slot_2
#undef scaled_value_8
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef scaled_value_9
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef scaled_value_10
#undef scaled_value_11
#undef saved_source_component_y
#undef float_buffer
#undef saved_source_component_z
#undef input_cursor
#undef saved_scaled_value
#undef scaled_value_12

//----- (000000014004D170) ----------------------------------------------------
float *           sub_14004D170(int a1, unsigned int *a2)
{
  __int64 record_word_offset;
  float *result;
  int iteration_count;
  float source_component_z;
  float product_difference;
  unsigned int loaded_word;
  unsigned int loaded_word_2;
  float comparison_operand;
  int iteration_count_2;
  unsigned int *buffer_cursor;
  int iteration_count_3;
  int masked_bits;
  int loaded_word_3;
  int integer_sum;
  int loaded_word_4;
  int loaded_word_5;
  int iteration_count_4;

  record_word_offset = 58LL * a1;
  dword_140404A6C[record_word_offset + 20074645] = a2[2];
  dword_140404A6C[record_word_offset + 20074646] = a2[1];
  result = (float *)*a2;
  dword_140404A6C[record_word_offset + 20074647] = (unsigned int)result;
  iteration_count = 0;
  source_component_z = (float)(int)a2[2];
  if ( (int)g_1510AB760 > 0 )
  {
    result = (float *)&g_1511AB76C;
    do
    {
      product_difference = source_component_z - *result;
      *result = *(result - 2);
      ++iteration_count;
      *(result - 2) = product_difference;
      loaded_word = *((_DWORD *)result + 49150);
      result[49150] = -result[49152];
      loaded_word_2 = *((_DWORD *)result + 98302);
      *((_DWORD *)result + 49152) = loaded_word;
      comparison_operand = result[98304];
      *((_DWORD *)result + 98304) = loaded_word_2;
      result[98302] = -comparison_operand;
      result += 3;
    }
    while ( iteration_count < (int)g_1510AB760 );
  }
  iteration_count_2 = 0;
  if ( (int)g_1512DB764 > 0 )
  {
    buffer_cursor = &g_15131B768;
    do
    {
      iteration_count_3 = *buffer_cursor;
      result = (float *)((*buffer_cursor & 0xF0000) - 196608);
      if ( ((unsigned int)result & 0xFFFEFFFF) == 0 )
      {
        result = (float *)((unsigned __int8)(((iteration_count_3 >> 12) + 1) & 3) << 12);
        iteration_count_3 = (unsigned int)result | iteration_count_3 & 0xFFFF0FFF;
        *buffer_cursor = iteration_count_3;
      }
      if ( (iteration_count_3 & 0xF0000) == 0 )
      {
        *((_WORD *)buffer_cursor + 1) = 0;
        iteration_count_3 = *buffer_cursor;
        result = (float *)(*buffer_cursor - 1);
        if ( (unsigned int)result > 2 )
        {
          if ( iteration_count_3 == 4 )
          {
            *buffer_cursor = 1;
            goto LABEL_38;
          }
        }
        else
        {
          *buffer_cursor = ++iteration_count_3;
        }
      }
      masked_bits = iteration_count_3 & 0xF0000;
      switch ( masked_bits )
      {
        case 393216:
          *((_WORD *)buffer_cursor + 1) = 0;
          loaded_word_3 = *buffer_cursor;
          result = (float *)(*buffer_cursor - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( loaded_word_3 == 4 )
              loaded_word_3 = 1;
            integer_sum = loaded_word_3 | 0x10000;
          }
          else
          {
            integer_sum = (loaded_word_3 + 1) | 0x10000;
          }
LABEL_37:
          *buffer_cursor = integer_sum;
          break;
        case 65536:
          *((_WORD *)buffer_cursor + 1) = 0;
          loaded_word_4 = *buffer_cursor;
          result = (float *)(*buffer_cursor - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( loaded_word_4 == 4 )
              loaded_word_4 = 1;
            integer_sum = loaded_word_4 | 0x50000;
          }
          else
          {
            integer_sum = (loaded_word_4 + 1) | 0x50000;
          }
          goto LABEL_37;
        case 327680:
          *((_WORD *)buffer_cursor + 1) = 0;
          loaded_word_5 = *buffer_cursor;
          result = (float *)(*buffer_cursor - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( loaded_word_5 == 4 )
              loaded_word_5 = 1;
            integer_sum = loaded_word_5 | 0x20000;
          }
          else
          {
            integer_sum = (loaded_word_5 + 1) | 0x20000;
          }
          goto LABEL_37;
        case 131072:
          *((_WORD *)buffer_cursor + 1) = 0;
          iteration_count_4 = *buffer_cursor;
          result = (float *)(*buffer_cursor - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( iteration_count_4 == 4 )
              iteration_count_4 = 1;
          }
          else
          {
            ++iteration_count_4;
          }
          integer_sum = iteration_count_4 | 0x60000;
          goto LABEL_37;
      }
LABEL_38:
      ++iteration_count_2;
      ++buffer_cursor;
    }
    while ( iteration_count_2 < (int)g_1512DB764 );
  }
  return result;
}

//----- (000000014004DB20) ----------------------------------------------------
void            sub_14004DB20(signed int a1, float *a2, unsigned int a3, int a4, unsigned int a5, float a6)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 block_record_offset;
  int input_value_3;
  __int64 allocation_size;
  __int64 running_total;
  __int64 remaining_count;
  __int64 running_total_2;
  __int64 remaining_count_2;
  __int64 record_byte_offset;
  __int64 remaining_count_3;
  _DWORD *state_address;
  __int64 remaining_count_4;
  unsigned int *state_address_2;
  unsigned int *state_address_3;

  input_value = a1;
  input_value_2 = a3;
  if ( (unsigned int)a1 <= 3 )
  {
    block_record_offset = 263004LL * a1;
    input_value_3 = a5;
    dword_140404A6C[block_record_offset + 111579637] = 1;
    dword_140404A6C[block_record_offset + 111579638] = *(_DWORD *)a2;
    dword_140404A6C[block_record_offset + 111579639] = *((_DWORD *)a2 + 1);
    dword_140404A6C[block_record_offset + 111579640] = *((_DWORD *)a2 + 2);
    *(_QWORD *)&dword_140404A6C[block_record_offset + 111579641] = 1065353216;
    *(_QWORD *)&dword_140404A6C[block_record_offset + 111579643] = 0;
    *(_QWORD *)&dword_140404A6C[block_record_offset + 111579645] = 1065353216;
    *(_QWORD *)&dword_140404A6C[block_record_offset + 111579647] = 0;
    dword_140404A6C[block_record_offset + 111579649] = 1065353216;
    dword_140404A6C[block_record_offset + 111579650] = a3;
    dword_140404A6C[block_record_offset + 111579651] = a4;
    dword_140404A6C[block_record_offset + 111579652] = a5;
    *(float *)&dword_140404A6C[block_record_offset + 111579653] = a6;
    *(float *)&dword_140404A6C[block_record_offset + 111579654] = 1.0 / a6;
    free(*(void **)&dword_140404A6C[block_record_offset + 111579655]);
    allocation_size = (int)(4 * a5 * a4 * input_value_2);
    *(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] = sr_path_malloc(allocation_size);
    free(*(void **)&dword_140404A6C[2 * input_value + 421506981]);
    *(_QWORD *)&dword_140404A6C[2 * input_value + 421506981] = sr_path_malloc(allocation_size);
    if ( a4 > 0 )
    {
      running_total = 0;
      remaining_count = (unsigned int)a4;
      do
      {
        if ( input_value_3 > 0 )
        {
          running_total_2 = running_total;
          remaining_count_2 = (unsigned int)input_value_3;
          do
          {
            if ( (int)input_value_2 > 0 )
            {
              record_byte_offset = running_total_2;
              remaining_count_3 = input_value_2;
              do
              {
                record_byte_offset += 4;
                *(_DWORD *)(record_byte_offset + *(_QWORD *)&dword_140404A6C[block_record_offset + 111579655] - 4) = -1;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
            }
            running_total_2 += 4LL * (int)input_value_2;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          input_value_3 = a5;
        }
        running_total += 4LL * (int)(a5 * input_value_2);
        --remaining_count;
      }
      while ( remaining_count );
    }
    state_address = &dword_140404A6C[block_record_offset + 111579984];
    remaining_count_4 = 512;
    do
    {
      *state_address = 0;
      state_address += 513;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    g_151E46220 = 0;
    state_address_2 = &g_151E46224;
    do
    {
      *state_address_2 = -1;
      state_address_2 += 8969;
    }
    while ( (__int64)state_address_2 < (__int64)&g_15414F224 );
    state_address_3 = &g_154161240;
    do
    {
      if ( state_address_3[1] == (_DWORD)input_value )
        *state_address_3 = 0;
      if ( state_address_3[6931] == (_DWORD)input_value )
        state_address_3[6930] = 0;
      state_address_3 += 13860;
    }
    while ( (__int64)state_address_3 < (__int64)&g_15ADA9240 );
    dword_140404A6C[block_record_offset + 111579657] = *(_DWORD *)a2;
    dword_140404A6C[block_record_offset + 111579658] = *((_DWORD *)a2 + 1);
    dword_140404A6C[block_record_offset + 111579659] = *((_DWORD *)a2 + 2);
    *(float *)&dword_140404A6C[block_record_offset + 111579660] = (float)((float)((float)(int)input_value_2 * 64.0) * a6) + *a2;
    *(float *)&dword_140404A6C[block_record_offset + 111579661] = (float)((float)((float)a4 * 64.0) * a6) + a2[1];
    *(float *)&dword_140404A6C[block_record_offset + 111579662] = (float)((float)((float)input_value_3 * 64.0) * a6) + a2[2];
    dword_140404A6C[block_record_offset + 111579663] = 0;
  }
}

//----- (000000014006ECE0) ----------------------------------------------------
__int64            sub_14006ECE0(__int64 a1, __int64 a2, double a3)
{
  int iteration_count;
  signed int i;
  char masked_bits;
  int element_index;
  __int64 element_index_2;
  char masked_bits_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006ECE0[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14006ECE0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_14006ECE0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_14006ECE0 + 1072)) /* [rsp+430h] */

  iteration_count = g_15F1D91E0;
  for ( i = g_15F1D91E4; iteration_count < (int)g_15F1D91E4; g_15F1D91E0 = ++iteration_count )
  {
    masked_bits = *((_BYTE *)&g_15F1D91E8 + iteration_count);
    if ( masked_bits != 47 && masked_bits > 44 && masked_bits < 58 )
      break;
  }
  element_index = 0;
  if ( iteration_count < (int)g_15F1D91E4 )
  {
    element_index_2 = 0;
    do
    {
      if ( element_index_2 >= 255 )
        break;
      masked_bits_2 = *((_BYTE *)&g_15F1D91E8 + iteration_count);
      if ( (unsigned __int8)(masked_bits_2 - 48) > 9u && (unsigned __int8)(masked_bits_2 - 45) > 1u )
        break;
      ++iteration_count;
      scratch_buffer[element_index_2++] = masked_bits_2;
      g_15F1D91E0 = iteration_count;
      ++element_index;
    }
    while ( iteration_count < i );
  }
  if ( (unsigned __int64)element_index >= 0x400 )
    sub_1401F8694();
  scratch_buffer[element_index] = 0;
  return crt_sscanf((__int64)scratch_buffer, "%f", a3); /* 0x14006ED9D: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_frame_slot_1072

//----- (000000014006EDD0) ----------------------------------------------------
__int64            sub_14006EDD0()
{
  int iteration_count;
  signed int i;
  char masked_bits;
  int element_index;
  __int64 element_index_2;
  char masked_bits_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006EDD0[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14006EDD0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14006EDD0 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_14006EDD0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_14006EDD0 + 1072)) /* [rsp+430h] */

  iteration_count = g_15F1D91E0;
  for ( i = g_15F1D91E4; iteration_count < (int)g_15F1D91E4; g_15F1D91E0 = ++iteration_count )
  {
    masked_bits = *((_BYTE *)&g_15F1D91E8 + iteration_count);
    if ( (unsigned __int8)(masked_bits - 48) <= 9u )
      break;
    if ( masked_bits == 45 )
      break;
  }
  element_index = 0;
  if ( iteration_count < (int)g_15F1D91E4 )
  {
    element_index_2 = 0;
    do
    {
      if ( element_index_2 >= 255 )
        break;
      masked_bits_2 = *((_BYTE *)&g_15F1D91E8 + iteration_count);
      if ( (unsigned __int8)(masked_bits_2 - 48) > 9u && masked_bits_2 != 45 )
        break;
      ++iteration_count;
      scratch_buffer[element_index_2++] = masked_bits_2;
      g_15F1D91E0 = iteration_count;
      ++element_index;
    }
    while ( iteration_count < i );
  }
  if ( (unsigned __int64)element_index >= 0x400 )
    sub_1401F8694();
  scratch_buffer[element_index] = 0;
  crt_sscanf((__int64)(uintptr_t)scratch_buffer, "%d", &callee_output_word);
  return callee_output_word; /* native MOV EAX,[RSP+20] */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef scratch_buffer
#undef unused_frame_slot_1072

//----- (00000001400799F0) ----------------------------------------------------
void            sub_1400799F0(char *a1)
{
  __int64 file_handle;
  FILE *file_handle_2;
  signed int element_size;

  g_15F1D91E4 = 0;
  file_handle = crt_fopen(a1, "rb");
  file_handle_2 = (FILE *)file_handle;
  if ( file_handle )
  {
    sub_14020C4A8(file_handle, 0, 2u);
    g_15F1D91E4 = ftell_sr(file_handle_2);
    sub_14020C4A8((__int64)file_handle_2, 0, 0);
    element_size = g_15F1D91E4;
    if ( (int)g_15F1D91E4 > 1048574 )
      element_size = 1048574;
    g_15F1D91E4 = element_size;
    fread_sr((void *)(uintptr_t)(&g_15F1D91E8), element_size, 1, (FILE *)(uintptr_t)(file_handle_2));
    *((_BYTE *)&g_15F1D91E8 + (int)g_15F1D91E4) = 0;
    crt_fclose((__int64)file_handle_2);
  }
  g_15F1D91E0 = 0;
}

//----- (000000014009E210) ----------------------------------------------------
void               sub_14009E210(int a1)
{
  __int64 input_value;
  int iteration_count;
  __int64 lookup_index;
  int state_address;
  signed int integer_difference;
  __int64 element_index;
  __int64 saved_state_address;
  int integer_sum;
  signed int state_word;
  unsigned int selected_word;
  __int64 element_index_2;
  signed int integer_difference_2;
  signed int table_value;
  unsigned int selected_word_2;
  BOOL comparison_result;
  unsigned int *state_address_2;
  int iteration_count_2;
  int iteration_count_3;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 packed_word_bits;
  unsigned int state_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009E210[3904];
#define scratch_buffer (*(_DWORD (*)[12])(void *)(sr_frame_14009E210 + 0)) /* [rsp+0h] */
#define scratch_buffer_2 (*(_WORD (*)[1920])(void *)(sr_frame_14009E210 + 48)) /* [rsp+30h] */
#define unused_frame_slot_3888 (*(__int64 (*))(void *)(sr_frame_14009E210 + 3888)) /* [rsp+F30h] */

  input_value = a1;
  iteration_count = 0;
  if ( (int)sr_audio_capture_available() >= 960 )
  {
    lookup_index = input_value;
    state_address = g_1404C4AA8;
    while ( 1 )
    {
      if ( iteration_count >= 16 )
        return; /* original state-only voice queue exit */
      if ( g_1404C4A98 )
      {
        integer_difference = g_1404C4AA4 - state_address + 0x40000;
        if ( (signed int)(g_1404C4AA4 - state_address) >= -131072 )
          integer_difference = g_1404C4AA4 - state_address;
        element_index = 0;
        if ( integer_difference > 960 )
          integer_difference = 960;
        if ( integer_difference > 0 )
        {
          do
          {
            saved_state_address = state_address;
            state_address = (state_address + 1) & 0x3FFFF;
            scratch_buffer_2[element_index++] = *((_WORD *)&g_1404C4AAC + saved_state_address);
            g_1404C4AA8 = state_address;
          }
          while ( element_index < integer_difference );
        }
      }
      else
      {
        integer_difference = 960;
      }
      integer_sum = integer_difference + g_15104AFA4;
      g_15104AFA4 = integer_sum;
      if ( integer_sum >= 61440 )
        g_15104AFA4 = integer_sum - 61440;
      if ( integer_difference == 960 )
        break;
LABEL_46:
      ++iteration_count;
      if ( (int)sr_audio_capture_available() < 960 )
        return; /* original state-only voice queue exit */
    }
    state_word = g_151E461BC;
    selected_word = 1;
    element_index_2 = 0;
    integer_difference_2 = -g_151E461BC;
    do
    {
      table_value = (__int16)scratch_buffer_2[element_index_2];
      selected_word_2 = 0;
      if ( table_value >= integer_difference_2 )
        selected_word_2 = selected_word;
      selected_word = selected_word_2;
      if ( table_value > state_word )
        selected_word = 0;
      *(_WORD *)((char *)&g_189BFFC60 + element_index_2 * 2) = *(_WORD *)((char *)&g_189C003E0
                                                                           + element_index_2 * 2);
      *(_WORD *)((char *)&g_189C003E0 + element_index_2 * 2) = table_value;
      ++element_index_2;
    }
    while ( element_index_2 < 960 );
    if ( g_151E461C4 )
    {
      comparison_result = 0;
      if ( (int)g_151E461C8 > 0 && !g_18329B180 )
        comparison_result = *((_BYTE *)&g_183F7C960 + (int)g_151E461C8) != 0;
      if ( (int)g_151E461CC > 0 && (g_151E461CC & g_183F7C758) != 0 )
      {
        dword_140404A6C[32901 * lookup_index + 299853694] = 0;
      }
      else
      {
        state_address_2 = &dword_140404A6C[32901 * lookup_index + 299853694];
        if ( !comparison_result )
        {
          iteration_count_2 = *state_address_2;
          selected_word = 0;
          if ( iteration_count_2 < 64 )
            dword_140404A6C[32901 * lookup_index + 299853694] = ++iteration_count_2;
          if ( iteration_count_2 >= 24 )
            selected_word = 1;
          goto LABEL_41;
        }
        *state_address_2 = 0;
      }
    }
    else if ( selected_word )
    {
      iteration_count_3 = dword_140404A6C[32901 * lookup_index + 299853694];
      if ( iteration_count_3 < 64 )
        dword_140404A6C[32901 * lookup_index + 299853694] = ++iteration_count_3;
      if ( iteration_count_3 >= 16 )
        goto LABEL_41;
    }
    else
    {
      dword_140404A6C[32901 * lookup_index + 299853694] = 0;
    }
    selected_word = 0;
LABEL_41:
    scaled_index = 32901 * lookup_index;
    scratch_buffer[8] = 2048;
    scaled_index_2 = (int)dword_140404A6C[32901 * lookup_index + 299853696];
    dword_140404A6C[32901 * lookup_index + 299853762 + scaled_index_2] = sub_1401E0CC0(
                                                      *(int **)&g_187BDE460,
                                                      (__int64)scratch_buffer_2,
                                                      960,
                                                      (__m128i *)&dword_140404A6C[32901 * lookup_index + 299853826 + 512 * scaled_index_2],
                                                      2048);
    if ( selected_word )
      dword_140404A6C[scaled_index + 299853762 + (int)dword_140404A6C[32901 * lookup_index + 299853696]] = 0;
    packed_word_bits = (int)dword_140404A6C[32901 * lookup_index + 299853696];
    if ( (dword_140404A6C[scaled_index + 299853762 + packed_word_bits] & 0x80000000) != 0 )
    {
      dword_140404A6C[scaled_index + 299853762 + packed_word_bits] = 0;
      LODWORD(packed_word_bits) = dword_140404A6C[32901 * lookup_index + 299853696];
    }
    state_word_2 = g_183E93544;
    state_address = g_1404C4AA8;
    dword_140404A6C[scaled_index + 299853698 + (int)packed_word_bits] = g_183E93544;
    dword_140404A6C[32901 * lookup_index + 299853695] = state_word_2;
    LOBYTE(state_word_2) = dword_140404A6C[32901 * lookup_index + 299853696] + 1;
    dword_140404A6C[32901 * lookup_index + 299853693] = selected_word;
    dword_140404A6C[32901 * lookup_index + 299853696] = state_word_2 & 0x3F;
    goto LABEL_46;
  }
  return; /* original state-only voice queue exit */
}

#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_3888

//----- (00000001400A63E0) ----------------------------------------------------
__int64 sub_1400A63E0()
{
       char *source_text;
  char *destination_text;
  bool comparison_result;
  _QWORD *state_address;
  char *destination_text_2;
       char *graphics_query_result;
       char *graphics_query_result_2;
       char *graphics_query_result_3;
  char *destination_text_3;
  _WORD *state_address_2;
  int call_result;
  char *destination_text_4;
  char *destination_text_5;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A63E0[4112];
#define source_text_2 (*(char (*)[4096])(void *)(sr_frame_1400A63E0 + 0)) /* [rsp+10h] */
#define unused_frame_slot_4096 (*(__int64 (*))(void *)(sr_frame_1400A63E0 + 4096)) /* [rsp+1010h] */

  LOBYTE(g_154151240) = 0;
  source_text = (     char *)sub_140198E51();
  destination_text = (char *)&g_15415123C + 3;
  do
    comparison_result = *++destination_text == 0;
  while ( !comparison_result );
  strcpy(destination_text, source_text);
  state_address = (_QWORD *)((char *)&g_15415123C + 3);
  do
  {
    comparison_result = *((_BYTE *)state_address + 1) == 0;
    state_address = (_QWORD *)((char *)state_address + 1);
  }
  while ( !comparison_result );
  destination_text_2 = (char *)&g_15415123C + 3;
  *state_address = 0x7469622D343620LL;
  do
    comparison_result = *++destination_text_2 == 0;
  while ( !comparison_result );
  strcpy(destination_text_2, "\n\n");
  graphics_query_result = (     char *)glGetString(7936);
  graphics_query_result_2 = (     char *)glGetString(7937);
  graphics_query_result_3 = (     char *)glGetString(7938);
  crt_sprintf(source_text_2, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", graphics_query_result, graphics_query_result_2, graphics_query_result_3);
  destination_text_3 = (char *)&g_15415123C + 3;
  do
    comparison_result = *++destination_text_3 == 0;
  while ( !comparison_result );
  strcpy(destination_text_3, source_text_2);
  state_address_2 = (_WORD *)((char *)&g_15415123C + 3);
  do
  {
    comparison_result = *((_BYTE *)state_address_2 + 1) == 0;
    state_address_2 = (_WORD *)((char *)state_address_2 + 1);
  }
  while ( !comparison_result );
  *state_address_2 = 10;
  call_result = sub_140198EB1();
  crt_sprintf(source_text_2, "RAM: %d MB\n", call_result);
  destination_text_4 = (char *)&g_15415123C + 3;
  do
    comparison_result = *++destination_text_4 == 0;
  while ( !comparison_result );
  strcpy(destination_text_4, source_text_2);
  if ( (unsigned int)sub_140198EAB() )
  {
    destination_text_5 = (char *)&g_15415123C + 3;
    do
      comparison_result = *++destination_text_5 == 0;
    while ( !comparison_result );
    strcpy(destination_text_5, "SSE2\n");
  }
  return sub_140198EA5(); /* 0x1400A6580: the result of this call is still in rax at the exit */
}
#undef source_text_2
#undef unused_frame_slot_4096

//----- (00000001400D6B60) ----------------------------------------------------
int                sub_1400D6B60(float *a1, float *a2, float *a3, __int64 a4, float *a5, float *a6)
{
  __int64 record_word_offset;
  float scaled_value;
  float *saved_weighted_sum;
  float weighted_sum;
  float source_component_y;
  float weighted_sum_2;
  float source_component_z;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float float_word;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float product_difference;
  float weighted_sum_10;
  float component_delta;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float component_delta_2;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  int masked_bits;
  float product_difference_2;
  float weighted_sum_18;
  float state_address;
  float component_delta_3;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  int loaded_word;
  int integer_difference;
  float combined_products;
  int running_total;
  int integer_difference_2;
  float absolute_value;
  float saved_absolute_value;
  int loaded_word_2;
  float product_difference_3;
  bool comparison_result;
  float absolute_value_2;
  int loaded_word_3;
  int integer_difference_3;
  float scaled_value_2;
  float saved_absolute_value_2;
  float saved_absolute_value_3;
  int loaded_word_4;
  float product_difference_4;
  float absolute_value_3;
  float saved_absolute_value_4;
  float saved_absolute_value_5;
  int running_total_2;
  __int64 running_total_3;
  __m128d converted_vector;
  double lane_mask;
  float component_delta_4;
  float component_sum;
  float saved_absolute_value_6;
  __int64 integer_sum;
  __m128d converted_vector_2;
  double lane_mask_2;
  float component_delta_5;
  float component_sum_2;
  float saved_absolute_value_7;
  float saved_absolute_value_8;
  __m128d converted_vector_3;
  double lane_mask_3;
  float component_delta_6;
  float component_sum_3;
  float saved_absolute_value_9;
  float saved_absolute_value_10;
  signed int abs32_result;
  int iteration_count;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 masked_bits_2;
  unsigned int table_value;
  unsigned int table_value_2;
  __int64 masked_bits_3;
  int hibyte_result;
  float weighted_sum_23;
  __int64 scaled_index;
  float weighted_sum_24;
  float scaled_value_3;
  float weighted_sum_25;
  float *saved_weighted_sum_2;
  __int64 loaded_word_5;
  unsigned int *state_address_2;
  int rol4_result;
  signed int iteration_count_2;
  __int64 scaled_index_2;
  double scaled_value_4;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  __int128 loaded_word_6;
  __int64 scaled_index_3;
  unsigned int *state_address_3;
  BOOL loaded_word_7;
  float weighted_sum_26;
  int scaled_index_4;
  unsigned int loaded_word_8;
  int scaled_index_5;
  int scaled_index_6;
  int scaled_index_7;
  int table_value_3;
  __int16 cached_table_value;
  __int16 cached_table_value_2;
  __int64 masked_bits_4;
  int masked_bits_5;
  unsigned int float_word_2;
  __int64 selection_code;
  float weighted_sum_27;
  __int64 selection_code_2;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  unsigned int layer;
  float weighted_sum_31;
  unsigned int loaded_word_9;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float weighted_sum_35;
  float state_address_4;
  float state_address_5;
  float weighted_sum_36;
  float weighted_sum_37;
  float weighted_sum_38;
  float weighted_sum_39;
  float weighted_sum_40;
  float weighted_sum_41;
  float weighted_sum_42;
  int float_word_3;
  unsigned int masked_bits_6;
  float weighted_sum_43;
  float weighted_sum_44;
  float weighted_sum_45;
  unsigned int loaded_word_10;
  unsigned int layer_2;
  float weighted_sum_46;
  float weighted_sum_47;
  float weighted_sum_48;
  float weighted_sum_49;
  float weighted_sum_50;
  float state_address_6;
  float state_address_7;
  float weighted_sum_51;
  float weighted_sum_52;
  float weighted_sum_53;
  float weighted_sum_54;
  float weighted_sum_55;
  float weighted_sum_56;
  float weighted_sum_57;
  float weighted_sum_58;
  float weighted_sum_59;
  float weighted_sum_60;
  unsigned int loaded_word_11;
  float weighted_sum_61;
  float weighted_sum_62;
  float weighted_sum_63;
  float weighted_sum_64;
  float weighted_sum_65;
  float state_address_8;
  float state_address_9;
  float weighted_sum_66;
  float weighted_sum_67;
  float weighted_sum_68;
  float weighted_sum_69;
  float weighted_sum_70;
  float weighted_sum_71;
  float weighted_sum_72;
  int float_word_4;
  unsigned int masked_bits_7;
  int masked_bits_8;
  float weighted_sum_73;
  float weighted_sum_74;
  float weighted_sum_75;
  float weighted_sum_76;
  float weighted_sum_77;
  float weighted_sum_78;
  float weighted_sum_79;
  float weighted_sum_80;
  float state_address_10;
  float state_address_11;
  float weighted_sum_81;
  float weighted_sum_82;
  float weighted_sum_83;
  float weighted_sum_84;
  float weighted_sum_85;
  float weighted_sum_86;
  float weighted_sum_87;
  unsigned int loaded_word_12;
  float weighted_sum_88;
  float weighted_sum_89;
  float weighted_sum_90;
  float weighted_sum_91;
  float weighted_sum_92;
  float weighted_sum_93;
  float weighted_sum_94;
  float state_address_12;
  float state_address_13;
  float weighted_sum_95;
  float weighted_sum_96;
  float weighted_sum_97;
  float weighted_sum_98;
  float weighted_sum_99;
  float weighted_sum_100;
  float weighted_sum_101;
  unsigned int loaded_word_13;
  float weighted_sum_102;
  float weighted_sum_103;
  float weighted_sum_104;
  float weighted_sum_105;
  _BOOL8 comparison_result_2;
  float weighted_sum_106;
  float combined_products_7;
  __int64 unused_local;
  /* Preserve native ray-walk matrices and indexed vectors in one frame. */
  _Alignas(16) unsigned char sr_grid_ray_frame[0x3420];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D6B60[16];
#define input_cursor (*(float * (*))(void *)(sr_frame_1400D6B60 + 0)) /* [rsp+1B08h] */

  record_word_offset = 1052016LL * (int)a4;
  scaled_value = *a5;
  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24)) = a4;
  a4 = (int)a4;
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10)) = (int)a4;
  saved_weighted_sum = a3;
  input_cursor = a3;
  weighted_sum = *(float *)((char *)&g_15ADA9290 + record_word_offset);
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28)) = record_word_offset;
  if ( scaled_value >= weighted_sum || weighted_sum <= *a6 )
  {
    source_component_y = a5[1];
    weighted_sum_2 = *(float *)((char *)&g_15ADA9294 + record_word_offset);
    if ( source_component_y >= weighted_sum_2 || weighted_sum_2 <= a6[1] )
    {
      source_component_z = a5[2];
      weighted_sum_3 = *(float *)((char *)&g_15ADA9298 + record_word_offset);
      if ( source_component_z >= weighted_sum_3 || weighted_sum_3 <= a6[2] )
      {
        weighted_sum_4 = *(float *)((char *)&g_15ADA929C + record_word_offset);
        if ( scaled_value <= weighted_sum_4 || weighted_sum_4 >= *a6 )
        {
          weighted_sum_5 = *(float *)((char *)&g_15ADA92A0 + record_word_offset);
          if ( source_component_y <= weighted_sum_5 || weighted_sum_5 >= a6[1] )
          {
            float_word = *(float *)((char *)&g_15ADA92A4 + record_word_offset);
            if ( source_component_z <= float_word || float_word >= a6[2] )
            {
              *a3 = 1.0;
              weighted_sum_6 = *(float *)((char *)&g_15ADA9250 + record_word_offset);
              weighted_sum_7 = *(float *)((char *)&g_15ADA925C + record_word_offset);
              weighted_sum_8 = *(float *)((char *)&g_15ADA9244 + record_word_offset);
              weighted_sum_9 = *(float *)((char *)&g_15ADA9248 + record_word_offset);
              product_difference = *a5 - weighted_sum_8;
              weighted_sum_10 = *(float *)((char *)&g_15ADA9270 + record_word_offset);
              component_delta = a5[1] - weighted_sum_9;
              weighted_sum_11 = *(float *)((char *)&g_15ADA9260 + record_word_offset);
              weighted_sum_12 = *(float *)((char *)&g_15ADA924C + record_word_offset);
              weighted_sum_13 = *(float *)((char *)&g_15ADA9258 + record_word_offset);
              component_delta_2 = a5[2] - weighted_sum_12;
              weighted_sum_14 = *(float *)((char *)&g_15ADA9268 + record_word_offset);
              weighted_sum_15 = *(float *)((char *)&g_15ADA9264 + record_word_offset);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = *(float *)((char *)&g_15ADA9254 + record_word_offset);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = weighted_sum_11;
              weighted_sum_16 = (float)(weighted_sum_11 * component_delta) + (float)(weighted_sum_7 * product_difference);
              LODWORD((*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8))) = *(unsigned int *)((char *)&g_15ADA926C + record_word_offset);
              weighted_sum_17 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * component_delta) + (float)(weighted_sum_6 * product_difference)) + (float)(weighted_sum_13 * component_delta_2);
              *(float *)&masked_bits = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * component_delta;
              product_difference_2 = *a6 - weighted_sum_8;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = masked_bits;
              weighted_sum_18 = weighted_sum_16 + (float)(weighted_sum_15 * component_delta_2);
              state_address = (float)(*(float *)&masked_bits + (float)(weighted_sum_14 * product_difference)) + (float)(weighted_sum_10 * component_delta_2);
              component_delta_3 = a6[2] - weighted_sum_12;
              (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = a6[1] - weighted_sum_9;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b80)) = weighted_sum_17;
              weighted_sum_19 = (float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(weighted_sum_6 * product_difference_2);
              (*(float *)(void *)(sr_grid_ray_frame+0x1b84)) = weighted_sum_18;
              *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88)) = state_address;
              (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = product_difference_2;
              weighted_sum_20 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x5c)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(weighted_sum_7 * product_difference_2)) + (float)(weighted_sum_15 * component_delta_3);
              (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = component_delta_3;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] = weighted_sum_19 + (float)(weighted_sum_13 * component_delta_3);
              weighted_sum_21 = (float)((float)(*(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(weighted_sum_14 * product_difference_2)) + (float)(weighted_sum_10 * component_delta_3);
              weighted_sum_22 = *(float *)((char *)(unsigned int *)&g_15ADA9284 + record_word_offset);
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[1] = weighted_sum_20;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[2] = weighted_sum_21;
              loaded_word = (int)(float)(weighted_sum_17 * weighted_sum_22);
              integer_difference = -1;
              (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) = loaded_word;
              combined_products = (float)(((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] - weighted_sum_17) * weighted_sum_22;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = (int)(float)(weighted_sum_22 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]);
              running_total = (int)(float)(weighted_sum_18 * weighted_sum_22);
              if ( combined_products > 0.0 )
                integer_difference = 1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) = integer_difference;
              integer_difference_2 = 1;
              absolute_value = fabs(combined_products);
              (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = (int)(float)(weighted_sum_18 * weighted_sum_22);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = absolute_value;
              saved_absolute_value = absolute_value;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = absolute_value;
              loaded_word_2 = (int)(float)(weighted_sum_20 * weighted_sum_22);
              product_difference_3 = (float)(weighted_sum_20 - weighted_sum_18) * weighted_sum_22;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b18)) = loaded_word_2;
              comparison_result = product_difference_3 <= 0.0;
              absolute_value_2 = fabs(product_difference_3);
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) = absolute_value;
              loaded_word_3 = (int)(float)(state_address * weighted_sum_22);
              if ( comparison_result )
                integer_difference_2 = -1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b1c)) = integer_difference_2;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bcc)) = integer_difference_2;
              integer_difference_3 = 1;
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + 1) = absolute_value;
              scaled_value_2 = weighted_sum_21 * weighted_sum_22;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (int)(float)(state_address * weighted_sum_22);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = absolute_value_2;
              saved_absolute_value_2 = absolute_value_2;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = absolute_value_2;
              saved_absolute_value_3 = absolute_value_2;
              loaded_word_4 = (int)(float)(weighted_sum_21 * weighted_sum_22);
              product_difference_4 = (float)(weighted_sum_21 - state_address) * weighted_sum_22;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b24)) = (int)scaled_value_2;
              *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) = absolute_value_2;
              comparison_result = product_difference_4 <= 0.0;
              absolute_value_3 = fabs(product_difference_4);
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = absolute_value_3;
              saved_absolute_value_4 = absolute_value_3;
              if ( comparison_result )
                integer_difference_3 = -1;
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = absolute_value_3;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) = integer_difference_3;
              saved_absolute_value_5 = absolute_value_3;
              ((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[0] = integer_difference_3;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) = absolute_value_3;
              if ( loaded_word == (int)(float)(weighted_sum_22 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]) && running_total == loaded_word_2 && loaded_word_3 == loaded_word_4 )
              {
                (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0;
LABEL_57:
                iteration_count = 0;
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = 0;
                while ( loaded_word < 0
                     || loaded_word >= (int)(*(unsigned int *)((char *)&g_15ADA9274 + record_word_offset) << 6)
                     || running_total < 0
                     || running_total >= (int)(*(unsigned int *)((char *)&g_15ADA9278 + record_word_offset) << 6)
                     || loaded_word_3 < 0 )
                {
LABEL_129:
                  if ( loaded_word == (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) && running_total == loaded_word_2 && loaded_word_3 == loaded_word_4 )
                    return 0; /* native hit result */
                  weighted_sum_102 = (*(float *)(void *)(sr_grid_ray_frame+0x58));
                  weighted_sum_103 = (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  weighted_sum_104 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8));
                  weighted_sum_105 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1);
                  comparison_result_2 = (*(float *)(void *)(sr_grid_ray_frame+0x58)) >= (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  if ( *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) <= *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) || comparison_result_2 )
                  {
                    if ( saved_absolute_value_2 <= saved_absolute_value_4 )
                    {
                      running_total += (*(int *)(void *)(sr_grid_ray_frame+0x1b1c));
                      (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = running_total;
                      saved_absolute_value_2 = saved_absolute_value_2 + saved_absolute_value_5;
                      saved_absolute_value_4 = saved_absolute_value_4 - saved_absolute_value_5;
                      (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x58)) - saved_absolute_value;
                      (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x5c)) + saved_absolute_value;
                      goto LABEL_139;
                    }
                    weighted_sum_106 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + saved_absolute_value;
                    (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) + loaded_word_3;
                    combined_products_7 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) - saved_absolute_value;
                    saved_absolute_value_2 = saved_absolute_value_2 - saved_absolute_value_3;
                    saved_absolute_value_4 = saved_absolute_value_4 + saved_absolute_value_3;
                  }
                  else
                  {
                    *(&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + comparison_result_2) += *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + comparison_result_2);
                    running_total = (*(int *)(void *)(sr_grid_ray_frame+0x1b5c));
                    loaded_word = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                    weighted_sum_106 = weighted_sum_104 - saved_absolute_value_5;
                    combined_products_7 = weighted_sum_105 + saved_absolute_value_5;
                    (*(float *)(void *)(sr_grid_ray_frame+0x58)) = weighted_sum_102 + saved_absolute_value_3;
                    (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = weighted_sum_103 - saved_absolute_value_3;
                  }
                  (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = __PAIR64__(LODWORD(combined_products_7), LODWORD(weighted_sum_106));
LABEL_139:
                  (*(int *)(void *)(sr_grid_ray_frame+0x30)) = ++iteration_count;
                  if ( iteration_count > (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) )
                    return 0; /* native hit result */
                  loaded_word_3 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                  a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                }
                if ( loaded_word_3 >= (int)(*(unsigned int *)((char *)&g_15ADA927C + record_word_offset) << 6)
                  || (shifted_bits = *(int *)(*(_QWORD *)((char *)(unsigned int *)&g_15ADA9288 + record_word_offset)
                                   + 4LL
                                   * (int)((loaded_word >> 6)
                                         + *(unsigned int *)((char *)&g_15ADA9274 + record_word_offset)
                                         * ((loaded_word_3 >> 6)
                                          + *(unsigned int *)((char *)&g_15ADA927C + record_word_offset) * (running_total >> 6)))),
                      (_DWORD)shifted_bits == -1)
                  || (shifted_bits_2 = (int)dword_140404A6C[263004 * a4
                                               + 111579985
                                               + 513 * shifted_bits
                                               + 64 * ((running_total >> 3) & 7)
                                               + 8 * ((loaded_word_3 >> 3) & 7)
                                               + ((loaded_word >> 3) & 7)],
                      (_DWORD)shifted_bits_2 == -1) )
                {
LABEL_128:
                  iteration_count = (*(int *)(void *)(sr_grid_ray_frame+0x30));
                  goto LABEL_129;
                }
                (*(float *)(void *)(sr_grid_ray_frame+0x28)) = 1.0;
                masked_bits_2 = 6930 * shifted_bits_2 + (loaded_word & 7) + 8 * ((loaded_word_3 & 7) + 8 * (running_total & 7u));
                (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) = masked_bits_2;
                table_value = dword_140404A6C[masked_bits_2 + 83199479];
                if ( table_value )
                {
                  table_value_2 = dword_140404A6C[masked_bits_2 + 83199479];
                  masked_bits_3 = table_value & 0x3FF;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = masked_bits_3;
                  hibyte_result = HIBYTE(table_value_2) & 3;
                  (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = 0;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = hibyte_result;
                  weighted_sum_23 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
                  scaled_index = 948 * masked_bits_3;
                  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)) = scaled_index * 4;
                  weighted_sum_24 = (float)((float)loaded_word + 0.5) * weighted_sum_23;
                  scaled_value_3 = (float)running_total * weighted_sum_23;
                  weighted_sum_25 = (float)((float)loaded_word_3 + 0.5) * weighted_sum_23;
                  if ( (int)dword_140404A6C[scaled_index + 272299416] > 0 )
                  {
                    saved_weighted_sum_2 = input_cursor;
                    loaded_word_5 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    state_address_2 = &dword_140404A6C[scaled_index + 272299442];
                    rol4_result = 1;
                    iteration_count_2 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    while ( 1 )
                    {
                      if ( (rol4_result & dword_140404A6C[masked_bits_2 + 83199991]) == 0 )
                      {
                        scaled_index_2 = (int)*(state_address_2 - 9);
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                        scaled_value_4 = (float)hibyte_result * 1.570796326795;
                        sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_4))) /* the original converts to float (cvtsd2ss) before this call */);
                        combined_products_2 = (float)((float)((float)(*((float *)state_address_2 - 8) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0))) + weighted_sum_24)
                                     + (float)(*((float *)state_address_2 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 3)))
                             + (float)(*((float *)state_address_2 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 2));
                        combined_products_3 = *((float *)state_address_2 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 3);
                        combined_products_4 = (float)((float)(*((float *)state_address_2 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 1)) + scaled_value_3)
                             + (float)(*((float *)state_address_2 - 7) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)));
                        combined_products_5 = *((float *)state_address_2 - 6) * (*(float *)(void *)(sr_grid_ray_frame+0x1bc0));
                        combined_products_6 = (float)((float)(*((float *)state_address_2 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 2)) + weighted_sum_25)
                             + (float)(*((float *)state_address_2 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 1));
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = *(_OWORD *)(state_address_2 - 5);
                        loaded_word_6 = *(_OWORD *)(state_address_2 - 1);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = combined_products_2;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = loaded_word_6;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = *((float *)state_address_2 + 3);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = combined_products_4 + combined_products_3;
                        *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = combined_products_6 + combined_products_5;
                        sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_4))) /* the original converts to float (cvtsd2ss) before this call */);
                        scaled_index_3 = 1268 * scaled_index_2;
                        if ( !*(_QWORD *)&dword_140404A6C[1268 * scaled_index_2 + 278522249] )
                        {
                          loaded_word_3 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                          hibyte_result = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                          masked_bits_2 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                          loaded_word_5 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
LABEL_75:
                          iteration_count_2 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                          goto LABEL_76;
                        }
                        state_address_3 = &dword_140404A6C[scaled_index_3 + 278522247];
                        sr_collision_place_mesh((__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), (__int64)&dword_140404A6C[scaled_index_3 + 278522247], &(*(float *)(void *)(sr_grid_ray_frame+0x1b68)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)));
                        loaded_word_7 = sub_1400DA960((__int64)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30)), (__int64)state_address_3, (__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)));
                        loaded_word_3 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                        hibyte_result = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        masked_bits_2 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                        loaded_word_5 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        if ( !loaded_word_7 )
                          goto LABEL_75;
                        weighted_sum_26 = (*(float *)(void *)(sr_grid_ray_frame+0x1b48));
                        if ( (*(float *)(void *)(sr_grid_ray_frame+0x1b48)) >= *saved_weighted_sum_2 )
                          goto LABEL_75;
                        scaled_index_4 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[1];
                        loaded_word_8 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        *a1 = *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30));
                        scaled_index_5 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[2];
                        *((_DWORD *)a1 + 1) = scaled_index_4;
                        scaled_index_6 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[3];
                        *((_DWORD *)a1 + 2) = scaled_index_5;
                        scaled_index_7 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[4];
                        *(_DWORD *)a2 = scaled_index_6;
                        a2[2] = *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[5];
                        *((_DWORD *)a2 + 1) = scaled_index_7;
                        item_hit_layer = loaded_word_8;
                        g_151A848D8 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                        item_hit_block = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        iteration_count_2 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        item_hit_block_part = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        g_151A848F0 = 0;
                        g_151A848DC = running_total;
                        g_151A848E0 = loaded_word_3;
                        item_hit_unknown_7c = -1;
                        item_hit_block_turn = hibyte_result;
                        *saved_weighted_sum_2 = weighted_sum_26;
                      }
LABEL_76:
                      ++iteration_count_2;
                      rol4_result = __ROL4__(rol4_result, 1);
                      state_address_2 += 29;
                      (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = iteration_count_2;
                      if ( iteration_count_2 >= *(int *)((char *)&g_1812C20CC + loaded_word_5) )
                      {
                        record_word_offset = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28));
                        saved_weighted_sum = input_cursor;
                        break;
                      }
                    }
                  }
                }
                table_value_3 = dword_140404A6C[masked_bits_2 + 83198967];
                cached_table_value = table_value_3;
                cached_table_value_2 = table_value_3;
                if ( table_value_3 <= 0 )
                {
                  loaded_word = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  layer = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  goto LABEL_99;
                }
                masked_bits_4 = table_value_3 & 0x7F;
                masked_bits_5 = cached_table_value_2 & 0xC00;
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = masked_bits_4;
                float_word_2 = dword_140404A6C[2310 * masked_bits_4 + 432533577];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = *(float *)&dword_140404A6C[2310 * masked_bits_4 + 432533576];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = *(float *)&dword_140404A6C[2310 * masked_bits_4 + 432533578];
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = *(float *)&float_word_2;
                if ( (cached_table_value & 0xC00) == 0x400 )
                {
                  selection_code = 1070141403;
                }
                else if ( masked_bits_5 == 2048 )
                {
                  selection_code = 1078530011;
                }
                else
                {
                  if ( masked_bits_5 != 3072 )
                    goto LABEL_86;
                  selection_code = 1083624420;
                }
                sr_math_vec3_rotate(&(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&dword_1402F6188, *(double *)&selection_code);
LABEL_86:
                weighted_sum_27 = *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset);
                (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) + (float)((float)((float)(int)(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + 0.5) * weighted_sum_27);
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) + (float)((float)running_total * weighted_sum_27);
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) + (float)((float)((float)loaded_word_3 + 0.5) * weighted_sum_27);
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                switch ( masked_bits_5 )
                {
                  case 1024:
                    selection_code_2 = 1070141403;
                    break;
                  case 2048:
                    selection_code_2 = 1078530011;
                    break;
                  case 3072:
                    selection_code_2 = 1083624420;
                    break;
                  default:
                    goto LABEL_93;
                }
                sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, *(double *)&selection_code_2);
LABEL_93:
                if ( (unsigned int)sub_1400D97A0(&(*(float *)(void *)(sr_grid_ray_frame+0x38)), &(*(float *)(void *)(sr_grid_ray_frame+0x48)), &(*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), &(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)))
                  && (weighted_sum_28 = (*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *saved_weighted_sum) )
                {
                  weighted_sum_29 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  weighted_sum_30 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  layer = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  loaded_word = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  weighted_sum_31 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  loaded_word_9 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                  weighted_sum_32 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  weighted_sum_33 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  weighted_sum_34 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&g_15ADA925C + record_word_offset))
                               + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                       + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                  weighted_sum_35 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  *a1 = weighted_sum_34;
                  state_address_4 = (float)((float)(weighted_sum_32 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                               + (float)(weighted_sum_33 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                       + (float)(weighted_sum_35 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                  a1[1] = state_address_4;
                  state_address_5 = (float)(weighted_sum_31 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                       + (float)(weighted_sum_29 * *(float *)((char *)&g_15ADA9258 + record_word_offset));
                  weighted_sum_36 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  weighted_sum_37 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  weighted_sum_38 = state_address_5 + (float)(weighted_sum_30 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                  a1[2] = weighted_sum_38;
                  *a1 = weighted_sum_34 + *(float *)((char *)&g_15ADA9244 + record_word_offset);
                  weighted_sum_39 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  weighted_sum_40 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  a1[1] = state_address_4 + *(float *)((char *)&g_15ADA9248 + record_word_offset);
                  weighted_sum_41 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  weighted_sum_42 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  a1[2] = weighted_sum_38 + *(float *)((char *)&g_15ADA924C + record_word_offset);
                  *a2 = (float)((float)(weighted_sum_40 * *(float *)((char *)&g_15ADA925C + record_word_offset))
                              + (float)(weighted_sum_42 * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                      + (float)(weighted_sum_37 * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                  a2[1] = (float)((float)(weighted_sum_39 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                + (float)(weighted_sum_41 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                        + (float)(weighted_sum_36 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                  a2[2] = (float)((float)(weighted_sum_39 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                                + (float)(weighted_sum_41 * *(float *)((char *)&g_15ADA9258 + record_word_offset)))
                        + (float)(weighted_sum_36 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                  g_151A848F0 = 0;
                  item_hit_layer = layer;
                  g_151A848D8 = loaded_word;
                  g_151A848DC = running_total;
                  g_151A848E0 = loaded_word_3;
                  item_hit_unknown_7c = loaded_word_9;
                  item_hit_block_part = -1;
                  *saved_weighted_sum = weighted_sum_28;
                }
                else
                {
                  layer = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  loaded_word = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                }
                masked_bits_2 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
LABEL_99:
                float_word_3 = dword_140404A6C[masked_bits_2 + 83194359];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = float_word_3;
                if ( float_word_3 )
                {
                  masked_bits_6 = float_word_3 & 0xE0000000;
                  if ( (float_word_3 & 0xE0000000) == 0x40000000 )
                  {
                    if ( (unsigned int)sub_1400DC650(
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                                         (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                                         ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                                         (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                                         float_word_3,
                                         *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset)) )
                    {
                      weighted_sum_43 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *saved_weighted_sum )
                      {
LABEL_103:
                        weighted_sum_44 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        weighted_sum_45 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        loaded_word_10 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        layer_2 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        weighted_sum_46 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        weighted_sum_47 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        weighted_sum_48 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        weighted_sum_49 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                        weighted_sum_50 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = weighted_sum_49;
                        state_address_6 = (float)((float)(weighted_sum_47 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                     + (float)(weighted_sum_48 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                             + (float)(weighted_sum_50 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                        a1[1] = state_address_6;
                        state_address_7 = (float)(weighted_sum_46 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                             + (float)(weighted_sum_44 * *(float *)((char *)&g_15ADA9258 + record_word_offset));
                        weighted_sum_51 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        weighted_sum_52 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        weighted_sum_53 = state_address_7 + (float)(weighted_sum_45 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                        a1[2] = weighted_sum_53;
                        *a1 = weighted_sum_49 + *(float *)((char *)&g_15ADA9244 + record_word_offset);
                        weighted_sum_54 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        weighted_sum_55 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = state_address_6 + *(float *)((char *)&g_15ADA9248 + record_word_offset);
                        weighted_sum_56 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        weighted_sum_57 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = weighted_sum_53 + *(float *)((char *)&g_15ADA924C + record_word_offset);
                        *a2 = (float)((float)(weighted_sum_55 * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                    + (float)(weighted_sum_57 * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                            + (float)(weighted_sum_52 * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                        a2[1] = (float)((float)(weighted_sum_54 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                      + (float)(weighted_sum_56 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                              + (float)(weighted_sum_51 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                        a2[2] = (float)((float)(weighted_sum_54 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                                      + (float)(weighted_sum_56 * *(float *)((char *)&g_15ADA9258 + record_word_offset)))
                              + (float)(weighted_sum_51 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                        g_151A848F0 = loaded_word_10;
                        item_hit_layer = layer_2;
                        g_151A848D8 = loaded_word;
                        g_151A848DC = running_total;
                        g_151A848E0 = loaded_word_3;
                        item_hit_unknown_7c = -1;
                        item_hit_block_part = -1;
                        *saved_weighted_sum = weighted_sum_43;
                        goto LABEL_113;
                      }
                    }
                  }
                  else if ( masked_bits_6 == 0x80000000 )
                  {
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&float_word_3,
                           *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset)) )
                    {
                      weighted_sum_43 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *saved_weighted_sum )
                        goto LABEL_103;
                    }
                  }
                  else if ( masked_bits_6 == -1073741824 )
                  {
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = loaded_word - (unsigned __int8)float_word_3;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = loaded_word_3 - BYTE1(float_word_3);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = running_total - BYTE2(float_word_3);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = sr_world_block_unknown_8_at(layer, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)), (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)));
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                           *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)),
                           *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset)) )
                    {
                      weighted_sum_58 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *saved_weighted_sum )
                      {
                        weighted_sum_59 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        weighted_sum_60 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        loaded_word_11 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        layer_2 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        weighted_sum_61 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        weighted_sum_62 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        weighted_sum_63 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        weighted_sum_64 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                        weighted_sum_65 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = weighted_sum_64;
                        state_address_8 = (float)((float)(weighted_sum_62 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                     + (float)(weighted_sum_63 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                             + (float)(weighted_sum_65 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                        a1[1] = state_address_8;
                        state_address_9 = (float)(weighted_sum_61 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                             + (float)(weighted_sum_59 * *(float *)((char *)&g_15ADA9258 + record_word_offset));
                        weighted_sum_66 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        weighted_sum_67 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        weighted_sum_68 = state_address_9 + (float)(weighted_sum_60 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                        a1[2] = weighted_sum_68;
                        *a1 = weighted_sum_64 + *(float *)((char *)&g_15ADA9244 + record_word_offset);
                        weighted_sum_69 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        weighted_sum_70 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = state_address_8 + *(float *)((char *)&g_15ADA9248 + record_word_offset);
                        weighted_sum_71 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        weighted_sum_72 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = weighted_sum_68 + *(float *)((char *)&g_15ADA924C + record_word_offset);
                        *a2 = (float)((float)(weighted_sum_70 * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                    + (float)(weighted_sum_72 * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                            + (float)(weighted_sum_67 * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                        a2[1] = (float)((float)(weighted_sum_69 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                      + (float)(weighted_sum_71 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                              + (float)(weighted_sum_66 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                        a2[2] = (float)((float)(weighted_sum_69 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                                      + (float)(weighted_sum_71 * *(float *)((char *)&g_15ADA9258 + record_word_offset)))
                              + (float)(weighted_sum_66 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                        g_151A848F0 = loaded_word_11;
                        g_151A848D8 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        g_151A848DC = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        g_151A848E0 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        item_hit_unknown_7c = -1;
                        item_hit_block_part = -1;
                        item_hit_layer = layer_2;
                        *saved_weighted_sum = weighted_sum_58;
                        goto LABEL_113;
                      }
                    }
                  }
                }
                layer_2 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
LABEL_113:
                float_word_4 = dword_140404A6C[(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) + 83197431];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = float_word_4;
                if ( !float_word_4 )
                {
LABEL_126:
                  if ( *saved_weighted_sum < 1.0 )
                    return 1; /* native hit result */
                  loaded_word_4 = (*(int *)(void *)(sr_grid_ray_frame+0x1b24));
                  loaded_word_2 = (*(int *)(void *)(sr_grid_ray_frame+0x1b18));
                  goto LABEL_128;
                }
                masked_bits_7 = float_word_4 & 0xE0000000;
                if ( (float_word_4 & 0xE0000000) == 0x40000000 )
                {
                  masked_bits_8 = sub_1400DC650(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           float_word_4,
                           *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset));
                }
                else
                {
                  if ( masked_bits_7 != 0x80000000 )
                  {
                    if ( masked_bits_7 != -1073741824 )
                      goto LABEL_126;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = loaded_word - (unsigned __int8)float_word_4;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = loaded_word_3 - BYTE1(float_word_4);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = running_total - BYTE2(float_word_4);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = sr_world_block_unknown_3008_at(layer_2, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)));
                    if ( !sub_1400DE770(
                            &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                            ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                            (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                            *(float *)&(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)),
                            *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset)) )
                      goto LABEL_126;
                    weighted_sum_73 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                    if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *saved_weighted_sum )
                      goto LABEL_126;
                    weighted_sum_88 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    weighted_sum_89 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    weighted_sum_90 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    weighted_sum_91 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    weighted_sum_92 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    weighted_sum_93 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                 + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                         + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                    weighted_sum_94 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    *a1 = weighted_sum_93;
                    state_address_12 = (float)((float)(weighted_sum_91 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                 + (float)(weighted_sum_92 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                         + (float)(weighted_sum_94 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                    a1[1] = state_address_12;
                    state_address_13 = (float)(weighted_sum_90 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                         + (float)(weighted_sum_88 * *(float *)((char *)&g_15ADA9258 + record_word_offset));
                    weighted_sum_95 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    weighted_sum_96 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    weighted_sum_97 = state_address_13 + (float)(weighted_sum_89 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                    a1[2] = weighted_sum_97;
                    *a1 = weighted_sum_93 + *(float *)((char *)&g_15ADA9244 + record_word_offset);
                    weighted_sum_98 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    weighted_sum_99 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    a1[1] = state_address_12 + *(float *)((char *)&g_15ADA9248 + record_word_offset);
                    weighted_sum_100 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    weighted_sum_101 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    a1[2] = weighted_sum_97 + *(float *)((char *)&g_15ADA924C + record_word_offset);
                    *a2 = (float)((float)(weighted_sum_99 * *(float *)((char *)&g_15ADA925C + record_word_offset))
                                + (float)(weighted_sum_101 * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                        + (float)(weighted_sum_96 * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                    a2[1] = (float)((float)(weighted_sum_98 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                                  + (float)(weighted_sum_100 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                          + (float)(weighted_sum_95 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                    loaded_word_13 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    a2[2] = (float)((float)(weighted_sum_98 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                                  + (float)(weighted_sum_100 * *(float *)((char *)&g_15ADA9258 + record_word_offset)))
                          + (float)(weighted_sum_95 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                    g_151A848F0 = loaded_word_13;
                    item_hit_layer = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                    g_151A848D8 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    g_151A848DC = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    g_151A848E0 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
LABEL_125:
                    item_hit_unknown_7c = -1;
                    item_hit_block_part = -1;
                    *saved_weighted_sum = weighted_sum_73;
                    goto LABEL_126;
                  }
                  masked_bits_8 = sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&float_word_4,
                           *(float *)((char *)(unsigned int *)&g_15ADA9280 + record_word_offset));
                }
                if ( !masked_bits_8 )
                  goto LABEL_126;
                weighted_sum_73 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *saved_weighted_sum )
                  goto LABEL_126;
                weighted_sum_74 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                weighted_sum_75 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                weighted_sum_76 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                weighted_sum_77 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                weighted_sum_78 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                weighted_sum_79 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&g_15ADA925C + record_word_offset))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                weighted_sum_80 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                *a1 = weighted_sum_79;
                state_address_10 = (float)((float)(weighted_sum_77 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                             + (float)(weighted_sum_78 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                     + (float)(weighted_sum_80 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                a1[1] = state_address_10;
                state_address_11 = (float)(weighted_sum_76 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                     + (float)(weighted_sum_74 * *(float *)((char *)&g_15ADA9258 + record_word_offset));
                weighted_sum_81 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                weighted_sum_82 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                weighted_sum_83 = state_address_11 + (float)(weighted_sum_75 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                a1[2] = weighted_sum_83;
                *a1 = weighted_sum_79 + *(float *)((char *)&g_15ADA9244 + record_word_offset);
                weighted_sum_84 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                weighted_sum_85 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                a1[1] = state_address_10 + *(float *)((char *)&g_15ADA9248 + record_word_offset);
                weighted_sum_86 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                weighted_sum_87 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                a1[2] = weighted_sum_83 + *(float *)((char *)&g_15ADA924C + record_word_offset);
                *a2 = (float)((float)(weighted_sum_85 * *(float *)((char *)&g_15ADA925C + record_word_offset))
                            + (float)(weighted_sum_87 * *(float *)((char *)&g_15ADA9250 + record_word_offset)))
                    + (float)(weighted_sum_82 * *(float *)((char *)&g_15ADA9268 + record_word_offset));
                a2[1] = (float)((float)(weighted_sum_84 * *(float *)((char *)&g_15ADA9260 + record_word_offset))
                              + (float)(weighted_sum_86 * *(float *)((char *)&g_15ADA9254 + record_word_offset)))
                      + (float)(weighted_sum_81 * *(float *)((char *)&g_15ADA926C + record_word_offset));
                loaded_word_12 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                a2[2] = (float)((float)(weighted_sum_84 * *(float *)((char *)&g_15ADA9264 + record_word_offset))
                              + (float)(weighted_sum_86 * *(float *)((char *)&g_15ADA9258 + record_word_offset)))
                      + (float)(weighted_sum_81 * *(float *)((char *)&g_15ADA9270 + record_word_offset));
                g_151A848F0 = loaded_word_12;
                item_hit_layer = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                g_151A848D8 = loaded_word;
                g_151A848DC = running_total;
                g_151A848E0 = loaded_word_3;
                goto LABEL_125;
              }
              running_total_2 = 0;
              running_total_3 = 0;
              do
              {
                converted_vector = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, converted_vector, f64)[0] = (float)(weighted_sum_22 * *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b80)) + running_total_3));
                lane_mask = SR_VEC_LANES(128, converted_vector, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, converted_vector, f64)[0] != SR_VEC_LANES(128, converted_vector, f64)[0] )
                  lane_mask = (double)((int)SR_VEC_LANES(128, converted_vector, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector, converted_vector)) & 1));
                component_delta_4 = SR_VEC_LANES(128, converted_vector, f64)[0] - (lane_mask + 0.5);
                if ( *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + running_total_3) > 0 )
                  component_delta_4 = -component_delta_4;
                component_sum = component_delta_4 + component_delta_4;
                if ( running_total_3 )
                {
                  *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + running_total_3) = (float)(component_sum * absolute_value) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + running_total_3);
                  if ( running_total_3 == 2 )
                    saved_absolute_value_6 = absolute_value_2;
                  else
                    saved_absolute_value_6 = absolute_value_3;
                }
                else
                {
                  (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = (float)(component_sum * absolute_value_2) - (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                  saved_absolute_value_6 = absolute_value_3;
                }
                integer_sum = running_total_3 + 3;
                converted_vector_2 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, converted_vector_2, f64)[0] = (float)(weighted_sum_22 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[running_total_3 - 1]);
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + running_total_3 + 3) = (float)(component_sum * saved_absolute_value_6) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + running_total_3 + 3);
                lane_mask_2 = SR_VEC_LANES(128, converted_vector_2, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, converted_vector_2, f64)[0] != SR_VEC_LANES(128, converted_vector_2, f64)[0] )
                  lane_mask_2 = (double)((int)SR_VEC_LANES(128, converted_vector_2, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_2, converted_vector_2)) & 1));
                component_delta_5 = SR_VEC_LANES(128, converted_vector_2, f64)[0] - (lane_mask_2 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[running_total_3 - 1] > 0 )
                  component_delta_5 = -component_delta_5;
                component_sum_2 = component_delta_5 + component_delta_5;
                if ( running_total_2 == -1 )
                  saved_absolute_value_7 = absolute_value_2;
                else
                  saved_absolute_value_7 = absolute_value;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + running_total_3) = (float)(component_sum_2 * saved_absolute_value_7) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + running_total_3);
                if ( running_total_2 == 1 )
                  saved_absolute_value_8 = absolute_value_2;
                else
                  saved_absolute_value_8 = absolute_value_3;
                converted_vector_3 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, converted_vector_3, f64)[0] = (float)(weighted_sum_22 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[running_total_3]);
                *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + running_total_3) = (float)(component_sum_2 * saved_absolute_value_8) - *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + running_total_3);
                lane_mask_3 = SR_VEC_LANES(128, converted_vector_3, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, converted_vector_3, f64)[0] != SR_VEC_LANES(128, converted_vector_3, f64)[0] )
                  lane_mask_3 = (double)((int)SR_VEC_LANES(128, converted_vector_3, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(converted_vector_3, converted_vector_3)) & 1));
                component_delta_6 = SR_VEC_LANES(128, converted_vector_3, f64)[0] - (lane_mask_3 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[running_total_3] > 0 )
                  component_delta_6 = -component_delta_6;
                component_sum_3 = component_delta_6 + component_delta_6;
                if ( running_total_2 == -2 )
                  saved_absolute_value_9 = absolute_value_2;
                else
                  saved_absolute_value_9 = absolute_value;
                *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + running_total_3) = (float)(component_sum_3 * saved_absolute_value_9) - *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + running_total_3);
                if ( running_total_2 )
                  saved_absolute_value_10 = absolute_value_3;
                else
                  saved_absolute_value_10 = absolute_value_2;
                running_total_2 += 3;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + running_total_3) = (float)(saved_absolute_value_10 * component_sum_3) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + running_total_3);
                running_total_3 += 3;
              }
              while ( integer_sum < 3 );
              saved_weighted_sum = input_cursor;
              abs32_result = abs32(loaded_word_2 - running_total) + abs32(loaded_word_4 - loaded_word_3) + abs32((*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) - loaded_word);
              (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0x4000;
              if ( abs32_result > 0x4000 || ((*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = abs32_result, abs32_result >= 0) )
              {
                a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = LODWORD((*(float *)(void *)(sr_grid_ray_frame+0x1b7c)));
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b6c));
                saved_absolute_value_4 = (*(float *)(void *)(sr_grid_ray_frame+0x1b7c));
                (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                saved_absolute_value_2 = *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70));
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
  }
  return 0; /* native hit result */
}
#undef input_cursor

// 1400D6FEE: conditional instruction was optimized away because rdx.8<100000000u
// 1400D70A6: conditional instruction was optimized away because rdx.8<100000000u
// 1400D714D: conditional instruction was optimized away because rdx.8<100000000u
// 1400D868B: conditional instruction was optimized away because rcx.8==0

//----- (00000001400EAA00) ----------------------------------------------------
// Candidate startup config/profile loader: reads config.txt and player appearance/settings keys.
__int64            player_load_profile_config_candidate(int a1)
{
  unsigned int call_result;
  __int16 rand_result;
  unsigned int call_result_2;
  int rand_result_2;
  int iteration_count;
  __int64 file_handle;
  signed int i;
  __int64 element_index;
  int iteration_count_2;
  char table_value;
  unsigned int call_result_3;
  signed int iteration_count_3;
  __int64 element_index_2;
  signed int iteration_count_4;
  char table_value_2;
  unsigned int call_result_4;
  signed int iteration_count_5;
  __int64 element_index_3;
  signed int iteration_count_6;
  char table_value_3;
  unsigned int call_result_5;
  signed int iteration_count_7;
  __int64 element_index_4;
  signed int iteration_count_8;
  char table_value_4;
  unsigned int call_result_6;
  signed int iteration_count_9;
  __int64 element_index_5;
  signed int iteration_count_10;
  char table_value_5;
  unsigned int call_result_7;
  signed int iteration_count_11;
  __int64 element_index_6;
  signed int iteration_count_12;
  char table_value_6;
  unsigned int call_result_8;
  signed int iteration_count_13;
  __int64 element_index_7;
  signed int iteration_count_14;
  char table_value_7;
  unsigned int call_result_9;
  signed int iteration_count_15;
  __int64 element_index_8;
  signed int iteration_count_16;
  char table_value_8;
  unsigned int call_result_10;
  signed int iteration_count_17;
  __int64 element_index_9;
  signed int iteration_count_18;
  char table_value_9;
  unsigned int call_result_11;
  signed int iteration_count_19;
  __int64 element_index_10;
  signed int iteration_count_20;
  char table_value_10;
  unsigned int call_result_12;
  signed int iteration_count_21;
  __int64 element_index_11;
  signed int iteration_count_22;
  char table_value_11;
  unsigned int call_result_13;
  signed int iteration_count_23;
  __int64 element_index_12;
  signed int iteration_count_24;
  char table_value_12;
  __int64 file_handle_2;
  unsigned int state_word;
  int iteration_count_25;
  signed int j;
  __int64 element_index_13;
  int iteration_count_26;
  char table_value_13;
  unsigned int call_result_14;
  signed int iteration_count_27;
  __int64 element_index_14;
  signed int iteration_count_28;
  char table_value_14;
  unsigned int call_result_15;
  signed int iteration_count_29;
  __int64 element_index_15;
  signed int iteration_count_30;
  char table_value_15;
  unsigned int call_result_16;
  signed int iteration_count_31;
  __int64 element_index_16;
  signed int iteration_count_32;
  char table_value_16;
  unsigned int call_result_17;
  signed int iteration_count_33;
  __int64 element_index_17;
  signed int iteration_count_34;
  char table_value_17;
  unsigned int call_result_18;
  signed int iteration_count_35;
  __int64 element_index_18;
  signed int iteration_count_36;
  char table_value_18;
  signed int iteration_count_37;
  __int64 element_index_19;
  signed int iteration_count_38;
  char table_value_19;
  unsigned int call_result_19;
  signed int iteration_count_39;
  __int64 element_index_20;
  signed int iteration_count_40;
  char table_value_20;
  unsigned int call_result_20;
  signed int iteration_count_41;
  __int64 element_index_21;
  signed int iteration_count_42;
  char table_value_21;
  unsigned int call_result_21;
  signed int iteration_count_43;
  __int64 element_index_22;
  signed int iteration_count_44;
  char table_value_22;
  unsigned int call_result_22;
  signed int iteration_count_45;
  __int64 element_index_23;
  signed int iteration_count_46;
  char table_value_23;
  unsigned int call_result_23;
  signed int iteration_count_47;
  __int64 element_index_24;
  signed int iteration_count_48;
  char table_value_24;
  unsigned int call_result_24;
  signed int iteration_count_49;
  __int64 element_index_25;
  signed int iteration_count_50;
  char table_value_25;
  unsigned int call_result_25;
  signed int iteration_count_51;
  __int64 element_index_26;
  signed int iteration_count_52;
  char table_value_26;
  unsigned int call_result_26;
  signed int iteration_count_53;
  __int64 element_index_27;
  signed int iteration_count_54;
  char table_value_27;
  unsigned int call_result_27;
  signed int iteration_count_55;
  __int64 element_index_28;
  signed int iteration_count_56;
  char table_value_28;
  unsigned int call_result_28;
  signed int iteration_count_57;
  __int64 element_index_29;
  signed int iteration_count_58;
  char table_value_29;
  unsigned int call_result_29;
  signed int iteration_count_59;
  __int64 element_index_30;
  signed int iteration_count_60;
  char table_value_30;
  unsigned int call_result_30;
  signed int iteration_count_61;
  __int64 element_index_31;
  signed int iteration_count_62;
  char table_value_31;
  unsigned int call_result_31;
  signed int iteration_count_63;
  __int64 element_index_32;
  signed int iteration_count_64;
  char table_value_32;
  unsigned int call_result_32;
  signed int iteration_count_65;
  __int64 element_index_33;
  signed int iteration_count_66;
  char table_value_33;
  unsigned int call_result_33;
  signed int iteration_count_67;
  __int64 element_index_34;
  signed int iteration_count_68;
  char table_value_34;
  unsigned int call_result_34;
  signed int iteration_count_69;
  __int64 element_index_35;
  signed int iteration_count_70;
  char table_value_35;
  unsigned int call_result_35;
  signed int iteration_count_71;
  __int64 element_index_36;
  signed int iteration_count_72;
  char table_value_36;
  float scaled_value;
  unsigned int masked_bits;

  crt_chdir(&g_182A7D340);
  if ( a1 )
  {
    g_182A7D008 = g_18329B1C4;
    g_182A7D00C = g_18329B1BC;
    g_182A7D010 = g_18329B1C0;
    g_182A7D014 = g_160FC4804;
    file_handle_2 = crt_fopen("config.txt", "wb");
    file_handle = file_handle_2;
    if ( !file_handle_2 )
      return crt_chdir(&g_182A7D140);
    sub_1400920F0(file_handle_2, "%s%d\r\n", "screenwidth=", g_182A7D000);
    sub_1400920F0(file_handle, "%s%d\r\n", "screenheight=", g_182A7D004);
    sub_1400920F0(file_handle, "%s%d\r\n", "colordepth=", g_182A7D008);
    sub_1400920F0(file_handle, "%s%d\r\n", "depthbits=", g_182A7D00C);
    sub_1400920F0(file_handle, "%s%d\r\n", "stencilbits=", g_182A7D010);
    sub_1400920F0(file_handle, "%s%d\r\n", "fullscreen=", g_182A7D014);
    sub_1400920F0(file_handle, "%s%d\r\n", "joystick=", g_182A7D020);
    sub_1400920F0(file_handle, "%s%d\r\n", "sound=", g_182A7D018);
    sub_1400920F0(file_handle, "%s%d\r\n", "soundvolume=", g_151E4615C);
    sub_1400920F0(file_handle, "%s%d\r\n", "musicvolume=", g_151E46160);
    sub_1400920F0(file_handle, "%s%d\r\n", "port=", g_151E45940);
    sub_1400920F0(file_handle, "%s%d\r\n", "servermaxbytespersecond=", g_151E45944);
  }
  else
  {
    _mm_storeu_si128((__m128i *)(void *)&g_182A7D000, _mm_load_si128((     __m128i *)&xmmword_140279080));
    g_182A7D020 = 1;
    _mm_storeu_si128((__m128i *)(void *)&g_182A7D010, _mm_load_si128((     __m128i *)&xmmword_140278ED0));
    g_151E45940 = 27584;
    g_151E45944 = 500000;
    g_151E4615C = 80;
    g_151E46160 = 80;
    g_151E461B0 = 10;
    g_151E461A8 = 16;
    g_151E4619C = 100;
    call_result = sub_140237448(nullptr);
    srand(call_result);
    rand_result = rand();
    crt_sprintf((unsigned int *)&g_151E4594C, "Agent %d", rand_result & 0x1FF);
    g_151E461AC = 3;
    __builtin_memcpy((void *)&g_151E45B4C, (const void *)&xmmword_140276AC8, 16);
    call_result_2 = sub_140237448(nullptr);
    srand(call_result_2);
    rand_result_2 = rand();
    crt_sprintf(&g_151E45D4C, "%d", rand_result_2);
    _mm_storeu_si128((__m128i *)(void *)&g_151E461BC, _mm_load_si128((     __m128i *)&xmmword_140279090));
    LOBYTE(g_151E45F4C) = 0;
    g_151E45948 = 1;
    g_151E46154 = 2;
    g_151E46158 = 2;
    g_151E461DC = 100;
    toggle_151e461d0 = 1;
    g_151E461B8 = 1;
    g_151E46190 = 1;
    g_151E46194 = 1;
    g_151E461D8 = 1;
    g_151E461B4 = 1;
    g_151E461E8 = rand() % 2;
    g_151E461EC = rand() % 5;
    g_151E461F0 = rand() % 6;
    g_151E461F4 = rand() % 12;
    g_151E461F8 = rand() % 9;
    g_151E461FC = rand() % 8;
    g_151E46200 = 0;
    g_151E46204 = 1;
    draw_unknown_151e46208 = 1;
    g_18329DEE0 = 20;
    g_18329DEE8 = 53;
    g_18329DEE4 = 225;
    sub_1400ED940("config.txt");
    iteration_count = g_1862AE020;
    file_handle = 0;
    for ( i = g_1862AE024; iteration_count < (int)g_1862AE024; g_1862AE020 = ++iteration_count )
    {
      element_index = 0;
      if ( iteration_count < (int)g_1862AE024 )
      {
        iteration_count_2 = iteration_count;
        do
        {
          table_value = sr_mem_140276ae8[element_index];
          if ( !table_value )
            break;
          if ( table_value != *((_BYTE *)&g_1862AE028 + iteration_count_2) )
            break;
          ++iteration_count_2;
          ++element_index;
        }
        while ( iteration_count_2 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276ae8[element_index] )
        break;
    }
    g_1862AE020 = iteration_count + 12;
    if ( iteration_count + 12 < (int)g_1862AE024 )
    {
      call_result_3 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D000 = call_result_3;
    }
    iteration_count_3 = 0;
    for ( g_1862AE020 = 0; iteration_count_3 < i; g_1862AE020 = ++iteration_count_3 )
    {
      element_index_2 = 0;
      if ( iteration_count_3 < i )
      {
        iteration_count_4 = iteration_count_3;
        do
        {
          table_value_2 = sr_mem_140276af8[element_index_2];
          if ( !table_value_2 )
            break;
          if ( table_value_2 != *((_BYTE *)&g_1862AE028 + iteration_count_4) )
            break;
          ++iteration_count_4;
          ++element_index_2;
        }
        while ( iteration_count_4 < i );
      }
      if ( !sr_mem_140276af8[element_index_2] )
        break;
    }
    g_1862AE020 = iteration_count_3 + 13;
    if ( iteration_count_3 + 13 < i )
    {
      call_result_4 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D004 = call_result_4;
    }
    iteration_count_5 = 0;
    for ( g_1862AE020 = 0; iteration_count_5 < i; g_1862AE020 = ++iteration_count_5 )
    {
      element_index_3 = 0;
      if ( iteration_count_5 < i )
      {
        iteration_count_6 = iteration_count_5;
        do
        {
          table_value_3 = sr_mem_140276b08[element_index_3];
          if ( !table_value_3 )
            break;
          if ( table_value_3 != *((_BYTE *)&g_1862AE028 + iteration_count_6) )
            break;
          ++iteration_count_6;
          ++element_index_3;
        }
        while ( iteration_count_6 < i );
      }
      if ( !sr_mem_140276b08[element_index_3] )
        break;
    }
    g_1862AE020 = iteration_count_5 + 11;
    if ( iteration_count_5 + 11 < i )
    {
      call_result_5 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D008 = call_result_5;
    }
    iteration_count_7 = 0;
    for ( g_1862AE020 = 0; iteration_count_7 < i; g_1862AE020 = ++iteration_count_7 )
    {
      element_index_4 = 0;
      if ( iteration_count_7 < i )
      {
        iteration_count_8 = iteration_count_7;
        do
        {
          table_value_4 = sr_mem_140276b18[element_index_4];
          if ( !table_value_4 )
            break;
          if ( table_value_4 != *((_BYTE *)&g_1862AE028 + iteration_count_8) )
            break;
          ++iteration_count_8;
          ++element_index_4;
        }
        while ( iteration_count_8 < i );
      }
      if ( !sr_mem_140276b18[element_index_4] )
        break;
    }
    g_1862AE020 = iteration_count_7 + 10;
    if ( iteration_count_7 + 10 < i )
    {
      call_result_6 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D00C = call_result_6;
    }
    iteration_count_9 = 0;
    for ( g_1862AE020 = 0; iteration_count_9 < i; g_1862AE020 = ++iteration_count_9 )
    {
      element_index_5 = 0;
      if ( iteration_count_9 < i )
      {
        iteration_count_10 = iteration_count_9;
        do
        {
          table_value_5 = sr_mem_140276b28[element_index_5];
          if ( !table_value_5 )
            break;
          if ( table_value_5 != *((_BYTE *)&g_1862AE028 + iteration_count_10) )
            break;
          ++iteration_count_10;
          ++element_index_5;
        }
        while ( iteration_count_10 < i );
      }
      if ( !sr_mem_140276b28[element_index_5] )
        break;
    }
    g_1862AE020 = iteration_count_9 + 12;
    if ( iteration_count_9 + 12 < i )
    {
      call_result_7 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D010 = call_result_7;
    }
    iteration_count_11 = 0;
    for ( g_1862AE020 = 0; iteration_count_11 < i; g_1862AE020 = ++iteration_count_11 )
    {
      element_index_6 = 0;
      if ( iteration_count_11 < i )
      {
        iteration_count_12 = iteration_count_11;
        do
        {
          table_value_6 = sr_mem_140276b38[element_index_6];
          if ( !table_value_6 )
            break;
          if ( table_value_6 != *((_BYTE *)&g_1862AE028 + iteration_count_12) )
            break;
          ++iteration_count_12;
          ++element_index_6;
        }
        while ( iteration_count_12 < i );
      }
      if ( !sr_mem_140276b38[element_index_6] )
        break;
    }
    g_1862AE020 = iteration_count_11 + 11;
    if ( iteration_count_11 + 11 < i )
    {
      call_result_8 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D014 = call_result_8;
    }
    iteration_count_13 = 0;
    for ( g_1862AE020 = 0; iteration_count_13 < i; g_1862AE020 = ++iteration_count_13 )
    {
      element_index_7 = 0;
      if ( iteration_count_13 < i )
      {
        iteration_count_14 = iteration_count_13;
        do
        {
          table_value_7 = sr_mem_140276b48[element_index_7];
          if ( !table_value_7 )
            break;
          if ( table_value_7 != *((_BYTE *)&g_1862AE028 + iteration_count_14) )
            break;
          ++iteration_count_14;
          ++element_index_7;
        }
        while ( iteration_count_14 < i );
      }
      if ( !sr_mem_140276b48[element_index_7] )
        break;
    }
    g_1862AE020 = iteration_count_13 + 9;
    if ( iteration_count_13 + 9 < i )
    {
      call_result_9 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D020 = call_result_9;
    }
    iteration_count_15 = 0;
    for ( g_1862AE020 = 0; iteration_count_15 < i; g_1862AE020 = ++iteration_count_15 )
    {
      element_index_8 = 0;
      if ( iteration_count_15 < i )
      {
        iteration_count_16 = iteration_count_15;
        do
        {
          table_value_8 = sr_mem_140276b54[element_index_8];
          if ( !table_value_8 )
            break;
          if ( table_value_8 != *((_BYTE *)&g_1862AE028 + iteration_count_16) )
            break;
          ++iteration_count_16;
          ++element_index_8;
        }
        while ( iteration_count_16 < i );
      }
      if ( !sr_mem_140276b54[element_index_8] )
        break;
    }
    g_1862AE020 = iteration_count_15 + 6;
    if ( iteration_count_15 + 6 < i )
    {
      call_result_10 = sub_1400A3D70();
      i = g_1862AE024;
      g_182A7D018 = call_result_10;
    }
    iteration_count_17 = 0;
    for ( g_1862AE020 = 0; iteration_count_17 < i; g_1862AE020 = ++iteration_count_17 )
    {
      element_index_9 = 0;
      if ( iteration_count_17 < i )
      {
        iteration_count_18 = iteration_count_17;
        do
        {
          table_value_9 = sr_mem_140276b60[element_index_9];
          if ( !table_value_9 )
            break;
          if ( table_value_9 != *((_BYTE *)&g_1862AE028 + iteration_count_18) )
            break;
          ++iteration_count_18;
          ++element_index_9;
        }
        while ( iteration_count_18 < i );
      }
      if ( !sr_mem_140276b60[element_index_9] )
        break;
    }
    g_1862AE020 = iteration_count_17 + 12;
    if ( iteration_count_17 + 12 < i )
    {
      call_result_11 = sub_1400A3D70();
      i = g_1862AE024;
      g_151E4615C = call_result_11;
    }
    iteration_count_19 = 0;
    for ( g_1862AE020 = 0; iteration_count_19 < i; g_1862AE020 = ++iteration_count_19 )
    {
      element_index_10 = 0;
      if ( iteration_count_19 < i )
      {
        iteration_count_20 = iteration_count_19;
        do
        {
          table_value_10 = sr_mem_140276b70[element_index_10];
          if ( !table_value_10 )
            break;
          if ( table_value_10 != *((_BYTE *)&g_1862AE028 + iteration_count_20) )
            break;
          ++iteration_count_20;
          ++element_index_10;
        }
        while ( iteration_count_20 < i );
      }
      if ( !sr_mem_140276b70[element_index_10] )
        break;
    }
    g_1862AE020 = iteration_count_19 + 12;
    if ( iteration_count_19 + 12 < i )
    {
      call_result_12 = sub_1400A3D70();
      i = g_1862AE024;
      g_151E46160 = call_result_12;
    }
    iteration_count_21 = 0;
    for ( g_1862AE020 = 0; iteration_count_21 < i; g_1862AE020 = ++iteration_count_21 )
    {
      element_index_11 = 0;
      if ( iteration_count_21 < i )
      {
        iteration_count_22 = iteration_count_21;
        do
        {
          table_value_11 = sr_mem_140276b80[element_index_11];
          if ( !table_value_11 )
            break;
          if ( table_value_11 != *((_BYTE *)&g_1862AE028 + iteration_count_22) )
            break;
          ++iteration_count_22;
          ++element_index_11;
        }
        while ( iteration_count_22 < i );
      }
      if ( !sr_mem_140276b80[element_index_11] )
        break;
    }
    g_1862AE020 = iteration_count_21 + 5;
    if ( iteration_count_21 + 5 < i )
    {
      call_result_13 = sub_1400A3D70();
      i = g_1862AE024;
      g_151E45940 = call_result_13;
    }
    iteration_count_23 = 0;
    for ( g_1862AE020 = 0; iteration_count_23 < i; g_1862AE020 = ++iteration_count_23 )
    {
      element_index_12 = 0;
      if ( iteration_count_23 < i )
      {
        iteration_count_24 = iteration_count_23;
        do
        {
          table_value_12 = sr_mem_140276b88[element_index_12];
          if ( !table_value_12 )
            break;
          if ( table_value_12 != *((_BYTE *)&g_1862AE028 + iteration_count_24) )
            break;
          ++iteration_count_24;
          ++element_index_12;
        }
        while ( iteration_count_24 < i );
      }
      if ( !sr_mem_140276b88[element_index_12] )
        break;
    }
    g_1862AE020 = iteration_count_23 + 24;
    if ( iteration_count_23 + 24 < i )
      g_151E45944 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  sub_14010E0D0((char *)(unsigned int *)&g_151E4594C, "name=", 30, file_handle, a1);
  sub_14010E0D0((char *)&g_151E45B4C, "servername=", 50, file_handle, a1);
  sub_14010E0D0((char *)&g_151E45D4C, "adminpassword=", 50, file_handle, a1);
  sub_14010E0D0((char *)&g_151E45F4C, "serverpassword=", 50, file_handle, a1);
  state_word = g_1AD04B1F0;
  if ( LOBYTE(g_151E45F4C) )
    state_word = 1;
  g_1AD04B1F0 = state_word;
  if ( a1 )
  {
    sub_1400920F0(file_handle, "%s%d\r\n", "gametype=", g_151E461AC);
    sub_1400920F0(file_handle, "%s%d\r\n", "invertmouse=", g_151E46198);
    sub_1400920F0(file_handle, "%s%d\r\n", "maxnumofplayers=", g_151E461A8);
    sub_1400920F0(file_handle, "%s%d\r\n", "roundtime=", g_151E461B0);
    sub_1400920F0(file_handle, "%s%d\r\n", "setcpuaffinity=", g_151E461B4);
    sub_1400920F0(file_handle, "%s%d\r\n", "voicechat=", g_151E461C0);
    g_151E461C0 = 1;
    sub_1400920F0(file_handle, "%s%d\r\n", "voiceholdtotalk=", g_151E461C4);
    sub_1400920F0(file_handle, "%s%d\r\n", "voicekey=", g_151E461C8);
    sub_1400920F0(file_handle, "%s%d\r\n", "voicemb=", g_151E461CC);
    sub_1400920F0(file_handle, "%s%d\r\n", "voicemin=", g_151E461BC);
    sub_1400920F0(file_handle, "%s%d\r\n", "voiceboost=", g_151E461DC);
    sub_1400920F0(file_handle, "%s%d\r\n", "help=", toggle_151e461d0);
    sub_1400920F0(file_handle, "%s%d\r\n", "occlusion=", g_151E461B8);
    sub_1400920F0(file_handle, "%s%d\r\n", "verticalsync=", g_151E461D8);
    sub_1400920F0(file_handle, "%s%d\r\n", "playergender=", g_151E461E8);
    sub_1400920F0(file_handle, "%s%d\r\n", "playerhead=", g_151E461EC);
    sub_1400920F0(file_handle, "%s%d\r\n", "playerskincolor=", g_151E461F0);
    sub_1400920F0(file_handle, "%s%d\r\n", "playerhaircolor=", g_151E461F4);
    sub_1400920F0(file_handle, "%s%d\r\n", "playerhairstyle=", g_151E461F8);
    sub_1400920F0(file_handle, "%s%d\r\n", "playereyecolor=", g_151E461FC);
    sub_1400920F0(file_handle, "%s%d\r\n", "manualhands=", g_151E46200);
    sub_1400920F0(file_handle, "%s%d\r\n", "floatdepthbuffer=", g_151E46190);
    sub_1400920F0(file_handle, "%s%d\r\n", "framesmoothing=", g_151E46204);
    sub_1400920F0(file_handle, "%s%d\r\n", "spritemodels=", draw_unknown_151e46208);
  }
  else
  {
    iteration_count_25 = g_1862AE020;
    for ( j = g_1862AE024; iteration_count_25 < (int)g_1862AE024; g_1862AE020 = ++iteration_count_25 )
    {
      element_index_13 = 0;
      if ( iteration_count_25 < (int)g_1862AE024 )
      {
        iteration_count_26 = iteration_count_25;
        do
        {
          table_value_13 = sr_mem_140276be0[element_index_13];
          if ( !table_value_13 )
            break;
          if ( table_value_13 != *((_BYTE *)&g_1862AE028 + iteration_count_26) )
            break;
          ++iteration_count_26;
          ++element_index_13;
        }
        while ( iteration_count_26 < (int)g_1862AE024 );
      }
      if ( !sr_mem_140276be0[element_index_13] )
        break;
    }
    g_1862AE020 = iteration_count_25 + 9;
    if ( iteration_count_25 + 9 < (int)g_1862AE024 )
    {
      call_result_14 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461AC = call_result_14;
    }
    iteration_count_27 = 0;
    for ( g_1862AE020 = 0; iteration_count_27 < j; g_1862AE020 = ++iteration_count_27 )
    {
      element_index_14 = 0;
      if ( iteration_count_27 < j )
      {
        iteration_count_28 = iteration_count_27;
        do
        {
          table_value_14 = sr_mem_140276bf0[element_index_14];
          if ( !table_value_14 )
            break;
          if ( table_value_14 != *((_BYTE *)&g_1862AE028 + iteration_count_28) )
            break;
          ++iteration_count_28;
          ++element_index_14;
        }
        while ( iteration_count_28 < j );
      }
      if ( !sr_mem_140276bf0[element_index_14] )
        break;
    }
    g_1862AE020 = iteration_count_27 + 12;
    if ( iteration_count_27 + 12 < j )
    {
      call_result_15 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E46198 = call_result_15;
    }
    iteration_count_29 = 0;
    for ( g_1862AE020 = 0; iteration_count_29 < j; g_1862AE020 = ++iteration_count_29 )
    {
      element_index_15 = 0;
      if ( iteration_count_29 < j )
      {
        iteration_count_30 = iteration_count_29;
        do
        {
          table_value_15 = sr_mem_140276c00[element_index_15];
          if ( !table_value_15 )
            break;
          if ( table_value_15 != *((_BYTE *)&g_1862AE028 + iteration_count_30) )
            break;
          ++iteration_count_30;
          ++element_index_15;
        }
        while ( iteration_count_30 < j );
      }
      if ( !sr_mem_140276c00[element_index_15] )
        break;
    }
    g_1862AE020 = iteration_count_29 + 16;
    if ( iteration_count_29 + 16 < j )
    {
      call_result_16 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461A8 = call_result_16;
    }
    iteration_count_31 = 0;
    for ( g_1862AE020 = 0; iteration_count_31 < j; g_1862AE020 = ++iteration_count_31 )
    {
      element_index_16 = 0;
      if ( iteration_count_31 < j )
      {
        iteration_count_32 = iteration_count_31;
        do
        {
          table_value_16 = sr_mem_140276c18[element_index_16];
          if ( !table_value_16 )
            break;
          if ( table_value_16 != *((_BYTE *)&g_1862AE028 + iteration_count_32) )
            break;
          ++iteration_count_32;
          ++element_index_16;
        }
        while ( iteration_count_32 < j );
      }
      if ( !sr_mem_140276c18[element_index_16] )
        break;
    }
    g_1862AE020 = iteration_count_31 + 10;
    if ( iteration_count_31 + 10 < j )
    {
      call_result_17 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461B0 = call_result_17;
    }
    iteration_count_33 = 0;
    for ( g_1862AE020 = 0; iteration_count_33 < j; g_1862AE020 = ++iteration_count_33 )
    {
      element_index_17 = 0;
      if ( iteration_count_33 < j )
      {
        iteration_count_34 = iteration_count_33;
        do
        {
          table_value_17 = sr_mem_140276c28[element_index_17];
          if ( !table_value_17 )
            break;
          if ( table_value_17 != *((_BYTE *)&g_1862AE028 + iteration_count_34) )
            break;
          ++iteration_count_34;
          ++element_index_17;
        }
        while ( iteration_count_34 < j );
      }
      if ( !sr_mem_140276c28[element_index_17] )
        break;
    }
    g_1862AE020 = iteration_count_33 + 15;
    if ( iteration_count_33 + 15 < j )
    {
      call_result_18 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461B4 = call_result_18;
    }
    iteration_count_35 = 0;
    for ( g_1862AE020 = 0; iteration_count_35 < j; g_1862AE020 = ++iteration_count_35 )
    {
      element_index_18 = 0;
      if ( iteration_count_35 < j )
      {
        iteration_count_36 = iteration_count_35;
        do
        {
          table_value_18 = sr_mem_140276c38[element_index_18];
          if ( !table_value_18 )
            break;
          if ( table_value_18 != *((_BYTE *)&g_1862AE028 + iteration_count_36) )
            break;
          ++iteration_count_36;
          ++element_index_18;
        }
        while ( iteration_count_36 < j );
      }
      if ( !sr_mem_140276c38[element_index_18] )
        break;
    }
    g_1862AE020 = iteration_count_35 + 10;
    if ( iteration_count_35 + 10 < j )
    {
      sub_1400A3D70();
      j = g_1862AE024;
    }
    iteration_count_37 = 0;
    g_151E461C0 = 1;
    for ( g_1862AE020 = 0; iteration_count_37 < j; g_1862AE020 = ++iteration_count_37 )
    {
      element_index_19 = 0;
      if ( iteration_count_37 < j )
      {
        iteration_count_38 = iteration_count_37;
        do
        {
          table_value_19 = sr_mem_140276c48[element_index_19];
          if ( !table_value_19 )
            break;
          if ( table_value_19 != *((_BYTE *)&g_1862AE028 + iteration_count_38) )
            break;
          ++iteration_count_38;
          ++element_index_19;
        }
        while ( iteration_count_38 < j );
      }
      if ( !sr_mem_140276c48[element_index_19] )
        break;
    }
    g_1862AE020 = iteration_count_37 + 16;
    if ( iteration_count_37 + 16 < j )
    {
      call_result_19 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461C4 = call_result_19;
    }
    iteration_count_39 = 0;
    for ( g_1862AE020 = 0; iteration_count_39 < j; g_1862AE020 = ++iteration_count_39 )
    {
      element_index_20 = 0;
      if ( iteration_count_39 < j )
      {
        iteration_count_40 = iteration_count_39;
        do
        {
          table_value_20 = sr_mem_140276c60[element_index_20];
          if ( !table_value_20 )
            break;
          if ( table_value_20 != *((_BYTE *)&g_1862AE028 + iteration_count_40) )
            break;
          ++iteration_count_40;
          ++element_index_20;
        }
        while ( iteration_count_40 < j );
      }
      if ( !sr_mem_140276c60[element_index_20] )
        break;
    }
    g_1862AE020 = iteration_count_39 + 9;
    if ( iteration_count_39 + 9 < j )
    {
      call_result_20 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461C8 = call_result_20;
    }
    iteration_count_41 = 0;
    for ( g_1862AE020 = 0; iteration_count_41 < j; g_1862AE020 = ++iteration_count_41 )
    {
      element_index_21 = 0;
      if ( iteration_count_41 < j )
      {
        iteration_count_42 = iteration_count_41;
        do
        {
          table_value_21 = sr_mem_140276c70[element_index_21];
          if ( !table_value_21 )
            break;
          if ( table_value_21 != *((_BYTE *)&g_1862AE028 + iteration_count_42) )
            break;
          ++iteration_count_42;
          ++element_index_21;
        }
        while ( iteration_count_42 < j );
      }
      if ( !sr_mem_140276c70[element_index_21] )
        break;
    }
    g_1862AE020 = iteration_count_41 + 8;
    if ( iteration_count_41 + 8 < j )
    {
      call_result_21 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461CC = call_result_21;
    }
    iteration_count_43 = 0;
    for ( g_1862AE020 = 0; iteration_count_43 < j; g_1862AE020 = ++iteration_count_43 )
    {
      element_index_22 = 0;
      if ( iteration_count_43 < j )
      {
        iteration_count_44 = iteration_count_43;
        do
        {
          table_value_22 = sr_mem_140276c80[element_index_22];
          if ( !table_value_22 )
            break;
          if ( table_value_22 != *((_BYTE *)&g_1862AE028 + iteration_count_44) )
            break;
          ++iteration_count_44;
          ++element_index_22;
        }
        while ( iteration_count_44 < j );
      }
      if ( !sr_mem_140276c80[element_index_22] )
        break;
    }
    g_1862AE020 = iteration_count_43 + 9;
    if ( iteration_count_43 + 9 < j )
    {
      call_result_22 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461BC = call_result_22;
    }
    iteration_count_45 = 0;
    for ( g_1862AE020 = 0; iteration_count_45 < j; g_1862AE020 = ++iteration_count_45 )
    {
      element_index_23 = 0;
      if ( iteration_count_45 < j )
      {
        iteration_count_46 = iteration_count_45;
        do
        {
          table_value_23 = sr_mem_140276c90[element_index_23];
          if ( !table_value_23 )
            break;
          if ( table_value_23 != *((_BYTE *)&g_1862AE028 + iteration_count_46) )
            break;
          ++iteration_count_46;
          ++element_index_23;
        }
        while ( iteration_count_46 < j );
      }
      if ( !sr_mem_140276c90[element_index_23] )
        break;
    }
    g_1862AE020 = iteration_count_45 + 11;
    if ( iteration_count_45 + 11 < j )
    {
      call_result_23 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461DC = call_result_23;
    }
    iteration_count_47 = 0;
    for ( g_1862AE020 = 0; iteration_count_47 < j; g_1862AE020 = ++iteration_count_47 )
    {
      element_index_24 = 0;
      if ( iteration_count_47 < j )
      {
        iteration_count_48 = iteration_count_47;
        do
        {
          table_value_24 = sr_mem_140276c9c[element_index_24];
          if ( !table_value_24 )
            break;
          if ( table_value_24 != *((_BYTE *)&g_1862AE028 + iteration_count_48) )
            break;
          ++iteration_count_48;
          ++element_index_24;
        }
        while ( iteration_count_48 < j );
      }
      if ( !sr_mem_140276c9c[element_index_24] )
        break;
    }
    g_1862AE020 = iteration_count_47 + 5;
    if ( iteration_count_47 + 5 < j )
    {
      call_result_24 = sub_1400A3D70();
      j = g_1862AE024;
      toggle_151e461d0 = call_result_24;
    }
    iteration_count_49 = 0;
    for ( g_1862AE020 = 0; iteration_count_49 < j; g_1862AE020 = ++iteration_count_49 )
    {
      element_index_25 = 0;
      if ( iteration_count_49 < j )
      {
        iteration_count_50 = iteration_count_49;
        do
        {
          table_value_25 = sr_mem_140276ca8[element_index_25];
          if ( !table_value_25 )
            break;
          if ( table_value_25 != *((_BYTE *)&g_1862AE028 + iteration_count_50) )
            break;
          ++iteration_count_50;
          ++element_index_25;
        }
        while ( iteration_count_50 < j );
      }
      if ( !sr_mem_140276ca8[element_index_25] )
        break;
    }
    g_1862AE020 = iteration_count_49 + 10;
    if ( iteration_count_49 + 10 < j )
    {
      call_result_25 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461B8 = call_result_25;
    }
    iteration_count_51 = 0;
    for ( g_1862AE020 = 0; iteration_count_51 < j; g_1862AE020 = ++iteration_count_51 )
    {
      element_index_26 = 0;
      if ( iteration_count_51 < j )
      {
        iteration_count_52 = iteration_count_51;
        do
        {
          table_value_26 = sr_mem_140276cb8[element_index_26];
          if ( !table_value_26 )
            break;
          if ( table_value_26 != *((_BYTE *)&g_1862AE028 + iteration_count_52) )
            break;
          ++iteration_count_52;
          ++element_index_26;
        }
        while ( iteration_count_52 < j );
      }
      if ( !sr_mem_140276cb8[element_index_26] )
        break;
    }
    g_1862AE020 = iteration_count_51 + 13;
    if ( iteration_count_51 + 13 < j )
    {
      call_result_26 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461D8 = call_result_26;
    }
    iteration_count_53 = 0;
    for ( g_1862AE020 = 0; iteration_count_53 < j; g_1862AE020 = ++iteration_count_53 )
    {
      element_index_27 = 0;
      if ( iteration_count_53 < j )
      {
        iteration_count_54 = iteration_count_53;
        do
        {
          table_value_27 = sr_mem_140276cc8[element_index_27];
          if ( !table_value_27 )
            break;
          if ( table_value_27 != *((_BYTE *)&g_1862AE028 + iteration_count_54) )
            break;
          ++iteration_count_54;
          ++element_index_27;
        }
        while ( iteration_count_54 < j );
      }
      if ( !sr_mem_140276cc8[element_index_27] )
        break;
    }
    g_1862AE020 = iteration_count_53 + 13;
    if ( iteration_count_53 + 13 < j )
    {
      call_result_27 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461E8 = call_result_27;
    }
    iteration_count_55 = 0;
    for ( g_1862AE020 = 0; iteration_count_55 < j; g_1862AE020 = ++iteration_count_55 )
    {
      element_index_28 = 0;
      if ( iteration_count_55 < j )
      {
        iteration_count_56 = iteration_count_55;
        do
        {
          table_value_28 = sr_mem_140276cd8[element_index_28];
          if ( !table_value_28 )
            break;
          if ( table_value_28 != *((_BYTE *)&g_1862AE028 + iteration_count_56) )
            break;
          ++iteration_count_56;
          ++element_index_28;
        }
        while ( iteration_count_56 < j );
      }
      if ( !sr_mem_140276cd8[element_index_28] )
        break;
    }
    g_1862AE020 = iteration_count_55 + 11;
    if ( iteration_count_55 + 11 < j )
    {
      call_result_28 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461EC = call_result_28;
    }
    iteration_count_57 = 0;
    for ( g_1862AE020 = 0; iteration_count_57 < j; g_1862AE020 = ++iteration_count_57 )
    {
      element_index_29 = 0;
      if ( iteration_count_57 < j )
      {
        iteration_count_58 = iteration_count_57;
        do
        {
          table_value_29 = sr_mem_140276ce8[element_index_29];
          if ( !table_value_29 )
            break;
          if ( table_value_29 != *((_BYTE *)&g_1862AE028 + iteration_count_58) )
            break;
          ++iteration_count_58;
          ++element_index_29;
        }
        while ( iteration_count_58 < j );
      }
      if ( !sr_mem_140276ce8[element_index_29] )
        break;
    }
    g_1862AE020 = iteration_count_57 + 16;
    if ( iteration_count_57 + 16 < j )
    {
      call_result_29 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461F0 = call_result_29;
    }
    iteration_count_59 = 0;
    for ( g_1862AE020 = 0; iteration_count_59 < j; g_1862AE020 = ++iteration_count_59 )
    {
      element_index_30 = 0;
      if ( iteration_count_59 < j )
      {
        iteration_count_60 = iteration_count_59;
        do
        {
          table_value_30 = sr_mem_140276d00[element_index_30];
          if ( !table_value_30 )
            break;
          if ( table_value_30 != *((_BYTE *)&g_1862AE028 + iteration_count_60) )
            break;
          ++iteration_count_60;
          ++element_index_30;
        }
        while ( iteration_count_60 < j );
      }
      if ( !sr_mem_140276d00[element_index_30] )
        break;
    }
    g_1862AE020 = iteration_count_59 + 16;
    if ( iteration_count_59 + 16 < j )
    {
      call_result_30 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461F4 = call_result_30;
    }
    iteration_count_61 = 0;
    for ( g_1862AE020 = 0; iteration_count_61 < j; g_1862AE020 = ++iteration_count_61 )
    {
      element_index_31 = 0;
      if ( iteration_count_61 < j )
      {
        iteration_count_62 = iteration_count_61;
        do
        {
          table_value_31 = sr_mem_140276d18[element_index_31];
          if ( !table_value_31 )
            break;
          if ( table_value_31 != *((_BYTE *)&g_1862AE028 + iteration_count_62) )
            break;
          ++iteration_count_62;
          ++element_index_31;
        }
        while ( iteration_count_62 < j );
      }
      if ( !sr_mem_140276d18[element_index_31] )
        break;
    }
    g_1862AE020 = iteration_count_61 + 16;
    if ( iteration_count_61 + 16 < j )
    {
      call_result_31 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461F8 = call_result_31;
    }
    iteration_count_63 = 0;
    for ( g_1862AE020 = 0; iteration_count_63 < j; g_1862AE020 = ++iteration_count_63 )
    {
      element_index_32 = 0;
      if ( iteration_count_63 < j )
      {
        iteration_count_64 = iteration_count_63;
        do
        {
          table_value_32 = sr_mem_140276d30[element_index_32];
          if ( !table_value_32 )
            break;
          if ( table_value_32 != *((_BYTE *)&g_1862AE028 + iteration_count_64) )
            break;
          ++iteration_count_64;
          ++element_index_32;
        }
        while ( iteration_count_64 < j );
      }
      if ( !sr_mem_140276d30[element_index_32] )
        break;
    }
    g_1862AE020 = iteration_count_63 + 15;
    if ( iteration_count_63 + 15 < j )
    {
      call_result_32 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E461FC = call_result_32;
    }
    iteration_count_65 = 0;
    for ( g_1862AE020 = 0; iteration_count_65 < j; g_1862AE020 = ++iteration_count_65 )
    {
      element_index_33 = 0;
      if ( iteration_count_65 < j )
      {
        iteration_count_66 = iteration_count_65;
        do
        {
          table_value_33 = sr_mem_140276d40[element_index_33];
          if ( !table_value_33 )
            break;
          if ( table_value_33 != *((_BYTE *)&g_1862AE028 + iteration_count_66) )
            break;
          ++iteration_count_66;
          ++element_index_33;
        }
        while ( iteration_count_66 < j );
      }
      if ( !sr_mem_140276d40[element_index_33] )
        break;
    }
    g_1862AE020 = iteration_count_65 + 12;
    if ( iteration_count_65 + 12 < j )
    {
      call_result_33 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E46200 = call_result_33;
    }
    iteration_count_67 = 0;
    for ( g_1862AE020 = 0; iteration_count_67 < j; g_1862AE020 = ++iteration_count_67 )
    {
      element_index_34 = 0;
      if ( iteration_count_67 < j )
      {
        iteration_count_68 = iteration_count_67;
        do
        {
          table_value_34 = sr_mem_140276d50[element_index_34];
          if ( !table_value_34 )
            break;
          if ( table_value_34 != *((_BYTE *)&g_1862AE028 + iteration_count_68) )
            break;
          ++iteration_count_68;
          ++element_index_34;
        }
        while ( iteration_count_68 < j );
      }
      if ( !sr_mem_140276d50[element_index_34] )
        break;
    }
    g_1862AE020 = iteration_count_67 + 17;
    if ( iteration_count_67 + 17 < j )
    {
      call_result_34 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E46190 = call_result_34;
    }
    iteration_count_69 = 0;
    for ( g_1862AE020 = 0; iteration_count_69 < j; g_1862AE020 = ++iteration_count_69 )
    {
      element_index_35 = 0;
      if ( iteration_count_69 < j )
      {
        iteration_count_70 = iteration_count_69;
        do
        {
          table_value_35 = sr_mem_140276d68[element_index_35];
          if ( !table_value_35 )
            break;
          if ( table_value_35 != *((_BYTE *)&g_1862AE028 + iteration_count_70) )
            break;
          ++iteration_count_70;
          ++element_index_35;
        }
        while ( iteration_count_70 < j );
      }
      if ( !sr_mem_140276d68[element_index_35] )
        break;
    }
    g_1862AE020 = iteration_count_69 + 15;
    if ( iteration_count_69 + 15 < j )
    {
      call_result_35 = sub_1400A3D70();
      j = g_1862AE024;
      g_151E46204 = call_result_35;
    }
    iteration_count_71 = 0;
    for ( g_1862AE020 = 0; iteration_count_71 < j; g_1862AE020 = ++iteration_count_71 )
    {
      element_index_36 = 0;
      if ( iteration_count_71 < j )
      {
        iteration_count_72 = iteration_count_71;
        do
        {
          table_value_36 = sr_mem_140276d78[element_index_36];
          if ( !table_value_36 )
            break;
          if ( table_value_36 != *((_BYTE *)&g_1862AE028 + iteration_count_72) )
            break;
          ++iteration_count_72;
          ++element_index_36;
        }
        while ( iteration_count_72 < j );
      }
      if ( !sr_mem_140276d78[element_index_36] )
        break;
    }
    g_1862AE020 = iteration_count_71 + 13;
    if ( iteration_count_71 + 13 < j )
      draw_unknown_151e46208 = sub_1400A3D70();
    g_1862AE020 = 0;
  }
  scaled_value = (float)(int)g_151E461DC * 0.0099999998;
  *(float *)&g_151E461E0 = scaled_value;
  if ( scaled_value >= 0.125 )
  {
    if ( scaled_value > 4.0 )
      g_151E461E0 = 1082130432;
  }
  else
  {
    g_151E461E0 = 1040187392;
  }
  if ( a1 )
  {
    crt_fclose(file_handle);
  }
  else
  {
    *(float *)&masked_bits = (float)(int)g_151E4619C * 0.00001953125;
    g_151E461A0 = masked_bits;
    if ( g_151E46198 )
      *(float *)&masked_bits = -*(float *)&masked_bits;
    g_151E461A4 = masked_bits;
  }
  sub_1400ECD70(a1);
  sub_1400EC410(a1);
  sub_1400EC7E0(a1);
  return crt_chdir(&g_182A7D140);
}

//----- (000000014011C510) ----------------------------------------------------
void            sub_14011C510(int a1, int a2, int a3, int a4)
{
  __int64 block_record_offset;
  __int64 shifted_bits;
  __int64 shifted_bits_2;

  if ( a2 >= 0 )
  {
    block_record_offset = 263004LL * a1;
    if ( a2 < (int)(dword_140404A6C[block_record_offset + 111579650] << 6)
      && a3 >= 0
      && a3 < (int)(dword_140404A6C[block_record_offset + 111579651] << 6)
      && a4 >= 0
      && a4 < (int)(dword_140404A6C[block_record_offset + 111579652] << 6) )
    {
      shifted_bits = *(int *)(*(_QWORD *)&dword_140404A6C[block_record_offset + 111579655]
                  + 4LL
                  * (int)(((unsigned int)a2 >> 6)
                        + dword_140404A6C[block_record_offset + 111579650]
                        * (((unsigned int)a4 >> 6) + dword_140404A6C[block_record_offset + 111579652] * ((unsigned int)a3 >> 6))));
      if ( (_DWORD)shifted_bits != -1 )
      {
        shifted_bits_2 = (int)dword_140404A6C[263004 * a1
                                + 111579985
                                + 513 * shifted_bits
                                + (int)((((unsigned int)a2 >> 3) & 7)
                                      + 8 * ((((unsigned int)a4 >> 3) & 7) + 8 * (((unsigned int)a3 >> 3) & 7)))];
        if ( (_DWORD)shifted_bits_2 != -1 )
        {
          dword_140404A6C[6930 * shifted_bits_2 + 83201282] = 1;
          dword_140404A6C[6930 * shifted_bits_2 + 83201283 + ((unsigned __int64)(a3 & 6) >> 1)] = 1;
        }
      }
    }
  }
}

//----- (000000014011D470) ----------------------------------------------------
__int64 sub_14011D470()
{
  float state_scalar;
  unsigned int state_word;
  int integer_sum;
  unsigned int state_word_2;
  __int64 result;
  float cached_integer_sum;
  int scaled_index;
  float component_delta;
  float squared_component;
  float scaled_value;
  int scaled_index_2;
  int scaled_index_3;
  float component_delta_2;
  float square_root;
  float scaled_ratio;
  float product_difference;
  float scaled_ratio_2;
  float scaled_value_2;
  int integer_sum_2;
  int running_total;
  int integer_sum_3;
  int iteration_count;
  float component_sum;
  int cached_scaled_index;
  int cached_scaled_index_2;
  int cached_scaled_index_3;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  __int64 shifted_bits_4;
  __int64 shifted_bits_5;
  __int64 table_value;
  __int64 table_value_2;
  __int64 scaled_index_4;
  __int64 byte1_result;
  unsigned int table_value_3;
  unsigned int table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011D470[304];
#define running_total_2 (*(int (*))(void *)(sr_frame_14011D470 + 0)) /* [rsp+20h] */
#define saved_call_status (*(int (*))(void *)(sr_frame_14011D470 + 4)) /* [rsp+24h] */
#define cached_integer_sum_2 (*(int (*))(void *)(sr_frame_14011D470 + 8)) /* [rsp+28h] */
#define cached_scaled_index_4 (*(int (*))(void *)(sr_frame_14011D470 + 12)) /* [rsp+2Ch] */
#define cached_scaled_index_5 (*(int (*))(void *)(sr_frame_14011D470 + 16)) /* [rsp+30h] */
#define cached_scaled_index_6 (*(int (*))(void *)(sr_frame_14011D470 + 20)) /* [rsp+34h] */
#define scaled_index_5 (*(int (*))(void *)(sr_frame_14011D470 + 272)) /* [rsp+130h] */
#define scaled_index_6 (*(int (*))(void *)(sr_frame_14011D470 + 280)) /* [rsp+138h] */
#define scaled_index_7 (*(int (*))(void *)(sr_frame_14011D470 + 288)) /* [rsp+140h] */
#define running_total_3 (*(int (*))(void *)(sr_frame_14011D470 + 296)) /* [rsp+148h] */

  state_scalar = g_15ADA9284;
  state_word = g_15ADA927C;
  integer_sum = 0;
  state_word_2 = g_15ADA9274;
  cached_integer_sum_2 = 0;
  do
  {
    LODWORD(result) = 0;
    saved_call_status = 0;
    cached_integer_sum = (float)integer_sum;
    scaled_index = (int)(float)((float)(state_scalar * g_183F7C544) * 256.0);
    cached_scaled_index_4 = scaled_index;
    component_delta = cached_integer_sum - 30.0;
    squared_component = component_delta * component_delta;
    scaled_value = component_delta * 0.010416667;
    scaled_index_2 = (int)(float)((float)(state_scalar * g_183F7C548) * 256.0);
    scaled_index_3 = (int)(float)((float)(state_scalar * g_183F7C54C) * 256.0);
    cached_scaled_index_5 = scaled_index_2;
    cached_scaled_index_6 = scaled_index_3;
    do
    {
      component_delta_2 = (float)(int)result - 48.0;
      square_root = fsqrt((float)((float)((float)(component_delta_2 * component_delta_2) + squared_component) * 0.00010850695) + 0.25);
      if ( square_root == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        product_difference = 0.0;
      }
      else
      {
        scaled_ratio = scaled_value * (float)(1.0 / square_root);
        product_difference = (float)(1.0 / square_root) * -0.34999999;
        scaled_ratio_2 = (float)(component_delta_2 * (float)(1.0 / square_root)) * 0.0072916667;
      }
      scaled_value_2 = scaled_ratio * 0.69999999;
      integer_sum_2 = scaled_index_2;
      running_total = scaled_index;
      integer_sum_3 = scaled_index_3;
      running_total_3 = scaled_index_2;
      iteration_count = 0;
      running_total_2 = scaled_index_3;
      component_sum = (float)(result & 7) + 248.0;
      scaled_index_6 = (int)(float)((float)((float)((float)(scaled_value_2 * g_183F7C560)
                                       + (float)(g_183F7C554 * scaled_ratio_2))
                               + (float)(product_difference * g_183F7C56C))
                       * component_sum);
      cached_scaled_index = scaled_index_6;
      scaled_index_5 = (int)(float)((float)((float)((float)(scaled_value_2 * g_183F7C55C)
                                       + (float)(g_183F7C550 * scaled_ratio_2))
                               + (float)(product_difference * g_183F7C568))
                       * component_sum);
      scaled_index_7 = (int)(float)((float)((float)((float)(scaled_value_2 * g_183F7C564)
                                       + (float)(g_183F7C558 * scaled_ratio_2))
                               + (float)(g_183F7C570 * product_difference))
                       * component_sum);
      cached_scaled_index_2 = scaled_index_5;
      cached_scaled_index_3 = scaled_index_7;
      do
      {
        shifted_bits = integer_sum_2 >> 8;
        shifted_bits_2 = running_total >> 8;
        shifted_bits_3 = integer_sum_3 >> 8;
        if ( running_total >> 8 < 0 )
          goto LABEL_32;
        if ( shifted_bits_2 < (int)(state_word_2 << 6)
          && shifted_bits >= 0
          && shifted_bits < (signed int)(g_15ADA9278 << 6)
          && shifted_bits_3 >= 0
          && shifted_bits_3 < (int)(state_word << 6) )
        {
          shifted_bits_4 = *(int *)(g_15ADA9288
                       + 4LL * (int)(state_word_2 * ((shifted_bits_3 >> 6) + state_word * (shifted_bits >> 6)) + (running_total >> 14)));
          if ( (_DWORD)shifted_bits_4 != -1 )
          {
            shifted_bits_5 = 513 * shifted_bits_4 + ((running_total >> 11) & 7) + 8 * (((shifted_bits_3 >> 3) & 7) + 8 * ((shifted_bits >> 3) & 7u));
            table_value = (int)dword_140404A6C[shifted_bits_5 + 111579985];
            if ( (_DWORD)table_value != -1 )
            {
              table_value_2 = (int)dword_140404A6C[shifted_bits_5 + 111579985];
              scaled_index_4 = 6930 * table_value_2;
              dword_140404A6C[6930 * table_value + 83201282] = 1;
              if ( iteration_count >= 16 )
              {
                dword_140404A6C[6930 * table_value_2 + 83201283] = 1;
                dword_140404A6C[6930 * table_value_2 + 83201284] = 1;
                dword_140404A6C[6930 * table_value_2 + 83201285] = 1;
                dword_140404A6C[6930 * table_value_2 + 83201286] = 1;
              }
              else
              {
                dword_140404A6C[scaled_index_4 + 83201283 + (((__int64)(unsigned int)shifted_bits >> 1) & 3)] = 1;
                if ( iteration_count < 2 )
                {
                  sub_14011C510(0, shifted_bits_2, shifted_bits + 1, shifted_bits_3);
                  sub_14011C510(0, shifted_bits_2, shifted_bits + 2, shifted_bits_3);
                  sub_14011C510(0, shifted_bits_2, shifted_bits + 3, shifted_bits_3);
                  goto LABEL_19;
                }
                if ( iteration_count < 4 )
                {
LABEL_19:
                  sub_14011C510(0, shifted_bits_2 - 8, shifted_bits, shifted_bits_3);
                  sub_14011C510(0, shifted_bits_2 + 8, shifted_bits, shifted_bits_3);
                  sub_14011C510(0, shifted_bits_2, shifted_bits, shifted_bits_3 - 8);
                  sub_14011C510(0, shifted_bits_2, shifted_bits, shifted_bits_3 + 8);
                }
              }
              byte1_result = scaled_index_4 + (BYTE1(running_total) & 7) + 8 * ((shifted_bits_3 & 7) + 8 * (shifted_bits & 7u));
              table_value_3 = dword_140404A6C[byte1_result + 83194359];
              if ( (table_value_3 & 0xE0000000) == 0xC0000000 )
                sub_14011C510(0, shifted_bits_2 - (unsigned __int8)table_value_3, shifted_bits - BYTE2(table_value_3), shifted_bits_3 - BYTE1(table_value_3));
              table_value_4 = dword_140404A6C[byte1_result + 83197431];
              if ( table_value_4 )
              {
                if ( (table_value_4 & 0xE0000000) == 0xC0000000 )
                  sub_14011C510(0, shifted_bits_2 - (unsigned __int8)table_value_4, shifted_bits - BYTE2(table_value_4), shifted_bits_3 - BYTE1(table_value_4));
              }
              else if ( (dword_140404A6C[byte1_result + 83194359] & 0xE0000000) == 0x40000000 )
              {
                break;
              }
              cached_scaled_index_3 = scaled_index_7;
            }
            state_word = g_15ADA927C;
          }
          cached_scaled_index = scaled_index_6;
          state_word_2 = g_15ADA9274;
        }
        cached_scaled_index_2 = scaled_index_5;
LABEL_32:
        running_total += cached_scaled_index_2;
        integer_sum_2 = cached_scaled_index + running_total_3;
        integer_sum_3 = cached_scaled_index_3 + running_total_2;
        running_total_3 += cached_scaled_index;
        ++iteration_count;
        running_total_2 += cached_scaled_index_3;
      }
      while ( iteration_count < 48 );
      state_word = g_15ADA927C;
      result = (unsigned int)(saved_call_status + 1);
      state_word_2 = g_15ADA9274;
      scaled_index = cached_scaled_index_4;
      scaled_index_2 = cached_scaled_index_5;
      scaled_index_3 = cached_scaled_index_6;
      saved_call_status = result;
    }
    while ( (int)result < 96 );
    state_scalar = g_15ADA9284;
    integer_sum = cached_integer_sum_2 + 1;
    cached_integer_sum_2 = integer_sum;
  }
  while ( integer_sum < 60 );
  return result;
}
#undef running_total_2
#undef saved_call_status
#undef cached_integer_sum_2
#undef cached_scaled_index_4
#undef cached_scaled_index_5
#undef cached_scaled_index_6
#undef scaled_index_5
#undef scaled_index_6
#undef scaled_index_7
#undef running_total_3

//----- (0000000140184AB0) ----------------------------------------------------
void            sub_140184AB0(int a1)
{
  unsigned int state_word;
  __int64 input_value;
  __int64 record_word_offset;
  __int64 scaled_index;
  __int64 scaled_index_2;

  if ( a1 >= 0 )
  {
    state_word = g_1512DB764;
    if ( a1 < (int)g_1512DB764 )
    {
      input_value = a1;
      --g_1512DB764;
      record_word_offset = 2LL * a1;
      dword_140404A6C[2 * record_word_offset + 70998847] = dword_140404A6C[4 * (state_word - 1) + 70998847];
      dword_140404A6C[2 * record_word_offset + 70998848] = dword_140404A6C[4 * g_1512DB764 + 70998848];
      dword_140404A6C[2 * record_word_offset + 70998849] = dword_140404A6C[4 * g_1512DB764 + 70998849];
      dword_140404A6C[2 * record_word_offset + 70998850] = dword_140404A6C[4 * g_1512DB764 + 70998850];
      scaled_index = 3 * input_value;
      dword_140404A6C[input_value + 71064383] = dword_140404A6C[g_1512DB764 + 71064383];
      dword_140404A6C[input_value + 71097151] = dword_140404A6C[g_1512DB764 + 71097151];
      scaled_index_2 = 3LL * (int)g_1512DB764;
      dword_140404A6C[scaled_index + 71113535] = dword_140404A6C[3 * g_1512DB764 + 71113535];
      dword_140404A6C[scaled_index + 71113536] = dword_140404A6C[scaled_index_2 + 71113536];
      dword_140404A6C[scaled_index + 71113537] = dword_140404A6C[scaled_index_2 + 71113537];
    }
  }
}

//----- (0000000140184BB0) ----------------------------------------------------
void sub_140184BB0()
{
  float scaled_value;
  int state_word;
  int cached_selection_flag;
  int iteration_count;
  unsigned int *buffer_cursor;
  int *record_byte_offset;
  float *state_address;
  int iteration_count_2;
  float *state_address_2;
  unsigned int *buffer_cursor_2;
  unsigned int *record_byte_offset_2;
  __int64 scaled_index;
  __int64 table_value;
  __int64 scaled_index_2;
  __int64 table_value_2;
  __int64 scaled_index_3;
  __int64 loaded_word;
  __int64 scaled_index_4;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  float weighted_sum_3;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  __int64 scaled_index_5;
  float weighted_sum_4;
  float weighted_sum_5;
  float combined_products_7;
  float weighted_sum_6;
  float combined_products_8;
  float combined_products_9;
  float combined_products_10;
  float combined_products_11;
  float combined_products_12;
  float square_root_3;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float square_root_4;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float combined_products_13;
  float weighted_sum_7;
  float combined_products_14;
  float weighted_sum_8;
  float component_delta;
  float weighted_sum_9;
  float weighted_sum_10;
  float scaled_ratio_13;
  float weighted_sum_11;
  float square_root_5;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float combined_products_15;
  float combined_products_16;
  float scaled_ratio_14;
  float weighted_sum_15;
  float combined_products_17;
  float combined_products_18;
  float square_root_6;
  float product_difference;
  float product_difference_2;
  float square_root_7;
  int selection_flag;
  int iteration_count_3;
  unsigned int *buffer_cursor_3;
  int *record_byte_offset_3;
  float *state_address_3;
  int iteration_count_4;
  float *state_address_4;
  unsigned int *buffer_cursor_4;
  int *record_byte_offset_4;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 loaded_word_2;
  __int64 table_value_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 table_value_6;
  float weighted_sum_16;
  float weighted_sum_17;
  float combined_products_19;
  float weighted_sum_18;
  float combined_products_20;
  float combined_products_21;
  float combined_products_22;
  float combined_products_23;
  float combined_products_24;
  float square_root_8;
  float scaled_ratio_15;
  float scaled_ratio_16;
  float scaled_ratio_17;
  float square_root_9;
  float scaled_ratio_18;
  float scaled_ratio_19;
  float scaled_value_2;
  float scaled_value_3;
  __int64 scaled_index_9;
  float weighted_sum_19;
  float weighted_sum_20;
  float combined_products_25;
  float weighted_sum_21;
  float combined_products_26;
  __int64 table_value_7;
  float combined_products_27;
  float combined_products_28;
  float combined_products_29;
  float combined_products_30;
  float square_root_10;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float scaled_ratio_22;
  float square_root_11;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float scaled_value_4;
  float combined_products_31;
  float combined_products_32;
  float weighted_sum_22;
  float component_delta_2;
  float weighted_sum_23;
  float weighted_sum_24;
  float weighted_sum_25;
  float squared_length;
  float weighted_sum_26;
  float square_root_12;
  float weighted_sum_27;
  __int64 table_value_8;
  float weighted_sum_28;
  float weighted_sum_29;
  float combined_products_33;
  float scaled_ratio_25;
  float weighted_sum_30;
  float combined_products_34;
  float combined_products_35;
  float state_address_5;
  float square_root_13;
  float square_root_14;
  float product_difference_3;
  float product_difference_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184BB0[32];
#define selection_flag_2 (*(int (*))(void *)(sr_frame_140184BB0 + 0)) /* [rsp+110h] */
#define saved_square_root (*(float (*))(void *)(sr_frame_140184BB0 + 8)) /* [rsp+118h] */
#define saved_buffer_cursor (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 16)) /* [rsp+120h] */
#define saved_buffer_cursor_2 (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 24)) /* [rsp+128h] */

  scaled_value = 0.0;
  state_word = g_1512DB764;
LABEL_2:
  while ( 1 )
  {
    cached_selection_flag = 0;
    iteration_count = 0;
    selection_flag_2 = 0;
    if ( state_word <= 0 )
      break;
    buffer_cursor = &g_15131B768;
    saved_buffer_cursor_2 = &g_15131B768;
    record_byte_offset = (int *)&g_1512DB768;
    state_address = (float *)&g_15134B76C;
    do
    {
      iteration_count_2 = 0;
      if ( state_word > 0 )
      {
        state_address_2 = (float *)&g_15134B76C;
        buffer_cursor_2 = &g_15131B768;
        record_byte_offset_2 = &g_1512DB774;
        do
        {
          if ( iteration_count != iteration_count_2 )
          {
            scaled_index = (int)*(record_byte_offset_2 - 3);
            table_value = record_byte_offset[1];
            if ( dword_140404A6C[table_value + 70933310] == dword_140404A6C[scaled_index + 70933310] )
            {
              scaled_index_2 = (int)*record_byte_offset_2;
              table_value_2 = record_byte_offset[2];
              if ( dword_140404A6C[table_value_2 + 70933310] == dword_140404A6C[scaled_index_2 + 70933310] && *buffer_cursor == *buffer_cursor_2 )
              {
                scaled_index_3 = 3 * table_value;
                if ( fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70687550] - *(float *)&dword_140404A6C[3 * scaled_index + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70687551] - *(float *)&dword_140404A6C[3 * scaled_index + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70687552] - *(float *)&dword_140404A6C[3 * scaled_index + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70736702] - *(float *)&dword_140404A6C[3 * scaled_index + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70736703] - *(float *)&dword_140404A6C[3 * scaled_index + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[scaled_index_3 + 70736704] - *(float *)&dword_140404A6C[3 * scaled_index + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * scaled_index + 70835008] == *(float *)&dword_140404A6C[scaled_index_3 + 70835008]
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687550] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687551] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687552] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736702] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736703] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736704] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * scaled_index_2 + 70835008] == *(float *)&dword_140404A6C[3 * table_value_2 + 70835008]
                  && fabs(*(state_address - 1) - *(state_address_2 - 1)) < 0.000099999997
                  && fabs(*state_address - *state_address_2) < 0.000099999997
                  && fabs(state_address[1] - state_address_2[1]) < 0.000099999997 )
                {
                  loaded_word = *record_byte_offset;
                  scaled_index_4 = (int)*(record_byte_offset_2 - 2);
                  weighted_sum = *(float *)&dword_140404A6C[3 * loaded_word + 70687550];
                  weighted_sum_2 = *(float *)&dword_140404A6C[3 * loaded_word + 70687551];
                  combined_products = *(float *)&dword_140404A6C[scaled_index_3 + 70687550] - weighted_sum;
                  weighted_sum_3 = *(float *)&dword_140404A6C[3 * loaded_word + 70687552];
                  combined_products_2 = *(float *)&dword_140404A6C[scaled_index_3 + 70687551] - weighted_sum_2;
                  combined_products_3 = *(float *)&dword_140404A6C[scaled_index_3 + 70687552] - weighted_sum_3;
                  combined_products_4 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687550] - weighted_sum;
                  combined_products_5 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687551] - weighted_sum_2;
                  combined_products_6 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687552] - weighted_sum_3;
                  square_root = fsqrt((float)((float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products)) + (float)(combined_products_3 * combined_products_3));
                  if ( square_root == 0.0 )
                  {
                    scaled_ratio = 0.0;
                    scaled_ratio_2 = 0.0;
                    scaled_ratio_3 = 0.0;
                  }
                  else
                  {
                    scaled_ratio = combined_products * (float)(1.0 / square_root);
                    scaled_ratio_2 = combined_products_2 * (float)(1.0 / square_root);
                    scaled_ratio_3 = combined_products_3 * (float)(1.0 / square_root);
                  }
                  square_root_2 = fsqrt((float)((float)(combined_products_5 * combined_products_5) + (float)(combined_products_4 * combined_products_4)) + (float)(combined_products_6 * combined_products_6));
                  if ( square_root_2 == 0.0 )
                  {
                    scaled_ratio_4 = 0.0;
                    scaled_ratio_5 = 0.0;
                    scaled_ratio_6 = 0.0;
                  }
                  else
                  {
                    scaled_ratio_4 = combined_products_4 * (float)(1.0 / square_root_2);
                    scaled_ratio_5 = combined_products_5 * (float)(1.0 / square_root_2);
                    scaled_ratio_6 = combined_products_6 * (float)(1.0 / square_root_2);
                  }
                  if ( (float)((float)((float)(scaled_ratio_2 * scaled_ratio_5) + (float)(scaled_ratio_4 * scaled_ratio)) + (float)(scaled_ratio_6 * scaled_ratio_3)) < 0.99998748 )
                  {
                    buffer_cursor = saved_buffer_cursor_2;
                  }
                  else
                  {
                    scaled_index_5 = 3LL * record_byte_offset[3];
                    weighted_sum_4 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687550];
                    weighted_sum_5 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687552];
                    combined_products_7 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687550] - weighted_sum_4;
                    weighted_sum_6 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687551];
                    combined_products_8 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687552] - weighted_sum_5;
                    combined_products_9 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687551] - weighted_sum_6;
                    combined_products_10 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687550] - weighted_sum_4;
                    combined_products_11 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687552] - weighted_sum_5;
                    combined_products_12 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687551] - weighted_sum_6;
                    square_root_3 = fsqrt((float)((float)(combined_products_9 * combined_products_9) + (float)(combined_products_7 * combined_products_7)) + (float)(combined_products_8 * combined_products_8));
                    if ( square_root_3 == 0.0 )
                    {
                      scaled_ratio_7 = 0.0;
                      scaled_ratio_8 = 0.0;
                      scaled_ratio_9 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_7 = combined_products_7 * (float)(1.0 / square_root_3);
                      scaled_ratio_8 = combined_products_9 * (float)(1.0 / square_root_3);
                      scaled_ratio_9 = combined_products_8 * (float)(1.0 / square_root_3);
                    }
                    square_root_4 = fsqrt((float)((float)(combined_products_12 * combined_products_12) + (float)(combined_products_10 * combined_products_10)) + (float)(combined_products_11 * combined_products_11));
                    if ( square_root_4 == 0.0 )
                    {
                      scaled_ratio_10 = 0.0;
                      scaled_ratio_11 = 0.0;
                      scaled_ratio_12 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_10 = combined_products_10 * (float)(1.0 / square_root_4);
                      scaled_ratio_11 = combined_products_12 * (float)(1.0 / square_root_4);
                      scaled_ratio_12 = (float)(1.0 / square_root_4) * combined_products_11;
                    }
                    if ( (float)((float)((float)(scaled_ratio_8 * scaled_ratio_11) + (float)(scaled_ratio_10 * scaled_ratio_7)) + (float)(scaled_ratio_12 * scaled_ratio_9)) >= 0.99998748 )
                    {
                      combined_products_13 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687550] - weighted_sum;
                      weighted_sum_7 = *(float *)&dword_140404A6C[3 * loaded_word + 70835006];
                      combined_products_14 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687552] - weighted_sum_3;
                      weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_3 + 70835006];
                      component_delta = weighted_sum_6 - weighted_sum_2;
                      weighted_sum_9 = *(float *)&dword_140404A6C[3 * loaded_word + 70835007];
                      weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_3 + 70835007];
                      scaled_ratio_13 = 1.0 / square_root;
                      weighted_sum_11 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70835006];
                      square_root_5 = fsqrt((float)((float)(component_delta * component_delta) + (float)(combined_products_13 * combined_products_13)) + (float)(combined_products_14 * combined_products_14));
                      weighted_sum_12 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70835007];
                      record_byte_offset[1] = scaled_index_4;
                      record_byte_offset[2] = *(record_byte_offset_2 - 1);
                      weighted_sum_13 = *(float *)&dword_140404A6C[3 * loaded_word + 70687550];
                      weighted_sum_14 = *(float *)&dword_140404A6C[3 * loaded_word + 70687551];
                      combined_products_15 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687550] - weighted_sum_13;
                      combined_products_16 = *(float *)&dword_140404A6C[scaled_index_5 + 70687551] - weighted_sum_14;
                      scaled_ratio_14 = 1.0 / square_root_5;
                      weighted_sum_15 = *(float *)&dword_140404A6C[3 * loaded_word + 70687552];
                      combined_products_17 = *(float *)&dword_140404A6C[scaled_index_5 + 70687550] - weighted_sum_13;
                      combined_products_18 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687552] - weighted_sum_15;
                      square_root_6 = fsqrt(
                              (float)((float)((float)(*(float *)&dword_140404A6C[3 * scaled_index_4 + 70687551] - weighted_sum_14)
                                            * (float)(*(float *)&dword_140404A6C[3 * scaled_index_4 + 70687551] - weighted_sum_14))
                                    + (float)(combined_products_15 * combined_products_15))
                            + (float)(combined_products_18 * combined_products_18));
                      product_difference = (float)((float)(weighted_sum_8 - weighted_sum_7) * scaled_ratio_13) * square_root_6;
                      product_difference_2 = (float)((float)(weighted_sum_10 - weighted_sum_9) * scaled_ratio_13) * square_root_6;
                      square_root_7 = fsqrt(
                              (float)((float)(combined_products_16 * combined_products_16) + (float)(combined_products_17 * combined_products_17))
                            + (float)((float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687552] - weighted_sum_15)
                                    * (float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687552] - weighted_sum_15)));
                      *(float *)&dword_140404A6C[3 * scaled_index_4 + 70835006] = product_difference
                                                                     + *(float *)&dword_140404A6C[3 * loaded_word + 70835006];
                      *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70835007] = product_difference_2
                                                                       + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835007];
                      *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835006] = (float)((float)((float)(weighted_sum_11 - weighted_sum_7) * scaled_ratio_14) * square_root_7)
                                                                       + (float)(product_difference
                                                                               + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835006]);
                      *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835007] = (float)((float)((float)(weighted_sum_12 - weighted_sum_9) * scaled_ratio_14) * square_root_7)
                                                                       + (float)(product_difference_2
                                                                               + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835007]);
                      sub_140184AB0(iteration_count_2);
                      state_word = g_1512DB764;
                      cached_selection_flag = 1;
                      scaled_value = 0.0;
                      selection_flag_2 = 1;
                      if ( iteration_count == g_1512DB764 )
                        goto LABEL_2;
                      buffer_cursor = saved_buffer_cursor_2;
                      goto LABEL_45;
                    }
                    buffer_cursor = saved_buffer_cursor_2;
                  }
                }
              }
            }
            cached_selection_flag = selection_flag_2;
          }
LABEL_45:
          ++iteration_count_2;
          ++buffer_cursor_2;
          state_address_2 += 3;
          record_byte_offset_2 += 4;
        }
        while ( iteration_count_2 < state_word );
      }
      ++buffer_cursor;
      ++iteration_count;
      state_address += 3;
      saved_buffer_cursor_2 = buffer_cursor;
      record_byte_offset += 4;
    }
    while ( iteration_count < state_word );
    if ( !cached_selection_flag )
      goto LABEL_48;
  }
  do
  {
LABEL_48:
    selection_flag = 0;
    iteration_count_3 = 0;
    if ( state_word <= 0 )
      break;
    buffer_cursor_3 = &g_15131B768;
    saved_buffer_cursor = &g_15131B768;
    record_byte_offset_3 = (int *)&g_1512DB768;
    state_address_3 = (float *)&g_15134B76C;
    do
    {
      iteration_count_4 = 0;
      if ( state_word > 0 )
      {
        state_address_4 = (float *)&g_15134B76C;
        buffer_cursor_4 = &g_15131B768;
        record_byte_offset_4 = (int *)&g_1512DB768;
        do
        {
          if ( iteration_count_3 != iteration_count_4 )
          {
            table_value_3 = record_byte_offset_4[1];
            table_value_4 = record_byte_offset_3[2];
            if ( dword_140404A6C[table_value_4 + 70933310] == dword_140404A6C[table_value_3 + 70933310] )
            {
              loaded_word_2 = *record_byte_offset_4;
              table_value_5 = record_byte_offset_3[3];
              state_word = g_1512DB764;
              if ( dword_140404A6C[table_value_5 + 70933310] == dword_140404A6C[loaded_word_2 + 70933310] && *buffer_cursor_3 == *buffer_cursor_4 )
              {
                scaled_index_6 = 3 * table_value_4;
                if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687550] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687551] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687552] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736702] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736703] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736704] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * table_value_3 + 70835008] == *(float *)&dword_140404A6C[3 * table_value_4 + 70835008] )
                {
                  scaled_index_7 = 3 * table_value_5;
                  if ( fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687550] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687550]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687551] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687551]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687552] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687552]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736702] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736702]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736703] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736703]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736704] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736704]) < 0.000099999997
                    && *(float *)&dword_140404A6C[3 * loaded_word_2 + 70835008] == *(float *)&dword_140404A6C[3 * table_value_5 + 70835008]
                    && fabs(*(state_address_3 - 1) - *(state_address_4 - 1)) < 0.000099999997
                    && fabs(*state_address_3 - *state_address_4) < 0.000099999997
                    && fabs(state_address_3[1] - state_address_4[1]) < 0.000099999997 )
                  {
                    scaled_index_8 = 3LL * *record_byte_offset_3;
                    table_value_6 = record_byte_offset_4[3];
                    weighted_sum_16 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687551];
                    weighted_sum_17 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687552];
                    combined_products_19 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687551] - weighted_sum_16;
                    weighted_sum_18 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687550];
                    combined_products_20 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687552] - weighted_sum_17;
                    combined_products_21 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687550] - weighted_sum_18;
                    combined_products_22 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687551] - weighted_sum_16;
                    combined_products_23 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687552] - weighted_sum_17;
                    combined_products_24 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687550] - weighted_sum_18;
                    square_root_8 = fsqrt((float)((float)(combined_products_19 * combined_products_19) + (float)(combined_products_21 * combined_products_21)) + (float)(combined_products_20 * combined_products_20));
                    saved_square_root = square_root_8;
                    if ( square_root_8 == 0.0 )
                    {
                      scaled_ratio_15 = 0.0;
                      scaled_ratio_16 = 0.0;
                      scaled_ratio_17 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_15 = (float)(1.0 / square_root_8) * combined_products_21;
                      scaled_ratio_16 = (float)(1.0 / square_root_8) * combined_products_19;
                      scaled_ratio_17 = (float)(1.0 / square_root_8) * combined_products_20;
                    }
                    square_root_9 = fsqrt((float)((float)(combined_products_22 * combined_products_22) + (float)(combined_products_24 * combined_products_24)) + (float)(combined_products_23 * combined_products_23));
                    if ( square_root_9 == 0.0 )
                    {
                      scaled_ratio_19 = 0.0;
                      scaled_value_2 = 0.0;
                      scaled_value_3 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_18 = 1.0 / square_root_9;
                      scaled_ratio_19 = (float)(1.0 / square_root_9) * combined_products_24;
                      scaled_value_2 = scaled_ratio_18 * combined_products_22;
                      scaled_value_3 = scaled_ratio_18 * combined_products_23;
                    }
                    if ( (float)((float)((float)(scaled_ratio_16 * scaled_value_2) + (float)(scaled_ratio_19 * scaled_ratio_15)) + (float)(scaled_value_3 * scaled_ratio_17)) >= 0.99998748 )
                    {
                      scaled_index_9 = 3LL * record_byte_offset_3[1];
                      weighted_sum_19 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687552];
                      weighted_sum_20 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687550];
                      combined_products_25 = *(float *)&dword_140404A6C[scaled_index_6 + 70687552] - weighted_sum_19;
                      weighted_sum_21 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687551];
                      combined_products_26 = *(float *)&dword_140404A6C[scaled_index_6 + 70687550] - weighted_sum_20;
                      table_value_7 = record_byte_offset_4[2];
                      combined_products_27 = *(float *)&dword_140404A6C[scaled_index_6 + 70687551] - weighted_sum_21;
                      combined_products_28 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687552] - weighted_sum_19;
                      combined_products_29 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687550] - weighted_sum_20;
                      combined_products_30 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687551] - weighted_sum_21;
                      square_root_10 = fsqrt((float)((float)(combined_products_26 * combined_products_26) + (float)(combined_products_27 * combined_products_27)) + (float)(combined_products_25 * combined_products_25));
                      if ( square_root_10 == 0.0 )
                      {
                        scaled_ratio_20 = 0.0;
                        scaled_ratio_21 = 0.0;
                        scaled_ratio_22 = 0.0;
                      }
                      else
                      {
                        scaled_ratio_20 = (float)(1.0 / square_root_10) * combined_products_26;
                        scaled_ratio_21 = (float)(1.0 / square_root_10) * combined_products_27;
                        scaled_ratio_22 = (float)(1.0 / square_root_10) * combined_products_25;
                      }
                      square_root_11 = fsqrt((float)((float)(combined_products_30 * combined_products_30) + (float)(combined_products_29 * combined_products_29)) + (float)(combined_products_28 * combined_products_28));
                      if ( square_root_11 == 0.0 )
                      {
                        scaled_ratio_24 = 0.0;
                        scaled_value_4 = 0.0;
                      }
                      else
                      {
                        scaled_ratio_23 = 1.0 / square_root_11;
                        scaled_ratio_24 = (float)(1.0 / square_root_11) * combined_products_29;
                        scaled_value_4 = scaled_ratio_23 * combined_products_30;
                        scaled_value = scaled_ratio_23 * combined_products_28;
                      }
                      if ( (float)((float)((float)(scaled_ratio_21 * scaled_value_4) + (float)(scaled_ratio_24 * scaled_ratio_20)) + (float)(scaled_value * scaled_ratio_22)) >= 0.99998748 )
                      {
                        combined_products_31 = weighted_sum_21 - *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687551];
                        combined_products_32 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687552]
                             - *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687552];
                        weighted_sum_22 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835006];
                        component_delta_2 = weighted_sum_20 - weighted_sum_18;
                        weighted_sum_23 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70835006];
                        weighted_sum_24 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007];
                        weighted_sum_25 = *(float *)&dword_140404A6C[scaled_index_7 + 70835007];
                        squared_length = (float)(combined_products_31 * combined_products_31) + (float)(component_delta_2 * component_delta_2);
                        weighted_sum_26 = *(float *)&dword_140404A6C[scaled_index_7 + 70835006];
                        square_root_12 = fsqrt(squared_length + (float)(combined_products_32 * combined_products_32));
                        weighted_sum_27 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70835007];
                        record_byte_offset_3[2] = table_value_7;
                        table_value_8 = record_byte_offset_4[3];
                        record_byte_offset_3[3] = table_value_8;
                        weighted_sum_28 = *(float *)&dword_140404A6C[scaled_index_8 + 70687550];
                        weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index_8 + 70687551];
                        combined_products_33 = *(float *)&dword_140404A6C[scaled_index_9 + 70687550] - weighted_sum_28;
                        scaled_ratio_25 = 1.0 / square_root_12;
                        weighted_sum_30 = *(float *)&dword_140404A6C[scaled_index_8 + 70687552];
                        combined_products_34 = *(float *)&dword_140404A6C[3 * table_value_8 + 70687550] - weighted_sum_28;
                        combined_products_35 = *(float *)&dword_140404A6C[3 * table_value_8 + 70687552] - weighted_sum_30;
                        state_address_5 = (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687551] - weighted_sum_29)
                             * (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687551] - weighted_sum_29);
                        square_root_13 = fsqrt(
                                 (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_9 + 70687551] - weighted_sum_29)
                                               * (float)(*(float *)&dword_140404A6C[scaled_index_9 + 70687551] - weighted_sum_29))
                                       + (float)(combined_products_33 * combined_products_33))
                               + (float)((float)(*(float *)&dword_140404A6C[scaled_index_9 + 70687552] - weighted_sum_30)
                                       * (float)(*(float *)&dword_140404A6C[scaled_index_9 + 70687552] - weighted_sum_30)));
                        square_root_14 = fsqrt((float)(state_address_5 + (float)(combined_products_34 * combined_products_34)) + (float)(combined_products_35 * combined_products_35));
                        product_difference_3 = (float)((float)(weighted_sum_26 - weighted_sum_22) * (float)(1.0 / saved_square_root)) * square_root_14;
                        product_difference_4 = (float)((float)(weighted_sum_25 - weighted_sum_24) * (float)(1.0 / saved_square_root)) * square_root_14;
                        *(float *)&dword_140404A6C[3 * table_value_7 + 70835006] = (float)((float)((float)((float)(weighted_sum_23 - weighted_sum_22)
                                                                                                * scaled_ratio_25)
                                                                                        * square_root_13)
                                                                                + *(float *)&dword_140404A6C[scaled_index_8 + 70835006])
                                                                        + product_difference_3;
                        *(float *)&dword_140404A6C[3 * record_byte_offset_3[2] + 70835007] = (float)((float)((float)((float)(weighted_sum_27 - weighted_sum_24)
                                                                                                  * scaled_ratio_25)
                                                                                          * square_root_13)
                                                                                  + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007])
                                                                          + product_difference_4;
                        *(float *)&dword_140404A6C[3 * record_byte_offset_3[3] + 70835006] = product_difference_3
                                                                          + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835006];
                        *(float *)&dword_140404A6C[3 * record_byte_offset_3[3] + 70835007] = product_difference_4
                                                                          + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007];
                        sub_140184AB0(iteration_count_4);
                        state_word = g_1512DB764;
                        selection_flag = 1;
                        scaled_value = 0.0;
                        if ( iteration_count_3 == g_1512DB764 )
                          goto LABEL_48;
                      }
                    }
                  }
                }
                buffer_cursor_3 = saved_buffer_cursor;
              }
            }
          }
          ++iteration_count_4;
          ++buffer_cursor_4;
          state_address_4 += 3;
          record_byte_offset_4 += 4;
          scaled_value = 0.0;
        }
        while ( iteration_count_4 < state_word );
      }
      ++buffer_cursor_3;
      ++iteration_count_3;
      state_address_3 += 3;
      record_byte_offset_3 += 4;
      saved_buffer_cursor = buffer_cursor_3;
      scaled_value = 0.0;
    }
    while ( iteration_count_3 < state_word );
  }
  while ( selection_flag );
}
#undef selection_flag_2
#undef saved_square_root
#undef saved_buffer_cursor
#undef saved_buffer_cursor_2

//----- (0000000140185D00) ----------------------------------------------------
__int64 sub_140185D00()
{
  int state_word;
  int iteration_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  int selected_word;
  int iteration_count_2;
  unsigned int *buffer_cursor_2;
  int *record_byte_offset;
  float *state_address;
  int iteration_count_3;
  unsigned int *buffer_cursor_3;
  float *state_address_2;
  unsigned int *record_byte_offset_2;
  __int64 scaled_index_2;
  __int64 table_value;
  __int64 scaled_index_3;
  __int64 table_value_2;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  float weighted_sum_3;
  float combined_products_2;
  __int64 scaled_index_4;
  float combined_products_3;
  __int64 scaled_index_5;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  __int64 scaled_index_6;
  float weighted_sum_4;
  float weighted_sum_5;
  float combined_products_7;
  float weighted_sum_6;
  float combined_products_8;
  float combined_products_9;
  float combined_products_10;
  float combined_products_11;
  float combined_products_12;
  float square_root_3;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float square_root_4;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_value;
  float scaled_value_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float combined_products_13;
  float weighted_sum_10;
  float scaled_ratio_12;
  float weighted_sum_11;
  float square_root_5;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float combined_products_14;
  float scaled_ratio_13;
  float weighted_sum_15;
  float square_root_6;
  float product_difference;
  float product_difference_2;
  float square_root_7;
  int iteration_count_4;
  unsigned int *buffer_cursor_4;
  __int64 scaled_index_7;
  __int64 result;
  int iteration_count_5;
  unsigned int *buffer_cursor_5;
  int *record_byte_offset_3;
  float *state_address_3;
  int iteration_count_6;
  unsigned int *buffer_cursor_6;
  float *state_address_4;
  int *record_byte_offset_4;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 loaded_word_2;
  __int64 table_value_5;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  __int64 scaled_index_10;
  __int64 table_value_6;
  float weighted_sum_19;
  float weighted_sum_20;
  float component_delta;
  float weighted_sum_21;
  float component_delta_2;
  float component_delta_3;
  float combined_products_15;
  float combined_products_16;
  float combined_products_17;
  float square_root_8;
  float scaled_ratio_14;
  float scaled_ratio_15;
  float scaled_ratio_16;
  float square_root_9;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float scaled_ratio_19;
  __int64 scaled_index_11;
  float weighted_sum_22;
  float weighted_sum_23;
  float combined_products_18;
  float weighted_sum_24;
  float combined_products_19;
  __int64 table_value_7;
  float combined_products_20;
  float combined_products_21;
  float combined_products_22;
  float combined_products_23;
  float square_root_10;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float scaled_ratio_22;
  float square_root_11;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float scaled_ratio_25;
  float weighted_sum_25;
  float component_delta_4;
  float weighted_sum_26;
  float component_delta_5;
  float weighted_sum_27;
  float squared_length;
  float weighted_sum_28;
  float squared_value;
  float weighted_sum_29;
  float weighted_sum_30;
  __int64 table_value_8;
  float weighted_sum_31;
  float weighted_sum_32;
  float square_root_12;
  float weighted_sum_33;
  float state_address_5;
  float square_root_13;
  float square_root_14;
  float product_difference_3;
  float product_difference_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140185D00[32];
#define frame_word_at_0 (*(int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define saved_call_status (*(unsigned int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define saved_square_root (*(float (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define weighted_sum_34 (*(float (*))(void *)(sr_frame_140185D00 + 24)) /* [rsp+128h] */

  state_word = g_1512DB764;
  iteration_count = 0;
  if ( (int)g_1512DB764 > 0 )
  {
    buffer_cursor = &g_15137B768;
    do
    {
      scaled_index = (int)*(buffer_cursor - 98304);
      ++buffer_cursor;
      ++iteration_count;
      *(buffer_cursor - 1) = dword_140404A6C[46 * scaled_index + 421784738] != 0 ? 2 : 0;
      state_word = g_1512DB764;
    }
    while ( iteration_count < (int)g_1512DB764 );
  }
  do
  {
LABEL_4:
    selected_word = 0;
    iteration_count_2 = 0;
    frame_word_at_0 = 0;
    saved_iteration_count = 0;
    if ( state_word <= 0 )
      break;
    buffer_cursor_2 = &g_15137B768;
    record_byte_offset = (int *)&g_1512DB768;
    state_address = (float *)&g_15134B76C;
    do
    {
      if ( !*buffer_cursor_2 )
      {
        iteration_count_3 = 0;
        if ( state_word > 0 )
        {
          buffer_cursor_3 = &g_15137B768;
          state_address_2 = (float *)&g_15134B76C;
          record_byte_offset_2 = &g_1512DB774;
          do
          {
            if ( (int)*buffer_cursor_3 < 2 )
            {
              scaled_index_2 = (int)*(record_byte_offset_2 - 3);
              table_value = record_byte_offset[1];
              if ( dword_140404A6C[table_value + 70933310] != dword_140404A6C[scaled_index_2 + 70933310] )
                goto LABEL_49;
              scaled_index_3 = (int)*record_byte_offset_2;
              table_value_2 = record_byte_offset[2];
              if ( dword_140404A6C[table_value_2 + 70933310] != dword_140404A6C[scaled_index_3 + 70933310]
                || *(buffer_cursor_2 - 98304) != *(buffer_cursor_3 - 98304)
                || *(buffer_cursor_2 - 0x10000) != *(buffer_cursor_3 - 0x10000)
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70687550] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70687551] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70687552] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70736702] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70736703] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value + 70736704] - *(float *)&dword_140404A6C[3 * scaled_index_2 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * scaled_index_2 + 70835008] != *(float *)&dword_140404A6C[3 * table_value + 70835008]
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687550] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687551] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70687552] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736702] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736703] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_2 + 70736704] - *(float *)&dword_140404A6C[3 * scaled_index_3 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * scaled_index_3 + 70835008] != *(float *)&dword_140404A6C[3 * table_value_2 + 70835008]
                || fabs(*(state_address - 1) - *(state_address_2 - 1)) >= 0.000099999997
                || fabs(*state_address - *state_address_2) >= 0.000099999997
                || fabs(state_address[1] - state_address_2[1]) >= 0.000099999997 )
              {
                goto LABEL_49;
              }
              loaded_word = *record_byte_offset;
              weighted_sum = *(float *)&dword_140404A6C[3 * loaded_word + 70687551];
              weighted_sum_2 = *(float *)&dword_140404A6C[3 * loaded_word + 70687552];
              combined_products = *(float *)&dword_140404A6C[3 * table_value + 70687551] - weighted_sum;
              weighted_sum_3 = *(float *)&dword_140404A6C[3 * loaded_word + 70687550];
              combined_products_2 = *(float *)&dword_140404A6C[3 * table_value + 70687552] - weighted_sum_2;
              scaled_index_4 = (int)*(record_byte_offset_2 - 2);
              combined_products_3 = *(float *)&dword_140404A6C[3 * table_value + 70687550] - weighted_sum_3;
              combined_products_4 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687551] - weighted_sum;
              combined_products_5 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687552] - weighted_sum_2;
              combined_products_6 = *(float *)&dword_140404A6C[3 * scaled_index_4 + 70687550] - weighted_sum_3;
              square_root = fsqrt((float)((float)(combined_products * combined_products) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products_2 * combined_products_2));
              if ( square_root == 0.0 )
              {
                scaled_ratio = 0.0;
                scaled_ratio_2 = 0.0;
                scaled_ratio_3 = 0.0;
              }
              else
              {
                scaled_ratio = combined_products_3 * (float)(1.0 / square_root);
                scaled_ratio_2 = combined_products * (float)(1.0 / square_root);
                scaled_ratio_3 = combined_products_2 * (float)(1.0 / square_root);
              }
              square_root_2 = fsqrt((float)((float)(combined_products_4 * combined_products_4) + (float)(combined_products_6 * combined_products_6)) + (float)(combined_products_5 * combined_products_5));
              if ( square_root_2 == 0.0 )
              {
                scaled_ratio_4 = 0.0;
                scaled_ratio_5 = 0.0;
                scaled_ratio_6 = 0.0;
              }
              else
              {
                scaled_ratio_4 = combined_products_6 * (float)(1.0 / square_root_2);
                scaled_ratio_5 = combined_products_4 * (float)(1.0 / square_root_2);
                scaled_ratio_6 = (float)(1.0 / square_root_2) * combined_products_5;
              }
              if ( (float)((float)((float)(scaled_ratio_2 * scaled_ratio_5) + (float)(scaled_ratio_4 * scaled_ratio)) + (float)(scaled_ratio_6 * scaled_ratio_3)) < 0.99998748 )
                goto LABEL_49;
              scaled_index_6 = 3LL * record_byte_offset[3];
              weighted_sum_4 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687550];
              weighted_sum_5 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687552];
              combined_products_7 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687550] - weighted_sum_4;
              weighted_sum_6 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687551];
              combined_products_8 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687552] - weighted_sum_5;
              combined_products_9 = *(float *)&dword_140404A6C[3 * table_value_2 + 70687551] - weighted_sum_6;
              combined_products_10 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687550] - weighted_sum_4;
              combined_products_11 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687552] - weighted_sum_5;
              combined_products_12 = *(float *)&dword_140404A6C[3 * *(record_byte_offset_2 - 1) + 70687551] - weighted_sum_6;
              square_root_3 = fsqrt((float)((float)(combined_products_9 * combined_products_9) + (float)(combined_products_7 * combined_products_7)) + (float)(combined_products_8 * combined_products_8));
              if ( square_root_3 == 0.0 )
              {
                scaled_ratio_7 = 0.0;
                scaled_ratio_8 = 0.0;
                scaled_ratio_9 = 0.0;
              }
              else
              {
                scaled_ratio_7 = (float)(1.0 / square_root_3) * combined_products_7;
                scaled_ratio_8 = (float)(1.0 / square_root_3) * combined_products_9;
                scaled_ratio_9 = (float)(1.0 / square_root_3) * combined_products_8;
              }
              square_root_4 = fsqrt((float)((float)(combined_products_12 * combined_products_12) + (float)(combined_products_10 * combined_products_10)) + (float)(combined_products_11 * combined_products_11));
              if ( square_root_4 == 0.0 )
              {
                scaled_ratio_11 = 0.0;
                scaled_value = 0.0;
                scaled_value_2 = 0.0;
              }
              else
              {
                scaled_ratio_10 = 1.0 / square_root_4;
                scaled_ratio_11 = (float)(1.0 / square_root_4) * combined_products_10;
                scaled_value = scaled_ratio_10 * combined_products_12;
                scaled_value_2 = scaled_ratio_10 * combined_products_11;
              }
              if ( (float)((float)((float)(scaled_ratio_8 * scaled_value) + (float)(scaled_ratio_11 * scaled_ratio_7)) + (float)(scaled_value_2 * scaled_ratio_9)) >= 0.99998748 )
              {
                weighted_sum_7 = *(float *)&dword_140404A6C[3 * loaded_word + 70835006];
                weighted_sum_8 = *(float *)&dword_140404A6C[3 * table_value + 70835007];
                weighted_sum_9 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70835006];
                combined_products_13 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687550] - weighted_sum_3;
                weighted_sum_10 = *(float *)&dword_140404A6C[3 * table_value + 70835006];
                scaled_ratio_12 = 1.0 / square_root;
                weighted_sum_11 = *(float *)&dword_140404A6C[3 * loaded_word + 70835007];
                weighted_sum_34 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70687552];
                square_root_5 = fsqrt(
                        (float)((float)((float)(weighted_sum_6 - *(float *)&dword_140404A6C[3 * loaded_word + 70687551])
                                      * (float)(weighted_sum_6 - *(float *)&dword_140404A6C[3 * loaded_word + 70687551]))
                              + (float)(combined_products_13 * combined_products_13))
                      + (float)((float)(weighted_sum_34 - *(float *)&dword_140404A6C[3 * loaded_word + 70687552])
                              * (float)(weighted_sum_34 - *(float *)&dword_140404A6C[3 * loaded_word + 70687552])));
                weighted_sum_12 = *(float *)&dword_140404A6C[3 * record_byte_offset[3] + 70835007];
                record_byte_offset[1] = scaled_index_4;
                record_byte_offset[2] = *(record_byte_offset_2 - 1);
                weighted_sum_13 = *(float *)&dword_140404A6C[3 * loaded_word + 70687550];
                weighted_sum_14 = *(float *)&dword_140404A6C[3 * loaded_word + 70687551];
                combined_products_14 = *(float *)&dword_140404A6C[scaled_index_6 + 70687551] - weighted_sum_14;
                scaled_ratio_13 = 1.0 / square_root_5;
                weighted_sum_15 = *(float *)&dword_140404A6C[3 * loaded_word + 70687552];
                scaled_index_5 = 3 * scaled_index_4;
                square_root_6 = fsqrt(
                        (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687551] - weighted_sum_14)
                                      * (float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687551] - weighted_sum_14))
                              + (float)((float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687550] - weighted_sum_13)
                                      * (float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687550] - weighted_sum_13)))
                      + (float)((float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687552] - weighted_sum_15)
                              * (float)(*(float *)&dword_140404A6C[scaled_index_5 + 70687552] - weighted_sum_15)));
                product_difference = (float)((float)(weighted_sum_10 - weighted_sum_7) * scaled_ratio_12) * square_root_6;
                product_difference_2 = (float)((float)(weighted_sum_8 - weighted_sum_11) * scaled_ratio_12) * square_root_6;
                square_root_7 = fsqrt(
                        (float)((float)(combined_products_14 * combined_products_14)
                              + (float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 70687550] - weighted_sum_13)
                                      * (float)(*(float *)&dword_140404A6C[scaled_index_6 + 70687550] - weighted_sum_13)))
                      + (float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 70687552] - weighted_sum_15)
                              * (float)(*(float *)&dword_140404A6C[scaled_index_6 + 70687552] - weighted_sum_15)));
                *(float *)&dword_140404A6C[3 * scaled_index_4 + 70835006] = product_difference + *(float *)&dword_140404A6C[3 * loaded_word + 70835006];
                *(float *)&dword_140404A6C[3 * record_byte_offset[1] + 70835007] = product_difference_2 + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835007];
                *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835006] = (float)((float)((float)(weighted_sum_9 - weighted_sum_7) * scaled_ratio_13) * square_root_7)
                                                                 + (float)(product_difference
                                                                         + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835006]);
                *(float *)&dword_140404A6C[3 * record_byte_offset[2] + 70835007] = (float)((float)((float)(weighted_sum_12 - weighted_sum_11) * scaled_ratio_13) * square_root_7)
                                                                 + (float)(product_difference_2
                                                                         + *(float *)&dword_140404A6C[3 * *record_byte_offset + 70835007]);
                sub_140184AB0(iteration_count_3);
                selected_word = frame_word_at_0;
                *buffer_cursor_3 = dword_140404A6C[g_1512DB764 + 71162687];
                iteration_count_2 = saved_iteration_count;
                state_word = g_1512DB764;
                if ( iteration_count_3 < saved_iteration_count )
                  selected_word = 1;
                frame_word_at_0 = selected_word;
                if ( saved_iteration_count == g_1512DB764 )
                  goto LABEL_4;
              }
              else
              {
LABEL_49:
                iteration_count_2 = saved_iteration_count;
                selected_word = frame_word_at_0;
              }
            }
            ++iteration_count_3;
            state_address_2 += 3;
            record_byte_offset_2 += 4;
            ++buffer_cursor_3;
          }
          while ( iteration_count_3 < state_word );
        }
        if ( !selected_word )
        {
          *buffer_cursor_2 = 1;
          state_word = g_1512DB764;
        }
      }
      ++iteration_count_2;
      state_address += 3;
      record_byte_offset += 4;
      saved_iteration_count = iteration_count_2;
      ++buffer_cursor_2;
    }
    while ( iteration_count_2 < state_word );
  }
  while ( selected_word );
  iteration_count_4 = 0;
  if ( state_word > 0 )
  {
    buffer_cursor_4 = &g_15137B768;
    do
    {
      scaled_index_7 = (int)*(buffer_cursor_4 - 98304);
      ++buffer_cursor_4;
      ++iteration_count_4;
      *(buffer_cursor_4 - 1) = dword_140404A6C[46 * scaled_index_7 + 421784738] != 0 ? 2 : 0;
      state_word = g_1512DB764;
    }
    while ( iteration_count_4 < (int)g_1512DB764 );
  }
  do
  {
LABEL_58:
    result = 0;
    iteration_count_5 = 0;
    saved_call_status = 0;
    if ( state_word <= 0 )
      break;
    buffer_cursor_5 = &g_15137B768;
    record_byte_offset_3 = (int *)&g_1512DB768;
    state_address_3 = (float *)&g_15134B76C;
    do
    {
      if ( !*buffer_cursor_5 )
      {
        iteration_count_6 = 0;
        if ( state_word > 0 )
        {
          buffer_cursor_6 = &g_15137B768;
          state_address_4 = (float *)&g_15134B76C;
          record_byte_offset_4 = (int *)&g_1512DB768;
          do
          {
            if ( (int)*buffer_cursor_6 < 2 )
            {
              table_value_3 = record_byte_offset_4[1];
              table_value_4 = record_byte_offset_3[2];
              if ( dword_140404A6C[table_value_4 + 70933310] != dword_140404A6C[table_value_3 + 70933310] )
                goto LABEL_103;
              loaded_word_2 = *record_byte_offset_4;
              table_value_5 = record_byte_offset_3[3];
              if ( dword_140404A6C[table_value_5 + 70933310] != dword_140404A6C[loaded_word_2 + 70933310] )
                goto LABEL_103;
              if ( *(buffer_cursor_5 - 98304) != *(buffer_cursor_6 - 98304) )
                goto LABEL_103;
              if ( *(buffer_cursor_5 - 0x10000) != *(buffer_cursor_6 - 0x10000) )
                goto LABEL_103;
              scaled_index_8 = 3 * table_value_4;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687550] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687550]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687551] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687551]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70687552] - *(float *)&dword_140404A6C[3 * table_value_3 + 70687552]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736702] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736702]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736703] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736703]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_4 + 70736704] - *(float *)&dword_140404A6C[3 * table_value_3 + 70736704]) >= 0.000099999997 )
                goto LABEL_103;
              if ( *(float *)&dword_140404A6C[3 * table_value_3 + 70835008] != *(float *)&dword_140404A6C[3 * table_value_4 + 70835008] )
                goto LABEL_103;
              scaled_index_9 = 3 * table_value_5;
              if ( fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687550] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687551] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70687552] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736702] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736703] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * table_value_5 + 70736704] - *(float *)&dword_140404A6C[3 * loaded_word_2 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * loaded_word_2 + 70835008] != *(float *)&dword_140404A6C[3 * table_value_5 + 70835008]
                || fabs(*(state_address_3 - 1) - *(state_address_4 - 1)) >= 0.000099999997
                || fabs(*state_address_3 - *state_address_4) >= 0.000099999997
                || fabs(state_address_3[1] - state_address_4[1]) >= 0.000099999997 )
              {
                goto LABEL_103;
              }
              weighted_sum_16 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687550];
              weighted_sum_17 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687551];
              weighted_sum_18 = *(float *)&dword_140404A6C[3 * table_value_5 + 70687552];
              scaled_index_10 = 3LL * *record_byte_offset_3;
              table_value_6 = record_byte_offset_4[3];
              weighted_sum_19 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687552];
              weighted_sum_20 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687550];
              component_delta = weighted_sum_18 - weighted_sum_19;
              weighted_sum_21 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687551];
              component_delta_2 = weighted_sum_16 - weighted_sum_20;
              component_delta_3 = weighted_sum_17 - weighted_sum_21;
              combined_products_15 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687552] - weighted_sum_19;
              combined_products_16 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687550] - weighted_sum_20;
              combined_products_17 = *(float *)&dword_140404A6C[3 * table_value_6 + 70687551] - weighted_sum_21;
              square_root_8 = fsqrt((float)((float)(component_delta_3 * component_delta_3) + (float)(component_delta_2 * component_delta_2)) + (float)(component_delta * component_delta));
              saved_square_root = square_root_8;
              if ( square_root_8 == 0.0 )
              {
                scaled_ratio_14 = 0.0;
                scaled_ratio_15 = 0.0;
                scaled_ratio_16 = 0.0;
              }
              else
              {
                scaled_ratio_14 = component_delta_2 * (float)(1.0 / square_root_8);
                scaled_ratio_15 = component_delta_3 * (float)(1.0 / square_root_8);
                scaled_ratio_16 = component_delta * (float)(1.0 / square_root_8);
              }
              square_root_9 = fsqrt((float)((float)(combined_products_17 * combined_products_17) + (float)(combined_products_16 * combined_products_16)) + (float)(combined_products_15 * combined_products_15));
              if ( square_root_9 == 0.0 )
              {
                scaled_ratio_17 = 0.0;
                scaled_ratio_18 = 0.0;
                scaled_ratio_19 = 0.0;
              }
              else
              {
                scaled_ratio_17 = combined_products_16 * (float)(1.0 / square_root_9);
                scaled_ratio_18 = combined_products_17 * (float)(1.0 / square_root_9);
                scaled_ratio_19 = combined_products_15 * (float)(1.0 / square_root_9);
              }
              if ( (float)((float)((float)(scaled_ratio_15 * scaled_ratio_18) + (float)(scaled_ratio_17 * scaled_ratio_14)) + (float)(scaled_ratio_19 * scaled_ratio_16)) < 0.99998748 )
                goto LABEL_103;
              scaled_index_11 = 3LL * record_byte_offset_3[1];
              weighted_sum_22 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687550];
              weighted_sum_23 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687551];
              combined_products_18 = *(float *)&dword_140404A6C[scaled_index_8 + 70687550] - weighted_sum_22;
              weighted_sum_24 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70687552];
              combined_products_19 = *(float *)&dword_140404A6C[scaled_index_8 + 70687551] - weighted_sum_23;
              table_value_7 = record_byte_offset_4[2];
              combined_products_20 = *(float *)&dword_140404A6C[scaled_index_8 + 70687552] - weighted_sum_24;
              combined_products_21 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687550] - weighted_sum_22;
              combined_products_22 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687551] - weighted_sum_23;
              combined_products_23 = *(float *)&dword_140404A6C[3 * table_value_7 + 70687552] - weighted_sum_24;
              square_root_10 = fsqrt((float)((float)(combined_products_19 * combined_products_19) + (float)(combined_products_18 * combined_products_18)) + (float)(combined_products_20 * combined_products_20));
              if ( square_root_10 == 0.0 )
              {
                scaled_ratio_20 = 0.0;
                scaled_ratio_21 = 0.0;
                scaled_ratio_22 = 0.0;
              }
              else
              {
                scaled_ratio_20 = combined_products_18 * (float)(1.0 / square_root_10);
                scaled_ratio_21 = combined_products_19 * (float)(1.0 / square_root_10);
                scaled_ratio_22 = combined_products_20 * (float)(1.0 / square_root_10);
              }
              square_root_11 = fsqrt((float)((float)(combined_products_22 * combined_products_22) + (float)(combined_products_21 * combined_products_21)) + (float)(combined_products_23 * combined_products_23));
              if ( square_root_11 == 0.0 )
              {
                scaled_ratio_23 = 0.0;
                scaled_ratio_24 = 0.0;
                scaled_ratio_25 = 0.0;
              }
              else
              {
                scaled_ratio_23 = combined_products_21 * (float)(1.0 / square_root_11);
                scaled_ratio_24 = combined_products_22 * (float)(1.0 / square_root_11);
                scaled_ratio_25 = combined_products_23 * (float)(1.0 / square_root_11);
              }
              if ( (float)((float)((float)(scaled_ratio_21 * scaled_ratio_24) + (float)(scaled_ratio_23 * scaled_ratio_20)) + (float)(scaled_ratio_25 * scaled_ratio_22)) >= 0.99998748 )
              {
                weighted_sum_25 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007];
                component_delta_4 = weighted_sum_23 - weighted_sum_21;
                weighted_sum_26 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70835006];
                component_delta_5 = weighted_sum_22 - weighted_sum_20;
                weighted_sum_27 = *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835006];
                squared_length = (float)(component_delta_4 * component_delta_4) + (float)(component_delta_5 * component_delta_5);
                weighted_sum_28 = *(float *)&dword_140404A6C[3 * record_byte_offset_3[1] + 70835007];
                squared_value = squared_length
                     + (float)((float)(weighted_sum_24 - *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687552])
                             * (float)(weighted_sum_24 - *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70687552]));
                weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index_9 + 70835006];
                weighted_sum_30 = *(float *)&dword_140404A6C[scaled_index_9 + 70835007];
                record_byte_offset_3[2] = table_value_7;
                table_value_8 = record_byte_offset_4[3];
                record_byte_offset_3[3] = table_value_8;
                weighted_sum_31 = *(float *)&dword_140404A6C[scaled_index_10 + 70687550];
                weighted_sum_32 = *(float *)&dword_140404A6C[scaled_index_10 + 70687551];
                square_root_12 = 1.0 / fsqrt(squared_value);
                weighted_sum_33 = *(float *)&dword_140404A6C[scaled_index_10 + 70687552];
                state_address_5 = (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687551] - weighted_sum_32)
                     * (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687551] - weighted_sum_32);
                square_root_13 = fsqrt(
                         (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687551] - weighted_sum_32)
                                       * (float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687551] - weighted_sum_32))
                               + (float)((float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687550] - weighted_sum_31)
                                       * (float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687550] - weighted_sum_31)))
                       + (float)((float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687552] - weighted_sum_33)
                               * (float)(*(float *)&dword_140404A6C[scaled_index_11 + 70687552] - weighted_sum_33)));
                square_root_14 = fsqrt(
                         (float)(state_address_5
                               + (float)((float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687550] - weighted_sum_31)
                                       * (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687550] - weighted_sum_31)))
                       + (float)((float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687552] - weighted_sum_33)
                               * (float)(*(float *)&dword_140404A6C[3 * table_value_8 + 70687552] - weighted_sum_33)));
                product_difference_3 = (float)((float)(weighted_sum_29 - weighted_sum_27) * (float)(1.0 / saved_square_root)) * square_root_14;
                product_difference_4 = (float)((float)(weighted_sum_30 - weighted_sum_25) * (float)(1.0 / saved_square_root)) * square_root_14;
                *(float *)&dword_140404A6C[3 * table_value_7 + 70835006] = (float)((float)((float)((float)(weighted_sum_26 - weighted_sum_27) * square_root_12)
                                                                                * square_root_13)
                                                                        + *(float *)&dword_140404A6C[scaled_index_10 + 70835006])
                                                                + product_difference_3;
                *(float *)&dword_140404A6C[3 * record_byte_offset_3[2] + 70835007] = (float)((float)((float)((float)(weighted_sum_28 - weighted_sum_25) * square_root_12)
                                                                                  * square_root_13)
                                                                          + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007])
                                                                  + product_difference_4;
                *(float *)&dword_140404A6C[3 * record_byte_offset_3[3] + 70835006] = product_difference_3
                                                                  + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835006];
                *(float *)&dword_140404A6C[3 * record_byte_offset_3[3] + 70835007] = product_difference_4
                                                                  + *(float *)&dword_140404A6C[3 * *record_byte_offset_3 + 70835007];
                sub_140184AB0(iteration_count_6);
                *buffer_cursor_6 = dword_140404A6C[g_1512DB764 + 71162687];
                result = saved_call_status;
                state_word = g_1512DB764;
                if ( iteration_count_6 < iteration_count_5 )
                  result = 1;
                saved_call_status = result;
                if ( iteration_count_5 == g_1512DB764 )
                  goto LABEL_58;
              }
              else
              {
LABEL_103:
                result = saved_call_status;
              }
            }
            ++iteration_count_6;
            state_address_4 += 3;
            record_byte_offset_4 += 4;
            ++buffer_cursor_6;
          }
          while ( iteration_count_6 < state_word );
        }
        if ( !(_DWORD)result )
        {
          *buffer_cursor_5 = 1;
          state_word = g_1512DB764;
        }
      }
      ++iteration_count_5;
      state_address_3 += 3;
      record_byte_offset_3 += 4;
      ++buffer_cursor_5;
    }
    while ( iteration_count_5 < state_word );
  }
  while ( (_DWORD)result );
  return result;
}
#undef frame_word_at_0
#undef saved_call_status
#undef saved_iteration_count
#undef saved_square_root
#undef weighted_sum_34

