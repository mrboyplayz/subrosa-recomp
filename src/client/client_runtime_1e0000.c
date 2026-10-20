#include "shared_client.h"

//----- (00000001401E0010) ----------------------------------------------------
__int64            sub_1401E0010(__int64 a1, __int64 a2, int a3, signed int a4, int a5, int a6, int a7)
{
  _DWORD scratch_buffer[12];
  int j;
  int i;
  int k;
  int scaled_index;
  int element_index;
  int scaled_index_2;
  int table_value;
  int selection_code;
  char *state_address;
  float *weighted_sum;
  int scaled_index_3;
  int scaled_index_4;
  char *state_address_2;
  _DWORD scratch_buffer_2[48];
  __int64 unused_local;

  if ( a5 == 4 )
  {
    state_address = (char *)&unk_14027CB98 + 8 * a6;
    state_address_2 = byte_14027E2C0;
    table_value = byte_14027BB84[a6];
    selection_code = 34;
  }
  else
  {
    state_address = (char *)&unk_14027BB94;
    state_address_2 = (char *)&unk_14027CC28;
    table_value = 12;
    selection_code = 12;
  }
  weighted_sum = (float *)(a2 + 16LL * a4);
  for ( i = 0; i < a5; ++i )
  {
    element_index = 0;
    scaled_index_2 = state_address[2 * i];
    scaled_index = state_address[2 * i + 1];
    scratch_buffer[10] = a7;
    sub_1401A9C80(weighted_sum, (__int64)&weighted_sum[-a3 - scaled_index], (__int64)scratch_buffer_2, a4, scaled_index - scaled_index_2 + 1);
    for ( j = scaled_index_2; j <= scaled_index; ++j )
      scratch_buffer_2[element_index++ + 24] = scratch_buffer_2[scaled_index - j];
    scaled_index_3 = state_address[2 * i];
    for ( k = 0; k < table_value; ++k )
    {
      scaled_index_4 = state_address_2[k + selection_code * i] - scaled_index_3;
      for ( j = 0; j < 5; ++j )
        *(_DWORD *)(20LL * k + 680LL * i + a1 + 4LL * j) = scratch_buffer_2[j + 24 + scaled_index_4];
    }
    weighted_sum += a4;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401E0340) ----------------------------------------------------
__int64            sub_1401E0340(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  float saved_combined_products;
  float saved_combined_products_2;
  __int64 unused_local;
  int j;
  int i;
  int element_index;
  int k;
  double combined_products;
  int table_value;
  int selection_code;
  __int64 scaled_index;
  char *state_address;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  __int64 running_total;
  char *state_address_2;
  float float_buffer[24];
  __int64 unused_local_2;

  if ( a5 == 4 )
  {
    state_address = (char *)&unk_14027CB98 + 8 * a6;
    state_address_2 = byte_14027E2C0;
    table_value = byte_14027BB84[a6];
    selection_code = 34;
  }
  else
  {
    state_address = (char *)&unk_14027BB94;
    state_address_2 = (char *)&unk_14027CC28;
    table_value = 12;
    selection_code = 12;
  }
  running_total = a2 + 16LL * a4;
  for ( i = 0; i < a5; ++i )
  {
    element_index = 0;
    scaled_index = running_total - 4LL * (state_address[2 * i] + a3);
    combined_products = sub_1401D1050(scaled_index, a4) + 0.001;
    saved_combined_products = combined_products;
    float_buffer[0] = saved_combined_products;
    element_index = 1;
    scaled_index_2 = state_address[2 * i + 1] - state_address[2 * i] + 1;
    for ( j = 1; j < scaled_index_2; ++j )
    {
      combined_products = combined_products
          - *(float *)(scaled_index + 4LL * (a4 - j)) * *(float *)(scaled_index + 4LL * (a4 - j))
          + *(float *)(scaled_index + 4LL * -j) * *(float *)(scaled_index + 4LL * -j);
      saved_combined_products_2 = combined_products;
      float_buffer[element_index++] = saved_combined_products_2;
    }
    scaled_index_3 = state_address[2 * i];
    for ( j = 0; j < table_value; ++j )
    {
      scaled_index_4 = state_address_2[j + selection_code * i] - scaled_index_3;
      for ( k = 0; k < 5; ++k )
        *(float *)(20LL * j + 680LL * i + a1 + 4LL * k) = float_buffer[k + scaled_index_4];
    }
    running_total += 4LL * a4;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401E06F0) ----------------------------------------------------
__int64            sub_1401E06F0(int a1)
{
  int call_result;
  int call_result_2;

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CAAA0(&call_result) )
    return 0;
  call_result = sub_1401E99B0(call_result);
  call_result_2 = sub_14019B2A0(a1);
  return call_result_2 + call_result + (unsigned int)sub_1401E99B0(18144);
}

//----- (00000001401E0760) ----------------------------------------------------
int *           sub_1401E0760(unsigned int a1, int a2, int a3, _DWORD *a4)
{
  int call_result;
  int call_result_2;
  int *call_result_3;

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000)
    && (a2 == 1 || a2 == 2)
    && (a3 == 2048 || a3 == 2049 || a3 == 2051) )
  {
    call_result = sub_1401E06F0(a2);
    call_result_3 = (int *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401E0880(call_result_3, a1, a2, a3);
      if ( a4 )
        *a4 = call_result_2;
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        return nullptr;
      }
      return call_result_3;
    }
    else
    {
      if ( a4 )
        *a4 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a4 )
      *a4 = -1;
    return nullptr;
  }
}

//----- (00000001401E0880) ----------------------------------------------------
__int64            sub_1401E0880(int *a1, int a2, int a3, int a4)
{
  int byte_count;
  int call_result;
  int call_result_2;
  _DWORD *record_pointer;
  __int64 table_value;

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000
    || a3 != 1 && a3 != 2
    || a4 != 2048 && a4 != 2049 && a4 != 2051 )
  {
    return 0xFFFFFFFFLL;
  }
  byte_count = sub_1401E06F0(a3);
  crt_memset((void *)(uintptr_t)(a1), 0, byte_count);
  call_result_2 = sub_1401CAAA0(&call_result);
  if ( call_result_2 )
    return 0xFFFFFFFFLL;
  call_result = sub_1401E99B0(call_result);
  a1[1] = sub_1401E99B0(18144);
  *a1 = call_result + a1[1];
  table_value = (__int64)a1 + a1[1];
  record_pointer = (int *)((char *)a1 + *a1);
  a1[28] = a3;
  a1[3548] = a3;
  a1[36] = a2;
  a1[45] = sub_1401A13B0();
  call_result_2 = sub_1401CAAD0(table_value, a1[45], a1 + 2);
  if ( call_result_2 )
    return 4294967293LL;
  a1[2] = a3;
  a1[3] = a3;
  a1[4] = a1[36];
  a1[5] = 16000;
  a1[6] = 8000;
  a1[7] = 16000;
  a1[8] = 20;
  a1[9] = 25000;
  a1[10] = 0;
  a1[11] = 9;
  a1[12] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[19] = 0;
  if ( (unsigned int)sub_14019F0E0(record_pointer, a2, a3, a1[45]) )
    return 4294967293LL;
  sub_140199190(record_pointer, 10016, nullptr);
  sub_140199190(record_pointer, 4010, (__m128i *)(unsigned int)a1[11]);
  a1[37] = 1;
  a1[38] = 1;
  a1[41] = -1000;
  a1[40] = a3 * a2 + 3000;
  a1[27] = a4;
  a1[31] = -1000;
  a1[32] = -1000;
  a1[33] = 1105;
  a1[30] = -1000;
  a1[34] = -1000;
  a1[35] = -1;
  a1[43] = a1[36] / 100;
  a1[42] = 24;
  a1[39] = 5000;
  a1[29] = a1[36] / 250;
  *((_WORD *)a1 + 7098) = 0x4000;
  a1[3551] = 1065353216;
  a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  a1[3563] = 1;
  a1[3556] = 1001;
  a1[3560] = 1105;
  sub_1401EBEC0(a1 + 47, (unsigned int)a1[36]);
  a1[48] = a1[27];
  return 0;
}

//----- (00000001401E0CC0) ----------------------------------------------------
int                sub_1401E0CC0(int *a1, __int64 a2, int a3, __m128i *a4, int a5)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  int i;
  int call_result;
  int unused_written_slot = -1;
  int *saved_alloca_result;
  __int64 unused_local;

  call_result = sub_1401E52C0(a3, a1[39], a1[36]);
  if ( call_result > 0 )
  {
    int sr_samples = (int)((unsigned)a1[28] * (unsigned)call_result);
    scaled_index = 4LL * sr_samples + 15;
    if ( scaled_index <= (unsigned __int64)(4LL * sr_samples) )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = (int *)alloca_result;
    for ( i = 0; i < sr_samples; ++i )
      *(float *)&saved_alloca_result[i] = 0.000030517578f * (float)*(__int16 *)(a2 + 2LL * i);
    unused_written_slot = sub_1401E5400(
            a1,
            (__int64)saved_alloca_result,
            call_result,
            a4,
            a5,
            16,
            a2,
            a3,
            0,
            -2,
            a1[28],
            (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
            0);
  }
  return unused_written_slot;
}

//----- (00000001401E0E40) ----------------------------------------------------
__int64            sub_1401E0E40(int *a1, __int64 a2, int a3, __m128i *a4, int a5)
{
  int call_result;

  call_result = sub_1401E52C0(a3, a1[39], a1[36]);
  return sub_1401E5400(
           a1,
           a2,
           call_result,
           a4,
           a5,
           24,
           a2,
           a3,
           0,
           -2,
           a1[28],
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1);
}

//----- (00000001401E0F20) ----------------------------------------------------
void            sub_1401E0F20(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E0F40) ----------------------------------------------------
__int64 sub_1401E0F40(int *a1, int a2, ...)
{
  __m128i *unrecovered_register_value;
  __int64 unused_local;
  uint64 *buffer_cursor;
  int remaining_amount;
  int loaded_word;
  int record_word_offset;
  int loaded_word_2;
  int call_result;
  int loaded_word_3;
  int loaded_word_4;
  unsigned int loaded_word_5;
  unsigned int loaded_word_6;
  unsigned int loaded_word_7;
  int loaded_word_8;
  int loaded_word_9;
  int i;
  _DWORD *record_pointer;
  int loaded_word_10;
  unsigned int loaded_word_11;
  unsigned int loaded_word_12;
  int loaded_word_13;
  unsigned int loaded_word_14;
  int loaded_word_15;
  unsigned int loaded_word_16;
  unsigned int loaded_word_17;
  BOOL *saved_comparison_result;
  unsigned int loaded_word_18;
  BOOL comparison_result;
  BOOL comparison_result_2;
  int *running_total;
  __m128i *packed_vector;
  __m128i *packed_vector_2;
  __m128i *packed_vector_3;
  _DWORD *table_value;
  _DWORD *returned_pointer;
  _DWORD *table_value_2;
  _DWORD *table_value_3;
  _DWORD *table_value_4;
  _DWORD *table_value_5;
  _DWORD *table_value_6;
  _DWORD *table_value_7;
  _DWORD *table_value_8;
  _DWORD *table_value_9;
  _DWORD *table_value_10;
  _DWORD *table_value_11;
  _DWORD *table_value_12;
  _DWORD *table_value_13;
  _DWORD *table_value_14;
  _DWORD *table_value_15;
  _DWORD *table_value_16;
  _DWORD *table_value_17;
  int *unused_written_slot;
  __int64 table_value_18;
  char *table_value_19;
  _DWORD scratch_buffer[28];
  __int64 unused_local_2;
  va_list va;

  va_start(va, a2);
  call_result = 0;
  uint64 sr_option_argument;memcpy(&sr_option_argument,va,8);
  buffer_cursor=&sr_option_argument;
  record_pointer = (int *)((char *)a1 + *a1);
  remaining_amount = a2;
  if ( a2 <= 10015 )
  {
    if ( remaining_amount != 10015 )
    {
      remaining_amount -= 4000;
      switch ( remaining_amount )
      {
        case 0:
          loaded_word_2 = *((_DWORD *)++buffer_cursor - 2);
          if ( (loaded_word_2 == 2048 || loaded_word_2 == 2049 || loaded_word_2 == 2051) && (a1[3563] || a1[27] == loaded_word_2) )
          {
            a1[27] = loaded_word_2;
            a1[48] = loaded_word_2;
          }
          else
          {
            call_result = -1;
          }
          goto LABEL_151;
        case 1:
          table_value = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value )
            goto LABEL_152;
          *table_value = a1[27];
          goto LABEL_151;
        case 2:
          record_word_offset = *((_DWORD *)++buffer_cursor - 2);
          if ( record_word_offset == -1000 || record_word_offset == -1 )
            goto LABEL_26;
          if ( record_word_offset <= 0 )
            goto LABEL_152;
          if ( record_word_offset > 500 )
          {
            if ( record_word_offset > 300000 * a1[28] )
              record_word_offset = 300000 * a1[28];
          }
          else
          {
            record_word_offset = 500;
          }
LABEL_26:
          a1[41] = record_word_offset;
          break;
        case 3:
          returned_pointer = (void *)(uintptr_t)*buffer_cursor++;
          if ( !returned_pointer )
            goto LABEL_152;
          *returned_pointer = sub_1401F4B00(a1, a1[3559], 1276);
          goto LABEL_151;
        case 4:
          loaded_word_10 = *((_DWORD *)++buffer_cursor - 2);
          if ( loaded_word_10 < 1101 || loaded_word_10 > 1105 )
            goto LABEL_152;
          a1[33] = loaded_word_10;
          if ( a1[33] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[33] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 5:
          table_value_3 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_3 )
            goto LABEL_152;
          *table_value_3 = a1[33];
          goto LABEL_151;
        case 6:
          loaded_word_7 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_7 >= 2 )
            goto LABEL_152;
          a1[37] = loaded_word_7;
          a1[15] = 1 - loaded_word_7;
          goto LABEL_151;
        case 7:
          table_value_9 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_9 )
            goto LABEL_152;
          *table_value_9 = a1[37];
          goto LABEL_151;
        case 8:
          loaded_word_4 = *((_DWORD *)++buffer_cursor - 2);
          if ( (loaded_word_4 < 1101 || loaded_word_4 > 1105) && loaded_word_4 != -1000 )
            goto LABEL_152;
          a1[32] = loaded_word_4;
          if ( a1[32] == 1101 )
          {
            a1[5] = 8000;
          }
          else if ( a1[32] == 1102 )
          {
            a1[5] = 12000;
          }
          else
          {
            a1[5] = 16000;
          }
          goto LABEL_151;
        case 9:
          table_value_4 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_4 )
            goto LABEL_152;
          *table_value_4 = a1[3560];
          goto LABEL_151;
        case 10:
          loaded_word_5 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_5 > 0xA )
            goto LABEL_152;
          a1[11] = loaded_word_5;
          sub_140199190(record_pointer, 4010, (__m128i *)loaded_word_5);
          goto LABEL_151;
        case 11:
          table_value_6 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_6 )
            goto LABEL_152;
          *table_value_6 = a1[11];
          goto LABEL_151;
        case 12:
          loaded_word_12 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_12 >= 2 )
            goto LABEL_152;
          a1[12] = loaded_word_12;
          goto LABEL_151;
        case 13:
          table_value_7 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_7 )
            goto LABEL_152;
          *table_value_7 = a1[12];
          goto LABEL_151;
        case 14:
          loaded_word_6 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_6 > 0x64 )
            goto LABEL_152;
          a1[10] = loaded_word_6;
          sub_140199190(record_pointer, 4014, (__m128i *)loaded_word_6);
          goto LABEL_151;
        case 15:
          table_value_8 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_8 )
            goto LABEL_152;
          *table_value_8 = a1[10];
          goto LABEL_151;
        case 16:
          loaded_word_11 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_11 >= 2 )
            goto LABEL_152;
          a1[46] = loaded_word_11;
          goto LABEL_151;
        case 17:
          table_value_5 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_5 )
            goto LABEL_152;
          *table_value_5 = a1[46];
          goto LABEL_151;
        case 20:
          loaded_word_14 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_14 >= 2 )
            goto LABEL_152;
          a1[38] = loaded_word_14;
          goto LABEL_151;
        case 21:
          table_value_11 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_11 )
            goto LABEL_152;
          *table_value_11 = a1[38];
          goto LABEL_151;
        case 22:
          loaded_word_3 = *((_DWORD *)++buffer_cursor - 2);
          if ( (loaded_word_3 < 1 || loaded_word_3 > a1[28]) && loaded_word_3 != -1000 )
            goto LABEL_152;
          a1[30] = loaded_word_3;
          goto LABEL_151;
        case 23:
          table_value_2 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_2 )
            goto LABEL_152;
          *table_value_2 = a1[30];
          goto LABEL_151;
        case 24:
          loaded_word_8 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_8 != -1000 && loaded_word_8 != 3001 && loaded_word_8 != 3002 )
            goto LABEL_152;
          a1[31] = loaded_word_8;
          goto LABEL_151;
        case 25:
          table_value_12 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_12 )
            goto LABEL_152;
          *table_value_12 = a1[31];
          goto LABEL_151;
        case 27:
          running_total = (int *)*buffer_cursor++;
          if ( !running_total )
            goto LABEL_152;
          *running_total = a1[36] / 400;
          if ( a1[27] != 2051 )
            *running_total += a1[29];
          goto LABEL_151;
        case 28:
          table_value_18 = (__int64)a1 + a1[1];
          sub_1401EBF00((__int64)(a1 + 47));
          unused_written_slot = a1 + 3548;
          crt_memset((void *)(uintptr_t)((_WORD *)a1 + 7096), 0, 0xF70u);
          sub_140199190(record_pointer, 4028, unrecovered_register_value);
          sub_1401CAAD0(table_value_18, a1[45], scratch_buffer);
          a1[3548] = a1[28];
          *((_WORD *)a1 + 7098) = 0x4000;
          a1[3551] = 1065353216;
          a1[3563] = 1;
          a1[3556] = 1001;
          a1[3560] = 1105;
          a1[3550] = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
          goto LABEL_151;
        case 29:
          table_value_13 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_13 )
            goto LABEL_152;
          *table_value_13 = a1[36];
          goto LABEL_151;
        case 31:
          table_value_14 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_14 )
            goto LABEL_152;
          *table_value_14 = a1[4535];
          goto LABEL_151;
        case 36:
          loaded_word_15 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_15 < 8 || loaded_word_15 > 24 )
            goto LABEL_152;
          a1[42] = loaded_word_15;
          goto LABEL_151;
        case 37:
          table_value_15 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_15 )
            goto LABEL_152;
          *table_value_15 = a1[42];
          goto LABEL_151;
        case 40:
          loaded_word = *(_DWORD *)buffer_cursor;
          if ( loaded_word != 5000
            && loaded_word != 5001
            && loaded_word != 5002
            && loaded_word != 5003
            && loaded_word != 5004
            && loaded_word != 5005
            && loaded_word != 5006
            && loaded_word != 5007
            && loaded_word != 5008
            && loaded_word != 5009 )
          {
            goto LABEL_152;
          }
          a1[39] = loaded_word;
          goto LABEL_151;
        case 41:
          table_value_16 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_16 )
            goto LABEL_152;
          *table_value_16 = a1[39];
          goto LABEL_151;
        case 42:
          loaded_word_16 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_16 >= 2 )
            goto LABEL_152;
          a1[19] = loaded_word_16;
          goto LABEL_151;
        case 43:
          table_value_17 = (void *)(uintptr_t)*buffer_cursor++;
          if ( !table_value_17 )
            goto LABEL_152;
          *table_value_17 = a1[19];
          goto LABEL_151;
        case 46:
          loaded_word_17 = *(_DWORD *)buffer_cursor;
          if ( loaded_word_17 >= 2 )
            goto LABEL_152;
          sub_140199190(record_pointer, 4046, (__m128i *)loaded_word_17);
          goto LABEL_151;
        case 47:
          packed_vector = (__m128i *)*buffer_cursor;
          if ( !packed_vector )
            goto LABEL_152;
          sub_140199190(record_pointer, 4047, packed_vector);
          goto LABEL_151;
        case 49:
          saved_comparison_result = (BOOL *)*buffer_cursor++;
          if ( !saved_comparison_result )
            goto LABEL_152;
          if ( a1[14] && (a1[3557] == 1000 || a1[3557] == 1001) )
          {
            table_value_19 = (char *)a1 + a1[1];
            *saved_comparison_result = 1;
            for ( i = 0; i < a1[3]; ++i )
            {
              comparison_result = *saved_comparison_result && *(int *)&table_value_19[10088 * i + 6104] >= 10;
              *saved_comparison_result = comparison_result;
            }
          }
          else if ( a1[46] )
          {
            comparison_result_2 = a1[4532] >= 10;
            *saved_comparison_result = comparison_result_2;
          }
          else
          {
            *saved_comparison_result = 0;
          }
          goto LABEL_151;
        default:
          goto LABEL_150;
      }
      goto LABEL_151;
    }
    packed_vector_3 = (__m128i *)*buffer_cursor;
    if ( packed_vector_3 )
    {
      call_result = sub_140199190(record_pointer, 10015, packed_vector_3);
      goto LABEL_151;
    }
LABEL_152:
    buffer_cursor = nullptr;
    return (unsigned int)-1;
  }
  switch ( remaining_amount )
  {
    case 10024:
      loaded_word_18 = *(_DWORD *)buffer_cursor;
      a1[44] = loaded_word_18;
      call_result = sub_140199190(record_pointer, 10024, (__m128i *)loaded_word_18);
      break;
    case 10026:
      packed_vector_2 = (__m128i *)*buffer_cursor;
      *((_QWORD *)a1 + 1782) = (uint64)(uintptr_t)(packed_vector_2);
      call_result = sub_140199190(record_pointer, 10026, packed_vector_2);
      break;
    case 11002:
      loaded_word_9 = *(_DWORD *)buffer_cursor;
      if ( (loaded_word_9 < 1000 || loaded_word_9 > 1002) && loaded_word_9 != -1000 )
        goto LABEL_152;
      a1[34] = loaded_word_9;
      break;
    case 11018:
      loaded_word_13 = *(_DWORD *)buffer_cursor;
      if ( loaded_word_13 < -1 || loaded_word_13 > 100 )
        goto LABEL_152;
      a1[35] = loaded_word_13;
      break;
    case 11019:
      table_value_10 = (void *)(uintptr_t)*buffer_cursor++;
      if ( !table_value_10 )
        goto LABEL_152;
      *table_value_10 = a1[35];
      break;
    default:
LABEL_150:
      call_result = -5;
      break;
  }
LABEL_151:
  buffer_cursor = nullptr;
  return (unsigned int)call_result;
}

//----- (00000001401E2280) ----------------------------------------------------
__int64            sub_1401E2280(int a1)
{
  int call_result;
  int call_result_2;

  if ( a1 < 1 || a1 > 2 )
    return 0;
  if ( (unsigned int)sub_1401CCA90(&call_result) )
    return 0;
  call_result = sub_1401E99B0(call_result);
  call_result_2 = sub_14019F150(a1);
  return call_result_2 + call_result + (unsigned int)sub_1401E99B0(88);
}

//----- (00000001401E22F0) ----------------------------------------------------
int *           sub_1401E22F0(int a1, int a2, _DWORD *a3)
{
  int call_result;
  int call_result_2;
  int *call_result_3;

  if ( (a1 == 48000 || a1 == 24000 || a1 == 16000 || a1 == 12000 || a1 == 8000) && (a2 == 1 || a2 == 2) )
  {
    call_result = sub_1401E2280(a2);
    call_result_3 = (int *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401E23F0(call_result_3, a1, a2);
      if ( a3 )
        *a3 = call_result_2;
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        return nullptr;
      }
      return call_result_3;
    }
    else
    {
      if ( a3 )
        *a3 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a3 )
      *a3 = -1;
    return nullptr;
  }
}

//----- (00000001401E23F0) ----------------------------------------------------
__int64            sub_1401E23F0(int *a1, int a2, int a3)
{
  int byte_count;
  int call_result;
  _DWORD *record_pointer;
  __int64 table_value;

  if ( a2 != 48000 && a2 != 24000 && a2 != 16000 && a2 != 12000 && a2 != 8000 || a3 != 1 && a3 != 2 )
    return 0xFFFFFFFFLL;
  byte_count = sub_1401E2280(a3);
  crt_memset((void *)(uintptr_t)(a1), 0, byte_count);
  if ( (unsigned int)sub_1401CCA90(&call_result) )
    return 4294967293LL;
  call_result = sub_1401E99B0(call_result);
  a1[1] = sub_1401E99B0(88);
  *a1 = call_result + a1[1];
  table_value = (__int64)a1 + a1[1];
  record_pointer = (int *)((char *)a1 + *a1);
  a1[2] = a3;
  a1[12] = a3;
  a1[3] = a2;
  a1[6] = a1[3];
  a1[4] = a1[2];
  if ( (unsigned int)sub_1401CCAC0(table_value) )
    return 4294967293LL;
  if ( (unsigned int)sub_14019F190(record_pointer, a2, a3) )
    return 4294967293LL;
  sub_140199AA0(record_pointer, 10016, nullptr);
  a1[15] = 0;
  a1[16] = a2 / 400;
  a1[11] = sub_1401A13B0();
  return 0;
}

//----- (00000001401E25C0) ----------------------------------------------------
__int64            sub_1401E25C0(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  __int16 masked_bits;
  int i;
  int call_result;
  int masked_bits_2;
  int input_value;
  int *saved_alloca_result;
  __int64 unused_local;

  if ( a5 <= 0 )
    return (unsigned int)-1; /* 0x1401E25F2: mov eax, 0xffffffff */
  {
    if ( a2 && a3 > 0 && !a6 )
    {
      call_result = sub_1401E3000((__int64)a1, a2, a3);
      if ( call_result <= 0 )
        return (unsigned int)-4; /* 0x1401E2647: mov eax, 0xfffffffc */
      if ( a5 >= call_result )
        input_value = call_result;
      else
        input_value = a5;
      a5 = input_value;
    }
    record_word_offset = 4LL * a1[2] * a5 + 15;
    if ( record_word_offset <= 4LL * a1[2] * a5 )
      record_word_offset = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    masked_bits_2 = sub_1401E9360(a1, a2, a3, (__int64)&i, a5, a6, 0, nullptr, 1);
    if ( masked_bits_2 > 0 )
    {
      for ( i = 0; i < a1[2] * masked_bits_2; ++i )
      {
        masked_bits = sub_1401AD3E0(*(float *)&saved_alloca_result[i]);
        *(_WORD *)(a4 + 2LL * i) = masked_bits;
      }
    }
  }
  return (unsigned int)masked_bits_2; /* 0x1401E271A: mov eax, dword ptr [rbp + 8] */
}

//----- (00000001401E2740) ----------------------------------------------------
__int64            sub_1401E2740(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  if ( a5 > 0 )
    return sub_1401E9360(a1, a2, a3, a4, a5, a6, 0, nullptr, 0);
  else
    return 0xFFFFFFFFLL;
}

//----- (00000001401E27C0) ----------------------------------------------------
__int64            sub_1401E27C0(int *a1, int a2, int *a3)
{
  int *unrecovered_register_value;
  unsigned int unused_written_slot;
  _DWORD *record_pointer;
  char *table_value;

  unused_written_slot = 0;
  table_value = (char *)a1 + a1[1];
  record_pointer = (int *)((char *)a1 + *a1);
  switch ( a2 )
  {
    case 4009:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[13];
      return unused_written_slot;
    case 4028:
      crt_memset((void *)(uintptr_t)((_WORD *)a1 + 24), 0, 0x28u);
      sub_140199AA0(record_pointer, 4028, unrecovered_register_value);
      sub_1401CCAC0((__int64)table_value);
      a1[12] = a1[2];
      a1[16] = a1[3] / 400;
      return unused_written_slot;
    case 4029:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[3];
      return unused_written_slot;
    case 4031:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[21];
      return unused_written_slot;
    case 4033:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      if ( a1[15] == 1002 )
        return (unsigned int)sub_140199AA0(record_pointer, 4033, a3);
      else
        *a3 = a1[9];
      return unused_written_slot;
    case 4034:
      if ( (int)a3 < -32768 || (int)a3 > 0x7FFF )
        return 0xFFFFFFFFLL;
      a1[10] = (int)a3;
      return unused_written_slot;
    case 4039:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[18];
      return unused_written_slot;
    case 4045:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[10];
      return unused_written_slot;
    case 4046:
      if ( (unsigned int)a3 >= 2 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(record_pointer, 4046, (int *)(unsigned int)a3);
    case 4047:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(record_pointer, 4047, a3);
    default:
      return (unsigned int)-5;
  }
}

//----- (00000001401E2C30) ----------------------------------------------------
void            sub_1401E2C30(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E2C50) ----------------------------------------------------
__int64            sub_1401E2C50(char *a1, int a2, _BYTE *a3, __int64 a4, __int16 *a5, _DWORD *a6)
{
  return sub_1401E99E0(a1, a2, 0, a3, a4, a5, a6, nullptr);
}

//----- (00000001401E2CB0) ----------------------------------------------------
__int64            sub_1401E2CB0(_BYTE *a1)
{
  unsigned int unused_written_slot;

  if ( (*a1 & 0x80) != 0 )
  {
    unused_written_slot = (((int)(unsigned __int8)*a1 >> 5) & 3) + 1102;
    if ( (((int)(unsigned __int8)*a1 >> 5) & 3) == 0 )
      return 1101;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 0x10) != 0 )
      return 1105;
    else
      return 1104;
  }
  else
  {
    return (((int)(unsigned __int8)*a1 >> 5) & 3u) + 1101;
  }
  return unused_written_slot;
}

//----- (00000001401E2D90) ----------------------------------------------------
__int64            sub_1401E2D90(_BYTE *a1, int a2)
{
  int shifted_bits;

  if ( (*a1 & 0x80) != 0 )
  {
    return (unsigned int)((a2 << (((int)(unsigned __int8)*a1 >> 3) & 3)) / 400);
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    if ( (*a1 & 8) != 0 )
      return (unsigned int)(a2 / 50);
    else
      return (unsigned int)(a2 / 100);
  }
  else
  {
    shifted_bits = ((int)(unsigned __int8)*a1 >> 3) & 3;
    if ( shifted_bits == 3 )
      return (unsigned int)(60 * a2 / 1000);
    else
      return (unsigned int)((a2 << shifted_bits) / 100);
  }
}

//----- (00000001401E2EB0) ----------------------------------------------------
__int64            sub_1401E2EB0(_BYTE *a1)
{
  if ( (*a1 & 4) != 0 )
    return 2;
  else
    return 1;
}

//----- (00000001401E2EF0) ----------------------------------------------------
__int64            sub_1401E2EF0(_BYTE *a1, int a2)
{
  if ( a2 < 1 )
    return 0xFFFFFFFFLL;
  if ( (*a1 & 3) == 0 )
    return 1;
  if ( (*a1 & 3) != 3 )
    return 2;
  if ( a2 >= 2 )
    return a1[1] & 0x3F;
  return 4294967292LL;
}

//----- (00000001401E2F80) ----------------------------------------------------
__int64            sub_1401E2F80(_BYTE *a1, int a2, int a3)
{
  int call_result;
  unsigned int call_result_2;

  call_result = sub_1401E2EF0(a1, a2);
  if ( call_result < 0 )
    return (unsigned int)call_result;
  call_result_2 = sub_1401E2D90(a1, a3) * call_result;
  if ( (int)(25 * call_result_2) <= 3 * a3 )
    return call_result_2;
  else
    return 4294967292LL;
}

//----- (00000001401E3000) ----------------------------------------------------
__int64            sub_1401E3000(__int64 a1, _BYTE *a2, int a3)
{
  return sub_1401E2F80(a2, a3, *(_DWORD *)(a1 + 12));
}

//----- (00000001401E3040) ----------------------------------------------------
__int64            sub_1401E3040(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  int i;
  int k;
  int m;
  int n;
  int ii;
  float *weighted_sum;
  float weighted_sum_2;
  float squared_length;
  int cached_m;
  int cached_m_2;
  int j;
  float saved_scaled_value;
  int cached_m_3;
  float product_difference;
  int saved_cached_m;
  float weighted_sum_3;
  int loaded_word;
  int saved_loaded_word;
  BOOL comparison_result;
  float scaled_value_4;
  int scaled_index;
  int integer_difference;
  float scaled_value_5;
  float scaled_ratio;

  if ( a3 >= 1 && a2 >= 1 && a1 && a4 )
  {
    for ( i = 0; i < a3 * a2; ++i )
    {
      if ( *(float *)(a1 + 4LL * i) <= 2.0 )
        weighted_sum_3 = *(float *)(a1 + 4LL * i);
      else
        weighted_sum_3 = 2.0;
      if ( weighted_sum_3 >= -2.0 )
      {
        if ( *(float *)(a1 + 4LL * i) <= 2.0 )
          loaded_word = *(_DWORD *)(a1 + 4LL * i);
        else
          loaded_word = 0x40000000;
        saved_loaded_word = loaded_word;
      }
      else
      {
        saved_loaded_word = -1073741824;
      }
      *(_DWORD *)(a1 + 4LL * i) = saved_loaded_word;
    }
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a3;
      if ( j >= a3 )
        break;
      weighted_sum = (float *)(a1 + 4LL * j);
      weighted_sum_2 = *(float *)(a4 + 4LL * j);
      for ( k = 0; k < a2 && (float)(weighted_sum[a3 * k] * weighted_sum_2) < 0.0; ++k )
        weighted_sum[a3 * k] = weighted_sum[a3 * k] + (float)((float)(weighted_sum_2 * weighted_sum[a3 * k]) * weighted_sum[a3 * k]);
      saved_cached_m = 0;
      scaled_value_5 = *weighted_sum;
      while ( 1 )
      {
        for ( m = saved_cached_m; m < a2 && weighted_sum[a3 * m] <= 1.0 && weighted_sum[a3 * m] >= -1.0; ++m )
          ;
        if ( m == a2 )
          break;
        cached_m_3 = m;
        cached_m = m;
        cached_m_2 = m;
        scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(weighted_sum[a3 * m]), u64);
        saved_scaled_value = scaled_value;
        while ( cached_m_2 > 0 && (float)(weighted_sum[a3 * m] * weighted_sum[a3 * (cached_m_2 - 1)]) >= 0.0 )
          --cached_m_2;
        while ( cached_m < a2 && (float)(weighted_sum[a3 * m] * weighted_sum[a3 * cached_m]) >= 0.0 )
        {
          scaled_value_2 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(weighted_sum[a3 * cached_m]), u64);
          if ( scaled_value_2 > saved_scaled_value )
          {
            scaled_value_3 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(weighted_sum[a3 * cached_m]), u64);
            saved_scaled_value = scaled_value_3;
            cached_m_3 = cached_m;
          }
          ++cached_m;
        }
        comparison_result = !cached_m_2 && (float)(weighted_sum[a3 * m] * *weighted_sum) >= 0.0;
        squared_length = (float)((float)(saved_scaled_value - 1.0) / (float)(saved_scaled_value * saved_scaled_value))
            + (float)((float)((float)(saved_scaled_value - 1.0) / (float)(saved_scaled_value * saved_scaled_value)) * 0.00000023999999);
        if ( weighted_sum[a3 * m] > 0.0 )
          squared_length = -squared_length;
        for ( n = cached_m_2; n < cached_m; ++n )
          weighted_sum[a3 * n] = weighted_sum[a3 * n] + (float)((float)(squared_length * weighted_sum[a3 * n]) * weighted_sum[a3 * n]);
        if ( comparison_result && cached_m_3 >= 2 )
        {
          product_difference = scaled_value_5 - *weighted_sum;
          scaled_ratio = product_difference / (float)cached_m_3;
          for ( ii = saved_cached_m; ii < cached_m_3; ++ii )
          {
            product_difference = product_difference - scaled_ratio;
            weighted_sum[a3 * ii] = weighted_sum[a3 * ii] + product_difference;
            if ( weighted_sum[a3 * ii] <= 1.0 )
              scaled_value_4 = weighted_sum[a3 * ii];
            else
              scaled_value_4 = 1.0;
            if ( scaled_value_4 >= -1.0 )
            {
              if ( weighted_sum[a3 * ii] <= 1.0 )
                scaled_index = LODWORD(weighted_sum[a3 * ii]);
              else
                scaled_index = 1065353216;
              integer_difference = scaled_index;
            }
            else
            {
              integer_difference = -1082130432;
            }
            LODWORD(weighted_sum[a3 * ii]) = integer_difference;
          }
        }
        saved_cached_m = cached_m;
        if ( cached_m == a2 )
          goto LABEL_66;
      }
      squared_length = 0.0;
LABEL_66:
      *(float *)(a4 + 4LL * j) = squared_length;
    }
  }
  return result;
}

//----- (00000001401E37E0) ----------------------------------------------------
__int64 sub_1401E37E0()
{
  return 496;
}

//----- (00000001401E37F0) ----------------------------------------------------
__int64            sub_1401E37F0(__int64 a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}

//----- (00000001401E3810) ----------------------------------------------------
__int64 sub_1401E3810()
{
  int call_result;
  __int64 call_result_2;

  call_result = sub_1401E37E0();
  call_result_2 = sub_1401A6AA0(call_result);
  if ( call_result_2 )
    return sub_1401E37F0(call_result_2);
  else
    return 0;
}

//----- (00000001401E3850) ----------------------------------------------------
void            sub_1401E3850(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401E3870) ----------------------------------------------------
__int64            sub_1401E3870(__int64 a1, char *a2, int a3)
{
  return sub_1401F8310(a1, a2, a3, 0);
}

//----- (00000001401E38B0) ----------------------------------------------------
__int64            sub_1401E38B0(__int64 a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA090(a1, a2, a3, a4, a5, 0, 0);
}

//----- (00000001401E3910) ----------------------------------------------------
// MFC 7-14 64bit
__int64            unknown_libname_998(__int64 a1)
{
  return *(unsigned int *)(a1 + 4);
}

//----- (00000001401E3930) ----------------------------------------------------
__int64            sub_1401E3930(__int64 a1, _BYTE *a2, int a3)
{
  return sub_1401EA090(a1, 0, *(_DWORD *)(a1 + 4), a2, a3, 0, 0);
}

//----- (00000001401E3980) ----------------------------------------------------
__int64            sub_1401E3980(__m128i *a1, int a2, int a3)
{
  __int64 unused_local;
  int call_result;
  _BYTE scratch_buffer[4];
  int unrecovered_register_value;
  __int64 unused_local_2;

  if ( a2 < 1 )
    return (unsigned int)-1; /* 0x1401E39B1: mov eax, 0xffffffff */
  if ( a2 == a3 )
    return 0; /* 0x1401E39CB: xor eax, eax */
  if ( a2 > a3 )
    return (unsigned int)-1; /* 0x1401E39E4: mov eax, 0xffffffff */
  {
    sub_1401E37F0((__int64)scratch_buffer);
    crt_memcpy((__m128i *)((char *)a1 + a3 - a2), a1, a2);
    call_result = sub_1401E3870((__int64)scratch_buffer, &SR_VEC_PTR_LANES(128, a1, i8)[a3 - a2], a2);
    if ( call_result )
      return (unsigned int)call_result; /* 0x1401E3AA2: mov eax, dword ptr [rsp + 0x40] */
    call_result = sub_1401EA090((__int64)scratch_buffer, 0, unrecovered_register_value, a1, a3, 0, 1);
    if ( call_result > 0 )
      return 0; /* 0x1401E3AE7: xor eax, eax */
  }
  return (unsigned int)call_result; /* 0x1401E3AED: mov eax, dword ptr [rsp + 0x40] */
}

//----- (00000001401E3B10) ----------------------------------------------------
__int64            sub_1401E3B10(char *a1, int a2)
{
  __int64 unused_local;
  int call_result;
  _BYTE scratch_buffer[4];
  int unrecovered_register_value;
  __int64 unused_local_2;

  if ( a2 >= 1 )
  {
    sub_1401E37F0((__int64)scratch_buffer);
    call_result = sub_1401E3870((__int64)scratch_buffer, a1, a2);
    if ( call_result >= 0 )
      call_result = sub_1401EA090((__int64)scratch_buffer, 0, unrecovered_register_value, a1, a2, 0, 0);
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3BE0) ----------------------------------------------------
__int64            sub_1401E3BE0(__m128i *a1, int a2, int a3, int a4)
{
  __int64 unused_local;
  _BYTE scratch_buffer[4];
  int i;
  int call_result;
  int callee_output_word;
  int integer_difference;
  char scratch_buffer_2[96];
  __int64 unused_local_2;
  int remaining_amount;

  remaining_amount = a2;
  if ( a2 >= 1 && a2 != a3 && a2 <= a3 )
  {
    integer_difference = a3 - a2;
    for ( i = 0; i < a4 - 1; ++i )
    {
      if ( remaining_amount <= 0 )
        return 0; /* the function has no caller */
      call_result = sub_1401E99E0(SR_VEC_PTR_LANES(128, a1, i8), remaining_amount, 1, scratch_buffer, 0, (__int16 *)scratch_buffer_2, nullptr, &callee_output_word);
      if ( call_result < 0 )
        return 0; /* the function has no caller */
      a1 = (__m128i *)((char *)a1 + callee_output_word);
      remaining_amount -= callee_output_word;
    }
    sub_1401E3980(a1, remaining_amount, integer_difference + remaining_amount);
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3D80) ----------------------------------------------------
__int64            sub_1401E3D80(char *a1, int a2, int a3)
{
  __int64 unused_local;
  int call_result;
  int i;
  char scratch_buffer[4];
  BOOL saved_comparison_result;
  int callee_output_word;
  int running_total;
  BOOL comparison_result;
  _BYTE *running_total_2;
  _BYTE scratch_buffer_2[4];
  int unrecovered_register_value;
  __int16 scratch_buffer_3[48];
  __int64 unused_local_2;
  char *running_total_3;
  int remaining_amount;

  remaining_amount = a2;
  running_total_3 = a1;
  if ( a2 >= 1 )
  {
    running_total_2 = a1;
    running_total = 0;
    for ( i = 0; i < a3; ++i )
    {
      comparison_result = i != a3 - 1;
      saved_comparison_result = comparison_result;
      if ( remaining_amount <= 0 )
        break;
      sub_1401E37F0((__int64)scratch_buffer_2);
      call_result = sub_1401E99E0(running_total_3, remaining_amount, saved_comparison_result, scratch_buffer, 0, scratch_buffer_3, nullptr, &callee_output_word);
      if ( call_result < 0 )
        break;
      call_result = sub_1401F8310((__int64)scratch_buffer_2, running_total_3, callee_output_word, saved_comparison_result);
      if ( call_result < 0 )
        break;
      call_result = sub_1401EA090((__int64)scratch_buffer_2, 0, unrecovered_register_value, running_total_2, remaining_amount, saved_comparison_result, 0);
      if ( call_result < 0 )
        break;
      running_total += call_result;
      running_total_2 += call_result;
      running_total_3 += callee_output_word;
      remaining_amount -= callee_output_word;
    }
  }
  return 0; /* the function has no caller */
}

//----- (00000001401E3F90) ----------------------------------------------------
__int64            sub_1401E3F90(int *a1, int a2, _DWORD *a3)
{
  int *returned_pointer;
  char *returned_pointer_2;
  _WORD *returned_pointer_3;
  int *returned_pointer_4;
  int loaded_word;
  unsigned int call_result;
  int call_result_2;
  int call_result_3;
  int j;
  int m;
  int i;
  int n;
  int k;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  int saved_loaded_word;
  _DWORD *running_total;
  _DWORD *loaded_word_5;
  int callee_output_word;
  int callee_output_word_2;
  unsigned int loaded_word_6;
  int **record_pointer;
  _DWORD *loaded_word_7;
  int *record_pointer_2;
  __int64 loaded_word_8;
  int *unused_written_slot;
  int *record_pointer_3;
  int *record_pointer_4;
  unsigned __int64 byte_count;
  unsigned __int64 byte_count_2;
  int *record_pointer_5;
  _QWORD **record_pointer_6;

  call_result = 0;
  call_result_2 = sub_1401E06F0(2);
  call_result_3 = sub_1401E06F0(1);
  returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  returned_pointer_4 = returned_pointer;
  if ( a2 > 5120 )
  {
    if ( a2 == 11002 )
    {
LABEL_39:
      loaded_word_6 = *a3;
      for ( i = 0; i < a1[1]; ++i )
      {
        record_pointer_4 = returned_pointer_4;
        returned_pointer_4 = (int *)((char *)returned_pointer_4 + (i >= a1[2] ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
        call_result = sub_1401E0F40(record_pointer_4, a2, loaded_word_6);
        if ( call_result )
          break;
      }
    }
    else if ( a2 == 11019 )
    {
LABEL_29:
      loaded_word_8 = *(_QWORD *)a3;
      unused_written_slot = returned_pointer;
      return (unsigned int)sub_1401E0F40(returned_pointer, a2, loaded_word_8);
    }
    else
    {
      return (unsigned int)-5;
    }
    return call_result;
  }
  if ( a2 != 5120 )
  {
    switch ( a2 )
    {
      case 4000:
      case 4004:
      case 4006:
      case 4008:
      case 4010:
      case 4012:
      case 4014:
      case 4016:
      case 4020:
      case 4022:
      case 4024:
      case 4036:
      case 4042:
      case 4046:
        goto LABEL_39;
      case 4001:
      case 4007:
      case 4009:
      case 4011:
      case 4013:
      case 4015:
      case 4017:
      case 4021:
      case 4023:
      case 4025:
      case 4027:
      case 4029:
      case 4037:
      case 4043:
      case 4047:
        goto LABEL_29;
      case 4002:
        loaded_word = *a3;
        if ( *a3 == -1000 || loaded_word == -1 )
          goto LABEL_20;
        if ( loaded_word <= 0 )
          return 0xFFFFFFFFLL;
        if ( 500 * *a1 <= loaded_word )
          loaded_word_3 = *a3;
        else
          loaded_word_3 = 500 * *a1;
        if ( 300000 * *a1 >= loaded_word_3 )
        {
          if ( 500 * *a1 <= loaded_word )
            loaded_word_4 = *a3;
          else
            loaded_word_4 = 500 * *a1;
          saved_loaded_word = loaded_word_4;
        }
        else
        {
          saved_loaded_word = 300000 * *a1;
        }
        loaded_word = saved_loaded_word;
LABEL_20:
        a1[72] = loaded_word;
        break;
      case 4003:
        running_total = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *running_total = 0;
        for ( j = 0; j < a1[1]; ++j )
        {
          record_pointer_2 = returned_pointer_4;
          if ( j >= a1[2] )
            returned_pointer_4 = (int *)((char *)returned_pointer_4 + (int)sub_1401E99B0(call_result_3));
          else
            returned_pointer_4 = (int *)((char *)returned_pointer_4 + (int)sub_1401E99B0(call_result_2));
          sub_1401E0F40(record_pointer_2, a2, &callee_output_word);
          *running_total += callee_output_word;
        }
        return call_result;
      case 4028:
        if ( a1[71] == 1 )
        {
          byte_count = 4LL * *a1;
          returned_pointer_2 = sub_1401F6230(a1);
          crt_memset((void *)(uintptr_t)(returned_pointer_2), 0, byte_count);
          byte_count_2 = 480LL * *a1;
          returned_pointer_3 = (_WORD *)sub_1401F6300((__int64)a1);
          crt_memset((void *)(uintptr_t)(returned_pointer_3), 0, byte_count_2);
        }
        for ( k = 0; k < a1[1]; ++k )
        {
          record_pointer_5 = returned_pointer_4;
          returned_pointer_4 = (int *)((char *)returned_pointer_4 + (k >= a1[2] ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
          call_result = sub_1401E0F40(record_pointer_5, 4028);
          if ( call_result )
            break;
        }
        return call_result;
      case 4031:
        loaded_word_5 = *(_DWORD **)a3;
        if ( !*(_QWORD *)a3 )
          return 0xFFFFFFFFLL;
        *loaded_word_5 = 0;
        for ( m = 0; m < a1[1]; ++m )
        {
          record_pointer_3 = returned_pointer_4;
          returned_pointer_4 = (int *)((char *)returned_pointer_4 + (m >= a1[2] ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
          call_result = sub_1401E0F40(record_pointer_3, a2, &callee_output_word_2);
          if ( call_result )
            break;
          *loaded_word_5 ^= callee_output_word_2;
        }
        return call_result;
      case 4040:
        a1[70] = *a3;
        return call_result;
      case 4041:
        loaded_word_7 = *(_DWORD **)a3;
        if ( !loaded_word_7 )
          return 0xFFFFFFFFLL;
        *loaded_word_7 = a1[70];
        return call_result;
      default:
        return (unsigned int)-5;
    }
    return call_result;
  }
  record_pointer_6 = (_QWORD **)(a3 + 2);
  loaded_word_2 = *((_DWORD *)record_pointer_6 - 2);
  if ( loaded_word_2 >= 0 && loaded_word_2 < a1[1] )
  {
    record_pointer = (int **)*record_pointer_6;
    if ( record_pointer )
    {
      for ( n = 0; n < loaded_word_2; ++n )
      {
        if ( n >= a1[2] )
          returned_pointer_4 = (int *)((char *)returned_pointer_4 + (int)sub_1401E99B0(call_result_3));
        else
          returned_pointer_4 = (int *)((char *)returned_pointer_4 + (int)sub_1401E99B0(call_result_2));
      }
      *record_pointer = returned_pointer_4;
      return call_result;
    }
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E47A0) ----------------------------------------------------
__int64            sub_1401E47A0(__int64 a1, int a2, int **a3)
{
  int *unrecovered_register_value;
  int *loaded_record_pointer;
  unsigned int call_result;
  int m;
  int j;
  int i;
  int k;
  int call_result_2;
  int call_result_3;
  int loaded_word;
  int *loaded_word_2;
  int callee_output_word;
  unsigned int loaded_word_3;
  _QWORD *loaded_word_4;
  int *loaded_word_5;
  int *unused_written_slot;
  int *saved_loaded_record_pointer;
  int *saved_loaded_record_pointer_2;
  int *saved_loaded_record_pointer_3;
  int **record_pointer;

  call_result = 0;
  call_result_2 = sub_1401E2280(2);
  call_result_3 = sub_1401E2280(1);
  loaded_record_pointer = (int *)((int)sub_1401E99B0(268) + a1);
  if ( a2 > 4039 )
  {
    if ( a2 != 4045 )
    {
      if ( a2 == 4046 )
        goto LABEL_43;
      if ( a2 != 4047 )
      {
        if ( a2 != 5122 )
          return (unsigned int)-5;
        record_pointer = a3 + 1;
        loaded_word = *((_DWORD *)record_pointer - 2);
        if ( loaded_word >= 0 && loaded_word < *(_DWORD *)(a1 + 4) )
        {
          loaded_word_4 = *record_pointer;
          if ( loaded_word_4 )
          {
            for ( i = 0; i < loaded_word; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 8) )
                loaded_record_pointer = (int *)((char *)loaded_record_pointer + (int)sub_1401E99B0(call_result_3));
              else
                loaded_record_pointer = (int *)((char *)loaded_record_pointer + (int)sub_1401E99B0(call_result_2));
            }
            *loaded_word_4 = (uint64)(uintptr_t)(loaded_record_pointer);
            return call_result;
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
LABEL_14:
    loaded_word_5 = *a3;
    unused_written_slot = loaded_record_pointer;
    return (unsigned int)sub_1401E27C0(loaded_record_pointer, a2, loaded_word_5);
  }
  switch ( a2 )
  {
    case 4039:
    case 4009:
      goto LABEL_14;
    case 4028:
      for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j )
      {
        saved_loaded_record_pointer_2 = loaded_record_pointer;
        loaded_record_pointer = (int *)((char *)loaded_record_pointer + (j >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
        call_result = sub_1401E27C0(saved_loaded_record_pointer_2, 4028, unrecovered_register_value);
        if ( call_result )
          break;
      }
      return call_result;
    case 4029:
      goto LABEL_14;
  }
  if ( a2 != 4031 )
  {
    if ( a2 != 4034 )
      return (unsigned int)-5;
LABEL_43:
    loaded_word_3 = *(_DWORD *)a3;
    for ( k = 0; k < *(_DWORD *)(a1 + 4); ++k )
    {
      saved_loaded_record_pointer_3 = loaded_record_pointer;
      loaded_record_pointer = (int *)((char *)loaded_record_pointer + (k >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
      call_result = sub_1401E27C0(saved_loaded_record_pointer_3, a2, (int *)loaded_word_3);
      if ( call_result )
        break;
    }
    return call_result;
  }
  loaded_word_2 = *a3;
  if ( *a3 )
  {
    *loaded_word_2 = 0;
    for ( m = 0; m < *(_DWORD *)(a1 + 4); ++m )
    {
      saved_loaded_record_pointer = loaded_record_pointer;
      loaded_record_pointer = (int *)((char *)loaded_record_pointer + (m >= *(_DWORD *)(a1 + 8) ? (int)sub_1401E99B0(call_result_3) : sub_1401E99B0(call_result_2)));
      call_result = sub_1401E27C0(saved_loaded_record_pointer, a2, &callee_output_word);
      if ( call_result )
        break;
      *loaded_word_2 ^= callee_output_word;
    }
    return call_result;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4C60) ----------------------------------------------------
__int64            sub_1401E4C60(_DWORD *a1)
{
  int i;
  int table_value;

  table_value = a1[2] + a1[1];
  if ( table_value > 255 )
    return 0;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) >= table_value && *((unsigned __int8 *)a1 + i + 12) != 255 )
      return 0;
  }
  return 1;
}

//----- (00000001401E4CF0) ----------------------------------------------------
__int64            sub_1401E4CF0(int *a1, int a2, int a3)
{
  int i;
  int integer_sum;

  if ( a3 >= 0 )
    integer_sum = a3 + 1;
  else
    integer_sum = 0;
  for ( i = integer_sum; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == 2 * a2 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4D70) ----------------------------------------------------
__int64            sub_1401E4D70(int *a1, int a2, int a3)
{
  int i;
  int integer_sum;

  if ( a3 >= 0 )
    integer_sum = a3 + 1;
  else
    integer_sum = 0;
  for ( i = integer_sum; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == 2 * a2 + 1 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4DF0) ----------------------------------------------------
__int64            sub_1401E4DF0(int *a1, int a2, int a3)
{
  int i;
  int integer_sum;

  if ( a3 >= 0 )
    integer_sum = a3 + 1;
  else
    integer_sum = 0;
  for ( i = integer_sum; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == a1[2] + a2 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E4E80) ----------------------------------------------------
__int64            sub_1401E4E80(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, signed int a7)
{
  __int64 result;
  int i;
  int m;
  int k;
  signed int j;

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a2 + 4LL * i) = *(float *)(a1 + 4LL * (a5 + a7 * (a4 + i))) * 32768.0;
  }
  if ( a6 <= -1 )
  {
    if ( a6 == -2 )
    {
      for ( j = 1; ; ++j )
      {
        result = (unsigned int)a7;
        if ( j >= a7 )
          break;
        for ( k = 0; k < a3; ++k )
          *(float *)(a2 + 4LL * k) = *(float *)(a2 + 4LL * k)
                                   + (float)(*(float *)(a1 + 4LL * (j + a7 * (a4 + k))) * 32768.0);
      }
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a3;
      if ( m >= a3 )
        break;
      *(float *)(a2 + 4LL * m) = *(float *)(a2 + 4LL * m)
                               + (float)(*(float *)(a1 + 4LL * (a6 + a7 * (a4 + m))) * 32768.0);
    }
  }
  return result;
}

//----- (00000001401E5010) ----------------------------------------------------
__int64            sub_1401E5010(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, signed int a7)
{
  __int64 result;
  int i;
  int m;
  int k;
  signed int j;

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a2 + 4LL * i) = (float)*(__int16 *)(a1 + 2LL * (a5 + a7 * (a4 + i)));
  }
  if ( a6 <= -1 )
  {
    if ( a6 == -2 )
    {
      for ( j = 1; ; ++j )
      {
        result = (unsigned int)a7;
        if ( j >= a7 )
          break;
        for ( k = 0; k < a3; ++k )
          *(float *)(a2 + 4LL * k) = *(float *)(a2 + 4LL * k) + (float)*(__int16 *)(a1 + 2LL * (j + a7 * (a4 + k)));
      }
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a3;
      if ( m >= a3 )
        break;
      *(float *)(a2 + 4LL * m) = *(float *)(a2 + 4LL * m) + (float)*(__int16 *)(a1 + 2LL * (a6 + a7 * (a4 + m)));
    }
  }
  return result;
}

//----- (00000001401E5190) ----------------------------------------------------
_BOOL8            sub_1401E5190(__int64 a1, int a2, int a3, char a4)
{
  return (float)(1.0 / (float)(1 << a4)) >= sub_1401A6D80(a1, a3 * a2);
}

//----- (00000001401E5230) ----------------------------------------------------
__int64            sub_1401E5230(int a1, unsigned __int8 *a2)
{
  if ( a1 >= 252 )
  {
    *a2 = (a1 & 3) - 4;
    a2[1] = (a1 - *a2) >> 2;
    return 2;
  }
  else
  {
    *a2 = a1;
    return 1;
  }
}

//----- (00000001401E52C0) ----------------------------------------------------
__int64            sub_1401E52C0(int a1, int a2, int a3)
{
  int shifted_bits;

  if ( a1 < a3 / 400 )
    return 0xFFFFFFFFLL;
  if ( a2 == 5000 )
  {
    shifted_bits = a1;
  }
  else
  {
    if ( a2 < 5001 || a2 > 5009 )
      return 0xFFFFFFFFLL;
    if ( a2 > 5005 )
      shifted_bits = a3 * (a2 - 5003) / 50;
    else
      shifted_bits = (a3 / 400) << (a2 + 119);
  }
  if ( shifted_bits > a1 )
    return 0xFFFFFFFFLL;
  if ( 400 * shifted_bits == a3
    || 200 * shifted_bits == a3
    || 100 * shifted_bits == a3
    || 50 * shifted_bits == a3
    || 25 * shifted_bits == a3
    || 50 * shifted_bits == 3 * a3
    || 50 * shifted_bits == 4 * a3
    || 50 * shifted_bits == 5 * a3
    || 50 * shifted_bits == 6 * a3 )
  {
    return (unsigned int)shifted_bits;
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401E5400) ----------------------------------------------------
int                sub_1401E5400(
        int *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void (           *a12)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a13)
{
  float call_result;
  int scaled_index;
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int scaled_index_2;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_2;
  float exp_result;
  int integer_quotient;
  __int16 masked_bits;
  __int16 masked_bits_2;
  unsigned __int64 integer_quotient_2;
  void *alloca_result_3;
  unsigned __int64 byte_count;
       __m128i *source_buffer;
  unsigned __int64 byte_count_2;
  unsigned __int64 byte_count_3;
       __m128i *source_buffer_2;
  int call_result_2;
  int call_result_3;
  int call_result_4;
  __m128i *unrecovered_register_value;
  __m128i *unrecovered_register_value_2;
  int call_result_5;
  __int32 call_result_6;
  __m128i unrecovered_register_value_3;
  int integer_quotient_3;
  int cached_table_value;
  BOOL condition_flag;
  _DWORD *record_pointer;
  int shifted_bits;
  int call_result_7;
  int table_value;
  int running_total;
  int table_value_2;
  int remaining_count;
       __m128i *source_buffer_3;
  BOOL saved_comparison_result;
  __int16 selection_code;
  int callee_output_word;
  int shifted_bits_2;
  int i;
  __m128i packed_vector;
  int record_word_offset_3;
  int shifted_bits_3;
  float weighted_sum;
  int remaining_amount;
  int record_word_offset_4;
  int scaled_index_3;
  int cached_table_value_2;
  unsigned int selection_code_2;
  int cached_unrecovered_register_value;
  float saved_component_delta;
  int selection_code_3;
  int integer_quotient_4;
  int selection_code_4;
  float component_delta;
  __m128i packed_vector_2;
  float call_result_8;
  int scaled_index_4;
  float component_sum;
  float scaled_ratio;
  int integer_quotient_5;
  int integer_difference;
  float scaled_value;
  float weighted_sum_2;
  __int32 shifted_bits_4;
  int integer_quotient_6;
  int selection_flag;
  int saved_comparison_result_2;
  int table_value_3;
  float weighted_sum_3;
  int table_value_4;
  int integer_quotient_7;
  __int32 table_value_5;
  int table_value_6;
  BOOL comparison_result;
  int selection_code_5;
  __int32 selection_code_6;
  __int32 table_value_7;
  int integer_quotient_8;
  int saved_shifted_bits;
  int selection_code_7;
  BOOL table_value_8;
  int scaled_index_5;
  int selection_code_8;
  int selection_code_9;
  BOOL comparison_result_2;
  int scaled_index_6;
  int table_value_9;
  __int32 table_value_10;
  int table_value_11;
  int integer_difference_2;
  int integer_quotient_9;
  unsigned int shifted_bits_5;
  BOOL comparison_result_3;
  BOOL comparison_result_4;
  float weighted_sum_4;
  int float_word;
  float component_delta_2;
  int integer_quotient_10;
  __int32 scaled_index_7;
  int table_value_12;
  int table_value_13;
  BOOL comparison_result_5;
  int integer_quotient_11;
  BOOL comparison_result_6;
  BOOL table_value_14;
  BOOL table_value_15;
  float selected_scalar;
  BOOL comparison_result_7;
  __int32 table_value_16;
  __int32 table_value_17;
  __int32 table_value_18;
  __int32 cached_table_value_3;
  unsigned int selection_code_10;
  int integer_quotient_12;
  __int32 input_value;
       __m128i *table_value_19;
       __m128i *saved_alloca_result;
  __m128i packed_vector_3;
  __int32 unused_written_slot;
  int shifted_bits_6;
  int integer_difference_3;
  int integer_difference_4;
  int call_result_9;
  int integer_difference_5;
  int selection_flag_2;
  int callee_output_word_2;
  __int32 integer_difference_6;
  __int32 integer_difference_7;
  int call_result_10;
  int masked_bits_3;
  char scratch_buffer[4];
  char scratch_buffer_2[4];
  float weighted_sum_5;
  int record_word_offset_5;
  int record_word_offset_6;
  int record_word_offset_7;
  _DWORD *state_address;
  __m128i *destination_buffer;
  _DWORD *state_address_2;
  unsigned __int8 *scratch_buffer_3[4];
  int unrecovered_register_value_4;
  __int64 scaled_index_8;
  int *state_address_3;
  __int64 integer_quotient_13;
  __int64 unused_written_slot_2;
  int *unused_written_slot_3;
  __m128i *destination_buffer_2;
  int *unused_written_slot_4;
  char *state_address_4;
  __m128i *destination_buffer_3;
  __m128i packed_vector_4;
  __int32 unrecovered_register_value_5;
  __int32 unrecovered_register_value_6;
  __int32 unrecovered_register_value_7;
  int unrecovered_register_value_8;
  float comparison_operand;
  _DWORD scratch_buffer_4[36];
  __int64 unused_local;
  __int8 *state_address_5;
  __m128i *packed_vector_5;
  unsigned int cached_table_value_4;

  SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = 0;
  selection_code_4 = 0;
  selection_code_10 = 0;
  condition_flag = 0;
  SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = 0;
  saved_comparison_result = 0;
  selection_flag = 0;
  SR_VEC_LANES(128, packed_vector, i32)[0] = 0;
  integer_difference = -1;
  integer_difference_2 = -1;
  SR_VEC_LANES(128, packed_vector, i32)[3] = 0;
  if ( a5 <= 1276 )
    input_value = a5;
  else
    input_value = 1276;
  SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] = input_value;
  a1[4535] = 0;
  if ( a3 <= 0 || SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] <= 0 )
    return -1;
  if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] == 1 && a1[36] == (int)(10u * (unsigned)a3) )
    return -2;
  table_value_19 = (     __m128i *)((char *)a1 + a1[1]);
  record_pointer = (int *)((char *)a1 + *a1);
  if ( a1[27] == 2051 )
    table_value_4 = 0;
  else
    table_value_4 = a1[29];
  if ( a6 >= a1[42] )
    table_value_3 = a1[42];
  else
    table_value_3 = a6;
  cached_table_value_4 = table_value_3;
  sub_140199190(record_pointer, 10015, &packed_vector_2);
  SR_VEC_LANES(128, packed_vector_4, i32)[0] = 0;
  if ( a1[11] < 7 || a1[36] < 16000 )
  {
    if ( a1[1912] )
      sub_1401EBF00((__int64)(a1 + 47));
  }
  else
  {
    SR_VEC_LANES(128, packed_vector, i32)[3] = sub_1401E5190(a2, a3, a1[28], cached_table_value_4);
    integer_difference = a1[1909];
    integer_difference_2 = a1[1910];
    sub_1401ECBA0(a1 + 47, SR_VEC_LANES(128, packed_vector_2, i64)[0], a7, a8, a3, a9, a10, a11, a1[36], cached_table_value_4, a12, (__int64)&packed_vector_4);
    if ( !SR_VEC_LANES(128, packed_vector, i32)[3] && comparison_operand > 0.1 )
    {
      weighted_sum_5 = 0.99900001 * *((float *)a1 + 4533);
      call_result = sub_1401F5870(a2, a3, a1[28]);
      if ( weighted_sum_5 <= call_result )
        weighted_sum_3 = sub_1401F5870(a2, a3, a1[28]);
      else
        weighted_sum_3 = 0.99900001 * *((float *)a1 + 4533);
      *((float *)a1 + 4533) = weighted_sum_3;
    }
  }
  if ( !SR_VEC_LANES(128, packed_vector, i32)[3] )
    a1[35] = -1;
  a1[4531] = 0;
  if ( SR_VEC_LANES(128, packed_vector_4, i32)[0] )
  {
    if ( a1[31] == -1000 )
    {
      if ( a1[3557] )
      {
        if ( a1[3557] == 1002 )
          SR_VEC_LANES(128, packed_vector_2, i32)[2] = unrecovered_register_value_7;
        else
          SR_VEC_LANES(128, packed_vector_2, i32)[2] = unrecovered_register_value_6;
      }
      else
      {
        SR_VEC_LANES(128, packed_vector_2, i32)[2] = unrecovered_register_value_5;
      }
      a1[35] = (int)floor((float)(100.0 * (float)(1.0 - *(float *)&SR_VEC_LANES(128, packed_vector_2, i32)[2])) + 0.5);
    }
    cached_unrecovered_register_value = unrecovered_register_value_8;
    if ( unrecovered_register_value_8 > 12 )
    {
      if ( cached_unrecovered_register_value > 14 )
      {
        if ( cached_unrecovered_register_value > 16 )
        {
          if ( cached_unrecovered_register_value > 18 )
            a1[4531] = 1105;
          else
            a1[4531] = 1104;
        }
        else
        {
          a1[4531] = 1103;
        }
      }
      else
      {
        a1[4531] = 1102;
      }
    }
    else
    {
      a1[4531] = 1101;
    }
  }
  if ( a1[28] != 2 || a1[30] == 1 )
    weighted_sum = 0.0;
  else
    weighted_sum = sub_1401F4BB0(a2, a3, a1[36], (float *)a1 + 3566);
  cached_table_value = table_value_4;
  a1[40] = sub_1401F4B00(a1, a3, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1]);
  integer_quotient_3 = a1[36] / a3;
  if ( !a1[37] )
  {
    record_word_offset_3 = 12 * a1[36] / a3;
    record_word_offset_5 = 12 * a1[40] / 8;
    if ( (record_word_offset_3 / 2 + record_word_offset_5) / record_word_offset_3 >= SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] )
    {
      integer_quotient_7 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1];
    }
    else
    {
      record_word_offset_7 = 12 * a1[40] / 8;
      integer_quotient_7 = (record_word_offset_3 / 2 + record_word_offset_7) / record_word_offset_3;
    }
    SR_VEC_LANES(128, packed_vector_2, i32)[3] = integer_quotient_7;
    a1[40] = 8 * record_word_offset_3 * integer_quotient_7 / 12;
    if ( SR_VEC_LANES(128, packed_vector_2, i32)[3] >= 1 )
      table_value_5 = SR_VEC_LANES(128, packed_vector_2, i32)[3];
    else
      table_value_5 = 1;
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] = table_value_5;
  }
  if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] < 3 || a1[40] < 24 * integer_quotient_3 || integer_quotient_3 < 50 && (integer_quotient_3 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] < 300 || a1[40] < 2400) )
  {
    table_value_2 = a1[3556];
    if ( a1[3560] )
      table_value_6 = a1[3560];
    else
      table_value_6 = 1101;
    callee_output_word = table_value_6;
    SR_VEC_LANES(128, packed_vector, i32)[1] = 0;
    integer_quotient_8 = 0;
    if ( !table_value_2 )
      table_value_2 = 1000;
    if ( integer_quotient_3 > 100 )
      table_value_2 = 1002;
    if ( integer_quotient_3 == 25 && table_value_2 != 1000 )
    {
      integer_quotient_3 = 50;
      SR_VEC_LANES(128, packed_vector, i32)[1] = 1;
    }
    if ( integer_quotient_3 <= 16 )
    {
      if ( a5 == 1 || table_value_2 == 1000 && integer_quotient_3 != 10 )
      {
        table_value_2 = 1000;
        comparison_result = integer_quotient_3 <= 12;
        SR_VEC_LANES(128, packed_vector, i32)[1] = comparison_result;
        if ( integer_quotient_3 == 12 )
          selection_code_5 = 25;
        else
          selection_code_5 = 16;
        integer_quotient_3 = selection_code_5;
      }
      else
      {
        integer_quotient_8 = 50 / integer_quotient_3;
        integer_quotient_3 = 50;
        SR_VEC_LANES(128, packed_vector, i32)[1] = 3;
      }
    }
    if ( table_value_2 == 1000 && callee_output_word > 1103 )
    {
      callee_output_word = 1103;
    }
    else if ( table_value_2 == 1002 && callee_output_word == 1102 )
    {
      callee_output_word = 1101;
    }
    else if ( table_value_2 == 1001 && callee_output_word <= 1104 )
    {
      callee_output_word = 1104;
    }
    SR_VEC_PTR_LANES(128, a4, i8)[0] = sub_1401F3E60(table_value_2, integer_quotient_3, callee_output_word, a1[3548]);
    SR_VEC_PTR_LANES(128, a4, i8)[0] |= SR_VEC_LANES(128, packed_vector, u8)[4];
    if ( SR_VEC_LANES(128, packed_vector, i32)[1] > 1 )
      selection_code_6 = 2;
    else
      selection_code_6 = 1;
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = selection_code_6;
    if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] <= selection_code_6 )
      table_value_7 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
    else
      table_value_7 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1];
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] = table_value_7;
    if ( SR_VEC_LANES(128, packed_vector, i32)[1] == 3 )
      SR_VEC_PTR_LANES(128, a4, i8)[1] = integer_quotient_8;
    if ( !a1[37] )
    {
      if ( (unsigned int)sub_1401E3980(a4, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0], SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1]) )
        SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = -3;
      else
        SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1];
    }
    return SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
  }
  scaled_index_7 = 8 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] * integer_quotient_3;
  call_result_7 = sub_1401F5760(a1[40], a1[28], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  if ( a1[31] == 3001 )
  {
    shifted_bits = 127;
  }
  else if ( a1[31] == 3002 )
  {
    shifted_bits = 0;
  }
  else if ( a1[35] < 0 )
  {
    if ( a1[27] == 2048 )
      shifted_bits = 115;
    else
      shifted_bits = 48;
  }
  else
  {
    shifted_bits = (327 * a1[35]) >> 8;
    if ( a1[27] == 2049 )
    {
      if ( shifted_bits >= 115 )
        saved_shifted_bits = 115;
      else
        saved_shifted_bits = shifted_bits;
      shifted_bits = saved_shifted_bits;
    }
  }
  if ( a1[30] == -1000 || a1[28] != 2 )
  {
    if ( a1[28] == 2 )
    {
      shifted_bits_3 = ((2000 * shifted_bits * shifted_bits) >> 14) + 17000;
      if ( a1[3548] == 2 )
        shifted_bits_3 -= 1000;
      else
        shifted_bits_3 += 1000;
      if ( call_result_7 <= shifted_bits_3 )
        selection_code_7 = 1;
      else
        selection_code_7 = 2;
      a1[3548] = selection_code_7;
    }
    else
    {
      a1[3548] = a1[28];
    }
  }
  else
  {
    a1[3548] = a1[30];
  }
  call_result_7 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  table_value_8 = a1[46] && !SR_VEC_LANES(128, packed_vector_4, i32)[0] && !SR_VEC_LANES(128, packed_vector, i32)[3];
  a1[14] = table_value_8;
  if ( a1[27] == 2051 )
  {
    a1[3556] = 1002;
  }
  else if ( a1[34] == -1000 )
  {
    SR_VEC_LANES(128, packed_vector_3, i32)[2] = (int)(float)((float)((float)(1.0 - weighted_sum) * (float)unk_14027BCF8)
                                   + (float)(weighted_sum * (float)unk_14027BD00));
    scaled_index_5 = (int)(float)((float)((float)(1.0 - weighted_sum) * (float)unk_14027BD04) + (float)(weighted_sum * (float)unk_14027BD04));
    shifted_bits_2 = (((SR_VEC_LANES(128, packed_vector_3, i32)[2] - scaled_index_5) * shifted_bits * shifted_bits) >> 14) + scaled_index_5;
    if ( a1[27] == 2048 )
      shifted_bits_2 += 8000;
    if ( a1[3557] == 1002 )
    {
      shifted_bits_2 -= 4000;
    }
    else if ( a1[3557] > 0 )
    {
      shifted_bits_2 += 4000;
    }
    if ( call_result_7 < shifted_bits_2 )
      selection_code_8 = 1000;
    else
      selection_code_8 = 1002;
    a1[3556] = selection_code_8;
    if ( a1[12] && a1[10] > (128 - shifted_bits) >> 4 )
      a1[3556] = 1000;
    if ( a1[14] && shifted_bits > 100 )
      a1[3556] = 1000;
    if ( integer_quotient_3 <= 50 )
      selection_code_9 = 6000;
    else
      selection_code_9 = 9000;
    if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] < a3 * selection_code_9 / (8 * a1[36]) )
      a1[3556] = 1002;
  }
  else
  {
    a1[3556] = a1[34];
  }
  if ( a1[3556] != 1002 && a3 < a1[36] / 100 )
    a1[3556] = 1002;
  if ( a1[44] )
    a1[3556] = 1002;
  if ( a1[3557] > 0 && (a1[3556] != 1002 && a1[3557] == 1002 || a1[3556] == 1002 && a1[3557] != 1002) )
  {
    condition_flag = 1;
    comparison_result_2 = a1[3556] != 1002;
    saved_comparison_result = comparison_result_2;
    if ( !comparison_result_2 )
    {
      if ( a3 < a1[36] / 100 )
      {
        condition_flag = 0;
      }
      else
      {
        a1[3556] = a1[3557];
        selection_flag = 1;
      }
    }
  }
  if ( a1[3548] != 1 || a1[3558] != 2 || a1[17] || a1[3556] == 1002 || a1[3557] == 1002 )
  {
    a1[17] = 0;
  }
  else
  {
    a1[17] = 1;
    a1[3548] = 2;
  }
  call_result_7 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], a1[3556], a1[11], a1[10]);
  if ( a1[3556] != 1002 && a1[3557] == 1002 )
  {
    sub_1401CAAD0((__int64)table_value_19, a1[45], scratch_buffer_4);
    selection_code_4 = 1;
  }
  if ( a1[3556] == 1002 || a1[3563] || a1[21] )
  {
    remaining_count = 1105;
    if ( a1[28] != 2 || a1[30] == 1 )
    {
      state_address_2 = &unk_14027BC78;
      state_address = &unk_14027BC98;
    }
    else
    {
      state_address_2 = &unk_14027BCB8;
      state_address = &unk_14027BCD8;
    }
    for ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] = 0; SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] < 8; ++SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] )
      scratch_buffer_4[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 28] = state_address[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2]]
                                  + (((state_address_2[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2]] - state_address[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2]]) * shifted_bits * shifted_bits) >> 14);
    do
    {
      remaining_amount = scratch_buffer_4[2 * remaining_count - 2176];
      scaled_index_6 = scratch_buffer_4[2 * remaining_count - 2175];
      if ( !a1[3563] )
      {
        if ( a1[3561] < remaining_count )
          remaining_amount += scaled_index_6;
        else
          remaining_amount -= scaled_index_6;
      }
      if ( call_result_7 >= remaining_amount )
        break;
      --remaining_count;
    }
    while ( remaining_count > 1101 );
    if ( remaining_count == 1102 )
      remaining_count = 1103;
    a1[3561] = remaining_count;
    a1[3560] = remaining_count;
    if ( !a1[3563] && a1[3556] != 1002 && !a1[22] && a1[3560] > 1103 )
      a1[3560] = 1103;
  }
  if ( a1[3560] > a1[33] )
    a1[3560] = a1[33];
  if ( a1[32] != -1000 )
    a1[3560] = a1[32];
  if ( a1[3556] != 1002 && scaled_index_7 < 15000 )
  {
    if ( a1[3560] >= 1103 )
      table_value_9 = 1103;
    else
      table_value_9 = a1[3560];
    a1[3560] = table_value_9;
  }
  if ( a1[36] <= 24000 && a1[3560] > 1104 )
    a1[3560] = 1104;
  if ( a1[36] <= 16000 && a1[3560] > 1103 )
    a1[3560] = 1103;
  if ( a1[36] <= 12000 && a1[3560] > 1102 )
    a1[3560] = 1102;
  if ( a1[36] <= 8000 && a1[3560] > 1101 )
    a1[3560] = 1101;
  if ( a1[4531] && a1[32] == -1000 )
  {
    if ( call_result_7 <= 18000 * a1[3548] && a1[3556] == 1002 )
    {
      SR_VEC_LANES(128, packed_vector, i32)[2] = 1101;
    }
    else if ( call_result_7 <= 24000 * a1[3548] && a1[3556] == 1002 )
    {
      SR_VEC_LANES(128, packed_vector, i32)[2] = 1102;
    }
    else if ( call_result_7 > 30000 * a1[3548] )
    {
      if ( call_result_7 > 44000 * a1[3548] )
        SR_VEC_LANES(128, packed_vector, i32)[2] = 1105;
      else
        SR_VEC_LANES(128, packed_vector, i32)[2] = 1104;
    }
    else
    {
      SR_VEC_LANES(128, packed_vector, i32)[2] = 1103;
    }
    if ( a1[4531] <= SR_VEC_LANES(128, packed_vector, i32)[2] )
      table_value_10 = SR_VEC_LANES(128, packed_vector, i32)[2];
    else
      table_value_10 = a1[4531];
    a1[4531] = table_value_10;
    if ( a1[3560] >= a1[4531] )
      table_value_11 = a1[4531];
    else
      table_value_11 = a1[3560];
    a1[3560] = table_value_11;
  }
  a1[13] = sub_1401F53F0(a1[12], a1[10], a1[13], a1[3556], a1 + 3560, call_result_7);
  sub_140199190(record_pointer, 4036, (__m128i *)cached_table_value_4);
  if ( a1[3556] == 1002 && a1[3560] == 1102 )
    a1[3560] = 1103;
  if ( a1[44] )
    a1[3560] = 1101;
  table_value = a1[3560];
  if ( a1[3556] == 1000 && table_value > 1103 )
    a1[3556] = 1001;
  if ( a1[3556] == 1001 && table_value <= 1103 )
    a1[3556] = 1000;
  if ( a3 > a1[36] / 50 && a1[3556] != 1000 || a3 > 3 * a1[36] / 50 )
  {
    if ( a1[3556] == 1000 )
    {
      if ( a3 == 2 * a1[36] / 25 )
      {
        record_word_offset_4 = a1[36] / 25;
      }
      else if ( a3 == 3 * a1[36] / 25 )
      {
        record_word_offset_4 = 3 * a1[36] / 50;
      }
      else
      {
        record_word_offset_4 = a1[36] / 50;
      }
    }
    else
    {
      record_word_offset_4 = a1[36] / 50;
    }
    SR_VEC_LANES(128, packed_vector_3, i32)[3] = a3 / record_word_offset_4;
    if ( integer_difference != -1 )
    {
      a1[1909] = integer_difference;
      a1[1910] = integer_difference_2;
    }
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = sub_1401F59A0(a1, a2, SR_VEC_LANES(128, packed_vector_3, i32)[3], record_word_offset_4, a4, a5, selection_flag, cached_table_value_4, a13);
    return SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
  }
  if ( a1[3562] )
  {
    condition_flag = 1;
    saved_comparison_result = 1;
    a1[3562] = 0;
    selection_code_4 = 2;
  }
  if ( a1[3556] == 1002 )
    condition_flag = 0;
  if ( condition_flag )
  {
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = sub_1401F5E00(SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1], a1[40], integer_quotient_3, a1[3548]);
    if ( !SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] )
      condition_flag = 0;
  }
  unused_written_slot = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3];
  scaled_index = a3 * a1[40];
  record_word_offset_6 = 8 * a1[36];
  if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] >= scaled_index / record_word_offset_6 )
    integer_quotient_9 = a3 * a1[40] / (8 * a1[36]);
  else
    integer_quotient_9 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3];
  integer_difference_3 = integer_quotient_9 - 1;
  state_address_5 = &SR_VEC_PTR_LANES(128, a4, i8)[1];
  sub_14019A1E0((__int64)scratch_buffer_3, (__int64)state_address_5, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 1);
  record_word_offset = 4LL * a1[28] * (a3 + cached_table_value) + 15;
  if ( record_word_offset <= 4LL * a1[28] * (a3 + cached_table_value) )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_3 = (__m128i *)alloca_result;
  crt_memcpy(source_buffer_3, (     __m128i *)&a1[a1[28] * (a1[43] - cached_table_value) + 3571], 4LL * a1[28] * cached_table_value);
  if ( a1[3556] == 1002 )
    shifted_bits_5 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  else
    shifted_bits_5 = SR_VEC_PTR_LANES(128, table_value_19, u32)[2];
  a1[3550] += (983LL * (int)(shifted_bits_5 - a1[3550])) >> 16;
  shifted_bits_6 = sub_1401BC3D0(a1[3550] >> 8);
  if ( a1[27] == 2048 )
    sub_1401F41E0(a2, shifted_bits_6, (__int64)SR_VEC_PTR_LANES(128, source_buffer_3, i64) + 4 * a1[28] * cached_table_value, (float *)a1 + 3552, a3, a1[28], a1[36]);
  else
    sub_1401F43C0(a2, 3, (__int64)SR_VEC_PTR_LANES(128, source_buffer_3, i64) + 4 * a1[28] * cached_table_value, (float *)a1 + 3552, a3, a1[28], a1[36]);
  if ( a13 )
  {
    scaled_index_2 = a1[28] * a3;
    scaled_index_8 = (__int64)SR_VEC_PTR_LANES(128, source_buffer_3, i64) + 4 * a1[28] * cached_table_value;
    call_result_8 = sub_1401A9C00(scaled_index_8, scaled_index_8, scaled_index_2);
    if ( call_result_8 >= 1000000000.0 )
    {
      crt_memset((void *)(uintptr_t)(&SR_VEC_PTR_LANES(128, source_buffer_3, i16)[2 * a1[28] * cached_table_value]), 0, 4LL * a1[28] * a3);
      a1[3555] = 0;
      a1[3554] = 0;
      a1[3553] = 0;
      a1[3552] = 0;
    }
  }
  component_delta = 1.0;
  if ( a1[3556] != 1002 )
  {
    record_word_offset_2 = 2LL * a3 * a1[28] + 15;
    if ( record_word_offset_2 <= 2LL * a3 * a1[28] )
      record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = (__m128i *)alloca_result_2;
    saved_comparison_result_2 = -1;
    if ( SR_VEC_LANES(128, packed_vector_4, i32)[0] )
    {
      comparison_result_3 = comparison_operand >= 0.1;
      saved_comparison_result_2 = comparison_result_3;
    }
    scaled_index_4 = integer_quotient_3 * 8 * integer_difference_3;
    if ( a1[3556] == 1001 )
    {
      comparison_result_4 = a1[36] == 50 * a3;
      a1[9] = sub_1401F5530(scaled_index_4, table_value, comparison_result_4, a1[37], a1[13], a1[3548]);
      if ( !*((_QWORD *)a1 + 1782) )
      {
        integer_difference_4 = scaled_index_4 - a1[9];
        exp_result = exp(0.6931471805599453 * (float)((float)-integer_difference_4 * 0.0009765625));
        component_delta = 1.0 - exp_result;
      }
    }
    else
    {
      a1[9] = scaled_index_4;
    }
    if ( *((_QWORD *)a1 + 1782) && a1[37] && !a1[44] )
    {
      component_sum = 0.0;
      selection_code_3 = 17;
      selection_code = 16000;
      if ( a1[3560] == 1101 )
      {
        selection_code_3 = 13;
        selection_code = 8000;
      }
      else if ( a1[3560] == 1102 )
      {
        selection_code_3 = 15;
        selection_code = 12000;
      }
      for ( i = 0; i < a1[28]; ++i )
      {
        for ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] = 0; SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] < selection_code_3; ++SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] )
        {
          if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 21 * i)) >= 0.5 )
            weighted_sum_4 = 0.5;
          else
            weighted_sum_4 = *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 21 * i));
          if ( weighted_sum_4 <= -2.0 )
          {
            component_delta_2 = -2.0;
          }
          else
          {
            if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 21 * i)) >= 0.5 )
              float_word = 1056964608;
            else
              float_word = *(_DWORD *)(*((_QWORD *)a1 + 1782) + 4LL * (SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 21 * i));
            component_delta_2 = *(float *)&float_word;
          }
          saved_component_delta = component_delta_2;
          if ( component_delta_2 > 0.0 )
            saved_component_delta = 0.5 * saved_component_delta;
          component_sum = component_sum + saved_component_delta;
        }
      }
      scaled_ratio = (float)(component_sum / (float)selection_code_3) * (float)a1[28];
      scaled_ratio = scaled_ratio + 0.2;
      scaled_index_3 = (int)(float)((float)selection_code * scaled_ratio);
      if ( scaled_index_3 <= -2 * a1[9] / 3 )
        integer_quotient_10 = -2 * a1[9] / 3;
      else
        integer_quotient_10 = scaled_index_3;
      scaled_index_3 = integer_quotient_10;
      if ( a1[3560] == 1104 || a1[3560] == 1105 )
        a1[9] += 3 * scaled_index_3 / 5;
      else
        a1[9] += scaled_index_3;
    }
    a1[8] = 1000 * a3 / a1[36];
    a1[2] = a1[28];
    a1[3] = a1[3548];
    if ( table_value == 1101 )
    {
      a1[7] = 8000;
    }
    else if ( table_value == 1102 )
    {
      a1[7] = 12000;
    }
    else
    {
      a1[7] = 16000;
    }
    if ( a1[3556] == 1001 )
      a1[6] = 16000;
    else
      a1[6] = 8000;
    a1[5] = 16000;
    if ( a1[3556] == 1000 )
    {
      integer_quotient_4 = scaled_index_7;
      if ( integer_quotient_3 > 50 )
        integer_quotient_4 = 2 * integer_quotient_4 / 3;
      if ( integer_quotient_4 < 8000 )
      {
        a1[5] = 12000;
        if ( a1[7] <= 12000 )
          table_value_12 = a1[7];
        else
          table_value_12 = 12000;
        a1[7] = table_value_12;
      }
      if ( integer_quotient_4 < 7000 )
      {
        a1[5] = 8000;
        if ( a1[7] <= 8000 )
          table_value_13 = a1[7];
        else
          table_value_13 = 8000;
        a1[7] = table_value_13;
      }
    }
    comparison_result_5 = a1[37] == 0;
    a1[15] = comparison_result_5;
    a1[16] = 8 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 8;
    if ( condition_flag )
    {
      if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] >= 2 )
      {
        a1[16] -= 8 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] + 1;
        if ( a1[3556] == 1001 )
          a1[16] -= 20;
      }
    }
    if ( a1[15] )
    {
      if ( a1[3556] == 1001 )
      {
        if ( a1[16] >= a3 * a1[9] / a1[36] )
          integer_quotient_11 = a3 * a1[9] / a1[36];
        else
          integer_quotient_11 = a1[16];
        a1[16] = integer_quotient_11;
      }
    }
    else if ( a1[3556] == 1001 )
    {
      comparison_result_6 = a1[36] == 50 * a3;
      call_result_9 = sub_1401F5530(a1[36] * a1[16] / a3, table_value, comparison_result_6, a1[37], a1[13], a1[3548]);
      a1[16] = a3 * call_result_9 / a1[36];
    }
    if ( selection_code_4 )
    {
      selection_flag_2 = 0;
      integer_difference_5 = a1[43] - a1[29];
      integer_quotient_5 = (integer_difference_5 - a1[36] / 400) * a1[28];
      integer_quotient = a1[36] / 400;
      state_address_3 = &a1[integer_quotient_5 + 3571];
      sub_1401F48B0(
        (__int64)state_address_3,
        (__int64)state_address_3,
        0.0,
        1.0,
        *(_DWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 4),
        integer_quotient,
        a1[28],
        *(_QWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 72),
        a1[36]);
      crt_memset((void *)(uintptr_t)((_WORD *)a1 + 7142), 0, 4LL * integer_quotient_5);
      for ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] = 0; SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] < a1[28] * a1[43]; ++SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] )
      {
        masked_bits = sub_1401AD3E0(*(float *)&a1[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + 3571]);
        SR_VEC_PTR_LANES(128, saved_alloca_result, i16)[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2]] = masked_bits;
      }
      sub_1401CABA0(table_value_19, a1 + 2, saved_alloca_result, a1[43], nullptr, &selection_flag_2, selection_code_4, saved_comparison_result_2);
      a1[18] = 0;
    }
    for ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] = 0; SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] < a1[28] * a3; ++SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] )
    {
      masked_bits_2 = sub_1401AD3E0(*(float *)&SR_VEC_PTR_LANES(128, source_buffer_3, i32)[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2] + a1[28] * cached_table_value]);
      SR_VEC_PTR_LANES(128, saved_alloca_result, i16)[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[2]] = masked_bits_2;
    }
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = sub_1401CABA0(table_value_19, a1 + 2, saved_alloca_result, a3, scratch_buffer_3, &callee_output_word_2, 0, saved_comparison_result_2);
    if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] )
      return -3;
    if ( a1[3556] == 1000 )
    {
      switch ( a1[20] )
      {
        case 8000:
          table_value = 1101;
          break;
        case 12000:
          table_value = 1102;
          break;
        case 16000:
          table_value = 1103;
          break;
      }
    }
    table_value_14 = a1[24] && !a1[4534];
    a1[18] = table_value_14;
    if ( !callee_output_word_2 )
    {
      a1[4535] = 0;
      *(state_address_5 - 1) = sub_1401F3E60(a1[3556], a1[36] / a3, table_value, a1[3548]);
      return 1;
    }
    if ( a1[18] )
    {
      SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = sub_1401F5E00(SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1], a1[40], integer_quotient_3, a1[3548]);
      table_value_15 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] != 0;
      condition_flag = table_value_15;
      saved_comparison_result = 0;
      a1[3562] = 1;
    }
  }
  selection_code_2 = 21;
  cached_table_value_2 = table_value;
  if ( table_value == 1101 )
  {
    selection_code_2 = 13;
  }
  else if ( cached_table_value_2 > 1101 )
  {
    if ( cached_table_value_2 <= 1103 )
    {
      selection_code_2 = 17;
    }
    else if ( cached_table_value_2 == 1104 )
    {
      selection_code_2 = 19;
    }
    else if ( cached_table_value_2 == 1105 )
    {
      selection_code_2 = 21;
    }
  }
  sub_140199190(record_pointer, 10012, (__m128i *)selection_code_2);
  sub_140199190(record_pointer, 10008, (__m128i *)(unsigned int)a1[3548]);
  sub_140199190(record_pointer, 4002, (__m128i *)0xFFFFFFFFLL);
  if ( a1[3556] != 1000 )
  {
    selected_scalar = 2.0;
    sub_140199190(record_pointer, 4006, nullptr);
    if ( a1[19] )
      selected_scalar = 0.0;
    sub_140199190(record_pointer, 10002, (__m128i *)(unsigned int)(int)selected_scalar);
    if ( a1[3556] == 1001 )
    {
      if ( a1[37] )
      {
        sub_140199190(record_pointer, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
        sub_140199190(record_pointer, 4020, nullptr);
      }
    }
    else if ( a1[37] )
    {
      sub_140199190(record_pointer, 4006, (__m128i *)1);
      sub_140199190(record_pointer, 4020, (__m128i *)(unsigned int)a1[38]);
      sub_140199190(record_pointer, 4002, (__m128i *)(unsigned int)a1[40]);
    }
  }
  integer_quotient_2 = 4LL * (a1[36] * a1[28] / 400) + 15;
  if ( integer_quotient_2 <= 4LL * (a1[36] * a1[28] / 400) )
    integer_quotient_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(integer_quotient_2 & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer = (__m128i *)alloca_result_3;
  if ( a1[3556] != 1000 && a1[3556] != a1[3557] && a1[3557] > 0 )
  {
    integer_quotient_13 = a1[36] * a1[28] / 400;
    unused_written_slot_2 = 4 * integer_quotient_13;
    crt_memcpy(destination_buffer, (     __m128i *)&a1[a1[28] * (a1[43] - cached_table_value - a1[36] / 400) + 3571], 4 * integer_quotient_13);
  }
  if ( (a1[43] - (cached_table_value + a3)) * a1[28] <= 0 )
  {
    byte_count_3 = 4LL * a1[28] * a1[43];
    source_buffer_2 = (     __m128i *)((char *)source_buffer_3 + 4 * a1[28] * (cached_table_value + a3 - a1[43]));
    unused_written_slot_4 = a1 + 3571;
    crt_memcpy((__m128i *)(a1 + 3571), source_buffer_2, byte_count_3);
  }
  else
  {
    byte_count = 4LL * (a1[43] - a3 - cached_table_value) * a1[28];
    source_buffer = (     __m128i *)&a1[a3 * a1[28] + 3571];
    unused_written_slot_3 = a1 + 3571;
    crt_memcpy((__m128i *)(a1 + 3571), source_buffer, byte_count);
    byte_count_2 = 4LL * a1[28] * (cached_table_value + a3);
    destination_buffer_2 = (__m128i *)&a1[(a1[43] - a3 - cached_table_value) * a1[28] + 3571];
    crt_memcpy(destination_buffer_2, source_buffer_3, byte_count_2);
  }
  if ( *((float *)a1 + 3551) < 1.0 || component_delta < 1.0 )
    sub_1401F48B0(
      (__int64)source_buffer_3,
      (__int64)source_buffer_3,
      *((float *)a1 + 3551),
      component_delta,
      *(_DWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 72),
      a1[36]);
  *((float *)a1 + 3551) = component_delta;
  if ( a1[3556] != 1001 || a1[3548] == 1 )
  {
    if ( call_result_7 <= 32000 )
    {
      if ( call_result_7 >= 16000 )
        a1[23] = 0x4000 - ((32000 - call_result_7) << 11) / (call_result_7 - 14000);
      else
        a1[23] = 0;
    }
    else
    {
      a1[23] = 0x4000;
    }
  }
  if ( !*((_QWORD *)a1 + 1782) && a1[28] == 2 && (*((__int16 *)a1 + 7098) < 0x4000 || a1[23] < 0x4000) )
  {
    weighted_sum_2 = (float)*((__int16 *)a1 + 7098);
    scaled_value = (float)a1[23];
    weighted_sum_2 = weighted_sum_2 * 0.000061035156;
    scaled_value = scaled_value * 0.000061035156;
    sub_1401F4640(
      (__int64)source_buffer_3,
      (__int64)source_buffer_3,
      weighted_sum_2,
      scaled_value,
      *(_DWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(SR_VEC_LANES(128, packed_vector_2, i64)[0] + 72),
      a1[36]);
    *((_WORD *)a1 + 7098) = *((_WORD *)a1 + 46);
  }
  if ( a1[3556] == 1002
    || (comparison_result_7 = a1[3556] == 1001, call_result_2 = sub_14019A0A0((__int64)scratch_buffer_3), call_result_2 + 20 * comparison_result_7 + 17 > 8 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 8) )
  {
    condition_flag = 0;
  }
  else
  {
    if ( a1[3556] == 1001 )
      sub_14019A450(scratch_buffer_3, condition_flag, 12);
    if ( condition_flag )
    {
      sub_14019A450(scratch_buffer_3, saved_comparison_result, 1);
      if ( a1[3556] == 1001 )
      {
        integer_difference_6 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 1;
        call_result_3 = sub_14019A0A0((__int64)scratch_buffer_3);
        shifted_bits_4 = integer_difference_6 - ((call_result_3 + 18) >> 3);
      }
      else
      {
        integer_difference_7 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 1;
        call_result_4 = sub_14019A0A0((__int64)scratch_buffer_3);
        shifted_bits_4 = integer_difference_7 - ((call_result_4 + 7) >> 3);
      }
      table_value_16 = shifted_bits_4 >= SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] ? SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] : shifted_bits_4;
      SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = table_value_16;
      table_value_17 = table_value_16 >= 2 ? SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] : 2;
      if ( table_value_17 <= 257 )
      {
        table_value_18 = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] >= 2 ? SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] : 2;
        cached_table_value_3 = table_value_18;
      }
      else
      {
        cached_table_value_3 = 257;
      }
      SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = cached_table_value_3;
      if ( a1[3556] == 1001 )
        sub_14019A5E0(scratch_buffer_3, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] - 2, 256);
    }
  }
  if ( !condition_flag )
  {
    a1[3562] = 0;
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] = 0;
  }
  if ( a1[3556] != 1002 )
    selection_code_10 = 17;
  if ( a1[3556] == 1000 )
  {
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = (int)(sub_14019A0A0((__int64)scratch_buffer_3) + 7) >> 3;
    sub_14019A9C0(scratch_buffer_3);
    running_total = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
  }
  else
  {
    running_total = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 1 - SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3];
    sub_14019A8F0((__int64)scratch_buffer_3, running_total);
  }
  if ( condition_flag || a1[3556] != 1000 )
    sub_140199190(record_pointer, 10022, &packed_vector_4);
  if ( a1[3556] == 1001 )
  {
    SR_VEC_LANES(128, packed_vector_3, i64)[0] = *(_QWORD *)(a1 + 25);
    sub_140199190(record_pointer, 10028, &packed_vector_3);
  }
  if ( condition_flag && saved_comparison_result )
  {
    sub_140199190(record_pointer, 10010, nullptr);
    sub_140199190(record_pointer, 4006, nullptr);
    sub_140199190(record_pointer, 4002, (__m128i *)0xFFFFFFFFLL);
    state_address_4 = &state_address_5[running_total];
    call_result_10 = sub_14019B2E0((__int64)record_pointer, (__int64)source_buffer_3, a1[36] / 200, (__int64)state_address_4, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3], nullptr);
    if ( call_result_10 < 0 )
      return -3;
    sub_140199190(record_pointer, 4031, &packed_vector);
    sub_140199190(record_pointer, 4028, unrecovered_register_value);
  }
  sub_140199190(record_pointer, 10010, (__m128i *)selection_code_10);
  if ( a1[3556] != 1000 )
  {
    if ( a1[3556] != a1[3557] && a1[3557] > 0 )
    {
      sub_140199190(record_pointer, 4028, unrecovered_register_value_2);
      sub_14019B2E0((__int64)record_pointer, (__int64)destination_buffer, a1[36] / 400, (__int64)scratch_buffer_2, 2, nullptr);
      sub_140199190(record_pointer, 10002, nullptr);
    }
    call_result_5 = sub_14019A0A0((__int64)scratch_buffer_3);
    if ( call_result_5 <= 8 * running_total )
    {
      if ( condition_flag && saved_comparison_result && a1[3556] == 1001 && a1[37] )
        sub_140199190(record_pointer, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
      sub_140199190(record_pointer, 4006, (__m128i *)(unsigned int)a1[37]);
      SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = sub_14019B2E0((__int64)record_pointer, (__int64)source_buffer_3, a3, 0, running_total, (unsigned int *)scratch_buffer_3);
      if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] < 0 )
        return -3;
      if ( condition_flag && saved_comparison_result && a1[3556] == 1001 && a1[37] )
      {
        destination_buffer_3 = (__m128i *)&state_address_5[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0]];
        crt_memcpy(destination_buffer_3, (     __m128i *)&state_address_5[running_total], SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3]);
        running_total += SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3];
      }
    }
  }
  if ( condition_flag && !saved_comparison_result )
  {
    integer_quotient_6 = a1[36] / 200;
    integer_quotient_12 = a1[36] / 400;
    sub_140199190(record_pointer, 4028, unrecovered_register_value_2);
    sub_140199190(record_pointer, 10010, nullptr);
    sub_140199190(record_pointer, 10002, nullptr);
    sub_140199190(record_pointer, 4006, nullptr);
    sub_140199190(record_pointer, 4002, (__m128i *)0xFFFFFFFFLL);
    if ( a1[3556] == 1001 )
    {
      running_total = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
      sub_14019A8F0((__int64)scratch_buffer_3, SR_VEC_LANES(128, unrecovered_register_value_3, u32)[0]);
    }
    sub_14019B2E0(
      (__int64)record_pointer,
      (__int64)SR_VEC_PTR_LANES(128, source_buffer_3, i64) + 4 * (a3 - integer_quotient_6 - integer_quotient_12) * a1[28],
      integer_quotient_12,
      (__int64)scratch_buffer,
      2,
      nullptr);
    masked_bits_3 = sub_14019B2E0(
             (__int64)record_pointer,
             (__int64)SR_VEC_PTR_LANES(128, source_buffer_3, i64) + 4 * (a3 - integer_quotient_6) * a1[28],
             integer_quotient_6,
             (__int64)&state_address_5[running_total],
             SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3],
             nullptr);
    if ( masked_bits_3 < 0 )
      return -3;
    sub_140199190(record_pointer, 4031, &packed_vector);
  }
  packed_vector_5 = (__m128i *)(state_address_5 - 1);
  SR_VEC_PTR_LANES(128, packed_vector_5, i8)[0] = sub_1401F3E60(a1[3556], a1[36] / a3, table_value, a1[3548]);
  a1[4535] = SR_VEC_LANES(128, packed_vector, i32)[0] ^ unrecovered_register_value_4;
  if ( selection_flag )
    a1[3557] = 1002;
  else
    a1[3557] = a1[3556];
  a1[3558] = a1[3548];
  a1[3559] = a3;
  a1[3563] = 0;
  if ( a1[46] && (SR_VEC_LANES(128, packed_vector_4, i32)[0] || SR_VEC_LANES(128, packed_vector, i32)[3]) )
  {
    if ( (unsigned int)sub_1401F58C0(comparison_operand, a1 + 4532, *((float *)a1 + 4533), a2, a3, a1[28], SR_VEC_LANES(128, packed_vector, i32)[3]) )
    {
      a1[4535] = 0;
      SR_VEC_PTR_LANES(128, packed_vector_5, i8)[0] = sub_1401F3E60(a1[3556], a1[36] / a3, table_value, a1[3548]);
      return 1;
    }
  }
  else
  {
    a1[4532] = 0;
  }
  call_result_6 = sub_14019A0A0((__int64)scratch_buffer_3);
  if ( call_result_6 <= 8 * SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] - 8 )
  {
    if ( a1[3556] == 1000 && !condition_flag )
    {
      while ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] > 2 && !SR_VEC_PTR_LANES(128, packed_vector_5, i8)[SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0]] )
        --SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
    }
  }
  else
  {
    if ( SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1] < 2 )
      return -2;
    SR_VEC_PTR_LANES(128, packed_vector_5, i8)[1] = 0;
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = 1;
    a1[4535] = 0;
  }
  SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] += SR_VEC_LANES(128, unrecovered_register_value_3, i32)[3] + 1;
  if ( !a1[37] )
  {
    if ( (unsigned int)sub_1401E3980(packed_vector_5, SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0], SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1]) )
      return -3;
    SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0] = SR_VEC_LANES(128, unrecovered_register_value_3, i32)[1];
  }
  return SR_VEC_LANES(128, unrecovered_register_value_3, i32)[0];
}

//----- (00000001401E9360) ----------------------------------------------------
__int64            sub_1401E9360(
        int *a1,
        char *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  __int64 unused_local;
  int call_result;
  int running_total;
  int running_total_2;
  int call_result_2;
  int i;
  int call_result_3;
  _BYTE scratch_buffer[4];
  int call_result_4;
  int call_result_5;
  int call_result_6;
  int call_result_7;
  int call_result_8;
  int integer_quotient;
  int lookup_index;
  int table_value;
  __int16 scratch_buffer_2[48];
  __int64 unused_local_2;
  char *state_address;

  if ( a6 < 2 )
  {
    if ( !a6 && a3 && a2 || (integer_quotient = a1[3] / 400, !(a5 % integer_quotient)) )
    {
      if ( a3 && a2 )
      {
        if ( a3 >= 0 )
        {
          call_result_5 = sub_1401F2A30(a2);
          call_result_7 = sub_1401E2CB0(a2);
          call_result = sub_1401E2D90(a2, a1[3]);
          call_result_8 = sub_1401E2EB0(a2);
          call_result_3 = sub_1401E99E0(a2, a3, a7, scratch_buffer, 0, scratch_buffer_2, &lookup_index, a8);
          if ( call_result_3 >= 0 )
          {
            state_address = &a2[lookup_index];
            if ( a6 )
            {
              if ( a5 < call_result || call_result_5 == 1002 || a1[14] == 1002 )
              {
                return sub_1401E9360(a1, nullptr, 0, a4, a5, 0, 0, nullptr, a9); /* 0x1401E9635: the call's result stays in rax */
              }
              else
              {
                table_value = a1[18];
                if ( a5 == call_result || (call_result_2 = sub_1401E9360(a1, nullptr, 0, a4, a5 - call_result, 0, 0, nullptr, a9), call_result_2 >= 0) )
                {
                  a1[14] = call_result_5;
                  a1[13] = call_result_7;
                  a1[16] = call_result;
                  a1[12] = call_result_8;
                  call_result_2 = sub_1401F2AA0(a1, (__int64)state_address, scratch_buffer_2[0], a4 + 4LL * (a5 - call_result) * a1[2], call_result, 1);
                  if ( call_result_2 >= 0 )
                  {
                    sub_1401A2600();
                    a1[18] = a5;
                    return (unsigned int)a5; /* 0x1401E97B7: mov eax, dword ptr [rsp + 0x130] */
                  }
                  return (unsigned int)call_result_2; /* 0x1401E978B: mov eax, dword ptr [rsp + 0x5c] */
                }
                else
                {
                  a1[18] = table_value;
                  return (unsigned int)call_result_2; /* 0x1401E96D2: mov eax, dword ptr [rsp + 0x5c] */
                }
              }
            }
            else if ( call_result * call_result_3 <= a5 )
            {
              a1[14] = call_result_5;
              a1[13] = call_result_7;
              a1[16] = call_result;
              a1[12] = call_result_8;
              running_total_2 = 0;
              for ( i = 0; i < call_result_3; ++i )
              {
                call_result_6 = sub_1401F2AA0(a1, (__int64)state_address, scratch_buffer_2[i], a4 + 4LL * a1[2] * running_total_2, a5 - running_total_2, 0);
                if ( call_result_6 < 0 )
                  return (unsigned int)call_result_6; /* 0x1401E98B4: mov eax, dword ptr [rsp + 0x74] */
                state_address += scratch_buffer_2[i];
                running_total_2 += call_result_6;
              }
              a1[18] = running_total_2;
              sub_1401A2600();
              if ( a9 )
              {
                sub_1401E3040(a4, running_total_2, a1[2], (__int64)(a1 + 19));
              }
              else
              {
                a1[20] = 0;
                a1[19] = 0;
              }
              return (unsigned int)running_total_2; /* 0x1401E9980: mov eax, dword ptr [rsp + 0x58] */
            }
            return (unsigned int)-2; /* 0x1401E97D5: mov eax, 0xfffffffe */
          }
          return (unsigned int)call_result_3; /* 0x1401E9594: mov eax, dword ptr [rsp + 0x64] */
        }
        return (unsigned int)-1; /* 0x1401E94DF: mov eax, 0xffffffff */
      }
      else
      {
        running_total = 0;
        while ( 1 )
        {
          call_result_4 = sub_1401F2AA0(a1, 0, 0, a4 + 4LL * a1[2] * running_total, a5 - running_total, 0);
          if ( call_result_4 < 0 )
            return (unsigned int)call_result_4; /* 0x1401E9482: mov eax, dword ptr [rsp + 0x6c] */
          running_total += call_result_4;
          if ( running_total >= a5 )
          {
            sub_1401A2600();
            a1[18] = running_total;
            return (unsigned int)running_total; /* 0x1401E94CA: mov eax, dword ptr [rsp + 0x54] */
          }
        }
      }
    }
  }
  return (unsigned int)-1; /* 0x1401E93A1 / 0x1401E93FB: mov eax, 0xffffffff */
}

//----- (00000001401E99B0) ----------------------------------------------------
__int64            sub_1401E99B0(int a1)
{
  return 8 * ((a1 + 7) / 8u);
}

//----- (00000001401E99E0) ----------------------------------------------------
__int64            sub_1401E99E0(char *a1, int a2, int a3, _BYTE *a4, __int64 a5, __int16 *a6, _DWORD *a7, _DWORD *a8)
{
  int j;
  int i;
  int k;
  int m;
  int masked_bits;
  char input_byte;
  int saved_remaining_count;
  char input_byte_2;
  int call_result;
  int call_result_2;
  int call_result_3;
  BOOL comparison_result;
  int masked_bits_2;
  int loaded_word;
  int running_total;
  int saved_loaded_word;
  int call_result_4;
  int input_value;
  unsigned __int8 *buffer_cursor;
  int remaining_count;
  int integer_difference;
  int integer_difference_2;

  running_total = 0;
  input_value = (int)a1;
  if ( !a6 || a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 4294967292LL;
  call_result_4 = sub_1401E2D90(a1, 48000);
  comparison_result = 0;
  input_byte_2 = *a1;
  buffer_cursor = (unsigned __int8 *)(a1 + 1);
  remaining_count = a2 - 1;
  saved_remaining_count = remaining_count;
  masked_bits_2 = input_byte_2 & 3;
  if ( (input_byte_2 & 3) != 0 )
  {
    if ( masked_bits_2 == 1 )
    {
      masked_bits = 2;
      comparison_result = 1;
      if ( !a3 )
      {
        if ( (remaining_count & 1) != 0 )
          return 4294967292LL;
        saved_remaining_count = remaining_count / 2;
        *a6 = remaining_count / 2;
      }
    }
    else if ( masked_bits_2 == 2 )
    {
      masked_bits = 2;
      call_result = sub_1401F8490(buffer_cursor, remaining_count, a6);
      remaining_count -= call_result;
      if ( *a6 < 0 || *a6 > remaining_count )
        return 4294967292LL;
      buffer_cursor += call_result;
      saved_remaining_count = remaining_count - *a6;
    }
    else
    {
      if ( remaining_count < 1 )
        return 4294967292LL;
      input_byte = *buffer_cursor++;
      masked_bits = input_byte & 0x3F;
      if ( (input_byte & 0x3F) == 0 || masked_bits * call_result_4 > 5760 )
        return 4294967292LL;
      --remaining_count;
      if ( (input_byte & 0x40) != 0 )
      {
        while ( remaining_count > 0 )
        {
          loaded_word = *buffer_cursor++;
          integer_difference = remaining_count - 1;
          if ( loaded_word == 255 )
            saved_loaded_word = 254;
          else
            saved_loaded_word = loaded_word;
          remaining_count = integer_difference - saved_loaded_word;
          running_total += saved_loaded_word;
          if ( loaded_word != 255 )
            goto LABEL_32;
        }
        return 4294967292LL;
      }
LABEL_32:
      if ( remaining_count < 0 )
        return 4294967292LL;
      comparison_result = input_byte >= 0;
      if ( input_byte >= 0 )
      {
        if ( !a3 )
        {
          saved_remaining_count = remaining_count / masked_bits;
          if ( masked_bits * (remaining_count / masked_bits) != remaining_count )
            return 4294967292LL;
          for ( i = 0; i < masked_bits - 1; ++i )
            a6[i] = saved_remaining_count;
        }
      }
      else
      {
        saved_remaining_count = remaining_count;
        for ( j = 0; j < masked_bits - 1; ++j )
        {
          call_result_2 = sub_1401F8490(buffer_cursor, remaining_count, &a6[j]);
          remaining_count -= call_result_2;
          if ( a6[j] < 0 || a6[j] > remaining_count )
            return 4294967292LL;
          buffer_cursor += call_result_2;
          saved_remaining_count -= a6[j] + call_result_2;
        }
        if ( saved_remaining_count < 0 )
          return 4294967292LL;
      }
    }
  }
  else
  {
    masked_bits = 1;
  }
  if ( a3 )
  {
    call_result_3 = sub_1401F8490(buffer_cursor, remaining_count, &a6[masked_bits - 1]);
    integer_difference_2 = remaining_count - call_result_3;
    if ( a6[masked_bits - 1] < 0 || a6[masked_bits - 1] > integer_difference_2 )
      return 4294967292LL;
    buffer_cursor += call_result_3;
    if ( comparison_result )
    {
      if ( masked_bits * a6[masked_bits - 1] > integer_difference_2 )
        return 4294967292LL;
      for ( k = 0; k < masked_bits - 1; ++k )
        a6[k] = a6[masked_bits - 1];
    }
    else if ( a6[masked_bits - 1] + call_result_3 > saved_remaining_count )
    {
      return 4294967292LL;
    }
  }
  else
  {
    if ( saved_remaining_count > 1275 )
      return 4294967292LL;
    a6[masked_bits - 1] = saved_remaining_count;
  }
  if ( a7 )
    *a7 = (_DWORD)buffer_cursor - input_value;
  for ( m = 0; m < masked_bits; ++m )
  {
    if ( a5 )
      *(_QWORD *)(a5 + 8LL * m) = (uint64)(uintptr_t)(buffer_cursor);
    buffer_cursor += a6[m];
  }
  if ( a8 )
    *a8 = (_DWORD)buffer_cursor - input_value + running_total;
  if ( a4 )
    *a4 = input_byte_2;
  return (unsigned int)masked_bits;
}

//----- (00000001401EA090) ----------------------------------------------------
__int64            sub_1401EA090(__int64 a1, int a2, int a3, _BYTE *a4, int a5, int a6, int a7)
{
  int i;
  int j;
  int k;
  int m;
  int n;
  int comparison_result;
  int comparison_result_2;
  int running_total;
  __m128i *destination_buffer;
  int integer_difference;
  __int16 *record_pointer;
  int selection_flag;
  int integer_difference_2;
  int integer_quotient;
  __int64 scaled_index;

  if ( a2 < 0 || a2 >= a3 || a3 > *(_DWORD *)(a1 + 4) )
    return 0xFFFFFFFFLL;
  integer_difference = a3 - a2;
  record_pointer = (__int16 *)(a1 + 2LL * a2 + 392);
  scaled_index = a1 + 8LL * a2 + 8;
  if ( a6 )
    comparison_result = (record_pointer[integer_difference - 1] >= 252) + 1;
  else
    comparison_result = 0;
  destination_buffer = (__m128i *)a4;
  if ( integer_difference == 1 )
  {
    comparison_result += *record_pointer + 1;
    if ( comparison_result > a5 )
      return 4294967294LL;
    *a4 = *(_BYTE *)a1 & 0xFC;
    destination_buffer = (__m128i *)(a4 + 1);
  }
  else if ( integer_difference == 2 )
  {
    if ( *(__int16 *)(a1 + 2LL * a2 + 394) == *(__int16 *)(a1 + 2LL * a2 + 392) )
    {
      comparison_result += 2 * *record_pointer + 1;
      if ( comparison_result > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 1;
      destination_buffer = (__m128i *)(a4 + 1);
    }
    else
    {
      comparison_result += *(__int16 *)(a1 + 2LL * a2 + 394)
           + *(__int16 *)(a1 + 2LL * a2 + 392)
           + (*(__int16 *)(a1 + 2LL * a2 + 392) >= 252)
           + 2;
      if ( comparison_result > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 2;
      destination_buffer = (__m128i *)&a4[(int)sub_1401E5230(*record_pointer, a4 + 1) + 1];
    }
  }
  if ( integer_difference > 2 || a7 && comparison_result < a5 )
  {
    if ( a6 )
      comparison_result_2 = (record_pointer[integer_difference - 1] >= 252) + 1;
    else
      comparison_result_2 = 0;
    selection_flag = 0;
    for ( i = 1; i < integer_difference; ++i )
    {
      if ( record_pointer[i] != *record_pointer )
      {
        selection_flag = 1;
        break;
      }
    }
    if ( selection_flag )
    {
      running_total = comparison_result_2 + 2;
      for ( j = 0; j < integer_difference - 1; ++j )
        running_total += record_pointer[j] + (record_pointer[j] >= 252) + 1;
      comparison_result = record_pointer[integer_difference - 1] + running_total;
      if ( comparison_result > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = integer_difference | 0x80;
      destination_buffer = (__m128i *)(a4 + 2);
    }
    else
    {
      comparison_result = comparison_result_2 + *record_pointer * integer_difference + 2;
      if ( comparison_result > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = integer_difference;
      destination_buffer = (__m128i *)(a4 + 2);
    }
    if ( a7 )
      integer_difference_2 = a5 - comparison_result;
    else
      integer_difference_2 = 0;
    if ( integer_difference_2 )
    {
      a4[1] |= 0x40u;
      integer_quotient = (integer_difference_2 - 1) / 255;
      for ( k = 0; k < integer_quotient; ++k )
      {
        SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] = -1;
        destination_buffer = (__m128i *)((char *)destination_buffer + 1);
      }
      SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] = integer_difference_2 + integer_quotient - 1;
      destination_buffer = (__m128i *)((char *)destination_buffer + 1);
      comparison_result += integer_difference_2;
    }
    if ( selection_flag )
    {
      for ( m = 0; m < integer_difference - 1; ++m )
        destination_buffer = (__m128i *)((char *)destination_buffer + (int)sub_1401E5230(record_pointer[m], (unsigned __int8 *)destination_buffer));
    }
  }
  if ( a6 )
    destination_buffer = (__m128i *)((char *)destination_buffer + (int)sub_1401E5230(record_pointer[integer_difference - 1], (unsigned __int8 *)destination_buffer));
  for ( n = 0; n < integer_difference; ++n )
  {
    crt_memcpy(destination_buffer, *(     __m128i **)(scaled_index + 8LL * n), record_pointer[n]);
    destination_buffer = (__m128i *)((char *)destination_buffer + record_pointer[n]);
  }
  if ( a7 )
  {
    while ( destination_buffer < (__m128i *)&a4[a5] )
    {
      SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] = 0;
      destination_buffer = (__m128i *)((char *)destination_buffer + 1);
    }
  }
  return (unsigned int)comparison_result;
}

//----- (00000001401EA7F0) ----------------------------------------------------
__int64            sub_1401EA7F0(
        unsigned int *a1,
        void (           *a2)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        __int64 a3,
        int a4,
        _BYTE *a5,
        int a6,
        int a7,
        void (           *a8)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a9,
        __int64 a10)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  int unknown_libname_998_result;
  _BYTE unused_local[9728];
  int i;
  int call_result;
  int callee_output_word;
  int remaining_amount;
  int record_word_offset;
  int k;
  int *returned_pointer;
  int call_result_2;
  signed int remaining_amount_2;
  int j;
  int callee_output_word_2;
  int running_total;
  int *record_pointer;
  int call_result_3;
  int call_result_4;
  int call_result_5;
  int saved_record_word_offset;
  int saved_record_word_offset_2;
  int input_value;
  int call_result_6;
  int call_result_7;
  unsigned int scaled_index_3;
  int saved_remaining_amount;
  int selection_code;
  int integer_difference;
  int cached_call_result;
  BOOL comparison_result;
  BOOL comparison_result_2;
  int call_result_8;
  int integer_quotient;
  _BYTE *saved_alloca_result;
  _BYTE *saved_alloca_result_2;
  int unused_written_slot;
  int integer_quotient_2;
  signed int record_word_offset_2;
  int integer_quotient_3;
  signed int record_word_offset_3;
  int integer_quotient_4;
  signed int record_word_offset_4;
  int integer_quotient_5;
  signed int record_word_offset_5;
  int integer_quotient_6;
  int integer_difference_2;
  int unused_written_slot_2;
  int integer_quotient_7;
  __int64 callee_output_word_3;
  int *record_pointer_2;
  char *returned_pointer_2;
  __int64 call_result_9;
  _BYTE scratch_buffer[496];
  _DWORD scratch_buffer_2[44];
  _DWORD scratch_buffer_3[256];
  __m128i scratch_buffer_4[479];
  __int64 unused_local_2;

  call_result_9 = 0;
  returned_pointer_2 = nullptr;
  if ( a1[71] == 1 )
  {
    returned_pointer_2 = sub_1401F6230(a1);
    call_result_9 = sub_1401F6300((__int64)a1);
  }
  returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(returned_pointer, 4029, &callee_output_word);
  sub_1401E0F40(returned_pointer, 4007, &callee_output_word_2);
  sub_1401E0F40(returned_pointer, 10015, &callee_output_word_3);
  call_result = sub_1401E52C0(a4, a1[70], callee_output_word);
  if ( call_result <= 0 )
    return (unsigned int)-1; /* 0x1401EA92E: mov eax, 0xffffffff */
  {
    record_word_offset = 2 * a1[1] - 1;
    if ( callee_output_word / call_result == 10 )
      record_word_offset += a1[1];
    if ( a6 < record_word_offset )
      return (unsigned int)-2; /* 0x1401EA974: mov eax, 0xfffffffe */
    {
      scaled_index = 8LL * call_result + 15;
      if ( scaled_index <= 8LL * call_result )
        scaled_index = 0xFFFFFFFFFFFFFF0LL;
      alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_2 = alloca_result;
      call_result_6 = sub_1401E06F0(2);
      call_result_7 = sub_1401E06F0(1);
      scaled_index_2 = 4LL * (int)(21 * *a1) + 15;
      if ( scaled_index_2 <= 4LL * (int)(21 * *a1) )
        scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result = alloca_result_2;
      if ( a1[71] == 1 )
        sub_1401F68D0(callee_output_word_3, a3, (__int64)saved_alloca_result, call_result_9, (__int64)returned_pointer_2, call_result, 120, *a1, callee_output_word, a2, a1[67]);
      call_result_8 = sub_1401F7C80(a1, (__int64)scratch_buffer_3, call_result);
      if ( !callee_output_word_2 )
      {
        if ( a1[72] == -1000 )
        {
          unused_written_slot_2 = 3 * call_result_8;
          integer_quotient_7 = 24 * callee_output_word / call_result;
          if ( a6 >= 3 * call_result_8 / integer_quotient_7 )
          {
            unused_written_slot = 3 * call_result_8;
            integer_quotient_2 = 24 * callee_output_word / call_result;
            integer_quotient = 3 * call_result_8 / integer_quotient_2;
          }
          else
          {
            integer_quotient = a6;
          }
          a6 = integer_quotient;
        }
        else if ( a1[72] != -1 )
        {
          record_word_offset_2 = 3 * a1[72];
          integer_quotient_3 = 24 * callee_output_word / call_result;
          if ( record_word_offset <= record_word_offset_2 / integer_quotient_3 )
          {
            record_word_offset_3 = 3 * a1[72];
            integer_quotient_4 = 24 * callee_output_word / call_result;
            saved_record_word_offset = record_word_offset_3 / integer_quotient_4;
          }
          else
          {
            saved_record_word_offset = record_word_offset;
          }
          if ( a6 >= saved_record_word_offset )
          {
            record_word_offset_4 = 3 * a1[72];
            integer_quotient_5 = 24 * callee_output_word / call_result;
            if ( record_word_offset <= record_word_offset_4 / integer_quotient_5 )
            {
              record_word_offset_5 = 3 * a1[72];
              integer_quotient_6 = 24 * callee_output_word / call_result;
              saved_record_word_offset_2 = record_word_offset_5 / integer_quotient_6;
            }
            else
            {
              saved_record_word_offset_2 = record_word_offset;
            }
            input_value = saved_record_word_offset_2;
          }
          else
          {
            input_value = a6;
          }
          a6 = input_value;
        }
      }
      returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        record_pointer = returned_pointer;
        if ( i >= (int)a1[2] )
          returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_7));
        else
          returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_6));
        sub_1401E0F40(record_pointer, 4002, (unsigned int)scratch_buffer_3[i]);
        if ( a1[71] == 1 )
        {
          remaining_amount_2 = a1[72];
          if ( 50 * call_result < callee_output_word )
            remaining_amount_2 -= *a1 * 60 * (callee_output_word / call_result - 50);
          if ( remaining_amount_2 <= (int)(10000 * *a1) )
          {
            if ( remaining_amount_2 <= (int)(7000 * *a1) )
            {
              if ( remaining_amount_2 <= (int)(5000 * *a1) )
                sub_1401E0F40(record_pointer, 4008, 1101);
              else
                sub_1401E0F40(record_pointer, 4008, 1103);
            }
            else
            {
              sub_1401E0F40(record_pointer, 4008, 1104);
            }
          }
          else
          {
            sub_1401E0F40(record_pointer, 4008, 1105);
          }
          if ( i < (int)a1[2] )
          {
            sub_1401E0F40(record_pointer, 11002, 1002);
            sub_1401E0F40(record_pointer, 4022, 2);
          }
        }
        else if ( a1[71] == 2 )
        {
          sub_1401E0F40(record_pointer, 11002, 1002);
        }
      }
      returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(292));
      running_total = 0;
      for ( i = 0; i < (int)a1[1]; ++i )
      {
        sub_1401E37F0((__int64)scratch_buffer);
        record_pointer_2 = returned_pointer;
        if ( i >= (int)a1[2] )
        {
          call_result_5 = sub_1401E4DF0((int *)a1, i, -1);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            saved_alloca_result_2,
            1,
            a3,
            *a1,
            call_result_5,
            call_result,
            a10);
          returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_7));
          if ( a1[71] == 1 )
          {
            for ( j = 0; j < 21; ++j )
              scratch_buffer_2[j] = *(_DWORD *)&saved_alloca_result[84 * call_result_5 + 4 * j];
          }
          cached_call_result = call_result_5;
          integer_difference = -1;
        }
        else
        {
          call_result_3 = sub_1401E4CF0((int *)a1, i, -1);
          call_result_4 = sub_1401E4D70((int *)a1, i, -1);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            saved_alloca_result_2,
            2,
            a3,
            *a1,
            call_result_3,
            call_result,
            a10);
          ((void (           *)(_BYTE *, __int64, __int64, _QWORD, int, int, __int64))a2)(
            saved_alloca_result_2 + 4,
            2,
            a3,
            *a1,
            call_result_4,
            call_result,
            a10);
          returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_6));
          if ( a1[71] == 1 )
          {
            for ( k = 0; k < 21; ++k )
            {
              scratch_buffer_2[k] = *(_DWORD *)&saved_alloca_result[84 * call_result_3 + 4 * k];
              scratch_buffer_2[k + 21] = *(_DWORD *)&saved_alloca_result[84 * call_result_4 + 4 * k];
            }
          }
          cached_call_result = call_result_3;
          integer_difference = call_result_4;
        }
        if ( a1[71] == 1 )
          sub_1401E0F40(record_pointer_2, 10026, scratch_buffer_2);
        remaining_amount = a6 - running_total;
        if ( (int)(2 * (a1[1] - i) - 3) >= 0 )
          scaled_index_3 = 2 * (a1[1] - i) - 3;
        else
          scaled_index_3 = 0;
        remaining_amount -= scaled_index_3;
        if ( callee_output_word / call_result == 10 )
          remaining_amount -= a1[1] - i - 1;
        if ( remaining_amount >= 7662 )
          saved_remaining_amount = 7662;
        else
          saved_remaining_amount = remaining_amount;
        remaining_amount = saved_remaining_amount;
        if ( i != a1[1] - 1 )
        {
          if ( remaining_amount <= 253 )
            selection_code = 1;
          else
            selection_code = 2;
          remaining_amount -= selection_code;
        }
        if ( !callee_output_word_2 && i == a1[1] - 1 )
          sub_1401E0F40(record_pointer_2, 4002, (unsigned int)(8 * callee_output_word / call_result * remaining_amount));
        call_result_2 = sub_1401E5400(record_pointer_2, (__int64)saved_alloca_result_2, call_result, scratch_buffer_4, remaining_amount, a7, a3, a4, cached_call_result, integer_difference, *a1, a8, a9);
        if ( call_result_2 < 0 )
          return (unsigned int)call_result_2; /* 0x1401EB2B8: mov eax, dword ptr [rbp + 0x20] */
        if ( (unsigned int)sub_1401E3870((__int64)scratch_buffer, SR_VEC_LANES(128, scratch_buffer_4[0], i8), call_result_2) )
          return (unsigned int)-3; /* 0x1401EB2E6: mov eax, 0xfffffffd */
        comparison_result = !callee_output_word_2 && i == a1[1] - 1;
        comparison_result_2 = i != a1[1] - 1;
        integer_difference_2 = a6 - running_total;
        unknown_libname_998_result = unknown_libname_998((__int64)scratch_buffer);
        call_result_2 = sub_1401EA090((__int64)scratch_buffer, 0, unknown_libname_998_result, a5, integer_difference_2, comparison_result_2, comparison_result);
        a5 += call_result_2;
        running_total += call_result_2;
      }
    }
  }
  return (unsigned int)running_total; /* 0x1401EB3B4: mov eax, dword ptr [rbp + 0x30] */
}

//----- (00000001401EB3E0) ----------------------------------------------------
__int64            sub_1401EB3E0(
        int *a1,
        char *a2,
        int a3,
        __int64 a4,
        void (           *a5)(__int64, _QWORD, _QWORD, int *, int, int, __int64),
        int a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  int i;
  unsigned int call_result;
  int callee_output_word;
  unsigned int k;
  int m;
  int selection_flag;
  int call_result_2;
  int selection_flag_2;
  int call_result_3;
  unsigned int call_result_4;
  int integer_quotient;
  int call_result_5;
  BOOL comparison_result;
  unsigned int j;
  int *saved_alloca_result;
  int call_result_6;
  int call_result_7;
  int *returned_pointer;
  int *record_pointer;
  __int64 unused_local;
  int cached_integer_quotient;

  selection_flag = 0;
  if ( a6 <= 0 )
    return (unsigned int)-1; /* 0x1401EB41F: mov eax, 0xffffffff */
  if ( (unsigned int)sub_1401F1160((__int64)a1, 4029, &callee_output_word) )
    return (unsigned int)-3; /* 0x1401EB452: mov eax, 0xfffffffd */
  {
    if ( a6 >= 3 * (callee_output_word / 25) )
      integer_quotient = 3 * (callee_output_word / 25);
    else
      integer_quotient = a6;
    cached_integer_quotient = integer_quotient;
    scaled_index = 8LL * integer_quotient + 15;
    if ( scaled_index <= 8LL * integer_quotient )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(268));
    call_result_6 = sub_1401E2280(2);
    call_result_7 = sub_1401E2280(1);
    if ( !a3 )
      selection_flag = 1;
    if ( a3 < 0 )
      return (unsigned int)-1; /* 0x1401EB526: mov eax, 0xffffffff */
    if ( !selection_flag && a3 < 2 * a1[1] - 1 )
      return (unsigned int)-4; /* 0x1401EB549: mov eax, 0xfffffffc */
    {
      if ( !selection_flag )
      {
        call_result_2 = sub_1401F5F20(a2, a3, a1[1], callee_output_word);
        if ( call_result_2 < 0 )
          return (unsigned int)call_result_2; /* 0x1401EB57D: mov eax, dword ptr [rbp + 0x18] */
        if ( call_result_2 > cached_integer_quotient )
          return (unsigned int)-2; /* 0x1401EB592: mov eax, 0xfffffffe */
      }
      {
        for ( i = 0; i < a1[1]; ++i )
        {
          record_pointer = returned_pointer;
          if ( i >= a1[2] )
            call_result_5 = sub_1401E99B0(call_result_7);
          else
            call_result_5 = sub_1401E99B0(call_result_6);
          returned_pointer = (int *)((char *)returned_pointer + call_result_5);
          if ( !selection_flag && a3 <= 0 )
            return (unsigned int)-3; /* 0x1401EB60A: mov eax, 0xfffffffd */
          selection_flag_2 = 0;
          comparison_result = i != a1[1] - 1;
          call_result_3 = sub_1401E9360(record_pointer, a2, a3, (__int64)saved_alloca_result, cached_integer_quotient, a7, comparison_result, &selection_flag_2, a8);
          a2 += selection_flag_2;
          a3 -= selection_flag_2;
          if ( call_result_3 <= 0 )
            return (unsigned int)call_result_3; /* 0x1401EB6AD: mov eax, dword ptr [rbp + 0x20] */
          cached_integer_quotient = call_result_3;
          if ( i >= a1[2] )
          {
            for ( j = -1; ; j = call_result_4 )
            {
              call_result_4 = sub_1401E4DF0(a1, i, j);
              if ( call_result_4 == -1 )
                break;
              a5(a4, (unsigned int)*a1, call_result_4, saved_alloca_result, 1, cached_integer_quotient, a9);
            }
          }
          else
          {
            for ( k = -1; ; k = call_result )
            {
              call_result = sub_1401E4CF0(a1, i, k);
              if ( call_result == -1 )
                break;
              a5(a4, (unsigned int)*a1, call_result, saved_alloca_result, 2, cached_integer_quotient, a9);
            }
            for ( k = -1; ; k = call_result )
            {
              call_result = sub_1401E4D70(a1, i, k);
              if ( call_result == -1 )
                break;
              a5(a4, (unsigned int)*a1, call_result, saved_alloca_result + 1, 2, cached_integer_quotient, a9);
            }
          }
        }
        for ( m = 0; m < *a1; ++m )
        {
          if ( *((unsigned __int8 *)a1 + m + 12) == 255 )
            a5(a4, (unsigned int)*a1, (unsigned int)m, nullptr, 0, cached_integer_quotient, a9);
        }
      }
    }
  }
  return (unsigned int)cached_integer_quotient; /* 0x1401EB872: mov eax, dword ptr [rbp + 0x98] */
}

//----- (00000001401EB890) ----------------------------------------------------
__int64            sub_1401EB890(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  signed int i;
  signed int j;
  signed int k;
  signed int m;
  signed int loaded_word;
  int loaded_word_2;

  loaded_word_2 = *(_DWORD *)(a1 + 16);
  loaded_word = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < loaded_word; ++i )
    *(float *)(a2 + 4LL * i) = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860(a2, *(_QWORD *)(a1 + 8), loaded_word, loaded_word_2, loaded_word, a3);
  for ( j = 0; j < loaded_word; ++j )
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) * 0.0078125;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)loaded_word;
      if ( k >= loaded_word )
        break;
      *(float *)(a2 + 4LL * k) = SR_VEC_READ_LANES(128, sub_1401F2810(*(float *)(a2 + 4LL * k)), f32)[0];
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)loaded_word;
      if ( m >= loaded_word )
        break;
      *(float *)(a2 + 4LL * m) = sub_1401F2690(*(float *)(a2 + 4LL * m));
    }
  }
  return result;
}

//----- (00000001401EBA20) ----------------------------------------------------
__int64            sub_1401EBA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 unused_local;
  int i;
  int loaded_word;
  int scaled_index;
  int loaded_word_2;
  float component_delta;
  float weighted_sum;
  float float_buffer[32];
  float float_buffer_2[32];
  float float_buffer_3[32];
  float float_buffer_4[32];
  __int64 unused_local_2;

  loaded_word_2 = *(_DWORD *)(a1 + 24);
  loaded_word = *(_DWORD *)(a1 + 28);
  scaled_index = 3 * loaded_word;
  for ( i = 0; i < loaded_word; ++i )
    float_buffer[i] = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860((__int64)float_buffer, *(_QWORD *)(a1 + 8), loaded_word, loaded_word_2, scaled_index, a3);
  sub_1401F2860((__int64)float_buffer, *(_QWORD *)(a1 + 16), loaded_word, loaded_word, scaled_index, a2);
  for ( i = 0; i < loaded_word; ++i )
    LODWORD(float_buffer[i]) = SR_VEC_READ_LANES(128, sub_1401F2810(0.0078125 * float_buffer[i]), u32)[0];
  for ( i = 0; i < loaded_word; ++i )
    float_buffer_2[i] = (float)*(char *)(*(_QWORD *)a1 + i + loaded_word);
  sub_1401F2860((__int64)float_buffer_2, loaded_word + *(_QWORD *)(a1 + 8), loaded_word, loaded_word_2, scaled_index, a3);
  sub_1401F2860((__int64)float_buffer_2, loaded_word + *(_QWORD *)(a1 + 16), loaded_word, loaded_word, scaled_index, a2);
  for ( i = 0; i < loaded_word; ++i )
    LODWORD(float_buffer_2[i]) = SR_VEC_READ_LANES(128, sub_1401F2810(0.0078125 * float_buffer_2[i]), u32)[0];
  for ( i = 0; i < loaded_word; ++i )
    float_buffer_3[i] = (float)*(char *)(*(_QWORD *)a1 + i + 2 * loaded_word);
  for ( i = 0; i < loaded_word; ++i )
    float_buffer_4[i] = *(float *)(a2 + 4LL * i) * float_buffer_2[i];
  sub_1401F2860((__int64)float_buffer_3, 2 * loaded_word + *(_QWORD *)(a1 + 8), loaded_word, loaded_word_2, scaled_index, a3);
  sub_1401F2860((__int64)float_buffer_3, 2 * loaded_word + *(_QWORD *)(a1 + 16), loaded_word, loaded_word, scaled_index, (__int64)float_buffer_4);
  for ( i = 0; i < loaded_word; ++i )
  {
    weighted_sum = float_buffer[i] * *(float *)(a2 + 4LL * i);
    component_delta = 1.0 - float_buffer[i];
    float_buffer_3[i] = weighted_sum + (float)(component_delta * sub_1401F2690(0.0078125 * float_buffer_3[i]));
  }
  for ( i = 0; i < loaded_word; ++i )
    *(float *)(a2 + 4LL * i) = float_buffer_3[i];
  return (unsigned int)loaded_word; /* 0x1401EBE6E: mov eax, dword ptr [rsp + 0x34] */
}

//----- (00000001401EBEC0) ----------------------------------------------------
_WORD *           sub_1401EBEC0(_DWORD *a1, int a2)
{
  *a1 = sub_1401A13B0();
  a1[2] = a2;
  return sub_1401EBF00((__int64)a1);
}

//----- (00000001401EBF00) ----------------------------------------------------
_WORD *           sub_1401EBF00(__int64 a1)
{
  return crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 12)), 0, 0x36A8u);
}

//----- (00000001401EBF50) ----------------------------------------------------
__int64            sub_1401EBF50(_DWORD *a1, __int64 a2, int a3)
{
  __int64 result;
  int remaining_count;
  int remaining_count_2;
  int remaining_count_3;
  float saved_product_difference;
  float combined_products;
  float saved_combined_products;
  float combined_products_2;
  int element_index;
  int element_index_2;
  float weighted_sum;
  float k;
  float scaled_value;
  int i;
  int j;
  int m;
  float weighted_sum_2;
  float saved_weighted_sum;
  int comparison_result;
  float saved_weighted_sum_2;
  float weighted_sum_3;
  float saved_weighted_sum_3;
  int iteration_count;
  int remaining_count_4;
  int saved_remaining_count;
  float weighted_sum_4;
  int loaded_word;
  int loaded_word_2;
  float scaled_ratio;
  int float_word;
  float weighted_sum_5;
  float product_difference;
  float combined_products_3;
  float weighted_sum_6;
  float weighted_sum_7;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float saved_scaled_ratio;
  float saved_scaled_ratio_2;
  int comparison_result_2;
  float weighted_sum_8;
  float weighted_sum_9;
  float product_difference_2;
  float weighted_sum_10;

  remaining_count = a1[1862];
  comparison_result = a1[1861] - remaining_count + (a1[1861] - remaining_count < 0 ? 0x64 : 0);
  for ( a1[1863] += a3 / (a1[2] / 400); (int)a1[1863] >= 8; a1[1863] -= 8 )
    ++a1[1862];
  if ( (int)a1[1862] >= 100 )
    a1[1862] -= 100;
  if ( a3 > a1[2] / 50 && remaining_count != a1[1861] && ++remaining_count == 100 )
    remaining_count = 0;
  if ( remaining_count == a1[1861] )
    --remaining_count;
  if ( remaining_count < 0 )
    remaining_count = 99;
  saved_remaining_count = remaining_count;
  crt_memcpy((__m128i *)a2, (     __m128i *)&a1[16 * (__int64)remaining_count + 1901], 0x40u);
  result = a2;
  if ( *(_DWORD *)a2 )
  {
    weighted_sum_3 = *(float *)(a2 + 4);
    saved_weighted_sum_3 = weighted_sum_3;
    iteration_count = 1;
    remaining_count_4 = 6;
    for ( i = 0; i < 3; ++i )
    {
      if ( ++remaining_count == 100 )
        remaining_count = 0;
      if ( remaining_count == a1[1861] )
        break;
      if ( saved_weighted_sum_3 <= *(float *)&a1[16 * (__int64)remaining_count + 1902] )
        weighted_sum_4 = *(float *)&a1[16 * (__int64)remaining_count + 1902];
      else
        weighted_sum_4 = saved_weighted_sum_3;
      saved_weighted_sum_3 = weighted_sum_4;
      weighted_sum_3 = weighted_sum_3 + *(float *)&a1[16 * (__int64)remaining_count + 1902];
      ++iteration_count;
      if ( *(_DWORD *)(a2 + 32) <= a1[16 * (__int64)remaining_count + 1909] )
        loaded_word = a1[16 * (__int64)remaining_count + 1909];
      else
        loaded_word = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = loaded_word;
      --remaining_count_4;
    }
    remaining_count_2 = saved_remaining_count;
    for ( j = 0; j < remaining_count_4; ++j )
    {
      if ( --remaining_count_2 < 0 )
        remaining_count_2 = 99;
      if ( remaining_count_2 == a1[1861] )
        break;
      if ( *(_DWORD *)(a2 + 32) <= a1[16 * (__int64)remaining_count_2 + 1909] )
        loaded_word_2 = a1[16 * (__int64)remaining_count_2 + 1909];
      else
        loaded_word_2 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = loaded_word_2;
    }
    if ( (float)(weighted_sum_3 / (float)iteration_count) <= (float)(saved_weighted_sum_3 - 0.2) )
      scaled_ratio = saved_weighted_sum_3 - 0.2;
    else
      scaled_ratio = weighted_sum_3 / (float)iteration_count;
    *(float *)(a2 + 4) = scaled_ratio;
    element_index = saved_remaining_count;
    element_index_2 = saved_remaining_count;
    if ( comparison_result > 15 )
    {
      element_index_2 = saved_remaining_count + 5;
      if ( saved_remaining_count + 5 >= 100 )
        element_index_2 = saved_remaining_count - 95;
      element_index = saved_remaining_count + 1;
      if ( saved_remaining_count + 1 >= 100 )
        element_index = saved_remaining_count - 99;
    }
    saved_product_difference = 1.0;
    saved_combined_products = 0.0;
    weighted_sum = *(float *)&a1[16 * (__int64)element_index + 1910];
    if ( weighted_sum >= 0.1 )
      float_word = a1[16 * (__int64)element_index + 1910];
    else
      *(float *)&float_word = 0.1;
    scaled_value = *(float *)&float_word;
    if ( weighted_sum >= 0.1 )
      weighted_sum_5 = *(float *)&a1[16 * (__int64)element_index + 1910];
    else
      weighted_sum_5 = 0.1;
    for ( k = weighted_sum_5 * *(float *)&a1[16 * (__int64)element_index_2 + 1906];
          ;
          k = k + (float)(weighted_sum_7 * *(float *)&a1[16 * (__int64)element_index_2 + 1906]) )
    {
      if ( ++element_index_2 == 100 )
        element_index_2 = 0;
      if ( element_index_2 == a1[1861] )
        break;
      if ( ++element_index == 100 )
        element_index = 0;
      if ( element_index == a1[1861] )
        break;
      weighted_sum_2 = *(float *)&a1[16 * (__int64)element_index + 1910];
      if ( saved_product_difference <= (float)((float)(k - (float)(10.0 * (float)(weighted_sum - weighted_sum_2))) / scaled_value) )
        product_difference = saved_product_difference;
      else
        product_difference = (float)(k - (float)(10.0 * (float)(weighted_sum - weighted_sum_2))) / scaled_value;
      saved_product_difference = product_difference;
      if ( (float)((float)(k + (float)(10.0 * (float)(weighted_sum - weighted_sum_2))) / scaled_value) <= saved_combined_products )
        combined_products_3 = saved_combined_products;
      else
        combined_products_3 = (float)(k + (float)(10.0 * (float)(weighted_sum - weighted_sum_2))) / scaled_value;
      saved_combined_products = combined_products_3;
      if ( weighted_sum_2 >= 0.1 )
        weighted_sum_6 = *(float *)&a1[16 * (__int64)element_index + 1910];
      else
        weighted_sum_6 = 0.1;
      scaled_value = scaled_value + weighted_sum_6;
      if ( weighted_sum_2 >= 0.1 )
        weighted_sum_7 = *(float *)&a1[16 * (__int64)element_index + 1910];
      else
        weighted_sum_7 = 0.1;
    }
    *(float *)(a2 + 20) = k / scaled_value;
    if ( saved_product_difference <= (float)(k / scaled_value) )
      scaled_ratio_2 = saved_product_difference;
    else
      scaled_ratio_2 = k / scaled_value;
    if ( (float)(k / scaled_value) <= saved_combined_products )
      scaled_ratio_3 = saved_combined_products;
    else
      scaled_ratio_3 = k / scaled_value;
    if ( scaled_ratio_2 <= 0.0 )
      saved_scaled_ratio = 0.0;
    else
      saved_scaled_ratio = scaled_ratio_2;
    combined_products = saved_scaled_ratio;
    if ( scaled_ratio_3 >= 1.0 )
      saved_scaled_ratio_2 = 1.0;
    else
      saved_scaled_ratio_2 = scaled_ratio_3;
    combined_products_2 = saved_scaled_ratio_2;
    if ( comparison_result < 10 )
    {
      saved_weighted_sum = saved_scaled_ratio;
      saved_weighted_sum_2 = saved_scaled_ratio_2;
      remaining_count_3 = saved_remaining_count;
      for ( m = 0; ; ++m )
      {
        comparison_result_2 = a1[1859] - 1 >= 15 ? 15 : a1[1859] - 1;
        if ( m >= comparison_result_2 )
          break;
        if ( --remaining_count_3 < 0 )
          remaining_count_3 = 99;
        if ( *(float *)&a1[16 * (__int64)remaining_count_3 + 1906] <= saved_weighted_sum )
          weighted_sum_8 = *(float *)&a1[16 * (__int64)remaining_count_3 + 1906];
        else
          weighted_sum_8 = saved_weighted_sum;
        saved_weighted_sum = weighted_sum_8;
        if ( saved_weighted_sum_2 <= *(float *)&a1[16 * (__int64)remaining_count_3 + 1906] )
          weighted_sum_9 = *(float *)&a1[16 * (__int64)remaining_count_3 + 1906];
        else
          weighted_sum_9 = saved_weighted_sum_2;
        saved_weighted_sum_2 = weighted_sum_9;
      }
      if ( (float)(saved_weighted_sum - (float)(0.1 * weighted_sum)) >= 0.0 )
        product_difference_2 = saved_weighted_sum - (float)(0.1 * weighted_sum);
      else
        product_difference_2 = 0.0;
      if ( (float)(saved_weighted_sum_2 + (float)(0.1 * weighted_sum)) <= 1.0 )
        weighted_sum_10 = saved_weighted_sum_2 + (float)(0.1 * weighted_sum);
      else
        weighted_sum_10 = 1.0;
      combined_products = saved_scaled_ratio + (float)((float)(1.0 - (float)(0.1 * (float)comparison_result)) * (float)(product_difference_2 - saved_scaled_ratio));
      combined_products_2 = saved_scaled_ratio_2 + (float)((float)(1.0 - (float)(0.1 * (float)comparison_result)) * (float)(weighted_sum_10 - saved_scaled_ratio_2));
    }
    *(float *)(a2 + 24) = combined_products;
    *(float *)(a2 + 28) = combined_products_2;
    return a2;
  }
  return result;
}

//----- (00000001401ECBA0) ----------------------------------------------------
__int64            sub_1401ECBA0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void (           *a11)(__int64, int *, _QWORD, _QWORD, int, int, int),
        __int64 a12)
{
  int remaining_amount;
  signed int running_total;
  int record_word_offset;

  if ( a3 )
  {
    if ( 95 * a9 / 50 >= a4 - (a4 & 1) )
      record_word_offset = a4 - (a4 & 1);
    else
      record_word_offset = 95 * a9 / 50;
    remaining_amount = record_word_offset - a1[1860];
    running_total = a1[1860];
    while ( remaining_amount > 0 )
    {
      if ( a9 / 50 >= remaining_amount )
        sub_1401ED2D0((__int64)a1, a2, a3, remaining_amount, running_total, a6, a7, a8, a10, a11);
      else
        sub_1401ED2D0((__int64)a1, a2, a3, a9 / 50, running_total, a6, a7, a8, a10, a11);
      running_total += a9 / 50;
      remaining_amount -= a9 / 50;
    }
    a1[1860] = record_word_offset;
    a1[1860] -= a5;
  }
  return sub_1401EBF50(a1, a12, a5);
}

//----- (00000001401ECD80) ----------------------------------------------------
float            sub_1401ECD80(float *a1, __int64 a2, __int64 a3, int a4)
{
  float product_difference;
  float weighted_sum;
  float weighted_sum_2;
  float saved_weighted_sum;
  float component_sum;
  float weighted_sum_3;
  float weighted_sum_4;
  int i;
  float product_difference_2;
  float component_delta;
  float scaled_index;

  scaled_index = 0.0;
  for ( i = 0; i < a4 / 2; ++i )
  {
    weighted_sum = *(float *)(a3 + 8LL * i);
    product_difference_2 = weighted_sum - *a1;
    weighted_sum_3 = *a1 + (float)(0.60743707 * product_difference_2);
    *a1 = weighted_sum + (float)(0.60743707 * product_difference_2);
    saved_weighted_sum = weighted_sum_3;
    weighted_sum_2 = *(float *)(a3 + 4LL * (2 * i + 1));
    component_delta = weighted_sum_2 - a1[1];
    weighted_sum_4 = (float)(weighted_sum_3 + a1[1]) + (float)(0.15063 * component_delta);
    a1[1] = weighted_sum_2 + (float)(0.15063 * component_delta);
    product_difference = 0.15063 * (float)((float)-weighted_sum_2 - a1[2]);
    component_sum = (float)(saved_weighted_sum + a1[2]) + product_difference;
    a1[2] = product_difference - weighted_sum_2;
    scaled_index = scaled_index + (float)(component_sum * component_sum);
    *(float *)(a2 + 4LL * i) = 0.5 * weighted_sum_4;
  }
  return scaled_index;
}

//----- (00000001401ED000) ----------------------------------------------------
float              sub_1401ED000(
        void (           *a1)(__int64, int *, _QWORD, _QWORD, int, int, int),
        __int64 a2,
        __m128i *a3,
        float *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  unsigned __int64 scaled_index;
  void *alloca_result_2;
  int i;
  float scaled_ratio;
  void *Src;
  float unused_written_slot;
  int *p_i;
  __int64 unused_local;

  unused_written_slot = 0.0;
  if ( a5 )
  {
    if ( a10 == 48000 )
    {
      a5 *= 2;
      a6 *= 2;
    }
    else if ( a10 == 16000 )
    {
      a5 = 2 * a5 / 3;
      a6 = (int)(2 * a6) / 3;
    }
    record_word_offset = 4LL * a5 + 15;
    if ( record_word_offset <= 4LL * a5 )
      record_word_offset = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
    Src = alloca_result;
    a1(a2, (int *)Src, (unsigned int)a5, a6, a7, a8, a9);
    scaled_ratio = 0.000030517578f;
    if ( a8 == -2 )
    {
      scaled_ratio = scaled_ratio / (float)a9;
    }
    else if ( a8 > -1 )
    {
      scaled_ratio = scaled_ratio / 2.0;
    }
    for ( i = 0; i < a5; ++i )
      *((float *)Src + i) = *((float *)Src + i) * scaled_ratio;
    switch ( a10 )
    {
      case 48000:
        unused_written_slot = sub_1401ECD80(a4, (__int64)a3, (__int64)Src, a5);
        break;
      case 24000:
        crt_memcpy(a3, (     __m128i *)Src, 4LL * a5);
        break;
      case 16000:
        scaled_index = 4LL * (int)((unsigned)a5 * 3u) + 15;
        if ( scaled_index <= (unsigned __int64)(4LL * (int)((unsigned)a5 * 3u)) )
          scaled_index = 0xFFFFFFFFFFFFFF0LL;
        alloca_result_2 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
        p_i = (int *)alloca_result_2;
        for ( i = 0; i < a5; ++i )
        {
          p_i[3 * i] = *((_DWORD *)Src + i);
          p_i[3 * i + 1] = *((_DWORD *)Src + i);
          p_i[3 * i + 2] = *((_DWORD *)Src + i);
        }
        sub_1401ECD80(a4, (__int64)a3, (__int64)p_i, 3 * a5);
        break;
    }
  }
  return unused_written_slot;
}

//----- (00000001401ED2D0) ----------------------------------------------------
void               sub_1401ED2D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        signed int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (           *a10)(__int64, int *, _QWORD, _QWORD, int, int, int))
{
  float scaled_ratio;
  float weighted_sum;
  void *alloca_result;
  void *alloca_result_2;
  void *alloca_result_3;
  void *alloca_result_4;
  float float_word;
  float scaled_value;
  __int64 integer_difference;
  __int64 integer_difference_2;
  float log_result;
  float square_root;
  float log_result_2;
  float log_result_3;
  float square_root_2;
  float square_root_3;
  float square_root_4;
  float component_delta;
  float square_root_5;
  float log10_result;
  float square_root_6;
  char unused_local;
  char unused_local_2;
  char unused_local_3;
  char unused_local_4;
  int i;
  int j;
  int selection_code;
  CGlobalUtils *saved_alloca_result;
  float component_sum;
  int remaining_count;
  float component_sum_2;
  float scaled_ratio_2;
  float squared_component;
  __m128i *destination_buffer;
  float squared_component_2;
  float squared_component_3;
  float squared_component_4;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_ratio_3;
  float squared_length;
  float component_sum_3;
  float scaled_ratio_4;
  float combined_products;
  float weighted_sum_2;
  int m;
  int k;
  float cached_component_sum;
  float saved_scaled_ratio;
  float saved_scaled_value;
  float scaled_ratio_5;
  float saved_square_root;
  float scaled_ratio_6;
  int running_total;
  int selection_code_2;
  float weighted_sum_3;
  float product_difference;
  float combined_products_2;
  float squared_length_2;
  float cached_squared_length;
  int table_value;
  float component_sum_4;
  float saved_combined_products;
  float scaled_ratio_7;
  float comparison_operand;
  float component_sum_5;
  float combined_products_3;
  int table_value_2;
  float weighted_sum_4;
  float weighted_sum_5;
  char *saved_alloca_result_2;
  int saved_record_word_offset;
  int loaded_word;
  float scaled_value_4;
  float combined_products_4;
  float combined_products_5;
  float component_delta_2;
  float selected_scalar;
  float scaled_value_5;
  float component_delta_3;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float saved_weighted_sum;
  float component_delta_4;
  float scaled_value_6;
  float weighted_sum_9;
  float scaled_value_7;
  float weighted_sum_10;
  float weighted_sum_11;
  float scaled_ratio_8;
  float scaled_ratio_9;
  float combined_products_6;
  float component_delta_5;
  float unused_written_slot;
  float component_sum_6;
  float component_delta_6;
  float component_delta_7;
  float component_delta_8;
  float component_sum_7;
  int floor_result;
  float combined_products_7;
  float saved_squared_length;
  int integer_difference_3;
  float saved_component_sum;
  float combined_products_8;
  float weighted_sum_12;
  float selected_scalar_2;
  BOOL comparison_result;
  float scaled_value_8;
  int float_word_2;
  float combined_products_9;
  float weighted_sum_13;
  float scaled_value_9;
  float selected_scalar_3;
  BOOL comparison_result_2;
  float combined_products_10;
  float scaled_ratio_10;
  float saved_scaled_ratio_2;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  int loaded_word_5;
  char *saved_alloca_result_3;
  char *saved_alloca_result_4;
  float combined_products_11;
  float weighted_sum_14;
  float combined_products_12;
  int unused_written_slot_2;
  float combined_products_13;
  float saved_weighted_sum_2;
  float saved_weighted_sum_3;
  float unused_written_slot_3;
  BOOL call_result;
  float combined_products_14;
  float combined_products_15;
  float combined_products_16;
  __int64 integer_sum;
  __int64 integer_sum_2;
  __int64 integer_sum_3;
  _DWORD scratch_buffer[2];
  __int64 unused_written_slot_4;
  __int64 loaded_word_6;
  __int64 cached_i;
  float float_buffer[10];
  float float_buffer_2[40];
  float float_buffer_3[20];
  float float_buffer_4[20];
  _DWORD float_word_3[76];
  _BYTE float_word_4[1088];
  __int64 unused_local_5;
  int record_word_offset;

  record_word_offset = a4;
  selection_code = 480;
  selection_code_2 = 240;
  integer_sum = a1 + 12;
  integer_sum_2 = a1 + 972;
  integer_sum_3 = a1 + 1932;
  selected_scalar = 97.409088;
  scaled_ratio_5 = 0.0;
  remaining_count = 0;
  cached_component_sum = 0.0;
  saved_square_root = 0.0;
  if ( !*(_DWORD *)(a1 + 7460) )
  {
    *(_DWORD *)(a1 + 5772) = 240;
    *(_DWORD *)(a1 + 7460) = 1;
  }
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 10 )
    loaded_word_3 = *(_DWORD *)(a1 + 7436) + 1;
  else
    loaded_word_3 = 10;
  scaled_ratio_7 = 1.0 / (float)loaded_word_3;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 25 )
    loaded_word_4 = *(_DWORD *)(a1 + 7436) + 1;
  else
    loaded_word_4 = 25;
  scaled_ratio_10 = 1.0 / (float)loaded_word_4;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 100 )
    loaded_word_5 = *(_DWORD *)(a1 + 7436) + 1;
  else
    loaded_word_5 = 100;
  scaled_ratio = 1.0 / (float)loaded_word_5;
  saved_scaled_ratio = scaled_ratio;
  if ( *(int *)(a1 + 7436) <= 1 )
  {
    scaled_ratio = 1.0;
    saved_scaled_ratio = 1.0;
  }
  if ( *(_DWORD *)(a1 + 8) == 48000 )
  {
    record_word_offset = a4 / 2;
    a5 /= 2;
  }
  else if ( *(_DWORD *)(a1 + 8) == 16000 )
  {
    record_word_offset = 3 * a4 / 2;
    a5 = 3 * a5 / 2;
  }
  loaded_word_6 = *(_QWORD *)(a2 + 88);
  if ( record_word_offset >= 720 - *(_DWORD *)(a1 + 5772) )
    saved_record_word_offset = 720 - *(_DWORD *)(a1 + 5772);
  else
    saved_record_word_offset = record_word_offset;
  scaled_ratio = sub_1401ED000(
    a10,
    a3,
    (__m128i *)(a1 + 4LL * *(int *)(a1 + 5772) + 2892),
    (float *)(a1 + 7592),
    saved_record_word_offset,
    a5,
    a6,
    a7,
    a8,
    *(_DWORD *)(a1 + 8));
  *(float *)(a1 + 7456) = *(float *)(a1 + 7456) + scaled_ratio;
  if ( record_word_offset + *(_DWORD *)(a1 + 5772) >= 720 )
  {
    weighted_sum = *(float *)(a1 + 7456);
    saved_weighted_sum_3 = weighted_sum;
    destination_buffer = (__m128i *)(a1 + ((__int64)(int)(*(_DWORD *)(a1 + 7444))++ << 6) + 7604);
    if ( *(int *)(a1 + 7444) >= 100 )
      *(_DWORD *)(a1 + 7444) -= 100;
    call_result = sub_1401E5190(a1 + 2892, 720, 1, a9);
    alloca_result = alloca(3840);
    saved_alloca_result_3 = (char *)alloca_result;
    alloca_result_2 = alloca(3840);
    saved_alloca_result = (CGlobalUtils *)alloca_result_2;
    alloca_result_3 = alloca(960);
    saved_alloca_result_2 = (char *)alloca_result_3;
    alloca_result_4 = alloca(960);
    saved_alloca_result_4 = (char *)alloca_result_4;
    for ( i = 0; i < selection_code_2; ++i )
    {
      comparison_operand = flt_140282D70[i];
      *(float *)&saved_alloca_result_3[8 * i] = comparison_operand * *(float *)(a1 + 4LL * i + 2892);
      *(float *)&saved_alloca_result_3[8 * i + 4] = comparison_operand * *(float *)(a1 + 4LL * (i + selection_code_2) + 2892);
      *(float *)&saved_alloca_result_3[8 * (selection_code - i) - 8] = comparison_operand * *(float *)(a1 + 4LL * (selection_code - i - 1) + 2892);
      weighted_sum = comparison_operand * *(float *)(a1 + 4LL * (selection_code_2 + selection_code - i - 1) + 2892);
      *(float *)&saved_alloca_result_3[8 * (selection_code - i) - 4] = weighted_sum;
    }
    unused_written_slot_4 = a1 + 2892;
    crt_memcpy((__m128i *)(a1 + 2892), (     __m128i *)(a1 + 4812), 0x3C0u);
    loaded_word = record_word_offset - (720 - *(_DWORD *)(a1 + 5772));
    weighted_sum = sub_1401ED000(
      a10,
      a3,
      (__m128i *)(a1 + 3852),
      (float *)(a1 + 7592),
      loaded_word,
      a5 + 720 - *(_DWORD *)(a1 + 5772),
      a6,
      a7,
      a8,
      *(_DWORD *)(a1 + 8));
    *(float *)(a1 + 7456) = weighted_sum;
    *(_DWORD *)(a1 + 5772) = loaded_word + 240;
    if ( call_result )
    {
      running_total = *(_DWORD *)(a1 + 7444) - 2;
      running_total += running_total < 0 ? 0x64 : 0;
      crt_memcpy(destination_buffer, (     __m128i *)(a1 + ((__int64)running_total << 6) + 7604), 0x40u);
    }
    else
    {
      sub_1401A13C0(loaded_word_6, (__int64)saved_alloca_result_3, saved_alloca_result);
      for ( i = 1; i < selection_code_2; ++i )
      {
        combined_products_14 = *((float *)saved_alloca_result + 2 * i) + *((float *)saved_alloca_result + 2 * (selection_code - i));
        combined_products_15 = *((float *)saved_alloca_result + 2 * i + 1) - *((float *)saved_alloca_result + 2 * (selection_code - i) + 1);
        combined_products_16 = *((float *)saved_alloca_result + 2 * i + 1) + *((float *)saved_alloca_result + 2 * (selection_code - i) + 1);
        combined_products_11 = *((float *)saved_alloca_result + 2 * (selection_code - i)) - *((float *)saved_alloca_result + 2 * i);
        scaled_value_4 = 0.15915494 * sub_1401A6B90(combined_products_15, combined_products_14);
        combined_products_4 = scaled_value_4 - *(float *)(integer_sum + 4LL * i);
        combined_products_5 = combined_products_4 - *(float *)(integer_sum_2 + 4LL * i);
        scaled_value_5 = 0.15915494 * sub_1401A6B90(combined_products_11, combined_products_16);
        component_delta_3 = scaled_value_5 - scaled_value_4;
        component_delta_2 = (float)(scaled_value_5 - scaled_value_4) - combined_products_4;
        squared_component_3 = combined_products_5 - (float)(int)sub_1401AD3B0(combined_products_5);
        float_word = *(double *)SR_VEC_READ_LANES(128, sub_140244390(squared_component_3), u64);
        *(float *)&saved_alloca_result_4[4 * i] = float_word;
        squared_component_3 = squared_component_3 * squared_component_3;
        squared_component_3 = squared_component_3 * squared_component_3;
        squared_component = component_delta_2 - (float)(int)sub_1401AD3B0(component_delta_2);
        cached_i = i;
        scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(squared_component), u64);
        *(float *)&saved_alloca_result_4[4 * i] = *(float *)&saved_alloca_result_4[4 * cached_i] + scaled_value;
        squared_component = squared_component * squared_component;
        squared_component = squared_component * squared_component;
        weighted_sum_14 = 0.25 * (float)((float)(*(float *)(integer_sum_3 + 4LL * i) + squared_component_3) + (float)(2.0 * squared_component));
        *(float *)&saved_alloca_result_2[4 * i] = (float)(1.0 / (float)((float)((float)(640.0 * selected_scalar) * weighted_sum_14) + 1.0)) - 0.015;
        *(float *)&float_word_4[4 * i + 128] = (float)(1.0 / (float)((float)((float)(640.0 * selected_scalar) * squared_component) + 1.0)) - 0.015;
        *(float *)(integer_sum + 4LL * i) = scaled_value_5;
        *(float *)(integer_sum_2 + 4LL * i) = component_delta_3;
        *(float *)(integer_sum_3 + 4LL * i) = squared_component;
      }
      for ( i = 2; i < selection_code_2 - 1; ++i )
      {
        if ( *(float *)&float_word_4[4 * i + 124] <= *(float *)&float_word_4[4 * i + 132] )
          integer_difference = i + 1;
        else
          integer_difference = i - 1;
        weighted_sum_6 = *(float *)&float_word_4[4 * integer_difference + 128];
        if ( weighted_sum_6 <= *(float *)&float_word_4[4 * i + 128] )
        {
          if ( *(float *)&float_word_4[4 * i + 124] <= *(float *)&float_word_4[4 * i + 132] )
            integer_difference_2 = i + 1;
          else
            integer_difference_2 = i - 1;
          weighted_sum_7 = *(float *)&float_word_4[4 * integer_difference_2 + 128];
          weighted_sum_8 = weighted_sum_7;
        }
        else
        {
          weighted_sum_8 = *(float *)&float_word_4[4 * i + 128];
        }
        saved_weighted_sum = weighted_sum_8;
        if ( *(float *)&saved_alloca_result_2[4 * i] <= (float)(weighted_sum_8 - 0.1) )
          component_delta_4 = saved_weighted_sum - 0.1;
        else
          component_delta_4 = *(float *)&saved_alloca_result_2[4 * i];
        *(float *)&saved_alloca_result_2[4 * i] = 0.89999998 * component_delta_4;
      }
      scaled_ratio_2 = 0.0;
      saved_combined_products = 0.0;
      SR_VEC_LANES(128, destination_buffer[1], i32)[0] = 0;
      scaled_ratio_3 = 0.0;
      scaled_ratio_6 = 0.0;
      if ( !*(_DWORD *)(a1 + 7436) )
      {
        for ( j = 0; j < 18; ++j )
        {
          *(_DWORD *)(a1 + 4LL * j + 7008) = 1343554297;
          *(_DWORD *)(a1 + 4LL * j + 7080) = -803929351;
        }
      }
      scaled_ratio_4 = 0.0;
      scaled_value_3 = 0.0;
      squared_length = 0.0;
      scaled_value_6 = 2.0 * *(float *)saved_alloca_result;
      weighted_sum_9 = 2.0 * *((float *)saved_alloca_result + 1);
      squared_length = (float)(scaled_value_6 * scaled_value_6) + (float)(weighted_sum_9 * weighted_sum_9);
      for ( i = 1; i < 4; ++i )
      {
        combined_products_12 = (float)((float)((float)(*((float *)saved_alloca_result + 2 * i) * *((float *)saved_alloca_result + 2 * i))
                             + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i)) * *((float *)saved_alloca_result + 2 * (selection_code - i))))
                     + (float)(*((float *)saved_alloca_result + 2 * i + 1) * *((float *)saved_alloca_result + 2 * i + 1)))
             + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i) + 1) * *((float *)saved_alloca_result + 2 * (selection_code - i) + 1));
        squared_length = squared_length + combined_products_12;
      }
      log_result = log((float)(squared_length + 1.0e-10));
      float_buffer_2[0] = 0.72134751 * log_result;
      for ( j = 0; j < 18; ++j )
      {
        component_sum_2 = 0.0;
        weighted_sum_3 = 0.0;
        combined_products_3 = 0.0;
        for ( i = dword_140283130[j]; i < dword_140283130[j + 1]; ++i )
        {
          combined_products = (float)((float)((float)(*((float *)saved_alloca_result + 2 * i) * *((float *)saved_alloca_result + 2 * i))
                              + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i)) * *((float *)saved_alloca_result + 2 * (selection_code - i))))
                      + (float)(*((float *)saved_alloca_result + 2 * i + 1) * *((float *)saved_alloca_result + 2 * i + 1)))
              + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i) + 1) * *((float *)saved_alloca_result + 2 * (selection_code - i) + 1));
          component_sum_2 = component_sum_2 + combined_products;
          if ( *(float *)&saved_alloca_result_2[4 * i] >= 0.0 )
            scaled_value_7 = *(float *)&saved_alloca_result_2[4 * i];
          else
            scaled_value_7 = 0.0;
          weighted_sum_3 = weighted_sum_3 + (float)(combined_products * scaled_value_7);
          combined_products_3 = combined_products_3 + (float)((float)(combined_products * 2.0) * (float)(0.5 - *(float *)&saved_alloca_result_4[4 * i]));
        }
        if ( component_sum_2 >= 1000000000.0 )
        {
          SR_VEC_PTR_LANES(128, destination_buffer, i32)[0] = 0;
          return; /* native void analysis updater */
        }
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 5856 + 4LL * j) = component_sum_2;
        scaled_ratio_3 = scaled_ratio_3 + (float)(combined_products_3 / (float)(component_sum_2 + 1.0e-15));
        square_root = sqrt((float)(component_sum_2 + 1.0e-10));
        scaled_value_3 = scaled_value_3 + square_root;
        log_result_2 = log((float)(component_sum_2 + 1.0e-10));
        float_buffer_2[j + 20] = log_result_2;
        log_result_3 = log((float)(component_sum_2 + 1.0e-10));
        float_buffer_2[j + 1] = 0.72134751 * log_result_3;
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 6432 + 4LL * j) = float_buffer_2[j + 20];
        if ( !*(_DWORD *)(a1 + 7436) )
        {
          *(float *)(a1 + 4LL * j + 7008) = float_buffer_2[j + 20];
          *(_DWORD *)(a1 + 4LL * j + 7080) = *(_DWORD *)(a1 + 4LL * j + 7008);
        }
        if ( *(float *)(a1 + 4LL * j + 7080) > *(float *)(a1 + 4LL * j + 7008) + 7.5 )
        {
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - float_buffer_2[j + 20]) <= (float)(float_buffer_2[j + 20]
                                                                                - *(float *)(a1 + 4LL * j + 7008)) )
            *(float *)(a1 + 4LL * j + 7008) = *(float *)(a1 + 4LL * j + 7008) + 0.0099999998;
          else
            *(float *)(a1 + 4LL * j + 7080) = *(float *)(a1 + 4LL * j + 7080) - 0.0099999998;
        }
        if ( float_buffer_2[j + 20] <= *(float *)(a1 + 4LL * j + 7080) )
        {
          if ( *(float *)(a1 + 4LL * j + 7008) > float_buffer_2[j + 20] )
          {
            *(float *)(a1 + 4LL * j + 7008) = float_buffer_2[j + 20];
            if ( *(float *)(a1 + 4LL * j + 7080) <= (float)(*(float *)(a1 + 4LL * j + 7008) + 15.0) )
              weighted_sum_11 = *(float *)(a1 + 4LL * j + 7080);
            else
              weighted_sum_11 = *(float *)(a1 + 4LL * j + 7008) + 15.0;
            *(float *)(a1 + 4LL * j + 7080) = weighted_sum_11;
          }
        }
        else
        {
          *(float *)(a1 + 4LL * j + 7080) = float_buffer_2[j + 20];
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - 15.0) <= *(float *)(a1 + 4LL * j + 7008) )
            weighted_sum_10 = *(float *)(a1 + 4LL * j + 7008);
          else
            weighted_sum_10 = *(float *)(a1 + 4LL * j + 7080) - 15.0;
          *(float *)(a1 + 4LL * j + 7008) = weighted_sum_10;
        }
        scaled_ratio_4 = scaled_ratio_4
            + (float)((float)(float_buffer_2[j + 20] - *(float *)(a1 + 4LL * j + 7008))
                    / (float)((float)(*(float *)(a1 + 4LL * j + 7080) - *(float *)(a1 + 4LL * j + 7008))
                            + 0.0000099999997));
        weighted_sum_2 = 0.0;
        component_sum_5 = 0.0;
        for ( i = 0; i < 8; ++i )
        {
          square_root_2 = sqrt(*(float *)(a1 + 72LL * i + 5856 + 4LL * j));
          component_sum_5 = component_sum_5 + square_root_2;
          weighted_sum_2 = weighted_sum_2 + *(float *)(a1 + 72LL * i + 5856 + 4LL * j);
        }
        square_root_3 = sqrt((float)(8.0 * weighted_sum_2) + 1.0e-15);
        if ( (float)(component_sum_5 / square_root_3) <= 0.99000001 )
        {
          square_root_4 = sqrt((float)(8.0 * weighted_sum_2) + 1.0e-15);
          scaled_ratio_8 = component_sum_5 / square_root_4;
        }
        else
        {
          scaled_ratio_8 = 0.99000001;
        }
        squared_component_2 = (float)(scaled_ratio_8 * scaled_ratio_8) * (float)(scaled_ratio_8 * scaled_ratio_8);
        scaled_ratio_6 = scaled_ratio_6 + squared_component_2;
        if ( (float)(weighted_sum_3 / (float)(component_sum_2 + 1.0e-15)) <= (float)(squared_component_2 * *(float *)(a1 + 4LL * j + 5776)) )
          scaled_ratio_9 = squared_component_2 * *(float *)(a1 + 4LL * j + 5776);
        else
          scaled_ratio_9 = weighted_sum_3 / (float)(component_sum_2 + 1.0e-15);
        *(float *)&float_word_3[j + 28] = scaled_ratio_9;
        scaled_ratio_2 = scaled_ratio_2 + *(float *)&float_word_3[j + 28];
        if ( j >= 9 )
          scaled_ratio_2 = scaled_ratio_2 - *(float *)&float_word_3[j + 19];
        if ( saved_combined_products <= (float)((float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * scaled_ratio_2) )
          combined_products_6 = (float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * scaled_ratio_2;
        else
          combined_products_6 = saved_combined_products;
        saved_combined_products = combined_products_6;
        scaled_ratio_5 = scaled_ratio_5 + (float)(*(float *)&float_word_3[j + 28] * (float)(j - 8));
        *(_DWORD *)(a1 + 4LL * j + 5776) = float_word_3[j + 28];
      }
      float_buffer_4[0] = float_buffer_2[0];
      float_buffer_3[0] = float_buffer_2[0] - 2.5;
      for ( j = 1; j < 19; ++j )
      {
        product_difference = (float)(2.0 * (float)(dword_140283130[j] - dword_140283130[j - 1])) / 4.0;
        if ( float_buffer_2[j] <= (float)(float_buffer_4[j - 1] + product_difference) )
          component_delta_5 = float_buffer_2[j];
        else
          component_delta_5 = float_buffer_4[j - 1] + product_difference;
        float_buffer_4[j] = component_delta_5;
        if ( (float)(float_buffer_3[j - 1] - product_difference) <= (float)(float_buffer_2[j] - 2.5) )
          component_delta = float_buffer_2[j] - 2.5;
        else
          component_delta = float_buffer_3[j - 1] - product_difference;
        unused_written_slot = component_delta;
        float_buffer_3[j] = component_delta;
      }
      for ( j = 16; j >= 0; --j )
      {
        combined_products_2 = (float)(2.0 * (float)(dword_140283130[j + 1] - dword_140283130[j])) / 4.0;
        if ( float_buffer_4[j] <= (float)(float_buffer_4[j + 1] + combined_products_2) )
          component_sum_6 = float_buffer_4[j];
        else
          component_sum_6 = float_buffer_4[j + 1] + combined_products_2;
        float_buffer_4[j] = component_sum_6;
        if ( (float)(float_buffer_3[j + 1] - combined_products_2) <= float_buffer_3[j] )
          component_delta_6 = float_buffer_3[j];
        else
          component_delta_6 = float_buffer_3[j + 1] - combined_products_2;
        float_buffer_3[j] = component_delta_6;
      }
      for ( j = 0; j < 19; ++j )
      {
        if ( (float)(float_buffer_3[j] - float_buffer_2[j]) >= 0.0 )
          component_delta_7 = float_buffer_3[j] - float_buffer_2[j];
        else
          component_delta_7 = 0.0;
        if ( (float)(float_buffer_2[j] - (float)(float_buffer_4[j] + 2.5)) >= 0.0 )
          component_delta_8 = float_buffer_2[j] - (float)(float_buffer_4[j] + 2.5);
        else
          component_delta_8 = 0.0;
        component_sum_7 = component_delta_7 + component_delta_8;
        if ( (int)floor((float)(64.0 * (float)(component_delta_7 + component_delta_8)) + 0.5) <= 255 )
          floor_result = (int)floor((float)(64.0 * component_sum_7) + 0.5);
        else
          floor_result = 255;
        SR_VEC_LANES(128, destination_buffer[2], i8)[j + 12] = floor_result;
      }
      for ( i = 0; i < 8; ++i )
      {
        cached_squared_length = 9.9999999e14;
        for ( k = 0; k < 8; ++k )
        {
          squared_length_2 = 0.0;
          for ( m = 0; m < 18; ++m )
          {
            combined_products_7 = *(float *)(a1 + 72LL * i + 6432 + 4LL * m) - *(float *)(a1 + 72LL * k + 6432 + 4LL * m);
            squared_length_2 = squared_length_2 + (float)(combined_products_7 * combined_products_7);
          }
          if ( k != i )
          {
            if ( squared_length_2 <= cached_squared_length )
              saved_squared_length = squared_length_2;
            else
              saved_squared_length = cached_squared_length;
            cached_squared_length = saved_squared_length;
          }
        }
        saved_square_root = saved_square_root + cached_squared_length;
      }
      square_root_5 = sqrt((float)((float)(saved_square_root / 8.0) / 18.0));
      saved_square_root = square_root_5;
      saved_scaled_value = 0.0;
      remaining_count = 0;
      cached_component_sum = 0.0;
      if ( a9 - 8 >= 0 )
        integer_difference_3 = a9 - 8;
      else
        integer_difference_3 = 0;
      unused_written_slot_2 = 1;
      squared_component_4 = 0.00056999997 / (float)(1 << integer_difference_3);
      squared_component_4 = squared_component_4 * squared_component_4;
      component_sum_4 = 0.0;
      component_sum_3 = 0.0;
      for ( j = 0; j < 18; ++j )
      {
        component_sum = 0.0;
        table_value = dword_140283130[j];
        table_value_2 = dword_140283130[j + 1];
        for ( i = table_value; i < table_value_2; ++i )
        {
          combined_products_13 = (float)((float)((float)(*((float *)saved_alloca_result + 2 * i) * *((float *)saved_alloca_result + 2 * i))
                               + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i)) * *((float *)saved_alloca_result + 2 * (selection_code - i))))
                       + (float)(*((float *)saved_alloca_result + 2 * i + 1) * *((float *)saved_alloca_result + 2 * i + 1)))
               + (float)(*((float *)saved_alloca_result + 2 * (selection_code - i) + 1) * *((float *)saved_alloca_result + 2 * (selection_code - i) + 1));
          component_sum = component_sum + combined_products_13;
        }
        if ( cached_component_sum <= component_sum )
          saved_component_sum = component_sum;
        else
          saved_component_sum = cached_component_sum;
        cached_component_sum = saved_component_sum;
        if ( table_value >= 64 )
          component_sum_3 = component_sum_3 + component_sum;
        else
          component_sum_4 = component_sum_4 + component_sum;
        if ( (float)((float)(1.0 - saved_scaled_ratio) * *(float *)(a1 + 4LL * j + 7152)) <= component_sum )
          combined_products_8 = component_sum;
        else
          combined_products_8 = (float)(1.0 - saved_scaled_ratio) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = combined_products_8;
        if ( component_sum <= *(float *)(a1 + 4LL * j + 7152) )
          weighted_sum_12 = *(float *)(a1 + 4LL * j + 7152);
        else
          weighted_sum_12 = component_sum;
        saved_weighted_sum_2 = weighted_sum_12;
        if ( (float)(component_sum * 1000000000.0) > cached_component_sum
          && (saved_weighted_sum_2 > (float)((float)(3.0 * squared_component_4) * (float)(table_value_2 - table_value)) || component_sum > (float)(squared_component_4 * (float)(table_value_2 - table_value))) )
        {
          remaining_count = j + 1;
        }
        if ( *(_DWORD *)(a1 + 5852) < j + 1 )
          selected_scalar_2 = 0.050000001;
        else
          selected_scalar_2 = 0.0099999998;
        comparison_result = (float)(selected_scalar_2 * saved_scaled_value) > component_sum;
        float_word_3[j + 56] = comparison_result;
        if ( (float)(0.050000001 * saved_scaled_value) <= component_sum )
          scaled_value_8 = component_sum;
        else
          scaled_value_8 = 0.050000001 * saved_scaled_value;
        saved_scaled_value = scaled_value_8;
      }
      if ( *(_DWORD *)(a1 + 8) == 48000 )
      {
        scaled_value_2 = saved_weighted_sum_3 * 0.00027777778;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          *(float *)&float_word_2 = 10.0;
        else
          *(float *)&float_word_2 = 30.0;
        scaled_value_9 = *(float *)&float_word_2;
        component_sum_3 = component_sum_3 + scaled_value_2;
        if ( (float)((float)(1.0 - saved_scaled_ratio) * *(float *)(a1 + 4LL * j + 7152)) <= scaled_value_2 )
          combined_products_9 = scaled_value_2;
        else
          combined_products_9 = (float)(1.0 - saved_scaled_ratio) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = combined_products_9;
        if ( scaled_value_2 <= *(float *)(a1 + 4LL * j + 7152) )
          weighted_sum_13 = *(float *)(a1 + 4LL * j + 7152);
        else
          weighted_sum_13 = scaled_value_2;
        unused_written_slot_3 = weighted_sum_13;
        if ( weighted_sum_13 > (float)((float)((float)(3.0 * scaled_value_9) * squared_component_4) * 160.0) || scaled_value_2 > (float)((float)(scaled_value_9 * squared_component_4) * 160.0) )
          remaining_count = 20;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          selected_scalar_3 = 0.0099999998;
        else
          selected_scalar_3 = 0.050000001;
        comparison_result_2 = (float)(selected_scalar_3 * saved_scaled_value) > scaled_value_2;
        float_word_3[j + 56] = comparison_result_2;
      }
      if ( component_sum_3 <= component_sum_4 )
        SR_VEC_LANES(128, destination_buffer[2], i32)[2] = 1065353216;
      else
        *(float *)&SR_VEC_LANES(128, destination_buffer[2], i32)[2] = component_sum_4 / component_sum_3;
      if ( remaining_count == 20 && float_word_3[74] )
      {
        remaining_count -= 2;
      }
      else if ( remaining_count > 0 && remaining_count <= 18 && float_word_3[remaining_count + 55] )
      {
        --remaining_count;
      }
      if ( *(int *)(a1 + 7436) <= 2 )
        remaining_count = 20;
      log10_result = log10(scaled_value_3);
      scaled_value_3 = 20.0 * log10_result;
      if ( (float)(*(float *)(a1 + 7424) - 0.003) <= (float)(20.0 * log10_result) )
        combined_products_10 = scaled_value_3;
      else
        combined_products_10 = *(float *)(a1 + 7424) - 0.003;
      *(float *)(a1 + 7424) = combined_products_10;
      *(float *)(a1 + 7428) = *(float *)(a1 + 7428) * (float)(1.0 - scaled_ratio_10);
      if ( (float)(*(float *)(a1 + 7424) - 30.0) > scaled_value_3 )
        *(float *)(a1 + 7428) = *(float *)(a1 + 7428) + scaled_ratio_10;
      for ( i = 0; i < 8; ++i )
      {
        weighted_sum_4 = 0.0;
        for ( j = 0; j < 16; ++j )
          weighted_sum_4 = weighted_sum_4 + (float)(flt_140282B70[16 * i + j] * float_buffer_2[j + 20]);
        float_buffer[i] = weighted_sum_4;
      }
      for ( i = 0; i < 8; ++i )
      {
        weighted_sum_5 = 0.0;
        for ( j = 0; j < 16; ++j )
          weighted_sum_5 = weighted_sum_5
              + (float)((float)(flt_140282B70[16 * i + j] * 0.5)
                      * (float)(*(float *)(a1 + 4LL * j + 7080) + *(float *)(a1 + 4LL * j + 7008)));
        *(float *)&float_word_3[i + 48] = weighted_sum_5;
      }
      scaled_ratio_6 = scaled_ratio_6 / 18.0;
      scaled_ratio_4 = scaled_ratio_4 / 18.0;
      if ( *(int *)(a1 + 7436) < 10 )
        scaled_ratio_4 = 0.5;
      scaled_ratio_3 = scaled_ratio_3 / 18.0;
      *(float *)SR_VEC_LANES(128, destination_buffer[1], i32) = scaled_ratio_3 + (float)((float)(1.0 - scaled_ratio_3) * scaled_ratio_4);
      scaled_ratio_2 = saved_combined_products / 9.0;
      if ( (float)(saved_combined_products / 9.0) <= (float)(*(float *)(a1 + 5848) * 0.80000001) )
        saved_scaled_ratio_2 = *(float *)(a1 + 5848) * 0.80000001;
      else
        saved_scaled_ratio_2 = scaled_ratio_2;
      scaled_ratio_2 = saved_scaled_ratio_2;
      *(float *)(a1 + 5848) = saved_scaled_ratio_2;
      scaled_ratio_5 = scaled_ratio_5 / 64.0;
      *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[2] = scaled_ratio_5;
      *(_DWORD *)(a1 + 7432) = (*(_DWORD *)(a1 + 7432) + 1) % 8;
      if ( *(_DWORD *)(a1 + 7436) + 1 >= 10000 )
        loaded_word_2 = 10000;
      else
        loaded_word_2 = *(_DWORD *)(a1 + 7436) + 1;
      *(_DWORD *)(a1 + 7436) = loaded_word_2;
      *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[1] = scaled_ratio_2;
      for ( i = 0; i < 4; ++i )
        *(float *)&float_word_3[i] = (float)((float)((float)(-0.12299 * (float)(float_buffer[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                           + (float)(0.49195001
                                                   * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                           + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                                   + (float)(0.69692999 * *(float *)(a1 + 4LL * (i + 8) + 7228)))
                           - (float)(1.4349 * *(float *)(a1 + 4LL * i + 7356));
      for ( i = 0; i < 4; ++i )
        *(float *)(a1 + 4LL * i + 7356) = (float)((float)(1.0 - scaled_ratio_7) * *(float *)(a1 + 4LL * i + 7356))
                                        + (float)(scaled_ratio_7 * float_buffer[i]);
      for ( i = 0; i < 4; ++i )
        *(float *)&float_word_3[i + 4] = (float)(0.63246 * (float)(float_buffer[i] - *(float *)(a1 + 4LL * (i + 24) + 7228)))
                               + (float)(0.31623
                                       * (float)(*(float *)(a1 + 4LL * i + 7228) - *(float *)(a1 + 4LL * (i + 16) + 7228)));
      for ( i = 0; i < 3; ++i )
        *(float *)&float_word_3[i + 8] = (float)((float)(0.53451997 * (float)(float_buffer[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                       - (float)(0.26725999
                                               * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                       + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                               - (float)(0.53451997 * *(float *)(a1 + 4LL * (i + 8) + 7228));
      if ( *(int *)(a1 + 7436) > 5 )
      {
        for ( i = 0; i < 9; ++i )
          *(float *)(a1 + 4LL * i + 7388) = (float)((float)(1.0 - scaled_ratio_7) * *(float *)(a1 + 4LL * i + 7388))
                                          + (float)((float)(scaled_ratio_7 * *(float *)&float_word_3[i]) * *(float *)&float_word_3[i]);
      }
      for ( i = 0; i < 4; ++i )
        *(float *)&float_word_3[i] = float_buffer[i] - *(float *)&float_word_3[i + 48];
      for ( i = 0; i < 8; ++i )
      {
        *(_DWORD *)(a1 + 4LL * (i + 24) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 16) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 16) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 8) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 8) + 7228) = *(_DWORD *)(a1 + 4LL * i + 7228);
        *(float *)(a1 + 4LL * i + 7228) = float_buffer[i];
      }
      for ( i = 0; i < 9; ++i )
      {
        square_root_6 = sqrt(*(float *)(a1 + 4LL * i + 7388));
        *(float *)&float_word_3[i + 11] = square_root_6 - flt_140283180[i];
      }
      *(float *)&float_word_3[18] = saved_square_root - 0.77999997;
      *(float *)&float_word_3[20] = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[1] - 0.154723;
      *(float *)&float_word_3[21] = *(float *)SR_VEC_LANES(128, destination_buffer[1], i32) - 0.72464299;
      *(float *)&float_word_3[22] = scaled_ratio_6 - 0.74371701;
      *(float *)&float_word_3[23] = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[2] + 0.069215998;
      *(float *)&float_word_3[24] = *(float *)(a1 + 7428) - 0.067929998;
      sub_1401EB890((__int64)&off_140282AF8, (__int64)float_word_4, (__int64)float_word_3);
      sub_1401EBA20((__int64)&off_140282B18, a1 + 7464, (__int64)float_word_4);
      sub_1401EB890((__int64)&off_140282B38, (__int64)scratch_buffer, a1 + 7464);
      SR_VEC_LANES(128, destination_buffer[2], i32)[1] = scratch_buffer[1];
      SR_VEC_LANES(128, destination_buffer[1], i32)[1] = scratch_buffer[0];
      SR_VEC_LANES(128, destination_buffer[2], i32)[0] = remaining_count;
      *(_DWORD *)(a1 + 5852) = remaining_count;
      *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[3] = scaled_ratio_3;
      SR_VEC_PTR_LANES(128, destination_buffer, i32)[0] = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 5772) += record_word_offset;
  }
  return; /* native void analysis updater */
}

// 1401EF07D: conditional instruction was optimized away because %var_8FC.4>=13

//----- (00000001401F0320) ----------------------------------------------------
__int64            sub_1401F0320(int a1, int a2)
{
  int call_result;
  int call_result_2;
  int call_result_3;
  int call_result_4;

  if ( a1 < 1 || a2 > a1 || a2 < 0 )
    return 0;
  call_result = sub_1401E06F0(2);
  call_result_3 = sub_1401E06F0(1);
  call_result_2 = sub_1401E99B0(292);
  call_result_4 = sub_1401E99B0(call_result) * a2 + call_result_2;
  return (unsigned int)sub_1401E99B0(call_result_3) * (a1 - a2) + call_result_4;
}

//----- (00000001401F03D0) ----------------------------------------------------
__int64            sub_1401F03D0(signed int a1, int a2)
{
  int scaled_index;
  int scaled_index_2;
  unsigned int running_total;

  if ( a2 )
  {
    if ( a2 == 1 && a1 <= 8 && a1 >= 1 )
    {
      scaled_index_2 = dword_140281E80[4 * a1 - 4];
      scaled_index = dword_140281E80[4 * a1 - 3];
    }
    else if ( a2 == 255 )
    {
      scaled_index_2 = a1;
      scaled_index = 0;
    }
    else
    {
      if ( a2 != 2 )
        return 0;
      if ( !(unsigned int)sub_1401F63C0(a1, &scaled_index_2, &scaled_index) )
        return 0;
    }
  }
  else if ( a1 == 1 )
  {
    scaled_index_2 = 1;
    scaled_index = 0;
  }
  else
  {
    if ( a1 != 2 )
      return 0;
    scaled_index_2 = 1;
    scaled_index = 1;
  }
  running_total = sub_1401F0320(scaled_index_2, scaled_index);
  if ( a1 > 2 )
    running_total += 484 * a1;
  return running_total;
}

//----- (00000001401F0500) ----------------------------------------------------
int *           sub_1401F0500(unsigned int a1, int a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int call_result;
  int call_result_2;
  int *call_result_3;

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    call_result = sub_1401F0320(a3, a4);
    call_result_3 = (int *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401F0780(call_result_3, a1, a2, a3, a4, a5, a6);
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        call_result_3 = nullptr;
      }
      if ( a7 )
        *a7 = call_result_2;
      return call_result_3;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -1;
    return nullptr;
  }
}

//----- (00000001401F0630) ----------------------------------------------------
int *           sub_1401F0630(unsigned int a1, signed int a2, int a3, int *a4, int *a5, _BYTE *a6, int a7, _DWORD *a8)
{
  int call_result;
  int call_result_2;
  int *call_result_3;

  if ( a2 <= 255 && a2 >= 1 )
  {
    call_result = sub_1401F03D0(a2, a3);
    if ( call_result )
    {
      call_result_3 = (int *)sub_1401A6AA0(call_result);
      if ( call_result_3 )
      {
        call_result_2 = sub_1401F07E0(call_result_3, a1, a2, a3, a4, a5, a6, a7);
        if ( call_result_2 )
        {
          sub_1401A6AC0(call_result_3);
          call_result_3 = nullptr;
        }
        if ( a8 )
          *a8 = call_result_2;
        return call_result_3;
      }
      else
      {
        if ( a8 )
          *a8 = -7;
        return nullptr;
      }
    }
    else
    {
      if ( a8 )
        *a8 = -5;
      return nullptr;
    }
  }
  else
  {
    if ( a8 )
      *a8 = -1;
    return nullptr;
  }
}

//----- (00000001401F0780) ----------------------------------------------------
__int64            sub_1401F0780(int *a1, unsigned int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  return sub_1401F7450(a1, a2, a3, a4, a5, a6, a7, 0);
}

//----- (00000001401F07E0) ----------------------------------------------------
__int64            sub_1401F07E0(int *a1, unsigned int a2, signed int a3, int a4, int *a5, int *a6, _BYTE *a7, int a8)
{
  int k;
  int m;
  signed int i;
  signed int j;

  if ( a3 > 255 || a3 < 1 )
    return 0xFFFFFFFFLL;
  a1[68] = -1;
  if ( a4 )
  {
    if ( a4 == 1 && a3 <= 8 )
    {
      *a5 = dword_140281E80[4 * a3 - 4];
      *a6 = dword_140281E80[4 * a3 - 3];
      for ( i = 0; i < a3; ++i )
        a7[i] = *((_BYTE *)&dword_140281E80[4 * a3 - 2] + i);
      if ( a3 >= 6 )
        a1[68] = *a5 - 1;
    }
    else if ( a4 == 255 )
    {
      *a5 = a3;
      *a6 = 0;
      for ( j = 0; j < a3; ++j )
        a7[j] = j;
    }
    else
    {
      if ( a4 != 2 )
        return 4294967291LL;
      if ( !(unsigned int)sub_1401F63C0(a3, a5, a6) )
        return 0xFFFFFFFFLL;
      for ( k = 0; k < *a5 - *a6; ++k )
        a7[k] = k + 2 * *(_BYTE *)a6;
      for ( m = 0; m < 2 * *a6; ++m )
        a7[*a5 - *a6 + m] = m;
    }
  }
  else if ( a3 == 1 )
  {
    *a5 = 1;
    *a6 = 0;
    *a7 = 0;
  }
  else
  {
    if ( a3 != 2 )
      return 4294967291LL;
    *a5 = 1;
    *a6 = 1;
    *a7 = 0;
    a7[1] = 1;
  }
  if ( a3 > 2 && a4 == 1 )
    return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 1);
  if ( a4 == 2 )
    return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 2);
  return sub_1401F7450(a1, a2, a3, *a5, *a6, (__int64)a7, a8, 0);
}

// 1401F08DF: conditional instruction was optimized away because r8d.4 is in (1..8)

//----- (00000001401F0B70) ----------------------------------------------------
__int64            sub_1401F0B70(unsigned int *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA7F0(
           a1,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F7E30,
           a2,
           a3,
           a4,
           a5,
           16,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
           0,
           0);
}

//----- (00000001401F0BF0) ----------------------------------------------------
__int64            sub_1401F0BF0(unsigned int *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  return sub_1401EA7F0(
           a1,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F7DB0,
           a2,
           a3,
           a4,
           a5,
           24,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1,
           0);
}

//----- (00000001401F0C70) ----------------------------------------------------
void            sub_1401F0C70(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F0C90) ----------------------------------------------------
__int64 sub_1401F0C90(int *a1, int a2, ...)
{
  va_list va;

  va_start(va, a2);
  return (unsigned int)sub_1401E3F90(a1, a2, (__int64 *)va);
}

//----- (00000001401F0CE0) ----------------------------------------------------
__int64            sub_1401F0CE0(int a1, int a2)
{
  int call_result;
  int call_result_2;
  int call_result_3;
  int call_result_4;

  if ( a1 < 1 || a2 > a1 || a2 < 0 )
    return 0;
  call_result = sub_1401E2280(2);
  call_result_3 = sub_1401E2280(1);
  call_result_2 = sub_1401E99B0(268);
  call_result_4 = sub_1401E99B0(call_result) * a2 + call_result_2;
  return (unsigned int)sub_1401E99B0(call_result_3) * (a1 - a2) + call_result_4;
}

//----- (00000001401F0D90) ----------------------------------------------------
int *           sub_1401F0D90(int a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  int call_result;
  int call_result_2;
  int *call_result_3;

  if ( a2 <= 255 && a2 >= 1 && a4 <= a3 && a3 >= 1 && a4 >= 0 && a3 <= 255 - a4 )
  {
    call_result = sub_1401F0CE0(a3, a4);
    call_result_3 = (int *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401F0EA0(call_result_3, a1, a2, a3, a4, a5);
      if ( a6 )
        *a6 = call_result_2;
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        return nullptr;
      }
      return call_result_3;
    }
    else
    {
      if ( a6 )
        *a6 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a6 )
      *a6 = -1;
    return nullptr;
  }
}

//----- (00000001401F0EA0) ----------------------------------------------------
__int64            sub_1401F0EA0(int *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int i;
  int j;
  unsigned int call_result;
  unsigned int call_result_2;
  int call_result_3;
  int call_result_4;
  int *returned_pointer;

  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  returned_pointer = (int *)((char *)a1 + (int)sub_1401E99B0(268));
  call_result_3 = sub_1401E2280(2);
  call_result_4 = sub_1401E2280(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    call_result = sub_1401E23F0(returned_pointer, a2, 2);
    if ( call_result )
      return call_result;
    returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_3));
  }
  while ( j < a1[1] )
  {
    call_result_2 = sub_1401E23F0(returned_pointer, a2, 1);
    if ( call_result_2 )
      return call_result_2;
    returned_pointer = (int *)((char *)returned_pointer + (int)sub_1401E99B0(call_result_4));
    ++j;
  }
  return 0;
}

//----- (00000001401F1080) ----------------------------------------------------
__int64            sub_1401F1080(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  return sub_1401EB3E0(
           a1,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F6160,
           a5,
           a6,
           1,
           0);
}

//----- (00000001401F10F0) ----------------------------------------------------
__int64            sub_1401F10F0(int *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  return sub_1401EB3E0(
           a1,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F60A0,
           a5,
           a6,
           0,
           0);
}

//----- (00000001401F1160) ----------------------------------------------------
__int64 sub_1401F1160(__int64 a1, int a2, ...)
{
  va_list va;

  va_start(va, a2);
  return (unsigned int)sub_1401E47A0(a1, a2, (int **)va);
}

//----- (00000001401F11B0) ----------------------------------------------------
void            sub_1401F11B0(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F11D0) ----------------------------------------------------
__int64            sub_1401F11D0(signed int a1, int a2)
{
  int callee_output_word;
  int selection_code;
  int selection_code_2;
  int selection_code_3;
  int selection_code_4;
  int call_result;
  int call_result_2;
  int call_result_3;
  int callee_output_word_2;
  int scratch_buffer[4];

  if ( (unsigned int)sub_1401F81E0(a1, a2, scratch_buffer, &callee_output_word_2, &callee_output_word) )
    return 0;
  switch ( callee_output_word )
  {
    case 2:
      selection_code_2 = 6;
      selection_code = 6;
      selection_code_4 = 6;
      selection_code_3 = 6;
      break;
    case 3:
      selection_code_2 = 11;
      selection_code = 11;
      selection_code_4 = 11;
      selection_code_3 = 11;
      break;
    case 4:
      selection_code_2 = 18;
      selection_code = 18;
      selection_code_4 = 18;
      selection_code_3 = 18;
      break;
    default:
      return 0;
  }
  call_result = sub_1401F2140(selection_code_2, selection_code);
  if ( !call_result )
    return 0;
  call_result_2 = sub_1401F2140(selection_code_4, selection_code_3);
  if ( !call_result_2 )
    return 0;
  call_result_3 = sub_1401F0320(scratch_buffer[0], callee_output_word_2);
  if ( call_result_3 )
    return call_result_3 + call_result_2 + call_result + (unsigned int)sub_1401E99B0(8);
  else
    return 0;
}

//----- (00000001401F1320) ----------------------------------------------------
_DWORD *           sub_1401F1320(unsigned int a1, signed int a2, int a3, int *a4, int *a5, int a6, _DWORD *a7)
{
  int call_result;
  int call_result_2;
  _DWORD *call_result_3;

  call_result = sub_1401F11D0(a2, a3);
  if ( call_result )
  {
    call_result_3 = (_DWORD *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401F1430(call_result_3, a1, a2, a3, a4, a5, a6);
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        call_result_3 = nullptr;
      }
      if ( a7 )
        *a7 = call_result_2;
      return call_result_3;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -7;
    return nullptr;
  }
}

//----- (00000001401F1430) ----------------------------------------------------
__int64            sub_1401F1430(_DWORD *a1, unsigned int a2, int a3, int a4, int *a5, int *a6, int a7)
{
  __int64 unused_local;
  __int64 packed_word_bits;
  int callee_output_word;
  int i;
  int *returned_pointer;
  int *returned_pointer_2;
  int call_result;
  int *returned_pointer_3;
  _BYTE scratch_buffer[256];
  __int64 unused_local_2;

  if ( !a5 || !a6 )
    return (unsigned int)-1; /* 0x1401F1472: mov eax, 0xffffffff */
  if ( (unsigned int)sub_1401F81E0(a3, a4, a5, a6, &callee_output_word) )
    return (unsigned int)-1; /* 0x1401F14AD: mov eax, 0xffffffff */
  if ( a4 != 3 )
    return (unsigned int)-5; /* 0x1401F14BF -> 0x1401F16D3: mov eax, 0xfffffffb */
  {
    returned_pointer = (int *)sub_1401F8260((__int64)a1);
    switch ( callee_output_word )
    {
      case 2:
        LODWORD(packed_word_bits) = 72;
        sub_1401F21E0(returned_pointer, 6, 6, 0, (__int64)&unk_140279C90);
        break;
      case 3:
        LODWORD(packed_word_bits) = 242;
        sub_1401F21E0(returned_pointer, 11, 11, 0, (__int64)&unk_140279CF0);
        break;
      case 4:
        LODWORD(packed_word_bits) = 648;
        sub_1401F21E0(returned_pointer, 18, 18, 0, (__int64)&unk_140279E20);
        break;
      default:
        return (unsigned int)-1; /* 0x1401F158B: mov eax, 0xffffffff */
    }
    *a1 = sub_1401F2140(*returned_pointer, returned_pointer[1]);
    if ( !*a1 )
      return (unsigned int)-1; /* 0x1401F15C0: mov eax, 0xffffffff */
    {
      returned_pointer_2 = (int *)sub_1401F8290(a1);
      switch ( callee_output_word )
      {
        case 2:
          LODWORD(packed_word_bits) = 72;
          sub_1401F21E0(returned_pointer_2, 6, 6, 0, (__int64)&unk_14027A0C0);
          break;
        case 3:
          LODWORD(packed_word_bits) = 242;
          sub_1401F21E0(returned_pointer_2, 11, 11, 3050, (__int64)&unk_14027A120);
          break;
        case 4:
          LODWORD(packed_word_bits) = 648;
          sub_1401F21E0(returned_pointer_2, 18, 18, 0, (__int64)&unk_14027A230);
          break;
        default:
          return (unsigned int)-1; /* 0x1401F1690: mov eax, 0xffffffff */
      }
      a1[1] = sub_1401F2140(*returned_pointer_2, returned_pointer_2[1]);
      if ( !(a1[1] && *a6 + *a5 <= *returned_pointer && a3 <= returned_pointer[1] && a3 <= *returned_pointer_2 && *a6 + *a5 <= returned_pointer_2[1]) )
        return (unsigned int)-1; /* 0x1401F16C7 / 0x1401F1739: mov eax, 0xffffffff */
      {
        for ( i = 0; i < a3; ++i )
          scratch_buffer[i] = i;
        returned_pointer_3 = (int *)sub_1401F82D0(a1);
        call_result = sub_1401F0780(returned_pointer_3, a2, a3, *a5, *a6, (__int64)scratch_buffer, a7);
      }
    }
  }
  return (unsigned int)call_result; /* 0x1401F17D1: mov eax, dword ptr [rsp + 0x58] */
}

//----- (00000001401F1800) ----------------------------------------------------
__int64            sub_1401F1800(_DWORD *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  unsigned int *returned_pointer;
  __int64 call_result;

  call_result = sub_1401F8260((__int64)a1);
  returned_pointer = (unsigned int *)sub_1401F82D0(a1);
  return sub_1401EA7F0(
           returned_pointer,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F80F0,
           a2,
           a3,
           a4,
           a5,
           16,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E5010,
           0,
           call_result);
}

//----- (00000001401F18A0) ----------------------------------------------------
__int64            sub_1401F18A0(_DWORD *a1, __int64 a2, int a3, _BYTE *a4, int a5)
{
  unsigned int *returned_pointer;
  __int64 call_result;

  call_result = sub_1401F8260((__int64)a1);
  returned_pointer = (unsigned int *)sub_1401F82D0(a1);
  return sub_1401EA7F0(
           returned_pointer,
           (void (           *)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int))sub_1401F8090,
           a2,
           a3,
           a4,
           a5,
           24,
           (void (           *)(__int64, int *, _QWORD, _QWORD, int, int, int))sub_1401E4E80,
           1,
           call_result);
}

//----- (00000001401F1940) ----------------------------------------------------
void            sub_1401F1940(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F1960) ----------------------------------------------------
__int64 sub_1401F1960(_DWORD *a1, int a2, ...)
{
  int i;
  int j;
  int iteration_count;
  int *returned_pointer;
  int table_value;
  int loaded_word;
  int loaded_word_2;
  unsigned int unused_written_slot;
  int saved_va_arg_result;
  char *returned_pointer_2;
  _DWORD *saved_va_arg_result_2;
  __int64 call_result;
  _DWORD *va_arg_result;
  va_list va;
  __int64 va_arg_result_2;
  va_list va1;

  va_start(va1, a2);
  va_start(va, a2);
  va_arg_result = va_arg(va1, _DWORD *);
  va_arg_result_2 = va_arg(va1, _QWORD);
  unused_written_slot = 0;
  returned_pointer = (int *)sub_1401F82D0(a1);
  returned_pointer_2 = sub_1401F8290(a1);
  switch ( a2 )
  {
    case 6001:
      if ( va_arg_result )
      {
        *va_arg_result = *((_DWORD *)returned_pointer_2 + 2);
        return unused_written_slot;
      }
      break;
    case 6003:
      if ( va_arg_result )
      {
        *va_arg_result = 2 * (returned_pointer[2] + returned_pointer[1]) * *returned_pointer;
        return unused_written_slot;
      }
      break;
    case 6005:
      table_value = returned_pointer[2] + returned_pointer[1];
      loaded_word = *returned_pointer;
      saved_va_arg_result_2 = va_arg_result;
      saved_va_arg_result = va_arg_result_2;
      if ( va_arg_result )
      {
        call_result = sub_1401F21B0((__int64)returned_pointer_2);
        if ( saved_va_arg_result == 2 * loaded_word * table_value )
        {
          iteration_count = 0;
          for ( i = 0; i < table_value; ++i )
          {
            for ( j = 0; j < loaded_word; ++j )
            {
              loaded_word_2 = j + i * *(_DWORD *)returned_pointer_2;
              *((_BYTE *)saved_va_arg_result_2 + 2 * iteration_count) = *(_BYTE *)(call_result + 2LL * loaded_word_2);
              *((_BYTE *)saved_va_arg_result_2 + 2 * iteration_count++ + 1) = HIBYTE(*(_WORD *)(call_result + 2LL * loaded_word_2));
            }
          }
          return unused_written_slot;
        }
      }
      break;
    default:
      return (unsigned int)sub_1401E3F90(returned_pointer, a2, (_DWORD **)va);
  }
  return 0xFFFFFFFFLL;
}

//----- (00000001401F1C10) ----------------------------------------------------
__int64            sub_1401F1C10(int a1, int a2, int a3)
{
  int call_result;
  int call_result_2;

  call_result = sub_1401F2140(a3 + a2, a1);
  if ( !call_result )
    return 0;
  call_result_2 = sub_1401F0CE0(a2, a3);
  if ( call_result_2 )
    return call_result_2 + call_result + (unsigned int)sub_1401E99B0(4);
  else
    return 0;
}

//----- (00000001401F1C80) ----------------------------------------------------
_DWORD *           sub_1401F1C80(int a1, int a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int call_result;
  int call_result_2;
  _DWORD *call_result_3;

  call_result = sub_1401F1C10(a2, a3, a4);
  if ( call_result )
  {
    call_result_3 = (_DWORD *)sub_1401A6AA0(call_result);
    if ( call_result_3 )
    {
      call_result_2 = sub_1401F1D90(call_result_3, a1, a2, a3, a4, a5, a6);
      if ( call_result_2 )
      {
        sub_1401A6AC0(call_result_3);
        call_result_3 = nullptr;
      }
      if ( a7 )
        *a7 = call_result_2;
      return call_result_3;
    }
    else
    {
      if ( a7 )
        *a7 = -7;
      return nullptr;
    }
  }
  else
  {
    if ( a7 )
      *a7 = -7;
    return nullptr;
  }
}

//----- (00000001401F1D90) ----------------------------------------------------
__int64            sub_1401F1D90(_DWORD *a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  _DWORD *returned_pointer;
  int *returned_pointer_2;
  int i;
  int integer_sum;
  int xor_value;
  int record_word_offset_2;
  int call_result;
  int *saved_alloca_result;
  _BYTE scratch_buffer[256];
  __int64 unused_local;

  integer_sum = a5 + a4;
  record_word_offset_2 = 2 * a3 * (a5 + a4);
  if ( record_word_offset_2 != a7 )
    return (unsigned int)-1; /* 0x1401F1DF1: mov eax, 0xffffffff */
  {
    record_word_offset = 2LL * a3 * integer_sum + 15;
    if ( record_word_offset <= 2LL * a3 * integer_sum )
      record_word_offset = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    for ( i = 0; i < a3 * integer_sum; ++i )
    {
      LOWORD(xor_value) = *(unsigned __int8 *)(a6 + 2 * i) | (*(unsigned __int8 *)(a6 + 2 * i + 1) << 8);
      xor_value = ((unsigned __int16)xor_value ^ 0x8000) - 0x8000;
      *((_WORD *)saved_alloca_result + i) = xor_value;
    }
    *a1 = sub_1401F2140(a3, integer_sum);
    if ( !*a1 )
      return (unsigned int)-1; /* 0x1401F1ED0: mov eax, 0xffffffff */
    {
      returned_pointer = (_DWORD *)sub_1401F8020((__int64)a1);
      sub_1401F21E0(returned_pointer, a3, integer_sum, 0, (__int64)saved_alloca_result);
      for ( i = 0; i < a3; ++i )
        scratch_buffer[i] = i;
      returned_pointer_2 = (int *)sub_1401F8050(a1);
      call_result = sub_1401F0EA0(returned_pointer_2, a2, a3, a4, a5, (__int64)scratch_buffer);
    }
  }
  return (unsigned int)call_result; /* 0x1401F1F76: mov eax, dword ptr [rbp + 0x10] */
}

//----- (00000001401F1FA0) ----------------------------------------------------
__int64            sub_1401F1FA0(_DWORD *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  int *returned_pointer;
  __int64 call_result;

  call_result = sub_1401F8020((__int64)a1);
  returned_pointer = (int *)sub_1401F8050(a1);
  return sub_1401EB3E0(
           returned_pointer,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F7F70,
           a5,
           a6,
           1,
           call_result);
}

//----- (00000001401F2030) ----------------------------------------------------
__int64            sub_1401F2030(_DWORD *a1, char *a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  int *returned_pointer;
  __int64 call_result;

  call_result = sub_1401F8020((__int64)a1);
  returned_pointer = (int *)sub_1401F8050(a1);
  return sub_1401EB3E0(
           returned_pointer,
           a2,
           a3,
           a4,
           (void (           *)(__int64, _QWORD, _QWORD, int *, int, int, __int64))sub_1401F7EC0,
           a5,
           a6,
           0,
           call_result);
}

//----- (00000001401F20C0) ----------------------------------------------------
__int64 sub_1401F20C0(_DWORD *a1, int a2, ...)
{
  char *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = sub_1401F8050(a1);
  return (unsigned int)sub_1401E47A0((__int64)returned_pointer, a2, (int **)va);
}

//----- (00000001401F2120) ----------------------------------------------------
void            sub_1401F2120(void *a1)
{
  sub_1401A6AC0(a1);
}

//----- (00000001401F2140) ----------------------------------------------------
__int64            sub_1401F2140(int a1, int a2)
{
  int record_word_offset;
  int call_result;

  if ( a1 > 255 || a2 > 255 )
    return 0;
  record_word_offset = 2 * a2 * a1;
  if ( record_word_offset > 65004 )
    return 0;
  call_result = sub_1401E99B0(12);
  return (unsigned int)sub_1401E99B0(record_word_offset) + call_result;
}

//----- (00000001401F21B0) ----------------------------------------------------
__int64            sub_1401F21B0(__int64 a1)
{
  return (int)sub_1401E99B0(12) + a1;
}

//----- (00000001401F21E0) ----------------------------------------------------
__int64            sub_1401F21E0(_DWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result;
  int i;
  __int64 call_result;

  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  call_result = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)(a3 * a2);
    if ( i >= (int)result )
      break;
    *(_WORD *)(call_result + 2LL * i) = *(_WORD *)(a5 + 2LL * i);
  }
  return result;
}

//----- (00000001401F2280) ----------------------------------------------------
__int64            sub_1401F2280(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int a7)
{
  __int64 result;
  int j;
  signed int i;
  float weighted_sum;
  __int64 call_result;

  call_result = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    weighted_sum = 0.0;
    for ( j = 0; j < a3; ++j )
      weighted_sum = weighted_sum + (float)((float)*(__int16 *)(call_result + 2LL * (a5 + j * *a1)) * *(float *)(a2 + 4LL * (j + i * a3)));
    *(float *)(a4 + 4LL * i * a6) = 0.000030517578 * weighted_sum;
  }
  return result;
}

//----- (00000001401F2380) ----------------------------------------------------
__int64            sub_1401F2380(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result;
  signed int i;
  int j;
  float weighted_sum;
  __int64 call_result;

  call_result = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    weighted_sum = *(float *)(a2 + 4LL * i * a4);
    for ( j = 0; j < a6; ++j )
      *(float *)(a5 + 4LL * (j + i * a6)) = *(float *)(a5 + 4LL * (j + i * a6))
                                          + (float)((float)(0.000030517578
                                                          * (float)*(__int16 *)(call_result + 2LL * (j + a3 * *a1)))
                                                  * weighted_sum);
  }
  return result;
}

//----- (00000001401F2490) ----------------------------------------------------
__int64            sub_1401F2490(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int a7)
{
  __int64 result;
  int j;
  signed int i;
  float weighted_sum;
  __int64 call_result;

  call_result = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    weighted_sum = 0.0;
    for ( j = 0; j < a3; ++j )
      weighted_sum = weighted_sum + (float)(*(__int16 *)(a2 + 2LL * (j + i * a3)) * *(__int16 *)(call_result + 2LL * (a5 + j * *a1)));
    *(float *)(a4 + 4LL * i * a6) = 9.3132257e-10 * weighted_sum;
  }
  return result;
}

//----- (00000001401F2590) ----------------------------------------------------
__int64            sub_1401F2590(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result;
  signed int i;
  int j;
  int loaded_word;
  __int64 call_result;

  call_result = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    loaded_word = (__int16)sub_1401AD3E0(*(float *)(a2 + 4LL * i * a4));
    for ( j = 0; j < a6; ++j )
      *(_WORD *)(a5 + 2LL * (j + i * a6)) += (loaded_word * *(__int16 *)(call_result + 2LL * (j + a3 * *a1)) + 0x4000) >> 15;
  }
  return result;
}

//----- (00000001401F2690) ----------------------------------------------------
float            sub_1401F2690(float a1)
{
  int floor_result;
  float component_delta;
  float component_delta_2;

  component_delta_2 = a1;
  component_delta = 1.0;
  if ( a1 >= 8.0 )
    return 1.0;
  if ( a1 <= -8.0 )
    return -1.0;
  if ( a1 < 0.0 )
  {
    component_delta_2 = -a1;
    component_delta = -1.0;
  }
  floor_result = (int)floor((float)((float)(25.0 * component_delta_2) + 0.5));
  return component_delta
       * (float)(flt_14027B860[floor_result]
               + (float)((float)((float)(component_delta_2 - (float)(0.039999999 * (float)floor_result))
                               * (float)(1.0 - (float)(flt_14027B860[floor_result] * flt_14027B860[floor_result])))
                       * (float)(1.0 - (float)(flt_14027B860[floor_result] * (float)(component_delta_2 - (float)(0.039999999 * (float)floor_result))))));
}

//----- (00000001401F2810) ----------------------------------------------------
__m128            sub_1401F2810(float a1)
{
  __int128 float_word;

  float_word = 0x3F000000u;
  *(float *)&float_word = (float)(0.5 * sub_1401F2690(0.5 * a1)) + 0.5;
  return (__m128)float_word;
}

//----- (00000001401F2860) ----------------------------------------------------
__int64            sub_1401F2860(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  __int64 result;
  int i;
  int j;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a4; ++j )
      *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i)
                               + (float)((float)*(char *)(a2 + i + a5 * j) * *(float *)(a6 + 4LL * j));
  }
  return result;
}

//----- (00000001401F2910) ----------------------------------------------------
__int64            sub_1401F2910(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, __int64 a6, int a7)
{
  __int64 result;
  int j;
  signed int i;
  float weighted_sum;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    for ( j = 0; j < a4; ++j )
    {
      weighted_sum = *(float *)(a6 + 4LL * 48000 / a7 * j) * *(float *)(a6 + 4LL * 48000 / a7 * j);
      *(float *)(a3 + 4LL * (int)(i + a5 * j)) = (float)(weighted_sum * *(float *)(a2 + 4LL * (int)(i + a5 * j)))
                                               + (float)((float)(1.0 - weighted_sum) * *(float *)(a1 + 4LL * (int)(i + a5 * j)));
    }
  }
  return result;
}

//----- (00000001401F2A30) ----------------------------------------------------
__int64            sub_1401F2A30(_BYTE *a1)
{
  if ( (*a1 & 0x80) != 0 )
  {
    return 1002;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    return 1001;
  }
  else
  {
    return 1000;
  }
}

//----- (00000001401F2AA0) ----------------------------------------------------
__int64            sub_1401F2AA0(int *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  int masked_bits;
  int masked_bits_2;
  unsigned __int64 scaled_index_3;
  void *alloca_result_3;
  unsigned __int64 scaled_index_4;
  void *alloca_result_4;
  int *unrecovered_register_value;
  int *unrecovered_register_value_2;
  __int64 state_address;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  float exp_result;
  int i;
  int saved_shifted_bits;
  int table_value;
  int shifted_bits;
  int shifted_bits_2;
  BOOL call_result;
  int selection_flag;
  int integer_quotient;
  __int64 *record_pointer;
  int shifted_bits_3;
  int table_value_2;
  int saved_shifted_bits_2;
  BOOL call_result_2;
  _BYTE scratch_buffer[4];
  int cached_table_value;
  unsigned int selection_code;
  int selection_flag_2;
  int j;
  int selection_flag_3;
  int call_result_3;
  int running_total;
  int call_result_4;
  int callee_output_word;
  int scaled_index_7;
  int *cached_p_i;
  int saved_remaining_amount;
  int scaled_index_8;
  int saved_shifted_bits_3;
  int saved_shifted_bits_4;
  int scaled_index_9;
  int integer_quotient_2;
  int record_word_offset;
  BOOL comparison_result;
  int call_result_5;
  int saved_record_word_offset;
  BOOL comparison_result_2;
  int shifted_bits_4;
  int saved_shifted_bits_5;
  int scaled_index_10;
  unsigned int selection_code_2;
  int cached_remaining_amount;
  BOOL condition_flag;
  int saved_remaining_amount_2;
  int integer_quotient_3;
  int table_value_3;
  int *saved_alloca_result;
       __m128i *table_value_4;
  __int64 loaded_word;
  int unused_written_slot;
  int cached_remaining_amount_2;
  float saved_exp_result;
  float weighted_sum;
  int unused_written_slot_2;
  BOOL unused_written_slot_3;
  int scaled_index_11;
  __int64 callee_output_word_2;
       __m128i *table_value_5;
  __int64 input_value;
       __m128i *saved_alloca_result_2;
  int *p_i;
  int *saved_alloca_result_3;
  __int64 scaled_index_12;
  int *state_address_2;
  int *state_address_3;
  unsigned int callee_output_word_3;
  int remaining_amount;
  int unrecovered_register_value_3;
  __int64 unused_local;
  int remaining_amount_2;
  __int64 running_total_2;
  int cached_integer_quotient;
  int saved_remaining_amount_3;

  running_total_2 = a4;
  remaining_amount_2 = a3;
  call_result_5 = 0;
  call_result_4 = 0;
  cached_p_i = nullptr;
  selection_flag_3 = 0;
  call_result = 0;
  saved_shifted_bits_2 = 0;
  call_result_2 = 0;
  selection_flag = 0;
  table_value_5 = (     __m128i *)((char *)a1 + a1[1]);
  record_pointer = (__int64 *)((char *)a1 + *a1);
  integer_quotient = a1[3] / 50;
  shifted_bits_3 = integer_quotient >> 1;
  shifted_bits_2 = integer_quotient >> 2;
  shifted_bits = integer_quotient >> 3;
  if ( a5 < integer_quotient >> 3 )
    return (unsigned int)-2; /* 0x1401F2B80: mov eax, 0xfffffffe */
  if ( a5 >= 3 * (a1[3] / 25) )
    integer_quotient_3 = 3 * (a1[3] / 25);
  else
    integer_quotient_3 = a5;
  cached_integer_quotient = integer_quotient_3;
  if ( a3 <= 1 )
  {
    a2 = 0;
    if ( integer_quotient_3 >= a1[16] )
      table_value_3 = a1[16];
    else
      table_value_3 = integer_quotient_3;
    cached_integer_quotient = table_value_3;
  }
  if ( a2 )
  {
    saved_shifted_bits = a1[16];
    table_value = a1[14];
    table_value_2 = a1[13];
    sub_14019AC50(&callee_output_word_3, a2, a3);
  }
  else
  {
    saved_shifted_bits = cached_integer_quotient;
    table_value = a1[15];
    table_value_2 = 0;
    if ( !table_value )
    {
      for ( i = 0; i < a1[2] * saved_shifted_bits; ++i )
        *(_DWORD *)(a4 + 4LL * i) = 0;
      return (unsigned int)saved_shifted_bits; /* 0x1401F2CDA: mov eax, dword ptr [rbp + 4] */
    }
    if ( saved_shifted_bits > integer_quotient )
    {
      do
      {
        if ( saved_shifted_bits >= integer_quotient )
          saved_remaining_amount = integer_quotient;
        else
          saved_remaining_amount = saved_shifted_bits;
        call_result_3 = sub_1401F2AA0(a1, 0, 0, running_total_2, saved_remaining_amount, 0);
        if ( call_result_3 < 0 )
          return (unsigned int)call_result_3; /* 0x1401F2D34: mov eax, dword ptr [rbp + 0x50] */
        running_total_2 += 4LL * a1[2] * call_result_3;
        saved_shifted_bits -= call_result_3;
      }
      while ( saved_shifted_bits > 0 );
      return (unsigned int)a5; /* 0x1401F2D77: mov eax, dword ptr [rbp + 0x1b0] */
    }
    if ( saved_shifted_bits < integer_quotient )
    {
      if ( saved_shifted_bits <= shifted_bits_3 )
      {
        if ( table_value != 1000 && saved_shifted_bits > shifted_bits_2 && saved_shifted_bits < shifted_bits_3 )
          saved_shifted_bits = shifted_bits_2;
      }
      else
      {
        saved_shifted_bits = shifted_bits_3;
      }
    }
  }
  selection_flag_2 = 0;
  scaled_index_7 = 0;
  scaled_index_8 = 0;
  if ( a2 && a1[15] > 0 && (table_value == 1002 && a1[15] != 1002 && !a1[17] || table_value != 1002 && a1[15] == 1002) )
  {
    selection_flag_3 = 1;
    if ( table_value == 1002 )
      scaled_index_8 = a1[2] * shifted_bits_2;
    else
      scaled_index_7 = a1[2] * shifted_bits_2;
  }
  scaled_index = 4LL * scaled_index_8 + 15;
  if ( scaled_index <= 4LL * scaled_index_8 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = alloca_result;
  if ( selection_flag_3 && table_value == 1002 )
  {
    cached_p_i = p_i;
    if ( shifted_bits_2 >= saved_shifted_bits )
      saved_shifted_bits_3 = saved_shifted_bits;
    else
      saved_shifted_bits_3 = shifted_bits_2;
    sub_1401F2AA0(a1, 0, 0, (__int64)cached_p_i, saved_shifted_bits_3, 0);
  }
  if ( saved_shifted_bits > cached_integer_quotient )
    return (unsigned int)-1; /* 0x1401F2EFA: mov eax, 0xffffffff */
  {
    saved_remaining_amount_3 = saved_shifted_bits;
    if ( table_value == 1002 || selection_flag_2 )
    {
      scaled_index_9 = 0;
    }
    else
    {
      if ( shifted_bits_3 <= saved_shifted_bits )
        saved_shifted_bits_4 = saved_shifted_bits;
      else
        saved_shifted_bits_4 = shifted_bits_3;
      scaled_index_9 = a1[2] * saved_shifted_bits_4;
    }
    unused_written_slot_2 = scaled_index_9;
    scaled_index_2 = 2LL * scaled_index_9 + 15;
    if ( scaled_index_2 <= 2LL * scaled_index_9 )
      scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result_2 = (     __m128i *)alloca_result_2;
    if ( table_value != 1002 )
    {
      table_value_4 = saved_alloca_result_2;
      if ( a1[15] == 1002 )
        sub_1401CCAC0((__int64)table_value_5);
      if ( 1000 * saved_shifted_bits / a1[3] >= 10 )
        integer_quotient_2 = 1000 * saved_shifted_bits / a1[3];
      else
        integer_quotient_2 = 10;
      a1[8] = integer_quotient_2;
      if ( a2 )
      {
        a1[5] = a1[12];
        if ( table_value == 1000 )
        {
          if ( table_value_2 == 1101 )
          {
            a1[7] = 8000;
          }
          else if ( table_value_2 == 1102 )
          {
            a1[7] = 12000;
          }
          else
          {
            a1[7] = 16000;
          }
        }
        else
        {
          a1[7] = 16000;
        }
      }
      if ( a2 )
        record_word_offset = 2 * a6;
      else
        record_word_offset = 1;
      saved_record_word_offset = record_word_offset;
      running_total = 0;
      do
      {
        comparison_result = running_total == 0;
        unused_written_slot_3 = comparison_result;
        call_result_5 = sub_1401CCB60(table_value_5, a1 + 4, saved_record_word_offset, comparison_result, &callee_output_word_3, table_value_4, &callee_output_word, a1[11]);
        if ( call_result_5 )
        {
          if ( !saved_record_word_offset )
            return (unsigned int)-3; /* 0x1401F31CE: mov eax, 0xfffffffd */
          callee_output_word = saved_remaining_amount_3;
          for ( i = 0; i < a1[2] * saved_remaining_amount_3; ++i )
            SR_VEC_PTR_LANES(128, table_value_4, i16)[i] = 0;
        }
        table_value_4 = (     __m128i *)((char *)table_value_4 + 2 * a1[2] * callee_output_word);
        running_total += callee_output_word;
      }
      while ( running_total < saved_remaining_amount_3 );
    }
    selection_code_2 = 0;
    if ( !a6 && table_value != 1002 )
    {
      if ( a2 )
      {
        comparison_result_2 = a1[14] == 1001;
        masked_bits = sub_14019A0A0((__int64)&callee_output_word_3);
        if ( masked_bits + 20 * comparison_result_2 + 17 <= 8 * remaining_amount_2 )
        {
          call_result = table_value != 1001 || sub_14019AF20(&callee_output_word_3, 12);
          if ( call_result )
          {
            call_result_2 = sub_14019AF20(&callee_output_word_3, 1);
            if ( table_value == 1001 )
              shifted_bits_4 = sub_14019B0A0(&callee_output_word_3, 256) + 2;
            else
              shifted_bits_4 = remaining_amount_2 - ((int)(sub_14019A0A0((__int64)&callee_output_word_3) + 7) >> 3);
            saved_shifted_bits_2 = shifted_bits_4;
            remaining_amount_2 -= shifted_bits_4;
            scaled_index_11 = 8 * remaining_amount_2;
            masked_bits_2 = sub_14019A0A0((__int64)&callee_output_word_3);
            if ( scaled_index_11 < masked_bits_2 )
            {
              remaining_amount_2 = 0;
              saved_shifted_bits_2 = 0;
              call_result = 0;
            }
            remaining_amount -= saved_shifted_bits_2;
          }
        }
      }
    }
    if ( table_value != 1002 )
      selection_code_2 = 17;
    if ( call_result )
    {
      selection_flag_3 = 0;
      scaled_index_7 = 0;
    }
    scaled_index_3 = 4LL * scaled_index_7 + 15;
    if ( scaled_index_3 <= 4LL * scaled_index_7 )
      scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_3 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result_3 = alloca_result_3;
    if ( selection_flag_3 && table_value != 1002 )
    {
      cached_p_i = saved_alloca_result_3;
      if ( shifted_bits_2 >= saved_shifted_bits )
        saved_shifted_bits_5 = saved_shifted_bits;
      else
        saved_shifted_bits_5 = shifted_bits_2;
      sub_1401F2AA0(a1, 0, 0, (__int64)cached_p_i, saved_shifted_bits_5, 0);
    }
    if ( !table_value_2 )
      goto LABEL_203;
    selection_code = 21;
    cached_table_value = table_value_2;
    if ( table_value_2 == 1101 )
    {
      selection_code = 13;
    }
    else if ( cached_table_value > 1101 )
    {
      if ( cached_table_value <= 1103 )
      {
        selection_code = 17;
      }
      else if ( cached_table_value == 1104 )
      {
        selection_code = 19;
      }
      else if ( cached_table_value == 1105 )
      {
        selection_code = 21;
      }
    }
    if ( !(unsigned int)sub_140199AA0(record_pointer, 10012, (int *)selection_code) )
    {
LABEL_203:
      if ( !(unsigned int)sub_140199AA0(record_pointer, 10008, (int *)(unsigned int)a1[12]) )
      {
        if ( call_result )
          scaled_index_10 = a1[2] * shifted_bits_2;
        else
          scaled_index_10 = 0;
        unused_written_slot = scaled_index_10;
        scaled_index_4 = 4LL * scaled_index_10 + 15;
        if ( scaled_index_4 <= 4LL * scaled_index_10 )
          scaled_index_4 = 0xFFFFFFFFFFFFFF0LL;
        alloca_result_4 = alloca(scaled_index_4 & 0xFFFFFFFFFFFFFFF0uLL);
        saved_alloca_result = alloca_result_4;
        if ( !call_result
          || !call_result_2
          || !(unsigned int)sub_140199AA0(record_pointer, 10010, nullptr)
          && (sub_14019F210(record_pointer, remaining_amount_2 + a2, saved_shifted_bits_2, (__int64)saved_alloca_result, shifted_bits_2, nullptr, 0),
              !(unsigned int)sub_140199AA0(record_pointer, 4031, &selection_flag)) )
        {
          if ( !(unsigned int)sub_140199AA0(record_pointer, 10010, (int *)selection_code_2) )
          {
            if ( table_value == 1000 )
            {
              scratch_buffer[0] = -1;
              scratch_buffer[1] = -1;
              if ( !selection_flag_2 )
              {
                for ( i = 0; i < a1[2] * saved_remaining_amount_3; ++i )
                  *(_DWORD *)(running_total_2 + 4LL * i) = 0;
              }
              if ( a1[15] == 1001 && (!call_result || !call_result_2 || !a1[17]) )
              {
                if ( (unsigned int)sub_140199AA0(record_pointer, 10010, nullptr) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                sub_14019F210(record_pointer, (__int64)scratch_buffer, 2, running_total_2, shifted_bits, nullptr, selection_flag_2);
              }
            }
            else
            {
              if ( integer_quotient >= saved_remaining_amount_3 )
                cached_remaining_amount = saved_remaining_amount_3;
              else
                cached_remaining_amount = integer_quotient;
              cached_remaining_amount_2 = cached_remaining_amount;
              if ( table_value != a1[15] && a1[15] > 0 && !a1[17] && (unsigned int)sub_140199AA0(record_pointer, 4028, unrecovered_register_value) )
                return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
              if ( a6 )
                input_value = 0;
              else
                input_value = a2;
              call_result_4 = sub_14019F210(record_pointer, input_value, remaining_amount_2, running_total_2, cached_remaining_amount_2, &callee_output_word_3, selection_flag_2);
            }
            if ( table_value != 1002 && !selection_flag_2 )
            {
              for ( i = 0; i < a1[2] * saved_remaining_amount_3; ++i )
                *(float *)(running_total_2 + 4LL * i) = *(float *)(running_total_2 + 4LL * i)
                                          + (float)(0.000030517578 * (float)SR_VEC_PTR_LANES(128, saved_alloca_result_2, i16)[i]);
            }
            if ( !(unsigned int)sub_140199AA0(record_pointer, 10015, (int *)&callee_output_word_2) )
            {
              loaded_word = *(_QWORD *)(callee_output_word_2 + 72);
              if ( call_result && !call_result_2 )
              {
                if ( (unsigned int)sub_140199AA0(record_pointer, 4028, unrecovered_register_value_2) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                if ( (unsigned int)sub_140199AA0(record_pointer, 10010, nullptr) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                sub_14019F210(record_pointer, remaining_amount_2 + a2, saved_shifted_bits_2, (__int64)saved_alloca_result, shifted_bits_2, nullptr, 0);
                if ( (unsigned int)sub_140199AA0(record_pointer, 4031, &selection_flag) )
                  return (unsigned int)-3; /* mov eax, 0xfffffffd after a failed control call */
                state_address = (__int64)&saved_alloca_result[shifted_bits * a1[2]];
                scaled_index_12 = running_total_2 + 4LL * (saved_remaining_amount_3 - shifted_bits) * a1[2];
                sub_1401F2910(scaled_index_12, state_address, scaled_index_12, shifted_bits, a1[2], loaded_word, a1[3]);
              }
              if ( call_result && call_result_2 )
              {
                for ( j = 0; j < a1[2]; ++j )
                {
                  for ( i = 0; i < shifted_bits; ++i )
                    *(_DWORD *)(running_total_2 + 4LL * (j + i * a1[2])) = saved_alloca_result[j + i * a1[2]];
                }
                scaled_index_5 = running_total_2 + 4LL * shifted_bits * a1[2];
                state_address_2 = &saved_alloca_result[shifted_bits * a1[2]];
                sub_1401F2910((__int64)state_address_2, scaled_index_5, scaled_index_5, shifted_bits, a1[2], loaded_word, a1[3]);
              }
              if ( selection_flag_3 )
              {
                if ( saved_shifted_bits < shifted_bits_2 )
                {
                  sub_1401F2910((__int64)cached_p_i, running_total_2, running_total_2, shifted_bits, a1[2], loaded_word, a1[3]);
                }
                else
                {
                  for ( i = 0; i < shifted_bits * a1[2]; ++i )
                    *(_DWORD *)(running_total_2 + 4LL * i) = cached_p_i[i];
                  scaled_index_6 = running_total_2 + 4LL * shifted_bits * a1[2];
                  state_address_3 = &cached_p_i[shifted_bits * a1[2]];
                  sub_1401F2910((__int64)state_address_3, scaled_index_6, scaled_index_6, shifted_bits, a1[2], loaded_word, a1[3]);
                }
              }
              if ( a1[10] )
              {
                exp_result = exp(0.6931471805599453 * (float)(0.00064881408 * (float)a1[10]));
                saved_exp_result = exp_result;
                for ( i = 0; i < a1[2] * saved_remaining_amount_3; ++i )
                {
                  weighted_sum = *(float *)(running_total_2 + 4LL * i) * saved_exp_result;
                  *(float *)(running_total_2 + 4LL * i) = weighted_sum;
                }
              }
              if ( remaining_amount_2 > 1 )
                a1[21] = selection_flag ^ unrecovered_register_value_3;
              else
                a1[21] = 0;
              a1[15] = table_value;
              condition_flag = call_result && !call_result_2;
              a1[17] = condition_flag;
              if ( call_result_4 >= 0 )
                sub_1401A2600();
              if ( call_result_4 >= 0 )
                saved_remaining_amount_2 = saved_shifted_bits;
              else
                saved_remaining_amount_2 = call_result_4;
              return (unsigned int)saved_remaining_amount_2; /* 0x1401F3E38: mov eax, dword ptr [rbp + 0xb4] */
            }
          }
        }
      }
    }
  }
  return (unsigned int)-3; /* the nested control calls that failed: each mov eax, 0xfffffffd (0x1401F34CA ... 0x1401F39AB) */
}

//----- (00000001401F3E60) ----------------------------------------------------
__int64            sub_1401F3E60(int a1, int a2, int a3, int a4)
{
  char scaled_index;
  char iteration_count;
  char integer_difference;

  iteration_count = 0;
  while ( a2 < 400 )
  {
    a2 *= 2;
    ++iteration_count;
  }
  if ( a1 == 1000 )
  {
    scaled_index = (8 * iteration_count - 16) | (32 * (a3 - 77));
  }
  else if ( a1 == 1002 )
  {
    integer_difference = a3 - 78;
    if ( a3 - 1102 < 0 )
      integer_difference = 0;
    scaled_index = (8 * iteration_count) | (32 * integer_difference) | 0x80;
  }
  else
  {
    scaled_index = (8 * iteration_count - 16) | (16 * (a3 - 80)) | 0x60;
  }
  return (unsigned __int8)((4 * (a4 == 2)) | scaled_index);
}

//----- (00000001401F3F90) ----------------------------------------------------
void               sub_1401F3F90(__int64 a1, int *a2, int *a3, float *a4, __int64 a5, int a6, int a7)
{
  int i;
  float weighted_sum;
  float weighted_sum_2;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  __int64 unused_local;

  scaled_value = (float)*a3 * 0.0000000037252903f;
  scaled_value_2 = (float)a3[1] * 0.0000000037252903f;
  scaled_value_3 = (float)*a2 * 0.0000000037252903f;
  scaled_value_4 = (float)a2[1] * 0.0000000037252903f;
  scaled_value_5 = (float)a2[2] * 0.0000000037252903f;
  for ( i = 0; i < a6; ++i )
  {
    weighted_sum = *(float *)(a1 + 4LL * a7 * i);
    weighted_sum_2 = *a4 + (float)(scaled_value_3 * weighted_sum);
    *a4 = (float)(a4[1] - (float)(weighted_sum_2 * scaled_value)) + (float)(scaled_value_4 * weighted_sum);
    a4[1] = (float)((float)((float)-weighted_sum_2 * scaled_value_2) + (float)(scaled_value_5 * weighted_sum)) + 1.0e-30f;
    *(float *)(a5 + 4LL * a7 * i) = weighted_sum_2;
  }
  return; /* native void filter */
}

//----- (00000001401F41E0) ----------------------------------------------------
void               sub_1401F41E0(__int64 a1, __int16 a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  __int64 unused_local;
  int scaled_index;
  int integer_quotient;
  int shifted_bits;
  int record_word_offset;
  int unused_written_slot;
  int scratch_buffer[2];
  __int64 unused_written_slot_2;
  int scratch_buffer_2[4];
  __int64 unused_local_2;

  record_word_offset = 2471 * a2;
  unused_written_slot = a7 / 1000;
  integer_quotient = record_word_offset / (a7 / 1000);
  scaled_index = (int)(0x10000000u - 471u * (unsigned)integer_quotient);
  scratch_buffer_2[0] = scaled_index;
  scratch_buffer_2[1] = (int)(2u * (471u * (unsigned)integer_quotient - 0x10000000u));
  scratch_buffer_2[2] = scaled_index;
  shifted_bits = scaled_index >> 6;
  scratch_buffer[0] = ((int)(((integer_quotient * (__int64)integer_quotient) >> 16) - 0x800000) * (__int64)(scaled_index >> 6)) >> 16;
  scratch_buffer[1] = (shifted_bits * (__int64)shifted_bits) >> 16;
  sub_1401F3F90(a1, scratch_buffer_2, scratch_buffer, a4, a3, a5, a6);
  if ( a6 == 2 )
  {
    unused_written_slot_2 = a1 + 4;
    sub_1401F3F90(a1 + 4, scratch_buffer_2, scratch_buffer, a4 + 2, a3 + 4, a5, 2);
  }
  return; /* native void filter */
}

//----- (00000001401F43C0) ----------------------------------------------------
__int64            sub_1401F43C0(__int64 a1, int a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  int i;
  int j;
  float combined_products;
  float source_component_z;
  float scaled_ratio;
  float combined_products_2;
  float component_delta;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;

  scaled_ratio = (float)(6.3000002 * (float)a2) / (float)a7;
  component_delta = 1.0 - scaled_ratio;
  if ( a6 == 2 )
  {
    combined_products = *a4;
    source_component_z = a4[2];
    for ( i = 0; i < a5; ++i )
    {
      weighted_sum = *(float *)(a1 + 8LL * i);
      weighted_sum_2 = *(float *)(a1 + 4LL * (2 * i + 1));
      component_delta_2 = weighted_sum - combined_products;
      component_delta_3 = weighted_sum_2 - source_component_z;
      combined_products = (float)((float)(scaled_ratio * weighted_sum) + 1.0e-30) + (float)(component_delta * combined_products);
      source_component_z = (float)((float)(scaled_ratio * weighted_sum_2) + 1.0e-30) + (float)(component_delta * source_component_z);
      *(float *)(a3 + 8LL * i) = component_delta_2;
      *(float *)(a3 + 4LL * (2 * i + 1)) = component_delta_3;
    }
    *a4 = combined_products;
    a4[2] = source_component_z;
    return 8;
  }
  else
  {
    combined_products_2 = *a4;
    for ( j = 0; j < a5; ++j )
    {
      weighted_sum_3 = *(float *)(a1 + 4LL * j);
      component_delta_4 = weighted_sum_3 - combined_products_2;
      combined_products_2 = (float)((float)(scaled_ratio * weighted_sum_3) + 1.0e-30) + (float)(component_delta * combined_products_2);
      *(float *)(a3 + 4LL * j) = component_delta_4;
    }
    *a4 = combined_products_2;
    return 0;
  }
}

//----- (00000001401F4640) ----------------------------------------------------
__int64            sub_1401F4640(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        signed int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result;
  int i;
  float combined_products;
  float combined_products_2;
  float weighted_sum;
  float component_delta;

  component_delta = 1.0 - a4;
  for ( i = 0; i < a5 / (48000 / a9); ++i )
  {
    weighted_sum = *(float *)(a8 + 4LL * 48000 / a9 * i) * *(float *)(a8 + 4LL * 48000 / a9 * i);
    combined_products = (float)((float)(weighted_sum * component_delta) + (float)((float)(1.0 - weighted_sum) * (float)(1.0 - a3)))
        * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - combined_products;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + combined_products;
  }
  while ( 1 )
  {
    result = (unsigned int)a6;
    if ( i >= a6 )
      break;
    combined_products_2 = component_delta * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - combined_products_2;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + combined_products_2;
    ++i;
  }
  return result;
}

//----- (00000001401F48B0) ----------------------------------------------------
__int64            sub_1401F48B0(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  __int64 result;
  int i;
  int j;
  int k;
  int integer_quotient;
  signed int iteration_count;
  int integer_quotient_2;
  float weighted_sum;
  float weighted_sum_2;

  integer_quotient = 48000 / a9;
  integer_quotient_2 = a5 / (48000 / a9);
  if ( a7 == 1 )
  {
    for ( i = 0; i < integer_quotient_2; ++i )
    {
      weighted_sum = *(float *)(a8 + 4LL * integer_quotient * i) * *(float *)(a8 + 4LL * integer_quotient * i);
      *(float *)(a2 + 4LL * i) = (float)((float)(weighted_sum * a4) + (float)((float)(1.0 - weighted_sum) * a3))
                               * *(float *)(a1 + 4LL * i);
    }
  }
  else
  {
    for ( j = 0; j < integer_quotient_2; ++j )
    {
      weighted_sum_2 = *(float *)(a8 + 4LL * integer_quotient * j) * *(float *)(a8 + 4LL * integer_quotient * j);
      *(float *)(a2 + 8LL * j) = (float)((float)(weighted_sum_2 * a4) + (float)((float)(1.0 - weighted_sum_2) * a3))
                               * *(float *)(a1 + 8LL * j);
      *(float *)(a2 + 4LL * (2 * j + 1)) = (float)((float)(weighted_sum_2 * a4) + (float)((float)(1.0 - weighted_sum_2) * a3))
                                         * *(float *)(a1 + 4LL * (2 * j + 1));
    }
  }
  iteration_count = 0;
  do
  {
    for ( k = a5 / (48000 / a9); k < a6; ++k )
      *(float *)(a2 + 4LL * (int)(iteration_count + a7 * k)) = a4 * *(float *)(a1 + 4LL * (int)(iteration_count + a7 * k));
    ++iteration_count;
    result = a7;
  }
  while ( iteration_count < (int)a7 );
  return result;
}

//----- (00000001401F4B00) ----------------------------------------------------
__int64            sub_1401F4B00(_DWORD *a1, int a2, int a3)
{
  int integer_quotient;

  integer_quotient = a2;
  if ( !a2 )
    integer_quotient = a1[36] / 400;
  if ( a1[41] == -1000 )
    return (unsigned int)(a1[28] * a1[36] + 60 * a1[36] / integer_quotient);
  if ( a1[41] == -1 )
    return (unsigned int)(a1[36] * 8 * a3 / integer_quotient);
  return (unsigned int)a1[41];
}

//----- (00000001401F4BB0) ----------------------------------------------------
float            sub_1401F4BB0(__int64 a1, int a2, int a3, float *a4)
{
  float square_root;
  float square_root_2;
  float square_root_3;
  float square_root_4;
  float product_difference;
  float square_root_5;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  int i;
  float squared_length;
  float squared_component;
  float squared_length_2;
  float squared_length_3;
  float scaled_value;
  float weighted_sum_9;
  float weighted_sum_10;
  float squared_component_2;
  float squared_length_4;
  float squared_length_5;
  float squared_length_6;
  float weighted_sum_11;
  int integer_quotient;
  float squared_value;
  float squared_value_2;
  float scaled_ratio;
  int integer_quotient_2;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  float source_component_z;
  float source_component_y;
  float saved_square_root;
  float saved_square_root_2;
  float combined_products;
  float source_component_w;
  float combined_products_2;

  integer_quotient = a3 / a2;
  if ( a3 / a2 >= 50 )
    integer_quotient_2 = a3 / a2;
  else
    integer_quotient_2 = 50;
  scaled_ratio = 1.0 - (float)(25.0 / (float)integer_quotient_2);
  squared_length = 0.0;
  weighted_sum_11 = 0.0;
  squared_length_6 = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
  {
    weighted_sum = *(float *)(a1 + 8LL * i);
    weighted_sum_5 = *(float *)(a1 + 4LL * (2 * i + 1));
    squared_component = weighted_sum * weighted_sum;
    scaled_value = weighted_sum * weighted_sum_5;
    squared_component_2 = weighted_sum_5 * weighted_sum_5;
    weighted_sum_2 = *(float *)(a1 + 4LL * (2 * i + 2));
    weighted_sum_6 = *(float *)(a1 + 4LL * (2 * i + 3));
    squared_length_2 = squared_component + (float)(weighted_sum_2 * weighted_sum_2);
    weighted_sum_9 = scaled_value + (float)(weighted_sum_2 * weighted_sum_6);
    squared_length_4 = squared_component_2 + (float)(weighted_sum_6 * weighted_sum_6);
    weighted_sum_3 = *(float *)(a1 + 4LL * (2 * i + 4));
    weighted_sum_7 = *(float *)(a1 + 4LL * (2 * i + 5));
    squared_length_3 = squared_length_2 + (float)(weighted_sum_3 * weighted_sum_3);
    weighted_sum_10 = weighted_sum_9 + (float)(weighted_sum_3 * weighted_sum_7);
    squared_length_5 = squared_length_4 + (float)(weighted_sum_7 * weighted_sum_7);
    weighted_sum_4 = *(float *)(a1 + 4LL * (2 * i + 6));
    weighted_sum_8 = *(float *)(a1 + 4LL * (2 * i + 7));
    squared_length_6 = squared_length_6 + (float)(squared_length_3 + (float)(weighted_sum_4 * weighted_sum_4));
    weighted_sum_11 = weighted_sum_11 + (float)(weighted_sum_10 + (float)(weighted_sum_4 * weighted_sum_8));
    squared_length = squared_length + (float)(squared_length_5 + (float)(weighted_sum_8 * weighted_sum_8));
  }
  if ( squared_length_6 >= 1000000000.0 || squared_length >= 1000000000.0 )
  {
    squared_length = 0.0;
    squared_length_6 = 0.0;
    weighted_sum_11 = 0.0;
  }
  *a4 = *a4 + (float)(scaled_ratio * (float)(squared_length_6 - *a4));
  a4[1] = a4[1] + (float)(scaled_ratio * (float)(weighted_sum_11 - a4[1]));
  a4[2] = a4[2] + (float)(scaled_ratio * (float)(squared_length - a4[2]));
  if ( *a4 >= 0.0 )
    loaded_word = *(_DWORD *)a4;
  else
    loaded_word = 0;
  *(_DWORD *)a4 = loaded_word;
  if ( a4[1] >= 0.0 )
    loaded_word_2 = *((_DWORD *)a4 + 1);
  else
    loaded_word_2 = 0;
  *((_DWORD *)a4 + 1) = loaded_word_2;
  if ( a4[2] >= 0.0 )
    loaded_word_3 = *((_DWORD *)a4 + 2);
  else
    loaded_word_3 = 0;
  *((_DWORD *)a4 + 2) = loaded_word_3;
  if ( *a4 <= a4[2] )
    source_component_z = a4[2];
  else
    source_component_z = *a4;
  if ( source_component_z > 0.00079999998 )
  {
    square_root = sqrt(*a4);
    squared_value = square_root;
    square_root_2 = sqrt(a4[2]);
    squared_value_2 = square_root_2;
    square_root_3 = sqrt(squared_value);
    saved_square_root = square_root_3;
    square_root_4 = sqrt(squared_value_2);
    saved_square_root_2 = square_root_4;
    if ( (float)(squared_value * squared_value_2) <= a4[1] )
      source_component_y = squared_value * squared_value_2;
    else
      source_component_y = a4[1];
    a4[1] = source_component_y;
    combined_products = a4[1] / (float)((float)(squared_value * squared_value_2) + 1.0e-15);
    product_difference = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(saved_square_root - square_root_4)), u64);
    combined_products_2 = (float)(1.0 * product_difference) / (float)((float)(saved_square_root + 1.0e-15) + saved_square_root_2);
    square_root_5 = sqrt((float)(1.0 - (float)(combined_products * combined_products)));
    a4[3] = a4[3] + (float)((float)((float)(square_root_5 * combined_products_2) - a4[3]) / (float)integer_quotient);
    if ( (float)(a4[4] - (float)(0.02 / (float)integer_quotient)) <= a4[3] )
      source_component_w = a4[3];
    else
      source_component_w = a4[4] - (float)(0.02 / (float)integer_quotient);
    a4[4] = source_component_w;
  }
  if ( (float)(20.0 * a4[4]) <= 1.0 )
    return 20.0 * a4[4];
  else
    return 1.0;
}

//----- (00000001401F53F0) ----------------------------------------------------
__int64            sub_1401F53F0(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int remaining_amount;
  int scaled_index;
  int input_value;
  int loaded_word;

  if ( !a1 || !a2 || a4 == 1002 )
    return 0;
  loaded_word = *a5;
  while ( 1 )
  {
    remaining_amount = dword_140279DF8[2 * *a5 - 2202];
    scaled_index = dword_140279DF8[2 * *a5 - 2201];
    if ( a3 == 1 )
      remaining_amount -= scaled_index;
    if ( !a3 )
      remaining_amount += scaled_index;
    if ( a2 >= 25 )
      input_value = 25;
    else
      input_value = a2;
    if ( a6 > (int)((655LL * (125 - input_value) * remaining_amount) >> 16) )
      return 1;
    if ( a2 <= 5 )
      return 0;
    if ( *a5 <= 1101 )
      break;
    --*a5;
  }
  *a5 = loaded_word;
  return 0;
}

//----- (00000001401F5530) ----------------------------------------------------
__int64            sub_1401F5530(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int running_total;
  unsigned int remaining_amount;
  int i;
  int scaled_index;
  int scaled_index_2;
  int integer_quotient;

  integer_quotient = a1 / a6;
  scaled_index = a3 + 2 * a5 + 1;
  for ( i = 1; i < 7 && dword_140301FF0[5 * i] <= integer_quotient; ++i )
    ;
  if ( i == 7 )
  {
    running_total = (integer_quotient - dword_140301FF0[30]) / 2 + dword_140301FF0[scaled_index + 30];
  }
  else
  {
    scaled_index_2 = dword_140301FF0[5 * i - 5];
    running_total = ((integer_quotient - scaled_index_2) * dword_140301FF0[5 * i + scaled_index] + (dword_140301FF0[5 * i] - integer_quotient) * dword_140301FF0[5 * i - 5 + scaled_index])
       / (dword_140301FF0[5 * i] - scaled_index_2);
  }
  if ( !a4 )
    running_total += 100;
  if ( a2 == 1104 )
    running_total += 300;
  remaining_amount = a6 * running_total;
  if ( a6 == 2 && integer_quotient >= 12000 )
    remaining_amount -= 1000;
  return remaining_amount;
}

//----- (00000001401F5760) ----------------------------------------------------
__int64            sub_1401F5760(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int remaining_amount;
  unsigned int remaining_amount_2;

  remaining_amount = a1;
  if ( a3 > 50 )
    remaining_amount = a1 - (a3 - 50) * (40 * a2 + 20);
  if ( !a4 )
    remaining_amount -= remaining_amount / 12;
  remaining_amount_2 = (a6 + 90) * remaining_amount / 100;
  if ( a5 == 1000 || a5 == 1001 )
  {
    if ( a6 < 2 )
      remaining_amount_2 = (int)(4 * remaining_amount_2) / 5;
    remaining_amount_2 -= (int)(a7 * remaining_amount_2) / (6 * a7 + 10);
  }
  else if ( a5 == 1002 )
  {
    if ( a6 < 5 )
      return (unsigned int)((int)(9 * remaining_amount_2) / 10);
  }
  else
  {
    remaining_amount_2 -= (int)(a7 * remaining_amount_2) / (12 * a7 + 20);
  }
  return remaining_amount_2;
}

//----- (00000001401F5870) ----------------------------------------------------
float            sub_1401F5870(__int64 a1, int a2, int a3)
{
  return sub_1401A9C00(a1, a1, a3 * a2) / (float)(a3 * a2);
}

//----- (00000001401F58C0) ----------------------------------------------------
__int64            sub_1401F58C0(float a1, int *a2, float a3, __int64 a4, int a5, int a6, BOOL a7)
{
  if ( !a7 && a1 < 0.1 )
    a7 = a3 >= (float)(316.23001 * sub_1401F5870(a4, a5, a6));
  if ( a7 )
  {
    if ( ++*a2 > 10 )
    {
      if ( *a2 <= 30 )
        return 1;
      *a2 = 10;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0;
}

//----- (00000001401F59A0) ----------------------------------------------------
__int64            sub_1401F59A0(int *a1, __int64 a2, int a3, int a4, _BYTE *a5, int a6, int a7, int a8, int a9)
{
  int record_word_offset;
  unsigned __int64 scaled_index;
  void *alloca_result;
  void *alloca_result_2;
  _BYTE scratch_buffer[384];
  int i;
  int call_result;
  int lookup_index;
  int input_value;
  int record_word_offset_2;
  int integer_quotient;
  int input_value_2;
  int saved_record_word_offset;
  int integer_quotient_2;
  BOOL comparison_result;
  int masked_bits;
  BOOL comparison_result_2;
  int table_value;
  int unused_written_slot;
  int record_word_offset_3;
  int integer_quotient_3;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  _BYTE *saved_alloca_result;
  char *saved_alloca_result_2;
  __int64 unused_local;

  call_result = 0;
  if ( a3 == 2 )
    record_word_offset_2 = 3;
  else
    record_word_offset_2 = 2 * a3;
  saved_record_word_offset = record_word_offset_2;
  if ( a1[37] || a1[41] == -1 )
  {
    input_value = a6;
  }
  else
  {
    record_word_offset_3 = 3 * a1[40];
    record_word_offset = 24 * a1[36];
    unused_written_slot = a3 * a4;
    integer_quotient_3 = record_word_offset / (a3 * a4);
    integer_quotient = record_word_offset_3 / integer_quotient_3;
    if ( record_word_offset_3 / integer_quotient_3 >= a6 )
      input_value_2 = a6;
    else
      input_value_2 = integer_quotient;
    input_value = input_value_2;
  }
  if ( (input_value - saved_record_word_offset) / a3 + 1 <= 1276 )
    integer_quotient_2 = (input_value - saved_record_word_offset) / a3 + 1;
  else
    integer_quotient_2 = 1276;
  lookup_index = integer_quotient_2;
  scaled_index = integer_quotient_2 * a3 + 15LL;
  if ( scaled_index <= integer_quotient_2 * a3 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (char *)alloca_result;
  alloca_result_2 = alloca(496);
  saved_alloca_result = alloca_result_2;
  sub_1401E37F0((__int64)scratch_buffer);
  table_value_2 = a1[34];
  table_value_3 = a1[32];
  table_value_4 = a1[30];
  a1[34] = a1[3556];
  a1[32] = a1[3560];
  a1[30] = a1[3548];
  table_value = a1[17];
  if ( table_value )
    a1[30] = 1;
  else
    a1[3558] = a1[3548];
  for ( i = 0; i < a3; ++i )
  {
    a1[17] = 0;
    comparison_result = i < a3 - 1;
    a1[4534] = comparison_result;
    if ( a7 && i == a3 - 1 )
      a1[34] = 1002;
    masked_bits = sub_1401E5400(
            a1,
            a2 + 4LL * a4 * a1[28] * i,
            a4,
            (__m128i *)&saved_alloca_result_2[lookup_index * i],
            lookup_index,
            a8,
            0,
            0,
            0,
            0,
            0,
            nullptr,
            a9);
    if ( masked_bits < 0 )
      return (unsigned int)-3; /* 0x1401F5D06: mov eax, 0xfffffffd */
    call_result = sub_1401E3870((__int64)saved_alloca_result, &saved_alloca_result_2[lookup_index * i], masked_bits);
    if ( call_result < 0 )
      return (unsigned int)-3; /* 0x1401F5D3C: mov eax, 0xfffffffd */
  }
  comparison_result_2 = a1[37] == 0;
  call_result = sub_1401EA090((__int64)saved_alloca_result, 0, a3, a5, input_value, 0, comparison_result_2);
  if ( call_result >= 0 )
  {
    a1[34] = table_value_2;
    a1[32] = table_value_3;
    a1[30] = table_value_4;
    a1[17] = table_value;
  }
  return (unsigned int)(call_result < 0 ? -3 : call_result); /* 0x1401F5DA3: mov eax, 0xfffffffd when [rbp + 4] < 0, else 0x1401F5DE4: mov eax, dword ptr [rbp + 4] */
}

//----- (00000001401F5E00) ----------------------------------------------------
__int64            sub_1401F5E00(int a1, int a2, int a3, int a4)
{
  int integer_quotient;

  if ( 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600 >= (40 * a4
                                                           + 20
                                                           + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240))
                                                          / 8 )
    integer_quotient = (40 * a4 + 20 + 240 * (8 * a1 - 2 * (40 * a4 + 20)) / (48000 / a3 + 240)) / 8;
  else
    integer_quotient = 3 * ((200 - a3) * (40 * a4 + 20) + a2) / 2 / 1600;
  if ( integer_quotient <= 8 * a4 + 4 )
  {
    return 0;
  }
  else if ( integer_quotient <= 257 )
  {
    return (unsigned int)integer_quotient;
  }
  else
  {
    return 257;
  }
}

//----- (00000001401F5F20) ----------------------------------------------------
__int64            sub_1401F5F20(char *a1, int a2, int a3, int a4)
{
  __int64 unused_local;
  int i;
  _BYTE scratch_buffer[4];
  int callee_output_word;
  int cached_call_result;
  BOOL comparison_result;
  int call_result;
  int call_result_2;
  __int16 scratch_buffer_2[48];
  __int64 unused_local_2;

  cached_call_result = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( a2 <= 0 )
      return (unsigned int)-4; /* 0x1401F5F83: mov eax, 0xfffffffc */
    comparison_result = i != a3 - 1;
    call_result = sub_1401E99E0(a1, a2, comparison_result, scratch_buffer, 0, scratch_buffer_2, nullptr, &callee_output_word);
    if ( call_result < 0 )
      return (unsigned int)call_result; /* 0x1401F5FFD: mov eax, dword ptr [rsp + 0x54] */
    call_result_2 = sub_1401E2F80(a1, callee_output_word, a4);
    if ( i )
    {
      if ( cached_call_result != call_result_2 )
        return (unsigned int)-4; /* 0x1401F6031: mov eax, 0xfffffffc */
    }
    cached_call_result = call_result_2;
    a1 += callee_output_word;
    a2 -= callee_output_word;
  }
  return (unsigned int)cached_call_result; /* 0x1401F6076: mov eax, dword ptr [rsp + 0x4c] */
}

//----- (00000001401F60A0) ----------------------------------------------------
__int64            sub_1401F60A0(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;
  signed int j;

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * i)) = *(_DWORD *)(a4 + 4LL * a5 * i);
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_DWORD *)(a1 + 4LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

//----- (00000001401F6160) ----------------------------------------------------
__int64            sub_1401F6160(__int64 a1, int a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;
  signed int j;

  if ( a4 )
  {
    for ( i = 0; ; ++i )
    {
      result = a6;
      if ( i >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * i)) = sub_1401AD3E0(*(float *)(a4 + 4LL * a5 * i));
    }
  }
  else
  {
    for ( j = 0; ; ++j )
    {
      result = a6;
      if ( j >= (int)a6 )
        break;
      *(_WORD *)(a1 + 2LL * (a3 + a2 * j)) = 0;
    }
  }
  return result;
}

//----- (00000001401F6230) ----------------------------------------------------
char *           sub_1401F6230(_DWORD *a1)
{
  int i;
  int call_result;
  int call_result_2;
  char *running_total;

  call_result = sub_1401E06F0(2);
  call_result_2 = sub_1401E06F0(1);
  running_total = (char *)a1 + (int)sub_1401E99B0(292);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
      running_total += (int)sub_1401E99B0(call_result_2);
    else
      running_total += (int)sub_1401E99B0(call_result);
  }
  return &running_total[480 * *a1];
}

//----- (00000001401F6300) ----------------------------------------------------
__int64            sub_1401F6300(__int64 a1)
{
  int i;
  int call_result;
  int call_result_2;
  __int64 running_total;

  call_result = sub_1401E06F0(2);
  call_result_2 = sub_1401E06F0(1);
  running_total = (int)sub_1401E99B0(292) + a1;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 8) )
      running_total += (int)sub_1401E99B0(call_result_2);
    else
      running_total += (int)sub_1401E99B0(call_result);
  }
  return running_total;
}

//----- (00000001401F63C0) ----------------------------------------------------
__int64            sub_1401F63C0(signed int a1, _DWORD *a2, _DWORD *a3)
{
  int scaled_index;
  int call_result;

  if ( a1 < 1 || a1 > 227 )
    return 0;
  call_result = sub_1401A6AE0(a1);
  scaled_index = a1 - call_result * call_result;
  if ( scaled_index && scaled_index != 2 )
    return 0;
  if ( a2 )
    *a2 = (a1 != call_result * call_result) + call_result * call_result;
  if ( a3 )
    *a3 = a1 != call_result * call_result;
  return 1;
}

//----- (00000001401F64A0) ----------------------------------------------------
__int64            sub_1401F64A0(int *a1)
{
  int i;

  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
    {
      if ( (unsigned int)sub_1401E4DF0(a1, i, -1) == -1 )
        return 0;
    }
    else
    {
      if ( (unsigned int)sub_1401E4CF0(a1, i, -1) == -1 )
        return 0;
      if ( (unsigned int)sub_1401E4D70(a1, i, -1) == -1 )
        return 0;
    }
  }
  return 1;
}

//----- (00000001401F6550) ----------------------------------------------------
__int64            sub_1401F6550(int a1, _DWORD *a2)
{
  __int64 result;

  switch ( a1 )
  {
    case 4:
      *a2 = 1;
      a2[1] = 3;
      a2[2] = 1;
      a2[3] = 3;
      return 12;
    case 3:
    case 5:
    case 6:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 0;
      return 20;
    case 7:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 2;
      a2[6] = 0;
      return 24;
    case 8:
      *a2 = 1;
      a2[1] = 2;
      a2[2] = 3;
      a2[3] = 1;
      a2[4] = 3;
      a2[5] = 1;
      a2[6] = 3;
      a2[7] = 0;
      return 28;
  }
  return result;
}

//----- (00000001401F67C0) ----------------------------------------------------
float            sub_1401F67C0(float a1, float a2)
{
  float component_delta;
  int floor_result;
  float input_value;

  if ( a1 <= a2 )
  {
    input_value = a2;
    component_delta = a2 - a1;
  }
  else
  {
    input_value = a1;
    component_delta = a1 - a2;
  }
  if ( component_delta >= 8.0 )
    return input_value;
  floor_result = (int)floor((float)(2.0 * component_delta));
  return (float)(input_value + flt_140281F40[floor_result])
       + (float)((float)((float)(2.0 * component_delta) - (float)floor_result) * (float)(flt_140281F40[floor_result + 1] - flt_140281F40[floor_result]));
}

//----- (00000001401F68D0) ----------------------------------------------------
__int64            sub_1401F68D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (           *a10)(int *, __int64, __int64, _QWORD, int, int, _QWORD, int),
        int a11)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 record_word_offset;
  void *alloca_result_2;
  unsigned __int64 scaled_index_2;
  void *alloca_result_3;
  int loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  float combined_products_2;
  float log_result;
  int input_value;
  int k;
  int j;
  int scaled_index_3;
  int i;
  int call_result;
  int m;
  int cached_scaled_index;
  __m128i *destination_buffer;
  float component_sum;
  int cached_scaled_index_2;
  float comparison_operand;
  float weighted_sum_3;
  float weighted_sum_4;
  int table_value;
  float *saved_alloca_result;
  int integer_quotient;
  int integer_quotient_2;
  float scaled_value;
  int *saved_alloca_result_2;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __m128i *destination_buffer_2;
  _DWORD *state_address;
  _DWORD destination_buffer_3[72];
  float float_buffer[24];
  float float_buffer_2[24];
  __int64 unused_local;

  memset(destination_buffer_3, 0, 0x20u);
  call_result = sub_1401A0850(a9);
  scaled_index_3 = call_result * a6;
  if ( call_result * a6 <= 960 )
    cached_scaled_index_2 = scaled_index_3;
  else
    cached_scaled_index_2 = 960;
  cached_scaled_index = cached_scaled_index_2;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    unused_written_slot = a1;
    if ( *(_DWORD *)(a1 + 48) << i == scaled_index_3 )
      break;
  }
  scaled_index = 4LL * (a7 + scaled_index_3) + 15;
  if ( scaled_index <= 4LL * (a7 + scaled_index_3) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer = (__m128i *)alloca_result;
  record_word_offset = 4LL * a6 + 15;
  if ( record_word_offset <= 4LL * a6 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result_2;
  scaled_index_2 = 4LL * cached_scaled_index + 15;
  if ( scaled_index_2 <= 4LL * cached_scaled_index )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (float *)alloca_result_3;
  sub_1401F6550(a8, destination_buffer_3);
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      destination_buffer_3[21 * j + 8 + k] = -1042284544;
  }
  for ( j = 0; j < a8; ++j )
  {
    integer_quotient = scaled_index_3 / cached_scaled_index;
    crt_memcpy(destination_buffer, (     __m128i *)(a4 + 4LL * a7 * j), 4LL * a7);
    a10(saved_alloca_result_2, 1, a2, (unsigned int)a8, j, a6, 0, input_value);
    sub_1401A08E0((__int64)saved_alloca_result_2, &SR_VEC_PTR_LANES(128, destination_buffer, i16)[2 * a7], scaled_index_3, 1, call_result, (float *)(a1 + 16), (float *)(a5 + 4LL * j), 0);
    component_sum = sub_1401A9C00((__int64)destination_buffer, (__int64)destination_buffer, a7 + scaled_index_3);
    if ( component_sum >= 9.9999998e17 )
    {
      crt_memset((void *)(uintptr_t)(destination_buffer), 0, 4LL * (a7 + scaled_index_3));
      *(_DWORD *)(a5 + 4LL * j) = 0;
    }
    crt_memset((void *)(uintptr_t)(float_buffer), 0, 0x54u);
    for ( m = 0; m < integer_quotient; ++m )
    {
      loaded_word = *(_DWORD *)(a1 + 40) - i;
      unused_written_slot_2 = a1 + 80;
      input_value = a11;
      sub_1401A1860(a1 + 80, (__int64)SR_VEC_LANES(128, destination_buffer[240 * m], i64), saved_alloca_result, *(float **)(a1 + 72), a7, loaded_word, 1);
      if ( call_result != 1 )
      {
        integer_quotient_2 = cached_scaled_index / call_result;
        for ( k = 0; k < integer_quotient_2; ++k )
          saved_alloca_result[k] = saved_alloca_result[k] * (float)call_result;
        while ( k < cached_scaled_index )
          saved_alloca_result[k++] = 0.0;
      }
      sub_1401A3450(a1, (__int64)saved_alloca_result, (__int64)float_buffer_2, 21, 1u, i);
      for ( k = 0; k < 21; ++k )
      {
        if ( float_buffer[k] <= float_buffer_2[k] )
          comparison_operand = float_buffer_2[k];
        else
          comparison_operand = float_buffer[k];
        float_buffer[k] = comparison_operand;
      }
    }
    sub_1401A6EA0(a1, 21, 21, (__int64)float_buffer, a3 + 84LL * j, 1u);
    for ( k = 1; k < 21; ++k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0) )
        weighted_sum_3 = *(float *)(a3 + 4LL * (21 * j + k - 1)) - 1.0;
      else
        weighted_sum_3 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = weighted_sum_3;
    }
    for ( k = 19; k >= 0; --k )
    {
      if ( *(float *)(a3 + 4LL * (k + 21 * j)) <= (float)(*(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0) )
        weighted_sum_4 = *(float *)(a3 + 4LL * (21 * j + k + 1)) - 2.0;
      else
        weighted_sum_4 = *(float *)(a3 + 4LL * (k + 21 * j));
      *(float *)(a3 + 4LL * (k + 21 * j)) = weighted_sum_4;
    }
    switch ( destination_buffer_3[j] )
    {
      case 1:
        for ( k = 0; k < 21; ++k )
        {
          weighted_sum = sub_1401F67C0(*(float *)&destination_buffer_3[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&destination_buffer_3[k + 8] = weighted_sum;
        }
        break;
      case 3:
        for ( k = 0; k < 21; ++k )
        {
          weighted_sum_2 = sub_1401F67C0(*(float *)&destination_buffer_3[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)));
          *(float *)&destination_buffer_3[k + 50] = weighted_sum_2;
        }
        break;
      case 2:
        for ( k = 0; k < 21; ++k )
        {
          combined_products = sub_1401F67C0(*(float *)&destination_buffer_3[k + 8], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&destination_buffer_3[k + 8] = combined_products;
          combined_products_2 = sub_1401F67C0(*(float *)&destination_buffer_3[k + 50], *(float *)(a3 + 4LL * (k + 21 * j)) - 0.5);
          *(float *)&destination_buffer_3[k + 50] = combined_products_2;
        }
        break;
    }
    destination_buffer_2 = (__m128i *)(a4 + 4LL * a7 * j);
    crt_memcpy(destination_buffer_2, (__m128i *)((char *)destination_buffer + 4 * scaled_index_3), 4LL * a7);
  }
  for ( k = 0; k < 21; ++k )
  {
    if ( *(float *)&destination_buffer_3[k + 50] <= *(float *)&destination_buffer_3[k + 8] )
      table_value = destination_buffer_3[k + 50];
    else
      table_value = destination_buffer_3[k + 8];
    destination_buffer_3[k + 29] = table_value;
  }
  log_result = 1.442695040888963 * log((float)(2.0 / (float)(a8 - 1)));
  scaled_value = 0.5 * log_result;
  for ( j = 0; j < 3; ++j )
  {
    for ( k = 0; k < 21; ++k )
      *(float *)&destination_buffer_3[21 * j + 8 + k] = *(float *)&destination_buffer_3[21 * j + 8 + k] + scaled_value;
  }
  for ( j = 0; j < a8; ++j )
  {
    if ( destination_buffer_3[j] )
    {
      state_address = &destination_buffer_3[21 * destination_buffer_3[j] - 13];
      for ( k = 0; k < 21; ++k )
        *(float *)(a3 + 4LL * (k + 21 * j)) = *(float *)(a3 + 4LL * (k + 21 * j)) - *(float *)&state_address[k];
    }
    else
    {
      for ( k = 0; k < 21; ++k )
        *(_DWORD *)(a3 + 4LL * (k + 21 * j)) = 0;
    }
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401F7450) ----------------------------------------------------
__int64            sub_1401F7450(int *a1, int a2, int a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  char *returned_pointer;
  _WORD *returned_pointer_2;
  int i;
  int j;
  unsigned int call_result;
  unsigned int call_result_2;
  int call_result_3;
  int call_result_4;
  int *returned_pointer_3;

  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  a1[67] = sub_1401A13B0();
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  if ( a8 != 1 )
    a1[68] = -1;
  a1[72] = -1000;
  a1[69] = a7;
  a1[70] = 5000;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 1 && !(unsigned int)sub_1401F64A0(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 2 && !(unsigned int)sub_1401F63C0(*a1, nullptr, nullptr) )
    return 0xFFFFFFFFLL;
  returned_pointer_3 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  call_result_3 = sub_1401E06F0(2);
  call_result_4 = sub_1401E06F0(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    call_result = sub_1401E0880(returned_pointer_3, a2, 2, a7);
    if ( call_result )
      return call_result;
    if ( j == a1[68] )
      sub_1401E0F40(returned_pointer_3, 10024, 1);
    returned_pointer_3 = (int *)((char *)returned_pointer_3 + (int)sub_1401E99B0(call_result_3));
  }
  while ( j < a1[1] )
  {
    call_result_2 = sub_1401E0880(returned_pointer_3, a2, 1, a7);
    if ( j == a1[68] )
      sub_1401E0F40(returned_pointer_3, 10024, 1);
    if ( call_result_2 )
      return call_result_2;
    returned_pointer_3 = (int *)((char *)returned_pointer_3 + (int)sub_1401E99B0(call_result_4));
    ++j;
  }
  if ( a8 == 1 )
  {
    returned_pointer = sub_1401F6230(a1);
    crt_memset((void *)(uintptr_t)(returned_pointer), 0, 4LL * a3);
    returned_pointer_2 = (_WORD *)sub_1401F6300((__int64)a1);
    crt_memset((void *)(uintptr_t)(returned_pointer_2), 0, 480LL * a3);
  }
  a1[71] = a8;
  return 0;
}

//----- (00000001401F77C0) ----------------------------------------------------
__int64            sub_1401F77C0(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int integer_quotient;
  int i;
  BOOL comparison_result;
  int scaled_index;
  int shifted_bits;
  int scaled_index_2;
  int scaled_index_3;
  int table_value;
  int scaled_index_4;
  int integer_quotient_2;
  int integer_quotient_3;
  int integer_quotient_4;
  int integer_quotient_5;
  int integer_quotient_6;
  int cached_integer_quotient;
  int shifted_bits_2;
  int integer_sum;
  int shifted_bits_3;

  comparison_result = a1[68] != -1;
  table_value = a1[2];
  scaled_index_2 = a1[1] - table_value - comparison_result + 2 * table_value;
  if ( a4 / a3 >= 50 )
    integer_quotient_2 = a4 / a3;
  else
    integer_quotient_2 = 50;
  scaled_index_3 = 40 * integer_quotient_2;
  if ( a1[72] == -1000 )
  {
    scaled_index = 8000 * comparison_result + (scaled_index_3 + a4 + 10000) * scaled_index_2;
  }
  else if ( a1[72] == -1 )
  {
    scaled_index = 128000 * comparison_result + 300000 * scaled_index_2;
  }
  else
  {
    scaled_index = a1[72];
  }
  if ( scaled_index / 20 >= 3000 )
    integer_quotient_4 = 3000;
  else
    integer_quotient_4 = scaled_index / 20;
  if ( a4 / a3 >= 50 )
    integer_quotient_3 = a4 / a3;
  else
    integer_quotient_3 = 50;
  scaled_index_4 = 15 * integer_quotient_3 + integer_quotient_4;
  integer_quotient = (scaled_index - scaled_index_2 * scaled_index_3 - comparison_result * scaled_index_4) / scaled_index_2 / 2;
  if ( integer_quotient <= 20000 )
    integer_quotient_5 = (scaled_index - scaled_index_2 * scaled_index_3 - comparison_result * (15 * integer_quotient_3 + integer_quotient_4)) / scaled_index_2 / 2;
  else
    integer_quotient_5 = 20000;
  if ( integer_quotient_5 >= 0 )
  {
    if ( integer_quotient <= 20000 )
      integer_quotient_6 = (scaled_index - scaled_index_2 * scaled_index_3 - comparison_result * (15 * integer_quotient_3 + integer_quotient_4)) / scaled_index_2 / 2;
    else
      integer_quotient_6 = 20000;
    cached_integer_quotient = integer_quotient_6;
  }
  else
  {
    cached_integer_quotient = 0;
  }
  shifted_bits = ((__int64)(scaled_index - comparison_result * scaled_index_4 - (a1[1] - comparison_result) * cached_integer_quotient - scaled_index_2 * scaled_index_3) << 8)
     / (32 * comparison_result + (table_value << 9) + ((a1[1] - table_value - comparison_result) << 8));
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    if ( i >= a1[2] )
    {
      if ( i == a1[68] )
      {
        if ( (char)(shifted_bits >> 3) + scaled_index_4 >= 0 )
          shifted_bits_3 = (char)(shifted_bits >> 3) + scaled_index_4;
        else
          shifted_bits_3 = 0;
        *(_DWORD *)(a2 + 4LL * i) = shifted_bits_3;
      }
      else
      {
        if ( shifted_bits + cached_integer_quotient >= 0 )
          integer_sum = shifted_bits + cached_integer_quotient;
        else
          integer_sum = 0;
        *(_DWORD *)(a2 + 4LL * i) = integer_sum + scaled_index_3;
      }
    }
    else
    {
      if ( (shifted_bits << 9 >> 8) + cached_integer_quotient >= 0 )
        shifted_bits_2 = (shifted_bits << 9 >> 8) + cached_integer_quotient;
      else
        shifted_bits_2 = 0;
      *(_DWORD *)(a2 + 4LL * i) = shifted_bits_2 + 80 * integer_quotient_2;
    }
  }
  return result;
}

//----- (00000001401F7B80) ----------------------------------------------------
__int64            sub_1401F7B80(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int i;
  int record_word_offset;
  int integer_quotient;

  if ( a1[72] == -1000 )
  {
    record_word_offset = 15000 * a1[1] + (60 * a4 / a3 + a4) * (a1[1] + a1[2]);
  }
  else if ( a1[72] == -1 )
  {
    record_word_offset = 320000 * (a1[2] + a1[1]);
  }
  else
  {
    record_word_offset = a1[72];
  }
  integer_quotient = record_word_offset / a1[1];
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = integer_quotient;
  }
  return result;
}

//----- (00000001401F7C80) ----------------------------------------------------
__int64            sub_1401F7C80(_DWORD *a1, __int64 a2, int a3)
{
  int i;
  int callee_output_word;
  unsigned int running_total;
  int loaded_word;
  int *returned_pointer;

  running_total = 0;
  returned_pointer = (_DWORD *)((char *)a1 + (int)sub_1401E99B0(292));
  sub_1401E0F40(returned_pointer, 4029, &callee_output_word);
  if ( a1[71] == 2 )
    sub_1401F7B80(a1, a2, a3, callee_output_word);
  else
    sub_1401F77C0(a1, a2, a3, callee_output_word);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( *(int *)(a2 + 4LL * i) <= 500 )
      loaded_word = 500;
    else
      loaded_word = *(_DWORD *)(a2 + 4LL * i);
    *(_DWORD *)(a2 + 4LL * i) = loaded_word;
    running_total += *(_DWORD *)(a2 + 4LL * i);
  }
  return running_total;
}

//----- (00000001401F7DB0) ----------------------------------------------------
__int64            sub_1401F7DB0(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(_DWORD *)(a1 + 4LL * a2 * i) = *(_DWORD *)(a3 + 4LL * (a5 + a4 * i));
  }
  return result;
}

//----- (00000001401F7E30) ----------------------------------------------------
__int64            sub_1401F7E30(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 result;
  signed int i;

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a1 + 4LL * a2 * i) = 0.000030517578 * (float)*(__int16 *)(a3 + 2LL * (a5 + a4 * i));
  }
  return result;
}

//----- (00000001401F7EC0) ----------------------------------------------------
_DWORD *           sub_1401F7EC0(_WORD *a1, int a2, int a3, __int64 a4, int a5, unsigned int a6, _DWORD *a7)
{
  _DWORD *result;

  result = a7;
  if ( !a3 )
    result = crt_memset((void *)(uintptr_t)(a1), 0, 4LL * (int)(a2 * a6));
  if ( a4 )
    return (_DWORD *)sub_1401F2380(a7, a4, a3, a5, (__int64)a1, a2, a6);
  return result;
}

//----- (00000001401F7F70) ----------------------------------------------------
_DWORD *           sub_1401F7F70(_WORD *a1, int a2, int a3, __int64 a4, int a5, unsigned int a6, _DWORD *a7)
{
  _DWORD *result;

  result = a7;
  if ( !a3 )
    result = crt_memset((void *)(uintptr_t)(a1), 0, 2LL * (int)(a2 * a6));
  if ( a4 )
    return (_DWORD *)sub_1401F2590(a7, a4, a3, a5, (__int64)a1, a2, a6);
  return result;
}

//----- (00000001401F8020) ----------------------------------------------------
__int64            sub_1401F8020(__int64 a1)
{
  return (int)sub_1401E99B0(4) + a1;
}

//----- (00000001401F8050) ----------------------------------------------------
char *           sub_1401F8050(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + 4);
}

//----- (00000001401F8090) ----------------------------------------------------
__int64            sub_1401F8090(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6, _DWORD *a7)
{
  return sub_1401F2280(a7, a3, a4, a1, a5, a2, a6);
}

//----- (00000001401F80F0) ----------------------------------------------------
__int64            sub_1401F80F0(__int64 a1, int a2, __int64 a3, int a4, int a5, unsigned int a6, _DWORD *a7)
{
  return sub_1401F2490(a7, a3, a4, a1, a5, a2, a6);
}

//----- (00000001401F8150) ----------------------------------------------------
__int64            sub_1401F8150(signed int a1, _DWORD *a2)
{
  int call_result;
  int scaled_index;

  if ( a1 < 1 || a1 > 227 )
    return 0xFFFFFFFFLL;
  call_result = sub_1401A6AE0(a1);
  scaled_index = a1 - call_result * call_result;
  if ( scaled_index && scaled_index != 2 )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = call_result;
  return 0;
}

//----- (00000001401F81E0) ----------------------------------------------------
__int64            sub_1401F81E0(signed int a1, int a2, int *a3, int *a4, _DWORD *a5)
{
  if ( a2 != 3 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)sub_1401F8150(a1, a5) )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a3 = (a1 + 1) / 2;
  if ( a4 )
    *a4 = a1 / 2;
  return 0;
}

//----- (00000001401F8260) ----------------------------------------------------
__int64            sub_1401F8260(__int64 a1)
{
  return (int)sub_1401E99B0(8) + a1;
}

//----- (00000001401F8290) ----------------------------------------------------
char *           sub_1401F8290(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + 8);
}

//----- (00000001401F82D0) ----------------------------------------------------
char *           sub_1401F82D0(_DWORD *a1)
{
  return (char *)a1 + (int)sub_1401E99B0(*a1 + a1[1] + 8);
}

//----- (00000001401F8310) ----------------------------------------------------
__int64            sub_1401F8310(__int64 a1, char *a2, int a3, int a4)
{
  _BYTE scratch_buffer[4];
  int call_result;
  int loaded_word;

  if ( a3 < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( (*(_BYTE *)a1 & 0xFC) != (*a2 & 0xFC) )
      return 4294967292LL;
  }
  else
  {
    *(_BYTE *)a1 = *a2;
    *(_DWORD *)(a1 + 488) = sub_1401E2D90(a2, 8000);
  }
  call_result = sub_1401E2EF0(a2, a3);
  if ( call_result < 1 )
    return 4294967292LL;
  if ( *(_DWORD *)(a1 + 488) * (*(_DWORD *)(a1 + 4) + call_result) > 960 )
    return 4294967292LL;
  loaded_word = sub_1401E99E0(
         a2,
         a3,
         a4,
         scratch_buffer,
         a1 + 8LL * *(int *)(a1 + 4) + 8,
         (__int16 *)(a1 + 2LL * *(int *)(a1 + 4) + 392),
         nullptr,
         nullptr);
  if ( loaded_word < 1 )
    return (unsigned int)loaded_word;
  *(_DWORD *)(a1 + 4) += call_result;
  return 0;
}

//----- (00000001401F8490) ----------------------------------------------------
__int64            sub_1401F8490(unsigned __int8 *a1, int a2, _WORD *a3)
{
  if ( a2 >= 1 )
  {
    if ( *a1 >= 0xFCu )
    {
      if ( a2 >= 2 )
      {
        *a3 = *a1 + 4 * a1[1];
        return 2;
      }
      else
      {
        *a3 = -1;
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      *a3 = *a1;
      return 1;
    }
  }
  else
  {
    *a3 = -1;
    return 0xFFFFFFFFLL;
  }
}

//----- (00000001401F858C) ----------------------------------------------------
__int64            sub_1401F858C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  __int64 int64_result;

  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  ((void (           *)(struct _EXCEPTION_POINTERS *))UnhandledExceptionFilter)(ExceptionInfo);
  int64_result = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (           *)(__int64, __int64))TerminateProcess)(int64_result, 3221226505LL);
}

// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored
// 14026E318: invalid function type 'HANDLE (__stdcall *GetCurrentProcess)()' has been ignored
// 14026E2B8: invalid function type 'BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)' has been ignored

//----- (00000001401F85C0) ----------------------------------------------------
__int64            sub_1401F85C0(__int64 a1)
{
  _UNKNOWN *retaddr;
  __int64 input_value;

  input_value = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(2u);
  sub_1401F88C4((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&input_value);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBE070 = input_value;
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  g_144CBDF68 = 1;
  g_144CBDF70 = 2;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

// 1401F85C0: invalid function type 'void __cdecl __noreturn sub_1401F85C0(uintptr_t StackCookie)' has been ignored

//----- (00000001401F8694) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401F8694()
{
  sub_1401F86A8(8u);
}

//----- (00000001401F86A8) ----------------------------------------------------
__int64            sub_1401F86A8(unsigned int a1)
{
  _UNKNOWN *retaddr;
  unsigned int input_value;

  input_value = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(input_value);
  capture_current_context_sr((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&input_value);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  g_144CBDF68 = 1;
  g_144CBDF70 = input_value;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

//----- (00000001401F8744) ----------------------------------------------------
__int64            sub_1401F8744(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int i;
  _UNKNOWN *retaddr;
  unsigned int input_value;
  unsigned int remaining_count;
  __int64 input_value_2;

  input_value_2 = a3;
  remaining_count = a2;
  input_value = a1;
  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(input_value);
  capture_current_context_sr((__int64)&g_144CBDFF0);
  g_144CBE0E8 = (uint64)(uintptr_t)(retaddr);
  g_144CBE088 = (uint64)(uintptr_t)(&input_value);
  g_144CBDF60 = (uint64)(uintptr_t)(retaddr);
  g_144CBDF50 = -1073740791;
  g_144CBDF54 = 1;
  if ( remaining_count && !input_value_2 )
    remaining_count = 0;
  if ( remaining_count > 0xE )
    --remaining_count;
  g_144CBDF68 = remaining_count + 1;
  g_144CBDF70 = input_value;
  for ( i = 0; i < remaining_count; ++i )
    *(_QWORD *)&dword_140404A6C[2 * i + 19064131] = *(_QWORD *)(input_value_2 + 8LL * i);
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

//----- (00000001401F8854) ----------------------------------------------------
__int64            capture_current_context_sr(__int64 a1)
{
  __int64 loaded_word;
  __int64 result;
  unsigned __int64 ImageBase;
  unsigned __int64 callee_output_word;
  __int64 callee_output_word_2;

  ((void (*)(void))RtlCaptureContext)();
  loaded_word = *(_QWORD *)(a1 + 248);
  result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(loaded_word, &ImageBase, 0);
  if ( result )
    return ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __int64, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
             0,
             ImageBase,
             loaded_word,
             result,
             a1,
             &callee_output_word_2,
             &callee_output_word,
             0);
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored

//----- (00000001401F88C4) ----------------------------------------------------
__int64            sub_1401F88C4(__int64 a1)
{
  __int64 loaded_word;
  int i;
  __int64 result;
  unsigned __int64 ImageBase;
  unsigned __int64 callee_output_word;
  __int64 callee_output_word_2;

  ((void (*)(void))RtlCaptureContext)();
  loaded_word = *(_QWORD *)(a1 + 248);
  for ( i = 0; i < 2; ++i )
  {
    result = ((__int64 (           *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(loaded_word, &ImageBase, 0);
    if ( !result )
      break;
    result = ((__int64 (           *)(_QWORD, unsigned __int64, __int64, __int64, __int64, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
               0,
               ImageBase,
               loaded_word,
               result,
               a1,
               &callee_output_word_2,
               &callee_output_word,
               0);
  }
  return result;
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored

//----- (00000001401F8938) ----------------------------------------------------
__int64            sub_1401F8938(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  sub_1401F8958(a2, a4, *(_QWORD *)(a4 + 56));
  return 1;
}

//----- (00000001401F8958) ----------------------------------------------------
__int64            sub_1401F8958(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 running_total;
  unsigned __int64 masked_bits;
  __int64 loaded_word;
  __int64 loaded_word_2;

  running_total = a1;
  masked_bits = a1;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    masked_bits = -*(_DWORD *)(a3 + 8) & (a1 + *(int *)(a3 + 4));
  loaded_word = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  loaded_word_2 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(loaded_word + loaded_word_2 + 3) & 0xF) != 0 )
    running_total += *(_BYTE *)(loaded_word + loaded_word_2 + 3) & 0xF0;
  return sub_1401F8B20(*(_QWORD *)((int)(*(_DWORD *)a3 & 0xFFFFFFF8) + masked_bits) ^ running_total);
}

//----- (00000001401F89D0) ----------------------------------------------------
unsigned __int64 __usercall  _chkstk/* rax */(unsigned __int64 size/* rax */)
{
  char *state_address;
  char *readgsqword_result;
  char callee_output_word;

  state_address = &callee_output_word - size;
  if ( (unsigned __int64)&callee_output_word < size )
    state_address = nullptr;
  readgsqword_result = (char *)__readgsqword(0x10u);
  if ( state_address < readgsqword_result )
  {
    LOWORD(state_address) = (unsigned __int16)state_address & 0xF000;
    do
    {
      readgsqword_result -= 4096;
      *readgsqword_result = 0;
    }
    while ( state_address != readgsqword_result );
  }
  return size;
}

//----- (00000001401F8A50)
__m128d sub_1401F8A50(double a1, __int64 a2, double a3) {
  uint64_t bits; __m128d pair; memcpy(&bits, &a1, sizeof(bits));
  if (sr_client_double_angle_pair_prepare(bits, &pair)) return pair;
  return dword_140302080 >= 2 ? sub_1401F9B00(pair) : (__m128d)sub_1401F9480(pair);
}

//----- (00000001401F8AC0)
__m128 sub_1401F8AC0(double a1, __int64 a2, double a3) {
  uint64_t bits; __m128 pair; double packed;
  memcpy(&bits, &a1, sizeof(bits));
  if (sr_client_angle_pair_prepare(bits, &pair)) return pair;
  memcpy(&packed, &pair, sizeof(packed));
  return dword_140302080 >= 2 ? sub_1401FAAC0(packed) : sub_1401FA180(packed);
}

//----- (00000001401F8B20) ----------------------------------------------------
__int64            sub_1401F8B20(__int64 a1)
{
  __int64 rol8_result;
  __int64 result;

  if ( a1 == _security_cookie )
  {
    rol8_result = __ROL8__(a1, 16);
    if ( !(_WORD)rol8_result )
      return result;
    a1 = __ROR8__(rol8_result, 16);
  }
  return sub_1401F85C0(a1);
}

//----- (00000001401F8B50) ----------------------------------------------------
__m128            sub_1401F8B50(double a1)
{
  if ( dword_140302080 < 2 )
    return sub_1401FB240(a1);
  return (__m128)sub_1401FB8F0(a1);
}

//----- (00000001401F8B64) ----------------------------------------------------
int         sub_1401F8B64()
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  int cached_rbx;
  int cached_rdx;
  int cached_rax;
  int xor_value;
  int cached_rcx;
  int masked_bits;
  unsigned __int64 integer_difference;
  __int64 selection_code;
  unsigned int state_word;
  int combined_flags;
  char cached_rax_2;

  _RAX = 0;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  cached_rbx = 0;
  cached_rdx = _RDX;
  cached_rax = _RAX;
  _RAX = 1;
  xor_value = _RCX ^ 0x6C65746E | _RBX ^ 0x756E6547;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  cached_rcx = _RCX;
  if ( !(cached_rdx ^ 0x49656E69 | xor_value)
    && ((qword_140302088 = -1, masked_bits = _RAX & 0xFFF3FF0, masked_bits == 67264)
     || masked_bits == 132704
     || masked_bits == 132720
     || (integer_difference = (unsigned int)(masked_bits - 198224), (unsigned int)integer_difference <= 0x20) && (selection_code = 0x100010001LL, _bittest64(&selection_code, integer_difference))) )
  {
    state_word = g_144CBE4C0 | 1;
    g_144CBE4C0 |= 1u;
  }
  else
  {
    state_word = g_144CBE4C0;
  }
  _RAX = 7;
  if ( cached_rax >= 7 )
  {
    _RCX = 0;
    __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
    cached_rbx = _RBX;
    if ( (_RBX & 0x200) != 0 )
      g_144CBE4C0 = state_word | 2;
  }
  dword_140302080 = 1;
  dword_140302084 = 2;
  if ( (cached_rcx & 0x100000) != 0 )
  {
    dword_140302080 = 2;
    dword_140302084 = 6;
    if ( (cached_rcx & 0x8000000) != 0 && (cached_rcx & 0x10000000) != 0 )
    {
      _RCX = 0;
      __asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(_RAX), "=d"(_RDX) : "c"(_RCX));
      cached_rax_2 = _RAX;
      if ( (_RAX & 6) == 6 )
      {
        combined_flags = dword_140302084 | 8;
        dword_140302080 = 3;
        dword_140302084 |= 8u;
        if ( (cached_rbx & 0x20) != 0 )
        {
          dword_140302080 = 5;
          dword_140302084 = combined_flags | 0x20;
          if ( (cached_rbx & 0xD0030000) == 0xD0030000 && (cached_rax_2 & 0xE0) == 0xE0 )
          {
            dword_140302084 |= 0x40u;
            dword_140302080 = 6;
          }
        }
      }
    }
  }
  return 0;
}

//----- (00000001401F8D08) ----------------------------------------------------
// attributes: thunk
void         j_j_free(void *Block)
{
  free_base(Block);
}

// 1401F8D08: control flows out of bounds to 1401FBF94

//----- (00000001401F8D10) ----------------------------------------------------
__int64            __scrt_narrow_argv_policy__configure_argv(CMFCToolBarImages *a1)
{
  int updated;

  updated = CMFCToolBarImages__UpdateInternalImage(a1);
  return sub_140245EA8(updated);
}

//----- (00000001401F8DB4) ----------------------------------------------------
char sub_1401F8DB4()
{
  signed __int64 readgsqword_result;
  signed __int64 interlockedcompareexchange64_result;

  if ( _acrt_locale_changed_sr() )
  {
    readgsqword_result = *(_QWORD *)(__readgsqword(0x30u) + 8);
    while ( 1 )
    {
      interlockedcompareexchange64_result = _InterlockedCompareExchange64((volatile signed __int64 *)&g_144CBE4D0, readgsqword_result, 0);
      if ( !interlockedcompareexchange64_result )
        break;
      if ( readgsqword_result == interlockedcompareexchange64_result )
        return 1;
    }
  }
  return 0;
}

//----- (00000001401F8DF0) ----------------------------------------------------
char sub_1401F8DF0()
{
  CMFCToolBarImages *unrecovered_register_value;
  int updated;

  if ( _acrt_locale_changed_sr() )
  {
    sub_1401F8B64();
  }
  else
  {
    updated = CMFCToolBarImages__UpdateInternalImage(unrecovered_register_value);
    if ( (unsigned int)sub_140245EA8(updated) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}

//----- (00000001401F8E24) ----------------------------------------------------
bool sub_1401F8E24()
{
  return sub_1401F8F6C(0) != 0;
}

//----- (00000001401F8E3C) ----------------------------------------------------
char sub_1401F8E3C()
{
  if ( !sub_1401FCF28() )
    return 0;
  if ( !(unsigned __int8)_acrt_thread_attach() )
  {
    sub_1401FCF3C();
    return 0;
  }
  return 1;
}

//----- (00000001401F8E64) ----------------------------------------------------
char ATL__CImage__CImageStaticInitialize()
{
  _acrt_thread_detach();
  sub_1401FCF3C();
  return 1;
}

//----- (00000001401F8E7C) ----------------------------------------------------
int            sub_1401F8E7C(
        __int64 a1,
        int a2,
        __int64 a3,
        void (           *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct sr_anon_67 *ExceptionPtr)
{
  if ( !_acrt_locale_changed_sr() && a2 == 1 )
    a4(a1, 0, a3);
  return ExceptionNum == 0xE06D7363u ? sub_14024502C(ExceptionNum, ExceptionPtr) : 0;
}

// 1401F8ED7: control flows out of bounds to 140245018

//----- (00000001401F8EDC) ----------------------------------------------------
int sub_1401F8EDC()
{
  int result;

  if ( _acrt_locale_changed_sr() )
    return sub_14024719C((_onexit_table_t *)(unsigned int *)&g_144CBE4E0);
  result = sub_14024560C();
  if ( !result )
    return sub_1402455F0();
  return result;
}

//----- (00000001401F8F0C) ----------------------------------------------------
char sub_1401F8F0C()
{
  ATL__CAtlStringMgr__StaticInitialize();
  return _acrt_uninitialize_critical();
}

//----- (00000001401F8F20) ----------------------------------------------------
char            sub_1401F8F20(int a1)
{
  char state_word;

  state_word = g_144CBE4D8;
  if ( !a1 )
    state_word = 1;
  LOBYTE(g_144CBE4D8) = state_word;
  sub_1401F8B64();
  if ( !sub_1401FCF00() )
    return 0;
  if ( !_acrt_initialize_sr() )
  {
    sub_1401FCF50(0);
    return 0;
  }
  return 1;
}

//----- (00000001401F8F6C) ----------------------------------------------------
char            sub_1401F8F6C(unsigned int a1)
{
  if ( !BYTE1(g_144CBE4D8) )
  {
    if ( a1 > 1 )
    {
      sub_1401FBFB8(5u);
      do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);
    }
    if ( !_acrt_locale_changed_sr() || a1 )
    {
      *(__m128i_u *)&g_144CBE4E0 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
      g_144CBE4F0 = -1;
      g_144CBE4F8 = g_144CBE4E0;
      g_144CBE508 = -1;
    }
    else if ( sub_1402471D8((sr_anon_91 *)(unsigned int *)&g_144CBE4E0)
           || sub_1402471D8((sr_anon_91 *)(unsigned int *)&g_144CBE4F8) )
    {
      return 0;
    }
    BYTE1(g_144CBE4D8) = 1;
  }
  return 1;
}

// 1401F8FF1: control flows out of bounds to 1401F8FF6

//----- (00000001401F8FF8)
bool sub_1401F8FF8(__int64 address) {
  return sr_client_image_address_readonly(GetModuleHandleW(NULL), (uintptr_t)address);
}

//----- (00000001401F9090) ----------------------------------------------------
_BOOL8            sub_1401F9090(char a1)
{
  _BOOL8 result;

  result = _acrt_locale_changed_sr();
  if ( result && !a1 )
    _InterlockedExchange64((volatile __int64 *)&g_144CBE4D0, 0);
  return result;
}

//----- (00000001401F90B4) ----------------------------------------------------
char            sub_1401F90B4(char a1, char a2)
{
  if ( !LOBYTE(g_144CBE4D8) || !a2 )
  {
    sub_1402474CC(a1);
    sub_1401FCF50(a1);
  }
  return 1;
}

//----- (00000001401F90E0) ----------------------------------------------------
__int64            sub_1401F90E0(__int64 a1)
{
  int masked_bits;
  __int64 unused_written_slot;

  if ( *(_QWORD *)&g_144CBE4E0 == -1 )
    masked_bits = sub_14024718C(a1);
  else
    masked_bits = sub_140247200((unsigned int *)&g_144CBE4E0, a1);
  unused_written_slot = 0;
  if ( !masked_bits )
    return a1;
  return unused_written_slot;
}

//----- (00000001401F913C) ----------------------------------------------------
__int64            sub_1401F913C(__int64 a1)
{
  return (unsigned int)(sub_1401F90E0(a1) != 0) - 1;
}

//----- (00000001401F9160) ----------------------------------------------------
_QWORD *           sub_1401F9160(_QWORD *a1, char a2)
{
  *a1 = (uint64)(uintptr_t)(off_140283488);
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}

//----- (00000001401F918C) ----------------------------------------------------
int sub_1401F918C(void)
{
  unsigned int call_result;
  unsigned int call_result_2;
  CMFCToolBarImages *unused_local;
  int updated;
  int call_result_3;
  int call_result_4;

  sub_140247754(2u);
  call_result = sub_1401FC358();
  sub_140247AD8(call_result);
  call_result_2 = sub_1401FC354();
  *sub_14024A0A0() = call_result_2;
  if ( !sub_1401F8F6C(1u) )
    goto LABEL_8;
  sub_1401FC3C8();
  sub_1401F913C((__int64)sub_1401FC404);
  updated = CMFCToolBarImages__UpdateInternalImage(NULL);
  if ( (unsigned int)sub_140245EA8(updated) )
    goto LABEL_8;
  sub_1401FC368();
  if ( sub_1401FC3AC() )
    sub_140247818((__int64)UserMathErrorFunction);
  nullsub_12();
  nullsub_13();
  call_result_3 = sub_1401FC364();
  sub_1402488E4(call_result_3);
  if ( sub_1401FC384() )
    initialize_narrow_environment();
  sub_1401FC148();
  call_result_4 = sub_1401FC140();
  if ( call_result_4 )
  {
LABEL_8:
    sub_1401FBFB8(7u);
    __asm__ volatile("int3");
    __builtin_unreachable();
  }
  return call_result_4;
}

// 1401F923C: control flows out of bounds to 1401F9241

//----- (00000001401F9244) ----------------------------------------------------
__int64 sub_1401F9244()
{
  sub_1401FC390();
  return 0;
}

//----- (00000001401F9254) ----------------------------------------------------
int sub_1401F9254()
{
  int call_result;

  sub_1401FC1A0();
  call_result = sub_1401FC360();
  return sub_14024A074(call_result);
}

//----- (00000001401F9270) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 _acrt_uninitialize_tmpfile()
{
  sub_1401FC2A4();
  return sub_1401F9284();
}

//----- (00000001401F9284) ----------------------------------------------------
__int64            sub_1401F9284()
{
  unsigned int winmain_sr_result;
  char selection_flag;
  unsigned int *returned_pointer;
  unsigned int *record_pointer;
  unsigned int *returned_pointer_2;
  __int64 *record_pointer_2;

  if ( !sub_1401F8F20(1) )
  {
    sub_1401FBFB8(7u);
    goto LABEL_19;
  }
  selection_flag = 0;
  LOBYTE(winmain_sr_result) = sub_1401F8DB4();
  if ( g_144CBE4C8 == 1 )
  {
LABEL_19:
    sub_1401FBFB8(7u);
    goto LABEL_20;
  }
  if ( g_144CBE4C8 )
  {
    selection_flag = 1;
  }
  else
  {
    g_144CBE4C8 = 1;
    if ( sub_140247A64((_PIFV *)&First, (_PIFV *)&Last) )
      return 255;
    sub_140247A00((sr_anon_92 *)&unk_14026E6B0, (sr_anon_92 *)&unk_14026E6C8);
    g_144CBE4C8 = 2;
  }
  sub_1401F9090(winmain_sr_result);
  returned_pointer = sub_1401FC3B8();
  record_pointer = returned_pointer;
  if ( *(_QWORD *)returned_pointer && sub_1401F8FF8((__int64)returned_pointer) )
    (*(void (**)(void *, unsigned, void *))record_pointer)(NULL, 2, NULL);
  returned_pointer_2 = sub_1401FC3C0();
  record_pointer_2 = (__int64 *)returned_pointer_2;
  if ( *(_QWORD *)returned_pointer_2 && sub_1401F8FF8((__int64)returned_pointer_2) )
    sub_140245614(*record_pointer_2);
  sub_1401FC104();
  unknown_libname_785();
  winmain_sr_result = WinMain_sr();
  if ( !is_managed_app() )
LABEL_20:
    exit(winmain_sr_result);
  if ( !selection_flag )
    sub_1402455F0();
  sub_1401F90B4(1, 0);
  return winmain_sr_result;
}

//----- (00000001401F93F8) ----------------------------------------------------
__int64            sub_1401F93F8()
{
  sub_1401FC104();
  unknown_libname_785();
  return WinMain_sr();
}

//----- (00000001401F9430) ----------------------------------------------------
void            sub_1401F9430()
{
  unsigned int call_result;

  call_result = sub_1401FC354();
  *sub_14024A0A0() = call_result;
}

//----- (00000001401F944C) ----------------------------------------------------
int         fegetround()
{
  unsigned int call_result;

  call_result = sub_1401FC358();
  return sub_140247AD8(call_result);
}

//----- (00000001401F9460) ----------------------------------------------------
__int64 start()
{
  sub_1401FC2A4();
  return sub_1401F9284();
}

//----- (00000001401F9480) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401F9480(__m128d a1)
{
  int bit_mask;
  __int128 masked_bits;
  double *saved_masked_bits;
  __m128i vector_result;
  __m128 vector_result_2;
  __m128d vector_result_3;
  __m128i vector_result_4;
  __m128d vector_result_5;
  __m128d vector_result_6;
  __m128d vector_result_7;
  __m128d loaded_vector;
  __m128d xor_vector;
  __m128 result;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_8;
  __int64 converted_integer;
  __m128i unrecovered_register_value;
  __m128i unrecovered_register_value_2;
  __m128i unrecovered_register_value_3;
  __m128i vector_result_9;
  __int64 vector_result_10;
  __m128i vector_result_11;
  __m128i loaded_vector_2;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i packed_vector;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i vector_result_18;
  __m128d vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128d xor_vector_2;
  __m128 vector_result_25;
  __m128i vector_result_26;
  __m128d xor_vector_3;
  __m128d xor_vector_4;
  __m128i vector_result_27;
  __m128d vector_result_28;
  __m128d vector_result_29;
  __m128 vector_result_30;
  __m128d vector_result_31;
  __m128d vector_result_32;
  __m128d vector_result_33;
  __m128d vector_result_34;
  __m128d vector_result_35;
  __m128i vector_result_36;
  __m128d vector_result_37;
  __m128 vector_result_38;
  __m128 loaded_vector_3;
  __int64 converted_integer_2;
  unsigned int vector_result_39;
  __m128d vector_result_40;
  __m128d vector_result_41;
  __m128d vector_result_42;
  __m128d vector_result_43;
  __m128d vector_result_44;
  __m128d vector_result_45;
  __m128d vector_result_46;
  __m128d vector_result_47;
  __m128d vector_result_48;
  __m128 saved_loaded_vector;
  __m128 saved_call_status;
  __int128 saved_masked_bits_2;
  /* 64-byte aligned and large enough: the original aligns v71 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE word_argument[128];
  unsigned __int64 unused_written_slot;

  bit_mask = 0;
  masked_bits = *(_OWORD *)&a1;
  saved_masked_bits = (double *)((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = (__m128i)_mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  vector_result_2 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  vector_result_3 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF00)), (__m128d)vector_result_2), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  vector_result_4 = _mm_slli_epi64((__m128i)vector_result_3, 0x3Fu);
  vector_result_5 = _mm_sub_pd(vector_result_3, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  vector_result_6 = _mm_sub_pd(
         _mm_sub_pd(
           _mm_sub_pd(
             _mm_sub_pd((__m128d)vector_result_2, _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F000)), vector_result_5)),
             _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F040)), vector_result_5)),
           _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F080)), vector_result_5)),
         _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F0C0)), vector_result_5));
  vector_result_7 = _mm_mul_pd(vector_result_6, vector_result_6);
  loaded_vector = _mm_cmpnle_pd((__m128d)vector_result_2, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EEC0)));
  xor_vector = (__m128d)_mm_xor_si128((__m128i)vector_result_6, vector_result_4);
  unused_written_slot = (unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL;
  result = (__m128)_mm_xor_si128(
                     (__m128i)_mm_add_pd(
                                xor_vector,
                                _mm_mul_pd(
                                  _mm_mul_pd(
                                    vector_result_7,
                                    _mm_add_pd(
                                      _mm_mul_pd(
                                        _mm_add_pd(
                                          _mm_mul_pd(
                                            _mm_add_pd(
                                              _mm_mul_pd(
                                                _mm_add_pd(
                                                  _mm_mul_pd(
                                                    _mm_add_pd(
                                                      _mm_mul_pd(
                                                        _mm_add_pd(
                                                          _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F340)), vector_result_7),
                                                          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F300))),
                                                        vector_result_7),
                                                      ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F2C0))),
                                                    vector_result_7),
                                                  ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F280))),
                                                vector_result_7),
                                              ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F240))),
                                            vector_result_7),
                                          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F200))),
                                        vector_result_7),
                                      ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F1C0)))),
                                  xor_vector)),
                     vector_result);
  if ( _mm_movemask_pd(loaded_vector) )
  {
    vector_result_8 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E000), (__m128i)vector_result_2), 0x34u);
    saved_call_status = result;
    saved_loaded_vector = (__m128)loaded_vector;
    converted_integer = (unsigned int)(24 * _mm_cvtsi128_si32(vector_result_8));
    saved_masked_bits_2 = masked_bits;
    SR_VEC_LANES(128, unrecovered_register_value, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer + 8);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer + 16);
    vector_result_9 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E010), (__m128i)vector_result_2),
            _mm_load_si128((const __m128i *)&xmmword_1B476E020));
    vector_result_10 = (unsigned int)(24 * _mm_extract_epi16(vector_result_8, 4));
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10 + 16);
    vector_result_11 = _mm_srli_epi64(vector_result_9, 0x20u);
    loaded_vector_2 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E030);
    bit_mask = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EB80)), vector_result_2), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))));
    vector_result_12 = _mm_srli_epi64(unrecovered_register_value_3, 0x20u);
    vector_result_13 = _mm_and_si128(vector_result_9, loaded_vector_2);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10 + 8);
    packed_vector = unrecovered_register_value_2;
    vector_result_14 = _mm_and_si128(unrecovered_register_value_2, loaded_vector_2);
    vector_result_15 = _mm_mul_epu32(vector_result_13, vector_result_14);
    vector_result_16 = _mm_srli_epi64(packed_vector, 0x20u);
    vector_result_17 = _mm_mul_epu32(vector_result_13, vector_result_16);
    SR_VEC_LANES(128, unrecovered_register_value, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10);
    vector_result_18 = _mm_and_si128(loaded_vector_2, unrecovered_register_value);
    vector_result_19 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(unrecovered_register_value_3, loaded_vector_2), vector_result_11), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(loaded_vector_2, vector_result_15),
                       _mm_add_epi64(_mm_mul_epu32(vector_result_11, vector_result_12), _mm_srli_epi64(_mm_mul_epu32(vector_result_12, vector_result_13), 0x20u))));
    vector_result_20 = _mm_mul_epu32(vector_result_13, vector_result_18);
    vector_result_21 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)vector_result_19, 0x20u),
            _mm_add_epi64(_mm_and_si128(loaded_vector_2, vector_result_17), _mm_add_epi64(_mm_mul_epu32(vector_result_14, vector_result_11), _mm_srli_epi64(vector_result_15, 0x20u))));
    vector_result_22 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_21, 0x20u),
            _mm_add_epi64(_mm_and_si128(loaded_vector_2, vector_result_20), _mm_add_epi64(_mm_mul_epu32(vector_result_16, vector_result_11), _mm_srli_epi64(vector_result_17, 0x20u))));
    vector_result_23 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(vector_result_22, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(vector_result_13, _mm_srli_epi64(unrecovered_register_value, 0x20u)), loaded_vector_2),
                  _mm_add_epi64(_mm_mul_epu32(vector_result_11, vector_result_18), _mm_srli_epi64(vector_result_20, 0x20u)))),
              0x20u),
            _mm_and_si128(vector_result_22, loaded_vector_2));
    vector_result_24 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E040), (__m128i)vector_result_2);
    xor_vector_2 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(vector_result_23, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E050), vector_result_24));
    vector_result_25 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E060)), xor_vector_2);
    vector_result_26 = _mm_add_epi64(_mm_slli_epi64(vector_result_21, 0x20u), _mm_and_si128((__m128i)vector_result_19, loaded_vector_2));
    xor_vector_3 = (__m128d)_mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E080), vector_result_24);
    xor_vector_4 = (__m128d)_mm_xor_si128(vector_result_24, _mm_load_si128((const __m128i *)&xmmword_1B476E0A0));
    vector_result_27 = _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E090), vector_result_26), 0x1Cu);
    vector_result_28 = _mm_sub_pd(xor_vector_2, _mm_sub_pd((__m128d)vector_result_25, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E060))));
    vector_result_29 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E0B0), vector_result_23), 0x28u),
                         _mm_srli_epi64(vector_result_26, 0x18u)),
                       (__m128i)xor_vector_4),
            xor_vector_4);
    vector_result_30 = (__m128)_mm_add_pd(vector_result_28, vector_result_29);
    vector_result_31 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E0F0)), vector_result_30);
    vector_result_32 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(vector_result_27, (__m128i)xor_vector_3), xor_vector_3),
            _mm_add_pd(vector_result_29, _mm_sub_pd(vector_result_28, (__m128d)vector_result_30)));
    vector_result_33 = _mm_sub_pd((__m128d)vector_result_30, vector_result_31);
    vector_result_34 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0D0)), vector_result_31);
    vector_result_35 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0D0)), vector_result_33), _mm_mul_pd(vector_result_31, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0E0)))),
            _mm_add_pd(_mm_mul_pd(vector_result_32, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E0E0)), vector_result_33)));
    vector_result_36 = (__m128i)_mm_and_ps(vector_result_25, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E070)));
    vector_result_37 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E100)), vector_result_2);
    vector_result_38 = (__m128)_mm_add_pd(vector_result_35, vector_result_34);
    loaded_vector_3 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E110)), vector_result_37);
    converted_integer_2 = (unsigned int)(32 * _mm_cvtsi128_si32(vector_result_36));
    SR_VEC_LANES(128, vector_result_32, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2);
    vector_result_39 = 32 * _mm_extract_epi16(vector_result_36, 4);
    vector_result_40 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(vector_result_37, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E110))), vector_result_2),
                     _mm_and_ps(vector_result_38, loaded_vector_3));
    SR_VEC_LANES(128, vector_result_19, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 8);
    SR_VEC_LANES(128, vector_result_19, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 8);
    vector_result_41 = _mm_mul_pd(vector_result_40, vector_result_19);
    SR_VEC_LANES(128, vector_result_33, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 16);
    SR_VEC_LANES(128, vector_result_33, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 16);
    vector_result_42 = _mm_add_pd(vector_result_33, vector_result_41);
    vector_result_43 = _mm_mul_pd(vector_result_40, vector_result_40);
    SR_VEC_LANES(128, vector_result_32, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39);
    vector_result_44 = _mm_mul_pd(vector_result_40, vector_result_32);
    vector_result_45 = _mm_add_pd(vector_result_32, vector_result_19);
    vector_result_46 = _mm_add_pd(vector_result_42, vector_result_44);
    vector_result_47 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(vector_result_41, _mm_sub_pd(vector_result_33, vector_result_42)), _mm_add_pd(vector_result_44, _mm_sub_pd(vector_result_42, vector_result_46))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED80)), vector_result_43), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED40))), vector_result_43),
                vector_result_40),
              vector_result_45));
    vector_result_48 = _mm_mul_pd(
            (__m128d)_mm_and_ps(loaded_vector_3, (__m128)_mm_add_pd(vector_result_35, _mm_sub_pd(vector_result_34, (__m128d)vector_result_38))),
            _mm_sub_pd(vector_result_45, _mm_mul_pd(vector_result_40, vector_result_33)));
    SR_VEC_LANES(128, vector_result_40, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 24);
    masked_bits = saved_masked_bits_2;
    SR_VEC_LANES(128, vector_result_40, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps(saved_loaded_vector, saved_call_status),
               _mm_and_ps(
                 (__m128)_mm_xor_si128(
                           (__m128i)_mm_add_pd(
                                      vector_result_46,
                                      _mm_add_pd(
                                        _mm_add_pd(
                                          vector_result_47,
                                          _mm_mul_pd(
                                            _mm_mul_pd(
                                              vector_result_43,
                                              _mm_add_pd(
                                                _mm_mul_pd(
                                                  _mm_add_pd(
                                                    _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE40)), vector_result_43),
                                                    ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE00))),
                                                  vector_result_43),
                                                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EDC0)))),
                                            vector_result_33)),
                                        _mm_add_pd(vector_result_40, vector_result_48))),
                           vector_result),
                 saved_loaded_vector));
  }
  if ( bit_mask )
  {
    *(_OWORD *)saved_masked_bits = masked_bits;
    *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    integer_sum = 0;
    bit_mask_2 = bit_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC440((__int64)&saved_masked_bits[integer_sum], &saved_masked_bits[integer_sum + 8]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 2 );
    return *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

// 1401F9680: conditional instruction was optimized away because r9d.4!=0
// 1401F9480: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401F9B00) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128d            sub_1401F9B00(__m128d a1)
{
  int bit_mask;
  double *scaled_value;
  __m128 vector_result;
  __m128d vector_result_2;
  __m128 vector_result_3;
  __m128d vector_result_4;
  __m128 vector_result_5;
  __m128 vector_result_6;
  __m128d vector_result_7;
  __m128d loaded_vector;
  __m128d xor_vector;
  __m128d xor_vector_2;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_8;
  __int64 converted_integer;
  __m128i unrecovered_register_value;
  __m128i unrecovered_register_value_2;
  __m128i unrecovered_register_value_3;
  __m128i vector_result_9;
  __int64 vector_result_10;
  __m128i vector_result_11;
  __m128i si128;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i packed_vector;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i vector_result_18;
  __m128d vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128d xor_vector_3;
  __m128 vector_result_25;
  __m128i vector_result_26;
  __m128d xor_vector_4;
  __m128d xor_vector_5;
  __m128i vector_result_27;
  __m128d vector_result_28;
  __m128d vector_result_29;
  __m128 vector_result_30;
  __m128d vector_result_31;
  __m128d vector_result_32;
  __m128d vector_result_33;
  __m128d vector_result_34;
  __m128d vector_result_35;
  __m128i vector_result_36;
  __m128d vector_result_37;
  __m128 vector_result_38;
  __m128 loaded_vector_2;
  __int64 converted_integer_2;
  unsigned int vector_result_39;
  __m128d vector_result_40;
  __m128d vector_result_41;
  __m128d vector_result_42;
  __m128d vector_result_43;
  __m128d vector_result_44;
  __m128d vector_result_45;
  __m128d vector_result_46;
  __m128d vector_result_47;
  __m128d vector_result_48;
  __m128d saved_loaded_vector;
  __m128d saved_xor_vector;
  __int128 masked_bits;
  /* 64-byte aligned and large enough: the original aligns v71 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE word_argument[128];
  unsigned __int64 unused_written_slot;

  bit_mask = 0;
  scaled_value = (double *)((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)));
  vector_result_2 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF00)), (__m128d)vector_result), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  vector_result_3 = (__m128)_mm_slli_epi64((__m128i)vector_result_2, 0x3Fu);
  vector_result_4 = _mm_sub_pd(vector_result_2, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EF40)));
  vector_result_5 = _mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EE80)), *(__m128_u *)&a1);
  vector_result_6 = (__m128)_mm_sub_pd(
                 _mm_sub_pd(
                   _mm_sub_pd(
                     _mm_sub_pd((__m128d)vector_result, _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F000)), vector_result_4)),
                     _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F040)), vector_result_4)),
                   _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F080)), vector_result_4)),
                 _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F0C0)), vector_result_4));
  vector_result_7 = _mm_mul_pd((__m128d)vector_result_6, (__m128d)vector_result_6);
  loaded_vector = _mm_cmpnle_pd((__m128d)vector_result, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EEC0)));
  xor_vector = (__m128d)_mm_xor_ps(vector_result_6, vector_result_3);
  unused_written_slot = (unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL;
  xor_vector_2 = (__m128d)_mm_xor_ps(
                   (__m128)_mm_add_pd(
                             xor_vector,
                             _mm_mul_pd(
                               _mm_mul_pd(
                                 vector_result_7,
                                 _mm_add_pd(
                                   _mm_mul_pd(
                                     _mm_add_pd(
                                       _mm_mul_pd(
                                         _mm_add_pd(
                                           _mm_mul_pd(
                                             _mm_add_pd(
                                               _mm_mul_pd(
                                                 _mm_add_pd(
                                                   _mm_mul_pd(
                                                     _mm_add_pd(
                                                       _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F340)), vector_result_7),
                                                       ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F300))),
                                                     vector_result_7),
                                                   ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F2C0))),
                                                 vector_result_7),
                                               ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F280))),
                                             vector_result_7),
                                           ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F240))),
                                         vector_result_7),
                                       ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F200))),
                                     vector_result_7),
                                   ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477F1C0)))),
                               xor_vector)),
                   vector_result_5);
  if ( _mm_movemask_pd(loaded_vector) )
  {
    vector_result_8 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E200), (__m128i)vector_result), 0x34u);
    masked_bits = *(_OWORD *)&a1;
    saved_loaded_vector = loaded_vector;
    converted_integer = (unsigned int)(24 * _mm_cvtsi128_si32(vector_result_8));
    saved_xor_vector = xor_vector_2;
    SR_VEC_LANES(128, unrecovered_register_value, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer + 8);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[0] = *(_QWORD *)((char *)&unk_1B476E900 + converted_integer + 16);
    vector_result_9 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E210), (__m128i)vector_result),
            _mm_load_si128((const __m128i *)&xmmword_1B476E220));
    vector_result_10 = (unsigned int)(24 * _mm_extract_epi16(vector_result_8, 4));
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10 + 16);
    vector_result_11 = _mm_srli_epi64(vector_result_9, 0x20u);
    si128 = _mm_load_si128((     __m128i *)&xmmword_1B476E230);
    bit_mask = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(vector_result, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EB80))));
    vector_result_12 = _mm_srli_epi64(unrecovered_register_value_3, 0x20u);
    vector_result_13 = _mm_and_si128(vector_result_9, si128);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10 + 8);
    packed_vector = unrecovered_register_value_2;
    vector_result_14 = _mm_and_si128(unrecovered_register_value_2, si128);
    vector_result_15 = _mm_mul_epu32(vector_result_13, vector_result_14);
    vector_result_16 = _mm_srli_epi64(packed_vector, 0x20u);
    vector_result_17 = _mm_mul_epu32(vector_result_13, vector_result_16);
    SR_VEC_LANES(128, unrecovered_register_value, i64)[1] = *(__int64 *)((char *)&unk_1B476E900 + vector_result_10);
    vector_result_18 = _mm_and_si128(si128, unrecovered_register_value);
    vector_result_19 = (__m128d)_mm_add_epi64(
                     _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(unrecovered_register_value_3, si128), vector_result_11), 0x20u),
                     _mm_add_epi64(
                       _mm_and_si128(si128, vector_result_15),
                       _mm_add_epi64(_mm_mul_epu32(vector_result_11, vector_result_12), _mm_srli_epi64(_mm_mul_epu32(vector_result_12, vector_result_13), 0x20u))));
    vector_result_20 = _mm_mul_epu32(vector_result_13, vector_result_18);
    vector_result_21 = _mm_add_epi64(
            _mm_srli_epi64((__m128i)vector_result_19, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, vector_result_17), _mm_add_epi64(_mm_mul_epu32(vector_result_14, vector_result_11), _mm_srli_epi64(vector_result_15, 0x20u))));
    vector_result_22 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_21, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, vector_result_20), _mm_add_epi64(_mm_mul_epu32(vector_result_16, vector_result_11), _mm_srli_epi64(vector_result_17, 0x20u))));
    vector_result_23 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(vector_result_22, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(vector_result_13, _mm_srli_epi64(unrecovered_register_value, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(vector_result_11, vector_result_18), _mm_srli_epi64(vector_result_20, 0x20u)))),
              0x20u),
            _mm_and_si128(vector_result_22, si128));
    vector_result_24 = _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E240), (__m128i)vector_result);
    xor_vector_3 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(vector_result_23, 0xCu),
                     _mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E250), vector_result_24));
    vector_result_25 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E260)), xor_vector_3);
    vector_result_26 = _mm_add_epi64(_mm_slli_epi64(vector_result_21, 0x20u), _mm_and_si128((__m128i)vector_result_19, si128));
    xor_vector_4 = (__m128d)_mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E280), vector_result_24);
    xor_vector_5 = (__m128d)_mm_xor_si128(vector_result_24, _mm_load_si128((const __m128i *)&xmmword_1B476E2A0));
    vector_result_27 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E290), vector_result_26), 0x1Cu);
    vector_result_28 = _mm_sub_pd(xor_vector_3, _mm_sub_pd((__m128d)vector_result_25, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E260))));
    vector_result_29 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E2B0), vector_result_23), 0x28u),
                         _mm_srli_epi64(vector_result_26, 0x18u)),
                       (__m128i)xor_vector_5),
            xor_vector_5);
    vector_result_30 = (__m128)_mm_add_pd(vector_result_28, vector_result_29);
    vector_result_31 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E2F0)), vector_result_30);
    vector_result_32 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(vector_result_27, (__m128i)xor_vector_4), xor_vector_4),
            _mm_add_pd(vector_result_29, _mm_sub_pd(vector_result_28, (__m128d)vector_result_30)));
    vector_result_33 = _mm_sub_pd((__m128d)vector_result_30, vector_result_31);
    vector_result_34 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2D0)), vector_result_31);
    vector_result_35 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2D0)), vector_result_33), _mm_mul_pd(vector_result_31, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2E0)))),
            _mm_add_pd(_mm_mul_pd(vector_result_32, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E2E0)), vector_result_33)));
    vector_result_36 = (__m128i)_mm_and_ps(vector_result_25, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E270)));
    vector_result_37 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E300)), vector_result);
    vector_result_38 = (__m128)_mm_add_pd(vector_result_35, vector_result_34);
    loaded_vector_2 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E310)), vector_result_37);
    converted_integer_2 = (unsigned int)(32 * _mm_cvtsi128_si32(vector_result_36));
    SR_VEC_LANES(128, vector_result_32, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2);
    vector_result_39 = 32 * _mm_extract_epi16(vector_result_36, 4);
    vector_result_40 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(vector_result_37, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E310))), vector_result),
                     _mm_and_ps(vector_result_38, loaded_vector_2));
    SR_VEC_LANES(128, vector_result_19, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 8);
    SR_VEC_LANES(128, vector_result_19, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 8);
    vector_result_41 = _mm_mul_pd(vector_result_40, vector_result_19);
    SR_VEC_LANES(128, vector_result_33, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 16);
    SR_VEC_LANES(128, vector_result_33, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 16);
    vector_result_42 = _mm_add_pd(vector_result_33, vector_result_41);
    vector_result_43 = _mm_mul_pd(vector_result_40, vector_result_40);
    SR_VEC_LANES(128, vector_result_32, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39);
    vector_result_44 = _mm_mul_pd(vector_result_40, vector_result_32);
    vector_result_45 = _mm_add_pd(vector_result_32, vector_result_19);
    vector_result_46 = _mm_add_pd(vector_result_42, vector_result_44);
    vector_result_47 = _mm_mul_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED80)), vector_result_43), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477ED40))), vector_result_43),
            vector_result_40);
    vector_result_48 = _mm_mul_pd(
            (__m128d)_mm_and_ps(loaded_vector_2, (__m128)_mm_add_pd(vector_result_35, _mm_sub_pd(vector_result_34, (__m128d)vector_result_38))),
            _mm_sub_pd(vector_result_45, _mm_mul_pd(vector_result_40, vector_result_33)));
    SR_VEC_LANES(128, vector_result_40, f64)[0] = *(double *)((char *)&unk_1B477AB00 + converted_integer_2 + 24);
    SR_VEC_LANES(128, vector_result_40, f64)[1] = *(double *)((char *)&unk_1B477AB00 + vector_result_39 + 24);
    xor_vector_2 = _mm_blendv_pd(
            saved_xor_vector,
            (__m128d)_mm_xor_ps(
                       (__m128)_mm_add_pd(
                                 vector_result_46,
                                 _mm_add_pd(
                                   _mm_add_pd(
                                     _mm_add_pd(
                                       _mm_add_pd(
                                         _mm_add_pd(vector_result_41, _mm_sub_pd(vector_result_33, vector_result_42)),
                                         _mm_add_pd(vector_result_44, _mm_sub_pd(vector_result_42, vector_result_46))),
                                       _mm_mul_pd(vector_result_47, vector_result_45)),
                                     _mm_mul_pd(
                                       _mm_mul_pd(
                                         vector_result_43,
                                         _mm_add_pd(
                                           _mm_mul_pd(
                                             _mm_add_pd(
                                               _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE40)), vector_result_43),
                                               ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EE00))),
                                             vector_result_43),
                                           ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B477EDC0)))),
                                       vector_result_33)),
                                   _mm_add_pd(vector_result_40, vector_result_48))),
                       vector_result_5),
            saved_loaded_vector);
    *(_OWORD *)&a1 = masked_bits;
  }
  if ( bit_mask )
  {
    *(_OWORD *)scaled_value = *(_OWORD *)&a1;
    *(__m128d_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = xor_vector_2;
    integer_sum = 0;
    bit_mask_2 = bit_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC440((__int64)&scaled_value[integer_sum], &scaled_value[integer_sum + 8]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 2 );
    return *(__m128d_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return xor_vector_2;
}

// 1401F9D07: conditional instruction was optimized away because r9d.4!=0
// 1401F9B00: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FA180) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FA180(double a1)
{
  int bit_mask;
  float *scaled_value;
  __m128 vector_result;
  __m128 vector_result_2;
  __m128 vector_result_3;
  __m128 vector_result_4;
  __m128 vector_result_5;
  __m128 xor_vector;
  __m128 loaded_vector;
  __m128 xor_vector_2;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_6;
  __m128i vector_result_7;
  unsigned int reordered_vector;
  unsigned int reordered_vector_2;
  unsigned int converted_integer;
  unsigned int reordered_vector_3;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i reordered_vector_4;
  __m128i reordered_vector_5;
  __m128i reordered_vector_6;
  __m128i reordered_vector_7;
  __m128i vector_result_8;
  __m128i vector_result_9;
  __m128i vector_result_10;
  __m128i vector_result_11;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i reordered_vector_8;
  __m128i vector_result_16;
  __m128i loaded_vector_2;
  __m128i vector_result_17;
  __m128i reordered_vector_9;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128i vector_result_25;
  __m128i vector_result_26;
  __m128i vector_result_27;
  __m128i vector_result_28;
  __m128i vector_result_29;
  __m128i loaded_vector_3;
  __m128i loaded_vector_4;
  __m128i vector_result_30;
  __m128i vector_result_31;
  __m128i vector_result_32;
  __m128i vector_result_33;
  __m128 xor_vector_3;
  __m128 reordered_vector_10;
  __m128 xor_vector_4;
  __m128 xor_vector_5;
  __m128 vector_result_34;
  __m128 vector_result_35;
  __m128 vector_result_36;
  __m128 reordered_vector_11;
  __m128 reordered_vector_12;
  __m128 vector_result_37;
  __m128 vector_result_38;
  __m128 reordered_vector_13;
  __m128 vector_result_39;
  __m128 vector_result_40;
  __m128 vector_result_41;
  __m128 vector_result_42;
  __m128 vector_result_43;
  __m128i vector_result_44;
  __m128 vector_result_45;
  __m128 vector_result_46;
  __m128 comparison_vector;
  unsigned int converted_integer_2;
  unsigned int reordered_vector_14;
  __m128 vector_result_47;
  __m128 vector_result_48;
  unsigned int reordered_vector_15;
  unsigned int reordered_vector_16;
  __m128 reordered_vector_17;
  __m128 reordered_vector_18;
  __m128 vector_result_49;
  __m128 vector_result_50;
  __m128 vector_result_51;
  __m128 reordered_vector_19;
  __m128 vector_result_52;
  __m128 vector_result_53;
  __m128 vector_result_54;
  __m128 masked_bits;
  __m128 saved_loaded_vector;
  __m128 saved_xor_vector;
  __m128i saved_vector_result;
  __m128i saved_vector_result_2;
  __m128i scratch_buffer[2];
  __m128i vector_result_55;
  __m128i scratch_buffer_2[4];
  /* 64-byte aligned and large enough: the original aligns v101 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE word_argument[128];
  unsigned __int64 unused_written_slot;

  bit_mask = 0;
  scaled_value = (float *)((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)));
  vector_result_2 = _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781580)), vector_result), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  vector_result_3 = _mm_sub_ps(vector_result_2, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  vector_result_4 = _mm_sub_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             _mm_sub_ps(vector_result, _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47812C0)), vector_result_3)),
             _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781300)), vector_result_3)),
           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781340)), vector_result_3)),
         _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781380)), vector_result_3));
  vector_result_5 = _mm_mul_ps(vector_result_4, vector_result_4);
  xor_vector = (__m128)_mm_xor_si128((__m128i)vector_result_4, _mm_slli_epi32((__m128i)vector_result_2, 0x1Fu));
  loaded_vector = _mm_cmpnle_ps(vector_result, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781140)));
  unused_written_slot = (unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL;
  xor_vector_2 = (__m128)_mm_xor_si128(
                  (__m128i)_mm_add_ps(
                             xor_vector,
                             _mm_mul_ps(
                               _mm_mul_ps(
                                 vector_result_5,
                                 _mm_add_ps(
                                   _mm_mul_ps(
                                     _mm_add_ps(
                                       _mm_mul_ps(
                                         _mm_add_ps(
                                           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781540)), vector_result_5),
                                           ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781500))),
                                         vector_result_5),
                                       ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47814C0))),
                                     vector_result_5),
                                   ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781480)))),
                               xor_vector)),
                  (__m128i)_mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)), *(__m128_u *)&a1));
  if ( _mm_movemask_ps(loaded_vector) )
  {
    saved_xor_vector = xor_vector_2;
    vector_result_6 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), *(__m128i_u *)&a1), 0x17u);
    vector_result_7 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(vector_result_6, 1u), vector_result_6), 2u);
    reordered_vector = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_7, 2));
    reordered_vector_2 = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_7, 3));
    converted_integer = _mm_cvtsi128_si32(vector_result_7);
    reordered_vector_3 = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_7, 1));
    saved_loaded_vector = loaded_vector;
    converted_vector = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector + 4));
    converted_vector_2 = _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_2 + 4));
    bit_mask = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(vector_result, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))));
    masked_bits = *(__m128_u *)&a1;
    reordered_vector_4 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_3))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_2))));
    reordered_vector_5 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_3 + 8)));
    reordered_vector_6 = _mm_unpacklo_epi32(
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector + 8)),
            _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_2 + 8)));
    reordered_vector_7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    vector_result_8 = _mm_srli_epi32(reordered_vector_4, 0x10u);
    vector_result_9 = _mm_and_si128(reordered_vector_4, reordered_vector_7);
    saved_vector_result = vector_result_8;
    vector_result_10 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), *(__m128i_u *)&a1),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    vector_result_11 = _mm_and_si128(vector_result_10, reordered_vector_7);
    vector_result_12 = _mm_srli_epi64(vector_result_9, 0x20u);
    vector_result_13 = _mm_srli_epi64(vector_result_11, 0x20u);
    vector_result_14 = _mm_srli_epi32(vector_result_10, 0x10u);
    vector_result_15 = _mm_mul_epu32(vector_result_11, vector_result_9);
    reordered_vector_8 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer + 4)),
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + reordered_vector_3 + 4))),
            _mm_unpacklo_epi32(converted_vector, converted_vector_2));
    vector_result_16 = _mm_and_si128(reordered_vector_8, reordered_vector_7);
    saved_vector_result_2 = vector_result_9;
    loaded_vector_2 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E400);
    scratch_buffer_2[0] = _mm_or_si128(_mm_and_si128(vector_result_15, loaded_vector_2), _mm_slli_epi64(_mm_mul_epu32(vector_result_13, vector_result_12), 0x20u));
    vector_result_17 = _mm_srli_epi64(vector_result_16, 0x20u);
    scratch_buffer[0] = _mm_srli_epi32(reordered_vector_8, 0x10u);
    vector_result_55 = _mm_srli_epi64(scratch_buffer[0], 0x20u);
    reordered_vector_9 = _mm_unpacklo_epi64(reordered_vector_5, reordered_vector_6);
    vector_result_18 = _mm_and_si128(reordered_vector_9, reordered_vector_7);
    vector_result_19 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(vector_result_11, vector_result_16), loaded_vector_2), _mm_slli_epi64(_mm_mul_epu32(vector_result_13, vector_result_17), 0x20u));
    vector_result_20 = _mm_srli_epi64(vector_result_14, 0x20u);
    vector_result_21 = _mm_srli_epi32(reordered_vector_9, 0x10u);
    scratch_buffer[1] = vector_result_12;
    vector_result_22 = _mm_srli_epi64(vector_result_21, 0x20u);
    vector_result_23 = _mm_or_si128(_mm_and_si128(_mm_mul_epu32(vector_result_11, scratch_buffer[0]), loaded_vector_2), _mm_slli_epi64(_mm_mul_epu32(vector_result_13, vector_result_55), 0x20u));
    vector_result_24 = _mm_add_epi32(
            _mm_srli_epi32(
              _mm_or_si128(
                _mm_and_si128(_mm_mul_epu32(vector_result_14, vector_result_18), loaded_vector_2),
                _mm_slli_epi64(_mm_mul_epu32(_mm_srli_epi64(vector_result_18, 0x20u), vector_result_20), 0x20u)),
              0x10u),
            _mm_add_epi32(
              _mm_and_si128(vector_result_19, reordered_vector_7),
              _mm_add_epi32(
                _mm_or_si128(
                  _mm_and_si128(_mm_mul_epu32(vector_result_14, vector_result_21), loaded_vector_2),
                  _mm_slli_epi64(_mm_mul_epu32(vector_result_20, vector_result_22), 0x20u)),
                _mm_srli_epi32(
                  _mm_or_si128(
                    _mm_and_si128(_mm_mul_epu32(vector_result_21, vector_result_11), loaded_vector_2),
                    _mm_slli_epi64(_mm_mul_epu32(vector_result_22, vector_result_13), 0x20u)),
                  0x10u))));
    vector_result_25 = _mm_add_epi32(
            _mm_and_si128(vector_result_23, reordered_vector_7),
            _mm_add_epi32(
              _mm_or_si128(_mm_and_si128(_mm_mul_epu32(vector_result_16, vector_result_14), loaded_vector_2), _mm_slli_epi64(_mm_mul_epu32(vector_result_17, vector_result_20), 0x20u)),
              _mm_srli_epi32(vector_result_19, 0x10u)));
    vector_result_26 = _mm_mul_epu32(_mm_loadu_si128(&vector_result_55), vector_result_20);
    vector_result_27 = _mm_mul_epu32(vector_result_20, vector_result_12);
    vector_result_28 = _mm_add_epi32(
            _mm_or_si128(_mm_and_si128(_mm_mul_epu32(_mm_loadu_si128(scratch_buffer), vector_result_14), loaded_vector_2), _mm_slli_epi64(vector_result_26, 0x20u)),
            _mm_srli_epi32(vector_result_23, 0x10u));
    vector_result_29 = _mm_add_epi32(_mm_srli_epi32(vector_result_24, 0x10u), vector_result_25);
    loaded_vector_3 = _mm_loadu_si128(&saved_vector_result);
    loaded_vector_4 = _mm_loadu_si128(scratch_buffer_2);
    vector_result_30 = _mm_add_epi32(_mm_srli_epi32(vector_result_29, 0x10u), _mm_add_epi32(_mm_and_si128(loaded_vector_4, reordered_vector_7), vector_result_28));
    vector_result_31 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(vector_result_30, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(
                    _mm_or_si128(
                      _mm_and_si128(_mm_mul_epu32(vector_result_11, loaded_vector_3), loaded_vector_2),
                      _mm_slli_epi64(_mm_mul_epu32(vector_result_13, _mm_srli_epi64(loaded_vector_3, 0x20u)), 0x20u)),
                    reordered_vector_7),
                  _mm_add_epi32(
                    _mm_or_si128(_mm_and_si128(_mm_mul_epu32(vector_result_14, saved_vector_result_2), loaded_vector_2), _mm_slli_epi64(vector_result_27, 0x20u)),
                    _mm_srli_epi32(loaded_vector_4, 0x10u)))),
              0x10u),
            _mm_and_si128(vector_result_30, reordered_vector_7));
    vector_result_32 = _mm_add_epi32(_mm_slli_epi32(vector_result_29, 0x10u), _mm_and_si128(vector_result_24, reordered_vector_7));
    *(__m128_u *)&a1 = masked_bits;
    vector_result_33 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)masked_bits);
    xor_vector_3 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(vector_result_31, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), vector_result_33));
    reordered_vector_10 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    xor_vector_4 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), vector_result_33);
    xor_vector_5 = (__m128)_mm_xor_si128(vector_result_33, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    vector_result_34 = _mm_add_ps(xor_vector_3, reordered_vector_10);
    vector_result_35 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), vector_result_31), 0xEu),
                        _mm_srli_epi32(vector_result_32, 0x12u)),
                      (__m128i)xor_vector_5),
            xor_vector_5);
    vector_result_36 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), vector_result_32), 5u),
                      (__m128i)xor_vector_4),
            xor_vector_4);
    reordered_vector_11 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    reordered_vector_12 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    vector_result_37 = _mm_sub_ps(xor_vector_3, _mm_sub_ps(vector_result_34, reordered_vector_10));
    vector_result_38 = _mm_add_ps(vector_result_37, vector_result_35);
    reordered_vector_13 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    vector_result_39 = _mm_add_ps(vector_result_36, _mm_add_ps(vector_result_35, _mm_sub_ps(vector_result_37, vector_result_38)));
    vector_result_40 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), vector_result_38);
    vector_result_41 = _mm_mul_ps(reordered_vector_13, vector_result_40);
    vector_result_42 = _mm_sub_ps(vector_result_38, vector_result_40);
    vector_result_43 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(reordered_vector_13, vector_result_42), _mm_mul_ps(vector_result_40, reordered_vector_11)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), vector_result_39),
              _mm_mul_ps(reordered_vector_11, vector_result_42)));
    vector_result_44 = _mm_slli_epi32(_mm_and_si128((__m128i)vector_result_34, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    vector_result_45 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), masked_bits);
    vector_result_46 = _mm_add_ps(vector_result_43, vector_result_41);
    comparison_vector = _mm_cmplt_ps(reordered_vector_12, vector_result_45);
    converted_integer_2 = _mm_cvtsi128_si32(vector_result_44);
    reordered_vector_14 = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_44, 2));
    vector_result_47 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(vector_result_45, reordered_vector_12), masked_bits), _mm_and_ps(vector_result_46, comparison_vector));
    vector_result_48 = _mm_and_ps(comparison_vector, _mm_add_ps(vector_result_43, _mm_sub_ps(vector_result_41, vector_result_46)));
    reordered_vector_15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_44, 3));
    reordered_vector_16 = _mm_cvtsi128_si32(_mm_shuffle_epi32(vector_result_44, 1));
    reordered_vector_17 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_16))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_14)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_15))));
    reordered_vector_18 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_16 + 12))),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_14 + 12)),
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_15 + 12))));
    vector_result_49 = _mm_mul_ps(vector_result_47, reordered_vector_18);
    vector_result_50 = _mm_mul_ps(vector_result_47, vector_result_47);
    vector_result_51 = _mm_mul_ps(vector_result_47, reordered_vector_17);
    reordered_vector_19 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_16 + 4))),
                    (__m128d)_mm_unpacklo_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_14 + 4)),
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_15 + 4))));
    vector_result_52 = _mm_add_ps(reordered_vector_19, vector_result_49);
    vector_result_53 = _mm_add_ps(vector_result_52, vector_result_51);
    vector_result_54 = _mm_sub_ps(_mm_add_ps(reordered_vector_17, reordered_vector_18), _mm_mul_ps(vector_result_47, reordered_vector_19));
    xor_vector_2 = _mm_or_ps(
            _mm_andnot_ps(saved_loaded_vector, saved_xor_vector),
            _mm_and_ps(
              _mm_add_ps(
                vector_result_53,
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      (__m128)_mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_16 + 8))),
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_14 + 8)),
                                  _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + reordered_vector_15 + 8)))),
                      _mm_mul_ps(vector_result_48, vector_result_54)),
                    _mm_mul_ps(
                      reordered_vector_19,
                      _mm_mul_ps(vector_result_50, _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781280)), vector_result_50), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781240)))))),
                  _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(vector_result_49, _mm_sub_ps(reordered_vector_19, vector_result_52)), _mm_add_ps(vector_result_51, _mm_sub_ps(vector_result_52, vector_result_53))),
                    _mm_mul_ps(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781200)), vector_result_50), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47811C0))),
                          vector_result_50),
                        vector_result_47),
                      vector_result_54)))),
              saved_loaded_vector));
  }
  if ( bit_mask )
  {
    *(_OWORD *)scaled_value = *(_OWORD *)&a1;
    *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = xor_vector_2;
    integer_sum = 0;
    bit_mask_2 = bit_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC4B0((__int64)&scaled_value[integer_sum], &scaled_value[integer_sum + 16]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 4 );
    return *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return xor_vector_2;
}

// 1401FA347: conditional instruction was optimized away because r10d.4!=0
// 1401FA180: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FAAC0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FAAC0(double a1)
{
  __m128 bit_mask;
  int lane_mask;
  float *saved_bit_mask;
  __m128 vector_result;
  __m128 vector_result_2;
  __m128 loaded_vector;
  __m128 vector_result_3;
  __m128 vector_result_4;
  __m128 vector_result_5;
  __m128 vector_result_6;
  __m128 xor_vector;
  __m128 xor_vector_2;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_7;
  __m128i vector_result_8;
  unsigned int converted_integer;
  unsigned int epi32;
  unsigned int vector_result_9;
  unsigned int vector_result_10;
  __m128i vector_result_11;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i reordered_vector;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128i vector_result_25;
  __m128i vector_result_26;
  __m128i vector_result_27;
  __m128i vector_result_28;
  __m128i vector_result_29;
  __m128i vector_result_30;
  __m128 xor_vector_3;
  __m128 reordered_vector_2;
  __m128 xor_vector_4;
  __m128 vector_result_31;
  __m128 xor_vector_5;
  __m128 reordered_vector_3;
  __m128 vector_result_32;
  __m128 vector_result_33;
  __m128 vector_result_34;
  __m128 vector_result_35;
  __m128 vector_result_36;
  __m128 vector_result_37;
  __m128 vector_result_38;
  __m128 vector_result_39;
  __m128 reordered_vector_4;
  __m128 vector_result_40;
  __m128 vector_result_41;
  __m128 reordered_vector_5;
  __m128 vector_result_42;
  __m128 comparison_vector;
  __m128 vector_result_43;
  __m128 vector_result_44;
  __m128 vector_result_45;
  __m128 vector_result_46;
  __m128i vector_result_47;
  unsigned int converted_integer_2;
  __m128 vector_result_48;
  unsigned int vector_result_49;
  unsigned int vector_result_50;
  unsigned int vector_result_51;
  __m128 vector_result_52;
  __m128 vector_result_53;
  __m128 vector_result_54;
  __m128 vector_result_55;
  __m128 vector_result_56;
  __m128 vector_result_57;
  __m128 vector_result_58;
  __m128 vector_result_59;
  __m128 saved_xor_vector;
  /* 64-byte aligned and large enough: the original aligns v82 down to 64 and uses 0x50 bytes from there,
     which in this frame would overwrite live locals (the special-lane mask), giving garbage for +-inf. */
  _Alignas(64) _BYTE word_argument[128];
  unsigned __int64 unused_written_slot;

  bit_mask = *(__m128_u *)&a1;
  lane_mask = 0;
  saved_bit_mask = (float *)((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = _mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)));
  vector_result_2 = _mm_andnot_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781100)), *(__m128_u *)&a1);
  loaded_vector = _mm_cmpnle_ps(vector_result, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781140)));
  vector_result_3 = _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781580)), vector_result), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  vector_result_4 = _mm_sub_ps(vector_result_3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47815C0)));
  vector_result_5 = _mm_sub_ps(
         _mm_sub_ps(
           _mm_sub_ps(
             _mm_sub_ps(vector_result, _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47812C0)), vector_result_4)),
             _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781300)), vector_result_4)),
           _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781340)), vector_result_4)),
         _mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781380)), vector_result_4));
  vector_result_6 = _mm_mul_ps(vector_result_5, vector_result_5);
  xor_vector = _mm_xor_ps(vector_result_5, (__m128)_mm_slli_epi32((__m128i)vector_result_3, 0x1Fu));
  unused_written_slot = (unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL;
  xor_vector_2 = _mm_xor_ps(
          _mm_add_ps(
            xor_vector,
            _mm_mul_ps(
              _mm_mul_ps(
                vector_result_6,
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781540)), vector_result_6), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781500))), vector_result_6),
                      ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47814C0))),
                    vector_result_6),
                  ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781480)))),
              xor_vector)),
          vector_result_2);
  if ( _mm_movemask_ps(loaded_vector) )
  {
    vector_result_7 = _mm_srli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7F800000u), 0), (__m128i)bit_mask), 0x17u);
    lane_mask = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(vector_result, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781180))));
    vector_result_8 = _mm_slli_epi32(_mm_add_epi32(_mm_slli_epi32(vector_result_7, 1u), vector_result_7), 2u);
    converted_integer = _mm_cvtsi128_si32(vector_result_8);
    saved_xor_vector = xor_vector_2;
    epi32 = _mm_extract_epi32(vector_result_8, 2);
    vector_result_9 = _mm_extract_epi32(vector_result_8, 1);
    vector_result_10 = _mm_extract_epi32(vector_result_8, 3);
    vector_result_11 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_9 + 8),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 8)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_10 + 8),
              1));
    vector_result_12 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_9 + 4),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32 + 4)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_10 + 4),
              1));
    vector_result_13 = _mm_srli_epi32(vector_result_11, 0x10u);
    vector_result_14 = _mm_srli_epi32(vector_result_12, 0x10u);
    vector_result_15 = _mm_unpacklo_epi64(
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + converted_integer)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_9),
              1),
            _mm_insert_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B477F500 + epi32)),
              *(_DWORD *)((char *)&unk_1B477F500 + vector_result_10),
              1));
    vector_result_16 = _mm_srli_epi32(vector_result_15, 0x10u);
    vector_result_17 = _mm_add_epi32(
            _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFu), 0), (__m128i)bit_mask),
            _mm_shuffle_epi32(_mm_cvtsi32_si128(0x800000u), 0));
    reordered_vector = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFu), 0);
    vector_result_18 = _mm_srli_epi32(vector_result_17, 0x10u);
    vector_result_19 = _mm_and_si128(vector_result_17, reordered_vector);
    vector_result_20 = _mm_and_si128(vector_result_12, reordered_vector);
    vector_result_21 = _mm_mullo_epi32(vector_result_19, vector_result_20);
    vector_result_22 = _mm_mullo_epi32(vector_result_19, vector_result_14);
    vector_result_23 = _mm_add_epi32(
            _mm_srli_epi32(_mm_mullo_epi32(_mm_and_si128(vector_result_11, reordered_vector), vector_result_18), 0x10u),
            _mm_add_epi32(
              _mm_and_si128(vector_result_21, reordered_vector),
              _mm_add_epi32(_mm_mullo_epi32(vector_result_18, vector_result_13), _mm_srli_epi32(_mm_mullo_epi32(vector_result_13, vector_result_19), 0x10u))));
    vector_result_24 = _mm_and_si128(vector_result_15, reordered_vector);
    vector_result_25 = _mm_mullo_epi32(vector_result_19, vector_result_24);
    vector_result_26 = _mm_add_epi32(
            _mm_srli_epi32(vector_result_23, 0x10u),
            _mm_add_epi32(_mm_and_si128(vector_result_22, reordered_vector), _mm_add_epi32(_mm_mullo_epi32(vector_result_20, vector_result_18), _mm_srli_epi32(vector_result_21, 0x10u))));
    vector_result_27 = _mm_add_epi32(
            _mm_srli_epi32(vector_result_26, 0x10u),
            _mm_add_epi32(_mm_and_si128(vector_result_25, reordered_vector), _mm_add_epi32(_mm_mullo_epi32(vector_result_14, vector_result_18), _mm_srli_epi32(vector_result_22, 0x10u))));
    vector_result_28 = _mm_add_epi32(
            _mm_slli_epi32(
              _mm_add_epi32(
                _mm_srli_epi32(vector_result_27, 0x10u),
                _mm_add_epi32(
                  _mm_and_si128(_mm_mullo_epi32(vector_result_19, vector_result_16), reordered_vector),
                  _mm_add_epi32(_mm_mullo_epi32(vector_result_18, vector_result_24), _mm_srli_epi32(vector_result_25, 0x10u)))),
              0x10u),
            _mm_and_si128(vector_result_27, reordered_vector));
    vector_result_29 = _mm_add_epi32(_mm_slli_epi32(vector_result_26, 0x10u), _mm_and_si128(vector_result_23, reordered_vector));
    vector_result_30 = _mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0), (__m128i)bit_mask);
    xor_vector_3 = (__m128)_mm_or_si128(
                    _mm_srli_epi32(vector_result_28, 9u),
                    _mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3F800000u), 0), vector_result_30));
    reordered_vector_2 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x47400000u), 0);
    xor_vector_4 = (__m128)_mm_xor_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x28800000u), 0), vector_result_30);
    vector_result_31 = _mm_add_ps(xor_vector_3, reordered_vector_2);
    xor_vector_5 = (__m128)_mm_xor_si128(vector_result_30, _mm_shuffle_epi32(_mm_cvtsi32_si128(0x34000000u), 0));
    reordered_vector_3 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C91000u), 0);
    vector_result_32 = _mm_sub_ps(
            (__m128)_mm_or_si128(
                      _mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x1FFu), 0), vector_result_28), 0xEu),
                        _mm_srli_epi32(vector_result_29, 0x12u)),
                      (__m128i)xor_vector_5),
            xor_vector_5);
    vector_result_33 = _mm_sub_ps(xor_vector_3, _mm_sub_ps(vector_result_31, reordered_vector_2));
    vector_result_34 = _mm_add_ps(vector_result_33, vector_result_32);
    vector_result_35 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFF000), 0), vector_result_34);
    vector_result_36 = _mm_sub_ps(vector_result_33, vector_result_34);
    vector_result_37 = _mm_sub_ps(vector_result_34, vector_result_35);
    vector_result_38 = _mm_add_ps(
            _mm_sub_ps(
              (__m128)_mm_or_si128(
                        _mm_slli_epi32(_mm_and_si128(_mm_shuffle_epi32(_mm_cvtsi32_si128(0x3FFFFu), 0), vector_result_29), 5u),
                        (__m128i)xor_vector_4),
              xor_vector_4),
            _mm_add_ps(vector_result_32, vector_result_36));
    vector_result_39 = _mm_mul_ps(vector_result_35, reordered_vector_3);
    reordered_vector_4 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0xB795777A), 0);
    vector_result_40 = _mm_and_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0), bit_mask);
    vector_result_41 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(reordered_vector_3, vector_result_37), _mm_mul_ps(vector_result_35, reordered_vector_4)),
            _mm_add_ps(
              _mm_mul_ps((__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x40C90FDBu), 0), vector_result_38),
              _mm_mul_ps(reordered_vector_4, vector_result_37)));
    reordered_vector_5 = (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(0x35800000u), 0);
    vector_result_42 = _mm_add_ps(vector_result_41, vector_result_39);
    comparison_vector = _mm_cmplt_ps(reordered_vector_5, vector_result_40);
    vector_result_43 = _mm_add_ps(vector_result_41, _mm_sub_ps(vector_result_39, vector_result_42));
    vector_result_44 = _mm_and_ps(vector_result_42, comparison_vector);
    vector_result_45 = _mm_and_ps(comparison_vector, vector_result_43);
    vector_result_46 = _mm_or_ps(_mm_and_ps(_mm_cmple_ps(vector_result_40, reordered_vector_5), bit_mask), vector_result_44);
    vector_result_47 = _mm_slli_epi32(_mm_and_si128((__m128i)vector_result_31, _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFu), 0)), 4u);
    converted_integer_2 = _mm_cvtsi128_si32(vector_result_47);
    vector_result_48 = _mm_mul_ps(vector_result_46, vector_result_46);
    vector_result_49 = _mm_extract_epi32(vector_result_47, 2);
    vector_result_50 = _mm_extract_epi32(vector_result_47, 1);
    vector_result_51 = _mm_extract_epi32(vector_result_47, 3);
    vector_result_52 = (__m128)_mm_unpacklo_pd(
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + vector_result_50 + 4),
                               1),
                    (__m128d)_mm_insert_epi32(
                               _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + vector_result_49 + 4)),
                               *(_DWORD *)((char *)&unk_1B4780100 + vector_result_51 + 4),
                               1));
    vector_result_53 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + vector_result_50 + 12),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + vector_result_49 + 12)),
                      *(_DWORD *)((char *)&unk_1B4780100 + vector_result_51 + 12),
                      1));
    vector_result_54 = _mm_mul_ps(vector_result_46, vector_result_53);
    vector_result_55 = _mm_add_ps(vector_result_52, vector_result_54);
    vector_result_56 = (__m128)_mm_unpacklo_epi64(
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2)),
                      *(_DWORD *)((char *)&unk_1B4780100 + vector_result_50),
                      1),
                    _mm_insert_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + vector_result_49)),
                      *(_DWORD *)((char *)&unk_1B4780100 + vector_result_51),
                      1));
    vector_result_57 = _mm_mul_ps(vector_result_46, vector_result_56);
    vector_result_58 = _mm_add_ps(vector_result_55, vector_result_57);
    vector_result_59 = _mm_sub_ps(_mm_add_ps(vector_result_56, vector_result_53), _mm_mul_ps(vector_result_46, vector_result_52));
    xor_vector_2 = _mm_blendv_ps(
            saved_xor_vector,
            _mm_add_ps(
              vector_result_58,
              _mm_add_ps(
                _mm_add_ps(
                  _mm_add_ps(
                    (__m128)_mm_unpacklo_epi64(
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + converted_integer_2 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + vector_result_50 + 8),
                                1),
                              _mm_insert_epi32(
                                _mm_cvtsi32_si128(*(_DWORD *)((char *)&unk_1B4780100 + vector_result_49 + 8)),
                                *(_DWORD *)((char *)&unk_1B4780100 + vector_result_51 + 8),
                                1)),
                    _mm_mul_ps(vector_result_45, vector_result_59)),
                  _mm_mul_ps(
                    vector_result_52,
                    _mm_mul_ps(vector_result_48, _mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781280)), vector_result_48), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781240)))))),
                _mm_add_ps(
                  _mm_add_ps(_mm_add_ps(vector_result_54, _mm_sub_ps(vector_result_52, vector_result_55)), _mm_add_ps(vector_result_57, _mm_sub_ps(vector_result_55, vector_result_58))),
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_add_ps(_mm_mul_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4781200)), vector_result_48), ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47811C0))), vector_result_48),
                      vector_result_46),
                    vector_result_59)))),
            loaded_vector);
  }
  if ( lane_mask )
  {
    *(__m128_u *)saved_bit_mask = bit_mask;
    *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = xor_vector_2;
    integer_sum = 0;
    bit_mask_2 = lane_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC4B0((__int64)&saved_bit_mask[integer_sum], &saved_bit_mask[integer_sum + 16]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 4 );
    return *(__m128_u *)(((unsigned __int64)word_argument & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return xor_vector_2;
}

// 1401FAC87: conditional instruction was optimized away because r10d.4!=0
// 1401FAAC0: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FB240) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_1401FB240(double a1)
{
  __m128 bit_mask;
  int lane_mask;
  double *saved_bit_mask;
  __m128d vector_result;
  __m128 vector_result_2;
  __m128 vector_result_3;
  __m128 loaded_vector;
  __m128d loaded_vector_2;
  __m128d vector_result_4;
  __m128d vector_result_5;
  __m128d vector_result_6;
  __m128d vector_result_7;
  __m128d xor_vector;
  __m128 result;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_8;
  __int64 converted_integer;
  __m128i unrecovered_register_value;
  __m128i unrecovered_register_value_2;
  __m128i unrecovered_register_value_3;
  __m128i vector_result_9;
  __m128i loaded_vector_3;
  __m128i vector_result_10;
  __int64 vector_result_11;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i packed_vector;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128d vector_result_16;
  __m128i vector_result_17;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128i vector_result_25;
  __m128d xor_vector_2;
  __m128i vector_result_26;
  __m128 vector_result_27;
  __m128d xor_vector_3;
  __m128d xor_vector_4;
  __m128d vector_result_28;
  __m128d vector_result_29;
  __m128 vector_result_30;
  __m128d vector_result_31;
  __m128d vector_result_32;
  __m128d vector_result_33;
  __m128d vector_result_34;
  __m128d vector_result_35;
  __m128i vector_result_36;
  __m128d vector_result_37;
  __m128 vector_result_38;
  __m128 loaded_vector_4;
  __m128d vector_result_39;
  __int64 converted_integer_2;
  unsigned int vector_result_40;
  __m128d vector_result_41;
  __m128d vector_result_42;
  __m128d vector_result_43;
  __m128d vector_result_44;
  __m128d vector_result_45;
  __m128d vector_result_46;
  __m128d vector_result_47;
  __m128d vector_result_48;
  __m128d vector_result_49;
  __m128d vector_result_50;
  __m128 saved_call_status;
  _BYTE scratch_buffer[81];
  unsigned __int64 unused_written_slot;

  bit_mask = *(__m128_u *)&a1;
  lane_mask = 0;
  saved_bit_mask = (double *)((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), *(__m128_u *)&a1);
  vector_result_2 = (__m128)_mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), vector_result);
  vector_result_3 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), vector_result_2);
  loaded_vector = (__m128)_mm_cmpeq_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), (__m128d)vector_result_2);
  loaded_vector_2 = _mm_cmpnle_pd((__m128d)vector_result_3, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791CC0)));
  vector_result_4 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D40)), (__m128d)vector_result_2), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80)));
  vector_result_5 = _mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791DC0)), _mm_sub_pd(vector_result_4, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80))));
  vector_result_6 = _mm_add_pd(
          _mm_add_pd(
            _mm_add_pd(
              _mm_sub_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E00)), vector_result_5), vector_result),
              _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E40)), vector_result_5)),
            _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E80)), vector_result_5)),
          _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791EC0)), vector_result_5));
  vector_result_7 = _mm_mul_pd(vector_result_6, vector_result_6);
  xor_vector = (__m128d)_mm_xor_si128((__m128i)vector_result_6, _mm_slli_epi64((__m128i)vector_result_4, 0x3Fu));
  unused_written_slot = (unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL;
  result = _mm_or_ps(
             _mm_andnot_ps(
               loaded_vector,
               (__m128)_mm_add_pd(
                         xor_vector,
                         _mm_mul_pd(
                           _mm_add_pd(
                             _mm_mul_pd(
                               _mm_add_pd(
                                 _mm_mul_pd(
                                   _mm_add_pd(
                                     _mm_mul_pd(
                                       _mm_add_pd(
                                         _mm_mul_pd(
                                           _mm_add_pd(
                                             _mm_mul_pd(
                                               _mm_add_pd(
                                                 _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792180)), vector_result_7),
                                                 ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792140))),
                                               vector_result_7),
                                             ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792100))),
                                           vector_result_7),
                                         ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47920C0))),
                                       vector_result_7),
                                     ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792080))),
                                   vector_result_7),
                                 ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792040))),
                               vector_result_7),
                             ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791FC0))),
                           _mm_mul_pd(vector_result_7, xor_vector)))),
             _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B47921C0)), loaded_vector));
  if ( _mm_movemask_pd(loaded_vector_2) )
  {
    saved_call_status = result;
    vector_result_8 = _mm_srli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E500), (__m128i)bit_mask), 0x34u);
    converted_integer = (unsigned int)(24 * _mm_cvtsi128_si32(vector_result_8));
    SR_VEC_LANES(128, unrecovered_register_value, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer + 8);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer + 16);
    vector_result_9 = _mm_add_epi64(
            _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E510), (__m128i)bit_mask),
            _mm_load_si128((const __m128i *)&xmmword_1B476E520));
    lane_mask = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(vector_result_3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791980))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791980))));
    loaded_vector_3 = _mm_loadu_si128((     __m128i *)&xmmword_1B476E530);
    vector_result_10 = _mm_srli_epi64(vector_result_9, 0x20u);
    vector_result_11 = (unsigned int)(24 * _mm_extract_epi16(vector_result_8, 4));
    vector_result_12 = _mm_and_si128(vector_result_9, loaded_vector_3);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_11 + 16);
    vector_result_13 = _mm_srli_epi64(unrecovered_register_value_3, 0x20u);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_11 + 8);
    packed_vector = unrecovered_register_value_2;
    vector_result_14 = _mm_and_si128(unrecovered_register_value_2, loaded_vector_3);
    vector_result_15 = _mm_mul_epu32(vector_result_12, vector_result_14);
    vector_result_16 = (__m128d)_mm_srli_epi64(packed_vector, 0x20u);
    vector_result_17 = _mm_mul_epu32(vector_result_12, (__m128i)vector_result_16);
    SR_VEC_LANES(128, unrecovered_register_value, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_11);
    vector_result_18 = _mm_and_si128(loaded_vector_3, unrecovered_register_value);
    vector_result_19 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(unrecovered_register_value_3, loaded_vector_3), vector_result_10), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(loaded_vector_3, vector_result_15),
              _mm_add_epi64(_mm_mul_epu32(vector_result_10, vector_result_13), _mm_srli_epi64(_mm_mul_epu32(vector_result_13, vector_result_12), 0x20u))));
    vector_result_20 = _mm_mul_epu32(vector_result_12, vector_result_18);
    vector_result_21 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_19, 0x20u),
            _mm_add_epi64(_mm_and_si128(loaded_vector_3, vector_result_17), _mm_add_epi64(_mm_mul_epu32(vector_result_14, vector_result_10), _mm_srli_epi64(vector_result_15, 0x20u))));
    vector_result_22 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_21, 0x20u),
            _mm_add_epi64(
              _mm_and_si128(loaded_vector_3, vector_result_20),
              _mm_add_epi64(_mm_mul_epu32((__m128i)vector_result_16, vector_result_10), _mm_srli_epi64(vector_result_17, 0x20u))));
    vector_result_23 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(vector_result_22, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(vector_result_12, _mm_srli_epi64(unrecovered_register_value, 0x20u)), loaded_vector_3),
                  _mm_add_epi64(_mm_mul_epu32(vector_result_10, vector_result_18), _mm_srli_epi64(vector_result_20, 0x20u)))),
              0x20u),
            _mm_and_si128(vector_result_22, loaded_vector_3));
    vector_result_24 = _mm_add_epi64(_mm_slli_epi64(vector_result_21, 0x20u), _mm_and_si128(vector_result_19, loaded_vector_3));
    vector_result_25 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E540), (__m128i)bit_mask);
    xor_vector_2 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(vector_result_23, 0xCu),
                     _mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E550), vector_result_25));
    vector_result_26 = _mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E590), vector_result_24);
    vector_result_27 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E560)), xor_vector_2);
    xor_vector_3 = (__m128d)_mm_xor_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E580), vector_result_25);
    xor_vector_4 = (__m128d)_mm_xor_si128(vector_result_25, _mm_load_si128((const __m128i *)&xmmword_1B476E5A0));
    vector_result_28 = _mm_sub_pd(xor_vector_2, _mm_sub_pd((__m128d)vector_result_27, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E560))));
    vector_result_29 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_loadu_si128((     __m128i *)&xmmword_1B476E5B0), vector_result_23), 0x28u),
                         _mm_srli_epi64(vector_result_24, 0x18u)),
                       (__m128i)xor_vector_4),
            xor_vector_4);
    vector_result_30 = (__m128)_mm_add_pd(vector_result_28, vector_result_29);
    vector_result_31 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E5F0)), vector_result_30);
    vector_result_32 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(_mm_slli_epi64(vector_result_26, 0x1Cu), (__m128i)xor_vector_3), xor_vector_3),
            _mm_add_pd(vector_result_29, _mm_sub_pd(vector_result_28, (__m128d)vector_result_30)));
    vector_result_33 = _mm_sub_pd((__m128d)vector_result_30, vector_result_31);
    vector_result_34 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5D0)), vector_result_31);
    vector_result_35 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5D0)), vector_result_33), _mm_mul_pd(vector_result_31, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5E0)))),
            _mm_add_pd(_mm_mul_pd(vector_result_32, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E5E0)), vector_result_33)));
    vector_result_36 = (__m128i)_mm_and_ps(vector_result_27, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E570)));
    vector_result_37 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E600)), bit_mask);
    vector_result_38 = (__m128)_mm_add_pd(vector_result_35, vector_result_34);
    loaded_vector_4 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E610)), vector_result_37);
    vector_result_39 = _mm_sub_pd(vector_result_34, (__m128d)vector_result_38);
    converted_integer_2 = (unsigned int)(32 * _mm_cvtsi128_si32(vector_result_36));
    SR_VEC_LANES(128, vector_result_28, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2);
    vector_result_40 = 32 * _mm_extract_epi16(vector_result_36, 4);
    vector_result_41 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(vector_result_37, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E610))), bit_mask),
                     _mm_and_ps(vector_result_38, loaded_vector_4));
    SR_VEC_LANES(128, vector_result_16, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2 + 8);
    SR_VEC_LANES(128, vector_result_16, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_40 + 8);
    vector_result_42 = _mm_mul_pd(vector_result_41, vector_result_16);
    SR_VEC_LANES(128, vector_result_33, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2 + 16);
    SR_VEC_LANES(128, vector_result_28, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_40);
    SR_VEC_LANES(128, vector_result_33, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_40 + 16);
    vector_result_43 = _mm_mul_pd(vector_result_41, vector_result_28);
    vector_result_44 = _mm_add_pd(vector_result_28, vector_result_16);
    vector_result_45 = _mm_add_pd(vector_result_33, vector_result_42);
    vector_result_46 = _mm_add_pd(vector_result_45, vector_result_43);
    vector_result_47 = _mm_add_pd(_mm_add_pd(vector_result_42, _mm_sub_pd(vector_result_33, vector_result_45)), _mm_add_pd(vector_result_43, _mm_sub_pd(vector_result_45, vector_result_46)));
    vector_result_48 = _mm_mul_pd(vector_result_41, vector_result_41);
    vector_result_49 = _mm_mul_pd((__m128d)_mm_and_ps(loaded_vector_4, (__m128)_mm_add_pd(vector_result_35, vector_result_39)), _mm_sub_pd(vector_result_44, _mm_mul_pd(vector_result_41, vector_result_33)));
    vector_result_50 = _mm_add_pd(
            _mm_add_pd(
              vector_result_47,
              _mm_mul_pd(
                _mm_mul_pd(
                  _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B80)), vector_result_48), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B40))), vector_result_48),
                  vector_result_41),
                vector_result_44)),
            _mm_mul_pd(
              _mm_mul_pd(
                vector_result_48,
                _mm_add_pd(
                  _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C40)), vector_result_48), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C00))), vector_result_48),
                  ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791BC0)))),
              vector_result_33));
    SR_VEC_LANES(128, vector_result_41, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2 + 24);
    SR_VEC_LANES(128, vector_result_41, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_40 + 24);
    result = _mm_or_ps(
               _mm_andnot_ps((__m128)loaded_vector_2, saved_call_status),
               _mm_and_ps((__m128)_mm_add_pd(vector_result_46, _mm_add_pd(vector_result_50, _mm_add_pd(vector_result_41, vector_result_49))), (__m128)loaded_vector_2));
  }
  if ( lane_mask )
  {
    *(__m128_u *)saved_bit_mask = bit_mask;
    *(__m128_u *)(((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = result;
    integer_sum = 0;
    bit_mask_2 = lane_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC520((__int64)&saved_bit_mask[integer_sum], &saved_bit_mask[integer_sum + 8]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 2 );
    return *(__m128_u *)(((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return result;
}

// 1401FB479: conditional instruction was optimized away because r9d.4!=0
// 1401FB240: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FB8F0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128d            sub_1401FB8F0(double a1)
{
  __m128 bit_mask;
  int lane_mask;
  double *saved_bit_mask;
  __m128d vector_result;
  __m128 vector_result_2;
  __m128 vector_result_3;
  __m128d loaded_vector;
  __m128d loaded_vector_2;
  __m128d vector_result_4;
  __m128 vector_result_5;
  __m128d vector_result_6;
  __m128 vector_result_7;
  __m128d vector_result_8;
  __m128d xor_vector;
  __m128d vector_result_9;
  __int64 integer_sum;
  int bit_mask_2;
  __m128i vector_result_10;
  __m128i vector_result_11;
  __m128i vector_result_12;
  __int64 converted_integer;
  __m128i unrecovered_register_value;
  __m128i unrecovered_register_value_2;
  __m128i unrecovered_register_value_3;
  __int64 vector_result_13;
  __m128i si128;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i packed_vector;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i vector_result_24;
  __m128i vector_result_25;
  __m128i vector_result_26;
  __m128d xor_vector_2;
  __m128 vector_result_27;
  __m128i vector_result_28;
  __m128d xor_vector_3;
  __m128d xor_vector_4;
  __m128i vector_result_29;
  __m128d vector_result_30;
  __m128d vector_result_31;
  __m128 vector_result_32;
  __m128d vector_result_33;
  __m128d vector_result_34;
  __m128d vector_result_35;
  __m128d vector_result_36;
  __m128d vector_result_37;
  __m128i vector_result_38;
  __m128d vector_result_39;
  __m128 vector_result_40;
  __m128 loaded_vector_3;
  __m128d vector_result_41;
  __int64 converted_integer_2;
  unsigned int vector_result_42;
  __m128d vector_result_43;
  __m128d vector_result_44;
  __m128d vector_result_45;
  __m128d vector_result_46;
  __m128d vector_result_47;
  __m128d vector_result_48;
  __m128d vector_result_49;
  __m128d vector_result_50;
  __m128d saved_vector_result;
  _BYTE scratch_buffer[81];
  unsigned __int64 unused_written_slot;

  bit_mask = *(__m128_u *)&a1;
  lane_mask = 0;
  saved_bit_mask = (double *)((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL);
  vector_result = (__m128d)_mm_and_ps(*(__m128_u *)&a1, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)));
  vector_result_2 = (__m128)_mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), vector_result);
  vector_result_3 = _mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791C80)), vector_result_2);
  loaded_vector = _mm_cmpeq_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D00)), (__m128d)vector_result_2);
  loaded_vector_2 = _mm_cmpnle_pd((__m128d)vector_result_3, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791CC0)));
  vector_result_4 = _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D40)), (__m128d)vector_result_2), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80)));
  vector_result_5 = (__m128)_mm_slli_epi64((__m128i)vector_result_4, 0x3Fu);
  vector_result_6 = _mm_sub_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791DC0)), _mm_sub_pd(vector_result_4, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791D80))));
  vector_result_7 = (__m128)_mm_add_pd(
                  _mm_add_pd(
                    _mm_add_pd(
                      _mm_sub_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E00)), vector_result_6), vector_result),
                      _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E40)), vector_result_6)),
                    _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791E80)), vector_result_6)),
                  _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791EC0)), vector_result_6));
  vector_result_8 = _mm_mul_pd((__m128d)vector_result_7, (__m128d)vector_result_7);
  xor_vector = (__m128d)_mm_xor_ps(vector_result_7, vector_result_5);
  unused_written_slot = (unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL;
  vector_result_9 = _mm_blendv_pd(
          _mm_add_pd(
            xor_vector,
            _mm_mul_pd(
              _mm_add_pd(
                _mm_mul_pd(
                  _mm_add_pd(
                    _mm_mul_pd(
                      _mm_add_pd(
                        _mm_mul_pd(
                          _mm_add_pd(
                            _mm_mul_pd(
                              _mm_add_pd(
                                _mm_mul_pd(
                                  _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792180)), vector_result_8), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792140))),
                                  vector_result_8),
                                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792100))),
                              vector_result_8),
                            ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47920C0))),
                          vector_result_8),
                        ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792080))),
                      vector_result_8),
                    ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4792040))),
                  vector_result_8),
                ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791FC0))),
              _mm_mul_pd(vector_result_8, xor_vector))),
          ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B47921C0)),
          loaded_vector);
  if ( _mm_movemask_pd(loaded_vector_2) )
  {
    lane_mask = _mm_movemask_pd(_mm_cmpeq_pd((__m128d)_mm_and_ps(vector_result_3, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B4791980))), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791980))));
    vector_result_10 = _mm_srli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E700), (__m128i)bit_mask), 0x34u);
    vector_result_11 = _mm_add_epi64(
            _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E710), (__m128i)bit_mask),
            _mm_load_si128((const __m128i *)&xmmword_1B476E720));
    vector_result_12 = _mm_srli_epi64(vector_result_11, 0x20u);
    converted_integer = (unsigned int)(24 * _mm_cvtsi128_si32(vector_result_10));
    SR_VEC_LANES(128, unrecovered_register_value, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer + 8);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[0] = *(_QWORD *)((char *)&unk_1B4781700 + converted_integer + 16);
    vector_result_13 = (unsigned int)(24 * _mm_extract_epi16(vector_result_10, 4));
    si128 = _mm_load_si128((     __m128i *)&xmmword_1B476E730);
    vector_result_14 = _mm_and_si128(vector_result_11, si128);
    SR_VEC_LANES(128, unrecovered_register_value_3, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_13 + 16);
    vector_result_15 = _mm_srli_epi64(unrecovered_register_value_3, 0x20u);
    SR_VEC_LANES(128, unrecovered_register_value_2, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_13 + 8);
    packed_vector = unrecovered_register_value_2;
    vector_result_16 = _mm_and_si128(unrecovered_register_value_2, si128);
    vector_result_17 = _mm_mul_epu32(vector_result_14, vector_result_16);
    vector_result_18 = _mm_srli_epi64(packed_vector, 0x20u);
    vector_result_19 = _mm_mul_epu32(vector_result_14, vector_result_18);
    saved_vector_result = vector_result_9;
    SR_VEC_LANES(128, unrecovered_register_value, i64)[1] = *(__int64 *)((char *)&unk_1B4781700 + vector_result_13);
    vector_result_20 = _mm_and_si128(si128, unrecovered_register_value);
    vector_result_21 = _mm_add_epi64(
            _mm_srli_epi64(_mm_mul_epu32(_mm_and_si128(unrecovered_register_value_3, si128), vector_result_12), 0x20u),
            _mm_add_epi64(
              _mm_and_si128(si128, vector_result_17),
              _mm_add_epi64(_mm_mul_epu32(vector_result_12, vector_result_15), _mm_srli_epi64(_mm_mul_epu32(vector_result_15, vector_result_14), 0x20u))));
    vector_result_22 = _mm_mul_epu32(vector_result_14, vector_result_20);
    vector_result_23 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_21, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, vector_result_19), _mm_add_epi64(_mm_mul_epu32(vector_result_16, vector_result_12), _mm_srli_epi64(vector_result_17, 0x20u))));
    vector_result_24 = _mm_add_epi64(
            _mm_srli_epi64(vector_result_23, 0x20u),
            _mm_add_epi64(_mm_and_si128(si128, vector_result_22), _mm_add_epi64(_mm_mul_epu32(vector_result_18, vector_result_12), _mm_srli_epi64(vector_result_19, 0x20u))));
    vector_result_25 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_add_epi64(
                _mm_srli_epi64(vector_result_24, 0x20u),
                _mm_add_epi64(
                  _mm_and_si128(_mm_mul_epu32(vector_result_14, _mm_srli_epi64(unrecovered_register_value, 0x20u)), si128),
                  _mm_add_epi64(_mm_mul_epu32(vector_result_12, vector_result_20), _mm_srli_epi64(vector_result_22, 0x20u)))),
              0x20u),
            _mm_and_si128(vector_result_24, si128));
    vector_result_26 = _mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E740), (__m128i)bit_mask);
    xor_vector_2 = (__m128d)_mm_or_si128(
                     _mm_srli_epi64(vector_result_25, 0xCu),
                     _mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E750), vector_result_26));
    vector_result_27 = (__m128)_mm_add_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E760)), xor_vector_2);
    vector_result_28 = _mm_add_epi64(_mm_slli_epi64(vector_result_23, 0x20u), _mm_and_si128(vector_result_21, si128));
    xor_vector_3 = (__m128d)_mm_xor_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E780), vector_result_26);
    xor_vector_4 = (__m128d)_mm_xor_si128(vector_result_26, _mm_load_si128((const __m128i *)&xmmword_1B476E7A0));
    vector_result_29 = _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E790), vector_result_28), 0x1Cu);
    vector_result_30 = _mm_sub_pd(xor_vector_2, _mm_sub_pd((__m128d)vector_result_27, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E760))));
    vector_result_31 = _mm_sub_pd(
            (__m128d)_mm_or_si128(
                       _mm_or_si128(
                         _mm_slli_epi64(_mm_and_si128(_mm_load_si128((     __m128i *)&xmmword_1B476E7B0), vector_result_25), 0x28u),
                         _mm_srli_epi64(vector_result_28, 0x18u)),
                       (__m128i)xor_vector_4),
            xor_vector_4);
    vector_result_32 = (__m128)_mm_add_pd(vector_result_30, vector_result_31);
    vector_result_33 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E7F0)), vector_result_32);
    vector_result_34 = _mm_add_pd(
            _mm_sub_pd((__m128d)_mm_or_si128(vector_result_29, (__m128i)xor_vector_3), xor_vector_3),
            _mm_add_pd(vector_result_31, _mm_sub_pd(vector_result_30, (__m128d)vector_result_32)));
    vector_result_35 = _mm_sub_pd((__m128d)vector_result_32, vector_result_33);
    vector_result_36 = _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7D0)), vector_result_33);
    vector_result_37 = _mm_add_pd(
            _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7D0)), vector_result_35), _mm_mul_pd(vector_result_33, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7E0)))),
            _mm_add_pd(_mm_mul_pd(vector_result_34, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7C0))), _mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E7E0)), vector_result_35)));
    vector_result_38 = (__m128i)_mm_and_ps(vector_result_27, ((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E770)));
    vector_result_39 = (__m128d)_mm_and_ps(((__m128)_mm_load_si128((const __m128i *)&xmmword_1B476E800)), bit_mask);
    vector_result_40 = (__m128)_mm_add_pd(vector_result_37, vector_result_36);
    loaded_vector_3 = (__m128)_mm_cmplt_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E810)), vector_result_39);
    vector_result_41 = _mm_sub_pd(vector_result_36, (__m128d)vector_result_40);
    converted_integer_2 = (unsigned int)(32 * _mm_cvtsi128_si32(vector_result_38));
    SR_VEC_LANES(128, xor_vector_3, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2);
    vector_result_42 = 32 * _mm_extract_epi16(vector_result_38, 4);
    vector_result_43 = (__m128d)_mm_or_ps(
                     _mm_and_ps((__m128)_mm_cmple_pd(vector_result_39, ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B476E810))), bit_mask),
                     _mm_and_ps(vector_result_40, loaded_vector_3));
    SR_VEC_LANES(128, vector_result_40, u64)[0] = *(_QWORD *)((char *)&unk_1B478D900 + converted_integer_2 + 8);
    SR_VEC_LANES(128, vector_result_40, u64)[1] = *(unsigned __int64 *)((char *)&unk_1B478D900 + vector_result_42 + 8);
    vector_result_44 = _mm_mul_pd(vector_result_43, (__m128d)vector_result_40);
    SR_VEC_LANES(128, vector_result_33, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2 + 16);
    SR_VEC_LANES(128, xor_vector_3, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_42);
    SR_VEC_LANES(128, vector_result_33, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_42 + 16);
    vector_result_45 = _mm_mul_pd(vector_result_43, xor_vector_3);
    vector_result_46 = _mm_add_pd(xor_vector_3, (__m128d)vector_result_40);
    vector_result_47 = _mm_add_pd(vector_result_33, vector_result_44);
    vector_result_48 = _mm_add_pd(vector_result_47, vector_result_45);
    vector_result_49 = _mm_mul_pd(vector_result_43, vector_result_43);
    vector_result_50 = _mm_add_pd(
            _mm_add_pd(_mm_add_pd(vector_result_44, _mm_sub_pd(vector_result_33, vector_result_47)), _mm_add_pd(vector_result_45, _mm_sub_pd(vector_result_47, vector_result_48))),
            _mm_mul_pd(
              _mm_mul_pd(
                _mm_mul_pd(_mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B80)), vector_result_49), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791B40))), vector_result_49),
                vector_result_43),
              vector_result_46));
    SR_VEC_LANES(128, vector_result_45, f64)[0] = *(double *)((char *)&unk_1B478D900 + converted_integer_2 + 24);
    SR_VEC_LANES(128, vector_result_45, f64)[1] = *(double *)((char *)&unk_1B478D900 + vector_result_42 + 24);
    vector_result_9 = _mm_blendv_pd(
            saved_vector_result,
            _mm_add_pd(
              vector_result_48,
              _mm_add_pd(
                _mm_add_pd(
                  vector_result_50,
                  _mm_mul_pd(
                    _mm_mul_pd(
                      vector_result_49,
                      _mm_add_pd(
                        _mm_mul_pd(
                          _mm_add_pd(_mm_mul_pd(((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C40)), vector_result_49), ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791C00))),
                          vector_result_49),
                        ((__m128d)_mm_load_si128((const __m128i *)&xmmword_1B4791BC0)))),
                    vector_result_33)),
                _mm_add_pd(
                  vector_result_45,
                  _mm_mul_pd(
                    (__m128d)_mm_and_ps(loaded_vector_3, (__m128)_mm_add_pd(vector_result_37, vector_result_41)),
                    _mm_sub_pd(vector_result_46, _mm_mul_pd(vector_result_43, vector_result_33)))))),
            loaded_vector_2);
  }
  if ( lane_mask )
  {
    *(__m128_u *)saved_bit_mask = bit_mask;
    *(__m128d_u *)(((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = vector_result_9;
    integer_sum = 0;
    bit_mask_2 = lane_mask;
    do
    {
      if ( _bittest(&bit_mask_2, integer_sum) )
        sub_1401FC520((__int64)&saved_bit_mask[integer_sum], &saved_bit_mask[integer_sum + 8]);
      integer_sum = (unsigned int)(integer_sum + 1);
    }
    while ( (int)integer_sum < 2 );
    return *(__m128d_u *)(((unsigned __int64)scratch_buffer & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  return vector_result_9;
}

// 1401FBB1C: conditional instruction was optimized away because r9d.4!=0
// 1401FB8F0: inconsistent variable size for 'xmm0_8.8'

//----- (00000001401FBF9C) ----------------------------------------------------
__int64            CMFCToolBarImages__UpdateInternalImage(CMFCToolBarImages *this)
{
  return 1;
}

//----- (00000001401FBFA4) ----------------------------------------------------
_BOOL8 _acrt_locale_changed_sr()
{
  return g_1B475C0D8 != 0;
}

//----- (00000001401FBFB0) ----------------------------------------------------
void sub_1401FBFB0()
{
  g_144CBE510 = 0;
}

//----- (00000001401FBFB8) ----------------------------------------------------
void            sub_1401FBFB8(unsigned int a1)
{
  __int64 table_value;
  __int64 int64_result;
  bool isdebuggerpresent_result;
  _QWORD ExceptionInfo[2];
  _DWORD scratch_buffer[4];
  void *unused_written_slot;
  _QWORD ContextRecord[154];
  void *retaddr;
  __int64 callee_output_word;
  unsigned __int64 ImageBase;
  unsigned __int64 callee_output_word_2;
  __int64 callee_output_word_3;

  if ( (unsigned int)sub_1401FC5EA() )
    __fastfail(a1);
  sub_1401FBFB0();
  crt_memset((void *)(uintptr_t)(ContextRecord), 0, 0x4D0u);
  ((void (           *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  table_value = ContextRecord[31];
  int64_result = ((__int64 (           *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( int64_result )
    ((void (           *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      table_value,
      int64_result,
      ContextRecord,
      &callee_output_word_3,
      &callee_output_word_2,
      0);
  ContextRecord[31] = (uint64)(uintptr_t)(retaddr);
  ContextRecord[19] = (uint64)(uintptr_t)(&callee_output_word);
  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x98u);
  unused_written_slot = retaddr;
  scratch_buffer[0] = 1073741845;
  scratch_buffer[1] = 1;
  ExceptionInfo[0] = (uint64)(uintptr_t)(scratch_buffer);
  isdebuggerpresent_result = IsDebuggerPresent();
  ExceptionInfo[1] = (uint64)(uintptr_t)(ContextRecord);
  ((void (           *)(_QWORD))SetUnhandledExceptionFilter)(0);
  if ( !(unsigned int)((__int64 (           *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo) && !isdebuggerpresent_result )
    sub_1401FBFB0();
}

// 14026E2E0: invalid function type 'void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)' has been ignored
// 14026E2D8: invalid function type 'PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored
// 14026E2D0: invalid function type 'PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)' has been ignored
// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored
// 14026E2C8: invalid function type 'LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)' has been ignored

//----- (00000001401FC104) ----------------------------------------------------
__int16 sub_1401FC104()
{
  __int16 result;
  _WORD StartupInfo[60];

  crt_memset((void *)(uintptr_t)(StartupInfo), 0, 0x68u);
  ((void (           *)(_WORD *))GetStartupInfoW)(StartupInfo);
  result = 10;
  if ( (StartupInfo[30] & 1) != 0 )
    return StartupInfo[32];
  return result;
}

// 14026E2A0: invalid function type 'void (__stdcall *GetStartupInfoW)(LPSTARTUPINFOW lpStartupInfo)' has been ignored

//----- (00000001401FC140)
int sub_1401FC140(void) { return sr_client_zero_callback(); }

//----- (00000001401FC148) ----------------------------------------------------
__int64 sub_1401FC148()
{
  return 0;
}

//----- (00000001401FC14C) ----------------------------------------------------
bool is_managed_app()
{
  __int64 int64_result;
  __int64 loaded_word;
  bool result;

  int64_result = ((__int64 (           *)(_QWORD))GetModuleHandleW)(0);
  result = false;
  if ( int64_result )
  {
    if ( *(_WORD *)int64_result == 23117 )
    {
      loaded_word = int64_result + *(int *)(int64_result + 60);
      if ( *(_DWORD *)loaded_word == 17744 && *(_WORD *)(loaded_word + 24) == 523 && *(_DWORD *)(loaded_word + 132) > 0xEu && *(_DWORD *)(loaded_word + 248) )
        return true;
    }
  }
  return result;
}

// 14026E298: invalid function type 'HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)' has been ignored

//----- (00000001401FC1A0) ----------------------------------------------------
__int64 sub_1401FC1A0()
{
  return ((__int64 (           *)(_QWORD))SetUnhandledExceptionFilter)(sub_1401FC1B4);
}

// 14026E2C0: invalid function type 'LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)' has been ignored

//----- (00000001401FC1B4) ----------------------------------------------------
__int64            sub_1401FC1B4(_QWORD *a1)
{
  _DWORD *record_pointer;
  int table_value;
  __int64 table_value_2;

  record_pointer = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && record_pointer[6] == 4 )
  {
    table_value = record_pointer[8];
    if ( (unsigned int)(table_value - 429065504) <= 2 || table_value == 26820608 )
    {
      *(_QWORD *)sub_1401FD380() = (uint64)(uintptr_t)(record_pointer);
      table_value_2 = a1[1];
      *(_QWORD *)sub_1401FD394() = table_value_2;
      terminate_sr();
    }
  }
  return 0;
}

//----- (00000001401FC210) ----------------------------------------------------
void guard_check_icall_nop()
{
  ;
}

//----- (00000001401FC238) ----------------------------------------------------
unsigned __int64 sub_1401FC238()
{
  unsigned __int64 cached_systemtimeasfiletime;
  unsigned __int64 SystemTimeAsFileTime;
  __int64 PerformanceCount;

  SystemTimeAsFileTime = 0;
  ((void (           *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
  cached_systemtimeasfiletime = SystemTimeAsFileTime;
  cached_systemtimeasfiletime ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
  cached_systemtimeasfiletime ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return ((unsigned __int64)&cached_systemtimeasfiletime
        ^ cached_systemtimeasfiletime
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 14026E288: invalid function type 'DWORD (__stdcall *GetCurrentThreadId)()' has been ignored
// 14026E290: invalid function type 'DWORD (__stdcall *GetCurrentProcessId)()' has been ignored

//----- (00000001401FC2A4) ----------------------------------------------------
__int64 sub_1401FC2A4()
{
  unsigned __int64 cached_security_cookie;
  __int64 result;
  unsigned __int64 cached_systemtimeasfiletime;
  unsigned __int64 SystemTimeAsFileTime;
  __int64 PerformanceCount;

  cached_security_cookie = _security_cookie;
  if ( _security_cookie == 0x2B992DDFA232LL )
  {
    SystemTimeAsFileTime = 0;
    ((void (           *)(unsigned __int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    cached_systemtimeasfiletime = SystemTimeAsFileTime;
    cached_systemtimeasfiletime ^= (unsigned int)((__int64 (*)(void))GetCurrentThreadId)();
    cached_systemtimeasfiletime ^= (unsigned int)((__int64 (*)(void))GetCurrentProcessId)();
    QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
    cached_security_cookie = ((unsigned __int64)&cached_systemtimeasfiletime
        ^ cached_systemtimeasfiletime
        ^ PerformanceCount
        ^ ((unsigned __int64)(unsigned int)PerformanceCount << 32))
       & 0xFFFFFFFFFFFFLL;
    if ( cached_security_cookie == 0x2B992DDFA232LL )
      cached_security_cookie = 0x2B992DDFA233LL;
    _security_cookie = cached_security_cookie;
  }
  result = ~cached_security_cookie;
  qword_140302098 = result;
  return result;
}

// 14026E310: invalid function type 'void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)' has been ignored
// 14026E288: invalid function type 'DWORD (__stdcall *GetCurrentThreadId)()' has been ignored
// 14026E290: invalid function type 'DWORD (__stdcall *GetCurrentProcessId)()' has been ignored

//----- (00000001401FC350) ----------------------------------------------------
__int64            UserMathErrorFunction(struct _exception *a1)
{
  return 0;
}

//----- (00000001401FC354) ----------------------------------------------------
__int64 sub_1401FC354()
{
  return 0;
}

//----- (00000001401FC358) ----------------------------------------------------
__int64 sub_1401FC358()
{
  return 0x4000;
}

//----- (00000001401FC360) ----------------------------------------------------
__int64 sub_1401FC360()
{
  return 0;
}

//----- (00000001401FC364) ----------------------------------------------------
__int64 sub_1401FC364()
{
  return 0;
}

//----- (00000001401FC368) ----------------------------------------------------
__int64 sub_1401FC368()
{
  return ((__int64 (           *)(unsigned int *))InitializeSListHead)(&g_144CBE520);
}

// 14026E280: invalid function type 'void (__stdcall *InitializeSListHead)(PSLIST_HEADER ListHead)' has been ignored

//----- (00000001401FC384) ----------------------------------------------------
char sub_1401FC384()
{
  return 1;
}

//----- (00000001401FC388) ----------------------------------------------------
void nullsub_12()
{
  ;
}

//----- (00000001401FC38C) ----------------------------------------------------
void nullsub_13()
{
  ;
}

//----- (00000001401FC390) ----------------------------------------------------
unsigned int *sub_1401FC390()
{
  unsigned int *option_flags;
  unsigned int *result;

  option_flags = sub_140001BB0();
  *(_QWORD *)option_flags |= 0x24uLL;
  result = sub_140001BC0();
  *(_QWORD *)result |= 2uLL;
  return result;
}

//----- (00000001401FC3AC) ----------------------------------------------------
_BOOL8 sub_1401FC3AC()
{
  return dword_1403020B0 == 0;
}

//----- (00000001401FC3B8) ----------------------------------------------------
unsigned int *sub_1401FC3B8()
{
  return &g_1B475C0D0;
}

//----- (00000001401FC3C0) ----------------------------------------------------
unsigned int *sub_1401FC3C0()
{
  return &g_1B475C0C8;
}

//----- (00000001401FC3C8) ----------------------------------------------------
void sub_1401FC3C8()
{
  void (**i)(void);

  for ( i = qword_140294660; i < qword_140294660; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001401FC404) ----------------------------------------------------
void sub_1401FC404()
{
  void (**i)(void);

  for ( i = &qword_140294670; i < &qword_140294670; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001401FC440) ----------------------------------------------------
__int64            sub_1401FC440(__int64 a1, double *a2)
{
  double scaled_value;
  double scaled_value_2;

  scaled_value = *(double *)a1;
  scaled_value_2 = *(double *)a1;
  if ( (*(_WORD *)(a1 + 6) & 0x7FF0) != 0x7FF0 )
    return 0;
  if ( LODWORD(scaled_value_2) || (HIBYTE(scaled_value_2) = *(_BYTE *)(a1 + 7) & 0x7F, HIDWORD(scaled_value_2) != 2146435072) )
  {
    *a2 = scaled_value * scaled_value;
    return 0;
  }
  else
  {
    *a2 = scaled_value * 0.0;
    return 1;
  }
}

//----- (00000001401FC4B0) ----------------------------------------------------
__int64            sub_1401FC4B0(__int64 a1, float *a2)
{
  float scaled_value;
  __int64 result;
  float scaled_value_2;
  float scaled_value_3;

  scaled_value_3 = *(float *)a1;
  scaled_value = *(float *)a1;
  if ( (*(_WORD *)(a1 + 2) & 0x7F80) != 0x7F80 )
    return 0;
  HIBYTE(scaled_value_3) = HIBYTE(*(_DWORD *)a1) & 0x7F;
  if ( scaled_value_3 == INFINITY )
  {
    result = 1;
    scaled_value_2 = scaled_value * 0.0;
  }
  else
  {
    scaled_value_2 = scaled_value * *(float *)a1;
    result = 0;
  }
  *a2 = scaled_value_2;
  return result;
}

//----- (00000001401FC520) ----------------------------------------------------
__int64            sub_1401FC520(__int64 a1, double *a2)
{
  double scaled_value;
  double scaled_value_2;

  scaled_value = *(double *)a1;
  scaled_value_2 = *(double *)a1;
  if ( (*(_WORD *)(a1 + 6) & 0x7FF0) != 0x7FF0 )
    return 0;
  if ( LODWORD(scaled_value_2) || (HIBYTE(scaled_value_2) = *(_BYTE *)(a1 + 7) & 0x7F, HIDWORD(scaled_value_2) != 2146435072) )
  {
    *a2 = scaled_value * scaled_value;
    return 0;
  }
  else
  {
    *a2 = scaled_value * 0.0;
    return 1;
  }
}

//----- (00000001401FC5EA) ----------------------------------------------------
// attributes: thunk
__int64 sub_1401FC5EA()
{
  return ((__int64 (          *)())IsProcessorFeaturePresent)();
}

// 14026E2B0: invalid function type 'BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD ProcessorFeature)' has been ignored

//----- (00000001401FC614) ----------------------------------------------------
     __m128i *           sub_1401FC614(     __m128i *a1,      __m128i *a2)
{
  int table_value;
       __m128i *comparison_vector;
  __m128i reordered_vector;
  __m128i loaded_vector;
  __int64 packed_word_bits;
       __m128i *buffer_cursor;
       __m128i *i;
  __m128i loaded_vector_2;
  unsigned int lane_mask;
  __int64 callee_output_word;
  __m128i inserted;
       __m128i *saved_state_address;
  __int8 table_value_2;
  __int64 remaining_count;
  __int8 cached_table_value;
       __m128i *state_address;
  __m128i loaded_vector_3;
  unsigned __int8 comparison_vector_2;
       __m128i *saved_comparison_vector;
       __m128i *j;
  __m128i loaded_vector_4;
  __m128i loaded_vector_5;
  unsigned __int8 comparison_vector_3;
  __int64 selection_code;

  table_value = SR_VEC_PTR_LANES(128, a2, u8)[0];
  comparison_vector = a1;
  if ( !(_BYTE)table_value )
    return a1;
  if ( dword_140302080 < 2 )
  {
    reordered_vector = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(table_value | (unsigned int)(table_value << 8)), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)comparison_vector & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      loaded_vector = _mm_loadu_si128(comparison_vector);
      LODWORD(packed_word_bits) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(loaded_vector, _mm_cvtsi32_si128((int)(0LL))), _mm_cmpeq_epi8(loaded_vector, reordered_vector)));
      if ( (_DWORD)packed_word_bits )
      {
        _BitScanForward((unsigned int *)&packed_word_bits, packed_word_bits);
        comparison_vector = (     __m128i *)((char *)comparison_vector + packed_word_bits);
LABEL_9:
        if ( !SR_VEC_PTR_LANES(128, comparison_vector, i8)[0] )
          return nullptr;
        if ( (_BYTE)table_value == SR_VEC_PTR_LANES(128, comparison_vector, i8)[0] )
        {
          buffer_cursor = comparison_vector;
          for ( i = a2; ; i = (     __m128i *)((char *)i + 1) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)buffer_cursor & 0xFFFu) <= 0xFF0uLL )
              {
                loaded_vector_2 = _mm_loadu_si128(i);
                lane_mask = _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(buffer_cursor), loaded_vector_2), _mm_cvtsi32_si128((int)(0LL))),
                          _mm_cmpeq_epi8(loaded_vector_2, _mm_cvtsi32_si128((int)(0LL)))));
                if ( !lane_mask )
                {
                  ++buffer_cursor;
                  ++i;
                  continue;
                }
                _BitScanForward((unsigned int *)&callee_output_word, lane_mask);
                buffer_cursor = (     __m128i *)((char *)buffer_cursor + callee_output_word);
                i = (     __m128i *)((char *)i + callee_output_word);
              }
              break;
            }
            if ( !SR_VEC_PTR_LANES(128, i, i8)[0] )
              return comparison_vector;
            if ( SR_VEC_PTR_LANES(128, buffer_cursor, i8)[0] != SR_VEC_PTR_LANES(128, i, i8)[0] )
              break;
            buffer_cursor = (     __m128i *)((char *)buffer_cursor + 1);
          }
        }
        comparison_vector = (     __m128i *)((char *)comparison_vector + 1);
      }
      else
      {
        ++comparison_vector;
      }
    }
  }
  if ( ((unsigned __int16)a2 & 0xFFFu) > 0xFF0uLL )
  {
    inserted = _mm_cvtsi64_si128((long long)(0));
    saved_state_address = a2;
    table_value_2 = SR_VEC_PTR_LANES(128, a2, i8)[0];
    remaining_count = 16;
    do
    {
      cached_table_value = table_value_2;
      inserted = _mm_insert_epi8(_mm_srli_si128(inserted, 1), table_value_2, 15);
      if ( table_value_2 )
        table_value_2 = SR_VEC_PTR_LANES(128, saved_state_address, i8)[1];
      state_address = (     __m128i *)&SR_VEC_PTR_LANES(128, saved_state_address, i8)[1];
      if ( !cached_table_value )
        state_address = saved_state_address;
      saved_state_address = state_address;
      --remaining_count;
    }
    while ( remaining_count );
  }
  else
  {
    inserted = _mm_loadu_si128(a2);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)comparison_vector & 0xFFFu) > 0xFF0uLL )
    {
      if ( !SR_VEC_PTR_LANES(128, comparison_vector, i8)[0] )
        return nullptr;
      if ( SR_VEC_PTR_LANES(128, comparison_vector, i8)[0] == (_BYTE)table_value )
        goto LABEL_35;
LABEL_43:
      comparison_vector = (     __m128i *)((char *)comparison_vector + 1);
    }
    loaded_vector_3 = _mm_loadu_si128(comparison_vector);
    comparison_vector_2 = _mm_cmpistrc(inserted, loaded_vector_3, 12);
    if ( comparison_vector_2 | _mm_cmpistrz(inserted, loaded_vector_3, 12) )
      break;
    ++comparison_vector;
  }
  if ( comparison_vector_2 )
  {
    comparison_vector = (     __m128i *)((char *)comparison_vector + _mm_cmpistri(inserted, loaded_vector_3, 12));
LABEL_35:
    saved_comparison_vector = comparison_vector;
    for ( j = a2; ; j = (     __m128i *)((char *)j + selection_code) )
    {
      if ( ((unsigned __int16)saved_comparison_vector & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
      {
        if ( !SR_VEC_PTR_LANES(128, j, i8)[0] )
          return comparison_vector;
        if ( SR_VEC_PTR_LANES(128, saved_comparison_vector, i8)[0] != SR_VEC_PTR_LANES(128, j, i8)[0] )
          goto LABEL_43;
        selection_code = 1;
      }
      else
      {
        loaded_vector_4 = _mm_loadu_si128(saved_comparison_vector);
        loaded_vector_5 = _mm_loadu_si128(j);
        comparison_vector_3 = _mm_cmpistrs(loaded_vector_5, loaded_vector_4, 12);
        if ( !_mm_cmpistro(loaded_vector_5, loaded_vector_4, 12) )
          goto LABEL_43;
        if ( comparison_vector_3 )
          return comparison_vector;
        selection_code = 16;
      }
      saved_comparison_vector = (     __m128i *)((char *)saved_comparison_vector + selection_code);
    }
  }
  return nullptr;
}

//----- (00000001401FC820) ----------------------------------------------------
__int64            sub_1401FC820(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 integer_difference;
  bool byteswap_uint64_result;
  unsigned __int64 remaining_count;
  unsigned __int64 loaded_word;
  unsigned __int64 remaining_count_2;

  integer_difference = a2 - (_QWORD)a1;
  if ( a3 < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)a1 & 7) != 0; --a3 )
  {
    byteswap_uint64_result = *(_BYTE *)a1 < *((_BYTE *)a1 + integer_difference);
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + integer_difference) )
      return -byteswap_uint64_result - ((unsigned int)byteswap_uint64_result - 1);
    a1 = (unsigned __int64 *)((char *)a1 + 1);
  }
  if ( !(a3 >> 3) )
  {
LABEL_6:
    if ( !a3 )
      return 0;
    while ( 1 )
    {
      byteswap_uint64_result = *(_BYTE *)a1 < *((_BYTE *)a1 + integer_difference);
      if ( *(_BYTE *)a1 != *((_BYTE *)a1 + integer_difference) )
        break;
      a1 = (unsigned __int64 *)((char *)a1 + 1);
      if ( !--a3 )
        return 0;
    }
    return -byteswap_uint64_result - ((unsigned int)byteswap_uint64_result - 1);
  }
  remaining_count = a3 >> 5;
  if ( a3 >> 5 )
  {
    while ( 1 )
    {
      loaded_word = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + integer_difference) )
        break;
      loaded_word = a1[1];
      if ( loaded_word != *(unsigned __int64 *)((char *)a1 + integer_difference + 8) )
        goto LABEL_24;
      loaded_word = a1[2];
      if ( loaded_word != *(unsigned __int64 *)((char *)a1 + integer_difference + 16) )
        goto LABEL_23;
      loaded_word = a1[3];
      if ( loaded_word != *(unsigned __int64 *)((char *)a1 + integer_difference + 24) )
      {
        ++a1;
LABEL_23:
        ++a1;
LABEL_24:
        ++a1;
        break;
      }
      a1 += 4;
      if ( !--remaining_count )
      {
        a3 &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    remaining_count_2 = a3 >> 3;
    if ( !(a3 >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      loaded_word = *a1;
      if ( *a1 != *(unsigned __int64 *)((char *)a1 + integer_difference) )
        break;
      ++a1;
      if ( !--remaining_count_2 )
      {
        a3 &= 7u;
        goto LABEL_6;
      }
    }
  }
  byteswap_uint64_result = _byteswap_uint64(loaded_word) < _byteswap_uint64(*(unsigned __int64 *)((char *)a1 + integer_difference));
  return -byteswap_uint64_result - ((unsigned int)byteswap_uint64_result - 1);
}

//----- (00000001401FC900) ---------------------------------------------
__int64 sub_1401FC900(void *a1, __int64 offset, unsigned __int64 count)
{
  unsigned char *destination = (unsigned char *)a1;
  const unsigned char *source = (const unsigned char *)((uintptr_t)a1 + (uintptr_t)offset);
  for (unsigned __int64 i = 0; i < count; ++i) destination[i] = source[i];
  return (__int64)(uintptr_t)a1;
}

__int128 sr_copy_load128(const void *p) {
  __int128 v; __builtin_memcpy(&v, p, 16); return v;
}

void sr_copy_store128(void *p, __int128 v) {
  __builtin_memcpy(p, &v, 16);
}

//----- (00000001401FC920) ----------------------------------------------------
__m128i *           crt_memcpy(__m128i *a1,      __m128i *a2, unsigned __int64 a3)
{
  bool comparison_result;
  __int64 integer_difference;
  __m128i *result;
  __m128i loaded_vector;
  __int8 table_value;
  __int16 table_value_2;
  __int8 table_value_3;
  __int8 table_value_4;
  __int16 table_value_5;
  __int16 table_value_6;
  __int8 table_value_7;
  __int32 table_value_8;
  __int8 table_value_9;
  __int8 table_value_10;
  __int16 table_value_11;
  __int32 table_value_12;
  __int32 table_value_13;
  __int16 table_value_14;
  __int32 table_value_15;
  __int16 table_value_16;
  __int8 table_value_17;
  __m128 loaded_vector_2;
  __int8 *state_address;
  __m128i *buffer_cursor;
  __m128i saved_loaded_vector;
  unsigned __int64 masked_bits;
  unsigned __int64 option_flags;
  unsigned __int64 remaining_count;
  __m128i loaded_vector_3;
  __m128i loaded_vector_4;
  __m128i loaded_vector_5;
  __m128i loaded_vector_6;
  __m128 loaded_vector_7;
  __m128 loaded_vector_8;
  unsigned __int64 j;
  unsigned __int64 masked_bits_2;
  __m128 loaded_vector_9;
  __m128 loaded_vector_10;
  __m128 loaded_vector_11;
  __m128 loaded_vector_12;
  __m128 loaded_vector_13;
  __int8 *state_address_2;
  __int128 copy_load128_result;
  unsigned __int64 option_flags_2;
  unsigned __int64 option_flags_3;
  _OWORD *saved_option_flags;
  __int128 saved_copy_load128_result;
  unsigned __int64 remaining_count_2;
  __int128 copy_load128_result_2;
  __int128 copy_load128_result_3;
  __int128 copy_load128_result_4;
  __int128 copy_load128_result_5;
  __int128 copy_load128_result_6;
  __int128 copy_load128_result_7;
  unsigned __int64 i;

  result = a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      SR_VEC_PTR_LANES(128, a1, i8)[0] = SR_VEC_PTR_LANES(128, a2, i8)[0];
      break;
    case 2uLL:
      SR_VEC_PTR_LANES(128, a1, i16)[0] = SR_VEC_PTR_LANES(128, a2, i16)[0];
      break;
    case 3uLL:
      table_value = SR_VEC_PTR_LANES(128, a2, i8)[2];
      SR_VEC_PTR_LANES(128, a1, i16)[0] = SR_VEC_PTR_LANES(128, a2, i16)[0];
      SR_VEC_PTR_LANES(128, a1, i8)[2] = table_value;
      break;
    case 4uLL:
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      break;
    case 5uLL:
      table_value_4 = SR_VEC_PTR_LANES(128, a2, i8)[4];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i8)[4] = table_value_4;
      break;
    case 6uLL:
      table_value_5 = SR_VEC_PTR_LANES(128, a2, i16)[2];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i16)[2] = table_value_5;
      break;
    case 7uLL:
      table_value_6 = SR_VEC_PTR_LANES(128, a2, i16)[2];
      table_value_7 = SR_VEC_PTR_LANES(128, a2, i8)[6];
      SR_VEC_PTR_LANES(128, a1, i32)[0] = SR_VEC_PTR_LANES(128, a2, i32)[0];
      SR_VEC_PTR_LANES(128, a1, i16)[2] = table_value_6;
      SR_VEC_PTR_LANES(128, a1, i8)[6] = table_value_7;
      break;
    case 8uLL:
      SR_VEC_PTR_LANES(128, a1, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      break;
    case 9uLL:
      table_value_10 = SR_VEC_PTR_LANES(128, a2, i8)[8];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i8)[8] = table_value_10;
      break;
    case 0xAuLL:
      table_value_11 = SR_VEC_PTR_LANES(128, a2, i16)[4];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i16)[4] = table_value_11;
      break;
    case 0xBuLL:
      table_value_2 = SR_VEC_PTR_LANES(128, a2, i16)[4];
      table_value_3 = SR_VEC_PTR_LANES(128, a2, i8)[10];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i16)[4] = table_value_2;
      SR_VEC_PTR_LANES(128, result, i8)[10] = table_value_3;
      break;
    case 0xCuLL:
      table_value_12 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = table_value_12;
      break;
    case 0xDuLL:
      table_value_8 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      table_value_9 = SR_VEC_PTR_LANES(128, a2, i8)[12];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = table_value_8;
      SR_VEC_PTR_LANES(128, result, i8)[12] = table_value_9;
      break;
    case 0xEuLL:
      table_value_13 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      table_value_14 = SR_VEC_PTR_LANES(128, a2, i16)[6];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = table_value_13;
      SR_VEC_PTR_LANES(128, result, i16)[6] = table_value_14;
      break;
    case 0xFuLL:
      table_value_15 = SR_VEC_PTR_LANES(128, a2, i32)[2];
      table_value_16 = SR_VEC_PTR_LANES(128, a2, i16)[6];
      table_value_17 = SR_VEC_PTR_LANES(128, a2, i8)[14];
      SR_VEC_PTR_LANES(128, result, i64)[0] = SR_VEC_PTR_LANES(128, a2, i64)[0];
      SR_VEC_PTR_LANES(128, result, i32)[2] = table_value_15;
      SR_VEC_PTR_LANES(128, result, i16)[6] = table_value_16;
      SR_VEC_PTR_LANES(128, result, i8)[14] = table_value_17;
      break;
    case 0x10uLL:
      _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128(a2));
      break;
    default:
      if ( a3 <= 0x20 )
      {
        loaded_vector = _mm_loadu_si128((const __m128i *)(const void *)(((char *)a2 + a3 - 16)));
        _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128((const __m128i *)(const void *)(a2)));
        _mm_storeu_si128((__m128i *)(void *)(((char *)a1 + a3 - 16)), loaded_vector);
        result = a1;
      }
      else
      {
        comparison_result = (uintptr_t)a2 < (uintptr_t)a1;
        integer_difference = (uintptr_t)a2 - (uintptr_t)a1;
        if ( comparison_result && a1 < (__m128i *)&SR_VEC_PTR_LANES(128, a2, i8)[a3] )
        {
          state_address_2 = &SR_VEC_PTR_LANES(128, a1, i8)[a3];
          copy_load128_result = sr_copy_load128((const void *)(&state_address_2[integer_difference - 16]));
          option_flags_2 = (unsigned __int64)(state_address_2 - 16);
          option_flags_3 = a3 - 16;
          if ( (option_flags_2 & 0xF) != 0 )
          {
            saved_option_flags = (_OWORD *)option_flags_2;
            option_flags_2 &= 0xFFFFFFFFFFFFFFF0uLL;
            saved_copy_load128_result = copy_load128_result;
            copy_load128_result = sr_copy_load128((const void *)((option_flags_2 + integer_difference)));
            sr_copy_store128((void *)(saved_option_flags), saved_copy_load128_result);
            option_flags_3 = option_flags_2 - (_QWORD)a1;
          }
          remaining_count_2 = option_flags_3 >> 7;
          if ( option_flags_3 >> 7 )
          {
            for ( sr_copy_store128((void *)(option_flags_2), copy_load128_result); ; sr_copy_store128((void *)(option_flags_2), copy_load128_result_7) )
            {
              copy_load128_result_2 = sr_copy_load128((const void *)((option_flags_2 + integer_difference - 16)));
              copy_load128_result_3 = sr_copy_load128((const void *)((option_flags_2 + integer_difference - 32)));
              option_flags_2 -= 128LL;
              sr_copy_store128((void *)((option_flags_2 + 112)), copy_load128_result_2);
              sr_copy_store128((void *)((option_flags_2 + 96)), copy_load128_result_3);
              copy_load128_result_4 = sr_copy_load128((const void *)((option_flags_2 + integer_difference + 64)));
              --remaining_count_2;
              sr_copy_store128((void *)((option_flags_2 + 80)), sr_copy_load128((const void *)((option_flags_2 + integer_difference + 80))));
              sr_copy_store128((void *)((option_flags_2 + 64)), copy_load128_result_4);
              copy_load128_result_5 = sr_copy_load128((const void *)((option_flags_2 + integer_difference + 32)));
              sr_copy_store128((void *)((option_flags_2 + 48)), sr_copy_load128((const void *)((option_flags_2 + integer_difference + 48))));
              sr_copy_store128((void *)((option_flags_2 + 32)), copy_load128_result_5);
              copy_load128_result_6 = sr_copy_load128((const void *)((option_flags_2 + integer_difference + 16)));
              copy_load128_result_7 = sr_copy_load128((const void *)((option_flags_2 + integer_difference)));
              if ( !remaining_count_2 )
                break;
              sr_copy_store128((void *)((option_flags_2 + 16)), copy_load128_result_6);
            }
            sr_copy_store128((void *)((option_flags_2 + 16)), copy_load128_result_6);
            option_flags_3 &= 0x7Fu;
            copy_load128_result = copy_load128_result_7;
          }
          for ( i = option_flags_3 >> 4; i; --i )
          {
            sr_copy_store128((void *)(option_flags_2), copy_load128_result);
            option_flags_2 -= 16LL;
            copy_load128_result = sr_copy_load128((const void *)((option_flags_2 + integer_difference)));
          }
          if ( (option_flags_3 & 0xF) != 0 )
            _mm_storeu_si128((__m128i *)(void *)(a1), _mm_loadu_si128((const __m128i *)(const void *)(a2)));
          sr_copy_store128((void *)(option_flags_2), copy_load128_result);
          result = a1;
        }
        else
        {
          if ( a3 <= 0x80 )
          {
            loaded_vector_2 = _mm_loadu_ps((const float *)(const void *)(((char *)a1 + integer_difference)));
            buffer_cursor = a1 + 1;
            option_flags = a3 - 16;
          }
          else
          {
            if ( (g_144CBE4C0 & 2) != 0 )
              return (__m128i *)sub_1401FC900(a1, integer_difference, a3);
            loaded_vector_2 = _mm_loadu_ps((const float *)(const void *)(((char *)a1 + integer_difference)));
            state_address = &SR_VEC_PTR_LANES(128, a1, i8)[a3];
            buffer_cursor = a1 + 1;
            if ( ((unsigned __int8)a1 & 0xF) != 0 )
            {
              saved_loaded_vector = (__m128i)loaded_vector_2;
              masked_bits = (unsigned __int64)buffer_cursor & 0xFFFFFFFFFFFFFFF0uLL;
              loaded_vector_2 = _mm_loadu_ps((const float *)(const void *)((masked_bits + integer_difference)));
              buffer_cursor = (__m128i *)(masked_bits + 16);
              _mm_storeu_si128((__m128i *)(void *)(a1), saved_loaded_vector);
            }
            option_flags = state_address - (__int8 *)buffer_cursor;
            remaining_count = option_flags >> 7;
            if ( option_flags >> 7 )
            {
              _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-1]), (__m128i)loaded_vector_2);
              if ( remaining_count <= qword_140302088 )
              {
                while ( 1 )
                {
                  loaded_vector_3 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference)));
                  loaded_vector_4 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference + 16)));
                  buffer_cursor += 8;
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-8]), loaded_vector_3);
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-7]), loaded_vector_4);
                  loaded_vector_5 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference - 80)));
                  --remaining_count;
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-6]), _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference - 96))));
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-5]), loaded_vector_5);
                  loaded_vector_6 = _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference - 48)));
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-4]), _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + integer_difference - 64))));
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-3]), loaded_vector_6);
                  loaded_vector_7 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-2] + integer_difference)));
                  loaded_vector_8 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-1] + integer_difference)));
                  if ( !remaining_count )
                    break;
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-2]), (__m128i)loaded_vector_7);
                  _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-1]), (__m128i)loaded_vector_8);
                }
              }
              else
              {
                while ( 1 )
                {
                  _mm_prefetch(&SR_VEC_LANES(128, buffer_cursor[32], i8)[integer_difference], 0);
                  loaded_vector_9 = _mm_loadu_ps((const float *)(const void *)(((char *)buffer_cursor + integer_difference)));
                  loaded_vector_10 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[1] + integer_difference)));
                  buffer_cursor += 8;
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-8], loaded_vector_9);
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-7], loaded_vector_10);
                  loaded_vector_11 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-5] + integer_difference)));
                  --remaining_count;
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-6], _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-6] + integer_difference))));
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-5], loaded_vector_11);
                  loaded_vector_12 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-4] + integer_difference)));
                  loaded_vector_13 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-3] + integer_difference)));
                  _mm_prefetch(&SR_VEC_LANES(128, buffer_cursor[36], i8)[integer_difference], 0);
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-4], loaded_vector_12);
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-3], loaded_vector_13);
                  loaded_vector_7 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-2] + integer_difference)));
                  loaded_vector_8 = _mm_loadu_ps((const float *)(const void *)(((char *)&buffer_cursor[-1] + integer_difference)));
                  if ( !remaining_count )
                    break;
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-2], loaded_vector_7);
                  _mm_stream_ps((float *)(void *)&buffer_cursor[-1], loaded_vector_8);
                }
                _mm_sfence();
              }
              _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-2]), (__m128i)loaded_vector_7);
              option_flags &= 0x7Fu;
              loaded_vector_2 = loaded_vector_8;
            }
          }
          for ( j = option_flags >> 4; j; --j )
          {
            _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-1]), (__m128i)loaded_vector_2);
            loaded_vector_2 = _mm_loadu_ps((const float *)(const void *)(((char *)buffer_cursor++ + integer_difference)));
          }
          masked_bits_2 = option_flags & 0xF;
          if ( masked_bits_2 )
            _mm_storeu_si128((__m128i *)(void *)(((char *)buffer_cursor + masked_bits_2 - 16)), _mm_loadu_si128((const __m128i *)(const void *)(((char *)buffer_cursor + masked_bits_2 + integer_difference - 16))));
          _mm_storeu_si128((__m128i *)(void *)(&buffer_cursor[-1]), (__m128i)loaded_vector_2);
          result = a1;
        }
      }
      break;
  }
  return result;
}

//----- (00000001401FCD10) ----------------------------------------------------
__int64            sub_1401FCD10(void *a1, char a2, unsigned __int64 a3)
{
  return (__int64)(uintptr_t)memset(a1, (unsigned char)a2, a3);
}

//----- (00000001401FCD30) ----------------------------------------------------
void *           crt_memset(void *destination, unsigned __int8 a2, unsigned __int64 a3)
{
  _WORD *a1 = (_WORD *)destination;
  __m128 vector_result;
  float *record_byte_offset;
  unsigned __int64 remaining_count;
  unsigned __int64 i;
  unsigned __int64 masked_bits;
  _WORD *result;
  uint64_t uint64_c_result;
  char *byte_cursor;

  uint64_c_result = UINT64_C(0x101010101010101) * a2;
  byte_cursor = (char *)a1 + a3;
  result = a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      goto LABEL_19;
    case 2uLL:
      goto LABEL_27;
    case 3uLL:
      goto LABEL_18;
    case 4uLL:
      goto LABEL_21;
    case 5uLL:
      goto LABEL_24;
    case 6uLL:
      goto LABEL_26;
    case 7uLL:
      goto LABEL_17;
    case 8uLL:
      *(_QWORD *)a1 = uint64_c_result;
      return result;
    case 9uLL:
      *(_QWORD *)(byte_cursor - 9) = uint64_c_result;
      *(byte_cursor - 1) = uint64_c_result;
      return result;
    case 0xAuLL:
      *(_QWORD *)a1 = uint64_c_result;
      a1[4] = uint64_c_result;
      return result;
    case 0xBuLL:
      *(_QWORD *)a1 = uint64_c_result;
      a1[4] = uint64_c_result;
      *((_BYTE *)a1 + 10) = uint64_c_result;
      return result;
    case 0xCuLL:
      *(_QWORD *)(byte_cursor - 12) = uint64_c_result;
LABEL_21:
      *((_DWORD *)byte_cursor - 1) = uint64_c_result;
      return result;
    case 0xDuLL:
      *(_QWORD *)(byte_cursor - 13) = uint64_c_result;
LABEL_24:
      *(_DWORD *)(byte_cursor - 5) = uint64_c_result;
      *(byte_cursor - 1) = uint64_c_result;
      return result;
    case 0xEuLL:
      *(_QWORD *)(byte_cursor - 14) = uint64_c_result;
LABEL_26:
      *(_DWORD *)(byte_cursor - 6) = uint64_c_result;
LABEL_27:
      *((_WORD *)byte_cursor - 1) = uint64_c_result;
      return result;
    case 0xFuLL:
      *(_QWORD *)(byte_cursor - 15) = uint64_c_result;
LABEL_17:
      *(_DWORD *)(byte_cursor - 7) = uint64_c_result;
LABEL_18:
      *(_WORD *)(byte_cursor - 3) = uint64_c_result;
LABEL_19:
      *(byte_cursor - 1) = uint64_c_result;
      return result;
    case 0x10uLL:
      *(_QWORD *)a1 = uint64_c_result;
      *((_QWORD *)a1 + 1) = uint64_c_result;
      return result;
    default:
      record_byte_offset = (float *)a1;
      vector_result = _mm_castsi128_ps(_mm_unpacklo_epi8(_mm_cvtsi64_si128((long long)uint64_c_result), _mm_cvtsi64_si128((long long)uint64_c_result)));
      if ( a3 <= 0x80 )
        goto LABEL_8;
      if ( (g_144CBE4C0 & 2) != 0 )
        return (_WORD *)sub_1401FCD10(a1, a2, a3);
      _mm_storeu_ps((float *)a1, vector_result);
      record_byte_offset = (float *)((unsigned __int64)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      a3 = (char *)a1 + a3 - (char *)record_byte_offset;
      remaining_count = a3 >> 7;
      if ( a3 >> 7 )
      {
        if ( remaining_count > qword_140302090 )
        {
          do
          {
            _mm_stream_ps(record_byte_offset, vector_result);
            _mm_stream_ps(record_byte_offset + 4, vector_result);
            record_byte_offset += 32;
            _mm_stream_ps(record_byte_offset - 24, vector_result);
            _mm_stream_ps(record_byte_offset - 20, vector_result);
            --remaining_count;
            _mm_stream_ps(record_byte_offset - 16, vector_result);
            _mm_stream_ps(record_byte_offset - 12, vector_result);
            _mm_stream_ps(record_byte_offset - 8, vector_result);
            _mm_stream_ps(record_byte_offset - 4, vector_result);
          }
          while ( remaining_count );
          _mm_sfence();
          a3 &= 0x7Fu;
        }
        else
        {
          do
          {
            _mm_storeu_ps(record_byte_offset, vector_result);
            _mm_storeu_ps(record_byte_offset + 4, vector_result);
            record_byte_offset += 32;
            _mm_storeu_ps(record_byte_offset - 24, vector_result);
            _mm_storeu_ps(record_byte_offset - 20, vector_result);
            --remaining_count;
            _mm_storeu_ps(record_byte_offset - 16, vector_result);
            _mm_storeu_ps(record_byte_offset - 12, vector_result);
            _mm_storeu_ps(record_byte_offset - 8, vector_result);
            _mm_storeu_ps(record_byte_offset - 4, vector_result);
          }
          while ( remaining_count );
          a3 &= 0x7Fu;
        }
      }
LABEL_8:
      for ( i = a3 >> 4; i; --i )
      {
        _mm_storeu_ps(record_byte_offset, vector_result);
        record_byte_offset += 4;
      }
      masked_bits = a3 & 0xF;
      if ( masked_bits )
        _mm_storeu_ps((float *)((char *)record_byte_offset + masked_bits - 16), vector_result);
      return a1;
  }
}

//----- (00000001401FCED0) ----------------------------------------------------
__int64 sub_1401FCED0()
{
  return g_144CBE548;
}

//----- (00000001401FCED8) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401FCED8()
{
  void (*callback_function)(void);

  callback_function = (void (*)(void))sub_1401FCED0();
  if ( callback_function )
    callback_function();
  abort();
}

//----- (00000001401FCF00) ----------------------------------------------------
char sub_1401FCF00()
{
  if ( !sub_1401FD9D4() )
    return 0;
  if ( !sub_1401FD968() )
  {
    _acrt_uninitialize_locks();
    return 0;
  }
  return 1;
}

//----- (00000001401FCF28) ----------------------------------------------------
bool sub_1401FCF28()
{
  return sub_1401FD858() != 0;
}

//----- (00000001401FCF3C) ----------------------------------------------------
char sub_1401FCF3C()
{
  sub_1401FD7EC(nullptr);
  return 1;
}

//----- (00000001401FCF50) ----------------------------------------------------
char            sub_1401FCF50(char a1)
{
  if ( !a1 )
  {
    _acrt_uninitialize_ptd();
    _acrt_uninitialize_locks();
  }
  return 1;
}

//----- (00000001401FCF6C) ----------------------------------------------------
char _acrt_uninitialize_critical()
{
  _acrt_uninitialize_ptd();
  return 1;
}

// 1401FCF6C: invalid function type '__crt_bool __cdecl _acrt_uninitialize_critical(__crt_bool Terminating)' has been ignored

//----- (00000001401FCF80) ----------------------------------------------------
__int64            sub_1401FCF80(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 loaded_word;
  unsigned int *loaded_record_pointer;
  unsigned __int64 loaded_word_2;
  unsigned int element_index;
  int int64_result;
  unsigned int loaded_word_3;
  unsigned __int64 loaded_word_4;
  unsigned int saved_packed_word_bits;
  __int64 packed_word_bits;
  unsigned int i;
  __int64 scaled_index;
  unsigned int *input_cursor;
  __int64 input_value;

  sub_1401FDACC(a3);
  loaded_word = *(_QWORD *)(a4 + 8);
  loaded_record_pointer = *(unsigned int **)(a4 + 56);
  loaded_word_2 = *(_QWORD *)a4 - loaded_word;
  element_index = *(_DWORD *)(a4 + 72);
  if ( (a1[1] & 0x66) != 0 )
  {
    loaded_word_3 = *loaded_record_pointer;
    loaded_word_4 = *(_QWORD *)(a4 + 32) - loaded_word;
    if ( element_index < *loaded_record_pointer )
    {
      saved_packed_word_bits = *loaded_record_pointer;
      do
      {
        packed_word_bits = saved_packed_word_bits;
        if ( loaded_word_2 >= loaded_record_pointer[4 * element_index + 1] && loaded_word_2 < loaded_record_pointer[4 * element_index + 2] )
        {
          if ( (a1[1] & 0x20) != 0 )
          {
            for ( i = 0; i < saved_packed_word_bits; ++i )
            {
              if ( loaded_word_4 >= loaded_record_pointer[4 * i + 1]
                && loaded_word_4 < loaded_record_pointer[4 * i + 2]
                && loaded_record_pointer[4 * i + 4] == loaded_record_pointer[4 * element_index + 4]
                && loaded_record_pointer[4 * i + 3] == loaded_record_pointer[4 * element_index + 3] )
              {
                break;
              }
            }
            packed_word_bits = loaded_word_3;
            if ( i != loaded_word_3 )
              return 1;
          }
          scaled_index = loaded_record_pointer[4 * element_index + 4];
          if ( (_DWORD)scaled_index )
          {
            if ( loaded_word_4 == scaled_index && (a1[1] & 0x20) != 0 )
              return 1;
          }
          else
          {
            LOBYTE(packed_word_bits) = 1;
            *(_DWORD *)(a4 + 72) = element_index + 1;
            ((void (           *)(__int64, __int64))(loaded_word + loaded_record_pointer[4 * element_index + 3]))(packed_word_bits, a2);
            loaded_word_3 = *loaded_record_pointer;
            LODWORD(packed_word_bits) = *loaded_record_pointer;
          }
        }
        ++element_index;
        saved_packed_word_bits = packed_word_bits;
      }
      while ( element_index < (unsigned int)packed_word_bits );
    }
  }
  else
  {
    input_cursor = a1;
    input_value = a3;
    while ( element_index < *loaded_record_pointer )
    {
      if ( loaded_word_2 >= loaded_record_pointer[4 * element_index + 1] && loaded_word_2 < loaded_record_pointer[4 * element_index + 2] && loaded_record_pointer[4 * element_index + 4] )
      {
        if ( loaded_record_pointer[4 * element_index + 3] == 1 )
          goto LABEL_11;
        int64_result = ((__int64 (           *)(unsigned int **, __int64))(loaded_word + loaded_record_pointer[4 * element_index + 3]))(&input_cursor, a2);
        if ( int64_result < 0 )
          return 0;
        if ( int64_result > 0 )
        {
LABEL_11:
          if ( *a1 == -529697949 && sub_1401FD18C )
          {
            if ( (unsigned int)sub_14026CA40((__int64)&off_140283490) )
              sub_1401FD18C((__int64)a1);
          }
          sub_1401FDA90();
          ((void (           *)(__int64, __int64, unsigned int *, _QWORD, _QWORD, _QWORD, unsigned int *, __int64))RtlUnwindEx)(
            a2,
            loaded_word + loaded_record_pointer[4 * element_index + 4],
            a1,
            *a1,
            *(_QWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 64),
            input_cursor,
            input_value);
          _NLG_Return2_sr();
        }
      }
      ++element_index;
    }
  }
  return 1;
}

// 14026E278: invalid function type 'void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)' has been ignored

//----- (00000001401FD18C) ----------------------------------------------------
void            sub_1401FD18C(__int64 a1)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == -529697949
      && *(_DWORD *)(a1 + 24) == 4
      && (unsigned int)(*(_DWORD *)(a1 + 32) - 429065504) <= 2 )
    {
      loaded_word = *(_QWORD *)(a1 + 48);
      if ( loaded_word )
      {
        loaded_word_2 = *(int *)(loaded_word + 4);
        if ( (_DWORD)loaded_word_2 )
        {
          ((void (           *)(_QWORD))(*(_QWORD *)(a1 + 56) + loaded_word_2))(*(_QWORD *)(a1 + 40));
        }
        else if ( (*(_BYTE *)loaded_word & 0x10) != 0 )
        {
          loaded_word_3 = **(_QWORD **)(a1 + 40);
          if ( loaded_word_3 )
            (*(void (           **)(__int64))(*(_QWORD *)loaded_word_3 + 16LL))(loaded_word_3);
        }
      }
    }
  }
}

//----- (00000001401FD200) ----------------------------------------------------
__int64            sub_1401FD200(struct _EXCEPTION_POINTERS *a1, char a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;

  if ( a2 )
  {
    loaded_word = *(_QWORD *)a1;
    if ( **(_DWORD **)a1 == -529697949
      && *(_DWORD *)(loaded_word + 24) == 4
      && (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) <= 2 )
    {
      *(_QWORD *)(crt_getptd() + 32) = loaded_word;
      loaded_word_2 = *((_QWORD *)a1 + 1);
      *(_QWORD *)(crt_getptd() + 40) = loaded_word_2;
      terminate_sr();
    }
  }
  return 0;
}

//----- (00000001401FD260) ----------------------------------------------------
__int64            sub_1401FD260(__int64 a1)
{
  _QWORD *i;

  for ( i = *(_QWORD **)(crt_getptd() + 88); ; i = (_QWORD *)i[1] )
  {
    if ( !i )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}

//----- (00000001401FD298) ----------------------------------------------------
__int64            sub_1401FD298(__int64 a1, int *a2)
{
  __int64 result;

  result = a1 + *a2;
  if ( a2[1] >= 0 )
    result += a2[1] + (__int64)*(int *)(a2[2] + *(_QWORD *)(a2[1] + a1));
  return result;
}

//----- (00000001401FD2BC) ----------------------------------------------------
__int64            sub_1401FD2BC(__int64 a1)
{
  _DWORD *loaded_word;
  __int64 getptd_result;
  __int64 loaded_word_2;

  loaded_word = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -532462766 || *loaded_word == -532459699 )
  {
    if ( *(int *)(crt_getptd() + 48) > 0 )
    {
      getptd_result = crt_getptd();
      --*(_DWORD *)(getptd_result + 48);
    }
  }
  else if ( *loaded_word == -529697949 )
  {
    *(_QWORD *)(crt_getptd() + 32) = (uint64)(uintptr_t)(loaded_word);
    loaded_word_2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(crt_getptd() + 40) = loaded_word_2;
    terminate_sr();
  }
  return 0;
}

//----- (00000001401FD324) ----------------------------------------------------
__int64            sub_1401FD324(_DWORD *a1)
{
  __int64 getptd_result;
  _BYTE *loaded_record_pointer;
  __int64 scratch_buffer[3];

  *a1 = 0;
  getptd_result = *(_QWORD *)(crt_getptd() + 32);
  if ( getptd_result )
  {
    loaded_record_pointer = *(_BYTE **)(getptd_result + 48);
    if ( loaded_record_pointer )
    {
      if ( (*loaded_record_pointer & 0x10) != 0 )
        return *(_QWORD *)(**(_QWORD **)(getptd_result + 40) - 8LL);
      scratch_buffer[1] = 0;
      scratch_buffer[0] = getptd_result;
      *a1 = sub_1401FD3C8((__int64)&(*(unsigned __int64 *)&sr_mem_140302de0[0]), scratch_buffer);
    }
  }
  return 0;
}

//----- (00000001401FD380) ----------------------------------------------------
__int64 sub_1401FD380()
{
  return crt_getptd() + 32;
}

//----- (00000001401FD394) ----------------------------------------------------
__int64 sub_1401FD394()
{
  return crt_getptd() + 40;
}

//----- (00000001401FD3A8) ----------------------------------------------------
__int64 sub_1401FD3A8()
{
  return crt_getptd() + 48;
}

//----- (00000001401FD3BC) ----------------------------------------------------
void __attribute__((noreturn)) sub_1401FD3BC()
{
  terminate_sr();
}

//----- (00000001401FD3C8) ----------------------------------------------------
__int64            sub_1401FD3C8(__int64 a1, __int64 *a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  int *buffer_cursor;
  int remaining_count;
       char *left_text;

  if ( !a2
    || (loaded_word = *a2) == 0
    || *(_DWORD *)loaded_word != -529697949
    || *(_DWORD *)(loaded_word + 24) != 4
    || (unsigned int)(*(_DWORD *)(loaded_word + 32) - 429065504) > 2 )
  {
    abort();
  }
  loaded_word_2 = *(_QWORD *)(loaded_word + 56);
  loaded_word_3 = *(int *)(*(_QWORD *)(loaded_word + 48) + 12LL);
  buffer_cursor = (int *)(loaded_word_3 + loaded_word_2 + 4);
  remaining_count = *(_DWORD *)(loaded_word_3 + loaded_word_2);
  if ( remaining_count <= 0 )
    return 0;
  left_text = (     char *)(a1 + 16);
  while ( strcmp_sr(left_text, (     char *)(*(int *)(*buffer_cursor + loaded_word_2 + 4) + loaded_word_2 + 16)) )
  {
    --remaining_count;
    ++buffer_cursor;
    if ( remaining_count <= 0 )
      return 0;
  }
  return 1;
}

//----- (00000001401FD470) ----------------------------------------------------
// attributes: thunk
__int64 j_j__malloc_base()
{
  return j__malloc_base();
}

//----- (00000001401FD478) ----------------------------------------------------
// attributes: thunk
void         j_free_3(void *Block)
{
  free(Block);
}

//----- (00000001401FD4B0) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_999(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD4CC) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1000(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD538) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1001(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD554) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1002(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD570) ----------------------------------------------------
__int64            sub_1401FD570(__int64 a1, __int64 a2)
{
  char *text_cursor;
  __int64 integer_difference;
  char input_byte;

  if ( a1 == a2 )
    return 0;
  text_cursor = (char *)(a1 + 9);
  integer_difference = a2 - a1;
  while ( 1 )
  {
    input_byte = *text_cursor;
    if ( *text_cursor != text_cursor[integer_difference] )
      break;
    ++text_cursor;
    if ( !input_byte )
      return 0;
  }
  return (unsigned __int8)*text_cursor < (unsigned __int8)text_cursor[integer_difference] ? -1 : 1;
}

//----- (00000001401FD598) ----------------------------------------------------
_QWORD *sub_1401FD598()
{
  _QWORD *result;
  _QWORD *record_pointer;

  result = (_QWORD *)((__int64 (*)(void))InterlockedFlushSList)();
  if ( result )
  {
    do
    {
      record_pointer = (_QWORD *)*result;
      free(result);
      result = record_pointer;
    }
    while ( record_pointer );
  }
  return result;
}

// 14026E268: invalid function type 'PSLIST_ENTRY (__stdcall *InterlockedFlushSList)(PSLIST_HEADER ListHead)' has been ignored

//----- (00000001401FD5FC) ----------------------------------------------------
signed __int64            sub_1401FD5FC(volatile signed __int64 *a1, __int64 a2)
{
  signed __int64 result;
  signed __int64 unused_written_slot;
  char *allocation_buffer;
  __int64 remaining_count;
  char *text_cursor;
  __int64 integer_sum;
  _OWORD *returned_pointer;
  void *allocation_buffer_2;
  signed __int64 integer_sum_2;
  _OWORD *packed_vector;
  signed __int64 interlockedcompareexchange64_result;

  result = *a1;
  unused_written_slot = 0;
  if ( !*a1 )
  {
    allocation_buffer = sub_140205E28(nullptr, (__int64)a1 + 9, 0, (__int64)j_j__malloc_base, (__int64)j_free_3, 0x2800u);
    if ( allocation_buffer )
    {
      remaining_count = -1;
      do
        ++remaining_count;
      while ( allocation_buffer[remaining_count] );
      if ( remaining_count )
      {
        text_cursor = &allocation_buffer[remaining_count - 1];
        do
        {
          if ( *text_cursor != 32 )
            break;
          *text_cursor-- = 0;
          --remaining_count;
        }
        while ( remaining_count );
      }
      integer_sum = remaining_count + 1;
      returned_pointer = (_OWORD *)j__malloc_base();
      allocation_buffer_2 = returned_pointer;
      if ( returned_pointer )
      {
        integer_sum_2 = (signed __int64)(returned_pointer + 1);
        *returned_pointer = 0;
        packed_vector = returned_pointer;
        strcpy_s_sr(returned_pointer + 1, integer_sum, allocation_buffer);
        interlockedcompareexchange64_result = _InterlockedCompareExchange64(a1, integer_sum_2, 0);
        if ( interlockedcompareexchange64_result )
        {
          unused_written_slot = interlockedcompareexchange64_result;
        }
        else
        {
          allocation_buffer_2 = nullptr;
          ((void (           *)(__int64, _OWORD *))InterlockedPushEntrySList)(a2, packed_vector);
          unused_written_slot = integer_sum_2;
        }
      }
      free(allocation_buffer_2);
    }
    free(allocation_buffer);
    return unused_written_slot;
  }
  return result;
}

// 14026E270: invalid function type 'PSLIST_ENTRY (__stdcall *InterlockedPushEntrySList)(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)' has been ignored

//----- (00000001401FD724) ----------------------------------------------------
_anonymous_namespace___scoped_get_last_error_reset *           _anonymous_namespace___scoped_get_last_error_reset__scoped_get_last_error_reset(
        _anonymous_namespace___scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored

//----- (00000001401FD740) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1003(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD784) ----------------------------------------------------
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
// MFC 7-14 64bit
void            unknown_libname_1004(void **a1)
{
  free(*a1);
  *a1 = nullptr;
}

//----- (00000001401FD7A0) ----------------------------------------------------
char            sub_1401FD7A0(__int64 a1)
{
  int call_result;

  call_result = sub_1402066B4(LODWORD(dwTlsIndex), a1);
  if ( call_result )
  {
    *(_DWORD *)(a1 + 120) = -2;
    LOBYTE(call_result) = 1;
  }
  return call_result;
}

//----- (00000001401FD7CC) ----------------------------------------------------
void            sub_1401FD7CC(unsigned int *a1)
{
  if ( a1 )
  {
    if ( a1 != &g_144CBE550 )
      free(a1);
  }
}

//----- (00000001401FD7EC) ----------------------------------------------------
void            sub_1401FD7EC(unsigned int *Block)
{
  unsigned int comparison_operand;
  unsigned int *returned_pointer;

  comparison_operand = LODWORD(dwTlsIndex);
  if ( LODWORD(dwTlsIndex) != -1 )
  {
    if ( !Block )
    {
      returned_pointer = (unsigned int *)sub_14020666C(LODWORD(dwTlsIndex));
      comparison_operand = LODWORD(dwTlsIndex);
      Block = returned_pointer;
    }
    sub_1402066B4(comparison_operand, 0);
    if ( Block )
    {
      if ( Block != &g_144CBE550 )
        free(Block);
    }
  }
}

//----- (00000001401FD83C) ----------------------------------------------------
__int64 crt_getptd()
{
  __int64 result;

  result = sub_1401FD858();
  if ( !result )
    abort();
  return result;
}

//----- (00000001401FD858) ----------------------------------------------------
__int64 sub_1401FD858()
{
  unsigned int int64_result;
  __int64 call_result;
  __int64 unused_written_slot;
  __int64 call_result_2;
  unsigned int comparison_operand;
  _DWORD *allocation_buffer;
  _DWORD *saved_allocation_buffer;

  if ( LODWORD(dwTlsIndex) == -1 )
    return 0;
  int64_result = ((__int64 (*)(void))GetLastError)();
  call_result = sub_14020666C(LODWORD(dwTlsIndex));
  unused_written_slot = 0;
  if ( call_result != -1 )
  {
    if ( call_result )
    {
      unused_written_slot = call_result;
      goto LABEL_13;
    }
    if ( !(unsigned int)sub_1402066B4(LODWORD(dwTlsIndex), -1) )
      goto LABEL_13;
    call_result_2 = j__calloc_base();
    comparison_operand = LODWORD(dwTlsIndex);
    allocation_buffer = (_DWORD *)call_result_2;
    if ( call_result_2 )
    {
      if ( (unsigned int)sub_1402066B4(LODWORD(dwTlsIndex), call_result_2) )
      {
        saved_allocation_buffer = allocation_buffer;
        allocation_buffer[30] = -2;
        allocation_buffer = nullptr;
        unused_written_slot = (__int64)saved_allocation_buffer;
LABEL_12:
        free(allocation_buffer);
        goto LABEL_13;
      }
      comparison_operand = LODWORD(dwTlsIndex);
    }
    sub_1402066B4(comparison_operand, 0);
    goto LABEL_12;
  }
LABEL_13:
  ((void (           *)(_QWORD))SetLastError)(int64_result);
  return unused_written_slot;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (00000001401FD918) ----------------------------------------------------
__int64 sub_1401FD918()
{
  unsigned int int64_result;
  __int64 call_result;

  if ( LODWORD(dwTlsIndex) == -1 )
    return 0;
  int64_result = ((__int64 (*)(void))GetLastError)();
  call_result = sub_14020666C(LODWORD(dwTlsIndex));
  ((void (           *)(_QWORD))SetLastError)(int64_result);
  if ( call_result == -1 )
    return 0;
  return call_result;
}

// 14026E260: invalid function type 'DWORD (__stdcall *GetLastError)()' has been ignored
// 14026E258: invalid function type 'void (__stdcall *SetLastError)(DWORD dwErrCode)' has been ignored

//----- (00000001401FD968) ----------------------------------------------------
char sub_1401FD968()
{
  unsigned int call_result;

  call_result = sub_1402065DC((__int64)sub_1401FD7CC);
  LODWORD(dwTlsIndex) = call_result;
  if ( call_result != -1 )
  {
    if ( (unsigned int)sub_1402066B4(call_result, (__int64)&g_144CBE550) )
    {
      g_144CBE5C8 = -2;
      return 1;
    }
    _acrt_uninitialize_ptd();
  }
  return 0;
}

//----- (00000001401FD9B0) ----------------------------------------------------
char _acrt_uninitialize_ptd()
{
  if ( LODWORD(dwTlsIndex) != -1 )
  {
    sub_140206624(LODWORD(dwTlsIndex));
    LODWORD(dwTlsIndex) = -1;
  }
  return 1;
}

//----- (00000001401FD9D4) ----------------------------------------------------
char sub_1401FD9D4()
{
  if ( (unsigned int)sub_140206708((__int64)&g_144CBE5D0, 0xFA0u, 0) )
  {
    ++g_144CBE5F8;
    return 1;
  }
  else
  {
    _acrt_uninitialize_locks();
    return 0;
  }
}

//----- (00000001401FDA08) ----------------------------------------------------
__int64            sub_1401FDA08(int a1)
{
  return ((__int64 (           *)(unsigned int *))EnterCriticalSection)(&dword_140404A6C[10 * a1 + 19064537]);
}

// 14026E250: invalid function type 'void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA24) ----------------------------------------------------
char _acrt_uninitialize_locks()
{
  unsigned int remaining_count;

  remaining_count = g_144CBE5F8;
  while ( remaining_count )
  {
    ((void (           *)(unsigned int *))DeleteCriticalSection)(&dword_140404A6C[10 * --remaining_count + 19064537]);
    --g_144CBE5F8;
  }
  return 1;
}

// 14026E240: invalid function type 'void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA5C) ----------------------------------------------------
__int64            sub_1401FDA5C(int a1)
{
  return ((__int64 (           *)(unsigned int *))LeaveCriticalSection)(&dword_140404A6C[10 * a1 + 19064537]);
}

// 14026E248: invalid function type 'void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)' has been ignored

//----- (00000001401FDA90) ----------------------------------------------------
void sub_1401FDA90()
{
  ;
}

//----- (00000001401FDAC0) ----------------------------------------------------
void _NLG_Return2_sr()
{
  ;
}

//----- (00000001401FDACC) ----------------------------------------------------
__int64 (           *           sub_1401FDACC(__int64 a1))()
{
  __int64 (           *result)();
  unsigned __int64 loaded_word;

  result = _guard_check_icall_fptr[0];
  if ( (void (*)())_guard_check_icall_fptr[0] != guard_check_icall_nop )
  {
    result = (__int64 (           *)())__readgsqword(0x30u);
    loaded_word = *(_QWORD *)(a1 + 152);
    if ( loaded_word < *((_QWORD *)result + 2) || loaded_word > *((_QWORD *)result + 1) )
      __fastfail(0xDu);
  }
  return result;
}

//----- (00000001401FDB44) ----------------------------------------------------
__int64 (           *           sub_1401FDB44(_QWORD *a1, __int64 (           *a2)(_QWORD *)))()
{
  __int64 (           *result)();
  unsigned __int64 readgsqword_result;

  result = _guard_check_icall_fptr[0];
  if ( (void (*)())_guard_check_icall_fptr[0] != guard_check_icall_nop )
  {
    readgsqword_result = __readgsqword(0x30u);
    result = (__int64 (           *)())a2(a1);
    if ( (unsigned __int64)result < *(_QWORD *)(readgsqword_result + 16) || (unsigned __int64)result > *(_QWORD *)(readgsqword_result + 8) )
      __fastfail(0xDu);
    if ( !*a1 )
      __fastfail(0xDu);
  }
  return result;
}

//----- (00000001401FDBA0) ----------------------------------------------------
__int64            sub_1401FDBA0(__int64 a1, char *a2)
{
  char *text_cursor;
  int iteration_count;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    text_cursor = a2;
    iteration_count = 0;
    if ( *a2 )
    {
      do
      {
        ++text_cursor;
        ++iteration_count;
      }
      while ( *text_cursor );
      if ( iteration_count )
        sub_1401FDF84(a1, a2, iteration_count);
    }
  }
  return a1;
}

//----- (00000001401FDBF8) ----------------------------------------------------
__int64            sub_1401FDBF8(__int64 a1, char *a2)
{
  char *text_cursor;
  signed int iteration_count;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    text_cursor = a2;
    iteration_count = 0;
    if ( *a2 )
    {
      do
      {
        ++text_cursor;
        ++iteration_count;
      }
      while ( *text_cursor );
      if ( iteration_count )
        sub_1401FE028(a1, a2, iteration_count);
    }
  }
  return a1;
}

//----- (00000001401FDC38) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FDC38(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 heap_manager_get_memory_result;
  _BYTE *buffer_cursor;
  __int64 integer_difference;
  __int64 remaining_count;

  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284718);
  heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, (int)a3);
  *(_QWORD *)(a1 + 8) = heap_manager_get_memory_result;
  buffer_cursor = (_BYTE *)heap_manager_get_memory_result;
  *(_DWORD *)(a1 + 16) = a3;
  if ( heap_manager_get_memory_result )
  {
    if ( a3 )
    {
      integer_difference = a2 - heap_manager_get_memory_result;
      remaining_count = a3;
      do
      {
        *buffer_cursor = buffer_cursor[integer_difference];
        ++buffer_cursor;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}

//----- (00000001401FDCAC) ----------------------------------------------------
__int64            sub_1401FDCAC(__int64 a1, char *a2)
{
  char *text_cursor;
  signed int iteration_count;

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    text_cursor = a2;
    iteration_count = 0;
    if ( *a2 )
    {
      do
      {
        ++text_cursor;
        ++iteration_count;
      }
      while ( *text_cursor );
      if ( iteration_count )
        sub_1401FE0C0(a1, a2, iteration_count);
    }
  }
  return a1;
}

//----- (00000001401FDCEC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FDCEC(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 heap_manager_get_memory_result;
  _BYTE *buffer_cursor;
  __int64 integer_difference;
  __int64 remaining_count;

  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140284718);
  heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, (int)a3);
  *(_QWORD *)(a1 + 8) = heap_manager_get_memory_result;
  buffer_cursor = (_BYTE *)heap_manager_get_memory_result;
  *(_DWORD *)(a1 + 16) = a3;
  if ( heap_manager_get_memory_result )
  {
    if ( a3 )
    {
      integer_difference = a2 - heap_manager_get_memory_result;
      remaining_count = a3;
      do
      {
        *buffer_cursor = buffer_cursor[integer_difference];
        ++buffer_cursor;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  return a1;
}

//----- (00000001401FDD90) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDD90(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( heap_manager_get_memory_result )
    {
      loaded_word = *a1;
      *(_DWORD *)(heap_manager_get_memory_result + 24) = -1;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(heap_manager_get_memory_result + 8) = loaded_word;
      *(_QWORD *)(heap_manager_get_memory_result + 16) = a2;
      *a1 = heap_manager_get_memory_result;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDDF4) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDDF4(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( heap_manager_get_memory_result )
    {
      loaded_word = *a1;
      *(_DWORD *)(heap_manager_get_memory_result + 24) = -1;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(heap_manager_get_memory_result + 8) = loaded_word;
      *(_QWORD *)(heap_manager_get_memory_result + 16) = a2;
      *a1 = heap_manager_get_memory_result;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDE58) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDE58(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( heap_manager_get_memory_result )
    {
      loaded_word = *a1;
      *(_DWORD *)(heap_manager_get_memory_result + 24) = -1;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(heap_manager_get_memory_result + 8) = loaded_word;
      *(_QWORD *)(heap_manager_get_memory_result + 16) = a2;
      *a1 = heap_manager_get_memory_result;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDEBC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDEBC(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( heap_manager_get_memory_result )
    {
      loaded_word = *a1;
      *(_DWORD *)(heap_manager_get_memory_result + 24) = -1;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(heap_manager_get_memory_result + 8) = loaded_word;
      *(_QWORD *)(heap_manager_get_memory_result + 16) = a2;
      *a1 = heap_manager_get_memory_result;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDF20) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
void            sub_1401FDF20(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 32);
    if ( heap_manager_get_memory_result )
    {
      loaded_word = *a1;
      *(_DWORD *)(heap_manager_get_memory_result + 24) = -1;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284790);
      *(_QWORD *)(heap_manager_get_memory_result + 8) = loaded_word;
      *(_QWORD *)(heap_manager_get_memory_result + 16) = a2;
      *a1 = heap_manager_get_memory_result;
    }
    else
    {
      *a1 = 0;
      *((_BYTE *)a1 + 8) = 3;
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = 3;
  }
}

//----- (00000001401FDF84) ----------------------------------------------------
void            sub_1401FDF84(__int64 a1, char *a2, int a3)
{
  unsigned __int64 heap_manager_get_memory_result;
  char input_byte;

  if ( a2 && a3 > 0 )
  {
    if ( a3 == 1 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( heap_manager_get_memory_result )
      {
        input_byte = *a2;
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
        *(_BYTE *)(heap_manager_get_memory_result + 8) = input_byte;
        goto LABEL_8;
      }
    }
    else
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
      if ( heap_manager_get_memory_result )
      {
        *(_QWORD *)(heap_manager_get_memory_result + 8) = (uint64)(uintptr_t)(a2);
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284718);
        *(_DWORD *)(heap_manager_get_memory_result + 16) = a3;
LABEL_8:
        *(_QWORD *)a1 = heap_manager_get_memory_result;
        return;
      }
    }
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 3;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 2;
  }
}

//----- (00000001401FE028) ----------------------------------------------------
void            sub_1401FE028(__int64 a1, char *a2, signed int a3)
{
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 heap_manager_get_memory_result_2;
  char input_byte;

  if ( !a2 || a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( heap_manager_get_memory_result_2 )
    {
      input_byte = *a2;
      *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
      *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = input_byte;
      goto LABEL_9;
    }
  }
  else
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
    if ( heap_manager_get_memory_result )
    {
      heap_manager_get_memory_result_2 = sub_1401FDC38(heap_manager_get_memory_result, (__int64)a2, a3);
      goto LABEL_9;
    }
  }
  heap_manager_get_memory_result_2 = 0;
LABEL_9:
  *(_QWORD *)a1 = heap_manager_get_memory_result_2;
  if ( !heap_manager_get_memory_result_2 )
    *(_BYTE *)(a1 + 8) = 3;
}

//----- (00000001401FE0C0) ----------------------------------------------------
void            sub_1401FE0C0(__int64 a1, char *a2, signed int a3)
{
  unsigned __int64 heap_manager_get_memory_result;
  unsigned __int64 heap_manager_get_memory_result_2;
  char input_byte;

  if ( !a2 || a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) = 2;
    return;
  }
  if ( a3 == 1 )
  {
    heap_manager_get_memory_result_2 = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( heap_manager_get_memory_result_2 )
    {
      input_byte = *a2;
      *(_QWORD *)heap_manager_get_memory_result_2 = (uint64)(uintptr_t)(off_1402846F0);
      *(_BYTE *)(heap_manager_get_memory_result_2 + 8) = input_byte;
      goto LABEL_9;
    }
  }
  else
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
    if ( heap_manager_get_memory_result )
    {
      heap_manager_get_memory_result_2 = sub_1401FDCEC(heap_manager_get_memory_result, (__int64)a2, a3);
      goto LABEL_9;
    }
  }
  heap_manager_get_memory_result_2 = 0;
LABEL_9:
  *(_QWORD *)a1 = heap_manager_get_memory_result_2;
  if ( !heap_manager_get_memory_result_2 )
    *(_BYTE *)(a1 + 8) = 3;
}

//----- (00000001401FE158) ----------------------------------------------------
__int64            sub_1401FE158(__int64 a1)
{
  return a1;
}

//----- (00000001401FE198) ----------------------------------------------------
DName *           sub_1401FE198(DName *this, char **a2, char a3)
{
  char *input_byte;
  unsigned __int8 loaded_word;
  int iteration_count;
  unsigned __int8 *buffer_cursor;
  char scaled_index;

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  input_byte = *a2;
  loaded_word = *input_byte;
  if ( *input_byte )
  {
    iteration_count = 0;
    buffer_cursor = (unsigned __int8 *)input_byte;
    do
    {
      if ( loaded_word == a3 )
        break;
      if ( !byte_1402847B0[loaded_word] && (g_144CBE628 & 0x10000) == 0 )
      {
        *((_BYTE *)this + 8) = 2;
        return this;
      }
      ++iteration_count;
      *a2 = (char *)++buffer_cursor;
      loaded_word = *buffer_cursor;
    }
    while ( *buffer_cursor );
    sub_1401FDF84((__int64)this, input_byte, iteration_count);
    scaled_index = **a2;
    if ( scaled_index )
    {
      ++*a2;
      if ( scaled_index != a3 )
      {
        *(_QWORD *)this = 0;
        *((_BYTE *)this + 8) = 3;
      }
    }
    else if ( !*((_BYTE *)this + 8) )
    {
      *((_BYTE *)this + 8) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
  }
  return this;
}

//----- (00000001401FE248) ----------------------------------------------------
DName *           sub_1401FE248(DName *this,      struct StringLiteral *a2)
{
  int loaded_word;

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  loaded_word = *((_DWORD *)a2 + 2);
  if ( loaded_word > 0 )
    sub_1401FDF84((__int64)this, *(char **)a2, loaded_word);
  return this;
}

//----- (00000001401FE284) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FE284(__int64 a1, char a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FFB98((sr_anon_89 *)a1, a2);
  return a1;
}

//----- (00000001401FE2A4) ----------------------------------------------------
DName *           sub_1401FE2A4(DName *this, struct DName *a2)
{
  char comparison_result;
  struct DName *input_cursor;
  _QWORD *heap_manager_get_memory_result;

  comparison_result = 0;
  input_cursor = a2;
  *((_DWORD *)this + 2) = 0;
  if ( a2 )
  {
    heap_manager_get_memory_result = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( heap_manager_get_memory_result )
    {
      *heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284740);
      if ( (unsigned __int8)(*((_BYTE *)input_cursor + 8) - 2) <= 1u )
        input_cursor = nullptr;
      heap_manager_get_memory_result[1] = (uint64)(uintptr_t)(input_cursor);
    }
    else
    {
      heap_manager_get_memory_result = nullptr;
    }
    comparison_result = heap_manager_get_memory_result == nullptr ? 3 : 0;
  }
  else
  {
    heap_manager_get_memory_result = nullptr;
  }
  *(_QWORD *)this = (uint64)(uintptr_t)(heap_manager_get_memory_result);
  *((_BYTE *)this + 8) = comparison_result;
  return this;
}

//----- (00000001401FE364) ----------------------------------------------------
__int64            sub_1401FE364(DName *this, __int64 a2)
{
  char *text_cursor;
  unsigned __int64 abs64_result;
  int unrecovered_register_value;
  __int64 unused_local;
  char selection_flag;
  __int64 unused_local_2;

  text_cursor = &selection_flag;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  selection_flag = 0;
  abs64_result = abs64(a2);
  do
  {
    *--text_cursor = abs64_result % 0xA + 48;
    abs64_result /= 0xAu;
  }
  while ( abs64_result );
  if ( a2 < 0 )
    *--text_cursor = 45;
  sub_1401FE028((__int64)this, text_cursor, unrecovered_register_value + 53 - (_DWORD)text_cursor);
  return (__int64)this; /* mov rax, rbx (rbx = this) */
}

//----- (00000001401FE40C) ----------------------------------------------------
__int64            sub_1401FE40C(DName *this, unsigned __int64 a2)
{
  char *text_cursor;
  int unrecovered_register_value;
  __int64 unused_local;
  char selection_flag;
  __int64 unused_local_2;

  text_cursor = &selection_flag;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  selection_flag = 0;
  do
  {
    *--text_cursor = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  sub_1401FE028((__int64)this, text_cursor, unrecovered_register_value + 52 - (_DWORD)text_cursor);
  return (__int64)this; /* mov rax, rbx (rbx = this) */
}

//----- (00000001401FE568) ----------------------------------------------------
unsigned __int64            sub_1401FE568(__int64 a1, struct _HeapManager *a2, int a3)
{
  if ( a3 )
    return (*(unsigned __int64 (           **)(unsigned __int64, struct _HeapManager *))(unsigned int *)&g_144CBE640)(
             (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
             a2);
  else
    return crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, a1);
}

//----- (00000001401FE594) ----------------------------------------------------
__int64            sub_1401FE594(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
  return a1;
}

//----- (00000001401FE5CC) ----------------------------------------------------
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64            sub_1401FE5CC(__int64 a1, char a2)
{
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1401FFB98((sr_anon_89 *)a1, a2);
  return a1;
}

//----- (00000001401FE5EC) ----------------------------------------------------
__int64            sub_1401FE5EC(__int64 a1, __int64 a2)
{
  __int64 input_value;
  _QWORD *heap_manager_get_memory_result;

  input_value = a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    heap_manager_get_memory_result = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( heap_manager_get_memory_result )
    {
      *heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284740);
      if ( (unsigned __int8)(*(_BYTE *)(input_value + 8) - 2) <= 1u )
        input_value = 0;
      heap_manager_get_memory_result[1] = input_value;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(heap_manager_get_memory_result);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 3;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 3;
  }
  return a1;
}

//----- (00000001401FE684) ----------------------------------------------------
__int64            sub_1401FE684(signed int *a1, __int64 a2, unsigned int a3)
{
  __int64 masked_bits;

  if ( a3 > 9 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 3;
    goto LABEL_7;
  }
  if ( *a1 == -1 || (int)a3 > *a1 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 8) = 2;
LABEL_7:
    *(_QWORD *)a2 = 0;
    return a2;
  }
  masked_bits = *(_QWORD *)&a1[2 * a3 + 2];
  *(_QWORD *)a2 = *(_QWORD *)masked_bits;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(masked_bits + 8);
  return a2;
}

//----- (00000001401FE6CC) ----------------------------------------------------
__int64            sub_1401FE6CC(__int64 a1,      struct StringLiteral *a2, __int64 a3)
{
  DName *returned_pointer;
  _BYTE scratch_buffer[24];

  returned_pointer = sub_1401FE248((DName *)scratch_buffer, a2);
  sub_1401FE7C0((__int64)returned_pointer, a1, a3);
  return a1;
}

//----- (00000001401FE704) ----------------------------------------------------
__int64            sub_1401FE704(__int64 a1, char a2, __int64 a3)
{
  __int64 selection_flag;
  int unused_written_slot;

  selection_flag = 0;
  unused_written_slot = 0;
  sub_1401FFB98((sr_anon_89 *)&selection_flag, a2);
  sub_1401FE7C0((__int64)&selection_flag, a1, a3);
  return a1;
}

//----- (00000001401FE748) ----------------------------------------------------
__int64            sub_1401FE748(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 input_value;
  _UNKNOWN ***state_address;
  _UNKNOWN ***saved_state_address;
  int unused_written_slot;

  input_value = a2;
  if ( (unsigned int)(a2 - 2) > 1 )
    input_value = 0;
  unused_written_slot = input_value;
  state_address = &off_1402848D0;
  if ( a2 != 1 )
    state_address = nullptr;
  saved_state_address = state_address;
  sub_1401FE7C0((__int64)&saved_state_address, a1, a3);
  return a1;
}

//----- (00000001401FE794) ----------------------------------------------------
__int64            sub_1401FE794(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE888(a2, a3);
  return a2;
}

//----- (00000001401FE7C0) ----------------------------------------------------
__int64            sub_1401FE7C0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE908(a2, a3);
  return a2;
}

//----- (00000001401FE7EC) ----------------------------------------------------
__int64            sub_1401FE7EC(__int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FE9BC(a2, a3);
  return a2;
}

//----- (00000001401FE818) ----------------------------------------------------
__int64            sub_1401FE818(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEA28(a2, a3);
  return a2;
}

//----- (00000001401FE844) ----------------------------------------------------
__int64            sub_1401FE844(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEABC(a2, a3);
  return a2;
}

//----- (00000001401FE888) ----------------------------------------------------
__int64            sub_1401FE888(__int64 a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  char *input_byte;
  int loaded_word;

  if ( *(char *)(a1 + 8) <= 1 && *(int *)(a2 + 8) > 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 24);
      if ( heap_manager_get_memory_result )
      {
        input_byte = *(char **)a2;
        loaded_word = *(_DWORD *)(a2 + 8);
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284718);
        *(_QWORD *)(heap_manager_get_memory_result + 8) = (uint64)(uintptr_t)(input_byte);
        *(_DWORD *)(heap_manager_get_memory_result + 16) = loaded_word;
      }
      sub_1401FDF20((unsigned __int64 *)a1, heap_manager_get_memory_result);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FDF84(a1, *(char **)a2, *(_DWORD *)(a2 + 8));
    }
  }
  return a1;
}

//----- (00000001401FE908) ----------------------------------------------------
__int64            sub_1401FE908(__int64 a1, __int64 a2)
{
  __int64 loaded_word;
  __int64 loaded_word_2;
  char *state_address;

  if ( *(char *)(a1 + 8) > 1 )
    return a1;
  loaded_word = *(_QWORD *)a2;
  if ( !*(_QWORD *)a1 )
  {
    if ( loaded_word )
    {
      *(_QWORD *)a1 = loaded_word;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      return a1;
    }
    loaded_word_2 = *(char *)(a2 + 8);
    goto LABEL_5;
  }
  if ( loaded_word )
  {
    sub_1401FDD90((unsigned __int64 *)a1, loaded_word);
    return a1;
  }
  loaded_word_2 = *(char *)(a2 + 8);
  if ( (_BYTE)loaded_word_2 )
  {
    if ( (unsigned __int8)(loaded_word_2 - 2) <= 1u )
    {
LABEL_5:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = loaded_word_2;
      if ( (_BYTE)loaded_word_2 == 1 )
      {
        *(_QWORD *)a1 = (uint64)(uintptr_t)((char *)&off_1402848C0 + 16 * loaded_word_2);
        if ( !(_UNKNOWN *)((char *)&off_1402848C0 + 16 * loaded_word_2) )
          *(_BYTE *)(a1 + 8) = 3;
      }
      else
      {
        *(_QWORD *)a1 = 0;
      }
      return a1;
    }
    if ( (unsigned __int8)loaded_word_2 > 3u )
      state_address = (char *)&off_1402848F0;
    else
      state_address = (char *)&off_1402848C0 + 16 * loaded_word_2;
    sub_1401FDDF4((unsigned __int64 *)a1, (__int64)state_address);
  }
  return a1;
}

//----- (00000001401FE9BC) ----------------------------------------------------
__int64            sub_1401FE9BC(__int64 a1, char a2)
{
  unsigned __int64 heap_manager_get_memory_result;

  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( heap_manager_get_memory_result )
      {
        *(_BYTE *)(heap_manager_get_memory_result + 8) = a2;
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
      }
      sub_1401FDE58((unsigned __int64 *)a1, heap_manager_get_memory_result);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((sr_anon_89 *)a1, a2);
    }
  }
  return a1;
}

//----- (00000001401FEA28) ----------------------------------------------------
__int64            sub_1401FEA28(__int64 a1, __int64 a2)
{
  __int64 input_value;
  _QWORD *heap_manager_get_memory_result;

  input_value = a2;
  if ( *(char *)(a1 + 8) <= 1 && a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( *(_BYTE *)(a2 + 8) <= 1u )
      {
        heap_manager_get_memory_result = (_QWORD *)crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
        if ( heap_manager_get_memory_result )
        {
          *heap_manager_get_memory_result = (uint64)(uintptr_t)(&off_140284740);
          if ( (unsigned __int8)(*(_BYTE *)(input_value + 8) - 2) <= 1u )
            input_value = 0;
          heap_manager_get_memory_result[1] = input_value;
        }
        else
        {
          heap_manager_get_memory_result = nullptr;
        }
        sub_1401FDEBC((unsigned __int64 *)a1, (__int64)heap_manager_get_memory_result);
      }
      else
      {
        sub_1401FEABC(a1, *(char *)(a2 + 8));
      }
    }
    else
    {
      sub_1401FE5EC(a1, a2);
    }
  }
  return a1;
}

//----- (00000001401FEABC) ----------------------------------------------------
__int64            sub_1401FEABC(__int64 a1, unsigned int a2)
{
  char *state_address;
  _UNKNOWN ***state_address_2;

  if ( *(char *)(a1 + 8) <= 1 )
  {
    if ( *(_QWORD *)a1 && a2 - 2 > 1 )
    {
      if ( a2 )
      {
        if ( a2 > 3 )
          state_address = (char *)&off_1402848F0;
        else
          state_address = (char *)&off_1402848C0 + 16 * (int)a2;
        sub_1401FDDF4((unsigned __int64 *)a1, (__int64)state_address);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      state_address_2 = &off_1402848D0;
      *(_BYTE *)(a1 + 8) = a2;
      if ( a2 != 1 )
        state_address_2 = nullptr;
      *(_QWORD *)a1 = (uint64)(uintptr_t)(state_address_2);
    }
  }
  return a1;
}

//----- (00000001401FEB28) ----------------------------------------------------
int *           sub_1401FEB28(int *a1, __int64 a2)
{
  unsigned __int64 heap_manager_get_memory_result;
  __int64 loaded_word;

  if ( *a1 != 9 )
  {
    if ( *(_QWORD *)a2 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( heap_manager_get_memory_result )
      {
        *(_QWORD *)heap_manager_get_memory_result = *(_QWORD *)a2;
        *(_DWORD *)(heap_manager_get_memory_result + 8) = *(_DWORD *)(a2 + 8);
        loaded_word = *a1;
        *a1 = loaded_word + 1;
        *(_QWORD *)&a1[2 * loaded_word + 4] = heap_manager_get_memory_result;
      }
    }
  }
  return a1;
}

//----- (00000001401FEBB8) ----------------------------------------------------
void            sub_1401FEBB8(_HeapManager *this)
{
  __int64 loaded_word;

  if ( *((_QWORD *)this + 1) )
  {
    loaded_word = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = loaded_word;
    while ( loaded_word )
    {
      *((_QWORD *)this + 2) = **((_QWORD **)this + 3);
      (*((void (**)(void))this + 1))();
      loaded_word = *((_QWORD *)this + 2);
      *((_QWORD *)this + 3) = loaded_word;
    }
  }
}

//----- (00000001401FEC0C) ----------------------------------------------------
_OWORD *           sub_1401FEC0C(_OWORD *a1, int a2)
{
  __int128 masked_bits;
  __int128 packed_vector;

  if ( (g_144CBE628 & 1) != 0 )
  {
    *(_QWORD *)&packed_vector = (uint64)(uintptr_t)((char *)*(&off_1402834A0 + 2 * a2) + 2);
    DWORD2(packed_vector) = *((_DWORD *)&off_1402834A0 + 4 * a2 + 2) - 2;
    masked_bits = packed_vector;
  }
  else
  {
    masked_bits = *((_OWORD *)&off_1402834A0 + a2);
  }
  *a1 = masked_bits;
  return a1;
}

//----- (00000001401FEC58) ----------------------------------------------------
__int64            sub_1401FEC58(__int64 a1, __int64 *a2)
{
  unsigned int dword2_result;
  int call_result;
  unsigned int saved_dword2_result;
  int masked_bits;
  int masked_bits_2;
  int selection_code;
  int masked_bits_3;
  int masked_bits_4;
  __int64 masked_bits_5;
  __int64 saved_masked_bits;
  __int64 masked_bits_6;
  __int64 masked_bits_7;
  __int64 masked_bits_8;
  __int64 masked_bits_9;
  __int64 masked_bits_10;
  __int64 masked_bits_11;
  int masked_bits_12;
  int dword2_result_2;
  __int64 masked_bits_13;
  __int64 masked_bits_14;
  __int64 loaded_word;
  __int64 masked_bits_15;
  struct DName *saved_heap_manager_get_memory_result;
  DName *returned_pointer;
  __int64 cached_returned_pointer;
  int masked_bits_16;
  DName *returned_pointer_2;
  __int64 masked_bits_17;
  __int64 masked_bits_18;
  __int64 call_result_2;
  __int64 masked_bits_19;
  _BYTE *byte_cursor;
  __int128 *state_address;
  unsigned __int64 heap_manager_get_memory_result;
  DName *packed_word_bits;
  __int64 loaded_word_2;
  DName *returned_pointer_3;
  __int64 call_result_3;
  __int64 masked_bits_20;
  unsigned int saved_masked_bits_2;
  DName *returned_pointer_4;
  __int64 cached_returned_pointer_2;
  __int64 masked_bits_21;
  __int64 call_result_4;
  __int64 call_result_5;
  DName *returned_pointer_5;
  __int64 call_result_6;
  __int64 call_result_7;
  __int64 call_result_8;
  unsigned int dword2_result_3;
  __int64 masked_bits_22;
  __int64 masked_bits_23;
  BOOL saved_dword2_result_2;
  int masked_bits_24;
  int masked_bits_25;
       char *literal_text;
  int masked_bits_26;
  __int64 loaded_word_3;
  BOOL comparison_result;
  BOOL comparison_result_2;
  int masked_bits_27;
  DName *returned_pointer_6;
  DName *returned_pointer_7;
  int masked_bits_28;
       char *literal_text_2;
  BOOL comparison_result_3;
  BOOL comparison_result_4;
  DName *returned_pointer_8;
  DName *returned_pointer_9;
  DName *returned_pointer_10;
  __int128 packed_vector;
  __int64 loaded_word_4;
  unsigned int dword2_result_4;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];
  __int64 callee_output_word;
  int unused_written_slot;
  __int64 saved_loaded_word;
  int selection_flag;
  unsigned int saved_packed_word_bits;
  int saved_masked_bits_3;
  unsigned int masked_bits_29;
  __int64 callee_output_word_2;
  int unused_written_slot_2;
  __int64 callee_output_word_3;
  int unused_written_slot_3;
  __int64 callee_output_word_4;
  int unused_written_slot_4;
  __int64 callee_output_word_5;
  int unused_written_slot_5;
  _BYTE scratch_buffer_2[16];
  char scratch_buffer_3[16];
  char scratch_buffer_4[16];
  char scratch_buffer_5[64];
  unsigned int saved_dword2_result_3;
  BOOL comparison_result_5;
  BOOL comparison_result_6;

  dword2_result = 0;
  loaded_word_4 = 0;
  masked_bits_29 = *(unsigned int *)&crt_undname_cursor - *(unsigned int *)&g_144CBE620;
  dword2_result_4 = 0;
  call_result = sub_140204E8C();
  comparison_result_6 = *a2 && (a2[1] & 0x200) != 0;
  if ( call_result != 0xFFFF )
  {
    if ( call_result == 65534 )
    {
      DWORD2(packed_vector_2) = 0;
      *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)(&off_1402848D0);
      sub_1401FE7C0((__int64)&packed_vector_2, a1, (__int64)a2);
      return a1;
    }
    if ( call_result == 65533 )
    {
      *(_QWORD *)a1 = *a2;
      saved_dword2_result = *((_DWORD *)a2 + 2);
LABEL_157:
      *(_DWORD *)(a1 + 8) = saved_dword2_result;
      return a1;
    }
    masked_bits = call_result & 0x8000;
    if ( (call_result & 0x8000) != 0 )
    {
      masked_bits_2 = call_result & 0x1800;
      selection_code = 4096;
      comparison_result_5 = masked_bits_2 == 2048;
      if ( masked_bits_2 == 2048 )
        selection_code = 1024;
      masked_bits_3 = call_result & selection_code;
      saved_masked_bits_3 = masked_bits_3;
      if ( !masked_bits_3 || (masked_bits_4 = call_result & 0x1B00, ((masked_bits_4 - 4096) & 0xFFFFFCFF) != 0) || masked_bits_4 == 4864 )
      {
        if ( (call_result & 0x4000) != 0 )
        {
          if ( ((g_144CBE628 | (g_144CBE628 >> 2)) & 2) == 0 )
          {
            masked_bits_5 = sub_140200244((__int64)&packed_vector);
            callee_output_word = 0;
            unused_written_slot = 0;
            saved_masked_bits = masked_bits_5;
            sub_1401FFB98((sr_anon_89 *)&callee_output_word, 32);
            sub_1401FE7C0((__int64)&callee_output_word, (__int64)&packed_vector_2, saved_masked_bits);
            dword2_result = DWORD2(packed_vector_2);
            loaded_word_4 = packed_vector_2;
LABEL_22:
            dword2_result_4 = dword2_result;
            goto LABEL_23;
          }
          masked_bits_6 = sub_140200244((__int64)&packed_vector);
          if ( *(char *)(masked_bits_6 + 8) > 1 )
          {
            dword2_result = *(unsigned __int8 *)(masked_bits_6 + 8);
            goto LABEL_22;
          }
        }
LABEL_23:
        if ( masked_bits_3 && masked_bits_2 == 6144 )
        {
          masked_bits_7 = sub_1401FE7EC((__int64)a2, (__int64)&packed_vector_2, 123);
          sub_1402017C8((__int64)&packed_vector, 0);
          masked_bits_8 = sub_1401FE7C0(masked_bits_7, (__int64)&callee_output_word, (__int64)&packed_vector);
          sub_1401FE908((__int64)&loaded_word_4, masked_bits_8);
          sub_140205354((DName *)&packed_vector);
          if ( (g_144CBE628 & 0x1000) == 0 )
          {
            callee_output_word = 0;
            unused_written_slot = 0;
            *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("}' ");
            DWORD2(packed_vector_2) = 3;
            sub_1401FFB98((sr_anon_89 *)&callee_output_word, 44);
            sub_1401FE7C0((__int64)&callee_output_word, (__int64)&callee_output_word_3, (__int64)&packed_vector);
            masked_bits_9 = sub_1401FE794((__int64)&callee_output_word_3, (__int64)&callee_output_word_4, (__int64)&packed_vector_2);
            sub_1401FE908((__int64)&loaded_word_4, masked_bits_9);
          }
          DWORD2(packed_vector_2) = 2;
          *(_QWORD *)&packed_vector_2 = (uint64)(uintptr_t)("}'");
          packed_vector = packed_vector_2;
          sub_1401FE888((__int64)&loaded_word_4, (__int64)&packed_vector);
          sub_1402009BC((__int64)&packed_vector);
          if ( (~(g_144CBE628 >> 1) & 1) != 0
            && (~(g_144CBE628 >> 4) & 1) != 0
            && (g_144CBE628 & 0x1000) == 0 )
          {
            callee_output_word = 0;
            unused_written_slot = 0;
            sub_1401FFB98((sr_anon_89 *)&callee_output_word, 32);
            sub_1401FE7C0((__int64)&callee_output_word, (__int64)&packed_vector_2, (__int64)&packed_vector);
            masked_bits_10 = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)&callee_output_word_3, 32);
            masked_bits_11 = sub_1401FE7C0(masked_bits_10, (__int64)&callee_output_word_4, (__int64)&loaded_word_4);
            dword2_result = (call_result & 0x6000) == 0;
LABEL_120:
            loaded_word_3 = *(_QWORD *)masked_bits_11;
            dword2_result_3 = *(_DWORD *)(masked_bits_11 + 8);
            loaded_word_4 = loaded_word_3;
            goto LABEL_121;
          }
LABEL_31:
          dword2_result = (call_result & 0x6000) == 0;
          goto LABEL_122;
        }
        callee_output_word_4 = 0;
        unused_written_slot_4 = 0;
        callee_output_word_3 = 0;
        unused_written_slot_3 = 0;
        callee_output_word_2 = 0;
        unused_written_slot_2 = 0;
        callee_output_word = 0;
        unused_written_slot = 0;
        callee_output_word_5 = 0;
        unused_written_slot_5 = 0;
        if ( !masked_bits_3 )
        {
LABEL_39:
          if ( masked_bits_2 != 2048 || (call_result & 0x700) == 0x200 )
            goto LABEL_46;
          *(_QWORD *)&packed_vector_2 = 0;
          DWORD2(packed_vector_2) = 0;
          if ( (g_144CBE628 & 0x60) == 0x60 )
          {
            *(_QWORD *)&packed_vector = 0;
            DWORD2(packed_vector) = 0;
            sub_140200AFC((__int64)&saved_loaded_word, (__int64)&packed_vector_2, 0, &packed_vector, 1);
            if ( (char)selection_flag <= 1 )
              goto LABEL_46;
            dword2_result_2 = (unsigned __int8)selection_flag;
          }
          else
          {
            saved_loaded_word = 0;
            selection_flag = 0;
            sub_140200AFC((__int64)&packed_vector, (__int64)&saved_loaded_word, 0, &packed_vector_2, 1);
            callee_output_word_5 = packed_vector;
            dword2_result_2 = DWORD2(packed_vector);
          }
          unused_written_slot_5 = dword2_result_2;
LABEL_46:
          if ( (~(g_144CBE628 >> 1) & 1) == 0 || (g_144CBE628 & 0x10) != 0 )
          {
            masked_bits_15 = sub_1402009BC((__int64)&packed_vector);
            loaded_word = loaded_word_4;
            if ( (_BYTE)dword2_result_4 != 3 && *(char *)(masked_bits_15 + 8) > 1 )
              dword2_result_4 = *(unsigned __int8 *)(masked_bits_15 + 8) | dword2_result & 0xFFFFFF00;
          }
          else
          {
            masked_bits_13 = sub_1402009BC((__int64)&packed_vector);
            masked_bits_14 = sub_1401FE7C0(masked_bits_13, (__int64)&packed_vector_2, (__int64)&loaded_word_4);
            loaded_word = *(_QWORD *)masked_bits_14;
            LODWORD(masked_bits_14) = *(_DWORD *)(masked_bits_14 + 8);
            loaded_word_4 = loaded_word;
            dword2_result_4 = masked_bits_14;
          }
          if ( *a2 )
          {
            if ( !loaded_word || (g_144CBE628 & 0x1000) != 0 )
            {
              loaded_word_4 = *a2;
              dword2_result_4 = *((_DWORD *)a2 + 2);
            }
            else
            {
              saved_loaded_word = 0;
              selection_flag = 0;
              sub_1401FFB98((sr_anon_89 *)&saved_loaded_word, 32);
              sub_1401FE7C0((__int64)&saved_loaded_word, (__int64)&packed_vector, (__int64)a2);
              sub_1401FE908((__int64)&loaded_word_4, (__int64)&packed_vector);
            }
          }
          saved_heap_manager_get_memory_result = nullptr;
          saved_loaded_word = 0;
          saved_packed_word_bits = 0;
          if ( !comparison_result_6 )
          {
            heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
            saved_heap_manager_get_memory_result = (struct DName *)heap_manager_get_memory_result;
            if ( heap_manager_get_memory_result )
            {
              *(_QWORD *)heap_manager_get_memory_result = 0;
              *(_DWORD *)(heap_manager_get_memory_result + 8) = 0;
            }
            else
            {
              saved_heap_manager_get_memory_result = nullptr;
            }
            packed_word_bits = sub_1402038F8((DName *)scratch_buffer_3, saved_heap_manager_get_memory_result);
            loaded_word_2 = *(_QWORD *)packed_word_bits;
            LODWORD(packed_word_bits) = *((_DWORD *)packed_word_bits + 2);
            saved_loaded_word = loaded_word_2;
            saved_packed_word_bits = (unsigned int)packed_word_bits;
LABEL_60:
            if ( !saved_masked_bits_3 )
            {
LABEL_73:
              if ( g_144CBE63C == 1 )
              {
                saved_masked_bits_2 = g_144CBE638;
                if ( !g_144CBE638 )
                  saved_masked_bits_2 = masked_bits_29;
                g_144CBE638 = saved_masked_bits_2;
              }
              returned_pointer_4 = sub_1401FFDD8((DName *)scratch_buffer);
              *(_QWORD *)&packed_vector_2 = 0;
              DWORD2(packed_vector_2) = 0;
              cached_returned_pointer_2 = (__int64)returned_pointer_4;
              sub_1401FFB98((sr_anon_89 *)&packed_vector_2, 40);
              sub_1401FE7C0((__int64)&packed_vector_2, (__int64)&packed_vector, cached_returned_pointer_2);
              masked_bits_21 = sub_1401FE7EC((__int64)&packed_vector, (__int64)scratch_buffer_2, 41);
              sub_1401FE908((__int64)&loaded_word_4, masked_bits_21);
              if ( masked_bits_2 == 2048 && (call_result & 0x700) != 0x200 )
                sub_1401FE908((__int64)&loaded_word_4, (__int64)&callee_output_word_5);
              if ( (~(g_144CBE628 >> 19) & 1) != 0 )
              {
                call_result_4 = sub_14020372C((__int64)scratch_buffer);
                sub_1401FE908((__int64)&loaded_word_4, call_result_4);
              }
              else
              {
                call_result_5 = sub_14020372C((__int64)scratch_buffer);
                if ( (_BYTE)dword2_result_4 != 3 && *(char *)(call_result_5 + 8) > 1 )
                  dword2_result_4 = *(unsigned __int8 *)(call_result_5 + 8) | dword2_result_4 & 0xFFFFFF00;
              }
              returned_pointer_5 = sub_140202784((DName *)scratch_buffer);
              sub_1401FE908((__int64)&loaded_word_4, (__int64)returned_pointer_5);
              if ( (~(g_144CBE628 >> 8) & 1) != 0 )
              {
                call_result_6 = sub_140204E68((__int64)scratch_buffer);
                sub_1401FE908((__int64)&loaded_word_4, call_result_6);
              }
              else
              {
                call_result_7 = sub_140204E68((__int64)scratch_buffer);
                if ( (_BYTE)dword2_result_4 != 3 && *(char *)(call_result_7 + 8) > 1 )
                  dword2_result_4 = *(unsigned __int8 *)(call_result_7 + 8) | dword2_result_4 & 0xFFFFFF00;
              }
              call_result_8 = sub_140201914((__int64)scratch_buffer);
              if ( (_BYTE)dword2_result_4 != 3 && *(char *)(call_result_8 + 8) > 1 )
                dword2_result_4 = *(unsigned __int8 *)(call_result_8 + 8) | dword2_result_4 & 0xFFFFFF00;
              if ( (~(g_144CBE628 >> 2) & 1) == 0 || !saved_heap_manager_get_memory_result )
                goto LABEL_31;
              dword2_result = (call_result & 0x6000) == 0;
              *(_QWORD *)saved_heap_manager_get_memory_result = loaded_word_4;
              *((_DWORD *)saved_heap_manager_get_memory_result + 2) = dword2_result_4;
              loaded_word_4 = saved_loaded_word;
              dword2_result_3 = saved_packed_word_bits;
LABEL_121:
              dword2_result_4 = dword2_result_3;
LABEL_122:
              comparison_result = comparison_result_5;
              if ( (call_result & 0x8000) != 0 )
                dword2_result = comparison_result_5;
              saved_dword2_result_3 = dword2_result;
              if ( !dword2_result )
                goto LABEL_151;
              if ( (~(g_144CBE628 >> 9) & 1) != 0 )
              {
                comparison_result_2 = 1;
                masked_bits_27 = call_result & 0x700;
                if ( (call_result & 0x8000) != 0 )
                  comparison_result_2 = masked_bits_27 == 512;
                if ( comparison_result_2 )
                {
                  DWORD2(packed_vector) = 7;
                  *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("static ");
                  returned_pointer_6 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
                  sub_1401FE7C0((__int64)returned_pointer_6, (__int64)&packed_vector, (__int64)&loaded_word_4);
                  loaded_word_4 = packed_vector;
                  dword2_result_4 = DWORD2(packed_vector);
                }
                if ( (call_result & 0x8000) != 0 && masked_bits_27 == 256
                  || (call_result & 0x400) != 0 && ((masked_bits_27 - 1024) & 0xFFFFFCFF) == 0 && masked_bits_27 != 1792 )
                {
                  DWORD2(packed_vector) = 8;
                  *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("virtual ");
                  returned_pointer_7 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
                  sub_1401FE7C0((__int64)returned_pointer_7, (__int64)&packed_vector, (__int64)&loaded_word_4);
                  loaded_word_4 = packed_vector;
                  dword2_result_4 = DWORD2(packed_vector);
                }
                comparison_result = comparison_result_5;
                dword2_result = saved_dword2_result_3;
              }
              if ( (~(g_144CBE628 >> 7) & 1) == 0 )
                goto LABEL_151;
              masked_bits_28 = call_result & 0xC0;
              if ( (call_result & 0x8000) != 0 )
                comparison_result = masked_bits_28 == 64;
              if ( comparison_result )
              {
                literal_text_2 = "private: ";
                DWORD2(packed_vector) = 9;
              }
              else
              {
                comparison_result_3 = masked_bits_2 == 4096;
                if ( (call_result & 0x8000) != 0 )
                  comparison_result_3 = masked_bits_28 == 128;
                if ( comparison_result_3 )
                {
                  literal_text_2 = "protected: ";
                  DWORD2(packed_vector) = 11;
                }
                else
                {
                  comparison_result_4 = masked_bits_2 == 0;
                  if ( (call_result & 0x8000) != 0 )
                    comparison_result_4 = masked_bits_28 == 0;
                  if ( !comparison_result_4 )
                    goto LABEL_151;
                  literal_text_2 = "public: ";
                  DWORD2(packed_vector) = 8;
                }
              }
              *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(literal_text_2);
              returned_pointer_8 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
              sub_1401FE7C0((__int64)returned_pointer_8, (__int64)&packed_vector, (__int64)&loaded_word_4);
              loaded_word_4 = packed_vector;
              dword2_result_4 = DWORD2(packed_vector);
LABEL_151:
              if ( ((dword2_result != 0 ? 1024 : 4096) & call_result) != 0 && (g_144CBE628 & 0x1000) == 0 )
              {
                DWORD2(packed_vector) = 8;
                *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("[thunk]:");
                returned_pointer_9 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
                sub_1401FE7C0((__int64)returned_pointer_9, (__int64)&packed_vector, (__int64)&loaded_word_4);
                loaded_word_4 = packed_vector;
                dword2_result_4 = DWORD2(packed_vector);
              }
              if ( (call_result & 0x10000) != 0 )
              {
                DWORD2(packed_vector) = 11;
                *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("extern \"C\" ");
                returned_pointer_10 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
                sub_1401FE7C0((__int64)returned_pointer_10, (__int64)&packed_vector, (__int64)&loaded_word_4);
                loaded_word_4 = packed_vector;
                dword2_result_4 = DWORD2(packed_vector);
              }
              goto LABEL_156;
            }
            if ( masked_bits_2 == 2048 )
            {
              masked_bits_16 = call_result & 0x700;
              if ( masked_bits_16 == 1536 )
              {
                DWORD2(packed_vector) = 12;
                *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`vtordispex{");
                returned_pointer_2 = sub_1401FE248((DName *)scratch_buffer_3, (     struct StringLiteral *)&packed_vector);
                sub_1401FE7C0((__int64)returned_pointer_2, (__int64)&packed_vector, (__int64)&callee_output_word_4);
                masked_bits_17 = sub_1401FE7EC((__int64)&packed_vector, (__int64)&packed_vector_2, 44);
                masked_bits_18 = sub_1401FE7C0(masked_bits_17, (__int64)scratch_buffer_4, (__int64)&callee_output_word_3);
                call_result_2 = sub_1401FE7EC(masked_bits_18, (__int64)scratch_buffer_5, 44);
                masked_bits_19 = sub_1401FE7C0(call_result_2, (__int64)scratch_buffer_2, (__int64)&callee_output_word_2);
                byte_cursor = scratch_buffer;
                state_address = (__int128 *)masked_bits_19;
LABEL_70:
                call_result_3 = sub_1401FE7EC((__int64)state_address, (__int64)byte_cursor, 44);
                sub_1401FE908((__int64)&loaded_word_4, call_result_3);
LABEL_72:
                DWORD2(packed_vector) = 3;
                *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("}' ");
                masked_bits_20 = sub_1401FE794((__int64)&callee_output_word, (__int64)scratch_buffer, (__int64)&packed_vector);
                sub_1401FE908((__int64)&loaded_word_4, masked_bits_20);
                goto LABEL_73;
              }
              if ( masked_bits_16 == 1280 )
              {
                DWORD2(packed_vector) = 10;
                *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`vtordisp{");
                returned_pointer_3 = sub_1401FE248((DName *)scratch_buffer, (     struct StringLiteral *)&packed_vector);
                sub_1401FE7C0((__int64)returned_pointer_3, (__int64)&packed_vector, (__int64)&callee_output_word_2);
                byte_cursor = scratch_buffer_2;
                state_address = &packed_vector;
                goto LABEL_70;
              }
            }
            DWORD2(packed_vector) = 10;
            *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`adjustor{");
            sub_1401FE888((__int64)&loaded_word_4, (__int64)&packed_vector);
            goto LABEL_72;
          }
          returned_pointer = sub_1402038F8((DName *)scratch_buffer_3, nullptr);
          *(_QWORD *)&packed_vector_2 = 0;
          DWORD2(packed_vector_2) = 0;
          cached_returned_pointer = (__int64)returned_pointer;
          sub_1401FFB98((sr_anon_89 *)&packed_vector_2, 32);
          sub_1401FE7C0((__int64)&packed_vector_2, (__int64)&packed_vector, cached_returned_pointer);
          sub_1401FE908((__int64)&loaded_word_4, (__int64)&packed_vector);
          if ( (g_144CBE628 & 0x1000) == 0 )
            goto LABEL_60;
LABEL_156:
          *(_QWORD *)a1 = loaded_word_4;
          saved_dword2_result = dword2_result_4;
          goto LABEL_157;
        }
        if ( masked_bits_2 == 2048 )
        {
          masked_bits_12 = call_result & 0x700;
          if ( masked_bits_12 == 1536 )
          {
            sub_1402017C8((__int64)&packed_vector_2, 1);
            callee_output_word_4 = packed_vector_2;
            unused_written_slot_4 = DWORD2(packed_vector_2);
            sub_1402017C8((__int64)&packed_vector_2, 1);
            callee_output_word_3 = packed_vector_2;
            unused_written_slot_3 = DWORD2(packed_vector_2);
LABEL_37:
            sub_1402017C8((__int64)&packed_vector_2, 1);
            callee_output_word_2 = packed_vector_2;
            unused_written_slot_2 = DWORD2(packed_vector_2);
            goto LABEL_38;
          }
          if ( masked_bits_12 == 1280 )
            goto LABEL_37;
        }
LABEL_38:
        sub_1402017C8((__int64)&packed_vector_2, 1);
        callee_output_word = packed_vector_2;
        unused_written_slot = DWORD2(packed_vector_2);
        goto LABEL_39;
      }
    }
    sub_1401FE908((__int64)&loaded_word_4, (__int64)a2);
    if ( (call_result & 0x8000) == 0 )
    {
      if ( (((call_result & 0x7C00) - 26624) & 0xFFFFF7FF) == 0 )
      {
        sub_140205608(a1, (__int64)&loaded_word_4);
        return a1;
      }
      if ( (call_result & 0x7C00) == 0x6000 )
      {
        DWORD2(packed_vector) = 2;
        *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("}'");
        packed_vector_2 = packed_vector;
        masked_bits_22 = sub_1401FE7EC((__int64)&loaded_word_4, (__int64)scratch_buffer, 123);
        sub_1402017C8((__int64)&packed_vector, 0);
        masked_bits_23 = sub_1401FE7C0(masked_bits_22, (__int64)scratch_buffer_2, (__int64)&packed_vector);
        sub_1401FE794(masked_bits_23, a1, (__int64)&packed_vector_2);
        return a1;
      }
    }
    if ( (call_result & 0xFC00) == 0x7C00 )
    {
      sub_14020558C(a1, (__int64)&loaded_word_4);
      return a1;
    }
    masked_bits_2 = call_result & 0x1800;
    comparison_result_5 = masked_bits_2 == 2048;
    LOBYTE(dword2_result) = (call_result & 0x6000) == 0;
    saved_dword2_result_2 = dword2_result;
    if ( (call_result & 0x8000) != 0 )
      saved_dword2_result_2 = masked_bits_2 == 2048;
    masked_bits_24 = call_result & (saved_dword2_result_2 ? 1024 : 4096);
    if ( masked_bits_24 )
    {
      masked_bits_25 = call_result & 0x1B00;
      if ( masked_bits != 0 && masked_bits_25 == 4096 )
      {
        DWORD2(packed_vector) = 32;
        *(_QWORD *)&packed_vector = (uint64)(uintptr_t)("`local static destructor helper'");
        sub_1401FE888((__int64)&loaded_word_4, (__int64)&packed_vector);
LABEL_116:
        masked_bits_26 = call_result & 0x1B00;
        if ( masked_bits != 0 && masked_bits_26 == 4352 || masked_bits != 0 && masked_bits_26 == 4608 )
          goto LABEL_118;
LABEL_119:
        masked_bits_11 = (__int64)sub_140201EA4((DName *)scratch_buffer, (__int64)&loaded_word_4);
        goto LABEL_120;
      }
      if ( masked_bits != 0 && masked_bits_25 == 4352 )
      {
        literal_text = "`template static data member constructor helper'";
        DWORD2(packed_vector) = 48;
LABEL_110:
        *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(literal_text);
        sub_1401FE888((__int64)&loaded_word_4, (__int64)&packed_vector);
LABEL_118:
        *(_QWORD *)&packed_vector_2 = 0;
        DWORD2(packed_vector_2) = 0;
        sub_1401FFB98((sr_anon_89 *)&packed_vector_2, 32);
        sub_1401FE7C0((__int64)&packed_vector_2, (__int64)&packed_vector, (__int64)&loaded_word_4);
        loaded_word_4 = packed_vector;
        dword2_result_3 = DWORD2(packed_vector);
        goto LABEL_121;
      }
      if ( masked_bits != 0 && masked_bits_25 == 4608 )
      {
        literal_text = "`template static data member destructor helper'";
        DWORD2(packed_vector) = 47;
        goto LABEL_110;
      }
    }
    if ( (call_result & 0x8000) == 0 && (call_result & 0x7C00) == 0x7800 )
      goto LABEL_156;
    if ( !masked_bits_24 )
      goto LABEL_119;
    goto LABEL_116;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

//----- (00000001401FFB98) ----------------------------------------------------
void            sub_1401FFB98(sr_anon_89 *this, char a2)
{
  unsigned __int64 heap_manager_get_memory_result;

  if ( a2 )
  {
    heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
    if ( heap_manager_get_memory_result )
    {
      *(_BYTE *)(heap_manager_get_memory_result + 8) = a2;
      *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
      *(_QWORD *)this = heap_manager_get_memory_result;
    }
    else
    {
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 8) = 3;
    }
  }
}

//----- (00000001401FFC44) ----------------------------------------------------
__int64            sub_1401FFC44(__int64 a1)
{
  int selection_flag;
  unsigned __int64 heap_manager_get_memory_result;
  unsigned int masked_bits;
  __int64 masked_bits_2;
  __int64 cached_crt_undname_cursor;
  __int64 selection_flag_2;
  int unused_written_slot;
  _DWORD scratch_buffer[4];
  _BYTE scratch_buffer_2[24];

  *(_QWORD *)a1 = 0;
  selection_flag = 1;
  *(_DWORD *)(a1 + 8) = 0;
  while ( **(_BYTE **)&crt_undname_cursor != 64 && **(_BYTE **)&crt_undname_cursor != 90 )
  {
    if ( selection_flag )
    {
      selection_flag = 0;
    }
    else if ( *(_QWORD *)a1 )
    {
      heap_manager_get_memory_result = crt_heap_manager_get_memory((_HeapManager *)(unsigned int *)&g_144CBE640, 16);
      if ( heap_manager_get_memory_result )
      {
        *(_BYTE *)(heap_manager_get_memory_result + 8) = 44;
        *(_QWORD *)heap_manager_get_memory_result = (uint64)(uintptr_t)(off_1402846F0);
      }
      else
      {
        heap_manager_get_memory_result = 0;
      }
      sub_1401FDE58((unsigned __int64 *)a1, heap_manager_get_memory_result);
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      sub_1401FFB98((sr_anon_89 *)a1, 44);
    }
    if ( !**(_BYTE **)&crt_undname_cursor )
    {
      if ( *(char *)(a1 + 8) <= 1 )
      {
        if ( *(_QWORD *)a1 )
        {
          sub_1401FDDF4((unsigned __int64 *)a1, (__int64)&off_1402848D0);
        }
        else
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      return a1;
    }
    masked_bits = (char)**(_BYTE **)&crt_undname_cursor - 48;
    if ( masked_bits > 9 )
    {
      cached_crt_undname_cursor = crt_undname_cursor;
      selection_flag_2 = 0;
      unused_written_slot = 0;
      sub_1402030E0(scratch_buffer, (__int64)&selection_flag_2);
      if ( crt_undname_cursor - cached_crt_undname_cursor > 1 && **(_DWORD **)&g_144CBE600 != 9 )
        sub_1401FEB28(*(int **)&g_144CBE600, (__int64)scratch_buffer);
      sub_1401FE908(a1, (__int64)scratch_buffer);
      if ( crt_undname_cursor == cached_crt_undname_cursor )
      {
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
      }
    }
    else
    {
      ++crt_undname_cursor;
      masked_bits_2 = sub_1401FE684(*(signed int **)&g_144CBE600, (__int64)scratch_buffer_2, masked_bits);
      sub_1401FE908(a1, masked_bits_2);
    }
    if ( *(_BYTE *)(a1 + 8) )
      return a1;
  }
  return a1;
}

// 1401FFC8F: conditional instruction was optimized away because cl.1==0

//----- (00000001401FFDD8) ----------------------------------------------------
DName *           sub_1401FFDD8(DName *a1)
{
  int cached_unrecovered_register_value;
       char *literal_text;
  __int64 masked_bits;
       char *literal_text_2;
  __int64 callee_output_word;
  int unrecovered_register_value;
       char *saved_literal_text;
  int unused_written_slot;
  _BYTE scratch_buffer[16];

  if ( **(_BYTE **)&crt_undname_cursor == 88 )
  {
    unused_written_slot = 4;
    ++crt_undname_cursor;
    literal_text_2 = "void";
LABEL_18:
    saved_literal_text = literal_text_2;
    sub_1401FE248(a1, (     struct StringLiteral *)&saved_literal_text);
    return a1;
  }
  if ( **(_BYTE **)&crt_undname_cursor == 90 )
  {
    ++crt_undname_cursor;
    if ( (~(g_144CBE628 >> 18) & 1) != 0 )
    {
      literal_text_2 = "...";
      unused_written_slot = 3;
    }
    else
    {
      literal_text_2 = "<ellipsis>";
      unused_written_slot = 10;
    }
    goto LABEL_18;
  }
  sub_1401FFC44((__int64)&callee_output_word);
  cached_unrecovered_register_value = unrecovered_register_value;
  if ( (_BYTE)unrecovered_register_value || !**(_BYTE **)&crt_undname_cursor )
    goto LABEL_13;
  if ( **(_BYTE **)&crt_undname_cursor == 64 )
  {
    ++crt_undname_cursor;
LABEL_13:
    *(_QWORD *)a1 = callee_output_word;
    *((_DWORD *)a1 + 2) = cached_unrecovered_register_value;
    return a1;
  }
  if ( **(_BYTE **)&crt_undname_cursor == 90 )
  {
    ++crt_undname_cursor;
    if ( (~(g_144CBE628 >> 18) & 1) != 0 )
    {
      literal_text = ",...";
      unused_written_slot = 4;
    }
    else
    {
      literal_text = ",<ellipsis>";
      unused_written_slot = 11;
    }
    saved_literal_text = literal_text;
    masked_bits = sub_1401FE794((__int64)&callee_output_word, (__int64)scratch_buffer, (__int64)&saved_literal_text);
    *(_QWORD *)a1 = *(_QWORD *)masked_bits;
    *((_DWORD *)a1 + 2) = *(_DWORD *)(masked_bits + 8);
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
  }
  return a1;
}

//----- (00000001401FFF34) ----------------------------------------------------
__int64            sub_1401FFF34(__int64 a1)
{
  __int64 call_result;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  char i;
  __int64 call_result_2;
  _BYTE *byte_cursor;
  __int64 callee_output_word;
  int unrecovered_register_value_3;
  _BYTE scratch_buffer[24];

  if ( **(_BYTE **)&crt_undname_cursor )
  {
    call_result = sub_140204CC0((DName *)scratch_buffer);
    sub_1401FE7EC(call_result, (__int64)&callee_output_word, 123);
    for ( i = 0; ; i = 1 )
    {
      if ( i )
        sub_1401FE9BC((__int64)&callee_output_word, 44);
      call_result_2 = sub_140204850((DName *)scratch_buffer, unrecovered_register_value, unrecovered_register_value_2);
      sub_1401FE908((__int64)&callee_output_word, call_result_2);
      if ( **(_BYTE **)&crt_undname_cursor != 64 )
        break;
      byte_cursor = (_BYTE *)(crt_undname_cursor + 1LL);
      crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor);
      if ( *byte_cursor == 64 )
      {
        crt_undname_cursor = (uint64)(uintptr_t)(byte_cursor + 1);
        sub_1401FE9BC((__int64)&callee_output_word, 125);
        *(_QWORD *)a1 = callee_output_word;
        *(_DWORD *)(a1 + 8) = unrecovered_register_value_3;
        return a1;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_1402848D0);
  }
  return a1;
}

//----- (00000001401FFFFC) ----------------------------------------------------
DName *           sub_1401FFFFC(DName *a1, __int64 a2)
{
  int remaining_count;
  bool state_address;
  int integer_difference;
  __int64 call_result;
  __int64 cached_call_result;
  __int64 masked_bits;
  _BYTE *byte_cursor;
  __int64 saved_masked_bits;
  __int64 masked_bits_2;
  __int64 masked_bits_3;
  __int64 cached_packed_vector;
  __int64 masked_bits_4;
  __int64 masked_bits_5;
  __int64 *state_address_2;
  __int64 call_result_2;
  __int64 loaded_word;
  int loaded_word_2;
       char *literal_text;
  int unused_written_slot;
  __int128 packed_vector;
  __int128 packed_vector_2;
  _BYTE scratch_buffer[16];
  _BYTE scratch_buffer_2[16];

  if ( !**(_BYTE **)&crt_undname_cursor )
  {
    if ( *(_QWORD *)a2 )
    {
      DWORD2(packed_vector) = 2;
      *(_QWORD *)&packed_vector = (uint64)(uintptr_t)(")[");
      packed_vector_2 = packed_vector;
      literal_text = nullptr;
      unused_written_slot = 0;
      sub_1401FFB98((sr_anon_89 *)&literal_text, 40);
      sub_1401FE7C0((__int64)&literal_text, (__int64)&packed_vector, a2);
      masked_bits_4 = sub_1401FE794((__int64)&packed_vector, (__int64)scratch_buffer_2, (__int64)&packed_vector_2);
      masked_bits_5 = sub_1401FE844(masked_bits_4, (__int64)scratch_buffer, 1u);
      state_address_2 = &loaded_word;
LABEL_18:
      call_result_2 = sub_1401FE7EC(masked_bits_5, (__int64)state_address_2, 93);
      sub_14020033C(a1, call_result_2);
      return a1;
    }
LABEL_17:
    literal_text = nullptr;
    unused_written_slot = 0;
    sub_1401FFB98((sr_anon_89 *)&literal_text, 91);
    masked_bits_5 = sub_1401FE844((__int64)&literal_text, (__int64)scratch_buffer_2, 1u);
    state_address_2 = (__int64 *)scratch_buffer;
    goto LABEL_18;
  }
  remaining_count = sub_1402027E8();
  if ( remaining_count <= 0 )
    goto LABEL_17;
  state_address = (*(_DWORD *)(a2 + 8) & 0x800) == 0;
  loaded_word = 0;
  loaded_word_2 = 0;
  if ( state_address )
    goto LABEL_5;
  unused_written_slot = 2;
  literal_text = "[]";
  sub_1401FE888((__int64)&loaded_word, (__int64)&literal_text);
  while ( (char)loaded_word_2 <= 1 )
  {
LABEL_5:
    integer_difference = remaining_count--;
    if ( !integer_difference || !**(_BYTE **)&crt_undname_cursor )
      break;
    call_result = sub_1402017C8((__int64)scratch_buffer, 0);
    literal_text = nullptr;
    unused_written_slot = 0;
    cached_call_result = call_result;
    sub_1401FFB98((sr_anon_89 *)&literal_text, 91);
    sub_1401FE7C0((__int64)&literal_text, (__int64)&packed_vector_2, cached_call_result);
    masked_bits = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)scratch_buffer_2, 93);
    sub_1401FE908((__int64)&loaded_word, masked_bits);
  }
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x800) != 0 )
    {
      byte_cursor = scratch_buffer_2;
      saved_masked_bits = a2;
    }
    else
    {
      literal_text = nullptr;
      unused_written_slot = 0;
      sub_1401FFB98((sr_anon_89 *)&literal_text, 40);
      sub_1401FE7C0((__int64)&literal_text, (__int64)&packed_vector_2, a2);
      masked_bits_2 = sub_1401FE7EC((__int64)&packed_vector_2, (__int64)scratch_buffer_2, 41);
      byte_cursor = scratch_buffer;
      saved_masked_bits = masked_bits_2;
    }
    masked_bits_3 = sub_1401FE7C0(saved_masked_bits, (__int64)byte_cursor, (__int64)&loaded_word);
    loaded_word = *(_QWORD *)masked_bits_3;
    loaded_word_2 = *(_DWORD *)(masked_bits_3 + 8);
  }
  sub_1402030E0(&packed_vector, (__int64)&loaded_word);
  cached_packed_vector = packed_vector;
  *((_DWORD *)a1 + 2) = DWORD2(packed_vector) | 0x800;
  *(_QWORD *)a1 = cached_packed_vector;
  return a1;
}
