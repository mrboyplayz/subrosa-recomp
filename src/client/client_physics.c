#include "shared_client.h"
#include "../engine/physics.h"

//----- (0000000140048110) ----------------------------------------------------
__int64            sub_140048110(int *a1)
{
  int iteration_count;
  int *float_word;
  __int64 scaled_index;
  float saved_state_address;
  float weighted_sum;
  float weighted_sum_2;
  __int64 scaled_index_2;
  float *record_byte_offset;
  unsigned __int64 remaining_count;
  float source_component_y;
  float source_component_z;
  float source_float_10;
  float source_float_11;
  float source_float_13;
  float source_float_14;
  float source_float_15;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float source_component_w;
  __int64 loaded_word_4;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float source_float_5;
  float scaled_value;
  float weighted_sum_16;
  float weighted_sum_17;
  float source_float_7;
  float scaled_value_2;
  float weighted_sum_18;
  float weighted_sum_19;
  float source_float_9;
  float source_float_6;
  float weighted_sum_20;
  float weighted_sum_21;
  float scaled_value_3;
  float scaled_value_4;
  float weighted_sum_22;
  float weighted_sum_23;
  float weighted_sum_24;
  float scaled_value_5;
  float weighted_sum_25;
  float scaled_value_6;
  float weighted_sum_26;
  float state_address;
  float state_address_2;
  float weighted_sum_27;
  float state_address_3;
  float weighted_sum_28;
  float weighted_sum_29;
  float state_address_4;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  float *record_byte_offset_2;
  __int64 remaining_count_2;
  float source_component_y_2;
  float source_component_z_2;
  float source_component_w_2;
  __int64 loaded_word_5;
  int *running_total;
  __int64 remaining_count_3;
  int scaled_index_3;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int table_value_5;
  int table_value_6;
  int table_value_7;
  int table_value_8;
  int table_value_9;
  int table_value_10;
  int table_value_11;
  int table_value_12;
  int table_value_13;
  int table_value_14;
  int table_value_15;
  int table_value_16;
  int table_value_17;
  int table_value_18;
  int table_value_19;
  int table_value_20;
  int table_value_21;
  int table_value_22;
  int table_value_23;
  int table_value_24;
  int table_value_25;
  int table_value_26;
  int table_value_27;
  int table_value_28;
  int table_value_29;
  int table_value_30;
  __int64 remaining_count_4;
  int iteration_count_2;
  char *record_byte_offset_3;
  int *running_total_2;
  __int64 iteration_count_3;
  int *running_total_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140048110[864];
#define weighted_sum_30 (*(float (*))(void *)(sr_frame_140048110 + 0)) /* [rsp+0h] */
#define saved_state_address_2 (*(float (*))(void *)(sr_frame_140048110 + 4)) /* [rsp+4h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_140048110 + 8)) /* [rsp+8h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_140048110 + 12)) /* [rsp+Ch] */
#define weighted_sum_31 (*(float (*))(void *)(sr_frame_140048110 + 16)) /* [rsp+10h] */
#define scaled_value_7 (*(float (*))(void *)(sr_frame_140048110 + 20)) /* [rsp+14h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140048110 + 24)) /* [rsp+18h] */
#define saved_weighted_sum_4 (*(float (*))(void *)(sr_frame_140048110 + 28)) /* [rsp+1Ch] */
#define saved_weighted_sum_5 (*(float (*))(void *)(sr_frame_140048110 + 32)) /* [rsp+20h] */
#define saved_weighted_sum_6 (*(float (*))(void *)(sr_frame_140048110 + 36)) /* [rsp+24h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140048110 + 40)) /* [rsp+28h] */
#define saved_weighted_sum_7 (*(float (*))(void *)(sr_frame_140048110 + 44)) /* [rsp+2Ch] */
#define saved_weighted_sum_8 (*(float (*))(void *)(sr_frame_140048110 + 48)) /* [rsp+30h] */
#define saved_weighted_sum_9 (*(float (*))(void *)(sr_frame_140048110 + 52)) /* [rsp+34h] */
#define saved_weighted_sum_10 (*(float (*))(void *)(sr_frame_140048110 + 56)) /* [rsp+38h] */
#define saved_weighted_sum_11 (*(float (*))(void *)(sr_frame_140048110 + 60)) /* [rsp+3Ch] */
#define saved_weighted_sum_12 (*(float (*))(void *)(sr_frame_140048110 + 64)) /* [rsp+40h] */
#define weighted_sum_32 (*(float (*))(void *)(sr_frame_140048110 + 68)) /* [rsp+44h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140048110 + 88)) /* [rsp+58h] */
#define unused_frame_slot_848 (*(__int64 (*))(void *)(sr_frame_140048110 + 848)) /* [rsp+350h] */

  iteration_count = 0;
  if ( *a1 > 0 )
  {
    float_word = a1 + 19;
    do
    {
      scaled_index = 0;
      float_word[2] = *(float_word - 1);
      saved_state_address = 0.0;
      weighted_sum = 0.0;
      float_word[3] = *float_word;
      weighted_sum_2 = 0.0;
      float_word[4] = float_word[1];
      scaled_index_2 = *(float_word - 18);
      saved_state_address_2 = 0.0;
      saved_weighted_sum = 0.0;
      saved_weighted_sum_2 = 0.0;
      if ( scaled_index_2 >= 4 )
      {
        record_byte_offset = (float *)(float_word - 17);
        remaining_count = ((unsigned __int64)(scaled_index_2 - 4) >> 2) + 1;
        scaled_index = 4 * remaining_count;
        do
        {
          source_component_y = record_byte_offset[1];
          source_component_z = record_byte_offset[2];
          source_float_10 = record_byte_offset[10];
          source_float_11 = record_byte_offset[11];
          source_float_13 = record_byte_offset[13];
          source_float_14 = record_byte_offset[14];
          source_float_15 = record_byte_offset[15];
          loaded_word = 47LL * *(int *)record_byte_offset;
          loaded_word_2 = 47LL * *((int *)record_byte_offset + 4);
          loaded_word_3 = *((int *)record_byte_offset + 8);
          weighted_sum_30 = *(float *)&dword_140404A6C[loaded_word + 18215724] * source_component_y;
          weighted_sum_3 = source_component_y * *(float *)&dword_140404A6C[loaded_word + 18215725];
          weighted_sum_4 = source_component_y * *(float *)&dword_140404A6C[loaded_word + 18215726];
          weighted_sum_5 = *(float *)&dword_140404A6C[loaded_word_2 + 18215724];
          weighted_sum_6 = *(float *)&dword_140404A6C[loaded_word_2 + 18215730];
          weighted_sum_7 = *(float *)&dword_140404A6C[loaded_word_2 + 18215727];
          saved_weighted_sum_3 = weighted_sum_3;
          weighted_sum_31 = *(float *)&dword_140404A6C[loaded_word + 18215727] * source_component_z;
          weighted_sum_8 = *(float *)&dword_140404A6C[loaded_word + 18215730];
          saved_weighted_sum_7 = weighted_sum_4;
          source_component_w = record_byte_offset[3];
          loaded_word_4 = 47LL * *((int *)record_byte_offset + 12);
          weighted_sum_9 = source_float_10 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215728];
          weighted_sum_10 = source_float_11 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215731];
          scaled_value_7 = weighted_sum_8 * source_component_w;
          weighted_sum_11 = source_component_z * *(float *)&dword_140404A6C[loaded_word + 18215728];
          weighted_sum_12 = source_component_z * *(float *)&dword_140404A6C[loaded_word + 18215729];
          saved_weighted_sum_4 = weighted_sum_11;
          weighted_sum_13 = source_component_w * *(float *)&dword_140404A6C[loaded_word + 18215731];
          weighted_sum_14 = source_component_w * *(float *)&dword_140404A6C[loaded_word + 18215732];
          saved_weighted_sum_5 = weighted_sum_13;
          saved_weighted_sum_8 = weighted_sum_12;
          weighted_sum_15 = *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215724];
          saved_weighted_sum_9 = weighted_sum_14;
          source_float_5 = record_byte_offset[5];
          scaled_value = weighted_sum_5 * source_float_5;
          weighted_sum_16 = source_float_5 * *(float *)&dword_140404A6C[loaded_word_2 + 18215725];
          weighted_sum_17 = source_float_5 * *(float *)&dword_140404A6C[loaded_word_2 + 18215726];
          saved_weighted_sum_6 = weighted_sum_16;
          source_float_7 = record_byte_offset[7];
          scaled_value_2 = weighted_sum_6 * source_float_7;
          weighted_sum_18 = source_float_7 * *(float *)&dword_140404A6C[loaded_word_2 + 18215732];
          weighted_sum_19 = source_float_7 * *(float *)&dword_140404A6C[loaded_word_2 + 18215731];
          saved_weighted_sum_12 = weighted_sum_18;
          source_float_9 = record_byte_offset[9];
          saved_weighted_sum_10 = weighted_sum_17;
          source_float_6 = record_byte_offset[6];
          weighted_sum_20 = source_float_9 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215725];
          weighted_sum_21 = source_float_6 * *(float *)&dword_140404A6C[loaded_word_2 + 18215728];
          scaled_value_3 = weighted_sum_15 * source_float_9;
          scaled_value_4 = weighted_sum_7 * source_float_6;
          weighted_sum_22 = source_float_6 * *(float *)&dword_140404A6C[loaded_word_2 + 18215729];
          weighted_sum_32 = source_float_9 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215726];
          weighted_sum_23 = *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215730];
          saved_weighted_sum_11 = weighted_sum_22;
          weighted_sum_24 = *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215727];
          scaled_value_5 = weighted_sum_23 * source_float_11;
          weighted_sum_25 = source_float_11 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215732];
          unused_written_slot = weighted_sum_21;
          scaled_value_6 = weighted_sum_24 * source_float_10;
          weighted_sum_26 = source_float_10 * *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215729];
          record_byte_offset += 16;
          state_address = (float)((float)(scaled_value_3 + *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215715]) + scaled_value_6) + scaled_value_5;
          state_address_2 = (float)((float)(weighted_sum_20 + *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215716]) + weighted_sum_9) + weighted_sum_10;
          weighted_sum_27 = saved_weighted_sum_3 + *(float *)&dword_140404A6C[loaded_word + 18215716];
          state_address_3 = (float)((float)((float)((float)((float)((float)(weighted_sum_30 + *(float *)&dword_140404A6C[loaded_word + 18215715]) + weighted_sum_31)
                                              + scaled_value_7)
                                      + saved_state_address_2)
                              + (float)((float)((float)(scaled_value + *(float *)&dword_140404A6C[loaded_word_2 + 18215715]) + scaled_value_4) + scaled_value_2))
                      + state_address)
              + (float)((float)((float)((float)(source_float_13 * *(float *)&dword_140404A6C[loaded_word_4 + 18215724])
                                      + *(float *)&dword_140404A6C[loaded_word_4 + 18215715])
                              + (float)(source_float_14 * *(float *)&dword_140404A6C[loaded_word_4 + 18215727]))
                      + (float)(source_float_15 * *(float *)&dword_140404A6C[loaded_word_4 + 18215730]));
          weighted_sum_28 = source_float_13 * *(float *)&dword_140404A6C[loaded_word_4 + 18215725];
          weighted_sum_29 = source_float_13 * *(float *)&dword_140404A6C[loaded_word_4 + 18215726];
          state_address_4 = (float)((float)(saved_weighted_sum_6 + *(float *)&dword_140404A6C[loaded_word_2 + 18215716]) + weighted_sum_21) + weighted_sum_19;
          saved_state_address_2 = state_address_3;
          state_address_5 = (float)((float)(weighted_sum_29 + *(float *)&dword_140404A6C[loaded_word_4 + 18215717])
                      + (float)(source_float_14 * *(float *)&dword_140404A6C[loaded_word_4 + 18215729]))
              + (float)(source_float_15 * *(float *)&dword_140404A6C[loaded_word_4 + 18215732]);
          weighted_sum = (float)((float)((float)((float)((float)(weighted_sum_27 + saved_weighted_sum_4) + saved_weighted_sum_5) + saved_weighted_sum) + state_address_4) + state_address_2)
             + (float)((float)((float)(weighted_sum_28 + *(float *)&dword_140404A6C[loaded_word_4 + 18215716])
                             + (float)(source_float_14 * *(float *)&dword_140404A6C[loaded_word_4 + 18215728]))
                     + (float)(source_float_15 * *(float *)&dword_140404A6C[loaded_word_4 + 18215731]));
          state_address_6 = (float)((float)(saved_weighted_sum_10 + *(float *)&dword_140404A6C[loaded_word_2 + 18215717]) + saved_weighted_sum_11) + saved_weighted_sum_12;
          state_address_7 = (float)(saved_weighted_sum_7 + *(float *)&dword_140404A6C[loaded_word + 18215717]) + saved_weighted_sum_8;
          saved_weighted_sum = weighted_sum;
          weighted_sum_2 = (float)((float)((float)((float)(state_address_7 + saved_weighted_sum_9) + saved_weighted_sum_2) + state_address_6)
                     + (float)((float)((float)(weighted_sum_32 + *(float *)&dword_140404A6C[47 * loaded_word_3 + 18215717]) + weighted_sum_26) + weighted_sum_25))
             + state_address_5;
          saved_weighted_sum_2 = weighted_sum_2;
          --remaining_count;
        }
        while ( remaining_count );
        saved_state_address = state_address_3;
      }
      if ( scaled_index < scaled_index_2 )
      {
        record_byte_offset_2 = (float *)&float_word[4 * scaled_index - 17];
        remaining_count_2 = scaled_index_2 - scaled_index;
        do
        {
          source_component_y_2 = record_byte_offset_2[1];
          source_component_z_2 = record_byte_offset_2[2];
          source_component_w_2 = record_byte_offset_2[3];
          loaded_word_5 = 47LL * *(int *)record_byte_offset_2;
          record_byte_offset_2 += 4;
          saved_state_address = saved_state_address
             + (float)((float)((float)((float)(source_component_y_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215724])
                                     + *(float *)&dword_140404A6C[loaded_word_5 + 18215715])
                             + (float)(source_component_z_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215727]))
                     + (float)(source_component_w_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215730]));
          weighted_sum = weighted_sum
             + (float)((float)((float)((float)(source_component_y_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215725])
                                     + *(float *)&dword_140404A6C[loaded_word_5 + 18215716])
                             + (float)(source_component_z_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215728]))
                     + (float)(source_component_w_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215731]));
          weighted_sum_2 = weighted_sum_2
             + (float)((float)((float)((float)(source_component_y_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215726])
                                     + *(float *)&dword_140404A6C[loaded_word_5 + 18215717])
                             + (float)(source_component_z_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215729]))
                     + (float)(source_component_w_2 * *(float *)&dword_140404A6C[loaded_word_5 + 18215732]));
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      ++iteration_count;
      *((float *)float_word - 1) = saved_state_address * (float)(1.0 / (float)(int)scaled_index_2);
      *(float *)float_word = weighted_sum * (float)(1.0 / (float)(int)scaled_index_2);
      *((float *)float_word + 1) = weighted_sum_2 * (float)(1.0 / (float)(int)scaled_index_2);
      float_word += 23;
    }
    while ( iteration_count < *a1 );
  }
  running_total = a1 + 2453;
  remaining_count_3 = 2;
  do
  {
    scaled_index_3 = *(running_total - 18);
    if ( scaled_index_3 > 0 )
      *(running_total - 18) = scaled_index_3 - 1;
    if ( *running_total > 0 )
      --*running_total;
    table_value = running_total[18];
    if ( table_value > 0 )
      running_total[18] = table_value - 1;
    table_value_2 = running_total[36];
    if ( table_value_2 > 0 )
      running_total[36] = table_value_2 - 1;
    table_value_3 = running_total[54];
    if ( table_value_3 > 0 )
      running_total[54] = table_value_3 - 1;
    table_value_4 = running_total[72];
    if ( table_value_4 > 0 )
      running_total[72] = table_value_4 - 1;
    table_value_5 = running_total[90];
    if ( table_value_5 > 0 )
      running_total[90] = table_value_5 - 1;
    table_value_6 = running_total[108];
    if ( table_value_6 > 0 )
      running_total[108] = table_value_6 - 1;
    table_value_7 = running_total[126];
    if ( table_value_7 > 0 )
      running_total[126] = table_value_7 - 1;
    table_value_8 = running_total[144];
    if ( table_value_8 > 0 )
      running_total[144] = table_value_8 - 1;
    table_value_9 = running_total[162];
    if ( table_value_9 > 0 )
      running_total[162] = table_value_9 - 1;
    table_value_10 = running_total[180];
    if ( table_value_10 > 0 )
      running_total[180] = table_value_10 - 1;
    table_value_11 = running_total[198];
    if ( table_value_11 > 0 )
      running_total[198] = table_value_11 - 1;
    table_value_12 = running_total[216];
    if ( table_value_12 > 0 )
      running_total[216] = table_value_12 - 1;
    table_value_13 = running_total[234];
    if ( table_value_13 > 0 )
      running_total[234] = table_value_13 - 1;
    table_value_14 = running_total[252];
    if ( table_value_14 > 0 )
      running_total[252] = table_value_14 - 1;
    table_value_15 = running_total[270];
    if ( table_value_15 > 0 )
      running_total[270] = table_value_15 - 1;
    table_value_16 = running_total[288];
    if ( table_value_16 > 0 )
      running_total[288] = table_value_16 - 1;
    table_value_17 = running_total[306];
    if ( table_value_17 > 0 )
      running_total[306] = table_value_17 - 1;
    table_value_18 = running_total[324];
    if ( table_value_18 > 0 )
      running_total[324] = table_value_18 - 1;
    table_value_19 = running_total[342];
    if ( table_value_19 > 0 )
      running_total[342] = table_value_19 - 1;
    table_value_20 = running_total[360];
    if ( table_value_20 > 0 )
      running_total[360] = table_value_20 - 1;
    table_value_21 = running_total[378];
    if ( table_value_21 > 0 )
      running_total[378] = table_value_21 - 1;
    table_value_22 = running_total[396];
    if ( table_value_22 > 0 )
      running_total[396] = table_value_22 - 1;
    table_value_23 = running_total[414];
    if ( table_value_23 > 0 )
      running_total[414] = table_value_23 - 1;
    table_value_24 = running_total[432];
    if ( table_value_24 > 0 )
      running_total[432] = table_value_24 - 1;
    table_value_25 = running_total[450];
    if ( table_value_25 > 0 )
      running_total[450] = table_value_25 - 1;
    table_value_26 = running_total[468];
    if ( table_value_26 > 0 )
      running_total[468] = table_value_26 - 1;
    table_value_27 = running_total[486];
    if ( table_value_27 > 0 )
      running_total[486] = table_value_27 - 1;
    table_value_28 = running_total[504];
    if ( table_value_28 > 0 )
      running_total[504] = table_value_28 - 1;
    table_value_29 = running_total[522];
    if ( table_value_29 > 0 )
      running_total[522] = table_value_29 - 1;
    table_value_30 = running_total[540];
    if ( table_value_30 > 0 )
      running_total[540] = table_value_30 - 1;
    running_total += 576;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  remaining_count_4 = *a1;
  iteration_count_2 = 0;
  if ( remaining_count_4 > 0 )
  {
    record_byte_offset_3 = &callee_output_word;
    running_total_2 = a1 + 20;
    do
    {
      iteration_count_3 = 0;
      running_total_3 = a1 + 2436;
      do
      {
        if ( *(running_total_3 - 1) > 0 && *running_total_3 == iteration_count_2 && !running_total_3[1] && !running_total_3[2] && !running_total_3[3] )
          break;
        ++iteration_count_3;
        running_total_3 += 18;
      }
      while ( iteration_count_3 < 64 );
      ++iteration_count_2;
      running_total_2 += 23;
      record_byte_offset_3 += 12;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
  }
  return 0; /* reset callers ignore the native result */
}
#undef weighted_sum_30
#undef saved_state_address_2
#undef saved_weighted_sum
#undef saved_weighted_sum_2
#undef weighted_sum_31
#undef scaled_value_7
#undef saved_weighted_sum_3
#undef saved_weighted_sum_4
#undef saved_weighted_sum_5
#undef saved_weighted_sum_6
#undef unused_written_slot
#undef saved_weighted_sum_7
#undef saved_weighted_sum_8
#undef saved_weighted_sum_9
#undef saved_weighted_sum_10
#undef saved_weighted_sum_11
#undef saved_weighted_sum_12
#undef weighted_sum_32
#undef callee_output_word
#undef unused_frame_slot_848

//----- (0000000140050C80) ----------------------------------------------------
__int64            sub_140050C80(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  __int64 result;
  unsigned int *record_byte_offset;
  int state_word;
  int i;
  __int64 cached_i;
  unsigned int shifted_bits;
  unsigned int *buffer_cursor;
  unsigned int *buffer_cursor_2;

  result = 0;
  if ( (int)g_1602E12E0 <= 0 )
  {
LABEL_5:
    if ( (int)g_1602E12E0 < 0x7FFF )
    {
      state_word = dword_14030186C;
      dword_140404A6C[4 * g_1602E12E0 + 133919262] = a3;
      if ( state_word >= 624 )
      {
        if ( state_word == 625 )
        {
          g_144AF96E0 = 5489;
          for ( i = 1; i < 624; ++i )
          {
            cached_i = i;
            shifted_bits = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
            dword_140404A6C[cached_i + 18600733] = shifted_bits;
          }
        }
        buffer_cursor = &g_144AF96E0;
        buffer_cursor_2 = &g_144AF9A6C;
        do
        {
          *buffer_cursor = buffer_cursor[397] ^ ((*buffer_cursor ^ (*buffer_cursor ^ buffer_cursor[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[buffer_cursor[1] & 1];
          ++buffer_cursor;
        }
        while ( (__int64)buffer_cursor < (__int64)&g_144AF9A6C );
        do
        {
          *buffer_cursor_2 = *(buffer_cursor_2 - 227) ^ ((*buffer_cursor_2 ^ (*buffer_cursor_2 ^ buffer_cursor_2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[buffer_cursor_2[1] & 1];
          ++buffer_cursor_2;
        }
        while ( (__int64)buffer_cursor_2 < (__int64)&g_144AFA09C );
        g_144AFA09C = g_144AF9D10
                                  ^ ((g_144AFA09C
                                    ^ (g_144AF96E0
                                     ^ g_144AFA09C)
                                    & 0x7FFFFFFF) >> 1)
                                  ^ dword_140301E08[g_144AF96E0 & 1];
        state_word = 0;
      }
      dword_14030186C = state_word + 1;
      dword_140404A6C[4 * g_1602E12E0 + 133919263] = (((((((dword_140404A6C[state_word + 18600733] >> 11)
                                                                        ^ dword_140404A6C[state_word + 18600733])
                                                                       & 0xFF3A58AD) << 7)
                                                                     ^ (dword_140404A6C[state_word + 18600733] >> 11)
                                                                     ^ dword_140404A6C[state_word + 18600733])
                                                                    & 0xFFFFDF8C) << 15)
                                                                  ^ ((((dword_140404A6C[state_word + 18600733] >> 11)
                                                                     ^ dword_140404A6C[state_word + 18600733])
                                                                    & 0xFF3A58AD) << 7)
                                                                  ^ (dword_140404A6C[state_word + 18600733] >> 11)
                                                                  ^ dword_140404A6C[state_word + 18600733]
                                                                  ^ (((((((((dword_140404A6C[state_word + 18600733] >> 11)
                                                                          ^ dword_140404A6C[state_word + 18600733])
                                                                         & 0xFF3A58AD) << 7)
                                                                       ^ (dword_140404A6C[state_word + 18600733] >> 11)
                                                                       ^ dword_140404A6C[state_word + 18600733])
                                                                      & 0xFFFFDF8C) << 15)
                                                                    ^ ((((dword_140404A6C[state_word + 18600733] >> 11)
                                                                       ^ dword_140404A6C[state_word + 18600733])
                                                                      & 0xFF3A58AD) << 7)
                                                                    ^ (dword_140404A6C[state_word + 18600733] >> 11)
                                                                    ^ dword_140404A6C[state_word + 18600733]) >> 18);
      dword_140404A6C[4 * g_1602E12E0 + 133919264] = sub_14009DE80();
      *a1 = dword_140404A6C[4 * g_1602E12E0 + 133919263];
      *a2 = dword_140404A6C[4 * g_1602E12E0 + 133919264];
      return g_1602E12E0++;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    record_byte_offset = &g_1602E12E4;
    while ( a3 != *record_byte_offset )
    {
      result = (unsigned int)(result + 1);
      record_byte_offset += 4;
      if ( (int)result >= (int)g_1602E12E0 )
        goto LABEL_5;
    }
    *a1 = dword_140404A6C[4 * (int)result + 133919263];
    *a2 = dword_140404A6C[4 * (int)result + 133919264];
  }
  return result;
}

//----- (000000014006A5F0) ----------------------------------------------------
__int64            sub_14006A5F0(int a1, int a2)
{
  __int64 float_word;
  __int64 input_value;
  __int64 audio_channel_offset;
  __int64 input_value_2;
  float combined_products;
  float combined_products_2;
  float weighted_sum;
  float weighted_sum_2;
  __m128 vector_result;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  unsigned int integer_difference;
  unsigned int masked_bits;
  float input_value_3;
  float scaled_ratio_3;
  float state_address;
  float state_address_2;
  float state_address_3;
  float square_root_2;
  float component_delta;
  float vector_result_2;
  signed int scaled_index;
  int table_value;
  int scaled_index_2;
  float weighted_sum_3;
  unsigned int limited_value;
  float weighted_sum_4;
  signed int table_value_2;
  signed int table_value_3;
  float weighted_sum_5;
  float scaled_value;
  float product_difference;
  float product_difference_2;
  float combined_products_3;
  float combined_products_4;
  unsigned int *record_byte_offset;
  unsigned int *state_address_4;
  __int64 shifted_bits;
  __int16 loaded_word;
  float combined_products_5;
  float weighted_sum_6;
  int table_value_4;
  int masked_bits_2;
  __int64 result;
  float saved_call_status;
  int state_address_5;
  float weighted_sum_7;
  int masked_bits_3;
  __int64 remaining_count;
  float limited_value_2;
  float saved_weighted_sum;
  float component_sum;
  __int64 scaled_index_3;
  float *sloword_result;
  unsigned int table_value_5;
  float weighted_sum_8;
  unsigned int saved_weighted_sum_2;
  float component_sum_2;
  __m128i converted_vector;
  __int64 masked_bits_4;
  float converted_vector_2;
  float weighted_sum_9;
  float weighted_sum_10;
  __int64 masked_bits_5;
  float combined_products_6;
  __int64 masked_bits_6;
  float component_delta_2;
  float combined_products_7;
  __m128i loaded_vector;
  float combined_products_8;
  __m128i loaded_vector_2;
  __m128i loaded_vector_3;
  __m128i loaded_vector_4;
  __m128i vector_result_3;
  __m128i si128;
  __m128i reordered_vector;
  __m128i reordered_vector_2;
  __m128i vector_result_4;
  __m128i reordered_vector_3;
  __m128i reordered_vector_4;
  __m128i vector_result_5;
  __m128i vector_result_6;
  __m128i vector_result_7;
  __m128i vector_result_8;
  __m128i vector_result_9;
  __m128i vector_result_10;
  __m128i vector_result_11;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i loaded_vector_5;
  __m128i vector_result_21;
  __m128i loaded_vector_6;
  int integer_sum;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006A5F0[288];
#define scaled_value_2 (*(float (*))(void *)(sr_frame_14006A5F0 + 0)) /* [rsp+20h] */
#define scaled_value_3 (*(float (*))(void *)(sr_frame_14006A5F0 + 4)) /* [rsp+24h] */
#define combined_products_9 (*(float (*))(void *)(sr_frame_14006A5F0 + 8)) /* [rsp+28h] */
#define component_sum_3 (*(float (*))(void *)(sr_frame_14006A5F0 + 12)) /* [rsp+2Ch] */
#define weighted_sum_11 (*(float (*))(void *)(sr_frame_14006A5F0 + 256)) /* [rsp+120h] */
#define square_root_3 (*(float (*))(void *)(sr_frame_14006A5F0 + 264)) /* [rsp+128h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_14006A5F0 + 264)) /* [rsp+128h] */
#define weighted_sum_12 (*(float (*))(void *)(sr_frame_14006A5F0 + 272)) /* [rsp+130h] */
#define saved_scaled_value (*(float (*))(void *)(sr_frame_14006A5F0 + 280)) /* [rsp+138h] */

  float_word = 30LL * (int)g_144970AB0;
  input_value = a1;
  audio_channel_offset = 278720LL * a1;
  input_value_2 = a2;
  combined_products = *(float *)&dword_140404A6C[audio_channel_offset + 606302] - *(float *)&dword_140404A6C[float_word + 18198546];
  vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)dword_140404A6C[audio_channel_offset + 606303]))  /* lane 0 = that word (was the array address, indexed as a vector) */;
  SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] - *(float *)&dword_140404A6C[float_word + 18198547];
  combined_products_2 = *(float *)&dword_140404A6C[audio_channel_offset + 606304] - *(float *)&dword_140404A6C[float_word + 18198548];
  square_root_3 = fsqrt((float)((float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]) + (float)(combined_products * combined_products)) + (float)(combined_products_2 * combined_products_2));
  weighted_sum = (float)((float)(SR_VEC_LANES(128, vector_result, f32)[0] * *(float *)&dword_140404A6C[float_word + 18198550])
             + (float)(combined_products * *(float *)&dword_140404A6C[float_word + 18198549]))
     + (float)(combined_products_2 * *(float *)&dword_140404A6C[float_word + 18198551]);
  weighted_sum_2 = (float)((float)(SR_VEC_LANES(128, vector_result, f32)[0] * *(float *)&dword_140404A6C[float_word + 18198553])
             + (float)(combined_products * *(float *)&dword_140404A6C[float_word + 18198552]))
     + (float)(combined_products_2 * *(float *)&dword_140404A6C[float_word + 18198554]);
  SR_VEC_LANES(128, vector_result, f32)[0] = (float)((float)(SR_VEC_LANES(128, vector_result, f32)[0] * *(float *)&dword_140404A6C[float_word + 18198556])
                          + (float)(combined_products * *(float *)&dword_140404A6C[float_word + 18198555]))
                  + (float)(combined_products_2 * *(float *)&dword_140404A6C[float_word + 18198557]);
  square_root = fsqrt((float)((float)(weighted_sum_2 * weighted_sum_2) + (float)(weighted_sum * weighted_sum)) + (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    vector_result = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  }
  else
  {
    scaled_ratio = weighted_sum * (float)(1.0 / square_root);
    scaled_ratio_2 = weighted_sum_2 * (float)(1.0 / square_root);
    SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * (float)(1.0 / square_root);
  }
  integer_difference = a1 - 56;
  *(float *)&masked_bits = g_140404A80 * (float)(square_root_3 + 8.0);
  if ( (unsigned int)(a1 - 56) <= 7 )
    *(float *)&masked_bits = g_140404A80 * 16.0;
  input_value_3 = (float)a2;
  scaled_ratio_3 = 1.0 / (float)a2;
  state_address = (float)(*(float *)&dword_140404A6C[audio_channel_offset + 606302]
              - (float)((float)((float)(*(float *)&dword_140404A6C[audio_channel_offset + 606305]
                                      - *(float *)&dword_140404A6C[float_word + 18198558])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[float_word + 18198546];
  state_address_2 = (float)(*(float *)&dword_140404A6C[audio_channel_offset + 606303]
              - (float)((float)((float)(*(float *)&dword_140404A6C[audio_channel_offset + 606306]
                                      - *(float *)&dword_140404A6C[float_word + 18198559])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[float_word + 18198547];
  state_address_3 = (float)(*(float *)&dword_140404A6C[audio_channel_offset + 606304]
              - (float)((float)((float)(*(float *)&dword_140404A6C[audio_channel_offset + 606307]
                                      - *(float *)&dword_140404A6C[float_word + 18198560])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[float_word + 18198548];
  square_root_2 = (float)(*(float *)&masked_bits
              - (float)((float)(fsqrt((float)((float)(state_address_2 * state_address_2) + (float)(state_address * state_address)) + (float)(state_address_3 * state_address_3)) + 8.0)
                      * g_140404A80))
      * scaled_ratio_3;
  if ( integer_difference <= 7 )
    square_root_2 = 0.0;
  component_delta = sub_14023F704(scaled_ratio, -SR_VEC_LANES(128, vector_result, f32)[0]);
  SR_VEC_LANES(128, vector_result, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]) + (float)(scaled_ratio * scaled_ratio);
  vector_result_2 = sub_14023EDE4(scaled_ratio_2, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(vector_result)), f64)[0]);
  scaled_index = (int)((vector_result_2 + 1.570796326794897) * (double)(int)g_16A1BB988 * 0.3183098861837907);
  if ( scaled_index < 0 )
    scaled_index = 0;
  if ( (signed int)(g_16A1BB988 - 1) < scaled_index )
    scaled_index = g_16A1BB988 - 1;
  table_value = dword_140404A6C[scaled_index + 175561672];
  if ( table_value )
    scaled_index_2 = (int)((component_delta + 6.283185307179586) * (double)table_value * 0.1591549430918953) % table_value;
  else
    scaled_index_2 = 0;
  weighted_sum_3 = *(float *)&dword_140404A6C[audio_channel_offset + 606414];
  *(float *)&limited_value = fminf(*(float *)&dword_140404A6C[audio_channel_offset + 606308] / (float)(square_root_3 + 0.0625), 1.0)
                 * *(float *)&dword_140404A6C[audio_channel_offset + 327699];
  weighted_sum_4 = (float)(int)dword_140404A6C[256 * (__int64)scaled_index + 176086216 + 2 * scaled_index_2];
  weighted_sum_12 = weighted_sum_4;
  weighted_sum_11 = (float)(int)dword_140404A6C[256 * (__int64)scaled_index + 176086217 + 2 * scaled_index_2];
  if ( weighted_sum_3 == 0.0 )
  {
    scaled_value_3 = 0.0;
    table_value_2 = scaled_index;
    combined_products_9 = 0.0;
    table_value_3 = scaled_index_2;
    scaled_value_2 = 0.0;
    weighted_sum_5 = 0.0;
    scaled_value = 0.0;
    product_difference = 0.0;
  }
  else
  {
    weighted_sum_5 = *(float *)&dword_140404A6C[audio_channel_offset + 606415];
    table_value_2 = dword_140404A6C[audio_channel_offset + 606412];
    table_value_3 = dword_140404A6C[audio_channel_offset + 606413];
    product_difference_2 = *(float *)&masked_bits - weighted_sum_3;
    masked_bits = dword_140404A6C[audio_channel_offset + 606414];
    combined_products_3 = *(float *)&limited_value - *(float *)&dword_140404A6C[audio_channel_offset + 606416];
    limited_value = dword_140404A6C[audio_channel_offset + 606416];
    combined_products_4 = weighted_sum_4 - *(float *)&dword_140404A6C[audio_channel_offset + 606410];
    weighted_sum_12 = *(float *)&dword_140404A6C[audio_channel_offset + 606410];
    weighted_sum_4 = weighted_sum_12;
    scaled_value = product_difference_2 * scaled_ratio_3;
    scaled_value_2 = combined_products_3 * scaled_ratio_3;
    weighted_sum_11 = *(float *)&dword_140404A6C[audio_channel_offset + 606411];
    scaled_value_3 = combined_products_4 * scaled_ratio_3;
    product_difference = (float)(square_root_2 - weighted_sum_5) * scaled_ratio_3;
    combined_products_9 = (float)((float)(int)dword_140404A6C[256 * (__int64)scaled_index + 176086217 + 2 * scaled_index_2] - weighted_sum_11) * scaled_ratio_3;
  }
  record_byte_offset = &g_144981690;
  saved_weighted_sum_3 = weighted_sum_5;
  saved_scaled_value = scaled_value;
  state_address_4 = &dword_140404A6C[32 * (table_value_3 + ((__int64)table_value_2 << 7)) + 175561959];
  shifted_bits = (scaled_index_2 + ((scaled_index - (__int64)table_value_2) << 7) - table_value_3) << 7;
  do
  {
    *((_WORD *)record_byte_offset - 96) = *(_WORD *)((char *)state_address_4 + shifted_bits);
    *((_WORD *)record_byte_offset - 64) = *(_WORD *)state_address_4;
    *((_WORD *)record_byte_offset - 32) = *(_WORD *)((char *)state_address_4 + shifted_bits + 2);
    *(_WORD *)record_byte_offset = *((_WORD *)state_address_4 + 1);
    *((_WORD *)record_byte_offset - 95) = *(_WORD *)((char *)state_address_4 + shifted_bits - 4);
    *((_WORD *)record_byte_offset - 63) = *((_WORD *)state_address_4 - 2);
    *((_WORD *)record_byte_offset - 31) = *(_WORD *)((char *)state_address_4 + shifted_bits - 2);
    *((_WORD *)record_byte_offset + 1) = *((_WORD *)state_address_4 - 1);
    *((_WORD *)record_byte_offset - 94) = *(_WORD *)((char *)state_address_4 + shifted_bits - 8);
    *((_WORD *)record_byte_offset - 62) = *((_WORD *)state_address_4 - 4);
    *((_WORD *)record_byte_offset - 30) = *(_WORD *)((char *)state_address_4 + shifted_bits - 6);
    *((_WORD *)record_byte_offset + 2) = *((_WORD *)state_address_4 - 3);
    *((_WORD *)record_byte_offset - 93) = *(_WORD *)((char *)state_address_4 + shifted_bits - 12);
    *((_WORD *)record_byte_offset - 61) = *((_WORD *)state_address_4 - 6);
    *((_WORD *)record_byte_offset - 29) = *(_WORD *)((char *)state_address_4 + shifted_bits - 10);
    *((_WORD *)record_byte_offset + 3) = *((_WORD *)state_address_4 - 5);
    *((_WORD *)record_byte_offset - 92) = *(_WORD *)((char *)state_address_4 + shifted_bits - 16);
    *((_WORD *)record_byte_offset - 60) = *((_WORD *)state_address_4 - 8);
    *((_WORD *)record_byte_offset - 28) = *(_WORD *)((char *)state_address_4 + shifted_bits - 14);
    *((_WORD *)record_byte_offset + 4) = *((_WORD *)state_address_4 - 7);
    *((_WORD *)record_byte_offset - 91) = *(_WORD *)((char *)state_address_4 + shifted_bits - 20);
    *((_WORD *)record_byte_offset - 59) = *((_WORD *)state_address_4 - 10);
    *((_WORD *)record_byte_offset - 27) = *(_WORD *)((char *)state_address_4 + shifted_bits - 18);
    *((_WORD *)record_byte_offset + 5) = *((_WORD *)state_address_4 - 9);
    *((_WORD *)record_byte_offset - 90) = *(_WORD *)((char *)state_address_4 + shifted_bits - 24);
    *((_WORD *)record_byte_offset - 58) = *((_WORD *)state_address_4 - 12);
    *((_WORD *)record_byte_offset - 26) = *(_WORD *)((char *)state_address_4 + shifted_bits - 22);
    *((_WORD *)record_byte_offset + 6) = *((_WORD *)state_address_4 - 11);
    *((_WORD *)record_byte_offset - 89) = *(_WORD *)((char *)state_address_4 + shifted_bits - 28);
    *((_WORD *)record_byte_offset - 57) = *((_WORD *)state_address_4 - 14);
    *((_WORD *)record_byte_offset - 25) = *(_WORD *)((char *)state_address_4 + shifted_bits - 26);
    *((_WORD *)record_byte_offset + 7) = *((_WORD *)state_address_4 - 13);
    *((_WORD *)record_byte_offset - 88) = *(_WORD *)((char *)state_address_4 + shifted_bits - 32);
    *((_WORD *)record_byte_offset - 56) = *((_WORD *)state_address_4 - 16);
    *((_WORD *)record_byte_offset - 24) = *(_WORD *)((char *)state_address_4 + shifted_bits - 30);
    *((_WORD *)record_byte_offset + 8) = *((_WORD *)state_address_4 - 15);
    *((_WORD *)record_byte_offset - 87) = *(_WORD *)((char *)state_address_4 + shifted_bits - 36);
    *((_WORD *)record_byte_offset - 55) = *((_WORD *)state_address_4 - 18);
    *((_WORD *)record_byte_offset - 23) = *(_WORD *)((char *)state_address_4 + shifted_bits - 34);
    *((_WORD *)record_byte_offset + 9) = *((_WORD *)state_address_4 - 17);
    *((_WORD *)record_byte_offset - 86) = *(_WORD *)((char *)state_address_4 + shifted_bits - 40);
    loaded_word = *((_WORD *)state_address_4 - 20);
    state_address_4 -= 16;
    *((_WORD *)record_byte_offset - 54) = loaded_word;
    *((_WORD *)record_byte_offset - 22) = *(_WORD *)((char *)state_address_4 + shifted_bits + 26);
    *((_WORD *)record_byte_offset + 10) = *((_WORD *)state_address_4 + 13);
    *((_WORD *)record_byte_offset - 85) = *(_WORD *)((char *)state_address_4 + shifted_bits + 20);
    *((_WORD *)record_byte_offset - 53) = *((_WORD *)state_address_4 + 10);
    *((_WORD *)record_byte_offset - 21) = *(_WORD *)((char *)state_address_4 + shifted_bits + 22);
    *((_WORD *)record_byte_offset + 11) = *((_WORD *)state_address_4 + 11);
    *((_WORD *)record_byte_offset - 84) = *(_WORD *)((char *)state_address_4 + shifted_bits + 16);
    *((_WORD *)record_byte_offset - 52) = *((_WORD *)state_address_4 + 8);
    *((_WORD *)record_byte_offset - 20) = *(_WORD *)((char *)state_address_4 + shifted_bits + 18);
    *((_WORD *)record_byte_offset + 12) = *((_WORD *)state_address_4 + 9);
    *((_WORD *)record_byte_offset - 83) = *(_WORD *)((char *)state_address_4 + shifted_bits + 12);
    *((_WORD *)record_byte_offset - 51) = *((_WORD *)state_address_4 + 6);
    *((_WORD *)record_byte_offset - 19) = *(_WORD *)((char *)state_address_4 + shifted_bits + 14);
    *((_WORD *)record_byte_offset + 13) = *((_WORD *)state_address_4 + 7);
    *((_WORD *)record_byte_offset - 82) = *(_WORD *)((char *)state_address_4 + shifted_bits + 8);
    *((_WORD *)record_byte_offset - 50) = *((_WORD *)state_address_4 + 4);
    *((_WORD *)record_byte_offset - 18) = *(_WORD *)((char *)state_address_4 + shifted_bits + 10);
    *((_WORD *)record_byte_offset + 14) = *((_WORD *)state_address_4 + 5);
    *((_WORD *)record_byte_offset - 81) = *(_WORD *)((char *)state_address_4 + shifted_bits + 4);
    *((_WORD *)record_byte_offset - 49) = *((_WORD *)state_address_4 + 2);
    *((_WORD *)record_byte_offset - 17) = *(_WORD *)((char *)state_address_4 + shifted_bits + 6);
    *((_WORD *)record_byte_offset + 15) = *((_WORD *)state_address_4 + 3);
    record_byte_offset += 8;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_1449816D0 );
  component_sum_3 = 0.0;
  combined_products_5 = 1.0 - (float)((float)((float)(product_difference * 0.5) * input_value_3) + weighted_sum_5);
  if ( integer_difference <= 7 )
    combined_products_5 = 1.0;
  weighted_sum_6 = *(float *)&dword_140404A6C[audio_channel_offset + 606309];
  table_value_4 = dword_140404A6C[audio_channel_offset + 327772];
  masked_bits_2 = table_value_4 - ((int)(float)((float)(input_value_3 * combined_products_5) + weighted_sum_6) & 0x3FFFF);
  result = (unsigned int)(masked_bits_2 + 0x40000);
  if ( masked_bits_2 >= -131072 )
    result = (unsigned int)masked_bits_2;
  saved_call_status = (float)(int)result;
  if ( integer_difference > 7 )
  {
    if ( saved_call_status < 16.0 )
    {
      state_address_5 = ((table_value_4 - 16) & 0x3FFFF) - (int)weighted_sum_6;
      result = (unsigned int)(state_address_5 + 0x40000);
      if ( state_address_5 >= -131072 )
        result = (unsigned int)state_address_5;
      combined_products_5 = (float)(int)result * scaled_ratio_3;
    }
  }
  else
  {
    saved_call_status = 16.0;
  }
  weighted_sum_7 = (float)((float)((float)(scaled_value * 0.5) * input_value_3) + *(float *)&masked_bits) + 8192.0;
  if ( saved_call_status > weighted_sum_7 )
  {
    masked_bits_3 = ((int)(float)((float)table_value_4 - weighted_sum_7) & 0x3FFFF) - (int)weighted_sum_6;
    result = (unsigned int)(masked_bits_3 + 0x40000);
    if ( masked_bits_3 >= -131072 )
      result = (unsigned int)masked_bits_3;
    combined_products_5 = (float)(int)result * scaled_ratio_3;
  }
  if ( integer_difference <= 7 )
    combined_products_5 = 1.0;
  remaining_count = input_value_2;
  limited_value_2 = fminf(fmaxf(combined_products_5, 0.0625), 16.0);
  saved_weighted_sum = weighted_sum_11;
  if ( (int)input_value_2 > 0 )
  {
    component_sum = 0.0;
    scaled_index_3 = 278720 * input_value;
    sloword_result = (float *)&dword_140404A6C[audio_channel_offset + 589919];
    do
    {
      table_value_5 = dword_140404A6C[audio_channel_offset + 606310];
      if ( table_value_5 )
      {
        integer_sum = table_value_5 + 1;
        weighted_sum_10 = 0.0;
        if ( (float)integer_sum >= *(float *)&masked_bits )
          integer_sum = 0;
        dword_140404A6C[audio_channel_offset + 606310] = integer_sum;
      }
      else
      {
        weighted_sum_8 = *(float *)&dword_140404A6C[audio_channel_offset + 606309];
        saved_weighted_sum_2 = (int)weighted_sum_8;
        component_sum_2 = weighted_sum_8 + limited_value_2;
        converted_vector = _mm_cvtsi32_si128(saved_weighted_sum_2);
        masked_bits_4 = saved_weighted_sum_2 & 0x3FFFF;
        converted_vector_2 = *(float *)&dword_140404A6C[audio_channel_offset + 606309] - SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = (float)(1.0 - converted_vector_2) * *(float *)&dword_140404A6C[audio_channel_offset + 327773 + masked_bits_4];
        weighted_sum_9 = converted_vector_2 * *(float *)&dword_140404A6C[audio_channel_offset + 327773 + (((_DWORD)masked_bits_4 + 1) & 0x3FFFF)];
        *(float *)&dword_140404A6C[audio_channel_offset + 606309] = component_sum_2;
        weighted_sum_10 = *(float *)SR_VEC_LANES(128, converted_vector, i32) + weighted_sum_9;
        if ( component_sum_2 >= 262144.0 )
          *(float *)&dword_140404A6C[audio_channel_offset + 606309] = component_sum_2 - 262144.0;
        saved_weighted_sum = weighted_sum_11;
      }
      *(float *)&dword_140404A6C[scaled_index_3 + 606346 + (int)dword_140404A6C[audio_channel_offset + 606345]] = weighted_sum_10;
      masked_bits_5 = ((unsigned __int8)dword_140404A6C[audio_channel_offset + 606345] - (unsigned __int8)(int)weighted_sum_4) & 0x3F;
      combined_products_6 = (float)((float)(1.0 - (float)(weighted_sum_4 - (float)(int)weighted_sum_4)) * *(float *)&dword_140404A6C[masked_bits_5 + 606346 + scaled_index_3])
          + (float)((float)(weighted_sum_4 - (float)(int)weighted_sum_4) * *(float *)&dword_140404A6C[scaled_index_3 + 606346 + (((_BYTE)masked_bits_5 - 1) & 0x3F)]);
      masked_bits_6 = ((unsigned __int8)dword_140404A6C[audio_channel_offset + 606345] - (unsigned __int8)(int)saved_weighted_sum) & 0x3F;
      component_delta_2 = saved_weighted_sum - (float)(int)saved_weighted_sum;
      combined_products_7 = (float)(1.0 - component_delta_2) * *(float *)&dword_140404A6C[masked_bits_6 + 606346 + scaled_index_3];
      LOWORD(g_1449816D0) = (int)(float)((float)(combined_products_6 * component_sum) * 32767.0);
      HIWORD(g_1449816D0) = g_1449816D0;
      loaded_vector = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606313] + 2));
      combined_products_8 = combined_products_7 + (float)(component_delta_2 * *(float *)&dword_140404A6C[scaled_index_3 + 606346 + (((_BYTE)masked_bits_6 - 1) & 0x3F)]);
      LOWORD(g_1449816D4) = (int)(float)((float)((float)(1.0 - component_sum) * combined_products_6) * 32767.0);
      HIWORD(g_1449816D4) = g_1449816D4;
      LOWORD(g_1449816DC) = (int)(float)((float)((float)(1.0 - component_sum) * combined_products_8) * 32767.0);
      loaded_vector_2 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606329] + 2));
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606313] = loaded_vector;
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606329] = loaded_vector_2;
      loaded_vector_3 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606333] + 2));
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606317] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606317]
                                                                                  + 2));
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606333] = loaded_vector_3;
      loaded_vector_4 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606337] + 2));
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606321] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[audio_channel_offset + 606321]
                                                                                  + 2));
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606337] = loaded_vector_4;
      vector_result_3 = _mm_srli_si128(_mm_loadu_si128((     __m128i *)&dword_140404A6C[audio_channel_offset + 606341]), 2);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606325] = _mm_srli_si128(
                                                    _mm_loadu_si128((     __m128i *)&dword_140404A6C[audio_channel_offset + 606325]),
                                                    2);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606341] = vector_result_3;
      LOWORD(g_1449816D8) = (int)(float)((float)(combined_products_8 * component_sum) * 32767.0);
      HIWORD(g_1449816D8) = g_1449816D8;
      HIWORD(g_1449816DC) = (int)(float)((float)((float)(1.0 - component_sum) * combined_products_8) * 32767.0);
      *(float *)&masked_bits = *(float *)&masked_bits + saved_scaled_value;
      si128 = _mm_loadu_si128((     __m128i *)&g_1449816D0);
      reordered_vector = _mm_shuffle_epi32(si128, 0);
      reordered_vector_2 = _mm_shuffle_epi32(si128, 170);
      vector_result_4 = _mm_mulhi_epi16(reordered_vector_2, *(__m128i_u *)&g_144981650);
      reordered_vector_3 = _mm_shuffle_epi32(si128, 255);
      reordered_vector_4 = _mm_shuffle_epi32(si128, 85);
      vector_result_5 = _mm_mulhi_epi16(reordered_vector_3, *(__m128i_u *)&g_144981690);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606313] = _mm_add_epi16(
                                                    _mm_add_epi16(
                                                      _mm_mulhi_epi16(reordered_vector, *(__m128i_u *)&g_1449815D0),
                                                      _mm_mulhi_epi16(reordered_vector_4, *(__m128i_u *)&g_144981610)),
                                                    *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606313]);
      vector_result_6 = _mm_mulhi_epi16(reordered_vector, *(__m128i_u *)&g_1449815E0);
      vector_result_7 = _mm_add_epi16(_mm_add_epi16(vector_result_4, vector_result_5), *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606329]);
      vector_result_8 = _mm_mulhi_epi16(reordered_vector_4, *(__m128i_u *)&g_144981620);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606329] = vector_result_7;
      vector_result_9 = _mm_mulhi_epi16(reordered_vector_2, *(__m128i_u *)&g_144981660);
      vector_result_10 = _mm_add_epi16(_mm_add_epi16(vector_result_6, vector_result_8), *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606317]);
      vector_result_11 = _mm_mulhi_epi16(reordered_vector_3, *(__m128i_u *)&g_1449816A0);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606317] = vector_result_10;
      vector_result_12 = _mm_mulhi_epi16(reordered_vector, *(__m128i_u *)&g_1449815F0);
      vector_result_13 = _mm_add_epi16(_mm_add_epi16(vector_result_9, vector_result_11), *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606333]);
      vector_result_14 = _mm_mulhi_epi16(reordered_vector_4, *(__m128i_u *)&g_144981630);
      vector_result_15 = _mm_mulhi_epi16(reordered_vector_4, *(__m128i_u *)&g_144981640);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606333] = vector_result_13;
      vector_result_16 = _mm_mulhi_epi16(reordered_vector_2, *(__m128i_u *)&g_144981670);
      vector_result_17 = _mm_add_epi16(_mm_add_epi16(vector_result_12, vector_result_14), *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606321]);
      vector_result_18 = _mm_mulhi_epi16(reordered_vector_3, *(__m128i_u *)&g_1449816B0);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606321] = vector_result_17;
      vector_result_19 = _mm_mulhi_epi16(_mm_loadu_si128((     __m128i *)&g_1449816C0), reordered_vector_3);
      weighted_sum_5 = saved_weighted_sum_3 + product_difference;
      vector_result_20 = _mm_add_epi16(_mm_add_epi16(vector_result_16, vector_result_18), *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606337]);
      loaded_vector_5 = _mm_loadu_si128((     __m128i *)&g_144981600);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606337] = vector_result_20;
      vector_result_21 = _mm_add_epi16(vector_result_15, _mm_mulhi_epi16(loaded_vector_5, reordered_vector));
      loaded_vector_6 = _mm_loadu_si128((     __m128i *)&g_144981680);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606325] = _mm_add_epi16(vector_result_21, *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606325]);
      *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606341] = _mm_add_epi16(
                                                    _mm_add_epi16(vector_result_19, _mm_mulhi_epi16(loaded_vector_6, reordered_vector_2)),
                                                    *(__m128i_u *)&dword_140404A6C[audio_channel_offset + 606341]);
      *(float *)SR_VEC_LANES(128, loaded_vector_6, i32) = (float)SLOWORD(dword_140404A6C[audio_channel_offset + 606313]);
      *sloword_result = (float)((float)SLOWORD(dword_140404A6C[audio_channel_offset + 606329]) * 0.000061035156) * *(float *)&limited_value;
      *(float *)SR_VEC_LANES(128, loaded_vector_6, i32) = (float)(*(float *)SR_VEC_LANES(128, loaded_vector_6, i32) * 0.000061035156) * *(float *)&limited_value;
      *(float *)&limited_value = *(float *)&limited_value + scaled_value_2;
      *(sloword_result - 1) = *(float *)SR_VEC_LANES(128, loaded_vector_6, i32);
      result = ((unsigned __int8)dword_140404A6C[audio_channel_offset + 606345] + 1) & 0x3F;
      dword_140404A6C[audio_channel_offset + 606345] = result;
      sloword_result += 2;
      saved_weighted_sum_3 = saved_weighted_sum_3 + product_difference;
      component_sum = component_sum_3 + scaled_ratio_3;
      weighted_sum_4 = weighted_sum_12 + scaled_value_3;
      saved_weighted_sum = weighted_sum_11 + combined_products_9;
      component_sum_3 = component_sum_3 + scaled_ratio_3;
      weighted_sum_12 = weighted_sum_12 + scaled_value_3;
      weighted_sum_11 = weighted_sum_11 + combined_products_9;
      --remaining_count;
    }
    while ( remaining_count );
  }
  dword_140404A6C[audio_channel_offset + 606413] = scaled_index_2;
  dword_140404A6C[audio_channel_offset + 606414] = masked_bits;
  *(float *)&dword_140404A6C[audio_channel_offset + 606410] = weighted_sum_4;
  dword_140404A6C[audio_channel_offset + 606416] = limited_value;
  *(float *)&dword_140404A6C[audio_channel_offset + 606415] = weighted_sum_5;
  *(float *)&dword_140404A6C[audio_channel_offset + 606411] = saved_weighted_sum;
  dword_140404A6C[audio_channel_offset + 606412] = scaled_index;
  return result;
}
#undef scaled_value_2
#undef scaled_value_3
#undef combined_products_9
#undef component_sum_3
#undef weighted_sum_11
#undef square_root_3
#undef saved_weighted_sum_3
#undef weighted_sum_12
#undef saved_scaled_value

