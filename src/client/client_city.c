#include "shared_client.h"

//----- (000000014001A1C0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_14001A1C0(signed int a1, int a2, int a3)
{
  signed int iteration_count;
  __int64 record_word_offset;
  int selection_flag;
  int selection_flag_2;
  __int64 selection_flag_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  int xor_value;
  float component_sum;
  int scaled_index;
  float component_sum_2;
  float *state_address;
  float product_difference;
  float scaled_value;
  int loaded_word;
  float source_component_z;
  float component_delta;
  float selected_scalar;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A1C0[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14001A1C0 + 0)) /* [rsp+8h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_14001A1C0 + 80)) /* [rsp+58h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14001A1C0 + 96)) /* [rsp+68h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14001A1C0 + 100)) /* [rsp+6Ch] */
#define unused_frame_slot_104 (*(sr_frame_i128 (*))(void *)(sr_frame_14001A1C0 + 104)) /* [rsp+70h] */

  iteration_count = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279000);
  unused_written_slot = 4;
  unused_written_slot_2 = 5;
  record_word_offset = 768LL * a3 + 12352LL * a2;
  if ( *(unsigned int *)((char *)&g_1ABC89C40 + record_word_offset) == 1 )
  {
    selection_flag = 1;
    selection_flag_2 = 1;
    selection_flag_3 = 1;
    if ( a1 >= 2 )
    {
      weighted_sum = *(float *)((char *)&g_1ABC89C44 + record_word_offset);
      goto LABEL_6;
    }
  }
  else
  {
    selection_flag = 0;
    selection_flag_2 = 0;
    selection_flag_3 = 0;
  }
  weighted_sum = 1.0
     - (float)(*(float *)((char *)&g_1ABC89C48 + record_word_offset)
             + *(float *)((char *)&g_1ABC89C44 + record_word_offset));
LABEL_6:
  weighted_sum_2 = *(float *)((char *)&g_1ABC89C48 + record_word_offset);
  weighted_sum_3 = *(float *)((char *)&g_1ABC89C4C + record_word_offset);
  weighted_sum_4 = *(float *)((char *)&g_1ABC89C50 + record_word_offset);
  if ( weighted_sum <= 0.0 )
  {
    xor_value = selection_flag ^ 1;
  }
  else
  {
    unused_written_slot = 6;
    xor_value = selection_flag_2 ^ 1;
    sub_140019940(a1, 0.0, 0.0, 0.0, weighted_sum, 1.0, 0.0625, 8 * xor_value + 18, SR_VEC_LANES(128, si128, i32));
  }
  component_sum = weighted_sum_2 + weighted_sum;
  scaled_index = 8 * xor_value;
  if ( component_sum < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[2] = 6;
    sub_140019940(a1, component_sum, 0.0, 0.0, 1.0 - component_sum, 1.0, 0.0625, scaled_index + 6, SR_VEC_LANES(128, si128, i32));
  }
  if ( weighted_sum_3 > 0.0 )
  {
    unused_written_slot_2 = 6;
    sub_140019940(a1, 0.0, 0.0, 0.0, 1.0, weighted_sum_3, 0.0625, scaled_index + 34, SR_VEC_LANES(128, si128, i32));
  }
  component_sum_2 = weighted_sum_4 + weighted_sum_3;
  if ( component_sum_2 < 1.0 )
  {
    SR_VEC_LANES(128, si128, i32)[0] = 6;
    sub_140019940(a1, 0.0, component_sum_2, 0.0, 1.0, 1.0 - component_sum_2, 0.0625, scaled_index + 3, SR_VEC_LANES(128, si128, i32));
  }
  if ( *(int *)((char *)&g_1ABC89DB8 + record_word_offset) > 0 )
  {
    state_address = (float *)((char *)&g_1ABC89DC8 + record_word_offset);
    do
    {
      if ( selection_flag_3 && a1 >= 2 )
      {
        product_difference = *(state_address - 1);
        scaled_value = *state_address;
      }
      else
      {
        scaled_value = *state_address;
        product_difference = 1.0 - (float)(*state_address + *(state_address - 1));
      }
      loaded_word = *((_DWORD *)state_address - 3);
      source_component_z = state_address[2];
      if ( loaded_word )
      {
        if ( loaded_word == 1 )
        {
          component_delta = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          unused_written_slot = 6;
          selected_scalar = 0.1875;
          unused_written_slot_2 = 6;
        }
        else if ( loaded_word == 2 )
        {
          component_delta = -0.0625;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FA0);
          unused_written_slot = 6;
          selected_scalar = 0.3125;
          unused_written_slot_2 = 6;
        }
        else
        {
          component_delta = 0.0078125;
          si128 = _mm_load_si128((     __m128i *)&xmmword_140278FC0);
          unused_written_slot = 7;
          selected_scalar = 0.015625;
          unused_written_slot_2 = 7;
        }
      }
      else
      {
        component_delta = 0.0;
        selected_scalar = 0.0625;
      }
      sub_140019940(a1, product_difference, state_address[1], component_delta, scaled_value, source_component_z, selected_scalar, 0x3Fu, SR_VEC_LANES(128, si128, i32));
      ++iteration_count;
      state_address += 6;
    }
    while ( iteration_count < *(int *)((char *)&g_1ABC89DB8 + record_word_offset) );
  }
  return 0; /* caller ignores native EAX */
}
#undef unused_frame_slot_0
#undef si128
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_frame_slot_104

//----- (0000000140023AC0) ----------------------------------------------------
__int64            sub_140023AC0(
        int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9)
{
  unsigned int float_word;
  unsigned int iteration_count;
  unsigned int input_value;
  unsigned int layer;
  int i;
  int j;
  int k;
  int input_value_2;
  int float_word_2;
  int input_value_3;
  signed int integer_difference;
  __int64 input_value_4;
  __int64 input_value_5;
  __int64 remaining_count;
  unsigned int iteration_count_2;
  __int64 record_byte_offset;
  __int64 element_index;
  unsigned int iteration_count_3;
  unsigned int *state_address;
  __int64 remaining_count_2;
  int iteration_count_4;
  __int64 record_byte_offset_2;
  __int64 element_index_2;
  __int64 remaining_count_3;
  int iteration_count_5;
  __int64 remaining_count_4;
  unsigned int *state_address_2;
  int scaled_index;
  signed int y;
  __int64 record_byte_offset_3;
  __int64 remaining_count_5;
  __int64 element_index_3;
  signed int z;
  __int64 remaining_count_6;
  __int64 element_index_4;
  signed int x;
  __int64 integer_sum;
  __int64 remaining_count_7;
  unsigned int *state_address_3;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  unsigned int table_value;
  unsigned int table_value_2;
  int option_flags;
  int scaled_index_5;
  unsigned int scaled_index_6;
  unsigned int scaled_index_7;
  __int64 shifted_bits;
  unsigned int table_value_3;
  unsigned int table_value_4;
  __int64 shifted_bits_2;
  unsigned int scaled_index_8;
  unsigned int scaled_index_9;
  int call_result;
  __int64 cached_remaining_count;
  unsigned int scaled_index_10;
  __int64 scaled_index_11;
  unsigned int *record_byte_offset_4;
  int lobyte_result;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 remaining_count_8;
  unsigned int x_2;
  unsigned int y_2;
  unsigned int z_2;
  __int64 remaining_count_9;
  __int64 record_byte_offset_5;
  unsigned int iteration_count_6;
  __int64 running_total;
  __int64 element_index_5;
  unsigned int iteration_count_7;
  __int64 remaining_count_10;
  unsigned int iteration_count_8;
  __int64 remaining_count_11;
  unsigned int *state_address_4;
  __int64 remaining_count_12;
  __int64 masked_bits;
  __int64 lookup_index;
  int cached_input_value;
  unsigned int cached_input_value_2;
  __int64 scaled_index_14;
  unsigned int state_word;
  unsigned int integer_sum_2;
  unsigned int float_word_3;
  int integer_sum_3;
  float component_sum;
  __m128i converted_vector;
  int integer_sum_4;
  unsigned int float_word_4;
  float scaled_value;
  double angle;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_sum_2;
  float scaled_value_2;
  unsigned int dword2_result;
  float weighted_sum_4;
  unsigned int comparison_operand;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float combined_products;
  unsigned int comparison_operand_2;
  int iteration_count_9;
  __int64 scaled_index_15;
  float state_address_5;
  unsigned int comparison_operand_3;
  unsigned int saved_cached_xmmword_140278d30;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  float weighted_sum_8;
  float scaled_value_3;
  double angle_2;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float component_sum_3;
  float component_sum_4;
  float scaled_value_4;
  float component_sum_5;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float comparison_operand_4;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  double angle_3;
  unsigned int state_address_6;
  int saved_iteration_count;
  unsigned int masked_bits_2;
  int iteration_count_10;
  unsigned int masked_bits_3;
  unsigned int masked_bits_4;
  unsigned int masked_bits_5;
  unsigned int masked_bits_6;
  unsigned int masked_bits_7;
  float saved_square_root;
  int *state_address_7;
  int cached_iteration_count;
  float combined_products_2;
  float cached_square_root;
  float combined_products_3;
  float square_root;
  __int64 scaled_index_20;
  unsigned int cached_item_block_region_count;
  __int64 scaled_index_21;
  unsigned int cached_item_block_region_count_2;
  __int64 scaled_index_22;
  unsigned int state_word_2;
  unsigned int state_word_3;
  unsigned int state_word_4;
  unsigned int state_word_5;
  unsigned int state_word_6;
  __int128 masked_bits_8;
  int cached_input_value_3;
  int cached_input_value_4;
  unsigned int state_word_7;
  __int64 scaled_index_23;
  unsigned int *state_address_8;
  __int64 scaled_index_24;
  float weighted_sum_22;
  unsigned int state_address_9;
  float state_address_10;
  unsigned int state_word_8;
  int integer_sum_5;
  unsigned int input_value_6;
  __int128 state_word_9;
  unsigned int state_word_10;
  __int64 scaled_index_25;
  unsigned int *state_address_11;
  int state_word_11;
  int masked_bits_9;
  __int64 running_total_2;
  __int64 remaining_count_13;
  float weighted_sum_23;
  float *record_byte_offset_6;
  __int64 scaled_index_26;
  __int64 element_index_6;
  __int64 scaled_index_27;
  float state_address_12;
  float state_address_13;
  float weighted_sum_24;
  float state_address_14;
  float weighted_sum_25;
  __int64 table_value_5;
  __int64 cached_table_value;
  __int64 integer_difference_2;
  float product_difference;
  __int64 scaled_index_28;
  float weighted_sum_26;
  float state_address_15;
  float source_float_4;
  float state_address_16;
  float weighted_sum_27;
  float source_float_5;
  __int64 scaled_index_29;
  __int64 scaled_index_30;
  float source_component_w;
  float state_address_17;
  float state_address_18;
  float weighted_sum_28;
  float state_address_19;
  float source_float_8;
  float weighted_sum_29;
  float source_float_9;
  __int64 scaled_index_31;
  float source_float_7;
  __int64 scaled_index_32;
  float weighted_sum_30;
  float state_address_20;
  float state_address_21;
  float source_float_12;
  float state_address_22;
  float weighted_sum_31;
  float source_float_13;
  __int64 scaled_index_33;
  float source_float_11;
  __int64 scaled_index_34;
  __int64 scaled_index_35;
  float state_address_23;
  float weighted_sum_32;
  float state_address_24;
  float weighted_sum_33;
  float state_address_25;
  __int64 scaled_index_36;
  float *record_byte_offset_7;
  float product_difference_2;
  float scaled_value_5;
  float source_component_y;
  __int64 scaled_index_37;
  float weighted_sum_34;
  __int64 scaled_index_38;
  float state_address_26;
  float weighted_sum_35;
  float state_address_27;
  float weighted_sum_36;
  float state_address_28;
  __int64 scaled_index_39;
  __int64 scaled_index_40;
  float weighted_sum_37;
  float weighted_sum_38;
  unsigned int state_address_29;
  float state_address_30;
  float cached_input_value_5;
  unsigned int float_word_5;
  float scaled_value_6;
  float cached_input_value_6;
  float cached_input_value_7;
  __int128 state_word_12;
  __int64 scaled_index_41;
  unsigned int *state_address_31;
  __int64 scaled_index_42;
  __int64 scaled_index_43;
  __int64 scaled_index_44;
  __int64 scaled_index_45;
  bool comparison_result;
  float scaled_value_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140023AC0[528];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 0)) /* [rsp+0h] */
