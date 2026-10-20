#include "shared_client.h"

//----- (00000001401449C0) ----------------------------------------------------
double            sub_1401449C0(int a1, int a2)
{
  int cached_mesh_triangle_count;
  signed int iteration_count;
  int iteration_count_2;
  float *state_address;
  __int64 loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word_2;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  __int64 loaded_word_3;
  float *product_difference;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  int iteration_count_3;
  unsigned int *state_address_2;
  int cached_integer_sum;
  unsigned int *state_address_3;
  int running_total;
  unsigned int *state_address_4;
  int integer_sum;
  int iteration_count_4;
  int running_total_2;
  int *running_total_3;
  int *running_total_4;
  int element_index;
  unsigned int *saved_state_address;
  _DWORD *buffer_cursor;
  __int64 remaining_count;
  __int64 scaled_index;
  unsigned int scaled_index_2;
  __int64 scaled_index_3;
  int scaled_index_4;
  __int64 scaled_index_5;
  unsigned int scaled_index_6;
  __int64 scaled_index_7;
  int scaled_index_8;
  __int64 scaled_index_9;
  unsigned int scaled_index_10;
  __int64 scaled_index_11;
  int scaled_index_12;
  int element_index_2;
  signed int state_word;
  __int64 element_index_3;
  signed int state_word_2;
  signed int state_word_3;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  unsigned int scaled_index_17;
  unsigned int table_value;
  unsigned int scaled_index_18;
  __int64 scaled_index_19;
  int scaled_index_20;
  int scaled_index_21;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  unsigned int scaled_index_26;
  unsigned int table_value_2;
  unsigned int scaled_index_27;
  __int64 scaled_index_28;
  int integer_sum_2;
  __int64 scaled_index_29;
  __int64 scaled_index_30;
  __int64 scaled_index_31;
  __int64 scaled_index_32;
  unsigned int scaled_index_33;
  unsigned int table_value_3;
  unsigned int scaled_index_34;
  __int64 scaled_index_35;
  unsigned int state_word_4;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  unsigned int scaled_index_36;
  float weighted_sum_7;
  unsigned int scaled_index_37;
  float weighted_sum_8;
  unsigned int scaled_index_38;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  unsigned int scaled_index_39;
  float weighted_sum_13;
  unsigned int scaled_index_40;
  float weighted_sum_14;
  unsigned int scaled_index_41;
  float weighted_sum_15;
  unsigned int scaled_index_42;
  float weighted_sum_16;
  unsigned int scaled_index_43;
  float weighted_sum_17;
  unsigned int scaled_index_44;
  float weighted_sum_18;
  int iteration_count_5;
  unsigned int *state_address_5;
  int iteration_count_6;
  int running_total_5;
  int running_total_6;
  unsigned int *state_address_6;
  int iteration_count_7;
  int running_total_7;
  unsigned int *state_address_7;
  unsigned int *state_address_8;
  unsigned int scaled_index_45;
  int scaled_index_46;
  unsigned int scaled_index_47;
  unsigned int table_value_4;
  unsigned int saved_running_total;
  __int64 record_word_offset;
  void *allocation_buffer;
  __m128i *allocated_buffer;
  unsigned int scaled_index_48;
  unsigned int cached_mesh_triangle_count_2;
  void *allocation_buffer_2;
  __int64 allocated_buffer_2;
  bool comparison_result;
  __int64 record_byte_offset;
  __int64 record_byte_offset_2;
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
  unsigned int state_word_5;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unrecovered_register_value;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401449C0[176];
#define state_address_9 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 0)) /* [rsp+20h] */
#define state_address_10 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 168)) /* [rsp+C8h] */

  cached_mesh_triangle_count = mesh_triangle_count;
  iteration_count = 0;
  iteration_count_2 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    state_address = (float *)&g_16AA53DB8;
    do
    {
      loaded_word = 3 * *((_DWORD *)state_address - 319491);
      weighted_sum = *(float *)&dword_140404A6C[loaded_word + 177167567];
      weighted_sum_2 = *(float *)&dword_140404A6C[loaded_word + 177167568];
      weighted_sum_3 = *(float *)&dword_140404A6C[loaded_word + 177167569];
      loaded_word_2 = 3 * *((_DWORD *)state_address - 319490);
      combined_products = *(float *)&dword_140404A6C[loaded_word_2 + 177167568] - weighted_sum_2;
      combined_products_2 = *(float *)&dword_140404A6C[loaded_word_2 + 177167569] - weighted_sum_3;
      combined_products_3 = *(float *)&dword_140404A6C[loaded_word_2 + 177167567] - weighted_sum;
      loaded_word_3 = 3 * *((_DWORD *)state_address - 319489);
      product_difference = state_address - 2;
      combined_products_4 = *(float *)&dword_140404A6C[loaded_word_3 + 177167568] - weighted_sum_2;
      combined_products_5 = *(float *)&dword_140404A6C[loaded_word_3 + 177167569] - weighted_sum_3;
      combined_products_6 = *(float *)&dword_140404A6C[loaded_word_3 + 177167567] - weighted_sum;
      *product_difference = (float)(combined_products_4 * combined_products_2) - (float)(combined_products_5 * combined_products);
      *state_address = (float)(combined_products * combined_products_6) - (float)(combined_products_4 * combined_products_3);
      *(state_address - 1) = (float)(combined_products_5 * combined_products_3) - (float)(combined_products_2 * combined_products_6);
      sr_math_vec3_normalize((__int64)product_difference, product_difference);
      cached_mesh_triangle_count = mesh_triangle_count;
      ++iteration_count_2;
      state_address += 3;
    }
    while ( iteration_count_2 < (int)mesh_triangle_count );
  }
  iteration_count_3 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address_2 = &g_16ABA3DB4;
    do
    {
      *(_QWORD *)(state_address_2 - 1) = -1;
      ++iteration_count_3;
      state_address_2[1] = -1;
      state_address_2 += 3;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_3 < (int)mesh_triangle_count );
  }
  cached_integer_sum = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address_3 = &g_16ABA3DB0;
    running_total = 0;
    state_address_4 = &g_16ABE3DB4;
    state_address_9 = &g_16ABA3DB0;
    state_address_10 = &g_16ABE3DB4;
    do
    {
      integer_sum = cached_integer_sum + 1;
      iteration_count_4 = cached_integer_sum + 1;
      if ( cached_integer_sum + 1 < cached_mesh_triangle_count )
      {
        running_total_2 = running_total + 5;
        running_total_3 = (int *)(state_address_4 + 8);
        running_total_4 = (int *)(state_address_3 + 3);
        do
        {
          element_index = 0;
          saved_state_address = state_address_4;
          buffer_cursor = state_address_3;
          remaining_count = 3;
          do
          {
            if ( *buffer_cursor == -1 )
            {
              if ( *running_total_4 == -1 )
              {
                scaled_index = 3 * *(buffer_cursor - 663553);
                scaled_index_2 = 3 * dword_140404A6C[running_total_2 + 177495247];
                if ( *(float *)&dword_140404A6C[scaled_index_2 + 177167567] == *(float *)&dword_140404A6C[scaled_index + 177167567]
                  && *(float *)&dword_140404A6C[scaled_index_2 + 177167568] == *(float *)&dword_140404A6C[scaled_index + 177167568]
                  && *(float *)&dword_140404A6C[scaled_index_2 + 177167569] == *(float *)&dword_140404A6C[scaled_index + 177167569] )
                {
                  scaled_index_3 = (int)(3 * dword_140404A6C[running_total + 177495248 + (element_index + 1) % 3]);
                  scaled_index_4 = 3 * *(running_total_4 - 663553);
                  if ( *(float *)&dword_140404A6C[scaled_index_4 + 177167567] == *(float *)&dword_140404A6C[scaled_index_3 + 177167567]
                    && *(float *)&dword_140404A6C[scaled_index_4 + 177167568] == *(float *)&dword_140404A6C[scaled_index_3 + 177167568]
                    && *(float *)&dword_140404A6C[scaled_index_4 + 177167569] == *(float *)&dword_140404A6C[scaled_index_3 + 177167569] )
                  {
                    *buffer_cursor = iteration_count_4;
                    *saved_state_address = 2;
                    *running_total_4 = cached_integer_sum;
                    *(running_total_3 - 2) = (element_index + 2) % 3;
                  }
                }
              }
              if ( *buffer_cursor == -1 )
              {
                if ( running_total_4[1] == -1 )
                {
                  scaled_index_5 = 3 * *(buffer_cursor - 663553);
                  scaled_index_6 = 3 * dword_140404A6C[running_total_2 + 177495248];
                  if ( *(float *)&dword_140404A6C[scaled_index_6 + 177167567] == *(float *)&dword_140404A6C[scaled_index_5 + 177167567]
                    && *(float *)&dword_140404A6C[scaled_index_6 + 177167568] == *(float *)&dword_140404A6C[scaled_index_5 + 177167568]
                    && *(float *)&dword_140404A6C[scaled_index_6 + 177167569] == *(float *)&dword_140404A6C[scaled_index_5 + 177167569] )
                  {
                    scaled_index_7 = (int)(3 * dword_140404A6C[running_total + 177495248 + (element_index + 1) % 3]);
                    scaled_index_8 = 3 * *(running_total_4 - 663552);
                    if ( *(float *)&dword_140404A6C[scaled_index_8 + 177167567] == *(float *)&dword_140404A6C[scaled_index_7 + 177167567]
                      && *(float *)&dword_140404A6C[scaled_index_8 + 177167568] == *(float *)&dword_140404A6C[scaled_index_7 + 177167568]
                      && *(float *)&dword_140404A6C[scaled_index_8 + 177167569] == *(float *)&dword_140404A6C[scaled_index_7 + 177167569] )
                    {
                      *buffer_cursor = iteration_count_4;
                      *saved_state_address = 0;
                      running_total_4[1] = cached_integer_sum;
                      *running_total_3 = (element_index + 2) % 3;
                    }
                  }
                }
                if ( *buffer_cursor == -1 && running_total_4[2] == -1 )
                {
                  scaled_index_9 = 3 * *(buffer_cursor - 663553);
                  scaled_index_10 = 3 * dword_140404A6C[running_total_2 + 177495246];
                  if ( *(float *)&dword_140404A6C[scaled_index_10 + 177167567] == *(float *)&dword_140404A6C[scaled_index_9 + 177167567]
                    && *(float *)&dword_140404A6C[scaled_index_10 + 177167568] == *(float *)&dword_140404A6C[scaled_index_9 + 177167568]
                    && *(float *)&dword_140404A6C[scaled_index_10 + 177167569] == *(float *)&dword_140404A6C[scaled_index_9 + 177167569] )
                  {
                    scaled_index_11 = (int)(3 * dword_140404A6C[running_total + 177495248 + (element_index + 1) % 3]);
                    scaled_index_12 = 3 * *(running_total_4 - 663551);
                    if ( *(float *)&dword_140404A6C[scaled_index_12 + 177167567] == *(float *)&dword_140404A6C[scaled_index_11 + 177167567]
                      && *(float *)&dword_140404A6C[scaled_index_12 + 177167568] == *(float *)&dword_140404A6C[scaled_index_11 + 177167568]
                      && *(float *)&dword_140404A6C[scaled_index_12 + 177167569] == *(float *)&dword_140404A6C[scaled_index_11 + 177167569] )
                    {
                      *buffer_cursor = iteration_count_4;
                      *saved_state_address = 1;
                      running_total_4[2] = cached_integer_sum;
                      running_total_3[2] = (element_index + 2) % 3;
                    }
                  }
                }
              }
            }
            ++element_index;
            ++buffer_cursor;
            saved_state_address += 2;
            --remaining_count;
          }
          while ( remaining_count );
          cached_mesh_triangle_count = mesh_triangle_count;
          ++iteration_count_4;
          state_address_3 = state_address_9;
          running_total_2 += 3;
          state_address_4 = state_address_10;
          running_total_4 += 3;
          running_total_3 += 6;
        }
        while ( iteration_count_4 < (int)mesh_triangle_count );
        integer_sum = cached_integer_sum + 1;
      }
      state_address_4 += 6;
      state_address_3 += 3;
      running_total += 3;
      state_address_10 = state_address_4;
      state_address_9 = state_address_3;
      cached_integer_sum = integer_sum;
    }
    while ( integer_sum < cached_mesh_triangle_count );
  }
  g_16A7DBDA4 = 8;
  element_index_2 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_word = g_183EBC244;
    element_index_3 = 0;
    state_word_2 = g_183EBC340;
    state_word_3 = g_183EBC2C4;
    do
    {
      scaled_index_13 = (int)(3 * dword_140404A6C[3 * element_index_3 + 177495248]);
      scaled_index_14 = 3 * element_index_2 * g_16A7DBDA4;
      dword_140404A6C[scaled_index_14 + 177347791] = dword_140404A6C[scaled_index_13 + 177167567];
      dword_140404A6C[scaled_index_14 + 177347792] = dword_140404A6C[scaled_index_13 + 177167568];
      dword_140404A6C[scaled_index_14 + 177347793] = dword_140404A6C[scaled_index_13 + 177167569];
      scaled_index_15 = 3 * element_index_2 * g_16A7DBDA4;
      dword_140404A6C[scaled_index_15 + 177347794] = dword_140404A6C[6 * element_index_3 + 178011345];
      dword_140404A6C[scaled_index_15 + 177347795] = dword_140404A6C[6 * element_index_3 + 178011346];
      if ( a2 || (table_value = dword_140404A6C[element_index_3 + 178207953], table_value == -2) )
      {
        scaled_index_16 = 3 * element_index_2 * g_16A7DBDA4;
        dword_140404A6C[scaled_index_16 + 177347796] = dword_140404A6C[3 * element_index_3 + 177814737];
        dword_140404A6C[scaled_index_16 + 177347797] = dword_140404A6C[3 * element_index_3 + 177814738];
        scaled_index_17 = dword_140404A6C[3 * element_index_3 + 177814739];
      }
      else
      {
        if ( table_value == -1 )
          scaled_index_18 = dword_140404A6C[3 * element_index_3 + 177495248];
        else
          scaled_index_18 = dword_140404A6C[element_index_2 + table_value + 2 * element_index_2 + 177495248];
        scaled_index_19 = (int)(3 * scaled_index_18);
        scaled_index_16 = 3 * element_index_2 * g_16A7DBDA4;
        dword_140404A6C[scaled_index_16 + 177347796] = dword_140404A6C[scaled_index_19 + 177249487];
        dword_140404A6C[scaled_index_16 + 177347797] = dword_140404A6C[scaled_index_19 + 177249488];
        scaled_index_17 = dword_140404A6C[scaled_index_19 + 177249489];
      }
      dword_140404A6C[scaled_index_16 + 177347798] = scaled_index_17;
      scaled_index_20 = 3 * element_index_2;
      scaled_index_21 = 3 * element_index_2 + 1;
      scaled_index_22 = (int)(3 * dword_140404A6C[3 * element_index_3 + 177495249]);
      scaled_index_23 = g_16A7DBDA4 * scaled_index_21;
      dword_140404A6C[scaled_index_23 + 177347791] = dword_140404A6C[scaled_index_22 + 177167567];
      dword_140404A6C[scaled_index_23 + 177347792] = dword_140404A6C[scaled_index_22 + 177167568];
      dword_140404A6C[scaled_index_23 + 177347793] = dword_140404A6C[scaled_index_22 + 177167569];
      scaled_index_24 = g_16A7DBDA4 * scaled_index_21;
      dword_140404A6C[scaled_index_24 + 177347794] = dword_140404A6C[6 * element_index_3 + 178011347];
      dword_140404A6C[scaled_index_24 + 177347795] = dword_140404A6C[6 * element_index_3 + 178011348];
      if ( a2 || (table_value_2 = dword_140404A6C[element_index_3 + 178207953], table_value_2 == -2) )
      {
        scaled_index_25 = g_16A7DBDA4 * scaled_index_21;
        dword_140404A6C[scaled_index_25 + 177347796] = dword_140404A6C[3 * element_index_3 + 177814737];
        dword_140404A6C[scaled_index_25 + 177347797] = dword_140404A6C[3 * element_index_3 + 177814738];
        scaled_index_26 = dword_140404A6C[3 * element_index_3 + 177814739];
      }
      else
      {
        if ( table_value_2 == -1 )
          scaled_index_27 = dword_140404A6C[3 * element_index_3 + 177495249];
        else
          scaled_index_27 = dword_140404A6C[scaled_index_20 + table_value_2 + 177495248];
        scaled_index_28 = (int)(3 * scaled_index_27);
        scaled_index_25 = g_16A7DBDA4 * scaled_index_21;
        dword_140404A6C[scaled_index_25 + 177347796] = dword_140404A6C[scaled_index_28 + 177249487];
        dword_140404A6C[scaled_index_25 + 177347797] = dword_140404A6C[scaled_index_28 + 177249488];
        scaled_index_26 = dword_140404A6C[scaled_index_28 + 177249489];
      }
      dword_140404A6C[scaled_index_25 + 177347798] = scaled_index_26;
      integer_sum_2 = scaled_index_20 + 2;
      scaled_index_29 = (int)(3 * dword_140404A6C[3 * element_index_3 + 177495250]);
      scaled_index_30 = g_16A7DBDA4 * (scaled_index_20 + 2);
      dword_140404A6C[scaled_index_30 + 177347791] = dword_140404A6C[scaled_index_29 + 177167567];
      dword_140404A6C[scaled_index_30 + 177347792] = dword_140404A6C[scaled_index_29 + 177167568];
      dword_140404A6C[scaled_index_30 + 177347793] = dword_140404A6C[scaled_index_29 + 177167569];
      scaled_index_31 = g_16A7DBDA4 * (scaled_index_20 + 2);
      dword_140404A6C[scaled_index_31 + 177347794] = dword_140404A6C[6 * element_index_3 + 178011349];
      dword_140404A6C[scaled_index_31 + 177347795] = dword_140404A6C[6 * element_index_3 + 178011350];
      if ( a2 || (table_value_3 = dword_140404A6C[element_index_3 + 178207953], table_value_3 == -2) )
      {
        scaled_index_32 = g_16A7DBDA4 * integer_sum_2;
        dword_140404A6C[scaled_index_32 + 177347796] = dword_140404A6C[3 * element_index_3 + 177814737];
        dword_140404A6C[scaled_index_32 + 177347797] = dword_140404A6C[3 * element_index_3 + 177814738];
        scaled_index_33 = dword_140404A6C[3 * element_index_3 + 177814739];
      }
      else
      {
        if ( table_value_3 == -1 )
          scaled_index_34 = dword_140404A6C[3 * element_index_3 + 177495250];
        else
          scaled_index_34 = dword_140404A6C[scaled_index_20 + table_value_3 + 177495248];
        scaled_index_35 = (int)(3 * scaled_index_34);
        scaled_index_32 = g_16A7DBDA4 * integer_sum_2;
        dword_140404A6C[scaled_index_32 + 177347796] = dword_140404A6C[scaled_index_35 + 177249487];
        dword_140404A6C[scaled_index_32 + 177347797] = dword_140404A6C[scaled_index_35 + 177249488];
        scaled_index_33 = dword_140404A6C[scaled_index_35 + 177249489];
      }
      state_word_4 = g_183EBB728;
      dword_140404A6C[scaled_index_32 + 177347798] = scaled_index_33;
      if ( a1 >= state_word && a1 <= (int)g_183EBC2C0 || a1 >= state_word_3 && a1 <= state_word_2 )
      {
        weighted_sum_4 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347795];
        if ( weighted_sum_4 >= 0.9375 && weighted_sum_4 < 1.0 )
          dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347794] = 1099169792;
        weighted_sum_5 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347795];
        if ( weighted_sum_5 >= 0.9375 && weighted_sum_5 < 1.0 )
          dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347794] = 1099169792;
        weighted_sum_6 = *(float *)&dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347795];
        if ( weighted_sum_6 >= 0.9375 && weighted_sum_6 < 1.0 )
          dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347794] = 1099169792;
        scaled_index_36 = g_16A7DBDA4 * scaled_index_20;
        weighted_sum_7 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347795];
        if ( weighted_sum_7 >= 0.8125 && weighted_sum_7 < 0.875 && *(float *)&dword_140404A6C[scaled_index_36 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_36 + 177347794] = 1099169792;
        scaled_index_37 = g_16A7DBDA4 * scaled_index_21;
        weighted_sum_8 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347795];
        if ( weighted_sum_8 >= 0.8125 && weighted_sum_8 < 0.875 && *(float *)&dword_140404A6C[scaled_index_37 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_37 + 177347794] = 1099169792;
        scaled_index_38 = g_16A7DBDA4 * integer_sum_2;
        weighted_sum_9 = *(float *)&dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347795];
        if ( weighted_sum_9 >= 0.8125 && weighted_sum_9 < 0.875 && *(float *)&dword_140404A6C[scaled_index_38 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_38 + 177347794] = 1099169792;
        weighted_sum_10 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347795];
        if ( weighted_sum_10 >= 0.75 && weighted_sum_10 < 0.8125 )
          dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347794] = 1099694080;
        weighted_sum_11 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347795];
        if ( weighted_sum_11 >= 0.75 && weighted_sum_11 < 0.8125 )
          dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347794] = 1099694080;
        weighted_sum_12 = *(float *)&dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347795];
        if ( weighted_sum_12 >= 0.75 && weighted_sum_12 < 0.8125 )
          dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347794] = 1099694080;
        scaled_index_39 = g_16A7DBDA4 * scaled_index_20;
        weighted_sum_13 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_20 + 177347795];
        if ( weighted_sum_13 >= 0.875 && weighted_sum_13 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_39 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_39 + 177347794] = 1100218368;
        scaled_index_40 = g_16A7DBDA4 * scaled_index_21;
        weighted_sum_14 = *(float *)&dword_140404A6C[g_16A7DBDA4 * scaled_index_21 + 177347795];
        if ( weighted_sum_14 >= 0.875 && weighted_sum_14 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_40 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_40 + 177347794] = 1100218368;
        scaled_index_41 = g_16A7DBDA4 * integer_sum_2;
        weighted_sum_15 = *(float *)&dword_140404A6C[g_16A7DBDA4 * integer_sum_2 + 177347795];
        if ( weighted_sum_15 >= 0.875 && weighted_sum_15 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_41 + 177347794] < 0.5 )
          dword_140404A6C[scaled_index_41 + 177347794] = 1100218368;
      }
      if ( a1 == state_word_4 )
      {
        scaled_index_42 = g_16A7DBDA4 * scaled_index_20;
        weighted_sum_16 = *(float *)&dword_140404A6C[scaled_index_42 + 177347795];
        if ( weighted_sum_16 >= 0.875 && weighted_sum_16 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_42 + 177347794] < 0.0625 )
          dword_140404A6C[scaled_index_42 + 177347794] = 1099169792;
        scaled_index_43 = g_16A7DBDA4 * scaled_index_21;
        weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index_43 + 177347795];
        if ( weighted_sum_17 >= 0.875 && weighted_sum_17 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_43 + 177347794] < 0.0625 )
          dword_140404A6C[scaled_index_43 + 177347794] = 1099169792;
        scaled_index_44 = g_16A7DBDA4 * integer_sum_2;
        weighted_sum_18 = *(float *)&dword_140404A6C[scaled_index_44 + 177347795];
        if ( weighted_sum_18 >= 0.875 && weighted_sum_18 < 0.9375 && *(float *)&dword_140404A6C[scaled_index_44 + 177347794] < 0.0625 )
          dword_140404A6C[scaled_index_44 + 177347794] = 1099169792;
      }
      cached_mesh_triangle_count = mesh_triangle_count;
      ++element_index_2;
      ++element_index_3;
    }
    while ( element_index_2 < (int)mesh_triangle_count );
    iteration_count = 0;
  }
  iteration_count_5 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    state_address_5 = &g_16AB73DB0;
    do
    {
      ++iteration_count_5;
      *state_address_5 = *(state_address_5 - 614401);
      state_address_5[1] = *(state_address_5 - 614400);
      state_address_5[2] = *(state_address_5 - 614399);
      state_address_5 += 3;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_5 < (int)mesh_triangle_count );
  }
  iteration_count_6 = 0;
  running_total_5 = 2;
  if ( cached_mesh_triangle_count > 0 )
  {
    running_total_6 = 2;
    state_address_6 = &g_16A91BDB0;
    do
    {
      state_address_6[1] = running_total_6;
      *(state_address_6 - 1) = running_total_6 - 2;
      state_address_6 += 3;
      ++iteration_count_6;
      *(state_address_6 - 3) = running_total_6 - 1;
      running_total_6 += 3;
      cached_mesh_triangle_count = mesh_triangle_count;
    }
    while ( iteration_count_6 < (int)mesh_triangle_count );
  }
  iteration_count_7 = 0;
  if ( cached_mesh_triangle_count > 0 )
  {
    running_total_7 = 2;
    state_address_7 = &g_16ABE3DB4;
    state_address_8 = &g_16ABA3DB4;
    do
    {
      scaled_index_45 = running_total_7 - 2;
      *(state_address_7 - 1) = running_total_7 - 2;
      scaled_index_46 = *(state_address_8 - 1);
      if ( scaled_index_46 != -1 )
        scaled_index_45 = dword_140404A6C[*state_address_7 + 3 * scaled_index_46 + 177495248];
      *state_address_7 = scaled_index_45;
      scaled_index_47 = running_total_7 - 1;
      state_address_7[1] = running_total_7 - 1;
      if ( *state_address_8 != -1 )
        scaled_index_47 = dword_140404A6C[state_address_7[2] + 3 * *state_address_8 + 177495248];
      state_address_7[2] = scaled_index_47;
      state_address_7[3] = running_total_7;
      table_value_4 = state_address_8[1];
      if ( table_value_4 == -1 )
        saved_running_total = running_total_7;
      else
        saved_running_total = dword_140404A6C[state_address_7[4] + 3 * table_value_4 + 177495248];
      state_address_7[4] = saved_running_total;
      ++iteration_count_7;
      state_address_7 += 6;
      running_total_7 += 3;
      state_address_8 += 3;
    }
    while ( iteration_count_7 < (int)mesh_triangle_count );
    iteration_count = 0;
  }
  record_word_offset = 908LL * a1;
  allocation_buffer = *(void **)&dword_140404A6C[record_word_offset + 178527463];
  dword_140404A6C[record_word_offset + 178527461] = mesh_vertex_count;
  dword_140404A6C[record_word_offset + 178527462] = g_16A7DBDA4;
  free(allocation_buffer);
  allocated_buffer = (__m128i *)sr_path_malloc(12 * mesh_triangle_count * g_16A7DBDA4);
  scaled_index_48 = mesh_triangle_count * g_16A7DBDA4;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527463] = (uint64)(uintptr_t)(allocated_buffer);
  crt_memcpy(allocated_buffer, (     __m128i *)&g_16A88BDA8, (int)(12 * scaled_index_48));
  cached_mesh_triangle_count_2 = mesh_triangle_count;
  allocation_buffer_2 = *(void **)&dword_140404A6C[record_word_offset + 178527467];
  dword_140404A6C[record_word_offset + 178527465] = mesh_triangle_count;
  dword_140404A6C[record_word_offset + 178527475] = cached_mesh_triangle_count_2;
  free(allocation_buffer_2);
  allocated_buffer_2 = sr_path_malloc(12 * mesh_triangle_count);
  comparison_result = (int)dword_140404A6C[record_word_offset + 178527465] <= 0;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527467] = allocated_buffer_2;
  if ( !comparison_result )
  {
    record_byte_offset = 0;
    record_byte_offset_2 = 0;
    do
    {
      ++iteration_count;
      record_byte_offset += 12;
      record_byte_offset_2 += 12;
      *(_DWORD *)(record_byte_offset + *(_QWORD *)&dword_140404A6C[record_word_offset + 178527467] - 12) = running_total_5 - 2;
      *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)&dword_140404A6C[record_word_offset + 178527467] - 8) = running_total_5 - 1;
      *(_DWORD *)(record_byte_offset_2 + *(_QWORD *)&dword_140404A6C[record_word_offset + 178527467] - 4) = running_total_5;
      running_total_5 += 3;
    }
    while ( iteration_count < (int)dword_140404A6C[record_word_offset + 178527465] );
  }
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
  state_word_5 = g_16AD03DB4;
  *(_QWORD *)&dword_140404A6C[record_word_offset + 178527481] = (uint64)(uintptr_t)(allocated_buffer_7);
  crt_memcpy(allocated_buffer_7, (     __m128i *)&g_16AD03DB8, (int)(8 * state_word_5));
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793813]);
  glBufferData(34962,
    (int)(12 * dword_140404A6C[record_word_offset + 178527465] * dword_140404A6C[record_word_offset + 178527462]),
    *(_QWORD *)&dword_140404A6C[record_word_offset + 178527463],
    35044);
  glBindBuffer(34962, 0);
  glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793814]);
  glBufferData(34963,
    (int)(24 * dword_140404A6C[record_word_offset + 178527465]),
    *(_QWORD *)&dword_140404A6C[record_word_offset + 178527477],
    35044);
  return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34963, 0, unrecovered_register_value);
}
#undef state_address_9
#undef state_address_10

