#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"
/* 0x1400403F0 is not a routine of its own: it is a patch block that 0x14003B920 jumps to and back from,
   written over the start of a small routine nothing calls. src/engine/frame.c has it as part of game_frame. */

//----- (0000000140041B80) ----------------------------------------------------
__int64 sub_140041B80()
{
  __int64 running_total;
  int iteration_count;
  float *state_address;
  __int64 loaded_word;
  int loaded_word_2;
  float state_address_2;
  float product_difference;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float product_difference_2;
  float limited_value;
  float float_word;
  float combined_products;
  float product_difference_3;
  float product_difference_4;
  __int64 scaled_index;
  float *axis;
  float *axis_2;
  float product_difference_5;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  __int64 masked_bits;
  float product_difference_6;
  signed int cached_game_tick;
  __int64 remaining_count;
  __int64 running_total_2;
  signed int table_value;
  float weighted_sum;
  float weighted_sum_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float component_delta;
  int iteration_count_2;
  __int64 running_total_3;
  float *state_address_3;
  float *state_address_4;
  float limited_value_2;
  float product_difference_7;
  float scaled_value;
  __int64 loaded_word_3;
  float scaled_value_2;
  float scaled_value_3;
  __int64 scaled_index_2;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  float state_address_8;
  float source_component_y;
  float state_address_9;
  float state_address_10;
  float product_difference_8;
  float product_difference_9;
  float product_difference_10;
  float scaled_value_4;
  float combined_products_5;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float *state_address_11;
  __int64 remaining_count_2;
  signed int loaded_word_4;
  int loaded_word_5;
  float scaled_value_5;
  float product_difference_11;
  float product_difference_12;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float component_delta_2;
  __int64 loaded_word_6;
  float combined_products_6;
  float limited_value_3;
  float combined_products_7;
  unsigned int *state_address_12;
  signed int scaled_index_3;
  int scaled_index_4;
  float product_difference_13;
  float product_difference_14;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  float component_delta_3;
  float limited_value_4;
  signed int table_value_2;
  unsigned int table_value_3;
  float weighted_sum_8;
  float weighted_sum_9;
  float scaled_ratio_13;
  float scaled_ratio_14;
  float scaled_ratio_15;
  float component_delta_4;
  float limited_value_5;
  signed int table_value_4;
  unsigned int table_value_5;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_ratio_16;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float component_delta_5;
  float limited_value_6;
  signed int table_value_6;
  unsigned int table_value_7;
  float weighted_sum_12;
  float weighted_sum_13;
  float scaled_ratio_19;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float component_delta_6;
  float limited_value_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140041B80[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140041B80 + 0)) /* [rsp+8h] */
#define float_word_2 (*(__int64 (*))(void *)(sr_frame_140041B80 + 32)) /* [rsp+28h] */
#define remaining_count_3 (*(__int64 (*))(void *)(sr_frame_140041B80 + 40)) /* [rsp+30h] */
#define state_address_13 (*(float (*))(void *)(sr_frame_140041B80 + 48)) /* [rsp+38h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140041B80 + 52)) /* [rsp+3Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140041B80 + 56)) /* [rsp+40h] */
#define state_address_14 (*(float (*))(void *)(sr_frame_140041B80 + 64)) /* [rsp+48h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_140041B80 + 68)) /* [rsp+4Ch] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_140041B80 + 72)) /* [rsp+50h] */
#define unused_frame_slot_80 (*(__int64 (*))(void *)(sr_frame_140041B80 + 80)) /* [rsp+58h] */

  running_total = 0;
  iteration_count = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    state_address = (float *)&g_15FD16854;
    do
    {
      loaded_word = *((int *)state_address - 381);
      loaded_word_2 = *((_DWORD *)state_address - 6);
      *(state_address - 357) = 3.0;
      state_address_2 = (float)(*(float *)&dword_140404A6C[24944 * loaded_word + 346731818] * 0.875)
         - *(float *)&dword_140404A6C[24944 * loaded_word + 346731821];
      if ( loaded_word_2 >= (int)game_tick )
      {
        float_word = *(state_address - 377);
      }
      else
      {
        product_difference = *(state_address - 4);
        scaled_ratio = *(state_address - 5) - *(state_address - 1);
        scaled_ratio_2 = product_difference - *state_address;
        scaled_ratio_3 = *(state_address - 3) - state_address[1];
        product_difference_2 = (float)(loaded_word_2 - *((_DWORD *)state_address - 2));
        if ( product_difference_2 > 0.0 )
        {
          scaled_ratio = scaled_ratio * (float)(1.0 / product_difference_2);
          scaled_ratio_2 = scaled_ratio_2 * (float)(1.0 / product_difference_2);
          scaled_ratio_3 = scaled_ratio_3 * (float)(1.0 / product_difference_2);
        }
        limited_value = fminf((float)(game_tick - loaded_word_2), 64.0);
        float_word = (float)(scaled_ratio * limited_value) + *(state_address - 5);
        combined_products = (float)(scaled_ratio_3 * limited_value) + *(state_address - 3);
        *(state_address - 377) = float_word;
        *(state_address - 376) = (float)(scaled_ratio_2 * limited_value) + product_difference;
        *(state_address - 375) = combined_products;
      }
      product_difference_3 = *(state_address - 376);
      product_difference_4 = *(state_address - 375);
      state_address_13 = (float)(*(float *)&dword_1402F6188 * 2.0) + float_word;
      state_address_14 = float_word - (float)(*(float *)&dword_1402F6188 * 8.0);
      unused_written_slot = (float)(*(float *)&dword_1402F618C * 2.0) + product_difference_3;
      unused_written_slot_3 = product_difference_3 - (float)(*(float *)&dword_1402F618C * 8.0);
      unused_written_slot_2 = (float)(*(float *)&dword_1402F6190 * 2.0) + product_difference_4;
      *(float *)&unused_written_slot_4 = product_difference_4 - (float)(*(float *)&dword_1402F6190 * 8.0);
      if ( (unsigned int)sub_1400DC050(&state_address_13, &state_address_14, 0) )
        *(state_address - 376) = (ragdoll_unknown_height) + state_address_2;
      scaled_index = 383LL * iteration_count;
      *((_QWORD *)state_address - 185) = 1065353216;
      axis = (float *)&dword_140404A6C[scaled_index + 132400651];
      *((_QWORD *)state_address - 184) = 0;
      axis_2 = (float *)&dword_140404A6C[scaled_index + 132400648];
      *((_QWORD *)state_address - 183) = 1065353216;
      *((_QWORD *)state_address - 182) = 0;
      *(state_address - 362) = 1.0;
      sr_math_mat3_rotate_rows(
        (__int64)&dword_140404A6C[scaled_index + 132400648],
        (float *)&dword_140404A6C[scaled_index + 132400651],
        sr_export_float_lane_container(1070141403));
      sr_math_mat3_rotate_rows((__int64)axis_2, axis, sr_export_float_lane_container((unsigned __int64)*((_DWORD *)state_address - 371)));
      product_difference_5 = -*(state_address - 357);
      combined_products_2 = (float)(product_difference_5 * *(state_address - 364)) + *(state_address - 377);
      combined_products_3 = (float)(product_difference_5 * *(state_address - 363)) + *(state_address - 376);
      combined_products_4 = (float)(product_difference_5 * *(state_address - 362)) + *(state_address - 375);
      state_address_13 = combined_products_2;
      unused_written_slot = combined_products_3;
      state_address_14 = combined_products_2 - (float)(*(float *)&dword_1402F6188 * 32.0);
      unused_written_slot_2 = combined_products_4;
      *(float *)&unused_written_slot_4 = combined_products_4 - (float)(*(float *)&dword_1402F6190 * 32.0);
      unused_written_slot_3 = combined_products_3 - (float)(*(float *)&dword_1402F618C * 32.0);
      if ( (unsigned int)sub_1400DC050(&state_address_13, &state_address_14, 0) )
      {
        masked_bits = *(unsigned int *)&ragdoll_unknown_height;
        product_difference_6 = *(state_address - 357);
        unused_written_slot = (ragdoll_unknown_height) + state_address_2;
        *(float *)&masked_bits = sub_14023F704((float)((ragdoll_unknown_height) + state_address_2) - *(state_address - 376), product_difference_6);
        sr_math_mat3_rotate_rows((__int64)axis_2, axis_2, sr_export_float_lane_container(masked_bits ^ 0x80000000LL));
      }
      ++iteration_count;
      state_address += 383;
    }
    while ( iteration_count < (int)world_unknown_15fd16260_count );
  }
  cached_game_tick = game_tick;
  remaining_count = 256;
  running_total_2 = 0;
  remaining_count_3 = 256;
  float_word_2 = 256;
  do
  {
    if ( dword_140404A6C[running_total + 280651303] )
    {
      table_value = dword_140404A6C[running_total + 280658451];
      if ( table_value < cached_game_tick )
      {
        weighted_sum = *(float *)&dword_140404A6C[running_total + 280658453];
        weighted_sum_2 = *(float *)&dword_140404A6C[running_total + 280658454];
        scaled_ratio_4 = *(float *)&dword_140404A6C[running_total + 280658452] - *(float *)&dword_140404A6C[running_total + 280658456];
        scaled_ratio_5 = weighted_sum - *(float *)&dword_140404A6C[running_total + 280658457];
        scaled_ratio_6 = weighted_sum_2 - *(float *)&dword_140404A6C[running_total + 280658458];
        component_delta = (float)(int)(table_value - dword_140404A6C[running_total + 280658455]);
        if ( component_delta > 0.0 )
        {
          scaled_ratio_4 = scaled_ratio_4 * (float)(1.0 / component_delta);
          scaled_ratio_5 = scaled_ratio_5 * (float)(1.0 / component_delta);
          scaled_ratio_6 = scaled_ratio_6 * (float)(1.0 / component_delta);
        }
        iteration_count_2 = 1;
        running_total_3 = 78;
        state_address_3 = (float *)(unsigned int *)&g_18399DF58;
        state_address_4 = (float *)&dword_140404A6C[running_total + 280651519];
        limited_value_2 = fminf((float)(cached_game_tick - table_value), 64.0);
        *(float *)&dword_140404A6C[running_total + 280651440] = (float)(scaled_ratio_4 * limited_value_2) + *(float *)&dword_140404A6C[running_total + 280658452];
        *(float *)&dword_140404A6C[running_total + 280651441] = (float)(scaled_ratio_5 * limited_value_2) + weighted_sum;
        *(float *)&dword_140404A6C[running_total + 280651442] = (float)(scaled_ratio_6 * limited_value_2) + weighted_sum_2;
        do
        {
          if ( dword_140404A6C[running_total + 280651313] == -1 || (unsigned int)iteration_count_2 < 0xA )
          {
            product_difference_7 = *(state_address_3 - 1);
            scaled_value = *state_address_3;
            loaded_word_3 = 78LL * *((int *)state_address_3 - 5);
            scaled_value_2 = *state_address_3;
            scaled_value_3 = *state_address_3;
            scaled_index_2 = running_total * 4 + loaded_word_3 * 4;
            state_address_5 = (float)(product_difference_7 * *(float *)&dword_140404A6C[running_total + 280651452 + loaded_word_3])
                + *(float *)&dword_140404A6C[running_total + 280651440 + loaded_word_3];
            *(state_address_4 - 1) = state_address_5;
            state_address_6 = (float)(product_difference_7 * *(float *)((char *)&g_18329E560 + scaled_index_2))
                + *(float *)((char *)&g_18329E530 + scaled_index_2);
            *state_address_4 = state_address_6;
            state_address_7 = (float)(product_difference_7 * *(float *)((char *)&g_18329E564 + scaled_index_2))
                + *(float *)((char *)&g_18329E534 + scaled_index_2);
            state_address_4[1] = state_address_7;
            state_address_8 = (float)(scaled_value_2 * *(float *)&dword_140404A6C[running_total + 280651455 + loaded_word_3]) + state_address_5;
            source_component_y = state_address_3[1];
            *(state_address_4 - 1) = state_address_8;
            state_address_9 = (float)(scaled_value_3 * *(float *)&dword_140404A6C[running_total + 280651456 + loaded_word_3]) + state_address_6;
            *state_address_4 = state_address_9;
            state_address_10 = (float)(scaled_value * *(float *)&dword_140404A6C[running_total + 280651457 + loaded_word_3]) + state_address_7;
            state_address_4[1] = state_address_10;
            *(state_address_4 - 1) = (float)(source_component_y * *(float *)&dword_140404A6C[running_total + 280651458 + loaded_word_3]) + state_address_8;
            *state_address_4 = (float)(source_component_y * *(float *)&dword_140404A6C[running_total + 280651459 + loaded_word_3]) + state_address_9;
            state_address_4[1] = (float)(source_component_y * *(float *)&dword_140404A6C[running_total + 280651460 + loaded_word_3]) + state_address_10;
            sr_math_mat3_multiply(
              (__int64)&dword_140404A6C[running_total_3 + 280651452 + running_total_2],
              (__int64)&dword_140404A6C[running_total_3 + 280651493 + running_total_2],
              (__int64)&dword_140404A6C[running_total_2 + 280651452 + loaded_word_3]);
            product_difference_8 = *(state_address_3 - 4) - *(state_address_3 - 1);
            product_difference_9 = *(state_address_3 - 3) - *state_address_3;
            product_difference_10 = *(state_address_3 - 2) - state_address_3[1];
            state_address_13 = product_difference_8;
            scaled_value_4 = product_difference_8 * state_address_4[11];
            unused_written_slot = product_difference_9;
            unused_written_slot_2 = product_difference_10;
            combined_products_5 = scaled_value_4 + *(state_address_4 - 1);
            *(state_address_4 - 1) = combined_products_5;
            weighted_sum_3 = (float)(product_difference_8 * state_address_4[12]) + *state_address_4;
            *state_address_4 = weighted_sum_3;
            weighted_sum_4 = (float)(product_difference_8 * state_address_4[13]) + state_address_4[1];
            state_address_4[1] = weighted_sum_4;
            weighted_sum_5 = (float)(product_difference_9 * state_address_4[14]) + combined_products_5;
            *(state_address_4 - 1) = weighted_sum_5;
            weighted_sum_6 = (float)(product_difference_9 * state_address_4[15]) + weighted_sum_3;
            *state_address_4 = weighted_sum_6;
            weighted_sum_7 = (float)(product_difference_9 * state_address_4[16]) + weighted_sum_4;
            state_address_4[1] = weighted_sum_7;
            *(state_address_4 - 1) = (float)(product_difference_10 * state_address_4[17]) + weighted_sum_5;
            *state_address_4 = (float)(product_difference_10 * state_address_4[18]) + weighted_sum_6;
            state_address_4[1] = (float)(product_difference_10 * state_address_4[19]) + weighted_sum_7;
          }
          ++iteration_count_2;
          running_total_3 += 78;
          state_address_3 += 25;
          state_address_4 += 78;
        }
        while ( iteration_count_2 < 16 );
        cached_game_tick = game_tick;
        remaining_count = float_word_2;
      }
    }
    running_total_2 += 7166;
    running_total += 7166;
    float_word_2 = --remaining_count;
  }
  while ( remaining_count );
  state_address_11 = (float *)&g_15F2DE360;
  remaining_count_2 = 512;
  do
  {
    if ( *((_DWORD *)state_address_11 - 5208) )
    {
      loaded_word_4 = *((_DWORD *)state_address_11 - 7);
      if ( loaded_word_4 != -1 )
      {
        loaded_word_5 = *((_DWORD *)state_address_11 - 3);
        if ( loaded_word_5 != -1 )
        {
          product_difference_11 = *(state_address_11 - 6);
          product_difference_12 = *(state_address_11 - 5);
          scaled_ratio_7 = product_difference_11 - *(state_address_11 - 2);
          *(float *)&float_word_2 = *(state_address_11 - 4);
          scaled_value_5 = *(float *)&float_word_2;
          scaled_ratio_8 = product_difference_12 - *(state_address_11 - 1);
          scaled_ratio_9 = *(float *)&float_word_2 - *state_address_11;
          component_delta_2 = (float)(loaded_word_4 - loaded_word_5);
          if ( component_delta_2 > 0.0 )
          {
            scaled_ratio_7 = scaled_ratio_7 * (float)(1.0 / component_delta_2);
            scaled_ratio_8 = scaled_ratio_8 * (float)(1.0 / component_delta_2);
            scaled_ratio_9 = scaled_ratio_9 * (float)(1.0 / component_delta_2);
          }
          loaded_word_6 = 24944LL * *((int *)state_address_11 - 5207);
          *(state_address_11 - 5173) = scaled_ratio_7;
          *(state_address_11 - 5172) = scaled_ratio_8;
          *(state_address_11 - 5171) = scaled_ratio_9;
          if ( loaded_word_4 < cached_game_tick )
          {
            combined_products_6 = *(float *)&dword_140404A6C[loaded_word_6 + 346731821]
                - (float)(*(float *)&dword_140404A6C[loaded_word_6 + 346731818] * 0.875);
            state_address_13 = product_difference_11 + *(float *)&dword_1402F6188;
            unused_written_slot = product_difference_12 + *(float *)&dword_1402F618C;
            unused_written_slot_2 = scaled_value_5 + *(float *)&dword_1402F6190;
            limited_value_3 = fminf((float)(cached_game_tick - loaded_word_4), 64.0);
            state_address_14 = (float)((float)(combined_products_6 * *(float *)&dword_1402F6188) + product_difference_11) + (float)(scaled_ratio_7 * limited_value_3);
            unused_written_slot_3 = (float)((float)(combined_products_6 * *(float *)&dword_1402F618C) + product_difference_12) + (float)(scaled_ratio_8 * limited_value_3);
            *(float *)&unused_written_slot_4 = (float)((float)(combined_products_6 * *(float *)&dword_1402F6190) + *(float *)&float_word_2) + (float)(scaled_ratio_9 * limited_value_3);
            if ( (unsigned int)sub_1400DC050(&state_address_13, &state_address_14, 0) )
            {
              combined_products_7 = -(float)((float)((float)(scaled_ratio_7 * g_151A8488C)
                                   + (float)(scaled_ratio_8 * g_151A84890))
                           + (float)(scaled_ratio_9 * g_151A84894));
              scaled_ratio_7 = scaled_ratio_7 + (float)(g_151A8488C * combined_products_7);
              scaled_ratio_8 = scaled_ratio_8 + (float)(g_151A84890 * combined_products_7);
              scaled_ratio_9 = scaled_ratio_9 + (float)(g_151A84894 * combined_products_7);
            }
            cached_game_tick = game_tick;
            *(state_address_11 - 5197) = (float)(scaled_ratio_7 * limited_value_3) + *(state_address_11 - 6);
            *(state_address_11 - 5196) = (float)(scaled_ratio_8 * limited_value_3) + *(state_address_11 - 5);
            *(state_address_11 - 5195) = (float)(scaled_ratio_9 * limited_value_3) + *(state_address_11 - 4);
          }
        }
      }
    }
    state_address_11 += 5210;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  state_address_12 = &g_182BBB4E0;
  do
  {
    if ( *(state_address_12 - 216) )
    {
      scaled_index_3 = *(state_address_12 - 7);
      if ( scaled_index_3 < cached_game_tick && scaled_index_3 != -1 )
      {
        scaled_index_4 = *(state_address_12 - 2);
        if ( scaled_index_4 != -1 )
        {
          product_difference_13 = *((float *)state_address_12 - 5);
          product_difference_14 = *((float *)state_address_12 - 4);
          scaled_ratio_10 = *((float *)state_address_12 - 6) - *((float *)state_address_12 - 1);
          scaled_ratio_11 = product_difference_13 - *(float *)state_address_12;
          scaled_ratio_12 = product_difference_14 - *((float *)state_address_12 + 1);
          component_delta_3 = (float)(scaled_index_3 - scaled_index_4);
          if ( component_delta_3 > 0.0 )
          {
            scaled_ratio_10 = scaled_ratio_10 * (float)(1.0 / component_delta_3);
            scaled_ratio_11 = scaled_ratio_11 * (float)(1.0 / component_delta_3);
            scaled_ratio_12 = scaled_ratio_12 * (float)(1.0 / component_delta_3);
          }
          limited_value_4 = fminf((float)(cached_game_tick - scaled_index_3), 64.0);
          *((float *)state_address_12 - 193) = (float)(scaled_ratio_10 * limited_value_4) + *((float *)state_address_12 - 6);
          *((float *)state_address_12 - 192) = (float)(scaled_ratio_11 * limited_value_4) + product_difference_13;
          *((float *)state_address_12 - 191) = (float)(scaled_ratio_12 * limited_value_4) + product_difference_14;
        }
      }
    }
    if ( state_address_12[1544] )
    {
      table_value_2 = state_address_12[1753];
      if ( table_value_2 < cached_game_tick && table_value_2 != -1 )
      {
        table_value_3 = state_address_12[1758];
        if ( table_value_3 != -1 )
        {
          weighted_sum_8 = *((float *)state_address_12 + 1755);
          weighted_sum_9 = *((float *)state_address_12 + 1756);
          scaled_ratio_13 = *((float *)state_address_12 + 1754) - *((float *)state_address_12 + 1759);
          scaled_ratio_14 = weighted_sum_8 - *((float *)state_address_12 + 1760);
          scaled_ratio_15 = weighted_sum_9 - *((float *)state_address_12 + 1761);
          component_delta_4 = (float)(int)(table_value_2 - table_value_3);
          if ( component_delta_4 > 0.0 )
          {
            scaled_ratio_13 = scaled_ratio_13 * (float)(1.0 / component_delta_4);
            scaled_ratio_14 = scaled_ratio_14 * (float)(1.0 / component_delta_4);
            scaled_ratio_15 = scaled_ratio_15 * (float)(1.0 / component_delta_4);
          }
          limited_value_5 = fminf((float)(cached_game_tick - table_value_2), 64.0);
          *((float *)state_address_12 + 1567) = (float)(scaled_ratio_13 * limited_value_5) + *((float *)state_address_12 + 1754);
          *((float *)state_address_12 + 1568) = (float)(scaled_ratio_14 * limited_value_5) + weighted_sum_8;
          *((float *)state_address_12 + 1569) = (float)(scaled_ratio_15 * limited_value_5) + weighted_sum_9;
        }
      }
    }
    if ( state_address_12[3304] )
    {
      table_value_4 = state_address_12[3513];
      if ( table_value_4 < cached_game_tick && table_value_4 != -1 )
      {
        table_value_5 = state_address_12[3518];
        if ( table_value_5 != -1 )
        {
          weighted_sum_10 = *((float *)state_address_12 + 3515);
          weighted_sum_11 = *((float *)state_address_12 + 3516);
          scaled_ratio_16 = *((float *)state_address_12 + 3514) - *((float *)state_address_12 + 3519);
          scaled_ratio_17 = weighted_sum_10 - *((float *)state_address_12 + 3520);
          scaled_ratio_18 = weighted_sum_11 - *((float *)state_address_12 + 3521);
          component_delta_5 = (float)(int)(table_value_4 - table_value_5);
          if ( component_delta_5 > 0.0 )
          {
            scaled_ratio_16 = scaled_ratio_16 * (float)(1.0 / component_delta_5);
            scaled_ratio_17 = scaled_ratio_17 * (float)(1.0 / component_delta_5);
            scaled_ratio_18 = scaled_ratio_18 * (float)(1.0 / component_delta_5);
          }
          limited_value_6 = fminf((float)(cached_game_tick - table_value_4), 64.0);
          *((float *)state_address_12 + 3327) = (float)(scaled_ratio_16 * limited_value_6) + *((float *)state_address_12 + 3514);
          *((float *)state_address_12 + 3328) = (float)(scaled_ratio_17 * limited_value_6) + weighted_sum_10;
          *((float *)state_address_12 + 3329) = (float)(scaled_ratio_18 * limited_value_6) + weighted_sum_11;
        }
      }
    }
    if ( state_address_12[5064] )
    {
      table_value_6 = state_address_12[5273];
      if ( table_value_6 < cached_game_tick && table_value_6 != -1 )
      {
        table_value_7 = state_address_12[5278];
        if ( table_value_7 != -1 )
        {
          weighted_sum_12 = *((float *)state_address_12 + 5275);
          weighted_sum_13 = *((float *)state_address_12 + 5276);
          scaled_ratio_19 = *((float *)state_address_12 + 5274) - *((float *)state_address_12 + 5279);
          scaled_ratio_20 = weighted_sum_12 - *((float *)state_address_12 + 5280);
          scaled_ratio_21 = weighted_sum_13 - *((float *)state_address_12 + 5281);
          component_delta_6 = (float)(int)(table_value_6 - table_value_7);
          if ( component_delta_6 > 0.0 )
          {
            scaled_ratio_19 = scaled_ratio_19 * (float)(1.0 / component_delta_6);
            scaled_ratio_20 = scaled_ratio_20 * (float)(1.0 / component_delta_6);
            scaled_ratio_21 = scaled_ratio_21 * (float)(1.0 / component_delta_6);
          }
          limited_value_7 = fminf((float)(cached_game_tick - table_value_6), 64.0);
          *((float *)state_address_12 + 5087) = (float)(scaled_ratio_19 * limited_value_7) + *((float *)state_address_12 + 5274);
          *((float *)state_address_12 + 5088) = (float)(scaled_ratio_20 * limited_value_7) + weighted_sum_12;
          *((float *)state_address_12 + 5089) = (float)(scaled_ratio_21 * limited_value_7) + weighted_sum_13;
        }
      }
    }
    state_address_12 += 7040;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  return 0; /* no result: rax is residue at 0x1400428EE */
}
#undef unused_frame_slot_0
#undef float_word_2
#undef remaining_count_3
#undef state_address_13
#undef unused_written_slot
#undef unused_written_slot_2
#undef state_address_14
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_frame_slot_80

//----- (00000001400447C0) ----------------------------------------------------
__int64 sub_1400447C0()
{
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *state_address_2;
  __int64 result;
  signed int cached_packet_in_byte;
  int cached_packet_in_length;
  int cached_packet_in_bit;
  __int64 saved_cached_packet_in_byte;
  __int128 masked_bits;
  __int128 masked_bits_2;

  state_address = &g_1A8E379E0;
  remaining_count = 256;
  state_address_2 = &g_1A8E379E8;
  do
  {
    result = sr_net_read_bits(state_address_2 - 2, 1);
    if ( *state_address )
    {
      cached_packet_in_byte = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000 )
      {
        cached_packet_in_length = packet_in_length;
        result = packet_in_byte + 4;
        cached_packet_in_bit = packet_in_bit;
        if ( (int)result <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          result = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte);
          *state_address_2 = result;
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          result = (unsigned int)(cached_packet_in_byte + 32);
          if ( (int)result <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            result = cached_packet_in_byte;
            cached_packet_in_byte += 32;
            masked_bits = *(_OWORD *)((char *)&packet_in_data + result);
            masked_bits_2 = *(_OWORD *)((char *)&g_1853AD434 + result);
            packet_in_byte = cached_packet_in_byte;
            *(_OWORD *)(state_address_2 + 1) = masked_bits;
            *(_OWORD *)(state_address_2 + 5) = masked_bits_2;
          }
          if ( cached_packet_in_byte < 0x10000 )
          {
            result = (unsigned int)(cached_packet_in_byte + 4);
            if ( (int)result <= cached_packet_in_length )
            {
              if ( cached_packet_in_bit > 0 )
              {
                ++cached_packet_in_byte;
                packet_in_bit = 0;
                packet_in_byte = cached_packet_in_byte;
              }
              result = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
              state_address_2[17] = result;
              packet_in_byte = cached_packet_in_byte + 4;
            }
          }
        }
      }
    }
    state_address_2 += 20;
    state_address += 20;
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (0000000140044920) ----------------------------------------------------
void sub_140044920()
{
  __int64 cached_local_player;
  __int64 scaled_index;
  signed int cached_packet_out_byte;
  signed int cached_packet_out_byte_2;
  char *state_address;
  unsigned int masked_bits;
  int masked_bits_2;
  int record_byte_offset;
  signed int remaining_amount;
  char cached_packet_out_bit;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  __int64 remaining_count;
  __int64 scaled_index_2;
  int masked_bits_3;
  signed int cached_packet_out_byte_3;
  __int64 remaining_count_2;
  _BYTE *buffer_cursor;
  int masked_bits_4;
  __int64 remaining_count_3;
  int cached_packet_out_byte_4;
  _BYTE *buffer_cursor_2;
  _DWORD *encoded_value;
  __int64 scaled_index_3;
  signed int remaining_amount_2;
  unsigned int scaled_index_4;
  __int64 masked_bits_5;
  __int64 scaled_index_5;
  signed int remaining_amount_3;
  char cached_packet_out_bit_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_2;
  __int64 integer_sum;
  unsigned __int64 byte_count;
  signed int cached_packet_out_byte_5;
  signed int remaining_amount_4;
  unsigned int integer_sum_2;
  unsigned int lobyte_result;
  unsigned int integer_difference_3;
  unsigned int remaining_bits_3;
  unsigned int integer_difference_4;
  signed int remaining_amount_5;
  unsigned int lobyte_result_2;
  unsigned int integer_difference_5;
  unsigned int call_result;
  signed int cached_packet_out_byte_6;
  unsigned int state_word;

  if ( local_player != -1 )
  {
    cached_local_player = (int)local_player;
    scaled_index = 3597LL * (int)local_player;
    packet_out_data = dword_1402B2658;
    *(_QWORD *)&packet_out_byte = 9;
    LOBYTE(g_18539D408) = 4;
    *(unsigned int *)((char *)&g_18539D408 + 1) = game_unknown_183ebfcc8;
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856293], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856294], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856295], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856296], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856297], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856298], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856299], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856300], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856301], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856309], 24);
    sr_net_write_angle((float *)&dword_140404A6C[scaled_index + 71856310], 24);
    cached_packet_out_byte = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        cached_packet_out_byte = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte) = dword_140404A6C[scaled_index + 71856325];
      packet_out_byte += 4;
    }
    sr_net_write_bits(&dword_140404A6C[scaled_index + 71856339], 8);
    sr_net_write_bits(&dword_140404A6C[scaled_index + 71856330], 4);
    sr_net_write_bits(&g_189C1DC60, 16);
    cached_packet_out_byte_2 = packet_out_byte;
    if ( (int)packet_out_byte < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        cached_packet_out_byte_2 = packet_out_byte + 1;
        packet_out_bit = 0;
        ++packet_out_byte;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_2) = g_1AD04B20C;
      cached_packet_out_byte_2 = packet_out_byte + 4;
      packet_out_byte = cached_packet_out_byte_2;
      if ( cached_packet_out_byte_2 < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          ++cached_packet_out_byte_2;
          packet_out_bit = 0;
          packet_out_byte = cached_packet_out_byte_2;
        }
        state_address = (char *)&packet_out_data + cached_packet_out_byte_2;
        masked_bits = *(unsigned int *)&g_183F7C54C;
        *(_QWORD *)state_address = *(_QWORD *)&g_183F7C544;
        *((_DWORD *)state_address + 2) = masked_bits;
        cached_packet_out_byte_2 = packet_out_byte + 12;
        packet_out_byte += 12;
      }
    }
    masked_bits_2 = dword_140404A6C[scaled_index + 71856363];
    record_byte_offset = dword_140404A6C[scaled_index + 71856362] - masked_bits_2;
    if ( (int)dword_140404A6C[scaled_index + 71856362] < masked_bits_2 )
      record_byte_offset += 64;
    if ( record_byte_offset > 15 )
      record_byte_offset = 15;
    remaining_amount = 4;
    if ( cached_packet_out_byte_2 < 0x10000 )
    {
      cached_packet_out_bit = packet_out_bit;
      remaining_bits = record_byte_offset & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount) - 1) << cached_packet_out_bit);
        *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
        integer_difference = 8 - packet_out_bit;
        if ( remaining_amount < 8 - packet_out_bit )
          break;
        packet_out_bit = 0;
        if ( remaining_amount == integer_difference )
        {
          ++packet_out_byte;
          goto LABEL_25;
        }
        remaining_amount -= integer_difference;
        cached_packet_out_byte_2 = packet_out_byte + 1;
        remaining_bits >>= integer_difference;
        ++packet_out_byte;
        cached_packet_out_bit = 0;
        if ( remaining_amount <= 0 )
          goto LABEL_25;
      }
      packet_out_bit += remaining_amount;
    }
LABEL_25:
    sr_net_write_bits(&dword_140404A6C[scaled_index + 71856363], 8);
    if ( record_byte_offset > 0 )
    {
      remaining_count = (unsigned int)record_byte_offset;
      while ( 1 )
      {
        scaled_index_2 = scaled_index * 4 + 84LL * masked_bits_2;
        sr_net_write_bits((unsigned int *)((char *)&g_151620E28 + scaled_index_2), 4);
        masked_bits_3 = *(unsigned int *)((char *)&g_151620E28 + scaled_index_2);
        if ( masked_bits_3 )
        {
          if ( masked_bits_3 == 1 )
          {
            sr_net_write_bits((unsigned int *)((char *)&g_151620E2C + scaled_index_2), 6);
            masked_bits_4 = *(unsigned int *)((char *)&g_151620E2C + scaled_index_2);
            if ( masked_bits_4 > 0 )
            {
              remaining_count_3 = (unsigned int)masked_bits_4;
              cached_packet_out_byte_4 = packet_out_byte;
              buffer_cursor_2 = (char *)&g_151620E3C + scaled_index_2;
              do
              {
                if ( cached_packet_out_byte_4 < 0x10000 )
                {
                  if ( (int)packet_out_bit > 0 )
                  {
                    ++cached_packet_out_byte_4;
                    packet_out_bit = 0;
                    packet_out_byte = cached_packet_out_byte_4;
                  }
                  *((_BYTE *)&packet_out_data + cached_packet_out_byte_4) = *buffer_cursor_2;
                  cached_packet_out_byte_4 = ++packet_out_byte;
                }
                ++buffer_cursor_2;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
            }
            encoded_value = (unsigned int *)((char *)&g_151620E30 + scaled_index_2);
            sr_net_write_bits((unsigned int *)((char *)&g_151620E30 + scaled_index_2), 4);
            cached_packet_out_byte_3 = packet_out_byte;
LABEL_48:
            if ( masked_bits_3 == 3 )
            {
              sr_net_write_bits((unsigned int *)((char *)&g_151620E2C + scaled_index_2), 16);
              sr_net_write_bits(encoded_value, 16);
              sr_net_write_bits((unsigned int *)((char *)&g_151620E34 + scaled_index_2), 16);
              cached_packet_out_byte_3 = packet_out_byte;
            }
            else if ( (unsigned int)(masked_bits_3 - 4) <= 1 && cached_packet_out_byte_3 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++cached_packet_out_byte_3;
                packet_out_bit = 0;
                packet_out_byte = cached_packet_out_byte_3;
              }
              *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_3) = *(unsigned int *)((char *)&g_151620E2C
                                                                                             + scaled_index_2);
              cached_packet_out_byte_3 = packet_out_byte + 4;
              packet_out_byte = cached_packet_out_byte_3;
              if ( cached_packet_out_byte_3 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++cached_packet_out_byte_3;
                  packet_out_bit = 0;
                  packet_out_byte = cached_packet_out_byte_3;
                }
                *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_3) = *(unsigned int *)((char *)&g_151620E30
                                                                                               + scaled_index_2);
                cached_packet_out_byte_3 = packet_out_byte + 4;
                packet_out_byte += 4;
              }
            }
            goto LABEL_61;
          }
          cached_packet_out_byte_3 = packet_out_byte;
        }
        else
        {
          sr_net_write_bits((unsigned int *)((char *)&g_151620E2C + scaled_index_2), 8);
          cached_packet_out_byte_3 = packet_out_byte;
          if ( (int)packet_out_byte < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              cached_packet_out_byte_3 = packet_out_byte + 1;
              packet_out_bit = 0;
              ++packet_out_byte;
            }
            *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_3) = *(unsigned int *)((char *)&g_151620E30
                                                                                           + scaled_index_2);
            cached_packet_out_byte_3 = packet_out_byte + 4;
            packet_out_byte += 4;
          }
          remaining_count_2 = 16;
          buffer_cursor = (char *)&g_151620E3C + scaled_index_2;
          do
          {
            if ( cached_packet_out_byte_3 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++cached_packet_out_byte_3;
                packet_out_bit = 0;
                packet_out_byte = cached_packet_out_byte_3;
              }
              *((_BYTE *)&packet_out_data + cached_packet_out_byte_3) = *buffer_cursor;
              cached_packet_out_byte_3 = ++packet_out_byte;
            }
            ++buffer_cursor;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
        }
        encoded_value = (unsigned int *)((char *)&g_151620E30 + scaled_index_2);
        if ( masked_bits_3 != 2 )
          goto LABEL_48;
        sr_net_write_bits((unsigned int *)((char *)&g_151620E2C + scaled_index_2), 16);
        sr_net_write_bits((unsigned int *)((char *)&g_151620E30 + scaled_index_2), 16);
        cached_packet_out_byte_3 = packet_out_byte;