#define input_value_7 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 48)) /* [rsp+30h] */
#define input_value_8 (*(int (*))(void *)(sr_frame_140023AC0 + 52)) /* [rsp+34h] */
#define input_value_9 (*(unsigned int (*))(void *)(sr_frame_140023AC0 + 56)) /* [rsp+38h] */
#define cached_integer_difference (*(signed int (*))(void *)(sr_frame_140023AC0 + 60)) /* [rsp+3Ch] */
#define saved_element_index (*(__int64 (*))(void *)(sr_frame_140023AC0 + 64)) /* [rsp+40h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140023AC0 + 72)) /* [rsp+48h] */
#define saved_record_byte_offset (*(__int64 (*))(void *)(sr_frame_140023AC0 + 80)) /* [rsp+50h] */
#define saved_element_index_2 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 88)) /* [rsp+58h] */
#define scaled_value_8 (*(float (*))(void *)(sr_frame_140023AC0 + 96)) /* [rsp+60h] */
#define saved_remaining_count_2 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 104)) /* [rsp+68h] */
#define saved_element_index_3 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 112)) /* [rsp+70h] */
#define saved_z (*(signed int (*))(void *)(sr_frame_140023AC0 + 120)) /* [rsp+78h] */
#define saved_y (*(signed int (*))(void *)(sr_frame_140023AC0 + 124)) /* [rsp+7Ch] */
#define saved_element_index_4 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 128)) /* [rsp+80h] */
#define saved_remaining_count_3 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 136)) /* [rsp+88h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_140023AC0 + 144)) /* [rsp+90h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_140023AC0 + 160)) /* [rsp+A0h] */
#define frame_float_at_176 (*(float (*))(void *)(sr_frame_140023AC0 + 176)) /* [rsp+B0h] */
#define loaded_word (*(__int16 (*))(void *)(sr_frame_140023AC0 + 184)) /* [rsp+B8h] */
#define unused_written_slot (*(__int16 (*))(void *)(sr_frame_140023AC0 + 186)) /* [rsp+BAh] */
#define unused_written_slot_2 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 188)) /* [rsp+BCh] */
#define unused_written_slot_3 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 190)) /* [rsp+BEh] */
#define unused_written_slot_4 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 192)) /* [rsp+C0h] */
#define unused_written_slot_5 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 194)) /* [rsp+C2h] */
#define unused_written_slot_6 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 196)) /* [rsp+C4h] */
#define unused_written_slot_7 (*(__int16 (*))(void *)(sr_frame_140023AC0 + 198)) /* [rsp+C6h] */
#define unused_frame_slot_200 (*(__int64 (*))(void *)(sr_frame_140023AC0 + 200)) /* [rsp+C8h] */
#define saved_masked_bits (*(int (*))(void *)(sr_frame_140023AC0 + 512)) /* [rsp+200h] */

  float_word = a3;
  iteration_count = a4;
  input_value_8 = a3;
  input_value = a2;
  input_value_9 = a4;
  layer = a1;
  input_value_7 = a2;
  scaled_value_8 = *(float *)&a1;
  if ( game_type == 1 )
  {
    for ( i = 0; i < 64; ++i )
    {
      for ( j = 0; j < 64; ++j )
      {
        for ( k = 0; k < 64; ++k )
        {
          sub_140012670(layer, input_value + k, float_word + i, iteration_count + j);
          float_word = input_value_8;
          input_value = input_value_7;
        }
      }
    }
  }
  input_value_2 = a7;
  float_word_2 = a6;
  input_value_3 = a5;
  integer_difference = a8;
  saved_remaining_count = a7;
  if ( a8 > 5 )
    integer_difference = -1;
  input_value_4 = a6;
  cached_integer_difference = integer_difference;
  input_value_5 = a5;
  saved_element_index_3 = a5;
  remaining_count = a7;
  saved_remaining_count_2 = a6;
  if ( a7 > 0 )
  {
    iteration_count_2 = float_word;
    record_byte_offset = 0;
    saved_element_index = 0;
    do
    {
      element_index = 0;
      if ( input_value_4 > 0 )
      {
        do
        {
          if ( input_value_5 > 0 )
          {
            iteration_count_3 = input_value;
            state_address = &dword_140404A6C[1216 * element_index + 451221709 + 1216 * record_byte_offset];
            remaining_count_2 = input_value_5;
            do
            {
              if ( *state_address )
                sub_140012670(layer, iteration_count_3, iteration_count_2, iteration_count);
              ++iteration_count_3;
              state_address += 19;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            input_value_5 = saved_element_index_3;
            record_byte_offset = saved_element_index;
            input_value_4 = saved_remaining_count_2;
          }
          input_value = input_value_7;
          ++iteration_count;
          ++element_index;
        }
        while ( element_index < input_value_4 );
        remaining_count = saved_remaining_count;
        iteration_count = input_value_9;
      }
      input_value = input_value_7;
      record_byte_offset += 64;
      ++iteration_count_2;
      saved_element_index = record_byte_offset;
      saved_remaining_count = --remaining_count;
    }
    while ( remaining_count );
    integer_difference = cached_integer_difference;
    input_value_3 = a5;
    input_value_2 = a7;
    float_word_2 = a6;
  }
  iteration_count_4 = 0;
  if ( input_value_2 <= 0 )
  {
    lookup_index = integer_difference;
    dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
    dword_140404A6C[14019 * item_block_region_count + 225654181] = 0;
    goto LABEL_121;
  }
  record_byte_offset_2 = 0;
  saved_record_byte_offset = 0;
  do
  {
    element_index_2 = 0;
    saved_element_index = 0;
    if ( float_word_2 > 0 )
    {
      remaining_count_3 = (unsigned int)float_word_2;
      saved_remaining_count = (unsigned int)float_word_2;
      do
      {
        if ( input_value_3 > 0 )
        {
          iteration_count_5 = input_value_7;
          remaining_count_4 = (unsigned int)input_value_3;
          state_address_2 = &dword_140404A6C[1216 * record_byte_offset_2 + 451221716 + 1216 * element_index_2];
          do
          {
            scaled_index = *(state_address_2 - 7);
            if ( scaled_index )
            {
              loaded_word = *(_WORD *)state_address_2;
              unused_written_slot = *((_WORD *)state_address_2 + 1);
              unused_written_slot_2 = *((_WORD *)state_address_2 + 2);
              unused_written_slot_3 = *((_WORD *)state_address_2 + 3);
              unused_written_slot_4 = *((_WORD *)state_address_2 + 4);
              unused_written_slot_5 = *((_WORD *)state_address_2 + 5);
              unused_written_slot_6 = *((_WORD *)state_address_2 + 6);
              unused_written_slot_7 = *((_WORD *)state_address_2 + 7);
              sub_14000F830(layer, iteration_count_5, iteration_count_4 + input_value_8, iteration_count, scaled_index | (a9 << 24), &loaded_word);
              if ( iteration_count_4 == g_1AE1C9508 )
                sub_14003FA40(iteration_count_5, iteration_count, (float)(iteration_count_4 + input_value_8) * 4.0);
            }
            ++iteration_count_5;
            state_address_2 += 19;
            --remaining_count_4;
          }
          while ( remaining_count_4 );
          element_index_2 = saved_element_index;
          remaining_count_3 = saved_remaining_count;
          record_byte_offset_2 = saved_record_byte_offset;
          input_value_3 = a5;
        }
        ++element_index_2;
        ++iteration_count;
        --remaining_count_3;
        saved_element_index = element_index_2;
        saved_remaining_count = remaining_count_3;
      }
      while ( remaining_count_3 );
      input_value_2 = a7;
      float_word_2 = a6;
    }
    iteration_count = input_value_9;
    record_byte_offset_2 += 64;
    ++iteration_count_4;
    saved_record_byte_offset = record_byte_offset_2;
  }
  while ( iteration_count_4 < input_value_2 );
  y = input_value_8;
  saved_remaining_count = cached_integer_difference;
  record_byte_offset_3 = 0;
  remaining_count_5 = (unsigned int)input_value_2;
  saved_remaining_count_2 = 0;
  saved_y = input_value_8;
  saved_element_index_3 = (unsigned int)input_value_2;
  do
  {
    element_index_3 = 0;
    saved_element_index_4 = 0;
    if ( float_word_2 <= 0 )
      goto LABEL_102;
    z = input_value_9;
    remaining_count_6 = (unsigned int)float_word_2;
    saved_remaining_count_3 = (unsigned int)float_word_2;
    saved_z = input_value_9;
    do
    {
      element_index_4 = 0;
      saved_element_index_2 = 0;
      if ( input_value_3 <= 0 )
        goto LABEL_100;
      x = input_value_7;
      integer_sum = record_byte_offset_3 + element_index_3;
      remaining_count_7 = (unsigned int)input_value_3;
      state_address_3 = &dword_140404A6C[1216 * record_byte_offset_3 + 451221731 + 1216 * element_index_3];
      saved_element_index = record_byte_offset_3 + element_index_3;
      saved_record_byte_offset = (unsigned int)input_value_3;
      do
      {
        scaled_index_2 = *(state_address_3 - 21);
        if ( !scaled_index_2 )
          goto LABEL_98;
        loaded_word = *((_WORD *)state_address_3 - 22);
        unused_written_slot = *((_WORD *)state_address_3 - 21);
        unused_written_slot_2 = *((_WORD *)state_address_3 - 20);
        unused_written_slot_3 = *((_WORD *)state_address_3 - 19);
        unused_written_slot_4 = *((_WORD *)state_address_3 - 18);
        unused_written_slot_5 = *((_WORD *)state_address_3 - 17);
        unused_written_slot_6 = *((_WORD *)state_address_3 - 16);
        unused_written_slot_7 = *((_WORD *)state_address_3 - 15);
        if ( scaled_index_2 == 0xFFFF )
        {
          scaled_index_3 = *(state_address_3 - 19);
          scaled_index_4 = *(state_address_3 - 18);
          table_value = state_address_3[1197];
          table_value_2 = state_address_3[1];
          option_flags = scaled_index_3
              | (16
               * (table_value_2 | (16 * (table_value | (16 * (scaled_index_4 | (16 * (*(state_address_3 - 17) | (2 * (*(state_address_3 - 16) | (2 * *(state_address_3 - 20))))))))))));
          if ( !scaled_index_3 )
          {
            if ( !scaled_index_4 )
            {
              scaled_index_5 = *(state_address_3 - 38);
              if ( (unsigned int)(scaled_index_5 - 3) <= 0xC
                || scaled_index_5 == 1
                || (scaled_index_6 = dword_140404A6C[1216 * integer_sum + 451220497 + 19 * element_index_4], scaled_index_6 - 3 <= 0xC)
                || scaled_index_6 == 1 )
              {
                option_flags |= 2u;
              }
            }
            if ( !table_value_2 )
            {
              if ( *state_address_3 - 3 <= 0xC
                || *state_address_3 == 1
                || (scaled_index_7 = dword_140404A6C[1216 * saved_element_index + 451220516 + 19 * element_index_4], scaled_index_7 - 3 <= 0xC)
                || scaled_index_7 == 1 )
              {
                option_flags |= 0x20u;
              }
            }
            integer_sum = saved_element_index;
          }
          if ( !table_value )
          {
            if ( !table_value_2 )
            {
              shifted_bits = 19 * (element_index_4 + (integer_sum << 6) + 65);
              table_value_3 = dword_140404A6C[shifted_bits + 451221712];
              if ( table_value_3 - 3 <= 0xC || table_value_3 == 1 || (table_value_4 = dword_140404A6C[shifted_bits + 451221713], table_value_4 - 3 <= 0xC) || table_value_4 == 1 )
                option_flags |= 0x200u;
            }
            if ( !scaled_index_4 )
            {
              shifted_bits_2 = element_index_4 + ((integer_sum + 1) << 6);
              scaled_index_8 = dword_140404A6C[19 * shifted_bits_2 + 451221693];
              if ( scaled_index_8 - 3 <= 0xC
                || scaled_index_8 == 1
                || (scaled_index_9 = dword_140404A6C[19 * shifted_bits_2 + 451221713], scaled_index_9 - 3 <= 0xC)
                || scaled_index_9 == 1 )
              {
                option_flags |= 0x2000u;
              }
            }
          }
          call_result = sub_14001A990(0, option_flags);
          if ( !(unsigned int)sr_world_block_unknown_3008_at(layer, x, y, z) )
            sub_140016130(layer, x, y, z, call_result | (a9 << 24) | 0x80000000, &loaded_word);
          element_index_4 = saved_element_index_2;
          remaining_count_7 = saved_record_byte_offset;
LABEL_74:
          if ( cached_integer_difference == -1 )
            goto LABEL_98;
          goto LABEL_75;
        }
        if ( scaled_index_2 >= 0 )
          goto LABEL_74;
        sub_140016130(layer, x, y, z, scaled_index_2 | (a9 << 24) | 0x80000000, &loaded_word);
        if ( cached_integer_difference != -1 )
        {
          if ( (unsigned __int16)scaled_index_2 >= (int)g_150F61038
            && (unsigned __int16)scaled_index_2 < (signed int)(g_150F61038 + 4) )
          {
            scaled_index_12 = 5873 * saved_remaining_count;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831491] = (float)((float)x * 4.0) + 0.25;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831492] = (float)((float)y * 4.0) + 0.125;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831493] = (float)((float)z * 4.0) + 0.25;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831494] = (float)((float)(x + 1) * 4.0) - 0.25;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831495] = (float)((float)(y + 1) * 4.0) - 0.125;
            *(float *)&dword_140404A6C[scaled_index_12 + 283831496] = (float)((float)(z + 1) * 4.0) - 0.25;
          }
          if ( (unsigned __int16)scaled_index_2 >= (int)g_149F54C00
            && (unsigned __int16)scaled_index_2 < (signed int)(g_149F54C00 + 4) )
          {
            cached_remaining_count = saved_remaining_count;
            scaled_index_13 = 5873 * saved_remaining_count;
            *(float *)&dword_140404A6C[scaled_index_13 + 283831498] = (float)((float)x * 4.0) + 2.0;
            *(float *)&dword_140404A6C[scaled_index_13 + 283831499] = (float)((float)y * 4.0) + 2.0;
            *(float *)&dword_140404A6C[scaled_index_13 + 283831500] = (float)((float)z * 4.0) + 2.0;
            goto LABEL_76;
          }
LABEL_75:
          cached_remaining_count = saved_remaining_count;
LABEL_76:
          if ( game_type == 7 )
            goto LABEL_97;
          scaled_index_10 = (unsigned __int16)*(state_address_3 - 21);
          if ( scaled_index_10 < g_14500CA14 || scaled_index_10 > g_14500CA20 )
            goto LABEL_97;
          scaled_index_11 = 5873 * cached_remaining_count;
          record_byte_offset_4 = &dword_140404A6C[scaled_index_11 + 283831581];
          lobyte_result = ((unsigned __int8)*(state_address_3 - 21) - LOBYTE(g_14500CA14) - 2) & 3;
          dword_140404A6C[scaled_index_11 + 283831580] = x;
          dword_140404A6C[scaled_index_11 + 283831581] = y;
          dword_140404A6C[scaled_index_11 + 283831582] = z;
          dword_140404A6C[scaled_index_11 + 283831583] = lobyte_result;
          dword_140404A6C[scaled_index_11 + 283831584] = x;
          dword_140404A6C[scaled_index_11 + 283831585] = y;
          dword_140404A6C[scaled_index_11 + 283831586] = z;
          dword_140404A6C[scaled_index_11 + 283831587] = lobyte_result;
          switch ( lobyte_result )
          {
            case 0:
              dword_140404A6C[scaled_index_11 + 283831584] = x + 1;
              break;
            case 1:
              goto LABEL_93;
            case 2:
              dword_140404A6C[scaled_index_11 + 283831584] = x + 1;
              break;
            case 3:
LABEL_93:
              dword_140404A6C[scaled_index_11 + 283831586] = z + 1;
              break;
          }
          remaining_count_8 = 2;
          do
          {
            x_2 = *(record_byte_offset_4 - 1);
            y_2 = *record_byte_offset_4;
            z_2 = record_byte_offset_4[1];
            sr_world_set_block_unknown_4808(0, x_2, *record_byte_offset_4, z_2, (record_byte_offset_4[2] << 10) | 6);
            sr_world_mark_block_record(0, x_2, y_2, z_2);
            record_byte_offset_4 += 4;
            --remaining_count_8;
          }
          while ( remaining_count_8 );
          z = saved_z;
          y = saved_y;
          layer = LODWORD(scaled_value_8);
        }
LABEL_97:
        element_index_4 = saved_element_index_2;
        remaining_count_7 = saved_record_byte_offset;
LABEL_98:
        integer_sum = saved_element_index;
        ++element_index_4;
        ++x;
        saved_element_index_2 = element_index_4;
        state_address_3 += 19;
        saved_record_byte_offset = --remaining_count_7;
      }
      while ( remaining_count_7 );
      input_value_3 = a5;
      element_index_3 = saved_element_index_4;
      remaining_count_6 = saved_remaining_count_3;
      record_byte_offset_3 = saved_remaining_count_2;
LABEL_100:
      ++z;
      ++element_index_3;
      --remaining_count_6;
      saved_z = z;
      saved_remaining_count_3 = remaining_count_6;
      saved_element_index_4 = element_index_3;
    }
    while ( remaining_count_6 );
    remaining_count_5 = saved_element_index_3;
    float_word_2 = a6;
LABEL_102:
    ++y;
    record_byte_offset_3 += 64;
    --remaining_count_5;
    saved_y = y;
    saved_element_index_3 = remaining_count_5;
    saved_remaining_count_2 = record_byte_offset_3;
  }
  while ( remaining_count_5 );
  remaining_count_9 = (unsigned int)a7;
  record_byte_offset_5 = 0;
  iteration_count_6 = input_value_8;
  saved_element_index_4 = 0;
  saved_element_index = (unsigned int)a7;
  dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
  dword_140404A6C[14019 * item_block_region_count + 225654181] = 0;
  running_total = 0;
  saved_remaining_count_3 = 0;
  do
  {
    element_index_5 = 0;
    saved_element_index_3 = 0;
    if ( float_word_2 > 0 )
    {
      iteration_count_7 = input_value_9;
      remaining_count_10 = (unsigned int)float_word_2;
      saved_remaining_count_2 = (unsigned int)float_word_2;
      do
      {
        if ( input_value_3 > 0 )
        {
          iteration_count_8 = input_value_7;
          remaining_count_11 = (unsigned int)input_value_3;
          state_address_4 = &dword_140404A6C[1216 * record_byte_offset_5 + 451221727 + 1216 * element_index_5];
          do
          {
            if ( *state_address_4 )
            {
              sub_140016F60(layer, iteration_count_8, iteration_count_6, iteration_count_7, *state_address_4);
              remaining_count_12 = (int)dword_140404A6C[948 * (*state_address_4 & 0x3FF) + 272299416];
              if ( remaining_count_12 > 0 )
              {
                masked_bits = 948LL * (*state_address_4 & 0x3FF);
                do
                {
                  if ( dword_140404A6C[masked_bits + 272299433] == 39 )
                  {
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654182
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]] = iteration_count_8;
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654183
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]] = iteration_count_6;
                    dword_140404A6C[14019 * item_block_region_count
                                  + 225654184
                                  + 4 * dword_140404A6C[14019 * item_block_region_count + 225654181]++] = iteration_count_7;
                  }
                  masked_bits += 29;
                  --remaining_count_12;
                }
                while ( remaining_count_12 );
              }
            }
            ++iteration_count_8;
            state_address_4 += 19;
            --remaining_count_11;
          }
          while ( remaining_count_11 );
          element_index_5 = saved_element_index_3;
          remaining_count_10 = saved_remaining_count_2;
          record_byte_offset_5 = saved_element_index_4;
          input_value_3 = a5;
        }
        ++element_index_5;
        ++iteration_count_7;
        --remaining_count_10;
        saved_element_index_3 = element_index_5;
        saved_remaining_count_2 = remaining_count_10;
      }
      while ( remaining_count_10 );
      running_total = saved_remaining_count_3;
      remaining_count_9 = saved_element_index;
      float_word_2 = a6;
    }
    running_total += 311296;
    record_byte_offset_5 += 64;
    ++iteration_count_6;
    saved_remaining_count_3 = running_total;
    --remaining_count_9;
    saved_element_index_4 = record_byte_offset_5;
    saved_element_index = remaining_count_9;
  }
  while ( remaining_count_9 );
  lookup_index = saved_remaining_count;
  integer_difference = cached_integer_difference;
