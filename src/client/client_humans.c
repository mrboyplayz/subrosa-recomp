#include "shared_client.h"

#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (0000000140008020) ----------------------------------------------------
void sub_140008020()
{
  unsigned int *state_address;
  int i;
  int remaining_count;
  int selection_code;
  __int64 packed_word_bits;
  float weighted_sum;
  float weighted_sum_2;
  unsigned int *state_address_2;
  __int64 remaining_count_2;
  __int64 scaled_index;
  float combined_products;
  __int64 scaled_index_2;
  float combined_products_2;
  __int64 table_value;
  float combined_products_3;
  __int64 table_value_2;
  float combined_products_4;
  __int64 scaled_index_3;
  __int64 remaining_count_3;
  unsigned int *state_address_3;
  __int64 remaining_count_4;
  unsigned int *buffer_cursor;
  __int64 parent;
  __int64 scaled_index_4;
  int scaled_index_5;
  int scaled_index_6;

  state_address = &g_1601172AC;
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(state_address - 3) )
    {
      remaining_count = state_address[1];
      if ( remaining_count > 0 )
        state_address[1] = --remaining_count;
      if ( (((unsigned __int8)i ^ LOBYTE(game_tick)) & 0x1F) == 0 )
      {
        selection_code = 0;
        if ( !remaining_count )
        {
          packed_word_bits = (int)*state_address;
          if ( (_DWORD)packed_word_bits == -1 )
          {
            weighted_sum = *((float *)state_address + 2);
            weighted_sum_2 = *((float *)state_address + 4);
          }
          else
          {
            weighted_sum = *(float *)&dword_140404A6C[7166 * packed_word_bits + 280651335];
            weighted_sum_2 = *(float *)&dword_140404A6C[7166 * packed_word_bits + 280651337];
          }
          state_address_2 = &g_1832A552C;
          remaining_count_2 = 64;
          do
          {
            if ( *(state_address_2 - 7305) )
            {
              scaled_index = (int)*(state_address_2 - 7303);
              if ( (_DWORD)scaled_index != -1 && !dword_140404A6C[3597 * scaled_index + 71859139] && (int)*(state_address_2 - 7290) > 0 && selection_code < 2 )
              {
                combined_products = (float)((float)(weighted_sum_2 - *((float *)state_address_2 - 7166)) * (float)(weighted_sum_2 - *((float *)state_address_2 - 7166)))
                    + (float)((float)(weighted_sum - *((float *)state_address_2 - 7168)) * (float)(weighted_sum - *((float *)state_address_2 - 7168)));
                if ( combined_products >= 9216.0 )
                {
                  if ( combined_products < 10816.0 )
                    selection_code = 1;
                }
                else
                {
                  selection_code = 2;
                }
              }
            }
            if ( *(state_address_2 - 139) )
            {
              scaled_index_2 = (int)*(state_address_2 - 137);
              if ( (_DWORD)scaled_index_2 != -1 && !dword_140404A6C[3597 * scaled_index_2 + 71859139] && (int)*(state_address_2 - 124) > 0 && selection_code < 2 )
              {
                combined_products_2 = (float)((float)(weighted_sum_2 - *(float *)state_address_2) * (float)(weighted_sum_2 - *(float *)state_address_2))
                    + (float)((float)(weighted_sum - *((float *)state_address_2 - 2)) * (float)(weighted_sum - *((float *)state_address_2 - 2)));
                if ( combined_products_2 >= 9216.0 )
                {
                  if ( combined_products_2 < 10816.0 )
                    selection_code = 1;
                }
                else
                {
                  selection_code = 2;
                }
              }
            }
            if ( state_address_2[7027] )
            {
              table_value = (int)state_address_2[7029];
              if ( (_DWORD)table_value != -1 && !dword_140404A6C[3597 * table_value + 71859139] && (int)state_address_2[7042] > 0 && selection_code < 2 )
              {
                combined_products_3 = (float)((float)(weighted_sum_2 - *((float *)state_address_2 + 7166)) * (float)(weighted_sum_2 - *((float *)state_address_2 + 7166)))
                    + (float)((float)(weighted_sum - *((float *)state_address_2 + 7164)) * (float)(weighted_sum - *((float *)state_address_2 + 7164)));
                if ( combined_products_3 >= 9216.0 )
                {
                  if ( combined_products_3 < 10816.0 )
                    selection_code = 1;
                }
                else
                {
                  selection_code = 2;
                }
              }
            }
            if ( state_address_2[14193] )
            {
              table_value_2 = (int)state_address_2[14195];
              if ( (_DWORD)table_value_2 != -1 && !dword_140404A6C[3597 * table_value_2 + 71859139] && (int)state_address_2[14208] > 0 && selection_code < 2 )
              {
                combined_products_4 = (float)((float)(weighted_sum_2 - *((float *)state_address_2 + 14332)) * (float)(weighted_sum_2 - *((float *)state_address_2 + 14332)))
                    + (float)((float)(weighted_sum - *((float *)state_address_2 + 14330)) * (float)(weighted_sum - *((float *)state_address_2 + 14330)));
                if ( combined_products_4 >= 9216.0 )
                {
                  if ( combined_products_4 < 10816.0 )
                    selection_code = 1;
                }
                else
                {
                  selection_code = 2;
                }
              }
            }
            state_address_2 += 28664;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          if ( selection_code == 2 )
          {
            if ( (_DWORD)packed_word_bits != -1 )
            {
LABEL_64:
              if ( (int)dword_140404A6C[7166 * (int)packed_word_bits + 280651318] <= 0 )
              {
                scaled_index_6 = *(state_address - 1);
                *state_address = -1;
                if ( scaled_index_6 != -1 )
                {
                  sub_1400802F0(scaled_index_6);
                  *(state_address - 1) = -1;
                }
                state_address[1] = 18000;
              }
              goto LABEL_68;
            }
            sub_140007C90(i);
LABEL_63:
            LODWORD(packed_word_bits) = *state_address;
            if ( *state_address == -1 )
              goto LABEL_68;
            goto LABEL_64;
          }
          if ( selection_code )
            goto LABEL_63;
        }
        scaled_index_3 = (int)*state_address;
        if ( (_DWORD)scaled_index_3 != -1 )
        {
          remaining_count_3 = 8;
          state_address_3 = &dword_140404A6C[7166 * scaled_index_3 + 280658140];
          do
          {
            remaining_count_4 = (int)*(state_address_3 - 1);
            if ( remaining_count_4 > 0 )
            {
              buffer_cursor = state_address_3;
              do
              {
                parent = (int)*buffer_cursor;
                scaled_index_4 = 1760 * parent;
                if ( (int)dword_140404A6C[1760 * parent + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[scaled_index_4 + 278845907] + 278845900] = 0;
                  sr_world_detach_item(dword_140404A6C[scaled_index_4 + 278845907], parent);
                }
                ++buffer_cursor;
                dword_140404A6C[scaled_index_4 + 278845900] = 0;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
            }
            state_address_3 += 10;
            --remaining_count_3;
          }
          while ( remaining_count_3 );
          sub_14007F590(*state_address);
          *state_address = -1;
        }
        scaled_index_5 = *(state_address - 1);
        if ( scaled_index_5 != -1 )
        {
          sub_1400802F0(scaled_index_5);
          *(state_address - 1) = -1;
        }
        goto LABEL_63;
      }
    }
LABEL_68:
    state_address += 202;
  }
}

//----- (0000000140008440) ----------------------------------------------------
void            sub_140008440(int a1, int a2)
{
  __int64 input_value;
  int input_value_2;
  int iteration_count;
  __int64 running_total;
  __int64 running_total_2;
  signed int iteration_count_2;
  __int64 table_value;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int table_value_2;
  int iteration_count_3;
  __int64 packed_word_bits;
  _DWORD *running_total_3;
  bool comparison_result;
  int saved_iteration_count;
  __int64 masked_bits;
  __int64 scaled_index_3;
  float combined_products;
  float combined_products_2;
  float squared_component;
  float state_address;
  float square_root;
  __int64 table_value_3;
  unsigned int *state_address_2;
  __int64 scaled_index_4;
  float weighted_sum;
  float weighted_sum_2;
  float state_address_3;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  signed int iteration_count_4;
  __int64 scaled_index_5;
  float *weighted_sum_6;
  float scaled_value;
  __int64 table_value_4;
  __int64 scaled_index_6;
  __int64 cached_input_value;
  int table_value_5;
  __int64 scaled_index_7;
  __int64 table_value_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float combined_products_3;
  float combined_products_4;
  float square_root_2;
  float *running_total_4;
  __int64 loaded_word;
  float weighted_sum_9;
  float combined_products_5;
  float combined_products_6;
  __int64 loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140008440[16];
#define state_address_4 (*(float (*))(void *)(sr_frame_140008440 + 0)) /* [rsp+20h] */
#define saved_state_address (*(float (*))(void *)(sr_frame_140008440 + 4)) /* [rsp+24h] */
#define saved_combined_products (*(float (*))(void *)(sr_frame_140008440 + 8)) /* [rsp+28h] */

  input_value = a1;
  input_value_2 = a2;
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ LOBYTE(game_tick)) & 1) == 0 )
  {
    iteration_count = 0;
    running_total = 0;
    running_total_2 = 0;
    iteration_count_2 = 1;
    do
    {
      if ( dword_140404A6C[running_total + 280651303] )
      {
        if ( (int)dword_140404A6C[running_total + 280651318] > 0 )
        {
          table_value = (int)dword_140404A6C[running_total + 280651305];
          if ( (_DWORD)table_value != -1 )
          {
            scaled_index = 3597 * input_value;
            if ( dword_140404A6C[3597 * table_value + 71856286] != dword_140404A6C[3597 * input_value + 71856286] )
            {
              scaled_index_2 = 7166LL * input_value_2;
              if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651675]
                                                 - *(float *)&dword_140404A6C[running_total + 280651675])
                                         * (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651675]
                                                 - *(float *)&dword_140404A6C[running_total + 280651675]))
                                 + (float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651674]
                                                 - *(float *)&dword_140404A6C[running_total + 280651674])
                                         * (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651674]
                                                 - *(float *)&dword_140404A6C[running_total + 280651674])))
                         + (float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651676]
                                         - *(float *)&dword_140404A6C[running_total + 280651676])
                                 * (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651676]
                                         - *(float *)&dword_140404A6C[running_total + 280651676]))) < 16384.0 )
              {
                table_value_2 = dword_140404A6C[scaled_index + 71859668];
                iteration_count_3 = 0;
                LODWORD(packed_word_bits) = -1;
                if ( table_value_2 > 0 )
                {
                  running_total_3 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291652036);
                  do
                  {
                    comparison_result = *running_total_3 == iteration_count;
                    running_total_3 += 6;
                    saved_iteration_count = iteration_count_3;
                    if ( !comparison_result )
                      saved_iteration_count = packed_word_bits;
                    ++iteration_count_3;
                    LODWORD(packed_word_bits) = saved_iteration_count;
                  }
                  while ( iteration_count_3 < table_value_2 );
                }
                masked_bits = game_tick & 0xF;
                if ( dword_140404A6C[running_total + 280651313] != -1 )
                  masked_bits = 3;
                scaled_index_3 = 312 * masked_bits + running_total * 4;
                combined_products = *(float *)((char *)&g_18329E530 + scaled_index_3)
                    - *(float *)&dword_140404A6C[scaled_index_2 + 280651675];
                combined_products_2 = *(float *)((char *)&g_18329E534 + scaled_index_3)
                    - *(float *)&dword_140404A6C[scaled_index_2 + 280651676];
                state_address_4 = *(float *)((char *)&g_18329E52C + scaled_index_3)
                    - *(float *)&dword_140404A6C[scaled_index_2 + 280651674];
                saved_state_address = combined_products;
                squared_component = combined_products * combined_products;
                state_address = (float)(combined_products * *(float *)&dword_140404A6C[scaled_index_2 + 280651693])
                    + (float)(state_address_4 * *(float *)&dword_140404A6C[scaled_index_2 + 280651692]);
                saved_combined_products = combined_products_2;
                square_root = fsqrt((float)(squared_component + (float)(state_address_4 * state_address_4)) + (float)(combined_products_2 * combined_products_2));
                if ( (float)(state_address + (float)(combined_products_2 * *(float *)&dword_140404A6C[scaled_index_2 + 280651694])) < 0.0
                  && (dword_140404A6C[scaled_index + 71859140] == 1
                   || !(unsigned int)sub_1400DC050(
                                       (float *)&dword_140404A6C[scaled_index_2 + 280651674],
                                       (float *)&dword_140404A6C[78 * masked_bits + 280651440 + running_total_2],
                                       1)) )
                {
                  if ( (_DWORD)packed_word_bits != -1 )
                    goto LABEL_23;
                  table_value_3 = (int)dword_140404A6C[scaled_index + 71859668];
                  if ( (int)table_value_3 < 16 )
                  {
                    dword_140404A6C[6 * table_value_3 + 71859670 + scaled_index] = iteration_count;
                    packed_word_bits = (int)dword_140404A6C[scaled_index + 71859668];
                    dword_140404A6C[6 * packed_word_bits + 71859674 + scaled_index] = 0;
                    state_address_2 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index + 71859668] + 71859671 + scaled_index];
                    *state_address_2 = *(unsigned int *)((char *)&g_18329E52C + scaled_index_3);
                    state_address_2[1] = *(unsigned int *)((char *)&g_18329E530 + scaled_index_3);
                    state_address_2[2] = *(unsigned int *)((char *)&g_18329E534 + scaled_index_3);
                    dword_140404A6C[6 * (int)dword_140404A6C[scaled_index + 71859668]++ + 71859675 + scaled_index] = 600;
                    if ( (_DWORD)packed_word_bits != -1 )
                    {
LABEL_23:
                      scaled_index_4 = scaled_index * 4 + 24LL * (int)packed_word_bits;
                      weighted_sum = *(float *)((char *)&g_1516241D4 + scaled_index_4) + 1.0;
                      *(float *)((char *)&g_1516241D4 + scaled_index_4) = weighted_sum;
                      if ( weighted_sum > 16.0 )
                        *(unsigned int *)((char *)&g_1516241D4 + scaled_index_4) = 1098907648;
                      *(float *)((char *)&g_1516241C8 + scaled_index_4) = *(float *)((char *)&g_1516241C8
                                                                                      + scaled_index_4)
                                                                           * 0.875;
                      *(float *)((char *)&g_1516241CC + scaled_index_4) = *(float *)((char *)&g_1516241CC
                                                                                      + scaled_index_4)
                                                                           * 0.875;
                      *(float *)((char *)&g_1516241D0 + scaled_index_4) = *(float *)((char *)&g_1516241D0
                                                                                      + scaled_index_4)
                                                                           * 0.875;
                      sr_human_random_direction(
                        &state_address_4,
                        (float)((float)(16.0 - *(float *)((char *)&g_1516241D4 + scaled_index_4)) + square_root) * 0.03125,
                        0.0);
                      weighted_sum_2 = saved_combined_products + *(float *)((char *)&g_18329E534 + scaled_index_3);
                      state_address_3 = (float)(saved_state_address + *(float *)((char *)&g_18329E530 + scaled_index_3))
                          + (float)(*(float *)&dword_140404A6C[running_total + 280651447] * 4.0);
                      state_address_4 = (float)(*(float *)&dword_140404A6C[running_total + 280651446] * 4.0)
                          + (float)(state_address_4 + *(float *)((char *)&g_18329E52C + scaled_index_3));
                      weighted_sum_3 = *(float *)&dword_140404A6C[running_total + 280651448] * 4.0;
                      weighted_sum_4 = (float)(state_address_4 * 0.125) + *(float *)((char *)&g_1516241C8 + scaled_index_4);
                      saved_state_address = state_address_3;
                      *(float *)((char *)&g_1516241C8 + scaled_index_4) = weighted_sum_4;
                      weighted_sum_5 = (float)(state_address_3 * 0.125) + *(float *)((char *)&g_1516241CC + scaled_index_4);
                      saved_combined_products = weighted_sum_2 + weighted_sum_3;
                      *(float *)((char *)&g_1516241CC + scaled_index_4) = weighted_sum_5;
                      *(float *)((char *)&g_1516241D0 + scaled_index_4) = (float)((float)(weighted_sum_2 + weighted_sum_3) * 0.125)
                                                                           + *(float *)((char *)&g_1516241D0
                                                                                      + scaled_index_4);
                    }
                  }
                }
              }
              input_value_2 = a2;
            }
          }
        }
      }
      ++iteration_count;
      running_total_2 += 7166;
      running_total += 7166;
    }
    while ( iteration_count < 256 );
    iteration_count_4 = 0;
    scaled_index_5 = 3597 * input_value;
    if ( (int)dword_140404A6C[3597 * input_value + 71859668] > 0 )
    {
      weighted_sum_6 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_5 * 4 + 291652052);
      do
      {
        scaled_value = *weighted_sum_6 * 0.96875;
        *weighted_sum_6 = scaled_value;
        if ( scaled_value >= 0.875 )
        {
          ++iteration_count_4;
          weighted_sum_6 += 6;
        }
        else
        {
          table_value_4 = (int)dword_140404A6C[scaled_index_5 + 71859668];
          dword_140404A6C[scaled_index_5 + 71859668] = table_value_4 - 1;
          scaled_index_6 = scaled_index_5 * 4 + 24 * table_value_4;
          *((_OWORD *)weighted_sum_6 - 1) = *(_OWORD *)((char *)&g_1516241AC + scaled_index_6);
          *(_QWORD *)weighted_sum_6 = *(_QWORD *)((char *)&g_1516241BC + scaled_index_6);
        }
      }
      while ( iteration_count_4 < (int)dword_140404A6C[scaled_index_5 + 71859668] );
    }
    cached_input_value = input_value_2;
    table_value_5 = dword_140404A6C[scaled_index_5 + 71859668];
    scaled_index_7 = 7166 * cached_input_value;
    dword_140404A6C[scaled_index_5 + 71859669] = 0;
    table_value_6 = (int)dword_140404A6C[scaled_index_5 + 71859670];
    weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_7 + 280651336];
    weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_7 + 280651337];
    combined_products_3 = weighted_sum_7 - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651336];
    combined_products_4 = weighted_sum_8 - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651337];
    square_root_2 = fsqrt(
            (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_7 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651335])
                          * (float)(*(float *)&dword_140404A6C[scaled_index_7 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * table_value_6 + 280651335]))
                  + (float)(combined_products_3 * combined_products_3))
          + (float)(combined_products_4 * combined_products_4));
    if ( table_value_5 > 1 )
    {
      running_total_4 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_5 * 4 + 291652060);
      do
      {
        if ( running_total_4[4] > 8.0 )
        {
          loaded_word = *(int *)running_total_4;
          weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_7 + 280651335];
          combined_products_5 = weighted_sum_7 - *(float *)&dword_140404A6C[7166 * loaded_word + 280651336];
          combined_products_6 = weighted_sum_8 - *(float *)&dword_140404A6C[7166 * loaded_word + 280651337];
          if ( square_root_2 > fsqrt(
                       (float)((float)(combined_products_5 * combined_products_5)
                             + (float)((float)(weighted_sum_9 - *(float *)&dword_140404A6C[7166 * loaded_word + 280651335])
                                     * (float)(weighted_sum_9 - *(float *)&dword_140404A6C[7166 * loaded_word + 280651335])))
                     + (float)(combined_products_6 * combined_products_6)) )
          {
            dword_140404A6C[scaled_index_5 + 71859669] = iteration_count_2;
            loaded_word_2 = 7166LL * *(int *)running_total_4;
            square_root_2 = fsqrt(
                    (float)((float)((float)(weighted_sum_7 - *(float *)&dword_140404A6C[loaded_word_2 + 280651336])
                                  * (float)(weighted_sum_7 - *(float *)&dword_140404A6C[loaded_word_2 + 280651336]))
                          + (float)((float)(weighted_sum_9 - *(float *)&dword_140404A6C[loaded_word_2 + 280651335])
                                  * (float)(weighted_sum_9 - *(float *)&dword_140404A6C[loaded_word_2 + 280651335])))
                  + (float)((float)(weighted_sum_8 - *(float *)&dword_140404A6C[loaded_word_2 + 280651337])
                          * (float)(weighted_sum_8 - *(float *)&dword_140404A6C[loaded_word_2 + 280651337])));
          }
        }
        ++iteration_count_2;
        running_total_4 += 6;
      }
      while ( iteration_count_2 < table_value_5 );
    }
  }
}
#undef state_address_4
#undef saved_state_address
#undef saved_combined_products

//----- (000000014002DB60) ----------------------------------------------------
__int64            sub_14002DB60(int a1, int a2)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 replication_peer_offset;
  __int64 scaled_index;
  unsigned int float_word;
  unsigned int float_word_2;
  unsigned int float_word_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 remaining_count;
  float saved_scaled_value;
  unsigned int *state_address;
  __int64 table_value;
  __int64 scaled_index_5;
  __int64 table_value_2;
  __int64 scaled_index_6;
  unsigned int table_value_3;
  __int64 table_value_4;
  float *combined_products;
  float scaled_value;
  float combined_products_2;
  float combined_products_3;
  float selected_scalar;
  __int64 scaled_index_7;
  unsigned int table_value_5;
  __int64 table_value_6;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  float *state_address_2;
  float weighted_sum;
  float state_address_3;
  float square_root;
  float state_address_4;
  float selected_scalar_2;
  float combined_products_4;
  unsigned int *state_address_5;
  signed int iteration_count;
  unsigned int *state_address_6;
  __int64 iteration_count_2;
  unsigned int *state_address_7;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  float *combined_products_5;
  float square_root_2;
  float selected_scalar_3;
  unsigned int loaded_word;
  unsigned int *state_address_8;
  signed int i;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 iteration_count_3;
  _DWORD *running_total;
  __int64 scaled_index_15;
  float *state_address_9;
  float square_root_3;
  float selected_scalar_4;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  signed int iteration_count_4;
  __int64 scaled_index_18;
  int *buffer_cursor;
  __int64 loaded_word_2;
  __int64 iteration_count_5;
  unsigned int *state_address_10;
  float *combined_products_6;
  float square_root_4;
  float selected_scalar_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002DB60[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 0)) /* [rsp+0h] */
#define scaled_value_2 (*(float (*))(void *)(sr_frame_14002DB60 + 64)) /* [rsp+40h] */
#define scaled_index_19 (*(unsigned __int64 (*))(void *)(sr_frame_14002DB60 + 72)) /* [rsp+48h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_14002DB60 + 80)) /* [rsp+50h] */
#define float_word_4 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 88)) /* [rsp+58h] */
#define saved_float_word (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 92)) /* [rsp+5Ch] */
#define saved_float_word_2 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 96)) /* [rsp+60h] */
#define unused_frame_slot_104 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 104)) /* [rsp+68h] */

  scaled_value_2 = *(float *)&a1;
  input_value = a1;
  input_value_2 = a2;
  if ( !g_151E461C0 )
  {
    replication_peer_offset = 47224LL * a1;
    dword_140404A6C[replication_peer_offset + 438887428] = 0;
    dword_140404A6C[replication_peer_offset + 438887438] = 0;
    dword_140404A6C[replication_peer_offset + 438887448] = 0;
    dword_140404A6C[replication_peer_offset + 438887458] = 0;
    dword_140404A6C[replication_peer_offset + 438887468] = 0;
    dword_140404A6C[replication_peer_offset + 438887478] = 0;
    dword_140404A6C[replication_peer_offset + 438887488] = 0;
    dword_140404A6C[replication_peer_offset + 438887498] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  scaled_index = (int)dword_140404A6C[3597 * a2 + 71856292];
  if ( (_DWORD)scaled_index == -1 )
  {
    scaled_index_2 = (int)dword_140404A6C[47224 * a1 + 438887508];
    if ( (_DWORD)scaled_index_2 == -1 )
    {
      float_word = g_18329E8D4;
      float_word_2 = g_18329E8D8;
      float_word_3 = g_18329E8DC;
    }
    else
    {
      scaled_index_3 = 7166 * scaled_index_2;
      float_word = dword_140404A6C[scaled_index_3 + 280651674];
      float_word_2 = dword_140404A6C[scaled_index_3 + 280651675];
      float_word_3 = dword_140404A6C[scaled_index_3 + 280651676];
    }
  }
  else
  {
    float_word = dword_140404A6C[7166 * scaled_index + 280651674];
    float_word_2 = dword_140404A6C[7166 * scaled_index + 280651675];
    float_word_3 = dword_140404A6C[7166 * scaled_index + 280651676];
  }
  scaled_index_4 = (int)dword_140404A6C[3597 * input_value_2 + 71856292];
  remaining_count = 8;
  saved_scaled_value = scaled_value_2;
  float_word_4 = float_word;
  saved_float_word = float_word_2;
  saved_float_word_2 = float_word_3;
  state_address = &dword_140404A6C[47224 * input_value + 438887428];
  scaled_index_19 = 188896 * input_value;
  do
  {
    if ( !*state_address )
      goto LABEL_64;
    table_value = (int)state_address[1];
    saved_scaled_value = 128.0;
    scaled_index_5 = 3597 * table_value;
    if ( !dword_140404A6C[3597 * table_value + 71856253] )
      *state_address = 0;
    table_value_2 = (int)state_address[3];
    scaled_index_6 = 32901 * table_value;
    if ( (_DWORD)table_value_2 != -1 )
    {
      saved_scaled_value = 1.0;
      if ( dword_140404A6C[scaled_index_6 + 299853693] )
        *state_address = 0;
      scaled_index_7 = 1760 * table_value_2;
      table_value_5 = dword_140404A6C[scaled_index_7 + 278845898];
      if ( table_value_5 == 25 )
      {
        table_value_6 = (int)dword_140404A6C[scaled_index_7 + 278845980];
        if ( (_DWORD)table_value_6 == -1 )
          goto LABEL_56;
        scaled_index_8 = 1760 * table_value_6;
        if ( dword_140404A6C[1760 * table_value_6 + 278845902] == -1 )
          *state_address = 0;
        if ( dword_140404A6C[scaled_index_8 + 278845904] )
          *state_address = 0;
        if ( dword_140404A6C[scaled_index_8 + 278845980] == -1 )
          *state_address = 0;
        if ( dword_140404A6C[scaled_index_8 + 278846052] != 3 )
LABEL_56:
          *state_address = 0;
      }
      else if ( table_value_5 == 26 )
      {
        scaled_index_9 = 1760LL * (int)state_address[4];
        if ( !dword_140404A6C[scaled_index_9 + 278845893] )
          *state_address = 0;
        if ( dword_140404A6C[scaled_index_9 + 278845902] == -1 )
          *state_address = 0;
        if ( (int)dword_140404A6C[scaled_index_9 + 278845904] >= 2 )
          *state_address = 0;
        if ( !dword_140404A6C[scaled_index_9 + 278846112] )
          goto LABEL_56;
      }
      state_address_2 = (float *)&dword_140404A6C[scaled_index_7 + 278845916];
      weighted_sum = *(float *)&dword_140404A6C[scaled_index_7 + 278845917];
      state_address_3 = (float)(*(float *)&float_word - *(float *)&dword_140404A6C[scaled_index_7 + 278845916])
          * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[scaled_index_7 + 278845916]);
      square_root = fsqrt(
              (float)((float)((float)(state_address_2[1] - *(float *)&float_word_2) * (float)(state_address_2[1] - *(float *)&float_word_2))
                    + (float)((float)(*state_address_2 - *(float *)&float_word) * (float)(*state_address_2 - *(float *)&float_word)))
            + (float)((float)(state_address_2[2] - *(float *)&float_word_3) * (float)(state_address_2[2] - *(float *)&float_word_3)));
      state_address_4 = (float)(*(float *)&float_word_3 - *(float *)&dword_140404A6C[scaled_index_7 + 278845918])
          * (float)(*(float *)&float_word_3 - *(float *)&dword_140404A6C[scaled_index_7 + 278845918]);
      *((float *)state_address + 8) = square_root;
      if ( (float)((float)((float)((float)(*(float *)&float_word_2 - weighted_sum) * (float)(*(float *)&float_word_2 - weighted_sum)) + state_address_3) + state_address_4) <= 16384.0 )
      {
        selected_scalar_2 = 1.0;
        if ( (unsigned int)sub_1400DC050(state_address_2, (float *)&float_word_4, 0) )
          selected_scalar_2 = 0.5;
        square_root = *((float *)state_address + 8);
        float_word_3 = saved_float_word_2;
        float_word_2 = saved_float_word;
        float_word = float_word_4;
      }
      else
      {
        selected_scalar_2 = 0.5;
      }
      combined_products_4 = (float)((float)(selected_scalar_2 - *((float *)state_address + 9)) * 0.125) + *((float *)state_address + 9);
      *((float *)state_address + 9) = combined_products_4;
      if ( square_root > combined_products_4 )
        goto LABEL_63;
      goto LABEL_64;
    }
    table_value_3 = dword_140404A6C[scaled_index_6 + 299853695];
    if ( table_value_3 )
    {
      if ( table_value_3 == 1 )
      {
        saved_scaled_value = 64.0;
      }
      else if ( table_value_3 == 2 )
      {
        saved_scaled_value = 128.0;
      }
    }
    else
    {
      saved_scaled_value = 8.0;
    }
    table_value_4 = (int)dword_140404A6C[scaled_index_5 + 71856292];
    state_address[2] = table_value_4;
    if ( dword_140404A6C[scaled_index_6 + 299853693] )
      *state_address = 0;
    if ( game_state != 3 )
    {
      if ( scaled_index_4 == -1 )
      {
        if ( (_DWORD)table_value_4 != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( (_DWORD)table_value_4 == -1 )
        {
          *state_address = 0;
          goto LABEL_34;
        }
LABEL_26:
        if ( (int)g_18329E344 <= 0 )
          *state_address = 0;
        combined_products = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * table_value_4 + 1126820052);
        scaled_value = *combined_products;
        combined_products_2 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * table_value_4 + 1126820052);
        combined_products_3 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * table_value_4 + 1126820052);
        *((float *)state_address + 8) = fsqrt(
                                (float)((float)((float)(combined_products_2 - *(float *)&float_word_2) * (float)(combined_products_2 - *(float *)&float_word_2))
                                      + (float)((float)(*combined_products - *(float *)&float_word) * (float)(*combined_products - *(float *)&float_word)))
                              + (float)((float)(combined_products_3 - *(float *)&float_word_3) * (float)(combined_products_3 - *(float *)&float_word_3)));
        if ( (float)((float)((float)((float)(*(float *)&float_word - scaled_value) * (float)(*(float *)&float_word - scaled_value))
                           + (float)((float)(*(float *)&float_word_2 - combined_products_2) * (float)(*(float *)&float_word_2 - combined_products_2)))
                   + (float)((float)(*(float *)&float_word_3 - combined_products_3) * (float)(*(float *)&float_word_3 - combined_products_3))) <= 16384.0 )
        {
          selected_scalar = 1.0;
          if ( (unsigned int)sub_1400DC050(combined_products, (float *)&float_word_4, 0) )
            selected_scalar = 0.5;
          float_word_3 = saved_float_word_2;
          float_word_2 = saved_float_word;
          float_word = float_word_4;
        }
        else
        {
          selected_scalar = 0.5;
        }
        *((float *)state_address + 9) = (float)((float)(selected_scalar - *((float *)state_address + 9)) * 0.125) + *((float *)state_address + 9);
      }
LABEL_34:
      if ( (float)(saved_scaled_value * *((float *)state_address + 9)) >= *((float *)state_address + 8) )
        goto LABEL_64;
LABEL_63:
      *state_address = 0;
    }
LABEL_64:
    state_address += 10;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_5 = &g_151620CFC;
  iteration_count = 0;
  state_address_6 = &g_187BDE868;
  while ( 2 )
  {
    if ( iteration_count != (_DWORD)input_value_2 && *(state_address_5 - 39) && !*(state_address_6 - 2) )
    {
      iteration_count_2 = 0;
      state_address_7 = &dword_140404A6C[scaled_index_19 / 4 + 438887429];
      do
      {
        if ( *(state_address_7 - 1) && *state_address_7 == iteration_count && state_address_7[1] == *state_address_5 )
          goto LABEL_96;
        ++iteration_count_2;
        state_address_7 += 10;
      }
      while ( iteration_count_2 < 8 );
      if ( game_state == 3 )
      {
LABEL_80:
        scaled_index_11 = (int)*state_address_5;
        if ( (_DWORD)scaled_index_11 == -1 || game_state == 3 )
          goto LABEL_87;
        combined_products_5 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * scaled_index_11 + 1126820052);
        square_root_2 = fsqrt(
                (float)((float)((float)(combined_products_5[1] - *(float *)&float_word_2) * (float)(combined_products_5[1] - *(float *)&float_word_2))
                      + (float)((float)(*combined_products_5 - *(float *)&float_word) * (float)(*combined_products_5 - *(float *)&float_word)))
              + (float)((float)(combined_products_5[2] - *(float *)&float_word_3) * (float)(combined_products_5[2] - *(float *)&float_word_3)));
        if ( (float)((float)((float)((float)(*(float *)&float_word_2 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * scaled_index_11 + 1126820052))
                                   * (float)(*(float *)&float_word_2 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * scaled_index_11 + 1126820052)))
                           + (float)((float)(*(float *)&float_word - *combined_products_5) * (float)(*(float *)&float_word - *combined_products_5)))
                   + (float)((float)(*(float *)&float_word_3 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * scaled_index_11 + 1126820052))
                           * (float)(*(float *)&float_word_3 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * scaled_index_11 + 1126820052)))) <= 16384.0 )
        {
          selected_scalar_3 = 1.0;
          if ( (unsigned int)sub_1400DC050(combined_products_5, (float *)&float_word_4, 0) )
            selected_scalar_3 = 0.5;
          float_word_3 = saved_float_word_2;
          float_word_2 = saved_float_word;
          float_word = float_word_4;
        }
        else
        {
          selected_scalar_3 = 0.5;
        }
      }
      else
      {
        scaled_index_10 = (int)*state_address_5;
        if ( scaled_index_4 != -1 )
        {
          if ( (_DWORD)scaled_index_10 == -1 )
            goto LABEL_96;
          goto LABEL_79;
        }
        if ( (_DWORD)scaled_index_10 != -1 )
        {
LABEL_79:
          if ( (int)dword_140404A6C[7166 * scaled_index_10 + 280651318] <= 0 )
            goto LABEL_96;
          goto LABEL_80;
        }
LABEL_87:
        square_root_2 = 4.0;
        selected_scalar_3 = 1.0;
      }
      loaded_word = *state_address_6;
      if ( *state_address_6 )
      {
        if ( loaded_word == 1 )
        {
          saved_scaled_value = 64.0;
        }
        else if ( loaded_word == 2 )
        {
          saved_scaled_value = 128.0;
        }
      }
      else
      {
        saved_scaled_value = 8.0;
      }
      if ( square_root_2 < (float)(selected_scalar_3 * saved_scaled_value) )
        sub_140007490(SLODWORD(scaled_value_2), iteration_count, *state_address_5, 0xFFFFFFFF, 0xFFFFFFFF, square_root_2, selected_scalar_3);
    }
LABEL_96:
    ++iteration_count;
    state_address_6 += 32901;
    state_address_5 += 3597;
    if ( iteration_count < 256 )
      continue;
    break;
  }
  state_address_8 = &g_182BBB2DC;
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(state_address_8 - 87) )
    {
      if ( *(state_address_8 - 82) != 25
        || (scaled_index_12 = (int)*state_address_8, (_DWORD)scaled_index_12 == -1)
        || (scaled_index_13 = (int)*(state_address_8 - 78), (_DWORD)scaled_index_13 == -1)
        || *(state_address_8 - 76)
        || state_address_8[72] != 3
        || (scaled_index_14 = (int)dword_140404A6C[7166 * scaled_index_13 + 280651305], (_DWORD)scaled_index_14 == -1)
        || dword_140404A6C[32901 * scaled_index_14 + 299853693] )
      {
LABEL_119:
        if ( *(state_address_8 - 82) == 26 )
        {
          if ( state_address_8[132] )
          {
            scaled_index_16 = (int)*(state_address_8 - 78);
            if ( (_DWORD)scaled_index_16 != -1 && (int)*(state_address_8 - 76) < 2 )
            {
              scaled_index_17 = (int)dword_140404A6C[7166 * scaled_index_16 + 280651305];
              if ( (_DWORD)scaled_index_17 != -1 && !dword_140404A6C[32901 * scaled_index_17 + 299853693] )
              {
                iteration_count_4 = 0;
                scaled_index_18 = 1028LL * (int)state_address_8[131];
                cached_scaled_index = scaled_index_18;
                if ( *(int *)((char *)&g_1816760A0 + scaled_index_18) > 0 )
                {
                  buffer_cursor = (int *)((char *)&g_1816760A4 + scaled_index_18);
                  do
                  {
                    loaded_word_2 = *buffer_cursor;
                    if ( i != (_DWORD)loaded_word_2 )
                    {
                      iteration_count_5 = 0;
                      state_address_10 = &dword_140404A6C[scaled_index_19 / 4 + 438887429];
                      while ( !*(state_address_10 - 1)
                           || *state_address_10 != dword_140404A6C[7166 * *(state_address_8 - 78) + 280651305]
                           || state_address_10[2] != (_DWORD)loaded_word_2 )
                      {
                        ++iteration_count_5;
                        state_address_10 += 10;
                        if ( iteration_count_5 >= 8 )
                        {
                          combined_products_6 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 7040 * loaded_word_2 + 1119597020);
                          square_root_4 = fsqrt(
                                  (float)((float)((float)(combined_products_6[1] - *(float *)&float_word_2) * (float)(combined_products_6[1] - *(float *)&float_word_2))
                                        + (float)((float)(*combined_products_6 - *(float *)&float_word) * (float)(*combined_products_6 - *(float *)&float_word)))
                                + (float)((float)(combined_products_6[2] - *(float *)&float_word_3) * (float)(combined_products_6[2] - *(float *)&float_word_3)));
                          if ( (float)((float)((float)((float)(*(float *)&float_word_2
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * loaded_word_2 + 1119597020))
                                                     * (float)(*(float *)&float_word_2
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * loaded_word_2 + 1119597020)))
                                             + (float)((float)(*(float *)&float_word - *combined_products_6) * (float)(*(float *)&float_word - *combined_products_6)))
                                     + (float)((float)(*(float *)&float_word_3
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * loaded_word_2 + 1119597020))
                                             * (float)(*(float *)&float_word_3
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * loaded_word_2 + 1119597020)))) <= 16384.0 )
                          {
                            selected_scalar_5 = 1.0;
                            if ( (unsigned int)sub_1400DC050(combined_products_6, (float *)&float_word_4, 0) )
                              selected_scalar_5 = 0.5;
                            float_word_3 = saved_float_word_2;
                            float_word_2 = saved_float_word;
                            float_word = float_word_4;
                            scaled_index_18 = cached_scaled_index;
                          }
                          else
                          {
                            selected_scalar_5 = 0.5;
                          }
                          if ( square_root_4 < selected_scalar_5 )
                          {
                            sub_140007490(
                              SLODWORD(scaled_value_2),
                              dword_140404A6C[7166 * *(state_address_8 - 78) + 280651305],
                              0xFFFFFFFF,
                              loaded_word_2,
                              i,
                              square_root_4,
                              selected_scalar_5);
                            scaled_index_18 = cached_scaled_index;
                          }
                          break;
                        }
                      }
                    }
                    ++iteration_count_4;
                    ++buffer_cursor;
                  }
                  while ( iteration_count_4 < *(int *)((char *)&g_1816760A0 + scaled_index_18) );
                }
              }
            }
          }
        }
      }
      else
      {
        iteration_count_3 = 0;
        running_total = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_19 + 1759763072);
        while ( !*(running_total - 1) || *running_total != (_DWORD)scaled_index_14 || running_total[2] != (_DWORD)scaled_index_12 )
        {
          ++iteration_count_3;
          running_total += 10;
          if ( iteration_count_3 >= 8 )
          {
            scaled_index_15 = 1760 * scaled_index_12;
            if ( dword_140404A6C[1760 * scaled_index_12 + 278845980] == i )
            {
              state_address_9 = (float *)&dword_140404A6C[scaled_index_15 + 278845916];
              square_root_3 = fsqrt(
                      (float)((float)((float)(state_address_9[1] - *(float *)&float_word_2) * (float)(state_address_9[1] - *(float *)&float_word_2))
                            + (float)((float)(*state_address_9 - *(float *)&float_word) * (float)(*state_address_9 - *(float *)&float_word)))
                    + (float)((float)(state_address_9[2] - *(float *)&float_word_3) * (float)(state_address_9[2] - *(float *)&float_word_3)));
              if ( (float)((float)((float)((float)(*(float *)&float_word_2 - *(float *)&dword_140404A6C[scaled_index_15 + 278845917])
                                         * (float)(*(float *)&float_word_2 - *(float *)&dword_140404A6C[scaled_index_15 + 278845917]))
                                 + (float)((float)(*(float *)&float_word - *(float *)&dword_140404A6C[scaled_index_15 + 278845916])
                                         * (float)(*(float *)&float_word - *(float *)&dword_140404A6C[scaled_index_15 + 278845916])))
                         + (float)((float)(*(float *)&float_word_3 - *(float *)&dword_140404A6C[scaled_index_15 + 278845918])
                                 * (float)(*(float *)&float_word_3 - *(float *)&dword_140404A6C[scaled_index_15 + 278845918]))) <= 16384.0 )
              {
                selected_scalar_4 = 1.0;
                if ( (unsigned int)sub_1400DC050(state_address_9, (float *)&float_word_4, 0) )
                  selected_scalar_4 = 0.5;
                float_word_3 = saved_float_word_2;
                float_word_2 = saved_float_word;
                float_word = float_word_4;
              }
              else
              {
                selected_scalar_4 = 0.5;
              }
              if ( square_root_3 < selected_scalar_4 )
                sub_140007490(
                  SLODWORD(scaled_value_2),
                  dword_140404A6C[7166 * *(state_address_8 - 78) + 280651305],
                  0xFFFFFFFF,
                  scaled_index_12,
                  dword_140404A6C[scaled_index_15 + 278845980],
                  square_root_3,
                  selected_scalar_4);
            }
            goto LABEL_119;
          }
        }
      }
    }
    state_address_8 += 1760;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef scaled_value_2
#undef scaled_index_19
#undef cached_scaled_index
#undef float_word_4
#undef saved_float_word
#undef saved_float_word_2
#undef unused_frame_slot_104

//----- (000000014002EFF0) ----------------------------------------------------
__int64            sub_14002EFF0(int a1)
{
  signed int cached_local_player;
  signed int float_word;
  unsigned int float_word_2;
  double square_root;
  __int64 remaining_count;
  unsigned int scaled_index;
  __int128 masked_bits;
  __int128 masked_bits_2;
  __int64 scaled_index_2;
  unsigned int table_value;
  float weighted_sum;
  __int64 scaled_index_3;
  float weighted_sum_2;
  float component_delta;
  __int128 masked_bits_3;
  double angle;
  float weighted_sum_3;
  float weighted_sum_4;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float square_root_2;
  float scaled_ratio;
  __int64 float_word_3;
  float scaled_ratio_2;
  double acos_result;
  float state_scalar;
  float component_sum;
  float weighted_sum_5;
  float weighted_sum_6;
  double square_root_3;
  float absolute_value;
  float weighted_sum_7;
  double angle_2;
  double angle_3;
  double angle_4;
  double angle_5;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  float square_root_4;
  float scaled_ratio_3;
  float scaled_ratio_4;
  float scaled_ratio_5;
  double acos_result_2;
  float component_sum_2;
  float scaled_value;
  float state_address;
  float weighted_sum_8;
  float weighted_sum_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002EFF0[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 0)) /* [rsp+0h] */
#define quaternion (*(float (*))(void *)(sr_frame_14002EFF0 + 32)) /* [rsp+20h] */
#define saved_component_delta (*(float (*))(void *)(sr_frame_14002EFF0 + 36)) /* [rsp+24h] */
#define saved_component_delta_2 (*(float (*))(void *)(sr_frame_14002EFF0 + 40)) /* [rsp+28h] */
#define frame_float_at_44 (*(float (*))(void *)(sr_frame_14002EFF0 + 44)) /* [rsp+2Ch] */
#define axis (*(float (*))(void *)(sr_frame_14002EFF0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14002EFF0 + 52)) /* [rsp+34h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14002EFF0 + 56)) /* [rsp+38h] */
#define axis_2 (*(float (*))(void *)(sr_frame_14002EFF0 + 64)) /* [rsp+40h] */
#define state_address_2 (*(float (*))(void *)(sr_frame_14002EFF0 + 68)) /* [rsp+44h] */
#define state_address_3 (*(float (*))(void *)(sr_frame_14002EFF0 + 72)) /* [rsp+48h] */
#define frame_word_at_80 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 80)) /* [rsp+50h] */
#define rotation_matrix (*(float (*)[10])(void *)(sr_frame_14002EFF0 + 88)) /* [rsp+58h] */
#define axis_3 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 128)) /* [rsp+80h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 144)) /* [rsp+90h] */
#define unused_written_slot_4 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 160)) /* [rsp+A0h] */
#define unused_frame_slot_168 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 168)) /* [rsp+A8h] */

  cached_local_player = local_player;
  float_word = -1;
  if ( local_player != -1 )
    float_word = dword_140404A6C[3597 * local_player + 71856292];
  if ( a1 > 0 )
  {
    float_word_2 = g_183F7C588;
    *(_QWORD *)&square_root = frame_word_at_80;
    remaining_count = (unsigned int)a1;
    do
    {
      if ( float_word != -1 )
      {
        if ( float_word != float_word_2 )
        {
          *(_QWORD *)&g_183F7C5C8 = 0;
          *(unsigned int *)&g_183F7C5D0 = 0;
          g_183F7C598 = 0;
          g_183F7C5A0 = 0;
          scaled_index = dword_140404A6C[7166 * float_word + 280651675];
          *(unsigned int *)&g_183F7C58C = dword_140404A6C[7166 * float_word + 280651674];
          *(unsigned int *)&g_183F7C594 = dword_140404A6C[7166 * float_word + 280651676];
          masked_bits = *(_OWORD *)&dword_140404A6C[7166 * float_word + 280651686];
          *(unsigned int *)&g_183F7C590 = scaled_index;
          masked_bits_2 = *(_OWORD *)&dword_140404A6C[7166 * float_word + 280651690];
          g_183F7C5A4 = masked_bits;
          g_183F7C5C4 = dword_140404A6C[7166 * float_word + 280651694];
          *(_OWORD *)&g_183F7C5B4 = masked_bits_2;
        }
        scaled_index_2 = 7166LL * float_word;
        table_value = dword_140404A6C[scaled_index_2 + 280651313];
        if ( table_value == -1 )
        {
          weighted_sum = *(float *)&dword_140404A6C[scaled_index_2 + 280651357];
          scaled_index_3 = 3597LL * cached_local_player;
          weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_3 + 71856301];
          if ( (float)(weighted_sum_2 - weighted_sum) >= 3.14159265359 )
            weighted_sum = weighted_sum + 6.2831855;
          if ( (float)(weighted_sum - weighted_sum_2) >= 3.14159265359 )
            weighted_sum_2 = weighted_sum_2 + 6.2831855;
          *(_QWORD *)&square_root = dword_140404A6C[scaled_index_3 + 71856297];
          component_delta = weighted_sum - weighted_sum_2;
          if ( (float)(component_delta - *(float *)&square_root) >= 3.14159265359 )
            *(float *)&square_root = *(float *)&square_root + 6.2831855;
          if ( (float)(*(float *)&square_root - component_delta) >= 3.14159265359 )
            component_delta = component_delta + 6.2831855;
          *(float *)&square_root = *(float *)&square_root - component_delta;
        }
        masked_bits_3 = *(_OWORD *)&dword_140404A6C[scaled_index_2 + 280651690];
        axis_3 = *(_OWORD *)&dword_140404A6C[scaled_index_2 + 280651686];
        unused_written_slot_4 = dword_140404A6C[scaled_index_2 + 280651694];
        unused_written_slot_3 = masked_bits_3;
        if ( fsqrt(
               (float)((float)(g_183F7C5A8 * g_183F7C5A8)
                     + (float)(*(float *)&g_183F7C5A4 * *(float *)&g_183F7C5A4))
             + (float)(g_183F7C5AC * g_183F7C5AC)) < 0.5 )
        {
          axis_3 = xmmword_140278D30;
          unused_written_slot_4 = 1065353216;
          g_183F7C5C4 = 1065353216;
          unused_written_slot_3 = xmmword_140278D30;
          g_183F7C5A4 = xmmword_140278D30;
          *(_OWORD *)&g_183F7C5B4 = xmmword_140278D30;
        }
        if ( table_value == -1 )
        {
          HIDWORD(angle) = HIDWORD(square_root);
          *(float *)&angle = *(float *)&square_root - *(float *)&dword_140404A6C[scaled_index_2 + 280651365];
        }
        else
        {
          *(_QWORD *)&angle = dword_140404A6C[3597 * cached_local_player + 71856299];
        }
        sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle);
        weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_2 + 280651675];
        weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_2 + 280651676];
        g_183F7C58C = g_183F7C58C
                                              + (float)((float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651674]
                                                              - g_183F7C58C)
                                                      * 0.5);
        g_183F7C590 = g_183F7C590
                                              + (float)((float)(weighted_sum_3 - g_183F7C590) * 0.5);
        g_183F7C594 = g_183F7C594
                                              + (float)((float)(weighted_sum_4 - g_183F7C594) * 0.5);
        sr_math_mat3_multiply_transposed_alt(rotation_matrix, (float *)&axis_3, (float *)(unsigned int *)&g_183F7C5A4);
        sr_math_quat_from_mat3(&quaternion, rotation_matrix);
        component_delta_2 = -quaternion;
        component_delta_3 = -saved_component_delta;
        component_delta_4 = -saved_component_delta_2;
        quaternion = component_delta_2;
        saved_component_delta = component_delta_3;
        saved_component_delta_2 = component_delta_4;
        square_root_2 = fsqrt((float)((float)(component_delta_2 * component_delta_2) + (float)(component_delta_3 * component_delta_3)) + (float)(component_delta_4 * component_delta_4));
        if ( square_root_2 == 0.0 )
        {
          scaled_ratio = 0.0;
          float_word_3 = 0;
          scaled_ratio_2 = 0.0;
        }
        else
        {
          HIDWORD(float_word_3) = 0;
          scaled_ratio = (float)(1.0 / square_root_2) * component_delta_2;
          *(float *)&float_word_3 = (float)(1.0 / square_root_2) * component_delta_3;
          scaled_ratio_2 = (float)(1.0 / square_root_2) * component_delta_4;
        }
        acos_result = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
        state_scalar = g_183F7C5B4;
        component_sum = acos_result + acos_result;
        unused_written_slot = *(float *)&float_word_3 * component_sum;
        axis = scaled_ratio * component_sum;
        unused_written_slot_2 = scaled_ratio_2 * component_sum;
        axis_2 = (float)((float)((float)(*(float *)&float_word_3 * component_sum) * *(float *)&g_183F7C5B0)
                    + (float)((float)(scaled_ratio * component_sum) * *(float *)&g_183F7C5A4))
            + (float)((float)(scaled_ratio_2 * component_sum) * g_183F7C5BC);
        state_address_2 = (float)((float)((float)(*(float *)&float_word_3 * component_sum) * g_183F7C5B4)
                    + (float)((float)(scaled_ratio * component_sum) * g_183F7C5A8))
            + (float)((float)(scaled_ratio_2 * component_sum) * g_183F7C5C0);
        weighted_sum_5 = (float)(axis_2 * 0.125) + g_183F7C5C8;
        state_address_3 = (float)((float)((float)(*(float *)&float_word_3 * component_sum) * g_183F7C5B8)
                    + (float)((float)(scaled_ratio * component_sum) * g_183F7C5AC))
            + (float)((float)(scaled_ratio_2 * component_sum) * *(float *)&g_183F7C5C4);
        weighted_sum_6 = (float)(state_address_2 * 0.125) + g_183F7C5CC;
        *(float *)&float_word_3 = (float)(state_address_3 * 0.125) + g_183F7C5D0;
        HIDWORD(square_root_3) = HIDWORD(float_word_3);
        g_183F7C5C8 = weighted_sum_5 * 0.5;
        g_183F7C5CC = weighted_sum_6 * 0.5;
        g_183F7C5D0 = *(float *)&float_word_3 * 0.5;
        *(float *)&square_root_3 = fsqrt(
                           (float)((float)((float)(weighted_sum_6 * weighted_sum_6) + (float)(weighted_sum_5 * weighted_sum_5))
                                 + (float)(*(float *)&float_word_3 * *(float *)&float_word_3))
                         * 0.25);
        if ( *(float *)&square_root_3 > 0.000015258789 )
        {
          unused_written_slot = (float)((float)(1.0 / *(float *)&square_root_3) * weighted_sum_6) * 0.5;
          axis = (float)(weighted_sum_5 * (float)(1.0 / *(float *)&square_root_3)) * 0.5;
          unused_written_slot_2 = (float)(*(float *)&float_word_3 * (float)(1.0 / *(float *)&square_root_3)) * 0.5;
          sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C5A4, &axis, square_root_3);
          state_scalar = g_183F7C5B4;
        }
        if ( dword_140404A6C[scaled_index_2 + 280651313] == -1 && dword_140404A6C[scaled_index_2 + 280651334] )
        {
          if ( state_scalar <= 0.0 )
            absolute_value = 0.0;
          else
            absolute_value = fabs((float)(state_scalar * state_scalar) * state_scalar);
          weighted_sum_7 = *(float *)&square_root + *(float *)&dword_140404A6C[scaled_index_2 + 280651341];
          axis_3 = xmmword_140278D30;
          unused_written_slot_3 = xmmword_140278D30;
          unused_written_slot_4 = 1065353216;
          *(_QWORD *)&angle_2 = dword_140404A6C[3597 * local_player + 71856299];
          *(float *)&angle_2 = (float)(*(float *)&angle_2 * 0.5) + weighted_sum_7;
          sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle_2);
          *(_QWORD *)&angle_3 = dword_140404A6C[3597 * local_player + 71856300];
          *(float *)&angle_3 = (float)(*(float *)&angle_3 * 0.75) + (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651342] * 0.5);
          sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3, angle_3);
          *(_QWORD *)&angle_4 = dword_140404A6C[3597 * local_player + 71856299];
          *(float *)&angle_4 = *(float *)&angle_4 * 0.5;
          sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle_4);
          *(_QWORD *)&angle_5 = dword_140404A6C[3597 * local_player + 71856300];
          *(float *)&angle_5 = (float)(*(float *)&angle_5 * 0.25) + (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651342] * 0.5);
          sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3, angle_5);
          sr_math_mat3_multiply_transposed_alt(rotation_matrix, (float *)&axis_3, (float *)(unsigned int *)&g_183F7C5A4);
          sr_math_quat_from_mat3(&quaternion, rotation_matrix);
          component_delta_5 = -quaternion;
          component_delta_6 = -saved_component_delta;
          component_delta_7 = -saved_component_delta_2;
          quaternion = component_delta_5;
          saved_component_delta = component_delta_6;
          saved_component_delta_2 = component_delta_7;
          square_root_4 = fsqrt((float)((float)(component_delta_5 * component_delta_5) + (float)(component_delta_6 * component_delta_6)) + (float)(component_delta_7 * component_delta_7));
          if ( square_root_4 == 0.0 )
          {
            scaled_ratio_3 = 0.0;
            scaled_ratio_4 = 0.0;
            scaled_ratio_5 = 0.0;
          }
          else
          {
            scaled_ratio_3 = (float)(1.0 / square_root_4) * component_delta_5;
            scaled_ratio_4 = (float)(1.0 / square_root_4) * component_delta_6;
            scaled_ratio_5 = (float)(1.0 / square_root_4) * component_delta_7;
          }
          acos_result_2 = acos(fminf(fmaxf(frame_float_at_44, -1.0), 1.0));
          component_sum_2 = acos_result_2 + acos_result_2;
          scaled_value = scaled_ratio_3 * component_sum_2;
          unused_written_slot_2 = scaled_ratio_5 * component_sum_2;
          unused_written_slot = scaled_ratio_4 * component_sum_2;
          state_address = (float)((float)(*(float *)&g_183F7C5B0 * (float)(scaled_ratio_4 * component_sum_2))
                      + (float)(*(float *)&g_183F7C5A4 * scaled_value))
              + (float)(g_183F7C5BC * (float)(scaled_ratio_5 * component_sum_2));
          axis = scaled_value;
          weighted_sum_8 = (float)((float)(g_183F7C5B4 * (float)(scaled_ratio_4 * component_sum_2))
                      + (float)(g_183F7C5A8 * scaled_value))
              + (float)(g_183F7C5C0 * (float)(scaled_ratio_5 * component_sum_2));
          HIDWORD(square_root) = 0;
          weighted_sum_9 = (float)((float)(g_183F7C5B8 * (float)(scaled_ratio_4 * component_sum_2))
                      + (float)(g_183F7C5AC * scaled_value))
              + (float)(*(float *)&g_183F7C5C4 * (float)(scaled_ratio_5 * component_sum_2));
          axis_2 = state_address * 0.5;
          state_address_2 = weighted_sum_8 * 0.5;
          state_address_3 = weighted_sum_9 * 0.5;
          *(float *)&square_root = fsqrt((float)((float)((float)(weighted_sum_8 * weighted_sum_8) + (float)(state_address * state_address)) + (float)(weighted_sum_9 * weighted_sum_9)) * 0.25);
          if ( *(float *)&square_root > 0.000015258789 )
          {
            state_address_3 = (float)(1.0 / *(float *)&square_root) * (float)(weighted_sum_9 * 0.5);
            state_address_2 = (float)(1.0 / *(float *)&square_root) * (float)(weighted_sum_8 * 0.5);
            axis_2 = (float)(1.0 / *(float *)&square_root) * (float)(state_address * 0.5);
            square_root = fmin(fmax(absolute_value * -0.39269908169875, *(float *)&square_root), absolute_value * 0.39269908169875);
            sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C5A4, &axis_2, sr_export_float_lane_container(sr_text_float_bits((float)(square_root))) /* the original converts to float (cvtsd2ss) before this call */);
          }
        }
        cached_local_player = local_player;
      }
      ++game_tick_mark;
      float_word_2 = float_word;
      g_183F7C588 = float_word;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef quaternion
#undef saved_component_delta
#undef saved_component_delta_2
#undef frame_float_at_44
#undef axis
#undef unused_written_slot
#undef unused_written_slot_2
#undef axis_2
#undef state_address_2
#undef state_address_3
#undef frame_word_at_80
#undef rotation_matrix
#undef axis_3
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_frame_slot_168

//----- (0000000140042930) ----------------------------------------------------
__int64            sub_140042930(__int64 a1, __int64 a2, __int64 a3)
{
  char masked_bits;
  unsigned int option_flags;
  unsigned int option_flags_2;
  int element_index;
  signed int option_flags_3;
  unsigned int option_flags_4;
  int cached_packet_in_byte;
  unsigned int integer_sum;
  int cached_packet_in_bit;
  __int64 integer_sum_2;
  signed int cached_packet_in_byte_2;
  __int128 masked_bits_2;
  __int128 masked_bits_3;
  __int64 saved_cached_packet_in_byte;
  unsigned int *decoded_value;
  __int64 remaining_count;
  int cached_packet_in_byte_3;
  int remaining_amount;
  unsigned int cached_packet_in_bit_2;
  char running_total;
  unsigned int integer_difference;
  unsigned int saved_option_flags;
  int remaining_amount_2;
  char running_total_2;
  unsigned int integer_difference_2;
  unsigned int saved_option_flags_2;
  int remaining_amount_3;
  char running_total_3;
  unsigned int integer_difference_3;
  unsigned int saved_option_flags_3;
  int remaining_amount_4;
  char running_total_4;
  unsigned int integer_difference_4;
  unsigned int saved_option_flags_4;
  int remaining_amount_5;
  char running_total_5;
  unsigned int integer_difference_5;
  unsigned int saved_option_flags_5;
  int remaining_amount_6;
  char running_total_6;
  unsigned int integer_difference_6;
  unsigned int saved_option_flags_6;
  int remaining_amount_7;
  int cached_packet_in_byte_4;
  signed int cached_packet_in_length;
  __int64 scaled_index;
  int cached_packet_in_bit_3;
  char running_total_7;
  int integer_difference_7;
  signed int saved_option_flags_7;
  __int64 cached_option_flags;
  __int64 scaled_index_2;
  __int64 saved_cached_packet_in_byte_2;
  __int64 saved_cached_packet_in_byte_3;
  __int64 saved_cached_packet_in_byte_4;
  __int64 saved_cached_packet_in_byte_5;
  signed int cached_packet_in_byte_5;
  int remaining_amount_8;
  unsigned int cached_packet_in_bit_4;
  char running_total_8;
  unsigned int integer_difference_8;
  unsigned int saved_option_flags_8;
  __int64 saved_cached_packet_in_byte_6;
  __int64 saved_cached_packet_in_byte_7;
  unsigned int saved_masked_bits;
  __int64 scaled_index_3;
  __int64 table_value;
  int cached_table_value;
  int *decoded_value_2;
  signed int iteration_count;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 integer_sum_3;
  __int64 scaled_index_6;
  signed int cached_packet_in_byte_6;
  signed int cached_packet_in_length_2;
  int cached_packet_in_bit_5;
  __int64 saved_cached_packet_in_byte_8;
  __int64 saved_cached_packet_in_byte_9;
  __int64 saved_cached_packet_in_byte_10;
  __int64 saved_cached_packet_in_byte_11;
  __int64 table_value_2;
  __int64 scaled_index_7;
  __int64 running_total_9;
  __int64 saved_cached_local_player;
  int *running_total_10;
  int *decoded_value_3;
  __int64 remaining_count_2;
  __int64 cached_remaining_count;
  signed int iteration_count_2;
  signed int cached_packet_in_length_3;
  __int64 running_total_11;
  int cached_packet_in_bit_6;
  int cached_packet_in_byte_7;
  int byte_count;
  __int64 scaled_index_8;
  __int64 saved_cached_packet_in_byte_12;
  int remaining_amount_9;
  char running_total_12;
  int integer_difference_9;
  __int64 saved_cached_packet_in_byte_13;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 integer_sum_4;
  __int64 saved_cached_local_player_2;
  __int64 remaining_count_3;
  __int64 running_total_13;
  signed int cached_packet_in_byte_8;
  int remaining_amount_10;
  signed int cached_packet_in_length_4;
  unsigned int cached_packet_in_bit_7;
  int option_flags_5;
  char running_total_14;
  unsigned int integer_difference_10;
  int saved_option_flags_9;
  int remaining_amount_11;
  int option_flags_6;
  char running_total_15;
  unsigned int integer_difference_11;
  int saved_option_flags_10;
  int remaining_amount_12;
  int option_flags_7;
  char running_total_16;
  unsigned int integer_difference_12;
  __int64 saved_running_total;
  __int64 saved_cached_local_player_3;
  int saved_option_flags_11;
  __int64 remaining_count_4;
  int remaining_amount_13;
  int option_flags_8;
  char running_total_17;
  unsigned int integer_difference_13;
  __int64 saved_option_flags_12;
  __int64 integer_sum_5;
  __m128i *destination_buffer;
  unsigned __int64 byte_count_2;
  int cached_packet_in_byte_9;
  int remaining_amount_14;
  signed int cached_packet_in_length_5;
  int cached_packet_in_bit_8;
  int option_flags_9;
  char running_total_18;
  int integer_difference_14;
  int remaining_amount_15;
  int option_flags_10;
  char running_total_19;
  int integer_difference_15;
  __int64 remaining_count_5;
  __int64 saved_cached_packet_in_byte_14;
  unsigned int state_word;
  __int64 i;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  int iteration_count_3;
  unsigned int *state_address_5;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 table_value_3;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 masked_bits_4;
  unsigned int state_word_2;
  unsigned int *state_address_6;
  __int64 remaining_count_6;
  unsigned int *state_address_7;
  signed int cached_packet_in_byte_10;
  signed int cached_packet_in_length_6;
  int cached_packet_in_bit_9;
  __int64 saved_cached_packet_in_byte_15;
  __int64 saved_cached_packet_in_byte_16;
  __int128 masked_bits_5;
  __int128 masked_bits_6;
  int call_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140042930[160];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140042930 + 0)) /* [rsp+0h] */
#define saved_masked_bits_2 (*(char (*))(void *)(sr_frame_140042930 + 32)) /* [rsp+20h] */
#define call_result_2 (*(int (*))(void *)(sr_frame_140042930 + 36)) /* [rsp+24h] */
#define saved_byte_count (*(int (*))(void *)(sr_frame_140042930 + 40)) /* [rsp+28h] */
#define saved_option_flags_13 (*(int (*))(void *)(sr_frame_140042930 + 44)) /* [rsp+2Ch] */
#define saved_option_flags_14 (*(int (*))(void *)(sr_frame_140042930 + 48)) /* [rsp+30h] */
#define saved_option_flags_15 (*(int (*))(void *)(sr_frame_140042930 + 52)) /* [rsp+34h] */
#define saved_option_flags_16 (*(int (*))(void *)(sr_frame_140042930 + 56)) /* [rsp+38h] */
#define saved_option_flags_17 (*(int (*))(void *)(sr_frame_140042930 + 60)) /* [rsp+3Ch] */
#define saved_option_flags_18 (*(int (*))(void *)(sr_frame_140042930 + 64)) /* [rsp+40h] */
#define cached_local_player (*(__int64 (*))(void *)(sr_frame_140042930 + 72)) /* [rsp+48h] */
#define saved_option_flags_19 (*(int (*))(void *)(sr_frame_140042930 + 80)) /* [rsp+50h] */
#define saved_option_flags_20 (*(int (*))(void *)(sr_frame_140042930 + 84)) /* [rsp+54h] */
#define saved_option_flags_21 (*(int (*))(void *)(sr_frame_140042930 + 88)) /* [rsp+58h] */
#define saved_option_flags_22 (*(int (*))(void *)(sr_frame_140042930 + 92)) /* [rsp+5Ch] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140042930 + 96)) /* [rsp+60h] */
#define saved_running_total_2 (*(__int64 (*))(void *)(sr_frame_140042930 + 104)) /* [rsp+68h] */
#define running_total_20 (*(__int64 (*))(void *)(sr_frame_140042930 + 112)) /* [rsp+70h] */
#define state_address_8 (*(unsigned int * (*))(void *)(sr_frame_140042930 + 120)) /* [rsp+78h] */
#define state_address_9 (*(unsigned int * (*))(void *)(sr_frame_140042930 + 128)) /* [rsp+80h] */
#define masked_bits_7 (*(unsigned int (*))(void *)(sr_frame_140042930 + 136)) /* [rsp+88h] */
#define masked_bits_8 (*(unsigned int (*))(void *)(sr_frame_140042930 + 140)) /* [rsp+8Ch] */
#define masked_bits_9 (*(unsigned int (*))(void *)(sr_frame_140042930 + 144)) /* [rsp+90h] */
#define unused_frame_slot_152 (*(__int64 (*))(void *)(sr_frame_140042930 + 152)) /* [rsp+98h] */

  if ( (int)++g_1A4D2DD08 < 1800 )
  {
    call_result_2 = sub_14011C760();
    if ( call_result_2 <= 0 )
      return 0; /* compatibility result discarded by all reviewed callers */
    masked_bits = saved_masked_bits_2;
    option_flags = call_result_2;
    option_flags_2 = call_result_2;
    element_index = call_result_2;
    saved_option_flags_13 = call_result_2;
    saved_option_flags_15 = call_result_2;
    option_flags_3 = call_result_2;
    option_flags_4 = call_result_2;
    saved_option_flags_20 = call_result_2;
    saved_option_flags_19 = call_result_2;
    saved_option_flags_22 = call_result_2;
    saved_option_flags_16 = call_result_2;
    saved_option_flags_14 = call_result_2;
    saved_option_flags_21 = call_result_2;
    saved_option_flags_17 = call_result_2;
    saved_option_flags_18 = call_result_2;
    while ( 1 )
    {
      cached_packet_in_byte = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (integer_sum = packet_in_byte + 1,
            (signed int)(packet_in_byte + 1) > (int)packet_in_length) )
      {
        cached_packet_in_bit = packet_in_bit;
      }
      else
      {
        cached_packet_in_bit = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_bit = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
          cached_packet_in_byte = integer_sum;
        }
        integer_sum_2 = cached_packet_in_byte++;
        masked_bits = *((_BYTE *)&packet_in_data + integer_sum_2);
        saved_masked_bits_2 = masked_bits;
        packet_in_byte = cached_packet_in_byte;
      }
      if ( masked_bits != 6 )
        break;
      g_1A4D2DD08 = 0;
      if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
        }
        game_unknown_1a4d2dce4 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
        packet_in_byte = cached_packet_in_byte + 4;
      }
      sr_net_read_bits(&game_type, 4);
      sr_net_read_bits(&g_183EBFCB0, 4);
      sr_net_read_bits(&g_183EBFCC4, 8);
      cached_packet_in_byte_2 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_byte_2 = packet_in_byte + 1;
          packet_in_bit = 0;
          ++packet_in_byte;
        }
        masked_bits_2 = *(_OWORD *)((char *)&packet_in_data + cached_packet_in_byte_2);
        masked_bits_3 = *(_OWORD *)((char *)&g_1853AD434 + cached_packet_in_byte_2);
        packet_in_byte = cached_packet_in_byte_2 + 32;
        g_183EBFAB0 = masked_bits_2;
        g_183EBFAC0 = masked_bits_3;
      }
      sub_14018D440((float *)(unsigned int *)&game_sun_angle, 16);
      sub_14018D440((float *)(unsigned int *)&game_unknown_183ebfd58, 16);
      if ( game_type == 7 )
        sr_net_read_bits(&g_183F7A604, 8);
LABEL_388:
      call_result = sub_14011C760();
      option_flags_2 = saved_option_flags_14;
      option_flags = saved_option_flags_16;
      masked_bits = saved_masked_bits_2;
      call_result_2 = call_result;
      if ( call_result <= 0 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( masked_bits != 5 )
    {
LABEL_367:
      if ( masked_bits == 9 )
      {
        if ( local_player != -1 )
          dword_140404A6C[3597 * local_player + 71856266] = 1;
        state_address_6 = &g_1A8E379E0;
        remaining_count_6 = 256;
        state_address_7 = &g_1A8E379E8;
        do
        {
          sr_net_read_bits(state_address_7 - 2, 1);
          if ( *state_address_6 )
          {
            cached_packet_in_byte_10 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000 )
            {
              cached_packet_in_length_6 = packet_in_length;
              cached_packet_in_bit_9 = packet_in_bit;
              if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
              {
                if ( (int)packet_in_bit > 0 )
                {
                  cached_packet_in_byte_10 = packet_in_byte + 1;
                  cached_packet_in_bit_9 = 0;
                  ++packet_in_byte;
                  packet_in_bit = 0;
                }
                saved_cached_packet_in_byte_15 = cached_packet_in_byte_10;
                cached_packet_in_byte_10 += 4;
                *state_address_7 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_15);
                packet_in_byte = cached_packet_in_byte_10;
              }
              if ( cached_packet_in_byte_10 < 0x10000 )
              {
                if ( cached_packet_in_byte_10 + 32 <= cached_packet_in_length_6 )
                {
                  if ( cached_packet_in_bit_9 > 0 )
                  {
                    ++cached_packet_in_byte_10;
                    cached_packet_in_bit_9 = 0;
                    packet_in_byte = cached_packet_in_byte_10;
                    packet_in_bit = 0;
                  }
                  saved_cached_packet_in_byte_16 = cached_packet_in_byte_10;
                  cached_packet_in_byte_10 += 32;
                  masked_bits_5 = *(_OWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_16);
                  masked_bits_6 = *(_OWORD *)((char *)&g_1853AD434 + saved_cached_packet_in_byte_16);
                  packet_in_byte = cached_packet_in_byte_10;
                  *(_OWORD *)(state_address_7 + 1) = masked_bits_5;
                  *(_OWORD *)(state_address_7 + 5) = masked_bits_6;
                }
                if ( cached_packet_in_byte_10 < 0x10000 && cached_packet_in_byte_10 + 4 <= cached_packet_in_length_6 )
                {
                  if ( cached_packet_in_bit_9 > 0 )
                  {
                    ++cached_packet_in_byte_10;
                    packet_in_bit = 0;
                    packet_in_byte = cached_packet_in_byte_10;
                  }
                  state_address_7[17] = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_10);
                  packet_in_byte = cached_packet_in_byte_10 + 4;
                }
              }
            }
          }
          state_address_7 += 20;
          state_address_6 += 20;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
      }
      goto LABEL_388;
    }
    g_1A4D2DD08 = 0;
    if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
    {
      if ( cached_packet_in_bit > 0 )
      {
        ++cached_packet_in_byte;
        cached_packet_in_bit = 0;
        packet_in_byte = cached_packet_in_byte;
        packet_in_bit = 0;
      }
      saved_cached_packet_in_byte = cached_packet_in_byte;
      cached_packet_in_byte += 4;
      element_index = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte);
      packet_in_byte = cached_packet_in_byte;
    }
    if ( element_index != game_unknown_183ebfcc8 )
      goto LABEL_388;
    if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= (int)packet_in_length )
    {
      if ( cached_packet_in_bit > 0 )
      {
        ++cached_packet_in_byte;
        packet_in_bit = 0;
        packet_in_byte = cached_packet_in_byte;
      }
      element_index = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte);
      packet_in_byte = cached_packet_in_byte + 4;
    }
    if ( (int)game_tick > element_index && (signed int)(game_tick - element_index) < 10000 )
      goto LABEL_388;
    game_tick = element_index;
    sr_net_read_bits(&game_state, 4);
    if ( game_state == 1 )
    {
      decoded_value = &g_151620CA8;
      remaining_count = 32;
      do
      {
        sr_net_read_bits(decoded_value, 1);
        decoded_value += 3597;
        --remaining_count;
      }
      while ( remaining_count );
      option_flags_2 = saved_option_flags_14;
    }
    else if ( game_state != 3 )
    {
LABEL_111:
      sr_net_read_bits(&g_183EBFCD4, 24);
      sr_net_read_bits(&g_183F79F84, 16);
      sr_net_read_bits(&game_day_time, 30);
      sr_net_read_bits(&g_183EBFDB4, 6);
      sr_net_read_bits(&g_183EC5978, 6);
      sr_net_read_bits(&g_183ECB53C, 6);
      sr_net_read_bits(&g_183ED1100, 6);
      sr_net_read_bits(&g_183ED6CC4, 6);
      sr_net_read_bits(&local_player, 8);
      remaining_amount_7 = 10;
      cached_packet_in_byte_4 = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      scaled_index = 3597LL * (int)local_player;
      cached_local_player = (int)local_player;
      saved_remaining_count = scaled_index * 4;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        cached_packet_in_bit_3 = packet_in_bit;
      }
      else
      {
        cached_packet_in_bit_3 = packet_in_bit;
        option_flags_3 = 0;
        running_total_7 = 0;
        while ( 1 )
        {
          integer_difference_7 = 8 - cached_packet_in_bit_3;
          option_flags_3 |= (~(-1 << remaining_amount_7)
               & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_4) >> SLOBYTE(packet_in_bit))) << running_total_7;
          saved_option_flags_21 = option_flags_3;
          if ( remaining_amount_7 < (unsigned int)(8 - cached_packet_in_bit_3) )
            break;
          cached_packet_in_bit_3 = 0;
          packet_in_bit = 0;
          if ( remaining_amount_7 == integer_difference_7 )
          {
            packet_in_byte = ++cached_packet_in_byte_4;
            goto LABEL_121;
          }
          ++cached_packet_in_byte_4;
          remaining_amount_7 -= integer_difference_7;
          running_total_7 += integer_difference_7;
          packet_in_byte = cached_packet_in_byte_4;
          if ( remaining_amount_7 <= 0 )
            goto LABEL_121;
        }
        cached_packet_in_bit_3 += remaining_amount_7;
        packet_in_bit = cached_packet_in_bit_3;
      }
LABEL_121:
      saved_option_flags_7 = option_flags_3;
      if ( option_flags_3 == 1023 )
        saved_option_flags_7 = -1;
      cached_option_flags = saved_option_flags_7;
      dword_140404A6C[3597 * local_player + 71856292] = saved_option_flags_7;
      if ( saved_option_flags_7 != -1 )
      {
        scaled_index_2 = 7166LL * saved_option_flags_7;
        if ( cached_packet_in_byte_4 < 0x10000 )
        {
          if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit_3 > 0 )
            {
              ++cached_packet_in_byte_4;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_4;
              cached_packet_in_bit_3 = 0;
            }
            saved_cached_packet_in_byte_2 = cached_packet_in_byte_4;
            cached_packet_in_byte_4 += 4;
            dword_140404A6C[scaled_index_2 + 280651341] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_2);
            packet_in_byte = cached_packet_in_byte_4;
          }
          if ( cached_packet_in_byte_4 < 0x10000 )
          {
            if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
            {
              if ( cached_packet_in_bit_3 > 0 )
              {
                ++cached_packet_in_byte_4;
                packet_in_bit = 0;
                packet_in_byte = cached_packet_in_byte_4;
                cached_packet_in_bit_3 = 0;
              }
              saved_cached_packet_in_byte_3 = cached_packet_in_byte_4;
              cached_packet_in_byte_4 += 4;
              dword_140404A6C[scaled_index_2 + 280651342] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_3);
              packet_in_byte = cached_packet_in_byte_4;
            }
            if ( cached_packet_in_byte_4 < 0x10000 )
            {
              if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
              {
                if ( cached_packet_in_bit_3 > 0 )
                {
                  ++cached_packet_in_byte_4;
                  packet_in_bit = 0;
                  packet_in_byte = cached_packet_in_byte_4;
                  cached_packet_in_bit_3 = 0;
                }
                saved_cached_packet_in_byte_4 = cached_packet_in_byte_4;
                cached_packet_in_byte_4 += 4;
                dword_140404A6C[scaled_index_2 + 280651365] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_4);
                packet_in_byte = cached_packet_in_byte_4;
              }
              if ( cached_packet_in_byte_4 < 0x10000 )
              {
                if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
                {
                  if ( cached_packet_in_bit_3 > 0 )
                  {
                    ++cached_packet_in_byte_4;
                    packet_in_bit = 0;
                    packet_in_byte = cached_packet_in_byte_4;
                    cached_packet_in_bit_3 = 0;
                  }
                  saved_cached_packet_in_byte_5 = cached_packet_in_byte_4;
                  cached_packet_in_byte_4 += 4;
                  dword_140404A6C[scaled_index_2 + 280651366] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_5);
                  packet_in_byte = cached_packet_in_byte_4;
                }
                if ( cached_packet_in_byte_4 < 0x10000 && cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
                {
                  if ( cached_packet_in_bit_3 > 0 )
                  {
                    ++cached_packet_in_byte_4;
                    packet_in_bit = 0;
                    packet_in_byte = cached_packet_in_byte_4;
                  }
                  dword_140404A6C[scaled_index_2 + 280651357] = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_4);
                  packet_in_byte = cached_packet_in_byte_4 + 4;
                }
              }
            }
          }
        }
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280651334], 1);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280651333], 8);
        cached_packet_in_byte_5 = packet_in_byte;
        remaining_amount_8 = 8;
        if ( (int)packet_in_byte < 0x10000
          && (signed int)(packet_in_byte + 1) <= (int)packet_in_length )
        {
          cached_packet_in_bit_4 = packet_in_bit;
          option_flags_4 = 0;
          running_total_8 = 0;
          while ( 1 )
          {
            integer_difference_8 = 8 - cached_packet_in_bit_4;
            option_flags_4 |= (~(-1 << remaining_amount_8)
                 & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_5) >> SLOBYTE(packet_in_bit))) << running_total_8;
            saved_option_flags_22 = option_flags_4;
            if ( remaining_amount_8 < 8 - cached_packet_in_bit_4 )
              break;
            packet_in_bit = 0;
            if ( remaining_amount_8 == integer_difference_8 )
            {
              packet_in_byte = cached_packet_in_byte_5 + 1;
              goto LABEL_158;
            }
            ++cached_packet_in_byte_5;
            remaining_amount_8 -= integer_difference_8;
            running_total_8 += integer_difference_8;
            packet_in_byte = cached_packet_in_byte_5;
            cached_packet_in_bit_4 = 0;
            if ( remaining_amount_8 <= 0 )
              goto LABEL_158;
          }
          packet_in_bit = remaining_amount_8 + cached_packet_in_bit_4;
        }
LABEL_158:
        saved_option_flags_8 = option_flags_4;
        if ( option_flags_4 == 255 )
          saved_option_flags_8 = -1;
        dword_140404A6C[scaled_index_2 + 280658335] = saved_option_flags_8;
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658337], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658338], 4);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658339], 4);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658334], 8);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658299], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658302], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658304], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658306], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658308], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658310], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280658312], 7);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280651310], 8);
        sr_net_read_bits(&dword_140404A6C[scaled_index_2 + 280651311], 8);
        cached_packet_in_bit_3 = packet_in_bit;
        cached_packet_in_byte_4 = packet_in_byte;
        cached_packet_in_length = packet_in_length;
      }
      if ( cached_packet_in_byte_4 < 0x10000 )
      {
        if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit_3 > 0 )
          {
            ++cached_packet_in_byte_4;
            packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte_4;
            cached_packet_in_bit_3 = 0;
          }
          saved_cached_packet_in_byte_6 = cached_packet_in_byte_4;
          cached_packet_in_byte_4 += 4;
          masked_bits_7 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_6);
          packet_in_byte = cached_packet_in_byte_4;
        }
        if ( cached_packet_in_byte_4 < 0x10000 )
        {
          if ( cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit_3 > 0 )
            {
              ++cached_packet_in_byte_4;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_4;
              cached_packet_in_bit_3 = 0;
            }
            saved_cached_packet_in_byte_7 = cached_packet_in_byte_4;
            cached_packet_in_byte_4 += 4;
            masked_bits_8 = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_7);
            packet_in_byte = cached_packet_in_byte_4;
          }
          if ( cached_packet_in_byte_4 < 0x10000 && cached_packet_in_byte_4 + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit_3 > 0 )
            {
              ++cached_packet_in_byte_4;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_4;
            }
            masked_bits_9 = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_4);
            packet_in_byte = cached_packet_in_byte_4 + 4;
          }
        }
      }
      if ( (_DWORD)cached_option_flags != -1 )
      {
        saved_masked_bits = masked_bits_8;
        scaled_index_3 = 7166 * cached_option_flags;
        dword_140404A6C[scaled_index_3 + 280651680] = masked_bits_7;
        dword_140404A6C[scaled_index_3 + 280651682] = masked_bits_9;
        dword_140404A6C[scaled_index_3 + 280651681] = saved_masked_bits;
      }
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638512), 1);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638724), 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638728), 16);
      if ( dword_140404A6C[scaled_index + 71856342] == 10 )
      {
        table_value = dword_140404A6C[scaled_index + 71856343];
        cached_table_value = table_value;
        if ( (int)table_value < 0 )
        {
          table_value = 0;
          cached_table_value = 0;
          dword_140404A6C[scaled_index + 71856343] = 0;
        }
        decoded_value_2 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 56076 * table_value + 906829868);
        sr_net_read_bits(decoded_value_2, 8);
        iteration_count = 0;
        if ( *decoded_value_2 > 0 )
        {
          scaled_index_4 = 4673LL * (int)dword_140404A6C[scaled_index + 71856343];
          scaled_index_5 = 14019LL * cached_table_value;
          do
          {
            integer_sum_3 = scaled_index_4 + iteration_count;
            scaled_index_6 = 3 * integer_sum_3;
            sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * integer_sum_3 + 906829872), 8);
            sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * scaled_index_6 + 906829876), 24);
            sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * scaled_index_6 + 906829880), 4);
            ++iteration_count;
          }
          while ( iteration_count < (int)dword_140404A6C[scaled_index_5 + 225654128] );
        }
      }
      cached_packet_in_byte_6 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000 )
      {
        cached_packet_in_length_2 = packet_in_length;
        cached_packet_in_bit_5 = packet_in_bit;
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte_6 = packet_in_byte + 1;
            cached_packet_in_bit_5 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_8 = cached_packet_in_byte_6;
          cached_packet_in_byte_6 += 4;
          dword_140404A6C[scaled_index + 71856272] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_8);
          packet_in_byte = cached_packet_in_byte_6;
        }
        if ( cached_packet_in_byte_6 < 0x10000 )
        {
          if ( cached_packet_in_byte_6 + 4 <= cached_packet_in_length_2 )
          {
            if ( cached_packet_in_bit_5 > 0 )
            {
              ++cached_packet_in_byte_6;
              cached_packet_in_bit_5 = 0;
              packet_in_byte = cached_packet_in_byte_6;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_9 = cached_packet_in_byte_6;
            cached_packet_in_byte_6 += 4;
            dword_140404A6C[scaled_index + 71856273] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_9);
            packet_in_byte = cached_packet_in_byte_6;
          }
          if ( cached_packet_in_byte_6 < 0x10000 )
          {
            if ( cached_packet_in_byte_6 + 4 <= cached_packet_in_length_2 )
            {
              if ( cached_packet_in_bit_5 > 0 )
              {
                ++cached_packet_in_byte_6;
                cached_packet_in_bit_5 = 0;
                packet_in_byte = cached_packet_in_byte_6;
                packet_in_bit = 0;
              }
              saved_cached_packet_in_byte_10 = cached_packet_in_byte_6;
              cached_packet_in_byte_6 += 4;
              dword_140404A6C[scaled_index + 71856274] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_10);
              packet_in_byte = cached_packet_in_byte_6;
            }
            if ( cached_packet_in_byte_6 < 0x10000 )
            {
              if ( cached_packet_in_byte_6 + 4 <= cached_packet_in_length_2 )
              {
                if ( cached_packet_in_bit_5 > 0 )
                {
                  ++cached_packet_in_byte_6;
                  cached_packet_in_bit_5 = 0;
                  packet_in_byte = cached_packet_in_byte_6;
                  packet_in_bit = 0;
                }
                saved_cached_packet_in_byte_11 = cached_packet_in_byte_6;
                cached_packet_in_byte_6 += 4;
                dword_140404A6C[scaled_index + 71856275] = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_11);
                packet_in_byte = cached_packet_in_byte_6;
              }
              if ( cached_packet_in_byte_6 < 0x10000 && cached_packet_in_byte_6 + 4 <= cached_packet_in_length_2 )
              {
                if ( cached_packet_in_bit_5 > 0 )
                {
                  ++cached_packet_in_byte_6;
                  packet_in_bit = 0;
                  packet_in_byte = cached_packet_in_byte_6;
                }
                dword_140404A6C[scaled_index + 71856276] = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_6);
                packet_in_byte = cached_packet_in_byte_6 + 4;
              }
            }
          }
        }
      }
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638520), 16);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291638808), 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291644200), 10);
      table_value_2 = (int)dword_140404A6C[scaled_index + 71856292];
      if ( (_DWORD)table_value_2 != -1 )
        dword_140404A6C[7166 * table_value_2 + 280651318] = dword_140404A6C[scaled_index + 71857711];
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291644204), 6);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 291644208), 8);
      scaled_index_7 = scaled_index * 4 + 291644212;
      running_total_9 = 0;
      saved_cached_local_player = cached_local_player;
      running_total_10 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_7);
      decoded_value_3 = running_total_10;
      remaining_count_2 = 7;
      do
      {
        sr_net_read_bits(decoded_value_3, 4);
        element_index = 0;
        saved_byte_count = 0;
        if ( *running_total_10 > 0 )
        {
          do
            sr_net_read_bits(&dword_140404A6C[3597 * saved_cached_local_player + 71857715 + running_total_9 + element_index++], 16);
          while ( element_index < *running_total_10 );
          saved_cached_local_player = cached_local_player;
          saved_byte_count = element_index;
        }
        decoded_value_3 += 9;
        running_total_9 += 9;
        running_total_10 += 9;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      cached_remaining_count = saved_remaining_count;
      sr_net_read_bits((unsigned int *)((char *)&g_151622774 + saved_remaining_count), 8);
      iteration_count_2 = 0;
      if ( *(int *)((char *)&g_151622774 + saved_remaining_count) > 0 )
      {
        cached_packet_in_length_3 = packet_in_length;
        running_total_11 = saved_remaining_count;
        cached_packet_in_bit_6 = packet_in_bit;
        cached_packet_in_byte_7 = packet_in_byte;
        byte_count = saved_byte_count;
        do
        {
          scaled_index_8 = cached_remaining_count + 72LL * iteration_count_2;
          if ( cached_packet_in_byte_7 < 0x10000 && cached_packet_in_byte_7 + 4 <= cached_packet_in_length_3 )
          {
            if ( cached_packet_in_bit_6 > 0 )
            {
              ++cached_packet_in_byte_7;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_7;
              cached_packet_in_bit_6 = 0;
            }
            saved_cached_packet_in_byte_12 = cached_packet_in_byte_7;
            cached_packet_in_byte_7 += 4;
            *(unsigned int *)((char *)&g_151622778 + scaled_index_8) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_12);
            packet_in_byte = cached_packet_in_byte_7;
          }
          remaining_amount_9 = 6;
          if ( cached_packet_in_byte_7 < 0x10000 && cached_packet_in_byte_7 <= cached_packet_in_length_3 )
          {
            byte_count = 0;
            running_total_12 = 0;
            while ( 1 )
            {
              integer_difference_9 = 8 - cached_packet_in_bit_6;
              byte_count |= (~(-1 << remaining_amount_9)
                    & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_7) >> SLOBYTE(packet_in_bit))) << running_total_12;
              saved_byte_count = byte_count;
              if ( remaining_amount_9 < (unsigned int)(8 - cached_packet_in_bit_6) )
                break;
              cached_packet_in_bit_6 = 0;
              packet_in_bit = 0;
              if ( remaining_amount_9 == integer_difference_9 )
              {
                packet_in_byte = ++cached_packet_in_byte_7;
                goto LABEL_232;
              }
              ++cached_packet_in_byte_7;
              remaining_amount_9 -= integer_difference_9;
              running_total_12 += integer_difference_9;
              packet_in_byte = cached_packet_in_byte_7;
              if ( remaining_amount_9 <= 0 )
                goto LABEL_232;
            }
            cached_packet_in_bit_6 += remaining_amount_9;
            packet_in_bit = cached_packet_in_bit_6;
          }
LABEL_232:
          if ( cached_packet_in_byte_7 < 0x10000 && cached_packet_in_byte_7 + byte_count <= cached_packet_in_length_3 )
          {
            if ( cached_packet_in_bit_6 > 0 )
            {
              ++cached_packet_in_byte_7;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_7;
              cached_packet_in_bit_6 = 0;
            }
            crt_memcpy(
              (__m128i *)((char *)&g_15162277C + scaled_index_8),
              (     __m128i *)((char *)&packet_in_data + cached_packet_in_byte_7),
              byte_count);
            byte_count = saved_byte_count;
            cached_packet_in_byte_7 += saved_byte_count;
            packet_in_byte = cached_packet_in_byte_7;
          }
          *((_BYTE *)&g_15162277C + running_total_11 + byte_count) = 0;
          if ( cached_packet_in_byte_7 < 0x10000 && cached_packet_in_byte_7 + 4 <= cached_packet_in_length_3 )
          {
            if ( cached_packet_in_bit_6 > 0 )
            {
              ++cached_packet_in_byte_7;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_7;
              cached_packet_in_bit_6 = 0;
            }
            saved_cached_packet_in_byte_13 = cached_packet_in_byte_7;
            cached_packet_in_byte_7 += 4;
            *(unsigned int *)((char *)&g_1516227BC + scaled_index_8) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_13);
            packet_in_byte = cached_packet_in_byte_7;
          }
          ++iteration_count_2;
          running_total_11 += 72;
        }
        while ( iteration_count_2 < *(int *)((char *)&g_151622774 + cached_remaining_count) );
        element_index = saved_byte_count;
      }
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + cached_remaining_count + 291638484), 8);
      sub_14018F1B0();
      state_address = &g_189C1DC88;
      g_16B27E3A0 = packet_in_byte;
      state_address_2 = &g_189C3BCC4;
      integer_sum_4 = 0;
      saved_running_total_2 = 0;
      saved_cached_local_player_2 = 0;
      running_total_20 = 0;
      remaining_count_3 = 8;
      cached_local_player = 0;
      running_total_13 = 0;
      state_address_8 = &g_189C1DC88;
      state_address_9 = &g_189C3BCC4;
      saved_remaining_count = 8;
      do
      {
        sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + integer_sum_4 + 1237441664), 1);
        if ( *(state_address - 2) )
        {
          cached_packet_in_byte_8 = packet_in_byte;
          remaining_amount_10 = 8;
          cached_packet_in_length_4 = packet_in_length;
          if ( (int)packet_in_byte >= 0x10000
            || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
          {
            cached_packet_in_bit_7 = packet_in_bit;
            option_flags_5 = saved_option_flags_19;
          }
          else
          {
            cached_packet_in_bit_7 = packet_in_bit;
            option_flags_5 = 0;
            running_total_14 = 0;
            while ( 1 )
            {
              integer_difference_10 = 8 - cached_packet_in_bit_7;
              option_flags_5 |= (~(-1 << remaining_amount_10)
                     & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_8) >> SLOBYTE(packet_in_bit))) << running_total_14;
              saved_option_flags_19 = option_flags_5;
              if ( remaining_amount_10 < 8 - cached_packet_in_bit_7 )
                break;
              cached_packet_in_bit_7 = 0;
              packet_in_bit = 0;
              if ( remaining_amount_10 == integer_difference_10 )
              {
                packet_in_byte = ++cached_packet_in_byte_8;
                goto LABEL_256;
              }
              ++cached_packet_in_byte_8;
              remaining_amount_10 -= integer_difference_10;
              running_total_14 += integer_difference_10;
              packet_in_byte = cached_packet_in_byte_8;
              if ( remaining_amount_10 <= 0 )
                goto LABEL_256;
            }
            cached_packet_in_bit_7 += remaining_amount_10;
            packet_in_bit = cached_packet_in_bit_7;
          }
LABEL_256:
          saved_option_flags_9 = option_flags_5;
          if ( option_flags_5 == 255 )
            saved_option_flags_9 = -1;
          *state_address = saved_option_flags_9;
          remaining_amount_11 = 8;
          if ( cached_packet_in_byte_8 >= 0x10000 || cached_packet_in_byte_8 + 1 > cached_packet_in_length_4 )
          {
            option_flags_6 = saved_option_flags_17;
          }
          else
          {
            option_flags_6 = 0;
            running_total_15 = 0;
            while ( 1 )
            {
              integer_difference_11 = 8 - cached_packet_in_bit_7;
              option_flags_6 |= (~(-1 << remaining_amount_11)
                     & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_8) >> SLOBYTE(packet_in_bit))) << running_total_15;
              saved_option_flags_17 = option_flags_6;
              if ( remaining_amount_11 < 8 - cached_packet_in_bit_7 )
                break;
              cached_packet_in_bit_7 = 0;
              packet_in_bit = 0;
              if ( remaining_amount_11 == integer_difference_11 )
              {
                packet_in_byte = ++cached_packet_in_byte_8;
                goto LABEL_268;
              }
              ++cached_packet_in_byte_8;
              remaining_amount_11 -= integer_difference_11;
              running_total_15 += integer_difference_11;
              packet_in_byte = cached_packet_in_byte_8;
              if ( remaining_amount_11 <= 0 )
                goto LABEL_268;
            }
            cached_packet_in_bit_7 += remaining_amount_11;
            packet_in_bit = cached_packet_in_bit_7;
          }
LABEL_268:
          saved_option_flags_10 = option_flags_6;
          remaining_amount_12 = 8;
          if ( option_flags_6 == 255 )
            saved_option_flags_10 = -1;
          state_address[2] = saved_option_flags_10;
          if ( cached_packet_in_byte_8 >= 0x10000 || cached_packet_in_byte_8 + 1 > cached_packet_in_length_4 )
          {
            option_flags_7 = saved_option_flags_18;
          }
          else
          {
            option_flags_7 = 0;
            running_total_16 = 0;
            while ( 1 )
            {
              integer_difference_12 = 8 - cached_packet_in_bit_7;
              option_flags_7 |= (~(-1 << remaining_amount_12)
                     & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_8) >> SLOBYTE(packet_in_bit))) << running_total_16;
              saved_option_flags_18 = option_flags_7;
              if ( remaining_amount_12 < 8 - cached_packet_in_bit_7 )
                break;
              cached_packet_in_bit_7 = 0;
              packet_in_bit = 0;
              if ( remaining_amount_12 == integer_difference_12 )
              {
                packet_in_byte = ++cached_packet_in_byte_8;
                goto LABEL_280;
              }
              ++cached_packet_in_byte_8;
              remaining_amount_12 -= integer_difference_12;
              running_total_16 += integer_difference_12;
              packet_in_byte = cached_packet_in_byte_8;
              if ( remaining_amount_12 <= 0 )
                goto LABEL_280;
            }
            cached_packet_in_bit_7 += remaining_amount_12;
            packet_in_bit = cached_packet_in_bit_7;
          }
LABEL_280:
          saved_running_total = running_total_20;
          saved_cached_local_player_3 = cached_local_player;
          saved_option_flags_11 = option_flags_7;
          if ( option_flags_7 == 255 )
            saved_option_flags_11 = -1;
          remaining_count_4 = 4;
          state_address[3] = saved_option_flags_11;
          saved_byte_count = 4;
          do
          {
            remaining_amount_13 = 6;
            if ( cached_packet_in_byte_8 >= 0x10000 || cached_packet_in_byte_8 > cached_packet_in_length_4 )
            {
              option_flags_8 = saved_option_flags_13;
            }
            else
            {
              option_flags_8 = 0;
              running_total_17 = 0;
              while ( 1 )
              {
                integer_difference_13 = 8 - cached_packet_in_bit_7;
                option_flags_8 |= (~(-1 << remaining_amount_13)
                       & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_8) >> SLOBYTE(packet_in_bit))) << running_total_17;
                saved_option_flags_13 = option_flags_8;
                if ( remaining_amount_13 < 8 - cached_packet_in_bit_7 )
                  break;
                packet_in_bit = 0;
                if ( remaining_amount_13 == integer_difference_13 )
                {
                  packet_in_byte = cached_packet_in_byte_8 + 1;
                  goto LABEL_293;
                }
                ++cached_packet_in_byte_8;
                remaining_amount_13 -= integer_difference_13;
                running_total_17 += integer_difference_13;
                packet_in_byte = cached_packet_in_byte_8;
                cached_packet_in_bit_7 = 0;
                if ( remaining_amount_13 <= 0 )
                  goto LABEL_293;
              }
              packet_in_bit = remaining_amount_13 + cached_packet_in_bit_7;
            }
LABEL_293:
            saved_option_flags_12 = option_flags_8;
            integer_sum_5 = option_flags_8 + saved_running_total_2;
            sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * integer_sum_5 + 1237564608), 11);
            sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * integer_sum_5 + 1237564864), 2);
            cached_packet_in_byte_8 = packet_in_byte;
            cached_packet_in_length_4 = packet_in_length;
            destination_buffer = (__m128i *)((char *)&dword_140404A6C[512 * saved_option_flags_12 + 308337941] + saved_running_total);
            if ( (int)packet_in_byte >= 0x10000
              || (byte_count_2 = (int)dword_140404A6C[saved_option_flags_12 + 308337813 + saved_cached_local_player_3],
                  (signed int)(byte_count_2 + packet_in_byte) > (int)packet_in_length) )
            {
              cached_packet_in_bit_7 = packet_in_bit;
            }
            else
            {
              cached_packet_in_bit_7 = packet_in_bit;
              if ( (int)packet_in_bit > 0 )
              {
                cached_packet_in_byte_8 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
                cached_packet_in_bit_7 = 0;
              }
              crt_memcpy(destination_buffer, (     __m128i *)((char *)&packet_in_data + cached_packet_in_byte_8), byte_count_2);
              cached_packet_in_byte_8 += byte_count_2;
              packet_in_byte = cached_packet_in_byte_8;
            }
            --remaining_count_4;
          }
          while ( remaining_count_4 );
          state_address = state_address_8;
          state_address_2 = state_address_9;
          element_index = saved_byte_count;
          saved_cached_local_player_2 = cached_local_player;
          running_total_13 = saved_running_total_2;
          remaining_count_3 = saved_remaining_count;
          state_address_8[30732] = ((_BYTE)saved_option_flags_13 + 1) & 0x3F;
        }
        else
        {
          *(_QWORD *)(state_address_2 - 1) = 0;
          *(_QWORD *)(state_address_2 + 1) = 0;
          *(_QWORD *)(state_address_2 + 3) = 0;
          *(_QWORD *)(state_address_2 + 5) = 0;
          *(_QWORD *)(state_address_2 + 7) = 0;
          *(_QWORD *)(state_address_2 + 9) = 0;
          *(_QWORD *)(state_address_2 + 11) = 0;
          *(_QWORD *)(state_address_2 + 13) = 0;
          *(_QWORD *)(state_address_2 + 15) = 0;
          *(_QWORD *)(state_address_2 + 17) = 0;
          *(_QWORD *)(state_address_2 + 19) = 0;
          *(_QWORD *)(state_address_2 + 21) = 0;
          *(_QWORD *)(state_address_2 + 23) = 0;
          *(_QWORD *)(state_address_2 + 25) = 0;
          *(_QWORD *)(state_address_2 + 27) = 0;
          *(_QWORD *)(state_address_2 + 29) = 0;
          *(_QWORD *)(state_address_2 + 31) = 0;
          *(_QWORD *)(state_address_2 + 33) = 0;
          *(_QWORD *)(state_address_2 + 35) = 0;
          *(_QWORD *)(state_address_2 + 37) = 0;
          *(_QWORD *)(state_address_2 + 39) = 0;
          *(_QWORD *)(state_address_2 + 41) = 0;
          *(_QWORD *)(state_address_2 + 43) = 0;
          *(_QWORD *)(state_address_2 + 45) = 0;
          *(_QWORD *)(state_address_2 + 47) = 0;
          *(_QWORD *)(state_address_2 + 49) = 0;
          *(_QWORD *)(state_address_2 + 51) = 0;
          *(_QWORD *)(state_address_2 + 53) = 0;
          *(_QWORD *)(state_address_2 + 55) = 0;
          *(_QWORD *)(state_address_2 + 57) = 0;
          *(_QWORD *)(state_address_2 + 59) = 0;
          *(_QWORD *)(state_address_2 + 61) = 0;
          saved_option_flags_13 = 64;
        }
        running_total_13 += 96401;
        integer_sum_4 = running_total_20 + 385604;
        saved_running_total_2 = running_total_13;
        state_address += 96401;
        running_total_20 += 385604;
        saved_cached_local_player_2 += 96401;
        state_address_8 = state_address;
        state_address_2 += 96401;
        cached_local_player = saved_cached_local_player_2;
        --remaining_count_3;
        state_address_9 = state_address_2;
        saved_remaining_count = remaining_count_3;
      }
      while ( remaining_count_3 );
      sr_net_read_bits(&g_1A4D2DD0C, 16);
      cached_packet_in_byte_9 = packet_in_byte;
      remaining_amount_14 = 6;
      cached_packet_in_length_5 = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000
        || (int)packet_in_byte > (int)packet_in_length )
      {
        cached_packet_in_bit_8 = packet_in_bit;
        option_flags_9 = saved_option_flags_20;
      }
      else
      {
        cached_packet_in_bit_8 = packet_in_bit;
        option_flags_9 = 0;
        running_total_18 = 0;
        while ( 1 )
        {
          integer_difference_14 = 8 - cached_packet_in_bit_8;
          option_flags_9 |= (~(-1 << remaining_amount_14)
                 & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_9) >> SLOBYTE(packet_in_bit))) << running_total_18;
          saved_option_flags_20 = option_flags_9;
          if ( remaining_amount_14 < (unsigned int)(8 - cached_packet_in_bit_8) )
            break;
          cached_packet_in_bit_8 = 0;
          packet_in_bit = 0;
          if ( remaining_amount_14 == integer_difference_14 )
          {
            packet_in_byte = ++cached_packet_in_byte_9;
            goto LABEL_313;
          }
          ++cached_packet_in_byte_9;
          remaining_amount_14 -= integer_difference_14;
          running_total_18 += integer_difference_14;
          packet_in_byte = cached_packet_in_byte_9;
          if ( remaining_amount_14 <= 0 )
            goto LABEL_313;
        }
        cached_packet_in_bit_8 += remaining_amount_14;
        packet_in_bit = cached_packet_in_bit_8;
      }
LABEL_313:
      remaining_amount_15 = 16;
      if ( cached_packet_in_byte_9 >= 0x10000 || cached_packet_in_byte_9 + 2 > (int)packet_in_length )
      {
        option_flags_10 = saved_option_flags_15;
      }
      else
      {
        option_flags_10 = 0;
        running_total_19 = 0;
        while ( 1 )
        {
          integer_difference_15 = 8 - cached_packet_in_bit_8;
          option_flags_10 |= (~(-1 << remaining_amount_15)
                 & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_9) >> SLOBYTE(packet_in_bit))) << running_total_19;
          saved_option_flags_15 = option_flags_10;
          if ( remaining_amount_15 < (unsigned int)(8 - cached_packet_in_bit_8) )
            break;
          cached_packet_in_bit_8 = 0;
          packet_in_bit = 0;
          if ( remaining_amount_15 == integer_difference_15 )
          {
            packet_in_byte = ++cached_packet_in_byte_9;
            goto LABEL_323;
          }
          ++cached_packet_in_byte_9;
          remaining_amount_15 -= integer_difference_15;
          running_total_19 += integer_difference_15;
          packet_in_byte = cached_packet_in_byte_9;
          if ( remaining_amount_15 <= 0 )
            goto LABEL_323;
        }
        cached_packet_in_bit_8 += remaining_amount_15;
        packet_in_bit = cached_packet_in_bit_8;
      }
LABEL_323:
      if ( option_flags_9 > 0 )
      {
        remaining_count_5 = (unsigned int)option_flags_9;
        do
        {
          sub_14018DBF0(option_flags_10);
          if ( world_event_count == option_flags_10 )
          {
            ++world_event_count;
            HIWORD(world_event_count) = 0;
          }
          option_flags_10 = (unsigned __int16)(option_flags_10 + 1);
          --remaining_count_5;
        }
        while ( remaining_count_5 );
        cached_packet_in_bit_8 = packet_in_bit;
        cached_packet_in_byte_9 = packet_in_byte;
        cached_packet_in_length_5 = packet_in_length;
        saved_option_flags_15 = option_flags_10;
      }
      if ( cached_packet_in_byte_9 < 0x10000 )
      {
        if ( cached_packet_in_byte_9 + 4 <= cached_packet_in_length_5 )
        {
          if ( cached_packet_in_bit_8 > 0 )
          {
            ++cached_packet_in_byte_9;
            packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte_9;
            cached_packet_in_bit_8 = 0;
          }
          saved_cached_packet_in_byte_14 = cached_packet_in_byte_9;
          cached_packet_in_byte_9 += 4;
          g_1A6F9E13C = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_14);
          packet_in_byte = cached_packet_in_byte_9;
        }
        if ( cached_packet_in_byte_9 < 0x10000 )
        {
          if ( cached_packet_in_byte_9 + 4 <= cached_packet_in_length_5 )
          {
            if ( cached_packet_in_bit_8 > 0 )
            {
              ++cached_packet_in_byte_9;
              packet_in_bit = 0;
              cached_packet_in_bit_8 = 0;
            }
            cached_packet_in_byte_9 += 4;
            packet_in_byte = cached_packet_in_byte_9;
          }
          if ( cached_packet_in_byte_9 < 0x10000 && cached_packet_in_byte_9 + 4 <= cached_packet_in_length_5 )
          {
            if ( cached_packet_in_bit_8 > 0 )
            {
              ++cached_packet_in_byte_9;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte_9;
            }
            element_index = *(unsigned int *)((char *)&packet_in_data + cached_packet_in_byte_9);
            packet_in_byte = cached_packet_in_byte_9 + 4;
          }
        }
      }
      g_1A6F9E138 = sub_140198F9B() - element_index;
      dword_140404A6C[LOBYTE(g_1A6F9E13C) + 430859702] = 1;
      state_word = g_1A6F9E13C;
      for ( i = (unsigned __int8)(LOBYTE(g_1A6F9E140) + 1);
            (_DWORD)i != LOBYTE(g_1A6F9E13C);
            i = (unsigned __int8)(i + 1) )
      {
        dword_140404A6C[i + 430859702] = 0;
        state_word = g_1A6F9E13C;
      }
      g_183F7AEEC = world_event_count;
      state_address_3 = &g_1832A4E00;
      g_1A6F9E140 = state_word;
      do
      {
        *(state_address_3 - 10) = 0;
        *state_address_3 = 0;
        state_address_3[10] = 0;
        state_address_3[20] = 0;
        state_address_3[30] = 0;
        state_address_3[40] = 0;
        state_address_3[50] = 0;
        state_address_3 += 7166;
      }
      while ( (__int64)state_address_3 < (__int64)&g_1839A4600 );
      state_address_4 = &g_182BBB1B4;
      do
      {
        if ( *(state_address_4 - 13) )
          *state_address_4 = 0;
        if ( state_address_4[1747] )
          state_address_4[1760] = 0;
        state_address_4 += 3520;
      }
      while ( (__int64)state_address_4 < (__int64)&g_18329B1B4 );
      iteration_count_3 = 0;
      state_address_5 = &g_182BBB1A8;
      do
      {
        if ( *(state_address_5 - 10) )
        {
          scaled_index_9 = (int)*state_address_5;
          if ( (_DWORD)scaled_index_9 != -1 )
          {
            scaled_index_10 = (int)dword_140404A6C[1760 * scaled_index_9 + 278845906];
            if ( (int)scaled_index_10 < 8 )
            {
              dword_140404A6C[1760 * (int)*state_address_5 + 278845907 + scaled_index_10] = iteration_count_3;
              ++dword_140404A6C[1760 * *state_address_5 + 278845906];
            }
          }
          if ( *(state_address_5 - 1) != -1 )
          {
            table_value_3 = (int)state_address_5[1];
            if ( (unsigned int)table_value_3 <= 6 )
            {
              scaled_index_11 = (int)*(state_address_5 - 1);
              scaled_index_12 = 28664 * scaled_index_11 + 40 * table_value_3;
              masked_bits_4 = *(int *)((char *)&g_1832A4DD8 + scaled_index_12);
              if ( (int)masked_bits_4 < 2 )
              {
                dword_140404A6C[7166 * scaled_index_11 + 280658140 + 10 * (int)state_address_5[1] + masked_bits_4] = iteration_count_3;
                ++*(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_12);
              }
            }
          }
        }
        ++iteration_count_3;
        state_address_5 += 1760;
      }
      while ( iteration_count_3 < 1024 );
      state_word_2 = g_1AD04ADD0;
      option_flags_3 = saved_option_flags_21;
      option_flags_4 = saved_option_flags_22;
      if ( (int)g_1AD04ADD0 < call_result_2 )
        state_word_2 = call_result_2;
      masked_bits = saved_masked_bits_2;
      g_1AD04ADD0 = state_word_2;
      g_1A4D2DD04 = 1;
      g_1AD04ADCC = call_result_2;
      goto LABEL_367;
    }
    cached_packet_in_byte_3 = packet_in_byte;
    remaining_amount = 16;
    if ( (int)packet_in_byte >= 0x10000
      || (signed int)(packet_in_byte + 2) > (int)packet_in_length )
    {
      cached_packet_in_bit_2 = packet_in_bit;
    }
    else
    {
      cached_packet_in_bit_2 = packet_in_bit;
      option_flags = 0;
      running_total = 0;
      while ( 1 )
      {
        integer_difference = 8 - cached_packet_in_bit_2;
        option_flags |= (~(-1 << remaining_amount)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total;
        saved_option_flags_16 = option_flags;
        if ( remaining_amount < 8 - cached_packet_in_bit_2 )
          break;
        cached_packet_in_bit_2 = 0;
        packet_in_bit = 0;
        if ( remaining_amount == integer_difference )
        {
          packet_in_byte = ++cached_packet_in_byte_3;
          goto LABEL_53;
        }
        ++cached_packet_in_byte_3;
        remaining_amount -= integer_difference;
        running_total += integer_difference;
        packet_in_byte = cached_packet_in_byte_3;
        if ( remaining_amount <= 0 )
          goto LABEL_53;
      }
      cached_packet_in_bit_2 += remaining_amount;
      packet_in_bit = cached_packet_in_bit_2;
    }
LABEL_53:
    saved_option_flags = option_flags | 0xFFFF0000;
    remaining_amount_2 = 16;
    if ( (option_flags & 0x8000) == 0 )
      saved_option_flags = option_flags;
    g_183EBFDB0 = saved_option_flags;
    if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= (int)packet_in_length )
    {
      option_flags_2 = 0;
      running_total_2 = 0;
      while ( 1 )
      {
        integer_difference_2 = 8 - cached_packet_in_bit_2;
        option_flags_2 |= (~(-1 << remaining_amount_2)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total_2;
        saved_option_flags_14 = option_flags_2;
        if ( remaining_amount_2 < 8 - cached_packet_in_bit_2 )
          break;
        cached_packet_in_bit_2 = 0;
        packet_in_bit = 0;
        if ( remaining_amount_2 == integer_difference_2 )
        {
          packet_in_byte = ++cached_packet_in_byte_3;
          goto LABEL_64;
        }
        ++cached_packet_in_byte_3;
        remaining_amount_2 -= integer_difference_2;
        running_total_2 += integer_difference_2;
        packet_in_byte = cached_packet_in_byte_3;
        if ( remaining_amount_2 <= 0 )
          goto LABEL_64;
      }
      cached_packet_in_bit_2 += remaining_amount_2;
      packet_in_bit = cached_packet_in_bit_2;
    }
LABEL_64:
    saved_option_flags_2 = option_flags_2 | 0xFFFF0000;
    remaining_amount_3 = 16;
    if ( (option_flags_2 & 0x8000) == 0 )
      saved_option_flags_2 = option_flags_2;
    g_183F7AE14 = saved_option_flags_2;
    if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= (int)packet_in_length )
    {
      option_flags = 0;
      running_total_3 = 0;
      while ( 1 )
      {
        integer_difference_3 = 8 - cached_packet_in_bit_2;
        option_flags |= (~(-1 << remaining_amount_3)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total_3;
        saved_option_flags_16 = option_flags;
        if ( remaining_amount_3 < 8 - cached_packet_in_bit_2 )
          break;
        cached_packet_in_bit_2 = 0;
        packet_in_bit = 0;
        if ( remaining_amount_3 == integer_difference_3 )
        {
          packet_in_byte = ++cached_packet_in_byte_3;
          goto LABEL_75;
        }
        ++cached_packet_in_byte_3;
        remaining_amount_3 -= integer_difference_3;
        running_total_3 += integer_difference_3;
        packet_in_byte = cached_packet_in_byte_3;
        if ( remaining_amount_3 <= 0 )
          goto LABEL_75;
      }
      cached_packet_in_bit_2 += remaining_amount_3;
      packet_in_bit = cached_packet_in_bit_2;
    }
LABEL_75:
    saved_option_flags_3 = option_flags | 0xFFFF0000;
    remaining_amount_4 = 16;
    if ( (option_flags & 0x8000) == 0 )
      saved_option_flags_3 = option_flags;
    g_183EC5974 = saved_option_flags_3;
    if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= (int)packet_in_length )
    {
      option_flags_2 = 0;
      running_total_4 = 0;
      while ( 1 )
      {
        integer_difference_4 = 8 - cached_packet_in_bit_2;
        option_flags_2 |= (~(-1 << remaining_amount_4)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total_4;
        saved_option_flags_14 = option_flags_2;
        if ( remaining_amount_4 < 8 - cached_packet_in_bit_2 )
          break;
        cached_packet_in_bit_2 = 0;
        packet_in_bit = 0;
        if ( remaining_amount_4 == integer_difference_4 )
        {
          packet_in_byte = ++cached_packet_in_byte_3;
          goto LABEL_86;
        }
        ++cached_packet_in_byte_3;
        remaining_amount_4 -= integer_difference_4;
        running_total_4 += integer_difference_4;
        packet_in_byte = cached_packet_in_byte_3;
        if ( remaining_amount_4 <= 0 )
          goto LABEL_86;
      }
      cached_packet_in_bit_2 += remaining_amount_4;
      packet_in_bit = cached_packet_in_bit_2;
    }
LABEL_86:
    saved_option_flags_4 = option_flags_2 | 0xFFFF0000;
    remaining_amount_5 = 16;
    if ( (option_flags_2 & 0x8000) == 0 )
      saved_option_flags_4 = option_flags_2;
    g_183F7AE18 = saved_option_flags_4;
    if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= (int)packet_in_length )
    {
      option_flags = 0;
      running_total_5 = 0;
      while ( 1 )
      {
        integer_difference_5 = 8 - cached_packet_in_bit_2;
        option_flags |= (~(-1 << remaining_amount_5)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total_5;
        saved_option_flags_16 = option_flags;
        if ( remaining_amount_5 < 8 - cached_packet_in_bit_2 )
          break;
        cached_packet_in_bit_2 = 0;
        packet_in_bit = 0;
        if ( remaining_amount_5 == integer_difference_5 )
        {
          packet_in_byte = ++cached_packet_in_byte_3;
          goto LABEL_97;
        }
        ++cached_packet_in_byte_3;
        remaining_amount_5 -= integer_difference_5;
        running_total_5 += integer_difference_5;
        packet_in_byte = cached_packet_in_byte_3;
        if ( remaining_amount_5 <= 0 )
          goto LABEL_97;
      }
      cached_packet_in_bit_2 += remaining_amount_5;
      packet_in_bit = cached_packet_in_bit_2;
    }
LABEL_97:
    saved_option_flags_5 = option_flags | 0xFFFF0000;
    remaining_amount_6 = 16;
    if ( (option_flags & 0x8000) == 0 )
      saved_option_flags_5 = option_flags;
    g_183ECB538 = saved_option_flags_5;
    if ( cached_packet_in_byte_3 < 0x10000 && cached_packet_in_byte_3 + 2 <= (int)packet_in_length )
    {
      option_flags_2 = 0;
      running_total_6 = 0;
      while ( 1 )
      {
        integer_difference_6 = 8 - cached_packet_in_bit_2;
        option_flags_2 |= (~(-1 << remaining_amount_6)
             & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte_3) >> SLOBYTE(packet_in_bit))) << running_total_6;
        saved_option_flags_14 = option_flags_2;
        if ( remaining_amount_6 < 8 - cached_packet_in_bit_2 )
          break;
        packet_in_bit = 0;
        if ( remaining_amount_6 == integer_difference_6 )
        {
          packet_in_byte = cached_packet_in_byte_3 + 1;
          goto LABEL_108;
        }
        ++cached_packet_in_byte_3;
        remaining_amount_6 -= integer_difference_6;
        running_total_6 += integer_difference_6;
        packet_in_byte = cached_packet_in_byte_3;
        cached_packet_in_bit_2 = 0;
        if ( remaining_amount_6 <= 0 )
          goto LABEL_108;
      }
      packet_in_bit = remaining_amount_6 + cached_packet_in_bit_2;
    }
LABEL_108:
    saved_option_flags_6 = option_flags_2 | 0xFFFF0000;
    if ( (option_flags_2 & 0x8000) == 0 )
      saved_option_flags_6 = option_flags_2;
    g_183F7AE1C = saved_option_flags_6;
    goto LABEL_111;
  }
  sub_140095FC0(a1, a2, a3);
  g_183EBFAA4 = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef saved_masked_bits_2
#undef call_result_2
#undef saved_byte_count
#undef saved_option_flags_13
#undef saved_option_flags_14
#undef saved_option_flags_15
#undef saved_option_flags_16
#undef saved_option_flags_17
#undef saved_option_flags_18
#undef cached_local_player
#undef saved_option_flags_19
#undef saved_option_flags_20
#undef saved_option_flags_21
#undef saved_option_flags_22
#undef saved_remaining_count
#undef saved_running_total_2
#undef running_total_20
#undef state_address_8
#undef state_address_9
#undef masked_bits_7
#undef masked_bits_8
#undef masked_bits_9
#undef unused_frame_slot_152

//----- (0000000140053840) ----------------------------------------------------
__int64            sub_140053840(float *a1, float *a2, int a3)
{
  int iteration_count;
  __int64 float_word;
  unsigned int *state_address;
  int human;
  __int64 scaled_index;
  unsigned int scaled_index_2;
  char rand_result;
  unsigned int *state_address_2;
  unsigned int *rotation;
  unsigned int *state_address_3;
  signed int scaled_index_3;
  float weighted_sum;
  float weighted_sum_2;
  float i;
  __int64 scaled_index_4;
  float scaled_value;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float component_sum;
  float weighted_sum_8;
  float component_sum_2;
  float weighted_sum_9;
  float weighted_sum_10;
  signed int physics_create_body_result;
  float weighted_sum_11;
  __int64 scaled_index_5;
  float weighted_sum_12;
  float weighted_sum_13;
  char rand_result_2;
  float scaled_value_2;
  char rand_result_3;
  unsigned int masked_bits;
  unsigned int scaled_index_6;
  _Alignas(8) unsigned sr_human_spawn_velocity[3];

  iteration_count = 0;
  float_word = a3;
  state_address = &g_18329E308;
  human = 0;
  while ( *state_address )
  {
    ++human;
    state_address += 7166;
    if ( (__int64)state_address >= (__int64)&g_18399DB08 )
      return 0xFFFFFFFFLL;
  }
  if ( human == -1 )
    return 0xFFFFFFFFLL;
  scaled_index = 7166LL * human;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 280651293]), 0, 0x6FF8u);
  dword_140404A6C[scaled_index + 280651303] = 1;
  dword_140404A6C[scaled_index + 280651325] = 1;
  (*(int64_t *)(void *)sr_human_spawn_velocity) = 0;
  sr_human_spawn_velocity[2] = 0;
  dword_140404A6C[scaled_index + 280651305] = float_word;
  dword_140404A6C[scaled_index + 280651306] = -1;
  dword_140404A6C[scaled_index + 280651317] = 3600;
  if ( (_DWORD)float_word == -1 )
    scaled_index_2 = 1065353216;
  else
    scaled_index_2 = dword_140404A6C[3597 * float_word + 71856333];
  dword_140404A6C[scaled_index + 280651376] = scaled_index_2;
  dword_140404A6C[scaled_index + 280651373] = 1065353216;
  dword_140404A6C[scaled_index + 280651318] = 100;
  dword_140404A6C[scaled_index + 280658299] = 100;
  dword_140404A6C[scaled_index + 280658300] = 100;
  dword_140404A6C[scaled_index + 280658302] = 100;
  dword_140404A6C[scaled_index + 280658304] = 100;
  dword_140404A6C[scaled_index + 280658306] = 100;
  dword_140404A6C[scaled_index + 280658308] = 100;
  dword_140404A6C[scaled_index + 280658310] = 100;
  dword_140404A6C[scaled_index + 280658312] = 100;
  dword_140404A6C[scaled_index + 280651311] = 255;
  dword_140404A6C[scaled_index + 280651310] = 127;
  rand_result = rand();
  dword_140404A6C[scaled_index + 280651308] = 105;
  dword_140404A6C[scaled_index + 280651313] = -1;
  dword_140404A6C[scaled_index + 280651437] = 960;
  state_address_2 = &g_18399DEEC;
  rotation = &dword_140404A6C[scaled_index + 280651452];
  state_address_3 = &dword_140404A6C[scaled_index + 280651442];
  dword_140404A6C[scaled_index + 280651323] = 3600 * ((rand_result & 3) + 3);
  dword_140404A6C[scaled_index + 280658139] = 0;
  dword_140404A6C[scaled_index + 280658149] = 0;
  dword_140404A6C[scaled_index + 280658159] = 0;
  dword_140404A6C[scaled_index + 280658169] = 0;
  dword_140404A6C[scaled_index + 280658179] = 0;
  dword_140404A6C[scaled_index + 280658189] = 0;
  dword_140404A6C[scaled_index + 280658199] = 0;
  dword_140404A6C[scaled_index + 280658209] = 0;
  do
  {
    scaled_index_3 = *(state_address_2 - 3);
    weighted_sum = *((float *)state_address_2 - 2);
    weighted_sum_2 = *((float *)state_address_2 - 1);
    for ( i = *(float *)state_address_2; scaled_index_3; i = i + *(float *)&dword_140404A6C[scaled_index_4 + 282486048] )
    {
      scaled_index_4 = 25LL * scaled_index_3;
      scaled_index_3 = dword_140404A6C[scaled_index_4 + 282486045];
      weighted_sum = weighted_sum + *(float *)&dword_140404A6C[scaled_index_4 + 282486046];
      weighted_sum_2 = weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_4 + 282486047];
    }
    scaled_value = i * a2[7];
    weighted_sum_3 = (float)((float)(i * a2[6]) + (float)(weighted_sum * *a2)) + (float)((float)(weighted_sum_2 * a2[3]) + *a1);
    weighted_sum_4 = (float)(i * a2[8]) + (float)(weighted_sum * a2[2]);
    weighted_sum_5 = scaled_value + (float)(weighted_sum * a2[1]);
    weighted_sum_6 = (float)(weighted_sum_2 * a2[4]) + a1[1];
    weighted_sum_7 = (float)(weighted_sum_2 * a2[5]) + a1[2];
    *((float *)state_address_3 - 2) = weighted_sum_3;
    component_sum = weighted_sum_5 + weighted_sum_6;
    weighted_sum_8 = *((float *)state_address_2 + 9);
    *((float *)state_address_3 - 1) = component_sum;
    component_sum_2 = weighted_sum_4 + weighted_sum_7;
    *(float *)state_address_3 = component_sum_2;
    *((float *)state_address_3 + 1) = weighted_sum_3;
    weighted_sum_9 = *((float *)state_address_2 + 11);
    *((float *)state_address_3 + 2) = component_sum;
    weighted_sum_10 = *((float *)state_address_2 + 10);
    *((float *)state_address_3 + 3) = component_sum_2;
    state_address_3[10] = *(_DWORD *)a2;
    state_address_3[11] = *((_DWORD *)a2 + 1);
    state_address_3[12] = *((_DWORD *)a2 + 2);
    state_address_3[13] = *((_DWORD *)a2 + 3);
    state_address_3[14] = *((_DWORD *)a2 + 4);
    state_address_3[15] = *((_DWORD *)a2 + 5);
    state_address_3[16] = *((_DWORD *)a2 + 6);
    state_address_3[17] = *((_DWORD *)a2 + 7);
    state_address_3[18] = *((_DWORD *)a2 + 8);
    state_address_3[25] = state_address_2[4];
    state_address_3[27] = state_address_2[5];
    state_address_3[28] = state_address_2[6];
    state_address_3[29] = state_address_2[7];
    state_address_3[30] = state_address_2[8];
    state_address_3[26] = 1050673152;
    *((float *)state_address_3 + 34) = weighted_sum_8;
    *((float *)state_address_3 + 35) = weighted_sum_10;
    *((float *)state_address_3 + 36) = weighted_sum_9;
    *((float *)state_address_3 + 31) = 1.0 / weighted_sum_8;
    *((float *)state_address_3 + 33) = 1.0 / weighted_sum_9;
    *((float *)state_address_3 + 32) = 1.0 / weighted_sum_10;
    physics_create_body_result = sr_physics_create_body(0, rotation - 12, rotation, (unsigned int *)&(*(int64_t *)(void *)sr_human_spawn_velocity), state_address_3[30], rotation + 21);
    *(state_address_3 - 3) = physics_create_body_result;
    weighted_sum_11 = *((float *)state_address_3 + 31);
    scaled_index_5 = 47LL * physics_create_body_result;
    *((float *)state_address_3 + 37) = weighted_sum_11;
    weighted_sum_12 = *((float *)state_address_3 + 32);
    dword_140404A6C[scaled_index_5 + 18215712] = human;
    dword_140404A6C[scaled_index_5 + 18215713] = iteration_count;
    if ( weighted_sum_11 > weighted_sum_12 )
    {
      *((float *)state_address_3 + 37) = weighted_sum_12;
      weighted_sum_11 = weighted_sum_12;
    }
    weighted_sum_13 = *((float *)state_address_3 + 33);
    if ( weighted_sum_11 > weighted_sum_13 )
      *((float *)state_address_3 + 37) = weighted_sum_13;
    *((_QWORD *)state_address_3 + 19) = 1065353216;
    *((_QWORD *)state_address_3 + 20) = 0;
    ++iteration_count;
    *((_QWORD *)state_address_3 + 22) = 0;
    rotation += 78;
    *((_QWORD *)state_address_3 + 21) = 1065353216;
    state_address_2 += 25;
    state_address_3[46] = 1065353216;
    state_address_3 += 78;
  }
  while ( iteration_count < 16 );
  sr_human_create_joints(human);
  sub_1400AAAA0(human);
  sub_140048110((int *)&dword_140404A6C[scaled_index + 280654321]);
  sub_140048110((int *)&dword_140404A6C[scaled_index + 280654321]);
  dword_140404A6C[scaled_index + 280658006] = *(_DWORD *)a1;
  dword_140404A6C[scaled_index + 280658007] = *((_DWORD *)a1 + 1);
  dword_140404A6C[scaled_index + 280658008] = *((_DWORD *)a1 + 2);
  dword_140404A6C[scaled_index + 280658061] = *(_DWORD *)a1;
  dword_140404A6C[scaled_index + 280658062] = *((_DWORD *)a1 + 1);
  dword_140404A6C[scaled_index + 280658063] = *((_DWORD *)a1 + 2);
  if ( a3 == -1 )
  {
    rand_result_2 = rand();
    dword_140404A6C[scaled_index + 280658248] = 1023410176;
    dword_140404A6C[scaled_index + 280658249] = -1105618534;
    dword_140404A6C[scaled_index + 280658254] = 1023410176;
    dword_140404A6C[scaled_index + 280658255] = -1105618534;
    scaled_value_2 = (float)(rand_result_2 & 0xF) * 0.001953125;
    *(float *)&dword_140404A6C[scaled_index + 280658247] = 0.0625 - scaled_value_2;
    *(float *)&dword_140404A6C[scaled_index + 280658253] = scaled_value_2 - 0.0625;
    rand_result_3 = rand();
    dword_140404A6C[scaled_index + 280658252] = 1065353216;
    dword_140404A6C[scaled_index + 280658258] = 1065353216;
    *(float *)&masked_bits = (float)((float)(rand_result_3 & 0xF) * 0.0078125) + 1.0;
    dword_140404A6C[scaled_index + 280658250] = masked_bits;
    dword_140404A6C[scaled_index + 280658251] = masked_bits;
    dword_140404A6C[scaled_index + 280658256] = masked_bits;
    dword_140404A6C[scaled_index + 280658257] = masked_bits;
    dword_140404A6C[scaled_index + 280658444] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index + 280658441] = 0;
  }
  else
  {
    dword_140404A6C[scaled_index + 280658247] = dword_140404A6C[3597 * a3 + 71859768];
    dword_140404A6C[scaled_index + 280658248] = dword_140404A6C[3597 * a3 + 71859769];
    dword_140404A6C[scaled_index + 280658249] = dword_140404A6C[3597 * a3 + 71859770];
    dword_140404A6C[scaled_index + 280658250] = dword_140404A6C[3597 * a3 + 71859771];
    dword_140404A6C[scaled_index + 280658251] = dword_140404A6C[3597 * a3 + 71859772];
    dword_140404A6C[scaled_index + 280658252] = dword_140404A6C[3597 * a3 + 71859773];
    dword_140404A6C[scaled_index + 280658253] = dword_140404A6C[3597 * a3 + 71859774];
    dword_140404A6C[scaled_index + 280658254] = dword_140404A6C[3597 * a3 + 71859775];
    dword_140404A6C[scaled_index + 280658255] = dword_140404A6C[3597 * a3 + 71859776];
    dword_140404A6C[scaled_index + 280658256] = dword_140404A6C[3597 * a3 + 71859777];
    dword_140404A6C[scaled_index + 280658257] = dword_140404A6C[3597 * a3 + 71859778];
    dword_140404A6C[scaled_index + 280658258] = dword_140404A6C[3597 * a3 + 71859779];
    dword_140404A6C[scaled_index + 280658438] = dword_140404A6C[3597 * a3 + 71856286];
    dword_140404A6C[scaled_index + 280658439] = dword_140404A6C[3597 * a3 + 71859816];
    dword_140404A6C[scaled_index + 280658440] = dword_140404A6C[3597 * a3 + 71859825];
    dword_140404A6C[scaled_index + 280658441] = dword_140404A6C[3597 * a3 + 71859817];
    dword_140404A6C[scaled_index + 280658442] = dword_140404A6C[3597 * a3 + 71859818];
    dword_140404A6C[scaled_index + 280658443] = dword_140404A6C[3597 * a3 + 71859819];
    dword_140404A6C[scaled_index + 280658444] = dword_140404A6C[3597 * a3 + 71859820];
    dword_140404A6C[scaled_index + 280658445] = dword_140404A6C[3597 * a3 + 71859821];
    dword_140404A6C[scaled_index + 280658446] = dword_140404A6C[3597 * a3 + 71859822];
    scaled_index_6 = dword_140404A6C[3597 * a3 + 71859823];
    dword_140404A6C[scaled_index + 280658449] = dword_140404A6C[3597 * a3 + 71859826];
    dword_140404A6C[scaled_index + 280658447] = scaled_index_6;
  }
  if ( game_connected )
    ++dword_140404A6C[human + 282485789];
  return (unsigned int)human;
}

//----- (000000014007F590) ----------------------------------------------------
unsigned int *           sub_14007F590(signed int a1)
{
  unsigned int *result;
  __int64 human;
  __int64 human_record_offset;
  __int64 table_value;
  int slot;
  __int64 running_total;
  int *state_address;
  int scaled_index;
  __int64 remaining_count;
  unsigned int *state_address_2;
  __int64 scaled_index_2;
  int scaled_index_3;
  __int64 remaining_count_2;
  unsigned int *record_byte_offset;
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
  __int64 scaled_index_19;
  __int64 cached_world_unknown_15fd16260_count;
  bool comparison_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007F590[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14007F590 + 0)) /* [rsp+48h] */

  result = (unsigned int *)&retaddr;
  human = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    human_record_offset = 7166LL * a1;
    table_value = (int)dword_140404A6C[human_record_offset + 280651305];
    if ( (_DWORD)table_value != -1 && dword_140404A6C[3597 * table_value + 71856292] == a1 )
      dword_140404A6C[3597 * table_value + 71856292] = -1;
    slot = 0;
    running_total = 0;
    state_address = (int *)&dword_140404A6C[human_record_offset + 280658139];
    do
    {
      while ( *state_address > 0 )
        sr_world_take_item(dword_140404A6C[7166 * human + 280658139 + running_total + *state_address], human, slot);
      ++slot;
      running_total += 10;
      state_address += 10;
    }
    while ( slot < 8 );
    scaled_index = dword_140404A6C[7166 * human + 280654224];
    if ( scaled_index > 0 )
    {
      remaining_count = (unsigned int)scaled_index;
      state_address_2 = &dword_140404A6C[human_record_offset + 280654225];
      do
      {
        scaled_index_2 = (int)*state_address_2;
        state_address_2 += 3;
        dword_140404A6C[61 * scaled_index_2 + 486149253] = 0;
        --remaining_count;
      }
      while ( remaining_count );
    }
    scaled_index_3 = dword_140404A6C[7166 * human + 280652687];
    if ( scaled_index_3 > 0 )
    {
      remaining_count_2 = (unsigned int)scaled_index_3;
      record_byte_offset = &dword_140404A6C[human_record_offset + 280652688];
      do
      {
        scaled_index_4 = (int)*record_byte_offset;
        record_byte_offset += 12;
        dword_140404A6C[61 * scaled_index_4 + 486149253] = 0;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    scaled_index_5 = (int)dword_140404A6C[7166 * human + 280651439];
    if ( (unsigned int)scaled_index_5 < 0x2000 )
      dword_140404A6C[47 * scaled_index_5 + 18215709] = 0;
    scaled_index_6 = (int)dword_140404A6C[7166 * human + 280651517];
    if ( (unsigned int)scaled_index_6 < 0x2000 )
      dword_140404A6C[47 * scaled_index_6 + 18215709] = 0;
    scaled_index_7 = (int)dword_140404A6C[7166 * human + 280651595];
    if ( (unsigned int)scaled_index_7 < 0x2000 )
      dword_140404A6C[47 * scaled_index_7 + 18215709] = 0;
    scaled_index_8 = (int)dword_140404A6C[7166 * human + 280651673];
    if ( (unsigned int)scaled_index_8 < 0x2000 )
      dword_140404A6C[47 * scaled_index_8 + 18215709] = 0;
    scaled_index_9 = (int)dword_140404A6C[7166 * human + 280651751];
    if ( (unsigned int)scaled_index_9 < 0x2000 )
      dword_140404A6C[47 * scaled_index_9 + 18215709] = 0;
    scaled_index_10 = (int)dword_140404A6C[7166 * human + 280651829];
    if ( (unsigned int)scaled_index_10 < 0x2000 )
      dword_140404A6C[47 * scaled_index_10 + 18215709] = 0;
    scaled_index_11 = (int)dword_140404A6C[7166 * human + 280651907];
    if ( (unsigned int)scaled_index_11 < 0x2000 )
      dword_140404A6C[47 * scaled_index_11 + 18215709] = 0;
    scaled_index_12 = (int)dword_140404A6C[7166 * human + 280651985];
    if ( (unsigned int)scaled_index_12 < 0x2000 )
      dword_140404A6C[47 * scaled_index_12 + 18215709] = 0;
    scaled_index_13 = (int)dword_140404A6C[7166 * human + 280652063];
    if ( (unsigned int)scaled_index_13 < 0x2000 )
      dword_140404A6C[47 * scaled_index_13 + 18215709] = 0;
    scaled_index_14 = (int)dword_140404A6C[7166 * human + 280652141];
    if ( (unsigned int)scaled_index_14 < 0x2000 )
      dword_140404A6C[47 * scaled_index_14 + 18215709] = 0;
    scaled_index_15 = (int)dword_140404A6C[7166 * human + 280652219];
    if ( (unsigned int)scaled_index_15 < 0x2000 )
      dword_140404A6C[47 * scaled_index_15 + 18215709] = 0;
    scaled_index_16 = (int)dword_140404A6C[7166 * human + 280652297];
    if ( (unsigned int)scaled_index_16 < 0x2000 )
      dword_140404A6C[47 * scaled_index_16 + 18215709] = 0;
    scaled_index_17 = (int)dword_140404A6C[7166 * human + 280652375];
    if ( (unsigned int)scaled_index_17 < 0x2000 )
      dword_140404A6C[47 * scaled_index_17 + 18215709] = 0;
    scaled_index_18 = (int)dword_140404A6C[7166 * human + 280652453];
    if ( (unsigned int)scaled_index_18 < 0x2000 )
      dword_140404A6C[47 * scaled_index_18 + 18215709] = 0;
    scaled_index_19 = (int)dword_140404A6C[7166 * human + 280652531];
    if ( (unsigned int)scaled_index_19 < 0x2000 )
      dword_140404A6C[47 * scaled_index_19 + 18215709] = 0;
    result = (unsigned int *)(int)dword_140404A6C[7166 * human + 280652609];
    if ( (unsigned int)result < 0x2000 )
      dword_140404A6C[47 * (_QWORD)result + 18215709] = 0;
    cached_world_unknown_15fd16260_count = world_unknown_15fd16260_count;
    if ( (int)world_unknown_15fd16260_count > 0 )
    {
      result = &g_15FD16264;
      do
      {
        if ( *result == (_DWORD)human )
          *result = -1;
        result += 383;
        --cached_world_unknown_15fd16260_count;
      }
      while ( cached_world_unknown_15fd16260_count );
    }
    comparison_result = game_connected == 0;
    dword_140404A6C[7166 * human + 280651303] = 0;
    if ( !comparison_result )
      ++dword_140404A6C[human + 282485789];
  }
  return result;
}
#undef retaddr

//----- (0000000140085AA0) ----------------------------------------------------
__int64 sub_140085AA0()
{
  __int64 scaled_index;
  __int64 table_value;
  __m128i converted_vector;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  bool comparison_result;
  __m128i saved_converted_vector;
  unsigned int *converted_integer;
  int shifted_bits;
  unsigned int table_value_2;
  char *literal_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140085AA0[608];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140085AA0 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140085AA0 + 32)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140085AA0 + 40)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140085AA0 + 48)) /* [rsp+30h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140085AA0 + 56)) /* [rsp+38h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_140085AA0 + 64)) /* [rsp+40h] */
#define text (*(char (*)[512])(void *)(sr_frame_140085AA0 + 80)) /* [rsp+50h] */
#define unused_frame_slot_592 (*(__int64 (*))(void *)(sr_frame_140085AA0 + 592)) /* [rsp+250h] */

  if ( local_player == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  scaled_index = 3597LL * (int)local_player;
  table_value = (int)dword_140404A6C[scaled_index + 71856292];
  if ( g_18329CC24 )
    return 0; /* compatibility result discarded by all reviewed callers */
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 1065353216;
  unused_written_slot_3 = 1065353216;
  unused_written_slot_2 = 1065353216;
  unused_written_slot = 32;
  sr_text_draw_recovered("Press F1 to toggle help", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C00000u))))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  converted_vector = _mm_cvtsi32_si128((int)(0x43080000u));
  if ( (_DWORD)table_value == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  scaled_index_2 = 7166 * table_value;
  if ( (int)dword_140404A6C[scaled_index_2 + 280658149] > 0
    && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[scaled_index_2 + 280658150] + 278845898] + 278521289] )
  {
    unused_written_slot_5 = 1065353216;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 32;
    sr_text_draw_recovered("Press F to swap your weapon to your right hand", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43080000u))))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    converted_vector = _mm_cvtsi32_si128((int)(0x431C0000u));
  }
  if ( (int)dword_140404A6C[scaled_index_2 + 280658139] > 0 )
  {
    scaled_index_3 = 1760LL * (int)dword_140404A6C[scaled_index_2 + 280658140];
    if ( dword_140404A6C[scaled_index_3 + 278845898] == 13 )
    {
      sr_text_draw_recovered("Press R to arm grenade", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      unused_written_slot_5 = 1065353216;
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 32;
      sr_text_draw_recovered("Hold Q, move mouse up and release Q to throw", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
    }
    if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_3 + 278845898] + 278521289] )
    {
      if ( (int)dword_140404A6C[scaled_index_2 + 280658149] <= 0 )
      {
        shifted_bits = (int)dword_140404A6C[scaled_index + 71857715] >> 8;
        if ( !shifted_bits || shifted_bits == 3 )
        {
          unused_written_slot_5 = 1065353216;
          unused_written_slot_4 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 32;
          sr_text_draw_recovered("Press 2-5 to put a magazine in your left hand", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
        }
      }
      else if ( dword_140404A6C[1760 * dword_140404A6C[scaled_index_2 + 280658150] + 278845898] - 1 == dword_140404A6C[scaled_index_3 + 278845898] )
      {
        comparison_result = (dword_140404A6C[scaled_index + 71857724] & 0x80000000) != 0 || (dword_140404A6C[scaled_index + 71857724] & 0xFFFFFF00) == 0;
        saved_converted_vector = converted_vector;
        unused_written_slot_5 = 1065353216;
        unused_written_slot_4 = 1065353216;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = 32;
        converted_integer = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector);
        if ( comparison_result )
          sr_text_draw_recovered("Press Q to drop empty magazine", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_integer)), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        else
          sr_text_draw_recovered("Press R to load magazine", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_integer)), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
        converted_vector = saved_converted_vector;
      }
    }
    table_value_2 = dword_140404A6C[scaled_index_3 + 278845898];
    if ( table_value_2 == 15 )
    {
      crt_sprintf(text, "%s to open briefcase", off_1402B29C0[0]);
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 32;
      sr_text_draw_recovered(text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      table_value_2 = dword_140404A6C[scaled_index_3 + 278845898];
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
    }
    if ( table_value_2 == 16 )
    {
      crt_sprintf(text, "%s to close briefcase", off_1402B29C0[0]);
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 32;
      sr_text_draw_recovered(text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
      if ( (int)dword_140404A6C[scaled_index_2 + 280658149] <= 0 )
      {
        if ( (dword_140404A6C[scaled_index + 71857715] & 0xFFFFFF00) != 0x100 )
          goto LABEL_28;
        literal_text = "Press R to unload item from briefcase";
      }
      else
      {
        literal_text = "Press R to load item into briefcase";
      }
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 1065353216;
      unused_written_slot_3 = 1065353216;
      unused_written_slot_2 = 1065353216;
      unused_written_slot = 32;
      sr_text_draw_recovered(literal_text, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 20.0;
    }
  }
LABEL_28:
  if ( *(float *)&dword_140404A6C[scaled_index_2 + 280651456] < 0.69999999 )
  {
    unused_written_slot_5 = 1065353216;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 32;
    sr_text_draw_recovered("Hold CTRL to stand up", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef text
#undef unused_frame_slot_592

//----- (0000000140087810) ----------------------------------------------------
__int64            sub_140087810(int a1, int a2)
{
  __int64 human_record_offset;
  __int64 input_value;
  signed int float_word;
  __int64 scaled_index;
  unsigned int table_value;
  __int64 element_index;
  int iteration_count;
  float weighted_sum;
  int selection_code;
  unsigned int table_value_2;
  __int64 table_value_3;
  unsigned int table_value_4;
  char table_value_5;
  __int64 masked_bits;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_2;
  __int64 masked_bits_2;
  unsigned int *running_total;
  __int64 remaining_count;
  unsigned int *state_address;
  __int64 float_word_2;
  __m128i converted_vector;
  double x;
  __int64 unused_local;
  signed int iteration_count_2;
  int *buffer_cursor;
  __int64 scaled_index_3;
  __int64 table_value_6;
  float weighted_sum_4;
  float weighted_sum_5;
  int shifted_bits;
  char *literal_text;
  unsigned int *converted_integer;
  unsigned __int64 cached_scaled_index;
  __int64 running_total_2;
  _BYTE *buffer_cursor_2;
  __int64 remaining_count_2;
  float *weighted_sum_6;
  int integer_sum;
  unsigned int *state_address_2;
  float text_x;
  __int64 remaining_count_3;
  double y;
  double x_2;
  __m128i converted_vector_2;
  __int64 unused_local_2;
  __m128i saved_converted_vector;
  float text_size;
  signed int iteration_count_3;
  __int64 element_index_2;
  __int64 lobyte_result;
  int selection_code_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float sr_hud_slot_positions[14];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140087810[224];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140087810 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140087810 + 32)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140087810 + 40)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140087810 + 48)) /* [rsp+30h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140087810 + 56)) /* [rsp+38h] */
#define selection_code_3 (*(int (*))(void *)(sr_frame_140087810 + 64)) /* [rsp+40h] */
#define shifted_bits_2 (*(int (*))(void *)(sr_frame_140087810 + 72)) /* [rsp+48h] */
#define selection_code_4 (*(int (*))(void *)(sr_frame_140087810 + 80)) /* [rsp+50h] */
#define comparison_result (*(_BOOL8 (*))(void *)(sr_frame_140087810 + 96)) /* [rsp+60h] */
#define scaled_index_4 (*(unsigned __int64 (*))(void *)(sr_frame_140087810 + 104)) /* [rsp+68h] */
#define integer_sum_2 (*(__int64 (*))(void *)(sr_frame_140087810 + 112)) /* [rsp+70h] */
#define integer_difference (*(__int64 (*))(void *)(sr_frame_140087810 + 120)) /* [rsp+78h] */
#define lookup_index (*(__int64 (*))(void *)(sr_frame_140087810 + 128)) /* [rsp+80h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_140087810 + 208)) /* [rsp+D0h] */

  human_record_offset = 7166LL * a2;
  input_value = a1;
  float_word = -1;
  if ( (int)dword_140404A6C[human_record_offset + 280658139] > 0 )
    float_word = dword_140404A6C[human_record_offset + 280658140];
  comparison_result = 0;
  integer_sum_2 = 1;
  if ( float_word != -1 )
  {
    scaled_index = 1760LL * float_word;
    table_value = dword_140404A6C[scaled_index + 278845898];
    if ( table_value == 25 || (comparison_result = 0, table_value == 33) )
      comparison_result = dword_140404A6C[scaled_index + 278846052] == 1;
  }
  element_index = 0;
  iteration_count = -2;
  do
  {
    if ( (unsigned __int64)element_index >= 2 )
    {
      selection_code = 1141374976;
      weighted_sum = (float)((float)iteration_count * 140.0) + 212.0;
    }
    else
    {
      weighted_sum = 608.0;
      if ( element_index == 1 )
        weighted_sum = 416.0;
      selection_code = 1140195328;
    }
    *((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * element_index) = weighted_sum;
    ++iteration_count;
    LODWORD(((uint64_t *)(void *)(sr_hud_slot_positions+1))[element_index++]) = selection_code;
  }
  while ( element_index < 7 );
  table_value_2 = dword_140404A6C[human_record_offset + 280658335];
  renderer_current_font = 1;
  if ( table_value_2 - 1 <= 1 )
  {
    table_value_3 = (int)dword_140404A6C[human_record_offset + 280658338];
    if ( table_value_2 == 2 )
    {
      table_value_4 = dword_140404A6C[human_record_offset + 280658339] + 2;
      table_value_5 = table_value_4;
      if ( dword_140404A6C[3597 * input_value + 71857714 + 9 * table_value_3] )
      {
        table_value_5 = dword_140404A6C[human_record_offset + 280658338];
        LOBYTE(table_value_3) = table_value_4;
      }
    }
    else
    {
      table_value_5 = dword_140404A6C[human_record_offset + 280658338];
      LOBYTE(table_value_3) = table_value_3 ^ 1;
    }
    masked_bits = table_value_5 & 7;
    weighted_sum_2 = *((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * masked_bits);
    weighted_sum_3 = *(float *)&((uint64_t *)(void *)(sr_hud_slot_positions+1))[masked_bits];
    scaled_index_2 = 14388 * input_value + 36 * masked_bits;
    if ( *(int *)((char *)&g_151622334 + scaled_index_2) > 0 )
    {
      masked_bits_2 = (int)dword_140404A6C[*((unsigned __int8 *)&g_151622338 + scaled_index_2) + 282486849];
      if ( (_DWORD)masked_bits_2 != -1 )
        sr_CSDrawAtlasEntry(
          0,
          masked_bits_2,
          (float)((float)(*((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * (table_value_3 & 7)) - weighted_sum_2)
                * (float)((float)(int)dword_140404A6C[human_record_offset + 280658337] * 0.0099999998))
        + weighted_sum_2,
          (float)((float)(*(float *)&((uint64_t *)(void *)(sr_hud_slot_positions+1))[table_value_3 & 7] - weighted_sum_3)
                * (float)((float)(int)dword_140404A6C[human_record_offset + 280658337] * 0.0099999998))
        + weighted_sum_3,
          (float)(int)dword_140404A6C[12 * masked_bits_2 + 433435868] * 0.5,
          (float)(int)dword_140404A6C[12 * masked_bits_2 + 433435869] * 0.5,
          9,
          1065353216,
          1065353216,
          1065353216,
          1065353216);
    }
  }
  running_total = (unsigned int *)((uint64_t *)(void *)(sr_hud_slot_positions+1));
  remaining_count = 2;
  lookup_index = input_value;
  scaled_index_4 = 14388 * input_value;
  state_address = &dword_140404A6C[3597 * input_value + 71857714];
  do
  {
    float_word_2 = *(running_total - 1);
    converted_vector = _mm_cvtsi32_si128((int)(*running_total));
    glBindTexture(3553, renderer_white_texture);
    HIDWORD(x) = HIDWORD(float_word_2);
    *(float *)&x = *(float *)&float_word_2 + 8.0;
    sr_renderer_draw_textured_rect(x, *(double *)SR_VEC_LANES(128, converted_vector, i64), 1124073472, 32.0, 9, 0, 0, 0, 1048576000);
    iteration_count_2 = 0;
    if ( (int)*state_address > 0 )
    {
      buffer_cursor = (int *)(state_address + 1);
      do
      {
        scaled_index_3 = (unsigned __int8)*buffer_cursor;
        table_value_6 = (int)dword_140404A6C[scaled_index_3 + 282486849];
        if ( (_DWORD)table_value_6 != -1 )
        {
          weighted_sum_4 = (float)(int)dword_140404A6C[12 * table_value_6 + 433435868] * 0.5;
          weighted_sum_5 = (float)(int)dword_140404A6C[12 * table_value_6 + 433435869] * 0.5;
          if ( (_DWORD)scaled_index_3 == 13 && (*buffer_cursor < 0 || (*buffer_cursor & 0xFFFFFF00) == 0) )
          {
            selection_code_4 = 1065353216;
            shifted_bits_2 = 0;
            selection_code_3 = 0;
          }
          else
          {
            selection_code_4 = 1065353216;
            shifted_bits_2 = 1065353216;
            selection_code_3 = 1065353216;
          }
          sr_CSDrawAtlasEntry(0, table_value_6, *(float *)&x, *(float *)SR_VEC_LANES(128, converted_vector, i32), weighted_sum_4, weighted_sum_5, 9, 1065353216, selection_code_3, shifted_bits_2, selection_code_4);
        }
        shifted_bits = *buffer_cursor >> 8;
        if ( (int)dword_140404A6C[1268 * scaled_index_3 + 278521294] <= 0 )
        {
          if ( shifted_bits > 0 && (_DWORD)scaled_index_3 != 16 )
          {
            selection_code_3 = 1065353216;
            literal_text = "+magazine";
            unused_written_slot_4 = 1065353216;
            unused_written_slot_3 = 1065353216;
            unused_written_slot_2 = 1065353216;
            unused_written_slot = 8;
            converted_integer = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector);
            if ( shifted_bits != 1 )
              literal_text = "+empty magazine";
            sr_text_draw_recovered(literal_text, *(float *)&x, sr_text_bits_float((unsigned)(uintptr_t)(converted_integer)), 8.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          }
        }
        else
        {
          shifted_bits_2 = *buffer_cursor >> 8;
          selection_code_3 = 1065353216;
          unused_written_slot_4 = 1065353216;
          unused_written_slot_3 = 1065353216;
          unused_written_slot_2 = 1065353216;
          unused_written_slot = 8;
          sr_text_draw_recovered("/i", *(float *)&float_word_2 + 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 8.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)shifted_bits_2});
        }
        ++iteration_count_2;
        ++buffer_cursor;
      }
      while ( iteration_count_2 < (int)*state_address );
    }
    running_total += 2;
    state_address += 9;
    --remaining_count;
  }
  while ( remaining_count );
  cached_scaled_index = scaled_index_4;
  running_total_2 = 18;
  buffer_cursor_2 = (char *)&g_183F7C97C + 2;
  remaining_count_2 = 5;
  weighted_sum_6 = (float *)&(*(char *)(void *)(sr_hud_slot_positions+5));
  integer_difference = 5;
  integer_sum = 1;
  state_address_2 = &dword_140404A6C[scaled_index_4 / 4 + 71857732];
  do
  {
    text_x = *(weighted_sum_6 - 1);
    remaining_count_3 = 2;
    *(_QWORD *)&y = *(unsigned int *)weighted_sum_6;
    *(_QWORD *)&x_2 = LODWORD(text_x);
    *(float *)&x_2 = text_x + 8.0;
    converted_vector_2 = _mm_cvtsi32_si128((int)(*(unsigned int *)weighted_sum_6));
    do
    {
      glBindTexture(3553, renderer_white_texture);
      sr_renderer_draw_textured_rect(x_2, y, 1124073472, 32.0, 9, 0, 0, 0, 1048576000);
      *(float *)&y = *(float *)&y + 32.0;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    saved_converted_vector = converted_vector_2;
    if ( *(unsigned int *)((char *)&g_151620DB0 + cached_scaled_index) == integer_sum + 2 )
      text_size = 24.0;
    else
      text_size = 12.0;
    shifted_bits_2 = integer_sum;
    selection_code_3 = 1065353216;
    unused_written_slot_4 = 1065353216;
    unused_written_slot_3 = 1065353216;
    unused_written_slot_2 = 1065353216;
    unused_written_slot = 8;
    *(float *)SR_VEC_LANES(128, saved_converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) - 32.0;
    sr_text_draw_recovered("/i", text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(saved_converted_vector))), text_size, 8, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)integer_sum});
    iteration_count_3 = 0;
    element_index_2 = 0;
    if ( (int)*state_address_2 > 0 )
    {
      do
      {
        lobyte_result = (int)dword_140404A6C[LOBYTE(dword_140404A6C[3597 * lookup_index + 71857715 + element_index_2 + running_total_2]) + 282486849];
        if ( (_DWORD)lobyte_result != -1 )
        {
          selection_code_2 = 1065353216;
          weighted_sum_7 = (float)(int)dword_140404A6C[12 * lobyte_result + 433435868] * 0.5;
          weighted_sum_8 = (float)(int)dword_140404A6C[12 * lobyte_result + 433435869] * 0.5;
          if ( !element_index_2 && *buffer_cursor_2 && !comparison_result )
          {
            selection_code_2 = 0;
            weighted_sum_7 = weighted_sum_7 * 1.125;
            weighted_sum_8 = weighted_sum_8 * 1.125;
          }
          sr_CSDrawAtlasEntry(0, lobyte_result, *(float *)&x_2, *(float *)SR_VEC_LANES(128, converted_vector_2, i32), weighted_sum_7, weighted_sum_8, 9, selection_code_2, 1065353216, selection_code_2, 1065353216);
        }
        ++iteration_count_3;
        *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = *(float *)SR_VEC_LANES(128, converted_vector_2, i32) + 32.0;
        ++element_index_2;
      }
      while ( iteration_count_3 < (int)*state_address_2 );
      remaining_count_2 = integer_difference;
      cached_scaled_index = scaled_index_4;
    }
    weighted_sum_6 += 2;
    integer_sum = integer_sum_2 + 1;
    running_total_2 += 9;
    state_address_2 += 9;
    integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
    ++buffer_cursor_2;
    integer_difference = --remaining_count_2;
  }
  while ( remaining_count_2 );
  renderer_current_font = 2;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_code_3
#undef shifted_bits_2
#undef selection_code_4
#undef comparison_result
#undef scaled_index_4
#undef integer_sum_2
#undef integer_difference
#undef lookup_index
#undef unused_frame_slot_208

//----- (0000000140088130) ----------------------------------------------------
double            sub_140088130(int a1)
{
  int input_value;
  int iteration_count;
  __int64 remaining_count;
  int x;
  int width;
  unsigned int *state_address;
  __int64 scaled_index;
  float selected_scalar;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 cached_game_type;
  unsigned int *running_total;
  float *state_address_2;
  unsigned int *running_total_2;
  int iteration_count_2;
  unsigned int *state_address_3;
  float combined_products;
  float combined_products_2;
  int iteration_count_3;
  float combined_products_3;
  float combined_products_4;
  __int64 masked_bits;
  __int64 remaining_count_2;
  unsigned int *state_address_4;
  __int64 table_value;
  float combined_products_5;
  float combined_products_6;
  int iteration_count_4;
  float *state_address_5;
  float product_difference;
  float product_difference_2;
  signed int state_word;
  signed int element_index;
  unsigned int *state_address_6;
  unsigned int table_value_2;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  float component_sum;
  float text_x;
  __m128i vector_result;
  __m128i vector_result_2;
  unsigned int *state_address_7;
  int scaled_index_4;
  float text_x_2;
  __m128i converted_vector;
  double result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140088130[64];
#define eye (*(int (*))(void *)(sr_frame_140088130 + 0)) /* [rsp+50h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140088130 + 4)) /* [rsp+54h] */
#define rotation (*(__int64 (*))(void *)(sr_frame_140088130 + 16)) /* [rsp+60h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140088130 + 24)) /* [rsp+68h] */
#define unused_written_slot_2 (*(unsigned int (*))(void *)(sr_frame_140088130 + 28)) /* [rsp+6Ch] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140088130 + 32)) /* [rsp+70h] */
#define unused_written_slot_4 (*(unsigned int (*))(void *)(sr_frame_140088130 + 36)) /* [rsp+74h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140088130 + 40)) /* [rsp+78h] */
#define unused_written_slot_6 (*(int (*))(void *)(sr_frame_140088130 + 48)) /* [rsp+80h] */

  input_value = a1;
  rotation = 1065353216;
  unused_written_slot = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_6 = 1065353216;
  unused_written_slot_3 = -1082130432;
  packed_word_bits = 1124073472;
  unused_written_slot_2 = 0x80000000;
  unused_written_slot_4 = 0x80000000;
  eye = 1124073472;
  if ( !g_183F7CB60 )
  {
    eye = 1123024896;
    LODWORD(packed_word_bits) = 1123024896;
  }
  iteration_count = 0;
  remaining_count = 256;
  if ( g_183F79DF0 )
  {
    x = 0;
    width = 512;
  }
  else
  {
    x = 768;
    width = 256;
  }
  sr_camera_begin_orthographic(x, 0, width, width, 128.0, 128.0, 512.0);
  sr_camera_set_view((float *)&eye, (unsigned int *)&rotation);
  glDisable(2884);
  state_address = &g_151620CE4;
  g_183EBFDB4 = 0;
  g_183EC5978 = 0;
  g_183ECB53C = 0;
  g_183ED1100 = 0;
  g_183ED6CC4 = 0;
  g_183EDC888 = 0;
  g_183EE244C = 0;
  g_183EE8010 = 0;
  do
  {
    if ( *(state_address - 33) )
    {
      scaled_index = (int)*state_address;
      if ( (unsigned int)scaled_index <= 5 )
        ++dword_140404A6C[5873 * scaled_index + 283831506];
    }
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  selected_scalar = 0.25;
  if ( !g_183F7CB60 )
    selected_scalar = 0.125;
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF11C + 284024944]);
  sr_renderer_draw_textured_rect(0.0, 0.0, 1132462080, 256.0, 0, 1065353216, 1065353216, 1065353216, 1061158912);
  glEnable(2848);
  glLineWidth(2.0f /* native XMM0 */);
  cached_game_type = game_type;
  running_total = (unsigned int *)dword_1402B2834;
  state_address_2 = (float *)(unsigned int *)&g_183EBFD60;
  if ( game_type == 4 )
  {
    running_total_2 = (unsigned int *)dword_1402B2834;
    iteration_count_2 = 0;
    state_address_3 = (unsigned int *)&g_183EBFD60;
    do
    {
      combined_products = (float)((float)((float)(*((float *)state_address_3 + 3) + *(float *)state_address_3) * 0.5) - g_18399EB64)
          * selected_scalar;
      combined_products_2 = (float)((float)((float)(*((float *)state_address_3 + 5) + *((float *)state_address_3 + 2)) * 0.5)
                  - g_18399EB6C)
          * selected_scalar;
      glBindTexture(3553, renderer_white_texture);
      if ( game_type == 4 )
      {
        sub_140081DA0(combined_products, combined_products_2, sr_export_float_lane_container(1098907648), *((float *)running_total_2 - 1), *running_total_2, running_total_2[1], 0x3F800000u);
        if ( local_player != -1 && iteration_count_2 == dword_140404A6C[3597 * local_player + 71856286] )
          sub_140081DA0(combined_products, combined_products_2, sr_export_float_lane_container(1090519040), *((float *)running_total_2 - 1), *running_total_2, running_total_2[1], 0x3F800000u);
        if ( (int)state_address_3[21] > 0 )
          sub_140081DA0(combined_products, combined_products_2, sr_export_float_lane_container(1094713344), *((float *)running_total_2 - 1), *running_total_2, running_total_2[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(combined_products, combined_products_2, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++iteration_count_2;
      state_address_3 += 5873;
      running_total_2 += 3;
    }
    while ( (__int64)state_address_3 < (__int64)&g_183EE23F8 );
    cached_game_type = game_type;
    input_value = a1;
  }
  if ( (((_DWORD)cached_game_type - 3) & 0xFFFFFFFD) == 0 )
  {
    iteration_count_3 = 0;
    do
    {
      combined_products_3 = (float)((float)((float)(state_address_2[3] + *state_address_2) * 0.5) - g_18399EB64) * 0.25;
      combined_products_4 = (float)((float)((float)(state_address_2[5] + state_address_2[2]) * 0.5) - g_18399EB6C) * 0.25;
      glBindTexture(3553, renderer_white_texture);
      if ( game_type == 3 )
      {
        sub_140081DA0(combined_products_3, combined_products_4, sr_export_float_lane_container(1098907648), *((float *)running_total - 1), *running_total, running_total[1], 0x3F800000u);
        if ( local_player != -1 && iteration_count_3 == dword_140404A6C[3597 * local_player + 71856286] )
          sub_140081DA0(combined_products_3, combined_products_4, sr_export_float_lane_container(1096810496), *((float *)running_total - 1), *running_total, running_total[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(combined_products_3, combined_products_4, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++iteration_count_3;
      state_address_2 += 5873;
      running_total += 3;
    }
    while ( (__int64)state_address_2 < (__int64)(unsigned int *)&g_183ED10AC );
    cached_game_type = game_type;
  }
  if ( (_DWORD)cached_game_type != 3 )
    goto LABEL_43;
  if ( local_player != -1 )
  {
    cached_game_type = 14388LL * (int)local_player;
    masked_bits = *(int *)((char *)&g_151620CE4 + cached_game_type);
    if ( (_DWORD)masked_bits != -1 )
    {
      remaining_count_2 = 16;
      state_address_4 = &dword_140404A6C[5873 * masked_bits + 283831591];
      do
      {
        if ( *(state_address_4 - 3) )
        {
          if ( *state_address_4 == 2 )
          {
            table_value = (int)state_address_4[15];
            if ( (_DWORD)table_value != -1 )
            {
              combined_products_5 = *(float *)&dword_140404A6C[19 * table_value + 487148756] - g_18399EB64;
              combined_products_6 = *(float *)&dword_140404A6C[19 * table_value + 487148758] - g_18399EB6C;
              glBindTexture(3553, renderer_white_texture);
              sub_140081DA0(combined_products_5 * 0.25, combined_products_6 * 0.25, sr_export_float_lane_container(1090519040), 0.0, 0x3F800000u, 0, 0x3F800000u);
            }
          }
        }
        state_address_4 += 279;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      cached_game_type = game_type;
LABEL_43:
      if ( (_DWORD)cached_game_type == 5 )
      {
        iteration_count_4 = 0;
        if ( (int)g_1B4657DB8 > 0 )
        {
          state_address_5 = (float *)&g_1B4657DC4;
          do
          {
            product_difference = *(state_address_5 - 2) - g_18399EB64;
            product_difference_2 = *state_address_5 - g_18399EB6C;
            glBindTexture(3553, renderer_white_texture);
            sub_140081DA0(
              product_difference * 0.25,
              product_difference_2 * 0.25,
              sr_export_float_lane_container(1090519040),
              0.75,
              0x3F400000u,
              0x3F400000u,
              0x3F800000u);
            ++iteration_count_4;
            state_address_5 += 19;
          }
          while ( iteration_count_4 < (int)g_1B4657DB8 );
        }
      }
    }
  }
  glLineWidth(1.0f /* native XMM0 */);
  glDisable(2848);
  if ( g_183F7CB60 )
    goto LABEL_67;
  state_word = g_175FF3464;
  element_index = 0;
  if ( (int)g_175FF3464 <= 0 )
  {
LABEL_60:
    if ( (int)item_block_region_count > 0 )
    {
      state_address_7 = &g_1760C5684;
      do
      {
        converted_vector = _mm_cvtsi32_si128((int)(state_address_7[2]));
        scaled_index_4 = *(state_address_7 - 19);
        text_x_2 = (float)((float)((float)(*((float *)state_address_7 - 3) + *(float *)state_address_7) * 0.5) - g_18399EB64)
            * selected_scalar;
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = (float)((float)((float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) + *((float *)state_address_7 - 1)) * 0.5)
                                        - g_18399EB6C)
                                * selected_scalar;
        if ( scaled_index_4 == 1 )
        {
          sr_text_draw_recovered(off_1402B2890[state_address_7[103]], text_x_2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 6.0, 5, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          scaled_index_4 = *(state_address_7 - 19);
        }
        if ( scaled_index_4 == 6 )
          sr_text_draw_recovered("$", text_x_2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 9.0, 5, 0.875f, 0.875f, 0.875f, 1.0f, NULL);
        ++iteration_count;
        state_address_7 += 14019;
      }
      while ( iteration_count < (int)item_block_region_count );
    }
    goto LABEL_67;
  }
  state_address_6 = &g_175FF348C;
  do
  {
    table_value_2 = state_address_6[2];
    if ( table_value_2 )
    {
      if ( table_value_2 == 1 && dword_140404A6C[34 * *state_address_6 + 225391232] - 320 > 3 )
        goto LABEL_58;
    }
    else if ( dword_140404A6C[34 * *state_address_6 + 225391238] != -1 )
    {
      goto LABEL_58;
    }
    scaled_index_2 = 34LL * (int)state_address_6[1];
    scaled_index_3 = 34LL * (int)*state_address_6;
    component_sum = (float)(int)(dword_140404A6C[scaled_index_3 + 225391230] + dword_140404A6C[scaled_index_2 + 225391230]);
    vector_result = _mm_castps_si128(_mm_set_ss((float)(int)(dword_140404A6C[scaled_index_3 + 225391232] + dword_140404A6C[scaled_index_2 + 225391232])));
    text_x = (float)((float)(component_sum + component_sum) - g_18399EB64) * selected_scalar;
    *(float *)SR_VEC_LANES(128, vector_result, i32) = (float)((float)(*(float *)SR_VEC_LANES(128, vector_result, i32) + *(float *)SR_VEC_LANES(128, vector_result, i32))
                                    - g_18399EB6C)
                            * selected_scalar;
    if ( table_value_2 == 1 )
    {
      vector_result_2 = _mm_castps_si128(_mm_set_ss((float)(((int)(dword_140404A6C[scaled_index_3 + 225391230] - 256) / 56) & 1)));
      *(float *)SR_VEC_LANES(128, vector_result_2, i32) = (float)(*(float *)SR_VEC_LANES(128, vector_result_2, i32) * 16.0) + *(float *)SR_VEC_LANES(128, vector_result, i32);
      vector_result = vector_result_2;
    }
    sr_text_draw_recovered((char *)&dword_140404A6C[396 * element_index + 225426047], text_x, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result))), 6.0, 5, 0.25f, 0.75f, 0.25f, 1.0f, NULL);
    state_word = g_175FF3464;
LABEL_58:
    ++element_index;
    state_address_6 += 396;
  }
  while ( element_index < state_word );
  if ( !g_183F7CB60 )
    goto LABEL_60;
LABEL_67:
  if ( input_value != -1 )
    sub_1400891B0(
      (float)(*(float *)&dword_140404A6C[7166 * input_value + 280651335] - g_18399EB64) * selected_scalar,
      (float)(*(float *)&dword_140404A6C[7166 * input_value + 280651337] - g_18399EB6C) * selected_scalar,
      sr_export_float_lane_container(1082130432),
      1.0,
      0x3F800000u,
      0x3F800000u,
      0x3F400000u,
      *(float *)&dword_140404A6C[7166 * input_value + 280651341]);
  result = sr_camera_begin_2d();
  if ( g_183F79DF0 )
    sr_text_draw_recovered("Press C to toggle map", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  return result;
}

#undef eye
#undef packed_word_bits
#undef rotation
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6

//----- (00000001400A83B0) ----------------------------------------------------
void sub_1400A83B0()
{
  unsigned int saved_iteration_count;
  __int64 scaled_index;
  __int64 table_value;
  __int64 scaled_index_2;
  unsigned int table_value_2;
  float saved_math_point_segment_distance_result;
  int iteration_count;
  __int64 comparison_result;
  __int64 selection_code;
  float weighted_sum;
  unsigned int *state_address;
  float *state_address_2;
  float *state_address_3;
  float weighted_sum_2;
  __int64 table_value_3;
  float math_point_segment_distance_result;
  float float_buffer[4];

  saved_iteration_count = -1;
  nearest_item = -1;
  if ( local_player != -1 )
  {
    scaled_index = 3597LL * (int)local_player;
    table_value = (int)dword_140404A6C[scaled_index + 71856292];
    if ( (_DWORD)table_value != -1 )
    {
      scaled_index_2 = 7166 * table_value;
      if ( dword_140404A6C[7166 * table_value + 280651313] == -1 )
      {
        table_value_2 = dword_140404A6C[scaled_index + 71856325] & 0x10;
        saved_math_point_segment_distance_result = 0.5;
        iteration_count = 0;
        comparison_result = (table_value_2 != 0 ? 0x28 : 0) + scaled_index_2 * 4;
        if ( *(int *)((char *)&g_1832A4DD8 + comparison_result) <= 0 )
          goto LABEL_8;
        selection_code = 10;
        if ( table_value_2 )
          selection_code = 0;
        if ( (int)dword_140404A6C[scaled_index_2 + 280658139 + selection_code] <= 0 )
        {
LABEL_8:
          weighted_sum = *(float *)&dword_140404A6C[scaled_index_2 + 280651694];
          state_address = &g_182BBB1A4;
          state_address_2 = (float *)&g_182BBB1DC;
          state_address_3 = (float *)&dword_140404A6C[scaled_index_2 + 280651674];
          weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_2 + 280651693] * 1.5;
          float_buffer[0] = *(float *)&dword_140404A6C[scaled_index_2 + 280651674]
                 - (float)(*(float *)&dword_140404A6C[scaled_index_2 + 280651692] * 1.5);
          float_buffer[1] = *(float *)&dword_140404A6C[scaled_index_2 + 280651675] - weighted_sum_2;
          float_buffer[2] = *(float *)&dword_140404A6C[scaled_index_2 + 280651676] - (float)(weighted_sum * 1.5);
          do
          {
            if ( *(state_address - 9) )
            {
              if ( *state_address == -1 )
              {
                table_value_3 = (int)state_address[1];
                if ( (_DWORD)table_value_3 == -1 || dword_140404A6C[1760 * table_value_3 + 278845902] == -1 )
                {
                  math_point_segment_distance_result = sr_math_point_segment_distance(state_address_3, float_buffer, state_address_2);
                  if ( math_point_segment_distance_result < saved_math_point_segment_distance_result )
                  {
                    saved_iteration_count = iteration_count;
                    saved_math_point_segment_distance_result = math_point_segment_distance_result;
                  }
                }
              }
            }
            ++iteration_count;
            state_address_2 += 1760;
            state_address += 1760;
          }
          while ( iteration_count < 1024 );
          nearest_item = saved_iteration_count;
          if ( saved_iteration_count != -1 && *(int *)((char *)&g_1832A4DD8 + comparison_result) > 0 )
          {
            if ( !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + comparison_result)
                                                + 278845898]
                                + 278521356
                                + dword_140404A6C[1760 * saved_iteration_count + 278845898]] )
              saved_iteration_count = -1;
            nearest_item = saved_iteration_count;
          }
        }
      }
    }
  }
}

//----- (00000001400A85E0) ----------------------------------------------------
_BOOL8            sub_1400A85E0(int a1, int a2, int a3, int a4)
{
  __int64 record_word_offset;
  __int64 xor_value;
  __int64 scaled_index;
  int masked_bits;
  bool comparison_result;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 masked_bits_2;
  __int64 human_record_offset;
  __int64 scaled_index_4;
  int masked_bits_3;

  if ( a2 == 1 )
  {
    record_word_offset = 28664LL * a1;
    xor_value = a3 ^ 1LL;
    scaled_index = record_word_offset + 40LL * a3;
    masked_bits = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index);
    comparison_result = masked_bits == 0;
    if ( masked_bits > 0 )
    {
      scaled_index_2 = record_word_offset + 40 * xor_value;
      if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_2) > 0 )
        return dword_140404A6C[1268
                             * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index)
                                             + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_2)
                                             + 278845898]] != 0;
      comparison_result = masked_bits == 0;
    }
    if ( !comparison_result )
      return 0;
    scaled_index_3 = record_word_offset + 40 * xor_value;
    if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_3) <= 0 )
      return 0;
    masked_bits_2 = 1760LL * *(int *)((char *)&g_1832A4DDC + scaled_index_3);
    return (int)dword_140404A6C[masked_bits_2 + 278845906] > 0
        && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[masked_bits_2 + 278845907] + 278845898]
                         + 278521356
                         + dword_140404A6C[masked_bits_2 + 278845898]];
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    human_record_offset = 7166LL * a1;
    scaled_index_4 = human_record_offset * 4 + 40LL * a3;
    masked_bits_3 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_4);
    if ( masked_bits_3 <= 0 )
      return !masked_bits_3 && !dword_140404A6C[14 * a3 + 280658223 + human_record_offset] && (int)dword_140404A6C[10 * a4 + 280658159 + human_record_offset] > 0;
    return dword_140404A6C[1268
                         * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_4)
                                         + 278845898]
                         + 278521660
                         + a4]
        && (int)dword_140404A6C[10 * a4 + 280658159 + human_record_offset] < 2;
  }
}

//----- (00000001400A87A0) ----------------------------------------------------
__int64            sub_1400A87A0(int a1)
{
  int human;
  __int64 human_record_offset;
  signed int item;
  __int64 result;
  unsigned int *state_address;
  float *state_address_2;
  __int64 scaled_index;
  float saved_math_point_segment_distance_result;
  float saved_math_point_segment_distance_result_2;
  int iteration_count;
  unsigned int *state_address_3;
  float weighted_sum;
  float *state_address_4;
  float weighted_sum_2;
  float math_point_segment_distance_result;
  __int64 saved_xor_value;
  __int64 masked_bits;
  BOOL comparison_result;
  __int64 scaled_index_2;
  int masked_bits_2;
  __int64 masked_bits_3;
  unsigned int saved_comparison_result;
  __int64 xor_value;
  __int64 scaled_index_3;
  int masked_bits_4;
  float weighted_sum_3;
  __int64 scaled_index_4;
  int masked_bits_5;
  __int64 saved_masked_bits;
  __int64 item_2;
  int slot;
  int slot_2;
  int table_value;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int table_value_2;
  __int64 comparison_result_2;
  float weighted_sum_4;
  float saved_weighted_sum;
  __int64 scaled_index_7;
  __int64 xor_value_2;
  __int64 masked_bits_6;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 item_3;
  __int64 scaled_index_10;
  __int64 saved_item;
  unsigned int parent;
  int human_2;
  __int64 xor_value_3;
  __int64 scaled_index_11;
  int masked_bits_7;
  bool comparison_result_3;
  __int64 scaled_index_12;
  __int64 masked_bits_8;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 item_4;
  __int64 scaled_index_15;
  __int64 saved_item_2;
  unsigned int parent_2;
  int human_3;
  float pitch;
  __int64 scaled_index_16;
  __int64 masked_bits_9;
  __int64 scaled_index_17;
  int masked_bits_10;
  BOOL comparison_result_4;
  _BOOL8 saved_comparison_result_2;
  float weighted_sum_5;
  __int64 scaled_index_18;
  __int64 item_5;
  __int64 scaled_index_19;
  __int64 saved_item_3;
  unsigned int parent_3;
  int human_4;
  double saved_weighted_sum_2;
  signed int item_6;
  float *combined_products;
  int iteration_count_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float math_point_segment_distance_result_2;
  unsigned __int64 scaled_index_20;
  int slot_3;
  __int64 selection_code;
  _BOOL8 comparison_result_5;
  unsigned int *state_address_5;
  float square_root;
  int i;
  int table_value_3;
  signed int iteration_count_3;
  float weighted_sum_8;
  float *weighted_sum_9;
  float product_difference;
  float weighted_sum_10;
  float scaled_value;
  float weighted_sum_11;
  float product_difference_2;
  float weighted_sum_12;
  float source_component_y;
  float weighted_sum_13;
  float combined_products_2;
  float weighted_sum_14;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  unsigned int *state_address_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A87A0[16];
#define combined_products_6 (*(float (*))(void *)(sr_frame_1400A87A0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400A87A0 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400A87A0 + 8)) /* [rsp+28h] */

  human = a1;
  human_record_offset = 7166LL * a1;
  item = -1;
  result = (int)dword_140404A6C[human_record_offset + 280658340];
  dword_140404A6C[human_record_offset + 280658335] = -1;
  if ( (_DWORD)result != dword_140404A6C[human_record_offset + 280658341] )
  {
    state_address = &g_182BBB1A4;
    state_address_2 = (float *)&g_182BBB1DC;
    scaled_index = human_record_offset * 4 + 48 * result;
    saved_math_point_segment_distance_result = 0.5;
    dword_140404A6C[human_record_offset + 280658335] = *(unsigned int *)((char *)&g_1832A5104 + scaled_index);
    dword_140404A6C[human_record_offset + 280658336] = *(unsigned int *)((char *)&g_1832A5108 + scaled_index);
    dword_140404A6C[human_record_offset + 280658337] = (int)(float)(*(float *)((char *)&g_1832A5108 + scaled_index) * 100.0);
    result = *(unsigned int *)((char *)&g_1832A5104 + scaled_index);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_140404A6C[human_record_offset + 280651313] == -1 )
      {
        saved_math_point_segment_distance_result_2 = 0.5;
        iteration_count = 0;
        state_address_3 = &g_182BBB1A4;
        weighted_sum = *(float *)&dword_140404A6C[human_record_offset + 280651693] * 1.5;
        state_address_4 = (float *)&g_182BBB1DC;
        weighted_sum_2 = *(float *)&dword_140404A6C[human_record_offset + 280651694] * 1.5;
        combined_products_6 = *(float *)&dword_140404A6C[human_record_offset + 280651674] - (float)(*(float *)&dword_140404A6C[human_record_offset + 280651692] * 1.5);
        unused_written_slot = *(float *)&dword_140404A6C[human_record_offset + 280651675] - weighted_sum;
        unused_written_slot_2 = *(float *)&dword_140404A6C[human_record_offset + 280651676] - weighted_sum_2;
        do
        {
          if ( *(state_address_3 - 9) )
          {
            if ( *state_address_3 == -1 && state_address_3[1] == -1 )
            {
              math_point_segment_distance_result = sr_math_point_segment_distance((float *)&dword_140404A6C[human_record_offset + 280651674], &combined_products_6, state_address_4);
              if ( math_point_segment_distance_result < saved_math_point_segment_distance_result_2 )
              {
                item = iteration_count;
                saved_math_point_segment_distance_result_2 = math_point_segment_distance_result;
              }
            }
          }
          ++iteration_count;
          state_address_4 += 1760;
          state_address_3 += 1760;
        }
        while ( iteration_count < 1024 );
        human = a1;
        if ( item != -1 && dword_140404A6C[1760 * item + 278845898] == 39 && !dword_140404A6C[human_record_offset + 280658139] )
          sr_item_transfer(item, -1, a1, 0);
      }
      dword_140404A6C[human_record_offset + 280658340] = ((unsigned __int8)dword_140404A6C[human_record_offset + 280658340] + 1) & 7;
      result = *(unsigned int *)((char *)&g_1832A5104 + scaled_index);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(saved_xor_value) = *(unsigned int *)((char *)&g_1832A512C + scaled_index);
      masked_bits = *(int *)((char *)&g_1832A5130 + scaled_index);
      if ( (int)saved_xor_value < 2 )
        goto LABEL_35;
      comparison_result = 1;
      scaled_index_2 = human_record_offset * 4 + 40 * (masked_bits + 2);
      masked_bits_2 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_2);
      if ( masked_bits_2 > 0 )
      {
        masked_bits_3 = (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_2) + 278845898];
        if ( (int)dword_140404A6C[1268 * masked_bits_3 + 278521294] > 0 )
          comparison_result = (unsigned int)(masked_bits_3 - 13) <= 1;
      }
      saved_comparison_result = !comparison_result;
      if ( dword_140404A6C[10 * comparison_result + 280658139 + human_record_offset] )
        saved_comparison_result = comparison_result;
      xor_value = saved_comparison_result ^ 1;
      if ( (_DWORD)saved_xor_value != 2 )
        xor_value = saved_comparison_result;
      saved_xor_value = (unsigned int)xor_value;
      scaled_index_3 = human_record_offset * 4 + 40 * xor_value;
      masked_bits_4 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_3);
      if ( masked_bits_4 <= 0 )
      {
        if ( !masked_bits_4 && !dword_140404A6C[14 * saved_xor_value + 280658223 + human_record_offset] && masked_bits_2 > 0 )
          goto LABEL_34;
      }
      else if ( dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_3)
                                                   + 278845898]
                              + 278521660
                              + masked_bits]
             && masked_bits_2 < 2 )
      {
LABEL_34:
        *(unsigned int *)((char *)&g_1832A512C + scaled_index) = saved_xor_value;
LABEL_35:
        if ( (_DWORD)saved_xor_value == -1 )
          goto LABEL_53;
        weighted_sum_3 = *(float *)((char *)&g_1832A5108 + scaled_index) + 0.06666667;
        *(float *)((char *)&g_1832A5108 + scaled_index) = weighted_sum_3;
        scaled_index_4 = human_record_offset * 4 + 40LL * (int)saved_xor_value;
        masked_bits_5 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_4);
        if ( masked_bits_5 <= 0 )
        {
          if ( masked_bits_5 )
            goto LABEL_39;
          if ( dword_140404A6C[14 * (int)saved_xor_value + 280658223 + human_record_offset] )
            goto LABEL_39;
          result = 5 * masked_bits;
          saved_masked_bits = masked_bits;
          if ( (int)dword_140404A6C[10 * masked_bits + 280658159 + human_record_offset] <= 0 )
            goto LABEL_39;
        }
        else
        {
          saved_masked_bits = masked_bits;
          if ( !dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_4)
                                                   + 278845898]
                              + 278521660
                              + masked_bits]
            || (result = 5 * masked_bits, (int)dword_140404A6C[10 * masked_bits + 280658159 + human_record_offset] >= 2) )
          {
LABEL_39:
            *(unsigned int *)((char *)&g_1832A5108 + scaled_index) = 1065353216;
            saved_masked_bits = masked_bits;
            masked_bits_5 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_4);
LABEL_40:
            if ( masked_bits_5 <= 0 )
            {
              if ( masked_bits_5 )
                goto LABEL_53;
              if ( dword_140404A6C[14 * (int)saved_xor_value + 280658223 + human_record_offset] )
                goto LABEL_53;
              item_2 = human_record_offset * 4 + 40 * (saved_masked_bits + 2);
              if ( *(int *)((char *)&g_1832A4DD8 + item_2) <= 0 )
                goto LABEL_53;
              LODWORD(item_2) = *(unsigned int *)((char *)&g_1832A4DDC + item_2);
              slot = saved_xor_value;
              goto LABEL_52;
            }
            item_2 = *(int *)((char *)&g_1832A4DDC + scaled_index_4);
            if ( dword_140404A6C[1268 * (int)dword_140404A6C[1760 * item_2 + 278845898] + 278521660 + saved_masked_bits] )
            {
              slot = masked_bits + 2;
LABEL_52:
              sr_item_transfer(item_2, -1, human, slot);
            }
LABEL_53:
            result = ((unsigned __int8)dword_140404A6C[human_record_offset + 280658340] + 1) & 7;
            dword_140404A6C[human_record_offset + 280658340] = result;
            goto LABEL_54;
          }
        }
        if ( weighted_sum_3 < 1.0 )
        {
LABEL_54:
          dword_140404A6C[human_record_offset + 280658338] = saved_xor_value;
          dword_140404A6C[human_record_offset + 280658339] = masked_bits;
          return result;
        }
        goto LABEL_40;
      }
      LODWORD(saved_xor_value) = saved_xor_value ^ 1;
      if ( !sub_1400A85E0(human, 2, saved_xor_value, masked_bits) )
        LODWORD(saved_xor_value) = -1;
      goto LABEL_34;
    }
    if ( (_DWORD)result == 1 )
    {
      slot_2 = *(unsigned int *)((char *)&g_1832A512C + scaled_index);
      if ( slot_2 == 3 )
      {
        slot_2 = 1;
        table_value = dword_140404A6C[human_record_offset + 280658149];
        if ( table_value <= 0 || (int)dword_140404A6C[human_record_offset + 280658139] <= 0 )
        {
          table_value_2 = dword_140404A6C[human_record_offset + 280658139];
          if ( table_value_2 || table_value )
          {
            slot_2 = table_value_2 != 0;
            comparison_result_2 = human_record_offset * 4 + 40LL * (table_value_2 == 0);
            if ( *(int *)((char *)&g_1832A4DD8 + comparison_result_2) > 0
              && !dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + comparison_result_2) + 278845906] )
            {
              slot_2 = -1;
            }
          }
          else
          {
            slot_2 = -1;
          }
        }
        else
        {
          scaled_index_5 = (int)dword_140404A6C[1760 * dword_140404A6C[human_record_offset + 280658140] + 278845898];
          scaled_index_6 = (int)dword_140404A6C[1760 * dword_140404A6C[human_record_offset + 280658150] + 278845898];
          if ( !dword_140404A6C[1268 * scaled_index_6 + 278521356 + scaled_index_5] )
          {
            slot_2 = 0;
            if ( !dword_140404A6C[1268 * scaled_index_5 + 278521356 + scaled_index_6] )
              slot_2 = -1;
          }
        }
        *(unsigned int *)((char *)&g_1832A512C + scaled_index) = slot_2;
      }
      if ( slot_2 == -1 )
        goto LABEL_111;
      weighted_sum_4 = *(float *)((char *)&g_1832A5108 + scaled_index) + 0.033333335;
      *(float *)((char *)&g_1832A5108 + scaled_index) = weighted_sum_4;
      saved_weighted_sum = weighted_sum_4;
      if ( weighted_sum_4 < 0.875
        || (scaled_index_7 = human_record_offset * 4 + 40LL * slot_2, *(int *)((char *)&g_1832A4DD8 + scaled_index_7) <= 0)
        || (xor_value_2 = human_record_offset * 4 + 40 * (slot_2 ^ 1LL), *(int *)((char *)&g_1832A4DD8 + xor_value_2) <= 0)
        || (masked_bits_6 = *(int *)((char *)&g_1832A4DDC + xor_value_2),
            scaled_index_8 = (int)dword_140404A6C[1760 * masked_bits_6 + 278845898],
            !dword_140404A6C[1268
                           * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_7)
                                                + 278845898]
                           + 278521356
                           + scaled_index_8])
        || !dword_140404A6C[1268 * scaled_index_8 + 278521289]
        || (scaled_index_9 = (int)dword_140404A6C[1760 * masked_bits_6 + 278845906], (int)scaled_index_9 <= 0) )
      {
LABEL_84:
        result = sub_1400A85E0(human, 1, slot_2, 0);
        if ( (_DWORD)result )
        {
          if ( saved_weighted_sum < 1.0 )
          {
LABEL_112:
            dword_140404A6C[human_record_offset + 280658338] = slot_2;
            return result;
          }
        }
        else
        {
          *(unsigned int *)((char *)&g_1832A5108 + scaled_index) = 1065353216;
        }
        xor_value_3 = slot_2 ^ 1LL;
        scaled_index_11 = human_record_offset * 4 + 40LL * slot_2;
        masked_bits_7 = *(unsigned int *)((char *)&g_1832A4DD8 + scaled_index_11);
        comparison_result_3 = masked_bits_7 == 0;
        if ( masked_bits_7 > 0 )
        {
          scaled_index_12 = human_record_offset * 4 + 40 * xor_value_3;
          if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_12) > 0 )
          {
            masked_bits_8 = *(int *)((char *)&g_1832A4DDC + scaled_index_12);
            scaled_index_13 = (int)dword_140404A6C[1760 * masked_bits_8 + 278845898];
            if ( !dword_140404A6C[1268
                                * (int)dword_140404A6C[1760
                                                     * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_11)
                                                     + 278845898]
                                + 278521356
                                + scaled_index_13] )
            {
LABEL_111:
              result = ((unsigned __int8)dword_140404A6C[human_record_offset + 280658340] + 1) & 7;
              dword_140404A6C[human_record_offset + 280658340] = result;
              goto LABEL_112;
            }
            if ( !dword_140404A6C[1268 * scaled_index_13 + 278521289] )
              goto LABEL_99;
            scaled_index_14 = (int)dword_140404A6C[1760 * masked_bits_8 + 278845906];
            if ( (int)scaled_index_14 <= 0 )
              goto LABEL_99;
            item_4 = (int)dword_140404A6C[1760 * masked_bits_8 + 278845906 + scaled_index_14];
            if ( (unsigned int)item_4 > 0x3FF )
              goto LABEL_99;
            scaled_index_15 = 1760 * item_4;
            saved_item_2 = item_4;
            parent_2 = dword_140404A6C[1760 * item_4 + 278845903];
            if ( parent_2 == -1 )
            {
              human_3 = dword_140404A6C[scaled_index_15 + 278845902];
              if ( human_3 == -1 )
              {
LABEL_99:
                if ( !(unsigned int)sr_item_transfer(
                                      *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_12),
                                      *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_11),
                                      -1,
                                      0)
                  || !dword_140404A6C[1268
                                    * dword_140404A6C[1760
                                                    * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_12)
                                                    + 278845898]
                                    + 278521289] )
                {
                  goto LABEL_111;
                }
                pitch = 1.0;
                goto LABEL_110;
              }
              sr_world_take_item(item_4, human_3, dword_140404A6C[scaled_index_15 + 278845904]);
            }
            else
            {
              sr_world_detach_item(item_4, parent_2);
            }
            if ( game_connected )
              ++dword_140404A6C[saved_item_2 + 280648157];
            goto LABEL_99;
          }
          comparison_result_3 = masked_bits_7 == 0;
        }
        if ( !comparison_result_3 )
          goto LABEL_111;
        scaled_index_16 = human_record_offset * 4 + 40 * xor_value_3;
        if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_16) <= 0 )
          goto LABEL_111;
        masked_bits_9 = *(int *)((char *)&g_1832A4DDC + scaled_index_16);
        scaled_index_17 = (int)dword_140404A6C[1760 * masked_bits_9 + 278845906];
        if ( (int)scaled_index_17 <= 0
          || !dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[1760 * masked_bits_9 + 278845907] + 278845898]
                            + 278521356
                            + dword_140404A6C[1760 * masked_bits_9 + 278845898]]
          || !(unsigned int)sr_item_transfer(dword_140404A6C[1760 * masked_bits_9 + 278845906 + scaled_index_17], -1, human, slot_2)
          || !dword_140404A6C[1268
                            * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_16)
                                            + 278845898]
                            + 278521289] )
        {
          goto LABEL_111;
        }
        pitch = 0.875;
LABEL_110:
        sr_event_sound(
          g_183E936AC,
          &dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + scaled_index_11) + 278845916],
          1.0,
          pitch);
        goto LABEL_111;
      }
      item_3 = (int)dword_140404A6C[1760 * masked_bits_6 + 278845906 + scaled_index_9];
      if ( (unsigned int)item_3 <= 0x3FF )
      {
        scaled_index_10 = 1760 * item_3;
        saved_item = item_3;
        parent = dword_140404A6C[1760 * item_3 + 278845903];
        if ( parent != -1 )
        {
          sr_world_detach_item(item_3, parent);
          goto LABEL_81;
        }
        human_2 = dword_140404A6C[scaled_index_10 + 278845902];
        if ( human_2 != -1 )
        {
          sr_world_take_item(item_3, human_2, dword_140404A6C[scaled_index_10 + 278845904]);
LABEL_81:
          if ( game_connected )
            ++dword_140404A6C[saved_item + 280648157];
        }
      }
      *(unsigned int *)((char *)&g_1832A5108 + scaled_index) = 0;
      saved_weighted_sum = 0.0;
      goto LABEL_84;
    }
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 )
        return result;
      if ( dword_140404A6C[human_record_offset + 280651313] == -1 )
      {
        item_6 = -1;
        combined_products = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + human_record_offset * 4 + 1126820052);
        iteration_count_2 = 0;
        weighted_sum_6 = *(float *)&dword_140404A6C[human_record_offset + 280651693] * 1.5;
        weighted_sum_7 = *(float *)&dword_140404A6C[human_record_offset + 280651694] * 1.5;
        combined_products_6 = *combined_products - (float)(*(float *)&dword_140404A6C[human_record_offset + 280651692] * 1.5);
        unused_written_slot = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + human_record_offset * 4 + 1126820052) - weighted_sum_6;
        unused_written_slot_2 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + human_record_offset * 4 + 1126820052) - weighted_sum_7;
        do
        {
          if ( *(state_address - 9) )
          {
            if ( *state_address == -1 && state_address[1] == -1 )
            {
              math_point_segment_distance_result_2 = sr_math_point_segment_distance(combined_products, &combined_products_6, state_address_2);
              if ( math_point_segment_distance_result_2 < saved_math_point_segment_distance_result )
              {
                item_6 = iteration_count_2;
                saved_math_point_segment_distance_result = math_point_segment_distance_result_2;
              }
            }
          }
          ++iteration_count_2;
          state_address_2 += 1760;
          state_address += 1760;
        }
        while ( iteration_count_2 < 1024 );
        if ( item_6 == -1 )
        {
          state_address_5 = &g_15F2D9230;
          square_root = 1.375;
          for ( i = 0; i < 512; ++i )
          {
            if ( *(state_address_5 - 12) )
            {
              table_value_3 = state_address_5[5163];
              iteration_count_3 = 0;
              if ( table_value_3 > 0 )
              {
                weighted_sum_8 = *((float *)state_address_5 + 5);
                weighted_sum_9 = (float *)(state_address_5 + 5165);
                product_difference = *((float *)state_address_5 - 1);
                weighted_sum_10 = *((float *)state_address_5 + 6);
                scaled_value = *(float *)state_address_5;
                weighted_sum_11 = *((float *)state_address_5 + 7);
                do
                {
                  product_difference_2 = *(weighted_sum_9 - 1);
                  weighted_sum_12 = (float)((float)((float)(weighted_sum_10 * product_difference_2) + scaled_value) + (float)(*weighted_sum_9 * *((float *)state_address_5 + 9)))
                       + (float)(weighted_sum_9[1] * *((float *)state_address_5 + 12));
                  source_component_y = weighted_sum_9[1];
                  weighted_sum_13 = source_component_y * *((float *)state_address_5 + 11);
                  combined_products_2 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + human_record_offset * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[human_record_offset + 280651693] * 0.75);
                  weighted_sum_14 = (float)((float)((float)(weighted_sum_11 * product_difference_2) + *((float *)state_address_5 + 1)) + (float)(*weighted_sum_9 * *((float *)state_address_5 + 10)))
                       + (float)(source_component_y * *((float *)state_address_5 + 13));
                  combined_products_3 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + human_record_offset * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[human_record_offset + 280651694] * 0.75);
                  combined_products_4 = *combined_products - (float)(*(float *)&dword_140404A6C[human_record_offset + 280651692] * 0.75);
                  combined_products_5 = (float)((float)((float)((float)((float)(weighted_sum_8 * product_difference_2) + product_difference) + (float)(*weighted_sum_9 * *((float *)state_address_5 + 8)))
                                       + weighted_sum_13)
                               - combined_products_4)
                       * (float)((float)((float)((float)((float)(weighted_sum_8 * product_difference_2) + product_difference) + (float)(*weighted_sum_9 * *((float *)state_address_5 + 8)))
                                       + weighted_sum_13)
                               - combined_products_4);
                  if ( fsqrt(
                         (float)((float)((float)(weighted_sum_12 - combined_products_2) * (float)(weighted_sum_12 - combined_products_2)) + combined_products_5)
                       + (float)((float)(weighted_sum_14 - combined_products_3) * (float)(weighted_sum_14 - combined_products_3))) < square_root )
                  {
                    state_address_6 = &g_18329E330;
                    while ( !*(state_address_6 - 10) || *state_address_6 != i || state_address_6[1] != iteration_count_3 )
                    {
                      state_address_6 += 7166;
                      if ( (__int64)state_address_6 >= (__int64)&g_18399DB30 )
                      {
                        dword_140404A6C[human_record_offset + 280651313] = i;
                        dword_140404A6C[human_record_offset + 280651314] = iteration_count_3;
                        square_root = fsqrt(
                                (float)((float)((float)(weighted_sum_12 - combined_products_2) * (float)(weighted_sum_12 - combined_products_2)) + combined_products_5)
                              + (float)((float)(weighted_sum_14 - combined_products_3) * (float)(weighted_sum_14 - combined_products_3)));
                        break;
                      }
                    }
                  }
                  ++iteration_count_3;
                  weighted_sum_9 += 3;
                }
                while ( iteration_count_3 < table_value_3 );
              }
            }
            state_address_5 += 5210;
          }
        }
        else
        {
          scaled_index_20 = (int)dword_140404A6C[1760 * item_6 + 278845898];
          if ( (((_DWORD)scaled_index_20 - 39) & 0xFFFFFFFC) != 0 || (_DWORD)scaled_index_20 == 40 )
          {
            slot_3 = *(unsigned int *)((char *)&g_1832A512C + scaled_index);
            if ( slot_3 == 3 )
            {
              if ( (unsigned int)scaled_index_20 <= 0x24 )
              {
                selection_code = 0x100200E000LL;
                if ( _bittest64(&selection_code, scaled_index_20) )
                  goto LABEL_155;
              }
              comparison_result_5 = 0;
              if ( !dword_140404A6C[1268 * scaled_index_20 + 278521289] )
                comparison_result_5 = (int)dword_140404A6C[1268 * scaled_index_20 + 278521294] > 0;
              if ( (_DWORD)scaled_index_20 == 16 )
LABEL_155:
                comparison_result_5 = 0;
              slot_3 = !comparison_result_5;
              if ( (int)dword_140404A6C[10 * comparison_result_5 + 280658139 + human_record_offset] <= 0 )
                slot_3 = comparison_result_5;
              *(unsigned int *)((char *)&g_1832A512C + scaled_index) = slot_3;
            }
            if ( !dword_140404A6C[10 * slot_3 + 280658139 + human_record_offset] )
              sr_item_transfer(item_6, -1, human, slot_3);
          }
        }
      }
    }
    else
    {
      masked_bits_10 = *(unsigned int *)((char *)&g_1832A512C + scaled_index);
      if ( masked_bits_10 >= 2 )
      {
        comparison_result_4 = masked_bits_10 != 2;
        saved_comparison_result_2 = !comparison_result_4;
        if ( dword_140404A6C[10 * comparison_result_4 + 280658139 + human_record_offset] )
          saved_comparison_result_2 = comparison_result_4;
        masked_bits_10 = saved_comparison_result_2;
        result = 5 * saved_comparison_result_2;
        if ( !dword_140404A6C[2 * result + 280658139 + human_record_offset] )
          masked_bits_10 = -1;
        *(unsigned int *)((char *)&g_1832A512C + scaled_index) = masked_bits_10;
      }
      if ( masked_bits_10 != -1 )
      {
        weighted_sum_5 = *(float *)&dword_140404A6C[human_record_offset + 280651331];
        if ( weighted_sum_5 <= -0.196349540849375 || weighted_sum_5 >= 0.0981747704246875 )
          goto LABEL_132;
        scaled_index_18 = human_record_offset * 4 + 40LL * masked_bits_10;
        if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_18) > 0 )
        {
          item_5 = *(int *)((char *)&g_1832A4DDC + scaled_index_18);
          if ( (unsigned int)item_5 <= 0x3FF )
          {
            scaled_index_19 = 1760 * item_5;
            saved_item_3 = item_5;
            parent_3 = dword_140404A6C[1760 * item_5 + 278845903];
            if ( parent_3 != -1 )
            {
              sr_world_detach_item(item_5, parent_3);
              goto LABEL_129;
            }
            human_4 = dword_140404A6C[scaled_index_19 + 278845902];
            if ( human_4 != -1 )
            {
              sr_world_take_item(item_5, human_4, dword_140404A6C[scaled_index_19 + 278845904]);
LABEL_129:
              if ( game_connected )
                ++dword_140404A6C[saved_item_3 + 280648157];
            }
          }
        }
        result = ((unsigned __int8)dword_140404A6C[human_record_offset + 280658340] + 1) & 7;
        dword_140404A6C[human_record_offset + 280658340] = result;
        weighted_sum_5 = *(float *)&dword_140404A6C[human_record_offset + 280651331];
LABEL_132:
        saved_weighted_sum_2 = weighted_sum_5;
        if ( saved_weighted_sum_2 >= -0.1595340019401172 )
        {
          if ( saved_weighted_sum_2 <= 0.1472621556370313 )
            dword_140404A6C[human_record_offset + 280651331] = 0;
          else
            *(float *)&dword_140404A6C[human_record_offset + 280651331] = saved_weighted_sum_2 - 0.1472621556370313;
        }
        else
        {
          *(float *)&dword_140404A6C[human_record_offset + 280651331] = saved_weighted_sum_2 + 0.1595340019401172;
        }
        return result;
      }
    }
    result = ((unsigned __int8)dword_140404A6C[human_record_offset + 280658340] + 1) & 7;
    dword_140404A6C[human_record_offset + 280658340] = result;
  }
  return result;
}
#undef combined_products_6
#undef unused_written_slot
#undef unused_written_slot_2

//----- (00000001400A9760) ----------------------------------------------------
__int64            sub_1400A9760(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 human_record_offset;
  int table_value;
  int record_word_offset;
  int table_value_2;

  result = a1;
  human_record_offset = 7166LL * a1;
  if ( !dword_140404A6C[human_record_offset + 280651319] )
  {
    result = (unsigned int)(a4 / -2);
    dword_140404A6C[human_record_offset + 280658300] += result;
  }
  if ( a2 <= 2 )
  {
    dword_140404A6C[human_record_offset + 280658302] -= a4;
    dword_140404A6C[human_record_offset + 280651333] += a4;
    table_value = dword_140404A6C[human_record_offset + 280658300];
    if ( table_value < 100 )
    {
      result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[human_record_offset + 280658299]
                                        - (float)(fminf((float)(100 - table_value) * 0.039999999, 1.0) * (float)a4));
      dword_140404A6C[human_record_offset + 280658299] = result;
    }
  }
  if ( a2 == 3 )
  {
    dword_140404A6C[human_record_offset + 280658304] -= a4;
    dword_140404A6C[human_record_offset + 280658299] -= a4;
  }
  else
  {
    record_word_offset = 3 * a4;
    if ( a2 - 4 <= 2 )
      dword_140404A6C[human_record_offset + 280658306] -= record_word_offset;
    if ( a2 - 7 <= 2 )
      dword_140404A6C[human_record_offset + 280658308] -= record_word_offset;
    if ( a2 - 10 <= 2 )
    {
      dword_140404A6C[human_record_offset + 280658310] += -2 * a4;
      table_value_2 = dword_140404A6C[human_record_offset + 280658300];
      if ( table_value_2 < 100 )
        dword_140404A6C[human_record_offset + 280658299] = (int)(float)((float)(int)dword_140404A6C[human_record_offset + 280658299]
                                                     - (float)((float)(a4 * (100 - table_value_2)) * 0.0099999998));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      dword_140404A6C[human_record_offset + 280658312] += -2 * a4;
      result = dword_140404A6C[human_record_offset + 280658300];
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[human_record_offset + 280658299]
                                          - (float)((float)(a4 * (100 - result)) * 0.0099999998));
        dword_140404A6C[human_record_offset + 280658299] = result;
      }
    }
  }
  if ( a4 > 0 )
  {
    result = rand() & 0x1F;
    if ( (int)result < a4 )
      dword_140404A6C[human_record_offset + 280658301] = 1;
  }
  if ( (int)dword_140404A6C[human_record_offset + 280651333] > 90 )
    dword_140404A6C[human_record_offset + 280651333] = 90;
  if ( (dword_140404A6C[human_record_offset + 280658299] & 0x80000000) != 0 )
    dword_140404A6C[human_record_offset + 280658299] = 0;
  return result;
}

//----- (00000001400AAAA0) ----------------------------------------------------
__int64            sub_1400AAAA0(int a1)
{
  __int64 input_value;
  __int64 human_record_offset;
  __int64 running_total;
  int iteration_count;
  float *state_address;
  __int64 remaining_count;
  __int64 scaled_index;
  __int64 table_value;
  __int64 scaled_index_2;
  __int64 table_value_2;
  __int64 scaled_index_3;
  __int64 table_value_3;
  __int64 scaled_index_4;
  unsigned int table_value_4;
  unsigned int *state_address_2;
  float product_difference;
  float product_difference_2;
  float scaled_value;
  __int64 scaled_index_5;
  float product_difference_3;
  float product_difference_4;
  float product_difference_5;
  __int64 scaled_index_6;
  float source_float_23;
  float source_float_24;
  float source_float_25;
  __int64 table_value_5;
  __int64 scaled_index_7;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  __int64 scaled_index_8;
  __int64 table_value_6;
  __int64 scaled_index_9;
  unsigned int *state_address_3;
  float *state_address_4;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  __int64 scaled_index_10;
  float product_difference_9;
  float product_difference_10;
  float product_difference_11;
  __int64 scaled_index_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  __int64 table_value_7;
  __int64 scaled_index_12;
  float product_difference_15;
  float product_difference_16;
  float product_difference_17;
  __int64 scaled_index_13;
  float product_difference_18;
  float product_difference_19;
  float scaled_value_2;
  __int64 table_value_8;
  __int64 scaled_index_14;
  float product_difference_20;
  float product_difference_21;
  float product_difference_22;
  unsigned int table_value_9;
  __int64 scaled_index_15;
  __int64 table_value_10;
  __int64 table_value_11;
  __int64 table_value_12;
  __int64 table_value_13;
  __int64 table_value_14;
  __int64 table_value_15;
  __int64 table_value_16;
  __int64 table_value_17;
  signed int iteration_count_2;
  __int64 table_value_18;
  __int64 table_value_19;
  __int64 table_value_20;
  __int64 table_value_21;
  __int64 result;
  unsigned int *state_address_5;
  signed int iteration_count_3;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  __int64 record_byte_offset;
  signed int iteration_count_4;
  __int64 scaled_index_18;
  unsigned int masked_bits;
  int saved_call_status;
  unsigned int table_value_22;
  unsigned int *state_address_6;
  __int64 scaled_index_19;
  __int64 running_total_2;
  unsigned int *running_total_3;
  unsigned int *state_address_7;
  unsigned int *state_address_8;
  __int64 iteration_count_5;
  unsigned int *buffer_cursor;
  __int64 remaining_count_2;
  unsigned int loaded_word;
  __int64 xor_value;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400AAAA0[128];
#define saved_state_address (*(unsigned int * (*))(void *)(sr_frame_1400AAAA0 + 0)) /* [rsp+0h] */
#define iteration_count_6 (*(int (*))(void *)(sr_frame_1400AAAA0 + 96)) /* [rsp+60h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_1400AAAA0 + 104)) /* [rsp+68h] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_1400AAAA0 + 112)) /* [rsp+70h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_1400AAAA0 + 120)) /* [rsp+78h] */

  input_value = a1;
  human_record_offset = 7166LL * a1;
  running_total = 0;
  input_value_2 = a1;
  iteration_count = 1;
  saved_iteration_count = 1;
  state_address = (float *)&g_18399E2E0;
  dword_140404A6C[human_record_offset + 280654321] = 0;
  remaining_count = 2;
  dword_140404A6C[human_record_offset + 280655794] = 0;
  dword_140404A6C[human_record_offset + 280656115] = 0;
  dword_140404A6C[human_record_offset + 280654323] = dword_140404A6C[human_record_offset + 280651439];
  scaled_index = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + scaled_index) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + scaled_index) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 1;
  table_value = (int)dword_140404A6C[human_record_offset + 280654321];
  dword_140404A6C[human_record_offset + 280654321] = table_value + 1;
  dword_140404A6C[23 * table_value + 280654346 + human_record_offset] = dword_140404A6C[human_record_offset + 280651517];
  scaled_index_2 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + scaled_index_2) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + scaled_index_2) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 1;
  table_value_2 = (int)dword_140404A6C[human_record_offset + 280654321];
  dword_140404A6C[human_record_offset + 280654321] = table_value_2 + 1;
  dword_140404A6C[23 * table_value_2 + 280654346 + human_record_offset] = dword_140404A6C[human_record_offset + 280651595];
  scaled_index_3 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + scaled_index_3) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + scaled_index_3) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 1;
  table_value_3 = (int)dword_140404A6C[human_record_offset + 280654321];
  dword_140404A6C[human_record_offset + 280654321] = table_value_3 + 1;
  dword_140404A6C[23 * table_value_3 + 280654346 + human_record_offset] = dword_140404A6C[human_record_offset + 280651673];
  scaled_index_4 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + scaled_index_4) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + scaled_index_4) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 1;
  table_value_4 = dword_140404A6C[human_record_offset + 280654321] + 1;
  dword_140404A6C[human_record_offset + 280654321] = table_value_4;
  state_address_2 = &dword_140404A6C[human_record_offset + 280652297];
  do
  {
    product_difference = *(state_address - 2);
    product_difference_2 = *(state_address - 1);
    scaled_value = *state_address;
    dword_140404A6C[23 * (int)table_value_4 + 280654323 + human_record_offset] = dword_140404A6C[human_record_offset + 280651439];
    scaled_index_5 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A123C + scaled_index_5) = product_difference;
    *(float *)((char *)&g_1832A1240 + scaled_index_5) = product_difference_2;
    *(float *)((char *)&g_1832A1244 + scaled_index_5) = scaled_value;
    product_difference_3 = product_difference - *(state_address - 5);
    product_difference_4 = product_difference_2 - *(state_address - 4);
    product_difference_5 = scaled_value - *(state_address - 3);
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654327 + human_record_offset] = *(state_address_2 - 78);
    scaled_index_6 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A124C + scaled_index_6) = product_difference_3;
    *(float *)((char *)&g_1832A1250 + scaled_index_6) = product_difference_4;
    *(float *)((char *)&g_1832A1254 + scaled_index_6) = product_difference_5;
    source_float_23 = state_address[23];
    source_float_24 = state_address[24];
    source_float_25 = state_address[25];
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 2;
    table_value_5 = (int)dword_140404A6C[human_record_offset + 280654321];
    dword_140404A6C[human_record_offset + 280654321] = table_value_5 + 1;
    dword_140404A6C[23 * table_value_5 + 280654346 + human_record_offset] = *(state_address_2 - 78);
    scaled_index_7 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A123C + scaled_index_7) = source_float_23;
    component_delta = source_float_23 - state_address[20];
    *(float *)((char *)&g_1832A1240 + scaled_index_7) = source_float_24;
    component_delta_2 = source_float_24 - state_address[21];
    *(float *)((char *)&g_1832A1244 + scaled_index_7) = source_float_25;
    component_delta_3 = source_float_25 - state_address[22];
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654327 + human_record_offset] = *state_address_2;
    scaled_index_8 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A124C + scaled_index_8) = component_delta;
    *(float *)((char *)&g_1832A1250 + scaled_index_8) = component_delta_2;
    *(float *)((char *)&g_1832A1254 + scaled_index_8) = component_delta_3;
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 2;
    table_value_6 = (int)dword_140404A6C[human_record_offset + 280654321];
    dword_140404A6C[human_record_offset + 280654321] = table_value_6 + 1;
    dword_140404A6C[23 * table_value_6 + 280654346 + human_record_offset] = *state_address_2;
    scaled_index_9 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(unsigned int *)((char *)&g_1832A123C + scaled_index_9) = 0;
    *(_QWORD *)((char *)&g_1832A1240 + scaled_index_9) = 1048576000;
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 1;
    state_address += 75;
    state_address_2 += 234;
    table_value_4 = dword_140404A6C[human_record_offset + 280654321] + 1;
    dword_140404A6C[human_record_offset + 280654321] = table_value_4;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_3 = &dword_140404A6C[human_record_offset + 280651751];
  state_address_4 = (float *)&g_18399E150;
  do
  {
    product_difference_6 = *(state_address_4 - 52);
    product_difference_7 = *(state_address_4 - 51);
    product_difference_8 = *(state_address_4 - 50);
    dword_140404A6C[23 * (int)table_value_4 + 280654323 + human_record_offset] = dword_140404A6C[human_record_offset + 280651595];
    scaled_index_10 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A123C + scaled_index_10) = product_difference_6;
    *(float *)((char *)&g_1832A1240 + scaled_index_10) = product_difference_7;
    *(float *)((char *)&g_1832A1244 + scaled_index_10) = product_difference_8;
    product_difference_9 = product_difference_6 - *(state_address_4 - 55);
    product_difference_10 = product_difference_7 - *(state_address_4 - 54);
    product_difference_11 = product_difference_8 - *(state_address_4 - 53);
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654327 + human_record_offset] = *state_address_3;
    scaled_index_11 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A124C + scaled_index_11) = product_difference_9;
    *(float *)((char *)&g_1832A1250 + scaled_index_11) = product_difference_10;
    *(float *)((char *)&g_1832A1254 + scaled_index_11) = product_difference_11;
    product_difference_12 = *(state_address_4 - 27);
    product_difference_13 = *(state_address_4 - 26);
    product_difference_14 = *(state_address_4 - 25);
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 2;
    table_value_7 = (int)dword_140404A6C[human_record_offset + 280654321];
    dword_140404A6C[human_record_offset + 280654321] = table_value_7 + 1;
    dword_140404A6C[23 * table_value_7 + 280654346 + human_record_offset] = *state_address_3;
    scaled_index_12 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A123C + scaled_index_12) = product_difference_12;
    product_difference_15 = product_difference_12 - *(state_address_4 - 30);
    *(float *)((char *)&g_1832A1240 + scaled_index_12) = product_difference_13;
    product_difference_16 = product_difference_13 - *(state_address_4 - 29);
    *(float *)((char *)&g_1832A1244 + scaled_index_12) = product_difference_14;
    product_difference_17 = product_difference_14 - *(state_address_4 - 28);
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654327 + human_record_offset] = state_address_3[78];
    scaled_index_13 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A124C + scaled_index_13) = product_difference_15;
    product_difference_18 = *(state_address_4 - 2);
    *(float *)((char *)&g_1832A1250 + scaled_index_13) = product_difference_16;
    product_difference_19 = *(state_address_4 - 1);
    *(float *)((char *)&g_1832A1254 + scaled_index_13) = product_difference_17;
    scaled_value_2 = *state_address_4;
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 2;
    table_value_8 = (int)dword_140404A6C[human_record_offset + 280654321];
    dword_140404A6C[human_record_offset + 280654321] = table_value_8 + 1;
    dword_140404A6C[23 * table_value_8 + 280654346 + human_record_offset] = state_address_3[78];
    scaled_index_14 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A123C + scaled_index_14) = product_difference_18;
    *(float *)((char *)&g_1832A1240 + scaled_index_14) = product_difference_19;
    product_difference_20 = product_difference_18 - *(state_address_4 - 5);
    product_difference_21 = product_difference_19 - *(state_address_4 - 4);
    *(float *)((char *)&g_1832A1244 + scaled_index_14) = scaled_value_2;
    product_difference_22 = scaled_value_2 - *(state_address_4 - 3);
    table_value_9 = state_address_3[156];
    state_address_4 += 75;
    state_address_3 += 234;
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654327 + human_record_offset] = table_value_9;
    scaled_index_15 = human_record_offset * 4 + 92LL * (int)dword_140404A6C[human_record_offset + 280654321];
    *(float *)((char *)&g_1832A124C + scaled_index_15) = product_difference_20;
    *(float *)((char *)&g_1832A1250 + scaled_index_15) = product_difference_21;
    *(float *)((char *)&g_1832A1254 + scaled_index_15) = product_difference_22;
    dword_140404A6C[23 * (int)dword_140404A6C[human_record_offset + 280654321] + 280654322 + human_record_offset] = 2;
    table_value_4 = dword_140404A6C[human_record_offset + 280654321] + 1;
    dword_140404A6C[human_record_offset + 280654321] = table_value_4;
  }
  while ( (__int64)state_address_4 < (__int64)&g_18399E3A8 );
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655795 + human_record_offset] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 1;
  table_value_10 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_10 + 1;
  dword_140404A6C[5 * table_value_10 + 280655800 + human_record_offset] = 1;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 2;
  table_value_11 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_11 + 1;
  dword_140404A6C[5 * table_value_11 + 280655800 + human_record_offset] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 3;
  table_value_12 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_12 + 1;
  dword_140404A6C[5 * table_value_12 + 280655800 + human_record_offset] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 4;
  table_value_13 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_13 + 1;
  dword_140404A6C[5 * table_value_13 + 280655800 + human_record_offset] = 4;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 5;
  table_value_14 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_14 + 1;
  dword_140404A6C[5 * table_value_14 + 280655800 + human_record_offset] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 7;
  table_value_15 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_15 + 1;
  dword_140404A6C[5 * table_value_15 + 280655800 + human_record_offset] = 7;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 8;
  table_value_16 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_16 + 1;
  dword_140404A6C[5 * table_value_16 + 280655800 + human_record_offset] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 10;
  table_value_17 = (int)dword_140404A6C[human_record_offset + 280655794];
  iteration_count_2 = 0;
  dword_140404A6C[human_record_offset + 280655794] = table_value_17 + 1;
  dword_140404A6C[5 * table_value_17 + 280655800 + human_record_offset] = 10;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 11;
  table_value_18 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_18 + 1;
  dword_140404A6C[5 * table_value_18 + 280655800 + human_record_offset] = 11;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 12;
  table_value_19 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_19 + 1;
  dword_140404A6C[5 * table_value_19 + 280655800 + human_record_offset] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 13;
  table_value_20 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_20 + 1;
  dword_140404A6C[5 * table_value_20 + 280655800 + human_record_offset] = 13;
  dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280655794] + 280655796 + human_record_offset] = 14;
  table_value_21 = (int)dword_140404A6C[human_record_offset + 280655794];
  dword_140404A6C[human_record_offset + 280655794] = table_value_21 + 1;
  dword_140404A6C[5 * table_value_21 + 280655800 + human_record_offset] = 14;
  result = human_record_offset * 4 + 20LL * (int)dword_140404A6C[human_record_offset + 280655794];
  *(unsigned int *)((char *)&g_1832A293C + result) = 15;
  if ( (int)++dword_140404A6C[human_record_offset + 280655794] > 0 )
  {
    state_address_5 = &dword_140404A6C[human_record_offset + 280655795];
    do
    {
      iteration_count_3 = 0;
      scaled_index_16 = human_record_offset * 4 + 92LL * (int)state_address_5[1];
      state_address_5[3] = *(unsigned int *)((char *)&g_1832A1238 + scaled_index_16);
      result = (int)*state_address_5;
      scaled_index_17 = human_record_offset * 4 + 92 * result;
      if ( *(int *)((char *)&g_1832A1234 + scaled_index_17) > 0 )
      {
        record_byte_offset = 0;
        do
        {
          iteration_count_4 = 0;
          if ( *(int *)((char *)&g_1832A1234 + scaled_index_16) > 0 )
          {
            result = (__int64)&g_1832A1238 + scaled_index_16;
            scaled_index_18 = record_byte_offset + human_record_offset * 4 + 92LL * (int)*state_address_5;
            do
            {
              masked_bits = *(unsigned int *)((char *)&g_1832A1238 + scaled_index_18);
              if ( masked_bits == *(_DWORD *)result )
                state_address_5[3] = masked_bits;
              ++iteration_count_4;
              result += 16;
            }
            while ( iteration_count_4 < *(int *)((char *)&g_1832A1234 + scaled_index_16) );
            running_total = 0;
          }
          ++iteration_count_3;
          record_byte_offset += 16;
        }
        while ( iteration_count_3 < *(int *)((char *)&g_1832A1234 + scaled_index_17) );
      }
      ++iteration_count_2;
      state_address_5 += 5;
    }
    while ( iteration_count_2 < (int)dword_140404A6C[human_record_offset + 280655794] );
    input_value = input_value_2;
    iteration_count = 1;
  }
  saved_call_status = dword_140404A6C[human_record_offset + 280655794];
  table_value_22 = 0;
  dword_140404A6C[human_record_offset + 280656115] = 0;
  if ( saved_call_status > 0 )
  {
    state_address_6 = &dword_140404A6C[human_record_offset + 280655798];
    do
    {
      saved_iteration_count_2 = iteration_count;
      result = (unsigned int)saved_call_status;
      iteration_count_6 = iteration_count;
      if ( iteration_count < saved_call_status )
      {
        scaled_index_19 = 7166 * input_value;
        running_total_2 = running_total + 5;
        running_total_3 = state_address_6 + 5;
        state_address_7 = &dword_140404A6C[7166 * input_value + 280655795 + running_total];
        saved_state_address = state_address_7;
        state_address_8 = &dword_140404A6C[7166 * input_value + 280655800 + running_total];
        do
        {
          iteration_count_5 = 0;
          buffer_cursor = state_address_7;
          remaining_count_2 = 2;
          do
          {
            loaded_word = *buffer_cursor;
            xor_value = iteration_count_5 ^ 1;
            if ( *buffer_cursor == *state_address_8 )
            {
              dword_140404A6C[5 * (int)table_value_22 + 280656116 + human_record_offset] = dword_140404A6C[xor_value + 280655795 + scaled_index_19 + running_total];
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656117 + human_record_offset] = *buffer_cursor;
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656118 + human_record_offset] = dword_140404A6C[scaled_index_19 + 280655796 + running_total_2];
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656119 + human_record_offset] = *state_address_6;
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656120 + human_record_offset] = *running_total_3;
              table_value_22 = dword_140404A6C[human_record_offset + 280656115] + 1;
              dword_140404A6C[human_record_offset + 280656115] = table_value_22;
              loaded_word = *buffer_cursor;
            }
            if ( loaded_word == state_address_8[1] )
            {
              dword_140404A6C[5 * (int)table_value_22 + 280656116 + human_record_offset] = dword_140404A6C[running_total + 280655795 + xor_value + scaled_index_19];
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656117 + human_record_offset] = *buffer_cursor;
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656118 + human_record_offset] = *state_address_8;
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656119 + human_record_offset] = *state_address_6;
              dword_140404A6C[5 * (int)dword_140404A6C[human_record_offset + 280656115] + 280656120 + human_record_offset] = *running_total_3;
              table_value_22 = dword_140404A6C[human_record_offset + 280656115] + 1;
              dword_140404A6C[human_record_offset + 280656115] = table_value_22;
            }
            ++iteration_count_5;
            ++buffer_cursor;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          running_total_2 += 5;
          result = dword_140404A6C[human_record_offset + 280655794];
          state_address_8 += 5;
          ++iteration_count_6;
          running_total_3 += 5;
          state_address_7 = saved_state_address;
        }
        while ( iteration_count_6 < (int)result );
        iteration_count = saved_iteration_count;
      }
      input_value = input_value_2;
      ++iteration_count;
      running_total += 5;
      saved_iteration_count = iteration_count;
      state_address_6 += 5;
      saved_call_status = result;
    }
    while ( saved_iteration_count_2 < (int)result );
  }
  return result;
}
#undef saved_state_address
#undef iteration_count_6
#undef saved_iteration_count
#undef saved_iteration_count_2
#undef input_value_2

//----- (00000001400B2D20) ----------------------------------------------------
__int64            sub_1400B2D20(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  __int64 record_word_offset;
  __int64 result;
  __int64 scaled_index;
  __int64 scaled_index_2;
  float state_address;
  float state_address_2;
  float state_address_3;
  float product_difference;
  float component_delta;
  float component_delta_2;
  float square_root;
  float limited_value;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;

  record_word_offset = 28664LL * a1;
  result = a2;
  scaled_index = record_word_offset + 312LL * a3;
  scaled_index_2 = record_word_offset + 312LL * a2;
  state_address = (float)(*(float *)((char *)&g_18329E580 + scaled_index_2)
              - *(float *)((char *)&g_18329E580 + scaled_index))
      * a6;
  state_address_2 = (float)(*(float *)((char *)&g_18329E584 + scaled_index_2)
              - *(float *)((char *)&g_18329E584 + scaled_index))
      * a6;
  state_address_3 = (float)(*(float *)((char *)&g_18329E588 + scaled_index_2)
              - *(float *)((char *)&g_18329E588 + scaled_index))
      * a6;
  product_difference = *a4 - state_address;
  component_delta = a4[1] - state_address_2;
  component_delta_2 = a4[2] - state_address_3;
  square_root = fsqrt((float)((float)(component_delta * component_delta) + (float)(product_difference * product_difference)) + (float)(component_delta_2 * component_delta_2));
  if ( square_root > a5 )
  {
    limited_value = (float)(fminf(square_root - a5, a5) * 0.5) + a5;
    if ( square_root == 0.0 )
    {
      scaled_ratio = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = product_difference * (float)(1.0 / square_root);
      scaled_ratio_2 = component_delta * (float)(1.0 / square_root);
      scaled_ratio_3 = component_delta_2 * (float)(1.0 / square_root);
    }
    *a4 = (float)(scaled_ratio * limited_value) + state_address;
    a4[1] = (float)(scaled_ratio_2 * limited_value) + state_address_2;
    a4[2] = (float)(scaled_ratio_3 * limited_value) + state_address_3;
  }
  return result;
}

//----- (00000001400B62E0) ----------------------------------------------------
__int64            sub_1400B62E0(int a1)
{
  __int64 float_word;
  signed int scaled_index;
  __int64 float_word_2;
  int masked_bits;
  int iteration_count;
  __int64 element_index;
  __int64 lookup_index;
  __int64 saved_item;
  bool comparison_result;
  __int64 item;
  __int64 saved_item_2;
  __int64 float_word_3;
  __int64 scaled_index_2;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  unsigned int parent;
  int human;
  int masked_bits_2;
  int masked_bits_3;
  int masked_bits_4;
  int comparison_result_2;
  __int64 item_2;
  __int64 scaled_index_3;
  __int64 masked_bits_5;
  unsigned int parent_2;
  int human_2;
  int masked_bits_6;
  __int64 item_3;
  __int64 scaled_index_4;
  signed int scaled_index_5;
  double angle;
  float weighted_sum;
  float scaled_value;
  float weighted_sum_2;
  float state_address;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float weighted_sum_3;
  float weighted_sum_4;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float weighted_sum_5;
  float weighted_sum_6;
  float state_address_2;
  float weighted_sum_7;
  float weighted_sum_8;
  float scaled_value_6;
  unsigned int parent_3;
  int human_3;
  float weighted_sum_9;
  float weighted_sum_10;
  unsigned int parent_4;
  int human_4;
  float weighted_sum_11;
  unsigned int *state_address_3;
  float *state_address_4;
  float weighted_sum_12;
  int saved_item_3;
  __int64 saved_iteration_count;
  float weighted_sum_13;
  int iteration_count_2;
  __int64 iteration_count_3;
  float saved_math_point_segment_distance_result;
  float component_delta;
  float weighted_sum_14;
  float weighted_sum_15;
  float *state_address_5;
  float math_point_segment_distance_result;
  unsigned int parent_5;
  int human_5;
  int masked_bits_7;
  unsigned int saved_human;
  unsigned int *state_address_6;
  float weighted_sum_16;
  float *state_address_7;
  signed int item_4;
  float weighted_sum_17;
  __int64 saved_iteration_count_2;
  int iteration_count_4;
  float saved_math_point_segment_distance_result_2;
  float combined_products_4;
  __int64 iteration_count_5;
  float weighted_sum_18;
  float math_point_segment_distance_result_2;
  __int64 table_value;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 masked_bits_8;
  float weighted_sum_19;
  float weighted_sum_20;
  unsigned int world_block_unknown_3008_origin_result;
  __int64 corporation;
  __int64 cached_element_index;
  __int64 scaled_index_10;
  int masked_bits_9;
  __int64 masked_bits_10;
  __int64 integer_difference;
  int physics_find_free_bond_result;
  __int64 scaled_index_11;
  __int64 masked_bits_11;
  int integer_difference_2;
  __int64 scaled_index_12;
  unsigned int masked_bits_12;
  __int64 scaled_index_13;
  float weighted_sum_21;
  unsigned int state_address_8;
  float weighted_sum_22;
  float state_address_9;
  float weighted_sum_23;
  float state_address_10;
  unsigned int float_word_4;
  unsigned int float_word_5;
  unsigned int state_address_11;
  unsigned int state_address_12;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  float weighted_sum_31;
  unsigned int float_word_6;
  float weighted_sum_32;
  float component_sum;
  bool comparison_result_3;
  unsigned int masked_bits_13;
  int masked_bits_14;
  int masked_bits_15;
  signed int item_5;
  signed int item_6;
  int slot;
  int human_6;
  signed int item_7;
  signed int iteration_count_6;
  int *buffer_cursor;
  __int64 scaled_index_14;
  __int64 table_value_2;
  signed int iteration_count_7;
  int *buffer_cursor_2;
  __int64 scaled_index_15;
  signed int iteration_count_8;
  int *buffer_cursor_3;
  __int64 scaled_index_16;
  signed int iteration_count_9;
  int *buffer_cursor_4;
  __int64 scaled_index_17;
  signed int iteration_count_10;
  int *buffer_cursor_5;
  __int64 scaled_index_18;
  signed int iteration_count_11;
  int *buffer_cursor_6;
  __int64 scaled_index_19;
  signed int iteration_count_12;
  int *buffer_cursor_7;
  __int64 scaled_index_20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B62E0[192];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 0)) /* [rsp+0h] */
#define saved_iteration_count_3 (*(int (*))(void *)(sr_frame_1400B62E0 + 32)) /* [rsp+20h] */
#define human_7 (*(unsigned int (*))(void *)(sr_frame_1400B62E0 + 36)) /* [rsp+24h] */
#define saved_element_index (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 40)) /* [rsp+28h] */
#define saved_iteration_count_4 (*(int (*))(void *)(sr_frame_1400B62E0 + 48)) /* [rsp+30h] */
#define item_8 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 56)) /* [rsp+38h] */
#define saved_iteration_count_5 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 64)) /* [rsp+40h] */
#define selection_flag (*(int (*))(void *)(sr_frame_1400B62E0 + 72)) /* [rsp+48h] */
#define cached_scaled_index (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 80)) /* [rsp+50h] */
#define saved_iteration_count_6 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 88)) /* [rsp+58h] */
#define float_buffer (*(float (*)[6])(void *)(sr_frame_1400B62E0 + 96)) /* [rsp+60h] */
#define scaled_index_21 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 120)) /* [rsp+78h] */
#define weighted_sum_33 (*(float (*))(void *)(sr_frame_1400B62E0 + 128)) /* [rsp+80h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400B62E0 + 132)) /* [rsp+84h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400B62E0 + 136)) /* [rsp+88h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1400B62E0 + 144)) /* [rsp+90h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400B62E0 + 160)) /* [rsp+A0h] */
#define frame_float_at_176 (*(float (*))(void *)(sr_frame_1400B62E0 + 176)) /* [rsp+B0h] */
#define unused_frame_slot_184 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 184)) /* [rsp+B8h] */

  float_word = a1;
  scaled_index = 0;
  float_word_2 = 28664 * float_word;
  human_7 = float_word;
  scaled_index_21 = 28664 * float_word;
  if ( dword_140404A6C[7166 * float_word + 280651305] != -1 )
    scaled_index = dword_140404A6C[7166 * float_word + 280651305];
  masked_bits = *(unsigned int *)((char *)&g_1832A5050 + float_word_2);
  if ( masked_bits > 0 )
    *(unsigned int *)((char *)&g_1832A5050 + float_word_2) = masked_bits - 1;
  iteration_count = 0;
  element_index = 0;
  lookup_index = scaled_index;
  selection_flag = 0;
  saved_iteration_count_3 = 0;
  cached_scaled_index = scaled_index;
  saved_element_index = 0;
  do
  {
    saved_item = float_word_2 + 40 * element_index;
    comparison_result = *(int *)((char *)&g_1832A4DD8 + saved_item) <= 0;
    item_8 = saved_item;
    if ( !comparison_result )
    {
      item = *(int *)((char *)&g_1832A4DDC + saved_item);
      saved_item_2 = item;
      float_word_3 = float_word_2 - 936 * element_index;
      scaled_index_2 = 1760 * item;
      combined_products = *(float *)((char *)&g_18329F028 + float_word_3) - *(float *)&dword_140404A6C[1760 * item + 278845917];
      combined_products_2 = *(float *)((char *)&g_18329F02C + float_word_3) - *(float *)&dword_140404A6C[1760 * item + 278845918];
      combined_products_3 = *(float *)((char *)&g_18329F024 + float_word_3) - *(float *)&dword_140404A6C[1760 * item + 278845916];
      if ( fsqrt((float)((float)(combined_products * combined_products) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products_2 * combined_products_2)) > 1.75
        && (unsigned int)item <= 0x3FF )
      {
        parent = dword_140404A6C[scaled_index_2 + 278845903];
        if ( parent == -1 )
        {
          human = dword_140404A6C[scaled_index_2 + 278845902];
          if ( human == -1 )
            goto LABEL_15;
          sr_world_take_item(item, human, dword_140404A6C[scaled_index_2 + 278845904]);
        }
        else
        {
          sr_world_detach_item(item, parent);
        }
        if ( game_connected )
          ++dword_140404A6C[saved_item_2 + 280648157];
      }
    }
LABEL_15:
    masked_bits_2 = *(unsigned int *)((char *)&g_18329E51C + float_word_2);
    saved_iteration_count_4 = 0;
    if ( (masked_bits_2 & 1) != 0 )
    {
      masked_bits_3 = masked_bits_2 & 0x10;
      if ( iteration_count )
      {
        if ( iteration_count == 1 )
          saved_iteration_count_4 = masked_bits_3 != 0;
      }
      else
      {
        saved_iteration_count_4 = masked_bits_3 == 0;
      }
    }
    masked_bits_4 = *(unsigned int *)((char *)&g_18329E51C + float_word_2);
    comparison_result_2 = ((masked_bits_4 & 0x40) != 0) - 1;
    if ( (masked_bits_4 & 0x80u) != 0 )
      comparison_result_2 = 1;
    if ( (masked_bits_4 & 0x100) != 0 )
      comparison_result_2 = 2;
    if ( (masked_bits_4 & 0x200) != 0 )
      comparison_result_2 = 3;
    if ( (masked_bits_4 & 0x400) != 0 )
      comparison_result_2 = 4;
    comparison_result = *(int *)((char *)&g_1832A5058 + float_word_2) < 50;
    LODWORD(saved_iteration_count_5) = comparison_result_2;
    if ( comparison_result && *(int *)((char *)&g_1832A4DD8 + saved_item) > 0 )
    {
      item_2 = *(int *)((char *)&g_1832A4DDC + saved_item);
      if ( (unsigned int)item_2 <= 0x3FF )
      {
        scaled_index_3 = 1760 * item_2;
        masked_bits_5 = *(int *)((char *)&g_1832A4DDC + saved_item);
        parent_2 = dword_140404A6C[1760 * item_2 + 278845903];
        if ( parent_2 == -1 )
        {
          human_2 = dword_140404A6C[scaled_index_3 + 278845902];
          if ( human_2 == -1 )
            goto LABEL_37;
          sr_world_take_item(item_2, human_2, dword_140404A6C[scaled_index_3 + 278845904]);
        }
        else
        {
          sr_world_detach_item(item_2, parent_2);
        }
        if ( game_connected )
          ++dword_140404A6C[masked_bits_5 + 280648157];
      }
    }
LABEL_37:
    masked_bits_6 = *(unsigned int *)((char *)&g_1832A4DD8 + saved_item);
    if ( masked_bits_6 > 0 )
    {
      item_3 = *(int *)((char *)&g_1832A4DDC + saved_item);
      scaled_index_4 = 1760 * item_3;
      scaled_index_5 = dword_140404A6C[1760 * item_3 + 278845898];
      if ( scaled_index_5 == 28 )
      {
        *(_QWORD *)&angle = *(unsigned int *)((char *)&g_18329E430 + float_word_2);
        frame_float_at_176 = 1.0;
        matrix = xmmword_140278D30;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&dword_1402F6188, angle);
        weighted_sum = *((float *)&matrix + 1);
        scaled_value = *(float *)&matrix;
        weighted_sum_2 = *((float *)&matrix + 2);
        scaled_index_5 = dword_140404A6C[scaled_index_4 + 278845898];
        state_address = (float)(*((float *)&matrix + 2) * 0.5) + *(float *)&dword_140404A6C[scaled_index_4 + 278846087];
        *(float *)&angle = (float)(*(float *)&matrix * 0.5) + *(float *)&dword_140404A6C[scaled_index_4 + 278846085];
        scaled_index_6 = float_word_2 + 56 * element_index;
        scaled_index_7 = 1268LL * scaled_index_5;
        *(float *)((char *)&g_1832A4F1C + scaled_index_6) = (float)(*((float *)&matrix + 1) * 0.5)
                                                              + *(float *)&dword_140404A6C[scaled_index_4 + 278846086];
        *(float *)((char *)&g_1832A4F20 + scaled_index_6) = state_address;
        weighted_sum_3 = *((float *)&cached_xmmword_140278d30 + 1);
        *(unsigned int *)((char *)&g_1832A4F18 + scaled_index_6) = LODWORD(angle);
        weighted_sum_4 = *(float *)&dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + saved_item) + 278521317 + scaled_index_7];
        scaled_value_2 = weighted_sum * weighted_sum_4;
        scaled_value_3 = scaled_value * weighted_sum_4;
        scaled_value_4 = weighted_sum_2 * weighted_sum_4;
        scaled_value_5 = *(float *)&cached_xmmword_140278d30;
        weighted_sum_5 = scaled_value_3 + *(float *)&angle;
        *(float *)((char *)&g_1832A4F18 + scaled_index_6) = weighted_sum_5;
        *(float *)((char *)&g_1832A4F1C + scaled_index_6) = scaled_value_2
                                                              + *(float *)((char *)&g_1832A4F1C + scaled_index_6);
        weighted_sum_6 = *((float *)&matrix + 3);
        *(float *)((char *)&g_1832A4F20 + scaled_index_6) = scaled_value_4
                                                              + *(float *)((char *)&g_1832A4F20 + scaled_index_6);
        LODWORD(angle) = dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + saved_item) + 278521318 + scaled_index_7];
        state_address_2 = (float)(weighted_sum_6 * *(float *)&angle) + weighted_sum_5;
        *(float *)((char *)&g_1832A4F18 + scaled_index_6) = state_address_2;
        *(float *)((char *)&g_1832A4F1C + scaled_index_6) = (float)(scaled_value_5 * *(float *)&angle)
                                                              + *(float *)((char *)&g_1832A4F1C + scaled_index_6);
        weighted_sum_7 = *((float *)&cached_xmmword_140278d30 + 2);
        *(float *)((char *)&g_1832A4F20 + scaled_index_6) = (float)(weighted_sum_3 * *(float *)&angle)
                                                              + *(float *)((char *)&g_1832A4F20 + scaled_index_6);
        LODWORD(angle) = dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + saved_item) + 278521319 + scaled_index_7];
        weighted_sum_8 = *((float *)&cached_xmmword_140278d30 + 3) * *(float *)&angle;
        *(float *)((char *)&g_1832A4F18 + scaled_index_6) = (float)(weighted_sum_7 * *(float *)&angle) + state_address_2;
        scaled_value_6 = frame_float_at_176 * *(float *)&angle;
        *(float *)((char *)&g_1832A4F1C + scaled_index_6) = weighted_sum_8
                                                              + *(float *)((char *)&g_1832A4F1C + scaled_index_6);
        *(float *)((char *)&g_1832A4F20 + scaled_index_6) = scaled_value_6
                                                              + *(float *)((char *)&g_1832A4F20 + scaled_index_6);
        *(unsigned int *)((char *)&g_1832A4F24 + scaled_index_6) = *(unsigned int *)((char *)&g_18329E430
                                                                                       + float_word_2);
      }
      if ( scaled_index_5 == 36
        && (*(unsigned int *)((char *)&g_18329E51C + float_word_2) & 0x800) == 0
        && (unsigned int)item_3 <= 0x3FF )
      {
        parent_3 = dword_140404A6C[scaled_index_4 + 278845903];
        if ( parent_3 == -1 )
        {
          human_3 = dword_140404A6C[scaled_index_4 + 278845902];
          if ( human_3 == -1 )
            goto LABEL_49;
          sr_world_take_item(item_3, human_3, dword_140404A6C[scaled_index_4 + 278845904]);
        }
        else
        {
          sr_world_detach_item(item_3, parent_3);
        }
        if ( game_connected )
          ++dword_140404A6C[item_3 + 280648157];
      }
LABEL_49:
      if ( dword_140404A6C[scaled_index_4 + 278845898] != 39 )
        goto LABEL_57;
      weighted_sum_9 = *(float *)((char *)&g_18329E578 + float_word_2) + *(float *)((char *)&g_18329E578 + float_word_2);
      weighted_sum_10 = *(float *)((char *)&g_18329E57C + float_word_2) + *(float *)((char *)&g_18329E57C + float_word_2);
      weighted_sum_33 = *(float *)((char *)&g_18329E52C + float_word_2)
           - (float)(*(float *)((char *)&g_18329E574 + float_word_2)
                   + *(float *)((char *)&g_18329E574 + float_word_2));
      unused_written_slot = *(float *)((char *)&g_18329E530 + float_word_2) - weighted_sum_9;
      unused_written_slot_2 = *(float *)((char *)&g_18329E534 + float_word_2) - weighted_sum_10;
      if ( sr_math_point_segment_distance(
             (float *)((char *)&g_18329E52C + float_word_2),
             &weighted_sum_33,
             (float *)&dword_140404A6C[scaled_index_4 + 278845916]) <= 1.0 )
      {
        if ( (*((_BYTE *)&g_18329E51C + float_word_2) & 1) != 0
          || (*((_BYTE *)&g_18329E520 + float_word_2) & 1) == 0
          || (unsigned int)item_3 > 0x3FF )
        {
          goto LABEL_57;
        }
        parent_4 = dword_140404A6C[scaled_index_4 + 278845903];
        if ( parent_4 == -1 )
          goto LABEL_53;
      }
      else
      {
        if ( (unsigned int)item_3 > 0x3FF )
          goto LABEL_57;
        parent_4 = dword_140404A6C[scaled_index_4 + 278845903];
        if ( parent_4 == -1 )
        {
LABEL_53:
          human_4 = dword_140404A6C[scaled_index_4 + 278845902];
          if ( human_4 == -1 )
            goto LABEL_57;
          sr_world_take_item(item_3, human_4, dword_140404A6C[scaled_index_4 + 278845904]);
          goto LABEL_55;
        }
      }
      sr_world_detach_item(item_3, parent_4);
LABEL_55:
      if ( game_connected )
        ++dword_140404A6C[item_3 + 280648157];
LABEL_57:
      if ( dword_140404A6C[scaled_index_4 + 278845898] - 19 > 5
        || (*((_BYTE *)&g_18329E51C + float_word_2) & 1) != 0
        || (*((_BYTE *)&g_18329E520 + float_word_2) & 1) == 0 )
      {
        goto LABEL_84;
      }
      weighted_sum_11 = *(float *)((char *)&g_18329E8D4 + float_word_2);
      state_address_3 = &g_182BBB194;
      state_address_4 = (float *)&g_182BBB1DC;
      weighted_sum_12 = *(float *)((char *)&g_18329E91C + float_word_2) * 1.5;
      saved_item_3 = -1;
      saved_iteration_count = -1;
      weighted_sum_13 = *(float *)((char *)&g_18329E920 + float_word_2) * 1.5;
      iteration_count_2 = 0;
      LODWORD(item_8) = -1;
      iteration_count_3 = 0;
      saved_math_point_segment_distance_result = 0.5;
      saved_iteration_count_6 = -1;
      component_delta = weighted_sum_11 - weighted_sum_12;
      weighted_sum_14 = *(float *)((char *)&g_18329E924 + float_word_2) * 1.5;
      float_buffer[0] = component_delta;
      weighted_sum_15 = *(float *)((char *)&g_18329E8D8 + float_word_2);
      state_address_5 = (float *)((char *)&g_18329E8D4 + float_word_2);
      float_buffer[1] = weighted_sum_15 - weighted_sum_13;
      float_buffer[2] = state_address_5[2] - weighted_sum_14;
      do
      {
        if ( *(state_address_3 - 5) && *state_address_3 == 39 && state_address_3[4] == -1 )
        {
          math_point_segment_distance_result = sr_math_point_segment_distance(state_address_5, float_buffer, state_address_4);
          if ( math_point_segment_distance_result >= saved_math_point_segment_distance_result )
          {
            saved_item_3 = item_8;
            saved_iteration_count = saved_iteration_count_6;
          }
          else
          {
            saved_item_3 = iteration_count_2;
            saved_iteration_count = iteration_count_3;
            LODWORD(item_8) = iteration_count_2;
            saved_math_point_segment_distance_result = math_point_segment_distance_result;
            saved_iteration_count_6 = iteration_count_3;
          }
        }
        ++iteration_count_2;
        state_address_4 += 1760;
        ++iteration_count_3;
        state_address_3 += 1760;
      }
      while ( iteration_count_2 < 1024 );
      float_word_2 = scaled_index_21;
      if ( saved_item_3 == -1 || dword_140404A6C[1760 * saved_iteration_count + 278845906] )
      {
LABEL_83:
        comparison_result_2 = saved_iteration_count_5;
        element_index = saved_element_index;
LABEL_84:
        masked_bits_7 = *(unsigned int *)((char *)&g_18329E51C + float_word_2);
        if ( (masked_bits_7 & 0x1000) != 0 )
          dword_140404A6C[scaled_index_4 + 278845977] |= 2u;
        iteration_count = saved_iteration_count_3;
        saved_human = human_7;
        if ( (masked_bits_7 & 0x1020) == 0 && comparison_result_2 == -1 && saved_iteration_count_4 )
          dword_140404A6C[scaled_index_4 + 278845977] |= 1u;
        goto LABEL_152;
      }
      if ( (unsigned int)item_3 <= 0x3FF )
      {
        parent_5 = dword_140404A6C[scaled_index_4 + 278845903];
        if ( parent_5 != -1 )
        {
          sr_world_detach_item(item_3, parent_5);
          goto LABEL_80;
        }
        human_5 = dword_140404A6C[scaled_index_4 + 278845902];
        if ( human_5 != -1 )
        {
          sr_world_take_item(item_3, human_5, dword_140404A6C[scaled_index_4 + 278845904]);
LABEL_80:
          if ( game_connected )
            ++dword_140404A6C[item_3 + 280648157];
        }
      }
      sr_item_transfer(item_8, item_3, -1, 0);
      goto LABEL_83;
    }
    if ( !iteration_count
      && (*((_BYTE *)&g_18329E51C + float_word_2) & 1) == 0
      && (*((_BYTE *)&g_18329E520 + float_word_2) & 1) != 0
      && !masked_bits_6 )
    {
      state_address_6 = &g_182BBB1A4;
      weighted_sum_16 = *(float *)((char *)&g_18329E91C + float_word_2) * 1.5;
      state_address_7 = (float *)&g_182BBB1DC;
      item_4 = -1;
      weighted_sum_17 = *(float *)((char *)&g_18329E920 + float_word_2) * 1.5;
      saved_iteration_count_2 = -1;
      iteration_count_4 = 0;
      saved_iteration_count_4 = -1;
      saved_math_point_segment_distance_result_2 = 0.5;
      combined_products_4 = *(float *)((char *)&g_18329E8D4 + float_word_2) - weighted_sum_16;
      saved_iteration_count_5 = -1;
      iteration_count_5 = 0;
      weighted_sum_18 = *(float *)((char *)&g_18329E924 + float_word_2) * 1.5;
      weighted_sum_33 = combined_products_4;
      unused_written_slot = *(float *)((char *)&g_18329E8D8 + float_word_2) - weighted_sum_17;
      unused_written_slot_2 = *(float *)((char *)&g_18329E8DC + float_word_2) - weighted_sum_18;
      do
      {
        if ( *(state_address_6 - 9) && *state_address_6 == -1 )
        {
          math_point_segment_distance_result_2 = sr_math_point_segment_distance((float *)((char *)&g_18329E8D4 + float_word_2), &weighted_sum_33, state_address_7);
          if ( math_point_segment_distance_result_2 < saved_math_point_segment_distance_result_2 && ((table_value = (int)state_address_6[1], (_DWORD)table_value == -1) || dword_140404A6C[1760 * table_value + 278845902] == -1) )
          {
            item_4 = iteration_count_4;
            saved_iteration_count_2 = iteration_count_5;
            saved_iteration_count_4 = iteration_count_4;
            saved_math_point_segment_distance_result_2 = math_point_segment_distance_result_2;
            saved_iteration_count_5 = iteration_count_5;
          }
          else
          {
            saved_iteration_count_2 = saved_iteration_count_5;
            item_4 = saved_iteration_count_4;
          }
        }
        ++iteration_count_4;
        state_address_7 += 1760;
        ++iteration_count_5;
        state_address_6 += 1760;
      }
      while ( iteration_count_4 < 1024 );
      if ( item_4 != -1 )
      {
        scaled_index_8 = 1760 * saved_iteration_count_2;
        scaled_index_9 = (int)dword_140404A6C[1760 * saved_iteration_count_2 + 278845903];
        if ( (_DWORD)scaled_index_9 == -1 )
          goto LABEL_107;
        if ( dword_140404A6C[1760 * scaled_index_9 + 278845898] == 39 )
        {
          sr_item_transfer(item_4, -1, -1, 0);
LABEL_107:
          saved_item = item_8;
          element_index = saved_element_index;
          iteration_count = saved_iteration_count_3;
          lookup_index = cached_scaled_index;
          masked_bits_8 = float_word_2 + 48LL * *(int *)((char *)&g_1832A5100 + float_word_2);
          if ( dword_140404A6C[scaled_index_8 + 278845898] == 39 )
            *(unsigned int *)((char *)&g_1832A5104 + masked_bits_8) = 4;
          else
            *(unsigned int *)((char *)&g_1832A5104 + masked_bits_8) = 3;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + float_word_2)
                                                   + 280658352]
                          + float_word_2) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + float_word_2)
                                                   + 280658353]
                          + float_word_2) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + float_word_2)
                                                   + 280658343]
                          + float_word_2) = 0;
          *(unsigned int *)((char *)&g_1832A5100 + float_word_2) = ((unsigned __int8)*(unsigned int *)((char *)&g_1832A5100 + float_word_2)
                                                                       + 1)
                                                                      & 7;
          goto LABEL_112;
        }
      }
      lookup_index = cached_scaled_index;
      iteration_count = saved_iteration_count_3;
      element_index = saved_element_index;
      saved_item = item_8;
    }
LABEL_112:
    if ( comparison_result_2 == -1
      && !*(unsigned int *)((char *)&g_1832A4DD8 + saved_item)
      && !*(unsigned int *)((char *)&dword_140404A6C[14 * element_index + 280658223] + float_word_2)
      && (*((_BYTE *)&g_18329E51C + float_word_2) & 1) == 0
      && (*((_BYTE *)&g_18329E520 + float_word_2) & 1) != 0
      && !selection_flag )
    {
      weighted_sum_19 = *(float *)((char *)&g_18329E920 + float_word_2) * 2.5;
      weighted_sum_20 = *(float *)((char *)&g_18329E924 + float_word_2) * 2.5;
      weighted_sum_33 = *(float *)((char *)&g_18329E8D4 + float_word_2)
           - (float)(*(float *)((char *)&g_18329E91C + float_word_2) * 2.5);
      unused_written_slot = *(float *)((char *)&g_18329E8D8 + float_word_2) - weighted_sum_19;
      unused_written_slot_2 = *(float *)((char *)&g_18329E8DC + float_word_2) - weighted_sum_20;
      if ( (unsigned int)sub_1400DC050((float *)((char *)&g_18329E8D4 + float_word_2), &weighted_sum_33, 0) )
      {
        if ( item_hit_layer != -1 )
        {
          world_block_unknown_3008_origin_result = sr_world_block_unknown_3008_origin(
                  item_hit_layer,
                  g_151A848D8,
                  g_151A848DC,
                  g_151A848E0)
              & 0xFCFFFFFF;
          if ( game_state == 2 && game_type != 5 )
          {
            corporation = (int)dword_140404A6C[3597 * lookup_index + 71856286];
            if ( (unsigned int)corporation <= 5 && sr_corporation_contains_point((float *)((char *)&g_18329E388 + float_word_2), corporation, 4.0) )
            {
              if ( item_hit_unknown_7c != 6
                && (world_block_unknown_3008_origin_result < (g_14500CA14 | 0x80000000) || world_block_unknown_3008_origin_result > (g_14500CA20 | 0x80000000))
                || dword_140404A6C[5873 * corporation + 283831509] )
              {
                if ( world_block_unknown_3008_origin_result >= (g_14500CA14 | 0x80000000)
                  && world_block_unknown_3008_origin_result <= (g_14500CA20 | 0x80000000)
                  && dword_140404A6C[5873 * corporation + 283831509] == 1 )
                {
                  sr_event_corporation_door(corporation, 0);
                  selection_flag = 1;
                  dword_140404A6C[5873 * corporation + 283831509] = 0;
                }
              }
              else
              {
                sr_event_corporation_door(corporation, 1u);
                selection_flag = 1;
                dword_140404A6C[5873 * corporation + 283831509] = 1;
              }
            }
          }
        }
      }
    }
    cached_element_index = saved_element_index;
    if ( (*(unsigned int *)((char *)&g_18329E51C + float_word_2) & 0x800) == 0 )
      *(unsigned int *)((char *)&dword_140404A6C[14 * saved_element_index + 280658223] + float_word_2) = 0;
    scaled_index_10 = float_word_2 + 56 * cached_element_index;
    masked_bits_9 = *(unsigned int *)((char *)&g_1832A4F28 + scaled_index_10);
    if ( !masked_bits_9 || (masked_bits_10 = *(int *)((char *)&g_1832A4F2C + scaled_index_10), (_DWORD)masked_bits_10 == -1) )
    {
      saved_human = human_7;
      goto LABEL_151;
    }
    if ( !dword_140404A6C[7166 * masked_bits_10 + 280651303] )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + scaled_index_10) = 0;
      masked_bits_9 = 0;
    }
    integer_difference = 3 - cached_element_index;
    physics_find_free_bond_result = sr_physics_find_free_bond();
    if ( physics_find_free_bond_result == -1 )
    {
      saved_human = human_7;
LABEL_150:
      iteration_count = saved_iteration_count_3;
LABEL_151:
      element_index = saved_element_index;
      goto LABEL_152;
    }
    scaled_index_11 = 61LL * physics_find_free_bond_result;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_11 + 486149253]), 0, 0xF4u);
    saved_human = human_7;
    masked_bits_11 = *(int *)((char *)&g_1832A4F34 + scaled_index_10);
    dword_140404A6C[scaled_index_11 + 486149293] = masked_bits_10;
    integer_difference_2 = 3 - saved_iteration_count_3;
    dword_140404A6C[scaled_index_11 + 486149291] = saved_human;
    dword_140404A6C[scaled_index_11 + 486149294] = masked_bits_11;
    scaled_index_12 = float_word_2 + 936 * integer_difference;
    dword_140404A6C[scaled_index_11 + 486149292] = 3 * integer_difference_2;
    masked_bits_12 = *(unsigned int *)((char *)&g_1832A4F38 + scaled_index_10);
    dword_140404A6C[scaled_index_11 + 486149281] = 1044381696;
    dword_140404A6C[scaled_index_11 + 486149282] = 1044381696;
    dword_140404A6C[scaled_index_11 + 486149257] = 0;
    scaled_index_13 = 28664 * masked_bits_10 + 312 * masked_bits_11;
    *(_QWORD *)&dword_140404A6C[scaled_index_11 + 486149267] = 0;
    dword_140404A6C[scaled_index_11 + 486149269] = 0;
    dword_140404A6C[scaled_index_11 + 486149270] = masked_bits_12;
    dword_140404A6C[scaled_index_11 + 486149271] = *(unsigned int *)((char *)&g_1832A4F3C + scaled_index_10);
    dword_140404A6C[scaled_index_11 + 486149272] = *(unsigned int *)((char *)&g_1832A4F40 + scaled_index_10);
    weighted_sum_21 = *(float *)&dword_140404A6C[scaled_index_11 + 486149267];
    *(float *)&state_address_8 = (float)((float)(weighted_sum_21 * *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_12))
                            + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149268]
                                    * *(float *)((char *)&g_18329E568 + scaled_index_12)))
                    + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149269]
                            * *(float *)((char *)&g_18329E574 + scaled_index_12));
    weighted_sum_22 = *(float *)&dword_140404A6C[scaled_index_11 + 486149269] * *(float *)((char *)&g_18329E578 + scaled_index_12);
    state_address_9 = (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149268] * *(float *)((char *)&g_18329E570 + scaled_index_12))
         + (float)(weighted_sum_21 * *(float *)((char *)&g_18329E564 + scaled_index_12));
    weighted_sum_23 = *(float *)&dword_140404A6C[scaled_index_11 + 486149269] * *(float *)((char *)&g_18329E57C + scaled_index_12);
    state_address_10 = (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149268] * *(float *)((char *)(unsigned int *)&g_18329E56C + scaled_index_12))
         + (float)(weighted_sum_21 * *(float *)((char *)&g_18329E560 + scaled_index_12));
    dword_140404A6C[scaled_index_11 + 486149267] = state_address_8;
    *(float *)&float_word_4 = state_address_9 + weighted_sum_23;
    *(float *)&float_word_5 = state_address_10 + weighted_sum_22;
    dword_140404A6C[scaled_index_11 + 486149269] = float_word_4;
    dword_140404A6C[scaled_index_11 + 486149268] = float_word_5;
    *(float *)&state_address_11 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149271]
                                    * *(float *)((char *)&g_18329E568 + scaled_index_13))
                            + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149270]
                                    * *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_13)))
                    + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149272]
                            * *(float *)((char *)&g_18329E574 + scaled_index_13));
    *(float *)&state_address_12 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149271]
                                    * *(float *)((char *)(unsigned int *)&g_18329E56C + scaled_index_13))
                            + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149270]
                                    * *(float *)((char *)&g_18329E560 + scaled_index_13)))
                    + (float)(*(float *)&dword_140404A6C[scaled_index_11 + 486149272]
                            * *(float *)((char *)&g_18329E578 + scaled_index_13));
    weighted_sum_24 = *(float *)&dword_140404A6C[scaled_index_11 + 486149271] * *(float *)((char *)&g_18329E570 + scaled_index_13);
    weighted_sum_25 = *(float *)&float_word_4 + *(float *)((char *)&g_18329E534 + scaled_index_12);
    weighted_sum_26 = *(float *)&dword_140404A6C[scaled_index_11 + 486149270] * *(float *)((char *)&g_18329E564 + scaled_index_13);
    weighted_sum_27 = *(float *)&dword_140404A6C[scaled_index_11 + 486149272] * *(float *)((char *)&g_18329E57C + scaled_index_13);
    weighted_sum_28 = *(float *)&state_address_8 + *(float *)((char *)&g_18329E52C + scaled_index_12);
    weighted_sum_29 = *(float *)&float_word_5 + *(float *)((char *)&g_18329E530 + scaled_index_12);
    dword_140404A6C[scaled_index_11 + 486149271] = state_address_12;
    weighted_sum_30 = *(float *)&state_address_12 + *(float *)((char *)&g_18329E530 + scaled_index_13);
    dword_140404A6C[scaled_index_11 + 486149270] = state_address_11;
    weighted_sum_31 = *(float *)&state_address_11 + *(float *)((char *)&g_18329E52C + scaled_index_13);
    unused_written_slot_2 = weighted_sum_25;
    *(float *)&float_word_6 = (float)(weighted_sum_24 + weighted_sum_26) + weighted_sum_27;
    dword_140404A6C[scaled_index_11 + 486149272] = float_word_6;
    if ( fsqrt(
           (float)((float)((float)(weighted_sum_30 - weighted_sum_29) * (float)(weighted_sum_30 - weighted_sum_29))
                 + (float)((float)(weighted_sum_31 - weighted_sum_28) * (float)(weighted_sum_31 - weighted_sum_28)))
         + (float)((float)((float)(*(float *)&float_word_6 + *(float *)((char *)&g_18329E534 + scaled_index_13)) - weighted_sum_25)
                 * (float)((float)(*(float *)&float_word_6 + *(float *)((char *)&g_18329E534 + scaled_index_13)) - weighted_sum_25))) > 0.125 )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + scaled_index_10) = 0;
      masked_bits_9 = 0;
    }
    if ( *(int *)((char *)&g_18329E324 + float_word_2) < 8 )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + scaled_index_10) = 0;
      masked_bits_9 = 0;
    }
    weighted_sum_32 = *(float *)((char *)&g_18329E5AC + scaled_index_13);
    weighted_sum_33 = *(float *)((char *)&g_18329E5AC + scaled_index_12);
    component_sum = weighted_sum_32 + weighted_sum_33;
    unused_written_slot = weighted_sum_32;
    *(float *)&dword_140404A6C[scaled_index_11 + 486149274] = (float)(1.0 / (float)(weighted_sum_32 + weighted_sum_33)) * weighted_sum_33;
    *(float *)&dword_140404A6C[scaled_index_11 + 486149273] = (float)(1.0 / component_sum) * weighted_sum_32;
    if ( !masked_bits_9 )
      goto LABEL_150;
    comparison_result_3 = (game_tick & 3) == 0;
    masked_bits_13 = *(unsigned int *)((char *)&g_18329E528 + scaled_index_12);
    dword_140404A6C[scaled_index_11 + 486149253] = 1;
    dword_140404A6C[scaled_index_11 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[scaled_index_11 + 486149256] = 0;
    dword_140404A6C[scaled_index_11 + 486149291] = masked_bits_13;
    dword_140404A6C[scaled_index_11 + 486149292] = *(unsigned int *)((char *)&g_18329E528 + scaled_index_13);
    dword_140404A6C[scaled_index_11 + 486149281] = 1031798784;
    dword_140404A6C[scaled_index_11 + 486149282] = 1044381696;
    if ( !comparison_result_3 )
      goto LABEL_150;
    masked_bits_14 = *(unsigned int *)((char *)&g_18329E324 + float_word_2);
    element_index = saved_element_index;
    iteration_count = saved_iteration_count_3;
    if ( masked_bits_14 > 0 )
      *(unsigned int *)((char *)&g_18329E324 + float_word_2) = masked_bits_14 - 1;
LABEL_152:
    lookup_index = cached_scaled_index;
    ++iteration_count;
    ++element_index;
    saved_iteration_count_3 = iteration_count;
    saved_element_index = element_index;
  }
  while ( iteration_count < 2 );
  if ( (*(unsigned int *)((char *)&g_18329E51C + float_word_2) & 0x2000) != 0
    && (*(unsigned int *)((char *)&g_18329E520 + float_word_2) & 0x2000) == 0 )
  {
    masked_bits_15 = *(unsigned int *)((char *)&g_1832A4DD8 + float_word_2);
    if ( masked_bits_15 <= 0 )
    {
      if ( *(int *)((char *)&g_1832A4E00 + float_word_2) > 0 && !masked_bits_15 )
      {
        item_7 = *(unsigned int *)((char *)&g_1832A4E04 + float_word_2);
        slot = 0;
        human_6 = saved_human;
        goto LABEL_163;
      }
    }
    else
    {
      item_5 = *(unsigned int *)((char *)&g_1832A4DDC + float_word_2);
      if ( *(unsigned int *)((char *)&g_1832A4E00 + float_word_2) )
      {
        item_6 = *(unsigned int *)((char *)&g_1832A4E04 + float_word_2);
        sr_item_transfer(item_5, -1, -1, 0);
        sr_item_transfer(item_6, -1, human_7, 0);
      }
      slot = 1;
      human_6 = human_7;
      item_7 = item_5;
LABEL_163:
      sr_item_transfer(item_7, -1, human_6, slot);
    }
  }
  iteration_count_6 = 0;
  if ( *(int *)((char *)&g_1832A4DD8 + float_word_2) > 0 )
  {
    buffer_cursor = (int *)((char *)&g_1832A4DDC + float_word_2);
    do
    {
      scaled_index_14 = 1760LL * *buffer_cursor;
      table_value_2 = (int)dword_140404A6C[scaled_index_14 + 278845898];
      dword_140404A6C[scaled_index_14 + 278845895] = 0;
      if ( dword_140404A6C[1268 * table_value_2 + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_6;
      ++buffer_cursor;
    }
    while ( iteration_count_6 < *(int *)((char *)&g_1832A4DD8 + float_word_2) );
  }
  iteration_count_7 = 0;
  if ( *(int *)((char *)&g_1832A4E00 + float_word_2) > 0 )
  {
    buffer_cursor_2 = (int *)((char *)&g_1832A4E04 + float_word_2);
    do
    {
      scaled_index_15 = 1760LL * *buffer_cursor_2;
      dword_140404A6C[scaled_index_15 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_15 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_7;
      ++buffer_cursor_2;
    }
    while ( iteration_count_7 < *(int *)((char *)&g_1832A4E00 + float_word_2) );
  }
  iteration_count_8 = 0;
  if ( *(int *)((char *)&g_1832A4E28 + float_word_2) > 0 )
  {
    buffer_cursor_3 = (int *)((char *)&g_1832A4E2C + float_word_2);
    do
    {
      scaled_index_16 = 1760LL * *buffer_cursor_3;
      dword_140404A6C[scaled_index_16 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_16 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_8;
      ++buffer_cursor_3;
    }
    while ( iteration_count_8 < *(int *)((char *)&g_1832A4E28 + float_word_2) );
  }
  iteration_count_9 = 0;
  if ( *(int *)((char *)&g_1832A4E50 + float_word_2) > 0 )
  {
    buffer_cursor_4 = (int *)((char *)&g_1832A4E54 + float_word_2);
    do
    {
      scaled_index_17 = 1760LL * *buffer_cursor_4;
      dword_140404A6C[scaled_index_17 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_17 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_9;
      ++buffer_cursor_4;
    }
    while ( iteration_count_9 < *(int *)((char *)&g_1832A4E50 + float_word_2) );
  }
  iteration_count_10 = 0;
  if ( *(int *)((char *)&g_1832A4E78 + float_word_2) > 0 )
  {
    buffer_cursor_5 = (int *)((char *)&g_1832A4E7C + float_word_2);
    do
    {
      scaled_index_18 = 1760LL * *buffer_cursor_5;
      dword_140404A6C[scaled_index_18 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_18 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_10;
      ++buffer_cursor_5;
    }
    while ( iteration_count_10 < *(int *)((char *)&g_1832A4E78 + float_word_2) );
  }
  iteration_count_11 = 0;
  if ( *(int *)((char *)&g_1832A4EA0 + float_word_2) > 0 )
  {
    buffer_cursor_6 = (int *)((char *)&g_1832A4EA4 + float_word_2);
    do
    {
      scaled_index_19 = 1760LL * *buffer_cursor_6;
      dword_140404A6C[scaled_index_19 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_19 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_11;
      ++buffer_cursor_6;
    }
    while ( iteration_count_11 < *(int *)((char *)&g_1832A4EA0 + float_word_2) );
  }
  iteration_count_12 = 0;
  if ( *(int *)((char *)&g_1832A4EC8 + float_word_2) > 0 )
  {
    buffer_cursor_7 = (int *)((char *)&g_1832A4ECC + float_word_2);
    do
    {
      scaled_index_20 = 1760LL * *buffer_cursor_7;
      dword_140404A6C[scaled_index_20 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[scaled_index_20 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + float_word_2) = 0;
      ++iteration_count_12;
      ++buffer_cursor_7;
    }
    while ( iteration_count_12 < *(int *)((char *)&g_1832A4EC8 + float_word_2) );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef saved_iteration_count_3
#undef human_7
#undef saved_element_index
#undef saved_iteration_count_4
#undef item_8
#undef saved_iteration_count_5
#undef selection_flag
#undef cached_scaled_index
#undef saved_iteration_count_6
#undef float_buffer
#undef scaled_index_21
#undef weighted_sum_33
#undef unused_written_slot
#undef unused_written_slot_2
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_176
#undef unused_frame_slot_184

//----- (00000001400BE010) ----------------------------------------------------
__int64 sub_1400BE010()
{
  BOOL leg;
  __int64 float_word;
  int float_word_2;
  int human;
  float float_word_3;
  __int64 element_index;
  float scaled_value;
  double float_word_4;
  double scaled_value_2;
  float float_word_5;
  __int64 saved_float_word;
  signed int masked_bits;
  int iteration_count;
  float *state_address;
  __int16 cached_game_tick;
  int masked_bits_2;
  int masked_bits_3;
  float float_word_6;
  float float_word_7;
  float float_word_8;
  float float_word_9;
  float scaled_value_3;
  float float_word_10;
  int masked_bits_4;
  bool state_address_2;
  float float_word_11;
  __int64 masked_bits_5;
  __int64 masked_bits_6;
  float float_word_12;
  int masked_bits_7;
  int masked_bits_8;
  float weighted_sum;
  float weighted_sum_2;
  float saved_weighted_sum;
  float component_delta;
  float weighted_sum_3;
  float scaled_value_4;
  float float_word_13;
  float limited_value;
  float component_delta_2;
  float saved_limited_value;
  float float_word_14;
  float float_word_15;
  float weighted_sum_4;
  float float_word_16;
  double saved_weighted_sum_2;
  double saved_component_delta;
  double component_delta_3;
  double saved_weighted_sum_3;
  double weighted_sum_5;
  unsigned int masked_bits_9;
  unsigned int masked_bits_10;
  unsigned int iteration_count_2;
  __int64 masked_bits_11;
  int scaled_index;
  int masked_bits_12;
  float scaled_value_5;
  double sine_value;
  float weighted_sum_6;
  bool comparison_result;
  __int64 saved_float_word_2;
  __int64 record_byte_offset;
  float *state_address_3;
  _DWORD *state_address_4;
  __int64 remaining_count;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  double angle;
  float weighted_sum_7;
  float weighted_sum_8;
  float scaled_value_6;
  float comparison_operand;
  double saved_component_delta_2;
  float state_address_5;
  float component_delta_4;
  float weighted_sum_9;
  __int64 friction;
  unsigned int masked_bits_13;
  float combined_products;
  float state_address_6;
  float component_delta_5;
  int masked_bits_14;
  __int64 iteration_count_3;
  _DWORD *state_address_7;
  _BOOL8 comparison_result_2;
  float state_scalar;
  float state_scalar_2;
  float state_scalar_3;
  float state_scalar_4;
  float state_scalar_5;
  float state_scalar_6;
  float scaled_value_7;
  float weighted_sum_10;
  float state_address_8;
  unsigned int state_address_9;
  float state_address_10;
  float state_address_11;
  float comparison_operand_2;
  int iteration_count_4;
  __int64 running_total;
  float *state_address_12;
  unsigned int *state_address_13;
  float depth_scale;
  float weighted_sum_11;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  __int64 scaled_index_2;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float scaled_value_8;
  float scaled_value_9;
  float weighted_sum_15;
  float state_scalar_7;
  float state_scalar_8;
  float state_scalar_9;
  __int64 scaled_index_3;
  __int64 body;
  float combined_products_2;
  float combined_products_3;
  int masked_bits_15;
  signed int iteration_count_5;
  int *buffer_cursor;
  __int64 scaled_index_4;
  float weighted_sum_16;
  unsigned int masked_bits_16;
  unsigned int masked_bits_17;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 remaining_count_2;
  __int64 integer_sum;
  int *state_address_14;
  float weighted_sum_17;
  float state_address_15;
  float weighted_sum_18;
  float state_address_16;
  float weighted_sum_19;
  float state_address_17;
  float comparison_operand_3;
  float saved_product_difference;
  float saved_product_difference_2;
  unsigned int float_word_17;
  float weighted_sum_20;
  float weighted_sum_21;
  __int64 body_a;
  __int64 scaled_index_7;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float combined_products_7;
  float combined_products_8;
  int body_b;
  float scaled_ratio;
  float combined_products_9;
  unsigned int masked_bits_18;
  float combined_products_10;
  float combined_products_11;
  float combined_products_12;
  float combined_products_13;
  __int64 scaled_index_8;
  float combined_products_14;
  float combined_products_15;
  __int64 body_a_2;
  int iteration_count_6;
  float weighted_sum_22;
  __int64 state_address_18;
  float state_address_19;
  __int64 scaled_index_9;
  float state_address_20;
  float *state_address_21;
  float weighted_sum_23;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  __int64 masked_bits_19;
  float weighted_sum_27;
  float product_difference_7;
  float product_difference_8;
  float product_difference_9;
  int body_b_2;
  __int64 scaled_index_10;
  float state_address_22;
  float combined_products_16;
  float state_address_23;
  unsigned int masked_bits_20;
  float combined_products_17;
  float combined_products_18;
  int physics_find_free_bond_result;
  __int64 saved_physics_find_free_bond_result;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  unsigned int saved_human;
  unsigned int masked_bits_21;
  unsigned int masked_bits_22;
  __int64 xor_value;
  unsigned int state_word;
  float scaled_value_10;
  __int64 float_word_18;
  int selection_flag;
  float scaled_value_11;
  float scaled_value_12;
  unsigned int saved_float_word_3;
  unsigned int saved_float_word_4;
  unsigned int cached_float_word;
  float weighted_sum_28;
  float weighted_sum_29;
  float weighted_sum_30;
  __int64 masked_bits_23;
  int masked_bits_24;
  __int64 scaled_index_13;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  float weighted_sum_34;
  float scaled_value_13;
  float weighted_sum_35;
  float weighted_sum_36;
  float weighted_sum_37;
  float weighted_sum_38;
  float weighted_sum_39;
  unsigned int masked_bits_25;
  unsigned int float_word_19;
  float weighted_sum_40;
  float *state_address_24;
  float scaled_value_14;
  float weighted_sum_41;
  float component_sum;
  float weighted_sum_42;
  float square_root;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float saved_scaled_ratio;
  float scaled_ratio_4;
  float saved_scaled_ratio_2;
  float state_address_25;
  unsigned int state_address_26;
  unsigned int state_address_27;
  float square_root_2;
  float weighted_sum_43;
  float weighted_sum_44;
  float product_difference_10;
  unsigned int state_address_28;
  unsigned int state_address_29;
  float square_root_3;
  __int64 masked_bits_26;
  __int64 element_index_2;
  float comparison_operand_4;
  unsigned int *saved_state_address;
  float weighted_sum_45;
  unsigned int float_word_20;
  float weighted_sum_46;
  float weighted_sum_47;
  float weighted_sum_48;
  float weighted_sum_49;
  float state_address_30;
  float scaled_value_15;
  float state_address_31;
  unsigned int state_address_32;
  float weighted_sum_50;
  int masked_bits_27;
  __int64 masked_bits_28;
  __int64 masked_bits_29;
  _DWORD *table_value;
  _DWORD *table_value_2;
  __int64 float_word_21;
  double acos_result;
  double text_float_bits_result;
  double angle_2;
  double angle_3;
  double angle_4;
  __int64 saved_float_word_5;
  float weighted_sum_51;
  float weighted_sum_52;
  float weighted_sum_53;
  unsigned int state_address_33;
  unsigned int state_address_34;
  unsigned int masked_bits_30;
  __int64 masked_bits_31;
  float weighted_sum_54;
  float source_component_z;
  unsigned int state_address_35;
  unsigned int state_address_36;
  unsigned int state_address_37;
  int masked_bits_32;
  int integer_sum_2;
  _DWORD *unused_written_slot;
  _DWORD *unused_written_slot_2;
  __int64 masked_bits_33;
  __int64 integer_sum_3;
  int iteration_count_7;
  __int64 saved_human_2;
  float *weighted_sum_55;
  __int64 running_total_2;
  float weighted_sum_56;
  float scaled_value_16;
  __int64 remaining_count_3;
  int *state_address_38;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  float source_component_x;
  float source_component_y;
  __int64 scaled_index_16;
  float source_component_z_2;
  __int64 item;
  __int64 scaled_index_17;
  __int64 loaded_word_5;
  unsigned int parent;
  int human_2;
  __int64 remaining_count_4;
  char *state_address_39;
  __int64 loaded_word_6;
  unsigned int *state_address_40;
  int human_3;
  __int64 saved_float_word_6;
  __int64 saved_float_word_7;
  int masked_bits_34;
  int saved_masked_bits;
  int human_4;
  int *running_total_3;
  int *state_address_41;
  int child_bone;
  __int64 loaded_word_7;
  int parent_bone;
  __int64 scaled_index_18;
  unsigned int *axis;
  unsigned int masked_bits_35;
  unsigned int cached_game_type;
  int selection_code;
  int masked_bits_36;
  int masked_bits_37;
  __int64 masked_bits_38;
  signed int player;
  __int64 scaled_index_19;
  unsigned int table_value_3;
  __int64 table_value_4;
  int table_value_5;
  int masked_bits_39;
  int integer_quotient;
  __int64 byte_count;
  unsigned int cached_world_event_count;
  unsigned int cached_game_tick_2;
  __int64 shifted_bits;
  signed int state_word_2;
  __int64 masked_bits_40;
  int player_2;
  __int64 masked_bits_41;
  unsigned int scaled_index_20;
  signed int masked_bits_42;
  float *state_address_42;
  unsigned int *state_address_43;
  float product_difference_11;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  __int64 scaled_index_21;
  __int64 scaled_index_22;
  float weighted_sum_57;
  float weighted_sum_58;
  float weighted_sum_59;
  float weighted_sum_60;
  float weighted_sum_61;
  float weighted_sum_62;
  float weighted_sum_63;
  float product_difference_15;
  float weighted_sum_64;
  float weighted_sum_65;
  float weighted_sum_66;
  double state_address_44;
  float saved_weighted_sum_4;
  float xor_value_2;
  __int64 unrecovered_register_value;
  __m128 call_result;
  float weighted_sum_67;
  float weighted_sum_68;
  float weighted_sum_69;
  float cached_state_address;
  float scaled_value_17;
  float weighted_sum_70;
  float weighted_sum_71;
  float weighted_sum_72;
  float weighted_sum_73;
  float weighted_sum_74;
  float weighted_sum_75;
  float weighted_sum_76;
  float weighted_sum_77;
  float weighted_sum_78;
  float state_address_45;
  float scaled_value_18;
  float state_address_46;
  float scaled_value_19;
  float scaled_value_20;
  float component_sum_2;
  float scaled_value_21;
  float weighted_sum_79;
  float scaled_value_22;
  float component_sum_3;
  float scaled_value_23;
  float weighted_sum_80;
  float scaled_value_24;
  float scaled_value_25;
  float scaled_value_26;
  float sr_human_tick_endpoint[3];
  float sr_human_tick_offset[3];
  float sr_human_tick_normal[3];
  float sr_human_tick_point[3];
  _Alignas(16) unsigned sr_human_tick_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400BE010[720];
#define scratch_buffer (*(_DWORD (*)[20])(void *)(sr_frame_1400BE010 + 0)) /* [rsp+8h] */
#define frame_float_at_80 (*(float (*))(void *)(sr_frame_1400BE010 + 80)) /* [rsp+58h] */
#define human_5 (*(unsigned int (*))(void *)(sr_frame_1400BE010 + 84)) /* [rsp+5Ch] */
#define product_difference_16 (*(float (*))(void *)(sr_frame_1400BE010 + 88)) /* [rsp+60h] */
#define saved_state_address_2 (*(float (*))(void *)(sr_frame_1400BE010 + 92)) /* [rsp+64h] */
#define saved_state_address_3 (*(float (*))(void *)(sr_frame_1400BE010 + 96)) /* [rsp+68h] */
#define product_difference_17 (*(float (*))(void *)(sr_frame_1400BE010 + 100)) /* [rsp+6Ch] */
#define float_word_22 (*(int (*))(void *)(sr_frame_1400BE010 + 104)) /* [rsp+70h] */
#define weighted_sum_81 (*(float (*))(void *)(sr_frame_1400BE010 + 108)) /* [rsp+74h] */
#define state_address_47 (*(unsigned int * (*))(void *)(sr_frame_1400BE010 + 112)) /* [rsp+78h] */
#define state_address_48 (*(char * (*))(void *)(sr_frame_1400BE010 + 136)) /* [rsp+90h] */
#define frame_float_at_144 (*(float (*))(void *)(sr_frame_1400BE010 + 144)) /* [rsp+98h] */
#define frame_float_at_148 (*(float (*))(void *)(sr_frame_1400BE010 + 148)) /* [rsp+9Ch] */
#define packed_word_bits (*(__int128 (*))(void *)(sr_frame_1400BE010 + 160)) /* [rsp+A8h] */
#define float_word_23 (*(int (*))(void *)(sr_frame_1400BE010 + 176)) /* [rsp+B8h] */
#define float_word_24 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 184)) /* [rsp+C0h] */
#define float_word_25 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 192)) /* [rsp+C8h] */
#define float_word_26 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 200)) /* [rsp+D0h] */
#define frame_float_at_224 (*(float (*))(void *)(sr_frame_1400BE010 + 224)) /* [rsp+E8h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_1400BE010 + 240)) /* [rsp+F8h] */
#define saved_leg (*(int (*))(void *)(sr_frame_1400BE010 + 256)) /* [rsp+108h] */
#define saved_state_address_4 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 264)) /* [rsp+110h] */
#define frame_float_at_288 (*(float (*))(void *)(sr_frame_1400BE010 + 288)) /* [rsp+128h] */
#define frame_float_at_292 (*(float (*))(void *)(sr_frame_1400BE010 + 292)) /* [rsp+12Ch] */
#define frame_float_at_296 (*(float (*))(void *)(sr_frame_1400BE010 + 296)) /* [rsp+130h] */
#define frame_float_at_300 (*(float (*))(void *)(sr_frame_1400BE010 + 300)) /* [rsp+134h] */
#define frame_float_at_304 (*(float (*))(void *)(sr_frame_1400BE010 + 304)) /* [rsp+138h] */
#define frame_float_at_308 (*(float (*))(void *)(sr_frame_1400BE010 + 308)) /* [rsp+13Ch] */
#define component_delta_6 (*(double (*))(void *)(sr_frame_1400BE010 + 312)) /* [rsp+140h] */
#define float_word_27 (*(int (*))(void *)(sr_frame_1400BE010 + 320)) /* [rsp+148h] */
#define component_delta_7 (*(float (*))(void *)(sr_frame_1400BE010 + 324)) /* [rsp+14Ch] */
#define float_word_28 (*(int (*))(void *)(sr_frame_1400BE010 + 328)) /* [rsp+150h] */
#define saved_element_index (*(__int64 (*))(void *)(sr_frame_1400BE010 + 336)) /* [rsp+158h] */
#define frame_float_at_344 (*(double (*))(void *)(sr_frame_1400BE010 + 344)) /* [rsp+160h] */
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_1400BE010 + 352)) /* [rsp+168h] */
#define callee_output_word_2 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 360)) /* [rsp+170h] */
#define frame_float_at_368 (*(double (*))(void *)(sr_frame_1400BE010 + 368)) /* [rsp+178h] */
#define component_delta_8 (*(double (*))(void *)(sr_frame_1400BE010 + 376)) /* [rsp+180h] */
#define source_buffer (*(__m128i (*)[16])(void *)(sr_frame_1400BE010 + 448)) /* [rsp+1C8h] */
#define unused_frame_slot_704 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 704)) /* [rsp+2C8h] */

  leg = (int)state_address_47;
  float_word = 0;
  float_word_2 = 0x7FFFFFFF;
  human = 0;
  float_word_3 = 1.0;
  element_index = 0;
  scaled_value = 0.015625;
  float_word_4 = 3.14159265359;
  scaled_value_2 = 6.28318530718;
  float_word_5 = 0.5;
  LODWORD(packed_word_bits) = 0x80000000;
  frame_float_at_304 = 0.0009765625;
  frame_float_at_308 = 0.984375;
  *(float *)&float_word_27 = 0.625;
  component_delta_7 = -0.046875;
  *(float *)&float_word_28 = 0.046875;
  component_delta_6 = -1.570796326795;
  frame_float_at_368 = 1.570796326795;
  frame_float_at_292 = 0.039999999;
  frame_float_at_296 = 0.001953125;
  frame_float_at_344 = 0.25;
  frame_float_at_288 = 0.000015258789;
  frame_float_at_300 = 0.375;
  component_delta_8 = -3.14159265359;
  frame_float_at_148 = 0.050000001;
  selection_code_2 = 0x7FFFFFFF;
  frame_float_at_80 = 0.0;
  *(float *)&float_word_23 = 1.0;
  *(float *)&float_word_22 = 0.015625;
  *(double *)&callee_output_word_2 = 3.14159265359;
  *(double *)&callee_output_word = 6.28318530718;
  frame_float_at_144 = 0.5;
  frame_float_at_224 = 0.1875;
  human_5 = 0;
  saved_leg = (int)state_address_47;
  saved_state_address_4 = (int)state_address_47;
  saved_element_index = 0;
  do
  {
    saved_float_word = 28664 * element_index;
    float_word_26 = 28664 * element_index;
    if ( !dword_140404A6C[7166 * element_index + 280651303] )
      goto LABEL_477;
    masked_bits = 0;
    *(unsigned int *)((char *)&g_18329E4F8 + saved_float_word) = 0;
    iteration_count = 0;
    state_address = (float *)&g_15F2D92C4;
    do
    {
      if ( *((_DWORD *)state_address - 49)
        && masked_bits < 8
        && *(state_address - 5) <= *(float *)((char *)&g_18329E4D4 + saved_float_word)
        && *(state_address - 2) >= *(float *)((char *)&g_18329E4C8 + saved_float_word)
        && *(state_address - 3) <= *(float *)((char *)&g_18329E4DC + saved_float_word)
        && *state_address >= *(float *)((char *)&g_18329E4D0 + saved_float_word)
        && *(state_address - 4) <= *(float *)((char *)&g_18329E4D8 + saved_float_word)
        && *(state_address - 1) >= *(float *)((char *)&g_18329E4CC + saved_float_word) )
      {
        dword_140404A6C[7166 * element_index + 280651428 + masked_bits] = iteration_count;
        masked_bits = *(unsigned int *)((char *)&g_18329E4F8 + saved_float_word) + 1;
        *(unsigned int *)((char *)&g_18329E4F8 + saved_float_word) = masked_bits;
      }
      ++iteration_count;
      state_address += 5210;
    }
    while ( iteration_count < 512 );
    sr_human_update_health(human);
    cached_game_tick = game_tick;
    if ( (game_tick & 0x1F) == 0 )
    {
      masked_bits_2 = *(unsigned int *)((char *)&g_18329E324 + saved_float_word);
      masked_bits_3 = *(unsigned int *)((char *)&g_18329E328 + saved_float_word);
      if ( masked_bits_2 > masked_bits_3 )
      {
        masked_bits_2 = *(unsigned int *)((char *)&g_18329E328 + saved_float_word);
        *(unsigned int *)((char *)&g_18329E324 + saved_float_word) = masked_bits_3;
      }
      if ( masked_bits_3 > 127 )
        masked_bits_3 = 127;
      if ( masked_bits_2 < masked_bits_3 )
        *(unsigned int *)((char *)&g_18329E324 + saved_float_word) = masked_bits_2 + 1;
    }
    float_word_6 = *(float *)((char *)&g_1832A4DC0 + saved_float_word);
    float_word_7 = *(float *)((char *)&g_1832A4DBC + saved_float_word);
    float_word_8 = *(float *)((char *)&g_1832A4DC4 + saved_float_word);
    if ( fsqrt((float)((float)(float_word_7 * float_word_7) + (float)(float_word_6 * float_word_6)) + (float)(float_word_8 * float_word_8)) <= frame_float_at_304 )
    {
      float_word_9 = *(float *)&float_word;
      scaled_value_3 = *(float *)&float_word;
      float_word_10 = *(float *)&float_word;
    }
    else
    {
      float_word_9 = float_word_8 * frame_float_at_308;
      scaled_value_3 = float_word_6 * frame_float_at_308;
      float_word_10 = float_word_7 * frame_float_at_308;
    }
    *(float *)((char *)&g_1832A4DBC + saved_float_word) = float_word_10;
    *(float *)((char *)&g_1832A4DC0 + saved_float_word) = scaled_value_3;
    *(float *)((char *)&g_1832A4DC4 + saved_float_word) = float_word_9;
    masked_bits_4 = *(unsigned int *)((char *)&g_18329E358 + saved_float_word);
    if ( masked_bits_4 > 0 )
      *(unsigned int *)((char *)&g_18329E358 + saved_float_word) = masked_bits_4 - 1;
    state_address_2 = (*((_BYTE *)&g_18329E51C + saved_float_word) & 8) == 0;
    float_word_11 = float_word_3;
    masked_bits_5 = *(int *)((char *)&g_18329E330 + saved_float_word);
    masked_bits_6 = *(int *)((char *)&g_18329E334 + saved_float_word);
    weighted_sum_81 = *(float *)((char *)&g_18329E330 + saved_float_word);
    LODWORD(float_word_24) = masked_bits_6;
    if ( !state_address_2 )
      float_word_11 = *(float *)&float_word_27;
    if ( !g_16B27ECC4 )
    {
      float_word_12 = *(float *)((char *)&g_18329E420 + saved_float_word);
      if ( float_word_12 >= (float)(float_word_11 - scaled_value) )
      {
        if ( float_word_12 <= (float)(float_word_11 + scaled_value) )
          *(float *)((char *)&g_18329E420 + saved_float_word) = float_word_11;
        else
          *(float *)((char *)&g_18329E420 + saved_float_word) = float_word_12 - scaled_value;
      }
      else
      {
        *(float *)((char *)&g_18329E420 + saved_float_word) = float_word_12 + scaled_value;
      }
    }
    if ( (cached_game_tick & 7) == 0 )
    {
      masked_bits_7 = *(unsigned int *)((char *)&g_18329E380 + saved_float_word);
      if ( masked_bits_7 > 0 )
        *(unsigned int *)((char *)&g_18329E380 + saved_float_word) = masked_bits_7 - 1;
    }
    masked_bits_8 = *(unsigned int *)((char *)&g_18329E320 + saved_float_word);
    if ( masked_bits_8 > 0 )
      *(unsigned int *)((char *)&g_18329E320 + saved_float_word) = masked_bits_8 - 1;
    if ( (_DWORD)masked_bits_5 == -1 )
    {
      weighted_sum = *(float *)((char *)&g_18329E3E0 + saved_float_word);
      weighted_sum_2 = *(float *)((char *)&g_18329E450 + saved_float_word);
      saved_weighted_sum = weighted_sum;
      if ( (float)(weighted_sum_2 - weighted_sum) >= float_word_4 )
        saved_weighted_sum = weighted_sum + scaled_value_2;
      if ( (float)(saved_weighted_sum - weighted_sum_2) >= float_word_4 )
        weighted_sum_2 = weighted_sum_2 + scaled_value_2;
      component_delta = saved_weighted_sum - weighted_sum_2;
      state_address_48 = (char *)&g_18329E440 + saved_float_word;
      weighted_sum_3 = *(float *)((char *)&g_18329E440 + saved_float_word);
      if ( (float)(component_delta - weighted_sum_3) >= float_word_4 )
        weighted_sum_3 = weighted_sum_3 + scaled_value_2;
      if ( (float)(weighted_sum_3 - component_delta) >= float_word_4 )
        component_delta = component_delta + scaled_value_2;
      scaled_value_4 = *(float *)&float_word_28;
      float_word_13 = weighted_sum_3 - component_delta;
      *(float *)((char *)&g_18329E3C0 + saved_float_word) = float_word_13;
      limited_value = fmaxf(float_word_13, component_delta_7);
      if ( limited_value > scaled_value_4 )
        limited_value = scaled_value_4;
      if ( !*(unsigned int *)((char *)&g_18329E384 + saved_float_word) )
        limited_value = *(float *)&float_word;
      component_delta_2 = float_word_13 - limited_value;
      if ( component_delta_2 >= component_delta_6 )
      {
        *(float *)((char *)&g_18329E400 + saved_float_word) = component_delta_2;
        if ( component_delta_2 > frame_float_at_368 )
          *(unsigned int *)((char *)&g_18329E400 + saved_float_word) = 1070141403;
      }
      else
      {
        *(unsigned int *)((char *)&g_18329E400 + saved_float_word) = -1077342245;
      }
      if ( !LOBYTE(g_183F7C960) )
      {
        saved_limited_value = limited_value;
        float_word_14 = limited_value + weighted_sum;
        float_word_15 = saved_limited_value + *(float *)((char *)&g_18329E3A0 + saved_float_word);
        *(float *)((char *)&g_18329E3E0 + saved_float_word) = float_word_14;
        weighted_sum = float_word_14;
        *(float *)((char *)&g_18329E3A0 + saved_float_word) = float_word_15;
      }
      weighted_sum_4 = *(float *)((char *)&g_1832A4B84 + saved_float_word)
          + *(float *)((char *)&g_18329E3A0 + saved_float_word);
      float_word_16 = frame_float_at_288;
      if ( COERCE_FLOAT(LODWORD(weighted_sum_4) & float_word_2) < frame_float_at_288 )
        weighted_sum_4 = *(float *)&float_word;
      *(float *)((char *)&g_18329E3A0 + saved_float_word) = weighted_sum_4;
      if ( COERCE_FLOAT(LODWORD(weighted_sum) & float_word_2) < float_word_16 )
      {
        weighted_sum = *(float *)&float_word;
        *(unsigned int *)((char *)&g_18329E3E0 + saved_float_word) = 0;
      }
      saved_weighted_sum_2 = weighted_sum_4;
      saved_component_delta = component_delta_8;
      if ( saved_weighted_sum_2 >= component_delta_8 )
      {
        if ( saved_weighted_sum_2 <= float_word_4 )
          goto LABEL_67;
        component_delta_3 = saved_weighted_sum_2 - scaled_value_2;
      }
      else
      {
        component_delta_3 = saved_weighted_sum_2 + scaled_value_2;
      }
      *(float *)((char *)&g_18329E3A0 + saved_float_word) = component_delta_3;
LABEL_67:
      saved_weighted_sum_3 = weighted_sum;
      if ( weighted_sum >= saved_component_delta )
      {
        if ( saved_weighted_sum_3 <= float_word_4 )
        {
LABEL_72:
          masked_bits_9 = float_word;
          masked_bits_10 = float_word;
          state_address_47 = (unsigned int *)((char *)&g_18329E444 + saved_float_word);
          *(unsigned int *)((char *)&g_18329E3A4 + saved_float_word) = *(unsigned int *)((char *)&g_18329E444
                                                                                         + saved_float_word);
          goto LABEL_74;
        }
        weighted_sum_5 = saved_weighted_sum_3 - scaled_value_2;
      }
      else
      {
        weighted_sum_5 = *(float *)((char *)&g_18329E3E0 + saved_float_word) + scaled_value_2;
      }
      *(float *)((char *)&g_18329E3E0 + saved_float_word) = weighted_sum_5;
      goto LABEL_72;
    }
    state_address_48 = (char *)&g_18329E440 + saved_float_word;
    masked_bits_10 = *(unsigned int *)((char *)&g_18329E440 + saved_float_word);
    *(unsigned int *)((char *)&g_18329E400 + saved_float_word) = masked_bits_10;
    state_address_47 = (unsigned int *)((char *)&g_18329E444 + saved_float_word);
    masked_bits_9 = *(unsigned int *)((char *)&g_18329E444 + saved_float_word);
    *(unsigned int *)((char *)&g_18329E404 + saved_float_word) = masked_bits_9;
LABEL_74:
    *(unsigned int *)((char *)&g_18329E408 + saved_float_word) = masked_bits_10;
    iteration_count_2 = 0;
    *(unsigned int *)((char *)&g_18329E40C + saved_float_word) = masked_bits_9;
    masked_bits_11 = *(int *)((char *)&g_18329E310 + saved_float_word);
    if ( (_DWORD)masked_bits_11 != -1 )
    {
      scaled_index = dword_140404A6C[3597 * masked_bits_11 + 71856276];
      if ( scaled_index > 0 )
      {
        LOBYTE(iteration_count_2) = scaled_index >= 100;
        ++iteration_count_2;
      }
    }
    if ( *(unsigned int *)((char *)&g_1832A52B4 + saved_float_word) != iteration_count_2 )
    {
      ++dword_140404A6C[element_index + 282485789];
      *(unsigned int *)((char *)&g_1832A52B4 + saved_float_word) = iteration_count_2;
    }
    masked_bits_12 = *(unsigned int *)((char *)&g_18329E344 + saved_float_word);
    *(unsigned int *)((char *)&g_1832A5048 + saved_float_word) = 1065353216;
    if ( masked_bits_12 < 25 )
    {
      scaled_value_5 = (float)masked_bits_12 * frame_float_at_292;
      sine_value = sin((float)((float)((float)((cached_game_tick + (_WORD)human * (_WORD)human * (_WORD)human) & 0x1FF) * frame_float_at_296) * scaled_value_2));
      weighted_sum_6 = sine_value * frame_float_at_344 * (float)(float_word_3 - scaled_value_5) + (float)((float)(scaled_value_5 * float_word_5) + frame_float_at_300);
      if ( masked_bits_12 < 10 )
        weighted_sum_6 = weighted_sum_6 * (float)((float)((float)masked_bits_12 * frame_float_at_148) + float_word_5);
      *(float *)((char *)&g_1832A5048 + saved_float_word) = weighted_sum_6;
    }
    comparison_result = *(int *)((char *)&g_1832A4DD8 + saved_float_word) <= 0;
    product_difference_17 = 0.0;
    if ( !comparison_result || *(int *)((char *)&g_1832A4E00 + saved_float_word) > 0 )
      LODWORD(product_difference_17) = 1;
    *(unsigned int *)((char *)&g_18329E35C + saved_float_word) = 0;
    saved_float_word_2 = 20840 * masked_bits_5;
    record_byte_offset = 0;
    state_address_3 = (float *)((char *)&g_18329E5F0 + saved_float_word);
    float_word_25 = 20840 * masked_bits_5;
    state_address_4 = (unsigned int *)((char *)&g_18329E5F0 + saved_float_word);
    do
    {
      state_address_4[26] = 0;
      if ( record_byte_offset == 6 || record_byte_offset == 9 )
        dword_140404A6C[47 * *(state_address_4 - 50) + 18215714] = 1069547520;
      *state_address_4 = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (!record_byte_offset || record_byte_offset >= 10) )
      {
        *state_address_4 = 0;
      }
      state_address_4[104] = 0;
      if ( record_byte_offset == 5 || record_byte_offset == 8 )
        dword_140404A6C[47 * state_address_4[28] + 18215714] = 1069547520;
      state_address_4[78] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -1 || record_byte_offset + 1 >= 10) )
      {
        state_address_4[78] = 0;
      }
      state_address_4[182] = 0;
      if ( record_byte_offset == 4 || record_byte_offset == 7 )
        dword_140404A6C[47 * state_address_4[106] + 18215714] = 1069547520;
      state_address_4[156] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -2 || record_byte_offset + 2 >= 10) )
      {
        state_address_4[156] = 0;
      }
      state_address_4[260] = 0;
      if ( record_byte_offset == 3 || record_byte_offset == 6 )
        dword_140404A6C[47 * state_address_4[184] + 18215714] = 1069547520;
      state_address_4[234] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -3 || record_byte_offset + 3 >= 10) )
      {
        state_address_4[234] = 0;
      }
      state_address_4[338] = 0;
      if ( record_byte_offset == 2 || record_byte_offset == 5 )
        dword_140404A6C[47 * state_address_4[262] + 18215714] = 1069547520;
      state_address_4[312] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -4 || record_byte_offset + 4 >= 10) )
      {
        state_address_4[312] = 0;
      }
      state_address_4[416] = 0;
      if ( record_byte_offset == 1 || record_byte_offset == 4 )
        dword_140404A6C[47 * state_address_4[340] + 18215714] = 1069547520;
      state_address_4[390] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -5 || record_byte_offset + 5 >= 10) )
      {
        state_address_4[390] = 0;
      }
      state_address_4[494] = 0;
      if ( !record_byte_offset || record_byte_offset == 3 )
        dword_140404A6C[47 * state_address_4[418] + 18215714] = 1069547520;
      state_address_4[468] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -6 || record_byte_offset + 6 >= 10) )
      {
        state_address_4[468] = 0;
      }
      state_address_4[572] = 0;
      if ( record_byte_offset == -1 || record_byte_offset == 2 )
        dword_140404A6C[47 * state_address_4[496] + 18215714] = 1069547520;
      state_address_4[546] = 1065353216;
      if ( (_DWORD)masked_bits_5 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718]
        && (record_byte_offset == -7 || record_byte_offset + 7 >= 10) )
      {
        state_address_4[546] = 0;
      }
      record_byte_offset += 8;
      state_address_4 += 624;
    }
    while ( record_byte_offset < 16 );
    remaining_count = 4;
    do
    {
      loaded_word = *((int *)state_address_3 - 50);
      state_address_2 = *(float *)&float_word == *state_address_3;
      dword_140404A6C[47 * loaded_word + 18215711] = 0;
      if ( state_address_2 )
        dword_140404A6C[47 * loaded_word + 18215711] = 1;
      loaded_word_2 = *((int *)state_address_3 + 28);
      state_address_2 = *(float *)&float_word == state_address_3[78];
      dword_140404A6C[47 * loaded_word_2 + 18215711] = 0;
      if ( state_address_2 )
        dword_140404A6C[47 * loaded_word_2 + 18215711] = 1;
      loaded_word_3 = *((int *)state_address_3 + 106);
      state_address_2 = *(float *)&float_word == state_address_3[156];
      dword_140404A6C[47 * loaded_word_3 + 18215711] = 0;
      if ( state_address_2 )
        dword_140404A6C[47 * loaded_word_3 + 18215711] = 1;
      loaded_word_4 = *((int *)state_address_3 + 184);
      state_address_2 = *(float *)&float_word == state_address_3[234];
      dword_140404A6C[47 * loaded_word_4 + 18215711] = 0;
      if ( state_address_2 )
        dword_140404A6C[47 * loaded_word_4 + 18215711] = 1;
      state_address_3 += 312;
      --remaining_count;
    }
    while ( remaining_count );
    sr_human_update_centre(human);
    *(_QWORD *)&angle = *(unsigned int *)((char *)&g_18329E3A0 + saved_float_word);
    *(float *)&(*(float *)&sr_human_tick_rotation[8]) = 1.0;
    (*(__int128 *)(void *)sr_human_tick_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_human_tick_rotation+4)) = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_human_tick_rotation), (float *)&(*(__int128 *)(void *)sr_human_tick_rotation) + 3, angle);
    weighted_sum_7 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 3);
    weighted_sum_8 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 2);
    scaled_value_6 = *(float *)&(*(float *)&sr_human_tick_rotation[8]);
    comparison_operand = frame_float_at_224;
    saved_component_delta_2 = component_delta_6;
    *(unsigned int *)((char *)&g_1832A4C8C + saved_float_word) = *(unsigned int *)((char *)&g_1832A4C88
                                                                                   + saved_float_word);
    *(unsigned int *)((char *)&g_1832A4C88 + saved_float_word) = 0;
    state_address_5 = (float)((float)((float)(*(float *)((char *)&g_18329E530 + saved_float_word)
                                - *(float *)((char *)&g_18329F3D0 + saved_float_word))
                        * weighted_sum_7)
                + (float)((float)(*(float *)((char *)&g_18329E52C + saved_float_word)
                                - *(float *)((char *)&g_18329F3CC + saved_float_word))
                        * weighted_sum_8))
        + (float)((float)((float)(*(float *)((char *)&g_18329E534 + saved_float_word)
                                - *(float *)((char *)&g_18329F3D4 + saved_float_word))
                        * scaled_value_6)
                + comparison_operand);
    if ( state_address_5 >= *(float *)&float_word )
    {
      component_delta_4 = *(float *)&float_word;
    }
    else
    {
      component_delta_4 = state_address_5 * 3.0;
      if ( component_delta_4 < saved_component_delta_2 )
        component_delta_4 = -1.5707964;
    }
    *(unsigned int *)((char *)&g_1832A4D68 + saved_float_word) = *(unsigned int *)((char *)&g_1832A4D64
                                                                                   + saved_float_word);
    *(unsigned int *)((char *)&g_1832A4D64 + saved_float_word) = 0;
    *(float *)((char *)&g_1832A4C88 + saved_float_word) = component_delta_4;
    weighted_sum_9 = *(float *)((char *)&g_18329F778 + saved_float_word);
    friction = *(unsigned int *)((char *)&g_18329F77C + saved_float_word);
    *(float *)&masked_bits_13 = *(float *)((char *)&g_18329E52C + saved_float_word)
                   - *(float *)((char *)&g_18329F774 + saved_float_word);
    sr_human_tick_endpoint[0] = *(float *)((char *)&g_18329F774 + saved_float_word);
    combined_products = *(float *)((char *)&g_18329E530 + saved_float_word) - weighted_sum_9;
    sr_human_tick_endpoint[1] = weighted_sum_9;
    sr_human_tick_endpoint[2] = *(float *)&friction;
    sr_human_tick_point[0] = *(float *)&masked_bits_13;
    sr_human_tick_point[1] = combined_products;
    state_address_6 = (float)((float)(*(float *)&masked_bits_13 * weighted_sum_8) + (float)(combined_products * weighted_sum_7))
        + (float)((float)((float)(*(float *)((char *)&g_18329E534 + saved_float_word) - *(float *)&friction) * scaled_value_6) + comparison_operand);
    if ( state_address_6 >= *(float *)&float_word )
    {
      component_delta_5 = *(float *)&float_word;
      sr_human_tick_point[2] = *(float *)&float_word;
    }
    else
    {
      component_delta_5 = state_address_6 * 3.0;
      sr_human_tick_point[2] = component_delta_5;
      if ( component_delta_5 < saved_component_delta_2 )
      {
        sr_human_tick_point[2] = -1.5707964;
        component_delta_5 = -1.5707964;
      }
    }
    *(float *)((char *)&g_1832A4D64 + saved_float_word) = component_delta_5;
    if ( (_DWORD)masked_bits_5 == -1 )
    {
      if ( *(int *)((char *)&g_18329E344 + saved_float_word) > 0
        && !*(unsigned int *)((char *)&g_18329E360 + saved_float_word)
        && (*((_BYTE *)&g_18329E51C + saved_float_word) & 4) != 0 )
      {
        masked_bits_14 = *(unsigned int *)((char *)&g_1832A4A3C + saved_float_word);
        if ( masked_bits_14 < 32 )
          *(unsigned int *)((char *)&g_1832A4A3C + saved_float_word) = masked_bits_14 + 1;
      }
      iteration_count_3 = 0;
      state_address_7 = (unsigned int *)((char *)&g_18329E658 + saved_float_word);
      do
      {
        *state_address_7 = 0;
        if ( *(int *)((char *)&g_18329E344 + saved_float_word) > 0
          && *(int *)((char *)&g_1832A5058 + saved_float_word) >= 50
          && *(unsigned int *)((char *)&g_18329E360 + saved_float_word) != 2
          && (iteration_count_3 == 12 || iteration_count_3 == 15) )
        {
          leg = iteration_count_3 == 15;
          sr_human_foot_ground_contact(human, leg);
          comparison_result_2 = iteration_count_3 == 15;
          saved_state_address_4 = comparison_result_2;
        }
        else
        {
          comparison_result_2 = saved_state_address_4;
        }
        ++iteration_count_3;
        state_address_7 += 78;
      }
      while ( iteration_count_3 < 16 );
      state_address_2 = *(unsigned int *)((char *)&g_18329E360 + saved_float_word) == 3;
      saved_leg = leg;
      if ( !state_address_2
        && *(int *)((char *)&g_1832A4A3C + saved_float_word) > 0
        && (*((_BYTE *)&g_18329E51C + saved_float_word) & 4) == 0
        && *(unsigned int *)((char *)&g_1832A4C14 + saved_float_word) == 1
        && *(unsigned int *)((char *)&g_1832A4CF0 + saved_float_word) == 1
        && *(unsigned int *)((char *)&g_18329F4F8 + saved_float_word)
        && *(unsigned int *)((char *)&g_18329F8A0 + saved_float_word) )
      {
        *(unsigned int *)((char *)&g_18329E360 + saved_float_word) = 3;
        state_scalar = g_18399E3A4;
        state_scalar_2 = g_18399E2D8;
        state_scalar_3 = g_18399E404;
        state_scalar_4 = g_18399E3A4;
        scaled_value = *(float *)&float_word_22;
        state_scalar_5 = g_18399E2D8;
        state_scalar_6 = g_18399E404;
        *(unsigned int *)((char *)&dword_140404A6C[55 * comparison_result_2 + 280658026] + saved_float_word) = 1;
        *(unsigned int *)((char *)&g_1832A4BBC + saved_float_word) = !leg;
        *(unsigned int *)((char *)&g_1832A4A48 + saved_float_word) = *(unsigned int *)((char *)&g_18329E474
                                                                                       + saved_float_word);
        *(unsigned int *)((char *)&g_1832A4A4C + saved_float_word) = *(unsigned int *)((char *)&g_18329E470
                                                                                       + saved_float_word);
        *(unsigned int *)((char *)&g_1832A4B58 + saved_float_word) = 1075235812;
        *(unsigned int *)((char *)&g_1832A4C1C + saved_float_word) = 0;
        *(unsigned int *)((char *)&g_1832A4CF8 + saved_float_word) = 0;
        *(float *)((char *)&g_1832A4C20 + saved_float_word) = (float)((float)(state_scalar_4
                                                                              * *(float *)((char *)&g_18329F2D0
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329F294
                                                                                 + saved_float_word))
                                                              - (float)((float)(state_scalar_5
                                                                              * *(float *)((char *)(unsigned int *)&g_18329E55C
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329E52C
                                                                                 + saved_float_word));
        *(float *)((char *)&g_1832A4C24 + saved_float_word) = (float)((float)(state_scalar_4
                                                                              * *(float *)((char *)(unsigned int *)&g_18329F2D4
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329F298
                                                                                 + saved_float_word))
                                                              - (float)((float)(state_scalar_2
                                                                              * *(float *)((char *)&g_18329E560
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329E530
                                                                                 + saved_float_word));
        friction = g_18399E4D0;
        scaled_value_7 = *(float *)&g_18399E4D0;
        *(float *)((char *)&g_1832A4C28 + saved_float_word) = (float)((float)(state_scalar
                                                                              * *(float *)((char *)&g_18329F2D8
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329F29C
                                                                                 + saved_float_word))
                                                              - (float)((float)(state_scalar_2
                                                                              * *(float *)((char *)&g_18329E564
                                                                                         + saved_float_word))
                                                                      + *(float *)((char *)&g_18329E534
                                                                                 + saved_float_word));
        weighted_sum_10 = *(float *)&friction * *(float *)((char *)&g_18329F678 + saved_float_word);
        state_address_8 = (float)(scaled_value_7 * *(float *)((char *)(unsigned int *)&g_18329F67C + saved_float_word))
            + *(float *)((char *)&g_18329F640 + saved_float_word);
        *(float *)&friction = (float)(*(float *)&friction * *(float *)((char *)&g_18329F680 + saved_float_word))
                       + *(float *)((char *)&g_18329F644 + saved_float_word);
        *(float *)&state_address_9 = (float)(state_scalar_3 * *(float *)((char *)(unsigned int *)&g_18329E55C + saved_float_word))
                       + *(float *)((char *)&g_18329E52C + saved_float_word);
        state_address_10 = (float)(state_scalar_6 * *(float *)((char *)&g_18329E560 + saved_float_word))
            + *(float *)((char *)&g_18329E530 + saved_float_word);
        float_word_2 = selection_code_2;
        state_address_11 = (float)(state_scalar_3 * *(float *)((char *)&g_18329E564 + saved_float_word))
            + *(float *)((char *)&g_18329E534 + saved_float_word);
        sr_human_tick_endpoint[0] = weighted_sum_10 + *(float *)((char *)&g_18329F63C + saved_float_word);
        sr_human_tick_endpoint[1] = state_address_8;
        sr_human_tick_endpoint[2] = *(float *)&friction;
        sr_human_tick_point[0] = *(float *)&state_address_9;
        *(float *)&friction = *(float *)&friction - state_address_11;
        sr_human_tick_point[1] = state_address_10;
        *(float *)((char *)&g_1832A4CFC + saved_float_word) = sr_human_tick_endpoint[0] - *(float *)&state_address_9;
        sr_human_tick_point[2] = state_address_11;
        *(float *)((char *)&g_1832A4D00 + saved_float_word) = state_address_8 - state_address_10;
        *(unsigned int *)((char *)&g_1832A4D04 + saved_float_word) = friction;
      }
      comparison_operand_2 = frame_float_at_144;
      iteration_count_4 = 0;
      running_total = 0;
      state_address_12 = (float *)((char *)&g_18329E548 + saved_float_word);
      state_address_13 = &g_18399DF38;
      do
      {
        if ( iteration_count_4 != 12
          && iteration_count_4 != 15
          && (iteration_count_4 != 11 && iteration_count_4 != 14
           || *(unsigned int *)((char *)&g_18329E360 + saved_float_word) == 2
           || *(int *)((char *)&g_18329E344 + saved_float_word) <= 0
           || *(int *)((char *)&g_1832A5058 + saved_float_word) < 50) )
        {
          depth_scale = scaled_value;
          if ( iteration_count_4 == 3 )
          {
            depth_scale = 0.0625;
          }
          else if ( (unsigned int)iteration_count_4 <= 2 )
          {
            depth_scale = 0.03125;
          }
          weighted_sum_11 = *((float *)state_address_13 + 1);
          state_address_2 = *(unsigned int *)((char *)&g_18329E360 + saved_float_word) == 0;
          product_difference = *(state_address_12 - 7);
          product_difference_2 = *(state_address_12 - 6);
          product_difference_3 = *(state_address_12 - 5);
          scaled_index_2 = saved_float_word + 12 * (running_total + (int)*state_address_13);
          weighted_sum_12 = *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_2);
          weighted_sum_13 = *(float *)((char *)&g_18329E560 + scaled_index_2);
          weighted_sum_14 = *(float *)((char *)&g_18329E564 + scaled_index_2);
          sr_human_tick_point[0] = (float)((float)(weighted_sum_11 * -0.5) * weighted_sum_12) + product_difference;
          sr_human_tick_point[1] = (float)((float)(weighted_sum_11 * -0.5) * weighted_sum_13) + product_difference_2;
          sr_human_tick_point[2] = (float)((float)(weighted_sum_11 * -0.5) * weighted_sum_14) + product_difference_3;
          if ( state_address_2
            && *(int *)((char *)&g_18329E344 + saved_float_word) > 0
            && *(int *)((char *)&g_1832A5058 + saved_float_word) >= 50
            && (iteration_count_4 == 10 || iteration_count_4 == 13) )
          {
            sr_human_tick_point[0] = (float)((float)(weighted_sum_11 * -0.125) * weighted_sum_12) + product_difference;
            sr_human_tick_point[1] = (float)((float)(weighted_sum_11 * -0.125) * weighted_sum_13) + product_difference_2;
            sr_human_tick_point[2] = (float)((float)(weighted_sum_11 * -0.125) * weighted_sum_14) + product_difference_3;
          }
          scaled_value_8 = weighted_sum_11 * comparison_operand_2;
          scaled_value_9 = scaled_value_8 * weighted_sum_13;
          weighted_sum_15 = *((float *)state_address_13 + 2);
          friction = LODWORD(weighted_sum_15);
          sr_human_tick_endpoint[1] = scaled_value_9 + product_difference_2;
          sr_human_tick_endpoint[0] = (float)(scaled_value_8 * weighted_sum_12) + product_difference;
          sr_human_tick_endpoint[2] = (float)(scaled_value_8 * weighted_sum_14) + product_difference_3;
          if ( (unsigned int)sub_140033FE0(&sr_human_tick_point[0], &sr_human_tick_endpoint[0], weighted_sum_15) )
          {
            state_scalar_7 = g_151A8488C;
            state_scalar_8 = g_151A84890;
            state_scalar_9 = g_151A84894;
            if ( COERCE_FLOAT(
                   COERCE_UNSIGNED_INT(
                     (float)((float)(g_151A8488C * *(state_address_12 - 1))
                           + (float)(g_151A84890 * *state_address_12))
                   + (float)(g_151A84894 * state_address_12[1]))
                 & float_word_2) > 0.06666666666666667
              && item_hit_layer != -1
              && g_151A848D8 != -1 )
            {
              scaled_index_3 = 28664LL * (unsigned int)human + 312LL * (unsigned int)iteration_count_4;
              sub_14000B7D0(
                item_hit_layer,
                g_151A848D8,
                g_151A848DC,
                g_151A848E0,
                g_151A848F0,
                g_151A848F4,
                (unsigned int *)((char *)&g_18329E52C + scaled_index_3),
                (unsigned int *)((char *)&g_18329E544 + scaled_index_3));
              state_scalar_9 = g_151A84894;
              state_scalar_8 = g_151A84890;
              state_scalar_7 = g_151A8488C;
            }
            if ( !*(unsigned int *)((char *)&g_18329E33C + saved_float_word) )
            {
              if ( iteration_count_4 == 3 )
              {
                if ( !*(unsigned int *)((char *)&g_18329E348 + saved_float_word)
                  && COERCE_FLOAT(
                       COERCE_UNSIGNED_INT((float)((float)(state_scalar_7 * *(state_address_12 - 1)) + (float)(state_scalar_8 * *state_address_12)) + (float)(state_scalar_9 * state_address_12[1]))
                     & float_word_2) > 0.2666666666666667 )
                {
                  *(unsigned int *)((char *)&g_18329E344 + saved_float_word) -= 120;
                }
              }
              else if ( iteration_count_4 )
              {
                if ( iteration_count_4 == 2 )
                {
                  if ( !*(unsigned int *)((char *)&g_18329E348 + saved_float_word)
                    && COERCE_FLOAT(
                         COERCE_UNSIGNED_INT((float)((float)(state_scalar_7 * *(state_address_12 - 1)) + (float)(state_scalar_8 * *state_address_12)) + (float)(state_scalar_9 * state_address_12[1]))
                       & float_word_2) > 0.2 )
                  {
                    *(unsigned int *)((char *)&g_18329E344 + saved_float_word) -= 120;
                  }
                }
                else if ( (iteration_count_4 == 10 || iteration_count_4 == 13)
                       && !*(unsigned int *)((char *)&g_18329E348 + saved_float_word)
                       && COERCE_FLOAT(
                            COERCE_UNSIGNED_INT((float)((float)(state_scalar_7 * *(state_address_12 - 1)) + (float)(state_scalar_8 * *state_address_12)) + (float)(state_scalar_9 * state_address_12[1]))
                          & float_word_2) > 0.2666666666666667 )
                {
                  if ( iteration_count_4 == 10 )
                    *(unsigned int *)((char *)&g_1832A5084 + saved_float_word) = 0;
                  else
                    *(unsigned int *)((char *)&g_1832A508C + saved_float_word) = 0;
                }
              }
              else if ( !*(unsigned int *)((char *)&g_18329E348 + saved_float_word)
                     && COERCE_FLOAT(
                          COERCE_UNSIGNED_INT((float)((float)(state_scalar_7 * *(state_address_12 - 1)) + (float)(state_scalar_8 * *state_address_12)) + (float)(state_scalar_9 * state_address_12[1]))
                        & float_word_2) > 0.2 )
              {
                *(unsigned int *)((char *)&g_18329E344 + saved_float_word) -= 120;
              }
            }
            friction = 1061997773;
            if ( *(unsigned int *)((char *)&g_18329E360 + saved_float_word) == 2 )
              friction = 1036831949;
            body = *((int *)state_address_12 - 8);
            combined_products_2 = (ragdoll_unknown_height) - *(float *)&dword_140404A6C[47 * body + 18215716];
            sr_human_tick_point[0] = *(float *)&g_151A84880 - *(float *)&dword_140404A6C[47 * body + 18215715];
            combined_products_3 = *(float *)&g_151A84888 - *(float *)&dword_140404A6C[47 * body + 18215717];
            sr_human_tick_point[1] = combined_products_2;
            sr_human_tick_point[2] = combined_products_3;
            if ( item_hit_block_part == -1 )
              sr_physics_add_world_contact(
                body,
                (unsigned int *)&sr_human_tick_point[0],
                (unsigned int *)&g_151A8488C,
                weighted_sum_15 - g_151A8489C,
                friction,
                depth_scale,
                0x3D800000u);
            *(unsigned int *)((char *)&g_18329E35C + saved_float_word) = 1;
          }
        }
        scaled_value = *(float *)&float_word_22;
        ++iteration_count_4;
        running_total += 26;
        state_address_13 += 25;
        state_address_12 += 78;
      }
      while ( iteration_count_4 < 16 );
      masked_bits_15 = *(unsigned int *)((char *)&g_18329E33C + saved_float_word);
      if ( masked_bits_15 <= 0 )
        *(unsigned int *)((char *)&g_18329E338 + saved_float_word) = -1;
      else
        *(unsigned int *)((char *)&g_18329E33C + saved_float_word) = masked_bits_15 - 1;
      float_word = LODWORD(frame_float_at_80);
      iteration_count_5 = 0;
      if ( *(int *)((char *)&g_18329E4F8 + saved_float_word) > 0 )
      {
        buffer_cursor = (int *)((char *)&g_18329E4FC + saved_float_word);
        do
        {
          sr_human_collide_vehicle(human, *buffer_cursor);
          ++iteration_count_5;
          ++buffer_cursor;
        }
        while ( iteration_count_5 < *(int *)((char *)&g_18329E4F8 + saved_float_word) );
      }
      *(unsigned int *)((char *)&g_18329E388 + saved_float_word) = *(unsigned int *)((char *)&g_18329E52C
                                                                                     + saved_float_word);
      *(unsigned int *)((char *)&g_18329E38C + saved_float_word) = *(unsigned int *)((char *)&g_18329E530
                                                                                     + saved_float_word);
      *(unsigned int *)((char *)&g_18329E390 + saved_float_word) = *(unsigned int *)((char *)&g_18329E534
                                                                                     + saved_float_word);
      goto LABEL_368;
    }
    *(float *)((char *)&g_18329E3A0 + saved_float_word) = sub_14023F704(
                                                              COERCE_FLOAT(dword_140404A6C[5210 * masked_bits_5 + 129716732] ^ packed_word_bits),
                                                              *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716734]);
    *(unsigned int *)((char *)&g_18329E3A4 + saved_float_word) = 0;
    *(unsigned int *)((char *)&g_1832A4C14 + saved_float_word) = 0;
    *(unsigned int *)((char *)&g_1832A4CF0 + saved_float_word) = 0;
    if ( *(int *)((char *)&g_18329E358 + saved_float_word) > 900 )
      *(unsigned int *)((char *)&g_18329E358 + saved_float_word) = 900;
    if ( !*(unsigned int *)((char *)&g_18329E334 + saved_float_word) )
    {
      scaled_index_4 = (int)dword_140404A6C[5210 * masked_bits_5 + 129720183];
      if ( (_DWORD)scaled_index_4 == -1 || dword_140404A6C[383 * scaled_index_4 + 132400638] != human )
      {
        if ( *(unsigned int *)((char *)&g_18329E340 + saved_float_word) )
        {
          weighted_sum_16 = *(float *)((char *)&g_18329E43C + saved_float_word);
          if ( weighted_sum_16 > *(float *)&float_word )
            weighted_sum_16 = *(float *)&float_word;
          *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129720168] = weighted_sum_16;
          if ( !*(unsigned int *)((char *)&g_1832A4DD8 + saved_float_word)
            || (masked_bits_16 = dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + saved_float_word) + 278845898],
                masked_bits_16 == 15)
            || masked_bits_16 == 25 )
          {
            if ( !*(unsigned int *)((char *)&g_1832A4E00 + saved_float_word)
              || (masked_bits_17 = dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4E04 + saved_float_word) + 278845898],
                  masked_bits_17 == 15)
              || masked_bits_17 == 25 )
            {
              dword_140404A6C[5210 * masked_bits_5 + 129720165] = *(unsigned int *)((char *)&g_18329E430 + saved_float_word);
              dword_140404A6C[5210 * masked_bits_5 + 129720166] = *(unsigned int *)((char *)&g_18329E434 + saved_float_word);
              dword_140404A6C[5210 * masked_bits_5 + 129720167] = *(unsigned int *)((char *)&g_18329E438 + saved_float_word);
              dword_140404A6C[5210 * masked_bits_5 + 129720168] = *(unsigned int *)((char *)&g_18329E43C + saved_float_word);
              dword_140404A6C[5210 * masked_bits_5 + 129720173] = *(unsigned int *)((char *)&g_18329E51C + saved_float_word);
              dword_140404A6C[5210 * masked_bits_5 + 129716714] = *(unsigned int *)((char *)&g_18329E310 + saved_float_word);
            }
          }
          scaled_index_5 = (int)dword_140404A6C[5210 * masked_bits_5 + 129720183];
          if ( (_DWORD)scaled_index_5 != -1 )
            dword_140404A6C[383 * scaled_index_5 + 132400668] = 2;
        }
      }
    }
    if ( dword_140404A6C[24944 * dword_140404A6C[5210 * masked_bits_5 + 129716710] + 346707718] )
    {
      scaled_index_6 = 12 * masked_bits_6;
      remaining_count_2 = 2;
      integer_sum = saved_float_word_2 + scaled_index_6;
      state_address_14 = (int *)((char *)&g_18329F290 + saved_float_word);
      weighted_sum_17 = *(float *)((char *)&g_15F2DE2E4 + integer_sum);
      state_address_15 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + integer_sum)
                                   * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716726])
                           + *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716720])
                   + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716729]))
           + (float)(*(float *)((char *)&g_15F2DE2E8 + integer_sum)
                   * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716732]);
      weighted_sum_18 = *(float *)((char *)&g_15F2DE2E8 + integer_sum) * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716733];
      state_address_16 = (float)((float)(*(float *)((char *)&g_15F2DE2E0 + integer_sum)
                           * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716728])
                   + *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716722])
           + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716731]);
      weighted_sum_19 = *(float *)((char *)&g_15F2DE2E8 + integer_sum) * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716734];
      state_address_17 = (float)((float)(*(float *)((char *)&g_15F2DE2E0 + integer_sum)
                           * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716727])
                   + *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716721])
           + (float)(weighted_sum_17 * *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716730]);
      comparison_operand_3 = frame_float_at_80;
      saved_state_address_2 = state_address_15;
      saved_product_difference = state_address_16 + weighted_sum_19;
      saved_product_difference_2 = state_address_17 + weighted_sum_18;
      saved_state_address_3 = saved_product_difference;
      product_difference_16 = saved_product_difference_2;
      while ( 1 )
      {
        float_word_17 = dword_140404A6C[5210 * masked_bits_5 + 129716729];
        weighted_sum_20 = *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716730];
        weighted_sum_21 = *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716731];
        body_a = *state_address_14;
        scaled_index_7 = 47 * body_a;
        sr_human_tick_normal[0] = *(float *)&float_word_17;
        sr_human_tick_normal[1] = weighted_sum_20;
        sr_human_tick_normal[2] = weighted_sum_21;
        combined_products_4 = *(float *)&dword_140404A6C[47 * body_a + 18215715]
             - (float)(*(float *)&dword_140404A6C[47 * body_a + 18215727] * 0.25);
        combined_products_5 = *(float *)&dword_140404A6C[47 * body_a + 18215716]
             - (float)(*(float *)&dword_140404A6C[47 * body_a + 18215728] * 0.25);
        combined_products_6 = *(float *)&dword_140404A6C[47 * body_a + 18215717]
             - (float)(*(float *)&dword_140404A6C[47 * body_a + 18215729] * 0.25);
        product_difference_4 = combined_products_5 - (float)(weighted_sum_20 * 0.125);
        product_difference_5 = combined_products_4 - (float)(*(float *)&float_word_17 * 0.125);
        product_difference_6 = combined_products_6 - (float)(weighted_sum_21 * 0.125);
        if ( (float)((float)((float)((float)(saved_product_difference_2 - product_difference_4) * weighted_sum_20) + (float)((float)(state_address_15 - product_difference_5) * *(float *)&float_word_17))
                   + (float)((float)(saved_product_difference - product_difference_6) * weighted_sum_21)) >= comparison_operand_3 )
        {
          combined_products_7 = (float)((float)((float)(saved_product_difference_2 - combined_products_5) * weighted_sum_20) + (float)((float)(state_address_15 - combined_products_4) * *(float *)&float_word_17))
               + (float)((float)(saved_product_difference - combined_products_6) * weighted_sum_21);
          if ( combined_products_7 > comparison_operand_3 )
            goto LABEL_273;
          combined_products_8 = (float)((float)(weighted_sum_20 * (float)(product_difference_4 - combined_products_5)) + (float)(*(float *)&float_word_17 * (float)(product_difference_5 - combined_products_4)))
               + (float)(weighted_sum_21 * (float)(product_difference_6 - combined_products_6));
          if ( combined_products_8 == frame_float_at_80 )
          {
            saved_product_difference = saved_state_address_3;
            state_address_15 = saved_state_address_2;
            comparison_operand_3 = frame_float_at_80;
LABEL_273:
            saved_product_difference_2 = product_difference_16;
            goto LABEL_274;
          }
          body_b = dword_140404A6C[5210 * masked_bits_5 + 129716719];
          scaled_ratio = combined_products_7 / combined_products_8;
          combined_products_9 = (float)(scaled_ratio * (float)(product_difference_5 - combined_products_4)) + combined_products_4;
          *(float *)&masked_bits_18 = combined_products_4 - *(float *)&dword_140404A6C[scaled_index_7 + 18215715];
          combined_products_10 = (float)(scaled_ratio * (float)(product_difference_4 - combined_products_5)) + combined_products_5;
          combined_products_11 = combined_products_5 - *(float *)&dword_140404A6C[scaled_index_7 + 18215716];
          combined_products_12 = (float)(scaled_ratio * (float)(product_difference_6 - combined_products_6)) + combined_products_6;
          combined_products_13 = combined_products_6 - *(float *)&dword_140404A6C[scaled_index_7 + 18215717];
          scaled_index_8 = 47LL * body_b;
          sr_human_tick_endpoint[0] = *(float *)&masked_bits_18;
          sr_human_tick_endpoint[1] = combined_products_11;
          scratch_buffer[16] = 1040187392;
          sr_human_tick_endpoint[2] = combined_products_13;
          combined_products_14 = combined_products_10 - *(float *)&dword_140404A6C[scaled_index_8 + 18215716];
          sr_human_tick_offset[0] = combined_products_9 - *(float *)&dword_140404A6C[scaled_index_8 + 18215715];
          combined_products_15 = combined_products_12 - *(float *)&dword_140404A6C[scaled_index_8 + 18215717];
          sr_human_tick_offset[1] = combined_products_14;
          sr_human_tick_offset[2] = combined_products_15;
          sr_physics_add_contact(
            body_a,
            body_b,
            (unsigned int *)&sr_human_tick_endpoint[0],
            (unsigned int *)&sr_human_tick_offset[0],
            (unsigned int *)&sr_human_tick_normal[0],
            (float)((float)((float)(combined_products_10 - product_difference_4) * weighted_sum_20) + (float)((float)(combined_products_9 - product_difference_5) * *(float *)&float_word_17))
          + (float)((float)(combined_products_12 - product_difference_6) * weighted_sum_21),
            0x3F4CCCCDu,
            0.0625,
            0x3E000000u);
          saved_product_difference = saved_state_address_3;
          weighted_sum_20 = *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716730];
          weighted_sum_21 = *(float *)&dword_140404A6C[5210 * masked_bits_5 + 129716731];
          state_address_15 = saved_state_address_2;
          saved_product_difference_2 = product_difference_16;
          comparison_operand_3 = frame_float_at_80;
        }
LABEL_274:
        state_address_14 += 234;
        if ( !--remaining_count_2 )
        {
          state_address_18 = *(unsigned int *)((char *)&g_15F2DE2E0 + integer_sum);
          body_a_2 = *(int *)((char *)&g_18329E528 + saved_float_word);
          iteration_count_6 = 0;
          weighted_sum_22 = *(float *)((char *)&g_15F2DE2E4 + integer_sum) + frame_float_at_224;
          *(float *)&state_address_18 = (float)((float)((float)(*(float *)&state_address_18
                                                  * *(float *)((char *)&g_15F2D9248 + saved_float_word_2))
                                          + *(float *)((char *)&g_15F2D9230 + saved_float_word_2))
                                  + (float)(weighted_sum_20 * weighted_sum_22))
                          + (float)(*(float *)((char *)&g_15F2DE2E8 + integer_sum)
                                  * *(float *)((char *)&g_15F2D9260 + saved_float_word_2));
          state_address_19 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + integer_sum)
                                       * *(float *)((char *)&g_15F2D9244 + saved_float_word_2))
                               + *(float *)((char *)&g_15F2D922C + saved_float_word_2))
                       + (float)(weighted_sum_22 * *(float *)((char *)&g_15F2D9250 + saved_float_word_2)))
               + (float)(*(float *)((char *)&g_15F2DE2E8 + integer_sum)
                       * *(float *)((char *)&g_15F2D925C + saved_float_word_2));
          scaled_index_9 = 47 * body_a_2;
          state_address_20 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + integer_sum)
                                       * *(float *)((char *)&g_15F2D924C + saved_float_word_2))
                               + *(float *)((char *)&g_15F2D9234 + saved_float_word_2))
                       + (float)(weighted_sum_22 * weighted_sum_21))
               + (float)(*(float *)((char *)&g_15F2DE2E8 + integer_sum)
                       * *(float *)((char *)&g_15F2D9264 + saved_float_word_2));
          product_difference_16 = *(float *)&state_address_18;
          sr_human_tick_point[1] = *(float *)&state_address_18;
          saved_state_address_2 = state_address_19;
          sr_human_tick_point[0] = state_address_19;
          saved_state_address_3 = state_address_20;
          state_address_21 = (float *)&dword_140404A6C[47 * body_a_2 + 18215724];
          sr_human_tick_point[2] = state_address_20;
          while ( 1 )
          {
            if ( iteration_count_6 )
            {
              weighted_sum_23 = (float)(*state_address_21 * 0.25) + *(float *)&dword_140404A6C[scaled_index_9 + 18215715];
              weighted_sum_24 = (float)(state_address_21[1] * 0.25) + *(float *)&dword_140404A6C[scaled_index_9 + 18215716];
              weighted_sum_25 = (float)(state_address_21[2] * 0.25) + *(float *)&dword_140404A6C[scaled_index_9 + 18215717];
            }
            else
            {
              weighted_sum_23 = *(float *)&dword_140404A6C[scaled_index_9 + 18215715] - (float)(*state_address_21 * 0.25);
              weighted_sum_24 = *(float *)&dword_140404A6C[scaled_index_9 + 18215716] - (float)(state_address_21[1] * 0.25);
              weighted_sum_25 = *(float *)&dword_140404A6C[scaled_index_9 + 18215717] - (float)(state_address_21[2] * 0.25);
            }
            weighted_sum_26 = *(float *)((char *)&g_15F2D9250 + saved_float_word_2);
            masked_bits_19 = *(unsigned int *)((char *)&g_15F2D9254 + saved_float_word_2);
            weighted_sum_27 = *(float *)((char *)&g_15F2D9258 + saved_float_word_2);
            HIDWORD(friction) = HIDWORD(state_address_18);
            sr_human_tick_normal[0] = weighted_sum_26;
            sr_human_tick_normal[1] = *(float *)&masked_bits_19;
            product_difference_7 = weighted_sum_23 - (float)(weighted_sum_26 * 0.125);
            sr_human_tick_normal[2] = weighted_sum_27;
            sr_human_tick_offset[0] = product_difference_7;
            product_difference_8 = weighted_sum_24 - (float)(*(float *)&masked_bits_19 * 0.125);
            product_difference_9 = weighted_sum_25 - (float)(weighted_sum_27 * 0.125);
            sr_human_tick_offset[1] = product_difference_8;
            sr_human_tick_offset[2] = product_difference_9;
            *(float *)&friction = (float)((float)((float)(*(float *)&state_address_18 - product_difference_8) * *(float *)&masked_bits_19)
                                   + (float)((float)(state_address_19 - product_difference_7) * weighted_sum_26))
                           + (float)((float)(state_address_20 - product_difference_9) * weighted_sum_27);
            if ( *(float *)&friction < frame_float_at_80 )
              goto LABEL_285;
            *(float *)&state_address_18 = (float)((float)((float)(*(float *)&state_address_18 - weighted_sum_24) * *(float *)&masked_bits_19)
                                    + (float)((float)(state_address_19 - weighted_sum_23) * weighted_sum_26))
                            + (float)((float)(state_address_20 - weighted_sum_25) * weighted_sum_27);
            if ( *(float *)&state_address_18 > frame_float_at_80 )
              goto LABEL_284;
            HIDWORD(friction) = HIDWORD(masked_bits_19);
            *(float *)&friction = (float)((float)(*(float *)&masked_bits_19 * (float)(product_difference_8 - weighted_sum_24))
                                   + (float)(weighted_sum_26 * (float)(product_difference_7 - weighted_sum_23)))
                           + (float)(weighted_sum_27 * (float)(product_difference_9 - weighted_sum_25));
            if ( *(float *)&friction == frame_float_at_80 )
              break;
            body_b_2 = *(unsigned int *)((char *)&g_15F2D9228 + saved_float_word_2);
            *(float *)&state_address_18 = *(float *)&state_address_18 / *(float *)&friction;
            scaled_index_10 = 47LL * body_b_2;
            HIDWORD(friction) = HIDWORD(state_address_18);
            *(float *)&friction = (float)(*(float *)&state_address_18 * (float)(product_difference_7 - weighted_sum_23)) + weighted_sum_23;
            state_address_22 = (float)(*(float *)&state_address_18 * (float)(product_difference_8 - weighted_sum_24)) + weighted_sum_24;
            combined_products_16 = weighted_sum_24 - *(float *)&dword_140404A6C[scaled_index_9 + 18215716];
            state_address_23 = (float)(*(float *)&state_address_18 * (float)(product_difference_9 - weighted_sum_25)) + weighted_sum_25;
            *(float *)&masked_bits_20 = *(float *)&friction - *(float *)&dword_140404A6C[scaled_index_10 + 18215715];
            combined_products_17 = weighted_sum_25 - *(float *)&dword_140404A6C[scaled_index_9 + 18215717];
            sr_human_tick_endpoint[0] = weighted_sum_23 - *(float *)&dword_140404A6C[scaled_index_9 + 18215715];
            combined_products_18 = state_address_22 - *(float *)&dword_140404A6C[scaled_index_10 + 18215716];
            sr_human_tick_endpoint[1] = combined_products_16;
            sr_human_tick_offset[0] = *(float *)&masked_bits_20;
            *(float *)&friction = (float)(*(float *)&friction - product_difference_7) * weighted_sum_26;
            sr_human_tick_offset[2] = state_address_23 - *(float *)&dword_140404A6C[scaled_index_10 + 18215717];
            sr_human_tick_endpoint[2] = combined_products_17;
            sr_human_tick_offset[1] = combined_products_18;
            sr_physics_add_contact(
              body_a_2,
              body_b_2,
              (unsigned int *)&sr_human_tick_endpoint[0],
              (unsigned int *)&sr_human_tick_offset[0],
              (unsigned int *)&sr_human_tick_normal[0],
              (float)((float)((float)(state_address_22 - product_difference_8) * *(float *)&masked_bits_19) + *(float *)&friction)
            + (float)((float)(state_address_23 - product_difference_9) * weighted_sum_27),
              0x3F4CCCCDu,
              0.0625,
              0x3E000000u);
            state_address_18 = LODWORD(product_difference_16);
            state_address_20 = saved_state_address_3;
            state_address_19 = saved_state_address_2;
LABEL_285:
            if ( ++iteration_count_6 >= 2 )
            {
              physics_find_free_bond_result = sr_physics_find_free_bond();
              saved_float_word = float_word_26;
              if ( physics_find_free_bond_result == -1 )
              {
                float_word = LODWORD(frame_float_at_80);
              }
              else
              {
                saved_physics_find_free_bond_result = physics_find_free_bond_result;
                scaled_index_11 = 61LL * physics_find_free_bond_result;
                crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_11 + 486149254]), 0, 0xF0u);
                dword_140404A6C[scaled_index_11 + 486149253] = 1;
                dword_140404A6C[scaled_index_11 + 486149254] = 10;
                scaled_index_12 = 18 * saved_physics_find_free_bond_result;
                *(_QWORD *)&dword_140404A6C[scaled_index_11 + 486149256] = 0;
                dword_140404A6C[scaled_index_11 + 486149291] = *(unsigned int *)((char *)&g_15F2D9228 + saved_float_word_2);
                saved_human = human_5;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543029] = 0;
                dword_140404A6C[scaled_index_11 + 486149293] = saved_human;
                masked_bits_21 = *(unsigned int *)((char *)&g_15F2DE2E0 + integer_sum);
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543033] = 0;
                dword_140404A6C[scaled_index_11 + 486149292] = body_a_2;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543037] = 0;
                dword_140404A6C[scaled_index_11 + 486149281] = 1048576000;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543041] = 0;
                dword_140404A6C[scaled_index_11 + 486149282] = 1052770304;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543045] = 0;
                dword_140404A6C[scaled_index_11 + 486149267] = masked_bits_21;
                masked_bits_22 = *(unsigned int *)((char *)&g_15F2DE2E8 + integer_sum);
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543049] = 0;
                dword_140404A6C[scaled_index_11 + 486149269] = masked_bits_22;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543053] = 0;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543057] = 0;
                *(_OWORD *)&dword_140404A6C[2 * scaled_index_12 + 485543061] = 0;
                xor_value = *(unsigned int *)((char *)&g_15F2DE2E4 + integer_sum);
                *(float *)&dword_140404A6C[scaled_index_11 + 486149268] = *(float *)&xor_value + frame_float_at_144;
                *(_QWORD *)&dword_140404A6C[scaled_index_11 + 486149270] = 0;
                dword_140404A6C[scaled_index_11 + 486149272] = 0;
                *(float *)&xor_value = sr_math_mat3_relative_axis_angle(
                                    &sr_human_tick_point[0],
                                    (float *)((char *)&g_15F2D9244 + saved_float_word_2),
                                    (float *)&dword_140404A6C[47 * body_a_2 + 18215724]);
                state_word = g_16B27ECFC;
                scaled_value_10 = *(float *)&xor_value;
                if ( g_16B27ECFC )
                  float_word_18 = 1044975579;
                else
                  float_word_18 = 1053364187;
                if ( *(float *)&xor_value < COERCE_FLOAT(float_word_18 ^ packed_word_bits) )
                  xor_value = float_word_18 ^ packed_word_bits;
                selection_flag = 0;
                LOBYTE(selection_flag) = COERCE_FLOAT(float_word_18 ^ packed_word_bits) > scaled_value_10;
                if ( *(float *)&xor_value > *(float *)&float_word_18 )
                {
                  xor_value = float_word_18;
                  selection_flag = 1;
                }
                scaled_value_11 = *(float *)&xor_value * sr_human_tick_point[0];
                HIDWORD(friction) = HIDWORD(xor_value);
                dword_140404A6C[scaled_index_11 + 486149294] = 1111;
                *(float *)&friction = *(float *)&xor_value * sr_human_tick_point[1];
                scaled_value_12 = *(float *)&xor_value * sr_human_tick_point[2];
                sr_human_tick_point[0] = scaled_value_11;
                sr_human_tick_point[1] = *(float *)&friction;
                sr_human_tick_point[2] = scaled_value_12;
                if ( state_word )
                {
                  saved_float_word_4 = float_word_22;
                  *(float *)&friction = *(float *)&friction * -0.125;
                  *(float *)&dword_140404A6C[2 * scaled_index_12 + 485543033] = scaled_value_11 * -0.125;
                  dword_140404A6C[2 * scaled_index_12 + 485543034] = friction;
                  *(float *)&dword_140404A6C[2 * scaled_index_12 + 485543035] = scaled_value_12 * -0.125;
                  if ( selection_flag )
                    cached_float_word = saved_float_word_4;
                  else
                    cached_float_word = 1029701632;
                  float_word = LODWORD(frame_float_at_80);
                  dword_140404A6C[scaled_index_11 + 486149287] = cached_float_word;
                  saved_float_word_3 = saved_float_word_4;
                }
                else
                {
                  float_word = LODWORD(frame_float_at_80);
                  dword_140404A6C[scaled_index_11 + 486149287] = 1015021568;
                  *(float *)&friction = *(float *)&friction * -0.5;
                  *(float *)&dword_140404A6C[2 * scaled_index_12 + 485543035] = scaled_value_12 * -0.5;
                  saved_float_word_3 = float_word;
                  *(float *)&dword_140404A6C[2 * scaled_index_12 + 485543033] = scaled_value_11 * -0.5;
                  dword_140404A6C[2 * scaled_index_12 + 485543034] = friction;
                }
                dword_140404A6C[2 * scaled_index_12 + 485543064] = saved_float_word_3;
                dword_140404A6C[2 * scaled_index_12 + 485543048] = 0;
              }
              LODWORD(masked_bits_6) = float_word_24;
              float_word_3 = *(float *)&float_word_23;
              goto LABEL_303;
            }
          }
          state_address_20 = saved_state_address_3;
          state_address_19 = saved_state_address_2;
LABEL_284:
          state_address_18 = LODWORD(product_difference_16);
          goto LABEL_285;
        }
      }
    }
LABEL_303:
    if ( dword_140404A6C[24944 * *(unsigned int *)((char *)&g_15F2D9204 + saved_float_word_2) + 346707718] )
      goto LABEL_349;
    weighted_sum_28 = *(float *)((char *)&g_15F2D9248 + saved_float_word_2);
    weighted_sum_29 = *(float *)((char *)&g_15F2D924C + saved_float_word_2);
    weighted_sum_30 = *(float *)((char *)&g_15F2D9244 + saved_float_word_2);
    masked_bits_23 = 47LL * *(int *)((char *)&g_18329E528 + saved_float_word);
    masked_bits_24 = *(unsigned int *)((char *)&g_18329E354 + saved_float_word);
    scaled_index_13 = saved_float_word_2 + 12LL * (int)masked_bits_6;
    weighted_sum_31 = *(float *)((char *)&g_15F2DE2E0 + scaled_index_13);
    weighted_sum_32 = (float)(weighted_sum_31 * weighted_sum_28) + *(float *)((char *)&g_15F2D9230 + saved_float_word_2);
    weighted_sum_33 = (float)(weighted_sum_31 * weighted_sum_29) + *(float *)((char *)&g_15F2D9234 + saved_float_word_2);
    weighted_sum_34 = (float)(weighted_sum_31 * weighted_sum_30) + *(float *)((char *)&g_15F2D922C + saved_float_word_2);
    *(float *)&dword_140404A6C[masked_bits_23 + 18215716] = weighted_sum_32;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215717] = weighted_sum_33;
    if ( masked_bits_24 > 0 )
    {
      scaled_value_13 = (float)((float)masked_bits_24 * weighted_sum_31) * 0.06666667;
      *(float *)&dword_140404A6C[masked_bits_23 + 18215715] = (float)(scaled_value_13 * weighted_sum_30) + weighted_sum_34;
      weighted_sum_34 = (float)(scaled_value_13 * weighted_sum_30) + weighted_sum_34;
      weighted_sum_32 = (float)(scaled_value_13 * weighted_sum_28) + *(float *)&dword_140404A6C[masked_bits_23 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_23 + 18215716] = weighted_sum_32;
      weighted_sum_33 = (float)(scaled_value_13 * weighted_sum_29) + *(float *)&dword_140404A6C[masked_bits_23 + 18215717];
    }
    weighted_sum_35 = *(float *)((char *)&g_15F2D9254 + saved_float_word_2);
    weighted_sum_36 = *(float *)((char *)&g_15F2DE2E4 + scaled_index_13) + 0.25;
    weighted_sum_37 = *(float *)((char *)&g_15F2D9258 + saved_float_word_2);
    weighted_sum_38 = *(float *)((char *)&g_15F2D9250 + saved_float_word_2);
    weighted_sum_39 = *(float *)((char *)&g_15F2D925C + saved_float_word_2);
    masked_bits_25 = *(unsigned int *)((char *)&g_15F2D928C + saved_float_word_2);
    *(float *)&dword_140404A6C[masked_bits_23 + 18215716] = (float)(weighted_sum_35 * weighted_sum_36) + weighted_sum_32;
    *(float *)&float_word_19 = (float)(weighted_sum_37 * weighted_sum_36) + weighted_sum_33;
    weighted_sum_40 = *(float *)((char *)&g_15F2DE2E8 + scaled_index_13);
    state_address_24 = (float *)&dword_140404A6C[masked_bits_23 + 18215730];
    dword_140404A6C[masked_bits_23 + 18215717] = float_word_19;
    scaled_value_14 = weighted_sum_38 * weighted_sum_36;
    weighted_sum_41 = *(float *)((char *)&g_15F2D9260 + saved_float_word_2);
    component_sum = scaled_value_14 + weighted_sum_34;
    weighted_sum_42 = *(float *)((char *)&g_15F2D9264 + saved_float_word_2);
    *(float *)&dword_140404A6C[masked_bits_23 + 18215715] = component_sum + (float)(weighted_sum_39 * weighted_sum_40);
    *(float *)&dword_140404A6C[masked_bits_23 + 18215716] = (float)(weighted_sum_41 * weighted_sum_40) + *(float *)&dword_140404A6C[masked_bits_23 + 18215716];
    *(float *)&dword_140404A6C[masked_bits_23 + 18215717] = (float)(weighted_sum_42 * weighted_sum_40) + *(float *)&dword_140404A6C[masked_bits_23 + 18215717];
    dword_140404A6C[masked_bits_23 + 18215718] = masked_bits_25;
    dword_140404A6C[masked_bits_23 + 18215719] = *(unsigned int *)((char *)&g_15F2D9290 + saved_float_word_2);
    dword_140404A6C[masked_bits_23 + 18215720] = *(unsigned int *)((char *)&g_15F2D9294 + saved_float_word_2);
    *(float *)&dword_140404A6C[masked_bits_23 + 18215724] = weighted_sum_30;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215725] = weighted_sum_28;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215726] = weighted_sum_29;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215727] = weighted_sum_38;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215728] = weighted_sum_35;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215729] = weighted_sum_37;
    *state_address_24 = weighted_sum_39;
    state_address_24[1] = weighted_sum_41;
    state_address_24[2] = weighted_sum_42;
    if ( masked_bits_24 > 0 )
    {
      square_root = fsqrt((float)((float)(weighted_sum_41 * weighted_sum_41) + (float)(weighted_sum_39 * weighted_sum_39)) + (float)(weighted_sum_42 * weighted_sum_42));
      if ( square_root == *(float *)&float_word )
      {
        scaled_ratio_2 = *(float *)&float_word;
        scaled_ratio_3 = *(float *)&float_word;
        saved_scaled_ratio_2 = *(float *)&float_word;
        saved_scaled_ratio = *(float *)&float_word;
        scaled_ratio_4 = *(float *)&float_word;
      }
      else
      {
        scaled_ratio_2 = weighted_sum_41 * (float)(float_word_3 / square_root);
        scaled_ratio_3 = weighted_sum_42 * (float)(float_word_3 / square_root);
        saved_scaled_ratio = scaled_ratio_2;
        scaled_ratio_4 = weighted_sum_39 * (float)(float_word_3 / square_root);
        saved_scaled_ratio_2 = scaled_ratio_3;
      }
      *state_address_24 = scaled_ratio_4;
      state_address_24[1] = saved_scaled_ratio;
      state_address_24[2] = saved_scaled_ratio_2;
      state_address_25 = (float)(scaled_ratio_2 * *(float *)&dword_140404A6C[masked_bits_23 + 18215726])
           - (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[masked_bits_23 + 18215725]);
      *(float *)&dword_140404A6C[masked_bits_23 + 18215727] = state_address_25;
      *(float *)&state_address_26 = (float)(state_address_24[2] * *(float *)&dword_140404A6C[masked_bits_23 + 18215724])
                      - (float)(*(float *)&dword_140404A6C[masked_bits_23 + 18215726] * *state_address_24);
      dword_140404A6C[masked_bits_23 + 18215728] = state_address_26;
      *(float *)&state_address_27 = (float)(*(float *)&dword_140404A6C[masked_bits_23 + 18215725] * *state_address_24)
                      - (float)(state_address_24[1] * *(float *)&dword_140404A6C[masked_bits_23 + 18215724]);
      dword_140404A6C[masked_bits_23 + 18215729] = state_address_27;
      square_root_2 = fsqrt(
               (float)((float)(state_address_25 * state_address_25) + (float)(*(float *)&state_address_26 * *(float *)&state_address_26))
             + (float)(*(float *)&state_address_27 * *(float *)&state_address_27));
      if ( square_root_2 == *(float *)&float_word )
      {
        *(_QWORD *)&dword_140404A6C[masked_bits_23 + 18215727] = 0;
        weighted_sum_43 = *(float *)&float_word;
        dword_140404A6C[masked_bits_23 + 18215729] = 0;
        weighted_sum_44 = *(float *)&float_word;
      }
      else
      {
        *(float *)&dword_140404A6C[masked_bits_23 + 18215727] = state_address_25 * (float)(float_word_3 / square_root_2);
        weighted_sum_43 = (float)(float_word_3 / square_root_2) * *(float *)&dword_140404A6C[masked_bits_23 + 18215728];
        *(float *)&dword_140404A6C[masked_bits_23 + 18215728] = weighted_sum_43;
        weighted_sum_44 = (float)(float_word_3 / square_root_2) * *(float *)&dword_140404A6C[masked_bits_23 + 18215729];
        *(float *)&dword_140404A6C[masked_bits_23 + 18215729] = weighted_sum_44;
      }
      product_difference_10 = (float)(weighted_sum_43 * state_address_24[2]) - (float)(weighted_sum_44 * state_address_24[1]);
      *(float *)&dword_140404A6C[masked_bits_23 + 18215724] = product_difference_10;
      *(float *)&state_address_28 = (float)(*(float *)&dword_140404A6C[masked_bits_23 + 18215729] * *state_address_24)
                      - (float)(state_address_24[2] * *(float *)&dword_140404A6C[masked_bits_23 + 18215727]);
      dword_140404A6C[masked_bits_23 + 18215725] = state_address_28;
      *(float *)&state_address_29 = (float)(state_address_24[1] * *(float *)&dword_140404A6C[masked_bits_23 + 18215727])
                      - (float)(*(float *)&dword_140404A6C[masked_bits_23 + 18215728] * *state_address_24);
      dword_140404A6C[masked_bits_23 + 18215726] = state_address_29;
      square_root_3 = fsqrt(
               (float)((float)(*(float *)&state_address_28 * *(float *)&state_address_28) + (float)(product_difference_10 * product_difference_10))
             + (float)(*(float *)&state_address_29 * *(float *)&state_address_29));
      if ( square_root_3 == *(float *)&float_word )
      {
        *(_QWORD *)&dword_140404A6C[masked_bits_23 + 18215724] = 0;
        dword_140404A6C[masked_bits_23 + 18215726] = 0;
      }
      else
      {
        *(float *)&dword_140404A6C[masked_bits_23 + 18215724] = product_difference_10 * (float)(float_word_3 / square_root_3);
        *(float *)&dword_140404A6C[masked_bits_23 + 18215725] = (float)(float_word_3 / square_root_3) * *(float *)&dword_140404A6C[masked_bits_23 + 18215725];
        *(float *)&dword_140404A6C[masked_bits_23 + 18215726] = (float)(float_word_3 / square_root_3) * *(float *)&dword_140404A6C[masked_bits_23 + 18215726];
      }
    }
    masked_bits_26 = *(int *)((char *)&g_15F2D9228 + saved_float_word_2);
    element_index_2 = 1;
    comparison_operand_4 = frame_float_at_144;
    saved_state_address = (unsigned int *)state_address_48;
    dword_140404A6C[masked_bits_23 + 18215736] = dword_140404A6C[47 * masked_bits_26 + 18215736];
    dword_140404A6C[masked_bits_23 + 18215737] = dword_140404A6C[47 * masked_bits_26 + 18215737];
    dword_140404A6C[masked_bits_23 + 18215738] = dword_140404A6C[47 * masked_bits_26 + 18215738];
    weighted_sum_45 = *(float *)&dword_140404A6C[47 * masked_bits_26 + 18215737];
    float_word_20 = dword_140404A6C[47 * masked_bits_26 + 18215736];
    weighted_sum_46 = *(float *)&dword_140404A6C[47 * masked_bits_26 + 18215738];
    *(_QWORD *)&dword_140404A6C[masked_bits_23 + 18215733] = 0;
    dword_140404A6C[masked_bits_23 + 18215735] = 0;
    weighted_sum_47 = weighted_sum_45 * *(float *)&dword_140404A6C[masked_bits_23 + 18215725];
    weighted_sum_48 = weighted_sum_46 * *(float *)&dword_140404A6C[masked_bits_23 + 18215726];
    weighted_sum_49 = *(float *)&dword_140404A6C[masked_bits_23 + 18215724];
    sr_human_tick_point[1] = weighted_sum_45;
    sr_human_tick_point[0] = *(float *)&float_word_20;
    sr_human_tick_point[2] = weighted_sum_46;
    state_address_30 = (float)((float)(weighted_sum_47 + (float)(weighted_sum_49 * *(float *)&float_word_20)) + weighted_sum_48) * *(float *)&dword_140404A6C[masked_bits_23 + 18215742];
    scaled_value_15 = state_address_30 * weighted_sum_49;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215733] = state_address_30 * weighted_sum_49;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215734] = (float)(state_address_30 * *(float *)&dword_140404A6C[masked_bits_23 + 18215725])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215734];
    *(float *)&dword_140404A6C[masked_bits_23 + 18215735] = (float)(state_address_30 * *(float *)&dword_140404A6C[masked_bits_23 + 18215726])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215735];
    friction = dword_140404A6C[masked_bits_23 + 18215727];
    state_address_31 = (float)((float)((float)(weighted_sum_45 * *(float *)&dword_140404A6C[masked_bits_23 + 18215728])
                         + (float)(*(float *)&float_word_20 * *(float *)&friction))
                 + (float)(weighted_sum_46 * *(float *)&dword_140404A6C[masked_bits_23 + 18215729]))
         * *(float *)&dword_140404A6C[masked_bits_23 + 18215743];
    *(float *)&state_address_32 = (float)(state_address_31 * *(float *)&friction) + scaled_value_15;
    dword_140404A6C[masked_bits_23 + 18215733] = state_address_32;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215734] = (float)(state_address_31 * *(float *)&dword_140404A6C[masked_bits_23 + 18215728])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215734];
    *(float *)&dword_140404A6C[masked_bits_23 + 18215735] = (float)(state_address_31 * *(float *)&dword_140404A6C[masked_bits_23 + 18215729])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215735];
    weighted_sum_50 = (float)((float)((float)(weighted_sum_45 * state_address_24[1]) + (float)(*(float *)&float_word_20 * *state_address_24)) + (float)(weighted_sum_46 * state_address_24[2]))
         * *(float *)&dword_140404A6C[masked_bits_23 + 18215744];
    *(float *)&dword_140404A6C[masked_bits_23 + 18215733] = (float)(*state_address_24 * weighted_sum_50) + *(float *)&state_address_32;
    *(float *)&dword_140404A6C[masked_bits_23 + 18215734] = (float)(weighted_sum_50 * *(float *)&dword_140404A6C[masked_bits_23 + 18215731])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215734];
    *(float *)&dword_140404A6C[masked_bits_23 + 18215735] = (float)(weighted_sum_50 * *(float *)&dword_140404A6C[masked_bits_23 + 18215732])
                                                + *(float *)&dword_140404A6C[masked_bits_23 + 18215735];
    do
    {
      masked_bits_27 = *(unsigned int *)((char *)&g_18329E354 + saved_float_word);
      if ( (masked_bits_27 || product_difference_17 != 0.0) && (unsigned __int64)element_index_2 < 0xA )
        goto LABEL_347;
      float_word_24 = 100 * element_index_2;
      masked_bits_28 = 47LL * *(int *)((char *)&dword_140404A6C[78 * dword_140404A6C[25 * element_index_2 + 282486045] + 280651439] + saved_float_word);
      masked_bits_29 = 47LL * *(int *)((char *)&dword_140404A6C[78 * element_index_2 + 280651439] + saved_float_word);
      table_value = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252);
      table_value_2 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076264);
      *table_value = dword_140404A6C[masked_bits_28 + 18215724];
      table_value[1] = dword_140404A6C[masked_bits_28 + 18215725];
      table_value[2] = dword_140404A6C[masked_bits_28 + 18215726];
      *table_value_2 = dword_140404A6C[masked_bits_28 + 18215727];
      table_value_2[1] = dword_140404A6C[masked_bits_28 + 18215728];
      table_value_2[2] = dword_140404A6C[masked_bits_28 + 18215729];
      dword_140404A6C[masked_bits_29 + 18215730] = dword_140404A6C[masked_bits_28 + 18215730];
      dword_140404A6C[masked_bits_29 + 18215731] = dword_140404A6C[masked_bits_28 + 18215731];
      dword_140404A6C[masked_bits_29 + 18215732] = dword_140404A6C[masked_bits_28 + 18215732];
      if ( masked_bits_27 )
      {
        sr_human_tick_point[0] = *(float *)((char *)&g_18329E52C + saved_float_word) - (float)(*(float *)&dword_1402F6188 * float_word_3);
        sr_human_tick_point[1] = *(float *)((char *)&g_18329E530 + saved_float_word) - (float)(*(float *)&dword_1402F618C * float_word_3);
        sr_human_tick_point[2] = *(float *)((char *)&g_18329E534 + saved_float_word) - (float)(*(float *)&dword_1402F6190 * float_word_3);
        if ( (unsigned int)sub_1400DC050((float *)&dword_140404A6C[7166 * human_5 + 280651440], &sr_human_tick_point[0], 0) )
        {
          acos_result = acos(
                   fminf(
                     *(float *)((char *)&g_18329E530 + saved_float_word) - (ragdoll_unknown_height),
                     float_word_3));
          HIDWORD(float_word_21) = 0;
          *(float *)&float_word_21 = acos_result + acos_result;
        }
        else
        {
          float_word_21 = 1061752795;
        }
        switch ( element_index_2 )
        {
          case 10LL:
            /* 0x1400C0C89..0x1400C0C99: computed in double, then cvtpd2ps: the callee takes float bits. */
            text_float_bits_result = sr_export_float_lane_container(sr_text_float_bits((float)((double)(float)(*(float *)&float_word_21 * -0.5) - 0.5890486225481251)));
            break;
          case 13LL:
            text_float_bits_result = sr_export_float_lane_container(sr_text_float_bits((float)(0.196349540849375 - (double)(float)(*(float *)&float_word_21 * comparison_operand_4)))); /* 0x1400C0CBC: cvtpd2ps */
            break;
          case 11LL:
          case 14LL:
            goto LABEL_333;
          default:
            goto LABEL_334;
        }
LABEL_338:
        sr_math_mat3_rotate_rows(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252), text_float_bits_result);
        goto LABEL_339;
      }
      if ( element_index_2 == 10 || element_index_2 == 13 )
      {
        float_word_21 = 3217625051LL;
LABEL_333:
        sr_math_mat3_rotate_rows(
          ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252,
          (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252),
          *(double *)&float_word_21);
      }
LABEL_334:
      if ( element_index_2 == 2 )
      {
        *(_QWORD *)&angle_2 = *saved_state_address;
        *(float *)&angle_2 = *(float *)&angle_2 * 0.25;
        sr_math_mat3_rotate_rows(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076264), angle_2);
        *(_QWORD *)&text_float_bits_result = *state_address_47;
        *(float *)&text_float_bits_result = *(float *)&text_float_bits_result * 0.25;
        goto LABEL_338;
      }
      if ( element_index_2 == 3 )
      {
        *(_QWORD *)&angle_3 = *saved_state_address;
        *(float *)&angle_3 = *(float *)&angle_3 * 0.75;
        sr_math_mat3_rotate_rows(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076264), angle_3);
        *(_QWORD *)&text_float_bits_result = *state_address_47;
        *(float *)&text_float_bits_result = *(float *)&text_float_bits_result * 0.75;
        goto LABEL_338;
      }
LABEL_339:
      if ( !*(unsigned int *)((char *)&g_18329E334 + saved_float_word) )
      {
        if ( element_index_2 == 4 || element_index_2 == 7 )
        {
          *(_QWORD *)&angle_4 = *saved_state_address;
          *(float *)&angle_4 = *(float *)&angle_4 * -0.25;
          sr_math_mat3_rotate_rows(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076264), angle_4);
          sr_math_mat3_rotate_rows(
            ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252,
            (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252),
            sr_export_float_lane_container(3214330852LL));
        }
        if ( element_index_2 == 5 || element_index_2 == 8 )
          sr_math_mat3_rotate_rows(
            ((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252,
            (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + masked_bits_29 * 4 + 77076252),
            sr_export_float_lane_container(3200847835LL));
      }
      saved_float_word_5 = float_word_24;
      weighted_sum_51 = *(float *)((char *)&g_18399DEF0 + float_word_24);
      weighted_sum_52 = *(float *)((char *)&g_18399DEF4 + float_word_24);
      weighted_sum_53 = *(float *)((char *)&g_18399DEF8 + float_word_24);
      *(float *)&state_address_33 = (float)(weighted_sum_51 * *(float *)&dword_140404A6C[masked_bits_28 + 18215724])
                      + *(float *)&dword_140404A6C[masked_bits_28 + 18215715];
      dword_140404A6C[masked_bits_29 + 18215715] = state_address_33;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = (float)(weighted_sum_51 * *(float *)&dword_140404A6C[masked_bits_28 + 18215725])
                                                  + *(float *)&dword_140404A6C[masked_bits_28 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215717] = (float)(weighted_sum_51 * *(float *)&dword_140404A6C[masked_bits_28 + 18215726])
                                                  + *(float *)&dword_140404A6C[masked_bits_28 + 18215717];
      *(float *)&state_address_34 = (float)(weighted_sum_52 * *(float *)&dword_140404A6C[masked_bits_28 + 18215727]) + *(float *)&state_address_33;
      *(float *)&masked_bits_30 = *(float *)((char *)(unsigned int *)&g_18399DEE4 + saved_float_word_5) - weighted_sum_51;
      masked_bits_31 = *(unsigned int *)((char *)&g_18399DEE8 + saved_float_word_5);
      *(float *)&masked_bits_31 = *(float *)&masked_bits_31 - weighted_sum_52;
      dword_140404A6C[masked_bits_29 + 18215715] = state_address_34;
      weighted_sum_54 = weighted_sum_52 * *(float *)&dword_140404A6C[masked_bits_28 + 18215728];
      sr_human_tick_point[0] = *(float *)&masked_bits_30;
      sr_human_tick_point[1] = *(float *)&masked_bits_31;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = weighted_sum_54 + *(float *)&dword_140404A6C[masked_bits_29 + 18215716];
      *(float *)&state_address_35 = (float)(weighted_sum_52 * *(float *)&dword_140404A6C[masked_bits_28 + 18215729])
                      + *(float *)&dword_140404A6C[masked_bits_29 + 18215717];
      sr_human_tick_point[2] = *(float *)((char *)&g_18399DEEC + saved_float_word_5) - weighted_sum_53;
      source_component_z = sr_human_tick_point[2];
      dword_140404A6C[masked_bits_29 + 18215717] = state_address_35;
      *(float *)&state_address_36 = (float)(weighted_sum_53 * *(float *)&dword_140404A6C[masked_bits_28 + 18215730]) + *(float *)&state_address_34;
      dword_140404A6C[masked_bits_29 + 18215715] = state_address_36;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = (float)(weighted_sum_53 * *(float *)&dword_140404A6C[masked_bits_28 + 18215731])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215717] = (float)(weighted_sum_53 * *(float *)&dword_140404A6C[masked_bits_28 + 18215732])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215717];
      *(float *)&state_address_37 = (float)(*(float *)&masked_bits_30 * *(float *)&dword_140404A6C[masked_bits_29 + 18215724]) + *(float *)&state_address_36;
      dword_140404A6C[masked_bits_29 + 18215715] = state_address_37;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = (float)(*(float *)&masked_bits_30 * *(float *)&dword_140404A6C[masked_bits_29 + 18215725])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215717] = (float)(*(float *)&masked_bits_30 * *(float *)&dword_140404A6C[masked_bits_29 + 18215726])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215717];
      HIDWORD(friction) = HIDWORD(masked_bits_31);
      *(float *)&friction = (float)(*(float *)&masked_bits_31 * *(float *)&dword_140404A6C[masked_bits_29 + 18215727]) + *(float *)&state_address_37;
      dword_140404A6C[masked_bits_29 + 18215715] = friction;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = (float)(*(float *)&masked_bits_31 * *(float *)&dword_140404A6C[masked_bits_29 + 18215728])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215717] = (float)(*(float *)&masked_bits_31 * *(float *)&dword_140404A6C[masked_bits_29 + 18215729])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215717];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215715] = (float)(source_component_z * *(float *)&dword_140404A6C[masked_bits_29 + 18215730])
                                                  + *(float *)&friction;
      *(float *)&dword_140404A6C[masked_bits_29 + 18215716] = (float)(source_component_z * *(float *)&dword_140404A6C[masked_bits_29 + 18215731])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215716];
      *(float *)&dword_140404A6C[masked_bits_29 + 18215717] = (float)(source_component_z * *(float *)&dword_140404A6C[masked_bits_29 + 18215732])
                                                  + *(float *)&dword_140404A6C[masked_bits_29 + 18215717];
      dword_140404A6C[masked_bits_29 + 18215718] = dword_140404A6C[masked_bits_28 + 18215718];
      dword_140404A6C[masked_bits_29 + 18215719] = dword_140404A6C[masked_bits_28 + 18215719];
      dword_140404A6C[masked_bits_29 + 18215720] = dword_140404A6C[masked_bits_28 + 18215720];
LABEL_347:
      ++element_index_2;
    }
    while ( element_index_2 <= 15 );
    float_word = LODWORD(frame_float_at_80);
    saved_float_word_2 = float_word_25;
LABEL_349:
    state_address_2 = (*(unsigned int *)((char *)&g_18329E51C + saved_float_word) & 0x800) == 0;
    *(float *)((char *)&g_18329E338 + saved_float_word) = weighted_sum_81;
    *(unsigned int *)((char *)&g_18329E33C + saved_float_word) = 100;
    if ( state_address_2 )
    {
      *(unsigned int *)((char *)&g_18329E354 + saved_float_word) = 0;
      goto LABEL_361;
    }
    masked_bits_32 = *(unsigned int *)((char *)&g_18329E354 + saved_float_word);
    if ( masked_bits_32 <= 0
      || (integer_sum_2 = masked_bits_32 + 1,
          *(unsigned int *)((char *)&g_18329E354 + saved_float_word) = integer_sum_2,
          friction = *(unsigned int *)((char *)&g_18329E394 + saved_float_word),
          *(float *)&friction = (float)((float)(*(float *)&friction * *(float *)&friction)
                                 + (float)(*(float *)((char *)&g_18329E398 + saved_float_word)
                                         * *(float *)((char *)&g_18329E398 + saved_float_word)))
                         + (float)(*(float *)((char *)&g_18329E39C + saved_float_word)
                                 * *(float *)((char *)&g_18329E39C + saved_float_word)),
          integer_sum_2 < (int)(float)((float)(fsqrt(*(float *)&friction) * 60.0) + float_word_3) + 30) )
    {
LABEL_361:
      unused_written_slot = state_address_47;
      unused_written_slot_2 = state_address_48;
    }
    else
    {
      unused_written_slot = state_address_47;
      unused_written_slot_2 = state_address_48;
      *(unsigned int *)((char *)&g_18329E330 + saved_float_word) = -1;
      *unused_written_slot = *(unsigned int *)((char *)&g_18329E3A4 + saved_float_word);
      *(unsigned int *)((char *)&g_18329E450 + saved_float_word) = *(unsigned int *)((char *)&g_18329E3E0
                                                                                     + saved_float_word);
      masked_bits_33 = 24944LL * *(int *)((char *)&g_15F2D9204 + saved_float_word_2);
      *unused_written_slot_2 = 0;
      *(unsigned int *)((char *)&g_15F2DC820 + saved_float_word_2) = 4;
      *(unsigned int *)((char *)&g_18329E354 + saved_float_word) = 0;
      if ( !dword_140404A6C[masked_bits_33 + 346707718] )
      {
        integer_sum_3 = saved_float_word + 1126819124;
        iteration_count_7 = 0;
        saved_human_2 = human_5;
        weighted_sum_55 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + integer_sum_3);
        running_total_2 = 0;
        do
        {
          if ( iteration_count_7 != 12
            && iteration_count_7 != 15
            && (unsigned int)sub_1400DC050(
                               (float *)((char *)&g_15F2D922C + saved_float_word_2),
                               (float *)&dword_140404A6C[7166 * saved_human_2 + 280651440 + running_total_2],
                               0) )
          {
            weighted_sum_56 = (float)(g_151A84890 * 0.0625) + (ragdoll_unknown_height);
            *(weighted_sum_55 - 2) = (float)(g_151A8488C * 0.0625) + *(float *)&g_151A84880;
            scaled_value_16 = g_151A84894 * 0.0625;
            *(weighted_sum_55 - 1) = weighted_sum_56;
            *weighted_sum_55 = scaled_value_16 + *(float *)&g_151A84888;
          }
          ++iteration_count_7;
          running_total_2 += 78;
          weighted_sum_55 += 78;
        }
        while ( iteration_count_7 < 16 );
        saved_float_word = float_word_26;
        goto LABEL_361;
      }
    }
    if ( *(int *)((char *)&g_18329E344 + saved_float_word) <= 0
      || *(int *)((char *)&g_1832A5058 + saved_float_word) < 50 )
    {
      *(unsigned int *)((char *)&g_18329E330 + saved_float_word) = -1;
      *unused_written_slot_2 = *(unsigned int *)((char *)&g_18329E3A0 + saved_float_word);
      *unused_written_slot = *(unsigned int *)((char *)&g_18329E3A4 + saved_float_word);
      *(unsigned int *)((char *)&g_15F2DC820 + saved_float_word_2) = 4;
    }
    human = human_5;
    if ( (*(unsigned int *)((char *)&g_18329E51C + saved_float_word) & 0x800) != 0
      && (*(unsigned int *)((char *)&g_18329E520 + saved_float_word) & 0x800) == 0 )
    {
      *(unsigned int *)((char *)&g_18329E354 + saved_float_word) = 1;
    }
LABEL_368:
    if ( *(int *)((char *)&g_18329E344 + saved_float_word) <= 0 )
    {
      remaining_count_3 = 7;
      state_address_38 = (int *)((char *)&g_1832A4DDC + saved_float_word);
      while ( 1 )
      {
        if ( *(state_address_38 - 1) > 0 )
        {
          friction = float_word;
          scaled_index_14 = 1760LL * *state_address_38;
          scaled_index_15 = 47LL * (int)dword_140404A6C[scaled_index_14 + 278845915];
          dword_140404A6C[scaled_index_15 + 18215718] = *(unsigned int *)((char *)&g_18329E544 + saved_float_word);
          dword_140404A6C[scaled_index_15 + 18215719] = *(unsigned int *)((char *)&g_18329E548 + saved_float_word);
          dword_140404A6C[scaled_index_15 + 18215720] = *(unsigned int *)((char *)&g_18329E54C + saved_float_word);
          sr_human_random_direction(&sr_human_tick_point[0], 0.016666668, *(float *)&float_word);
          source_component_x = sr_human_tick_point[0];
          source_component_y = sr_human_tick_point[1];
          *(_QWORD *)&dword_140404A6C[scaled_index_14 + 278845895] = 0;
          scaled_index_16 = 47LL * (int)dword_140404A6C[scaled_index_14 + 278845915];
          *(float *)&dword_140404A6C[scaled_index_16 + 18215718] = source_component_x + *(float *)&dword_140404A6C[scaled_index_16 + 18215718];
          source_component_z_2 = sr_human_tick_point[2];
          *(float *)&dword_140404A6C[scaled_index_16 + 18215719] = source_component_y + *(float *)&dword_140404A6C[scaled_index_16 + 18215719];
          *(float *)&dword_140404A6C[scaled_index_16 + 18215720] = source_component_z_2 + *(float *)&dword_140404A6C[scaled_index_16 + 18215720];
          item = *state_address_38;
          if ( (unsigned int)item <= 0x3FF )
          {
            scaled_index_17 = 1760 * item;
            loaded_word_5 = *state_address_38;
            parent = dword_140404A6C[1760 * item + 278845903];
            if ( parent != -1 )
            {
              sr_world_detach_item(item, parent);
              goto LABEL_377;
            }
            human_2 = dword_140404A6C[scaled_index_17 + 278845902];
            if ( human_2 != -1 )
            {
              sr_world_take_item(item, human_2, dword_140404A6C[scaled_index_17 + 278845904]);
LABEL_377:
              if ( game_connected )
                ++dword_140404A6C[loaded_word_5 + 280648157];
            }
          }
        }
        state_address_38 += 10;
        if ( !--remaining_count_3 )
          goto LABEL_380;
      }
    }
    sub_1400B62E0(human);
    sub_1400A87A0(human);
LABEL_380:
    remaining_count_4 = 16;
    state_address_39 = (char *)&g_18329E570 + saved_float_word;
    do
    {
      loaded_word_6 = *((int *)state_address_39 - 18);
      state_address_39 += 312;
      *((_DWORD *)state_address_39 - 95) = dword_140404A6C[47 * loaded_word_6 + 18215715];
      *((_DWORD *)state_address_39 - 94) = dword_140404A6C[47 * loaded_word_6 + 18215716];
      *((_DWORD *)state_address_39 - 93) = dword_140404A6C[47 * loaded_word_6 + 18215717];
      *((_DWORD *)state_address_39 - 89) = dword_140404A6C[47 * loaded_word_6 + 18215718];
      *((_DWORD *)state_address_39 - 88) = dword_140404A6C[47 * loaded_word_6 + 18215719];
      *((_DWORD *)state_address_39 - 87) = dword_140404A6C[47 * loaded_word_6 + 18215720];
      state_address_40 = &dword_140404A6C[47 * loaded_word_6 + 18215724];
      *((_DWORD *)state_address_39 - 83) = *state_address_40;
      *((_DWORD *)state_address_39 - 82) = state_address_40[1];
      *((_DWORD *)state_address_39 - 81) = state_address_40[2];
      *((_DWORD *)state_address_39 - 80) = state_address_40[3];
      *((_DWORD *)state_address_39 - 79) = state_address_40[4];
      *((_DWORD *)state_address_39 - 78) = state_address_40[5];
      *((_DWORD *)state_address_39 - 77) = state_address_40[6];
      *((_DWORD *)state_address_39 - 76) = state_address_40[7];
      *((_DWORD *)state_address_39 - 75) = state_address_40[8];
      *((_DWORD *)state_address_39 - 74) = dword_140404A6C[47 * loaded_word_6 + 18215736];
      *((_DWORD *)state_address_39 - 73) = dword_140404A6C[47 * loaded_word_6 + 18215737];
      *((_DWORD *)state_address_39 - 72) = dword_140404A6C[47 * loaded_word_6 + 18215738];
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    human_3 = human_5;
    sr_human_drive_ragdoll(human_5, loaded_word_6, *(double *)&friction);
    saved_float_word_6 = float_word_26;
    saved_float_word_7 = float_word_25;
    if ( *(float *)((char *)(unsigned int *)&g_18329E56C + float_word_26) < 0.70700002 )
      *(unsigned int *)((char *)&g_1832A4A3C + float_word_26) = 0;
    if ( *(unsigned int *)((char *)&g_18329E330 + saved_float_word_6) != -1 )
    {
      *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6) = 4;
      *(unsigned int *)((char *)&g_1832A4C14 + saved_float_word_6) = 0;
      *(unsigned int *)((char *)&g_1832A4CF0 + saved_float_word_6) = 0;
      masked_bits_34 = *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6);
      goto LABEL_386;
    }
    masked_bits_34 = *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6);
    if ( masked_bits_34 == 4 )
    {
      *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6) = 1;
      saved_masked_bits = 1;
      *(unsigned int *)((char *)&g_1832A4BBC + saved_float_word_6) = 0;
      goto LABEL_392;
    }
LABEL_386:
    saved_masked_bits = masked_bits_34;
    if ( masked_bits_34 == 2 )
    {
      if ( (*(unsigned int *)((char *)&g_18329E51C + saved_float_word_6) & 0x80000) == 0 )
      {
        saved_masked_bits = 0;
        *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6) = 0;
        goto LABEL_392;
      }
LABEL_393:
      *(unsigned int *)((char *)&g_18329E360 + saved_float_word_6) = 2;
      sr_human_lie_legs(human_3);
    }
    else
    {
      if ( masked_bits_34 != 3 )
      {
LABEL_392:
        if ( (*(unsigned int *)((char *)&g_18329E51C + saved_float_word_6) & 0x80000) != 0 )
          goto LABEL_393;
      }
      if ( (saved_masked_bits & 0xFFFFFFFA) != 0 || saved_masked_bits == 4 )
      {
        switch ( saved_masked_bits )
        {
          case 2:
            sr_human_lie_legs(human_3);
            break;
          case 4:
            sr_human_sit_legs(human_3);
            break;
          case 3:
            sr_human_launch_jump(human_3);
            break;
        }
      }
      else
      {
        sr_human_stand_legs(human_3);
      }
    }
    if ( *(int *)((char *)&g_18329E344 + saved_float_word_6) <= 0
      || *(int *)((char *)&g_1832A5058 + saved_float_word_6) < 50 )
    {
      human_4 = human_5;
      running_total_3 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + saved_float_word_6 + 1126819712);
      state_address_41 = (int *)&g_18399DF44;
      child_bone = 1;
      do
      {
        loaded_word_7 = *running_total_3;
        parent_bone = *state_address_41;
        scaled_index_18 = 36 * loaded_word_7;
        axis = &dword_140404A6C[36 * loaded_word_7 + 485543049];
        *(_QWORD *)&dword_140404A6C[scaled_index_18 + 485543033] = 0;
        dword_140404A6C[scaled_index_18 + 485543035] = 0;
        dword_140404A6C[scaled_index_18 + 485543048] = 0;
        *(_QWORD *)axis = 0;
        axis[2] = 0;
        sr_human_limit_joint_angles(human_4, parent_bone, child_bone, (float *)axis);
        if ( fsqrt(
               (float)((float)(*(float *)&dword_140404A6C[scaled_index_18 + 485543049]
                             * *(float *)&dword_140404A6C[scaled_index_18 + 485543049])
                     + (float)(*(float *)&dword_140404A6C[scaled_index_18 + 485543050]
                             * *(float *)&dword_140404A6C[scaled_index_18 + 485543050]))
             + (float)(*(float *)&dword_140404A6C[scaled_index_18 + 485543051] * *(float *)&dword_140404A6C[scaled_index_18 + 485543051])) > *(float *)&float_word )
          dword_140404A6C[scaled_index_18 + 485543048] = 1;
        ++child_bone;
        running_total_3 += 78;
        state_address_41 += 25;
        dword_140404A6C[61 * loaded_word_7 + 486149287] = 964689920;
      }
      while ( child_bone < 16 );
      saved_float_word_6 = float_word_26;
      saved_float_word_7 = float_word_25;
      human_3 = human_5;
    }
    state_address_2 = LODWORD(weighted_sum_81) == -1;
    *(unsigned int *)((char *)&g_18329E388 + saved_float_word_6) = *(unsigned int *)((char *)&g_18329E52C
                                                                                    + saved_float_word_6);
    *(unsigned int *)((char *)&g_18329E38C + saved_float_word_6) = *(unsigned int *)((char *)&g_18329E530
                                                                                    + saved_float_word_6);
    *(unsigned int *)((char *)&g_18329E390 + saved_float_word_6) = *(unsigned int *)((char *)&g_18329E534
                                                                                    + saved_float_word_6);
    *(unsigned int *)((char *)&g_18329E30C + saved_float_word_6) = 1;
    if ( !state_address_2
      && !dword_140404A6C[24944 * *(unsigned int *)((char *)&g_15F2D9204 + saved_float_word_7) + 346707718]
      && !*(unsigned int *)((char *)&g_18329E354 + saved_float_word_6) )
    {
      masked_bits_35 = *(unsigned int *)((char *)&g_18329E30C + saved_float_word_6);
      if ( product_difference_17 == 0.0 )
        masked_bits_35 = 0;
      *(unsigned int *)((char *)&g_18329E30C + saved_float_word_6) = masked_bits_35;
    }
    if ( *(float *)((char *)&g_18329E530 + saved_float_word_6) < -32.0 )
      *(unsigned int *)((char *)&g_18329E344 + saved_float_word_6) = -100;
    if ( *(unsigned int *)((char *)&g_18329E330 + saved_float_word_6) == -1 )
      sr_human_collide(human_3);
    if ( *(int *)((char *)&g_18329E344 + saved_float_word_6) > 0 )
    {
      if ( *(unsigned int *)((char *)&g_18329E310 + saved_float_word_6) == -1 )
      {
        masked_bits_42 = *(unsigned int *)((char *)&g_18329E340 + saved_float_word_6) - 1;
        goto LABEL_472;
      }
      *(unsigned int *)((char *)&g_18329E340 + saved_float_word_6) = 3600;
    }
    else
    {
      cached_game_type = game_type;
      selection_code = 3480;
      if ( game_type == 7 && g_183F7A5F8 )
        selection_code = 3300;
      masked_bits_36 = *(unsigned int *)((char *)&g_18329E340 + saved_float_word_6);
      masked_bits_37 = masked_bits_36;
      if ( masked_bits_36 < selection_code )
      {
        masked_bits_38 = *(int *)((char *)&g_18329E310 + saved_float_word_6);
        if ( (_DWORD)masked_bits_38 == -1 )
        {
          masked_bits_41 = *(int *)((char *)&g_18329E314 + saved_float_word_6);
          if ( (_DWORD)masked_bits_41 != -1 )
          {
            if ( (int)masked_bits_41 >= 0 && (int)masked_bits_41 < (int)g_160361344 )
            {
              scaled_index_20 = dword_140404A6C[28 * masked_bits_41 + 134050374];
              if ( (int)(scaled_index_20 - 10000) > 0 )
                dword_140404A6C[28 * masked_bits_41 + 134050374] = scaled_index_20 - (int)(float)((float)(int)(scaled_index_20 - 10000) * frame_float_at_148);
            }
            *(unsigned int *)((char *)&g_18329E314 + saved_float_word_6) = -1;
            masked_bits_37 = masked_bits_36;
          }
        }
        else
        {
          if ( game_type == 4 && (unsigned int)masked_bits_38 <= 0xFF )
          {
            sub_14011AF80(masked_bits_38, dword_140404A6C[3597 * masked_bits_38 + 71856288]);
            player = masked_bits_38;
            goto LABEL_430;
          }
          player = *(unsigned int *)((char *)&g_18329E310 + saved_float_word_6);
          if ( (unsigned int)masked_bits_38 <= 0xFF )
          {
LABEL_430:
            scaled_index_19 = 3597LL * player;
            table_value_3 = dword_140404A6C[scaled_index_19 + 71856272];
            if ( (int)(table_value_3 - 10000) > 0 )
              dword_140404A6C[scaled_index_19 + 71856272] = table_value_3 - (int)(float)((float)(int)(table_value_3 - 10000) * frame_float_at_148);
            table_value_4 = (int)dword_140404A6C[scaled_index_19 + 71856286];
            if ( (_DWORD)table_value_4 != -1 && (int)table_value_4 < 6 )
            {
              table_value_5 = dword_140404A6C[scaled_index_19 + 71856288];
              masked_bits_39 = (int)(float)((float)((float)((float)table_value_5 * *(float *)&dword_140404A6C[6 * table_value_4 + 335047062])
                                        - 10000.0)
                                / *(float *)&dword_140404A6C[6 * table_value_4 + 335047062]);
              if ( masked_bits_39 > 0 )
              {
                dword_140404A6C[6 * table_value_4 + 335047061] -= masked_bits_39 / 20;
                dword_140404A6C[scaled_index_19 + 71856288] = table_value_5 - masked_bits_39 / 20;
              }
            }
            sr_event_player_finance(player);
          }
          if ( cached_game_type == 4 )
          {
            if ( !g_183F7A5F4 )
            {
              sub_140138430(masked_bits_38, 17);
              cached_game_type = game_type;
            }
            masked_bits_38 = *(int *)((char *)&g_18329E310 + saved_float_word_6);
            dword_140404A6C[3597 * masked_bits_38 + 71856291] = 30 * (dword_140404A6C[3597 * masked_bits_38 + 71856276] + 40);
          }
          if ( cached_game_type == 5 )
          {
            if ( (unsigned int)masked_bits_38 <= 0xFF )
            {
              integer_quotient = (signed int)g_183F7A31C / 3;
              crt_sprintf(source_buffer, "%s has died", (     char *)&dword_140404A6C[3597 * (int)masked_bits_38 + 71856254]);
              if ( game_connected )
              {
                byte_count = -1;
                do
                  ++byte_count;
                while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count] );
                cached_world_event_count = world_event_count;
                if ( (int)byte_count > 63 )
                  LODWORD(byte_count) = 63;
                cached_game_tick_2 = game_tick;
                shifted_bits = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick_2;
                crt_memcpy((__m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238560), source_buffer, (int)byte_count);
                *(_BYTE *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238560 + (int)byte_count) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = byte_count;
                *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 3;
                world_event_count = cached_world_event_count + 1;
                *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = -1;
                HIWORD(world_event_count) = 0;
                *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = 0;
              }
              state_word_2 = g_183EBFCD4;
              if ( (int)g_183EBFCD4 <= 50400 )
              {
                if ( integer_quotient > 0 )
                  state_word_2 = 18000 / integer_quotient + g_183EBFCD4;
                if ( state_word_2 > 50400 )
                  state_word_2 = 50400;
                g_183EBFCD4 = state_word_2;
              }
              cached_game_type = game_type;
              goto LABEL_456;
            }
          }
          else
          {
LABEL_456:
            if ( cached_game_type == 7 )
            {
              masked_bits_40 = 3597LL * *(int *)((char *)&g_18329E310 + saved_float_word_6);
              dword_140404A6C[masked_bits_40 + 71857786] = 0;
              dword_140404A6C[masked_bits_40 + 71857811] = 0;
              dword_140404A6C[masked_bits_40 + 71857836] = 0;
              dword_140404A6C[masked_bits_40 + 71857861] = 0;
              dword_140404A6C[masked_bits_40 + 71857886] = 0;
              dword_140404A6C[masked_bits_40 + 71857911] = 0;
              dword_140404A6C[masked_bits_40 + 71857936] = 0;
            }
          }
          player_2 = *(unsigned int *)((char *)&g_18329E310 + saved_float_word_6);
          dword_140404A6C[3597 * player_2 + 71856292] = -1;
          sr_event_player_update(player_2);
          masked_bits_37 = *(unsigned int *)((char *)&g_18329E340 + saved_float_word_6);
          *(_QWORD *)((char *)&g_18329E310 + saved_float_word_6) = -1;
        }
      }
      masked_bits_42 = masked_bits_37 - 1;
      if ( ((cached_game_type - 3) & 0xFFFFFFFD) == 0 && masked_bits_42 < 4 )
        masked_bits_42 = 4;
LABEL_472:
      *(unsigned int *)((char *)&g_18329E340 + saved_float_word_6) = masked_bits_42;
      if ( masked_bits_42 <= 0 )
        sub_14007F590(human_5);
    }
    state_address_42 = (float *)((char *)&g_18329E74C + saved_float_word_6);
    *(unsigned int *)((char *)&g_18329E520 + saved_float_word_6) = *(unsigned int *)((char *)&g_18329E51C
                                                                                    + saved_float_word_6);
    state_address_43 = &g_18399DF44;
    do
    {
      product_difference_11 = *(state_address_42 - 39);
      product_difference_12 = *(state_address_42 - 46);
      product_difference_13 = *(state_address_42 - 38);
      product_difference_14 = *(state_address_42 - 45);
      scaled_index_21 = (int)*state_address_43;
      *(float *)&float_word_24 = *(state_address_42 - 44);
      weighted_sum_81 = product_difference_14;
      saved_state_address_2 = product_difference_12;
      product_difference_17 = *(state_address_42 - 42);
      *(float *)&float_word_26 = product_difference_11;
      *(float *)&state_address_48 = product_difference_13;
      scaled_index_22 = saved_float_word_6 + 312 * scaled_index_21;
      weighted_sum_57 = *(float *)((char *)&g_18329E560 + scaled_index_22);
      weighted_sum_58 = *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_22);
      weighted_sum_59 = *(float *)((char *)&g_18329E564 + scaled_index_22);
      weighted_sum_60 = *(float *)((char *)(unsigned int *)&g_18329E56C + scaled_index_22);
      weighted_sum_61 = *(float *)((char *)&g_18329E568 + scaled_index_22);
      weighted_sum_62 = *(float *)((char *)&g_18329E570 + scaled_index_22);
      weighted_sum_63 = *(float *)((char *)&g_18329E574 + scaled_index_22);
      saved_state_address_3 = *(state_address_42 - 43);
      product_difference_15 = *(state_address_42 - 40);
      weighted_sum_64 = (float)((float)(product_difference_12 * weighted_sum_58) + (float)(product_difference_14 * weighted_sum_57)) + (float)(*(float *)&float_word_24 * weighted_sum_59);
      product_difference_16 = *(state_address_42 - 41);
      weighted_sum_65 = (float)((float)(saved_state_address_3 * weighted_sum_58) + (float)(product_difference_17 * weighted_sum_57)) + (float)(product_difference_16 * weighted_sum_59);
      *(float *)&float_word_25 = product_difference_15;
      weighted_sum_66 = sub_14023F704(
               (float)((float)(product_difference_15 * weighted_sum_61) + (float)(product_difference_11 * weighted_sum_60)) + (float)(product_difference_13 * weighted_sum_62),
               (float)((float)(product_difference_15 * weighted_sum_63) + (float)(*(float *)((char *)&g_18329E578 + scaled_index_22) * product_difference_11))
             + (float)(*(float *)((char *)&g_18329E57C + scaled_index_22) * product_difference_13));
      *(_QWORD *)&state_address_44 = (unsigned int)float_word_26;
      saved_weighted_sum_4 = weighted_sum_66;
      *(float *)&state_address_44 = *(float *)&float_word_26 * weighted_sum_57;
      sr_human_tick_point[0] = fsqrt((float)(weighted_sum_65 * weighted_sum_65) + (float)(weighted_sum_64 * weighted_sum_64));
      xor_value_2 = sub_14023F704(
               COERCE_FLOAT(
                 COERCE_UNSIGNED_INT(
                   (float)((float)(*(float *)&float_word_25 * weighted_sum_58) + (float)(*(float *)&float_word_26 * weighted_sum_57))
                 + (float)(*(float *)&state_address_48 * weighted_sum_59))
               ^ packed_word_bits),
               sr_human_tick_point[0]);
      call_result = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(saved_weighted_sum_4)), unrecovered_register_value, state_address_44);
      weighted_sum_67 = *(float *)((char *)&g_18329E57C + scaled_index_22);
      weighted_sum_68 = *(float *)((char *)&g_18329E578 + scaled_index_22) * product_difference_17;
      weighted_sum_69 = (float)(saved_state_address_2 * weighted_sum_63) + (float)(*(float *)((char *)&g_18329E578 + scaled_index_22) * weighted_sum_81);
      sr_human_tick_point[1] = SR_VEC_LANES(128, call_result, f32)[0];
      sr_human_tick_point[2] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(call_result, call_result, 1), f32)[0];
      SR_VEC_LANES(128, call_result, f32)[0] = sub_14023F704(
                           (float)((float)(weighted_sum_69 + (float)(weighted_sum_67 * *(float *)&float_word_24)) * sr_human_tick_point[1])
                         - (float)((float)((float)((float)(saved_state_address_2 * weighted_sum_61) + (float)(weighted_sum_60 * weighted_sum_81))
                                         + (float)(weighted_sum_62 * *(float *)&float_word_24))
                                 * sr_human_tick_point[2]),
                           (float)((float)((float)((float)(saved_state_address_3 * weighted_sum_61) + (float)(product_difference_17 * weighted_sum_60)) + (float)(product_difference_16 * weighted_sum_62))
                                 * sr_human_tick_point[2])
                         - (float)((float)((float)((float)(saved_state_address_3 * weighted_sum_63) + weighted_sum_68) + (float)(weighted_sum_67 * product_difference_16)) * sr_human_tick_point[1]));
      cached_state_address = saved_state_address_2;
      *(float *)&state_address_44 = weighted_sum_81;
      scaled_value_17 = *(float *)&float_word_24;
      *(state_address_42 - 6) = SR_VEC_LANES(128, call_result, f32)[0];
      *(state_address_42 - 7) = xor_value_2;
      *(state_address_42 - 8) = saved_weighted_sum_4;
      weighted_sum_70 = *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_22);
      weighted_sum_71 = *(float *)((char *)&g_18329E560 + scaled_index_22);
      weighted_sum_72 = *(float *)((char *)&g_18329E564 + scaled_index_22);
      weighted_sum_73 = *(float *)((char *)(unsigned int *)&g_18329E56C + scaled_index_22);
      weighted_sum_74 = *(float *)((char *)&g_18329E568 + scaled_index_22);
      weighted_sum_75 = *(float *)((char *)&g_18329E570 + scaled_index_22);
      weighted_sum_76 = *(float *)((char *)&g_18329E578 + scaled_index_22);
      weighted_sum_77 = *(float *)((char *)&g_18329E574 + scaled_index_22);
      weighted_sum_78 = *(float *)((char *)&g_18329E57C + scaled_index_22);
      state_address_45 = (float)(weighted_sum_71 * *(float *)&state_address_44) + (float)(cached_state_address * weighted_sum_70);
      *(float *)&state_address_47 = weighted_sum_70;
      SR_VEC_LANES(128, call_result, f32)[0] = cached_state_address;
      scaled_value_18 = weighted_sum_76 * *(float *)&state_address_44;
      state_address_46 = (float)((float)(weighted_sum_73 * *(float *)&state_address_44) + (float)(SR_VEC_LANES(128, call_result, f32)[0] * weighted_sum_74)) + (float)(weighted_sum_75 * scaled_value_17);
      scaled_value_19 = weighted_sum_70 * saved_state_address_3;
      state_address_43 += 25;
      *(float *)&state_address_44 = weighted_sum_77 * saved_state_address_3;
      scaled_value_20 = weighted_sum_72 * product_difference_16;
      SR_VEC_LANES(128, call_result, f32)[0] = saved_state_address_2 * weighted_sum_77;
      *(state_address_42 - 5) = state_address_45 + (float)(weighted_sum_72 * scaled_value_17);
      *(state_address_42 - 4) = state_address_46;
      component_sum_2 = scaled_value_18 + SR_VEC_LANES(128, call_result, f32)[0];
      SR_VEC_LANES(128, call_result, f32)[0] = weighted_sum_78 * scaled_value_17;
      scaled_value_21 = weighted_sum_74 * saved_state_address_3;
      weighted_sum_79 = scaled_value_19 + (float)(product_difference_17 * weighted_sum_71);
      *(state_address_42 - 3) = component_sum_2 + SR_VEC_LANES(128, call_result, f32)[0];
      scaled_value_22 = *(float *)&state_address_48;
      component_sum_3 = weighted_sum_79 + scaled_value_20;
      scaled_value_23 = weighted_sum_75 * product_difference_16;
      weighted_sum_80 = scaled_value_21 + (float)(product_difference_17 * weighted_sum_73);
      SR_VEC_LANES(128, call_result, f32)[0] = product_difference_17 * weighted_sum_76;
      *(state_address_42 - 2) = component_sum_3;
      scaled_value_24 = *(float *)&float_word_26;
      *(float *)&state_address_44 = (float)(*(float *)&state_address_44 + SR_VEC_LANES(128, call_result, f32)[0]) + (float)(weighted_sum_78 * product_difference_16);
      *(state_address_42 - 1) = weighted_sum_80 + scaled_value_23;
      scaled_value_25 = *(float *)&float_word_25;
      scaled_value_26 = weighted_sum_74 * *(float *)&float_word_25;
      *state_address_42 = *(float *)&state_address_44;
      state_address_42[1] = (float)((float)(*(float *)&state_address_47 * scaled_value_25) + (float)(scaled_value_24 * weighted_sum_71)) + (float)(scaled_value_22 * weighted_sum_72);
      state_address_42[2] = (float)(scaled_value_26 + (float)(scaled_value_24 * weighted_sum_73)) + (float)(scaled_value_22 * weighted_sum_75);
      state_address_42[3] = (float)((float)(weighted_sum_77 * scaled_value_25) + (float)(scaled_value_24 * weighted_sum_76)) + (float)(scaled_value_22 * weighted_sum_78);
      state_address_42 += 78;
    }
    while ( (__int64)state_address_43 < (__int64)&g_18399E520 );
    float_word = LODWORD(frame_float_at_80);
    float_word_2 = selection_code_2;
    float_word_3 = *(float *)&float_word_23;
    scaled_value = *(float *)&float_word_22;
    float_word_5 = frame_float_at_144;
    scaled_value_2 = *(double *)&callee_output_word;
    float_word_4 = *(double *)&callee_output_word_2;
    human = human_5;
    leg = saved_leg;
    element_index = saved_element_index;
LABEL_477:
    ++human;
    ++element_index;
    human_5 = human;
    saved_element_index = element_index;
  }
  while ( human < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef frame_float_at_80
#undef human_5
#undef product_difference_16
#undef saved_state_address_2
#undef saved_state_address_3
#undef product_difference_17
#undef float_word_22
#undef weighted_sum_81
#undef state_address_47
#undef state_address_48
#undef frame_float_at_144
#undef frame_float_at_148
#undef packed_word_bits
#undef float_word_23
#undef float_word_24
#undef float_word_25
#undef float_word_26
#undef frame_float_at_224
#undef selection_code_2
#undef saved_leg
#undef saved_state_address_4
#undef frame_float_at_288
#undef frame_float_at_292
#undef frame_float_at_296
#undef frame_float_at_300
#undef frame_float_at_304
#undef frame_float_at_308
#undef component_delta_6
#undef float_word_27
#undef component_delta_7
#undef float_word_28
#undef saved_element_index
#undef frame_float_at_344
#undef callee_output_word
#undef callee_output_word_2
#undef frame_float_at_368
#undef component_delta_8
#undef source_buffer
#undef unused_frame_slot_704

//----- (00000001400C2210) ----------------------------------------------------
unsigned __int64 sub_1400C2210()
{
  unsigned __int64 result;
  __int64 running_total;
  __int64 remaining_count;
  __int64 float_word;
  __int64 table_value;
  __int64 table_value_2;
  int table_value_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float combined_products_7;
  __int64 scaled_index;
  float combined_products_8;
  __int64 scaled_index_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float state_address;
  unsigned int state_address_2;
  float weighted_sum_7;
  unsigned int state_address_3;
  float weighted_sum_8;
  unsigned int saved_masked_bits;
  int table_value_4;
  unsigned int float_word_2;
  float weighted_sum_9;
  unsigned int state_address_4;
  float weighted_sum_10;
  unsigned int masked_bits;
  __int128 masked_bits_2;
  __int128 masked_bits_3;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  int iteration_count;
  unsigned int *state_address_5;
  __int64 running_total_2;
  float *state_address_6;
  __int64 packed_word_bits;
  __int64 scaled_index_3;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float source_component_y;
  float source_component_z;
  float source_component_w;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float weighted_sum_22;
  __int64 scaled_index_4;
  float weighted_sum_23;
  float weighted_sum_24;
  float weighted_sum_25;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C2210[352];
#define combined_products_9 (*(float (*))(void *)(sr_frame_1400C2210 + 0)) /* [rsp+20h] */
#define combined_products_10 (*(float (*))(void *)(sr_frame_1400C2210 + 4)) /* [rsp+24h] */
#define combined_products_11 (*(float (*))(void *)(sr_frame_1400C2210 + 8)) /* [rsp+28h] */
#define combined_products_12 (*(float (*))(void *)(sr_frame_1400C2210 + 12)) /* [rsp+2Ch] */
#define combined_products_13 (*(float (*))(void *)(sr_frame_1400C2210 + 16)) /* [rsp+30h] */
#define combined_products_14 (*(float (*))(void *)(sr_frame_1400C2210 + 20)) /* [rsp+34h] */
#define combined_products_15 (*(float (*))(void *)(sr_frame_1400C2210 + 24)) /* [rsp+38h] */
#define combined_products_16 (*(float (*))(void *)(sr_frame_1400C2210 + 28)) /* [rsp+3Ch] */
#define combined_products_17 (*(float (*))(void *)(sr_frame_1400C2210 + 32)) /* [rsp+40h] */
#define combined_products_18 (*(float (*))(void *)(sr_frame_1400C2210 + 36)) /* [rsp+44h] */
#define combined_products_19 (*(float (*))(void *)(sr_frame_1400C2210 + 40)) /* [rsp+48h] */
#define combined_products_20 (*(float (*))(void *)(sr_frame_1400C2210 + 44)) /* [rsp+4Ch] */
#define combined_products_21 (*(float (*))(void *)(sr_frame_1400C2210 + 48)) /* [rsp+50h] */
#define combined_products_22 (*(float (*))(void *)(sr_frame_1400C2210 + 52)) /* [rsp+54h] */
#define combined_products_23 (*(float (*))(void *)(sr_frame_1400C2210 + 56)) /* [rsp+58h] */
#define combined_products_24 (*(float (*))(void *)(sr_frame_1400C2210 + 60)) /* [rsp+5Ch] */
#define integer_difference (*(__int64 (*))(void *)(sr_frame_1400C2210 + 64)) /* [rsp+60h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400C2210 + 312)) /* [rsp+158h] */
#define weighted_sum_26 (*(float (*))(void *)(sr_frame_1400C2210 + 320)) /* [rsp+160h] */
#define combined_products_25 (*(float (*))(void *)(sr_frame_1400C2210 + 328)) /* [rsp+168h] */
#define combined_products_26 (*(float (*))(void *)(sr_frame_1400C2210 + 336)) /* [rsp+170h] */
#define combined_products_27 (*(float (*))(void *)(sr_frame_1400C2210 + 344)) /* [rsp+178h] */

  result = (unsigned __int64)&retaddr;
  running_total = 0;
  remaining_count = 256;
  float_word = 0;
  integer_difference = 256;
  do
  {
    if ( dword_140404A6C[running_total + 280651303] )
    {
      table_value = (int)dword_140404A6C[running_total + 280651313];
      if ( (_DWORD)table_value == -1 )
      {
        dword_140404A6C[running_total + 280651335] = dword_140404A6C[running_total + 280651440];
        dword_140404A6C[running_total + 280651336] = dword_140404A6C[running_total + 280651441];
        result = dword_140404A6C[running_total + 280651442];
        dword_140404A6C[running_total + 280651337] = result;
      }
      else
      {
        table_value_2 = (int)dword_140404A6C[running_total + 280651305];
        if ( (_DWORD)table_value_2 != -1 )
        {
          if ( (dword_140404A6C[3597 * table_value_2 + 71856325] & 0x800) != 0 )
          {
            table_value_3 = dword_140404A6C[running_total + 280651322];
            if ( table_value_3 < 30 )
              dword_140404A6C[running_total + 280651322] = table_value_3 + 1;
          }
          else
          {
            dword_140404A6C[running_total + 280651322] = 0;
          }
        }
        weighted_sum = *(float *)&dword_140404A6C[running_total + 280651440];
        weighted_sum_2 = *(float *)&dword_140404A6C[running_total + 280651441];
        weighted_sum_3 = *(float *)&dword_140404A6C[running_total + 280651442];
        combined_products = *(float *)&dword_140404A6C[running_total + 280651518] - weighted_sum;
        combined_products_2 = *(float *)&dword_140404A6C[running_total + 280651752] - weighted_sum;
        combined_products_3 = *(float *)&dword_140404A6C[running_total + 280651830] - weighted_sum;
        combined_products_4 = *(float *)&dword_140404A6C[running_total + 280651519] - weighted_sum_2;
        combined_products_25 = *(float *)&dword_140404A6C[running_total + 280651596] - weighted_sum;
        combined_products_5 = *(float *)&dword_140404A6C[running_total + 280651753] - weighted_sum_2;
        combined_products_6 = *(float *)&dword_140404A6C[running_total + 280651831] - weighted_sum_2;
        combined_products_7 = *(float *)&dword_140404A6C[running_total + 280651520] - weighted_sum_3;
        scaled_index = 5210 * table_value;
        combined_products_26 = *(float *)&dword_140404A6C[running_total + 280651597] - weighted_sum_2;
        combined_products_8 = *(float *)&dword_140404A6C[running_total + 280651754] - weighted_sum_3;
        combined_products_27 = *(float *)&dword_140404A6C[running_total + 280651598] - weighted_sum_3;
        combined_products_9 = *(float *)&dword_140404A6C[running_total + 280651674] - weighted_sum;
        combined_products_10 = *(float *)&dword_140404A6C[running_total + 280651675] - weighted_sum_2;
        combined_products_11 = *(float *)&dword_140404A6C[running_total + 280651676] - weighted_sum_3;
        combined_products_12 = *(float *)&dword_140404A6C[running_total + 280651832] - weighted_sum_3;
        combined_products_13 = *(float *)&dword_140404A6C[running_total + 280651908] - weighted_sum;
        combined_products_14 = *(float *)&dword_140404A6C[running_total + 280651909] - weighted_sum_2;
        combined_products_15 = *(float *)&dword_140404A6C[running_total + 280651910] - weighted_sum_3;
        combined_products_16 = *(float *)&dword_140404A6C[running_total + 280651986] - weighted_sum;
        combined_products_17 = *(float *)&dword_140404A6C[running_total + 280651987] - weighted_sum_2;
        combined_products_18 = *(float *)&dword_140404A6C[running_total + 280651988] - weighted_sum_3;
        combined_products_19 = *(float *)&dword_140404A6C[running_total + 280652064] - weighted_sum;
        combined_products_20 = *(float *)&dword_140404A6C[running_total + 280652065] - weighted_sum_2;
        combined_products_21 = *(float *)&dword_140404A6C[running_total + 280652066] - weighted_sum_3;
        combined_products_22 = *(float *)&dword_140404A6C[running_total + 280652142] - weighted_sum;
        combined_products_23 = *(float *)&dword_140404A6C[running_total + 280652143] - weighted_sum_2;
        combined_products_24 = *(float *)&dword_140404A6C[running_total + 280652144] - weighted_sum_3;
        scaled_index_2 = 99776LL * (int)dword_140404A6C[5210 * table_value + 129716710] + 12LL * (int)dword_140404A6C[running_total + 280651314];
        weighted_sum_4 = *(float *)((char *)&g_192EB29A4 + scaled_index_2);
        weighted_sum_5 = *(float *)((char *)&g_192EB299C + scaled_index_2);
        weighted_sum_6 = *(float *)((char *)&g_192EB29A0 + scaled_index_2) + 0.25;
        state_address = (float)(*(float *)&dword_140404A6C[5210 * table_value + 129716728] * weighted_sum_5)
            + *(float *)&dword_140404A6C[5210 * table_value + 129716722];
        weighted_sum_26 = *(float *)&dword_140404A6C[5210 * table_value + 129716726];
        *(float *)&state_address_2 = (float)((float)((float)(weighted_sum_26 * weighted_sum_5) + *(float *)&dword_140404A6C[5210 * table_value + 129716720])
                               + (float)(*(float *)&dword_140404A6C[5210 * table_value + 129716729] * weighted_sum_6))
                       + (float)(*(float *)&dword_140404A6C[5210 * table_value + 129716732] * weighted_sum_4);
        weighted_sum_7 = *(float *)&dword_140404A6C[5210 * table_value + 129716731] * weighted_sum_6;
        *(float *)&state_address_3 = (float)((float)((float)(weighted_sum_5 * *(float *)&dword_140404A6C[scaled_index + 129716727])
                                       + *(float *)&dword_140404A6C[scaled_index + 129716721])
                               + (float)(*(float *)&dword_140404A6C[scaled_index + 129716730] * weighted_sum_6))
                       + (float)(*(float *)&dword_140404A6C[scaled_index + 129716733] * weighted_sum_4);
        dword_140404A6C[running_total + 280651335] = state_address_2;
        weighted_sum_8 = *(float *)&dword_140404A6C[5210 * table_value + 129716734] * weighted_sum_4;
        dword_140404A6C[running_total + 280651336] = state_address_3;
        *(float *)&saved_masked_bits = (float)(state_address + weighted_sum_7) + weighted_sum_8;
        dword_140404A6C[running_total + 280651337] = saved_masked_bits;
        table_value_4 = dword_140404A6C[running_total + 280651322];
        if ( table_value_4 <= 0 )
        {
          *(float *)&float_word_2 = weighted_sum_26;
        }
        else
        {
          float_word_2 = dword_140404A6C[scaled_index + 129716726];
          weighted_sum_9 = (float)((float)table_value_4 * *(float *)((char *)&g_192EB299C + scaled_index_2)) * 0.033333335;
          *(float *)&state_address_4 = (float)(weighted_sum_9 * *(float *)&dword_140404A6C[scaled_index + 129716727]) + *(float *)&state_address_3;
          *(float *)&dword_140404A6C[running_total + 280651335] = (float)(*(float *)&float_word_2 * weighted_sum_9) + *(float *)&state_address_2;
          *(float *)&state_address_2 = (float)(*(float *)&float_word_2 * weighted_sum_9) + *(float *)&state_address_2;
          weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index + 129716728];
          state_address_3 = state_address_4;
          dword_140404A6C[running_total + 280651336] = state_address_4;
          *(float *)&masked_bits = (float)(weighted_sum_10 * weighted_sum_9) + *(float *)&saved_masked_bits;
          dword_140404A6C[running_total + 280651337] = masked_bits;
          saved_masked_bits = masked_bits;
        }
        masked_bits_2 = *(_OWORD *)&dword_140404A6C[scaled_index + 129716727];
        dword_140404A6C[running_total + 280651440] = state_address_2;
        dword_140404A6C[running_total + 280651441] = state_address_3;
        dword_140404A6C[running_total + 280651442] = saved_masked_bits;
        *(_OWORD *)&dword_140404A6C[running_total + 280651453] = masked_bits_2;
        masked_bits_3 = *(_OWORD *)&dword_140404A6C[scaled_index + 129716731];
        dword_140404A6C[running_total + 280651452] = float_word_2;
        *(_OWORD *)&dword_140404A6C[running_total + 280651457] = masked_bits_3;
        *(float *)&dword_140404A6C[running_total + 280651518] = combined_products + *(float *)&state_address_2;
        *(float *)&dword_140404A6C[running_total + 280651519] = combined_products_4 + *(float *)&state_address_3;
        *(float *)&dword_140404A6C[running_total + 280651520] = combined_products_7 + *(float *)&saved_masked_bits;
        weighted_sum_11 = *(float *)&dword_140404A6C[running_total + 280651440];
        *(float *)&dword_140404A6C[running_total + 280651596] = weighted_sum_11 + combined_products_25;
        weighted_sum_12 = *(float *)&dword_140404A6C[running_total + 280651441];
        *(float *)&dword_140404A6C[running_total + 280651597] = weighted_sum_12 + combined_products_26;
        weighted_sum_13 = *(float *)&dword_140404A6C[running_total + 280651442];
        *(float *)&dword_140404A6C[running_total + 280651598] = weighted_sum_13 + combined_products_27;
        *(float *)&dword_140404A6C[running_total + 280651674] = weighted_sum_11 + combined_products_9;
        *(float *)&dword_140404A6C[running_total + 280651675] = weighted_sum_12 + combined_products_10;
        *(float *)&dword_140404A6C[running_total + 280651676] = weighted_sum_13 + combined_products_11;
        *(float *)&dword_140404A6C[running_total + 280651752] = combined_products_2 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280651753] = combined_products_5 + weighted_sum_12;
        *(float *)&dword_140404A6C[running_total + 280651754] = combined_products_8 + weighted_sum_13;
        *(float *)&dword_140404A6C[running_total + 280651830] = combined_products_3 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280651831] = combined_products_6 + weighted_sum_12;
        *(float *)&dword_140404A6C[running_total + 280651832] = combined_products_12 + weighted_sum_13;
        *(float *)&dword_140404A6C[running_total + 280651908] = combined_products_13 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280651909] = combined_products_14 + weighted_sum_12;
        *(float *)&dword_140404A6C[running_total + 280651910] = combined_products_15 + weighted_sum_13;
        *(float *)&dword_140404A6C[running_total + 280651986] = combined_products_16 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280651987] = combined_products_17 + weighted_sum_12;
        *(float *)&dword_140404A6C[running_total + 280651988] = combined_products_18 + weighted_sum_13;
        *(float *)&dword_140404A6C[running_total + 280652064] = combined_products_19 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280652065] = combined_products_20 + weighted_sum_12;
        *(float *)&dword_140404A6C[running_total + 280652066] = combined_products_21 + weighted_sum_13;
        *(float *)&dword_140404A6C[running_total + 280652142] = combined_products_22 + weighted_sum_11;
        *(float *)&dword_140404A6C[running_total + 280652143] = combined_products_23 + weighted_sum_12;
        iteration_count = 10;
        state_address_5 = &g_18399E2C8;
        running_total_2 = 780;
        state_address_6 = (float *)&dword_140404A6C[running_total + 280652234];
        *(float *)&dword_140404A6C[running_total + 280652144] = combined_products_24 + weighted_sum_13;
        do
        {
          packed_word_bits = (int)*state_address_5;
          scaled_index_3 = running_total * 4 + 312 * packed_word_bits;
          weighted_sum_14 = *(float *)((char *)(unsigned int *)&g_18329E55C + scaled_index_3);
          *(state_address_6 - 2) = weighted_sum_14;
          weighted_sum_15 = *(float *)((char *)&g_18329E560 + scaled_index_3);
          *(state_address_6 - 1) = weighted_sum_15;
          weighted_sum_16 = *(float *)((char *)&g_18329E564 + scaled_index_3);
          *state_address_6 = weighted_sum_16;
          source_component_y = *(float *)((char *)&g_18329E568 + scaled_index_3);
          state_address_6[1] = source_component_y;
          source_component_z = *(float *)((char *)(unsigned int *)&g_18329E56C + scaled_index_3);
          state_address_6[2] = source_component_z;
          source_component_w = *(float *)((char *)&g_18329E570 + scaled_index_3);
          state_address_6[3] = source_component_w;
          weighted_sum_17 = *(float *)((char *)&g_18329E574 + scaled_index_3);
          state_address_6[4] = weighted_sum_17;
          weighted_sum_18 = *(float *)((char *)&g_18329E578 + scaled_index_3);
          state_address_6[5] = weighted_sum_18;
          weighted_sum_19 = *(float *)((char *)&g_18329E57C + scaled_index_3);
          state_address_6[6] = weighted_sum_19;
          if ( iteration_count == 10 || iteration_count == 13 )
          {
            sr_math_mat3_rotate_rows(
              (__int64)&dword_140404A6C[float_word + 280651452 + running_total_2],
              (float *)&dword_140404A6C[float_word + 280651452 + running_total_2],
              sr_export_float_lane_container(3217625051LL));
            LODWORD(packed_word_bits) = *state_address_5;
            weighted_sum_16 = *state_address_6;
            source_component_y = state_address_6[1];
            weighted_sum_14 = *(state_address_6 - 2);
            weighted_sum_15 = *(state_address_6 - 1);
            source_component_z = state_address_6[2];
            source_component_w = state_address_6[3];
            weighted_sum_17 = state_address_6[4];
            weighted_sum_18 = state_address_6[5];
            weighted_sum_19 = state_address_6[6];
          }
          weighted_sum_20 = *((float *)state_address_5 + 1);
          ++iteration_count;
          weighted_sum_21 = *((float *)state_address_5 + 2);
          running_total_2 += 78;
          weighted_sum_22 = *((float *)state_address_5 + 3);
          state_address_5 += 25;
          result = (int)packed_word_bits;
          scaled_index_4 = running_total * 4 + 312LL * (int)packed_word_bits;
          weighted_sum_23 = (float)(weighted_sum_14 * weighted_sum_20) + *(float *)((char *)&g_18329E52C + scaled_index_4);
          *(state_address_6 - 14) = weighted_sum_23;
          weighted_sum_24 = (float)(weighted_sum_15 * weighted_sum_20) + *(float *)((char *)&g_18329E530 + scaled_index_4);
          *(state_address_6 - 13) = weighted_sum_24;
          weighted_sum_25 = *(float *)((char *)&g_18329E534 + scaled_index_4);
          *(state_address_6 - 14) = (float)((float)(source_component_y * weighted_sum_21) + weighted_sum_23) + (float)(weighted_sum_17 * weighted_sum_22);
          *(state_address_6 - 13) = (float)((float)(source_component_z * weighted_sum_21) + weighted_sum_24) + (float)(weighted_sum_18 * weighted_sum_22);
          *(state_address_6 - 12) = (float)((float)((float)(weighted_sum_16 * weighted_sum_20) + weighted_sum_25) + (float)(source_component_w * weighted_sum_21)) + (float)(weighted_sum_19 * weighted_sum_22);
          state_address_6 += 78;
        }
        while ( iteration_count < 16 );
        remaining_count = integer_difference;
      }
    }
    float_word += 7166;
    running_total += 7166;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
  return result;
}
#undef combined_products_9
#undef combined_products_10
#undef combined_products_11
#undef combined_products_12
#undef combined_products_13
#undef combined_products_14
#undef combined_products_15
#undef combined_products_16
#undef combined_products_17
#undef combined_products_18
#undef combined_products_19
#undef combined_products_20
#undef combined_products_21
#undef combined_products_22
#undef combined_products_23
#undef combined_products_24
#undef integer_difference
#undef retaddr
#undef weighted_sum_26
#undef combined_products_25
#undef combined_products_26
#undef combined_products_27

//----- (00000001400CF160) ----------------------------------------------------
void sub_1400CF160()
{
  unsigned int *state_address;
  __int64 remaining_count;
  __int64 remaining_count_2;
  int table_value;
  __int64 scaled_index;
  __int64 scaled_index_2;
  float weighted_sum;
  float combined_products;
  float weighted_sum_2;
  float combined_products_2;
  float component_delta;
  unsigned int table_value_2;
  float comparison_operand;
  float *state_address_2;
  __int64 loaded_word;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  unsigned int scaled_index_3;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  int loaded_word_2;
  float product_difference_4;
  float weighted_sum_19;
  float weighted_sum_20;
  float weighted_sum_21;
  float product_difference_5;

  state_address = &g_182BBB22C;
  remaining_count = 1024;
  remaining_count_2 = 1024;
  do
  {
    if ( *(state_address - 43) )
    {
      table_value = state_address[43];
      if ( table_value > 0 )
        state_address[43] = table_value - 1;
      scaled_index = (int)*(state_address - 34);
      if ( (_DWORD)scaled_index != -1 )
      {
        scaled_index_2 = 7166 * scaled_index;
        if ( dword_140404A6C[7166 * scaled_index + 280651303] )
        {
          if ( (int)*(state_address - 32) >= 2 )
          {
            weighted_sum = *(float *)&dword_140404A6C[scaled_index_2 + 280651596];
            combined_products = -*(float *)&dword_140404A6C[scaled_index_2 + 280651614];
            weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_2 + 280651616];
            combined_products_2 = -*(float *)&dword_140404A6C[scaled_index_2 + 280651615];
            *(state_address - 2) = dword_140404A6C[scaled_index_2 + 280651608];
            component_delta = -weighted_sum_2;
            *(state_address - 1) = dword_140404A6C[scaled_index_2 + 280651609];
            *state_address = dword_140404A6C[scaled_index_2 + 280651610];
            table_value_2 = dword_140404A6C[scaled_index_2 + 280651611];
            *((float *)state_address + 1) = combined_products;
            *((float *)state_address + 2) = combined_products_2;
            *((float *)state_address + 3) = component_delta;
            state_address[4] = table_value_2;
            state_address[5] = dword_140404A6C[scaled_index_2 + 280651612];
            state_address[6] = dword_140404A6C[scaled_index_2 + 280651613];
            *((float *)state_address - 20) = weighted_sum - (float)(combined_products * 0.25);
            *((float *)state_address - 19) = *(float *)&dword_140404A6C[scaled_index_2 + 280651597] - (float)(combined_products_2 * 0.25);
            *((float *)state_address - 18) = *(float *)&dword_140404A6C[scaled_index_2 + 280651598] - (float)(component_delta * 0.25);
          }
        }
      }
    }
    state_address += 1760;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  comparison_operand = (item_type39_child_offset);
  state_address_2 = (float *)&g_182BBB238;
  do
  {
    if ( *((_DWORD *)state_address_2 - 46) )
    {
      loaded_word = *((int *)state_address_2 - 36);
      if ( (_DWORD)loaded_word != -1 )
      {
        weighted_sum_3 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845916];
        *(state_address_2 - 23) = weighted_sum_3;
        weighted_sum_4 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845917];
        *(state_address_2 - 22) = weighted_sum_4;
        weighted_sum_5 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845918];
        *(state_address_2 - 21) = weighted_sum_5;
        weighted_sum_6 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845934];
        *(state_address_2 - 5) = weighted_sum_6;
        weighted_sum_7 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845935];
        *(state_address_2 - 4) = weighted_sum_7;
        weighted_sum_8 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845936];
        *(state_address_2 - 3) = weighted_sum_8;
        weighted_sum_9 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845937];
        *(state_address_2 - 2) = weighted_sum_9;
        weighted_sum_10 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845938];
        *(state_address_2 - 1) = weighted_sum_10;
        weighted_sum_11 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845939];
        *state_address_2 = weighted_sum_11;
        weighted_sum_12 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845940];
        state_address_2[1] = weighted_sum_12;
        weighted_sum_13 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845941];
        state_address_2[2] = weighted_sum_13;
        weighted_sum_14 = *(float *)&dword_140404A6C[1760 * loaded_word + 278845942];
        state_address_2[3] = weighted_sum_14;
        scaled_index_3 = dword_140404A6C[1760 * loaded_word + 278845898];
        if ( scaled_index_3 - 15 <= 1 )
        {
          loaded_word_2 = *((_DWORD *)state_address_2 - 41);
          if ( loaded_word_2 == 17 )
          {
            product_difference_4 = (float)((float)*((int *)state_address_2 - 35) * 0.10546875) - 0.2109375;
            weighted_sum_19 = (float)(weighted_sum_6 * product_difference_4) + weighted_sum_3;
            weighted_sum_20 = (float)(weighted_sum_7 * product_difference_4) + weighted_sum_4;
            *(state_address_2 - 23) = weighted_sum_19;
            *(state_address_2 - 22) = weighted_sum_20;
            weighted_sum_21 = (float)(weighted_sum_8 * product_difference_4) + weighted_sum_5;
            *(state_address_2 - 21) = weighted_sum_21;
          }
          else
          {
            weighted_sum_19 = weighted_sum_3;
            weighted_sum_20 = weighted_sum_4;
            weighted_sum_21 = weighted_sum_5;
          }
          if ( loaded_word_2 == 18 )
          {
            product_difference_5 = (float)((float)*((int *)state_address_2 - 35) * 0.10546875) - 0.2109375;
            *(state_address_2 - 23) = (float)(weighted_sum_6 * product_difference_5) + weighted_sum_19;
            *(state_address_2 - 22) = (float)(weighted_sum_7 * product_difference_5) + weighted_sum_20;
            *(state_address_2 - 21) = (float)(weighted_sum_8 * product_difference_5) + weighted_sum_21;
          }
        }
        else if ( scaled_index_3 == 39 )
        {
          weighted_sum_15 = (float)(weighted_sum_9 * comparison_operand) + weighted_sum_3;
          weighted_sum_16 = (float)(weighted_sum_10 * comparison_operand) + weighted_sum_4;
          weighted_sum_17 = (float)(weighted_sum_11 * comparison_operand) + weighted_sum_5;
          *(state_address_2 - 23) = weighted_sum_15;
          *(state_address_2 - 22) = weighted_sum_16;
          *(state_address_2 - 21) = weighted_sum_17;
          weighted_sum_18 = *(float *)&dword_140404A6C[1268 * dword_140404A6C[1760 * loaded_word + 278845898] + 278521614];
          *(state_address_2 - 23) = (float)(weighted_sum_18 * weighted_sum_12) + weighted_sum_15;
          *(state_address_2 - 22) = (float)(weighted_sum_18 * weighted_sum_13) + weighted_sum_16;
          *(state_address_2 - 21) = (float)(weighted_sum_18 * weighted_sum_14) + weighted_sum_17;
        }
        else
        {
          product_difference = weighted_sum_3 - (float)(weighted_sum_9 * 0.0625);
          product_difference_2 = weighted_sum_4 - (float)(weighted_sum_10 * 0.0625);
          product_difference_3 = weighted_sum_5 - (float)(weighted_sum_11 * 0.0625);
          *(state_address_2 - 23) = product_difference - (float)(weighted_sum_12 * 0.0625);
          *(state_address_2 - 22) = product_difference_2 - (float)(weighted_sum_13 * 0.0625);
          *(state_address_2 - 21) = product_difference_3 - (float)(weighted_sum_14 * 0.0625);
          *(state_address_2 - 23) = product_difference;
          *(state_address_2 - 22) = product_difference_2;
          *(state_address_2 - 21) = product_difference_3;
        }
      }
    }
    comparison_operand = (item_type39_child_offset);
    state_address_2 += 1760;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (00000001400EE780) ----------------------------------------------------
__int64            sub_1400EE780(signed int a1, int a2)
{
  __int64 player_record_offset;
  __int64 input_value;
  __int64 human;
  int corporation;
  unsigned int table_value;
  int integer_difference;
  int selection_code;
  signed int table_value_2;
  unsigned int selection_code_2;
  int selection_code_3;
  signed int table_value_3;
  unsigned int selection_code_4;
  __int64 scaled_index;
  signed int table_value_4;
  unsigned int scaled_index_2;
  unsigned int scaled_index_3;
  signed int createitem_result;
  int j;
  int i;
  int scaled_index_4;
  unsigned int call_result;
  unsigned int loaded_word;
  unsigned int loaded_word_2;
  signed int createitem_result_2;
  int slot;
  unsigned int table_value_5;
  int selection_code_5;
  __int64 saved_corporation;
  __int64 scaled_index_5;
  __int64 table_value_6;
  int player;
  __int64 scaled_index_6;
  __int64 table_value_7;
  __int64 k;
  int scaled_index_7;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 parent;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 byte_count;
  unsigned int cached_world_event_count;
  unsigned int cached_game_tick;
  __int64 shifted_bits;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE780[640];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 0)) /* [rsp+0h] */
#define shifted_bits_2 (*(int (*))(void *)(sr_frame_1400EE780 + 32)) /* [rsp+20h] */
#define float_word (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 44)) /* [rsp+2Ch] */
#define unused_written_slot_2 (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 48)) /* [rsp+30h] */
#define saved_corporation_2 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 56)) /* [rsp+38h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400EE780 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1400EE780 + 80)) /* [rsp+50h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400EE780 + 96)) /* [rsp+60h] */
#define Src (*(__m128i (*)[32])(void *)(sr_frame_1400EE780 + 112)) /* [rsp+70h] */
#define unused_frame_slot_624 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 624)) /* [rsp+270h] */

  player_record_offset = 3597LL * a1;
  input_value = (unsigned __int8)a2;
  shifted_bits_2 = a2 >> 16;
  human = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)human == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  corporation = dword_140404A6C[player_record_offset + 71856286];
  LODWORD(saved_corporation_2) = corporation;
  switch ( (unsigned __int8)a2 )
  {
    case 0x80u:
      dword_140404A6C[player_record_offset + 71856342] = 14;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x81u:
      dword_140404A6C[player_record_offset + 71856342] = 15;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x82u:
      dword_140404A6C[player_record_offset + 71856342] = 16;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x83u:
      dword_140404A6C[player_record_offset + 71856342] = 17;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x84u:
      dword_140404A6C[player_record_offset + 71856342] = 18;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x85u:
      dword_140404A6C[player_record_offset + 71856342] = 19;
      return 0; /* compatibility result discarded by all reviewed callers */
  }
  table_value = dword_140404A6C[player_record_offset + 71856342];
  if ( table_value == 14 )
  {
    integer_difference = 11;
    if ( (_BYTE)a2 )
      integer_difference = -1;
    switch ( (unsigned __int8)a2 )
    {
      case 1u:
        integer_difference = 7;
        break;
      case 2u:
        integer_difference = 1;
        break;
      case 3u:
        integer_difference = 3;
        break;
      case 4u:
        integer_difference = 9;
        break;
      default:
        if ( integer_difference == -1 )
          goto LABEL_84;
        break;
    }
    goto LABEL_70;
  }
  if ( table_value == 15 )
  {
    if ( (_BYTE)a2 )
    {
      switch ( (unsigned __int8)a2 )
      {
        case 1u:
          integer_difference = 8;
          break;
        case 2u:
          integer_difference = 2;
          break;
        case 3u:
          integer_difference = 4;
          break;
        case 4u:
          integer_difference = 10;
          break;
        default:
          goto LABEL_84;
      }
    }
    else
    {
      integer_difference = 12;
    }
    goto LABEL_70;
  }
  if ( table_value != 16 )
    goto LABEL_84;
  shifted_bits_2 = 0;
  if ( !(_BYTE)a2 )
  {
    integer_difference = 14;
LABEL_70:
    if ( (int)dword_140404A6C[player_record_offset + 71856279] < 10 )
    {
      scaled_index = 1268LL * integer_difference;
      table_value_4 = dword_140404A6C[scaled_index + 278521286];
      if ( (int)dword_140404A6C[player_record_offset + 71856272] >= table_value_4 || !table_value_4 )
      {
        unused_written_slot_4 = 1065353216;
        scaled_index_2 = dword_140404A6C[7166 * human + 280651336];
        float_word = dword_140404A6C[7166 * human + 280651335];
        scaled_index_3 = dword_140404A6C[7166 * human + 280651337];
        unused_written_slot = scaled_index_2;
        unused_written_slot_2 = scaled_index_3;
        cached_xmmword_140278d30 = xmmword_140278D30;
        unused_written_slot_3 = xmmword_140278D30;
        createitem_result = sr_CreateItem(integer_difference, (float *)&float_word, nullptr, (float *)&cached_xmmword_140278d30);
        if ( integer_difference == 15 )
        {
          for ( i = 0; i < 2; ++i )
          {
            if ( (unsigned int)sr_item_transfer(createitem_result, -1, human, i) )
              break;
          }
        }
        else
        {
          for ( j = 2; j < 7; ++j )
          {
            if ( (unsigned int)sr_item_transfer(createitem_result, -1, human, j) )
              break;
          }
        }
        dword_140404A6C[player_record_offset + 71856272] -= dword_140404A6C[scaled_index + 278521286];
        if ( game_type == 3 )
          sr_event_player_finance(a1);
        ++dword_140404A6C[player_record_offset + 71856279];
      }
    }
    goto LABEL_84;
  }
  if ( (unsigned __int8)a2 == 6 )
  {
    integer_difference = 13;
    goto LABEL_70;
  }
  if ( (unsigned __int8)a2 == 7 )
  {
    integer_difference = 15;
    goto LABEL_70;
  }
  if ( (unsigned int)(unsigned __int8)a2 - 1 <= 2 )
  {
    selection_code = 5000;
    if ( (_DWORD)input_value != 1 )
      selection_code = 1000;
    if ( (_DWORD)input_value == 2 )
    {
      selection_code = 20000;
    }
    else if ( (_DWORD)input_value == 3 )
    {
      selection_code = 100000;
    }
    table_value_2 = dword_140404A6C[player_record_offset + 71856272];
    if ( table_value_2 >= selection_code )
    {
      selection_code_2 = 3;
      if ( (_DWORD)input_value != 1 )
        selection_code_2 = 0;
      if ( (_DWORD)input_value == 2 )
      {
        selection_code_2 = 8;
      }
      else if ( (_DWORD)input_value == 3 )
      {
        selection_code_2 = 7;
      }
      ++dword_140404A6C[human + 282485789];
      shifted_bits_2 = selection_code_2;
      dword_140404A6C[player_record_offset + 71859822] = selection_code_2;
      dword_140404A6C[player_record_offset + 71856272] = table_value_2 - selection_code;
      dword_140404A6C[7166 * human + 280658446] = selection_code_2;
      sr_event_player_update(a1);
    }
  }
  if ( (unsigned int)(input_value - 4) <= 1 )
  {
    selection_code_3 = 10000;
    if ( (_DWORD)input_value != 4 )
      selection_code_3 = 1000;
    table_value_3 = dword_140404A6C[player_record_offset + 71856272];
    if ( (_DWORD)input_value == 5 )
      selection_code_3 = 1000000;
    if ( table_value_3 >= selection_code_3 )
    {
      if ( (_DWORD)input_value == 4 )
        selection_code_4 = 1;
      else
        selection_code_4 = 2;
      ++dword_140404A6C[human + 282485789];
      shifted_bits_2 = selection_code_4;
      dword_140404A6C[player_record_offset + 71859826] = selection_code_4;
      dword_140404A6C[player_record_offset + 71856272] = table_value_3 - selection_code_3;
      dword_140404A6C[7166 * human + 280658449] = selection_code_4;
      sr_event_player_update(a1);
    }
  }
LABEL_84:
  if ( dword_140404A6C[player_record_offset + 71856342] == 17 && (unsigned int)input_value < 8 )
  {
    if ( dword_140404A6C[4 * input_value + 335047158] )
    {
      if ( (int)dword_140404A6C[player_record_offset + 71856272] >= (int)dword_140404A6C[4 * input_value + 335047161]
        && (unsigned int)corporation <= 5
        && sr_corporation_contains_point((float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * human + 1126818696), corporation, 0.0) )
      {
        scaled_index_4 = dword_140404A6C[4 * input_value + 335047159];
        if ( scaled_index_4 != -1 )
        {
          call_result = sub_1400F00D0(scaled_index_4, corporation, dword_140404A6C[4 * input_value + 335047160]);
          if ( call_result != -1 )
          {
            loaded_word = *(_DWORD *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * human + 1126818696);
            float_word = *(_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * human + 1126818696);
            loaded_word_2 = *(_DWORD *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * human + 1126818696);
            unused_written_slot = loaded_word;
            unused_written_slot_2 = loaded_word_2;
            unused_written_slot_4 = 1065353216;
            cached_xmmword_140278d30 = xmmword_140278D30;
            unused_written_slot_3 = xmmword_140278D30;
            createitem_result_2 = sr_CreateItem(27, (float *)&float_word, nullptr, (float *)&cached_xmmword_140278d30);
            slot = 2;
            dword_140404A6C[1760 * createitem_result_2 + 278846053] = call_result;
            do
            {
              if ( (unsigned int)sr_item_transfer(createitem_result_2, -1, human, slot) )
                break;
              ++slot;
            }
            while ( slot < 7 );
            dword_140404A6C[player_record_offset + 71856272] -= dword_140404A6C[4 * input_value + 335047161];
            sr_event_player_finance(a1);
            dword_140404A6C[4 * input_value + 335047158] = 0;
          }
          corporation = saved_corporation_2;
        }
      }
    }
  }
  table_value_5 = dword_140404A6C[player_record_offset + 71856342];
  if ( table_value_5 != 18 )
    goto LABEL_116;
  if ( (_DWORD)input_value )
  {
    switch ( (_DWORD)input_value )
    {
      case 1:
        sub_1401189F0(a1, 10);
        break;
      case 2:
        sub_1401189F0(a1, 100);
        break;
      case 3:
        sub_1401189F0(a1, 1000);
        break;
      default:
        switch ( (_DWORD)input_value )
        {
          case 4:
            selection_code_5 = 1;
            break;
          case 5:
            selection_code_5 = 10;
            break;
          case 6:
            selection_code_5 = 100;
            break;
          case 7:
            selection_code_5 = 1000;
            break;
          default:
            goto LABEL_115;
        }
        sub_14011AF80(a1, selection_code_5);
        break;
    }
  }
  else
  {
    sub_1401189F0(a1, 1);
  }
LABEL_115:
  sr_event_player_finance(a1);
  table_value_5 = dword_140404A6C[player_record_offset + 71856342];
LABEL_116:
  if ( table_value_5 == 19 && (unsigned int)corporation <= 5 )
  {
    saved_corporation = corporation;
    scaled_index_5 = 5873LL * corporation;
    saved_corporation_2 = corporation;
    if ( dword_140404A6C[scaled_index_5 + 283831510] == a1
      && sr_corporation_contains_point((float *)&dword_140404A6C[7166 * human + 280651335], corporation, 0.0)
      && (_DWORD)input_value == 6 )
    {
      table_value_6 = (int)dword_140404A6C[scaled_index_5 + 283837164];
      if ( (int)table_value_6 < 128 )
      {
        player = shifted_bits_2;
        if ( shifted_bits_2 != a1 )
        {
          scaled_index_6 = 3597LL * shifted_bits_2;
          if ( dword_140404A6C[scaled_index_6 + 71856286] == corporation )
          {
            table_value_7 = (int)dword_140404A6C[scaled_index_6 + 71856292];
            dword_140404A6C[5873 * corporation + 283837165 + table_value_6] = dword_140404A6C[scaled_index_6 + 71856268];
            ++dword_140404A6C[scaled_index_5 + 283837164];
            if ( (_DWORD)table_value_7 != -1 )
            {
              for ( k = 0; k < 80; k += 10 )
              {
                scaled_index_7 = dword_140404A6C[7166 * table_value_7 + 280658139 + k];
                if ( scaled_index_7 > 0 )
                {
                  remaining_count = (unsigned int)scaled_index_7;
                  buffer_cursor = &dword_140404A6C[7166 * (int)dword_140404A6C[scaled_index_6 + 71856292] + 280658140 + k];
                  do
                  {
                    parent = (int)*buffer_cursor;
                    if ( (unsigned int)parent <= 0x3FF )
                    {
                      scaled_index_8 = 1760 * parent;
                      scaled_index_9 = (int)dword_140404A6C[1760 * parent + 278845898];
                      if ( dword_140404A6C[1268 * scaled_index_9 + 278521289]
                        || (int)dword_140404A6C[1268 * scaled_index_9 + 278521294] > 0
                        || (unsigned int)(scaled_index_9 - 13) <= 1
                        || (_DWORD)scaled_index_9 == 27 )
                      {
                        dword_140404A6C[scaled_index_8 + 278845900] = 0;
                        if ( (int)dword_140404A6C[scaled_index_8 + 278845906] > 0 )
                        {
                          dword_140404A6C[1760 * dword_140404A6C[scaled_index_8 + 278845907] + 278845900] = 0;
                          sr_world_detach_item(dword_140404A6C[scaled_index_8 + 278845907], parent);
                        }
                      }
                    }
                    ++buffer_cursor;
                    --remaining_count;
                  }
                  while ( remaining_count );
                }
              }
              sub_14007F590(dword_140404A6C[scaled_index_6 + 71856292]);
              saved_corporation = saved_corporation_2;
            }
            sub_14011AF80(player, dword_140404A6C[scaled_index_6 + 71856288]);
            dword_140404A6C[scaled_index_6 + 71856286] = 17;
            dword_140404A6C[scaled_index_6 + 71856289] = 0;
            sr_event_player_update(player);
            sr_event_player_finance(player);
            crt_sprintf(
              Src,
              "%s has been fired from %s",
              (     char *)&dword_140404A6C[scaled_index_6 + 71856254],
              off_1402B2890[saved_corporation]);
            if ( game_connected )
            {
              byte_count = -1;
              do
                ++byte_count;
              while ( SR_VEC_LANES(128, Src[0], i8)[byte_count] );
              cached_world_event_count = world_event_count;
              if ( (int)byte_count > 63 )
                LODWORD(byte_count) = 63;
              cached_game_tick = game_tick;
              shifted_bits = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits), Src, (int)byte_count);
              *((_BYTE *)&g_1873DE4A0 + (int)byte_count + shifted_bits) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = byte_count;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 0;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = -1;
              world_event_count = cached_world_event_count + 1;
              *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = 0;
              HIWORD(world_event_count) = 0;
            }
          }
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef shifted_bits_2
#undef float_word
#undef unused_written_slot
#undef unused_written_slot_2
#undef saved_corporation_2
#undef cached_xmmword_140278d30
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef Src
#undef unused_frame_slot_624

// 1400EE8C9: conditional instruction was optimized away because eax.4==10
// 1400EE912: conditional instruction was optimized away because eax.4==10
// 1400EEA2B: conditional instruction was optimized away because ebx.4==5

//----- (00000001400EF0D0) ----------------------------------------------------
void            sub_1400EF0D0(int a1, int a2, int a3)
{
  int player;
  __int64 player_record_offset;
  __int64 table_value;
  int mission;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  int selection_flag;
  int integer_difference;
  float weighted_sum_3;
  int selection_flag_2;
  int cached_integer_difference;
  float weighted_sum_4;
  int selection_flag_3;
  int cached_integer_difference_2;
  float weighted_sum_5;
  int selection_flag_4;
  int cached_integer_difference_3;
  float weighted_sum_6;
  int selection_flag_5;
  int corporation;
  float weighted_sum_7;
  unsigned int table_value_2;
  __int64 saved_corporation;
  int player_2;
  unsigned int *state_address;
  int player_3;
  int selection_code;
  unsigned int table_value_3;
  unsigned int table_value_4;
  signed int createitem_result;
  signed int item;
  __int64 scaled_index_2;
  int i;
  unsigned int scaled_index_3;
  unsigned int scaled_index_4;
  __int64 item_2;
  __int64 scaled_index_5;
  int denomination;
  signed int scaled_index_6;
  __int64 scaled_index_7;
  BOOL slot;
  __int64 scaled_index_8;
  __int64 item_3;
  unsigned int table_value_5;
  unsigned int table_value_6;
  signed int createitem_result_2;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  int mission_2;
  unsigned int *state_address_2;
  __int64 scaled_index_11;
  __int64 table_value_7;
  unsigned int *buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EF0D0[176];
#define table_value_8 (*(__int64 (*))(void *)(sr_frame_1400EF0D0 + 0)) /* [rsp+20h] */
#define scaled_index_12 (*(__int64 (*))(void *)(sr_frame_1400EF0D0 + 8)) /* [rsp+28h] */
#define float_word (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 16)) /* [rsp+30h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 20)) /* [rsp+34h] */
#define unused_written_slot_2 (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 24)) /* [rsp+38h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400EF0D0 + 32)) /* [rsp+40h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1400EF0D0 + 48)) /* [rsp+50h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400EF0D0 + 64)) /* [rsp+60h] */
#define human (*(int (*))(void *)(sr_frame_1400EF0D0 + 168)) /* [rsp+C8h] */

  player = a1;
  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856292];
  human = table_value;
  if ( (_DWORD)table_value != -1 )
  {
    mission = 0;
    scaled_index = 7166 * table_value;
    table_value_8 = (int)dword_140404A6C[player_record_offset + 71856292];
    weighted_sum = *(float *)&dword_140404A6C[7166 * table_value + 280651335];
    if ( weighted_sum < g_183EBFD60
      || weighted_sum >= g_183EBFD6C
      || (weighted_sum_2 = *(float *)&dword_140404A6C[7166 * table_value + 280651337], weighted_sum_2 < g_183EBFD68)
      || (selection_flag = 1, weighted_sum_2 >= g_183EBFD74) )
    {
      selection_flag = 0;
    }
    integer_difference = 0;
    if ( !selection_flag )
      integer_difference = -1;
    if ( weighted_sum < g_183EC5924
      || weighted_sum >= g_183EC5930
      || (weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index + 280651337], weighted_sum_3 < g_183EC592C)
      || (selection_flag_2 = 1, weighted_sum_3 >= g_183EC5938) )
    {
      selection_flag_2 = 0;
    }
    cached_integer_difference = 1;
    if ( !selection_flag_2 )
      cached_integer_difference = integer_difference;
    if ( weighted_sum < g_183ECB4E8
      || weighted_sum >= g_183ECB4F4
      || (weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index + 280651337], weighted_sum_4 < g_183ECB4F0)
      || (selection_flag_3 = 1, weighted_sum_4 >= g_183ECB4FC) )
    {
      selection_flag_3 = 0;
    }
    cached_integer_difference_2 = 2;
    if ( !selection_flag_3 )
      cached_integer_difference_2 = cached_integer_difference;
    if ( weighted_sum < g_183ED10AC
      || weighted_sum >= g_183ED10B8
      || (weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index + 280651337], weighted_sum_5 < g_183ED10B4)
      || (selection_flag_4 = 1, weighted_sum_5 >= g_183ED10C0) )
    {
      selection_flag_4 = 0;
    }
    cached_integer_difference_3 = 3;
    if ( !selection_flag_4 )
      cached_integer_difference_3 = cached_integer_difference_2;
    if ( weighted_sum < g_183ED6C70
      || weighted_sum >= g_183ED6C7C
      || (weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index + 280651337], weighted_sum_6 < g_183ED6C78)
      || (selection_flag_5 = 1, weighted_sum_6 >= g_183ED6C84) )
    {
      selection_flag_5 = 0;
    }
    corporation = 4;
    if ( !selection_flag_5 )
      corporation = cached_integer_difference_3;
    if ( weighted_sum >= g_183EDC834 && weighted_sum < g_183EDC840 )
    {
      weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index + 280651337];
      if ( weighted_sum_7 >= g_183EDC83C && weighted_sum_7 < g_183EDC848 )
        corporation = 5;
    }
    if ( corporation != -1 )
    {
      if ( (unsigned int)(a2 - 21) <= 5 && (a3 & 0x1000000) != 0 )
      {
        if ( (_BYTE)a3 )
        {
          switch ( (unsigned __int8)a3 )
          {
            case 1u:
              dword_140404A6C[player_record_offset + 71856342] = 22;
              break;
            case 2u:
              dword_140404A6C[player_record_offset + 71856342] = 23;
              break;
            case 3u:
              dword_140404A6C[player_record_offset + 71856342] = 24;
              break;
            case 4u:
              dword_140404A6C[player_record_offset + 71856342] = 25;
              break;
          }
        }
        else
        {
          dword_140404A6C[player_record_offset + 71856342] = 21;
        }
        return;
      }
      if ( a2 == 24 && dword_140404A6C[player_record_offset + 71856286] == corporation && !a3 )
      {
        sub_140138430(player, 17);
        sr_event_player_update(player);
      }
      table_value_2 = dword_140404A6C[player_record_offset + 71856286];
      saved_corporation = corporation;
      if ( table_value_2 == corporation && dword_140404A6C[5873 * corporation + 283831510] == player )
      {
        if ( a2 == 22 )
        {
          player_2 = a3 >> 16;
          if ( (_BYTE)a3 == 3 )
          {
            sub_140138430(player_2, corporation);
            sr_event_player_update(player_2);
            sub_1400F3B30(player_2);
            state_address = &dword_140404A6C[5873 * corporation + 283831588];
            do
            {
              if ( *state_address )
                sr_event_mission_text(corporation, mission);
              ++mission;
              state_address += 279;
            }
            while ( mission < 16 );
          }
          return;
        }
        if ( a2 == 23 )
        {
          player_3 = a3 >> 16;
          if ( player_3 != player && dword_140404A6C[3597 * player_3 + 71856286] == corporation )
          {
            sub_140138430(player_3, 17);
            sr_event_player_update(player_3);
          }
          return;
        }
      }
      if ( a2 == 25 )
      {
        if ( table_value_2 != corporation )
          return;
        scaled_index_12 = 5873LL * corporation;
        if ( dword_140404A6C[scaled_index_12 + 283831510] == -1 )
          return;
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            selection_code = 15;
          }
          else if ( a3 == 6 )
          {
            selection_code = 26;
          }
          else
          {
            if ( (unsigned int)(a3 - 7) > 5 )
            {
LABEL_111:
              if ( a3 == 2 && (int)dword_140404A6C[7166 * table_value_8 + 280658139] > 0 )
              {
                item_2 = (int)dword_140404A6C[7166 * table_value_8 + 280658140];
                scaled_index_5 = 1760 * item_2;
                if ( dword_140404A6C[1760 * item_2 + 278845898] == 18 )
                {
                  dword_140404A6C[5 * saved_corporation + 188872237] += sr_item_cash_value(item_2);
                  dword_140404A6C[scaled_index_5 + 278845900] = 0;
                }
              }
              if ( dword_140404A6C[scaled_index_12 + 283831510] == player && (unsigned int)(a3 - 3) <= 2 )
              {
                if ( a3 == 4 )
                {
                  denomination = 5;
                }
                else
                {
                  denomination = 3;
                  if ( a3 == 5 )
                    denomination = 6;
                }
                scaled_index_6 = dword_140404A6C[5 * saved_corporation + 188872237] - dword_1402B2960[denomination];
                if ( scaled_index_6 >= (signed int)-dword_140404A6C[5 * saved_corporation + 188872238] )
                {
                  scaled_index_7 = 7166 * table_value_8;
                  slot = 0;
                  if ( (int)dword_140404A6C[7166 * table_value_8 + 280658139] > 0 )
                    slot = dword_140404A6C[1760 * dword_140404A6C[scaled_index_7 + 280658140] + 278845898] != 18;
                  scaled_index_8 = scaled_index_7 * 4 + 40LL * slot;
                  if ( *(int *)((char *)&g_1832A4DD8 + scaled_index_8) <= 0 )
                  {
                    table_value_5 = dword_140404A6C[scaled_index_7 + 280651336];
                    float_word = dword_140404A6C[scaled_index_7 + 280651335];
                    table_value_6 = dword_140404A6C[scaled_index_7 + 280651337];
                    unused_written_slot = table_value_5;
                    unused_written_slot_2 = table_value_6;
                    cached_xmmword_140278d30 = xmmword_140278D30;
                    unused_written_slot_4 = 1065353216;
                    unused_written_slot_3 = xmmword_140278D30;
                    createitem_result_2 = sr_CreateItem(18, (float *)&float_word, nullptr, (float *)&cached_xmmword_140278d30);
                    scaled_index_9 = 1760LL * createitem_result_2;
                    dword_140404A6C[scaled_index_9 + 278846062] = 0;
                    dword_140404A6C[scaled_index_9 + 278846063] = denomination;
                    sr_item_transfer(createitem_result_2, -1, human, slot);
                    dword_140404A6C[5 * saved_corporation + 188872237] -= dword_1402B2960[denomination];
                  }
                  else
                  {
                    item_3 = *(int *)((char *)&g_1832A4DDC + scaled_index_8);
                    if ( dword_140404A6C[1760 * item_3 + 278845898] == 18 && (unsigned int)sr_item_insert_cash_bill(item_3, 0, denomination) )
                      dword_140404A6C[5 * saved_corporation + 188872237] = scaled_index_6;
                  }
                }
              }
              return;
            }
            switch ( a3 )
            {
              case 7:
                selection_code = 11;
                break;
              case 8:
                selection_code = 12;
                break;
              case 9:
                selection_code = 7;
                break;
              case 10:
                selection_code = 8;
                break;
              case 11:
                selection_code = 14;
                break;
              default:
                selection_code = 25;
                break;
            }
          }
        }
        else
        {
          selection_code = 19;
        }
        if ( (int)dword_140404A6C[player_record_offset + 71856279] < 10 )
        {
          if ( selection_code == 25 )
            sub_1400F3D10(corporation);
          table_value_3 = dword_140404A6C[scaled_index + 280651336];
          float_word = dword_140404A6C[scaled_index + 280651335];
          table_value_4 = dword_140404A6C[scaled_index + 280651337];
          unused_written_slot = table_value_3;
          unused_written_slot_2 = table_value_4;
          cached_xmmword_140278d30 = xmmword_140278D30;
          unused_written_slot_4 = 1065353216;
          unused_written_slot_3 = xmmword_140278D30;
          createitem_result = sr_CreateItem(selection_code, (float *)&float_word, nullptr, (float *)&cached_xmmword_140278d30);
          item = createitem_result;
          if ( createitem_result != -1 )
          {
            switch ( selection_code )
            {
              case 19:
                dword_140404A6C[1760 * createitem_result + 278846098] = sr_disk_create(0x168u);
                break;
              case 26:
                dword_140404A6C[1760 * createitem_result + 278846111] = corporation;
                break;
              case 25:
                scaled_index_2 = 1760LL * createitem_result;
                dword_140404A6C[scaled_index_2 + 278846051] = 0;
                dword_140404A6C[scaled_index_2 + 278845981] = 1111 * (corporation + 1);
                sr_item_phone_changed(createitem_result);
                break;
            }
            for ( i = 0; i < 7; ++i )
            {
              if ( (unsigned int)sr_item_transfer(item, -1, human, i) )
                break;
            }
            scaled_index_3 = dword_140404A6C[5 * saved_corporation + 188872237];
            if ( selection_code == 25 )
              scaled_index_4 = scaled_index_3 - 100;
            else
              scaled_index_4 = scaled_index_3 - dword_140404A6C[1268 * selection_code + 278521286];
            ++dword_140404A6C[player_record_offset + 71856279];
            player = a1;
            dword_140404A6C[5 * saved_corporation + 188872237] = scaled_index_4;
          }
        }
        goto LABEL_111;
      }
      if ( a2 == 20 )
      {
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            scaled_index_11 = 5873LL * corporation;
            if ( dword_140404A6C[scaled_index_11 + 283831510] != -1 )
            {
              table_value_7 = (int)dword_140404A6C[scaled_index_11 + 283837293];
              if ( (int)table_value_7 <= 0 )
              {
LABEL_143:
                if ( (int)table_value_7 < 32 )
                {
                  dword_140404A6C[5873 * corporation + 283837294 + table_value_7] = player;
                  ++dword_140404A6C[scaled_index_11 + 283837293];
                }
              }
              else
              {
                buffer_cursor = &dword_140404A6C[scaled_index_11 + 283837294];
                while ( *buffer_cursor != player )
                {
                  ++mission;
                  ++buffer_cursor;
                  if ( mission >= (int)table_value_7 )
                    goto LABEL_143;
                }
              }
            }
          }
        }
        else
        {
          scaled_index_10 = 5873LL * corporation;
          if ( dword_140404A6C[scaled_index_10 + 283831510] == -1 )
          {
            sub_1400F3B30(player);
            sub_140138430(player, corporation);
            sub_1400F45A0(corporation, player);
            dword_140404A6C[player_record_offset + 71856342] = 25;
            sr_event_player_update(player);
            mission_2 = 0;
            state_address_2 = &dword_140404A6C[scaled_index_10 + 283831588];
            do
            {
              if ( *state_address_2 )
                sr_event_mission_text(corporation, mission_2);
              ++mission_2;
              state_address_2 += 279;
            }
            while ( mission_2 < 16 );
            dword_140404A6C[scaled_index_10 + 283837293] = 0;
          }
        }
      }
    }
  }
}
#undef table_value_8
#undef scaled_index_12
#undef float_word
#undef unused_written_slot
#undef unused_written_slot_2
#undef cached_xmmword_140278d30
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef human

// 1400EF48A: conditional instruction was optimized away because esi.4 is in (7..C)
// 1400EF496: conditional instruction was optimized away because esi.4 is in (7..C)
// 1400EF4D4: conditional instruction was optimized away because esi.4==C

//----- (00000001400F0640) ----------------------------------------------------
__int64            sub_1400F0640(int a1)
{
  int input_value;
  __int64 player_record_offset;
  unsigned int table_value;
  __int64 table_value_2;
  int iteration_count;
  int cached_item_block_region_count;
  int region;
  unsigned int *state_address;
  int region_2;
  unsigned int *state_address_2;
  unsigned int loaded_word;
  int region_3;
  int element_index;
  __int64 element_index_2;
  float *state_address_3;
  float weighted_sum;
  float weighted_sum_2;
  __int64 packed_word_bits;
  unsigned int *state_address_4;
  char *text_cursor;
  __int64 table_value_3;
  unsigned int *state_address_5;
  char input_byte;
  __int64 scaled_index;
  unsigned int table_value_4;
  unsigned int scaled_index_2;
  char *text_cursor_2;
  unsigned int *state_address_6;
  char input_byte_2;
  __int64 table_value_5;
  char *text_cursor_3;
  unsigned int *state_address_7;
  char input_byte_3;
  char *text_cursor_4;
  unsigned int *state_address_8;
  char input_byte_4;
  unsigned int lookup_index;
  unsigned int lookup_index_2;
  unsigned int table_value_6;
  signed int iteration_count_2;
  int *buffer_cursor;
       char *state_address_9;
  unsigned int *state_address_10;
  char input_byte_5;
  int cached_input_value;
  unsigned int *state_address_11;
  int iteration_count_3;
  int running_total;
       char *state_address_12;
  unsigned int *state_address_13;
  char input_byte_6;
  char *text_cursor_5;
  unsigned int *state_address_14;
  char input_byte_7;
  char *text_cursor_6;
  unsigned int *state_address_15;
  char input_byte_8;
  char *text_cursor_7;
  unsigned int *state_address_16;
  char input_byte_9;
  char *text_cursor_8;
  unsigned int *state_address_17;
  char input_byte_10;
  char *text_cursor_9;
  unsigned int *state_address_18;
  char input_byte_11;
  char *text_cursor_10;
  unsigned int *state_address_19;
  char input_byte_12;
  char *text_cursor_11;
  unsigned int *state_address_20;
  char input_byte_13;
  char *text_cursor_12;
  unsigned int *state_address_21;
  char input_byte_14;
  char *text_cursor_13;
  unsigned int *state_address_22;
  char input_byte_15;
  int cached_input_value_2;
  char *text_cursor_14;
  unsigned int *state_address_23;
  char input_byte_16;
  char *text_cursor_15;
  unsigned int *state_address_24;
  char input_byte_17;
  char *text_cursor_16;
  unsigned int *state_address_25;
  char input_byte_18;
  char *text_cursor_17;
  unsigned int *state_address_26;
  char input_byte_19;
  unsigned int table_value_7;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 iteration_count_4;
  unsigned int *buffer_cursor_2;
  __int64 scaled_index_5;
  __int64 table_value_8;
  float *state_address_27;
  __int64 scaled_index_6;
  float source_component_z;
  __int64 scaled_index_7;
  unsigned int table_value_9;
  unsigned int *record_byte_offset;
  int iteration_count_5;
  __int64 scaled_index_8;
  char *text_cursor_18;
  char *byte_cursor;
  char input_byte_20;
  _WORD *state_address_28;
  bool comparison_result;
  char *destination_text;
  char *text_cursor_19;
  unsigned int *state_address_29;
  char input_byte_21;
  __int64 scaled_index_9;
  int running_total_2;
       char *state_address_30;
  char *text_cursor_20;
  unsigned int *state_address_31;
  char input_byte_22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F0640[592];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 0)) /* [rsp+8h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_1400F0640 + 32)) /* [rsp+28h] */
#define saved_running_total (*(unsigned int (*))(void *)(sr_frame_1400F0640 + 36)) /* [rsp+2Ch] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 40)) /* [rsp+30h] */
#define state_address_32 (*(unsigned int * (*))(void *)(sr_frame_1400F0640 + 48)) /* [rsp+38h] */
#define scaled_index_10 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 56)) /* [rsp+40h] */
#define destination_text_2 (*(char (*)[512])(void *)(sr_frame_1400F0640 + 64)) /* [rsp+48h] */
#define unused_frame_slot_576 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 576)) /* [rsp+248h] */

  input_value = a1;
  player_record_offset = 3597LL * a1;
  input_value_2 = a1;
  table_value = 0;
  table_value_2 = (int)dword_140404A6C[player_record_offset + 71856292];
  dword_140404A6C[player_record_offset + 71857986] = 0;
  if ( (unsigned int)table_value_2 > 0xFF )
    return 0; /* compatibility result discarded by all reviewed callers */
  if ( game_state == 3 )
  {
    iteration_count = 0;
    dword_140404A6C[player_record_offset + 71856342] = 0;
    goto LABEL_34;
  }
  cached_item_block_region_count = item_block_region_count;
  saved_running_total = dword_140404A6C[player_record_offset + 71856342];
  if ( saved_running_total - 9 <= 2 )
  {
    region = dword_140404A6C[player_record_offset + 71856343];
    if ( region < 0 || region >= (int)item_block_region_count )
    {
      dword_140404A6C[player_record_offset + 71856342] = 0;
    }
    else
    {
      if ( sr_world_region_contains_point(region, (float *)&dword_140404A6C[7166 * table_value_2 + 280651335], 0.0) )
        goto LABEL_11;
      dword_140404A6C[player_record_offset + 71856342] = 0;
    }
    saved_running_total = 0;
  }
LABEL_11:
  state_address = &g_1760C5638;
  region_2 = 0;
  if ( cached_item_block_region_count > 0 )
  {
    state_address_2 = &g_1760C5638;
    do
    {
      loaded_word = *state_address_2;
      if ( *state_address_2 == 3 )
      {
        if ( sr_world_region_contains_point(region_2, (float *)&dword_140404A6C[7166 * table_value_2 + 280651335], 0.0) )
        {
          if ( saved_running_total )
            goto LABEL_107;
          iteration_count = 0;
          dword_140404A6C[player_record_offset + 71856342] = 9;
          dword_140404A6C[player_record_offset + 71856343] = region_2;
          goto LABEL_33;
        }
      }
      else if ( (loaded_word == 5 || loaded_word - 8 <= 1) && sr_world_region_contains_point(region_2, (float *)&dword_140404A6C[7166 * table_value_2 + 280651335], 0.0) )
      {
        if ( saved_running_total )
          goto LABEL_107;
        iteration_count = 0;
        dword_140404A6C[player_record_offset + 71856342] = 10;
        dword_140404A6C[player_record_offset + 71856343] = region_2;
        goto LABEL_33;
      }
      ++region_2;
      state_address_2 += 14019;
    }
    while ( region_2 < cached_item_block_region_count );
  }
  region_3 = 0;
  if ( cached_item_block_region_count <= 0 )
  {
LABEL_25:
    if ( game_type != 4 )
    {
      if ( ((game_type - 3) & 0xFFFFFFFB) != 0
        || (table_value_8 = (int)dword_140404A6C[player_record_offset + 71856286], (unsigned int)table_value_8 > 5)
        || (state_address_27 = (float *)&dword_140404A6C[7166 * table_value_2 + 280651335],
            scaled_index_6 = 5873 * table_value_8,
            *state_address_27 < *(float *)&dword_140404A6C[5873 * table_value_8 + 283831485])
        || *state_address_27 >= *(float *)&dword_140404A6C[scaled_index_6 + 283831488]
        || (source_component_z = state_address_27[2], source_component_z < *(float *)&dword_140404A6C[scaled_index_6 + 283831487])
        || source_component_z >= *(float *)&dword_140404A6C[scaled_index_6 + 283831490] )
      {
LABEL_32:
        iteration_count = 0;
        dword_140404A6C[player_record_offset + 71856342] = 0;
        goto LABEL_33;
      }
      input_value = input_value_2;
      iteration_count = 0;
      if ( !saved_running_total )
        dword_140404A6C[player_record_offset + 71856342] = 14;
      goto LABEL_34;
    }
    element_index = 0;
    element_index_2 = 0;
    state_address_3 = (float *)(unsigned int *)&g_183EBFD6C;
    weighted_sum = *(float *)&dword_140404A6C[7166 * table_value_2 + 280651335];
    while ( 1 )
    {
      if ( weighted_sum >= *(state_address_3 - 3) && weighted_sum < *state_address_3 )
      {
        weighted_sum_2 = *(float *)&dword_140404A6C[7166 * table_value_2 + 280651337];
        if ( weighted_sum_2 >= *(state_address_3 - 1) && weighted_sum_2 < state_address_3[2] )
          break;
      }
      ++element_index;
      ++element_index_2;
      state_address_3 += 5873;
      if ( (__int64)state_address_3 >= (__int64)&g_183EE2404 )
        goto LABEL_32;
    }
    table_value_7 = dword_140404A6C[player_record_offset + 71856286];
    if ( table_value_7 != 17 )
    {
      if ( dword_140404A6C[5873 * element_index + 283831510] != -1 )
      {
        if ( table_value_7 == element_index && saved_running_total == 20 )
          dword_140404A6C[player_record_offset + 71856342] = 25;
        goto LABEL_111;
      }
      if ( table_value_7 != element_index )
      {
LABEL_111:
        iteration_count = 0;
        goto LABEL_112;
      }
    }
    iteration_count = 0;
    dword_140404A6C[player_record_offset + 71856342] = 20;
    if ( dword_140404A6C[5873 * element_index + 283831510] == -1 )
    {
      dword_140404A6C[player_record_offset + 71857987] = 0;
      scaled_index_3 = player_record_offset * 4 + 72LL * (int)dword_140404A6C[player_record_offset + 71857986];
      *(_QWORD *)((char *)&g_15162277C + scaled_index_3) = 0x614D20796C707041LL;
      *(unsigned int *)((char *)&g_151622784 + scaled_index_3) = 1701273966;
      *(_WORD *)((char *)&g_151622788 + scaled_index_3) = 114;
    }
    else
    {
      scaled_index_4 = (int)dword_140404A6C[5873 * element_index + 283837293];
      if ( scaled_index_4 > 0 )
      {
        iteration_count_4 = 0;
        buffer_cursor_2 = &dword_140404A6C[5873 * element_index_2 + 283837294];
        while ( *buffer_cursor_2 != input_value_2 )
        {
          ++iteration_count_4;
          ++buffer_cursor_2;
          if ( iteration_count_4 >= scaled_index_4 )
            goto LABEL_125;
        }
        goto LABEL_112;
      }
LABEL_125:
      sub_1400F3B30(input_value_2);
      dword_140404A6C[player_record_offset + 71857987] = 1;
      scaled_index_5 = player_record_offset * 4 + 72LL * (int)dword_140404A6C[player_record_offset + 71857986];
      *(unsigned int *)((char *)&g_15162277C + scaled_index_5) = 1819308097;
      *(_WORD *)((char *)&g_151622780 + scaled_index_5) = 121;
    }
    table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
    dword_140404A6C[player_record_offset + 71857986] = table_value;
LABEL_112:
    if ( dword_140404A6C[player_record_offset + 71856286] == element_index && !dword_140404A6C[player_record_offset + 71856342] )
      dword_140404A6C[player_record_offset + 71856342] = 25;
    goto LABEL_33;
  }
  while ( *state_address != 6 || !sr_world_region_contains_point(region_3, (float *)&dword_140404A6C[7166 * table_value_2 + 280651335], 0.0) )
  {
    ++region_3;
    state_address += 14019;
    if ( region_3 >= cached_item_block_region_count )
      goto LABEL_25;
  }
  if ( saved_running_total )
  {
LABEL_107:
    iteration_count = 0;
  }
  else
  {
    iteration_count = 0;
    dword_140404A6C[player_record_offset + 71856342] = 13;
    dword_140404A6C[player_record_offset + 71856343] = region_3;
  }
LABEL_33:
  input_value = input_value_2;
LABEL_34:
  packed_word_bits = (int)dword_140404A6C[player_record_offset + 71856286];
  state_address_4 = &g_151623978;
  LODWORD(packed_word_bits_2) = dword_140404A6C[player_record_offset + 71856286];
  state_address_32 = &g_151620C64;
  saved_running_total = 6;
  if ( game_type != 4 )
  {
    cached_input_value_2 = input_value_2;
LABEL_140:
    if ( (_DWORD)packed_word_bits != -1 )
    {
      table_value_9 = dword_140404A6C[player_record_offset + 71856342];
      if ( table_value_9 == 17 )
      {
        record_byte_offset = &g_19021F24C;
        iteration_count_5 = 0;
        do
        {
          if ( *(record_byte_offset - 2) )
          {
            scaled_index_8 = (int)*record_byte_offset;
            if ( (int)scaled_index_8 >= 6 )
            {
              destination_text_2[0] = 0;
            }
            else
            {
              text_cursor_18 = off_1402B23E0[scaled_index_8];
              byte_cursor = (char *)(destination_text_2 - text_cursor_18);
              do
              {
                input_byte_20 = *text_cursor_18;
                byte_cursor[(_QWORD)text_cursor_18] = *text_cursor_18;
                ++text_cursor_18;
              }
              while ( input_byte_20 );
            }
            state_address_28 = (_WORD *)((char *)&scaled_index_10 + 7);
            do
            {
              comparison_result = *((_BYTE *)state_address_28 + 1) == 0;
              state_address_28 = (_WORD *)((char *)state_address_28 + 1);
            }
            while ( !comparison_result );
            *state_address_28 = 32;
            destination_text = (char *)&scaled_index_10 + 7;
            do
              comparison_result = *++destination_text == 0;
            while ( !comparison_result );
            strcpy(destination_text, (     char *)&dword_140404A6C[24944 * *(record_byte_offset - 1) + 346707722]);
            text_cursor_19 = destination_text_2;
            dword_140404A6C[18 * (int)table_value + 71857987 + player_record_offset] = iteration_count_5;
            state_address_29 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
            do
            {
              input_byte_21 = *text_cursor_19++;
              *(_BYTE *)state_address_29 = input_byte_21;
              state_address_29 = (unsigned int *)((char *)state_address_29 + 1);
            }
            while ( input_byte_21 );
            dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71858004 + player_record_offset] = record_byte_offset[1];
          }
          else
          {
            dword_140404A6C[18 * (int)table_value + 71857987 + player_record_offset] = 8;
            scaled_index_9 = player_record_offset * 4 + 72LL * (int)dword_140404A6C[player_record_offset + 71857986];
            *(unsigned int *)((char *)&g_15162277C + scaled_index_9) = 1145851731;
            *((_BYTE *)&g_151622780 + scaled_index_9) = 0;
            dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71858004 + player_record_offset] = 0;
          }
          ++iteration_count_5;
          table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
          record_byte_offset += 4;
          dword_140404A6C[player_record_offset + 71857986] = table_value;
        }
        while ( iteration_count_5 < 8 );
        table_value_9 = dword_140404A6C[player_record_offset + 71856342];
        cached_input_value_2 = input_value_2;
      }
      if ( table_value_9 == 19 && dword_140404A6C[player_record_offset + 71856289] )
      {
        running_total_2 = 6;
        state_address_30 = (     char *)&g_151620C64;
        do
        {
          if ( *(state_address_4 - 2886) && !*state_address_4 && iteration_count != cached_input_value_2 )
          {
            if ( *(state_address_4 - 2853) == dword_140404A6C[player_record_offset + 71856286] )
            {
              crt_sprintf(destination_text_2, "Fire %s", state_address_30);
              text_cursor_20 = destination_text_2;
              dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = saved_running_total;
              state_address_31 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
              do
              {
                input_byte_22 = *text_cursor_20++;
                *(_BYTE *)state_address_31 = input_byte_22;
                state_address_31 = (unsigned int *)((char *)state_address_31 + 1);
              }
              while ( input_byte_22 );
              ++dword_140404A6C[player_record_offset + 71857986];
              state_address_30 = (     char *)state_address_32;
            }
            running_total_2 = saved_running_total;
          }
          state_address_30 += 14388;
          running_total_2 += 0x10000;
          ++iteration_count;
          state_address_32 = (unsigned int *)state_address_30;
          state_address_4 += 3597;
          saved_running_total = running_total_2;
        }
        while ( running_total_2 < 16777222 );
      }
    }
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  if ( (unsigned int)packed_word_bits <= 5 && dword_140404A6C[player_record_offset + 71856342] - 21 <= 5 )
  {
    dword_140404A6C[player_record_offset + 71857986] = 0;
    dword_140404A6C[player_record_offset + 71857987] = 16777220;
    if ( dword_140404A6C[player_record_offset + 71856342] == 25 )
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = -1;
    text_cursor = destination_text_2;
    table_value_3 = (int)dword_140404A6C[player_record_offset + 71857986];
    strcpy(destination_text_2, "Requisition");
    state_address_5 = &dword_140404A6C[18 * table_value_3 + 71857988 + player_record_offset];
    do
    {
      input_byte = *text_cursor++;
      *(_BYTE *)state_address_5 = input_byte;
      state_address_5 = (unsigned int *)((char *)state_address_5 + 1);
    }
    while ( input_byte );
    scaled_index = 23492 * packed_word_bits;
    table_value_4 = dword_140404A6C[player_record_offset + 71857986] + 1;
    dword_140404A6C[player_record_offset + 71857986] = table_value_4;
    scaled_index_10 = 23492 * packed_word_bits;
    scaled_index_2 = dword_140404A6C[5873 * packed_word_bits + 283831510];
    if ( scaled_index_2 == input_value )
    {
      dword_140404A6C[18 * (int)table_value_4 + 71857987 + player_record_offset] = 16777217;
      if ( dword_140404A6C[player_record_offset + 71856342] == 22 )
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = -1;
      text_cursor_2 = destination_text_2;
      strcpy(destination_text_2, "Hiring");
      state_address_6 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_2 = *text_cursor_2++;
        *(_BYTE *)state_address_6 = input_byte_2;
        state_address_6 = (unsigned int *)((char *)state_address_6 + 1);
      }
      while ( input_byte_2 );
      table_value_5 = (int)dword_140404A6C[player_record_offset + 71857986];
      dword_140404A6C[player_record_offset + 71857986] = table_value_5 + 1;
      dword_140404A6C[18 * table_value_5 + 71858005 + player_record_offset] = 16777218;
      if ( dword_140404A6C[player_record_offset + 71856342] == 23 )
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = -1;
      text_cursor_3 = destination_text_2;
      strcpy(destination_text_2, "Firing");
      state_address_7 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_3 = *text_cursor_3++;
        *(_BYTE *)state_address_7 = input_byte_3;
        state_address_7 = (unsigned int *)((char *)state_address_7 + 1);
      }
      while ( input_byte_3 );
      table_value_4 = dword_140404A6C[player_record_offset + 71857986] + 1;
      dword_140404A6C[player_record_offset + 71857986] = table_value_4;
    }
    dword_140404A6C[18 * (int)table_value_4 + 71857987 + player_record_offset] = 16777219;
    if ( dword_140404A6C[player_record_offset + 71856342] == 24 )
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = -1;
    text_cursor_4 = destination_text_2;
    strcpy(destination_text_2, "Team");
    state_address_8 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
    do
    {
      input_byte_4 = *text_cursor_4++;
      *(_BYTE *)state_address_8 = input_byte_4;
      state_address_8 = (unsigned int *)((char *)state_address_8 + 1);
    }
    while ( input_byte_4 );
    table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
    dword_140404A6C[player_record_offset + 71857986] = table_value;
    lookup_index = table_value;
    lookup_index_2 = table_value;
    if ( scaled_index_2 == input_value )
    {
      table_value_6 = dword_140404A6C[player_record_offset + 71856342];
      if ( table_value_6 == 22 )
      {
        iteration_count_2 = 0;
        if ( (int)dword_140404A6C[5873 * packed_word_bits + 283837293] > 0 )
        {
          buffer_cursor = (int *)((char *)&g_183EC5824 + scaled_index);
          do
          {
            state_address_9 = (     char *)&dword_140404A6C[3597 * *buffer_cursor + 71856254];
            dword_140404A6C[18 * (int)lookup_index_2 + 71857987 + player_record_offset] = (*buffer_cursor << 16) + 3;
            crt_sprintf(destination_text_2, "Hire %s", state_address_9);
            text_cursor_4 = destination_text_2;
            state_address_10 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
            do
            {
              input_byte_5 = *text_cursor_4++;
              *(_BYTE *)state_address_10 = input_byte_5;
              state_address_10 = (unsigned int *)((char *)state_address_10 + 1);
            }
            while ( input_byte_5 );
            ++iteration_count_2;
            table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
            ++buffer_cursor;
            lookup_index = table_value;
            lookup_index_2 = table_value;
            dword_140404A6C[player_record_offset + 71857986] = table_value;
          }
          while ( iteration_count_2 < (int)dword_140404A6C[5873 * packed_word_bits + 283837293] );
          table_value_6 = dword_140404A6C[player_record_offset + 71856342];
          LODWORD(packed_word_bits) = packed_word_bits_2;
          iteration_count = 0;
        }
      }
      if ( table_value_6 == 23 )
      {
        cached_input_value = input_value_2;
        state_address_11 = &g_151623978;
        iteration_count_3 = 0;
        running_total = 6;
        state_address_12 = (     char *)&g_151620C64;
        do
        {
          if ( *(state_address_11 - 2886) && !*state_address_11 && iteration_count_3 != cached_input_value && *(state_address_11 - 2853) == dword_140404A6C[player_record_offset + 71856286] )
          {
            crt_sprintf(destination_text_2, "Fire %s", state_address_12);
            text_cursor_4 = destination_text_2;
            dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = running_total;
            state_address_13 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
            do
            {
              input_byte_6 = *text_cursor_4++;
              *(_BYTE *)state_address_13 = input_byte_6;
              state_address_13 = (unsigned int *)((char *)state_address_13 + 1);
            }
            while ( input_byte_6 );
            table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
            lookup_index = table_value;
            dword_140404A6C[player_record_offset + 71857986] = table_value;
          }
          ++iteration_count_3;
          state_address_12 += 14388;
          running_total += 0x10000;
          state_address_11 += 3597;
        }
        while ( running_total < 16777222 );
        scaled_index = scaled_index_10;
        iteration_count = 0;
        LODWORD(packed_word_bits) = packed_word_bits_2;
      }
    }
    if ( dword_140404A6C[player_record_offset + 71856342] == 25 )
    {
      crt_sprintf(destination_text_2, "Buy Disk", text_cursor_4);
      text_cursor_5 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 0;
      state_address_14 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_7 = *text_cursor_5++;
        *(_BYTE *)state_address_14 = input_byte_7;
        state_address_14 = (unsigned int *)((char *)state_address_14 + 1);
      }
      while ( input_byte_7 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy Briefcase", text_cursor_5);
      text_cursor_6 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 1;
      state_address_15 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_8 = *text_cursor_6++;
        *(_BYTE *)state_address_15 = input_byte_8;
        state_address_15 = (unsigned int *)((char *)state_address_15 + 1);
      }
      while ( input_byte_8 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy Walkie-Talkie", text_cursor_6);
      text_cursor_7 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 6;
      state_address_16 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_9 = *text_cursor_7++;
        *(_BYTE *)state_address_16 = input_byte_9;
        state_address_16 = (unsigned int *)((char *)state_address_16 + 1);
      }
      while ( input_byte_9 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy 9mm", text_cursor_7);
      text_cursor_8 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 7;
      state_address_17 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_10 = *text_cursor_8++;
        *(_BYTE *)state_address_17 = input_byte_10;
        state_address_17 = (unsigned int *)((char *)state_address_17 + 1);
      }
      while ( input_byte_10 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy 9mm Magazine", text_cursor_8);
      text_cursor_9 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 8;
      state_address_18 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_11 = *text_cursor_9++;
        *(_BYTE *)state_address_18 = input_byte_11;
        state_address_18 = (unsigned int *)((char *)state_address_18 + 1);
      }
      while ( input_byte_11 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy MP5", text_cursor_9);
      text_cursor_10 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 9;
      state_address_19 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_12 = *text_cursor_10++;
        *(_BYTE *)state_address_19 = input_byte_12;
        state_address_19 = (unsigned int *)((char *)state_address_19 + 1);
      }
      while ( input_byte_12 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy MP5 Magazine", text_cursor_10);
      text_cursor_11 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 10;
      state_address_20 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_13 = *text_cursor_11++;
        *(_BYTE *)state_address_20 = input_byte_13;
        state_address_20 = (unsigned int *)((char *)state_address_20 + 1);
      }
      while ( input_byte_13 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Buy Bandage", text_cursor_11);
      text_cursor_12 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 11;
      state_address_21 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_14 = *text_cursor_12++;
        *(_BYTE *)state_address_21 = input_byte_14;
        state_address_21 = (unsigned int *)((char *)state_address_21 + 1);
      }
      while ( input_byte_14 );
      ++dword_140404A6C[player_record_offset + 71857986];
      crt_sprintf(destination_text_2, "Deposit", text_cursor_12);
      text_cursor_13 = destination_text_2;
      dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 2;
      state_address_22 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
      do
      {
        input_byte_15 = *text_cursor_13++;
        *(_BYTE *)state_address_22 = input_byte_15;
        state_address_22 = (unsigned int *)((char *)state_address_22 + 1);
      }
      while ( input_byte_15 );
      cached_input_value_2 = input_value_2;
      table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
      lookup_index = table_value;
      dword_140404A6C[player_record_offset + 71857986] = table_value;
      if ( *(unsigned int *)((char *)&g_183EBFDC4 + scaled_index) == cached_input_value_2 )
      {
        crt_sprintf(destination_text_2, "Withdrawl $20", text_cursor_13);
        text_cursor_14 = destination_text_2;
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 3;
        state_address_23 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
        do
        {
          input_byte_16 = *text_cursor_14++;
          *(_BYTE *)state_address_23 = input_byte_16;
          state_address_23 = (unsigned int *)((char *)state_address_23 + 1);
        }
        while ( input_byte_16 );
        ++dword_140404A6C[player_record_offset + 71857986];
        crt_sprintf(destination_text_2, "Withdrawl $100", text_cursor_14);
        text_cursor_15 = destination_text_2;
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 4;
        state_address_24 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
        do
        {
          input_byte_17 = *text_cursor_15++;
          *(_BYTE *)state_address_24 = input_byte_17;
          state_address_24 = (unsigned int *)((char *)state_address_24 + 1);
        }
        while ( input_byte_17 );
        ++dword_140404A6C[player_record_offset + 71857986];
        crt_sprintf(destination_text_2, "Withdrawl $1000", text_cursor_15);
        text_cursor_16 = destination_text_2;
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 5;
        state_address_25 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
        do
        {
          input_byte_18 = *text_cursor_16++;
          *(_BYTE *)state_address_25 = input_byte_18;
          state_address_25 = (unsigned int *)((char *)state_address_25 + 1);
        }
        while ( input_byte_18 );
        ++dword_140404A6C[player_record_offset + 71857986];
        crt_sprintf(destination_text_2, "Replace Phone", text_cursor_16);
        text_cursor_17 = destination_text_2;
        dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857987 + player_record_offset] = 12;
        state_address_26 = &dword_140404A6C[18 * (int)dword_140404A6C[player_record_offset + 71857986] + 71857988 + player_record_offset];
        do
        {
          input_byte_19 = *text_cursor_17++;
          *(_BYTE *)state_address_26 = input_byte_19;
          state_address_26 = (unsigned int *)((char *)state_address_26 + 1);
        }
        while ( input_byte_19 );
        table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
        lookup_index = table_value;
        dword_140404A6C[player_record_offset + 71857986] = table_value;
      }
    }
    else
    {
      cached_input_value_2 = input_value_2;
    }
    if ( dword_140404A6C[player_record_offset + 71856342] == 24 )
    {
      dword_140404A6C[18 * (int)lookup_index + 71857987 + player_record_offset] = 0;
      scaled_index_7 = player_record_offset * 4 + 72LL * (int)dword_140404A6C[player_record_offset + 71857986];
      *(_QWORD *)((char *)&g_15162277C + scaled_index_7) = 0x6165542074697551LL;
      *(_WORD *)((char *)&g_151622784 + scaled_index_7) = 109;
      table_value = dword_140404A6C[player_record_offset + 71857986] + 1;
      dword_140404A6C[player_record_offset + 71857986] = table_value;
    }
    if ( game_type != 4 )
    {
      state_address_4 = &g_151623978;
      goto LABEL_140;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef input_value_2
#undef saved_running_total
#undef packed_word_bits_2
#undef state_address_32
#undef scaled_index_10
#undef destination_text_2
#undef unused_frame_slot_576

//----- (00000001400F1950) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1400F1950(int a1)
{
  int player;
  __int64 record_word_offset;
  signed int masked_bits;
  __int64 human;
  __int64 scaled_index;
  int masked_bits_2;
  __int64 float_word;
  unsigned int masked_bits_3;
  unsigned __int64 float_word_2;
  bool comparison_result;
  int integer_difference;
  __int64 item;
  __int64 float_word_3;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  int masked_bits_4;
  __int64 xor_value;
  signed int createitem_result;
  __int64 scaled_index_4;
  int bill;
  __int64 item_2;
  int table_value;
  signed int table_value_2;
  __int64 masked_bits_5;
  unsigned int scaled_index_5;
  unsigned int cached_game_tick;
  __int64 shifted_bits;
  int masked_bits_6;
  __int64 denomination;
  int comparison_result_2;
  __int64 comparison_result_3;
  __int64 iteration_count;
  __int64 scaled_index_6;
  _DWORD *buffer_cursor;
  __int64 masked_bits_7;
  __int64 scaled_index_7;
  __int64 masked_bits_8;
  unsigned int scaled_index_8;
  __int64 masked_bits_9;
  signed int masked_bits_10;
  signed int scaled_index_9;
  int comparison_result_4;
  int comparison_result_5;
  int cached_selection_flag;
  __int64 masked_bits_11;
  __int64 masked_bits_12;
  signed int scaled_index_10;
  int scaled_index_11;
  __int64 human_2;
  float weighted_sum;
  float weighted_sum_2;
  signed int createitem_result_2;
  int i;
  __int64 saved_masked_bits;
  int masked_bits_13;
  int masked_bits_14;
  __int64 human_3;
  signed int scaled_index_12;
  float weighted_sum_3;
  float weighted_sum_4;
  signed int createitem_result_3;
  int j;
  __int64 masked_bits_15;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 masked_bits_16;
  __int64 byte_count;
  __int64 masked_bits_17;
  int masked_bits_18;
  unsigned int cached_world_event_count;
  __int64 shifted_bits_2;
  int integer_difference_2;
  int masked_bits_19;
  __int64 scaled_index_15;
  signed int table_value_3;
  unsigned int float_word_4;
  unsigned int float_word_5;
  signed int createitem_result_4;
  int k;
  int integer_difference_3;
  int scaled_index_16;
  int scaled_index_17;
  unsigned int scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  float weighted_sum_5;
  float weighted_sum_6;
  unsigned int call_result;
  unsigned int float_word_6;
  unsigned int float_word_7;
  int human_4;
  int slot;
  signed int createitem_result_5;
  __int64 scaled_index_21;
  unsigned int cached_game_tick_2;
  __int64 shifted_bits_3;
  unsigned int scaled_index_22;
  unsigned int integer_sum;
  unsigned int scaled_index_23;
  int integer_difference_4;
  __int64 scaled_index_24;
  float weighted_sum_7;
  float weighted_sum_8;
  int masked_bits_20;
  int player_2;
  __int64 scaled_index_25;
  __int64 scaled_index_26;
  float weighted_sum_9;
  float weighted_sum_10;
  int masked_bits_21;
  float packed_word_bits;
  float packed_word_bits_2;
  float packed_word_bits_3;
  float weighted_sum_11;
  float packed_word_bits_4;
  float weighted_sum_12;
  float combined_products;
  float weighted_sum_13;
  signed int createitem_result_6;
  int m;
  int selection_code;
  int masked_bits_22;
  int table_value_4;
  __int64 scaled_index_27;
  __int64 item_3;
  __int64 item_4;
  __int64 scaled_index_28;
  unsigned int float_word_8;
  unsigned int float_word_9;
  signed int createitem_result_7;
  __int64 scaled_index_29;
  __int64 masked_bits_23;
  signed int scaled_index_30;
  int table_value_5;
  int saved_human;
  __int64 scaled_index_31;
  __int64 item_5;
  unsigned int float_word_10;
  unsigned int float_word_11;
  signed int createitem_result_8;
  int human_5;
  __int64 player_3;
  __int64 scaled_index_32;
  __int64 scaled_index_33;
  __int64 item_6;
  int item_cash_value_result;
  int record_byte_offset;
  int scaled_index_34;
  unsigned int *state_address;
  float weighted_sum_14;
  unsigned int *state_address_2;
  signed int player_4;
  int scaled_index_35;
  int n;
  __int64 masked_bits_24;
  __int64 scaled_index_36;
  __int64 masked_bits_25;
  int masked_bits_26;
  unsigned int *state_address_3;
  unsigned __int64 lookup_index;
  unsigned int cached_world_event_count_2;
  __int64 shifted_bits_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F1950[2304];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 0)) /* [rsp+0h] */
#define masked_bits_27 (*(int (*))(void *)(sr_frame_1400F1950 + 32)) /* [rsp+20h] */
#define player_5 (*(int (*))(void *)(sr_frame_1400F1950 + 48)) /* [rsp+30h] */
#define human_6 (*(int (*))(void *)(sr_frame_1400F1950 + 52)) /* [rsp+34h] */
#define integer_sum_2 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 56)) /* [rsp+38h] */
#define selection_flag (*(int (*))(void *)(sr_frame_1400F1950 + 64)) /* [rsp+40h] */
#define float_word_12 (*(unsigned int (*))(void *)(sr_frame_1400F1950 + 72)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1400F1950 + 76)) /* [rsp+4Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1400F1950 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1400F1950 + 88)) /* [rsp+58h] */
#define saved_masked_bits_2 (*(int (*))(void *)(sr_frame_1400F1950 + 92)) /* [rsp+5Ch] */
#define cached_scaled_index (*(unsigned int (*))(void *)(sr_frame_1400F1950 + 96)) /* [rsp+60h] */
#define packed_word_bits_5 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 104)) /* [rsp+68h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_1400F1950 + 112)) /* [rsp+70h] */
#define pair64_result (*(__int128 (*))(void *)(sr_frame_1400F1950 + 128)) /* [rsp+80h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1400F1950 + 144)) /* [rsp+90h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_1400F1950 + 152)) /* [rsp+98h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400F1950 + 160)) /* [rsp+A0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1400F1950 + 176)) /* [rsp+B0h] */
#define scaled_index_37 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 192)) /* [rsp+C0h] */
#define cached_xmmword_140278d30_2 (*(sr_frame_i128 (*))(void *)(sr_frame_1400F1950 + 200)) /* [rsp+C8h] */
#define unused_written_slot_5 (*(sr_frame_i128 (*))(void *)(sr_frame_1400F1950 + 216)) /* [rsp+D8h] */
#define packed_word_bits_6 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 232)) /* [rsp+E8h] */
#define Src (*(__m128i (*)[128])(void *)(sr_frame_1400F1950 + 240)) /* [rsp+F0h] */
#define unused_frame_slot_2288 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 2288)) /* [rsp+8F0h] */

  player = a1;
  record_word_offset = 14388LL * a1;
  player_5 = a1;
  saved_record_word_offset = record_word_offset;
  masked_bits = *(unsigned int *)((char *)&g_151620E18 + record_word_offset);
  LODWORD(human) = *(unsigned int *)((char *)&g_151620CFC + record_word_offset);
  human_6 = human;
  if ( masked_bits != *(unsigned int *)((char *)&g_151620E14 + record_word_offset) )
  {
    while ( 1 )
    {
      if ( (_DWORD)human != -1 )
      {
        scaled_index = record_word_offset + 84LL * masked_bits;
        if ( *(unsigned int *)((char *)&g_151620E28 + scaled_index) == 3 )
          break;
      }
LABEL_14:
      scaled_index_37 = 84LL * masked_bits;
      float_word_2 = scaled_index_37 + record_word_offset;
      comparison_result = *(unsigned int *)((char *)&dword_140404A6C[scaled_index_37 / 4 + 71856367] + record_word_offset) == 2;
      integer_sum_2 = scaled_index_37 + record_word_offset;
      if ( comparison_result )
      {
        LODWORD(human) = *(unsigned int *)((char *)&g_151620CFC + record_word_offset);
        human_6 = human;
        if ( (_DWORD)human != -1 )
        {
          integer_difference = -1;
          item = *(int *)((char *)&g_151620E2C + float_word_2);
          float_word_3 = 7166LL * human_6;
          if ( (int)dword_140404A6C[float_word_3 + 280658139] > 0 && dword_140404A6C[float_word_3 + 280658140] == (_DWORD)item )
            integer_difference = 0;
          if ( (int)dword_140404A6C[float_word_3 + 280658149] > 0 && dword_140404A6C[float_word_3 + 280658150] == (_DWORD)item )
          {
            integer_difference = 1;
            goto LABEL_23;
          }
          if ( integer_difference != -1 )
          {
LABEL_23:
            scaled_index_2 = 1760 * item;
            scaled_index_3 = dword_140404A6C[1760 * item + 278845898];
            if ( scaled_index_3 == 39 )
            {
              sub_1400C6D90(item, *(unsigned int *)((char *)&g_151620E30 + integer_sum_2));
              scaled_index_3 = dword_140404A6C[scaled_index_2 + 278845898];
            }
            if ( scaled_index_3 == 18 )
            {
              masked_bits_4 = *(unsigned int *)((char *)&g_151620E30 + integer_sum_2);
              if ( !masked_bits_4 )
              {
                ++dword_140404A6C[scaled_index_2 + 278846061];
                goto LABEL_37;
              }
              if ( masked_bits_4 == 1 )
              {
                --dword_140404A6C[scaled_index_2 + 278846061];
                goto LABEL_37;
              }
              if ( masked_bits_4 - 2 <= (int)dword_140404A6C[scaled_index_2 + 278846062] )
              {
                xor_value = float_word_3 * 4 + 40 * (integer_difference ^ 1LL);
                if ( !*(unsigned int *)((char *)&g_1832A4DD8 + xor_value) )
                {
                  createitem_result = sr_CreateItem(
                          18,
                          (float *)&dword_140404A6C[scaled_index_2 + 278845916],
                          &dword_140404A6C[scaled_index_2 + 278845925],
                          (float *)&dword_140404A6C[scaled_index_2 + 278845934]);
                  scaled_index_4 = 1760LL * createitem_result;
                  dword_140404A6C[scaled_index_4 + 278846063] = (dword_140404A6C[scaled_index_2 + 278846063] >> (3
                                                                                         * dword_140404A6C[scaled_index_2 + 278846061]))
                                                   & 7;
                  dword_140404A6C[scaled_index_4 + 278846062] = 0;
                  sr_item_transfer(createitem_result, -1, human_6, integer_difference ^ 1);
                  bill = dword_140404A6C[scaled_index_2 + 278846061];
                  goto LABEL_36;
                }
                item_2 = *(int *)((char *)&g_1832A4DDC + xor_value);
                if ( dword_140404A6C[1760 * item_2 + 278845898] == 18
                  && (unsigned int)sr_item_insert_cash_bill(
                                     item_2,
                                     0,
                                     (dword_140404A6C[scaled_index_2 + 278846063] >> (3 * dword_140404A6C[scaled_index_2 + 278846061])) & 7) )
                {
                  bill = dword_140404A6C[scaled_index_2 + 278846061];
LABEL_36:
                  sr_item_remove_cash_bill(item, bill);
                }
              }
LABEL_37:
              table_value = dword_140404A6C[scaled_index_2 + 278846061];
              if ( table_value < 0 )
              {
                table_value = 0;
                dword_140404A6C[scaled_index_2 + 278846061] = 0;
              }
              table_value_2 = dword_140404A6C[scaled_index_2 + 278846062];
              if ( table_value > table_value_2 )
                dword_140404A6C[scaled_index_2 + 278846061] = table_value_2;
            }
            if ( ((dword_140404A6C[scaled_index_2 + 278845898] - 25) & 0xFFFFFFF7) != 0
              || dword_140404A6C[scaled_index_2 + 278846052] != 1
              || dword_140404A6C[scaled_index_2 + 278845972] )
            {
              float_word_2 = integer_sum_2;
            }
            else
            {
              masked_bits_5 = *(int *)((char *)&g_151620E30 + integer_sum_2);
              if ( (unsigned int)masked_bits_5 > 9 )
              {
                float_word_2 = integer_sum_2;
              }
              else
              {
                comparison_result = game_connected == 0;
                scaled_index_5 = masked_bits_5 + 10 * dword_140404A6C[scaled_index_2 + 278845984];
                dword_140404A6C[scaled_index_2 + 278845984] = scaled_index_5;
                if ( !comparison_result )
                {
                  cached_game_tick = game_tick;
                  shifted_bits = (__int64)(int)world_event_count++ << 7;
                  HIWORD(world_event_count) = 0;
                  *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 19;
                  *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
                  *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = dword_140404A6C[masked_bits_5 + 283785984];
                  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = item;
                  *(unsigned int *)((char *)&g_1873DE490 + shifted_bits) = 1065353216;
                  *(unsigned int *)((char *)&g_1873DE494 + shifted_bits) = 1065353216;
                }
                dword_140404A6C[scaled_index_2 + 278845983] = scaled_index_5;
                sr_item_phone_changed(item);
                float_word_2 = integer_sum_2;
              }
            }
          }
          LODWORD(human) = human_6;
        }
      }
      if ( *(unsigned int *)((char *)&g_151620E28 + float_word_2) == 1
        && !(unsigned int)sub_1401307D0(player, (__int64)&g_151620E3C + float_word_2) )
      {
        sub_1401164B0(player, masked_bits);
      }
      if ( *(unsigned int *)((char *)&g_151620E28 + float_word_2) )
        goto LABEL_166;
      masked_bits_6 = *(unsigned int *)((char *)&g_151620E2C + float_word_2);
      saved_masked_bits_2 = masked_bits_6;
      if ( *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) != masked_bits_6 )
        goto LABEL_166;
      comparison_result = *(unsigned int *)((char *)&g_151620CFC + record_word_offset) == -1;
      denomination = *(int *)((char *)&g_151620E30 + float_word_2);
      LODWORD(packed_word_bits_5) = denomination;
      if ( !comparison_result )
        goto LABEL_89;
      if ( masked_bits_6 == 2 )
      {
        if ( game_state != 1 )
          goto LABEL_89;
        if ( ((int)g_183EBFCD4 >= 600 || game_type == 7)
          && !*(unsigned int *)((char *)&g_151620CE8 + record_word_offset) )
        {
          comparison_result_2 = -((_DWORD)denomination != 1);
          comparison_result_3 = -(__int64)((_DWORD)denomination != 1);
          switch ( (_DWORD)denomination )
          {
            case 2:
              comparison_result_3 = 1;
              comparison_result_2 = 1;
              goto LABEL_67;
            case 3:
              comparison_result_2 = 2;
              comparison_result_3 = 2;
              goto LABEL_67;
            case 1:
LABEL_67:
              iteration_count = 0;
              scaled_index_6 = (int)dword_140404A6C[5873 * comparison_result_3 + 283837164];
              if ( (int)scaled_index_6 > 0 )
              {
                buffer_cursor = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 23492 * comparison_result_3 + 1139562016);
                while ( *buffer_cursor != *(unsigned int *)((char *)&g_151620C9C + record_word_offset) )
                {
                  ++iteration_count;
                  ++buffer_cursor;
                  if ( iteration_count >= scaled_index_6 )
                    goto LABEL_71;
                }
                goto LABEL_89;
              }
LABEL_71:
              *(unsigned int *)((char *)&g_151620CE4 + record_word_offset) = comparison_result_2;
              *(unsigned int *)((char *)&g_151620CE8 + record_word_offset) = 60;
              *(unsigned int *)((char *)&g_151620CA8 + record_word_offset) = 0;
              break;
          }
          if ( (_DWORD)denomination == 4 )
          {
            masked_bits_7 = *(int *)((char *)&g_151620CE4 + record_word_offset);
            if ( (unsigned int)masked_bits_7 <= 0x10 )
            {
              scaled_index_7 = 5873 * masked_bits_7;
              if ( dword_140404A6C[5873 * masked_bits_7 + 283831510] == player )
              {
                dword_140404A6C[scaled_index_7 + 283831510] = -1;
                dword_140404A6C[scaled_index_7 + 283837164] = 0;
              }
            }
            sub_14011AF80(player, *(unsigned int *)((char *)&g_151620CEC + record_word_offset));
            *(unsigned int *)((char *)&g_151620CE4 + record_word_offset) = 17;
            *(unsigned int *)((char *)&g_151620CF0 + record_word_offset) = 0;
            sr_event_player_finance(player);
            *(unsigned int *)((char *)&g_151620CE8 + record_word_offset) = 60;
            *(unsigned int *)((char *)&g_151620CA8 + record_word_offset) = 0;
            sr_event_player_update(player);
            goto LABEL_89;
          }
        }
        if ( (_DWORD)denomination == 5 )
        {
          if ( !*(unsigned int *)((char *)&g_151620CA8 + record_word_offset) )
          {
            *(unsigned int *)((char *)&g_151620CA8 + record_word_offset) = 1;
            sr_event_player_update(player);
            goto LABEL_89;
          }
          if ( (int)g_183EBFCD4 > 180 )
            *(unsigned int *)((char *)&g_151620CA8 + record_word_offset) = 0;
        }
        sr_event_player_update(player);
        goto LABEL_89;
      }
      if ( masked_bits_6 == 1 && !*(unsigned int *)((char *)&g_151620CF8 + record_word_offset) )
      {
        if ( (_DWORD)denomination == 1 )
        {
          sub_140138430(player, 17);
        }
        else if ( (_DWORD)denomination != 2 )
        {
          goto LABEL_89;
        }
        sub_1401166B0(player);
      }
LABEL_89:
      if ( *(unsigned int *)((char *)&g_151620CFC + record_word_offset) != -1 )
      {
        human_6 = *(unsigned int *)((char *)&g_151620CFC + record_word_offset);
        if ( game_type == 4 )
        {
          if ( (unsigned int)(masked_bits_6 - 20) <= 6 )
            sub_1400EF0D0(player, masked_bits_6, denomination);
        }
        else if ( (unsigned int)(masked_bits_6 - 14) <= 5 )
        {
          sub_1400EE780(player, denomination);
        }
        switch ( masked_bits_6 )
        {
          case 9:
            if ( (_DWORD)denomination == 1 )
            {
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 10;
            }
            else if ( (_DWORD)denomination == 2 )
            {
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 11;
            }
            break;
          case 10:
            if ( (int)denomination < 1
              || (masked_bits_8 = *(int *)((char *)&g_151620DC8 + record_word_offset),
                  (int)denomination >= (int)(dword_140404A6C[14019 * masked_bits_8 + 225654128] + 1)) )
            {
              cached_selection_flag = selection_flag;
            }
            else
            {
              scaled_index_8 = dword_140404A6C[14019 * masked_bits_8 + 225641203];
              if ( scaled_index_8 == 5 )
              {
                masked_bits_9 = *(int *)((char *)&g_151620CFC + record_word_offset);
                if ( (_DWORD)masked_bits_9 != -1 )
                {
                  masked_bits_10 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset);
                  scaled_index_9 = dword_140404A6C[14019 * masked_bits_8 + 225654127 + 3 * denomination];
                  if ( masked_bits_10 >= scaled_index_9 )
                  {
                    if ( (int)denomination <= 3 )
                    {
                      comparison_result_4 = (_DWORD)denomination == 1 ? 3 : ((_DWORD)denomination == 2) + 7;
                      unused_written_slot_3 = comparison_result_4;
                      if ( *(unsigned int *)((char *)&g_151624424 + record_word_offset) != comparison_result_4 )
                      {
                        ++dword_140404A6C[masked_bits_9 + 282485789];
                        masked_bits_10 -= scaled_index_9;
                        *(unsigned int *)((char *)&g_151624424 + record_word_offset) = comparison_result_4;
                        *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = masked_bits_10;
                        dword_140404A6C[7166 * masked_bits_9 + 280658446] = comparison_result_4;
                      }
                    }
                    if ( (unsigned int)(denomination - 4) <= 1 )
                    {
                      comparison_result_5 = (_DWORD)denomination == 4 ? 1 : 2;
                      unused_written_slot_3 = comparison_result_5;
                      if ( *(unsigned int *)((char *)&g_151624434 + record_word_offset) != comparison_result_5 )
                      {
                        ++dword_140404A6C[masked_bits_9 + 282485789];
                        *(unsigned int *)((char *)&g_151624434 + record_word_offset) = comparison_result_5;
                        *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = masked_bits_10 - scaled_index_9;
                        dword_140404A6C[7166 * masked_bits_9 + 280658449] = comparison_result_5;
                      }
                    }
                    sr_event_player_update(player);
                    if ( game_type == 3 )
                      sr_event_player_finance(player);
                  }
                }
                cached_selection_flag = 0;
                selection_flag = 0;
              }
              else if ( scaled_index_8 == 3 )
              {
                sub_1400EFD20(player, denomination);
                cached_selection_flag = 1;
                selection_flag = 1;
              }
              else
              {
                cached_selection_flag = selection_flag;
              }
              masked_bits_11 = *(int *)((char *)&g_151620DC8 + record_word_offset);
              if ( dword_140404A6C[14019 * masked_bits_11 + 225641203] == 8 )
              {
                if ( *(int *)((char *)&g_151620CC8 + record_word_offset) < 20 )
                {
                  masked_bits_12 = denomination + 4673LL * *(int *)((char *)&g_151620DC8 + record_word_offset);
                  scaled_index_10 = dword_140404A6C[3 * masked_bits_12 + 225654127];
                  scaled_index_11 = dword_140404A6C[3 * masked_bits_12 + 225654126];
                  if ( *(int *)((char *)&g_151620CAC + record_word_offset) >= scaled_index_10 )
                  {
                    human_2 = *(int *)((char *)&g_151620CFC + record_word_offset);
                    LODWORD(packed_word_bits_6) = 1065353216;
                    weighted_sum = *(float *)&dword_140404A6C[7166 * human_2 + 280651336];
                    LODWORD(float_buffer[0]) = dword_140404A6C[7166 * human_2 + 280651335];
                    weighted_sum_2 = *(float *)&dword_140404A6C[7166 * human_2 + 280651337];
                    float_buffer[1] = weighted_sum;
                    float_buffer[2] = weighted_sum_2;
                    cached_xmmword_140278d30_2 = xmmword_140278D30;
                    unused_written_slot_5 = xmmword_140278D30;
                    createitem_result_2 = sr_CreateItem(scaled_index_11, float_buffer, nullptr, (float *)&cached_xmmword_140278d30_2);
                    for ( i = 2; i < 7; ++i )
                    {
                      if ( (unsigned int)sr_item_transfer(createitem_result_2, -1, human_2, i) )
                        break;
                    }
                    *(unsigned int *)((char *)&g_151620CAC + record_word_offset) -= scaled_index_10;
                    ++*(unsigned int *)((char *)&g_151620CC8 + record_word_offset);
                    sr_event_player_update(player);
                    LODWORD(masked_bits_11) = *(unsigned int *)((char *)&g_151620DC8 + record_word_offset);
                    LODWORD(denomination) = packed_word_bits_5;
                  }
                }
                cached_selection_flag = 0;
                selection_flag = 0;
              }
              saved_masked_bits = (int)masked_bits_11;
              if ( dword_140404A6C[14019 * (int)masked_bits_11 + 225641203] == 9 )
              {
                masked_bits_13 = *(unsigned int *)((char *)&g_151620CC8 + record_word_offset);
                if ( masked_bits_13 < 10 )
                {
                  masked_bits_14 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset);
                  human_3 = *(int *)((char *)&g_151620CFC + record_word_offset);
                  scaled_index_12 = dword_140404A6C[14019 * saved_masked_bits + 225654127 + 3 * (int)denomination];
                  if ( masked_bits_14 >= scaled_index_12 )
                  {
                    *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = masked_bits_14 - scaled_index_12;
                    *(unsigned int *)((char *)&g_151620CC8 + record_word_offset) = masked_bits_13 + 1;
                    if ( (_DWORD)denomination == 1 && (_DWORD)human_3 != -1 )
                    {
                      LODWORD(packed_word_bits_6) = 1065353216;
                      weighted_sum_3 = *(float *)&dword_140404A6C[7166 * human_3 + 280651336];
                      LODWORD(float_buffer_2[0]) = dword_140404A6C[7166 * human_3 + 280651335];
                      weighted_sum_4 = *(float *)&dword_140404A6C[7166 * human_3 + 280651337];
                      float_buffer_2[1] = weighted_sum_3;
                      float_buffer_2[2] = weighted_sum_4;
                      cached_xmmword_140278d30_2 = xmmword_140278D30;
                      unused_written_slot_5 = xmmword_140278D30;
                      createitem_result_3 = sr_CreateItem(30, float_buffer_2, nullptr, (float *)&cached_xmmword_140278d30_2);
                      for ( j = 0; j < 7; ++j )
                      {
                        if ( (unsigned int)sr_item_transfer(createitem_result_3, -1, human_3, j) )
                          break;
                      }
                      record_word_offset = saved_record_word_offset;
                    }
                  }
                }
                cached_selection_flag = 0;
                selection_flag = 0;
              }
            }
            if ( (_DWORD)denomination == 16 )
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 9;
            masked_bits_6 = saved_masked_bits_2;
            if ( cached_selection_flag == 1 )
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 9;
            break;
          case 11:
            if ( (_DWORD)denomination == 1 )
            {
              masked_bits_15 = *(int *)((char *)&g_151620CFC + record_word_offset);
              if ( (_DWORD)masked_bits_15 != -1 && (int)dword_140404A6C[7166 * masked_bits_15 + 280658139] > 0 )
              {
                scaled_index_13 = (int)dword_140404A6C[7166 * masked_bits_15 + 280658140];
                if ( dword_140404A6C[1760 * scaled_index_13 + 278845898] == 27 )
                {
                  scaled_index_14 = (int)dword_140404A6C[1760 * scaled_index_13 + 278846053];
                  if ( (unsigned int)scaled_index_14 <= 0x1FF
                    && dword_140404A6C[5210 * scaled_index_14 + 129716709]
                    && (int)dword_140404A6C[5210 * scaled_index_14 + 129716712] > 0 )
                  {
                    *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = (int)(float)((float)((float)(int)dword_140404A6C[24944 * dword_140404A6C[5210 * scaled_index_14 + 129716710] + 346707730] * 0.75)
                                                                                            + (float)*(int *)((char *)&g_151620CAC + record_word_offset));
                  }
                  dword_140404A6C[1760 * scaled_index_13 + 278845900] = 0;
                  dword_140404A6C[5210 * scaled_index_14 + 129716716] = 0;
                }
              }
            }
            else if ( (_DWORD)denomination == 16 )
            {
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 9;
            }
            break;
        }
      }
      masked_bits_16 = *(int *)((char *)&g_151620CE4 + record_word_offset);
      if ( (_DWORD)masked_bits_16 == -1 || *(unsigned int *)((char *)&g_151620CFC + record_word_offset) == -1 )
      {
LABEL_345:
        player = player_5;
        LODWORD(human) = human_6;
        goto LABEL_165;
      }
      human = *(int *)((char *)&g_151620CFC + record_word_offset);
      human_6 = *(unsigned int *)((char *)&g_151620CFC + record_word_offset);
      switch ( masked_bits_6 )
      {
        case 3:
          switch ( (_DWORD)denomination )
          {
            case 1:
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 4;
              break;
            case 2:
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 5;
              break;
            case 3:
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 7;
              break;
            default:
              player = player_5;
              if ( (_DWORD)denomination != 4 )
              {
                comparison_result = (_DWORD)denomination == 5;
                byte_count = -1;
                float_word_2 = integer_sum_2;
                if ( comparison_result )
                  *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 8;
                goto LABEL_167;
              }
              *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 12;
              goto LABEL_165;
          }
          goto LABEL_164;
        case 4:
          integer_difference_2 = 11;
          if ( (_DWORD)denomination != 1 )
            integer_difference_2 = -1;
          switch ( (_DWORD)denomination )
          {
            case 2:
              integer_difference_2 = 7;
              goto LABEL_204;
            case 3:
              integer_difference_2 = 1;
              goto LABEL_204;
            case 4:
              integer_difference_2 = 3;
              goto LABEL_204;
            case 1:
              goto LABEL_204;
          }
          break;
        case 5:
          switch ( (_DWORD)denomination )
          {
            case 1:
              integer_difference_2 = 12;
LABEL_204:
              if ( *(int *)((char *)&g_151620CC8 + record_word_offset) < 10 )
              {
                masked_bits_19 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset);
                if ( masked_bits_19 >= 0 )
                {
                  scaled_index_15 = 1268LL * integer_difference_2;
                  table_value_3 = dword_140404A6C[scaled_index_15 + 278521286];
                  if ( masked_bits_19 >= table_value_3 || !table_value_3 )
                  {
                    unused_written_slot_4 = 1065353216;
                    float_word_4 = dword_140404A6C[7166 * human + 280651336];
                    float_word_12 = dword_140404A6C[7166 * human + 280651335];
                    float_word_5 = dword_140404A6C[7166 * human + 280651337];
                    unused_written_slot = *(float *)&float_word_4;
                    unused_written_slot_2 = *(float *)&float_word_5;
                    cached_xmmword_140278d30 = xmmword_140278D30;
                    pair64_result = xmmword_140278D30;
                    createitem_result_4 = sr_CreateItem(integer_difference_2, (float *)&float_word_12, nullptr, (float *)&cached_xmmword_140278d30);
                    for ( k = 2; k < 7; ++k )
                    {
                      if ( (unsigned int)sr_item_transfer(createitem_result_4, -1, human, k) )
                        break;
                    }
                    LODWORD(denomination) = packed_word_bits_5;
                    *(unsigned int *)((char *)&g_151620CAC + record_word_offset) -= dword_140404A6C[scaled_index_15 + 278521286];
                    if ( game_type == 3 )
                      sr_event_player_finance(player_5);
                    ++*(unsigned int *)((char *)&g_151620CC8 + record_word_offset);
                    masked_bits_6 = saved_masked_bits_2;
                  }
                }
              }
              goto LABEL_214;
            case 2:
              integer_difference_2 = 8;
              goto LABEL_204;
            case 3:
              integer_difference_2 = 2;
              goto LABEL_204;
            case 4:
              integer_difference_2 = 4;
              goto LABEL_204;
          }
          break;
        default:
          goto LABEL_216;
      }
LABEL_214:
      if ( (_DWORD)denomination == 16 )
        *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 3;
LABEL_216:
      switch ( masked_bits_6 )
      {
        case 6:
          integer_difference_3 = denomination - 1;
          scaled_index_16 = -1;
          if ( (int)denomination - 1 >= (int)g_19021F240
            || (scaled_index_17 = dword_140404A6C[4 * (int)denomination + 335047157], scaled_index_17 <= 0)
            || *(int *)((char *)&g_151620CAC + record_word_offset) < scaled_index_17 )
          {
            scaled_index_18 = cached_scaled_index;
          }
          else
          {
            scaled_index_18 = dword_140404A6C[4 * (int)denomination + 335047156];
            scaled_index_16 = dword_140404A6C[4 * (int)denomination + 335047155];
            cached_scaled_index = scaled_index_18;
          }
          scaled_index_19 = 7166LL * human_6;
          scaled_index_20 = 5873 * masked_bits_16;
          weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_19 + 280651335];
          if ( weighted_sum_5 >= *(float *)&dword_140404A6C[5873 * masked_bits_16 + 283831485]
            && weighted_sum_5 < *(float *)&dword_140404A6C[scaled_index_20 + 283831488] )
          {
            weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_19 + 280651337];
            if ( weighted_sum_6 >= *(float *)&dword_140404A6C[scaled_index_20 + 283831487]
              && weighted_sum_6 < *(float *)&dword_140404A6C[scaled_index_20 + 283831490]
              && scaled_index_16 != -1 )
            {
              call_result = sub_1400F00D0(scaled_index_16, masked_bits_16, scaled_index_18);
              if ( call_result != -1 )
              {
                unused_written_slot_4 = 1065353216;
                float_word_6 = dword_140404A6C[scaled_index_19 + 280651336];
                float_word_12 = dword_140404A6C[scaled_index_19 + 280651335];
                float_word_7 = dword_140404A6C[scaled_index_19 + 280651337];
                unused_written_slot = *(float *)&float_word_6;
                unused_written_slot_2 = *(float *)&float_word_7;
                *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 3;
                cached_xmmword_140278d30 = xmmword_140278D30;
                pair64_result = xmmword_140278D30;
                human_4 = human_6;
                slot = 2;
                createitem_result_5 = sr_CreateItem(27, (float *)&float_word_12, nullptr, (float *)&cached_xmmword_140278d30);
                dword_140404A6C[1760 * createitem_result_5 + 278846053] = call_result;
                do
                {
                  if ( (unsigned int)sr_item_transfer(createitem_result_5, -1, human_4, slot) )
                    break;
                  ++slot;
                }
                while ( slot < 7 );
                LODWORD(denomination) = packed_word_bits_5;
                record_word_offset = saved_record_word_offset;
                scaled_index_21 = 2LL * (int)packed_word_bits_5;
                *(unsigned int *)((char *)&g_151620CAC + saved_record_word_offset) -= dword_140404A6C[4 * (int)packed_word_bits_5
                                                                                              + 335047157];
                if ( game_type == 3 )
                  sr_event_player_finance(player_5);
                comparison_result = game_connected == 0;
                dword_140404A6C[2 * scaled_index_21 + 335047157] = 0;
                if ( !comparison_result )
                {
                  cached_game_tick_2 = game_tick;
                  shifted_bits_3 = (__int64)(int)world_event_count << 7;
                  scaled_index_22 = g_19021F240 + 16 * integer_difference_3;
                  integer_sum = world_event_count + 1;
                  *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 14;
                  *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick_2;
                  scaled_index_23 = dword_140404A6C[2 * scaled_index_21 + 335047155];
                  *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = scaled_index_22;
                  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = scaled_index_23;
                  *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_3) = dword_140404A6C[2 * scaled_index_21 + 335047156];
                  world_event_count = integer_sum;
                  *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_3) = 0;
                  HIWORD(world_event_count) = 0;
                }
              }
            }
          }
          LODWORD(human) = human_6;
LABEL_236:
          player = player_5;
          goto LABEL_237;
        case 7:
          integer_difference_4 = 14;
          byte_count = -1;
          if ( (_DWORD)denomination != 1 )
            integer_difference_4 = -1;
          if ( (_DWORD)denomination == 2 )
          {
            scaled_index_24 = 5873 * masked_bits_16;
            weighted_sum_7 = *(float *)&dword_140404A6C[7166 * human + 280651335];
            if ( weighted_sum_7 >= *(float *)&dword_140404A6C[5873 * masked_bits_16 + 283831485]
              && weighted_sum_7 < *(float *)&dword_140404A6C[scaled_index_24 + 283831488] )
            {
              weighted_sum_8 = *(float *)&dword_140404A6C[7166 * human + 280651337];
              if ( weighted_sum_8 >= *(float *)&dword_140404A6C[scaled_index_24 + 283831487]
                && weighted_sum_8 < *(float *)&dword_140404A6C[scaled_index_24 + 283831490] )
              {
                masked_bits_20 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset);
                if ( masked_bits_20 >= 1000 )
                {
                  player_2 = player_5;
                  *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = masked_bits_20 - 1000;
                  *(unsigned int *)((char *)&g_151624424 + record_word_offset) = 7;
                  sr_event_player_update(player_2);
                }
              }
            }
          }
          scaled_index_25 = 7166 * human;
          scaled_index_26 = 5873 * masked_bits_16;
          weighted_sum_9 = *(float *)&dword_140404A6C[7166 * human + 280651335];
          if ( weighted_sum_9 >= *(float *)&dword_140404A6C[5873 * masked_bits_16 + 283831485]
            && weighted_sum_9 < *(float *)&dword_140404A6C[scaled_index_26 + 283831488] )
          {
            weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_25 + 280651337];
            if ( weighted_sum_10 >= *(float *)&dword_140404A6C[scaled_index_26 + 283831487]
              && weighted_sum_10 < *(float *)&dword_140404A6C[scaled_index_26 + 283831490]
              && (_DWORD)denomination == 1 )
            {
              if ( *(int *)((char *)&g_151620CC8 + record_word_offset) >= 10
                || (masked_bits_21 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset), masked_bits_21 < 0)
                || masked_bits_21 < (int)g_182A8F6E4 )
              {
                player = player_5;
                float_word_2 = integer_sum_2;
              }
              else
              {
                LODWORD(packed_word_bits) = dword_140404A6C[scaled_index_25 + 280651458];
                LODWORD(packed_word_bits_2) = dword_140404A6C[scaled_index_25 + 280651459];
                LODWORD(packed_word_bits_3) = dword_140404A6C[scaled_index_25 + 280651456];
                weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_25 + 280651460];
                LODWORD(packed_word_bits_4) = dword_140404A6C[scaled_index_25 + 280651457];
                weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_25 + 280651455] * 0.75;
                combined_products = *(float *)&dword_140404A6C[scaled_index_25 + 280651440] - (float)(packed_word_bits * 0.75);
                HIDWORD(cached_xmmword_140278d30) = dword_140404A6C[scaled_index_25 + 280651455];
                *(_QWORD *)&pair64_result = __PAIR64__(LODWORD(packed_word_bits_4), LODWORD(packed_word_bits_3));
                *((_QWORD *)&pair64_result + 1) = __PAIR64__(LODWORD(packed_word_bits_2), LODWORD(packed_word_bits));
                unused_written_slot_4 = LODWORD(weighted_sum_11);
                *(float *)&float_word_12 = combined_products + weighted_sum_12;
                unused_written_slot = (float)(*(float *)&dword_140404A6C[scaled_index_25 + 280651441] - (float)(packed_word_bits_2 * 0.75))
                     + (float)(packed_word_bits_3 * 0.75);
                weighted_sum_13 = *(float *)&dword_140404A6C[scaled_index_25 + 280651442];
                LODWORD(cached_xmmword_140278d30) = dword_140404A6C[scaled_index_25 + 280651452];
                DWORD2(cached_xmmword_140278d30) = dword_140404A6C[scaled_index_25 + 280651454];
                DWORD1(cached_xmmword_140278d30) = dword_140404A6C[scaled_index_25 + 280651453];
                unused_written_slot_2 = (float)(weighted_sum_13 - (float)(weighted_sum_11 * 0.75)) + (float)(packed_word_bits_4 * 0.75);
                createitem_result_6 = sr_CreateItem(integer_difference_4, (float *)&float_word_12, nullptr, (float *)&cached_xmmword_140278d30);
                for ( m = 2; m < 7; ++m )
                {
                  if ( (unsigned int)sr_item_transfer(createitem_result_6, -1, human, m) )
                    break;
                }
                *(unsigned int *)((char *)&g_151620CAC + record_word_offset) -= g_182A8F6E4;
                player = player_5;
                if ( game_type == 3 )
                  sr_event_player_finance(player_5);
                ++*(unsigned int *)((char *)&g_151620CC8 + record_word_offset);
                float_word_2 = integer_sum_2;
              }
              goto LABEL_167;
            }
          }
          player = player_5;
          goto LABEL_238;
        case 8:
          if ( (_DWORD)denomination == 1 )
          {
            selection_code = 1;
            goto LABEL_268;
          }
          if ( (_DWORD)denomination == 2 )
          {
            player = player_5;
            sub_14011AF80(player_5, 1);
          }
          else
          {
            switch ( (_DWORD)denomination )
            {
              case 3:
                selection_code = 10;
                break;
              case 4:
                player = player_5;
                sub_14011AF80(player_5, 10);
                goto LABEL_269;
              case 5:
                selection_code = 100;
                break;
              case 6:
                player = player_5;
                sub_14011AF80(player_5, 100);
                goto LABEL_269;
              case 7:
                selection_code = 5000;
                break;
              default:
                player = player_5;
                if ( (_DWORD)denomination != 8 )
                {
                  sr_event_player_finance(player_5);
LABEL_237:
                  byte_count = -1;
                  goto LABEL_238;
                }
                sub_14011AF80(player_5, 5000);
                goto LABEL_269;
            }
LABEL_268:
            player = player_5;
            sub_1401189F0(player_5, selection_code);
          }
LABEL_269:
          sr_event_player_finance(player);
          goto LABEL_165;
        case 13:
          if ( (unsigned int)(denomination - 1) > 5 )
            goto LABEL_295;
          masked_bits_22 = *(unsigned int *)((char *)&g_151620CAC + record_word_offset);
          table_value_4 = dword_1402B2960[(int)denomination];
          if ( masked_bits_22 < table_value_4 )
            goto LABEL_295;
          if ( (int)denomination >= 3 || *(int *)((char *)&g_151620CD0 + record_word_offset) < 40 )
          {
            scaled_index_27 = 7166 * human;
            if ( (int)dword_140404A6C[7166 * human + 280658139] <= 0 )
            {
              float_word_8 = dword_140404A6C[scaled_index_27 + 280651336];
              float_word_12 = dword_140404A6C[scaled_index_27 + 280651335];
              float_word_9 = dword_140404A6C[scaled_index_27 + 280651337];
              unused_written_slot = *(float *)&float_word_8;
              unused_written_slot_2 = *(float *)&float_word_9;
              unused_written_slot_4 = 1065353216;
              cached_xmmword_140278d30 = xmmword_140278D30;
              pair64_result = xmmword_140278D30;
              createitem_result_7 = sr_CreateItem(18, (float *)&float_word_12, nullptr, (float *)&cached_xmmword_140278d30);
              scaled_index_29 = 1760LL * createitem_result_7;
              dword_140404A6C[scaled_index_29 + 278846062] = 0;
              dword_140404A6C[scaled_index_29 + 278846063] = denomination;
              sr_item_transfer(createitem_result_7, -1, human, 0);
              *(unsigned int *)((char *)&g_151620CAC + record_word_offset) -= dword_1402B2960[(int)denomination];
              if ( (int)denomination < 3 )
              {
                ++*(unsigned int *)((char *)&g_151620CD0 + record_word_offset);
                player = player_5;
                goto LABEL_165;
              }
            }
            else
            {
              item_3 = (int)dword_140404A6C[scaled_index_27 + 280658140];
              if ( dword_140404A6C[1760 * item_3 + 278845898] == 18 )
              {
                if ( (unsigned int)sr_item_insert_cash_bill(item_3, 0, denomination) )
                {
                  *(unsigned int *)((char *)&g_151620CAC + record_word_offset) = masked_bits_22 - table_value_4;
                  if ( (int)denomination < 3 )
                    ++*(unsigned int *)((char *)&g_151620CD0 + record_word_offset);
                }
              }
            }
LABEL_295:
            if ( (_DWORD)denomination != 7 )
              goto LABEL_236;
            if ( (int)dword_140404A6C[7166 * human + 280658139] > 0 )
            {
              item_4 = (int)dword_140404A6C[7166 * human + 280658140];
              scaled_index_28 = 1760 * item_4;
              if ( dword_140404A6C[1760 * item_4 + 278845898] == 18 )
              {
                player = player_5;
                *(unsigned int *)((char *)&g_151620CAC + record_word_offset) += sr_item_cash_value(item_4);
                dword_140404A6C[scaled_index_28 + 278845900] = 0;
                goto LABEL_165;
              }
            }
          }
          break;
        case 12:
          masked_bits_23 = *(int *)((char *)&g_151620CE4 + record_word_offset);
          if ( (unsigned int)masked_bits_23 > 5 )
            goto LABEL_345;
          if ( (unsigned int)(denomination - 1) > 5 )
            goto LABEL_314;
          scaled_index_30 = dword_140404A6C[6 * masked_bits_23 + 335047066];
          table_value_5 = dword_1402B2960[(int)denomination];
          if ( scaled_index_30 < table_value_5 )
            goto LABEL_314;
          if ( (int)denomination < 3 && *(int *)((char *)&g_151620CD0 + record_word_offset) >= 40 )
            goto LABEL_345;
          saved_human = human_6;
          scaled_index_31 = 7166LL * human_6;
          if ( (int)dword_140404A6C[scaled_index_31 + 280658139] <= 0 )
          {
            float_word_10 = dword_140404A6C[scaled_index_31 + 280651336];
            float_word_12 = dword_140404A6C[scaled_index_31 + 280651335];
            float_word_11 = dword_140404A6C[scaled_index_31 + 280651337];
            unused_written_slot = *(float *)&float_word_10;
            unused_written_slot_2 = *(float *)&float_word_11;
            unused_written_slot_4 = 1065353216;
            cached_xmmword_140278d30 = xmmword_140278D30;
            pair64_result = xmmword_140278D30;
            createitem_result_8 = sr_CreateItem(18, (float *)&float_word_12, nullptr, (float *)&cached_xmmword_140278d30);
            human_5 = human_6;
            player_3 = 0;
            byte_count = -1;
            scaled_index_32 = 1760LL * createitem_result_8;
            dword_140404A6C[scaled_index_32 + 278846062] = 0;
            dword_140404A6C[scaled_index_32 + 278846063] = denomination;
            sr_item_transfer(createitem_result_8, -1, human_5, 0);
            dword_140404A6C[6 * masked_bits_23 + 335047066] -= dword_1402B2960[(int)denomination];
            if ( (int)denomination < 3 )
            {
              ++*(unsigned int *)((char *)&g_151620CD0 + record_word_offset);
              player = player_5;
              LODWORD(human) = human_6;
              float_word_2 = integer_sum_2;
              goto LABEL_167;
            }
            saved_human = human_6;
            goto LABEL_317;
          }
          item_5 = (int)dword_140404A6C[scaled_index_31 + 280658140];
          if ( dword_140404A6C[1760 * item_5 + 278845898] == 18 )
          {
            if ( (unsigned int)sr_item_insert_cash_bill(item_5, 0, denomination) )
            {
              saved_human = human_6;
              dword_140404A6C[6 * masked_bits_23 + 335047066] = scaled_index_30 - table_value_5;
              byte_count = -1;
              if ( (int)denomination < 3 )
                ++*(unsigned int *)((char *)&g_151620CD0 + record_word_offset);
LABEL_316:
              player_3 = 0;
LABEL_317:
              if ( (_DWORD)denomination != 7 )
              {
                player = player_5;
                LODWORD(human) = human_6;
LABEL_238:
                comparison_result = (_DWORD)denomination == 16;
                float_word_2 = integer_sum_2;
                if ( comparison_result )
                  *(unsigned int *)((char *)&g_151620DC4 + record_word_offset) = 3;
                goto LABEL_167;
              }
              scaled_index_33 = 7166LL * saved_human;
              if ( (int)dword_140404A6C[scaled_index_33 + 280658139] <= 0 )
                goto LABEL_343;
              item_6 = (int)dword_140404A6C[scaled_index_33 + 280658140];
              packed_word_bits_5 = 7040 * item_6;
              if ( dword_140404A6C[1760 * item_6 + 278845898] != 18 )
              {
                for ( n = 0; n < 16; ++n )
                {
                  masked_bits_24 = *(int *)((char *)&g_151620CE4 + record_word_offset);
                  scaled_index_36 = player_3 + 23492 * masked_bits_24;
                  if ( *(unsigned int *)((char *)&g_183EBFEFC + scaled_index_36)
                    && (_DWORD)item_6 == *(unsigned int *)((char *)&g_183EBFF0C + scaled_index_36) )
                  {
                    sub_1400F4D00(masked_bits_24, n);
                  }
                  player_3 += 1116;
                }
LABEL_343:
                player = player_5;
                LODWORD(human) = human_6;
                float_word_2 = integer_sum_2;
                goto LABEL_167;
              }
              item_cash_value_result = sr_item_cash_value(item_6);
              record_byte_offset = dword_140404A6C[6 * masked_bits_23 + 335047061];
              if ( record_byte_offset > 0 )
                *(float *)&dword_140404A6C[6 * masked_bits_23 + 335047062] = (float)((float)item_cash_value_result / (float)record_byte_offset)
                                                                 + *(float *)&dword_140404A6C[6 * masked_bits_23 + 335047062];
              scaled_index_34 = dword_140404A6C[5873 * masked_bits_23 + 283831506];
              if ( scaled_index_34 > 0 )
                item_cash_value_result /= scaled_index_34;
              state_address = &g_151620CE4;
              do
              {
                if ( *(state_address - 33) && *state_address == (_DWORD)masked_bits_23 )
                {
                  *(state_address - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)state_address[2] / (float)record_byte_offset), 0.0), 1.0)
                                             * (float)item_cash_value_result);
                  sr_event_player_finance(player_3);
                }
                LODWORD(player_3) = player_3 + 1;
                state_address += 3597;
              }
              while ( (int)player_3 < 256 );
              weighted_sum_14 = *(float *)&dword_140404A6C[6 * masked_bits_23 + 335047062];
              if ( weighted_sum_14 > 500.0 )
              {
                state_address_2 = &g_151620CEC;
                player_4 = 0;
                *(float *)&dword_140404A6C[6 * masked_bits_23 + 335047062] = weighted_sum_14 * 0.2;
                do
                {
                  if ( *(state_address_2 - 35) && *(state_address_2 - 2) == (_DWORD)masked_bits_23 )
                  {
                    record_byte_offset += 4 * *state_address_2;
                    scaled_index_35 = 5 * *state_address_2;
                    dword_140404A6C[6 * masked_bits_23 + 335047061] = record_byte_offset;
                    *state_address_2 = scaled_index_35;
                    sr_event_player_finance(player_4);
                  }
                  ++player_4;
                  state_address_2 += 3597;
                }
                while ( player_4 < 256 );
                record_word_offset = saved_record_word_offset;
              }
              sr_event_stock_prices();
              LODWORD(human) = human_6;
              dword_140404A6C[packed_word_bits_5 / 4 + 278845900] = 0;
              break;
            }
LABEL_314:
            saved_human = human_6;
          }
          byte_count = -1;
          goto LABEL_316;
      }
LABEL_164:
      player = player_5;
LABEL_165:
      float_word_2 = integer_sum_2;
LABEL_166:
      byte_count = -1;
LABEL_167:
      if ( *(unsigned int *)((char *)&g_151620C94 + record_word_offset) )
      {
        if ( *(unsigned int *)((char *)&g_151620E28 + float_word_2) == 4 )
        {
          masked_bits_17 = *(int *)((char *)&g_151620E2C + float_word_2);
          if ( (int)masked_bits_17 >= 0 && (int)masked_bits_17 < (int)g_160361344 )
          {
            masked_bits_18 = *(unsigned int *)((char *)&g_151620E30 + float_word_2);
            if ( masked_bits_18 >= 0 )
            {
              masked_bits_27 = *(unsigned int *)((char *)&g_151620E30 + float_word_2);
              dword_140404A6C[28 * masked_bits_17 + 134050385] = masked_bits_18;
              crt_sprintf(Src, "%s %d banned %d", (     char *)&dword_140404A6C[28 * masked_bits_17 + 134050365], masked_bits_17, masked_bits_27);
              if ( game_connected )
              {
                do
                  ++byte_count;
                while ( SR_VEC_LANES(128, Src[0], i8)[byte_count] );
                cached_world_event_count = world_event_count;
                if ( (int)byte_count > 63 )
                  LODWORD(byte_count) = 63;
                shifted_bits_2 = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = game_tick;
                crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_2), Src, (int)byte_count);
                world_event_count = cached_world_event_count + 1;
                float_word_2 = integer_sum_2;
                *((_BYTE *)&g_1873DE4A0 + shifted_bits_2 + (int)byte_count) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = byte_count;
                *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_2) = 4;
                byte_count = -1;
                *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_2) = -1;
                *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_2) = 0;
                HIWORD(world_event_count) = 0;
              }
            }
          }
        }
        if ( *(unsigned int *)((char *)&g_151620E28 + float_word_2) == 5 )
        {
          masked_bits_25 = *(int *)((char *)&g_151620E2C + float_word_2);
          if ( (int)masked_bits_25 >= 0 && (int)masked_bits_25 < (int)g_160361344 )
          {
            masked_bits_26 = *(unsigned int *)((char *)&g_151620E30 + float_word_2);
            if ( masked_bits_26 >= 0 )
            {
              dword_140404A6C[28 * masked_bits_25 + 134050376] = masked_bits_26;
              state_address_3 = &g_151620C9C;
              lookup_index = scaled_index_37;
              do
              {
                if ( *(state_address_3 - 15) && *state_address_3 == (_DWORD)masked_bits_25 )
                  state_address_3[8] = *(unsigned int *)((char *)&g_151620E30 + lookup_index + record_word_offset);
                state_address_3 += 3597;
              }
              while ( (__int64)state_address_3 < (__int64)&g_1519A409C );
              crt_sprintf(
                Src,
                "%s %d rating %d",
                (     char *)&dword_140404A6C[28 * *(unsigned int *)((char *)&g_151620E2C + lookup_index + record_word_offset)
                                             + 134050365],
                *(unsigned int *)((char *)&g_151620E2C + lookup_index + record_word_offset),
                *(unsigned int *)((char *)&g_151620E30 + lookup_index + record_word_offset));
              if ( game_connected )
              {
                do
                  ++byte_count;
                while ( SR_VEC_LANES(128, Src[0], i8)[byte_count] );
                cached_world_event_count_2 = world_event_count;
                if ( (int)byte_count > 63 )
                  LODWORD(byte_count) = 63;
                shifted_bits_4 = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = game_tick;
                crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_4), Src, (int)byte_count);
                world_event_count = cached_world_event_count_2 + 1;
                *((_BYTE *)&g_1873DE4A0 + shifted_bits_4 + (int)byte_count) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = byte_count;
                *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 4;
                *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_4) = -1;
                HIWORD(world_event_count) = 0;
                *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_4) = 0;
              }
            }
          }
        }
      }
      masked_bits = ((unsigned __int8)*(unsigned int *)((char *)&g_151620E18 + record_word_offset) + 1) & 0x3F;
      *(unsigned int *)((char *)&g_151620E18 + record_word_offset) = masked_bits;
      if ( masked_bits == *(unsigned int *)((char *)&g_151620E14 + record_word_offset) )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    masked_bits_2 = *(unsigned int *)((char *)&g_151620E2C + scaled_index);
    if ( (unsigned int)(masked_bits_2 - 3) <= 4 )
    {
      dword_140404A6C[7166 * (int)human + 280658342 + 12 * dword_140404A6C[7166 * (int)human + 280658341]] = 2;
      dword_140404A6C[7166 * (int)human + 280658352 + 12 * dword_140404A6C[7166 * (int)human + 280658341]] = *(unsigned int *)((char *)&g_151620E30 + scaled_index);
      dword_140404A6C[7166 * (int)human + 280658353 + 12 * dword_140404A6C[7166 * (int)human + 280658341]] = masked_bits_2 - 3;
      dword_140404A6C[7166 * (int)human + 280658343 + 12 * dword_140404A6C[7166 * (int)human + 280658341]] = 0;
      dword_140404A6C[7166 * (int)human + 280658341] = ((unsigned __int8)dword_140404A6C[7166 * (int)human + 280658341] + 1)
                                                  & 7;
    }
    switch ( masked_bits_2 )
    {
      case 1:
        float_word = 7166LL * (int)human;
        dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658342 + float_word] = 1;
        break;
      case 2:
        float_word = 7166LL * (int)human;
        *(float *)&masked_bits_3 = *(float *)&dword_140404A6C[float_word + 280651384] * 8.0;
        dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658342 + float_word] = 0;
        dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658352 + float_word] = *(unsigned int *)((char *)&g_151620E30 + scaled_index);
        dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658353 + float_word] = masked_bits_3;
        goto LABEL_9;
      case 8:
        float_word = 7166LL * (int)human;
        dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658342 + float_word] = 3;
        break;
      default:
        goto LABEL_14;
    }
    dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658352 + float_word] = *(unsigned int *)((char *)&g_151620E30
                                                                                                  + scaled_index);
    dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658353 + float_word] = 0;
LABEL_9:
    dword_140404A6C[12 * (int)dword_140404A6C[float_word + 280658341] + 280658343 + float_word] = 0;
    dword_140404A6C[float_word + 280658341] = ((unsigned __int8)dword_140404A6C[float_word + 280658341] + 1) & 7;
    goto LABEL_14;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef masked_bits_27
#undef player_5
#undef human_6
#undef integer_sum_2
#undef selection_flag
#undef float_word_12
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef saved_masked_bits_2
#undef cached_scaled_index
#undef packed_word_bits_5
#undef cached_xmmword_140278d30
#undef pair64_result
#undef unused_written_slot_4
#undef saved_record_word_offset
#undef float_buffer
#undef float_buffer_2
#undef scaled_index_37
#undef cached_xmmword_140278d30_2
#undef unused_written_slot_5
#undef packed_word_bits_6
#undef Src
#undef unused_frame_slot_2288

// 1400F23AD: conditional instruction was optimized away because ebx.4==5

//----- (00000001400F5B60) ----------------------------------------------------
__int64            sub_1400F5B60(__int64 a1)
{
  __int64 result;
  int selection_flag;
  unsigned int selection_flag_2;
  unsigned int *state_address;
  int iteration_count;
  __int64 remaining_count;
  int integer_difference;
  unsigned int *state_address_2;
  unsigned int state_word;
  __int64 integer_difference_2;
  _BOOL8 comparison_result;
  __int64 table_value;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 table_value_5;
  __int64 table_value_6;
  __int64 table_value_7;
  __int64 table_value_8;
  __int64 table_value_9;
  __int64 table_value_10;
  __int64 table_value_11;
  __int64 table_value_12;
  __int64 table_value_13;
  __int64 table_value_14;
  __int64 table_value_15;

  result = game_state;
  selection_flag = 0;
  if ( game_state != 1 )
  {
    if ( game_state != 2 )
      return result;
    state_word = g_183EBFCD4;
    goto LABEL_27;
  }
  selection_flag_2 = 1;
  state_address = &g_151623978;
  iteration_count = 0;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 2886) && !*state_address )
    {
      if ( *(state_address - 2853) <= 2 )
        ++iteration_count;
      if ( !*(state_address - 2868) )
        selection_flag_2 = 0;
    }
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  result = 0;
  integer_difference = --g_183EBFCD4;
  if ( iteration_count )
    result = selection_flag_2;
  if ( !(_DWORD)result )
  {
    if ( integer_difference < 1200 )
      g_183EBFCD4 = 1200;
    return result;
  }
  if ( integer_difference > 60 )
  {
    g_183EBFCD4 = 60;
    return result;
  }
  if ( integer_difference <= 0 )
  {
    state_address_2 = &g_151620CE4;
    do
    {
      if ( *(state_address_2 - 33) )
        *state_address_2 = 0;
      if ( state_address_2[3564] )
        state_address_2[3597] = 0;
      state_address_2 += 7194;
    }
    while ( (__int64)state_address_2 < (__int64)&g_1519A40E4 );
    sub_14005D920();
    state_word = 108000;
    game_state = 2;
LABEL_27:
    integer_difference_2 = state_word - 1;
    comparison_result = 1;
    g_183EBFCD4 = integer_difference_2;
    if ( g_183F7C30C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C30C;
      table_value = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value != -1 )
      {
        a1 = 7166 * table_value;
        comparison_result = (int)dword_140404A6C[7166 * table_value + 280651318] <= 0;
      }
    }
    if ( g_183F7C310 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C310;
      table_value_2 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_2 != -1 )
      {
        a1 = 7166 * table_value_2;
        if ( (int)dword_140404A6C[7166 * table_value_2 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C314 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C314;
      table_value_3 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_3 != -1 )
      {
        a1 = 7166 * table_value_3;
        if ( (int)dword_140404A6C[7166 * table_value_3 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C318 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C318;
      table_value_4 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_4 != -1 )
      {
        a1 = 7166 * table_value_4;
        if ( (int)dword_140404A6C[7166 * table_value_4 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C31C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C31C;
      table_value_5 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_5 != -1 )
      {
        a1 = 7166 * table_value_5;
        if ( (int)dword_140404A6C[7166 * table_value_5 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C320 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C320;
      table_value_6 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_6 != -1 )
      {
        a1 = 7166 * table_value_6;
        if ( (int)dword_140404A6C[7166 * table_value_6 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C324 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C324;
      table_value_7 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_7 != -1 )
      {
        a1 = 7166 * table_value_7;
        if ( (int)dword_140404A6C[7166 * table_value_7 + 280651318] > 0 )
          comparison_result = 0;
      }
    }
    if ( g_183F7C328 == -1
      || (a1 = 3597LL * (int)g_183F7C328, table_value_8 = (int)dword_140404A6C[a1 + 71856292], (_DWORD)table_value_8 == -1)
      || (a1 = 7166 * table_value_8, (int)dword_140404A6C[7166 * table_value_8 + 280651318] <= 0) )
    {
      if ( comparison_result && (int)integer_difference_2 > 300 )
      {
        integer_difference_2 = 300;
        g_183F7C34C = 1;
        g_183EBFCD4 = 300;
      }
    }
    if ( g_183F7C32C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C32C;
      table_value_9 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_9 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_9;
        if ( (int)dword_140404A6C[7166 * table_value_9 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C330 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C330;
      table_value_10 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_10 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_10;
        if ( (int)dword_140404A6C[7166 * table_value_10 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C334 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C334;
      table_value_11 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_11 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_11;
        if ( (int)dword_140404A6C[7166 * table_value_11 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C338 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C338;
      table_value_12 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_12 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_12;
        if ( (int)dword_140404A6C[7166 * table_value_12 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C33C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C33C;
      table_value_13 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_13 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_13;
        if ( (int)dword_140404A6C[7166 * table_value_13 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C340 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C340;
      table_value_14 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_14 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_14;
        if ( (int)dword_140404A6C[7166 * table_value_14 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    if ( g_183F7C344 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C344;
      table_value_15 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)table_value_15 == -1 )
      {
        selection_flag = 1;
      }
      else
      {
        a1 = 7166 * table_value_15;
        if ( (int)dword_140404A6C[7166 * table_value_15 + 280651318] <= 0 )
          selection_flag = 1;
      }
    }
    result = (int)g_183F7C348;
    if ( (g_183F7C348 != -1
       && ((a1 = 3597LL * (int)g_183F7C348,
            result = (int)dword_140404A6C[a1 + 71856292],
            (_DWORD)result == -1)
        || (a1 = 7166 * result, (int)dword_140404A6C[7166 * result + 280651318] <= 0))
       || selection_flag)
      && (int)integer_difference_2 > 300 )
    {
      g_183EBFCD4 = 300;
      g_183F7C34C = 2;
    }
    else if ( (int)integer_difference_2 <= 0 )
    {
      return sr_ResetGame(a1 * 4, comparison_result, integer_difference_2);
    }
  }
  return result;
}

//----- (00000001400F80A0) ----------------------------------------------------
__int64            sub_1400F80A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *state_address;
  int cached_integer_sum;
  int selection_flag;
  __int64 remaining_count;
  int integer_sum;
  int cached_selection_flag;
  int integer_difference;
  unsigned int *state_address_2;
  int remaining_count_2;
  unsigned int *state_address_3;
  int *buffer_cursor;
  int j;
  int rand_result;
  int iteration_count;
  int integer_sum_2;
  int rand_result_2;
  unsigned int *buffer_cursor_2;
  __int64 remaining_count_3;
  unsigned int *buffer_cursor_3;
  int rand_result_3;
  unsigned int *buffer_cursor_4;
  __int64 remaining_count_4;
  unsigned int *buffer_cursor_5;
  int rand_result_4;
  unsigned int *buffer_cursor_6;
  __int64 remaining_count_5;
  unsigned int *buffer_cursor_7;
  int player;
  int saved_shifted_bits;
  __int64 selection_code;
  bool comparison_result;
  int rand_result_5;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  unsigned int integer_difference_2;
  __m128i converted_vector;
  signed int integer_difference_3;
  signed int masked_bits;
  __int64 state_word;
  unsigned int *state_address_4;
  __int64 remaining_count_6;
  __int64 scaled_index_2;
  unsigned int cached_game_tick;
  int selection_flag_2;
  unsigned int cached_game_connected;
  __int64 remaining_count_7;
  unsigned int *state_address_5;
  int saved_shifted_bits_2;
  __int64 shifted_bits;
  int scaled_index_3;
  __int64 shifted_bits_2;
  __int64 shifted_bits_3;
  int element_index;
  __int64 running_total;
  unsigned int rand_result_6;
  int selection_code_2;
  int rand_result_7;
  int table_value;
  int element_index_2;
  __int64 element_index_3;
  unsigned int *state_address_6;
  unsigned int createvehicle_result;
  signed int call_result;
  float state_address_7;
  float state_address_8;
  float state_address_9;
  double angle;
  __int64 scaled_index_4;
  __int64 remaining_count_8;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float state_address_13;
  float state_address_14;
  float state_address_15;
  unsigned int rand_result_8;
  __int64 remaining_count_9;
  signed int createitem_result;
  float state_address_16;
  float state_address_17;
  float state_address_18;
  __int64 scaled_index_5;
  unsigned int cached_game_connected_2;
  unsigned int cached_game_tick_2;
  __int64 shifted_bits_4;
  __int64 shifted_bits_5;
  __int64 shifted_bits_6;
  int iteration_count_2;
  unsigned int *state_address_19;
  __int64 scaled_index_6;
  unsigned int *state_address_20;
  signed int state_word_2;
  signed int cached_game_state_time;
  int iteration_count_3;
  unsigned int *state_address_21;
  int state_word_3;
  int selection_code_3;
  unsigned int *state_address_22;
  __int64 remaining_count_10;
  __int64 scaled_index_7;
  unsigned int scaled_index_8;
  unsigned int cached_game_connected_3;
  int iteration_count_4;
  unsigned int *state_address_23;
  unsigned int scaled_index_9;
  unsigned int loaded_word;
  unsigned int table_value_2;
  unsigned int cached_game_tick_3;
  __int64 shifted_bits_7;
  unsigned int integer_sum_3;
  __int64 scaled_index_10;
  unsigned int state_word_4;
  unsigned int cached_game_tick_4;
  unsigned int table_value_3;
  unsigned int loaded_word_2;
  __int64 shifted_bits_8;
  unsigned int integer_sum_4;
  unsigned int scaled_index_11;
  int rand_result_9;
  __int64 scaled_index_12;
  float weighted_sum_6;
  float weighted_sum_7;
  int rand_result_10;
  int rand_result_11;
  int selection_code_4;
  int iteration_count_5;
  float *state_address_24;
  float component_sum;
  int integer_sum_5;
  int rand_result_12;
  int option_flags;
  char integer_sum_6;
  float *state_address_25;
  int i;
  double angle_2;
  float product_difference;
  float product_difference_2;
  float scaled_value;
  __int64 remaining_count_11;
  float weighted_sum_8;
  float scaled_value_2;
  float state_address_26;
  float weighted_sum_9;
  float state_address_27;
  float state_address_28;
  float component_delta;
  float saved_state_address;
  float saved_state_address_2;
  unsigned int *state_address_29;
  __int64 remaining_count_12;
  int rand_result_13;
  int selection_code_5;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float state_address_30;
  float state_address_31;
  float state_address_32;
  float state_address_33;
  float state_address_34;
  float state_address_35;
  float state_address_36;
  float state_address_37;
  float state_address_38;
  unsigned int rand_result_14;
  __int64 remaining_count_13;
  int selection_flag_3;
  int iteration_count_6;
  unsigned int *state_address_39;
  __int64 scaled_index_13;
  int iteration_count_7;
  unsigned int *state_address_40;
  __int64 scaled_index_14;
  unsigned int cached_game_tick_5;
  int iteration_count_8;
  signed int iteration_count_9;
  unsigned int *state_address_41;
  unsigned int cached_world_event_count;
  __int64 shifted_bits_9;
  int shifted_bits_10;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F80A0[10608];
#define saved_rand_result (*(unsigned int (*))(void *)(sr_frame_1400F80A0 + 8)) /* [rsp+0h] */
#define converted_vector_2 (*(float (*))(void *)(sr_frame_1400F80A0 + 24)) /* [rsp+10h] */
#define source_component_y (*(float (*))(void *)(sr_frame_1400F80A0 + 28)) /* [rsp+14h] */
#define state_address_42 (*(float (*))(void *)(sr_frame_1400F80A0 + 32)) /* [rsp+18h] */
#define saved_option_flags (*(int (*))(void *)(sr_frame_1400F80A0 + 40)) /* [rsp+20h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_1400F80A0 + 48)) /* [rsp+28h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1400F80A0 + 64)) /* [rsp+38h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400F80A0 + 80)) /* [rsp+48h] */
#define callee_output_word (*(_BYTE (*)[5136])(void *)(sr_frame_1400F80A0 + 88)) /* [rsp+50h] */
#define scratch_buffer (*(_DWORD (*)[1024])(void *)(sr_frame_1400F80A0 + 6504)) /* [rsp+1960h] */
#define unused_frame_slot_10600 (*(__int64 (*))(void *)(sr_frame_1400F80A0 + 10600)) /* [rsp+2960h] */

  if ( game_state != 1 )
  {
    if ( game_state != 2 )
    {
      if ( game_state == 3 && (int)--g_183EBFCD4 <= 0 )
        sr_ResetGame(a1, a2, a3);
      return 0; /* no result: rax is residue at the exit */
    }
    state_address_20 = &g_151623978;
    state_word_2 = g_183EBFCD4 - 1;
    cached_game_state_time = game_state_time + 1;
    --g_183EBFCD4;
    iteration_count_3 = 0;
    ++game_state_time;
    state_address_21 = &g_151623978;
    do
    {
      if ( *(state_address_21 - 2886) && !*state_address_21 && *(state_address_21 - 2868) )
        ++iteration_count_3;
      state_address_21 += 3597;
    }
    while ( (__int64)state_address_21 < (__int64)&g_1519A6D78 );
    state_word_3 = g_183F7A320;
    selection_code_3 = 1800;
    if ( cached_game_state_time < 18000 )
      selection_code_3 = 2700;
    if ( cached_game_state_time >= 28800 )
      selection_code_3 = 900;
    if ( cached_game_state_time >= 39600 )
      selection_code_3 = 300;
    if ( (int)g_183F7A320 > 0 )
    {
      state_address_22 = &g_183F7A324;
      remaining_count_10 = g_183F7A320;
      do
      {
        scaled_index_7 = (int)dword_140404A6C[3597 * *state_address_22 + 71856292];
        if ( (_DWORD)scaled_index_7 != -1 )
        {
          scaled_index_8 = dword_140404A6C[7166 * scaled_index_7 + 280651441];
          g_183F7A5A0 = dword_140404A6C[7166 * scaled_index_7 + 280651440];
          g_183F7A5A8 = dword_140404A6C[7166 * scaled_index_7 + 280651442];
          g_183F7A5A4 = scaled_index_8;
        }
        state_address_22 += 9;
        --remaining_count_10;
      }
      while ( remaining_count_10 );
    }
    cached_game_connected_3 = game_connected;
    if ( cached_game_state_time >= 7200 && !(state_word_2 % selection_code_3) )
    {
      iteration_count_4 = 0;
      if ( (int)g_183F7A320 > 0 )
      {
        state_address_23 = &g_183F7A340;
        do
        {
          scaled_index_9 = *(state_address_23 - 1);
          *(state_address_23 - 4) = scaled_index_9;
          loaded_word = *state_address_23;
          *(state_address_23 - 3) = *state_address_23;
          table_value_2 = state_address_23[1];
          *(state_address_23 - 2) = table_value_2;
          if ( (int)game_state_time >= 10800 && cached_game_connected_3 )
          {
            cached_game_tick_3 = game_tick;
            shifted_bits_7 = (__int64)(int)world_event_count << 7;
            integer_sum_3 = world_event_count + 1;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 21;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick_3;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = *(state_address_23 - 6);
            *(_QWORD *)((char *)&g_1873DE484 + shifted_bits_7) = 1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_7) = 0;
            *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_7) = scaled_index_9;
            *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_7) = loaded_word;
            *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_7) = table_value_2;
            world_event_count = integer_sum_3;
            HIWORD(world_event_count) = 0;
          }
          scaled_index_10 = (int)dword_140404A6C[3597 * *(state_address_23 - 7) + 71856292];
          if ( (_DWORD)scaled_index_10 == -1 )
          {
            *(state_address_23 - 1) = g_183F7A5A0;
            *state_address_23 = g_183F7A5A4;
            state_word_4 = g_183F7A5A8;
          }
          else
          {
            state_word_4 = dword_140404A6C[7166 * scaled_index_10 + 280651442];
            *(state_address_23 - 1) = dword_140404A6C[7166 * scaled_index_10 + 280651440];
            *state_address_23 = dword_140404A6C[7166 * scaled_index_10 + 280651441];
          }
          state_address_23[1] = state_word_4;
          if ( cached_game_connected_3 )
          {
            cached_game_tick_4 = game_tick;
            table_value_3 = state_address_23[1];
            loaded_word_2 = *state_address_23;
            shifted_bits_8 = (__int64)(int)world_event_count << 7;
            integer_sum_4 = world_event_count + 1;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_8) = 21;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_8) = cached_game_tick_4;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_8) = *(state_address_23 - 5);
            scaled_index_11 = *(state_address_23 - 1);
            *(_QWORD *)((char *)&g_1873DE484 + shifted_bits_8) = 1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_8) = 0;
            *(unsigned int *)((char *)&g_1873DE468 + shifted_bits_8) = scaled_index_11;
            *(unsigned int *)((char *)&g_1873DE46C + shifted_bits_8) = loaded_word_2;
            *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_8) = table_value_3;
            world_event_count = integer_sum_4;
            HIWORD(world_event_count) = 0;
          }
          state_word_3 = g_183F7A320;
          ++iteration_count_4;
          state_address_23 += 9;
        }
        while ( iteration_count_4 < (int)g_183F7A320 );
        cached_game_state_time = game_state_time;
        state_word_2 = g_183EBFCD4;
      }
    }
    if ( cached_game_state_time < 10800 || cached_game_state_time != 3600 * (cached_game_state_time / 3600) )
    {
LABEL_204:
      selection_flag_3 = 0;
      iteration_count_6 = 0;
      if ( state_word_3 <= 0 )
      {
LABEL_209:
        g_183EBFDB0 = 100;
        selection_flag_3 = 1;
        g_183EC5974 = 0;
        g_183ECB538 = 100;
      }
      else
      {
        state_address_39 = &g_183F7A328;
        while ( 1 )
        {
          scaled_index_13 = 3597LL * (int)*state_address_39;
          if ( dword_140404A6C[scaled_index_13 + 71856253] )
          {
            if ( dword_140404A6C[scaled_index_13 + 71856292] != -1 )
              break;
          }
          ++iteration_count_6;
          state_address_39 += 9;
          if ( iteration_count_6 >= state_word_3 )
            goto LABEL_209;
        }
      }
      iteration_count_7 = 0;
      if ( state_word_3 <= 0 )
      {
LABEL_215:
        g_183EBFDB0 = 0;
        g_183EC5974 = 100;
        g_183ECB538 = 0;
      }
      else
      {
        state_address_40 = &g_183F7A324;
        while ( 1 )
        {
          scaled_index_14 = 3597LL * (int)*state_address_40;
          if ( dword_140404A6C[scaled_index_14 + 71856253] )
          {
            if ( dword_140404A6C[scaled_index_14 + 71856292] != -1 )
              break;
          }
          ++iteration_count_7;
          state_address_40 += 9;
          if ( iteration_count_7 >= state_word_3 )
            goto LABEL_215;
        }
        if ( !selection_flag_3 )
        {
          if ( state_word_2 > 0 )
            return 0; /* no result: rax is residue at the exit */
          g_183EBFDB0 = 100;
          g_183EC5974 = 0;
          g_183ECB538 = 100;
        }
      }
      cached_game_tick_5 = game_tick;
      iteration_count_8 = 0;
      game_state = 3;
      g_183EBFCD4 = 1200;
      do
      {
        if ( *(state_address_20 - 2886) )
        {
          if ( !*state_address_20 )
          {
            iteration_count_9 = 0;
            if ( state_word_3 > 0 )
            {
              state_address_41 = &g_183F7A328;
              do
              {
                if ( cached_game_connected_3 )
                {
                  cached_world_event_count = world_event_count;
                  shifted_bits_9 = (__int64)(int)world_event_count << 7;
                  shifted_bits_10 = *(state_address_41 - 1) + ((*state_address_41 + (state_address_41[1] << 10)) << 10);
                  *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_9) = 21;
                  *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_9) = cached_game_tick_5;
                  *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_9) = iteration_count_8;
                  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_9) = 2;
                  *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_9) = iteration_count_9;
                  *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_9) = shifted_bits_10;
                  world_event_count = cached_world_event_count + 1;
                  *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_9) = 0;
                  *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_9) = 0;
                  HIWORD(world_event_count) = 0;
                }
                ++iteration_count_9;
                state_address_41 += 9;
              }
              while ( iteration_count_9 < state_word_3 );
            }
          }
        }
        ++iteration_count_8;
        state_address_20 += 3597;
      }
      while ( iteration_count_8 < 256 );
      return 0; /* no result: rax is residue at the exit */
    }
    rand_result_9 = rand() % 8;
    sr_human_random_direction(&converted_vector_2, 0.25, 0.0);
    scaled_index_12 = 19LL * rand_result_9;
    unused_written_slot_2 = 1065353216;
    weighted_sum_6 = source_component_y + *(float *)&dword_140404A6C[scaled_index_12 + 487148757];
    converted_vector_2 = converted_vector_2 + *(float *)&dword_140404A6C[scaled_index_12 + 487148756];
    weighted_sum_7 = state_address_42 + *(float *)&dword_140404A6C[scaled_index_12 + 487148758];
    source_component_y = weighted_sum_6;
    state_address_42 = weighted_sum_7;
    matrix = xmmword_140278D30;
    unused_written_slot = xmmword_140278D30;
    sr_CreateItem(13, &converted_vector_2, nullptr, (float *)&matrix);
    rand_result_10 = rand() % 8;
    rand_result_11 = rand() % 5;
    if ( rand_result_11 )
    {
      if ( rand_result_11 == 1 )
      {
        selection_code_4 = 7;
      }
      else if ( rand_result_11 == 2 )
      {
        selection_code_4 = 1;
      }
      else
      {
        selection_code_4 = 9;
        if ( rand_result_11 == 3 )
          selection_code_4 = 3;
      }
    }
    else
    {
      selection_code_4 = 11;
    }
    iteration_count_5 = 0;
    state_address_24 = (float *)&dword_140404A6C[19 * rand_result_10 + 487148756];
    do
    {
      sr_human_random_direction(&converted_vector_2, 1.0, 0.0);
      component_sum = state_address_42 + state_address_24[2];
      integer_sum_5 = selection_code_4;
      converted_vector_2 = converted_vector_2 + *state_address_24;
      if ( iteration_count_5 )
        integer_sum_5 = selection_code_4 + 1;
      source_component_y = state_address_24[1];
      state_address_42 = component_sum;
      sr_CreateItem(integer_sum_5, &converted_vector_2, nullptr, (float *)&matrix);
      ++iteration_count_5;
    }
    while ( iteration_count_5 < 4 );
    rand_result_12 = rand() % 3;
    option_flags = 1 << rand_result_12;
    saved_option_flags = 1 << rand_result_12;
    if ( iteration_count_3 <= 14 )
    {
      if ( iteration_count_3 <= 7 )
        goto LABEL_166;
      integer_sum_6 = 0;
      if ( rand_result_12 + 1 <= 2 )
        integer_sum_6 = rand_result_12 + 1;
      option_flags |= 1 << integer_sum_6;
    }
    else
    {
      option_flags = 7;
    }
    saved_option_flags = option_flags;
LABEL_166:
    state_address_25 = (float *)&g_183EBFD9C;
    for ( i = 0; i < 3; ++i )
    {
      if ( ((option_flags >> i) & 1) != 0 )
      {
        *(_QWORD *)&angle_2 = *((unsigned int *)state_address_25 - 3);
        product_difference = *(state_address_25 - 2);
        product_difference_2 = *(state_address_25 - 1);
        scaled_value = *state_address_25;
        matrix = xmmword_140278D30;
        unused_written_slot_2 = 1065353216;
        unused_written_slot = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle_2);
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
        remaining_count_11 = 16;
        weighted_sum_8 = *((float *)&matrix + 1) * 0.375;
        scaled_value_2 = *(float *)&matrix * 0.375;
        state_address_26 = product_difference_2 + (float)(*((float *)&matrix + 1) * 0.375);
        weighted_sum_9 = *((float *)&matrix + 2) * 0.375;
        state_address_27 = product_difference + (float)(*(float *)&matrix * 0.375);
        state_address_28 = scaled_value + (float)(*((float *)&matrix + 2) * 0.375);
        source_component_y = state_address_26;
        component_delta = state_address_26 - 0.5;
        converted_vector_2 = state_address_27;
        saved_state_address = state_address_27;
        state_address_42 = state_address_28;
        saved_state_address_2 = state_address_28;
        do
        {
          state_address_29 = &g_182BBB1E4;
          do
          {
            if ( *(state_address_29 - 25)
              && fsqrt(
                   (float)((float)((float)(component_delta - *((float *)state_address_29 - 1)) * (float)(component_delta - *((float *)state_address_29 - 1)))
                         + (float)((float)(saved_state_address - *((float *)state_address_29 - 2)) * (float)(saved_state_address - *((float *)state_address_29 - 2))))
                 + (float)((float)(saved_state_address_2 - *(float *)state_address_29) * (float)(saved_state_address_2 - *(float *)state_address_29))) < 0.5
              && *(state_address_29 - 16) == -1 )
            {
              *(state_address_29 - 18) = 0;
            }
            if ( state_address_29[1735]
              && fsqrt(
                   (float)((float)((float)(component_delta - *((float *)state_address_29 + 1759)) * (float)(component_delta - *((float *)state_address_29 + 1759)))
                         + (float)((float)(saved_state_address - *((float *)state_address_29 + 1758)) * (float)(saved_state_address - *((float *)state_address_29 + 1758))))
                 + (float)((float)(saved_state_address_2 - *((float *)state_address_29 + 1760)) * (float)(saved_state_address_2 - *((float *)state_address_29 + 1760)))) < 0.5
              && state_address_29[1744] == -1 )
            {
              state_address_29[1742] = 0;
            }
            if ( state_address_29[3495]
              && fsqrt(
                   (float)((float)((float)(component_delta - *((float *)state_address_29 + 3519)) * (float)(component_delta - *((float *)state_address_29 + 3519)))
                         + (float)((float)(saved_state_address - *((float *)state_address_29 + 3518)) * (float)(saved_state_address - *((float *)state_address_29 + 3518))))
                 + (float)((float)(saved_state_address_2 - *((float *)state_address_29 + 3520)) * (float)(saved_state_address_2 - *((float *)state_address_29 + 3520)))) < 0.5
              && state_address_29[3504] == -1 )
            {
              state_address_29[3502] = 0;
            }
            if ( state_address_29[5255]
              && fsqrt(
                   (float)((float)((float)(component_delta - *((float *)state_address_29 + 5279)) * (float)(component_delta - *((float *)state_address_29 + 5279)))
                         + (float)((float)(saved_state_address - *((float *)state_address_29 + 5278)) * (float)(saved_state_address - *((float *)state_address_29 + 5278))))
                 + (float)((float)(saved_state_address_2 - *((float *)state_address_29 + 5280)) * (float)(saved_state_address_2 - *((float *)state_address_29 + 5280)))) < 0.5
              && state_address_29[5264] == -1 )
            {
              state_address_29[5262] = 0;
            }
            state_address_29 += 7040;
          }
          while ( (__int64)state_address_29 < (__int64)&g_18329B1E4 );
          saved_state_address = saved_state_address + scaled_value_2;
          component_delta = component_delta + weighted_sum_8;
          saved_state_address_2 = saved_state_address_2 + weighted_sum_9;
          --remaining_count_11;
        }
        while ( remaining_count_11 );
        remaining_count_12 = 3;
        do
        {
          rand_result_13 = rand() % 5;
          if ( rand_result_13 )
          {
            if ( rand_result_13 == 1 )
            {
              selection_code_5 = 7;
            }
            else if ( rand_result_13 == 2 )
            {
              selection_code_5 = 1;
            }
            else
            {
              selection_code_5 = 9;
              if ( rand_result_13 == 3 )
                selection_code_5 = 3;
            }
          }
          else
          {
            selection_code_5 = 11;
          }
          sr_CreateItem(selection_code_5, &converted_vector_2, nullptr, (float *)&matrix);
          weighted_sum_10 = state_address_27 + (float)(*(float *)&matrix * 0.375);
          weighted_sum_11 = state_address_26 + (float)(*((float *)&matrix + 1) * 0.375);
          converted_vector_2 = weighted_sum_10;
          source_component_y = weighted_sum_11;
          weighted_sum_12 = state_address_28 + (float)(*((float *)&matrix + 2) * 0.375);
          state_address_42 = weighted_sum_12;
          sr_CreateItem(selection_code_5 + 1, &converted_vector_2, nullptr, (float *)&matrix);
          state_address_30 = (float)(*(float *)&matrix * 0.375) + weighted_sum_10;
          state_address_31 = (float)(*((float *)&matrix + 1) * 0.375) + weighted_sum_11;
          state_address_32 = (float)(*((float *)&matrix + 2) * 0.375) + weighted_sum_12;
          converted_vector_2 = state_address_30;
          source_component_y = state_address_31;
          state_address_42 = state_address_32;
          sr_CreateItem(selection_code_5 + 1, &converted_vector_2, nullptr, (float *)&matrix);
          state_address_33 = (float)(*(float *)&matrix * 0.375) + state_address_30;
          state_address_34 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_31;
          converted_vector_2 = state_address_33;
          source_component_y = state_address_34;
          state_address_35 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_32;
          state_address_42 = state_address_35;
          sr_CreateItem(selection_code_5 + 1, &converted_vector_2, nullptr, (float *)&matrix);
          state_address_27 = (float)(*(float *)&matrix * 0.375) + state_address_33;
          state_address_28 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_35;
          converted_vector_2 = state_address_27;
          state_address_26 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_34;
          state_address_42 = state_address_28;
          source_component_y = state_address_26;
          --remaining_count_12;
        }
        while ( remaining_count_12 );
        sr_CreateItem(13, &converted_vector_2, nullptr, (float *)&matrix);
        state_address_36 = (float)(*(float *)&matrix * 0.375) + state_address_27;
        state_address_37 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_26;
        state_address_38 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_28;
        converted_vector_2 = state_address_36;
        source_component_y = state_address_37;
        state_address_42 = state_address_38;
        rand_result_14 = (rand() & 1) + 1;
        if ( rand_result_14 )
        {
          remaining_count_13 = rand_result_14;
          do
          {
            sr_CreateItem(14, &converted_vector_2, nullptr, (float *)&matrix);
            state_address_36 = state_address_36 + (float)(*(float *)&matrix * 0.375);
            state_address_37 = state_address_37 + (float)(*((float *)&matrix + 1) * 0.375);
            converted_vector_2 = state_address_36;
            state_address_38 = state_address_38 + (float)(*((float *)&matrix + 2) * 0.375);
            source_component_y = state_address_37;
            state_address_42 = state_address_38;
            --remaining_count_13;
          }
          while ( remaining_count_13 );
        }
        option_flags = saved_option_flags;
      }
      state_address_25 += 5873;
    }
    state_word_3 = g_183F7A320;
    state_word_2 = g_183EBFCD4;
    state_address_20 = &g_151623978;
    cached_game_connected_3 = game_connected;
    goto LABEL_204;
  }
  state_address = &g_151623978;
  cached_integer_sum = 0;
  selection_flag = 1;
  remaining_count = 256;
  do
  {
    if ( *(state_address - 2886) && !*state_address )
    {
      integer_sum = cached_integer_sum + 1;
      if ( !*(state_address - 2868) )
      {
        integer_sum = cached_integer_sum;
        selection_flag = 0;
      }
      cached_integer_sum = integer_sum;
    }
    state_address += 3597;
    --remaining_count;
  }
  while ( remaining_count );
  cached_selection_flag = 0;
  integer_difference = --g_183EBFCD4;
  if ( cached_integer_sum >= 3 )
    cached_selection_flag = selection_flag;
  if ( cached_selection_flag )
  {
    if ( integer_difference > 180 )
      integer_difference = 180;
    g_183EBFCD4 = integer_difference;
  }
  if ( cached_integer_sum < 3 && integer_difference < 1800 )
  {
    g_183EBFCD4 = 1800;
    return 0; /* no result: rax is residue at the exit */
  }
  if ( integer_difference > 0 )
    return 0; /* no result: rax is residue at the exit */
  sub_14012E960(128);
  *(_OWORD *)&g_183F7A320 = 0;
  if ( (int)g_175FD145C > 0 )
    crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 4LL * (int)g_175FD145C);
  state_address_2 = &g_151620CA8;
  remaining_count_2 = 0;
  state_address_3 = &g_151620CA8;
  buffer_cursor = (int *)callee_output_word;
  for ( j = 0; j < 256; ++j )
  {
    if ( *(state_address_3 - 18) && *state_address_3 && !state_address_3[2868] )
    {
      ++remaining_count_2;
      *buffer_cursor++ = j;
    }
    state_address_3 += 3597;
  }
  g_183F7A31C = remaining_count_2;
  rand_result = rand() % 3;
  iteration_count = g_183F7A320;
  integer_sum_2 = rand_result + 3;
  while ( (!iteration_count || remaining_count_2 >= integer_sum_2) && iteration_count < 8 )
  {
    if ( remaining_count_2 > 0 )
    {
      rand_result_2 = rand() % remaining_count_2--;
      buffer_cursor_2 = (unsigned int *)&callee_output_word[4 * rand_result_2];
      dword_140404A6C[9 * g_183F7A320 + 284022319] = *buffer_cursor_2;
      if ( rand_result_2 < (__int64)remaining_count_2 )
      {
        remaining_count_3 = remaining_count_2 - (__int64)rand_result_2;
        buffer_cursor_3 = (unsigned int *)&callee_output_word[4 * rand_result_2 + 4];
        while ( remaining_count_3 )
        {
          *buffer_cursor_2++ = *buffer_cursor_3++;
          --remaining_count_3;
        }
      }
      if ( remaining_count_2 > 0 )
      {
        rand_result_3 = rand() % remaining_count_2--;
        buffer_cursor_4 = (unsigned int *)&callee_output_word[4 * rand_result_3];
        dword_140404A6C[9 * g_183F7A320 + 284022318] = *buffer_cursor_4;
        if ( rand_result_3 < (__int64)remaining_count_2 )
        {
          remaining_count_4 = remaining_count_2 - (__int64)rand_result_3;
          buffer_cursor_5 = (unsigned int *)&callee_output_word[4 * rand_result_3 + 4];
          while ( remaining_count_4 )
          {
            *buffer_cursor_4++ = *buffer_cursor_5++;
            --remaining_count_4;
          }
        }
        if ( remaining_count_2 > 0 )
        {
          rand_result_4 = rand() % remaining_count_2--;
          buffer_cursor_6 = (unsigned int *)&callee_output_word[4 * rand_result_4];
          dword_140404A6C[9 * g_183F7A320 + 284022320] = *buffer_cursor_6;
          if ( rand_result_4 < (__int64)remaining_count_2 )
          {
            remaining_count_5 = remaining_count_2 - (__int64)rand_result_4;
            buffer_cursor_7 = (unsigned int *)&callee_output_word[4 * rand_result_4 + 4];
            while ( remaining_count_5 )
            {
              *buffer_cursor_6++ = *buffer_cursor_7++;
              --remaining_count_5;
            }
          }
        }
      }
      iteration_count = g_183F7A320;
    }
    g_183F7A320 = ++iteration_count;
  }
  player = 0;
  saved_shifted_bits = 0;
  saved_option_flags = 0;
  selection_code = 0xC000100040000LL;
  do
  {
    if ( !*(state_address_2 - 18) || !*state_address_2 || state_address_2[2868] )
      goto LABEL_79;
    comparison_result = (signed int)g_175FD145C <= 0;
    state_address_2[15] = 0;
    if ( comparison_result )
    {
      rand_result_5 = 0;
    }
    else
    {
      do
      {
        do
          rand_result_5 = rand() % (signed int)g_175FD145C;
        while ( (unsigned int)rand_result_5 <= 0x33 && _bittest64(&selection_code, rand_result_5) );
      }
      while ( scratch_buffer[rand_result_5] );
      scratch_buffer[rand_result_5] = 1;
    }
    scaled_index = 34LL * rand_result_5;
    matrix = xmmword_140278D30;
    unused_written_slot = xmmword_140278D30;
    unused_written_slot_2 = 1065353216;
    weighted_sum = *(float *)&dword_140404A6C[scaled_index + 225391233];
    weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 225391235];
    source_component_y = *(float *)&dword_140404A6C[scaled_index + 225391234] + 1.0;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, 0.0);
    integer_difference_2 = dword_140404A6C[scaled_index + 225391242] - 1;
    *((_QWORD *)state_address_2 + 1775) = 1;
    converted_vector = _mm_cvtsi32_si128(integer_difference_2);
    integer_difference_3 = dword_140404A6C[scaled_index + 225391243] - 1;
    converted_vector_2 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 4.0) + weighted_sum;
    state_address_42 = (float)((float)integer_difference_3 * 4.0) + weighted_sum_2;
    masked_bits = sub_140053840(&converted_vector_2, (float *)&matrix, player);
    state_word = g_183F7A320;
    state_address_2[21] = masked_bits;
    if ( masked_bits != -1 )
    {
      if ( (int)state_word > 0 )
      {
        state_address_4 = &g_183F7A328;
        remaining_count_6 = (unsigned int)state_word;
        do
        {
          if ( player == *state_address_4 )
          {
            scaled_index_2 = 7166LL * masked_bits;
            dword_140404A6C[scaled_index_2 + 280651318] = 100;
            dword_140404A6C[scaled_index_2 + 280651319] = 1;
          }
          state_address_4 += 9;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
      }
      dword_140404A6C[7166 * masked_bits + 280651341] = 0;
    }
    state_address_2[71] = 0;
    sr_event_player_update(player);
    cached_game_tick = game_tick;
    selection_flag_2 = 0;
    cached_game_connected = game_connected;
    if ( (int)state_word <= 0 )
    {
LABEL_76:
      selection_code = 0xC000100040000LL;
      if ( cached_game_connected )
      {
        shifted_bits_3 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 21;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = player;
        *(_QWORD *)((char *)&g_1873DE484 + shifted_bits_3) = 0;
        *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_3) = 0;
        *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_3) = 0;
        *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_3) = 0;
      }
      saved_shifted_bits = saved_option_flags;
      goto LABEL_79;
    }
    remaining_count_7 = state_word;
    state_address_5 = &g_183F7A32C;
    saved_shifted_bits_2 = saved_option_flags;
    do
    {
      if ( player == *(state_address_5 - 1) )
      {
        selection_flag_2 = 1;
        if ( !cached_game_connected )
          goto LABEL_74;
        shifted_bits = (__int64)(int)world_event_count++ << 7;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 21;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = player;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 0;
        *(_QWORD *)((char *)&g_1873DE488 + shifted_bits) = 1;
        *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = 0;
        *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = 0;
        goto LABEL_73;
      }
      if ( player == *state_address_5 )
      {
        selection_flag_2 = 1;
        if ( cached_game_connected )
        {
          scaled_index_3 = *(state_address_5 - 2);
          shifted_bits_2 = (__int64)(int)world_event_count++ << 7;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 21;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = player;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_2) = 0;
          *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_2) = 2;
          *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_2) = saved_shifted_bits_2 + scaled_index_3;
          *(_QWORD *)((char *)&g_1873DE468 + shifted_bits_2) = 0;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits_2) = 0;
LABEL_73:
          HIWORD(world_event_count) = 0;
        }
      }
LABEL_74:
      state_address_5 += 9;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    if ( !selection_flag_2 )
      goto LABEL_76;
    saved_shifted_bits = saved_shifted_bits_2;
    selection_code = 0xC000100040000LL;
LABEL_79:
    saved_shifted_bits += 1024;
    ++player;
    state_address_2 += 3597;
    saved_option_flags = saved_shifted_bits;
  }
  while ( saved_shifted_bits < 0x40000 );
  element_index = 0;
  running_total = 0;
  do
  {
    rand_result_6 = rand() & 0xF;
    if ( rand_result_6 >= 6 )
    {
      selection_code_2 = 6;
      if ( rand_result_6 >= 0xB )
        selection_code_2 = 16;
      rand_result_7 = rand() % 6;
    }
    else
    {
      selection_code_2 = 15;
      rand_result_7 = rand() % 6;
    }
    table_value = dword_140404A6C[running_total + 283836331];
    element_index_2 = 0;
    element_index_3 = 0;
    if ( table_value <= 0 )
    {
LABEL_91:
      createvehicle_result = -1;
    }
    else
    {
      state_address_6 = &dword_140404A6C[running_total + 283836332];
      while ( *state_address_6 )
      {
        ++element_index_2;
        ++element_index_3;
        state_address_6 += 13;
        if ( element_index_2 >= table_value )
          goto LABEL_91;
      }
      saved_rand_result = rand_result_7;
      dword_140404A6C[13 * element_index_3 + 283836332 + running_total] = 1;
      createvehicle_result = sr_CreateVehicle(
              selection_code_2,
              (float *)&dword_140404A6C[5873 * element_index + 283836333 + 13 * element_index_2],
              nullptr,
              &dword_140404A6C[5873 * element_index + 283836336 + 13 * element_index_2],
              saved_rand_result);
    }
    call_result = sub_14012CEB0(selection_code_2, 0, 0, 0, 0, 0.0);
    state_address_7 = *(float *)&dword_140404A6C[running_total + 283831498];
    state_address_8 = *(float *)&dword_140404A6C[running_total + 283831499];
    state_address_9 = *(float *)&dword_140404A6C[running_total + 283831500];
    *(_QWORD *)&angle = dword_140404A6C[running_total + 283831497];
    scaled_index_4 = 383LL * call_result;
    converted_vector_2 = state_address_7;
    source_component_y = state_address_8;
    state_address_42 = state_address_9;
    matrix = xmmword_140278D30;
    unused_written_slot = xmmword_140278D30;
    unused_written_slot_2 = 1065353216;
    dword_140404A6C[scaled_index_4 + 132400668] = 0;
    dword_140404A6C[scaled_index_4 + 132400639] = createvehicle_result;
    dword_140404A6C[5210 * createvehicle_result + 129720183] = call_result;
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
    sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, sr_export_float_lane_container(1078530011));
    remaining_count_8 = 3;
    do
    {
      rand();
      sr_CreateItem(11, &converted_vector_2, nullptr, (float *)&matrix);
      weighted_sum_3 = state_address_7 + (float)(*(float *)&matrix * 0.375);
      weighted_sum_4 = state_address_8 + (float)(*((float *)&matrix + 1) * 0.375);
      converted_vector_2 = weighted_sum_3;
      source_component_y = weighted_sum_4;
      weighted_sum_5 = state_address_9 + (float)(*((float *)&matrix + 2) * 0.375);
      state_address_42 = weighted_sum_5;
      sr_CreateItem(12, &converted_vector_2, nullptr, (float *)&matrix);
      state_address_10 = (float)(*(float *)&matrix * 0.375) + weighted_sum_3;
      state_address_11 = (float)(*((float *)&matrix + 1) * 0.375) + weighted_sum_4;
      state_address_12 = (float)(*((float *)&matrix + 2) * 0.375) + weighted_sum_5;
      converted_vector_2 = state_address_10;
      source_component_y = state_address_11;
      state_address_42 = state_address_12;
      sr_CreateItem(12, &converted_vector_2, nullptr, (float *)&matrix);
      state_address_13 = (float)(*(float *)&matrix * 0.375) + state_address_10;
      state_address_14 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_11;
      converted_vector_2 = state_address_13;
      source_component_y = state_address_14;
      state_address_15 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_12;
      state_address_42 = state_address_15;
      sr_CreateItem(12, &converted_vector_2, nullptr, (float *)&matrix);
      state_address_7 = (float)(*(float *)&matrix * 0.375) + state_address_13;
      state_address_9 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_15;
      converted_vector_2 = state_address_7;
      state_address_8 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_14;
      state_address_42 = state_address_9;
      source_component_y = state_address_8;
      --remaining_count_8;
    }
    while ( remaining_count_8 );
    rand_result_8 = (rand() & 1) + 1;
    if ( rand_result_8 )
    {
      remaining_count_9 = rand_result_8;
      do
      {
        sr_CreateItem(14, &converted_vector_2, nullptr, (float *)&matrix);
        state_address_7 = state_address_7 + (float)(*(float *)&matrix * 0.375);
        state_address_8 = state_address_8 + (float)(*((float *)&matrix + 1) * 0.375);
        converted_vector_2 = state_address_7;
        state_address_9 = state_address_9 + (float)(*((float *)&matrix + 2) * 0.375);
        source_component_y = state_address_8;
        state_address_42 = state_address_9;
        --remaining_count_9;
      }
      while ( remaining_count_9 );
    }
    createitem_result = sr_CreateItem(25, &converted_vector_2, nullptr, (float *)&matrix);
    state_address_16 = (float)(*(float *)&matrix * 0.375) + state_address_7;
    state_address_17 = (float)(*((float *)&matrix + 1) * 0.375) + state_address_8;
    converted_vector_2 = state_address_16;
    state_address_18 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_9;
    source_component_y = state_address_17;
    state_address_42 = state_address_18;
    if ( createitem_result != -1 )
    {
      scaled_index_5 = 1760LL * createitem_result;
      dword_140404A6C[scaled_index_5 + 278846051] = 0;
      dword_140404A6C[scaled_index_5 + 278845981] = 1111 * (element_index + 1);
      sr_item_phone_changed(createitem_result);
    }
    sr_CreateItem(35, &converted_vector_2, nullptr, (float *)&matrix);
    ++element_index;
    running_total += 5873;
    converted_vector_2 = (float)(*(float *)&matrix * 0.375) + state_address_16;
    source_component_y = (float)(*((float *)&matrix + 1) * 0.375) + state_address_17;
    state_address_42 = (float)(*((float *)&matrix + 2) * 0.375) + state_address_18;
  }
  while ( element_index < 3 );
  cached_game_connected_2 = game_connected;
  cached_game_tick_2 = game_tick;
  if ( game_connected )
  {
    shifted_bits_4 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick_2;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = 0;
    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 1;
  }
  g_183EBFDC0 = 1;
  if ( cached_game_connected_2 )
  {
    shifted_bits_5 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick_2;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = 1;
    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 1;
  }
  g_183EC5984 = 1;
  if ( cached_game_connected_2 )
  {
    shifted_bits_6 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick_2;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = 2;
    *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 1;
  }
  iteration_count_2 = 0;
  g_183ECB548 = 1;
  if ( (int)g_183F7A320 > 0 )
  {
    state_address_19 = &g_183F7A344;
    do
    {
      *((_QWORD *)state_address_19 - 1) = 0;
      *state_address_19 = 0;
      scaled_index_6 = (int)dword_140404A6C[3597 * *(state_address_19 - 8) + 71856292];
      if ( (_DWORD)scaled_index_6 != -1 )
      {
        *(state_address_19 - 2) = dword_140404A6C[7166 * scaled_index_6 + 280651440];
        *(state_address_19 - 1) = dword_140404A6C[7166 * scaled_index_6 + 280651441];
        *state_address_19 = dword_140404A6C[7166 * scaled_index_6 + 280651442];
      }
      ++iteration_count_2;
      state_address_19 += 9;
    }
    while ( iteration_count_2 < (int)g_183F7A320 );
  }
  game_state = 2;
  *(_QWORD *)&g_183EBFCD4 = 54000;
  return 0; /* no result: rax is residue at the exit */
}
#undef saved_rand_result
#undef converted_vector_2
#undef source_component_y
#undef state_address_42
#undef saved_option_flags
#undef matrix
#undef unused_written_slot
#undef unused_written_slot_2
#undef callee_output_word
#undef scratch_buffer
#undef unused_frame_slot_10600

//----- (000000014010EE20) ----------------------------------------------------
__int64            sub_14010EE20(int a1)
{
  __int64 human_record_offset;

  human_record_offset = 7166LL * a1;
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280651305], 8);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658439], 1);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658440], 5);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658441], 3);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658443], 4);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658444], 3);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658442], 4);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658445], 5);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658446], 4);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658447], 4);
  sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658449], 4);
  return sr_net_write_bits(&dword_140404A6C[human_record_offset + 280658450], 2);
}

//----- (0000000140116D80) ----------------------------------------------------
void            sub_140116D80(int a1, int a2, int a3)
{
  __int64 player_record_offset;
  __int64 player_record_offset_2;
  __int64 table_value;
  unsigned int corporation;
  float converted_vector;
  __int64 scaled_index;
  unsigned int scaled_index_2;
  __m128i converted_vector_2;
  __int64 scaled_index_3;
  float *point;
  __int64 table_value_2;
  __int64 scaled_index_4;
  unsigned int corporation_2;
  int table_value_3;
  float limited_value;
  int scaled_index_5;
  int table_value_4;

  if ( a1 == -1 )
    return;
  if ( a2 == -1 )
    return;
  if ( a1 == a2 )
    return;
  player_record_offset = 3597LL * a1;
  if ( dword_140404A6C[player_record_offset + 71856292] == -1 )
    return;
  player_record_offset_2 = 3597LL * a2;
  table_value = (int)dword_140404A6C[player_record_offset_2 + 71856292];
  if ( (_DWORD)table_value == -1
    || dword_140404A6C[player_record_offset + 71859139]
    || dword_140404A6C[player_record_offset_2 + 71859139]
    || game_type != 4 )
  {
    return;
  }
  corporation = dword_140404A6C[player_record_offset + 71856286];
  converted_vector = (float)(int)g_183F7A5C4;
  if ( corporation == 17 )
  {
    scaled_index = (int)dword_140404A6C[7166 * table_value + 280651315];
    if ( (_DWORD)scaled_index != -1 )
    {
      scaled_index_2 = dword_140404A6C[5210 * scaled_index + 129716718];
      if ( scaled_index_2 != -1 && scaled_index_2 == a1 )
        return;
    }
    if ( dword_140404A6C[player_record_offset_2 + 71856286] == 17 )
      goto LABEL_27;
    converted_vector_2 = _mm_cvtsi32_si128(g_183F7A5C8);
LABEL_26:
    converted_vector = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0];
    goto LABEL_27;
  }
  if ( corporation <= 5 )
  {
    scaled_index_3 = 7166 * table_value;
    point = (float *)&dword_140404A6C[7166 * table_value + 280651440];
    if ( sr_corporation_contains_point(point, corporation, 0.0) )
      return;
    table_value_2 = (int)dword_140404A6C[scaled_index_3 + 280651315];
    if ( (_DWORD)table_value_2 != -1 )
    {
      scaled_index_4 = (int)dword_140404A6C[5210 * table_value_2 + 129716718];
      if ( (_DWORD)scaled_index_4 != -1 && dword_140404A6C[3597 * scaled_index_4 + 71856253] && dword_140404A6C[3597 * scaled_index_4 + 71856286] == corporation )
        return;
    }
    corporation_2 = dword_140404A6C[player_record_offset_2 + 71856286];
    if ( corporation_2 == 17 )
    {
      converted_vector_2 = _mm_cvtsi32_si128(g_183F7A5CC);
    }
    else
    {
      converted_vector = (float)(int)g_183F7A5D0;
      if ( corporation_2 > 5 || !sr_corporation_contains_point(point, corporation_2, 0.0) )
        goto LABEL_27;
      converted_vector_2 = _mm_cvtsi32_si128(g_183F7A5D4);
    }
    goto LABEL_26;
  }
LABEL_27:
  table_value_3 = dword_140404A6C[player_record_offset_2 + 71856276];
  limited_value = converted_vector * 0.0099999998;
  if ( table_value_3 > 0 )
    limited_value = limited_value * (float)(1.0 - fminf(fmaxf(fminf((float)table_value_3 * 0.0099999998, 1.0), 0.0), 1.0));
  scaled_index_5 = (int)(float)((float)a3 * limited_value);
  if ( scaled_index_5 > 0 )
    dword_140404A6C[player_record_offset + 71856276] += scaled_index_5;
  table_value_4 = dword_140404A6C[player_record_offset + 71856276];
  if ( table_value_4 > 1023 )
  {
    table_value_4 = 1023;
    dword_140404A6C[player_record_offset + 71856276] = 1023;
  }
  if ( table_value_4 >= (int)g_183F7A5E4 )
    dword_140404A6C[7166 * dword_140404A6C[player_record_offset + 71856292] + 280651318] = 0;
}

//----- (00000001401178F0) ----------------------------------------------------
__int64            sub_1401178F0(int a1)
{
  __int64 float_word;
  __int64 player_record_offset;
  __int64 player_record_offset_2;
  __int64 remaining_count;
  int float_word_2;
  __int64 float_word_3;
  __int64 float_word_4;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int iteration_count;
  unsigned int *state_address;
  char rand_result;
  __int64 table_value;
  double angle;
  double scaled_ratio;
  unsigned int table_value_2;
  float math_angle_difference_result;
  double saved_float_word;
  double saved_vector_result;
  signed int table_value_3;
  __int64 scaled_index_3;
  float combined_products;
  float combined_products_2;
  float squared_value;
  float square_root;
  float scaled_ratio_2;
  double saved_scaled_ratio;
  unsigned int integer_sum;
  __int64 scaled_index_4;
  __int64 table_value_4;
  unsigned int *state_address_2;
  __int64 scaled_index_5;
  double float_word_5;
  __m128 vector_result;
  float scaled_value;
  __m128 saved_vector_result_2;
  float state_address_3;
  float squared_length;
  double vector_result_2;
  float *state_address_4;
  float weighted_sum;
  float weighted_sum_2;
  int iteration_count_2;
  __int64 loaded_word;
  float weighted_sum_3;
  float state_address_5;
  bool comparison_result;
  bool comparison_result_2;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float weighted_sum_4;
  __int64 table_value_5;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  unsigned int float_word_6;
  float weighted_sum_8;
  int scaled_index_8;
  unsigned int table_value_6;
  double vector_result_3;
  double float_word_7;
  __int64 scaled_index_9;
  float combined_products_3;
  float combined_products_4;
  __m128 vector_result_4;
  float squared_value_2;
  float square_root_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  __m128 saved_vector_result_3;
  float weighted_sum_9;
  double float_word_8;
  __int64 scaled_index_10;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float *state_address_6;
  float *combined_products_5;
  int iteration_count_3;
  __int64 loaded_word_2;
  float weighted_sum_13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401178F0[112];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401178F0 + 0)) /* [rsp+0h] */
#define input_value (*(int (*))(void *)(sr_frame_1401178F0 + 32)) /* [rsp+20h] */
#define product_difference (*(float (*))(void *)(sr_frame_1401178F0 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1401178F0 + 44)) /* [rsp+2Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_1401178F0 + 48)) /* [rsp+30h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_1401178F0 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401178F0 + 96)) /* [rsp+60h] */
#define unused_frame_slot_104 (*(__int64 (*))(void *)(sr_frame_1401178F0 + 104)) /* [rsp+68h] */

  float_word = a1;
  player_record_offset = 3597LL * a1;
  player_record_offset_2 = 3597LL * a1;
  remaining_count = 0;
  input_value = a1;
  *(_QWORD *)&dword_140404A6C[player_record_offset + 71856293] = 0;
  *(_QWORD *)&dword_140404A6C[player_record_offset + 71856295] = 0;
  float_word_2 = dword_140404A6C[player_record_offset_2 + 71859665];
  dword_140404A6C[player_record_offset_2 + 71856325] = 0;
  if ( float_word_2 > 0 )
  {
    dword_140404A6C[player_record_offset_2 + 71859665] = float_word_2 - 1;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  float_word_3 = (int)dword_140404A6C[player_record_offset_2 + 71856292];
  if ( (_DWORD)float_word_3 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  float_word_4 = 7166 * float_word_3;
  if ( dword_140404A6C[7166 * float_word_3 + 280658335] == -1 && (int)dword_140404A6C[float_word_4 + 280658139] > 0 )
  {
    scaled_index = 1760LL * (int)dword_140404A6C[float_word_4 + 280658140];
    if ( dword_140404A6C[scaled_index + 278845974] )
      goto LABEL_27;
    if ( !dword_140404A6C[scaled_index + 278845906] )
    {
      if ( (int)dword_140404A6C[float_word_4 + 280658149] <= 0 )
      {
        iteration_count = 4;
        remaining_count = 4;
        state_address = &dword_140404A6C[float_word_4 + 280658170];
        do
        {
          if ( (int)*(state_address - 1) > 0
            && dword_140404A6C[1268 * dword_140404A6C[1760 * *state_address + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * dword_140404A6C[float_word_4 + 280658140] + 278845898]]
            && (rand() & 1) == 0 )
          {
            dword_140404A6C[3597 * float_word + 71856367 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 3;
            dword_140404A6C[3597 * float_word + 71856368 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = iteration_count;
            dword_140404A6C[3597 * float_word + 71856369 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 1;
            dword_140404A6C[3597 * float_word + 71856370 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 0;
            dword_140404A6C[3597 * float_word + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * float_word + 71856362] + 1) & 0x3F;
          }
          ++iteration_count;
          state_address += 10;
          --remaining_count;
        }
        while ( remaining_count );
        goto LABEL_27;
      }
      if ( (int)dword_140404A6C[1760 * dword_140404A6C[float_word_4 + 280658150] + 278845974] <= 0 )
      {
        if ( (rand() & 0x1F) != 0 )
          goto LABEL_27;
        scaled_index_2 = 3597 * float_word;
        dword_140404A6C[3597 * float_word + 71856367 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 3;
        dword_140404A6C[3597 * float_word + 71856368 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 2;
        goto LABEL_12;
      }
      if ( (rand() & 0x1F) == 0 )
      {
        scaled_index_2 = 3597 * float_word;
        dword_140404A6C[3597 * float_word + 71856367 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 3;
        dword_140404A6C[3597 * float_word + 71856368 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 1;
LABEL_12:
        dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_2 + 71856362] + 71856369 + scaled_index_2] = 1;
        dword_140404A6C[21 * (int)dword_140404A6C[scaled_index_2 + 71856362] + 71856370 + scaled_index_2] = 0;
        dword_140404A6C[scaled_index_2 + 71856362] = ((unsigned __int8)dword_140404A6C[scaled_index_2 + 71856362] + 1) & 0x3F;
      }
LABEL_27:
      a1 = input_value;
      goto LABEL_28;
    }
    if ( (int)dword_140404A6C[1760 * dword_140404A6C[scaled_index + 278845907] + 278845974] <= 0 )
    {
      if ( (rand() & 0x1F) == 0 )
      {
        dword_140404A6C[3597 * float_word + 71856367 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 3;
        dword_140404A6C[3597 * float_word + 71856368 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 1;
        dword_140404A6C[3597 * float_word + 71856369 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 1;
        dword_140404A6C[3597 * float_word + 71856370 + 21 * (int)dword_140404A6C[3597 * float_word + 71856362]] = 0;
        dword_140404A6C[3597 * float_word + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * float_word + 71856362] + 1) & 0x3F;
      }
      goto LABEL_27;
    }
    rand_result = rand();
    a1 = input_value;
    if ( (rand_result & 0x1F) == 0 )
      dword_140404A6C[3597 * float_word + 71856325] |= 0x1000u;
  }
LABEL_28:
  table_value = (int)dword_140404A6C[float_word_4 + 280651313];
  if ( (_DWORD)table_value == -1 )
  {
    sub_140008440(a1, float_word_3);
    *(_QWORD *)&angle = dword_140404A6C[float_word_4 + 280651341];
    HIDWORD(scaled_ratio) = 0;
    dword_140404A6C[player_record_offset_2 + 71856339] = 1;
    matrix[0] = xmmword_140278D30;
    unused_written_slot_3 = 1065353216;
    matrix[1] = xmmword_140278D30;
    sr_math_mat3_rotate_rows((__int64)matrix, (float *)&dword_1402F6188, angle);
    table_value_2 = dword_140404A6C[float_word_4 + 280651357];
    math_angle_difference_result = *(float *)&dword_140404A6C[player_record_offset_2 + 71856297]
        - SR_VEC_READ_LANES(128, sr_math_angle_difference(COERCE_DOUBLE((unsigned __int64)table_value_2), *(float *)&dword_140404A6C[player_record_offset_2 + 71856301]), f32)[0];
    dword_140404A6C[player_record_offset_2 + 71856301] = table_value_2;
    *(float *)&dword_140404A6C[player_record_offset_2 + 71856297] = math_angle_difference_result;
    if ( math_angle_difference_result >= -2.74889357189125 )
    {
      if ( math_angle_difference_result > 2.74889357189125 )
        dword_140404A6C[player_record_offset_2 + 71856297] = 1076882911;
    }
    else
    {
      dword_140404A6C[player_record_offset_2 + 71856297] = -1070600737;
    }
    *(_QWORD *)&saved_float_word = dword_140404A6C[player_record_offset_2 + 71859143];
    if ( *(float *)&dword_140404A6C[float_word_4 + 280651456] < 0.89999998 )
    {
      if ( (game_tick & 0x7F) > 0x40 )
        dword_140404A6C[player_record_offset_2 + 71856325] |= 8u;
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    LODWORD(saved_vector_result) = 0;
    if ( (int)dword_140404A6C[player_record_offset_2 + 71859146] < (int)dword_140404A6C[player_record_offset_2 + 71859147] )
    {
      dword_140404A6C[player_record_offset_2 + 71856296] = 1065353216;
      table_value_3 = dword_140404A6C[player_record_offset_2 + 71859146];
      scaled_index_3 = player_record_offset_2 * 4 + 32LL * table_value_3;
      combined_products = *(float *)((char *)&g_15162399C + scaled_index_3) - *(float *)&dword_140404A6C[float_word_4 + 280651335];
      combined_products_2 = *(float *)((char *)&g_1516239A4 + scaled_index_3) - *(float *)&dword_140404A6C[float_word_4 + 280651337];
      squared_value = (float)(combined_products_2 * combined_products_2) + (float)(combined_products * combined_products);
      square_root = fsqrt(squared_value);
      if ( square_root == 0.0 )
      {
        saved_scaled_ratio = 0.0;
        scaled_ratio_2 = 0.0;
      }
      else
      {
        *(float *)&scaled_ratio = 1.0 / square_root;
        saved_scaled_ratio = scaled_ratio;
        scaled_ratio_2 = (float)(1.0 / square_root) * combined_products_2;
        *(float *)&saved_scaled_ratio = *(float *)&saved_scaled_ratio * combined_products;
      }
      *(float *)&saved_scaled_ratio = sub_14023F704(*(float *)&saved_scaled_ratio, -scaled_ratio_2);
      saved_float_word = saved_scaled_ratio;
      if ( squared_value < 4.0 )
      {
        integer_sum = table_value_3 + 1;
        if ( table_value_3 + 1 >= (int)dword_140404A6C[player_record_offset_2 + 71859147] )
          integer_sum = 0;
        dword_140404A6C[player_record_offset_2 + 71859146] = integer_sum;
      }
    }
    if ( (int)dword_140404A6C[player_record_offset_2 + 71859668] <= 0 )
      goto LABEL_70;
    scaled_index_4 = player_record_offset_2 * 4 + 24LL * (int)dword_140404A6C[player_record_offset_2 + 71859669];
    if ( *(float *)((char *)&g_1516241D4 + scaled_index_4) < 2.0
      && fabs(*(float *)((char *)&g_1516241CC + scaled_index_4) - *(float *)&dword_140404A6C[float_word_4 + 280651336]) < 2.0
      && (rand() & 0x1F) == 0 )
    {
      table_value_4 = (int)dword_140404A6C[player_record_offset_2 + 71859669];
      *(_QWORD *)&dword_140404A6C[player_record_offset_2 + 71859146] = 0;
      state_address_2 = &dword_140404A6C[6 * table_value_4 + 71859671 + player_record_offset_2];
      dword_140404A6C[player_record_offset_2 + 71859148] = *state_address_2;
      dword_140404A6C[player_record_offset_2 + 71859149] = state_address_2[1];
      dword_140404A6C[player_record_offset_2 + 71859150] = state_address_2[2];
      ++dword_140404A6C[player_record_offset_2 + 71859147];
    }
    if ( (int)dword_140404A6C[player_record_offset_2 + 71859668] <= 0 )
      goto LABEL_70;
    scaled_index_5 = player_record_offset_2 * 4 + 24LL * (int)dword_140404A6C[player_record_offset_2 + 71859669];
    if ( *(float *)((char *)&g_1516241D4 + scaled_index_5) <= 12.0 )
      goto LABEL_70;
    *(_QWORD *)&float_word_5 = *(unsigned int *)((char *)&g_1516241C8 + scaled_index_5);
    *(float *)&float_word_5 = *(float *)&float_word_5 - *(float *)&dword_140404A6C[float_word_4 + 280651986];
    vector_result = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&g_1516241D0 + scaled_index_5))));
    SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] - *(float *)&dword_140404A6C[float_word_4 + 280651988];
    scaled_value = *(float *)&float_word_5 * *(float *)&float_word_5;
    saved_vector_result_2 = vector_result;
    state_address_3 = (float)(*(float *)((char *)&g_1516241CC + scaled_index_5) - *(float *)&dword_140404A6C[float_word_4 + 280651987])
        - 0.25;
    squared_length = (float)((float)(state_address_3 * state_address_3) + (float)(*(float *)&float_word_5 * *(float *)&float_word_5))
        + (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]);
    *(float *)&float_word_5 = sub_14023F704(*(float *)&float_word_5, -SR_VEC_LANES(128, vector_result, f32)[0]);
    SR_VEC_LANES(128, saved_vector_result_2, f32)[0] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] * SR_VEC_LANES(128, vector_result, f32)[0]) + scaled_value;
    saved_float_word = float_word_5;
    vector_result_2 = sub_14023EDE4((float)-state_address_3, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(saved_vector_result_2)), f64)[0]);
    HIDWORD(saved_vector_result) = 0;
    *(float *)&saved_vector_result = vector_result_2;
    if ( dword_140404A6C[player_record_offset_2 + 71859140] == 1
      && (dword_140404A6C[player_record_offset_2 + 71856296] = 1065353216, dword_140404A6C[player_record_offset_2 + 71859140] == 1)
      || squared_length >= 1024.0 )
    {
      if ( squared_length >= 4096.0 )
      {
LABEL_70:
        weighted_sum_3 = *(float *)&dword_140404A6C[player_record_offset_2 + 71856297];
        state_address_5 = (float)(*(float *)&dword_140404A6C[float_word_4 + 280651365] + *(float *)&dword_140404A6C[float_word_4 + 280651341]) + weighted_sum_3;
        if ( state_address_5 < -3.14159265359 )
          state_address_5 = state_address_5 + 6.28318530718;
        if ( state_address_5 > 3.14159265359 )
          state_address_5 = state_address_5 - 6.28318530718;
        *(float *)&dword_140404A6C[player_record_offset_2 + 71856297] = (float)(SR_VEC_READ_LANES(128, sr_math_angle_difference(saved_float_word, state_address_5), f32)[0] * 0.5) + weighted_sum_3;
        *(float *)&dword_140404A6C[player_record_offset_2 + 71856298] = (float)((float)(*(float *)&saved_vector_result
                                                                  - *(float *)&dword_140404A6C[player_record_offset_2 + 71856298])
                                                          * 0.0625)
                                                  + *(float *)&dword_140404A6C[player_record_offset_2 + 71856298];
        comparison_result = (int)dword_140404A6C[player_record_offset_2 + 71859668] <= 0;
        dword_140404A6C[player_record_offset_2 + 71856330] = 1;
        if ( !comparison_result && *(float *)&dword_140404A6C[player_record_offset_2 + 71859674] > 8.0 )
          dword_140404A6C[player_record_offset_2 + 71856330] = 0;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
    }
    else
    {
      dword_140404A6C[player_record_offset_2 + 71856296] = 0;
    }
    if ( fabs(SR_VEC_READ_LANES(128, sr_math_angle_difference(saved_float_word, *(float *)&dword_140404A6C[float_word_4 + 280651341]), f32)[0]) < 0.125
      && fabs(SR_VEC_READ_LANES(128, sr_math_angle_difference(saved_vector_result, *(float *)&dword_140404A6C[player_record_offset_2 + 71856298]), f32)[0]) < 0.125 )
    {
      state_address_4 = (float *)&g_18329E8DC;
      weighted_sum = *(float *)&dword_140404A6C[float_word_4 + 280652159] * 64.0;
      weighted_sum_2 = *(float *)&dword_140404A6C[float_word_4 + 280652158] * 64.0;
      iteration_count_2 = 0;
      product_difference = *(float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + float_word_4 * 4 + 1126821924) - (float)(*(float *)&dword_140404A6C[float_word_4 + 280652157] * 64.0);
      unused_written_slot = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + float_word_4 * 4 + 1126821924) - weighted_sum_2;
      unused_written_slot_2 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + float_word_4 * 4 + 1126821924) - weighted_sum;
      while ( 1 )
      {
        if ( *((_DWORD *)state_address_4 - 373) )
        {
          if ( iteration_count_2 != (_DWORD)float_word_3 )
          {
            loaded_word = *((int *)state_address_4 - 371);
            if ( (_DWORD)loaded_word != -1
              && dword_140404A6C[3597 * loaded_word + 71856286] == dword_140404A6C[player_record_offset_2 + 71856286]
              && (float)((float)((float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651675] - *(state_address_4 - 1))
                                       * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651675] - *(state_address_4 - 1)))
                               + (float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651674] - *(state_address_4 - 2))
                                       * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651674] - *(state_address_4 - 2))))
                       + (float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651676] - *state_address_4)
                               * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651676] - *state_address_4))) < 16384.0
              && sub_1400DB060(iteration_count_2, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + float_word_4 * 4 + 1126821924), &product_difference, 0.25) )
            {
              break;
            }
          }
        }
        ++iteration_count_2;
        state_address_4 += 7166;
        if ( iteration_count_2 >= 256 )
        {
          if ( (int)dword_140404A6C[float_word_4 + 280658139] > 0
            && (int)dword_140404A6C[1760 * dword_140404A6C[float_word_4 + 280658140] + 278845974] > 0
            && (rand() & 3) == 0 )
          {
            dword_140404A6C[player_record_offset_2 + 71856325] |= 1u;
          }
          goto LABEL_70;
        }
      }
    }
    goto LABEL_70;
  }
  comparison_result_2 = dword_140404A6C[float_word_4 + 280651314] == 0;
  dword_140404A6C[player_record_offset_2 + 71856339] = 2;
  if ( comparison_result_2 )
  {
    if ( game_state == 1 )
    {
      dword_140404A6C[player_record_offset_2 + 71856296] = -1082130432;
    }
    else
    {
      scaled_index_6 = 5210 * table_value;
      scaled_index_7 = (int)dword_140404A6C[5210 * table_value + 129720183];
      if ( (_DWORD)scaled_index_7 != -1 )
      {
        dword_140404A6C[383 * scaled_index_7 + 132400669] = 1;
        sub_140009E30(scaled_index_7);
        weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_6 + 129716744] * *(float *)&dword_140404A6C[scaled_index_6 + 129716732];
        table_value_5 = (int)dword_140404A6C[scaled_index_6 + 129720183];
        weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_6 + 129716745] * *(float *)&dword_140404A6C[scaled_index_6 + 129716733];
        dword_140404A6C[player_record_offset_2 + 71856293] = 0x40000000;
        weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_6 + 129716746] * *(float *)&dword_140404A6C[scaled_index_6 + 129716734];
        dword_140404A6C[player_record_offset_2 + 71856295] = -1082130432;
        weighted_sum_7 = *(float *)&dword_140404A6C[383 * table_value_5 + 132400658];
        float_word_6 = dword_140404A6C[383 * table_value_5 + 132400657];
        dword_140404A6C[player_record_offset_2 + 71856294] = float_word_6;
        weighted_sum_8 = (float)((float)(weighted_sum_5 + weighted_sum_4) + (float)(weighted_sum_6 + weighted_sum_7)) * 8.0;
        if ( weighted_sum_8 > 1.0 )
          weighted_sum_8 = 1.0;
        *(float *)&dword_140404A6C[player_record_offset_2 + 71856296] = weighted_sum_8 / (float)(fabs(*(float *)&float_word_6) + 1.0);
        if ( weighted_sum_7 < 0.050000001 )
          dword_140404A6C[player_record_offset_2 + 71856296] = -1082130432;
        scaled_index_8 = dword_140404A6C[383 * table_value_5 + 132401001];
        dword_140404A6C[player_record_offset_2 + 71856325] = 0;
        if ( scaled_index_8 >= 180 )
        {
          dword_140404A6C[player_record_offset_2 + 71856296] = 1065353216;
          *(_QWORD *)&dword_140404A6C[player_record_offset_2 + 71856293] = 0x40000000;
          dword_140404A6C[player_record_offset_2 + 71856295] = 1065353216;
          if ( scaled_index_8 >= 280 )
            dword_140404A6C[player_record_offset_2 + 71856296] = -1082130432;
        }
      }
    }
  }
  else
  {
    sub_140008440(a1, float_word_3);
    table_value_6 = dword_140404A6C[float_word_4 + 280651314];
    LODWORD(vector_result_3) = 0;
    LODWORD(float_word_7) = 0;
    if ( table_value_6 == 1 )
    {
      LODWORD(float_word_7) = 1061752795;
    }
    else if ( ((table_value_6 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((table_value_6 - 3) & 0xFFFFFFFD) == 0 )
        LODWORD(float_word_7) = 1075235812;
    }
    else
    {
      LODWORD(float_word_7) = -1072247836;
    }
    if ( (int)dword_140404A6C[player_record_offset_2 + 71859668] > 0 )
    {
      scaled_index_9 = player_record_offset_2 * 4 + 24LL * (int)dword_140404A6C[player_record_offset_2 + 71859669];
      if ( *(float *)((char *)&g_1516241D4 + scaled_index_9) > 8.0 )
      {
        vector_result_4 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&g_1516241CC + scaled_index_9))));
        combined_products_3 = *(float *)((char *)&g_1516241C8 + scaled_index_9) - *(float *)&dword_140404A6C[float_word_4 + 280652142];
        combined_products_4 = *(float *)((char *)&g_1516241D0 + scaled_index_9) - *(float *)&dword_140404A6C[float_word_4 + 280652144];
        SR_VEC_LANES(128, vector_result_4, f32)[0] = (float)(SR_VEC_LANES(128, vector_result_4, f32)[0] - *(float *)&dword_140404A6C[float_word_4 + 280652143]) - 0.25;
        squared_value_2 = (float)((float)(SR_VEC_LANES(128, vector_result_4, f32)[0] * SR_VEC_LANES(128, vector_result_4, f32)[0]) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products_4 * combined_products_4);
        square_root_2 = fsqrt(squared_value_2);
        if ( square_root_2 == 0.0 )
        {
          scaled_ratio_3 = 0.0;
          vector_result_4 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
          scaled_ratio_4 = 0.0;
        }
        else
        {
          SR_VEC_LANES(128, vector_result_4, f32)[0] = SR_VEC_LANES(128, vector_result_4, f32)[0] * (float)(1.0 / square_root_2);
          scaled_ratio_3 = (float)(1.0 / square_root_2) * combined_products_3;
          scaled_ratio_4 = (float)(1.0 / square_root_2) * combined_products_4;
        }
        saved_vector_result_3 = vector_result_4;
        weighted_sum_9 = (float)((float)(SR_VEC_LANES(128, vector_result_4, f32)[0] * *(float *)&dword_140404A6C[5210 * table_value + 129716727])
                    + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[5210 * table_value + 129716726]))
            + (float)(scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * table_value + 129716728]);
        HIDWORD(float_word_8) = SR_VEC_LANES(128, vector_result_4, i32)[1];
        SR_VEC_LANES(128, saved_vector_result_3, f32)[0] = (float)((float)(SR_VEC_LANES(128, vector_result_4, f32)[0] * *(float *)&dword_140404A6C[5210 * table_value + 129716733])
                                + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[5210 * table_value + 129716732]))
                        + (float)(scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * table_value + 129716734]);
        *(float *)&float_word_8 = sub_14023F704(weighted_sum_9, -SR_VEC_LANES(128, saved_vector_result_3, f32)[0]);
        float_word_7 = float_word_8;
        SR_VEC_LANES(128, saved_vector_result_3, f32)[0] = (float)(SR_VEC_LANES(128, saved_vector_result_3, f32)[0] * SR_VEC_LANES(128, saved_vector_result_3, f32)[0]) + (float)(weighted_sum_9 * weighted_sum_9);
        HIDWORD(vector_result_3) = 0;
        *(float *)&vector_result_3 = sub_14023EDE4(
                           (float)-(float)((float)((float)(SR_VEC_LANES(128, vector_result_4, f32)[0]
                                                         * *(float *)&dword_140404A6C[5210 * table_value + 129716730])
                                                 + (float)(scaled_ratio_3 * *(float *)&dword_140404A6C[5210 * table_value + 129716729]))
                                         + (float)(scaled_ratio_4 * *(float *)&dword_140404A6C[5210 * table_value + 129716731])),
                           SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(saved_vector_result_3)), f64)[0]);
        if ( squared_value_2 < 1024.0
          && fabs(SR_VEC_READ_LANES(128, sr_math_angle_difference(float_word_7, *(float *)&dword_140404A6C[player_record_offset_2 + 71856297]), f32)[0]) < 0.125
          && fabs(SR_VEC_READ_LANES(128, sr_math_angle_difference(vector_result_3, *(float *)&dword_140404A6C[player_record_offset_2 + 71856298]), f32)[0]) < 0.125 )
        {
          scaled_index_10 = 1760LL * (int)dword_140404A6C[1760 * dword_140404A6C[float_word_4 + 280658140] + 278845907];
          weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_10 + 278845941];
          weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_10 + 278845940];
          weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index_10 + 278845942];
          if ( (float)((float)((float)(scaled_ratio_3 * weighted_sum_11) + (float)(SR_VEC_LANES(128, vector_result_4, f32)[0] * weighted_sum_10)) + (float)(scaled_ratio_4 * weighted_sum_12)) < -0.9975 )
          {
            state_address_6 = (float *)&g_18329E8DC;
            combined_products_5 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_10 * 4 + 1119597020);
            iteration_count_3 = 0;
            product_difference = *combined_products_5 - (float)(weighted_sum_11 * 64.0);
            unused_written_slot = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + scaled_index_10 * 4 + 1119597020) - (float)(weighted_sum_10 * 64.0);
            unused_written_slot_2 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + scaled_index_10 * 4 + 1119597020) - (float)(weighted_sum_12 * 64.0);
            while ( 1 )
            {
              if ( *((_DWORD *)state_address_6 - 373) )
              {
                if ( remaining_count != float_word_3 )
                {
                  loaded_word_2 = *((int *)state_address_6 - 371);
                  if ( (_DWORD)loaded_word_2 != -1
                    && dword_140404A6C[3597 * loaded_word_2 + 71856286] == dword_140404A6C[player_record_offset_2 + 71856286]
                    && (float)((float)((float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651675] - *(state_address_6 - 1))
                                             * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651675] - *(state_address_6 - 1)))
                                     + (float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651674] - *(state_address_6 - 2))
                                             * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651674] - *(state_address_6 - 2))))
                             + (float)((float)(*(float *)&dword_140404A6C[float_word_4 + 280651676] - *state_address_6)
                                     * (float)(*(float *)&dword_140404A6C[float_word_4 + 280651676] - *state_address_6))) < 4096.0
                    && sub_1400DB060(iteration_count_3, combined_products_5, &product_difference, 0.25) )
                  {
                    break;
                  }
                }
              }
              ++iteration_count_3;
              ++remaining_count;
              state_address_6 += 7166;
              if ( iteration_count_3 >= 256 )
              {
                if ( (!(unsigned int)sub_1400DC940(table_value, combined_products_5, &product_difference, 0)
                   || g_151A848B0 == -1
                   || g_151A848AC == 1)
                  && (int)dword_140404A6C[float_word_4 + 280658139] > 0
                  && (int)dword_140404A6C[1760 * dword_140404A6C[float_word_4 + 280658140] + 278845974] > 0 )
                {
                  dword_140404A6C[player_record_offset_2 + 71856325] |= 1u;
                }
                break;
              }
            }
          }
        }
      }
    }
    weighted_sum_13 = *(float *)&dword_140404A6C[player_record_offset_2 + 71856298];
    *(float *)&dword_140404A6C[player_record_offset_2 + 71856297] = (float)((float)(*(float *)&float_word_7
                                                              - *(float *)&dword_140404A6C[player_record_offset_2 + 71856297])
                                                      * 0.0625)
                                              + *(float *)&dword_140404A6C[player_record_offset_2 + 71856297];
    *(float *)&dword_140404A6C[player_record_offset_2 + 71856298] = (float)((float)(*(float *)&vector_result_3 - weighted_sum_13) * 0.0625) + weighted_sum_13;
  }
  if ( (int)dword_140404A6C[5210 * table_value + 129716712] > 0 )
  {
    dword_140404A6C[player_record_offset_2 + 71859667] = 0;
  }
  else if ( (int)++dword_140404A6C[player_record_offset_2 + 71859667] >= 180 )
  {
    dword_140404A6C[player_record_offset_2 + 71856325] |= 0x800u;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef input_value
#undef product_difference
#undef unused_written_slot
#undef unused_written_slot_2
#undef matrix
#undef unused_written_slot_3
#undef unused_frame_slot_104

//----- (000000014011B2A0) ----------------------------------------------------
void sub_14011B2A0()
{
  unsigned int state_word;
  unsigned int *state_address;
  int cached_game_state_time;
  unsigned int *state_address_2;
  unsigned int state_word_2;
  unsigned int cached_game_type;
  __int64 remaining_count;
  int iteration_count;
  int scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  bool comparison_result;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int *running_total;
  int table_value;
  unsigned int *state_address_3;
  int scaled_index_7;
  unsigned int *buffer_cursor;
  unsigned int *buffer_cursor_2;
  __int64 remaining_count_2;
  __int64 scaled_index_8;
  __int64 table_value_2;
  unsigned int option_flags;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  unsigned int scaled_index_11;
  unsigned int scaled_index_12;
  __int64 scaled_index_13;
  int state_address_4;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  int scaled_index_17;
  __int64 scaled_index_18;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B2A0[16];
#define integer_difference (*(__int64 (*))(void *)(sr_frame_14011B2A0 + 0)) /* [rsp+30h] */

  state_word = g_183F7A604;
  state_address = (unsigned int *)&g_151620DB8;
  cached_game_state_time = game_state_time;
  state_address_2 = &g_151620D24;
  state_word_2 = g_183EBFCB0;
  cached_game_type = game_type;
  remaining_count = 256;
  iteration_count = 0;
  integer_difference = 256;
  do
  {
    if ( !*(state_address - 86) )
      goto LABEL_48;
    scaled_index = *(state_address - 48);
    if ( scaled_index > 0 )
      *(state_address - 48) = scaled_index - 1;
    scaled_index_2 = (int)*(state_address - 47);
    if ( (_DWORD)scaled_index_2 != -1 )
    {
      scaled_index_3 = 7166 * scaled_index_2;
      scaled_index_4 = (int)*(state_address - 47);
      comparison_result = dword_140404A6C[7166 * scaled_index_2 + 280651313] == -1;
      dword_140404A6C[7166 * scaled_index_2 + 280651307] = *(state_address - 51);
      if ( !comparison_result )
        goto LABEL_13;
      if ( *state_address == 1 )
      {
        scaled_index_5 = 7166 * scaled_index_4;
        dword_140404A6C[scaled_index_5 + 280651377] = *(state_address_2 - 9);
        dword_140404A6C[scaled_index_5 + 280651378] = *(state_address_2 - 8);
        dword_140404A6C[scaled_index_5 + 280651379] = *(state_address_2 - 7);
        dword_140404A6C[scaled_index_5 + 280651380] = *(state_address_2 - 6);
        dword_140404A6C[scaled_index_5 + 280651381] = *(state_address_2 - 5);
        dword_140404A6C[scaled_index_5 + 280651382] = *(state_address_2 - 4);
        dword_140404A6C[scaled_index_5 + 280651383] = *(state_address_2 - 3);
        dword_140404A6C[scaled_index_5 + 280651384] = *(state_address_2 - 2);
        dword_140404A6C[scaled_index_5 + 280651385] = *(state_address_2 - 1);
        dword_140404A6C[scaled_index_5 + 280651386] = *state_address_2;
        dword_140404A6C[scaled_index_5 + 280651387] = state_address_2[1];
        dword_140404A6C[scaled_index_5 + 280651388] = state_address_2[2];
        dword_140404A6C[scaled_index_5 + 280651389] = state_address_2[3];
        dword_140404A6C[scaled_index_5 + 280651390] = state_address_2[4];
        dword_140404A6C[scaled_index_5 + 280651391] = state_address_2[5];
        dword_140404A6C[scaled_index_5 + 280651392] = state_address_2[6];
        dword_140404A6C[scaled_index_5 + 280651393] = state_address_2[7];
        dword_140404A6C[scaled_index_5 + 280651394] = state_address_2[8];
        dword_140404A6C[scaled_index_5 + 280651395] = state_address_2[9];
        dword_140404A6C[scaled_index_5 + 280651396] = state_address_2[10];
        if ( cached_game_type == 7 && cached_game_state_time < (int)(60 * state_word) )
        {
          dword_140404A6C[scaled_index_3 + 280651378] = 0;
          dword_140404A6C[scaled_index_3 + 280651380] = 0;
        }
      }
      else
      {
        dword_140404A6C[scaled_index_3 + 280651381] = dword_140404A6C[scaled_index_3 + 280651341];
        dword_140404A6C[scaled_index_3 + 280651382] = dword_140404A6C[scaled_index_3 + 280651342];
      }
      if ( dword_140404A6C[scaled_index_3 + 280651313] != -1 )
      {
LABEL_13:
        if ( *state_address - 2 <= 1 )
        {
          scaled_index_6 = 7166 * scaled_index_4;
          dword_140404A6C[scaled_index_6 + 280651377] = *(state_address_2 - 9);
          dword_140404A6C[scaled_index_6 + 280651378] = *(state_address_2 - 8);
          dword_140404A6C[scaled_index_6 + 280651379] = *(state_address_2 - 7);
          dword_140404A6C[scaled_index_6 + 280651380] = *(state_address_2 - 6);
          dword_140404A6C[scaled_index_6 + 280651381] = *(state_address_2 - 5);
          dword_140404A6C[scaled_index_6 + 280651382] = *(state_address_2 - 4);
          dword_140404A6C[scaled_index_6 + 280651383] = *(state_address_2 - 3);
          dword_140404A6C[scaled_index_6 + 280651384] = *(state_address_2 - 2);
        }
      }
      dword_140404A6C[scaled_index_3 + 280651436] = *(state_address - 14);
      running_total = state_address + 1376;
      dword_140404A6C[scaled_index_3 + 280651327] = *(state_address - 9);
      table_value = dword_140404A6C[scaled_index_3 + 280651318];
      if ( table_value < 0 )
        table_value = 0;
      state_address_3 = &dword_140404A6C[scaled_index_3 + 280658140];
      state_address[1372] = table_value;
      do
      {
        scaled_index_7 = *(state_address_3 - 1);
        *(running_total - 1) = scaled_index_7;
        if ( scaled_index_7 > 0 )
        {
          buffer_cursor = running_total;
          buffer_cursor_2 = state_address_3;
          remaining_count_2 = (unsigned int)scaled_index_7;
          do
          {
            scaled_index_8 = 1760LL * (int)*buffer_cursor_2;
            table_value_2 = (int)dword_140404A6C[scaled_index_8 + 278845898];
            *buffer_cursor = table_value_2;
            option_flags = table_value_2;
            if ( (unsigned int)iteration_count < 2 )
            {
              if ( dword_140404A6C[1268 * table_value_2 + 278521289] )
              {
                if ( (int)dword_140404A6C[scaled_index_8 + 278845906] > 0 )
                {
                  option_flags = table_value_2 | 0x100;
                  scaled_index_9 = 1760LL * (int)dword_140404A6C[scaled_index_8 + 278845907];
                  *buffer_cursor = table_value_2 | 0x100;
                  if ( !dword_140404A6C[scaled_index_9 + 278845974] )
                  {
                    option_flags = table_value_2 | 0x300;
                    *buffer_cursor = table_value_2 | 0x300;
                  }
                }
              }
              if ( (_DWORD)table_value_2 == 16 && (int)dword_140404A6C[scaled_index_8 + 278845906] > 0 )
              {
                option_flags |= 0x100u;
                *buffer_cursor = option_flags;
              }
              if ( (int)dword_140404A6C[1268 * table_value_2 + 278521294] > 0 )
                *buffer_cursor = option_flags | (dword_140404A6C[scaled_index_8 + 278845974] << 8);
            }
            ++buffer_cursor_2;
            ++buffer_cursor;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
        }
        ++iteration_count;
        running_total += 9;
        state_address_3 += 10;
      }
      while ( iteration_count < 7 );
      cached_game_type = game_type;
      remaining_count = integer_difference;
      iteration_count = 0;
      state_word_2 = g_183EBFCB0;
      cached_game_state_time = game_state_time;
    }
    if ( cached_game_type == 4 )
    {
      scaled_index_10 = (int)*(state_address - 53);
      if ( (unsigned int)scaled_index_10 > 5 )
      {
        scaled_index_11 = 0;
        scaled_index_12 = 0;
      }
      else
      {
        scaled_index_11 = dword_140404A6C[5 * scaled_index_10 + 188872238];
        scaled_index_12 = dword_140404A6C[5 * scaled_index_10 + 188872237];
      }
      *(state_address - 66) = scaled_index_12;
      *(state_address - 65) = scaled_index_11;
      scaled_index_13 = (int)*(state_address - 71);
      if ( (_DWORD)scaled_index_13 == -1 )
        goto LABEL_47;
      state_address_4 = *(state_address - 67);
      if ( (unsigned int)scaled_index_10 <= 5 )
        state_address_4 = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * scaled_index_10 + 335047062] * 0.94999999)
                                 * (float)(int)*(state_address - 51))
                         + (float)state_address_4);
      scaled_index_14 = 28 * scaled_index_13;
      dword_140404A6C[scaled_index_14 + 134050374] = state_address_4;
      dword_140404A6C[scaled_index_14 + 134050375] = *(state_address - 64);
      dword_140404A6C[scaled_index_14 + 134050376] = *(state_address - 63);
      dword_140404A6C[scaled_index_14 + 134050377] = *(state_address - 48);
    }
    if ( cached_game_type == 3 && state_word_2 != 1 )
    {
      scaled_index_15 = (int)*(state_address - 71);
      if ( (_DWORD)scaled_index_15 != -1 )
      {
        scaled_index_16 = (int)*(state_address - 53);
        scaled_index_17 = *(state_address - 67);
        scaled_index_18 = 28 * scaled_index_15;
        if ( (_DWORD)scaled_index_16 == -1 )
          dword_140404A6C[scaled_index_18 + 134050374] = scaled_index_17;
        else
          dword_140404A6C[scaled_index_18 + 134050374] = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * scaled_index_16 + 335047062]
                                                                        * 0.98000002)
                                                                * (float)(int)*(state_address - 51))
                                                        + (float)scaled_index_17);
      }
    }
LABEL_47:
    state_word = g_183F7A604;
    *(state_address - 13) = *(state_address - 14);
LABEL_48:
    state_address_2 += 3597;
    state_address += 3597;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
}
#undef integer_difference

//----- (00000001401307D0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401307D0(int a1, __int64 a2)
{
  __int64 destination_text;
  __int64 record_word_offset;
  __int64 input_value;
  __int64 element_index;
  int integer_sum;
  __int8 tolower_result;
  int saved_cached_i;
  int element_index_2;
  __int64 element_index_3;
  int integer_difference;
  int integer_sum_2;
  char *text_cursor;
  char input_byte;
  unsigned __int8 *buffer_cursor;
  int masked_bits;
  int scaled_index;
  int float_word;
  int element_index_4;
  int saved_element_index;
  __int64 byte_count;
  unsigned int cached_world_event_count;
  unsigned int cached_game_tick;
  __int64 shifted_bits;
  int iteration_count;
  int saved_iteration_count;
  __int64 scaled_index_2;
  __int64 table_value;
  __int64 byte_count_2;
  unsigned int cached_game_tick_2;
  unsigned int cached_world_event_count_2;
  __int64 shifted_bits_2;
  int iteration_count_2;
  int integer_sum_3;
  __int64 scaled_index_3;
  __int64 byte_count_3;
  unsigned int cached_game_tick_3;
  unsigned int cached_world_event_count_3;
  __int64 shifted_bits_3;
  int iteration_count_3;
  int integer_sum_4;
  __int64 scaled_index_4;
  __int64 byte_count_4;
  unsigned int cached_game_tick_4;
  unsigned int cached_world_event_count_4;
  __int64 shifted_bits_4;
  int iteration_count_4;
  int integer_sum_5;
  __int64 scaled_index_5;
  __int64 byte_count_5;
  unsigned int cached_game_tick_5;
  unsigned int cached_world_event_count_5;
  __int64 shifted_bits_5;
  int iteration_count_5;
  int integer_sum_6;
  __int64 scaled_index_6;
  __int64 byte_count_6;
  unsigned int cached_game_tick_6;
  unsigned int cached_world_event_count_6;
  __int64 shifted_bits_6;
  __int8 *buffer_cursor_2;
  __int8 loaded_word;
  unsigned int saved_cached_i_2;
  __int64 byte_count_7;
  unsigned int cached_world_event_count_7;
  unsigned int cached_game_tick_7;
  __int64 shifted_bits_7;
  bool comparison_result;
  unsigned int cached_game_tick_8;
  unsigned int cached_world_event_count_8;
  __int64 shifted_bits_8;
  unsigned int cached_game_tick_9;
  __int64 masked_bits_2;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  __int64 masked_bits_3;
  float weighted_sum_3;
  float weighted_sum_4;
  float combined_products_2;
  __int64 masked_bits_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float combined_products_3;
  __int64 masked_bits_5;
  float weighted_sum_7;
  float weighted_sum_8;
  float combined_products_4;
  __int64 masked_bits_6;
  float weighted_sum_9;
  float weighted_sum_10;
  float combined_products_5;
  __int64 masked_bits_7;
  float weighted_sum_11;
  float weighted_sum_12;
  float combined_products_6;
  int i;
  __int64 scaled_index_7;
  __int64 table_value_2;
  __int64 masked_bits_8;
  signed int createitem_result;
  int human;
  __int64 scaled_index_8;
  __int8 *buffer_cursor_3;
  int selection_code;
  __int8 loaded_word_2;
  __int64 human_2;
  signed int createitem_result_2;
  signed int createitem_result_3;
  __int64 scaled_index_9;
  __int8 *buffer_cursor_4;
  __int8 loaded_word_3;
  unsigned int state_word;
  __int64 byte_count_8;
  unsigned int cached_game_tick_10;
  unsigned int cached_world_event_count_9;
  __int64 shifted_bits_9;
  char loaded_word_4;
  unsigned int *state_address;
  __int8 *buffer_cursor_5;
  __int8 loaded_word_5;
  int element_index_5;
  __int8 *buffer_cursor_6;
  __int64 j;
  __int8 table_value_3;
  int element_index_6;
  unsigned int *state_address_2;
  __int8 *buffer_cursor_7;
  __int8 loaded_word_6;
  __int64 element_index_7;
  __int8 table_value_4;
  __int64 element_index_8;
  int call_result;
  int iteration_count_6;
  unsigned int *state_address_3;
  __int8 *buffer_cursor_8;
  __int8 loaded_word_7;
  __int64 element_index_9;
  __int8 table_value_5;
  __int64 element_index_10;
  int call_result_2;
  int iteration_count_7;
  __int8 *buffer_cursor_9;
  __int8 loaded_word_8;
  __int64 scaled_index_10;
  __int64 byte_count_9;
  unsigned int cached_game_tick_11;
  unsigned int cached_world_event_count_10;
  __int64 shifted_bits_10;
  unsigned int cached_game_tick_12;
  __int64 shifted_bits_11;
  int saved_element_index_2;
  int element_index_11;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  unsigned __int8 *buffer_cursor_10;
  char *state_address_4;
  int table_value_6;
  int scaled_index_13;
  unsigned int state_word_2;
  __int64 scaled_index_14;
  __m128i loaded_word_9;
  __m128i loaded_word_10;
  __m128i loaded_word_11;
  __int64 byte_count_10;
  unsigned int cached_game_tick_13;
  unsigned int cached_world_event_count_11;
  __int64 shifted_bits_12;
  int strncmp_sr_result;
  unsigned int state_word_3;
  __int64 byte_count_11;
  unsigned int cached_game_tick_14;
  unsigned int cached_world_event_count_12;
  __int64 shifted_bits_13;
  int call_result_3;
  int iteration_count_8;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 byte_count_12;
  unsigned int cached_world_event_count_13;
  unsigned int cached_game_tick_15;
  __int64 shifted_bits_14;
  unsigned int call_result_4;
  int element_index_12;
  __int64 scaled_index_17;
  __int64 byte_count_13;
  unsigned int cached_game_tick_16;
  unsigned int cached_world_event_count_14;
  __int64 shifted_bits_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401307D0[912];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_1401307D0 + 32)) /* [rsp+20h] */
#define cached_i (*(int (*))(void *)(sr_frame_1401307D0 + 48)) /* [rsp+30h] */
#define masked_bits_9 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 56)) /* [rsp+38h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_1401307D0 + 64)) /* [rsp+40h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_1401307D0 + 72)) /* [rsp+48h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 80)) /* [rsp+50h] */
#define cached_xmmword_140278d30 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 88)) /* [rsp+58h] */
#define unused_written_slot_2 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 104)) /* [rsp+68h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401307D0 + 120)) /* [rsp+78h] */
#define source_buffer (*(__m128i (*)[16])(void *)(sr_frame_1401307D0 + 128)) /* [rsp+80h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_1401307D0 + 384)) /* [rsp+180h] */
#define unused_frame_slot_896 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 896)) /* [rsp+380h] */

  destination_text = a2;
  masked_bits_9 = a2;
  if ( a1 == -1 )
    return 0; /* 0x140130805: xor eax, eax */
  record_word_offset = 14388LL * a1;
  input_value = a1;
  input_value_2 = a1;
  saved_record_word_offset = record_word_offset;
  if ( *(int *)((char *)&g_151620CA0 + record_word_offset) > 0 )
    return 1; /* 0x140130858: jg -> mov eax, 1 */
  *(_BYTE *)(a2 + 63) = 0;
  element_index = -1;
  do
    ++element_index;
  while ( *(_BYTE *)(a2 + element_index) );
  integer_sum = 0;
  cached_i = 0;
  if ( (int)element_index <= 63 )
  {
    if ( (int)element_index <= 0 )
      goto LABEL_9;
  }
  else
  {
    LODWORD(element_index) = 63;
  }
  do
  {
    tolower_result = tolower(*(char *)(integer_sum + destination_text));
    saved_cached_i = cached_i;
    SR_VEC_LANES(128, source_buffer[0], i8)[cached_i] = tolower_result;
    integer_sum = saved_cached_i + 1;
    cached_i = integer_sum;
  }
  while ( integer_sum < (int)element_index );
LABEL_9:
  if ( (unsigned __int64)(int)element_index >= 0x100 )
    sub_1401F8694();
  element_index_2 = 0;
  SR_VEC_LANES(128, source_buffer[0], i8)[(int)element_index] = 0;
  cached_i = 0;
  *((_BYTE *)&g_151624438 + record_word_offset) = 0;
  element_index_3 = -1;
  do
    ++element_index_3;
  while ( SR_VEC_LANES(128, source_buffer[0], i8)[element_index_3] );
  integer_difference = element_index_3 - 5;
  if ( integer_difference > 0 )
  {
    integer_sum_2 = 0;
    do
    {
      if ( SR_VEC_LANES(128, source_buffer[0], i8)[integer_sum_2] == 110
        && SR_VEC_LANES(128, source_buffer[0], i8)[element_index_2 + 1] == 105
        && SR_VEC_LANES(128, source_buffer[0], i8)[element_index_2 + 2] == 103
        && SR_VEC_LANES(128, source_buffer[0], i8)[element_index_2 + 3] == 103
        && SR_VEC_LANES(128, source_buffer[0], i8)[element_index_2 + 4] == 101
        && SR_VEC_LANES(128, source_buffer[0], i8)[element_index_2 + 5] == 114 )
      {
        text_cursor = (char *)destination_text;
        do
        {
          input_byte = *text_cursor;
          text_cursor[(_QWORD)&g_151624438 + record_word_offset - destination_text] = *text_cursor;
          ++text_cursor;
        }
        while ( input_byte );
        strcpy((char *)destination_text, "i'm an idiot");
      }
      integer_sum_2 = ++element_index_2;
    }
    while ( element_index_2 < integer_difference );
    cached_i = element_index_2;
  }
  if ( *(_BYTE *)destination_text != 47 )
    return 0; /* 0x1401309A7: jne -> xor eax, eax */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/admin "), 7) && (int)++*(unsigned int *)((char *)&g_151620C98 + record_word_offset) < 5 )
  {
    if ( LOBYTE(g_151E45D4C) )
    {
      buffer_cursor = (unsigned __int8 *)(destination_text + 7);
      do
      {
        masked_bits = *((unsigned __int8 *)&g_151E45D44 + (_QWORD)buffer_cursor - destination_text + 1);
        scaled_index = *buffer_cursor - masked_bits;
        if ( scaled_index )
          break;
        ++buffer_cursor;
      }
      while ( masked_bits );
      if ( !scaled_index )
      {
        float_word = -1;
        cached_i = 0;
        if ( (int)item_link_peer_count > 0 )
        {
          element_index_4 = 0;
          do
          {
            saved_element_index = element_index_4;
            if ( dword_140404A6C[47224 * element_index_4 + 438887411] != a1 )
              saved_element_index = float_word;
            ++element_index_4;
            float_word = saved_element_index;
          }
          while ( element_index_4 < (int)item_link_peer_count );
          cached_i = element_index_4;
        }
        *(unsigned int *)((char *)&g_151620C94 + record_word_offset) = 1;
        if ( float_word != -1 )
          dword_140404A6C[47224 * float_word + 438887410] = 1;
        crt_sprintf(source_buffer, "%s admin", (     char *)&g_151620C64 + record_word_offset);
        if ( game_connected )
        {
          byte_count = -1;
          do
            ++byte_count;
          while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count] );
          cached_world_event_count = world_event_count;
          if ( (int)byte_count > 63 )
            LODWORD(byte_count) = 63;
          cached_game_tick = game_tick;
          shifted_bits = (__int64)(int)world_event_count << 7;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) = 2;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits) = cached_game_tick;
          crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits), source_buffer, (int)byte_count);
          world_event_count = cached_world_event_count + 1;
          *((_BYTE *)&g_1873DE4A0 + (int)byte_count + shifted_bits) = 0;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = byte_count;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = 4;
          *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = -1;
          *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = 0;
        }
      }
    }
  }
  if ( !*(unsigned int *)((char *)&g_151620C94 + record_word_offset) )
    return 1; /* 0x140130B6A: je -> mov eax, 1 */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/hlist"), 6) )
  {
    iteration_count = 0;
    cached_i = 0;
    saved_iteration_count = 0;
    do
    {
      scaled_index_2 = 7166LL * saved_iteration_count;
      if ( dword_140404A6C[scaled_index_2 + 280651303] )
      {
        table_value = (int)dword_140404A6C[scaled_index_2 + 280651305];
        if ( (_DWORD)table_value == -1 )
          crt_sprintf(source_buffer, "%d:%d", iteration_count, -1);
        else
          crt_sprintf(source_buffer, "%d:%d %s", iteration_count, table_value, (     char *)&dword_140404A6C[3597 * table_value + 71856254]);
        if ( game_connected )
        {
          byte_count_2 = -1;
          do
            ++byte_count_2;
          while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_2] );
          cached_game_tick_2 = game_tick;
          cached_world_event_count_2 = world_event_count;
          if ( (int)byte_count_2 > 63 )
            LODWORD(byte_count_2) = 63;
          shifted_bits_2 = (__int64)(int)world_event_count << 7;
          *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_2) = 2;
          *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_2) = cached_game_tick_2;
          crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_2), source_buffer, (int)byte_count_2);
          *((_BYTE *)&g_1873DE4A0 + (int)byte_count_2 + shifted_bits_2) = 0;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_2) = byte_count_2;
          world_event_count = cached_world_event_count_2 + 1;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_2) = 4;
          *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_2) = -1;
          *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_2) = 0;
          HIWORD(world_event_count) = 0;
        }
        iteration_count = cached_i;
      }
      cached_i = ++iteration_count;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < 10 );
    destination_text = masked_bits_9;
    record_word_offset = saved_record_word_offset;
    input_value = input_value_2;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/list1"), 6) )
  {
    iteration_count_2 = 0;
    cached_i = 0;
    if ( (int)item_link_peer_count > 0 )
    {
      integer_sum_3 = 0;
      do
      {
        if ( integer_sum_3 < 10 )
        {
          scaled_index_3 = (int)dword_140404A6C[47224 * integer_sum_3 + 438887411];
          if ( (_DWORD)scaled_index_3 != -1 )
          {
            crt_sprintf(
              source_buffer,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * scaled_index_3 + 71856254],
              dword_140404A6C[3597 * scaled_index_3 + 71856265]);
            if ( game_connected )
            {
              byte_count_3 = -1;
              do
                ++byte_count_3;
              while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_3] );
              cached_game_tick_3 = game_tick;
              cached_world_event_count_3 = world_event_count;
              if ( (int)byte_count_3 > 63 )
                LODWORD(byte_count_3) = 63;
              shifted_bits_3 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_3) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_3) = cached_game_tick_3;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_3), source_buffer, (int)byte_count_3);
              *((_BYTE *)&g_1873DE4A0 + (int)byte_count_3 + shifted_bits_3) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_3) = byte_count_3;
              world_event_count = cached_world_event_count_3 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_3) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_3) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_3) = 0;
              HIWORD(world_event_count) = 0;
            }
            iteration_count_2 = cached_i;
          }
        }
        integer_sum_3 = ++iteration_count_2;
        cached_i = iteration_count_2;
      }
      while ( iteration_count_2 < (int)item_link_peer_count );
      record_word_offset = saved_record_word_offset;
      input_value = input_value_2;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/list2"), 6) )
  {
    iteration_count_3 = 10;
    cached_i = 10;
    if ( (int)item_link_peer_count > 10 )
    {
      integer_sum_4 = 10;
      do
      {
        if ( integer_sum_4 < 20 )
        {
          scaled_index_4 = (int)dword_140404A6C[47224 * integer_sum_4 + 438887411];
          if ( (_DWORD)scaled_index_4 != -1 )
          {
            crt_sprintf(
              source_buffer,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * scaled_index_4 + 71856254],
              dword_140404A6C[3597 * scaled_index_4 + 71856265]);
            if ( game_connected )
            {
              byte_count_4 = -1;
              do
                ++byte_count_4;
              while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_4] );
              cached_game_tick_4 = game_tick;
              cached_world_event_count_4 = world_event_count;
              if ( (int)byte_count_4 > 63 )
                LODWORD(byte_count_4) = 63;
              shifted_bits_4 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_4) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_4) = cached_game_tick_4;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_4), source_buffer, (int)byte_count_4);
              *((_BYTE *)&g_1873DE4A0 + (int)byte_count_4 + shifted_bits_4) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_4) = byte_count_4;
              world_event_count = cached_world_event_count_4 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_4) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_4) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_4) = 0;
              HIWORD(world_event_count) = 0;
            }
            iteration_count_3 = cached_i;
          }
        }
        integer_sum_4 = ++iteration_count_3;
        cached_i = iteration_count_3;
      }
      while ( iteration_count_3 < (int)item_link_peer_count );
      record_word_offset = saved_record_word_offset;
      input_value = input_value_2;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/list3"), 6) )
  {
    iteration_count_4 = 20;
    cached_i = 20;
    if ( (int)item_link_peer_count > 20 )
    {
      integer_sum_5 = 20;
      do
      {
        if ( integer_sum_5 < 30 )
        {
          scaled_index_5 = (int)dword_140404A6C[47224 * integer_sum_5 + 438887411];
          if ( (_DWORD)scaled_index_5 != -1 )
          {
            crt_sprintf(
              source_buffer,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * scaled_index_5 + 71856254],
              dword_140404A6C[3597 * scaled_index_5 + 71856265]);
            if ( game_connected )
            {
              byte_count_5 = -1;
              do
                ++byte_count_5;
              while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_5] );
              cached_game_tick_5 = game_tick;
              cached_world_event_count_5 = world_event_count;
              if ( (int)byte_count_5 > 63 )
                LODWORD(byte_count_5) = 63;
              shifted_bits_5 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_5) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_5) = cached_game_tick_5;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_5), source_buffer, (int)byte_count_5);
              *((_BYTE *)&g_1873DE4A0 + (int)byte_count_5 + shifted_bits_5) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_5) = byte_count_5;
              world_event_count = cached_world_event_count_5 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_5) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_5) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_5) = 0;
              HIWORD(world_event_count) = 0;
            }
            iteration_count_4 = cached_i;
          }
        }
        integer_sum_5 = ++iteration_count_4;
        cached_i = iteration_count_4;
      }
      while ( iteration_count_4 < (int)item_link_peer_count );
      record_word_offset = saved_record_word_offset;
      input_value = input_value_2;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/list4"), 6) )
  {
    iteration_count_5 = 30;
    cached_i = 30;
    if ( (int)item_link_peer_count > 30 )
    {
      integer_sum_6 = 30;
      do
      {
        scaled_index_6 = (int)dword_140404A6C[47224 * integer_sum_6 + 438887411];
        if ( (_DWORD)scaled_index_6 != -1 )
        {
          crt_sprintf(
            source_buffer,
            "%s  %d",
            (     char *)&dword_140404A6C[3597 * scaled_index_6 + 71856254],
            dword_140404A6C[3597 * scaled_index_6 + 71856265]);
          if ( game_connected )
          {
            byte_count_6 = -1;
            do
              ++byte_count_6;
            while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_6] );
            cached_game_tick_6 = game_tick;
            cached_world_event_count_6 = world_event_count;
            if ( (int)byte_count_6 > 63 )
              LODWORD(byte_count_6) = 63;
            shifted_bits_6 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_6) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_6) = cached_game_tick_6;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_6), source_buffer, (int)byte_count_6);
            *((_BYTE *)&g_1873DE4A0 + (int)byte_count_6 + shifted_bits_6) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_6) = byte_count_6;
            world_event_count = cached_world_event_count_6 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_6) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_6) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_6) = 0;
            HIWORD(world_event_count) = 0;
          }
          iteration_count_5 = cached_i;
        }
        integer_sum_6 = ++iteration_count_5;
        cached_i = iteration_count_5;
      }
      while ( iteration_count_5 < (int)item_link_peer_count );
      record_word_offset = saved_record_word_offset;
      input_value = input_value_2;
    }
  }
  strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/traffic"), 8);
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/savereplay"), 11) )
  {
    if ( *(_BYTE *)(destination_text + 11) == 32 )
    {
      buffer_cursor_2 = (__int8 *)(destination_text + 12);
      do
      {
        loaded_word = *buffer_cursor_2;
        SR_VEC_LANES(128, source_buffer[0], i8)[(_QWORD)buffer_cursor_2 - 12 - destination_text] = *buffer_cursor_2;
        ++buffer_cursor_2;
      }
      while ( loaded_word );
      if ( !SR_VEC_LANES(128, source_buffer[0], i8)[0]
        || (unsigned int)crt_sscanf((__int64)source_buffer, "%d", &cached_i) == -1
        || (saved_cached_i_2 = cached_i, cached_i < 0) )
      {
        saved_cached_i_2 = g_144CBFAA8;
        goto LABEL_128;
      }
    }
    else
    {
      saved_cached_i_2 = g_144CBFAA8 + 1;
    }
    g_144CBFAA8 = saved_cached_i_2;
LABEL_128:
    crt_sprintf(source_buffer, "savereplay: %d", saved_cached_i_2);
    if ( game_connected )
    {
      byte_count_7 = -1;
      do
        ++byte_count_7;
      while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_7] );
      cached_world_event_count_7 = world_event_count;
      if ( (int)byte_count_7 > 63 )
        LODWORD(byte_count_7) = 63;
      cached_game_tick_7 = game_tick;
      shifted_bits_7 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_7) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_7) = cached_game_tick_7;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_7), source_buffer, (int)byte_count_7);
      world_event_count = cached_world_event_count_7 + 1;
      *((_BYTE *)&g_1873DE4A0 + (int)byte_count_7 + shifted_bits_7) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_7) = byte_count_7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_7) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_7) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_7) = 0;
    }
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/godmode"), 8) )
    goto LABEL_141;
  comparison_result = *(unsigned int *)((char *)&g_151620CC0 + record_word_offset) == 1;
  *(unsigned int *)((char *)&g_151620CC0 + record_word_offset) ^= 1u;
  if ( comparison_result )
  {
    if ( !game_connected )
      goto LABEL_141;
    cached_game_tick_9 = game_tick;
    cached_world_event_count_8 = world_event_count;
    shifted_bits_8 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_8) = 2;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_8) = cached_game_tick_9;
    *(_QWORD *)((char *)&g_1873DE4A0 + shifted_bits_8) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&g_1873DE4A8 + shifted_bits_8) = 26223;
    *(_WORD *)((char *)&g_1873DE4A8 + shifted_bits_8 + 2) = 102;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_8) = 11;
  }
  else
  {
    if ( !game_connected )
      goto LABEL_141;
    cached_game_tick_8 = game_tick;
    cached_world_event_count_8 = world_event_count;
    shifted_bits_8 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_8) = 2;
    *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_8) = cached_game_tick_8;
    *(_QWORD *)((char *)&g_1873DE4A0 + shifted_bits_8) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&g_1873DE4A8 + shifted_bits_8) = 28271;
    *((_BYTE *)&g_1873DE4A8 + shifted_bits_8 + 2) = 0;
    *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_8) = 10;
  }
  *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_8) = 4;
  world_event_count = cached_world_event_count_8 + 1;
  *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_8) = -1;
  HIWORD(world_event_count) = 0;
  *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_8) = 0;
LABEL_141:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/heli"), 5) )
  {
    masked_bits_2 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_2 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum = *(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651459] * 4.0;
      weighted_sum_2 = *(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651441] - weighted_sum;
      combined_products = *(float *)&dword_140404A6C[7166 * masked_bits_2 + 280651442] - weighted_sum_2;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products;
      sr_CreateVehicle(12, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/car"), 4) )
  {
    masked_bits_3 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_3 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum_3 = *(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651459] * 4.0;
      weighted_sum_4 = *(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651441] - weighted_sum_3;
      combined_products_2 = *(float *)&dword_140404A6C[7166 * masked_bits_3 + 280651442] - weighted_sum_4;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products_2;
      sr_CreateVehicle(0, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/beamer"), 7) )
  {
    masked_bits_4 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_4 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum_5 = *(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651459] * 4.0;
      weighted_sum_6 = *(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651441] - weighted_sum_5;
      combined_products_3 = *(float *)&dword_140404A6C[7166 * masked_bits_4 + 280651442] - weighted_sum_6;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products_3;
      sr_CreateVehicle(6, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/pickup"), 7) )
  {
    masked_bits_5 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_5 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum_7 = *(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651459] * 4.0;
      weighted_sum_8 = *(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651441] - weighted_sum_7;
      combined_products_4 = *(float *)&dword_140404A6C[7166 * masked_bits_5 + 280651442] - weighted_sum_8;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products_4;
      sr_CreateVehicle(17, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/turbo"), 6) )
  {
    masked_bits_6 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_6 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum_9 = *(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651459] * 4.0;
      weighted_sum_10 = *(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651441] - weighted_sum_9;
      combined_products_5 = *(float *)&dword_140404A6C[7166 * masked_bits_6 + 280651442] - weighted_sum_10;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products_5;
      sr_CreateVehicle(5, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/van"), 4) )
  {
    masked_bits_7 = *(int *)((char *)&g_151620CFC + record_word_offset);
    if ( (_DWORD)masked_bits_7 != -1 )
    {
      unused_written_slot_3 = 1065353216;
      LODWORD(packed_word_bits) = 1;
      weighted_sum_11 = *(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651459] * 4.0;
      weighted_sum_12 = *(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651460] * 4.0;
      *(float *)&masked_bits_9 = *(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651458] * 4.0);
      *((float *)&masked_bits_9 + 1) = *(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651441] - weighted_sum_11;
      combined_products_6 = *(float *)&dword_140404A6C[7166 * masked_bits_7 + 280651442] - weighted_sum_12;
      cached_xmmword_140278d30 = xmmword_140278D30;
      unused_written_slot_2 = xmmword_140278D30;
      unused_written_slot = combined_products_6;
      sr_CreateVehicle(7, (float *)&masked_bits_9, nullptr, (unsigned int *)&cached_xmmword_140278d30, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/phone"), 6) )
  {
    for ( i = 0; i < 1024; ++i )
    {
      scaled_index_7 = 1760LL * i;
      if ( dword_140404A6C[scaled_index_7 + 278845893]
        && dword_140404A6C[scaled_index_7 + 278845898] == 25
        && dword_140404A6C[scaled_index_7 + 278845981] == 9999 )
      {
        table_value_2 = (int)dword_140404A6C[scaled_index_7 + 278845980];
        if ( (_DWORD)table_value_2 != -1 )
        {
          dword_140404A6C[1760 * table_value_2 + 278846052] = 0;
          dword_140404A6C[1760 * dword_140404A6C[scaled_index_7 + 278845980] + 278845980] = -1;
          dword_140404A6C[1760 * dword_140404A6C[scaled_index_7 + 278845980] + 278845983] = 0;
          sr_item_phone_changed(dword_140404A6C[scaled_index_7 + 278845980]);
        }
        dword_140404A6C[scaled_index_7 + 278845900] = 0;
      }
    }
    masked_bits_8 = *(int *)((char *)&g_151620CFC + record_word_offset);
    cached_i = i;
    createitem_result = sr_CreateItem(
             25,
             (float *)&dword_140404A6C[7166 * masked_bits_8 + 280651440],
             nullptr,
             (float *)&dword_140404A6C[7166 * masked_bits_8 + 280651452]);
    human = *(unsigned int *)((char *)&g_151620CFC + record_word_offset);
    dword_140404A6C[1760 * createitem_result + 278845981] = 9999;
    sr_item_transfer(createitem_result, -1, human, 6);
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/arm"), 4) )
  {
    scaled_index_8 = 3597 * input_value;
    if ( dword_140404A6C[3597 * input_value + 71856292] != -1 )
    {
      buffer_cursor_3 = (__int8 *)(destination_text + 5);
      selection_code = 3;
      do
      {
        loaded_word_2 = *buffer_cursor_3;
        buffer_cursor_3[(_QWORD)((char *)SR_VEC_LANES(128, source_buffer[0], i64) - destination_text - 5)] = *buffer_cursor_3;
        ++buffer_cursor_3;
      }
      while ( loaded_word_2 );
      if ( SR_VEC_LANES(128, source_buffer[0], i8)[0] && (unsigned int)crt_sscanf((__int64)source_buffer, "%d", &cached_i) != -1 )
      {
        if ( cached_i == 1 )
        {
          selection_code = 1;
        }
        else if ( cached_i != 2 )
        {
          switch ( cached_i )
          {
            case 3:
              selection_code = 7;
              break;
            case 4:
              selection_code = 9;
              break;
            case 5:
              selection_code = 11;
              break;
          }
        }
      }
      sub_14012CD60(dword_140404A6C[scaled_index_8 + 71856292], selection_code, 4);
      human_2 = (int)dword_140404A6C[scaled_index_8 + 71856292];
      if ( (_DWORD)human_2 != -1 )
      {
        createitem_result_2 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * human_2 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * human_2 + 280651452]);
        sr_item_transfer(createitem_result_2, -1, human_2, 6);
        createitem_result_3 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * human_2 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * human_2 + 280651452]);
        sr_item_transfer(createitem_result_3, -1, human_2, 6);
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/cash"), 5) )
    dword_140404A6C[3597 * input_value + 71856272] += 100000;
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/kill"), 5) )
  {
    scaled_index_9 = (int)dword_140404A6C[3597 * input_value + 71856292];
    if ( (_DWORD)scaled_index_9 != -1 )
      dword_140404A6C[7166 * scaled_index_9 + 280651318] = 0;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/setmap"), 7) && *(_BYTE *)(destination_text + 7) == 32 )
  {
    buffer_cursor_4 = (__int8 *)(destination_text + 8);
    do
    {
      loaded_word_3 = *buffer_cursor_4;
      buffer_cursor_4[(_QWORD)&SR_VEC_LANES(128, source_buffer[0], i64)[-1] - destination_text] = *buffer_cursor_4;
      ++buffer_cursor_4;
    }
    while ( loaded_word_3 );
    if ( !SR_VEC_LANES(128, source_buffer[0], i8)[0] || (unsigned int)crt_sscanf((__int64)source_buffer, "%d", &cached_i) == -1 )
    {
      state_word = g_183F7A610;
    }
    else
    {
      state_word = cached_i - 1;
      if ( (unsigned int)(cached_i - 1) > 0x1F )
        state_word = 0;
      g_183F7A610 = state_word;
    }
    crt_sprintf(source_buffer, "mapnum: %d", state_word + 1);
    if ( game_connected )
    {
      byte_count_8 = -1;
      do
        ++byte_count_8;
      while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_8] );
      cached_game_tick_10 = game_tick;
      cached_world_event_count_9 = world_event_count;
      if ( (int)byte_count_8 > 63 )
        LODWORD(byte_count_8) = 63;
      shifted_bits_9 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_9) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_9) = cached_game_tick_10;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_9), source_buffer, (int)byte_count_8);
      *((_BYTE *)&g_1873DE4A0 + shifted_bits_9 + (int)byte_count_8) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_9) = byte_count_8;
      world_event_count = cached_world_event_count_9 + 1;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_9) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_9) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_9) = 0;
      HIWORD(world_event_count) = 0;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/resetgame"), 10) )
  {
    g_1AD04B218 = 1;
    if ( *(_BYTE *)(destination_text + 10) == 32 )
    {
      loaded_word_4 = *(_BYTE *)(destination_text + 11);
      if ( loaded_word_4 == 114 )
      {
        g_1AD04B21C = 3;
        g_183EBFCC4 = 5;
        loaded_word_4 = *(_BYTE *)(destination_text + 11);
      }
      if ( loaded_word_4 == 101 )
      {
        g_1AD04B21C = 5;
        loaded_word_4 = *(_BYTE *)(destination_text + 11);
      }
      if ( loaded_word_4 == 118 )
      {
        g_1AD04B21C = 7;
        g_183EBFCC4 = 5;
      }
    }
  }
  state_address = &g_160361354;
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/ban "), 5) )
  {
    buffer_cursor_5 = (__int8 *)(destination_text + 5);
    do
    {
      loaded_word_5 = *buffer_cursor_5;
      buffer_cursor_5[(_QWORD)((char *)SR_VEC_LANES(128, source_buffer[0], i64) - destination_text - 5)] = *buffer_cursor_5;
      ++buffer_cursor_5;
    }
    while ( loaded_word_5 );
    if ( SR_VEC_LANES(128, source_buffer[0], i8)[0] )
    {
      element_index_5 = 0;
      buffer_cursor_6 = scratch_buffer;
      for ( j = 0; j < 16; ++j )
      {
        table_value_3 = SR_VEC_LANES(128, source_buffer[0], i8)[j];
        if ( !table_value_3 )
          break;
        if ( (unsigned __int8)(table_value_3 - 48) <= 9u )
        {
          ++element_index_5;
          *buffer_cursor_6++ = table_value_3;
        }
      }
      if ( (unsigned __int64)element_index_5 >= 0x200 )
        sub_1401F8694();
      scratch_buffer[element_index_5] = 0;
      crt_sscanf((__int64)scratch_buffer, "%u", &saved_record_word_offset);
      element_index_6 = 0;
      if ( (int)g_160361344 > 0 )
      {
        state_address_2 = &g_160361354;
        while ( *state_address_2 != (_DWORD)saved_record_word_offset )
        {
          ++element_index_6;
          state_address_2 += 28;
          if ( element_index_6 >= (int)g_160361344 )
            goto LABEL_229;
        }
        if ( element_index_6 >= 0 && element_index_6 < (int)g_160361344 )
        {
          g_1AD04B214 = element_index_6;
          crt_sprintf(
            source_buffer,
            "%s(%d) ban?",
            (     char *)&dword_140404A6C[28 * element_index_6 + 134050365],
            dword_140404A6C[28 * element_index_6 + 134050362]);
          if ( game_connected )
          {
            byte_count_11 = -1;
            do
              ++byte_count_11;
            while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_11] );
            cached_game_tick_14 = game_tick;
            cached_world_event_count_12 = world_event_count;
            if ( (int)byte_count_11 > 63 )
              LODWORD(byte_count_11) = 63;
            shifted_bits_13 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_13) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_13) = cached_game_tick_14;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_13), source_buffer, (int)byte_count_11);
            *((_BYTE *)&g_1873DE4A0 + shifted_bits_13 + (int)byte_count_11) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_13) = byte_count_11;
            world_event_count = cached_world_event_count_12 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_13) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_13) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_13) = 0;
            HIWORD(world_event_count) = 0;
          }
        }
      }
    }
  }
LABEL_229:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/give "), 6) )
  {
    buffer_cursor_7 = (__int8 *)(destination_text + 6);
    do
    {
      loaded_word_6 = *buffer_cursor_7;
      buffer_cursor_7[(_QWORD)((char *)SR_VEC_LANES(128, source_buffer[0], i64) - destination_text - 6)] = *buffer_cursor_7;
      ++buffer_cursor_7;
    }
    while ( loaded_word_6 );
    if ( SR_VEC_LANES(128, source_buffer[0], i8)[0] )
    {
      element_index_7 = 0;
      do
      {
        table_value_4 = SR_VEC_LANES(128, source_buffer[0], i8)[element_index_7];
        *((_BYTE *)&g_1862AE028 + element_index_7++) = table_value_4;
      }
      while ( table_value_4 );
      g_1862AE020 = 0;
      element_index_8 = -1;
      do
        ++element_index_8;
      while ( SR_VEC_LANES(128, source_buffer[0], i8)[element_index_8] );
      g_1862AE024 = element_index_8;
      call_result = sub_140115360();
      iteration_count_6 = 0;
      if ( (int)g_160361344 <= 0 )
      {
LABEL_241:
        sub_1400A3D70();
      }
      else
      {
        state_address_3 = &g_160361354;
        while ( *state_address_3 != call_result )
        {
          ++iteration_count_6;
          state_address_3 += 28;
          if ( iteration_count_6 >= (int)g_160361344 )
            goto LABEL_241;
        }
        call_result_3 = sub_1400A3D70();
        if ( iteration_count_6 >= 0 && iteration_count_6 < (int)g_160361344 )
        {
          iteration_count_8 = 0;
          scaled_index_15 = 28LL * iteration_count_6;
          dword_140404A6C[scaled_index_15 + 134050374] += call_result_3;
          do
          {
            scaled_index_16 = 3597LL * iteration_count_8;
            if ( dword_140404A6C[scaled_index_16 + 71856253] && dword_140404A6C[scaled_index_16 + 71856268] == iteration_count_6 )
              dword_140404A6C[scaled_index_16 + 71856272] += call_result_3;
            ++iteration_count_8;
          }
          while ( iteration_count_8 < 256 );
          cached_i = iteration_count_8;
          crt_sprintf(
            source_buffer,
            "%s(%d) %d cash",
            (     char *)&dword_140404A6C[scaled_index_15 + 134050365],
            dword_140404A6C[scaled_index_15 + 134050362],
            call_result_3);
          if ( game_connected )
          {
            byte_count_12 = -1;
            do
              ++byte_count_12;
            while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_12] );
            cached_world_event_count_13 = world_event_count;
            if ( (int)byte_count_12 > 63 )
              LODWORD(byte_count_12) = 63;
            cached_game_tick_15 = game_tick;
            shifted_bits_14 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_14) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_14) = cached_game_tick_15;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_14), source_buffer, (int)byte_count_12);
            *((_BYTE *)&g_1873DE4A0 + (int)byte_count_12 + shifted_bits_14) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_14) = byte_count_12;
            world_event_count = cached_world_event_count_13 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_14) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_14) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_14) = 0;
            HIWORD(world_event_count) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/setrating "), 11) )
  {
    buffer_cursor_8 = (__int8 *)(destination_text + 11);
    do
    {
      loaded_word_7 = *buffer_cursor_8;
      buffer_cursor_8[(_QWORD)((char *)&SR_VEC_LANES(128, source_buffer[0], i64)[-1] - destination_text - 3)] = *buffer_cursor_8;
      ++buffer_cursor_8;
    }
    while ( loaded_word_7 );
    if ( SR_VEC_LANES(128, source_buffer[0], i8)[0] )
    {
      element_index_9 = 0;
      do
      {
        table_value_5 = SR_VEC_LANES(128, source_buffer[0], i8)[element_index_9];
        *((_BYTE *)&g_1862AE028 + element_index_9++) = table_value_5;
      }
      while ( table_value_5 );
      g_1862AE020 = 0;
      element_index_10 = -1;
      do
        ++element_index_10;
      while ( SR_VEC_LANES(128, source_buffer[0], i8)[element_index_10] );
      g_1862AE024 = element_index_10;
      call_result_2 = sub_140115360();
      iteration_count_7 = 0;
      if ( (int)g_160361344 <= 0 )
      {
LABEL_253:
        sub_1400A3D70();
      }
      else
      {
        while ( *state_address != call_result_2 )
        {
          ++iteration_count_7;
          state_address += 28;
          if ( iteration_count_7 >= (int)g_160361344 )
            goto LABEL_253;
        }
        call_result_4 = sub_1400A3D70();
        if ( iteration_count_7 >= 0 && iteration_count_7 < (int)g_160361344 )
        {
          element_index_12 = 0;
          scaled_index_17 = 28LL * iteration_count_7;
          dword_140404A6C[scaled_index_17 + 134050376] = call_result_4;
          do
          {
            if ( dword_140404A6C[3597 * element_index_12 + 71856253] && dword_140404A6C[3597 * element_index_12 + 71856268] == iteration_count_7 )
              dword_140404A6C[3597 * element_index_12 + 71856276] = call_result_4;
            ++element_index_12;
          }
          while ( element_index_12 < 256 );
          cached_i = element_index_12;
          crt_sprintf(
            source_buffer,
            "%s(%d) %d rating",
            (     char *)&dword_140404A6C[scaled_index_17 + 134050365],
            dword_140404A6C[scaled_index_17 + 134050362],
            call_result_4);
          if ( game_connected )
          {
            byte_count_13 = -1;
            do
              ++byte_count_13;
            while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_13] );
            cached_game_tick_16 = game_tick;
            cached_world_event_count_14 = world_event_count;
            if ( (int)byte_count_13 > 63 )
              LODWORD(byte_count_13) = 63;
            shifted_bits_15 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_15) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_15) = cached_game_tick_16;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_15), source_buffer, (int)byte_count_13);
            *((_BYTE *)&g_1873DE4A0 + (int)byte_count_13 + shifted_bits_15) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_15) = byte_count_13;
            world_event_count = cached_world_event_count_14 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_15) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_15) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_15) = 0;
            HIWORD(world_event_count) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/bany "), 6) )
  {
    buffer_cursor_9 = (__int8 *)(destination_text + 6);
    do
    {
      loaded_word_8 = *buffer_cursor_9;
      SR_VEC_LANES(128, source_buffer[0], i8)[(_QWORD)buffer_cursor_9 - 6 - destination_text] = *buffer_cursor_9;
      ++buffer_cursor_9;
    }
    while ( loaded_word_8 );
    if ( SR_VEC_LANES(128, source_buffer[0], i8)[0]
      && (unsigned int)crt_sscanf((__int64)source_buffer, "%d", &cached_i) != -1
      && (g_1AD04B214 & 0x80000000) == 0
      && (int)g_1AD04B214 < (int)g_160361344 )
    {
      scaled_index_10 = 28LL * (int)g_1AD04B214;
      LODWORD(packed_word_bits) = cached_i;
      dword_140404A6C[scaled_index_10 + 134050385] = cached_i;
      crt_sprintf(
        source_buffer,
        "%s(%d) banned %d",
        (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_10 * 4 + 540414816),
        dword_140404A6C[scaled_index_10 + 134050362],
        packed_word_bits);
      if ( game_connected )
      {
        byte_count_9 = -1;
        do
          ++byte_count_9;
        while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_9] );
        cached_game_tick_11 = game_tick;
        cached_world_event_count_10 = world_event_count;
        if ( (int)byte_count_9 > 63 )
          LODWORD(byte_count_9) = 63;
        shifted_bits_10 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_10) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_10) = cached_game_tick_11;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_10), source_buffer, (int)byte_count_9);
        *((_BYTE *)&g_1873DE4A0 + (int)byte_count_9 + shifted_bits_10) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_10) = byte_count_9;
        world_event_count = cached_world_event_count_10 + 1;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_10) = 4;
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_10) = -1;
        *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_10) = 0;
        HIWORD(world_event_count) = 0;
      }
      g_1AD04B214 = -1;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/bann"), 5) )
  {
    if ( game_connected )
    {
      cached_game_tick_12 = game_tick;
      shifted_bits_11 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_11) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_11) = cached_game_tick_12;
      *(_QWORD *)((char *)&g_1873DE4A0 + shifted_bits_11) = 0x636E6163206E6162LL;
      *(unsigned int *)((char *)&g_1873DE4A8 + shifted_bits_11) = 1684368485;
      *((_BYTE *)&g_1873DE4AC + shifted_bits_11) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_11) = 12;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_11) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_11) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_11) = 0;
    }
    g_1AD04B214 = -1;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/kick "), 6) )
  {
    saved_element_index_2 = -1;
    cached_i = 0;
    if ( (int)item_link_peer_count > 0 )
    {
      element_index_11 = 0;
      do
      {
        scaled_index_11 = (int)dword_140404A6C[47224 * element_index_11 + 438887411];
        if ( (_DWORD)scaled_index_11 != -1 )
        {
          scaled_index_12 = 3597 * scaled_index_11;
          buffer_cursor_10 = (unsigned __int8 *)(destination_text + 6);
          state_address_4 = (char *)&dword_140404A6C[scaled_index_12 + 71856252] - destination_text + 2;
          do
          {
            table_value_6 = (unsigned __int8)state_address_4[(_QWORD)buffer_cursor_10];
            scaled_index_13 = *buffer_cursor_10 - table_value_6;
            if ( scaled_index_13 )
              break;
            ++buffer_cursor_10;
          }
          while ( table_value_6 );
          if ( !scaled_index_13 )
            saved_element_index_2 = element_index_11;
        }
        ++element_index_11;
      }
      while ( element_index_11 < (int)item_link_peer_count );
      cached_i = element_index_11;
      if ( saved_element_index_2 != -1 )
      {
        state_word_2 = g_1A8E3DA00;
        scaled_index_14 = 47224LL * saved_element_index_2;
        dword_140404A6C[g_1A8E3DA00 + 438886373] = dword_140404A6C[scaled_index_14 + 438887405];
        g_1A8E3DA00 = state_word_2 + 1;
        dword_140404A6C[scaled_index_14 + 438887414] = 1200;
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/message "), 9) )
  {
    loaded_word_9 = *(__m128i_u *)(destination_text + 25);
    source_buffer[0] = *(__m128i_u *)(destination_text + 9);
    loaded_word_10 = *(__m128i_u *)(destination_text + 41);
    source_buffer[1] = loaded_word_9;
    loaded_word_11 = *(__m128i_u *)(destination_text + 57);
    source_buffer[2] = loaded_word_10;
    source_buffer[3] = loaded_word_11;
    if ( game_connected )
    {
      byte_count_10 = -1;
      do
        ++byte_count_10;
      while ( SR_VEC_LANES(128, source_buffer[0], i8)[byte_count_10] );
      cached_game_tick_13 = game_tick;
      cached_world_event_count_11 = world_event_count;
      if ( (int)byte_count_10 > 63 )
        LODWORD(byte_count_10) = 63;
      shifted_bits_12 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + shifted_bits_12) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + shifted_bits_12) = cached_game_tick_13;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + shifted_bits_12), source_buffer, (int)byte_count_10);
      *((_BYTE *)&g_1873DE4A0 + (int)byte_count_10 + shifted_bits_12) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + shifted_bits_12) = byte_count_10;
      world_event_count = cached_world_event_count_11 + 1;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits_12) = 0;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits_12) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits_12) = 0;
      HIWORD(world_event_count) = 0;
    }
  }
  strncmp_sr_result = strncmp_sr((const char *)(uintptr_t)(destination_text), (const char *)(uintptr_t)("/clearkick"), 10);
  state_word_3 = g_1A8E3DA00;
  if ( !strncmp_sr_result )
    state_word_3 = 0;
  g_1A8E3DA00 = state_word_3;
  return 1; /* 0x140132565: mov eax, 1 */
}

#undef unused_frame_slot_0
#undef packed_word_bits
#undef cached_i
#undef masked_bits_9
#undef unused_written_slot
#undef saved_record_word_offset
#undef input_value_2
#undef cached_xmmword_140278d30
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef source_buffer
#undef scratch_buffer
#undef unused_frame_slot_896

//----- (0000000140136450) ----------------------------------------------------
void sub_140136450()
{
  __int64 cached_item_link_peer_count;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 record_byte_offset;
  unsigned int *saved_iteration_count;
  __int64 cached_item_link_peer_count_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  signed int iteration_count;
  unsigned int *state_address;
  __int128 masked_bits;
  unsigned int table_value;
  __int64 scaled_index_4;
  unsigned int iteration_count_2;
  __int64 integer_sum;
  __int64 saved_cached_item_link_peer_count;
  __int64 scaled_index_5;
  int scaled_index_6;
  unsigned int cached_game_unknown_183ebfcc8;
  signed int cached_packet_out_byte;
  __int128 state_word;
  signed int remaining_amount;
  char lobyte_result;
  int absolute_value;
  unsigned int remaining_bits;
  unsigned int integer_difference;
  signed int remaining_amount_2;
  int absolute_value_2;
  unsigned int remaining_bits_2;
  unsigned int integer_difference_2;
  __int64 masked_bits_2;
  unsigned int integer_sum_2;
  __int64 table_value_2;
  unsigned __int16 table_value_3;
  __int64 table_value_4;
  unsigned int cached_game_state;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  unsigned int table_value_5;
  unsigned int *state_address_2;
  unsigned int *encoded_value;
  __int64 remaining_count_2;
  unsigned int *encoded_value_2;
  unsigned int *encoded_value_3;
  signed int cached_packet_out_byte_2;
  signed int remaining_amount_3;
  char lobyte_result_2;
  unsigned int remaining_bits_3;
  unsigned int integer_difference_3;
  signed int remaining_amount_4;
  unsigned int loword_result;
  unsigned int integer_difference_4;
  signed int remaining_amount_5;
  unsigned int remaining_bits_4;
  unsigned int integer_difference_5;
  signed int cached_packet_out_byte_3;
  signed int remaining_amount_6;
  char cached_packet_out_bit;
  unsigned int remaining_bits_5;
  unsigned int integer_difference_6;
  __int64 scaled_index_9;
  unsigned int *encoded_value_4;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  unsigned __int64 scaled_index_13;
  signed int cached_packet_out_byte_4;
  signed int iteration_count_3;
  signed int iteration_count_4;
  signed int iteration_count_5;
  signed int iteration_count_6;
  signed int cached_packet_out_byte_5;
  signed int iteration_count_7;
  signed int iteration_count_8;
  int *encoded_value_5;
  __int64 remaining_count_3;
  unsigned int *encoded_value_6;
  signed int cached_packet_out_byte_6;
  signed int iteration_count_9;
  signed int iteration_count_10;
  signed int iteration_count_11;
  signed int iteration_count_12;
  __int64 remaining_count_4;
  int *state_address_3;
  _DWORD *buffer_cursor_2;
  __int64 remaining_count_5;
  int table_value_6;
  int cached_packet_out_bit_2;
  signed int cached_packet_out_byte_7;
  __int64 iteration_count_13;
  __int64 remaining_count_6;
  __int64 scaled_index_14;
  __int64 iteration_count_14;
  unsigned int byte_count;
  signed int remaining_amount_7;
  unsigned int remaining_bits_6;
  unsigned int integer_difference_7;
  __int64 remaining_count_7;
  unsigned int *state_address_4;
  unsigned int *encoded_value_7;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  unsigned int scaled_index_17;
  __int64 masked_bits_3;
  signed int cached_packet_out_byte_8;
  __int64 scaled_index_18;
  signed int remaining_amount_8;
  char cached_packet_out_bit_3;
  unsigned int remaining_bits_7;
  unsigned int integer_difference_8;
  unsigned __int64 byte_count_2;
  signed int cached_world_event_count;
  signed int remaining_amount_9;
  unsigned int cached_packet_out_bit_4;
  unsigned int loword_result_2;
  unsigned int integer_difference_9;
  int table_value_7;
  int integer_difference_10;
  signed int remaining_amount_10;
  char saved_cached_packet_out_bit;
  unsigned int remaining_bits_8;
  signed int saved_cached_packet_out_byte;
  unsigned int integer_difference_11;
  __int64 scaled_index_19;
  __int64 remaining_count_8;
  signed int cached_packet_out_byte_9;
  int cached_packet_out_bit_5;
  signed int remaining_amount_11;
  unsigned int integer_difference_12;
  unsigned __int16 table_value_8;
  __int64 table_value_9;
  int iteration_count_15;
  unsigned int *state_address_5;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  __int64 remaining_count_9;
  signed int cached_packet_out_byte_10;
  signed int iteration_count_16;
  __int128 loaded_word;
  signed int iteration_count_17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140136450[208];
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_140136450 + 0)) /* [rsp+20h] */
#define scaled_index_20 (*(__int64 (*))(void *)(sr_frame_140136450 + 8)) /* [rsp+28h] */
#define scaled_index_21 (*(__int64 (*))(void *)(sr_frame_140136450 + 16)) /* [rsp+30h] */
#define cached_integer_sum (*(__int64 (*))(void *)(sr_frame_140136450 + 24)) /* [rsp+38h] */
#define masked_bits_4 (*(__int64 (*))(void *)(sr_frame_140136450 + 32)) /* [rsp+40h] */
#define table_value_10 (*(unsigned int (*))(void *)(sr_frame_140136450 + 40)) /* [rsp+48h] */
#define saved_iteration_count_2 (*(unsigned int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define saved_iteration_count_3 (*(int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define saved_encoded_value (*(unsigned int * (*))(void *)(sr_frame_140136450 + 184)) /* [rsp+D8h] */
#define saved_cached_item_link_peer_count_2 (*(__int64 (*))(void *)(sr_frame_140136450 + 192)) /* [rsp+E0h] */
#define state_address_8 (*(unsigned int * (*))(void *)(sr_frame_140136450 + 200)) /* [rsp+E8h] */

  cached_item_link_peer_count = (int)item_link_peer_count;
  ++g_1AD04B20C;
  sub_1400299C0();
  sub_140127630();
  remaining_count = 256;
  buffer_cursor = &g_1A8E379E0;
  record_byte_offset = 0;
  do
  {
    if ( *buffer_cursor )
    {
      if ( (--buffer_cursor[1] & 0x80000000) != 0 )
        *buffer_cursor = 0;
    }
    buffer_cursor += 20;
    --remaining_count;
  }
  while ( remaining_count );
  if ( (int)item_link_peer_count > 0 )
  {
    saved_iteration_count = &g_1A8E6BBFC;
    cached_item_link_peer_count_2 = item_link_peer_count;
    do
    {
      scaled_index = (int)*(saved_iteration_count - 47217);
      if ( (_DWORD)scaled_index != -1 )
      {
        scaled_index_2 = 3597 * scaled_index;
        scaled_index_3 = dword_140404A6C[3597 * scaled_index + 71856268];
        if ( scaled_index_3 != -1 )
        {
          iteration_count = *saved_iteration_count;
          if ( *saved_iteration_count != -1 )
            goto LABEL_17;
          iteration_count = 0;
          state_address = &g_1A8E379E8;
          while ( !*(state_address - 2) || *state_address != scaled_index_3 )
          {
            ++iteration_count;
            state_address += 20;
            if ( (__int64)state_address >= (__int64)&g_1A8E3C9E8 )
            {
              iteration_count = sub_140132E00();
              *saved_iteration_count = iteration_count;
              goto LABEL_16;
            }
          }
          *saved_iteration_count = iteration_count;
LABEL_16:
          if ( iteration_count != -1 )
          {
LABEL_17:
            masked_bits = *(_OWORD *)&dword_140404A6C[scaled_index_2 + 71856258];
            table_value = dword_140404A6C[scaled_index_2 + 71856265];
            scaled_index_4 = 10LL * iteration_count;
            *(_OWORD *)&dword_140404A6C[2 * scaled_index_4 + 438881248] = *(_OWORD *)&dword_140404A6C[scaled_index_2 + 71856254];
            dword_140404A6C[2 * scaled_index_4 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * scaled_index_4 + 438881252] = masked_bits;
            dword_140404A6C[2 * scaled_index_4 + 438881246] = 3600;
            dword_140404A6C[2 * scaled_index_4 + 438881247] = scaled_index_3;
            dword_140404A6C[2 * scaled_index_4 + 438881264] = table_value;
          }
        }
      }
      saved_iteration_count += 47224;
      --cached_item_link_peer_count_2;
    }
    while ( cached_item_link_peer_count_2 );
    record_byte_offset = 0;
  }
  saved_iteration_count_2 = 0;
  iteration_count_2 = 0;
  saved_cached_item_link_peer_count_2 = cached_item_link_peer_count;
  if ( (int)cached_item_link_peer_count > 0 )
  {
    integer_sum = 0;
    saved_cached_item_link_peer_count = cached_item_link_peer_count;
    cached_integer_sum = 0;
    while ( 1 )
    {
      scaled_index_5 = 47224 * integer_sum;
      scaled_index_20 = 47224 * integer_sum;
      scaled_index_6 = dword_140404A6C[47224 * integer_sum + 438887412];
      if ( scaled_index_6 <= 0 )
        break;
LABEL_239:
      ++iteration_count_2;
      integer_sum = cached_integer_sum + 1;
      saved_iteration_count_2 = iteration_count_2;
      cached_integer_sum = integer_sum;
      if ( integer_sum >= saved_cached_item_link_peer_count )
        goto LABEL_240;
    }
    cached_game_unknown_183ebfcc8 = game_unknown_183ebfcc8;
    if ( dword_140404A6C[scaled_index_5 + 438887409] != game_unknown_183ebfcc8 )
    {
      packet_out_data = dword_1402B2658;
      *(_QWORD *)&packet_out_byte = 9;
      LOBYTE(g_18539D408) = 6;
      *(unsigned int *)((char *)&g_18539D408 + 1) = game_unknown_183ebfcc8;
      sr_net_write_bits(&game_type, 4);
      sr_net_write_bits(&g_183EBFCB0, 4);
      sr_net_write_bits(&g_183EBFCC4, 8);
      cached_packet_out_byte = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        state_word = g_183EBFAC0;
        *(_OWORD *)((char *)&packet_out_data + cached_packet_out_byte) = g_183EBFAB0;
        *(_OWORD *)((char *)&g_18539D414 + cached_packet_out_byte) = state_word;
        cached_packet_out_byte = packet_out_byte + 32;
        packet_out_byte += 32;
      }
      remaining_amount = 16;
      lobyte_result = packet_out_bit;
      absolute_value = (int)(fabs((game_sun_angle)) * 5215.189175234883) & 0x7FFF;
      if ( cached_packet_out_byte < 0x10000 )
      {
        remaining_bits = absolute_value | 0x8000;
        if ( (game_sun_angle) >= 0.0 )
          remaining_bits = absolute_value;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount) - 1) << lobyte_result);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits << SLOBYTE(packet_out_bit);
          integer_difference = 8 - packet_out_bit;
          cached_packet_out_byte = packet_out_byte;
          if ( remaining_amount < 8 - packet_out_bit )
            break;
          lobyte_result = 0;
          packet_out_bit = 0;
          if ( remaining_amount == integer_difference )
          {
            cached_packet_out_byte = ++packet_out_byte;
            goto LABEL_38;
          }
          cached_packet_out_byte = packet_out_byte + 1;
          remaining_bits >>= integer_difference;
          remaining_amount -= integer_difference;
          ++packet_out_byte;
          if ( remaining_amount <= 0 )
            goto LABEL_38;
        }
        lobyte_result = remaining_amount + LOBYTE(packet_out_bit);
        packet_out_bit += remaining_amount;
      }
LABEL_38:
      remaining_amount_2 = 16;
      absolute_value_2 = (int)(fabs((game_unknown_183ebfd58)) * 5215.189175234883) & 0x7FFF;
      if ( cached_packet_out_byte < 0x10000 )
      {
        remaining_bits_2 = absolute_value_2 | 0x8000;
        if ( (game_unknown_183ebfd58) >= 0.0 )
          remaining_bits_2 = absolute_value_2;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte) &= ~(((1 << remaining_amount_2) - 1) << lobyte_result);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_2 << SLOBYTE(packet_out_bit);
          integer_difference_2 = 8 - packet_out_bit;
          cached_packet_out_byte = packet_out_byte;
          if ( remaining_amount_2 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( remaining_amount_2 == integer_difference_2 )
          {
            cached_packet_out_byte = ++packet_out_byte;
            goto LABEL_47;
          }
          cached_packet_out_byte = packet_out_byte + 1;
          remaining_bits_2 >>= integer_difference_2;
          remaining_amount_2 -= integer_difference_2;
          ++packet_out_byte;
          lobyte_result = 0;
          if ( remaining_amount_2 <= 0 )
            goto LABEL_47;
        }
        packet_out_bit += remaining_amount_2;
      }
LABEL_47:
      if ( game_type == 7 )
      {
        sr_net_write_bits(&g_183F7A604, 8);
        cached_packet_out_byte = packet_out_byte;
      }
      masked_bits_2 = *(_QWORD *)&dword_140404A6C[scaled_index_5 + 438887407];
      integer_sum_2 = scaled_index_6 + cached_packet_out_byte;
      table_value_2 = dword_140404A6C[scaled_index_5 + 438887405];
      g_1AD04ADCC = cached_packet_out_byte;
      table_value_3 = dword_140404A6C[scaled_index_5 + 438887406];
      dword_140404A6C[scaled_index_5 + 438887412] = integer_sum_2;
      sub_140130350(table_value_2, table_value_3, masked_bits_2);
LABEL_238:
      saved_cached_item_link_peer_count = saved_cached_item_link_peer_count_2;
      goto LABEL_239;
    }
    table_value_4 = (int)dword_140404A6C[scaled_index_5 + 438887411];
    cached_game_state = game_state;
    if ( (_DWORD)table_value_4 == -1
      || (scaled_index_7 = (int)dword_140404A6C[3597 * table_value_4 + 71856292], (_DWORD)scaled_index_7 == -1)
      || (scaled_index_8 = 7166 * scaled_index_7, (int)dword_140404A6C[7166 * scaled_index_7 + 280651318] <= 0) )
    {
      state_address_2 = &dword_140404A6C[scaled_index_5 + 438920024];
      if ( game_state == 2 )
      {
        *state_address_2 = dword_140404A6C[scaled_index_5 + 438920021];
        state_address_2[1] = dword_140404A6C[scaled_index_5 + 438920022];
        table_value_5 = dword_140404A6C[scaled_index_5 + 438920023];
      }
      else
      {
        *(_QWORD *)state_address_2 = 0;
        table_value_5 = 0;
      }
    }
    else
    {
      table_value_5 = dword_140404A6C[scaled_index_8 + 280651337];
      state_address_2 = &dword_140404A6C[scaled_index_5 + 438920024];
      *state_address_2 = dword_140404A6C[scaled_index_8 + 280651335];
      state_address_2[1] = dword_140404A6C[scaled_index_8 + 280651336];
    }
    state_address_2[2] = table_value_5;
    packet_out_data = dword_1402B2658;
    *(unsigned int *)((char *)&g_18539D40C + 1) = game_tick;
    *(_QWORD *)&packet_out_byte = 13;
    LOBYTE(g_18539D408) = 5;
    *(unsigned int *)((char *)&g_18539D408 + 1) = cached_game_unknown_183ebfcc8;
    sr_net_write_bits(&game_state, 4);
    if ( cached_game_state == 1 )
    {
      encoded_value = &g_151620CA8;
      remaining_count_2 = 32;
      do
      {
        sr_net_write_bits(encoded_value, 1);
        encoded_value += 3597;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    else if ( cached_game_state != 3 )
    {
LABEL_64:
      cached_packet_out_byte_2 = packet_out_byte;
      remaining_amount_3 = 24;
      lobyte_result_2 = packet_out_bit;
      if ( (int)packet_out_byte < 0x10000 )
      {
        remaining_bits_3 = g_183EBFCD4 & 0xFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount_3) - 1) << lobyte_result_2);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_3 << SLOBYTE(packet_out_bit);
          integer_difference_3 = 8 - packet_out_bit;
          cached_packet_out_byte_2 = packet_out_byte;
          if ( remaining_amount_3 < 8 - packet_out_bit )
            break;
          lobyte_result_2 = record_byte_offset;
          packet_out_bit = record_byte_offset;
          if ( remaining_amount_3 == integer_difference_3 )
          {
            cached_packet_out_byte_2 = ++packet_out_byte;
            goto LABEL_72;
          }
          cached_packet_out_byte_2 = packet_out_byte + 1;
          remaining_bits_3 >>= integer_difference_3;
          remaining_amount_3 -= integer_difference_3;
          ++packet_out_byte;
          if ( remaining_amount_3 <= 0 )
            goto LABEL_72;
        }
        lobyte_result_2 = remaining_amount_3 + LOBYTE(packet_out_bit);
        packet_out_bit += remaining_amount_3;
      }
LABEL_72:
      remaining_amount_4 = 16;
      if ( cached_packet_out_byte_2 < 0x10000 )
      {
        loword_result = LOWORD(g_183F79F84);
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount_4) - 1) << lobyte_result_2);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)loword_result << SLOBYTE(packet_out_bit);
          integer_difference_4 = 8 - packet_out_bit;
          cached_packet_out_byte_2 = packet_out_byte;
          if ( remaining_amount_4 < 8 - packet_out_bit )
            break;
          lobyte_result_2 = record_byte_offset;
          packet_out_bit = record_byte_offset;
          if ( remaining_amount_4 == integer_difference_4 )
          {
            cached_packet_out_byte_2 = ++packet_out_byte;
            goto LABEL_80;
          }
          cached_packet_out_byte_2 = packet_out_byte + 1;
          loword_result >>= integer_difference_4;
          remaining_amount_4 -= integer_difference_4;
          ++packet_out_byte;
          if ( remaining_amount_4 <= 0 )
            goto LABEL_80;
        }
        lobyte_result_2 = remaining_amount_4 + LOBYTE(packet_out_bit);
        packet_out_bit += remaining_amount_4;
      }
LABEL_80:
      remaining_amount_5 = 30;
      if ( cached_packet_out_byte_2 < 0x10000 )
      {
        remaining_bits_4 = game_day_time & 0x3FFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_2) &= ~(((1 << remaining_amount_5) - 1) << lobyte_result_2);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_4 << SLOBYTE(packet_out_bit);
          integer_difference_5 = 8 - packet_out_bit;
          if ( remaining_amount_5 < 8 - packet_out_bit )
            break;
          packet_out_bit = record_byte_offset;
          if ( remaining_amount_5 == integer_difference_5 )
          {
            ++packet_out_byte;
            goto LABEL_88;
          }
          remaining_amount_5 -= integer_difference_5;
          cached_packet_out_byte_2 = packet_out_byte + 1;
          remaining_bits_4 >>= integer_difference_5;
          ++packet_out_byte;
          lobyte_result_2 = record_byte_offset;
          if ( remaining_amount_5 <= 0 )
            goto LABEL_88;
        }
        packet_out_bit += remaining_amount_5;
      }
LABEL_88:
      sr_net_write_bits(&g_183EBFDB4, 6);
      sr_net_write_bits(&g_183EC5978, 6);
      sr_net_write_bits(&g_183ECB53C, 6);
      sr_net_write_bits(&g_183ED1100, 6);
      sr_net_write_bits(&g_183ED6CC4, 6);
      cached_packet_out_byte_3 = packet_out_byte;
      remaining_amount_6 = 8;
      if ( (int)packet_out_byte < 0x10000 )
      {
        cached_packet_out_bit = packet_out_bit;
        remaining_bits_5 = (unsigned __int8)table_value_4;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_3) &= ~(((1 << remaining_amount_6) - 1) << cached_packet_out_bit);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_5 << SLOBYTE(packet_out_bit);
          integer_difference_6 = 8 - packet_out_bit;
          if ( remaining_amount_6 < 8 - packet_out_bit )
            break;
          packet_out_bit = record_byte_offset;
          if ( remaining_amount_6 == integer_difference_6 )
          {
            ++packet_out_byte;
            goto LABEL_96;
          }
          remaining_amount_6 -= integer_difference_6;
          cached_packet_out_byte_3 = packet_out_byte + 1;
          remaining_bits_5 >>= integer_difference_6;
          ++packet_out_byte;
          cached_packet_out_bit = record_byte_offset;
          if ( remaining_amount_6 <= 0 )
            goto LABEL_96;
        }
        packet_out_bit += remaining_amount_6;
      }
LABEL_96:
      scaled_index_9 = 3597 * table_value_4;
      encoded_value_4 = &dword_140404A6C[3597 * table_value_4 + 71856292];
      sr_net_write_bits(encoded_value_4, 10);
      masked_bits_4 = 0;
      table_value_10 = 0;
      if ( (_DWORD)table_value_4 != -1 )
      {
        scaled_index_10 = (int)*encoded_value_4;
        if ( (_DWORD)scaled_index_10 != -1 )
        {
          dword_140404A6C[scaled_index_9 + 71856327] = dword_140404A6C[7166 * scaled_index_10 + 280651341];
          dword_140404A6C[scaled_index_9 + 71856328] = dword_140404A6C[7166 * *encoded_value_4 + 280651342];
          scaled_index_11 = 7166LL * (int)*encoded_value_4;
          masked_bits_4 = *(_QWORD *)&dword_140404A6C[scaled_index_11 + 280651680];
          table_value_10 = dword_140404A6C[scaled_index_11 + 280651682];
        }
      }
      scaled_index_12 = (int)*encoded_value_4;
      if ( (_DWORD)scaled_index_12 != -1 )
      {
        scaled_index_13 = 28664 * scaled_index_12;
        cached_packet_out_byte_4 = packet_out_byte;
        if ( (int)packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            cached_packet_out_byte_4 = packet_out_byte + 1;
            packet_out_bit = record_byte_offset;
            ++packet_out_byte;
          }
          *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_4) = dword_140404A6C[scaled_index_13 / 4 + 280651341];
          iteration_count_3 = packet_out_byte + 4;
          packet_out_byte = iteration_count_3;
          if ( iteration_count_3 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_3;
              packet_out_bit = record_byte_offset;
              packet_out_byte = iteration_count_3;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_3) = dword_140404A6C[scaled_index_13 / 4 + 280651342];
            iteration_count_4 = packet_out_byte + 4;
            packet_out_byte = iteration_count_4;
            if ( iteration_count_4 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++iteration_count_4;
                packet_out_bit = record_byte_offset;
                packet_out_byte = iteration_count_4;
              }
              *(unsigned int *)((char *)&packet_out_data + iteration_count_4) = dword_140404A6C[scaled_index_13 / 4 + 280651365];
              iteration_count_5 = packet_out_byte + 4;
              packet_out_byte = iteration_count_5;
              if ( iteration_count_5 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++iteration_count_5;
                  packet_out_bit = record_byte_offset;
                  packet_out_byte = iteration_count_5;
                }
                *(unsigned int *)((char *)&packet_out_data + iteration_count_5) = dword_140404A6C[scaled_index_13 / 4 + 280651366];
                iteration_count_6 = packet_out_byte + 4;
                packet_out_byte = iteration_count_6;
                if ( iteration_count_6 < 0x10000 )
                {
                  if ( (int)packet_out_bit > 0 )
                  {
                    ++iteration_count_6;
                    packet_out_bit = record_byte_offset;
                    packet_out_byte = iteration_count_6;
                  }
                  *(unsigned int *)((char *)&packet_out_data + iteration_count_6) = dword_140404A6C[scaled_index_13 / 4 + 280651357];
                  packet_out_byte += 4;
                }
              }
            }
          }
        }
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126818692), 1);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126818688), 8);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846696), 8);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846704), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846708), 4);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846712), 4);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846692), 8);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846552), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846564), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846572), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846580), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846588), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846596), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126846604), 7);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126818596), 8);
        sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_13 + 1126818600), 8);
      }
      cached_packet_out_byte_5 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_5 = packet_out_byte + 1;
          packet_out_bit = record_byte_offset;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_5) = masked_bits_4;
        iteration_count_7 = packet_out_byte + 4;
        packet_out_byte = iteration_count_7;
        if ( iteration_count_7 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_7;
            packet_out_bit = record_byte_offset;
            packet_out_byte = iteration_count_7;
          }
          *(unsigned int *)((char *)&packet_out_data + iteration_count_7) = HIDWORD(masked_bits_4);
          iteration_count_8 = packet_out_byte + 4;
          packet_out_byte = iteration_count_8;
          if ( iteration_count_8 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_8;
              packet_out_bit = record_byte_offset;
              packet_out_byte = iteration_count_8;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_8) = table_value_10;
            packet_out_byte += 4;
          }
        }
      }
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856289], 1);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856342], 8);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856343], 16);
      if ( dword_140404A6C[scaled_index_9 + 71856342] == 10 )
      {
        encoded_value_5 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 56076LL * (int)dword_140404A6C[scaled_index_9 + 71856343] + 906829868);
        sr_net_write_bits(encoded_value_5, 8);
        if ( *encoded_value_5 > 0 )
        {
          remaining_count_3 = (unsigned int)*encoded_value_5;
          encoded_value_6 = &dword_140404A6C[14019 * dword_140404A6C[scaled_index_9 + 71856343] + 225654130];
          do
          {
            sr_net_write_bits(encoded_value_6 - 1, 8);
            sr_net_write_bits(encoded_value_6, 24);
            sr_net_write_bits(encoded_value_6 + 1, 4);
            encoded_value_6 += 3;
            --remaining_count_3;
          }
          while ( remaining_count_3 );
        }
      }
      cached_packet_out_byte_6 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          cached_packet_out_byte_6 = packet_out_byte + 1;
          packet_out_bit = record_byte_offset;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_6) = dword_140404A6C[scaled_index_9 + 71856272];
        iteration_count_9 = packet_out_byte + 4;
        packet_out_byte = iteration_count_9;
        if ( iteration_count_9 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++iteration_count_9;
            packet_out_bit = record_byte_offset;
            packet_out_byte = iteration_count_9;
          }
          *(unsigned int *)((char *)&packet_out_data + iteration_count_9) = dword_140404A6C[scaled_index_9 + 71856273];
          iteration_count_10 = packet_out_byte + 4;
          packet_out_byte = iteration_count_10;
          if ( iteration_count_10 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++iteration_count_10;
              packet_out_bit = record_byte_offset;
              packet_out_byte = iteration_count_10;
            }
            *(unsigned int *)((char *)&packet_out_data + iteration_count_10) = dword_140404A6C[scaled_index_9 + 71856274];
            iteration_count_11 = packet_out_byte + 4;
            packet_out_byte = iteration_count_11;
            if ( iteration_count_11 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++iteration_count_11;
                packet_out_bit = record_byte_offset;
                packet_out_byte = iteration_count_11;
              }
              *(unsigned int *)((char *)&packet_out_data + iteration_count_11) = dword_140404A6C[scaled_index_9 + 71856275];
              iteration_count_12 = packet_out_byte + 4;
              packet_out_byte = iteration_count_12;
              if ( iteration_count_12 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++iteration_count_12;
                  packet_out_bit = record_byte_offset;
                  packet_out_byte = iteration_count_12;
                }
                *(unsigned int *)((char *)&packet_out_data + iteration_count_12) = dword_140404A6C[scaled_index_9 + 71856276];
                packet_out_byte += 4;
              }
            }
          }
        }
      }
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856291], 16);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856362], 8);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71857711], 10);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71857712], 6);
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71857713], 8);
      remaining_count_4 = 7;
      state_address_3 = (int *)&dword_140404A6C[scaled_index_9 + 71857714];
      do
      {
        sr_net_write_bits((unsigned int *)((char *)&g_151622334 + record_byte_offset + scaled_index_9 * 4), 4);
        if ( *state_address_3 > 0 )
        {
          buffer_cursor_2 = (unsigned int *)((char *)&dword_140404A6C[scaled_index_9 + 71857715] + record_byte_offset);
          remaining_count_5 = (unsigned int)*state_address_3;
          do
          {
            sr_net_write_bits(buffer_cursor_2++, 16);
            --remaining_count_5;
          }
          while ( remaining_count_5 );
        }
        record_byte_offset += 36;
        state_address_3 += 9;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71857986], 8);
      table_value_6 = dword_140404A6C[scaled_index_9 + 71857986];
      if ( table_value_6 > 0 )
      {
        cached_packet_out_bit_2 = packet_out_bit;
        cached_packet_out_byte_7 = packet_out_byte;
        iteration_count_13 = 0;
        remaining_count_6 = (unsigned int)table_value_6;
        do
        {
          scaled_index_14 = scaled_index_9 * 4 + 72 * iteration_count_13;
          if ( cached_packet_out_byte_7 < 0x10000 )
          {
            if ( cached_packet_out_bit_2 > 0 )
            {
              ++cached_packet_out_byte_7;
              packet_out_bit = 0;
              packet_out_byte = cached_packet_out_byte_7;
            }
            *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_7) = *(unsigned int *)((char *)&g_151622778
                                                                                           + scaled_index_14);
            cached_packet_out_bit_2 = packet_out_bit;
            cached_packet_out_byte_7 = packet_out_byte + 4;
            packet_out_byte += 4;
          }
          iteration_count_14 = -1;
          do
            ++iteration_count_14;
          while ( *((_BYTE *)&g_15162277C + scaled_index_14 + iteration_count_14) );
          byte_count = iteration_count_14 & 0x3F;
          remaining_amount_7 = 6;
          if ( cached_packet_out_byte_7 < 0x10000 )
          {
            remaining_bits_6 = byte_count;
            while ( 1 )
            {
              *((_BYTE *)&packet_out_data + cached_packet_out_byte_7) &= ~(((1 << remaining_amount_7) - 1) << cached_packet_out_bit_2);
              *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_6 << SLOBYTE(packet_out_bit);
              integer_difference_7 = 8 - packet_out_bit;
              cached_packet_out_byte_7 = packet_out_byte;
              if ( remaining_amount_7 < 8 - packet_out_bit )
                break;
              cached_packet_out_bit_2 = 0;
              packet_out_bit = 0;
              if ( remaining_amount_7 == integer_difference_7 )
              {
                cached_packet_out_byte_7 = ++packet_out_byte;
                goto LABEL_168;
              }
              cached_packet_out_byte_7 = packet_out_byte + 1;
              remaining_bits_6 >>= integer_difference_7;
              remaining_amount_7 -= integer_difference_7;
              ++packet_out_byte;
              if ( remaining_amount_7 <= 0 )
                goto LABEL_168;
            }
            cached_packet_out_bit_2 = remaining_amount_7 + packet_out_bit;
            packet_out_bit += remaining_amount_7;
LABEL_168:
            if ( cached_packet_out_byte_7 < 0x10000 )
            {
              if ( cached_packet_out_bit_2 > 0 )
              {
                ++cached_packet_out_byte_7;
                packet_out_bit = 0;
                packet_out_byte = cached_packet_out_byte_7;
              }
              crt_memcpy(
                (__m128i *)((char *)&packet_out_data + cached_packet_out_byte_7),
                (     __m128i *)((char *)&g_15162277C + scaled_index_14),
                byte_count);
              cached_packet_out_bit_2 = packet_out_bit;
              cached_packet_out_byte_7 = byte_count + packet_out_byte;
              packet_out_byte = cached_packet_out_byte_7;
              if ( cached_packet_out_byte_7 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++cached_packet_out_byte_7;
                  packet_out_bit = 0;
                  packet_out_byte = cached_packet_out_byte_7;
                }
                *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_7) = *(unsigned int *)((char *)&g_1516227BC
                                                                                               + scaled_index_14);
                cached_packet_out_bit_2 = packet_out_bit;
                cached_packet_out_byte_7 = packet_out_byte + 4;
                packet_out_byte += 4;
              }
            }
          }
          ++iteration_count_13;
          --remaining_count_6;
        }
        while ( remaining_count_6 );
      }
      sr_net_write_bits(&dword_140404A6C[scaled_index_9 + 71856282], 8);
      sub_140110D00(saved_iteration_count_2, table_value_4);
      sub_14002DB60(saved_iteration_count_2, dword_140404A6C[scaled_index_20 + 438887411]);
      remaining_count_7 = 8;
      state_address_4 = &dword_140404A6C[scaled_index_20 + 438887429];
      scaled_index_21 = 47224LL * saved_iteration_count_2;
      state_address_8 = &dword_140404A6C[scaled_index_20 + 438887429];
      encoded_value_7 = &dword_140404A6C[scaled_index_21 + 438887429];
      saved_remaining_count = 8;
      saved_encoded_value = &dword_140404A6C[scaled_index_21 + 438887429];
      do
      {
        sr_net_write_bits(encoded_value_7 - 1, 1);
        if ( !*(state_address_4 - 1) )
          goto LABEL_194;
        sr_net_write_bits(encoded_value_7, 8);
        sr_net_write_bits(encoded_value_7 + 1, 8);
        sr_net_write_bits(encoded_value_7 + 2, 8);
        scaled_index_15 = (int)*state_address_4;
        scaled_index_16 = 32901 * scaled_index_15;
        scaled_index_17 = dword_140404A6C[32901 * scaled_index_15 + 299853696] & 0x3F;
        dword_140404A6C[32901 * scaled_index_15 + 299853696] = scaled_index_17;
        masked_bits_3 = ((_BYTE)scaled_index_17 - 4) & 0x3F;
        if ( (_DWORD)masked_bits_3 == scaled_index_17 )
        {
LABEL_194:
          cached_packet_out_byte_8 = packet_out_byte;
        }
        else
        {
          cached_packet_out_byte_8 = packet_out_byte;
          scaled_index_18 = 32901 * scaled_index_15;
          do
          {
            remaining_amount_8 = 6;
            if ( cached_packet_out_byte_8 < 0x10000 )
            {
              cached_packet_out_bit_3 = packet_out_bit;
              remaining_bits_7 = masked_bits_3;
              while ( 1 )
              {
                *((_BYTE *)&packet_out_data + cached_packet_out_byte_8) &= ~(((1 << remaining_amount_8) - 1) << cached_packet_out_bit_3);
                *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_7 << SLOBYTE(packet_out_bit);
                integer_difference_8 = 8 - packet_out_bit;
                if ( remaining_amount_8 < 8 - packet_out_bit )
                  break;
                packet_out_bit = 0;
                if ( remaining_amount_8 == integer_difference_8 )
                {
                  ++packet_out_byte;
                  goto LABEL_188;
                }
                remaining_amount_8 -= integer_difference_8;
                cached_packet_out_byte_8 = packet_out_byte + 1;
                remaining_bits_7 >>= integer_difference_8;
                ++packet_out_byte;
                cached_packet_out_bit_3 = 0;
                if ( remaining_amount_8 <= 0 )
                  goto LABEL_188;
              }
              packet_out_bit += remaining_amount_8;
            }
LABEL_188:
            sr_net_write_bits(&dword_140404A6C[scaled_index_18 + 299853762 + masked_bits_3], 11);
            sr_net_write_bits(&dword_140404A6C[scaled_index_18 + 299853698 + masked_bits_3], 2);
            byte_count_2 = (int)dword_140404A6C[scaled_index_18 + 299853762 + masked_bits_3];
            cached_packet_out_byte_8 = packet_out_byte;
            if ( (int)packet_out_byte < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                cached_packet_out_byte_8 = packet_out_byte + 1;
                packet_out_bit = 0;
                ++packet_out_byte;
              }
              crt_memcpy(
                (__m128i *)((char *)&packet_out_data + cached_packet_out_byte_8),
                (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)masked_bits_3 + 299853826 + scaled_index_16],
                byte_count_2);
              cached_packet_out_byte_8 = byte_count_2 + packet_out_byte;
              packet_out_byte += byte_count_2;
            }
            masked_bits_3 = ((_BYTE)masked_bits_3 + 1) & 0x3F;
          }
          while ( (_DWORD)masked_bits_3 != scaled_index_17 );
          encoded_value_7 = saved_encoded_value;
          state_address_4 = state_address_8;
          remaining_count_7 = saved_remaining_count;
        }
        encoded_value_7 += 10;
        state_address_4 += 10;
        --remaining_count_7;
        saved_encoded_value = encoded_value_7;
        saved_remaining_count = remaining_count_7;
        state_address_8 = state_address_4;
      }
      while ( remaining_count_7 );
      cached_world_event_count = world_event_count;
      remaining_amount_9 = 16;
      cached_packet_out_bit_4 = packet_out_bit;
      if ( cached_packet_out_byte_8 < 0x10000 )
      {
        loword_result_2 = LOWORD(world_event_count);
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_8) &= ~(((1 << remaining_amount_9) - 1) << cached_packet_out_bit_4);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)loword_result_2 << SLOBYTE(packet_out_bit);
          integer_difference_9 = 8 - packet_out_bit;
          cached_packet_out_byte_8 = packet_out_byte;
          if ( remaining_amount_9 < 8 - packet_out_bit )
            break;
          cached_packet_out_bit_4 = 0;
          packet_out_bit = 0;
          if ( remaining_amount_9 == integer_difference_9 )
          {
            cached_packet_out_byte_8 = ++packet_out_byte;
            goto LABEL_204;
          }
          cached_packet_out_byte_8 = packet_out_byte + 1;
          loword_result_2 >>= integer_difference_9;
          remaining_amount_9 -= integer_difference_9;
          ++packet_out_byte;
          if ( remaining_amount_9 <= 0 )
            goto LABEL_204;
        }
        cached_packet_out_bit_4 = remaining_amount_9 + packet_out_bit;
        packet_out_bit += remaining_amount_9;
      }
LABEL_204:
      LOBYTE(remaining_count_7) = 0;
      table_value_7 = dword_140404A6C[scaled_index_20 + 438887424];
      integer_difference_10 = cached_world_event_count - table_value_7 + 0x10000;
      if ( cached_world_event_count >= table_value_7 )
        integer_difference_10 = cached_world_event_count - table_value_7;
      if ( integer_difference_10 > 63 )
        integer_difference_10 = 63;
      remaining_amount_10 = 6;
      if ( !item_link_peer_count )
        integer_difference_10 = 0;
      if ( cached_packet_out_byte_8 < 0x10000 )
      {
        saved_cached_packet_out_bit = cached_packet_out_bit_4;
        remaining_bits_8 = integer_difference_10 & 0x3F;
        saved_cached_packet_out_byte = cached_packet_out_byte_8;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + saved_cached_packet_out_byte) &= ~(((1 << remaining_amount_10) - 1) << saved_cached_packet_out_bit);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_bits_8 << SLOBYTE(packet_out_bit);
          integer_difference_11 = 8 - packet_out_bit;
          if ( remaining_amount_10 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( remaining_amount_10 == integer_difference_11 )
          {
            ++packet_out_byte;
            goto LABEL_218;
          }
          remaining_amount_10 -= integer_difference_11;
          saved_cached_packet_out_byte = packet_out_byte + 1;
          remaining_bits_8 >>= integer_difference_11;
          ++packet_out_byte;
          saved_cached_packet_out_bit = 0;
          if ( remaining_amount_10 <= 0 )
            goto LABEL_218;
        }
        packet_out_bit += remaining_amount_10;
      }
LABEL_218:
      scaled_index_19 = 47224LL * saved_iteration_count_2;
      sr_net_write_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_21 * 4 + 1759763052), 16);
      iteration_count_2 = saved_iteration_count_2;
      if ( integer_difference_10 > 0 )
      {
        remaining_count_8 = (unsigned int)integer_difference_10;
        LOBYTE(remaining_count_7) = integer_difference_10;
        do
        {
          sub_14010EFF0(table_value_7, saved_iteration_count_2);
          table_value_7 = (unsigned __int16)(table_value_7 + 1);
          --remaining_count_8;
        }
        while ( remaining_count_8 );
        scaled_index_19 = 47224LL * saved_iteration_count_2;
      }
      cached_packet_out_byte_9 = packet_out_byte;
      cached_packet_out_bit_5 = packet_out_bit;
      remaining_amount_11 = 6;
      dword_140404A6C[scaled_index_20 + 438887424] = table_value_7;
      packet_out_byte = cached_packet_out_byte_8;
      packet_out_bit = cached_packet_out_bit_4;
      if ( cached_packet_out_byte_8 < 0x10000 )
      {
        do
        {
          *((_BYTE *)&packet_out_data + cached_packet_out_byte_8) &= ~(((1 << remaining_amount_11) - 1) << cached_packet_out_bit_4);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)remaining_count_7 << SLOBYTE(packet_out_bit);
          integer_difference_12 = 8 - packet_out_bit;
          if ( remaining_amount_11 <= 8 - packet_out_bit )
            break;
          remaining_amount_11 -= integer_difference_12;
          cached_packet_out_byte_8 = packet_out_byte + 1;
          LODWORD(remaining_count_7) = (unsigned int)remaining_count_7 >> integer_difference_12;
          ++packet_out_byte;
          LOBYTE(cached_packet_out_bit_4) = 0;
          packet_out_bit = 0;
        }
        while ( remaining_amount_11 > 0 );
        iteration_count_2 = saved_iteration_count_2;
      }
      packet_out_byte = cached_packet_out_byte_9;
      packet_out_bit = cached_packet_out_bit_5;
      if ( cached_packet_out_byte_9 < 0x10000 )
      {
        if ( cached_packet_out_bit_5 > 0 )
        {
          packet_out_byte = ++cached_packet_out_byte_9;
          packet_out_bit = 0;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_9) = dword_140404A6C[scaled_index_19 + 438934627];
        cached_packet_out_bit_5 = packet_out_bit;
        cached_packet_out_byte_9 = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      ++dword_140404A6C[scaled_index_20 + 438934627];
      if ( cached_packet_out_byte_9 < 0x10000 )
      {
        if ( cached_packet_out_bit_5 > 0 )
        {
          packet_out_byte = ++cached_packet_out_byte_9;
          packet_out_bit = 0;
        }
        *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_9) = dword_140404A6C[scaled_index_19 + 438934625];
        cached_packet_out_byte_9 = packet_out_byte + 4;
        packet_out_byte = cached_packet_out_byte_9;
        if ( cached_packet_out_byte_9 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++cached_packet_out_byte_9;
            packet_out_bit = 0;
            packet_out_byte = cached_packet_out_byte_9;
          }
          *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_9) = dword_140404A6C[scaled_index_19 + 438934626];
          cached_packet_out_byte_9 = packet_out_byte + 4;
          packet_out_byte += 4;
        }
      }
      dword_140404A6C[scaled_index_20 + 438887412] += cached_packet_out_byte_9;
      table_value_8 = dword_140404A6C[scaled_index_20 + 438887406];
      table_value_9 = dword_140404A6C[scaled_index_20 + 438887405];
      g_1AD04ADCC = cached_packet_out_byte_9;
      sub_140130350(table_value_9, table_value_8, *(_QWORD *)&dword_140404A6C[scaled_index_20 + 438887407]);
      record_byte_offset = 0;
      goto LABEL_238;
    }
    encoded_value_2 = &g_183F7AE14;
    record_byte_offset = 3;
    encoded_value_3 = &g_183EBFDB0;
    do
    {
      sr_net_write_bits(encoded_value_3, 16);
      sr_net_write_bits(encoded_value_2, 16);
      encoded_value_3 += 5873;
      ++encoded_value_2;
      --record_byte_offset;
    }
    while ( record_byte_offset );
    goto LABEL_64;
  }
LABEL_240:
  iteration_count_15 = 0;
  saved_iteration_count_3 = 0;
  if ( (int)item_link_peer_count > 0 )
  {
    state_address_5 = &g_1A8E3DA28;
    do
    {
      if ( state_address_5[3] && (((unsigned __int8)iteration_count_15 ^ LOBYTE(game_tick)) & 0x7F) == 0 )
      {
        state_address_6 = &g_1A8E379E0;
        packet_out_data = dword_1402B2658;
        state_address_7 = &g_1A8E379E8;
        *(_QWORD *)&packet_out_byte = 5;
        remaining_count_9 = 256;
        LOBYTE(g_18539D408) = 9;
        do
        {
          sr_net_write_bits(state_address_7 - 2, 1);
          if ( *state_address_6 )
          {
            cached_packet_out_byte_10 = packet_out_byte;
            if ( (int)packet_out_byte < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                cached_packet_out_byte_10 = packet_out_byte + 1;
                packet_out_bit = 0;
                ++packet_out_byte;
              }
              *(unsigned int *)((char *)&packet_out_data + cached_packet_out_byte_10) = *state_address_7;
              iteration_count_16 = packet_out_byte + 4;
              packet_out_byte = iteration_count_16;
              if ( iteration_count_16 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++iteration_count_16;
                  packet_out_bit = 0;
                  packet_out_byte = iteration_count_16;
                }
                loaded_word = *(_OWORD *)(state_address_7 + 5);
                *(_OWORD *)((char *)&packet_out_data + iteration_count_16) = *(_OWORD *)(state_address_7 + 1);
                *(_OWORD *)((char *)&g_18539D414 + iteration_count_16) = loaded_word;
                iteration_count_17 = packet_out_byte + 32;
                packet_out_byte = iteration_count_17;
                if ( iteration_count_17 < 0x10000 )
                {
                  if ( (int)packet_out_bit > 0 )
                  {
                    ++iteration_count_17;
                    packet_out_bit = 0;
                    packet_out_byte = iteration_count_17;
                  }
                  *(unsigned int *)((char *)&packet_out_data + iteration_count_17) = state_address_7[17];
                  packet_out_byte += 4;
                }
              }
            }
          }
          state_address_7 += 20;
          state_address_6 += 20;
          --remaining_count_9;
        }
        while ( remaining_count_9 );
        sub_140130350(*(state_address_5 - 2), *((_WORD *)state_address_5 - 2), *(_QWORD *)state_address_5);
        iteration_count_15 = saved_iteration_count_3;
      }
      ++iteration_count_15;
      state_address_5 += 47224;
      saved_iteration_count_3 = iteration_count_15;
    }
    while ( iteration_count_15 < (int)item_link_peer_count );
  }
}

#undef saved_remaining_count
#undef scaled_index_20
#undef scaled_index_21
#undef cached_integer_sum
#undef masked_bits_4
#undef table_value_10
#undef saved_iteration_count_2
#undef saved_iteration_count_3
#undef saved_encoded_value
#undef saved_cached_item_link_peer_count_2
#undef state_address_8

// 140137AE6: masking with 0x3F was optimized away because esi.4 <= 0x3F

//----- (0000000140138770) ----------------------------------------------------
unsigned int *sub_140138770()
{
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *result;
  float product_difference;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float squared_component;
  float squared_component_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float squared_component_3;
  float squared_component_4;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float squared_component_5;
  float squared_component_6;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;

  g_18399DEFC = xmmword_1402792B0;
  g_18399DEE0 = 0;
  g_18399DEF4 = -1107296256;
  g_18399DF60 = xmmword_1402792B0;
  g_18399DEF8 = 0;
  g_18399DFC4 = xmmword_1402792B0;
  g_18399DF0C = 1096810496;
  g_18399DEE4 = 0;
  g_18399DF44 = 0;
  g_18399E028 = xmmword_1402792D0;
  g_18399DF58 = 1040187392;
  g_18399DF48 = xmmword_140278D50;
  g_18399DF70 = 1096810496;
  g_18399DFAC = xmmword_140278D50;
  g_18399DFA8 = 1;
  g_18399E2E4 = xmmword_1402792C0;
  g_18399DFBC = 1040187392;
  g_18399E348 = xmmword_1402792C0;
  g_18399DFD4 = 1096810496;
  g_18399E010 = xmmword_140278D60;
  g_18399E00C = 2;
  g_18399E038 = 1090519040;
  g_18399E2CC = xmmword_1402798A0;
  g_18399E020 = 1044381696;
  g_18399E2C8 = 0;
  g_18399E330 = xmmword_140278DD0;
  g_18399E2DC = 0;
  g_18399E3AC = xmmword_1402792E0;
  g_18399E2F4 = 1094713344;
  g_18399E394 = xmmword_140278EA0;
  g_18399E32C = 10;
  g_18399E340 = -1098907648;
  g_18399E460 = -1090519040;
  g_18399E4D8 = xmmword_1402792E0;
  g_18399E344 = 0;
  g_18399E4C8 = -1115684864;
  g_18399E358 = 1088421888;
  g_18399E390 = 11;
  *(unsigned int *)&g_18399E3A4 = -1098907648;
  g_18399E3A8 = 0;
  g_18399E3BC = 1077936128;
  g_18399E3F4 = 0;
  g_18399E410 = xmmword_1402792C0;
  g_18399E3FC = -1098907648;
  g_18399E400 = 0;
  g_18399E3F8 = 1035993088;
  g_18399E408 = 0;
  *(unsigned int *)&g_18399E404 = 1035993088;
  g_18399E420 = 1094713344;
  g_18399E458 = 13;
  g_18399E474 = xmmword_1402792C0;
  g_18399E464 = 0;
  g_18399E45C = 0x80000000;
  g_18399E46C = -1098907648;
  g_18399E470 = 0;
  g_18399E468 = 0x80000000;
  g_18399E484 = 1088421888;
  g_18399E4BC = 14;
  g_18399E4C4 = -1098907648;
  g_18399E4C0 = 0x80000000;
  g_18399E4D0 = -1098907648;
  state_address = &g_18399DF6C;
  g_18399E08C = xmmword_1402792A0;
  remaining_count = 4;
  g_18399E4D4 = 0;
  g_18399E0F0 = xmmword_1402792A0;
  g_18399E4CC = 0x80000000;
  g_18399E154 = xmmword_140279290;
  g_18399E4E8 = 1077936128;
  g_18399E1A4 = -1110441984;
  g_18399E074 = xmmword_1402798B0;
  g_18399E070 = 2;
  g_18399E0D8 = xmmword_140278DC0;
  g_18399E084 = 1031798784;
  g_18399E13C = xmmword_140278DB0;
  g_18399E09C = 1077936128;
  g_18399E0AC = 1052770304;
  g_18399E208 = -1096286208;
  g_18399E280 = xmmword_140279290;
  g_18399E0D4 = 4;
  g_18399E26C = -1100480512;
  g_18399E0E8 = -1104674816;
  g_18399E0EC = 0;
  g_18399E100 = 1075838976;
  g_18399E138 = 5;
  g_18399E14C = -1104674816;
  g_18399E150 = 0;
  g_18399E164 = 1069547520;
  g_18399E19C = 2;
  g_18399E1B8 = xmmword_1402792A0;
  g_18399E1A8 = 0;
  g_18399E1A0 = 1044381696;
  g_18399E1B0 = 1031798784;
  g_18399E1AC = 1044381696;
  g_18399E1C8 = 1077936128;
  g_18399E200 = 7;
  g_18399E21C = xmmword_1402792A0;
  g_18399E20C = 0;
  g_18399E204 = 0x80000000;
  g_18399E214 = -1104674816;
  g_18399E218 = 0;
  g_18399E210 = 0x80000000;
  g_18399E22C = 1075838976;
  g_18399E264 = 8;
  g_18399E270 = 0;
  g_18399E268 = 0x80000000;
  g_18399E278 = -1104674816;
  g_18399E27C = 0;
  g_18399E274 = 0x80000000;
  g_18399E290 = 1069547520;
  do
    state_address += 200;
  while ( (__int64)state_address < (__int64)&g_18399E5AC );
  result = (unsigned int *)&g_18399DF60;
  do
  {
    product_difference = *((float *)result - 25);
    combined_products = (float)(*((float *)result - 23) + *((float *)result - 23)) + product_difference;
    combined_products_2 = (float)(*((float *)result - 24) + *((float *)result - 24)) + product_difference;
    combined_products_3 = (float)(*((float *)result - 22) + *((float *)result - 22)) + product_difference;
    squared_component = combined_products * combined_products;
    squared_component_2 = combined_products_3 * combined_products_3;
    *((float *)result - 20) = 9.0 / (float)(squared_component + squared_component_2);
    *((float *)result - 19) = 9.0 / (float)((float)(combined_products_2 * combined_products_2) + squared_component_2);
    *((float *)result - 18) = 9.0 / (float)((float)(combined_products_2 * combined_products_2) + squared_component);
    *((_QWORD *)result - 8) = 0;
    *(_QWORD *)(result - 13) = 0;
    *(result - 14) = 0;
    *(_QWORD *)(result - 11) = 0;
    *(result - 9) = 0;
    *(result - 8) = 1040187392;
    weighted_sum = (float)(*((float *)result + 2) + *((float *)result + 2)) + *(float *)result;
    weighted_sum_2 = (float)(*((float *)result + 1) + *((float *)result + 1)) + *(float *)result;
    weighted_sum_3 = (float)(*((float *)result + 3) + *((float *)result + 3)) + *(float *)result;
    squared_component_3 = weighted_sum * weighted_sum;
    squared_component_4 = weighted_sum_3 * weighted_sum_3;
    *((float *)result + 5) = 9.0 / (float)(squared_component_3 + squared_component_4);
    *((float *)result + 6) = 9.0 / (float)((float)(weighted_sum_2 * weighted_sum_2) + squared_component_4);
    *((float *)result + 7) = 9.0 / (float)((float)(weighted_sum_2 * weighted_sum_2) + squared_component_3);
    *(_QWORD *)(result + 9) = 0;
    *((_QWORD *)result + 6) = 0;
    result[11] = 0;
    *((_QWORD *)result + 7) = 0;
    result[16] = 0;
    result[17] = 1040187392;
    weighted_sum_4 = *((float *)result + 25);
    weighted_sum_5 = (float)(*((float *)result + 27) + *((float *)result + 27)) + weighted_sum_4;
    weighted_sum_6 = (float)(*((float *)result + 28) + *((float *)result + 28)) + weighted_sum_4;
    weighted_sum_7 = (float)(*((float *)result + 26) + *((float *)result + 26)) + weighted_sum_4;
    squared_component_5 = weighted_sum_5 * weighted_sum_5;
    squared_component_6 = weighted_sum_6 * weighted_sum_6;
    *((float *)result + 30) = 9.0 / (float)(squared_component_5 + squared_component_6);
    *((float *)result + 31) = 9.0 / (float)((float)(weighted_sum_7 * weighted_sum_7) + squared_component_6);
    *((float *)result + 32) = 9.0 / (float)((float)(weighted_sum_7 * weighted_sum_7) + squared_component_5);
    *((_QWORD *)result + 17) = 0;
    *(_QWORD *)(result + 37) = 0;
    result[36] = 0;
    *(_QWORD *)(result + 39) = 0;
    result[41] = 0;
    result[42] = 1040187392;
    weighted_sum_8 = *((float *)result + 50);
    weighted_sum_9 = (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + weighted_sum_8)
        * (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + weighted_sum_8);
    weighted_sum_10 = (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + weighted_sum_8)
        * (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + weighted_sum_8);
    weighted_sum_11 = (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + weighted_sum_8)
        * (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + weighted_sum_8);
    *((float *)result + 55) = 9.0 / (float)(weighted_sum_9 + weighted_sum_10);
    *((float *)result + 56) = 9.0 / (float)(weighted_sum_11 + weighted_sum_10);
    *((float *)result + 57) = 9.0 / (float)(weighted_sum_11 + weighted_sum_9);
    *(_QWORD *)(result + 59) = 0;
    *((_QWORD *)result + 31) = 0;
    result[61] = 0;
    *((_QWORD *)result + 32) = 0;
    result[66] = 0;
    result[67] = 1040187392;
    result += 100;
    --remaining_count;
  }
  while ( remaining_count );
  g_18399E06C = 1038090240;
  g_18399E054 = -1089025052;
  g_18399E060 = 1058458596;
  g_18399DF38 = 0;
  g_18399DF3C = 1044381696;
  g_18399DF40 = 1040187392;
  g_18399DF9C = 0;
  g_18399DFA0 = 1040187392;
  g_18399DFA4 = 1040187392;
  g_18399E000 = 0;
  g_18399E004 = 1040187392;
  g_18399E008 = 1040187392;
  g_18399E064 = 1;
  g_18399E068 = 1031798784;
  g_18399E320 = 1;
  g_18399E324 = 1052770304;
  g_18399E328 = 1035993088;
  g_18399E384 = 1;
  g_18399E388 = 1049624576;
  g_18399E38C = 1031798784;
  g_18399E3E8 = 2;
  g_18399E3EC = 1040187392;
  g_18399E3F0 = 1031798784;
  g_18399E44C = 1;
  g_18399E450 = 1052770304;
  g_18399E454 = 1035993088;
  g_18399E4B0 = 1;
  g_18399E4B4 = 1049624576;
  g_18399E4B8 = 1031798784;
  g_18399E514 = 2;
  g_18399E518 = 1040187392;
  g_18399E51C = 1031798784;
  g_18399E0C8 = 1;
  g_18399E0CC = 1048576000;
  g_18399E0D0 = 1031798784;
  g_18399E12C = 1;
  g_18399E130 = 1048576000;
  g_18399E134 = 1031798784;
  g_18399E190 = 1;
  g_18399E194 = 1031798784;
  g_18399E198 = 1031798784;
  g_18399E1F4 = 1;
  g_18399E1F8 = 1048576000;
  g_18399E1FC = 1031798784;
  g_18399E258 = 1;
  g_18399E25C = 1048576000;
  g_18399E260 = 1031798784;
  g_18399E2BC = 1;
  g_18399E2C0 = 1031798784;
  g_18399E2C4 = 1031798784;
  g_18399DF84 = -1085730853;
  g_18399DF90 = 1053364187;
  g_18399DF88 = -1085730853;
  g_18399DF94 = 1061752795;
  g_18399DF8C = -1094119461;
  g_18399DF98 = 1053364187;
  g_18399DFE8 = -1085730853;
  g_18399DFF4 = 1053364187;
  g_18399DFEC = -1085730853;
  g_18399DFF8 = 1061752795;
  g_18399DFF0 = -1094119461;
  g_18399DFFC = 1053364187;
  g_18399E04C = -1085730853;
  g_18399E058 = 1061752795;
  g_18399E050 = -1080636444;
  g_18399E05C = 1066847204;
  g_18399E308 = -1078989345;
  g_18399E314 = 1070141403;
  g_18399E30C = -1094119461;
  g_18399E318 = 1053364187;
  g_18399E310 = -1094119461;
  g_18399E31C = 1053364187;
  g_18399E36C = -1070600737;
  g_18399E378 = 0;
  g_18399E370 = 0;
  g_18399E380 = 0;
  g_18399E3D0 = -1085730853;
  g_18399E3DC = 1061752795;
  g_18399E3D4 = -1085730853;
  g_18399E3E0 = 1061752795;
  g_18399E3D8 = -1094119461;
  g_18399E3E4 = 1053364187;
  g_18399E434 = -1078989345;
  g_18399E440 = 1070141403;
  g_18399E438 = -1094119461;
  g_18399E444 = 1053364187;
  g_18399E43C = -1094119461;
  g_18399E448 = 1053364187;
  g_18399E498 = -1070600737;
  g_18399E4A4 = 0;
  g_18399E49C = 0;
  g_18399E4AC = 0;
  g_18399E4FC = -1085730853;
  g_18399E508 = 1061752795;
  g_18399E500 = -1085730853;
  g_18399E50C = 1061752795;
  g_18399E504 = -1094119461;
  g_18399E510 = 1053364187;
  g_18399E0B0 = -1077342245;
  g_18399E0BC = 1070141403;
  g_18399E0B4 = -1080636444;
  g_18399E0C0 = 1066847204;
  g_18399E0B8 = -1077342245;
  g_18399E0C4 = 1070141403;
  g_18399E114 = 0;
  g_18399E120 = 1070141403;
  g_18399E11C = 0;
  g_18399E128 = 0;
  g_18399E178 = -1077342245;
  g_18399E184 = 1070141403;
  g_18399E17C = -1085730853;
  g_18399E188 = 1061752795;
  g_18399E180 = -1074048047;
  g_18399E18C = 1073435601;
  g_18399E1DC = -1077342245;
  g_18399E1E8 = 1070141403;
  g_18399E1E0 = -1080636444;
  g_18399E1EC = 1066847204;
  g_18399E1E4 = -1077342245;
  g_18399E1F0 = 1070141403;
  g_18399E240 = 0;
  g_18399E24C = 1070141403;
  g_18399E248 = 0;
  g_18399E254 = 0;
  g_18399E2A4 = -1077342245;
  g_18399E2B0 = 1070141403;
  g_18399E2A8 = -1085730853;
  g_18399E2B4 = 1061752795;
  g_18399E2AC = -1074048047;
  g_18399E2B8 = 1073435601;
  return result;
}

//----- (000000014018D9F0) ----------------------------------------------------
__int64            sub_14018D9F0(int a1)
{
  __int64 human_record_offset;
  unsigned int saved_decoded_value;
  unsigned int decoded_value;

  human_record_offset = 7166LL * a1;
  sr_net_read_bits(&decoded_value, 8);
  saved_decoded_value = decoded_value;
  if ( decoded_value == 255 )
    saved_decoded_value = -1;
  dword_140404A6C[human_record_offset + 280651305] = saved_decoded_value;
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658439], 1);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658440], 5);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658441], 3);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658443], 4);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658444], 3);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658442], 4);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658445], 5);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658446], 4);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658447], 4);
  sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658449], 4);
  return sr_net_read_bits(&dword_140404A6C[human_record_offset + 280658450], 2);
}