LABEL_61:
        masked_bits_2 = ((_BYTE)masked_bits_2 + 1) & 0x3F;
        if ( !--remaining_count )
          goto LABEL_64;
      }
    }
    cached_packet_out_byte_3 = packet_out_byte;
LABEL_64:
    scaled_index_3 = 32901 * cached_local_player;
    remaining_amount_2 = 11;
    scaled_index_4 = dword_140404A6C[32901 * cached_local_player + 299853696] & 0x3F;
    dword_140404A6C[32901 * cached_local_player + 299853696] = scaled_index_4;
    masked_bits_5 = ((_BYTE)scaled_index_4 - 6) & 0x3F;
    if ( (_DWORD)masked_bits_5 != scaled_index_4 )
    {
      scaled_index_5 = 32901 * cached_local_player;
      do
      {
        remaining_amount_3 = 6;
        if ( cached_packet_out_byte_3 < 0x10000 )
        {
          cached_packet_out_bit_2 = packet_out_bit;
          remaining_bits_2 = masked_bits_5;
          while ( 1 )
          {
            *((_BYTE *)&packet_out_data + cached_packet_out_byte_3) &= ~(((1 << remaining_amount_3) - 1) << cached_packet_out_bit_2);
            *(_BYTE *)((int)packet_out_byte + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
            integer_difference_2 = 8 - packet_out_bit;
            if ( remaining_amount_3 < 8 - packet_out_bit )
              break;
            packet_out_bit = 0;
            if ( remaining_amount_3 == integer_difference_2 )
            {
              ++packet_out_byte;
              goto LABEL_74;
            }
            remaining_amount_3 -= integer_difference_2;
            cached_packet_out_byte_3 = packet_out_byte + 1;
            remaining_bits_2 >>= integer_difference_2;
            ++packet_out_byte;
            cached_packet_out_bit_2 = 0;
            if ( remaining_amount_3 <= 0 )
              goto LABEL_74;
          }
          packet_out_bit += remaining_amount_3;
        }
LABEL_74:
        integer_sum = masked_bits_5 + scaled_index_5;
        sr_net_write_bits(&dword_140404A6C[integer_sum + 299853762], 11);
        sr_net_write_bits(&dword_140404A6C[integer_sum + 299853698], 2);
        cached_packet_out_byte_3 = packet_out_byte;
        byte_count = (int)dword_140404A6C[integer_sum + 299853762];
        if ( (int)packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            cached_packet_out_byte_3 = packet_out_byte + 1;
            packet_out_bit = 0;
            ++packet_out_byte;
          }
          crt_memcpy(
            (__m128i *)((char *)&packet_out_data + cached_packet_out_byte_3),
            (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)masked_bits_5 + 299853826 + scaled_index_3],
            byte_count);
          cached_packet_out_byte_3 = byte_count + packet_out_byte;
          packet_out_byte += byte_count;
        }
        masked_bits_5 = ((_BYTE)masked_bits_5 + 1) & 0x3F;
      }
      while ( (_DWORD)masked_bits_5 != scaled_index_4 );
    }
    sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_3 * 4 + 1203628128), 1);
    cached_packet_out_byte_5 = packet_out_byte;
    remaining_amount_4 = 8;
    LOBYTE(integer_sum_2) = packet_out_bit;
    if ( (int)packet_out_byte < 0x10000 )
    {
      lobyte_result = LOBYTE(g_183F79DE4);
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte_5) &= ~(((1 << remaining_amount_4) - 1) << integer_sum_2);
        *(_BYTE *)((int)packet_out_byte + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)lobyte_result << SLOBYTE(packet_out_bit);
        integer_difference_3 = 8 - packet_out_bit;
        cached_packet_out_byte_5 = packet_out_byte;
        if ( remaining_amount_4 < 8 - packet_out_bit )
          break;
        if ( remaining_amount_4 == integer_difference_3 )
        {
          cached_packet_out_byte_5 = ++packet_out_byte;
          integer_sum_2 = 0;
          goto LABEL_87;
        }
        cached_packet_out_byte_5 = packet_out_byte + 1;
        lobyte_result >>= integer_difference_3;
        LOBYTE(integer_sum_2) = 0;
        ++packet_out_byte;
        remaining_amount_4 -= integer_difference_3;
        packet_out_bit = 0;
        if ( remaining_amount_4 <= 0 )
          goto LABEL_88;
      }
      integer_sum_2 = remaining_amount_4 + packet_out_bit;
LABEL_87:
      packet_out_bit = integer_sum_2;
LABEL_88:
      if ( cached_packet_out_byte_5 < 0x10000 )
      {
        remaining_bits_3 = g_1A4D31D18 & 0x7FF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_5) &= ~(((1 << remaining_amount_2) - 1) << integer_sum_2);
          *(_BYTE *)((int)packet_out_byte + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)remaining_bits_3 << SLOBYTE(packet_out_bit);
          integer_difference_4 = 8 - packet_out_bit;
          cached_packet_out_byte_5 = packet_out_byte;
          if ( remaining_amount_2 < 8 - packet_out_bit )
            break;
          if ( remaining_amount_2 == integer_difference_4 )
          {
            cached_packet_out_byte_5 = ++packet_out_byte;
            integer_sum_2 = 0;
            goto LABEL_96;
          }
          cached_packet_out_byte_5 = packet_out_byte + 1;
          remaining_bits_3 >>= integer_difference_4;
          LOBYTE(integer_sum_2) = 0;
          ++packet_out_byte;
          remaining_amount_2 -= integer_difference_4;
          packet_out_bit = 0;
          if ( remaining_amount_2 <= 0 )
            goto LABEL_97;
        }
        integer_sum_2 = remaining_amount_2 + packet_out_bit;
LABEL_96:
        packet_out_bit = integer_sum_2;
      }
    }
LABEL_97:
    remaining_amount_5 = 8;
    if ( cached_packet_out_byte_5 < 0x10000 )
    {
      lobyte_result_2 = LOBYTE(g_1A4D3BD1C);
      while ( 1 )
      {
        *((_BYTE *)&packet_out_data + cached_packet_out_byte_5) &= ~(((1 << remaining_amount_5) - 1) << integer_sum_2);
        *(_BYTE *)((int)packet_out_byte + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)lobyte_result_2 << SLOBYTE(packet_out_bit);
        integer_difference_5 = 8 - packet_out_bit;
        if ( remaining_amount_5 < 8 - packet_out_bit )
          break;
        if ( remaining_amount_5 == integer_difference_5 )
        {
          ++packet_out_byte;
          packet_out_bit = 0;
          goto LABEL_105;
        }
        LOBYTE(integer_sum_2) = 0;
        cached_packet_out_byte_5 = packet_out_byte + 1;
        lobyte_result_2 >>= integer_difference_5;
        remaining_amount_5 -= integer_difference_5;
        ++packet_out_byte;
        packet_out_bit = 0;
        if ( remaining_amount_5 <= 0 )
          goto LABEL_105;
      }
      packet_out_bit += remaining_amount_5;
    }
LABEL_105:
    call_result = sub_140198F9B();
    cached_packet_out_byte_6 = packet_out_byte;
    dword_140404A6C[LOBYTE(g_1A6F9DD34) + 430859443] = call_result;
    state_word = g_1A6F9DD34;
    if ( cached_packet_out_byte_6 < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        ++cached_packet_out_byte_6;
        packet_out_bit = 0;
        packet_out_byte = cached_packet_out_byte_6;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_6) = g_1A6F9DD34;
      cached_packet_out_byte_6 = packet_out_byte + 4;
      packet_out_byte += 4;
    }
    if ( cached_packet_out_byte_6 < 0x10000 )
    {
      if ( (int)packet_out_bit > 0 )
      {
        ++cached_packet_out_byte_6;
        packet_out_bit = 0;
        packet_out_byte = cached_packet_out_byte_6;
      }
      *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_6) = *(_DWORD *)(4LL * (unsigned __int8)state_word
                                                                               + 1727651128
                                                                               + ((intptr_t)dword_140404A6C - 0x404a6cLL));
      packet_out_byte += 4;
    }
    g_1A6F9DD34 = state_word + 1;
    sub_140130350(g_1AD04B1D4, g_1AD04B1D8, *(__int64 *)&g_1AD04B1E0);
  }
}