LABEL_121:
  cached_input_value = input_value_8;
  if ( integer_difference != -1 )
  {
    cached_input_value_2 = input_value_9;
    scaled_index_14 = 5873 * lookup_index;
    state_word = g_1AF0C9518;
    integer_sum_2 = input_value_7 + g_1AF0C951C + g_1AF0C9510;
    *(float *)&float_word_3 = (float)input_value_8 * 4.0;
    integer_sum_3 = g_1AF0C9518 + input_value_9;
    frame_float_at_176 = 1.0;
    component_sum = (float)(int)(g_1AF0C9510 + input_value_7);
    dword_140404A6C[scaled_index_14 + 283831486] = float_word_3;
    scaled_value_8 = *(float *)&float_word_3;
    converted_vector = _mm_cvtsi32_si128(integer_sum_2);
    integer_sum_4 = cached_input_value_2 + state_word + g_1AF0C9524;
    *(float *)&float_word_4 = component_sum * 4.0;
    dword_140404A6C[scaled_index_14 + 283831485] = float_word_4;
    *(float *)&dword_140404A6C[scaled_index_14 + 283831487] = (float)integer_sum_3 * 4.0;
    *(float *)SR_VEC_LANES(128, converted_vector, i32) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 4.0;
    dword_140404A6C[scaled_index_14 + 283831488] = SR_VEC_LANES(128, converted_vector, i32)[0];
    *(float *)&dword_140404A6C[scaled_index_14 + 283831489] = (float)(cached_input_value + 1) * 4.0;
    *(float *)&dword_140404A6C[scaled_index_14 + 283831490] = (float)integer_sum_4 * 4.0;
    scaled_value = (float)integer_sum_4 * 4.0;
    *(_QWORD *)&angle = dword_140404A6C[5873 * lookup_index + 283831497];
    weighted_sum = *(float *)&dword_140404A6C[5873 * lookup_index + 283831486];
    weighted_sum_2 = *(float *)&dword_140404A6C[5873 * lookup_index + 283831489];
    weighted_sum_3 = *(float *)&dword_140404A6C[5873 * lookup_index + 283831487];
    matrix = xmmword_140278D30;
    cached_xmmword_140278d30 = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
    *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + *(float *)&float_word_4;
    component_sum_2 = weighted_sum + weighted_sum_2;
    scaled_value_2 = *(float *)&matrix;
    dword2_result = DWORD2(cached_xmmword_140278d30);
    weighted_sum_4 = *((float *)&matrix + 1);
    comparison_operand = HIDWORD(cached_xmmword_140278d30);
    weighted_sum_5 = *((float *)&matrix + 2);
    weighted_sum_6 = (float)(weighted_sum_3 + scaled_value) * 0.5;
    weighted_sum_7 = (float)((float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) * 0.5) - (float)(*(float *)&matrix * 16.0))
         + (float)(*((float *)&cached_xmmword_140278d30 + 2) * 16.0);
    combined_products = (float)((float)(component_sum_2 * 0.5) - (float)(*((float *)&matrix + 1) * 16.0)) + (float)(*((float *)&cached_xmmword_140278d30 + 3) * 16.0);
    comparison_operand_2 = LODWORD(frame_float_at_176);
    iteration_count_9 = 0;
    scaled_index_15 = 5873 * lookup_index;
    state_address_5 = (float)(weighted_sum_6 - (float)(*((float *)&matrix + 2) * 16.0)) + (float)(frame_float_at_176 * 16.0);
    do
    {
      comparison_operand_3 = HIDWORD(matrix);
      saved_cached_xmmword_140278d30 = cached_xmmword_140278d30;
      dword_140404A6C[13 * (int)dword_140404A6C[scaled_index_15 + 283836331] + 283836332 + scaled_index_15] = 0;
      scaled_index_16 = scaled_index_15 * 4 + 52LL * (int)dword_140404A6C[scaled_index_15 + 283836331];
      *(float *)((char *)&g_183EC4920 + scaled_index_16) = weighted_sum_7;
      *(float *)((char *)&g_183EC4924 + scaled_index_16) = combined_products;
      *(float *)((char *)&g_183EC4928 + scaled_index_16) = state_address_5;
      scaled_index_17 = scaled_index_15 * 4 + 52LL * (int)dword_140404A6C[scaled_index_15 + 283836331];
      *(float *)((char *)&g_183EC492C + scaled_index_17) = scaled_value_2;
      *(float *)((char *)&g_183EC4930 + scaled_index_17) = weighted_sum_4;
      *(float *)((char *)&g_183EC4934 + scaled_index_17) = weighted_sum_5;
      scaled_index_18 = scaled_index_15 * 4 + 52LL * (int)dword_140404A6C[scaled_index_15 + 283836331];
      *(unsigned int *)((char *)&g_183EC4938 + scaled_index_18) = comparison_operand_3;
      *(_QWORD *)((char *)&g_183EC493C + scaled_index_18) = __PAIR64__(DWORD1(cached_xmmword_140278d30), saved_cached_xmmword_140278d30);
      scaled_index_19 = scaled_index_15 * 4 + 52LL * (int)dword_140404A6C[scaled_index_15 + 283836331];
      *(unsigned int *)((char *)&g_183EC4944 + scaled_index_19) = dword2_result;
      *(unsigned int *)((char *)&g_183EC4948 + scaled_index_19) = comparison_operand;
      *(unsigned int *)((char *)&g_183EC494C + scaled_index_19) = comparison_operand_2;
      ++dword_140404A6C[scaled_index_15 + 283836331];
      if ( iteration_count_9 == 3 )
      {
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
        dword2_result = DWORD2(cached_xmmword_140278d30);
        comparison_operand = HIDWORD(cached_xmmword_140278d30);
        comparison_operand_2 = LODWORD(frame_float_at_176);
        weighted_sum_5 = *((float *)&matrix + 2);
        weighted_sum_4 = *((float *)&matrix + 1);
        scaled_value_2 = *(float *)&matrix;
        weighted_sum_8 = *((float *)&cached_xmmword_140278d30 + 3) * 24.0;
        weighted_sum_7 = weighted_sum_7 + (float)(*((float *)&cached_xmmword_140278d30 + 2) * 24.0);
        scaled_value_3 = frame_float_at_176 * 24.0;
      }
      else
      {
        weighted_sum_8 = weighted_sum_4 * 4.0;
        weighted_sum_7 = weighted_sum_7 + (float)(scaled_value_2 * 4.0);
        scaled_value_3 = weighted_sum_5 * 4.0;
      }
      ++iteration_count_9;
      state_address_5 = state_address_5 + scaled_value_3;
      combined_products = combined_products + weighted_sum_8;
    }
    while ( iteration_count_9 < 8 );
    *(_QWORD *)&angle_2 = dword_140404A6C[scaled_index_14 + 283831497];
    weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_14 + 283831485];
    weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_14 + 283831488];
    weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_14 + 283831486];
    weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_14 + 283831489];
    weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_14 + 283831487];
    weighted_sum_14 = *(float *)&dword_140404A6C[scaled_index_14 + 283831490];
    matrix = xmmword_140278D30;
    frame_float_at_176 = 1.0;
    cached_xmmword_140278d30 = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle_2);
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
    component_sum_3 = weighted_sum_9 + weighted_sum_10;
    component_sum_4 = weighted_sum_11 + weighted_sum_12;
    scaled_value_4 = *(float *)&matrix;
    component_sum_5 = weighted_sum_13 + weighted_sum_14;
    weighted_sum_15 = *((float *)&cached_xmmword_140278d30 + 2);
    weighted_sum_16 = *((float *)&matrix + 1);
    weighted_sum_17 = *((float *)&cached_xmmword_140278d30 + 3);
    weighted_sum_18 = *((float *)&matrix + 2);
    comparison_operand_4 = frame_float_at_176;
    weighted_sum_19 = (float)((float)(component_sum_3 * 0.5) + (float)(*(float *)&matrix * 4.0)) + (float)(*((float *)&cached_xmmword_140278d30 + 2) * 17.5);
    weighted_sum_20 = (float)((float)(component_sum_4 * 0.5) + (float)(*((float *)&matrix + 1) * 4.0)) + (float)(*((float *)&cached_xmmword_140278d30 + 3) * 17.5);
    weighted_sum_21 = (float)((float)(component_sum_5 * 0.5) + (float)(*((float *)&matrix + 2) * 4.0)) + (float)(frame_float_at_176 * 17.5);
    if ( g_183F7CB60 )
    {
      *(float *)&dword_140404A6C[scaled_index_14 + 283831498] = weighted_sum_19;
      *(float *)&dword_140404A6C[scaled_index_14 + 283831499] = weighted_sum_20;
      *(float *)&dword_140404A6C[scaled_index_14 + 283831500] = weighted_sum_21;
    }
    *(float *)&dword_140404A6C[scaled_index_14 + 283831501] = (float)((float)(scaled_value_4 * 12.0) + weighted_sum_19) + (float)(weighted_sum_15 * 6.0);
    *(float *)&dword_140404A6C[scaled_index_14 + 283831502] = (float)((float)(weighted_sum_16 * 12.0) + weighted_sum_20) + (float)(weighted_sum_17 * 6.0);
    *(float *)&dword_140404A6C[scaled_index_14 + 283831503] = (float)((float)(weighted_sum_18 * 12.0) + weighted_sum_21) + (float)(comparison_operand_4 * 6.0);
    if ( game_type == 7 )
    {
      *(_QWORD *)&angle_3 = dword_140404A6C[scaled_index_14 + 283831497];
      frame_float_at_176 = 1.0;
      matrix = xmmword_140278D30;
      cached_xmmword_140278d30 = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle_3);
      *(float *)&angle_3 = scaled_value_8 + 13.5;
      *(float *)&state_address_6 = (float)(*(float *)&dword_140404A6C[scaled_index_14 + 283831487] + *(float *)&dword_140404A6C[scaled_index_14 + 283831490])
                      * 0.5;
      *(float *)&dword_140404A6C[scaled_index_14 + 283831501] = (float)(*(float *)&dword_140404A6C[scaled_index_14 + 283831485]
                                                          + *(float *)&dword_140404A6C[scaled_index_14 + 283831488])
                                                  * 0.5;
      dword_140404A6C[scaled_index_14 + 283831502] = LODWORD(angle_3);
      dword_140404A6C[scaled_index_14 + 283831503] = state_address_6;
    }
    integer_difference = cached_integer_difference;
  }
  saved_iteration_count = 0;
  masked_bits_2 = *(unsigned int *)&g_1AF0C9834;
  iteration_count_10 = 0;
  masked_bits_3 = *(unsigned int *)&g_1AF0C9838;
  masked_bits_4 = *(unsigned int *)&g_1AF0C983C;
  masked_bits_5 = *(unsigned int *)&g_1AF0C9810;
  masked_bits_6 = *(unsigned int *)&g_1AF0C9814;
  masked_bits_7 = *(unsigned int *)&g_1AF0C9818;
  saved_square_root = 65536.0;
  if ( (int)g_175FD145C > 0 )
  {
    state_address_7 = (int *)&g_175FD1468;
    do
    {
      cached_iteration_count = saved_iteration_count;
      combined_products_2 = (float)((float)*(state_address_7 - 1) * 4.0)
           - (float)((float)(g_1AF0C9834 * 32.0) + g_1AF0C9810);
      cached_square_root = saved_square_root;
      combined_products_3 = (float)((float)state_address_7[1] * 4.0)
           - (float)((float)(g_1AF0C983C * 32.0) + g_1AF0C9818);
      square_root = fsqrt(
               (float)((float)(combined_products_2 * combined_products_2)
                     + (float)((float)((float)((float)*state_address_7 * 4.0)
                                     - (float)((float)(g_1AF0C9838 * 32.0)
                                             + g_1AF0C9814))
                             * (float)((float)((float)*state_address_7 * 4.0)
                                     - (float)((float)(g_1AF0C9838 * 32.0)
                                             + g_1AF0C9814))))
             + (float)(combined_products_3 * combined_products_3));
      if ( saved_square_root > square_root )
        saved_square_root = square_root;
      saved_iteration_count = iteration_count_10;
      if ( cached_square_root <= square_root )
        saved_iteration_count = cached_iteration_count;
      ++iteration_count_10;
      state_address_7 += 34;
    }
    while ( iteration_count_10 < (int)g_175FD145C );
    masked_bits_7 = *(unsigned int *)&g_1AF0C9818;
  }
  scaled_index_20 = 34LL * saved_iteration_count;
  dword_140404A6C[14019 * item_block_region_count + 225641321] = dword_140404A6C[scaled_index_20 + 225391236];
  cached_item_block_region_count = item_block_region_count;
  scaled_index_21 = 14019LL * (int)item_block_region_count;
  if ( dword_140404A6C[scaled_index_21 + 225641321] == -1 )
  {
    dword_140404A6C[scaled_index_21 + 225641321] = dword_140404A6C[scaled_index_20 + 225391238];
    cached_item_block_region_count = item_block_region_count;
  }
  dword_140404A6C[14019 * cached_item_block_region_count + 225641322] = dword_140404A6C[scaled_index_20 + 225391237];
  cached_item_block_region_count_2 = item_block_region_count;
  scaled_index_22 = 14019LL * (int)item_block_region_count;
  if ( dword_140404A6C[scaled_index_22 + 225641322] == -1 )
  {
    dword_140404A6C[scaled_index_22 + 225641322] = dword_140404A6C[scaled_index_20 + 225391239];
    cached_item_block_region_count_2 = item_block_region_count;
  }
  state_word_2 = g_1AF0C9524;
  state_word_3 = g_1AF0C9518;
  state_word_4 = g_1AF0C9514;
  state_word_5 = g_1AF0C9510;
  state_word_6 = g_1AF0C9830;
  if ( integer_difference == -1 )
  {
    state_word_8 = g_1AF0C9520;
    state_word_7 = g_1AF0C951C;
    cached_input_value_3 = input_value_7;
    cached_input_value_4 = input_value_9;
  }
  else
  {
    masked_bits_8 = g_1AF0C981C;
    cached_input_value_3 = input_value_7;
    cached_input_value_4 = input_value_9;
    state_word_7 = g_1AF0C951C;
    dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 1;
    dword_140404A6C[14019 * item_block_region_count + 225641325] = integer_difference;
    scaled_index_23 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[scaled_index_23 + 225641207] = masked_bits_5;
    dword_140404A6C[scaled_index_23 + 225641208] = masked_bits_6;
    dword_140404A6C[scaled_index_23 + 225641209] = masked_bits_7;
    state_address_8 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
    *(_OWORD *)state_address_8 = masked_bits_8;
    state_address_8[4] = g_1AF0C982C;
    state_address_8[5] = state_word_6;
    state_address_8[6] = masked_bits_2;
    state_address_8[7] = masked_bits_3;
    state_address_8[8] = masked_bits_4;
    scaled_index_24 = 14019LL * (int)item_block_region_count;
    weighted_sum_22 = *(float *)&dword_140404A6C[scaled_index_24 + 225641215] + *(float *)&dword_140404A6C[scaled_index_24 + 225641215];
    *(float *)&masked_bits_8 = *(float *)&dword_140404A6C[scaled_index_24 + 225641218] * 18.0;
    *(float *)&state_address_9 = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641211] * 32.0)
                                    + *(float *)&dword_140404A6C[scaled_index_24 + 225641208])
                            + (float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641217] * 18.0))
                    + (float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641214] + *(float *)&dword_140404A6C[scaled_index_24 + 225641214]);
    state_address_10 = (float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641212] * 32.0) + *(float *)&dword_140404A6C[scaled_index_24 + 225641209];
    *(float *)&dword_140404A6C[scaled_index_24 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641210]
                                                                         * 32.0)
                                                                 + *(float *)&dword_140404A6C[scaled_index_24 + 225641207])
                                                         + (float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641216] * 18.0))
                                                 + (float)(*(float *)&dword_140404A6C[scaled_index_24 + 225641213]
                                                         + *(float *)&dword_140404A6C[scaled_index_24 + 225641213]);
    dword_140404A6C[scaled_index_24 + 225653937] = state_address_9;
    *(float *)&dword_140404A6C[scaled_index_24 + 225653938] = (float)(state_address_10 + *(float *)&masked_bits_8) + weighted_sum_22;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
    state_word_8 = g_1AF0C9520;
    integer_sum_5 = cached_input_value + g_1AF0C9520 + state_word_4;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)integer_sum_5 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2) * 4.0;
    cached_item_block_region_count_2 = ++item_block_region_count;
  }
  input_value_6 = a8;
  if ( a8 != 10 )
  {
    cached_input_value_5 = (float)cached_input_value_3;
    if ( a8 == 12 )
    {
      dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 6;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = cached_input_value_5 * 4.0;
      *(float *)&float_word_5 = (float)cached_input_value_4 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = (float)cached_input_value * 4.0;
      dword_140404A6C[14019 * item_block_region_count + 225641209] = float_word_5;
      dword_140404A6C[14019 * item_block_region_count + 225641209] = float_word_5;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2)
                                                                                 * 4.0;
      dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
      cached_item_block_region_count_2 = ++item_block_region_count;
    }
    else if ( a8 == 13 )
    {
      scaled_value_6 = cached_input_value_5 * 4.0;
      cached_input_value_6 = (float)cached_input_value;
      dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 5;
      cached_input_value_7 = (float)cached_input_value_4;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = scaled_value_6;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = (float)cached_input_value * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = (float)cached_input_value_4 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5)
                                                                                 * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
      *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2)
                                                                                 * 4.0;
      comparison_result = game_connected == 0;
      dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
      if ( !comparison_result )
      {
        dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 0;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 1000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 1;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 5000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 2;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 10000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 3;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 10000;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654129
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 4;
        state_word_8 = g_1AF0C9520;
        dword_140404A6C[14019 * item_block_region_count
                      + 225654130
                      + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 100000;
      }
      cached_item_block_region_count_2 = ++item_block_region_count;
      goto LABEL_171;
    }
    state_word_10 = g_1AF0C982C;
    goto LABEL_162;
  }
  state_word_9 = g_1AF0C981C;
  state_word_10 = g_1AF0C982C;
  dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 4;
  scaled_index_25 = 14019LL * (int)item_block_region_count;
  dword_140404A6C[scaled_index_25 + 225641207] = masked_bits_5;
  dword_140404A6C[scaled_index_25 + 225641208] = masked_bits_6;
  dword_140404A6C[scaled_index_25 + 225641209] = masked_bits_7;
  state_address_11 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
  state_address_11[4] = state_word_10;
  state_address_11[5] = state_word_6;
  state_address_11[6] = masked_bits_2;
  state_address_11[7] = masked_bits_3;
  state_address_11[8] = masked_bits_4;
  *(_OWORD *)state_address_11 = state_word_9;
  state_word_11 = g_1AFFF1F5C;
  dword_140404A6C[14019 * item_block_region_count + 225641327] = 0;
  if ( state_word_11 > 0 )
  {
    masked_bits_9 = a9 & 3;
    saved_masked_bits = masked_bits_9;
    running_total_2 = 0;
    remaining_count_13 = (unsigned int)state_word_11;
    do
    {
      weighted_sum_23 = *(float *)&dword_140404A6C[running_total_2 + 468694334];
      record_byte_offset_6 = (float *)&dword_140404A6C[running_total_2 + 468694335];
      scaled_index_26 = 14019LL * (int)item_block_region_count;
      element_index_6 = 0;
      scaled_index_27 = scaled_index_26 * 4 + 788LL * (int)dword_140404A6C[scaled_index_26 + 225641327];
      state_address_12 = (float)((float)((float)(weighted_sum_23 * *(float *)&dword_140404A6C[scaled_index_26 + 225641210])
                           + *(float *)&dword_140404A6C[scaled_index_26 + 225641207])
                   + (float)(*(float *)&dword_140404A6C[running_total_2 + 468694335] * *(float *)&dword_140404A6C[scaled_index_26 + 225641213]))
           + (float)(*(float *)&dword_140404A6C[running_total_2 + 468694336] * *(float *)&dword_140404A6C[scaled_index_26 + 225641216]);
      state_address_13 = (float)((float)(weighted_sum_23 * *(float *)&dword_140404A6C[scaled_index_26 + 225641211])
                   + *(float *)&dword_140404A6C[scaled_index_26 + 225641208])
           + (float)(*(float *)&dword_140404A6C[running_total_2 + 468694335] * *(float *)&dword_140404A6C[scaled_index_26 + 225641214]);
      weighted_sum_24 = *(float *)&dword_140404A6C[running_total_2 + 468694336] * *(float *)&dword_140404A6C[scaled_index_26 + 225641217];
      state_address_14 = (float)((float)(weighted_sum_23 * *(float *)&dword_140404A6C[scaled_index_26 + 225641212])
                   + *(float *)&dword_140404A6C[scaled_index_26 + 225641209])
           + (float)(*(float *)&dword_140404A6C[running_total_2 + 468694335] * *(float *)&dword_140404A6C[scaled_index_26 + 225641215]);
      weighted_sum_25 = *(float *)&dword_140404A6C[running_total_2 + 468694336] * *(float *)&dword_140404A6C[scaled_index_26 + 225641218];
      *(float *)((char *)&g_1760C582C + scaled_index_27) = state_address_12;
      *(float *)((char *)&g_1760C5830 + scaled_index_27) = state_address_13 + weighted_sum_24;
      *(float *)((char *)&g_1760C5834 + scaled_index_27) = state_address_14 + weighted_sum_25;
      dword_140404A6C[14019 * item_block_region_count
                    + 225641331
                    + 197 * dword_140404A6C[14019 * item_block_region_count + 225641327]] = masked_bits_9;
      table_value_5 = (int)dword_140404A6C[running_total_2 + 468694333];
      cached_table_value = table_value_5;
      dword_140404A6C[14019 * item_block_region_count
                    + 225641332
                    + 197 * dword_140404A6C[14019 * item_block_region_count + 225641327]] = table_value_5;
      if ( table_value_5 >= 4 )
      {
        integer_difference_2 = table_value_5 - 3;
        do
        {
          product_difference = *(record_byte_offset_6 - 1);
          scaled_index_28 = 14019LL * (int)item_block_region_count;
          weighted_sum_26 = product_difference * *(float *)&dword_140404A6C[scaled_index_28 + 225641210];
          state_address_15 = (float)((float)(product_difference * *(float *)&dword_140404A6C[scaled_index_28 + 225641212])
                       + *(float *)&dword_140404A6C[scaled_index_28 + 225641209])
               + (float)(*record_byte_offset_6 * *(float *)&dword_140404A6C[scaled_index_28 + 225641215]);
          source_float_4 = record_byte_offset_6[4];
          state_address_16 = (float)((float)((float)(product_difference * *(float *)&dword_140404A6C[scaled_index_28 + 225641211])
                               + *(float *)&dword_140404A6C[scaled_index_28 + 225641208])
                       + (float)(*record_byte_offset_6 * *(float *)&dword_140404A6C[scaled_index_28 + 225641214]))
               + (float)(record_byte_offset_6[1] * *(float *)&dword_140404A6C[scaled_index_28 + 225641217]);
          weighted_sum_27 = state_address_15 + (float)(record_byte_offset_6[1] * *(float *)&dword_140404A6C[scaled_index_28 + 225641218]);
          source_float_5 = record_byte_offset_6[5];
          scaled_index_29 = 788LL * (int)dword_140404A6C[scaled_index_28 + 225641327] + 12 * (element_index_6 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C5840 + scaled_index_29) = (float)((float)(weighted_sum_26
                                                                                 + *(float *)&dword_140404A6C[scaled_index_28 + 225641207])
                                                                         + (float)(*record_byte_offset_6
                                                                                 * *(float *)&dword_140404A6C[scaled_index_28 + 225641213]))
                                                                 + (float)(record_byte_offset_6[1]
                                                                         * *(float *)&dword_140404A6C[scaled_index_28 + 225641216]);
          *(float *)((char *)&g_1760C5844 + scaled_index_29) = state_address_16;
          *(float *)((char *)&g_1760C5848 + scaled_index_29) = weighted_sum_27;
          scaled_index_30 = 14019LL * (int)item_block_region_count;
          source_component_w = record_byte_offset_6[3];
          state_address_17 = (float)((float)((float)(source_component_w * *(float *)&dword_140404A6C[scaled_index_30 + 225641210])
                               + *(float *)&dword_140404A6C[scaled_index_30 + 225641207])
                       + (float)(source_float_4 * *(float *)&dword_140404A6C[scaled_index_30 + 225641213]))
               + (float)(source_float_5 * *(float *)&dword_140404A6C[scaled_index_30 + 225641216]);
          state_address_18 = (float)((float)(source_component_w * *(float *)&dword_140404A6C[scaled_index_30 + 225641212])
                       + *(float *)&dword_140404A6C[scaled_index_30 + 225641209])
               + (float)(source_float_4 * *(float *)&dword_140404A6C[scaled_index_30 + 225641215]);
          weighted_sum_28 = source_float_5 * *(float *)&dword_140404A6C[scaled_index_30 + 225641217];
          state_address_19 = (float)((float)(source_component_w * *(float *)&dword_140404A6C[scaled_index_30 + 225641211])
                       + *(float *)&dword_140404A6C[scaled_index_30 + 225641208])
               + (float)(source_float_4 * *(float *)&dword_140404A6C[scaled_index_30 + 225641214]);
          source_float_8 = record_byte_offset_6[8];
          weighted_sum_29 = state_address_18 + (float)(source_float_5 * *(float *)&dword_140404A6C[scaled_index_30 + 225641218]);
          source_float_9 = record_byte_offset_6[9];
          scaled_index_31 = 788LL * (int)dword_140404A6C[scaled_index_30 + 225641327] + 12 * (element_index_6 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C584C + scaled_index_31) = state_address_17;
          *(float *)((char *)&g_1760C5850 + scaled_index_31) = state_address_19 + weighted_sum_28;
          *(float *)((char *)&g_1760C5854 + scaled_index_31) = weighted_sum_29;
          source_float_7 = record_byte_offset_6[7];
          scaled_index_32 = 14019LL * (int)item_block_region_count;
          weighted_sum_30 = source_float_8 * *(float *)&dword_140404A6C[scaled_index_32 + 225641214];
          state_address_20 = (float)((float)((float)(source_float_7 * *(float *)&dword_140404A6C[scaled_index_32 + 225641210])
                               + *(float *)&dword_140404A6C[scaled_index_32 + 225641207])
                       + (float)(source_float_8 * *(float *)&dword_140404A6C[scaled_index_32 + 225641213]))
               + (float)(source_float_9 * *(float *)&dword_140404A6C[scaled_index_32 + 225641216]);
          state_address_21 = (float)((float)(source_float_7 * *(float *)&dword_140404A6C[scaled_index_32 + 225641212])
                       + *(float *)&dword_140404A6C[scaled_index_32 + 225641209])
               + (float)(source_float_8 * *(float *)&dword_140404A6C[scaled_index_32 + 225641215]);
          source_float_12 = record_byte_offset_6[12];
          state_address_22 = (float)((float)((float)(record_byte_offset_6[7] * *(float *)&dword_140404A6C[scaled_index_32 + 225641211])
                               + *(float *)&dword_140404A6C[scaled_index_32 + 225641208])
                       + weighted_sum_30)
               + (float)(source_float_9 * *(float *)&dword_140404A6C[scaled_index_32 + 225641217]);
          weighted_sum_31 = state_address_21 + (float)(source_float_9 * *(float *)&dword_140404A6C[scaled_index_32 + 225641218]);
          source_float_13 = record_byte_offset_6[13];
          scaled_index_33 = 788LL * (int)dword_140404A6C[scaled_index_32 + 225641327] + 12 * (element_index_6 + 4673LL * (int)item_block_region_count);
          *(float *)((char *)&g_1760C5858 + scaled_index_33) = state_address_20;
          *(float *)((char *)&g_1760C585C + scaled_index_33) = state_address_22;
          *(float *)((char *)&g_1760C5860 + scaled_index_33) = weighted_sum_31;
          source_float_11 = record_byte_offset_6[11];
          record_byte_offset_6 += 16;
          scaled_index_34 = 14019LL * (int)item_block_region_count;
          scaled_index_35 = element_index_6 + 4673LL * (int)item_block_region_count;
          element_index_6 += 4;
          state_address_23 = (float)((float)((float)(source_float_11 * *(float *)&dword_140404A6C[scaled_index_34 + 225641210])
                               + *(float *)&dword_140404A6C[scaled_index_34 + 225641207])
                       + (float)(source_float_12 * *(float *)&dword_140404A6C[scaled_index_34 + 225641213]))
               + (float)(source_float_13 * *(float *)&dword_140404A6C[scaled_index_34 + 225641216]);
          weighted_sum_32 = source_float_13 * *(float *)&dword_140404A6C[scaled_index_34 + 225641217];
          state_address_24 = (float)((float)(source_float_11 * *(float *)&dword_140404A6C[scaled_index_34 + 225641211])
                       + *(float *)&dword_140404A6C[scaled_index_34 + 225641208])
               + (float)(source_float_12 * *(float *)&dword_140404A6C[scaled_index_34 + 225641214]);
          weighted_sum_33 = source_float_13 * *(float *)&dword_140404A6C[scaled_index_34 + 225641218];
          state_address_25 = (float)((float)(source_float_11 * *(float *)&dword_140404A6C[scaled_index_34 + 225641212])
                       + *(float *)&dword_140404A6C[scaled_index_34 + 225641209])
               + (float)(source_float_12 * *(float *)&dword_140404A6C[scaled_index_34 + 225641215]);
          scaled_index_36 = 788LL * (int)dword_140404A6C[scaled_index_34 + 225641327] + 12 * scaled_index_35;
          *(float *)((char *)&g_1760C5864 + scaled_index_36) = state_address_23;
          *(float *)((char *)&g_1760C5868 + scaled_index_36) = state_address_24 + weighted_sum_32;
          *(float *)((char *)&g_1760C586C + scaled_index_36) = state_address_25 + weighted_sum_33;
        }
        while ( element_index_6 < integer_difference_2 );
      }
      if ( element_index_6 < cached_table_value )
      {
        record_byte_offset_7 = (float *)&dword_140404A6C[4 * element_index_6 + 468694335 + running_total_2];
        do
        {
          product_difference_2 = *(record_byte_offset_7 - 1);
          scaled_value_5 = *record_byte_offset_7;
          source_component_y = record_byte_offset_7[1];
          scaled_index_37 = 14019LL * (int)item_block_region_count;
          weighted_sum_34 = *record_byte_offset_7 * *(float *)&dword_140404A6C[scaled_index_37 + 225641213];
          record_byte_offset_7 += 4;
          scaled_index_38 = element_index_6 + 4673LL * (int)item_block_region_count;
          ++element_index_6;
          state_address_26 = (float)((float)((float)(product_difference_2 * *(float *)&dword_140404A6C[scaled_index_37 + 225641210])
                               + *(float *)&dword_140404A6C[scaled_index_37 + 225641207])
                       + weighted_sum_34)
               + (float)(source_component_y * *(float *)&dword_140404A6C[scaled_index_37 + 225641216]);
          weighted_sum_35 = source_component_y * *(float *)&dword_140404A6C[scaled_index_37 + 225641217];
          state_address_27 = (float)((float)(product_difference_2 * *(float *)&dword_140404A6C[scaled_index_37 + 225641211])
                       + *(float *)&dword_140404A6C[scaled_index_37 + 225641208])
               + (float)(scaled_value_5 * *(float *)&dword_140404A6C[scaled_index_37 + 225641214]);
          weighted_sum_36 = source_component_y * *(float *)&dword_140404A6C[scaled_index_37 + 225641218];
          state_address_28 = (float)((float)(product_difference_2 * *(float *)&dword_140404A6C[scaled_index_37 + 225641212])
                       + *(float *)&dword_140404A6C[scaled_index_37 + 225641209])
               + (float)(scaled_value_5 * *(float *)&dword_140404A6C[scaled_index_37 + 225641215]);
          scaled_index_39 = 788LL * (int)dword_140404A6C[scaled_index_37 + 225641327] + 12 * scaled_index_38;
          *(float *)((char *)&g_1760C5840 + scaled_index_39) = state_address_26;
          *(float *)((char *)&g_1760C5844 + scaled_index_39) = state_address_27 + weighted_sum_35;
          *(float *)((char *)&g_1760C5848 + scaled_index_39) = state_address_28 + weighted_sum_36;
        }
        while ( element_index_6 < cached_table_value );
      }
      running_total_2 += 257;
      masked_bits_9 = saved_masked_bits;
      ++dword_140404A6C[14019 * item_block_region_count + 225641327];
      --remaining_count_13;
    }
    while ( remaining_count_13 );
    state_word_3 = g_1AF0C9518;
    state_word_4 = g_1AF0C9514;
    state_word_5 = g_1AF0C9510;
    state_word_2 = g_1AF0C9524;
    state_word_8 = g_1AF0C9520;
    state_word_7 = g_1AF0C951C;
    cached_input_value = input_value_8;
    cached_input_value_3 = input_value_7;
    cached_input_value_4 = input_value_9;
    input_value_6 = 10;
  }
  scaled_index_40 = 14019LL * (int)item_block_region_count;
  weighted_sum_37 = *(float *)&dword_140404A6C[scaled_index_40 + 225641215] + *(float *)&dword_140404A6C[scaled_index_40 + 225641215];
  weighted_sum_38 = *(float *)&dword_140404A6C[scaled_index_40 + 225641218] * 26.0;
  *(float *)&state_address_29 = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641211] * 50.0)
                                  + *(float *)&dword_140404A6C[scaled_index_40 + 225641208])
                          + (float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641217] * 26.0))
                  + (float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641214] + *(float *)&dword_140404A6C[scaled_index_40 + 225641214]);
  state_address_30 = (float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641212] * 50.0) + *(float *)&dword_140404A6C[scaled_index_40 + 225641209];
  *(float *)&dword_140404A6C[scaled_index_40 + 225653936] = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641210]
                                                                       * 50.0)
                                                               + *(float *)&dword_140404A6C[scaled_index_40 + 225641207])
                                                       + (float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641216] * 26.0))
                                               + (float)(*(float *)&dword_140404A6C[scaled_index_40 + 225641213]
                                                       + *(float *)&dword_140404A6C[scaled_index_40 + 225641213]);
  dword_140404A6C[scaled_index_40 + 225653937] = state_address_29;
  *(float *)&dword_140404A6C[scaled_index_40 + 225653938] = (float)(state_address_30 + weighted_sum_38) + weighted_sum_37;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
  *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2) * 4.0;
  cached_item_block_region_count_2 = item_block_region_count + 1;
  cached_input_value_5 = (float)cached_input_value_3;
  ++item_block_region_count;