//----- (000000014014B210) ----------------------------------------------------
__int64 sub_14014B210()
{
  strcpy((char *)&g_192FD7154, "Train");
  g_192FD7178 = 1218199552;
  g_192FD7140 = 1;
  g_192FD7174 = 1000;
  g_192FD7148 = 0;
  asset_load_vehicle_sbv_candidate(13, "train04");
  return sub_14014E9C0(13, 0.375, 12.0, 0);
}

//----- (000000014014C390) ----------------------------------------------------
__int64 sub_14014C390()
{
  unsigned int state_word;
  signed int cached_item_block_region_count;
  signed int iteration_count;
  unsigned int *state_address;
  int iteration_count_2;
  unsigned int *state_address_2;
  int scaled_index;
  __int64 scaled_index_2;
  signed int table_value;
  __int64 scaled_index_3;
  bool comparison_result;
  signed int iteration_count_3;
  __int64 scaled_index_4;
  signed int *record_byte_offset;
  signed int disk_create_result;
  __int64 scaled_index_5;
  __int64 packed_word_bits;
       char *literal_text;
  unsigned int *state_address_3;
  char input_byte;
  __int64 scaled_index_6;
       char *literal_text_2;
  unsigned int *state_address_4;
  char input_byte_2;
  signed int iteration_count_4;
  unsigned int *record_byte_offset_2;
  unsigned int element_index;
  __int64 iteration_count_5;
  unsigned int *state_address_5;
  __int64 scaled_index_7;
  __int64 state_word_2;
  __int64 scaled_index_8;
  int saved_iteration_count;

  state_word = 0;
  g_1B46590BC = 0;
  if ( game_type != 8 )
  {
    if ( game_type != 4 )
      goto LABEL_37;
    iteration_count_2 = 0;
    saved_iteration_count = 0;
    if ( (int)item_block_region_count <= 0 )
      goto LABEL_37;
    state_address_2 = &g_1760D2100;
    while ( 1 )
    {
      scaled_index = *(state_address_2 - 12978);
      if ( scaled_index != 1 )
        goto LABEL_24;
      scaled_index_2 = (int)*(state_address_2 - 12856);
      table_value = 0;
      scaled_index_3 = 5873 * scaled_index_2;
      comparison_result = (int)*state_address_2 <= 0;
      iteration_count_3 = 0;
      dword_140404A6C[5873 * scaled_index_2 + 283831511] = 0;
      if ( !comparison_result )
        break;
LABEL_36:
      ++iteration_count_2;
      state_address_2 += 14019;
      saved_iteration_count = iteration_count_2;
      if ( iteration_count_2 >= (int)item_block_region_count )
        goto LABEL_37;
    }
    scaled_index_4 = 5873 * scaled_index_2;
    record_byte_offset = (signed int *)(state_address_2 + 4);
    do
    {
      disk_create_result = sr_disk_create(0x2710u);
      scaled_index_5 = 2570LL * disk_create_result;
      *record_byte_offset = disk_create_result;
      packed_word_bits = (int)dword_140404A6C[scaled_index_5 + 275754072];
      if ( (int)packed_word_bits < 256 )
      {
        dword_140404A6C[6 * packed_word_bits + 275754073 + scaled_index_5] = 0;
        literal_text = "MISSION.EXE";
        state_address_3 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_5 + 275754072] + 275754074 + scaled_index_5];
        do
        {
          input_byte = *literal_text++;
          *(_BYTE *)state_address_3 = input_byte;
          state_address_3 = (unsigned int *)((char *)state_address_3 + 1);
        }
        while ( input_byte );
        dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_5 + 275754072]++ + 275754078 + scaled_index_5] = 0;
        LODWORD(packed_word_bits) = dword_140404A6C[scaled_index_5 + 275754072];
      }
      scaled_index_6 = 2570LL * disk_create_result;
      if ( (int)packed_word_bits < 256 )
      {
        literal_text_2 = "DECRYPT.EXE";
        dword_140404A6C[6 * (int)packed_word_bits + 275754073 + scaled_index_6] = 0;
        state_address_4 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_6 + 275754072] + 275754074 + scaled_index_6];
        do
        {
          input_byte_2 = *literal_text_2++;
          *(_BYTE *)state_address_4 = input_byte_2;
          state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
        }
        while ( input_byte_2 );
        dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_6 + 275754072]++ + 275754078 + scaled_index_6] = 0;
      }
      ++iteration_count_3;
      record_byte_offset += 4;
      dword_140404A6C[scaled_index_4 + 283831512 + table_value] = disk_create_result;
      table_value = dword_140404A6C[scaled_index_3 + 283831511] + 1;
      dword_140404A6C[scaled_index_3 + 283831511] = table_value;
    }
    while ( iteration_count_3 < (int)*state_address_2 );
    scaled_index = *(state_address_2 - 12978);
    state_word = g_1B46590BC;
    iteration_count_2 = saved_iteration_count;