//----- (00000001400453F0) ----------------------------------------------------
__int64 sub_1400453F0()
{
  __int64 result;

  if ( g_144980D88 )
  {
    result = ((__int64 (*)(void))FreeLibrary)();
    g_144980D88 = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored

//----- (0000000140045420) ----------------------------------------------------
__int64            sub_140045420(int *a1, _DWORD *a2)
{
  float square_root;
  int iteration_count;
  int *shape;
  __int64 packed_word_bits;
  __int64 scaled_index;
  __int64 iteration_count_2;
  _DWORD *float_word;
  float saved_distance;
  int saved_cached_nan;
  int float_word_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  int iteration_count_3;
  int *record_byte_offset;
  int collision_find_free_contact_result;
  __int64 scaled_index_2;
  int table_value;
  int *record_pointer;
  int *record_pointer_2;
  __int64 scaled_index_3;
  int *running_total;
  __int64 loaded_word;
  int float_word_3;
  int float_word_4;
  int float_word_5;
  float weighted_sum_4;
  int float_word_6;
  int float_word_7;
  int float_word_8;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  int cached_nan;
  __int64 iteration_count_4;
  int element_index;
  int *running_total_2;
  __int64 iteration_count_5;
  int iteration_count_6;
  float saved_distance_2;
  int *running_total_3;
  int selection_flag;
  float *b1;
  float *b0;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  bool comparison_result;
  int body;
  int collision_find_free_contact_result_2;
  __int64 scaled_index_4;
  int cached_scaled_index;
  int collision_find_free_contact_result_3;
  __int64 scaled_index_5;
  int cached_loaded_word;
  int iteration_count_7;
  int *record_pointer_3;
  int *running_total_4;
  __int64 scaled_index_6;
  int element_index_2;
  __int64 scaled_index_7;
  int *running_total_5;
  float weighted_sum_9;
  float weighted_sum_10;
  float saved_distance_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  __int64 iteration_count_8;
  int element_index_3;
  int *running_total_6;
  __int64 iteration_count_9;
  int iteration_count_10;
  _DWORD *record_byte_offset_2;
  BOOL comparison_result_2;
  int collision_sphere_triangle_face_result;
  int masked_bits;
  int body_2;
  int iteration_count_11;
  int *running_total_7;
  float component_delta_7;
  float component_delta_8;
  float component_delta_9;
  float square_root_2;
  int body_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140045420[304];
#define scratch_buffer (*(_DWORD (*)[14])(void *)(sr_frame_140045420 + 0)) /* [rsp+8h] */
#define distance (*(float (*))(void *)(sr_frame_140045420 + 80)) /* [rsp+58h] */
#define cached_nan_2 (*(int (*))(void *)(sr_frame_140045420 + 84)) /* [rsp+5Ch] */
#define normal (*(__int64 (*))(void *)(sr_frame_140045420 + 88)) /* [rsp+60h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140045420 + 96)) /* [rsp+68h] */
#define distance_2 (*(float (*))(void *)(sr_frame_140045420 + 104)) /* [rsp+70h] */
#define distance_3 (*(float (*))(void *)(sr_frame_140045420 + 108)) /* [rsp+74h] */
#define offset (*(__int64 (*))(void *)(sr_frame_140045420 + 112)) /* [rsp+78h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140045420 + 120)) /* [rsp+80h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140045420 + 128)) /* [rsp+88h] */
#define on_a (*(float (*))(void *)(sr_frame_140045420 + 136)) /* [rsp+90h] */
#define frame_float_at_140 (*(float (*))(void *)(sr_frame_140045420 + 140)) /* [rsp+94h] */
#define frame_float_at_144 (*(float (*))(void *)(sr_frame_140045420 + 144)) /* [rsp+98h] */
#define on_b (*(float (*))(void *)(sr_frame_140045420 + 152)) /* [rsp+A0h] */
#define frame_float_at_156 (*(float (*))(void *)(sr_frame_140045420 + 156)) /* [rsp+A4h] */
#define frame_float_at_160 (*(float (*))(void *)(sr_frame_140045420 + 160)) /* [rsp+A8h] */
#define running_total_8 (*(int * (*))(void *)(sr_frame_140045420 + 168)) /* [rsp+B0h] */
#define cached_scaled_index_2 (*(int (*))(void *)(sr_frame_140045420 + 180)) /* [rsp+BCh] */
#define saved_loaded_word (*(int (*))(void *)(sr_frame_140045420 + 184)) /* [rsp+C0h] */
#define i (*(int * (*))(void *)(sr_frame_140045420 + 192)) /* [rsp+C8h] */
#define float_buffer (*(float (*)[3])(void *)(sr_frame_140045420 + 200)) /* [rsp+D0h] */
#define float_word_9 (*(__int64 (*))(void *)(sr_frame_140045420 + 212)) /* [rsp+DCh] */
#define frame_float_at_220 (*(float (*))(void *)(sr_frame_140045420 + 220)) /* [rsp+E4h] */
#define from (*(float (*))(void *)(sr_frame_140045420 + 240)) /* [rsp+F8h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_140045420 + 244)) /* [rsp+FCh] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_140045420 + 248)) /* [rsp+100h] */
#define to (*(float (*))(void *)(sr_frame_140045420 + 252)) /* [rsp+104h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_140045420 + 256)) /* [rsp+108h] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_140045420 + 260)) /* [rsp+10Ch] */
#define float_buffer_2 (*(float (*)[3])(void *)(sr_frame_140045420 + 264)) /* [rsp+110h] */
#define float_buffer_3 (*(float (*)[3])(void *)(sr_frame_140045420 + 276)) /* [rsp+11Ch] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_140045420 + 288)) /* [rsp+128h] */

  square_root = distance;
  iteration_count = 0;
  shape = a1;
  for ( i = a1; iteration_count < *shape; ++iteration_count )
  {
    packed_word_bits = 0;
    scaled_index = 23LL * iteration_count;
    iteration_count_2 = 0;
    float_word = shape + 2436;
    saved_distance = *(float *)&shape[scaled_index + 21];
    saved_cached_nan = shape[scaled_index + 22];
    float_word_2 = shape[scaled_index + 23];
    weighted_sum = *(float *)&shape[scaled_index + 18];
    weighted_sum_2 = *(float *)&shape[scaled_index + 19];
    weighted_sum_3 = *(float *)&shape[scaled_index + 20];
    distance_3 = saved_distance;
    from = saved_distance;
    cached_nan_2 = saved_cached_nan;
    unused_written_slot_3 = *(float *)&saved_cached_nan;
    unused_written_slot_4 = *(float *)&float_word_2;
    to = weighted_sum;
    unused_written_slot_5 = weighted_sum_2;
    unused_written_slot_6 = weighted_sum_3;
    while ( (int)*(float_word - 1) <= 0 || *float_word != iteration_count || float_word[1] || float_word[2] || float_word[3] )
    {
      packed_word_bits = (unsigned int)(packed_word_bits + 1);
      ++iteration_count_2;
      float_word += 18;
      if ( iteration_count_2 >= 64 )
      {
        LODWORD(packed_word_bits) = -1;
        goto LABEL_10;
      }
    }
    saved_distance = *(float *)&shape[18 * packed_word_bits + 2440];
    saved_cached_nan = shape[18 * packed_word_bits + 2441];
    float_word_2 = shape[18 * packed_word_bits + 2442];
    distance_3 = saved_distance;
    from = saved_distance;
    cached_nan_2 = saved_cached_nan;
    unused_written_slot_3 = *(float *)&saved_cached_nan;
    unused_written_slot_4 = *(float *)&float_word_2;
LABEL_10:
    if ( sub_1400DA580((__int64)float_buffer, (__int64)a2, &from, &to) )
    {
      normal = float_word_9;
      unused_written_slot = frame_float_at_220;
      square_root = (float)((float)((float)(float_buffer[1] - weighted_sum_2) * *((float *)&float_word_9 + 1))
                 + (float)((float)(float_buffer[0] - weighted_sum) * *(float *)&float_word_9))
         + (float)((float)(float_buffer[2] - weighted_sum_3) * frame_float_at_220);
      distance = square_root;
      if ( square_root < 0.0625 )
      {
        distance = 0.0625;
        square_root = 0.0625;
      }
      iteration_count_3 = 0;
      offset = 0;
      unused_written_slot_2 = 0.0;
      if ( shape[scaled_index + 1] > 0 )
      {
        record_byte_offset = &shape[scaled_index + 2];
        do
        {
          sr_physics_add_world_contact(*record_byte_offset, (unsigned int *)&offset, (unsigned int *)&normal, square_root, 0x3C23D70Au, 0.0625, 0x3E800000u);
          ++iteration_count_3;
          record_byte_offset += 4;
        }
        while ( iteration_count_3 < shape[scaled_index + 1] );
        saved_distance = distance_3;
        saved_cached_nan = cached_nan_2;
      }
      if ( (_DWORD)packed_word_bits == -1 )
      {
        collision_find_free_contact_result = sr_collision_find_free_contact((__int64)shape);
        if ( collision_find_free_contact_result != -1 )
        {
          scaled_index_2 = 9LL * collision_find_free_contact_result;
          shape[2 * scaled_index_2 + 2435] = 2;
          shape[2 * scaled_index_2 + 2436] = iteration_count;
          *(_QWORD *)&shape[2 * scaled_index_2 + 2437] = 0;
          shape[2 * scaled_index_2 + 2439] = 0;
          *(float *)&shape[2 * scaled_index_2 + 2440] = saved_distance;
          shape[2 * scaled_index_2 + 2441] = saved_cached_nan;
          shape[2 * scaled_index_2 + 2442] = float_word_2;
        }
      }
      else
      {
        shape[18 * (int)packed_word_bits + 2435] = 2;
      }
    }
  }
  table_value = shape[1473];
  saved_weighted_sum = 0.0;
  if ( table_value > 0 )
  {
    record_pointer = shape + 1475;
    record_pointer_2 = shape + 2436;
    running_total_8 = shape + 1475;
    do
    {
      scaled_index_3 = *(record_pointer - 1);
      running_total = record_pointer_2;
      loaded_word = *record_pointer;
      float_word_3 = shape[23 * scaled_index_3 + 21];
      float_word_4 = shape[23 * scaled_index_3 + 22];
      float_word_5 = shape[23 * scaled_index_3 + 23];
      from = *(float *)&float_word_3;
      unused_written_slot_3 = *(float *)&float_word_4;
      unused_written_slot_4 = *(float *)&float_word_5;
      cached_scaled_index_2 = scaled_index_3;
      saved_loaded_word = loaded_word;
      weighted_sum_4 = *(float *)&shape[23 * loaded_word + 19];
      float_word_6 = shape[23 * loaded_word + 21];
      float_word_7 = shape[23 * loaded_word + 22];
      float_word_8 = shape[23 * loaded_word + 23];
      LODWORD(float_buffer_2[0]) = shape[23 * loaded_word + 18];
      weighted_sum_5 = *(float *)&shape[23 * loaded_word + 20];
      float_buffer_2[1] = weighted_sum_4;
      weighted_sum_6 = *(float *)&shape[23 * scaled_index_3 + 18];
      float_buffer_2[2] = weighted_sum_5;
      weighted_sum_7 = *(float *)&shape[23 * scaled_index_3 + 19];
      float_buffer_3[0] = weighted_sum_6;
      weighted_sum_8 = *(float *)&shape[23 * scaled_index_3 + 20];
      *(float *)&cached_nan = 0.0;
      *(float *)&cached_nan_2 = 0.0;
      iteration_count_4 = 0;
      to = *(float *)&float_word_6;
      unused_written_slot_5 = *(float *)&float_word_7;
      unused_written_slot_6 = *(float *)&float_word_8;
      float_buffer_3[1] = weighted_sum_7;
      float_buffer_3[2] = weighted_sum_8;
      while ( *(running_total - 1) <= 0 || *running_total != (_DWORD)scaled_index_3 || running_total[1] || running_total[2] || running_total[3] )
      {
        ++cached_nan;
        ++iteration_count_4;
        running_total += 18;
        cached_nan_2 = cached_nan;
        if ( iteration_count_4 >= 64 )
        {
          *(float *)&cached_nan = NAN;
          *(float *)&cached_nan_2 = NAN;
          break;
        }
      }
      element_index = 0;
      running_total_2 = record_pointer_2;
      iteration_count_5 = 0;
      while ( *(running_total_2 - 1) <= 0 || *running_total_2 != (_DWORD)loaded_word || running_total_2[1] || running_total_2[2] || running_total_2[3] )
      {
        ++element_index;
        ++iteration_count_5;
        running_total_2 += 18;
        if ( iteration_count_5 >= 64 )
        {
          element_index = -1;
          break;
        }
      }
      if ( *(float *)&cached_nan != NAN )
      {
        float_word_3 = shape[18 * cached_nan + 2440];
        float_word_4 = shape[18 * cached_nan + 2441];
        float_word_5 = shape[18 * cached_nan + 2442];
        from = *(float *)&float_word_3;
        unused_written_slot_3 = *(float *)&float_word_4;
        unused_written_slot_4 = *(float *)&float_word_5;
      }
      if ( element_index != -1 )
      {
        float_word_6 = shape[18 * element_index + 2440];
        float_word_7 = shape[18 * element_index + 2441];
        float_word_8 = shape[18 * element_index + 2442];
        to = *(float *)&float_word_6;
        unused_written_slot_5 = *(float *)&float_word_7;
        unused_written_slot_6 = *(float *)&float_word_8;
      }
      iteration_count_6 = 0;
      saved_distance_2 = 65536.0;
      distance_3 = 65536.0;
      if ( (int)a2[16386] <= 0 )
        goto LABEL_71;
      running_total_3 = a2 + 16387;
      selection_flag = 0;
      do
      {
        if ( sub_140184710(&on_a, &from, &to, float_buffer_2, float_buffer_3, (float *)&a2[4 * *running_total_3 + 2], (float *)&a2[4 * running_total_3[1] + 2]) )
        {
          b1 = (float *)&a2[4 * running_total_3[1] + 2];
          b0 = (float *)&a2[4 * *running_total_3 + 2];
          if ( sr_collision_segment_segment(&on_a, &on_b, &distance_2, &from, &to, b0, b1, 64.0) && saved_distance_2 > distance_2 )
          {
            selection_flag = 1;
            component_delta = on_a - on_b;
            component_delta_2 = frame_float_at_140 - frame_float_at_156;
            component_delta_3 = frame_float_at_144 - frame_float_at_160;
            square_root = fsqrt((float)((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta)) + (float)(component_delta_3 * component_delta_3));
            distance = square_root;
            if ( square_root == 0.0 )
            {
              normal = 0;
              unused_written_slot = 0.0;
            }
            else
            {
              *(float *)&normal = (float)(1.0 / square_root) * component_delta;
              *((float *)&normal + 1) = (float)(1.0 / square_root) * component_delta_2;
              unused_written_slot = (float)(1.0 / square_root) * component_delta_3;
            }
            if ( sr_collision_segment_segment(&on_a, &on_b, &distance_2, float_buffer_2, float_buffer_3, b0, b1, 64.0) )
            {
              component_delta_4 = on_b - on_a;
              component_delta_5 = frame_float_at_156 - frame_float_at_140;
              component_delta_6 = frame_float_at_160 - frame_float_at_144;
              *(float *)&offset = on_b - on_a;
              *((float *)&offset + 1) = frame_float_at_156 - frame_float_at_140;
              unused_written_slot_2 = frame_float_at_160 - frame_float_at_144;
              square_root = fsqrt((float)((float)(component_delta_5 * component_delta_5) + (float)(component_delta_4 * component_delta_4)) + (float)(component_delta_6 * component_delta_6));
              distance = square_root;
              if ( square_root == 0.0 )
              {
                normal = 0;
                unused_written_slot = 0.0;
              }
              else
              {
                *(float *)&normal = (float)(1.0 / square_root) * component_delta_4;
                *((float *)&normal + 1) = (float)(1.0 / square_root) * component_delta_5;
                unused_written_slot = (float)(1.0 / square_root) * component_delta_6;
              }
            }
            saved_distance_2 = distance_2;
          }
        }
        ++iteration_count_6;
        running_total_3 += 2;
      }
      while ( iteration_count_6 < a2[16386] );
      comparison_result = selection_flag == 0;
      distance_3 = saved_distance_2;
      shape = i;
      if ( !comparison_result )
      {
        if ( square_root < 0.0625 )
        {
          distance = 0.0625;
          square_root = 0.0625;
        }
        scratch_buffer[12] = 1048576000;
        scratch_buffer[10] = 1031798784;
        body = running_total_8[2];
        offset = 0;
        unused_written_slot_2 = 0.0;
        sr_physics_add_world_contact(body, (unsigned int *)&offset, (unsigned int *)&normal, square_root, 0x3C23D70Au, 0.0625, 0x3E800000u);
        if ( *(float *)&cached_nan_2 == NAN )
        {
          collision_find_free_contact_result_2 = sr_collision_find_free_contact((__int64)shape);
          if ( collision_find_free_contact_result_2 != -1 )
          {
            scaled_index_4 = 9LL * collision_find_free_contact_result_2;
            cached_scaled_index = cached_scaled_index_2;
            shape[2 * scaled_index_4 + 2435] = 2;
            shape[2 * scaled_index_4 + 2436] = cached_scaled_index;
            *(_QWORD *)&shape[2 * scaled_index_4 + 2437] = 0;
            shape[2 * scaled_index_4 + 2439] = 0;
            shape[2 * scaled_index_4 + 2440] = float_word_3;
            shape[2 * scaled_index_4 + 2441] = float_word_4;
            shape[2 * scaled_index_4 + 2442] = float_word_5;
          }
        }
        else
        {
          shape[18 * cached_nan_2 + 2435] = 2;
        }
        if ( element_index == -1 )
        {
          collision_find_free_contact_result_3 = sr_collision_find_free_contact((__int64)shape);
          record_pointer_2 = shape + 2436;
          if ( collision_find_free_contact_result_3 != -1 )
          {
            scaled_index_5 = 9LL * collision_find_free_contact_result_3;
            cached_loaded_word = saved_loaded_word;
            shape[2 * scaled_index_5 + 2435] = 2;
            shape[2 * scaled_index_5 + 2436] = cached_loaded_word;
            *(_QWORD *)&shape[2 * scaled_index_5 + 2437] = 0;
            shape[2 * scaled_index_5 + 2439] = 0;
            shape[2 * scaled_index_5 + 2440] = float_word_6;
            shape[2 * scaled_index_5 + 2441] = float_word_7;
            shape[2 * scaled_index_5 + 2442] = float_word_8;
          }
          goto LABEL_71;
        }
        shape[18 * element_index + 2435] = 2;
      }
      record_pointer_2 = shape + 2436;
LABEL_71:
      table_value = shape[1473];
      record_pointer = running_total_8 + 5;
      ++LODWORD(saved_weighted_sum);
      running_total_8 += 5;
    }
    while ( SLODWORD(saved_weighted_sum) < table_value );
  }
  iteration_count_7 = 0;
  if ( table_value > 0 )
  {
    record_pointer_3 = shape + 2436;
    running_total_4 = shape + 1477;
    do
    {
      scaled_index_6 = *(running_total_4 - 3);
      element_index_2 = 0;
      scaled_index_7 = *(running_total_4 - 2);
      running_total_5 = record_pointer_3;
      weighted_sum_9 = *(float *)&shape[23 * scaled_index_6 + 18];
      weighted_sum_10 = *(float *)&shape[23 * scaled_index_6 + 19];
      saved_distance_3 = *(float *)&shape[23 * scaled_index_6 + 20];
      saved_weighted_sum = weighted_sum_9;
      from = weighted_sum_9;
      *(float *)&cached_nan_2 = weighted_sum_10;
      unused_written_slot_3 = weighted_sum_10;
      distance_2 = saved_distance_3;
      unused_written_slot_4 = saved_distance_3;
      weighted_sum_11 = *(float *)&shape[23 * scaled_index_7 + 18];
      weighted_sum_12 = *(float *)&shape[23 * scaled_index_7 + 19];
      weighted_sum_13 = *(float *)&shape[23 * scaled_index_7 + 20];
      iteration_count_8 = 0;
      to = weighted_sum_11;
      unused_written_slot_5 = weighted_sum_12;
      unused_written_slot_6 = weighted_sum_13;
      while ( *(running_total_5 - 1) <= 0 || *running_total_5 != (_DWORD)scaled_index_6 || running_total_5[1] || running_total_5[2] || running_total_5[3] )
      {
        ++element_index_2;
        ++iteration_count_8;
        running_total_5 += 18;
        if ( iteration_count_8 >= 64 )
        {
          element_index_2 = -1;
          break;
        }
      }
      element_index_3 = 0;
      running_total_6 = record_pointer_3;
      iteration_count_9 = 0;
      while ( *(running_total_6 - 1) <= 0 || *running_total_6 != (_DWORD)scaled_index_7 || running_total_6[1] || running_total_6[2] || running_total_6[3] )
      {
        ++element_index_3;
        ++iteration_count_9;
        running_total_6 += 18;
        if ( iteration_count_9 >= 64 )
        {
          element_index_3 = -1;
          break;
        }
      }
      if ( element_index_2 != -1 )
      {
        weighted_sum_9 = *(float *)&shape[18 * element_index_2 + 2440];
        weighted_sum_10 = *(float *)&shape[18 * element_index_2 + 2441];
        saved_distance_3 = *(float *)&shape[18 * element_index_2 + 2442];
        saved_weighted_sum = weighted_sum_9;
        from = weighted_sum_9;
        *(float *)&cached_nan_2 = weighted_sum_10;
        unused_written_slot_3 = weighted_sum_10;
        distance_2 = saved_distance_3;
        unused_written_slot_4 = saved_distance_3;
      }
      if ( element_index_3 != -1 )
      {
        weighted_sum_11 = *(float *)&shape[18 * element_index_3 + 2440];
        weighted_sum_12 = *(float *)&shape[18 * element_index_3 + 2441];
        weighted_sum_13 = *(float *)&shape[18 * element_index_3 + 2442];
        to = weighted_sum_11;
        unused_written_slot_5 = weighted_sum_12;
        unused_written_slot_6 = weighted_sum_13;
      }
      iteration_count_10 = 0;
      if ( (int)a2[8193] > 0 )
      {
        record_byte_offset_2 = a2 + 8194;
        do
        {
          comparison_result_2 = 0;
          if ( *record_byte_offset_2 == 3 )
          {
            collision_sphere_triangle_face_result = sr_collision_sphere_triangle_face(
                    &on_a,
                    (float *)&normal,
                    &distance,
                    &from,
                    &to,
                    0.0625,
                    (float *)&a2[4 * record_byte_offset_2[1] + 2],
                    (float *)&a2[4 * record_byte_offset_2[2] + 2],
                    (float *)&a2[4 * record_byte_offset_2[3] + 2]);
            square_root = distance;
            comparison_result_2 = collision_sphere_triangle_face_result != 0;
          }
          if ( *record_byte_offset_2 == 4
            && (masked_bits = sub_1400346F0(
                        &on_a,
                        (float *)&normal,
                        &distance,
                        &from,
                        &to,
                        0.0625,
                        (float *)&a2[4 * record_byte_offset_2[1] + 2],
                        (float *)&a2[4 * record_byte_offset_2[2] + 2],
                        (float *)&a2[4 * record_byte_offset_2[3] + 2],
                        (float *)&a2[4 * record_byte_offset_2[4] + 2]),
                square_root = distance,
                masked_bits)
            || comparison_result_2 )
          {
            body_2 = *running_total_4;
            offset = 0;
            unused_written_slot_2 = 0.0;
            distance = 0.0625 - square_root;
            square_root = 0.0625 - square_root;
            sr_physics_add_world_contact(body_2, (unsigned int *)&offset, (unsigned int *)&normal, square_root, 0x3C23D70Au, 0.0625, 0x3E800000u);
          }
          ++iteration_count_10;
          record_byte_offset_2 += 8;
        }
        while ( iteration_count_10 < a2[8193] );
        weighted_sum_9 = saved_weighted_sum;
        weighted_sum_10 = *(float *)&cached_nan_2;
        saved_distance_3 = distance_2;
        shape = i;
      }
      iteration_count_11 = 0;
      if ( (int)a2[16386] > 0 )
      {
        running_total_7 = a2 + 16387;
        do
        {
          if ( sr_collision_segment_segment(
                 &on_a,
                 &on_b,
                 &distance_3,
                 &from,
                 &to,
                 (float *)&a2[4 * *running_total_7 + 2],
                 (float *)&a2[4 * running_total_7[1] + 2],
                 0.0625) )
          {
            component_delta_7 = on_a - on_b;
            component_delta_8 = frame_float_at_140 - frame_float_at_156;
            component_delta_9 = frame_float_at_144 - frame_float_at_160;
            square_root_2 = fsqrt((float)((float)(component_delta_8 * component_delta_8) + (float)(component_delta_7 * component_delta_7)) + (float)(component_delta_9 * component_delta_9));
            if ( square_root_2 == 0.0 )
            {
              normal = 0;
              unused_written_slot = 0.0;
            }
            else
            {
              *(float *)&normal = (float)(1.0 / square_root_2) * component_delta_7;
              *((float *)&normal + 1) = (float)(1.0 / square_root_2) * component_delta_8;
              unused_written_slot = (float)(1.0 / square_root_2) * component_delta_9;
            }
            body_3 = *running_total_4;
            square_root = 0.0625 - distance_3;
            distance = 0.0625 - distance_3;
            *(float *)&offset = on_a - (float)((float)(weighted_sum_11 + weighted_sum_9) * 0.5);
            *((float *)&offset + 1) = frame_float_at_140 - (float)((float)(weighted_sum_12 + weighted_sum_10) * 0.5);
            unused_written_slot_2 = frame_float_at_144 - (float)((float)(weighted_sum_13 + saved_distance_3) * 0.5);
            sr_physics_add_world_contact(
              body_3,
              (unsigned int *)&offset,
              (unsigned int *)&normal,
              0.0625 - distance_3,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
          }
          ++iteration_count_11;
          running_total_7 += 2;
        }
        while ( iteration_count_11 < a2[16386] );
      }
      ++iteration_count_7;
      record_pointer_3 = shape + 2436;
      running_total_4 += 5;
    }
    while ( iteration_count_7 < shape[1473] );
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef distance
#undef cached_nan_2
#undef normal
#undef unused_written_slot
#undef distance_2
#undef distance_3
#undef offset
#undef unused_written_slot_2
#undef saved_weighted_sum
#undef on_a
#undef frame_float_at_140
#undef frame_float_at_144
#undef on_b
#undef frame_float_at_156
#undef frame_float_at_160
#undef running_total_8
#undef cached_scaled_index_2
#undef saved_loaded_word
#undef i
#undef float_buffer
#undef float_word_9
#undef frame_float_at_220
#undef from
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef to
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef float_buffer_2
#undef float_buffer_3
#undef unused_frame_slot_288

//----- (000000014004BFC0) ----------------------------------------------------
__int64            sub_14004BFC0(__int16 a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  float *input_cursor;
  __int64 input_value;
  int iteration_count;
  int cached_selection_flag;
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  float source_component_w;
  float scaled_value;
  float source_float_6;
  float source_float_4;
  float source_component_y;
  float source_float_7;
  int loaded_word_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word_4;
  float weighted_sum_4;
  float weighted_sum_5;
  float scaled_value_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float scaled_value_3;
  float weighted_sum_8;
  float component_sum;
  float scaled_value_4;
  float weighted_sum_9;
  float component_sum_2;
  float weighted_sum_10;
  float saved_weighted_sum;
  float weighted_sum_11;
  float saved_weighted_sum_2;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float *b0;
  __int64 remaining_count;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float square_root;
  unsigned int float_word;
  unsigned int float_word_2;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004BFC0[12832];
#define normal (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14004BFC0 + 8)) /* [rsp+28h] */
#define source_component_z (*(float (*))(void *)(sr_frame_14004BFC0 + 16)) /* [rsp+30h] */
#define source_float_5 (*(float (*))(void *)(sr_frame_14004BFC0 + 20)) /* [rsp+34h] */
#define distance (*(float (*))(void *)(sr_frame_14004BFC0 + 24)) /* [rsp+38h] */
#define e0 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 32)) /* [rsp+40h] */
#define e1 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 44)) /* [rsp+4Ch] */
#define on_b (*(float (*))(void *)(sr_frame_14004BFC0 + 56)) /* [rsp+58h] */
#define frame_float_at_60 (*(float (*))(void *)(sr_frame_14004BFC0 + 60)) /* [rsp+5Ch] */
#define frame_float_at_6592 (*(float (*))(void *)(sr_frame_14004BFC0 + 6592)) /* [rsp+19E0h] */
#define on_a (*(float (*)[4])(void *)(sr_frame_14004BFC0 + 6600)) /* [rsp+19E8h] */
#define offset (*(unsigned int (*)[4])(void *)(sr_frame_14004BFC0 + 6616)) /* [rsp+19F8h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 6632)) /* [rsp+1A08h] */
#define input_cursor_2 (*(float * (*))(void *)(sr_frame_14004BFC0 + 6640)) /* [rsp+1A10h] */
#define selection_flag (*(int (*))(void *)(sr_frame_14004BFC0 + 6656)) /* [rsp+1A20h] */
#define float_word_3 (*(char (*))(void *)(sr_frame_14004BFC0 + 6660)) /* [rsp+1A24h] */
#define unused_frame_slot_12816 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 12816)) /* [rsp+3230h] */

  input_cursor = a4;
  input_cursor_2 = a4;
  input_value = a2;
  input_value_2 = a2;
  iteration_count = 0;
  selection_flag = 0;
  sub_14000C180(&selection_flag, 0, a5, a6);
  if ( *(int *)(input_value + 64) > 0 )
  {
    cached_selection_flag = selection_flag;
    record_byte_offset = 0;
    do
    {
      loaded_word = *(_QWORD *)(input_value + 8);
      loaded_word_2 = *(_QWORD *)(input_value + 72);
      source_component_w = input_cursor[3];
      scaled_value = *input_cursor;
      source_float_6 = input_cursor[6];
      source_float_4 = input_cursor[4];
      source_component_y = input_cursor[1];
      source_float_7 = input_cursor[7];
      loaded_word_3 = 3 * *(_DWORD *)(loaded_word_2 + record_byte_offset);
      source_float_5 = input_cursor[5];
      source_component_z = input_cursor[2];
      weighted_sum = *(float *)(loaded_word + 4LL * loaded_word_3);
      weighted_sum_2 = *(float *)(loaded_word + 4LL * loaded_word_3 + 4);
      weighted_sum_3 = *(float *)(loaded_word + 4LL * loaded_word_3 + 8);
      loaded_word_4 = 3 * *(_DWORD *)(loaded_word_2 + record_byte_offset + 4);
      weighted_sum_4 = (float)((float)(source_float_6 * weighted_sum_3) + (float)(scaled_value * weighted_sum)) + (float)((float)(source_component_w * weighted_sum_2) + *a3);
      weighted_sum_5 = (float)(source_float_7 * weighted_sum_3) + (float)(source_component_y * weighted_sum);
      scaled_value_2 = input_cursor[2] * weighted_sum;
      weighted_sum_6 = (float)(source_float_4 * weighted_sum_2) + a3[1];
      weighted_sum_7 = *(float *)(loaded_word + 4 * loaded_word_4 + 4);
      e0[0] = weighted_sum_4;
      scaled_value_3 = input_cursor[8] * weighted_sum_3;
      weighted_sum_8 = *(float *)(loaded_word + 4 * loaded_word_4);
      component_sum = weighted_sum_5 + weighted_sum_6;
      scaled_value_4 = input_cursor[5] * weighted_sum_2;
      weighted_sum_9 = *(float *)(loaded_word + 4 * loaded_word_4 + 8);
      e0[1] = component_sum;
      component_sum_2 = (float)(scaled_value_3 + scaled_value_2) + (float)(scaled_value_4 + a3[2]);
      weighted_sum_10 = (float)(weighted_sum_7 * source_component_w) + *a3;
      e0[2] = component_sum_2;
      saved_weighted_sum = weighted_sum_9;
      weighted_sum_11 = (float)((float)(weighted_sum_9 * source_float_6) + (float)(weighted_sum_8 * scaled_value)) + weighted_sum_10;
      saved_weighted_sum_2 = weighted_sum_7;
      weighted_sum_12 = (float)(weighted_sum_9 * input_cursor[8]) + (float)(weighted_sum_8 * source_component_z);
      weighted_sum_13 = (float)(weighted_sum_7 * source_float_5) + a3[2];
      e1[0] = weighted_sum_11;
      weighted_sum_14 = (float)((float)(saved_weighted_sum * source_float_7) + (float)(weighted_sum_8 * source_component_y)) + (float)((float)(saved_weighted_sum_2 * source_float_4) + a3[1]);
      e1[2] = weighted_sum_12 + weighted_sum_13;
      e1[1] = weighted_sum_14;
      if ( cached_selection_flag > 0 )
      {
        b0 = (float *)&float_word_3;
        remaining_count = (unsigned int)cached_selection_flag;
        do
        {
          if ( (unsigned int)sr_collision_edge_edge(on_a, &on_b, &distance, e0, e1, b0, b0 + 3)
            && sr_collision_edge_side(b0, b0 + 3, a3, e0, e1) )
          {
            component_delta = on_b - on_a[0];
            component_delta_2 = frame_float_at_60 - on_a[1];
            component_delta_3 = frame_float_at_6592 - on_a[2];
            square_root = fsqrt((float)((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta)) + (float)(component_delta_3 * component_delta_3));
            if ( square_root == 0.0 )
            {
              normal = 0;
              unused_written_slot = 0.0;
            }
            else
            {
              *(float *)&normal = (float)(1.0 / square_root) * component_delta;
              *((float *)&normal + 1) = (float)(1.0 / square_root) * component_delta_2;
              unused_written_slot = (float)(1.0 / square_root) * component_delta_3;
            }
            *(float *)&float_word = frame_float_at_60 - a3[1];
            *(float *)&float_word_2 = frame_float_at_6592 - a3[2];
            *(float *)offset = on_b - *a3;
            offset[1] = float_word;
            offset[2] = float_word_2;
            sr_physics_add_world_contact(a1, offset, (unsigned int *)&normal, distance, 0x3F19999Au, 0.001953125, 0x3B800000u);
          }
          b0 += 6;
          --remaining_count;
        }
        while ( remaining_count );
        input_value = input_value_2;
        cached_selection_flag = selection_flag;
        input_cursor = input_cursor_2;
      }
      ++iteration_count;
      record_byte_offset += 12;
    }
    while ( iteration_count < *(_DWORD *)(input_value + 64) );
  }
  return 0; /* the function has no caller */
}
#undef normal
#undef unused_written_slot
#undef source_component_z
#undef source_float_5
#undef distance
#undef e0
#undef e1
#undef on_b
#undef frame_float_at_60
#undef frame_float_at_6592
#undef on_a
#undef offset
#undef input_value_2
#undef input_cursor_2
#undef selection_flag
#undef float_word_3
#undef unused_frame_slot_12816

//----- (000000014004C4E0) ----------------------------------------------------
__int64            shader_compile_program(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 element_index;
  char *text_cursor;
  bool comparison_result;
  char masked_bits;
  __int64 element_index_2;
  char *text_cursor_2;
  char masked_bits_2;
  char *text_cursor_3;
  __int64 element_index_3;
  char masked_bits_3;
  __int64 scaled_index;
  __int64 element_index_4;
  char *text_cursor_4;
  char masked_bits_4;
  __int64 element_index_5;
  char *text_cursor_5;
  char masked_bits_5;
  char *text_cursor_6;
  __int64 element_index_6;
  char masked_bits_6;
  __int64 scaled_index_2;
  __int64 element_index_7;
  char *text_cursor_7;
  char masked_bits_7;
  __int64 element_index_8;
  char *text_cursor_8;
  char masked_bits_8;
  char *text_cursor_9;
  __int64 element_index_9;
  char masked_bits_9;
  __int64 scaled_index_3;
  char *text_cursor_10;
  __int64 element_index_10;
  char masked_bits_10;
  __int64 table_value;
  char *text_cursor_11;
  __int64 element_index_11;
  char table_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C4E0[592];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14004C4E0 + 32)) /* [rsp+20h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 40)) /* [rsp+28h] */
#define input_value_3 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 48)) /* [rsp+30h] */
#define input_value_4 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 56)) /* [rsp+38h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_14004C4E0 + 64)) /* [rsp+40h] */
#define unused_frame_slot_576 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 576)) /* [rsp+240h] */

  input_value = a1;
  input_value_4 = a2;
  input_value_2 = a3;
  input_value_3 = a4;
  LOBYTE(g_1515F0C00) = 0;
  if ( a2 )
  {
    record_word_offset = 60LL * a1;
    glShaderSource(dword_140404A6C[record_word_offset + 71737686], 1, (const char *const *)&input_value_4, nullptr);
    glGetProgramInfoLog(dword_140404A6C[record_word_offset + 71737686], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor == 0;
      while ( !comparison_result );
      element_index = 0;
      do
      {
        masked_bits = *((_BYTE *)&g_1515F0C00 + element_index);
        text_cursor[element_index++] = masked_bits;
      }
      while ( masked_bits );
    }
    glCompileShader(dword_140404A6C[record_word_offset + 71737686]);
    glGetProgramInfoLog(dword_140404A6C[record_word_offset + 71737686], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_2 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_2 == 0;
      while ( !comparison_result );
      element_index_2 = 0;
      do
      {
        masked_bits_2 = *((_BYTE *)&g_1515F0C00 + element_index_2);
        text_cursor_2[element_index_2++] = masked_bits_2;
      }
      while ( masked_bits_2 );
    }
    glAttachShader(dword_140404A6C[record_word_offset + 71737685], dword_140404A6C[record_word_offset + 71737686]);
    glGetProgramInfoLog(dword_140404A6C[record_word_offset + 71737686], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_3 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_3 == 0;
      while ( !comparison_result );
      element_index_3 = 0;
      do
      {
        masked_bits_3 = *((_BYTE *)&g_1515F0C00 + element_index_3);
        text_cursor_3[element_index_3++] = masked_bits_3;
      }
      while ( masked_bits_3 );
    }
  }
  else if ( !a3 && !a4 )
  {
    return dword_140404A6C[60 * (__int64)a1 + 71737689];
  }
  if ( input_value_2 )
  {
    scaled_index = 60 * input_value;
    glShaderSource(dword_140404A6C[60 * input_value + 71737687], 1, (const char *const *)&input_value_2, nullptr);
    glGetProgramInfoLog(dword_140404A6C[60 * input_value + 71737687], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_4 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_4 == 0;
      while ( !comparison_result );
      element_index_4 = 0;
      do
      {
        masked_bits_4 = *((_BYTE *)&g_1515F0C00 + element_index_4);
        text_cursor_4[element_index_4++] = masked_bits_4;
      }
      while ( masked_bits_4 );
    }
    glCompileShader(dword_140404A6C[scaled_index + 71737687]);
    glGetProgramInfoLog(dword_140404A6C[scaled_index + 71737687], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_5 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_5 == 0;
      while ( !comparison_result );
      element_index_5 = 0;
      do
      {
        masked_bits_5 = *((_BYTE *)&g_1515F0C00 + element_index_5);
        text_cursor_5[element_index_5++] = masked_bits_5;
      }
      while ( masked_bits_5 );
    }
    glAttachShader(dword_140404A6C[scaled_index + 71737685], dword_140404A6C[scaled_index + 71737687]);
    glGetProgramInfoLog(dword_140404A6C[scaled_index + 71737687], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_6 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_6 == 0;
      while ( !comparison_result );
      element_index_6 = 0;
      do
      {
        masked_bits_6 = *((_BYTE *)&g_1515F0C00 + element_index_6);
        text_cursor_6[element_index_6++] = masked_bits_6;
      }
      while ( masked_bits_6 );
    }
  }
  if ( input_value_3 )
  {
    scaled_index_2 = 60 * input_value;
    glShaderSource(dword_140404A6C[60 * input_value + 71737688], 1, (const char *const *)&input_value_3, nullptr);
    glGetProgramInfoLog(dword_140404A6C[60 * input_value + 71737688], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_7 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_7 == 0;
      while ( !comparison_result );
      element_index_7 = 0;
      do
      {
        masked_bits_7 = *((_BYTE *)&g_1515F0C00 + element_index_7);
        text_cursor_7[element_index_7++] = masked_bits_7;
      }
      while ( masked_bits_7 );
    }
    glCompileShader(dword_140404A6C[scaled_index_2 + 71737688]);
    glGetProgramInfoLog(dword_140404A6C[scaled_index_2 + 71737688], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_8 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_8 == 0;
      while ( !comparison_result );
      element_index_8 = 0;
      do
      {
        masked_bits_8 = *((_BYTE *)&g_1515F0C00 + element_index_8);
        text_cursor_8[element_index_8++] = masked_bits_8;
      }
      while ( masked_bits_8 );
    }
    glAttachShader(dword_140404A6C[scaled_index_2 + 71737685], dword_140404A6C[scaled_index_2 + 71737688]);
    glGetProgramInfoLog(dword_140404A6C[scaled_index_2 + 71737688], 0x10000, &callee_output_word, &g_1515F0C00);
    if ( callee_output_word > 0 )
    {
      text_cursor_9 = (char *)&g_1515B0BBC + 3;
      do
        comparison_result = *++text_cursor_9 == 0;
      while ( !comparison_result );
      element_index_9 = 0;
      do
      {
        masked_bits_9 = *((_BYTE *)&g_1515F0C00 + element_index_9);
        text_cursor_9[element_index_9++] = masked_bits_9;
      }
      while ( masked_bits_9 );
    }
  }
  scaled_index_3 = 60 * input_value;
  glLinkProgram(dword_140404A6C[scaled_index_3 + 71737685]);
  glGetProgramInfoLog(dword_140404A6C[scaled_index_3 + 71737685], 0x10000, &callee_output_word, &g_1515F0C00);
  if ( callee_output_word > 0 )
  {
    text_cursor_10 = (char *)&g_1515B0BBC + 3;
    do
      comparison_result = *++text_cursor_10 == 0;
    while ( !comparison_result );
    element_index_10 = 0;
    do
    {
      masked_bits_10 = *((_BYTE *)&g_1515F0C00 + element_index_10);
      text_cursor_10[element_index_10++] = masked_bits_10;
    }
    while ( masked_bits_10 );
  }
  table_value = dword_140404A6C[scaled_index_3 + 71737685];
  dword_140404A6C[scaled_index_3 + 71737689] = 1;
  glValidateProgram(table_value);
  crt_sprintf(scratch_buffer, "\r\n\r\n");
  text_cursor_11 = (char *)&g_1515B0BBC + 3;
  do
    comparison_result = *++text_cursor_11 == 0;
  while ( !comparison_result );
  element_index_11 = 0;
  do
  {
    table_value_2 = scratch_buffer[element_index_11];
    text_cursor_11[element_index_11++] = table_value_2;
  }
  while ( table_value_2 );
  return dword_140404A6C[60 * (__int64)a1 + 71737689];
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef input_value_2
#undef input_value_3
#undef input_value_4
#undef scratch_buffer
#undef unused_frame_slot_576

//----- (000000014004C9C0) ----------------------------------------------------
__int64            sub_14004C9C0(int a1, int *a2, int *a3, __int64 a4, int *a5)
{
  __int64 input_value;
  __int64 packed_word_bits;
  __int64 i;
  unsigned __int8 toupper_result;
  int *unused_written_slot;
  __int64 loaded_word;
  __int64 scaled_index;
  __int64 lookup_index;
  signed int scaled_index_2;
  __int64 iteration_count;
  __int64 lookup_index_2;
  int saved_packed_word_bits;
  char loaded_word_2;
  __int64 element_index;
  char loaded_word_3;
  int element_index_2;
  __int64 scaled_index_3;
  int scaled_index_4;
  _DWORD *j;
  unsigned int *state_address;
  _BYTE *byte_cursor;
  int table_value;
  int loaded_word_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C9C0[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 0)) /* [rsp+0h] */
#define saved_packed_word_bits_2 (*(int * (*))(void *)(sr_frame_14004C9C0 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_14004C9C0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 560)) /* [rsp+230h] */

  saved_packed_word_bits_2 = a5;
  input_value = a1;
  packed_word_bits = *a5;
  for ( i = packed_word_bits; i < 62; ++i )
  {
    if ( *(_BYTE *)(i + a4) != 32 )
      break;
    LODWORD(packed_word_bits) = packed_word_bits + 1;
  }
  toupper_result = toupper(*(unsigned __int8 *)((int)packed_word_bits + a4));
  if ( (unsigned __int8)(toupper_result - 65) <= 0x19u && *(_BYTE *)((int)packed_word_bits + a4 + 1) == 58 )
  {
    *a2 = toupper_result - 65;
    LODWORD(packed_word_bits) = packed_word_bits + 2;
  }
  unused_written_slot = saved_packed_word_bits_2;
  *saved_packed_word_bits_2 = packed_word_bits;
  loaded_word = *a2;
  if ( (_DWORD)loaded_word == 2 )
  {
    scaled_index = 1760 * input_value;
    lookup_index = input_value;
    scaled_index_2 = dword_140404A6C[1760 * input_value + 278846098];
  }
  else
  {
    if ( (_DWORD)loaded_word )
      return (unsigned int)-1; /* 0x14004CA7E: jne -> mov eax, 0xffffffff */
    scaled_index = 1760 * input_value;
    lookup_index = input_value;
    if ( (int)dword_140404A6C[1760 * input_value + 278845906] <= 0 )
      return (unsigned int)-1; /* 0x14004CA9D: jle -> mov eax, 0xffffffff */
    scaled_index_2 = dword_140404A6C[1760 * dword_140404A6C[scaled_index + 278845907] + 278846098];
  }
  if ( scaled_index_2 != -1 )
  {
    *a3 = dword_140404A6C[1760 * lookup_index + 278847173 + 18 * loaded_word + (int)dword_140404A6C[18 * loaded_word + 278847172 + scaled_index]];
    if ( *(_BYTE *)((int)packed_word_bits + a4) == 92 )
    {
      *a3 = 0;
      LODWORD(packed_word_bits) = packed_word_bits + 1;
    }
    iteration_count = (int)packed_word_bits;
    lookup_index_2 = scaled_index_2;
    while ( 1 )
    {
      while ( 1 )
      {
        *unused_written_slot = packed_word_bits;
        if ( *(_BYTE *)(iteration_count + a4) != 46 )
          break;
        ++iteration_count;
        saved_packed_word_bits = packed_word_bits + 1;
        if ( *(_BYTE *)(iteration_count + a4) == 46 )
        {
          loaded_word_2 = *(_BYTE *)((int)packed_word_bits + a4 + 2);
          if ( loaded_word_2 != 92 && loaded_word_2 )
            return (unsigned int)-1; /* 0x14004CB3A: jne -> mov eax, 0xffffffff */
          ++iteration_count;
          *a3 = dword_140404A6C[2570 * lookup_index_2 + 275753051 + 4 * *a3];
        }
        else
        {
          saved_packed_word_bits = packed_word_bits;
        }
        LODWORD(packed_word_bits) = saved_packed_word_bits + 1;
        if ( *(_BYTE *)(iteration_count + a4) != 92 )
          break;
        LODWORD(packed_word_bits) = saved_packed_word_bits + 2;
        ++iteration_count;
      }
      element_index = 0;
      if ( iteration_count < 62 )
      {
        do
        {
          loaded_word_3 = *(_BYTE *)(iteration_count + a4);
          if ( loaded_word_3 == 92 || loaded_word_3 == 32 || !loaded_word_3 )
            break;
          if ( element_index >= 12 )
            return (unsigned int)-1; /* 0x14004CB9A: jge -> mov eax, 0xffffffff */
          scratch_buffer[element_index] = loaded_word_3;
          LODWORD(packed_word_bits) = packed_word_bits + 1;
          ++element_index;
          ++iteration_count;
        }
        while ( iteration_count < 62 );
        if ( (unsigned __int64)element_index >= 0x200 )
          sub_1401F8694();
      }
      scratch_buffer[element_index] = 0;
      if ( element_index <= 0 )
        return 1; /* 0x14004CBC7: jle -> mov eax, 1 */
      element_index_2 = 1;
      scaled_index_3 = 2570 * lookup_index_2;
      scaled_index_4 = dword_140404A6C[2570 * lookup_index_2 + 275753047];
      if ( scaled_index_4 <= 1 )
        return 0; /* 0x14004CBE9: jle -> xor eax, eax */
      for ( j = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_3 * 4 + 1107225576); ; j += 4 )
      {
        if ( *j == *a3 )
        {
          state_address = &dword_140404A6C[4 * element_index_2 + 275753048 + scaled_index_3];
          byte_cursor = (_BYTE *)(scratch_buffer - (_BYTE *)state_address);
          do
          {
            table_value = (unsigned __int8)byte_cursor[(_QWORD)state_address];
            loaded_word_4 = *(unsigned __int8 *)state_address - table_value;
            if ( loaded_word_4 )
              break;
            state_address = (unsigned int *)((char *)state_address + 1);
          }
          while ( table_value );
          if ( !loaded_word_4 )
            break;
        }
        if ( ++element_index_2 >= scaled_index_4 )
          return 0; /* 0x14004CC31: jge -> xor eax, eax */
      }
      if ( element_index_2 == -1 )
        return 0; /* 0x14004CC40: je -> xor eax, eax */
      *a3 = element_index_2;
      if ( *(_BYTE *)(iteration_count + a4) != 92 )
        return 1; /* 0x14004CC4B: jne -> mov eax, 1 */
      unused_written_slot = saved_packed_word_bits_2;
      LODWORD(packed_word_bits) = packed_word_bits + 1;
      ++iteration_count;
    }
  }
  return (unsigned int)-1; /* 0x14004CABE: je -> mov eax, 0xffffffff */
}
#undef unused_frame_slot_0
#undef saved_packed_word_bits_2
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (000000014004CE30) ----------------------------------------------------
double            sub_14004CE30(int a1)
{
  __int64 input_value;
  __int64 record_word_offset;
  void *allocation_buffer;
  __m128i *allocated_buffer;
  unsigned int scaled_index;
  unsigned int cached_mesh_triangle_count;
  void *allocation_buffer_2;
  __m128i *allocated_buffer_2;
  unsigned int cached_mesh_triangle_count_2;
  __m128i *allocated_buffer_3;
  unsigned int cached_mesh_triangle_count_3;
  __m128i *allocated_buffer_4;
  unsigned int cached_mesh_triangle_count_4;
  __m128i *allocated_buffer_5;
  unsigned int cached_mesh_triangle_count_5;
  __m128i *allocated_buffer_6;
  unsigned int cached_mesh_triangle_count_6;
  void *allocation_buffer_3;
  __m128i *allocated_buffer_7;
  unsigned int state_word;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unrecovered_register_value;

  input_value = a1;
  record_word_offset = 908LL * a1;
  allocation_buffer = *(void **)&dword_140404A6C[record_word_offset + 178527463];
  dword_140404A6C[record_word_offset + 178527461] = mesh_vertex_count;
  dword_140404A6C[record_word_offset + 178527462] = g_16A7DBDA4;
  free(allocation_buffer);
  allocated_buffer = (__m128i *)sr_path_malloc(12 * g_16A7DBDA4 * mesh_triangle_count);
  scaled_index = g_16A7DBDA4 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527463] = (uint64)(uintptr_t)(allocated_buffer);
  crt_memcpy(allocated_buffer, (     __m128i *)&g_16A88BDA8, (int)(12 * scaled_index));
  cached_mesh_triangle_count = mesh_triangle_count;
  allocation_buffer_2 = *(void **)&dword_140404A6C[record_word_offset + 178527467];
  dword_140404A6C[record_word_offset + 178527465] = mesh_triangle_count;
  dword_140404A6C[record_word_offset + 178527475] = cached_mesh_triangle_count;
  free(allocation_buffer_2);
  allocated_buffer_2 = (__m128i *)sr_path_malloc(12 * mesh_triangle_count);
  cached_mesh_triangle_count_2 = mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527467] = (uint64)(uintptr_t)(allocated_buffer_2);
  crt_memcpy(allocated_buffer_2, (     __m128i *)&g_16A91BDAC, (int)(12 * cached_mesh_triangle_count_2));
  free(*(void **)&dword_140404A6C[record_word_offset + 178527469]);
  allocated_buffer_3 = (__m128i *)sr_path_malloc(12 * mesh_triangle_count);
  cached_mesh_triangle_count_3 = mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527469] = (uint64)(uintptr_t)(allocated_buffer_3);
  crt_memcpy(allocated_buffer_3, (     __m128i *)&g_16AB73DB0, (int)(12 * cached_mesh_triangle_count_3));
  free(*(void **)&dword_140404A6C[record_word_offset + 178527471]);
  allocated_buffer_4 = (__m128i *)sr_path_malloc(12 * mesh_triangle_count);
  cached_mesh_triangle_count_4 = mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527471] = (uint64)(uintptr_t)(allocated_buffer_4);
  crt_memcpy(allocated_buffer_4, (     __m128i *)&g_16AA53DB0, (int)(12 * cached_mesh_triangle_count_4));
  free(*(void **)&dword_140404A6C[record_word_offset + 178527473]);
  allocated_buffer_5 = (__m128i *)sr_path_malloc(12 * mesh_triangle_count);
  cached_mesh_triangle_count_5 = mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527473] = (uint64)(uintptr_t)(allocated_buffer_5);
  crt_memcpy(allocated_buffer_5, (     __m128i *)&g_16ABA3DB0, (int)(12 * cached_mesh_triangle_count_5));
  free(*(void **)&dword_140404A6C[record_word_offset + 178527477]);
  allocated_buffer_6 = (__m128i *)sr_path_malloc(24 * mesh_triangle_count);
  cached_mesh_triangle_count_6 = mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527477] = (uint64)(uintptr_t)(allocated_buffer_6);
  crt_memcpy(allocated_buffer_6, (     __m128i *)&g_16ABE3DB0, (int)(24 * cached_mesh_triangle_count_6));
  allocation_buffer_3 = *(void **)&dword_140404A6C[record_word_offset + 178527481];
  dword_140404A6C[record_word_offset + 178527479] = g_16AD03DB4;
  free(allocation_buffer_3);
  allocated_buffer_7 = (__m128i *)sr_path_malloc(8 * g_16AD03DB4);
  state_word = g_16AD03DB4;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527481] = (uint64)(uintptr_t)(allocated_buffer_7);
  crt_memcpy(allocated_buffer_7, (     __m128i *)&g_16AD03DB8, (int)(8 * state_word));
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value + 283790166] + 283793813]);
  glBufferData(34962,
    (int)(12 * dword_140404A6C[record_word_offset + 178527462] * dword_140404A6C[record_word_offset + 178527465]),
    *(_QWORD *)&dword_140404A6C[record_word_offset + 178527463],
    35044);
  glBindBuffer(34962, 0);
  glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[input_value + 283790166] + 283793814]);
  glBufferData(34963, (int)(24 * dword_140404A6C[record_word_offset + 178527465]), *(_QWORD *)&dword_140404A6C[record_word_offset + 178527477], 35044);
  return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34963, 0, unrecovered_register_value);
}

//----- (000000014004E6E0) ----------------------------------------------------
void            sub_14004E6E0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  unsigned int *state_address;
  float sr_shape_position[3];
  float sr_shape_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004E6E0[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 0)) /* [rsp+8h] */
#define unused_frame_slot_104 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 104)) /* [rsp+70h] */

  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  sr_shape_position[2] = 0.0;
  if ( a1 == g_183EBB700 )
  {
    (*(__int64 *)sr_shape_position) = 0;
    sub_140002D00((float *)&(*(__int64 *)sr_shape_position), a2, a3, a4);
  }
  else
  {
    LODWORD((*(__int64 *)sr_shape_position)) = 0;
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = a3 * -0.5;
    (*(__int128 *)sr_shape_matrix) = xmmword_140278D30;
    (*(__int128 *)(sr_shape_matrix + 4)) = xmmword_140278D30;
    sr_shape_matrix[8] = 1.0;
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 5);
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_shape_matrix), (float *)&(*(__int128 *)sr_shape_matrix), sr_export_float_lane_container(1061752795));
    *(float *)&(*(__int64 *)sr_shape_position) = (float)(*((float *)&(*(__int128 *)sr_shape_matrix) + 3) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 2) * a4);
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = (float)(*(float *)&(*(__int128 *)(sr_shape_matrix + 4)) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 3) * a4);
    sr_shape_position[2] = (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 1) * (float)(a3 * 0.5)) + (float)(sr_shape_matrix[8] * a4);
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 0);
  }
  iteration_count = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_104