LABEL_162:
  scaled_value_6 = cached_input_value_5 * 4.0;
  cached_input_value_6 = (float)cached_input_value;
  cached_input_value_7 = (float)cached_input_value_4;
  if ( input_value_6 == 11 )
  {
    state_word_12 = g_1AF0C981C;
    dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 3;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = scaled_value_6;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = cached_input_value_6 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = cached_input_value_7 * 4.0;
    scaled_index_41 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[scaled_index_41 + 225641207] = masked_bits_5;
    dword_140404A6C[scaled_index_41 + 225641208] = masked_bits_6;
    dword_140404A6C[scaled_index_41 + 225641209] = masked_bits_7;
    state_address_31 = &dword_140404A6C[14019 * item_block_region_count + 225641210];
    *(_OWORD *)state_address_31 = state_word_12;
    state_address_31[5] = g_1AF0C9830;
    state_address_31[4] = state_word_10;
    state_address_31[6] = masked_bits_2;
    state_address_31[7] = masked_bits_3;
    state_address_31[8] = masked_bits_4;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2) * 4.0;
    scaled_index_42 = 14019LL * (int)item_block_region_count;
    dword_140404A6C[scaled_index_42 + 225654178] = dword_140404A6C[scaled_index_42 + 225641207];
    dword_140404A6C[scaled_index_42 + 225654179] = dword_140404A6C[scaled_index_42 + 225641208];
    dword_140404A6C[scaled_index_42 + 225654180] = dword_140404A6C[scaled_index_42 + 225641209];
    scaled_index_43 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[scaled_index_43 + 225654178] = (float)(*(float *)&dword_140404A6C[scaled_index_43 + 225641210] * 24.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_43 + 225654178];
    *(float *)&dword_140404A6C[scaled_index_43 + 225654179] = (float)(*(float *)&dword_140404A6C[scaled_index_43 + 225641211] * 24.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_43 + 225654179];
    *(float *)&dword_140404A6C[scaled_index_43 + 225654180] = (float)(*(float *)&dword_140404A6C[scaled_index_43 + 225641212] * 24.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_43 + 225654180];
    scaled_index_44 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[scaled_index_44 + 225654178] = (float)(*(float *)&dword_140404A6C[scaled_index_44 + 225641216] * 80.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_44 + 225654178];
    *(float *)&dword_140404A6C[scaled_index_44 + 225654179] = (float)(*(float *)&dword_140404A6C[scaled_index_44 + 225641217] * 80.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_44 + 225654179];
    *(float *)&dword_140404A6C[scaled_index_44 + 225654180] = (float)(*(float *)&dword_140404A6C[scaled_index_44 + 225641218] * 80.0)
                                                 + *(float *)&dword_140404A6C[scaled_index_44 + 225654180];
    scaled_index_45 = 14019LL * (int)item_block_region_count;
    *(float *)&dword_140404A6C[scaled_index_45 + 225654178] = (float)(*(float *)&dword_140404A6C[scaled_index_45 + 225641213]
                                                         + *(float *)&dword_140404A6C[scaled_index_45 + 225641213])
                                                 + *(float *)&dword_140404A6C[scaled_index_45 + 225654178];
    *(float *)&dword_140404A6C[scaled_index_45 + 225654179] = (float)(*(float *)&dword_140404A6C[scaled_index_45 + 225641214]
                                                         + *(float *)&dword_140404A6C[scaled_index_45 + 225641214])
                                                 + *(float *)&dword_140404A6C[scaled_index_45 + 225654179];
    *(float *)&dword_140404A6C[scaled_index_45 + 225654180] = (float)(*(float *)&dword_140404A6C[scaled_index_45 + 225641215]
                                                         + *(float *)&dword_140404A6C[scaled_index_45 + 225641215])
                                                 + *(float *)&dword_140404A6C[scaled_index_45 + 225654180];
    goto LABEL_164;
  }
  if ( input_value_6 == 14 )
  {
    dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 8;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = scaled_value_6;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = cached_input_value_6 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = cached_input_value_7 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2) * 4.0;