LABEL_24:
    if ( scaled_index == 4 )
    {
      iteration_count_4 = 0;
      *(state_address_2 - 12855) = state_word;
      dword_140404A6C[259 * state_word + 487149973] = iteration_count_2;
      dword_140404A6C[259 * g_1B46590BC + 487149974] = 0;
      comparison_result = (int)*state_address_2 <= 0;
      dword_140404A6C[259 * g_1B46590BC + 487149975] = 0;
      if ( !comparison_result )
      {
        record_byte_offset_2 = state_address_2 + 4;
        do
        {
          element_index = 0;
          iteration_count_5 = 0;
          state_address_5 = &g_181FEEBC0;
          while ( *state_address_5 )
          {
            ++element_index;
            ++iteration_count_5;
            state_address_5 += 2570;
            if ( (__int64)state_address_5 >= (__int64)&g_1829F8BC0 )
            {
              element_index = -1;
              goto LABEL_33;
            }
          }
          if ( element_index != -1 )
          {
            crt_memset((void *)(uintptr_t)(&dword_140404A6C[2570 * element_index + 275753045]), 0, 0x2828u);
            scaled_index_7 = 2570 * iteration_count_5;
            dword_140404A6C[scaled_index_7 + 275753045] = 1;
            dword_140404A6C[scaled_index_7 + 275753046] = 10000;
          }
LABEL_33:
          state_word_2 = (int)g_1B46590BC;
          scaled_index_8 = 259LL * (int)g_1B46590BC;
          *record_byte_offset_2 = element_index;
          ++iteration_count_4;
          record_byte_offset_2 += 4;
          dword_140404A6C[259 * state_word_2 + 487149976 + (int)dword_140404A6C[scaled_index_8 + 487149975]] = element_index;
          ++dword_140404A6C[259 * g_1B46590BC + 487149975];
        }
        while ( iteration_count_4 < (int)*state_address_2 );
        iteration_count_2 = saved_iteration_count;
      }
      state_word = ++g_1B46590BC;
    }
    goto LABEL_36;
  }
  cached_item_block_region_count = item_block_region_count;
  iteration_count = 0;
  if ( (int)item_block_region_count > 0 )
  {
    state_address = &g_1760C5824;
    do
    {
      if ( *(state_address - 123) == 4 )
      {
        *state_address = state_word;
        dword_140404A6C[259 * state_word + 487149973] = iteration_count;
        dword_140404A6C[259 * g_1B46590BC + 487149974] = 0;
        cached_item_block_region_count = item_block_region_count;
        dword_140404A6C[259 * g_1B46590BC + 487149975] = 0;
        state_word = ++g_1B46590BC;
      }
      ++iteration_count;
      state_address += 14019;
    }
    while ( iteration_count < cached_item_block_region_count );
  }
LABEL_37:
  g_1B4657DBC = 1154924544;
  g_1B4657DC4 = 1151188992;
  g_1B4657E08 = 1155416064;
  g_1B4657DC0 = 1110966272;
  g_1B4657E10 = 1148944384;
  strcpy((char *)&g_1B4657DC8, "Hondo Park");
  g_1B4657E54 = 1152892928;
  g_1B4657E0C = 1106247680;
  g_1B4657E5C = 1153089536;
  strcpy((char *)&g_1B4657E14, "Rio Granary");
  g_1B4657EA0 = 1151352832;
  g_1B4657E58 = 1112014848;
  g_1B4657EA8 = 1153417216;
  g_1B4657E60 = xmmword_1402772B8;
  g_1B4657EA4 = 1115160576;
  g_1B4657EEC = 1154564096;
  strcpy((char *)&g_1B4657EAC, "Park above the Kamel Building");
  g_1B4657EF4 = 1153220608;
  g_1B4657EF0 = 1115947008;
  g_1B4657F38 = 1151877120;
  strcpy((char *)&g_1B4657EF8, "Bobson Dugnutt Museum");
  strcpy((char *)&g_1B4657F44, "The Mall");
  g_1B4657F40 = 1151483904;
  g_1B4657F84 = 1154007040;
  g_1B4657F88 = 1104150528;
  g_1B4657F8C = 1150402560;
  strcpy((char *)&g_1B4657F90, "Gas Station");
  g_1B4657FD0 = 1153515520;
  g_1B4657FD8 = 1151320064;
  g_1B4657F3C = 1108869120;
  g_1B4657FD4 = 1108869120;
  strcpy((char *)&g_1B4657FDC, "Red Cube Park");
  g_1B4657DB8 = 8;
  return 107;
}

//----- (000000014014CA70) ----------------------------------------------------
__int64 sub_14014CA70()
{
  unsigned int *record_byte_offset;
  void *allocation_buffer;
  _WORD *allocated_buffer;
  __int64 saved_call_status;
  __int64 remaining_count;
  __int64 loaded_word;
  __int64 masked_bits;
  __int64 loaded_word_2;
  __int64 masked_bits_2;
  __int64 loaded_word_3;
  __int64 masked_bits_3;
  __int64 loaded_word_4;
  __int64 masked_bits_4;
  __int64 loaded_word_5;
  __int64 masked_bits_5;
  __int64 loaded_word_6;
  __int64 masked_bits_6;
  __int64 loaded_word_7;
  __int64 masked_bits_7;
  __int64 loaded_word_8;
  __int64 masked_bits_8;
  __int64 loaded_word_9;
  __int64 masked_bits_9;
  __int64 result;

  record_byte_offset = &g_144960AC8;
  do
  {
    allocation_buffer = *((void **)record_byte_offset - 2);
    *(record_byte_offset - 6) = 1;
    *record_byte_offset = 1086324736;
    *(record_byte_offset - 5) = 0x40000;
    free(allocation_buffer);
    allocated_buffer = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)record_byte_offset - 2) = (uint64)(uintptr_t)(allocated_buffer);
    crt_memset((void *)(uintptr_t)(allocated_buffer), 0, 0x100000u);
    saved_call_status = 0;
    remaining_count = 384;
    *((_QWORD *)record_byte_offset - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)record_byte_offset - 2) + 4 * saved_call_status) = 0;
      loaded_word = *((_QWORD *)record_byte_offset - 2);
      masked_bits = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits;
      *(_DWORD *)(loaded_word + 4 * masked_bits) = 0;
      loaded_word_2 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_2 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_2;
      *(_DWORD *)(loaded_word_2 + 4 * masked_bits_2) = 0;
      loaded_word_3 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_3 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_3;
      *(_DWORD *)(loaded_word_3 + 4 * masked_bits_3) = 0;
      loaded_word_4 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_4 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_4;
      *(_DWORD *)(loaded_word_4 + 4 * masked_bits_4) = 0;
      loaded_word_5 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_5 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_5;
      *(_DWORD *)(loaded_word_5 + 4 * masked_bits_5) = 0;
      loaded_word_6 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_6 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_6;
      *(_DWORD *)(loaded_word_6 + 4 * masked_bits_6) = 0;
      loaded_word_7 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_7 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_7;
      *(_DWORD *)(loaded_word_7 + 4 * masked_bits_7) = 0;
      loaded_word_8 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_8 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_8;
      *(_DWORD *)(loaded_word_8 + 4 * masked_bits_8) = 0;
      loaded_word_9 = *((_QWORD *)record_byte_offset - 2);
      masked_bits_9 = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      *(record_byte_offset - 2) = masked_bits_9;
      *(_DWORD *)(loaded_word_9 + 4 * masked_bits_9) = 0;
      result = (*(record_byte_offset - 2) + 1) & 0x3FFFF;
      saved_call_status = (unsigned int)result;
      *(record_byte_offset - 2) = result;
      --remaining_count;
    }
    while ( remaining_count );
    record_byte_offset += 8;
  }
  while ( (__int64)record_byte_offset < (__int64)&g_144960BC8 );
  return result;
}

