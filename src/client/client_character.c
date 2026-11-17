#include "shared_client.h"

//----- (00000001400E8580) ----------------------------------------------------
// Candidate .cmc character clothing/config loader: formats data/model/%s.cmc.
void            asset_load_character_cmc_candidate(int a1,      char *a2)
{
  int input_value;
  __int64 file_handle;
  __int64 file_handle_2;
  unsigned int *state_address;
  int element_index;
  unsigned int *state_address_2;
  float product_difference;
  int integer_sum;
  __int64 running_total;
  __int64 running_total_2;
  __int64 running_total_3;
  __int64 running_total_4;
  unsigned int *state_address_3;
  __int64 lookup_index;
  int element_index_2;
  float *weighted_sum;
  signed int iteration_count;
  __int64 element_index_3;
  unsigned int saved_masked_bits;
  __int64 masked_bits;
  signed int state_word;
  __int64 masked_bits_2;
  float weighted_sum_2;
  __int64 remaining_count;
  float *buffer_cursor;
  signed int iteration_count_2;
  float scaled_ratio;
  float *buffer_cursor_2;
  float weighted_sum_3;
  int i;
  __int64 remaining_count_2;
  unsigned int *buffer_cursor_3;
  __int64 element_index_4;
  unsigned int scaled_index;
  unsigned int scaled_index_2;
  unsigned int scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  unsigned int scaled_index_6;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float square_root;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_ratio_4;
  __int64 scaled_index_7;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  int state_word_2;
  int iteration_count_3;
  __int64 remaining_count_3;
  unsigned int *state_address_4;
  int table_value;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float *buffer_cursor_4;
  __int64 remaining_count_4;
  float *weighted_sum_16;
  float product_difference_2;
  float product_difference_3;
  float scaled_value;
  float scaled_value_2;
  __int64 loaded_word;
  float scaled_value_3;
  unsigned int *state_address_5;
  unsigned int scaled_index_8;
  signed int state_word_3;
  signed int iteration_count_4;
  unsigned int *state_address_6;
  __int64 running_total_5;
  unsigned int *buffer_cursor_5;
  __int64 table_value_2;
  __int64 table_value_3;
  __int64 table_value_4;
  __int64 lookup_index_2;
  __int64 scaled_index_9;
  unsigned int *record_byte_offset;
  unsigned int *state_address_7;
  unsigned __int64 state_address_8;
  unsigned int table_value_5;
  unsigned int table_value_6;
  int iteration_count_5;
  unsigned int *buffer_cursor_6;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  float *state_address_9;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float product_difference_4;
  float product_difference_5;
  float product_difference_6;
  float square_root_2;
  float scaled_ratio_5;
  float scaled_ratio_6;
  float scaled_ratio_7;
  __int64 remaining_count_5;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 scaled_index_17;
  unsigned int table_value_7;
  unsigned int table_value_8;
  __int64 scaled_index_18;
  float weighted_sum_17;
  __int64 scaled_index_19;
  float weighted_sum_18;
  unsigned int table_value_9;
  unsigned int table_value_10;
  __int64 scaled_index_20;
  float weighted_sum_19;
  __int64 scaled_index_21;
  float weighted_sum_20;
  int table_value_11;
  __int64 scaled_index_22;
  unsigned int *buffer_cursor_7;
  signed int scaled_index_23;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E8580[896];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 0)) /* [rsp+0h] */