LABEL_164:
    dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
LABEL_173:
    ++item_block_region_count;
    return 0; /* native result ignored by both callers */
  }
LABEL_171:
  scaled_value_7 = cached_input_value_6 * 4.0;
  if ( input_value_6 == 16 )
  {
    dword_140404A6C[14019 * cached_item_block_region_count_2 + 225641203] = 9;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641207] = scaled_value_6;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641208] = scaled_value_7;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641209] = cached_input_value_7 * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641219] = (float)(int)(state_word_5 + cached_input_value_3) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641220] = (float)(int)(state_word_4 + cached_input_value) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641221] = (float)(int)(state_word_3 + cached_input_value_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641222] = (float)(int)(cached_input_value_3 + state_word_7 + state_word_5) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641223] = (float)(int)(cached_input_value + state_word_8 + state_word_4) * 4.0;
    *(float *)&dword_140404A6C[14019 * item_block_region_count + 225641224] = (float)(int)(cached_input_value_4 + state_word_3 + state_word_2) * 4.0;
    dword_140404A6C[14019 * item_block_region_count + 225654128] = 0;
    dword_140404A6C[14019 * item_block_region_count
                  + 225654129
                  + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]] = 0;
    dword_140404A6C[14019 * item_block_region_count
                  + 225654130
                  + 3 * dword_140404A6C[14019 * item_block_region_count + 225654128]++] = 20;
    goto LABEL_173;
  }
  return 0; /* native result ignored by both callers */
}
#undef unused_frame_slot_0
#undef input_value_7
#undef input_value_8
#undef input_value_9
#undef cached_integer_difference
#undef saved_element_index
#undef saved_remaining_count
#undef saved_record_byte_offset
#undef saved_element_index_2
#undef scaled_value_8
#undef saved_remaining_count_2
#undef saved_element_index_3
#undef saved_z
#undef saved_y
#undef saved_element_index_4
#undef saved_remaining_count_3
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_176
#undef loaded_word
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_frame_slot_200
#undef saved_masked_bits

//----- (0000000140026E70) ----------------------------------------------------
__int64 sub_140026E70()
{
  int chdir_result;
  __int64 call_result;
  int element_index;
  __int64 cached_call_result;
  int state_word;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;
  int call_result_2;
  int state_word_2;
  int iteration_count;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  char *record_byte_offset_3;
  char scaled_index;
  char table_value;
  char table_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026E70[352];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140026E70 + 0)) /* [rsp+0h] */
#define FindData (*(_BYTE (*)[304])(void *)(sr_frame_140026E70 + 32)) /* [rsp+20h] */
#define unused_frame_slot_336 (*(__int64 (*))(void *)(sr_frame_140026E70 + 336)) /* [rsp+150h] */

  LOBYTE(g_1ABC89C00) = 0;
  LOBYTE(g_1ABC8CC40) = 0;
  LOBYTE(g_1ABC8FC80) = 0;
  LOBYTE(g_1ABC92CC0) = 0;
  LOBYTE(g_1ABC95D00) = 0;
  LOBYTE(g_1ABC98D40) = 0;
  LOBYTE(g_1ABC9BD80) = 0;
  LOBYTE(g_1ABC9EDC0) = 0;
  LOBYTE(g_1ABCA1E00) = 0;
  LOBYTE(g_1ABCA4E40) = 0;
  LOBYTE(g_1ABCA7E80) = 0;
  LOBYTE(g_1ABCAAEC0) = 0;
  LOBYTE(g_1ABCADF00) = 0;
  LOBYTE(g_1ABCB0F40) = 0;
  LOBYTE(g_1ABCB3F80) = 0;
  LOBYTE(g_1ABCB6FC0) = 0;
  LOBYTE(g_1ABCBA000) = 0;
  LOBYTE(g_1ABCBD040) = 0;
  LOBYTE(g_1ABCC0080) = 0;
  LOBYTE(g_1ABCC30C0) = 0;
  LOBYTE(g_1ABCC6100) = 0;
  LOBYTE(g_1ABCC9140) = 0;
  LOBYTE(g_1ABCCC180) = 0;
  LOBYTE(g_1ABCCF1C0) = 0;
  LOBYTE(g_1ABCD2200) = 0;
  LOBYTE(g_1ABCD5240) = 0;
  LOBYTE(g_1ABCD8280) = 0;
  LOBYTE(g_1ABCDB2C0) = 0;
  LOBYTE(g_1ABCDE300) = 0;
  LOBYTE(g_1ABCE1340) = 0;
  LOBYTE(g_1ABCE4380) = 0;
  LOBYTE(g_1ABCE73C0) = 0;
  LOBYTE(g_1ABCEA400) = 0;
  LOBYTE(g_1ABCED440) = 0;
  LOBYTE(g_1ABCF0480) = 0;
  LOBYTE(g_1ABCF34C0) = 0;
  LOBYTE(g_1ABCF6500) = 0;
  LOBYTE(g_1ABCF9540) = 0;
  LOBYTE(g_1ABCFC580) = 0;
  LOBYTE(g_1ABCFF5C0) = 0;
  LOBYTE(g_1ABD02600) = 0;
  LOBYTE(g_1ABD05640) = 0;
  LOBYTE(g_1ABD08680) = 0;
  LOBYTE(g_1ABD0B6C0) = 0;
  LOBYTE(g_1ABD0E700) = 0;
  LOBYTE(g_1ABD11740) = 0;
  LOBYTE(g_1ABD14780) = 0;
  LOBYTE(g_1ABD177C0) = 0;
  LOBYTE(g_1ABD1A800) = 0;
  LOBYTE(g_1ABD1D840) = 0;
  LOBYTE(g_1ABD20880) = 0;
  LOBYTE(g_1ABD238C0) = 0;
  LOBYTE(g_1ABD26900) = 0;
  LOBYTE(g_1ABD29940) = 0;
  LOBYTE(g_1ABD2C980) = 0;
  LOBYTE(g_1ABD2F9C0) = 0;
  LOBYTE(g_1ABD32A00) = 0;
  LOBYTE(g_1ABD35A40) = 0;
  LOBYTE(g_1ABD38A80) = 0;
  LOBYTE(g_1ABD3BAC0) = 0;
  LOBYTE(g_1ABD3EB00) = 0;
  LOBYTE(g_1ABD41B40) = 0;
  LOBYTE(g_1ABD44B80) = 0;
  LOBYTE(g_1ABD47BC0) = 0;
  chdir_result = crt_chdir("buildblock");
  call_result = sub_14023A198("*.sbl", (__int64)FindData);
  element_index = 0;
  g_18622DFE0 = 0;
  cached_call_result = call_result;
  state_word = 0;
  if ( (_DWORD)call_result != -1 )
  {
    do
    {
      if ( state_word >= 1024 )
        break;
      if ( (FindData[0] & 0x10) == 0 )
      {
        text_cursor = &FindData[36];
        state_address = &dword_140404A6C[16 * (__int64)state_word + 293119326];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address = input_byte;
          state_address = (unsigned int *)((char *)state_address + 1);
        }
        while ( input_byte );
        ++g_18622DFE0;
      }
      call_result_2 = sub_14023A5C4(cached_call_result, (__int64)FindData);
      state_word = g_18622DFE0;
    }
    while ( call_result_2 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)state_word + 293119326]) = 0;
  sub_140239CCC(cached_call_result);
  sub_14023AE00(
    (unsigned __int64)&g_18622DFE4,
    (int)g_18622DFE0,
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sr_text_compare_bytes);
  state_word_2 = g_18622DFE0;
  iteration_count = 0;
  if ( (int)g_18622DFE0 > 0 )
  {
    record_byte_offset = 0;
    do
    {
      record_byte_offset_2 = 0;
      record_byte_offset_3 = (char *)&dword_140404A6C[record_byte_offset + 293119326] + 1;
      do
      {
        scaled_index = *(record_byte_offset_3 - 1);
        if ( !scaled_index || scaled_index == 46 )
          break;
        if ( !*record_byte_offset_3 || *record_byte_offset_3 == 46 )
        {
          ++record_byte_offset_2;
          break;
        }
        table_value = record_byte_offset_3[1];
        if ( !table_value || table_value == 46 )
        {
          record_byte_offset_2 += 2;
          break;
        }
        table_value_2 = record_byte_offset_3[2];
        if ( !table_value_2 || table_value_2 == 46 )
        {
          record_byte_offset_2 += 3;
          break;
        }
        record_byte_offset_2 += 4;
        record_byte_offset_3 += 4;
      }
      while ( record_byte_offset_2 < 64 );
      ++iteration_count;
      *((_BYTE *)&dword_140404A6C[record_byte_offset + 293119326] + record_byte_offset_2) = 0;
      record_byte_offset += 16;
      state_word_2 = g_18622DFE0;
    }
    while ( iteration_count < (int)g_18622DFE0 );
  }
  if ( !chdir_result )
  {
    crt_chdir("..");
    state_word_2 = g_18622DFE0;
  }
  if ( state_word_2 > 64 )
    state_word_2 = 64;
  g_18622DFE0 = state_word_2;
  if ( state_word_2 > 0 )
  {
    do
    {
      sub_140027230((     char *)&dword_140404A6C[16 * (__int64)element_index + 293119326], element_index);
      ++element_index;
    }
    while ( element_index < (int)g_18622DFE0 );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef FindData
#undef unused_frame_slot_336

//----- (0000000140027230) ----------------------------------------------------
__int64            sub_140027230(     char *a1, int a2)
{
  __int64 input_value;
       char *text_cursor;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 scaled_index;
  char *state_address;
  char input_byte;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  signed int iteration_count;
  __int64 scaled_index_2;
  signed int iteration_count_2;
  char *byte_cursor;
  signed int iteration_count_3;
  __int64 scaled_index_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140027230[144];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140027230 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_140027230 + 32)) /* [rsp+20h] */
#define saved_record_byte_offset (*(__int64 (*))(void *)(sr_frame_140027230 + 40)) /* [rsp+28h] */
#define saved_record_byte_offset_2 (*(__int64 (*))(void *)(sr_frame_140027230 + 48)) /* [rsp+30h] */
#define remaining_count (*(__int64 (*))(void *)(sr_frame_140027230 + 56)) /* [rsp+38h] */
#define scratch_buffer (*(char (*)[64])(void *)(sr_frame_140027230 + 64)) /* [rsp+40h] */
#define unused_frame_slot_128 (*(__int64 (*))(void *)(sr_frame_140027230 + 128)) /* [rsp+80h] */

  input_value = a2;
  text_cursor = a1;
  crt_sprintf(scratch_buffer, "buildblock/%s.sbl", a1);
  file_handle = crt_fopen(scratch_buffer, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&callee_output_word, 4, 1, file_handle);
    if ( callee_output_word == 1 )
    {
      scaled_index = 3088 * input_value;
      state_address = (char *)&g_1ABC89C00 + 12352 * input_value - (_QWORD)text_cursor;
      do
      {
        input_byte = *text_cursor;
        text_cursor[(_QWORD)state_address] = *text_cursor;
        ++text_cursor;
      }
      while ( input_byte );
      record_byte_offset = 0;
      remaining_count = 16;
      record_byte_offset_2 = 0;
      saved_record_byte_offset_2 = 0;
      saved_record_byte_offset = 0;
      state_address_2 = &dword_140404A6C[scaled_index + 451024002];
      state_address_3 = &dword_140404A6C[scaled_index + 451024083];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 94,
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 93,
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 92,
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 91,
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 90,
          4,
          1,
          file_handle_2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 88,
          4,
          1,
          file_handle_2);
        iteration_count = 0;
        if ( (int)*(state_address_2 - 7) > 0 )
        {
          do
          {
            scaled_index_2 = scaled_index * 4 + 12 * (record_byte_offset_2 + iteration_count);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C5C + scaled_index_2,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C60 + scaled_index_2,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C64 + scaled_index_2,
              4,
              1,
              file_handle_2);
            ++iteration_count;
          }
          while ( iteration_count < (int)*(state_address_2 - 7) );
          record_byte_offset = saved_record_byte_offset_2;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          state_address_3 - 81,
          4,
          1,
          file_handle_2);
        iteration_count_2 = 0;
        if ( (int)*state_address_2 > 0 )
        {
          do
          {
            byte_cursor = (char *)state_address_3 + 20LL * iteration_count_2 - (_QWORD)&g_1ABC89DB8;
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C78 + (_QWORD)byte_cursor,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C7C + (_QWORD)byte_cursor,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C80 + (_QWORD)byte_cursor,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C84 + (_QWORD)byte_cursor,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89C88 + (_QWORD)byte_cursor,
              4,
              1,
              file_handle_2);
            ++iteration_count_2;
          }
          while ( iteration_count_2 < (int)*state_address_2 );
          record_byte_offset_2 = saved_record_byte_offset;
          record_byte_offset = saved_record_byte_offset_2;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(state_address_3, 4, 1, file_handle_2);
        iteration_count_3 = 0;
        if ( (int)state_address_2[81] > 0 )
        {
          do
          {
            scaled_index_3 = scaled_index * 4 + 24 * (record_byte_offset + iteration_count_3);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DBC + scaled_index_3,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DC4 + scaled_index_3,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DC8 + scaled_index_3,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DCC + scaled_index_3,
              4,
              1,
              file_handle_2);
            (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              (char *)&g_1ABC89DD0 + scaled_index_3,
              4,
              1,
              file_handle_2);
            ++iteration_count_3;
          }
          while ( iteration_count_3 < (int)state_address_2[81] );
          record_byte_offset_2 = saved_record_byte_offset;
        }
        record_byte_offset_2 += 64;
        record_byte_offset += 32;
        state_address_3 += 192;
        saved_record_byte_offset = record_byte_offset_2;
        state_address_2 += 192;
        saved_record_byte_offset_2 = record_byte_offset;
        --remaining_count;
      }
      while ( remaining_count );
    }
    crt_fclose(file_handle_2);
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef saved_record_byte_offset
#undef saved_record_byte_offset_2
#undef remaining_count
#undef scratch_buffer
#undef unused_frame_slot_128

//----- (0000000140027690) ----------------------------------------------------
__int64 sub_140027690()
{
  unsigned int *buffer_cursor;
  __int64 result;
  int i;
  int record_byte_offset;
       char *left_text;

  buffer_cursor = &g_1AFFDFF58;
  result = (__int64)crt_memset((void *)(uintptr_t)(&g_1AFFDFF58), 0, 0x100u);
  for ( i = 0; i < (int)g_1AFFDFB54; ++buffer_cursor )
  {
    record_byte_offset = 2;
    left_text = (     char *)&dword_140404A6C[16 * (__int64)i + 468675643];
    do
    {
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451017797]) )
        *buffer_cursor = record_byte_offset - 2;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451020885]) )
        *buffer_cursor = record_byte_offset - 1;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451023973]) )
        *buffer_cursor = record_byte_offset;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451027061]) )
        *buffer_cursor = record_byte_offset + 1;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451030149]) )
        *buffer_cursor = record_byte_offset + 2;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451033237]) )
        *buffer_cursor = record_byte_offset + 3;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451036325]) )
        *buffer_cursor = record_byte_offset + 4;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451039413]) )
        *buffer_cursor = record_byte_offset + 5;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451042501]) )
        *buffer_cursor = record_byte_offset + 6;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451045589]) )
        *buffer_cursor = record_byte_offset + 7;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451048677]) )
        *buffer_cursor = record_byte_offset + 8;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451051765]) )
        *buffer_cursor = record_byte_offset + 9;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451054853]) )
        *buffer_cursor = record_byte_offset + 10;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451057941]) )
        *buffer_cursor = record_byte_offset + 11;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451061029]) )
        *buffer_cursor = record_byte_offset + 12;
      if ( !strcmp_sr(left_text, (     char *)&dword_140404A6C[3088 * record_byte_offset + 451064117]) )
        *buffer_cursor = record_byte_offset + 13;
      record_byte_offset += 16;
      result = (unsigned int)(record_byte_offset - 2);
    }
    while ( (int)result < 64 );
    ++i;
  }
  return result;
}