//----- (000000014014CBE0) ----------------------------------------------------
void sub_14014CBE0()
{
  __int64 remaining_count;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  unsigned int *saved_allocated_buffer;
  unsigned int *state_address;
  __int64 allocated_buffer;
  void *allocation_buffer;
  __int64 allocated_buffer_2;
       __m128i *source_buffer;
  signed int iteration_count;
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_value;
  float scaled_value_2;
  __int64 loaded_word_5;
  __int64 scaled_index;
  __int64 loaded_word_6;
  __int64 loaded_word_7;
  int scaled_index_2;
  __int64 loaded_word_8;
  __int64 loaded_word_9;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float square_root_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  float scaled_value_3;
  float scaled_value_4;
  __int64 scaled_index_3;
  __int64 loaded_word_10;
  __int64 loaded_word_11;
  __int64 loaded_word_12;
  int scaled_index_4;
  __int64 loaded_word_13;
  __int64 loaded_word_14;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float square_root_3;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float scaled_value_5;
  float scaled_value_6;
  __int64 scaled_index_5;
  __int64 packed_word_bits;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  __int64 unused_local_8;

  remaining_count = 6;
  g_1665C4A08 = 6;
  g_1665C4A18 = 8;
  free(*(void **)&g_1665C4A10);
  g_1665C4A10 = sr_path_malloc(12 * g_1665C4A08);
  free(*(void **)&g_1665C4A20);
  g_1665C4A20 = sr_path_malloc(12 * g_1665C4A18);
  **(_DWORD **)&g_1665C4A10 = 0;
  *(_DWORD *)(g_1665C4A10 + 4LL) = 1065353216;
  *(_DWORD *)(g_1665C4A10 + 8LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 12LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 16LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 20LL) = 1065353216;
  *(_DWORD *)(g_1665C4A10 + 24LL) = -1082130432;
  *(_DWORD *)(g_1665C4A10 + 28LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 32LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 36LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 40LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 44LL) = -1082130432;
  *(_DWORD *)(g_1665C4A10 + 48LL) = 1065353216;
  *(_DWORD *)(g_1665C4A10 + 52LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 56LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 60LL) = 0;
  *(_DWORD *)(g_1665C4A10 + 64LL) = -1082130432;
  *(_DWORD *)(g_1665C4A10 + 68LL) = 0;
  **(_DWORD **)&g_1665C4A20 = 0;
  *(_DWORD *)(g_1665C4A20 + 4LL) = 1;
  *(_DWORD *)(g_1665C4A20 + 8LL) = 2;
  *(_DWORD *)(g_1665C4A20 + 12LL) = 0;
  *(_DWORD *)(g_1665C4A20 + 16LL) = 2;
  *(_DWORD *)(g_1665C4A20 + 20LL) = 3;
  *(_DWORD *)(g_1665C4A20 + 24LL) = 0;
  *(_DWORD *)(g_1665C4A20 + 28LL) = 3;
  *(_DWORD *)(g_1665C4A20 + 32LL) = 4;
  *(_DWORD *)(g_1665C4A20 + 36LL) = 0;
  *(_DWORD *)(g_1665C4A20 + 40LL) = 4;
  *(_DWORD *)(g_1665C4A20 + 44LL) = 1;
  *(_DWORD *)(g_1665C4A20 + 48LL) = 2;
  *(_DWORD *)(g_1665C4A20 + 52LL) = 1;
  *(_DWORD *)(g_1665C4A20 + 56LL) = 5;
  *(_DWORD *)(g_1665C4A20 + 60LL) = 3;
  *(_DWORD *)(g_1665C4A20 + 64LL) = 2;
  *(_DWORD *)(g_1665C4A20 + 68LL) = 5;
  *(_DWORD *)(g_1665C4A20 + 72LL) = 4;
  *(_DWORD *)(g_1665C4A20 + 76LL) = 3;
  *(_DWORD *)(g_1665C4A20 + 80LL) = 5;
  *(_DWORD *)(g_1665C4A20 + 84LL) = 1;
  *(_DWORD *)(g_1665C4A20 + 88LL) = 4;
  *(_DWORD *)(g_1665C4A20 + 92LL) = 5;
  glGenBuffers(1, &g_1665C4A00);
  glGenBuffers(1, &g_1665C4A04);
  glBindBuffer(34962, g_1665C4A00);
  glBufferData(34962, 12 * g_1665C4A08, g_1665C4A10, 35044);
  glBindBuffer(34962, 0);
  glBindBuffer(34963, g_1665C4A04);
  glBufferData(34963, 12 * g_1665C4A18, g_1665C4A20, 35044);
  glBindBuffer(34963, 0);
  saved_allocated_buffer = &g_1665C4A30;
  state_address = &g_1665C4A2C;
  do
  {
    free(*((void **)saved_allocated_buffer + 1));
    allocated_buffer = sr_path_malloc((int)(12 * (*(saved_allocated_buffer - 10) + 3 * *(saved_allocated_buffer - 6))));
    allocation_buffer = *((void **)saved_allocated_buffer + 3);
    *((_QWORD *)saved_allocated_buffer + 1) = allocated_buffer;
    free(allocation_buffer);
    allocated_buffer_2 = sr_path_malloc((int)(48 * *(saved_allocated_buffer - 6)));
    source_buffer = *((     __m128i **)saved_allocated_buffer - 4);
    *((_QWORD *)saved_allocated_buffer + 3) = allocated_buffer_2;
    LODWORD(allocated_buffer_2) = *(saved_allocated_buffer - 10);
    *saved_allocated_buffer = allocated_buffer_2;
    crt_memcpy(*((__m128i **)saved_allocated_buffer + 1), source_buffer, 12 * (int)allocated_buffer_2);
    iteration_count = 0;
    saved_allocated_buffer[4] = 0;
    if ( (int)*(saved_allocated_buffer - 6) > 0 )
    {
      record_byte_offset = 0;
      do
      {
        loaded_word = *((_QWORD *)saved_allocated_buffer - 4);
        loaded_word_2 = *((_QWORD *)saved_allocated_buffer - 2);
        loaded_word_3 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2);
        loaded_word_4 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2 + 4);
        weighted_sum = *(float *)(loaded_word + 4 * loaded_word_4) + *(float *)(loaded_word + 4 * loaded_word_3);
        weighted_sum_2 = *(float *)(loaded_word + 4 * loaded_word_4 + 4) + *(float *)(loaded_word + 4 * loaded_word_3 + 4);
        weighted_sum_3 = *(float *)(loaded_word + 4 * loaded_word_4 + 8) + *(float *)(loaded_word + 4 * loaded_word_3 + 8);
        square_root = fsqrt((float)((float)(weighted_sum_2 * weighted_sum_2) + (float)(weighted_sum * weighted_sum)) + (float)(weighted_sum_3 * weighted_sum_3));
        if ( square_root == 0.0 )
        {
          scaled_ratio_2 = 0.0;
          scaled_value = 0.0;
          scaled_value_2 = 0.0;
        }
        else
        {
          scaled_ratio = 1.0 / square_root;
          scaled_ratio_2 = (float)(1.0 / square_root) * weighted_sum;
          scaled_value = scaled_ratio * weighted_sum_2;
          scaled_value_2 = scaled_ratio * weighted_sum_3;
        }
        loaded_word_5 = *((_QWORD *)saved_allocated_buffer + 1);
        scaled_index = (int)(3 * *saved_allocated_buffer);
        *(float *)(loaded_word_5 + 4 * scaled_index) = scaled_ratio_2;
        *(float *)(loaded_word_5 + 4 * scaled_index + 4) = scaled_value;
        *(float *)(loaded_word_5 + 4 * scaled_index + 8) = scaled_value_2;
        loaded_word_6 = *((_QWORD *)saved_allocated_buffer - 4);
        loaded_word_7 = *((_QWORD *)saved_allocated_buffer - 2);
        scaled_index_2 = *saved_allocated_buffer + 1;
        *saved_allocated_buffer = scaled_index_2;
        loaded_word_8 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_7 + 4);
        loaded_word_9 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_7 + 8);
        weighted_sum_4 = *(float *)(loaded_word_6 + 4 * loaded_word_9 + 4) + *(float *)(loaded_word_6 + 4 * loaded_word_8 + 4);
        weighted_sum_5 = *(float *)(loaded_word_6 + 4 * loaded_word_8) + *(float *)(loaded_word_6 + 4 * loaded_word_9);
        weighted_sum_6 = *(float *)(loaded_word_6 + 4 * loaded_word_9 + 8) + *(float *)(loaded_word_6 + 4 * loaded_word_8 + 8);
        square_root_2 = fsqrt((float)((float)(weighted_sum_4 * weighted_sum_4) + (float)(weighted_sum_5 * weighted_sum_5)) + (float)(weighted_sum_6 * weighted_sum_6));
        if ( square_root_2 == 0.0 )
        {
          scaled_ratio_4 = 0.0;
          scaled_value_3 = 0.0;
          scaled_value_4 = 0.0;
        }
        else
        {
          scaled_ratio_3 = 1.0 / square_root_2;
          scaled_ratio_4 = (float)(1.0 / square_root_2) * weighted_sum_5;
          scaled_value_3 = scaled_ratio_3 * weighted_sum_4;
          scaled_value_4 = scaled_ratio_3 * weighted_sum_6;
        }
        scaled_index_3 = 3 * scaled_index_2;
        loaded_word_10 = *((_QWORD *)saved_allocated_buffer + 1);
        *(float *)(loaded_word_10 + 4 * scaled_index_3) = scaled_ratio_4;
        *(float *)(loaded_word_10 + 4 * scaled_index_3 + 4) = scaled_value_3;
        *(float *)(loaded_word_10 + 4 * scaled_index_3 + 8) = scaled_value_4;
        loaded_word_11 = *((_QWORD *)saved_allocated_buffer - 4);
        loaded_word_12 = *((_QWORD *)saved_allocated_buffer - 2);
        scaled_index_4 = *saved_allocated_buffer + 1;
        *saved_allocated_buffer = scaled_index_4;
        loaded_word_13 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_12 + 8);
        loaded_word_14 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_12);
        weighted_sum_7 = *(float *)(loaded_word_11 + 4 * loaded_word_14) + *(float *)(loaded_word_11 + 4 * loaded_word_13);
        weighted_sum_8 = *(float *)(loaded_word_11 + 4 * loaded_word_14 + 4) + *(float *)(loaded_word_11 + 4 * loaded_word_13 + 4);
        weighted_sum_9 = *(float *)(loaded_word_11 + 4 * loaded_word_14 + 8) + *(float *)(loaded_word_11 + 4 * loaded_word_13 + 8);
        square_root_3 = fsqrt((float)((float)(weighted_sum_8 * weighted_sum_8) + (float)(weighted_sum_7 * weighted_sum_7)) + (float)(weighted_sum_9 * weighted_sum_9));
        if ( square_root_3 == 0.0 )
        {
          scaled_ratio_6 = 0.0;
          scaled_value_5 = 0.0;
          scaled_value_6 = 0.0;
        }
        else
        {
          scaled_ratio_5 = 1.0 / square_root_3;
          scaled_ratio_6 = (float)(1.0 / square_root_3) * weighted_sum_7;
          scaled_value_5 = scaled_ratio_5 * weighted_sum_8;
          scaled_value_6 = scaled_ratio_5 * weighted_sum_9;
        }
        scaled_index_5 = 3 * scaled_index_4;
        packed_word_bits = *((_QWORD *)saved_allocated_buffer + 1);
        *(float *)(packed_word_bits + 4 * scaled_index_5) = scaled_ratio_6;
        *(float *)(packed_word_bits + 4 * scaled_index_5 + 4) = scaled_value_5;
        *(float *)(packed_word_bits + 4 * scaled_index_5 + 8) = scaled_value_6;
        ++*saved_allocated_buffer;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4])) = *(_DWORD *)(record_byte_offset + *((_QWORD *)saved_allocated_buffer - 2));
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]) + 4) = *saved_allocated_buffer - 3;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]++) + 8) = *saved_allocated_buffer - 1;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4])) = *saved_allocated_buffer - 1;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]) + 4) = *saved_allocated_buffer - 2;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]++) + 8) = *(_DWORD *)(record_byte_offset + *((_QWORD *)saved_allocated_buffer - 2) + 8);
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4])) = *saved_allocated_buffer - 1;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]) + 4) = *saved_allocated_buffer - 3;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]++) + 8) = *saved_allocated_buffer - 2;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4])) = *saved_allocated_buffer - 3;
        ++iteration_count;
        LODWORD(packed_word_bits) = *(_DWORD *)(record_byte_offset + *((_QWORD *)saved_allocated_buffer - 2) + 4);
        record_byte_offset += 12;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]) + 4) = packed_word_bits;
        *(_DWORD *)(*((_QWORD *)saved_allocated_buffer + 3) + 4LL * (int)(3 * saved_allocated_buffer[4]++) + 8) = *saved_allocated_buffer - 2;
      }
      while ( iteration_count < (int)*(saved_allocated_buffer - 6) );
    }
    glGenBuffers(1, state_address - 1);
    glGenBuffers(1, state_address);
    glBindBuffer(34962, *(saved_allocated_buffer - 2));
    glBufferData(34962, (int)(12 * *saved_allocated_buffer), *((_QWORD *)saved_allocated_buffer + 1), 35044);
    glBindBuffer(34962, 0);
    glBindBuffer(34963, *(saved_allocated_buffer - 1));
    glBufferData(34963, (int)(12 * saved_allocated_buffer[4]), *((_QWORD *)saved_allocated_buffer + 3), 35044);
    glBindBuffer(34963, 0);
    state_address += 10;
    saved_allocated_buffer += 10;
    --remaining_count;
  }
  while ( remaining_count );
}

//----- (000000014014FAB0) ----------------------------------------------------
void            sub_14014FAB0(     char *a1, char *a2, char *a3, char *a4)
{
  __int64 state_word;
  int iteration_count;
  char input_byte;
  int iteration_count_2;
  __int64 iteration_count_3;
  char input_byte_2;
  int iteration_count_4;
  __int64 iteration_count_5;
  char input_byte_3;
  __int64 iteration_count_6;

  state_word = g_151620C40;
  if ( g_151620C40 )
  {
    iteration_count = 0;
    if ( a2 )
    {
      input_byte = *a2;
      iteration_count_2 = 0;
      if ( *a2 )
      {
        iteration_count_3 = 0;
        do
        {
          *((_BYTE *)&g_151600C40 + iteration_count_3) = input_byte;
          ++iteration_count_2;
          ++iteration_count_3;
          if ( *a2 == 10 )
          {
            ++iteration_count_2;
            *((_BYTE *)&g_151600C40 + iteration_count_3++) = 34;
          }
          input_byte = *++a2;
          if ( input_byte == 13 )
          {
            *(_WORD *)((char *)&g_151600C40 + iteration_count_3) = 28252;
            iteration_count_2 += 3;
            *((_BYTE *)&g_151600C40 + iteration_count_3 + 2) = 34;
            iteration_count_3 += 3;
            input_byte = *a2;
          }
        }
        while ( input_byte );
      }
      if ( (unsigned __int64)iteration_count_2 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&g_151600C40 + iteration_count_2) = 0;
      sub_1400920F0(state_word, "char %svs[]=\"%s\";\r\n\r\n", a1, (     char *)&g_151600C40);
      state_word = g_151620C40;
    }
    if ( a3 )
    {
      input_byte_2 = *a3;
      iteration_count_4 = 0;
      if ( *a3 )
      {
        iteration_count_5 = 0;
        do
        {
          *((_BYTE *)&g_151600C40 + iteration_count_5) = input_byte_2;
          ++iteration_count_4;
          ++iteration_count_5;
          if ( *a3 == 10 )
          {
            ++iteration_count_4;
            *((_BYTE *)&g_151600C40 + iteration_count_5++) = 34;
          }
          input_byte_2 = *++a3;
          if ( input_byte_2 == 13 )
          {
            *(_WORD *)((char *)&g_151600C40 + iteration_count_5) = 28252;
            iteration_count_4 += 3;
            *((_BYTE *)&g_151600C40 + iteration_count_5 + 2) = 34;
            iteration_count_5 += 3;
            input_byte_2 = *a3;
          }
        }
        while ( input_byte_2 );
      }
      if ( (unsigned __int64)iteration_count_4 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&g_151600C40 + iteration_count_4) = 0;
      sub_1400920F0(state_word, "char %sfs[]=\"%s\";\r\n\r\n", a1, (     char *)&g_151600C40);
      state_word = g_151620C40;
    }
    if ( !a4 )
      return;
    input_byte_3 = *a4;
    if ( *a4 )
    {
      iteration_count_6 = 0;
      do
      {
        *((_BYTE *)&g_151600C40 + iteration_count_6) = input_byte_3;
        ++iteration_count;
        ++iteration_count_6;
        if ( *a4 == 10 )
        {
          ++iteration_count;
          *((_BYTE *)&g_151600C40 + iteration_count_6++) = 34;
        }
        input_byte_3 = *++a4;
        if ( input_byte_3 == 13 )
        {
          *(_WORD *)((char *)&g_151600C40 + iteration_count_6) = 28252;
          iteration_count += 3;
          *((_BYTE *)&g_151600C40 + iteration_count_6 + 2) = 34;
          iteration_count_6 += 3;
          input_byte_3 = *a4;
        }
      }
      while ( input_byte_3 );
    }
    if ( (unsigned __int64)iteration_count < 0x20000 )
    {
      *((_BYTE *)&g_151600C40 + iteration_count) = 0;
      sub_1400920F0(state_word, "char %sgs[]=\"%s\";\r\n\r\n", a1, (     char *)&g_151600C40);
      return;
    }
LABEL_33:
    sub_1401F8694();
  }
}

//----- (000000014014FCF0) ----------------------------------------------------
void               sub_14014FCF0(float *a1, unsigned int *a2, unsigned int *a3)
{
  union { __int64 first; float coordinates[3]; } sr_position;
  unsigned int state_word;
  float limited_value;
  unsigned int cached_game_state;
  unsigned int loaded_word;
  unsigned int *state_address;
  unsigned int table_value;
  __int64 remaining_count;
  __int64 scaled_index;
  unsigned int *state_address_2;
  int state_word_2;
  unsigned int *state_address_3;
  int iteration_count;
  float *state_address_4;
  int iteration_count_2;
  float square_root;
  unsigned int *state_address_5;
  __int64 scaled_index_2;
  int iteration_count_3;
  __int64 iteration_count_4;
  int saved_iteration_count;
  __int64 saved_iteration_count_2;
  float saved_square_root;
  unsigned int *state_address_6;
  __int64 scaled_index_3;
  float combined_products;
  float combined_products_2;
  float square_root_2;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  int iteration_count_5;
  unsigned int *saved_audio_play_at_result;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  signed int audio_play_at_result;
  float state_address_7;
  float weighted_sum_4;
  float combined_products_3;
  float weighted_sum_5;
  float component_delta;
  float weighted_sum_6;
  float component_delta_2;
  bool cached_first;
  __int64 scaled_index_9;
  unsigned int table_value_2;
  float component_sum;
  float limited_value_2;
  float limited_value_3;
  float scaled_value;
  float selected_scalar;
  __int64 scaled_index_10;
  float combined_products_4;
  float state_address_8;
  float state_address_9;
  float state_address_10;
  float weighted_sum_7;
  float component_delta_3;
  float limited_value_4;
  __int64 packed_word_bits;
  unsigned int table_value_3;
  __int64 scaled_index_11;
  float limited_value_5;
  float selected_scalar_2;
  __int64 scaled_index_12;
  float combined_products_5;
  __int64 scaled_index_13;
  __int64 table_value_4;
  int iteration_count_6;
  unsigned int *state_address_11;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  int iteration_count_7;
  unsigned int integer_difference;
  unsigned int *state_address_12;
  float state_scalar;
  unsigned int *state_address_13;
  float state_scalar_2;
  float state_scalar_3;
  float state_scalar_4;
  float state_scalar_5;
  unsigned int *state_address_14;
  float state_scalar_6;
  __int64 remaining_count_2;
  int scaled_index_16;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  __int64 scaled_index_19;
  unsigned int table_value_5;
  __int64 table_value_6;
  __int64 table_value_7;
  float weighted_sum_11;
  float weighted_sum_12;
  float weighted_sum_13;
  __int64 table_value_8;
  int **state_address_15;
  __int64 running_total;
  int sound;
  unsigned int *record_byte_offset;
  __int64 running_total_2;
  unsigned int scaled_index_20;
  int integer_difference_2;
  __int64 scaled_index_21;
  unsigned int scaled_index_22;
  __int64 scaled_index_23;
  int **saved_state_address;
  __int64 remaining_count_3;
  __int64 table_value_9;
  __int64 lookup_index;
  int table_value_10;
  int *loaded_word_2;
  unsigned int *state_address_16;
  __int16 *running_total_3;
  int running_total_4;
  __int64 remaining_count_4;
  __m128i converted_vector;
  int scaled_index_24;
  signed int table_value_11;
  signed int table_value_12;
  int record_byte_offset_2;
  float *record_pointer;
  unsigned int *record_pointer_2;
  __int64 packed_word_bits_2;
  float product_difference;
  float product_difference_2;
  float scaled_value_2;
  __int64 scaled_index_25;
  int scaled_index_26;
  float selected_scalar_3;
  float combined_products_6;
  float weighted_sum_14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014FCF0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 0)) /* [rsp+0h] */