//----- (000000014009DE80) ----------------------------------------------------
__int64 sub_14009DE80()
{
  int state_word;
  unsigned int *buffer_cursor;
  unsigned int *buffer_cursor_2;

  state_word = dword_14030186C;
  if ( dword_14030186C >= 624 )
  {
    if ( dword_14030186C == 625 )
      sub_1400C2D50(0x1571u);
    buffer_cursor = &g_144AF96E0;
    buffer_cursor_2 = &g_144AF9A6C;
    do
    {
      *buffer_cursor = buffer_cursor[397] ^ ((*buffer_cursor ^ (*buffer_cursor ^ buffer_cursor[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[buffer_cursor[1] & 1];
      ++buffer_cursor;
    }
    while ( (__int64)buffer_cursor < (__int64)&g_144AF9A6C );
    do
    {
      *buffer_cursor_2 = *(buffer_cursor_2 - 227) ^ ((*buffer_cursor_2 ^ (*buffer_cursor_2 ^ buffer_cursor_2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[buffer_cursor_2[1] & 1];
      ++buffer_cursor_2;
    }
    while ( (__int64)buffer_cursor_2 < (__int64)&g_144AFA09C );
    g_144AFA09C = g_144AF9D10
                              ^ ((g_144AFA09C
                                ^ (g_144AFA09C
                                 ^ g_144AF96E0)
                                & 0x7FFFFFFF) >> 1)
                              ^ dword_140301E08[g_144AF96E0 & 1];
    state_word = 0;
  }
  dword_14030186C = state_word + 1;
  return (((((((dword_140404A6C[state_word + 18600733] >> 11) ^ dword_140404A6C[state_word + 18600733]) & 0xFF3A58AD) << 7)
          ^ (dword_140404A6C[state_word + 18600733] >> 11)
          ^ dword_140404A6C[state_word + 18600733])
         & 0xFFFFDF8C) << 15)
       ^ ((((dword_140404A6C[state_word + 18600733] >> 11) ^ dword_140404A6C[state_word + 18600733]) & 0xFF3A58AD) << 7)
       ^ (dword_140404A6C[state_word + 18600733] >> 11)
       ^ dword_140404A6C[state_word + 18600733]
       ^ (((((((((dword_140404A6C[state_word + 18600733] >> 11) ^ dword_140404A6C[state_word + 18600733]) & 0xFF3A58AD) << 7)
            ^ (dword_140404A6C[state_word + 18600733] >> 11)
            ^ dword_140404A6C[state_word + 18600733])
           & 0xFFFFDF8C) << 15)
         ^ ((((dword_140404A6C[state_word + 18600733] >> 11) ^ dword_140404A6C[state_word + 18600733]) & 0xFF3A58AD) << 7)
         ^ (dword_140404A6C[state_word + 18600733] >> 11)
         ^ dword_140404A6C[state_word + 18600733]) >> 18);
}

//----- (00000001400C2BB0) ----------------------------------------------------
__int64            sub_1400C2BB0(__int64 a1, int a2)
{
  int element_index;
  __int64 saved_element_index;
  unsigned int shifted_bits;
  int cached_integer_sum;
  int remaining_count;
  int cached_integer_sum_2;
  __int64 input_value;
  __int64 lookup_index;
  __int64 cached_integer_sum_3;
  __int64 integer_sum;
  int integer_sum_2;
  int integer_sum_3;
  unsigned int state_word;
  __int64 integer_sum_4;
  int remaining_count_2;
  __int64 lookup_index_2;
  int integer_sum_5;
  unsigned int shifted_bits_2;
  __int64 result;
  __int64 integer_sum_6;

  element_index = 1;
  g_144AF96E0 = 19650218;
  do
  {
    saved_element_index = element_index;
    shifted_bits = element_index + 1812433253 * (dword_140404A6C[element_index + 18600732] ^ (dword_140404A6C[element_index + 18600732] >> 30));
    ++element_index;
    dword_140404A6C[saved_element_index + 18600733] = shifted_bits;
  }
  while ( element_index < 624 );
  cached_integer_sum = 0;
  dword_14030186C = element_index;
  remaining_count = a2;
  if ( a2 < 624 )
    remaining_count = 624;
  cached_integer_sum_2 = 1;
  if ( remaining_count )
  {
    input_value = a2;
    lookup_index = 1;
    cached_integer_sum_3 = 0;
    do
    {
      integer_sum = cached_integer_sum_3 + 1;
      integer_sum_2 = cached_integer_sum_2 + 1;
      integer_sum_3 = cached_integer_sum + 1;
      cached_integer_sum_2 = 1;
      dword_140404A6C[lookup_index + 18600733] = cached_integer_sum
                                      + *(_DWORD *)(a1 + 4 * cached_integer_sum_3)
                                      + (dword_140404A6C[lookup_index + 18600733]
                                       ^ (1664525
                                        * (dword_140404A6C[lookup_index + 18600732] ^ (dword_140404A6C[lookup_index + 18600732] >> 30))));
      state_word = g_144AF96E0;
      integer_sum_4 = lookup_index + 1;
      if ( integer_sum_2 < 624 )
        cached_integer_sum_2 = integer_sum_2;
      else
        state_word = g_144AFA09C;
      lookup_index = 1;
      g_144AF96E0 = state_word;
      if ( integer_sum_2 < 624 )
        lookup_index = integer_sum_4;
      cached_integer_sum = 0;
      if ( integer_sum < input_value )
        cached_integer_sum = integer_sum_3;
      cached_integer_sum_3 = 0;
      if ( integer_sum < input_value )
        cached_integer_sum_3 = integer_sum;
      --remaining_count;
    }
    while ( remaining_count );
  }
  remaining_count_2 = 623;
  lookup_index_2 = cached_integer_sum_2;
  do
  {
    integer_sum_5 = cached_integer_sum_2 + 1;
    shifted_bits_2 = (dword_140404A6C[lookup_index_2 + 18600733]
         ^ (1566083941 * (dword_140404A6C[lookup_index_2 + 18600732] ^ (dword_140404A6C[lookup_index_2 + 18600732] >> 30))))
        - cached_integer_sum_2;
    cached_integer_sum_2 = 1;
    dword_140404A6C[lookup_index_2 + 18600733] = shifted_bits_2;
    result = g_144AF96E0;
    integer_sum_6 = lookup_index_2 + 1;
    if ( integer_sum_5 >= 624 )
      result = g_144AFA09C;
    lookup_index_2 = 1;
    if ( integer_sum_5 < 624 )
      lookup_index_2 = integer_sum_6;
    g_144AF96E0 = result;
    if ( integer_sum_5 < 624 )
      cached_integer_sum_2 = integer_sum_5;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  g_144AF96E0 = 0x80000000;
  return result;
}

//----- (00000001400D3340) ----------------------------------------------------
void            sub_1400D3340(int a1)
{
  __int64 record_word_offset;
  __int64 masked_bits;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 masked_bits_2;
  __int64 scaled_index_3;
  __int64 float_word;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  signed int masked_bits_3;
  float scaled_ratio;
  signed int scaled_index_8;
  int integer_difference;
  int iteration_count;
  unsigned int integer_difference_2;
  int scaled_index_9;
  float weighted_sum;
  signed int masked_bits_4;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float scaled_ratio_2;
  int iteration_count_2;
  float component_sum;
  int shifted_bits;
  unsigned int *state_address;
  __int64 shifted_bits_2;
  __int64 remaining_count;
  unsigned int *saved_state_address;
  __int64 remaining_count_2;
  unsigned int *running_total;
  __int64 remaining_count_3;
  int iteration_count_3;
  int shifted_bits_3;
  int record_byte_offset;
  __int64 running_total_2;
  int integer_sum;
  __int64 iteration_count_4;
  int record_byte_offset_2;
  __int64 state_address_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  int iteration_count_5;
  float component_sum_2;
  __int64 scaled_index_10;
  int iteration_count_6;
  __int64 running_total_3;
  float component_sum_3;
  __int64 remaining_count_4;
  __int64 masked_bits_5;
  __int64 remaining_count_5;
  __int64 saved_masked_bits;
  __int64 iteration_count_7;
  int iteration_count_8;
  __int64 running_total_4;
  __int64 iteration_count_9;
  int iteration_count_10;
  __int64 running_total_5;
  __int64 iteration_count_11;
  __int64 i;
  __int64 shifted_bits_4;
  signed int iteration_count_12;
  unsigned int *state_address_3;
  unsigned int scaled_index_11;
  float component_delta;
  float product_difference;
  float square_root;
  unsigned int float_word_2;
  float scaled_ratio_3;
  float scaled_value;
  float scaled_value_2;
  __int64 masked_bits_6;
  unsigned int *state_address_4;
  __int64 remaining_count_6;
  int cached_integer_difference;
  int iteration_count_13;
  signed int cached_masked_bits;
  __int64 remaining_count_7;
  unsigned int *saved_state_address_2;
  int element_index;
  int scaled_index_12;
  unsigned int shifted_bits_5;
  float shifted_bits_6;
  __int64 iteration_count_14;
  __int64 saved_iteration_count;
  __int64 remaining_count_8;
  char *record_byte_offset_3;
  float product_difference_2;
  float product_difference_3;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_value_3;
  float scaled_value_4;
  __int64 scaled_index_13;
  unsigned int loaded_word;
  float *weighted_sum_9;
  __int64 remaining_count_9;
  float weighted_sum_10;
  int scaled_index_14;
  int scaled_index_15;
  unsigned int shifted_bits_7;
  unsigned int shifted_bits_8;
  float limited_value;
  float weighted_sum_11;
  int table_value;
  int table_value_2;
  unsigned int shifted_bits_9;
  float shifted_bits_10;
  float limited_value_2;
  float squared_length;
  float *weighted_sum_12;
  __int64 remaining_count_10;
  float limited_value_3;
  float limited_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D3340[336];
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_1400D3340 + 0)) /* [rsp+20h] */
#define saved_iteration_count_3 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define integer_difference_3 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define saved_running_total_2 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define saved_masked_bits_2 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400D3340 + 32)) /* [rsp+40h] */
#define shifted_bits_11 (*(int (*))(void *)(sr_frame_1400D3340 + 36)) /* [rsp+44h] */
#define shifted_bits_12 (*(int (*))(void *)(sr_frame_1400D3340 + 40)) /* [rsp+48h] */
#define saved_masked_bits_3 (*(signed int (*))(void *)(sr_frame_1400D3340 + 44)) /* [rsp+4Ch] */
#define running_total_6 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 48)) /* [rsp+50h] */
#define remaining_count_11 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 56)) /* [rsp+58h] */
#define saved_masked_bits_4 (*(signed int (*))(void *)(sr_frame_1400D3340 + 304)) /* [rsp+150h] */
#define integer_difference_4 (*(int (*))(void *)(sr_frame_1400D3340 + 312)) /* [rsp+158h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define cached_integer_sum (*(int (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define saved_iteration_count_4 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define saved_iteration_count_5 (*(int (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define saved_iteration_count_6 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */

  record_word_offset = 136LL * a1;
  saved_record_word_offset = record_word_offset;
  masked_bits = *(int *)((char *)&g_175FD147C + record_word_offset);
  if ( (_DWORD)masked_bits == -1 )
    return;
  scaled_index = (int)dword_140404A6C[396 * masked_bits + 225426057];
  if ( dword_140404A6C[34 * scaled_index + 225391237] == -1 )
  {
    scaled_index_2 = (int)dword_140404A6C[34 * scaled_index + 225391236];
    if ( (_DWORD)scaled_index_2 == -1 )
      return;
    scaled_index = (int)dword_140404A6C[396 * scaled_index_2 + 225426057];
    if ( dword_140404A6C[34 * scaled_index + 225391237] == -1 )
      return;
  }
  masked_bits_2 = *(int *)((char *)&g_175FD1480 + record_word_offset);
  if ( (_DWORD)masked_bits_2 == -1 )
    return;
  scaled_index_3 = (int)dword_140404A6C[396 * masked_bits_2 + 225426057];
  if ( dword_140404A6C[34 * scaled_index_3 + 225391236] == -1 )
  {
    float_word = (int)dword_140404A6C[34 * scaled_index_3 + 225391237];
    if ( (_DWORD)float_word == -1 )
      return;
    scaled_index_3 = (int)dword_140404A6C[396 * float_word + 225426057];
    if ( dword_140404A6C[34 * scaled_index_3 + 225391236] == -1 )
      return;
  }
  scaled_index_4 = 34 * scaled_index_3;
  scaled_index_5 = (int)dword_140404A6C[34 * scaled_index_3 + 225391236];
  if ( (_DWORD)scaled_index_5 == -1 )
    return;
  scaled_index_6 = (int)dword_140404A6C[396 * scaled_index_5 + 225426057];
  if ( dword_140404A6C[34 * scaled_index_6 + 225391239] == -1 )
  {
    scaled_index_7 = (int)dword_140404A6C[34 * scaled_index_6 + 225391236];
    if ( (_DWORD)scaled_index_7 == -1 )
      return;
    scaled_index_6 = (int)dword_140404A6C[396 * scaled_index_7 + 225426057];
    if ( dword_140404A6C[34 * scaled_index_6 + 225391239] == -1 )
      return;
  }
  masked_bits_3 = 4
      * (*(unsigned int *)((char *)&g_175FD148C + record_word_offset)
       + *(unsigned int *)((char *)&g_175FD1464 + record_word_offset))
      + 4096;
  scaled_ratio = 0.0;
  saved_masked_bits_4 = masked_bits_3;
  scaled_index_8 = 4 * (dword_140404A6C[34 * scaled_index + 225391230] - dword_140404A6C[34 * scaled_index + 225391240]) + 4096;
  integer_difference = scaled_index_8 - masked_bits_3;
  integer_difference_4 = scaled_index_8 - masked_bits_3;
  iteration_count = 4
      * (*(unsigned int *)((char *)&g_175FD146C + record_word_offset)
       + *(unsigned int *)((char *)&g_175FD1490 + record_word_offset))
      + 4096;
  integer_difference_2 = dword_140404A6C[scaled_index_4 + 225391232] - dword_140404A6C[scaled_index_4 + 225391241];
  saved_iteration_count_2 = iteration_count;
  scaled_index_9 = 4 * integer_difference_2 + 4096;
  weighted_sum = (float)((float)*(int *)((char *)&g_175FD1468 + record_word_offset) * 4.0) + 4.25;
  masked_bits_4 = 4 * integer_difference_2
      - 4
      * (*(unsigned int *)((char *)&g_175FD146C + record_word_offset)
       + *(unsigned int *)((char *)&g_175FD1490 + record_word_offset));
  weighted_sum_2 = (float)((float)(int)dword_140404A6C[34 * scaled_index + 225391231] * 4.0) + 4.25;
  saved_masked_bits_3 = masked_bits_4;
  weighted_sum_3 = (float)((float)(int)dword_140404A6C[scaled_index_4 + 225391231] * 4.0) + 4.25;
  saved_weighted_sum_2 = weighted_sum_3;
  weighted_sum_4 = (float)((float)(int)dword_140404A6C[34 * scaled_index_6 + 225391231] * 4.0) + 4.25;
  saved_weighted_sum_3 = weighted_sum_4;
  scaled_ratio_2 = 1.0 / (float)(scaled_index_8 - masked_bits_3);
  if ( iteration_count <= scaled_index_9 )
  {
    do
    {
      iteration_count_2 = masked_bits_3;
      component_sum = 0.0;
      if ( masked_bits_3 <= scaled_index_8 )
      {
        do
        {
          sub_1400D2DB0(
            iteration_count_2++,
            iteration_count,
            (float)((float)(1.0 - component_sum) * (float)((float)(weighted_sum_3 * scaled_ratio) + (float)(weighted_sum * (float)(1.0 - scaled_ratio))))
          + (float)((float)((float)(weighted_sum_4 * scaled_ratio) + (float)(weighted_sum_2 * (float)(1.0 - scaled_ratio))) * component_sum));
          component_sum = component_sum + scaled_ratio_2;
        }
        while ( iteration_count_2 <= scaled_index_8 );
        weighted_sum_3 = saved_weighted_sum_2;
        weighted_sum_4 = saved_weighted_sum_3;
        masked_bits_3 = saved_masked_bits_4;
      }
      ++iteration_count;
      scaled_ratio = scaled_ratio + (float)(1.0 / (float)masked_bits_4);
    }
    while ( iteration_count <= scaled_index_9 );
    record_word_offset = saved_record_word_offset;
  }
  shifted_bits = masked_bits_4 >> 2;
  shifted_bits_12 = masked_bits_4 >> 2;
  if ( masked_bits_4 >> 2 >= 0 )
  {
    state_address = &g_144AFA9BC;
    shifted_bits_2 = (__int64)integer_difference >> 2;
    remaining_count = shifted_bits + 1LL;
    do
    {
      if ( shifted_bits_2 >= 0 )
      {
        saved_state_address = state_address;
        remaining_count_2 = shifted_bits_2 + 1;
        do
        {
          running_total = saved_state_address;
          remaining_count_3 = 5;
          do
          {
            *(running_total - 7) = 0;
            *running_total = 0;
            running_total[7] = 0;
            running_total[14] = 0;
            running_total[21] = 0;
            running_total += 1792;
            --remaining_count_3;
          }
          while ( remaining_count_3 );
          saved_state_address += 28;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      state_address += 7168;
      --remaining_count;
    }
    while ( remaining_count );
  }
  iteration_count_3 = 0;
  saved_iteration_count_5 = 0;
  if ( shifted_bits > 0 )
  {
    shifted_bits_3 = integer_difference >> 2;
    record_byte_offset = 0;
    running_total_2 = 0;
    shifted_bits_11 = integer_difference >> 2;
    saved_running_total = 0;
    do
    {
      integer_sum = 0;
      iteration_count_4 = 0;
      cached_integer_sum = 0;
      saved_iteration_count_3 = 0;
      if ( shifted_bits_3 > 0 )
      {
        record_byte_offset_2 = 0;
        do
        {
          state_address_2 = (int)(*(unsigned int *)((char *)&g_175FD148C + record_word_offset)
                    + integer_sum
                    + *(unsigned int *)((char *)&g_175FD1464 + record_word_offset)
                    + ((iteration_count_3
                      + *(unsigned int *)((char *)&g_175FD146C + record_word_offset)
                      + *(unsigned int *)((char *)&g_175FD1490 + record_word_offset)) << 12));
          weighted_sum_5 = *(float *)&dword_140404A6C[state_address_2 + 254388963];
          weighted_sum_6 = *(float *)&dword_140404A6C[state_address_2 + 254388964];
          weighted_sum_7 = *(float *)&dword_140404A6C[state_address_2 + 254393059];
          weighted_sum_8 = *(float *)&dword_140404A6C[state_address_2 + 254393060];
          saved_weighted_sum = weighted_sum_5;
          if ( weighted_sum_5 > 0.0 && weighted_sum_6 > 0.0 && weighted_sum_7 > 0.0 && weighted_sum_8 > 0.0 )
          {
            iteration_count_5 = 0;
            remaining_count_11 = 5;
            component_sum_2 = 0.0;
            scaled_index_10 = 112 * (running_total_2 + iteration_count_4);
            running_total_6 = scaled_index_10;
            do
            {
              iteration_count_6 = 0;
              running_total_3 = scaled_index_10;
              component_sum_3 = 0.0;
              remaining_count_4 = 5;
              do
              {
                masked_bits_5 = *(int *)((char *)&g_144AFA9A0 + running_total_3);
                if ( !(_DWORD)masked_bits_5 )
                {
                  *(unsigned int *)((char *)&g_144AFA9A4 + running_total_3) = record_byte_offset_2 + iteration_count_6;
                  *(unsigned int *)((char *)&dword_140404A6C[3 * masked_bits_5 + 18601935] + running_total_3) = record_byte_offset + iteration_count_5;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&g_144AFA9A0 + running_total_3))++
                                                           + 18601936]
                                  + running_total_3) = 1065353216;
                  sub_1400D2DB0(
                    record_byte_offset_2 + iteration_count_6 + saved_masked_bits_4,
                    saved_iteration_count_2 + record_byte_offset + iteration_count_5,
                    (float)((float)(1.0 - component_sum_3) * (float)((float)(weighted_sum_5 * (float)(1.0 - component_sum_2)) + (float)(weighted_sum_7 * component_sum_2)))
                  + (float)((float)((float)(weighted_sum_6 * (float)(1.0 - component_sum_2)) + (float)(weighted_sum_8 * component_sum_2)) * component_sum_3));
                }
                ++iteration_count_6;
                component_sum_3 = component_sum_3 + 0.25;
                running_total_3 += 28;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
              component_sum_2 = component_sum_2 + 0.25;
              weighted_sum_5 = saved_weighted_sum;
              scaled_index_10 = running_total_6 + 7168;
              ++iteration_count_5;
              running_total_6 += 7168;
              --remaining_count_11;
            }
            while ( remaining_count_11 );
            iteration_count_4 = saved_iteration_count_3;
            record_word_offset = saved_record_word_offset;
            iteration_count_3 = saved_iteration_count_5;
            running_total_2 = saved_running_total;
          }
          ++iteration_count_4;
          shifted_bits_3 = shifted_bits_11;
          integer_sum = cached_integer_sum + 1;
          record_byte_offset_2 += 4;
          cached_integer_sum = integer_sum;
          saved_iteration_count_3 = iteration_count_4;
        }
        while ( integer_sum < shifted_bits_11 );
        shifted_bits = shifted_bits_12;
      }
      ++iteration_count_3;
      running_total_2 += 256;
      record_byte_offset += 4;
      saved_iteration_count_5 = iteration_count_3;
      saved_running_total = running_total_2;
    }
    while ( iteration_count_3 < shifted_bits );
    masked_bits_4 = saved_masked_bits_3;
    integer_difference = integer_difference_4;
  }
  remaining_count_5 = 16;
  saved_masked_bits = masked_bits_4;
  saved_masked_bits_2 = masked_bits_4;
  integer_difference_3 = 16;
  do
  {
    iteration_count_7 = 1;
    saved_iteration_count_4 = 1;
    iteration_count_8 = 1;
    if ( saved_masked_bits <= 1 )
      goto LABEL_76;
    running_total_4 = 7196;
    saved_running_total_2 = 7196;
    do
    {
      iteration_count_9 = 1;
      saved_iteration_count_6 = 1;
      iteration_count_10 = 1;
      if ( integer_difference <= 1 )
        goto LABEL_74;
      running_total_5 = running_total_4;
      do
      {
        if ( !*(unsigned int *)((char *)&g_144AFA9A0 + running_total_5)
          || *(float *)((char *)&g_144AFA9AC + running_total_5) < 1.0 )
        {
          iteration_count_11 = -1;
          while ( 1 )
          {
            for ( i = -1; i <= 1; ++i )
            {
              if ( !iteration_count_11 && !i )
                continue;
              shifted_bits_4 = 7 * (iteration_count_9 + i + ((iteration_count_11 + iteration_count_7) << 8));
              if ( (int)dword_140404A6C[shifted_bits_4 + 18601933] <= 0 )
                goto LABEL_68;
              iteration_count_12 = 0;
              state_address_3 = &dword_140404A6C[18601935 + shifted_bits_4];
              do
              {
                scaled_index_11 = *(state_address_3 - 1);
                component_delta = (float)(int)(scaled_index_11 - iteration_count_10);
                product_difference = (float)(int)(*state_address_3 - iteration_count_8);
                square_root = fsqrt((float)(component_delta * component_delta) + (float)(product_difference * product_difference));
                *(float *)&float_word_2 = 1.0 - (float)(square_root * 0.0625);
                if ( *(float *)&float_word_2 <= 0.0 )
                  goto LABEL_66;
                if ( square_root == 0.0 )
                {
                  scaled_value_2 = 0.0;
                  scaled_value = 0.0;
                }
                else
                {
                  scaled_ratio_3 = 1.0 / square_root;
                  scaled_value = scaled_ratio_3 * component_delta;
                  scaled_value_2 = scaled_ratio_3 * product_difference;
                }
                masked_bits_6 = *(int *)((char *)&g_144AFA9A0 + running_total_5);
                if ( !(_DWORD)masked_bits_6 )
                {
                  *(unsigned int *)((char *)&g_144AFA9A4 + running_total_5) = scaled_index_11;
LABEL_65:
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * *(unsigned int *)((char *)&g_144AFA9A0 + running_total_5)
                                                           + 18601935]
                                  + running_total_5) = *state_address_3;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&g_144AFA9A0 + running_total_5))++
                                                           + 18601936]
                                  + running_total_5) = float_word_2;
                  goto LABEL_66;
                }
                iteration_count_14 = 0;
                saved_iteration_count = -1;
                if ( (int)masked_bits_6 > 0 )
                {
                  remaining_count_8 = (unsigned int)masked_bits_6;
                  record_byte_offset_3 = (char *)&g_144AFA9A8 + running_total_5;
                  do
                  {
                    product_difference_2 = (float)(*((_DWORD *)record_byte_offset_3 - 1) - iteration_count_10);
                    product_difference_3 = (float)(*(_DWORD *)record_byte_offset_3 - iteration_count_8);
                    square_root_2 = fsqrt((float)(product_difference_2 * product_difference_2) + (float)(product_difference_3 * product_difference_3));
                    if ( square_root_2 == 0.0 )
                    {
                      scaled_value_4 = 0.0;
                      scaled_value_3 = 0.0;
                    }
                    else
                    {
                      scaled_ratio_4 = 1.0 / square_root_2;
                      scaled_value_3 = scaled_ratio_4 * product_difference_3;
                      scaled_value_4 = scaled_ratio_4 * product_difference_2;
                    }
                    if ( (float)((float)(scaled_value_4 * scaled_value) + (float)(scaled_value_3 * scaled_value_2)) > 0.0 )
                    {
                      saved_iteration_count = -2;
                      if ( *(float *)&float_word_2 > *((float *)record_byte_offset_3 + 1) )
                        saved_iteration_count = iteration_count_14;
                    }
                    ++iteration_count_14;
                    record_byte_offset_3 += 12;
                    --remaining_count_8;
                  }
                  while ( remaining_count_8 );
                  if ( saved_iteration_count == -2 )
                    goto LABEL_66;
                  if ( saved_iteration_count != -1 )
                  {
                    scaled_index_13 = running_total_5 + 12 * saved_iteration_count;
                    *(unsigned int *)((char *)&g_144AFA9A4 + scaled_index_13) = scaled_index_11;
                    loaded_word = *state_address_3;
                    *(unsigned int *)((char *)&g_144AFA9AC + scaled_index_13) = float_word_2;
                    *(unsigned int *)((char *)&g_144AFA9A8 + scaled_index_13) = loaded_word;
                    goto LABEL_66;
                  }
                }
                if ( (int)masked_bits_6 < 2 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[3 * masked_bits_6 + 18601934] + running_total_5) = scaled_index_11;
                  goto LABEL_65;
                }
LABEL_66:
                ++iteration_count_12;
                state_address_3 += 3;
              }
              while ( iteration_count_12 < (int)dword_140404A6C[shifted_bits_4 + 18601933] );
              iteration_count_9 = saved_iteration_count_6;
LABEL_68:
              iteration_count_7 = saved_iteration_count_4;
            }
            if ( ++iteration_count_11 > 1 )
            {
              integer_difference = integer_difference_4;
              break;
            }
          }
        }
        ++iteration_count_9;
        ++iteration_count_10;
        running_total_5 += 28;
        saved_iteration_count_6 = iteration_count_9;
      }
      while ( iteration_count_10 < integer_difference );
      running_total_4 = saved_running_total_2;
LABEL_74:
      saved_masked_bits = saved_masked_bits_2;
      ++iteration_count_7;
      running_total_4 += 7168;
      saved_iteration_count_4 = iteration_count_7;
      ++iteration_count_8;
      saved_running_total_2 = running_total_4;
    }
    while ( iteration_count_7 < saved_masked_bits_2 );
    remaining_count_5 = integer_difference_3;