//----- (0000000140027A60) ----------------------------------------------------
__int64 sub_140027A60()
{
  unsigned int *buffer_cursor;
  __int64 result;
  int element_index;
  int state_word;
  signed int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  int masked_bits;
  int loaded_word;

  buffer_cursor = &g_1AFFF0F5C;
  crt_memset((void *)(uintptr_t)(&g_1AFFF0F5C), 0, 0x1000u);
  result = g_1AFFE0F58;
  element_index = 0;
  if ( (int)g_1AFFE0F58 > 0 )
  {
    state_word = g_181676080;
    do
    {
      iteration_count = 0;
      if ( state_word > 0 )
      {
        state_address = &g_1812C2080;
        do
        {
          state_address_2 = &dword_140404A6C[16 * (__int64)element_index + 468676924];
          do
          {
            masked_bits = *((unsigned __int8 *)state_address_2 + ((char *)state_address - (char *)&dword_140404A6C[16 * (__int64)element_index + 468676924]));
            loaded_word = *(unsigned __int8 *)state_address_2 - masked_bits;
            if ( loaded_word )
              break;
            state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
          }
          while ( masked_bits );
          if ( !loaded_word )
            *buffer_cursor = iteration_count;
          ++iteration_count;
          state_address += 948;
        }
        while ( iteration_count < state_word );
        result = g_1AFFE0F58;
      }
      ++element_index;
      ++buffer_cursor;
    }
    while ( element_index < (int)result );
  }
  return result;
}

//----- (0000000140027B40) ----------------------------------------------------
__int64 sub_140027B40()
{
  unsigned int *buffer_cursor;
  __int64 result;
  int element_index;
  int state_word;
  signed int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  int masked_bits;
  int loaded_word;

  buffer_cursor = &g_1AFFDEB54;
  crt_memset((void *)(uintptr_t)(&g_1AFFDEB54), 0, 0x1000u);
  result = g_1AFFCEB50;
  element_index = 0;
  if ( (int)g_1AFFCEB50 > 0 )
  {
    state_word = g_14500A700;
    do
    {
      iteration_count = 0;
      if ( state_word > 0 )
      {
        state_address = &g_145098C00;
        do
        {
          state_address_2 = &dword_140404A6C[16 * (__int64)element_index + 468658234];
          do
          {
            masked_bits = *((unsigned __int8 *)state_address_2 + ((char *)state_address - (char *)&dword_140404A6C[16 * (__int64)element_index + 468658234]));
            loaded_word = *(unsigned __int8 *)state_address_2 - masked_bits;
            if ( loaded_word )
              break;
            state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
          }
          while ( masked_bits );
          if ( !loaded_word )
            *buffer_cursor = iteration_count;
          ++iteration_count;
          state_address += 58;
        }
        while ( iteration_count < state_word );
        result = g_1AFFCEB50;
      }
      ++element_index;
      ++buffer_cursor;
    }
    while ( element_index < (int)result );
  }
  return result;
}

//----- (0000000140027C20) ----------------------------------------------------
__int64 sub_140027C20()
{
  unsigned int *buffer_cursor;
  __int64 result;
  int element_index;
  int state_word;
  signed int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  int masked_bits;
  int loaded_word;

  buffer_cursor = &g_1AFFCDB50;
  crt_memset((void *)(uintptr_t)(&g_1AFFCDB50), 0, 0x400u);
  result = g_1AFFC9B4C;
  element_index = 0;
  if ( (int)g_1AFFC9B4C > 0 )
  {
    state_word = g_1A4CFF560;
    do
    {
      iteration_count = 0;
      if ( state_word > 0 )
      {
        state_address = &g_1A4CFFCF8;
        do
        {
          state_address_2 = &dword_140404A6C[16 * (__int64)element_index + 468653113];
          do
          {
            masked_bits = *((unsigned __int8 *)state_address_2 + ((char *)state_address - (char *)&dword_140404A6C[16 * (__int64)element_index + 468653113]));
            loaded_word = *(unsigned __int8 *)state_address_2 - masked_bits;
            if ( loaded_word )
              break;
            state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
          }
          while ( masked_bits );
          if ( !loaded_word )
            *buffer_cursor = iteration_count;
          ++iteration_count;
          state_address += 46;
        }
        while ( iteration_count < state_word );
        result = g_1AFFC9B4C;
      }
      ++element_index;
      ++buffer_cursor;
    }
    while ( element_index < (int)result );
  }
  return result;
}

//----- (0000000140028790) ----------------------------------------------------
__int64            sub_140028790(     char *a1, int a2)
{
  __int64 input_value;
  __int64 file_handle;
  __int64 file_handle_2;
  __int64 scaled_index;
  __int64 record_byte_offset;
  unsigned int *state_address;
  __int64 running_total;
  unsigned int *state_address_2;
  signed int iteration_count;
  __int64 scaled_index_2;
  signed int iteration_count_2;
  __int64 scaled_index_3;
  signed int iteration_count_3;
  __int64 saved_record_byte_offset;
  __int64 scaled_index_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140028790[160];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140028790 + 0)) /* [rsp+0h] */
#define selection_flag (*(int (*))(void *)(sr_frame_140028790 + 32)) /* [rsp+20h] */
#define saved_record_byte_offset_2 (*(__int64 (*))(void *)(sr_frame_140028790 + 40)) /* [rsp+28h] */
#define record_byte_offset_2 (*(__int64 (*))(void *)(sr_frame_140028790 + 48)) /* [rsp+30h] */
#define remaining_count (*(__int64 (*))(void *)(sr_frame_140028790 + 56)) /* [rsp+38h] */
#define saved_state_address (*(unsigned int * (*))(void *)(sr_frame_140028790 + 64)) /* [rsp+40h] */
#define scratch_buffer (*(char (*)[64])(void *)(sr_frame_140028790 + 80)) /* [rsp+50h] */
#define unused_frame_slot_144 (*(__int64 (*))(void *)(sr_frame_140028790 + 144)) /* [rsp+90h] */

  input_value = a2;
  crt_sprintf(scratch_buffer, "buildblock/%s.sbl", a1);
  file_handle = crt_fopen(scratch_buffer, "wb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    selection_flag = 1;
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE000)(&selection_flag, 4, 1, file_handle);
    scaled_index = 12352 * input_value;
    record_byte_offset = 0;
    record_byte_offset_2 = 0;
    saved_record_byte_offset_2 = 0;
    remaining_count = 16;
    state_address = &dword_140404A6C[3088 * input_value + 451024002];
    running_total = 3088 * input_value;
    do
    {
      state_address_2 = &dword_140404A6C[running_total + 451024083];
      saved_state_address = state_address_2;
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 94,
        4,
        1,
        file_handle_2,
        selection_flag);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 93,
        4,
        1,
        file_handle_2,
        selection_flag);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 92,
        4,
        1,
        file_handle_2,
        selection_flag);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 91,
        4,
        1,
        file_handle_2,
        selection_flag);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 90,
        4,
        1,
        file_handle_2,
        selection_flag);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 88,
        4,
        1,
        file_handle_2,
        selection_flag);
      iteration_count = 0;
      if ( (int)*(state_address - 7) > 0 )
      {
        do
        {
          scaled_index_2 = scaled_index + 12 * (record_byte_offset + iteration_count);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C5C + scaled_index_2,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C60 + scaled_index_2,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C64 + scaled_index_2,
            4,
            1,
            file_handle_2,
            selection_flag);
          ++iteration_count;
        }
        while ( iteration_count < (int)*(state_address - 7) );
        state_address_2 = saved_state_address;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2 - 81,
        4,
        1,
        file_handle_2,
        selection_flag);
      iteration_count_2 = 0;
      if ( (int)*state_address > 0 )
      {
        do
        {
          scaled_index_3 = running_total * 4 + 20LL * iteration_count_2;
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C78 + scaled_index_3,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C7C + scaled_index_3,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C80 + scaled_index_3,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C84 + scaled_index_3,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89C88 + scaled_index_3,
            4,
            1,
            file_handle_2,
            selection_flag);
          ++iteration_count_2;
        }
        while ( iteration_count_2 < (int)*state_address );
        record_byte_offset = saved_record_byte_offset_2;
      }
      (*(void (           **)(unsigned int *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
        state_address_2,
        4,
        1,
        file_handle_2,
        selection_flag);
      iteration_count_3 = 0;
      if ( (int)state_address[81] > 0 )
      {
        saved_record_byte_offset = record_byte_offset_2;
        do
        {
          scaled_index_4 = scaled_index + 24 * (saved_record_byte_offset + iteration_count_3);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DBC + scaled_index_4,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DC4 + scaled_index_4,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DC8 + scaled_index_4,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DCC + scaled_index_4,
            4,
            1,
            file_handle_2,
            selection_flag);
          (*(void (           **)(char *, __int64, __int64, __int64, int))(unsigned int *)&g_1862AE000)(
            (char *)&g_1ABC89DD0 + scaled_index_4,
            4,
            1,
            file_handle_2,
            selection_flag);
          ++iteration_count_3;
        }
        while ( iteration_count_3 < (int)state_address[81] );
        record_byte_offset = saved_record_byte_offset_2;
      }
      record_byte_offset_2 += 32;
      record_byte_offset += 64;
      running_total += 192;
      state_address += 192;
      saved_record_byte_offset_2 = record_byte_offset;
      --remaining_count;
    }
    while ( remaining_count );
    crt_fclose(file_handle_2);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef selection_flag
#undef saved_record_byte_offset_2
#undef record_byte_offset_2
#undef remaining_count
#undef saved_state_address
#undef scratch_buffer
#undef unused_frame_slot_144

//----- (0000000140028BD0) ----------------------------------------------------
__int64 sub_140028BD0()
{
  unsigned int *buffer_cursor;
  signed int state_word;
  signed int element_index;
  int state_word_2;
  signed int iteration_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  int masked_bits;
  int loaded_word;
  unsigned int *buffer_cursor_2;
  signed int state_word_3;
  signed int element_index_2;
  int state_word_4;
  signed int iteration_count_2;
       char *right_text;
  unsigned int *buffer_cursor_3;
  signed int state_word_5;
  signed int element_index_3;
  int state_word_6;
  signed int iteration_count_3;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  int masked_bits_2;
  int loaded_word_2;
  signed int state_word_7;
  signed int iteration_count_4;
  __int64 result;
  int state_word_8;
  __int64 record_byte_offset;
  int iteration_count_5;
  __int64 iteration_count_6;
  int iteration_count_7;
  __int64 scaled_index;
  unsigned int *hibyte_result;
  _WORD *saved_loword_result;
  unsigned int scaled_index_2;
  unsigned int scaled_index_3;
  __int16 scaled_index_4;
  __int16 loword_result;
  __int16 scaled_index_5;
  __int16 loword_result_2;
  __int16 scaled_index_6;
  __int16 loword_result_3;
  __int16 scaled_index_7;
  __int16 loword_result_4;
  __int16 scaled_index_8;
  __int16 loword_result_5;
  __int16 scaled_index_9;
  __int16 loword_result_6;
  __int16 scaled_index_10;
  int scaled_index_11;
  unsigned int masked_bits_3;

  buffer_cursor = &g_1AFFCDB50;
  crt_memset((void *)(uintptr_t)(&g_1AFFCDB50), 0, 0x400u);
  state_word = g_1AFFC9B4C;
  element_index = 0;
  if ( (int)g_1AFFC9B4C > 0 )
  {
    state_word_2 = g_1A4CFF560;
    do
    {
      iteration_count = 0;
      if ( state_word_2 > 0 )
      {
        state_address = &g_1A4CFFCF8;
        do
        {
          state_address_2 = &dword_140404A6C[16 * (__int64)element_index + 468653113];
          do
          {
            masked_bits = *((unsigned __int8 *)state_address_2 + ((char *)state_address - (char *)&dword_140404A6C[16 * (__int64)element_index + 468653113]));
            loaded_word = *(unsigned __int8 *)state_address_2 - masked_bits;
            if ( loaded_word )
              break;
            state_address_2 = (unsigned int *)((char *)state_address_2 + 1);
          }
          while ( masked_bits );
          if ( !loaded_word )
            *buffer_cursor = iteration_count;
          ++iteration_count;
          state_address += 46;
        }
        while ( iteration_count < state_word_2 );
        state_word = g_1AFFC9B4C;
      }
      ++element_index;
      ++buffer_cursor;
    }
    while ( element_index < state_word );
  }
  buffer_cursor_2 = &g_1AFFDEB54;
  crt_memset((void *)(uintptr_t)(&g_1AFFDEB54), 0, 0x1000u);
  state_word_3 = g_1AFFCEB50;
  element_index_2 = 0;
  if ( (int)g_1AFFCEB50 > 0 )
  {
    state_word_4 = g_14500A700;
    do
    {
      iteration_count_2 = 0;
      if ( state_word_4 > 0 )
      {
        right_text = (     char *)&g_145098C00;
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)element_index_2 + 468658234], right_text) )
            *buffer_cursor_2 = iteration_count_2;
          ++iteration_count_2;
          right_text += 232;
        }
        while ( iteration_count_2 < state_word_4 );
        state_word_3 = g_1AFFCEB50;
      }
      ++element_index_2;
      ++buffer_cursor_2;
    }
    while ( element_index_2 < state_word_3 );
  }
  sub_140027690();
  buffer_cursor_3 = &g_1AFFF0F5C;
  crt_memset((void *)(uintptr_t)(&g_1AFFF0F5C), 0, 0x1000u);
  state_word_5 = g_1AFFE0F58;
  element_index_3 = 0;
  if ( (int)g_1AFFE0F58 > 0 )
  {
    state_word_6 = g_181676080;
    do
    {
      iteration_count_3 = 0;
      if ( state_word_6 > 0 )
      {
        state_address_3 = &g_1812C2080;
        do
        {
          state_address_4 = &dword_140404A6C[16 * (__int64)element_index_3 + 468676924];
          do
          {
            masked_bits_2 = *((unsigned __int8 *)state_address_4 + ((char *)state_address_3 - (char *)&dword_140404A6C[16 * (__int64)element_index_3 + 468676924]));
            loaded_word_2 = *(unsigned __int8 *)state_address_4 - masked_bits_2;
            if ( loaded_word_2 )
              break;
            state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
          }
          while ( masked_bits_2 );
          if ( !loaded_word_2 )
            *buffer_cursor_3 = iteration_count_3;
          ++iteration_count_3;
          state_address_3 += 948;
        }
        while ( iteration_count_3 < state_word_6 );
        state_word_5 = g_1AFFE0F58;
      }
      ++element_index_3;
      ++buffer_cursor_3;
    }
    while ( element_index_3 < state_word_5 );
  }
  state_word_7 = g_1AD2C94E8;
  iteration_count_4 = 0;
  result = g_1AD2C94E0;
  state_word_8 = g_1AD2C94E4;
  g_1AE1C94F8 = g_1AD2C94E0;
  g_1AE1C94FC = g_1AD2C94E4;
  g_1AE1C9500 = g_1AD2C94E8;
  if ( (int)g_1AD2C94E8 > 0 )
  {
    record_byte_offset = 0;
    do
    {
      iteration_count_5 = 0;
      iteration_count_6 = 0;
      if ( state_word_8 >= 0 )
      {
        do
        {
          iteration_count_7 = 0;
          if ( (int)result >= 0 )
          {
            scaled_index = 960 * (record_byte_offset + iteration_count_6);
            hibyte_result = &dword_140404A6C[scaled_index + 460788394];
            saved_loword_result = (_WORD *)&dword_140404A6C[scaled_index + 460788399] + 1;
            do
            {
              scaled_index_2 = *(hibyte_result - 3932166);
              *hibyte_result = scaled_index_2;
              if ( (scaled_index_2 & 0xE0000000) == 0x80000000 )
                *hibyte_result = (HIBYTE(scaled_index_2) & 3) + (dword_140404A6C[(scaled_index_2 & 0x3FF) + 468674618] | 0x80000000);
              scaled_index_3 = *(hibyte_result - 3932165);
              hibyte_result[1] = scaled_index_3;
              if ( (scaled_index_3 & 0xE0000000) == 0x80000000 )
                hibyte_result[1] = (HIBYTE(scaled_index_3) & 3) + (dword_140404A6C[(scaled_index_3 & 0x3FF) + 468674618] | 0x80000000);
              *(hibyte_result - 1) = dword_140404A6C[*(hibyte_result - 3932167) + 468675899];
              hibyte_result[2] = *(hibyte_result - 3932164);
              hibyte_result[3] = *(hibyte_result - 3932163);
              hibyte_result[4] = *(hibyte_result - 3932162);
              scaled_index_4 = *(saved_loword_result - 7864332);
              *(saved_loword_result - 1) = *(saved_loword_result - 7864333) & 0xFF00
                         | LOWORD(dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864333) + 468657209]);
              loword_result = scaled_index_4 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_4 + 468657209]);
              scaled_index_5 = *(saved_loword_result - 7864331);
              *saved_loword_result = loword_result;
              loword_result_2 = scaled_index_5 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_5 + 468657209]);
              scaled_index_6 = *(saved_loword_result - 7864330);
              saved_loword_result[1] = loword_result_2;
              loword_result_3 = scaled_index_6 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_6 + 468657209]);
              scaled_index_7 = *(saved_loword_result - 7864329);
              saved_loword_result[2] = loword_result_3;
              loword_result_4 = scaled_index_7 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_7 + 468657209]);
              scaled_index_8 = *(saved_loword_result - 7864328);
              saved_loword_result[3] = loword_result_4;
              loword_result_5 = scaled_index_8 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_8 + 468657209]);
              scaled_index_9 = *(saved_loword_result - 7864327);
              saved_loword_result[4] = loword_result_5;
              loword_result_6 = scaled_index_9 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_9 + 468657209]);
              scaled_index_10 = *(saved_loword_result - 7864326);
              saved_loword_result[5] = loword_result_6;
              saved_loword_result[6] = scaled_index_10 & 0xFF00 | LOWORD(dword_140404A6C[(unsigned __int8)scaled_index_10 + 468657209]);
              saved_loword_result[7] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864325) + 468657209];
              saved_loword_result[8] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864324) + 468657209];
              saved_loword_result[9] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864323) + 468657209];
              saved_loword_result[10] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864322) + 468657209];
              saved_loword_result[11] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864321) + 468657209];
              saved_loword_result[12] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864320) + 468657209];
              saved_loword_result[13] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864319) + 468657209];
              saved_loword_result[14] = dword_140404A6C[(unsigned __int8)*(saved_loword_result - 7864318) + 468657209];
              scaled_index_11 = *(hibyte_result - 3932153);
              if ( scaled_index_11 )
                masked_bits_3 = dword_140404A6C[(scaled_index_11 & 0x3FF) + 468693308] | scaled_index_11 & 0x3000000 | 0x40000000;
              else
                masked_bits_3 = 0;
              hibyte_result[13] = masked_bits_3;
              ++iteration_count_7;
              result = g_1AE1C94F8;
              hibyte_result += 15;
              saved_loword_result += 30;
            }
            while ( iteration_count_7 <= (int)g_1AE1C94F8 );
            state_word_8 = g_1AE1C94FC;
          }
          ++iteration_count_5;
          ++iteration_count_6;
        }
        while ( iteration_count_5 <= state_word_8 );
        state_word_7 = g_1AE1C9500;
      }
      ++iteration_count_4;
      record_byte_offset += 64;
    }
    while ( iteration_count_4 < state_word_7 );
  }
  return result;
}