#define flags (*(int (*))(void *)(sr_frame_14014FCF0 + 32)) /* [rsp+20h] */
#define selection_flag (*(unsigned int (*))(void *)(sr_frame_14014FCF0 + 40)) /* [rsp+28h] */
#define state_address_17 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 48)) /* [rsp+30h] */
#define input_cursor (*(float * (*))(void *)(sr_frame_14014FCF0 + 56)) /* [rsp+38h] */
#define input_cursor_2 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 64)) /* [rsp+40h] */
#define unused_frame_slot_88 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 88)) /* [rsp+58h] */

  state_word = g_183EBFAA0;
  limited_value = 1.0;
  cached_game_state = game_state;
  input_cursor_2 = a3;
  input_cursor = a1;
  if ( g_183EBFAA0 && game_state == 2 )
    limited_value = fminf(fmaxf((float)(int)g_183EBFCD4 * 0.016666668f, 0.0), 1.0);
  g_144970C94 = (float)((float)((float)(int)g_151E4615C * limited_value)
                                               * (float)((float)(int)g_151E4615C * limited_value))
                                       * 0.000099999997f;
  g_144970AB4 = *(unsigned int *)a1;
  __builtin_memcpy(&g_144970AB8, a1 + 1, 4);
  loaded_word = *((_DWORD *)a1 + 2);
  state_address = &g_15F2DE364;
  g_144970ABC = loaded_word;
  g_144970AC0 = *a2;
  g_144970AC4 = a2[1];
  g_144970AC8 = a2[2];
  g_144970ACC = a2[3];
  g_144970AD0 = a2[4];
  g_144970AD4 = a2[5];
  g_144970AD8 = a2[6];
  g_144970ADC = a2[7];
  g_144970AE0 = a2[8];
  g_144970AE4 = *a3;
  g_144970AE8 = a3[1];
  table_value = a3[2];
  remaining_count = 512;
  g_144970AEC = table_value;
  do
  {
    scaled_index = (int)*state_address;
    if ( (_DWORD)scaled_index != -1 && (!*(state_address - 5209) || !state_word) )
    {
      if ( !dword_140404A6C[278720 * scaled_index + 327698] )
        dword_140404A6C[278720 * scaled_index + 327698] = 1;
      *state_address = -1;
    }
    state_address += 5210;
    --remaining_count;
  }
  while ( remaining_count );
  state_address_2 = &g_15104AE6C;
  state_word_2 = g_15104AE60;
  if ( !state_word )
    goto LABEL_91;
  if ( cached_game_state != 3 )
  {
    state_address_3 = &g_15F2D9204;
    iteration_count = 0;
    state_address_4 = (float *)&g_184360538;
    do
    {
      if ( *(state_address_3 - 1) && ((*state_address_3 - 12) & 0xFFFFFFFD) != 0 && (int)state_address_3[3659] > 0 )
      {
        iteration_count_2 = 0;
        square_root = fsqrt(
                (float)((float)((float)(a1[1] - *(state_address_4 - 1)) * (float)(a1[1] - *(state_address_4 - 1)))
                      + (float)((float)(*a1 - *(state_address_4 - 2)) * (float)(*a1 - *(state_address_4 - 2))))
              + (float)((float)(a1[2] - *state_address_4) * (float)(a1[2] - *state_address_4)));
        if ( state_word_2 <= 0 )
        {
LABEL_22:
          if ( state_word_2 >= 8 )
          {
            iteration_count_3 = 0;
            iteration_count_4 = 0;
            saved_iteration_count = -1;
            saved_iteration_count_2 = -1;
            saved_square_root = 65536.0;
            state_address_6 = &g_15104AE64;
            do
            {
              scaled_index_3 = (int)*state_address_6;
              if ( (_DWORD)scaled_index_3 != iteration_count )
              {
                combined_products = a1[1] - *(float *)&dword_140404A6C[77 * scaled_index_3 + 285044402];
                combined_products_2 = a1[2] - *(float *)&dword_140404A6C[77 * scaled_index_3 + 285044403];
                square_root_2 = fsqrt(
                        (float)((float)(combined_products * combined_products)
                              + (float)((float)(*a1 - *(float *)&dword_140404A6C[77 * scaled_index_3 + 285044401])
                                      * (float)(*a1 - *(float *)&dword_140404A6C[77 * scaled_index_3 + 285044401])))
                      + (float)(combined_products_2 * combined_products_2));
                if ( square_root < square_root_2 && saved_square_root > square_root_2 )
                {
                  saved_iteration_count = iteration_count_3;
                  saved_iteration_count_2 = iteration_count_4;
                  saved_square_root = square_root_2;
                }
              }
              ++iteration_count_3;
              ++iteration_count_4;
              state_address_6 += 5;
            }
            while ( iteration_count_3 < state_word_2 );
            if ( saved_iteration_count != -1 )
            {
              scaled_index_4 = (int)dword_140404A6C[5 * saved_iteration_count_2 + 70326527];
              if ( (_DWORD)scaled_index_4 != -1 && !dword_140404A6C[278720 * scaled_index_4 + 327698] )
                dword_140404A6C[278720 * scaled_index_4 + 327698] = 1;
              scaled_index_5 = (int)dword_140404A6C[5 * saved_iteration_count_2 + 70326528];
              if ( (_DWORD)scaled_index_5 != -1 && !dword_140404A6C[278720 * scaled_index_5 + 327698] )
                dword_140404A6C[278720 * scaled_index_5 + 327698] = 1;
              dword_140404A6C[5 * saved_iteration_count_2 + 70326526] = iteration_count;
              *(_QWORD *)&dword_140404A6C[5 * saved_iteration_count_2 + 70326529] = 0;
              *(_QWORD *)&dword_140404A6C[5 * saved_iteration_count_2 + 70326527] = -1;
              state_word_2 = g_15104AE60;
            }
          }
          else
          {
            scaled_index_2 = 5LL * state_word_2;
            dword_140404A6C[scaled_index_2 + 70326526] = iteration_count;
            dword_140404A6C[5 * state_word_2 + 70326527] = -1;
            dword_140404A6C[scaled_index_2 + 70326528] = -1;
            *(_QWORD *)&dword_140404A6C[scaled_index_2 + 70326529] = 0;
            state_word_2 = ++g_15104AE60;
          }
        }
        else
        {
          state_address_5 = &g_15104AE64;
          while ( *state_address_5 != iteration_count )
          {
            ++iteration_count_2;
            state_address_5 += 5;
            if ( iteration_count_2 >= state_word_2 )
              goto LABEL_22;
          }
        }
      }
      ++iteration_count;
      state_address_3 += 5210;
      state_address_4 += 77;
    }
    while ( iteration_count < 512 );
    state_word = g_183EBFAA0;
    iteration_count_5 = 0;
    if ( state_word_2 > 0 )
    {
      saved_audio_play_at_result = &g_15104AE68;
      while ( 1 )
      {
        scaled_index_6 = (int)*(saved_audio_play_at_result - 1);
        scaled_index_7 = 77 * scaled_index_6;
        scaled_index_8 = 5210 * scaled_index_6;
        weighted_sum = *(float *)&dword_140404A6C[77 * scaled_index_6 + 285044401];
        weighted_sum_2 = *(float *)&dword_140404A6C[77 * scaled_index_6 + 285044402];
        weighted_sum_3 = *(float *)&dword_140404A6C[77 * scaled_index_6 + 285044403];
        if ( dword_140404A6C[5210 * scaled_index_6 + 129716709]
          && (float)((float)((float)((float)(a1[1] - weighted_sum_2) * (float)(a1[1] - weighted_sum_2))
                           + (float)((float)(*a1 - weighted_sum) * (float)(*a1 - weighted_sum)))
                   + (float)((float)(a1[2] - weighted_sum_3) * (float)(a1[2] - weighted_sum_3))) < 65536.0
          && (int)dword_140404A6C[scaled_index_8 + 129720369] > 0 )
        {
          audio_play_at_result = *saved_audio_play_at_result;
          state_address_7 = (float)(weighted_sum - (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044410] * 2.5))
              - (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044407] * 0.25);
          weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_7 + 285044408] * 0.25;
          combined_products_3 = weighted_sum_2 - (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044411] * 2.5);
          weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_7 + 285044412] * 2.5;
          *(float *)&sr_position.first = state_address_7;
          component_delta = combined_products_3 - weighted_sum_4;
          weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_7 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = component_delta;
          component_delta_2 = (float)(weighted_sum_3 - weighted_sum_5) - weighted_sum_6;
          sr_position.coordinates[2] = component_delta_2;
          if ( audio_play_at_result != -1
            || ((cached_first = dword_140404A6C[scaled_index_8 + 129716710] == 13, flags = 1, !cached_first)
              ? (audio_play_at_result = sr_audio_play_at(g_183E935C4, (unsigned int *)&sr_position.first, 0.5, 1.0, flags))
              : (audio_play_at_result = sr_audio_play_at(g_183E936E0, (unsigned int *)&sr_position.first, 0.125, 1.0, flags)),
                *saved_audio_play_at_result = audio_play_at_result,
                audio_play_at_result != -1) )
          {
            scaled_index_9 = 278720LL * audio_play_at_result;
            table_value_2 = dword_140404A6C[scaled_index_8 + 129716744];
            *(float *)&dword_140404A6C[scaled_index_9 + 606302] = state_address_7;
            *(float *)&dword_140404A6C[scaled_index_9 + 606303] = component_delta;
            *(float *)&dword_140404A6C[scaled_index_9 + 606304] = component_delta_2;
            dword_140404A6C[scaled_index_9 + 606305] = table_value_2;
            dword_140404A6C[scaled_index_9 + 606306] = dword_140404A6C[scaled_index_8 + 129716745];
            dword_140404A6C[scaled_index_9 + 606307] = dword_140404A6C[scaled_index_8 + 129716746];
            component_sum = (float)(int)dword_140404A6C[scaled_index_8 + 129720369];
            if ( (int)dword_140404A6C[scaled_index_8 + 129720369] < 100 )
              limited_value_2 = 0.29882812;
            else
              limited_value_2 = (float)(component_sum * 0.00048828125) + 0.25;
            if ( dword_140404A6C[scaled_index_8 + 129716710] == 13 )
            {
              scaled_value = component_sum * 0.0078125;
              if ( scaled_value < 0.25 )
                scaled_value = 0.0;
              limited_value_3 = fminf(scaled_value, 1.0);
              limited_value_2 = fmaxf(limited_value_2, 0.5) * 0.5;
            }
            else
            {
              limited_value_3 = fminf(component_sum * 0.015625, 0.5);
            }
            if ( (float)((float)((float)((float)(a1[1] - component_delta) * (float)(a1[1] - component_delta))
                               + (float)((float)(*a1 - state_address_7) * (float)(*a1 - state_address_7)))
                       + (float)((float)(a1[2] - component_delta_2) * (float)(a1[2] - component_delta_2))) <= 16384.0 )
            {
              selected_scalar = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
                selected_scalar = 0.5;
            }
            else
            {
              selected_scalar = 0.5;
            }
            scaled_index_10 = 278720LL * (int)*saved_audio_play_at_result;
            combined_products_4 = (float)((float)((float)((float)(selected_scalar * limited_value_3) * 0.5) - *((float *)saved_audio_play_at_result + 2)) * 0.125)
                + *((float *)saved_audio_play_at_result + 2);
            *(float *)&dword_140404A6C[scaled_index_10 + 327704] = combined_products_4;
            *(float *)&dword_140404A6C[scaled_index_10 + 327706] = limited_value_2;
            *((float *)saved_audio_play_at_result + 2) = combined_products_4;
          }
          cached_first = dword_140404A6C[scaled_index_8 + 129716710] == 13;
          state_address_8 = (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044412] * 0.125)
              + *(float *)&dword_140404A6C[scaled_index_7 + 285044403];
          state_address_9 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044410] * 0.125)
                      + *(float *)&dword_140404A6C[scaled_index_7 + 285044401])
              - (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044407] * 0.25);
          state_address_10 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044411] * 0.125)
                      + *(float *)&dword_140404A6C[scaled_index_7 + 285044402])
              - (float)(*(float *)&dword_140404A6C[scaled_index_7 + 285044408] * 0.25);
          *(float *)&sr_position.first = state_address_9;
          weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_7 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = state_address_10;
          component_delta_3 = state_address_8 - weighted_sum_7;
          sr_position.coordinates[2] = component_delta_3;
          if ( !cached_first && saved_audio_play_at_result[1] == -1 )
          {
            limited_value_4 = fminf(
                    (float)(*(float *)&dword_140404A6C[scaled_index_8 + 129720536] + *(float *)&dword_140404A6C[scaled_index_8 + 129720493])
                  + (float)(*(float *)&dword_140404A6C[scaled_index_8 + 129720450] + *(float *)&dword_140404A6C[scaled_index_8 + 129720407]),
                    0.25);
            if ( limited_value_4 > 0.0625 )
            {
              saved_audio_play_at_result[1] = sr_audio_play_at(g_183E935D4, (unsigned int *)&sr_position.first, limited_value_4, 1.0, 1u);
              *((float *)saved_audio_play_at_result + 3) = limited_value_4;
            }
          }
          packed_word_bits = (int)saved_audio_play_at_result[1];
          if ( (_DWORD)packed_word_bits == -1 )
            goto LABEL_86;
          table_value_3 = dword_140404A6C[scaled_index_8 + 129716744];
          scaled_index_11 = 278720 * packed_word_bits;
          limited_value_5 = fminf(
                  (float)(*(float *)&dword_140404A6C[scaled_index_8 + 129720536] + *(float *)&dword_140404A6C[scaled_index_8 + 129720493])
                + (float)(*(float *)&dword_140404A6C[scaled_index_8 + 129720450] + *(float *)&dword_140404A6C[scaled_index_8 + 129720407]),
                  1.0);
          *(float *)&dword_140404A6C[scaled_index_11 + 606302] = state_address_9;
          *(float *)&dword_140404A6C[scaled_index_11 + 606303] = state_address_10;
          *(float *)&dword_140404A6C[scaled_index_11 + 606304] = component_delta_3;
          dword_140404A6C[scaled_index_11 + 606305] = table_value_3;
          dword_140404A6C[scaled_index_11 + 606306] = dword_140404A6C[scaled_index_8 + 129716745];
          dword_140404A6C[scaled_index_11 + 606307] = dword_140404A6C[scaled_index_8 + 129716746];
          if ( (float)((float)((float)((float)(a1[1] - state_address_10) * (float)(a1[1] - state_address_10))
                             + (float)((float)(*a1 - state_address_9) * (float)(*a1 - state_address_9)))
                     + (float)((float)(a1[2] - component_delta_3) * (float)(a1[2] - component_delta_3))) <= 16384.0 )
          {
            selected_scalar_2 = 1.0;
            if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
              selected_scalar_2 = 0.5;
            LODWORD(packed_word_bits) = saved_audio_play_at_result[1];
          }
          else
          {
            selected_scalar_2 = 0.5;
          }
          scaled_index_12 = 278720LL * (int)packed_word_bits;
          combined_products_5 = (float)((float)((float)(selected_scalar_2 * limited_value_5) - *((float *)saved_audio_play_at_result + 3)) * 0.125) + *((float *)saved_audio_play_at_result + 3);
          *((float *)saved_audio_play_at_result + 3) = combined_products_5;
          *(float *)&dword_140404A6C[scaled_index_12 + 327704] = combined_products_5;
          if ( combined_products_5 >= 0.0625 || (_DWORD)packed_word_bits == -1 )
            goto LABEL_86;
          if ( !dword_140404A6C[scaled_index_12 + 327698] )
            dword_140404A6C[scaled_index_12 + 327698] = 1;
        }
        else
        {
          scaled_index_13 = (int)*saved_audio_play_at_result;
          if ( (_DWORD)scaled_index_13 != -1 )
          {
            if ( !dword_140404A6C[278720 * scaled_index_13 + 327698] )
              dword_140404A6C[278720 * scaled_index_13 + 327698] = 1;
            *saved_audio_play_at_result = -1;
            state_word_2 = g_15104AE60;
          }
          table_value_4 = (int)saved_audio_play_at_result[1];
          if ( (_DWORD)table_value_4 == -1 )
            goto LABEL_87;
          if ( !dword_140404A6C[278720 * table_value_4 + 327698] )
            dword_140404A6C[278720 * table_value_4 + 327698] = 1;
        }
        saved_audio_play_at_result[1] = -1;