LABEL_76:
    integer_difference_3 = --remaining_count_5;
  }
  while ( remaining_count_5 );
  if ( saved_masked_bits > 1 )
  {
    state_address_4 = &g_144AFC5C4;
    remaining_count_6 = saved_masked_bits - 1;
    cached_integer_difference = integer_difference_4;
    iteration_count_13 = saved_iteration_count_2 + 1;
    do
    {
      if ( cached_integer_difference > 1 )
      {
        cached_masked_bits = saved_masked_bits_4;
        remaining_count_7 = (unsigned int)(cached_integer_difference - 1);
        saved_state_address_2 = state_address_4;
        element_index = saved_masked_bits_4 + 1;
        do
        {
          scaled_index_12 = *(saved_state_address_2 - 2);
          if ( scaled_index_12 > 0 )
          {
            shifted_bits_5 = iteration_count_13 >> 11;
            if ( (unsigned int)(element_index >> 11) > 7 || shifted_bits_5 > 7 )
              shifted_bits_6 = 0.0;
            else
              shifted_bits_6 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((element_index >> 11) + 8 * shifted_bits_5) + 272034683]
                             + 4LL * ((element_index & 0x7FF) + 2049 * (iteration_count_13 & 0x7FFu)));
            weighted_sum_9 = (float *)(saved_state_address_2 + 1);
            remaining_count_9 = *(saved_state_address_2 - 2);
            weighted_sum_10 = 0.0;
            do
            {
              weighted_sum_10 = weighted_sum_10 + *weighted_sum_9;
              weighted_sum_9 += 3;
              --remaining_count_9;
            }
            while ( remaining_count_9 );
            scaled_index_14 = saved_iteration_count_2 + *saved_state_address_2;
            scaled_index_15 = *(saved_state_address_2 - 1) + cached_masked_bits;
            shifted_bits_7 = scaled_index_14 >> 11;
            shifted_bits_8 = scaled_index_15 >> 11;
            if ( scaled_index_12 <= 1 )
            {
              if ( shifted_bits_8 > 7 || shifted_bits_7 > 7 )
                squared_length = 0.0;
              else
                squared_length = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_8 + 8 * shifted_bits_7) + 272034683]
                                + 4LL * (2049 * (scaled_index_14 & 0x7FF) + (scaled_index_15 & 0x7FFu)));
            }
            else
            {
              limited_value = *((float *)saved_state_address_2 + 1) / fminf(weighted_sum_10, 1.0);
              if ( shifted_bits_8 > 7 || shifted_bits_7 > 7 )
                weighted_sum_11 = 0.0;
              else
                weighted_sum_11 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (shifted_bits_8 + 8 * shifted_bits_7) + 272034683]
                                + 4LL * (2049 * (scaled_index_14 & 0x7FF) + (scaled_index_15 & 0x7FFu)));
              table_value = saved_iteration_count_2 + saved_state_address_2[3];
              table_value_2 = cached_masked_bits + saved_state_address_2[2];
              shifted_bits_9 = table_value >> 11;
              if ( (unsigned int)(table_value_2 >> 11) > 7 || shifted_bits_9 > 7 )
                shifted_bits_10 = 0.0;
              else
                shifted_bits_10 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((table_value_2 >> 11) + 8 * shifted_bits_9) + 272034683]
                                + 4LL * ((table_value_2 & 0x7FF) + 2049 * (table_value & 0x7FFu)));
              limited_value_2 = fminf(fmaxf(limited_value, 0.0), 1.0);
              squared_length = (float)((float)(1.0 - (float)((float)(3.0 - (float)(limited_value_2 + limited_value_2)) * (float)(limited_value_2 * limited_value_2))) * shifted_bits_10)
                   + (float)(weighted_sum_11 * (float)((float)(3.0 - (float)(limited_value_2 + limited_value_2)) * (float)(limited_value_2 * limited_value_2)));
            }
            weighted_sum_12 = (float *)(saved_state_address_2 + 1);
            remaining_count_10 = *(saved_state_address_2 - 2);
            limited_value_3 = 0.0;
            do
            {
              limited_value_3 = fmaxf(limited_value_3, *weighted_sum_12);
              weighted_sum_12 += 3;
              --remaining_count_10;
            }
            while ( remaining_count_10 );
            limited_value_4 = fminf(fmaxf(limited_value_3, 0.0), 1.0);
            sub_1400D2DB0(
              element_index,
              iteration_count_13,
              (float)((float)(1.0 - (float)((float)(3.0 - (float)(limited_value_4 + limited_value_4)) * (float)(limited_value_4 * limited_value_4))) * shifted_bits_6)
            + (float)(squared_length * (float)((float)(3.0 - (float)(limited_value_4 + limited_value_4)) * (float)(limited_value_4 * limited_value_4))));
            cached_masked_bits = saved_masked_bits_4;
          }
          ++element_index;
          saved_state_address_2 += 7;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
        cached_integer_difference = integer_difference_4;
      }
      ++iteration_count_13;
      state_address_4 += 1792;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
  }
}
#undef saved_iteration_count_2
#undef saved_iteration_count_3
#undef integer_difference_3
#undef saved_running_total
#undef saved_running_total_2
#undef saved_record_word_offset
#undef saved_masked_bits_2
#undef saved_weighted_sum
#undef shifted_bits_11
#undef shifted_bits_12
#undef saved_masked_bits_3
#undef running_total_6
#undef remaining_count_11
#undef saved_masked_bits_4
#undef integer_difference_4
#undef saved_weighted_sum_2
#undef cached_integer_sum
#undef saved_iteration_count_4
#undef saved_weighted_sum_3
#undef saved_iteration_count_5
#undef saved_iteration_count_6