//----- (0000000140029120) ----------------------------------------------------
__int64 sub_140029120()
{
  int state_word;
  int state_word_2;
  int iteration_count;
  int state_word_3;
  __int64 iteration_count_2;
  __int64 iteration_count_3;
  __int64 remaining_count;
  __int64 iteration_count_4;
  int integer_difference;
  __int64 shifted_bits;
  __int64 scaled_index;
  unsigned int *state_address;
  __int64 remaining_count_2;
  _WORD *state_address_2;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  __int64 shifted_bits_2;
  unsigned int table_value;
  __int64 result;
  signed int state_word_4;
  __int64 iteration_count_5;
  __int64 iteration_count_6;
  int state_word_5;
  __int64 remaining_count_3;
  __int64 element_index;
  __int64 remaining_count_4;
  __int64 shifted_bits_3;
  __int64 running_total;
  __int64 running_total_2;
  unsigned int table_value_2;
  int record_byte_offset;
  __int64 i;
  unsigned int scaled_index_2;
  unsigned int integer_difference_2;
  unsigned int table_value_3;
  __int64 unused_written_slot;
  int iteration_count_7;
  unsigned int masked_bits;
  unsigned int *state_address_5;
  __int64 iteration_count_8;
  __int64 scaled_index_3;
  unsigned int scaled_index_4;
  unsigned int integer_difference_3;
  unsigned int table_value_4;
  __int64 unused_written_slot_2;
  int iteration_count_9;
  unsigned int masked_bits_2;
  unsigned int *state_address_6;
  __int64 iteration_count_10;
  __int64 scaled_index_5;
  unsigned int scaled_index_6;
  unsigned int integer_difference_4;
  unsigned int table_value_5;
  __int64 unused_written_slot_3;
  int iteration_count_11;
  unsigned int masked_bits_3;
  unsigned int *state_address_7;
  __int64 iteration_count_12;
  __int64 scaled_index_7;
  unsigned int scaled_index_8;
  unsigned int integer_difference_5;
  unsigned int table_value_6;
  __int64 unused_written_slot_4;
  int iteration_count_13;
  unsigned int masked_bits_4;
  unsigned int *state_address_8;
  __int64 iteration_count_14;
  __int64 scaled_index_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029120[128];
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140029120 + 0)) /* [rsp+0h] */
#define saved_iteration_count (*(__int64 (*))(void *)(sr_frame_140029120 + 8)) /* [rsp+8h] */
#define saved_call_status (*(int (*))(void *)(sr_frame_140029120 + 96)) /* [rsp+60h] */
#define saved_remaining_count_2 (*(__int64 (*))(void *)(sr_frame_140029120 + 112)) /* [rsp+70h] */
#define saved_iteration_count_2 (*(__int64 (*))(void *)(sr_frame_140029120 + 120)) /* [rsp+78h] */

  state_word = g_1AE1C9500;
  state_word_2 = g_1AE1C94FC;
  iteration_count = 0;
  if ( (int)g_1AE1C9500 > 0 )
  {
    state_word_3 = g_1AE1C94F8;
    iteration_count_2 = 0;
    do
    {
      iteration_count_3 = 0;
      if ( state_word_2 >= 0 )
      {
        remaining_count = (unsigned int)(state_word_2 + 1);
        do
        {
          iteration_count_4 = 0;
          if ( state_word_3 >= 0 )
          {
            integer_difference = state_word - 1;
            shifted_bits = iteration_count_3 + (iteration_count_2 << 6);
            scaled_index = 960 * shifted_bits;
            state_address = &dword_140404A6C[1216 * shifted_bits + 451221710];
            remaining_count_2 = (unsigned int)(state_word_3 + 1);
            state_address_2 = (_WORD *)&dword_140404A6C[451221717 + 1216 * shifted_bits];
            state_address_3 = &dword_140404A6C[scaled_index + 460788395];
            state_address_4 = &dword_140404A6C[scaled_index + 460788400];
            do
            {
              *(state_address - 1) = *(state_address_3 - 1);
              *state_address = *state_address_3;
              *(state_address_2 - 2) = *((_WORD *)state_address_4 - 2);
              *(state_address_2 - 1) = *((_WORD *)state_address_4 - 1);
              *state_address_2 = *(_WORD *)state_address_4;
              state_address_2[1] = *((_WORD *)state_address_4 + 1);
              state_address_2[2] = *((_WORD *)state_address_4 + 2);
              state_address_2[3] = *((_WORD *)state_address_4 + 3);
              state_address_2[4] = *((_WORD *)state_address_4 + 4);
              state_address_2[5] = *((_WORD *)state_address_4 + 5);
              state_address_2[6] = *((_WORD *)state_address_4 + 6);
              state_address_2[7] = *((_WORD *)state_address_4 + 7);
              state_address_2[8] = *((_WORD *)state_address_4 + 8);
              state_address_2[9] = *((_WORD *)state_address_4 + 9);
              state_address_2[10] = *((_WORD *)state_address_4 + 10);
              state_address_2[11] = *((_WORD *)state_address_4 + 11);
              state_address_2[12] = *((_WORD *)state_address_4 + 12);
              state_address_2[13] = *((_WORD *)state_address_4 + 13);
              *((_QWORD *)state_address + 2) = state_address_3[3];
              if ( iteration_count >= integer_difference
                || (shifted_bits_2 = 15 * (iteration_count_4 + ((iteration_count_3 + ((iteration_count_2 + 1) << 6)) << 6)), !dword_140404A6C[shifted_bits_2 + 460788394])
                || !dword_140404A6C[shifted_bits_2 + 460788395]
                || dword_140404A6C[shifted_bits_2 + 460788398] )
              {
                state_address[5] = 1;
              }
              ++iteration_count_4;
              state_address[1] = *(state_address_3 - 2);
              state_address_4 += 15;
              state_address_2 += 38;
              state_address[2] = state_address_3[1];
              state_address[3] = state_address_3[2];
              table_value = state_address_3[12];
              state_address_3 += 15;
              state_address[17] = table_value;
              state_address += 19;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            state_word = g_1AE1C9500;
          }
          ++iteration_count_3;
          --remaining_count;
        }
        while ( remaining_count );
        state_word_2 = g_1AE1C94FC;
      }
      ++iteration_count;
      ++iteration_count_2;
    }
    while ( iteration_count < state_word );
  }
  result = 0;
  saved_call_status = 0;
  if ( state_word > 0 )
  {
    state_word_4 = g_1A4CF0940;
    iteration_count_5 = 0;
    saved_iteration_count = 0;
    do
    {
      iteration_count_6 = 0;
      saved_iteration_count_2 = 0;
      if ( state_word_2 >= 0 )
      {
        state_word_5 = g_1AE1C94F8;
        remaining_count_3 = (unsigned int)(state_word_2 + 1);
        saved_remaining_count = remaining_count_3;
        do
        {
          element_index = 0;
          if ( state_word_5 >= 0 )
          {
            remaining_count_4 = (unsigned int)(state_word_5 + 1);
            shifted_bits_3 = iteration_count_6 + (iteration_count_5 << 6);
            saved_remaining_count_2 = remaining_count_4;
            running_total = 2432 * shifted_bits_3;
            running_total_2 = 1216 * shifted_bits_3;
            do
            {
              if ( dword_140404A6C[running_total_2 + 451221709] == 0x40000000 )
              {
                table_value_2 = dword_140404A6C[running_total_2 + 451221710];
                if ( table_value_2 == 0xFFFF
                  || !table_value_2
                  || dword_140404A6C[58 * (unsigned __int16)table_value_2 + 20074650]
                  || (table_value_2 & 0xC0000000) == 0xC0000000 )
                {
                  record_byte_offset = 1;
                  for ( i = 1; i < 5; i += 4 )
                  {
                    switch ( i )
                    {
                      case 1LL:
                        scaled_index_2 = dword_140404A6C[1216 * shifted_bits_3 + 451222928 + 19 * element_index];
                        break;
                      case 2LL:
                        scaled_index_2 = dword_140404A6C[running_total_2 + 451221713];
                        break;
                      case 3LL:
                        scaled_index_2 = dword_140404A6C[running_total_2 + 451221712];
                        break;
                      default:
                        scaled_index_2 = dword_140404A6C[running_total_2 + 451221732];
                        break;
                    }
                    integer_difference_2 = scaled_index_2 - 3;
                    if ( scaled_index_2 - 3 <= 0xC )
                    {
                      table_value_3 = dword_140404A6C[running_total_2 + 451221711];
                      unused_written_slot = 2 * (running_total + i) + 1809100220;
                      iteration_count_7 = 0;
                      masked_bits = *(unsigned __int16 *)((char *)&g_1ABD4ADBC + 2 * (running_total + i));
                      state_address_5 = &g_1A4CF0948;
                      iteration_count_8 = 0;
                      do
                      {
                        if ( iteration_count_7 >= state_word_4 )
                          break;
                        if ( *(state_address_5 - 1) == masked_bits && *state_address_5 == table_value_3 && state_address_5[1] == integer_difference_2 )
                          goto LABEL_46;
                        ++iteration_count_7;
                        ++iteration_count_8;
                        state_address_5 += 3;
                      }
                      while ( (__int64)state_address_5 < (__int64)&g_1A4CFC948 );
                      if ( iteration_count_7 < 4096 )
                      {
                        scaled_index_3 = 3 * iteration_count_8;
                        state_word_4 = iteration_count_7 + 1;
                        dword_140404A6C[scaled_index_3 + 421769142] = masked_bits;
                        dword_140404A6C[scaled_index_3 + 421769143] = table_value_3;
                        dword_140404A6C[scaled_index_3 + 421769144] = integer_difference_2;
                        g_1A4CF0940 = iteration_count_7 + 1;
                      }
                      else
                      {
                        LOWORD(iteration_count_7) = 0;
                      }
LABEL_46:
                      *(_WORD *)((char *)&g_1ABD4ADBC + 2 * (running_total + i)) = iteration_count_7 + 0x8000;
                    }
                    if ( record_byte_offset )
                    {
                      if ( record_byte_offset == 1 )
                      {
                        scaled_index_4 = dword_140404A6C[running_total_2 + 451221713];
                      }
                      else if ( record_byte_offset == 2 )
                      {
                        scaled_index_4 = dword_140404A6C[running_total_2 + 451221712];
                      }
                      else
                      {
                        scaled_index_4 = dword_140404A6C[running_total_2 + 451221732];
                      }
                    }
                    else
                    {
                      scaled_index_4 = dword_140404A6C[1216 * shifted_bits_3 + 451222928 + 19 * element_index];
                    }
                    integer_difference_3 = scaled_index_4 - 3;
                    if ( scaled_index_4 - 3 <= 0xC )
                    {
                      table_value_4 = dword_140404A6C[running_total_2 + 451221711];
                      unused_written_slot_2 = 2 * (running_total + i) + 1809100222;
                      iteration_count_9 = 0;
                      masked_bits_2 = *(unsigned __int16 *)((char *)&g_1ABD4ADBC + 2 + 2 * (running_total + i));
                      state_address_6 = &g_1A4CF0948;
                      iteration_count_10 = 0;
                      do
                      {
                        if ( iteration_count_9 >= state_word_4 )
                          break;
                        if ( *(state_address_6 - 1) == masked_bits_2 && *state_address_6 == table_value_4 && state_address_6[1] == integer_difference_3 )
                          goto LABEL_64;
                        ++iteration_count_9;
                        ++iteration_count_10;
                        state_address_6 += 3;
                      }
                      while ( (__int64)state_address_6 < (__int64)&g_1A4CFC948 );
                      if ( iteration_count_9 < 4096 )
                      {
                        scaled_index_5 = 3 * iteration_count_10;
                        dword_140404A6C[scaled_index_5 + 421769142] = masked_bits_2;
                        state_word_4 = iteration_count_9 + 1;
                        dword_140404A6C[scaled_index_5 + 421769143] = table_value_4;
                        dword_140404A6C[scaled_index_5 + 421769144] = integer_difference_3;
                        g_1A4CF0940 = iteration_count_9 + 1;
                      }
                      else
                      {
                        LOWORD(iteration_count_9) = 0;
                      }
LABEL_64:
                      *(_WORD *)((char *)&g_1ABD4ADBC + 2 + 2 * (running_total + i)) = iteration_count_9 + 0x8000;
                    }
                    if ( record_byte_offset == -1 )
                    {
                      scaled_index_6 = dword_140404A6C[1216 * shifted_bits_3 + 451222928 + 19 * element_index];
                    }
                    else if ( record_byte_offset )
                    {
                      if ( record_byte_offset == 1 )
                        scaled_index_6 = dword_140404A6C[running_total_2 + 451221712];
                      else
                        scaled_index_6 = dword_140404A6C[running_total_2 + 451221732];
                    }
                    else
                    {
                      scaled_index_6 = dword_140404A6C[running_total_2 + 451221713];
                    }
                    integer_difference_4 = scaled_index_6 - 3;
                    if ( scaled_index_6 - 3 <= 0xC )
                    {
                      table_value_5 = dword_140404A6C[running_total_2 + 451221711];
                      unused_written_slot_3 = 2 * (running_total + i) + 1809100224;
                      iteration_count_11 = 0;
                      masked_bits_3 = *(unsigned __int16 *)((char *)&g_1ABD4ADC0 + 2 * (running_total + i));
                      state_address_7 = &g_1A4CF0948;
                      iteration_count_12 = 0;
                      do
                      {
                        if ( iteration_count_11 >= state_word_4 )
                          break;
                        if ( *(state_address_7 - 1) == masked_bits_3 && *state_address_7 == table_value_5 && state_address_7[1] == integer_difference_4 )
                          goto LABEL_82;
                        ++iteration_count_11;
                        ++iteration_count_12;
                        state_address_7 += 3;
                      }
                      while ( (__int64)state_address_7 < (__int64)&g_1A4CFC948 );
                      if ( iteration_count_11 < 4096 )
                      {
                        scaled_index_7 = 3 * iteration_count_12;
                        dword_140404A6C[scaled_index_7 + 421769142] = masked_bits_3;
                        state_word_4 = iteration_count_11 + 1;
                        dword_140404A6C[scaled_index_7 + 421769143] = table_value_5;
                        dword_140404A6C[scaled_index_7 + 421769144] = integer_difference_4;
                        g_1A4CF0940 = iteration_count_11 + 1;
                      }
                      else
                      {
                        LOWORD(iteration_count_11) = 0;
                      }
LABEL_82:
                      *(_WORD *)((char *)&g_1ABD4ADC0 + 2 * (running_total + i)) = iteration_count_11 + 0x8000;
                    }
                    if ( record_byte_offset == -2 )
                    {
                      scaled_index_8 = dword_140404A6C[1216 * shifted_bits_3 + 451222928 + 19 * element_index];
                    }
                    else if ( record_byte_offset == -1 )
                    {
                      scaled_index_8 = dword_140404A6C[running_total_2 + 451221713];
                    }
                    else if ( record_byte_offset )
                    {
                      scaled_index_8 = dword_140404A6C[running_total_2 + 451221732];
                    }
                    else
                    {
                      scaled_index_8 = dword_140404A6C[running_total_2 + 451221712];
                    }
                    integer_difference_5 = scaled_index_8 - 3;
                    if ( scaled_index_8 - 3 <= 0xC )
                    {
                      table_value_6 = dword_140404A6C[running_total_2 + 451221711];
                      unused_written_slot_4 = 2 * (running_total + i) + 1809100226;
                      iteration_count_13 = 0;
                      masked_bits_4 = *(unsigned __int16 *)((char *)&g_1ABD4ADC0 + 2 + 2 * (running_total + i));
                      state_address_8 = &g_1A4CF0948;
                      iteration_count_14 = 0;
                      do
                      {
                        if ( iteration_count_13 >= state_word_4 )
                          break;
                        if ( *(state_address_8 - 1) == masked_bits_4 && *state_address_8 == table_value_6 && state_address_8[1] == integer_difference_5 )
                          goto LABEL_100;
                        ++iteration_count_13;
                        ++iteration_count_14;
                        state_address_8 += 3;
                      }
                      while ( (__int64)state_address_8 < (__int64)&g_1A4CFC948 );
                      if ( iteration_count_13 < 4096 )
                      {
                        scaled_index_9 = 3 * iteration_count_14;
                        dword_140404A6C[scaled_index_9 + 421769142] = masked_bits_4;
                        state_word_4 = iteration_count_13 + 1;
                        dword_140404A6C[scaled_index_9 + 421769143] = table_value_6;
                        dword_140404A6C[scaled_index_9 + 421769144] = integer_difference_5;
                        g_1A4CF0940 = iteration_count_13 + 1;
                      }
                      else
                      {
                        LOWORD(iteration_count_13) = 0;
                      }
LABEL_100:
                      *(_WORD *)((char *)&g_1ABD4ADC0 + 2 + 2 * (running_total + i)) = iteration_count_13 + 0x8000;
                    }
                    record_byte_offset += 4;
                  }
                  remaining_count_4 = saved_remaining_count_2;
                }
              }
              ++element_index;
              running_total_2 += 19;
              running_total += 38;
              saved_remaining_count_2 = --remaining_count_4;
            }
            while ( remaining_count_4 );
            iteration_count_6 = saved_iteration_count_2;
            remaining_count_3 = saved_remaining_count;
            iteration_count_5 = saved_iteration_count;
            state_word_5 = g_1AE1C94F8;
          }
          ++iteration_count_6;
          --remaining_count_3;
          saved_iteration_count_2 = iteration_count_6;
          saved_remaining_count = remaining_count_3;
        }
        while ( remaining_count_3 );
        LODWORD(result) = saved_call_status;
        state_word_2 = g_1AE1C94FC;
      }
      result = (unsigned int)(result + 1);
      ++iteration_count_5;
      saved_call_status = result;
      saved_iteration_count = iteration_count_5;
    }
    while ( (int)result < (int)g_1AE1C9500 );
  }
  return result;
}
#undef saved_remaining_count
#undef saved_iteration_count
#undef saved_call_status
#undef saved_remaining_count_2
#undef saved_iteration_count_2