//----- (000000014004EB60) ----------------------------------------------------
double            sub_14004EB60(int a1, int a2, int a3)
{
  double reordered_vector;
  int iteration_count;
  unsigned int float_word;
  __int64 remaining_count;
  __m128 converted_vector;
  __int64 record_word_offset;
  float weighted_sum;
  float weighted_sum_2;
  float scaled_value;
  __m128d converted_vector_2;
  __m128 vector_result;
  double saved_weighted_sum;
  unsigned int reordered_vector_2;
  unsigned int float_word_2;
  __m128d converted_vector_3;
  unsigned int cached_mesh_vertex_count;
  __int64 unrecovered_register_value;
  __m128 vector_result_2;
  unsigned int reordered_vector_3;
  unsigned int float_word_3;
  __m128d converted_vector_4;
  unsigned int cached_mesh_vertex_count_2;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_3;
  unsigned int reordered_vector_4;
  unsigned int float_word_4;
  __m128d converted_vector_5;
  unsigned int cached_mesh_vertex_count_3;
  __int64 unrecovered_register_value_3;
  __m128 vector_result_4;
  unsigned int float_word_5;
  float component_sum;
  float product_difference;
  __int64 remaining_count_2;
  double saved_component_sum;
  __m128 vector_result_5;
  unsigned int reordered_vector_5;
  unsigned int float_word_6;
  double component_sum_2;
  unsigned int cached_mesh_vertex_count_4;
  __int64 unrecovered_register_value_4;
  __m128 vector_result_6;
  unsigned int reordered_vector_6;
  unsigned int float_word_7;
  double component_sum_3;
  unsigned int cached_mesh_vertex_count_5;
  __int64 unrecovered_register_value_5;
  __m128 vector_result_7;
  unsigned int reordered_vector_7;
  unsigned int float_word_8;
  double component_sum_4;
  unsigned int cached_mesh_vertex_count_6;
  __int64 unrecovered_register_value_6;
  __m128 vector_result_8;
  unsigned int float_word_9;
  __int64 scaled_index;
  int record_byte_offset;
  int cached_mesh_triangle_count;
  int masked_bits;
  int masked_bits_2;
  unsigned int integer_sum;
  unsigned int integer_sum_2;
  int masked_bits_3;
  unsigned int integer_sum_3;
  int masked_bits_4;
  unsigned int integer_sum_4;
  int iteration_count_2;
  unsigned int *state_address;
  int cached_mesh_vertex_count_7;
  float *state_address_2;
  int iteration_count_3;
  unsigned int *state_address_3;
  int iteration_count_4;
  float *state_address_4;
  __int64 loaded_word;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 float_word_10;
  __int64 scaled_index_2;
  float product_difference_5;
  float *unused_written_slot;
  float product_difference_6;
  float scaled_value_2;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;

  iteration_count = 0;
  float_word = 0;
  remaining_count = 2;
  converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  record_word_offset = 3LL * a2;
  g_16AC43DB0 = 0;
  weighted_sum = *(float *)&dword_140404A6C[2 * record_word_offset + 437914200];
  weighted_sum_2 = *(float *)&dword_140404A6C[2 * record_word_offset + 437914199];
  scaled_value = weighted_sum * 0.5;
  g_16AD03DB4 = 0;
  do
  {
    converted_vector_2 = _mm_cvtps_pd(converted_vector);
    vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], record_word_offset, reordered_vector));
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 0.7853981633975;
    saved_weighted_sum = weighted_sum_2;
    *(float *)&reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * weighted_sum_2;
    dword_140404A6C[3 * float_word + 177167567] = reordered_vector_2;
    *(float *)&float_word_2 = -(*(double *)SR_VEC_LANES(128, vector_result, u64) * weighted_sum_2);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_2;
    converted_vector_3 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_2));
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = scaled_value;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count = mesh_vertex_count;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_3, f64)[0], unrecovered_register_value, COERCE_DOUBLE((unsigned __int64)reordered_vector_2)));
    *(float *)&reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * weighted_sum_2;
    dword_140404A6C[3 * cached_mesh_vertex_count + 177167567] = reordered_vector_3;
    *(float *)&float_word_3 = -(*(double *)SR_VEC_LANES(128, vector_result_2, u64) * weighted_sum_2);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_3;
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = scaled_value;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_3;
    SR_VEC_LANES(128, converted_vector_3, f64)[0] = SR_VEC_LANES(128, converted_vector_3, f64)[0] + 0.7853981633975;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_3;
    converted_vector_4 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_3));
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_2 = mesh_vertex_count;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], unrecovered_register_value_2, COERCE_DOUBLE((unsigned __int64)reordered_vector_3)));
    SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 0.7853981633975;
    *(float *)&reordered_vector_4 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * weighted_sum_2;
    dword_140404A6C[3 * cached_mesh_vertex_count_2 + 177167567] = reordered_vector_4;
    *(float *)&float_word_4 = -(*(double *)SR_VEC_LANES(128, vector_result_3, u64) * weighted_sum_2);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_4;
    converted_vector_5 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_4));
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = scaled_value;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_4;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_4;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_3 = mesh_vertex_count;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_5, f64)[0], unrecovered_register_value_3, COERCE_DOUBLE((unsigned __int64)reordered_vector_4)));
    HIDWORD(reordered_vector) = 0;
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * weighted_sum_2;
    dword_140404A6C[3 * cached_mesh_vertex_count_3 + 177167567] = LODWORD(reordered_vector);
    SR_VEC_LANES(128, converted_vector_5, f64)[0] = SR_VEC_LANES(128, converted_vector_5, f64)[0] + 0.7853981633975;
    *(float *)&float_word_5 = -(*(double *)SR_VEC_LANES(128, vector_result_4, u64) * weighted_sum_2);
    converted_vector = _mm_cvtpd_ps(converted_vector_5);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_5;
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = scaled_value;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = LODWORD(reordered_vector);
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_5;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    float_word = ++mesh_vertex_count;
    --remaining_count;
  }
  while ( remaining_count );
  component_sum = 0.0;
  product_difference = weighted_sum * -0.5;
  remaining_count_2 = 2;
  do
  {
    saved_component_sum = component_sum;
    vector_result_5 = _mm_castpd_ps(sub_1401F8A50(component_sum, record_word_offset, COERCE_DOUBLE((unsigned __int64)LODWORD(reordered_vector))));
    *(float *)&reordered_vector_5 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_5, (__m128d)vector_result_5, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * float_word + 177167567] = reordered_vector_5;
    *(float *)&float_word_6 = -(*(double *)SR_VEC_LANES(128, vector_result_5, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_6;
    component_sum_2 = (float)(saved_component_sum + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = product_difference;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_5;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_6;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_4 = mesh_vertex_count;
    vector_result_6 = _mm_castpd_ps(sub_1401F8A50(component_sum_2, unrecovered_register_value_4, COERCE_DOUBLE((unsigned __int64)reordered_vector_5)));
    *(float *)&reordered_vector_6 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_6, (__m128d)vector_result_6, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_4 + 177167567] = reordered_vector_6;
    *(float *)&float_word_7 = -(*(double *)SR_VEC_LANES(128, vector_result_6, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_7;
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = product_difference;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_6;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_7;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    component_sum_3 = (float)(component_sum_2 + 0.7853981633975);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_5 = mesh_vertex_count;
    vector_result_7 = _mm_castpd_ps(sub_1401F8A50(component_sum_3, unrecovered_register_value_5, COERCE_DOUBLE((unsigned __int64)reordered_vector_6)));
    *(float *)&reordered_vector_7 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_7, (__m128d)vector_result_7, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_5 + 177167567] = reordered_vector_7;
    *(float *)&float_word_8 = -(*(double *)SR_VEC_LANES(128, vector_result_7, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_8;
    component_sum_4 = (float)(component_sum_3 + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = product_difference;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_7;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_8;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_6 = mesh_vertex_count;
    vector_result_8 = _mm_castpd_ps(sub_1401F8A50(component_sum_4, unrecovered_register_value_6, COERCE_DOUBLE((unsigned __int64)reordered_vector_7)));
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_8, (__m128d)vector_result_8, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_6 + 177167567] = LODWORD(reordered_vector);
    *(float *)&float_word_9 = -(*(double *)SR_VEC_LANES(128, vector_result_8, u64) * saved_weighted_sum);
    component_sum = component_sum_4 + 0.7853981633975;
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_9;
    *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = product_difference;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = LODWORD(reordered_vector);
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_9;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    float_word = ++mesh_vertex_count;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  dword_140404A6C[3 * float_word + 177167567] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = scaled_value;
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167567] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167568] = 0;
  scaled_index = 3 * mesh_vertex_count;
  if ( a3 )
    *(float *)&dword_140404A6C[scaled_index + 177167569] = weighted_sum * -0.25;
  else
    *(float *)&dword_140404A6C[scaled_index + 177167569] = product_difference * 1.5;
  record_byte_offset = 1;
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  cached_mesh_triangle_count = mesh_triangle_count;
  do
  {
    masked_bits = record_byte_offset & 7;
    dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 7;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits + 8;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 7;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 17;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    masked_bits_2 = ((_BYTE)record_byte_offset + 1) & 7;
    integer_sum = masked_bits_2 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 8;
    integer_sum_2 = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2 + 8;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2;
    masked_bits_3 = ((_BYTE)record_byte_offset + 2) & 7;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum;
    integer_sum_3 = masked_bits_3 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 17;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 9;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3 + 8;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3;
    masked_bits_4 = ((_BYTE)record_byte_offset + 3) & 7;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_3;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 9;
    integer_sum_4 = record_byte_offset + 10;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 17;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 10;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4 + 8;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    record_byte_offset += 4;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits_4 + 8;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 17;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    cached_mesh_triangle_count = ++mesh_triangle_count;
  }
  while ( record_byte_offset <= 8 );
  iteration_count_2 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count_2;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_2 < (int)mesh_triangle_count );
  }
  cached_mesh_vertex_count_7 = mesh_vertex_count;
  state_address_2 = (float *)&g_16A82BDB0;
  iteration_count_3 = 0;
  if ( (int)mesh_vertex_count > 0 )
  {
    state_address_3 = &g_16A82BDB0;
    do
    {
      *((_QWORD *)state_address_3 - 1) = 0;
      ++iteration_count_3;
      *state_address_3 = 0;
      state_address_3 += 3;
      cached_mesh_vertex_count_7 = mesh_vertex_count;
    }
    while ( iteration_count_3 < (int)mesh_vertex_count );
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  iteration_count_4 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address_4 = (float *)&g_16AA53DB8;
    do
    {
      loaded_word = 3 * *((_DWORD *)state_address_4 - 319491);
      weighted_sum_3 = *(float *)&dword_140404A6C[loaded_word + 177167568];
      weighted_sum_4 = *(float *)&dword_140404A6C[loaded_word + 177167569];
      weighted_sum_5 = *(float *)&dword_140404A6C[loaded_word + 177167567];
      loaded_word_2 = 3 * *((_DWORD *)state_address_4 - 319490);
      loaded_word_3 = 3 * *((_DWORD *)state_address_4 - 319489);
      combined_products = *(float *)&dword_140404A6C[loaded_word_2 + 177167569] - weighted_sum_4;
      combined_products_2 = *(float *)&dword_140404A6C[loaded_word_3 + 177167568] - weighted_sum_3;
      combined_products_3 = *(float *)&dword_140404A6C[loaded_word_3 + 177167567] - weighted_sum_5;
      combined_products_4 = *(float *)&dword_140404A6C[loaded_word_2 + 177167568] - weighted_sum_3;
      combined_products_5 = *(float *)&dword_140404A6C[loaded_word_2 + 177167567] - weighted_sum_5;
      combined_products_6 = *(float *)&dword_140404A6C[loaded_word_3 + 177167569] - weighted_sum_4;
      product_difference_2 = (float)(combined_products_2 * combined_products) - (float)(combined_products_6 * combined_products_4);
      product_difference_3 = (float)(combined_products_6 * combined_products_5) - (float)(combined_products_3 * combined_products);
      product_difference_4 = (float)(combined_products_3 * combined_products_4) - (float)(combined_products_2 * combined_products_5);
      square_root = fsqrt((float)((float)(product_difference_3 * product_difference_3) + (float)(product_difference_2 * product_difference_2)) + (float)(product_difference_4 * product_difference_4));
      if ( square_root == 0.0 )
      {
        scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
        scaled_ratio_3 = 0.0;
      }
      else
      {
        scaled_ratio = (float)(1.0 / square_root) * product_difference_2;
        scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_3;
        scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_4;
      }
      *(state_address_4 - 2) = scaled_ratio;
      *(state_address_4 - 1) = scaled_ratio_2;
      *state_address_4 = scaled_ratio_3;
      ++iteration_count_4;
      *(float *)&dword_140404A6C[loaded_word + 177249487] = scaled_ratio + *(float *)&dword_140404A6C[loaded_word + 177249487];
      *(float *)&dword_140404A6C[loaded_word + 177249488] = scaled_ratio_2 + *(float *)&dword_140404A6C[loaded_word + 177249488];
      *(float *)&dword_140404A6C[loaded_word + 177249489] = scaled_ratio_3 + *(float *)&dword_140404A6C[loaded_word + 177249489];
      float_word_10 = 3 * *((_DWORD *)state_address_4 - 319490);
      *(float *)&dword_140404A6C[float_word_10 + 177249487] = scaled_ratio + *(float *)&dword_140404A6C[float_word_10 + 177249487];
      *(float *)&dword_140404A6C[float_word_10 + 177249488] = scaled_ratio_2 + *(float *)&dword_140404A6C[float_word_10 + 177249488];
      *(float *)&dword_140404A6C[float_word_10 + 177249489] = scaled_ratio_3 + *(float *)&dword_140404A6C[float_word_10 + 177249489];
      *(float *)&float_word_10 = *(state_address_4 - 319489);
      state_address_4 += 3;
      scaled_index_2 = 3 * (int)float_word_10;
      *(float *)&dword_140404A6C[scaled_index_2 + 177249487] = scaled_ratio + *(float *)&dword_140404A6C[scaled_index_2 + 177249487];
      *(float *)&dword_140404A6C[scaled_index_2 + 177249488] = scaled_ratio_2 + *(float *)&dword_140404A6C[scaled_index_2 + 177249488];
      *(float *)&dword_140404A6C[scaled_index_2 + 177249489] = scaled_ratio_3 + *(float *)&dword_140404A6C[scaled_index_2 + 177249489];
    }
    while ( iteration_count_4 < (int)mesh_triangle_count );
    cached_mesh_vertex_count_7 = mesh_vertex_count;
  }
  if ( cached_mesh_vertex_count_7 > 0 )
  {
    do
    {
      product_difference_5 = *(state_address_2 - 1);
      unused_written_slot = state_address_2;
      product_difference_6 = *(state_address_2 - 2);
      scaled_value_2 = *state_address_2;
      square_root_2 = fsqrt((float)((float)(product_difference_6 * product_difference_6) + (float)(product_difference_5 * product_difference_5)) + (float)(scaled_value_2 * scaled_value_2));
      if ( square_root_2 == 0.0 )
      {
        scaled_ratio_4 = 0.0;
        scaled_ratio_5 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio_4 = scaled_value_2 * (float)(1.0 / square_root_2);
        scaled_ratio_5 = product_difference_5 * (float)(1.0 / square_root_2);
        scaled_ratio_6 = (float)(1.0 / square_root_2) * product_difference_6;
      }
      *(state_address_2 - 2) = scaled_ratio_6;
      ++iteration_count;
      *(state_address_2 - 1) = scaled_ratio_5;
      state_address_2 += 3;
      *unused_written_slot = scaled_ratio_4;
    }
    while ( iteration_count < (int)mesh_vertex_count );
  }
  return sub_1401449C0(a1, 0);
}

//----- (000000014004FDB0) ----------------------------------------------------
void            sub_14004FDB0(int a1)
{
  int iteration_count;
  int cached_mesh_triangle_count;
  int iteration_count_2;
  unsigned int *state_address;
  int cached_mesh_triangle_count_2;
  unsigned int *state_address_2;
  unsigned int cached_mesh_triangle_count_3;
  unsigned int *state_address_3;
  unsigned int *record_byte_offset;
  unsigned int *record_byte_offset_2;
  unsigned int *record_byte_offset_3;
  _DWORD sr_layer_position[3];
  _DWORD sr_layer_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004FDB0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 0)) /* [rsp+0h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 88)) /* [rsp+58h] */

  iteration_count = 0;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  (*(__int64 *)sr_layer_position) = 0;
  sr_layer_position[2] = 0;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1040187392), 0.03125);
  cached_mesh_triangle_count = mesh_triangle_count;
  iteration_count_2 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(state_address - 1) = 998244352;
      ++iteration_count_2;
      *state_address = 998244352;
      state_address[1] = 998244352;
      state_address[2] = 998244352;
      state_address[3] = 998244352;
      state_address[4] = 998244352;
      state_address += 6;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_2 < (int)mesh_triangle_count );
  }
  sr_layer_position[2] = 1025507328;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  cached_mesh_triangle_count_2 = mesh_triangle_count;
  if ( cached_mesh_triangle_count < (int)mesh_triangle_count )
  {
    state_address_2 = &dword_140404A6C[6 * cached_mesh_triangle_count + 178011346];
    do
    {
      *(state_address_2 - 1) = 1010827264;
      ++cached_mesh_triangle_count;
      *state_address_2 = 998244352;
      state_address_2[1] = 1010827264;
      state_address_2[2] = 998244352;
      state_address_2[3] = 1010827264;
      state_address_2[4] = 998244352;
      state_address_2 += 6;
      cached_mesh_triangle_count_2 = mesh_triangle_count;
    }
    while ( cached_mesh_triangle_count < (int)mesh_triangle_count );
  }
  sr_layer_position[2] = -1121976320;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  cached_mesh_triangle_count_3 = mesh_triangle_count;
  if ( cached_mesh_triangle_count_2 < (int)mesh_triangle_count )
  {
    state_address_3 = &dword_140404A6C[6 * cached_mesh_triangle_count_2 + 178011346];
    do
    {
      *(state_address_3 - 1) = 1010827264;
      ++cached_mesh_triangle_count_2;
      *state_address_3 = 998244352;
      state_address_3[1] = 1010827264;
      state_address_3[2] = 998244352;
      state_address_3[3] = 1010827264;
      state_address_3[4] = 998244352;
      state_address_3 += 6;
      cached_mesh_triangle_count_3 = mesh_triangle_count;
    }
    while ( cached_mesh_triangle_count_2 < (int)mesh_triangle_count );
  }
  if ( (int)g_16AC43DB0 > 0 )
  {
    record_byte_offset = &g_16AC43DB4;
    record_byte_offset_2 = &g_16AC83DC0;
    record_byte_offset_3 = &g_16AC83DC8;
    do
    {
      dword_140404A6C[3 * cached_mesh_triangle_count_3 + 177495248] = *record_byte_offset;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset[2];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_2 - 3);
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_2 - 2);
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_2 - 1);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *record_byte_offset_2;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = record_byte_offset_2[1];
      dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = record_byte_offset_2[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = *record_byte_offset;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset[3];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_2 - 3);
      record_byte_offset += 4;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_2 - 2);
      record_byte_offset_2 += 8;
      record_byte_offset_3 += 8;
      ++iteration_count;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_3 - 9);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *(record_byte_offset_3 - 8);
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = *(record_byte_offset_3 - 7);
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = *(record_byte_offset_3 - 6);
      cached_mesh_triangle_count_3 = ++mesh_triangle_count;
    }
    while ( iteration_count < (int)g_16AC43DB0 );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_88

//----- (0000000140050280) ----------------------------------------------------
double            sub_140050280(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  float component_delta;
  int cached_mesh_triangle_count;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *state_address_2;
  unsigned int state_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140050280[16];
#define float_word (*(__int64 (*))(void *)(sr_frame_140050280 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140050280 + 8)) /* [rsp+28h] */

  iteration_count = 0;
  component_delta = a4;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  float_word = 0;
  if ( a4 <= 0.0 )
  {
    component_delta = -a4;
    unused_written_slot = a4;
  }
  else
  {
    unused_written_slot = 0.0;
  }
  sub_140002D00((float *)&float_word, a2, a3, component_delta);
  cached_mesh_triangle_count = mesh_triangle_count;
  state_address = &g_16AB13DB4;
  iteration_count_2 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address_2 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address_2 - 1) = 0;
      ++iteration_count_2;
      *(_QWORD *)(state_address_2 + 1) = 0;
      *(_QWORD *)(state_address_2 + 3) = 0;
      state_address_2 += 6;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_2 < (int)mesh_triangle_count );
  }
  if ( a1 != g_183EBB734 )
  {
    state_word = g_183EBB75C;
    if ( a1 == g_183EBB758 || a1 == g_183EBB75C )
    {
      if ( cached_mesh_triangle_count > 0 )
      {
        do
        {
          *(state_address - 1) = 1035993088;
          *state_address = 1063780352;
          state_address[1] = 1035993088;
          state_address[2] = 1063780352;
          state_address[3] = 1035993088;
          state_address[4] = 1063780352;
          if ( a1 == state_word )
          {
            *state_address = 1064828928;
            state_address[2] = 1064828928;
            state_address[4] = 1064828928;
          }
          ++iteration_count;
          state_address += 6;
        }
        while ( iteration_count < (int)mesh_triangle_count );
      }
    }
    else if ( a1 == g_183EBB760 )
    {
      unused_written_slot = 0.015625;
      sub_140002D00((float *)&float_word, a2 * 0.875, a3 * 0.875, component_delta);
      g_16AB13F00 = xmmword_1402796F0;
      g_16AB13F20 = xmmword_140278D30;
      g_16AB13F10 = xmmword_1402794A0;
    }
    else
    {
      g_16AB13E40 = xmmword_140279550;
      g_16AB13E50 = xmmword_1402796F0;
      g_16AB13E60 = xmmword_1402796F0;
      g_16AB13EB0 = xmmword_1402794A0;
      g_16AB13EA0 = xmmword_1402796F0;
      g_16AB13DB0 = xmmword_140278E20;
      g_16AB13EC0 = xmmword_140278D30;
      g_16AB13DD0 = xmmword_140279550;
      g_16AB13DC0 = xmmword_140278D90;
    }
  }
  return sub_1401449C0(a1, 0);
}
#undef float_word
#undef unused_written_slot

//----- (00000001400504C0) ----------------------------------------------------
double            sub_1400504C0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  unsigned int *record_byte_offset;
  unsigned int integer_sum;
  unsigned int table_value;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
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
  unsigned int cached_mesh_triangle_count;
  unsigned int *record_byte_offset_2;
  unsigned int *record_byte_offset_3;
  unsigned int *record_byte_offset_4;
  _DWORD sr_extrude_position[3];

  iteration_count = 0;
  g_16A7DBDC8 = a4;
  g_16A7DBDB4 = a2;
  record_byte_offset = (unsigned int *)dword_1402B3664;
  g_16A7DBDA8 = -a2;
  mesh_triangle_count = 0;
  g_16A7DBDC0 = a2;
  g_16A7DBDAC = a3 * -0.75;
  g_16A7DBDB8 = a3 * -0.75;
  integer_sum = 0;
  g_16A7DBDC4 = a3 * -0.75;
  g_16A7DBDD0 = a3 * -0.75;
  g_16A7DBDB0 = -a4;
  g_16A7DBDBC = -a4;
  g_16A7DBDCC = -a2;
  g_16A7DBDD4 = a4;
  g_16A7DBDD8 = -a2;
  g_16A7DBDDC = a3;
  g_16A7DBDE0 = -a4;
  g_16A7DBDE4 = a2;
  g_16A7DBDE8 = a3;
  g_16A7DBDEC = -a4;
  g_16A7DBDF0 = a2;
  g_16A7DBDF4 = a3;
  g_16A7DBDF8 = a4;
  g_16A7DBDFC = -a2;
  g_16A7DBE00 = a3;
  g_16A7DBE04 = a4;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  mesh_vertex_count = 8;
  do
  {
    dword_140404A6C[4 * integer_sum + 178322642] = *(record_byte_offset - 1);
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = *record_byte_offset;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = record_byte_offset[1];
    table_value = record_byte_offset[2];
    record_byte_offset += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = table_value;
    scaled_index = 8LL * (int)g_16AC43DB0;
    *(_OWORD *)&dword_140404A6C[scaled_index + 178388178] = 0;
    *(_OWORD *)&dword_140404A6C[scaled_index + 178388182] = 0;
    integer_sum = ++g_16AC43DB0;
  }
  while ( (__int64)record_byte_offset < (__int64)&dword_1402B36C4 );
  sr_extrude_position[0] = 0;
  sr_extrude_position[2] = 0;
  (*(float *)&sr_extrude_position[1]) = a3 * -0.25;
  sub_140101220(0, (float *)&sr_extrude_position[0]);
  sr_extrude_position[2] = -1124073472;
  *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167564] = *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167564]
                                                                         - (float)(a2 * 0.5);
  *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167555] = *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167555]
                                                                         - (float)(a2 * 0.5);
  scaled_index_2 = 8LL * (g_16AC43DB0 - 5);
  *(_OWORD *)&dword_140404A6C[scaled_index_2 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_2 + 178388182] = 0;
  scaled_index_3 = 8LL * (g_16AC43DB0 - 4);
  *(_OWORD *)&dword_140404A6C[scaled_index_3 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_3 + 178388182] = 0;
  scaled_index_4 = 8LL * (g_16AC43DB0 - 3);
  *(_OWORD *)&dword_140404A6C[scaled_index_4 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_4 + 178388182] = 0;
  scaled_index_5 = 8LL * (g_16AC43DB0 - 2);
  *(_OWORD *)&dword_140404A6C[scaled_index_5 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_5 + 178388182] = 0;
  scaled_index_6 = 8LL * (g_16AC43DB0 - 1);
  *(_OWORD *)&dword_140404A6C[scaled_index_6 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_6 + 178388182] = 0;
  (*(float *)&sr_extrude_position[1]) = 0.125;
  sub_140002D00((float *)&sr_extrude_position[0], 0.015625, 0.25, 0.015625);
  scaled_index_7 = 6 * (mesh_triangle_count - 12);
  *(_QWORD *)&dword_140404A6C[scaled_index_7 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_7 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_7 + 178011349] = 1065353216;
  scaled_index_8 = 6 * (mesh_triangle_count - 11);
  *(_QWORD *)&dword_140404A6C[scaled_index_8 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_8 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_8 + 178011349] = 1065353216;
  scaled_index_9 = 6 * (mesh_triangle_count - 10);
  *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011349] = 1065353216;
  scaled_index_10 = 6 * (mesh_triangle_count - 9);
  *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011349] = 1065353216;
  scaled_index_11 = 6 * (mesh_triangle_count - 8);
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011349] = 1065353216;
  scaled_index_12 = 6 * (mesh_triangle_count - 7);
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011349] = 1065353216;
  scaled_index_13 = 6 * (mesh_triangle_count - 6);
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011349] = 1065353216;
  scaled_index_14 = 6 * (mesh_triangle_count - 5);
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011349] = 1065353216;
  scaled_index_15 = 6 * (mesh_triangle_count - 4);
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011349] = 1065353216;
  scaled_index_16 = 6 * (mesh_triangle_count - 3);
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011349] = 1065353216;
  scaled_index_17 = 6 * (mesh_triangle_count - 2);
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011349] = 1065353216;
  scaled_index_18 = 6 * (mesh_triangle_count - 1);
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011349] = 1065353216;
  if ( (int)g_16AC43DB0 > 0 )
  {
    cached_mesh_triangle_count = mesh_triangle_count;
    record_byte_offset_2 = &g_16AC43DB4;
    record_byte_offset_3 = &g_16AC83DC0;
    record_byte_offset_4 = &g_16AC83DC8;
    do
    {
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = *record_byte_offset_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_2[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_2[2];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_3 - 3);
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_3 - 2);
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_3 - 1);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *record_byte_offset_3;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = record_byte_offset_3[1];
      dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = record_byte_offset_3[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = *record_byte_offset_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_2[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_2[3];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_3 - 3);
      record_byte_offset_2 += 4;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_3 - 2);
      record_byte_offset_3 += 8;
      record_byte_offset_4 += 8;
      ++iteration_count;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_4 - 9);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *(record_byte_offset_4 - 8);
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = *(record_byte_offset_4 - 7);
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = *(record_byte_offset_4 - 6);
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    while ( iteration_count < (int)g_16AC43DB0 );
  }
  return sub_1401449C0(a1, 0);
}

//----- (00000001400521A0) ----------------------------------------------------
double            sub_1400521A0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  unsigned int *state_address;
  float float_buffer[6];

  float_buffer[0] = 0.0;
  float_buffer[1] = -0.03125;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  float_buffer[2] = a4 * -0.5;
  g_16AD03DB4 = 0;
  sub_140002D00(float_buffer, a2, a3, a4);
  iteration_count = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}

//----- (0000000140052240) ----------------------------------------------------
double            sub_140052240(int a1, int a2, double a3)
{
  __int64 remaining_count;
  __m128 converted_vector;
  __int64 remaining_count_2;
  float component_sum;
  __int64 record_word_offset;
  unsigned int integer_sum;
  __int64 table_value;
  __int64 scaled_index;
  float weighted_sum;
  __m128d converted_vector_2;
  __m128 vector_result;
  double saved_weighted_sum;
  unsigned int reordered_vector;
  unsigned int float_word;
  __m128d converted_vector_3;
  unsigned int cached_mesh_vertex_count;
  __int64 unrecovered_register_value;
  __m128 vector_result_2;
  unsigned int reordered_vector_2;
  unsigned int float_word_2;
  __m128d converted_vector_4;
  unsigned int cached_mesh_vertex_count_2;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_3;
  unsigned int reordered_vector_3;
  unsigned int float_word_3;
  __m128d converted_vector_5;
  unsigned int cached_mesh_vertex_count_3;
  __int64 unrecovered_register_value_3;
  __m128 vector_result_4;
  unsigned int float_word_4;
  unsigned int table_value_2;
  __m128 vector_result_5;
  unsigned int reordered_vector_4;
  unsigned int float_word_5;
  double component_sum_2;
  unsigned int cached_mesh_vertex_count_4;
  __int64 unrecovered_register_value_4;
  __m128 vector_result_6;
  unsigned int reordered_vector_5;
  unsigned int float_word_6;
  double component_sum_3;
  unsigned int cached_mesh_vertex_count_5;
  __int64 unrecovered_register_value_5;
  __m128 vector_result_7;
  unsigned int reordered_vector_6;
  unsigned int float_word_7;
  double component_sum_4;
  unsigned int cached_mesh_vertex_count_6;
  __int64 unrecovered_register_value_6;
  __m128 vector_result_8;
  unsigned int float_word_8;
  float weighted_sum_2;
  int record_byte_offset;
  unsigned int cached_mesh_triangle_count;
  int masked_bits;
  int masked_bits_2;
  unsigned int integer_sum_2;
  unsigned int integer_sum_3;
  int masked_bits_3;
  unsigned int integer_sum_4;
  int masked_bits_4;
  unsigned int integer_sum_5;
  float weighted_sum_3;
  float scaled_value;
  float weighted_sum_4;
  float component_delta;
  float component_sum_5;
  float weighted_sum_5;
  int iteration_count;
  unsigned int *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140052240[16];
#define float_word_9 (*(int (*))(void *)(sr_frame_140052240 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140052240 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140052240 + 8)) /* [rsp+28h] */

  remaining_count = 4;
  converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  remaining_count_2 = 4;
  component_sum = 0.0;
  record_word_offset = 1268LL * a2;
  integer_sum = 0;
  mesh_triangle_count = 0;
  mesh_vertex_count = 0;
  g_16AC43DB0 = 0;
  table_value = (int)dword_140404A6C[record_word_offset + 278521292];
  g_16AD03DB4 = 0;
  scaled_index = 3 * table_value;
  weighted_sum = *(float *)&dword_140404A6C[6 * table_value + 437914199] + 0.0049999999;
  do
  {
    converted_vector_2 = _mm_cvtps_pd(converted_vector);
    vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], scaled_index, a3));
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 0.39269908169875;
    saved_weighted_sum = weighted_sum;
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * weighted_sum;
    dword_140404A6C[3 * integer_sum + 177167567] = reordered_vector;
    *(float *)&float_word = -(*(double *)SR_VEC_LANES(128, vector_result, u64) * weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word;
    converted_vector_3 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_2));
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = 0;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count = mesh_vertex_count;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_3, f64)[0], unrecovered_register_value, COERCE_DOUBLE((unsigned __int64)reordered_vector)));
    *(float *)&reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count + 177167567] = reordered_vector_2;
    *(float *)&float_word_2 = -(*(double *)SR_VEC_LANES(128, vector_result_2, u64) * weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_2;
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = 0;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_2;
    SR_VEC_LANES(128, converted_vector_3, f64)[0] = SR_VEC_LANES(128, converted_vector_3, f64)[0] + 0.39269908169875;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_2;
    converted_vector_4 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_3));
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_2 = mesh_vertex_count;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], unrecovered_register_value_2, COERCE_DOUBLE((unsigned __int64)reordered_vector_2)));
    SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 0.39269908169875;
    *(float *)&reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_2 + 177167567] = reordered_vector_3;
    *(float *)&float_word_3 = -(*(double *)SR_VEC_LANES(128, vector_result_3, u64) * weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_3;
    converted_vector_5 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_4));
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = 0;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_3;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_3;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_3 = mesh_vertex_count;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_5, f64)[0], unrecovered_register_value_3, COERCE_DOUBLE((unsigned __int64)reordered_vector_3)));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_3 + 177167567] = LODWORD(a3);
    SR_VEC_LANES(128, converted_vector_5, f64)[0] = SR_VEC_LANES(128, converted_vector_5, f64)[0] + 0.39269908169875;
    *(float *)&float_word_4 = -(*(double *)SR_VEC_LANES(128, vector_result_4, u64) * weighted_sum);
    converted_vector = _mm_cvtpd_ps(converted_vector_5);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_4;
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = 0;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_4;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    integer_sum = ++mesh_vertex_count;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  table_value_2 = dword_140404A6C[record_word_offset + 278521315];
  do
  {
    vector_result_5 = _mm_castpd_ps(sub_1401F8A50(component_sum, scaled_index, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
    *(float *)&reordered_vector_4 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_5, (__m128d)vector_result_5, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * integer_sum + 177167567] = reordered_vector_4;
    *(float *)&float_word_5 = -(*(double *)SR_VEC_LANES(128, vector_result_5, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_5;
    component_sum_2 = (float)(component_sum + 0.39269908169875);
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = table_value_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_4;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_5;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_4 = mesh_vertex_count;
    vector_result_6 = _mm_castpd_ps(sub_1401F8A50(component_sum_2, unrecovered_register_value_4, COERCE_DOUBLE((unsigned __int64)reordered_vector_4)));
    *(float *)&reordered_vector_5 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_6, (__m128d)vector_result_6, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_4 + 177167567] = reordered_vector_5;
    *(float *)&float_word_6 = -(*(double *)SR_VEC_LANES(128, vector_result_6, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_6;
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = table_value_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_5;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_6;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    component_sum_3 = (float)(component_sum_2 + 0.39269908169875);
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_5 = mesh_vertex_count;
    vector_result_7 = _mm_castpd_ps(sub_1401F8A50(component_sum_3, unrecovered_register_value_5, COERCE_DOUBLE((unsigned __int64)reordered_vector_5)));
    *(float *)&reordered_vector_6 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_7, (__m128d)vector_result_7, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_5 + 177167567] = reordered_vector_6;
    *(float *)&float_word_7 = -(*(double *)SR_VEC_LANES(128, vector_result_7, u64) * saved_weighted_sum);
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_7;
    component_sum_4 = (float)(component_sum_3 + 0.39269908169875);
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = table_value_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = reordered_vector_6;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_7;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
    cached_mesh_vertex_count_6 = mesh_vertex_count;
    vector_result_8 = _mm_castpd_ps(sub_1401F8A50(component_sum_4, unrecovered_register_value_6, COERCE_DOUBLE((unsigned __int64)reordered_vector_6)));
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_8, (__m128d)vector_result_8, 1), f64)[0] * saved_weighted_sum;
    dword_140404A6C[3 * cached_mesh_vertex_count_6 + 177167567] = LODWORD(a3);
    *(float *)&float_word_8 = -(*(double *)SR_VEC_LANES(128, vector_result_8, u64) * saved_weighted_sum);
    component_sum = component_sum_4 + 0.39269908169875;
    dword_140404A6C[3 * mesh_vertex_count + 177167568] = float_word_8;
    dword_140404A6C[3 * mesh_vertex_count + 177167569] = table_value_2;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = float_word_8;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
    integer_sum = ++mesh_vertex_count;
    --remaining_count;
  }
  while ( remaining_count );
  weighted_sum_2 = *(float *)&dword_140404A6C[record_word_offset + 278521347];
  record_byte_offset = 1;
  dword_140404A6C[3 * integer_sum + 177167567] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167568] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167569] = 0;
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167567] = 0;
  dword_140404A6C[3 * mesh_vertex_count + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * mesh_vertex_count + 177167569] = weighted_sum_2 * -0.125;
  dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
  dword_140404A6C[2 * mesh_vertex_count++ + 177216720] = 0;
  cached_mesh_triangle_count = mesh_triangle_count;
  do
  {
    masked_bits = record_byte_offset & 0xF;
    dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 15;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 32;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 15;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 33;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    masked_bits_2 = ((_BYTE)record_byte_offset + 1) & 0xF;
    integer_sum_2 = masked_bits_2 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 16;
    integer_sum_3 = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_2;
    masked_bits_3 = ((_BYTE)record_byte_offset + 2) & 0xF;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 32;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_2;
    integer_sum_4 = masked_bits_3 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 33;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 17;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_3;
    masked_bits_4 = ((_BYTE)record_byte_offset + 3) & 0xF;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 32;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 17;
    integer_sum_5 = record_byte_offset + 18;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 33;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset + 18;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4 + 16;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = record_byte_offset + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    ++mesh_triangle_count;
    record_byte_offset += 4;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = integer_sum_3;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 32;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits_4 + 16;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_5;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = 33;
    dword_140404A6C[mesh_triangle_count + 178207953] = 2;
    cached_mesh_triangle_count = ++mesh_triangle_count;
  }
  while ( record_byte_offset <= 16 );
  weighted_sum_3 = *(float *)&dword_140404A6C[record_word_offset + 278521348] * 0.5;
  float_word_9 = 0;
  scaled_value = weighted_sum_2 * 0.5;
  weighted_sum_4 = *(float *)&dword_140404A6C[record_word_offset + 278521346];
  unused_written_slot = -1132462080;
  component_delta = weighted_sum_3 - scaled_value;
  component_sum_5 = scaled_value + weighted_sum_3;
  weighted_sum_5 = *(float *)&dword_140404A6C[record_word_offset + 278521349];
  unused_written_slot_2 = component_delta;
  sub_140002D00((float *)&float_word_9, weighted_sum_4, weighted_sum_5, component_sum_5);
  unused_written_slot = -1107296256;
  unused_written_slot_2 = 0.0;
  sub_140002D00((float *)&float_word_9, 0.03125, 0.125, 0.03125);
  iteration_count = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}
#undef float_word_9
#undef unused_written_slot
#undef unused_written_slot_2