#define cached_integer_sum (*(int (*))(void *)(sr_frame_1400E8580 + 32)) /* [rsp+20h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1400E8580 + 36)) /* [rsp+24h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_1400E8580 + 40)) /* [rsp+28h] */
#define saved_file_handle (*(__int64 (*))(void *)(sr_frame_1400E8580 + 48)) /* [rsp+30h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_1400E8580 + 56)) /* [rsp+38h] */
#define saved_running_total_2 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 64)) /* [rsp+40h] */
#define saved_running_total_3 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 72)) /* [rsp+48h] */
#define saved_running_total_4 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 80)) /* [rsp+50h] */
#define scaled_index_24 (*(unsigned __int64 (*))(void *)(sr_frame_1400E8580 + 96)) /* [rsp+60h] */
#define scratch_buffer (*(char (*)[256])(void *)(sr_frame_1400E8580 + 112)) /* [rsp+70h] */
#define scratch_buffer_2 (*(char (*)[512])(void *)(sr_frame_1400E8580 + 368)) /* [rsp+170h] */
#define unused_frame_slot_880 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 880)) /* [rsp+370h] */

  input_value = a1;
  input_value_2 = a1;
  crt_sprintf(scratch_buffer_2, "data/model/%s.cmc", a2);
  file_handle = crt_fopen(scratch_buffer_2, "rb");
  file_handle_2 = file_handle;
  saved_file_handle = file_handle;
  state_address = &g_1699AACCC;
  if ( file_handle )
  {
    (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(scratch_buffer, 1, 4, file_handle);
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&callee_output_word, 4, 1, file_handle_2);
    if ( callee_output_word != 2 )
    {
      crt_fclose(file_handle_2);
      return;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CBACC8,
      4,
      1,
      file_handle_2);
    element_index = 0;
    if ( (int)g_169CBACC8 > 0 )
    {
      state_address_2 = &g_169CBACD4;
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[18 * element_index + 174250136],
          4,
          3,
          file_handle_2);
        product_difference = *((float *)state_address_2 - 2);
        state_address_2 += 18;
        ++element_index;
        *((float *)state_address_2 - 20) = product_difference * 1.125;
        *((float *)state_address_2 - 19) = *((float *)state_address_2 - 19) * 1.125;
        *((float *)state_address_2 - 18) = *((float *)state_address_2 - 18) * 1.125;
      }
      while ( element_index < (int)g_169CBACC8 );
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_1699AACC0,
      4,
      1,
      file_handle_2);
    integer_sum = 0;
    cached_integer_sum = 0;
    if ( (int)g_1699AACC0 > 0 )
    {
      running_total = 0;
      running_total_2 = 0;
      running_total_3 = 0;
      saved_running_total_4 = 0;
      running_total_4 = 0;
      saved_running_total_3 = 0;
      saved_running_total = 0;
      state_address_3 = &g_1699AACCC;
      saved_running_total_2 = 0;
      do
      {
        lookup_index = integer_sum;
        scaled_index_24 = 276LL * integer_sum;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index_24 / 4 + 173447318],
          4,
          3,
          file_handle_2);
        element_index_2 = 0;
        if ( (int)g_169CBACC8 > 0 )
        {
          weighted_sum = (float *)(state_address_3 + 3);
          do
          {
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[46 * lookup_index + 173447321 + 23 * lookup_index + 2 * element_index_2 + element_index_2],
              4,
              3,
              file_handle_2);
            *(weighted_sum - 2) = *(weighted_sum - 2) * 1.125;
            *(weighted_sum - 1) = *(weighted_sum - 1) * 1.125;
            *weighted_sum = *weighted_sum * 1.125;
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[69 * lookup_index + 173447369 + element_index_2++],
              4,
              1,
              file_handle_2);
            weighted_sum += 3;
          }
          while ( element_index_2 < (int)g_169CBACC8 );
          running_total = saved_running_total_4;
          running_total_2 = saved_running_total_3;
          running_total_3 = saved_running_total_2;
          running_total_4 = saved_running_total;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[scaled_index_24 / 4 + 173447385],
          4,
          2,
          file_handle_2);
        iteration_count = 0;
        *(unsigned int *)((char *)&g_169BD2CC4 + running_total) = *(state_address_3 - 2);
        element_index_3 = 0;
        saved_masked_bits = 0;
        *(unsigned int *)((char *)&g_169BD2CC8 + running_total) = *(state_address_3 - 1);
        *(unsigned int *)((char *)&g_169BD2CCC + running_total) = *state_address_3;
        *(unsigned int *)((char *)&g_169BD2D24 + running_total) = state_address_3[65];
        *(unsigned int *)((char *)&g_169BD2D28 + running_total) = state_address_3[66];
        LODWORD(masked_bits) = 0;
        *(unsigned int *)((char *)&g_169BD2CD0 + running_total) = 0;
        state_word = g_169CBACC8;
        if ( (int)g_169CBACC8 > 0 )
        {
          do
          {
            masked_bits = *(int *)((char *)&g_169BD2CD0 + running_total);
            saved_masked_bits = masked_bits;
            if ( (int)masked_bits < 4 && *(float *)&dword_140404A6C[running_total_3 + 173447369 + element_index_3] > 0.0 )
            {
              dword_140404A6C[running_total_2 + 174012570 + masked_bits] = iteration_count;
              masked_bits_2 = running_total + 12LL * *(int *)((char *)&g_169BD2CD0 + running_total);
              *(unsigned int *)((char *)&g_169BD2CE4 + masked_bits_2) = dword_140404A6C[3 * element_index_3
                                                                                           + 173447321
                                                                                           + 3 * running_total_4];
              *(unsigned int *)((char *)&g_169BD2CE8 + masked_bits_2) = dword_140404A6C[3 * element_index_3
                                                                                           + 173447322
                                                                                           + 3 * running_total_4];
              *(unsigned int *)((char *)&g_169BD2CEC + masked_bits_2) = dword_140404A6C[3 * element_index_3
                                                                                           + 173447323
                                                                                           + 3 * running_total_4];
              dword_140404A6C[running_total_2 + 174012586 + (int)(*(unsigned int *)((char *)&g_169BD2CD0 + running_total))++] = dword_140404A6C[running_total_3 + 173447369 + element_index_3];
              LODWORD(masked_bits) = *(unsigned int *)((char *)&g_169BD2CD0 + running_total);
              saved_masked_bits = masked_bits;
              state_word = g_169CBACC8;
            }
            ++iteration_count;
            ++element_index_3;
          }
          while ( iteration_count < state_word );
          file_handle_2 = saved_file_handle;
        }
        weighted_sum_2 = 0.0;
        if ( (int)masked_bits > 0 )
        {
          remaining_count = saved_masked_bits;
          buffer_cursor = (float *)((char *)&g_169BD2D14 + running_total);
          do
          {
            weighted_sum_2 = weighted_sum_2 + *buffer_cursor++;
            --remaining_count;
          }
          while ( remaining_count );
          LODWORD(masked_bits) = saved_masked_bits;
        }
        iteration_count_2 = 0;
        if ( (int)masked_bits > 0 )
        {
          scaled_ratio = 1.0 / weighted_sum_2;
          buffer_cursor_2 = (float *)((char *)&g_169BD2D14 + running_total);
          do
          {
            ++iteration_count_2;
            weighted_sum_3 = scaled_ratio * *buffer_cursor_2++;
            *(buffer_cursor_2 - 1) = weighted_sum_3;
          }
          while ( iteration_count_2 < *(int *)((char *)&g_169BD2CD0 + running_total) );
        }
        running_total_4 += 23;
        integer_sum = cached_integer_sum + 1;
        saved_running_total = running_total_4;
        running_total_3 += 69;
        cached_integer_sum = integer_sum;
        running_total_2 += 26;
        saved_running_total_2 = running_total_3;
        running_total += 104;
        saved_running_total_3 = running_total_2;
        state_address_3 += 69;
        saved_running_total_4 = running_total;
      }
      while ( integer_sum < (int)g_1699AACC0 );
      input_value = input_value_2;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CA2CC4,
      4,
      1,
      file_handle_2);
    for ( i = 0; i < (int)g_169CA2CC4; ++i )
    {
      remaining_count_2 = 3;
      buffer_cursor_3 = &dword_140404A6C[3 * i + 174225559];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(buffer_cursor_3++, 4, 1, file_handle_2);
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    crt_fclose(file_handle_2);
    state_address = &g_1699AACCC;
  }
  element_index_4 = 0;
  g_18329E55C = xmmword_140278D30;
  g_18329E57C = 1065353216;
  g_18329E56C = xmmword_140278D30;
  g_18329E6B4 = 1065353216;
  g_18329E694 = xmmword_140278D30;
  g_18329E7EC = 1065353216;
  g_18329E6A4 = xmmword_140278D30;
  g_18329E924 = 1065353216;
  g_18329E7CC = xmmword_140278D30;
  g_18329EA5C = 1065353216;
  g_18329E7DC = xmmword_140278D30;
  g_18329EB94 = 1065353216;
  g_18329E904 = xmmword_140278D30;
  g_18329ECCC = 1065353216;
  g_18329E914 = xmmword_140278D30;
  g_18329EE04 = 1065353216;
  g_18329EA3C = xmmword_140278D30;
  g_18329EF3C = 1065353216;
  g_18329EA4C = xmmword_140278D30;
  g_18329F074 = 1065353216;
  g_18329EB74 = xmmword_140278D30;
  g_18329F1AC = 1065353216;
  g_18329EB84 = xmmword_140278D30;
  g_18329F2E4 = 1065353216;
  g_18329ECAC = xmmword_140278D30;
  g_18329F41C = 1065353216;
  g_18329ECBC = xmmword_140278D30;
  g_18329F554 = 1065353216;
  g_18329EDE4 = xmmword_140278D30;
  g_18329F68C = 1065353216;
  g_18329EDF4 = xmmword_140278D30;
  g_18329F7C4 = 1065353216;
  g_18329EF1C = xmmword_140278D30;
  g_169CBACD8 = 0;
  g_18329EF2C = xmmword_140278D30;
  g_169CBACDC = -1103101952;
  g_18329F054 = xmmword_140278D30;
  g_18329F064 = xmmword_140278D30;
  g_18329F18C = xmmword_140278D30;
  g_18329F19C = xmmword_140278D30;
  g_18329F2C4 = xmmword_140278D30;
  g_18329F2D4 = xmmword_140278D30;
  g_18329F3FC = xmmword_140278D30;
  g_18329F40C = xmmword_140278D30;
  g_18329F534 = xmmword_140278D30;
  g_18329F544 = xmmword_140278D30;
  g_18329F66C = xmmword_140278D30;
  g_18329F67C = xmmword_140278D30;
  g_18329F7A4 = xmmword_140278D30;
  g_18329F7B4 = xmmword_140278D30;
  g_169CBACE0 = 1031798784;
  do
  {
    scaled_index = dword_140404A6C[78 * element_index_4 + 280651455];
    scaled_index_2 = dword_140404A6C[78 * element_index_4 + 280651456];
    scaled_index_3 = dword_140404A6C[78 * element_index_4 + 280651457];
    scaled_index_4 = 9 * element_index_4;
    scaled_index_5 = (int)dword_140404A6C[25 * element_index_4 + 282486045];
    dword_140404A6C[2 * scaled_index_4 + 174250145] = dword_140404A6C[78 * element_index_4 + 280651452];
    dword_140404A6C[2 * scaled_index_4 + 174250146] = dword_140404A6C[78 * element_index_4 + 280651453];
    dword_140404A6C[2 * scaled_index_4 + 174250147] = dword_140404A6C[78 * element_index_4 + 280651454];
    scaled_index_6 = dword_140404A6C[78 * element_index_4 + 280651458];
    dword_140404A6C[2 * scaled_index_4 + 174250148] = scaled_index;
    dword_140404A6C[2 * scaled_index_4 + 174250149] = scaled_index_2;
    dword_140404A6C[2 * scaled_index_4 + 174250150] = scaled_index_3;
    dword_140404A6C[2 * scaled_index_4 + 174250151] = scaled_index_6;
    dword_140404A6C[2 * scaled_index_4 + 174250152] = dword_140404A6C[78 * element_index_4 + 280651459];
    dword_140404A6C[2 * scaled_index_4 + 174250153] = dword_140404A6C[78 * element_index_4 + 280651460];
    if ( element_index_4 )
    {
      weighted_sum_4 = *(float *)&dword_140404A6C[18 * element_index_4 + 174250136];
      weighted_sum_5 = *(float *)&dword_140404A6C[18 * element_index_4 + 174250137];
      weighted_sum_6 = *(float *)&dword_140404A6C[18 * element_index_4 + 174250138];
      if ( (unsigned __int64)(element_index_4 - 5) <= 1 || (unsigned __int64)(element_index_4 - 8) <= 1 )
      {
        square_root = fsqrt((float)((float)(weighted_sum_5 * weighted_sum_5) + (float)(weighted_sum_4 * weighted_sum_4)) + (float)(weighted_sum_6 * weighted_sum_6));
        if ( square_root == 0.0 )
        {
          scaled_ratio_2 = 0.0;
          scaled_ratio_3 = 0.0;
          scaled_ratio_4 = 0.0;
        }
        else
        {
          scaled_ratio_2 = (float)(1.0 / square_root) * weighted_sum_4;
          scaled_ratio_3 = (float)(1.0 / square_root) * weighted_sum_5;
          scaled_ratio_4 = (float)(1.0 / square_root) * weighted_sum_6;
        }
        weighted_sum_4 = scaled_ratio_2 * 0.328125;
        weighted_sum_5 = scaled_ratio_3 * 0.328125;
        weighted_sum_6 = scaled_ratio_4 * 0.328125;
      }
      scaled_index_7 = 9 * scaled_index_5;
      weighted_sum_7 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250149];
      weighted_sum_8 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250146];
      weighted_sum_9 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250150];
      weighted_sum_10 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250147];
      weighted_sum_11 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250152] * weighted_sum_6;
      weighted_sum_12 = *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250153] * weighted_sum_6;
      *(float *)&dword_140404A6C[18 * element_index_4 + 174250139] = (float)((float)(weighted_sum_6
                                                                       * *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250151])
                                                               + (float)(weighted_sum_4
                                                                       * *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250145]))
                                                       + (float)((float)(weighted_sum_5
                                                                       * *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250148])
                                                               + *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250139]);
      *(float *)&dword_140404A6C[18 * element_index_4 + 174250140] = (float)((float)(weighted_sum_8 * weighted_sum_4) + weighted_sum_11)
                                                       + (float)((float)(weighted_sum_7 * weighted_sum_5)
                                                               + *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250140]);
      *(float *)&dword_140404A6C[18 * element_index_4 + 174250141] = (float)((float)(weighted_sum_10 * weighted_sum_4) + weighted_sum_12)
                                                       + (float)((float)(weighted_sum_9 * weighted_sum_5)
                                                               + *(float *)&dword_140404A6C[2 * scaled_index_7 + 174250141]);
    }
    ++element_index_4;
    dword_140404A6C[2 * scaled_index_4 + 174250142] = dword_140404A6C[2 * scaled_index_4 + 174250139];
    dword_140404A6C[2 * scaled_index_4 + 174250143] = dword_140404A6C[2 * scaled_index_4 + 174250140];
    dword_140404A6C[2 * scaled_index_4 + 174250144] = dword_140404A6C[2 * scaled_index_4 + 174250141];
  }
  while ( element_index_4 < 16 );
  state_word_2 = g_1699AACC0;
  iteration_count_3 = 0;
  remaining_count_3 = g_1699AACC0;
  if ( (int)g_1699AACC0 > 0 )
  {
    state_address_4 = &g_169BD2CCC;
    do
    {
      table_value = state_address_4[1];
      weighted_sum_13 = 0.0;
      weighted_sum_14 = 0.0;
      weighted_sum_15 = 0.0;
      if ( table_value > 0 )
      {
        buffer_cursor_4 = (float *)(state_address_4 + 18);
        remaining_count_4 = (unsigned int)table_value;
        weighted_sum_16 = (float *)(state_address_4 + 8);
        do
        {
          product_difference_2 = *(weighted_sum_16 - 2);
          product_difference_3 = *(weighted_sum_16 - 1);
          scaled_value = *weighted_sum_16;
          scaled_value_2 = *buffer_cursor_4;
          loaded_word = *((int *)buffer_cursor_4 - 16);
          scaled_value_3 = *weighted_sum_16;
          ++buffer_cursor_4;
          weighted_sum_16 += 3;
          weighted_sum_13 = weighted_sum_13
              + (float)((float)((float)((float)(scaled_value_3 * *(float *)&dword_140404A6C[18 * loaded_word + 174250151])
                                      + (float)(product_difference_2 * *(float *)&dword_140404A6C[18 * loaded_word + 174250145]))
                              + (float)((float)(product_difference_3 * *(float *)&dword_140404A6C[18 * loaded_word + 174250148])
                                      + *(float *)&dword_140404A6C[18 * loaded_word + 174250139]))
                      * scaled_value_2);
          weighted_sum_14 = weighted_sum_14
              + (float)((float)((float)((float)(product_difference_2 * *(float *)&dword_140404A6C[18 * loaded_word + 174250146])
                                      + (float)(scaled_value * *(float *)&dword_140404A6C[18 * loaded_word + 174250152]))
                              + (float)((float)(product_difference_3 * *(float *)&dword_140404A6C[18 * loaded_word + 174250149])
                                      + *(float *)&dword_140404A6C[18 * loaded_word + 174250140]))
                      * scaled_value_2);
          weighted_sum_15 = weighted_sum_15
              + (float)((float)((float)((float)(product_difference_2 * *(float *)&dword_140404A6C[18 * loaded_word + 174250147])
                                      + (float)(scaled_value * *(float *)&dword_140404A6C[18 * loaded_word + 174250153]))
                              + (float)((float)(product_difference_3 * *(float *)&dword_140404A6C[18 * loaded_word + 174250150])
                                      + *(float *)&dword_140404A6C[18 * loaded_word + 174250141]))
                      * scaled_value_2);
          --remaining_count_4;
        }
        while ( remaining_count_4 );
      }
      *((float *)state_address_4 - 2) = weighted_sum_13;
      ++iteration_count_3;
      *((float *)state_address_4 - 1) = weighted_sum_14;
      *(float *)state_address_4 = weighted_sum_15;
      state_address_4 += 26;
      state_word_2 = g_1699AACC0;
      remaining_count_3 = g_1699AACC0;
    }
    while ( iteration_count_3 < (int)g_1699AACC0 );
  }
  mesh_vertex_count = state_word_2;
  if ( state_word_2 > 0 )
  {
    state_address_5 = (unsigned int *)&g_16A7DBDB0;
    do
    {
      scaled_index_8 = *(state_address - 2);
      state_address += 69;
      *(state_address_5 - 2) = scaled_index_8;
      state_address_5 += 3;
      *(state_address_5 - 4) = *(state_address - 70);
      *(state_address_5 - 3) = *(state_address - 69);
      --remaining_count_3;
    }
    while ( remaining_count_3 );
  }
  state_word_3 = g_169CA2CC4;
  iteration_count_4 = 0;
  mesh_triangle_count = g_169CA2CC4;
  if ( (int)g_169CA2CC4 > 0 )
  {
    state_address_6 = &g_16AB13DB4;
    running_total_5 = 0;
    buffer_cursor_5 = &g_16ABD3DB0;
    do
    {
      table_value_2 = (int)dword_140404A6C[running_total_5 + 174225559];
      state_address_6 += 6;
      table_value_3 = (int)dword_140404A6C[running_total_5 + 174225560];
      ++iteration_count_4;
      table_value_4 = (int)dword_140404A6C[running_total_5 + 174225561];
      ++buffer_cursor_5;
      dword_140404A6C[running_total_5 + 177495248] = table_value_2;
      dword_140404A6C[running_total_5 + 177495249] = table_value_3;
      dword_140404A6C[running_total_5 + 177495250] = table_value_4;
      running_total_5 += 3;
      *(buffer_cursor_5 - 1) = -2;
      *(state_address_6 - 7) = dword_140404A6C[69 * table_value_2 + 173447385];
      *(state_address_6 - 6) = dword_140404A6C[69 * table_value_2 + 173447386];
      *(state_address_6 - 5) = dword_140404A6C[69 * table_value_3 + 173447385];
      *(state_address_6 - 4) = dword_140404A6C[69 * table_value_3 + 173447386];
      *(state_address_6 - 3) = dword_140404A6C[69 * table_value_4 + 173447385];
      *(state_address_6 - 2) = dword_140404A6C[69 * table_value_4 + 173447386];
    }
    while ( iteration_count_4 < state_word_3 );
  }
  lookup_index_2 = input_value;
  saved_file_handle = input_value;
  sub_1401449C0(dword_140404A6C[input_value + 283827638], 0);
  scaled_index_9 = 196707LL * input_value;
  record_byte_offset = &dword_140404A6C[scaled_index_9 + 161054682];
  state_address_7 = &g_169CBACEC;
  state_address_8 = (unsigned __int64)&g_169CBB16C;
  do
  {
    *(record_byte_offset - 2) = *(state_address_7 - 2);
    *(record_byte_offset - 1) = *(state_address_7 - 1);
    *record_byte_offset = *state_address_7;
    record_byte_offset[1] = *(state_address_7 - 8);
    record_byte_offset[2] = *(state_address_7 - 7);
    record_byte_offset[3] = *(state_address_7 - 6);
    record_byte_offset[4] = state_address_7[16];
    record_byte_offset[5] = state_address_7[17];
    record_byte_offset[6] = state_address_7[18];
    record_byte_offset[7] = state_address_7[10];
    record_byte_offset[8] = state_address_7[11];
    record_byte_offset[9] = state_address_7[12];
    record_byte_offset[10] = state_address_7[34];
    record_byte_offset[11] = state_address_7[35];
    record_byte_offset[12] = state_address_7[36];
    record_byte_offset[13] = state_address_7[28];
    record_byte_offset[14] = state_address_7[29];
    record_byte_offset[15] = state_address_7[30];
    record_byte_offset[16] = state_address_7[52];
    record_byte_offset[17] = state_address_7[53];
    record_byte_offset[18] = state_address_7[54];
    record_byte_offset[19] = state_address_7[46];
    record_byte_offset[20] = state_address_7[47];
    record_byte_offset[21] = state_address_7[48];
    record_byte_offset[22] = state_address_7[70];
    record_byte_offset[23] = state_address_7[71];
    record_byte_offset[24] = state_address_7[72];
    record_byte_offset[25] = state_address_7[64];
    record_byte_offset[26] = state_address_7[65];
    record_byte_offset[27] = state_address_7[66];
    record_byte_offset[28] = state_address_7[88];
    record_byte_offset[29] = state_address_7[89];
    record_byte_offset[30] = state_address_7[90];
    record_byte_offset[31] = state_address_7[82];
    record_byte_offset[32] = state_address_7[83];
    record_byte_offset[33] = state_address_7[84];
    record_byte_offset[34] = state_address_7[106];
    record_byte_offset[35] = state_address_7[107];
    record_byte_offset[36] = state_address_7[108];
    record_byte_offset[37] = state_address_7[100];
    record_byte_offset[38] = state_address_7[101];
    record_byte_offset += 48;
    *(record_byte_offset - 9) = state_address_7[102];
    *(record_byte_offset - 8) = state_address_7[124];
    *(record_byte_offset - 7) = state_address_7[125];
    *(record_byte_offset - 6) = state_address_7[126];
    *(record_byte_offset - 5) = state_address_7[118];
    *(record_byte_offset - 4) = state_address_7[119];
    table_value_5 = state_address_7[120];
    state_address_7 += 144;
    *(record_byte_offset - 3) = table_value_5;
  }
  while ( (__int64)state_address_7 < (__int64)&g_169CBB16C );
  table_value_6 = 0;
  dword_140404A6C[scaled_index_9 + 160858070] = 16;
  iteration_count_5 = 0;
  dword_140404A6C[scaled_index_9 + 160858069] = 0;
  if ( (int)g_169CA2CC4 > 0 )
  {
    buffer_cursor_6 = &g_169CA2CC8;
    scaled_index_10 = 196707LL * input_value;
    do
    {
      scaled_index_11 = 26LL * (int)buffer_cursor_6[2];
      scaled_index_12 = 26LL * (int)buffer_cursor_6[1];
      state_address_9 = (float *)&dword_140404A6C[26 * *buffer_cursor_6 + 174012566];
      combined_products = *(float *)&dword_140404A6C[scaled_index_11 + 174012568] - state_address_9[2];
      combined_products_2 = *(float *)&dword_140404A6C[scaled_index_12 + 174012568] - state_address_9[2];
      combined_products_3 = *(float *)&dword_140404A6C[scaled_index_11 + 174012566] - *state_address_9;
      combined_products_4 = *(float *)&dword_140404A6C[scaled_index_12 + 174012567] - state_address_9[1];
      combined_products_5 = *(float *)&dword_140404A6C[scaled_index_11 + 174012567] - state_address_9[1];
      combined_products_6 = *(float *)&dword_140404A6C[scaled_index_12 + 174012566] - *state_address_9;
      product_difference_4 = (float)(combined_products_5 * combined_products_2) - (float)(combined_products * combined_products_4);
      product_difference_5 = (float)(combined_products * combined_products_6) - (float)(combined_products_3 * combined_products_2);
      product_difference_6 = (float)(combined_products_3 * combined_products_4) - (float)(combined_products_5 * combined_products_6);
      square_root_2 = fsqrt((float)((float)(product_difference_5 * product_difference_5) + (float)(product_difference_4 * product_difference_4)) + (float)(product_difference_6 * product_difference_6));
      if ( square_root_2 == 0.0 )
      {
        scaled_ratio_5 = 0.0;
        scaled_ratio_6 = 0.0;
        scaled_ratio_7 = 0.0;
      }
      else
      {
        scaled_ratio_5 = product_difference_4 * (float)(1.0 / square_root_2);
        scaled_ratio_6 = product_difference_5 * (float)(1.0 / square_root_2);
        scaled_ratio_7 = product_difference_6 * (float)(1.0 / square_root_2);
      }
      remaining_count_5 = 3;
      do
      {
        scaled_index_13 = (int)*buffer_cursor_6;
        if ( (unsigned int)(input_value - 22) <= 1 )
          *(float *)&dword_140404A6C[26 * *buffer_cursor_6 + 174012568] = *(float *)&dword_140404A6C[26 * *buffer_cursor_6 + 174012568]
                                                            - 0.015625;
        scaled_index_14 = 26 * scaled_index_13;
        scaled_index_15 = scaled_index_10 + (int)(table_value_6 * dword_140404A6C[scaled_index_9 + 160858070]);
        dword_140404A6C[scaled_index_15 + 160858071] = dword_140404A6C[26 * scaled_index_13 + 174012566];
        dword_140404A6C[scaled_index_15 + 160858072] = dword_140404A6C[26 * scaled_index_13 + 174012567];
        dword_140404A6C[scaled_index_15 + 160858073] = dword_140404A6C[26 * scaled_index_13 + 174012568];
        scaled_index_16 = scaled_index_10 + (int)(dword_140404A6C[scaled_index_9 + 160858069] * dword_140404A6C[scaled_index_9 + 160858070]);
        dword_140404A6C[scaled_index_16 + 160858074] = dword_140404A6C[26 * scaled_index_13 + 174012590];
        dword_140404A6C[scaled_index_16 + 160858075] = dword_140404A6C[26 * scaled_index_13 + 174012591];
        scaled_index_17 = scaled_index_10 + (int)(dword_140404A6C[scaled_index_9 + 160858069] * dword_140404A6C[scaled_index_9 + 160858070]);
        *(float *)&dword_140404A6C[scaled_index_17 + 160858076] = scaled_ratio_5;
        *(float *)&dword_140404A6C[scaled_index_17 + 160858077] = scaled_ratio_6;
        *(float *)&dword_140404A6C[scaled_index_17 + 160858078] = scaled_ratio_7;
        table_value_7 = dword_140404A6C[scaled_index_9 + 160858069];
        table_value_8 = dword_140404A6C[scaled_index_9 + 160858070];
        scaled_index_18 = scaled_index_10 + (int)(table_value_8 * table_value_7);
        weighted_sum_17 = *(float *)&dword_140404A6C[scaled_index_18 + 160858075];
        if ( weighted_sum_17 >= 0.9375 && weighted_sum_17 < 1.0 )
        {
          dword_140404A6C[scaled_index_18 + 160858074] = 1099169792;
          table_value_8 = dword_140404A6C[scaled_index_9 + 160858070];
          table_value_7 = dword_140404A6C[scaled_index_9 + 160858069];
        }
        scaled_index_19 = scaled_index_10 + (int)(table_value_8 * table_value_7);
        weighted_sum_18 = *(float *)&dword_140404A6C[scaled_index_19 + 160858075];
        if ( weighted_sum_18 >= 0.625 && weighted_sum_18 < 0.6875 )
        {
          dword_140404A6C[scaled_index_19 + 160858074] = 1099694080;
          table_value_8 = dword_140404A6C[scaled_index_9 + 160858070];
          table_value_7 = dword_140404A6C[scaled_index_9 + 160858069];
        }
        table_value_9 = table_value_8;
        table_value_10 = table_value_7;
        scaled_index_20 = (int)(table_value_8 * table_value_7);
        weighted_sum_19 = *(float *)&dword_140404A6C[scaled_index_20 + 160858075 + scaled_index_10];
        if ( weighted_sum_19 >= 0.375 && weighted_sum_19 < 0.4375 && *(float *)&dword_140404A6C[scaled_index_20 + 160858074 + scaled_index_10] < 0.3125 )
        {
          dword_140404A6C[scaled_index_20 + 160858074 + scaled_index_10] = 1099694080;
          table_value_9 = dword_140404A6C[scaled_index_9 + 160858070];
          table_value_10 = dword_140404A6C[scaled_index_9 + 160858069];
        }
        scaled_index_21 = scaled_index_10 + (int)(table_value_9 * table_value_10);
        weighted_sum_20 = *(float *)&dword_140404A6C[scaled_index_21 + 160858075];
        if ( weighted_sum_20 >= 0.5 && weighted_sum_20 < 0.5625 )
        {
          dword_140404A6C[scaled_index_21 + 160858074] = 1100218368;
          table_value_10 = dword_140404A6C[scaled_index_9 + 160858069];
        }
        table_value_11 = dword_140404A6C[scaled_index_14 + 174012569];
        scaled_index_22 = scaled_index_10 + (int)(4 * table_value_10);
        state_address_8 = 0;
        dword_140404A6C[scaled_index_22 + 161021911] = 1065353216;
        dword_140404A6C[scaled_index_10 + 161021912 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 161021913 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 161021914 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 160989143 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 160989144 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 160989145 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        dword_140404A6C[scaled_index_10 + 160989146 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])] = 0;
        if ( table_value_11 > 0 )
        {
          buffer_cursor_7 = &dword_140404A6C[scaled_index_14 + 174012586];
          do
          {
            dword_140404A6C[scaled_index_10 + 160989143 + (int)(state_address_8 + 4 * dword_140404A6C[scaled_index_9 + 160858069])] = *(++buffer_cursor_7 - 17);
            scaled_index_23 = state_address_8 + 4 * dword_140404A6C[scaled_index_9 + 160858069];
            state_address_8 = (unsigned int)(state_address_8 + 1);
            dword_140404A6C[scaled_index_10 + 161021911 + scaled_index_23] = *(buffer_cursor_7 - 1);
          }
          while ( (int)state_address_8 < table_value_11 );
        }
        ++buffer_cursor_6;
        *(_OWORD *)&dword_140404A6C[scaled_index_10
                                  + 160858079
                                  + (int)(dword_140404A6C[scaled_index_9 + 160858069] * dword_140404A6C[scaled_index_9 + 160858070])] = *(_OWORD *)&dword_140404A6C[scaled_index_10 + 160989143 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])];
        *(_OWORD *)&dword_140404A6C[scaled_index_10
                                  + 160858083
                                  + (int)(dword_140404A6C[scaled_index_9 + 160858069] * dword_140404A6C[scaled_index_9 + 160858070])] = *(_OWORD *)&dword_140404A6C[scaled_index_10 + 161021911 + (int)(4 * dword_140404A6C[scaled_index_9 + 160858069])];
        table_value_6 = dword_140404A6C[scaled_index_9 + 160858069] + 1;
        dword_140404A6C[scaled_index_9 + 160858069] = table_value_6;
        --remaining_count_5;
      }
      while ( remaining_count_5 );
      ++iteration_count_5;
    }
    while ( iteration_count_5 < (int)g_169CA2CC4 );
    lookup_index_2 = saved_file_handle;
  }
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[lookup_index_2 + 283791190] + 283793813]);
  glBufferData(34962,
    (int)(4 * dword_140404A6C[scaled_index_9 + 160858069] * dword_140404A6C[scaled_index_9 + 160858070]),
    &dword_140404A6C[scaled_index_9 + 160858071],
    35044);
  glBindBuffer(34962, 0);
  return;
}
#undef unused_frame_slot_0
#undef cached_integer_sum
#undef callee_output_word
#undef input_value_2
#undef saved_file_handle
#undef saved_running_total
#undef saved_running_total_2
#undef saved_running_total_3
#undef saved_running_total_4
#undef scaled_index_24
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_frame_slot_880