//----- (000000014010AF90) ----------------------------------------------------
void            sub_14010AF90(int a1)
{
  int selection_flag;
  unsigned int *state_address;
  __int64 record_word_offset;
  unsigned int *state_address_2;
  unsigned int *unused_written_slot;
  int float_word;
  int integer_difference;
  unsigned int masked_bits;
  double scaled_value;
  double component_delta;
  float reordered_vector;
  __m128d xor_vector;
  float product_difference;
  float combined_products;
  float product_difference_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 unrecovered_register_value;
  double acos_result;
  __int64 scaled_index;
  float component_sum;
  float scaled_value_2;
  float scaled_value_3;
  __int64 scaled_index_2;
  float scaled_value_4;
  float weighted_sum;
  unsigned int state_address_3;
  float weighted_sum_2;
  float state_address_4;
  float weighted_sum_3;
  __int64 scaled_index_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float squared_length;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float weighted_sum_7;
  float state_address_5;
  unsigned int state_address_6;
  float weighted_sum_8;
  float scaled_ratio_7;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float state_address_7;
  float weighted_sum_9;
  unsigned int state_address_8;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_ratio_10;
  float scaled_ratio_11;
  float scaled_ratio_12;
  __int64 remaining_count;
  float weighted_sum_12;
  float state_address_9;
  float component_sum_2;
  float product_difference_3;
  float weighted_sum_13;
  unsigned int float_word_2;
  float weighted_sum_14;
  double state_address_10;
  double state_address_11;
  __m128 vector_result;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float product_difference_4;
  float product_difference_5;
  float saved_product_difference;
  float weighted_sum_21;
  float weighted_sum_22;
  float weighted_sum_23;
  float product_difference_6;
  float product_difference_7;
  float saved_product_difference_2;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  float square_root_3;
  float scaled_ratio_13;
  float scaled_ratio_14;
  float scaled_ratio_15;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float weighted_sum_30;
  double sine_value;
  float weighted_sum_31;
  float product_difference_8;
  float square_root_4;
  float scaled_ratio_16;
  float scaled_ratio_17;
  float scaled_ratio_18;
  float squared_length_2;
  float scaled_value_5;
  float squared_value;
  float square_root_5;
  float scaled_ratio_19;
  float scaled_ratio_20;
  float scaled_ratio_21;
  float weighted_sum_32;
  float weighted_sum_33;
  float combined_products_5;
  float weighted_sum_34;
  float weighted_sum_35;
  float scaled_value_6;
  float scaled_ratio_22;
  float scaled_ratio_23;
  float scaled_ratio_24;
  float weighted_sum_36;
  float weighted_sum_37;
  float combined_products_6;
  float scaled_value_7;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float saved_weighted_sum;
  float scaled_value_11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010AF90[384];
#define weighted_sum_38 (*(float (*))(void *)(sr_frame_14010AF90 + 0)) /* [rsp+20h] */
#define component_sum_3 (*(float (*))(void *)(sr_frame_14010AF90 + 4)) /* [rsp+24h] */
#define scaled_value_12 (*(float (*))(void *)(sr_frame_14010AF90 + 8)) /* [rsp+28h] */
#define weighted_sum_39 (*(float (*))(void *)(sr_frame_14010AF90 + 12)) /* [rsp+2Ch] */
#define weighted_sum_40 (*(float (*))(void *)(sr_frame_14010AF90 + 16)) /* [rsp+30h] */
#define weighted_sum_41 (*(float (*))(void *)(sr_frame_14010AF90 + 20)) /* [rsp+34h] */
#define quaternion (*(__m128d (*))(void *)(sr_frame_14010AF90 + 32)) /* [rsp+40h] */
#define scaled_value_13 (*(double (*))(void *)(sr_frame_14010AF90 + 64)) /* [rsp+60h] */
#define state_address_12 (*(double (*))(void *)(sr_frame_14010AF90 + 72)) /* [rsp+68h] */
#define reordered_vector_2 (*(__m128d (*))(void *)(sr_frame_14010AF90 + 80)) /* [rsp+70h] */
#define rotation_matrix (*(float (*)[12])(void *)(sr_frame_14010AF90 + 96)) /* [rsp+80h] */
#define weighted_sum_42 (*(float (*))(void *)(sr_frame_14010AF90 + 352)) /* [rsp+180h] */
#define weighted_sum_43 (*(float (*))(void *)(sr_frame_14010AF90 + 360)) /* [rsp+188h] */
#define weighted_sum_44 (*(float (*))(void *)(sr_frame_14010AF90 + 368)) /* [rsp+190h] */
#define weighted_sum_45 (*(float (*))(void *)(sr_frame_14010AF90 + 376)) /* [rsp+198h] */

  selection_flag = 0;
  state_address = &g_18329E330;
  do
  {
    if ( *(state_address - 10) && *state_address == a1 && !state_address[1] )
      selection_flag = 1;
    state_address += 7166;
  }
  while ( (__int64)state_address < (__int64)&g_18399DB30 );
  record_word_offset = 5210LL * a1;
  if ( (int)dword_140404A6C[record_word_offset + 129716712] <= 0 || dword_140404A6C[record_word_offset + 129716717] )
  {
    selection_flag = 0;
    state_address_2 = &dword_140404A6C[record_word_offset + 129720369];
    unused_written_slot = &dword_140404A6C[record_word_offset + 129720369];
    float_word = dword_140404A6C[record_word_offset + 129720369];
  }
  else
  {
    state_address_2 = &dword_140404A6C[record_word_offset + 129720369];
    unused_written_slot = &dword_140404A6C[record_word_offset + 129720369];
    float_word = dword_140404A6C[record_word_offset + 129720369];
    if ( selection_flag )
    {
      if ( float_word > 1990 )
      {
        integer_difference = 2000;
        *state_address_2 = 2000;
      }
      else
      {
        integer_difference = float_word + 10;
        *state_address_2 = float_word + 10;
      }
      goto LABEL_17;
    }
  }
  integer_difference = float_word - 10;
  if ( float_word < 10 )
    integer_difference = 0;
  *unused_written_slot = integer_difference;
LABEL_17:
  *(float *)&masked_bits = (float)((float)integer_difference + (float)integer_difference) * 0.0008726646259972221 + *(float *)&dword_140404A6C[record_word_offset + 129720391];
  scaled_value = *(float *)&masked_bits;
  dword_140404A6C[record_word_offset + 129720391] = masked_bits;
  *(float *)&dword_140404A6C[record_word_offset + 129720434] = *(float *)&masked_bits
                                             - (float)((float)((float)(int)*state_address_2 * 0.125)
                                                     + (float)((float)(int)*state_address_2 * 0.125))
                                             * 0.0008726646259972221;
  if ( *(float *)&masked_bits <= 3.14159265359 )
  {
    if ( scaled_value >= -3.14159265359 )
      goto LABEL_22;
    component_delta = scaled_value + 6.28318530718;
  }
  else
  {
    component_delta = scaled_value - 6.28318530718;
  }
  *(float *)&dword_140404A6C[record_word_offset + 129720391] = component_delta;
LABEL_22:
  sr_math_mat3_multiply_transposed(
    rotation_matrix,
    (float *)&dword_140404A6C[47 * dword_140404A6C[record_word_offset + 129721807] + 18215724],
    (float *)&dword_140404A6C[47 * dword_140404A6C[record_word_offset + 129716719] + 18215724]);
  sr_math_quat_from_mat3((float *)&quaternion, rotation_matrix);
  reordered_vector = *((float *)&SR_VEC_LANES(128, quaternion, f64)[1] + 1);
  if ( *((float *)&SR_VEC_LANES(128, quaternion, f64)[1] + 1) < 0.0 )
  {
    xor_vector = (__m128d)_mm_xor_ps((__m128)quaternion, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps((__m128)xor_vector, (__m128)xor_vector, 255), f32)[0];
    quaternion = xor_vector;
  }
  product_difference = -*(float *)SR_VEC_LANES(128, quaternion, f64);
  combined_products = -*((float *)SR_VEC_LANES(128, quaternion, f64) + 1);
  product_difference_2 = -*(float *)&SR_VEC_LANES(128, quaternion, f64)[1];
  square_root = fsqrt((float)((float)(product_difference * product_difference) + (float)(combined_products * combined_products)) + (float)(product_difference_2 * product_difference_2));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = product_difference * (float)(1.0 / square_root);
    scaled_ratio_2 = combined_products * (float)(1.0 / square_root);
    scaled_ratio_3 = product_difference_2 * (float)(1.0 / square_root);
  }
  acos_result = acos(fminf(fmaxf(reordered_vector, -1.0), 1.0));
  scaled_index = 47LL * (int)dword_140404A6C[record_word_offset + 129721807];
  component_sum = acos_result + acos_result;
  scaled_value_2 = scaled_ratio_2 * component_sum;
  scaled_value_3 = scaled_ratio * component_sum;
  scaled_index_2 = 18LL * (int)dword_140404A6C[record_word_offset + 129721808];
  scaled_value_4 = scaled_ratio_3 * component_sum;
  weighted_sum = scaled_value_2 * *(float *)&dword_140404A6C[scaled_index + 18215728];
  *(float *)&acos_result = scaled_value_3 * *(float *)&dword_140404A6C[scaled_index + 18215725];
  *(float *)&state_address_3 = (float)((float)(scaled_value_2 * *(float *)&dword_140404A6C[scaled_index + 18215727])
                         + (float)(scaled_value_3 * *(float *)&dword_140404A6C[scaled_index + 18215724]))
                 + (float)(scaled_value_4 * *(float *)&dword_140404A6C[scaled_index + 18215730]);
  weighted_sum_2 = scaled_value_4 * *(float *)&dword_140404A6C[scaled_index + 18215731];
  state_address_4 = (float)(scaled_value_2 * *(float *)&dword_140404A6C[scaled_index + 18215729])
      + (float)(scaled_value_3 * *(float *)&dword_140404A6C[scaled_index + 18215726]);
  weighted_sum_3 = scaled_value_4 * *(float *)&dword_140404A6C[scaled_index + 18215732];
  dword_140404A6C[2 * scaled_index_2 + 485543033] = state_address_3;
  *(float *)&dword_140404A6C[2 * scaled_index_2 + 485543035] = state_address_4 + weighted_sum_3;
  *(float *)&dword_140404A6C[2 * scaled_index_2 + 485543034] = (float)(weighted_sum + *(float *)&acos_result) + weighted_sum_2;
  if ( selection_flag && (int)dword_140404A6C[record_word_offset + 129716712] > 0 )
  {
    scaled_index_3 = 47LL * (int)dword_140404A6C[record_word_offset + 129716719];
    weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_3 + 18215718];
    weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_3 + 18215719];
    weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_3 + 18215720];
    squared_length = (float)(weighted_sum_5 * weighted_sum_5) + (float)(weighted_sum_4 * weighted_sum_4);
    square_root_2 = fsqrt((float)(weighted_sum_6 * weighted_sum_6) + squared_length);
    if ( square_root_2 == 0.0 )
    {
      scaled_ratio_4 = 0.0;
      scaled_ratio_5 = 0.0;
      scaled_ratio_6 = 0.0;
    }
    else
    {
      scaled_ratio_4 = (float)(1.0 / square_root_2) * weighted_sum_4;
      scaled_ratio_5 = (float)(1.0 / square_root_2) * weighted_sum_5;
      scaled_ratio_6 = (float)(1.0 / square_root_2) * weighted_sum_6;
    }
    weighted_sum_7 = (float)((float)((float)(weighted_sum_6 + weighted_sum_6) * weighted_sum_6) + squared_length) + squared_length;
    state_address_5 = (float)((float)((float)((float)(scaled_ratio_5 * *(float *)&dword_140404A6C[scaled_index_3 + 18215725])
                                + (float)(scaled_ratio_4 * *(float *)&dword_140404A6C[scaled_index_3 + 18215724]))
                        + (float)(scaled_ratio_6 * *(float *)&dword_140404A6C[scaled_index_3 + 18215726]))
                * weighted_sum_7)
        * -0.00075000001;
    *(float *)&state_address_6 = (float)(*(float *)&dword_140404A6C[record_word_offset + 129716727] * state_address_5) + weighted_sum_5;
    *(float *)&dword_140404A6C[scaled_index_3 + 18215718] = (float)(*(float *)&dword_140404A6C[record_word_offset + 129716726] * state_address_5) + weighted_sum_4;
    weighted_sum_8 = *(float *)&dword_140404A6C[record_word_offset + 129716728];
    dword_140404A6C[scaled_index_3 + 18215719] = state_address_6;
    *(float *)&dword_140404A6C[scaled_index_3 + 18215720] = (float)(weighted_sum_8 * state_address_5) + weighted_sum_6;
    dword_140404A6C[scaled_index_3 + 18215733] = dword_140404A6C[scaled_index_3 + 18215733];
    dword_140404A6C[scaled_index_3 + 18215734] = dword_140404A6C[scaled_index_3 + 18215734];
    dword_140404A6C[scaled_index_3 + 18215735] = dword_140404A6C[scaled_index_3 + 18215735];
    if ( square_root_2 == 0.0 )
    {
      scaled_ratio_7 = 0.0;
      scaled_ratio_8 = 0.0;
      scaled_ratio_9 = 0.0;
    }
    else
    {
      scaled_ratio_7 = weighted_sum_4 * (float)(1.0 / square_root_2);
      scaled_ratio_8 = weighted_sum_5 * (float)(1.0 / square_root_2);
      scaled_ratio_9 = weighted_sum_6 * (float)(1.0 / square_root_2);
    }
    state_address_7 = (float)((float)((float)((float)(scaled_ratio_8 * *(float *)&dword_140404A6C[scaled_index_3 + 18215728])
                                + (float)(scaled_ratio_7 * *(float *)&dword_140404A6C[scaled_index_3 + 18215727]))
                        + (float)(scaled_ratio_9 * *(float *)&dword_140404A6C[scaled_index_3 + 18215729]))
                * weighted_sum_7)
        * -0.0015;
    weighted_sum_9 = state_address_7 * *(float *)&dword_140404A6C[record_word_offset + 129716730];
    *(float *)&state_address_8 = (float)(state_address_7 * *(float *)&dword_140404A6C[record_word_offset + 129716729])
                   + *(float *)&dword_140404A6C[scaled_index_3 + 18215718];
    weighted_sum_10 = state_address_7 * *(float *)&dword_140404A6C[record_word_offset + 129716731];
    dword_140404A6C[scaled_index_3 + 18215718] = state_address_8;
    *(float *)&dword_140404A6C[scaled_index_3 + 18215719] = weighted_sum_9 + *(float *)&dword_140404A6C[scaled_index_3 + 18215719];
    weighted_sum_11 = weighted_sum_10 + *(float *)&dword_140404A6C[scaled_index_3 + 18215720];
    *(float *)&dword_140404A6C[scaled_index_3 + 18215720] = weighted_sum_11;
    dword_140404A6C[scaled_index_3 + 18215733] = dword_140404A6C[scaled_index_3 + 18215733];
    dword_140404A6C[scaled_index_3 + 18215734] = dword_140404A6C[scaled_index_3 + 18215734];
    dword_140404A6C[scaled_index_3 + 18215735] = dword_140404A6C[scaled_index_3 + 18215735];
    if ( square_root_2 == 0.0 )
    {
      scaled_ratio_10 = 0.0;
      scaled_ratio_11 = 0.0;
      scaled_ratio_12 = 0.0;
    }
    else
    {
      scaled_ratio_10 = weighted_sum_4 * (float)(1.0 / square_root_2);
      scaled_ratio_11 = weighted_sum_5 * (float)(1.0 / square_root_2);
      scaled_ratio_12 = weighted_sum_6 * (float)(1.0 / square_root_2);
    }
    remaining_count = 16;
    weighted_sum_12 = *(float *)&dword_140404A6C[record_word_offset + 129716733];
    state_address_9 = (float)((float)(scaled_ratio_11 * *(float *)&dword_140404A6C[scaled_index_3 + 18215731])
                + (float)(scaled_ratio_10 * *(float *)&dword_140404A6C[scaled_index_3 + 18215730]))
        + (float)(scaled_ratio_12 * *(float *)&dword_140404A6C[scaled_index_3 + 18215732]);
    component_sum_2 = 0.0;
    component_sum_3 = 0.0;
    product_difference_3 = (float)(state_address_9 * weighted_sum_7) * -0.0001875;
    *(float *)&dword_140404A6C[scaled_index_3 + 18215718] = (float)(*(float *)&dword_140404A6C[record_word_offset + 129716732] * product_difference_3)
                                               + *(float *)&dword_140404A6C[scaled_index_3 + 18215718];
    weighted_sum_13 = *(float *)&dword_140404A6C[record_word_offset + 129716734] * product_difference_3;
    *(float *)&dword_140404A6C[scaled_index_3 + 18215719] = (float)(weighted_sum_12 * product_difference_3) + *(float *)&dword_140404A6C[scaled_index_3 + 18215719];
    *(float *)&float_word_2 = weighted_sum_13 + weighted_sum_11;
    weighted_sum_14 = *(float *)&dword_140404A6C[record_word_offset + 129720166] * 0.0044444446;
    dword_140404A6C[scaled_index_3 + 18215720] = float_word_2;
    dword_140404A6C[scaled_index_3 + 18215733] = dword_140404A6C[scaled_index_3 + 18215733];
    dword_140404A6C[scaled_index_3 + 18215734] = dword_140404A6C[scaled_index_3 + 18215734];
    dword_140404A6C[scaled_index_3 + 18215735] = dword_140404A6C[scaled_index_3 + 18215735];
    weighted_sum_42 = *(float *)&dword_140404A6C[scaled_index + 18215718];
    weighted_sum_43 = *(float *)&dword_140404A6C[scaled_index + 18215719];
    weighted_sum_44 = *(float *)&dword_140404A6C[scaled_index + 18215720];
    *(float *)&dword_140404A6C[scaled_index + 18215733] = (float)(weighted_sum_14 * *(float *)&dword_140404A6C[scaled_index_3 + 18215727])
                                               + *(float *)&dword_140404A6C[scaled_index + 18215733];
    state_address_10 = (float)(*(float *)&dword_140404A6C[record_word_offset + 129720167] * 0.0078125);
    *(float *)&dword_140404A6C[scaled_index + 18215734] = (float)(weighted_sum_14 * *(float *)&dword_140404A6C[scaled_index_3 + 18215728])
                                               + *(float *)&dword_140404A6C[scaled_index + 18215734];
    *(float *)&dword_140404A6C[scaled_index + 18215735] = (float)(weighted_sum_14 * *(float *)&dword_140404A6C[scaled_index_3 + 18215729])
                                               + *(float *)&dword_140404A6C[scaled_index + 18215735];
    state_address_11 = 3.141592653589793;
    scaled_value_13 = state_address_10 * 3.141592653589793;
    *(float *)&state_address_10 = (float)(*(float *)&dword_140404A6C[record_word_offset + 129720168] * 0.03125) * 3.141592653589793
                   + 0.1472621556370313;
    scaled_value_12 = *(float *)&state_address_10;
    state_address_12 = (float)(*(float *)&dword_140404A6C[record_word_offset + 129720165] * 0.015625) * 3.141592653589793;
    do
    {
      vector_result = _mm_castpd_ps(sub_1401F8A50(component_sum_2, unrecovered_register_value, state_address_11));
      weighted_sum_15 = *(float *)&dword_140404A6C[scaled_index + 18215732];
      weighted_sum_16 = *(float *)&dword_140404A6C[scaled_index + 18215724];
      weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index + 18215730];
      weighted_sum_18 = *(float *)&dword_140404A6C[scaled_index + 18215725];
      weighted_sum_19 = *(float *)&dword_140404A6C[scaled_index + 18215731];
      weighted_sum_20 = *(float *)&dword_140404A6C[scaled_index + 18215726];
      quaternion = (__m128d)vector_result;
      reordered_vector_2 = _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1);
      product_difference_4 = SR_VEC_LANES(128, reordered_vector_2, f64)[0] * -4.0;
      product_difference_5 = *(double *)SR_VEC_LANES(128, vector_result, u64) * -4.0;
      saved_product_difference = product_difference_5;
      weighted_sum_21 = (float)(product_difference_5 * weighted_sum_17) + (float)(product_difference_4 * weighted_sum_16);
      weighted_sum_22 = (float)(product_difference_5 * weighted_sum_15) + (float)(product_difference_4 * weighted_sum_20);
      weighted_sum_23 = (float)(saved_product_difference * weighted_sum_19) + (float)(product_difference_4 * weighted_sum_18);
      product_difference_6 = *(double *)SR_VEC_LANES(128, vector_result, u64) * -2.932153224945068;
      product_difference_7 = SR_VEC_LANES(128, reordered_vector_2, f64)[0] * -2.932153224945068;
      saved_product_difference_2 = product_difference_6;
      weighted_sum_24 = (float)(product_difference_6 * weighted_sum_17) + (float)(product_difference_7 * weighted_sum_16);
      weighted_sum_25 = (float)(product_difference_6 * weighted_sum_15) + (float)(product_difference_7 * weighted_sum_20);
      weighted_sum_26 = (float)(saved_product_difference_2 * weighted_sum_19) + (float)(product_difference_7 * weighted_sum_18);
      square_root_3 = fsqrt((float)((float)(weighted_sum_26 * weighted_sum_26) + (float)(weighted_sum_24 * weighted_sum_24)) + (float)(weighted_sum_25 * weighted_sum_25));
      if ( square_root_3 == 0.0 )
      {
        scaled_ratio_13 = 0.0;
        scaled_ratio_14 = 0.0;
        scaled_ratio_15 = 0.0;
      }
      else
      {
        scaled_ratio_13 = weighted_sum_24 * (float)(1.0 / square_root_3);
        scaled_ratio_14 = weighted_sum_26 * (float)(1.0 / square_root_3);
        scaled_ratio_15 = weighted_sum_25 * (float)(1.0 / square_root_3);
      }
      weighted_sum_27 = *(float *)&dword_140404A6C[scaled_index + 18215738];
      weighted_sum_28 = *(float *)&dword_140404A6C[scaled_index + 18215737];
      weighted_sum_29 = *(float *)&dword_140404A6C[scaled_index + 18215736];
      combined_products_2 = (float)((float)(weighted_sum_23 * weighted_sum_27) - (float)(weighted_sum_22 * weighted_sum_28)) + weighted_sum_42;
      combined_products_3 = (float)((float)(weighted_sum_22 * weighted_sum_29) - (float)(weighted_sum_21 * weighted_sum_27)) + weighted_sum_43;
      combined_products_4 = (float)((float)(weighted_sum_21 * weighted_sum_28) - (float)(weighted_sum_23 * weighted_sum_29)) + weighted_sum_44;
      weighted_sum_30 = SR_VEC_LANES(128, reordered_vector_2, f64)[0] * scaled_value_13 + scaled_value_12;
      sine_value = sin((float)(weighted_sum_30 - SR_VEC_LANES(128, quaternion, f64)[0] * state_address_12));
      weighted_sum_31 = *(float *)&dword_140404A6C[scaled_index + 18215729];
      product_difference_8 = sine_value * -4.0;
      weighted_sum_45 = *(float *)&dword_140404A6C[scaled_index + 18215727];
      weighted_sum_38 = *(float *)&dword_140404A6C[scaled_index + 18215728];
      weighted_sum_39 = (float)(product_difference_8 * weighted_sum_45) + combined_products_2;
      weighted_sum_40 = (float)(product_difference_8 * weighted_sum_38) + combined_products_3;
      weighted_sum_41 = (float)(product_difference_8 * weighted_sum_31) + combined_products_4;
      square_root_4 = fsqrt((float)((float)(weighted_sum_40 * weighted_sum_40) + (float)(weighted_sum_39 * weighted_sum_39)) + (float)(weighted_sum_41 * weighted_sum_41));
      if ( square_root_4 == 0.0 )
      {
        scaled_ratio_16 = 0.0;
        scaled_ratio_17 = 0.0;
        scaled_ratio_18 = 0.0;
      }
      else
      {
        scaled_ratio_16 = (float)(1.0 / square_root_4) * weighted_sum_39;
        scaled_ratio_17 = (float)(1.0 / square_root_4) * weighted_sum_40;
        scaled_ratio_18 = (float)(1.0 / square_root_4) * weighted_sum_41;
      }
      squared_length_2 = (float)((float)((float)((float)((float)(scaled_ratio_16 * weighted_sum_45) + (float)(weighted_sum_38 * scaled_ratio_17)) + (float)(weighted_sum_31 * scaled_ratio_18))
                           - (float)((float)((float)((float)(weighted_sum_42 * scaled_ratio_13) + (float)(weighted_sum_43 * scaled_ratio_14)) + (float)(weighted_sum_44 * scaled_ratio_15))
                                   * 0.03125))
                   * (float)((float)((float)(weighted_sum_40 * weighted_sum_40) + (float)(weighted_sum_39 * weighted_sum_39)) + (float)(weighted_sum_41 * weighted_sum_41)))
           * -0.0024414062;
      scaled_value_5 = weighted_sum_31 * squared_length_2;
      *(float *)&dword_140404A6C[scaled_index + 18215718] = (float)(weighted_sum_45 * squared_length_2) + *(float *)&dword_140404A6C[scaled_index + 18215718];
      *(float *)&dword_140404A6C[scaled_index + 18215719] = (float)(weighted_sum_38 * squared_length_2) + *(float *)&dword_140404A6C[scaled_index + 18215719];
      *(float *)&dword_140404A6C[scaled_index + 18215720] = scaled_value_5 + *(float *)&dword_140404A6C[scaled_index + 18215720];
      *(float *)&dword_140404A6C[scaled_index + 18215733] = (float)((float)((float)(weighted_sum_38 * squared_length_2) * weighted_sum_22) - (float)(scaled_value_5 * weighted_sum_23))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215733];
      *(float *)&dword_140404A6C[scaled_index + 18215734] = (float)((float)(scaled_value_5 * weighted_sum_21) - (float)((float)(weighted_sum_45 * squared_length_2) * weighted_sum_22))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215734];
      squared_value = (float)((float)(combined_products_3 * combined_products_3) + (float)(combined_products_2 * combined_products_2)) + (float)(combined_products_4 * combined_products_4);
      *(float *)&dword_140404A6C[scaled_index + 18215735] = (float)((float)((float)(weighted_sum_45 * squared_length_2) * weighted_sum_23)
                                                         - (float)((float)(weighted_sum_38 * squared_length_2) * weighted_sum_21))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215735];
      square_root_5 = fsqrt(squared_value);
      if ( square_root_5 == 0.0 )
      {
        scaled_ratio_20 = 0.0;
        scaled_ratio_19 = 0.0;
        scaled_ratio_21 = 0.0;
      }
      else
      {
        scaled_ratio_19 = combined_products_3 * (float)(1.0 / square_root_5);
        scaled_ratio_20 = (float)(1.0 / square_root_5) * combined_products_2;
        scaled_ratio_21 = combined_products_4 * (float)(1.0 / square_root_5);
      }
      weighted_sum_32 = *(float *)&dword_140404A6C[record_word_offset + 129716726] * scaled_ratio_20;
      weighted_sum_33 = *(float *)&dword_140404A6C[record_word_offset + 129716727];
      combined_products_5 = (float)((float)((float)(weighted_sum_32 + (float)(scaled_ratio_19 * weighted_sum_33))
                           + (float)(*(float *)&dword_140404A6C[record_word_offset + 129716728] * scaled_ratio_21))
                   * squared_value)
           * -0.00024414062;
      weighted_sum_34 = *(float *)&dword_140404A6C[record_word_offset + 129716726] * combined_products_5;
      weighted_sum_35 = *(float *)&dword_140404A6C[record_word_offset + 129716728] * combined_products_5;
      scaled_value_6 = weighted_sum_33 * combined_products_5;
      *(float *)&dword_140404A6C[scaled_index + 18215718] = weighted_sum_34 + *(float *)&dword_140404A6C[scaled_index + 18215718];
      *(float *)&dword_140404A6C[scaled_index + 18215719] = scaled_value_6 + *(float *)&dword_140404A6C[scaled_index + 18215719];
      *(float *)&dword_140404A6C[scaled_index + 18215720] = weighted_sum_35 + *(float *)&dword_140404A6C[scaled_index + 18215720];
      *(float *)&dword_140404A6C[scaled_index + 18215733] = (float)((float)(scaled_value_6 * weighted_sum_22) - (float)(weighted_sum_35 * weighted_sum_23))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215733];
      *(float *)&dword_140404A6C[scaled_index + 18215734] = (float)((float)(weighted_sum_35 * weighted_sum_21) - (float)(weighted_sum_34 * weighted_sum_22))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215734];
      *(float *)&dword_140404A6C[scaled_index + 18215735] = (float)((float)(weighted_sum_34 * weighted_sum_23) - (float)(scaled_value_6 * weighted_sum_21))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215735];
      if ( square_root_5 == 0.0 )
      {
        scaled_ratio_23 = 0.0;
        scaled_ratio_22 = 0.0;
        scaled_ratio_24 = 0.0;
      }
      else
      {
        scaled_ratio_22 = combined_products_3 * (float)(1.0 / square_root_5);
        scaled_ratio_23 = (float)(1.0 / square_root_5) * combined_products_2;
        scaled_ratio_24 = combined_products_4 * (float)(1.0 / square_root_5);
      }
      weighted_sum_36 = *(float *)&dword_140404A6C[record_word_offset + 129716733];
      weighted_sum_37 = *(float *)&dword_140404A6C[record_word_offset + 129716732];
      *(_QWORD *)&state_address_11 = dword_140404A6C[record_word_offset + 129716734];
      combined_products_6 = (float)((float)((float)((float)(scaled_ratio_22 * weighted_sum_36) + (float)(scaled_ratio_23 * weighted_sum_37))
                           + (float)(scaled_ratio_24 * *(float *)&dword_140404A6C[record_word_offset + 129716734]))
                   * squared_value)
           * -0.00018310547;
      scaled_value_7 = weighted_sum_37 * combined_products_6;
      *(float *)&state_address_11 = *(float *)&state_address_11 * combined_products_6;
      scaled_value_8 = weighted_sum_36 * combined_products_6;
      *(float *)&dword_140404A6C[scaled_index + 18215718] = scaled_value_7 + *(float *)&dword_140404A6C[scaled_index + 18215718];
      *(float *)&dword_140404A6C[scaled_index + 18215719] = scaled_value_8 + *(float *)&dword_140404A6C[scaled_index + 18215719];
      scaled_value_9 = weighted_sum_22 * scaled_value_8;
      scaled_value_10 = weighted_sum_22 * scaled_value_7;
      *(float *)&dword_140404A6C[scaled_index + 18215720] = *(float *)&state_address_11 + *(float *)&dword_140404A6C[scaled_index + 18215720];
      saved_weighted_sum = weighted_sum_23;
      scaled_value_11 = weighted_sum_23 * scaled_value_7;
      component_sum_2 = component_sum_3 + 0.39269909;
      component_sum_3 = component_sum_3 + 0.39269909;
      *(float *)&dword_140404A6C[scaled_index + 18215733] = (float)(scaled_value_9 - (float)(saved_weighted_sum * *(float *)&state_address_11))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215733];
      *(float *)&state_address_11 = (float)((float)(*(float *)&state_address_11 * weighted_sum_21) - scaled_value_10) + *(float *)&dword_140404A6C[scaled_index + 18215734];
      dword_140404A6C[scaled_index + 18215734] = LODWORD(state_address_11);
      *(float *)&dword_140404A6C[scaled_index + 18215735] = (float)(scaled_value_11 - (float)(scaled_value_8 * weighted_sum_21))
                                                 + *(float *)&dword_140404A6C[scaled_index + 18215735];
      --remaining_count;
    }
    while ( remaining_count );
  }
}
#undef weighted_sum_38
#undef component_sum_3
#undef scaled_value_12
#undef weighted_sum_39
#undef weighted_sum_40
#undef weighted_sum_41
#undef quaternion
#undef scaled_value_13
#undef state_address_12
#undef reordered_vector_2
#undef rotation_matrix
#undef weighted_sum_42
#undef weighted_sum_43
#undef weighted_sum_44
#undef weighted_sum_45