LABEL_86:
        state_word_2 = g_15104AE60;
LABEL_87:
        ++iteration_count_5;
        saved_audio_play_at_result += 5;
        if ( iteration_count_5 >= state_word_2 )
        {
          cached_game_state = game_state;
          state_word = g_183EBFAA0;
          break;
        }
      }
    }
  }
  if ( !state_word || cached_game_state == 3 )
  {
LABEL_91:
    iteration_count_6 = 0;
    if ( state_word_2 > 0 )
    {
      state_address_11 = &g_15104AE6C;
      do
      {
        scaled_index_14 = (int)*(state_address_11 - 1);
        if ( (_DWORD)scaled_index_14 != -1 )
        {
          if ( !dword_140404A6C[278720 * scaled_index_14 + 327698] )
            dword_140404A6C[278720 * scaled_index_14 + 327698] = 1;
          *(state_address_11 - 1) = -1;
          state_word_2 = g_15104AE60;
        }
        scaled_index_15 = (int)*state_address_11;
        if ( (_DWORD)scaled_index_15 != -1 )
        {
          if ( !dword_140404A6C[278720 * scaled_index_15 + 327698] )
            dword_140404A6C[278720 * scaled_index_15 + 327698] = 1;
          *state_address_11 = -1;
          state_word_2 = g_15104AE60;
        }
        ++iteration_count_6;
        state_address_11 += 5;
      }
      while ( iteration_count_6 < state_word_2 );
    }
  }
  iteration_count_7 = 0;
  while ( iteration_count_7 < state_word_2 )
  {
    if ( *(state_address_2 - 1) == -1 && *state_address_2 == -1 )
    {
      integer_difference = state_word_2 - 1;
      g_15104AE60 = integer_difference;
      __builtin_memcpy(state_address_2 - 2, &dword_140404A6C[5 * integer_difference + 70326526], 16);
      state_address_2[2] = dword_140404A6C[5 * integer_difference + 70326530];
      state_word_2 = g_15104AE60;
    }
    else
    {
      ++iteration_count_7;
      state_address_2 += 5;
    }
  }
  state_address_12 = &g_151620CA4;
  do
  {
    *state_address_12 = 0;
    state_address_12 += 3597;
  }
  while ( (__int64)state_address_12 < (__int64)&g_1519A40A4 );
  if ( !state_word )
  {
    g_189C1DC80 = 0;
    g_189C7BEC4 = 0;
    g_189CDA108 = 0;
    g_189D3834C = 0;
    g_189D96590 = 0;
    g_189DF47D4 = 0;
    g_189E52A18 = 0;
    g_189EB0C5C = 0;
  }
  state_scalar = g_183F7C570;
  state_address_13 = &g_189C1DCA4;
  state_scalar_2 = g_183F7C56C;
  state_scalar_3 = g_183F7C568;
  state_scalar_4 = g_183F7C54C;
  state_scalar_5 = g_183F7C548;
  state_address_14 = &g_189C1DCA4;
  state_scalar_6 = g_183F7C544;
  remaining_count_2 = 4;
  do
  {
    scaled_index_16 = *(state_address_14 - 9);
    if ( scaled_index_16 )
    {
      scaled_index_17 = (int)*(state_address_14 - 7);
      if ( (_DWORD)scaled_index_17 != -1 && dword_140404A6C[scaled_index_17 + 284023074] )
      {
        *(state_address_14 - 9) = 0;
        scaled_index_16 = 0;
      }
      scaled_index_18 = (int)*(state_address_14 - 5);
      if ( (_DWORD)scaled_index_18 == -1 || cached_game_state == 3 )
      {
        scaled_index_19 = (int)*(state_address_14 - 4);
        if ( (_DWORD)scaled_index_19 == -1 )
        {
          weighted_sum_8 = state_scalar_4 - state_scalar;
          weighted_sum_9 = state_scalar_5 - state_scalar_2;
          weighted_sum_10 = state_scalar_6 - state_scalar_3;
        }
        else
        {
          weighted_sum_8 = *(float *)&dword_140404A6C[13 * scaled_index_19 + 285083827];
          weighted_sum_9 = *(float *)&dword_140404A6C[13 * scaled_index_19 + 285083826];
          weighted_sum_10 = *(float *)&dword_140404A6C[13 * scaled_index_19 + 285083825];
        }
      }
      else
      {
        weighted_sum_8 = *(float *)&dword_140404A6C[344 * scaled_index_18 + 284956409];
        weighted_sum_9 = *(float *)&dword_140404A6C[344 * scaled_index_18 + 284956408];
        weighted_sum_10 = *(float *)&dword_140404A6C[344 * scaled_index_18 + 284956407];
      }
      *((float *)state_address_14 - 2) = weighted_sum_10;
      *((float *)state_address_14 - 1) = weighted_sum_9;
      *(float *)state_address_14 = weighted_sum_8;
      if ( scaled_index_16 && (_DWORD)scaled_index_17 != -1 )
        dword_140404A6C[3597 * scaled_index_17 + 71856270] = 1;
    }
    table_value_5 = state_address_14[96392];
    if ( table_value_5 )
    {
      table_value_6 = (int)state_address_14[96394];
      if ( (_DWORD)table_value_6 != -1 && dword_140404A6C[table_value_6 + 284023074] )
      {
        state_address_14[96392] = 0;
        table_value_5 = 0;
      }
      table_value_7 = (int)state_address_14[96396];
      if ( (_DWORD)table_value_7 == -1 || cached_game_state == 3 )
      {
        table_value_8 = (int)state_address_14[96397];
        if ( (_DWORD)table_value_8 == -1 )
        {
          weighted_sum_11 = state_scalar_4 - state_scalar;
          weighted_sum_12 = state_scalar_5 - state_scalar_2;
          weighted_sum_13 = state_scalar_6 - state_scalar_3;
        }
        else
        {
          weighted_sum_11 = *(float *)&dword_140404A6C[13 * table_value_8 + 285083827];
          weighted_sum_12 = *(float *)&dword_140404A6C[13 * table_value_8 + 285083826];
          weighted_sum_13 = *(float *)&dword_140404A6C[13 * table_value_8 + 285083825];
        }
      }
      else
      {
        weighted_sum_11 = *(float *)&dword_140404A6C[344 * table_value_7 + 284956409];
        weighted_sum_12 = *(float *)&dword_140404A6C[344 * table_value_7 + 284956408];
        weighted_sum_13 = *(float *)&dword_140404A6C[344 * table_value_7 + 284956407];
      }
      *((float *)state_address_14 + 96399) = weighted_sum_13;
      *((float *)state_address_14 + 96400) = weighted_sum_12;
      *((float *)state_address_14 + 96401) = weighted_sum_11;
      if ( table_value_5 && (_DWORD)table_value_6 != -1 )
        dword_140404A6C[3597 * table_value_6 + 71856270] = 1;
    }
    state_address_14 += 192802;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  state_address_15 = (int **)&g_187BDE660;
  running_total = 0;
  state_address_17 = &g_187BDE660;
  sound = 2048;
  sr_position.first = 8;
  record_byte_offset = &g_144960AC0;
  running_total_2 = 0;
  do
  {
    scaled_index_20 = *(state_address_13 - 9);
    integer_difference_2 = sound - 1992;
    state_address_13[63623] = sound - 1992;
    if ( scaled_index_20 && (!*(state_address_13 - 8) || *(state_address_13 - 6) != *(state_address_13 - 7)) )
    {
      sub_1401E27C0(*state_address_15, 4028, (int *)state_address_15);
      scaled_index_20 = *(state_address_13 - 9);
      integer_difference_2 = state_address_13[63623];
      state_address_13[30726] = ((unsigned __int8)state_address_13[30725] - 8) & 0x3F;
    }
    *(state_address_13 - 6) = *(state_address_13 - 7);
    *(state_address_13 - 8) = scaled_index_20;
    if ( scaled_index_20 )
    {
      if ( g_140404A88 )
      {
        scaled_index_21 = 278720LL * integer_difference_2;
        if ( !dword_140404A6C[scaled_index_21 + 327697] )
        {
          crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index_21 + 327698]), 0, 0x1102FCu);
          scaled_index_22 = *(state_address_13 - 2);
          dword_140404A6C[scaled_index_21 + 327772] = 0;
          dword_140404A6C[scaled_index_21 + 589917] = 0;
          *(_QWORD *)&dword_140404A6C[scaled_index_21 + 327697] = 1;
          dword_140404A6C[scaled_index_21 + 327699] = 1065353216;
          dword_140404A6C[scaled_index_21 + 327700] = 1;
          dword_140404A6C[scaled_index_21 + 327702] = sound;
          dword_140404A6C[scaled_index_21 + 327704] = 1065353216;
          dword_140404A6C[scaled_index_21 + 327705] = 1065353216;
          dword_140404A6C[scaled_index_21 + 327706] = 1065353216;
          dword_140404A6C[scaled_index_21 + 327707] = 1065353216;
          dword_140404A6C[scaled_index_21 + 327708] = 1;
          *(_QWORD *)record_byte_offset = 0;
          dword_140404A6C[scaled_index_21 + 606302] = scaled_index_22;
          dword_140404A6C[scaled_index_21 + 606303] = *(state_address_13 - 1);
          dword_140404A6C[scaled_index_21 + 606304] = *state_address_13;
          dword_140404A6C[scaled_index_21 + 606308] = record_byte_offset[2];
          dword_140404A6C[scaled_index_21 + 606310] = 1;
          dword_140404A6C[scaled_index_21 + 606414] = 0;
        }
      }
    }
    else
    {
      scaled_index_23 = 278720LL * integer_difference_2;
      if ( !dword_140404A6C[scaled_index_23 + 327698] )
        dword_140404A6C[scaled_index_23 + 327698] = 1;
    }
    saved_state_address = (int **)state_address_17;
    remaining_count_3 = 8;
    do
    {
      if ( (int)sr_audio_sound_available(sound) < 5760 )
      {
        table_value_9 = (int)state_address_13[30726];
        if ( (_DWORD)table_value_9 != (state_address_13[30725] & 0x3F) )
        {
          selection_flag = 0;
          lookup_index = table_value_9;
          flags = 2048;
          table_value_10 = dword_140404A6C[running_total + 308337813 + table_value_9];
          loaded_word_2 = *saved_state_address;
          state_address_16 = &dword_140404A6C[running_total_2 + 308307091];
          if ( table_value_10 <= 0 )
          {
            sub_1401E25C0(loaded_word_2, nullptr, 0, (__int64)state_address_16, flags, selection_flag);
            crt_memset((void *)(uintptr_t)(&dword_140404A6C[running_total_2 + 308307091]), 0, 0x780u);
          }
          else
          {
            sub_1401E25C0(
              loaded_word_2,
              (char *)&dword_140404A6C[512 * lookup_index + 308337941 + running_total_2],
              table_value_10,
              (__int64)state_address_16,
              flags,
              selection_flag);
          }
          running_total_3 = (__int16 *)state_address_13 + 11;
          running_total_4 = 0;
          dword_140404A6C[running_total + 308337813 + (int)state_address_13[30726]] = 0;
          remaining_count_4 = 96;
          do
          {
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset) & 0x3FFFF)) = (float)*(running_total_3 - 1) * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 1) & 0x3FFFF)) = (float)*running_total_3 * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 2) & 0x3FFFF)) = (float)running_total_3[1] * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 3) & 0x3FFFF)) = (float)running_total_3[2] * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 4) & 0x3FFFF)) = (float)running_total_3[3] * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 5) & 0x3FFFF)) = (float)running_total_3[4] * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 6) & 0x3FFFF)) = (float)running_total_3[5] * 0.000030517578;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 7) & 0x3FFFF)) = (float)running_total_3[6] * 0.000030517578;
            converted_vector = _mm_cvtsi32_si128(running_total_3[7]);
            running_total_3 += 10;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((running_total_4 + *record_byte_offset + 8) & 0x3FFFF)) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0]
                                                                                     * 0.000030517578;
            scaled_index_24 = running_total_4 + *record_byte_offset;
            running_total_4 += 10;
            *(float *)(*((_QWORD *)record_byte_offset - 1) + 4LL * ((scaled_index_24 + 9) & 0x3FFFF)) = (float)*(running_total_3 - 2) * 0.000030517578;
            --remaining_count_4;
          }
          while ( remaining_count_4 );
          *record_byte_offset = (*record_byte_offset + 960) & 0x3FFFF;
          state_address_13[30726] = ((unsigned __int8)state_address_13[30726] + 1) & 0x3F;
        }
      }
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    table_value_11 = state_address_13[30725];
    table_value_12 = state_address_13[30726];
    record_byte_offset_2 = table_value_11 - table_value_12;
    record_pointer = input_cursor;
    if ( *(state_address_13 - 9) )
    {
      if ( table_value_11 < table_value_12 )
        record_byte_offset_2 += 64;
      if ( record_byte_offset_2 > 16 )
        state_address_13[30726] = ((_BYTE)table_value_11 - 8) & 0x3F;
    }
    record_pointer_2 = input_cursor_2;
    packed_word_bits_2 = (int)state_address_13[63623];
    product_difference = *((float *)state_address_13 - 2);
    product_difference_2 = *((float *)state_address_13 - 1);
    scaled_value_2 = *(float *)state_address_13;
    scaled_index_25 = 278720 * packed_word_bits_2;
    cached_first = *(state_address_13 - 4) == -1;
    *(float *)&dword_140404A6C[scaled_index_25 + 606302] = product_difference;
    *(float *)&dword_140404A6C[scaled_index_25 + 606303] = product_difference_2;
    *(float *)&dword_140404A6C[scaled_index_25 + 606304] = scaled_value_2;
    dword_140404A6C[scaled_index_25 + 606305] = *record_pointer_2;
    dword_140404A6C[scaled_index_25 + 606306] = record_pointer_2[1];
    dword_140404A6C[scaled_index_25 + 606307] = record_pointer_2[2];
    if ( cached_first )
    {
      scaled_index_26 = *(state_address_13 - 3);
      if ( scaled_index_26 )
      {
        if ( scaled_index_26 == 1 )
          dword_140404A6C[scaled_index_25 + 606308] = 1086324736;
        else
          dword_140404A6C[scaled_index_25 + 606308] = 1098907648;
      }
      else
      {
        dword_140404A6C[scaled_index_25 + 606308] = 0x40000000;
      }
    }
    else
    {
      dword_140404A6C[scaled_index_25 + 606308] = 1065353216;
    }
    if ( (float)((float)((float)((float)(record_pointer[1] - product_difference_2) * (float)(record_pointer[1] - product_difference_2))
                       + (float)((float)(*record_pointer - product_difference) * (float)(*record_pointer - product_difference)))
               + (float)((float)(record_pointer[2] - scaled_value_2) * (float)(record_pointer[2] - scaled_value_2))) <= 16384.0 )
    {
      selected_scalar_3 = 1.0;
      if ( (unsigned int)sub_1400DC050((float *)state_address_13 - 2, record_pointer, 0) )
        selected_scalar_3 = 0.5;
      LODWORD(packed_word_bits_2) = state_address_13[63623];
    }
    else
    {
      selected_scalar_3 = 0.5;
    }
    ++sound;
    state_address_15 = (int **)(state_address_17 + 2);
    combined_products_6 = (float)(selected_scalar_3 - *((float *)state_address_13 + 4)) * 0.125;
    running_total_2 += 96401;
    state_address_17 += 2;
    weighted_sum_14 = combined_products_6 + *((float *)state_address_13 + 4);
    running_total += 96401;
    record_byte_offset += 8;
    *((float *)state_address_13 + 4) = weighted_sum_14;
    state_address_13 += 96401;
    cached_first = sr_position.first-- == 1;
    *(float *)&dword_140404A6C[278720 * (int)packed_word_bits_2 + 327704] = weighted_sum_14;
  }
  while ( !cached_first );
  return; /* native void spatial audio update */
}
#undef unused_frame_slot_0
#undef flags
#undef selection_flag
#undef state_address_17
#undef input_cursor
#undef input_cursor_2
#undef unused_frame_slot_88

