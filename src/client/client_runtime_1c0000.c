#include "shared_client.h"

//----- (00000001401C0320) ----------------------------------------------------
__int64            sub_1401C0320(int *a1, __int64 a2, __int64 a3, signed int *a4, signed int a5, unsigned int a6)
{
  int call_result;
  int masked_bits;
  int shifted_bits;
  int call_result_2;
  unsigned int return_value;
  signed int remaining_bits;
  signed int remaining_bits_2;
  int shifted_bits_2;
  unsigned int callee_output_word;
  unsigned int callee_output_word_2;
  int integer_difference;
  int cached_integer_difference;
  unsigned int saved_shifted_bits;
  signed int call_result_3;
  signed int loaded_word;
  int loaded_word_2;
  int saved_loaded_word;
  __int64 loaded_word_3;
  __int64 table_value;
  __int16 call_result_4;

  sub_1401BC4C0(&remaining_bits, &callee_output_word_2, a2, a5);
  sub_1401BC4C0(&remaining_bits_2, &callee_output_word, a3, a5);
  call_result = sub_1401BE3A0(callee_output_word_2, callee_output_word);
  masked_bits = (call_result & 1) + call_result;
  remaining_bits_2 >>= masked_bits - callee_output_word;
  remaining_bits >>= masked_bits - callee_output_word_2;
  remaining_bits = sub_1401BE3A0(remaining_bits, 1u);
  call_result_3 = sub_1401BE210(a2, a3, masked_bits, a5);
  call_result_2 = sub_1401BE550(call_result_3, remaining_bits, 13);
  if ( call_result_2 <= 0x4000 )
  {
    if ( call_result_2 >= -16384 )
      integer_difference = call_result_2;
    else
      integer_difference = -16384;
    cached_integer_difference = integer_difference;
  }
  else
  {
    cached_integer_difference = 0x4000;
  }
  return_value = cached_integer_difference;
  shifted_bits_2 = ((__int16)cached_integer_difference * (__int64)cached_integer_difference) >> 16;
  if ( shifted_bits_2 <= 0 )
    saved_shifted_bits = -shifted_bits_2;
  else
    saved_shifted_bits = shifted_bits_2;
  call_result_4 = sub_1401BE3A0(a6, saved_shifted_bits);
  shifted_bits = masked_bits >> 1;
  loaded_word_3 = *a4;
  *a4 = ((call_result_4 * (__int64)(int)(((unsigned int)sub_1401BE4C0(remaining_bits) << shifted_bits) - *a4)) >> 16) + loaded_word_3;
  remaining_bits_2 -= 16 * (((__int16)return_value * (__int64)call_result_3) >> 16);
  remaining_bits_2 += (unsigned int)(((__int16)shifted_bits_2 * (__int64)remaining_bits) >> 16) << 6;
  table_value = a4[1];
  a4[1] = ((call_result_4 * (__int64)(int)(((unsigned int)sub_1401BE4C0(remaining_bits_2) << shifted_bits) - a4[1])) >> 16) + table_value;
  if ( *a4 <= 1 )
    loaded_word = 1;
  else
    loaded_word = *a4;
  *a1 = sub_1401BE550(a4[1], loaded_word, 14);
  if ( *a1 <= 0x7FFF )
  {
    if ( *a1 >= 0 )
      loaded_word_2 = *a1;
    else
      loaded_word_2 = 0;
    saved_loaded_word = loaded_word_2;
  }
  else
  {
    saved_loaded_word = 0x7FFF;
  }
  *a1 = saved_loaded_word;
  return return_value;
}

//----- (00000001401C06A0) ----------------------------------------------------
__int64            sub_1401C06A0(_DWORD *a1, __int64 a2)
{
  __int64 result;
  int i;
  int j;
  int k;
  int scaled_index;
  int table_value;
  int integer_difference;
  int cached_integer_difference;
  int scaled_index_2;
  int shifted_bits;

  scaled_index_2 = 0;
  for ( i = 0; i < 2; ++i )
  {
    cached_integer_difference = 0x7FFFFFFF;
    for ( j = 0; j < 15; ++j )
    {
      table_value = word_1402827A0[j];
      shifted_bits = (6554LL * (word_1402827A0[j + 1] - table_value)) >> 16;
      for ( k = 0; k < 5; ++k )
      {
        scaled_index = (__int16)(2 * k + 1) * (__int16)shifted_bits + table_value;
        if ( a1[i] - scaled_index <= 0 )
          integer_difference = scaled_index - a1[i];
        else
          integer_difference = a1[i] - scaled_index;
        if ( integer_difference >= cached_integer_difference )
          goto LABEL_14;
        cached_integer_difference = integer_difference;
        scaled_index_2 = (__int16)(2 * k + 1) * (__int16)shifted_bits + table_value;
        *(_BYTE *)(3LL * i + a2) = j;
        *(_BYTE *)(3LL * i + a2 + 1) = k;
      }
    }
LABEL_14:
    *(_BYTE *)(3LL * i + a2 + 2) = *(char *)(3LL * i + a2) / 3;
    *(_BYTE *)(3LL * i + a2) -= 3 * *(_BYTE *)(3LL * i + a2 + 2);
    a1[i] = scaled_index_2;
  }
  result = (unsigned int)(*a1 - a1[1]);
  *a1 = result;
  return result;
}

//----- (00000001401C0940) ----------------------------------------------------
__int64            sub_1401C0940(_DWORD *a1, __int64 a2)
{
  __int64 result;
  int i;

  result = (__int64)sub_14019A4F0(a1, *(char *)(a2 + 5) + 5 * *(char *)(a2 + 2), (__int64)&unk_1402827C0, 8);
  for ( i = 0; i < 2; ++i )
  {
    sub_14019A4F0(a1, *(char *)(3LL * i + a2), (__int64)&unk_14028215C, 8);
    sub_14019A4F0(a1, *(char *)(3LL * i + a2 + 1), (__int64)&unk_1402823A4, 8);
    result = (unsigned int)(i + 1);
  }
  return result;
}

//----- (00000001401C0A60) ----------------------------------------------------
_DWORD *           sub_1401C0A60(_DWORD *a1, char a2)
{
  return sub_14019A4F0(a1, a2, (__int64)&unk_140282764, 8);
}

//----- (00000001401C0AA0) ----------------------------------------------------
__int64            sub_1401C0AA0(_DWORD *a1, _DWORD *a2)
{
  int masked_bits;
  __int64 unused_local;
  int i;
  int scaled_index;
  int shifted_bits;
  _DWORD lookup_index[6];
  __int64 unused_local_2;

  masked_bits = sub_14019AFE0(a1, (__int64)&unk_1402827C0, 8);
  lookup_index[2] = masked_bits / 5;
  lookup_index[5] = masked_bits % 5;
  for ( i = 0; i < 2; ++i )
  {
    lookup_index[3 * i] = sub_14019AFE0(a1, (__int64)&unk_14028215C, 8);
    lookup_index[3 * i + 1] = sub_14019AFE0(a1, (__int64)&unk_1402823A4, 8);
  }
  for ( i = 0; i < 2; ++i )
  {
    lookup_index[3 * i] += 3 * lookup_index[3 * i + 2];
    scaled_index = word_1402827A0[lookup_index[3 * i]];
    shifted_bits = (6554LL * (word_1402827A0[lookup_index[3 * i] + 1] - scaled_index)) >> 16;
    a2[i] = (__int16)(2 * lookup_index[3 * i + 1] + 1) * (__int16)shifted_bits + scaled_index;
  }
  *a2 -= a2[1];
  return 0; /* no caller reads the result */
}

//----- (00000001401C0D30) ----------------------------------------------------
__int64            sub_1401C0D30(_DWORD *a1, _DWORD *a2)
{
  __int64 result;

  result = sub_14019AFE0(a1, (__int64)&unk_140282764, 8);
  *a2 = result;
  return result;
}

//----- (00000001401C0D70) ----------------------------------------------------
__int64            sub_1401C0D70(_DWORD *a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result;
  _BYTE scratch_buffer[4];
  int i;
  int j;
  int loaded_word;
  int masked_bits;
  __int64 record_byte_offset;
  __int64 unused_written_slot;
  char *state_address;
  int shifted_bits;

  unused_written_slot = 1;
  scratch_buffer[1] = 0;
  record_byte_offset = a2;
  state_address = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  shifted_bits = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)shifted_bits;
    if ( i >= shifted_bits )
      break;
    loaded_word = *(_DWORD *)(a6 + 4LL * i);
    if ( loaded_word > 0 )
    {
      if ( (loaded_word & 0x1Fu) >= 6 )
        masked_bits = 6;
      else
        masked_bits = loaded_word & 0x1F;
      scratch_buffer[0] = state_address[masked_bits];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(_BYTE *)(record_byte_offset + j) )
          sub_14019A4F0(a1, (*(char *)(record_byte_offset + j) >> 15) + 1, (__int64)scratch_buffer, 8);
      }
    }
    record_byte_offset += 16;
  }
  return result;
}

//----- (00000001401C0EF0) ----------------------------------------------------
__int64            sub_1401C0EF0(_DWORD *a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result;
  __int16 call_result;
  int i;
  int j;
  _BYTE scratch_buffer[4];
  int loaded_word;
  int masked_bits;
  __int64 record_byte_offset;
  __int64 unused_written_slot;
  char *state_address;
  __int64 cached_j;
  int shifted_bits;

  unused_written_slot = 1;
  scratch_buffer[1] = 0;
  record_byte_offset = a2;
  state_address = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  shifted_bits = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)shifted_bits;
    if ( i >= shifted_bits )
      break;
    loaded_word = *(_DWORD *)(a6 + 4LL * i);
    if ( loaded_word > 0 )
    {
      if ( (loaded_word & 0x1Fu) >= 6 )
        masked_bits = 6;
      else
        masked_bits = loaded_word & 0x1F;
      scratch_buffer[0] = state_address[masked_bits];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(__int16 *)(record_byte_offset + 2LL * j) > 0 )
        {
          cached_j = j;
          call_result = sub_14019AFE0(a1, (__int64)scratch_buffer, 8);
          *(_WORD *)(record_byte_offset + 2LL * j) = (2 * call_result - 1) * *(_WORD *)(record_byte_offset + 2 * cached_j);
        }
      }
    }
    record_byte_offset += 32;
  }
  return result;
}

//----- (00000001401C1090) ----------------------------------------------------
__int64            sub_1401C1090(int *a1)
{
  if ( a1[2] != 8000
    && a1[2] != 12000
    && a1[2] != 16000
    && a1[2] != 24000
    && a1[2] != 32000
    && a1[2] != 44100
    && a1[2] != 48000
    || a1[5] != 8000 && a1[5] != 12000 && a1[5] != 16000
    || a1[3] != 8000 && a1[3] != 12000 && a1[3] != 16000
    || a1[4] != 8000 && a1[4] != 12000 && a1[4] != 16000
    || a1[4] > a1[5]
    || a1[3] < a1[5]
    || a1[4] > a1[3] )
  {
    return 4294967194LL;
  }
  if ( a1[6] != 10 && a1[6] != 20 && a1[6] != 40 && a1[6] != 60 )
    return 4294967193LL;
  if ( (unsigned int)a1[8] > 0x64 )
    return 4294967191LL;
  if ( (unsigned int)a1[12] >= 2 )
    return 4294967188LL;
  if ( (unsigned int)a1[13] >= 2 )
    return 4294967187LL;
  if ( (unsigned int)a1[10] >= 2 )
    return 4294967189LL;
  if ( *a1 < 1 || *a1 > 2 )
    return 4294967185LL;
  if ( a1[1] < 1 || a1[1] > 2 )
    return 4294967185LL;
  if ( a1[1] > *a1 )
    return 4294967185LL;
  if ( (unsigned int)a1[9] <= 0xA )
    return 0;
  return 4294967190LL;
}

//----- (00000001401C12F0) ----------------------------------------------------
__int64            sub_1401C12F0(int *a1, _DWORD *a2)
{
  int scaled_index;
  int table_value;
  unsigned int unused_written_slot;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int selection_code;

  table_value = a1[1144];
  if ( !table_value )
    table_value = a1[8];
  unused_written_slot = table_value;
  scaled_index = 1000 * (__int16)table_value;
  if ( scaled_index )
  {
    if ( scaled_index <= a1[1139] && scaled_index <= a1[1141] && scaled_index >= a1[1142] )
    {
      if ( a1[6] >= 256 )
        a1[7] = 0;
      if ( a1[1134] || a2[16] )
      {
        if ( 1000 * (__int16)table_value <= a1[1143] )
        {
          if ( 1000 * (__int16)table_value >= a1[1143] )
          {
            if ( a1[7] < 0 )
              a1[7] = 1;
          }
          else if ( a2[16] )
          {
            if ( table_value == 8 )
              selection_code = 12;
            else
              selection_code = 16;
            unused_written_slot = selection_code;
            a1[6] = 0;
            crt_memset((void *)(uintptr_t)((_WORD *)a1 + 8), 0, 8u);
            a1[7] = 1;
          }
          else if ( a1[7] )
          {
            a1[7] = 1;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
        else
        {
          if ( !a1[7] )
          {
            a1[6] = 256;
            crt_memset((void *)(uintptr_t)((_WORD *)a1 + 8), 0, 8u);
          }
          if ( a2[16] )
          {
            a1[7] = 0;
            if ( table_value == 16 )
              return 12;
            else
              return 8;
          }
          else if ( a1[6] > 0 )
          {
            a1[7] = -2;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
      }
    }
    else
    {
      if ( a1[1139] >= a1[1141] )
        table_value_3 = a1[1141];
      else
        table_value_3 = a1[1139];
      if ( table_value_3 <= a1[1142] )
        table_value_4 = a1[1142];
      else
        table_value_4 = table_value_3;
      return (unsigned int)(table_value_4 / 1000);
    }
  }
  else
  {
    if ( a1[1143] >= a1[1139] )
      table_value_2 = a1[1139];
    else
      table_value_2 = a1[1143];
    return (unsigned int)(table_value_2 / 1000);
  }
  return unused_written_slot;
}

//----- (00000001401C1660) ----------------------------------------------------
__int64            sub_1401C1660(_DWORD *a1, int a2)
{
  int selection_code;
  int integer_quotient;
  unsigned __int8 *state_address;
  int integer_quotient_2;

  integer_quotient_2 = a2;
  a1[1152] = a2;
  if ( a1[1145] == 2 )
    integer_quotient_2 = a2 - (a1[1144] / 16 + 2000);
  if ( a1[1144] == 8 )
  {
    selection_code = 107;
    state_address = (unsigned __int8 *)&unk_14027E0C0;
  }
  else if ( a1[1144] == 12 )
  {
    selection_code = 155;
    state_address = (unsigned __int8 *)&unk_14027E130;
  }
  else
  {
    selection_code = 191;
    state_address = (unsigned __int8 *)&unk_14027E1D0;
  }
  if ( (integer_quotient_2 + 200) / 400 - 10 >= selection_code - 1 )
    integer_quotient = selection_code - 1;
  else
    integer_quotient = (integer_quotient_2 + 200) / 400 - 10;
  if ( integer_quotient > 0 )
    a1[1183] = 21 * state_address[integer_quotient];
  else
    a1[1183] = 0;
  return 0;
}

//----- (00000001401C1790) ----------------------------------------------------
__int64            sub_1401C1790(_DWORD *a1, int a2, __int16 a3, __int64 a4, int a5)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  unsigned __int64 scaled_index_3;
  void *alloca_result_3;
  int call_result;
  int call_result_2;
  int masked_bits;
  int table_value;
  int i;
  int j;
  int iteration_count;
  int running_total;
  int shifted_bits;
  int k;
  int *buffer_cursor;
  int cached_j;
  int state_address;
  int *saved_alloca_result;
  int *p_i;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  int saved_shifted_bits;
  int loaded_word_5;
  int saved_loaded_word;
  int *record_byte_offset;
  int integer_difference;
  __int64 scaled_index_4;
  char *state_address_2;
  __int64 state_address_3;
  _WORD scratch_buffer[16];
  __int64 unused_local;

  cached_j = 0;
  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x20u);
  iteration_count = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
  {
    ++iteration_count;
    crt_memset((void *)(uintptr_t)((_WORD *)(a5 + a4)), 0, 0x10u);
  }
  scaled_index = 64LL * iteration_count + 15;
  if ( scaled_index <= 64LL * iteration_count )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  for ( i = 0; i < 16 * iteration_count; i += 4 )
  {
    if ( *(char *)(a4 + i) <= 0 )
      loaded_word = -*(char *)(a4 + i);
    else
      loaded_word = *(char *)(a4 + i);
    saved_alloca_result[i] = loaded_word;
    if ( *(char *)(a4 + i + 1) <= 0 )
      loaded_word_2 = -*(char *)(a4 + i + 1);
    else
      loaded_word_2 = *(char *)(a4 + i + 1);
    saved_alloca_result[i + 1] = loaded_word_2;
    if ( *(char *)(a4 + i + 2) <= 0 )
      loaded_word_3 = -*(char *)(a4 + i + 2);
    else
      loaded_word_3 = *(char *)(a4 + i + 2);
    saved_alloca_result[i + 2] = loaded_word_3;
    if ( *(char *)(a4 + i + 3) <= 0 )
      loaded_word_4 = -*(char *)(a4 + i + 3);
    else
      loaded_word_4 = *(char *)(a4 + i + 3);
    saved_alloca_result[i + 3] = loaded_word_4;
  }
  scaled_index_2 = 4LL * iteration_count + 15;
  if ( scaled_index_2 <= 4LL * iteration_count )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = alloca_result_2;
  scaled_index_3 = 4LL * iteration_count + 15;
  if ( scaled_index_3 <= 4LL * iteration_count )
    scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
  buffer_cursor = alloca_result_3;
  record_byte_offset = saved_alloca_result;
  for ( i = 0; i < iteration_count; ++i )
  {
    buffer_cursor[i] = 0;
    while ( 1 )
    {
      running_total = sub_1401D6B20((__int64)scratch_buffer, (__int64)record_byte_offset, unk_1402820FC, 8);
      call_result = sub_1401D6B20((__int64)scratch_buffer, (__int64)scratch_buffer, unk_1402820FD, 4);
      running_total += call_result;
      call_result_2 = sub_1401D6B20((__int64)scratch_buffer, (__int64)scratch_buffer, unk_1402820FE, 2);
      running_total += call_result_2;
      masked_bits = sub_1401D6B20((__int64)&p_i[i], (__int64)scratch_buffer, unk_1402820FF, 1);
      running_total += masked_bits;
      if ( !running_total )
        break;
      ++buffer_cursor[i];
      for ( j = 0; j < 16; ++j )
        record_byte_offset[j] >>= 1;
    }
    record_byte_offset += 16;
  }
  saved_shifted_bits = 0x7FFFFFFF;
  for ( j = 0; j < 9; ++j )
  {
    state_address_2 = (char *)&unk_1402823B0 + 18 * j;
    shifted_bits = byte_140282470[9 * (a2 >> 1) + j];
    for ( i = 0; i < iteration_count; ++i )
    {
      if ( buffer_cursor[i] <= 0 )
        table_value = (unsigned __int8)state_address_2[p_i[i]];
      else
        table_value = (unsigned __int8)state_address_2[17];
      shifted_bits += table_value;
    }
    if ( shifted_bits < saved_shifted_bits )
    {
      saved_shifted_bits = shifted_bits;
      cached_j = j;
    }
  }
  sub_14019A4F0(a1, cached_j, (__int64)&unk_140282458 + 9 * (a2 >> 1), 8);
  state_address_3 = (__int64)&unk_1402822F0 + 18 * cached_j;
  for ( i = 0; i < iteration_count; ++i )
  {
    if ( buffer_cursor[i] )
    {
      sub_14019A4F0(a1, 17, state_address_3, 8);
      for ( j = 0; j < buffer_cursor[i] - 1; ++j )
        sub_14019A4F0(a1, 17, (__int64)&unk_140282392, 8);
      sub_14019A4F0(a1, p_i[i], (__int64)&unk_140282392, 8);
    }
    else
    {
      sub_14019A4F0(a1, p_i[i], state_address_3, 8);
    }
  }
  for ( i = 0; i < iteration_count; ++i )
  {
    if ( p_i[i] > 0 )
      sub_1401C1FB0(a1, (unsigned int *)&saved_alloca_result[16 * i]);
  }
  for ( i = 0; i < iteration_count; ++i )
  {
    if ( buffer_cursor[i] > 0 )
    {
      scaled_index_4 = 16 * i + a4;
      integer_difference = buffer_cursor[i] - 1;
      for ( j = 0; j < 16; ++j )
      {
        if ( *(char *)(scaled_index_4 + j) <= 0 )
          loaded_word_5 = -*(char *)(scaled_index_4 + j);
        else
          loaded_word_5 = *(char *)(scaled_index_4 + j);
        saved_loaded_word = (char)loaded_word_5;
        for ( k = integer_difference; k > 0; --k )
        {
          state_address = (saved_loaded_word >> k) & 1;
          sub_14019A4F0(a1, state_address, (__int64)&unk_14028213C, 8);
        }
        state_address = saved_loaded_word & 1;
        sub_14019A4F0(a1, state_address, (__int64)&unk_14028213C, 8);
      }
    }
  }
  return sub_1401C0D70(a1, a4, a5, a2, a3, (__int64)p_i); /* 0x1401C1F80: the result of this call is still in rax at the exit */
}

//----- (00000001401C1FB0) ----------------------------------------------------
__int64            sub_1401C1FB0(_DWORD *a1, unsigned int *a2)
{
  __int64 unused_local;
  int scratch_buffer[2];
  int callee_output_word;
  int scratch_buffer_2[2];
  int unrecovered_register_value;
  int unrecovered_register_value_2;
  int scratch_buffer_3[2];
  int unrecovered_register_value_3;
  int unrecovered_register_value_4;
  int unrecovered_register_value_5;
  int unrecovered_register_value_6;
  int unrecovered_register_value_7;
  int unrecovered_register_value_8;
  __int64 unused_local_2;

  sub_1401DB040((__int64)scratch_buffer_3, (__int64)a2, 8u);
  sub_1401DB040((__int64)scratch_buffer_2, (__int64)scratch_buffer_3, 4u);
  sub_1401DB040((__int64)scratch_buffer, (__int64)scratch_buffer_2, 2u);
  sub_1401DB040((__int64)&callee_output_word, (__int64)scratch_buffer, 1u);
  sub_1401DB0B0(a1, scratch_buffer[0], callee_output_word, (__int64)&unk_1402826A0);
  sub_1401DB0B0(a1, scratch_buffer_2[0], scratch_buffer[0], (__int64)&unk_1402825F0);
  sub_1401DB0B0(a1, scratch_buffer_3[0], scratch_buffer_2[0], (__int64)&unk_140282540);
  sub_1401DB0B0(a1, *a2, scratch_buffer_3[0], (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[2], scratch_buffer_3[1], (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, unrecovered_register_value_3, scratch_buffer_2[1], (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[4], unrecovered_register_value_3, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[6], unrecovered_register_value_4, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, unrecovered_register_value, scratch_buffer[1], (__int64)&unk_1402825F0);
  sub_1401DB0B0(a1, unrecovered_register_value_5, unrecovered_register_value, (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[8], unrecovered_register_value_5, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[10], unrecovered_register_value_6, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, unrecovered_register_value_7, unrecovered_register_value_2, (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[12], unrecovered_register_value_7, (__int64)&unk_1402824A0);
  return sub_1401DB0B0(a1, a2[14], unrecovered_register_value_8, (__int64)&unk_1402824A0); /* 0x1401C2318: the result of this call is still in rax at the exit */
}

//----- (00000001401C2340) ----------------------------------------------------
__int64            sub_1401C2340(__int16 *a1, _DWORD *a2, int a3)
{
  __int64 unused_local;
  __int16 callee_output_word;
  __int16 callee_output_word_2;
  __int16 *unused_written_slot;
  __int16 *unused_written_slot_2;
  __int16 *unused_written_slot_3;
  __int16 *unused_written_slot_4;
  __int16 *unused_written_slot_5;
  __int16 *unused_written_slot_6;
  __int16 *unused_written_slot_7;
  __int16 *unused_written_slot_8;
  __int16 *unused_written_slot_9;
  __int16 *unused_written_slot_10;
  __int16 *unused_written_slot_11;
  __int16 *unused_written_slot_12;
  __int16 *unused_written_slot_13;
  __int16 *unused_written_slot_14;
  __int16 callee_output_word_3;
  __int16 callee_output_word_4;
  __int16 callee_output_word_5;
  __int16 callee_output_word_6;
  __int16 callee_output_word_7;
  __int16 callee_output_word_8;
  __int16 callee_output_word_9;
  __int16 callee_output_word_10;
  __int16 callee_output_word_11;
  __int16 callee_output_word_12;
  __int16 callee_output_word_13;
  __int16 callee_output_word_14;
  __int64 unused_local_2;

  sub_1401DB110(&callee_output_word, &callee_output_word_2, a2, a3, (__int64)&unk_1402826A0);
  unused_written_slot = &callee_output_word_3;
  sub_1401DB110(&callee_output_word_3, &callee_output_word_4, a2, callee_output_word, (__int64)&unk_1402825F0);
  unused_written_slot_2 = &callee_output_word_7;
  sub_1401DB110(&callee_output_word_7, &callee_output_word_8, a2, callee_output_word_3, (__int64)&unk_140282540);
  unused_written_slot_3 = a1;
  sub_1401DB110(a1, a1 + 1, a2, callee_output_word_7, (__int64)&unk_1402824A0);
  unused_written_slot_4 = a1 + 2;
  sub_1401DB110(a1 + 2, a1 + 3, a2, callee_output_word_8, (__int64)&unk_1402824A0);
  unused_written_slot_5 = &callee_output_word_9;
  sub_1401DB110(&callee_output_word_9, &callee_output_word_10, a2, callee_output_word_4, (__int64)&unk_140282540);
  unused_written_slot_6 = a1 + 4;
  sub_1401DB110(a1 + 4, a1 + 5, a2, callee_output_word_9, (__int64)&unk_1402824A0);
  unused_written_slot_7 = a1 + 6;
  sub_1401DB110(a1 + 6, a1 + 7, a2, callee_output_word_10, (__int64)&unk_1402824A0);
  unused_written_slot_8 = &callee_output_word_5;
  sub_1401DB110(&callee_output_word_5, &callee_output_word_6, a2, callee_output_word_2, (__int64)&unk_1402825F0);
  unused_written_slot_9 = &callee_output_word_11;
  sub_1401DB110(&callee_output_word_11, &callee_output_word_12, a2, callee_output_word_5, (__int64)&unk_140282540);
  unused_written_slot_10 = a1 + 8;
  sub_1401DB110(a1 + 8, a1 + 9, a2, callee_output_word_11, (__int64)&unk_1402824A0);
  unused_written_slot_11 = a1 + 10;
  sub_1401DB110(a1 + 10, a1 + 11, a2, callee_output_word_12, (__int64)&unk_1402824A0);
  unused_written_slot_12 = &callee_output_word_13;
  sub_1401DB110(&callee_output_word_13, &callee_output_word_14, a2, callee_output_word_6, (__int64)&unk_140282540);
  unused_written_slot_13 = a1 + 12;
  sub_1401DB110(a1 + 12, a1 + 13, a2, callee_output_word_13, (__int64)&unk_1402824A0);
  unused_written_slot_14 = a1 + 14;
  return sub_1401DB110(a1 + 14, a1 + 15, a2, callee_output_word_14, (__int64)&unk_1402824A0); /* 0x1401C294D: the result of this call is still in rax at the exit */
}

//----- (00000001401C2970) ----------------------------------------------------
__int64            sub_1401C2970(char *a1, __int64 a2, char *a3, int a4, unsigned int a5)
{
  __int64 result;
  int shifted_bits;
  signed int i;
  int scaled_index;
  char table_value;
  char cached_table_value;
  char input_byte;
  char saved_input_byte;
  char input_byte_2;
  char saved_input_byte_2;
  char cached_input_byte;
  char integer_difference;
  char cached_integer_difference;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    a1[i] = (unsigned int)(2251 * (__int16)(sub_1401BC2A0(*(_DWORD *)(a2 + 4LL * i)) - 2090)) >> 16;
    if ( a1[i] < *a3 )
      ++a1[i];
    if ( a1[i] <= 63 )
    {
      if ( a1[i] >= 0 )
        table_value = a1[i];
      else
        table_value = 0;
      cached_table_value = table_value;
    }
    else
    {
      cached_table_value = 63;
    }
    a1[i] = cached_table_value;
    if ( i || a4 )
    {
      a1[i] -= *a3;
      scaled_index = *a3 + 8;
      if ( a1[i] > scaled_index )
        a1[i] = ((a1[i] - scaled_index + 1) >> 1) + scaled_index;
      if ( a1[i] <= 36 )
      {
        if ( a1[i] >= -4 )
          integer_difference = a1[i];
        else
          integer_difference = -4;
        cached_integer_difference = integer_difference;
      }
      else
      {
        cached_integer_difference = 36;
      }
      a1[i] = cached_integer_difference;
      if ( a1[i] <= scaled_index )
      {
        *a3 += a1[i];
      }
      else
      {
        *a3 += 2 * a1[i] - scaled_index;
        *a3 = sub_1401BE320(*a3, 0x3Fu);
      }
      a1[i] += 4;
    }
    else
    {
      if ( *a3 - 4 <= 63 )
      {
        if ( *a1 <= 63 )
        {
          if ( *a1 >= *a3 - 4 )
            input_byte_2 = *a1;
          else
            input_byte_2 = *a3 - 4;
          saved_input_byte_2 = input_byte_2;
        }
        else
        {
          saved_input_byte_2 = 63;
        }
        cached_input_byte = saved_input_byte_2;
      }
      else
      {
        if ( *a1 <= *a3 - 4 )
        {
          if ( *a1 >= 63 )
            input_byte = *a1;
          else
            input_byte = 63;
          saved_input_byte = input_byte;
        }
        else
        {
          saved_input_byte = *a3 - 4;
        }
        cached_input_byte = saved_input_byte;
      }
      *a1 = cached_input_byte;
      *a3 = *a1;
    }
    shifted_bits = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a2 + 4LL * i) = sub_1401BC3D0(shifted_bits);
  }
  return result;
}

//----- (00000001401C2D70) ----------------------------------------------------
__int64            sub_1401C2D70(__int64 a1, char *a2, char *a3, int a4, unsigned int a5)
{
  __int64 result;
  char scaled_index;
  int shifted_bits;
  signed int i;
  int integer_difference;
  int scaled_index_2;
  char input_byte;
  char saved_input_byte;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    if ( i || a4 )
    {
      integer_difference = a2[i] - 4;
      scaled_index_2 = *a3 + 8;
      if ( integer_difference <= scaled_index_2 )
        scaled_index = integer_difference + *a3;
      else
        scaled_index = 2 * integer_difference - scaled_index_2 + *a3;
      *a3 = scaled_index;
    }
    else
    {
      *a3 = sub_1401BE3A0(*a2, *a3 - 16);
    }
    if ( *a3 <= 63 )
    {
      if ( *a3 >= 0 )
        input_byte = *a3;
      else
        input_byte = 0;
      saved_input_byte = input_byte;
    }
    else
    {
      saved_input_byte = 63;
    }
    *a3 = saved_input_byte;
    shifted_bits = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a1 + 4LL * i) = sub_1401BC3D0(shifted_bits);
  }
  return result;
}

//----- (00000001401C2EE0) ----------------------------------------------------
__int64            sub_1401C2EE0(__int64 a1, int a2)
{
  int i;
  unsigned int shifted_bits;

  shifted_bits = 0;
  for ( i = 0; i < a2; ++i )
    shifted_bits = (shifted_bits << 8) + *(char *)(a1 + i);
  return shifted_bits;
}

//----- (00000001401C2F40) ----------------------------------------------------
__int64            sub_1401C2F40(__int64 a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5)
{
  __int64 result;
  signed int i;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_WORD *)(a1 + 2LL * i) = ((a4 * (__int16)(*(_WORD *)(a3 + 2LL * i) - *(_WORD *)(a2 + 2LL * i))) >> 2)
                             + *(_WORD *)(a2 + 2LL * i);
  }
  return result;
}

//----- (00000001401C2FD0) ----------------------------------------------------
__int64            sub_1401C2FD0(
        __int64 a1,
        __m128i *a2,
        _BYTE *a3,
        int *a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7,
        __int16 a8,
        int a9)
{
  __int64 result;
  int i;
  int m;
  int j;
  int k;
  int cached_integer_sum;
  unsigned int shifted_bits;
  int cached_integer_sum_2;
  int loaded_word;
  int callee_output_word;
  int integer_sum;
  int callee_output_word_2;
  int integer_sum_2;
  int callee_output_word_3;
  int call_result;
  int cached_integer_sum_3;
  int saved_loaded_word;
  int table_value;
  int call_result_2;
  __m128i Src;
  _DWORD *running_total;
  char *byte_cursor;
  __int64 scaled_index;
  __int64 scaled_index_2;

  cached_integer_sum_3 = 0x7FFFFFFF;
  saved_loaded_word = 0;
  for ( i = 0; i < 3; ++i )
  {
    scaled_index = (__int64)*(&off_140282688 + i);
    byte_cursor = (char *)*(&off_140282768 + i);
    scaled_index_2 = (__int64)*(&off_140282780 + i);
    table_value = byte_1402822CC[i];
    SR_VEC_LANES(128, Src, i64)[1] = a6;
    running_total = a7;
    cached_integer_sum = 0;
    cached_integer_sum_2 = 0;
    loaded_word = *a4;
    for ( j = 0; j < a9; ++j )
    {
      call_result_2 = sub_1401BC3D0(5333 - loaded_word + 896) - 51;
      sub_1401C3400(&SR_VEC_LANES(128, Src, i8)[j], &callee_output_word, &callee_output_word_2, &callee_output_word_3, (_DWORD *)SR_VEC_LANES(128, Src, i64)[1], running_total, byte_cursor, scaled_index_2, scaled_index, a8, call_result_2, table_value);
      if ( callee_output_word + cached_integer_sum >= 0 )
        integer_sum = callee_output_word + cached_integer_sum;
      else
        integer_sum = 0x7FFFFFFF;
      cached_integer_sum = integer_sum;
      if ( callee_output_word_2 + cached_integer_sum_2 >= 0 )
        integer_sum_2 = callee_output_word_2 + cached_integer_sum_2;
      else
        integer_sum_2 = 0x7FFFFFFF;
      cached_integer_sum_2 = integer_sum_2;
      if ( (int)(loaded_word + sub_1401BC2A0(callee_output_word_3 + 51) - 896) >= 0 )
        call_result = loaded_word + sub_1401BC2A0(callee_output_word_3 + 51) - 896;
      else
        call_result = 0;
      loaded_word = call_result;
      SR_VEC_LANES(128, Src, i64)[1] += 100;
      running_total += 5;
    }
    if ( cached_integer_sum_2 <= cached_integer_sum_3 )
    {
      cached_integer_sum_3 = cached_integer_sum_2;
      *a3 = i;
      crt_memcpy(a2, &Src, a9);
      saved_loaded_word = loaded_word;
    }
  }
  byte_cursor = (char *)*(&off_140282768 + (char)*a3);
  for ( k = 0; k < a9; ++k )
  {
    for ( m = 0; m < 5; ++m )
      *(_WORD *)(a1 + 2LL * (m + 5 * k)) = byte_cursor[5 * SR_VEC_PTR_LANES(128, a2, i8)[k] + m] << 7;
  }
  if ( a9 == 2 )
    shifted_bits = cached_integer_sum >> 1;
  else
    shifted_bits = cached_integer_sum >> 2;
  *a4 = saved_loaded_word;
  result = (unsigned int)(-3 * (__int16)(sub_1401BC2A0(shifted_bits) - 1920));
  *a5 = result;
  return result;
}

//----- (00000001401C3400) ----------------------------------------------------
__int64            sub_1401C3400(
        _BYTE *a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        char *a7,
        __int64 a8,
        __int64 a9,
        __int16 a10,
        int a11,
        int a12)
{
  __int64 unused_local;
  int scaled_index;
  int running_total;
  char *running_total_2;
  int i;
  int loaded_word;
  int integer_difference;
  int loaded_word_2;
  int shifted_bits;
  int unused_written_slot;
  int call_result;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  int scaled_index_5;
  int scaled_index_6;
  __int64 unused_local_2;

  scaled_index_2 = -128 * *a6;
  scaled_index_3 = -128 * a6[1];
  scaled_index_4 = -128 * a6[2];
  scaled_index_5 = -128 * a6[3];
  scaled_index_6 = -128 * a6[4];
  *a3 = 0x7FFFFFFF;
  *a2 = 0x7FFFFFFF;
  running_total_2 = a7;
  *a1 = 0;
  for ( i = 0; i < a12; ++i )
  {
    loaded_word = *(unsigned __int8 *)(a8 + i);
    running_total = 32801;
    if ( loaded_word - a11 <= 0 )
      integer_difference = 0;
    else
      integer_difference = loaded_word - a11;
    shifted_bits = integer_difference << 11;
    scaled_index = *running_total_2 * *a5 + 2 * (running_total_2[4] * a5[4] + running_total_2[3] * a5[3] + running_total_2[2] * a5[2] + scaled_index_2 + running_total_2[1] * a5[1]);
    running_total += ((running_total_2[3] * (__int64)(running_total_2[3] * a5[18] + 2 * (scaled_index_5 + running_total_2[4] * a5[19]))) >> 16)
         + ((running_total_2[2] * (__int64)(running_total_2[2] * a5[12] + 2 * (running_total_2[4] * a5[14] + scaled_index_4 + running_total_2[3] * a5[13]))) >> 16)
         + ((running_total_2[1] * (__int64)(running_total_2[1] * a5[6] + 2 * (running_total_2[4] * a5[9] + running_total_2[3] * a5[8] + scaled_index_3 + running_total_2[2] * a5[7]))) >> 16)
         + ((*running_total_2 * (__int64)scaled_index) >> 16);
    scaled_index = 2 * scaled_index_6;
    scaled_index = running_total_2[4] * a5[24] + 2 * scaled_index_6;
    running_total += (running_total_2[4] * (__int64)scaled_index) >> 16;
    if ( running_total >= 0 )
    {
      unused_written_slot = a10;
      call_result = (__int16)(sub_1401BC2A0(shifted_bits + running_total) - 1920) * a10;
      loaded_word_2 = call_result + 4 * *(unsigned __int8 *)(a9 + i);
      if ( loaded_word_2 <= *a3 )
      {
        *a3 = loaded_word_2;
        *a2 = shifted_bits + running_total;
        *a1 = i;
        *a4 = loaded_word;
      }
    }
    running_total_2 += 5;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401C3AC0) ----------------------------------------------------
__int64            sub_1401C3AC0(
        _DWORD *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int16 a15)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  unsigned __int64 record_word_offset;
  void *alloca_result_3;
  int integer_difference;
  int scaled_index_3;
  unsigned __int64 byte_count;
       __m128i *source_buffer;
  unsigned __int64 byte_count_2;
       __m128i *source_buffer_2;
  int i;
  BOOL comparison_result;
  int integer_difference_2;
  int option_flags;
  int loaded_word;
  int shifted_bits;
  int table_value;
  __int64 running_total;
  int *saved_alloca_result;
  __int16 *shifted_bits_2;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  _WORD *record_pointer;
  __int16 *record_pointer_2;
  __int16 *record_pointer_3;
  void *unused_written_slot;
  void *unused_written_slot_2;
  __int64 unused_local;

  SR_VEC_LANES(128, a2[271], i32)[1] = a3[34];
  loaded_word = SR_VEC_LANES(128, a2[270], i32)[2];
  shifted_bits = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  comparison_result = a3[31] != 4;
  scaled_index = 4LL * (a1[1146] + a1[1148]) + 15;
  if ( scaled_index <= 4LL * (a1[1146] + a1[1148]) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result;
  scaled_index_2 = 2LL * (a1[1146] + a1[1148]) + 15;
  if ( scaled_index_2 <= 2LL * (a1[1146] + a1[1148]) )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result_2;
  record_word_offset = 4LL * (int)a1[1147] + 15;
  if ( record_word_offset <= 4LL * (int)a1[1147] )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = alloca_result_3;
  SR_VEC_LANES(128, a2[271], i32)[0] = a1[1148];
  SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
  running_total = (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[1148];
  for ( i = 0; i < a1[1145]; ++i )
  {
    shifted_bits_2 = (__int16 *)(a6 + 32LL * ((1 - comparison_result) | (i >> 1)));
    record_pointer_3 = (__int16 *)(a7 + 10LL * i);
    record_pointer_2 = (__int16 *)(a8 + 48LL * i);
    option_flags = *(int *)(a9 + 4LL * i) >> 2;
    option_flags |= *(int *)(a9 + 4LL * i) >> 1 << 16;
    SR_VEC_LANES(128, a2[271], i32)[3] = 0;
    if ( a3[29] == 2 )
    {
      loaded_word = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * comparison_result) & i) == 0 )
      {
        integer_difference_2 = a1[1148] - loaded_word - a1[1160] - 2;
        integer_difference = a1[1148] - integer_difference_2;
        scaled_index_3 = a1[1147] * i;
        record_pointer = (_WORD *)saved_alloca_result + integer_difference_2;
        sub_1401BBB40(record_pointer, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * scaled_index_3 + 2 * integer_difference_2, shifted_bits_2, integer_difference, a1[1160]);
        SR_VEC_LANES(128, a2[271], i32)[3] = 1;
        SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
      }
    }
    sub_1401D7560((__int64)a1, a2, a4, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result, (__int64)saved_alloca_result_2, i, a15, a12, a13, a3[29]);
    table_value = a3[29];
    sub_1401D7910(
      a2,
      table_value,
      (__int64)saved_alloca_result_3,
      a5,
      running_total,
      (__int64)saved_alloca_result_2,
      shifted_bits_2,
      record_pointer_3,
      record_pointer_2,
      loaded_word,
      option_flags,
      *(_DWORD *)(a10 + 4LL * i),
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      shifted_bits,
      a1[1147],
      a1[1159],
      a1[1160]);
    a4 += 2LL * (int)a1[1147];
    a5 += (int)a1[1147];
    running_total += 2LL * (int)a1[1147];
  }
  SR_VEC_LANES(128, a2[270], i32)[2] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  byte_count = 2LL * (int)a1[1148];
  source_buffer = (__m128i *)((char *)a2 + 2 * a1[1146]);
  unused_written_slot = a2;
  crt_memcpy(a2, source_buffer, byte_count);
  byte_count_2 = 4LL * (int)a1[1148];
  source_buffer_2 = (__m128i *)((char *)a2 + 4 * a1[1146] + 1280);
  unused_written_slot_2 = &a2[80];
  return crt_memcpy(a2 + 80, source_buffer_2, byte_count_2); /* 0x1401C40FB: the result of this call is still in rax at the exit */
}

//----- (00000001401C4120) ----------------------------------------------------
__int64            sub_1401C4120(
        _DWORD *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _DWORD *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  unsigned __int64 record_word_offset;
  __int64 integer_sum;
  void *alloca_result;
  unsigned __int64 scaled_index;
  void *alloca_result_2;
  unsigned __int64 scaled_index_2;
  void *alloca_result_3;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_4;
  void *alloca_result_5;
  int integer_difference;
  int scaled_index_3;
  unsigned __int64 byte_count;
       __m128i *source_buffer;
  unsigned __int64 byte_count_2;
       __m128i *source_buffer_2;
  int unused_local;
  int i;
  int j;
  int running_total;
  int loaded_word;
  __m128i *destination_buffer;
  int *saved_alloca_result;
  int cached_j;
  int loaded_word_2;
  int scaled_index_4;
  int iteration_count;
  BOOL comparison_result;
  int integer_difference_2;
  int option_flags;
  int selection_flag;
  int shifted_bits;
  int shifted_bits_2;
  int saved_shifted_bits;
  int shifted_bits_3;
  __int64 packed_word_bits;
  __int64 running_total_2;
  int unused_written_slot;
  int shifted_bits_4;
  int *saved_alloca_result_2;
  __int16 *shifted_bits_5;
  int *p_i;
  int *saved_alloca_result_3;
  _WORD *record_pointer;
  __int16 *record_pointer_2;
  __int16 *record_pointer_3;
  int *saved_alloca_result_4;
  __m128i *unused_written_slot_2;
  __m128i *unused_written_slot_3;
  __int64 unused_local_2;

  loaded_word_2 = SR_VEC_LANES(128, a2[270], i32)[2];
  record_word_offset = 1300LL * (int)a1[1157];
  integer_sum = record_word_offset + 15;
  if ( record_word_offset + 15 <= record_word_offset )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  crt_memset((void *)(uintptr_t)(&i), 0, 1300LL * (int)a1[1157]);
  for ( i = 0; i < a1[1157]; ++i )
  {
    destination_buffer = (__m128i *)&saved_alloca_result[325 * i];
    SR_VEC_LANES(128, destination_buffer[80], i32)[2] = (a3[34] + (_BYTE)i) & 3;
    SR_VEC_LANES(128, destination_buffer[80], i32)[3] = SR_VEC_LANES(128, destination_buffer[80], i32)[2];
    SR_VEC_LANES(128, destination_buffer[81], i32)[0] = 0;
    SR_VEC_LANES(128, destination_buffer[80], i32)[0] = SR_VEC_LANES(128, a2[270], i32)[0];
    SR_VEC_LANES(128, destination_buffer[80], i32)[1] = SR_VEC_LANES(128, a2[270], i32)[1];
    SR_VEC_LANES(128, destination_buffer[64], i32)[0] = SR_VEC_LANES(128, a2[79], i32)[a1[1148] + 3];
    crt_memcpy(destination_buffer, a2 + 240, 0x40u);
    crt_memcpy(destination_buffer + 74, a2 + 264, 0x60u);
  }
  shifted_bits_4 = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  selection_flag = 0;
  loaded_word = sub_1401BE320(0x28u, a1[1147]);
  if ( a3[29] == 2 )
  {
    for ( i = 0; i < a1[1145]; ++i )
      loaded_word = sub_1401BE320(loaded_word, *(_DWORD *)(a13 + 4LL * i) - 3);
  }
  else if ( loaded_word_2 > 0 )
  {
    loaded_word = sub_1401BE320(loaded_word, loaded_word_2 - 3);
  }
  comparison_result = a3[31] != 4;
  scaled_index = 4LL * (a1[1146] + a1[1148]) + 15;
  if ( scaled_index <= 4LL * (a1[1146] + a1[1148]) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = alloca_result_2;
  scaled_index_2 = 2LL * (a1[1146] + a1[1148]) + 15;
  if ( scaled_index_2 <= 2LL * (a1[1146] + a1[1148]) )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result_3;
  record_word_offset_2 = 4LL * (int)a1[1147] + 15;
  if ( record_word_offset_2 <= 4LL * (int)a1[1147] )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = alloca_result_4;
  alloca_result_5 = alloca(160);
  saved_alloca_result_4 = alloca_result_5;
  running_total_2 = (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[1148];
  SR_VEC_LANES(128, a2[271], i32)[0] = a1[1148];
  SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
  iteration_count = 0;
  for ( i = 0; i < a1[1145]; ++i )
  {
    shifted_bits_5 = (__int16 *)(a6 + 32LL * ((1 - comparison_result) | (i >> 1)));
    record_pointer_3 = (__int16 *)(a7 + 10LL * i);
    record_pointer_2 = (__int16 *)(a8 + 48LL * i);
    option_flags = a9[i] >> 2;
    option_flags |= a9[i] >> 1 << 16;
    SR_VEC_LANES(128, a2[271], i32)[3] = 0;
    if ( a3[29] == 2 )
    {
      loaded_word_2 = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * comparison_result) & i) == 0 )
      {
        if ( i == 2 )
        {
          scaled_index_4 = saved_alloca_result[324];
          cached_j = 0;
          for ( j = 1; j < a1[1157]; ++j )
          {
            if ( saved_alloca_result[325 * j + 324] < scaled_index_4 )
            {
              scaled_index_4 = saved_alloca_result[325 * j + 324];
              cached_j = j;
            }
          }
          for ( j = 0; j < a1[1157]; ++j )
          {
            if ( j != cached_j )
              saved_alloca_result[325 * j + 324] += 0x7FFFFFF;
          }
          destination_buffer = (__m128i *)&saved_alloca_result[325 * cached_j];
          running_total = loaded_word + selection_flag;
          for ( j = 0; j < loaded_word; ++j )
          {
            running_total = (running_total - 1) % 40;
            running_total += running_total < 0 ? 0x28 : 0;
            *(_BYTE *)(a5 + j - loaded_word) = ((SR_VEC_LANES(128, destination_buffer[34], i32)[running_total] >> 9) + 1) >> 1;
            if ( (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 13) + 1) >> 1 <= 0x7FFF )
            {
              if ( (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 13) + 1) >> 1 >= -32768 )
                shifted_bits_2 = (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 13) + 1) >> 1;
              else
                shifted_bits_2 = -32768;
              saved_shifted_bits = shifted_bits_2;
            }
            else
            {
              saved_shifted_bits = 0x7FFF;
            }
            *(_WORD *)(running_total_2 + 2LL * (j - loaded_word)) = saved_shifted_bits;
            SR_VEC_LANES(128, a2[80], i32)[j + SR_VEC_LANES(128, a2[271], i32)[0] - loaded_word] = SR_VEC_LANES(128, destination_buffer[64], i32)[running_total];
          }
          iteration_count = 0;
        }
        integer_difference_2 = a1[1148] - loaded_word_2 - a1[1160] - 2;
        integer_difference = a1[1148] - integer_difference_2;
        scaled_index_3 = a1[1147] * i;
        record_pointer = (_WORD *)saved_alloca_result_2 + integer_difference_2;
        sub_1401BBB40(record_pointer, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * scaled_index_3 + 2 * integer_difference_2, shifted_bits_5, integer_difference, a1[1160]);
        SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
        SR_VEC_LANES(128, a2[271], i32)[3] = 1;
      }
    }
    sub_1401D82A0(
      (__int64)a1,
      a2,
      (__int64)saved_alloca_result,
      a4,
      (__int64)saved_alloca_result_3,
      (__int64)saved_alloca_result_2,
      (__int64)p_i,
      i,
      a1[1157],
      a15,
      a12,
      a13,
      a3[29],
      loaded_word);
    unused_written_slot = iteration_count;
    sub_1401D8730(
      (__int64)a2,
      (__int64)saved_alloca_result,
      a3[29],
      (__int64)saved_alloca_result_3,
      a5,
      running_total_2,
      (__int64)p_i,
      (__int64)saved_alloca_result_4,
      shifted_bits_5,
      record_pointer_3,
      record_pointer_2,
      loaded_word_2,
      option_flags,
      a10[i],
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      shifted_bits_4,
      a1[1147],
      iteration_count++,
      a1[1159],
      a1[1160],
      a1[1168],
      a1[1157],
      &selection_flag,
      loaded_word);
    a4 += 2LL * (int)a1[1147];
    a5 += (int)a1[1147];
    running_total_2 += 2LL * (int)a1[1147];
  }
  scaled_index_4 = saved_alloca_result[324];
  cached_j = 0;
  for ( i = 1; i < a1[1157]; ++i )
  {
    if ( saved_alloca_result[325 * i + 324] < scaled_index_4 )
    {
      scaled_index_4 = saved_alloca_result[325 * i + 324];
      cached_j = i;
    }
  }
  destination_buffer = (__m128i *)&saved_alloca_result[325 * cached_j];
  a3[34] = SR_VEC_LANES(128, destination_buffer[80], i8)[12];
  running_total = loaded_word + selection_flag;
  shifted_bits = *(int *)(a12 + 4LL * (a1[1145] - 1)) >> 6;
  for ( j = 0; j < loaded_word; ++j )
  {
    running_total = (running_total - 1) % 40;
    running_total += running_total < 0 ? 0x28 : 0;
    *(_BYTE *)(a5 + j - loaded_word) = ((SR_VEC_LANES(128, destination_buffer[34], i32)[running_total] >> 9) + 1) >> 1;
    if ( (((int)((shifted_bits * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((shifted_bits * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_3 = (((int)((shifted_bits * (__int64)SR_VEC_LANES(128, destination_buffer[44], i32)[running_total]) >> 16) >> 7) + 1) >> 1;
      else
        shifted_bits_3 = -32768;
      LODWORD(packed_word_bits) = shifted_bits_3;
    }
    else
    {
      LODWORD(packed_word_bits) = 0x7FFF;
    }
    *(_WORD *)(running_total_2 + 2LL * (j - loaded_word)) = packed_word_bits;
    SR_VEC_LANES(128, a2[80], i32)[j + SR_VEC_LANES(128, a2[271], i32)[0] - loaded_word] = SR_VEC_LANES(128, destination_buffer[64], i32)[running_total];
  }
  crt_memcpy(a2 + 240, (__m128i *)((char *)destination_buffer + 4 * a1[1147]), 0x40u);
  crt_memcpy(a2 + 264, destination_buffer + 74, 0x60u);
  SR_VEC_LANES(128, a2[270], i32)[0] = SR_VEC_LANES(128, destination_buffer[80], i32)[0];
  SR_VEC_LANES(128, a2[270], i32)[1] = SR_VEC_LANES(128, destination_buffer[80], i32)[1];
  SR_VEC_LANES(128, a2[270], i32)[2] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  byte_count = 2LL * (int)a1[1148];
  source_buffer = (__m128i *)((char *)a2 + 2 * a1[1146]);
  unused_written_slot_2 = a2;
  crt_memcpy(a2, source_buffer, byte_count);
  byte_count_2 = 4LL * (int)a1[1148];
  source_buffer_2 = (__m128i *)((char *)a2 + 4 * a1[1146] + 1280);
  unused_written_slot_3 = a2 + 80;
  return crt_memcpy(a2 + 80, source_buffer_2, byte_count_2); /* 0x1401C4F87: the result of this call is still in rax at the exit */
}

//----- (00000001401C4FB0) ----------------------------------------------------
__int64            sub_1401C4FB0(__int64 a1)
{
  int i;
  int j;
  int k;

  crt_memset((void *)(uintptr_t)((_WORD *)a1), 0, 0x70u);
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a1 + 4LL * i + 92) = sub_1401BE420(50 / (i + 1), 1u);
  for ( j = 0; j < 4; ++j )
  {
    *(_DWORD *)(a1 + 4LL * j + 60) = 100 * *(_DWORD *)(a1 + 4LL * j + 92);
    *(_DWORD *)(a1 + 4LL * j + 76) = 0x7FFFFFFF / *(_DWORD *)(a1 + 4LL * j + 60);
  }
  *(_DWORD *)(a1 + 108) = 15;
  for ( k = 0; k < 4; ++k )
    *(_DWORD *)(a1 + 4LL * k + 40) = 25600;
  return 0;
}

//----- (00000001401C50E0) ----------------------------------------------------
__int64            sub_1401C50E0(_DWORD *a1, __int64 a2)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  char call_result;
  int shifted_bits;
  int call_result_2;
  int j;
  signed int remaining_bits;
  int i;
  signed int running_total;
  int *saved_alloca_result;
  int shifted_bits_2;
  _DWORD *record_pointer;
  int remaining_bits_2;
  int shifted_bits_3;
  int k;
  __int16 loaded_word;
  int shifted_bits_4;
  int running_total_2;
  int running_total_3;
  int remaining_bits_3;
  int shifted_bits_5;
  int shifted_bits_6;
  int table_value;
  int shifted_bits_7;
  int shifted_bits_8;
  int call_result_3;
  int selection_flag;
  _DWORD *unused_written_slot;
  _DWORD scratch_buffer[4];
  int selection_flag_2;
  int integer_sum;
  int integer_sum_2;
  int integer_sum_3;
  _DWORD scratch_buffer_2[4];
  __int64 unused_local;

  selection_flag = 0;
  record_pointer = a1 + 9;
  shifted_bits_5 = (int)a1[1146] >> 1;
  shifted_bits_4 = (int)a1[1146] >> 2;
  shifted_bits_2 = (int)a1[1146] >> 3;
  selection_flag_2 = 0;
  integer_sum = shifted_bits_4 + shifted_bits_2;
  integer_sum_2 = shifted_bits_2 + shifted_bits_4 + shifted_bits_2;
  integer_sum_3 = shifted_bits_4 + integer_sum_2;
  scaled_index = 2LL * (shifted_bits_5 + shifted_bits_4 + integer_sum_2) + 15;
  if ( scaled_index <= 2LL * (shifted_bits_5 + shifted_bits_4 + integer_sum_2) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  sub_1401BC040(a2, record_pointer, (__int64)&j, (__int64)&j + 2 * integer_sum_3, a1[1146]);
  sub_1401BC040((__int64)saved_alloca_result, record_pointer + 2, (__int64)saved_alloca_result, (__int64)saved_alloca_result + 2 * integer_sum_2, shifted_bits_5);
  sub_1401BC040((__int64)saved_alloca_result, record_pointer + 4, (__int64)saved_alloca_result, (__int64)saved_alloca_result + 2 * integer_sum, shifted_bits_4);
  *((__int16 *)saved_alloca_result + shifted_bits_2 - 1) >>= 1;
  loaded_word = *((_WORD *)saved_alloca_result + shifted_bits_2 - 1);
  for ( i = shifted_bits_2 - 1; i > 0; --i )
  {
    *((__int16 *)saved_alloca_result + i - 1) >>= 1;
    *((_WORD *)saved_alloca_result + i) -= *((_WORD *)saved_alloca_result + i - 1);
  }
  *(_WORD *)saved_alloca_result -= *((_WORD *)record_pointer + 28);
  *((_WORD *)record_pointer + 28) = loaded_word;
  for ( j = 0; j < 4; ++j )
  {
    call_result = sub_1401BE320(4 - j, 3u);
    unused_written_slot = a1;
    shifted_bits_2 = (int)a1[1146] >> call_result;
    shifted_bits_8 = shifted_bits_2 >> 2;
    running_total_2 = 0;
    scratch_buffer[j] = record_pointer[j + 6];
    for ( k = 0; k < 4; ++k )
    {
      running_total = 0;
      for ( i = 0; i < shifted_bits_8; ++i )
      {
        shifted_bits_6 = *((__int16 *)saved_alloca_result + running_total_2 + i + *(&selection_flag_2 + j)) >> 3;
        running_total += (__int16)shifted_bits_6 * (__int16)shifted_bits_6;
      }
      if ( k >= 3 )
      {
        if ( (running_total >> 1) + scratch_buffer[j] >= 0 )
          shifted_bits_7 = scratch_buffer[j] + (running_total >> 1);
        else
          shifted_bits_7 = 0x7FFFFFFF;
        scratch_buffer[j] = shifted_bits_7;
      }
      else
      {
        if ( running_total + scratch_buffer[j] >= 0 )
          table_value = running_total + scratch_buffer[j];
        else
          table_value = 0x7FFFFFFF;
        scratch_buffer[j] = table_value;
      }
      running_total_2 += shifted_bits_8;
    }
    record_pointer[j + 6] = running_total;
  }
  sub_1401DB1D0((__int64)scratch_buffer, (__int64)record_pointer);
  running_total = 0;
  running_total_3 = 0;
  for ( j = 0; j < 4; ++j )
  {
    remaining_bits = scratch_buffer[j] - record_pointer[j + 15];
    if ( remaining_bits <= 0 )
    {
      scratch_buffer_2[j] = 256;
    }
    else
    {
      if ( (scratch_buffer[j] & 0xFF800000) != 0 )
        shifted_bits = scratch_buffer[j] / (((int)record_pointer[j + 15] >> 8) + 1);
      else
        shifted_bits = (scratch_buffer[j] << 8) / (record_pointer[j + 15] + 1);
      scratch_buffer_2[j] = shifted_bits;
      call_result_2 = sub_1401BC2A0(scratch_buffer_2[j]);
      shifted_bits_3 = call_result_2 - 1024;
      running_total += (__int16)(call_result_2 - 1024) * (__int16)(call_result_2 - 1024);
      if ( remaining_bits < 0x100000 )
        shifted_bits_3 = ((__int16)shifted_bits_3 * (__int64)(int)((unsigned int)sub_1401BE4C0(remaining_bits) << 6)) >> 16;
      running_total_3 += ((__int16)shifted_bits_3 * (__int64)dword_14027CC18[j]) >> 16;
    }
  }
  running_total /= 4;
  call_result_3 = (__int16)(3 * sub_1401BE4C0(running_total));
  remaining_bits_2 = sub_1401BC300((unsigned int)((45000LL * (__int16)call_result_3) >> 16) - 128);
  a1[1182] = 2 * sub_1401BC300(running_total_3) - 0x8000;
  remaining_bits = 0;
  for ( j = 0; j < 4; ++j )
    remaining_bits += ((scratch_buffer[j] - record_pointer[j + 15]) >> 4) * (j + 1);
  if ( a1[1146] == 20 * a1[1144] )
    remaining_bits >>= 1;
  if ( remaining_bits > 0 )
  {
    if ( remaining_bits < 0x4000 )
    {
      remaining_bits <<= 16;
      remaining_bits = sub_1401BE4C0(remaining_bits);
      remaining_bits_2 = ((__int16)remaining_bits_2 * (__int64)(remaining_bits + 0x8000)) >> 16;
    }
  }
  else
  {
    remaining_bits_2 >>= 1;
  }
  a1[1133] = sub_1401BE320(remaining_bits_2 >> 7, 0xFFu);
  remaining_bits_3 = (__int16)((unsigned int)((__int16)remaining_bits_2 * remaining_bits_2) >> 16) >> 4;
  if ( a1[1146] == 10 * a1[1144] )
    remaining_bits_3 >>= 1;
  for ( j = 0; j < 4; ++j )
  {
    record_pointer[j + 10] += ((__int16)remaining_bits_3 * (__int64)(scratch_buffer_2[j] - record_pointer[j + 10])) >> 16;
    shifted_bits_3 = 3 * (sub_1401BC2A0(record_pointer[j + 10]) - 1024);
    a1[j + 1178] = sub_1401BC300((shifted_bits_3 - 2048) >> 4);
  }
  return (unsigned int)selection_flag; /* 0x1401C58B7: mov eax, dword ptr [rbp + 0x60] */
}

//----- (00000001401C58E0) ----------------------------------------------------
__int64            sub_1401C58E0(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 unused_local;
  int shifted_bits;
  int shifted_bits_2;
  int table_value;
  int cached_table_value;
  int callee_output_word;
  int scratch_buffer[4];
  __int64 unused_local_2;

  shifted_bits = 0;
  shifted_bits_2 = 0;
  if ( a1[3] )
  {
    shifted_bits = (256 - a1[2]) << 10;
    shifted_bits_2 = shifted_bits >> 16;
    shifted_bits -= shifted_bits >> 16 << 16;
    sub_1401D6BB0((__m128i *)scratch_buffer, (__m128i *)&callee_output_word, shifted_bits_2, shifted_bits);
    if ( a1[3] + a1[2] <= 256 )
    {
      if ( a1[3] + a1[2] >= 0 )
        table_value = a1[3] + a1[2];
      else
        table_value = 0;
      cached_table_value = table_value;
    }
    else
    {
      cached_table_value = 256;
    }
    a1[2] = cached_table_value;
    sub_1401BB2C0(a2, scratch_buffer, &callee_output_word, a1, a2, a3);
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401C5A20) ----------------------------------------------------
__int64            sub_1401C5A20(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  unsigned __int64 byte_count;
  __int64 unused_local;
  int i;
  int shifted_bits;
  __int16 shifted_bits_2;
  BOOL comparison_result;
  BOOL saved_comparison_result;
  void *unused_written_slot;
  __int16 scratch_buffer[16];
  __int16 scratch_buffer_2[16];
  _WORD scratch_buffer_3[16];
  __int64 unused_local_2;

  shifted_bits = ((-268434LL * *(__int16 *)(a1 + 4532)) >> 16) + 3146;
  if ( *(_DWORD *)(a1 + 4580) == 2 )
    shifted_bits += shifted_bits >> 1;
  sub_1401BDFF0(scratch_buffer, a3, *(_DWORD *)(a1 + 4640));
  comparison_result = *(_DWORD *)(a1 + 4632) == 1 && *(char *)(a1 + 4783) < 4;
  saved_comparison_result = comparison_result;
  if ( comparison_result )
  {
    sub_1401C2F40((__int64)scratch_buffer_2, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    sub_1401BDFF0(scratch_buffer_3, scratch_buffer_2, *(_DWORD *)(a1 + 4640));
    shifted_bits_2 = (*(char *)(a1 + 4783) * *(char *)(a1 + 4783)) << 11;
    for ( i = 0; i < *(_DWORD *)(a1 + 4640); ++i )
      scratch_buffer[i] = ((unsigned int)(shifted_bits_2 * (__int16)scratch_buffer_3[i]) >> 16) + (scratch_buffer[i] >> 1);
  }
  sub_1401C5DA0(
    (_BYTE *)(a1 + 4760),
    a3,
    *(__int16 **)(a1 + 4704),
    (__int64)scratch_buffer,
    shifted_bits,
    *(_DWORD *)(a1 + 4660),
    *(char *)(a1 + 4781));
  CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 32), (     char *)a3, *(_DWORD *)(a1 + 4640));
  if ( saved_comparison_result )
  {
    sub_1401C2F40((__int64)scratch_buffer_2, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    CWinApp__ShowAppMessageBox((struct CWinApp *)a2, (     char *)scratch_buffer_2, *(_DWORD *)(a1 + 4640));
  }
  else
  {
    byte_count = 2LL * *(int *)(a1 + 4640);
    unused_written_slot = (void *)a2;
    crt_memcpy((__m128i *)a2, (     __m128i *)(a2 + 32), byte_count);
  }
  return 0; /* no result: rax is residue of the last call */
}

//----- (00000001401C5DA0) ----------------------------------------------------
__int64            sub_1401C5DA0(_BYTE *a1, __int16 *a2, __int16 *a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 record_word_offset;
  void *alloca_result_2;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_3;
  unsigned __int64 record_word_offset_3;
  void *alloca_result_4;
  int loaded_word;
  unsigned int scaled_index_2;
  int call_result;
  unsigned __int64 byte_count;
  int j;
  int i;
  int table_value;
  int loaded_word_2;
  unsigned int unused_written_slot;
  int lookup_index;
  int *saved_alloca_result;
  int unused_written_slot_2;
  int loaded_word_3;
  unsigned __int8 *shifted_bits;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  int *saved_alloca_result_4;
  __int64 loaded_word_4;
  __int64 loaded_word_5;
  void *unused_written_slot_3;
  _BYTE callee_output_word[48];
  _BYTE scratch_buffer[32];
  _WORD scratch_buffer_2[16];
  _WORD scratch_buffer_3[16];
  __int64 unused_local;

  sub_1401BD8C0(a2, *((__int16 **)a3 + 8), a3[1]);
  scaled_index = 4LL * *a3 + 15;
  if ( scaled_index <= 4LL * *a3 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = alloca_result;
  sub_1401C62A0((__int64)&j, (__int64)a2, *((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2), *a3, a3[1]);
  record_word_offset = 4LL * a6 + 15;
  if ( record_word_offset <= 4LL * a6 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result_2;
  sub_1401BD610((__int64)saved_alloca_result_3, (__int64)&j, *a3, a6);
  record_word_offset_2 = 4LL * a6 + 15;
  if ( record_word_offset_2 <= 4LL * a6 )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result_3;
  record_word_offset_3 = 16 * a6 + 15LL;
  if ( record_word_offset_3 <= 16 * a6 )
    record_word_offset_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(record_word_offset_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_4 = alloca_result_4;
  for ( i = 0; i < a6; ++i )
  {
    table_value = saved_alloca_result_2[i];
    loaded_word_4 = a3[1] * table_value + *((_QWORD *)a3 + 1);
    loaded_word_5 = *((_QWORD *)a3 + 2) + 2LL * a3[1] * table_value;
    for ( j = 0; j < a3[1]; ++j )
    {
      *(_WORD *)&callee_output_word[2 * j + 16] = *(unsigned __int8 *)(loaded_word_4 + j) << 7;
      loaded_word_2 = *(__int16 *)(loaded_word_5 + 2LL * j);
      scratch_buffer_3[j] = ((__int16)loaded_word_2 * (__int16)(a2[j] - *(_WORD *)&callee_output_word[2 * j + 16])) >> 14;
      scratch_buffer_2[j] = sub_1401BE550(*(__int16 *)(a4 + 2LL * j), (__int16)loaded_word_2 * (__int16)loaded_word_2, 21);
    }
    sub_1401C6E20((__int64)scratch_buffer, (__int64)callee_output_word, (__int64)a3, table_value);
    loaded_word = sub_1401C64A0(
            &saved_alloca_result_4[4 * i],
            (__int64)scratch_buffer_3,
            (__int64)scratch_buffer_2,
            (__int64)callee_output_word,
            (__int64)scratch_buffer,
            *((_QWORD *)a3 + 7),
            a3[2],
            a3[3],
            a5,
            a3[1]);
    saved_alloca_result[i] = loaded_word;
    shifted_bits = (unsigned __int8 *)(*a3 * (a7 >> 1) + *((_QWORD *)a3 + 3));
    if ( table_value )
      scaled_index_2 = shifted_bits[table_value - 1] - shifted_bits[table_value];
    else
      scaled_index_2 = 256 - *shifted_bits;
    unused_written_slot = scaled_index_2;
    call_result = sub_1401BC2A0(scaled_index_2);
    unused_written_slot_2 = 1024 - call_result;
    saved_alloca_result[i] += (__int16)(a5 >> 2) * (__int16)(1024 - call_result);
  }
  sub_1401BD610((__int64)saved_alloca_result, (__int64)&lookup_index, a6, 1);
  *a1 = saved_alloca_result_2[lookup_index];
  byte_count = a3[1];
  unused_written_slot_3 = a1 + 1;
  crt_memcpy((__m128i *)(a1 + 1), (     __m128i *)&saved_alloca_result_4[4 * lookup_index], byte_count);
  sub_1401C6F70(a2, a1, (__int64)a3);
  loaded_word_3 = *saved_alloca_result;
  return (unsigned int)loaded_word_3; /* 0x1401C6279: mov eax, dword ptr [rbp + 0x24] */
}

//----- (00000001401C62A0) ----------------------------------------------------
__int64            sub_1401C62A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 result;
  int j;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int integer_sum;
  int integer_sum_2;
  signed int i;
  int shifted_bits_5;
  int shifted_bits_6;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    integer_sum = 0;
    shifted_bits_3 = 0;
    for ( j = a6 - 2; j >= 0; j -= 2 )
    {
      shifted_bits = *(__int16 *)(a4 + 2LL * (j + 1))
         * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      if ( shifted_bits - (shifted_bits_3 >> 1) <= 0 )
        shifted_bits_5 = (shifted_bits_3 >> 1) - shifted_bits;
      else
        shifted_bits_5 = shifted_bits - (shifted_bits_3 >> 1);
      integer_sum_2 = shifted_bits_5 + integer_sum;
      shifted_bits_4 = *(__int16 *)(a4 + 2LL * (j + 1))
          * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      shifted_bits_2 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
      if ( shifted_bits_2 - (shifted_bits_4 >> 1) <= 0 )
        shifted_bits_6 = (shifted_bits_4 >> 1) - shifted_bits_2;
      else
        shifted_bits_6 = shifted_bits_2 - (shifted_bits_4 >> 1);
      integer_sum = shifted_bits_6 + integer_sum_2;
      shifted_bits_3 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
    }
    *(_DWORD *)(a1 + 4LL * i) = integer_sum;
    a3 += a6;
    a4 += 2LL * a6;
  }
  return result;
}

//----- (00000001401C64A0) ----------------------------------------------------
__int64            sub_1401C64A0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10)
{
  __int64 unused_local;
  int j;
  __int16 shifted_bits;
  __int16 shifted_bits_2;
  int i;
  int cached_j;
  int selection_flag;
  int loaded_word;
  int cached_j_2;
  int cached_j_3;
  int integer_difference;
  int loaded_word_2;
  int shifted_bits_3;
  int loaded_word_3;
  int table_value;
  int table_value_2;
  int table_value_3;
  int saved_cached_j;
  int cached_j_4;
  int table_value_4;
  __int64 loaded_word_4;
  int unused_written_slot;
  __int64 unused_written_slot_2;
  _DWORD scratch_buffer[62];
  _WORD callee_output_word[40];
  __int64 unused_local_2;

  for ( i = -10; i <= 9; ++i )
  {
    shifted_bits = (_WORD)i << 10;
    shifted_bits_2 = ((_WORD)i << 10) + 1024;
    if ( i <= 0 )
    {
      if ( i )
      {
        shifted_bits += 102;
        if ( i != -1 )
          shifted_bits_2 += 102;
      }
      else
      {
        shifted_bits_2 -= 102;
      }
    }
    else
    {
      shifted_bits -= 102;
      shifted_bits_2 -= 102;
    }
    scratch_buffer[i + 32] = (a7 * shifted_bits) >> 16;
    scratch_buffer[i + 52] = (a7 * shifted_bits_2) >> 16;
  }
  selection_flag = 1;
  scratch_buffer[0] = 0;
  unused_written_slot_2 = 0;
  callee_output_word[0] = 0;
  for ( i = a10 - 1; i >= 0; --i )
  {
    loaded_word_4 = *(__int16 *)(a5 + 2LL * i) + a6;
    loaded_word_3 = *(__int16 *)(a2 + 2LL * i);
    for ( j = 0; j < selection_flag; ++j )
    {
      shifted_bits_3 = ((__int16)callee_output_word[j] * *(unsigned __int8 *)(a4 + i)) >> 8;
      unused_written_slot = loaded_word_3 - shifted_bits_3;
      cached_j = ((__int16)(loaded_word_3 - shifted_bits_3) * a8) >> 16;
      if ( cached_j <= 9 )
      {
        if ( cached_j >= -10 )
          saved_cached_j = cached_j;
        else
          saved_cached_j = -10;
        cached_j_4 = saved_cached_j;
      }
      else
      {
        cached_j_4 = 9;
      }
      cached_j = cached_j_4;
      *((_BYTE *)&callee_output_word[8 * j + 8] + i) = cached_j_4;
      shifted_bits = scratch_buffer[cached_j + 32];
      shifted_bits_2 = scratch_buffer[cached_j + 52];
      shifted_bits += shifted_bits_3;
      shifted_bits_2 += shifted_bits_3;
      callee_output_word[j] = shifted_bits;
      callee_output_word[selection_flag + j] = shifted_bits_2;
      if ( cached_j + 1 < 4 )
      {
        if ( cached_j > -4 )
        {
          loaded_word = *(unsigned __int8 *)(loaded_word_4 + cached_j + 4);
          loaded_word_2 = *(unsigned __int8 *)(loaded_word_4 + cached_j + 5);
        }
        else if ( cached_j == -4 )
        {
          loaded_word = 280;
          loaded_word_2 = *(unsigned __int8 *)(loaded_word_4 + 1);
        }
        else
        {
          loaded_word = -43 * (__int16)cached_j + 108;
          loaded_word_2 = -43 * (__int16)cached_j + 65;
        }
      }
      else if ( cached_j == 3 )
      {
        loaded_word = *(unsigned __int8 *)(loaded_word_4 + 7);
        loaded_word_2 = 280;
      }
      else
      {
        loaded_word = 43 * (__int16)cached_j + 108;
        loaded_word_2 = 43 * (__int16)cached_j + 151;
      }
      table_value_4 = scratch_buffer[j];
      scratch_buffer[j] = (__int16)loaded_word * a9 + *(__int16 *)(a3 + 2LL * i) * (__int16)(loaded_word_3 - shifted_bits) * (__int16)(loaded_word_3 - shifted_bits) + table_value_4;
      integer_difference = loaded_word_3 - shifted_bits_2;
      scratch_buffer[selection_flag + j] = (__int16)loaded_word_2 * a9 + *(__int16 *)(a3 + 2LL * i) * (__int16)integer_difference * (__int16)integer_difference + table_value_4;
    }
    if ( selection_flag > 2 )
    {
      for ( j = 0; j < 4; ++j )
      {
        if ( scratch_buffer[j] <= scratch_buffer[j + 4] )
        {
          scratch_buffer[j + 8] = scratch_buffer[j];
          scratch_buffer[j + 12] = scratch_buffer[j + 4];
          scratch_buffer[j + 16] = j;
        }
        else
        {
          scratch_buffer[j + 12] = scratch_buffer[j];
          scratch_buffer[j + 8] = scratch_buffer[j + 4];
          scratch_buffer[j] = scratch_buffer[j + 8];
          scratch_buffer[j + 4] = scratch_buffer[j + 12];
          shifted_bits = callee_output_word[j];
          callee_output_word[j] = callee_output_word[j + 4];
          callee_output_word[j + 4] = shifted_bits;
          scratch_buffer[j + 16] = j + 4;
        }
      }
      while ( 1 )
      {
        table_value_2 = 0x7FFFFFFF;
        table_value = 0;
        cached_j_2 = 0;
        cached_j_3 = 0;
        for ( j = 0; j < 4; ++j )
        {
          if ( table_value_2 > scratch_buffer[j + 12] )
          {
            table_value_2 = scratch_buffer[j + 12];
            cached_j_2 = j;
          }
          if ( table_value < scratch_buffer[j + 8] )
          {
            table_value = scratch_buffer[j + 8];
            cached_j_3 = j;
          }
        }
        if ( table_value_2 >= table_value )
          break;
        scratch_buffer[cached_j_3 + 16] = scratch_buffer[cached_j_2 + 16] ^ 4;
        scratch_buffer[cached_j_3] = scratch_buffer[cached_j_2 + 4];
        callee_output_word[cached_j_3] = callee_output_word[cached_j_2 + 4];
        scratch_buffer[cached_j_3 + 8] = 0;
        scratch_buffer[cached_j_2 + 12] = 0x7FFFFFFF;
        crt_memcpy((__m128i *)&callee_output_word[8 * cached_j_3 + 8], (     __m128i *)&callee_output_word[8 * cached_j_2 + 8], 0x10u);
      }
      for ( j = 0; j < 4; ++j )
        *((_BYTE *)&callee_output_word[8 * j + 8] + i) += (int)scratch_buffer[j + 16] >> 2;
    }
    else
    {
      for ( j = 0; j < selection_flag; ++j )
        *((_BYTE *)&callee_output_word[8 * selection_flag + 8 + 8 * j] + i) = *((_BYTE *)&callee_output_word[8 * j + 8] + i) + 1;
      selection_flag *= 2;
      for ( j = selection_flag; j < 4; ++j )
        *((_BYTE *)&callee_output_word[8 * j + 8] + i) = *((_BYTE *)&callee_output_word[8 * (j - selection_flag) + 8] + i);
    }
  }
  cached_j = 0;
  table_value_3 = 0x7FFFFFFF;
  for ( j = 0; j < 8; ++j )
  {
    if ( table_value_3 > scratch_buffer[j] )
    {
      table_value_3 = scratch_buffer[j];
      cached_j = j;
    }
  }
  for ( j = 0; j < a10; ++j )
    a1[j] = *((_BYTE *)&callee_output_word[8 * (cached_j & 3) + 8] + j);
  *a1 += cached_j >> 2;
  return (unsigned int)table_value_3; /* 0x1401C6DFB: mov eax, dword ptr [rsp + 0x5c] */
}

//----- (00000001401C6E20) ----------------------------------------------------
__int64            sub_1401C6E20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  unsigned __int8 loaded_word;
  int i;
  unsigned __int8 *buffer_cursor;

  buffer_cursor = (unsigned __int8 *)(*(__int16 *)(a3 + 2) * a4 / 2 + *(_QWORD *)(a3 + 40));
  for ( i = 0; ; i += 2 )
  {
    result = (unsigned int)*(__int16 *)(a3 + 2);
    if ( i >= (int)result )
      break;
    loaded_word = *buffer_cursor++;
    *(_WORD *)(a1 + 2LL * i) = 9 * (((int)loaded_word >> 1) & 7);
    *(_BYTE *)(a2 + i) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + (*(__int16 *)(a3 + 2) - 1) * (loaded_word & 1) + i);
    *(_WORD *)(a1 + 2LL * (i + 1)) = 9 * (((int)loaded_word >> 5) & 7);
    *(_BYTE *)(a2 + i + 1) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + i + (*(__int16 *)(a3 + 2) - 1) * (((int)loaded_word >> 4) & 1) + 1);
  }
  return result;
}

//----- (00000001401C6F70) ----------------------------------------------------
__int64            sub_1401C6F70(__int16 *a1, char *a2, __int64 a3)
{
  __int64 unused_local;
  int i;
  int shifted_bits;
  int saved_shifted_bits;
  int cached_shifted_bits;
  __int64 loaded_word;
  __int64 loaded_word_2;
  _BYTE scratch_buffer[16];
  _WORD scratch_buffer_2[16];
  _BYTE scratch_buffer_3[32];
  __int64 unused_local_2;

  sub_1401C6E20((__int64)scratch_buffer_3, (__int64)scratch_buffer, a3, *a2);
  sub_1401D6F30((__int64)scratch_buffer_2, (__int64)(a2 + 1), (__int64)scratch_buffer, *(_WORD *)(a3 + 4), *(_WORD *)(a3 + 2));
  loaded_word_2 = *(__int16 *)(a3 + 2) * *a2 + *(_QWORD *)(a3 + 8);
  loaded_word = *(_QWORD *)(a3 + 16) + 2LL * *(__int16 *)(a3 + 2) * *a2;
  for ( i = 0; i < *(__int16 *)(a3 + 2); ++i )
  {
    shifted_bits = (*(unsigned __int8 *)(loaded_word_2 + i) << 7) + ((__int16)scratch_buffer_2[i] << 14) / *(__int16 *)(loaded_word + 2LL * i);
    if ( shifted_bits <= 0x7FFF )
    {
      if ( shifted_bits >= 0 )
        saved_shifted_bits = shifted_bits;
      else
        saved_shifted_bits = 0;
      cached_shifted_bits = saved_shifted_bits;
    }
    else
    {
      cached_shifted_bits = 0x7FFF;
    }
    a1[i] = cached_shifted_bits;
  }
  sub_1401BD8C0(a1, *(__int16 **)(a3 + 64), *(__int16 *)(a3 + 2));
  return 0; /* no caller reads the result */
}

//----- (00000001401C7180) ----------------------------------------------------
__int64            sub_1401C7180(_DWORD *a1)
{
  crt_memset((void *)(uintptr_t)(a1), 0, 0x10C0u);
  a1[594] = 1;
  *a1 = 0x10000;
  a1[1048] = sub_1401A13B0();
  sub_1401C9630(a1);
  sub_1401BEA90(a1);
  return 0;
}

//----- (00000001401C71F0) ----------------------------------------------------
__int64            sub_1401C71F0(__int64 a1, int a2, int a3)
{
  unsigned int unused_written_slot;
  int loaded_word;

  unused_written_slot = 0;
  *(_DWORD *)(a1 + 2332) = 5 * (__int16)a2;
  loaded_word = *(__int16 *)(a1 + 2332) * *(__int16 *)(a1 + 2324);
  if ( *(_DWORD *)(a1 + 2316) != a2 || *(_DWORD *)(a1 + 2320) != a3 )
  {
    unused_written_slot = sub_1401BA4E0(a1 + 2448, 1000 * (__int16)a2, a3, 0);
    *(_DWORD *)(a1 + 2320) = a3;
  }
  if ( *(_DWORD *)(a1 + 2316) != a2 || loaded_word != *(_DWORD *)(a1 + 2328) )
  {
    if ( a2 == 8 )
    {
      if ( *(_DWORD *)(a1 + 2324) == 4 )
        *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_140281F84);
    }
    else if ( *(_DWORD *)(a1 + 2324) == 4 )
    {
      *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    if ( *(_DWORD *)(a1 + 2316) != a2 )
    {
      *(_DWORD *)(a1 + 2336) = 20 * (__int16)a2;
      if ( a2 == 8 || a2 == 12 )
      {
        *(_DWORD *)(a1 + 2340) = 10;
        *(_QWORD *)(a1 + 2752) = (uint64)(uintptr_t)(&unk_140282870);
      }
      else
      {
        *(_DWORD *)(a1 + 2340) = 16;
        *(_QWORD *)(a1 + 2752) = (uint64)(uintptr_t)(&unk_140282800);
      }
      switch ( a2 )
      {
        case 16:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_140282538);
          break;
        case 12:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_14028225C);
          break;
        case 8:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_1402821FC);
          break;
      }
      *(_DWORD *)(a1 + 2376) = 1;
      *(_DWORD *)(a1 + 2308) = 100;
      *(_BYTE *)(a1 + 2312) = 10;
      *(_DWORD *)(a1 + 4188) = 0;
      crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1348)), 0, 0x3C0u);
      crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 1284)), 0, 0x40u);
    }
    *(_DWORD *)(a1 + 2316) = a2;
    *(_DWORD *)(a1 + 2328) = loaded_word;
  }
  return unused_written_slot;
}

//----- (00000001401C74B0) ----------------------------------------------------
__int64            sub_1401C74B0(__int64 a1, _DWORD *a2,      __m128i *a3, unsigned int *a4, int a5, int a6, int a7)
{
  void *alloca_result;
  unsigned __int64 masked_bits;
  void *alloca_result_2;
       __m128i *source_buffer;
  _BYTE unused_local[96];
  int unused_written_slot;
  int loaded_word;
       __m128i *saved_alloca_result;
  int loaded_word_2;
  int selection_flag;
  _BYTE *saved_alloca_result_2;
  __int64 unused_written_slot_2;
  __int64 unused_local_2;

  selection_flag = 0;
  loaded_word = *(_DWORD *)(a1 + 2328);
  alloca_result = alloca(144);
  saved_alloca_result = (     __m128i *)alloca_result;
  unused_written_slot = 0;
  if ( !a5 || a5 == 2 && *(_DWORD *)(a1 + 4LL * *(int *)(a1 + 2400) + 2432) == 1 )
  {
    masked_bits = 2LL * (int)((loaded_word + 15) & 0xFFFFFFF0) + 15;
    if ( masked_bits <= 2LL * (int)((loaded_word + 15) & 0xFFFFFFF0) )
      masked_bits = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(masked_bits & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result_2 = alloca_result_2;
    sub_1401C7770(a1, a2, *(_DWORD *)(a1 + 2400), a5, a6);
    sub_1401C92B0(a2, (__int64)saved_alloca_result_2, *(char *)(a1 + 2789), *(char *)(a1 + 2790), *(_DWORD *)(a1 + 2328));
    sub_1401C7DF0(a1, (__int64)saved_alloca_result, a6);
    sub_1401C82D0(a1, (__int64)saved_alloca_result, a3, (__int64)saved_alloca_result_2, a7);
    sub_1401BEB10((_DWORD *)a1, saved_alloca_result, (__int64)a3, 0);
    *(_DWORD *)(a1 + 4184) = 0;
    *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
    *(_DWORD *)(a1 + 2376) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 2789) = *(_BYTE *)(a1 + 4188);
    sub_1401BEB10((_DWORD *)a1, saved_alloca_result, (__int64)a3, 1);
  }
  loaded_word_2 = *(_DWORD *)(a1 + 2336) - *(_DWORD *)(a1 + 2328);
  source_buffer = (     __m128i *)(a1 + 2LL * *(int *)(a1 + 2328) + 1348);
  unused_written_slot_2 = a1 + 1348;
  crt_memcpy((__m128i *)(a1 + 1348), source_buffer, 2LL * loaded_word_2);
  crt_memcpy((__m128i *)(a1 + 2LL * loaded_word_2 + 1348), a3, 2LL * *(int *)(a1 + 2328));
  sub_1401C96E0(a1, (__int64)saved_alloca_result, (__int64)a3, loaded_word);
  sub_1401BEBC0((_DWORD *)a1, (__int64)a3, loaded_word);
  *(_DWORD *)(a1 + 2308) = SR_VEC_PTR_LANES(128, saved_alloca_result, i32)[*(_DWORD *)(a1 + 2324) - 1];
  *a4 = loaded_word;
  return (unsigned int)selection_flag; /* 0x1401C7755: mov eax, dword ptr [rbp + 0x14] */
}

//----- (00000001401C7770) ----------------------------------------------------
__int64            sub_1401C7770(__int64 a1, _DWORD *a2, int a3, int a4, int a5)
{
  __int16 masked_bits;
  __int64 unused_local;
  int masked_bits_2;
  int i;
  int saved_masked_bits;
  int j;
  int selection_flag;
  __int64 unused_written_slot;
  _BYTE scratch_buffer[16];
  _WORD scratch_buffer_2[16];
  __int64 unused_local_2;

  if ( a4 || *(_DWORD *)(a1 + 4LL * a3 + 2416) )
    masked_bits_2 = sub_14019AFE0(a2, (__int64)&unk_140282454, 8) + 2;
  else
    masked_bits_2 = sub_14019AFE0(a2, (__int64)&unk_14028246C, 8);
  *(_BYTE *)(a1 + 2789) = masked_bits_2 >> 1;
  *(_BYTE *)(a1 + 2790) = masked_bits_2 & 1;
  if ( a5 == 2 )
  {
    *(_BYTE *)(a1 + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  }
  else
  {
    *(_BYTE *)(a1 + 2760) = 8 * sub_14019AFE0(a2, (__int64)&unk_140282218 + 8 * *(char *)(a1 + 2789), 8);
    unused_written_slot = 0;
    *(_BYTE *)(a1 + 2760) += sub_14019AFE0(a2, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 2324); ++i )
    *(_BYTE *)(a1 + i + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  *(_BYTE *)(a1 + 2768) = sub_14019AFE0(
                            a2,
                            **(__int16 **)(a1 + 2752) * (*(char *)(a1 + 2789) >> 1)
                          + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 24LL),
                            8);
  sub_1401C6E20((__int64)scratch_buffer_2, (__int64)scratch_buffer, *(_QWORD *)(a1 + 2752), *(char *)(a1 + 2768));
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 2752) + 2LL); ++i )
  {
    masked_bits_2 = sub_14019AFE0(a2, (__int16)scratch_buffer_2[i] + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 48LL), 8);
    if ( masked_bits_2 )
    {
      if ( masked_bits_2 == 8 )
        masked_bits_2 = sub_14019AFE0(a2, (__int64)&unk_140282264, 8) + 8;
    }
    else
    {
      masked_bits_2 = -(int)sub_14019AFE0(a2, (__int64)&unk_140282264, 8);
    }
    *(_BYTE *)(a1 + i + 1 + 2768) = masked_bits_2 - 4;
  }
  if ( *(_DWORD *)(a1 + 2324) == 4 )
    *(_BYTE *)(a1 + 2791) = sub_14019AFE0(a2, (__int64)&unk_1402827F0, 8);
  else
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    selection_flag = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 2408) == 2 )
    {
      masked_bits = sub_14019AFE0(a2, (__int64)&unk_140282290, 8);
      saved_masked_bits = masked_bits;
      if ( masked_bits > 0 )
      {
        saved_masked_bits -= 9;
        *(_WORD *)(a1 + 2786) = saved_masked_bits + *(_WORD *)(a1 + 2412);
        selection_flag = 0;
      }
    }
    if ( selection_flag )
    {
      *(_WORD *)(a1 + 2786) = (*(int *)(a1 + 2316) >> 1) * sub_14019AFE0(a2, (__int64)&unk_140282270, 8);
      *(_WORD *)(a1 + 2786) += sub_14019AFE0(a2, *(_QWORD *)(a1 + 2384), 8);
    }
    *(_WORD *)(a1 + 2412) = *(_WORD *)(a1 + 2786);
    *(_BYTE *)(a1 + 2788) = sub_14019AFE0(a2, *(_QWORD *)(a1 + 2392), 8);
    *(_BYTE *)(a1 + 2792) = sub_14019AFE0(a2, (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
      *(_BYTE *)(a1 + j + 2764) = sub_14019AFE0(a2, (__int64)*(&off_1402825D8 + *(char *)(a1 + 2792)), 8);
    if ( a5 )
      *(_BYTE *)(a1 + 2793) = 0;
    else
      *(_BYTE *)(a1 + 2793) = sub_14019AFE0(a2, (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 2408) = *(char *)(a1 + 2789);
  *(_BYTE *)(a1 + 2794) = sub_14019AFE0(a2, (__int64)&unk_1402821FC, 8);
  return 0; /* no caller reads the result */
}

//----- (00000001401C7DF0) ----------------------------------------------------
__int64            sub_1401C7DF0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 byte_count;
  __int64 unused_local;
  int i;
  int j;
  int loaded_word;
  BOOL comparison_result;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __int64 loaded_word_2;
  __int16 source_buffer[16];
  _WORD scratch_buffer[16];
  __int64 unused_local_2;

  comparison_result = a3 == 2;
  unused_written_slot = a2 + 16;
  sub_1401C2D70(a2 + 16, (char *)(a1 + 2760), (char *)(a1 + 2312), comparison_result, *(_DWORD *)(a1 + 2324));
  sub_1401C6F70(source_buffer, (char *)(a1 + 2768), *(_QWORD *)(a1 + 2752));
  CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 64), (     char *)source_buffer, *(_DWORD *)(a1 + 2340));
  if ( *(_DWORD *)(a1 + 2376) == 1 )
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(char *)(a1 + 2791) >= 4 )
  {
    byte_count = 2LL * *(int *)(a1 + 2340);
    unused_written_slot_2 = a2 + 32;
    crt_memcpy((__m128i *)(a2 + 32), (     __m128i *)(a2 + 64), byte_count);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      scratch_buffer[i] = (((source_buffer[i] - *(__int16 *)(a1 + 2LL * i + 2344)) * *(char *)(a1 + 2791)) >> 2)
             + *(_WORD *)(a1 + 2LL * i + 2344);
    CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 32), (     char *)scratch_buffer, *(_DWORD *)(a1 + 2340));
  }
  crt_memcpy((__m128i *)(a1 + 2344), (     __m128i *)source_buffer, 2LL * *(int *)(a1 + 2340));
  if ( *(_DWORD *)(a1 + 4184) )
  {
    sub_1401BBDE0(a2 + 32, *(_DWORD *)(a1 + 2340), 63570);
    sub_1401BBDE0(a2 + 64, *(_DWORD *)(a1 + 2340), 63570);
  }
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    sub_1401BC700(*(_WORD *)(a1 + 2786), *(_BYTE *)(a1 + 2788), a2, *(_DWORD *)(a1 + 2316), *(_DWORD *)(a1 + 2324));
    loaded_word_2 = (__int64)*(&off_140282768 + *(char *)(a1 + 2792));
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
    {
      loaded_word = *(char *)(a1 + j + 2764);
      for ( i = 0; i < 5; ++i )
        *(_WORD *)(a2 + 2LL * (i + 5 * j) + 96) = *(char *)(loaded_word_2 + i + 5 * loaded_word) << 7;
    }
    loaded_word = *(char *)(a1 + 2793);
    *(_DWORD *)(a2 + 136) = word_140282798[loaded_word];
  }
  else
  {
    crt_memset((void *)(uintptr_t)((_WORD *)a2), 0, 4LL * *(int *)(a1 + 2324));
    crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 96)), 0, 10LL * *(_DWORD *)(a1 + 2324));
    *(_BYTE *)(a1 + 2792) = 0;
    *(_DWORD *)(a2 + 136) = 0;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401C82D0) ----------------------------------------------------
__int64            sub_1401C82D0(__int64 a1, __int64 a2,      __m128i *a3, __int64 a4, int a5)
{
  unsigned __int64 loaded_word;
  __int64 integer_sum;
  void *alloca_result;
  unsigned __int64 loaded_word_2;
  void *alloca_result_2;
  unsigned __int64 loaded_word_3;
  void *alloca_result_3;
  unsigned __int64 loaded_word_4;
  void *alloca_result_4;
  int loaded_word_5;
  int loaded_word_6;
  int unused_written_slot;
  int i;
  int shifted_bits;
  int j;
  __m128i *source_buffer;
  int shifted_bits_2;
  int element_index;
  int running_total;
  int loaded_word_7;
  int loaded_word_8;
  int *saved_running_total;
  int loaded_word_9;
  int shifted_bits_3;
  int loaded_word_10;
  int shifted_bits_4;
  _WORD *record_pointer;
  int *buffer_cursor;
  int cached_shifted_bits;
  int saved_shifted_bits;
  int cached_shifted_bits_2;
  int scaled_index;
  int saved_shifted_bits_2;
  int cached_shifted_bits_3;
  int saved_shifted_bits_3;
  int cached_shifted_bits_4;
  int scaled_index_2;
  __int32 cached_scaled_index;
  int shifted_bits_5;
  int saved_shifted_bits_4;
  BOOL comparison_result;
  int saved_shifted_bits_5;
  int cached_shifted_bits_5;
  int saved_shifted_bits_6;
  int *saved_alloca_result;
  int *running_total_2;
  int shifted_bits_6;
       __m128i *loaded_record_pointer;
  __m128i *source_buffer_2;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  _WORD *record_pointer_2;
  __m128i destination_buffer[2];
  __int64 unused_local;

  loaded_word_7 = 0;
  loaded_word = 2LL * *(int *)(a1 + 2336);
  integer_sum = loaded_word + 15;
  if ( loaded_word + 15 <= loaded_word )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result;
  loaded_word_2 = 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336)) + 15;
  if ( loaded_word_2 <= 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336)) )
    loaded_word_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(loaded_word_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result_2;
  loaded_word_3 = 4LL * *(int *)(a1 + 2332) + 15;
  if ( loaded_word_3 <= 4LL * *(int *)(a1 + 2332) )
    loaded_word_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(loaded_word_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = alloca_result_3;
  loaded_word_4 = 4LL * (*(_DWORD *)(a1 + 2332) + 16) + 15;
  if ( loaded_word_4 <= 4LL * (*(_DWORD *)(a1 + 2332) + 16) )
    loaded_word_4 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(loaded_word_4 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (__m128i *)alloca_result_4;
  shifted_bits_6 = word_1402827F8[2 * (*(char *)(a1 + 2789) >> 1) + *(char *)(a1 + 2790)];
  comparison_result = *(char *)(a1 + 2791) < 4;
  running_total = *(char *)(a1 + 2794);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    running_total = 196314165 * running_total + 907633515;
    *(_DWORD *)(a1 + 4LL * i + 4) = *(__int16 *)(a4 + 2LL * i) << 14;
    if ( *(int *)(a1 + 4LL * i + 4) <= 0 )
    {
      if ( *(int *)(a1 + 4LL * i + 4) < 0 )
        *(_DWORD *)(a1 + 4LL * i + 4) += 1280;
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * i + 4) -= 1280;
    }
    *(_DWORD *)(a1 + 4LL * i + 4) += 16 * shifted_bits_6;
    if ( running_total < 0 )
      *(_DWORD *)(a1 + 4LL * i + 4) = -*(_DWORD *)(a1 + 4LL * i + 4);
    running_total += *(__int16 *)(a4 + 2LL * i);
  }
  crt_memcpy(source_buffer, (     __m128i *)(a1 + 1284), 0x40u);
  running_total_2 = (int *)(a1 + 4);
  loaded_record_pointer = a3;
  element_index = *(_DWORD *)(a1 + 2336);
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    saved_running_total = saved_alloca_result_3;
    source_buffer_2 = (__m128i *)(a2 + 32LL * (j >> 1) + 32);
    crt_memcpy(destination_buffer, source_buffer_2, 2LL * *(int *)(a1 + 2340));
    record_pointer = (_WORD *)(a2 + 10LL * j + 96);
    loaded_word_10 = *(char *)(a1 + 2789);
    shifted_bits_4 = *(int *)(a2 + 4LL * j + 16) >> 6;
    shifted_bits_3 = sub_1401BE820(*(_DWORD *)(a2 + 4LL * j + 16), 47);
    if ( *(_DWORD *)(a2 + 4LL * j + 16) == *(_DWORD *)a1 )
    {
      loaded_word_8 = 0x10000;
    }
    else
    {
      loaded_word_8 = sub_1401BE550(*(_DWORD *)a1, *(_DWORD *)(a2 + 4LL * j + 16), 16);
      for ( i = 0; i < 16; ++i )
        SR_VEC_PTR_LANES(128, source_buffer, i32)[i] = (SR_VEC_PTR_LANES(128, source_buffer, i32)[i] * (__int64)loaded_word_8) >> 16;
    }
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 4LL * j + 16);
    if ( *(_DWORD *)(a1 + 4184) && *(_DWORD *)(a1 + 4188) == 2 && *(_BYTE *)(a1 + 2789) != 2 && j < 2 )
    {
      crt_memset((void *)(uintptr_t)(record_pointer), 0, 0xAu);
      record_pointer[2] = 4096;
      loaded_word_10 = 2;
      *(_DWORD *)(a2 + 4LL * j) = *(_DWORD *)(a1 + 2308);
    }
    if ( loaded_word_10 == 2 )
    {
      loaded_word_7 = *(_DWORD *)(a2 + 4LL * j);
      if ( !j || j == 2 && comparison_result )
      {
        loaded_word_9 = *(_DWORD *)(a1 + 2336) - loaded_word_7 - *(_DWORD *)(a1 + 2340) - 2;
        if ( j == 2 )
          crt_memcpy((__m128i *)(a1 + 2LL * *(int *)(a1 + 2336) + 1348), a3, 4LL * *(_DWORD *)(a1 + 2332));
        loaded_word_5 = *(_DWORD *)(a1 + 2336) - loaded_word_9;
        loaded_word_6 = *(_DWORD *)(a1 + 2332) * j;
        record_pointer_2 = (_WORD *)saved_alloca_result_2 + loaded_word_9;
        unused_written_slot = a5;
        sub_1401BBB40(record_pointer_2, a1 + 2LL * (loaded_word_6 + loaded_word_9) + 1348, SR_VEC_PTR_LANES(128, source_buffer_2, i16), loaded_word_5, *(_DWORD *)(a1 + 2340));
        if ( !j )
          shifted_bits_3 = 4 * ((*(__int16 *)(a2 + 136) * (__int64)shifted_bits_3) >> 16);
        for ( i = 0; i < loaded_word_7 + 2; ++i )
          saved_alloca_result[element_index - i - 1] = (*((__int16 *)saved_alloca_result_2 + *(_DWORD *)(a1 + 2336) - i - 1) * (__int64)shifted_bits_3) >> 16;
      }
      else if ( loaded_word_8 != 0x10000 )
      {
        for ( i = 0; i < loaded_word_7 + 2; ++i )
          saved_alloca_result[element_index - i - 1] = (saved_alloca_result[element_index - i - 1] * (__int64)loaded_word_8) >> 16;
      }
    }
    if ( loaded_word_10 == 2 )
    {
      buffer_cursor = &saved_alloca_result[element_index - loaded_word_7 + 2];
      for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
      {
        shifted_bits_2 = 2;
        shifted_bits_2 = (((__int16)*record_pointer * (__int64)*buffer_cursor) >> 16) + 2;
        shifted_bits_2 += ((__int16)record_pointer[1] * (__int64)*(buffer_cursor - 1)) >> 16;
        shifted_bits_2 += ((__int16)record_pointer[2] * (__int64)*(buffer_cursor - 2)) >> 16;
        shifted_bits_2 += ((__int16)record_pointer[3] * (__int64)*(buffer_cursor - 3)) >> 16;
        shifted_bits_2 += ((__int16)record_pointer[4] * (__int64)*(buffer_cursor - 4)) >> 16;
        ++buffer_cursor;
        saved_running_total[i] = running_total_2[i] + 2 * shifted_bits_2;
        saved_alloca_result[element_index++] = 2 * saved_running_total[i];
      }
    }
    else
    {
      saved_running_total = running_total_2;
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      shifted_bits = *(int *)(a1 + 2340) >> 1;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[0] * (__int64)SR_VEC_LANES(128, source_buffer[3], i32)[i + 3]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[1] * (__int64)SR_VEC_LANES(128, source_buffer[3], i32)[i + 2]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[2] * (__int64)SR_VEC_LANES(128, source_buffer[3], i32)[i + 1]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[3] * (__int64)SR_VEC_LANES(128, source_buffer[3], i32)[i]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[4] * (__int64)SR_VEC_LANES(128, source_buffer[2], i32)[i + 3]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[5] * (__int64)SR_VEC_LANES(128, source_buffer[2], i32)[i + 2]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[6] * (__int64)SR_VEC_LANES(128, source_buffer[2], i32)[i + 1]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[0], i16)[7] * (__int64)SR_VEC_LANES(128, source_buffer[2], i32)[i]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[0] * (__int64)SR_VEC_LANES(128, source_buffer[1], i32)[i + 3]) >> 16;
      shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[1] * (__int64)SR_VEC_LANES(128, source_buffer[1], i32)[i + 2]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[2] * (__int64)SR_VEC_LANES(128, source_buffer[1], i32)[i + 1]) >> 16;
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[3] * (__int64)SR_VEC_LANES(128, source_buffer[1], i32)[i]) >> 16;
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[4] * (__int64)SR_VEC_PTR_LANES(128, source_buffer, i32)[i + 3]) >> 16;
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[5] * (__int64)SR_VEC_PTR_LANES(128, source_buffer, i32)[i + 2]) >> 16;
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[6] * (__int64)SR_VEC_PTR_LANES(128, source_buffer, i32)[i + 1]) >> 16;
        shifted_bits += (SR_VEC_LANES(128, destination_buffer[1], i16)[7] * (__int64)SR_VEC_PTR_LANES(128, source_buffer, i32)[i]) >> 16;
      }
      if ( shifted_bits <= 0x7FFFFFF )
      {
        if ( shifted_bits >= -134217728 )
          saved_shifted_bits_5 = shifted_bits;
        else
          saved_shifted_bits_5 = -134217728;
        cached_shifted_bits_5 = saved_shifted_bits_5;
      }
      else
      {
        cached_shifted_bits_5 = 0x7FFFFFF;
      }
      if ( 16 * cached_shifted_bits_5 + saved_running_total[i] < 0 )
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits_2 = shifted_bits;
          else
            saved_shifted_bits_2 = -134217728;
          cached_shifted_bits_3 = saved_shifted_bits_2;
        }
        else
        {
          cached_shifted_bits_3 = 0x7FFFFFF;
        }
        if ( ((16 * cached_shifted_bits_3) | saved_running_total[i]) < 0 )
        {
          if ( shifted_bits <= 0x7FFFFFF )
          {
            if ( shifted_bits >= -134217728 )
              saved_shifted_bits_3 = shifted_bits;
            else
              saved_shifted_bits_3 = -134217728;
            cached_shifted_bits_4 = saved_shifted_bits_3;
          }
          else
          {
            cached_shifted_bits_4 = 0x7FFFFFF;
          }
          scaled_index_2 = saved_running_total[i] + 16 * cached_shifted_bits_4;
        }
        else
        {
          scaled_index_2 = 0x7FFFFFFF;
        }
        cached_scaled_index = scaled_index_2;
      }
      else
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits_6 = shifted_bits;
          else
            saved_shifted_bits_6 = -134217728;
          cached_shifted_bits = saved_shifted_bits_6;
        }
        else
        {
          cached_shifted_bits = 0x7FFFFFF;
        }
        if ( ((16 * cached_shifted_bits) & saved_running_total[i]) >= 0 )
        {
          if ( shifted_bits <= 0x7FFFFFF )
          {
            if ( shifted_bits >= -134217728 )
              saved_shifted_bits = shifted_bits;
            else
              saved_shifted_bits = -134217728;
            cached_shifted_bits_2 = saved_shifted_bits;
          }
          else
          {
            cached_shifted_bits_2 = 0x7FFFFFF;
          }
          scaled_index = saved_running_total[i] + 16 * cached_shifted_bits_2;
        }
        else
        {
          scaled_index = 0x80000000;
        }
        cached_scaled_index = scaled_index;
      }
      SR_VEC_LANES(128, source_buffer[4], i32)[i] = cached_scaled_index;
      if ( (((int)((shifted_bits_4 * (__int64)SR_VEC_LANES(128, source_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((shifted_bits_4 * (__int64)SR_VEC_LANES(128, source_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          shifted_bits_5 = (((int)((shifted_bits_4 * (__int64)SR_VEC_LANES(128, source_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          shifted_bits_5 = -32768;
        saved_shifted_bits_4 = shifted_bits_5;
      }
      else
      {
        saved_shifted_bits_4 = 0x7FFF;
      }
      SR_VEC_PTR_LANES(128, loaded_record_pointer, i16)[i] = saved_shifted_bits_4;
    }
    crt_memcpy(source_buffer, (__m128i *)((char *)source_buffer + 4 * *(int *)(a1 + 2332)), 0x40u);
    running_total_2 += *(int *)(a1 + 2332);
    loaded_record_pointer = (     __m128i *)((char *)loaded_record_pointer + 2 * *(int *)(a1 + 2332));
  }
  return crt_memcpy((__m128i *)(a1 + 1284), source_buffer, 0x40u); /* 0x1401C9286: the result of this call is still in rax at the exit */
}

//----- (00000001401C92B0) ----------------------------------------------------
__int64            sub_1401C92B0(_DWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int64 unused_local;
  int i;
  int iteration_count;
  int j;
  int masked_bits;
  int k;
  int table_value;
  int shifted_bits;
  _BOOL8 comparison_result;
  __int64 scaled_index;
  __int64 state_address;
  _DWORD iteration_count_2[40];
  __int64 unused_local_2;
  __int16 input_value;

  input_value = a3;
  shifted_bits = sub_14019AFE0(a1, (__int64)&unk_140282458 + 9 * (a3 >> 1), 8);
  iteration_count = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
    ++iteration_count;
  state_address = (__int64)&unk_1402822F0 + 18 * shifted_bits;
  for ( i = 0; i < iteration_count; ++i )
  {
    iteration_count_2[i + 20] = 0;
    for ( iteration_count_2[i] = sub_14019AFE0(a1, state_address, 8);
          iteration_count_2[i] == 17;
          iteration_count_2[i] = sub_14019AFE0(a1, (__int64)&unk_1402822F0 + comparison_result + 162, 8) )
    {
      comparison_result = ++iteration_count_2[i + 20] == 10;
    }
  }
  for ( i = 0; i < iteration_count; ++i )
  {
    if ( (int)iteration_count_2[i] <= 0 )
      crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 32LL * (__int16)i)), 0, 0x20u);
    else
      sub_1401C2340((__int16 *)(a2 + 32LL * (__int16)i), a1, iteration_count_2[i]);
  }
  for ( i = 0; i < iteration_count; ++i )
  {
    if ( (int)iteration_count_2[i + 20] > 0 )
    {
      table_value = iteration_count_2[i + 20];
      scaled_index = a2 + 32LL * (__int16)i;
      for ( j = 0; j < 16; ++j )
      {
        masked_bits = *(__int16 *)(scaled_index + 2LL * j);
        for ( k = 0; k < table_value; ++k )
          masked_bits = sub_14019AFE0(a1, (__int64)&unk_14028213C, 8) + 2 * masked_bits;
        *(_WORD *)(scaled_index + 2LL * j) = masked_bits;
      }
      iteration_count_2[i] |= 32 * table_value;
    }
  }
  return sub_1401C0EF0(a1, a2, a5, input_value, a4, (__int64)iteration_count_2); /* 0x1401C9603: the result of this call is still in rax at the exit */
}

//----- (00000001401C9630) ----------------------------------------------------
_DWORD *           sub_1401C9630(_DWORD *a1)
{
  int i;
  int running_total;
  int integer_quotient;

  integer_quotient = 0x7FFF / (a1[585] + 1);
  running_total = 0;
  for ( i = 0; i < a1[585]; ++i )
  {
    running_total += integer_quotient;
    *((_WORD *)a1 + i + 2038) = running_total;
  }
  a1[1043] = 0;
  a1[1044] = 3176576;
  return a1;
}

//----- (00000001401C96E0) ----------------------------------------------------
__int64            sub_1401C96E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 byte_count;
  unsigned __int64 byte_count_2;
       __m128i *source_buffer;
  unsigned __int64 scaled_index;
  void *alloca_result;
  int i;
  int shifted_bits;
  __m128i *p_i;
  signed int shifted_bits_2;
  __m128i *source_buffer_2;
  signed int shifted_bits_3;
  int saved_shifted_bits;
  int cached_shifted_bits;
  int saved_shifted_bits_2;
  int cached_shifted_bits_2;
  int saved_shifted_bits_3;
  int cached_shifted_bits_3;
  __int32 scaled_index_2;
  int saved_shifted_bits_4;
  int cached_shifted_bits_4;
  int saved_shifted_bits_5;
  int cached_shifted_bits_5;
  __int32 scaled_index_3;
  __int32 cached_scaled_index;
  int shifted_bits_4;
  int saved_shifted_bits_6;
  int shifted_bits_5;
  int saved_shifted_bits_7;
  int shifted_bits_6;
  int saved_shifted_bits_8;
  int loaded_word;
  int saved_loaded_word;
  int loaded_word_2;
  int cached_i;
  __m128i *destination_buffer;
  __m128i *unused_written_slot;
  __m128i *unused_written_slot_2;
  _WORD scratch_buffer[16];
  __int64 unused_local;

  source_buffer_2 = (__m128i *)(a1 + 2796);
  if ( *(_DWORD *)(a1 + 2316) != *(_DWORD *)(a1 + 4180) )
  {
    sub_1401C9630((_DWORD *)a1);
    SR_VEC_LANES(128, source_buffer_2[86], i32)[2] = *(_DWORD *)(a1 + 2316);
  }
  if ( !*(_DWORD *)(a1 + 4184) && !*(_DWORD *)(a1 + 4188) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      SR_VEC_LANES(128, source_buffer_2[80], i16)[i] += (unsigned int)(16348 * (*(__int16 *)(a1 + 2LL * i + 2344) - SR_VEC_LANES(128, source_buffer_2[80], i16)[i])) >> 16;
    loaded_word_2 = 0;
    cached_i = 0;
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
    {
      if ( *(_DWORD *)(a2 + 4LL * i + 16) > loaded_word_2 )
      {
        loaded_word_2 = *(_DWORD *)(a2 + 4LL * i + 16);
        cached_i = i;
      }
    }
    byte_count = 4LL * *(_DWORD *)(a1 + 2332) * (*(_DWORD *)(a1 + 2324) - 1);
    destination_buffer = (__m128i *)((char *)source_buffer_2 + 4 * *(int *)(a1 + 2332));
    crt_memcpy(destination_buffer, source_buffer_2, byte_count);
    byte_count_2 = 4LL * *(int *)(a1 + 2332);
    source_buffer = (     __m128i *)(a1 + 4LL * *(_DWORD *)(a1 + 2332) * cached_i + 4);
    unused_written_slot = source_buffer_2;
    crt_memcpy(source_buffer_2, source_buffer, byte_count_2);
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
      SR_VEC_LANES(128, source_buffer_2[86], i32)[0] += (4634LL * (*(_DWORD *)(a2 + 4LL * i + 16) - SR_VEC_LANES(128, source_buffer_2[86], i32)[0])) >> 16;
  }
  if ( *(_DWORD *)(a1 + 4184) )
  {
    scaled_index = 4LL * (a4 + 16) + 15;
    if ( scaled_index <= 4LL * (a4 + 16) )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)alloca_result;
    shifted_bits_2 = (*(int *)(a1 + 4272) * (__int64)*(__int16 *)(a1 + 4252)) >> 16;
    if ( shifted_bits_2 < 0x200000 && SR_VEC_LANES(128, source_buffer_2[86], i32)[0] <= 0x800000 )
    {
      shifted_bits_2 = (shifted_bits_2 * (__int64)shifted_bits_2) >> 16;
      shifted_bits_2 = ((SR_VEC_LANES(128, source_buffer_2[86], i32)[0] * (__int64)SR_VEC_LANES(128, source_buffer_2[86], i32)[0]) >> 16) - 32 * shifted_bits_2;
      shifted_bits_2 = (unsigned int)sub_1401BE4C0(shifted_bits_2) << 8;
    }
    else
    {
      shifted_bits_2 = (shifted_bits_2 >> 16) * (shifted_bits_2 >> 16);
      shifted_bits_2 = (SR_VEC_LANES(128, source_buffer_2[86], i32)[0] >> 16) * (SR_VEC_LANES(128, source_buffer_2[86], i32)[0] >> 16) - 32 * shifted_bits_2;
      shifted_bits_2 = (unsigned int)sub_1401BE4C0(shifted_bits_2) << 16;
    }
    shifted_bits_3 = shifted_bits_2 >> 6;
    unused_written_slot_2 = p_i + 4;
    sub_1401CA9F0((__int64)SR_VEC_LANES(128, p_i[4], i64), (__int64)source_buffer_2, a4, &SR_VEC_LANES(128, source_buffer_2[86], i32)[1]);
    CWinApp__ShowAppMessageBox((struct CWinApp *)scratch_buffer, SR_VEC_LANES(128, source_buffer_2[80], i8), *(_DWORD *)(a1 + 2340));
    crt_memcpy(p_i, source_buffer_2 + 82, 0x40u);
    for ( i = 0; i < a4; ++i )
    {
      shifted_bits = *(int *)(a1 + 2340) >> 1;
      shifted_bits += (scratch_buffer[0] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 3]) >> 16;
      shifted_bits += (scratch_buffer[1] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 2]) >> 16;
      shifted_bits += (scratch_buffer[2] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 1]) >> 16;
      shifted_bits += (scratch_buffer[3] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i]) >> 16;
      shifted_bits += (scratch_buffer[4] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 3]) >> 16;
      shifted_bits += (scratch_buffer[5] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 2]) >> 16;
      shifted_bits += (scratch_buffer[6] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 1]) >> 16;
      shifted_bits += (scratch_buffer[7] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i]) >> 16;
      shifted_bits += (scratch_buffer[8] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 3]) >> 16;
      shifted_bits += (scratch_buffer[9] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 2]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        shifted_bits += (scratch_buffer[10] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 1]) >> 16;
        shifted_bits += (scratch_buffer[11] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i]) >> 16;
        shifted_bits += (scratch_buffer[12] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 3]) >> 16;
        shifted_bits += (scratch_buffer[13] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 2]) >> 16;
        shifted_bits += (scratch_buffer[14] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 1]) >> 16;
        shifted_bits += (scratch_buffer[15] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i]) >> 16;
      }
      if ( shifted_bits <= 0x7FFFFFF )
      {
        if ( shifted_bits >= -134217728 )
          saved_shifted_bits = shifted_bits;
        else
          saved_shifted_bits = -134217728;
        cached_shifted_bits = saved_shifted_bits;
      }
      else
      {
        cached_shifted_bits = 0x7FFFFFF;
      }
      if ( 16 * cached_shifted_bits + SR_VEC_LANES(128, p_i[4], i32)[i] < 0 )
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits_4 = shifted_bits;
          else
            saved_shifted_bits_4 = -134217728;
          cached_shifted_bits_4 = saved_shifted_bits_4;
        }
        else
        {
          cached_shifted_bits_4 = 0x7FFFFFF;
        }
        if ( ((16 * cached_shifted_bits_4) | SR_VEC_LANES(128, p_i[4], i32)[i]) < 0 )
        {
          if ( shifted_bits <= 0x7FFFFFF )
          {
            if ( shifted_bits >= -134217728 )
              saved_shifted_bits_5 = shifted_bits;
            else
              saved_shifted_bits_5 = -134217728;
            cached_shifted_bits_5 = saved_shifted_bits_5;
          }
          else
          {
            cached_shifted_bits_5 = 0x7FFFFFF;
          }
          scaled_index_3 = SR_VEC_LANES(128, p_i[4], i32)[i] + 16 * cached_shifted_bits_5;
        }
        else
        {
          scaled_index_3 = 0x7FFFFFFF;
        }
        cached_scaled_index = scaled_index_3;
      }
      else
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits_2 = shifted_bits;
          else
            saved_shifted_bits_2 = -134217728;
          cached_shifted_bits_2 = saved_shifted_bits_2;
        }
        else
        {
          cached_shifted_bits_2 = 0x7FFFFFF;
        }
        if ( ((16 * cached_shifted_bits_2) & SR_VEC_LANES(128, p_i[4], i32)[i]) >= 0 )
        {
          if ( shifted_bits <= 0x7FFFFFF )
          {
            if ( shifted_bits >= -134217728 )
              saved_shifted_bits_3 = shifted_bits;
            else
              saved_shifted_bits_3 = -134217728;
            cached_shifted_bits_3 = saved_shifted_bits_3;
          }
          else
          {
            cached_shifted_bits_3 = 0x7FFFFFF;
          }
          scaled_index_2 = SR_VEC_LANES(128, p_i[4], i32)[i] + 16 * cached_shifted_bits_3;
        }
        else
        {
          scaled_index_2 = 0x80000000;
        }
        cached_scaled_index = scaled_index_2;
      }
      SR_VEC_LANES(128, p_i[4], i32)[i] = cached_scaled_index;
      if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          shifted_bits_4 = (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          shifted_bits_4 = -32768;
        saved_shifted_bits_6 = shifted_bits_4;
      }
      else
      {
        saved_shifted_bits_6 = 0x7FFF;
      }
      if ( saved_shifted_bits_6 + *(__int16 *)(a3 + 2LL * i) <= 0x7FFF )
      {
        if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            shifted_bits_5 = (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
          else
            shifted_bits_5 = -32768;
          saved_shifted_bits_7 = shifted_bits_5;
        }
        else
        {
          saved_shifted_bits_7 = 0x7FFF;
        }
        if ( saved_shifted_bits_7 + *(__int16 *)(a3 + 2LL * i) >= -32768 )
        {
          if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
          {
            if ( (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
              shifted_bits_6 = (((int)((shifted_bits_3 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
            else
              shifted_bits_6 = -32768;
            saved_shifted_bits_8 = shifted_bits_6;
          }
          else
          {
            saved_shifted_bits_8 = 0x7FFF;
          }
          loaded_word = saved_shifted_bits_8 + *(__int16 *)(a3 + 2LL * i);
        }
        else
        {
          loaded_word = -32768;
        }
        saved_loaded_word = loaded_word;
      }
      else
      {
        saved_loaded_word = 0x7FFF;
      }
      *(_WORD *)(a3 + 2LL * i) = saved_loaded_word;
    }
    crt_memcpy(source_buffer_2 + 82, (__m128i *)((char *)p_i + 4 * a4), 0x40u);
  }
  else
  {
    crt_memset((void *)(uintptr_t)((__m128i *)SR_VEC_LANES(128, source_buffer_2[82], i16)), 0, 4LL * *(int *)(a1 + 2340));
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401CA330) ----------------------------------------------------
__int64            sub_1401CA330(__int64 a1, _DWORD *a2, int a3, int a4, int a5)
{
  __int64 unused_local;
  int i;
  char *byte_cursor;
  int running_total;
  int j;
  int scaled_index;
  int selection_flag;
  int shifted_bits;
  int shifted_bits_2;
  _WORD scratch_buffer[16];
  _BYTE scratch_buffer_2[16];
  __int64 unused_local_2;

  if ( a4 )
    byte_cursor = (char *)(a1 + 36LL * a3 + 6120);
  else
    byte_cursor = (char *)(a1 + 4752);
  scaled_index = byte_cursor[30] + 2 * byte_cursor[29];
  if ( a4 || scaled_index >= 2 )
    sub_14019A4F0(a2, scaled_index - 2, (__int64)&unk_140282454, 8);
  else
    sub_14019A4F0(a2, scaled_index, (__int64)&unk_14028246C, 8);
  if ( a5 == 2 )
  {
    sub_14019A4F0(a2, *byte_cursor, (__int64)&unk_140282230, 8);
  }
  else
  {
    sub_14019A4F0(a2, *byte_cursor >> 3, (__int64)&unk_140282218 + 8 * byte_cursor[29], 8);
    sub_14019A4F0(a2, *byte_cursor & 7, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    sub_14019A4F0(a2, byte_cursor[i], (__int64)&unk_140282230, 8);
  sub_14019A4F0(a2, byte_cursor[8], **(__int16 **)(a1 + 4704) * (byte_cursor[29] >> 1) + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 24LL), 8);
  sub_1401C6E20((__int64)scratch_buffer, (__int64)scratch_buffer_2, *(_QWORD *)(a1 + 4704), byte_cursor[8]);
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 4704) + 2LL); ++i )
  {
    if ( byte_cursor[i + 9] < 4 )
    {
      if ( byte_cursor[i + 9] > -4 )
      {
        sub_14019A4F0(a2, byte_cursor[i + 9] + 4, (__int16)scratch_buffer[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      }
      else
      {
        sub_14019A4F0(a2, 0, (__int16)scratch_buffer[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
        sub_14019A4F0(a2, -byte_cursor[i + 9] - 4, (__int64)&unk_140282264, 8);
      }
    }
    else
    {
      sub_14019A4F0(a2, 8, (__int16)scratch_buffer[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      sub_14019A4F0(a2, byte_cursor[i + 9] - 4, (__int64)&unk_140282264, 8);
    }
  }
  if ( *(_DWORD *)(a1 + 4580) == 4 )
    sub_14019A4F0(a2, byte_cursor[31], (__int64)&unk_1402827F0, 8);
  if ( byte_cursor[29] == 2 )
  {
    selection_flag = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 5784) == 2 )
    {
      running_total = *((__int16 *)byte_cursor + 13) - *(__int16 *)(a1 + 5788);
      if ( running_total >= -8 && running_total <= 11 )
      {
        running_total += 9;
        selection_flag = 0;
      }
      else
      {
        running_total = 0;
      }
      sub_14019A4F0(a2, running_total, (__int64)&unk_140282290, 8);
    }
    if ( selection_flag )
    {
      shifted_bits = *((__int16 *)byte_cursor + 13) / (*(int *)(a1 + 4576) >> 1);
      shifted_bits_2 = *((__int16 *)byte_cursor + 13) - (__int16)(*(int *)(a1 + 4576) >> 1) * (__int16)shifted_bits;
      sub_14019A4F0(a2, shifted_bits, (__int64)&unk_140282270, 8);
      sub_14019A4F0(a2, shifted_bits_2, *(_QWORD *)(a1 + 4688), 8);
    }
    *(_WORD *)(a1 + 5788) = *((_WORD *)byte_cursor + 13);
    sub_14019A4F0(a2, byte_cursor[28], *(_QWORD *)(a1 + 4696), 8);
    sub_14019A4F0(a2, byte_cursor[32], (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 4580); ++j )
      sub_14019A4F0(a2, byte_cursor[j + 4], (__int64)*(&off_1402825D8 + byte_cursor[32]), 8);
    if ( !a5 )
      sub_14019A4F0(a2, byte_cursor[33], (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 5784) = byte_cursor[29];
  return sub_14019A4F0(a2, byte_cursor[34], (__int64)&unk_1402821FC, 8); /* 0x1401CA9D0: the result of this call is still in rax at the exit */
}

//----- (00000001401CA9F0) ----------------------------------------------------
int *           sub_1401CA9F0(__int64 a1, __int64 a2, int a3, int *a4)
{
  int i;
  int j;
  int loaded_word;

  for ( i = 255; i > a3; i >>= 1 )
    ;
  loaded_word = *a4;
  for ( j = 0; j < a3; ++j )
  {
    loaded_word = 196314165 * loaded_word + 907633515;
    *(_DWORD *)(a1 + 4LL * j) = *(_DWORD *)(a2 + 4LL * (i & (loaded_word >> 24)));
  }
  *a4 = loaded_word;
  return a4;
}

//----- (00000001401CAAA0) ----------------------------------------------------
__int64            sub_1401CAAA0(_DWORD *a1)
{
  *a1 = 20264;
  return 0;
}

//----- (00000001401CAAD0) ----------------------------------------------------
__int64            sub_1401CAAD0(__int64 a1, int a2, _DWORD *a3)
{
  int running_total;
  int i;

  running_total = 0;
  crt_memset((void *)(uintptr_t)((_WORD *)a1), 0, 0x4F28u);
  for ( i = 0; i < 2; ++i )
    running_total += sub_1401D26F0((_DWORD *)(10088LL * i + a1), a2);
  *(_DWORD *)(a1 + 20240) = 1;
  *(_DWORD *)(a1 + 20244) = 1;
  return (unsigned int)sub_1401D68F0(a1, a3) + running_total;
}

//----- (00000001401CABA0) ----------------------------------------------------
__int64            sub_1401CABA0(
             __m128i *a1,
        int *a2,
             __m128i *a3,
        int a4,
        unsigned __int8 **a5,
        int *a6,
        int a7,
        int a8)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  int masked_bits;
  int call_result;
  int masked_bits_2;
  int call_result_2;
  int masked_bits_3;
  char loaded_word;
  __int32 call_result_3;
  int call_result_4;
  __int8 *state_address;
  __int8 *state_address_2;
  int i;
       __m128i *source_buffer;
  int j;
  int running_total;
  int remaining_amount;
  int integer_quotient;
  __int32 saved_comparison_result;
  int remaining_amount_2;
  int option_flags;
  _BYTE scratch_buffer[4];
  int record_word_offset;
  int remaining_amount_3;
  int iteration_count;
  int option_flags_2;
  int saved_shifted_bits;
  void *p_i;
  __int32 scaled_index_2;
  int saved_remaining_amount;
  int unused_written_slot;
  unsigned int table_value;
  __int32 comparison_result;
  __int32 scaled_index_3;
  int scaled_index_4;
  BOOL comparison_result_2;
  int selection_code;
  int comparison_result_3;
  int saved_comparison_result_2;
  int comparison_result_4;
  int saved_comparison_result_3;
  int cached_comparison_result;
  BOOL comparison_result_5;
  BOOL unused_written_slot_2;
  __int32 table_value_2;
  __int32 cached_table_value;
  BOOL table_value_3;
  int table_value_4;
  int table_value_5;
  int table_value_6;
  BOOL table_value_7;
  int shifted_bits;
  unsigned int unused_written_slot_3;
  __int32 table_value_8;
  int unused_written_slot_4;
  __int32 scaled_index_5;
  int unused_written_slot_5;
  __int32 shifted_bits_2;
  __int32 integer_quotient_2;
  BOOL condition_flag;
  int callee_output_word[2];
  __int64 unused_written_slot_6;
  __int64 unused_written_slot_7;
  __int8 *unused_written_slot_8;
  _DWORD scratch_buffer_2[5];
  __int64 unused_local;

  table_value_5 = 0;
  table_value_6 = 0;
  running_total = 0;
  integer_quotient = 0;
  source_buffer = a1;
  if ( a2[17] )
  {
    SR_VEC_LANES(128, source_buffer[291], i32)[2] = 1;
    SR_VEC_LANES(128, source_buffer[922], i32)[0] = 1;
  }
  SR_VEC_LANES(128, source_buffer[990], i32)[3] = 0;
  SR_VEC_LANES(128, source_buffer[360], i32)[1] = 0;
  running_total = sub_1401C1090(a2);
  if ( !running_total )
  {
    a2[22] = 0;
    if ( a2[1] > SR_VEC_LANES(128, source_buffer[1265], i32)[1] )
    {
      running_total += sub_1401D26F0(&SR_VEC_LANES(128, source_buffer[630], i32)[2], SR_VEC_LANES(128, source_buffer[319], i32)[1]);
      crt_memset((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, source_buffer[1261], i16)), 0, 4u);
      crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, source_buffer[1261], i16)[4]), 0, 4u);
      SR_VEC_LANES(128, source_buffer[1261], i32)[3] = 0;
      SR_VEC_LANES(128, source_buffer[1262], i32)[0] = 1;
      SR_VEC_LANES(128, source_buffer[1262], i32)[1] = 0;
      SR_VEC_LANES(128, source_buffer[1262], i32)[2] = 1;
      SR_VEC_LANES(128, source_buffer[1262], i16)[7] = 0;
      SR_VEC_LANES(128, source_buffer[1262], i16)[6] = 0x4000;
      if ( SR_VEC_LANES(128, source_buffer[1265], i32)[0] == 2 )
      {
        crt_memcpy((__m128i *)&SR_VEC_LANES(128, source_buffer[992], u64)[1], source_buffer + 362, 0x130u);
        crt_memcpy((__m128i *)&SR_VEC_LANES(128, source_buffer[630], u64)[1], source_buffer, 8u);
      }
    }
    table_value_7 = a2[6] != SR_VEC_LANES(128, source_buffer[288], i32)[1] || SR_VEC_LANES(128, source_buffer[1265], i32)[1] != a2[1];
    condition_flag = table_value_7;
    SR_VEC_LANES(128, source_buffer[1265], i32)[0] = *a2;
    SR_VEC_LANES(128, source_buffer[1265], i32)[1] = a2[1];
    record_word_offset = 100 * a4 / a2[2];
    if ( record_word_offset <= 1 )
      shifted_bits = 1;
    else
      shifted_bits = record_word_offset >> 1;
    saved_shifted_bits = shifted_bits;
    iteration_count = 0;
    if ( a7 )
    {
      if ( record_word_offset != 1 )
        return (unsigned int)-101; /* 0x1401CAEE7: mov eax, 0xffffff9b */
      if ( a7 == 2 )
      {
        qmemcpy(scratch_buffer_2, &source_buffer[1], sizeof(scratch_buffer_2));
        scratch_buffer_2[4] = SR_VEC_LANES(128, source_buffer[286], i32)[0];
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        running_total = sub_1401D26F0(&SR_VEC_PTR_LANES(128, source_buffer, i32)[2522 * i], SR_VEC_LANES(128, source_buffer[319], i32)[2522 * i + 1]);
        if ( a7 == 2 )
          qmemcpy((char *)&source_buffer[1] + 10088 * i, scratch_buffer_2, 0x14u);
      }
      table_value_5 = a2[6];
      a2[6] = 10;
      table_value_6 = a2[9];
      a2[9] = 0;
      for ( i = 0; i < a2[1]; ++i )
      {
        SR_VEC_LANES(128, source_buffer[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, source_buffer[292], i32)[2522 * i + 2] = 1;
      }
    }
    else if ( a2[2] * record_word_offset != 100 * a4 || a4 < 0 || 1000 * a4 > a2[2] * a2[6] )
    {
      return (unsigned int)-101; /* 0x1401CB072: mov eax, 0xffffff9b */
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i == 1 )
        table_value = SR_VEC_LANES(128, source_buffer[286], u32)[0];
      else
        table_value = 0;
      unused_written_slot_3 = table_value;
      running_total = sub_1401D2790(&SR_VEC_PTR_LANES(128, source_buffer, i32)[2522 * i], a2, SR_VEC_LANES(128, source_buffer[1266], i32)[0], i, table_value);
      if ( running_total )
        return (unsigned int)running_total; /* 0x1401CB142: mov eax, dword ptr [rbp + 0x14] */
      if ( SR_VEC_LANES(128, source_buffer[291], i32)[2522 * i + 2] || condition_flag )
      {
        for ( j = 0; j < SR_VEC_LANES(128, source_buffer[360], i32)[0]; ++j )
          SR_VEC_LANES(128, source_buffer[296], i32)[2522 * i + 1 + j] = 0;
      }
      SR_VEC_LANES(128, source_buffer[381], i32)[2522 * i + 1] = SR_VEC_LANES(128, source_buffer[381], i32)[2522 * i];
    }
    scaled_index_2 = SR_VEC_LANES(128, source_buffer[286], i32)[0] * 10 * record_word_offset;
    integer_quotient_2 = SR_VEC_LANES(128, source_buffer[284], i32)[3] * scaled_index_2 / (1000 * SR_VEC_LANES(128, source_buffer[286], i32)[0]);
    scaled_index = 2LL * integer_quotient_2 + 15;
    if ( scaled_index <= 2LL * integer_quotient_2 )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = alloca_result;
    while ( 1 )
    {
      saved_comparison_result = SR_VEC_LANES(128, source_buffer[286], i32)[2] - SR_VEC_LANES(128, source_buffer[359], i32)[3];
      comparison_result = saved_comparison_result >= scaled_index_2 ? scaled_index_2 : saved_comparison_result;
      saved_comparison_result = comparison_result;
      integer_quotient = SR_VEC_LANES(128, source_buffer[284], i32)[3] * comparison_result / (1000 * SR_VEC_LANES(128, source_buffer[286], i32)[0]);
      if ( *a2 == 2 && a2[1] == 2 )
      {
        table_value_8 = SR_VEC_LANES(128, source_buffer[360], i32)[1];
        for ( i = 0; i < integer_quotient; ++i )
          *((_WORD *)p_i + i) = SR_VEC_PTR_LANES(128, a3, i16)[2 * i];
        if ( SR_VEC_LANES(128, source_buffer[1265], i32)[2] == 1 && !table_value_8 )
          crt_memcpy((__m128i *)&SR_VEC_LANES(128, source_buffer[992], u64)[1], source_buffer + 362, 0x130u);
        masked_bits = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, source_buffer[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, source_buffer[319], u64)[1] + 2 * SR_VEC_LANES(128, source_buffer[359], i32)[3] + 4),
                (     __m128i *)p_i,
                integer_quotient);
        running_total += masked_bits;
        SR_VEC_LANES(128, source_buffer[359], i32)[3] += saved_comparison_result;
        saved_comparison_result = SR_VEC_LANES(128, source_buffer[917], i32)[0] - SR_VEC_LANES(128, source_buffer[990], i32)[1];
        scaled_index_3 = saved_comparison_result >= SR_VEC_LANES(128, source_buffer[916], i32)[2] * 10 * record_word_offset ? SR_VEC_LANES(128, source_buffer[916], i32)[2] * 10 * record_word_offset : saved_comparison_result;
        saved_comparison_result = scaled_index_3;
        for ( i = 0; i < integer_quotient; ++i )
          *((_WORD *)p_i + i) = SR_VEC_PTR_LANES(128, a3, i16)[2 * i + 1];
        call_result = sub_1401BAA30(
                &SR_VEC_LANES(128, source_buffer[992], i32)[2],
                (__m128i *)((char *)SR_VEC_LANES(128, source_buffer[950], i64) + 2 * SR_VEC_LANES(128, source_buffer[990], i32)[1] + 4),
                (     __m128i *)p_i,
                integer_quotient);
        running_total += call_result;
        SR_VEC_LANES(128, source_buffer[990], i32)[1] += saved_comparison_result;
      }
      else if ( *a2 == 2 && a2[1] == 1 )
      {
        for ( i = 0; i < integer_quotient; ++i )
        {
          scaled_index_4 = SR_VEC_PTR_LANES(128, a3, i16)[2 * i + 1] + SR_VEC_PTR_LANES(128, a3, i16)[2 * i];
          *((_WORD *)p_i + i) = (scaled_index_4 & 1) + (scaled_index_4 >> 1);
        }
        masked_bits_2 = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, source_buffer[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, source_buffer[319], u64)[1] + 2 * SR_VEC_LANES(128, source_buffer[359], i32)[3] + 4),
                (     __m128i *)p_i,
                integer_quotient);
        running_total += masked_bits_2;
        if ( SR_VEC_LANES(128, source_buffer[1265], i32)[2] == 2 && !SR_VEC_LANES(128, source_buffer[360], i32)[1] )
        {
          call_result_2 = sub_1401BAA30(
                  &SR_VEC_LANES(128, source_buffer[992], i32)[2],
                  (__m128i *)((char *)SR_VEC_LANES(128, source_buffer[950], i64) + 2 * SR_VEC_LANES(128, source_buffer[990], i32)[1] + 4),
                  (     __m128i *)p_i,
                  integer_quotient);
          running_total += call_result_2;
          for ( i = 0; i < SR_VEC_LANES(128, source_buffer[286], i32)[2]; ++i )
            SR_VEC_LANES(128, source_buffer[319], i16)[SR_VEC_LANES(128, source_buffer[359], i32)[3] + 6 + i] = (SR_VEC_LANES(128, source_buffer[950], i16)[SR_VEC_LANES(128, source_buffer[990], i32)[1] + 2 + i]
                                                               + SR_VEC_LANES(128, source_buffer[319], i16)[SR_VEC_LANES(128, source_buffer[359], i32)[3] + 6 + i]) >> 1;
        }
        SR_VEC_LANES(128, source_buffer[359], i32)[3] += saved_comparison_result;
      }
      else
      {
        crt_memcpy((__m128i *)p_i, a3, 2LL * integer_quotient);
        masked_bits_3 = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, source_buffer[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, source_buffer[319], u64)[1] + 2 * SR_VEC_LANES(128, source_buffer[359], i32)[3] + 4),
                (     __m128i *)p_i,
                integer_quotient);
        running_total += masked_bits_3;
        SR_VEC_LANES(128, source_buffer[359], i32)[3] += saved_comparison_result;
      }
      a3 = (     __m128i *)((char *)a3 + 2 * *a2 * integer_quotient);
      a4 -= integer_quotient;
      SR_VEC_LANES(128, source_buffer[1266], i32)[0] = 0;
      if ( SR_VEC_LANES(128, source_buffer[359], i32)[3] < SR_VEC_LANES(128, source_buffer[286], i32)[2] )
        break;
      if ( !SR_VEC_LANES(128, source_buffer[360], i32)[1] && !a7 )
      {
        scratch_buffer[0] = 0;
        scratch_buffer[1] = 0;
        loaded_word = *((_BYTE *)a2 + 4) * (SR_VEC_LANES(128, source_buffer[360], i8)[0] + 1);
        unused_written_slot_4 = 256;
        scratch_buffer[0] = -(char)(256 >> loaded_word);
        sub_14019A4F0(a5, 0, (__int64)scratch_buffer, 8);
        for ( i = 0; i < a2[1]; ++i )
        {
          option_flags_2 = 0;
          for ( j = 0; j < SR_VEC_LANES(128, source_buffer[360], i32)[2522 * i]; ++j )
          {
            unused_written_slot_6 = j;
            option_flags_2 |= SR_VEC_LANES(128, source_buffer[296], i32)[2522 * i + 1 + j] << j;
          }
          comparison_result_2 = option_flags_2 > 0;
          SR_VEC_LANES(128, source_buffer[296], i8)[10088 * i + 3] = comparison_result_2;
          if ( option_flags_2 && SR_VEC_LANES(128, source_buffer[360], i32)[2522 * i] > 1 )
            sub_14019A4F0(a5, option_flags_2 - 1, (__int64)*(&off_1402827E0 + SR_VEC_LANES(128, source_buffer[360], i32)[2522 * i] - 2), 8);
        }
        for ( j = 0; j < SR_VEC_LANES(128, source_buffer[360], i32)[0]; ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( SR_VEC_LANES(128, source_buffer[296], i32)[2522 * i + 1 + j] )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0940(a5, (__int64)SR_VEC_LANES(128, source_buffer[1263], i64) + 6 * j + 2);
                if ( !SR_VEC_LANES(128, source_buffer[926], i32)[j + 3] )
                  sub_1401C0A60(a5, SR_VEC_LANES(128, source_buffer[1264], i8)[j + 4]);
              }
              if ( j > 0 && SR_VEC_LANES(128, source_buffer[296], i32)[2522 * i + j] )
                selection_code = 2;
              else
                selection_code = 0;
              sub_1401CA330((__int64)&SR_VEC_PTR_LANES(128, source_buffer, i64)[1261 * i], a5, j, 1, selection_code);
              sub_1401C1790(
                a5,
                SR_VEC_LANES(128, source_buffer[384], i8)[10088 * i + 5 + 36 * j],
                SR_VEC_LANES(128, source_buffer[384], i8)[10088 * i + 6 + 36 * j],
                (__int64)&SR_VEC_LANES(128, source_buffer[389], i64)[1261 * i + 40 * j] + 4,
                SR_VEC_LANES(128, source_buffer[286], i32)[2522 * i + 2]);
            }
          }
        }
        for ( i = 0; i < a2[1]; ++i )
          crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, source_buffer[296], i16)[5044 * i + 2]), 0, 0xCu);
        call_result_3 = sub_14019A0A0((__int64)a5);
        SR_VEC_LANES(128, source_buffer[1264], i32)[2] = call_result_3;
      }
      sub_1401D1380((__int64)source_buffer);
      remaining_amount_3 = a2[6] * a2[7] / 1000;
      if ( !a7 )
        remaining_amount_3 -= SR_VEC_LANES(128, source_buffer[1264], i32)[2];
      unused_written_slot_7 = 0;
      remaining_amount_3 /= SR_VEC_LANES(128, source_buffer[360], i32)[0];
      if ( a2[6] == 10 )
        remaining_amount = 100 * (__int16)remaining_amount_3;
      else
        remaining_amount = 50 * (__int16)remaining_amount_3;
      remaining_amount -= 1000 * SR_VEC_LANES(128, source_buffer[1264], i32)[3] / 500;
      if ( !a7 && SR_VEC_LANES(128, source_buffer[360], i32)[1] > 0 )
      {
        call_result_4 = sub_14019A0A0((__int64)a5);
        scaled_index_5 = call_result_4 - SR_VEC_LANES(128, source_buffer[1264], i32)[2] - SR_VEC_LANES(128, source_buffer[360], i32)[1] * remaining_amount_3;
        remaining_amount -= 1000 * scaled_index_5 / 500;
      }
      if ( a2[7] <= 5000 )
      {
        if ( remaining_amount <= 5000 )
        {
          comparison_result_4 = remaining_amount >= a2[7] ? remaining_amount : a2[7];
          saved_comparison_result_3 = comparison_result_4;
        }
        else
        {
          saved_comparison_result_3 = 5000;
        }
        cached_comparison_result = saved_comparison_result_3;
      }
      else
      {
        if ( remaining_amount <= a2[7] )
        {
          comparison_result_3 = remaining_amount >= 5000 ? remaining_amount : 5000;
          saved_comparison_result_2 = comparison_result_3;
        }
        else
        {
          saved_comparison_result_2 = a2[7];
        }
        cached_comparison_result = saved_comparison_result_2;
      }
      remaining_amount = cached_comparison_result;
      if ( a2[1] == 2 )
      {
        state_address = &SR_VEC_LANES(128, source_buffer[1264], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 4];
        state_address_2 = &SR_VEC_LANES(128, source_buffer[1263], i8)[6 * SR_VEC_LANES(128, source_buffer[360], i32)[1] + 2];
        unused_written_slot_8 = &SR_VEC_LANES(128, source_buffer[319], i8)[12];
        sub_1401BEE10(
          SR_VEC_LANES(128, source_buffer[1261], i16),
          (__int64)&SR_VEC_LANES(128, source_buffer[319], i64)[1] + 4,
          (__int64)SR_VEC_LANES(128, source_buffer[950], i64) + 4,
          (__int64)state_address_2,
          state_address,
          callee_output_word,
          remaining_amount,
          SR_VEC_LANES(128, source_buffer[283], i32)[1],
          a2[15],
          SR_VEC_LANES(128, source_buffer[286], i32)[0],
          SR_VEC_LANES(128, source_buffer[286], i32)[2]);
        if ( SR_VEC_LANES(128, source_buffer[1264], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 4] )
        {
          SR_VEC_LANES(128, source_buffer[926], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 8] = 0;
        }
        else
        {
          if ( SR_VEC_LANES(128, source_buffer[1266], i32)[1] == 1 )
          {
            crt_memset((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, source_buffer[1080], i16)), 0, 0xCu);
            crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, source_buffer[639], i16)[6]), 0, 0x1100u);
            crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, source_buffer[911], i16)[6]), 0, 0x20u);
            crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, source_buffer[631], i16)[4]), 0, 8u);
            SR_VEC_LANES(128, source_buffer[914], i32)[2] = 100;
            SR_VEC_LANES(128, source_buffer[910], i32)[1] = 100;
            SR_VEC_LANES(128, source_buffer[1080], i8)[0] = 10;
            SR_VEC_LANES(128, source_buffer[914], i8)[5] = 0;
            SR_VEC_LANES(128, source_buffer[911], i32)[1] = 0x10000;
            SR_VEC_LANES(128, source_buffer[922], i32)[0] = 1;
          }
          sub_1401D1630((__int64)&SR_VEC_LANES(128, source_buffer[630], i64)[1], a8);
        }
        if ( !a7 )
        {
          sub_1401C0940(a5, (__int64)SR_VEC_LANES(128, source_buffer[1263], i64) + 6 * SR_VEC_LANES(128, source_buffer[360], i32)[1] + 2);
          if ( !SR_VEC_LANES(128, source_buffer[926], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 8] )
            sub_1401C0A60(a5, SR_VEC_LANES(128, source_buffer[1264], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 4]);
        }
      }
      else
      {
        crt_memcpy((__m128i *)&SR_VEC_LANES(128, source_buffer[319], u64)[1], (     __m128i *)((char *)source_buffer + 20180), 4u);
        crt_memcpy(
          (__m128i *)((char *)SR_VEC_LANES(128, source_buffer[1261], i64) + 4),
          (     __m128i *)((char *)source_buffer + 2 * SR_VEC_LANES(128, source_buffer[286], i32)[2] + 5112),
          4u);
      }
      sub_1401D1630((__int64)source_buffer, a8);
      for ( i = 0; i < a2[1]; ++i )
      {
        remaining_amount_2 = a2[14];
        if ( saved_shifted_bits != 2 || iteration_count )
        {
          if ( saved_shifted_bits == 3 )
          {
            if ( iteration_count )
            {
              if ( iteration_count == 1 )
                remaining_amount_2 = 3 * remaining_amount_2 / 4;
            }
            else
            {
              remaining_amount_2 = 2 * remaining_amount_2 / 5;
            }
          }
        }
        else
        {
          remaining_amount_2 = 3 * remaining_amount_2 / 5;
        }
        comparison_result_5 = a2[13] && iteration_count == saved_shifted_bits - 1;
        unused_written_slot_2 = comparison_result_5;
        if ( a2[1] == 1 )
        {
          saved_remaining_amount = remaining_amount;
        }
        else
        {
          saved_remaining_amount = callee_output_word[i];
          if ( !i && callee_output_word[1] > 0 )
          {
            unused_written_slot_2 = 0;
            unused_written_slot_5 = 2 * saved_shifted_bits;
            remaining_amount_2 -= a2[14] / (2 * saved_shifted_bits);
          }
        }
        if ( saved_remaining_amount > 0 )
        {
          sub_1401C1660(&SR_VEC_PTR_LANES(128, source_buffer, i32)[2522 * i], saved_remaining_amount);
          if ( SR_VEC_LANES(128, source_buffer[360], i32)[1] - i > 0 )
          {
            if ( i > 0 && SR_VEC_LANES(128, source_buffer[1266], i32)[1] )
              unused_written_slot = 1;
            else
              unused_written_slot = 2;
          }
          else
          {
            unused_written_slot = 0;
          }
          running_total = sub_1401D1780();
        }
        SR_VEC_LANES(128, source_buffer[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, source_buffer[359], i32)[2522 * i + 3] = 0;
        ++SR_VEC_LANES(128, source_buffer[360], i32)[2522 * i + 1];
      }
      SR_VEC_LANES(128, source_buffer[1266], i32)[1] = SR_VEC_LANES(128, source_buffer[1264], i8)[SR_VEC_LANES(128, source_buffer[360], i32)[1] + 3];
      if ( *a6 > 0 && SR_VEC_LANES(128, source_buffer[360], i32)[1] == SR_VEC_LANES(128, source_buffer[360], i32)[0] )
      {
        option_flags = 0;
        for ( i = 0; i < a2[1]; ++i )
        {
          for ( j = 0; j < SR_VEC_LANES(128, source_buffer[360], i32)[2522 * i]; ++j )
          {
            option_flags *= 2;
            option_flags |= (char)SR_VEC_LANES(128, source_buffer[296], u8)[10088 * i + j];
          }
          option_flags *= 2;
          option_flags |= (char)SR_VEC_LANES(128, source_buffer[296], u8)[10088 * i + 3];
        }
        if ( !a7 )
          sub_14019A7C0(a5, option_flags, *((_BYTE *)a2 + 4) * (SR_VEC_LANES(128, source_buffer[360], i8)[0] + 1));
        if ( SR_VEC_LANES(128, source_buffer[381], i32)[1] && (a2[1] == 1 || SR_VEC_LANES(128, source_buffer[1011], i32)[3]) )
          *a6 = 0;
        SR_VEC_LANES(128, source_buffer[1264], i32)[3] += 8 * *a6;
        SR_VEC_LANES(128, source_buffer[1264], i32)[3] -= a2[6] * a2[7] / 1000;
        if ( SR_VEC_LANES(128, source_buffer[1264], i32)[3] <= 10000 )
        {
          if ( SR_VEC_LANES(128, source_buffer[1264], i32)[3] >= 0 )
            table_value_2 = SR_VEC_LANES(128, source_buffer[1264], i32)[3];
          else
            table_value_2 = 0;
          cached_table_value = table_value_2;
        }
        else
        {
          cached_table_value = 10000;
        }
        SR_VEC_LANES(128, source_buffer[1264], i32)[3] = cached_table_value;
        shifted_bits_2 = ((3188LL * SR_VEC_LANES(128, source_buffer[1265], i16)[6]) >> 16) + 13;
        if ( SR_VEC_LANES(128, source_buffer[283], i32)[1] >= shifted_bits_2 )
        {
          SR_VEC_LANES(128, source_buffer[1266], i32)[0] = 0;
          SR_VEC_LANES(128, source_buffer[1265], i32)[3] += a2[6];
        }
        else
        {
          SR_VEC_LANES(128, source_buffer[1266], i32)[0] = 1;
          SR_VEC_LANES(128, source_buffer[1265], i32)[3] = 0;
        }
      }
      if ( !a4 )
        break;
      ++iteration_count;
    }
    SR_VEC_LANES(128, source_buffer[1265], i32)[2] = a2[1];
    a2[19] = SR_VEC_LANES(128, source_buffer[1266], i32)[0];
    table_value_3 = SR_VEC_LANES(128, source_buffer[286], i32)[0] == 16 && !SR_VEC_LANES(128, source_buffer[1], i32)[3];
    a2[20] = table_value_3;
    a2[18] = 1000 * SR_VEC_LANES(128, source_buffer[286], i16)[0];
    if ( a2[15] )
      table_value_4 = 0;
    else
      table_value_4 = SR_VEC_LANES(128, source_buffer[1262], i16)[6];
    a2[21] = table_value_4;
    if ( a7 )
    {
      a2[6] = table_value_5;
      a2[9] = table_value_6;
      for ( i = 0; i < a2[1]; ++i )
      {
        SR_VEC_LANES(128, source_buffer[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, source_buffer[292], i32)[2522 * i + 2] = 0;
      }
    }
    a2[23] = SR_VEC_LANES(128, source_buffer[298], i8)[13];
    a2[24] = word_1402827F8[2 * (SR_VEC_LANES(128, source_buffer[298], i8)[13] >> 1) + SR_VEC_LANES(128, source_buffer[298], i8)[14]];
  }
  return (unsigned int)running_total; /* 0x1401CCA5F: mov eax, dword ptr [rbp + 0x14] */
}

//----- (00000001401CCA90) ----------------------------------------------------
__int64            sub_1401CCA90(_DWORD *a1)
{
  *a1 = 8600;
  return 0;
}

//----- (00000001401CCAC0) ----------------------------------------------------
__int64            sub_1401CCAC0(__int64 a1)
{
  int i;
  unsigned int unused_written_slot;

  unused_written_slot = 0;
  for ( i = 0; i < 2; ++i )
    unused_written_slot = sub_1401C7180((_DWORD *)(4288LL * i + a1));
  crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 8576)), 0, 0xCu);
  *(_DWORD *)(a1 + 8596) = 0;
  return unused_written_slot;
}

//----- (00000001401CCB60) ----------------------------------------------------
__int64            sub_1401CCB60(
             __m128i *a1,
        __int32 *a2,
        int a3,
        int a4,
        _DWORD *a5,
             __m128i *a6,
        int *a7,
        int a8)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  int masked_bits;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  unsigned __int64 scaled_index_3;
  void *alloca_result_3;
  int masked_bits_2;
  int masked_bits_3;
  int i;
  int j;
       __m128i *input_cursor;
  int running_total;
       __m128i *input_cursor_2;
  int callee_output_word;
  __int32 selection_flag;
  int shifted_bits;
  int cached_selection_code;
  BOOL saved_comparison_result;
  __m128i *destination_buffer;
  __m128i *table_value;
  BOOL scaled_index_4;
  int selection_code;
  BOOL comparison_result;
  __int32 scaled_index_5;
  BOOL comparison_result_2;
  BOOL table_value_2;
  BOOL saved_comparison_result_2;
  int integer_difference;
  int selection_code_2;
  int loaded_word;
  __int32 scaled_index_6;
  __int32 comparison_result_3;
  __m128i *input_cursor_3;
  _DWORD destination_buffer_2[2];
  __m128i *destination_buffer_3;
  int call_result;
  BOOL condition_flag;
  __m128i *p_i;
  __m128i *saved_alloca_result;
  _DWORD scratch_buffer[6];
  char scratch_buffer_2[640];
  __int64 unused_local;

  selection_flag = 0;
  running_total = 0;
  memset(destination_buffer_2, 0, sizeof(destination_buffer_2));
  input_cursor_2 = a1;
  input_cursor = a1;
  if ( a4 )
  {
    for ( i = 0; i < a2[1]; ++i )
      SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[0] = 0;
  }
  if ( a2[1] > SR_VEC_LANES(128, input_cursor_2[537], i32)[0] )
    running_total += sub_1401C7180((     __m128i *)SR_VEC_LANES(128, input_cursor[268], i32));
  scaled_index_4 = a2[1] == 1 && SR_VEC_LANES(128, input_cursor_2[537], i32)[0] == 2 && a2[3] == 1000 * SR_VEC_LANES(128, input_cursor[144], i32)[3];
  condition_flag = scaled_index_4;
  if ( !SR_VEC_LANES(128, input_cursor[150], i32)[0] )
  {
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( a2[4] )
      {
        switch ( a2[4] )
        {
          case 10:
            SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] = 1;
            SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[1] = 2;
            break;
          case 20:
            SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] = 1;
            SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[1] = 4;
            break;
          case 40:
            SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] = 2;
            SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[1] = 4;
            break;
          case 60:
            SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] = 3;
            SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[1] = 4;
            break;
          default:
            return (unsigned int)-203; /* 0x1401CCE35: mov eax, 0xffffff35 */
        }
      }
      else
      {
        SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] = 1;
        SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[1] = 2;
      }
      shifted_bits = (a2[3] >> 10) + 1;
      if ( shifted_bits != 8 && shifted_bits != 12 && shifted_bits != 16 )
        return (unsigned int)-200; /* 0x1401CCE63: mov eax, 0xffffff38 */
      running_total += sub_1401C71F0((__int64)SR_VEC_LANES(128, input_cursor[268 * i], i64), shifted_bits, a2[2]);
    }
  }
  if ( *a2 == 2 && a2[1] == 2 && (SR_VEC_LANES(128, input_cursor_2[536], i32)[3] == 1 || SR_VEC_LANES(128, input_cursor_2[537], i32)[0] == 1) )
  {
    crt_memset((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, input_cursor_2[536], i16)), 0, 4u);
    crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, input_cursor_2[536], i16)[4]), 0, 4u);
    crt_memcpy((__m128i *)&input_cursor[421], input_cursor + 153, 0x130u);
  }
  SR_VEC_LANES(128, input_cursor_2[536], i32)[3] = *a2;
  SR_VEC_LANES(128, input_cursor_2[537], i32)[0] = a2[1];
  if ( a2[2] <= 48000 && a2[2] >= 8000 )
  {
    if ( a3 != 1 && !SR_VEC_LANES(128, input_cursor[150], i32)[0] )
    {
      for ( i = 0; i < a2[1]; ++i )
      {
        for ( j = 0; j < SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1]; ++j )
          SR_VEC_LANES(128, input_cursor[268 * i + 151], i32)[j] = sub_14019AF20(a5, 1);
        SR_VEC_LANES(128, input_cursor[268 * i + 151], i32)[3] = sub_14019AF20(a5, 1);
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        crt_memset((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, input_cursor[268 * i + 152], i16)), 0, 0xCu);
        if ( SR_VEC_LANES(128, input_cursor[268 * i + 151], i32)[3] )
        {
          if ( SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] == 1 )
          {
            SR_VEC_LANES(128, input_cursor[268 * i + 152], i32)[0] = 1;
          }
          else
          {
            call_result = sub_14019AFE0(a5, (__int64)*(&off_1402827E0 + SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1] - 2), 8) + 1;
            for ( j = 0; j < SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[1]; ++j )
              SR_VEC_LANES(128, input_cursor[268 * i + 152], i32)[j] = (call_result >> j) & 1;
          }
        }
      }
      if ( !a3 )
      {
        for ( j = 0; j < SR_VEC_LANES(128, input_cursor[150], i32)[1]; ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( SR_VEC_LANES(128, input_cursor[268 * i + 152], i32)[j] )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0AA0(a5, destination_buffer_2);
                if ( !SR_VEC_LANES(128, input_cursor[420], i32)[j] )
                  sub_1401C0D30(a5, &selection_flag);
              }
              if ( j > 0 && SR_VEC_LANES(128, input_cursor[268 * i + 151], i32)[j + 3] )
                selection_code = 2;
              else
                selection_code = 0;
              sub_1401C7770((__int64)SR_VEC_LANES(128, input_cursor[268 * i], i64), a5, j, 1, selection_code);
              sub_1401C92B0(
                a5,
                (__int64)scratch_buffer_2,
                SR_VEC_LANES(128, input_cursor[268 * i + 174], i8)[5],
                SR_VEC_LANES(128, input_cursor[268 * i + 174], i8)[6],
                SR_VEC_LANES(128, input_cursor[268 * i + 145], i32)[2]);
            }
          }
        }
      }
    }
    if ( a2[1] == 2 )
    {
      if ( !a3 || a3 == 2 && SR_VEC_LANES(128, input_cursor[152], i32)[SR_VEC_LANES(128, input_cursor[150], i32)[0]] == 1 )
      {
        sub_1401C0AA0(a5, destination_buffer_2);
        if ( (a3 || SR_VEC_LANES(128, input_cursor[419], i32)[SR_VEC_LANES(128, input_cursor[150], i32)[0]]) && (a3 != 2 || SR_VEC_LANES(128, input_cursor[420], i32)[SR_VEC_LANES(128, input_cursor[150], i32)[0]]) )
          selection_flag = 0;
        else
          sub_1401C0D30(a5, &selection_flag);
      }
      else
      {
        for ( i = 0; i < 2; ++i )
          destination_buffer_2[i] = SR_VEC_LANES(128, input_cursor_2[536], i16)[i];
      }
    }
    if ( a2[1] == 2 && !selection_flag && SR_VEC_LANES(128, input_cursor_2[537], i32)[1] == 1 )
    {
      crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, input_cursor_2[352], i16)[2]), 0, 0x3C0u);
      crt_memset((void *)(uintptr_t)(&SR_VEC_LANES(128, input_cursor_2[348], i16)[2]), 0, 0x40u);
      SR_VEC_LANES(128, input_cursor_2[412], i32)[1] = 100;
      SR_VEC_LANES(128, input_cursor_2[412], i8)[8] = 10;
      SR_VEC_LANES(128, input_cursor_2[529], i32)[3] = 0;
      SR_VEC_LANES(128, input_cursor_2[416], i32)[2] = 1;
    }
    comparison_result = a2[1] * a2[3] < *a2 * a2[2];
    saved_comparison_result = comparison_result;
    if ( comparison_result )
      scaled_index_5 = 0;
    else
      scaled_index_5 = (SR_VEC_LANES(128, input_cursor[145], i32)[2] + 2) * a2[1];
    scaled_index = 2LL * scaled_index_5 + 15;
    if ( scaled_index <= 2LL * scaled_index_5 )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)alloca_result;
    if ( saved_comparison_result )
    {
      destination_buffer = (__m128i *)a6;
      table_value = (__m128i *)((char *)SR_VEC_PTR_LANES(128, a6, i64) + 2 * SR_VEC_LANES(128, input_cursor[145], i32)[2] + 4);
    }
    else
    {
      destination_buffer = p_i;
      table_value = (__m128i *)((char *)SR_VEC_PTR_LANES(128, p_i, i64) + 2 * SR_VEC_LANES(128, input_cursor[145], i32)[2] + 4);
    }
    if ( a3 )
    {
      table_value_2 = !SR_VEC_LANES(128, input_cursor_2[537], i32)[1] || a2[1] == 2 && a3 == 2 && SR_VEC_LANES(128, input_cursor[420], i32)[SR_VEC_LANES(128, input_cursor[418], i32)[0]] == 1;
      saved_comparison_result_2 = table_value_2;
    }
    else
    {
      comparison_result_2 = selection_flag == 0;
      saved_comparison_result_2 = comparison_result_2;
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i && !saved_comparison_result_2 )
      {
        crt_memset((void *)(uintptr_t)(&SR_VEC_PTR_LANES(128, (*(&destination_buffer + i)), i16)[2]), 0, 2LL * callee_output_word);
      }
      else
      {
        integer_difference = SR_VEC_LANES(128, input_cursor[150], i32)[0] - i;
        if ( integer_difference > 0 )
        {
          if ( a3 == 2 )
          {
            if ( SR_VEC_LANES(128, input_cursor[268 * i + 151], i32)[integer_difference + 3] )
              selection_code_2 = 2;
            else
              selection_code_2 = 0;
            cached_selection_code = selection_code_2;
          }
          else if ( i > 0 && SR_VEC_LANES(128, input_cursor_2[537], i32)[1] )
          {
            cached_selection_code = 1;
          }
          else
          {
            cached_selection_code = 2;
          }
        }
        else
        {
          cached_selection_code = 0;
        }
        masked_bits = sub_1401C74B0(
                (__int64)SR_VEC_LANES(128, input_cursor[268 * i], i64),
                a5,
                (     __m128i *)((char *)SR_VEC_PTR_LANES(128, (*(&destination_buffer + i)), i64) + 4),
                (unsigned int *)&callee_output_word,
                a3,
                cached_selection_code,
                a8);
        running_total += masked_bits;
      }
      ++SR_VEC_LANES(128, input_cursor[268 * i + 150], i32)[0];
    }
    if ( *a2 == 2 && a2[1] == 2 )
    {
      sub_1401BFD30(SR_VEC_LANES(128, input_cursor_2[536], i16), destination_buffer, table_value, destination_buffer_2, SR_VEC_LANES(128, input_cursor[144], i32)[3], callee_output_word);
    }
    else
    {
      crt_memcpy(destination_buffer, (     __m128i *)((char *)input_cursor_2 + 8580), 4u);
      crt_memcpy((__m128i *)((char *)SR_VEC_LANES(128, input_cursor_2[536], i64) + 4), (__m128i *)((char *)destination_buffer + 2 * callee_output_word), 4u);
    }
    *a7 = a2[2] * callee_output_word / (1000 * SR_VEC_LANES(128, input_cursor[144], i16)[6]);
    if ( *a2 == 2 )
      loaded_word = *a7;
    else
      loaded_word = 0;
    scaled_index_2 = 2LL * loaded_word + 15;
    if ( scaled_index_2 <= 2LL * loaded_word )
      scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = (__m128i *)alloca_result_2;
    if ( *a2 == 2 )
      input_cursor_3 = saved_alloca_result;
    else
      input_cursor_3 = (__m128i *)a6;
    if ( saved_comparison_result )
      scaled_index_6 = (SR_VEC_LANES(128, input_cursor[145], i32)[2] + 2) * a2[1];
    else
      scaled_index_6 = 0;
    scaled_index_3 = 2LL * scaled_index_6 + 15;
    if ( scaled_index_3 <= 2LL * scaled_index_6 )
      scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_3 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
    destination_buffer_3 = (__m128i *)alloca_result_3;
    if ( saved_comparison_result )
    {
      crt_memcpy(destination_buffer_3, a6, 2LL * (SR_VEC_LANES(128, input_cursor[145], i32)[2] + 2) * a2[1]);
      destination_buffer = destination_buffer_3;
      table_value = (__m128i *)((char *)SR_VEC_PTR_LANES(128, destination_buffer_3, i64) + 2 * SR_VEC_LANES(128, input_cursor[145], i32)[2] + 4);
    }
    for ( i = 0; ; ++i )
    {
      comparison_result_3 = *a2 >= a2[1] ? a2[1] : *a2;
      if ( i >= comparison_result_3 )
        break;
      masked_bits_2 = sub_1401BAA30(
              (     __m128i *)SR_VEC_LANES(128, input_cursor[268 * i + 153], i32),
              input_cursor_3,
              (     __m128i *)&SR_VEC_PTR_LANES(128, (*(&destination_buffer + i)), i16)[1],
              callee_output_word);
      running_total += masked_bits_2;
      if ( *a2 == 2 )
      {
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + i] = SR_VEC_PTR_LANES(128, input_cursor_3, i16)[j];
      }
    }
    if ( *a2 == 2 && a2[1] == 1 )
    {
      if ( condition_flag )
      {
        masked_bits_3 = sub_1401BAA30((     __m128i *)SR_VEC_LANES(128, input_cursor[421], i32), input_cursor_3, (     __m128i *)&SR_VEC_PTR_LANES(128, destination_buffer, i16)[1], callee_output_word);
        running_total += masked_bits_3;
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + 1] = SR_VEC_PTR_LANES(128, input_cursor_3, i16)[j];
      }
      else
      {
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + 1] = SR_VEC_PTR_LANES(128, a6, i16)[2 * j];
      }
    }
    if ( SR_VEC_LANES(128, input_cursor[261], i32)[3] == 2 )
    {
      scratch_buffer[0] = 6;
      scratch_buffer[1] = 4;
      scratch_buffer[2] = 3;
      a2[5] = scratch_buffer[(SR_VEC_LANES(128, input_cursor[144], i32)[3] - 8) >> 2] * SR_VEC_LANES(128, input_cursor[144], i32)[1];
    }
    else
    {
      a2[5] = 0;
    }
    if ( a3 == 1 )
    {
      for ( j = 0; j < SR_VEC_LANES(128, input_cursor_2[537], i32)[0]; ++j )
        SR_VEC_LANES(128, input_cursor_2[268 * j + 144], i8)[8] = 10;
    }
    else
    {
      SR_VEC_LANES(128, input_cursor_2[537], i32)[1] = selection_flag;
    }
  }
  else
  {
    running_total = -200;
  }
  return (unsigned int)running_total; /* 0x1401CDE47: mov eax, dword ptr [rbp + 0x10] */
}

//----- (00000001401CDE70) ----------------------------------------------------
__int64            sub_1401CDE70(__int64 a1, int a2, float a3)
{
  __int64 result;
  int i;
  float scaled_value;

  scaled_value = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * scaled_value;
    scaled_value = scaled_value * a3;
  }
  result = a2 - 1;
  *(float *)(a1 + 4 * result) = *(float *)(a1 + 4 * result) * scaled_value;
  return result;
}

//----- (00000001401CDF20) ----------------------------------------------------
__int64            sub_1401CDF20(     __m128i *a1, int a2)
{
  __int32 float_word;
  __int32 float_word_2;
  __int64 unused_local;
  int j;
  int i;
  double product_difference;
  double scaled_value;
  double squared_component;
  double scaled_value_2;
  double product_difference_2;
  double scaled_ratio;
  __m128i destination_buffer[6];
  __int64 unused_local_2;

  crt_memcpy(destination_buffer, a1, 4LL * a2);
  scaled_value = 1.0;
  for ( i = a2 - 1; i > 0; --i )
  {
    product_difference = (float)-*(float *)&SR_VEC_LANES(128, destination_buffer[0], i32)[i];
    squared_component = 1.0 - product_difference * product_difference;
    scaled_value = scaled_value * squared_component;
    if ( scaled_value * 10000.0 < 1.0 )
      return 0; /* the function has no caller */
    scaled_ratio = 1.0 / squared_component;
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      scaled_value_2 = *(float *)&SR_VEC_LANES(128, destination_buffer[0], i32)[j];
      product_difference_2 = *(float *)&SR_VEC_LANES(128, destination_buffer[0], i32)[i - j - 1];
      *(float *)&float_word = (scaled_value_2 - product_difference_2 * product_difference) * scaled_ratio;
      SR_VEC_LANES(128, destination_buffer[0], i32)[j] = float_word;
      *(float *)&float_word_2 = (product_difference_2 - scaled_value_2 * product_difference) * scaled_ratio;
      SR_VEC_LANES(128, destination_buffer[0], i32)[i - j - 1] = float_word_2;
    }
  }
  product_difference = (float)-*(float *)SR_VEC_LANES(128, destination_buffer[0], i32);
  squared_component = 1.0 - product_difference * product_difference;
  scaled_value = scaled_value * squared_component;
  return 0; /* the function has no caller */
}

//----- (00000001401CE180) ----------------------------------------------------
float            sub_1401CE180(__int64 a1, __int64 a2, int a3)
{
  float saved_combined_products;
  int i;
  int j;
  double combined_products;
  double weighted_sum;
  double weighted_sum_2;
  double weighted_sum_3;
  double weighted_sum_4;
  _OWORD scratch_buffer[25];
  __int64 unused_local;

  i = 0;
  do
  {
    weighted_sum = *(float *)(a2 + 4LL * i);
    *((double *)&scratch_buffer[i] + 1) = weighted_sum;
    *(double *)&scratch_buffer[i++] = weighted_sum;
  }
  while ( i <= a3 );
  for ( i = 0; i < a3; ++i )
  {
    if ( *((double *)scratch_buffer + 1) <= 9.999999717180685e-10 )
      weighted_sum_2 = 9.999999717180685e-10;
    else
      weighted_sum_2 = *((double *)scratch_buffer + 1);
    combined_products = -*(double *)&scratch_buffer[i + 1] / weighted_sum_2;
    saved_combined_products = combined_products;
    *(float *)(a1 + 4LL * i) = saved_combined_products;
    for ( j = 0; j < a3 - i; ++j )
    {
      weighted_sum_3 = *(double *)&scratch_buffer[j + 1 + i];
      weighted_sum_4 = *((double *)&scratch_buffer[j] + 1);
      *(double *)&scratch_buffer[j + 1 + i] = weighted_sum_3 + weighted_sum_4 * combined_products;
      *((double *)&scratch_buffer[j] + 1) = weighted_sum_4 + weighted_sum_3 * combined_products;
    }
  }
  return *((double *)scratch_buffer + 1); /* 0x1401CE3E8: cvtsd2ss xmm0, qword ptr [rsp + 0x30 + 8] */
}

//----- (00000001401CE410) ----------------------------------------------------
__int64            sub_1401CE410(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  int i;
  int j;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    weighted_sum = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      weighted_sum_2 = *(float *)(a1 + 4LL * j);
      combined_products = *(float *)(a1 + 4LL * (i - j - 1));
      *(float *)(a1 + 4LL * j) = weighted_sum_2 + (float)(combined_products * weighted_sum);
      *(float *)(a1 + 4LL * (i - j - 1)) = combined_products + (float)(weighted_sum_2 * weighted_sum);
    }
    *(float *)(a1 + 4LL * i) = -weighted_sum;
  }
  return result;
}

//----- (00000001401CE540) ----------------------------------------------------
__int64            sub_1401CE540(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  float combined_products;
  int i;
  unsigned int input_value;

  input_value = a4;
  if ( a4 > a3 )
    input_value = a3;
  for ( i = 0; ; ++i )
  {
    result = input_value;
    if ( i >= (int)input_value )
      break;
    combined_products = sub_1401D0EF0(a2, a2 + 4LL * i, a3 - i);
    *(float *)(a1 + 4LL * i) = combined_products;
  }
  return result;
}

//----- (00000001401CE5E0) ----------------------------------------------------
__int64 sub_1401CE5E0()
{
  float scaled_ratio;
  float scaled_ratio_2;
  float weighted_sum;
  float scaled_ratio_3;
  _DWORD scratch_buffer[12];
  int i;
  int j;
  int m;
  int k;
  int cached_k;
  int selection_code;
  signed int scaled_index;
  int selection_code_2;
  float weighted_sum_2;
  int selection_code_3;
  int cached_i;
  int selection_code_4;
  int table_value;
  signed int scaled_index_2;
  int cached_m;
  float *state_address;
  int selection_code_5;
  int selection_code_6;
  float product_difference;
  float saved_weighted_sum;
  double weighted_sum_3;
  float *buffer_cursor;
  int scaled_index_3;
  int scaled_index_4;
  int iteration_count;
  float product_difference_2;
  int iteration_count_2;
  int scaled_index_5;
  int call_result;
  int cached_k_2;
  char *state_address_2;
  float call_result_2;
  float call_result_3;
  float saved_product_difference;
  int cached_i_2;
  signed int saved_cached_k;
  signed int cached_k_3;
  signed int saved_cached_k_2;
  signed int cached_k_4;
  int cached_k_5;
  int masked_bits;
  signed int saved_masked_bits;
  signed int masked_bits_2;
  int saved_masked_bits_2;
  int cached_masked_bits;
  int masked_bits_3;
  int saved_masked_bits_3;
  int masked_bits_4;
  int saved_masked_bits_4;
  int cached_masked_bits_2;
  int scaled_index_6;
  float component_delta;
  float saved_component_delta;
  float scaled_value;
  double weighted_sum_4;
  double weighted_sum_5;
  float scaled_value_2;
  int call_result_4;
  float scaled_ratio_4;
  int selection_code_7;
  double weighted_sum_6;
  unsigned __int64 scaled_index_7;
  double call_result_5;
  __m128i scratch_buffer_2[4];
  _DWORD scratch_buffer_3[24];
  float float_buffer[160];
  float float_buffer_2[68];
  _DWORD float_word[596];
  _BYTE scratch_buffer_4[640];
  __int64 float_word_2;
  _QWORD float_word_3[340];
  _QWORD float_word_4[378];
  _WORD scratch_buffer_5[320];
  _BYTE scratch_buffer_6[320];
  _BYTE scratch_buffer_7[960];
  _BYTE scratch_buffer_8[1280];
  __int64 unused_local;
  __int64 unrecovered_register_value;
  _WORD *record_pointer;
  _WORD *unused_written_slot;
  _BYTE *unused_written_slot_2;
  float *scaled_ratio_5;
  int remaining_bits;
  float unrecovered_register_value_2;
  float unrecovered_register_value_3;
  int unrecovered_register_value_4;
  int lookup_index;
  int unrecovered_register_value_5;
  int unrecovered_register_value_6;

  scaled_index_3 = unrecovered_register_value_4 * (5 * unrecovered_register_value_5 + 20);
  scaled_index_6 = 20 * unrecovered_register_value_5 + 80;
  scaled_index_4 = 40 * unrecovered_register_value_5 + 160;
  scaled_index_5 = 5 * unrecovered_register_value_4;
  selection_code_7 = 20;
  selection_code_2 = 40;
  scaled_index = 2 * unrecovered_register_value_4;
  selection_code = 8;
  selection_code_3 = 16;
  scaled_index_2 = 18 * unrecovered_register_value_4 - 1;
  selection_code_4 = 72;
  selection_code_6 = 143;
  if ( unrecovered_register_value_4 == 16 )
  {
    sub_1401D1210((__int64)scratch_buffer_8, unrecovered_register_value, scaled_index_3);
    crt_memset((void *)(uintptr_t)(scratch_buffer_2), 0, 8u);
    sub_1401BAD00(scratch_buffer_2, (__int64)scratch_buffer_5, (__int64)scratch_buffer_8, scaled_index_3);
    sub_1401D12E0((__int64)scratch_buffer_4, (__int64)scratch_buffer_5, scaled_index_4);
  }
  else if ( unrecovered_register_value_4 == 12 )
  {
    sub_1401D1210((__int64)scratch_buffer_7, unrecovered_register_value, scaled_index_3);
    crt_memset((void *)(uintptr_t)(scratch_buffer_2), 0, 0x18u);
    sub_1401BAEE0(scratch_buffer_2, scratch_buffer_5, (__int64)scratch_buffer_7, scaled_index_3);
    sub_1401D12E0((__int64)scratch_buffer_4, (__int64)scratch_buffer_5, scaled_index_4);
  }
  else
  {
    sub_1401D1210((__int64)scratch_buffer_5, unrecovered_register_value, scaled_index_4);
  }
  crt_memset((void *)(uintptr_t)(scratch_buffer_2), 0, 8u);
  sub_1401BAD00(scratch_buffer_2, (__int64)scratch_buffer_6, (__int64)scratch_buffer_5, scaled_index_4);
  sub_1401D12E0((__int64)float_buffer, (__int64)scratch_buffer_6, scaled_index_6);
  for ( i = scaled_index_6 - 1; i > 0; --i )
  {
    if ( (float)((float)(int)float_buffer[i] + float_buffer[i - 1]) <= 32767.0 )
    {
      if ( (float)((float)(int)float_buffer[i] + float_buffer[i - 1]) >= -32768.0 )
        component_delta = (float)(int)float_buffer[i] + float_buffer[i - 1];
      else
        component_delta = -32768.0;
      saved_component_delta = component_delta;
    }
    else
    {
      saved_component_delta = 32767.0;
    }
    float_buffer[i] = (float)(__int16)(int)saved_component_delta;
  }
  crt_memset((void *)(uintptr_t)(float_word), 0, 596LL * unrecovered_register_value_5);
  state_address = &float_buffer[4 * selection_code_7];
  for ( j = 0; j < unrecovered_register_value_5 >> 1; ++j )
  {
    buffer_cursor = &state_address[-selection_code];
    scratch_buffer[10] = unrecovered_register_value_6;
    sub_1401A9C80(state_address, (__int64)&state_address[-selection_code_4], (__int64)float_buffer_2, selection_code_2, selection_code_4 - selection_code + 1);
    weighted_sum_3 = float_buffer_2[selection_code_4 - selection_code];
    call_result_5 = sub_1401D1050((__int64)state_address, selection_code_2);
    weighted_sum_5 = call_result_5 + sub_1401D1050((__int64)buffer_cursor, selection_code_2) + (float)((float)selection_code_2 * 4000.0);
    scaled_ratio = 2.0 * weighted_sum_3 / weighted_sum_5;
    *(float *)&float_word[selection_code] = *(float *)&float_word[selection_code] + scaled_ratio;
    for ( k = selection_code + 1; k <= selection_code_4; ++k )
    {
      --buffer_cursor;
      weighted_sum_3 = float_buffer_2[selection_code_4 - k];
      weighted_sum_5 = weighted_sum_5 + *buffer_cursor * *buffer_cursor - buffer_cursor[selection_code_2] * buffer_cursor[selection_code_2];
      scaled_ratio_2 = 2.0 * weighted_sum_3 / weighted_sum_5;
      *(float *)&float_word[k] = *(float *)&float_word[k] + scaled_ratio_2;
    }
    state_address += selection_code_2;
  }
  for ( i = selection_code_4; i >= selection_code; --i )
    *(float *)&float_word[i] = *(float *)&float_word[i] - (float)((float)(*(float *)&float_word[i] * (float)i) / 4096.0);
  cached_i = 2 * lookup_index + 4;
  sub_1401CFF30((__int64)&float_word[selection_code], (__int64)scratch_buffer_3, selection_code_4 - selection_code + 1, cached_i);
  scaled_value = *(float *)&float_word[selection_code];
  if ( scaled_value >= 0.2 )
  {
    scaled_value_2 = unrecovered_register_value_2 * scaled_value;
    for ( i = 0; i < cached_i; ++i )
    {
      if ( *(float *)&float_word[i + selection_code] <= scaled_value_2 )
      {
        cached_i = i;
        break;
      }
      scratch_buffer_3[i] = 2 * (selection_code + scratch_buffer_3[i]);
    }
    for ( i = selection_code_3 - 5; i < selection_code_6 + 5; ++i )
    {
      scaled_index_7 = 2LL * i;
      if ( scaled_index_7 >= 0x12A )
        sub_1401F8694();
      *(_WORD *)((char *)&float_word_4[340] + scaled_index_7) = 0;
    }
    for ( i = 0; i < cached_i; ++i )
      *((_WORD *)&float_word_4[340] + (int)scratch_buffer_3[i]) = 1;
    for ( i = selection_code_6 + 3; i >= selection_code_3; --i )
      *((_WORD *)&float_word_4[340] + i) += *((_WORD *)&float_word_4[339] + i + 2) + *((_WORD *)&float_word_4[339] + i + 3);
    cached_i = 0;
    for ( i = selection_code_3; i < selection_code_6 + 1; ++i )
    {
      if ( *((__int16 *)&float_word_4[340] + i + 1) > 0 )
        scratch_buffer_3[cached_i++] = i;
    }
    for ( i = selection_code_6 + 3; i >= selection_code_3; --i )
      *((_WORD *)&float_word_4[340] + i) += *((_WORD *)&float_word_4[339] + i + 1)
                                 + *((_WORD *)&float_word_4[339] + i + 2)
                                 + *((_WORD *)&float_word_4[339] + i + 3);
    iteration_count = 0;
    for ( i = selection_code_3; i < selection_code_6 + 4; ++i )
    {
      if ( *((__int16 *)&float_word_4[340] + i) > 0 )
        *((_WORD *)&float_word_4[340] + iteration_count++) = i - 2;
    }
    crt_memset((void *)(uintptr_t)(float_word), 0, 0x950u);
    if ( unrecovered_register_value_4 == 8 )
      state_address = (float *)(unrecovered_register_value + 640);
    else
      state_address = (float *)&float_word_2;
    for ( j = 0; j < unrecovered_register_value_5; ++j )
    {
      weighted_sum_6 = sub_1401D1050((__int64)state_address, selection_code_2) + 1.0;
      for ( m = 0; m < iteration_count; ++m )
      {
        k = *((__int16 *)&float_word_4[340] + m);
        buffer_cursor = &state_address[-k];
        weighted_sum_3 = sub_1401D0EF0((__int64)buffer_cursor, (__int64)state_address, selection_code_2);
        if ( weighted_sum_3 <= 0.0 )
        {
          float_word[149 * j + k] = 0;
        }
        else
        {
          weighted_sum_4 = sub_1401D1050((__int64)buffer_cursor, selection_code_2);
          weighted_sum = 2.0 * weighted_sum_3 / (weighted_sum_4 + weighted_sum_6);
          *(float *)&float_word[149 * j + k] = weighted_sum;
        }
      }
      state_address += selection_code_2;
    }
    saved_weighted_sum = 0.0;
    saved_product_difference = -1000.0;
    cached_m = 0;
    cached_k = -1;
    if ( remaining_bits <= 0 )
    {
      call_result_3 = 0.0;
    }
    else
    {
      if ( unrecovered_register_value_4 == 12 )
      {
        remaining_bits = 2 * remaining_bits / 3;
      }
      else if ( unrecovered_register_value_4 == 16 )
      {
        remaining_bits >>= 1;
      }
      call_result_3 = sub_1401D1340((float)remaining_bits);
    }
    if ( unrecovered_register_value_5 == 4 )
    {
      selection_code_5 = 11;
      state_address_2 = (char *)&unk_14027E290;
      if ( unrecovered_register_value_4 == 8 && lookup_index > 0 )
        table_value = 11;
      else
        table_value = 3;
    }
    else
    {
      selection_code_5 = 3;
      state_address_2 = (char *)&unk_14027BC14;
      table_value = 3;
    }
    for ( j = 0; j < cached_i; ++j )
    {
      k = scratch_buffer_3[j];
      for ( m = 0; m < table_value; ++m )
      {
        SR_VEC_LANES(128, scratch_buffer_2[1], i32)[m + 2] = 0;
        for ( i = 0; i < unrecovered_register_value_5; ++i )
          *(float *)&SR_VEC_LANES(128, scratch_buffer_2[1], i32)[m + 2] = *(float *)&SR_VEC_LANES(128, scratch_buffer_2[1], i32)[m + 2]
                                             + *(float *)&float_word[149 * i + state_address_2[m + selection_code_5 * i] + k];
      }
      weighted_sum_2 = -1000.0;
      cached_i_2 = 0;
      for ( i = 0; i < table_value; ++i )
      {
        if ( *(float *)&SR_VEC_LANES(128, scratch_buffer_2[1], i32)[i + 2] > weighted_sum_2 )
        {
          weighted_sum_2 = *(float *)&SR_VEC_LANES(128, scratch_buffer_2[1], i32)[i + 2];
          cached_i_2 = i;
        }
      }
      call_result_2 = sub_1401D1340((float)k);
      product_difference_2 = weighted_sum_2 - (float)((float)(0.2 * (float)unrecovered_register_value_5) * call_result_2);
      if ( remaining_bits > 0 )
      {
        product_difference = (float)(call_result_2 - call_result_3) * (float)(call_result_2 - call_result_3);
        product_difference_2 = product_difference_2 - (float)((float)((float)((float)(0.2 * (float)unrecovered_register_value_5) * *scaled_ratio_5) * product_difference) / (float)(product_difference + 0.5));
      }
      if ( product_difference_2 > saved_product_difference && weighted_sum_2 > (float)((float)unrecovered_register_value_5 * unrecovered_register_value_3) )
      {
        saved_product_difference = product_difference_2;
        saved_weighted_sum = weighted_sum_2;
        cached_k = k;
        cached_m = cached_i_2;
      }
    }
    if ( cached_k == -1 )
    {
      crt_memset((void *)(uintptr_t)(record_pointer), 0, 0x10u);
      *scaled_ratio_5 = 0.0;
      *unused_written_slot = 0;
      *unused_written_slot_2 = 0;
      return 1; /* 0x1401CF685: mov eax, 1 */
    }
    else
    {
      *scaled_ratio_5 = saved_weighted_sum / (float)unrecovered_register_value_5;
      if ( unrecovered_register_value_4 <= 8 )
      {
        for ( j = 0; j < unrecovered_register_value_5; ++j )
        {
          *(_DWORD *)&record_pointer[2 * j] = state_address_2[cached_m + selection_code_5 * j] + cached_k;
          if ( selection_code_3 <= 144 )
          {
            if ( *(int *)&record_pointer[2 * j] <= 144 )
            {
              if ( *(_DWORD *)&record_pointer[2 * j] >= selection_code_3 )
                masked_bits_4 = *(_DWORD *)&record_pointer[2 * j];
              else
                masked_bits_4 = selection_code_3;
              saved_masked_bits_4 = masked_bits_4;
            }
            else
            {
              saved_masked_bits_4 = 144;
            }
            cached_masked_bits_2 = saved_masked_bits_4;
          }
          else
          {
            if ( *(_DWORD *)&record_pointer[2 * j] <= selection_code_3 )
            {
              if ( *(int *)&record_pointer[2 * j] >= 144 )
                masked_bits_3 = *(_DWORD *)&record_pointer[2 * j];
              else
                masked_bits_3 = 144;
              saved_masked_bits_3 = masked_bits_3;
            }
            else
            {
              saved_masked_bits_3 = selection_code_3;
            }
            cached_masked_bits_2 = saved_masked_bits_3;
          }
          *(_DWORD *)&record_pointer[2 * j] = cached_masked_bits_2;
        }
        *unused_written_slot = cached_k - selection_code_3;
        *unused_written_slot_2 = cached_m;
      }
      else
      {
        if ( unrecovered_register_value_4 == 12 )
          cached_k = ((3 * (_BYTE)cached_k) & 1) + ((3 * (__int16)cached_k) >> 1);
        else
          cached_k *= 2;
        if ( scaled_index <= scaled_index_2 )
        {
          if ( cached_k <= scaled_index_2 )
          {
            if ( cached_k >= scaled_index )
              saved_cached_k_2 = cached_k;
            else
              saved_cached_k_2 = scaled_index;
            cached_k_4 = saved_cached_k_2;
          }
          else
          {
            cached_k_4 = scaled_index_2;
          }
          cached_k_5 = cached_k_4;
        }
        else
        {
          if ( cached_k <= scaled_index )
          {
            if ( cached_k >= scaled_index_2 )
              saved_cached_k = cached_k;
            else
              saved_cached_k = scaled_index_2;
            cached_k_3 = saved_cached_k;
          }
          else
          {
            cached_k_3 = scaled_index;
          }
          cached_k_5 = cached_k_3;
        }
        cached_k = cached_k_5;
        call_result = sub_1401BE3A0(cached_k_5 - 2, scaled_index);
        call_result_4 = sub_1401BE320(cached_k_5 + 2, scaled_index_2);
        cached_k_2 = cached_k_5;
        cached_m = 0;
        saved_weighted_sum = -1000.0;
        sub_1401E0010((__int64)float_word_4, unrecovered_register_value, call_result, scaled_index_5, unrecovered_register_value_5, lookup_index, unrecovered_register_value_6);
        sub_1401E0340((__int64)float_word_3, unrecovered_register_value, call_result, scaled_index_5, unrecovered_register_value_5, lookup_index);
        iteration_count_2 = 0;
        scaled_ratio_4 = 0.050000001 / (float)cached_k_5;
        if ( unrecovered_register_value_5 == 4 )
        {
          table_value = byte_14027BB84[lookup_index];
          selection_code_5 = 34;
          state_address_2 = byte_14027E2C0;
        }
        else
        {
          table_value = 12;
          selection_code_5 = 12;
          state_address_2 = (char *)&unk_14027CC28;
        }
        state_address = (float *)(unrecovered_register_value + 80LL * unrecovered_register_value_4);
        weighted_sum_6 = sub_1401D1050((__int64)state_address, scaled_index_5 * unrecovered_register_value_5) + 1.0;
        for ( k = call_result; k <= call_result_4; ++k )
        {
          for ( m = 0; m < table_value; ++m )
          {
            weighted_sum_3 = 0.0;
            weighted_sum_4 = weighted_sum_6;
            for ( j = 0; j < unrecovered_register_value_5; ++j )
            {
              weighted_sum_3 = weighted_sum_3 + *((float *)&float_word_4[85 * j] + 5 * m + iteration_count_2);
              weighted_sum_4 = weighted_sum_4 + *((float *)&float_word_3[85 * j] + 5 * m + iteration_count_2);
            }
            if ( weighted_sum_3 <= 0.0 )
            {
              weighted_sum_2 = 0.0;
            }
            else
            {
              scaled_ratio_3 = 2.0 * weighted_sum_3 / weighted_sum_4;
              weighted_sum_2 = scaled_ratio_3 * (float)(1.0 - (float)(scaled_ratio_4 * (float)m));
            }
            if ( weighted_sum_2 > saved_weighted_sum && byte_14027E2C0[m] + k <= scaled_index_2 )
            {
              saved_weighted_sum = weighted_sum_2;
              cached_k_2 = k;
              cached_m = m;
            }
          }
          ++iteration_count_2;
        }
        for ( j = 0; j < unrecovered_register_value_5; ++j )
        {
          *(_DWORD *)&record_pointer[2 * j] = state_address_2[cached_m + selection_code_5 * j] + cached_k_2;
          if ( scaled_index <= 18 * unrecovered_register_value_4 )
          {
            if ( *(_DWORD *)&record_pointer[2 * j] <= 18 * unrecovered_register_value_4 )
            {
              if ( *(_DWORD *)&record_pointer[2 * j] >= scaled_index )
                masked_bits_2 = *(_DWORD *)&record_pointer[2 * j];
              else
                masked_bits_2 = scaled_index;
              saved_masked_bits_2 = masked_bits_2;
            }
            else
            {
              saved_masked_bits_2 = 18 * unrecovered_register_value_4;
            }
            cached_masked_bits = saved_masked_bits_2;
          }
          else
          {
            if ( *(_DWORD *)&record_pointer[2 * j] <= scaled_index )
            {
              if ( *(_DWORD *)&record_pointer[2 * j] >= 18 * unrecovered_register_value_4 )
                masked_bits = *(_DWORD *)&record_pointer[2 * j];
              else
                masked_bits = 18 * unrecovered_register_value_4;
              saved_masked_bits = masked_bits;
            }
            else
            {
              saved_masked_bits = scaled_index;
            }
            cached_masked_bits = saved_masked_bits;
          }
          *(_DWORD *)&record_pointer[2 * j] = cached_masked_bits;
        }
        *unused_written_slot = cached_k_2 - scaled_index;
        *unused_written_slot_2 = cached_m;
      }
    }
  }
  else
  {
    crt_memset((void *)(uintptr_t)(record_pointer), 0, 4LL * unrecovered_register_value_5);
    *scaled_ratio_5 = 0.0;
    *unused_written_slot = 0;
    *unused_written_slot_2 = 0;
    return 1; /* 0x1401CED94: mov eax, 1 */
  }
  return 0; /* 0x1401CFF03: xor eax, eax */
}

//----- (00000001401CFF30) ----------------------------------------------------
__int64            sub_1401CFF30(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int k;
  int n;
  int i;
  int j;
  int m;
  float weighted_sum;
  float weighted_sum_2;

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = i;
  for ( j = 1; j < a4; ++j )
  {
    weighted_sum = *(float *)(a1 + 4LL * j);
    for ( k = j - 1; k >= 0 && weighted_sum > *(float *)(a1 + 4LL * k); --k )
    {
      *(_DWORD *)(a1 + 4LL * (k + 1)) = *(_DWORD *)(a1 + 4LL * k);
      *(_DWORD *)(a2 + 4LL * (k + 1)) = *(_DWORD *)(a2 + 4LL * k);
    }
    *(float *)(a1 + 4LL * (k + 1)) = weighted_sum;
    *(_DWORD *)(a2 + 4LL * (k + 1)) = j;
  }
  for ( m = a4; ; ++m )
  {
    result = (unsigned int)a3;
    if ( m >= a3 )
      break;
    weighted_sum_2 = *(float *)(a1 + 4LL * m);
    if ( weighted_sum_2 > *(float *)(a1 + 4LL * (a4 - 1)) )
    {
      for ( n = a4 - 2; n >= 0 && weighted_sum_2 > *(float *)(a1 + 4LL * n); --n )
      {
        *(_DWORD *)(a1 + 4LL * (n + 1)) = *(_DWORD *)(a1 + 4LL * n);
        *(_DWORD *)(a2 + 4LL * (n + 1)) = *(_DWORD *)(a2 + 4LL * n);
      }
      *(float *)(a1 + 4LL * (n + 1)) = weighted_sum_2;
      *(_DWORD *)(a2 + 4LL * (n + 1)) = m;
    }
  }
  return result;
}

//----- (00000001401D0150) ----------------------------------------------------
float            sub_1401D0150(__int64 a1, __int64 a2, float a3, int a4, int a5, int a6)
{
  float component_delta;
  float component_delta_2;
  __int64 unused_local;
  int k;
  int j;
  int i;
  double squared_length;
  double comparison_operand;
  __int64 scaled_index;
  double combined_products;
  double square_root;
  double scaled_index_2;
  int selection_flag;
  double combined_products_2;
  double saved_squared_length;
  double combined_products_3;
  double source_component_x;
  double combined_products_4;
  __int64 integer_difference;
  double float_buffer[24];
  double float_buffer_2[26];
  double float_buffer_3[26];
  __m128i source_buffer[12];
  __m128i destination_buffer;
  __int64 unused_local_2;

  combined_products_2 = sub_1401D1050(a2, a4 * a5);
  crt_memset((void *)(uintptr_t)(source_buffer), 0, 0xC0u);
  for ( i = 0; i < a5; ++i )
  {
    scaled_index = a2 + 4LL * a4 * i;
    for ( j = 1; j < a6 + 1; ++j )
    {
      integer_difference = j - 1;
      *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[integer_difference] = *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[integer_difference] + sub_1401D0EF0(scaled_index, scaled_index + 4LL * j, a4 - j);
    }
  }
  crt_memcpy(&destination_buffer, source_buffer, 0xC0u);
  combined_products_4 = combined_products_2 + 0.000009999999747378752 * combined_products_2 + 9.999999717180685e-10;
  float_buffer_3[0] = combined_products_4;
  float_buffer_2[0] = combined_products_4;
  saved_squared_length = 1.0;
  selection_flag = 0;
  for ( j = 0; j < a6; ++j )
  {
    for ( i = 0; i < a5; ++i )
    {
      scaled_index = a2 + 4LL * a4 * i;
      squared_length = *(float *)(scaled_index + 4LL * j);
      combined_products = *(float *)(scaled_index + 4LL * (a4 - j - 1));
      for ( k = 0; k < j; ++k )
      {
        *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[k] = *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[k]
                                        - (float)(*(float *)(scaled_index + 4LL * j) * *(float *)(scaled_index + 4LL * (j - k - 1)));
        *(double *)&SR_VEC_LANES(128, destination_buffer, i64)[k] = *(double *)&SR_VEC_LANES(128, destination_buffer, i64)[k]
                                     - (float)(*(float *)(scaled_index + 4LL * (a4 - j - 1))
                                             * *(float *)(scaled_index + 4LL * (k + a4 - j)));
        comparison_operand = float_buffer[k];
        squared_length = squared_length + *(float *)(scaled_index + 4LL * (j - k - 1)) * comparison_operand;
        combined_products = combined_products + *(float *)(scaled_index + 4LL * (k + a4 - j)) * comparison_operand;
      }
      for ( k = 0; k <= j; ++k )
      {
        float_buffer_3[k] = float_buffer_3[k] - squared_length * *(float *)(scaled_index + 4LL * (j - k));
        float_buffer_2[k] = float_buffer_2[k] - combined_products * *(float *)(scaled_index + 4LL * (a4 - j + k - 1));
      }
    }
    squared_length = *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[j];
    combined_products = *(double *)&SR_VEC_LANES(128, destination_buffer, i64)[j];
    for ( k = 0; k < j; ++k )
    {
      comparison_operand = float_buffer[k];
      squared_length = squared_length + *(double *)&SR_VEC_LANES(128, destination_buffer, i64)[j - k - 1] * comparison_operand;
      combined_products = combined_products + *(double *)&SR_VEC_LANES(128, source_buffer[0], i64)[j - k - 1] * comparison_operand;
    }
    float_buffer_3[j + 1] = squared_length;
    float_buffer_2[j + 1] = combined_products;
    combined_products_3 = float_buffer_2[j + 1];
    source_component_x = float_buffer_2[0];
    scaled_index_2 = float_buffer_3[0];
    for ( k = 0; k < j; ++k )
    {
      comparison_operand = float_buffer[k];
      combined_products_3 = combined_products_3 + float_buffer_2[j - k] * comparison_operand;
      source_component_x = source_component_x + float_buffer_2[k + 1] * comparison_operand;
      scaled_index_2 = scaled_index_2 + float_buffer_3[k + 1] * comparison_operand;
    }
    square_root = -2.0 * combined_products_3 / (scaled_index_2 + source_component_x);
    squared_length = saved_squared_length * (1.0 - square_root * square_root);
    if ( a3 < squared_length )
    {
      saved_squared_length = squared_length;
    }
    else
    {
      square_root = sqrt(1.0 - a3 / saved_squared_length);
      if ( combined_products_3 > 0.0 )
        square_root = -square_root;
      saved_squared_length = a3;
      selection_flag = 1;
    }
    for ( k = 0; k < (j + 1) >> 1; ++k )
    {
      squared_length = float_buffer[k];
      combined_products = float_buffer[j - k - 1];
      float_buffer[k] = squared_length + square_root * combined_products;
      float_buffer[j - k - 1] = combined_products + square_root * squared_length;
    }
    float_buffer[j] = square_root;
    if ( selection_flag )
    {
      for ( k = j + 1; k < a6; ++k )
        float_buffer[k] = 0.0;
      break;
    }
    for ( k = 0; k <= j + 1; ++k )
    {
      squared_length = float_buffer_3[k];
      float_buffer_3[k] = float_buffer_3[k] + square_root * float_buffer_2[j - k + 1];
      float_buffer_2[j - k + 1] = float_buffer_2[j - k + 1] + square_root * squared_length;
    }
  }
  if ( selection_flag )
  {
    for ( k = 0; k < a6; ++k )
    {
      component_delta = -float_buffer[k];
      *(float *)(a1 + 4LL * k) = component_delta;
    }
    for ( i = 0; i < a5; ++i )
      combined_products_2 = combined_products_2 - sub_1401D1050(a2 + 4LL * a4 * i, a6);
    scaled_index_2 = combined_products_2 * saved_squared_length;
  }
  else
  {
    scaled_index_2 = float_buffer_3[0];
    squared_length = 1.0;
    for ( k = 0; k < a6; ++k )
    {
      comparison_operand = float_buffer[k];
      scaled_index_2 = scaled_index_2 + float_buffer_3[k + 1] * comparison_operand;
      squared_length = squared_length + comparison_operand * comparison_operand;
      component_delta_2 = -comparison_operand;
      *(float *)(a1 + 4LL * k) = component_delta_2;
    }
    scaled_index_2 = scaled_index_2 - 0.000009999999747378752 * combined_products_2 * squared_length;
  }
  return scaled_index_2; /* 0x1401D0C5F: cvtsd2ss xmm0, qword ptr [rsp + 0x58] */
}

//----- (00000001401D0C90) ----------------------------------------------------
__int64            sub_1401D0C90(__int64 a1, float a2, int a3)
{
  __int64 result;
  int i;

  for ( i = 0; i < (unsigned __int16)(a3 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a1 + 4LL * (i + 1)) * a2;
    *(float *)(a1 + 4LL * (i + 2)) = *(float *)(a1 + 4LL * (i + 2)) * a2;
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a1 + 4LL * (i + 3)) * a2;
  }
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    ++i;
  }
  return result;
}

//----- (00000001401D0DC0) ----------------------------------------------------
__int64            sub_1401D0DC0(__int64 a1, __int64 a2, float a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 0; i < (unsigned __int16)(a4 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * (i + 1)) = a3 * *(float *)(a2 + 4LL * (i + 1));
    *(float *)(a1 + 4LL * (i + 2)) = a3 * *(float *)(a2 + 4LL * (i + 2));
    *(float *)(a1 + 4LL * (i + 3)) = a3 * *(float *)(a2 + 4LL * (i + 3));
  }
  while ( 1 )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return result;
}

//----- (00000001401D0EF0) ----------------------------------------------------
double            sub_1401D0EF0(__int64 a1, __int64 a2, int a3)
{
  int i;
  double loaded_word;

  loaded_word = 0.0;
  for ( i = 0; i < a3 - 3; i += 4 )
    loaded_word = loaded_word
       + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a2 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a2 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a2 + 4LL * (i + 3));
  while ( i < a3 )
  {
    loaded_word = loaded_word + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return loaded_word;
}

//----- (00000001401D1050) ----------------------------------------------------
double            sub_1401D1050(__int64 a1, int a2)
{
  int i;
  double loaded_word;

  loaded_word = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
    loaded_word = loaded_word
       + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a1 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a1 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a1 + 4LL * (i + 3));
  while ( i < a2 )
  {
    loaded_word = loaded_word + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i);
    ++i;
  }
  return loaded_word;
}

//----- (00000001401D11A0) ----------------------------------------------------
float            sub_1401D11A0(float a1)
{
  return 1.0 / (exp((float)-a1) + 1.0);
}

//----- (00000001401D11F0) ----------------------------------------------------
__int64            sub_1401D11F0(float a1)
{
  return sub_1401AD3B0(a1);
}

//----- (00000001401D1210) ----------------------------------------------------
__int64            sub_1401D1210(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  int i;
  __int16 loaded_word;
  __int16 saved_loaded_word;

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    if ( (int)sub_1401AD3B0(*(float *)(a2 + 4LL * i)) <= 0x7FFF )
    {
      if ( (int)sub_1401AD3B0(*(float *)(a2 + 4LL * i)) >= -32768 )
        loaded_word = sub_1401AD3B0(*(float *)(a2 + 4LL * i));
      else
        loaded_word = 0x8000;
      saved_loaded_word = loaded_word;
    }
    else
    {
      saved_loaded_word = 0x7FFF;
    }
    *(_WORD *)(a1 + 2LL * i) = saved_loaded_word;
    result = (unsigned int)(i - 1);
  }
  return result;
}

//----- (00000001401D12E0) ----------------------------------------------------
__int64            sub_1401D12E0(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  int i;

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    *(float *)(a1 + 4LL * i) = (float)*(__int16 *)(a2 + 2LL * i);
    result = (unsigned int)(i - 1);
  }
  return result;
}

//----- (00000001401D1340) ----------------------------------------------------
float            sub_1401D1340(double a1)
{
  return 3.32192809488736 * log10(a1);
}

//----- (00000001401D1380) ----------------------------------------------------
__int64            sub_1401D1380(__int64 a1)
{
  __int64 result;
  int shifted_bits;
  int loaded_word;
  __int16 saved_shifted_bits;
  __int16 cached_shifted_bits;
  unsigned int shifted_bits_2;
  unsigned int shifted_bits_3;
  unsigned int shifted_bits_4;
  unsigned int shifted_bits_5;
  unsigned int saved_shifted_bits_2;
  signed int shifted_bits_6;
  __int64 shifted_bits_7;

  result = (unsigned int)*(char *)(a1 + 4541);
  if ( (_DWORD)result == 2 )
  {
    loaded_word = sub_1401BC2A0(65536000 * *(_DWORD *)(a1 + 4576) / *(_DWORD *)(a1 + 4544)) - 2048;
    shifted_bits_7 = (int)(((__int16)*(_DWORD *)(a1 + 4712) * (__int64)(-4 * *(_DWORD *)(a1 + 4712))) >> 16);
    shifted_bits = (((__int16)(loaded_word - (sub_1401BC2A0(0x3C0000u) - 2048)) * shifted_bits_7) >> 16) + loaded_word - (*(int *)(a1 + 8) >> 8);
    if ( shifted_bits < 0 )
      shifted_bits *= 3;
    if ( shifted_bits <= 51 )
    {
      if ( shifted_bits >= -51 )
        saved_shifted_bits = shifted_bits;
      else
        saved_shifted_bits = -51;
      cached_shifted_bits = saved_shifted_bits;
    }
    else
    {
      cached_shifted_bits = 51;
    }
    *(_DWORD *)(a1 + 8) += (6554LL * cached_shifted_bits * *(__int16 *)(a1 + 4532)) >> 16;
    shifted_bits_6 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
    if ( shifted_bits_6 <= (int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
          shifted_bits_4 = *(_DWORD *)(a1 + 8);
        else
          shifted_bits_4 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
        shifted_bits_5 = shifted_bits_4;
      }
      else
      {
        shifted_bits_5 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
      }
      saved_shifted_bits_2 = shifted_bits_5;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
          shifted_bits_2 = *(_DWORD *)(a1 + 8);
        else
          shifted_bits_2 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
        shifted_bits_3 = shifted_bits_2;
      }
      else
      {
        shifted_bits_3 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
      }
      saved_shifted_bits_2 = shifted_bits_3;
    }
    *(_DWORD *)(a1 + 8) = saved_shifted_bits_2;
    return a1;
  }
  return result;
}

//----- (00000001401D1630) ----------------------------------------------------
__int64            sub_1401D1630(__int64 a1, int a2)
{
  __int64 result;

  sub_1401C50E0((_DWORD *)a1, a1 + 5114);
  if ( !a2 && *(int *)(a1 + 4532) >= 13 )
    *(_DWORD *)(a1 + 4532) = 12;
  if ( *(int *)(a1 + 4532) >= 13 )
  {
    *(_DWORD *)(a1 + 6104) = 0;
    *(_DWORD *)(a1 + 6100) = 0;
    *(_BYTE *)(a1 + 4781) = 1;
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 4781) = 0;
    if ( (int)++*(_DWORD *)(a1 + 6104) > 10 )
    {
      if ( *(int *)(a1 + 6104) > 30 )
      {
        *(_DWORD *)(a1 + 6104) = 10;
        *(_DWORD *)(a1 + 6100) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 6100) = 0;
    }
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 0;
  }
  return result;
}

//----- (00000001401D1780) ----------------------------------------------------
__int64            sub_1401D1780()
{
  unsigned __int64 byte_count;
       __m128i *source_buffer;
  int float_word;
  _QWORD scratch_buffer[6];
  int i;
  __int16 shifted_bits;
  int call_result;
  char loaded_word;
  int saved_shifted_bits;
  __int16 saved_shifted_bits_2;
  int j;
  int saved_shifted_bits_3;
  int selection_flag;
  int call_result_2;
  __int16 loaded_word_2;
  int cached_call_result;
  int integer_difference;
  int k;
  int running_total;
  int cached_call_result_2;
  _DWORD *state_address;
  int selection_code;
  int integer_difference_2;
  int selection_flag_2;
  float scaled_value;
  int shifted_bits_2;
  int saved_shifted_bits_4;
  BOOL comparison_result;
  int unused_written_slot;
  int table_value;
  int shifted_bits_3;
  int loaded_word_3;
  _DWORD *state_address_2;
  _DWORD *unused_written_slot_2;
  __m128i source_buffer_2;
  unsigned int byte_count_2;
  __m128i source_buffer_3[4];
  float float_buffer[173];
  float saved_scaled_value;
  _DWORD scratch_buffer_2[4];
  char unrecovered_register_value;
  __m128i source_buffer_4[272];
  __m128i source_buffer_5[272];
  _DWORD destination_buffer[4];
  _DWORD scratch_buffer_3[8];
  _DWORD callee_output_word[676];
  __m128i source_buffer_6[80];
  __int64 unused_local;
  _DWORD *record_pointer;
  int *unused_written_slot_3;
  __m128i *source_buffer_7;
  int unrecovered_register_value_2;
  int unrecovered_register_value_3;
  int unrecovered_register_value_4;

  unused_written_slot = 0;
  memset(destination_buffer, 0, sizeof(destination_buffer));
  saved_shifted_bits_3 = 0;
  saved_shifted_bits = 0;
  cached_call_result_2 = 0;
  cached_call_result = 0;
  loaded_word = 0;
  *((_BYTE *)record_pointer + 4786) = record_pointer[1155]++ & 3;
  state_address = &record_pointer[record_pointer[1148] + 1801];
  state_address_2 = &callee_output_word[record_pointer[1148]];
  sub_1401C58E0(record_pointer + 4, (__int64)record_pointer + 5114, record_pointer[1146]);
  sub_1401D12E0((__int64)&state_address[5 * record_pointer[1144]], (__int64)record_pointer + 5114, record_pointer[1146]);
  for ( i = 0; i < 8; ++i )
    *(float *)&state_address[5 * record_pointer[1144] + ((int)record_pointer[1146] >> 3) * i] = *(float *)&state_address[5 * record_pointer[1144] + ((int)record_pointer[1146] >> 3) * i]
                                                              + (float)((float)(1 - (i & 2)) * 0.000001);
  if ( !record_pointer[1170] )
  {
    sub_1401D3B00((__int64)record_pointer, (__int64)float_buffer, callee_output_word, (__int64)state_address, record_pointer[1277]);
    sub_1401D29C0((__int64)record_pointer, float_buffer, (__int64)state_address_2, (__int64)state_address);
    sub_1401D4100((__int64)record_pointer, (__int64)float_buffer, (__int64)state_address_2, (__int64)state_address, unrecovered_register_value_2);
    sub_1401D5670((__int64)record_pointer, (__int64)float_buffer, unrecovered_register_value_2);
    sub_1401DEAE0();
    selection_code = 6;
    shifted_bits = 256;
    selection_flag = 0;
    selection_flag_2 = 0;
    call_result_2 = sub_1401C2EE0((__int64)(record_pointer + 1188), record_pointer[1145]);
    integer_difference = -1;
    integer_difference_2 = -1;
    crt_memcpy(source_buffer_3, source_buffer_7, 0x38u);
    crt_memcpy(source_buffer_4, (     __m128i *)(record_pointer + 37), 0x1100u);
    loaded_word_3 = *((char *)record_pointer + 4786);
    loaded_word_2 = *((_WORD *)record_pointer + 2894);
    table_value = record_pointer[1446];
    for ( j = 0; ; ++j )
    {
      if ( call_result_2 == integer_difference )
      {
        call_result = cached_call_result;
      }
      else if ( call_result_2 == integer_difference_2 )
      {
        call_result = cached_call_result_2;
      }
      else
      {
        if ( j > 0 )
        {
          crt_memcpy(source_buffer_7, source_buffer_3, 0x38u);
          crt_memcpy((__m128i *)(record_pointer + 37), source_buffer_4, 0x1100u);
          *((_BYTE *)record_pointer + 4786) = loaded_word_3;
          *((_WORD *)record_pointer + 2894) = loaded_word_2;
          record_pointer[1446] = table_value;
        }
        scratch_buffer[5] = (uint64)(uintptr_t)(state_address);
        sub_1401D62A0(record_pointer, (__int64)float_buffer, (char *)record_pointer + 4752, (__m128i *)(record_pointer + 37), (__int64)(record_pointer + 1197), (__int64)state_address);
        if ( j == selection_code && !selection_flag )
          crt_memcpy(&source_buffer_2, source_buffer_7, 0x38u);
        sub_1401CA330((__int64)record_pointer, source_buffer_7, record_pointer[1441], 0, unrecovered_register_value_2);
        sub_1401C1790(source_buffer_7, *((char *)record_pointer + 4781), *((char *)record_pointer + 4782), (__int64)(record_pointer + 1197), record_pointer[1146]);
        call_result = sub_14019A0A0((__int64)source_buffer_7);
        if ( j == selection_code && !selection_flag && call_result > unrecovered_register_value_3 )
        {
          crt_memcpy(source_buffer_7, &source_buffer_2, 0x38u);
          *((_BYTE *)record_pointer + 7192) = unrecovered_register_value;
          for ( i = 0; i < record_pointer[1145]; ++i )
            *((_BYTE *)record_pointer + i + 4752) = 4;
          if ( unrecovered_register_value_2 != 2 )
            *((_BYTE *)record_pointer + 4752) = unrecovered_register_value;
          *((_WORD *)record_pointer + 2894) = loaded_word_2;
          record_pointer[1446] = table_value;
          for ( i = 0; i < record_pointer[1146]; ++i )
            *((_BYTE *)record_pointer + i + 4788) = 0;
          sub_1401CA330((__int64)record_pointer, source_buffer_7, record_pointer[1441], 0, unrecovered_register_value_2);
          sub_1401C1790(source_buffer_7, *((char *)record_pointer + 4781), *((char *)record_pointer + 4782), (__int64)(record_pointer + 1197), record_pointer[1146]);
          call_result = sub_14019A0A0((__int64)source_buffer_7);
        }
        if ( !unrecovered_register_value_4 && !j && call_result <= unrecovered_register_value_3 )
          goto LABEL_88;
      }
      if ( j == selection_code )
        break;
      if ( call_result <= unrecovered_register_value_3 )
      {
        if ( call_result >= unrecovered_register_value_3 - 5 )
          goto LABEL_88;
        selection_flag = 1;
        cached_call_result = call_result;
        saved_shifted_bits = shifted_bits;
        if ( call_result_2 != integer_difference )
        {
          integer_difference = call_result_2;
          crt_memcpy(&source_buffer_2, source_buffer_7, 0x38u);
          crt_memcpy(source_buffer_6, (     __m128i *)SR_VEC_PTR_LANES(128, source_buffer_7, i64)[0], SR_VEC_LANES(128, source_buffer_7[1], u32)[3]);
          crt_memcpy(source_buffer_5, (     __m128i *)(record_pointer + 37), 0x1100u);
          loaded_word = *((_BYTE *)record_pointer + 7192);
        }
      }
      else if ( selection_flag || j < 2 )
      {
        selection_flag_2 = 1;
        cached_call_result_2 = call_result;
        saved_shifted_bits_3 = shifted_bits;
        integer_difference_2 = call_result_2;
      }
      else
      {
        if ( (float)(saved_scaled_value * 1.5) <= 1.5 )
          scaled_value = 1.5;
        else
          scaled_value = saved_scaled_value * 1.5;
        saved_scaled_value = scaled_value;
        *((_BYTE *)record_pointer + 4782) = 0;
        selection_flag_2 = 0;
        integer_difference_2 = -1;
      }
      if ( !selection_flag && call_result > unrecovered_register_value_3 )
      {
        for ( i = 0; i < record_pointer[1145]; ++i )
        {
          running_total = 0;
          for ( k = record_pointer[1147] * i; k < record_pointer[1147] * (i + 1); ++k )
            running_total += abs(*((char *)record_pointer + k + 4788));
          if ( j && (running_total >= scratch_buffer_3[i + 4] || destination_buffer[i]) )
          {
            destination_buffer[i] = 1;
          }
          else
          {
            scratch_buffer_3[i + 4] = running_total;
            *((_WORD *)&callee_output_word[672] + i) = shifted_bits;
          }
        }
      }
      if ( (selection_flag_2 & selection_flag) != 0 )
      {
        shifted_bits = (unrecovered_register_value_3 - cached_call_result) * (saved_shifted_bits_3 - saved_shifted_bits) / (cached_call_result_2 - cached_call_result) + saved_shifted_bits;
        if ( shifted_bits <= ((saved_shifted_bits_3 - saved_shifted_bits) >> 2) + saved_shifted_bits )
        {
          if ( shifted_bits < saved_shifted_bits_3 - ((saved_shifted_bits_3 - saved_shifted_bits) >> 2) )
            shifted_bits = saved_shifted_bits_3 - ((saved_shifted_bits_3 - saved_shifted_bits) >> 2);
        }
        else
        {
          shifted_bits = ((saved_shifted_bits_3 - saved_shifted_bits) >> 2) + saved_shifted_bits;
        }
      }
      else if ( call_result <= unrecovered_register_value_3 )
      {
        shifted_bits_3 = sub_1401BC3D0(((call_result - unrecovered_register_value_3) << 7) / record_pointer[1146] + 2048);
        shifted_bits = (unsigned int)(shifted_bits * shifted_bits_3) >> 16;
      }
      else if ( shifted_bits >= 0x4000 )
      {
        shifted_bits = 0x7FFF;
      }
      else
      {
        shifted_bits *= 2;
      }
      for ( i = 0; i < record_pointer[1145]; ++i )
      {
        if ( destination_buffer[i] )
          saved_shifted_bits_2 = *((_WORD *)&callee_output_word[672] + i);
        else
          saved_shifted_bits_2 = shifted_bits;
        if ( (int)((saved_shifted_bits_2 * (__int64)(int)scratch_buffer_2[i]) >> 16) <= 0x7FFFFF )
        {
          if ( (int)((saved_shifted_bits_2 * (__int64)(int)scratch_buffer_2[i]) >> 16) >= -8388608 )
            shifted_bits_2 = (saved_shifted_bits_2 * (__int64)(int)scratch_buffer_2[i]) >> 16;
          else
            shifted_bits_2 = -8388608;
          saved_shifted_bits_4 = shifted_bits_2;
        }
        else
        {
          saved_shifted_bits_4 = 0x7FFFFF;
        }
        scratch_buffer_3[i] = saved_shifted_bits_4 << 8;
      }
      *((_BYTE *)record_pointer + 7192) = unrecovered_register_value;
      comparison_result = unrecovered_register_value_2 == 2;
      sub_1401C2970((char *)record_pointer + 4752, (__int64)scratch_buffer_3, (char *)record_pointer + 7192, comparison_result, record_pointer[1145]);
      call_result_2 = sub_1401C2EE0((__int64)(record_pointer + 1188), record_pointer[1145]);
      for ( i = 0; i < record_pointer[1145]; ++i )
        float_buffer[i] = (float)(int)scratch_buffer_3[i] / 65536.0;
    }
    if ( selection_flag && (call_result_2 == integer_difference || call_result > unrecovered_register_value_3) )
    {
      crt_memcpy(source_buffer_7, &source_buffer_2, 0x38u);
      crt_memcpy((__m128i *)SR_VEC_PTR_LANES(128, source_buffer_7, i64)[0], source_buffer_6, byte_count_2);
      crt_memcpy((__m128i *)(record_pointer + 37), source_buffer_5, 0x1100u);
      *((_BYTE *)record_pointer + 7192) = loaded_word;
    }
  }
LABEL_88:
  byte_count = 4LL * (5 * record_pointer[1144] + record_pointer[1148]);
  source_buffer = (     __m128i *)&record_pointer[record_pointer[1146] + 1801];
  unused_written_slot_2 = record_pointer + 1801;
  crt_memcpy((__m128i *)(record_pointer + 1801), source_buffer, byte_count);
  if ( record_pointer[1170] )
  {
    *unused_written_slot_3 = 0;
  }
  else
  {
    record_pointer[1136] = LODWORD(float_buffer[record_pointer[1145] + 56]);
    *((_BYTE *)record_pointer + 4541) = *((_BYTE *)record_pointer + 4781);
    record_pointer[1166] = 0;
    float_word = sub_14019A0A0((__int64)source_buffer_7);
    *unused_written_slot_3 = (float_word + 7) >> 3;
  }
  return 0; /* 0x1401D26C7: mov eax, dword ptr [rsp + 0x94], a slot only ever set to 0 (0x1401D17B4) */
}

//----- (00000001401D26F0) ----------------------------------------------------
__int64            sub_1401D26F0(_DWORD *a1, int a2)
{
  crt_memset((void *)(uintptr_t)(a1), 0, 0x2768u);
  a1[1277] = a2;
  a1[2] = ((unsigned int)sub_1401BC2A0(0x3C0000u) - 2048) << 8;
  a1[3] = a1[2];
  a1[1166] = 1;
  return (unsigned int)sub_1401C4FB0((__int64)(a1 + 9));
}

//----- (00000001401D2790) ----------------------------------------------------
__int64            sub_1401D2790(int *a1, int *a2, int a3, int a4, unsigned int a5)
{
  int call_result;
  unsigned int unused_written_slot;
  int call_result_2;
  int call_result_3;
  int call_result_4;
  unsigned int call_result_5;

  unused_written_slot = 0;
  a1[1524] = a2[12];
  a1[1169] = a2[13];
  a1[1139] = a2[2];
  a1[1141] = a2[3];
  a1[1142] = a2[4];
  a1[1143] = a2[5];
  a1[1527] = a2[10];
  a1[1442] = *a2;
  a1[1443] = a2[1];
  a1[1134] = a3;
  a1[1444] = a4;
  if ( !a1[1167] || a1[1170] )
  {
    call_result_5 = sub_1401C12F0(a1, a2);
    if ( a5 )
      call_result_5 = a5;
    call_result_2 = sub_1401DB3D0(a1, call_result_5);
    call_result_3 = sub_1401DB660((__int64)a1, call_result_5, a2[6]) + call_result_2;
    call_result_4 = sub_1401DBB00(a1, a2[9]) + call_result_3;
    a1[1154] = a2[8];
    call_result = sub_1401DBFF0(a1, (__int64)a2);
    a1[1167] = 1;
    return (unsigned int)(call_result + call_result_4);
  }
  else
  {
    if ( a1[1139] != a1[1140] && a1[1144] > 0 )
      return (unsigned int)sub_1401DB3D0(a1, a1[1144]);
    return unused_written_slot;
  }
}

//----- (00000001401D29C0) ----------------------------------------------------
__int64            sub_1401D29C0(__int64 a1, float *a2, __int64 a3, __int64 a4)
{
  float call_result;
  float product_difference;
  float unused_written_slot;
  float square_root;
  float pow_result;
  float pow_result_2;
  float square_root_2;
  __int64 unused_local;
  int i;
  float slodword_result;
  float weighted_sum;
  float combined_products;
  int integer_sum;
  float combined_products_2;
  __int64 integer_sum_2;
  int loaded_word;
  float component_sum;
  int loaded_word_2;
  signed int loaded_word_3;
  float squared_value;
  float weighted_sum_2;
  float call_result_2;
  float cached_call_result;
  int loaded_word_4;
  float combined_products_3;
  __int64 running_total;
  float unused_written_slot_2;
  float squared_length;
  float saved_pow_result;
  float saved_pow_result_2;
  __int64 running_total_2;
  __m128i *destination_buffer;
  __int64 unused_written_slot_3;
  float float_buffer[28];
  _BYTE scratch_buffer[112];
  _DWORD callee_output_word[240];
  __int64 unused_local_2;

  integer_sum_2 = a1 + 7192;
  running_total = a4 - 4LL * *(int *)(a1 + 4600);
  weighted_sum = (float)*(int *)(a1 + 4732) * 0.0078125;
  a2[174] = (float)(0.5 * (float)(*(_DWORD *)(a1 + 4716) + *(_DWORD *)(a1 + 4712))) * 0.000030517578;
  a2[175] = sub_1401D11A0(0.25 * (float)(weighted_sum - 20.0));
  if ( !*(_DWORD *)(a1 + 4676) )
  {
    slodword_result = 1.0 - (float)((float)*(int *)(a1 + 4532) * 0.00390625);
    weighted_sum = weighted_sum - (float)((float)((float)((float)(2.0 * a2[175]) * (float)((float)(0.5 * a2[174]) + 0.5)) * slodword_result) * slodword_result);
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    weighted_sum = weighted_sum + (float)(2.0 * *(float *)(a1 + 10084));
  else
    weighted_sum = weighted_sum
        + (float)((float)((float)((float)(-0.40000001 * (float)*(int *)(a1 + 4732)) * 0.0078125) + 6.0)
                * (float)(1.0 - a2[174]));
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    *(_BYTE *)(a1 + 4782) = 0;
  }
  else
  {
    loaded_word = 2 * *(_DWORD *)(a1 + 4576);
    component_sum = 0.0;
    cached_call_result = 0.0;
    running_total_2 = a3;
    loaded_word_4 = 5 * *(__int16 *)(a1 + 4580) / 2;
    for ( i = 0; i < loaded_word_4; ++i )
    {
      unused_written_slot_2 = (float)loaded_word;
      call_result = sub_1401D1050(running_total_2, loaded_word);
      squared_value = (float)loaded_word + call_result;
      call_result_2 = sub_1401D1340(squared_value);
      if ( i > 0 )
      {
        product_difference = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(call_result_2 - cached_call_result)), u64);
        component_sum = component_sum + product_difference;
      }
      cached_call_result = call_result_2;
      running_total_2 += 4LL * loaded_word;
    }
    *(_BYTE *)(a1 + 4782) = component_sum <= (float)(0.60000002 * (float)(loaded_word_4 - 1));
  }
  combined_products = 0.001 * a2[176];
  squared_length = 0.94 / (float)((float)(combined_products * combined_products) + 1.0);
  weighted_sum_2 = (float)((float)*(int *)(a1 + 4672) / 65536.0) + (float)(0.0099999998 * a2[175]);
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    loaded_word_2 = 3 * *(_DWORD *)(a1 + 4576);
    loaded_word_3 = (*(_DWORD *)(a1 + 4604) - loaded_word_2) / 2;
    sub_1401D5E90((__int64)callee_output_word, running_total, 1, loaded_word_3);
    destination_buffer = (__m128i *)&callee_output_word[loaded_word_3];
    crt_memcpy(destination_buffer, (     __m128i *)(running_total + 4LL * loaded_word_3), 4LL * loaded_word_2);
    integer_sum = loaded_word_2 + loaded_word_3;
    sub_1401D5E90((__int64)&callee_output_word[integer_sum], running_total + 4LL * integer_sum, 2, loaded_word_3);
    running_total += 4LL * *(int *)(a1 + 4588);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401CE540((__int64)float_buffer, (__int64)callee_output_word, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636) + 1);
    else
      sub_1401D3760((__int64)float_buffer, (__int64)callee_output_word, weighted_sum_2, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636));
    float_buffer[0] = float_buffer[0] + (float)((float)(float_buffer[0] * 0.000029999999) + 1.0);
    unused_written_slot = float_buffer[0];
    squared_value = sub_1401CE180((__int64)scratch_buffer, (__int64)float_buffer, *(_DWORD *)(a1 + 4636)); /* 0x1401D303B: movss dword ptr [rsp + 0x60], xmm0 */
    sub_1401CE410((__int64)&a2[24 * i + 61], (__int64)scratch_buffer, *(_DWORD *)(a1 + 4636));
    square_root = sqrt(squared_value); /* 0x1401D3077: cvtss2sd xmm0, dword ptr [rsp + 0x60] */
    a2[i] = square_root;
    if ( *(int *)(a1 + 4672) > 0 )
    {
      unused_written_slot_3 = i;
      a2[i] = a2[i] * SR_VEC_READ_LANES(128, sub_1401DF980((__int64)&a2[24 * i + 61], weighted_sum_2, *(_DWORD *)(a1 + 4636)), f32)[0];
    }
    sub_1401CDE70((__int64)&a2[24 * i + 61], *(_DWORD *)(a1 + 4636), squared_length);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401DFE10((__int64)&a2[24 * i + 61], 3.9990001, *(_DWORD *)(a1 + 4636));
    else
      sub_1401DFA30(&a2[24 * i + 61], weighted_sum_2, 3.9990001, *(_DWORD *)(a1 + 4636));
  }
  pow_result = pow(2.0, (float)(-0.16 * weighted_sum));
  saved_pow_result = pow_result;
  pow_result_2 = pow(2.0, 0.3199999928474426);
  saved_pow_result_2 = pow_result_2;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    a2[i] = a2[i] * saved_pow_result;
    a2[i] = a2[i] + saved_pow_result_2;
  }
  combined_products = (float)(4.0 * (float)((float)(0.5 * (float)((float)((float)*(int *)(a1 + 4712) * 0.000030517578) - 1.0)) + 1.0))
      * (float)((float)*(int *)(a1 + 4532) * 0.00390625);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      slodword_result = (float)(0.2 / (float)*(int *)(a1 + 4576)) + (float)(3.0 / (float)SLODWORD(a2[i + 57]));
      a2[i + 157] = slodword_result + -1.0;
      a2[i + 161] = (float)(1.0 - slodword_result) - (float)(slodword_result * combined_products);
    }
    combined_products_3 = -0.25 - (float)((float)(0.26249999 * (float)*(int *)(a1 + 4532)) * 0.00390625);
  }
  else
  {
    slodword_result = 1.3 / (float)*(int *)(a1 + 4576);
    a2[157] = slodword_result + -1.0;
    a2[161] = (float)(1.0 - slodword_result) - (float)((float)(slodword_result * combined_products) * 0.60000002);
    for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      a2[i + 157] = a2[157];
      a2[i + 161] = a2[161];
    }
    combined_products_3 = -0.25;
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    combined_products_2 = 0.30000001;
    combined_products_2 = (float)(0.2 * (float)(1.0 - (float)((float)(1.0 - a2[175]) * a2[174]))) + 0.30000001;
    square_root_2 = sqrt(*(float *)(a1 + 10084));
    combined_products_2 = combined_products_2 * square_root_2;
  }
  else
  {
    combined_products_2 = 0.0;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    *(float *)(integer_sum_2 + 4) = *(float *)(integer_sum_2 + 4) + (float)(0.40000001 * (float)(combined_products_2 - *(float *)(integer_sum_2 + 4)));
    a2[i + 169] = *(float *)(integer_sum_2 + 4);
    *(float *)(integer_sum_2 + 8) = *(float *)(integer_sum_2 + 8) + (float)(0.40000001 * (float)(combined_products_3 - *(float *)(integer_sum_2 + 8)));
    a2[i + 165] = *(float *)(integer_sum_2 + 8);
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D3760) ----------------------------------------------------
__int64            sub_1401D3760(__int64 a1, __int64 a2, float a3, int a4, int a5)
{
  float scaled_value;
  int j;
  int i;
  double weighted_sum;
  double combined_products;
  double destination_buffer[26];
  _QWORD destination_buffer_2[29];

  memset(destination_buffer, 0, 0xC8u);
  memset(destination_buffer_2, 0, 0xC8u);
  for ( i = 0; i < a4; ++i )
  {
    weighted_sum = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < a5; j += 2 )
    {
      combined_products = destination_buffer[j] + a3 * (destination_buffer[j + 1] - weighted_sum);
      destination_buffer[j] = weighted_sum;
      *(double *)&destination_buffer_2[j] = *(double *)&destination_buffer_2[j] + destination_buffer[0] * weighted_sum;
      weighted_sum = destination_buffer[j + 1] + a3 * (destination_buffer[j + 2] - combined_products);
      destination_buffer[j + 1] = combined_products;
      *(double *)&destination_buffer_2[j + 1] = *(double *)&destination_buffer_2[j + 1] + destination_buffer[0] * combined_products;
    }
    destination_buffer[a5] = weighted_sum;
    *(double *)&destination_buffer_2[a5] = *(double *)&destination_buffer_2[a5] + destination_buffer[0] * weighted_sum;
  }
  for ( j = 0; j < a5 + 1; ++j )
  {
    scaled_value = *(double *)&destination_buffer_2[j];
    *(float *)(a1 + 4LL * j) = scaled_value;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D39E0) ----------------------------------------------------
__int64            sub_1401D39E0(__int64 a1, __int64 a2, int a3)
{
  int loaded_word;
  float weighted_sum;
  float saved_weighted_sum;

  if ( a3 )
  {
    *(_BYTE *)(a1 + 4785) = 0;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 5760) + *(_DWORD *)(a1 + 4616);
    if ( (float)((float)((float)loaded_word * *(float *)(a2 + 708)) * 0.1) <= 2.0 )
    {
      if ( (float)((float)((float)loaded_word * *(float *)(a2 + 708)) * 0.1) >= 0.0 )
        weighted_sum = (float)((float)loaded_word * *(float *)(a2 + 708)) * 0.1;
      else
        weighted_sum = 0.0;
      saved_weighted_sum = weighted_sum;
    }
    else
    {
      saved_weighted_sum = 2.0;
    }
    *(_BYTE *)(a1 + 4785) = (int)saved_weighted_sum;
  }
  *(float *)(a2 + 224) = (float)word_140282798[*(char *)(a1 + 4785)] / 16384.0;
  return a2;
}

//----- (00000001401D3B00) ----------------------------------------------------
__int64            sub_1401D3B00(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, int a5)
{
  float unused_written_slot;
  float weighted_sum;
  _QWORD scratch_buffer[5];
  int unused_written_slot_2;
  float unused_written_slot_3;
  float unused_written_slot_4;
  int unused_written_slot_5;
  int unused_written_slot_6;
  int unused_written_slot_7;
  int unused_written_slot_8;
  float shifted_bits;
       __m128i *source_buffer;
  __m128i *destination_buffer;
  float weighted_sum_2;
  float saved_weighted_sum;
  int loaded_word;
  __int64 loaded_word_2;
  __int64 unused_written_slot_9;
  float float_buffer[20];
  float float_buffer_2[16];
  _BYTE scratch_buffer_2[64];
  _DWORD callee_output_word[384];
  __int64 unused_local;

  loaded_word = *(_DWORD *)(a1 + 4592) + *(_DWORD *)(a1 + 4584) + *(_DWORD *)(a1 + 4596);
  loaded_word_2 = a4 - 4LL * *(int *)(a1 + 4592);
  source_buffer = (     __m128i *)(loaded_word_2 + 4LL * loaded_word - 4LL * *(int *)(a1 + 4548));
  destination_buffer = (__m128i *)callee_output_word;
  sub_1401D5E90((__int64)callee_output_word, (__int64)source_buffer, 1, *(_DWORD *)(a1 + 4596));
  destination_buffer = (__m128i *)&callee_output_word[*(int *)(a1 + 4596)];
  source_buffer = (     __m128i *)((char *)source_buffer + 4 * *(int *)(a1 + 4596));
  crt_memcpy(destination_buffer, source_buffer, 4LL * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  destination_buffer = (__m128i *)((char *)destination_buffer + 4 * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  source_buffer = (     __m128i *)((char *)source_buffer + 4 * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  sub_1401D5E90((__int64)destination_buffer, (__int64)source_buffer, 2, *(_DWORD *)(a1 + 4596));
  sub_1401CE540((__int64)float_buffer, (__int64)callee_output_word, *(_DWORD *)(a1 + 4548), *(_DWORD *)(a1 + 4648) + 1);
  float_buffer[0] = float_buffer[0] + (float)((float)(float_buffer[0] * 0.001) + 1.0);
  unused_written_slot = float_buffer[0];
  weighted_sum_2 = sub_1401CE180((__int64)scratch_buffer_2, (__int64)float_buffer, *(_DWORD *)(a1 + 4648)); /* 0x1401D3D8B: movss dword ptr [rsp + 0x78], xmm0 */
  if ( weighted_sum_2 <= 1.0 )
    saved_weighted_sum = 1.0;
  else
    saved_weighted_sum = weighted_sum_2;
  *(float *)(a2 + 704) = float_buffer[0] / saved_weighted_sum;
  sub_1401CE410((__int64)float_buffer_2, (__int64)scratch_buffer_2, *(_DWORD *)(a1 + 4648));
  sub_1401CDE70((__int64)float_buffer_2, *(_DWORD *)(a1 + 4648), 0.99000001);
  sub_1401D5120(a3, float_buffer_2, loaded_word_2, loaded_word, *(_DWORD *)(a1 + 4648));
  if ( !*(_BYTE *)(a1 + 4781) || *(_DWORD *)(a1 + 4664) )
  {
    crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 228)), 0, 0x10u);
    *(_WORD *)(a1 + 4778) = 0;
    *(_BYTE *)(a1 + 4780) = 0;
    *(_DWORD *)(a1 + 10084) = 0;
  }
  else
  {
    shifted_bits = 0.60000002;
    shifted_bits = (float)((float)((float)(0.60000002 - (float)(0.0040000002 * (float)*(int *)(a1 + 4648)))
                        - (float)((float)(0.1 * (float)*(int *)(a1 + 4532)) * 0.00390625))
                - (float)(0.15000001 * (float)(*(char *)(a1 + 4541) >> 1)))
        - (float)((float)(0.1 * (float)*(int *)(a1 + 4728)) * 0.000030517578);
    weighted_sum = (float)*(int *)(a1 + 4652) / 65536.0;
    unused_written_slot_9 = a2 + 228;
    unused_written_slot_8 = a5;
    unused_written_slot_7 = *(_DWORD *)(a1 + 4580);
    unused_written_slot_6 = *(_DWORD *)(a1 + 4644);
    unused_written_slot_5 = *(_DWORD *)(a1 + 4576);
    unused_written_slot_4 = shifted_bits;
    unused_written_slot_3 = weighted_sum;
    unused_written_slot_2 = *(_DWORD *)(a1 + 4544);
    scratch_buffer[4] = a1 + 10084;
    if ( (unsigned int)sub_1401CE5E0() )
      *(_BYTE *)(a1 + 4781) = 1;
    else
      *(_BYTE *)(a1 + 4781) = 2;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D4100) ----------------------------------------------------
__int64            sub_1401D4100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  float pow_result;
  __int64 unused_local;
  int i;
  float scaled_ratio;
  _BYTE *record_byte_offset;
  __int64 running_total;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  __int64 unused_written_slot_4;
  float float_buffer[6];
  _BYTE scratch_buffer[80];
  float float_buffer_2[100];
  _BYTE scratch_buffer_2[1536];
  __m128i source_buffer[2];
  __int64 unused_local_2;

  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    float_buffer[i] = 1.0 / *(float *)(a2 + 4LL * i);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    sub_1401D49F0(float_buffer_2, (__int64)scratch_buffer, a3, a2 + 228, *(_DWORD *)(a1 + 4588), *(_DWORD *)(a1 + 4580));
    unused_written_slot = a1 + 4756;
    unused_written_slot_2 = a2 + 144;
    sub_1401D5210(
      a2 + 144,
      (__m128i *)(a1 + 4756),
      (_BYTE *)(a1 + 4784),
      (int *)(a1 + 4656),
      (float *)(a2 + 708),
      (__int64)float_buffer_2,
      (__int64)scratch_buffer,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 5108));
    sub_1401D39E0(a1, a2, a5);
    sub_1401D4C00(
      (__int64)scratch_buffer_2,
      a4 - 4LL * *(int *)(a1 + 4640),
      a2 + 144,
      a2 + 228,
      (__int64)float_buffer,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 4640));
  }
  else
  {
    running_total = a4 - 4LL * *(int *)(a1 + 4640);
    record_byte_offset = scratch_buffer_2;
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      sub_1401D0DC0((__int64)record_byte_offset, running_total, float_buffer[i], *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588));
      record_byte_offset += 4 * *(_DWORD *)(a1 + 4640) + 4 * *(_DWORD *)(a1 + 4588);
      running_total += 4LL * *(int *)(a1 + 4588);
    }
    crt_memset((void *)(uintptr_t)((_WORD *)(a2 + 144)), 0, 20LL * *(_DWORD *)(a1 + 4580));
    *(_DWORD *)(a2 + 708) = 0;
    *(_DWORD *)(a1 + 4656) = 0;
  }
  if ( *(_DWORD *)(a1 + 4664) )
  {
    scaled_ratio = 0.0099999998;
  }
  else
  {
    pow_result = pow(2.0, (float)(*(float *)(a2 + 708) / 3.0));
    scaled_ratio = pow_result / 10000.0;
    scaled_ratio = (float)(pow_result / 10000.0) / (float)((float)(0.75 * *(float *)(a2 + 700)) + 0.25);
  }
  sub_1401D4680(a1, source_buffer, (__int64)scratch_buffer_2, scaled_ratio);
  unused_written_slot_3 = a1;
  sub_1401D61A0(a1, a2 + 16, SR_VEC_LANES(128, source_buffer[0], i16), a1 + 4500);
  unused_written_slot_4 = a2 + 712;
  sub_1401D4E10(
    (float *)(a2 + 712),
    (__int64)scratch_buffer_2,
    (float *)(a2 + 16),
    (float *)a2,
    *(_DWORD *)(a1 + 4588),
    *(_DWORD *)(a1 + 4580),
    *(_DWORD *)(a1 + 4640));
  return crt_memcpy((__m128i *)(a1 + 4500), source_buffer, 0x20u); /* 0x1401D4650: the result of this call is still in rax at the exit */
}

//----- (00000001401D4680) ----------------------------------------------------
__int64            sub_1401D4680(__int64 a1, _WORD *a2, __int64 a3, float a4)
{
  float unused_local;
  float combined_products;
  __int64 unused_local_2;
  int loaded_word;
  int i;
  float weighted_sum;
  float saved_combined_products;
  float cached_combined_products;
  double combined_products_2;
  float float_buffer[16];
  _BYTE scratch_buffer[64];
  _DWORD callee_output_word[384];
  char scratch_buffer_2[32];
  __int64 unused_local_3;

  loaded_word = *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588);
  *(_BYTE *)(a1 + 4783) = 4;
  weighted_sum = sub_1401D0150((__int64)scratch_buffer, a3, a4, loaded_word, *(_DWORD *)(a1 + 4580), *(_DWORD *)(a1 + 4640)); /* 0x1401D4724: movss dword ptr [rsp + 0x38], xmm0 */
  if ( *(_DWORD *)(a1 + 4632) && !*(_DWORD *)(a1 + 4664) && *(_DWORD *)(a1 + 4580) == 4 )
  {
    weighted_sum = weighted_sum - sub_1401D0150((__int64)float_buffer, a3 + 8LL * loaded_word, a4, loaded_word, 2, *(_DWORD *)(a1 + 4640)); /* 0x1401D47B8: subss xmm1, xmm0 */
    sub_1401D6050(a2, (__int64)float_buffer, *(_DWORD *)(a1 + 4640));
    cached_combined_products = 3.4028235e38;
    for ( i = 3; i >= 0; --i )
    {
      sub_1401C2F40((__int64)scratch_buffer_2, a1 + 4500, (__int64)a2, i, *(_DWORD *)(a1 + 4640));
      sub_1401D6100((__int64)float_buffer, scratch_buffer_2, *(_DWORD *)(a1 + 4640));
      sub_1401D5120(callee_output_word, float_buffer, a3, 2 * loaded_word, *(_DWORD *)(a1 + 4640));
      combined_products_2 = sub_1401D1050((__int64)&callee_output_word[*(int *)(a1 + 4640)], loaded_word - *(_DWORD *)(a1 + 4640));
      combined_products = combined_products_2 + sub_1401D1050((__int64)&callee_output_word[*(int *)(a1 + 4640) + loaded_word], loaded_word - *(_DWORD *)(a1 + 4640));
      saved_combined_products = combined_products;
      if ( weighted_sum <= combined_products )
      {
        if ( saved_combined_products > cached_combined_products )
          break;
      }
      else
      {
        weighted_sum = saved_combined_products;
        *(_BYTE *)(a1 + 4783) = i;
      }
      cached_combined_products = saved_combined_products;
    }
  }
  if ( *(_BYTE *)(a1 + 4783) == 4 )
    sub_1401D6050(a2, (__int64)scratch_buffer, *(_DWORD *)(a1 + 4640));
  return 0; /* no caller reads the result */
}

//----- (00000001401D49F0) ----------------------------------------------------
__int64            sub_1401D49F0(float *a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result;
  float component_sum;
  signed int i;
  float weighted_sum;
  __int64 loaded_word;

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    loaded_word = a3 - 4LL * (*(_DWORD *)(a4 + 4LL * i) + 2);
    sub_1401D5B50(loaded_word, a5, 5, a1);
    sub_1401D5E00(loaded_word, a3, a5, 5u, a2);
    component_sum = sub_1401D1050(a3, a5 + 5);
    if ( component_sum <= (float)((float)(0.015 * (float)(*a1 + a1[24])) + 1.0) )
      weighted_sum = (float)(0.015 * (float)(*a1 + a1[24])) + 1.0;
    else
      weighted_sum = component_sum;
    sub_1401D0C90((__int64)a1, 1.0 / weighted_sum, 25);
    sub_1401D0C90(a2, 1.0 / weighted_sum, 5);
    a3 += 4LL * a5;
    a1 += 25;
    a2 += 20;
  }
  return result;
}

//----- (00000001401D4C00) ----------------------------------------------------
__int64            sub_1401D4C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  int j;
  int i;
  int k;
  __int64 running_total;
  __int64 running_total_2;
  float weighted_sum;
  __int64 record_byte_offset;
  float float_buffer[6];
  __int64 unused_local;

  running_total_2 = a2;
  running_total = a1;
  for ( i = 0; i < a7; ++i )
  {
    record_byte_offset = running_total_2 - 4LL * *(int *)(a4 + 4LL * i);
    weighted_sum = *(float *)(a5 + 4LL * i);
    for ( j = 0; j < 5; ++j )
      float_buffer[j] = *(float *)(a3 + 4LL * (j + 5 * i));
    for ( j = 0; j < a8 + a6; ++j )
    {
      *(_DWORD *)(running_total + 4LL * j) = *(_DWORD *)(running_total_2 + 4LL * j);
      for ( k = 0; k < 5; ++k )
        *(float *)(running_total + 4LL * j) = *(float *)(running_total + 4LL * j) - (float)(float_buffer[k] * *(float *)(record_byte_offset + 4LL * (2 - k)));
      *(float *)(running_total + 4LL * j) = *(float *)(running_total + 4LL * j) * weighted_sum;
      record_byte_offset += 4;
    }
    running_total += 4LL * (a8 + a6);
    running_total_2 += 4LL * a6;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D4E10) ----------------------------------------------------
__int64            sub_1401D4E10(float *a1, __int64 a2, float *a3, float *a4, int a5, int a6, int a7)
{
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  __int64 unused_local;
  int integer_sum;
  _DWORD *state_address;
  double scaled_value_5;
  double scaled_value_6;
  double scaled_value_7;
  double scaled_value_8;
  _DWORD callee_output_word[192];
  __int64 unused_local_2;

  state_address = &callee_output_word[a7];
  integer_sum = a5 + a7;
  sub_1401D5120(callee_output_word, a3, a2, 2 * (a5 + a7), a7);
  scaled_value_5 = (float)(*a4 * *a4);
  scaled_value = scaled_value_5 * sub_1401D1050((__int64)state_address, a5);
  *a1 = scaled_value;
  scaled_value_6 = (float)(a4[1] * a4[1]);
  scaled_value_2 = scaled_value_6 * sub_1401D1050((__int64)&state_address[integer_sum], a5);
  a1[1] = scaled_value_2;
  if ( a6 == 4 )
  {
    sub_1401D5120(callee_output_word, a3 + 16, a2 + 8LL * integer_sum, 2 * integer_sum, a7);
    scaled_value_7 = (float)(a4[2] * a4[2]);
    scaled_value_3 = scaled_value_7 * sub_1401D1050((__int64)state_address, a5);
    a1[2] = scaled_value_3;
    scaled_value_8 = (float)(a4[3] * a4[3]);
    scaled_value_4 = scaled_value_8 * sub_1401D1050((__int64)&state_address[integer_sum], a5);
    a1[3] = scaled_value_4;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D5120) ----------------------------------------------------
_WORD *           sub_1401D5120(_WORD *a1, float *a2, __int64 a3, int a4, int a5)
{
  switch ( a5 )
  {
    case 6:
      sub_1401DF7F0((__int64)a1, a2, a3, a4);
      break;
    case 8:
      sub_1401DF610((__int64)a1, a2, a3, a4);
      break;
    case 10:
      sub_1401DF3D0((__int64)a1, a2, a3, a4);
      break;
    case 12:
      sub_1401DF140((__int64)a1, a2, a3, a4);
      break;
    case 16:
      sub_1401DEE00((__int64)a1, a2, a3, a4);
      break;
  }
  return crt_memset((void *)(uintptr_t)(a1), 0, 4LL * a5);
}

//----- (00000001401D5210) ----------------------------------------------------
__int64            sub_1401D5210(
        __int64 a1,
        __m128i *a2,
        _BYTE *a3,
        int *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8,
        int a9,
        int a10)
{
  _DWORD scratch_buffer[20];
  int i;
  int scratch_buffer_2[3];
  _DWORD scratch_buffer_3[20];
  _DWORD scratch_buffer_4[100];
  _WORD scratch_buffer_5[20];
  __int64 unused_local;

  for ( i = 0; i < 25 * a9; ++i )
    scratch_buffer_4[i] = sub_1401D11F0(*(float *)(a6 + 4LL * i) * 131072.0);
  for ( i = 0; i < 5 * a9; ++i )
    scratch_buffer_3[i] = sub_1401D11F0(*(float *)(a7 + 4LL * i) * 131072.0);
  scratch_buffer[18] = a10;
  sub_1401C2FD0((__int64)scratch_buffer_5, a2, a3, a4, scratch_buffer_2, (__int64)scratch_buffer_4, scratch_buffer_3, a8, a9);
  for ( i = 0; i < 5 * a9; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)scratch_buffer_5[i] * 0.000061035156;
  *a5 = (float)scratch_buffer_2[0] * 0.0078125;
  return 0; /* no caller reads the result */
}

//----- (00000001401D53D0) ----------------------------------------------------
float            sub_1401D53D0(__int64 a1, float *a2, __int64 a3, float a4, int a5)
{
  int j;
  int k;
  int n;
  float loaded_word;
  float weighted_sum;
  float weighted_sum_2;
  int m;
  int i;
  float squared_length;

  loaded_word = 0.0;
  squared_length = 0.0000000099999999 * (float)(*a2 + a2[a5 * a5 - 1]);
  for ( i = 0; i < 10; ++i )
  {
    weighted_sum = 0.0;
    for ( j = 0; j < a5; ++j )
      weighted_sum = weighted_sum + (float)(*(float *)(a3 + 4LL * j) * *(float *)(a1 + 4LL * j));
    loaded_word = a4 - (float)(2.0 * weighted_sum);
    for ( k = 0; k < a5; ++k )
    {
      weighted_sum_2 = 0.0;
      for ( m = k + 1; m < a5; ++m )
        weighted_sum_2 = weighted_sum_2 + (float)(a2[m * a5 + k] * *(float *)(a1 + 4LL * m));
      loaded_word = loaded_word
         + (float)(*(float *)(a1 + 4LL * k)
                 * (float)((float)(2.0 * weighted_sum_2) + (float)(a2[k * a5 + k] * *(float *)(a1 + 4LL * k))));
    }
    if ( loaded_word > 0.0 )
      break;
    for ( n = 0; n < a5; ++n )
      a2[n * a5 + n] = a2[n * a5 + n] + squared_length;
    squared_length = squared_length * 2.0;
  }
  if ( i == 10 )
    return 1.0;
  return loaded_word;
}

//----- (00000001401D5670) ----------------------------------------------------
__int64            sub_1401D5670(__int64 a1, __int64 a2, int a3)
{
  float pow_result;
  float square_root;
  __int64 unused_local;
  int i;
  float saved_square_root;
  int selected_word;
  BOOL comparison_result;
  float combined_products;
  float saved_pow_result;
  float shifted_bits;
  char *byte_cursor;
  __m128i source_buffer;
  __int64 unused_local_2;

  byte_cursor = (char *)(a1 + 7192);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    combined_products = 1.0 - (float)(0.5 * sub_1401D11A0(0.25 * (float)(*(float *)(a2 + 708) - 12.0)));
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
      *(float *)(a2 + 4LL * i) = *(float *)(a2 + 4LL * i) * combined_products;
  }
  pow_result = pow(2.0, (float)(0.33000001 * (float)(21.0 - (float)((float)*(int *)(a1 + 4732) * 0.0078125))))
     / (double)*(int *)(a1 + 4588);
  saved_pow_result = pow_result;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    square_root = sqrt((float)((float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i))
                    + (float)(*(float *)(a2 + 4LL * i + 712) * saved_pow_result)));
    saved_square_root = square_root;
    if ( square_root >= 32767.0 )
      selected_word = 1191181824;
    else
      selected_word = LODWORD(saved_square_root);
    *(_DWORD *)(a2 + 4LL * i) = selected_word;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    SR_VEC_LANES(128, source_buffer, i32)[i] = (int)(float)(*(float *)(a2 + 4LL * i) * 65536.0);
  crt_memcpy((__m128i *)(a2 + 728), &source_buffer, 4LL * *(int *)(a1 + 4580));
  *(_BYTE *)(a2 + 744) = *byte_cursor;
  comparison_result = a3 == 2;
  sub_1401C2970((char *)(a1 + 4752), (__int64)&source_buffer, byte_cursor, comparison_result, *(_DWORD *)(a1 + 4580));
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    *(float *)(a2 + 4LL * i) = (float)SR_VEC_LANES(128, source_buffer, i32)[i] / 65536.0;
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    *(_BYTE *)(a1 + 4782) = (float)(*(float *)(a2 + 708) + (float)((float)*(int *)(a1 + 4728) * 0.000030517578)) <= 1.0;
  shifted_bits = (float)word_1402827F8[2 * (*(char *)(a1 + 4781) >> 1) + *(char *)(a1 + 4782)] / 1024.0;
  *(float *)(a2 + 692) = (float)((float)((float)((float)((float)(-0.050000001 * (float)*(int *)(a1 + 4628)) + 1.2)
                                               + (float)((float)(-0.2 * (float)*(int *)(a1 + 4532)) * 0.00390625))
                                       + (float)(-0.1 * *(float *)(a2 + 696)))
                               + (float)(-0.2 * *(float *)(a2 + 700)))
                       + (float)(0.80000001 * shifted_bits);
  return 0; /* no caller reads the result */
}

//----- (00000001401D5B50) ----------------------------------------------------
__int64            sub_1401D5B50(__int64 a1, int a2, int a3, float *a4)
{
  float saved_combined_products;
  float saved_combined_products_2;
  __int64 result;
  float saved_combined_products_3;
  float saved_combined_products_4;
  float saved_combined_products_5;
  float saved_combined_products_6;
  int i;
  int k;
  int j;
  double combined_products;
  double combined_products_2;
  __int64 scaled_index;
  __int64 remaining_amount;

  scaled_index = a1 + 4LL * (a3 - 1);
  combined_products = sub_1401D1050(scaled_index, a2);
  saved_combined_products = combined_products;
  *a4 = saved_combined_products;
  for ( i = 1; i < a3; ++i )
  {
    combined_products = combined_products
        + (float)((float)(*(float *)(scaled_index + 4LL * -i) * *(float *)(scaled_index + 4LL * -i))
                - (float)(*(float *)(scaled_index + 4LL * (a2 - i)) * *(float *)(scaled_index + 4LL * (a2 - i))));
    saved_combined_products_2 = combined_products;
    a4[i + a3 * i] = saved_combined_products_2;
  }
  remaining_amount = a1 + 4LL * (a3 - 2);
  for ( j = 1; ; ++j )
  {
    result = (unsigned int)a3;
    if ( j >= a3 )
      break;
    combined_products_2 = sub_1401D0EF0(scaled_index, remaining_amount, a2);
    saved_combined_products_3 = combined_products_2;
    a4[a3 * j] = saved_combined_products_3;
    saved_combined_products_4 = combined_products_2;
    a4[j] = saved_combined_products_4;
    for ( k = 1; k < a3 - j; ++k )
    {
      combined_products_2 = combined_products_2
          + (float)((float)(*(float *)(scaled_index + 4LL * -k) * *(float *)(remaining_amount + 4LL * -k))
                  - (float)(*(float *)(scaled_index + 4LL * (a2 - k)) * *(float *)(remaining_amount + 4LL * (a2 - k))));
      saved_combined_products_5 = combined_products_2;
      a4[k + a3 * (k + j)] = saved_combined_products_5;
      saved_combined_products_6 = combined_products_2;
      a4[k + j + a3 * k] = saved_combined_products_6;
    }
    remaining_amount -= 4;
  }
  return result;
}

//----- (00000001401D5E00) ----------------------------------------------------
__int64            sub_1401D5E00(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 result;
  float call_result;
  int i;
  __int64 remaining_amount;

  remaining_amount = a1 + 4LL * (int)(a4 - 1);
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    call_result = sub_1401D0EF0(remaining_amount, a2, a3);
    *(float *)(a5 + 4LL * i) = call_result;
    remaining_amount -= 4;
  }
  return result;
}

//----- (00000001401D5E90) ----------------------------------------------------
__int64            sub_1401D5E90(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 result;
  int i;
  float product_difference;
  float scaled_ratio;
  float combined_products;

  combined_products = 2.0 - (float)((float)(3.1415927 / (float)(int)(a4 + 1)) * (float)(3.1415927 / (float)(int)(a4 + 1)));
  if ( a3 >= 2 )
  {
    product_difference = 1.0;
    scaled_ratio = 0.5 * combined_products;
  }
  else
  {
    product_difference = 0.0;
    scaled_ratio = 3.1415927 / (float)(int)(a4 + 1);
  }
  for ( i = 0; ; i += 4 )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    *(float *)(a1 + 4LL * i) = (float)(*(float *)(a2 + 4LL * i) * 0.5) * (float)(product_difference + scaled_ratio);
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a2 + 4LL * (i + 1)) * scaled_ratio;
    product_difference = (float)(combined_products * scaled_ratio) - product_difference;
    *(float *)(a1 + 4LL * (i + 2)) = (float)(*(float *)(a2 + 4LL * (i + 2)) * 0.5) * (float)(scaled_ratio + product_difference);
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a2 + 4LL * (i + 3)) * product_difference;
    scaled_ratio = (float)(combined_products * product_difference) - scaled_ratio;
  }
  return result;
}

//----- (00000001401D6050) ----------------------------------------------------
__int64            sub_1401D6050(_WORD *a1, __int64 a2, int a3)
{
  __int64 unused_local;
  int i;
  _DWORD scratch_buffer[16];
  __int64 unused_local_2;

  for ( i = 0; i < a3; ++i )
    scratch_buffer[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i) * 65536.0);
  return sub_1401BC940(a1, (__int64)scratch_buffer, a3); /* 0x1401D60D5: the result of this call is still in rax at the exit */
}

//----- (00000001401D6100) ----------------------------------------------------
__int64            sub_1401D6100(__int64 a1,      char *a2, int a3)
{
  __int64 unused_local;
  int i;
  _WORD scratch_buffer[16];
  __int64 unused_local_2;

  CWinApp__ShowAppMessageBox((struct CWinApp *)scratch_buffer, a2, a3);
  for ( i = 0; i < a3; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)scratch_buffer[i] * 0.00024414062;
  return 0; /* no caller reads the result */
}

//----- (00000001401D61A0) ----------------------------------------------------
__int64            sub_1401D61A0(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int64 unused_local;
  int i;
  int j;
  _OWORD scratch_buffer[4];
  __int64 unused_local_2;

  sub_1401C5A20(a1, (__int64)scratch_buffer, a3, a4);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 4640); ++j )
      *(float *)(((__int64)i << 6) + a2 + 4LL * j) = (float)*((__int16 *)&scratch_buffer[2 * i] + j) * 0.00024414062;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D62A0) ----------------------------------------------------
__int64            sub_1401D62A0(_DWORD *a1, __int64 a2, char *a3, __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 unused_local;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;
  int i;
  int j;
  int table_value;
  int loaded_word;
  unsigned int shifted_bits;
  __int64 unused_written_slot;
  _DWORD *unused_written_slot_2;
  _DWORD scratch_buffer[4];
  _DWORD scratch_buffer_2[4];
  int scratch_buffer_3[4];
  int scratch_buffer_4[4];
  _WORD scratch_buffer_5[20];
  _OWORD scratch_buffer_6[4];
  _WORD scratch_buffer_7[96];
  _WORD scratch_buffer_8[320];
  __int64 unused_local_2;

  for ( i = 0; i < a1[1145]; ++i )
  {
    for ( j = 0; j < a1[1159]; ++j )
      scratch_buffer_7[24 * i + j] = sub_1401D11F0(*(float *)(a2 + 4LL * (j + 24 * i) + 244) * 8192.0);
  }
  for ( i = 0; i < a1[1145]; ++i )
  {
    shifted_bits = (unsigned int)sub_1401D11F0(*(float *)(a2 + 4LL * i + 644) * 16384.0) << 16;
    scratch_buffer_2[i] = (unsigned __int16)sub_1401D11F0(*(float *)(a2 + 4LL * i + 628) * 16384.0) | shifted_bits;
    scratch_buffer_3[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 660) * 16384.0);
    scratch_buffer_4[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 676) * 16384.0);
  }
  loaded_word = sub_1401D11F0(*(float *)(a2 + 692) * 1024.0);
  for ( i = 0; i < 5 * a1[1145]; ++i )
    scratch_buffer_5[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 144) * 16384.0);
  for ( j = 0; j < 2; ++j )
  {
    for ( i = 0; i < a1[1160]; ++i )
      *((_WORD *)&scratch_buffer_6[2 * j] + i) = sub_1401D11F0(*(float *)(a2 + ((__int64)j << 6) + 16 + 4LL * i) * 4096.0);
  }
  for ( i = 0; i < a1[1145]; ++i )
    scratch_buffer[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i) * 65536.0);
  if ( a3[29] == 2 )
    table_value = word_140282798[a3[33]];
  else
    table_value = 0;
  for ( i = 0; i < a1[1146]; ++i )
    scratch_buffer_8[i] = sub_1401D11F0(*(float *)(a6 + 4LL * i));
  if ( (int)a1[1157] <= 1 && (int)a1[1168] <= 0 )
  {
    unused_written_slot_2 = a1;
    sub_1401C3AC0(
      a1,
      a4,
      a3,
      (__int64)scratch_buffer_8,
      a5,
      (__int64)scratch_buffer_6,
      (__int64)scratch_buffer_5,
      (__int64)scratch_buffer_7,
      (__int64)scratch_buffer_4,
      (__int64)scratch_buffer_3,
      (__int64)scratch_buffer_2,
      (__int64)scratch_buffer,
      a2 + 228,
      loaded_word,
      table_value);
  }
  else
  {
    unused_written_slot = (__int64)a1;
    LODWORD(packed_word_bits) = loaded_word;
    LODWORD(packed_word_bits_2) = table_value;
    sub_1401C4120(
      a1,
      a4,
      a3,
      (__int64)scratch_buffer_8,
      a5,
      (__int64)scratch_buffer_6,
      (__int64)scratch_buffer_5,
      (__int64)scratch_buffer_7,
      scratch_buffer_4,
      scratch_buffer_3,
      (__int64)scratch_buffer_2,
      (__int64)scratch_buffer,
      a2 + 228,
      packed_word_bits,
      packed_word_bits_2);
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D68F0) ----------------------------------------------------
__int64            sub_1401D68F0(__int64 a1, _DWORD *a2)
{
  BOOL comparison_result;

  *a2 = *(_DWORD *)(a1 + 20240);
  a2[1] = *(_DWORD *)(a1 + 20244);
  a2[2] = *(_DWORD *)(a1 + 4556);
  a2[3] = *(_DWORD *)(a1 + 4564);
  a2[4] = *(_DWORD *)(a1 + 4568);
  a2[5] = *(_DWORD *)(a1 + 4572);
  a2[6] = *(_DWORD *)(a1 + 4612);
  a2[7] = *(_DWORD *)(a1 + 4608);
  a2[8] = *(_DWORD *)(a1 + 4616);
  a2[9] = *(_DWORD *)(a1 + 4624);
  a2[10] = *(_DWORD *)(a1 + 6108);
  a2[12] = *(_DWORD *)(a1 + 6096);
  a2[13] = *(_DWORD *)(a1 + 4676);
  a2[18] = 1000 * *(__int16 *)(a1 + 4576);
  a2[19] = *(_DWORD *)(a1 + 4536);
  comparison_result = *(_DWORD *)(a1 + 4576) == 16 && !*(_DWORD *)(a1 + 28);
  a2[20] = comparison_result;
  return 0;
}

//----- (00000001401D6B20) ----------------------------------------------------
__int64            sub_1401D6B20(__int64 a1, __int64 a2, int a3, int a4)
{
  int i;
  int loaded_word;

  for ( i = 0; i < a4; ++i )
  {
    loaded_word = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
    if ( loaded_word > a3 )
      return 1;
    *(_DWORD *)(a1 + 4LL * i) = loaded_word;
  }
  return 0;
}

//----- (00000001401D6BB0) ----------------------------------------------------
unsigned __int64            sub_1401D6BB0(__m128i *a1, __m128i *a2, int a3, int a4)
{
  unsigned __int64 result;
  int k;
  int i;
  int m;
  int j;

  if ( a3 >= 4 )
  {
    crt_memcpy(a1, (     __m128i *)&dword_1402828B8[12], 0xCu);
    return (unsigned __int64)crt_memcpy(a2, (     __m128i *)&dword_140282848[8], 8u);
  }
  else if ( a4 <= 0 )
  {
    crt_memcpy(a1, (     __m128i *)&dword_1402828B8[3 * a3], 0xCu);
    return (unsigned __int64)crt_memcpy(a2, (     __m128i *)&dword_140282848[2 * a3], 8u);
  }
  else if ( a4 >= 0x8000 )
  {
    for ( i = 0; i < 3; ++i )
    {
      SR_VEC_PTR_LANES(128, a1, i32)[i] = (((__int16)a4 * (__int64)(dword_1402828B8[3 * a3 + 3 + i] - dword_1402828B8[3 * a3 + i])) >> 16)
                       + dword_1402828B8[3 * a3 + 3 + i];
      result = (unsigned int)(i + 1);
    }
    for ( j = 0; j < 2; ++j )
    {
      SR_VEC_PTR_LANES(128, a2, i32)[j] = (((__int16)a4 * (__int64)(dword_140282848[2 * a3 + 2 + j] - dword_140282848[2 * a3 + j])) >> 16)
                       + dword_140282848[2 * a3 + 2 + j];
      result = (unsigned int)(j + 1);
    }
  }
  else
  {
    for ( k = 0; k < 3; ++k )
    {
      SR_VEC_PTR_LANES(128, a1, i32)[k] = (((__int16)a4 * (__int64)(dword_1402828B8[3 * a3 + 3 + k] - dword_1402828B8[3 * a3 + k])) >> 16)
                       + dword_1402828B8[3 * a3 + k];
      result = (unsigned int)(k + 1);
    }
    for ( m = 0; m < 2; ++m )
    {
      SR_VEC_PTR_LANES(128, a2, i32)[m] = (((__int16)a4 * (__int64)(dword_140282848[2 * a3 + 2 + m] - dword_140282848[2 * a3 + m])) >> 16)
                       + dword_140282848[2 * a3 + m];
      result = (unsigned int)(m + 1);
    }
  }
  return result;
}

//----- (00000001401D6F30) ----------------------------------------------------
__int64            sub_1401D6F30(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  __int64 result;
  __int16 shifted_bits;
  int shifted_bits_2;
  int comparison_result;
  int i;
  int shifted_bits_3;

  shifted_bits = 0;
  result = (unsigned int)(a5 - 1);
  for ( i = a5 - 1; i >= 0; --i )
  {
    shifted_bits_3 = (*(unsigned __int8 *)(a3 + i) * shifted_bits) >> 8;
    shifted_bits_2 = *(char *)(a2 + i) << 10;
    if ( shifted_bits_2 <= 0 )
      comparison_result = shifted_bits_2 + (shifted_bits_2 < 0 ? 0x66 : 0);
    else
      comparison_result = shifted_bits_2 - 102;
    shifted_bits = ((unsigned int)(a4 * comparison_result) >> 16) + shifted_bits_3;
    *(_WORD *)(a1 + 2LL * i) = shifted_bits;
    result = (unsigned int)(i - 1);
  }
  return result;
}

//----- (00000001401D7000) ----------------------------------------------------
__int64            sub_1401D7000(int *a1, __int16 *a2, int a3)
{
  unsigned int shifted_bits;

  shifted_bits = ((a2[9] * (__int64)*(a1 - 9)) >> 16)
     + ((a2[8] * (__int64)*(a1 - 8)) >> 16)
     + ((a2[7] * (__int64)*(a1 - 7)) >> 16)
     + ((a2[6] * (__int64)*(a1 - 6)) >> 16)
     + ((a2[5] * (__int64)*(a1 - 5)) >> 16)
     + ((a2[4] * (__int64)*(a1 - 4)) >> 16)
     + ((a2[3] * (__int64)*(a1 - 3)) >> 16)
     + ((a2[2] * (__int64)*(a1 - 2)) >> 16)
     + ((a2[1] * (__int64)*(a1 - 1)) >> 16)
     + ((*a2 * (__int64)*a1) >> 16)
     + (a3 >> 1);
  if ( a3 == 16 )
    shifted_bits += ((a2[15] * (__int64)*(a1 - 15)) >> 16)
        + ((a2[14] * (__int64)*(a1 - 14)) >> 16)
        + ((a2[13] * (__int64)*(a1 - 13)) >> 16)
        + ((a2[12] * (__int64)*(a1 - 12)) >> 16)
        + ((a2[11] * (__int64)*(a1 - 11)) >> 16)
        + ((a2[10] * (__int64)*(a1 - 10)) >> 16);
  return shifted_bits;
}

//----- (00000001401D73B0) ----------------------------------------------------
__int64            sub_1401D73B0(int *a1, int *a2, __int16 *a3, int a4)
{
  int shifted_bits;
  int shifted_bits_2;
  int i;
  int loaded_word;
  int integer_difference;
  int loaded_word_2;

  loaded_word = *a1;
  loaded_word_2 = *a2;
  *a2 = *a1;
  shifted_bits = ((*a3 * (__int64)loaded_word) >> 16) + (a4 >> 1);
  for ( i = 2; i < a4; i += 2 )
  {
    integer_difference = a2[i - 1];
    a2[i - 1] = loaded_word_2;
    shifted_bits_2 = ((a3[i - 1] * (__int64)loaded_word_2) >> 16) + shifted_bits;
    loaded_word_2 = a2[i];
    a2[i] = integer_difference;
    shifted_bits = ((a3[i] * (__int64)integer_difference) >> 16) + shifted_bits_2;
  }
  a2[a4 - 1] = loaded_word_2;
  return 2 * ((unsigned int)((a3[a4 - 1] * (__int64)loaded_word_2) >> 16) + shifted_bits);
}

//----- (00000001401D7560) ----------------------------------------------------
__int64            sub_1401D7560(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int16 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  int loaded_word;
  __int64 result;
  int i;
  int j;
  int k;
  int m;
  int n;
  int ii;
  int loaded_word_2;
  int shifted_bits;
  int loaded_word_3;

  loaded_word_3 = *(_DWORD *)(a10 + 4LL * a7);
  if ( *(int *)(a9 + 4LL * a7) <= 1 )
    loaded_word = sub_1401BE820(1, 47);
  else
    loaded_word = sub_1401BE820(*(_DWORD *)(a9 + 4LL * a7), 47);
  shifted_bits = loaded_word;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a4 + 4LL * i) = ((((loaded_word >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a3 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a7 )
      shifted_bits = 4 * ((a8 * (__int64)loaded_word) >> 16);
    for ( j = a2[1083] - loaded_word_3 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a6 + 4LL * j) = (*(__int16 *)(a5 + 2LL * j) * (__int64)shifted_bits) >> 16;
  }
  result = a7;
  if ( *(_DWORD *)(a9 + 4LL * a7) != a2[1086] )
  {
    loaded_word_2 = sub_1401BE550(a2[1086], *(_DWORD *)(a9 + 4LL * a7), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)loaded_word_2) >> 16;
    if ( a11 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - loaded_word_3 - 2; m < a2[1083]; ++m )
        *(_DWORD *)(a6 + 4LL * m) = (*(int *)(a6 + 4LL * m) * (__int64)loaded_word_2) >> 16;
    }
    a2[1080] = ((int)a2[1080] * (__int64)loaded_word_2) >> 16;
    a2[1081] = ((int)a2[1081] * (__int64)loaded_word_2) >> 16;
    for ( n = 0; n < 16; ++n )
      a2[n + 960] = ((int)a2[n + 960] * (__int64)loaded_word_2) >> 16;
    for ( ii = 0; ii < 24; ++ii )
      a2[ii + 1056] = ((int)a2[ii + 1056] * (__int64)loaded_word_2) >> 16;
    result = *(unsigned int *)(a9 + 4LL * a7);
    a2[1086] = result;
  }
  return result;
}

//----- (00000001401D7910) ----------------------------------------------------
__m128i *           sub_1401D7910(
        __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 *a7,
        __int16 *a8,
        __int16 *a9,
        int a10,
        int a11,
        __int16 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  int shifted_bits;
  int integer_difference;
  int shifted_bits_2;
  int shifted_bits_3;
  int integer_sum;
  int scaled_index;
  int shifted_bits_4;
  int shifted_bits_5;
  int i;
  int shifted_bits_6;
  int shifted_bits_7;
  int shifted_bits_8;
  int scaled_index_2;
  int integer_quotient;
  int shifted_bits_9;
  int shifted_bits_10;
  int scaled_index_3;
  int shifted_bits_11;
  int *buffer_cursor;
  int saved_shifted_bits;
  int cached_shifted_bits;
  int call_result;
  int shifted_bits_12;
  __int16 saved_shifted_bits_2;
  __int32 scaled_index_4;
  __int32 *buffer_cursor_2;
  int *buffer_cursor_3;

  buffer_cursor_2 = &SR_VEC_LANES(128, a1[80], i32)[SR_VEC_LANES(128, a1[271], i32)[0] - a10 + 1];
  buffer_cursor = (int *)(a6 + 4LL * (SR_VEC_LANES(128, a1[270], i32)[3] - a10 + 2));
  shifted_bits_11 = a14 >> 6;
  buffer_cursor_3 = &SR_VEC_LANES(128, a1[243], i32)[3];
  for ( i = 0; i < a17; ++i )
  {
    SR_VEC_LANES(128, a1[271], i32)[1] = 196314165 * SR_VEC_LANES(128, a1[271], i32)[1] + 907633515;
    call_result = sub_1401D7000(buffer_cursor_3, a7, a19);
    if ( a2 == 2 )
    {
      shifted_bits_3 = ((a8[4] * (__int64)*(buffer_cursor - 4)) >> 16)
          + ((a8[3] * (__int64)*(buffer_cursor - 3)) >> 16)
          + ((a8[2] * (__int64)*(buffer_cursor - 2)) >> 16)
          + ((a8[1] * (__int64)*(buffer_cursor - 1)) >> 16)
          + ((*a8 * (__int64)*buffer_cursor) >> 16)
          + 2;
      ++buffer_cursor;
    }
    else
    {
      shifted_bits_3 = 0;
    }
    shifted_bits_9 = ((a12 * (__int64)SR_VEC_LANES(128, a1[270], i32)[0]) >> 16)
        + sub_1401D73B0(&SR_VEC_LANES(128, a1[270], i32)[1], SR_VEC_LANES(128, a1[264], i32), a9, a18);
    shifted_bits_10 = ((((__int64)a13 >> 16) * SR_VEC_LANES(128, a1[270], i32)[0]) >> 16)
        + (((__int16)a13 * (__int64)SR_VEC_LANES(128, a1[79], i32)[SR_VEC_LANES(128, a1[271], i32)[0] + 3]) >> 16);
    scaled_index = 4 * call_result - shifted_bits_9 - shifted_bits_10;
    if ( a10 <= 0 )
    {
      shifted_bits = (scaled_index >> 1) + 1;
    }
    else
    {
      shifted_bits_8 = 2 * (((((__int64)a11 >> 16) * *(buffer_cursor_2 - 1)) >> 16) + (((__int16)a11 * (__int64)(*(buffer_cursor_2 - 2) + *buffer_cursor_2)) >> 16));
      ++buffer_cursor_2;
      shifted_bits = ((shifted_bits_3 - shifted_bits_8 + 2 * scaled_index) >> 2) + 1;
    }
    shifted_bits_5 = *(_DWORD *)(a3 + 4LL * i) - (shifted_bits >> 1);
    if ( SR_VEC_LANES(128, a1[271], i32)[1] < 0 )
      shifted_bits_5 = (shifted_bits >> 1) - *(_DWORD *)(a3 + 4LL * i);
    if ( shifted_bits_5 <= 30720 )
    {
      if ( shifted_bits_5 >= -31744 )
        saved_shifted_bits = shifted_bits_5;
      else
        saved_shifted_bits = -31744;
      cached_shifted_bits = saved_shifted_bits;
    }
    else
    {
      cached_shifted_bits = 30720;
    }
    integer_difference = cached_shifted_bits - a16;
    shifted_bits_4 = (cached_shifted_bits - a16) >> 10;
    if ( a15 > 2048 )
    {
      integer_quotient = a15 / 2 - 512;
      if ( integer_difference <= integer_quotient )
      {
        if ( integer_difference >= 512 - a15 / 2 )
        {
          if ( integer_difference >= 0 )
            shifted_bits_4 = 0;
          else
            shifted_bits_4 = -1;
        }
        else
        {
          shifted_bits_4 = (integer_quotient + integer_difference) >> 10;
        }
      }
      else
      {
        shifted_bits_4 = (integer_difference - integer_quotient) >> 10;
      }
    }
    if ( shifted_bits_4 <= 0 )
    {
      if ( shifted_bits_4 )
      {
        if ( shifted_bits_4 == -1 )
        {
          integer_sum = a16;
          shifted_bits_2 = a16 - 944;
          shifted_bits_6 = (__int16)a15 * (__int16)(944 - a16);
          shifted_bits_7 = (__int16)a15 * (__int16)a16;
        }
        else
        {
          shifted_bits_2 = a16 + (shifted_bits_4 << 10) + 80;
          integer_sum = shifted_bits_2 + 1024;
          shifted_bits_6 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)shifted_bits_4 << 10) + 80);
          shifted_bits_7 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)shifted_bits_4 << 10) + 80 + 1024);
        }
      }
      else
      {
        shifted_bits_2 = a16;
        integer_sum = a16 + 944;
        shifted_bits_6 = (__int16)a15 * (__int16)a16;
        shifted_bits_7 = (__int16)a15 * (__int16)(a16 + 944);
      }
    }
    else
    {
      shifted_bits_2 = a16 + (shifted_bits_4 << 10) - 80;
      integer_sum = shifted_bits_2 + 1024;
      shifted_bits_6 = (__int16)a15 * (__int16)shifted_bits_2;
      shifted_bits_7 = (__int16)a15 * (__int16)(shifted_bits_2 + 1024);
    }
    if ( (__int16)(cached_shifted_bits - integer_sum) * (__int16)(cached_shifted_bits - integer_sum) + shifted_bits_7 < (__int16)(cached_shifted_bits - shifted_bits_2) * (__int16)(cached_shifted_bits - shifted_bits_2) + shifted_bits_6 )
      shifted_bits_2 = integer_sum;
    *(_BYTE *)(a4 + i) = ((shifted_bits_2 >> 9) + 1) >> 1;
    scaled_index_3 = 16 * shifted_bits_2;
    if ( SR_VEC_LANES(128, a1[271], i32)[1] < 0 )
      scaled_index_3 = -16 * shifted_bits_2;
    scaled_index_2 = 16 * call_result + scaled_index_3 + 2 * shifted_bits_3;
    if ( (((int)((shifted_bits_11 * (__int64)scaled_index_2) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((shifted_bits_11 * (__int64)scaled_index_2) >> 16) >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_12 = (((int)((shifted_bits_11 * (__int64)scaled_index_2) >> 16) >> 7) + 1) >> 1;
      else
        LOWORD(shifted_bits_12) = 0x8000;
      saved_shifted_bits_2 = shifted_bits_12;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = saved_shifted_bits_2;
    *++buffer_cursor_3 = scaled_index_2;
    SR_VEC_LANES(128, a1[270], i32)[1] = scaled_index_2 - 16 * *(_DWORD *)(a3 + 4LL * i);
    scaled_index_4 = SR_VEC_LANES(128, a1[270], i32)[1] - 4 * shifted_bits_9;
    SR_VEC_LANES(128, a1[270], i32)[0] = scaled_index_4;
    SR_VEC_LANES(128, a1[80], i32)[SR_VEC_LANES(128, a1[271], i32)[0]] = scaled_index_4 - 4 * shifted_bits_10;
    *(_DWORD *)(a6 + 4LL * SR_VEC_LANES(128, a1[270], i32)[3]) = 2 * (scaled_index_3 + 2 * shifted_bits_3);
    ++SR_VEC_LANES(128, a1[271], i32)[0];
    ++SR_VEC_LANES(128, a1[270], i32)[3];
    SR_VEC_LANES(128, a1[271], i32)[1] += *(char *)(a4 + i);
  }
  return crt_memcpy(a1 + 240, (__m128i *)((char *)a1 + 4 * a17 + 3840), 0x40u);
}

//----- (00000001401D82A0) ----------------------------------------------------
__int64            sub_1401D82A0(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int16 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14)
{
  int loaded_word;
  __int64 result;
  int i;
  int j;
  int k;
  int m;
  int ii;
  int jj;
  int kk;
  int loaded_word_2;
  int shifted_bits;
  int n;
  int loaded_word_3;
  __int64 scaled_index;

  loaded_word_3 = *(_DWORD *)(a12 + 4LL * a8);
  if ( *(int *)(a11 + 4LL * a8) <= 1 )
    loaded_word = sub_1401BE820(1, 47);
  else
    loaded_word = sub_1401BE820(*(_DWORD *)(a11 + 4LL * a8), 47);
  shifted_bits = loaded_word;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a5 + 4LL * i) = ((((loaded_word >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a4 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a8 )
      shifted_bits = 4 * ((a10 * (__int64)loaded_word) >> 16);
    for ( j = a2[1083] - loaded_word_3 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a7 + 4LL * j) = (*(__int16 *)(a6 + 2LL * j) * (__int64)shifted_bits) >> 16;
  }
  result = a8;
  if ( *(_DWORD *)(a11 + 4LL * a8) != a2[1086] )
  {
    loaded_word_2 = sub_1401BE550(a2[1086], *(_DWORD *)(a11 + 4LL * a8), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)loaded_word_2) >> 16;
    if ( a13 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - loaded_word_3 - 2; m < a2[1083] - a14; ++m )
        *(_DWORD *)(a7 + 4LL * m) = (*(int *)(a7 + 4LL * m) * (__int64)loaded_word_2) >> 16;
    }
    for ( n = 0; n < a9; ++n )
    {
      scaled_index = 1300LL * n + a3;
      *(_DWORD *)(scaled_index + 1280) = (*(int *)(scaled_index + 1280) * (__int64)loaded_word_2) >> 16;
      *(_DWORD *)(scaled_index + 1284) = (*(int *)(scaled_index + 1284) * (__int64)loaded_word_2) >> 16;
      for ( ii = 0; ii < 16; ++ii )
        *(_DWORD *)(scaled_index + 4LL * ii) = (*(int *)(scaled_index + 4LL * ii) * (__int64)loaded_word_2) >> 16;
      for ( jj = 0; jj < 24; ++jj )
        *(_DWORD *)(scaled_index + 4LL * jj + 1184) = (*(int *)(scaled_index + 4LL * jj + 1184) * (__int64)loaded_word_2) >> 16;
      for ( kk = 0; kk < 40; ++kk )
      {
        *(_DWORD *)(scaled_index + 4LL * kk + 864) = (*(int *)(scaled_index + 4LL * kk + 864) * (__int64)loaded_word_2) >> 16;
        *(_DWORD *)(scaled_index + 4LL * kk + 1024) = (*(int *)(scaled_index + 4LL * kk + 1024) * (__int64)loaded_word_2) >> 16;
      }
    }
    result = *(unsigned int *)(a11 + 4LL * a8);
    a2[1086] = result;
  }
  return result;
}

//----- (00000001401D8730) ----------------------------------------------------
__int64            sub_1401D8730(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 *a9,
        __int16 *a10,
        __int16 *a11,
        int a12,
        int a13,
        __int16 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int16 a23,
        int a24,
        int *a25,
        int a26)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int j;
  int shifted_bits;
  void *destination_buffer;
  int shifted_bits_2;
  int shifted_bits_3;
  int *state_address;
  int i;
  int shifted_bits_4;
  int k;
  int integer_sum;
  int scaled_index;
  int shifted_bits_5;
  int shifted_bits_6;
  int loaded_word;
  int shifted_bits_7;
  int shifted_bits_8;
  int *saved_alloca_result;
  int scaled_index_2;
  int shifted_bits_9;
  int shifted_bits_10;
  int scaled_index_3;
  int integer_sum_2;
  int integer_sum_3;
  int unused_written_slot;
  int call_result;
  int integer_difference;
  int integer_quotient;
  int cached_j;
  int cached_j_2;
  int scaled_index_4;
  int cached_j_3;
  int *buffer_cursor;
  int saved_loaded_word;
  int cached_loaded_word;
  int shifted_bits_11;
  int saved_shifted_bits;
  _DWORD *buffer_cursor_2;
  int loaded_word_2;
  int shifted_bits_12;
  int *record_pointer;
  void *destination_buffer_2;
  __int64 unused_local;

  record_word_offset = 56LL * a24 + 15;
  if ( record_word_offset <= 56LL * a24 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  buffer_cursor_2 = (_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a12 + 1) + 1280);
  buffer_cursor = (int *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a12 + 2));
  shifted_bits_12 = a16 >> 6;
  for ( i = 0; i < a19; ++i )
  {
    if ( a3 == 2 )
    {
      shifted_bits_3 = 2;
      shifted_bits_3 = ((*a10 * (__int64)*buffer_cursor) >> 16) + 2;
      shifted_bits_3 += (a10[1] * (__int64)*(buffer_cursor - 1)) >> 16;
      shifted_bits_3 += (a10[2] * (__int64)*(buffer_cursor - 2)) >> 16;
      shifted_bits_3 += (a10[3] * (__int64)*(buffer_cursor - 3)) >> 16;
      shifted_bits_3 += (a10[4] * (__int64)*(buffer_cursor - 4)) >> 16;
      shifted_bits_3 *= 2;
      ++buffer_cursor;
    }
    else
    {
      shifted_bits_3 = 0;
    }
    if ( a12 <= 0 )
    {
      shifted_bits_10 = 0;
    }
    else
    {
      shifted_bits_10 = ((__int16)a13 * (__int64)(*(buffer_cursor_2 - 2) + *buffer_cursor_2)) >> 16;
      shifted_bits_10 += (((__int64)a13 >> 16) * (int)*(buffer_cursor_2 - 1)) >> 16;
      shifted_bits_10 = shifted_bits_3 - 4 * shifted_bits_10;
      ++buffer_cursor_2;
    }
    for ( j = 0; j < a24; ++j )
    {
      destination_buffer = (void *)(1300LL * j + a2);
      state_address = &saved_alloca_result[14 * j];
      *((_DWORD *)destination_buffer + 322) = 196314165 * *((_DWORD *)destination_buffer + 322) + 907633515;
      record_pointer = (int *)((char *)destination_buffer + 4 * i + 60);
      call_result = 16 * sub_1401D7000(record_pointer, a9, a22);
      shifted_bits_5 = ((a23 * (__int64)*((int *)destination_buffer + 296)) >> 16) + *((_DWORD *)destination_buffer + 321);
      shifted_bits_4 = ((a23 * (__int64)(*((_DWORD *)destination_buffer + 297) - shifted_bits_5)) >> 16) + *((_DWORD *)destination_buffer + 296);
      *((_DWORD *)destination_buffer + 296) = shifted_bits_5;
      shifted_bits_2 = a21 >> 1;
      shifted_bits_2 = ((*a11 * (__int64)shifted_bits_5) >> 16) + (a21 >> 1);
      for ( k = 2; k < a21; k += 2 )
      {
        shifted_bits_5 = ((a23 * (__int64)(*((_DWORD *)destination_buffer + k + 296) - shifted_bits_4)) >> 16) + *((_DWORD *)destination_buffer + k + 295);
        *((_DWORD *)destination_buffer + k + 295) = shifted_bits_4;
        shifted_bits_2 += (a11[k - 1] * (__int64)shifted_bits_4) >> 16;
        shifted_bits_4 = ((a23 * (__int64)(*((_DWORD *)destination_buffer + k + 297) - shifted_bits_5)) >> 16) + *((_DWORD *)destination_buffer + k + 296);
        *((_DWORD *)destination_buffer + k + 296) = shifted_bits_5;
        shifted_bits_2 += (a11[k] * (__int64)shifted_bits_5) >> 16;
      }
      *((_DWORD *)destination_buffer + a21 + 295) = shifted_bits_4;
      shifted_bits_2 += (a11[a21 - 1] * (__int64)shifted_bits_4) >> 16;
      shifted_bits_2 *= 2;
      shifted_bits_2 += (a14 * (__int64)*((int *)destination_buffer + 320)) >> 16;
      shifted_bits_2 *= 4;
      shifted_bits_9 = ((__int16)a15 * (__int64)*((int *)destination_buffer + *a25 + 256)) >> 16;
      shifted_bits_9 += (((__int64)a15 >> 16) * *((int *)destination_buffer + 320)) >> 16;
      shifted_bits_9 *= 4;
      shifted_bits_5 = call_result + shifted_bits_10;
      shifted_bits_4 = (((call_result + shifted_bits_10 - (shifted_bits_9 + shifted_bits_2)) >> 3) + 1) >> 1;
      loaded_word = *(_DWORD *)(a4 + 4LL * i) - shifted_bits_4;
      if ( *((int *)destination_buffer + 322) < 0 )
        loaded_word = -loaded_word;
      if ( loaded_word <= 30720 )
      {
        if ( loaded_word >= -31744 )
          saved_loaded_word = loaded_word;
        else
          saved_loaded_word = -31744;
        cached_loaded_word = saved_loaded_word;
      }
      else
      {
        cached_loaded_word = 30720;
      }
      loaded_word = cached_loaded_word;
      shifted_bits = cached_loaded_word - a18;
      shifted_bits_6 = (cached_loaded_word - a18) >> 10;
      if ( a17 > 2048 )
      {
        integer_quotient = a17 / 2 - 512;
        if ( shifted_bits <= integer_quotient )
        {
          if ( shifted_bits >= -integer_quotient )
          {
            if ( shifted_bits >= 0 )
              shifted_bits_6 = 0;
            else
              shifted_bits_6 = -1;
          }
          else
          {
            shifted_bits_6 = (integer_quotient + shifted_bits) >> 10;
          }
        }
        else
        {
          shifted_bits_6 = (shifted_bits - integer_quotient) >> 10;
        }
      }
      if ( shifted_bits_6 <= 0 )
      {
        if ( shifted_bits_6 )
        {
          if ( shifted_bits_6 == -1 )
          {
            integer_sum = a18;
            shifted_bits = a18 - 944;
            shifted_bits_8 = (__int16)a17 * (__int16)(944 - a18);
            shifted_bits_7 = (__int16)a17 * (__int16)a18;
          }
          else
          {
            shifted_bits = a18 + (shifted_bits_6 << 10) + 80;
            integer_sum = shifted_bits + 1024;
            shifted_bits_8 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)shifted_bits_6 << 10) + 80);
            shifted_bits_7 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)shifted_bits_6 << 10) + 80 + 1024);
          }
        }
        else
        {
          shifted_bits = a18;
          integer_sum = a18 + 944;
          shifted_bits_8 = (__int16)a17 * (__int16)a18;
          shifted_bits_7 = (__int16)a17 * (__int16)(a18 + 944);
        }
      }
      else
      {
        shifted_bits = a18 + (shifted_bits_6 << 10) - 80;
        integer_sum = shifted_bits + 1024;
        shifted_bits_8 = (__int16)a17 * (__int16)shifted_bits;
        shifted_bits_7 = (__int16)a17 * (__int16)(shifted_bits + 1024);
      }
      shifted_bits_8 = ((__int16)(loaded_word - shifted_bits) * (__int16)(loaded_word - shifted_bits) + shifted_bits_8) >> 10;
      unused_written_slot = loaded_word - integer_sum;
      shifted_bits_7 = ((__int16)(loaded_word - integer_sum) * (__int16)(loaded_word - integer_sum) + shifted_bits_7) >> 10;
      if ( shifted_bits_8 >= shifted_bits_7 )
      {
        state_address[1] = shifted_bits_7 + *((_DWORD *)destination_buffer + 324);
        state_address[8] = shifted_bits_8 + *((_DWORD *)destination_buffer + 324);
        *state_address = integer_sum;
        state_address[7] = shifted_bits;
      }
      else
      {
        state_address[1] = shifted_bits_8 + *((_DWORD *)destination_buffer + 324);
        state_address[8] = shifted_bits_7 + *((_DWORD *)destination_buffer + 324);
        *state_address = shifted_bits;
        state_address[7] = integer_sum;
      }
      scaled_index_2 = 16 * *state_address;
      if ( *((int *)destination_buffer + 322) < 0 )
        scaled_index_2 = -scaled_index_2;
      integer_sum_2 = shifted_bits_3 + scaled_index_2;
      integer_sum_3 = call_result + shifted_bits_3 + scaled_index_2;
      state_address[4] = integer_sum_3 - 16 * *(_DWORD *)(a4 + 4LL * i);
      integer_difference = state_address[4] - shifted_bits_2;
      state_address[5] = integer_difference - shifted_bits_9;
      state_address[3] = integer_difference;
      state_address[6] = integer_sum_2;
      state_address[2] = integer_sum_3;
      scaled_index_2 = 16 * state_address[7];
      if ( *((int *)destination_buffer + 322) < 0 )
        scaled_index_2 = -scaled_index_2;
      integer_sum_2 = shifted_bits_3 + scaled_index_2;
      integer_sum_3 = call_result + shifted_bits_3 + scaled_index_2;
      state_address[11] = integer_sum_3 - 16 * *(_DWORD *)(a4 + 4LL * i);
      integer_difference = state_address[11] - shifted_bits_2;
      state_address[12] = integer_difference - shifted_bits_9;
      state_address[10] = integer_difference;
      state_address[13] = integer_sum_2;
      state_address[9] = integer_sum_3;
    }
    *a25 = (*a25 - 1) % 40;
    if ( *a25 < 0 )
      *a25 += 40;
    scaled_index = (a26 + *a25) % 40;
    scaled_index_3 = saved_alloca_result[1];
    cached_j_2 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( saved_alloca_result[14 * j + 1] < scaled_index_3 )
      {
        scaled_index_3 = saved_alloca_result[14 * j + 1];
        cached_j_2 = j;
      }
    }
    loaded_word_2 = *(_DWORD *)(1300LL * cached_j_2 + a2 + 4LL * scaled_index + 384);
    for ( j = 0; j < a24; ++j )
    {
      if ( *(_DWORD *)(1300LL * j + a2 + 4LL * scaled_index + 384) != loaded_word_2 )
      {
        saved_alloca_result[14 * j + 1] += 0x7FFFFFF;
        saved_alloca_result[14 * j + 8] += 0x7FFFFFF;
      }
    }
    scaled_index_4 = saved_alloca_result[1];
    scaled_index_3 = saved_alloca_result[8];
    cached_j = 0;
    cached_j_3 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( saved_alloca_result[14 * j + 1] > scaled_index_4 )
      {
        scaled_index_4 = saved_alloca_result[14 * j + 1];
        cached_j = j;
      }
      if ( saved_alloca_result[14 * j + 8] < scaled_index_3 )
      {
        scaled_index_3 = saved_alloca_result[14 * j + 8];
        cached_j_3 = j;
      }
    }
    if ( scaled_index_3 < scaled_index_4 )
    {
      destination_buffer_2 = (void *)(1300LL * cached_j + a2 + 4LL * i);
      crt_memcpy((__m128i *)destination_buffer_2, (     __m128i *)(1300LL * cached_j_3 + a2 + 4LL * i), 1300 - 4LL * i);
      crt_memcpy((__m128i *)&saved_alloca_result[14 * cached_j], (     __m128i *)&saved_alloca_result[14 * cached_j_3 + 7], 0x1Cu);
    }
    destination_buffer = (void *)(1300LL * cached_j_2 + a2);
    if ( a20 > 0 || i >= a26 )
    {
      *(_BYTE *)(a5 + i - a26) = ((*((int *)destination_buffer + scaled_index + 136) >> 9) + 1) >> 1;
      if ( (((int)((*(int *)(a8 + 4LL * scaled_index) * (__int64)*((int *)destination_buffer + scaled_index + 176)) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((*(int *)(a8 + 4LL * scaled_index) * (__int64)*((int *)destination_buffer + scaled_index + 176)) >> 16) >> 7) + 1) >> 1 >= -32768 )
          shifted_bits_11 = (((int)((*(int *)(a8 + 4LL * scaled_index) * (__int64)*((int *)destination_buffer + scaled_index + 176)) >> 16) >> 7) + 1) >> 1;
        else
          shifted_bits_11 = -32768;
        saved_shifted_bits = shifted_bits_11;
      }
      else
      {
        saved_shifted_bits = 0x7FFF;
      }
      *(_WORD *)(a6 + 2LL * (i - a26)) = saved_shifted_bits;
      *(_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a26) + 1280) = *((_DWORD *)destination_buffer + scaled_index + 256);
      *(_DWORD *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a26)) = *((_DWORD *)destination_buffer + scaled_index + 216);
    }
    ++*(_DWORD *)(a1 + 4336);
    ++*(_DWORD *)(a1 + 4332);
    for ( j = 0; j < a24; ++j )
    {
      destination_buffer = (void *)(1300LL * j + a2);
      state_address = &saved_alloca_result[14 * j];
      *((_DWORD *)destination_buffer + 320) = state_address[3];
      *((_DWORD *)destination_buffer + 321) = state_address[4];
      *((_DWORD *)destination_buffer + i + 16) = state_address[2];
      *((_DWORD *)destination_buffer + *a25 + 176) = state_address[2];
      *((_DWORD *)destination_buffer + *a25 + 136) = *state_address;
      *((_DWORD *)destination_buffer + *a25 + 216) = 2 * state_address[6];
      *((_DWORD *)destination_buffer + *a25 + 256) = state_address[5];
      *((_DWORD *)destination_buffer + 322) += ((*state_address >> 9) + 1) >> 1;
      *((_DWORD *)destination_buffer + *a25 + 96) = *((_DWORD *)destination_buffer + 322);
      *((_DWORD *)destination_buffer + 324) = state_address[1];
    }
    *(_DWORD *)(a8 + 4LL * *a25) = shifted_bits_12;
  }
  for ( j = 0; j < a24; ++j )
  {
    destination_buffer = (void *)(1300LL * j + a2);
    crt_memcpy((__m128i *)destination_buffer, (     __m128i *)((char *)destination_buffer + 4 * a19), 0x40u);
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401D9A80) ----------------------------------------------------
__int64            sub_1401D9A80(__int64 a1,      __m128i *a2)
{
  int j;
  int m;
  int k;
  int saved_running_total;
  int i;
  __int64 shifted_bits;
  int running_total;
  int cached_running_total;

  shifted_bits = a1 + 4196;
  *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
  saved_running_total = 0;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 2332) * i < SR_VEC_PTR_LANES(128, a2, i32)[*(_DWORD *)(a1 + 2324) - 1] && i != *(_DWORD *)(a1 + 2324); ++i )
    {
      running_total = 0;
      for ( j = 0; j < 5; ++j )
        running_total += SR_VEC_LANES(128, a2[6], i16)[5 * (*(_DWORD *)(a1 + 2324) - 1 - i) + j];
      if ( running_total > saved_running_total )
      {
        saved_running_total = running_total;
        crt_memcpy(
          (__m128i *)(shifted_bits + 4),
          (     __m128i *)((char *)a2 + 10 * (__int16)(*(_DWORD *)(a1 + 2324) - 1 - i) + 96),
          0xAu);
        *(_DWORD *)shifted_bits = SR_VEC_PTR_LANES(128, a2, i32)[*(_DWORD *)(a1 + 2324) - 1 - i] << 8;
      }
    }
    crt_memset((void *)(uintptr_t)((_WORD *)(shifted_bits + 4)), 0, 0xAu);
    *(_WORD *)(shifted_bits + 8) = saved_running_total;
    if ( saved_running_total >= 11469 )
    {
      if ( saved_running_total > 15565 )
      {
        for ( k = 0; k < 5; ++k )
          *(_WORD *)(shifted_bits + 2LL * k + 4) = ((__int16)(255016960 / saved_running_total) * *(__int16 *)(shifted_bits + 2LL * k + 4)) >> 14;
      }
    }
    else
    {
      if ( saved_running_total <= 1 )
        cached_running_total = 1;
      else
        cached_running_total = saved_running_total;
      for ( m = 0; m < 5; ++m )
        *(_WORD *)(shifted_bits + 2LL * m + 4) = ((__int16)(11744256 / cached_running_total) * *(__int16 *)(shifted_bits + 2LL * m + 4)) >> 10;
    }
  }
  else
  {
    *(_DWORD *)shifted_bits = 4608 * *(__int16 *)(a1 + 2316);
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 4200)), 0, 0xAu);
  }
  crt_memcpy((__m128i *)(shifted_bits + 14), a2 + 4, 2LL * *(int *)(a1 + 2340));
  *(_WORD *)(shifted_bits + 68) = SR_VEC_LANES(128, a2[8], i16)[4];
  crt_memcpy(
    (__m128i *)(shifted_bits + 72),
    (     __m128i *)((char *)&SR_VEC_PTR_LANES(128, a2, u64)[1] + 4 * *(_DWORD *)(a1 + 2324)),
    8u);
  *(_DWORD *)(shifted_bits + 88) = *(_DWORD *)(a1 + 2332);
  *(_DWORD *)(shifted_bits + 84) = *(_DWORD *)(a1 + 2324);
  return shifted_bits;
}

// 1401D9CBD: conditional instruction was optimized away because %var_44.4>=3CCE

//----- (00000001401D9E20) ----------------------------------------------------
__int64            sub_1401D9E20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 loaded_word;
  __int64 integer_sum;
  void *alloca_result;
  unsigned __int64 loaded_word_2;
  void *alloca_result_2;
  int call_result;
  int loaded_word_3;
  int loaded_word_4;
  int i;
  int shifted_bits;
  signed __int16 shifted_bits_2;
  __m128i *destination_buffer;
  int *running_total;
  int shifted_bits_3;
  int k;
  int state_address;
  signed int call_result_2;
  int shifted_bits_4;
  int shifted_bits_5;
  int call_result_3;
  int element_index;
  int shifted_bits_6;
  int scaled_index;
  int shifted_bits_7;
  __int16 *record_pointer;
  int j;
  int *buffer_cursor;
  int saved_shifted_bits;
  int cached_shifted_bits;
  __int32 scaled_index_2;
  int saved_shifted_bits_2;
  int cached_shifted_bits_2;
  int saved_shifted_bits_3;
  int cached_shifted_bits_3;
  __int32 scaled_index_3;
  __int32 cached_scaled_index;
  int shifted_bits_8;
  int saved_shifted_bits_4;
  int shifted_bits_9;
  int saved_shifted_bits_5;
  int shifted_bits_10;
  int saved_shifted_bits_6;
  int integer_difference;
  int cached_integer_difference;
  int cached_call_result;
  int saved_shifted_bits_7;
  int cached_shifted_bits_4;
  int saved_shifted_bits_8;
  int cached_shifted_bits_5;
  int *saved_alloca_result;
  int loaded_word_5;
  int callee_output_word;
  int callee_output_word_2;
  int callee_output_word_3;
  int callee_output_word_4;
  unsigned int loaded_word_6;
  int *saved_alloca_result_2;
  __int64 scaled_index_4;
  _WORD *record_pointer_2;
  __int16 destination_buffer_2[16];
  __int64 unused_local;

  running_total = (int *)(a1 + 4196);
  loaded_word = 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336));
  integer_sum = loaded_word + 15;
  if ( loaded_word + 15 <= loaded_word )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  loaded_word_2 = 2LL * *(int *)(a1 + 2336) + 15;
  if ( loaded_word_2 <= 2LL * *(int *)(a1 + 2336) )
    loaded_word_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(loaded_word_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result_2;
  shifted_bits_4 = running_total[18] >> 6;
  shifted_bits_5 = running_total[19] >> 6;
  if ( *(_DWORD *)(a1 + 2376) )
    crt_memset((void *)(uintptr_t)((_WORD *)running_total + 7), 0, 0x20u);
  sub_1401DAE50(&callee_output_word, &callee_output_word_2, &callee_output_word_4, &callee_output_word_3, a1 + 4, (__int64)&shifted_bits_4, *(_DWORD *)(a1 + 2332), *(_DWORD *)(a1 + 2324));
  if ( callee_output_word >> callee_output_word_3 >= callee_output_word_4 >> callee_output_word_2 )
    call_result = sub_1401BE3A0(0, running_total[22] * running_total[21] - 128);
  else
    call_result = sub_1401BE3A0(0, running_total[22] * (running_total[21] - 1) - 128);
  scaled_index_4 = a1 + 4LL * call_result + 4;
  record_pointer = (__int16 *)(running_total + 1);
  shifted_bits_2 = *((_WORD *)running_total + 28);
  loaded_word_5 = word_14027A0B4[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  if ( *(_DWORD *)(a1 + 4188) == 2 )
    shifted_bits_6 = word_14027A0B8[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  else
    shifted_bits_6 = word_14027A114[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  sub_1401BBDE0((__int64)running_total + 14, *(_DWORD *)(a1 + 2340), 64881);
  crt_memcpy((__m128i *)destination_buffer_2, (     __m128i *)((char *)running_total + 14), 2LL * *(int *)(a1 + 2340));
  if ( !*(_DWORD *)(a1 + 4184) )
  {
    shifted_bits_2 = 0x4000;
    if ( *(_DWORD *)(a1 + 4188) == 2 )
    {
      for ( i = 0; i < 5; ++i )
        shifted_bits_2 -= record_pointer[i];
      shifted_bits_2 = sub_1401BE3E0(0xCCDu, shifted_bits_2);
      shifted_bits_2 = (*((__int16 *)running_total + 34) * shifted_bits_2) >> 14;
    }
    else
    {
      loaded_word_6 = sub_1401BBF70((__int64)running_total + 14, *(_DWORD *)(a1 + 2340));
      call_result_2 = sub_1401BE360(0x8000000u, loaded_word_6);
      call_result_2 = 8 * sub_1401BE420(0x400000u, call_result_2);
      shifted_bits_6 = (int)(((__int16)shifted_bits_6 * (__int64)call_result_2) >> 16) >> 14;
    }
  }
  scaled_index = running_total[13];
  shifted_bits_7 = ((*running_total >> 7) + 1) >> 1;
  element_index = *(_DWORD *)(a1 + 2336);
  state_address = *(_DWORD *)(a1 + 2336) - shifted_bits_7 - *(_DWORD *)(a1 + 2340) - 2;
  loaded_word_3 = *(_DWORD *)(a1 + 2336) - state_address;
  record_pointer_2 = (_WORD *)saved_alloca_result_2 + state_address;
  sub_1401BBB40(record_pointer_2, a1 + 2LL * state_address + 1348, destination_buffer_2, loaded_word_3, *(_DWORD *)(a1 + 2340));
  call_result_3 = sub_1401BE820(running_total[19], 46);
  if ( call_result_3 >= 0x3FFFFFFF )
    cached_call_result = 0x3FFFFFFF;
  else
    cached_call_result = call_result_3;
  call_result_3 = cached_call_result;
  for ( i = *(_DWORD *)(a1 + 2340) + state_address; i < *(_DWORD *)(a1 + 2336); ++i )
    saved_alloca_result[i] = (*((__int16 *)saved_alloca_result_2 + i) * (__int64)call_result_3) >> 16;
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    buffer_cursor = &saved_alloca_result[element_index - shifted_bits_7 + 2];
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      shifted_bits_3 = 2;
      shifted_bits_3 = ((*record_pointer * (__int64)*buffer_cursor) >> 16) + 2;
      shifted_bits_3 += (record_pointer[1] * (__int64)*(buffer_cursor - 1)) >> 16;
      shifted_bits_3 += (record_pointer[2] * (__int64)*(buffer_cursor - 2)) >> 16;
      shifted_bits_3 += (record_pointer[3] * (__int64)*(buffer_cursor - 3)) >> 16;
      shifted_bits_3 += (record_pointer[4] * (__int64)*(buffer_cursor - 4)) >> 16;
      ++buffer_cursor;
      scaled_index = 196314165 * scaled_index + 907633515;
      state_address = (scaled_index >> 25) & 0x7F;
      saved_alloca_result[element_index++] = 4 * (((shifted_bits_2 * (__int64)*(int *)(scaled_index_4 + 4LL * state_address)) >> 16) + shifted_bits_3);
    }
    for ( k = 0; k < 5; ++k )
      record_pointer[k] = (record_pointer[k] * (__int16)loaded_word_5) >> 15;
    if ( *(_BYTE *)(a1 + 2789) )
      shifted_bits_2 = ((__int16)shifted_bits_6 * shifted_bits_2) >> 15;
    *running_total += (655LL * *running_total) >> 16;
    loaded_word_4 = sub_1401BE360(*running_total, 4608 * *(__int16 *)(a1 + 2316));
    *running_total = loaded_word_4;
    shifted_bits_7 = ((*running_total >> 7) + 1) >> 1;
  }
  destination_buffer = (__m128i *)&saved_alloca_result[*(_DWORD *)(a1 + 2336) - 16];
  crt_memcpy(destination_buffer, (     __m128i *)(a1 + 1284), 0x40u);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    shifted_bits = *(int *)(a1 + 2340) >> 1;
    shifted_bits += (destination_buffer_2[0] * (__int64)SR_VEC_LANES(128, destination_buffer[3], i32)[i + 3]) >> 16;
    shifted_bits += (destination_buffer_2[1] * (__int64)SR_VEC_LANES(128, destination_buffer[3], i32)[i + 2]) >> 16;
    shifted_bits += (destination_buffer_2[2] * (__int64)SR_VEC_LANES(128, destination_buffer[3], i32)[i + 1]) >> 16;
    shifted_bits += (destination_buffer_2[3] * (__int64)SR_VEC_LANES(128, destination_buffer[3], i32)[i]) >> 16;
    shifted_bits += (destination_buffer_2[4] * (__int64)SR_VEC_LANES(128, destination_buffer[2], i32)[i + 3]) >> 16;
    shifted_bits += (destination_buffer_2[5] * (__int64)SR_VEC_LANES(128, destination_buffer[2], i32)[i + 2]) >> 16;
    shifted_bits += (destination_buffer_2[6] * (__int64)SR_VEC_LANES(128, destination_buffer[2], i32)[i + 1]) >> 16;
    shifted_bits += (destination_buffer_2[7] * (__int64)SR_VEC_LANES(128, destination_buffer[2], i32)[i]) >> 16;
    shifted_bits += (destination_buffer_2[8] * (__int64)SR_VEC_LANES(128, destination_buffer[1], i32)[i + 3]) >> 16;
    shifted_bits += (destination_buffer_2[9] * (__int64)SR_VEC_LANES(128, destination_buffer[1], i32)[i + 2]) >> 16;
    for ( k = 10; k < *(_DWORD *)(a1 + 2340); ++k )
      shifted_bits += (destination_buffer_2[k] * (__int64)SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 16 - k - 1]) >> 16;
    if ( shifted_bits <= 0x7FFFFFF )
    {
      if ( shifted_bits >= -134217728 )
        saved_shifted_bits_7 = shifted_bits;
      else
        saved_shifted_bits_7 = -134217728;
      cached_shifted_bits_4 = saved_shifted_bits_7;
    }
    else
    {
      cached_shifted_bits_4 = 0x7FFFFFF;
    }
    if ( 16 * cached_shifted_bits_4 + SR_VEC_LANES(128, destination_buffer[4], i32)[i] < 0 )
    {
      if ( shifted_bits <= 0x7FFFFFF )
      {
        if ( shifted_bits >= -134217728 )
          saved_shifted_bits_2 = shifted_bits;
        else
          saved_shifted_bits_2 = -134217728;
        cached_shifted_bits_2 = saved_shifted_bits_2;
      }
      else
      {
        cached_shifted_bits_2 = 0x7FFFFFF;
      }
      if ( ((16 * cached_shifted_bits_2) | SR_VEC_LANES(128, destination_buffer[4], i32)[i]) < 0 )
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits_3 = shifted_bits;
          else
            saved_shifted_bits_3 = -134217728;
          cached_shifted_bits_3 = saved_shifted_bits_3;
        }
        else
        {
          cached_shifted_bits_3 = 0x7FFFFFF;
        }
        scaled_index_3 = SR_VEC_LANES(128, destination_buffer[4], i32)[i] + 16 * cached_shifted_bits_3;
      }
      else
      {
        scaled_index_3 = 0x7FFFFFFF;
      }
      cached_scaled_index = scaled_index_3;
    }
    else
    {
      if ( shifted_bits <= 0x7FFFFFF )
      {
        if ( shifted_bits >= -134217728 )
          saved_shifted_bits_8 = shifted_bits;
        else
          saved_shifted_bits_8 = -134217728;
        cached_shifted_bits_5 = saved_shifted_bits_8;
      }
      else
      {
        cached_shifted_bits_5 = 0x7FFFFFF;
      }
      if ( ((16 * cached_shifted_bits_5) & SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >= 0 )
      {
        if ( shifted_bits <= 0x7FFFFFF )
        {
          if ( shifted_bits >= -134217728 )
            saved_shifted_bits = shifted_bits;
          else
            saved_shifted_bits = -134217728;
          cached_shifted_bits = saved_shifted_bits;
        }
        else
        {
          cached_shifted_bits = 0x7FFFFFF;
        }
        scaled_index_2 = SR_VEC_LANES(128, destination_buffer[4], i32)[i] + 16 * cached_shifted_bits;
      }
      else
      {
        scaled_index_2 = 0x80000000;
      }
      cached_scaled_index = scaled_index_2;
    }
    SR_VEC_LANES(128, destination_buffer[4], i32)[i] = cached_scaled_index;
    if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_8 = (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
      else
        shifted_bits_8 = -32768;
      saved_shifted_bits_4 = shifted_bits_8;
    }
    else
    {
      saved_shifted_bits_4 = 0x7FFF;
    }
    if ( saved_shifted_bits_4 <= 0x7FFF )
    {
      if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          shifted_bits_9 = (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          shifted_bits_9 = -32768;
        saved_shifted_bits_5 = shifted_bits_9;
      }
      else
      {
        saved_shifted_bits_5 = 0x7FFF;
      }
      if ( saved_shifted_bits_5 >= -32768 )
      {
        if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            shifted_bits_10 = (((int)((shifted_bits_5 * (__int64)SR_VEC_LANES(128, destination_buffer[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
          else
            shifted_bits_10 = -32768;
          saved_shifted_bits_6 = shifted_bits_10;
        }
        else
        {
          saved_shifted_bits_6 = 0x7FFF;
        }
        integer_difference = saved_shifted_bits_6;
      }
      else
      {
        integer_difference = -32768;
      }
      cached_integer_difference = integer_difference;
    }
    else
    {
      cached_integer_difference = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = cached_integer_difference;
  }
  crt_memcpy((__m128i *)(a1 + 1284), (__m128i *)((char *)destination_buffer + 4 * *(int *)(a1 + 2328)), 0x40u);
  running_total[13] = scaled_index;
  *((_WORD *)running_total + 28) = shifted_bits_2;
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = shifted_bits_7;
  return 0; /* no caller reads the result */
}

//----- (00000001401DAE50) ----------------------------------------------------
__int64            sub_1401DAE50(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        signed int a7,
        int a8)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int i;
  signed int j;
  int shifted_bits;
  int saved_shifted_bits;
  int *state_address;
  int *saved_alloca_result;
  __int64 unused_local;

  record_word_offset = 4LL * a7 + 15;
  if ( record_word_offset <= 4LL * a7 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  state_address = &i;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < a7; ++j )
    {
      if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 <= 0x7FFF )
      {
        if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 >= -32768 )
          shifted_bits = (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8;
        else
          shifted_bits = -32768;
        saved_shifted_bits = shifted_bits;
      }
      else
      {
        saved_shifted_bits = 0x7FFF;
      }
      *((_WORD *)state_address + j) = saved_shifted_bits;
    }
    state_address = (int *)((char *)state_address + 2 * a7);
  }
  sub_1401BC4C0(a1, a2, (__int64)saved_alloca_result, a7);
  return sub_1401BC4C0(a3, a4, (__int64)saved_alloca_result + 2 * a7, a7); /* 0x1401DB01C: the result of this call is still in rax at the exit */
}

//----- (00000001401DB040) ----------------------------------------------------
__int64            sub_1401DB040(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  int i;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
  }
  return result;
}

//----- (00000001401DB0B0) ----------------------------------------------------
_DWORD *           sub_1401DB0B0(_DWORD *a1, int a2, int a3, __int64 a4)
{
  _DWORD *result;

  if ( a3 > 0 )
    return sub_14019A4F0(a1, a2, byte_140282488[a3] + a4, 8);
  return result;
}

//----- (00000001401DB110) ----------------------------------------------------
__int64            sub_1401DB110(__int16 *a1, _WORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  __int64 result;

  if ( a4 <= 0 )
  {
    *a1 = 0;
    *a2 = 0;
    return 0;
  }
  else
  {
    *a1 = sub_14019AFE0(a3, byte_140282488[a4] + a5, 8);
    result = (unsigned int)(a4 - *a1);
    *a2 = a4 - *a1;
  }
  return result;
}

//----- (00000001401DB1D0) ----------------------------------------------------
__int64            sub_1401DB1D0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int16 shifted_bits;
  int i;
  int loaded_word;
  int loaded_word_2;
  unsigned int shifted_bits_2;
  int integer_quotient;
  int loaded_word_3;

  result = a2;
  if ( *(int *)(a2 + 108) >= 1000 )
  {
    shifted_bits_2 = 0;
  }
  else
  {
    shifted_bits_2 = 0x7FFF / ((*(int *)(a2 + 108) >> 4) + 1);
    result = (unsigned int)(*(_DWORD *)(a2 + 108) + 1);
    *(_DWORD *)(a2 + 108) = result;
  }
  for ( i = 0; i < 4; ++i )
  {
    loaded_word = *(_DWORD *)(a2 + 4LL * i + 60);
    if ( *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i) >= 0 )
      loaded_word_2 = *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i);
    else
      loaded_word_2 = 0x7FFFFFFF;
    integer_quotient = 0x7FFFFFFF / loaded_word_2;
    if ( loaded_word_2 <= 8 * loaded_word )
    {
      if ( loaded_word_2 >= loaded_word )
        shifted_bits = sub_1401BE3A0((__int16)((__int64)(int)((loaded_word * (__int64)integer_quotient) >> 16) >> 5), shifted_bits_2);
      else
        shifted_bits = sub_1401BE3A0(0x400u, shifted_bits_2);
    }
    else
    {
      shifted_bits = sub_1401BE3A0(0x80u, shifted_bits_2);
    }
    *(_DWORD *)(a2 + 4LL * i + 76) += (shifted_bits * (__int64)(integer_quotient - *(_DWORD *)(a2 + 4LL * i + 76))) >> 16;
    if ( 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76) >= 0xFFFFFF )
      loaded_word_3 = 0xFFFFFF;
    else
      loaded_word_3 = 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76);
    *(_DWORD *)(a2 + 4LL * i + 60) = loaded_word_3;
    result = (unsigned int)(i + 1);
  }
  return result;
}

//----- (00000001401DB3D0) ----------------------------------------------------
__int64            sub_1401DB3D0(int *a1, int a2)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  void *alloca_result_2;
  int loaded_word;
  unsigned __int64 scaled_index_2;
  void *alloca_result_3;
  int call_result;
  int call_result_2;
  int call_result_3;
  __m128i unused_local[17];
  int running_total;
  int scaled_index_3;
  int record_word_offset;
  int scaled_index_4;
  int cached_scaled_index;
  int integer_quotient;
  __m128i *saved_alloca_result;
  _DWORD *saved_alloca_result_2;
       __m128i *saved_alloca_result_3;
  __int64 unused_local_2;
  __int16 input_value;

  input_value = a2;
  running_total = 0;
  if ( a1[1144] != a2 || a1[1140] != a1[1139] )
  {
    if ( a1[1144] )
    {
      record_word_offset = 10 * a1[1145] + 5;
      scaled_index_3 = a1[1144] * record_word_offset;
      scaled_index_4 = a2 * record_word_offset;
      if ( scaled_index_3 <= a2 * record_word_offset )
        cached_scaled_index = scaled_index_4;
      else
        cached_scaled_index = scaled_index_3;
      scaled_index = 2LL * cached_scaled_index + 15;
      if ( scaled_index <= 2LL * cached_scaled_index )
        scaled_index = 0xFFFFFFFFFFFFFF0LL;
      alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result = (__m128i *)alloca_result;   /* the allocations, not locals (decompiler mix-up) */
      sub_1401D1210((__int64)saved_alloca_result, (__int64)(a1 + 1801), scaled_index_3);
      alloca_result_2 = alloca(304);
      saved_alloca_result_2 = (_DWORD *)alloca_result_2;
      loaded_word = sub_1401BA4E0((__int64)saved_alloca_result_2, 1000 * *((__int16 *)a1 + 2288), a1[1139], 0);
      running_total += loaded_word;
      integer_quotient = a1[1139] / 1000 * record_word_offset;
      scaled_index_2 = 2LL * integer_quotient + 15;
      if ( scaled_index_2 <= 2LL * integer_quotient )
        scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
      alloca_result_3 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
      saved_alloca_result_3 = (__m128i *)alloca_result_3;
      call_result = sub_1401BAA30(saved_alloca_result_2, saved_alloca_result_3, saved_alloca_result, scaled_index_3);
      running_total += call_result;
      call_result_2 = sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * input_value, 1);
      running_total += call_result_2;
      call_result_3 = sub_1401BAA30(a1 + 1448, saved_alloca_result, saved_alloca_result_3, integer_quotient);
      running_total += call_result_3;
      sub_1401D12E0((__int64)(a1 + 1801), (__int64)saved_alloca_result, scaled_index_4);
    }
    else
    {
      running_total += sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * a2, 1);
    }
  }
  a1[1140] = a1[1139];
  return (unsigned int)running_total; /* 0x1401DB643: mov eax, dword ptr [rbp] */
}

//----- (00000001401DB660) ----------------------------------------------------
__int64            sub_1401DB660(__int64 a1, int a2, int a3)
{
  int record_word_offset;
  int selection_code;
  unsigned int unused_written_slot;

  unused_written_slot = 0;
  if ( a3 != *(_DWORD *)(a1 + 4612) )
  {
    if ( a3 != 10 && a3 != 20 && a3 != 40 && a3 != 60 )
      unused_written_slot = -103;
    if ( a3 > 10 )
    {
      *(_DWORD *)(a1 + 5760) = a3 / 20;
      *(_DWORD *)(a1 + 4580) = 4;
      *(_DWORD *)(a1 + 4584) = 20 * (__int16)a2;
      *(_DWORD *)(a1 + 4548) = 24 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_DWORD *)(a1 + 5760) = 1;
      if ( a3 == 10 )
        selection_code = 2;
      else
        selection_code = 1;
      *(_DWORD *)(a1 + 4580) = selection_code;
      *(_DWORD *)(a1 + 4584) = (__int16)a2 * (__int16)a3;
      *(_DWORD *)(a1 + 4548) = 14 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_140281F84);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    *(_DWORD *)(a1 + 4612) = a3;
    *(_DWORD *)(a1 + 4608) = 0;
  }
  if ( *(_DWORD *)(a1 + 4576) != a2 )
  {
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 7192)), 0, 0xCu);
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 148)), 0, 0x1100u);
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 4500)), 0, 0x20u);
    crt_memset((void *)(uintptr_t)((_WORD *)(a1 + 16)), 0, 8u);
    *(_DWORD *)(a1 + 5756) = 0;
    *(_DWORD *)(a1 + 5764) = 0;
    *(_DWORD *)(a1 + 4608) = 0;
    *(_DWORD *)(a1 + 4544) = 100;
    *(_DWORD *)(a1 + 4664) = 1;
    *(_BYTE *)(a1 + 7192) = 10;
    *(_DWORD *)(a1 + 4476) = 100;
    *(_DWORD *)(a1 + 4492) = 0x10000;
    *(_BYTE *)(a1 + 4541) = 0;
    *(_DWORD *)(a1 + 4576) = a2;
    if ( *(_DWORD *)(a1 + 4576) == 8 )
    {
      if ( *(_DWORD *)(a1 + 4580) == 4 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_140281F84);
    }
    else if ( *(_DWORD *)(a1 + 4580) == 4 )
    {
      *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    if ( *(_DWORD *)(a1 + 4576) == 8 || *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_DWORD *)(a1 + 4640) = 10;
      *(_QWORD *)(a1 + 4704) = (uint64)(uintptr_t)(&unk_140282870);
    }
    else
    {
      *(_DWORD *)(a1 + 4640) = 16;
      *(_QWORD *)(a1 + 4704) = (uint64)(uintptr_t)(&unk_140282800);
    }
    *(_DWORD *)(a1 + 4588) = 5 * a2;
    *(_DWORD *)(a1 + 4584) = *(__int16 *)(a1 + 4580) * *(__int16 *)(a1 + 4588);
    *(_DWORD *)(a1 + 4592) = 20 * (__int16)a2;
    *(_DWORD *)(a1 + 4596) = 2 * (__int16)a2;
    *(_DWORD *)(a1 + 4552) = 18 * (__int16)a2;
    if ( *(_DWORD *)(a1 + 4580) == 4 )
      record_word_offset = 24 * (__int16)a2;
    else
      record_word_offset = 14 * (__int16)a2;
    *(_DWORD *)(a1 + 4548) = record_word_offset;
    if ( *(_DWORD *)(a1 + 4576) == 16 )
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_140282538);
    }
    else if ( *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_14028225C);
    }
    else
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_1402821FC);
    }
  }
  return unused_written_slot;
}

//----- (00000001401DBB00) ----------------------------------------------------
__int64            sub_1401DBB00(_DWORD *a1, int a2)
{
  if ( a2 >= 1 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 >= 3 )
      {
        if ( a2 >= 4 )
        {
          if ( a2 >= 6 )
          {
            if ( a2 >= 8 )
            {
              a1[1161] = 2;
              a1[1163] = 45875;
              a1[1162] = 16;
              a1[1159] = 24;
              a1[1150] = 5 * a1[1144];
              a1[1157] = 4;
              a1[1158] = 1;
              a1[1165] = 16;
            }
            else
            {
              a1[1161] = 1;
              a1[1163] = 47186;
              a1[1162] = 12;
              a1[1159] = 20;
              a1[1150] = 5 * a1[1144];
              a1[1157] = 3;
              a1[1158] = 1;
              a1[1165] = 8;
            }
            a1[1168] = 983 * a1[1144];
          }
          else
          {
            a1[1161] = 1;
            a1[1163] = 48497;
            a1[1162] = 10;
            a1[1159] = 16;
            a1[1150] = 5 * a1[1144];
            a1[1157] = 2;
            a1[1158] = 1;
            a1[1165] = 6;
            a1[1168] = 983 * a1[1144];
          }
        }
        else
        {
          a1[1161] = 1;
          a1[1163] = 49807;
          a1[1162] = 8;
          a1[1159] = 14;
          a1[1150] = 5 * a1[1144];
          a1[1157] = 2;
          a1[1158] = 0;
          a1[1165] = 4;
          a1[1168] = 0;
        }
      }
      else
      {
        a1[1161] = 0;
        a1[1163] = 52429;
        a1[1162] = 6;
        a1[1159] = 12;
        a1[1150] = 3 * a1[1144];
        a1[1157] = 2;
        a1[1158] = 0;
        a1[1165] = 2;
        a1[1168] = 0;
      }
    }
    else
    {
      a1[1161] = 1;
      a1[1163] = 49807;
      a1[1162] = 8;
      a1[1159] = 14;
      a1[1150] = 5 * a1[1144];
      a1[1157] = 1;
      a1[1158] = 0;
      a1[1165] = 3;
      a1[1168] = 0;
    }
  }
  else
  {
    a1[1161] = 0;
    a1[1163] = 52429;
    a1[1162] = 6;
    a1[1159] = 12;
    a1[1150] = 3 * a1[1144];
    a1[1157] = 1;
    a1[1158] = 0;
    a1[1165] = 2;
    a1[1168] = 0;
  }
  a1[1162] = sub_1401BE320(a1[1162], a1[1160]);
  a1[1151] = 5 * a1[1144] + 2 * a1[1150];
  a1[1156] = a2;
  return 0;
}

//----- (00000001401DBFF0) ----------------------------------------------------
__int64            sub_1401DBFF0(int *a1, __int64 a2)
{
  int table_value;

  table_value = a1[1528];
  a1[1528] = *(_DWORD *)(a2 + 44);
  if ( a1[1528] )
  {
    if ( table_value )
      a1[1529] = sub_1401BE3A0(7 - (unsigned int)((26214LL * a1[1154]) >> 16), 2u);
    else
      a1[1529] = 7;
  }
  return 0;
}

//----- (00000001401DC0A0) ----------------------------------------------------
__int64            sub_1401DC0A0(__int64 a1, int a2)
{
  __int64 result;
  int i;
  int j;

  for ( i = 2; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i > a2 )
      break;
    for ( j = a2; j > i; --j )
      *(_DWORD *)(a1 + 4LL * (j - 2)) -= *(_DWORD *)(a1 + 4LL * j);
    *(_DWORD *)(a1 + 4LL * (i - 2)) -= 2 * *(_DWORD *)(a1 + 4LL * i);
  }
  return result;
}

//----- (00000001401DC160) ----------------------------------------------------
__int64            sub_1401DC160(_DWORD *a1, int a2, int a3)
{
  unsigned int shifted_bits;
  int record_word_offset;
  int i;

  shifted_bits = a1[a3];
  record_word_offset = 16 * a2;
  if ( a3 == 8 )
  {
    return (unsigned int)((record_word_offset
                         * (__int64)(int)(((record_word_offset
                                          * (__int64)(int)(((record_word_offset
                                                           * (__int64)(int)(((record_word_offset
                                                                            * (__int64)(int)(((record_word_offset
                                                                                             * (__int64)(int)(((record_word_offset * (__int64)(int)(((record_word_offset * (__int64)(int)(((record_word_offset * (__int64)(int)shifted_bits) >> 16) + a1[7])) >> 16) + a1[6])) >> 16) + a1[5])) >> 16)
                                                                                           + a1[4])) >> 16)
                                                                          + a1[3])) >> 16)
                                                         + a1[2])) >> 16)
                                        + a1[1])) >> 16)
         + *a1;
  }
  else
  {
    for ( i = a3 - 1; i >= 0; --i )
      shifted_bits = ((record_word_offset * (__int64)(int)shifted_bits) >> 16) + a1[i];
  }
  return shifted_bits;
}

//----- (00000001401DC340) ----------------------------------------------------
__int64            sub_1401DC340(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int i;
  int j;

  *(_DWORD *)(a2 + 4LL * a4) = 0x10000;
  *(_DWORD *)(a3 + 4LL * a4) = 0x10000;
  for ( i = 0; i < a4; ++i )
  {
    *(_DWORD *)(a2 + 4LL * i) = -*(_DWORD *)(a1 + 4LL * (a4 - i - 1)) - *(_DWORD *)(a1 + 4LL * (i + a4));
    *(_DWORD *)(a3 + 4LL * i) = *(_DWORD *)(a1 + 4LL * (i + a4)) - *(_DWORD *)(a1 + 4LL * (a4 - i - 1));
  }
  for ( j = a4; j > 0; --j )
  {
    *(_DWORD *)(a2 + 4LL * (j - 1)) -= *(_DWORD *)(a2 + 4LL * j);
    *(_DWORD *)(a3 + 4LL * (j - 1)) += *(_DWORD *)(a3 + 4LL * j);
  }
  sub_1401DC0A0(a2, a4);
  return sub_1401DC0A0(a3, a4);
}

//----- (00000001401DC4C0) ----------------------------------------------------
__int64            sub_1401DC4C0(_DWORD *a1, int a2)
{
  int shifted_bits;
  int scaled_index;
  int table_value;
  int integer_difference;
  int i;
  int j;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int call_result;
  int integer_difference_2;
  unsigned int shifted_bits_5;
  int shifted_bits_6;
  char shifted_bits_7;
  char shifted_bits_8;
  signed int saved_shifted_bits;
  char saved_shifted_bits_2;
  unsigned int shifted_bits_9;
  int shifted_bits_10;
  signed int saved_shifted_bits_3;
  unsigned int shifted_bits_11;
  int shifted_bits_12;
  char shifted_bits_13;
  char shifted_bits_14;
  signed int saved_shifted_bits_4;
  char saved_shifted_bits_5;
  unsigned int shifted_bits_15;
  int shifted_bits_16;
  signed int saved_shifted_bits_6;
  __int64 shifted_bits_17;
  __int64 shifted_bits_18;

  shifted_bits_3 = 0x40000000;
  for ( i = a2 - 1; i > 0; --i )
  {
    if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
      return 0;
    scaled_index = -128 * a1[i];
    shifted_bits_2 = 0x40000000 - ((unsigned __int64)(scaled_index * (__int64)scaled_index) >> 32);
    shifted_bits_3 = 4 * ((unsigned __int64)(shifted_bits_2 * (__int64)shifted_bits_3) >> 32);
    if ( shifted_bits_3 < 107374 )
      return 0;
    if ( shifted_bits_2 <= 0 )
      shifted_bits = sub_1401BA490(((unsigned __int64)(scaled_index * (__int64)scaled_index) >> 32) - 0x40000000);
    else
      shifted_bits = sub_1401BA490(shifted_bits_2);
    integer_difference_2 = 32 - shifted_bits;
    call_result = sub_1401BE820(shifted_bits_2, 32 - shifted_bits + 30);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      table_value = a1[j];
      integer_difference = a1[i - j - 1];
      if ( integer_difference_2 == 1 )
      {
        if ( (int)(table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) & (table_value ^ 0x80000000)) >= 0 )
            shifted_bits_6 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_6 = 0x7FFFFFFF;
          saved_shifted_bits = shifted_bits_6;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) ^ 0x80000000) & table_value) >= 0 )
            shifted_bits_5 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_5 = 0x80000000;
          saved_shifted_bits = shifted_bits_5;
        }
        if ( (int)(table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) & (table_value ^ 0x80000000)) >= 0 )
            shifted_bits_8 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_8 = -1;
          saved_shifted_bits_2 = shifted_bits_8;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) ^ 0x80000000) & table_value) >= 0 )
            shifted_bits_7 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_7 = 0;
          saved_shifted_bits_2 = shifted_bits_7;
        }
        shifted_bits_17 = (((_BYTE)call_result * saved_shifted_bits_2) & 1) + ((call_result * (__int64)saved_shifted_bits) >> 1);
      }
      else
      {
        if ( (int)(table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) & (table_value ^ 0x80000000)) >= 0 )
            shifted_bits_10 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_10 = 0x7FFFFFFF;
          saved_shifted_bits_3 = shifted_bits_10;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1) ^ 0x80000000) & table_value) >= 0 )
            shifted_bits_9 = table_value - ((((scaled_index * (__int64)integer_difference) >> 30) + 1) >> 1);
          else
            shifted_bits_9 = 0x80000000;
          saved_shifted_bits_3 = shifted_bits_9;
        }
        shifted_bits_17 = (((call_result * (__int64)saved_shifted_bits_3) >> ((unsigned __int8)integer_difference_2 - 1)) + 1) >> 1;
      }
      if ( shifted_bits_17 > 0x7FFFFFFF || shifted_bits_17 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[j] = shifted_bits_17;
      if ( integer_difference_2 == 1 )
      {
        if ( (int)(integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) & (integer_difference ^ 0x80000000)) >= 0 )
            shifted_bits_12 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_12 = 0x7FFFFFFF;
          saved_shifted_bits_4 = shifted_bits_12;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) ^ 0x80000000) & integer_difference) >= 0 )
            shifted_bits_11 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_11 = 0x80000000;
          saved_shifted_bits_4 = shifted_bits_11;
        }
        if ( (int)(integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) & (integer_difference ^ 0x80000000)) >= 0 )
            shifted_bits_14 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_14 = -1;
          saved_shifted_bits_5 = shifted_bits_14;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) ^ 0x80000000) & integer_difference) >= 0 )
            shifted_bits_13 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_13 = 0;
          saved_shifted_bits_5 = shifted_bits_13;
        }
        shifted_bits_18 = (((_BYTE)call_result * saved_shifted_bits_5) & 1) + ((call_result * (__int64)saved_shifted_bits_4) >> 1);
      }
      else
      {
        if ( (int)(integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) & (integer_difference ^ 0x80000000)) >= 0 )
            shifted_bits_16 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_16 = 0x7FFFFFFF;
          saved_shifted_bits_6 = shifted_bits_16;
        }
        else
        {
          if ( (int)((((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1) ^ 0x80000000) & integer_difference) >= 0 )
            shifted_bits_15 = integer_difference - ((((scaled_index * (__int64)table_value) >> 30) + 1) >> 1);
          else
            shifted_bits_15 = 0x80000000;
          saved_shifted_bits_6 = shifted_bits_15;
        }
        shifted_bits_18 = (((call_result * (__int64)saved_shifted_bits_6) >> ((unsigned __int8)integer_difference_2 - 1)) + 1) >> 1;
      }
      if ( shifted_bits_18 > 0x7FFFFFFF || shifted_bits_18 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[i - j - 1] = shifted_bits_18;
    }
  }
  if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
    return 0;
  shifted_bits_4 = 4
      * ((unsigned __int64)((int)(0x40000000 - ((unsigned __int64)(-128 * *a1 * (__int64)(-128 * *a1)) >> 32))
                          * (__int64)shifted_bits_3) >> 32);
  if ( shifted_bits_4 >= 107374 )
    return (unsigned int)shifted_bits_4;
  else
    return 0;
}

//----- (00000001401DCE10) ----------------------------------------------------
__int64            sub_1401DCE10(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result;
  int i;
  int j;
  int scaled_index;

  *a1 = 0x10000;
  a1[1] = -*a2;
  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    scaled_index = a2[2 * i];
    a1[i + 1] = 2 * a1[i - 1] - (((((int)a1[i] * (__int64)scaled_index) >> 15) + 1) >> 1);
    for ( j = i; j > 1; --j )
      a1[j] += a1[j - 2] - (((((int)a1[j - 1] * (__int64)scaled_index) >> 15) + 1) >> 1);
    a1[1] -= scaled_index;
  }
  return result;
}

//----- (00000001401DCF80) ----------------------------------------------------
__int64            sub_1401DCF80(__int64 a1, __int16 *a2, __int64 a3, int a4)
{
  unsigned __int64 loaded_word;
  __int64 integer_sum;
  void *alloca_result;
  __m128i destination_buffer;
  void *destination_buffer_2;
  unsigned int loaded_word_2;
  int loaded_word_3;
  __int32 unused_written_slot;
  __int64 unused_local;

  SR_VEC_LANES(128, destination_buffer, i64)[1] = a1;
  loaded_word = 2LL * (2 * *(_DWORD *)(a1 + 268) + 8);
  integer_sum = loaded_word + 15;
  if ( loaded_word + 15 <= loaded_word )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer_2 = alloca_result;
  crt_memcpy(&destination_buffer, (     __m128i *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + 24), 0x10u);
  loaded_word_3 = *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + 272);
  while ( 1 )
  {
    loaded_word_2 = a4 >= *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + 268) ? *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + 268) : a4;
    SR_VEC_LANES(128, destination_buffer, i32)[0] = loaded_word_2;
    sub_1401DD3A0((_DWORD *)SR_VEC_LANES(128, destination_buffer, i64)[1], (__int64)destination_buffer_2 + 16, a3, loaded_word_2);
    unused_written_slot = SR_VEC_LANES(128, destination_buffer, i32)[0] << 17;
    a2 = sub_1401DE800(a2, (__int64)destination_buffer_2, SR_VEC_LANES(128, destination_buffer, i32)[0] << 17, loaded_word_3);
    a3 += 2LL * SR_VEC_LANES(128, destination_buffer, i32)[0];
    a4 -= SR_VEC_LANES(128, destination_buffer, i32)[0];
    if ( a4 <= 0 )
      break;
    crt_memcpy((__m128i *)destination_buffer_2, (     __m128i *)((char *)destination_buffer_2 + 4 * SR_VEC_LANES(128, destination_buffer, i32)[0]), 0x10u);
  }
  return crt_memcpy((__m128i *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + 24), (     __m128i *)((char *)destination_buffer_2 + 4 * SR_VEC_LANES(128, destination_buffer, i32)[0]), 0x10u); /* 0x1401DD107: the result of this call is still in rax at the exit */
}

//----- (00000001401DD130) ----------------------------------------------------
__int64            sub_1401DD130(__int64 a1, __int16 *a2, __int64 a3, int a4)
{
  unsigned __int64 loaded_word;
  __int64 integer_sum;
  void *alloca_result;
  unsigned __int64 byte_count;
  __m128i destination_buffer;
  __m128i *destination_buffer_2;
  signed int loaded_word_2;
  int loaded_word_3;
  __int32 unused_written_slot;
  __int16 *loaded_record_pointer;
  __int64 unused_written_slot_2;
  __int64 unused_local;

  SR_VEC_LANES(128, destination_buffer, i64)[0] = a1;
  loaded_word = 4LL * (*(_DWORD *)(a1 + 276) + *(_DWORD *)(a1 + 268));
  integer_sum = loaded_word + 15;
  if ( loaded_word + 15 <= loaded_word )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer_2 = alloca_result;
  crt_memcpy(&destination_buffer, (     __m128i *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 24), 4LL * *(int *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 276));
  loaded_record_pointer = (__int16 *)(*(_QWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 296) + 4LL);
  loaded_word_3 = *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 272);
  while ( 1 )
  {
    loaded_word_2 = a4 >= *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 268) ? *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 268) : a4;
    SR_VEC_LANES(128, destination_buffer, i32)[2] = loaded_word_2;
    sub_1401DD7A0(
      SR_VEC_LANES(128, destination_buffer, i64)[0],
      (__int64)SR_VEC_PTR_LANES(128, destination_buffer_2, i64) + 4 * *(int *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 276),
      a3,
      *(__int16 **)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 296),
      loaded_word_2);
    unused_written_slot = SR_VEC_LANES(128, destination_buffer, i32)[2] << 16;
    a2 = sub_1401DD8A0(
           a2,
           (__int64)destination_buffer_2,
           loaded_record_pointer,
           *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 276),
           *(_DWORD *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 280),
           SR_VEC_LANES(128, destination_buffer, i32)[2] << 16,
           loaded_word_3);
    a3 += 2LL * SR_VEC_LANES(128, destination_buffer, i32)[2];
    a4 -= SR_VEC_LANES(128, destination_buffer, i32)[2];
    if ( a4 <= 1 )
      break;
    crt_memcpy(destination_buffer_2, (__m128i *)((char *)destination_buffer_2 + 4 * SR_VEC_LANES(128, destination_buffer, i32)[2]), 4LL * *(int *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 276));
  }
  byte_count = 4LL * *(int *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 276);
  unused_written_slot_2 = SR_VEC_LANES(128, destination_buffer, i64)[0] + 24;
  return crt_memcpy((__m128i *)(SR_VEC_LANES(128, destination_buffer, i64)[0] + 24), (__m128i *)((char *)destination_buffer_2 + 4 * SR_VEC_LANES(128, destination_buffer, i32)[2]), byte_count); /* 0x1401DD333: the result of this call is still in rax at the exit */
}

//----- (00000001401DD350) ----------------------------------------------------
__int64            sub_1401DD350(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return sub_1401DD3A0(a1, a2, a3, a4);
}

//----- (00000001401DD3A0) ----------------------------------------------------
__int64            sub_1401DD3A0(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  int shifted_bits_6;
  int scaled_index;
  int table_value;
  int table_value_2;
  int table_value_3;
  int i;
  int table_value_4;
  int table_value_5;
  int shifted_bits_7;
  int shifted_bits_8;
  __int16 saved_shifted_bits;
  int shifted_bits_9;
  __int16 saved_shifted_bits_2;

  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    shifted_bits_7 = *(__int16 *)(a3 + 2LL * i) << 10;
    shifted_bits = (unk_14027E928 * (__int64)(shifted_bits_7 - *a1)) >> 16;
    scaled_index = shifted_bits + *a1;
    *a1 = shifted_bits + shifted_bits_7;
    shifted_bits_2 = (unk_14027E92A * (__int64)(scaled_index - a1[1])) >> 16;
    table_value_4 = shifted_bits_2 + a1[1];
    a1[1] = shifted_bits_2 + scaled_index;
    shifted_bits_3 = ((unk_14027E92C * (__int64)(table_value_4 - a1[2])) >> 16) + table_value_4 - a1[2];
    table_value = shifted_bits_3 + a1[2];
    a1[2] = shifted_bits_3 + table_value_4;
    if ( ((table_value >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((table_value >> 9) + 1) >> 1 >= -32768 )
        shifted_bits_8 = ((table_value >> 9) + 1) >> 1;
      else
        LOWORD(shifted_bits_8) = 0x8000;
      saved_shifted_bits = shifted_bits_8;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *(_WORD *)(a2 + 4LL * i) = saved_shifted_bits;
    shifted_bits_4 = (unk_14027E9D8 * (__int64)(shifted_bits_7 - a1[3])) >> 16;
    table_value_2 = shifted_bits_4 + a1[3];
    a1[3] = shifted_bits_4 + shifted_bits_7;
    shifted_bits_5 = (unk_14027E9DA * (__int64)(table_value_2 - a1[4])) >> 16;
    table_value_5 = shifted_bits_5 + a1[4];
    a1[4] = shifted_bits_5 + table_value_2;
    shifted_bits_6 = ((unk_14027E9DC * (__int64)(table_value_5 - a1[5])) >> 16) + table_value_5 - a1[5];
    table_value_3 = shifted_bits_6 + a1[5];
    a1[5] = shifted_bits_6 + table_value_5;
    if ( ((table_value_3 >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((table_value_3 >> 9) + 1) >> 1 >= -32768 )
        shifted_bits_9 = ((table_value_3 >> 9) + 1) >> 1;
      else
        LOWORD(shifted_bits_9) = 0x8000;
      saved_shifted_bits_2 = shifted_bits_9;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * (2 * i + 1)) = saved_shifted_bits_2;
  }
  return result;
}

//----- (00000001401DD7A0) ----------------------------------------------------
__int64            sub_1401DD7A0(_DWORD *a1, __int64 a2, __int64 a3, __int16 *a4, unsigned int a5)
{
  __int64 result;
  signed int i;
  int shifted_bits;

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    shifted_bits = *a1 + (*(__int16 *)(a3 + 2LL * i) << 8);
    *(_DWORD *)(a2 + 4LL * i) = shifted_bits;
    shifted_bits *= 4;
    *a1 = ((*a4 * (__int64)shifted_bits) >> 16) + a1[1];
    a1[1] = (a4[1] * (__int64)shifted_bits) >> 16;
  }
  return result;
}

//----- (00000001401DD8A0) ----------------------------------------------------
__int16 *           sub_1401DD8A0(__int16 *a1, __int64 a2, __int16 *a3, int a4, int a5, int a6, int a7)
{
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  int shifted_bits_6;
  int shifted_bits_7;
  int shifted_bits_8;
  int i;
  int j;
  int k;
  int shifted_bits_9;
  int shifted_bits_10;
  __int16 saved_shifted_bits;
  int shifted_bits_11;
  __int16 saved_shifted_bits_2;
  int shifted_bits_12;
  __int16 saved_shifted_bits_3;

  switch ( a4 )
  {
    case 18:
      for ( i = 0; i < a6; i += a7 )
      {
        shifted_bits_9 = (__int64)((__int16)a5 * (unsigned __int64)(unsigned __int16)i) >> 16;
        shifted_bits = ((a3[9 * shifted_bits_9 + 6] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 24)) >> 16)
           + ((a3[9 * shifted_bits_9 + 5] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 20)) >> 16)
           + ((a3[9 * shifted_bits_9 + 4] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 16)) >> 16)
           + ((a3[9 * shifted_bits_9 + 3] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 12)) >> 16)
           + ((a3[9 * shifted_bits_9 + 2] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 8)) >> 16)
           + ((a3[9 * shifted_bits_9 + 1] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 4)) >> 16)
           + ((a3[9 * shifted_bits_9] * (__int64)*(int *)(a2 + 4LL * (i >> 16))) >> 16);
        shifted_bits_2 = ((a3[9 * (a5 - 1 - shifted_bits_9) + 3] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 56)) >> 16)
           + ((a3[9 * (a5 - 1 - shifted_bits_9) + 2] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 60)) >> 16)
           + ((a3[9 * (a5 - 1 - shifted_bits_9) + 1] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 64)) >> 16)
           + ((a3[9 * (a5 - 1 - shifted_bits_9)] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 68)) >> 16)
           + ((a3[9 * shifted_bits_9 + 8] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 32)) >> 16)
           + ((a3[9 * shifted_bits_9 + 7] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 28)) >> 16)
           + shifted_bits;
        shifted_bits_3 = ((a3[9 * (a5 - 1 - shifted_bits_9) + 8] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 36)) >> 16)
            + ((a3[9 * (a5 - 1 - shifted_bits_9) + 7] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 40)) >> 16)
            + ((a3[9 * (a5 - 1 - shifted_bits_9) + 6] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 44)) >> 16)
            + ((a3[9 * (a5 - 1 - shifted_bits_9) + 5] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 48)) >> 16)
            + ((a3[9 * (a5 - 1 - shifted_bits_9) + 4] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 52)) >> 16)
            + shifted_bits_2;
        if ( ((shifted_bits_3 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((shifted_bits_3 >> 5) + 1) >> 1 >= -32768 )
            shifted_bits_10 = ((shifted_bits_3 >> 5) + 1) >> 1;
          else
            LOWORD(shifted_bits_10) = 0x8000;
          saved_shifted_bits = shifted_bits_10;
        }
        else
        {
          saved_shifted_bits = 0x7FFF;
        }
        *a1++ = saved_shifted_bits;
      }
      break;
    case 24:
      for ( j = 0; j < a6; j += a7 )
      {
        shifted_bits_4 = ((a3[5] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 72) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 20))) >> 16)
            + ((a3[4] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 76) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 16))) >> 16)
            + ((a3[3] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 80) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 12))) >> 16)
            + ((a3[2] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 84) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 8))) >> 16)
            + ((a3[1] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 88) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 4))) >> 16)
            + ((*a3 * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 92) + *(_DWORD *)(a2 + 4LL * (j >> 16)))) >> 16);
        shifted_bits_5 = ((a3[11] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 48) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 44))) >> 16)
            + ((a3[10] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 52) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 40))) >> 16)
            + ((a3[9] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 56) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 36))) >> 16)
            + ((a3[8] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 60) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 32))) >> 16)
            + ((a3[7] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 64) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 28))) >> 16)
            + ((a3[6] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 68) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 24))) >> 16)
            + shifted_bits_4;
        if ( ((shifted_bits_5 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((shifted_bits_5 >> 5) + 1) >> 1 >= -32768 )
            shifted_bits_11 = ((shifted_bits_5 >> 5) + 1) >> 1;
          else
            LOWORD(shifted_bits_11) = 0x8000;
          saved_shifted_bits_2 = shifted_bits_11;
        }
        else
        {
          saved_shifted_bits_2 = 0x7FFF;
        }
        *a1++ = saved_shifted_bits_2;
      }
      break;
    case 36:
      for ( k = 0; k < a6; k += a7 )
      {
        shifted_bits_6 = ((a3[5] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 120) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 20))) >> 16)
            + ((a3[4] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 124) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 16))) >> 16)
            + ((a3[3] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 128) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 12))) >> 16)
            + ((a3[2] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 132) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 8))) >> 16)
            + ((a3[1] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 136) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 4))) >> 16)
            + ((*a3 * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 140) + *(_DWORD *)(a2 + 4LL * (k >> 16)))) >> 16);
        shifted_bits_7 = ((a3[11] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 96) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 44))) >> 16)
            + ((a3[10] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 100) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 40))) >> 16)
            + ((a3[9] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 104) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 36))) >> 16)
            + ((a3[8] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 108) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 32))) >> 16)
            + ((a3[7] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 112) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 28))) >> 16)
            + ((a3[6] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 116) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 24))) >> 16)
            + shifted_bits_6;
        shifted_bits_8 = ((a3[17] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 72) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 68))) >> 16)
            + ((a3[16] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 76) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 64))) >> 16)
            + ((a3[15] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 80) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 60))) >> 16)
            + ((a3[14] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 84) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 56))) >> 16)
            + ((a3[13] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 88) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 52))) >> 16)
            + ((a3[12] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 92) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 48))) >> 16)
            + shifted_bits_7;
        if ( ((shifted_bits_8 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((shifted_bits_8 >> 5) + 1) >> 1 >= -32768 )
            shifted_bits_12 = ((shifted_bits_8 >> 5) + 1) >> 1;
          else
            LOWORD(shifted_bits_12) = 0x8000;
          saved_shifted_bits_3 = shifted_bits_12;
        }
        else
        {
          saved_shifted_bits_3 = 0x7FFF;
        }
        *a1++ = saved_shifted_bits_3;
      }
      break;
  }
  return a1;
}

//----- (00000001401DE800) ----------------------------------------------------
__int16 *           sub_1401DE800(__int16 *a1, __int64 a2, int a3, int a4)
{
  int shifted_bits;
  int shifted_bits_2;
  int i;
  int shifted_bits_3;
  __int16 saved_shifted_bits;

  for ( i = 0; i < a3; i += a4 )
  {
    shifted_bits_2 = (12LL * (unsigned __int16)i) >> 16;
    shifted_bits = word_140282170[4 * (11 - shifted_bits_2)] * *(__int16 *)(a2 + 2LL * (i >> 16) + 14)
       + word_140282170[4 * (11 - shifted_bits_2) + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 12)
       + word_140282170[4 * (11 - shifted_bits_2) + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 10)
       + word_140282170[4 * (11 - shifted_bits_2) + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 8)
       + word_140282170[4 * shifted_bits_2 + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 6)
       + word_140282170[4 * shifted_bits_2 + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 4)
       + word_140282170[4 * shifted_bits_2 + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 2)
       + word_140282170[4 * shifted_bits_2] * *(__int16 *)(a2 + 2LL * (i >> 16));
    if ( ((shifted_bits >> 14) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((shifted_bits >> 14) + 1) >> 1 >= -32768 )
        shifted_bits_3 = ((shifted_bits >> 14) + 1) >> 1;
      else
        LOWORD(shifted_bits_3) = 0x8000;
      saved_shifted_bits = shifted_bits_3;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *a1++ = saved_shifted_bits;
  }
  return a1;
}

//----- (00000001401DEAE0) ----------------------------------------------------
__int64            sub_1401DEAE0()
{
  __int64 unused_local;
  int i;
  __m128i *destination_buffer;
  BOOL comparison_result;
  __m128i destination_buffer_2[272];
  _DWORD scratch_buffer[4];
  __m128i source_buffer;
  __int64 unused_local_2;
  _DWORD *record_pointer;
  __m128i *source_buffer_2;
  __int64 unrecovered_register_value;
  int unrecovered_register_value_2;

  destination_buffer = (__m128i *)&record_pointer[9 * record_pointer[1441] + 1530];
  if ( record_pointer[1528] && (int)record_pointer[1133] > 77 )
  {
    record_pointer[record_pointer[1441] + 1185] = 1;
    crt_memcpy(destination_buffer_2, (     __m128i *)(record_pointer + 37), 0x1100u);
    crt_memcpy(destination_buffer, (     __m128i *)record_pointer + 297, 0x24u);
    crt_memcpy(&source_buffer, source_buffer_2, 4LL * (int)record_pointer[1145]);
    if ( !record_pointer[1441] || !record_pointer[record_pointer[1441] + 1184] )
    {
      *((_BYTE *)record_pointer + 4540) = *((_BYTE *)record_pointer + 7192);
      SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] += *((_BYTE *)record_pointer + 6116);
      SR_VEC_PTR_LANES(128, destination_buffer, i8)[0] = sub_1401BE320(SR_VEC_PTR_LANES(128, destination_buffer, i8)[0], 0x3Fu);
    }
    comparison_result = unrecovered_register_value_2 == 2;
    sub_1401C2D70((__int64)scratch_buffer, SR_VEC_PTR_LANES(128, destination_buffer, i8), (char *)record_pointer + 4540, comparison_result, record_pointer[1145]);
    for ( i = 0; i < record_pointer[1145]; ++i )
      *(float *)&SR_VEC_PTR_LANES(128, source_buffer_2, i32)[i] = (float)(int)scratch_buffer[i] * 0.000015258789;
    sub_1401D62A0(record_pointer, (__int64)source_buffer_2, SR_VEC_PTR_LANES(128, destination_buffer, i8), destination_buffer_2, (__int64)&record_pointer[80 * record_pointer[1441] + 1557], unrecovered_register_value);
    crt_memcpy(source_buffer_2, &source_buffer, 4LL * (int)record_pointer[1145]);
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401DEE00) ----------------------------------------------------
__int64            sub_1401DEE00(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result;
  float combined_products;
  int i;

  for ( i = 16; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    combined_products = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2)
                                                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                               * a2[2]))
                                                                               + (float)(*(float *)(a3
                                                                                                  + 4LL * (i - 1)
                                                                                                  - 12)
                                                                                       * a2[3]))
                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 16)
                                                                               * a2[4]))
                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]))
                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]))
                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 40) * a2[10]))
               + (float)(*(float *)(a3 + 4LL * (i - 1) - 44) * a2[11]))
       + (float)(*(float *)(a3 + 4LL * (i - 1) - 48) * a2[12]);
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)(combined_products + (float)(*(float *)(a3 + 4LL * (i - 1) - 52) * a2[13]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 56) * a2[14]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 60) * a2[15]));
  }
  return result;
}

//----- (00000001401DF140) ----------------------------------------------------
__int64            sub_1401DF140(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 12; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2) + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1])) + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2])) + (float)(*(float *)(a3 + 4LL * (i - 1) - 12) * a2[3]))
                                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20)
                                                                                             * a2[5]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24)
                                                                                     * a2[6]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28)
                                                                             * a2[7]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 40) * a2[10]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 44) * a2[11]));
  }
  return result;
}

//----- (00000001401DF3D0) ----------------------------------------------------
__int64            sub_1401DF3D0(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 10; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2) + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2]))
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12)
                                                                                             * a2[3]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16)
                                                                                     * a2[4]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20)
                                                                             * a2[5]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]));
  }
  return result;
}

//----- (00000001401DF610) ----------------------------------------------------
__int64            sub_1401DF610(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 8; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1))
                                                                                             * *a2)
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 4)
                                                                                             * a2[1]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                     * a2[2]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12)
                                                                             * a2[3]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]));
  }
  return result;
}

//----- (00000001401DF7F0) ----------------------------------------------------
__int64            sub_1401DF7F0(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 6; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2)
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12) * a2[3]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]));
  }
  return result;
}

//----- (00000001401DF980) ----------------------------------------------------
__m128            sub_1401DF980(__int64 a1, float a2, int a3)
{
  __int128 float_word;
  int i;
  float weighted_sum;
  float component_delta;

  component_delta = -a2;
  weighted_sum = *(float *)(a1 + 4LL * (a3 - 1));
  for ( i = a3 - 2; i >= 0; --i )
    weighted_sum = (float)(component_delta * weighted_sum) + *(float *)(a1 + 4LL * i);
  float_word = 0x3F800000u;
  *(float *)&float_word = 1.0 / (float)(1.0 - (float)(component_delta * weighted_sum));
  return (__m128)float_word;
}

//----- (00000001401DFA30) ----------------------------------------------------
float            sub_1401DFA30(float *a1, float a2, float a3, int a4)
{
  float result;
  float scaled_value;
  int i;
  int j;
  int m;
  int n;
  int ii;
  int jj;
  int kk;
  float saved_call_status;
  float scaled_ratio;
  float component_delta;
  int k;
  int cached_m;

  cached_m = 0;
  for ( i = a4 - 1; i > 0; --i )
    a1[i - 1] = a1[i - 1] - (float)(a2 * a1[i]);
  result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
  saved_call_status = result;
  for ( j = 0; j < a4; ++j )
  {
    result = a1[j] * saved_call_status;
    a1[j] = result;
  }
  for ( k = 0; k < 10; ++k )
  {
    component_delta = -1.0;
    for ( m = 0; m < a4; ++m )
    {
      scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(a1[m]), u64);
      if ( scaled_value > component_delta )
      {
        component_delta = scaled_value;
        cached_m = m;
      }
    }
    result = a3;
    if ( a3 >= component_delta )
      break;
    for ( n = 1; n < a4; ++n )
      a1[n - 1] = a1[n - 1] + (float)(a2 * a1[n]);
    scaled_ratio = 1.0 / saved_call_status;
    for ( ii = 0; ii < a4; ++ii )
      a1[ii] = a1[ii] * scaled_ratio;
    sub_1401CDE70(
      (__int64)a1,
      a4,
      0.99000001
    - (float)((float)((float)((float)(0.1 * (float)k) + 0.80000001) * (float)(component_delta - a3))
            / (float)(component_delta * (float)(cached_m + 1))));
    for ( jj = a4 - 1; jj > 0; --jj )
      a1[jj - 1] = a1[jj - 1] - (float)(a2 * a1[jj]);
    result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
    saved_call_status = result;
    for ( kk = 0; kk < a4; ++kk )
    {
      result = a1[kk] * saved_call_status;
      a1[kk] = result;
    }
  }
  return result;
}

//----- (00000001401DFE10) ----------------------------------------------------
float            sub_1401DFE10(__int64 a1, float a2, int a3)
{
  float result;
  float weighted_sum;
  int j;
  float saved_weighted_sum;
  int i;
  int cached_j;

  cached_j = 0;
  for ( i = 0; i < 10; ++i )
  {
    saved_weighted_sum = -1.0;
    for ( j = 0; j < a3; ++j )
    {
      weighted_sum = *(double *)SR_VEC_READ_LANES(128, sub_140244390(*(float *)(a1 + 4LL * j)), u64);
      if ( weighted_sum > saved_weighted_sum )
      {
        saved_weighted_sum = weighted_sum;
        cached_j = j;
      }
    }
    result = a2;
    if ( a2 >= saved_weighted_sum )
      break;
    result = 0.99000001
           - (float)((float)((float)((float)(0.1 * (float)i) + 0.80000001) * (float)(saved_weighted_sum - a2))
                   / (float)(saved_weighted_sum * (float)(cached_j + 1)));
    sub_1401CDE70(a1, a3, result);
  }
  return result;
}

//----- (00000001401DFF50) ----------------------------------------------------
__int64            sub_1401DFF50(__int64 a1, float *a2, float a3, int a4)
{
  int i;

  for ( i = 0; i < a4; ++i )
    *(float *)(a1 + 4LL * (i + a4 * i)) = *(float *)(a1 + 4LL * (i + a4 * i)) + a3;
  *a2 = *a2 + a3;
  return 0;
}