//----- (0000000140054750) ----------------------------------------------------
__int64            sub_140054750(int a1, double a2, float a3, float a4)
{
  __int64 unrecovered_register_value;
  int iteration_count;
  float input_value;
  double reordered_vector;
  int running_total;
  unsigned int integer_sum;
  int iteration_count_2;
  __int64 input_value_2;
  float scaled_value;
  __m128 converted_vector;
  double saved_scaled_value;
  __int64 remaining_count;
  __m128d converted_vector_2;
  __int64 unrecovered_register_value_2;
  __m128 vector_result;
  double reordered_vector_2;
  float product_difference;
  float component_delta;
  float product_difference_2;
  int scaled_index;
  unsigned int integer_sum_2;
  __m128d converted_vector_3;
  __int64 unrecovered_register_value_3;
  __m128 vector_result_2;
  double reordered_vector_3;
  float product_difference_3;
  float component_delta_2;
  float product_difference_4;
  int scaled_index_2;
  unsigned int integer_sum_3;
  __m128d converted_vector_4;
  __m128 vector_result_3;
  float product_difference_5;
  float component_delta_3;
  float product_difference_6;
  __int64 scaled_index_3;
  unsigned int state_word;
  int running_total_2;
  unsigned int integer_difference;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  unsigned int integer_difference_4;
  unsigned int integer_sum_4;
  int running_total_3;
  unsigned int state_word_2;
  unsigned int integer_sum_5;
  unsigned int integer_difference_5;
  unsigned int integer_sum_6;
  __int64 scaled_index_4;
  __int64 allocation_size;
  __int64 allocated_buffer;
  int cached_mesh_vertex_count;
  int iteration_count_3;
  unsigned int *state_address;
  __int64 scaled_index_5;
  __int64 masked_bits;
  __int64 allocated_buffer_2;
  int iteration_count_4;
  bool comparison_result;
  __int64 record_byte_offset;
  __int64 state_word_3;
  __int64 allocated_buffer_3;
  int iteration_count_5;
  unsigned int *state_address_2;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 state_word_4;
  __int64 result;
  unsigned int *state_address_3;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  unsigned int comparison_operand;

  comparison_operand = LODWORD(a2);
  iteration_count = 0;
  input_value = a3;
  reordered_vector = a2;
  running_total = 2;
  integer_sum = 0;
  iteration_count_2 = 0;
  input_value_2 = a1;
  mesh_vertex_count = 0;
  g_16A94BDAC = 0;
  mesh_triangle_count = 0;
  g_16AD03DB4 = 0;
  do
  {
    if ( (unsigned int)iteration_count_2 >= 2 )
      scaled_value = input_value;
    else
      scaled_value = *(float *)&reordered_vector;
    if ( (_DWORD)input_value_2 == 45 )
    {
      if ( !iteration_count_2 || iteration_count_2 == 3 )
        scaled_value = input_value;
      else
        scaled_value = *(float *)&reordered_vector;
    }
    converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    saved_scaled_value = scaled_value;
    remaining_count = 2;
    do
    {
      converted_vector_2 = _mm_cvtps_pd(converted_vector);
      vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], unrecovered_register_value, reordered_vector));
      HIDWORD(reordered_vector_2) = 0;
      *(float *)&reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * saved_scaled_value;
      product_difference = -(*(double *)SR_VEC_LANES(128, vector_result, u64) * saved_scaled_value);
      if ( iteration_count_2 )
      {
        if ( iteration_count_2 == 1 )
        {
          component_delta = 0.3125;
        }
        else if ( iteration_count_2 == 2 )
        {
          component_delta = 0.375;
        }
        else
        {
          component_delta = 0.5;
        }
      }
      else
      {
        component_delta = -0.5;
      }
      product_difference_2 = component_delta * a4;
      if ( (_DWORD)input_value_2 == 45 )
      {
        if ( iteration_count_2 )
        {
          if ( iteration_count_2 == 1 )
          {
            product_difference_2 = a4 * -0.375;
          }
          else if ( iteration_count_2 == 2 )
          {
            product_difference_2 = a4 * 0.375;
          }
          else
          {
            product_difference_2 = a4 * 0.5;
          }
        }
        else
        {
          product_difference_2 = a4 * -0.5;
        }
      }
      scaled_index = 3 * integer_sum;
      SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[scaled_index + 177167568] = product_difference_2;
      *(float *)&dword_140404A6C[scaled_index + 177167569] = product_difference;
      dword_140404A6C[scaled_index + 177167567] = LODWORD(reordered_vector_2);
      integer_sum_2 = ++mesh_vertex_count;
      converted_vector_3 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_2));
      vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_3, f64)[0], unrecovered_register_value_2, reordered_vector_2));
      HIDWORD(reordered_vector_3) = 0;
      *(float *)&reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * saved_scaled_value;
      product_difference_3 = -(*(double *)SR_VEC_LANES(128, vector_result_2, u64) * saved_scaled_value);
      if ( iteration_count_2 )
      {
        if ( iteration_count_2 == 1 )
        {
          component_delta_2 = 0.3125;
        }
        else if ( iteration_count_2 == 2 )
        {
          component_delta_2 = 0.375;
        }
        else
        {
          component_delta_2 = 0.5;
        }
      }
      else
      {
        component_delta_2 = -0.5;
      }
      product_difference_4 = component_delta_2 * a4;
      if ( (_DWORD)input_value_2 == 45 )
      {
        if ( iteration_count_2 )
        {
          if ( iteration_count_2 == 1 )
          {
            product_difference_4 = a4 * -0.375;
          }
          else if ( iteration_count_2 == 2 )
          {
            product_difference_4 = a4 * 0.375;
          }
          else
          {
            product_difference_4 = a4 * 0.5;
          }
        }
        else
        {
          product_difference_4 = a4 * -0.5;
        }
      }
      scaled_index_2 = 3 * integer_sum_2;
      SR_VEC_LANES(128, converted_vector_3, f64)[0] = SR_VEC_LANES(128, converted_vector_3, f64)[0] + 1.047197551196667;
      dword_140404A6C[scaled_index_2 + 177167567] = LODWORD(reordered_vector_3);
      *(float *)&dword_140404A6C[scaled_index_2 + 177167568] = product_difference_4;
      *(float *)&dword_140404A6C[scaled_index_2 + 177167569] = product_difference_3;
      integer_sum_3 = ++mesh_vertex_count;
      converted_vector_4 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_3));
      vector_result_3 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], unrecovered_register_value_3, reordered_vector_3));
      HIDWORD(reordered_vector) = 0;
      *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
      product_difference_5 = -(*(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value);
      if ( iteration_count_2 )
      {
        if ( iteration_count_2 == 1 )
        {
          component_delta_3 = 0.3125;
        }
        else if ( iteration_count_2 == 2 )
        {
          component_delta_3 = 0.375;
        }
        else
        {
          component_delta_3 = 0.5;
        }
      }
      else
      {
        component_delta_3 = -0.5;
      }
      product_difference_6 = component_delta_3 * a4;
      if ( (_DWORD)input_value_2 == 45 )
      {
        if ( iteration_count_2 )
        {
          if ( iteration_count_2 == 1 )
          {
            product_difference_6 = a4 * -0.375;
          }
          else if ( iteration_count_2 == 2 )
          {
            product_difference_6 = a4 * 0.375;
          }
          else
          {
            product_difference_6 = a4 * 0.5;
          }
        }
        else
        {
          product_difference_6 = a4 * -0.5;
        }
      }
      scaled_index_3 = (int)(3 * integer_sum_3);
      SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 1.047197551196667;
      dword_140404A6C[scaled_index_3 + 177167567] = LODWORD(reordered_vector);
      *(float *)&dword_140404A6C[scaled_index_3 + 177167568] = product_difference_6;
      *(float *)&dword_140404A6C[scaled_index_3 + 177167569] = product_difference_5;
      integer_sum = ++mesh_vertex_count;
      converted_vector = _mm_cvtpd_ps(converted_vector_4);
      --remaining_count;
    }
    while ( remaining_count );
    input_value = a3;
    ++iteration_count_2;
    *(_QWORD *)&reordered_vector = comparison_operand;
  }
  while ( iteration_count_2 < 4 );
  state_word = g_16A94BDAC;
  running_total_2 = 8;
  do
  {
    integer_difference = running_total_2 - 2;
    dword_140404A6C[5 * state_word + 177544401] = 4;
    integer_difference_2 = running_total_2 - 8;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total_2 - 2;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total_2 - 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total_2 - 7;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total_2 - 8;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total_2 - 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total_2;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total_2 - 6;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total_2 - 7;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total_2;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total_2 + 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total_2 - 5;
    dword_140404A6C[5 * g_16A94BDAC + 177544405] = running_total_2 - 6;
    integer_difference_3 = running_total_2 - 4;
    ++g_16A94BDAC;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total_2 + 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total_2 + 2;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total_2 - 4;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total_2 - 5;
    integer_difference_4 = running_total_2 - 3;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total_2 + 2;
    integer_sum_4 = running_total_2 + 3;
    running_total_2 += 6;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = integer_sum_4;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = integer_difference_4;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = integer_difference_3;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = integer_sum_4;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = integer_difference;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = integer_difference_2;
    dword_140404A6C[5 * g_16A94BDAC + 177544405] = integer_difference_4;
    state_word = ++g_16A94BDAC;
  }
  while ( running_total_2 < 26 );
  running_total_3 = 6;
  dword_140404A6C[5 * state_word + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 5;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 0;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 1;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 1;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 2;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 3;
  dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 18;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 23;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 22;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 19;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 19;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 22;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 21;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 20;
  state_word_2 = g_16AD03DB4;
  do
  {
    dword_140404A6C[2 * state_word_2 + 178519251] = running_total_3 - 6;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total_3;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total_3 - 5;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total_3 + 1;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total_3 - 4;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total_3 + 2;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total_3 - 3;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total_3 + 3;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total_3 - 2;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total_3 + 4;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total_3 - 1;
    integer_sum_5 = running_total_3 + 5;
    running_total_3 += 6;
    dword_140404A6C[2 * g_16AD03DB4 + 178519252] = integer_sum_5;
    state_word_2 = ++g_16AD03DB4;
  }
  while ( running_total_3 < 24 );
  do
  {
    integer_difference_5 = running_total - 2;
    dword_140404A6C[2 * state_word_2 + 178519251] = running_total - 2;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total - 1;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total - 1;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total + 1;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total + 1;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = running_total + 2;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = running_total + 2;
    integer_sum_6 = running_total + 3;
    running_total += 6;
    dword_140404A6C[2 * g_16AD03DB4++ + 178519252] = integer_sum_6;
    dword_140404A6C[2 * g_16AD03DB4 + 178519251] = integer_sum_6;
    dword_140404A6C[2 * g_16AD03DB4 + 178519252] = integer_difference_5;
    state_word_2 = ++g_16AD03DB4;
  }
  while ( running_total < 26 );
  scaled_index_4 = 1268 * input_value_2;
  allocation_size = 12 * mesh_vertex_count;
  dword_140404A6C[1268 * input_value_2 + 278522247] = 0;
  allocated_buffer = sr_path_malloc(allocation_size);
  cached_mesh_vertex_count = mesh_vertex_count;
  iteration_count_3 = 0;
  *(_QWORD *)&dword_140404A6C[1268 * input_value_2 + 278522249] = allocated_buffer;
  if ( cached_mesh_vertex_count > 0 )
  {
    state_address = (unsigned int *)&g_16A7DBDB0;
    do
    {
      state_address += 3;
      ++iteration_count_3;
      scaled_index_5 = (int)(3 * dword_140404A6C[scaled_index_4 + 278522247]);
      masked_bits = *(_QWORD *)&dword_140404A6C[scaled_index_4 + 278522249];
      *(_DWORD *)(masked_bits + 4 * scaled_index_5) = *(state_address - 5);
      *(_DWORD *)(masked_bits + 4 * scaled_index_5 + 4) = *(state_address - 4);
      *(_DWORD *)(masked_bits + 4 * scaled_index_5 + 8) = *(state_address - 3);
      ++dword_140404A6C[scaled_index_4 + 278522247];
      cached_mesh_vertex_count = mesh_vertex_count;
    }
    while ( iteration_count_3 < (int)mesh_vertex_count );
  }
  dword_140404A6C[scaled_index_4 + 278522251] = 0;
  *(_QWORD *)&dword_140404A6C[scaled_index_4 + 278522253] = 0;
  dword_140404A6C[scaled_index_4 + 278522255] = 0;
  dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522256 + scaled_index_4] = cached_mesh_vertex_count;
  allocated_buffer_2 = sr_path_malloc(4 * cached_mesh_vertex_count);
  iteration_count_4 = 0;
  comparison_result = (signed int)mesh_vertex_count <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522257 + scaled_index_4] = allocated_buffer_2;
  if ( !comparison_result )
  {
    record_byte_offset = 0;
    do
    {
      record_byte_offset += 4;
      *(_DWORD *)(record_byte_offset + *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522257 + scaled_index_4] - 4) = iteration_count_4++;
    }
    while ( iteration_count_4 < (int)mesh_vertex_count );
  }
  state_word_3 = (int)g_16A94BDAC;
  dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522259 + scaled_index_4] = 0;
  allocated_buffer_3 = sr_path_malloc(36 * state_word_3);
  iteration_count_5 = 0;
  comparison_result = (signed int)g_16A94BDAC <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522261 + scaled_index_4] = allocated_buffer_3;
  if ( !comparison_result )
  {
    state_address_2 = &g_16A94BDB8;
    do
    {
      state_address_2 += 5;
      ++iteration_count_5;
      scaled_index_6 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_6)
                + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_6)
                + 8) = *(state_address_2 - 6);
      scaled_index_7 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_7)
                + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_7)
                + 12) = *(state_address_2 - 5);
      scaled_index_8 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_8)
                + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_8)
                + 16) = *(state_address_2 - 4);
      scaled_index_9 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_9)
                + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_9)
                + 20) = *(state_address_2 - 3);
      scaled_index_10 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0C0 + scaled_index_10)
                + 36LL * *(int *)((char *)&g_182A7F0B8 + scaled_index_10)
                + 4) = 4;
      scaled_index_11 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      ++*(unsigned int *)((char *)&g_182A7F0B8 + scaled_index_11);
    }
    while ( iteration_count_5 < (int)g_16A94BDAC );
  }
  state_word_4 = (int)g_16AD03DB4;
  dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522263 + scaled_index_4] = 0;
  result = sr_path_malloc(12 * state_word_4);
  comparison_result = (signed int)g_16AD03DB4 <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[scaled_index_4 + 278522251] + 278522265 + scaled_index_4] = result;
  if ( !comparison_result )
  {
    state_address_3 = &g_16AD03DBC;
    do
    {
      state_address_3 += 2;
      ++iteration_count;
      scaled_index_12 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_12)
                + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_12)) = *(state_address_3 - 3);
      scaled_index_13 = scaled_index_4 * 4 + 56LL * (int)dword_140404A6C[scaled_index_4 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&g_182A7F0D0 + scaled_index_13)
                + 12LL * *(int *)((char *)&g_182A7F0C8 + scaled_index_13)
                + 4) = *(state_address_3 - 2);
      result = (int)dword_140404A6C[scaled_index_4 + 278522251];
      ++dword_140404A6C[14 * result + 278522263 + scaled_index_4];
    }
    while ( iteration_count < (int)g_16AD03DB4 );
  }
  ++dword_140404A6C[scaled_index_4 + 278522251];
  return result;
}

//----- (00000001400555C0) ----------------------------------------------------
double            sub_1400555C0(int a1, __int64 a2, double a3, float a4, float a5)
{
  float input_value;
  int input_value_2;
  unsigned int integer_sum;
  int iteration_count;
  float scaled_value;
  __m128 converted_vector;
  double saved_scaled_value;
  __int64 remaining_count;
  __m128d converted_vector_2;
  __int64 unrecovered_register_value;
  __m128 vector_result;
  float product_difference;
  double reordered_vector;
  float component_delta;
  float product_difference_2;
  int scaled_index;
  unsigned int integer_sum_2;
  __m128d converted_vector_3;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_2;
  float product_difference_3;
  double reordered_vector_2;
  float component_delta_2;
  float product_difference_4;
  int scaled_index_2;
  unsigned int integer_sum_3;
  __m128d converted_vector_4;
  __m128 vector_result_3;
  float product_difference_5;
  float component_delta_3;
  float product_difference_6;
  __int64 scaled_index_3;
  unsigned int state_word;
  int running_total;
  unsigned int integer_difference;
  unsigned int integer_difference_2;
  unsigned int integer_difference_3;
  unsigned int integer_difference_4;
  unsigned int integer_sum_4;
  int iteration_count_2;
  unsigned int cached_mesh_triangle_count;
  unsigned int *state_address;
  __int64 scaled_index_4;
  unsigned int loaded_word;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int comparison_operand;

  comparison_operand = LODWORD(a3);
  input_value = a4;
  input_value_2 = a2;
  integer_sum = 0;
  iteration_count = 0;
  mesh_vertex_count = 0;
  g_16A94BDAC = 0;
  mesh_triangle_count = 0;
  g_16AD03DB4 = 0;
  do
  {
    if ( (unsigned int)iteration_count >= 2 )
      scaled_value = input_value;
    else
      scaled_value = *(float *)&a3;
    if ( input_value_2 == 45 )
    {
      if ( !iteration_count || iteration_count == 3 )
        scaled_value = input_value;
      else
        scaled_value = *(float *)&a3;
    }
    converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    saved_scaled_value = scaled_value;
    remaining_count = 2;
    do
    {
      converted_vector_2 = _mm_cvtps_pd(converted_vector);
      vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], a2, a3));
      HIDWORD(reordered_vector) = 0;
      product_difference = -(*(double *)SR_VEC_LANES(128, vector_result, u64) * saved_scaled_value);
      *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * saved_scaled_value;
      if ( iteration_count )
      {
        if ( iteration_count == 1 )
        {
          component_delta = 0.3125;
        }
        else if ( iteration_count == 2 )
        {
          component_delta = 0.375;
        }
        else
        {
          component_delta = 0.5;
        }
      }
      else
      {
        component_delta = -0.5;
      }
      product_difference_2 = a5 * component_delta;
      if ( input_value_2 == 45 )
      {
        if ( iteration_count )
        {
          if ( iteration_count == 1 )
          {
            product_difference_2 = a5 * -0.375;
          }
          else if ( iteration_count == 2 )
          {
            product_difference_2 = a5 * 0.375;
          }
          else
          {
            product_difference_2 = a5 * 0.5;
          }
        }
        else
        {
          product_difference_2 = a5 * -0.5;
        }
      }
      scaled_index = 3 * integer_sum;
      SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[scaled_index + 177167568] = product_difference_2;
      dword_140404A6C[scaled_index + 177167567] = LODWORD(reordered_vector);
      *(float *)&dword_140404A6C[scaled_index + 177167569] = product_difference;
      integer_sum_2 = ++mesh_vertex_count;
      converted_vector_3 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_2));
      vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_3, f64)[0], unrecovered_register_value, reordered_vector));
      HIDWORD(reordered_vector_2) = 0;
      product_difference_3 = -(*(double *)SR_VEC_LANES(128, vector_result_2, u64) * saved_scaled_value);
      *(float *)&reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * saved_scaled_value;
      if ( iteration_count )
      {
        if ( iteration_count == 1 )
        {
          component_delta_2 = 0.3125;
        }
        else if ( iteration_count == 2 )
        {
          component_delta_2 = 0.375;
        }
        else
        {
          component_delta_2 = 0.5;
        }
      }
      else
      {
        component_delta_2 = -0.5;
      }
      product_difference_4 = a5 * component_delta_2;
      if ( input_value_2 == 45 )
      {
        if ( iteration_count )
        {
          if ( iteration_count == 1 )
          {
            product_difference_4 = a5 * -0.375;
          }
          else if ( iteration_count == 2 )
          {
            product_difference_4 = a5 * 0.375;
          }
          else
          {
            product_difference_4 = a5 * 0.5;
          }
        }
        else
        {
          product_difference_4 = a5 * -0.5;
        }
      }
      scaled_index_2 = 3 * integer_sum_2;
      SR_VEC_LANES(128, converted_vector_3, f64)[0] = SR_VEC_LANES(128, converted_vector_3, f64)[0] + 1.047197551196667;
      dword_140404A6C[scaled_index_2 + 177167567] = LODWORD(reordered_vector_2);
      *(float *)&dword_140404A6C[scaled_index_2 + 177167568] = product_difference_4;
      *(float *)&dword_140404A6C[scaled_index_2 + 177167569] = product_difference_3;
      integer_sum_3 = ++mesh_vertex_count;
      converted_vector_4 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_3));
      vector_result_3 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], unrecovered_register_value_2, reordered_vector_2));
      HIDWORD(a3) = 0;
      product_difference_5 = -(*(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value);
      *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
      if ( iteration_count )
      {
        if ( iteration_count == 1 )
        {
          component_delta_3 = 0.3125;
        }
        else if ( iteration_count == 2 )
        {
          component_delta_3 = 0.375;
        }
        else
        {
          component_delta_3 = 0.5;
        }
      }
      else
      {
        component_delta_3 = -0.5;
      }
      product_difference_6 = a5 * component_delta_3;
      if ( input_value_2 == 45 )
      {
        if ( iteration_count )
        {
          if ( iteration_count == 1 )
          {
            product_difference_6 = a5 * -0.375;
          }
          else if ( iteration_count == 2 )
          {
            product_difference_6 = a5 * 0.375;
          }
          else
          {
            product_difference_6 = a5 * 0.5;
          }
        }
        else
        {
          product_difference_6 = a5 * -0.5;
        }
      }
      scaled_index_3 = (int)(3 * integer_sum_3);
      SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 1.047197551196667;
      dword_140404A6C[scaled_index_3 + 177167567] = LODWORD(a3);
      *(float *)&dword_140404A6C[scaled_index_3 + 177167568] = product_difference_6;
      *(float *)&dword_140404A6C[scaled_index_3 + 177167569] = product_difference_5;
      integer_sum = ++mesh_vertex_count;
      converted_vector = _mm_cvtpd_ps(converted_vector_4);
      --remaining_count;
    }
    while ( remaining_count );
    input_value = a4;
    ++iteration_count;
    *(_QWORD *)&a3 = comparison_operand;
  }
  while ( iteration_count < 4 );
  state_word = g_16A94BDAC;
  running_total = 8;
  do
  {
    integer_difference = running_total - 2;
    dword_140404A6C[5 * state_word + 177544401] = 4;
    integer_difference_2 = running_total - 8;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total - 2;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total - 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total - 7;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total - 8;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total - 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total - 6;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total - 7;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total + 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total - 5;
    dword_140404A6C[5 * g_16A94BDAC + 177544405] = running_total - 6;
    integer_difference_3 = running_total - 4;
    ++g_16A94BDAC;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total + 1;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = running_total + 2;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = running_total - 4;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = running_total - 5;
    integer_difference_4 = running_total - 3;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = running_total + 2;
    integer_sum_4 = running_total + 3;
    running_total += 6;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = integer_sum_4;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = integer_difference_4;
    dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = integer_difference_3;
    dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
    dword_140404A6C[5 * g_16A94BDAC + 177544402] = integer_sum_4;
    dword_140404A6C[5 * g_16A94BDAC + 177544403] = integer_difference;
    dword_140404A6C[5 * g_16A94BDAC + 177544404] = integer_difference_2;
    dword_140404A6C[5 * g_16A94BDAC + 177544405] = integer_difference_4;
    state_word = ++g_16A94BDAC;
  }
  while ( running_total < 26 );
  iteration_count_2 = 0;
  dword_140404A6C[5 * state_word + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 5;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 0;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 1;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 1;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 2;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 3;
  dword_140404A6C[5 * g_16A94BDAC + 177544401] = 4;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 18;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 23;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 22;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 19;
  dword_140404A6C[5 * g_16A94BDAC + 177544402] = 19;
  dword_140404A6C[5 * g_16A94BDAC + 177544403] = 22;
  dword_140404A6C[5 * g_16A94BDAC + 177544404] = 21;
  dword_140404A6C[5 * g_16A94BDAC++ + 177544405] = 20;
  if ( (int)g_16A94BDAC > 0 )
  {
    cached_mesh_triangle_count = mesh_triangle_count;
    state_address = &g_16A94BDB4;
    do
    {
      ++iteration_count_2;
      scaled_index_4 = (int)(3 * cached_mesh_triangle_count);
      loaded_word = *state_address;
      state_address += 5;
      dword_140404A6C[scaled_index_4 + 177495248] = loaded_word;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(state_address - 4);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(state_address - 3);
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_5 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_5 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_5 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[scaled_index_5 + 178011348] = 1065353216;
      dword_140404A6C[scaled_index_5 + 178011350] = 1065353216;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = *(state_address - 5);
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *(state_address - 3);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = *(state_address - 2);
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_6 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_6 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_6 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[scaled_index_6 + 178011348] = 1065353216;
      dword_140404A6C[scaled_index_6 + 178011350] = 1065353216;
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    while ( iteration_count_2 < (int)g_16A94BDAC );
  }
  return sub_1401449C0(a1, 0);
}

//----- (00000001400561C0) ----------------------------------------------------
void            sub_1400561C0(int a1)
{
  int iteration_count;
  int iteration_count_2;
  unsigned int *record_byte_offset;
  unsigned int cached_mesh_triangle_count;
  int iteration_count_3;
  unsigned int *state_address;
  unsigned int *record_byte_offset_2;
  unsigned int *record_byte_offset_3;
  unsigned int *record_byte_offset_4;
  _DWORD sr_quad_position[3];
  _DWORD sr_quad_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400561C0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 0)) /* [rsp+0h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 88)) /* [rsp+58h] */

  iteration_count = 0;
  sr_quad_position[2] = -1119879168;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  (*(__int64 *)sr_quad_position) = 0;
  sub_140003460((float *)&(*(__int64 *)sr_quad_position), 0.015625, 0.03125, 0.09375);
  iteration_count_2 = 0;
  if ( (int)g_16AC43DB0 > 0 )
  {
    record_byte_offset = &g_16AC83DB8;
    do
    {
      *(_QWORD *)(record_byte_offset - 1) = 1056964608;
      ++iteration_count_2;
      *(_QWORD *)(record_byte_offset + 1) = 1056964608;
      *(_QWORD *)(record_byte_offset + 3) = 1056964608;
      *(_QWORD *)(record_byte_offset + 5) = 1056964608;
      record_byte_offset += 8;
    }
    while ( iteration_count_2 < (int)g_16AC43DB0 );
  }
  (*(__int128 *)sr_quad_matrix) = xmmword_140278D30;
  sr_quad_position[2] = 1015021568;
  (*(__int128 *)(sr_quad_matrix + 4)) = xmmword_140278D30;
  sr_quad_matrix[8] = 1065353216;
  sr_math_mat3_rotate_rows((__int64)sr_quad_matrix, (float *)sr_quad_matrix + 3, sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_quad_position), (float *)sr_quad_matrix, sr_export_float_lane_container(1023410176), 0.03125);
  cached_mesh_triangle_count = mesh_triangle_count;
  iteration_count_3 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count_3;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_3 < (int)mesh_triangle_count );
  }
  if ( (int)g_16AC43DB0 > 0 )
  {
    record_byte_offset_2 = &g_16AC43DB4;
    record_byte_offset_3 = &g_16AC83DC0;
    record_byte_offset_4 = &g_16AC83DC8;
    do
    {
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = *record_byte_offset_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_2[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_2[2];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_3 - 3);
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_3 - 2);
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_3 - 1);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *record_byte_offset_3;
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = record_byte_offset_3[1];
      dword_140404A6C[6 * mesh_triangle_count++ + 178011350] = record_byte_offset_3[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = *record_byte_offset_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = record_byte_offset_2[2];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = record_byte_offset_2[3];
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(record_byte_offset_3 - 3);
      record_byte_offset_2 += 4;
      dword_140404A6C[6 * mesh_triangle_count + 178011346] = *(record_byte_offset_3 - 2);
      record_byte_offset_3 += 8;
      record_byte_offset_4 += 8;
      ++iteration_count;
      dword_140404A6C[6 * mesh_triangle_count + 178011347] = *(record_byte_offset_4 - 9);
      dword_140404A6C[6 * mesh_triangle_count + 178011348] = *(record_byte_offset_4 - 8);
      dword_140404A6C[6 * mesh_triangle_count + 178011349] = *(record_byte_offset_4 - 7);
      dword_140404A6C[6 * mesh_triangle_count + 178011350] = *(record_byte_offset_4 - 6);
      cached_mesh_triangle_count = ++mesh_triangle_count;
    }
    while ( iteration_count < (int)g_16AC43DB0 );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_88

//----- (0000000140056560) ----------------------------------------------------
void            sub_140056560()
{
  unsigned int state_word;
  float *buffer_cursor;
  int iteration_count;
  int remaining_count;
  int iteration_count_2;
  int remaining_count_2;
  float scaled_value;
  float combined_products;
  int integer_difference;
  float scaled_value_2;
  float square_root;
  float squared_component;
  float component_delta;
  float combined_products_2;
  float square_root_2;
  float limited_value;
  float limited_value_2;
  float limited_value_3;
  float limited_value_4;
  float scaled_value_3;

  state_word = g_183F7CB60;
  buffer_cursor = (float *)&g_16D48282C;
  iteration_count = 0;
  remaining_count = 768;
  g_16D482820 = -981467136;
  g_16D482828 = -981467136;
  do
  {
    iteration_count_2 = 0;
    remaining_count_2 = 638;
    scaled_value = (float)iteration_count * 0.015625;
    combined_products = (float)(iteration_count - 704 + 64) * (float)(iteration_count - 704 + 64);
    scaled_value_3 = scaled_value * 0.5;
    do
    {
      integer_difference = iteration_count_2 - 704;
      scaled_value_2 = (float)iteration_count_2 * 0.015625;
      square_root = fminf(
              fmaxf((float)(fsqrt((float)((float)(integer_difference + 64) * (float)(integer_difference + 64)) + combined_products) * 0.00390625) - 0.75, 0.0),
              3.0);
      squared_component = square_root * square_root;
      component_delta = SR_VEC_READ_LANES(128, sub_1401305F0(scaled_value_2, scaled_value, -1), f32)[0] + squared_component;
      combined_products_2 = (float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0(scaled_value_2 * 0.5, scaled_value_3, -1), f32)[0] * 32.0) + (float)(squared_component * 8.0)) * squared_component;
      square_root_2 = fminf(
              fmaxf(
                (float)(fsqrt((float)((float)integer_difference * (float)integer_difference) + (float)((float)(iteration_count - 704) * (float)(iteration_count - 704))) - 320.0)
              * 0.015625,
                0.0),
              1.0);
      *buffer_cursor = (float)((float)((float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0((float)iteration_count_2 * 0.03125, (float)iteration_count * 0.03125, -1), f32)[0] * 8.0)
                                  + 23.75)
                          + (float)((float)(component_delta * 16.0) + combined_products_2))
                  * square_root_2)
          + (float)((float)(1.0 - square_root_2) * 23.875);
      if ( state_word )
        goto LABEL_12;
      if ( remaining_count <= 130 )
      {
        if ( remaining_count <= 0 )
          goto LABEL_12;
      }
      else if ( (unsigned int)iteration_count_2 <= 0x2FF )
      {
        limited_value = fminf(
                fmaxf(
                  fmaxf(1.0 - fminf((float)(remaining_count - 130) * 0.25, 1.0), 1.0 - fminf((float)(remaining_count_2 + 130) * 0.25, 1.0)),
                  0.0),
                1.0);
        *buffer_cursor = (float)((float)(36.0 - (float)(limited_value * 24.0)) * (float)(limited_value * limited_value)) + 11.75;
      }
      if ( (unsigned int)iteration_count_2 <= 0x27D )
      {
        limited_value_2 = fminf((float)remaining_count * 0.25, 1.0);
        limited_value_3 = 1.0 - fminf((float)remaining_count_2 * 0.25, 1.0);
        if ( remaining_count > 130 )
          limited_value_3 = 0.0;
        limited_value_4 = fminf(fmaxf(fmaxf(limited_value_3, 1.0 - limited_value_2), 0.0), 1.0);
        *buffer_cursor = (float)((float)(36.0 - (float)(limited_value_4 * 24.0)) * (float)(limited_value_4 * limited_value_4)) + 11.75;
      }
LABEL_12:
      scaled_value = (float)iteration_count * 0.015625;
      ++iteration_count_2;
      combined_products = (float)(iteration_count - 704 + 64) * (float)(iteration_count - 704 + 64);
      --remaining_count_2;
      ++buffer_cursor;
    }
    while ( iteration_count_2 < 2049 );
    ++iteration_count;
    --remaining_count;
  }
  while ( remaining_count > -1281 );
}

//----- (00000001400589A0) ----------------------------------------------------
__int64            sub_1400589A0(unsigned int a1, int a2, __int64 a3)
{
  signed int integer_sum;
  __int64 input_value;
  int float_word;
  unsigned int integer_sum_2;
  signed int vector_result;
  int record_byte_offset;
  __m128i si128;
  __m128i vector_result_2;
  __int64 record_byte_offset_2;
  unsigned int *state_address;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i vector_result_3;
  __m128i vector_result_4;
  unsigned int *state_address_2;
  __int64 remaining_count;
  signed int saved_vector_result;
  int iteration_count;
  int rand_result;
  __int64 saved_rand_result;
  __int64 scaled_index;
  __int64 table_value;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  char *text_cursor;
  unsigned int *state_address_3;
  char input_byte;
  __int64 iteration_count_2;
  int integer_quotient;
  __int64 corporation;
  int mission;
  __int64 record_byte_offset_3;
  unsigned int *state_address_4;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 state_word;
  __int64 scaled_index_6;
  unsigned int state_word_2;
  int rand_result_2;
  bool comparison_result;
  unsigned int state_word_3;
       char *saved_state_address;
       __m128i *state_address_5;
  int integer_quotient_2;
  char *destination_text;
  float weighted_sum;
  double angle;
  float weighted_sum_2;
  int createitem_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400589A0[1440];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 0)) /* [rsp+0h] */
#define saved_rand_result_2 (*(int (*))(void *)(sr_frame_1400589A0 + 32)) /* [rsp+20h] */
#define input_value_2 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 48)) /* [rsp+30h] */
#define integer_sum_3 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 52)) /* [rsp+34h] */
#define input_value_3 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 56)) /* [rsp+38h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400589A0 + 64)) /* [rsp+40h] */
#define state_address_6 (*(unsigned int * (*))(void *)(sr_frame_1400589A0 + 80)) /* [rsp+50h] */
#define cached_input_value (*(__int64 (*))(void *)(sr_frame_1400589A0 + 88)) /* [rsp+58h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_1400589A0 + 96)) /* [rsp+60h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_1400589A0 + 128)) /* [rsp+80h] */
#define scratch_buffer (*(_DWORD (*)[20])(void *)(sr_frame_1400589A0 + 144)) /* [rsp+90h] */
#define source_text (*(char (*)[1024])(void *)(sr_frame_1400589A0 + 400)) /* [rsp+190h] */
#define unused_frame_slot_1424 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 1424)) /* [rsp+590h] */

  integer_sum = game_day_time + 630000;
  input_value_3 = a3;
  input_value = a2;
  float_word = g_1B4657C84 + 19;
  input_value_2 = a1;
  if ( (signed int)(game_day_time + 630000) > 3870000 )
    integer_sum = 3870000;
  integer_sum_3 = g_1B4657C84 + 19;
  integer_sum_2 = g_1B4657C84 + 1;
  if ( (signed int)(g_1B4657C84 + 20) > 24 )
    integer_sum_2 = 0;
  g_1B4657C84 = integer_sum_2;
  if ( a1 == 1 )
  {
    sub_14012D310(float_word, integer_sum);
LABEL_29:
    a3 = input_value_3;
    goto LABEL_30;
  }
  if ( !a1 )
  {
    if ( !item_block_region_count || !g_1B46590BC )
      return 0; /* compatibility result discarded by all reviewed callers */
    vector_result = 0x10000;
    record_byte_offset = 0;
    if ( (int)g_1B46590BC >= 8 && dword_140302080 >= 2 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
      vector_result_2 = si128;
      record_byte_offset_2 = 0;
      state_address = &g_1B46598DC;
      do
      {
        converted_vector = _mm_cvtsi32_si128(state_address[259]);
        record_byte_offset += 8;
        converted_vector_2 = _mm_cvtsi32_si128(*(state_address - 259));
        record_byte_offset_2 += 8;
        converted_vector_3 = _mm_cvtsi32_si128(*state_address);
        converted_vector_4 = _mm_cvtsi32_si128(*(state_address - 518));
        state_address += 2072;
        si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(converted_vector_4, converted_vector_2), _mm_unpacklo_epi32(converted_vector_3, converted_vector)));
        vector_result_2 = _mm_min_epi32(
                vector_result_2,
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(state_address - 1554)), _mm_cvtsi32_si128(*(state_address - 1295))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(state_address - 1036)), _mm_cvtsi32_si128(*(state_address - 777)))));
      }
      while ( record_byte_offset_2 < g_1B46590BC - (signed int)g_1B46590BC % 8 );
      vector_result_3 = _mm_min_epi32(si128, vector_result_2);
      vector_result_4 = _mm_min_epi32(vector_result_3, _mm_srli_si128(vector_result_3, 8));
      vector_result = _mm_cvtsi128_si32(_mm_min_epi32(vector_result_4, _mm_srli_si128(vector_result_4, 4)));
    }
    if ( record_byte_offset < (int)g_1B46590BC )
    {
      state_address_2 = &dword_140404A6C[259 * record_byte_offset + 487149974];
      remaining_count = g_1B46590BC - record_byte_offset;
      do
      {
        saved_vector_result = *state_address_2;
        state_address_2 += 259;
        if ( vector_result <= saved_vector_result )
          saved_vector_result = vector_result;
        vector_result = saved_vector_result;
        --remaining_count;
      }
      while ( remaining_count );
    }
    iteration_count = 0;
    rand_result = rand() % (signed int)g_1B46590BC;
    do
    {
      if ( (int)dword_140404A6C[259 * rand_result + 487149974] <= vector_result )
        break;
      ++iteration_count;
      rand_result = rand() % (signed int)g_1B46590BC;
    }
    while ( iteration_count < 1024 );
    saved_rand_result = rand_result;
    scaled_index = 259LL * rand_result;
    ++dword_140404A6C[scaled_index + 487149974];
    table_value = (int)dword_140404A6C[scaled_index + 487149973];
    g_1B4657DAC = g_1B4657C80 + 100;
    crt_sprintf(scratch_buffer, "SECRET%02d.TXT", g_1B4657C80);
    scaled_index_2 = 2570 * saved_rand_result;
    scaled_index_3 = (int)dword_140404A6C[2570 * saved_rand_result + 275754072];
    if ( (int)scaled_index_3 < 256 )
    {
      dword_140404A6C[6 * scaled_index_3 + 275754073 + scaled_index_2] = g_1B4657DAC;
      text_cursor = (char *)scratch_buffer;
      state_address_3 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_2 + 275754072] + 275754074 + scaled_index_2];
      do
      {
        input_byte = *text_cursor++;
        *(_BYTE *)state_address_3 = input_byte;
        state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
      }
      while ( input_byte );
      dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_2 + 275754072]++ + 275754078 + scaled_index_2] = 0;
    }
    if ( dword_140404A6C[14019 * table_value + 225641203] != 4 )
      return 0; /* compatibility result discarded by all reviewed callers */
    sub_14012E620(table_value, float_word);
    goto LABEL_29;
  }