//----- (0000000140153040) ----------------------------------------------------
_BOOL8            sub_140153040(__int64 a1, __int64 a2, float *a3, float *a4, float *a5, float a6)
{
  int iteration_count;
  __int64 record_byte_offset;
  __int64 loaded_word;
  __int64 loaded_word_2;
  float source_component_w;
  float scaled_value;
  __int64 loaded_word_3;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word_4;
  float scaled_value_2;
  float weighted_sum_4;
  float scaled_value_3;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float scaled_value_4;
  float weighted_sum_9;
  float weighted_sum_10;
  __int64 loaded_word_5;
  float weighted_sum_11;
  float saved_weighted_sum;
  float weighted_sum_12;
  float weighted_sum_13;
  float scaled_value_5;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float component_sum;
  float scaled_value_6;
  float weighted_sum_19;
  float scaled_value_7;
  float component_delta;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float weighted_sum_20;
  float component_sum_2;
  float saved_component_sum;
  float component_delta_2;
  float component_delta_3;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  bool comparison_result;
  float scaled_value_11;
  float source_component_y;
  float weighted_sum_21;
  float source_component_z;
  float scaled_value_12;
  float component_sum_3;
  float component_sum_4;
  float component_sum_5;
  __int64 loaded_word_6;
  float weighted_sum_22;
  float weighted_sum_23;
  float weighted_sum_24;
  float weighted_sum_25;
  float weighted_sum_26;
  float weighted_sum_27;
  float component_sum_6;
  float source_component_y_2;
  float scaled_value_13;
  float source_component_z_2;
  float product_difference_4;
  float combined_products;
  float comparison_operand;
  float comparison_operand_2;
  float square_root_2;
  float scaled_value_14;
  float source_component_y_3;
  float source_component_z_3;
  float product_difference_5;
  float combined_products_2;
  float comparison_operand_3;
  float comparison_operand_4;
  float square_root_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140153040[416];
#define normal (*(float (*))(void *)(sr_frame_140153040 + 8)) /* [rsp+48h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140153040 + 12)) /* [rsp+4Ch] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_140153040 + 16)) /* [rsp+50h] */
#define point (*(float (*))(void *)(sr_frame_140153040 + 24)) /* [rsp+58h] */
#define frame_float_at_28 (*(float (*))(void *)(sr_frame_140153040 + 28)) /* [rsp+5Ch] */
#define frame_float_at_32 (*(float (*))(void *)(sr_frame_140153040 + 32)) /* [rsp+60h] */
#define to (*(float (*))(void *)(sr_frame_140153040 + 40)) /* [rsp+68h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_140153040 + 44)) /* [rsp+6Ch] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_140153040 + 48)) /* [rsp+70h] */
#define to_2 (*(float (*))(void *)(sr_frame_140153040 + 56)) /* [rsp+78h] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_140153040 + 60)) /* [rsp+7Ch] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_140153040 + 64)) /* [rsp+80h] */
#define saved_component_sum_2 (*(float (*))(void *)(sr_frame_140153040 + 72)) /* [rsp+88h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_140153040 + 76)) /* [rsp+8Ch] */
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_140153040 + 80)) /* [rsp+90h] */
#define component_sum_7 (*(float (*))(void *)(sr_frame_140153040 + 84)) /* [rsp+94h] */
#define saved_component_sum_3 (*(float (*))(void *)(sr_frame_140153040 + 88)) /* [rsp+98h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140153040 + 96)) /* [rsp+A0h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_140153040 + 112)) /* [rsp+B0h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_140153040 + 128)) /* [rsp+C0h] */
#define float_buffer_4 (*(float (*)[4])(void *)(sr_frame_140153040 + 144)) /* [rsp+D0h] */
#define t (*(__int128 (*))(void *)(sr_frame_140153040 + 160)) /* [rsp+E0h] */
#define saved_weighted_sum_4 (*(float (*))(void *)(sr_frame_140153040 + 392)) /* [rsp+1C8h] */
#define saved_weighted_sum_5 (*(float (*))(void *)(sr_frame_140153040 + 400)) /* [rsp+1D0h] */

  iteration_count = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( *(int *)(a2 + 48) <= 0 )
    return 0;
  record_byte_offset = 0;
  do
  {
    loaded_word = *(_QWORD *)(a2 + 8);
    loaded_word_2 = *(_QWORD *)(a2 + 56);
    source_component_w = a4[3];
    scaled_value = *a4;
    loaded_word_3 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2 + 8);
    weighted_sum = *(float *)(loaded_word + 4 * loaded_word_3);
    weighted_sum_2 = *(float *)(loaded_word + 4 * loaded_word_3 + 4);
    weighted_sum_3 = *(float *)(loaded_word + 4 * loaded_word_3 + 8);
    loaded_word_4 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2 + 12);
    scaled_value_2 = a4[4] * weighted_sum_2;
    weighted_sum_4 = (float)(source_component_w * weighted_sum_2) + (float)(*a4 * weighted_sum);
    scaled_value_3 = a4[5] * weighted_sum_2;
    weighted_sum_5 = *(float *)(loaded_word + 4 * loaded_word_4 + 4);
    weighted_sum_6 = *(float *)(loaded_word + 4 * loaded_word_4);
    weighted_sum_7 = weighted_sum_4 + (float)(a4[6] * weighted_sum_3);
    weighted_sum_8 = scaled_value_2 + (float)(a4[1] * weighted_sum);
    scaled_value_4 = a4[2] * weighted_sum;
    weighted_sum_9 = *(float *)(loaded_word + 4 * loaded_word_4 + 8);
    weighted_sum_10 = weighted_sum_8 + (float)(a4[7] * weighted_sum_3);
    loaded_word_5 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2 + 16);
    weighted_sum_11 = (float)(scaled_value_3 + scaled_value_4) + (float)(a4[8] * weighted_sum_3);
    saved_weighted_sum = weighted_sum_6;
    weighted_sum_12 = (float)((float)(weighted_sum_6 * *a4) + (float)(weighted_sum_5 * source_component_w)) + (float)(weighted_sum_9 * a4[6]);
    weighted_sum_13 = *(float *)(loaded_word + 4 * loaded_word_5);
    scaled_value_5 = weighted_sum_9 * a4[7];
    weighted_sum_14 = (float)(weighted_sum_6 * a4[2]) + (float)(weighted_sum_5 * a4[5]);
    weighted_sum_15 = (float)(saved_weighted_sum * a4[1]) + (float)(weighted_sum_5 * a4[4]);
    weighted_sum_16 = *(float *)(loaded_word + 4 * loaded_word_5 + 4);
    weighted_sum_17 = weighted_sum_14 + (float)(weighted_sum_9 * a4[8]);
    weighted_sum_18 = *(float *)(loaded_word + 4 * loaded_word_5 + 8);
    component_sum = weighted_sum_15 + scaled_value_5;
    saved_weighted_sum_4 = weighted_sum_11;
    scaled_value_6 = weighted_sum_18 * a4[6];
    saved_weighted_sum_5 = weighted_sum_12;
    saved_component_sum_2 = component_sum;
    saved_weighted_sum_2 = weighted_sum_17;
    weighted_sum_19 = (float)((float)(weighted_sum_13 * scaled_value) + (float)(weighted_sum_16 * source_component_w)) + scaled_value_6;
    scaled_value_7 = weighted_sum_16 * a4[4];
    component_delta = weighted_sum_12 - weighted_sum_7;
    scaled_value_8 = weighted_sum_13 * a4[1];
    scaled_value_9 = weighted_sum_18 * a4[7];
    scaled_value_10 = weighted_sum_18 * a4[8];
    weighted_sum_20 = (float)(weighted_sum_13 * a4[2]) + (float)(weighted_sum_16 * a4[5]);
    saved_weighted_sum_3 = weighted_sum_19;
    component_sum_2 = weighted_sum_20 + scaled_value_10;
    saved_component_sum = component_sum;
    component_sum_7 = (float)(scaled_value_8 + scaled_value_7) + scaled_value_9;
    component_delta_2 = weighted_sum_19 - weighted_sum_7;
    component_delta_3 = saved_component_sum - weighted_sum_10;
    saved_component_sum_3 = component_sum_2;
    product_difference = (float)((float)(component_sum_7 - weighted_sum_10) * (float)(weighted_sum_17 - weighted_sum_11)) - (float)((float)(component_sum_2 - weighted_sum_11) * component_delta_3);
    product_difference_2 = (float)((float)(component_sum_2 - weighted_sum_11) * component_delta) - (float)(component_delta_2 * (float)(weighted_sum_17 - weighted_sum_11));
    product_difference_3 = (float)(component_delta_2 * component_delta_3) - (float)((float)(component_sum_7 - weighted_sum_10) * component_delta);
    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
    if ( square_root == 0.0 )
    {
      normal = 0.0;
      scaled_ratio = 0.0;
      unused_written_slot = 0.0;
      scaled_ratio_2 = 0.0;
      scaled_ratio_3 = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * product_difference;
      scaled_ratio_2 = (float)(1.0 / square_root) * product_difference_2;
      normal = scaled_ratio;
      scaled_ratio_3 = (float)(1.0 / square_root) * product_difference_3;
      unused_written_slot = scaled_ratio_2;
    }
    comparison_result = *(_DWORD *)(record_byte_offset + loaded_word_2 + 4) == 4;
    scaled_value_11 = *a3;
    source_component_y = a3[1];
    weighted_sum_21 = *a3 + saved_weighted_sum_5;
    source_component_z = a3[2];
    scaled_value_12 = *a3;
    unused_written_slot_2 = scaled_ratio_3;
    component_sum_3 = scaled_value_12 + weighted_sum_7;
    float_buffer_3[0] = weighted_sum_21;
    component_sum_4 = source_component_y + weighted_sum_10;
    component_sum_5 = source_component_z + saved_weighted_sum_4;
    float_buffer_3[1] = source_component_y + saved_component_sum_2;
    float_buffer_2[0] = component_sum_3;
    float_buffer_3[2] = source_component_z + saved_weighted_sum_2;
    float_buffer_2[1] = component_sum_4;
    float_buffer[0] = scaled_value_11 + saved_weighted_sum_3;
    float_buffer_2[2] = source_component_z + saved_weighted_sum_4;
    float_buffer[1] = source_component_y + component_sum_7;
    float_buffer[2] = source_component_z + saved_component_sum_3;
    if ( comparison_result )
    {
      loaded_word_6 = 3 * *(_DWORD *)(record_byte_offset + loaded_word_2 + 20);
      weighted_sum_22 = *(float *)(loaded_word + 4 * loaded_word_6);
      weighted_sum_23 = (float)((float)(weighted_sum_22 * *a4) + (float)(*(float *)(loaded_word + 4 * loaded_word_6 + 4) * a4[3]))
          + (float)((float)(*(float *)(loaded_word + 4 * loaded_word_6 + 8) * a4[6]) + scaled_value_11);
      weighted_sum_24 = (float)(*(float *)(loaded_word + 4 * loaded_word_6 + 8) * a4[8]) + (float)(weighted_sum_22 * a4[2]);
      weighted_sum_25 = *(float *)(loaded_word + 4 * loaded_word_6 + 4) * a4[5];
      weighted_sum_26 = (float)(*(float *)(loaded_word + 4 * loaded_word_6 + 8) * a4[7]) + (float)(weighted_sum_22 * a4[1]);
      weighted_sum_27 = (float)(*(float *)(loaded_word + 4 * loaded_word_6 + 4) * a4[4]) + source_component_y;
      float_buffer_4[0] = weighted_sum_23;
      component_sum_6 = weighted_sum_24 + (float)(weighted_sum_25 + a3[2]);
      float_buffer_4[1] = weighted_sum_26 + weighted_sum_27;
      float_buffer_4[2] = component_sum_6;
    }
    source_component_y_2 = a5[1];
    scaled_value_13 = *a5;
    source_component_z_2 = a5[2];
    product_difference_4 = *a5 - component_sum_3;
    unused_written_slot_3 = source_component_y_2 - component_sum_4;
    to = product_difference_4;
    unused_written_slot_4 = source_component_z_2 - component_sum_5;
    combined_products = (float)((float)(scaled_ratio_2 * (float)(source_component_y_2 - component_sum_4)) + (float)(scaled_ratio * product_difference_4)) + (float)(scaled_ratio_3 * (float)(source_component_z_2 - component_sum_5));
    if ( combined_products <= a6 && combined_products >= 0.0 )
    {
      to = (float)(scaled_ratio * (float)-a6) + scaled_value_13;
      unused_written_slot_3 = (float)(scaled_ratio_2 * (float)-a6) + source_component_y_2;
      unused_written_slot_4 = (float)(scaled_ratio_3 * (float)-a6) + source_component_z_2;
      if ( sr_collision_line_triangle(&point, &normal, (float *)&t, a5, &to, float_buffer_2, float_buffer_3, float_buffer) )
      {
        comparison_operand = frame_float_at_28;
        comparison_operand_2 = frame_float_at_32;
        square_root_2 = fsqrt(
                (float)((float)((float)(frame_float_at_28 - a5[1]) * (float)(frame_float_at_28 - a5[1]))
                      + (float)((float)(point - *a5) * (float)(point - *a5)))
              + (float)((float)(frame_float_at_32 - a5[2]) * (float)(frame_float_at_32 - a5[2])));
        if ( (float)(a6 - square_root_2) > *(float *)(a1 + 28) )
        {
          *(float *)a1 = point;
          *(float *)(a1 + 4) = comparison_operand;
          *(float *)(a1 + 8) = comparison_operand_2;
          *(float *)(a1 + 12) = scaled_ratio;
          *(float *)(a1 + 16) = scaled_ratio_2;
          *(float *)(a1 + 20) = scaled_ratio_3;
          *(float *)(a1 + 28) = a6 - square_root_2;
        }
      }
    }
    if ( *(_DWORD *)(record_byte_offset + *(_QWORD *)(a2 + 56) + 4) == 4 )
    {
      scaled_value_14 = *a5;
      source_component_y_3 = a5[1];
      source_component_z_3 = a5[2];
      product_difference_5 = scaled_ratio * (float)(*a5 - component_sum_3);
      to_2 = *a5 - component_sum_3;
      unused_written_slot_5 = source_component_y_3 - component_sum_4;
      unused_written_slot_6 = source_component_z_3 - component_sum_5;
      combined_products_2 = (float)(product_difference_5 + (float)(scaled_ratio_2 * (float)(source_component_y_3 - component_sum_4))) + (float)(scaled_ratio_3 * (float)(source_component_z_3 - component_sum_5));
      if ( combined_products_2 <= a6 && combined_products_2 >= 0.0 )
      {
        to_2 = (float)(scaled_ratio * (float)-a6) + scaled_value_14;
        unused_written_slot_5 = (float)(scaled_ratio_2 * (float)-a6) + source_component_y_3;
        unused_written_slot_6 = (float)(scaled_ratio_3 * (float)-a6) + source_component_z_3;
        if ( sr_collision_line_triangle(&point, &normal, (float *)&t + 1, a5, &to_2, float_buffer_2, float_buffer, float_buffer_4) )
        {
          comparison_operand_3 = frame_float_at_28;
          comparison_operand_4 = frame_float_at_32;
          square_root_3 = fsqrt(
                  (float)((float)((float)(frame_float_at_28 - a5[1]) * (float)(frame_float_at_28 - a5[1]))
                        + (float)((float)(point - *a5) * (float)(point - *a5)))
                + (float)((float)(frame_float_at_32 - a5[2]) * (float)(frame_float_at_32 - a5[2])));
          if ( (float)(a6 - square_root_3) > *(float *)(a1 + 28) )
          {
            *(float *)a1 = point;
            *(float *)(a1 + 4) = comparison_operand_3;
            *(float *)(a1 + 8) = comparison_operand_4;
            *(float *)(a1 + 12) = scaled_ratio;
            *(float *)(a1 + 16) = scaled_ratio_2;
            *(float *)(a1 + 20) = scaled_ratio_3;
            *(float *)(a1 + 28) = a6 - square_root_3;
          }
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 36;
  }
  while ( iteration_count < *(_DWORD *)(a2 + 48) );
  return *(float *)(a1 + 28) > 0.0;
}
#undef normal
#undef unused_written_slot
#undef unused_written_slot_2
#undef point
#undef frame_float_at_28
#undef frame_float_at_32
#undef to
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef to_2
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef saved_component_sum_2
#undef saved_weighted_sum_2
#undef saved_weighted_sum_3
#undef component_sum_7
#undef saved_component_sum_3
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef t
#undef saved_weighted_sum_4
#undef saved_weighted_sum_5

//----- (0000000140154200) ----------------------------------------------------
__int64            sub_140154200(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7)
{
  float scaled_ratio;
  float product_difference;
  float component_delta;
  float component_delta_2;
  float square_root;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  float combined_products;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float product_difference_2;
  float component_delta_3;
  float component_delta_4;
  float square_root_2;
  float scaled_ratio_5;
  float scaled_ratio_6;

  scaled_ratio = 0.0;
  product_difference = *a7 - *a6;
  component_delta = a7[1] - a6[1];
  component_delta_2 = a7[2] - a6[2];
  square_root = fsqrt((float)((float)(component_delta * component_delta) + (float)(product_difference * product_difference)) + (float)(component_delta_2 * component_delta_2));
  if ( square_root == 0.0 )
  {
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
    scaled_ratio_4 = 0.0;
  }
  else
  {
    scaled_ratio_2 = product_difference * (float)(1.0 / square_root);
    scaled_ratio_3 = component_delta * (float)(1.0 / square_root);
    scaled_ratio_4 = component_delta_2 * (float)(1.0 / square_root);
  }
  combined_products = (float)((float)((float)(*a4 - *a6) * scaled_ratio_2) + (float)((float)(a4[1] - a6[1]) * scaled_ratio_3))
      + (float)((float)(a4[2] - a6[2]) * scaled_ratio_4);
  if ( combined_products <= 0.0 )
    return 0;
  if ( combined_products >= square_root )
    return 0;
  weighted_sum = (float)(scaled_ratio_2 * combined_products) + *a6;
  *a1 = weighted_sum;
  weighted_sum_2 = (float)(scaled_ratio_3 * combined_products) + a6[1];
  a1[1] = weighted_sum_2;
  weighted_sum_3 = (float)(scaled_ratio_4 * combined_products) + a6[2];
  a1[2] = weighted_sum_3;
  product_difference_2 = *a4 - weighted_sum;
  component_delta_3 = a4[1] - weighted_sum_2;
  component_delta_4 = a4[2] - weighted_sum_3;
  square_root_2 = fsqrt((float)((float)(component_delta_3 * component_delta_3) + (float)(product_difference_2 * product_difference_2)) + (float)(component_delta_4 * component_delta_4));
  if ( square_root_2 >= a5 )
    return 0;
  if ( square_root_2 == 0.0 )
  {
    scaled_ratio_5 = 0.0;
    scaled_ratio_6 = 0.0;
  }
  else
  {
    scaled_ratio = (float)(1.0 / square_root_2) * component_delta_4;
    scaled_ratio_5 = (float)(1.0 / square_root_2) * component_delta_3;
    scaled_ratio_6 = (float)(1.0 / square_root_2) * product_difference_2;
  }
  *a2 = scaled_ratio_6;
  a2[1] = scaled_ratio_5;
  a2[2] = scaled_ratio;
  *a3 = square_root_2;
  return 1;
}

//----- (00000001401550A0) ----------------------------------------------------
_BOOL8            sub_1401550A0(int a1, float *a2, float a3)
{
  __int64 input_value;
  __int64 record_word_offset;
  signed int iteration_count;
  int *record_byte_offset;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 loaded_word;
  __int64 scaled_index_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  __int64 scaled_index_3;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  __int64 table_value;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  __int64 scaled_index_4;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  __int64 scaled_index_5;
  __int64 masked_bits;
  __int64 scaled_index_6;
  float component_delta_7;
  float component_delta_8;
  float component_delta_9;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float square_root_2;
  __int64 scaled_index_7;
  __int64 masked_bits_2;
  __int64 scaled_index_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401550A0[352];
#define float_word (*(__int64 (*))(void *)(sr_frame_1401550A0 + 0)) /* [rsp+48h] */
#define scaled_ratio (*(float (*))(void *)(sr_frame_1401550A0 + 8)) /* [rsp+50h] */
#define float_word_2 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 16)) /* [rsp+58h] */
#define frame_word_at_20 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 20)) /* [rsp+5Ch] */
#define frame_word_at_24 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 24)) /* [rsp+60h] */
#define float_buffer (*(float (*)[3])(void *)(sr_frame_1401550A0 + 32)) /* [rsp+68h] */
#define float_buffer_2 (*(float (*)[4])(void *)(sr_frame_1401550A0 + 48)) /* [rsp+78h] */
#define float_buffer_3 (*(float (*)[4])(void *)(sr_frame_1401550A0 + 64)) /* [rsp+88h] */
#define float_buffer_4 (*(float (*)[6])(void *)(sr_frame_1401550A0 + 80)) /* [rsp+98h] */
#define frame_float_at_320 (*(float (*))(void *)(sr_frame_1401550A0 + 320)) /* [rsp+188h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1401550A0 + 328)) /* [rsp+190h] */
#define saved_weighted_sum_2 (*(float (*))(void *)(sr_frame_1401550A0 + 336)) /* [rsp+198h] */

  input_value = a1;
  record_word_offset = 5210LL * a1;
  if ( (float)(*a2 + a3) < *(float *)&dword_140404A6C[record_word_offset + 129716753] )
    return 0;
  if ( (float)(a2[1] + a3) < *(float *)&dword_140404A6C[record_word_offset + 129716754] )
    return 0;
  if ( (float)(a2[2] + a3) < *(float *)&dword_140404A6C[record_word_offset + 129716755] )
    return 0;
  if ( (float)(*a2 - a3) > *(float *)&dword_140404A6C[record_word_offset + 129716756] )
    return 0;
  if ( (float)(a2[1] - a3) > *(float *)&dword_140404A6C[record_word_offset + 129716757] )
    return 0;
  if ( (float)(a2[2] - a3) > *(float *)&dword_140404A6C[record_word_offset + 129716758] )
    return 0;
  iteration_count = 0;
  *(unsigned int *)&g_151A8489C = 1199570944;
  if ( (int)dword_140404A6C[record_word_offset + 129717219] <= 0 )
    return 0;
  record_byte_offset = (int *)&dword_140404A6C[record_word_offset + 129717222];
  do
  {
    if ( dword_140404A6C[record_word_offset + 129716710] != 13 || record_byte_offset[13] > 0 )
    {
      scaled_index = record_word_offset * 4 + 16LL * *(record_byte_offset - 1);
      weighted_sum = *(float *)((char *)&g_15F2DC004 + scaled_index);
      weighted_sum_2 = *(float *)((char *)&g_15F2DC008 + scaled_index);
      weighted_sum_3 = *(float *)((char *)&g_15F2DC000 + scaled_index);
      loaded_word = *record_byte_offset;
      saved_weighted_sum_2 = weighted_sum;
      float_buffer_2[1] = weighted_sum;
      scaled_index_2 = record_word_offset * 4 + 16 * loaded_word;
      saved_weighted_sum = weighted_sum_2;
      float_buffer_2[2] = weighted_sum_2;
      float_buffer_2[0] = weighted_sum_3;
      weighted_sum_4 = *(float *)((char *)&g_15F2DC000 + scaled_index_2);
      weighted_sum_5 = *(float *)((char *)&g_15F2DC004 + scaled_index_2);
      weighted_sum_6 = *(float *)((char *)&g_15F2DC008 + scaled_index_2);
      scaled_index_3 = record_word_offset * 4 + 16LL * record_byte_offset[1];
      float_buffer_3[1] = weighted_sum_5;
      component_delta = weighted_sum_5 - weighted_sum;
      float_buffer_3[2] = weighted_sum_6;
      component_delta_2 = weighted_sum_6 - weighted_sum_2;
      float_buffer_3[0] = weighted_sum_4;
      component_delta_3 = weighted_sum_4 - weighted_sum_3;
      weighted_sum_7 = *(float *)((char *)&g_15F2DC004 + scaled_index_3);
      weighted_sum_8 = *(float *)((char *)&g_15F2DC008 + scaled_index_3);
      weighted_sum_9 = *(float *)((char *)&g_15F2DC000 + scaled_index_3);
      table_value = record_byte_offset[2];
      float_buffer[1] = weighted_sum_7;
      component_delta_4 = weighted_sum_7 - weighted_sum;
      float_buffer[2] = weighted_sum_8;
      component_delta_5 = weighted_sum_8 - weighted_sum_2;
      float_buffer[0] = weighted_sum_9;
      component_delta_6 = weighted_sum_9 - weighted_sum_3;
      scaled_index_4 = record_word_offset * 4 + 16 * table_value;
      weighted_sum_10 = *(float *)((char *)&g_15F2DC000 + scaled_index_4);
      weighted_sum_11 = *(float *)((char *)&g_15F2DC004 + scaled_index_4);
      weighted_sum_12 = *(float *)((char *)&g_15F2DC008 + scaled_index_4);
      product_difference = (float)(component_delta_4 * component_delta_2) - (float)(component_delta_5 * component_delta);
      float_buffer_4[0] = weighted_sum_10;
      float_buffer_4[1] = weighted_sum_11;
      product_difference_2 = (float)(component_delta_5 * component_delta_3) - (float)(component_delta_6 * component_delta_2);
      float_buffer_4[2] = weighted_sum_12;
      product_difference_3 = (float)(component_delta_6 * component_delta) - (float)(component_delta_4 * component_delta_3);
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
      if ( sub_140158760((float *)&float_word_2, (float *)&float_word, &frame_float_at_320, a2, a3, float_buffer_2, float_buffer_3, float_buffer)
        && g_151A8489C > frame_float_at_320 )
      {
        scaled_index_5 = record_word_offset * 4 + 16LL * *(record_byte_offset - 1);
        g_151A84880 = float_word_2;
        *(unsigned int *)&ragdoll_unknown_height = frame_word_at_20;
        g_151A84888 = frame_word_at_24;
        masked_bits = 5210 * input_value + *(int *)((char *)&g_15F2DC00C + scaled_index_5);
        *(_QWORD *)&g_151A8488C = float_word;
        g_151A84894 = scaled_ratio;
        g_151A848B4 = dword_140404A6C[masked_bits + 129716769];
        scaled_index_6 = record_word_offset * 4 + 16LL * *record_byte_offset;
        g_151A8489C = frame_float_at_320;
        g_151A848B0 = iteration_count;
        g_151A848B8 = dword_140404A6C[5210 * input_value
                                                  + 129716769
                                                  + *(int *)((char *)&g_15F2DC00C + scaled_index_6)];
        g_151A848BC = dword_140404A6C[5210 * input_value
                                                  + 129716769
                                                  + (int)dword_140404A6C[4 * record_byte_offset[1] + 129719656 + record_word_offset]];
        sr_collision_triangle_weights((float *)(unsigned int *)&g_151A848C4, (float *)&g_151A84880, float_buffer_2, float_buffer_3, float_buffer);
      }
      if ( *(record_byte_offset - 2) == 4 )
      {
        component_delta_7 = weighted_sum_11 - saved_weighted_sum_2;
        component_delta_8 = weighted_sum_12 - saved_weighted_sum;
        component_delta_9 = weighted_sum_10 - weighted_sum_3;
        product_difference_4 = (float)(component_delta_5 * component_delta_7) - (float)(component_delta_4 * component_delta_8);
        product_difference_5 = (float)(component_delta_6 * component_delta_8) - (float)(component_delta_5 * component_delta_9);
        product_difference_6 = (float)(component_delta_4 * component_delta_9) - (float)(component_delta_6 * component_delta_7);
        square_root_2 = fsqrt((float)((float)(product_difference_5 * product_difference_5) + (float)(product_difference_4 * product_difference_4)) + (float)(product_difference_6 * product_difference_6));
        if ( square_root_2 == 0.0 )
        {
          float_word = 0;
          scaled_ratio = 0.0;
        }
        else
        {
          *(float *)&float_word = product_difference_4 * (float)(1.0 / square_root_2);
          *((float *)&float_word + 1) = product_difference_5 * (float)(1.0 / square_root_2);
          scaled_ratio = product_difference_6 * (float)(1.0 / square_root_2);
        }
        if ( sub_140158760((float *)&float_word_2, (float *)&float_word, &frame_float_at_320, a2, a3, float_buffer_2, float_buffer, float_buffer_4)
          && g_151A8489C > frame_float_at_320 )
        {
          scaled_index_7 = record_word_offset * 4 + 16LL * *(record_byte_offset - 1);
          g_151A84880 = float_word_2;
          *(unsigned int *)&ragdoll_unknown_height = frame_word_at_20;
          g_151A84888 = frame_word_at_24;
          masked_bits_2 = 5210 * input_value + *(int *)((char *)&g_15F2DC00C + scaled_index_7);
          *(_QWORD *)&g_151A8488C = float_word;
          g_151A84894 = scaled_ratio;
          g_151A848B4 = dword_140404A6C[masked_bits_2 + 129716769];
          scaled_index_8 = record_word_offset * 4 + 16LL * record_byte_offset[1];
          g_151A8489C = frame_float_at_320;
          g_151A848B0 = iteration_count;
          g_151A848B8 = dword_140404A6C[5210 * input_value
                                                    + 129716769
                                                    + *(int *)((char *)&g_15F2DC00C + scaled_index_8)];
          g_151A848BC = dword_140404A6C[5210 * input_value
                                                    + 129716769
                                                    + (int)dword_140404A6C[4 * record_byte_offset[2] + 129719656 + record_word_offset]];
          sr_collision_triangle_weights((float *)(unsigned int *)&g_151A848C4, (float *)&g_151A84880, float_buffer_2, float_buffer, float_buffer_4);
        }
      }
    }
    ++iteration_count;
    record_byte_offset += 16;
  }
  while ( iteration_count < (int)dword_140404A6C[record_word_offset + 129717219] );
  return g_151A8489C < 65536.0;
}
#undef float_word
#undef scaled_ratio
#undef float_word_2
#undef frame_word_at_20
#undef frame_word_at_24
#undef float_buffer
#undef float_buffer_2
#undef float_buffer_3
#undef float_buffer_4
#undef frame_float_at_320
#undef saved_weighted_sum
#undef saved_weighted_sum_2

//----- (00000001401563E0) ----------------------------------------------------
__int64            sub_1401563E0(_DWORD *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float product_difference;
  float component_delta;
  float component_delta_2;
  float square_root;

  product_difference = *a4 - *a6;
  component_delta = a4[1] - a6[1];
  component_delta_2 = a4[2] - a6[2];
  square_root = fsqrt((float)((float)(component_delta * component_delta) + (float)(product_difference * product_difference)) + (float)(component_delta_2 * component_delta_2));
  if ( square_root < a5 )
  {
    *a2 = (float)(1.0 / square_root) * product_difference;
    a2[1] = (float)(1.0 / square_root) * component_delta;
    a2[2] = (float)(1.0 / square_root) * component_delta_2;
    *a1 = *(_DWORD *)a4;
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = *((_DWORD *)a4 + 2);
    *a3 = a5 - square_root;
  }
  return 0;
}