//----- (0000000140037DE0) ----------------------------------------------------
void            sub_140037DE0(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 input_value;
  __int64 block_record_offset;
  signed int shifted_bits;
  signed int table_value;
  signed int table_value_2;
  __int64 shifted_bits_2;
  __int64 cached_world_grid_block_count;
  __int64 shifted_bits_3;
  __int64 cached_world_grid_leaf_count;
  __int64 remaining_count;
  __int64 running_total;
  __int64 shifted_bits_4;
  __int64 loaded_word;

  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    input_value = a1;
    block_record_offset = 263004LL * a1;
    shifted_bits = (unsigned int)a2 >> 6;
    table_value = dword_140404A6C[block_record_offset + 111579650];
    if ( shifted_bits < table_value && (int)(a3 >> 6) < (int)dword_140404A6C[block_record_offset + 111579651] )
    {
      table_value_2 = dword_140404A6C[block_record_offset + 111579652];
      if ( (int)(a4 >> 6) < table_value_2 )
      {
        shifted_bits_2 = 4LL * (int)(shifted_bits + table_value * ((a4 >> 6) + (a3 >> 6) * table_value_2));
        LODWORD(cached_world_grid_block_count) = *(_DWORD *)(shifted_bits_2 + *(_QWORD *)&dword_140404A6C[2 * input_value + 421506981]);
        if ( (_DWORD)cached_world_grid_block_count != -1
          || (cached_world_grid_block_count = (int)world_grid_block_count,
              ++world_grid_block_count,
              *(_DWORD *)(shifted_bits_2 + *(_QWORD *)&dword_140404A6C[2 * input_value + 421506981]) = cached_world_grid_block_count,
              crt_memset((void *)(uintptr_t)(&dword_140404A6C[512 * cached_world_grid_block_count + 421506990]), 0xFFu, 0x800u),
              (_DWORD)cached_world_grid_block_count != -1) )
        {
          shifted_bits_3 = ((__int64)(int)cached_world_grid_block_count << 9) + (((unsigned int)a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7));
          LODWORD(cached_world_grid_leaf_count) = dword_140404A6C[shifted_bits_3 + 421506990];
          if ( (_DWORD)cached_world_grid_leaf_count != -1 )
            goto LABEL_15;
          cached_world_grid_leaf_count = (int)world_grid_leaf_count;
          if ( (int)world_grid_leaf_count < 2048 )
          {
            remaining_count = 512;
            ++world_grid_leaf_count;
            dword_140404A6C[shifted_bits_3 + 421506990] = cached_world_grid_leaf_count;
            running_total = 67584 * cached_world_grid_leaf_count;
            do
            {
              running_total += 132;
              *(_DWORD *)(running_total + g_1A4CF0928 - 132) = 0;
              --remaining_count;
            }
            while ( remaining_count );
            if ( (_DWORD)cached_world_grid_leaf_count != -1 )
            {
LABEL_15:
              shifted_bits_4 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)) + ((__int64)(int)cached_world_grid_leaf_count << 9);
              loaded_word = *(int *)(132 * shifted_bits_4 + g_1A4CF0928);
              if ( (int)loaded_word < 32 )
              {
                *(_DWORD *)(g_1A4CF0928 + 4 * (loaded_word + 33 * shifted_bits_4) + 4) = a5;
                ++*(_DWORD *)(132 * shifted_bits_4 + g_1A4CF0928);
              }
            }
          }
        }
      }
    }
  }
}

//----- (000000014003ED30) ----------------------------------------------------
_BOOL8            sub_14003ED30(
        float *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 input_value_2;
  __int64 scaled_index;
  __int64 packed_word_bits;
  __int64 scaled_index_2;
  unsigned int *state_address;
  __int64 scaled_index_3;
  float combined_products;
  float combined_products_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 table_value;
  __int64 integer_sum;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_4;
  float component_delta_5;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  int input_value_3;
  float source_component_y;
  float source_component_z;
  int saved_float_word;
  int comparison_operand;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003ED30[256];
#define float_word (*(__int64 (*))(void *)(sr_frame_14003ED30 + 0)) /* [rsp+58h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_14003ED30 + 8)) /* [rsp+60h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_14003ED30 + 16)) /* [rsp+68h] */
#define weighted_sum_6 (*(float (*))(void *)(sr_frame_14003ED30 + 20)) /* [rsp+6Ch] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14003ED30 + 24)) /* [rsp+70h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14003ED30 + 32)) /* [rsp+78h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_14003ED30 + 48)) /* [rsp+88h] */
#define float_buffer_3 (*(float (*)[6])(void *)(sr_frame_14003ED30 + 64)) /* [rsp+98h] */
#define scaled_index_4 (*(__int64 (*))(void *)(sr_frame_14003ED30 + 248)) /* [rsp+150h] */

  input_value = (int)a7;
  record_word_offset = 15432LL * (int)a7;
  if ( fabs(*a4 - *(float *)&dword_140404A6C[record_word_offset + 358297503]) > 64.0 )
    return 0;
  if ( fabs(a4[2] - *(float *)&dword_140404A6C[record_word_offset + 358297505]) > 64.0 )
    return 0;
  if ( fabs(a4[1] - *(float *)&dword_140404A6C[record_word_offset + 358297504]) > 64.0 )
    return 0;
  input_value_2 = (int)a8;
  *a3 = 65536.0;
  scaled_index = input_value_2 + 15432 * input_value;
  packed_word_bits = (int)dword_140404A6C[scaled_index + 358300580];
  if ( (int)packed_word_bits >= (int)dword_140404A6C[scaled_index + 358300584] )
    return 0;
  scaled_index_2 = 5144 * input_value;
  scaled_index_4 = 5144 * input_value;
  state_address = &dword_140404A6C[10288 * input_value + 358300589 + 5144 * input_value + 2 * packed_word_bits + packed_word_bits];
  do
  {
    scaled_index_3 = scaled_index_2 + (int)*state_address;
    combined_products = *(float *)&dword_140404A6C[3 * scaled_index_2 + 358297508 + 3 * (int)*(state_address - 1)];
    combined_products_2 = *(float *)&dword_140404A6C[3 * scaled_index_2 + 358297509 + 3 * (int)*(state_address - 1)];
    LODWORD(float_buffer_2[0]) = dword_140404A6C[3 * scaled_index_2 + 358297507 + 3 * (int)*(state_address - 1)];
    float_buffer_2[1] = combined_products;
    weighted_sum = *(float *)&dword_140404A6C[3 * scaled_index_3 + 358297509];
    weighted_sum_2 = *(float *)&dword_140404A6C[3 * scaled_index_3 + 358297507];
    weighted_sum_3 = *(float *)&dword_140404A6C[3 * scaled_index_3 + 358297508];
    table_value = (int)state_address[1];
    float_buffer[2] = weighted_sum;
    integer_sum = scaled_index_2 + table_value;
    component_delta = weighted_sum - combined_products_2;
    float_buffer_2[2] = combined_products_2;
    float_buffer[1] = weighted_sum_3;
    component_delta_2 = weighted_sum_3 - combined_products;
    float_buffer[0] = weighted_sum_2;
    component_delta_3 = weighted_sum_2 - float_buffer_2[0];
    weighted_sum_4 = *(float *)&dword_140404A6C[3 * integer_sum + 358297509];
    weighted_sum_5 = *(float *)&dword_140404A6C[3 * integer_sum + 358297507];
    weighted_sum_6 = *(float *)&dword_140404A6C[3 * integer_sum + 358297508];
    unused_written_slot = weighted_sum_4;
    component_delta_4 = weighted_sum_4 - combined_products_2;
    saved_weighted_sum = weighted_sum_5;
    component_delta_5 = weighted_sum_5 - float_buffer_2[0];
    product_difference = (float)((float)(weighted_sum_6 - combined_products) * component_delta) - (float)(component_delta_4 * component_delta_2);
    product_difference_2 = (float)(component_delta_4 * component_delta_3) - (float)(component_delta_5 * component_delta);
    product_difference_3 = (float)(component_delta_5 * component_delta_2) - (float)((float)(weighted_sum_6 - combined_products) * component_delta_3);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      float_word = 0;
      scaled_ratio = 0.0;
    }
    else
    {
      *(float *)&float_word = product_difference * (float)(1.0 / square_root);
      *((float *)&float_word + 1) = product_difference_2 * (float)(1.0 / square_root);
      scaled_ratio = product_difference_3 * (float)(1.0 / square_root);
    }
    if ( sub_14003F0B0(float_buffer_3, (float *)&float_word, (float *)&a7, a4, a5, *(float *)&a6, float_buffer_2, float_buffer, &saved_weighted_sum) )
    {
      input_value_3 = a7;
      if ( *(float *)&a7 < *a3 )
      {
        source_component_y = float_buffer_3[1];
        *a1 = float_buffer_3[0];
        source_component_z = float_buffer_3[2];
        a1[1] = source_component_y;
        saved_float_word = float_word;
        a1[2] = source_component_z;
        comparison_operand = HIDWORD(float_word);
        *(_DWORD *)a2 = saved_float_word;
        *(float *)(a2 + 8) = scaled_ratio;
        *(_DWORD *)(a2 + 4) = comparison_operand;
        *(_DWORD *)a3 = input_value_3;
      }
    }
    scaled_index_2 = scaled_index_4;
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    state_address += 3;
  }
  while ( (int)packed_word_bits < (int)dword_140404A6C[scaled_index + 358300584] );
  return *a3 < 65536.0;
}
#undef float_word
#undef scaled_ratio
#undef saved_weighted_sum
#undef weighted_sum_6
#undef unused_written_slot
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef scaled_index_4

//----- (0000000140077710) ----------------------------------------------------
void sub_140077710()
{
  __int64 unused_local;
  __int64 unused_frame_slot_0;
  __int64 unused_local_2;
  __int64 unused_local_3;
  int iteration_count;
  __int64 unused_local_4;
  __int64 unused_local_5;
  unsigned int *state_address;
  __int16 scaled_index;
  __int64 unused_local_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140077710[32];
#define integer_difference (*(int (*))(void *)(sr_frame_140077710 + 0)) /* [rsp+60h] */
#define byte_cursor (*(char * (*))(void *)(sr_frame_140077710 + 8)) /* [rsp+68h] */
#define byte_cursor_2 (*(char * (*))(void *)(sr_frame_140077710 + 16)) /* [rsp+70h] */

  renderer_ui_program = glCreateProgram();
  g_1ABD4AC04 = glCreateShader(35633);
  g_1ABD4AC08 = glCreateShader(35632);
  byte_cursor = (char *)sr_mem_1402b21b0;
  byte_cursor_2 = (char *)sr_mem_1402b2320;
  glShaderSource(g_1ABD4AC04, 1, (const char *const *)&byte_cursor, nullptr);
  glCompileShader(g_1ABD4AC04);
  glAttachShader(renderer_ui_program, g_1ABD4AC04);
  glShaderSource(g_1ABD4AC08, 1, (const char *const *)&byte_cursor_2, nullptr);
  glCompileShader(g_1ABD4AC08);
  glAttachShader(renderer_ui_program, g_1ABD4AC08);
  glLinkProgram(renderer_ui_program);
  glUseProgram(renderer_ui_program);
  renderer_ui_matrix_uniform = glGetUniformLocation(renderer_ui_program, "modelviewprojectionmatrix");
  g_1ABD4AC34 = glGetUniformLocation(renderer_ui_program, "tex_color");
  glUniform1i(g_1ABD4AC34, 0);
  glGenVertexArrays(1, &g_1ABD4AC98);
  glGenBuffers(1, &renderer_quad_buffer);
  glGenTextures(1, &renderer_white_texture);
  glBindTexture(3553, renderer_white_texture);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  integer_difference = -1;
  iteration_count = 0;
  glTexImage2D(3553,
    0,
    6408,
    1,
    1,
    0,
    6408,
    5121,
    &integer_difference);
  glGenBuffers(1, &g_1AD299468);
  glGenBuffers(1, &g_1AD29946C);
  glBindVertexArray(g_1ABD4AC98);
  glBindBuffer(34962, g_1AD299468);
  glBufferData(34962, 2359296, 0, 35040);
  state_address = &g_1AD299474;
  do
  {
    state_address += 3;
    scaled_index = 4 * iteration_count++;
    *((_WORD *)state_address - 8) = scaled_index;
    *((_WORD *)state_address - 5) = scaled_index;
    *((_WORD *)state_address - 7) = scaled_index + 1;
    *((_WORD *)state_address - 6) = scaled_index + 2;
    *((_WORD *)state_address - 3) = scaled_index + 3;
    *((_WORD *)state_address - 4) = scaled_index + 2;
  }
  while ( iteration_count < 0x4000 );
  glBindBuffer(34963, g_1AD29946C);
  glBufferData(34963, 196608, &g_1AD299470, 35044);
  glBindBuffer(34963, 0);
  g_1AD059444 = -1;
}
#undef integer_difference
#undef byte_cursor
#undef byte_cursor_2

//----- (00000001401885C0) ----------------------------------------------------
__int64            sub_1401885C0(int *a1, int a2, int a3)
{
  __int64 input_value;
  __int64 result;
  __int64 scaled_index;
  signed int iteration_count;
  __int64 element_index;
  __int64 loaded_word;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;

  input_value = a2;
  result = a3;
  scaled_index = a3 + 15432LL * a2;
  iteration_count = dword_140404A6C[scaled_index + 358300580];
  if ( iteration_count < (int)dword_140404A6C[scaled_index + 358300584] )
  {
    element_index = (int)dword_140404A6C[scaled_index + 358300580];
    do
    {
      loaded_word = *a1;
      if ( (int)loaded_word < 1024 )
      {
        scaled_index_2 = 6 * loaded_word;
        scaled_index_3 = 3 * (5144 * input_value + (int)dword_140404A6C[15432 * input_value + 358300588 + 3 * element_index]);
        a1[2 * scaled_index_2 + 1] = dword_140404A6C[15432 * input_value
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * input_value + 358300588 + 3 * element_index]];
        a1[2 * scaled_index_2 + 2] = dword_140404A6C[scaled_index_3 + 358297508];
        a1[2 * scaled_index_2 + 3] = dword_140404A6C[scaled_index_3 + 358297509];
        scaled_index_4 = 3 * (5144 * input_value + (int)dword_140404A6C[15432 * input_value + 358300589 + 3 * element_index]);
        scaled_index_5 = 6LL * *a1;
        a1[2 * scaled_index_5 + 4] = dword_140404A6C[15432 * input_value
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * input_value + 358300589 + 3 * element_index]];
        a1[2 * scaled_index_5 + 5] = dword_140404A6C[scaled_index_4 + 358297508];
        a1[2 * scaled_index_5 + 6] = dword_140404A6C[scaled_index_4 + 358297509];
        scaled_index_6 = 3 * (5144 * input_value + (int)dword_140404A6C[15432 * input_value + 358300590 + 3 * element_index]);
        scaled_index_7 = 6LL * *a1;
        a1[2 * scaled_index_7 + 7] = dword_140404A6C[15432 * input_value
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * input_value + 358300590 + 3 * element_index]];
        a1[2 * scaled_index_7 + 8] = dword_140404A6C[scaled_index_6 + 358297508];
        a1[2 * scaled_index_7 + 9] = dword_140404A6C[scaled_index_6 + 358297509];
        scaled_index_8 = 6LL * *a1;
        a1[2 * scaled_index_8 + 10] = dword_140404A6C[15432 * input_value + 358303660 + 3 * element_index];
        a1[2 * scaled_index_8 + 11] = dword_140404A6C[15432 * input_value + 358303661 + 3 * element_index];
        result = dword_140404A6C[15432 * input_value + 358303662 + 3 * element_index];
        a1[2 * scaled_index_8 + 12] = result;
        ++*a1;
      }
      ++iteration_count;
      ++element_index;
    }
    while ( iteration_count < (int)dword_140404A6C[scaled_index + 358300584] );
  }
  return result;
}