LABEL_30:
  cached_input_value = input_value;
  if ( (int)input_value > 0 )
  {
    iteration_count_2 = 0;
    state_address_6 = &dword_140404A6C[1268 * float_word + 278521297];
    integer_quotient = integer_sum / 3600;
    do
    {
      corporation = *(int *)(a3 + 4 * iteration_count_2);
      mission = 0;
      record_byte_offset_3 = 0;
      state_address_4 = &dword_140404A6C[5873 * corporation + 283831867];
      while ( *(state_address_4 - 279) )
      {
        if ( !*state_address_4 )
        {
          ++record_byte_offset_3;
          ++mission;
          break;
        }
        if ( !state_address_4[279] )
        {
          record_byte_offset_3 += 2;
          mission += 2;
          break;
        }
        if ( !state_address_4[558] )
        {
          record_byte_offset_3 += 3;
          mission += 3;
          break;
        }
        record_byte_offset_3 += 4;
        state_address_4 += 1116;
        mission += 4;
        if ( record_byte_offset_3 >= 16 )
          break;
      }
      scaled_index_4 = 5873 * corporation;
      scaled_index_5 = 23492 * corporation + 1116LL * mission;
      crt_memset((void *)(uintptr_t)((unsigned int *)((char *)&g_183EBFEFC + scaled_index_5)), 0, 0x45Cu);
      state_word = (int)g_1B4657D8C;
      scaled_index_6 = 23492 * corporation + 1116 * record_byte_offset_3;
      *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_6) = g_1B4657C80;
      *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_6) = input_value_2;
      state_word_2 = g_1B4657DAC;
      *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_6) = state_word;
      *(unsigned int *)((char *)&g_183EBFF14 + scaled_index_6) = state_word_2;
      *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_6) = 1;
      *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_6) = dword_140404A6C[1760 * state_word + 278845898];
      rand_result_2 = 250 * (rand() % 5 + 4);
      comparison_result = integer_sum_3 == 23;
      *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_6) = rand_result_2;
      if ( comparison_result )
      {
        rand_result_2 *= 4;
        *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_6) = rand_result_2;
      }
      state_word_3 = g_1B4657DB0;
      saved_state_address = (     char *)state_address_6;
      *(unsigned int *)((char *)&g_183EBFF54 + scaled_index_6) = 0;
      *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_6) = 0;
      *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_6) = integer_sum;
      *(unsigned int *)((char *)&g_183EBFF44 + scaled_index_6) = state_word_3;
      saved_rand_result_2 = rand_result_2;
      *(float *)((char *)&g_183EBFF50 + scaled_index_6) = (float)rand_result_2 * 0.000024999999;
      state_address_5 = (     __m128i *)((char *)&g_183EBFF58 + scaled_index_5);
      crt_sprintf(
        (_BYTE *)&g_183EBFF58 + scaled_index_5,
        "Acquisition(%d):\n"
        "We have received reports that Megacorp has disks containing\n"
        "information that will be beneficial to one of our subsidiaries.\n"
        "The %s is in a town car driving around the city.\n"
        "\n"
        "Value:               $%d Bonus\n",
        mission + 1,
        saved_state_address,
        saved_rand_result_2);
      integer_quotient_2 = integer_quotient / 60 % -12;
      if ( !integer_quotient_2 )
        integer_quotient_2 = 12;
      crt_sprintf(source_text, "\nThis mission expires at %d:%d%d\n\n", integer_quotient_2, integer_quotient % 60 / 10 % 6, integer_quotient % 60 % 10);
      destination_text = &SR_VEC_LANES(128, state_address_5[-1], i8)[15];
      do
        comparison_result = *++destination_text == 0;
      while ( !comparison_result );
      strcpy(destination_text, source_text);
      sr_event_mission_text(corporation, mission);
      unused_written_slot = 1065353216;
      weighted_sum = *(float *)&dword_140404A6C[scaled_index_4 + 283831499];
      *(_QWORD *)&angle = dword_140404A6C[scaled_index_4 + 283831497];
      LODWORD(float_buffer[0]) = dword_140404A6C[scaled_index_4 + 283831498];
      *(float *)&angle = *(float *)&angle - 1.5707964;
      weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_4 + 283831500];
      float_buffer[1] = weighted_sum;
      float_buffer[2] = weighted_sum_2;
      matrix[0] = xmmword_140278D30;
      matrix[1] = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, angle);
      createitem_result = sr_CreateItem(34, float_buffer, nullptr, (float *)matrix);
      sub_1400584B0(createitem_result, state_address_5);
      a3 = input_value_3;
      ++iteration_count_2;
    }
    while ( iteration_count_2 < cached_input_value );
  }
  ++g_1B4657C80;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef saved_rand_result_2
#undef input_value_2
#undef integer_sum_3
#undef input_value_3
#undef float_buffer
#undef state_address_6
#undef cached_input_value
#undef matrix
#undef unused_written_slot
#undef scratch_buffer
#undef source_text
#undef unused_frame_slot_1424

//----- (00000001400590B0) ----------------------------------------------------
void            sub_1400590B0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int integer_sum;
  unsigned int *float_word;
  int *buffer_cursor;
  unsigned int iteration_count;
  unsigned int iteration_count_2;
  int integer_sum_2;
  unsigned int integer_sum_3;
  int scaled_index;
  int running_total;
  __int64 element_index;
  unsigned int saved_createitem_result;
  unsigned int state_word;
  __int64 scaled_index_2;
  float state_address;
  float state_address_2;
  unsigned int createitem_result;
  unsigned __int64 i;
  int mission;
  __int64 record_byte_offset;
  unsigned int *state_address_3;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float product_difference;
  int table_value;
  unsigned int cached_integer_sum;
  int table_value_2;
  int rand_result;
  int corporation;
  __int64 scaled_index_5;
  int shifted_bits;
  int saved_masked_bits;
  int scaled_index_6;
  unsigned int saved_masked_bits_2;
  int masked_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400590B0[160];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 8)) /* [rsp+0h] */
#define table_value_3 (*(int (*))(void *)(sr_frame_1400590B0 + 40)) /* [rsp+20h] */
#define masked_bits_2 (*(unsigned __int64 (*))(void *)(sr_frame_1400590B0 + 48)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400590B0 + 56)) /* [rsp+30h] */
#define cached_integer_sum_2 (*(unsigned int (*))(void *)(sr_frame_1400590B0 + 64)) /* [rsp+38h] */
#define input_value (*(int (*))(void *)(sr_frame_1400590B0 + 68)) /* [rsp+3Ch] */
#define input_cursor (*(unsigned int * (*))(void *)(sr_frame_1400590B0 + 72)) /* [rsp+40h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_1400590B0 + 80)) /* [rsp+48h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400590B0 + 112)) /* [rsp+68h] */
#define scratch_buffer_2 (*(_DWORD (*)[8])(void *)(sr_frame_1400590B0 + 120)) /* [rsp+70h] */
#define unused_frame_slot_152 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 152)) /* [rsp+90h] */

  if ( a2 >= 3 )
  {
    integer_sum = game_day_time + 414000;
    float_word = a3;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
      integer_sum = 3870000;
    buffer_cursor = scratch_buffer_2;
    iteration_count = 0;
    iteration_count_2 = 0;
    integer_sum_2 = g_1B4657C84 + 19;
    integer_sum_3 = g_1B4657C84 + 1;
    cached_integer_sum_2 = integer_sum;
    input_cursor = a3;
    input_value = a2;
    if ( (signed int)(g_1B4657C84 + 20) > 24 )
      integer_sum_3 = 0;
    g_1B4657C84 = integer_sum_3;
    do
    {
      if ( iteration_count_2 >= 2 )
      {
        running_total = 1000;
        *buffer_cursor = 1000;
        if ( (rand() & 1) == 0 )
        {
          running_total = 1500;
          *buffer_cursor = 1500;
        }
        if ( (rand() & 3) == 0 )
        {
          running_total += 500;
          *buffer_cursor = running_total;
        }
        if ( (rand() & 3) == 0 )
        {
          running_total += 500;
          *buffer_cursor = running_total;
        }
        if ( (rand() & 3) == 0 )
          running_total += 500;
        if ( integer_sum_2 == 23 )
          running_total *= 5;
        scaled_index = 2 * running_total;
      }
      else
      {
        scaled_index = 0;
      }
      *buffer_cursor = scaled_index;
      ++iteration_count_2;
      ++buffer_cursor;
    }
    while ( (int)iteration_count_2 < a2 );
    element_index = 0;
    saved_createitem_result = g_1B4657D8C;
    state_word = g_1B4657C80;
    do
    {
      scaled_index_2 = 5873LL * (int)float_word[element_index];
      scratch_buffer[0] = xmmword_140278D30;
      scratch_buffer[1] = xmmword_140278D30;
      unused_written_slot_2 = 1065353216;
      state_address = (float)(*(float *)&dword_140404A6C[scaled_index_2 + 283831491] + *(float *)&dword_140404A6C[scaled_index_2 + 283831494]) * 0.5;
      state_address_2 = (float)(*(float *)&dword_140404A6C[scaled_index_2 + 283831493] + *(float *)&dword_140404A6C[scaled_index_2 + 283831496]) * 0.5;
      *((float *)&masked_bits_2 + 1) = (float)(*(float *)&dword_140404A6C[scaled_index_2 + 283831492]
                                   + *(float *)&dword_140404A6C[scaled_index_2 + 283831495])
                           * 0.5;
      *(float *)&masked_bits_2 = state_address + (float)((float)(state_word & 7) * 0.75);
      unused_written_slot = state_address_2 - 1.0;
      if ( !element_index )
      {
        createitem_result = sr_CreateItem(integer_sum_2, (float *)&masked_bits_2, nullptr, (float *)scratch_buffer);
        state_word = g_1B4657C80;
        saved_createitem_result = createitem_result;
        g_1B4657D8C = createitem_result;
        unused_written_slot = state_address_2 + 1.0;
      }
      ++element_index;
    }
    while ( element_index < 2 );
    for ( i = 0; ; ++i )
    {
      mission = 0;
      table_value_3 = float_word[i];
      record_byte_offset = 0;
      state_address_3 = &dword_140404A6C[5873 * table_value_3 + 283831867];
      while ( *(state_address_3 - 279) )
      {
        if ( !*state_address_3 )
        {
          ++record_byte_offset;
          ++mission;
          break;
        }
        if ( !state_address_3[279] )
        {
          record_byte_offset += 2;
          mission += 2;
          break;
        }
        if ( !state_address_3[558] )
        {
          record_byte_offset += 3;
          mission += 3;
          break;
        }
        record_byte_offset += 4;
        state_address_3 += 1116;
        mission += 4;
        if ( record_byte_offset >= 16 )
          break;
      }
      scaled_index_3 = 5873LL * table_value_3;
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * mission + 283831588 + scaled_index_3]), 0, 0x45Cu);
      masked_bits_2 = 1116 * record_byte_offset;
      scaled_index_4 = 1116 * record_byte_offset + scaled_index_3 * 4;
      *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_4) = 1;
      *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_4) = state_word;
      *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_4) = saved_createitem_result;
      if ( iteration_count >= 2 )
      {
        if ( i <= 1 )
          *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 8;
        *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_4) = dword_140404A6C[1760 * saved_createitem_result + 278845898];
        table_value = scratch_buffer_2[i];
        if ( iteration_count < 3 )
          table_value *= 2;
        product_difference = (float)table_value;
        *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_4) = table_value;
        *(float *)((char *)&g_183EBFF50 + scaled_index_4) = (float)table_value * 0.000024999999;
      }
      else
      {
        product_difference = 0.0;
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 7;
        *(_QWORD *)((char *)&g_183EBFF38 + scaled_index_4) = dword_140404A6C[1760 * saved_createitem_result + 278845898];
        *(unsigned int *)((char *)&g_183EBFF50 + scaled_index_4) = 0;
        if ( !iteration_count )
          goto LABEL_45;
      }
      product_difference = product_difference * -0.0000125;
LABEL_45:
      cached_integer_sum = cached_integer_sum_2;
      *(float *)((char *)&g_183EBFF54 + scaled_index_4) = product_difference;
      *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_4) = cached_integer_sum;
      *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_4) = *input_cursor;
      *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_4) = 0;
      if ( iteration_count == 2 )
      {
        table_value_2 = scratch_buffer_2[i];
        rand_result = rand();
        corporation = table_value_3;
        scaled_index_5 = 3LL * table_value_3;
        shifted_bits = table_value_2 / 1000
            + rand_result
            % (int)(((int)((unsigned __int64)(91625969LL * table_value_2) >> 32) >> 4)
                  + 1
                  + ((unsigned int)((unsigned __int64)(91625969LL * table_value_2) >> 32) >> 31));
        if ( shifted_bits < 1 )
          shifted_bits = 1;
        saved_masked_bits = 500 * shifted_bits;
        scaled_index_6 = dword_140404A6C[6 * table_value_3 + 335047061];
        if ( scaled_index_6 <= 0 )
        {
          saved_masked_bits_2 = 0;
        }
        else
        {
          masked_bits = 50
              * ((25
                - (int)(float)((float)((float)scaled_index_6 * *(float *)&dword_140404A6C[6 * table_value_3 + 335047062])
                             * (float)((float)saved_masked_bits * -0.000024999999)))
               / 50);
          saved_masked_bits_2 = masked_bits;
          if ( saved_masked_bits >= masked_bits )
            masked_bits = saved_masked_bits;
          saved_masked_bits = masked_bits;
        }
        dword_140404A6C[scaled_index_3 + 283831608 + masked_bits_2 / 4] = saved_masked_bits_2;
        dword_140404A6C[2 * scaled_index_5 + 335047066] += saved_masked_bits;
        saved_createitem_result = g_1B4657D8C;
        state_word = g_1B4657C80;
        *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_4) = saved_masked_bits;
      }
      else
      {
        corporation = table_value_3;
      }
      sr_event_mission_update(corporation, mission);
      float_word = input_cursor;
      if ( (int)++iteration_count >= input_value )
      {
        g_1B4657C80 = state_word + 1;
        return;
      }
    }
  }
}
#undef unused_frame_slot_8
#undef table_value_3
#undef masked_bits_2
#undef unused_written_slot
#undef cached_integer_sum_2
#undef input_value
#undef input_cursor
#undef scratch_buffer
#undef unused_written_slot_2
#undef scratch_buffer_2
#undef unused_frame_slot_152

//----- (0000000140059640) ----------------------------------------------------
void            sub_140059640(unsigned int a1, int a2, __int64 a3)
{
  unsigned int integer_sum;
  __int64 input_value;
  unsigned int input_value_2;
  int integer_sum_2;
  unsigned int integer_sum_3;
  int iteration_count;
  signed int rand_result;
  __int64 cached_input_value;
  __int64 iteration_count_2;
  __int64 corporation;
  int mission;
  __int64 record_byte_offset;
  unsigned int *state_address;
  __int64 loaded_word;
  __int64 scaled_index;
  unsigned int rand_result_2;
  __m128i converted_vector;
  unsigned int state_word;

  integer_sum = game_day_time + 306000;
  input_value = a2;
  input_value_2 = a1;
  integer_sum_2 = g_1B4657C84 + 19;
  if ( (signed int)(game_day_time + 306000) > 3870000 )
    integer_sum = 3870000;
  integer_sum_3 = g_1B4657C84 + 1;
  if ( (signed int)(g_1B4657C84 + 20) > 24 )
    integer_sum_3 = 0;
  g_1B4657C84 = integer_sum_3;
  if ( a1 == 1 )
  {
    sub_14012D310(integer_sum_2, integer_sum);
LABEL_14:
    input_value_2 = a1;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    if ( !item_block_region_count )
      return;
    iteration_count = 0;
    rand_result = rand() % (signed int)item_block_region_count;
    do
    {
      if ( dword_140404A6C[14019 * rand_result + 225641203] == 4 )
        break;
      ++iteration_count;
      rand_result = rand() % (signed int)item_block_region_count;
    }
    while ( iteration_count < 1024 );
    if ( dword_140404A6C[14019 * rand_result + 225641203] != 4 )
      return;
    sub_14012E620(rand_result, integer_sum_2);
    goto LABEL_14;
  }
LABEL_15:
  cached_input_value = input_value;
  if ( (int)input_value > 0 )
  {
    iteration_count_2 = 0;
    do
    {
      corporation = *(int *)(a3 + 4 * iteration_count_2);
      mission = 0;
      record_byte_offset = 0;
      state_address = &dword_140404A6C[5873 * corporation + 283831867];
      while ( *(state_address - 279) )
      {
        if ( !*state_address )
        {
          ++record_byte_offset;
          ++mission;
          break;
        }
        if ( !state_address[279] )
        {
          record_byte_offset += 2;
          mission += 2;
          break;
        }
        if ( !state_address[558] )
        {
          record_byte_offset += 3;
          mission += 3;
          break;
        }
        record_byte_offset += 4;
        state_address += 1116;
        mission += 4;
        if ( record_byte_offset >= 16 )
          break;
      }
      loaded_word = 1116 * record_byte_offset + 23492LL * *(int *)(a3 + 4 * iteration_count_2);
      *(unsigned int *)((char *)&g_183EBFF04 + loaded_word) = g_1B4657C80;
      scaled_index = 1760LL * (int)g_1B4657D8C;
      *(unsigned int *)((char *)&g_183EBFF0C + loaded_word) = g_1B4657D8C;
      *(unsigned int *)((char *)&g_183EBFEFC + loaded_word) = 1;
      *(unsigned int *)((char *)&g_183EBFF08 + loaded_word) = input_value_2;
      *(unsigned int *)((char *)&g_183EBFF38 + loaded_word) = dword_140404A6C[scaled_index + 278845898];
      rand_result_2 = 250 * (rand() % 5 + 4);
      *(unsigned int *)((char *)&g_183EBFF3C + loaded_word) = rand_result_2;
      if ( integer_sum_2 == 23 )
      {
        rand_result_2 *= 4;
        *(unsigned int *)((char *)&g_183EBFF3C + loaded_word) = rand_result_2;
      }
      converted_vector = _mm_cvtsi32_si128(rand_result_2);
      state_word = g_1B4657DB0;
      *(unsigned int *)((char *)&g_183EBFF54 + loaded_word) = 0;
      *(unsigned int *)((char *)&g_183EBFF48 + loaded_word) = 0;
      *(unsigned int *)((char *)&g_183EBFF40 + loaded_word) = integer_sum;
      *(unsigned int *)((char *)&g_183EBFF44 + loaded_word) = state_word;
      *(float *)((char *)&g_183EBFF50 + loaded_word) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 0.000024999999;
      sr_event_mission_update(corporation, mission);
      input_value_2 = a1;
      ++iteration_count_2;
    }
    while ( iteration_count_2 < cached_input_value );
  }
  ++g_1B4657C80;
}

//----- (0000000140059920) ----------------------------------------------------
__int64            sub_140059920(__int64 a1, int a2, char *a3)
{
  signed __int64 input_value;
  unsigned int integer_sum;
  unsigned int iteration_count;
  unsigned __int64 element_index;
  int iteration_count_2;
  int integer_sum_2;
  unsigned int integer_sum_3;
  int scaled_index;
  int rand_result;
  unsigned __int64 element_index_2;
  __int64 masked_bits;
  unsigned int *saved_createitem_result;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float scaled_value;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  unsigned int createitem_result;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  int rand_result_2;
  int iteration_count_3;
  __int64 scaled_index_2;
  float scaled_value_4;
  unsigned int state_word;
  unsigned __int64 element_index_3;
  unsigned int state_word_2;
  unsigned int iteration_count_4;
  unsigned int state_word_3;
  unsigned int *record_pointer;
  __int64 corporation;
  int mission;
  __int64 record_byte_offset;
  unsigned int *state_address;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140059920[160];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_140059920 + 8)) /* [rsp+8h] */
#define weighted_sum_12 (*(float (*))(void *)(sr_frame_140059920 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140059920 + 44)) /* [rsp+2Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140059920 + 48)) /* [rsp+30h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140059920 + 56)) /* [rsp+38h] */
#define cached_input_value (*(signed __int64 (*))(void *)(sr_frame_140059920 + 64)) /* [rsp+40h] */
#define input_cursor (*(char * (*))(void *)(sr_frame_140059920 + 72)) /* [rsp+48h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_140059920 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140059920 + 112)) /* [rsp+70h] */
#define scratch_buffer (*(_DWORD (*)[8])(void *)(sr_frame_140059920 + 120)) /* [rsp+78h] */
#define unused_frame_slot_152 (*(__int64 (*))(void *)(sr_frame_140059920 + 152)) /* [rsp+98h] */

  input_value = a2;
  input_cursor = a3;
  if ( a2 >= 3 )
  {
    integer_sum = game_day_time + 414000;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
      integer_sum = 3870000;
    iteration_count = 0;
    LODWORD(packed_word_bits) = integer_sum;
    element_index = 0;
    iteration_count_2 = 0;
    integer_sum_2 = g_1B4657C84 + 19;
    integer_sum_3 = g_1B4657C84 + 1;
    if ( (signed int)(g_1B4657C84 + 20) > 24 )
      integer_sum_3 = 0;
    g_1B4657C84 = integer_sum_3;
    do
    {
      if ( (unsigned int)iteration_count_2 >= 2 )
      {
        rand_result = 250 * (rand() % 5 + 4);
        if ( element_index > 1 )
          rand_result += 250 * (rand() % 5);
        if ( integer_sum_2 == 23 )
          rand_result *= 4;
        scaled_index = 2 * rand_result;
      }
      else
      {
        scaled_index = 100;
      }
      scratch_buffer[element_index] = scaled_index;
      ++iteration_count_2;
      ++element_index;
    }
    while ( iteration_count_2 < (int)input_value );
    cached_input_value = input_value;
    if ( (_DWORD)input_value )
    {
      element_index_2 = 0;
      masked_bits = a3 - (char *)&g_1B4657D8C;
      do
      {
        saved_createitem_result = &dword_140404A6C[element_index_2 + 487148744];
        loaded_word = *(int *)((char *)saved_createitem_result + masked_bits);
        matrix[0] = xmmword_140278D30;
        matrix[1] = xmmword_140278D30;
        unused_written_slot_3 = 1065353216;
        weighted_sum = *(float *)&dword_140404A6C[5873 * loaded_word + 283831498];
        weighted_sum_2 = *(float *)&dword_140404A6C[5873 * loaded_word + 283831499];
        weighted_sum_3 = *(float *)&dword_140404A6C[5873 * loaded_word + 283831500];
        sr_math_mat3_rotate_rows(
          (__int64)matrix,
          (float *)matrix + 3,
          sr_export_float_lane_container((unsigned __int64)dword_140404A6C[5873 * loaded_word + 283831497]));
        sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container(1078530011));
        scaled_value = *(float *)matrix;
        weighted_sum_4 = *((float *)matrix + 1);
        weighted_sum_5 = *((float *)matrix + 2);
        weighted_sum_6 = (float)(*(float *)matrix * 0.5) + weighted_sum;
        weighted_sum_12 = weighted_sum_6;
        weighted_sum_7 = (float)(*((float *)matrix + 1) * 0.5) + weighted_sum_2;
        weighted_sum_8 = (float)(*((float *)matrix + 2) * 0.5) + weighted_sum_3;
        unused_written_slot = weighted_sum_7;
        unused_written_slot_2 = weighted_sum_8;
        if ( element_index_2 >= 2 )
        {
          if ( iteration_count < 3 )
          {
            rand_result_2 = rand() % 5 + 4;
            if ( integer_sum_2 == 23 )
              rand_result_2 += rand() % 3 + 2;
            iteration_count_3 = 0;
            if ( rand_result_2 > 0 )
            {
              scaled_index_2 = 5873 * loaded_word;
              do
              {
                if ( (iteration_count_3 & 3) == 0 )
                {
                  weighted_sum_12 = weighted_sum_6 + (float)(scaled_value * 0.75);
                  unused_written_slot = weighted_sum_7 + (float)(weighted_sum_4 * 0.75);
                  unused_written_slot_2 = weighted_sum_8 + (float)(weighted_sum_5 * 0.75);
                  sr_CreateItem(15, &weighted_sum_12, nullptr, (float *)matrix);
                  weighted_sum_6 = (float)(*(float *)matrix * 0.75) + (float)(weighted_sum_6 + (float)(scaled_value * 0.75));
                  weighted_sum_7 = (float)(*((float *)matrix + 1) * 0.75) + (float)(weighted_sum_7 + (float)(weighted_sum_4 * 0.75));
                  weighted_sum_8 = (float)(*((float *)matrix + 2) * 0.75) + (float)(weighted_sum_8 + (float)(weighted_sum_5 * 0.75));
                  weighted_sum_12 = weighted_sum_6;
                  unused_written_slot = weighted_sum_7;
                  unused_written_slot_2 = weighted_sum_8;
                }
                sr_CreateItem(17, &weighted_sum_12, nullptr, (float *)matrix);
                scaled_value = *(float *)matrix;
                weighted_sum_4 = *((float *)matrix + 1);
                scaled_value_4 = *(float *)matrix;
                weighted_sum_5 = *((float *)matrix + 2);
                ++iteration_count_3;
                dword_140404A6C[scaled_index_2 + 283831504] -= 250;
                weighted_sum_6 = weighted_sum_6 + (float)(scaled_value_4 * 0.5);
                weighted_sum_12 = weighted_sum_6;
                weighted_sum_7 = weighted_sum_7 + (float)(weighted_sum_4 * 0.5);
                unused_written_slot = weighted_sum_7;
                weighted_sum_8 = weighted_sum_8 + (float)(weighted_sum_5 * 0.5);
                unused_written_slot_2 = weighted_sum_8;
              }
              while ( iteration_count_3 < rand_result_2 );
            }
          }
        }
        else
        {
          createitem_result = sr_CreateItem(integer_sum_2, &weighted_sum_12, nullptr, (float *)matrix);
          scaled_value_2 = *(float *)matrix;
          scaled_value_3 = *(float *)matrix;
          *saved_createitem_result = createitem_result;
          dword_140404A6C[5873 * loaded_word + 283831504] -= scratch_buffer[element_index_2];
          weighted_sum_9 = (float)((float)(scaled_value_3 * 0.5) + weighted_sum_6) + (float)(scaled_value_2 * 0.75);
          weighted_sum_12 = weighted_sum_9;
          weighted_sum_10 = (float)((float)(*((float *)matrix + 1) * 0.5) + weighted_sum_7) + (float)(*((float *)matrix + 1) * 0.75);
          unused_written_slot = weighted_sum_10;
          weighted_sum_11 = (float)((float)(*((float *)matrix + 2) * 0.5) + weighted_sum_8) + (float)(*((float *)matrix + 2) * 0.75);
          unused_written_slot_2 = weighted_sum_11;
          sr_CreateItem(15, &weighted_sum_12, nullptr, (float *)matrix);
          weighted_sum_12 = (float)(*(float *)matrix * 0.75) + weighted_sum_9;
          unused_written_slot = (float)(*((float *)matrix + 1) * 0.75) + weighted_sum_10;
          unused_written_slot_2 = (float)(*((float *)matrix + 2) * 0.75) + weighted_sum_11;
        }
        ++iteration_count;
        ++element_index_2;
      }
      while ( (__int64)element_index_2 < cached_input_value );
      state_word = g_1B4657D8C;
      element_index_3 = 0;
      state_word_2 = g_1B4657D90;
      iteration_count_4 = 0;
      state_word_3 = g_1B4657C80;
      record_pointer = (unsigned int *)input_cursor;
      weighted_sum_12 = *(float *)&dword_140404A6C[1760 * g_1B4657D8C + 278845898];
      do
      {
        corporation = (int)record_pointer[element_index_3];
        mission = 0;
        record_byte_offset = 0;
        state_address = &dword_140404A6C[5873 * corporation + 283831867];
        while ( *(state_address - 279) )
        {
          if ( !*state_address )
          {
            ++record_byte_offset;
            ++mission;
            break;
          }
          if ( !state_address[279] )
          {
            record_byte_offset += 2;
            mission += 2;
            break;
          }
          if ( !state_address[558] )
          {
            record_byte_offset += 3;
            mission += 3;
            break;
          }
          record_byte_offset += 4;
          state_address += 1116;
          mission += 4;
          if ( record_byte_offset >= 16 )
            break;
        }
        scaled_index_3 = 279 * record_byte_offset;
        scaled_index_4 = 23492 * corporation + 1116 * record_byte_offset;
        *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_4) = 1;
        *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_4) = state_word_3;
        if ( element_index_3 >= 2 )
        {
          if ( iteration_count_4 < 3 )
            *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 8;
        }
        else
        {
          *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 7;
        }
        *(float *)((char *)&g_183EBFF38 + scaled_index_4) = weighted_sum_12;
        *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_4) = scratch_buffer[element_index_3];
        *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_4) = packed_word_bits;
        *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_4) = state_word;
        *(unsigned int *)((char *)&g_183EBFF10 + scaled_index_4) = state_word_2;
        if ( element_index_3 >= 2 )
        {
          *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_4) = *record_pointer;
          *(unsigned int *)((char *)&g_183EBFF1C + scaled_index_4) = record_pointer[1];
          *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_4) = 0;
          if ( iteration_count_4 < 3 )
            dword_140404A6C[5873 * corporation + 283831607 + scaled_index_3] = -dword_140404A6C[5873 * corporation + 283831504];
        }
        else
        {
          *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_4) = record_pointer[2];
          *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_4) = 0;
        }
        sr_event_mission_update(corporation, mission);
        ++iteration_count_4;
        ++element_index_3;
      }
      while ( (__int64)element_index_3 < cached_input_value );
    }
    else
    {
      state_word_3 = g_1B4657C80;
    }
    g_1B4657C80 = state_word_3 + 1;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_8
#undef weighted_sum_12
#undef unused_written_slot
#undef unused_written_slot_2
#undef packed_word_bits
#undef cached_input_value
#undef input_cursor
#undef matrix
#undef unused_written_slot_3
#undef scratch_buffer
#undef unused_frame_slot_152

//----- (000000014005A0E0) ----------------------------------------------------
__int64            sub_14005A0E0(__int64 a1, int a2, unsigned int *a3)
{
  __int64 input_value;
  int saved_rand_result;
  int rand_result;
  unsigned int integer_sum;
  int iteration_count;
  int integer_sum_2;
  unsigned int integer_sum_3;
  int rand_result_2;
  unsigned int masked_bits;
  __int64 cached_rand_result;
  __int64 element_index;
  int rand_result_3;
  __int64 element_index_2;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float scaled_value;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  unsigned int scaled_index_2;
  signed int createitem_result;
  signed int child;
  __int64 saved_createitem_result;
  __int64 scaled_index_3;
  bool comparison_result;
  unsigned int createitem_result_2;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  int rand_result_4;
  int i;
  float scaled_value_4;
  unsigned int state_word;
  unsigned int state_word_2;
  __int64 element_index_3;
  unsigned int saved_masked_bits;
  unsigned int cached_integer_sum;
  unsigned int scaled_index_4;
  unsigned int *record_pointer;
  int mission;
  __int64 record_byte_offset;
  __int64 corporation;
  unsigned int *state_address;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A0E0[160];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 8)) /* [rsp+8h] */
#define state_address_2 (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14005A0E0 + 48)) /* [rsp+30h] */
#define masked_bits_2 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 56)) /* [rsp+38h] */
#define cached_integer_sum_2 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 60)) /* [rsp+3Ch] */
#define input_cursor (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 64)) /* [rsp+40h] */
#define cached_input_value (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 72)) /* [rsp+48h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_14005A0E0 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14005A0E0 + 112)) /* [rsp+70h] */
#define scratch_buffer (*(_DWORD (*)[8])(void *)(sr_frame_14005A0E0 + 120)) /* [rsp+78h] */
#define unused_frame_slot_152 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 152)) /* [rsp+98h] */

  input_value = a2;
  input_cursor = a3;
  if ( a2 < 2 )
    return 0; /* compatibility result discarded by all reviewed callers */
  saved_rand_result = a2 - 1;
  rand_result = 2 - ((rand() & 3) != 0);
  if ( rand_result <= (int)input_value - 1 )
    saved_rand_result = rand_result;
  integer_sum = game_day_time + 414000;
  if ( (signed int)(game_day_time + 414000) > 3870000 )
    integer_sum = 3870000;
  cached_integer_sum_2 = integer_sum;
  iteration_count = 0;
  integer_sum_2 = g_1B4657C84 + 19;
  integer_sum_3 = g_1B4657C84 + 1;
  if ( (signed int)(g_1B4657C84 + 20) > 24 )
    integer_sum_3 = 0;
  g_1B4657C84 = integer_sum_3;
  if ( (rand() & 3) != 0 )
  {
    rand_result_2 = rand();
    masked_bits = rand_result_2 & 0x80000007;
    masked_bits_2 = rand_result_2 & 0x80000007;
    if ( rand_result_2 >= 0 )
      goto LABEL_13;
    masked_bits = (((_BYTE)masked_bits - 1) | 0xFFFFFFF8) + 1;
  }
  else
  {
    masked_bits = -1;
  }
  masked_bits_2 = masked_bits;