//----- (00000001400FBA50) ----------------------------------------------------
__int64 sub_1400FBA50()
{
  __int64 unrecovered_register_value;
  __int64 unused_frame_slot_0;
  __int64 unused_frame_slot_32;
  __int64 unused_frame_slot_192;
  __int64 unused_frame_slot_224;
  __int64 state_word;
  __int64 scaled_index;
  __int64 unused_local;
  unsigned int scaled_index_2;
  unsigned int scaled_index_3;
  __int64 unused_local_2;
  __int64 state_word_2;
  __int64 scaled_index_4;
  __int64 unused_local_3;
  unsigned int scaled_index_5;
  unsigned int scaled_index_6;
  __int64 unused_local_4;
  __int64 unrecovered_register_value_2;
  _Alignas(8) unsigned sr_character_position[3];
  _Alignas(16) unsigned sr_character_rotation[12];
  _Alignas(16) unsigned sr_character_transform[16];
  unsigned sr_character_light[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FBA50[240];
#define unused_frame_slot_0_2 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 0)) /* [rsp+8h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 32)) /* [rsp+28h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 40)) /* [rsp+30h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_1400FBA50 + 192)) /* [rsp+C8h] */
#define unused_frame_slot_224_2 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 224)) /* [rsp+E8h] */

  static const float sr_character_axis[3] = {0.0f,1.0f,0.0f};

  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE404 + 284024944], 0);
  glEnable(2929);
  glDepthFunc(515);
  LOBYTE(unrecovered_register_value) = 1;
  glDepthMask(unrecovered_register_value);
  glClearColor(0.125f,0.125f,0.125f,0.0f);
  glClear(16640);
  sr_camera_begin_perspective(0, 0, 1024, 640, 0.125, 1024.0, 1.0);
  *(_OWORD *)&g_183F7C544 = xmmword_1402796C0;
  *(_OWORD *)&g_183F7C554 = xmmword_140279490;
  *(_OWORD *)&g_183F7C564 = xmmword_140279490;
  sr_camera_set_view((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  glUseProgram(model_program);
  glActiveTexture(33985);
  glEnable(3553);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF170 + 284024944]);
  glActiveTexture(33984);
  (*(int64_t *)(void *)sr_character_position) = 0;
  sr_character_position[2] = 0;
  (*(__int128 *)(void *)sr_character_rotation) = xmmword_140278D30;
  sr_character_rotation[8] = 1065353216;
  (*(__int128 *)(void *)(sr_character_rotation+4)) = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_character_rotation), sr_character_axis, sr_export_float_lane_container(1080177110));
  sr_character_light[0] = 0;
  qmemcpy((sr_character_light+1), "333?333?", 8);
  *(unsigned int *)&g_184178D40 = 1056964608;
  *(unsigned int *)&g_184178D44 = 1056964608;
  *(unsigned int *)&g_184178D48 = 1056964608;
  *(unsigned int *)&g_184178D50 = 1056964608;
  *(unsigned int *)&g_184178D54 = 1056964608;
  *(unsigned int *)&g_184178D58 = 1056964608;
  glUniform3fv(model_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(model_u_objposition, 1, &(*(int64_t *)(void *)sr_character_position));
  glUniformMatrix3fv(model_u_objorientation, 1, 0, &(*(__int128 *)(void *)sr_character_rotation));
  glUniform3fv(model_u_lightdirection, 1, &sr_character_light[0]);
  glUniform3fv(model_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(model_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  state_word = (int)g_183EBF17C;
  float_buffer[3] = 0.0;
  scaled_index = (int)dword_140404A6C[16 * g_151E461E8 + 283827702 + g_151E461EC];
  float_buffer[0] = (float)((float)(int)g_151E461F0 + 0.5) * 0.0625;
  float_buffer[2] = (float)((float)(int)g_151E461FC + 0.5) * 0.0625;
  float_buffer[1] = (float)((float)(int)g_151E461F4 + 0.5) * 0.0625;
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * state_word + 284024944]);
  glActiveTexture(33986);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E63C = 1065353216;
  g_1A724E620 = xmmword_140278E20;
  sr_character_transform[3] = 0;
  g_1A724E610 = xmmword_140278D80;
  *(_QWORD *)&g_1A724E630 = (*(int64_t *)(void *)sr_character_position);
  g_1A724E638 = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[7] = 0;
  sr_character_transform[11] = 0;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E600, (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)(unsigned int *)&g_1A724E600);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[scaled_index + 283790166] + 283793813]);
  unused_written_slot = 0;
  LODWORD(packed_word_bits) = 4 * dword_140404A6C[908 * scaled_index + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(0));
  scaled_index_2 = 4 * dword_140404A6C[908 * scaled_index + 178527462];
  unused_written_slot = 12;
  LODWORD(packed_word_bits) = scaled_index_2;
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(12));
  scaled_index_3 = 4 * dword_140404A6C[908 * scaled_index + 178527462];
  unused_written_slot = 20;
  LODWORD(packed_word_bits) = scaled_index_3;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(20));
  glVertexAttrib4fv(3, float_buffer);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * scaled_index + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glActiveTexture(33984);
  state_word_2 = (int)g_183EBF17C;
  scaled_index_4 = (int)dword_140404A6C[16 * g_151E461E8 + 283827734 + g_151E461F8];
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * state_word_2 + 284024944]);
  glActiveTexture(33986);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E63C = 1065353216;
  g_1A724E620 = xmmword_140278E20;
  sr_character_transform[3] = 0;
  *(_QWORD *)&g_1A724E630 = (*(int64_t *)(void *)sr_character_position);
  g_1A724E610 = xmmword_140278D80;
  sr_character_transform[7] = 0;
  g_1A724E638 = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[11] = 0;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E600, (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)(unsigned int *)&g_1A724E600);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[scaled_index_4 + 283790166] + 283793813]);
  unused_written_slot = 0;
  LODWORD(packed_word_bits) = 4 * dword_140404A6C[908 * scaled_index_4 + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(0));
  scaled_index_5 = 4 * dword_140404A6C[908 * scaled_index_4 + 178527462];
  unused_written_slot = 12;
  LODWORD(packed_word_bits) = scaled_index_5;
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(12));
  scaled_index_6 = 4 * dword_140404A6C[908 * scaled_index_4 + 178527462];
  unused_written_slot = 20;
  LODWORD(packed_word_bits) = scaled_index_6;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits),(const void *)(intptr_t)(20));
  glVertexAttrib4fv(3, float_buffer);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * scaled_index_4 + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glActiveTexture(33984);
  LOBYTE(unrecovered_register_value_2) = 1;
  glDepthMask(unrecovered_register_value_2);
  glDisable(2929);
  glDepthMask(0);
  glDisable(2884);
  glDisable(3042);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[42 * g_183EBE430 + 436582486], 0);
  glUseProgram(hdr_program);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33985);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33984);
  glDrawArrays(4, 0, 3);
  sr_camera_begin_2d();
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0_2
#undef packed_word_bits
#undef unused_written_slot
#undef float_buffer
#undef unused_frame_slot_224_2