LABEL_13:
  cached_rand_result = saved_rand_result;
  element_index = 0;
  do
  {
    if ( iteration_count )
    {
      rand_result_3 = 250 * (rand() % 5 + 4);
      scratch_buffer[element_index] = rand_result_3;
      if ( element_index > cached_rand_result )
      {
        rand_result_3 += 250 * (rand() % 5);
        scratch_buffer[element_index] = rand_result_3;
      }
      if ( integer_sum_2 == 23 )
        scratch_buffer[element_index] = 4 * rand_result_3;
    }
    else
    {
      scratch_buffer[element_index] = 100;
    }
    ++iteration_count;
    ++element_index;
  }
  while ( iteration_count < (int)input_value );
  cached_input_value = input_value;
  if ( (_DWORD)input_value )
  {
    element_index_2 = 0;
    do
    {
      unused_written_slot_2 = 1065353216;
      matrix[0] = xmmword_140278D30;
      scaled_index = 5873LL * (int)input_cursor[element_index_2];
      matrix[1] = xmmword_140278D30;
      weighted_sum = *(float *)&dword_140404A6C[scaled_index + 283831498];
      weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 283831499];
      weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index + 283831500];
      sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[scaled_index + 283831497]));
      sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container(1078530011));
      scaled_value = *(float *)matrix;
      weighted_sum_4 = *((float *)matrix + 1);
      weighted_sum_5 = *((float *)matrix + 2);
      weighted_sum_6 = (float)(*(float *)matrix * 0.5) + weighted_sum;
      *(float *)&state_address_2 = weighted_sum_6;
      weighted_sum_7 = (float)(*((float *)matrix + 1) * 0.5) + weighted_sum_2;
      weighted_sum_8 = (float)(*((float *)matrix + 2) * 0.5) + weighted_sum_3;
      *((float *)&state_address_2 + 1) = weighted_sum_7;
      unused_written_slot = weighted_sum_8;
      if ( element_index_2 )
      {
        if ( element_index_2 <= cached_rand_result )
        {
          rand_result_4 = rand() % 3 + 2;
          if ( integer_sum_2 == 23 )
            rand_result_4 += rand() % 3 + 2;
          for ( i = 0; i < rand_result_4; unused_written_slot = weighted_sum_8 )
          {
            if ( (i & 3) == 0 )
            {
              *(float *)&state_address_2 = weighted_sum_6 + (float)(scaled_value * 0.75);
              *((float *)&state_address_2 + 1) = weighted_sum_7 + (float)(weighted_sum_4 * 0.75);
              unused_written_slot = weighted_sum_8 + (float)(weighted_sum_5 * 0.75);
              sr_CreateItem(15, (float *)&state_address_2, nullptr, (float *)matrix);
              weighted_sum_6 = (float)(*(float *)matrix * 0.75) + (float)(weighted_sum_6 + (float)(scaled_value * 0.75));
              weighted_sum_7 = (float)(*((float *)matrix + 1) * 0.75) + (float)(weighted_sum_7 + (float)(weighted_sum_4 * 0.75));
              weighted_sum_8 = (float)(*((float *)matrix + 2) * 0.75) + (float)(weighted_sum_8 + (float)(weighted_sum_5 * 0.75));
              *(float *)&state_address_2 = weighted_sum_6;
              *((float *)&state_address_2 + 1) = weighted_sum_7;
              unused_written_slot = weighted_sum_8;
            }
            sr_CreateItem(17, (float *)&state_address_2, nullptr, (float *)matrix);
            scaled_value = *(float *)matrix;
            weighted_sum_4 = *((float *)matrix + 1);
            scaled_value_4 = *(float *)matrix;
            weighted_sum_5 = *((float *)matrix + 2);
            ++i;
            dword_140404A6C[scaled_index + 283831504] -= 250;
            weighted_sum_6 = weighted_sum_6 + (float)(scaled_value_4 * 0.5);
            *(float *)&state_address_2 = weighted_sum_6;
            weighted_sum_7 = weighted_sum_7 + (float)(weighted_sum_4 * 0.5);
            *((float *)&state_address_2 + 1) = weighted_sum_7;
            weighted_sum_8 = weighted_sum_8 + (float)(weighted_sum_5 * 0.5);
          }
        }
      }
      else if ( masked_bits == -1 )
      {
        createitem_result_2 = sr_CreateItem(integer_sum_2, (float *)&state_address_2, nullptr, (float *)matrix);
        scaled_value_2 = *(float *)matrix;
        scaled_value_3 = *(float *)matrix;
        g_1B4657D8C = createitem_result_2;
        dword_140404A6C[scaled_index + 283831504] -= scratch_buffer[0];
        weighted_sum_9 = (float)((float)(scaled_value_3 * 0.5) + weighted_sum_6) + (float)(scaled_value_2 * 0.75);
        *(float *)&state_address_2 = weighted_sum_9;
        weighted_sum_10 = (float)((float)(*((float *)matrix + 1) * 0.5) + weighted_sum_7) + (float)(*((float *)matrix + 1) * 0.75);
        *((float *)&state_address_2 + 1) = weighted_sum_10;
        weighted_sum_11 = (float)((float)(*((float *)matrix + 2) * 0.5) + weighted_sum_8) + (float)(*((float *)matrix + 2) * 0.75);
        unused_written_slot = weighted_sum_11;
        sr_CreateItem(15, (float *)&state_address_2, nullptr, (float *)matrix);
        *(float *)&state_address_2 = (float)(*(float *)matrix * 0.75) + weighted_sum_9;
        *((float *)&state_address_2 + 1) = (float)(*((float *)matrix + 1) * 0.75) + weighted_sum_10;
        unused_written_slot = (float)(*((float *)matrix + 2) * 0.75) + weighted_sum_11;
      }
      else
      {
        scaled_index_2 = dword_140404A6C[19 * masked_bits + 487148757];
        LODWORD(state_address_2) = dword_140404A6C[19 * masked_bits + 487148756];
        unused_written_slot = *(float *)&dword_140404A6C[19 * masked_bits + 487148758];
        HIDWORD(state_address_2) = scaled_index_2;
        g_1B4657D8C = sr_CreateItem(integer_sum_2, (float *)&state_address_2, nullptr, (float *)matrix);
        dword_140404A6C[scaled_index + 283831504] -= scratch_buffer[0];
        createitem_result = sr_CreateItem(15, (float *)&state_address_2, nullptr, (float *)matrix);
        child = g_1B4657D8C;
        saved_createitem_result = createitem_result;
        scaled_index_3 = 1760LL * createitem_result;
        dword_140404A6C[scaled_index_3 + 278845898] = 16;
        sr_item_transfer(createitem_result, child, -1, 0);
        comparison_result = game_connected == 0;
        dword_140404A6C[scaled_index_3 + 278845898] = 15;
        if ( !comparison_result && (unsigned int)saved_createitem_result <= 0x3FF )
          ++dword_140404A6C[saved_createitem_result + 280648157];
      }
      ++element_index_2;
    }
    while ( element_index_2 < cached_input_value );
    state_word = g_1B4657D8C;
    state_word_2 = g_1B4657C80;
    element_index_3 = 0;
    saved_masked_bits = masked_bits_2;
    cached_integer_sum = cached_integer_sum_2;
    state_address_2 = &g_183EC0358;
    scaled_index_4 = dword_140404A6C[1760 * g_1B4657D8C + 278845898];
    do
    {
      record_pointer = input_cursor;
      mission = 0;
      record_byte_offset = 0;
      corporation = (int)input_cursor[element_index_3];
      state_address = &state_address_2[5873 * corporation];
      while ( *(state_address - 279) )
      {
        if ( !*state_address )
        {
          ++record_byte_offset;
          ++mission;
          break;
        }
        if ( !state_address[279] )
        {
          record_byte_offset += 2;
          mission += 2;
          break;
        }
        if ( !state_address[558] )
        {
          record_byte_offset += 3;
          mission += 3;
          break;
        }
        record_byte_offset += 4;
        state_address += 1116;
        mission += 4;
        if ( record_byte_offset >= 16 )
          break;
      }
      scaled_index_5 = 5873LL * (int)input_cursor[element_index_3];
      scaled_index_6 = scaled_index_5 * 4 + 1116 * record_byte_offset;
      *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_6) = 1;
      *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_6) = state_word_2;
      if ( element_index_3 )
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_6) = (element_index_3 > cached_rand_result) + 3;
      else
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_6) = 2;
      *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_6) = scratch_buffer[element_index_3];
      *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_6) = state_word;
      *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_6) = scaled_index_4;
      *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_6) = cached_integer_sum;
      *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_6) = *record_pointer;
      *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_6) = 0;
      *(unsigned int *)((char *)&g_183EBFF44 + scaled_index_6) = -1;
      if ( element_index_3 )
      {
        if ( element_index_3 <= cached_rand_result )
          *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_6) = -dword_140404A6C[scaled_index_5 + 283831504];
      }
      else
      {
        *(unsigned int *)((char *)&g_183EBFF44 + scaled_index_6) = saved_masked_bits;
      }
      sr_event_mission_update(corporation, mission);
      ++element_index_3;
    }
    while ( element_index_3 < cached_input_value );
  }
  else
  {
    state_word_2 = g_1B4657C80;
  }
  g_1B4657C80 = state_word_2 + 1;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_8
#undef state_address_2
#undef unused_written_slot
#undef masked_bits_2
#undef cached_integer_sum_2
#undef input_cursor
#undef cached_input_value
#undef matrix
#undef unused_written_slot_2
#undef scratch_buffer
#undef unused_frame_slot_152

//----- (000000014005A990) ----------------------------------------------------
__int64            sub_14005A990(__int64 a1, int a2, __int64 a3)
{
  __int64 input_value;
  __int64 float_word;
  unsigned int integer_sum;
  __int64 element_index;
  __int64 remaining_count;
  unsigned int state_word;
  int running_total;
  unsigned int integer_sum_2;
  unsigned int integer_sum_3;
  __int64 i;
  __int64 masked_bits;
  int table_value;
  float state_address;
  float weighted_sum;
  unsigned int state_word_2;
  __int64 iteration_count;
  __int64 corporation;
  unsigned __int64 integer_sum_4;
  unsigned __int64 saved_iteration_count;
  int mission;
  __int64 record_byte_offset;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *saved_state_address;
  __int64 scaled_index_2;
  __int64 packed_word_bits;
  __m128i converted_vector;
  __int64 cached_input_value;
  float converted_vector_2;
  int mission_2;
  __int64 record_byte_offset_2;
  unsigned int cached_table_value;
  float cached_table_value_2;
  __int64 scaled_index_3;
  unsigned int state_word_3;
  __int64 scaled_index_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A990[176];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14005A990 + 8)) /* [rsp+0h] */
#define cached_integer_sum (*(unsigned int (*))(void *)(sr_frame_14005A990 + 40)) /* [rsp+20h] */
#define table_value_2 (*(unsigned int (*))(void *)(sr_frame_14005A990 + 44)) /* [rsp+24h] */
#define table_value_3 (*(int (*))(void *)(sr_frame_14005A990 + 48)) /* [rsp+28h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_14005A990 + 56)) /* [rsp+30h] */
#define state_address_3 (*(__int64 (*))(void *)(sr_frame_14005A990 + 64)) /* [rsp+38h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14005A990 + 72)) /* [rsp+40h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_14005A990 + 80)) /* [rsp+48h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14005A990 + 112)) /* [rsp+68h] */
#define scratch_buffer_2 (*(_DWORD (*)[4])(void *)(sr_frame_14005A990 + 120)) /* [rsp+70h] */
#define callee_output_word (*(_DWORD (*)[8])(void *)(sr_frame_14005A990 + 136)) /* [rsp+80h] */
#define unused_frame_slot_168 (*(__int64 (*))(void *)(sr_frame_14005A990 + 168)) /* [rsp+A0h] */

  input_value = a2;
  float_word = a3;
  input_value_2 = a3;
  if ( a2 >= 3 )
  {
    integer_sum = game_day_time + 414000;
    if ( (signed int)(game_day_time + 414000) > 3870000 )
      integer_sum = 3870000;
    element_index = 0;
    cached_integer_sum = integer_sum;
    remaining_count = 3;
    do
    {
      state_word = g_1B4657C84;
      running_total = 1000;
      scratch_buffer_2[element_index] = 1000;
      integer_sum_2 = state_word + 19;
      integer_sum_3 = state_word + 1;
      callee_output_word[element_index] = integer_sum_2;
      if ( (int)(integer_sum_3 + 19) > 24 )
        integer_sum_3 = 0;
      g_1B4657C84 = integer_sum_3;
      if ( (rand() & 1) == 0 )
      {
        running_total = 1500;
        scratch_buffer_2[element_index] = 1500;
      }
      if ( (rand() & 1) == 0 )
      {
        running_total += 500;
        scratch_buffer_2[element_index] = running_total;
      }
      if ( (rand() & 3) == 0 )
      {
        running_total += 500;
        scratch_buffer_2[element_index] = running_total;
      }
      if ( (rand() & 3) == 0 )
      {
        running_total += 1000;
        scratch_buffer_2[element_index] = running_total;
      }
      if ( integer_sum_2 == 23 )
        scratch_buffer_2[element_index] = 5 * running_total;
      ++element_index;
      --remaining_count;
    }
    while ( remaining_count );
    for ( i = 0; i < 3; ++i )
    {
      unused_written_slot_2 = 1065353216;
      scratch_buffer[0] = xmmword_140278D30;
      scratch_buffer[1] = xmmword_140278D30;
      masked_bits = *(int *)((char *)&callee_output_word[i] + float_word - (_QWORD)callee_output_word);
      table_value = callee_output_word[i];
      state_address = (float)(*(float *)&dword_140404A6C[5873 * masked_bits + 283831492]
                  + *(float *)&dword_140404A6C[5873 * masked_bits + 283831495])
          * 0.5;
      *(float *)&state_address_3 = (float)(*(float *)&dword_140404A6C[5873 * masked_bits + 283831494]
                             + *(float *)&dword_140404A6C[5873 * masked_bits + 283831491])
                     * 0.5;
      weighted_sum = *(float *)&dword_140404A6C[5873 * masked_bits + 283831493] + *(float *)&dword_140404A6C[5873 * masked_bits + 283831496];
      *((float *)&state_address_3 + 1) = state_address;
      unused_written_slot = weighted_sum * 0.5;
      dword_140404A6C[i + 487148744] = sr_CreateItem(table_value, (float *)&state_address_3, nullptr, (float *)scratch_buffer);
      state_word_2 = g_1B4657C80;
      callee_output_word[i + 4] = g_1B4657C80;
      g_1B4657C80 = state_word_2 + 1;
    }
    state_address_3 = input_value;
    if ( (_DWORD)input_value )
    {
      table_value_3 = scratch_buffer_2[2];
      iteration_count = 0;
      table_value_2 = callee_output_word[6];
      do
      {
        corporation = *(int *)(float_word + 4 * iteration_count);
        integer_sum_4 = iteration_count++;
        saved_iteration_count = iteration_count;
        if ( iteration_count >= 3 )
          saved_iteration_count = iteration_count % 3uLL;
        mission = 0;
        record_byte_offset = 0;
        scaled_index = 5873 * corporation;
        state_address_2 = &dword_140404A6C[5873 * corporation + 283831867];
        saved_state_address = state_address_2;
        while ( *(saved_state_address - 279) )
        {
          if ( !*saved_state_address )
          {
            ++record_byte_offset;
            ++mission;
            break;
          }
          if ( !saved_state_address[279] )
          {
            record_byte_offset += 2;
            mission += 2;
            break;
          }
          if ( !saved_state_address[558] )
          {
            record_byte_offset += 3;
            mission += 3;
            break;
          }
          record_byte_offset += 4;
          saved_state_address += 1116;
          mission += 4;
          if ( record_byte_offset >= 16 )
            break;
        }
        crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * mission + 283831588 + scaled_index]), 0, 0x45Cu);
        scaled_index_2 = scaled_index * 4 + 1116 * record_byte_offset;
        *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_2) = callee_output_word[saved_iteration_count + 4];
        *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_2) = 1;
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_2) = 6 - (integer_sum_4 < 3);
        packed_word_bits = (int)dword_140404A6C[saved_iteration_count + 487148744];
        *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_2) = packed_word_bits;
        *(unsigned int *)((char *)&g_183EBFF44 + scaled_index_2) = -1;
        *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_2) = dword_140404A6C[1760 * packed_word_bits + 278845898];
        LODWORD(packed_word_bits) = scratch_buffer_2[saved_iteration_count];
        *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_2) = packed_word_bits;
        converted_vector = _mm_cvtsi32_si128(packed_word_bits);
        *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_2) = cached_integer_sum;
        cached_input_value = input_value_2;
        converted_vector_2 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
        *(float *)((char *)&g_183EBFF54 + scaled_index_2) = converted_vector_2 * -0.0000125;
        *(float *)((char *)&g_183EBFF50 + scaled_index_2) = converted_vector_2 * 0.000024999999;
        *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_2) = *(_DWORD *)(cached_input_value + 4 * saved_iteration_count);
        *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_2) = 0;
        sr_event_mission_update(corporation, mission);
        if ( !integer_sum_4 && (rand() & 7) == 0 )
        {
          mission_2 = 0;
          record_byte_offset_2 = 0;
          while ( *(state_address_2 - 279) )
          {
            if ( !*state_address_2 )
            {
              ++record_byte_offset_2;
              ++mission_2;
              break;
            }
            if ( !state_address_2[279] )
            {
              record_byte_offset_2 += 2;
              mission_2 += 2;
              break;
            }
            if ( !state_address_2[558] )
            {
              record_byte_offset_2 += 3;
              mission_2 += 3;
              break;
            }
            record_byte_offset_2 += 4;
            state_address_2 += 1116;
            mission_2 += 4;
            if ( record_byte_offset_2 >= 16 )
              break;
          }
          crt_memset((void *)(uintptr_t)(&dword_140404A6C[279 * mission_2 + 283831588 + scaled_index]), 0, 0x45Cu);
          cached_table_value = table_value_3;
          cached_table_value_2 = (float)table_value_3;
          scaled_index_3 = 1116 * record_byte_offset_2 + 23492 * corporation;
          *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_3) = table_value_2;
          state_word_3 = g_1B4657D94;
          scaled_index_4 = 1760LL * (int)g_1B4657D94;
          *(float *)((char *)&g_183EBFF50 + scaled_index_3) = cached_table_value_2 * 0.000024999999;
          *(float *)((char *)&g_183EBFF54 + scaled_index_3) = cached_table_value_2 * -0.0000125;
          *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_3) = state_word_3;
          *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_3) = 1;
          *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_3) = 6;
          *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_3) = cached_table_value;
          *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_3) = dword_140404A6C[scaled_index_4 + 278845898];
          *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_3) = cached_integer_sum;
          *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_3) = *(_DWORD *)(input_value_2 + 8);
          *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_3) = 0;
          sr_event_mission_update(corporation, mission_2);
        }
        float_word = input_value_2;
      }
      while ( iteration_count < state_address_3 );
    }
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_8
#undef cached_integer_sum
#undef table_value_2
#undef table_value_3
#undef input_value_2
#undef state_address_3
#undef unused_written_slot
#undef scratch_buffer
#undef unused_written_slot_2
#undef scratch_buffer_2
#undef callee_output_word
#undef unused_frame_slot_168

//----- (000000014005AF40) ----------------------------------------------------
void            sub_14005AF40(__int64 a1, int a2, char *a3)
{
  int rand_result;
  int saved_rand_result;
  int saved_float_word;
  int *buffer_cursor;
  unsigned int integer_sum;
  int iteration_count;
  unsigned int integer_sum_2;
  unsigned int integer_sum_3;
  int running_total;
       char *saved_state_address;
  __int64 cached_float_word;
  __int64 element_index;
  int iteration_count_2;
  _DWORD *state_address;
  __int64 masked_bits;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  int saved_packed_word_bits;
  unsigned int createitem_result;
  float scaled_value;
  float weighted_sum_7;
  int remaining_amount;
  signed int createitem_result_2;
  __int64 remaining_count;
  int createitem_result_3;
  __int64 scaled_index;
  int remaining_amount_2;
  __int64 element_index_2;
  int iteration_count_3;
  unsigned __int64 saved_pair64_result;
  int mission;
  int *state_address_2;
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 saved_loaded_word;
  unsigned int *state_address_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  unsigned int state_word;
  int integer_sum_4;
  __int64 scaled_index_4;
  _BYTE *state_address_4;
  int loaded_word_2;
       char *saved_state_address_2;
  int scaled_index_5;
  __int64 cached_float_word_2;
  unsigned int *record_pointer;
  int integer_quotient;
  char *destination_text;
  __int64 scaled_index_6;
  float product_difference;
  unsigned int cached_integer_sum;
  unsigned int scaled_index_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005AF40[1280];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 0)) /* [rsp+8h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_14005AF40 + 64)) /* [rsp+48h] */
#define pair64_result (*(unsigned __int64 (*))(void *)(sr_frame_14005AF40 + 72)) /* [rsp+50h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_14005AF40 + 80)) /* [rsp+58h] */
#define cached_float_word_3 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 88)) /* [rsp+60h] */
#define cached_integer_sum_2 (*(signed int (*))(void *)(sr_frame_14005AF40 + 96)) /* [rsp+68h] */
#define input_value (*(int (*))(void *)(sr_frame_14005AF40 + 100)) /* [rsp+6Ch] */
#define state_address_5 (*(char * (*))(void *)(sr_frame_14005AF40 + 104)) /* [rsp+70h] */
#define input_cursor (*(unsigned int * (*))(void *)(sr_frame_14005AF40 + 112)) /* [rsp+78h] */
#define corporation (*(int (*))(void *)(sr_frame_14005AF40 + 120)) /* [rsp+80h] */
#define saved_remaining_amount (*(int (*))(void *)(sr_frame_14005AF40 + 128)) /* [rsp+88h] */
#define frame_word_at_132 (*(int (*))(void *)(sr_frame_14005AF40 + 132)) /* [rsp+8Ch] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_14005AF40 + 160)) /* [rsp+A8h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14005AF40 + 192)) /* [rsp+C8h] */
#define callee_output_word (*(_DWORD (*)[10])(void *)(sr_frame_14005AF40 + 200)) /* [rsp+D0h] */
#define source_text (*(char (*)[1024])(void *)(sr_frame_14005AF40 + 240)) /* [rsp+F8h] */
#define unused_frame_slot_1264 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 1264)) /* [rsp+4F8h] */

  if ( a2 < 2 )
    return;
  input_cursor = (unsigned int *)a3;
  input_value = a2;
  rand_result = ((rand() & 1) == 0) + 1;
  saved_rand_result = rand_result;
  if ( a2 > 3 && (rand() & 1) == 0 )
    saved_rand_result = rand_result + 1;
  saved_float_word = a2 - 1;
  buffer_cursor = callee_output_word;
  if ( saved_rand_result <= a2 - 1 )
    saved_float_word = saved_rand_result;
  integer_sum = game_day_time + 522000;
  if ( (signed int)(game_day_time + 522000) > 3870000 )
    integer_sum = 3870000;
  cached_integer_sum_2 = integer_sum;
  iteration_count = 0;
  integer_sum_2 = g_1B4657C84 + 19;
  integer_sum_3 = g_1B4657C84 + 1;
  LODWORD(packed_word_bits) = g_1B4657C84 + 19;
  if ( (signed int)(g_1B4657C84 + 20) > 24 )
    integer_sum_3 = 0;
  g_1B4657C84 = integer_sum_3;
  do
  {
    if ( iteration_count )
    {
      running_total = 2000;
      *buffer_cursor = 2000;
      if ( (rand() & 1) == 0 )
      {
        running_total = 2500;
        *buffer_cursor = 2500;
      }
      if ( (rand() & 3) == 0 )
      {
        running_total += 500;
        *buffer_cursor = running_total;
      }
      if ( (rand() & 3) == 0 )
      {
        running_total += 500;
        *buffer_cursor = running_total;
      }
      if ( (rand() & 3) == 0 )
      {
        running_total += 500;
        *buffer_cursor = running_total;
      }
      if ( integer_sum_2 == 23 )
        *buffer_cursor = 5 * running_total;
    }
    else
    {
      *buffer_cursor = 0;
    }
    ++iteration_count;
    ++buffer_cursor;
  }
  while ( iteration_count < a2 );
  saved_state_address = (     char *)(a3 - (char *)callee_output_word);
  cached_float_word = saved_float_word;
  state_address_5 = (     char *)(a3 - (char *)callee_output_word);
  element_index = 0;
  cached_float_word_3 = saved_float_word;
  iteration_count_2 = 0;
  do
  {
    matrix[0] = xmmword_140278D30;
    unused_written_slot_2 = 1065353216;
    state_address = &callee_output_word[element_index];
    masked_bits = *(int *)&saved_state_address[(_QWORD)state_address];
    matrix[1] = xmmword_140278D30;
    weighted_sum = *(float *)&dword_140404A6C[5873 * masked_bits + 283831498];
    weighted_sum_2 = *(float *)&dword_140404A6C[5873 * masked_bits + 283831499];
    weighted_sum_3 = *(float *)&dword_140404A6C[5873 * masked_bits + 283831500];
    sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container(sr_text_float_bits((float)(*(float *)&dword_140404A6C[5873 * masked_bits + 283831497] - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
    weighted_sum_4 = weighted_sum - (float)(*(float *)matrix * 1.5);
    *(float *)&pair64_result = weighted_sum_4;
    weighted_sum_5 = weighted_sum_2 - (float)(*((float *)matrix + 1) * 1.5);
    *((float *)&pair64_result + 1) = weighted_sum_5;
    weighted_sum_6 = weighted_sum_3 - (float)(*((float *)matrix + 2) * 1.5);
    *(float *)&unused_written_slot = weighted_sum_6;
    if ( !iteration_count_2 )
    {
      saved_packed_word_bits = packed_word_bits;
      createitem_result = sr_CreateItem(packed_word_bits, (float *)&pair64_result, nullptr, (float *)matrix);
      scaled_value = *(float *)matrix * 0.75;
      g_1B4657D8C = createitem_result;
      weighted_sum_7 = *((float *)matrix + 1) * 0.75;
      *(&saved_remaining_amount + element_index) = 0;
      *(float *)&pair64_result = scaled_value + weighted_sum_4;
      *((float *)&pair64_result + 1) = weighted_sum_7 + weighted_sum_5;
      *(float *)&unused_written_slot = (float)(*((float *)matrix + 2) * 0.75) + weighted_sum_6;
      goto LABEL_52;
    }
    *(&saved_remaining_amount + element_index) = 0;
    if ( element_index <= cached_float_word )
    {
      remaining_amount = *state_address - 500;
      *(&saved_remaining_amount + element_index) = remaining_amount;
      if ( remaining_amount >= 5000 )
      {
        if ( (rand() & 1) != 0 )
        {
LABEL_33:
          if ( (rand() & 1) != 0 )
            goto LABEL_36;
          remaining_amount -= 1000;
          *(&saved_remaining_amount + element_index) = remaining_amount;
LABEL_35:
          if ( remaining_amount < 1000 )
          {
LABEL_40:
            if ( remaining_amount > 0 )
            {
              do
              {
                createitem_result_2 = sr_CreateItem(16, (float *)&pair64_result, nullptr, (float *)matrix);
                if ( createitem_result_2 != -1 )
                {
                  remaining_count = 4;
                  do
                  {
                    if ( remaining_amount > 0 )
                    {
                      createitem_result_3 = sr_CreateItem(18, (float *)&pair64_result, nullptr, (float *)matrix);
                      remaining_amount -= 100;
                      scaled_index = 1760LL * createitem_result_3;
                      dword_140404A6C[scaled_index + 278846062] = 0;
                      for ( dword_140404A6C[scaled_index + 278846063] = 5; remaining_amount > 0; remaining_amount -= 100 )
                      {
                        if ( !(unsigned int)sr_item_insert_cash_bill(createitem_result_3, 0, 5) )
                          break;
                      }
                      sr_item_transfer(createitem_result_2, createitem_result_3, -1, 0);
                    }
                    --remaining_count;
                  }
                  while ( remaining_count );
                }
                weighted_sum_4 = weighted_sum_4 + (float)(*(float *)matrix * 0.75);
                weighted_sum_5 = weighted_sum_5 + (float)(*((float *)matrix + 1) * 0.75);
                pair64_result = __PAIR64__(LODWORD(weighted_sum_5), LODWORD(weighted_sum_4));
                weighted_sum_6 = weighted_sum_6 + (float)(*((float *)matrix + 2) * 0.75);
                *(float *)&unused_written_slot = weighted_sum_6;
              }
              while ( remaining_amount > 0 );
              cached_float_word = cached_float_word_3;
            }
            goto LABEL_51;
          }
LABEL_36:
          if ( (rand() & 1) != 0 || (*(&saved_remaining_amount + element_index) = remaining_amount - 500, remaining_amount -= 500, remaining_amount >= 1000) )
          {
            if ( (rand() & 3) == 0 )
            {
              remaining_amount -= 500;
              *(&saved_remaining_amount + element_index) = remaining_amount;
            }
          }
          goto LABEL_40;
        }
        remaining_amount -= 2000;
        *(&saved_remaining_amount + element_index) = remaining_amount;
      }
      if ( remaining_amount < 3000 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_51:
    saved_packed_word_bits = packed_word_bits;
LABEL_52:
    saved_state_address = state_address_5;
    ++iteration_count_2;
    ++element_index;
  }
  while ( iteration_count_2 < input_value );
  remaining_amount_2 = frame_word_at_132;
  saved_remaining_amount = frame_word_at_132;
  if ( frame_word_at_132 < 5000 )
    goto LABEL_56;
  if ( (rand() & 1) != 0 )
    goto LABEL_57;
  remaining_amount_2 -= 2000;
  saved_remaining_amount = remaining_amount_2;
LABEL_56:
  if ( remaining_amount_2 >= 3000 )
  {
LABEL_57:
    if ( (rand() & 1) == 0 )
    {
      remaining_amount_2 -= 1000;
      saved_remaining_amount = remaining_amount_2;
      goto LABEL_59;
    }
LABEL_60:
    if ( (rand() & 3) == 3 || (remaining_amount_2 -= 500, saved_remaining_amount = remaining_amount_2, remaining_amount_2 >= 1000) )
    {
      if ( (rand() & 1) == 0 )
        saved_remaining_amount = remaining_amount_2 - 500;
    }
  }
  else
  {
LABEL_59:
    if ( remaining_amount_2 >= 1000 )
      goto LABEL_60;
  }
  element_index_2 = 0;
  iteration_count_3 = 0;
  state_address_5 = (     char *)&dword_140404A6C[1268 * saved_packed_word_bits + 278521297];
  LODWORD(packed_word_bits) = cached_integer_sum_2 / 3600;
  saved_pair64_result = (char *)input_cursor - (char *)callee_output_word;
  pair64_result = (char *)input_cursor - (char *)callee_output_word;
  do
  {
    mission = 0;
    state_address_2 = &callee_output_word[element_index_2];
    record_byte_offset = 0;
    loaded_word = *(int *)((char *)state_address_2 + saved_pair64_result);
    corporation = loaded_word;
    saved_loaded_word = loaded_word;
    state_address_3 = &dword_140404A6C[5873 * loaded_word + 283831867];
    while ( *(state_address_3 - 279) )
    {
      if ( !*state_address_3 )
      {
        ++record_byte_offset;
        ++mission;
        break;
      }
      if ( !state_address_3[279] )
      {
        record_byte_offset += 2;
        mission += 2;
        break;
      }
      if ( !state_address_3[558] )
      {
        record_byte_offset += 3;
        mission += 3;
        break;
      }
      record_byte_offset += 4;
      state_address_3 += 1116;
      mission += 4;
      if ( record_byte_offset >= 16 )
        break;
    }
    scaled_index_2 = 23492 * saved_loaded_word;
    scaled_index_3 = 23492 * saved_loaded_word + 1116LL * mission;
    crt_memset((void *)(uintptr_t)((unsigned int *)((char *)&g_183EBFEFC + scaled_index_3)), 0, 0x45Cu);
    state_word = g_1B4657C80;
    integer_sum_4 = mission + 1;
    scaled_index_4 = scaled_index_2 + 1116 * record_byte_offset;
    state_address_4 = (char *)&g_183EBFF58 + scaled_index_3;
    loaded_word_2 = *state_address_2;
    *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_4) = 1;
    *(unsigned int *)((char *)&g_183EBFF04 + scaled_index_4) = state_word;
    if ( iteration_count_3 )
    {
      cached_float_word_2 = cached_float_word_3;
      record_pointer = input_cursor;
      if ( element_index_2 > cached_float_word_3 )
      {
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 4;
        crt_sprintf(
          state_address_4,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Acquire the disk by any means neccessary.\n"
          "\n"
          "%s value:               $%d Bonus",
          integer_sum_4,
          off_1402B2890[*record_pointer],
          state_address_5,
          loaded_word_2);
      }
      else
      {
        *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 3;
        crt_sprintf(
          state_address_4,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Negotiate the best terms and execute the deal.\n"
          "You have been provided with $%d.\n"
          "\n"
          "%s value:               $%d Bonus",
          integer_sum_4,
          off_1402B2890[*record_pointer],
          *(&saved_remaining_amount + element_index_2),
          state_address_5,
          loaded_word_2);
      }
    }
    else
    {
      saved_state_address_2 = state_address_5;
      scaled_index_5 = *(&saved_remaining_amount + element_index_2);
      *(unsigned int *)((char *)&g_183EBFF08 + scaled_index_4) = 2;
      crt_sprintf(
        state_address_4,
        "Transaction(%d):\n"
        "We have acquired a disk that has information that can be\n"
        "traded for money with another corporation.\n"
        "The corporation expects at least $%d from this deal.\n"
        "\n"
        "%s value:               $%d Bonus",
        integer_sum_4,
        scaled_index_5,
        saved_state_address_2,
        loaded_word_2);
      cached_float_word_2 = cached_float_word_3;
    }
    integer_quotient = (int)packed_word_bits / 60 % -12;
    if ( !integer_quotient )
      integer_quotient = 12;
    crt_sprintf(source_text, "\nThis mission expires at %d:%d%d\n\n", integer_quotient, (int)packed_word_bits % 60 / 10 % 6, (int)packed_word_bits % 60 % 10);
    destination_text = state_address_4 - 1;
    while ( *++destination_text != 0 )
      ;
    strcpy(destination_text, source_text);
    sr_event_mission_text(corporation, mission);
    scaled_index_6 = 1760LL * (int)g_1B4657D8C;
    *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_4) = g_1B4657D8C;
    *(unsigned int *)((char *)&g_183EBFF44 + scaled_index_4) = -1;
    *(unsigned int *)((char *)&g_183EBFF38 + scaled_index_4) = dword_140404A6C[scaled_index_6 + 278845898];
    if ( iteration_count_3 )
    {
      *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_4) = loaded_word_2;
      product_difference = (float)loaded_word_2 * -0.0000125;
      *(float *)((char *)&g_183EBFF50 + scaled_index_4) = (float)loaded_word_2 * 0.000024999999;
    }
    else
    {
      *(unsigned int *)((char *)&g_183EBFF3C + scaled_index_4) = 0;
      product_difference = 0.0;
      *(unsigned int *)((char *)&g_183EBFF50 + scaled_index_4) = 0;
    }
    cached_integer_sum = cached_integer_sum_2;
    *(float *)((char *)&g_183EBFF54 + scaled_index_4) = product_difference;
    ++iteration_count_3;
    *(unsigned int *)((char *)&g_183EBFF40 + scaled_index_4) = cached_integer_sum;
    cached_float_word_3 = cached_float_word_2;
    *(unsigned int *)((char *)&g_183EBFF18 + scaled_index_4) = *input_cursor;
    scaled_index_7 = *(&saved_remaining_amount + element_index_2++);
    *(unsigned int *)((char *)&g_183EBFF48 + scaled_index_4) = scaled_index_7;
    saved_pair64_result = pair64_result;
  }
  while ( iteration_count_3 < input_value );
  ++g_1B4657C80;
}
#undef unused_frame_slot_0
#undef packed_word_bits
#undef pair64_result
#undef unused_written_slot
#undef cached_float_word_3
#undef cached_integer_sum_2
#undef input_value
#undef state_address_5
#undef input_cursor
#undef corporation
#undef saved_remaining_amount
#undef frame_word_at_132
#undef matrix
#undef unused_written_slot_2
#undef callee_output_word
#undef source_text
#undef unused_frame_slot_1264

//----- (000000014005B840) ----------------------------------------------------
double            sub_14005B840(int a1, int a2)
{
  __int64 record_word_offset;
  unsigned int cached_mesh_triangle_count;
  unsigned int integer_sum;
  __int64 table_value;
  __int64 input_value;
  __int64 scaled_index;
  unsigned int *record_byte_offset;
  unsigned __int64 remaining_count;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 remaining_count_2;
  unsigned int *state_address;
  __int64 scaled_index_7;
  unsigned int scaled_index_8;
  int table_value_2;
  __int64 remaining_count_3;
  unsigned int *state_address_2;
  unsigned int loaded_word;
  unsigned int table_value_3;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  signed int integer_difference;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 integer_difference_2;
  __int64 scaled_index_15;
  __int64 scaled_index_16;

  record_word_offset = 2310LL * a2;
  mesh_vertex_count = 0;
  g_16AC43DB0 = 0;
  cached_mesh_triangle_count = 0;
  g_16AD03DB4 = 0;
  integer_sum = 0;
  mesh_triangle_count = 0;
  table_value = (int)dword_140404A6C[record_word_offset + 432531270];
  input_value = a2;
  scaled_index = 0;
  if ( table_value >= 4 )
  {
    record_byte_offset = &dword_140404A6C[record_word_offset + 432531273];
    remaining_count = ((unsigned __int64)(table_value - 4) >> 2) + 1;
    scaled_index = 4 * remaining_count;
    do
    {
      scaled_index_2 = (int)(3 * integer_sum);
      scaled_index_3 = *(record_byte_offset - 2);
      record_byte_offset += 12;
      dword_140404A6C[scaled_index_2 + 177167567] = scaled_index_3;
      dword_140404A6C[scaled_index_2 + 177167568] = *(record_byte_offset - 13);
      dword_140404A6C[scaled_index_2 + 177167569] = *(record_byte_offset - 12);
      ++mesh_vertex_count;
      scaled_index_4 = 3 * mesh_vertex_count;
      dword_140404A6C[scaled_index_4 + 177167567] = *(record_byte_offset - 11);
      dword_140404A6C[scaled_index_4 + 177167568] = *(record_byte_offset - 10);
      dword_140404A6C[scaled_index_4 + 177167569] = *(record_byte_offset - 9);
      ++mesh_vertex_count;
      scaled_index_5 = 3 * mesh_vertex_count;
      dword_140404A6C[scaled_index_5 + 177167567] = *(record_byte_offset - 8);
      dword_140404A6C[scaled_index_5 + 177167568] = *(record_byte_offset - 7);
      dword_140404A6C[scaled_index_5 + 177167569] = *(record_byte_offset - 6);
      ++mesh_vertex_count;
      scaled_index_6 = 3 * mesh_vertex_count;
      dword_140404A6C[scaled_index_6 + 177167567] = *(record_byte_offset - 5);
      dword_140404A6C[scaled_index_6 + 177167568] = *(record_byte_offset - 4);
      dword_140404A6C[scaled_index_6 + 177167569] = *(record_byte_offset - 3);
      integer_sum = ++mesh_vertex_count;
      --remaining_count;
    }
    while ( remaining_count );
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  if ( scaled_index < table_value )
  {
    remaining_count_2 = table_value - scaled_index;
    state_address = &dword_140404A6C[2310 * input_value + 432531273 + 3 * scaled_index];
    do
    {
      scaled_index_7 = (int)(3 * integer_sum);
      scaled_index_8 = *(state_address - 2);
      state_address += 3;
      dword_140404A6C[scaled_index_7 + 177167567] = scaled_index_8;
      dword_140404A6C[scaled_index_7 + 177167568] = *(state_address - 4);
      dword_140404A6C[scaled_index_7 + 177167569] = *(state_address - 3);
      integer_sum = ++mesh_vertex_count;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  table_value_2 = dword_140404A6C[record_word_offset + 432532039];
  if ( table_value_2 > 0 )
  {
    remaining_count_3 = (unsigned int)table_value_2;
    state_address_2 = &dword_140404A6C[record_word_offset + 432532041];
    do
    {
      if ( *(state_address_2 - 1) == 4 )
      {
        loaded_word = *state_address_2;
        dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = *state_address_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = state_address_2[1];
        table_value_3 = state_address_2[2];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_3;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        scaled_index_9 = 6 * mesh_triangle_count;
        *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011349] = 0;
        ++mesh_triangle_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = loaded_word;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_3;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[3];
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        scaled_index_10 = 6 * mesh_triangle_count;
        *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011349] = 0;
        cached_mesh_triangle_count = ++mesh_triangle_count;
      }
      state_address_2 += 6;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
  }
  if ( a2 == 1 || a2 == 4 )
  {
    integer_difference = cached_mesh_triangle_count - 8;
    scaled_index_11 = 6 * integer_difference;
    dword_140404A6C[scaled_index_11 + 178011345] = 0;
    scaled_index_12 = 3LL * integer_difference;
    dword_140404A6C[2 * scaled_index_12 + 178011346] = 1065353216;
    dword_140404A6C[2 * scaled_index_12 + 178011347] = 1065353216;
    dword_140404A6C[2 * scaled_index_12 + 178011348] = 1065353216;
    dword_140404A6C[2 * scaled_index_12 + 178011349] = 1065353216;
    dword_140404A6C[scaled_index_11 + 178011350] = 0;
    scaled_index_13 = (int32_t)(6u * (mesh_triangle_count - 7u));
    dword_140404A6C[scaled_index_13 + 178011345] = 0;
    dword_140404A6C[scaled_index_13 + 178011346] = 1065353216;
    *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011347] = 1065353216;
    *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011349] = 0;
    scaled_index_14 = (int32_t)(6u * (mesh_triangle_count - 20u));
    integer_difference_2 = (int32_t)(mesh_triangle_count - 20u);
    dword_140404A6C[scaled_index_14 + 178011345] = 0;
    scaled_index_15 = 3 * integer_difference_2;
    dword_140404A6C[2 * scaled_index_15 + 178011346] = 1065353216;
    dword_140404A6C[2 * scaled_index_15 + 178011347] = 1065353216;
    dword_140404A6C[2 * scaled_index_15 + 178011348] = 1065353216;
    dword_140404A6C[2 * scaled_index_15 + 178011349] = 1065353216;
    dword_140404A6C[scaled_index_14 + 178011350] = 0;
    scaled_index_16 = (int32_t)(6u * (mesh_triangle_count - 19u));
    *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011349] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011347] = 1065353216;
    dword_140404A6C[scaled_index_16 + 178011346] = 1065353216;
    dword_140404A6C[scaled_index_16 + 178011345] = 0;
  }
  return sub_1401449C0(a1, 1);
}

//----- (000000014005CCF0) ----------------------------------------------------
__int64 sub_14005CCF0()
{
  unsigned int iteration_count;
  unsigned int *state_address;
  __int64 scaled_index;
  bool comparison_result;
  unsigned int table_value;

  iteration_count = 0;
  state_address = &g_151620C60;
  while ( *state_address )
  {
    ++iteration_count;
    state_address += 3597;
    if ( (__int64)state_address >= (__int64)&g_1519A4060 )
      return 0xFFFFFFFFLL;
  }
  if ( iteration_count == -1 )
    return 0xFFFFFFFFLL;
  scaled_index = 3597LL * (int)iteration_count;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 71856254]), 0, 0x3830u);
  comparison_result = game_state == 1;
  dword_140404A6C[scaled_index + 71856268] = -1;
  dword_140404A6C[scaled_index + 71856253] = 1;
  dword_140404A6C[scaled_index + 71856286] = 17;
  dword_140404A6C[scaled_index + 71856292] = -1;
  dword_140404A6C[scaled_index + 71856272] = 50000;
  dword_140404A6C[scaled_index + 71857786] = 0;
  dword_140404A6C[scaled_index + 71857811] = 0;
  dword_140404A6C[scaled_index + 71857836] = 0;
  dword_140404A6C[scaled_index + 71857861] = 0;
  dword_140404A6C[scaled_index + 71857886] = 0;
  dword_140404A6C[scaled_index + 71857911] = 0;
  dword_140404A6C[scaled_index + 71857936] = 0;
  dword_140404A6C[scaled_index + 71857961] = 0;
  dword_140404A6C[scaled_index + 71856342] = 0;
  if ( comparison_result )
  {
    table_value = dword_140404A6C[scaled_index + 71856342];
    if ( game_type == 3 )
      table_value = 2;
    dword_140404A6C[scaled_index + 71856342] = table_value;
  }
  dword_140404A6C[scaled_index + 71856333] = 1065353216;
  rand();
  dword_140404A6C[scaled_index + 71859768] = 1027604480;
  dword_140404A6C[scaled_index + 71859769] = 1027604480;
  dword_140404A6C[scaled_index + 71859770] = -1105618534;
  dword_140404A6C[scaled_index + 71859774] = -1119879168;
  dword_140404A6C[scaled_index + 71859775] = 1027604480;
  dword_140404A6C[scaled_index + 71859776] = -1105618534;
  dword_140404A6C[scaled_index + 71859771] = 1065353216;
  dword_140404A6C[scaled_index + 71859772] = 1065353216;
  dword_140404A6C[scaled_index + 71859773] = 1065353216;
  dword_140404A6C[scaled_index + 71859777] = 1065353216;
  dword_140404A6C[scaled_index + 71859778] = 1065353216;
  dword_140404A6C[scaled_index + 71859779] = 1065353216;
  dword_140404A6C[scaled_index + 71859825] = rand() % 5;
  dword_140404A6C[scaled_index + 71859817] = rand() % 6;
  if ( (rand() & 3) != 3 )
    dword_140404A6C[scaled_index + 71859817] = 2;
  dword_140404A6C[scaled_index + 71859818] = rand() % 6;
  dword_140404A6C[scaled_index + 71859819] = rand() % 9;
  dword_140404A6C[scaled_index + 71859820] = rand() % 8;
  dword_140404A6C[scaled_index + 71859663] = -1;
  return iteration_count;
}

//----- (000000014005D1F0) ----------------------------------------------------
__int64            sub_14005D1F0(__int64 a1)
{
  float weighted_sum;
  float product_difference;
  int loaded_word;
  signed int createitem_result;
  __int64 scaled_index;
  int iteration_count;
  unsigned int table_value;
  signed int createitem_result_2;
  signed int saved_createitem_result;
  __int64 saved_createitem_result_2;
  __int64 result;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  unsigned int scaled_index_4;
  __int64 saved_call_status;
  __int64 scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D1F0[64];
#define saved_product_difference (*(float (*))(void *)(sr_frame_14005D1F0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14005D1F0 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14005D1F0 + 8)) /* [rsp+28h] */
#define scratch_buffer (*(_OWORD (*)[2])(void *)(sr_frame_14005D1F0 + 16)) /* [rsp+30h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14005D1F0 + 48)) /* [rsp+50h] */

  weighted_sum = *(float *)(a1 + 4);
  product_difference = *(float *)a1 - 8.0;
  scratch_buffer[0] = xmmword_140278D30;
  scratch_buffer[1] = xmmword_140278D30;
  unused_written_slot_3 = 1065353216;
  loaded_word = *(_DWORD *)(a1 + 8);
  unused_written_slot = weighted_sum;
  unused_written_slot_2 = loaded_word;
  saved_product_difference = product_difference;
  createitem_result = sr_CreateItem(36, &saved_product_difference, nullptr, (float *)scratch_buffer);
  scaled_index = 1760LL * createitem_result;
  g_181676084 = createitem_result;
  iteration_count = 0;
  table_value = dword_140404A6C[scaled_index + 278845915];
  dword_140404A6C[scaled_index + 278845897] = 1;
  dword_140404A6C[scaled_index + 278846111] = table_value;
  do
  {
    weighted_sum = weighted_sum + 0.5;
    unused_written_slot = weighted_sum;
    createitem_result_2 = sr_CreateItem(36, &saved_product_difference, nullptr, (float *)scratch_buffer);
    saved_createitem_result = createitem_result_2;
    saved_createitem_result_2 = createitem_result_2;
    if ( iteration_count == 15 )
      dword_140404A6C[47 * dword_140404A6C[1760 * createitem_result_2 + 278845915] + 18215718] = 1015580809;
    result = sr_physics_find_free_bond();
    if ( (_DWORD)result == -1 )
      break;
    scaled_index_2 = 61LL * (int)result;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_2 + 486149254]), 0, 0xF0u);
    dword_140404A6C[scaled_index_2 + 486149253] = 1;
    dword_140404A6C[scaled_index_2 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[scaled_index_2 + 486149256] = 0x10000;
    dword_140404A6C[scaled_index_2 + 486149293] = -1;
    scaled_index_3 = dword_140404A6C[1760 * createitem_result + 278845915];
    dword_140404A6C[scaled_index_2 + 486149291] = scaled_index_3;
    scaled_index_4 = dword_140404A6C[1760 * saved_createitem_result_2 + 278845915];
    dword_140404A6C[scaled_index_2 + 486149292] = scaled_index_4;
    dword_140404A6C[scaled_index_2 + 486149281] = 1048576000;
    dword_140404A6C[scaled_index_2 + 486149282] = 1052770304;
    dword_140404A6C[scaled_index_2 + 486149267] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_2 + 486149268] = 1048576000;
    dword_140404A6C[scaled_index_2 + 486149270] = 0;
    dword_140404A6C[scaled_index_2 + 486149271] = -1098907648;
    dword_140404A6C[scaled_index_2 + 486149272] = 0;
    result = sr_physics_find_free_bond();
    if ( (_DWORD)result == -1 )
      break;
    saved_call_status = (int)result;
    scaled_index_5 = 61LL * (int)result;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_5 + 486149254]), 0, 0xF0u);
    dword_140404A6C[scaled_index_5 + 486149253] = 1;
    dword_140404A6C[scaled_index_5 + 486149254] = 8;
    result = 18 * saved_call_status;
    *(_QWORD *)&dword_140404A6C[scaled_index_5 + 486149256] = 0x10000;
    dword_140404A6C[scaled_index_5 + 486149291] = scaled_index_3;
    ++iteration_count;
    dword_140404A6C[scaled_index_5 + 486149292] = scaled_index_4;
    createitem_result = saved_createitem_result;
    dword_140404A6C[scaled_index_5 + 486149293] = -1;
    *(_QWORD *)&dword_140404A6C[2 * result + 485543033] = 0;
    dword_140404A6C[2 * result + 485543035] = 0;
    dword_140404A6C[scaled_index_5 + 486149281] = 0;
    dword_140404A6C[scaled_index_5 + 486149282] = 998244352;
  }
  while ( iteration_count < 16 );
  return result;
}
#undef saved_product_difference
#undef unused_written_slot
#undef unused_written_slot_2
#undef scratch_buffer
#undef unused_written_slot_3

//----- (000000014005D4C0) ----------------------------------------------------
double            sub_14005D4C0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  unsigned int *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D4C0[16];
#define float_word (*(__int64 (*))(void *)(sr_frame_14005D4C0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14005D4C0 + 8)) /* [rsp+28h] */

  unused_written_slot = -a4;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  float_word = 0;
  sub_140002D00((float *)&float_word, a2, a3, a4);
  iteration_count = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}
#undef float_word
#undef unused_written_slot

//----- (000000014005D550) ----------------------------------------------------
__int64            sub_14005D550(int a1)
{
  __int64 input_value;
  int chdir_result;
  signed int iteration_count;
  int chdir_result_2;
  __int64 element_index;
  char table_value;
  __int64 file_handle;
  __int64 file_handle_2;
  int iteration_count_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int *record_byte_offset;
  float product_difference;
  double angle;
  float scaled_value;
  __int64 player;
  __int64 scaled_index_3;
  unsigned int masked_bits;
  unsigned int table_value_2;
  signed int createitem_result;
  signed int createitem_result_2;
  signed int createitem_result_3;
  signed int createitem_result_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D550[624];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14005D550 + 8)) /* [rsp+0h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_14005D550 + 40)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_14005D550 + 56)) /* [rsp+30h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_14005D550 + 64)) /* [rsp+38h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14005D550 + 80)) /* [rsp+48h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14005D550 + 96)) /* [rsp+58h] */
#define scratch_buffer (*(char (*)[512])(void *)(sr_frame_14005D550 + 104)) /* [rsp+60h] */
#define unused_frame_slot_616 (*(__int64 (*))(void *)(sr_frame_14005D550 + 616)) /* [rsp+260h] */

  input_value = a1;
  chdir_result = crt_chdir("data");
  iteration_count = 0;
  chdir_result_2 = crt_chdir("mission");
  element_index = 0;
  do
  {
    table_value = aTestSrm[element_index];
    scratch_buffer[element_index++] = table_value;
  }
  while ( table_value );
  file_handle = crt_fopen(scratch_buffer, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( Buffer != 1 )
    {
      crt_fclose(file_handle_2);
      goto LABEL_14;
    }
    fread_sr((void *)(uintptr_t)(&g_1B4277C40), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    iteration_count_2 = 0;
    if ( (int)g_1B4277C40 > 0 )
    {
      do
      {
        scaled_index = 4LL * iteration_count_2;
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 486132854]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 486132857]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        ++iteration_count_2;
      }
      while ( iteration_count_2 < (int)g_1B4277C40 );
      iteration_count = 0;
    }
    crt_fclose(file_handle_2);
  }
  if ( !chdir_result_2 )
    crt_chdir("..");
  if ( !chdir_result )
    crt_chdir("..");
LABEL_14:
  scaled_index_2 = 1025 * input_value;
  if ( (int)dword_140404A6C[1025 * input_value + 486132853] > 0 )
  {
    record_byte_offset = &dword_140404A6C[scaled_index_2 + 486132856];
    do
    {
      product_difference = *((float *)record_byte_offset - 1);
      *(_QWORD *)&angle = record_byte_offset[1];
      LODWORD(float_buffer[0]) = *(record_byte_offset - 2);
      scaled_value = *(float *)record_byte_offset;
      float_buffer[1] = product_difference;
      float_buffer[2] = scaled_value;
      matrix = xmmword_140278D30;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = xmmword_140278D30;
      sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
      player = (int)sub_14005CCF0();
      scaled_index_3 = 3597 * player;
      dword_140404A6C[scaled_index_3 + 71856286] = 7;
      crt_sprintf(&dword_140404A6C[3597 * player + 71856254], Parameters);
      dword_140404A6C[scaled_index_3 + 71859139] = 1;
      dword_140404A6C[scaled_index_3 + 71859816] = 1;
      dword_140404A6C[scaled_index_3 + 71859821] = 3;
      dword_140404A6C[scaled_index_3 + 71859822] = 1;
      matrix = xmmword_140278D30;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = xmmword_140278D30;
      masked_bits = sub_140053840(float_buffer, (float *)&matrix, player);
      table_value_2 = record_byte_offset[1];
      dword_140404A6C[scaled_index_3 + 71856292] = masked_bits;
      dword_140404A6C[scaled_index_3 + 71859143] = table_value_2;
      dword_140404A6C[7166 * masked_bits + 280651341] = table_value_2;
      sr_event_player_update(player);
      createitem_result = sr_CreateItem(1, float_buffer, nullptr, (float *)&matrix);
      sr_item_transfer(createitem_result, -1, dword_140404A6C[3597 * player + 71856292], 0);
      createitem_result_2 = sr_CreateItem(2, float_buffer, nullptr, (float *)&matrix);
      sr_item_transfer(createitem_result_2, -1, dword_140404A6C[3597 * player + 71856292], 1);
      createitem_result_3 = sr_CreateItem(2, float_buffer, nullptr, (float *)&matrix);
      sr_item_transfer(createitem_result_3, -1, dword_140404A6C[3597 * player + 71856292], 3);
      createitem_result_4 = sr_CreateItem(2, float_buffer, nullptr, (float *)&matrix);
      sr_item_transfer(createitem_result_4, -1, dword_140404A6C[3597 * player + 71856292], 3);
      ++iteration_count;
      record_byte_offset += 4;
    }
    while ( iteration_count < (int)dword_140404A6C[scaled_index_2 + 486132853] );
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_8
#undef float_buffer
#undef Buffer
#undef matrix
#undef unused_written_slot
#undef unused_written_slot_2
#undef scratch_buffer
#undef unused_frame_slot_616

//----- (000000014005E520) ----------------------------------------------------
__int64 sub_14005E520()
{
  signed int cached_game_day_time;
  unsigned int *state_address;
  int integer_sum;
  signed int state_word;
  int iteration_count;
  int scaled_index;
  int iteration_count_2;
  unsigned int *saved_state_address;
  __int64 remaining_count;
  int iteration_count_3;
  unsigned int *saved_state_address_2;
  __int64 remaining_count_2;
  __int64 remaining_count_3;
  __int64 rand_result;
  int rand_result_2;
  unsigned int *state_address_2;
  __int64 lookup_index;
  unsigned int table_value;
  int saved_state_word;
  int selection_flag;
  unsigned int state_word_2;
  signed int iteration_count_4;
  unsigned int *buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E520[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14005E520 + 0)) /* [rsp+0h] */
#define destination_buffer (*(unsigned int (*)[8])(void *)(sr_frame_14005E520 + 32)) /* [rsp+20h] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_14005E520 + 64)) /* [rsp+40h] */

  cached_game_day_time = game_day_time;
  state_address = &g_183EBFF00;
  integer_sum = 0;
  state_word = 0;
  g_1B4657DB4 = 0;
  g_183EBFDAC = 0;
  iteration_count = 0;
  g_183EC5970 = 0;
  g_183ECB534 = 0;
  g_1B4657C88 = 0;
  do
  {
    scaled_index = *(state_address - 83);
    if ( scaled_index > 0 )
    {
      iteration_count_2 = 0;
      saved_state_address = state_address;
      remaining_count = 16;
      do
      {
        if ( *(saved_state_address - 1) )
        {
          if ( !*saved_state_address && cached_game_day_time < (int)saved_state_address[16] )
          {
            ++iteration_count_2;
            if ( (int)saved_state_address[2] >= 2 )
              ++iteration_count_2;
          }
        }
        saved_state_address += 279;
        --remaining_count;
      }
      while ( remaining_count );
      if ( iteration_count_2 < 1 )
        goto LABEL_20;
      if ( cached_game_day_time == 216000 * (cached_game_day_time / 216000) )
      {
        iteration_count_3 = 0;
        saved_state_address_2 = state_address;
        remaining_count_2 = 16;
        do
        {
          if ( *(saved_state_address_2 - 1) )
          {
            if ( !*saved_state_address_2 && cached_game_day_time < (int)saved_state_address_2[16] )
            {
              ++iteration_count_3;
              if ( (int)saved_state_address_2[2] >= 2 )
                ++iteration_count_3;
            }
          }
          saved_state_address_2 += 279;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        if ( iteration_count_3 < 2 )
        {
LABEL_20:
          dword_140404A6C[state_word + 487148680] = iteration_count;
          state_word = g_1B4657C88 + 1;
          integer_sum = scaled_index + g_1B4657DB4;
          ++g_1B4657C88;
          g_1B4657DB4 += scaled_index;
        }
      }
    }
    ++iteration_count;
    state_address += 5873;
  }
  while ( iteration_count < 3 );
  if ( state_word > 0 )
    integer_sum /= state_word;
  if ( integer_sum < 1 )
    integer_sum = 1;
  g_1B4657DB4 = integer_sum;
  if ( state_word )
  {
    if ( state_word > 1 )
    {
      remaining_count_3 = 1024;
      do
      {
        rand_result = rand() % (signed int)g_1B4657C88;
        rand_result_2 = rand();
        state_address_2 = &dword_140404A6C[rand_result + 487148677];
        lookup_index = rand_result_2 % (signed int)g_1B4657C88;
        table_value = dword_140404A6C[lookup_index + 487148680];
        dword_140404A6C[lookup_index + 487148680] = state_address_2[3];
        state_address_2[3] = table_value;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      state_word = g_1B4657C88;
    }
    while ( 1 )
    {
      saved_state_word = state_word;
      if ( state_word > 0 )
        crt_memcpy((__m128i *)destination_buffer, (     __m128i *)&g_1B4657C8C, 4LL * state_word);
      selection_flag = 1;
      if ( state_word >= 2 && (rand() & 7u) < 6 )
      {
        selection_flag = 0;
        if ( (rand() & 1) == 0 && state_word > 3 )
          saved_state_word = 3;
        if ( (rand() & 0xF) == 0 && saved_state_word > 2 )
          break;
      }
      if ( saved_state_word != 3 || (rand() & 3) != 0 )
      {
        if ( selection_flag == 1 )
        {
          if ( (rand() & 3u) < 2 && saved_state_word > 3 )
            saved_state_word = 3;
          if ( (rand() & 3) == 0 && saved_state_word > 2 )
            saved_state_word = 2;
          if ( (rand() & 3) == 0 && saved_state_word > 1 )
            saved_state_word = 1;
          sub_140059640(1u, saved_state_word, (__int64)destination_buffer);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      sub_140059920(3, 3, (char *)destination_buffer);
LABEL_56:
      state_word_2 = g_1B4657C88;
      ++g_183E93534;
      iteration_count_4 = 0;
      if ( (signed int)(g_1B4657C88 - saved_state_word) > 0 )
      {
        buffer_cursor = &g_1B4657C8C;
        do
        {
          ++iteration_count_4;
          *buffer_cursor = buffer_cursor[saved_state_word];
          ++buffer_cursor;
          state_word_2 = g_1B4657C88;
        }
        while ( iteration_count_4 < (signed int)(g_1B4657C88 - saved_state_word) );
      }
      state_word = state_word_2 - saved_state_word;
      g_1B4657C88 = state_word;
      if ( state_word <= 0 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    saved_state_word = 2;
LABEL_55:
    sub_14005A0E0(0, saved_state_word, destination_buffer);
    goto LABEL_56;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef unused_frame_slot_64

// 14005E7C2: conditional instruction was optimized away because esi.4==0

//----- (000000014005E860) ----------------------------------------------------
__int64 sub_14005E860()
{
  int cached_game_day_time;
  unsigned int *state_address;
  int integer_sum;
  signed int state_word;
  int i;
  int scaled_index;
  int iteration_count;
  unsigned int *saved_state_address;
  __int64 remaining_count;
  int iteration_count_2;
  unsigned int *saved_state_address_2;
  __int64 remaining_count_2;
  unsigned int cached_game_tick;
  unsigned int cached_game_connected;
  __int64 shifted_bits;
  __int64 shifted_bits_2;
  __int64 shifted_bits_3;
  __int64 shifted_bits_4;
  __int64 shifted_bits_5;
  __int64 shifted_bits_6;
  __int64 remaining_count_3;
  __int64 rand_result;
  __int64 rand_result_2;
  unsigned int loaded_word;
  int saved_state_word;
  unsigned int state_word_2;
  signed int iteration_count_3;
  unsigned int *buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E860[80];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14005E860 + 0)) /* [rsp+0h] */
#define destination_buffer (*(__m128i (*)[2])(void *)(sr_frame_14005E860 + 32)) /* [rsp+20h] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_14005E860 + 64)) /* [rsp+40h] */

  cached_game_day_time = game_day_time;
  state_address = &g_183EBFF00;
  integer_sum = 0;
  g_1B4657DB4 = 0;
  state_word = 0;
  g_1B4657C88 = 0;
  for ( i = 0; i < 6; ++i )
  {
    scaled_index = *(state_address - 83);
    if ( scaled_index > 0 )
    {
      iteration_count = 0;
      saved_state_address = state_address;
      remaining_count = 16;
      do
      {
        if ( *(saved_state_address - 1) )
        {
          if ( !*saved_state_address && cached_game_day_time < (int)saved_state_address[16] )
          {
            ++iteration_count;
            if ( (int)saved_state_address[2] >= 2 )
              ++iteration_count;
          }
        }
        saved_state_address += 279;
        --remaining_count;
      }
      while ( remaining_count );
      if ( iteration_count < 1 )
        goto LABEL_20;
      if ( cached_game_day_time == 216000 * (cached_game_day_time / 216000) )
      {
        iteration_count_2 = 0;
        saved_state_address_2 = state_address;
        remaining_count_2 = 16;
        do
        {
          if ( *(saved_state_address_2 - 1) )
          {
            if ( !*saved_state_address_2 && cached_game_day_time < (int)saved_state_address_2[16] )
            {
              ++iteration_count_2;
              if ( (int)saved_state_address_2[2] >= 2 )
                ++iteration_count_2;
            }
          }
          saved_state_address_2 += 279;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        if ( iteration_count_2 < 2 )
        {
LABEL_20:
          dword_140404A6C[state_word + 487148680] = i;
          state_word = g_1B4657C88 + 1;
          integer_sum = scaled_index + g_1B4657DB4;
          ++g_1B4657C88;
          g_1B4657DB4 += scaled_index;
        }
      }
    }
    state_address += 5873;
  }
  if ( state_word > 0 )
    integer_sum /= state_word;
  cached_game_tick = game_tick;
  cached_game_connected = game_connected;
  if ( integer_sum < 1 )
    integer_sum = 1;
  g_1B4657DB4 = integer_sum;
  if ( !g_183EBFDB4 )
  {
    if ( game_connected )
    {
      shifted_bits = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = 0;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 1;
    }
    g_183EBFDC0 = 1;
  }
  if ( !g_183EC5978 )
  {
    if ( cached_game_connected )
    {
      shifted_bits_2 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = 1;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_2) = 1;
    }
    g_183EC5984 = 1;
  }
  if ( !g_183ECB53C )
  {
    if ( cached_game_connected )
    {
      shifted_bits_3 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = 2;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = 1;
    }
    g_183ECB548 = 1;
  }
  if ( !g_183ED1100 )
  {
    if ( cached_game_connected )
    {
      shifted_bits_4 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = 3;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 1;
    }
    g_183ED110C = 1;
  }
  if ( !g_183ED6CC4 )
  {
    if ( cached_game_connected )
    {
      shifted_bits_5 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = 4;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 1;
    }
    g_183ED6CD0 = 1;
  }
  if ( !g_183EDC888 )
  {
    if ( cached_game_connected )
    {
      shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 10;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = 5;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 1;
    }
    g_183EDC894 = 1;
  }
  if ( state_word && cached_game_day_time <= 3726000 )
  {
    if ( state_word > 1 )
    {
      remaining_count_3 = 1024;
      do
      {
        rand_result = rand() % (signed int)g_1B4657C88;
        rand_result_2 = 4LL * (rand() % (signed int)g_1B4657C88) + 1952808076;
        loaded_word = *(_DWORD *)(rand_result_2 + ((intptr_t)dword_140404A6C - 0x404a6cLL));
        *(_DWORD *)(rand_result_2 + ((intptr_t)dword_140404A6C - 0x404a6cLL)) = dword_140404A6C[rand_result + 487148680];
        dword_140404A6C[rand_result + 487148680] = loaded_word;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      state_word = g_1B4657C88;
    }
    do
    {
      saved_state_word = state_word;
      if ( state_word > 0 )
        crt_memcpy(destination_buffer, (     __m128i *)&g_1B4657C8C, 4LL * state_word);
      if ( (rand() & 3u) < 2 && saved_state_word > 3 )
        saved_state_word = 3;
      if ( (rand() & 3) == 0 && saved_state_word > 2 )
        saved_state_word = 2;
      if ( (rand() & 3) == 0 && saved_state_word > 1 )
        saved_state_word = 1;
      sub_1400589A0(0, saved_state_word, (__int64)destination_buffer);
      state_word_2 = g_1B4657C88;
      iteration_count_3 = 0;
      ++g_183E93534;
      if ( (signed int)(g_1B4657C88 - saved_state_word) > 0 )
      {
        buffer_cursor = &g_1B4657C8C;
        do
        {
          ++iteration_count_3;
          *buffer_cursor = buffer_cursor[saved_state_word];
          ++buffer_cursor;
          state_word_2 = g_1B4657C88;
        }
        while ( iteration_count_3 < (signed int)(g_1B4657C88 - saved_state_word) );
      }
      state_word = state_word_2 - saved_state_word;
      g_1B4657C88 = state_word;
    }
    while ( state_word > 0 );
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef destination_buffer
#undef unused_frame_slot_64

//----- (000000014005ED40) ----------------------------------------------------
__int64            sub_14005ED40(int a1, float *a2, __int64 a3, float a4, float a5)
{
  __int64 sound;
  float selected_scalar;
  float limited_value;

  sound = a1;
  selected_scalar = 1.0;
  limited_value = fminf(a4, 1.0);
  if ( fsqrt(
         (float)((float)((float)(g_183F7C548 - a2[1])
                       * (float)(g_183F7C548 - a2[1]))
               + (float)((float)(g_183F7C544 - *a2)
                       * (float)(g_183F7C544 - *a2)))
       + (float)((float)(g_183F7C54C - a2[2])
               * (float)(g_183F7C54C - a2[2]))) > 128.0
    || (unsigned int)sub_1400DC050(a2, (float *)(unsigned int *)&g_183F7C544, 0) )
  {
    selected_scalar = 0.5;
  }
  if ( dword_140404A6C[8 * sound + 18165777] )
    sr_audio_play_at(sound, (unsigned int *)a2, limited_value * selected_scalar, a5, 0);
  return 0xFFFFFFFFLL;
}

//----- (000000014005F370) ----------------------------------------------------
double            sub_14005F370(int a1, int a2)
{
  int cached_mesh_triangle_count;
  int iteration_count;
  unsigned int *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F370[16];
#define float_word (*(__int64 (*))(void *)(sr_frame_14005F370 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14005F370 + 8)) /* [rsp+28h] */

  mesh_vertex_count = 0;
  cached_mesh_triangle_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  if ( a2 == 1 )
  {
    float_word = 0;
    unused_written_slot = 0;
    sub_140002D00((float *)&float_word, 0.02, 0.02, 0.02);
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  iteration_count = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}
#undef float_word
#undef unused_written_slot

//----- (000000014005F400) ----------------------------------------------------
double            sub_14005F400(int a1)
{
  int iteration_count;
  unsigned int *state_address;
  float float_buffer[6];

  float_buffer[0] = -0.042187501;
  float_buffer[1] = 0.0;
  float_buffer[2] = -0.125;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  sub_140002D00(float_buffer, 0.037500001, 0.03125, 0.001);
  g_16A7DBDB4 = g_16A7DBDB4 + -0.0093750004;
  g_16A7DBDC0 = g_16A7DBDC0 + -0.0093750004;
  g_16A7DBDCC = g_16A7DBDCC + 0.0046875002;
  g_16A7DBDA8 = g_16A7DBDA8 + 0.0046875002;
  float_buffer[0] = 0.042187501;
  sub_140002D00(float_buffer, 0.037500001, 0.03125, 0.001);
  iteration_count = 0;
  g_16A7DBE08 = g_16A7DBE08 + 0.0093750004;
  g_16A7DBE2C = g_16A7DBE2C + 0.0093750004;
  g_16A7DBE14 = g_16A7DBE14 + -0.0046875002;
  g_16A7DBE20 = g_16A7DBE20 + -0.0046875002;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}

//----- (000000014005F5A0) ----------------------------------------------------
double            sub_14005F5A0(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  float component_delta;
  float component_delta_2;
  int iteration_count_2;
  unsigned int *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F5A0[16];
#define saved_component_delta (*(float (*))(void *)(sr_frame_14005F5A0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14005F5A0 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14005F5A0 + 8)) /* [rsp+28h] */

  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  unused_written_slot = a3 - 0.0625;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  saved_component_delta = 0.0;
  unused_written_slot_2 = 0.0;
  sub_140002D00(&saved_component_delta, a2, 0.0625, a4);
  iteration_count = 0;
  unused_written_slot = -0.0625;
  do
  {
    if ( !iteration_count || iteration_count == 3 )
      component_delta = 0.0625 - a2;
    else
      component_delta = a2 - 0.0625;
    saved_component_delta = component_delta;
    if ( (unsigned int)iteration_count >= 2 )
      component_delta_2 = a4 - 0.0625;
    else
      component_delta_2 = 0.0625 - a4;
    unused_written_slot_2 = component_delta_2;
    sub_140002D00(&saved_component_delta, 0.0625, a3, 0.0625);
    ++iteration_count;
  }
  while ( iteration_count < 4 );
  iteration_count_2 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(state_address - 1) = 0;
      ++iteration_count_2;
      *(_QWORD *)(state_address + 1) = 0;
      *(_QWORD *)(state_address + 3) = 0;
      state_address += 6;
    }
    while ( iteration_count_2 < (int)mesh_triangle_count );
  }
  return sub_1401449C0(a1, 0);
}
#undef saved_component_delta
#undef unused_written_slot
#undef unused_written_slot_2

