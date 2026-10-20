#include "shared_client.h"

//----- (0000000140158610) ----------------------------------------------------
__int64            sub_140158610(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float source_component_y;
  float source_component_z;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float component_delta;
  float to[4];

  source_component_y = a2[1];
  source_component_z = a2[2];
  combined_products = (float)((float)((float)(a4[1] - a6[1]) * source_component_y) + (float)((float)(*a4 - *a6) * *a2))
      + (float)((float)(a4[2] - a6[2]) * source_component_z);
  if ( combined_products > a5 )
    return 0;
  if ( combined_products < 0.0 )
    return 0;
  combined_products_2 = (float)(source_component_y * (float)-a5) + a4[1];
  combined_products_3 = (float)(source_component_z * (float)-a5) + a4[2];
  to[0] = (float)(*a2 * (float)-a5) + *a4;
  to[1] = combined_products_2;
  to[2] = combined_products_3;
  if ( !sr_collision_line_triangle(a1, a2, &a5, a4, to, a6, a7, a8) )
    return 0;
  component_delta = a1[2] - a4[2];
  *a3 = fsqrt(
          (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
        + (float)(component_delta * component_delta));
  return 1;
}

//----- (0000000140158760) ----------------------------------------------------
_BOOL8            sub_140158760(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float *input_cursor;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float scaled_value_2;
  float input_value;
  float source_component_y_2;
  float source_component_z_2;
  float combined_products;
  float *input_cursor_2;
  float *input_cursor_3;
  float saved_point;
  float comparison_operand;
  float comparison_operand_2;
  float square_root;
  float input_value_2;
  float comparison_operand_3;
  float comparison_operand_4;
  int saved_normal;
  float cached_source_component_y;
  float input_value_3;
  float comparison_operand_5;
  float comparison_operand_6;
  int saved_normal_2;
  float cached_source_component_y_2;
  float input_value_4;
  float comparison_operand_7;
  float comparison_operand_8;
  int saved_normal_3;
  float cached_source_component_y_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140158760[112];
#define point (*(float (*))(void *)(sr_frame_140158760 + 0)) /* [rsp+48h] */
#define frame_float_at_4 (*(float (*))(void *)(sr_frame_140158760 + 4)) /* [rsp+4Ch] */
#define frame_float_at_8 (*(float (*))(void *)(sr_frame_140158760 + 8)) /* [rsp+50h] */
#define normal (*(int (*))(void *)(sr_frame_140158760 + 16)) /* [rsp+58h] */
#define saved_source_component_y (*(float (*))(void *)(sr_frame_140158760 + 20)) /* [rsp+5Ch] */
#define saved_source_component_z (*(float (*))(void *)(sr_frame_140158760 + 24)) /* [rsp+60h] */
#define to (*(float (*)[20])(void *)(sr_frame_140158760 + 32)) /* [rsp+68h] */

  input_cursor = a6;
  *a3 = 65536.0;
  scaled_value = *a4;
  source_component_y = a4[1];
  source_component_z = a4[2];
  scaled_value_2 = *a2;
  input_value = a5;
  source_component_y_2 = a2[1];
  source_component_z_2 = a2[2];
  combined_products = (float)((float)((float)(source_component_y - input_cursor[1]) * source_component_y_2) + (float)((float)(*a4 - *input_cursor) * *a2))
      + (float)((float)(source_component_z - input_cursor[2]) * source_component_z_2);
  if ( combined_products > a5 || combined_products < 0.0 )
    return 0;
  input_cursor_2 = a7;
  input_cursor_3 = a8;
  normal = *(_DWORD *)a2;
  saved_source_component_y = source_component_y_2;
  saved_source_component_z = source_component_z_2;
  to[0] = (float)(scaled_value_2 * (float)-a5) + scaled_value;
  to[1] = (float)(source_component_y_2 * (float)-a5) + source_component_y;
  to[2] = (float)(source_component_z_2 * (float)-a5) + source_component_z;
  if ( sr_collision_line_triangle(&point, (float *)&normal, &a5, a4, to, input_cursor, a7, a8) )
  {
    saved_point = point;
    comparison_operand = frame_float_at_4;
    comparison_operand_2 = frame_float_at_8;
    a1[1] = frame_float_at_4;
    *a1 = saved_point;
    a1[2] = comparison_operand_2;
    *a2 = scaled_value_2;
    a2[1] = source_component_y_2;
    a2[2] = source_component_z_2;
    square_root = fsqrt(
            (float)((float)((float)(comparison_operand - a4[1]) * (float)(comparison_operand - a4[1]))
                  + (float)((float)(saved_point - *a4) * (float)(saved_point - *a4)))
          + (float)((float)(comparison_operand_2 - a4[2]) * (float)(comparison_operand_2 - a4[2])));
    *a3 = square_root;
  }
  else
  {
    square_root = *a3;
  }
  if ( square_root == 65536.0 )
  {
    if ( (unsigned int)sub_140154200(&point, (float *)&normal, &a5, a4, input_value, input_cursor, input_cursor_2) )
    {
      input_value_2 = a5;
      if ( square_root > a5 )
      {
        comparison_operand_3 = frame_float_at_4;
        *a1 = point;
        comparison_operand_4 = frame_float_at_8;
        a1[1] = comparison_operand_3;
        saved_normal = normal;
        a1[2] = comparison_operand_4;
        cached_source_component_y = saved_source_component_y;
        *(_DWORD *)a2 = saved_normal;
        a2[2] = saved_source_component_z;
        a2[1] = cached_source_component_y;
        *a3 = input_value_2;
      }
    }
    if ( (unsigned int)sub_140154200(&point, (float *)&normal, &a5, a4, input_value, input_cursor_2, input_cursor_3) )
    {
      input_value_3 = a5;
      if ( a5 < *a3 )
      {
        comparison_operand_5 = frame_float_at_4;
        *a1 = point;
        comparison_operand_6 = frame_float_at_8;
        a1[1] = comparison_operand_5;
        saved_normal_2 = normal;
        a1[2] = comparison_operand_6;
        cached_source_component_y_2 = saved_source_component_y;
        *(_DWORD *)a2 = saved_normal_2;
        a2[2] = saved_source_component_z;
        a2[1] = cached_source_component_y_2;
        *a3 = input_value_3;
      }
    }
    if ( (unsigned int)sub_140154200(&point, (float *)&normal, &a5, a4, input_value, input_cursor_3, input_cursor) )
    {
      input_value_4 = a5;
      if ( a5 < *a3 )
      {
        comparison_operand_7 = frame_float_at_4;
        *a1 = point;
        comparison_operand_8 = frame_float_at_8;
        a1[1] = comparison_operand_7;
        saved_normal_3 = normal;
        a1[2] = comparison_operand_8;
        cached_source_component_y_3 = saved_source_component_y;
        *(_DWORD *)a2 = saved_normal_3;
        a2[2] = saved_source_component_z;
        a2[1] = cached_source_component_y_3;
        *a3 = input_value_4;
      }
    }
  }
  return *a3 < 65536.0;
}
#undef point
#undef frame_float_at_4
#undef frame_float_at_8
#undef normal
#undef saved_source_component_y
#undef saved_source_component_z
#undef to

//----- (0000000140158AB0) ----------------------------------------------------
void crt_sprintf(_BYTE *a1,      char *a2, ...)
{
  unsigned int *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = sub_140001BB0();
  sub_1402250AC(*(_QWORD *)returned_pointer | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (0000000140158B10) ----------------------------------------------------
void            format_with_thousands(_BYTE *a1, unsigned int a2)
{
  if ( (int)a2 < 1000000000 )
  {
    if ( (int)a2 < 1000000 )
    {
      if ( (int)a2 < 1000 )
        crt_sprintf(a1, "%d", a2);
      else
        crt_sprintf(a1, "%d,%03d", a2 / 0x3E8, a2 % 0x3E8);
    }
    else
    {
      crt_sprintf(a1, "%d,%03d,%03d", a2 / 0xF4240, (int)(a2 / 0x3E8) % 1000, a2 % 0x3E8);
    }
  }
  else
  {
    crt_sprintf(
      a1,
      "%d,%03d,%03d,%03d",
      a2 / 0x3B9ACA00,
      (int)(a2 / 0xF4240) % 1000,
      (int)(a2 / 0x3E8) % 1000,
      a2 % 0x3E8);
  }
}

//----- (0000000140158C70) ----------------------------------------------------
__int64 sub_140158C70(_BYTE *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *returned_pointer;
  __int64 result;
  va_list va;

  va_start(va, a3);
  returned_pointer = (__int64 *)sub_140001BB0();
  result = sub_1402250BC(*returned_pointer, a1, a2, a3, nullptr, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

//----- (000000014015AE10) ----------------------------------------------------
__int64            sub_14015AE10(int a1, _DWORD *a2, int a3)
{
  __int64 record_word_offset;
  signed int iteration_count;
  unsigned int remaining_bits;
  unsigned int j;
  unsigned int table_value;
  unsigned int integer_difference;
  int option_flags;
  char running_total;
  char table_value_2;
  unsigned int i;
  unsigned int integer_difference_2;

  record_word_offset = 16388LL * a1;
  iteration_count = dword_140404A6C[record_word_offset + 291021661];
  if ( iteration_count + (a3 >> 8) >= 0x10000 )
    return 0;
  if ( dword_140404A6C[record_word_offset + 291021664] )
  {
    option_flags = 0;
    running_total = 0;
    if ( a3 > 0 )
    {
      table_value_2 = dword_140404A6C[record_word_offset + 291021662];
      for ( i = dword_140404A6C[record_word_offset + 291021662]; ; i = 0 )
      {
        integer_difference_2 = 8 - i;
        option_flags |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[record_word_offset + 291021665] + iteration_count) >> table_value_2)) << running_total;
        if ( a3 < 8 - i )
          break;
        *(_QWORD *)&dword_140404A6C[record_word_offset + 291021661] = (unsigned int)++iteration_count;
        if ( a3 == integer_difference_2 )
          goto LABEL_18;
        a3 -= integer_difference_2;
        running_total += integer_difference_2;
        if ( a3 <= 0 )
          goto LABEL_18;
        table_value_2 = 0;
      }
      dword_140404A6C[record_word_offset + 291021662] = i + a3;
    }
LABEL_18:
    *a2 = option_flags;
    return 1;
  }
  remaining_bits = *a2 & ~(-1 << a3);
  if ( a3 <= 0 )
    return 1;
  for ( j = dword_140404A6C[record_word_offset + 291021662]; ; LOBYTE(j) = 0 )
  {
    *((_BYTE *)&dword_140404A6C[record_word_offset + 291021665] + iteration_count) &= ~(((1 << a3) - 1) << j);
    *((_BYTE *)&dword_140404A6C[record_word_offset + 291021665] + (int)dword_140404A6C[record_word_offset + 291021661]) |= (_BYTE)remaining_bits << dword_140404A6C[record_word_offset + 291021662];
    table_value = dword_140404A6C[record_word_offset + 291021662];
    integer_difference = 8 - table_value;
    if ( a3 < 8 - table_value )
      break;
    iteration_count = dword_140404A6C[record_word_offset + 291021661] + 1;
    *(_QWORD *)&dword_140404A6C[record_word_offset + 291021661] = (unsigned int)iteration_count;
    if ( a3 == integer_difference )
      return 1;
    a3 -= integer_difference;
    remaining_bits >>= integer_difference;
    if ( a3 <= 0 )
      return 1;
  }
  dword_140404A6C[record_word_offset + 291021662] = a3 + table_value;
  return 1;
}

//----- (000000014015AFD0) ----------------------------------------------------
__int64            sub_14015AFD0(int a1,      __m128i *a2, int a3, int a4)
{
  __int64 record_word_offset;
       __m128i *input_cursor;
  __int64 table_value;
  int byte_count;
  __m128i *destination_buffer;

  record_word_offset = 16388LL * a1;
  input_cursor = a2;
  if ( (int)dword_140404A6C[record_word_offset + 291021662] > 0 )
  {
    ++dword_140404A6C[record_word_offset + 291021661];
    dword_140404A6C[record_word_offset + 291021662] = 0;
  }
  table_value = (int)dword_140404A6C[record_word_offset + 291021661];
  byte_count = a4 * a3;
  if ( (int)table_value + a4 * a3 >= 0x10000 )
    return 0;
  if ( dword_140404A6C[record_word_offset + 291021664] )
  {
    a2 = (     __m128i *)((char *)&dword_140404A6C[record_word_offset + 291021665] + table_value);
    destination_buffer = (__m128i *)input_cursor;
  }
  else
  {
    destination_buffer = (__m128i *)((char *)&dword_140404A6C[record_word_offset + 291021665] + table_value);
  }
  crt_memcpy(destination_buffer, a2, byte_count);
  dword_140404A6C[record_word_offset + 291021661] += byte_count;
  return 1;
}

//----- (000000014015B070) ----------------------------------------------------
__int64 crt_sscanf(__int64 a1,      char *a2, ...)
{
  __int64 *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = (__int64 *)sub_140001BC0();
  return sub_140236BF4(*returned_pointer, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (000000014015B0D0) ----------------------------------------------------
__int64 crt_sscanf_s(__int64 a1,      char *a2, ...)
{
  unsigned int *returned_pointer;
  va_list va;

  va_start(va, a2);
  returned_pointer = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)returned_pointer | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (000000014015B140) ----------------------------------------------------
void            sub_14015B140(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int a6)
{
  __int64 remaining_count;
  unsigned __int8 *buffer_cursor;
  _BYTE *saved_shifted_bits;
  __int64 integer_difference;
  __int64 integer_difference_2;
  int loaded_word;
  int table_value;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  char integer_difference_3;
  char integer_difference_4;
  char integer_difference_5;

  remaining_count = a5;
  buffer_cursor = a4;
  if ( a5 > 0 )
  {
    saved_shifted_bits = (_BYTE *)(a1 + 2);
    integer_difference = a2 - (_QWORD)a4;
    integer_difference_2 = a3 - (_QWORD)a4;
    do
    {
      loaded_word = *buffer_cursor;
      table_value = buffer_cursor[integer_difference_2];
      shifted_bits = (buffer_cursor[integer_difference] << 20) + 0x80000;
      shifted_bits_2 = (shifted_bits + 1470208 * (loaded_word - 128)) >> 20;
      shifted_bits_3 = (int)(shifted_bits + ((360960 * (128 - table_value)) & 0xFFFF0000) + 748800 * (128 - loaded_word)) >> 20;
      shifted_bits_4 = (shifted_bits + 1858048 * (table_value - 128)) >> 20;
      if ( (unsigned int)shifted_bits_2 > 0xFF )
      {
        integer_difference_3 = -1;
        if ( shifted_bits_2 < 0 )
          integer_difference_3 = 0;
        LOBYTE(shifted_bits_2) = integer_difference_3;
      }
      if ( (unsigned int)shifted_bits_3 > 0xFF )
      {
        integer_difference_4 = -1;
        if ( shifted_bits_3 < 0 )
          integer_difference_4 = 0;
        LOBYTE(shifted_bits_3) = integer_difference_4;
      }
      if ( (unsigned int)shifted_bits_4 > 0xFF )
      {
        integer_difference_5 = -1;
        if ( shifted_bits_4 < 0 )
          integer_difference_5 = 0;
        LOBYTE(shifted_bits_4) = integer_difference_5;
      }
      *(saved_shifted_bits - 2) = shifted_bits_2;
      ++buffer_cursor;
      *(saved_shifted_bits - 1) = shifted_bits_3;
      *saved_shifted_bits = shifted_bits_4;
      saved_shifted_bits[1] = -1;
      saved_shifted_bits += a6;
      --remaining_count;
    }
    while ( remaining_count );
  }
}

//----- (000000014015B270) ----------------------------------------------------
__int64            sub_14015B270(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int record_byte_offset;
  __m128i si128;
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i loaded_vector_3;
  __m128i loaded_vector_4;
  __m128i loaded_vector_5;
  __int64 saved_record_byte_offset;
  __m128i xor_vector;
  __m128i xor_vector_2;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i reordered_vector;
  __m128i reordered_vector_2;
  __int64 result;
  __int8 *state_address;
  __int64 integer_difference;
  __int64 integer_difference_2;
  unsigned __int8 *buffer_cursor;
  __int64 remaining_count;
  int loaded_word;
  int table_value;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  char integer_difference_3;
  char integer_difference_4;
  unsigned int selection_code;

  record_byte_offset = 0;
  if ( a6 == 4 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279880);
    loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140279240);
    loaded_vector_2 = _mm_load_si128((     __m128i *)&xmmword_140279970);
    loaded_vector_3 = _mm_load_si128((     __m128i *)&xmmword_140279990);
    loaded_vector_4 = _mm_load_si128((     __m128i *)&xmmword_140279250);
    loaded_vector_5 = _mm_load_si128((     __m128i *)&xmmword_1402791D0);
    if ( a5 > 7 )
    {
      do
      {
        saved_record_byte_offset = record_byte_offset;
        record_byte_offset += 8;
        xor_vector = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(saved_record_byte_offset + a4)), si128));
        xor_vector_2 = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(saved_record_byte_offset + a3)), si128));
        vector_result = _mm_srli_epi16(_mm_unpacklo_epi8(si128, _mm_loadl_epi64((     __m128i *)(saved_record_byte_offset + a2))), 4u);
        vector_result_2 = _mm_packus_epi16(
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(xor_vector, loaded_vector), vector_result), 4u),
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(xor_vector_2, loaded_vector_4), vector_result), 4u));
        vector_result_3 = _mm_packus_epi16(
                _mm_srai_epi16(
                  _mm_add_epi16(_mm_add_epi16(_mm_mulhi_epi16(xor_vector_2, loaded_vector_3), vector_result), _mm_mulhi_epi16(xor_vector, loaded_vector_2)),
                  4u),
                loaded_vector_5);
        reordered_vector = _mm_unpacklo_epi8(vector_result_2, vector_result_3);
        reordered_vector_2 = _mm_unpackhi_epi8(vector_result_2, vector_result_3);
        *a1 = _mm_unpacklo_epi16(reordered_vector, reordered_vector_2);
        a1[1] = _mm_unpackhi_epi16(reordered_vector, reordered_vector_2);
        a1 += 2;
      }
      while ( record_byte_offset + 7 < a5 );
    }
  }
  result = record_byte_offset;
  if ( record_byte_offset < (__int64)a5 )
  {
    state_address = &SR_VEC_PTR_LANES(128, a1, i8)[2];
    integer_difference = a2 - a4;
    integer_difference_2 = a3 - a4;
    buffer_cursor = (unsigned __int8 *)(record_byte_offset + a4);
    remaining_count = a5 - (__int64)record_byte_offset;
    do
    {
      loaded_word = *buffer_cursor;
      table_value = buffer_cursor[integer_difference_2];
      shifted_bits = (buffer_cursor[integer_difference] << 20) + 0x80000;
      shifted_bits_2 = (shifted_bits + 1470208 * (loaded_word - 128)) >> 20;
      shifted_bits_3 = (int)(shifted_bits + ((360960 * (128 - table_value)) & 0xFFFF0000) + 748800 * (128 - loaded_word)) >> 20;
      result = (unsigned int)((shifted_bits + 1858048 * (table_value - 128)) >> 20);
      if ( (unsigned int)shifted_bits_2 > 0xFF )
      {
        integer_difference_3 = -1;
        if ( shifted_bits_2 < 0 )
          integer_difference_3 = 0;
        LOBYTE(shifted_bits_2) = integer_difference_3;
      }
      if ( (unsigned int)shifted_bits_3 > 0xFF )
      {
        integer_difference_4 = -1;
        if ( shifted_bits_3 < 0 )
          integer_difference_4 = 0;
        LOBYTE(shifted_bits_3) = integer_difference_4;
      }
      if ( (unsigned int)result > 0xFF )
      {
        selection_code = 255;
        if ( (int)result < 0 )
          selection_code = 0;
        result = selection_code;
      }
      *(state_address - 2) = shifted_bits_2;
      ++buffer_cursor;
      *(state_address - 1) = shifted_bits_3;
      *state_address = result;
      state_address[1] = -1;
      state_address += a6;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (000000014015B530) ----------------------------------------------------
__int64            sub_14015B530(__int64 a1)
{
  __int64 result;

  if ( !*(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
    return result;
  return !*(_DWORD *)(a1 + 48) || *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
}

//----- (000000014015B580) ----------------------------------------------------
__int64            sub_14015B580(int a1, int a2)
{
  char input_value;
  int input_value_2;
  int masked_bits;
  unsigned int state_address;

  input_value = a2;
  if ( a2 > 16 )
    crt_assert((char *)L"bits <= 16", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0xFA6u);
  input_value_2 = a1;
  masked_bits = 2 * (a1 & 0x5555);
  state_address = (16 * ((4 * (masked_bits & 0x3333 | (input_value_2 >> 1) & 0x1111)) & 0xF0F | ((masked_bits | (input_value_2 >> 1) & 0x5555u) >> 2) & 0x303))
     | (((4 * (masked_bits & 0x3333 | (input_value_2 >> 1) & 0x1111)) | ((masked_bits | (input_value_2 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4) & 0xF0F;
  return (int)((state_address >> 8) | ((unsigned __int8)state_address << 8)) >> (16 - input_value);
}

//----- (000000014015B6D0) ----------------------------------------------------
__int64            sub_14015B6D0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015B6D0[32];
#define scratch_buffer (*(_DWORD (*)[6])(void *)(sr_frame_14015B6D0 + 0)) /* [rsp+20h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14015B6D0 + 24)) /* [rsp+38h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14015B6D0 + 28)) /* [rsp+3Ch] */

  unused_written_slot = 255;
  result = sub_14015C5E0(a1, (__int64)scratch_buffer);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  if ( result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)a1;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 4);
    if ( a4 )
    {
      if ( scratch_buffer[0] == 24 && callee_output_word == -16777216 )
        *a4 = 3;
      else
        *a4 = (callee_output_word != 0) + 3;
    }
    return 1;
  }
  return result;
}
#undef scratch_buffer
#undef callee_output_word
#undef unused_written_slot

//----- (000000014015B780) ----------------------------------------------------
__int64            sub_14015B780(unsigned int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int shifted_bits;
  unsigned int abs32_result;
  int comparison_operand;
  __int64 comparison_operand_2;
  int saved_packed_word_bits;
  int cached_callee_output_word;
  signed int table_value;
  __int64 client_static_tls_result;
       char *literal_text;
  int comparison_result;
  int cached_input_value;
  int loaded_word;
  int table_value_2;
  int loaded_word_2;
  int scaled_index;
  char *allocated_buffer;
  char *allocation_buffer;
  signed int iteration_count;
  int saved_comparison_result;
  char *text_cursor;
  __int64 element_index;
  int cached_integer_sum;
  unsigned __int64 loaded_word_3;
  char input_byte;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  char input_byte_2;
  char input_byte_3;
  char *loaded_record_pointer;
  unsigned int shifted_bits_2;
  int table_value_3;
  int masked_bits;
  __int64 element_index_2;
  unsigned __int8 *loaded_record_pointer_2;
  int remaining_count;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_3;
  int loaded_word_5;
  signed int iteration_count_2;
  __int64 i;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int8 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_5;
  signed int integer_difference;
  signed int cached_j;
  int running_total;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 loaded_word_7;
  unsigned __int8 *loaded_record_pointer_6;
  __int64 masked_bits_2;
  __int64 shifted_bits_3;
  __int64 saved_iteration_count;
  int iteration_count_3;
  __int64 integer_sum;
  __int64 saved_iteration_count_2;
  __int64 integer_sum_2;
  int loaded_word_8;
  unsigned __int8 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_7;
  __int64 saved_iteration_count_3;
  int iteration_count_4;
  __int64 integer_sum_3;
  __int64 saved_iteration_count_4;
  __int64 integer_sum_4;
  signed int integer_difference_2;
  int element_index_3;
  unsigned int scaled_index_4;
  int masked_bits_3;
  __int64 cached_selection_code;
  unsigned int unrecovered_register_value;
  unsigned int unrecovered_register_value_2;
  unsigned int shifted_bits_4;
  unsigned int unrecovered_register_value_3;
  unsigned int unrecovered_register_value_4;
  unsigned int unrecovered_register_value_5;
  unsigned int unrecovered_register_value_6;
  unsigned int callee_output_word;
  unsigned int shifted_bits_5;
  int iteration_count_5;
  int loaded_word_10;
  int iteration_count_6;
  unsigned __int8 *buffer_cursor_2;
  unsigned __int8 *buffer_cursor_3;
  unsigned __int64 loaded_word_11;
  unsigned __int8 loaded_word_12;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 loaded_word_13;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned __int8 loaded_word_14;
  unsigned __int8 *loaded_record_pointer_10;
  unsigned __int8 loaded_word_15;
  unsigned __int8 *loaded_record_pointer_11;
  signed int iteration_count_7;
  char *text_cursor_2;
  int cached_callee_output_word_2;
  unsigned int call_result;
  unsigned int shifted_bits_6;
  char masked_bits_4;
  int cached_shifted_bits;
  unsigned int masked_bits_5;
  int cached_call_result;
  char call_result_2;
  int saved_shifted_bits;
  unsigned int masked_bits_6;
  int cached_call_result_2;
  char call_result_3;
  int saved_packed_word_bits_2;
  int masked_bits_7;
  signed int integer_difference_3;
  signed int scaled_index_5;
  __int64 k;
  int table_value_4;
  int iteration_count_8;
  signed int iteration_count_9;
  __int64 scaled_index_6;
  __int64 cached_scaled_index;
  char *text_cursor_3;
  __int64 scaled_index_7;
  char table_value_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015B780[1248];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14015B780 + 0)) /* [rsp+0h] */
#define j (*(unsigned int (*))(void *)(sr_frame_14015B780 + 48)) /* [rsp+30h] */
#define saved_masked_bits (*(int (*))(void *)(sr_frame_14015B780 + 52)) /* [rsp+34h] */
#define integer_sum_5 (*(int (*))(void *)(sr_frame_14015B780 + 56)) /* [rsp+38h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_14015B780 + 60)) /* [rsp+3Ch] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_14015B780 + 68)) /* [rsp+44h] */
#define call_result_4 (*(int (*))(void *)(sr_frame_14015B780 + 72)) /* [rsp+48h] */
#define integer_sum_6 (*(signed int (*))(void *)(sr_frame_14015B780 + 76)) /* [rsp+4Ch] */
#define cached_callee_output_word_3 (*(int (*))(void *)(sr_frame_14015B780 + 80)) /* [rsp+50h] */
#define callee_output_word_3 (*(int (*))(void *)(sr_frame_14015B780 + 84)) /* [rsp+54h] */
#define shifted_bits_7 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 88)) /* [rsp+58h] */
#define call_result_5 (*(int (*))(void *)(sr_frame_14015B780 + 92)) /* [rsp+5Ch] */
#define saved_shifted_bits_2 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 96)) /* [rsp+60h] */
#define call_result_6 (*(int (*))(void *)(sr_frame_14015B780 + 100)) /* [rsp+64h] */
#define shifted_bits_8 (*(int (*))(void *)(sr_frame_14015B780 + 104)) /* [rsp+68h] */
#define call_result_7 (*(int (*))(void *)(sr_frame_14015B780 + 108)) /* [rsp+6Ch] */
#define shifted_bits_9 (*(int (*))(void *)(sr_frame_14015B780 + 112)) /* [rsp+70h] */
#define input_value (*(int (*))(void *)(sr_frame_14015B780 + 116)) /* [rsp+74h] */
#define table_value_6 (*(int (*))(void *)(sr_frame_14015B780 + 120)) /* [rsp+78h] */
#define selection_code (*(__int64 (*))(void *)(sr_frame_14015B780 + 128)) /* [rsp+80h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_14015B780 + 136)) /* [rsp+88h] */
#define callee_output_word_4 (*(int (*))(void *)(sr_frame_14015B780 + 144)) /* [rsp+90h] */
#define frame_word_at_148 (*(int (*))(void *)(sr_frame_14015B780 + 148)) /* [rsp+94h] */
#define frame_word_at_152 (*(int (*))(void *)(sr_frame_14015B780 + 152)) /* [rsp+98h] */
#define frame_word_at_156 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 156)) /* [rsp+9Ch] */
#define frame_word_at_160 (*(int (*))(void *)(sr_frame_14015B780 + 160)) /* [rsp+A0h] */
#define frame_word_at_164 (*(int (*))(void *)(sr_frame_14015B780 + 164)) /* [rsp+A4h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_14015B780 + 168)) /* [rsp+A8h] */
#define frame_word_at_176 (*(int (*))(void *)(sr_frame_14015B780 + 176)) /* [rsp+B0h] */
#define unused_written_slot (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 184)) /* [rsp+B8h] */
#define unused_written_slot_2 (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 192)) /* [rsp+C0h] */
#define table_value_7 (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 200)) /* [rsp+C8h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_14015B780 + 208)) /* [rsp+D0h] */
#define unused_frame_slot_1232 (*(__int64 (*))(void *)(sr_frame_14015B780 + 1232)) /* [rsp+4D0h] */

  unused_written_slot = a2;
  shifted_bits = 0;
  table_value_7 = a4;
  unused_written_slot_2 = a3;
  input_value = a5;
  HIDWORD(packed_word_bits_2) = 255;
  if ( !sub_14015C5E0((__int64)a1, (__int64)&callee_output_word_4) )
    return 0; /* 0x14015B7DC: je -> xor eax, eax */
  table_value_6 = a1[1];
  abs32_result = abs32(table_value_6);
  a1[1] = abs32_result;
  if ( abs32_result > 0x1000000 || *a1 > 0x1000000 )
    goto LABEL_213;
  comparison_operand = frame_word_at_152;
  comparison_operand_2 = frame_word_at_148;
  saved_packed_word_bits = packed_word_bits_2;
  cached_callee_output_word = callee_output_word_4;
  j = frame_word_at_156;
  callee_output_word_2 = frame_word_at_160;
  callee_output_word_3 = frame_word_at_164;
  saved_masked_bits = frame_word_at_176;
  packed_word_bits = packed_word_bits_2;
  call_result_4 = frame_word_at_148;
  integer_sum_5 = frame_word_at_152;
  cached_callee_output_word_3 = callee_output_word_4;
  if ( frame_word_at_152 == 12 )
  {
    if ( callee_output_word_4 < 24 )
    {
      shifted_bits = (frame_word_at_148 - frame_word_at_176 - 24) / 3;
      goto LABEL_9;
    }
  }
  else if ( callee_output_word_4 < 16 )
  {
    shifted_bits = (frame_word_at_148 - frame_word_at_176 - frame_word_at_152) >> 2;
LABEL_9:
    if ( shifted_bits )
      goto LABEL_14;
  }
  table_value = a1[46];
  if ( frame_word_at_148 != table_value + a1[48] - a1[52] )
  {
    crt_assert(
      (char *)L"info.offset == s->callback_already_read + (int) (s->img_buffer - s->img_buffer_original)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x1515u);
    table_value = a1[46];
  }
  if ( comparison_operand_2 != *((_QWORD *)a1 + 24) - 56LL + table_value - (_QWORD)a1 )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad offset";
LABEL_214:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return 0; /* 0x14015C5B7: xor eax, eax */
  }
LABEL_14:
  if ( cached_callee_output_word == 24 && saved_packed_word_bits == -16777216 )
    comparison_result = 3;
  else
    comparison_result = (saved_packed_word_bits != 0) + 3;
  cached_input_value = input_value;
  a1[2] = comparison_result;
  loaded_word = *a1;
  table_value_2 = a1[1];
  loaded_word_2 = *a1;
  if ( cached_input_value >= 3 )
    comparison_result = cached_input_value;
  if ( loaded_word_2 < 0
    || loaded_word_2 && comparison_result > 0x7FFFFFFF / loaded_word_2
    || (scaled_index = comparison_result * loaded_word_2, scaled_index < 0)
    || table_value_2 < 0
    || table_value_2 && scaled_index > 0x7FFFFFFF / table_value_2 )
  {
LABEL_213:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "too large";
    goto LABEL_214;
  }
  if ( loaded_word && comparison_result > 0x7FFFFFFF / loaded_word
    || table_value_2 && scaled_index > 0x7FFFFFFF / table_value_2
    || (allocated_buffer = (char *)sr_path_malloc((int)(table_value_2 * comparison_result * *a1)), saved_allocated_buffer = allocated_buffer, (allocation_buffer = allocated_buffer) == nullptr) )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
    goto LABEL_214;
  }
  if ( cached_callee_output_word >= 16 )
  {
    call_result_5 = 0;
    call_result_6 = 0;
    call_result_7 = 0;
    call_result_4 = 0;
    element_index_3 = 0;
    shifted_bits_7 = 0;
    saved_shifted_bits_2 = 0;
    shifted_bits_8 = 0;
    shifted_bits_9 = 0;
    sub_14016E0F0((__int64)a1, comparison_operand_2 - saved_masked_bits - comparison_operand);
    if ( cached_callee_output_word == 24 )
    {
      scaled_index_4 = 3 * *a1;
    }
    else if ( cached_callee_output_word == 16 )
    {
      scaled_index_4 = 2 * *a1;
    }
    else
    {
      scaled_index_4 = 0;
    }
    masked_bits_3 = -scaled_index_4 & 3;
    saved_masked_bits = masked_bits_3;
    if ( cached_callee_output_word == 24 )
    {
      cached_selection_code = 1;
      selection_code = 1;
      goto LABEL_145;
    }
    if ( cached_callee_output_word == 32 && callee_output_word_3 == 255 && callee_output_word_2 == 65280 && j == 16711680 )
    {
      if ( (_DWORD)packed_word_bits == -16777216 )
      {
        cached_selection_code = 2;
        selection_code = 2;
        goto LABEL_145;
      }
    }
    else if ( !j || !callee_output_word_2 || !callee_output_word_3 )
    {
      goto LABEL_211;
    }
    call_result_5 = sub_140162FB0(j) - 7;
    shifted_bits_7 = (unsigned __int8)(((unsigned __int16)(((((j & 0x5555) + ((j >> 1) & 0x5555)) & 0x3333)
                                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((j & 0x55) + ((j >> 1) & 0x55)) & 0x33)
                             + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    call_result_6 = sub_140162FB0(unrecovered_register_value) - 7;
    shifted_bits_4 = (unsigned __int8)(((unsigned __int16)(((((unrecovered_register_value_2 & 0x5555) + ((unrecovered_register_value_2 >> 1) & 0x5555)) & 0x3333)
                                               + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                               + (((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                                                 + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                              & 0xF0F) >> 8)
                          + (((((unrecovered_register_value_2 & 0x55) + ((unrecovered_register_value_2 >> 1) & 0x55)) & 0x33)
                            + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33)
                            + (((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                           & 0xF)
                          + ((((((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F) >> 8)
                            + (((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                              + (((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((unrecovered_register_value_2 & 0x55555555) + ((unrecovered_register_value_2 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                             & 0xF0F0F0F)) >> 16));
    saved_shifted_bits_2 = shifted_bits_4;
    call_result_7 = sub_140162FB0(unrecovered_register_value_3) - 7;
    shifted_bits_8 = (unsigned __int8)(((unsigned __int16)(((((unrecovered_register_value_4 & 0x5555) + ((unrecovered_register_value_4 >> 1) & 0x5555)) & 0x3333)
                                                + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((unrecovered_register_value_4 & 0x55) + ((unrecovered_register_value_4 >> 1) & 0x55)) & 0x33)
                             + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((unrecovered_register_value_4 & 0x55555555) + ((unrecovered_register_value_4 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    call_result_4 = sub_140162FB0(unrecovered_register_value_5) - 7;
    shifted_bits_5 = (((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) & 0x33333333)
        + ((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    shifted_bits_9 = (unsigned __int8)(((unsigned __int16)((shifted_bits_5 + (shifted_bits_5 >> 4)) & 0xF0F) >> 8)
                           + ((shifted_bits_5 + (shifted_bits_5 >> 4)) & 0xF)
                           + (((((shifted_bits_5 + (shifted_bits_5 >> 4)) & 0xF0F0F0F) >> 8) + ((shifted_bits_5 + (shifted_bits_5 >> 4)) & 0xF0F0F0F)) >> 16));
    if ( shifted_bits_7 <= 8 && shifted_bits_4 <= 8 && callee_output_word <= 8 )
    {
      cached_selection_code = 0;
      selection_code = 0;
      if ( (unsigned __int8)(((unsigned __int16)((shifted_bits_5
                                                + (((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + ((shifted_bits_5
                             + (((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + (((((shifted_bits_5
                                + (((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + ((shifted_bits_5
                               + (((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((unrecovered_register_value_6 & 0x55555555) + ((unrecovered_register_value_6 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16)) <= 8u )
      {
        masked_bits_3 = saved_masked_bits;
LABEL_145:
        table_value_3 = a1[1];
        iteration_count_5 = 0;
        integer_sum_5 = 0;
        saved_comparison_result = comparison_result;
        if ( table_value_3 <= 0 )
          goto LABEL_195;
        while ( 1 )
        {
          loaded_word_10 = *a1;
          if ( cached_selection_code )
          {
            iteration_count_6 = 0;
            if ( loaded_word_10 > 0 )
            {
              buffer_cursor_2 = *((unsigned __int8 **)a1 + 24);
              buffer_cursor_3 = (unsigned __int8 *)&allocation_buffer[element_index_3];
              while ( 1 )
              {
                loaded_word_11 = *((_QWORD *)a1 + 25);
                if ( (unsigned __int64)buffer_cursor_2 >= loaded_word_11 )
                {
                  if ( !a1[12] )
                  {
                    buffer_cursor_3[2] = 0;
                    goto LABEL_156;
                  }
                  stbi_refill_buffer((__int64)a1);
                  loaded_record_pointer_8 = *((unsigned __int8 **)a1 + 24);
                  loaded_word_12 = *loaded_record_pointer_8;
                  buffer_cursor_2 = loaded_record_pointer_8 + 1;
                  loaded_word_11 = *((_QWORD *)a1 + 25);
                }
                else
                {
                  loaded_word_12 = *buffer_cursor_2++;
                }
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2);
                buffer_cursor_3[2] = loaded_word_12;
                if ( (unsigned __int64)buffer_cursor_2 < loaded_word_11 )
                {
                  loaded_word_13 = *buffer_cursor_2++;
                  goto LABEL_158;
                }
LABEL_156:
                if ( !a1[12] )
                {
                  buffer_cursor_3[1] = 0;
                  goto LABEL_161;
                }
                stbi_refill_buffer((__int64)a1);
                loaded_record_pointer_9 = *((unsigned __int8 **)a1 + 24);
                loaded_word_13 = *loaded_record_pointer_9;
                buffer_cursor_2 = loaded_record_pointer_9 + 1;
                loaded_word_11 = *((_QWORD *)a1 + 25);
LABEL_158:
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2);
                buffer_cursor_3[1] = loaded_word_13;
                if ( (unsigned __int64)buffer_cursor_2 < loaded_word_11 )
                {
                  loaded_word_14 = *buffer_cursor_2++;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2);
                  goto LABEL_164;
                }
LABEL_161:
                if ( a1[12] )
                {
                  stbi_refill_buffer((__int64)a1);
                  loaded_record_pointer_10 = *((unsigned __int8 **)a1 + 24);
                  loaded_word_14 = *loaded_record_pointer_10;
                  buffer_cursor_2 = loaded_record_pointer_10 + 1;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
                }
                else
                {
                  loaded_word_14 = 0;
                }
LABEL_164:
                *buffer_cursor_3 = loaded_word_14;
                element_index_3 += 3;
                buffer_cursor_3 += 3;
                if ( cached_selection_code == 2 )
                {
                  if ( (unsigned __int64)buffer_cursor_2 >= *((_QWORD *)a1 + 25) )
                  {
                    if ( a1[12] )
                    {
                      stbi_refill_buffer((__int64)a1);
                      loaded_record_pointer_11 = *((unsigned __int8 **)a1 + 24);
                      loaded_word_15 = *loaded_record_pointer_11;
                      buffer_cursor_2 = loaded_record_pointer_11 + 1;
                      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
                    }
                    else
                    {
                      loaded_word_15 = 0;
                    }
                  }
                  else
                  {
                    loaded_word_15 = *buffer_cursor_2++;
                    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor_2);
                  }
                }
                else
                {
                  loaded_word_15 = -1;
                }
                HIDWORD(packed_word_bits) |= loaded_word_15;
                if ( saved_comparison_result == 4 )
                {
                  ++element_index_3;
                  *buffer_cursor_3++ = loaded_word_15;
                }
                if ( ++iteration_count_6 >= (int)*a1 )
                  goto LABEL_187;
              }
            }
          }
          else
          {
            iteration_count_7 = 0;
            integer_sum_6 = 0;
            if ( loaded_word_10 > 0 )
            {
              text_cursor_2 = &allocation_buffer[element_index_3];
              cached_callee_output_word_2 = cached_callee_output_word_3;
              do
              {
                call_result = sub_1401605B0((__int64)a1);
                if ( cached_callee_output_word_2 == 16 )
                {
                  shifted_bits_6 = call_result;
                }
                else
                {
                  shifted_bits_6 = call_result + ((unsigned int)sub_1401605B0((__int64)a1) << 16);
                  iteration_count_7 = integer_sum_6;
                }
                masked_bits_4 = sub_14016E050(j & shifted_bits_6, call_result_5, shifted_bits_7);
                cached_shifted_bits = saved_shifted_bits_2;
                masked_bits_5 = callee_output_word_2 & shifted_bits_6;
                cached_call_result = call_result_6;
                *text_cursor_2 = masked_bits_4;
                call_result_2 = sub_14016E050(masked_bits_5, cached_call_result, cached_shifted_bits);
                saved_shifted_bits = shifted_bits_8;
                masked_bits_6 = callee_output_word_3 & shifted_bits_6;
                cached_call_result_2 = call_result_7;
                text_cursor_2[1] = call_result_2;
                call_result_3 = sub_14016E050(masked_bits_6, cached_call_result_2, saved_shifted_bits);
                saved_packed_word_bits_2 = packed_word_bits;
                element_index_3 += 3;
                text_cursor_2[2] = call_result_3;
                text_cursor_2 += 3;
                if ( saved_packed_word_bits_2 )
                  masked_bits_7 = sub_14016E050(saved_packed_word_bits_2 & shifted_bits_6, call_result_4, shifted_bits_9);
                else
                  masked_bits_7 = 255;
                HIDWORD(packed_word_bits) |= masked_bits_7;
                if ( saved_comparison_result == 4 )
                {
                  ++element_index_3;
                  *text_cursor_2++ = masked_bits_7;
                }
                integer_sum_6 = ++iteration_count_7;
              }
              while ( iteration_count_7 < (int)*a1 );
              allocation_buffer = saved_allocated_buffer;
              cached_selection_code = selection_code;
LABEL_187:
              masked_bits_3 = saved_masked_bits;
            }
            iteration_count_5 = integer_sum_5;
          }
          if ( masked_bits_3 )
          {
            if ( *((_QWORD *)a1 + 2) && (integer_difference_3 = a1[50] - a1[48], integer_difference_3 < masked_bits_3) )
            {
              *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
              (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(masked_bits_3 - integer_difference_3));
              masked_bits_3 = saved_masked_bits;
            }
            else
            {
              *((_QWORD *)a1 + 24) += (unsigned int)masked_bits_3;
            }
          }
          table_value_3 = a1[1];
          integer_sum_5 = ++iteration_count_5;
          if ( iteration_count_5 >= table_value_3 )
            goto LABEL_195;
        }
      }
    }
LABEL_211:
    free(allocation_buffer);
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad masks";
    goto LABEL_214;
  }
  iteration_count = 0;
  integer_sum_6 = 0;
  if ( !shifted_bits || shifted_bits > 256 )
  {
    free(allocated_buffer);
    client_static_tls_result = sr_client_static_tls();
    literal_text = "invalid";
    goto LABEL_214;
  }
  saved_comparison_result = comparison_result;
  if ( shifted_bits <= 0 )
    goto LABEL_58;
  text_cursor = *((char **)a1 + 24);
  element_index = 0;
  cached_integer_sum = integer_sum_5;
  do
  {
    loaded_word_3 = *((_QWORD *)a1 + 25);
    if ( (unsigned __int64)text_cursor < loaded_word_3 )
      goto LABEL_40;
    if ( a1[12] )
    {
      stbi_refill_buffer((__int64)a1);
      text_cursor = *((char **)a1 + 24);
      loaded_word_3 = *((_QWORD *)a1 + 25);
LABEL_40:
      input_byte = *text_cursor;
      scaled_index_2 = 4 * element_index;
      ++text_cursor;
      scratch_buffer[4 * element_index + 2] = input_byte;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(text_cursor);
      scaled_index_3 = 4 * element_index;
      if ( (unsigned __int64)text_cursor < loaded_word_3 )
        goto LABEL_45;
      goto LABEL_43;
    }
    scaled_index_2 = 4 * element_index;
    scratch_buffer[4 * element_index + 2] = 0;
    scaled_index_3 = 4 * element_index;
LABEL_43:
    if ( !a1[12] )
    {
      scratch_buffer[scaled_index_3 + 1] = 0;
      goto LABEL_48;
    }
    stbi_refill_buffer((__int64)a1);
    text_cursor = *((char **)a1 + 24);
    loaded_word_3 = *((_QWORD *)a1 + 25);
LABEL_45:
    input_byte_2 = *text_cursor++;
    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(text_cursor);
    scratch_buffer[scaled_index_2 + 1] = input_byte_2;
    if ( (unsigned __int64)text_cursor < loaded_word_3 )
    {
      input_byte_3 = *text_cursor++;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(text_cursor);
      goto LABEL_51;
    }
LABEL_48:
    if ( a1[12] )
    {
      stbi_refill_buffer((__int64)a1);
      loaded_record_pointer = *((char **)a1 + 24);
      input_byte_3 = *loaded_record_pointer;
      text_cursor = loaded_record_pointer + 1;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(text_cursor);
    }
    else
    {
      input_byte_3 = 0;
    }
LABEL_51:
    scratch_buffer[scaled_index_2] = input_byte_3;
    if ( cached_integer_sum != 12 )
    {
      if ( (unsigned __int64)text_cursor >= *((_QWORD *)a1 + 25) )
      {
        if ( a1[12] )
        {
          stbi_refill_buffer((__int64)a1);
          text_cursor = (char *)++*((_QWORD *)a1 + 24);
        }
      }
      else
      {
        *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(++text_cursor);
      }
    }
    ++element_index;
    scratch_buffer[scaled_index_2 + 3] = -1;
  }
  while ( element_index < shifted_bits );
  iteration_count = integer_sum_6;
  allocation_buffer = saved_allocated_buffer;
  cached_callee_output_word = cached_callee_output_word_3;
LABEL_58:
  sub_14016E0F0((__int64)a1, call_result_4 - shifted_bits * ((integer_sum_5 != 12) + 3) - saved_masked_bits - integer_sum_5);
  if ( cached_callee_output_word != 1 )
  {
    if ( cached_callee_output_word == 4 )
    {
      shifted_bits_2 = (*a1 + 1) >> 1;
      goto LABEL_64;
    }
    if ( cached_callee_output_word == 8 )
    {
      shifted_bits_2 = *a1;
      goto LABEL_64;
    }
    free(allocation_buffer);
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad bpp";
    goto LABEL_214;
  }
  shifted_bits_2 = (*a1 + 7) >> 3;
LABEL_64:
  table_value_3 = a1[1];
  masked_bits = -shifted_bits_2 & 3;
  if ( cached_callee_output_word == 1 )
  {
    LODWORD(packed_word_bits) = 0;
    if ( table_value_3 > 0 )
    {
      element_index_2 = 0;
      do
      {
        loaded_record_pointer_2 = *((unsigned __int8 **)a1 + 24);
        remaining_count = 7;
        if ( (unsigned __int64)loaded_record_pointer_2 >= *((_QWORD *)a1 + 25) )
        {
          if ( a1[12] )
          {
            stbi_refill_buffer((__int64)a1);
            loaded_record_pointer_3 = *((unsigned __int8 **)a1 + 24);
            loaded_word_4 = *loaded_record_pointer_3;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
          }
          else
          {
            loaded_word_4 = 0;
          }
        }
        else
        {
          loaded_word_4 = *loaded_record_pointer_2;
          *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        }
        loaded_word_5 = *a1;
        iteration_count_2 = 0;
        for ( i = loaded_word_4; iteration_count_2 < (int)*a1; loaded_word_5 = *a1 )
        {
          allocation_buffer[element_index_2] = scratch_buffer[4 * (((int)i >> remaining_count) & 1)];
          allocation_buffer[element_index_2 + 1] = scratch_buffer[4 * (((int)i >> remaining_count) & 1) + 1];
          allocation_buffer[element_index_2 + 2] = scratch_buffer[4 * (((int)i >> remaining_count) & 1) + 2];
          element_index_2 += 3;
          if ( saved_comparison_result == 4 )
            allocation_buffer[element_index_2++] = -1;
          if ( ++iteration_count_2 == loaded_word_5 )
            break;
          if ( --remaining_count < 0 )
          {
            loaded_record_pointer_4 = *((unsigned __int8 **)a1 + 24);
            remaining_count = 7;
            if ( (unsigned __int64)loaded_record_pointer_4 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                stbi_refill_buffer((__int64)a1);
                loaded_record_pointer_5 = *((unsigned __int8 **)a1 + 24);
                loaded_word_6 = *loaded_record_pointer_5;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
              }
              else
              {
                loaded_word_6 = 0;
              }
            }
            else
            {
              loaded_word_6 = *loaded_record_pointer_4;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
            }
            i = loaded_word_6;
          }
        }
        if ( masked_bits )
        {
          if ( *((_QWORD *)a1 + 2) && (integer_difference = a1[50] - a1[48], integer_difference < masked_bits) )
          {
            *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
            (*((void (           **)(_QWORD, _QWORD, __int64))a1 + 3))(
              *((_QWORD *)a1 + 5),
              (unsigned int)(masked_bits - integer_difference),
              i);
          }
          else
          {
            *((_QWORD *)a1 + 24) += (unsigned int)masked_bits;
          }
        }
        table_value_3 = a1[1];
        LODWORD(packed_word_bits) = packed_word_bits + 1;
      }
      while ( (int)packed_word_bits < table_value_3 );
    }
  }
  else
  {
    cached_j = 0;
    for ( j = 0; cached_j < table_value_3; j = cached_j )
    {
      running_total = 0;
      if ( (int)*a1 > 0 )
      {
        do
        {
          buffer_cursor = *((unsigned __int8 **)a1 + 24);
          if ( (unsigned __int64)buffer_cursor >= *((_QWORD *)a1 + 25) )
          {
            if ( a1[12] )
            {
              stbi_refill_buffer((__int64)a1);
              loaded_record_pointer_6 = *((unsigned __int8 **)a1 + 24);
              loaded_word_7 = *loaded_record_pointer_6;
              buffer_cursor = loaded_record_pointer_6 + 1;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
            }
            else
            {
              loaded_word_7 = 0;
            }
          }
          else
          {
            loaded_word_7 = *buffer_cursor++;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
          }
          masked_bits_2 = 0;
          shifted_bits_3 = loaded_word_7;
          if ( cached_callee_output_word == 4 )
          {
            masked_bits_2 = loaded_word_7 & 0xF;
            shifted_bits_3 = loaded_word_7 >> 4;
          }
          saved_iteration_count = iteration_count;
          iteration_count_3 = iteration_count + 1;
          allocation_buffer[saved_iteration_count] = scratch_buffer[4 * shifted_bits_3];
          integer_sum = iteration_count_3++;
          allocation_buffer[integer_sum] = scratch_buffer[4 * shifted_bits_3 + 1];
          saved_iteration_count_2 = iteration_count_3;
          iteration_count = iteration_count_3 + 1;
          allocation_buffer[saved_iteration_count_2] = scratch_buffer[4 * shifted_bits_3 + 2];
          if ( saved_comparison_result == 4 )
          {
            integer_sum_2 = iteration_count++;
            allocation_buffer[integer_sum_2] = -1;
          }
          loaded_word_8 = *a1;
          if ( running_total + 1 == *a1 )
            break;
          if ( cached_callee_output_word == 8 )
          {
            if ( (unsigned __int64)buffer_cursor >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                stbi_refill_buffer((__int64)a1);
                loaded_record_pointer_7 = *((unsigned __int8 **)a1 + 24);
                loaded_word_9 = *loaded_record_pointer_7;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
                loaded_word_8 = *a1;
              }
              else
              {
                loaded_word_9 = 0;
              }
            }
            else
            {
              loaded_word_9 = *buffer_cursor;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(buffer_cursor + 1);
            }
            masked_bits_2 = loaded_word_9;
          }
          saved_iteration_count_3 = iteration_count;
          iteration_count_4 = iteration_count + 1;
          allocation_buffer[saved_iteration_count_3] = scratch_buffer[4 * masked_bits_2];
          integer_sum_3 = iteration_count_4++;
          allocation_buffer[integer_sum_3] = scratch_buffer[4 * masked_bits_2 + 1];
          saved_iteration_count_4 = iteration_count_4;
          iteration_count = iteration_count_4 + 1;
          allocation_buffer[saved_iteration_count_4] = scratch_buffer[4 * masked_bits_2 + 2];
          if ( saved_comparison_result == 4 )
          {
            integer_sum_4 = iteration_count++;
            allocation_buffer[integer_sum_4] = -1;
          }
          running_total += 2;
        }
        while ( running_total < loaded_word_8 );
        cached_j = j;
      }
      if ( masked_bits )
      {
        if ( *((_QWORD *)a1 + 2) && (integer_difference_2 = a1[50] - a1[48], integer_difference_2 < masked_bits) )
        {
          *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
          (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(masked_bits - integer_difference_2));
        }
        else
        {
          *((_QWORD *)a1 + 24) += (unsigned int)masked_bits;
        }
        cached_j = j;
      }
      table_value_3 = a1[1];
      ++cached_j;
    }
  }
LABEL_195:
  if ( saved_comparison_result == 4 && !HIDWORD(packed_word_bits) )
  {
    scaled_index_5 = 4 * *a1 * table_value_3 - 1;
    for ( k = scaled_index_5; k >= 0; k -= 4 )
      allocation_buffer[k] = -1;
  }
  if ( table_value_6 > 0 )
  {
    table_value_4 = a1[1];
    iteration_count_8 = 0;
    if ( table_value_4 >= 0 && (table_value_4 & 0xFFFFFFFE) != 0 )
    {
      do
      {
        iteration_count_9 = 0;
        scaled_index_6 = saved_comparison_result * *a1 * (table_value_4 - iteration_count_8 - 1);
        cached_scaled_index = (unsigned int)scaled_index_6;
        text_cursor_3 = &allocation_buffer[scaled_index_6];
        if ( (int)(saved_comparison_result * *a1) > 0 )
        {
          scaled_index_7 = saved_comparison_result * iteration_count_8 * *a1 - cached_scaled_index;
          do
          {
            ++iteration_count_9;
            table_value_5 = text_cursor_3[scaled_index_7];
            text_cursor_3[scaled_index_7] = *text_cursor_3;
            *text_cursor_3++ = table_value_5;
          }
          while ( iteration_count_9 < (int)(saved_comparison_result * *a1) );
        }
        table_value_4 = a1[1];
        ++iteration_count_8;
      }
      while ( iteration_count_8 < table_value_4 >> 1 );
    }
  }
  if ( input_value && input_value != saved_comparison_result )
  {
    allocation_buffer = (char *)sub_14015D7E0(allocation_buffer, saved_comparison_result, input_value, *a1, a1[1]); /* 0x14015C525: mov rsi, rax */
    if ( !allocation_buffer )
      return 0; /* 0x14015C52A: je -> xor eax, eax */
  }
  {
    *unused_written_slot = *a1;
    *unused_written_slot_2 = a1[1];
    if ( table_value_7 )
      *table_value_7 = a1[2];
  }
  return (__int64)allocation_buffer; /* 0x14015C54F: mov rax, rsi */
}
#undef unused_frame_slot_0
#undef j
#undef saved_masked_bits
#undef integer_sum_5
#undef packed_word_bits
#undef callee_output_word_2
#undef call_result_4
#undef integer_sum_6
#undef cached_callee_output_word_3
#undef callee_output_word_3
#undef shifted_bits_7
#undef call_result_5
#undef saved_shifted_bits_2
#undef call_result_6
#undef shifted_bits_8
#undef call_result_7
#undef shifted_bits_9
#undef input_value
#undef table_value_6
#undef selection_code
#undef saved_allocated_buffer
#undef callee_output_word_4
#undef frame_word_at_148
#undef frame_word_at_152
#undef frame_word_at_156
#undef frame_word_at_160
#undef frame_word_at_164
#undef packed_word_bits_2
#undef frame_word_at_176
#undef unused_written_slot
#undef unused_written_slot_2
#undef table_value_7
#undef scratch_buffer
#undef unused_frame_slot_1232

//----- (000000014015C5E0) ----------------------------------------------------
__int64            sub_14015C5E0(__int64 a1, __int64 a2)
{
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char input_byte_2;
  int call_result;
  int call_result_2;
  int call_result_3;
  unsigned __int64 shifted_bits;
  __int64 selection_code;
  __int64 client_static_tls_result;
       char *literal_text;
  int call_result_4;
  int call_result_5;
  __int64 remaining_count;
  int call_result_6;
  int loaded_word;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_42;
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
  }
  input_byte = *loaded_record_pointer;
  loaded_record_pointer_2 = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
  if ( input_byte != 66 )
    goto LABEL_42;
  if ( (unsigned __int64)loaded_record_pointer_2 < *(_QWORD *)(a1 + 200) )
    goto LABEL_8;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_42:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not BMP");
    return 0;
  }
  stbi_refill_buffer(a1);
  loaded_record_pointer_2 = *(char **)(a1 + 192);
LABEL_8:
  input_byte_2 = *loaded_record_pointer_2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  if ( input_byte_2 != 77 )
    goto LABEL_42;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  call_result = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 4) = call_result + ((unsigned int)sub_1401605B0(a1) << 16);
  call_result_2 = sub_1401605B0(a1);
  call_result_3 = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 32) = 14;
  *(_QWORD *)(a2 + 20) = 0;
  shifted_bits = (unsigned int)(call_result_2 + (call_result_3 << 16));
  *(_QWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = shifted_bits;
  if ( *(int *)(a2 + 4) < 0 )
    goto LABEL_40;
  if ( (unsigned int)shifted_bits > 0x38 || (selection_code = 0x100010000001000LL, !_bittest64(&selection_code, shifted_bits)) )
  {
    if ( (_DWORD)shifted_bits != 108 && (_DWORD)shifted_bits != 124 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "unknown BMP";
LABEL_15:
      *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
      return 0;
    }
  }
  if ( (_DWORD)shifted_bits == 12 )
  {
    *(_DWORD *)a1 = sub_1401605B0(a1);
    call_result_4 = sub_1401605B0(a1);
  }
  else
  {
    *(_DWORD *)a1 = sub_1401606A0(a1);
    call_result_4 = sub_1401606A0(a1);
  }
  *(_DWORD *)(a1 + 4) = call_result_4;
  if ( (unsigned int)sub_1401605B0(a1) != 1 )
    goto LABEL_40;
  *(_DWORD *)a2 = sub_1401605B0(a1);
  if ( (_DWORD)shifted_bits == 12 )
    return 1;
  call_result_5 = sub_1401606A0(a1);
  if ( (unsigned int)(call_result_5 - 1) <= 1 )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "BMP RLE";
    goto LABEL_15;
  }
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  if ( (_DWORD)shifted_bits != 40 )
  {
    if ( (_DWORD)shifted_bits != 56 )
    {
      if ( (((_DWORD)shifted_bits - 108) & 0xFFFFFFEF) == 0 )
      {
        *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 20) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 24) = sub_1401606A0(a1);
        sub_1401606A0(a1);
        remaining_count = 12;
        do
        {
          sub_1401605B0(a1);
          sub_1401605B0(a1);
          --remaining_count;
        }
        while ( remaining_count );
        if ( (_DWORD)shifted_bits == 124 )
        {
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
        }
        return 1;
      }
LABEL_40:
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad BMP";
      goto LABEL_15;
    }
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
  }
  if ( ((*(_DWORD *)a2 - 16) & 0xFFFFFFEF) != 0 )
    return 1;
  if ( call_result_5 )
  {
    if ( call_result_5 == 3 )
    {
      *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
      call_result_6 = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 32) += 12;
      loaded_word = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 20) = call_result_6;
      if ( *(_DWORD *)(a2 + 12) != loaded_word || loaded_word != call_result_6 )
        return 1;
    }
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 == 32 )
  {
    *(_DWORD *)(a2 + 24) = -16777216;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 12) = 16711680;
    *(_DWORD *)(a2 + 16) = 65280;
    *(_DWORD *)(a2 + 20) = 255;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 31744;
    *(_DWORD *)(a2 + 16) = 992;
    *(_DWORD *)(a2 + 20) = 31;
  }
  return 1;
}

//----- (000000014015C9B0) ----------------------------------------------------
__int64            sub_14015C9B0(__int64 a1)
{
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char input_byte_2;
  int call_result;
  unsigned __int64 shifted_bits;
  __int64 selection_code;
  __int64 result;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_14;
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
  }
  input_byte = *loaded_record_pointer;
  loaded_record_pointer_2 = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
  if ( input_byte != 66 )
    goto LABEL_14;
  if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      goto LABEL_8;
    }
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
LABEL_8:
  input_byte_2 = *loaded_record_pointer_2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  if ( input_byte_2 != 77 )
    goto LABEL_14;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  call_result = sub_1401605B0(a1);
  shifted_bits = call_result + ((unsigned int)sub_1401605B0(a1) << 16);
  if ( (unsigned int)shifted_bits > 0x38 || (selection_code = 0x100010000001000LL, !_bittest64(&selection_code, shifted_bits)) )
  {
    if ( (_DWORD)shifted_bits != 108 && (_DWORD)shifted_bits != 124 )
      goto LABEL_14;
  }
  result = 1;
LABEL_15:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return result;
}

//----- (000000014015CAD0) ----------------------------------------------------
__int64            sub_14015CAD0(__int64 a1)
{
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char input_byte_2;
  int call_result;
  unsigned __int64 shifted_bits;
  __int64 selection_code;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
  }
  input_byte = *loaded_record_pointer;
  loaded_record_pointer_2 = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
  if ( input_byte == 66 )
  {
    if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
    }
    input_byte_2 = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    if ( input_byte_2 == 77 )
    {
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      call_result = sub_1401605B0(a1);
      shifted_bits = call_result + ((unsigned int)sub_1401605B0(a1) << 16);
      if ( (unsigned int)shifted_bits <= 0x38 )
      {
        selection_code = 0x100010000001000LL;
        if ( _bittest64(&selection_code, shifted_bits) )
          return 1;
      }
      if ( (_DWORD)shifted_bits == 108 || (_DWORD)shifted_bits == 124 )
        return 1;
    }
  }
  return 0;
}

//----- (000000014015CBD0) ----------------------------------------------------
__int16            sub_14015CBD0(_WORD *a1, unsigned __int8 *a2)
{
  int iteration_count;
  unsigned __int8 *buffer_cursor;
  __int64 packed_word_bits;
  int table_value;
  int shifted_bits;
  int table_value_2;

  iteration_count = 0;
  buffer_cursor = a2;
  do
  {
    packed_word_bits = *buffer_cursor;
    *a1 = 0;
    if ( (_BYTE)packed_word_bits != 0xFF )
    {
      table_value = a2[packed_word_bits + 1280];
      shifted_bits = a2[packed_word_bits + 1024] >> 4;
      table_value_2 = a2[packed_word_bits + 1024] & 0xF;
      if ( table_value_2 )
      {
        LOWORD(packed_word_bits) = table_value + table_value_2;
        if ( (unsigned int)(table_value + table_value_2) <= 9 )
        {
          LODWORD(packed_word_bits) = ((iteration_count << table_value) & 0x1FF) >> (9 - table_value_2);
          if ( (int)packed_word_bits < 1 << (table_value_2 - 1) )
            LODWORD(packed_word_bits) = 1 - (1 << table_value_2) + packed_word_bits;
          if ( (unsigned int)(packed_word_bits + 128) <= 0xFF )
          {
            LOWORD(packed_word_bits) = table_value + table_value_2 + 16 * (shifted_bits + 16 * packed_word_bits);
            *a1 = packed_word_bits;
          }
        }
      }
    }
    ++iteration_count;
    ++buffer_cursor;
    ++a1;
  }
  while ( iteration_count < 512 );
  return packed_word_bits;
}

//----- (000000014015CCB0) ----------------------------------------------------
__int64            sub_14015CCB0(_WORD *a1, int *a2)
{
  int fill_byte;
  int iteration_count;
  int iteration_count_2;
  __int64 iteration_count_3;
  int iteration_count_4;
  char *text_cursor;
  __int64 saved_iteration_count;
  unsigned int *buffer_cursor;
  int element_index;
  unsigned int iteration_count_5;
  int iteration_count_6;
  __int64 element_index_2;
  int i;
  unsigned __int8 *buffer_cursor_2;
  _WORD *buffer_cursor_3;
  unsigned int saved_iteration_count_2;
  unsigned int shifted_bits;
  unsigned __int8 *buffer_cursor_4;
  unsigned __int16 *buffer_cursor_5;
  unsigned int loaded_word;
  char integer_difference;
  int byte_count;

  fill_byte = 0;
  iteration_count = 0;
  iteration_count_2 = 0;
  iteration_count_3 = 0;
  do
  {
    iteration_count_4 = 0;
    if ( *a2 > 0 )
    {
      text_cursor = (char *)a1 + iteration_count_3 + 1280;
      do
      {
        *text_cursor++ = iteration_count_2 + 1;
        ++iteration_count;
        ++iteration_count_3;
        ++iteration_count_4;
      }
      while ( iteration_count_4 < *a2 );
    }
    ++iteration_count_2;
    ++a2;
  }
  while ( iteration_count_2 < 16 );
  saved_iteration_count = iteration_count;
  buffer_cursor = (unsigned int *)(a1 + 772);
  element_index = 1;
  iteration_count_5 = 0;
  iteration_count_6 = 0;
  element_index_2 = 0;
  *((_BYTE *)a1 + saved_iteration_count + 1280) = 0;
  for ( i = 15; i >= 0; --i )
  {
    buffer_cursor_2 = (unsigned __int8 *)a1 + element_index_2 + 1280;
    buffer_cursor[18] = iteration_count_6 - iteration_count_5;
    if ( *buffer_cursor_2 == element_index )
    {
      buffer_cursor_3 = &a1[element_index_2 + 256];
      do
      {
        *buffer_cursor_3 = iteration_count_5;
        ++buffer_cursor_2;
        ++buffer_cursor_3;
        saved_iteration_count_2 = iteration_count_5;
        ++iteration_count_6;
        ++element_index_2;
        ++iteration_count_5;
      }
      while ( *buffer_cursor_2 == element_index );
      if ( saved_iteration_count_2 >= 1 << element_index )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad code lengths");
        return 0;
      }
    }
    shifted_bits = iteration_count_5 << i;
    iteration_count_5 *= 2;
    *buffer_cursor = shifted_bits;
    ++element_index;
    ++buffer_cursor;
  }
  *(_DWORD *)&a1[2 * element_index + 770] = -1;
  crt_memset((void *)(uintptr_t)(a1), 0xFFu, 0x200u);
  if ( iteration_count_6 > 0 )
  {
    buffer_cursor_4 = (unsigned __int8 *)(a1 + 640);
    buffer_cursor_5 = a1 + 256;
    do
    {
      loaded_word = *buffer_cursor_4;
      if ( loaded_word <= 9 )
      {
        integer_difference = 9 - loaded_word;
        byte_count = 1 << (9 - loaded_word);
        if ( byte_count > 0 )
          crt_memset((void *)(uintptr_t)((_WORD *)((char *)a1 + (*buffer_cursor_5 << integer_difference))), fill_byte, byte_count);
      }
      ++fill_byte;
      ++buffer_cursor_5;
      ++buffer_cursor_4;
    }
    while ( fill_byte < iteration_count_6 );
  }
  return 1;
}

//----- (000000014015CE80) ----------------------------------------------------
__int64            sub_14015CE80(__int64 a1)
{
  __int64 element_index;
  char *loaded_record_pointer;
  unsigned char input_byte;
  char *loaded_record_pointer_2;

  element_index = 0;
  while ( 1 )
  {
    loaded_record_pointer = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_2 = *(char **)(a1 + 192);
        input_byte = *loaded_record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      }
      else
      {
        input_byte = 0;
      }
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    if ( input_byte != byte_14026E760[element_index] )
      break;
    if ( ++element_index >= 8 )
      return 1;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad png sig");
  return 0;
}

//----- (000000014015CF70) ----------------------------------------------------
__int64            sub_14015CF70(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  unsigned int loaded_word_3;
  int masked_bits;
  unsigned int shifted_bits;
  int integer_sum;
  int loaded_word_4;
  unsigned int shifted_bits_2;
  int masked_bits_2;
  unsigned int shifted_bits_3;
  int record_byte_offset;
  int lookup_index;
  __int64 masked_bits_3;
  __int64 element_index;
  int saved_record_byte_offset;
  unsigned int shifted_bits_4;
  unsigned int saved_shifted_bits;
  char saved_record_byte_offset_2;
  unsigned __int64 loaded_word_5;
  unsigned __int8 *loaded_word_6;
  unsigned __int8 loaded_word_7;
  __int64 table_value;
  int cached_integer_sum;
  int lookup_index_2;
  int loaded_word_8;
  unsigned __int64 loaded_word_9;
  unsigned int option_flags;
  int record_byte_offset_2;
  unsigned __int8 *loaded_word_10;
  unsigned __int8 loaded_word_11;
  unsigned int masked_bits_4;
  unsigned int shifted_bits_5;
  int masked_bits_5;
  int byte_count;
  unsigned __int8 fill_byte;
  int loaded_word_12;
  unsigned int option_flags_2;
  int record_byte_offset_3;
  unsigned __int64 loaded_word_13;
  unsigned __int8 *loaded_word_14;
  unsigned __int8 loaded_word_15;
  int masked_bits_6;
  int loaded_word_16;
  int masked_bits_7;
  int integer_difference;
  int loaded_word_17;
  int masked_bits_8;
  int integer_sum_2;
  __int64 unused_local;
  int integer_sum_3;
  int integer_sum_4;
  _WORD scratch_buffer[1016];
  unsigned char destination_buffer[19];
  __int16 unused_local_2;
  char unused_local_3;
  unsigned __int8 callee_output_word[464];
  __int64 unused_local_4;

  loaded_word = *(_DWORD *)(a1 + 16);
  if ( loaded_word < 5 )
  {
    sub_140160350(a1);
    loaded_word = *(_DWORD *)(a1 + 16);
  }
  loaded_word_2 = loaded_word - 5;
  loaded_word_3 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = loaded_word_2;
  masked_bits = loaded_word_3 & 0x1F;
  shifted_bits = loaded_word_3 >> 5;
  *(_DWORD *)(a1 + 20) = shifted_bits;
  integer_sum = masked_bits + 257;
  integer_sum_4 = masked_bits + 257;
  if ( loaded_word_2 < 5 )
  {
    sub_140160350(a1);
    loaded_word_2 = *(_DWORD *)(a1 + 16);
    shifted_bits = *(_DWORD *)(a1 + 20);
  }
  loaded_word_4 = loaded_word_2 - 5;
  shifted_bits_2 = shifted_bits >> 5;
  masked_bits_2 = (shifted_bits & 0x1F) + 1;
  *(_DWORD *)(a1 + 20) = shifted_bits_2;
  *(_DWORD *)(a1 + 16) = loaded_word_2 - 5;
  if ( loaded_word_2 - 5 < 4 )
  {
    sub_140160350(a1);
    shifted_bits_2 = *(_DWORD *)(a1 + 20);
    loaded_word_4 = *(_DWORD *)(a1 + 16);
  }
  shifted_bits_3 = shifted_bits_2 >> 4;
  record_byte_offset = loaded_word_4 - 4;
  *(_DWORD *)(a1 + 20) = shifted_bits_2 >> 4;
  *(_DWORD *)(a1 + 16) = record_byte_offset;
  lookup_index = 0;

  masked_bits_3 = (shifted_bits_2 & 0xF) + 4;
  integer_sum_3 = masked_bits_2 + integer_sum;
  memset(destination_buffer,0,sizeof(destination_buffer));
  element_index = 0;
  saved_record_byte_offset = record_byte_offset;
  do
  {
    shifted_bits_4 = shifted_bits_3;
    if ( record_byte_offset < 3 )
    {
      saved_shifted_bits = shifted_bits_3;
      saved_record_byte_offset_2 = record_byte_offset;
      if ( shifted_bits_3 >= 1 << record_byte_offset )
      {
LABEL_16:
        shifted_bits_4 = shifted_bits_3;
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        loaded_word_5 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          loaded_word_6 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 < loaded_word_5 )
          {
            loaded_word_7 = *loaded_word_6;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(loaded_word_6 + 1);
          }
          else
          {
            loaded_word_7 = 0;
          }
          saved_record_byte_offset = record_byte_offset + 8;
          *(_DWORD *)(a1 + 16) = record_byte_offset + 8;
          shifted_bits_4 = saved_shifted_bits | (loaded_word_7 << saved_record_byte_offset_2);
          *(_DWORD *)(a1 + 20) = shifted_bits_4;
          if ( record_byte_offset + 8 > 24 )
            break;
          saved_record_byte_offset_2 = record_byte_offset + 8;
          shifted_bits_3 = shifted_bits_4;
          record_byte_offset += 8;
          saved_shifted_bits = shifted_bits_4;
          if ( shifted_bits_4 >= 1 << saved_record_byte_offset )
            goto LABEL_16;
        }
      }
    }
    table_value = byte_14026FED0[element_index];
    saved_record_byte_offset -= 3;
    *(_DWORD *)(a1 + 16) = saved_record_byte_offset;
    shifted_bits_3 = shifted_bits_4 >> 3;
    ++element_index;
    *(_DWORD *)(a1 + 20) = shifted_bits_4 >> 3;
    *((_BYTE *)&destination_buffer + table_value) = shifted_bits_4 & 7;
    record_byte_offset = saved_record_byte_offset;
  }
  while ( element_index < masked_bits_3 );
  cached_integer_sum = integer_sum_3;
  lookup_index_2 = integer_sum_4;
  if ( (unsigned int)sub_14016F730((__int64)scratch_buffer, (unsigned __int8 *)&destination_buffer, 19) )
  {
    do
    {
      loaded_word_8 = *(_DWORD *)(a1 + 16);
      if ( loaded_word_8 < 16 )
      {
        loaded_word_9 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 >= loaded_word_9 )
          goto LABEL_60;
        option_flags = *(_DWORD *)(a1 + 20);
        record_byte_offset_2 = *(_DWORD *)(a1 + 16);
        if ( option_flags >= 1 << loaded_word_8 )
        {
LABEL_27:
          *(_QWORD *)a1 = loaded_word_9;
        }
        else
        {
          while ( 1 )
          {
            loaded_word_10 = *(unsigned __int8 **)a1;
            if ( *(_QWORD *)a1 < loaded_word_9 )
            {
              loaded_word_11 = *loaded_word_10;
              *(_QWORD *)a1 = (uint64)(uintptr_t)(loaded_word_10 + 1);
            }
            else
            {
              loaded_word_11 = 0;
            }
            loaded_word_8 = record_byte_offset_2 + 8;
            *(_DWORD *)(a1 + 16) = record_byte_offset_2 + 8;
            option_flags |= loaded_word_11 << record_byte_offset_2;
            *(_DWORD *)(a1 + 20) = option_flags;
            if ( record_byte_offset_2 + 8 > 24 )
              break;
            record_byte_offset_2 += 8;
            if ( option_flags >= 1 << loaded_word_8 )
              goto LABEL_27;
          }
        }
      }
      masked_bits_4 = (unsigned __int16)scratch_buffer[*(_DWORD *)(a1 + 20) & 0x1FF];
      if ( scratch_buffer[*(_DWORD *)(a1 + 20) & 0x1FF] )
      {
        shifted_bits_5 = masked_bits_4 >> 9;
        *(_DWORD *)(a1 + 20) >>= masked_bits_4 >> 9;
        masked_bits_5 = masked_bits_4 & 0x1FF;
        *(_DWORD *)(a1 + 16) = loaded_word_8 - shifted_bits_5;
      }
      else
      {
        masked_bits_5 = sub_14016FB90(a1, (__int64)scratch_buffer);
      }
      if ( (unsigned int)masked_bits_5 > 0x12 )
        goto LABEL_60;
      if ( masked_bits_5 >= 16 )
      {
        fill_byte = 0;
        if ( masked_bits_5 == 16 )
        {
          loaded_word_12 = *(_DWORD *)(a1 + 16);
          if ( loaded_word_12 < 2 )
          {
            option_flags_2 = *(_DWORD *)(a1 + 20);
            record_byte_offset_3 = *(_DWORD *)(a1 + 16);
            if ( option_flags_2 >= 1 << loaded_word_12 )
            {
LABEL_43:
              *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              loaded_word_13 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                loaded_word_14 = *(unsigned __int8 **)a1;
                if ( *(_QWORD *)a1 < loaded_word_13 )
                {
                  loaded_word_15 = *loaded_word_14;
                  *(_QWORD *)a1 = (uint64)(uintptr_t)(loaded_word_14 + 1);
                }
                else
                {
                  loaded_word_15 = 0;
                }
                loaded_word_12 = record_byte_offset_3 + 8;
                *(_DWORD *)(a1 + 16) = record_byte_offset_3 + 8;
                option_flags_2 |= loaded_word_15 << record_byte_offset_3;
                *(_DWORD *)(a1 + 20) = option_flags_2;
                if ( record_byte_offset_3 + 8 > 24 )
                  break;
                record_byte_offset_3 += 8;
                if ( option_flags_2 >= 1 << loaded_word_12 )
                  goto LABEL_43;
              }
            }
          }
          masked_bits_6 = *(_DWORD *)(a1 + 20) & 3;
          *(_DWORD *)(a1 + 20) >>= 2;
          byte_count = masked_bits_6 + 3;
          *(_DWORD *)(a1 + 16) = loaded_word_12 - 2;
          if ( !lookup_index )
            goto LABEL_60;
          fill_byte = callee_output_word[lookup_index - 1];
        }
        else
        {
          if ( masked_bits_5 == 17 )
          {
            loaded_word_16 = *(_DWORD *)(a1 + 16);
            if ( loaded_word_16 < 3 )
            {
              sub_140160350(a1);
              loaded_word_16 = *(_DWORD *)(a1 + 16);
            }
            masked_bits_7 = *(_DWORD *)(a1 + 20) & 7;
            *(_DWORD *)(a1 + 20) >>= 3;
            byte_count = masked_bits_7 + 3;
            integer_difference = loaded_word_16 - 3;
          }
          else
          {
            loaded_word_17 = *(_DWORD *)(a1 + 16);
            if ( loaded_word_17 < 7 )
            {
              sub_140160350(a1);
              loaded_word_17 = *(_DWORD *)(a1 + 16);
            }
            masked_bits_8 = *(_DWORD *)(a1 + 20) & 0x7F;
            *(_DWORD *)(a1 + 20) >>= 7;
            byte_count = masked_bits_8 + 11;
            integer_difference = loaded_word_17 - 7;
          }
          *(_DWORD *)(a1 + 16) = integer_difference;
        }
        if ( cached_integer_sum - lookup_index < byte_count )
          goto LABEL_60;
        crt_memset((void *)(uintptr_t)(&callee_output_word[lookup_index]), fill_byte, (unsigned int)byte_count);
      }
      else
      {
        byte_count = 1;
        callee_output_word[lookup_index] = masked_bits_5;
      }
      integer_sum_2 = byte_count + lookup_index;
      lookup_index = integer_sum_2;
    }
    while ( integer_sum_2 < cached_integer_sum );
    if ( integer_sum_2 != cached_integer_sum )
    {
LABEL_60:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    if (!(unsigned int)sub_14016F730(a1 + 52, callee_output_word, lookup_index_2)) return 0;
    if (!(unsigned int)sub_14016F730(a1 + 2072, &callee_output_word[lookup_index_2], masked_bits_2)) return 0;
    return 1;
  }
  return 0;
}

// 14015D05E: conditional instruction was optimized away because eax.4<10u
// 14015D307: conditional instruction was optimized away because eax.4==12

//----- (000000014015D400) ----------------------------------------------------
__int64            sub_14015D400(_QWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *running_total;
  unsigned int loaded_word;
  _BYTE *record_byte_offset;
  __int64 remaining_count;
  __int64 remaining_count_2;
  char integer_difference;
  bool comparison_result;

  running_total = (_BYTE *)a1[3];
  loaded_word = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( loaded_word )
    {
      remaining_count_2 = loaded_word;
      do
      {
        integer_difference = -1;
        comparison_result = *running_total == *a2;
        running_total += 2;
        if ( comparison_result )
          integer_difference = 0;
        *(running_total - 1) = integer_difference;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
  }
  else
  {
    if ( a3 != 4 )
      crt_assert(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12C3u);
    if ( loaded_word )
    {
      record_byte_offset = running_total + 2;
      remaining_count = loaded_word;
      do
      {
        if ( *(record_byte_offset - 2) == *a2 && *(record_byte_offset - 1) == a2[1] && *record_byte_offset == a2[2] )
          record_byte_offset[1] = 0;
        record_byte_offset += 4;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  return 1;
}

//----- (000000014015D4C0) ----------------------------------------------------
__int64            sub_14015D4C0(_QWORD *a1, _WORD *a2, int a3)
{
  _WORD *running_total;
  unsigned int loaded_word;
  _WORD *record_byte_offset;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int16 integer_difference;
  bool comparison_result;

  running_total = (_WORD *)a1[3];
  loaded_word = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( loaded_word )
    {
      remaining_count_2 = loaded_word;
      do
      {
        integer_difference = -1;
        comparison_result = *running_total == *a2;
        running_total += 2;
        if ( comparison_result )
          integer_difference = 0;
        *(running_total - 1) = integer_difference;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
  }
  else
  {
    if ( a3 != 4 )
      crt_assert(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12DCu);
    if ( loaded_word )
    {
      record_byte_offset = running_total + 2;
      remaining_count = loaded_word;
      do
      {
        if ( *(record_byte_offset - 2) == *a2 && *(record_byte_offset - 1) == a2[1] && *record_byte_offset == a2[2] )
          record_byte_offset[1] = 0;
        record_byte_offset += 4;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  return 1;
}

//----- (000000014015D5D0) ----------------------------------------------------
__int64            sub_14015D5D0(char *Block, int a2, int a3, int a4)
{
  int allocation_size;
  __int64 saved_allocation_size;
  __int64 allocated_buffer;
  int record_byte_offset;
  int masked_bits;
  __int64 record_byte_offset_2;
  char *record_byte_offset_3;
  __m128i converted_vector;
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __int64 i;

  allocation_size = a4 * a3 * a2;
  saved_allocation_size = allocation_size;
  allocated_buffer = sr_path_malloc(allocation_size);
  if ( allocated_buffer )
  {
    record_byte_offset = 0;
    if ( allocation_size >= 32 )
    {
      masked_bits = allocation_size - (allocation_size & 0x1F);
      record_byte_offset_2 = allocated_buffer + 16;
      record_byte_offset_3 = Block + 32;
      converted_vector = _mm_cvtsi32_si128(8u);
      do
      {
        loaded_vector = _mm_loadu_si128((     __m128i *)record_byte_offset_3 - 2);
        record_byte_offset_2 += 32;
        record_byte_offset += 32;
        loaded_vector_2 = _mm_loadu_si128((     __m128i *)record_byte_offset_3 - 1);
        record_byte_offset_3 += 64;
        vector_result = _mm_and_si128(_mm_srl_epi16(loaded_vector, converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        vector_result_2 = _mm_and_si128(_mm_srl_epi16(loaded_vector_2, converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(record_byte_offset_2 - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result, vector_result), u64)[0];
        *(_QWORD *)(record_byte_offset_2 - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_2, vector_result_2), u64)[0];
        vector_result_3 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)record_byte_offset_3 - 4), converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        vector_result_4 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)record_byte_offset_3 - 3), converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(record_byte_offset_2 - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_3, vector_result_3), u64)[0];
        *(_QWORD *)(record_byte_offset_2 - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_4, vector_result_4), u64)[0];
      }
      while ( -16 - allocated_buffer + record_byte_offset_2 < masked_bits );
    }
    for ( i = record_byte_offset; i < saved_allocation_size; ++i )
      *(_BYTE *)(i + allocated_buffer) = Block[2 * i + 1];
    free(Block);
    return allocated_buffer;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

// 14015D648: conditional instruction was optimized away because ebx.4>=20
// 14015D643: mask 0x8000001F is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014015D730) ----------------------------------------------------
__int64            sub_14015D730(unsigned __int8 *Block, int a2, int a3, int a4)
{
  int scaled_index;
  __int64 allocated_buffer;
  __int64 i;

  scaled_index = a4 * a3 * a2;
  allocated_buffer = sr_path_malloc(2 * scaled_index);
  if ( allocated_buffer )
  {
    if ( scaled_index > 0 )
    {
      for ( i = 0; i < scaled_index; ++i )
        *(_WORD *)(allocated_buffer + 2 * i) = 257 * Block[i];
    }
    free(Block);
    return allocated_buffer;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

//----- (000000014015D7E0) ----------------------------------------------------
char *sub_14015D7E0(char *Block,int source_channels,int channels,int width,int height)
{
  extern unsigned char *image_convert_channels(unsigned char *pixels, int source_channels, int channels,
                                               unsigned int width, unsigned int height, const char **failure);
  /* src/engine/image_convert.c; the failure reason is the decoder's thread-local one. */
  return (char *)image_convert_channels((unsigned char *)Block, source_channels, channels, width, height,
      (const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*g_144CBE4C4)+16));
}

//----- (000000014015DD00) ----------------------------------------------------
char *           sub_14015DD00(char *Block, int a2, int a3, int a4, int a5)
{
  char *allocated_buffer;
  int element_index;
  char *record_byte_offset;
  char *record_byte_offset_2;
  int i;
  int j;
  __int16 loaded_word;
  int k;
  __int16 loaded_word_2;
  int m;
  int n;
  __int16 loaded_word_3;
  int ii;
  __int16 loaded_word_4;
  int mm;
  __int16 loaded_word_5;
  int jj;
  int loaded_word_6;
  int loaded_word_7;
  int kk;
  int loaded_word_8;
  int loaded_word_9;
  int scaled_index;
  int loaded_word_10;
  int nn;
  int loaded_word_11;
  int loaded_word_12;
  int i1;
  int loaded_word_13;
  int loaded_word_14;
  int i2;
  __int16 loaded_word_15;

  if ( a3 == a2 )
    return Block;
  if ( (unsigned int)(a3 - 1) > 3 )
    crt_assert(
      (char *)L"req_comp >= 1 && req_comp <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x6DDu);
  allocated_buffer = (char *)sr_path_malloc((unsigned int)(2 * a5 * a4 * a3));
  if ( allocated_buffer )
  {
    element_index = 0;
    if ( a5 > 0 )
    {
      while ( 2 )
      {
        record_byte_offset = &Block[2 * a4 * a2 * element_index];
        record_byte_offset_2 = &allocated_buffer[2 * a4 * a3 * element_index];
        switch ( a3 + 8 * a2 - 10 )
        {
          case 0:
            for ( i = a4 - 1; i >= 0; record_byte_offset_2 += 4 )
            {
              --i;
              *(_WORD *)record_byte_offset_2 = *(_WORD *)record_byte_offset;
              record_byte_offset += 2;
              *((_WORD *)record_byte_offset_2 + 1) = -1;
            }
            goto LABEL_44;
          case 1:
            for ( j = a4 - 1; j >= 0; record_byte_offset_2 += 6 )
            {
              --j;
              loaded_word = *(_WORD *)record_byte_offset;
              *((_WORD *)record_byte_offset_2 + 2) = *(_WORD *)record_byte_offset;
              record_byte_offset += 2;
              *((_WORD *)record_byte_offset_2 + 1) = loaded_word;
              *(_WORD *)record_byte_offset_2 = loaded_word;
            }
            goto LABEL_44;
          case 2:
            for ( k = a4 - 1; k >= 0; record_byte_offset_2 += 8 )
            {
              --k;
              loaded_word_2 = *(_WORD *)record_byte_offset;
              *((_WORD *)record_byte_offset_2 + 2) = *(_WORD *)record_byte_offset;
              record_byte_offset += 2;
              *((_WORD *)record_byte_offset_2 + 1) = loaded_word_2;
              *(_WORD *)record_byte_offset_2 = loaded_word_2;
              *((_WORD *)record_byte_offset_2 + 3) = -1;
            }
            goto LABEL_44;
          case 7:
            for ( m = a4 - 1; m >= 0; record_byte_offset += 4 )
            {
              --m;
              *(_WORD *)record_byte_offset_2 = *(_WORD *)record_byte_offset;
              record_byte_offset_2 += 2;
            }
            goto LABEL_44;
          case 9:
            for ( n = a4 - 1; n >= 0; record_byte_offset_2 += 6 )
            {
              --n;
              loaded_word_3 = *(_WORD *)record_byte_offset;
              *((_WORD *)record_byte_offset_2 + 2) = *(_WORD *)record_byte_offset;
              record_byte_offset += 4;
              *((_WORD *)record_byte_offset_2 + 1) = loaded_word_3;
              *(_WORD *)record_byte_offset_2 = loaded_word_3;
            }
            goto LABEL_44;
          case 10:
            for ( ii = a4 - 1; ii >= 0; *((_WORD *)record_byte_offset_2 - 1) = *((_WORD *)record_byte_offset - 1) )
            {
              --ii;
              loaded_word_4 = *(_WORD *)record_byte_offset;
              *((_WORD *)record_byte_offset_2 + 2) = *(_WORD *)record_byte_offset;
              record_byte_offset += 4;
              *((_WORD *)record_byte_offset_2 + 1) = loaded_word_4;
              *(_WORD *)record_byte_offset_2 = loaded_word_4;
              record_byte_offset_2 += 8;
            }
            goto LABEL_44;
          case 15:
            for ( jj = a4 - 1;
                  jj >= 0;
                  *((_WORD *)record_byte_offset_2 - 1) = (77 * (unsigned int)*((unsigned __int16 *)record_byte_offset - 3) + 29 * loaded_word_7 + loaded_word_6) >> 8 )
            {
              record_byte_offset_2 += 2;
              loaded_word_6 = 150 * *((unsigned __int16 *)record_byte_offset + 1);
              loaded_word_7 = *((unsigned __int16 *)record_byte_offset + 2);
              record_byte_offset += 6;
              --jj;
            }
            goto LABEL_44;
          case 16:
            for ( kk = a4 - 1; kk >= 0; *((_WORD *)record_byte_offset_2 - 2) = (unsigned int)(77 * loaded_word_10 + scaled_index + loaded_word_8) >> 8 )
            {
              record_byte_offset_2 += 4;
              loaded_word_8 = 150 * *((unsigned __int16 *)record_byte_offset + 1);
              loaded_word_9 = *((unsigned __int16 *)record_byte_offset + 2);
              record_byte_offset += 6;
              scaled_index = 29 * loaded_word_9;
              loaded_word_10 = *((unsigned __int16 *)record_byte_offset - 3);
              *((_WORD *)record_byte_offset_2 - 1) = -1;
              --kk;
            }
            goto LABEL_44;
          case 18:
            for ( mm = a4 - 1; mm >= 0; *((_WORD *)record_byte_offset_2 - 1) = -1 )
            {
              --mm;
              *(_WORD *)record_byte_offset_2 = *(_WORD *)record_byte_offset;
              record_byte_offset_2 += 8;
              loaded_word_5 = *((_WORD *)record_byte_offset + 1);
              record_byte_offset += 6;
              *((_WORD *)record_byte_offset_2 - 3) = loaded_word_5;
              *((_WORD *)record_byte_offset_2 - 2) = *((_WORD *)record_byte_offset - 1);
            }
            goto LABEL_44;
          case 23:
            for ( nn = a4 - 1;
                  nn >= 0;
                  *((_WORD *)record_byte_offset_2 - 1) = (77 * (unsigned int)*((unsigned __int16 *)record_byte_offset - 4) + 29 * loaded_word_12 + loaded_word_11) >> 8 )
            {
              record_byte_offset_2 += 2;
              loaded_word_11 = 150 * *((unsigned __int16 *)record_byte_offset + 1);
              loaded_word_12 = *((unsigned __int16 *)record_byte_offset + 2);
              record_byte_offset += 8;
              --nn;
            }
            goto LABEL_44;
          case 24:
            for ( i1 = a4 - 1; i1 >= 0; *((_WORD *)record_byte_offset_2 - 1) = *((_WORD *)record_byte_offset - 1) )
            {
              record_byte_offset_2 += 4;
              loaded_word_13 = 150 * *((unsigned __int16 *)record_byte_offset + 1);
              loaded_word_14 = *((unsigned __int16 *)record_byte_offset + 2);
              record_byte_offset += 8;
              --i1;
              *((_WORD *)record_byte_offset_2 - 2) = (77 * (unsigned int)*((unsigned __int16 *)record_byte_offset - 4) + 29 * loaded_word_14 + loaded_word_13) >> 8;
            }
            goto LABEL_44;
          case 25:
            for ( i2 = a4 - 1; i2 >= 0; *((_WORD *)record_byte_offset_2 - 1) = *((_WORD *)record_byte_offset - 2) )
            {
              --i2;
              *(_WORD *)record_byte_offset_2 = *(_WORD *)record_byte_offset;
              record_byte_offset_2 += 6;
              loaded_word_15 = *((_WORD *)record_byte_offset + 1);
              record_byte_offset += 8;
              *((_WORD *)record_byte_offset_2 - 2) = loaded_word_15;
            }
LABEL_44:
            if ( ++element_index >= a5 )
              break;
            continue;
          default:
            crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x6FAu);
            free(Block);
            free(allocated_buffer);
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported");
            return nullptr;
        }
        break;
      }
    }
    free(Block);
    return allocated_buffer;
  }
  else
  {
    free(Block);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return nullptr;
  }
}

//----- (000000014015E240)
__int64 sub_14015E240(void) { return sr_client_cpu_leaf1_edx(); }

//----- (000000014015E260) ----------------------------------------------------
__int64            sub_14015E260(__int64 a1, unsigned __int8 *a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *state_address;
  int *loaded_word;
  unsigned int saved_remaining_amount;
  int byte_count;
  int table_value;
  int loaded_word_2;
  int scaled_index;
  void *allocated_buffer;
  int iteration_count;
  __int64 record_byte_offset;
  int *loaded_word_3;
  unsigned int loaded_word_4;
  unsigned __int32 loaded_word_5;
  int scaled_index_2;
  unsigned int integer_quotient;
  __int64 remaining_count;
  unsigned int loaded_word_6;
  int loaded_word_7;
  int cached_integer_quotient;
  unsigned int shifted_bits;
  int iteration_count_2;
  int running_total;
  int scaled_index_3;
  int running_total_2;
  int scaled_index_4;
  int running_total_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015E260[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14015E260 + 0)) /* [rsp+0h] */
#define remaining_amount (*(unsigned int (*))(void *)(sr_frame_14015E260 + 64)) /* [rsp+40h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_14015E260 + 68)) /* [rsp+44h] */
#define saved_running_total (*(int (*))(void *)(sr_frame_14015E260 + 72)) /* [rsp+48h] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_14015E260 + 76)) /* [rsp+4Ch] */
#define Block (*(void * (*))(void *)(sr_frame_14015E260 + 80)) /* [rsp+50h] */
#define input_value (*(int (*))(void *)(sr_frame_14015E260 + 88)) /* [rsp+58h] */
#define saved_loaded_word (*(unsigned int (*))(void *)(sr_frame_14015E260 + 92)) /* [rsp+5Ch] */
#define loaded_word_8 (*(int (*))(void *)(sr_frame_14015E260 + 96)) /* [rsp+60h] */
#define saved_loaded_word_2 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 100)) /* [rsp+64h] */
#define loaded_word_9 (*(int (*))(void *)(sr_frame_14015E260 + 104)) /* [rsp+68h] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_14015E260 + 108)) /* [rsp+6Ch] */
#define cached_integer_quotient_2 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 112)) /* [rsp+70h] */
#define integer_quotient_2 (*(int (*))(void *)(sr_frame_14015E260 + 116)) /* [rsp+74h] */
#define scaled_index_5 (*(int (*))(void *)(sr_frame_14015E260 + 120)) /* [rsp+78h] */
#define saved_shifted_bits (*(unsigned int (*))(void *)(sr_frame_14015E260 + 124)) /* [rsp+7Ch] */
#define saved_state_address (*(unsigned __int8 * (*))(void *)(sr_frame_14015E260 + 128)) /* [rsp+80h] */
#define saved_record_byte_offset (*(__int64 (*))(void *)(sr_frame_14015E260 + 136)) /* [rsp+88h] */
#define loaded_vector (*(__m128i (*))(void *)(sr_frame_14015E260 + 144)) /* [rsp+90h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14015E260 + 160)) /* [rsp+A0h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14015E260 + 164)) /* [rsp+A4h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14015E260 + 168)) /* [rsp+A8h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_14015E260 + 176)) /* [rsp+B0h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14015E260 + 192)) /* [rsp+C0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_14015E260 + 196)) /* [rsp+C4h] */
#define loaded_vector_2 (*(__m128i (*))(void *)(sr_frame_14015E260 + 208)) /* [rsp+D0h] */
#define unused_written_slot_6 (*(int (*))(void *)(sr_frame_14015E260 + 224)) /* [rsp+E0h] */
#define unused_written_slot_7 (*(int (*))(void *)(sr_frame_14015E260 + 228)) /* [rsp+E4h] */
#define unused_written_slot_8 (*(int (*))(void *)(sr_frame_14015E260 + 232)) /* [rsp+E8h] */
#define loaded_vector_3 (*(__m128i (*))(void *)(sr_frame_14015E260 + 240)) /* [rsp+F0h] */
#define unused_written_slot_9 (*(__int64 (*))(void *)(sr_frame_14015E260 + 256)) /* [rsp+100h] */
#define unused_written_slot_10 (*(int (*))(void *)(sr_frame_14015E260 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_14015E260 + 272)) /* [rsp+110h] */

  saved_state_address = a2;
  input_value = a4;
  state_address = a2;
  remaining_amount = a3;
  loaded_word = *(int **)a1;
  saved_remaining_amount = a3;
  byte_count = a4 * ((a5 == 16) + 1);
  if ( a7 )
  {
    table_value = loaded_word[1];
    loaded_word_2 = *loaded_word;
    if ( loaded_word_2 < 0
      || table_value < 0
      || table_value && loaded_word_2 > 0x7FFFFFFF / table_value
      || (scaled_index = table_value * loaded_word_2, scaled_index < 0)
      || byte_count < 0
      || byte_count && scaled_index > 0x7FFFFFFF / byte_count )
    {
      Block = nullptr;
    }
    else
    {
      allocated_buffer = (void *)sr_path_malloc(byte_count * scaled_index);
      saved_remaining_amount = remaining_amount;
      Block = allocated_buffer;
    }
    iteration_count = 0;
    saved_iteration_count_2 = 0;
    record_byte_offset = 0;
    saved_record_byte_offset = 0;
    while ( 1 )
    {
      loaded_word_3 = *(int **)a1;
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F00);
      unused_written_slot = 2;
      loaded_vector_3 = _mm_load_si128((     __m128i *)&xmmword_140278E00);
      unused_written_slot_2 = 2;
      loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140278F70);
      unused_written_slot_3 = 1;
      loaded_word_4 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, loaded_vector, u32) + record_byte_offset);
      unused_written_slot_4 = 0;
      unused_written_slot_5 = 1;
      loaded_word_5 = loaded_word_4 - *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + record_byte_offset);
      loaded_word_9 = *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + record_byte_offset);
      scaled_index_2 = *loaded_word_3 - 1;
      unused_written_slot_6 = 4;
      unused_written_slot_7 = 2;
      integer_quotient = (loaded_word_5 + scaled_index_2) / loaded_word_4;
      loaded_vector_2 = _mm_load_si128((     __m128i *)&xmmword_140278F90);
      remaining_count = integer_quotient;
      unused_written_slot_8 = 2;
      saved_loaded_word_2 = loaded_word_4;
      loaded_word_6 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, loaded_vector_2, u32) + record_byte_offset);
      cached_integer_quotient_2 = integer_quotient;
      unused_written_slot_9 = 2;
      unused_written_slot_10 = 1;
      saved_loaded_word = loaded_word_6;
      if ( integer_quotient )
      {
        loaded_word_7 = loaded_word_3[1] - *(__int32 *)((char *)SR_VEC_LANES(128, loaded_vector_3, i32) + record_byte_offset);
        loaded_word_8 = *(__int32 *)((char *)SR_VEC_LANES(128, loaded_vector_3, i32) + record_byte_offset);
        integer_quotient_2 = (loaded_word_7 + loaded_word_6 - 1) / loaded_word_6;
        cached_integer_quotient = integer_quotient_2;
        if ( integer_quotient_2 )
        {
          shifted_bits = integer_quotient_2 * (((int)(a5 * integer_quotient * loaded_word_3[2] + 7) >> 3) + 1);
          saved_shifted_bits = shifted_bits;
          if ( !(unsigned int)sub_14015E5F0((_QWORD *)a1, state_address, saved_remaining_amount, input_value, integer_quotient, integer_quotient_2, a5, a6) )
          {
            free(Block);
            return 0;
          }
          iteration_count_2 = 0;
          saved_iteration_count = 0;
          if ( integer_quotient_2 > 0 )
          {
            running_total = 0;
            scaled_index_3 = byte_count * remaining_count;
            saved_running_total = 0;
            scaled_index_5 = byte_count * remaining_count;
            do
            {
              if ( (int)remaining_count > 0 )
              {
                running_total_2 = running_total;
                scaled_index_4 = loaded_word_8 + iteration_count_2 * saved_loaded_word;
                cached_scaled_index = scaled_index_4;
                running_total_3 = byte_count * loaded_word_9;
                do
                {
                  crt_memcpy(
                    (__m128i *)((char *)Block + (unsigned int)(byte_count * scaled_index_4 * **(_DWORD **)a1) + running_total_3),
                    (     __m128i *)(*(_QWORD *)(a1 + 24) + running_total_2),
                    byte_count);
                  scaled_index_4 = cached_scaled_index;
                  running_total_2 += byte_count;
                  running_total_3 += byte_count * saved_loaded_word_2;
                  --remaining_count;
                }
                while ( remaining_count );
                iteration_count_2 = saved_iteration_count;
                running_total = saved_running_total;
                remaining_count = cached_integer_quotient_2;
                cached_integer_quotient = integer_quotient_2;
                scaled_index_3 = scaled_index_5;
              }
              ++iteration_count_2;
              running_total += scaled_index_3;
              saved_iteration_count = iteration_count_2;
              saved_running_total = running_total;
            }
            while ( iteration_count_2 < cached_integer_quotient );
            shifted_bits = saved_shifted_bits;
            record_byte_offset = saved_record_byte_offset;
          }
          free(*(void **)(a1 + 24));
          saved_remaining_amount = remaining_amount - shifted_bits;
          iteration_count = saved_iteration_count_2;
          state_address = &saved_state_address[shifted_bits];
          remaining_amount -= shifted_bits;
          saved_state_address = state_address;
        }
      }
      ++iteration_count;
      record_byte_offset += 4;
      saved_iteration_count_2 = iteration_count;
      saved_record_byte_offset = record_byte_offset;
      if ( iteration_count >= 7 )
      {
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(Block);
        return 1;
      }
    }
  }
  return sub_14015E5F0((_QWORD *)a1, a2, a3, a4, *loaded_word, loaded_word[1], a5, a6);
}
#undef unused_frame_slot_0
#undef remaining_amount
#undef saved_iteration_count
#undef saved_running_total
#undef saved_iteration_count_2
#undef Block
#undef input_value
#undef saved_loaded_word
#undef loaded_word_8
#undef saved_loaded_word_2
#undef loaded_word_9
#undef cached_scaled_index
#undef cached_integer_quotient_2
#undef integer_quotient_2
#undef scaled_index_5
#undef saved_shifted_bits
#undef saved_state_address
#undef saved_record_byte_offset
#undef loaded_vector
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef si128
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef loaded_vector_2
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef loaded_vector_3
#undef unused_written_slot_9
#undef unused_written_slot_10
#undef unused_frame_slot_272

//----- (000000014015E5F0) ----------------------------------------------------
__int64            sub_14015E5F0(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int iteration_count;
  unsigned int input_value;
  int loaded_word;
  _QWORD *input_cursor;
  int comparison_result;
  int comparison_result_2;
  int input_value_2;
  __int64 allocated_buffer;
  _QWORD *input_cursor_2;
  int lookup_index;
  int input_value_3;
  int scaled_index;
  int input_value_4;
  unsigned int shifted_bits;
  __int64 client_static_tls_result;
       char *literal_text;
  unsigned int integer_sum;
  __int64 saved_comparison_result;
  __int64 saved_comparison_result_2;
  __int64 table_value;
  __int64 packed_word_bits;
  unsigned __int8 *record_pointer;
  unsigned __int8 *record_pointer_2;
  __int64 running_total;
  __int64 integer_difference;
  __int64 integer_difference_2;
  unsigned __int8 *buffer_cursor;
  __int64 integer_difference_3;
  __int64 remaining_count;
  unsigned __int8 table_value_2;
  unsigned __int8 table_value_3;
  unsigned __int8 cached_table_value;
       __m128i *source_buffer;
  char *text_cursor;
  __m128i *destination_buffer;
  unsigned __int8 *saved_source_buffer;
  unsigned __int8 *saved_source_buffer_2;
  unsigned int input_value_5;
  __int64 remaining_count_2;
  __m128i *saved_destination_buffer;
  __int64 remaining_count_3;
  __int64 remaining_count_4;
  unsigned __int8 *buffer_cursor_2;
  __int64 remaining_count_5;
  __int64 remaining_count_6;
  __int64 record_byte_offset;
  __int64 integer_difference_4;
  unsigned __int64 integer_sum_2;
  signed __int64 scaled_index_2;
  signed __int64 scaled_index_3;
  unsigned __int8 *record_byte_offset_2;
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i loaded_vector_3;
  __m128i vector_result;
  __m128i loaded_vector_4;
  __m128i vector_result_2;
  __m128i loaded_vector_5;
  __m128i loaded_vector_6;
  __m128i vector_result_3;
  __m128i loaded_vector_7;
  __m128i loaded_vector_8;
  unsigned __int8 *buffer_cursor_3;
  __int64 remaining_count_7;
  __int64 remaining_count_8;
  char *text_cursor_2;
  __int64 remaining_count_9;
  int scaled_index_4;
  int scaled_index_5;
  __int64 remaining_count_10;
  __int8 *state_address;
  __int64 integer_sum_3;
  __int64 saved_comparison_result_3;
  __int64 remaining_amount;
  __int64 remaining_count_11;
  __int8 *buffer_cursor_4;
  signed __int64 scaled_index_6;
  char *state_address_2;
  signed __int64 lookup_index_2;
  unsigned __int8 *state_address_3;
  int scaled_index_7;
  int table_value_4;
  int table_value_5;
  signed int abs32_result;
  signed int abs32_result_2;
  signed int abs32_result_3;
  __int64 remaining_count_12;
  unsigned __int8 *buffer_cursor_5;
  __int64 remaining_count_13;
  unsigned __int8 scaled_index_8;
  __int64 remaining_count_14;
  unsigned __int8 *buffer_cursor_6;
  __int64 remaining_count_15;
  __int64 running_total_2;
  __int64 remaining_count_16;
  int byte_count;
  __int64 remaining_count_17;
       __m128i *saved_source_buffer_3;
  signed __int64 scaled_index_9;
  signed __int64 scaled_index_10;
  signed __int64 running_total_3;
  __int64 integer_difference_5;
  char *state_address_4;
  signed __int64 scaled_index_11;
  __int64 masked_bits;
  signed __int64 scaled_index_12;
       __m128i *record_byte_offset_3;
  __m128i loaded_vector_9;
  __m128i loaded_vector_10;
  __m128i loaded_vector_11;
  __m128i vector_result_4;
  __m128i loaded_vector_12;
  __m128i vector_result_5;
  __m128i loaded_vector_13;
  __m128i loaded_vector_14;
  __m128i vector_result_6;
  __m128i loaded_vector_15;
  __m128i loaded_vector_16;
  signed __int64 scaled_index_13;
       __m128i *state_address_5;
  signed __int64 scaled_index_14;
  __int64 remaining_count_18;
  signed __int64 scaled_index_15;
  signed __int64 scaled_index_16;
  signed __int64 scaled_index_17;
  int table_value_6;
  int scaled_index_18;
  __m128i *packed_vector;
  signed __int64 scaled_index_19;
  char *state_address_6;
  __int8 *state_address_7;
  int table_value_7;
  int table_value_8;
  int table_value_9;
  signed int abs32_result_4;
  signed int abs32_result_5;
  signed int abs32_result_6;
       __m128i *saved_source_buffer_4;
  signed __int64 scaled_index_20;
  signed __int64 scaled_index_21;
  unsigned __int8 table_value_10;
       __m128i *saved_source_buffer_5;
  signed __int64 scaled_index_22;
  signed __int64 scaled_index_23;
  __int64 scaled_index_24;
  __int64 cached_input_value;
  __int64 saved_shifted_bits;
  __int64 table_value_11;
  __int64 scaled_index_25;
  char *text_cursor_3;
  _BYTE *buffer_cursor_7;
  char table_value_12;
  int shifted_bits_2;
  unsigned __int64 remaining_count_19;
  char input_byte;
  int shifted_bits_3;
  unsigned __int64 remaining_count_20;
  char input_byte_2;
  char comparison_result_3;
  int shifted_bits_4;
  unsigned __int64 remaining_count_21;
  char input_byte_3;
  __int64 table_value_13;
  __int64 i;
  __int64 remaining_count_22;
  _BYTE *remaining_amount_2;
  _BYTE *remaining_amount_3;
  char table_value_14;
  unsigned __int8 *running_total_4;
  unsigned __int8 *running_total_5;
  unsigned int scaled_index_26;
  __int64 remaining_count_23;
  __int16 loaded_word_2;
  __int16 table_value_15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015E5F0[144];
#define saved_loaded_word (*(int (*))(void *)(sr_frame_14015E5F0 + 0)) /* [rsp+20h] */
#define saved_destination_buffer_2 (*(__m128i * (*))(void *)(sr_frame_14015E5F0 + 8)) /* [rsp+28h] */
#define saved_byte_count (*(int (*))(void *)(sr_frame_14015E5F0 + 8)) /* [rsp+28h] */
#define saved_shifted_bits_2 (*(int (*))(void *)(sr_frame_14015E5F0 + 16)) /* [rsp+30h] */
#define cached_integer_sum (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 20)) /* [rsp+34h] */
#define saved_comparison_result_4 (*(int (*))(void *)(sr_frame_14015E5F0 + 24)) /* [rsp+38h] */
#define saved_shifted_bits_3 (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 28)) /* [rsp+3Ch] */
#define scaled_index_27 (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 32)) /* [rsp+40h] */
#define saved_text_cursor (*(char * (*))(void *)(sr_frame_14015E5F0 + 40)) /* [rsp+48h] */
#define scaled_index_28 (*(int (*))(void *)(sr_frame_14015E5F0 + 48)) /* [rsp+50h] */
#define saved_comparison_result_5 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 56)) /* [rsp+58h] */
#define saved_comparison_result_6 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 64)) /* [rsp+60h] */
#define state_address_8 (*(__int8 * (*))(void *)(sr_frame_14015E5F0 + 72)) /* [rsp+68h] */
#define saved_remaining_amount (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 80)) /* [rsp+70h] */
#define integer_difference_6 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 88)) /* [rsp+78h] */
#define saved_comparison_result_7 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 96)) /* [rsp+80h] */
#define integer_sum_4 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 120)) /* [rsp+98h] */
#define scaled_index_29 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 128)) /* [rsp+A0h] */

  iteration_count = 0;
  input_value = a6;
  loaded_word = *(_DWORD *)(*a1 + 8LL);
  input_cursor = a1;
  saved_loaded_word = loaded_word;
  saved_shifted_bits_2 = a5;
  comparison_result = a4 * ((a7 == 16) + 1);
  comparison_result_2 = ((a7 == 16) + 1) * loaded_word;
  input_value_2 = a4;
  saved_comparison_result_4 = comparison_result_2;
  scaled_index_27 = a5 * comparison_result;
  if ( a4 != loaded_word && a4 != loaded_word + 1 )
  {
    crt_assert(
      (char *)L"out_n == s->img_n || out_n == s->img_n+1",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x11C8u);
    input_cursor = a1;
  }
  if ( a5 < 0
    || (a6 & 0x80000000) != 0
    || a6 && a5 > (int)(0x7FFFFFFF / a6)
    || ((a6 * a5) & 0x80000000) != 0
    || comparison_result < 0
    || comparison_result && (int)(a6 * a5) > 0x7FFFFFFF / comparison_result )
  {
    input_cursor[3] = 0;
    goto LABEL_235;
  }
  allocated_buffer = sr_path_malloc((int)(a6 * a5 * comparison_result));
  input_cursor_2 = a1;
  a1[3] = allocated_buffer;
  if ( !allocated_buffer )
  {
LABEL_235:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
    goto LABEL_236;
  }
  lookup_index = saved_loaded_word;
  if ( saved_loaded_word < 0
    || (input_value_3 = a5) != 0 && saved_loaded_word > (int)(0x7FFFFFFFu / a5)
    || (scaled_index = a5 * saved_loaded_word, scaled_index_28 = a5 * saved_loaded_word, a5 * saved_loaded_word < 0)
    || (input_value_4 = a7, a7 < 0)
    || a7 && scaled_index > (int)(0x7FFFFFFFu / a7)
    || a7 * scaled_index > 2147483640 )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "too large";
    goto LABEL_236;
  }
  shifted_bits = (unsigned int)(a7 * scaled_index + 7) >> 3;
  saved_shifted_bits_3 = shifted_bits;
  if ( a3 >= a6 * (shifted_bits + 1) )
  {
    integer_sum = 0;
    cached_integer_sum = 0;
    if ( !a6 )
      goto LABEL_175;
    saved_comparison_result = comparison_result_2;
    saved_comparison_result_2 = comparison_result;
    saved_comparison_result_5 = comparison_result_2;
    saved_comparison_result_7 = comparison_result;
    while ( 1 )
    {
      table_value = input_cursor_2[3];
      packed_word_bits = *a2;
      record_pointer = a2 + 1;
      record_pointer_2 = record_pointer;
      running_total = scaled_index_27 * integer_sum + table_value;
      scaled_index_29 = scaled_index_27 * integer_sum;
      if ( (unsigned int)packed_word_bits > 4 )
      {
        client_static_tls_result = sr_client_static_tls();
        literal_text = "invalid filter";
        goto LABEL_236;
      }
      if ( a7 < 8 )
      {
        if ( shifted_bits > input_value_3 )
        {
          client_static_tls_result = sr_client_static_tls();
          literal_text = "invalid width";
          goto LABEL_236;
        }
        comparison_result_2 = 1;
        saved_comparison_result = 1;
        saved_comparison_result_4 = 1;
        saved_comparison_result_5 = 1;
        saved_shifted_bits_2 = shifted_bits;
        running_total += input_value_3 * a4 - shifted_bits;
      }
      integer_difference = running_total - scaled_index_27;
      if ( !integer_sum )
        LODWORD(packed_word_bits) = byte_140301848[packed_word_bits];
      if ( saved_comparison_result > 0 )
      {
        integer_difference_2 = integer_difference - (_QWORD)record_pointer;
        buffer_cursor = record_pointer;
        integer_difference_3 = running_total - (_QWORD)record_pointer;
        remaining_count = saved_comparison_result;
        while ( 2 )
        {
          switch ( (int)packed_word_bits )
          {
            case 0:
              do
              {
                buffer_cursor[integer_difference_3] = *buffer_cursor;
                ++buffer_cursor;
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 1:
              do
              {
                buffer_cursor[integer_difference_3] = *buffer_cursor;
                ++buffer_cursor;
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 2:
              do
              {
                buffer_cursor[integer_difference_3] = *buffer_cursor + buffer_cursor[integer_difference_2];
                ++buffer_cursor;
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 3:
              do
              {
                table_value_2 = (buffer_cursor++)[integer_difference_2];
                buffer_cursor[integer_difference_3 - 1] = *(buffer_cursor - 1) + (table_value_2 >> 1);
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 4:
              do
              {
                table_value_3 = (buffer_cursor++)[integer_difference_2];
                cached_table_value = 0;
                if ( table_value_3 )
                  cached_table_value = table_value_3;
                buffer_cursor[integer_difference_3 - 1] = *(buffer_cursor - 1) + cached_table_value;
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 5:
              do
              {
                buffer_cursor[integer_difference_3] = *buffer_cursor;
                ++buffer_cursor;
                --remaining_count;
              }
              while ( remaining_count );
              break;
            case 6:
              do
              {
                buffer_cursor[integer_difference_3] = *buffer_cursor;
                ++buffer_cursor;
                --remaining_count;
              }
              while ( remaining_count );
              saved_comparison_result_2 = saved_comparison_result_7;
              break;
            default:
              ++buffer_cursor;
              if ( --remaining_count )
                continue;
              break;
          }
          break;
        }
        lookup_index = saved_loaded_word;
      }
      if ( a7 == 8 )
      {
        if ( lookup_index != a4 )
          *(_BYTE *)(lookup_index + running_total) = -1;
        source_buffer = (     __m128i *)&record_pointer[lookup_index];
        text_cursor = (char *)(a4 + integer_difference);
        destination_buffer = (__m128i *)(a4 + running_total);
        saved_text_cursor = text_cursor;
        saved_destination_buffer_2 = destination_buffer;
        saved_source_buffer = (unsigned __int8 *)source_buffer;
      }
      else if ( a7 == 16 )
      {
        if ( lookup_index != a4 )
          *(_WORD *)(saved_comparison_result + running_total) = -1;
        text_cursor = (char *)(saved_comparison_result_2 + integer_difference);
        source_buffer = (     __m128i *)&record_pointer[comparison_result_2];
        saved_text_cursor = text_cursor;
        destination_buffer = (__m128i *)(saved_comparison_result_2 + running_total);
        saved_source_buffer = &record_pointer_2[comparison_result_2];
        saved_destination_buffer_2 = destination_buffer;
      }
      else
      {
        source_buffer = (     __m128i *)(record_pointer + 1);
        text_cursor = (char *)(integer_difference + 1);
        saved_source_buffer = (unsigned __int8 *)source_buffer;
        destination_buffer = (__m128i *)(running_total + 1);
        saved_text_cursor = text_cursor;
        saved_destination_buffer_2 = destination_buffer;
        if ( a7 < 8 )
          break;
      }
      if ( lookup_index == a4 )
        break;
      if ( lookup_index + 1 != a4 )
        crt_assert((char *)L"img_n+1 == out_n", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x121Cu);
      saved_source_buffer_2 = (unsigned __int8 *)source_buffer;
      a2 = saved_source_buffer;
      switch ( (int)packed_word_bits )
      {
        case 0:
          input_value_5 = a5;
          if ( a5 != 1 )
          {
            remaining_count_2 = (unsigned int)(a5 - 1);
            do
            {
              if ( saved_comparison_result > 0 )
              {
                saved_destination_buffer = destination_buffer;
                remaining_count_3 = saved_comparison_result;
                do
                {
                  SR_VEC_PTR_LANES(128, saved_destination_buffer, i8)[0] = SR_VEC_PTR_LANES(128, saved_destination_buffer, i8)[a2 - (unsigned __int8 *)destination_buffer];
                  saved_destination_buffer = (__m128i *)((char *)saved_destination_buffer + 1);
                  --remaining_count_3;
                }
                while ( remaining_count_3 );
              }
              SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
              a2 += comparison_result_2;
              destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            break;
          }
          goto LABEL_127;
        case 1:
          input_value_5 = a5;
          if ( a5 != 1 )
          {
            remaining_count_4 = (unsigned int)(a5 - 1);
            do
            {
              if ( saved_comparison_result > 0 )
              {
                buffer_cursor_2 = a2;
                remaining_count_5 = saved_comparison_result;
                do
                {
                  buffer_cursor_2[(char *)destination_buffer - (char *)a2] = *buffer_cursor_2 + buffer_cursor_2[(char *)destination_buffer - saved_comparison_result_2 - (char *)a2];
                  ++buffer_cursor_2;
                  --remaining_count_5;
                }
                while ( remaining_count_5 );
              }
              SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
              a2 += comparison_result_2;
              destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
              --remaining_count_4;
            }
            while ( remaining_count_4 );
            break;
          }
          goto LABEL_127;
        case 2:
          input_value_5 = a5;
          if ( a5 != 1 )
          {
            remaining_count_6 = (unsigned int)(a5 - 1);
            do
            {
              record_byte_offset = 0;
              if ( comparison_result_2 >= 64 )
              {
                integer_difference_4 = comparison_result_2 - 1;
                integer_sum_2 = (unsigned __int64)SR_VEC_PTR_LANES(128, destination_buffer, u64) + integer_difference_4;
                if ( (destination_buffer > (__m128i *)&a2[integer_difference_4] || integer_sum_2 < (unsigned __int64)a2)
                  && (destination_buffer > (__m128i *)&text_cursor[integer_difference_4] || integer_sum_2 < (unsigned __int64)text_cursor) )
                {
                  scaled_index_2 = text_cursor - (char *)a2;
                  scaled_index_3 = (char *)destination_buffer - (char *)a2;
                  record_byte_offset_2 = a2 + 16;
                  do
                  {
                    loaded_vector = _mm_loadu_si128((     __m128i *)record_byte_offset_2 - 1);
                    record_byte_offset += 64;
                    loaded_vector_2 = _mm_loadu_si128((     __m128i *)&record_byte_offset_2[scaled_index_2 - 16]);
                    loaded_vector_3 = _mm_loadu_si128((     __m128i *)&record_byte_offset_2[scaled_index_2]);
                    record_byte_offset_2 += 64;
                    vector_result = _mm_add_epi8(loaded_vector_2, loaded_vector);
                    loaded_vector_4 = _mm_loadu_si128((     __m128i *)record_byte_offset_2 - 4);
                    { __m128i sr_png_store = vector_result; __builtin_memcpy((void *)(&record_byte_offset_2[scaled_index_3 - 80]), &sr_png_store, 16); }
                    vector_result_2 = _mm_add_epi8(loaded_vector_3, loaded_vector_4);
                    loaded_vector_5 = _mm_loadu_si128((     __m128i *)record_byte_offset_2 - 3);
                    loaded_vector_6 = _mm_loadu_si128((     __m128i *)&record_byte_offset_2[scaled_index_2 - 48]);
                    { __m128i sr_png_store = vector_result_2; __builtin_memcpy((void *)(&record_byte_offset_2[scaled_index_3 - 64]), &sr_png_store, 16); }
                    vector_result_3 = _mm_add_epi8(loaded_vector_6, loaded_vector_5);
                    loaded_vector_7 = _mm_loadu_si128((     __m128i *)record_byte_offset_2 - 2);
                    loaded_vector_8 = _mm_loadu_si128((     __m128i *)&record_byte_offset_2[scaled_index_2 - 32]);
                    { __m128i sr_png_store = vector_result_3; __builtin_memcpy((void *)(&record_byte_offset_2[scaled_index_3 - 48]), &sr_png_store, 16); }
                    { __m128i sr_png_store = _mm_add_epi8(loaded_vector_8, loaded_vector_7); __builtin_memcpy((void *)(&record_byte_offset_2[scaled_index_3 - 32]), &sr_png_store, 16); }
                  }
                  while ( record_byte_offset < comparison_result_2 - (comparison_result_2 & 0x3F) );
                }
              }
              if ( record_byte_offset < saved_comparison_result )
              {
                buffer_cursor_3 = &a2[record_byte_offset];
                remaining_count_7 = saved_comparison_result - record_byte_offset;
                do
                {
                  buffer_cursor_3[(char *)destination_buffer - (char *)a2] = *buffer_cursor_3 + buffer_cursor_3[text_cursor - (char *)a2];
                  ++buffer_cursor_3;
                  --remaining_count_7;
                }
                while ( remaining_count_7 );
              }
              SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
              a2 += comparison_result_2;
              destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
              text_cursor += saved_comparison_result_2;
              --remaining_count_6;
            }
            while ( remaining_count_6 );
            break;
          }
          goto LABEL_127;
        case 3:
          input_value_5 = a5;
          if ( a5 != 1 )
          {
            remaining_count_8 = (unsigned int)(a5 - 1);
            do
            {
              if ( saved_comparison_result > 0 )
              {
                text_cursor_2 = text_cursor;
                remaining_count_9 = saved_comparison_result;
                do
                {
                  scaled_index_4 = (unsigned __int8)text_cursor_2[(char *)destination_buffer - saved_comparison_result_2 - text_cursor];
                  scaled_index_5 = (unsigned __int8)*text_cursor_2++;
                  text_cursor_2[(char *)destination_buffer - text_cursor - 1] = text_cursor_2[a2 - (unsigned __int8 *)text_cursor - 1] + ((unsigned int)(scaled_index_5 + scaled_index_4) >> 1);
                  --remaining_count_9;
                }
                while ( remaining_count_9 );
              }
              SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
              a2 += comparison_result_2;
              destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
              text_cursor += saved_comparison_result_2;
              --remaining_count_8;
            }
            while ( remaining_count_8 );
            break;
          }
          goto LABEL_127;
        case 4:
          remaining_count_10 = (unsigned int)(a5 - 1);
          if ( a5 != 1 )
          {
            state_address = &SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result];
            saved_comparison_result_6 = comparison_result_2;
            integer_sum_3 = saved_comparison_result_2 + saved_comparison_result;
            saved_comparison_result_3 = comparison_result_2;
            remaining_amount = saved_comparison_result_2 - (_QWORD)destination_buffer;
            state_address_8 = &SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result];
            saved_remaining_amount = saved_comparison_result_2 - (_QWORD)destination_buffer;
            integer_sum_4 = saved_comparison_result_2 + saved_comparison_result;
            integer_difference_6 = (unsigned int)(a5 - 1);
            do
            {
              if ( saved_comparison_result > 0 )
              {
                remaining_count_11 = saved_comparison_result;
                buffer_cursor_4 = &state_address[-integer_sum_3];
                scaled_index_6 = text_cursor - (char *)destination_buffer;
                state_address_2 = &text_cursor[remaining_amount];
                lookup_index_2 = scaled_index_6;
                state_address_3 = &a2[remaining_amount];
                do
                {
                  scaled_index_7 = (unsigned __int8)*buffer_cursor_4;
                  table_value_4 = (unsigned __int8)buffer_cursor_4[lookup_index_2];
                  table_value_5 = (unsigned __int8)buffer_cursor_4[(_QWORD)state_address_2];
                  abs32_result = abs32(table_value_5 - table_value_4);
                  abs32_result_2 = abs32(scaled_index_7 - table_value_4);
                  abs32_result_3 = abs32(scaled_index_7 - table_value_4 + table_value_5 - table_value_4);
                  if ( abs32_result > abs32_result_2 || abs32_result > abs32_result_3 )
                  {
                    LOBYTE(scaled_index_7) = buffer_cursor_4[lookup_index_2];
                    if ( abs32_result_2 <= abs32_result_3 )
                      LOBYTE(scaled_index_7) = buffer_cursor_4[(_QWORD)state_address_2];
                  }
                  buffer_cursor_4[saved_comparison_result_2] = scaled_index_7 + buffer_cursor_4[(_QWORD)state_address_3];
                  ++buffer_cursor_4;
                  --remaining_count_11;
                }
                while ( remaining_count_11 );
                destination_buffer = saved_destination_buffer_2;
                text_cursor = saved_text_cursor;
                saved_comparison_result = saved_comparison_result_5;
                remaining_amount = saved_remaining_amount;
                state_address = state_address_8;
                remaining_count_10 = integer_difference_6;
                saved_comparison_result_3 = saved_comparison_result_6;
                integer_sum_3 = integer_sum_4;
              }
              destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
              *state_address = -1;
              state_address += saved_comparison_result_2;
              saved_destination_buffer_2 = destination_buffer;
              remaining_amount -= saved_comparison_result_2;
              state_address_8 = state_address;
              text_cursor += saved_comparison_result_2;
              saved_remaining_amount = remaining_amount;
              a2 += saved_comparison_result_3;
              saved_text_cursor = text_cursor;
              integer_difference_6 = --remaining_count_10;
            }
            while ( remaining_count_10 );
          }
          break;
        case 5:
          input_value_5 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          remaining_count_12 = (unsigned int)(a5 - 1);
          do
          {
            if ( saved_comparison_result > 0 )
            {
              buffer_cursor_5 = a2;
              remaining_count_13 = saved_comparison_result;
              do
              {
                scaled_index_8 = (buffer_cursor_5++)[(char *)destination_buffer - saved_comparison_result_2 - (char *)a2];
                buffer_cursor_5[(char *)destination_buffer - (char *)a2 - 1] = *(buffer_cursor_5 - 1) + (scaled_index_8 >> 1);
                --remaining_count_13;
              }
              while ( remaining_count_13 );
            }
            SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
            a2 += comparison_result_2;
            destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
            --remaining_count_12;
          }
          while ( remaining_count_12 );
          break;
        case 6:
          input_value_5 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          remaining_count_14 = (unsigned int)(a5 - 1);
          do
          {
            if ( saved_comparison_result > 0 )
            {
              buffer_cursor_6 = a2;
              remaining_count_15 = saved_comparison_result;
              do
              {
                buffer_cursor_6[(char *)destination_buffer - (char *)a2] = *buffer_cursor_6 + buffer_cursor_6[(char *)destination_buffer - saved_comparison_result_2 - (char *)a2];
                ++buffer_cursor_6;
                --remaining_count_15;
              }
              while ( remaining_count_15 );
            }
            SR_VEC_PTR_LANES(128, destination_buffer, i8)[saved_comparison_result] = -1;
            a2 += comparison_result_2;
            destination_buffer = (__m128i *)((char *)destination_buffer + saved_comparison_result_2);
            --remaining_count_14;
          }
          while ( remaining_count_14 );
          break;
        default:
          a2 = saved_source_buffer_2;
          break;
      }
      input_value_5 = a5;
LABEL_127:
      input_value_4 = a7;
      input_cursor_2 = a1;
      if ( a7 == 16 )
      {
        running_total_2 = a1[3] + scaled_index_29;
        if ( input_value_5 )
        {
          remaining_count_16 = input_value_5;
          do
          {
            *(_BYTE *)(saved_comparison_result + running_total_2 + 1) = -1;
            running_total_2 += saved_comparison_result_2;
            --remaining_count_16;
          }
          while ( remaining_count_16 );
        }
LABEL_169:
        input_value_4 = a7;
      }
      iteration_count = 0;
      input_value_3 = a5;
      integer_sum = cached_integer_sum + 1;
      shifted_bits = saved_shifted_bits_3;
      cached_integer_sum = integer_sum;
      if ( integer_sum >= a6 )
      {
        input_value_2 = a4;
        input_value = a6;
LABEL_175:
        if ( input_value_4 >= 8 )
        {
          if ( input_value_4 == 16 )
          {
            running_total_4 = (unsigned __int8 *)input_cursor_2[3];
            running_total_5 = running_total_4;
            scaled_index_26 = input_value * input_value_3 * input_value_2;
            if ( scaled_index_26 )
            {
              remaining_count_23 = scaled_index_26;
              do
              {
                loaded_word_2 = *running_total_4;
                running_total_4 += 2;
                table_value_15 = running_total_5[1];
                running_total_5 += 2;
                *((_WORD *)running_total_5 - 1) = table_value_15 | (loaded_word_2 << 8);
                --remaining_count_23;
              }
              while ( remaining_count_23 );
            }
          }
        }
        else if ( input_value )
        {
          scaled_index_24 = (unsigned int)(input_value_3 * input_value_2);
          cached_input_value = input_value_3;
          saved_shifted_bits = shifted_bits;
          while ( 1 )
          {
            table_value_11 = input_cursor_2[3];
            scaled_index_25 = scaled_index_27 * iteration_count;
            text_cursor_3 = (char *)(scaled_index_25 + table_value_11 + scaled_index_24 - saved_shifted_bits);
            buffer_cursor_7 = (_BYTE *)(table_value_11 + scaled_index_25);
            if ( a8 )
              table_value_12 = 1;
            else
              table_value_12 = byte_14026E768[input_value_4];
            if ( input_value_4 == 4 )
            {
              shifted_bits_2 = a5 * saved_loaded_word;
              if ( scaled_index_28 >= 2 )
              {
                remaining_count_19 = (unsigned __int64)(unsigned int)scaled_index_28 >> 1;
                shifted_bits_2 = scaled_index_28 - 2 * ((unsigned int)scaled_index_28 >> 1);
                do
                {
                  *buffer_cursor_7 = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 4);
                  input_byte = *text_cursor_3++;
                  buffer_cursor_7[1] = table_value_12 * (input_byte & 0xF);
                  buffer_cursor_7 += 2;
                  --remaining_count_19;
                }
                while ( remaining_count_19 );
              }
              if ( shifted_bits_2 > 0 )
                *buffer_cursor_7 = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 4);
            }
            else
            {
              if ( input_value_4 == 2 )
              {
                shifted_bits_3 = a5 * saved_loaded_word;
                if ( scaled_index_28 >= 4 )
                {
                  remaining_count_20 = (unsigned __int64)(unsigned int)scaled_index_28 >> 2;
                  shifted_bits_3 = scaled_index_28 - 4 * ((unsigned int)scaled_index_28 >> 2);
                  do
                  {
                    *buffer_cursor_7 = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 6);
                    buffer_cursor_7[1] = table_value_12 * (((unsigned __int8)*text_cursor_3 >> 4) & 3);
                    buffer_cursor_7[2] = table_value_12 * (((unsigned __int8)*text_cursor_3 >> 2) & 3);
                    input_byte_2 = *text_cursor_3++;
                    buffer_cursor_7[3] = table_value_12 * (input_byte_2 & 3);
                    buffer_cursor_7 += 4;
                    --remaining_count_20;
                  }
                  while ( remaining_count_20 );
                }
                if ( shifted_bits_3 > 0 )
                  *buffer_cursor_7++ = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 6);
                if ( shifted_bits_3 > 1 )
                  *buffer_cursor_7++ = table_value_12 * (((unsigned __int8)*text_cursor_3 >> 4) & 3);
                if ( shifted_bits_3 <= 2 )
                  goto LABEL_216;
                comparison_result_3 = ((unsigned __int8)*text_cursor_3 >> 2) & 3;
              }
              else
              {
                if ( input_value_4 != 1 )
                  goto LABEL_216;
                shifted_bits_4 = a5 * saved_loaded_word;
                if ( scaled_index_28 >= 8 )
                {
                  remaining_count_21 = (unsigned __int64)(unsigned int)scaled_index_28 >> 3;
                  shifted_bits_4 = scaled_index_28 - 8 * ((unsigned int)scaled_index_28 >> 3);
                  do
                  {
                    *buffer_cursor_7 = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 7);
                    buffer_cursor_7[1] = table_value_12 * ((*text_cursor_3 & 0x40) != 0);
                    buffer_cursor_7[2] = table_value_12 * ((*text_cursor_3 & 0x20) != 0);
                    buffer_cursor_7[3] = table_value_12 * ((*text_cursor_3 & 0x10) != 0);
                    buffer_cursor_7[4] = table_value_12 * ((*text_cursor_3 & 8) != 0);
                    buffer_cursor_7[5] = table_value_12 * ((*text_cursor_3 & 4) != 0);
                    buffer_cursor_7[6] = table_value_12 * ((*text_cursor_3 & 2) != 0);
                    input_byte_3 = *text_cursor_3++;
                    buffer_cursor_7[7] = table_value_12 * (input_byte_3 & 1);
                    buffer_cursor_7 += 8;
                    --remaining_count_21;
                  }
                  while ( remaining_count_21 );
                }
                if ( shifted_bits_4 > 0 )
                  *buffer_cursor_7++ = table_value_12 * ((unsigned __int8)*text_cursor_3 >> 7);
                if ( shifted_bits_4 > 1 )
                  *buffer_cursor_7++ = table_value_12 * ((*text_cursor_3 & 0x40) != 0);
                if ( shifted_bits_4 > 2 )
                  *buffer_cursor_7++ = table_value_12 * ((*text_cursor_3 & 0x20) != 0);
                if ( shifted_bits_4 > 3 )
                  *buffer_cursor_7++ = table_value_12 * ((*text_cursor_3 & 0x10) != 0);
                if ( shifted_bits_4 > 4 )
                  *buffer_cursor_7++ = table_value_12 * ((*text_cursor_3 & 8) != 0);
                if ( shifted_bits_4 > 5 )
                  *buffer_cursor_7++ = table_value_12 * ((*text_cursor_3 & 4) != 0);
                if ( shifted_bits_4 <= 6 )
                  goto LABEL_216;
                comparison_result_3 = (*text_cursor_3 & 2) != 0;
              }
              *buffer_cursor_7 = table_value_12 * comparison_result_3;
            }
LABEL_216:
            if ( saved_loaded_word != a4 )
            {
              table_value_13 = scaled_index_25 + a1[3];
              if ( saved_loaded_word == 1 )
              {
                for ( i = cached_input_value - 1; i >= 0; --i )
                {
                  *(_BYTE *)(table_value_13 + 2 * i + 1) = -1;
                  *(_BYTE *)(table_value_13 + 2 * i) = *(_BYTE *)(i + table_value_13);
                }
              }
              else
              {
                if ( saved_loaded_word != 3 )
                  crt_assert(
                    (char *)L"img_n == 3",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x1275u);
                remaining_count_22 = cached_input_value - 1;
                if ( cached_input_value - 1 >= 0 )
                {
                  remaining_amount_2 = (_BYTE *)(cached_input_value + table_value_13 + 2 * (cached_input_value - 1));
                  remaining_amount_3 = (_BYTE *)(table_value_13 + 4 * remaining_count_22 + 2);
                  do
                  {
                    --remaining_count_22;
                    remaining_amount_3[1] = -1;
                    table_value_14 = remaining_amount_2[1];
                    remaining_amount_2 -= 3;
                    *remaining_amount_3 = table_value_14;
                    remaining_amount_3 -= 4;
                    remaining_amount_3[3] = remaining_amount_2[3];
                    remaining_amount_3[2] = remaining_amount_2[2];
                  }
                  while ( remaining_count_22 >= 0 );
                }
              }
            }
            input_value_4 = a7;
            ++iteration_count;
            input_cursor_2 = a1;
            if ( iteration_count >= a6 )
              return 1;
          }
        }
        return 1;
      }
      comparison_result_2 = saved_comparison_result_4;
      lookup_index = saved_loaded_word;
    }
    byte_count = comparison_result_2 * (saved_shifted_bits_2 - 1);
    saved_byte_count = byte_count;
    remaining_count_17 = byte_count;
    switch ( (int)packed_word_bits )
    {
      case 0:
        crt_memcpy(destination_buffer, source_buffer, byte_count);
        break;
      case 1:
        if ( byte_count > 0 )
        {
          saved_source_buffer_3 = source_buffer;
          scaled_index_9 = (char *)destination_buffer - saved_comparison_result - (char *)source_buffer;
          scaled_index_10 = (char *)destination_buffer - (char *)source_buffer;
          do
          {
            SR_VEC_PTR_LANES(128, saved_source_buffer_3, i8)[scaled_index_10] = SR_VEC_PTR_LANES(128, saved_source_buffer_3, i8)[0] + SR_VEC_PTR_LANES(128, saved_source_buffer_3, i8)[scaled_index_9];
            saved_source_buffer_3 = (     __m128i *)((char *)saved_source_buffer_3 + 1);
            --remaining_count_17;
          }
          while ( remaining_count_17 );
        }
        break;
      case 2:
        running_total_3 = 0;
        if ( byte_count >= 64 )
        {
          integer_difference_5 = byte_count - 1;
          state_address_4 = &SR_VEC_PTR_LANES(128, destination_buffer, i8)[integer_difference_5];
          if ( (destination_buffer > (__m128i *)&SR_VEC_PTR_LANES(128, source_buffer, i8)[integer_difference_5] || state_address_4 < (char *)source_buffer)
            && (destination_buffer > (__m128i *)&text_cursor[integer_difference_5] || state_address_4 < text_cursor) )
          {
            scaled_index_11 = text_cursor - (char *)source_buffer;
            masked_bits = byte_count - (byte_count & 0x3F);
            scaled_index_12 = (char *)destination_buffer - (char *)source_buffer;
            record_byte_offset_3 = source_buffer + 1;
            do
            {
              loaded_vector_9 = _mm_loadu_si128(record_byte_offset_3 - 1);
              running_total_3 += 64LL;
              loaded_vector_10 = _mm_loadu_si128((     __m128i *)((char *)record_byte_offset_3 + scaled_index_11 - 16));
              loaded_vector_11 = _mm_loadu_si128((     __m128i *)((char *)record_byte_offset_3 + scaled_index_11));
              record_byte_offset_3 += 4;
              vector_result_4 = _mm_add_epi8(loaded_vector_10, loaded_vector_9);
              loaded_vector_12 = _mm_loadu_si128(record_byte_offset_3 - 4);
              { __m128i sr_png_store = vector_result_4; __builtin_memcpy((void *)(((char *)record_byte_offset_3 + scaled_index_12 - 80)), &sr_png_store, 16); }
              vector_result_5 = _mm_add_epi8(loaded_vector_11, loaded_vector_12);
              loaded_vector_13 = _mm_loadu_si128(record_byte_offset_3 - 3);
              loaded_vector_14 = _mm_loadu_si128((     __m128i *)((char *)record_byte_offset_3 + scaled_index_11 - 48));
              { __m128i sr_png_store = vector_result_5; __builtin_memcpy((void *)(((char *)record_byte_offset_3 + scaled_index_12 - 64)), &sr_png_store, 16); }
              vector_result_6 = _mm_add_epi8(loaded_vector_14, loaded_vector_13);
              loaded_vector_15 = _mm_loadu_si128(record_byte_offset_3 - 2);
              loaded_vector_16 = _mm_loadu_si128((     __m128i *)((char *)record_byte_offset_3 + scaled_index_11 - 32));
              { __m128i sr_png_store = vector_result_6; __builtin_memcpy((void *)(((char *)record_byte_offset_3 + scaled_index_12 - 48)), &sr_png_store, 16); }
              { __m128i sr_png_store = _mm_add_epi8(loaded_vector_16, loaded_vector_15); __builtin_memcpy((void *)(((char *)&record_byte_offset_3[-2] + scaled_index_12)), &sr_png_store, 16); }
            }
            while ( running_total_3 < masked_bits );
          }
        }
        if ( running_total_3 < remaining_count_17 )
        {
          scaled_index_13 = text_cursor - (char *)source_buffer;
          state_address_5 = &source_buffer[(unsigned __int64)running_total_3 / 0x10];
          scaled_index_14 = (char *)destination_buffer - (char *)source_buffer;
          remaining_count_18 = remaining_count_17 - running_total_3;
          do
          {
            SR_VEC_PTR_LANES(128, state_address_5, i8)[scaled_index_14] = SR_VEC_PTR_LANES(128, state_address_5, i8)[0] + SR_VEC_PTR_LANES(128, state_address_5, i8)[scaled_index_13];
            state_address_5 = (     __m128i *)((char *)state_address_5 + 1);
            --remaining_count_18;
          }
          while ( remaining_count_18 );
        }
        break;
      case 3:
        if ( byte_count > 0 )
        {
          scaled_index_15 = (char *)source_buffer - text_cursor;
          scaled_index_16 = (char *)destination_buffer - saved_comparison_result - text_cursor;
          scaled_index_17 = (char *)destination_buffer - text_cursor;
          do
          {
            table_value_6 = (unsigned __int8)text_cursor[scaled_index_16];
            scaled_index_18 = (unsigned __int8)*text_cursor++;
            text_cursor[scaled_index_17 - 1] = text_cursor[scaled_index_15 - 1] + ((unsigned int)(scaled_index_18 + table_value_6) >> 1);
            --remaining_count_17;
          }
          while ( remaining_count_17 );
        }
        break;
      case 4:
        if ( byte_count > 0 )
        {
          packed_vector = (__m128i *)((char *)destination_buffer - saved_comparison_result);
          scaled_index_19 = text_cursor - (char *)destination_buffer;
          state_address_6 = &text_cursor[saved_comparison_result - (_QWORD)destination_buffer];
          state_address_7 = &SR_VEC_PTR_LANES(128, source_buffer, i8)[saved_comparison_result - (_QWORD)destination_buffer];
          do
          {
            table_value_7 = SR_VEC_PTR_LANES(128, packed_vector, u8)[0];
            table_value_8 = SR_VEC_PTR_LANES(128, packed_vector, u8)[scaled_index_19];
            table_value_9 = SR_VEC_PTR_LANES(128, packed_vector, u8)[(_QWORD)state_address_6];
            abs32_result_4 = abs32(table_value_9 - table_value_8);
            abs32_result_5 = abs32(table_value_7 - table_value_8);
            abs32_result_6 = abs32(table_value_9 + table_value_7 - table_value_8 - table_value_8);
            if ( abs32_result_4 > abs32_result_5 || abs32_result_4 > abs32_result_6 )
            {
              LOBYTE(table_value_7) = SR_VEC_PTR_LANES(128, packed_vector, i8)[scaled_index_19];
              if ( abs32_result_5 <= abs32_result_6 )
                LOBYTE(table_value_7) = SR_VEC_PTR_LANES(128, packed_vector, i8)[(_QWORD)state_address_6];
            }
            SR_VEC_PTR_LANES(128, packed_vector, i8)[saved_comparison_result] = table_value_7 + state_address_7[(_QWORD)packed_vector];
            packed_vector = (__m128i *)((char *)packed_vector + 1);
            --remaining_count_17;
          }
          while ( remaining_count_17 );
          saved_comparison_result_2 = saved_comparison_result_7;
        }
        break;
      case 5:
        if ( byte_count > 0 )
        {
          saved_source_buffer_4 = source_buffer;
          scaled_index_20 = (char *)destination_buffer - saved_comparison_result - (char *)source_buffer;
          scaled_index_21 = (char *)destination_buffer - (char *)source_buffer;
          do
          {
            table_value_10 = SR_VEC_PTR_LANES(128, saved_source_buffer_4, u8)[scaled_index_20];
            saved_source_buffer_4 = (     __m128i *)((char *)saved_source_buffer_4 + 1);
            SR_VEC_PTR_LANES(128, saved_source_buffer_4, i8)[scaled_index_21 - 1] = SR_VEC_LANES(128, saved_source_buffer_4[-1], i8)[15] + (table_value_10 >> 1);
            --remaining_count_17;
          }
          while ( remaining_count_17 );
        }
        break;
      case 6:
        if ( byte_count > 0 )
        {
          saved_source_buffer_5 = source_buffer;
          scaled_index_22 = (char *)destination_buffer - saved_comparison_result - (char *)source_buffer;
          scaled_index_23 = (char *)destination_buffer - (char *)source_buffer;
          do
          {
            SR_VEC_PTR_LANES(128, saved_source_buffer_5, i8)[scaled_index_23] = SR_VEC_PTR_LANES(128, saved_source_buffer_5, i8)[0] + SR_VEC_PTR_LANES(128, saved_source_buffer_5, i8)[scaled_index_22];
            saved_source_buffer_5 = (     __m128i *)((char *)saved_source_buffer_5 + 1);
            --remaining_count_17;
          }
          while ( remaining_count_17 );
        }
        break;
      default:
        break;
    }
    input_cursor_2 = a1;
    a2 = &SR_VEC_PTR_LANES(128, source_buffer, u8)[saved_byte_count];
    goto LABEL_169;
  }
  client_static_tls_result = sr_client_static_tls();
  literal_text = "not enough pixels";
LABEL_236:
  *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
  return 0;
}
#undef saved_loaded_word
#undef saved_destination_buffer_2
#undef saved_byte_count
#undef saved_shifted_bits_2
#undef cached_integer_sum
#undef saved_comparison_result_4
#undef saved_shifted_bits_3
#undef scaled_index_27
#undef saved_text_cursor
#undef scaled_index_28
#undef saved_comparison_result_5
#undef saved_comparison_result_6
#undef state_address_8
#undef saved_remaining_amount
#undef integer_difference_6
#undef saved_comparison_result_7
#undef integer_sum_4
#undef scaled_index_29

// 14015EB9E: conditional instruction was optimized away because r13d.4>=40
// 14015EFFB: conditional instruction was optimized away because r10d.4>=40
// 14015EB98: mask 0x8000003F is shortened because r13d.4 <= 0x7FFFFFFF
// 14015EFF5: mask 0x8000003F is shortened because r10d.4 <= 0x7FFFFFFF

//----- (000000014015F820) ----------------------------------------------------
__int64            sub_14015F820(__int64 *a1)
{
  __int64 result;
  _BYTE *record_byte_offset;
  unsigned int loaded_word;
  int loaded_word_2;
  __int64 remaining_count;
  char input_byte;
  unsigned __int8 *record_byte_offset_2;
  __int64 remaining_count_2;
  unsigned int table_value;
  int scaled_index;
  int loaded_word_3;
  unsigned int shifted_bits;
  __int64 remaining_count_3;
  char input_byte_2;

  result = *a1;
  record_byte_offset = (_BYTE *)a1[3];
  loaded_word = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4);
  loaded_word_2 = *(_DWORD *)(*a1 + 12);
  if ( loaded_word_2 == 3 )
  {
    if ( loaded_word )
    {
      remaining_count = loaded_word;
      do
      {
        input_byte = *record_byte_offset;
        result = (unsigned __int8)record_byte_offset[2];
        *record_byte_offset = result;
        record_byte_offset[2] = input_byte;
        record_byte_offset += 3;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  else
  {
    if ( loaded_word_2 != 4 )
      result = crt_assert(
                 (char *)L"s->img_out_n == 4",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                 0x132Du);
    if ( loaded_word )
    {
      if ( g_144980DB8 )
      {
        record_byte_offset_2 = record_byte_offset + 2;
        remaining_count_2 = loaded_word;
        do
        {
          table_value = record_byte_offset_2[1];
          scaled_index = *(record_byte_offset_2 - 2);
          loaded_word_3 = *record_byte_offset_2;
          if ( (_BYTE)table_value )
          {
            *(record_byte_offset_2 - 1) = ((table_value >> 1) + 255 * *(record_byte_offset_2 - 1)) / table_value;
            shifted_bits = ((table_value >> 1) + 255 * scaled_index) / table_value;
            result = ((table_value >> 1) + 255 * loaded_word_3) / table_value;
          }
          else
          {
            LOBYTE(shifted_bits) = *(record_byte_offset_2 - 2);
            result = (unsigned __int8)loaded_word_3;
          }
          *(record_byte_offset_2 - 2) = result;
          *record_byte_offset_2 = shifted_bits;
          record_byte_offset_2 += 4;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      else
      {
        remaining_count_3 = loaded_word;
        do
        {
          input_byte_2 = *record_byte_offset;
          result = (unsigned __int8)record_byte_offset[2];
          *record_byte_offset = result;
          record_byte_offset[2] = input_byte_2;
          record_byte_offset += 4;
          --remaining_count_3;
        }
        while ( remaining_count_3 );
      }
    }
  }
  return result;
}

//----- (000000014015F960) ----------------------------------------------------
_BOOL8            sub_14015F960(__int64 *a1, int a2)
{
  int selection_flag;
  int call_result;
  __int64 loaded_word;

  selection_flag = 0;
  *((_DWORD *)a1 + 4627) = -1;
  *((_DWORD *)a1 + 4626) = 0;
  *((_BYTE *)a1 + 18472) = -1;
  if ( sub_140160790(a1) != -40 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
    return 0;
  }
  if ( a2 == 1 )
    return 1;
  call_result = (unsigned __int8)sub_140160790(a1);
  if ( call_result == 192 )
  {
LABEL_14:
    LOBYTE(selection_flag) = call_result == 194;
    *((_DWORD *)a1 + 4620) = selection_flag;
    return (unsigned int)sub_14016AEA0((__int64)a1, a2) != 0;
  }
  while ( 1 )
  {
    if ( (unsigned int)(call_result - 193) <= 1 )
      goto LABEL_14;
    if ( !(unsigned int)sub_14016BB40(a1, call_result) )
      return 0;
    call_result = (unsigned __int8)sub_140160790(a1);
    if ( call_result == 255 )
      break;
LABEL_13:
    if ( call_result == 192 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    loaded_word = *a1;
    if ( !*(_QWORD *)(*a1 + 16) )
      break;
    if ( (*(unsigned int (           **)(_QWORD))(loaded_word + 32))(*(_QWORD *)(loaded_word + 40)) )
    {
      if ( !*(_DWORD *)(loaded_word + 48) )
        goto LABEL_17;
      break;
    }
LABEL_12:
    call_result = (unsigned __int8)sub_140160790(a1);
    if ( call_result != 255 )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(loaded_word + 192) < *(_QWORD *)(loaded_word + 200) )
    goto LABEL_12;
LABEL_17:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOF");
  return 0;
}

//----- (000000014015FAD0) ----------------------------------------------------
__int64            sub_14015FAD0(_QWORD *a1)
{
  __int64 record_byte_offset;
  int call_result;
  __int64 loaded_word;
  __int64 loaded_word_2;
  char *loaded_record_pointer;
  int int64_result;
  char input_byte;
  __int64 loaded_word_3;
  char *loaded_record_pointer_2;
  char input_byte_2;
  char *loaded_record_pointer_3;
  char input_byte_3;
  __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int8 loaded_word_6;
  unsigned __int8 *record_pointer;
  int saved_loaded_word;
  unsigned __int8 loaded_word_7;
  unsigned __int8 *loaded_record_pointer_5;
  __int64 loaded_word_8;
  int shifted_bits;
  unsigned __int64 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned __int8 loaded_word_10;
  unsigned __int8 *record_pointer_2;
  int saved_loaded_word_2;
  unsigned __int8 loaded_word_11;
  unsigned __int8 *loaded_record_pointer_7;
  int iteration_count;
  _QWORD *record_byte_offset_2;
  int iteration_count_2;
  int shifted_bits_2;
  int shifted_bits_3;
  int iteration_count_3;
  __int64 remaining_count;
  __int64 shifted_bits_4;
  __int64 record_byte_offset_3;
  char *state_address;
  __int16 masked_bits;
  __int16 loaded_word_12;

  record_byte_offset = 0;
  a1[2267] = 0;
  a1[2268] = 0;
  a1[2279] = 0;
  a1[2280] = 0;
  a1[2291] = 0;
  a1[2292] = 0;
  a1[2303] = 0;
  a1[2304] = 0;
  *((_DWORD *)a1 + 4634) = 0;
  if ( !sub_14015F960(a1, 0) )
    return 0;
  call_result = (unsigned __int8)sub_140160790(a1);
  if ( (unsigned __int8)call_result == 217 )
    goto LABEL_47;
  do
  {
    if ( call_result != 218 )
    {
      if ( call_result != 220 )
      {
        if ( (unsigned int)sub_14016BB40(a1, call_result) )
          goto LABEL_46;
        return 0;
      }
      loaded_word_4 = *a1;
      loaded_word_5 = *(_QWORD *)(*a1 + 200LL);
      loaded_record_pointer_4 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)loaded_record_pointer_4 >= loaded_word_5 )
      {
        if ( !*(_DWORD *)(loaded_word_4 + 48) )
        {
          saved_loaded_word = 0;
          goto LABEL_30;
        }
        stbi_refill_buffer(*a1);
        loaded_record_pointer_4 = *(unsigned __int8 **)(loaded_word_4 + 192);
        loaded_word_5 = *(_QWORD *)(loaded_word_4 + 200);
      }
      loaded_word_6 = *loaded_record_pointer_4;
      record_pointer = loaded_record_pointer_4 + 1;
      *(_QWORD *)(loaded_word_4 + 192) = (uint64)(uintptr_t)(record_pointer);
      saved_loaded_word = loaded_word_6;
      if ( (unsigned __int64)record_pointer < loaded_word_5 )
      {
        loaded_word_7 = *record_pointer;
        *(_QWORD *)(loaded_word_4 + 192) = (uint64)(uintptr_t)(record_pointer + 1);
        goto LABEL_33;
      }
LABEL_30:
      if ( *(_DWORD *)(loaded_word_4 + 48) )
      {
        stbi_refill_buffer(loaded_word_4);
        loaded_record_pointer_5 = *(unsigned __int8 **)(loaded_word_4 + 192);
        loaded_word_7 = *loaded_record_pointer_5;
        *(_QWORD *)(loaded_word_4 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
      }
      else
      {
        loaded_word_7 = 0;
      }
LABEL_33:
      loaded_word_8 = *a1;
      shifted_bits = (saved_loaded_word << 8) + loaded_word_7;
      loaded_word_9 = *(_QWORD *)(*a1 + 200LL);
      loaded_record_pointer_6 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)loaded_record_pointer_6 >= loaded_word_9 )
      {
        if ( !*(_DWORD *)(loaded_word_8 + 48) )
        {
          saved_loaded_word_2 = 0;
          goto LABEL_39;
        }
        stbi_refill_buffer(*a1);
        loaded_record_pointer_6 = *(unsigned __int8 **)(loaded_word_8 + 192);
        loaded_word_9 = *(_QWORD *)(loaded_word_8 + 200);
      }
      loaded_word_10 = *loaded_record_pointer_6;
      record_pointer_2 = loaded_record_pointer_6 + 1;
      *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(record_pointer_2);
      saved_loaded_word_2 = loaded_word_10;
      if ( (unsigned __int64)record_pointer_2 < loaded_word_9 )
      {
        loaded_word_11 = *record_pointer_2;
        *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(record_pointer_2 + 1);
LABEL_42:
        if ( shifted_bits != 4 )
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL len");
          return 0;
        }
        if ( loaded_word_11 + (saved_loaded_word_2 << 8) == *(_DWORD *)(*a1 + 4LL) )
        {
          record_byte_offset = 0;
          goto LABEL_46;
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL height");
        return 0;
      }
LABEL_39:
      if ( *(_DWORD *)(loaded_word_8 + 48) )
      {
        stbi_refill_buffer(loaded_word_8);
        loaded_record_pointer_7 = *(unsigned __int8 **)(loaded_word_8 + 192);
        loaded_word_11 = *loaded_record_pointer_7;
        *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
      }
      else
      {
        loaded_word_11 = 0;
      }
      goto LABEL_42;
    }
    if ( !(unsigned int)sub_14016C320(a1) || !(unsigned int)sub_140167230((__int64)a1) )
      return 0;
    if ( *((_BYTE *)a1 + 18472) != 0xFF )
      goto LABEL_46;
    while ( 1 )
    {
      loaded_word = *a1;
      if ( *(_QWORD *)(*a1 + 16LL) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(loaded_word + 32))(*(_QWORD *)(loaded_word + 40)) )
          goto LABEL_11;
        if ( !*(_DWORD *)(loaded_word + 48) )
          goto LABEL_46;
      }
      if ( *(_QWORD *)(loaded_word + 192) >= *(_QWORD *)(loaded_word + 200) )
        goto LABEL_46;
LABEL_11:
      loaded_word_2 = *a1;
      loaded_record_pointer = *(char **)(*a1 + 192LL);
      if ( (unsigned __int64)loaded_record_pointer < *(_QWORD *)(*a1 + 200LL) )
        goto LABEL_17;
      if ( *(_DWORD *)(loaded_word_2 + 48) )
      {
        int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(loaded_word_2 + 16))(
               *(_QWORD *)(loaded_word_2 + 40),
               loaded_word_2 + 56,
               *(unsigned int *)(loaded_word_2 + 52));
        *(_DWORD *)(loaded_word_2 + 184) += *(_DWORD *)(loaded_word_2 + 192) - *(_DWORD *)(loaded_word_2 + 208);
        *(_QWORD *)(loaded_word_2 + 192) = loaded_word_2 + 56;
        if ( int64_result )
        {
          *(_QWORD *)(loaded_word_2 + 200) = int64_result + loaded_word_2 + 56;
        }
        else
        {
          *(_DWORD *)(loaded_word_2 + 48) = 0;
          *(_QWORD *)(loaded_word_2 + 200) = loaded_word_2 + 57;
          *(_BYTE *)(loaded_word_2 + 56) = 0;
        }
        loaded_record_pointer = *(char **)(loaded_word_2 + 192);
LABEL_17:
        input_byte = *loaded_record_pointer;
        *(_QWORD *)(loaded_word_2 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
        if ( input_byte == -1 )
          break;
      }
    }
    loaded_word_3 = *a1;
    loaded_record_pointer_2 = *(char **)(*a1 + 192LL);
    if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(loaded_word_3 + 48) )
      {
        stbi_refill_buffer(*a1);
        loaded_record_pointer_3 = *(char **)(loaded_word_3 + 192);
        input_byte_3 = *loaded_record_pointer_3;
        *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
        *((_BYTE *)a1 + 18472) = input_byte_3;
      }
      else
      {
        *((_BYTE *)a1 + 18472) = 0;
      }
    }
    else
    {
      input_byte_2 = *loaded_record_pointer_2;
      *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      *((_BYTE *)a1 + 18472) = input_byte_2;
    }
LABEL_46:
    call_result = (unsigned __int8)sub_140160790(a1);
  }
  while ( (unsigned __int8)call_result != 217 );
LABEL_47:
  if ( *((_DWORD *)a1 + 4620) )
  {
    iteration_count = 0;
    if ( *(int *)(*a1 + 8LL) > 0 )
    {
      record_byte_offset_2 = a1 + 2270;
      do
      {
        iteration_count_2 = 0;
        shifted_bits_2 = (*((_DWORD *)record_byte_offset_2 - 13) + 7) >> 3;
        shifted_bits_3 = (*((_DWORD *)record_byte_offset_2 - 12) + 7) >> 3;
        if ( shifted_bits_3 > 0 )
        {
          do
          {
            iteration_count_3 = 0;
            if ( shifted_bits_2 > 0 )
            {
              do
              {
                remaining_count = 16;
                shifted_bits_4 = *record_byte_offset_2 + 2LL * ((iteration_count_3 + iteration_count_2 * *((_DWORD *)record_byte_offset_2 + 2)) << 6);
                record_byte_offset_3 = shifted_bits_4 + 2;
                state_address = (char *)&a1[16 * (__int64)*((int *)record_byte_offset_2 - 17) + 1681] - shifted_bits_4;
                do
                {
                  masked_bits = *(_WORD *)&state_address[record_byte_offset_3 - 2];
                  loaded_word_12 = *(_WORD *)(record_byte_offset_3 - 2);
                  record_byte_offset_3 += 8;
                  *(_WORD *)(record_byte_offset_3 - 10) = masked_bits * loaded_word_12;
                  *(_WORD *)(record_byte_offset_3 - 8) *= *(_WORD *)&state_address[record_byte_offset_3 - 8];
                  *(_WORD *)(record_byte_offset_3 - 6) *= *(_WORD *)&state_address[record_byte_offset_3 - 6];
                  *(_WORD *)(record_byte_offset_3 - 4) *= *(_WORD *)&state_address[record_byte_offset_3 - 4];
                  --remaining_count;
                }
                while ( remaining_count );
                ((void (           *)(__int64))a1[2318])(*(record_byte_offset_2 - 4) + record_byte_offset + 8 * iteration_count_2 * *((_DWORD *)record_byte_offset_2 - 11));
                ++iteration_count_3;
                record_byte_offset += 8;
              }
              while ( iteration_count_3 < shifted_bits_2 );
              record_byte_offset = 0;
            }
            ++iteration_count_2;
          }
          while ( iteration_count_2 < shifted_bits_3 );
        }
        ++iteration_count;
        record_byte_offset_2 += 12;
      }
      while ( iteration_count < *(_DWORD *)(*a1 + 8LL) );
    }
  }
  return 1;
}

//----- (000000014015FFC0) ----------------------------------------------------
char *           sub_14015FFC0(int **a1, int *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *scaled_index;
  int loaded_word;
  int *loaded_word_2;
  int scaled_index_2;
  int table_value;
  int loaded_word_3;
  char *returned_pointer;
  int *allocation_buffer;
  int *allocation_buffer_2;
  __int64 client_static_tls_result;
       char *literal_text;

  scaled_index = nullptr;
  if ( a5 > 4 )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad req_comp";
    goto LABEL_17;
  }
  if ( !(unsigned int)sub_140167D10((__int64)a1, 0, a5) )
  {
LABEL_14:
    free(a1[3]);
    allocation_buffer = a1[2];
    a1[3] = nullptr;
    free(allocation_buffer);
    allocation_buffer_2 = a1[1];
    a1[2] = nullptr;
    free(allocation_buffer_2);
    a1[1] = nullptr;
    return scaled_index;
  }
  loaded_word = *((_DWORD *)a1 + 8);
  if ( loaded_word <= 8 )
  {
    loaded_word = 8;
    goto LABEL_6;
  }
  if ( loaded_word != 16 )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad bits_per_channel";
LABEL_17:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return nullptr;
  }
LABEL_6:
  *a6 = loaded_word;
  scaled_index = (char *)a1[3];
  a1[3] = nullptr;
  if ( !a5
    || (loaded_word_2 = *a1, scaled_index_2 = (*a1)[3], a5 == scaled_index_2)
    || ((table_value = loaded_word_2[1], loaded_word_3 = *loaded_word_2, *a6 != 8)
      ? (returned_pointer = sub_14015DD00(scaled_index, scaled_index_2, a5, loaded_word_3, table_value))
      : (returned_pointer = sub_14015D7E0(scaled_index, scaled_index_2, a5, loaded_word_3, table_value)),
        scaled_index = returned_pointer,
        (*a1)[3] = a5,
        returned_pointer) )
  {
    *a2 = **a1;
    *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    goto LABEL_14;
  }
  return nullptr;
}
//----- (0000000140160180) ----------------------------------------------------
__int64            sub_140160180(void **a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 *buffer_cursor;
  int loaded_word;
  __int64 allocated_buffer;
  void *saved_allocated_buffer;
  __int64 remaining_count;
  __int64 record_byte_offset;
  __int64 loaded_word_2;
  __int64 loaded_word_3;

  buffer_cursor = (unsigned __int8 *)a1[3];
  loaded_word = *(_DWORD *)*a1 * *((_DWORD *)*a1 + 1);
  if ( loaded_word < 0
    || a4 < 0
    || a4 && loaded_word > (int)(0x7FFFFFFFu / a4)
    || (allocated_buffer = sr_path_malloc(a4 * loaded_word), (saved_allocated_buffer = (void *)allocated_buffer) == nullptr) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    if ( loaded_word )
    {
      remaining_count = (unsigned int)loaded_word;
      record_byte_offset = allocated_buffer + 2;
      if ( a4 == 3 )
      {
        do
        {
          loaded_word_2 = *buffer_cursor;
          record_byte_offset += 3;
          ++buffer_cursor;
          *(_BYTE *)(record_byte_offset - 5) = *(_BYTE *)(a2 + 4 * loaded_word_2);
          *(_BYTE *)(record_byte_offset - 4) = *(_BYTE *)(a2 + 4 * loaded_word_2 + 1);
          *(_BYTE *)(record_byte_offset - 3) = *(_BYTE *)(a2 + 4 * loaded_word_2 + 2);
          --remaining_count;
        }
        while ( remaining_count );
      }
      else
      {
        do
        {
          loaded_word_3 = *buffer_cursor;
          record_byte_offset += 4;
          ++buffer_cursor;
          *(_BYTE *)(record_byte_offset - 6) = *(_BYTE *)(a2 + 4 * loaded_word_3);
          *(_BYTE *)(record_byte_offset - 5) = *(_BYTE *)(a2 + 4 * loaded_word_3 + 1);
          *(_BYTE *)(record_byte_offset - 4) = *(_BYTE *)(a2 + 4 * loaded_word_3 + 2);
          *(_BYTE *)(record_byte_offset - 3) = *(_BYTE *)(a2 + 4 * loaded_word_3 + 3);
          --remaining_count;
        }
        while ( remaining_count );
      }
    }
    free(a1[3]);
    a1[3] = saved_allocated_buffer;
    return 1;
  }
}

//----- (00000001401602C0) ----------------------------------------------------
__int64            sub_1401602C0(__int64 a1, int a2)
{
  __int64 input_value;
  int loaded_word;
  int rol4_result;
  int shifted_bits;
  int masked_bits;

  input_value = a2;
  if ( *(_DWORD *)(a1 + 18468) < a2 )
    sub_140161D20((_QWORD *)a1);
  loaded_word = *(_DWORD *)(a1 + 18464);
  rol4_result = __ROL4__(loaded_word, input_value);
  if ( (unsigned int)input_value > 0x10 )
    return 0;
  *(_DWORD *)(a1 + 18468) -= input_value;
  shifted_bits = dword_14026FC40[input_value] & ~(loaded_word >> 31);
  masked_bits = rol4_result & dword_14026FBF0[input_value];
  *(_DWORD *)(a1 + 18464) = rol4_result & ~dword_14026FBF0[input_value];
  return (unsigned int)(masked_bits + shifted_bits);
}

//----- (0000000140160350) ----------------------------------------------------
__int64            sub_140160350(__int64 a1)
{
  unsigned int option_flags;
  __int64 result;
  int record_byte_offset;
  unsigned __int64 loaded_word;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word_2;
  int shifted_bits;

  option_flags = *(_DWORD *)(a1 + 20);
  result = a1;
  record_byte_offset = *(_DWORD *)(a1 + 16);
  if ( option_flags >= 1 << record_byte_offset )
  {
LABEL_8:
    *(_QWORD *)result = *(_QWORD *)(result + 8);
  }
  else
  {
    loaded_word = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      loaded_record_pointer = *(unsigned __int8 **)result;
      if ( *(_QWORD *)result < loaded_word )
      {
        loaded_word_2 = *loaded_record_pointer;
        *(_QWORD *)result = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      }
      else
      {
        loaded_word_2 = 0;
      }
      shifted_bits = loaded_word_2 << record_byte_offset;
      record_byte_offset += 8;
      option_flags |= shifted_bits;
      *(_DWORD *)(result + 16) = record_byte_offset;
      *(_DWORD *)(result + 20) = option_flags;
      if ( record_byte_offset > 24 )
        break;
      if ( option_flags >= 1 << record_byte_offset )
        goto LABEL_8;
    }
  }
  return result;
}

//----- (00000001401603C0) ----------------------------------------------------
void sub_1401603C0(__m128i *a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)
{
  __int64 client_static_tls_result;
  __int64 result;
  int loaded_word;

  client_static_tls_result = sr_client_static_tls();
  if ( *(_DWORD *)(client_static_tls_result + 8) )
    result = *(unsigned int *)(client_static_tls_result + 12);
  else
    result = g_144980DAC;
  if ( (_DWORD)result && a1 )
  {
    loaded_word = a5;
    if ( !a5 )
      loaded_word = *a4;
    sub_14016F470(a1, *a2, *a3, 4 * loaded_word);
    return;
  }
  return;
}

//----- (0000000140160430) ----------------------------------------------------
__int64            sub_140160430(char *a1, char *a2)
{
  int call_result;
  __int64 unused_written_slot;
  __int64 callee_output_word;

  call_result = sub_14020B8E4(&callee_output_word, a1, a2);
  unused_written_slot = callee_output_word;
  if ( call_result )
    return 0;
  return unused_written_slot;
}

//----- (0000000140160460) ----------------------------------------------------
__int64            sub_140160460(__int64 a1, int a2, unsigned int a3)
{
  __int64 running_total;
  __int64 remaining_count;
  void *allocation_buffer;
  void *allocation_buffer_2;

  if ( a2 > 0 )
  {
    running_total = a1 + 18136;
    remaining_count = (unsigned int)a2;
    do
    {
      if ( *(_QWORD *)running_total )
      {
        free(*(void **)running_total);
        *(_QWORD *)running_total = 0;
        *(_QWORD *)(running_total - 8) = 0;
      }
      allocation_buffer = *(void **)(running_total + 8);
      if ( allocation_buffer )
      {
        free(allocation_buffer);
        *(_QWORD *)(running_total + 8) = 0;
        *(_QWORD *)(running_total + 24) = 0;
      }
      allocation_buffer_2 = *(void **)(running_total + 16);
      if ( allocation_buffer_2 )
      {
        free(allocation_buffer_2);
        *(_QWORD *)(running_total + 16) = 0;
      }
      running_total += 96;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return a3;
}

//----- (00000001401604F0) ----------------------------------------------------
__int64            sub_1401604F0(__int64 a1)
{
  unsigned __int8 *loaded_record_pointer;
  unsigned __int64 loaded_word;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *record_pointer;
  int saved_loaded_word;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_2;
  unsigned __int8 loaded_word_4;

  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      saved_loaded_word = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  loaded_word_2 = *loaded_record_pointer;
  record_pointer = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer);
  saved_loaded_word = loaded_word_2;
  if ( (unsigned __int64)record_pointer < loaded_word )
  {
    loaded_word_3 = *record_pointer;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer + 1);
    return (loaded_word_2 << 8) + (unsigned int)loaded_word_3;
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return (unsigned int)(saved_loaded_word << 8);
  stbi_refill_buffer(a1);
  loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
  loaded_word_4 = *loaded_record_pointer_2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  return (saved_loaded_word << 8) + (unsigned int)loaded_word_4;
}

//----- (00000001401605B0) ----------------------------------------------------
__int64            sub_1401605B0(__int64 a1)
{
  unsigned __int8 *loaded_record_pointer;
  unsigned __int64 loaded_word;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *record_pointer;
  unsigned int saved_loaded_word;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_2;
  unsigned __int8 loaded_word_4;

  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      saved_loaded_word = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  loaded_word_2 = *loaded_record_pointer;
  record_pointer = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer);
  saved_loaded_word = loaded_word_2;
  if ( (unsigned __int64)record_pointer < loaded_word )
  {
    loaded_word_3 = *record_pointer;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer + 1);
    return loaded_word_2 + (loaded_word_3 << 8);
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return saved_loaded_word;
  stbi_refill_buffer(a1);
  loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
  loaded_word_4 = *loaded_record_pointer_2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  return saved_loaded_word + (loaded_word_4 << 8);
}

//----- (0000000140160670) ----------------------------------------------------
__int64            sub_140160670(__int64 a1)
{
  int call_result;

  call_result = sub_1401604F0(a1);
  return (call_result << 16) + (unsigned int)sub_1401604F0(a1);
}

//----- (00000001401606A0) ----------------------------------------------------
__int64            sub_1401606A0(__int64 a1)
{
  int call_result;

  call_result = sub_1401605B0(a1);
  return call_result + ((unsigned int)sub_1401605B0(a1) << 16);
}

//----- (00000001401606D0) ----------------------------------------------------
char            sub_1401606D0(__int64 a1)
{
  char *loaded_record_pointer;
  char result;
  char *loaded_record_pointer_2;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      result = *loaded_record_pointer_2;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = *loaded_record_pointer;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  return result;
}

//----- (0000000140160730) ----------------------------------------------------
unsigned __int64            sub_140160730(__int64 a1)
{
  int call_result;
  unsigned int shifted_bits;
  int call_result_2;

  call_result = sub_1401604F0(a1);
  shifted_bits = sub_1401604F0(a1) + (call_result << 16);
  call_result_2 = sub_1401604F0(a1);
  return shifted_bits | ((unsigned __int64)((call_result_2 << 16) + (unsigned int)sub_1401604F0(a1)) << 32);
}

//----- (0000000140160790) ----------------------------------------------------
char            sub_140160790(_BYTE *a1)
{
  char result;
  __int64 loaded_word;
  char *loaded_record_pointer;
  char input_byte;
  __int64 loaded_word_2;
  char *loaded_record_pointer_2;
  char loaded_word_3;

  result = a1[18472];
  if ( result != -1 )
  {
    a1[18472] = -1;
    return result;
  }
  loaded_word = *(_QWORD *)a1;
  loaded_record_pointer = *(char **)(*(_QWORD *)a1 + 192LL);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
  {
    if ( !*(_DWORD *)(loaded_word + 48) )
      return -1;
    stbi_refill_buffer(*(_QWORD *)a1);
    loaded_record_pointer = *(char **)(loaded_word + 192);
  }
  input_byte = *loaded_record_pointer;
  *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte == -1 )
  {
    while ( 1 )
    {
      loaded_word_2 = *(_QWORD *)a1;
      loaded_record_pointer_2 = *(char **)(*(_QWORD *)a1 + 192LL);
      if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
      {
        if ( !*(_DWORD *)(loaded_word_2 + 48) )
          return 0;
        stbi_refill_buffer(*(_QWORD *)a1);
        loaded_record_pointer_2 = *(char **)(loaded_word_2 + 192);
      }
      loaded_word_3 = *loaded_record_pointer_2;
      *(_QWORD *)(loaded_word_2 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      if ( loaded_word_3 != -1 )
        return loaded_word_3;
    }
  }
  return -1;
}

//----- (0000000140160860) ----------------------------------------------------
_BOOL8            sub_140160860(__int64 a1, __m128i *a2, int a3)
{
  __int64 input_value;
  int byte_count;
  unsigned int integer_difference;
  int int64_result;
       __m128i *source_buffer;

  input_value = a3;
  if ( *(_QWORD *)(a1 + 16) && (byte_count = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), byte_count < a3) )
  {
    crt_memcpy(a2, *(     __m128i **)(a1 + 192), byte_count);
    integer_difference = input_value - byte_count;
    int64_result = (*(__int64 (           **)(_QWORD, __int8 *, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 40), &SR_VEC_PTR_LANES(128, a2, i8)[byte_count], integer_difference);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    return int64_result == integer_difference;
  }
  else
  {
    source_buffer = *(     __m128i **)(a1 + 192);
    if ( (unsigned __int64)SR_VEC_PTR_LANES(128, source_buffer, u64) + a3 > *(_QWORD *)(a1 + 200) )
    {
      return 0;
    }
    else
    {
      crt_memcpy(a2, source_buffer, a3);
      *(_QWORD *)(a1 + 192) += input_value;
      return 1;
    }
  }
}

//----- (0000000140160930) ----------------------------------------------------
__int64            sub_140160930(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char input_byte_2;
  char *loaded_record_pointer_3;
  char input_byte_3;
  char *loaded_record_pointer_4;
  char input_byte_4;
  char *loaded_record_pointer_5;
  char input_byte_5;
  char *loaded_record_pointer_6;
  char input_byte_6;
  _QWORD *unused_written_slot;
  unsigned __int8 *loaded_record_pointer_7;
  unsigned __int8 loaded_word;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_10;
  unsigned __int8 *loaded_record_pointer_11;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_12;
  bool comparison_result;
  int table_value;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
  }
  input_byte = *loaded_record_pointer;
  loaded_record_pointer_2 = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
  if ( input_byte != 71 )
    goto LABEL_49;
  if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    loaded_record_pointer_2 = *(char **)(a1 + 192);
  }
  input_byte_2 = *loaded_record_pointer_2;
  loaded_record_pointer_3 = loaded_record_pointer_2 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3);
  if ( input_byte_2 != 73 )
    goto LABEL_49;
  if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    loaded_record_pointer_3 = *(char **)(a1 + 192);
  }
  input_byte_3 = *loaded_record_pointer_3;
  loaded_record_pointer_4 = loaded_record_pointer_3 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4);
  if ( input_byte_3 != 70 )
    goto LABEL_49;
  if ( (unsigned __int64)loaded_record_pointer_4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    loaded_record_pointer_4 = *(char **)(a1 + 192);
  }
  input_byte_4 = *loaded_record_pointer_4;
  loaded_record_pointer_5 = loaded_record_pointer_4 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5);
  if ( input_byte_4 != 56 )
    goto LABEL_49;
  if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    loaded_record_pointer_5 = *(char **)(a1 + 192);
  }
  input_byte_5 = *loaded_record_pointer_5;
  loaded_record_pointer_6 = loaded_record_pointer_5 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6);
  if ( ((input_byte_5 - 55) & 0xFD) != 0 )
    goto LABEL_49;
  if ( (unsigned __int64)loaded_record_pointer_6 < *(_QWORD *)(a1 + 200) )
    goto LABEL_24;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_49:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return 0;
  }
  stbi_refill_buffer(a1);
  loaded_record_pointer_6 = *(char **)(a1 + 192);
LABEL_24:
  input_byte_6 = *loaded_record_pointer_6;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
  if ( input_byte_6 != 97 )
    goto LABEL_49;
  unused_written_slot = (_QWORD *)(sr_client_static_tls() + 16LL);
  *unused_written_slot = (uint64)(uintptr_t)(Parameters);
  *a2 = sub_1401605B0(a1);
  a2[1] = sub_1401605B0(a1);
  loaded_record_pointer_7 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_7 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_8 = *(unsigned __int8 **)(a1 + 192);
      loaded_word = *loaded_record_pointer_8;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
    }
    else
    {
      loaded_word = 0;
    }
  }
  else
  {
    loaded_word = *loaded_record_pointer_7;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
  }
  a2[8] = loaded_word;
  loaded_record_pointer_9 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_9 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_10 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_2 = *loaded_record_pointer_10;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
    }
    else
    {
      loaded_word_2 = 0;
    }
  }
  else
  {
    loaded_word_2 = *loaded_record_pointer_9;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
  }
  a2[9] = loaded_word_2;
  loaded_record_pointer_11 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_11 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_12 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_3 = *loaded_record_pointer_12;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
    }
    else
    {
      loaded_word_3 = 0;
    }
  }
  else
  {
    loaded_word_3 = *loaded_record_pointer_11;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
  }
  comparison_result = *a2 <= 0x1000000;
  a2[10] = loaded_word_3;
  a2[11] = -1;
  if ( comparison_result && (int)a2[1] <= 0x1000000 )
  {
    if ( a3 )
      *a3 = 4;
    if ( !a4 )
    {
      table_value = a2[8];
      if ( (table_value & 0x80u) != 0 )
        sub_140161A30(a1, (__int64)(a2 + 13), 2 << (table_value & 7), -1);
    }
    return 1;
  }
  else
  {
    *unused_written_slot = (uint64)(uintptr_t)("too large");
    return 0;
  }
}

//----- (0000000140160CA0) ----------------------------------------------------
__int64            sub_140160CA0(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *allocated_buffer;

  allocated_buffer = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, allocated_buffer, a4, 1) )
  {
    if ( a2 )
      *a2 = *allocated_buffer;
    if ( a3 )
      *a3 = allocated_buffer[1];
    free(allocated_buffer);
    return 1;
  }
  else
  {
    free(allocated_buffer);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

//----- (0000000140160D50) ----------------------------------------------------
__int64            sub_140160D50(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *allocated_buffer;

  allocated_buffer = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, allocated_buffer, a4, 1) )
  {
    if ( a2 )
      *a2 = *allocated_buffer;
    if ( a3 )
      *a3 = allocated_buffer[1];
    free(allocated_buffer);
    return 1;
  }
  else
  {
    free(allocated_buffer);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

//----- (0000000140160E00) ----------------------------------------------------
__int64            sub_140160E00(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  unsigned int comparison_operand;
  __int64 call_result;
  char *returned_pointer;
  int table_value;
  int table_value_2;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140160E00[35040];
#define scratch_buffer (*(int (*)[2])(void *)(sr_frame_140160E00 + 0)) /* [rsp+10h] */
#define Block (*(void * (*))(void *)(sr_frame_140160E00 + 8)) /* [rsp+18h] */
#define allocation_buffer (*(void * (*))(void *)(sr_frame_140160E00 + 16)) /* [rsp+20h] */
#define allocation_buffer_2 (*(void * (*))(void *)(sr_frame_140160E00 + 24)) /* [rsp+28h] */
#define unused_frame_slot_34928 (*(__int64 (*))(void *)(sr_frame_140160E00 + 34928)) /* [rsp+8880h] */
#define frame_word_at_35024 (*(unsigned int (*))(void *)(sr_frame_140160E00 + 35024)) /* [rsp+88E0h] */

  comparison_operand = frame_word_at_35024;
  crt_memset((void *)(uintptr_t)(scratch_buffer), 0, 0x8870u);
  call_result = sub_140160EF0(a1, scratch_buffer, a4, comparison_operand, 0);
  returned_pointer = (char *)call_result;
  if ( call_result == a1 || !call_result )
  {
    returned_pointer = nullptr; /* 0x140160E70: xor ebx, ebx */
    if ( Block )
      free(Block);
  }
  else
  {
    table_value = scratch_buffer[0];
    table_value_2 = scratch_buffer[1];
    *a2 = scratch_buffer[0];
    *a3 = table_value_2;
    if ( (comparison_operand & 0xFFFFFFFB) != 0 )
      returned_pointer = (char *)sub_14015D7E0(returned_pointer, 4, comparison_operand, table_value, table_value_2); /* 0x140160EE7: mov rbx, rax */
  }
  free(allocation_buffer_2);
  free(allocation_buffer);
  return (__int64)returned_pointer; /* 0x140160E95: mov rax, rbx */
}
#undef scratch_buffer
#undef Block
#undef allocation_buffer
#undef allocation_buffer_2
#undef unused_frame_slot_34928
#undef frame_word_at_35024

//----- (0000000140160EF0) ----------------------------------------------------
__int64            sub_140160EF0(__int64 a1, int *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 iteration_count;
  int loaded_word;
  int table_value;
  int scaled_index;
  int byte_count;
  unsigned __int64 byte_count_2;
  __int64 allocated_buffer;
  _WORD *loaded_record_pointer;
  __int64 client_static_tls_result;
       char *literal_text;
  int scaled_index_2;
  int state_address;
  __int64 cached_scaled_index;
  __int64 i;
  __int64 j;
  char *loaded_record_pointer_2;
  int int64_result;
  char input_byte;
  unsigned __int8 *loaded_record_pointer_3;
  int int64_result_2;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *record_pointer;
  unsigned __int8 *record_pointer_2;
  unsigned __int64 loaded_word_3;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_4;
  __int64 saved_loaded_word;
  unsigned __int8 loaded_word_5;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int64 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned __int8 loaded_word_7;
  unsigned __int8 *record_pointer_3;
  int saved_loaded_word_2;
  unsigned __int8 loaded_word_8;
  unsigned __int8 *loaded_record_pointer_7;
  __int64 table_value_2;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned __int64 loaded_word_10;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 loaded_word_11;
  int loaded_word_12;
  int integer_difference;
  __int64 loaded_word_13;
  int int64_result_3;
  unsigned __int8 *loaded_record_pointer_10;
  __int64 saved_loaded_word_3;
  int integer_difference_2;
  __int64 loaded_word_14;
  unsigned __int64 loaded_word_15;
  unsigned __int8 loaded_word_16;
  unsigned __int8 *loaded_record_pointer_11;
  int saved_loaded_word_4;
  int shifted_bits;
  unsigned __int8 loaded_word_17;
  unsigned __int8 *loaded_record_pointer_12;
  unsigned __int8 loaded_word_18;
  unsigned __int8 *loaded_record_pointer_13;
  int saved_loaded_word_5;
  int shifted_bits_2;
  unsigned __int8 loaded_word_19;
  unsigned __int8 *loaded_record_pointer_14;
  unsigned __int8 loaded_word_20;
  unsigned __int8 *loaded_record_pointer_15;
  int saved_loaded_word_6;
  int shifted_bits_3;
  int saved_shifted_bits;
  unsigned __int8 loaded_word_21;
  unsigned __int8 *record_pointer_4;
  unsigned __int8 *loaded_record_pointer_16;
  int saved_loaded_word_7;
  unsigned __int8 loaded_word_22;
  unsigned __int8 *loaded_record_pointer_17;
  int shifted_bits_4;
  int scaled_index_3;
  int scaled_index_4;
  char *loaded_record_pointer_18;
  char input_byte_2;
  char *loaded_record_pointer_19;
  int table_value_3;
  int masked_bits;
  int scaled_index_5;
  int integer_difference_3;
  char *record_byte_offset;
  int iteration_count_2;
  __int64 remaining_count;
  char *loaded_record_pointer_20;
  char input_byte_3;
  char *loaded_record_pointer_21;
  char *loaded_record_pointer_22;
  char input_byte_4;
  char *loaded_record_pointer_23;
  char *loaded_record_pointer_24;
  char input_byte_5;
  char *loaded_record_pointer_25;
  char integer_difference_4;
  __int64 selection_code;
  __int64 call_result;
  int scaled_index_6;
  int selection_flag;

  iteration_count = 0;
  selection_flag = 0;
  if ( *((_QWORD *)a2 + 1) )
  {
    scaled_index_2 = a2[1] * *a2;
    state_address = (a2[12] >> 2) & 7;
    if ( state_address != 3 || a5 )
    {
      cached_scaled_index = scaled_index_2;
      if ( state_address == 3 )
      {
        if ( scaled_index_2 > 0 )
        {
          for ( i = 0; i < scaled_index_2; ++i )
          {
            if ( *(_BYTE *)(i + *((_QWORD *)a2 + 3)) )
              *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * i) = *(_DWORD *)(a5 + 4 * i);
          }
        }
        goto LABEL_33;
      }
      if ( state_address != 2 )
      {
LABEL_33:
        crt_memcpy(*((__m128i **)a2 + 2), *((     __m128i **)a2 + 1), 4 * a2[1] * *a2);
        goto LABEL_34;
      }
    }
    else
    {
      cached_scaled_index = scaled_index_2;
    }
    if ( cached_scaled_index > 0 )
    {
      for ( j = 0; j < cached_scaled_index; ++j )
      {
        if ( *(_BYTE *)(j + *((_QWORD *)a2 + 3)) )
          *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * j) = *(_DWORD *)(*((_QWORD *)a2 + 2) + 4 * j);
      }
    }
    goto LABEL_33;
  }
  if ( !(unsigned int)sub_140160930(a1, a2, a3, 0) )
    return 0;
  loaded_word = *a2;
  table_value = a2[1];
  if ( *a2 < 0 )
    goto LABEL_16;
  if ( loaded_word )
  {
    if ( 0x7FFFFFFF / loaded_word < 4 )
      goto LABEL_16;
    scaled_index = 4 * loaded_word;
    if ( (loaded_word & 0x20000000) != 0 )
      goto LABEL_16;
  }
  else
  {
    scaled_index = 0;
  }
  if ( table_value < 0 || table_value && scaled_index > 0x7FFFFFFF / table_value )
  {
LABEL_16:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "too large";
    goto LABEL_186;
  }
  byte_count = table_value * loaded_word;
  byte_count_2 = 4 * byte_count;
  *((_QWORD *)a2 + 1) = sr_path_malloc(byte_count_2);
  *((_QWORD *)a2 + 2) = sr_path_malloc(byte_count_2);
  allocated_buffer = sr_path_malloc(byte_count);
  loaded_record_pointer = *((_WORD **)a2 + 1);
  *((_QWORD *)a2 + 3) = allocated_buffer;
  if ( !loaded_record_pointer || !*((_QWORD *)a2 + 2) || !allocated_buffer )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
LABEL_186:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(loaded_record_pointer), 0, byte_count_2);
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 2)), 0, byte_count_2);
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, byte_count);
  selection_flag = 1;
LABEL_34:
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, a2[1] * *a2);
  while ( 1 )
  {
    loaded_record_pointer_2 = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_185;
      int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( int64_result )
      {
        *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      loaded_record_pointer_2 = *(char **)(a1 + 192);
    }
    input_byte = *loaded_record_pointer_2;
    loaded_record_pointer_3 = (unsigned __int8 *)(loaded_record_pointer_2 + 1);
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3);
    if ( input_byte != 33 )
      break;
    if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_78;
      int64_result_2 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( int64_result_2 )
      {
        *(_QWORD *)(a1 + 200) = int64_result_2 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
    }
    loaded_word_2 = *loaded_record_pointer_3;
    record_pointer = loaded_record_pointer_3 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer);
    record_pointer_2 = record_pointer;
    if ( loaded_word_2 != 0xF9 )
      goto LABEL_78;
    loaded_word_3 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)record_pointer >= loaded_word_3 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
        loaded_word_3 = *(_QWORD *)(a1 + 200);
        loaded_word_4 = *loaded_record_pointer_4;
        record_pointer_2 = loaded_record_pointer_4 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        loaded_word_4 = 0;
      }
    }
    else
    {
      loaded_word_4 = *record_pointer;
      record_pointer_2 = record_pointer + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer + 1);
    }
    saved_loaded_word = loaded_word_4;
    if ( loaded_word_4 == 4 )
    {
      if ( (unsigned __int64)record_pointer_2 >= loaded_word_3 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_5 = *(unsigned __int8 **)(a1 + 192);
          loaded_word_5 = *loaded_record_pointer_5;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
        }
        else
        {
          loaded_word_5 = 0;
        }
      }
      else
      {
        loaded_word_5 = *record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_2 + 1);
      }
      a2[12] = loaded_word_5;
      loaded_word_6 = *(_QWORD *)(a1 + 200);
      loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_6 >= loaded_word_6 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          saved_loaded_word_2 = 0;
LABEL_66:
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_7 = *(unsigned __int8 **)(a1 + 192);
            loaded_word_8 = *loaded_record_pointer_7;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
          }
          else
          {
            loaded_word_8 = 0;
          }
          goto LABEL_69;
        }
        stbi_refill_buffer(a1);
        loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
        loaded_word_6 = *(_QWORD *)(a1 + 200);
      }
      loaded_word_7 = *loaded_record_pointer_6;
      record_pointer_3 = loaded_record_pointer_6 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_3);
      saved_loaded_word_2 = loaded_word_7;
      if ( (unsigned __int64)record_pointer_3 >= loaded_word_6 )
        goto LABEL_66;
      loaded_word_8 = *record_pointer_3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_3 + 1);
LABEL_69:
      a2[8730] = 10 * (saved_loaded_word_2 + (loaded_word_8 << 8));
      table_value_2 = a2[11];
      if ( (int)table_value_2 >= 0 )
        HIBYTE(a2[table_value_2 + 13]) = -1;
      if ( (a2[12] & 1) != 0 )
      {
        loaded_record_pointer_8 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)loaded_record_pointer_8 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_9 = *(unsigned __int8 **)(a1 + 192);
            loaded_word_9 = *loaded_record_pointer_9;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
          }
          else
          {
            loaded_word_9 = 0;
          }
        }
        else
        {
          loaded_word_9 = *loaded_record_pointer_8;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
        }
        a2[11] = loaded_word_9;
        HIBYTE(a2[loaded_word_9 + 13]) = 0;
      }
      else if ( *(_QWORD *)(a1 + 16) && (loaded_word_12 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), loaded_word_12 < 1) )
      {
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(1 - loaded_word_12));
        a2[11] = -1;
      }
      else
      {
        ++*(_QWORD *)(a1 + 192);
        a2[11] = -1;
      }
      while ( 1 )
      {
LABEL_78:
        loaded_word_10 = *(_QWORD *)(a1 + 200);
        buffer_cursor = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)buffer_cursor >= loaded_word_10 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            int64_result_3 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( int64_result_3 )
            {
              loaded_word_10 = int64_result_3 + a1 + 56;
              *(_QWORD *)(a1 + 200) = loaded_word_10;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
              loaded_word_10 = *(_QWORD *)(a1 + 200);
            }
            loaded_record_pointer_10 = *(unsigned __int8 **)(a1 + 192);
            loaded_word_11 = *loaded_record_pointer_10;
            buffer_cursor = loaded_record_pointer_10 + 1;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
          }
          else
          {
            loaded_word_11 = 0;
          }
        }
        else
        {
          loaded_word_11 = *buffer_cursor++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor);
        }
        saved_loaded_word_3 = loaded_word_11;
        if ( !loaded_word_11 )
          break;
        if ( *(_QWORD *)(a1 + 16) && (integer_difference_2 = loaded_word_10 - (_DWORD)buffer_cursor, (int)loaded_word_10 - (int)buffer_cursor < (int)saved_loaded_word_3) )
        {
          loaded_word_14 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = loaded_word_10;
          (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_14, (unsigned int)(saved_loaded_word_3 - integer_difference_2));
        }
        else
        {
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&buffer_cursor[saved_loaded_word_3]);
        }
      }
    }
    else if ( loaded_word_4 )
    {
      if ( *(_QWORD *)(a1 + 16) && (integer_difference = loaded_word_3 - (_DWORD)record_pointer_2, (int)loaded_word_3 - (int)record_pointer_2 < (int)saved_loaded_word) )
      {
        loaded_word_13 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = loaded_word_3;
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_13, (unsigned int)(saved_loaded_word - integer_difference));
      }
      else
      {
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&record_pointer_2[saved_loaded_word]);
      }
    }
  }
  if ( input_byte != 44 )
  {
    if ( input_byte == 59 )
      return a1;
LABEL_185:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "unknown code";
    goto LABEL_186;
  }
  loaded_word_15 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer_3 >= loaded_word_15 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_15 = *(_QWORD *)(a1 + 200);
      goto LABEL_106;
    }
    saved_loaded_word_4 = 0;
    shifted_bits = 0;
LABEL_109:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_11 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_15 = *(_QWORD *)(a1 + 200);
      goto LABEL_111;
    }
LABEL_116:
    saved_loaded_word_5 = 0;
    shifted_bits_2 = 0;
    goto LABEL_117;
  }
LABEL_106:
  loaded_word_16 = *loaded_record_pointer_3;
  loaded_record_pointer_11 = loaded_record_pointer_3 + 1;
  saved_loaded_word_4 = loaded_word_16;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11);
  shifted_bits = loaded_word_16;
  if ( (unsigned __int64)loaded_record_pointer_11 >= loaded_word_15 )
    goto LABEL_109;
LABEL_111:
  loaded_word_17 = *loaded_record_pointer_11;
  loaded_record_pointer_12 = loaded_record_pointer_11 + 1;
  shifted_bits = saved_loaded_word_4 + (loaded_word_17 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12);
  if ( (unsigned __int64)loaded_record_pointer_12 >= loaded_word_15 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_116;
    stbi_refill_buffer(a1);
    loaded_record_pointer_12 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_15 = *(_QWORD *)(a1 + 200);
  }
  loaded_word_18 = *loaded_record_pointer_12;
  loaded_record_pointer_13 = loaded_record_pointer_12 + 1;
  saved_loaded_word_5 = loaded_word_18;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_13);
  shifted_bits_2 = loaded_word_18;
  if ( (unsigned __int64)loaded_record_pointer_13 >= loaded_word_15 )
  {
LABEL_117:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_13 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_15 = *(_QWORD *)(a1 + 200);
      goto LABEL_119;
    }
LABEL_124:
    saved_loaded_word_6 = 0;
    shifted_bits_3 = 0;
LABEL_125:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_15 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_15 = *(_QWORD *)(a1 + 200);
      goto LABEL_127;
    }
    saved_shifted_bits = shifted_bits_3;
    goto LABEL_130;
  }
LABEL_119:
  loaded_word_19 = *loaded_record_pointer_13;
  loaded_record_pointer_14 = loaded_record_pointer_13 + 1;
  shifted_bits_2 = saved_loaded_word_5 + (loaded_word_19 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_14);
  if ( (unsigned __int64)loaded_record_pointer_14 < loaded_word_15 )
    goto LABEL_122;
  if ( !*(_DWORD *)(a1 + 48) )
    goto LABEL_124;
  stbi_refill_buffer(a1);
  loaded_record_pointer_14 = *(unsigned __int8 **)(a1 + 192);
  loaded_word_15 = *(_QWORD *)(a1 + 200);
LABEL_122:
  loaded_word_20 = *loaded_record_pointer_14;
  loaded_record_pointer_15 = loaded_record_pointer_14 + 1;
  saved_loaded_word_6 = loaded_word_20;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_15);
  shifted_bits_3 = loaded_word_20;
  if ( (unsigned __int64)loaded_record_pointer_15 >= loaded_word_15 )
    goto LABEL_125;
LABEL_127:
  shifted_bits_3 = saved_loaded_word_6 + (*loaded_record_pointer_15 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_15 + 1);
  saved_shifted_bits = shifted_bits_3;
  if ( (unsigned __int64)(loaded_record_pointer_15 + 1) < loaded_word_15 )
  {
    loaded_word_21 = loaded_record_pointer_15[1];
    record_pointer_4 = loaded_record_pointer_15 + 2;
    goto LABEL_132;
  }
LABEL_130:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer_16 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_15 = *(_QWORD *)(a1 + 200);
    loaded_word_21 = *loaded_record_pointer_16;
    record_pointer_4 = loaded_record_pointer_16 + 1;
LABEL_132:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_4);
    saved_loaded_word_7 = loaded_word_21;
    if ( (unsigned __int64)record_pointer_4 < loaded_word_15 )
    {
      loaded_word_22 = *record_pointer_4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_4 + 1);
      goto LABEL_138;
    }
  }
  else
  {
    saved_loaded_word_7 = 0;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer_17 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_22 = *loaded_record_pointer_17;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_17 + 1);
  }
  else
  {
    loaded_word_22 = 0;
  }
LABEL_138:
  shifted_bits_4 = saved_loaded_word_7 + (loaded_word_22 << 8);
  if ( shifted_bits + saved_shifted_bits > *a2 || shifted_bits_4 + shifted_bits_2 > a2[1] )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad Image Descriptor";
    goto LABEL_186;
  }
  scaled_index_3 = 4 * *a2;
  a2[8729] = scaled_index_3;
  a2[8723] = 4 * shifted_bits;
  a2[8725] = 4 * shifted_bits + 4 * saved_shifted_bits;
  scaled_index_4 = shifted_bits_2 * scaled_index_3;
  a2[8727] = 4 * shifted_bits;
  a2[8724] = shifted_bits_2 * scaled_index_3;
  if ( !shifted_bits_3 )
    scaled_index_4 = shifted_bits_4 * scaled_index_3 + shifted_bits_2 * scaled_index_3;
  a2[8726] = shifted_bits_4 * scaled_index_3 + shifted_bits_2 * scaled_index_3;
  a2[8728] = scaled_index_4;
  loaded_record_pointer_18 = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_18 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_19 = *(char **)(a1 + 192);
      input_byte_2 = *loaded_record_pointer_19;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_19 + 1);
    }
    else
    {
      input_byte_2 = 0;
    }
  }
  else
  {
    input_byte_2 = *loaded_record_pointer_18;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_18 + 1);
  }
  table_value_3 = a2[8729];
  a2[8722] = (unsigned __int8)input_byte_2;
  masked_bits = input_byte_2 & 0x40;
  scaled_index_5 = 8 * table_value_3;
  if ( !masked_bits )
    scaled_index_5 = table_value_3;
  a2[8721] = scaled_index_5;
  a2[8720] = masked_bits != 0 ? 3 : 0;
  if ( input_byte_2 >= 0 )
  {
    if ( *((char *)a2 + 32) >= 0 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "missing color table";
      goto LABEL_186;
    }
    selection_code = 13;
  }
  else
  {
    if ( (a2[12] & 1) != 0 )
      integer_difference_3 = a2[11];
    else
      integer_difference_3 = -1;
    record_byte_offset = (char *)a2 + 1077;
    iteration_count_2 = 0;
    remaining_count = 2 << (input_byte_2 & 7);
    do
    {
      loaded_record_pointer_20 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_20 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_21 = *(char **)(a1 + 192);
          input_byte_3 = *loaded_record_pointer_21;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_21 + 1);
        }
        else
        {
          input_byte_3 = 0;
        }
      }
      else
      {
        input_byte_3 = *loaded_record_pointer_20;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_20 + 1);
      }
      record_byte_offset[1] = input_byte_3;
      loaded_record_pointer_22 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_22 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_23 = *(char **)(a1 + 192);
          input_byte_4 = *loaded_record_pointer_23;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_23 + 1);
        }
        else
        {
          input_byte_4 = 0;
        }
      }
      else
      {
        input_byte_4 = *loaded_record_pointer_22;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_22 + 1);
      }
      *record_byte_offset = input_byte_4;
      loaded_record_pointer_24 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_24 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_25 = *(char **)(a1 + 192);
          input_byte_5 = *loaded_record_pointer_25;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_25 + 1);
        }
        else
        {
          input_byte_5 = 0;
        }
      }
      else
      {
        input_byte_5 = *loaded_record_pointer_24;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_24 + 1);
      }
      *(record_byte_offset - 1) = input_byte_5;
      integer_difference_4 = -1;
      if ( integer_difference_3 == iteration_count_2 )
        integer_difference_4 = 0;
      ++iteration_count_2;
      record_byte_offset[2] = integer_difference_4;
      record_byte_offset += 4;
      --remaining_count;
    }
    while ( remaining_count );
    selection_code = 269;
  }
  *((_QWORD *)a2 + 4359) = (uint64)(uintptr_t)(&a2[selection_code]);
  call_result = sub_14016B5F0(a1, (__int64)a2);
  if ( !call_result )
    return 0;
  if ( selection_flag )
  {
    if ( a2[9] > 0 )
    {
      scaled_index_6 = a2[1] * *a2;
      if ( scaled_index_6 > 0 )
      {
        do
        {
          if ( !*(_BYTE *)(iteration_count + *((_QWORD *)a2 + 3)) )
          {
            HIBYTE(a2[a2[9] + 13]) = -1;
            *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * iteration_count) = a2[a2[9] + 13];
          }
          ++iteration_count;
        }
        while ( iteration_count < scaled_index_6 );
      }
    }
  }
  return call_result;
}

//----- (0000000140161A30) ----------------------------------------------------
void            sub_140161A30(__int64 a1, __int64 a2, int a3, int a4)
{
  int iteration_count;
  __int64 remaining_count;
  _BYTE *record_byte_offset;
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char *loaded_record_pointer_3;
  char input_byte_2;
  char *loaded_record_pointer_4;
  char *loaded_record_pointer_5;
  char input_byte_3;
  char *loaded_record_pointer_6;
  char integer_difference;

  if ( a3 > 0 )
  {
    iteration_count = 0;
    remaining_count = a3;
    record_byte_offset = (_BYTE *)(a2 + 1);
    do
    {
      loaded_record_pointer = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_2 = *(char **)(a1 + 192);
          input_byte = *loaded_record_pointer_2;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        }
        else
        {
          input_byte = 0;
        }
      }
      else
      {
        input_byte = *loaded_record_pointer;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      }
      record_byte_offset[1] = input_byte;
      loaded_record_pointer_3 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_4 = *(char **)(a1 + 192);
          input_byte_2 = *loaded_record_pointer_4;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
        }
        else
        {
          input_byte_2 = 0;
        }
      }
      else
      {
        input_byte_2 = *loaded_record_pointer_3;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
      }
      *record_byte_offset = input_byte_2;
      loaded_record_pointer_5 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_6 = *(char **)(a1 + 192);
          input_byte_3 = *loaded_record_pointer_6;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
        }
        else
        {
          input_byte_3 = 0;
        }
      }
      else
      {
        input_byte_3 = *loaded_record_pointer_5;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
      }
      *(record_byte_offset - 1) = input_byte_3;
      integer_difference = -1;
      if ( a4 == iteration_count )
        integer_difference = 0;
      ++iteration_count;
      record_byte_offset[2] = integer_difference;
      record_byte_offset += 4;
      --remaining_count;
    }
    while ( remaining_count );
  }
}

//----- (0000000140161B80) ----------------------------------------------------
__int64            sub_140161B80(_QWORD *a1)
{
  __int64 result;

  result = sub_140161BB0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}

//----- (0000000140161BB0) ----------------------------------------------------
__int64            sub_140161BB0(__int64 a1)
{
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  char input_byte_2;
  char *loaded_record_pointer_3;
  char input_byte_3;
  char *loaded_record_pointer_4;
  char input_byte_4;
  char *loaded_record_pointer_5;
  char input_byte_5;
  char *loaded_record_pointer_6;
  char input_byte_6;

  loaded_record_pointer = *(char **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
  }
  input_byte = *loaded_record_pointer;
  loaded_record_pointer_2 = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
  if ( input_byte == 71 )
  {
    if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
    }
    input_byte_2 = *loaded_record_pointer_2;
    loaded_record_pointer_3 = loaded_record_pointer_2 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3);
    if ( input_byte_2 == 73 )
    {
      if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          return 0;
        stbi_refill_buffer(a1);
        loaded_record_pointer_3 = *(char **)(a1 + 192);
      }
      input_byte_3 = *loaded_record_pointer_3;
      loaded_record_pointer_4 = loaded_record_pointer_3 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4);
      if ( input_byte_3 == 70 )
      {
        if ( (unsigned __int64)loaded_record_pointer_4 >= *(_QWORD *)(a1 + 200) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            return 0;
          stbi_refill_buffer(a1);
          loaded_record_pointer_4 = *(char **)(a1 + 192);
        }
        input_byte_4 = *loaded_record_pointer_4;
        loaded_record_pointer_5 = loaded_record_pointer_4 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5);
        if ( input_byte_4 == 56 )
        {
          if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            stbi_refill_buffer(a1);
            loaded_record_pointer_5 = *(char **)(a1 + 192);
          }
          input_byte_5 = *loaded_record_pointer_5;
          loaded_record_pointer_6 = loaded_record_pointer_5 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6);
          if ( input_byte_5 != 57 && input_byte_5 != 55 )
            return 0;
          if ( (unsigned __int64)loaded_record_pointer_6 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            stbi_refill_buffer(a1);
            loaded_record_pointer_6 = *(char **)(a1 + 192);
          }
          input_byte_6 = *loaded_record_pointer_6;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
          if ( input_byte_6 == 97 )
            return 1;
        }
      }
    }
  }
  return 0;
}

//----- (0000000140161D20) ----------------------------------------------------
__int64            sub_140161D20(_QWORD *a1)
{
  int saved_loaded_word;
  __int64 loaded_word;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_2;
  __int64 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_4;
  __int64 result;
  __int64 loaded_word_5;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 loaded_word_6;
  int int64_result;
  unsigned __int8 *loaded_record_pointer_6;
  int loaded_word_7;

  while ( *((_DWORD *)a1 + 4619) )
  {
    saved_loaded_word = 0;
LABEL_25:
    loaded_word_7 = *((_DWORD *)a1 + 4617);
    *((_DWORD *)a1 + 4616) |= saved_loaded_word << (24 - loaded_word_7);
    result = (unsigned int)(loaded_word_7 + 8);
    *((_DWORD *)a1 + 4617) = result;
    if ( (int)result > 24 )
      return result;
  }
  loaded_word = *a1;
  loaded_record_pointer = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(loaded_word + 48) )
    {
      stbi_refill_buffer(*a1);
      loaded_record_pointer_2 = *(unsigned __int8 **)(loaded_word + 192);
      loaded_word_2 = *loaded_record_pointer_2;
      *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    }
    else
    {
      loaded_word_2 = 0;
    }
  }
  else
  {
    loaded_word_2 = *loaded_record_pointer;
    *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  saved_loaded_word = loaded_word_2;
  if ( loaded_word_2 != 255 )
    goto LABEL_25;
  loaded_word_3 = *a1;
  loaded_record_pointer_3 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(loaded_word_3 + 48) )
    {
      stbi_refill_buffer(*a1);
      loaded_record_pointer_4 = *(unsigned __int8 **)(loaded_word_3 + 192);
      loaded_word_4 = *loaded_record_pointer_4;
      *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
    }
    else
    {
      loaded_word_4 = 0;
    }
  }
  else
  {
    loaded_word_4 = *loaded_record_pointer_3;
    *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
  }
  result = loaded_word_4;
  if ( loaded_word_4 == 255 )
  {
    do
    {
      loaded_word_5 = *a1;
      loaded_record_pointer_5 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(*a1 + 200LL) )
      {
        if ( *(_DWORD *)(loaded_word_5 + 48) )
        {
          int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(loaded_word_5 + 16))(
                  *(_QWORD *)(loaded_word_5 + 40),
                  loaded_word_5 + 56,
                  *(unsigned int *)(loaded_word_5 + 52));
          *(_DWORD *)(loaded_word_5 + 184) += *(_DWORD *)(loaded_word_5 + 192) - *(_DWORD *)(loaded_word_5 + 208);
          *(_QWORD *)(loaded_word_5 + 192) = loaded_word_5 + 56;
          if ( int64_result )
          {
            *(_QWORD *)(loaded_word_5 + 200) = int64_result + loaded_word_5 + 56;
          }
          else
          {
            *(_DWORD *)(loaded_word_5 + 48) = 0;
            *(_QWORD *)(loaded_word_5 + 200) = loaded_word_5 + 57;
            *(_BYTE *)(loaded_word_5 + 56) = 0;
          }
          loaded_record_pointer_6 = *(unsigned __int8 **)(loaded_word_5 + 192);
          loaded_word_6 = *loaded_record_pointer_6;
          *(_QWORD *)(loaded_word_5 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
        }
        else
        {
          loaded_word_6 = 0;
        }
      }
      else
      {
        loaded_word_6 = *loaded_record_pointer_5;
        *(_QWORD *)(loaded_word_5 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
      }
      result = loaded_word_6;
    }
    while ( loaded_word_6 == 255 );
  }
  if ( !(_DWORD)result )
    goto LABEL_25;
  *((_BYTE *)a1 + 18472) = result;
  *((_DWORD *)a1 + 4619) = 1;
  return result;
}

//----- (0000000140161F00) ----------------------------------------------------
__int64            sub_140161F00(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 result;
  float component_delta;

  result = a2[3];
  if ( (_BYTE)result )
  {
    component_delta = sub_14020B23C(1.0, result - 136); /* 0x140161F3A: cvtsd2ss xmm2, xmm0 */
    if ( a3 > 2 )
    {
      *(float *)a1 = (float)*a2 * component_delta;
      *(float *)(a1 + 4) = (float)a2[1] * component_delta;
      result = a2[2];
      *(float *)(a1 + 8) = (float)a2[2] * component_delta;
      if ( a3 == 4 )
        *(_DWORD *)(a1 + 12) = 1065353216;
    }
    else
    {
      result = *a2;
      *(float *)a1 = (float)((float)(*a2 + a2[1] + a2[2]) * component_delta) * 0.33333334;
      if ( a3 == 2 )
        *(_DWORD *)(a1 + 4) = 1065353216;
    }
    return result;
  }
  if ( a3 == 1 )
  {
LABEL_14:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a3 == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1065353216;
    goto LABEL_14;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 )
      return result;
    *(_DWORD *)(a1 + 12) = 1065353216;
  }
  *(_QWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return 0;
}

//----- (0000000140162030) ----------------------------------------------------
__int64            sub_140162030(__int64 a1, __int64 a2)
{
  char *loaded_record_pointer;
  int iteration_count;
  char input_byte;
  char *loaded_record_pointer_2;
  __int64 iteration_count_2;
  char *loaded_record_pointer_3;
  int int64_result;
  char *loaded_record_pointer_4;
  char *loaded_record_pointer_5;
  unsigned __int64 loaded_word;
  char input_byte_2;

  loaded_record_pointer = *(char **)(a1 + 192);
  iteration_count = 0;
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      input_byte = *loaded_record_pointer_2;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    }
    else
    {
      input_byte = 0;
    }
  }
  else
  {
    input_byte = *loaded_record_pointer;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  iteration_count_2 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_11;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_11:
    if ( input_byte == 10 )
      break;
    *(_BYTE *)(iteration_count_2 + a2) = input_byte;
    ++iteration_count;
    if ( ++iteration_count_2 == 1023 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_25;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          break;
        loaded_record_pointer_5 = *(char **)(a1 + 192);
        loaded_word = *(_QWORD *)(a1 + 200);
LABEL_26:
        if ( (unsigned __int64)loaded_record_pointer_5 < loaded_word )
        {
LABEL_29:
          input_byte_2 = *loaded_record_pointer_5;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
          if ( input_byte_2 == 10 )
            goto LABEL_30;
        }
        else if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_5 = *(char **)(a1 + 192);
          goto LABEL_29;
        }
      }
      if ( !*(_DWORD *)(a1 + 48) )
        break;
LABEL_25:
      loaded_record_pointer_5 = *(char **)(a1 + 192);
      loaded_word = *(_QWORD *)(a1 + 200);
      if ( (unsigned __int64)loaded_record_pointer_5 >= loaded_word )
        break;
      goto LABEL_26;
    }
    loaded_record_pointer_3 = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( int64_result )
        {
          *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        loaded_record_pointer_4 = *(char **)(a1 + 192);
        input_byte = *loaded_record_pointer_4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        input_byte = 0;
      }
    }
    else
    {
      input_byte = *loaded_record_pointer_3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
  }
LABEL_30:
  *(_BYTE *)(iteration_count + a2) = 0;
  return a2;
}

//----- (0000000140162220) ----------------------------------------------------
__int64            sub_140162220(_QWORD *a1, char *a2, char *a3, char *a4)
{
  int selection_flag;
  char *unused_written_slot;
  char *unused_written_slot_2;
  char *unused_written_slot_3;
       char *left_text;
  int masked_bits;
  _BYTE *buffer_cursor;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162220[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140162220 + 0)) /* [rsp+0h] */
#define saved_left_text (*(_BYTE * (*))(void *)(sr_frame_140162220 + 32)) /* [rsp+20h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140162220 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_140162220 + 48)) /* [rsp+30h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_140162220 + 1072)) /* [rsp+430h] */

  selection_flag = 0;
  unused_written_slot = &callee_output_word;
  unused_written_slot_2 = &callee_output_word;
  unused_written_slot_3 = &callee_output_word;
  if ( a2 )
    unused_written_slot = a2;
  if ( a3 )
    unused_written_slot_2 = a3;
  if ( a4 )
    unused_written_slot_3 = a4;
  if ( (unsigned int)sub_140162BB0((__int64)a1) )
  {
    left_text = (     char *)sub_140162030((__int64)a1, (__int64)scratch_buffer);
    saved_left_text = left_text;
    if ( !*left_text )
      goto LABEL_19;
    do
    {
      if ( !strcmp_sr(left_text, "FORMAT=32-bit_rle_rgbe") )
        selection_flag = 1;
      left_text = (     char *)sub_140162030((__int64)a1, (__int64)scratch_buffer);
      saved_left_text = left_text;
    }
    while ( *left_text );
    if ( !selection_flag )
      goto LABEL_19;
    saved_left_text = (_BYTE *)sub_140162030((__int64)a1, (__int64)scratch_buffer);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(saved_left_text), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_19;
    saved_left_text += 3;
    masked_bits = sub_14023CCCC((__int64)saved_left_text, (__int64 *)&saved_left_text, 0xAu);
    buffer_cursor = saved_left_text;
    for ( *(_DWORD *)unused_written_slot_2 = masked_bits; *buffer_cursor == 32; saved_left_text = buffer_cursor )
      ++buffer_cursor;
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(buffer_cursor), (const char *)(uintptr_t)("+X "), 3) )
    {
      saved_left_text += 3;
      *(_DWORD *)unused_written_slot = sub_14023CCCC((__int64)saved_left_text, nullptr, 0xAu);
      *(_DWORD *)unused_written_slot_3 = 3;
    }
    else
    {
LABEL_19:
      a1[24] = a1[26];
      a1[25] = a1[27];
    }
  }
  else
  {
    a1[24] = a1[26];
    a1[25] = a1[27];
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef saved_left_text
#undef callee_output_word
#undef scratch_buffer
#undef unused_frame_slot_1072

//----- (00000001401623E0) ----------------------------------------------------
__int64            sub_1401623E0(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4, unsigned int a5)
{
  int selection_flag;
       char *left_text;
  __int64 element_index;
  char table_value;
       char *left_text_2;
  __int32 masked_bits;
  _BYTE *buffer_cursor;
  int saved_masked_bits;
  __int64 call_result;
  __int64 packed_word_bits;
  char *allocated_buffer;
  char *text_cursor;
  unsigned __int64 loaded_word;
  unsigned __int8 loaded_word_2;
  int saved_loaded_word;
  unsigned __int8 loaded_word_3;
  int saved_loaded_word_2;
  char input_byte;
  char *loaded_record_pointer;
  int shifted_bits;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_2;
  __int64 element_index_2;
  int running_total;
  __int64 running_total_2;
  unsigned int integer_difference;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 loaded_word_5;
  char *byte_cursor;
  char input_byte_2;
  char *loaded_record_pointer_4;
  unsigned __int8 integer_sum;
  char *record_byte_offset;
  __int64 remaining_count;
  __int64 saved_loaded_word_3;
  char *record_byte_offset_2;
  __int64 remaining_count_2;
  char *loaded_record_pointer_5;
  char input_byte_3;
  char *loaded_record_pointer_6;
  unsigned __int8 *record_byte_offset_3;
  __int64 remaining_count_3;
  int cached_packed_word_bits;
  __int64 scaled_index;
  char *running_total_3;
  __int64 client_static_tls_result;
       char *literal_text;
  char input_byte_4;
  char *loaded_record_pointer_7;
  int iteration_count;
  int iteration_count_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401623E0[1136];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 8)) /* [rsp+0h] */
#define running_total_4 (*(int (*))(void *)(sr_frame_1401623E0 + 56)) /* [rsp+30h] */
#define saved_left_text (*(_BYTE * (*))(void *)(sr_frame_1401623E0 + 64)) /* [rsp+38h] */
#define Block (*(void * (*))(void *)(sr_frame_1401623E0 + 72)) /* [rsp+40h] */
#define packed_vector (*(__m128i (*))(void *)(sr_frame_1401623E0 + 80)) /* [rsp+48h] */
#define saved_packed_word_bits (*(__int64 (*))(void *)(sr_frame_1401623E0 + 96)) /* [rsp+58h] */
#define scratch_buffer (*(_BYTE (*)[1024])(void *)(sr_frame_1401623E0 + 104)) /* [rsp+60h] */
#define unused_frame_slot_1128 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 1128)) /* [rsp+460h] */

  selection_flag = 0;
  left_text = (     char *)sub_140162030(a1, (__int64)scratch_buffer);
  if ( !strcmp_sr(left_text, "#?RADIANCE") )
  {
LABEL_5:
    left_text_2 = (     char *)sub_140162030(a1, (__int64)scratch_buffer);
    saved_left_text = left_text_2;
    if ( !*left_text_2 )
      goto LABEL_111;
    do
    {
      if ( !strcmp_sr(left_text_2, "FORMAT=32-bit_rle_rgbe") )
        selection_flag = 1;
      left_text_2 = (     char *)sub_140162030(a1, (__int64)scratch_buffer);
      saved_left_text = left_text_2;
    }
    while ( *left_text_2 );
    if ( !selection_flag )
    {
LABEL_111:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported format");
      return 0; /* 0x140162503: xor eax, eax */
    }
    saved_left_text = (_BYTE *)sub_140162030(a1, (__int64)scratch_buffer);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(saved_left_text), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_11;
    saved_left_text += 3;
    masked_bits = sub_14023CCCC((__int64)saved_left_text, (__int64 *)&saved_left_text, 0xAu);
    buffer_cursor = saved_left_text;
    saved_masked_bits = masked_bits;
    for ( SR_VEC_LANES(128, packed_vector, i32)[2] = masked_bits; *buffer_cursor == 32; saved_left_text = buffer_cursor )
      ++buffer_cursor;
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(buffer_cursor), (const char *)(uintptr_t)("+X "), 3) )
    {
LABEL_11:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported data layout");
      return 0; /* 0x14016252D: xor eax, eax */
    }
    saved_left_text += 3;
    call_result = (unsigned int)sub_14023CCCC((__int64)saved_left_text, nullptr, 0xAu);
    if ( saved_masked_bits > 0x1000000 || (int)call_result > 0x1000000 )
      goto LABEL_110;
    *a2 = call_result;
    packed_word_bits = 3;
    *a3 = saved_masked_bits;
    if ( a4 )
      *a4 = 3;
    if ( a5 )
      packed_word_bits = a5;
    if ( (saved_packed_word_bits = packed_word_bits, (int)call_result < 0)
      || saved_masked_bits < 0
      || saved_masked_bits && (int)call_result > 0x7FFFFFFF / saved_masked_bits
      || saved_masked_bits * (int)call_result < 0
      || (int)packed_word_bits < 0
      || saved_masked_bits * (int)call_result > 0x7FFFFFFF / (int)packed_word_bits
      || (SR_VEC_LANES(128, packed_vector, i32)[0] = call_result * packed_word_bits, (unsigned int)(saved_masked_bits * call_result * packed_word_bits) >= 0x20000000) )
    {
LABEL_110:
      client_static_tls_result = sr_client_static_tls();
      literal_text = "too large";
LABEL_94:
      *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
      return 0; /* 0x1401629F8: xor eax, eax */
    }
    Block = (void *)sub_140167010(call_result, saved_masked_bits, packed_word_bits, 4, 0);
    if ( !Block )
    {
LABEL_93:
      client_static_tls_result = sr_client_static_tls();
      literal_text = "outofmem";
      goto LABEL_94;
    }
    if ( (unsigned int)(call_result - 8) > 0x7FF7 )
    {
      iteration_count = 0;
      goto LABEL_105;
    }
    allocated_buffer = nullptr;
    SR_VEC_LANES(128, packed_vector, i32)[1] = 0;
    if ( saved_masked_bits <= 0 )
      return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
    running_total_4 = 0;
LABEL_34:
    text_cursor = *(char **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)text_cursor >= loaded_word )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        loaded_word_2 = 0;
        saved_loaded_word = 0;
LABEL_40:
        if ( !*(_DWORD *)(a1 + 48) )
        {
          loaded_word_3 = 0;
          saved_loaded_word_2 = 0;
          goto LABEL_45;
        }
        stbi_refill_buffer(a1);
        text_cursor = *(char **)(a1 + 192);
        loaded_word = *(_QWORD *)(a1 + 200);
LABEL_42:
        loaded_word_3 = *text_cursor++;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor);
        saved_loaded_word_2 = loaded_word_3;
        if ( (unsigned __int64)text_cursor < loaded_word )
        {
          input_byte = *text_cursor++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor);
LABEL_48:
          if ( saved_loaded_word != 2 || saved_loaded_word_2 != 2 || input_byte < 0 )
          {
            LOBYTE(running_total_4) = loaded_word_2;
            BYTE1(running_total_4) = loaded_word_3;
            BYTE2(running_total_4) = input_byte;
            if ( (unsigned __int64)text_cursor >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                loaded_record_pointer_7 = *(char **)(a1 + 192);
                input_byte_4 = *loaded_record_pointer_7;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
              }
              else
              {
                input_byte_4 = 0;
              }
            }
            else
            {
              input_byte_4 = *text_cursor;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor + 1);
            }
            LODWORD(packed_word_bits) = saved_packed_word_bits;
            HIBYTE(running_total_4) = input_byte_4;
            sub_140161F00((__int64)Block, (unsigned __int8 *)&running_total_4, saved_packed_word_bits);
            iteration_count = 0;
            free(allocated_buffer);
            iteration_count_2 = 1;
            while ( 1 )
            {
              sub_140160860(a1, &packed_vector, 4);
              sub_140161F00(
                (__int64)Block + 4 * iteration_count_2 * (int)packed_word_bits + 4 * (__int64)((int)call_result * iteration_count * (int)packed_word_bits),
                (unsigned __int8 *)&packed_vector,
                packed_word_bits);
              ++iteration_count_2;
              while ( iteration_count_2 >= (int)call_result )
              {
                saved_masked_bits = SR_VEC_LANES(128, packed_vector, i32)[2];
                ++iteration_count;
LABEL_105:
                if ( iteration_count >= saved_masked_bits )
                  return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
                iteration_count_2 = 0;
              }
            }
          }
          shifted_bits = (unsigned __int8)input_byte << 8;
          if ( (unsigned __int64)text_cursor >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              stbi_refill_buffer(a1);
              loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
              loaded_word_4 = *loaded_record_pointer_2;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
            }
            else
            {
              loaded_word_4 = 0;
            }
          }
          else
          {
            loaded_word_4 = *text_cursor;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor + 1);
          }
          if ( (shifted_bits | loaded_word_4) != (_DWORD)call_result )
          {
            free(Block);
            free(allocated_buffer);
            client_static_tls_result = sr_client_static_tls();
            literal_text = "invalid decoded scanline length";
            goto LABEL_94;
          }
          if ( !allocated_buffer )
          {
            allocated_buffer = (char *)sr_path_malloc(4 * (int)call_result);
            if ( !allocated_buffer )
            {
              free(Block);
              goto LABEL_93;
            }
          }
          element_index_2 = 0;
LABEL_60:
          running_total = 0;
          running_total_2 = 0;
          integer_difference = call_result;
          while ( 1 )
          {
            loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
            {
              if ( !*(_DWORD *)(a1 + 48) )
              {
                loaded_word_5 = 0;
                goto LABEL_76;
              }
              stbi_refill_buffer(a1);
              loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
            }
            loaded_word_5 = *loaded_record_pointer_3;
            byte_cursor = (char *)(loaded_record_pointer_3 + 1);
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
            if ( loaded_word_5 > 0x80u )
            {
              if ( (unsigned __int64)byte_cursor >= *(_QWORD *)(a1 + 200) )
              {
                if ( *(_DWORD *)(a1 + 48) )
                {
                  stbi_refill_buffer(a1);
                  loaded_record_pointer_4 = *(char **)(a1 + 192);
                  input_byte_2 = *loaded_record_pointer_4;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
                }
                else
                {
                  input_byte_2 = 0;
                }
              }
              else
              {
                input_byte_2 = *byte_cursor;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor + 1);
              }
              integer_sum = loaded_word_5 + 0x80;
              if ( integer_sum > integer_difference )
              {
LABEL_96:
                free(Block);
                free(allocated_buffer);
                client_static_tls_result = sr_client_static_tls();
                literal_text = "corrupt";
                goto LABEL_94;
              }
              if ( integer_sum )
              {
                running_total += integer_sum;
                record_byte_offset = &allocated_buffer[4 * running_total_2 + element_index_2];
                remaining_count = integer_sum;
                running_total_2 += integer_sum;
                do
                {
                  *record_byte_offset = input_byte_2;
                  record_byte_offset += 4;
                  --remaining_count;
                }
                while ( remaining_count );
              }
              goto LABEL_85;
            }
LABEL_76:
            saved_loaded_word_3 = loaded_word_5;
            if ( loaded_word_5 > integer_difference )
              goto LABEL_96;
            if ( loaded_word_5 )
            {
              running_total += loaded_word_5;
              record_byte_offset_2 = &allocated_buffer[4 * running_total_2 + element_index_2];
              remaining_count_2 = (unsigned int)saved_loaded_word_3;
              running_total_2 += saved_loaded_word_3;
              do
              {
                loaded_record_pointer_5 = *(char **)(a1 + 192);
                if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
                {
                  if ( *(_DWORD *)(a1 + 48) )
                  {
                    stbi_refill_buffer(a1);
                    loaded_record_pointer_6 = *(char **)(a1 + 192);
                    input_byte_3 = *loaded_record_pointer_6;
                    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
                  }
                  else
                  {
                    input_byte_3 = 0;
                  }
                }
                else
                {
                  input_byte_3 = *loaded_record_pointer_5;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
                }
                *record_byte_offset_2 = input_byte_3;
                record_byte_offset_2 += 4;
                --remaining_count_2;
              }
              while ( remaining_count_2 );
            }
LABEL_85:
            integer_difference = call_result - running_total;
            if ( (int)call_result - running_total <= 0 )
            {
              if ( ++element_index_2 < 4 )
                goto LABEL_60;
              record_byte_offset_3 = (unsigned __int8 *)allocated_buffer;
              remaining_count_3 = call_result;
              cached_packed_word_bits = saved_packed_word_bits;
              scaled_index = 4LL * (int)saved_packed_word_bits;
              running_total_3 = (char *)Block + 4 * running_total_4;
              do
              {
                sub_140161F00((__int64)running_total_3, record_byte_offset_3, cached_packed_word_bits);
                running_total_3 += scaled_index;
                record_byte_offset_3 += 4;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
              running_total_4 += SR_VEC_LANES(128, packed_vector, i32)[0];
              if ( ++SR_VEC_LANES(128, packed_vector, i32)[1] >= SR_VEC_LANES(128, packed_vector, i32)[2] )
              {
                free(allocated_buffer);
                return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
              }
              goto LABEL_34;
            }
          }
        }
LABEL_45:
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer = *(char **)(a1 + 192);
          input_byte = *loaded_record_pointer;
          text_cursor = loaded_record_pointer + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor);
        }
        else
        {
          input_byte = 0;
        }
        goto LABEL_48;
      }
      stbi_refill_buffer(a1);
      text_cursor = *(char **)(a1 + 192);
      loaded_word = *(_QWORD *)(a1 + 200);
    }
    loaded_word_2 = *text_cursor++;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(text_cursor);
    saved_loaded_word = loaded_word_2;
    if ( (unsigned __int64)text_cursor < loaded_word )
      goto LABEL_42;
    goto LABEL_40;
  }
  element_index = 0;
  while ( 1 )
  {
    table_value = left_text[element_index++];
    if ( table_value != sr_mem_140272dc4[element_index - 1] )
      break;
    if ( element_index == 7 )
      goto LABEL_5;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not HDR");
  return 0; /* 0x140162BA8: xor eax, eax */
}
#undef unused_frame_slot_8
#undef running_total_4
#undef saved_left_text
#undef Block
#undef packed_vector
#undef saved_packed_word_bits
#undef scratch_buffer
#undef unused_frame_slot_1128

// 140162620: conditional instruction was optimized away because r15d.4>=1
// 1401627FB: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 14016295E: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 1401629BA: conditional instruction was optimized away because r12.8!=0

//----- (0000000140162BB0) ----------------------------------------------------
__int64            sub_140162BB0(__int64 a1)
{
  unsigned __int8 **loaded_record_pointer;
       char *literal_text;
  unsigned __int8 *loaded_word;
  unsigned __int8 loaded_word_2;
  __int64 result;
  __int64 loaded_word_3;

  loaded_record_pointer = (unsigned __int8 **)(a1 + 192);
  literal_text = "#?RADIANCE\n";
  while ( 1 )
  {
    loaded_word = *loaded_record_pointer;
    if ( (unsigned __int64)*loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_word_2 = *(*loaded_record_pointer)++;
      }
      else
      {
        loaded_word_2 = 0;
      }
    }
    else
    {
      loaded_word_2 = *loaded_word;
      *loaded_record_pointer = loaded_word + 1;
    }
    if ( loaded_word_2 != *literal_text )
      break;
    if ( !*++literal_text )
    {
      result = 1;
      goto LABEL_11;
    }
  }
  *loaded_record_pointer = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  result = sub_140162C90(a1, "#?RGBE\n");
LABEL_11:
  loaded_word_3 = *(_QWORD *)(a1 + 216);
  *loaded_record_pointer = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = loaded_word_3;
  return result;
}

//----- (0000000140162C90) ----------------------------------------------------
__int64            sub_140162C90(__int64 a1, char *a2)
{
  char *text_cursor;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word;
  unsigned __int8 *loaded_record_pointer_2;

  text_cursor = a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
          loaded_word = *loaded_record_pointer_2;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        }
        else
        {
          loaded_word = 0;
        }
      }
      else
      {
        loaded_word = *loaded_record_pointer;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      }
      if ( loaded_word != *text_cursor )
        return 0;
      if ( !*++text_cursor )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 1;
  }
}

//----- (0000000140162D40) ----------------------------------------------------
__int64            sub_140162D40(void *Block, int a2, int a3, int a4)
{
  __int64 input_value;
  void *allocation_buffer;
  int scaled_index;
  __int64 saved_allocated_buffer;
  int integer_difference;
  __int64 scaled_index_2;
  __int64 cached_input_value;
  int running_total;
  __int64 saved_allocated_buffer_2;
  float *saved_allocation_buffer;
  float cached_flt_140301840;
  __int64 remaining_count;
  float scaled_value;
  __int64 cached_integer_difference;
  int cached_integer_difference_2;
  __int64 iteration_count;
  float *buffer_cursor;
  float powf_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162D40[32];
#define cached_integer_difference_3 (*(int (*))(void *)(sr_frame_140162D40 + 0)) /* [rsp+20h] */
#define integer_difference_2 (*(__int64 (*))(void *)(sr_frame_140162D40 + 8)) /* [rsp+28h] */
#define allocated_buffer (*(__int64 (*))(void *)(sr_frame_140162D40 + 16)) /* [rsp+30h] */

  input_value = a4;
  allocation_buffer = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (scaled_index = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && scaled_index > (int)(0x7FFFFFFFu / a4)
    || (allocated_buffer = sr_path_malloc(a4 * scaled_index), (saved_allocated_buffer = allocated_buffer) == 0) )
  {
    free(allocation_buffer);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  integer_difference = input_value;
  if ( (input_value & 1) == 0 )
    integer_difference = input_value - 1;
  cached_integer_difference_3 = integer_difference;
  if ( scaled_index > 0 )
  {
    scaled_index_2 = 4 * input_value;
    cached_input_value = input_value;
    running_total = 0;
    saved_allocated_buffer_2 = allocated_buffer;
    saved_allocation_buffer = (float *)allocation_buffer;
    cached_flt_140301840 = flt_140301840;
    remaining_count = (unsigned int)scaled_index;
    scaled_value = *(float *)&dword_140301844;
    cached_integer_difference = integer_difference;
    integer_difference_2 = (unsigned int)scaled_index;
    do
    {
      cached_integer_difference_2 = 0;
      if ( cached_integer_difference > 0 )
      {
        iteration_count = 0;
        buffer_cursor = saved_allocation_buffer;
        cached_integer_difference_2 = integer_difference;
        do
        {
          powf_result = powf(scaled_value * *buffer_cursor++, cached_flt_140301840);
          *(_BYTE *)(saved_allocated_buffer_2 + iteration_count++) = (int)fminf(fmaxf((float)(powf_result * 255.0) + 0.5, 0.0), 255.0);
        }
        while ( iteration_count < cached_integer_difference );
        remaining_count = integer_difference_2;
        cached_input_value = input_value;
        allocation_buffer = Block;
        saved_allocated_buffer = allocated_buffer;
        scaled_index_2 = 4 * input_value;
      }
      if ( cached_integer_difference_2 < (int)input_value )
        *(_BYTE *)(cached_integer_difference_2 + running_total + saved_allocated_buffer) = (int)fminf(fmaxf((float)(*((float *)allocation_buffer + cached_integer_difference_2 + running_total) * 255.0) + 0.5, 0.0), 255.0);
      integer_difference = cached_integer_difference_3;
      running_total += input_value;
      saved_allocation_buffer = (float *)((char *)saved_allocation_buffer + scaled_index_2);
      saved_allocated_buffer_2 += cached_input_value;
      integer_difference_2 = --remaining_count;
    }
    while ( remaining_count );
  }
  free(allocation_buffer);
  return allocated_buffer;
}
#undef cached_integer_difference_3
#undef integer_difference_2
#undef allocated_buffer

//----- (0000000140162FB0) ----------------------------------------------------
__int64            sub_140162FB0(unsigned int a1)
{
  __int64 result;
  unsigned int hiword_result;
  int record_byte_offset;
  int saved_record_byte_offset;
  unsigned int saved_hiword_result;
  unsigned int integer_sum;
  unsigned int shifted_bits;

  if ( !a1 )
    return 0xFFFFFFFFLL;
  hiword_result = HIWORD(a1);
  record_byte_offset = 16;
  if ( a1 < 0x10000 )
  {
    hiword_result = a1;
    record_byte_offset = 0;
  }
  if ( hiword_result >= 0x100 )
  {
    record_byte_offset += 8;
    hiword_result >>= 8;
  }
  saved_record_byte_offset = record_byte_offset + 4;
  saved_hiword_result = hiword_result >> 4;
  if ( hiword_result < 0x10 )
  {
    saved_record_byte_offset = record_byte_offset;
    saved_hiword_result = hiword_result;
  }
  integer_sum = saved_record_byte_offset + 2;
  if ( saved_hiword_result < 4 )
    integer_sum = saved_record_byte_offset;
  shifted_bits = saved_hiword_result >> 2;
  if ( saved_hiword_result < 4 )
    shifted_bits = saved_hiword_result;
  result = integer_sum + 1;
  if ( shifted_bits < 2 )
    return integer_sum;
  return result;
}

//----- (0000000140163020) ----------------------------------------------------
__int64            sub_140163020(__int64 a1, int a2, __int64 a3)
{
  int *shifted_bits;
  __int16 *running_total;
  int scaled_index;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int table_value;
  int loaded_word;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int scaled_index_2;
  int scaled_index_3;
  int scaled_index_4;
  int scaled_index_5;
  int integer_sum;
  int integer_difference;
  int table_value_5;
  int integer_sum_2;
  int shifted_bits_5;
  int shifted_bits_6;
  int running_total_2;
  int running_total_3;
  int cached_scaled_index;
  int scaled_index_6;
  int integer_sum_3;
  int scaled_index_7;
  int scaled_index_8;
  int scaled_index_9;
  int scaled_index_10;
  int scaled_index_11;
  int scaled_index_12;
  int scaled_index_13;
  int integer_sum_4;
  int scaled_index_14;
  int integer_sum_5;
  int scaled_index_15;
  int shifted_bits_7;
  int shifted_bits_8;
  int shifted_bits_9;
  int table_value_6;
  int table_value_7;
  int table_value_8;
  int table_value_9;
  int table_value_10;
  int scaled_index_16;
  int scaled_index_17;
  int scaled_index_18;
  int scaled_index_19;
  int integer_sum_6;
  int integer_difference_2;
  int table_value_11;
  int integer_sum_7;
  int shifted_bits_10;
  int shifted_bits_11;
  int running_total_4;
  int running_total_5;
  int cached_scaled_index_2;
  int scaled_index_20;
  int integer_sum_8;
  int scaled_index_21;
  int scaled_index_22;
  int scaled_index_23;
  int scaled_index_24;
  int scaled_index_25;
  int scaled_index_26;
  int scaled_index_27;
  int integer_sum_9;
  int scaled_index_28;
  int integer_sum_10;
  __int64 *state_address;
  _BYTE *saved_shifted_bits;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  int loaded_word_5;
  int loaded_word_6;
  int loaded_word_7;
  int loaded_word_8;
  int loaded_word_9;
  int integer_sum_11;
  int shifted_bits_12;
  int integer_sum_12;
  int integer_difference_3;
  int loaded_word_10;
  int integer_sum_13;
  int integer_sum_14;
  int integer_sum_15;
  int integer_difference_4;
  int scaled_index_29;
  int scaled_index_30;
  int scaled_index_31;
  int scaled_index_32;
  int scaled_index_33;
  int scaled_index_34;
  int scaled_index_35;
  int cached_scaled_index_3;
  int integer_sum_16;
  int shifted_bits_13;
  int shifted_bits_14;
  int shifted_bits_15;
  int shifted_bits_16;
  int shifted_bits_17;
  int shifted_bits_18;
  int shifted_bits_19;
  int shifted_bits_20;
  __int64 cached_input_value;
  bool comparison_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163020[304];
#define scaled_index_36 (*(int (*))(void *)(sr_frame_140163020 + 0)) /* [rsp+0h] */
#define remaining_count (*(__int64 (*))(void *)(sr_frame_140163020 + 8)) /* [rsp+8h] */
#define remaining_count_2 (*(__int64 (*))(void *)(sr_frame_140163020 + 16)) /* [rsp+10h] */
#define input_value (*(int (*))(void *)(sr_frame_140163020 + 24)) /* [rsp+18h] */
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_140163020 + 56)) /* [rsp+38h] */
#define scratch_buffer (*(_QWORD (*)[29])(void *)(sr_frame_140163020 + 64)) /* [rsp+40h] */

  input_value = a2;
  shifted_bits = (int *)scratch_buffer;
  remaining_count_2 = a1;
  running_total = (__int16 *)(a3 + 32);
  remaining_count = 4;
  do
  {
    scaled_index = *(running_total - 8);
    if ( __PAIR32__(*(running_total - 8), scaled_index) == (unsigned __int16)*running_total
      && running_total[8] == (_WORD)scaled_index
      && running_total[16] == (_WORD)scaled_index
      && running_total[24] == (_WORD)scaled_index
      && running_total[32] == (_WORD)scaled_index
      && running_total[40] == (_WORD)scaled_index )
    {
      shifted_bits_2 = 4 * *(running_total - 16);
      shifted_bits[48] = shifted_bits_2;
      shifted_bits_3 = shifted_bits_2;
      shifted_bits[40] = shifted_bits_2;
      shifted_bits_4 = shifted_bits_2;
      shifted_bits[8] = shifted_bits_2;
      *shifted_bits = shifted_bits_2;
      *(shifted_bits - 8) = shifted_bits_2;
    }
    else
    {
      table_value = running_total[8];
      loaded_word = *running_total;
      table_value_2 = running_total[32];
      table_value_3 = running_total[40];
      table_value_4 = running_total[24];
      scaled_index_2 = *(running_total - 16);
      scaled_index_3 = 2217 * (table_value_2 + loaded_word);
      scaled_index_4 = 7567 * table_value_2;
      scaled_index_5 = 3135 * loaded_word;
      integer_sum = table_value_4 + scaled_index;
      integer_difference = scaled_index_3 - scaled_index_4;
      table_value_5 = running_total[16];
      integer_sum_2 = scaled_index_3 + scaled_index_5;
      shifted_bits_5 = (table_value_5 + scaled_index_2) << 12;
      shifted_bits_6 = (scaled_index_2 - table_value_5) << 12;
      running_total_2 = integer_difference + shifted_bits_6;
      scaled_index_36 = shifted_bits_5 - integer_sum_2;
      running_total_3 = shifted_bits_6 - integer_difference;
      cached_scaled_index = scaled_index;
      scaled_index_6 = 4816 * (table_value_4 + scaled_index + table_value_3 + table_value);
      integer_sum_3 = shifted_bits_5 + integer_sum_2 + 512;
      running_total_2 += 512;
      running_total_3 += 512;
      scaled_index_7 = scaled_index_6 - 3685 * (table_value_3 + scaled_index);
      scaled_index_8 = -1597 * integer_sum;
      scaled_index_9 = scaled_index_6 - 10497 * (table_value_4 + table_value);
      scaled_index_10 = -8034 * (table_value_3 + table_value);
      scaled_index_11 = scaled_index_10 + 12586 * table_value;
      scaled_index_12 = scaled_index_10 + scaled_index_7 + 1223 * table_value_3;
      scaled_index_13 = scaled_index_7 + scaled_index_8 + 6149 * cached_scaled_index;
      integer_sum_4 = scaled_index_9 + scaled_index_11;
      scaled_index_14 = scaled_index_9 + scaled_index_8 + 8410 * table_value_4;
      integer_sum_5 = scaled_index_36 + 512;
      *(shifted_bits - 8) = (integer_sum_3 + scaled_index_13) >> 10;
      *shifted_bits = (running_total_2 + integer_sum_4) >> 10;
      shifted_bits[8] = (scaled_index_14 + running_total_3) >> 10;
      shifted_bits_2 = (integer_sum_5 + scaled_index_12) >> 10;
      shifted_bits_3 = (running_total_3 - scaled_index_14) >> 10;
      shifted_bits_4 = (integer_sum_5 - scaled_index_12) >> 10;
      shifted_bits[48] = (integer_sum_3 - scaled_index_13) >> 10;
      shifted_bits[40] = (running_total_2 - integer_sum_4) >> 10;
    }
    shifted_bits[24] = shifted_bits_4;
    shifted_bits[32] = shifted_bits_3;
    shifted_bits[16] = shifted_bits_2;
    scaled_index_15 = *(running_total - 7);
    if ( __PAIR32__(*(running_total - 7), scaled_index_15) == (unsigned __int16)running_total[1]
      && running_total[9] == (_WORD)scaled_index_15
      && running_total[17] == (_WORD)scaled_index_15
      && running_total[25] == (_WORD)scaled_index_15
      && running_total[33] == (_WORD)scaled_index_15
      && running_total[41] == (_WORD)scaled_index_15 )
    {
      shifted_bits_7 = 4 * *(running_total - 15);
      shifted_bits[49] = shifted_bits_7;
      shifted_bits_8 = shifted_bits_7;
      shifted_bits[41] = shifted_bits_7;
      shifted_bits_9 = shifted_bits_7;
      shifted_bits[9] = shifted_bits_7;
      shifted_bits[1] = shifted_bits_7;
      *(shifted_bits - 7) = shifted_bits_7;
    }
    else
    {
      table_value_6 = running_total[9];
      table_value_7 = running_total[1];
      table_value_8 = running_total[33];
      table_value_9 = running_total[41];
      table_value_10 = running_total[25];
      scaled_index_16 = *(running_total - 15);
      scaled_index_17 = 2217 * (table_value_8 + table_value_7);
      scaled_index_18 = 7567 * table_value_8;
      scaled_index_19 = 3135 * table_value_7;
      integer_sum_6 = table_value_10 + scaled_index_15;
      integer_difference_2 = scaled_index_17 - scaled_index_18;
      table_value_11 = running_total[17];
      integer_sum_7 = scaled_index_17 + scaled_index_19;
      shifted_bits_10 = (table_value_11 + scaled_index_16) << 12;
      shifted_bits_11 = (scaled_index_16 - table_value_11) << 12;
      running_total_4 = integer_difference_2 + shifted_bits_11;
      scaled_index_36 = shifted_bits_10 - integer_sum_7;
      running_total_5 = shifted_bits_11 - integer_difference_2;
      cached_scaled_index_2 = scaled_index_15;
      scaled_index_20 = 4816 * (table_value_10 + scaled_index_15 + table_value_9 + table_value_6);
      integer_sum_8 = shifted_bits_10 + integer_sum_7 + 512;
      running_total_4 += 512;
      running_total_5 += 512;
      scaled_index_21 = scaled_index_20 - 3685 * (table_value_9 + scaled_index_15);
      scaled_index_22 = -1597 * integer_sum_6;
      scaled_index_23 = scaled_index_20 - 10497 * (table_value_10 + table_value_6);
      scaled_index_24 = -8034 * (table_value_9 + table_value_6);
      scaled_index_25 = scaled_index_24 + 12586 * table_value_6;
      scaled_index_26 = scaled_index_24 + scaled_index_21 + 1223 * table_value_9;
      scaled_index_27 = scaled_index_21 + scaled_index_22 + 6149 * cached_scaled_index_2;
      integer_sum_9 = scaled_index_23 + scaled_index_25;
      scaled_index_28 = scaled_index_23 + scaled_index_22 + 8410 * table_value_10;
      integer_sum_10 = scaled_index_36 + 512;
      *(shifted_bits - 7) = (integer_sum_8 + scaled_index_27) >> 10;
      shifted_bits[1] = (running_total_4 + integer_sum_9) >> 10;
      shifted_bits[9] = (scaled_index_28 + running_total_5) >> 10;
      shifted_bits_7 = (integer_sum_10 + scaled_index_26) >> 10;
      shifted_bits_8 = (running_total_5 - scaled_index_28) >> 10;
      shifted_bits_9 = (integer_sum_10 - scaled_index_26) >> 10;
      shifted_bits[49] = (integer_sum_8 - scaled_index_27) >> 10;
      shifted_bits[41] = (running_total_4 - integer_sum_9) >> 10;
    }
    shifted_bits[25] = shifted_bits_9;
    running_total += 2;
    shifted_bits[33] = shifted_bits_8;
    shifted_bits[17] = shifted_bits_7;
    shifted_bits += 2;
    --remaining_count;
  }
  while ( remaining_count );
  state_address = &callee_output_word;
  remaining_count = (__int64)&callee_output_word;
  saved_shifted_bits = (_BYTE *)(remaining_count_2 + 1);
  remaining_count_2 = 8;
  do
  {
    loaded_word_2 = *((_DWORD *)state_address - 4);
    loaded_word_3 = *((_DWORD *)state_address + 1);
    loaded_word_4 = *((_DWORD *)state_address - 1);
    loaded_word_5 = *((_DWORD *)state_address - 3);
    loaded_word_6 = *((_DWORD *)state_address - 6);
    loaded_word_7 = 2217 * (*(_DWORD *)state_address + loaded_word_2) - 7567 * *(_DWORD *)state_address;
    loaded_word_8 = *((_DWORD *)state_address - 2);
    loaded_word_9 = 2217 * (*(_DWORD *)state_address + loaded_word_2) + 3135 * loaded_word_2;
    integer_sum_11 = loaded_word_8 + loaded_word_6;
    shifted_bits_12 = (loaded_word_6 - loaded_word_8) << 12;
    integer_sum_11 <<= 12;
    integer_sum_12 = shifted_bits_12 + loaded_word_7;
    integer_difference_3 = shifted_bits_12 - loaded_word_7;
    loaded_word_10 = *((_DWORD *)state_address - 5);
    integer_sum_13 = integer_sum_11 + loaded_word_9 + 16842752;
    integer_sum_14 = integer_sum_12 + 16842752;
    integer_sum_15 = integer_difference_3 + 16842752;
    integer_difference_4 = integer_sum_11 - loaded_word_9 + 16842752;
    scaled_index_29 = 4816 * (loaded_word_4 + loaded_word_10 + loaded_word_3 + loaded_word_5) - 3685 * (loaded_word_3 + loaded_word_10);
    scaled_index_30 = -1597 * (loaded_word_4 + loaded_word_10);
    scaled_index_31 = 4816 * (loaded_word_4 + loaded_word_10 + loaded_word_3 + loaded_word_5) - 10497 * (loaded_word_4 + loaded_word_5);
    scaled_index_32 = -8034 * (loaded_word_3 + loaded_word_5);
    scaled_index_33 = scaled_index_31 + scaled_index_30 + 8410 * loaded_word_4;
    scaled_index_36 = scaled_index_29 + scaled_index_30 + 6149 * loaded_word_10;
    scaled_index_34 = scaled_index_32 + scaled_index_29 + 1223 * loaded_word_3;
    scaled_index_35 = scaled_index_32 + 12586 * loaded_word_5;
    cached_scaled_index_3 = scaled_index_36;
    integer_sum_16 = scaled_index_31 + scaled_index_35;
    shifted_bits_13 = (scaled_index_36 + integer_sum_13) >> 17;
    if ( (unsigned int)shifted_bits_13 > 0xFF )
    {
      if ( shifted_bits_13 >= 0 )
        LOBYTE(shifted_bits_13) = -1;
      else
        LOBYTE(shifted_bits_13) = 0;
    }
    *(saved_shifted_bits - 1) = shifted_bits_13;
    shifted_bits_14 = (integer_sum_13 - cached_scaled_index_3) >> 17;
    if ( (unsigned int)shifted_bits_14 > 0xFF )
    {
      if ( shifted_bits_14 >= 0 )
        LOBYTE(shifted_bits_14) = -1;
      else
        LOBYTE(shifted_bits_14) = 0;
    }
    saved_shifted_bits[6] = shifted_bits_14;
    shifted_bits_15 = (integer_sum_14 + integer_sum_16) >> 17;
    if ( (unsigned int)shifted_bits_15 > 0xFF )
    {
      if ( shifted_bits_15 >= 0 )
        LOBYTE(shifted_bits_15) = -1;
      else
        LOBYTE(shifted_bits_15) = 0;
    }
    *saved_shifted_bits = shifted_bits_15;
    shifted_bits_16 = (integer_sum_14 - integer_sum_16) >> 17;
    if ( (unsigned int)shifted_bits_16 > 0xFF )
    {
      if ( shifted_bits_16 >= 0 )
        LOBYTE(shifted_bits_16) = -1;
      else
        LOBYTE(shifted_bits_16) = 0;
    }
    saved_shifted_bits[5] = shifted_bits_16;
    shifted_bits_17 = (integer_sum_15 + scaled_index_33) >> 17;
    if ( (unsigned int)shifted_bits_17 > 0xFF )
    {
      if ( shifted_bits_17 >= 0 )
        LOBYTE(shifted_bits_17) = -1;
      else
        LOBYTE(shifted_bits_17) = 0;
    }
    saved_shifted_bits[1] = shifted_bits_17;
    shifted_bits_18 = (integer_sum_15 - scaled_index_33) >> 17;
    if ( (unsigned int)shifted_bits_18 > 0xFF )
    {
      if ( shifted_bits_18 >= 0 )
        LOBYTE(shifted_bits_18) = -1;
      else
        LOBYTE(shifted_bits_18) = 0;
    }
    saved_shifted_bits[4] = shifted_bits_18;
    shifted_bits_19 = (integer_difference_4 + scaled_index_34) >> 17;
    if ( (unsigned int)shifted_bits_19 > 0xFF )
    {
      if ( shifted_bits_19 >= 0 )
        LOBYTE(shifted_bits_19) = -1;
      else
        LOBYTE(shifted_bits_19) = 0;
    }
    saved_shifted_bits[2] = shifted_bits_19;
    shifted_bits_20 = (integer_difference_4 - scaled_index_34) >> 17;
    if ( (unsigned int)shifted_bits_20 > 0xFF )
    {
      if ( shifted_bits_20 >= 0 )
        LOBYTE(shifted_bits_20) = -1;
      else
        LOBYTE(shifted_bits_20) = 0;
    }
    cached_input_value = input_value;
    state_address = (__int64 *)(remaining_count + 32);
    saved_shifted_bits[3] = shifted_bits_20;
    saved_shifted_bits += cached_input_value;
    comparison_result = remaining_count_2-- == 1;
    remaining_count = (__int64)state_address;
  }
  while ( !comparison_result );
  return 0; /* no result: rax is residue at 0x140163608 */
}
#undef scaled_index_36
#undef remaining_count
#undef remaining_count_2
#undef input_value
#undef callee_output_word
#undef scratch_buffer

// 1401634D2: conditional instruction was optimized away because eax.4>=100
// 1401634F6: conditional instruction was optimized away because ebp.4>=100
// 14016351A: conditional instruction was optimized away because eax.4>=100
// 140163543: conditional instruction was optimized away because r12d.4>=100
// 140163567: conditional instruction was optimized away because eax.4>=100
// 140163590: conditional instruction was optimized away because r14d.4>=100
// 1401635B4: conditional instruction was optimized away because eax.4>=100
// 1401635DD: conditional instruction was optimized away because r15d.4>=100

//----- (0000000140163640) ----------------------------------------------------
__int64            sub_140163640(_QWORD *a1, int a2,      __m128i *a3)
{
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i loaded_vector_3;
  __m128i loaded_vector_4;
  __m128i loaded_vector_5;
  __m128i reordered_vector;
  __m128i reordered_vector_2;
  __m128i loaded_vector_6;
  __m128i saved_loaded_vector;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i reordered_vector_3;
  __m128i vector_result_3;
  __m128i saved_reordered_vector;
  __m128i vector_result_4;
  __m128i vector_result_5;
  __m128i reordered_vector_4;
  __m128i reordered_vector_5;
  __m128i reordered_vector_6;
  __m128i vector_result_6;
  __m128i reordered_vector_7;
  __m128i reordered_vector_8;
  __m128i reordered_vector_9;
  __m128i vector_result_7;
  __m128i vector_result_8;
  __m128i saved_reordered_vector_2;
  __m128i vector_result_9;
  __m128i vector_result_10;
  __m128i vector_result_11;
  __m128i vector_result_12;
  __m128i vector_result_13;
  __m128i vector_result_14;
  __m128i vector_result_15;
  __m128i vector_result_16;
  __m128i vector_result_17;
  __m128i si128;
  __m128i vector_result_18;
  __m128i vector_result_19;
  __m128i vector_result_20;
  __m128i vector_result_21;
  __m128i vector_result_22;
  __m128i vector_result_23;
  __m128i loaded_vector_7;
  __m128i vector_result_24;
  __m128i vector_result_25;
  __m128i vector_result_26;
  __m128i vector_result_27;
  __m128i vector_result_28;
  __m128i vector_result_29;
  __m128i vector_result_30;
  __m128i vector_result_31;
  __m128i vector_result_32;
  __m128i vector_result_33;
  __m128i vector_result_34;
  __m128i vector_result_35;
  __m128i vector_result_36;
  __m128i vector_result_37;
  __m128i loaded_vector_8;
  __m128i vector_result_38;
  __m128i reordered_vector_10;
  __m128i vector_result_39;
  __m128i reordered_vector_11;
  __m128i reordered_vector_12;
  __m128i reordered_vector_13;
  __m128i reordered_vector_14;
  __m128i reordered_vector_15;
  __m128i reordered_vector_16;
  __m128i reordered_vector_17;
  __m128i reordered_vector_18;
  __m128i reordered_vector_19;
  __m128i reordered_vector_20;
  __m128i reordered_vector_21;
  __m128i reordered_vector_22;
  __m128i reordered_vector_23;
  __m128i reordered_vector_24;
  __m128i reordered_vector_25;
  __m128i reordered_vector_26;
  __m128i loaded_vector_9;
  __m128i reordered_vector_27;
  __m128i reordered_vector_28;
  __m128i reordered_vector_29;
  __m128i reordered_vector_30;
  __m128i reordered_vector_31;
  __m128i reordered_vector_32;
  __m128i vector_result_40;
  __m128i vector_result_41;
  __m128i vector_result_42;
  __m128i vector_result_43;
  __m128i reordered_vector_33;
  __m128i reordered_vector_34;
  __m128i reordered_vector_35;
  __m128i vector_result_44;
  __m128i vector_result_45;
  __m128i reordered_vector_36;
  __m128i vector_result_46;
  __m128i vector_result_47;
  __m128i vector_result_48;
  __m128i vector_result_49;
  __m128i reordered_vector_37;
  __m128i vector_result_50;
  __m128i vector_result_51;
  __m128i reordered_vector_38;
  __m128i reordered_vector_39;
  __m128i reordered_vector_40;
  __m128i vector_result_52;
  __m128i reordered_vector_41;
  __m128i vector_result_53;
  __m128i vector_result_54;
  __m128i vector_result_55;
  __m128i saved_reordered_vector_3;
  __m128i loaded_vector_10;
  __m128i vector_result_56;
  __m128i vector_result_57;
  __m128i vector_result_58;
  __m128i loaded_vector_11;
  __m128i vector_result_59;
  __m128i loaded_vector_12;
  __m128i vector_result_60;
  __m128i loaded_vector_13;
  __m128i vector_result_61;
  __m128i vector_result_62;
  __m128i vector_result_63;
  __m128i vector_result_64;
  __m128i vector_result_65;
  __m128i vector_result_66;
  __m128i vector_result_67;
  __m128i vector_result_68;
  __m128i vector_result_69;
  __m128i reordered_vector_42;
  __m128i reordered_vector_43;
  __m128i reordered_vector_44;
  __m128i reordered_vector_45;
  __m128i reordered_vector_46;
  __m128i reordered_vector_47;
  __m128i reordered_vector_48;
  __m128i reordered_vector_49;
  _QWORD *reordered_vector_50;
  __m128i reordered_vector_51;
  __m128i reordered_vector_52;
  __m128i reordered_vector_53;
  __m128i reordered_vector_54;
  _QWORD *table_value;
  _QWORD *reordered_vector_55;
  _QWORD *table_value_2;
  _QWORD *reordered_vector_56;
  _QWORD *table_value_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163640[128];
#define vector_result_70 (*(__m128i (*))(void *)(sr_frame_140163640 + 0)) /* [rsp+0h] */
#define vector_result_71 (*(__m128i (*))(void *)(sr_frame_140163640 + 16)) /* [rsp+10h] */
#define vector_result_72 (*(__m128i (*))(void *)(sr_frame_140163640 + 32)) /* [rsp+20h] */
#define vector_result_73 (*(__m128i (*))(void *)(sr_frame_140163640 + 48)) /* [rsp+30h] */
#define vector_result_74 (*(__m128i (*))(void *)(sr_frame_140163640 + 64)) /* [rsp+40h] */
#define vector_result_75 (*(__m128i (*))(void *)(sr_frame_140163640 + 80)) /* [rsp+50h] */
#define vector_result_76 (*(__m128i (*))(void *)(sr_frame_140163640 + 96)) /* [rsp+60h] */
#define vector_result_77 (*(__m128i (*))(void *)(sr_frame_140163640 + 112)) /* [rsp+70h] */

  loaded_vector = _mm_loadu_si128(a3 + 1);
  loaded_vector_2 = _mm_loadu_si128(a3 + 5);
  loaded_vector_3 = _mm_loadu_si128(a3 + 3);
  loaded_vector_4 = _mm_loadu_si128(a3);
  loaded_vector_5 = _mm_loadu_si128(a3 + 2);
  reordered_vector = _mm_unpackhi_epi16(loaded_vector_5, a3[6]);
  reordered_vector_2 = _mm_unpacklo_epi16(loaded_vector_5, a3[6]);
  loaded_vector_6 = _mm_loadu_si128(a3 + 7);
  vector_result_76 = _mm_madd_epi16(reordered_vector, _mm_load_si128((const __m128i *)&xmmword_140279960));
  saved_loaded_vector = loaded_vector_6;
  vector_result = _mm_add_epi16(loaded_vector_6, loaded_vector);
  vector_result_2 = _mm_add_epi16(_mm_loadu_si128(a3 + 4), loaded_vector_4);
  reordered_vector_3 = _mm_unpacklo_epi16(loaded_vector_6, loaded_vector_3);
  vector_result_3 = _mm_sub_epi16(loaded_vector_4, a3[4]);
  saved_reordered_vector = reordered_vector_2;
  vector_result_4 = _mm_madd_epi16(reordered_vector_3, _mm_load_si128((const __m128i *)&xmmword_140279940));
  vector_result_73 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_2), 4u);
  vector_result_75 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_3), 4u);
  vector_result_5 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_2), 4u);
  reordered_vector_4 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_3);
  vector_result_72 = _mm_madd_epi16(reordered_vector_2, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  reordered_vector_5 = _mm_unpacklo_epi16(loaded_vector_2, loaded_vector);
  vector_result_74 = _mm_madd_epi16(reordered_vector, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  reordered_vector_6 = _mm_unpackhi_epi16(loaded_vector_2, loaded_vector);
  vector_result_6 = _mm_add_epi16(loaded_vector_2, loaded_vector_3);
  reordered_vector_7 = _mm_unpacklo_epi16(vector_result, vector_result_6);
  reordered_vector_8 = _mm_unpackhi_epi16(saved_loaded_vector, loaded_vector_3);
  reordered_vector_9 = _mm_unpackhi_epi16(vector_result, vector_result_6);
  vector_result_7 = _mm_madd_epi16(reordered_vector_9, _mm_load_si128((const __m128i *)&xmmword_140279230));
  vector_result_8 = _mm_madd_epi16(reordered_vector_9, _mm_load_si128((const __m128i *)&xmmword_140279950));
  vector_result_71 = vector_result_5;
  saved_reordered_vector_2 = reordered_vector_7;
  vector_result_9 = _mm_madd_epi16(reordered_vector_7, _mm_load_si128((const __m128i *)&xmmword_140279950));
  vector_result_10 = _mm_madd_epi16(saved_reordered_vector_2, _mm_load_si128((const __m128i *)&xmmword_140279230));
  vector_result_11 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_8, _mm_load_si128((const __m128i *)&xmmword_140279940)), vector_result_7);
  vector_result_77 = _mm_madd_epi16(saved_reordered_vector, _mm_load_si128((const __m128i *)&xmmword_140279960));
  vector_result_12 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_6, _mm_load_si128((const __m128i *)&xmmword_140279980)), vector_result_8);
  vector_result_13 = _mm_srai_epi32(reordered_vector_4, 4u);
  vector_result_14 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_5, _mm_load_si128((const __m128i *)&xmmword_140279980)), vector_result_9);
  vector_result_15 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_3, _mm_load_si128((const __m128i *)&xmmword_140279210)), vector_result_9);
  vector_result_16 = _mm_add_epi32(vector_result_4, vector_result_10);
  vector_result_17 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_8, _mm_load_si128((const __m128i *)&xmmword_140279210)), vector_result_8);
  si128 = _mm_load_si128((     __m128i *)&xmmword_1402791A0);
  vector_result_18 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_5, _mm_load_si128((const __m128i *)&xmmword_140279220)), vector_result_10);
  vector_result_19 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&vector_result_73), vector_result_72), si128);
  vector_result_20 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_6, _mm_load_si128((const __m128i *)&xmmword_140279220)), vector_result_7);
  vector_result_21 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&vector_result_71), vector_result_74), si128);
  vector_result_22 = _mm_srai_epi32(_mm_add_epi32(vector_result_19, vector_result_18), 0xAu);
  vector_result_23 = _mm_sub_epi32(vector_result_19, vector_result_18);
  loaded_vector_7 = _mm_load_si128(&vector_result_75);
  vector_result_24 = _mm_sub_epi32(loaded_vector_7, vector_result_77);
  vector_result_25 = _mm_add_epi32(_mm_add_epi32(loaded_vector_7, vector_result_77), si128);
  vector_result_70 = _mm_packs_epi32(vector_result_22, _mm_srai_epi32(_mm_add_epi32(vector_result_21, vector_result_20), 0xAu));
  vector_result_26 = _mm_add_epi32(vector_result_24, si128);
  vector_result_27 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&vector_result_73), vector_result_72), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  vector_result_28 = _mm_packs_epi32(_mm_srai_epi32(vector_result_23, 0xAu), _mm_srai_epi32(_mm_sub_epi32(vector_result_21, vector_result_20), 0xAu));
  vector_result_29 = _mm_add_epi32(_mm_add_epi32(vector_result_13, vector_result_76), si128);
  vector_result_30 = _mm_add_epi32(_mm_sub_epi32(vector_result_13, vector_result_76), si128);
  vector_result_31 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(vector_result_25, vector_result_15), 0xAu), _mm_srai_epi32(_mm_add_epi32(vector_result_29, vector_result_17), 0xAu));
  vector_result_32 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(vector_result_25, vector_result_15), 0xAu), _mm_srai_epi32(_mm_sub_epi32(vector_result_29, vector_result_17), 0xAu));
  vector_result_33 = _mm_add_epi32(vector_result_30, vector_result_12);
  vector_result_34 = _mm_sub_epi32(vector_result_30, vector_result_12);
  vector_result_35 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&vector_result_71), vector_result_74), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  vector_result_36 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(vector_result_26, vector_result_14), 0xAu), _mm_srai_epi32(vector_result_33, 0xAu));
  vector_result_37 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(vector_result_27, vector_result_16), 0xAu), _mm_srai_epi32(_mm_add_epi32(vector_result_35, vector_result_11), 0xAu));
  loaded_vector_8 = _mm_load_si128(&vector_result_70);
  vector_result_38 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(vector_result_27, vector_result_16), 0xAu), _mm_srai_epi32(_mm_sub_epi32(vector_result_35, vector_result_11), 0xAu));
  reordered_vector_10 = _mm_unpacklo_epi16(loaded_vector_8, vector_result_38);
  vector_result_39 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(vector_result_26, vector_result_14), 0xAu), _mm_srai_epi32(vector_result_34, 0xAu));
  vector_result_70 = _mm_unpackhi_epi16(loaded_vector_8, vector_result_38);
  reordered_vector_11 = _mm_unpacklo_epi16(vector_result_37, vector_result_28);
  reordered_vector_12 = _mm_unpacklo_epi16(vector_result_36, vector_result_32);
  reordered_vector_13 = _mm_unpacklo_epi16(vector_result_31, vector_result_39);
  reordered_vector_14 = _mm_unpackhi_epi16(vector_result_37, vector_result_28);
  reordered_vector_15 = _mm_unpackhi_epi16(vector_result_31, vector_result_39);
  reordered_vector_16 = _mm_unpacklo_epi16(reordered_vector_10, reordered_vector_12);
  reordered_vector_17 = _mm_unpackhi_epi16(reordered_vector_10, reordered_vector_12);
  reordered_vector_18 = _mm_unpacklo_epi16(reordered_vector_13, reordered_vector_11);
  reordered_vector_19 = _mm_unpackhi_epi16(reordered_vector_13, reordered_vector_11);
  reordered_vector_20 = _mm_unpacklo_epi16(reordered_vector_15, reordered_vector_14);
  reordered_vector_21 = _mm_unpackhi_epi16(reordered_vector_15, reordered_vector_14);
  reordered_vector_22 = _mm_unpacklo_epi16(reordered_vector_16, reordered_vector_18);
  reordered_vector_23 = _mm_unpackhi_epi16(reordered_vector_16, reordered_vector_18);
  reordered_vector_24 = _mm_unpacklo_epi16(reordered_vector_17, reordered_vector_19);
  reordered_vector_25 = _mm_unpackhi_epi16(reordered_vector_17, reordered_vector_19);
  reordered_vector_26 = _mm_unpackhi_epi16(vector_result_36, vector_result_32);
  loaded_vector_9 = _mm_load_si128(&vector_result_70);
  reordered_vector_27 = _mm_unpackhi_epi16(loaded_vector_9, reordered_vector_26);
  reordered_vector_28 = _mm_unpacklo_epi16(loaded_vector_9, reordered_vector_26);
  reordered_vector_29 = _mm_unpacklo_epi16(reordered_vector_27, reordered_vector_21);
  reordered_vector_30 = _mm_unpacklo_epi16(reordered_vector_28, reordered_vector_20);
  reordered_vector_31 = _mm_unpacklo_epi16(reordered_vector_24, reordered_vector_29);
  reordered_vector_32 = _mm_unpackhi_epi16(reordered_vector_24, reordered_vector_29);
  vector_result_40 = _mm_madd_epi16(reordered_vector_31, _mm_load_si128((const __m128i *)&xmmword_140279960));
  vector_result_41 = _mm_madd_epi16(reordered_vector_31, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  vector_result_42 = _mm_add_epi16(reordered_vector_30, reordered_vector_22);
  vector_result_43 = _mm_sub_epi16(reordered_vector_22, reordered_vector_30);
  reordered_vector_33 = _mm_unpackhi_epi16(reordered_vector_27, reordered_vector_21);
  reordered_vector_34 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_42);
  reordered_vector_35 = _mm_unpackhi_epi16(reordered_vector_28, reordered_vector_20);
  vector_result_73 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_43), 4u);
  vector_result_44 = _mm_add_epi16(reordered_vector_33, reordered_vector_23);
  vector_result_72 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_42), 4u);
  vector_result_45 = _mm_add_epi16(reordered_vector_35, reordered_vector_25);
  vector_result_71 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), vector_result_43), 4u);
  reordered_vector_36 = _mm_unpacklo_epi16(vector_result_44, vector_result_45);
  vector_result_46 = _mm_madd_epi16(reordered_vector_32, _mm_load_si128((const __m128i *)&xmmword_140279960));
  vector_result_47 = _mm_madd_epi16(reordered_vector_36, _mm_load_si128((const __m128i *)&xmmword_140279230));
  vector_result_48 = _mm_madd_epi16(reordered_vector_32, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  vector_result_49 = _mm_madd_epi16(reordered_vector_36, _mm_load_si128((const __m128i *)&xmmword_140279950));
  reordered_vector_37 = _mm_unpackhi_epi16(vector_result_44, vector_result_45);
  vector_result_50 = _mm_srai_epi32(reordered_vector_34, 4u);
  vector_result_51 = _mm_madd_epi16(reordered_vector_37, _mm_load_si128((const __m128i *)&xmmword_140279230));
  reordered_vector_38 = _mm_unpacklo_epi16(reordered_vector_33, reordered_vector_25);
  reordered_vector_39 = _mm_unpacklo_epi16(reordered_vector_35, reordered_vector_23);
  reordered_vector_40 = _mm_unpackhi_epi16(reordered_vector_33, reordered_vector_25);
  vector_result_52 = _mm_madd_epi16(reordered_vector_40, _mm_load_si128((const __m128i *)&xmmword_140279210));
  reordered_vector_41 = _mm_unpackhi_epi16(reordered_vector_35, reordered_vector_23);
  vector_result_70 = _mm_madd_epi16(reordered_vector_37, _mm_load_si128((const __m128i *)&xmmword_140279950));
  vector_result_53 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_40, _mm_load_si128((const __m128i *)&xmmword_140279940)), vector_result_51);
  vector_result_74 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_41, _mm_load_si128((const __m128i *)&xmmword_140279220)), vector_result_51);
  vector_result_54 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_38, _mm_load_si128((const __m128i *)&xmmword_140279940)), vector_result_47);
  vector_result_55 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_41, _mm_load_si128((const __m128i *)&xmmword_140279980)), vector_result_70);
  saved_reordered_vector_3 = reordered_vector_39;
  loaded_vector_10 = _mm_load_si128(&vector_result_73);
  vector_result_56 = _mm_sub_epi32(loaded_vector_10, vector_result_40);
  vector_result_57 = _mm_add_epi32(loaded_vector_10, vector_result_40);
  vector_result_75 = _mm_add_epi32(vector_result_52, vector_result_70);
  vector_result_58 = _mm_sub_epi32(_mm_load_si128(&vector_result_71), vector_result_46);
  vector_result_76 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_38, _mm_load_si128((const __m128i *)&xmmword_140279210)), vector_result_49);
  loaded_vector_11 = _mm_load_si128(&vector_result_71);
  vector_result_59 = _mm_add_epi32(_mm_madd_epi16(reordered_vector_39, _mm_load_si128((const __m128i *)&xmmword_140279220)), vector_result_47);
  loaded_vector_12 = _mm_load_si128((     __m128i *)&xmmword_1402791E0);
  vector_result_60 = _mm_add_epi32(_mm_madd_epi16(saved_reordered_vector_3, _mm_load_si128((const __m128i *)&xmmword_140279980)), vector_result_49);
  loaded_vector_13 = _mm_load_si128(&vector_result_72);
  vector_result_71 = _mm_add_epi32(vector_result_58, loaded_vector_12);
  vector_result_61 = _mm_add_epi32(vector_result_57, loaded_vector_12);
  vector_result_77 = vector_result_59;
  vector_result_73 = _mm_add_epi32(vector_result_56, loaded_vector_12);
  vector_result_72 = _mm_add_epi32(_mm_sub_epi32(loaded_vector_13, vector_result_41), loaded_vector_12);
  vector_result_62 = _mm_add_epi32(_mm_add_epi32(loaded_vector_13, vector_result_41), loaded_vector_12);
  vector_result_63 = _mm_add_epi32(_mm_add_epi32(vector_result_50, vector_result_48), loaded_vector_12);
  vector_result_64 = _mm_add_epi32(_mm_add_epi32(loaded_vector_11, vector_result_46), loaded_vector_12);
  vector_result_65 = _mm_add_epi32(_mm_sub_epi32(vector_result_50, vector_result_48), loaded_vector_12);
  vector_result_66 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(vector_result_62, vector_result_77), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(vector_result_63, vector_result_74), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(vector_result_61, vector_result_76), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(vector_result_64, vector_result_75), 0x11u)));
  vector_result_67 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(vector_result_73, vector_result_60), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&vector_result_71), vector_result_55), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&vector_result_72), vector_result_54), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(vector_result_65, vector_result_53), 0x11u)));
  vector_result_68 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(vector_result_61, vector_result_76), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(vector_result_64, vector_result_75), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(vector_result_62, vector_result_77), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(vector_result_63, vector_result_74), 0x11u)));
  vector_result_69 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&vector_result_72), vector_result_54), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(vector_result_65, vector_result_53), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&vector_result_73), vector_result_60), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&vector_result_71), vector_result_55), 0x11u)));
  reordered_vector_42 = _mm_unpacklo_epi8(vector_result_67, vector_result_68);
  reordered_vector_43 = _mm_unpacklo_epi8(vector_result_66, vector_result_69);
  reordered_vector_44 = _mm_unpackhi_epi8(vector_result_66, vector_result_69);
  reordered_vector_45 = _mm_unpacklo_epi8(reordered_vector_43, reordered_vector_42);
  reordered_vector_46 = _mm_unpackhi_epi8(reordered_vector_43, reordered_vector_42);
  reordered_vector_47 = _mm_unpackhi_epi8(vector_result_67, vector_result_68);
  reordered_vector_48 = _mm_unpacklo_epi8(reordered_vector_44, reordered_vector_47);
  reordered_vector_49 = _mm_unpacklo_epi8(reordered_vector_45, reordered_vector_48);
  *a1 = SR_VEC_LANES(128, reordered_vector_49, i64)[0];
  reordered_vector_50 = (_QWORD *)((char *)a1 + a2);
  reordered_vector_51 = _mm_unpackhi_epi8(reordered_vector_45, reordered_vector_48);
  reordered_vector_52 = _mm_unpackhi_epi8(reordered_vector_44, reordered_vector_47);
  reordered_vector_53 = _mm_unpacklo_epi8(reordered_vector_46, reordered_vector_52);
  reordered_vector_54 = _mm_unpackhi_epi8(reordered_vector_46, reordered_vector_52);
  *reordered_vector_50 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(reordered_vector_49, 78), u64)[0];
  table_value = (_QWORD *)((char *)reordered_vector_50 + a2);
  *table_value = SR_VEC_LANES(128, reordered_vector_51, i64)[0];
  reordered_vector_55 = (_QWORD *)((char *)table_value + a2);
  *reordered_vector_55 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(reordered_vector_51, 78), u64)[0];
  table_value_2 = (_QWORD *)((char *)reordered_vector_55 + a2);
  *table_value_2 = SR_VEC_LANES(128, reordered_vector_53, i64)[0];
  reordered_vector_56 = (_QWORD *)((char *)table_value_2 + a2);
  *reordered_vector_56 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(reordered_vector_53, 78), u64)[0];
  table_value_3 = (_QWORD *)((char *)reordered_vector_56 + a2);
  *table_value_3 = SR_VEC_LANES(128, reordered_vector_54, i64)[0];
  *(_QWORD *)((char *)table_value_3 + a2) = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(reordered_vector_54, 78), u64)[0];
  return a2;
}
#undef vector_result_70
#undef vector_result_71
#undef vector_result_72
#undef vector_result_73
#undef vector_result_74
#undef vector_result_75
#undef vector_result_76
#undef vector_result_77

//----- (0000000140163E70) ----------------------------------------------------
__int64            sub_140163E70(__int64 a1, char *a2, char *a3, unsigned int *a4)
{
  int *loaded_word;
  __int64 *allocated_buffer;
  int *record_pointer;
  __int64 loaded_word_2;
  int call_result;
  __int64 table_value;
  int *allocated_buffer_2;
  _QWORD *record_pointer_2;
  __int64 *record_pointer_3;
  __int64 call_result_2;
  int *state_address;
  char *state_address_2;
  unsigned int *state_address_3;
  int call_result_3;
  int loaded_word_3;
  int call_result_4;
  int call_result_5;
  __int64 loaded_word_4;
  int selection_flag;
  int *state_address_4;
  char *state_address_5;
  unsigned int *state_address_6;
       char *left_text;
  int masked_bits;
  _DWORD *i;
  int call_result_6;
  __int64 loaded_word_5;
  unsigned int selection_code;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163E70[1168];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140163E70 + 0)) /* [rsp+0h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140163E70 + 32)) /* [rsp+20h] */
#define cached_i (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 40)) /* [rsp+28h] */
#define unused_written_slot (*(int * (*))(void *)(sr_frame_140163E70 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 56)) /* [rsp+38h] */
#define input_cursor (*(char * (*))(void *)(sr_frame_140163E70 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(unsigned int * (*))(void *)(sr_frame_140163E70 + 72)) /* [rsp+48h] */
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_140163E70 + 80)) /* [rsp+50h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_140163E70 + 104)) /* [rsp+68h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140163E70 + 108)) /* [rsp+6Ch] */
#define scratch_buffer_2 (*(_BYTE (*)[1024])(void *)(sr_frame_140163E70 + 128)) /* [rsp+80h] */
#define unused_frame_slot_1152 (*(__int64 (*))(void *)(sr_frame_140163E70 + 1152)) /* [rsp+480h] */

  input_cursor = a2;
  loaded_word = (int *)a2;
  allocated_buffer = (__int64 *)sr_path_malloc(18568);
  *allocated_buffer = a1;
  if ( sub_14015F960(allocated_buffer, 2) )
  {
    if ( loaded_word )
      *loaded_word = *(_DWORD *)*allocated_buffer;
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(*allocated_buffer + 4);
    if ( a4 )
    {
      selection_code = 1;
      if ( *(int *)(*allocated_buffer + 8) >= 3 )
        selection_code = 3;
      *a4 = selection_code;
    }
    free(allocated_buffer);
  }
  else
  {
    record_pointer = (int *)*allocated_buffer;
    loaded_word_2 = *(_QWORD *)(*allocated_buffer + 216);
    *((_QWORD *)record_pointer + 24) = *(_QWORD *)(*allocated_buffer + 208);
    *((_QWORD *)record_pointer + 25) = loaded_word_2;
    free(allocated_buffer);
    scratch_buffer[0] = a1;
    call_result = sub_140167D10((__int64)scratch_buffer, 2, 0);
    table_value = scratch_buffer[0];
    if ( call_result )
    {
      if ( loaded_word )
        *loaded_word = *(_DWORD *)scratch_buffer[0];
      if ( a3 )
        *(_DWORD *)a3 = *(_DWORD *)(table_value + 4);
      if ( a4 )
        *a4 = *(_DWORD *)(table_value + 8);
    }
    else
    {
      *(_QWORD *)(scratch_buffer[0] + 192LL) = *(_QWORD *)(scratch_buffer[0] + 208LL);
      *(_QWORD *)(table_value + 200) = *(_QWORD *)(table_value + 216);
      allocated_buffer_2 = (int *)sr_path_malloc(34928);
      if ( (unsigned int)sub_140160930(a1, allocated_buffer_2, a4, 1) )
      {
        if ( loaded_word )
          *loaded_word = *allocated_buffer_2;
        if ( a3 )
          *(_DWORD *)a3 = allocated_buffer_2[1];
        free(allocated_buffer_2);
      }
      else
      {
        free(allocated_buffer_2);
        record_pointer_2 = (_QWORD *)(a1 + 208);
        unused_written_slot_4 = 255;
        record_pointer_3 = (__int64 *)(a1 + 216);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        call_result_2 = sub_14015C5E0(a1, (__int64)scratch_buffer);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        if ( call_result_2 )
        {
          if ( loaded_word )
            *loaded_word = *(_DWORD *)a1;
          if ( a3 )
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 4);
          if ( a4 )
          {
            if ( LODWORD(scratch_buffer[0]) == 24 && callee_output_word_2 == -16777216 )
              *a4 = 3;
            else
              *a4 = (callee_output_word_2 != 0) + 3;
          }
        }
        else
        {
          state_address = (int *)&callee_output_word;
          if ( loaded_word )
            state_address = loaded_word;
          unused_written_slot = state_address;
          state_address_2 = &callee_output_word;
          if ( a3 )
            state_address_2 = a3;
          cached_i = state_address_2;
          state_address_3 = (unsigned int *)&callee_output_word;
          if ( a4 )
            state_address_3 = a4;
          unused_written_slot_2 = state_address_3;
          call_result_3 = sub_1401604F0(a1);
          if ( (call_result_3 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
            goto LABEL_21;
          if ( *(_QWORD *)(a1 + 16) && (loaded_word_3 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), loaded_word_3 < 6) )
          {
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - loaded_word_3));
          }
          else
          {
            *(_QWORD *)(a1 + 192) += 6LL;
          }
          if ( (unsigned int)sub_1401604F0(a1) <= 0x10
            && (call_result_4 = sub_140160670(a1),
                *cached_i = call_result_4,
                call_result_5 = sub_140160670(a1),
                *unused_written_slot = call_result_5,
                (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0)
            && (unsigned int)sub_1401604F0(a1) == 3 )
          {
            *unused_written_slot_2 = 4;
          }
          else
          {
LABEL_21:
            loaded_word_4 = *record_pointer_3;
            *(_QWORD *)(a1 + 192) = *record_pointer_2;
            *(_QWORD *)(a1 + 200) = loaded_word_4;
            if ( !(unsigned int)sub_1401691A0(a1, loaded_word, (int *)a3, (char *)a4)
              && !(unsigned int)sub_14016A7D0(a1, (char *)loaded_word, a3, (int *)a4) )
            {
              selection_flag = 0;
              state_address_4 = (int *)&callee_output_word;
              if ( loaded_word )
                state_address_4 = loaded_word;
              unused_written_slot = state_address_4;
              state_address_5 = &callee_output_word;
              if ( a3 )
                state_address_5 = a3;
              unused_written_slot_2 = state_address_5;
              state_address_6 = (unsigned int *)&callee_output_word;
              if ( a4 )
                state_address_6 = a4;
              unused_written_slot_3 = state_address_6;
              if ( !(unsigned int)sub_140162BB0(a1) )
                goto LABEL_40;
              left_text = (     char *)sub_140162030(a1, (__int64)scratch_buffer_2);
              cached_i = left_text;
              if ( !*left_text )
                goto LABEL_40;
              do
              {
                if ( !strcmp_sr(left_text, "FORMAT=32-bit_rle_rgbe") )
                  selection_flag = 1;
                left_text = (     char *)sub_140162030(a1, (__int64)scratch_buffer_2);
                cached_i = left_text;
              }
              while ( *left_text );
              loaded_word = (int *)input_cursor;
              if ( !selection_flag )
                goto LABEL_40;
              cached_i = (_DWORD *)sub_140162030(a1, (__int64)scratch_buffer_2);
              if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(cached_i), (const char *)(uintptr_t)("-Y "), 3) )
                goto LABEL_40;
              cached_i = (_DWORD *)((char *)cached_i + 3);
              masked_bits = sub_14023CCCC((__int64)cached_i, (__int64 *)&cached_i, 0xAu);
              *unused_written_slot_2 = masked_bits;
              for ( i = cached_i; *(_BYTE *)i == 32; cached_i = i )
                i = (_DWORD *)((char *)i + 1);
              if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(i), (const char *)(uintptr_t)("+X "), 3) )
              {
                cached_i = (_DWORD *)((char *)cached_i + 3);
                call_result_6 = sub_14023CCCC((__int64)cached_i, nullptr, 0xAu);
                *unused_written_slot = call_result_6;
                *unused_written_slot_3 = 3;
              }
              else
              {
LABEL_40:
                loaded_word_5 = *record_pointer_3;
                *(_QWORD *)(a1 + 192) = *record_pointer_2;
                *(_QWORD *)(a1 + 200) = loaded_word_5;
                if ( !(unsigned int)sub_14016E370(a1, loaded_word, (int *)a3, a4) )
                  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
              }
            }
          }
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef cached_i
#undef unused_written_slot
#undef unused_written_slot_2
#undef input_cursor
#undef unused_written_slot_3
#undef scratch_buffer
#undef callee_output_word_2
#undef unused_written_slot_4
#undef scratch_buffer_2
#undef unused_frame_slot_1152

//----- (00000001401643B0) ----------------------------------------------------
__int64            sub_1401643B0(__int64 a1)
{
  __int64 table_value;
  __int64 table_value_2;
  int call_result;
  _QWORD *running_total;
  int loaded_word;
  __int64 loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401643B0[48];
#define scratch_buffer (*(__int64 (*)[4])(void *)(sr_frame_1401643B0 + 0)) /* [rsp+20h] */
#define frame_word_at_32 (*(int (*))(void *)(sr_frame_1401643B0 + 32)) /* [rsp+40h] */

  scratch_buffer[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)scratch_buffer, 2, 0) )
  {
    if ( frame_word_at_32 == 16 )
      return 1;
    table_value_2 = scratch_buffer[0];
    *(_QWORD *)(scratch_buffer[0] + 192) = *(_QWORD *)(scratch_buffer[0] + 208);
    *(_QWORD *)(table_value_2 + 200) = *(_QWORD *)(table_value_2 + 216);
  }
  else
  {
    table_value = scratch_buffer[0];
    *(_QWORD *)(scratch_buffer[0] + 192) = *(_QWORD *)(scratch_buffer[0] + 208);
    *(_QWORD *)(table_value + 200) = *(_QWORD *)(table_value + 216);
  }
  call_result = sub_1401604F0(a1);
  if ( (call_result << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
  {
    running_total = (_QWORD *)(a1 + 192);
LABEL_14:
    loaded_word_2 = *(_QWORD *)(a1 + 216);
    *running_total = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = loaded_word_2;
    return 0;
  }
  running_total = (_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word < 6) )
  {
    *running_total = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - loaded_word));
  }
  else
  {
    *running_total += 6LL;
  }
  if ( (unsigned int)sub_1401604F0(a1) > 0x10 )
    goto LABEL_14;
  sub_140160670(a1);
  sub_140160670(a1);
  if ( (unsigned int)sub_1401604F0(a1) != 16 )
    goto LABEL_14;
  return 1;
}
#undef scratch_buffer
#undef frame_word_at_32

//----- (0000000140164500) ----------------------------------------------------
__int64            sub_140164500(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, _WORD *a7)
{
  unsigned int loaded_word;
  __int64 shifted_bits;
  int loaded_word_2;
  __int64 shifted_bits_2;
  int loaded_word_3;
  signed int loaded_word_4;
  unsigned int *buffer_cursor;
  int i;
  int loaded_word_5;
  __int64 shifted_bits_3;
  __int64 integer_sum;
  signed int loaded_word_6;
  int loaded_word_7;
  int rol4_result;
  __int64 saved_loaded_word;
  int shifted_bits_4;
  int masked_bits;
  int integer_sum_2;
  int record_byte_offset;
  __int64 record_word_offset;
  int loaded_word_8;
  int loaded_word_9;
  unsigned int loaded_word_10;
  unsigned __int64 shifted_bits_5;
  int loaded_word_11;
  int masked_bits_2;
  int state_address;
  __int64 saved_state_address;
  unsigned int loaded_word_12;
  unsigned __int64 shifted_bits_6;
  __int64 loaded_word_13;
  int loaded_word_14;
  __int64 loaded_word_15;
  int loaded_word_16;
  int shifted_bits_7;
  int integer_difference;
  unsigned int loaded_word_17;
  unsigned int hiword_result;
  unsigned int *buffer_cursor_2;
  int iteration_count;
  __int64 j;
  int loaded_word_18;
  unsigned int loaded_word_19;
  __int64 shifted_bits_8;
  int loaded_word_20;
  __int64 masked_bits_3;
  int shifted_bits_9;
  __int64 saved_shifted_bits;
  __int64 table_value;
  int rol4_result_2;
  int table_value_2;
  __int16 shifted_bits_10;

  if ( *(int *)(a1 + 18468) < 16 )
  {
    sub_140161D20((_QWORD *)a1);
    if ( *(int *)(a1 + 18468) < 16 )
      sub_140161D20((_QWORD *)a1);
  }
  loaded_word = *(_DWORD *)(a1 + 18464);
  shifted_bits = *(unsigned __int8 *)(((unsigned __int64)loaded_word >> 23) + a3);
  if ( (_BYTE)shifted_bits != 0xFF )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 18468);
    shifted_bits_2 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a3);
    loaded_word_3 = *(unsigned __int8 *)(shifted_bits + a3 + 1280);
    if ( loaded_word_3 > loaded_word_2 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 18464) = loaded_word << loaded_word_3;
    *(_DWORD *)(a1 + 18468) = loaded_word_2 - loaded_word_3;
    loaded_word_4 = *(unsigned __int8 *)(shifted_bits_2 + a3 + 1024);
    goto LABEL_16;
  }
  buffer_cursor = (unsigned int *)(a3 + 1580);
  for ( i = 10; HIWORD(loaded_word) >= *buffer_cursor; ++buffer_cursor )
    ++i;
  loaded_word_5 = *(_DWORD *)(a1 + 18468);
  if ( i != 17 )
  {
    if ( i > loaded_word_5 )
      goto LABEL_48;
    shifted_bits_3 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (loaded_word >> (32 - i))));
    integer_sum = shifted_bits_3 + a3;
    if ( (dword_14026FBF0[*(unsigned __int8 *)(shifted_bits_3 + a3 + 1280)] & (loaded_word >> (32 - *(_BYTE *)(shifted_bits_3 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * shifted_bits_3 + 512) )
    {
      crt_assert(
        (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x81Au);
      loaded_word_5 = *(_DWORD *)(a1 + 18468);
      loaded_word = *(_DWORD *)(a1 + 18464);
    }
    *(_DWORD *)(a1 + 18464) = loaded_word << i;
    *(_DWORD *)(a1 + 18468) = loaded_word_5 - i;
    loaded_word_4 = *(unsigned __int8 *)(integer_sum + 1024);
LABEL_16:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
    if ( !loaded_word_4 )
      goto LABEL_21;
    loaded_word_6 = *(_DWORD *)(a1 + 18468);
    if ( loaded_word_6 < loaded_word_4 )
    {
      sub_140161D20((_QWORD *)a1);
      loaded_word_6 = *(_DWORD *)(a1 + 18468);
    }
    loaded_word_7 = *(_DWORD *)(a1 + 18464);
    rol4_result = __ROL4__(loaded_word_7, loaded_word_4);
    if ( (unsigned int)loaded_word_4 < 0x11 )
    {
      *(_DWORD *)(a1 + 18468) = loaded_word_6 - loaded_word_4;
      saved_loaded_word = loaded_word_4;
      shifted_bits_4 = dword_14026FC40[saved_loaded_word] & ~(loaded_word_7 >> 31);
      masked_bits = rol4_result & dword_14026FBF0[saved_loaded_word];
      *(_DWORD *)(a1 + 18464) = rol4_result & ~dword_14026FBF0[saved_loaded_word];
      integer_sum_2 = masked_bits + shifted_bits_4;
    }
    else
    {
LABEL_21:
      integer_sum_2 = 0;
    }
    record_byte_offset = 1;
    record_word_offset = 96LL * a6;
    loaded_word_8 = integer_sum_2 + *(_DWORD *)(record_word_offset + a1 + 18104);
    *(_DWORD *)(record_word_offset + a1 + 18104) = loaded_word_8;
    *(_WORD *)a2 = *a7 * loaded_word_8;
    while ( 1 )
    {
      loaded_word_9 = *(_DWORD *)(a1 + 18468);
      if ( loaded_word_9 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        loaded_word_9 = *(_DWORD *)(a1 + 18468);
      }
      loaded_word_10 = *(_DWORD *)(a1 + 18464);
      shifted_bits_5 = (unsigned __int64)loaded_word_10 >> 23;
      loaded_word_11 = *(__int16 *)(a5 + 2 * shifted_bits_5);
      if ( *(_WORD *)(a5 + 2 * shifted_bits_5) )
      {
        masked_bits_2 = loaded_word_11 & 0xF;
        state_address = ((loaded_word_11 >> 4) & 0xF) + record_byte_offset;
        *(_DWORD *)(a1 + 18464) = loaded_word_10 << masked_bits_2;
        saved_state_address = state_address;
        record_byte_offset = state_address + 1;
        *(_DWORD *)(a1 + 18468) = loaded_word_9 - masked_bits_2;
        *((_WORD *)a2 + byte_14026FC80[saved_state_address]) = (loaded_word_11 >> 8) * a7[byte_14026FC80[saved_state_address]];
      }
      else
      {
        loaded_word_12 = *(_DWORD *)(a1 + 18464);
        if ( loaded_word_9 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          loaded_word_10 = *(_DWORD *)(a1 + 18464);
          loaded_word_12 = loaded_word_10;
        }
        shifted_bits_6 = (unsigned __int64)loaded_word_12 >> 23;
        loaded_word_13 = *(unsigned __int8 *)(shifted_bits_6 + a4);
        if ( (_BYTE)loaded_word_13 == 0xFF )
        {
          hiword_result = HIWORD(loaded_word_12);
          buffer_cursor_2 = (unsigned int *)(a4 + 1580);
          iteration_count = 10;
          for ( j = 10; hiword_result >= *buffer_cursor_2; ++j )
          {
            ++iteration_count;
            ++buffer_cursor_2;
          }
          loaded_word_18 = *(_DWORD *)(a1 + 18468);
          if ( iteration_count == 17 )
          {
            *(_DWORD *)(a1 + 18468) = loaded_word_18 - 16;
            goto LABEL_48;
          }
          if ( iteration_count > loaded_word_18 )
            goto LABEL_48;
          loaded_word_19 = loaded_word_10;
          shifted_bits_8 = (int)(*(_DWORD *)(a4 + 4 * j + 1612) + (dword_14026FBF0[j] & (loaded_word_10 >> (32 - iteration_count))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(shifted_bits_8 + a4 + 1280)] & (loaded_word_10 >> (32 - *(_BYTE *)(shifted_bits_8 + a4 + 1280)))) != *(unsigned __int16 *)(a4 + 2 * shifted_bits_8 + 512) )
          {
            crt_assert(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            loaded_word_18 = *(_DWORD *)(a1 + 18468);
            loaded_word_19 = *(_DWORD *)(a1 + 18464);
          }
          integer_difference = loaded_word_18 - iteration_count;
          shifted_bits_7 = loaded_word_19 << iteration_count;
          *(_DWORD *)(a1 + 18464) = shifted_bits_7;
          *(_DWORD *)(a1 + 18468) = integer_difference;
          loaded_word_17 = *(unsigned __int8 *)(shifted_bits_8 + a4 + 1024);
        }
        else
        {
          loaded_word_14 = *(_DWORD *)(a1 + 18468);
          loaded_word_15 = *(unsigned __int8 *)(shifted_bits_6 + a4);
          loaded_word_16 = *(unsigned __int8 *)(loaded_word_13 + a4 + 1280);
          if ( loaded_word_16 > loaded_word_14 )
            goto LABEL_48;
          shifted_bits_7 = loaded_word_12 << loaded_word_16;
          integer_difference = loaded_word_14 - loaded_word_16;
          *(_DWORD *)(a1 + 18464) = shifted_bits_7;
          *(_DWORD *)(a1 + 18468) = integer_difference;
          loaded_word_17 = *(unsigned __int8 *)(loaded_word_15 + a4 + 1024);
        }
        loaded_word_20 = integer_difference;
        masked_bits_3 = loaded_word_17 & 0xF;
        if ( (loaded_word_17 & 0xF) != 0 )
        {
          shifted_bits_9 = (loaded_word_17 >> 4) + record_byte_offset;
          saved_shifted_bits = shifted_bits_9;
          record_byte_offset = shifted_bits_9 + 1;
          table_value = byte_14026FC80[saved_shifted_bits];
          if ( integer_difference < (int)masked_bits_3 )
          {
            sub_140161D20((_QWORD *)a1);
            shifted_bits_7 = *(_DWORD *)(a1 + 18464);
            loaded_word_20 = *(_DWORD *)(a1 + 18468);
          }
          *(_DWORD *)(a1 + 18468) = loaded_word_20 - masked_bits_3;
          rol4_result_2 = __ROL4__(shifted_bits_7, masked_bits_3);
          table_value_2 = dword_14026FBF0[masked_bits_3];
          shifted_bits_10 = ~(unsigned __int16)(shifted_bits_7 >> 31) & dword_14026FC40[masked_bits_3];
          *(_DWORD *)(a1 + 18464) = rol4_result_2 & ~table_value_2;
          *((_WORD *)a2 + table_value) = ((rol4_result_2 & table_value_2) + shifted_bits_10) * a7[table_value];
        }
        else
        {
          if ( loaded_word_17 != 240 )
            return 1;
          record_byte_offset += 16;
        }
      }
      if ( record_byte_offset >= 64 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18468) = loaded_word_5 - 16;
LABEL_48:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
  return 0;
}

//----- (0000000140164A80) ----------------------------------------------------
__int64            sub_140164A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 packed_word_bits;
  __int64 input_value;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  unsigned int loaded_word_4;
  unsigned __int64 shifted_bits;
  int loaded_word_5;
  int masked_bits;
  int state_address;
  __int64 saved_state_address;
  unsigned int loaded_word_6;
  unsigned __int64 shifted_bits_2;
  __int64 loaded_word_7;
  int loaded_word_8;
  __int64 loaded_word_9;
  int loaded_word_10;
  int shifted_bits_3;
  int loaded_word_11;
  int shifted_bits_4;
  unsigned int loaded_word_12;
  unsigned int hiword_result;
  unsigned int *buffer_cursor;
  int iteration_count;
  __int64 i;
  int loaded_word_13;
  __int64 shifted_bits_5;
  char saved_loaded_word;
  int loaded_word_14;
  __int64 shifted_bits_6;
  int masked_bits_2;
  int integer_sum;
  __int64 lookup_index;
  __int64 table_value;
  int rol4_result;
  int table_value_2;
  int shifted_bits_7;
  int shifted_bits_8;
  int shifted_bits_9;
  int table_value_3;
  int rol4_result_2;
  int integer_difference;
  unsigned __int16 shifted_bits_10;
  unsigned __int8 *buffer_cursor_2;
  __int16 *record_pointer;
  int loaded_word_15;
  int loaded_word_16;
  __int16 loaded_word_17;
  __int16 integer_difference_2;
  __int64 element_index;
  unsigned int loaded_word_18;
  unsigned __int64 shifted_bits_11;
  __int64 loaded_word_19;
  int loaded_word_20;
  __int64 loaded_word_21;
  int loaded_word_22;
  int shifted_bits_12;
  int loaded_word_23;
  unsigned int loaded_word_24;
  unsigned int *buffer_cursor_3;
  int iteration_count_2;
  __int64 j;
  int loaded_word_25;
  __int64 shifted_bits_13;
  char saved_loaded_word_2;
  __int64 shifted_bits_14;
  int masked_bits_3;
  int shifted_bits_15;
  int rol4_result_3;
  int table_value_4;
  int loaded_word_26;
  bool comparison_result;
  __int64 input_value_2;
  __int16 *saved_masked_bits;
  int loaded_word_27;
  int loaded_word_28;
  __int16 loaded_word_29;
  __int16 integer_difference_3;

  packed_word_bits = *(int *)(a1 + 18484);
  input_value = a2;
  if ( !(_DWORD)packed_word_bits )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  loaded_word = *(_DWORD *)(a1 + 18500);
  loaded_word_2 = *(_DWORD *)(a1 + 18496);
  if ( !*(_DWORD *)(a1 + 18492) )
  {
    if ( loaded_word )
    {
      *(_DWORD *)(a1 + 18500) = loaded_word - 1;
      return 1;
    }
    while ( 1 )
    {
      loaded_word_3 = *(_DWORD *)(a1 + 18468);
      if ( loaded_word_3 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        loaded_word_3 = *(_DWORD *)(a1 + 18468);
        input_value = a2;
      }
      loaded_word_4 = *(_DWORD *)(a1 + 18464);
      shifted_bits = (unsigned __int64)loaded_word_4 >> 23;
      loaded_word_5 = *(__int16 *)(a4 + 2 * shifted_bits);
      if ( *(_WORD *)(a4 + 2 * shifted_bits) )
      {
        masked_bits = loaded_word_5 & 0xF;
        state_address = ((loaded_word_5 >> 4) & 0xF) + packed_word_bits;
        saved_state_address = state_address;
        LODWORD(packed_word_bits) = state_address + 1;
        *(_DWORD *)(a1 + 18464) = loaded_word_4 << masked_bits;
        *(_DWORD *)(a1 + 18468) = loaded_word_3 - masked_bits;
        *(_WORD *)(input_value + 2LL * byte_14026FC80[saved_state_address]) = (unsigned __int16)(loaded_word_5 >> 8) << loaded_word_2;
      }
      else
      {
        loaded_word_6 = *(_DWORD *)(a1 + 18464);
        if ( loaded_word_3 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          loaded_word_4 = *(_DWORD *)(a1 + 18464);
          loaded_word_6 = loaded_word_4;
        }
        shifted_bits_2 = (unsigned __int64)loaded_word_6 >> 23;
        loaded_word_7 = *(unsigned __int8 *)(shifted_bits_2 + a3);
        if ( (_BYTE)loaded_word_7 == 0xFF )
        {
          hiword_result = HIWORD(loaded_word_6);
          buffer_cursor = (unsigned int *)(a3 + 1580);
          iteration_count = 10;
          for ( i = 10; hiword_result >= *buffer_cursor; ++i )
          {
            ++iteration_count;
            ++buffer_cursor;
          }
          loaded_word_13 = *(_DWORD *)(a1 + 18468);
          if ( iteration_count == 17 )
          {
            integer_difference = loaded_word_13 - 16;
            goto LABEL_94;
          }
          if ( iteration_count > loaded_word_13 )
            goto LABEL_95;
          shifted_bits_5 = (int)(*(_DWORD *)(a3 + 4 * i + 1612) + (dword_14026FBF0[i] & (loaded_word_4 >> (32 - iteration_count))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + shifted_bits_5 + 1280)] & (loaded_word_4 >> (32 - *(_BYTE *)(a3 + shifted_bits_5 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * shifted_bits_5 + 512) )
          {
            crt_assert(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            loaded_word_13 = *(_DWORD *)(a1 + 18468);
            loaded_word_4 = *(_DWORD *)(a1 + 18464);
          }
          loaded_word_11 = loaded_word_13 - iteration_count;
          shifted_bits_4 = loaded_word_4 << iteration_count;
          *(_DWORD *)(a1 + 18464) = shifted_bits_4;
          shifted_bits_3 = shifted_bits_4;
          *(_DWORD *)(a1 + 18468) = loaded_word_11;
          loaded_word_12 = *(unsigned __int8 *)(a3 + shifted_bits_5 + 1024);
        }
        else
        {
          loaded_word_8 = *(_DWORD *)(a1 + 18468);
          loaded_word_9 = *(unsigned __int8 *)(shifted_bits_2 + a3);
          loaded_word_10 = *(unsigned __int8 *)(loaded_word_7 + a3 + 1280);
          if ( loaded_word_10 > loaded_word_8 )
            goto LABEL_95;
          shifted_bits_3 = loaded_word_6 << loaded_word_10;
          loaded_word_11 = loaded_word_8 - loaded_word_10;
          *(_DWORD *)(a1 + 18464) = shifted_bits_3;
          *(_DWORD *)(a1 + 18468) = loaded_word_11;
          shifted_bits_4 = shifted_bits_3;
          loaded_word_12 = *(unsigned __int8 *)(loaded_word_9 + a3 + 1024);
        }
        saved_loaded_word = loaded_word_12;
        loaded_word_14 = loaded_word_11;
        shifted_bits_6 = loaded_word_12 >> 4;
        masked_bits_2 = saved_loaded_word & 0xF;
        if ( masked_bits_2 )
        {
          integer_sum = shifted_bits_6 + packed_word_bits;
          lookup_index = integer_sum;
          LODWORD(packed_word_bits) = integer_sum + 1;
          table_value = byte_14026FC80[lookup_index];
          if ( loaded_word_11 < masked_bits_2 )
          {
            sub_140161D20((_QWORD *)a1);
            shifted_bits_4 = *(_DWORD *)(a1 + 18464);
            loaded_word_14 = *(_DWORD *)(a1 + 18468);
          }
          input_value = a2;
          rol4_result = __ROL4__(shifted_bits_4, masked_bits_2);
          table_value_2 = dword_14026FBF0[masked_bits_2];
          shifted_bits_7 = dword_14026FC40[masked_bits_2] & ~(shifted_bits_4 >> 31);
          *(_DWORD *)(a1 + 18468) = loaded_word_14 - masked_bits_2;
          *(_DWORD *)(a1 + 18464) = rol4_result & ~table_value_2;
          *(_WORD *)(a2 + 2 * table_value) = (((unsigned __int16)rol4_result & (unsigned __int16)table_value_2) + (_WORD)shifted_bits_7) << loaded_word_2;
        }
        else
        {
          if ( (unsigned int)shifted_bits_6 < 0xF )
          {
            shifted_bits_8 = 1 << shifted_bits_6;
            *(_DWORD *)(a1 + 18500) = 1 << shifted_bits_6;
            if ( (_DWORD)shifted_bits_6 )
            {
              shifted_bits_9 = 1 << shifted_bits_6;
              if ( loaded_word_11 < (int)shifted_bits_6 )
              {
                sub_140161D20((_QWORD *)a1);
                loaded_word_11 = *(_DWORD *)(a1 + 18468);
                shifted_bits_9 = *(_DWORD *)(a1 + 18500);
                shifted_bits_3 = *(_DWORD *)(a1 + 18464);
              }
              table_value_3 = dword_14026FBF0[shifted_bits_6];
              *(_DWORD *)(a1 + 18468) = loaded_word_11 - shifted_bits_6;
              rol4_result_2 = __ROL4__(shifted_bits_3, shifted_bits_6);
              *(_DWORD *)(a1 + 18464) = rol4_result_2 & ~table_value_3;
              shifted_bits_8 = shifted_bits_9 + (rol4_result_2 & table_value_3);
            }
            *(_DWORD *)(a1 + 18500) = shifted_bits_8 - 1;
            return 1;
          }
          input_value = a2;
          LODWORD(packed_word_bits) = packed_word_bits + 16;
        }
      }
      if ( (int)packed_word_bits > *(_DWORD *)(a1 + 18488) )
        return 1;
    }
  }
  shifted_bits_10 = 1 << loaded_word_2;
  if ( !loaded_word )
  {
    element_index = *(int *)(a1 + 18484);
    while ( 1 )
    {
      if ( *(int *)(a1 + 18468) < 16 )
        sub_140161D20((_QWORD *)a1);
      loaded_word_18 = *(_DWORD *)(a1 + 18464);
      shifted_bits_11 = (unsigned __int64)loaded_word_18 >> 23;
      loaded_word_19 = *(unsigned __int8 *)(shifted_bits_11 + a3);
      if ( (_BYTE)loaded_word_19 == 0xFF )
      {
        buffer_cursor_3 = (unsigned int *)(a3 + 1580);
        iteration_count_2 = 10;
        for ( j = 10; HIWORD(loaded_word_18) >= *buffer_cursor_3; ++j )
        {
          ++iteration_count_2;
          ++buffer_cursor_3;
        }
        loaded_word_25 = *(_DWORD *)(a1 + 18468);
        if ( iteration_count_2 == 17 )
        {
          integer_difference = loaded_word_25 - 16;
LABEL_94:
          *(_DWORD *)(a1 + 18468) = integer_difference;
LABEL_95:
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
          return 0;
        }
        if ( iteration_count_2 > loaded_word_25 )
          goto LABEL_95;
        shifted_bits_13 = (int)(*(_DWORD *)(a3 + 4 * j + 1612) + (dword_14026FBF0[j] & (loaded_word_18 >> (32 - iteration_count_2))));
        if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + shifted_bits_13 + 1280)] & (loaded_word_18 >> (32 - *(_BYTE *)(a3 + shifted_bits_13 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * shifted_bits_13 + 512) )
        {
          crt_assert(
            (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
            0x81Au);
          loaded_word_25 = *(_DWORD *)(a1 + 18468);
          loaded_word_18 = *(_DWORD *)(a1 + 18464);
        }
        loaded_word_23 = loaded_word_25 - iteration_count_2;
        shifted_bits_12 = loaded_word_18 << iteration_count_2;
        *(_DWORD *)(a1 + 18464) = shifted_bits_12;
        *(_DWORD *)(a1 + 18468) = loaded_word_23;
        loaded_word_24 = *(unsigned __int8 *)(a3 + shifted_bits_13 + 1024);
      }
      else
      {
        loaded_word_20 = *(_DWORD *)(a1 + 18468);
        loaded_word_21 = *(unsigned __int8 *)(shifted_bits_11 + a3);
        loaded_word_22 = *(unsigned __int8 *)(loaded_word_19 + a3 + 1280);
        if ( loaded_word_22 > loaded_word_20 )
          goto LABEL_95;
        shifted_bits_12 = loaded_word_18 << loaded_word_22;
        loaded_word_23 = loaded_word_20 - loaded_word_22;
        *(_DWORD *)(a1 + 18464) = shifted_bits_12;
        *(_DWORD *)(a1 + 18468) = loaded_word_23;
        loaded_word_24 = *(unsigned __int8 *)(loaded_word_21 + a3 + 1024);
      }
      saved_loaded_word_2 = loaded_word_24;
      shifted_bits_14 = loaded_word_24 >> 4;
      masked_bits_3 = saved_loaded_word_2 & 0xF;
      if ( masked_bits_3 )
      {
        if ( masked_bits_3 != 1 )
          goto LABEL_95;
        if ( loaded_word_23 < 1 )
        {
          sub_140161D20((_QWORD *)a1);
          loaded_word_23 = *(_DWORD *)(a1 + 18468);
          shifted_bits_12 = *(_DWORD *)(a1 + 18464);
        }
        LOWORD(masked_bits_3) = shifted_bits_10;
        *(_DWORD *)(a1 + 18464) = 2 * shifted_bits_12;
        *(_DWORD *)(a1 + 18468) = loaded_word_23 - 1;
        if ( shifted_bits_12 >= 0 )
          masked_bits_3 = -(__int16)shifted_bits_10;
      }
      else if ( (unsigned int)shifted_bits_14 < 0xF )
      {
        shifted_bits_15 = (1 << shifted_bits_14) - 1;
        *(_DWORD *)(a1 + 18500) = shifted_bits_15;
        if ( (_DWORD)shifted_bits_14 )
        {
          if ( loaded_word_23 < (int)shifted_bits_14 )
          {
            sub_140161D20((_QWORD *)a1);
            loaded_word_23 = *(_DWORD *)(a1 + 18468);
            shifted_bits_15 = *(_DWORD *)(a1 + 18500);
            shifted_bits_12 = *(_DWORD *)(a1 + 18464);
          }
          rol4_result_3 = __ROL4__(shifted_bits_12, shifted_bits_14);
          table_value_4 = dword_14026FBF0[shifted_bits_14];
          *(_DWORD *)(a1 + 18468) = loaded_word_23 - shifted_bits_14;
          *(_DWORD *)(a1 + 18464) = rol4_result_3 & ~table_value_4;
          *(_DWORD *)(a1 + 18500) = shifted_bits_15 + (rol4_result_3 & table_value_4);
        }
        LODWORD(shifted_bits_14) = 64;
      }
      loaded_word_26 = *(_DWORD *)(a1 + 18488);
      comparison_result = (int)packed_word_bits <= loaded_word_26;
      if ( (int)packed_word_bits > loaded_word_26 )
        goto LABEL_91;
      input_value_2 = a2;
      while ( 1 )
      {
        LODWORD(packed_word_bits) = packed_word_bits + 1;
        saved_masked_bits = (__int16 *)(input_value_2 + 2LL * byte_14026FC80[element_index++]);
        if ( *saved_masked_bits )
        {
          loaded_word_27 = *(_DWORD *)(a1 + 18468);
          if ( loaded_word_27 < 1 )
          {
            sub_140161D20((_QWORD *)a1);
            loaded_word_27 = *(_DWORD *)(a1 + 18468);
            input_value_2 = a2;
          }
          loaded_word_28 = *(_DWORD *)(a1 + 18464);
          *(_DWORD *)(a1 + 18464) = 2 * loaded_word_28;
          *(_DWORD *)(a1 + 18468) = loaded_word_27 - 1;
          if ( loaded_word_28 < 0 )
          {
            loaded_word_29 = *saved_masked_bits;
            if ( ((unsigned __int16)*saved_masked_bits & shifted_bits_10) == 0 )
            {
              if ( loaded_word_29 <= 0 )
                integer_difference_3 = loaded_word_29 - shifted_bits_10;
              else
                integer_difference_3 = shifted_bits_10 + loaded_word_29;
              *saved_masked_bits = integer_difference_3;
            }
          }
          goto LABEL_88;
        }
        if ( !(_DWORD)shifted_bits_14 )
          break;
        LODWORD(shifted_bits_14) = shifted_bits_14 - 1;
LABEL_88:
        if ( (int)packed_word_bits > *(_DWORD *)(a1 + 18488) )
          return 1;
      }
      *saved_masked_bits = masked_bits_3;
      comparison_result = (int)packed_word_bits <= *(_DWORD *)(a1 + 18488);
LABEL_91:
      if ( !comparison_result )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18500) = loaded_word - 1;
  if ( (int)packed_word_bits > *(_DWORD *)(a1 + 18488) )
    return 1;
  buffer_cursor_2 = &byte_14026FC80[packed_word_bits];
  do
  {
    record_pointer = (__int16 *)(input_value + 2LL * *buffer_cursor_2);
    if ( *record_pointer )
    {
      loaded_word_15 = *(_DWORD *)(a1 + 18468);
      if ( loaded_word_15 < 1 )
      {
        sub_140161D20((_QWORD *)a1);
        loaded_word_15 = *(_DWORD *)(a1 + 18468);
        input_value = a2;
      }
      loaded_word_16 = *(_DWORD *)(a1 + 18464);
      *(_DWORD *)(a1 + 18464) = 2 * loaded_word_16;
      *(_DWORD *)(a1 + 18468) = loaded_word_15 - 1;
      if ( loaded_word_16 < 0 )
      {
        loaded_word_17 = *record_pointer;
        if ( ((unsigned __int16)*record_pointer & shifted_bits_10) == 0 )
        {
          if ( loaded_word_17 <= 0 )
            integer_difference_2 = loaded_word_17 - shifted_bits_10;
          else
            integer_difference_2 = shifted_bits_10 + loaded_word_17;
          *record_pointer = integer_difference_2;
        }
      }
    }
    LODWORD(packed_word_bits) = packed_word_bits + 1;
    ++buffer_cursor_2;
  }
  while ( (int)packed_word_bits <= *(_DWORD *)(a1 + 18488) );
  return 1;
}

//----- (0000000140165200) ----------------------------------------------------
__int64            sub_140165200(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 input_value;
  unsigned int loaded_word;
  unsigned __int64 shifted_bits;
  __int64 loaded_word_2;
  int loaded_word_3;
  __int64 loaded_word_4;
  int loaded_word_5;
  int shifted_bits_2;
  signed int integer_difference;
  signed int loaded_word_6;
  unsigned int *buffer_cursor;
  int i;
  int loaded_word_7;
  __int64 shifted_bits_3;
  __int64 integer_sum;
  int rol4_result;
  __int64 saved_loaded_word;
  int shifted_bits_4;
  int masked_bits;
  int integer_sum_2;
  int loaded_word_8;
  int loaded_word_9;
  int loaded_word_10;

  input_value = a4;
  if ( *(_DWORD *)(a1 + 18488) )
    goto LABEL_2;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  if ( *(_DWORD *)(a1 + 18492) )
  {
    loaded_word_9 = *(_DWORD *)(a1 + 18468);
    if ( loaded_word_9 < 1 )
    {
      sub_140161D20((_QWORD *)a1);
      loaded_word_9 = *(_DWORD *)(a1 + 18468);
    }
    loaded_word_10 = *(_DWORD *)(a1 + 18464);
    *(_DWORD *)(a1 + 18464) = 2 * loaded_word_10;
    *(_DWORD *)(a1 + 18468) = loaded_word_9 - 1;
    if ( loaded_word_10 < 0 )
      *(_WORD *)a2 += 1 << *(_DWORD *)(a1 + 18496);
    return 1;
  }
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  *(_OWORD *)(a2 + 80) = 0;
  *(_OWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 112) = 0;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  loaded_word = *(_DWORD *)(a1 + 18464);
  shifted_bits = (unsigned __int64)loaded_word >> 23;
  loaded_word_2 = *(unsigned __int8 *)(shifted_bits + a3);
  if ( (_BYTE)loaded_word_2 == 0xFF )
  {
    buffer_cursor = (unsigned int *)(a3 + 1580);
    for ( i = 10; HIWORD(loaded_word) >= *buffer_cursor; ++buffer_cursor )
      ++i;
    loaded_word_7 = *(_DWORD *)(a1 + 18468);
    if ( i == 17 )
    {
      *(_DWORD *)(a1 + 18468) = loaded_word_7 - 16;
    }
    else if ( i <= loaded_word_7 )
    {
      shifted_bits_3 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (loaded_word >> (32 - i))));
      integer_sum = shifted_bits_3 + a3;
      if ( (dword_14026FBF0[*(unsigned __int8 *)(shifted_bits_3 + a3 + 1280)] & (loaded_word >> (32 - *(_BYTE *)(shifted_bits_3 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * shifted_bits_3 + 512) )
      {
        crt_assert(
          (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
          0x81Au);
        loaded_word_7 = *(_DWORD *)(a1 + 18468);
        loaded_word = *(_DWORD *)(a1 + 18464);
      }
      integer_difference = loaded_word_7 - i;
      shifted_bits_2 = loaded_word << i;
      *(_DWORD *)(a1 + 18464) = shifted_bits_2;
      *(_DWORD *)(a1 + 18468) = integer_difference;
      loaded_word_6 = *(unsigned __int8 *)(integer_sum + 1024);
      goto LABEL_20;
    }
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  loaded_word_3 = *(_DWORD *)(a1 + 18468);
  loaded_word_4 = *(unsigned __int8 *)(shifted_bits + a3);
  loaded_word_5 = *(unsigned __int8 *)(loaded_word_2 + a3 + 1280);
  if ( loaded_word_5 > loaded_word_3 )
    goto LABEL_2;
  shifted_bits_2 = loaded_word << loaded_word_5;
  integer_difference = loaded_word_3 - loaded_word_5;
  *(_DWORD *)(a1 + 18464) = shifted_bits_2;
  *(_DWORD *)(a1 + 18468) = integer_difference;
  loaded_word_6 = *(unsigned __int8 *)(loaded_word_4 + a3 + 1024);
LABEL_20:
  if ( !loaded_word_6 )
    goto LABEL_25;
  if ( integer_difference < loaded_word_6 )
  {
    sub_140161D20((_QWORD *)a1);
    shifted_bits_2 = *(_DWORD *)(a1 + 18464);
  }
  rol4_result = __ROL4__(shifted_bits_2, loaded_word_6);
  if ( (unsigned int)loaded_word_6 <= 0x10 )
  {
    *(_DWORD *)(a1 + 18468) -= loaded_word_6;
    saved_loaded_word = loaded_word_6;
    shifted_bits_4 = ~(shifted_bits_2 >> 31) & dword_14026FC40[saved_loaded_word];
    masked_bits = rol4_result & dword_14026FBF0[saved_loaded_word];
    *(_DWORD *)(a1 + 18464) = rol4_result & ~dword_14026FBF0[saved_loaded_word];
    integer_sum_2 = masked_bits + shifted_bits_4;
  }
  else
  {
LABEL_25:
    integer_sum_2 = 0;
  }
  loaded_word_8 = integer_sum_2 + *(_DWORD *)(96 * input_value + a1 + 18104);
  *(_DWORD *)(96 * input_value + a1 + 18104) = loaded_word_8;
  *(_WORD *)a2 = (_WORD)loaded_word_8 << *(_DWORD *)(a1 + 18496);
  return 1;
}

//----- (0000000140165570) ----------------------------------------------------
void            sub_140165570(_DWORD *a1)
{
  int iteration_count;
  _DWORD *record_byte_offset;
  int iteration_count_2;
  int shifted_bits;
  int shifted_bits_2;
  int iteration_count_3;
  __int64 record_byte_offset_2;
  __int64 remaining_count;
  __int64 shifted_bits_3;
  __int64 record_byte_offset_3;
  char *state_address;
  __int16 masked_bits;
  __int16 loaded_word;

  if ( a1[4620] )
  {
    iteration_count = 0;
    if ( *(int *)(*(_QWORD *)a1 + 8LL) > 0 )
    {
      record_byte_offset = a1 + 4540;
      do
      {
        iteration_count_2 = 0;
        shifted_bits = (*(record_byte_offset - 13) + 7) >> 3;
        shifted_bits_2 = (*(record_byte_offset - 12) + 7) >> 3;
        if ( shifted_bits_2 > 0 )
        {
          do
          {
            iteration_count_3 = 0;
            if ( shifted_bits > 0 )
            {
              record_byte_offset_2 = 0;
              do
              {
                remaining_count = 16;
                shifted_bits_3 = *(_QWORD *)record_byte_offset + 2LL * ((iteration_count_3 + iteration_count_2 * record_byte_offset[2]) << 6);
                record_byte_offset_3 = shifted_bits_3 + 2;
                state_address = (char *)&a1[32 * (__int64)(int)*(record_byte_offset - 17) + 3362] - shifted_bits_3;
                do
                {
                  masked_bits = *(_WORD *)&state_address[record_byte_offset_3 - 2];
                  loaded_word = *(_WORD *)(record_byte_offset_3 - 2);
                  record_byte_offset_3 += 8;
                  *(_WORD *)(record_byte_offset_3 - 10) = masked_bits * loaded_word;
                  *(_WORD *)(record_byte_offset_3 - 8) *= *(_WORD *)&state_address[record_byte_offset_3 - 8];
                  *(_WORD *)(record_byte_offset_3 - 6) *= *(_WORD *)&state_address[record_byte_offset_3 - 6];
                  *(_WORD *)(record_byte_offset_3 - 4) *= *(_WORD *)&state_address[record_byte_offset_3 - 4];
                  --remaining_count;
                }
                while ( remaining_count );
                (*((void (           **)(__int64))a1 + 2318))(*((_QWORD *)record_byte_offset - 4) + record_byte_offset_2 + 8 * iteration_count_2 * *(record_byte_offset - 11));
                ++iteration_count_3;
                record_byte_offset_2 += 8;
              }
              while ( iteration_count_3 < shifted_bits );
            }
            ++iteration_count_2;
          }
          while ( iteration_count_2 < shifted_bits_2 );
        }
        ++iteration_count;
        record_byte_offset += 24;
      }
      while ( iteration_count < *(_DWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}

//----- (0000000140165700) ----------------------------------------------------
__int64            sub_140165700(__int64 a1)
{
  int loaded_word;
  int loaded_word_2;
  int scaled_index;

  loaded_word = *(_DWORD *)(a1 + 18468);
  if ( loaded_word < 1 )
  {
    sub_140161D20((_QWORD *)a1);
    loaded_word = *(_DWORD *)(a1 + 18468);
  }
  loaded_word_2 = *(_DWORD *)(a1 + 18464);
  scaled_index = 2 * loaded_word_2;
  *(_DWORD *)(a1 + 18464) = scaled_index;
  *(_DWORD *)(a1 + 18468) = loaded_word - 1;
  return loaded_word_2 & 0x80000000;
}

//----- (0000000140165750) ----------------------------------------------------
__int64            sub_140165750(__int64 a1, int a2)
{
  int loaded_word;
  __int64 input_value;
  int rol4_result;
  int table_value;

  loaded_word = *(_DWORD *)(a1 + 18468);
  input_value = a2;
  if ( loaded_word < a2 )
  {
    sub_140161D20((_QWORD *)a1);
    loaded_word = *(_DWORD *)(a1 + 18468);
  }
  rol4_result = __ROL4__(*(_DWORD *)(a1 + 18464), input_value);
  *(_DWORD *)(a1 + 18468) = loaded_word - input_value;
  table_value = dword_14026FBF0[input_value];
  *(_DWORD *)(a1 + 18464) = rol4_result & ~table_value;
  return rol4_result & (unsigned int)table_value;
}

//----- (00000001401657B0) ----------------------------------------------------
__int64            sub_1401657B0(__int64 a1, __int64 a2)
{
  unsigned int loaded_word;
  __int64 shifted_bits;
  int loaded_word_2;
  __int64 shifted_bits_2;
  int loaded_word_3;
  unsigned int *buffer_cursor;
  int i;
  int loaded_word_4;
  __int64 shifted_bits_3;
  __int64 integer_sum;

  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  loaded_word = *(_DWORD *)(a1 + 18464);
  shifted_bits = *(unsigned __int8 *)(((unsigned __int64)loaded_word >> 23) + a2);
  if ( (_BYTE)shifted_bits != 0xFF )
  {
    loaded_word_2 = *(_DWORD *)(a1 + 18468);
    shifted_bits_2 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a2);
    loaded_word_3 = *(unsigned __int8 *)(shifted_bits + a2 + 1280);
    if ( loaded_word_3 <= loaded_word_2 )
    {
      *(_DWORD *)(a1 + 18464) = loaded_word << loaded_word_3;
      *(_DWORD *)(a1 + 18468) = loaded_word_2 - loaded_word_3;
      return *(unsigned __int8 *)(shifted_bits_2 + a2 + 1024);
    }
    return 0xFFFFFFFFLL;
  }
  buffer_cursor = (unsigned int *)(a2 + 1580);
  for ( i = 10; HIWORD(loaded_word) >= *buffer_cursor; ++buffer_cursor )
    ++i;
  loaded_word_4 = *(_DWORD *)(a1 + 18468);
  if ( i == 17 )
  {
    *(_DWORD *)(a1 + 18468) = loaded_word_4 - 16;
    return 0xFFFFFFFFLL;
  }
  if ( i > loaded_word_4 )
    return 0xFFFFFFFFLL;
  shifted_bits_3 = (int)(*(_DWORD *)(a2 + 4LL * i + 1612) + (dword_14026FBF0[i] & (loaded_word >> (32 - i))));
  integer_sum = shifted_bits_3 + a2;
  if ( (dword_14026FBF0[*(unsigned __int8 *)(shifted_bits_3 + a2 + 1280)] & (loaded_word >> (32 - *(_BYTE *)(shifted_bits_3 + a2 + 1280)))) != *(unsigned __int16 *)(a2 + 2 * shifted_bits_3 + 512) )
  {
    crt_assert(
      (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x81Au);
    loaded_word_4 = *(_DWORD *)(a1 + 18468);
    loaded_word = *(_DWORD *)(a1 + 18464);
  }
  *(_DWORD *)(a1 + 18468) = loaded_word_4 - i;
  *(_DWORD *)(a1 + 18464) = loaded_word << i;
  return *(unsigned __int8 *)(integer_sum + 1024);
}

//----- (0000000140165940) ----------------------------------------------------
__int64            sub_140165940(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 *allocated_buffer;
  _QWORD *record_pointer;
  unsigned int unused_written_slot;
  int selection_code;

  allocated_buffer = (__int64 *)sr_path_malloc(18568);
  *allocated_buffer = a1;
  if ( sub_14015F960(allocated_buffer, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*allocated_buffer;
    if ( a3 )
      *a3 = *(_DWORD *)(*allocated_buffer + 4);
    unused_written_slot = 1;
    if ( a4 )
    {
      selection_code = 1;
      if ( *(int *)(*allocated_buffer + 8) >= 3 )
        selection_code = 3;
      *a4 = selection_code;
    }
  }
  else
  {
    record_pointer = (_QWORD *)*allocated_buffer;
    unused_written_slot = 0;
    record_pointer[24] = *(_QWORD *)(*allocated_buffer + 208);
    record_pointer[25] = record_pointer[27];
  }
  free(allocated_buffer);
  return unused_written_slot;
}

//----- (0000000140165A10) ----------------------------------------------------
__int64            sub_140165A10(__int64 *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  _QWORD *record_pointer;
  int selection_code;

  if ( sub_14015F960(a1, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*a1;
    if ( a3 )
      *a3 = *(_DWORD *)(*a1 + 4);
    if ( a4 )
    {
      selection_code = 1;
      if ( *(int *)(*a1 + 8) >= 3 )
        selection_code = 3;
      *a4 = selection_code;
    }
    return 1;
  }
  else
  {
    record_pointer = (_QWORD *)*a1;
    record_pointer[24] = *(_QWORD *)(*a1 + 208);
    record_pointer[25] = record_pointer[27];
    return 0;
  }
}

//----- (0000000140165AC0) ----------------------------------------------------
__int64            sub_140165AC0(__int64 a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  _QWORD *allocated_buffer;
  __int64 unused_written_slot;

  allocated_buffer = (_QWORD *)sr_path_malloc(18568);
  *allocated_buffer = a1;
  sub_14016DFD0(allocated_buffer);
  unused_written_slot = sub_1400E54D0(allocated_buffer, a2, a3, a4, a5);
  free(allocated_buffer);
  return unused_written_slot;
}

//----- (0000000140165BB0) ----------------------------------------------------
__int64            sub_140165BB0(_QWORD *a1)
{
  __int64 allocated_buffer;
  unsigned int unused_written_slot;

  allocated_buffer = sr_path_malloc(18568);
  *(_QWORD *)allocated_buffer = (uint64)(uintptr_t)(a1);
  sub_14016DFD0((_QWORD *)allocated_buffer);
  unused_written_slot = 0;
  *(_DWORD *)(allocated_buffer + 18508) = -1;
  *(_DWORD *)(allocated_buffer + 18504) = 0;
  *(_BYTE *)(allocated_buffer + 18472) = -1;
  if ( sub_140160790((_BYTE *)allocated_buffer) == -40 )
    unused_written_slot = 1;
  else
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  a1[24] = a1[26];
  a1[25] = a1[27];
  free((void *)allocated_buffer);
  return unused_written_slot;
}

//----- (0000000140165C60) ----------------------------------------------------
__int64            sub_140165C60(char *Block, int a2, int a3, int a4)
{
  __int64 packed_word_bits;
  char *allocation_buffer;
  int scaled_index;
  int scaled_index_2;
  __int64 saved_allocated_buffer;
  int saved_packed_word_bits;
  int scaled_index_3;
  __int64 scaled_index_4;
  float scaled_value;
  __int64 saved_packed_word_bits_2;
  char *saved_allocation_buffer;
  float scaled_value_2;
  __int64 saved_allocated_buffer_2;
  __int64 remaining_count;
  __int64 cached_packed_word_bits;
  __int64 element_index;
  __int64 record_byte_offset;
  double pow_result;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 integer_difference;
  __int64 scaled_index_7;
  char *state_address;
  __int64 integer_difference_2;
  float *converted_vector;
  unsigned int shifted_bits;
  __int64 remaining_count_2;
  unsigned int scaled_index_8;
  float comparison_operand;
  __m128i converted_vector_2;
  int table_value;
  int scaled_index_9;
  float *weighted_sum;
  char *state_address_2;
  __int64 remaining_count_3;
  int scaled_index_10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140165C60[32];
#define cached_packed_word_bits_2 (*(int (*))(void *)(sr_frame_140165C60 + 0)) /* [rsp+20h] */
#define allocated_buffer (*(__int64 (*))(void *)(sr_frame_140165C60 + 24)) /* [rsp+38h] */

  packed_word_bits = a4;
  allocation_buffer = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (scaled_index = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && scaled_index > (int)(0x7FFFFFFFu / a4)
    || (scaled_index_2 = a4 * scaled_index, a4 * scaled_index < 0)
    || scaled_index_2 > 0x1FFFFFFF
    || (allocated_buffer = sr_path_malloc(4 * scaled_index_2), (saved_allocated_buffer = allocated_buffer) == 0) )
  {
    free(allocation_buffer);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    saved_packed_word_bits = packed_word_bits;
    if ( (packed_word_bits & 1) == 0 )
      saved_packed_word_bits = packed_word_bits - 1;
    scaled_index_3 = 0;
    cached_packed_word_bits_2 = saved_packed_word_bits;
    if ( scaled_index > 0 )
    {
      scaled_index_4 = 4 * packed_word_bits;
      scaled_value = *(float *)&dword_140301838;
      saved_packed_word_bits_2 = packed_word_bits;
      saved_allocation_buffer = allocation_buffer;
      scaled_value_2 = *(float *)&dword_14030183C;
      saved_allocated_buffer_2 = allocated_buffer;
      remaining_count = (unsigned int)scaled_index;
      cached_packed_word_bits = saved_packed_word_bits;
      do
      {
        if ( cached_packed_word_bits > 0 )
        {
          element_index = 0;
          record_byte_offset = saved_allocated_buffer_2;
          do
          {
            pow_result = pow((float)((float)(unsigned __int8)saved_allocation_buffer[element_index] * 0.0039215689), scaled_value);
            record_byte_offset += 4;
            ++element_index;
            *(float *)&pow_result = pow_result * scaled_value_2;
            *(_DWORD *)(record_byte_offset - 4) = LODWORD(pow_result);
          }
          while ( element_index < cached_packed_word_bits );
          saved_packed_word_bits_2 = packed_word_bits;
          scaled_index_4 = 4 * packed_word_bits;
        }
        saved_allocated_buffer_2 += scaled_index_4;
        saved_allocation_buffer += saved_packed_word_bits_2;
        --remaining_count;
      }
      while ( remaining_count );
      LODWORD(packed_word_bits) = a4;
      scaled_index_3 = 0;
      saved_packed_word_bits = cached_packed_word_bits_2;
      allocation_buffer = Block;
      saved_allocated_buffer = allocated_buffer;
    }
    if ( saved_packed_word_bits < (int)packed_word_bits )
    {
      if ( scaled_index >= 4 )
      {
        scaled_index_5 = 4 * (int)packed_word_bits;
        scaled_index_6 = saved_packed_word_bits + 2 * (int)packed_word_bits;
        integer_difference = saved_packed_word_bits + (int)packed_word_bits - scaled_index_6;
        scaled_index_7 = (int)packed_word_bits + saved_packed_word_bits + 2 * (int)packed_word_bits - scaled_index_6;
        state_address = &allocation_buffer[scaled_index_6];
        integer_difference_2 = saved_packed_word_bits - scaled_index_6;
        converted_vector = (float *)(saved_allocated_buffer + 4 * scaled_index_6);
        shifted_bits = ((unsigned int)(scaled_index - 4) >> 2) + 1;
        remaining_count_2 = shifted_bits;
        scaled_index_3 = 4 * shifted_bits;
        do
        {
          scaled_index_8 = (unsigned __int8)*state_address;
          comparison_operand = (float)(unsigned __int8)state_address[integer_difference];
          converted_vector[integer_difference_2] = (float)(unsigned __int8)state_address[integer_difference_2] * 0.0039215689;
          converted_vector_2 = _mm_cvtsi32_si128(scaled_index_8);
          table_value = (unsigned __int8)state_address[scaled_index_7];
          state_address += scaled_index_5;
          converted_vector[integer_difference] = comparison_operand * 0.0039215689;
          *converted_vector = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0] * 0.0039215689;
          converted_vector[scaled_index_7] = (float)table_value * 0.0039215689;
          converted_vector += scaled_index_5;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      if ( scaled_index_3 < scaled_index )
      {
        scaled_index_9 = saved_packed_word_bits + packed_word_bits * scaled_index_3;
        weighted_sum = (float *)(saved_allocated_buffer + 4LL * scaled_index_9);
        state_address_2 = &allocation_buffer[scaled_index_9];
        remaining_count_3 = (unsigned int)(scaled_index - scaled_index_3);
        do
        {
          scaled_index_10 = (unsigned __int8)*state_address_2;
          state_address_2 += (int)packed_word_bits;
          *weighted_sum = (float)scaled_index_10 * 0.0039215689;
          weighted_sum += (int)packed_word_bits;
          --remaining_count_3;
        }
        while ( remaining_count_3 );
      }
    }
    free(allocation_buffer);
    return saved_allocated_buffer;
  }
}
#undef cached_packed_word_bits_2
#undef allocated_buffer

//----- (0000000140165FD0) ----------------------------------------------------
__m128i *           sub_140165FD0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  unsigned int loaded_word;
  __m128i *result;
  __m128i *allocation_buffer;
  int table_value;
  unsigned int loaded_word_2;
  int scaled_index;
  __int64 allocated_buffer;
  __m128i *saved_allocated_buffer;
  __int64 i;
  __int64 client_static_tls_result;
  unsigned int state_word;
  int scratch_buffer[4];

  loaded_word = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, a4, a5, scratch_buffer, 16);
  allocation_buffer = result;
  if ( !result )
    return result;
  table_value = scratch_buffer[0];
  if ( scratch_buffer[0] == 8 )
    goto LABEL_5;
  if ( scratch_buffer[0] != 16 )
  {
    crt_assert(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4D3u);
LABEL_5:
    if ( table_value != 16 )
    {
      if ( a5 )
        loaded_word_2 = a5;
      else
        loaded_word_2 = *a4;
      scaled_index = loaded_word_2 * *a3 * *a2;
      allocated_buffer = sr_path_malloc(2 * scaled_index);
      saved_allocated_buffer = (__m128i *)allocated_buffer;
      if ( allocated_buffer )
      {
        if ( scaled_index > 0 )
        {
          for ( i = 0; i < scaled_index; ++i )
            *(_WORD *)(allocated_buffer + 2 * i) = 257 * SR_VEC_PTR_LANES(128, allocation_buffer, u8)[i];
        }
        free(allocation_buffer);
        allocation_buffer = saved_allocated_buffer;
      }
      else
      {
        allocation_buffer = nullptr;
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      }
    }
  }
  client_static_tls_result = sr_client_static_tls();
  if ( *(_DWORD *)(client_static_tls_result + 8) )
    state_word = *(_DWORD *)(client_static_tls_result + 12);
  else
    state_word = g_144980DAC;
  if ( state_word )
  {
    if ( !a5 )
      loaded_word = *a4;
    sub_14016F470(allocation_buffer, *a2, *a3, 2 * loaded_word);
  }
  return allocation_buffer;
}

//----- (0000000140166160) ----------------------------------------------------
__m128i *           sub_140166160(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int loaded_word;
  __m128i *result;
  __m128i *allocation_buffer;
  unsigned int loaded_word_2;
  int allocation_size;
  __int64 saved_allocation_size;
  unsigned __int64 allocated_buffer;
  unsigned int unused_written_slot;
  int record_byte_offset;
  __int64 integer_difference;
  int masked_bits;
  unsigned __int64 running_total;
  __m128i *record_byte_offset_2;
  __m128i converted_vector;
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __int64 i;
  __int64 client_static_tls_result;
  unsigned int state_word;
  int scratch_buffer[14];

  loaded_word = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, (int *)a4, a5, scratch_buffer, 8);
  allocation_buffer = result;
  if ( !result )
    return result;
  if ( scratch_buffer[0] == 8 )
    goto LABEL_18;
  if ( scratch_buffer[0] != 16 )
    crt_assert(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4B9u);
  if ( a5 )
    loaded_word_2 = a5;
  else
    loaded_word_2 = *a4;
  allocation_size = loaded_word_2 * *a3 * *a2;
  saved_allocation_size = allocation_size;
  allocated_buffer = sr_path_malloc(allocation_size);
  if ( allocated_buffer )
  {
    record_byte_offset = 0;
    if ( allocation_size >= 32 )
    {
      integer_difference = allocation_size - 1;
      if ( allocated_buffer > (unsigned __int64)allocation_buffer + 2 * integer_difference || integer_difference + allocated_buffer < (unsigned __int64)allocation_buffer )
      {
        masked_bits = allocation_size - (allocation_size & 0x1F);
        running_total = allocated_buffer + 16;
        record_byte_offset_2 = allocation_buffer + 2;
        converted_vector = _mm_cvtsi32_si128(8u);
        do
        {
          loaded_vector = _mm_loadu_si128(record_byte_offset_2 - 2);
          running_total += 32LL;
          record_byte_offset += 32;
          loaded_vector_2 = _mm_loadu_si128(record_byte_offset_2 - 1);
          record_byte_offset_2 += 4;
          vector_result = _mm_and_si128(_mm_srl_epi16(loaded_vector, converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          vector_result_2 = _mm_and_si128(_mm_srl_epi16(loaded_vector_2, converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(running_total - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result, vector_result), u64)[0];
          *(_QWORD *)(running_total - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_2, vector_result_2), u64)[0];
          vector_result_3 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(record_byte_offset_2 - 4), converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          vector_result_4 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(record_byte_offset_2 - 3), converted_vector), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(running_total - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_3, vector_result_3), u64)[0];
          *(_QWORD *)(running_total - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(vector_result_4, vector_result_4), u64)[0];
        }
        while ( (__int64)(-16LL - allocated_buffer + running_total) < masked_bits );
      }
    }
    for ( i = record_byte_offset; i < saved_allocation_size; ++i )
      *(_BYTE *)(i + allocated_buffer) = SR_VEC_PTR_LANES(128, allocation_buffer, i8)[2 * i + 1];
    free(allocation_buffer);
    allocation_buffer = (__m128i *)allocated_buffer;
LABEL_18:
    unused_written_slot = g_144CBE4C4;
    goto LABEL_19;
  }
  unused_written_slot = g_144CBE4C4;
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
  allocation_buffer = nullptr;
LABEL_19:
  client_static_tls_result = sr_client_static_tls();
  if ( *(_DWORD *)(client_static_tls_result + 8) )
    state_word = *(_DWORD *)(client_static_tls_result + 12);
  else
    state_word = g_144980DAC;
  if ( state_word )
  {
    if ( !a5 )
      loaded_word = *a4;
    sub_14016F470(allocation_buffer, *a2, *a3, loaded_word);
  }
  return allocation_buffer;
}

// 140166284: conditional instruction was optimized away because edi.4>=20
// 14016627F: mask 0x8000001F is shortened because edi.4 <= 0x7FFFFFFF

//----- (00000001401663E0) ----------------------------------------------------
__int64            sub_1401663E0(     __m128i *a1, __int64 *a2, _DWORD *a3, int *a4)
{
  _DWORD *record_pointer;
  unsigned int comparison_operand;
  int call_result;
  __int64 table_value;
  int iteration_count;
  __int64 state_address;
  char *allocated_buffer;
  int saved_iteration_count;
       __m128i *returned_pointer;
       __m128i *source_buffer;
  int cached_callee_output_word;
  int comparison_operand_2;
  int byte_count;
  __int64 allocated_buffer_2;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401663E0[35136];
#define frame_word_at_0 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 0)) /* [rsp+10h] */
#define record_pointer_2 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 8)) /* [rsp+18h] */
#define unused_written_slot (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 16)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int * (*))(void *)(sr_frame_1401663E0 + 24)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int * (*))(void *)(sr_frame_1401663E0 + 32)) /* [rsp+30h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_1401663E0 + 48)) /* [rsp+40h] */
#define frame_word_at_52 (*(int (*))(void *)(sr_frame_1401663E0 + 52)) /* [rsp+44h] */
#define Block (*(void * (*))(void *)(sr_frame_1401663E0 + 56)) /* [rsp+48h] */
#define allocation_buffer (*(void * (*))(void *)(sr_frame_1401663E0 + 64)) /* [rsp+50h] */
#define allocation_buffer_2 (*(void * (*))(void *)(sr_frame_1401663E0 + 72)) /* [rsp+58h] */
#define frame_word_at_34968 (*(int (*))(void *)(sr_frame_1401663E0 + 34968)) /* [rsp+88A8h] */
#define unused_frame_slot_34976 (*(__int64 (*))(void *)(sr_frame_1401663E0 + 34976)) /* [rsp+88B0h] */
#define record_pointer_3 (*(int * (*))(void *)(sr_frame_1401663E0 + 35104)) /* [rsp+8930h] */
#define record_pointer_4 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 35112)) /* [rsp+8938h] */
#define frame_word_at_35120 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 35120)) /* [rsp+8940h] */

  record_pointer = record_pointer_4;
  comparison_operand = frame_word_at_35120;
  unused_written_slot_3 = record_pointer_3;
  record_pointer_2 = record_pointer_4;
  unused_written_slot_2 = a4;
  unused_written_slot = a3;
  frame_word_at_0 = frame_word_at_35120;
  call_result = sub_140161BB0((__int64)a1);
  table_value = SR_VEC_LANES(128, a1[13], i64)[1];
  SR_VEC_LANES(128, a1[12], i64)[0] = SR_VEC_LANES(128, a1[13], i64)[0];
  SR_VEC_LANES(128, a1[12], i64)[1] = table_value;
  if ( !call_result )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return 0; /* 0x14016669A: xor eax, eax */
  }
  iteration_count = 0;
  state_address = 0;
  allocated_buffer = nullptr;
  crt_memset((void *)(uintptr_t)(&callee_output_word), 0, 0x8870u);
  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    saved_iteration_count = iteration_count;
    returned_pointer = (     __m128i *)sub_140160EF0((__int64)a1, &callee_output_word, record_pointer, comparison_operand, state_address);
    source_buffer = returned_pointer;
    if ( returned_pointer == a1 || !returned_pointer )
      break;
    ++iteration_count;
    cached_callee_output_word = callee_output_word;
    comparison_operand_2 = frame_word_at_52;
    *unused_written_slot = callee_output_word;
    *unused_written_slot_2 = comparison_operand_2;
    byte_count = 4 * cached_callee_output_word * comparison_operand_2;
    if ( !allocated_buffer )
    {
      allocated_buffer = (char *)sr_path_malloc(iteration_count * byte_count);
      if ( !a2 )
        goto LABEL_13;
      allocated_buffer_2 = sr_path_malloc(4LL * iteration_count);
      goto LABEL_12;
    }
    allocated_buffer = (char *)j__realloc_base_sr(allocated_buffer, iteration_count * byte_count);
    if ( !allocated_buffer )
    {
      free(Block);
      free(allocation_buffer_2);
      free(allocation_buffer);
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return 0; /* 0x1401665DE: xor eax, eax */
    }
    if ( a2 )
    {
      allocated_buffer_2 = j__realloc_base_sr(*a2, 4LL * iteration_count);
LABEL_12:
      *a2 = allocated_buffer_2;
    }
LABEL_13:
    crt_memcpy((__m128i *)&allocated_buffer[byte_count * saved_iteration_count], source_buffer, byte_count);
    if ( iteration_count >= 2 )
      state_address = (__int64)&allocated_buffer[-2 * byte_count];
    comparison_operand = frame_word_at_0;
    record_pointer = record_pointer_2;
    if ( a2 )
      *(_DWORD *)(*a2 + 4LL * (unsigned int)(iteration_count - 1)) = frame_word_at_34968;
  }
  free(Block);
  free(allocation_buffer_2);
  free(allocation_buffer);
  if ( (comparison_operand & 0xFFFFFFFB) != 0 )
    allocated_buffer = (char *)sub_14015D7E0(allocated_buffer, 4, comparison_operand, iteration_count * callee_output_word, frame_word_at_52); /* 0x140166665: mov rbp, rax */
  *unused_written_slot_3 = iteration_count;
  return (__int64)allocated_buffer; /* 0x14016666F: mov rax, rbp */
}
#undef frame_word_at_0
#undef record_pointer_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef callee_output_word
#undef frame_word_at_52
#undef Block
#undef allocation_buffer
#undef allocation_buffer_2
#undef frame_word_at_34968
#undef unused_frame_slot_34976
#undef record_pointer_3
#undef record_pointer_4
#undef frame_word_at_35120

//----- (00000001401666B0) ----------------------------------------------------
char *           sub_1401666B0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5, int *a6, int a7)
{
  unsigned int loaded_word;
  char *allocation_buffer;
  __int64 allocated_buffer;
  char **saved_input_byte;
  unsigned __int64 *saved_loaded_word;
  __int64 *allocated_buffer_2;
  __int64 call_result;
  int call_result_2;
  char *loaded_record_pointer;
  unsigned __int64 loaded_word_2;
  char *unused_written_slot;
  int state_address;
  int *table_value;
  int loaded_word_3;
  int loaded_word_4;
  char *loaded_record_pointer_2;
  char input_byte;
  char *input_byte_2;
  char input_byte_3;
  int call_result_3;
  unsigned __int64 shifted_bits;
  __int64 selection_code;
  int call_result_4;
  int call_result_5;
  int call_result_6;
  __int64 remaining_count;
  char *input_byte_4;
  unsigned __int64 loaded_word_5;
  char input_byte_5;
  char *byte_cursor;
  char input_byte_6;
  void *returned_pointer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401666B0[80];
#define loaded_word_6 (*(int (*))(void *)(sr_frame_1401666B0 + 0)) /* [rsp+20h] */
#define callee_output_word (*(_QWORD (*)[5])(void *)(sr_frame_1401666B0 + 32)) /* [rsp+40h] */

  int selection_flag;

  loaded_word = a5;
  allocation_buffer = nullptr;
  *(_QWORD *)a6 = 8;
  a6[2] = 0;
  allocated_buffer = sr_path_malloc(18568);
  *(_QWORD *)allocated_buffer = a1;
  sub_14016DFD0((_QWORD *)allocated_buffer);
  *(_DWORD *)(allocated_buffer + 18504) = 0;
  *(_DWORD *)(allocated_buffer + 18508) = -1;
  *(_BYTE *)(allocated_buffer + 18472) = -1;
  if ( sub_140160790((_BYTE *)allocated_buffer) == -40 )
  {
    selection_flag = 1;
  }
  else
  {
    selection_flag = 0;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  }
  saved_input_byte = (char **)(a1 + 192);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  saved_loaded_word = (unsigned __int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  free((void *)allocated_buffer);
  if ( selection_flag )
  {
    allocated_buffer_2 = (__int64 *)sr_path_malloc(18568);
    *allocated_buffer_2 = a1;
    sub_14016DFD0(allocated_buffer_2);
    call_result = sub_1400E54D0(allocated_buffer_2, a2, a3, a4, a5);
    free(allocated_buffer_2);
    return (char *)call_result;
  }
  call_result_2 = sub_14015CE80(a1);
  loaded_record_pointer = *(char **)(a1 + 208);
  loaded_word_2 = *(_QWORD *)(a1 + 216);
  *saved_input_byte = loaded_record_pointer;
  *saved_loaded_word = loaded_word_2;
  if ( !call_result_2 )
  {
    if ( (unsigned __int64)loaded_record_pointer >= loaded_word_2 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_41;
      stbi_refill_buffer(a1);
      input_byte = **saved_input_byte;
      input_byte_2 = *saved_input_byte + 1;
    }
    else
    {
      input_byte = *loaded_record_pointer;
      input_byte_2 = loaded_record_pointer + 1;
    }
    *saved_input_byte = input_byte_2;
    if ( input_byte == 66 )
    {
      if ( (unsigned __int64)input_byte_2 >= *saved_loaded_word )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_41;
        stbi_refill_buffer(a1);
        input_byte_2 = *saved_input_byte;
      }
      input_byte_3 = *input_byte_2;
      *saved_input_byte = input_byte_2 + 1;
      if ( input_byte_3 == 77 )
      {
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        call_result_3 = sub_1401605B0(a1);
        shifted_bits = call_result_3 + ((unsigned int)sub_1401605B0(a1) << 16);
        if ( (unsigned int)shifted_bits <= 0x38 && (selection_code = 0x100010000001000LL, _bittest64(&selection_code, shifted_bits))
          || (_DWORD)shifted_bits == 108
          || (_DWORD)shifted_bits == 124 )
        {
          LODWORD(allocation_buffer) = 1;
        }
        *saved_input_byte = *(char **)(a1 + 208);
        *saved_loaded_word = *(_QWORD *)(a1 + 216);
        if ( (_DWORD)allocation_buffer )
          return (char *)sub_14015B780((unsigned int *)a1, a2, a3, a4, a5);
LABEL_42:
        call_result_4 = sub_140161BB0(a1);
        *saved_input_byte = *(char **)(a1 + 208);
        *saved_loaded_word = *(_QWORD *)(a1 + 216);
        if ( call_result_4 )
          return (char *)sub_140160E00(a1, a2, a3, a4);
        call_result_5 = sub_1401604F0(a1);
        call_result_6 = sub_1401604F0(a1);
        *saved_input_byte = *(char **)(a1 + 208);
        *saved_loaded_word = *(_QWORD *)(a1 + 216);
        if ( call_result_6 + (call_result_5 << 16) == 943870035 )
          return sub_14016CB70(a1, a2, a3, a4, a5, a6, a7);
        if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
        {
          remaining_count = 84;
          do
          {
            if ( (unsigned __int64)*saved_input_byte >= *saved_loaded_word )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                ++*saved_input_byte;
              }
            }
            else
            {
              ++*saved_input_byte;
            }
            --remaining_count;
          }
          while ( remaining_count );
          if ( (unsigned int)sub_140169470(a1, (__int64)"PICT") )
          {
            *saved_input_byte = *(char **)(a1 + 208);
            *saved_loaded_word = *(_QWORD *)(a1 + 216);
            return sub_140169510(a1, a2, a3, a4, a5);
          }
        }
        input_byte_4 = *(char **)(a1 + 208);
        loaded_word_5 = *(_QWORD *)(a1 + 216);
        *saved_input_byte = input_byte_4;
        *saved_loaded_word = loaded_word_5;
        if ( (unsigned __int64)input_byte_4 >= loaded_word_5 )
        {
          if ( !*(_DWORD *)(a1 + 48) )
          {
            input_byte_5 = 0;
            goto LABEL_60;
          }
          stbi_refill_buffer(a1);
          input_byte_4 = *saved_input_byte;
          loaded_word_5 = *saved_loaded_word;
        }
        input_byte_5 = *input_byte_4;
        byte_cursor = input_byte_4 + 1;
        *saved_input_byte = byte_cursor;
        if ( (unsigned __int64)byte_cursor < loaded_word_5 )
        {
          input_byte_6 = *byte_cursor;
          *saved_input_byte = byte_cursor + 1;
          goto LABEL_63;
        }
LABEL_60:
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          input_byte_6 = *(*saved_input_byte)++;
        }
        else
        {
          input_byte_6 = 0;
        }
LABEL_63:
        if ( input_byte_5 == 80 && (unsigned __int8)(input_byte_6 - 53) <= 1u )
          return sub_14016A9F0(a1, a2, a3, a4, a5);
        *saved_input_byte = *(char **)(a1 + 208);
        *saved_loaded_word = *(_QWORD *)(a1 + 216);
        if ( (unsigned int)sub_140162BB0(a1) )
        {
          returned_pointer = (void *)sub_1401623E0(a1, a2, a3, a4, a5);
          if ( !a5 )
            loaded_word = *a4;
          return (char *)sub_140162D40(returned_pointer, *a2, *a3, loaded_word);
        }
        else if ( (unsigned int)sub_14016F1B0(a1) )
        {
          return sub_14016E7A0(a1, a2, a3, (unsigned int *)a4, a5);
        }
        else
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
          return nullptr;
        }
      }
    }
LABEL_41:
    *saved_input_byte = *(char **)(a1 + 208);
    *saved_loaded_word = *(_QWORD *)(a1 + 216);
    goto LABEL_42;
  }
  callee_output_word[0] = a1;
  unused_written_slot = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
  }
  else
  {
    if ( !(unsigned int)sub_140167D10((__int64)callee_output_word, 0, a5) )
    {
      allocation_buffer = (*(char **)(void *)&callee_output_word[3]);
LABEL_22:
      free(allocation_buffer);
      free((void *)callee_output_word[2]);
      free((void *)callee_output_word[1]);
      return unused_written_slot;
    }
    state_address = (*(int *)(void *)&callee_output_word[4]);
    if ( (*(int *)(void *)&callee_output_word[4]) > 8 )
    {
      if ( (*(int *)(void *)&callee_output_word[4]) != 16 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
        return nullptr;
      }
    }
    else
    {
      state_address = 8;
    }
    *a6 = state_address;
    unused_written_slot = (*(char **)(void *)&callee_output_word[3]);
    table_value = (int *)callee_output_word[0];
    if ( !a5
      || (loaded_word_3 = *(_DWORD *)(callee_output_word[0] + 12LL), a5 == loaded_word_3)
      || ((loaded_word_4 = *(_DWORD *)callee_output_word[0], loaded_word_6 = *(_DWORD *)(callee_output_word[0] + 4LL), state_address != 8)
        ? (loaded_record_pointer_2 = sub_14015DD00((*(char **)(void *)&callee_output_word[3]), loaded_word_3, a5, loaded_word_4, loaded_word_6))
        : (loaded_record_pointer_2 = sub_14015D7E0((*(char **)(void *)&callee_output_word[3]), loaded_word_3, a5, loaded_word_4, loaded_word_6)),
          table_value[3] = a5,
          (unused_written_slot = loaded_record_pointer_2) != nullptr) )
    {
      *a2 = *table_value;
      *a3 = table_value[1];
      if ( a4 )
        *a4 = table_value[2];
      goto LABEL_22;
    }
  }
  return nullptr;
}
#undef loaded_word_6
#undef callee_output_word

//----- (0000000140166D20) ----------------------------------------------------
__m128i *           sub_140166D20(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int loaded_word;
  __m128i *call_result;
  __int64 client_static_tls_result;
  __m128i *returned_pointer;

  loaded_word = a5;
  if ( (unsigned int)sub_140162BB0(a1) )
  {
    call_result = (__m128i *)sub_1401623E0(a1, a2, a3, a4, a5);
    if ( call_result )
    {
      client_static_tls_result = sr_client_static_tls();
      if ( *(_DWORD *)(client_static_tls_result + 8) ? *(_DWORD *)(client_static_tls_result + 12) : g_144980DAC )
      {
        if ( !a5 )
          loaded_word = *a4;
        sub_14016F470(call_result, *a2, *a3, 4 * loaded_word);
      }
    }
    return call_result;
  }
  else
  {
    returned_pointer = sub_140166160(a1, a2, a3, a4, a5);
    if ( returned_pointer )
    {
      if ( !a5 )
        loaded_word = *a4;
      return (__m128i *)sub_140165C60(SR_VEC_PTR_LANES(128, returned_pointer, i8), *a2, *a3, loaded_word);
    }
    else
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
      return nullptr;
    }
  }
}

//----- (0000000140166EE0) ----------------------------------------------------
_BOOL8            sub_140166EE0(int a1, int a2, int a3, int a4, int a5)
{
  int scaled_index;
  int scaled_index_2;
  _BOOL8 result;

  result = false;
  if ( a1 >= 0 && a2 >= 0 && (!a2 || a1 <= (int)(0x7FFFFFFFu / a2)) )
  {
    scaled_index = a2 * a1;
    if ( scaled_index >= 0 && a3 >= 0 && (!a3 || scaled_index <= (int)(0x7FFFFFFFu / a3)) )
    {
      scaled_index_2 = a3 * scaled_index;
      if ( scaled_index_2 >= 0 && a4 >= 0 && (!a4 || scaled_index_2 <= (int)(0x7FFFFFFFu / a4)) && a5 >= 0 && a4 * scaled_index_2 <= 0x7FFFFFFF - a5 )
        return true;
    }
  }
  return result;
}

//----- (0000000140167010) ----------------------------------------------------
__int64            sub_140167010(int a1, int a2, int a3, int a4, int a5)
{
  int unrecovered_register_value;

  if ( sub_140166EE0(a1, a2, a3, a4, a5) )
    return sr_path_malloc(a5 + a4 * unrecovered_register_value * a2 * a1);
  else
    return 0;
}

//----- (00000001401670A0) ----------------------------------------------------
__int64            sub_1401670A0(__int64 a1, unsigned __int16 a2)
{
  __int64 input_value;
  signed __int16 loaded_word;
  __int64 result;
  int loaded_word_2;
  _BYTE *loaded_record_pointer;
  _BYTE *loaded_record_pointer_2;
  int loaded_word_3;
  int remaining_count;
  int shifted_bits;
  int loaded_word_4;
  int shifted_bits_2;

  input_value = a2;
  loaded_word = *(_WORD *)(a1 + 4LL * a2 + 2100);
  if ( loaded_word >= 0 )
    result = sub_1401670A0(a1, loaded_word);
  loaded_word_2 = *(_DWORD *)(a1 + 34912);
  if ( loaded_word_2 < *(_DWORD *)(a1 + 34904) )
  {
    loaded_record_pointer = (_BYTE *)(*(_QWORD *)(a1 + 8) + loaded_word_2 + *(_DWORD *)(a1 + 34908));
    *(_BYTE *)((loaded_word_2 + *(_DWORD *)(a1 + 34908)) / 4 + *(_QWORD *)(a1 + 24)) = 1;
    loaded_record_pointer_2 = (_BYTE *)(*(_QWORD *)(a1 + 34872) + 4LL * *(unsigned __int8 *)(a1 + 4 * input_value + 2103));
    if ( loaded_record_pointer_2[3] > 0x80u )
    {
      *loaded_record_pointer = loaded_record_pointer_2[2];
      loaded_record_pointer[1] = loaded_record_pointer_2[1];
      loaded_record_pointer[2] = *loaded_record_pointer_2;
      loaded_record_pointer[3] = loaded_record_pointer_2[3];
    }
    *(_DWORD *)(a1 + 34908) += 4;
    result = *(unsigned int *)(a1 + 34908);
    if ( (int)result >= *(_DWORD *)(a1 + 34900) )
    {
      loaded_word_3 = *(_DWORD *)(a1 + 34904);
      *(_DWORD *)(a1 + 34908) = *(_DWORD *)(a1 + 34892);
      result = *(unsigned int *)(a1 + 34884);
      *(_DWORD *)(a1 + 34912) += result;
      if ( *(_DWORD *)(a1 + 34912) >= loaded_word_3 )
      {
        remaining_count = *(_DWORD *)(a1 + 34880);
        do
        {
          if ( remaining_count <= 0 )
            break;
          shifted_bits = *(_DWORD *)(a1 + 34916) << remaining_count;
          loaded_word_4 = *(_DWORD *)(a1 + 34896);
          *(_DWORD *)(a1 + 34884) = shifted_bits;
          shifted_bits_2 = (shifted_bits >> 1) + loaded_word_4;
          --remaining_count;
          *(_DWORD *)(a1 + 34912) = shifted_bits_2;
          *(_DWORD *)(a1 + 34880) = remaining_count;
        }
        while ( shifted_bits_2 >= loaded_word_3 );
      }
    }
  }
  return result;
}

//----- (00000001401671C0) ----------------------------------------------------
__int64            sub_1401671C0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int integer_difference;
  signed int abs32_result;
  signed int abs32_result_2;
  signed int abs32_result_3;

  integer_difference = a1 - a3 + a2 - a3;
  abs32_result = abs32(a2 - a3);
  abs32_result_2 = abs32(a1 - a3);
  abs32_result_3 = abs32(integer_difference);
  if ( abs32_result <= abs32_result_2 && abs32_result <= abs32_result_3 )
    return a1;
  if ( abs32_result_2 <= abs32_result_3 )
    return a2;
  return a3;
}

//----- (0000000140167230) ----------------------------------------------------
__int64            sub_140167230(__int64 a1)
{
  int loaded_word;
  int saved_loaded_word;
  bool comparison_result;
  int loaded_word_2;
  __int64 loaded_word_3;
  int iteration_count;
  __int64 scaled_index;
  int shifted_bits;
  int shifted_bits_2;
  int iteration_count_2;
  int record_byte_offset;
  int saved_loaded_word_2;
  int loaded_word_4;
  int iteration_count_3;
  int iteration_count_4;
  int iteration_count_5;
  int *record_pointer;
  __int64 loaded_word_5;
  int iteration_count_6;
  __int64 scaled_index_2;
  int loaded_word_6;
  int iteration_count_7;
  int loaded_word_7;
  int saved_loaded_word_3;
  int loaded_word_8;
  __int64 loaded_word_9;
  int iteration_count_8;
  __int64 scaled_index_3;
  int shifted_bits_3;
  int shifted_bits_4;
  int iteration_count_9;
  __int64 shifted_bits_5;
  int saved_loaded_word_4;
  int loaded_word_10;
  int iteration_count_10;
  int iteration_count_11;
  int iteration_count_12;
  int *record_pointer_2;
  __int64 loaded_word_11;
  int iteration_count_13;
  __int64 scaled_index_4;
  int loaded_word_12;
  int iteration_count_14;
  int saved_loaded_word_5;
  int loaded_word_13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167230[224];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140167230 + 0)) /* [rsp+0h] */
#define integer_sum (*(int (*))(void *)(sr_frame_140167230 + 64)) /* [rsp+40h] */
#define saved_iteration_count (*(int (*))(void *)(sr_frame_140167230 + 68)) /* [rsp+44h] */
#define record_byte_offset_2 (*(__int64 (*))(void *)(sr_frame_140167230 + 72)) /* [rsp+48h] */
#define scratch_buffer (*(_OWORD (*)[8])(void *)(sr_frame_140167230 + 80)) /* [rsp+50h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_140167230 + 208)) /* [rsp+D0h] */

  *(_DWORD *)(a1 + 18392) = 0;
  *(_DWORD *)(a1 + 18296) = 0;
  *(_DWORD *)(a1 + 18200) = 0;
  *(_DWORD *)(a1 + 18104) = 0;
  loaded_word = *(_DWORD *)(a1 + 18536);
  *(_QWORD *)(a1 + 18464) = 0;
  *(_DWORD *)(a1 + 18476) = 0;
  *(_BYTE *)(a1 + 18472) = -1;
  saved_loaded_word = 0x7FFFFFFF;
  if ( loaded_word )
    saved_loaded_word = loaded_word;
  *(_DWORD *)(a1 + 18500) = 0;
  comparison_result = *(_DWORD *)(a1 + 18480) == 0;
  loaded_word_2 = *(_DWORD *)(a1 + 18516);
  *(_DWORD *)(a1 + 18540) = saved_loaded_word;
  if ( comparison_result )
  {
    if ( loaded_word_2 == 1 )
    {
      loaded_word_3 = *(int *)(a1 + 18520);
      iteration_count = 0;
      scaled_index = a1 + 96 * loaded_word_3;
      shifted_bits = (*(_DWORD *)(scaled_index + 18108) + 7) >> 3;
      shifted_bits_2 = (*(_DWORD *)(scaled_index + 18112) + 7) >> 3;
      if ( shifted_bits_2 > 0 )
      {
        while ( 1 )
        {
          iteration_count_2 = 0;
          if ( shifted_bits > 0 )
            break;
LABEL_17:
          if ( ++iteration_count >= shifted_bits_2 )
            return 1; /* 0x140167480: mov eax, 1 */
        }
        record_byte_offset = 0;
        while ( (unsigned int)sub_140164500(
                                a1,
                                scratch_buffer,
                                1680LL * *(int *)(scaled_index + 18096) + a1 + 8,
                                1680LL * *(int *)(scaled_index + 18100) + a1 + 6728,
                                ((__int64)*(int *)(scaled_index + 18100) << 10) + a1 + 13960,
                                loaded_word_3,
                                (_WORD *)(((__int64)*(int *)(scaled_index + 18092) << 7) + a1 + 13448)) )
        {
          (*(void (           **)(_QWORD, _QWORD, _OWORD *))(a1 + 18544))(
            record_byte_offset + *(_QWORD *)(scaled_index + 18128) + 8 * iteration_count * *(_DWORD *)(scaled_index + 18116),
            *(unsigned int *)(scaled_index + 18116),
            scratch_buffer);
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return 1; /* 0x140167480: mov eax, 1 */
            *(_DWORD *)(a1 + 18392) = 0;
            saved_loaded_word_2 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            loaded_word_4 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( loaded_word_4 )
              saved_loaded_word_2 = loaded_word_4;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = saved_loaded_word_2;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          ++iteration_count_2;
          record_byte_offset += 8;
          if ( iteration_count_2 >= shifted_bits )
            goto LABEL_17;
        }
        return 0; /* 0x1401673A1: block decoder failed -> xor eax, eax */
      }
    }
    else
    {
      iteration_count_3 = 0;
      integer_sum = 0;
      if ( *(int *)(a1 + 18068) > 0 )
      {
        while ( 1 )
        {
          iteration_count_4 = 0;
          if ( *(int *)(a1 + 18064) > 0 )
            break;
LABEL_38:
          integer_sum = ++iteration_count_3;
          if ( iteration_count_3 >= *(_DWORD *)(a1 + 18068) )
            return 1; /* 0x140167480: mov eax, 1 */
        }
        while ( 1 )
        {
          iteration_count_5 = 0;
          saved_iteration_count = 0;
          if ( *(int *)(a1 + 18516) > 0 )
            break;
LABEL_30:
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return 1; /* 0x140167480: mov eax, 1 */
            *(_DWORD *)(a1 + 18392) = 0;
            saved_loaded_word_3 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            loaded_word_8 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( loaded_word_8 )
              saved_loaded_word_3 = loaded_word_8;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = saved_loaded_word_3;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          iteration_count_3 = integer_sum;
          if ( ++iteration_count_4 >= *(_DWORD *)(a1 + 18064) )
            goto LABEL_38;
        }
        record_pointer = (int *)(a1 + 18520);
        record_byte_offset_2 = a1 + 18520;
        while ( 1 )
        {
          loaded_word_5 = *record_pointer;
          iteration_count_6 = 0;
          scaled_index_2 = a1 + 96 * loaded_word_5;
          if ( *(int *)(scaled_index_2 + 18088) > 0 )
            break;
LABEL_29:
          ++iteration_count_5;
          record_pointer = (int *)(record_byte_offset_2 + 4);
          saved_iteration_count = iteration_count_5;
          record_byte_offset_2 += 4;
          if ( iteration_count_5 >= *(_DWORD *)(a1 + 18516) )
            goto LABEL_30;
        }
        while ( 1 )
        {
          loaded_word_6 = *(_DWORD *)(scaled_index_2 + 18084);
          iteration_count_7 = 0;
          if ( loaded_word_6 > 0 )
            break;
LABEL_27:
          if ( ++iteration_count_6 >= *(_DWORD *)(scaled_index_2 + 18088) )
          {
            iteration_count_5 = saved_iteration_count;
            goto LABEL_29;
          }
        }
        while ( 1 )
        {
          loaded_word_7 = iteration_count_6 + iteration_count_3 * *(_DWORD *)(scaled_index_2 + 18088);
          if ( !(unsigned int)sub_140164500(
                                a1,
                                scratch_buffer,
                                1680LL * *(int *)(scaled_index_2 + 18096) + a1 + 8,
                                1680LL * *(int *)(scaled_index_2 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(scaled_index_2 + 18100) << 10) + a1 + 13960,
                                loaded_word_5,
                                (_WORD *)(((__int64)*(int *)(scaled_index_2 + 18092) << 7) + a1 + 13448)) )
            return 0; /* 0x1401675AE: block decoder failed -> xor eax, eax */
          (*(void (           **)(__int64, _QWORD, _OWORD *))(a1 + 18544))(
            *(_QWORD *)(scaled_index_2 + 18128) + 8 * *(_DWORD *)(scaled_index_2 + 18116) * loaded_word_7 + (__int64)(8 * (iteration_count_7 + iteration_count_4 * loaded_word_6)),
            *(unsigned int *)(scaled_index_2 + 18116),
            scratch_buffer);
          loaded_word_6 = *(_DWORD *)(scaled_index_2 + 18084);
          ++iteration_count_7;
          iteration_count_3 = integer_sum;
          if ( iteration_count_7 >= loaded_word_6 )
            goto LABEL_27;
        }
      }
    }
  }
  else if ( loaded_word_2 == 1 )
  {
    loaded_word_9 = *(int *)(a1 + 18520);
    iteration_count_8 = 0;
    scaled_index_3 = 96 * loaded_word_9;
    shifted_bits_3 = (*(_DWORD *)(96 * loaded_word_9 + a1 + 18108) + 7) >> 3;
    shifted_bits_4 = (*(_DWORD *)(96 * loaded_word_9 + a1 + 18112) + 7) >> 3;
    if ( shifted_bits_4 > 0 )
    {
      while ( 1 )
      {
        iteration_count_9 = 0;
        if ( shifted_bits_3 > 0 )
          break;
LABEL_55:
        if ( ++iteration_count_8 >= shifted_bits_4 )
          return 1; /* 0x140167480: mov eax, 1 */
      }
      while ( 1 )
      {
        shifted_bits_5 = *(_QWORD *)(scaled_index_3 + a1 + 18160) + 2LL * ((iteration_count_9 + iteration_count_8 * *(_DWORD *)(scaled_index_3 + a1 + 18168)) << 6);
        if ( !(*(_DWORD *)(a1 + 18484)
             ? sub_140164A80(
                 a1,
                 shifted_bits_5,
                 1680LL * *(int *)(a1 + scaled_index_3 + 18100) + a1 + 6728,
                 ((__int64)*(int *)(a1 + scaled_index_3 + 18100) << 10) + a1 + 13960)
             : (unsigned int)sub_140165200(a1, shifted_bits_5, 1680LL * *(int *)(a1 + scaled_index_3 + 18096) + a1 + 8, loaded_word_9)) )
          return 0; /* 0x1401677CF: block decoder failed -> xor eax, eax */
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return 1; /* 0x140167480: mov eax, 1 */
          *(_DWORD *)(a1 + 18392) = 0;
          saved_loaded_word_4 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          loaded_word_10 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( loaded_word_10 )
            saved_loaded_word_4 = loaded_word_10;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = saved_loaded_word_4;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++iteration_count_9 >= shifted_bits_3 )
          goto LABEL_55;
      }
    }
  }
  else
  {
    iteration_count_10 = 0;
    if ( *(int *)(a1 + 18068) > 0 )
    {
      while ( 1 )
      {
        iteration_count_11 = 0;
        if ( *(int *)(a1 + 18064) > 0 )
          break;
LABEL_75:
        if ( ++iteration_count_10 >= *(_DWORD *)(a1 + 18068) )
          return 1; /* 0x140167480: mov eax, 1 */
      }
      while ( 1 )
      {
        iteration_count_12 = 0;
        if ( *(int *)(a1 + 18516) > 0 )
          break;
LABEL_67:
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return 1; /* 0x140167480: mov eax, 1 */
          *(_DWORD *)(a1 + 18392) = 0;
          saved_loaded_word_5 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          loaded_word_13 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( loaded_word_13 )
            saved_loaded_word_5 = loaded_word_13;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = saved_loaded_word_5;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++iteration_count_11 >= *(_DWORD *)(a1 + 18064) )
          goto LABEL_75;
      }
      record_pointer_2 = (int *)(a1 + 18520);
      record_byte_offset_2 = a1 + 18520;
      while ( 1 )
      {
        loaded_word_11 = *record_pointer_2;
        iteration_count_13 = 0;
        scaled_index_4 = a1 + 96 * loaded_word_11;
        if ( *(int *)(scaled_index_4 + 18088) > 0 )
          break;
LABEL_66:
        ++iteration_count_12;
        record_pointer_2 = (int *)(record_byte_offset_2 + 4);
        record_byte_offset_2 += 4;
        if ( iteration_count_12 >= *(_DWORD *)(a1 + 18516) )
          goto LABEL_67;
      }
      while ( 1 )
      {
        loaded_word_12 = *(_DWORD *)(scaled_index_4 + 18084);
        iteration_count_14 = 0;
        if ( loaded_word_12 > 0 )
          break;
LABEL_65:
        if ( ++iteration_count_13 >= *(_DWORD *)(scaled_index_4 + 18088) )
          goto LABEL_66;
      }
      while ( (unsigned int)sub_140165200(
                              a1,
                              *(_QWORD *)(scaled_index_4 + 18160)
                            + 2LL
                            * ((iteration_count_14 + *(_DWORD *)(scaled_index_4 + 18168) * (iteration_count_13 + *(_DWORD *)(scaled_index_4 + 18088) * iteration_count_10) + iteration_count_11 * loaded_word_12) << 6),
                              1680LL * *(int *)(scaled_index_4 + 18096) + a1 + 8,
                              loaded_word_11) )
      {
        loaded_word_12 = *(_DWORD *)(scaled_index_4 + 18084);
        if ( ++iteration_count_14 >= loaded_word_12 )
          goto LABEL_65;
      }
      return 0; /* 0x14016794E: block decoder failed -> xor eax, eax */
    }
  }
  return 1; /* 0x140167480: mov eax, 1 */
}
#undef unused_frame_slot_0
#undef integer_sum
#undef saved_iteration_count
#undef record_byte_offset_2
#undef scratch_buffer
#undef unused_frame_slot_208

//----- (0000000140167A50) ----------------------------------------------------
__int64            sub_140167A50(__int64 a1)
{
  _BYTE *buffer_cursor;
  unsigned int loaded_word;
  __int64 masked_bits;
  unsigned int loaded_word_2;
  int masked_bits_2;
  int remaining_amount;
  int integer_difference;
  unsigned __int64 byte_count;
  unsigned int loaded_word_3;
  unsigned int loaded_word_4;
  unsigned int masked_bits_3;
  int masked_bits_4;
  int table_value;
  int running_total;
  int loaded_word_5;
  unsigned int loaded_word_6;
  unsigned __int8 *buffer_cursor_2;
  char input_byte;

  buffer_cursor = *(_BYTE **)(a1 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(int *)(a1 + 16) < 16 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
          goto LABEL_40;
        sub_140160350(a1);
      }
      loaded_word = *(_DWORD *)(a1 + 20);
      masked_bits = loaded_word & 0x1FF;
      loaded_word_2 = *(unsigned __int16 *)(a1 + 2 * masked_bits + 52);
      if ( *(_WORD *)(a1 + 2 * masked_bits + 52) )
      {
        *(_DWORD *)(a1 + 16) -= loaded_word_2 >> 9;
        *(_DWORD *)(a1 + 20) = loaded_word >> (loaded_word_2 >> 9);
        masked_bits_2 = loaded_word_2 & 0x1FF;
      }
      else
      {
        masked_bits_2 = sub_14016FB90(a1, a1 + 52);
      }
      if ( masked_bits_2 >= 256 )
        break;
      if ( masked_bits_2 < 0 )
        goto LABEL_40;
      if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 40) )
      {
        if ( !(unsigned int)sub_14016F9E0(a1, (__int64)buffer_cursor, 1u) )
          return 0;
        buffer_cursor = *(_BYTE **)(a1 + 24);
      }
      *buffer_cursor++ = masked_bits_2;
    }
    if ( masked_bits_2 == 256 )
      break;
    remaining_amount = *(_DWORD *)(a1 + 16);
    integer_difference = sr_inflate_length_extra[masked_bits_2 - 257];
    byte_count = (unsigned int)sr_inflate_length_base[masked_bits_2 - 257];
    if ( integer_difference )
    {
      if ( remaining_amount < integer_difference )
      {
        sub_140160350(a1);
        remaining_amount = *(_DWORD *)(a1 + 16);
      }
      loaded_word_3 = *(_DWORD *)(a1 + 20);
      remaining_amount -= integer_difference;
      *(_DWORD *)(a1 + 20) = loaded_word_3 >> integer_difference;
      *(_DWORD *)(a1 + 16) = remaining_amount;
      byte_count = (loaded_word_3 & ((1 << integer_difference) - 1)) + (unsigned int)byte_count;
    }
    if ( remaining_amount < 16 )
    {
      if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_40;
      sub_140160350(a1);
    }
    loaded_word_4 = *(_DWORD *)(a1 + 20);
    masked_bits_3 = *(unsigned __int16 *)(a1 + 2LL * (loaded_word_4 & 0x1FF) + 2072);
    if ( *(_WORD *)(a1 + 2LL * (loaded_word_4 & 0x1FF) + 2072) )
    {
      *(_DWORD *)(a1 + 16) -= masked_bits_3 >> 9;
      *(_DWORD *)(a1 + 20) = loaded_word_4 >> (masked_bits_3 >> 9);
      masked_bits_4 = masked_bits_3 & 0x1FF;
    }
    else
    {
      masked_bits_4 = sub_14016FB90(a1, a1 + 2072);
    }
    if ( masked_bits_4 < 0 )
    {
LABEL_40:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
      return 0;
    }
    table_value = dword_14026FE50[masked_bits_4];
    running_total = dword_14026FDD0[masked_bits_4];
    if ( table_value )
    {
      loaded_word_5 = *(_DWORD *)(a1 + 16);
      if ( loaded_word_5 < table_value )
      {
        sub_140160350(a1);
        loaded_word_5 = *(_DWORD *)(a1 + 16);
      }
      loaded_word_6 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = loaded_word_6 >> table_value;
      *(_DWORD *)(a1 + 16) = loaded_word_5 - table_value;
      running_total += loaded_word_6 & ((1 << table_value) - 1);
    }
    if ( (__int64)&buffer_cursor[-*(_QWORD *)(a1 + 32)] < running_total )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad dist");
      return 0;
    }
    if ( (unsigned __int64)&buffer_cursor[(int)byte_count] > *(_QWORD *)(a1 + 40) )
    {
      if ( !(unsigned int)sub_14016F9E0(a1, (__int64)buffer_cursor, byte_count) )
        return 0;
      buffer_cursor = *(_BYTE **)(a1 + 24);
    }
    buffer_cursor_2 = &buffer_cursor[-running_total];
    if ( running_total == 1 )
    {
      if ( (_DWORD)byte_count )
      {
        crt_memset((void *)(uintptr_t)(buffer_cursor), *buffer_cursor_2, byte_count);
        buffer_cursor += byte_count;
      }
    }
    else
    {
      for ( ; (_DWORD)byte_count; LODWORD(byte_count) = byte_count - 1 )
      {
        input_byte = *buffer_cursor_2++;
        *buffer_cursor++ = input_byte;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(buffer_cursor);
  return 1;
}

//----- (0000000140167D10) ----------------------------------------------------
__int64            sub_140167D10(__int64 a1, int a2, int a3)
{
  _DWORD *buffer_cursor;
  unsigned int saved_shifted_bits;
  int saved_loaded_word;
  unsigned int integer_quotient;
  int call_result;
  unsigned int shifted_bits;
  int call_result_2;
  int call_result_3;
  int shifted_bits_2;
  int integer_sum;
  __int64 client_static_tls_result;
  char *literal_text;
  unsigned int cached_integer_sum;
  unsigned int integer_sum_2;
  __int64 loaded_word;
  int call_result_4;
  int call_result_5;
  unsigned int shifted_bits_3;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_2;
  unsigned int saved_loaded_word_2;
  int bit_mask;
  char *text_cursor;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned int saved_loaded_word_3;
  char cached_i;
  char input_byte;
  char input_byte_2;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned int table_value;
  unsigned int integer_quotient_2;
  unsigned int shifted_bits_4;
  int integer_difference;
  unsigned int integer_difference_2;
  __int64 loaded_word_5;
  unsigned int iteration_count;
  char *loaded_record_pointer_5;
  char input_byte_3;
  char *loaded_record_pointer_6;
  __int64 scaled_index;
  int table_value_2;
  int iteration_count_2;
  _WORD *buffer_cursor_2;
  __int16 *state_address;
  unsigned int element_index;
  char *text_cursor_2;
  unsigned __int64 loaded_word_6;
  char input_byte_4;
  char *loaded_record_pointer_7;
  int scaled_index_2;
  int scaled_index_3;
  char input_byte_5;
  char *loaded_record_pointer_8;
  char input_byte_6;
  char *loaded_record_pointer_9;
  __int64 loaded_word_7;
  __int64 allocation_size;
  char *allocated_buffer;
  void *cached_output_start;
  unsigned int integer_difference_3;
  int cached_input_value;
  unsigned __int8 cached_i_2;
  int table_value_3;
  char cached_selection_flag;
  int cached_loaded_word;
  int table_value_4;
  _WORD *buffer_cursor_3;
  unsigned int loaded_word_8;
  __int16 table_value_5;
  _WORD *record_byte_offset;
  __int16 table_value_6;
  __int16 table_value_7;
  __int64 remaining_count;
  unsigned __int16 table_value_8;
  __int64 remaining_count_2;
  bool comparison_result;
  __int16 integer_difference_4;
  char cached_selection_flag_2;
  _BYTE *record_byte_offset_2;
  char hibyte_result;
  char cached_selection_flag_3;
  __int64 remaining_count_3;
  unsigned __int8 cached_selection_flag_4;
  __int64 remaining_count_4;
  char integer_difference_5;
  _BYTE *record_byte_offset_3;
  __int64 remaining_count_5;
  int loaded_word_9;
  __int64 remaining_count_6;
  char input_byte_7;
  unsigned __int8 *record_byte_offset_4;
  unsigned int table_value_9;
  int scaled_index_4;
  int table_value_10;
  unsigned int shifted_bits_5;
  unsigned int shifted_bits_6;
  __int64 remaining_count_7;
  char input_byte_8;
  int cached_input_value_2;
  int saved_cached_i;
  unsigned __int8 *buffer_cursor_4;
  int loaded_word_10;
  __int64 allocated_buffer_2;
  __int64 saved_allocated_buffer;
  __int64 remaining_count_8;
  __int64 record_byte_offset_5;
  __int64 loaded_word_11;
  __int64 loaded_word_12;
  unsigned __int64 unused_written_slot;
  __int64 unused_local;
  sr_png_inflate_context sr_inflate;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167D10[10464];
#define i (*(unsigned __int8 (*))(void *)(sr_frame_140167D10 + 0)) /* [rsp+20h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140167D10 + 1)) /* [rsp+21h] */
#define selection_flag_2 (*(__int16 (*))(void *)(sr_frame_140167D10 + 4)) /* [rsp+24h] */
#define selection_flag_3 (*(char (*))(void *)(sr_frame_140167D10 + 6)) /* [rsp+26h] */
#define selection_flag_4 (*(int (*))(void *)(sr_frame_140167D10 + 8)) /* [rsp+28h] */
#define input_value (*(int (*))(void *)(sr_frame_140167D10 + 12)) /* [rsp+2Ch] */
#define cached_integer_sum_2 (*(signed int (*))(void *)(sr_frame_140167D10 + 16)) /* [rsp+30h] */
#define selection_flag_5 (*(int (*))(void *)(sr_frame_140167D10 + 20)) /* [rsp+34h] */
#define saved_loaded_word_4 (*(int (*))(void *)(sr_frame_140167D10 + 24)) /* [rsp+38h] */
#define saved_loaded_word_5 (*(int (*))(void *)(sr_frame_140167D10 + 28)) /* [rsp+3Ch] */
#define input_value_2 (*(int (*))(void *)(sr_frame_140167D10 + 32)) /* [rsp+40h] */
#define unused_written_slot_2 (*(unsigned int (*))(void *)(sr_frame_140167D10 + 40)) /* [rsp+48h] */
#define integer_sum_3 (*(int (*))(void *)(sr_frame_140167D10 + 44)) /* [rsp+4Ch] */
#define callee_output_word (*(_WORD (*)[520])(void *)(sr_frame_140167D10 + 9408)) /* [rsp+24E0h] */
#define unused_frame_slot_10448 (*(__int64 (*))(void *)(sr_frame_140167D10 + 10448)) /* [rsp+28F0h] */

  input_value_2 = a3;
  input_value = a2;
  cached_integer_sum_2 = 0;
  saved_loaded_word_4 = 0;
  buffer_cursor = *(_DWORD **)a1;
  saved_shifted_bits = 0;
  saved_loaded_word = 0;
  saved_loaded_word_5 = 0;
  selection_flag_5 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  selection_flag = 0;
  integer_quotient = 0;
  i = 0;
  selection_flag_2 = 0;
  selection_flag_3 = 0;
  selection_flag_4 = 1;
  if ( !(unsigned int)sub_14015CE80((__int64)buffer_cursor) || a2 == 1 )
    return 0;
  while ( 1 )
  {
    call_result = sub_1401604F0((__int64)buffer_cursor);
    shifted_bits = sub_1401604F0((__int64)buffer_cursor) + (call_result << 16);
    unused_written_slot_2 = shifted_bits;
    call_result_2 = sub_1401604F0((__int64)buffer_cursor);
    call_result_3 = sub_1401604F0((__int64)buffer_cursor);
    shifted_bits_2 = call_result_2 << 16;
    integer_sum = shifted_bits_2 + call_result_3;
    integer_sum_3 = shifted_bits_2 + call_result_3;
    if ( (unsigned int)(shifted_bits_2 + call_result_3) <= 0x49484452 )
      break;
    if ( integer_sum_3 == 1347179589 )
    {
      if ( selection_flag_4 )
        goto LABEL_9;
      if ( shifted_bits > 0x300 || (integer_quotient = shifted_bits / 3, 3 * (shifted_bits / 3) != shifted_bits) )
      {
        client_static_tls_result = sr_client_static_tls();
        literal_text = "invalid PLTE";
        goto LABEL_234;
      }
      element_index = 0;
      if ( !integer_quotient )
        goto LABEL_128;
      text_cursor_2 = *((char **)buffer_cursor + 24);
      while ( 2 )
      {
        loaded_word_6 = *((_QWORD *)buffer_cursor + 25);
        if ( (unsigned __int64)text_cursor_2 < loaded_word_6 )
        {
          input_byte_4 = *text_cursor_2++;
          goto LABEL_116;
        }
        if ( buffer_cursor[12] )
        {
          stbi_refill_buffer((__int64)buffer_cursor);
          loaded_record_pointer_7 = *((char **)buffer_cursor + 24);
          loaded_word_6 = *((_QWORD *)buffer_cursor + 25);
          input_byte_4 = *loaded_record_pointer_7;
          text_cursor_2 = loaded_record_pointer_7 + 1;
LABEL_116:
          *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor_2);
          scaled_index_2 = 4 * element_index;
          LOBYTE(callee_output_word[2 * element_index + 8]) = input_byte_4;
          scaled_index_3 = 4 * element_index;
          if ( (unsigned __int64)text_cursor_2 < loaded_word_6 )
          {
            input_byte_5 = *text_cursor_2++;
            goto LABEL_121;
          }
        }
        else
        {
          scaled_index_2 = 4 * element_index;
          LOBYTE(callee_output_word[2 * element_index + 8]) = 0;
          scaled_index_3 = 4 * element_index;
        }
        if ( buffer_cursor[12] )
        {
          stbi_refill_buffer((__int64)buffer_cursor);
          loaded_record_pointer_8 = *((char **)buffer_cursor + 24);
          loaded_word_6 = *((_QWORD *)buffer_cursor + 25);
          input_byte_5 = *loaded_record_pointer_8;
          text_cursor_2 = loaded_record_pointer_8 + 1;
LABEL_121:
          *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor_2);
          *((_BYTE *)&callee_output_word[8] + (unsigned int)(scaled_index_2 + 1)) = input_byte_5;
          if ( (unsigned __int64)text_cursor_2 < loaded_word_6 )
          {
            input_byte_6 = *text_cursor_2++;
            *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor_2);
            goto LABEL_127;
          }
        }
        else
        {
          *((_BYTE *)&callee_output_word[8] + (unsigned int)(scaled_index_3 + 1)) = 0;
        }
        if ( buffer_cursor[12] )
        {
          stbi_refill_buffer((__int64)buffer_cursor);
          loaded_record_pointer_9 = *((char **)buffer_cursor + 24);
          input_byte_6 = *loaded_record_pointer_9;
          text_cursor_2 = loaded_record_pointer_9 + 1;
          *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
        }
        else
        {
          input_byte_6 = 0;
        }
LABEL_127:
        ++element_index;
        *((_BYTE *)&callee_output_word[8] + (unsigned int)(scaled_index_2 + 2)) = input_byte_6;
        *((_BYTE *)&callee_output_word[8] + (unsigned int)(scaled_index_2 + 3)) = -1;
        if ( element_index >= integer_quotient )
          goto LABEL_128;
        continue;
      }
    }
    if ( integer_sum_3 != 1951551059 )
      goto LABEL_73;
    if ( selection_flag_4 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 8) )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "tRNS after IDAT";
      goto LABEL_234;
    }
    if ( i )
    {
      if ( input_value == 2 )
      {
        buffer_cursor[2] = 4;
      return 1;
      }
      if ( !integer_quotient )
      {
        client_static_tls_result = sr_client_static_tls();
        literal_text = "tRNS before PLTE";
        goto LABEL_234;
      }
      if ( shifted_bits > integer_quotient )
        goto LABEL_227;
      iteration_count = 0;
      for ( i = 4; iteration_count < shifted_bits; *((_BYTE *)&callee_output_word[8] + scaled_index) = input_byte_3 )
      {
        loaded_record_pointer_5 = *((char **)buffer_cursor + 24);
        if ( (unsigned __int64)loaded_record_pointer_5 >= *((_QWORD *)buffer_cursor + 25) )
        {
          if ( buffer_cursor[12] )
          {
            stbi_refill_buffer((__int64)buffer_cursor);
            loaded_record_pointer_6 = *((char **)buffer_cursor + 24);
            input_byte_3 = *loaded_record_pointer_6;
            *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
          }
          else
          {
            input_byte_3 = 0;
          }
        }
        else
        {
          input_byte_3 = *loaded_record_pointer_5;
          *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
        }
        scaled_index = 4 * iteration_count++ + 3;
      }
    }
    else
    {
      table_value_2 = buffer_cursor[2];
      if ( (table_value_2 & 1) == 0 )
      {
        client_static_tls_result = sr_client_static_tls();
        literal_text = "tRNS with alpha";
LABEL_234:
        *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
        return 0;
      }
      if ( shifted_bits != 2 * table_value_2 )
      {
LABEL_227:
        client_static_tls_result = sr_client_static_tls();
        literal_text = "bad tRNS len";
        goto LABEL_234;
      }
      iteration_count_2 = 0;
      selection_flag = 1;
      if ( *(_DWORD *)(a1 + 32) == 16 )
      {
        if ( table_value_2 > 0 )
        {
          buffer_cursor_2 = callee_output_word;
          do
          {
            ++iteration_count_2;
            *buffer_cursor_2++ = sub_1401604F0((__int64)buffer_cursor);
          }
          while ( iteration_count_2 < buffer_cursor[2] );
        }
      }
      else if ( table_value_2 > 0 )
      {
        state_address = &selection_flag_2;
        do
        {
          state_address = (__int16 *)((char *)state_address + 1);
          ++iteration_count_2;
          *((_BYTE *)state_address - 1) = byte_14026E768[*(int *)(a1 + 32)] * sub_1401604F0((__int64)buffer_cursor);
        }
        while ( iteration_count_2 < buffer_cursor[2] );
        saved_loaded_word = saved_loaded_word_4;
      }
    }
LABEL_128:
    sub_1401604F0((__int64)buffer_cursor);
    sub_1401604F0((__int64)buffer_cursor);
  }
  if ( shifted_bits_2 + call_result_3 == 1229472850 )
  {
    if ( !selection_flag_4 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "multiple IHDR";
      goto LABEL_234;
    }
    selection_flag_4 = 0;
    if ( shifted_bits != 13 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad IHDR len";
      goto LABEL_234;
    }
    call_result_4 = sub_1401604F0((__int64)buffer_cursor);
    *buffer_cursor = (call_result_4 << 16) + sub_1401604F0((__int64)buffer_cursor);
    call_result_5 = sub_1401604F0((__int64)buffer_cursor);
    shifted_bits_3 = sub_1401604F0((__int64)buffer_cursor) + (call_result_5 << 16);
    buffer_cursor[1] = shifted_bits_3;
    if ( shifted_bits_3 > 0x1000000 || *buffer_cursor > 0x1000000u )
    {
LABEL_70:
      client_static_tls_result = sr_client_static_tls();
      literal_text = "too large";
      goto LABEL_234;
    }
    loaded_record_pointer = *((unsigned __int8 **)buffer_cursor + 24);
    if ( (unsigned __int64)loaded_record_pointer >= *((_QWORD *)buffer_cursor + 25) )
    {
      if ( buffer_cursor[12] )
      {
        stbi_refill_buffer((__int64)buffer_cursor);
        loaded_record_pointer_2 = *((unsigned __int8 **)buffer_cursor + 24);
        loaded_word_2 = *loaded_record_pointer_2;
        *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      }
      else
      {
        loaded_word_2 = 0;
      }
    }
    else
    {
      loaded_word_2 = *loaded_record_pointer;
      *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    saved_loaded_word_2 = loaded_word_2;
    *(_DWORD *)(a1 + 32) = loaded_word_2;
    if ( loaded_word_2 != 1 )
    {
      if ( loaded_word_2 > 0x10u || (bit_mask = 65812, !_bittest(&bit_mask, saved_loaded_word_2)) )
      {
        client_static_tls_result = sr_client_static_tls();
        literal_text = "1/2/4/8/16-bit only";
        goto LABEL_234;
      }
    }
    text_cursor = *((char **)buffer_cursor + 24);
    if ( (unsigned __int64)text_cursor >= *((_QWORD *)buffer_cursor + 25) )
    {
      if ( buffer_cursor[12] )
      {
        stbi_refill_buffer((__int64)buffer_cursor);
        loaded_record_pointer_3 = *((unsigned __int8 **)buffer_cursor + 24);
        loaded_word_3 = *loaded_record_pointer_3;
        text_cursor = (char *)(loaded_record_pointer_3 + 1);
        *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor);
      }
      else
      {
        loaded_word_3 = 0;
      }
    }
    else
    {
      loaded_word_3 = *text_cursor++;
      *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor);
    }
    saved_loaded_word_3 = loaded_word_3;
    saved_loaded_word_5 = loaded_word_3;
    if ( loaded_word_3 > 6u )
    {
LABEL_219:
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad ctype";
      goto LABEL_234;
    }
    if ( loaded_word_3 == 3 )
    {
      if ( *(_DWORD *)(a1 + 32) == 16 )
        goto LABEL_219;
      cached_i = 3;
      i = 3;
    }
    else
    {
      if ( (loaded_word_3 & 1) != 0 )
        goto LABEL_219;
      cached_i = i;
    }
    if ( (unsigned __int64)text_cursor >= *((_QWORD *)buffer_cursor + 25) )
    {
      if ( !buffer_cursor[12] )
        goto LABEL_53;
      stbi_refill_buffer((__int64)buffer_cursor);
      text_cursor = *((char **)buffer_cursor + 24);
    }
    input_byte = *text_cursor++;
    *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor);
    if ( input_byte )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad comp method";
      goto LABEL_234;
    }
LABEL_53:
    if ( (unsigned __int64)text_cursor >= *((_QWORD *)buffer_cursor + 25) )
    {
      if ( !buffer_cursor[12] )
      {
LABEL_57:
        if ( (unsigned __int64)text_cursor >= *((_QWORD *)buffer_cursor + 25) )
        {
          if ( buffer_cursor[12] )
          {
            stbi_refill_buffer((__int64)buffer_cursor);
            loaded_record_pointer_4 = *((unsigned __int8 **)buffer_cursor + 24);
            loaded_word_4 = *loaded_record_pointer_4;
            *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
          }
          else
          {
            loaded_word_4 = 0;
          }
        }
        else
        {
          loaded_word_4 = *text_cursor;
          *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor + 1);
        }
        saved_loaded_word = loaded_word_4;
        saved_loaded_word_4 = loaded_word_4;
        if ( loaded_word_4 > 1u )
        {
          client_static_tls_result = sr_client_static_tls();
          literal_text = "bad interlace method";
          goto LABEL_234;
        }
        if ( !*buffer_cursor || (table_value = buffer_cursor[1]) == 0 )
        {
          client_static_tls_result = sr_client_static_tls();
          literal_text = "0-pixel image";
          goto LABEL_234;
        }
        integer_quotient_2 = 0x40000000u / *buffer_cursor;
        if ( cached_i )
        {
          buffer_cursor[2] = 1;
          if ( integer_quotient_2 >> 2 < table_value )
            goto LABEL_70;
        }
        else
        {
          shifted_bits_4 = (saved_loaded_word_3 & 2 | 1) + ((saved_loaded_word_3 >> 2) & 1);
          buffer_cursor[2] = shifted_bits_4;
          if ( integer_quotient_2 / shifted_bits_4 < table_value )
            goto LABEL_70;
          if ( input_value == 2 )
            return 1;
        }
        goto LABEL_128;
      }
      stbi_refill_buffer((__int64)buffer_cursor);
      text_cursor = *((char **)buffer_cursor + 24);
    }
    input_byte_2 = *text_cursor++;
    *((_QWORD *)buffer_cursor + 24) = (uint64)(uintptr_t)(text_cursor);
    if ( input_byte_2 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad filter method";
      goto LABEL_234;
    }
    goto LABEL_57;
  }
  if ( integer_sum_3 == 1130840649 )
  {
    selection_flag_5 = 1;
LABEL_75:
    if ( shifted_bits )
    {
      if ( (shifted_bits & 0x80000000) == 0 )
      {
        if ( *((_QWORD *)buffer_cursor + 2) && (integer_difference = buffer_cursor[50] - buffer_cursor[48], integer_difference < (int)shifted_bits) )
        {
          integer_difference_2 = shifted_bits - integer_difference;
          loaded_word_5 = *((_QWORD *)buffer_cursor + 5);
          *((_QWORD *)buffer_cursor + 24) = *((_QWORD *)buffer_cursor + 25);
          (*((void (           **)(__int64, _QWORD))buffer_cursor + 3))(loaded_word_5, integer_difference_2);
        }
        else
        {
          *((_QWORD *)buffer_cursor + 24) += (int)shifted_bits;
        }
      }
      else
      {
        *((_QWORD *)buffer_cursor + 24) = *((_QWORD *)buffer_cursor + 25);
      }
    }
    goto LABEL_128;
  }
  if ( integer_sum_3 == 1229209940 )
  {
    if ( selection_flag_4 )
      goto LABEL_9;
    if ( i && !integer_quotient )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "no PLTE";
      goto LABEL_234;
    }
    if ( input_value == 2 )
    {
      buffer_cursor[2] = i;
      return 1;
    }
    cached_integer_sum = cached_integer_sum_2;
    integer_sum_2 = shifted_bits + cached_integer_sum_2;
    if ( (int)(shifted_bits + cached_integer_sum_2) < cached_integer_sum_2 )
      return 0;
    if ( integer_sum_2 > saved_shifted_bits )
    {
      if ( !saved_shifted_bits )
      {
        saved_shifted_bits = 4096;
        if ( shifted_bits > 0x1000 )
          saved_shifted_bits = shifted_bits;
      }
      for ( ; integer_sum_2 > saved_shifted_bits; saved_shifted_bits *= 2 )
        ;
      loaded_word = j__realloc_base_sr(*(_QWORD *)(a1 + 8), saved_shifted_bits);
      if ( !loaded_word )
        goto LABEL_210;
      *(_QWORD *)(a1 + 8) = loaded_word;
      cached_integer_sum = cached_integer_sum_2;
    }
    if ( !sub_140160860((__int64)buffer_cursor, (__m128i *)(*(_QWORD *)(a1 + 8) + cached_integer_sum), shifted_bits) )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "outofdata";
      goto LABEL_234;
    }
    cached_integer_sum_2 = integer_sum_2;
    goto LABEL_128;
  }
  if ( integer_sum_3 != 1229278788 )
  {
LABEL_73:
    if ( selection_flag_4 )
      goto LABEL_9;
    if ( (integer_sum & 0x20000000) == 0 )
    {
      byte_140301850 = (unsigned int)(shifted_bits_2 + call_result_3) >> 24;
      byte_140301851 = (unsigned int)(shifted_bits_2 + call_result_3) >> 16;
      byte_140301853 = integer_sum_3;
      unused_written_slot = 0; /* compiler TLS slot access recovered below */
      byte_140301852 = BYTE1(integer_sum);
      client_static_tls_result = sr_client_static_tls();
      literal_text = &byte_140301850;
      goto LABEL_234;
    }
    goto LABEL_75;
  }
  if ( selection_flag_4 )
  {
LABEL_9:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "first not IHDR";
    goto LABEL_234;
  }
  if (input_value) return 1;
  if ( !input_value )
  {
    loaded_word_7 = *(_QWORD *)(a1 + 8);
    if ( !loaded_word_7 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "no IDAT";
      goto LABEL_234;
    }
    allocation_size = (int)(buffer_cursor[1] * (buffer_cursor[2] * ((unsigned int)(*(_DWORD *)(a1 + 32) * *buffer_cursor + 7) >> 3) + 1));
    allocated_buffer = (char *)sr_path_malloc(allocation_size);
    if ( allocated_buffer )
    {
      sr_inflate.output_start = allocated_buffer;
      sr_inflate.input_end = loaded_word_7 + cached_integer_sum_2;
      sr_inflate.output = allocated_buffer;
      sr_inflate.input = loaded_word_7;
      sr_inflate.output_end = &allocated_buffer[allocation_size];
      sr_inflate.expandable = 1;
      if ( (unsigned int)sub_140168E00((__int64)(uintptr_t)&sr_inflate, selection_flag_5 == 0) )
      {
        cached_output_start = sr_inflate.output_start;
        integer_difference_3 = (_DWORD)sr_inflate.output - (_DWORD)sr_inflate.output_start;
        *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(sr_inflate.output_start);
        if ( cached_output_start )
        {
          free(*(void **)(a1 + 8));
          cached_input_value = input_value_2;
          cached_i_2 = i;
          *(_QWORD *)(a1 + 8) = 0;
          table_value_3 = buffer_cursor[2] + 1;
          if ( cached_input_value != table_value_3 || cached_input_value == 3 || cached_i_2 )
          {
            cached_selection_flag = selection_flag;
            if ( !selection_flag )
              table_value_3 = buffer_cursor[2];
          }
          else
          {
            cached_selection_flag = selection_flag;
          }
          cached_loaded_word = saved_loaded_word_5;
          buffer_cursor[3] = table_value_3;
          if ( (unsigned int)sub_14015E260(a1, *(unsigned __int8 **)(a1 + 16), integer_difference_3, table_value_3, *(_DWORD *)(a1 + 32), cached_loaded_word, saved_loaded_word) )
          {
            if ( cached_selection_flag )
            {
              table_value_4 = buffer_cursor[3];
              buffer_cursor_3 = *(_WORD **)(a1 + 24);
              loaded_word_8 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( *(_DWORD *)(a1 + 32) == 16 )
              {
                if ( table_value_4 == 2 )
                {
                  if ( loaded_word_8 )
                  {
                    table_value_8 = callee_output_word[0];
                    remaining_count_2 = loaded_word_8;
                    do
                    {
                      comparison_result = *buffer_cursor_3 == table_value_8;
                      buffer_cursor_3 += 2;
                      integer_difference_4 = -1;
                      if ( comparison_result )
                        integer_difference_4 = 0;
                      *(buffer_cursor_3 - 1) = integer_difference_4;
                      --remaining_count_2;
                    }
                    while ( remaining_count_2 );
                  }
                }
                else
                {
                  if ( table_value_4 != 4 )
                    crt_assert(
                      (char *)L"out_n == 2 || out_n == 4",
                      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                      0x12DCu);
                  if ( loaded_word_8 )
                  {
                    table_value_5 = callee_output_word[2];
                    record_byte_offset = buffer_cursor_3 + 2;
                    table_value_6 = callee_output_word[1];
                    table_value_7 = callee_output_word[0];
                    remaining_count = loaded_word_8;
                    do
                    {
                      if ( *(record_byte_offset - 2) == table_value_7 && *(record_byte_offset - 1) == table_value_6 && *record_byte_offset == table_value_5 )
                        record_byte_offset[1] = 0;
                      record_byte_offset += 4;
                      --remaining_count;
                    }
                    while ( remaining_count );
                    cached_i_2 = i;
                  }
                }
              }
              else if ( table_value_4 == 2 )
              {
                if ( loaded_word_8 )
                {
                  cached_selection_flag_4 = selection_flag_2;
                  remaining_count_4 = loaded_word_8;
                  do
                  {
                    comparison_result = *(_BYTE *)buffer_cursor_3++ == cached_selection_flag_4;
                    integer_difference_5 = -1;
                    if ( comparison_result )
                      integer_difference_5 = 0;
                    *((_BYTE *)buffer_cursor_3 - 1) = integer_difference_5;
                    --remaining_count_4;
                  }
                  while ( remaining_count_4 );
                }
              }
              else
              {
                if ( table_value_4 != 4 )
                  crt_assert(
                    (char *)L"out_n == 2 || out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x12C3u);
                if ( loaded_word_8 )
                {
                  cached_selection_flag_2 = selection_flag_3;
                  record_byte_offset_2 = buffer_cursor_3 + 1;
                  hibyte_result = HIBYTE(selection_flag_2);
                  cached_selection_flag_3 = selection_flag_2;
                  remaining_count_3 = loaded_word_8;
                  do
                  {
                    if ( *(record_byte_offset_2 - 2) == cached_selection_flag_3 && *(record_byte_offset_2 - 1) == hibyte_result && *record_byte_offset_2 == cached_selection_flag_2 )
                      record_byte_offset_2[1] = 0;
                    record_byte_offset_2 += 4;
                    --remaining_count_3;
                  }
                  while ( remaining_count_3 );
                }
              }
            }
            if ( selection_flag_5 && g_144980DBC && (int)buffer_cursor[3] > 2 )
            {
              record_byte_offset_3 = *(_BYTE **)(a1 + 24);
              remaining_count_5 = (unsigned int)(**(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL));
              loaded_word_9 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
              if ( loaded_word_9 == 3 )
              {
                if ( (_DWORD)remaining_count_5 )
                {
                  remaining_count_6 = (unsigned int)remaining_count_5;
                  do
                  {
                    input_byte_7 = *record_byte_offset_3;
                    *record_byte_offset_3 = record_byte_offset_3[2];
                    record_byte_offset_3[2] = input_byte_7;
                    record_byte_offset_3 += 3;
                    --remaining_count_6;
                  }
                  while ( remaining_count_6 );
                }
              }
              else
              {
                if ( loaded_word_9 != 4 )
                  crt_assert(
                    (char *)L"s->img_out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x132Du);
                if ( (_DWORD)remaining_count_5 )
                {
                  if ( g_144980DB8 )
                  {
                    record_byte_offset_4 = record_byte_offset_3 + 1;
                    do
                    {
                      table_value_9 = record_byte_offset_4[2];
                      scaled_index_4 = *(record_byte_offset_4 - 1);
                      table_value_10 = record_byte_offset_4[1];
                      if ( (_BYTE)table_value_9 )
                      {
                        *record_byte_offset_4 = ((table_value_9 >> 1) + 255 * *record_byte_offset_4) / table_value_9;
                        shifted_bits_5 = ((table_value_9 >> 1) + 255 * scaled_index_4) / table_value_9;
                        shifted_bits_6 = ((table_value_9 >> 1) + 255 * table_value_10) / table_value_9;
                      }
                      else
                      {
                        LOBYTE(shifted_bits_5) = *(record_byte_offset_4 - 1);
                        LOBYTE(shifted_bits_6) = record_byte_offset_4[1];
                      }
                      *(record_byte_offset_4 - 1) = shifted_bits_6;
                      record_byte_offset_4[1] = shifted_bits_5;
                      record_byte_offset_4 += 4;
                      --remaining_count_5;
                    }
                    while ( remaining_count_5 );
                  }
                  else
                  {
                    remaining_count_7 = (unsigned int)remaining_count_5;
                    do
                    {
                      input_byte_8 = *record_byte_offset_3;
                      *record_byte_offset_3 = record_byte_offset_3[2];
                      record_byte_offset_3[2] = input_byte_8;
                      record_byte_offset_3 += 4;
                      --remaining_count_7;
                    }
                    while ( remaining_count_7 );
                  }
                }
              }
            }
            if ( cached_i_2 )
            {
              cached_input_value_2 = input_value_2;
              saved_cached_i = cached_i_2;
              buffer_cursor[2] = cached_i_2;
              buffer_cursor[3] = cached_i_2;
              if ( cached_input_value_2 >= 3 )
              {
                buffer_cursor[3] = cached_input_value_2;
                saved_cached_i = cached_input_value_2;
              }
              buffer_cursor_4 = *(unsigned __int8 **)(a1 + 24);
              loaded_word_10 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( loaded_word_10 < 0 || loaded_word_10 > 0x7FFFFFFF / saved_cached_i || (allocated_buffer_2 = sr_path_malloc(loaded_word_10 * saved_cached_i), (saved_allocated_buffer = allocated_buffer_2) == 0) )
              {
LABEL_210:
                client_static_tls_result = sr_client_static_tls();
                literal_text = "outofmem";
                goto LABEL_234;
              }
              if ( loaded_word_10 )
              {
                remaining_count_8 = (unsigned int)loaded_word_10;
                record_byte_offset_5 = allocated_buffer_2 + 2;
                if ( saved_cached_i == 3 )
                {
                  do
                  {
                    loaded_word_11 = *buffer_cursor_4;
                    record_byte_offset_5 += 3;
                    ++buffer_cursor_4;
                    *(_BYTE *)(record_byte_offset_5 - 5) = callee_output_word[2 * loaded_word_11 + 8];
                    *(_BYTE *)(record_byte_offset_5 - 4) = HIBYTE(callee_output_word[2 * loaded_word_11 + 8]);
                    *(_BYTE *)(record_byte_offset_5 - 3) = callee_output_word[2 * loaded_word_11 + 9];
                    --remaining_count_8;
                  }
                  while ( remaining_count_8 );
                }
                else
                {
                  do
                  {
                    loaded_word_12 = *buffer_cursor_4;
                    record_byte_offset_5 += 4;
                    ++buffer_cursor_4;
                    *(_BYTE *)(record_byte_offset_5 - 6) = callee_output_word[2 * loaded_word_12 + 8];
                    *(_BYTE *)(record_byte_offset_5 - 5) = HIBYTE(callee_output_word[2 * loaded_word_12 + 8]);
                    *(_BYTE *)(record_byte_offset_5 - 4) = callee_output_word[2 * loaded_word_12 + 9];
                    *(_BYTE *)(record_byte_offset_5 - 3) = HIBYTE(callee_output_word[2 * loaded_word_12 + 9]);
                    --remaining_count_8;
                  }
                  while ( remaining_count_8 );
                }
              }
              free(*(void **)(a1 + 24));
              *(_QWORD *)(a1 + 24) = saved_allocated_buffer;
            }
            else if ( cached_selection_flag )
            {
              ++buffer_cursor[2];
            }
            free(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = 0;
            sub_140160670((__int64)buffer_cursor);
            return 1;
          }
        }
      }
      else
      {
        free(sr_inflate.output_start);
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return 0;
}
#undef i
#undef selection_flag
#undef selection_flag_2
#undef selection_flag_3
#undef selection_flag_4
#undef input_value
#undef cached_integer_sum_2
#undef selection_flag_5
#undef saved_loaded_word_4
#undef saved_loaded_word_5
#undef input_value_2
#undef unused_written_slot_2
#undef integer_sum_3
#undef callee_output_word
#undef unused_frame_slot_10448

// 1401688D3: conditional instruction was optimized away because esi.4>=1
// 1401688D9: conditional instruction was optimized away because esi.4>=1

//----- (0000000140168C80) ----------------------------------------------------
__int64            sub_140168C80(char **a1)
{
  unsigned char sr_stored_header[4]; /* native RSP+30..33 */
  int remaining_amount;
  int saved_remaining_amount;
  int masked_bits;
  int iteration_count;
  bool comparison_result;
  unsigned int remaining_bits;
  unsigned __int8 *buffer_cursor;
  int integer_difference;
  __int64 iteration_count_2;
  char *table_value;
  char *text_cursor;
  char input_byte;
  __int64 shifted_bits;
  unsigned __int64 byte_count;
  char *table_value_2;

  remaining_amount = *((_DWORD *)a1 + 4);
  saved_remaining_amount = remaining_amount;
  masked_bits = remaining_amount & 7;
  if ( (remaining_amount & 7) != 0 )
  {
    if ( remaining_amount < masked_bits )
    {
      sub_140160350((__int64)a1);
      remaining_amount = *((_DWORD *)a1 + 4);
    }
    *((_DWORD *)a1 + 5) >>= masked_bits;
    remaining_amount -= masked_bits;
    *((_DWORD *)a1 + 4) = remaining_amount;
    saved_remaining_amount = remaining_amount;
  }
  iteration_count = 0;
  comparison_result = remaining_amount < 0;
  if ( remaining_amount > 0 )
  {
    remaining_bits = *((_DWORD *)a1 + 5);
    buffer_cursor = &sr_stored_header[0];
    do
    {
      ++iteration_count;
      *buffer_cursor++ = *((_BYTE *)a1 + 20);
      integer_difference = saved_remaining_amount - 8;
      remaining_bits >>= 8;
      *((_DWORD *)a1 + 5) = remaining_bits;
      saved_remaining_amount = integer_difference;
      comparison_result = integer_difference < 0;
    }
    while ( integer_difference > 0 );
    *((_DWORD *)a1 + 4) = integer_difference;
  }
  if ( comparison_result )
    goto LABEL_10;
  iteration_count_2 = iteration_count;
  if ( iteration_count < 4LL )
  {
    table_value = a1[1];
    text_cursor = *a1;
    do
    {
      if ( text_cursor < table_value )
      {
        input_byte = *text_cursor++;
        *a1 = text_cursor;
      }
      else
      {
        input_byte = 0;
      }
      *(&sr_stored_header[0] + iteration_count_2++) = input_byte;
    }
    while ( iteration_count_2 < 4 );
  }
  shifted_bits = sr_stored_header[0] + (sr_stored_header[1] << 8);
  if ( sr_stored_header[2] + (sr_stored_header[3] << 8) != ((sr_stored_header[0] + (sr_stored_header[1] << 8)) ^ 0xFFFF) )
  {
LABEL_10:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("zlib corrupt");
    return 0;
  }
  byte_count = (unsigned int)shifted_bits;
  if ( &(*a1)[(unsigned int)shifted_bits] > a1[1] )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("read past buffer");
    return 0;
  }
  table_value_2 = a1[3];
  if ( &table_value_2[shifted_bits] > a1[5] && !(unsigned int)sub_14016F9E0((__int64)a1, (__int64)table_value_2, shifted_bits) )
    return 0;
  crt_memcpy((__m128i *)a1[3], (     __m128i *)*a1, byte_count);
  *a1 += byte_count;
  a1[3] += byte_count;
  return 1;
}

//----- (0000000140168E00) ----------------------------------------------------
__int64            sub_140168E00(__int64 a1, int a2)
{
  char *input_byte;
  unsigned __int64 loaded_word;
  int scaled_index;
  unsigned __int8 *record_pointer;
  int loaded_word_2;
  unsigned __int8 *record_pointer_2;
  int loaded_word_3;
  unsigned int option_flags;
  int record_byte_offset;
  unsigned __int64 loaded_word_4;
  char *input_byte_2;
  unsigned __int8 loaded_word_5;
  unsigned int shifted_bits;
  int masked_bits;
  int integer_difference;
  int record_byte_offset_2;
  unsigned int saved_shifted_bits;
  unsigned __int64 loaded_word_6;
  char *input_byte_3;
  unsigned __int8 loaded_word_7;
  int masked_bits_2;
  int call_result;
  int call_result_2;

  if ( a2 )
  {
    input_byte = *(char **)a1;
    loaded_word = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)input_byte >= loaded_word
      || (scaled_index = (unsigned __int8)*input_byte, record_pointer = (unsigned __int8 *)(input_byte + 1), *(_QWORD *)a1 = (uint64)(uintptr_t)(record_pointer), (unsigned __int64)record_pointer >= loaded_word)
      || (loaded_word_2 = *record_pointer, record_pointer_2 = record_pointer + 1, *(_QWORD *)a1 = (uint64)(uintptr_t)(record_pointer_2), (unsigned __int64)record_pointer_2 >= loaded_word)
      || loaded_word_2 + (scaled_index << 8) != 31 * ((loaded_word_2 + (scaled_index << 8)) / 0x1Fu) )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad zlib header");
      return 0;
    }
    if ( (loaded_word_2 & 0x20) != 0 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no preset dict");
      return 0;
    }
    if ( (scaled_index & 0xF) != 8 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
      return 0;
    }
  }
  *(_QWORD *)(a1 + 16) = 0;
  do
  {
    loaded_word_3 = *(_DWORD *)(a1 + 16);
    if ( loaded_word_3 < 1 )
    {
      option_flags = *(_DWORD *)(a1 + 20);
      record_byte_offset = *(_DWORD *)(a1 + 16);
      if ( option_flags >= 1 << loaded_word_3 )
      {
LABEL_21:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        loaded_word_4 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          input_byte_2 = *(char **)a1;
          if ( *(_QWORD *)a1 < loaded_word_4 )
          {
            loaded_word_5 = *input_byte_2;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(input_byte_2 + 1);
          }
          else
          {
            loaded_word_5 = 0;
          }
          loaded_word_3 = record_byte_offset + 8;
          *(_DWORD *)(a1 + 16) = record_byte_offset + 8;
          option_flags |= loaded_word_5 << record_byte_offset;
          *(_DWORD *)(a1 + 20) = option_flags;
          if ( record_byte_offset + 8 > 24 )
            break;
          record_byte_offset += 8;
          if ( option_flags >= 1 << loaded_word_3 )
            goto LABEL_21;
        }
      }
    }
    shifted_bits = *(_DWORD *)(a1 + 20) >> 1;
    masked_bits = *(_DWORD *)(a1 + 20) & 1;
    integer_difference = loaded_word_3 - 1;
    *(_DWORD *)(a1 + 20) = shifted_bits;
    *(_DWORD *)(a1 + 16) = integer_difference;
    if ( integer_difference < 2 )
    {
      record_byte_offset_2 = integer_difference;
      saved_shifted_bits = shifted_bits;
      if ( shifted_bits >= 1 << integer_difference )
      {
LABEL_30:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        loaded_word_6 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          input_byte_3 = *(char **)a1;
          if ( *(_QWORD *)a1 < loaded_word_6 )
          {
            loaded_word_7 = *input_byte_3;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(input_byte_3 + 1);
          }
          else
          {
            loaded_word_7 = 0;
          }
          integer_difference = record_byte_offset_2 + 8;
          *(_DWORD *)(a1 + 16) = record_byte_offset_2 + 8;
          shifted_bits = saved_shifted_bits | (loaded_word_7 << record_byte_offset_2);
          *(_DWORD *)(a1 + 20) = shifted_bits;
          saved_shifted_bits = shifted_bits;
          if ( record_byte_offset_2 + 8 > 24 )
            break;
          record_byte_offset_2 += 8;
          if ( shifted_bits >= 1 << integer_difference )
            goto LABEL_30;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = shifted_bits >> 2;
    *(_DWORD *)(a1 + 16) = integer_difference - 2;
    masked_bits_2 = shifted_bits & 3;
    if ( (shifted_bits & 3) != 0 )
    {
      if ( masked_bits_2 == 3 )
        return 0;
      if ( masked_bits_2 == 1 )
      {
        if ( !(unsigned int)sub_14016F730(a1 + 52, byte_14026FEF0, 288) )
          return 0;
        call_result_2 = sub_14016F730(a1 + 2072, byte_140270010, 32);
      }
      else
      {
        call_result_2 = sub_14015CF70(a1);
      }
      if ( !call_result_2 )
        return 0;
      call_result = sub_140167A50(a1);
    }
    else
    {
      call_result = sub_140168C80((char **)a1);
    }
    if ( !call_result )
      return 0;
  }
  while ( !masked_bits );
  return 1;
}

//----- (00000001401691A0) ----------------------------------------------------
__int64            sub_1401691A0(__int64 a1, int *a2, int *a3, char *a4)
{
  __int64 iteration_count;
  int *state_address;
  int *state_address_2;
  char *state_address_3;
  unsigned __int64 *running_total;
  char option_flags;
  int loaded_word;
  int loaded_word_2;
  char *state_address_4;
  char *byte_cursor;
  char *saved_state_address;
  unsigned __int64 loaded_word_3;
  char input_byte;
  char *byte_cursor_2;
  char input_byte_2;
  unsigned __int64 scaled_index;
  char *byte_cursor_3;
  char input_byte_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401691A0[96];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1401691A0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_1401691A0 + 40)) /* [rsp+28h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_1401691A0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_80 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 80)) /* [rsp+50h] */

  iteration_count = 0;
  state_address = (int *)&callee_output_word;
  state_address_2 = (int *)&callee_output_word;
  state_address_3 = &callee_output_word;
  if ( a2 )
    state_address = a2;
  running_total = (unsigned __int64 *)(a1 + 192);
  option_flags = 0;
  if ( a3 )
    state_address_2 = a3;
  if ( a4 )
    state_address_3 = a4;
  unused_written_slot = state_address_3;
  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    goto LABEL_8;
  if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word < 88) )
  {
    *running_total = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(88 - loaded_word));
  }
  else
  {
    *running_total += 88LL;
  }
  *state_address = sub_1401604F0(a1);
  *state_address_2 = sub_1401604F0(a1);
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_16:
    if ( *running_total >= *(_QWORD *)(a1 + 200) )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_17:
  if ( !*state_address || 0x10000000 / *state_address >= *state_address_2 )
  {
    if ( *(_QWORD *)(a1 + 16) && (loaded_word_2 = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word_2 < 8) )
    {
      *running_total = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(8 - loaded_word_2));
    }
    else
    {
      *running_total += 8LL;
    }
    state_address_4 = &callee_output_word_2;
    while ( 1 )
    {
      if ( iteration_count == 10 )
        return 0; /* 0x1401692F4: -> xor eax, eax */
      byte_cursor = (char *)*running_total;
      saved_state_address = state_address_4;
      loaded_word_3 = *(_QWORD *)(a1 + 200);
      state_address_4 += 3;
      ++iteration_count;
      if ( *running_total >= loaded_word_3 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          input_byte = 0;
          goto LABEL_32;
        }
        stbi_refill_buffer(a1);
        input_byte = *(_BYTE *)*running_total;
        byte_cursor_2 = (char *)(*running_total + 1);
        loaded_word_3 = *(_QWORD *)(a1 + 200);
      }
      else
      {
        input_byte = *byte_cursor;
        byte_cursor_2 = byte_cursor + 1;
      }
      *running_total = (unsigned __int64)byte_cursor_2;
      if ( (unsigned __int64)byte_cursor_2 < loaded_word_3 )
      {
        input_byte_2 = *byte_cursor_2;
        scaled_index = (unsigned __int64)(byte_cursor_2 + 1);
        goto LABEL_34;
      }
LABEL_32:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        input_byte_2 = 0;
        goto LABEL_37;
      }
      stbi_refill_buffer(a1);
      input_byte_2 = *(_BYTE *)*running_total;
      scaled_index = *running_total + 1;
      loaded_word_3 = *(_QWORD *)(a1 + 200);
LABEL_34:
      *running_total = scaled_index;
      if ( scaled_index < loaded_word_3 )
      {
        byte_cursor_3 = (char *)(scaled_index + 1);
        goto LABEL_39;
      }
LABEL_37:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        saved_state_address[1] = 0;
        goto LABEL_42;
      }
      stbi_refill_buffer(a1);
      loaded_word_3 = *(_QWORD *)(a1 + 200);
      byte_cursor_3 = (char *)(*running_total + 1);
LABEL_39:
      *running_total = (unsigned __int64)byte_cursor_3;
      if ( (unsigned __int64)byte_cursor_3 < loaded_word_3 )
      {
        input_byte_3 = *byte_cursor_3;
        *running_total = (unsigned __int64)(byte_cursor_3 + 1);
        goto LABEL_45;
      }
LABEL_42:
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        input_byte_3 = *(_BYTE *)(*running_total)++;
      }
      else
      {
        input_byte_3 = 0;
      }
LABEL_45:
      option_flags |= input_byte_3;
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_49;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_52;
      }
      if ( *running_total >= *(_QWORD *)(a1 + 200) )
        goto LABEL_52;
LABEL_49:
      if ( input_byte_2 != 8 )
      {
LABEL_52:
        *running_total = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        return 0; /* 0x14016943D: xor eax, eax */
      }
      if ( !input_byte )
      {
        *(_DWORD *)unused_written_slot = ((option_flags & 0x10) != 0) + 3;
        return 1; /* 0x14016941E: mov eax, 1 */
      }
    }
  }
LABEL_8:
  *running_total = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0; /* 0x14016921E: xor eax, eax */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef unused_written_slot
#undef callee_output_word_2
#undef unused_frame_slot_80

//----- (0000000140169470) ----------------------------------------------------
__int64            sub_140169470(__int64 a1, __int64 a2)
{
  __int64 iteration_count;
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;

  iteration_count = 0;
  while ( 1 )
  {
    loaded_record_pointer = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_2 = *(char **)(a1 + 192);
        input_byte = *loaded_record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      }
      else
      {
        input_byte = 0;
      }
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
    }
    if ( input_byte != *(_BYTE *)(iteration_count + a2) )
      break;
    if ( ++iteration_count >= 4 )
      return 1;
  }
  return 0;
}

//----- (0000000140169510) ----------------------------------------------------
char *           sub_140169510(__int64 a1, int *a2, int *a3, int *a4, int a5)
{
  int *state_address;
  __int64 remaining_count;
  unsigned __int64 loaded_word;
  int call_result;
  int call_result_2;
  int scaled_index;
  _WORD *allocated_buffer;
  int byte_count;
  int loaded_word_2;
  char callee_output_word;

  state_address = (int *)&callee_output_word;
  if ( a4 )
    state_address = a4;
  remaining_count = 92;
  do
  {
    loaded_word = *(_QWORD *)(a1 + 192);
    if ( loaded_word >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = loaded_word + 1;
    }
    --remaining_count;
  }
  while ( remaining_count );
  call_result = sub_1401604F0(a1);
  call_result_2 = sub_1401604F0(a1);
  if ( call_result_2 > 0x1000000 || call_result > 0x1000000 )
    goto LABEL_32;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      goto LABEL_17;
    if ( !*(_DWORD *)(a1 + 48) )
    {
LABEL_16:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
      return nullptr;
    }
  }
  if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
    goto LABEL_16;
LABEL_17:
  if ( call_result < 0 || call_result_2 < 0 || call_result_2 && call_result > 0x7FFFFFFF / call_result_2 || (scaled_index = call_result * call_result_2, call_result * call_result_2 < 0) || scaled_index > 0x1FFFFFFF )
  {
LABEL_32:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  if ( call_result_2 && call_result > 0x7FFFFFFF / call_result_2 )
  {
    allocated_buffer = nullptr;
    byte_count = 4 * scaled_index;
  }
  else
  {
    byte_count = 4 * scaled_index;
    allocated_buffer = (_WORD *)sr_path_malloc(byte_count);
  }
  crt_memset((void *)(uintptr_t)(allocated_buffer), 0xFFu, byte_count);
  if ( !sub_140169770(a1, call_result, call_result_2, state_address, (__int64)allocated_buffer) )
  {
    free(allocated_buffer);
    allocated_buffer = nullptr;
  }
  loaded_word_2 = a5;
  *a2 = call_result;
  *a3 = call_result_2;
  if ( !loaded_word_2 )
    loaded_word_2 = *state_address;
  return sub_14015D7E0((char *)allocated_buffer, 4, loaded_word_2, call_result, call_result_2);
}

//----- (0000000140169770) ----------------------------------------------------
__int64            sub_140169770(__int64 a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  _QWORD *record_pointer;
  char option_flags;
  __int64 iteration_count;
  char *loaded_record_pointer;
  unsigned __int64 loaded_word;
  _BYTE *saved_input_byte;
  int int64_result;
  char input_byte;
  char *loaded_record_pointer_2;
  int int64_result_2;
  char input_byte_2;
  char *loaded_record_pointer_3;
  int int64_result_3;
  char input_byte_3;
  char *byte_cursor;
  char input_byte_4;
  int int64_result_4;
  char *loaded_record_pointer_4;
  int iteration_count_2;
  int cached_input_value;
  __int64 integer_sum;
  int remaining_amount;
  _BYTE *byte_cursor_2;
  __int64 scaled_index;
  _BYTE *record_byte_offset;
  int loaded_word_2;
  int integer_difference;
  unsigned __int8 *record_pointer_2;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned int saved_loaded_word;
  unsigned __int8 *loaded_record_pointer_7;
  unsigned __int64 loaded_word_4;
  unsigned __int8 loaded_word_5;
  unsigned __int8 *record_pointer_3;
  int saved_loaded_word_2;
  unsigned __int8 loaded_word_6;
  int shifted_bits;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 loaded_word_7;
  int loaded_word_8;
  int remaining_bits;
  __int64 element_index;
  char *loaded_record_pointer_9;
  unsigned __int64 loaded_word_9;
  char input_byte_5;
  char *loaded_record_pointer_10;
  char table_value;
  char table_value_2;
  char table_value_3;
  char table_value_4;
  __int64 remaining_count;
  int iteration_count_3;
  int loaded_word_10;
  int remaining_bits_2;
  __int64 element_index_2;
  char *loaded_record_pointer_11;
  unsigned __int64 loaded_word_11;
  char input_byte_6;
  char *loaded_record_pointer_12;
  int remaining_amount_2;
  unsigned __int8 *record_pointer_4;
  unsigned __int8 *loaded_record_pointer_13;
  unsigned __int8 loaded_word_12;
  unsigned __int8 *loaded_record_pointer_14;
  int loaded_word_13;
  int remaining_bits_3;
  unsigned __int8 saved_remaining_amount;
  __int64 j;
  char *loaded_record_pointer_15;
  unsigned __int64 loaded_word_14;
  char input_byte_7;
  char *loaded_record_pointer_16;
  char table_value_5;
  __int64 remaining_count_2;
  char table_value_6;
  char table_value_7;
  char table_value_8;
  int iteration_count_4;
  int loaded_word_15;
  int remaining_bits_4;
  __int64 i;
  char *loaded_record_pointer_17;
  unsigned __int64 loaded_word_16;
  char input_byte_8;
  int int64_result_5;
  char *loaded_record_pointer_18;
       char *literal_text;
  __int64 client_static_tls_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140169770[144];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140169770 + 0)) /* [rsp+0h] */
#define input_value (*(int (*))(void *)(sr_frame_140169770 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 36)) /* [rsp+24h] */
#define scratch_buffer_2 (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 40)) /* [rsp+28h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_140169770 + 44)) /* [rsp+2Ch] */
#define iteration_count_5 (*(int (*))(void *)(sr_frame_140169770 + 48)) /* [rsp+30h] */
#define integer_sum_2 (*(int (*))(void *)(sr_frame_140169770 + 52)) /* [rsp+34h] */
#define state_address (*(__int64 * (*))(void *)(sr_frame_140169770 + 56)) /* [rsp+38h] */
#define byte_cursor_3 (*(char * (*))(void *)(sr_frame_140169770 + 64)) /* [rsp+40h] */
#define cached_integer_sum (*(__int64 (*))(void *)(sr_frame_140169770 + 72)) /* [rsp+48h] */
#define input_value_3 (*(__int64 (*))(void *)(sr_frame_140169770 + 80)) /* [rsp+50h] */
#define saved_iteration_count (*(__int64 (*))(void *)(sr_frame_140169770 + 88)) /* [rsp+58h] */
#define byte_cursor_4 (*(_BYTE * (*))(void *)(sr_frame_140169770 + 96)) /* [rsp+60h] */
#define scratch_buffer_3 (*(_QWORD (*)[5])(void *)(sr_frame_140169770 + 104)) /* [rsp+68h] */

  record_pointer = scratch_buffer_3;
  option_flags = 0;
  iteration_count = 0;
  input_value_3 = a5;
  input_value_2 = a3;
  input_value = a2;
  do
  {
    if ( iteration_count == 10 )
      goto LABEL_190;
    loaded_record_pointer = *(char **)(a1 + 192);
    ++iteration_count;
    loaded_word = *(_QWORD *)(a1 + 200);
    saved_input_byte = record_pointer;
    record_pointer = (_QWORD *)((char *)record_pointer + 3);
    saved_iteration_count = iteration_count;
    if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        input_byte = 0;
        goto LABEL_12;
      }
      int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( int64_result )
      {
        loaded_word = int64_result + a1 + 56;
        *(_QWORD *)(a1 + 200) = loaded_word;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        loaded_word = *(_QWORD *)(a1 + 200);
      }
      loaded_record_pointer = *(char **)(a1 + 192);
    }
    input_byte = *loaded_record_pointer;
    loaded_record_pointer_2 = loaded_record_pointer + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
    if ( (unsigned __int64)loaded_record_pointer_2 < loaded_word )
      goto LABEL_17;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      int64_result_2 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( int64_result_2 )
      {
        loaded_word = int64_result_2 + a1 + 56;
        *(_QWORD *)(a1 + 200) = loaded_word;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        loaded_word = *(_QWORD *)(a1 + 200);
      }
      loaded_record_pointer_2 = *(char **)(a1 + 192);
LABEL_17:
      input_byte_2 = *loaded_record_pointer_2;
      loaded_record_pointer_3 = loaded_record_pointer_2 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3);
      *saved_input_byte = input_byte_2;
      if ( (unsigned __int64)loaded_record_pointer_3 < loaded_word )
        goto LABEL_25;
      goto LABEL_20;
    }
    *saved_input_byte = 0;
LABEL_20:
    if ( !*(_DWORD *)(a1 + 48) )
    {
      saved_input_byte[1] = 0;
      goto LABEL_28;
    }
    int64_result_3 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
            *(_QWORD *)(a1 + 40),
            a1 + 56,
            *(unsigned int *)(a1 + 52));
    *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 192) = a1 + 56;
    if ( int64_result_3 )
    {
      loaded_word = int64_result_3 + a1 + 56;
      *(_QWORD *)(a1 + 200) = loaded_word;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 57;
      *(_BYTE *)(a1 + 56) = 0;
      loaded_word = *(_QWORD *)(a1 + 200);
    }
    loaded_record_pointer_3 = *(char **)(a1 + 192);
LABEL_25:
    input_byte_3 = *loaded_record_pointer_3;
    byte_cursor = loaded_record_pointer_3 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
    saved_input_byte[1] = input_byte_3;
    if ( (unsigned __int64)byte_cursor < loaded_word )
    {
      input_byte_4 = *byte_cursor;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor + 1);
      goto LABEL_34;
    }
LABEL_28:
    if ( *(_DWORD *)(a1 + 48) )
    {
      int64_result_4 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( int64_result_4 )
      {
        *(_QWORD *)(a1 + 200) = int64_result_4 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      loaded_record_pointer_4 = *(char **)(a1 + 192);
      input_byte_4 = *loaded_record_pointer_4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
    }
    else
    {
      input_byte_4 = 0;
    }
LABEL_34:
    option_flags |= input_byte_4;
    saved_input_byte[2] = input_byte_4;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_38;
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_189;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
LABEL_38:
    if ( *saved_input_byte != 8 )
      goto LABEL_190;
  }
  while ( input_byte );
  iteration_count_2 = 0;
  integer_sum_2 = 0;
  *a4 = ((option_flags & 0x10) != 0) + 3;
  if ( input_value_2 <= 0 )
    return input_value_3; /* 0x14016A145: mov rax, qword ptr [rsp + 0x50] */
  cached_input_value = input_value_2;
  uint64 sr_local_image_tls=sr_client_static_tls();
  state_address = (__int64 *)&sr_local_image_tls;
  while ( 1 )
  {
    integer_sum = 0;
    iteration_count_5 = 0;
    cached_integer_sum = 0;
    if ( iteration_count > 0 )
      break;
LABEL_184:
    integer_sum_2 = ++iteration_count_2;
    if ( iteration_count_2 >= cached_input_value )
      return input_value_3; /* 0x14016A145: mov rax, qword ptr [rsp + 0x50] */
  }
  remaining_amount = input_value;
  byte_cursor_2 = (_BYTE *)(input_value_3 + 4 * iteration_count_2 * input_value);
  byte_cursor_4 = byte_cursor_2;
LABEL_44:
  scaled_index = 3 * integer_sum;
  record_byte_offset = byte_cursor_2;
  loaded_word_2 = *((unsigned __int8 *)scratch_buffer_3 + 3 * integer_sum + 1);
  if ( !loaded_word_2 )
  {
    iteration_count_4 = 0;
    if ( remaining_amount <= 0 )
      goto LABEL_182;
    loaded_word_15 = *((unsigned __int8 *)scratch_buffer_3 + scaled_index + 2);
    while ( 1 )
    {
      remaining_bits_4 = 128;
      for ( i = 0; i < 4; ++i )
      {
        if ( (remaining_bits_4 & loaded_word_15) == 0 )
          goto LABEL_177;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_167;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_167:
          loaded_record_pointer_17 = *(char **)(a1 + 192);
          loaded_word_16 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)loaded_record_pointer_17 >= loaded_word_16 )
          {
LABEL_188:
            literal_text = "bad file";
            client_static_tls_result = *state_address;
LABEL_191:
            *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
            return 0; /* 0x14016A1D0: xor eax, eax */
          }
          goto LABEL_168;
        }
        loaded_record_pointer_17 = *(char **)(a1 + 192);
        loaded_word_16 = *(_QWORD *)(a1 + 200);
LABEL_168:
        if ( (unsigned __int64)loaded_record_pointer_17 >= loaded_word_16 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            int64_result_5 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( int64_result_5 )
            {
              *(_QWORD *)(a1 + 200) = int64_result_5 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            loaded_record_pointer_18 = *(char **)(a1 + 192);
            input_byte_8 = *loaded_record_pointer_18;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_18 + 1);
          }
          else
          {
            input_byte_8 = 0;
          }
        }
        else
        {
          input_byte_8 = *loaded_record_pointer_17;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_17 + 1);
        }
        record_byte_offset[i] = input_byte_8;
LABEL_177:
        remaining_bits_4 >>= 1;
      }
      if ( !record_byte_offset )
        return 0; /* 0x14016A1D0: xor eax, eax */
      ++iteration_count_4;
      record_byte_offset += 4;
      if ( iteration_count_4 >= remaining_amount )
      {
LABEL_182:
        ++iteration_count_5;
        integer_sum = cached_integer_sum + 1;
        iteration_count = saved_iteration_count;
        byte_cursor_2 = byte_cursor_4;
        cached_integer_sum = integer_sum;
        if ( integer_sum >= saved_iteration_count )
        {
          iteration_count_2 = integer_sum_2;
          cached_input_value = input_value_2;
          goto LABEL_184;
        }
        goto LABEL_44;
      }
    }
  }
  integer_difference = loaded_word_2 - 1;
  if ( !integer_difference )
  {
    remaining_amount_2 = remaining_amount;
    if ( remaining_amount <= 0 )
      goto LABEL_182;
    record_pointer_4 = (unsigned __int8 *)scratch_buffer_3 + scaled_index + 2;
    while ( 1 )
    {
      loaded_record_pointer_13 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_13 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_14 = *(unsigned __int8 **)(a1 + 192);
          loaded_word_12 = *loaded_record_pointer_14;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_14 + 1);
        }
        else
        {
          loaded_word_12 = 0;
        }
      }
      else
      {
        loaded_word_12 = *loaded_record_pointer_13;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_13 + 1);
      }
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_129;
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        break;
LABEL_130:
      loaded_word_13 = *record_pointer_4;
      remaining_bits_3 = 128;
      saved_remaining_amount = remaining_amount_2;
      if ( loaded_word_12 <= (unsigned int)remaining_amount_2 )
        saved_remaining_amount = loaded_word_12;
      for ( j = 0; j < 4; ++j )
      {
        if ( (remaining_bits_3 & loaded_word_13) == 0 )
          goto LABEL_145;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_138;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_138:
          loaded_record_pointer_15 = *(char **)(a1 + 192);
          loaded_word_14 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)loaded_record_pointer_15 >= loaded_word_14 )
            goto LABEL_188;
          goto LABEL_139;
        }
        loaded_record_pointer_15 = *(char **)(a1 + 192);
        loaded_word_14 = *(_QWORD *)(a1 + 200);
LABEL_139:
        if ( (unsigned __int64)loaded_record_pointer_15 >= loaded_word_14 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_16 = *(char **)(a1 + 192);
            input_byte_7 = *loaded_record_pointer_16;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_16 + 1);
          }
          else
          {
            input_byte_7 = 0;
          }
        }
        else
        {
          input_byte_7 = *loaded_record_pointer_15;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_15 + 1);
        }
        scratch_buffer_2[j] = input_byte_7;
LABEL_145:
        remaining_bits_3 >>= 1;
      }
      if ( saved_remaining_amount )
      {
        table_value_5 = scratch_buffer_2[0];
        remaining_count_2 = saved_remaining_amount;
        table_value_6 = scratch_buffer_2[3];
        table_value_7 = scratch_buffer_2[2];
        table_value_8 = scratch_buffer_2[1];
        do
        {
          if ( (loaded_word_13 & 0x80u) != 0 )
            *record_byte_offset = table_value_5;
          if ( (loaded_word_13 & 0x40) != 0 )
            record_byte_offset[1] = table_value_8;
          if ( (loaded_word_13 & 0x20) != 0 )
            record_byte_offset[2] = table_value_7;
          if ( (loaded_word_13 & 0x10) != 0 )
            record_byte_offset[3] = table_value_6;
          record_byte_offset += 4;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
      }
      remaining_amount_2 -= saved_remaining_amount;
      if ( remaining_amount_2 <= 0 )
      {
        remaining_amount = input_value;
        goto LABEL_182;
      }
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_189;
LABEL_129:
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
    goto LABEL_130;
  }
  if ( integer_difference != 1 )
  {
LABEL_190:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad format";
    goto LABEL_191;
  }
  if ( input_value <= 0 )
  {
    remaining_amount = input_value;
    goto LABEL_182;
  }
  record_pointer_2 = (unsigned __int8 *)scratch_buffer_3 + scaled_index + 2;
  byte_cursor_3 = (char *)scratch_buffer_3 + scaled_index + 2;
  while ( 2 )
  {
    loaded_record_pointer_5 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
        loaded_word_3 = *loaded_record_pointer_6;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
      }
      else
      {
        loaded_word_3 = 0;
      }
    }
    else
    {
      loaded_word_3 = *loaded_record_pointer_5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
    }
    saved_loaded_word = loaded_word_3;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_189;
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_189;
    }
    if ( saved_loaded_word >= 0x80 )
    {
      if ( saved_loaded_word == 128 )
      {
        loaded_record_pointer_7 = *(unsigned __int8 **)(a1 + 192);
        loaded_word_4 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)loaded_record_pointer_7 < loaded_word_4 )
          goto LABEL_63;
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_7 = *(unsigned __int8 **)(a1 + 192);
          loaded_word_4 = *(_QWORD *)(a1 + 200);
LABEL_63:
          loaded_word_5 = *loaded_record_pointer_7;
          record_pointer_3 = loaded_record_pointer_7 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_3);
          saved_loaded_word_2 = loaded_word_5;
          if ( (unsigned __int64)record_pointer_3 < loaded_word_4 )
          {
            loaded_word_6 = *record_pointer_3;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_3 + 1);
            shifted_bits = loaded_word_6 + (loaded_word_5 << 8);
            goto LABEL_70;
          }
        }
        else
        {
          saved_loaded_word_2 = 0;
        }
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_8 = *(unsigned __int8 **)(a1 + 192);
          loaded_word_7 = *loaded_record_pointer_8;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
          shifted_bits = loaded_word_7 + (saved_loaded_word_2 << 8);
        }
        else
        {
          shifted_bits = saved_loaded_word_2 << 8;
        }
      }
      else
      {
        shifted_bits = saved_loaded_word - 127;
      }
LABEL_70:
      if ( shifted_bits > remaining_amount )
        goto LABEL_189;
      loaded_word_8 = *record_pointer_2;
      remaining_bits = 128;
      element_index = 0;
LABEL_72:
      if ( (remaining_bits & loaded_word_8) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            loaded_record_pointer_9 = *(char **)(a1 + 192);
            loaded_word_9 = *(_QWORD *)(a1 + 200);
            goto LABEL_78;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        loaded_record_pointer_9 = *(char **)(a1 + 192);
        loaded_word_9 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)loaded_record_pointer_9 >= loaded_word_9 )
          goto LABEL_188;
LABEL_78:
        if ( (unsigned __int64)loaded_record_pointer_9 >= loaded_word_9 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_10 = *(char **)(a1 + 192);
            input_byte_5 = *loaded_record_pointer_10;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
          }
          else
          {
            input_byte_5 = 0;
          }
        }
        else
        {
          input_byte_5 = *loaded_record_pointer_9;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
        }
        scratch_buffer[element_index] = input_byte_5;
      }
      ++element_index;
      remaining_bits >>= 1;
      if ( element_index >= 4 )
      {
        if ( shifted_bits > 0 )
        {
          table_value = scratch_buffer[0];
          table_value_2 = scratch_buffer[3];
          table_value_3 = scratch_buffer[2];
          table_value_4 = scratch_buffer[1];
          remaining_count = (unsigned int)shifted_bits;
          do
          {
            if ( (loaded_word_8 & 0x80u) != 0 )
              *record_byte_offset = table_value;
            if ( (loaded_word_8 & 0x40) != 0 )
              record_byte_offset[1] = table_value_4;
            if ( (loaded_word_8 & 0x20) != 0 )
              record_byte_offset[2] = table_value_3;
            if ( (loaded_word_8 & 0x10) != 0 )
              record_byte_offset[3] = table_value_2;
            record_byte_offset += 4;
            --remaining_count;
          }
          while ( remaining_count );
        }
LABEL_116:
        record_pointer_2 = (unsigned __int8 *)byte_cursor_3;
LABEL_117:
        remaining_amount -= shifted_bits;
        if ( remaining_amount <= 0 )
        {
          remaining_amount = input_value;
          goto LABEL_182;
        }
        continue;
      }
      goto LABEL_72;
    }
    break;
  }
  shifted_bits = saved_loaded_word + 1;
  if ( shifted_bits > (unsigned int)remaining_amount )
  {
LABEL_189:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad file";
    goto LABEL_191;
  }
  iteration_count_3 = 0;
  if ( !shifted_bits )
    goto LABEL_117;
  loaded_word_10 = *record_pointer_2;
  while ( 2 )
  {
    remaining_bits_2 = 128;
    element_index_2 = 0;
    while ( 2 )
    {
      if ( (remaining_bits_2 & loaded_word_10) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            loaded_record_pointer_11 = *(char **)(a1 + 192);
            loaded_word_11 = *(_QWORD *)(a1 + 200);
            goto LABEL_107;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        loaded_record_pointer_11 = *(char **)(a1 + 192);
        loaded_word_11 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)loaded_record_pointer_11 >= loaded_word_11 )
          goto LABEL_188;
LABEL_107:
        if ( (unsigned __int64)loaded_record_pointer_11 >= loaded_word_11 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_12 = *(char **)(a1 + 192);
            input_byte_6 = *loaded_record_pointer_12;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
          }
          else
          {
            input_byte_6 = 0;
          }
        }
        else
        {
          input_byte_6 = *loaded_record_pointer_11;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
        }
        record_byte_offset[element_index_2] = input_byte_6;
      }
      ++element_index_2;
      remaining_bits_2 >>= 1;
      if ( element_index_2 < 4 )
        continue;
      break;
    }
    if ( record_byte_offset )
    {
      ++iteration_count_3;
      record_byte_offset += 4;
      if ( iteration_count_3 >= shifted_bits )
        goto LABEL_116;
      continue;
    }
    return 0; /* 0x14016A1D0: xor eax, eax */
  }
}
#undef unused_frame_slot_0
#undef input_value
#undef scratch_buffer
#undef scratch_buffer_2
#undef input_value_2
#undef iteration_count_5
#undef integer_sum_2
#undef state_address
#undef byte_cursor_3
#undef cached_integer_sum
#undef input_value_3
#undef saved_iteration_count
#undef byte_cursor_4
#undef scratch_buffer_3

//----- (000000014016A210) ----------------------------------------------------
_BOOL8            sub_14016A210(__int64 a1)
{
  BOOL unused_written_slot;
  __int64 remaining_count;
  unsigned __int64 loaded_word;

  if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
  {
    remaining_count = 84;
    do
    {
      loaded_word = *(_QWORD *)(a1 + 192);
      if ( loaded_word >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          ++*(_QWORD *)(a1 + 192);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 192) = loaded_word + 1;
      }
      --remaining_count;
    }
    while ( remaining_count );
    unused_written_slot = sub_140169470(a1, (__int64)"PICT") != 0;
  }
  else
  {
    unused_written_slot = 0;
  }
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return unused_written_slot;
}

//----- (000000014016A2C0) ----------------------------------------------------
_BOOL8            sub_14016A2C0(__int64 a1)
{
  __int64 remaining_count;
  unsigned __int64 loaded_word;

  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    return 0;
  remaining_count = 84;
  do
  {
    loaded_word = *(_QWORD *)(a1 + 192);
    if ( loaded_word >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = loaded_word + 1;
    }
    --remaining_count;
  }
  while ( remaining_count );
  return (unsigned int)sub_140169470(a1, (__int64)"PICT") != 0;
}

//----- (000000014016A360) ----------------------------------------------------
__int64            sub_14016A360(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int call_result;
  __int64 table_value;
  _QWORD scratch_buffer[7];

  scratch_buffer[0] = a1;
  call_result = sub_140167D10((__int64)scratch_buffer, 2, 0);
  table_value = scratch_buffer[0];
  if ( call_result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)scratch_buffer[0];
    if ( a3 )
      *a3 = *(_DWORD *)(table_value + 4);
    if ( a4 )
      *a4 = *(_DWORD *)(table_value + 8);
    return 1;
  }
  else
  {
    *(_QWORD *)(scratch_buffer[0] + 192LL) = *(_QWORD *)(scratch_buffer[0] + 208LL);
    *(_QWORD *)(table_value + 200) = *(_QWORD *)(table_value + 216);
    return 0;
  }
}

//----- (000000014016A400) ----------------------------------------------------
__int64            sub_14016A400(_DWORD **a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *loaded_word;

  if ( (unsigned int)sub_140167D10((__int64)a1, 2, 0) )
  {
    if ( a2 )
      *a2 = **a1;
    if ( a3 )
      *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    return 1;
  }
  else
  {
    loaded_word = *a1;
    loaded_word[24] = *((_QWORD *)*a1 + 26);
    loaded_word[25] = loaded_word[27];
    return 0;
  }
}

//----- (000000014016A4A0) ----------------------------------------------------
__int64            sub_14016A4A0(__int64 a1)
{
  __int64 table_value;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A4A0[48];
#define scratch_buffer (*(_QWORD (*)[4])(void *)(sr_frame_14016A4A0 + 0)) /* [rsp+20h] */
#define callee_output_word (*(int (*))(void *)(sr_frame_14016A4A0 + 32)) /* [rsp+40h] */

  scratch_buffer[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)scratch_buffer, 2, 0) && callee_output_word == 16 )
    return 1;
  table_value = scratch_buffer[0];
  *(_QWORD *)(scratch_buffer[0] + 192LL) = *(_QWORD *)(scratch_buffer[0] + 208LL);
  *(_QWORD *)(table_value + 200) = *(_QWORD *)(table_value + 216);
  return 0;
}
#undef scratch_buffer
#undef callee_output_word

//----- (000000014016A500) ----------------------------------------------------
char *           sub_14016A500(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *allocation_buffer;
  char *unused_written_slot;
  int selected_word;
  _DWORD *table_value;
  int loaded_word;
  int loaded_word_2;
  char *returned_pointer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A500[64];
#define loaded_word_3 (*(int (*))(void *)(sr_frame_14016A500 + 0)) /* [rsp+20h] */
#define scratch_buffer (*(_QWORD (*)[3])(void *)(sr_frame_14016A500 + 16)) /* [rsp+30h] */
#define byte_cursor (*(char * (*))(void *)(sr_frame_14016A500 + 40)) /* [rsp+48h] */
#define frame_word_at_48 (*(int (*))(void *)(sr_frame_14016A500 + 48)) /* [rsp+50h] */

  allocation_buffer = nullptr;
  scratch_buffer[0] = a1;
  unused_written_slot = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
    return nullptr;
  }
  if ( !(unsigned int)sub_140167D10((__int64)scratch_buffer, 0, a5) )
  {
    allocation_buffer = byte_cursor;
LABEL_18:
    free(allocation_buffer);
    free((void *)scratch_buffer[2]);
    free((void *)scratch_buffer[1]);
    return unused_written_slot;
  }
  selected_word = frame_word_at_48;
  if ( frame_word_at_48 <= 8 )
  {
    selected_word = 8;
    goto LABEL_6;
  }
  if ( frame_word_at_48 == 16 )
  {
LABEL_6:
    *a6 = selected_word;
    unused_written_slot = byte_cursor;
    table_value = (_DWORD *)scratch_buffer[0];
    if ( !a5
      || (loaded_word = *(_DWORD *)(scratch_buffer[0] + 12LL), a5 == loaded_word)
      || ((loaded_word_2 = *(_DWORD *)scratch_buffer[0], loaded_word_3 = *(_DWORD *)(scratch_buffer[0] + 4LL), selected_word != 8)
        ? (returned_pointer = sub_14015DD00(byte_cursor, loaded_word, a5, loaded_word_2, loaded_word_3))
        : (returned_pointer = sub_14015D7E0(byte_cursor, loaded_word, a5, loaded_word_2, loaded_word_3)),
          table_value[3] = a5,
          (unused_written_slot = returned_pointer) != nullptr) )
    {
      *a2 = *table_value;
      *a3 = table_value[1];
      if ( a4 )
        *a4 = table_value[2];
      goto LABEL_18;
    }
    return nullptr;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
  return nullptr;
}
#undef loaded_word_3
#undef scratch_buffer
#undef byte_cursor
#undef frame_word_at_48

//----- (000000014016A670) ----------------------------------------------------
__int64            sub_14016A670(_QWORD *a1)
{
  __int64 result;

  result = sub_14015CE80((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}

//----- (000000014016A6A0) ----------------------------------------------------
__int64            sub_14016A6A0(__int64 a1, _BYTE *a2)
{
  unsigned int scaled_index;
  char *loaded_record_pointer;
  char input_byte;
  int int64_result;
  char *loaded_record_pointer_2;
  char input_byte_2;

  scaled_index = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 48) )
        return scaled_index;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      return scaled_index;
LABEL_6:
    if ( (unsigned __int8)(*a2 - 48) > 9u )
      return scaled_index;
    loaded_record_pointer = *(char **)(a1 + 192);
    scaled_index = (char)*a2 + 2 * (5 * scaled_index - 24);
    if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( int64_result )
        {
          *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        loaded_record_pointer_2 = *(char **)(a1 + 192);
        input_byte_2 = *loaded_record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        *a2 = input_byte_2;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      *a2 = input_byte;
    }
  }
}

//----- (000000014016A7D0) ----------------------------------------------------
__int64            sub_14016A7D0(__int64 a1, char *a2, char *a3, int *a4)
{
  char *loaded_record_pointer;
  char *unused_written_slot;
  char *unused_written_slot_2;
  unsigned __int64 loaded_word;
  int *unused_written_slot_3;
  char input_byte;
  char *byte_cursor;
  char input_byte_2;
  char *loaded_record_pointer_2;
  int selection_code;
  char *loaded_record_pointer_3;
  char input_byte_3;
  char *loaded_record_pointer_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A7D0[16];
#define saved_input_byte (*(char (*))(void *)(sr_frame_14016A7D0 + 0)) /* [rsp+40h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14016A7D0 + 8)) /* [rsp+48h] */

  loaded_record_pointer = *(char **)(a1 + 208);
  unused_written_slot = &callee_output_word;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer);
  unused_written_slot_2 = &callee_output_word;
  loaded_word = *(_QWORD *)(a1 + 216);
  unused_written_slot_3 = (int *)&callee_output_word;
  if ( a2 )
    unused_written_slot = a2;
  if ( a3 )
    unused_written_slot_2 = a3;
  *(_QWORD *)(a1 + 200) = loaded_word;
  if ( a4 )
    unused_written_slot_3 = a4;
  if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      input_byte = 0;
      goto LABEL_13;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  input_byte = *loaded_record_pointer;
  byte_cursor = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
  if ( (unsigned __int64)byte_cursor < loaded_word )
  {
    input_byte_2 = *byte_cursor;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor + 1);
    goto LABEL_16;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer_2 = *(char **)(a1 + 192);
    input_byte_2 = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  else
  {
    input_byte_2 = 0;
  }
LABEL_16:
  if ( input_byte == 80 && (unsigned __int8)(input_byte_2 - 53) <= 1u )
  {
    selection_code = 1;
    if ( input_byte_2 == 54 )
      selection_code = 3;
    *unused_written_slot_3 = selection_code;
    loaded_record_pointer_3 = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_4 = *(char **)(a1 + 192);
        input_byte_3 = *loaded_record_pointer_4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        input_byte_3 = 0;
      }
    }
    else
    {
      input_byte_3 = *loaded_record_pointer_3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    saved_input_byte = input_byte_3;
    sub_14016ABA0(a1, &saved_input_byte);
    *(_DWORD *)unused_written_slot = sub_14016A6A0(a1, &saved_input_byte);
    sub_14016ABA0(a1, &saved_input_byte);
    *(_DWORD *)unused_written_slot_2 = sub_14016A6A0(a1, &saved_input_byte);
    sub_14016ABA0(a1, &saved_input_byte);
    if ( (int)sub_14016A6A0(a1, &saved_input_byte) <= 255 )
      return 1;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("max value > 255");
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  }
  return 0;
}
#undef saved_input_byte
#undef callee_output_word

//----- (000000014016A9F0) ----------------------------------------------------
char *           sub_14016A9F0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int scaled_index;
  __m128i *allocated_buffer;
  char *saved_allocated_buffer;
  int loaded_word_4;
  __int64 client_static_tls_result;
       char *literal_text;

  if ( !(unsigned int)sub_14016A7D0(a1, (char *)a1, (char *)(a1 + 4), (int *)(a1 + 8)) )
    return nullptr;
  if ( *(_DWORD *)(a1 + 4) > 0x1000000u || *(_DWORD *)a1 > 0x1000000u )
    goto LABEL_24;
  *a2 = *(_DWORD *)a1;
  *a3 = *(_DWORD *)(a1 + 4);
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 8);
  if ( (loaded_word = *(_DWORD *)(a1 + 8), loaded_word_2 = *(_DWORD *)(a1 + 4), loaded_word_3 = *(_DWORD *)a1, loaded_word < 0)
    || loaded_word_3 < 0
    || loaded_word_3 && loaded_word > 0x7FFFFFFF / loaded_word_3
    || (scaled_index = loaded_word_3 * loaded_word, loaded_word_3 * loaded_word < 0)
    || loaded_word_2 < 0
    || loaded_word_2 && scaled_index > 0x7FFFFFFF / loaded_word_2 )
  {
LABEL_24:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "too large";
    goto LABEL_25;
  }
  if ( loaded_word_3 && loaded_word > 0x7FFFFFFF / loaded_word_3
    || loaded_word_2 && scaled_index > 0x7FFFFFFF / loaded_word_2
    || (allocated_buffer = (__m128i *)sr_path_malloc(loaded_word_2 * scaled_index), (saved_allocated_buffer = (char *)allocated_buffer) == nullptr) )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
LABEL_25:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return nullptr;
  }
  sub_140160860(a1, allocated_buffer, *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 4) * *(_DWORD *)a1);
  if ( !a5 )
    return saved_allocated_buffer;
  loaded_word_4 = *(_DWORD *)(a1 + 8);
  if ( a5 == loaded_word_4 )
    return saved_allocated_buffer;
  saved_allocated_buffer = sub_14015D7E0(saved_allocated_buffer, loaded_word_4, a5, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  if ( saved_allocated_buffer )
    return saved_allocated_buffer;
  return nullptr;
}

//----- (000000014016ABA0) ----------------------------------------------------
unsigned __int64            sub_14016ABA0(__int64 a1, _BYTE *a2)
{
  char *loaded_record_pointer;
  char input_byte;
  int int64_result;
  char *loaded_record_pointer_2;
  char input_byte_2;
  unsigned __int64 result;
  char *loaded_record_pointer_3;
  char input_byte_3;
  int int64_result_2;
  char *loaded_record_pointer_4;
  char input_byte_4;

  while ( 1 )
  {
LABEL_1:
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_5;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_5:
    if ( *a2 != 32 && (unsigned __int8)(*a2 - 9) > 4u )
      break;
    loaded_record_pointer = *(char **)(a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( int64_result )
        {
          *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        loaded_record_pointer_2 = *(char **)(a1 + 192);
        input_byte_2 = *loaded_record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        *a2 = input_byte_2;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      input_byte = *loaded_record_pointer;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      *a2 = input_byte;
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_18;
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
  {
LABEL_19:
    if ( *a2 != 35 )
      return result;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_24;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_1;
      }
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_1;
LABEL_24:
      if ( *a2 == 10 || *a2 == 13 )
        goto LABEL_1;
      loaded_record_pointer_3 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          int64_result_2 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( int64_result_2 )
          {
            *(_QWORD *)(a1 + 200) = int64_result_2 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          loaded_record_pointer_4 = *(char **)(a1 + 192);
          input_byte_4 = *loaded_record_pointer_4;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
          *a2 = input_byte_4;
        }
        else
        {
          *a2 = 0;
        }
      }
      else
      {
        input_byte_3 = *loaded_record_pointer_3;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
        *a2 = input_byte_3;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
LABEL_18:
    result = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 192) < result )
      goto LABEL_19;
  }
  return result;
}

//----- (000000014016ADD0) ----------------------------------------------------
__int64            sub_14016ADD0(__int64 a1)
{
  char *loaded_record_pointer;
  unsigned __int64 loaded_word;
  char input_byte;
  char *byte_cursor;
  char input_byte_2;
  char *loaded_record_pointer_2;

  loaded_record_pointer = *(char **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      input_byte = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(char **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  input_byte = *loaded_record_pointer;
  byte_cursor = loaded_record_pointer + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
  if ( (unsigned __int64)byte_cursor < loaded_word )
  {
    input_byte_2 = *byte_cursor;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor + 1);
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer_2 = *(char **)(a1 + 192);
    input_byte_2 = *loaded_record_pointer_2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  else
  {
    input_byte_2 = 0;
  }
LABEL_10:
  if ( input_byte == 80 && (unsigned __int8)(input_byte_2 - 53) <= 1u )
    return 1;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016AEA0) ----------------------------------------------------
__int64            sub_14016AEA0(__int64 a1, int a2)
{
  __int64 loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  int loaded_word_4;
  char *loaded_record_pointer;
  char input_byte;
  int call_result;
  unsigned int call_result_2;
  _BYTE *loaded_record_pointer_2;
  __int64 remaining_count;
  _BYTE *loaded_record_pointer_3;
  int saved_remaining_count;
  _QWORD *record_byte_offset;
  int loaded_word_5;
  int iteration_count;
  _BYTE *buffer_cursor;
  unsigned int *record_byte_offset_2;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int8 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned __int8 loaded_word_7;
  unsigned __int8 *loaded_record_pointer_7;
  unsigned __int8 saved_loaded_word;
  unsigned int shifted_bits;
  unsigned int masked_bits;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 loaded_word_8;
  unsigned __int8 *loaded_record_pointer_9;
  int loaded_word_9;
  int loaded_word_10;
  int scaled_index;
  int loaded_word_11;
  __int64 running_total;
  __int64 remaining_count_2;
  int saved_loaded_word_2;
  int saved_loaded_word_3;
  int iteration_count_2;
  __int64 i;
  int loaded_word_12;
  int loaded_word_13;
  int loaded_word_14;
  int scaled_index_2;
  __int64 allocated_buffer;
  int loaded_word_15;
  int loaded_word_16;
  unsigned int scaled_index_3;
  __int64 allocated_buffer_2;
  __int64 client_static_tls_result;
       char *literal_text;

  loaded_word = *(_QWORD *)a1;
  loaded_word_2 = 1;
  loaded_word_3 = 1;
  loaded_word_4 = sub_1401604F0(*(_QWORD *)a1);
  if ( loaded_word_4 < 11 )
  {
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOF len");
    return 0;
  }
  loaded_record_pointer = *(char **)(loaded_word + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(loaded_word + 200) )
  {
    if ( !*(_DWORD *)(loaded_word + 48) )
    {
LABEL_96:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("only 8-bit");
      return 0;
    }
    stbi_refill_buffer(loaded_word);
    loaded_record_pointer = *(char **)(loaded_word + 192);
  }
  input_byte = *loaded_record_pointer;
  *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( input_byte != 8 )
    goto LABEL_96;
  call_result = sub_1401604F0(loaded_word);
  *(_DWORD *)(loaded_word + 4) = call_result;
  if ( !call_result )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no header height");
    return 0;
  }
  call_result_2 = sub_1401604F0(loaded_word);
  *(_DWORD *)loaded_word = call_result_2;
  if ( !call_result_2 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("0 width");
    return 0;
  }
  if ( *(_DWORD *)(loaded_word + 4) > 0x1000000u || call_result_2 > 0x1000000 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return 0;
  }
  loaded_record_pointer_2 = *(_BYTE **)(loaded_word + 192);
  if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(loaded_word + 200) )
  {
    if ( *(_DWORD *)(loaded_word + 48) )
    {
      stbi_refill_buffer(loaded_word);
      loaded_record_pointer_3 = *(_BYTE **)(loaded_word + 192);
      LOBYTE(remaining_count) = *loaded_record_pointer_3;
      *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    else
    {
      LOBYTE(remaining_count) = 0;
    }
  }
  else
  {
    LOBYTE(remaining_count) = *loaded_record_pointer_2;
    *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
  }
  saved_remaining_count = (unsigned __int8)remaining_count;
  if ( (((unsigned __int8)remaining_count - 1) & 0xFFFFFFFC) != 0 || (unsigned __int8)remaining_count == 2 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad component count");
    return 0;
  }
  else
  {
    *(_DWORD *)(loaded_word + 8) = (unsigned __int8)remaining_count;
    remaining_count = (unsigned __int8)remaining_count;
    if ( (_BYTE)remaining_count )
    {
      record_byte_offset = (_QWORD *)(a1 + 18152);
      do
      {
        *(record_byte_offset - 3) = 0;
        *record_byte_offset = 0;
        record_byte_offset += 12;
        --remaining_count;
      }
      while ( remaining_count );
      saved_remaining_count = *(_DWORD *)(loaded_word + 8);
    }
    if ( loaded_word_4 != saved_remaining_count + 2 * (saved_remaining_count + 4) )
      goto LABEL_2;
    *(_DWORD *)(a1 + 18512) = 0;
    loaded_word_5 = *(_DWORD *)(loaded_word + 8);
    iteration_count = 0;
    if ( loaded_word_5 > 0 )
    {
      buffer_cursor = &unk_14026E7E4;
      record_byte_offset_2 = (unsigned int *)(a1 + 18084);
      while ( 1 )
      {
        loaded_record_pointer_4 = *(unsigned __int8 **)(loaded_word + 192);
        if ( (unsigned __int64)loaded_record_pointer_4 >= *(_QWORD *)(loaded_word + 200) )
        {
          if ( *(_DWORD *)(loaded_word + 48) )
          {
            stbi_refill_buffer(loaded_word);
            loaded_record_pointer_5 = *(unsigned __int8 **)(loaded_word + 192);
            loaded_word_6 = *loaded_record_pointer_5;
            *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
          }
          else
          {
            loaded_word_6 = 0;
          }
        }
        else
        {
          loaded_word_6 = *loaded_record_pointer_4;
          *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
        }
        *(record_byte_offset_2 - 1) = loaded_word_6;
        if ( *(_DWORD *)(loaded_word + 8) == 3 && loaded_word_6 == (unsigned __int8)*buffer_cursor )
          ++*(_DWORD *)(a1 + 18512);
        loaded_record_pointer_6 = *(unsigned __int8 **)(loaded_word + 192);
        if ( (unsigned __int64)loaded_record_pointer_6 >= *(_QWORD *)(loaded_word + 200) )
        {
          if ( *(_DWORD *)(loaded_word + 48) )
          {
            stbi_refill_buffer(loaded_word);
            loaded_record_pointer_7 = *(unsigned __int8 **)(loaded_word + 192);
            loaded_word_7 = *loaded_record_pointer_7;
            *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
          }
          else
          {
            loaded_word_7 = 0;
          }
        }
        else
        {
          loaded_word_7 = *loaded_record_pointer_6;
          *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
        }
        saved_loaded_word = loaded_word_7;
        shifted_bits = loaded_word_7 >> 4;
        *record_byte_offset_2 = shifted_bits;
        if ( !shifted_bits || shifted_bits > 4 )
          break;
        masked_bits = saved_loaded_word & 0xF;
        record_byte_offset_2[1] = masked_bits;
        if ( !masked_bits || masked_bits > 4 )
        {
          client_static_tls_result = sr_client_static_tls();
          literal_text = "bad V";
          goto LABEL_87;
        }
        loaded_record_pointer_8 = *(unsigned __int8 **)(loaded_word + 192);
        if ( (unsigned __int64)loaded_record_pointer_8 >= *(_QWORD *)(loaded_word + 200) )
        {
          if ( *(_DWORD *)(loaded_word + 48) )
          {
            stbi_refill_buffer(loaded_word);
            loaded_record_pointer_9 = *(unsigned __int8 **)(loaded_word + 192);
            loaded_word_8 = *loaded_record_pointer_9;
            *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
          }
          else
          {
            loaded_word_8 = 0;
          }
        }
        else
        {
          loaded_word_8 = *loaded_record_pointer_8;
          *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
        }
        record_byte_offset_2[2] = loaded_word_8;
        if ( loaded_word_8 > 3u )
        {
          client_static_tls_result = sr_client_static_tls();
          literal_text = "bad TQ";
          goto LABEL_87;
        }
        loaded_word_5 = *(_DWORD *)(loaded_word + 8);
        ++iteration_count;
        ++buffer_cursor;
        record_byte_offset_2 += 24;
        if ( iteration_count >= loaded_word_5 )
          goto LABEL_52;
      }
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad H";
      goto LABEL_87;
    }
LABEL_52:
    if ( a2 )
      return 1;
    loaded_word_9 = *(_DWORD *)loaded_word;
    loaded_word_10 = *(_DWORD *)(loaded_word + 4);
    if ( *(int *)loaded_word < 0
      || loaded_word_10 < 0
      || loaded_word_10 && loaded_word_9 > 0x7FFFFFFF / loaded_word_10
      || (scaled_index = loaded_word_10 * loaded_word_9, scaled_index < 0)
      || loaded_word_5 < 0
      || loaded_word_5 && scaled_index > 0x7FFFFFFF / loaded_word_5 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "too large";
LABEL_87:
      *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
      return 0;
    }
    loaded_word_11 = *(_DWORD *)(loaded_word + 8);
    if ( loaded_word_11 > 0 )
    {
      running_total = a1 + 18088;
      remaining_count_2 = (unsigned int)loaded_word_11;
      do
      {
        saved_loaded_word_2 = loaded_word_2;
        loaded_word_2 = *(_DWORD *)(running_total - 4);
        running_total += 96;
        saved_loaded_word_3 = loaded_word_3;
        loaded_word_3 = *(_DWORD *)(running_total - 96);
        if ( loaded_word_2 <= saved_loaded_word_2 )
          loaded_word_2 = saved_loaded_word_2;
        if ( loaded_word_3 <= saved_loaded_word_3 )
          loaded_word_3 = saved_loaded_word_3;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    *(_DWORD *)(a1 + 18056) = loaded_word_2;
    *(_DWORD *)(a1 + 18060) = loaded_word_3;
    *(_DWORD *)(a1 + 18072) = 8 * loaded_word_2;
    *(_DWORD *)(a1 + 18076) = 8 * loaded_word_3;
    iteration_count_2 = 0;
    *(_DWORD *)(a1 + 18064) = (8 * loaded_word_2 + *(_DWORD *)loaded_word - 1) / (unsigned int)(8 * loaded_word_2);
    *(_DWORD *)(a1 + 18068) = (8 * loaded_word_3 + *(_DWORD *)(loaded_word + 4) - 1) / (unsigned int)(8 * loaded_word_3);
    if ( *(int *)(loaded_word + 8) <= 0 )
    {
      return 1;
    }
    else
    {
      for ( i = a1 + 18108; ; i += 96 )
      {
        loaded_word_12 = *(_DWORD *)(i - 20);
        *(_DWORD *)i = (loaded_word_2 + *(_DWORD *)loaded_word * *(_DWORD *)(i - 24) - 1) / (unsigned int)loaded_word_2;
        *(_DWORD *)(i + 4) = (loaded_word_3 + loaded_word_12 * *(_DWORD *)(loaded_word + 4) - 1) / (unsigned int)loaded_word_3;
        loaded_word_13 = 8 * *(_DWORD *)(i - 24) * *(_DWORD *)(a1 + 18064);
        *(_DWORD *)(i + 8) = loaded_word_13;
        loaded_word_14 = *(_DWORD *)(a1 + 18068) * loaded_word_12;
        *(_QWORD *)(i + 52) = 0;
        *(_QWORD *)(i + 36) = 0;
        *(_QWORD *)(i + 44) = 0;
        scaled_index_2 = 8 * loaded_word_14;
        *(_DWORD *)(i + 12) = scaled_index_2;
        if ( loaded_word_13 < 0 || scaled_index_2 < 0 || scaled_index_2 && loaded_word_13 > 0x7FFFFFFF / scaled_index_2 )
          break;
        allocated_buffer = sr_path_malloc(scaled_index_2 * loaded_word_13 + 15);
        *(_QWORD *)(i + 28) = allocated_buffer;
        if ( !allocated_buffer )
          goto LABEL_92;
        *(_QWORD *)(i + 20) = (allocated_buffer + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( *(_DWORD *)(a1 + 18480) )
        {
          loaded_word_15 = *(_DWORD *)(i + 8);
          loaded_word_16 = *(_DWORD *)(i + 12);
          *(_DWORD *)(i + 60) = loaded_word_15 / 8;
          *(_DWORD *)(i + 64) = loaded_word_16 / 8;
          if ( loaded_word_15 < 0
            || loaded_word_16 < 0
            || loaded_word_16 && loaded_word_15 > 0x7FFFFFFF / loaded_word_16
            || (scaled_index_3 = loaded_word_16 * loaded_word_15, scaled_index_3 >= 0x40000000)
            || (int)(2 * scaled_index_3) > 2147483632 )
          {
            *(_QWORD *)(i + 36) = 0;
            goto LABEL_92;
          }
          allocated_buffer_2 = sr_path_malloc((int)(2 * scaled_index_3 + 15));
          *(_QWORD *)(i + 36) = allocated_buffer_2;
          if ( !allocated_buffer_2 )
            goto LABEL_92;
          *(_QWORD *)(i + 52) = (allocated_buffer_2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        }
        if ( ++iteration_count_2 >= *(_DWORD *)(loaded_word + 8) )
          return 1;
      }
      *(_QWORD *)(i + 28) = 0;
LABEL_92:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return sub_140160460(a1, iteration_count_2 + 1, 0);
    }
  }
}

//----- (000000014016B5F0) ----------------------------------------------------
__int64            sub_14016B5F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *loaded_record_pointer;
  __int64 input_value;
  unsigned __int8 loaded_word;
  int cached_selection_flag;
  __int64 shifted_bits;
  int shifted_bits_2;
  int record_byte_offset;
  int iteration_count;
  int shifted_bits_3;
  int iteration_count_2;
  int shifted_bits_4;
  _BYTE *record_byte_offset_2;
  int cached_i;
  int integer_difference;
  int iteration_count_3;
  int remaining_count;
  __int64 integer_sum;
  unsigned __int8 *loaded_record_pointer_2;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int8 loaded_word_3;
  int int64_result;
  unsigned __int8 *loaded_record_pointer_5;
  int saved_shifted_bits;
  int masked_bits;
  __int64 scaled_index;
  char loaded_word_4;
  int unrecovered_register_value;
  int loaded_word_5;
  unsigned int integer_difference_2;
  __int64 loaded_word_6;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 loaded_word_7;
  int saved_buffer_cursor;
  int int64_result_2;
  unsigned __int8 *loaded_record_pointer_6;
  int loaded_word_8;
  __int64 loaded_word_9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016B5F0[144];
#define i (*(int (*))(void *)(sr_frame_14016B5F0 + 0)) /* [rsp+20h] */
#define integer_sum_2 (*(int (*))(void *)(sr_frame_14016B5F0 + 4)) /* [rsp+24h] */
#define integer_difference_3 (*(int (*))(void *)(sr_frame_14016B5F0 + 8)) /* [rsp+28h] */
#define integer_sum_3 (*(__int64 (*))(void *)(sr_frame_14016B5F0 + 16)) /* [rsp+30h] */
#define saved_shifted_bits_2 (*(int (*))(void *)(sr_frame_14016B5F0 + 112)) /* [rsp+90h] */
#define selection_flag (*(int (*))(void *)(sr_frame_14016B5F0 + 128)) /* [rsp+A0h] */
#define saved_shifted_bits_3 (*(int (*))(void *)(sr_frame_14016B5F0 + 136)) /* [rsp+A8h] */

  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  input_value = a2;
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      loaded_word = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  }
  loaded_word = *loaded_record_pointer;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  if ( loaded_word > 0xCu )
    return 0;
LABEL_7:
  cached_selection_flag = 1;
  LODWORD(shifted_bits) = 0;
  shifted_bits_2 = 1 << loaded_word;
  integer_sum_2 = loaded_word + 1;
  record_byte_offset = 0;
  iteration_count = integer_sum_2;
  saved_shifted_bits_3 = shifted_bits_2;
  shifted_bits_3 = 1 << (loaded_word + 1);
  iteration_count_2 = 0;
  selection_flag = 1;
  integer_difference_3 = shifted_bits_3 - 1;
  shifted_bits_4 = shifted_bits_3 - 1;
  saved_shifted_bits_2 = 0;
  if ( shifted_bits_2 > 0 )
  {
    record_byte_offset_2 = (_BYTE *)(input_value + 2102);
    do
    {
      *record_byte_offset_2 = iteration_count_2;
      record_byte_offset_2[1] = iteration_count_2++;
      *((_WORD *)record_byte_offset_2 - 1) = -1;
      record_byte_offset_2 += 4;
    }
    while ( iteration_count_2 < shifted_bits_2 );
  }
  cached_i = shifted_bits_2 + 2;
  integer_difference = -1;
  iteration_count_3 = shifted_bits_2 + 2;
  remaining_count = 0;
  integer_sum = shifted_bits_2 + 2;
  integer_sum_3 = integer_sum;
  for ( i = shifted_bits_2 + 2; ; cached_i = i )
  {
    while ( 1 )
    {
      while ( record_byte_offset < iteration_count )
      {
        if ( !remaining_count )
        {
          loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
          if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              stbi_refill_buffer(a1);
              loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
              LODWORD(shifted_bits) = saved_shifted_bits_2;
              loaded_word_2 = *loaded_record_pointer_3;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
            }
            else
            {
              loaded_word_2 = 0;
            }
          }
          else
          {
            loaded_word_2 = *loaded_record_pointer_2;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
          }
          remaining_count = loaded_word_2;
          if ( !loaded_word_2 )
            return *(_QWORD *)(input_value + 8);
        }
        loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
        --remaining_count;
        if ( (unsigned __int64)loaded_record_pointer_4 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52),
                    integer_sum);
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( int64_result )
            {
              *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            loaded_record_pointer_5 = *(unsigned __int8 **)(a1 + 192);
            input_value = a2;
            LODWORD(shifted_bits) = saved_shifted_bits_2;
            loaded_word_3 = *loaded_record_pointer_5;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
          }
          else
          {
            loaded_word_3 = 0;
          }
        }
        else
        {
          loaded_word_3 = *loaded_record_pointer_4;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
        }
        shifted_bits_2 = saved_shifted_bits_3;
        integer_sum = integer_sum_3;
        cached_selection_flag = selection_flag;
        LODWORD(shifted_bits) = (loaded_word_3 << record_byte_offset) | shifted_bits;
        cached_i = i;
        saved_shifted_bits_2 = shifted_bits;
        record_byte_offset += 8;
      }
      saved_shifted_bits = shifted_bits;
      shifted_bits = (unsigned int)((int)shifted_bits >> iteration_count);
      masked_bits = shifted_bits_4 & saved_shifted_bits;
      record_byte_offset -= iteration_count;
      saved_shifted_bits_2 = shifted_bits;
      if ( masked_bits != shifted_bits_2 )
        break;
      iteration_count = integer_sum_2;
      iteration_count_3 = cached_i;
      shifted_bits_4 = integer_difference_3;
      integer_difference = -1;
      integer_sum = shifted_bits_2 + 2LL;
      cached_selection_flag = 0;
      integer_sum_3 = integer_sum;
      selection_flag = 0;
    }
    if ( masked_bits == shifted_bits_2 + 1 )
      break;
    if ( masked_bits > iteration_count_3 )
      goto LABEL_46;
    if ( cached_selection_flag )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no clear code");
      return 0;
    }
    if ( integer_difference < 0 )
    {
      if ( masked_bits == iteration_count_3 )
      {
LABEL_46:
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("illegal code in raster");
        return 0;
      }
    }
    else
    {
      scaled_index = input_value + 4 * integer_sum;
      ++iteration_count_3;
      integer_sum_3 = integer_sum + 1;
      if ( iteration_count_3 > 0x2000 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too many codes");
        return 0;
      }
      *(_WORD *)(scaled_index + 2100) = integer_difference;
      loaded_word_4 = *(_BYTE *)(input_value + 4LL * integer_difference + 2102);
      *(_BYTE *)(scaled_index + 2102) = loaded_word_4;
      if ( masked_bits != iteration_count_3 )
        loaded_word_4 = *(_BYTE *)(input_value + 4LL * masked_bits + 2102);
      *(_BYTE *)(scaled_index + 2103) = loaded_word_4;
    }
    sub_1401670A0(input_value, masked_bits);
    if ( (iteration_count_3 & shifted_bits_4) == 0 && iteration_count_3 <= 4095 )
      shifted_bits_4 = (1 << ++iteration_count) - 1;
    shifted_bits_2 = saved_shifted_bits_3;
    integer_difference = unrecovered_register_value;
    LODWORD(shifted_bits) = saved_shifted_bits_2;
    integer_sum = integer_sum_3;
  }
  if ( remaining_count )
  {
    if ( remaining_count >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (loaded_word_5 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), loaded_word_5 < remaining_count) )
      {
        integer_difference_2 = remaining_count - loaded_word_5;
        loaded_word_6 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD, __int64, __int64))(a1 + 24))(loaded_word_6, integer_difference_2, shifted_bits, integer_sum);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += remaining_count;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    }
  }
  while ( 1 )
  {
    buffer_cursor = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        int64_result_2 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52),
                integer_sum);
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( int64_result_2 )
        {
          *(_QWORD *)(a1 + 200) = int64_result_2 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
        loaded_word_7 = *loaded_record_pointer_6;
        buffer_cursor = loaded_record_pointer_6 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
      }
      else
      {
        loaded_word_7 = 0;
      }
      saved_buffer_cursor = (int)buffer_cursor;
    }
    else
    {
      loaded_word_7 = *buffer_cursor;
      saved_buffer_cursor = (_DWORD)buffer_cursor + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++buffer_cursor);
    }
    if ( !loaded_word_7 )
      break;
    if ( *(_QWORD *)(a1 + 16) && (loaded_word_8 = *(_DWORD *)(a1 + 200) - saved_buffer_cursor, loaded_word_8 < loaded_word_7) )
    {
      loaded_word_9 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_9, (unsigned int)loaded_word_7 - loaded_word_8);
    }
    else
    {
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&buffer_cursor[loaded_word_7]);
    }
  }
  return *(_QWORD *)(a2 + 8);
}
#undef i
#undef integer_sum_2
#undef integer_difference_3
#undef integer_sum_3
#undef saved_shifted_bits_2
#undef selection_flag
#undef saved_shifted_bits_3

//----- (000000014016BB40) ----------------------------------------------------
__int64            sub_14016BB40(__int64 *a1, int a2)
{
  int call_result;
  __int64 client_static_tls_result;
  int remaining_amount;
  __int64 element_index;
  int selected_word;
  __int64 loaded_word;
  char *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  int selected_word_2;
  __int64 loaded_word_2;
  __int64 element_index_2;
  int selected_word_3;
  __int64 loaded_word_3;
  char *loaded_record_pointer_3;
  char input_byte_2;
  char *loaded_record_pointer_4;
  int selected_word_4;
  __int64 loaded_word_4;
  unsigned __int64 loaded_word_5;
  __int64 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 loaded_word_7;
  int remaining_amount_2;
  __int64 loaded_word_8;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned __int8 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_7;
  unsigned int shifted_bits;
  __int64 element_index_3;
  unsigned __int64 shifted_bits_2;
  __int64 loaded_word_10;
  __int16 call_result_2;
  _BYTE *loaded_record_pointer_8;
  _BYTE *loaded_record_pointer_9;
  __int64 table_value;
  int selection_code;
  int call_result_3;
  __int64 loaded_word_11;
  int running_total;
  unsigned __int8 *loaded_record_pointer_10;
  unsigned __int8 loaded_word_12;
  unsigned __int8 *loaded_record_pointer_11;
  unsigned int masked_bits;
  unsigned int shifted_bits_3;
  int *buffer_cursor;
  __int64 remaining_count;
  __int64 loaded_word_13;
  unsigned __int8 *loaded_record_pointer_12;
  unsigned __int8 loaded_word_14;
  unsigned __int8 *loaded_record_pointer_13;
  __int64 saved_masked_bits;
  __int64 *state_address;
  __int64 selection_code_2;
  __int64 cached_running_total;
  __int64 *state_address_2;
  __int64 i;
  __int64 loaded_word_15;
  char *loaded_record_pointer_14;
  char input_byte_3;
  char *loaded_record_pointer_15;
  __int64 *state_address_3;
  unsigned __int8 *buffer_cursor_2;
  int j;
  __int64 loaded_word_16;
  int loaded_word_17;
  int masked_bits_2;
  int state_address_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016BB40[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 0)) /* [rsp+0h] */
#define saved_running_total (*(int (*))(void *)(sr_frame_14016BB40 + 32)) /* [rsp+20h] */
#define integer_difference (*(int (*))(void *)(sr_frame_14016BB40 + 36)) /* [rsp+24h] */
#define scratch_buffer (*(int (*)[16])(void *)(sr_frame_14016BB40 + 48)) /* [rsp+30h] */
#define unused_frame_slot_112 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 112)) /* [rsp+70h] */

  switch ( a2 )
  {
    case 196:
      call_result_3 = sub_1401604F0(*a1) - 2;
      if ( call_result_3 > 0 )
      {
        while ( 1 )
        {
          loaded_word_11 = *a1;
          running_total = 0;
          loaded_record_pointer_10 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)loaded_record_pointer_10 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(loaded_word_11 + 48) )
            {
              stbi_refill_buffer(*a1);
              loaded_record_pointer_11 = *(unsigned __int8 **)(loaded_word_11 + 192);
              loaded_word_12 = *loaded_record_pointer_11;
              *(_QWORD *)(loaded_word_11 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
            }
            else
            {
              loaded_word_12 = 0;
            }
          }
          else
          {
            loaded_word_12 = *loaded_record_pointer_10;
            *(_QWORD *)(loaded_word_11 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
          }
          masked_bits = loaded_word_12 & 0xF;
          shifted_bits_3 = loaded_word_12 >> 4;
          if ( shifted_bits_3 > 1 || masked_bits > 3 )
            break;
          buffer_cursor = scratch_buffer;
          remaining_count = 16;
          do
          {
            loaded_word_13 = *a1;
            loaded_record_pointer_12 = *(unsigned __int8 **)(*a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer_12 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(loaded_word_13 + 48) )
              {
                stbi_refill_buffer(*a1);
                loaded_record_pointer_13 = *(unsigned __int8 **)(loaded_word_13 + 192);
                loaded_word_14 = *loaded_record_pointer_13;
                *(_QWORD *)(loaded_word_13 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_13 + 1);
              }
              else
              {
                loaded_word_14 = 0;
              }
            }
            else
            {
              loaded_word_14 = *loaded_record_pointer_12;
              *(_QWORD *)(loaded_word_13 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
            }
            *buffer_cursor = loaded_word_14;
            running_total += loaded_word_14;
            ++buffer_cursor;
            --remaining_count;
          }
          while ( remaining_count );
          saved_running_total = running_total;
          integer_difference = call_result_3 - 17;
          saved_masked_bits = masked_bits;
          state_address = &a1[210 * masked_bits];
          if ( shifted_bits_3 )
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)state_address + 3364, scratch_buffer) )
              return 0; /* 0x14016C13B: -> xor eax, eax */
            selection_code_2 = 969;
          }
          else
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)state_address + 4, scratch_buffer) )
              return 0; /* 0x14016C157: -> xor eax, eax */
            selection_code_2 = 129;
          }
          cached_running_total = saved_running_total;
          state_address_2 = &state_address[selection_code_2];
          for ( i = 0; i < cached_running_total; *((_BYTE *)state_address_2 + i++) = input_byte_3 )
          {
            loaded_word_15 = *a1;
            loaded_record_pointer_14 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer_14 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(loaded_word_15 + 48) )
              {
                stbi_refill_buffer(*a1);
                loaded_record_pointer_15 = *(char **)(loaded_word_15 + 192);
                input_byte_3 = *loaded_record_pointer_15;
                *(_QWORD *)(loaded_word_15 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_15 + 1);
              }
              else
              {
                input_byte_3 = 0;
              }
            }
            else
            {
              input_byte_3 = *loaded_record_pointer_14;
              *(_QWORD *)(loaded_word_15 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_14 + 1);
            }
          }
          if ( shifted_bits_3 )
          {
            state_address_3 = &a1[128 * saved_masked_bits + 1745];
            buffer_cursor_2 = (unsigned __int8 *)(state_address + 841);
            for ( j = 0; j < 512; ++j )
            {
              loaded_word_16 = *buffer_cursor_2;
              *(_WORD *)state_address_3 = 0;
              if ( (_BYTE)loaded_word_16 != 0xFF )
              {
                loaded_word_17 = *((unsigned __int8 *)state_address + loaded_word_16 + 8008);
                masked_bits_2 = *((_BYTE *)state_address + loaded_word_16 + 7752) & 0xF;
                if ( masked_bits_2 )
                {
                  if ( (unsigned int)(loaded_word_17 + masked_bits_2) <= 9 )
                  {
                    state_address_4 = ((j << loaded_word_17) & 0x1FF) >> (9 - masked_bits_2);
                    if ( state_address_4 < 1 << (masked_bits_2 - 1) )
                      state_address_4 += 1 - (1 << masked_bits_2);
                    if ( (unsigned int)(state_address_4 + 128) <= 0xFF )
                      *(_WORD *)state_address_3 = loaded_word_17 + masked_bits_2 + 16 * ((*((unsigned __int8 *)state_address + loaded_word_16 + 7752) >> 4) + 16 * state_address_4);
                  }
                }
              }
              ++buffer_cursor_2;
              state_address_3 = (__int64 *)((char *)state_address_3 + 2);
            }
          }
          call_result_3 = integer_difference - saved_running_total;
          if ( integer_difference - saved_running_total <= 0 )
            return call_result_3 == 0; /* 0x14016C2BE: test r12d, r12d; sete r13b; mov eax, r13d */
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DHT header");
        return 0; /* 0x14016C319: xor eax, eax */
      }
      return call_result_3 == 0; /* 0x14016C02D -> 0x14016C2BE: test r12d, r12d; sete r13b */
    case 219:
      remaining_amount_2 = sub_1401604F0(*a1) - 2;
      if ( remaining_amount_2 > 0 )
      {
        while ( 1 )
        {
          loaded_word_8 = *a1;
          loaded_record_pointer_6 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)loaded_record_pointer_6 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(loaded_word_8 + 48) )
            {
              stbi_refill_buffer(*a1);
              loaded_record_pointer_7 = *(unsigned __int8 **)(loaded_word_8 + 192);
              loaded_word_9 = *loaded_record_pointer_7;
              *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
            }
            else
            {
              loaded_word_9 = 0;
            }
          }
          else
          {
            loaded_word_9 = *loaded_record_pointer_6;
            *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
          }
          shifted_bits = loaded_word_9 >> 4;
          if ( shifted_bits > 1 )
            break;
          if ( (loaded_word_9 & 0xFu) > 3 )
          {
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT table");
            return 0; /* 0x14016C015: xor eax, eax */
          }
          element_index_3 = 0;
          shifted_bits_2 = (unsigned __int64)(loaded_word_9 & 0xF) << 6;
          do
          {
            loaded_word_10 = *a1;
            if ( shifted_bits )
            {
              call_result_2 = sub_1401604F0(*a1);
            }
            else
            {
              loaded_record_pointer_8 = *(_BYTE **)(loaded_word_10 + 192);
              if ( (unsigned __int64)loaded_record_pointer_8 >= *(_QWORD *)(loaded_word_10 + 200) )
              {
                if ( *(_DWORD *)(loaded_word_10 + 48) )
                {
                  stbi_refill_buffer(*a1);
                  loaded_record_pointer_9 = *(_BYTE **)(loaded_word_10 + 192);
                  LOBYTE(call_result_2) = *loaded_record_pointer_9;
                  *(_QWORD *)(loaded_word_10 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
                }
                else
                {
                  LOBYTE(call_result_2) = 0;
                }
              }
              else
              {
                LOBYTE(call_result_2) = *loaded_record_pointer_8;
                *(_QWORD *)(loaded_word_10 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
              }
              call_result_2 = (unsigned __int8)call_result_2;
            }
            table_value = byte_14026FC80[element_index_3++];
            *((_WORD *)a1 + shifted_bits_2 + table_value + 6724) = call_result_2;
          }
          while ( element_index_3 < 64 );
          selection_code = 65;
          if ( shifted_bits )
            selection_code = 129;
          remaining_amount_2 -= selection_code;
          if ( remaining_amount_2 <= 0 )
            return remaining_amount_2 == 0; /* 0x14016C2C1: sete r13b; mov eax, r13d */
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT type");
        return 0; /* 0x14016BE79: xor eax, eax */
      }
      return remaining_amount_2 == 0; /* 0x14016BEAA -> 0x14016C2C1: sete r13b */
    case 221:
      if ( (unsigned int)sub_1401604F0(*a1) == 4 )
      {
        *((_DWORD *)a1 + 4634) = sub_1401604F0(*a1);
        return 1; /* 0x14016BE8E: mov eax, 1 */
      }
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DRI len");
      return 0; /* 0x14016BE42: xor eax, eax */
    case 255:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("expected marker");
      return 0; /* 0x14016BBD2: xor eax, eax */
    default:
      if ( (unsigned int)(a2 - 224) > 0xF && a2 != 254 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown marker");
        return 0; /* 0x14016BC26: xor eax, eax */
      }
      call_result = sub_1401604F0(*a1);
      if ( call_result < 2 )
      {
        client_static_tls_result = sr_client_static_tls();
        if ( a2 == 254 )
          *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)("bad COM len");
        else
          *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)("bad APP len");
        return 0; /* 0x14016BC14: xor eax, eax */
      }
      remaining_amount = call_result - 2;
      if ( a2 == 224 )
      {
        if ( remaining_amount >= 5 )
        {
          element_index = 0;
          selected_word = 1;
          do
          {
            loaded_word = *a1;
            loaded_record_pointer = *(char **)(*a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(loaded_word + 48) )
              {
                stbi_refill_buffer(*a1);
                loaded_record_pointer_2 = *(char **)(loaded_word + 192);
                input_byte = *loaded_record_pointer_2;
                *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
              }
              else
              {
                input_byte = 0;
              }
            }
            else
            {
              input_byte = *loaded_record_pointer;
              *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
            }
            selected_word_2 = 0;
            if ( input_byte == sr_mem_14026e908[element_index] )
              selected_word_2 = selected_word;
            ++element_index;
            selected_word = selected_word_2;
          }
          while ( element_index < 5 );
          remaining_amount -= 5;
          if ( selected_word_2 )
          {
            loaded_word_2 = *a1;
            *((_DWORD *)a1 + 4626) = 1;
            sub_14016E0F0(loaded_word_2, remaining_amount);
            return 1; /* 0x14016BCE2: mov eax, 1 */
          }
        }
LABEL_47:
        sub_14016E0F0(*a1, remaining_amount);
        return 1; /* 0x14016BE15: mov eax, 1 */
      }
      if ( a2 != 238 || remaining_amount < 12 )
        goto LABEL_47;
      element_index_2 = 0;
      selected_word_3 = 1;
      do
      {
        loaded_word_3 = *a1;
        loaded_record_pointer_3 = *(char **)(*a1 + 192);
        if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(*a1 + 200) )
        {
          if ( *(_DWORD *)(loaded_word_3 + 48) )
          {
            stbi_refill_buffer(*a1);
            loaded_record_pointer_4 = *(char **)(loaded_word_3 + 192);
            input_byte_2 = *loaded_record_pointer_4;
            *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
          }
          else
          {
            input_byte_2 = 0;
          }
        }
        else
        {
          input_byte_2 = *loaded_record_pointer_3;
          *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
        }
        selected_word_4 = 0;
        if ( input_byte_2 == byte_14026E9C8[element_index_2] )
          selected_word_4 = selected_word_3;
        ++element_index_2;
        selected_word_3 = selected_word_4;
      }
      while ( element_index_2 < 6 );
      remaining_amount -= 6;
      if ( !selected_word_4 )
        goto LABEL_47;
      loaded_word_4 = *a1;
      loaded_word_5 = *(_QWORD *)(*a1 + 192);
      if ( loaded_word_5 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( *(_DWORD *)(loaded_word_4 + 48) )
        {
          stbi_refill_buffer(*a1);
          ++*(_QWORD *)(loaded_word_4 + 192);
        }
      }
      else
      {
        *(_QWORD *)(loaded_word_4 + 192) = loaded_word_5 + 1;
      }
      sub_1401604F0(*a1);
      sub_1401604F0(*a1);
      loaded_word_6 = *a1;
      loaded_record_pointer_5 = *(unsigned __int8 **)(*a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( !*(_DWORD *)(loaded_word_6 + 48) )
        {
          loaded_word_7 = 0;
          goto LABEL_46;
        }
        stbi_refill_buffer(*a1);
        loaded_record_pointer_5 = *(unsigned __int8 **)(loaded_word_6 + 192);
      }
      loaded_word_7 = *loaded_record_pointer_5;
      *(_QWORD *)(loaded_word_6 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
LABEL_46:
      remaining_amount -= 6;
      *((_DWORD *)a1 + 4627) = loaded_word_7;
      goto LABEL_47;
  }
  return 0; /* not reached: every case returns */
}
#undef unused_frame_slot_0
#undef saved_running_total
#undef integer_difference
#undef scratch_buffer
#undef unused_frame_slot_112

//----- (000000014016C320) ----------------------------------------------------
__int64            sub_14016C320(__int64 *a1)
{
  int call_result;
  __int64 loaded_word;
  int cached_call_result;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_2;
  int iteration_count;
  __int64 *saved_iteration_count;
  __int64 loaded_word_3;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_4;
  __int64 loaded_word_5;
  int saved_loaded_word;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_6;
  int iteration_count_2;
  unsigned int saved_loaded_word_2;
  __int64 element_index;
  int loaded_word_7;
  __int64 *record_byte_offset;
  unsigned int masked_bits;
  __int64 loaded_word_8;
  unsigned __int8 *loaded_record_pointer_7;
  unsigned __int8 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_8;
  __int64 loaded_word_10;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned __int8 loaded_word_11;
  unsigned __int8 *loaded_record_pointer_10;
  __int64 loaded_word_12;
  unsigned __int8 *loaded_record_pointer_11;
  unsigned __int8 loaded_word_13;
  unsigned __int8 *loaded_record_pointer_12;
  int loaded_word_14;
  unsigned int masked_bits_2;
  unsigned int shifted_bits;
  bool comparison_result;
  int loaded_word_15;
  __int64 client_static_tls_result;
       char *literal_text;

  call_result = sub_1401604F0(*a1);
  loaded_word = *a1;
  cached_call_result = call_result;
  loaded_record_pointer = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(loaded_word + 48) )
    {
      stbi_refill_buffer(*a1);
      loaded_record_pointer_2 = *(unsigned __int8 **)(loaded_word + 192);
      loaded_word_2 = *loaded_record_pointer_2;
      *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
    }
    else
    {
      loaded_word_2 = 0;
    }
  }
  else
  {
    loaded_word_2 = *loaded_record_pointer;
    *(_QWORD *)(loaded_word + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
  }
  *((_DWORD *)a1 + 4629) = loaded_word_2;
  if ( !loaded_word_2 || loaded_word_2 > 4u || loaded_word_2 > *(int *)(*a1 + 8) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS component count");
    return 0;
  }
  if ( cached_call_result != 2 * loaded_word_2 + 6 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS len");
    return 0;
  }
  iteration_count = 0;
  saved_iteration_count = a1 + 2315;
  do
  {
    loaded_word_3 = *a1;
    loaded_record_pointer_3 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(loaded_word_3 + 48) )
      {
        stbi_refill_buffer(*a1);
        loaded_record_pointer_4 = *(unsigned __int8 **)(loaded_word_3 + 192);
        loaded_word_4 = *loaded_record_pointer_4;
        *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        loaded_word_4 = 0;
      }
    }
    else
    {
      loaded_word_4 = *loaded_record_pointer_3;
      *(_QWORD *)(loaded_word_3 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    loaded_word_5 = *a1;
    saved_loaded_word = loaded_word_4;
    loaded_record_pointer_5 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(loaded_word_5 + 48) )
      {
        stbi_refill_buffer(*a1);
        loaded_record_pointer_6 = *(unsigned __int8 **)(loaded_word_5 + 192);
        loaded_word_6 = *loaded_record_pointer_6;
        *(_QWORD *)(loaded_word_5 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_6 + 1);
      }
      else
      {
        loaded_word_6 = 0;
      }
    }
    else
    {
      loaded_word_6 = *loaded_record_pointer_5;
      *(_QWORD *)(loaded_word_5 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
    }
    iteration_count_2 = 0;
    saved_loaded_word_2 = loaded_word_6;
    element_index = 0;
    loaded_word_7 = *(_DWORD *)(*a1 + 8);
    if ( loaded_word_7 <= 0 )
    {
LABEL_26:
      if ( iteration_count_2 == loaded_word_7 )
        return 0;
    }
    else
    {
      record_byte_offset = a1 + 2260;
      while ( *(_DWORD *)record_byte_offset != saved_loaded_word )
      {
        ++iteration_count_2;
        ++element_index;
        record_byte_offset += 12;
        if ( iteration_count_2 >= loaded_word_7 )
          goto LABEL_26;
      }
    }
    LODWORD(a1[12 * element_index + 2262]) = saved_loaded_word_2 >> 4;
    if ( saved_loaded_word_2 >> 4 > 3 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad DC huff";
      goto LABEL_52;
    }
    masked_bits = saved_loaded_word_2 & 0xF;
    HIDWORD(a1[12 * element_index + 2262]) = masked_bits;
    if ( masked_bits > 3 )
    {
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad AC huff";
      goto LABEL_52;
    }
    *(_DWORD *)saved_iteration_count = iteration_count_2;
    ++iteration_count;
    saved_iteration_count = (__int64 *)((char *)saved_iteration_count + 4);
  }
  while ( iteration_count < *((_DWORD *)a1 + 4629) );
  loaded_word_8 = *a1;
  loaded_record_pointer_7 = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_7 >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(loaded_word_8 + 48) )
    {
      stbi_refill_buffer(*a1);
      loaded_record_pointer_8 = *(unsigned __int8 **)(loaded_word_8 + 192);
      loaded_word_9 = *loaded_record_pointer_8;
      *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
    }
    else
    {
      loaded_word_9 = 0;
    }
  }
  else
  {
    loaded_word_9 = *loaded_record_pointer_7;
    *(_QWORD *)(loaded_word_8 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
  }
  loaded_word_10 = *a1;
  *((_DWORD *)a1 + 4621) = loaded_word_9;
  loaded_record_pointer_9 = *(unsigned __int8 **)(loaded_word_10 + 192);
  if ( (unsigned __int64)loaded_record_pointer_9 >= *(_QWORD *)(loaded_word_10 + 200) )
  {
    if ( *(_DWORD *)(loaded_word_10 + 48) )
    {
      stbi_refill_buffer(loaded_word_10);
      loaded_record_pointer_10 = *(unsigned __int8 **)(loaded_word_10 + 192);
      loaded_word_11 = *loaded_record_pointer_10;
      *(_QWORD *)(loaded_word_10 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
    }
    else
    {
      loaded_word_11 = 0;
    }
  }
  else
  {
    loaded_word_11 = *loaded_record_pointer_9;
    *(_QWORD *)(loaded_word_10 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
  }
  loaded_word_12 = *a1;
  *((_DWORD *)a1 + 4622) = loaded_word_11;
  loaded_record_pointer_11 = *(unsigned __int8 **)(loaded_word_12 + 192);
  if ( (unsigned __int64)loaded_record_pointer_11 >= *(_QWORD *)(loaded_word_12 + 200) )
  {
    if ( *(_DWORD *)(loaded_word_12 + 48) )
    {
      stbi_refill_buffer(loaded_word_12);
      loaded_record_pointer_12 = *(unsigned __int8 **)(loaded_word_12 + 192);
      loaded_word_13 = *loaded_record_pointer_12;
      *(_QWORD *)(loaded_word_12 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
    }
    else
    {
      loaded_word_13 = 0;
    }
  }
  else
  {
    loaded_word_13 = *loaded_record_pointer_11;
    *(_QWORD *)(loaded_word_12 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
  }
  loaded_word_14 = *((_DWORD *)a1 + 4621);
  masked_bits_2 = loaded_word_13 & 0xF;
  shifted_bits = loaded_word_13 >> 4;
  comparison_result = *((_DWORD *)a1 + 4620) == 0;
  *((_DWORD *)a1 + 4623) = shifted_bits;
  *((_DWORD *)a1 + 4624) = masked_bits_2;
  if ( comparison_result )
  {
    if ( !loaded_word_14 && !shifted_bits && !masked_bits_2 )
    {
      *((_DWORD *)a1 + 4622) = 63;
      return 1;
    }
LABEL_51:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad SOS";
LABEL_52:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return 0;
  }
  if ( loaded_word_14 > 63 )
    goto LABEL_51;
  loaded_word_15 = *((_DWORD *)a1 + 4622);
  if ( loaded_word_15 > 63 || loaded_word_14 > loaded_word_15 || shifted_bits > 0xD || masked_bits_2 > 0xD )
    goto LABEL_51;
  return 1;
}

//----- (000000014016C720) ----------------------------------------------------
__int64            sub_14016C720(__int64 a1, _BYTE *a2, int a3)
{
  int running_total;
  int integer_difference;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 loaded_word;
  int int64_result;
  unsigned __int8 *loaded_record_pointer;
  unsigned int remaining_count;
  char *loaded_record_pointer_2;
  char input_byte;
  int int64_result_2;
  char *loaded_record_pointer_3;
  int remaining_count_2;
  char input_byte_2;
  char *loaded_record_pointer_4;

  running_total = 0;
  integer_difference = a3;
  if ( a3 <= 0 )
    return 1;
  while ( 1 )
  {
    buffer_cursor = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        int64_result = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( int64_result )
        {
          *(_QWORD *)(a1 + 200) = int64_result + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
        loaded_word = *loaded_record_pointer;
        buffer_cursor = loaded_record_pointer + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor);
      }
      else
      {
        loaded_word = 0;
      }
    }
    else
    {
      loaded_word = *buffer_cursor++;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor);
    }
    if ( loaded_word == 128 )
      goto LABEL_33;
    if ( loaded_word >= 0x80u )
      break;
    remaining_count = loaded_word + 1;
    if ( remaining_count > integer_difference )
      return 0;
    running_total += remaining_count;
    do
    {
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_2 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          int64_result_2 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( int64_result_2 )
          {
            *(_QWORD *)(a1 + 200) = int64_result_2 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          loaded_record_pointer_3 = *(char **)(a1 + 192);
          input_byte = *loaded_record_pointer_3;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
        }
        else
        {
          input_byte = 0;
        }
      }
      else
      {
        input_byte = *loaded_record_pointer_2;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
      }
      *a2 = input_byte;
      a2 += 4;
      --remaining_count;
    }
    while ( remaining_count );
LABEL_33:
    integer_difference = a3 - running_total;
    if ( a3 - running_total <= 0 )
      return 1;
  }
  if ( loaded_word <= 0x80u )
    goto LABEL_33;
  remaining_count_2 = 257 - loaded_word;
  if ( remaining_count_2 <= integer_difference )
  {
    if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        loaded_record_pointer_4 = *(char **)(a1 + 192);
        input_byte_2 = *loaded_record_pointer_4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
      }
      else
      {
        input_byte_2 = 0;
      }
    }
    else
    {
      input_byte_2 = *buffer_cursor;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor + 1);
    }
    for ( running_total += remaining_count_2; remaining_count_2; --remaining_count_2 )
    {
      *a2 = input_byte_2;
      a2 += 4;
    }
    goto LABEL_33;
  }
  return 0;
}

//----- (000000014016C960) ----------------------------------------------------
__int64            sub_14016C960(__int64 a1, char *a2, char *a3, char *a4)
{
  char *unused_written_slot;
  char *unused_written_slot_2;
  char *unused_written_slot_3;
  int call_result;
  _QWORD *running_total;
  int loaded_word;
  char callee_output_word;

  unused_written_slot = &callee_output_word;
  unused_written_slot_2 = &callee_output_word;
  if ( a2 )
    unused_written_slot = a2;
  unused_written_slot_3 = &callee_output_word;
  if ( a3 )
    unused_written_slot_2 = a3;
  if ( a4 )
    unused_written_slot_3 = a4;
  call_result = sub_1401604F0(a1);
  if ( (call_result << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    running_total = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word < 6) )
    {
      *running_total = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - loaded_word));
    }
    else
    {
      *running_total += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      *(_DWORD *)unused_written_slot_2 = sub_140160670(a1);
      *(_DWORD *)unused_written_slot = sub_140160670(a1);
      if ( (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0 && (unsigned int)sub_1401604F0(a1) == 3 )
      {
        *(_DWORD *)unused_written_slot_3 = 4;
        return 1;
      }
    }
    *running_total = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016CA90) ----------------------------------------------------
__int64            sub_14016CA90(__int64 a1)
{
  int call_result;
  _QWORD *running_total;
  int loaded_word;

  call_result = sub_1401604F0(a1);
  if ( (call_result << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    running_total = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word < 6) )
    {
      *running_total = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - loaded_word));
    }
    else
    {
      *running_total += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      sub_140160670(a1);
      sub_140160670(a1);
      if ( (unsigned int)sub_1401604F0(a1) == 16 )
        return 1;
    }
    *running_total = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016CB70) ----------------------------------------------------
char *           sub_14016CB70(__int64 a1, int *a2, int *a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  int call_result;
  char **running_total;
  int loaded_word;
  int cached_call_result;
  int call_result_2;
  int cached_call_result_2;
  int call_result_3;
  __int64 cached_call_result_3;
  int call_result_4;
  int call_result_5;
  int call_result_6;
  int call_result_7;
  int scaled_index;
  int scaled_index_2;
  int scaled_index_3;
  __int64 allocated_buffer;
  _DWORD *input_cursor;
  char *allocation_buffer;
  __int64 allocated_buffer_2;
  __int64 client_static_tls_result;
       char *literal_text;
  __int64 scaled_index_4;
  signed int element_index;
  char *record_byte_offset;
  char integer_difference;
  __int64 remaining_count;
  signed int cached_call_result_4;
  int iteration_count;
  __int64 cached_call_result_5;
  _BYTE *buffer_cursor;
  __int16 integer_difference_2;
  __int16 *record_byte_offset_2;
  __int64 remaining_count_2;
  char integer_difference_3;
  char *record_byte_offset_3;
  __int64 remaining_count_3;
  _WORD *record_byte_offset_4;
  __int64 remaining_count_4;
  _BYTE *record_byte_offset_5;
  __int64 remaining_count_5;
  __int64 remaining_count_6;
  char *input_byte;
  char input_byte_2;
  unsigned __int16 *record_byte_offset_6;
  unsigned __int64 remaining_count_7;
  int scaled_index_5;
  float scaled_ratio;
  float product_difference;
  int table_value;
  float scaled_ratio_2;
  float product_difference_2;
  int table_value_2;
  float scaled_ratio_3;
  float product_difference_3;
  int table_value_3;
  float scaled_ratio_4;
  float product_difference_4;
  char *record_byte_offset_7;
  __int64 remaining_count_8;
  int loaded_word_2;
  float scaled_ratio_5;
  float product_difference_5;
  unsigned __int8 *record_byte_offset_8;
  unsigned __int64 remaining_count_9;
  int scaled_index_6;
  float scaled_ratio_6;
  float product_difference_6;
  int table_value_4;
  float scaled_ratio_7;
  float product_difference_7;
  int table_value_5;
  float scaled_ratio_8;
  float product_difference_8;
  int table_value_6;
  float scaled_ratio_9;
  float product_difference_9;
  char *record_byte_offset_9;
  __int64 remaining_count_10;
  int table_value_7;
  float scaled_ratio_10;
  float product_difference_10;
  char *returned_pointer;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016CB70[32];
#define call_result_8 (*(unsigned int (*))(void *)(sr_frame_14016CB70 + 0)) /* [rsp+30h] */
#define call_result_9 (*(int (*))(void *)(sr_frame_14016CB70 + 4)) /* [rsp+34h] */
#define cached_call_result_6 (*(int (*))(void *)(sr_frame_14016CB70 + 8)) /* [rsp+38h] */
#define cached_call_result_7 (*(__int64 (*))(void *)(sr_frame_14016CB70 + 16)) /* [rsp+40h] */
#define saved_allocated_buffer (*(char * (*))(void *)(sr_frame_14016CB70 + 24)) /* [rsp+48h] */

  call_result = sub_1401604F0(a1);
  if ( (call_result << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not PSD");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong version");
    return nullptr;
  }
  running_total = (char **)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)running_total, loaded_word < 6) )
  {
    *running_total = *(char **)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - loaded_word));
  }
  else
  {
    *running_total += 6;
  }
  call_result_8 = sub_1401604F0(a1);
  cached_call_result = call_result_8;
  if ( call_result_8 > 0x10 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong channel count");
    return nullptr;
  }
  call_result_9 = sub_140160670(a1);
  call_result_2 = sub_140160670(a1);
  cached_call_result_6 = call_result_2;
  cached_call_result_2 = call_result_2;
  if ( call_result_9 > 0x1000000 || call_result_2 > 0x1000000 )
    goto LABEL_12;
  call_result_3 = sub_1401604F0(a1);
  cached_call_result_3 = call_result_3;
  if ( ((call_result_3 - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported bit depth");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 3 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong color format");
    return nullptr;
  }
  call_result_4 = sub_140160670(a1);
  sub_14016E0F0(a1, call_result_4);
  call_result_5 = sub_140160670(a1);
  sub_14016E0F0(a1, call_result_5);
  call_result_6 = sub_140160670(a1);
  sub_14016E0F0(a1, call_result_6);
  call_result_7 = sub_1401604F0(a1);
  if ( call_result_7 > 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
    return nullptr;
  }
  if ( cached_call_result_2 < 0 )
    goto LABEL_12;
  if ( cached_call_result_2 )
  {
    if ( 0x7FFFFFFF / cached_call_result_2 < 4 )
      goto LABEL_12;
    scaled_index = 4 * cached_call_result_2;
    if ( (cached_call_result_2 & 0x20000000) != 0 )
      goto LABEL_12;
  }
  else
  {
    scaled_index = 0;
  }
  if ( call_result_9 < 0 || call_result_9 && scaled_index > 0x7FFFFFFF / call_result_9 )
  {
LABEL_12:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  scaled_index_2 = call_result_9 * cached_call_result_2;
  if ( call_result_7 || (_DWORD)cached_call_result_3 != 16 || a7 != 16 )
  {
    allocated_buffer_2 = sr_path_malloc(4 * scaled_index_2);
    input_cursor = a6;
    allocation_buffer = (char *)allocated_buffer_2;
    saved_allocated_buffer = (char *)allocated_buffer_2;
    goto LABEL_39;
  }
  if ( cached_call_result_2 )
  {
    if ( 0x7FFFFFFF / cached_call_result_2 < 8 )
      goto LABEL_37;
    scaled_index_3 = 8 * cached_call_result_2;
    if ( (cached_call_result_2 & 0x10000000) != 0 )
      goto LABEL_37;
  }
  else
  {
    scaled_index_3 = 0;
  }
  if ( call_result_9 && scaled_index_3 > 0x7FFFFFFF / call_result_9 )
  {
LABEL_37:
    input_cursor = a6;
    allocation_buffer = nullptr;
    saved_allocated_buffer = nullptr;
    *a6 = 16;
    goto LABEL_39;
  }
  allocated_buffer = sr_path_malloc(8 * scaled_index_2);
  input_cursor = a6;
  allocation_buffer = (char *)allocated_buffer;
  saved_allocated_buffer = (char *)allocated_buffer;
  *a6 = 16;
LABEL_39:
  if ( !allocation_buffer )
  {
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
    goto LABEL_41;
  }
  if ( call_result_7 )
  {
    sub_14016E0F0(a1, 2 * call_result_8 * call_result_9);
    scaled_index_4 = 0;
    element_index = 0;
    while ( 1 )
    {
      record_byte_offset = &allocation_buffer[element_index];
      if ( element_index < (int)call_result_8 )
      {
        if ( !(unsigned int)sub_14016C720(a1, record_byte_offset, scaled_index_2) )
        {
          free(allocation_buffer);
          client_static_tls_result = sr_client_static_tls();
          literal_text = "corrupt";
LABEL_41:
          *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
          return nullptr;
        }
      }
      else if ( scaled_index_2 > 0 )
      {
        integer_difference = 0;
        remaining_count = (unsigned int)scaled_index_2;
        if ( element_index == 3 )
          integer_difference = -1;
        do
        {
          *record_byte_offset = integer_difference;
          record_byte_offset += 4;
          --remaining_count;
        }
        while ( remaining_count );
      }
      if ( ++element_index >= 4 )
        goto LABEL_94;
    }
  }
  cached_call_result_4 = call_result_8;
  scaled_index_4 = 0;
  iteration_count = 0;
  cached_call_result_7 = cached_call_result_3;
  cached_call_result_5 = cached_call_result_3;
  buffer_cursor = allocation_buffer;
  do
  {
    if ( iteration_count < cached_call_result_4 )
    {
      if ( *input_cursor == 16 )
      {
        record_byte_offset_4 = allocation_buffer;
        if ( scaled_index_2 <= 0 )
          goto LABEL_92;
        remaining_count_4 = (unsigned int)scaled_index_2;
        do
        {
          *record_byte_offset_4 = sub_1401604F0(a1);
          record_byte_offset_4 += 4;
          --remaining_count_4;
        }
        while ( remaining_count_4 );
      }
      else
      {
        record_byte_offset_5 = buffer_cursor;
        if ( cached_call_result_5 == 16 )
        {
          if ( scaled_index_2 <= 0 )
            goto LABEL_92;
          remaining_count_5 = (unsigned int)scaled_index_2;
          do
          {
            *record_byte_offset_5 = (unsigned __int16)sub_1401604F0(a1) >> 8;
            record_byte_offset_5 += 4;
            --remaining_count_5;
          }
          while ( remaining_count_5 );
        }
        else
        {
          if ( scaled_index_2 <= 0 )
            goto LABEL_92;
          remaining_count_6 = (unsigned int)scaled_index_2;
          do
          {
            input_byte = *running_total;
            if ( (unsigned __int64)*running_total >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                input_byte_2 = *(*running_total)++;
              }
              else
              {
                input_byte_2 = 0;
              }
            }
            else
            {
              input_byte_2 = *input_byte;
              *running_total = input_byte + 1;
            }
            *record_byte_offset_5 = input_byte_2;
            record_byte_offset_5 += 4;
            --remaining_count_6;
          }
          while ( remaining_count_6 );
        }
      }
      scaled_index_4 = 0;
    }
    else if ( cached_call_result_5 == 16 && a7 == 16 )
    {
      integer_difference_2 = 0;
      record_byte_offset_2 = (__int16 *)allocation_buffer;
      if ( iteration_count == 3 )
        integer_difference_2 = -1;
      if ( scaled_index_2 <= 0 )
        goto LABEL_91;
      remaining_count_2 = (unsigned int)scaled_index_2;
      do
      {
        *record_byte_offset_2 = integer_difference_2;
        record_byte_offset_2 += 4;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    else
    {
      integer_difference_3 = 0;
      record_byte_offset_3 = buffer_cursor;
      if ( iteration_count == 3 )
        integer_difference_3 = -1;
      if ( scaled_index_2 <= 0 )
        goto LABEL_91;
      remaining_count_3 = (unsigned int)scaled_index_2;
      do
      {
        *record_byte_offset_3 = integer_difference_3;
        record_byte_offset_3 += 4;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
    }
    cached_call_result_4 = call_result_8;
LABEL_91:
    cached_call_result_5 = cached_call_result_7;
    input_cursor = a6;
LABEL_92:
    ++iteration_count;
    allocation_buffer += 2;
    ++buffer_cursor;
  }
  while ( iteration_count < 4 );
  cached_call_result = call_result_8;
  allocation_buffer = saved_allocated_buffer;
  cached_call_result_2 = cached_call_result_6;
LABEL_94:
  if ( cached_call_result >= 4 )
  {
    if ( *a6 == 16 )
    {
      if ( scaled_index_2 >= 4LL )
      {
        record_byte_offset_6 = (unsigned __int16 *)(allocation_buffer + 10);
        remaining_count_7 = ((unsigned __int64)(scaled_index_2 - 4LL) >> 2) + 1;
        scaled_index_4 = 4 * remaining_count_7;
        do
        {
          scaled_index_5 = *(record_byte_offset_6 - 2);
          if ( (unsigned __int16)(scaled_index_5 - 1) <= 0xFFFDu )
          {
            scaled_ratio = 65535.0 / (float)scaled_index_5;
            product_difference = (float)(1.0 - scaled_ratio) * 65535.0;
            *(record_byte_offset_6 - 5) = (int)(float)((float)((float)*(record_byte_offset_6 - 5) * scaled_ratio) + product_difference);
            *(record_byte_offset_6 - 4) = (int)(float)((float)((float)*(record_byte_offset_6 - 4) * scaled_ratio) + product_difference);
            *(record_byte_offset_6 - 3) = (int)(float)((float)((float)*(record_byte_offset_6 - 3) * scaled_ratio) + product_difference);
          }
          table_value = record_byte_offset_6[2];
          if ( (unsigned __int16)(table_value - 1) <= 0xFFFDu )
          {
            scaled_ratio_2 = 65535.0 / (float)table_value;
            product_difference_2 = (float)(1.0 - scaled_ratio_2) * 65535.0;
            *(record_byte_offset_6 - 1) = (int)(float)((float)((float)*(record_byte_offset_6 - 1) * scaled_ratio_2) + product_difference_2);
            *record_byte_offset_6 = (int)(float)((float)((float)*record_byte_offset_6 * scaled_ratio_2) + product_difference_2);
            record_byte_offset_6[1] = (int)(float)((float)((float)record_byte_offset_6[1] * scaled_ratio_2) + product_difference_2);
          }
          table_value_2 = record_byte_offset_6[6];
          if ( (unsigned __int16)(table_value_2 - 1) <= 0xFFFDu )
          {
            scaled_ratio_3 = 65535.0 / (float)table_value_2;
            product_difference_3 = (float)(1.0 - scaled_ratio_3) * 65535.0;
            record_byte_offset_6[3] = (int)(float)((float)((float)record_byte_offset_6[3] * scaled_ratio_3) + product_difference_3);
            record_byte_offset_6[4] = (int)(float)((float)((float)record_byte_offset_6[4] * scaled_ratio_3) + product_difference_3);
            record_byte_offset_6[5] = (int)(float)((float)((float)record_byte_offset_6[5] * scaled_ratio_3) + product_difference_3);
          }
          table_value_3 = record_byte_offset_6[10];
          if ( (unsigned __int16)(table_value_3 - 1) <= 0xFFFDu )
          {
            scaled_ratio_4 = 65535.0 / (float)table_value_3;
            product_difference_4 = (float)(1.0 - scaled_ratio_4) * 65535.0;
            record_byte_offset_6[7] = (int)(float)((float)((float)record_byte_offset_6[7] * scaled_ratio_4) + product_difference_4);
            record_byte_offset_6[8] = (int)(float)((float)((float)record_byte_offset_6[8] * scaled_ratio_4) + product_difference_4);
            record_byte_offset_6[9] = (int)(float)((float)((float)record_byte_offset_6[9] * scaled_ratio_4) + product_difference_4);
          }
          record_byte_offset_6 += 16;
          --remaining_count_7;
        }
        while ( remaining_count_7 );
      }
      if ( scaled_index_4 < scaled_index_2 )
      {
        record_byte_offset_7 = &allocation_buffer[8 * scaled_index_4 + 2];
        remaining_count_8 = scaled_index_2 - scaled_index_4;
        do
        {
          loaded_word_2 = *((unsigned __int16 *)record_byte_offset_7 + 2);
          if ( (unsigned __int16)(loaded_word_2 - 1) <= 0xFFFDu )
          {
            scaled_ratio_5 = 65535.0 / (float)loaded_word_2;
            product_difference_5 = (float)(1.0 - scaled_ratio_5) * 65535.0;
            *((_WORD *)record_byte_offset_7 - 1) = (int)(float)((float)((float)*((unsigned __int16 *)record_byte_offset_7 - 1) * scaled_ratio_5) + product_difference_5);
            *(_WORD *)record_byte_offset_7 = (int)(float)((float)((float)*(unsigned __int16 *)record_byte_offset_7 * scaled_ratio_5) + product_difference_5);
            *((_WORD *)record_byte_offset_7 + 1) = (int)(float)((float)((float)*((unsigned __int16 *)record_byte_offset_7 + 1) * scaled_ratio_5) + product_difference_5);
          }
          record_byte_offset_7 += 8;
          --remaining_count_8;
        }
        while ( remaining_count_8 );
      }
    }
    else
    {
      if ( scaled_index_2 >= 4LL )
      {
        record_byte_offset_8 = (unsigned __int8 *)(allocation_buffer + 5);
        remaining_count_9 = ((unsigned __int64)(scaled_index_2 - 4LL) >> 2) + 1;
        scaled_index_4 = 4 * remaining_count_9;
        do
        {
          scaled_index_6 = *(record_byte_offset_8 - 2);
          if ( (unsigned __int8)(scaled_index_6 - 1) <= 0xFDu )
          {
            scaled_ratio_6 = 254.99998 / (float)scaled_index_6;
            product_difference_6 = (float)(1.0 - scaled_ratio_6) * 255.0;
            *(record_byte_offset_8 - 5) = (int)(float)((float)((float)*(record_byte_offset_8 - 5) * scaled_ratio_6) + product_difference_6);
            *(record_byte_offset_8 - 4) = (int)(float)((float)((float)*(record_byte_offset_8 - 4) * scaled_ratio_6) + product_difference_6);
            *(record_byte_offset_8 - 3) = (int)(float)((float)((float)*(record_byte_offset_8 - 3) * scaled_ratio_6) + product_difference_6);
          }
          table_value_4 = record_byte_offset_8[2];
          if ( (unsigned __int8)(table_value_4 - 1) <= 0xFDu )
          {
            scaled_ratio_7 = 254.99998 / (float)table_value_4;
            product_difference_7 = (float)(1.0 - scaled_ratio_7) * 255.0;
            *(record_byte_offset_8 - 1) = (int)(float)((float)((float)*(record_byte_offset_8 - 1) * scaled_ratio_7) + product_difference_7);
            *record_byte_offset_8 = (int)(float)((float)((float)*record_byte_offset_8 * scaled_ratio_7) + product_difference_7);
            record_byte_offset_8[1] = (int)(float)((float)((float)record_byte_offset_8[1] * scaled_ratio_7) + product_difference_7);
          }
          table_value_5 = record_byte_offset_8[6];
          if ( (unsigned __int8)(table_value_5 - 1) <= 0xFDu )
          {
            scaled_ratio_8 = 254.99998 / (float)table_value_5;
            product_difference_8 = (float)(1.0 - scaled_ratio_8) * 255.0;
            record_byte_offset_8[3] = (int)(float)((float)((float)record_byte_offset_8[3] * scaled_ratio_8) + product_difference_8);
            record_byte_offset_8[4] = (int)(float)((float)((float)record_byte_offset_8[4] * scaled_ratio_8) + product_difference_8);
            record_byte_offset_8[5] = (int)(float)((float)((float)record_byte_offset_8[5] * scaled_ratio_8) + product_difference_8);
          }
          table_value_6 = record_byte_offset_8[10];
          if ( (unsigned __int8)(table_value_6 - 1) <= 0xFDu )
          {
            scaled_ratio_9 = 254.99998 / (float)table_value_6;
            product_difference_9 = (float)(1.0 - scaled_ratio_9) * 255.0;
            record_byte_offset_8[7] = (int)(float)((float)((float)record_byte_offset_8[7] * scaled_ratio_9) + product_difference_9);
            record_byte_offset_8[8] = (int)(float)((float)((float)record_byte_offset_8[8] * scaled_ratio_9) + product_difference_9);
            record_byte_offset_8[9] = (int)(float)((float)((float)record_byte_offset_8[9] * scaled_ratio_9) + product_difference_9);
          }
          record_byte_offset_8 += 16;
          --remaining_count_9;
        }
        while ( remaining_count_9 );
      }
      if ( scaled_index_4 < scaled_index_2 )
      {
        record_byte_offset_9 = &allocation_buffer[4 * scaled_index_4 + 1];
        remaining_count_10 = scaled_index_2 - scaled_index_4;
        do
        {
          table_value_7 = (unsigned __int8)record_byte_offset_9[2];
          if ( (unsigned __int8)(table_value_7 - 1) <= 0xFDu )
          {
            scaled_ratio_10 = 254.99998 / (float)table_value_7;
            product_difference_10 = (float)(1.0 - scaled_ratio_10) * 255.0;
            *(record_byte_offset_9 - 1) = (int)(float)((float)((float)(unsigned __int8)*(record_byte_offset_9 - 1) * scaled_ratio_10) + product_difference_10);
            *record_byte_offset_9 = (int)(float)((float)((float)(unsigned __int8)*record_byte_offset_9 * scaled_ratio_10) + product_difference_10);
            record_byte_offset_9[1] = (int)(float)((float)((float)(unsigned __int8)record_byte_offset_9[1] * scaled_ratio_10) + product_difference_10);
          }
          record_byte_offset_9 += 4;
          --remaining_count_10;
        }
        while ( remaining_count_10 );
      }
    }
  }
  if ( (a5 & 0xFFFFFFFB) != 0 )
  {
    returned_pointer = *a6 == 16 ? sub_14015DD00(allocation_buffer, 4, a5, cached_call_result_2, call_result_9) : sub_14015D7E0(allocation_buffer, 4, a5, cached_call_result_2, call_result_9);
    allocation_buffer = returned_pointer;
    if ( !returned_pointer )
      return nullptr;
  }
  if ( a4 )
    *a4 = 4;
  *a3 = call_result_9;
  *a2 = cached_call_result_2;
  return allocation_buffer;
}
#undef call_result_8
#undef call_result_9
#undef cached_call_result_6
#undef cached_call_result_7
#undef saved_allocated_buffer

//----- (000000014016D7A0) ----------------------------------------------------
_BOOL8            sub_14016D7A0(_QWORD *a1)
{
  int call_result;
  int call_result_2;

  call_result = sub_1401604F0((__int64)a1);
  call_result_2 = sub_1401604F0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return (call_result << 16) + call_result_2 == 943870035;
}

//----- (000000014016D800) ----------------------------------------------------
__int64            sub_14016D800(__int64 a1, int a2, __int64 a3)
{
  int remaining_bits;
  __int64 iteration_count;
  char *loaded_record_pointer;
  unsigned __int64 loaded_word;
  char input_byte;
  char *loaded_record_pointer_2;

  remaining_bits = 128;
  iteration_count = 0;
  while ( (remaining_bits & a2) == 0 )
  {
LABEL_14:
    ++iteration_count;
    remaining_bits >>= 1;
    if ( iteration_count >= 4 )
      return a3;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
    {
      loaded_record_pointer = *(char **)(a1 + 192);
      loaded_word = *(_QWORD *)(a1 + 200);
LABEL_8:
      if ( (unsigned __int64)loaded_record_pointer >= loaded_word )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_2 = *(char **)(a1 + 192);
          input_byte = *loaded_record_pointer_2;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2 + 1);
        }
        else
        {
          input_byte = 0;
        }
      }
      else
      {
        input_byte = *loaded_record_pointer;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer + 1);
      }
      *(_BYTE *)(iteration_count + a3) = input_byte;
      goto LABEL_14;
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_16;
  }
  loaded_record_pointer = *(char **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer < loaded_word )
    goto LABEL_8;
LABEL_16:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
  return 0;
}

//----- (000000014016D910) ----------------------------------------------------
__int64            stbi_refill_buffer(__int64 a1)
{
  _BYTE *byte_cursor;
  __int64 result;

  byte_cursor = (_BYTE *)(a1 + 56);
  LODWORD(result) = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                      *(_QWORD *)(a1 + 40),
                      a1 + 56,
                      *(unsigned int *)(a1 + 52));
  *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
  if ( (_DWORD)result )
  {
    result = (int)result;
    *(_QWORD *)(a1 + 200) = (int)result + a1 + 56;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 200) = a1 + 57;
    *byte_cursor = 0;
    return a1 + 57;
  }
  return result;
}

//----- (000000014016D990) ----------------------------------------------------
__int64            sub_14016D990(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 running_total;
  __int64 iteration_count;

  if ( (int)a4 > 0 )
  {
    running_total = a1;
    a4 = (unsigned int)a4;
    do
    {
      if ( a5 > 0LL )
      {
        iteration_count = 0;
        do
          *(_BYTE *)(running_total + iteration_count++) = *a2;
        while ( iteration_count < a5 );
      }
      running_total += a5;
      ++a2;
      --a4;
    }
    while ( a4 );
  }
  return a1;
}

//----- (000000014016D9D0) ----------------------------------------------------
_BYTE *           sub_14016D9D0(_BYTE *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  char input_byte;
  __int64 input_value;
  int cached_integer_difference;
  __int64 integer_difference;
  __int64 remaining_count;
  _BYTE *running_total;
  unsigned __int8 *buffer_cursor;
  int scaled_index;
  int scaled_index_2;
  __int64 scaled_index_3;

  input_byte = *a2;
  *a1 = *a2;
  if ( a4 == 1 )
  {
    a1[1] = input_byte;
    return a1;
  }
  else
  {
    input_value = a4;
    cached_integer_difference = 1;
    a1[1] = (3 * *a2 + (unsigned int)a2[1] + 2) >> 2;
    integer_difference = a4 - 1LL;
    if ( integer_difference > 1 )
    {
      remaining_count = a4 - 2LL;
      cached_integer_difference = integer_difference;
      running_total = a1 + 2;
      buffer_cursor = a2 + 2;
      do
      {
        scaled_index = *(buffer_cursor - 1);
        running_total += 2;
        ++buffer_cursor;
        scaled_index_2 = scaled_index + 2 * (scaled_index + 1);
        *(running_total - 2) = (scaled_index_2 + (unsigned int)*(buffer_cursor - 3)) >> 2;
        *(running_total - 1) = (scaled_index_2 + (unsigned int)*(buffer_cursor - 1)) >> 2;
        --remaining_count;
      }
      while ( remaining_count );
    }
    scaled_index_3 = 2 * cached_integer_difference;
    a1[scaled_index_3] = (3 * a2[input_value - 2] + (unsigned int)a2[integer_difference] + 2) >> 2;
    a1[scaled_index_3 + 1] = a2[integer_difference];
    return a1;
  }
}

//----- (000000014016DAC0) ----------------------------------------------------
_BYTE *           sub_14016DAC0(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  __int64 input_value;
  int scaled_index;
  unsigned int shifted_bits;
  __int64 integer_difference;
  unsigned __int8 *buffer_cursor;
  __int64 remaining_count;
  _BYTE *running_total;
  int loaded_word;
  int cached_scaled_index;
  int table_value;

  input_value = a4;
  scaled_index = *a3 + 3 * *a2;
  if ( a4 == 1 )
  {
    shifted_bits = (unsigned int)(scaled_index + 2) >> 2;
    a1[1] = shifted_bits;
    *a1 = shifted_bits;
    return a1;
  }
  else
  {
    *a1 = (unsigned int)(scaled_index + 2) >> 2;
    if ( a4 > 1LL )
    {
      integer_difference = a2 - a3;
      buffer_cursor = a3 + 1;
      remaining_count = input_value - 1;
      running_total = a1 + 2;
      do
      {
        loaded_word = *buffer_cursor;
        running_total += 2;
        cached_scaled_index = scaled_index;
        table_value = (buffer_cursor++)[integer_difference];
        scaled_index = loaded_word + 3 * table_value;
        *(running_total - 3) = (unsigned int)(cached_scaled_index + scaled_index + 2 * (cached_scaled_index + 4)) >> 4;
        *(running_total - 2) = (unsigned int)(scaled_index + cached_scaled_index + 2 * (scaled_index + 4)) >> 4;
        --remaining_count;
      }
      while ( remaining_count );
    }
    a1[2 * (int)input_value - 1] = (unsigned int)(scaled_index + 2) >> 2;
    return a1;
  }
}

//----- (000000014016DB80) ----------------------------------------------------
__m128i *           sub_14016DB80(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  __int64 input_value;
  unsigned int scaled_index;
  unsigned int loaded_word;
  unsigned int shifted_bits;
  __m128i si128;
  __int64 *buffer_cursor;
  __int64 scaled_index_2;
  __m128i *buffer_cursor_2;
  unsigned int shifted_bits_2;
       __m128i *input_cursor;
  __int64 remaining_count;
  int loaded_word_2;
  __m128i loaded_vector;
  __m128i loaded_vector_2;
  __m128i reordered_vector;
  __m128i vector_result;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i vector_result_4;
  int scaled_index_3;
  signed int integer_sum;
  __int64 scaled_index_4;
  unsigned __int8 *buffer_cursor_3;
  __int64 remaining_count_2;
  __int8 *state_address;
  int loaded_word_3;
  int cached_scaled_index;
  int table_value;

  input_value = a4;
  scaled_index = 0;
  loaded_word = SR_VEC_PTR_LANES(128, a3, u8)[0] + 3 * *a2;
  if ( (_DWORD)input_value == 1 )
  {
    shifted_bits = (loaded_word + 2) >> 2;
    SR_VEC_PTR_LANES(128, a1, i8)[1] = shifted_bits;
    SR_VEC_PTR_LANES(128, a1, i8)[0] = shifted_bits;
    return a1;
  }
  else
  {
    if ( (int)input_value - 1 >= 0 && (((_DWORD)input_value - 1) & 0xFFFFFFF8) != 0 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791C0);
      buffer_cursor = &SR_VEC_PTR_LANES(128, a3, i64)[1];
      scaled_index_2 = a2 - (unsigned __int8 *)a3;
      buffer_cursor_2 = a1;
      shifted_bits_2 = (((((_DWORD)input_value - 1) & 0xFFFFFFF8) - 1) >> 3) + 1;
      input_cursor = a3;
      remaining_count = shifted_bits_2;
      scaled_index = 8 * shifted_bits_2;
      do
      {
        loaded_word_2 = *((unsigned __int8 *)buffer_cursor + scaled_index_2);
        ++buffer_cursor_2;
        loaded_vector = _mm_loadl_epi64((     __m128i *)((char *)input_cursor + scaled_index_2));
        ++buffer_cursor;
        loaded_vector_2 = _mm_loadl_epi64(input_cursor);
        input_cursor = (     __m128i *)((char *)input_cursor + 8);
        reordered_vector = _mm_unpacklo_epi8(loaded_vector, _mm_cvtsi32_si128((int)(0LL)));
        vector_result = _mm_add_epi16(_mm_sub_epi16(_mm_unpacklo_epi8(loaded_vector_2, _mm_cvtsi32_si128((int)(0LL))), reordered_vector), _mm_slli_epi16(reordered_vector, 2u));
        vector_result_2 = _mm_add_epi16(_mm_slli_epi16(vector_result, 2u), si128);
        vector_result_3 = _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(_mm_slli_si128(vector_result, 2), loaded_word, 0), vector_result), vector_result_2);
        vector_result_4 = _mm_add_epi16(
                _mm_sub_epi16(
                  _mm_insert_epi16(_mm_srli_si128(vector_result, 2), (unsigned int)*((unsigned __int8 *)buffer_cursor - 8) + 3 * loaded_word_2, 7),
                  vector_result),
                vector_result_2);
        buffer_cursor_2[-1] = _mm_packus_epi16(
                    _mm_srli_epi16(_mm_unpacklo_epi16(vector_result_3, vector_result_4), 4u),
                    _mm_srli_epi16(_mm_unpackhi_epi16(vector_result_3, vector_result_4), 4u));
        loaded_word = *((unsigned __int8 *)buffer_cursor - 9) + 3 * *((unsigned __int8 *)buffer_cursor + scaled_index_2 - 9);
        --remaining_count;
      }
      while ( remaining_count );
    }
    scaled_index_3 = SR_VEC_PTR_LANES(128, a3, u8)[scaled_index] + 3 * a2[scaled_index];
    integer_sum = scaled_index + 1;
    SR_VEC_PTR_LANES(128, a1, i8)[2 * scaled_index] = (scaled_index_3 + loaded_word + 8 + 2 * scaled_index_3) >> 4;
    if ( (int)(scaled_index + 1) < input_value )
    {
      scaled_index_4 = a2 - (unsigned __int8 *)a3;
      buffer_cursor_3 = &SR_VEC_PTR_LANES(128, a3, u8)[integer_sum];
      remaining_count_2 = input_value - integer_sum;
      state_address = &SR_VEC_PTR_LANES(128, a1, i8)[2 * integer_sum];
      do
      {
        loaded_word_3 = *buffer_cursor_3;
        state_address += 2;
        cached_scaled_index = scaled_index_3;
        table_value = (buffer_cursor_3++)[scaled_index_4];
        scaled_index_3 = loaded_word_3 + 3 * table_value;
        *(state_address - 3) = (unsigned int)(cached_scaled_index + scaled_index_3 + 2 * (cached_scaled_index + 4)) >> 4;
        *(state_address - 2) = (unsigned int)(scaled_index_3 + cached_scaled_index + 2 * (scaled_index_3 + 4)) >> 4;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    SR_VEC_PTR_LANES(128, a1, i8)[2 * (int)input_value - 1] = (unsigned int)(scaled_index_3 + 2) >> 2;
    return a1;
  }
}

//----- (000000014016DD80) ----------------------------------------------------
unsigned __int64            sub_14016DD80(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int record_byte_offset;
  __int64 integer_difference;
  unsigned __int64 integer_sum;
  __m128i si128;
  __int64 record_byte_offset_2;
  __m128i loaded_vector;
  __int64 integer_difference_2;
  __int64 integer_difference_3;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i vector_result;
  __m128i converted_vector_3;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i converted_vector_4;
  __m128i vector_result_4;
  __m128i vector_result_5;
  __m128i converted_vector_5;
  __m128i vector_result_6;
  __m128i vector_result_7;
  __int64 saved_record_byte_offset;
  unsigned __int8 *buffer_cursor;
  __int64 integer_difference_4;
  __int64 integer_difference_5;
  __int64 remaining_count;
  int table_value;
  int loaded_word;

  record_byte_offset = 0;
  if ( a4 >= 16 && dword_140302080 >= 2 )
  {
    integer_difference = a4 - 1LL;
    integer_sum = integer_difference + a1;
    if ( (a1 > integer_difference + a3 || integer_sum < a3) && (a1 > integer_difference + a2 || integer_sum < a2) )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F60);
      record_byte_offset_2 = a3 + 4;
      loaded_vector = _mm_load_si128((     __m128i *)&xmmword_140278F10);
      integer_difference_2 = a2 - a3;
      integer_difference_3 = a1 - a3;
      converted_vector = _mm_cvtsi32_si128(2u);
      do
      {
        converted_vector_2 = _mm_cvtsi32_si128(*(_DWORD *)(integer_difference_2 + record_byte_offset_2 - 4));
        record_byte_offset_2 += 16;
        record_byte_offset += 16;
        vector_result = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(converted_vector_2), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(record_byte_offset_2 - 20)))),
                      loaded_vector),
                    converted_vector),
                  216),
                216);
        converted_vector_3 = _mm_cvtsi32_si128(*(_DWORD *)(integer_difference_2 + record_byte_offset_2 - 16));
        vector_result_2 = _mm_and_si128(_mm_shuffle_epi32(vector_result, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(integer_difference_3 + record_byte_offset_2 - 20) = _mm_cvtsi128_si32(_mm_packus_epi16(vector_result_2, vector_result_2));
        vector_result_3 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(converted_vector_3), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(record_byte_offset_2 - 16)))),
                      loaded_vector),
                    converted_vector),
                  216),
                216);
        converted_vector_4 = _mm_cvtsi32_si128(*(_DWORD *)(integer_difference_2 + record_byte_offset_2 - 12));
        vector_result_4 = _mm_and_si128(_mm_shuffle_epi32(vector_result_3, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(integer_difference_3 + record_byte_offset_2 - 16) = _mm_cvtsi128_si32(_mm_packus_epi16(vector_result_4, vector_result_4));
        vector_result_5 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(converted_vector_4), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(record_byte_offset_2 - 12)))),
                      loaded_vector),
                    converted_vector),
                  216),
                216);
        converted_vector_5 = _mm_cvtsi32_si128(*(_DWORD *)(integer_difference_2 + record_byte_offset_2 - 8));
        vector_result_6 = _mm_and_si128(_mm_shuffle_epi32(vector_result_5, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(integer_difference_3 + record_byte_offset_2 - 12) = _mm_cvtsi128_si32(_mm_packus_epi16(vector_result_6, vector_result_6));
        vector_result_7 = _mm_and_si128(
                _mm_shuffle_epi32(
                  _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                      _mm_sra_epi32(
                        _mm_add_epi32(
                          _mm_add_epi32(
                            _mm_mullo_epi32(_mm_cvtepu8_epi32(converted_vector_5), si128),
                            _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(record_byte_offset_2 - 8)))),
                          loaded_vector),
                        converted_vector),
                      216),
                    216),
                  216),
                _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(integer_difference_3 + record_byte_offset_2 - 8) = _mm_cvtsi128_si32(_mm_packus_epi16(vector_result_7, vector_result_7));
      }
      while ( (__int64)(-4LL - a3 + record_byte_offset_2) < (__int64)(a4 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  saved_record_byte_offset = record_byte_offset;
  if ( record_byte_offset < (__int64)a4 )
  {
    buffer_cursor = (unsigned __int8 *)(record_byte_offset + a3);
    integer_difference_4 = a1 - a3;
    integer_difference_5 = a2 - a3;
    remaining_count = a4 - saved_record_byte_offset;
    do
    {
      table_value = buffer_cursor[integer_difference_5];
      loaded_word = *buffer_cursor++;
      buffer_cursor[integer_difference_4 - 1] = (unsigned int)(3 * table_value + loaded_word + 2) >> 2;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return a1;
}

//----- (000000014016DFD0) ----------------------------------------------------
__m128i *(           *           sub_14016DFD0(
        _QWORD *a1))(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  __m128i *(           *result)(__m128i *, unsigned __int8 *,      __m128i *, int);

  a1[2318] = (uintptr_t)sub_140163020;
  a1[2319] = (uintptr_t)sub_14015B140;
  a1[2320] = (uintptr_t)sub_14016DAC0;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (_RDX & 0x4000000) != 0 )
  {
    a1[2318] = (uintptr_t)sub_140163640;
    a1[2319] = (uintptr_t)sub_14015B270;
    a1[2320] = (uintptr_t)sub_14016DB80;
    return sub_14016DB80;
  }
  return result;
}

//----- (000000014016E050) ----------------------------------------------------
__int64            sub_14016E050(unsigned int a1, int a2, int a3)
{
  __int64 input_value;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;

  input_value = a3;
  if ( a2 >= 0 )
    shifted_bits = a1 >> a2;
  else
    shifted_bits = a1 << -(char)a2;
  if ( shifted_bits >= 0x100 )
    crt_assert((char *)L"v < 256", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x148Eu);
  shifted_bits_2 = shifted_bits >> (8 - input_value);
  if ( (unsigned int)input_value > 8 )
    crt_assert((char *)L"bits >= 0 && bits <= 8", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x1490u);
  return (unsigned int)((int)(shifted_bits_2 * dword_140301870[input_value]) >> dword_140301870[input_value + 10]);
}

//----- (000000014016E0F0) ----------------------------------------------------
__int64            sub_14016E0F0(__int64 a1, int a2)
{
  __int64 result;
  int loaded_word;
  __int64 integer_difference;
  __int64 loaded_word_2;

  if ( a2 )
  {
    if ( a2 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (loaded_word = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), loaded_word < a2) )
      {
        integer_difference = (unsigned int)(a2 - loaded_word);
        loaded_word_2 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        return (*(__int64 (           **)(__int64, __int64))(a1 + 24))(loaded_word_2, integer_difference);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += a2;
        return a2;
      }
    }
    else
    {
      result = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = result;
    }
  }
  return result;
}

//----- (000000014016E150)
__int64 sub_14016E150(void) { return sr_client_cpu_sse2_probe(); }

//----- (000000014016E170) ----------------------------------------------------
__int64            sub_14016E170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  stbi_refill_buffer(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

//----- (000000014016E1E0) ----------------------------------------------------
__int64            sub_14016E1E0(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_OWORD *)(a1 + 16) = *(_OWORD *)&off_140301820;
  *(_QWORD *)(a1 + 32) = (uint64)(uintptr_t)(off_140301830);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  stbi_refill_buffer(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

//----- (000000014016E2A0) ----------------------------------------------------
__int64            sub_14016E2A0(unsigned __int64 (           **a1)(__int64, __int64, int), char *a2)
{
  int masked_bits;
  __int64 (           *callback_function)(__int64, __int64, int);
  unsigned int selection_flag;
  __int64 (           *callback_function_2)(__int64, __int64, int);

  masked_bits = sub_14020B8E4((__int64 *)&callback_function_2, a2, "wb");
  callback_function = callback_function_2;
  selection_flag = 0;
  *a1 = (uintptr_t)sub_14016E2F0;
  if ( masked_bits )
    callback_function = nullptr;
  a1[1] = (unsigned __int64 (           *)(__int64, __int64, int))callback_function;
  LOBYTE(selection_flag) = callback_function != nullptr;
  return selection_flag;
}

//----- (000000014016E2F0) ----------------------------------------------------
unsigned __int64            sub_14016E2F0(__int64 a1, __int64 a2, int a3)
{
  return crt_fread(a2, 1, a3, a1);
}

//----- (000000014016E370) ----------------------------------------------------
__int64            sub_14016E370(__int64 a1, int *a2, int *a3, unsigned int *a4)
{
  unsigned __int8 *buffer_cursor;
  unsigned __int64 loaded_word;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer;
  char input_byte;
  char *loaded_record_pointer_2;
  int selection_flag;
  int loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int8 *buffer_cursor_2;
  unsigned __int8 loaded_word_5;
  int saved_buffer_cursor;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int64 packed_word_bits;
  __int64 selection_code;
  int loaded_word_6;
  __int64 loaded_word_7;
  int loaded_word_8;
  __int64 loaded_word_9;
  int call_result;
  int call_result_2;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int64 loaded_word_10;
  unsigned __int8 loaded_word_11;
  _BYTE *byte_cursor;
  int saved_loaded_word;
  int saved_loaded_word_2;
  int integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  unsigned int shifted_bits;

  buffer_cursor = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)buffer_cursor >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    stbi_refill_buffer(a1);
    buffer_cursor = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++buffer_cursor);
  }
  if ( (unsigned __int64)buffer_cursor < loaded_word )
  {
    loaded_word_2 = *buffer_cursor++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    loaded_word_2 = 0;
    goto LABEL_12;
  }
  stbi_refill_buffer(a1);
  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  loaded_word_2 = *loaded_record_pointer;
  buffer_cursor = loaded_record_pointer + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor);
  if ( loaded_word_2 > 1u )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
LABEL_12:
  if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      input_byte = *loaded_record_pointer_2;
      buffer_cursor = (unsigned __int8 *)(loaded_record_pointer_2 + 1);
    }
    else
    {
      input_byte = 0;
    }
  }
  else
  {
    input_byte = *buffer_cursor++;
  }
  selection_flag = 0;
  if ( loaded_word_2 == 1 )
  {
    if ( ((input_byte - 1) & 0xF7) == 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (loaded_word_3 = *(_DWORD *)(a1 + 200) - (_DWORD)buffer_cursor, loaded_word_3 < 4) )
      {
        loaded_word_4 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_4, (unsigned int)(4 - loaded_word_3));
        buffer_cursor_2 = *(unsigned __int8 **)(a1 + 192);
      }
      else
      {
        buffer_cursor_2 = buffer_cursor + 4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor_2);
      }
      if ( (unsigned __int64)buffer_cursor_2 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
          loaded_word_5 = *loaded_record_pointer_3;
          buffer_cursor_2 = loaded_record_pointer_3 + 1;
        }
        else
        {
          loaded_word_5 = 0;
        }
        saved_buffer_cursor = (int)buffer_cursor_2;
      }
      else
      {
        loaded_word_5 = *buffer_cursor_2;
        saved_buffer_cursor = (_DWORD)buffer_cursor_2++ + 1;
      }
      packed_word_bits = loaded_word_5;
      if ( loaded_word_5 <= 0x20u )
      {
        selection_code = 0x101018100LL;
        if ( _bittest64(&selection_code, packed_word_bits) )
        {
          if ( *(_QWORD *)(a1 + 16) && (loaded_word_6 = *(_DWORD *)(a1 + 200) - saved_buffer_cursor, loaded_word_6 < 4) )
          {
            loaded_word_7 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_7, (unsigned int)(4 - loaded_word_6));
          }
          else
          {
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor_2 + 4);
          }
          goto LABEL_42;
        }
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( ((input_byte - 2) & 0xF6) != 0 )
    goto LABEL_36;
  if ( *(_QWORD *)(a1 + 16) && (loaded_word_8 = *(_DWORD *)(a1 + 200) - (_DWORD)buffer_cursor, loaded_word_8 < 9) )
  {
    loaded_word_9 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_9, (unsigned int)(9 - loaded_word_8));
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor + 9);
  }
  LODWORD(packed_word_bits) = 0;
LABEL_42:
  call_result = sub_1401605B0(a1);
  if ( call_result < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  call_result_2 = sub_1401605B0(a1);
  if ( call_result_2 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
  loaded_word_10 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)loaded_record_pointer_4 >= loaded_word_10 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      saved_loaded_word = 0;
      saved_loaded_word_2 = 0;
      goto LABEL_52;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_10 = *(_QWORD *)(a1 + 200);
  }
  loaded_word_11 = *loaded_record_pointer_4;
  byte_cursor = loaded_record_pointer_4 + 1;
  saved_loaded_word = loaded_word_11;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor);
  saved_loaded_word_2 = loaded_word_11;
  if ( (unsigned __int64)byte_cursor < loaded_word_10 )
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor + 1);
    goto LABEL_54;
  }
LABEL_52:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    ++*(_QWORD *)(a1 + 192);
  }
LABEL_54:
  if ( !(_DWORD)packed_word_bits )
  {
    if ( input_byte == 3 || input_byte == 11 )
      selection_flag = 1;
    integer_difference = saved_loaded_word_2 - 8;
    if ( integer_difference )
    {
      integer_difference_2 = integer_difference - 7;
      if ( integer_difference_2 )
      {
        integer_difference_3 = integer_difference_2 - 1;
        if ( integer_difference_3 )
        {
          integer_difference_4 = integer_difference_3 - 8;
          if ( integer_difference_4 && integer_difference_4 != 8 )
            goto LABEL_72;
          LODWORD(packed_word_bits) = saved_loaded_word;
          goto LABEL_71;
        }
        if ( selection_flag )
        {
          shifted_bits = 2;
          goto LABEL_77;
        }
      }
LABEL_75:
      shifted_bits = 3;
      goto LABEL_77;
    }
LABEL_76:
    shifted_bits = 1;
    goto LABEL_77;
  }
  if ( ((saved_loaded_word - 8) & 0xFFFFFFF7) != 0 )
  {
LABEL_72:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( (_DWORD)packed_word_bits == 8 )
    goto LABEL_76;
  if ( (_DWORD)packed_word_bits == 15 || (_DWORD)packed_word_bits == 16 )
    goto LABEL_75;
  if ( (_DWORD)packed_word_bits != 24 && (_DWORD)packed_word_bits != 32 )
    goto LABEL_72;
LABEL_71:
  shifted_bits = (unsigned int)packed_word_bits >> 3;
  if ( !shifted_bits )
    goto LABEL_72;
LABEL_77:
  if ( a2 )
    *a2 = call_result;
  if ( a3 )
    *a3 = call_result_2;
  if ( a4 )
    *a4 = shifted_bits;
  return 1;
}

//----- (000000014016E7A0) ----------------------------------------------------
char *           sub_14016E7A0(__int64 a1, _DWORD *a2, int *a3, unsigned int *a4, int a5)
{
  unsigned __int8 *loaded_record_pointer;
  unsigned __int64 loaded_word;
  int running_total;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer_2;
  unsigned __int8 loaded_word_3;
  unsigned __int8 *record_pointer;
  int saved_loaded_word;
  unsigned __int8 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_3;
  int call_result;
  unsigned __int8 *loaded_record_pointer_4;
  unsigned __int8 loaded_word_5;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned int saved_loaded_word_2;
  int call_result_2;
  unsigned __int64 loaded_word_6;
  unsigned __int8 *loaded_record_pointer_6;
  unsigned __int8 loaded_word_7;
  unsigned __int8 *record_pointer_2;
  unsigned int saved_loaded_word_3;
  int saved_loaded_word_4;
  unsigned __int8 loaded_word_8;
  unsigned __int8 *loaded_record_pointer_7;
  int cached_callee_output_word;
  int selection_flag;
  unsigned int saved_loaded_word_5;
  int callee_output_word;
  __int32 integer_difference;
  int integer_difference_2;
  int integer_difference_3;
  int integer_difference_4;
  int integer_difference_5;
  unsigned int byte_count;
  __int64 client_static_tls_result;
       char *literal_text;
  unsigned __int32 table_value;
  unsigned int cached_loaded_word;
  int cached_selection_flag;
  int cached_callee_output_word_2;
  char *scaled_index;
  __int64 remaining_count;
  int scaled_index_2;
  __m128i *table_value_2;
  __m128i *table_value_3;
  __m128i *allocation_buffer;
  __m128i *allocated_buffer;
  __m128i *saved_allocated_buffer;
  __m128i *saved_allocated_buffer_2;
  __int64 remaining_count_2;
  __int64 masked_bits;
  __int64 saved_byte_count;
  __int64 remaining_count_3;
  int remaining_count_4;
  int shifted_bits;
  unsigned __int8 *loaded_record_pointer_8;
  unsigned __int8 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_9;
  unsigned __int8 *loaded_record_pointer_10;
  unsigned __int8 loaded_word_10;
  int saved_loaded_word_6;
  unsigned __int8 *loaded_record_pointer_11;
  unsigned __int8 loaded_word_11;
  unsigned __int16 call_result_3;
  __int64 element_index;
  __int8 *loaded_record_pointer_12;
  __int8 loaded_word_12;
  __int8 *loaded_record_pointer_13;
  __int64 element_index_2;
  __int8 *state_address;
  __int64 table_value_4;
  int scaled_index_3;
  int running_total_2;
  int remaining_amount;
  int remaining_count_5;
  __int64 integer_difference_6;
  char *text_cursor;
  char input_byte;
  char *running_total_3;
  __int64 remaining_count_6;
  char input_byte_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016E7A0[176];
#define call_result_4 (*(int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define cached_loaded_word_2 (*(unsigned int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define selection_flag_2 (*(int (*))(void *)(sr_frame_14016E7A0 + 12)) /* [rsp+34h] */
#define destination_buffer (*(__m128i (*))(void *)(sr_frame_14016E7A0 + 16)) /* [rsp+38h] */
#define saved_remaining_count (*(int (*))(void *)(sr_frame_14016E7A0 + 32)) /* [rsp+48h] */
#define callee_output_word_2 (*(int (*))(void *)(sr_frame_14016E7A0 + 36)) /* [rsp+4Ch] */
#define call_result_5 (*(int (*))(void *)(sr_frame_14016E7A0 + 40)) /* [rsp+50h] */
#define callee_output_word_3 (*(int (*))(void *)(sr_frame_14016E7A0 + 48)) /* [rsp+58h] */
#define shifted_bits_2 (*(int (*))(void *)(sr_frame_14016E7A0 + 52)) /* [rsp+5Ch] */
#define scaled_index_4 (*(int (*))(void *)(sr_frame_14016E7A0 + 56)) /* [rsp+60h] */
#define allocation_buffer_2 (*(void * (*))(void *)(sr_frame_14016E7A0 + 64)) /* [rsp+68h] */
#define saved_remaining_count_2 (*(__int64 (*))(void *)(sr_frame_14016E7A0 + 72)) /* [rsp+70h] */
#define saved_loaded_word_7 (*(int (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */
#define saved_loaded_word_8 (*(unsigned __int8 (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */

  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  running_total = 0;
  if ( (unsigned __int64)loaded_record_pointer < loaded_word )
  {
LABEL_4:
    loaded_word_2 = *loaded_record_pointer;
    loaded_record_pointer_2 = loaded_record_pointer + 1;
    saved_loaded_word_7 = loaded_word_2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_2);
    if ( (unsigned __int64)loaded_record_pointer_2 < loaded_word )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
    goto LABEL_4;
  }
  saved_loaded_word_7 = 0;
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
  {
    loaded_word_3 = 0;
    saved_loaded_word = 0;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_4 = *loaded_record_pointer_3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3 + 1);
    }
    else
    {
      loaded_word_4 = 0;
    }
    goto LABEL_15;
  }
  stbi_refill_buffer(a1);
  loaded_record_pointer_2 = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
LABEL_9:
  loaded_word_3 = *loaded_record_pointer_2;
  record_pointer = loaded_record_pointer_2 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer);
  saved_loaded_word = loaded_word_3;
  if ( (unsigned __int64)record_pointer >= loaded_word )
    goto LABEL_12;
  loaded_word_4 = *record_pointer;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer + 1);
LABEL_15:
  SR_VEC_LANES(128, destination_buffer, i32)[1] = loaded_word_4;
  call_result_4 = sub_1401605B0(a1);
  call_result = sub_1401605B0(a1);
  loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
  callee_output_word_3 = call_result;
  if ( (unsigned __int64)loaded_record_pointer_4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_5 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_5 = *loaded_record_pointer_5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_5 + 1);
    }
    else
    {
      loaded_word_5 = 0;
    }
  }
  else
  {
    loaded_word_5 = *loaded_record_pointer_4;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_4 + 1);
  }
  saved_loaded_word_2 = loaded_word_5;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  call_result_5 = sub_1401605B0(a1);
  call_result_2 = sub_1401605B0(a1);
  loaded_word_6 = *(_QWORD *)(a1 + 200);
  callee_output_word_2 = call_result_2;
  loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)loaded_record_pointer_6 >= loaded_word_6 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      saved_loaded_word_3 = 0;
      saved_loaded_word_4 = 0;
      goto LABEL_26;
    }
    stbi_refill_buffer(a1);
    loaded_record_pointer_6 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_6 = *(_QWORD *)(a1 + 200);
  }
  loaded_word_7 = *loaded_record_pointer_6;
  record_pointer_2 = loaded_record_pointer_6 + 1;
  saved_loaded_word_3 = loaded_word_7;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_2);
  saved_loaded_word_4 = loaded_word_7;
  if ( (unsigned __int64)record_pointer_2 < loaded_word_6 )
  {
    loaded_word_8 = *record_pointer_2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(record_pointer_2 + 1);
    goto LABEL_29;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    loaded_record_pointer_7 = *(unsigned __int8 **)(a1 + 192);
    loaded_word_8 = *loaded_record_pointer_7;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_7 + 1);
  }
  else
  {
    loaded_word_8 = 0;
  }
LABEL_29:
  cached_callee_output_word = callee_output_word_2;
  selection_flag = 1;
  saved_loaded_word_5 = loaded_word_8;
  allocation_buffer_2 = nullptr;
  SR_VEC_LANES(128, destination_buffer, i32)[0] = 0;
  saved_remaining_count = 0;
  if ( callee_output_word_2 > 0x1000000 || (callee_output_word = call_result_5, call_result_5 > 0x1000000) )
  {
LABEL_149:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "too large";
    goto LABEL_150;
  }
  selection_flag_2 = 0;
  integer_difference = SR_VEC_LANES(128, destination_buffer, i32)[1] - 8;
  if ( SR_VEC_LANES(128, destination_buffer, i32)[1] < 8u )
    integer_difference = SR_VEC_LANES(128, destination_buffer, i32)[1];
  shifted_bits_2 = 1 - ((saved_loaded_word_5 >> 5) & 1);
  if ( !saved_loaded_word )
  {
    integer_difference_2 = saved_loaded_word_4 - 8;
    if ( integer_difference_2 )
    {
      integer_difference_3 = integer_difference_2 - 7;
      if ( integer_difference_3 )
      {
        integer_difference_4 = integer_difference_3 - 1;
        if ( integer_difference_4 )
        {
          integer_difference_5 = integer_difference_4 - 8;
          if ( integer_difference_5 && integer_difference_5 != 8 )
            goto LABEL_47;
          saved_loaded_word_2 = saved_loaded_word_3;
          goto LABEL_46;
        }
        if ( integer_difference == 3 )
        {
          byte_count = 2;
          goto LABEL_52;
        }
      }
LABEL_50:
      byte_count = 3;
      selection_flag_2 = 1;
      goto LABEL_52;
    }
LABEL_51:
    byte_count = 1;
    goto LABEL_52;
  }
  if ( saved_loaded_word_2 == 8 )
    goto LABEL_51;
  if ( saved_loaded_word_2 == 15 || saved_loaded_word_2 == 16 )
    goto LABEL_50;
  if ( saved_loaded_word_2 != 24 && saved_loaded_word_2 != 32 )
    goto LABEL_47;
LABEL_46:
  byte_count = saved_loaded_word_2 >> 3;
  if ( !byte_count )
  {
LABEL_47:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "bad format";
LABEL_150:
    *(_QWORD *)(client_static_tls_result + 16) = (uint64)(uintptr_t)(literal_text);
    return nullptr;
  }
LABEL_52:
  *a2 = call_result_5;
  *a3 = cached_callee_output_word;
  if ( a4 )
    *a4 = byte_count;
  if ( callee_output_word < 0 || cached_callee_output_word < 0 || cached_callee_output_word && callee_output_word > 0x7FFFFFFF / cached_callee_output_word )
    goto LABEL_149;
  scaled_index_4 = callee_output_word * cached_callee_output_word;
  if ( callee_output_word * cached_callee_output_word < 0 || callee_output_word * cached_callee_output_word > (int)(0x7FFFFFFF / byte_count) )
    goto LABEL_149;
  if ( cached_callee_output_word && callee_output_word > 0x7FFFFFFF / cached_callee_output_word )
    goto LABEL_148;
  SR_VEC_LANES(128, destination_buffer, i64)[1] = sr_path_malloc((int)(callee_output_word * cached_callee_output_word * byte_count));
  if ( !SR_VEC_LANES(128, destination_buffer, i64)[1] )
    goto LABEL_148;
  sub_14016E0F0(a1, saved_loaded_word_7);
  if ( saved_loaded_word )
  {
    if ( !callee_output_word_3 )
    {
      allocation_buffer = (__m128i *)SR_VEC_LANES(128, destination_buffer, i64)[1];
LABEL_76:
      free(allocation_buffer);
      client_static_tls_result = sr_client_static_tls();
      literal_text = "bad palette";
      goto LABEL_150;
    }
    sub_14016E0F0(a1, call_result_4);
    if ( callee_output_word_3 >= 0 && callee_output_word_3 <= (int)(0x7FFFFFFF / byte_count) )
    {
      allocated_buffer = (__m128i *)sr_path_malloc((int)(callee_output_word_3 * byte_count));
      allocation_buffer_2 = allocated_buffer;
      saved_allocated_buffer = allocated_buffer;
      if ( allocated_buffer )
      {
        if ( selection_flag_2 )
        {
          saved_allocated_buffer_2 = allocated_buffer;
          if ( byte_count != 3 )
            crt_assert(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x1691u);
          remaining_count_2 = (unsigned int)callee_output_word_3;
          cached_loaded_word_2 = saved_loaded_word_3;
          saved_loaded_word_8 = loaded_word_3;
          do
          {
            sub_14016F120(a1, saved_allocated_buffer_2);
            saved_allocated_buffer_2 = (__m128i *)((char *)saved_allocated_buffer_2 + byte_count);
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          selection_flag = 1;
        }
        else
        {
          cached_loaded_word_2 = saved_loaded_word_3;
          saved_loaded_word_8 = loaded_word_3;
          if ( !sub_140160860(a1, allocated_buffer, callee_output_word_3 * byte_count) )
          {
            free((void *)SR_VEC_LANES(128, destination_buffer, i64)[1]);
            allocation_buffer = saved_allocated_buffer;
            goto LABEL_76;
          }
        }
        table_value = SR_VEC_LANES(128, destination_buffer, u32)[1];
        cached_loaded_word = saved_loaded_word_3;
LABEL_87:
        if ( scaled_index_4 <= 0 )
        {
LABEL_127:
          cached_callee_output_word_2 = callee_output_word_2;
          if ( shifted_bits_2 && callee_output_word_2 > 0 )
          {
            table_value_4 = SR_VEC_LANES(128, destination_buffer, i64)[1];
            scaled_index_3 = call_result_5 * byte_count;
            running_total_2 = 0;
            remaining_amount = call_result_5 * byte_count * (callee_output_word_2 - 1);
            do
            {
              remaining_count_5 = scaled_index_3;
              if ( scaled_index_3 > 0 )
              {
                integer_difference_6 = remaining_amount - (__int64)running_total_2;
                text_cursor = (char *)(running_total_2 + table_value_4);
                do
                {
                  --remaining_count_5;
                  input_byte = *text_cursor;
                  *text_cursor = text_cursor[integer_difference_6];
                  (text_cursor++)[integer_difference_6] = input_byte;
                }
                while ( remaining_count_5 > 0 );
              }
              running_total_2 += scaled_index_3;
              remaining_amount -= scaled_index_3;
              running_total += 2;
            }
            while ( running_total < cached_callee_output_word_2 );
          }
          if ( allocation_buffer_2 )
            free(allocation_buffer_2);
          scaled_index = (char *)SR_VEC_LANES(128, destination_buffer, i64)[1];
          goto LABEL_137;
        }
        masked_bits = SR_VEC_LANES(128, destination_buffer, i64)[1] - (_QWORD)&destination_buffer;
        saved_byte_count = byte_count;
        remaining_count_3 = (unsigned int)scaled_index_4;
        saved_remaining_count_2 = (unsigned int)scaled_index_4;
        remaining_count_4 = 0;
        shifted_bits = 0;
        while ( 1 )
        {
          if ( table_value < 8 )
            goto LABEL_101;
          if ( !remaining_count_4 )
            break;
          if ( !shifted_bits || selection_flag )
            goto LABEL_101;
LABEL_124:
          element_index_2 = 0;
          do
          {
            state_address = &SR_VEC_LANES(128, destination_buffer, i8)[element_index_2++];
            state_address[masked_bits] = *state_address;
          }
          while ( element_index_2 < byte_count );
          cached_loaded_word = cached_loaded_word_2;
          --remaining_count_4;
          table_value = SR_VEC_LANES(128, destination_buffer, u32)[1];
          masked_bits += saved_byte_count;
          --remaining_count_3;
          saved_remaining_count = remaining_count_4;
          saved_remaining_count_2 = remaining_count_3;
          if ( !remaining_count_3 )
            goto LABEL_127;
        }
        loaded_record_pointer_8 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)loaded_record_pointer_8 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            loaded_record_pointer_9 = *(unsigned __int8 **)(a1 + 192);
            loaded_word_9 = *loaded_record_pointer_9;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_9 + 1);
          }
          else
          {
            loaded_word_9 = 0;
          }
        }
        else
        {
          loaded_word_9 = *loaded_record_pointer_8;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_8 + 1);
        }
        shifted_bits = loaded_word_9 >> 7;
        saved_remaining_count = (loaded_word_9 & 0x7F) + 1;
LABEL_101:
        if ( saved_loaded_word_8 )
        {
          if ( cached_loaded_word == 8 )
          {
            loaded_record_pointer_10 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer_10 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                loaded_record_pointer_11 = *(unsigned __int8 **)(a1 + 192);
                loaded_word_11 = *loaded_record_pointer_11;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_11 + 1);
                saved_loaded_word_6 = loaded_word_11;
              }
              else
              {
                saved_loaded_word_6 = 0;
              }
            }
            else
            {
              loaded_word_10 = *loaded_record_pointer_10;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_10 + 1);
              saved_loaded_word_6 = loaded_word_10;
            }
          }
          else
          {
            saved_loaded_word_6 = sub_1401605B0(a1);
          }
          if ( saved_loaded_word_6 >= callee_output_word_3 )
            saved_loaded_word_6 = 0;
          crt_memcpy(&destination_buffer, (     __m128i *)((char *)allocation_buffer_2 + (int)(byte_count * saved_loaded_word_6)), byte_count);
        }
        else if ( selection_flag_2 )
        {
          if ( byte_count != 3 )
            crt_assert(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x16C2u);
          call_result_3 = sub_1401605B0(a1);
          SR_VEC_LANES(128, destination_buffer, i8)[0] = (char)-((call_result_3 >> 10) & 0x1F) / 31;
          SR_VEC_LANES(128, destination_buffer, i8)[1] = (char)-((call_result_3 >> 5) & 0x1F) / 31;
          SR_VEC_LANES(128, destination_buffer, i8)[2] = 255 * (call_result_3 & 0x1F) / 31;
        }
        else
        {
          element_index = 0;
          do
          {
            loaded_record_pointer_12 = *(__int8 **)(a1 + 192);
            if ( (unsigned __int64)loaded_record_pointer_12 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                loaded_record_pointer_13 = *(__int8 **)(a1 + 192);
                loaded_word_12 = *loaded_record_pointer_13;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_13 + 1);
              }
              else
              {
                loaded_word_12 = 0;
              }
            }
            else
            {
              loaded_word_12 = *loaded_record_pointer_12;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_12 + 1);
            }
            SR_VEC_LANES(128, destination_buffer, i8)[element_index++] = loaded_word_12;
          }
          while ( element_index < byte_count );
        }
        remaining_count_4 = saved_remaining_count;
        selection_flag = 0;
        remaining_count_3 = saved_remaining_count_2;
        saved_byte_count = byte_count;
        goto LABEL_124;
      }
    }
    free((void *)SR_VEC_LANES(128, destination_buffer, i64)[1]);
LABEL_148:
    client_static_tls_result = sr_client_static_tls();
    literal_text = "outofmem";
    goto LABEL_150;
  }
  table_value = SR_VEC_LANES(128, destination_buffer, u32)[1];
  cached_loaded_word = saved_loaded_word_3;
  cached_loaded_word_2 = saved_loaded_word_3;
  saved_loaded_word_8 = loaded_word_3;
  if ( SR_VEC_LANES(128, destination_buffer, i32)[1] >= 8u )
    goto LABEL_87;
  cached_selection_flag = selection_flag_2;
  cached_loaded_word_2 = saved_loaded_word_3;
  saved_loaded_word_8 = loaded_word_3;
  if ( selection_flag_2 )
    goto LABEL_87;
  cached_callee_output_word_2 = callee_output_word_2;
  scaled_index = (char *)SR_VEC_LANES(128, destination_buffer, i64)[1];
  if ( callee_output_word_2 <= 0 )
    goto LABEL_138;
  remaining_count = (unsigned int)callee_output_word_2;
  scaled_index_2 = byte_count * call_result_5;
  if ( shifted_bits_2 )
  {
    table_value_2 = (__m128i *)(SR_VEC_LANES(128, destination_buffer, i64)[1] + (int)(call_result_5 * byte_count * (callee_output_word_2 - 1)));
    do
    {
      sub_140160860(a1, table_value_2, scaled_index_2);
      table_value_2 = (__m128i *)((char *)table_value_2 - scaled_index_2);
      --remaining_count;
    }
    while ( remaining_count );
  }
  else
  {
    table_value_3 = (__m128i *)SR_VEC_LANES(128, destination_buffer, i64)[1];
    do
    {
      sub_140160860(a1, table_value_3, scaled_index_2);
      table_value_3 = (__m128i *)((char *)table_value_3 + scaled_index_2);
      --remaining_count;
    }
    while ( remaining_count );
  }
LABEL_137:
  cached_selection_flag = selection_flag_2;
LABEL_138:
  if ( byte_count >= 3 && !cached_selection_flag )
  {
    running_total_3 = scaled_index;
    if ( scaled_index_4 > 0 )
    {
      remaining_count_6 = (unsigned int)scaled_index_4;
      do
      {
        input_byte_2 = *running_total_3;
        *running_total_3 = running_total_3[2];
        running_total_3[2] = input_byte_2;
        running_total_3 += byte_count;
        --remaining_count_6;
      }
      while ( remaining_count_6 );
    }
  }
  if ( a5 )
  {
    if ( a5 != byte_count )
      return sub_14015D7E0(scaled_index, byte_count, a5, call_result_5, cached_callee_output_word_2);
  }
  return scaled_index;
}
#undef call_result_4
#undef cached_loaded_word_2
#undef selection_flag_2
#undef destination_buffer
#undef saved_remaining_count
#undef callee_output_word_2
#undef call_result_5
#undef callee_output_word_3
#undef shifted_bits_2
#undef scaled_index_4
#undef allocation_buffer_2
#undef saved_remaining_count_2
#undef saved_loaded_word_7
#undef saved_loaded_word_8

// 14016EE37: conditional instruction was optimized away because r14d.4!=0
// 14016EF06: conditional instruction was optimized away because r14d.4!=0
// 14016EF76: conditional instruction was optimized away because r14d.4!=0
// 14016ECB0: conditional instruction was optimized away because %var_70.4>=1

//----- (000000014016F120) ----------------------------------------------------
__int64            sub_14016F120(__int64 a1, _BYTE *a2)
{
  unsigned __int16 call_result;
  int masked_bits;

  call_result = sub_1401605B0(a1);
  *a2 = (char)-((call_result >> 10) & 0x1F) / 31;
  masked_bits = 255 * (call_result & 0x1F);
  a2[1] = (char)-((call_result >> 5) & 0x1F) / 31;
  a2[2] = masked_bits / 31;
  return (unsigned int)((unsigned __int64)(2216757315LL * masked_bits) >> 32) >> 31;
}

//----- (000000014016F1B0) ----------------------------------------------------
__int64            sub_14016F1B0(__int64 a1)
{
  unsigned int unused_written_slot;
  unsigned __int8 *buffer_cursor;
  unsigned __int64 loaded_word;
  unsigned __int8 loaded_word_2;
  unsigned __int8 *loaded_record_pointer;
  unsigned __int8 saved_loaded_word;
  char input_byte;
  char *loaded_record_pointer_2;
  int bit_mask;
  int loaded_word_3;
  __int64 loaded_word_4;
  unsigned __int8 *loaded_record_pointer_3;
  unsigned __int8 loaded_word_5;
  int integer_sum;
  _BYTE *byte_cursor;
  unsigned __int8 *loaded_record_pointer_4;
  int loaded_word_6;
  unsigned int integer_difference;
  __int64 loaded_word_7;
  _BYTE *byte_cursor_2;
  int loaded_word_8;
  __int64 loaded_word_9;
  unsigned __int8 *loaded_record_pointer_5;
  unsigned __int8 loaded_word_10;

  unused_written_slot = 0;
  buffer_cursor = *(unsigned __int8 **)(a1 + 192);
  loaded_word = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)buffer_cursor >= loaded_word )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    stbi_refill_buffer(a1);
    buffer_cursor = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    loaded_word = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++buffer_cursor);
  }
  if ( (unsigned __int64)buffer_cursor < loaded_word )
  {
    loaded_word_2 = *buffer_cursor++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    loaded_word_2 = 0;
    saved_loaded_word = 0;
    goto LABEL_12;
  }
  stbi_refill_buffer(a1);
  loaded_record_pointer = *(unsigned __int8 **)(a1 + 192);
  loaded_word_2 = *loaded_record_pointer;
  buffer_cursor = loaded_record_pointer + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(buffer_cursor);
  saved_loaded_word = loaded_word_2;
  if ( loaded_word_2 > 1u )
    goto LABEL_56;
LABEL_12:
  if ( (unsigned __int64)buffer_cursor >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      loaded_record_pointer_2 = *(char **)(a1 + 192);
      input_byte = *loaded_record_pointer_2;
      buffer_cursor = (unsigned __int8 *)(loaded_record_pointer_2 + 1);
    }
    else
    {
      input_byte = 0;
    }
  }
  else
  {
    input_byte = *buffer_cursor++;
  }
  bit_mask = 16875776;
  if ( saved_loaded_word != 1 )
  {
    if ( (((input_byte - 2) & 0xF6) != 0 || input_byte == 11) && input_byte != 11 )
      goto LABEL_56;
    if ( *(_QWORD *)(a1 + 16) )
    {
      loaded_word_8 = *(_DWORD *)(a1 + 200) - (_DWORD)buffer_cursor;
      if ( loaded_word_8 < 9 )
      {
        loaded_word_9 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_9, (unsigned int)(9 - loaded_word_8));
        goto LABEL_42;
      }
    }
    byte_cursor_2 = buffer_cursor + 9;
LABEL_41:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(byte_cursor_2);
LABEL_42:
    if ( (int)sub_1401605B0(a1) >= 1 && (int)sub_1401605B0(a1) >= 1 )
    {
      loaded_record_pointer_5 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)loaded_record_pointer_5 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          loaded_word_10 = **(_BYTE **)(a1 + 192);
        }
        else
        {
          loaded_word_10 = 0;
        }
      }
      else
      {
        loaded_word_10 = *loaded_record_pointer_5;
      }
      if ( loaded_word_2 != 1 )
        goto LABEL_54;
      if ( loaded_word_10 == 8 )
      {
LABEL_55:
        unused_written_slot = 1;
        goto LABEL_56;
      }
      if ( loaded_word_10 == 16 )
      {
LABEL_54:
        if ( loaded_word_10 <= 0x18u && _bittest(&bit_mask, loaded_word_10) || loaded_word_10 == 32 )
          goto LABEL_55;
      }
    }
    goto LABEL_56;
  }
  if ( ((input_byte - 1) & 0xF7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) && (loaded_word_3 = *(_DWORD *)(a1 + 200) - (_DWORD)buffer_cursor, loaded_word_3 < 4) )
    {
      loaded_word_4 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(loaded_word_4, (unsigned int)(4 - loaded_word_3));
      loaded_record_pointer_3 = *(unsigned __int8 **)(a1 + 192);
    }
    else
    {
      loaded_record_pointer_3 = buffer_cursor + 4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(loaded_record_pointer_3);
    }
    if ( (unsigned __int64)loaded_record_pointer_3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_56;
      stbi_refill_buffer(a1);
      loaded_record_pointer_4 = *(unsigned __int8 **)(a1 + 192);
      loaded_word_5 = *loaded_record_pointer_4;
      byte_cursor = loaded_record_pointer_4 + 1;
      integer_sum = (_DWORD)loaded_record_pointer_4 + 1;
    }
    else
    {
      loaded_word_5 = *loaded_record_pointer_3;
      integer_sum = (_DWORD)loaded_record_pointer_3 + 1;
      byte_cursor = loaded_record_pointer_3 + 1;
    }
    if ( loaded_word_5 <= 0x18u && _bittest(&bit_mask, loaded_word_5) || loaded_word_5 == 32 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        loaded_word_6 = *(_DWORD *)(a1 + 200) - integer_sum;
        if ( loaded_word_6 < 4 )
        {
          integer_difference = 4 - loaded_word_6;
          loaded_word_7 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
          (*(void (           **)(__int64, _QWORD, _BYTE *))(a1 + 24))(loaded_word_7, integer_difference, byte_cursor);
          goto LABEL_42;
        }
      }
      byte_cursor_2 = byte_cursor + 4;
      goto LABEL_41;
    }
  }
LABEL_56:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return unused_written_slot;
}

//----- (000000014016F470) ----------------------------------------------------
void sub_14016F470(__m128i *a1, int a2, int a3, int a4)
{
  __m128i *input_cursor;
  __int64 scaled_index;
  __m128i *packed_vector;
  __int64 remaining_count;
  __m128i *source_buffer;
  __m128i *source_buffer_2;
  unsigned __int64 remaining_amount;
  unsigned __int64 byte_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F470[2096];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016F470 + 0)) /* [rsp+0h] */
#define source_buffer_3 (*(__m128i (*)[128])(void *)(sr_frame_14016F470 + 32)) /* [rsp+20h] */
#define unused_frame_slot_2080 (*(__int64 (*))(void *)(sr_frame_14016F470 + 2080)) /* [rsp+820h] */

  input_cursor = a1;
  scaled_index = a2 * (__int64)a4;
  if ( a3 >> 1 > 0 )
  {
    packed_vector = (__m128i *)((char *)a1 + scaled_index * (a3 - 1));
    remaining_count = (unsigned int)(a3 >> 1);
    do
    {
      source_buffer = input_cursor;
      source_buffer_2 = packed_vector;
      remaining_amount = scaled_index;
      if ( scaled_index )
      {
        do
        {
          byte_count = 2048;
          if ( remaining_amount < 0x800 )
            byte_count = remaining_amount;
          crt_memcpy(source_buffer_3, source_buffer, byte_count);
          crt_memcpy(source_buffer, source_buffer_2, byte_count);
          crt_memcpy(source_buffer_2, source_buffer_3, byte_count);
          source_buffer = (__m128i *)((char *)source_buffer + byte_count);
          source_buffer_2 = (__m128i *)((char *)source_buffer_2 + byte_count);
          remaining_amount -= byte_count;
        }
        while ( remaining_amount );
      }
      input_cursor = (__m128i *)((char *)input_cursor + scaled_index);
      packed_vector = (__m128i *)((char *)packed_vector - scaled_index);
      --remaining_count;
    }
    while ( remaining_count );
  }
  return;
}
#undef unused_frame_slot_0
#undef source_buffer_3
#undef unused_frame_slot_2080

//----- (000000014016F590) ----------------------------------------------------
void            sub_14016F590(__m128i *a1, int a2, int a3, int a4, int a5)
{
  int scaled_index;
  __int64 scaled_index_2;
  __int64 remaining_count;
  __int64 cached_scaled_index;
  int shifted_bits;
  __int64 remaining_count_2;
  __m128i *input_cursor;
  __m128i *packed_vector;
  __m128i *source_buffer;
  __m128i *source_buffer_2;
  unsigned __int64 remaining_amount;
  unsigned __int64 byte_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F590[2128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016F590 + 0)) /* [rsp+0h] */
#define shifted_bits_2 (*(int (*))(void *)(sr_frame_14016F590 + 32)) /* [rsp+20h] */
#define input_value (*(int (*))(void *)(sr_frame_14016F590 + 36)) /* [rsp+24h] */
#define cached_scaled_index_2 (*(__int64 (*))(void *)(sr_frame_14016F590 + 40)) /* [rsp+28h] */
#define input_cursor_2 (*(__m128i * (*))(void *)(sr_frame_14016F590 + 48)) /* [rsp+30h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_14016F590 + 56)) /* [rsp+38h] */
#define source_buffer_3 (*(__m128i (*)[128])(void *)(sr_frame_14016F590 + 64)) /* [rsp+40h] */
#define unused_frame_slot_2112 (*(__int64 (*))(void *)(sr_frame_14016F590 + 2112)) /* [rsp+840h] */

  if ( a4 > 0 )
  {
    scaled_index = a5 * a2 * a3;
    scaled_index_2 = a5 * (__int64)a2;
    cached_scaled_index_2 = scaled_index;
    remaining_count = (unsigned int)a4;
    cached_scaled_index = scaled_index;
    shifted_bits = a3 >> 1;
    saved_remaining_count = remaining_count;
    input_value = a3;
    input_cursor_2 = a1;
    shifted_bits_2 = a3 >> 1;
    do
    {
      if ( shifted_bits > 0 )
      {
        remaining_count_2 = (unsigned int)shifted_bits;
        input_cursor = a1;
        packed_vector = (__m128i *)((char *)a1 + scaled_index_2 * (a3 - 1));
        do
        {
          source_buffer = input_cursor;
          source_buffer_2 = packed_vector;
          remaining_amount = scaled_index_2;
          if ( scaled_index_2 )
          {
            do
            {
              byte_count = 2048;
              if ( remaining_amount < 0x800 )
                byte_count = remaining_amount;
              crt_memcpy(source_buffer_3, source_buffer, byte_count);
              crt_memcpy(source_buffer, source_buffer_2, byte_count);
              crt_memcpy(source_buffer_2, source_buffer_3, byte_count);
              source_buffer = (__m128i *)((char *)source_buffer + byte_count);
              source_buffer_2 = (__m128i *)((char *)source_buffer_2 + byte_count);
              remaining_amount -= byte_count;
            }
            while ( remaining_amount );
          }
          input_cursor = (__m128i *)((char *)input_cursor + scaled_index_2);
          packed_vector = (__m128i *)((char *)packed_vector - scaled_index_2);
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        a1 = input_cursor_2;
        shifted_bits = shifted_bits_2;
        remaining_count = saved_remaining_count;
        a3 = input_value;
        cached_scaled_index = cached_scaled_index_2;
      }
      a1 = (__m128i *)((char *)a1 + cached_scaled_index);
      --remaining_count;
      input_cursor_2 = a1;
      saved_remaining_count = remaining_count;
    }
    while ( remaining_count );
  }
}
#undef unused_frame_slot_0
#undef shifted_bits_2
#undef input_value
#undef cached_scaled_index_2
#undef input_cursor_2
#undef saved_remaining_count
#undef source_buffer_3
#undef unused_frame_slot_2112

//----- (000000014016F730) ----------------------------------------------------
__int64            sub_14016F730(__int64 a1, unsigned __int8 *a2, int a3)
{
  int iteration_count;
  __int16 running_total;
  unsigned __int8 *buffer_cursor;
  __int64 remaining_count;
  __int64 loaded_word;
  int i;
  int element_index;
  int scaled_index;
  int j;
  int loaded_word_2;
  int integer_sum;
  int shifted_bits;
  __int64 loaded_word_3;
  int *state_address;
  int loaded_word_4;
  __int64 loaded_word_5;
  unsigned int shifted_bits_2;
  int k;
  __int64 cached_k;
  __int64 unused_local;
  unsigned int destination_buffer[17];
  int unused_local_2;
  _DWORD callee_output_word[16];
  __int64 unused_local_3;

  iteration_count = 0;

  running_total = 0;
  memset(destination_buffer, 0, sizeof(destination_buffer));
  crt_memset((void *)(uintptr_t)((_WORD *)a1), 0, 0x400u);
  if ( a3 > 0 )
  {
    buffer_cursor = a2;
    remaining_count = (unsigned int)a3;
    do
    {
      loaded_word = *buffer_cursor++;
      ++*((_DWORD *)destination_buffer + loaded_word);
      --remaining_count;
    }
    while ( remaining_count );
  }
  destination_buffer[0] = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *((_DWORD *)destination_buffer + (unsigned int)i) > 1 << i )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad sizes");
      return 0;
    }
  }
  element_index = 1;
  scaled_index = 0;
  for ( j = 15; j > 0; --j )
  {
    loaded_word_2 = *((_DWORD *)destination_buffer + element_index);
    callee_output_word[element_index] = scaled_index;
    *(_WORD *)(a1 + 2LL * element_index + 1024) = scaled_index;
    integer_sum = loaded_word_2 + scaled_index;
    *(_WORD *)(a1 + 2LL * element_index + 1124) = running_total;
    if ( loaded_word_2 && integer_sum - 1 >= 1 << element_index )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    shifted_bits = integer_sum << j;
    scaled_index = 2 * integer_sum;
    running_total += loaded_word_2;
    *(_DWORD *)(a1 + 4LL * element_index++ + 1056) = shifted_bits;
  }
  *(_DWORD *)(a1 + 1120) = 0x10000;
  if ( a3 > 0 )
  {
    do
    {
      loaded_word_3 = *a2;
      if ( *a2 )
      {
        state_address = &callee_output_word[loaded_word_3];
        loaded_word_4 = *state_address;
        loaded_word_5 = *state_address + *(unsigned __int16 *)(a1 + 2 * loaded_word_3 + 1124) - *(unsigned __int16 *)(a1 + 2 * loaded_word_3 + 1024);
        *(_BYTE *)(loaded_word_5 + a1 + 1156) = loaded_word_3;
        *(_WORD *)(a1 + 2 * loaded_word_5 + 1444) = iteration_count;
        if ( (unsigned int)loaded_word_3 <= 9 )
        {
          shifted_bits_2 = (16
               * ((4 * ((2 * (loaded_word_4 & 0x5555)) & 0x3333 | (loaded_word_4 >> 1) & 0x1111)) & 0xF0F
                | (((2 * (loaded_word_4 & 0x5555)) | (loaded_word_4 >> 1) & 0x5555u) >> 2) & 0x303))
              | (((4 * ((2 * (loaded_word_4 & 0x5555)) & 0x3333 | (loaded_word_4 >> 1) & 0x1111))
                | (((2 * (loaded_word_4 & 0x5555)) | (loaded_word_4 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4)
              & 0xF0F;
          for ( k = (((unsigned __int8)shifted_bits_2 << 8) | BYTE1(shifted_bits_2)) >> (16 - loaded_word_3);
                k < 512;
                *(_WORD *)(a1 + 2 * cached_k) = iteration_count | ((_WORD)loaded_word_3 << 9) )
          {
            cached_k = k;
            k += 1 << loaded_word_3;
          }
        }
        *state_address = loaded_word_4 + 1;
      }
      ++iteration_count;
      ++a2;
    }
    while ( iteration_count < a3 );
  }
  return 1;
}

//----- (000000014016F9E0) ----------------------------------------------------
__int64            sub_14016F9E0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool comparison_result;
  unsigned int loaded_word;
  unsigned int loaded_word_2;
  __int64 saved_loaded_word;
  __int64 loaded_word_3;

  comparison_result = *(_DWORD *)(a1 + 48) == 0;
  *(_QWORD *)(a1 + 24) = a2;
  if ( comparison_result )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("output buffer limit");
    return 0;
  }
  loaded_word = a2 - *(_DWORD *)(a1 + 32);
  loaded_word_2 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32);
  if ( ~loaded_word < a3 )
    goto LABEL_9;
  if ( loaded_word + a3 > loaded_word_2 )
  {
    while ( loaded_word_2 <= 0x7FFFFFFF )
    {
      loaded_word_2 *= 2;
      if ( loaded_word + a3 <= loaded_word_2 )
        goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  saved_loaded_word = loaded_word_2;
  loaded_word_3 = j__realloc_base_sr(*(_QWORD *)(a1 + 32), loaded_word_2);
  if ( !loaded_word_3 )
  {
LABEL_9:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  *(_QWORD *)(a1 + 32) = loaded_word_3;
  *(_QWORD *)(a1 + 24) = loaded_word_3 + loaded_word;
  *(_QWORD *)(a1 + 40) = saved_loaded_word + loaded_word_3;
  return 1;
}

//----- (000000014016FB20) ----------------------------------------------------
__int64            sub_14016FB20(__int64 a1, __int64 a2)
{
  __int64 input_value;
  unsigned int loaded_word;
  unsigned int masked_bits;

  input_value = a1;
  if ( *(int *)(a1 + 16) < 16 )
  {
    if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
      return 0xFFFFFFFFLL;
    sub_140160350(a1);
  }
  loaded_word = *(_DWORD *)(input_value + 20);
  masked_bits = *(unsigned __int16 *)(a2 + 2LL * (loaded_word & 0x1FF));
  if ( !*(_WORD *)(a2 + 2LL * (loaded_word & 0x1FF)) )
    return sub_14016FB90(input_value, a2);
  *(_DWORD *)(input_value + 16) -= masked_bits >> 9;
  *(_DWORD *)(input_value + 20) = loaded_word >> (masked_bits >> 9);
  return masked_bits & 0x1FF;
}

//----- (000000014016FB90) ----------------------------------------------------
__int64            sub_14016FB90(__int64 a1, __int64 a2)
{
  int loaded_word;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;
  int *buffer_cursor;
  int shifted_bits_3;
  int iteration_count;
  int shifted_bits_4;

  loaded_word = *(_DWORD *)(a1 + 20);
  shifted_bits = (2 * (loaded_word & 0x5555)) | (loaded_word >> 1) & 0x5555;
  shifted_bits_2 = (16 * ((4 * (shifted_bits & 0x3333)) & 0xF0F | (shifted_bits >> 2) & 0x303))
     | (((4 * (shifted_bits & 0x3333)) | (shifted_bits >> 2) & 0x3333) >> 4) & 0xF0F;
  buffer_cursor = (int *)(a2 + 1096);
  shifted_bits_3 = (shifted_bits_2 >> 8) | ((unsigned __int8)shifted_bits_2 << 8);
  iteration_count = 10;
  if ( shifted_bits_3 >= *(_DWORD *)(a2 + 1096) )
  {
    do
    {
      ++iteration_count;
      ++buffer_cursor;
    }
    while ( shifted_bits_3 >= *buffer_cursor );
    if ( iteration_count >= 16 )
      return 0xFFFFFFFFLL;
  }
  shifted_bits_4 = (shifted_bits_3 >> (16 - iteration_count)) - *(unsigned __int16 *)(a2 + 2LL * iteration_count + 1024) + *(unsigned __int16 *)(a2 + 2LL * iteration_count + 1124);
  if ( (unsigned int)shifted_bits_4 >= 0x120 || *(unsigned __int8 *)(shifted_bits_4 + a2 + 1156) != iteration_count )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 16) -= iteration_count;
  *(_DWORD *)(a1 + 20) = (unsigned int)loaded_word >> iteration_count;
  return *(unsigned __int16 *)(a2 + 2LL * shifted_bits_4 + 1444);
}

//----- (000000014016FC70) ----------------------------------------------------
__int64            sub_14016FC70(__int64 a1, int a2)
{
  int loaded_word;
  __int64 input_value;
  unsigned int loaded_word_2;

  loaded_word = *(_DWORD *)(a1 + 16);
  input_value = a1;
  if ( loaded_word < a2 )
  {
    sub_140160350(a1);
    loaded_word = *(_DWORD *)(input_value + 16);
  }
  loaded_word_2 = *(_DWORD *)(input_value + 20);
  *(_DWORD *)(input_value + 20) = loaded_word_2 >> a2;
  *(_DWORD *)(input_value + 16) = loaded_word - a2;
  return loaded_word_2 & ((1 << a2) - 1);
}

//----- (000000014016FD50) ----------------------------------------------------
__int64            sub_14016FD50(char *a1, char *a2, char *a3, unsigned int *a4)
{
  int masked_bits;
  FILE *file_handle;
  int ftell_sr_result;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FD50[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_14016FD50 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_14016FD50 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14016FD50 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(FILE * (*))(void *)(sr_frame_14016FD50 + 88)) /* [rsp+58h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14016FD50 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14016FD50 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_14016FD50 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14016FD50 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_14016FD50 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_14016FD50 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_14016FD50 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_14016FD50 + 256)) /* [rsp+100h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_14016FD50 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 272)) /* [rsp+110h] */

  masked_bits = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  file_handle = Stream;
  if ( masked_bits )
    file_handle = nullptr;
  Stream = file_handle;
  if ( file_handle )
  {
    ftell_sr_result = ftell_sr(file_handle);
    state_address_3 = &selection_flag;
    unused_written_slot = *(_OWORD *)&off_140301820;
    state_address_2 = &selection_flag;
    callback_function = off_140301830;
    unused_written_slot_2 = file_handle;
    unused_written_slot_4 = 128;
    unused_written_slot_3 = 1;
    running_total = 0;
    callback_result = off_140301820(file_handle, &selection_flag, 128);
    running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
    if ( callback_result )
    {
      state_address_2 = &selection_flag;
      state_address = &selection_flag + callback_result;
    }
    else
    {
      unused_written_slot_3 = 0;
      state_address_2 = &selection_flag;
      state_address = &callee_output_word;
      selection_flag = 0;
    }
    unused_written_slot_5 = state_address;
    unused_written_slot_6 = state_address;
    sub_140163E70((__int64)scratch_buffer, a2, a3, a4);
    sub_14020C4A8((__int64)file_handle, ftell_sr_result, 0);
    crt_fclose((__int64)file_handle);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef Stream
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_272

//----- (000000014016FED0) ----------------------------------------------------
__int64            sub_14016FED0(__int128 *a1, __int64 a2, char *a3, char *a4, unsigned int *a5)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FED0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_14016FED0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14016FED0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 72)) /* [rsp+48h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14016FED0 + 80)) /* [rsp+50h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_14016FED0 + 84)) /* [rsp+54h] */
#define selection_flag (*(char (*))(void *)(sr_frame_14016FED0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14016FED0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_14016FED0 + 216)) /* [rsp+D8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_14016FED0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_14016FED0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_14016FED0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_7 (*(char * (*))(void *)(sr_frame_14016FED0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 256)) /* [rsp+100h] */

  loaded_word = *a1;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  unused_written_slot_3 = a2;
  state_address_3 = &selection_flag;
  unused_written_slot = loaded_word;
  state_address_2 = &selection_flag;
  unused_written_slot_2 = loaded_word_2;
  unused_written_slot_5 = 128;
  unused_written_slot_4 = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( int64_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + int64_result;
  }
  else
  {
    unused_written_slot_4 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_6 = state_address;
  unused_written_slot_7 = state_address;
  return sub_140163E70((__int64)scratch_buffer, a3, a4, a5); /* 0x14016FFA1: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_6
#undef state_address_3
#undef unused_written_slot_7
#undef unused_frame_slot_256

//----- (000000014016FFD0) ----------------------------------------------------
__int64            sub_14016FFD0(FILE *a1, char *a2, char *a3, unsigned int *a4)
{
  int ftell_sr_result;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FFD0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_14016FFD0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_14016FFD0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(FILE * (*))(void *)(sr_frame_14016FFD0 + 72)) /* [rsp+48h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14016FFD0 + 80)) /* [rsp+50h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14016FFD0 + 84)) /* [rsp+54h] */
#define selection_flag (*(char (*))(void *)(sr_frame_14016FFD0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_14016FFD0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_14016FFD0 + 216)) /* [rsp+D8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_14016FFD0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_14016FFD0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_14016FFD0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_14016FFD0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 256)) /* [rsp+100h] */

  ftell_sr_result = ftell_sr(a1);
  state_address_3 = &selection_flag;
  unused_written_slot = *(_OWORD *)&off_140301820;
  state_address_2 = &selection_flag;
  callback_function = off_140301830;
  unused_written_slot_2 = a1;
  unused_written_slot_4 = 128;
  unused_written_slot_3 = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( callback_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + callback_result;
  }
  else
  {
    unused_written_slot_3 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_5 = state_address;
  unused_written_slot_6 = state_address;
  sub_140163E70((__int64)scratch_buffer, a2, a3, a4);
  sub_14020C4A8((__int64)a1, ftell_sr_result, 0);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_256

//----- (00000001401700F0) ----------------------------------------------------
__int64            sub_1401700F0(__int64 a1, int a2, char *a3, char *a4, unsigned int *a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401700F0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401700F0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1401700F0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1401700F0 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401700F0 + 216)) /* [rsp+D8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 232)) /* [rsp+E8h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 240)) /* [rsp+F0h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_1401700F0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 256)) /* [rsp+100h] */

  unused_written_slot_6 = a1;
  unused_written_slot_4 = a1;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  return sub_140163E70((__int64)scratch_buffer, a3, a4, a5); /* 0x14017015A: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_256

//----- (0000000140170180) ----------------------------------------------------
__int64            sub_140170180(char *a1)
{
  int masked_bits;
  FILE *file_handle;
  int ftell_sr_result;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170180[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140170180 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_140170180 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140170180 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140170180 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(FILE * (*))(void *)(sr_frame_140170180 + 88)) /* [rsp+58h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140170180 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140170180 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140170180 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140170180 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_140170180 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140170180 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_140170180 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140170180 + 256)) /* [rsp+100h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_140170180 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140170180 + 272)) /* [rsp+110h] */

  masked_bits = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  file_handle = Stream;
  if ( masked_bits )
    file_handle = nullptr;
  Stream = file_handle;
  if ( file_handle )
  {
    ftell_sr_result = ftell_sr(file_handle);
    state_address_3 = &selection_flag;
    unused_written_slot = *(_OWORD *)&off_140301820;
    state_address_2 = &selection_flag;
    callback_function = off_140301830;
    unused_written_slot_2 = file_handle;
    unused_written_slot_4 = 128;
    unused_written_slot_3 = 1;
    running_total = 0;
    callback_result = off_140301820(file_handle, &selection_flag, 128);
    running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
    if ( callback_result )
    {
      state_address_2 = &selection_flag;
      state_address = &selection_flag + callback_result;
    }
    else
    {
      unused_written_slot_3 = 0;
      state_address_2 = &selection_flag;
      state_address = &callee_output_word;
      selection_flag = 0;
    }
    unused_written_slot_5 = state_address;
    unused_written_slot_6 = state_address;
    sub_1401643B0((__int64)scratch_buffer);
    sub_14020C4A8((__int64)file_handle, ftell_sr_result, 0);
    crt_fclose((__int64)file_handle);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef Stream
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_272

//----- (00000001401702F0) ----------------------------------------------------
__int64            sub_1401702F0(__int128 *a1, __int64 a2)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401702F0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401702F0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401702F0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 64)) /* [rsp+40h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 72)) /* [rsp+48h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1401702F0 + 80)) /* [rsp+50h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_1401702F0 + 84)) /* [rsp+54h] */
#define selection_flag (*(char (*))(void *)(sr_frame_1401702F0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1401702F0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_1401702F0 + 216)) /* [rsp+D8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_1401702F0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_1401702F0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401702F0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_7 (*(char * (*))(void *)(sr_frame_1401702F0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 256)) /* [rsp+100h] */

  loaded_word = *a1;
  unused_written_slot_3 = a2;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  unused_written_slot = loaded_word;
  state_address_3 = &selection_flag;
  unused_written_slot_2 = loaded_word_2;
  state_address_2 = &selection_flag;
  unused_written_slot_5 = 128;
  unused_written_slot_4 = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( int64_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + int64_result;
  }
  else
  {
    unused_written_slot_4 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_6 = state_address;
  unused_written_slot_7 = state_address;
  return sub_1401643B0((__int64)scratch_buffer); /* 0x1401703A8: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_6
#undef state_address_3
#undef unused_written_slot_7
#undef unused_frame_slot_256

//----- (00000001401703D0) ----------------------------------------------------
__int64            sub_1401703D0(FILE *a1)
{
  int ftell_sr_result;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401703D0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401703D0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401703D0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(FILE * (*))(void *)(sr_frame_1401703D0 + 72)) /* [rsp+48h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401703D0 + 80)) /* [rsp+50h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1401703D0 + 84)) /* [rsp+54h] */
#define selection_flag (*(char (*))(void *)(sr_frame_1401703D0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1401703D0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_1401703D0 + 216)) /* [rsp+D8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_1401703D0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_1401703D0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401703D0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_1401703D0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 256)) /* [rsp+100h] */

  ftell_sr_result = ftell_sr(a1);
  state_address_3 = &selection_flag;
  unused_written_slot = *(_OWORD *)&off_140301820;
  state_address_2 = &selection_flag;
  callback_function = off_140301830;
  unused_written_slot_2 = a1;
  unused_written_slot_4 = 128;
  unused_written_slot_3 = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( callback_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + callback_result;
  }
  else
  {
    unused_written_slot_3 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_5 = state_address;
  unused_written_slot_6 = state_address;
  sub_1401643B0((__int64)scratch_buffer);
  sub_14020C4A8((__int64)a1, ftell_sr_result, 0);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_256

//----- (00000001401704E0) ----------------------------------------------------
__int64            sub_1401704E0(__int64 a1, int a2)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401704E0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401704E0 + 32)) /* [rsp+20h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1401704E0 + 48)) /* [rsp+30h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1401704E0 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401704E0 + 216)) /* [rsp+D8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 232)) /* [rsp+E8h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 240)) /* [rsp+F0h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_1401704E0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 256)) /* [rsp+100h] */

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_6 = a1;
  unused_written_slot_4 = a1;
  unused_written_slot_3 = 0;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  return sub_1401643B0((__int64)scratch_buffer); /* 0x140170526: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_256

//----- (0000000140170550) ----------------------------------------------------
__int64            sub_140170550(char *a1)
{
  int masked_bits;
  FILE *file_handle;
  unsigned int unused_written_slot;
  FILE *Stream;

  masked_bits = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  file_handle = Stream;
  if ( masked_bits )
    file_handle = nullptr;
  Stream = file_handle;
  if ( !file_handle )
    return 0;
  unused_written_slot = sub_1401707E0(file_handle);
  crt_fclose((__int64)file_handle);
  return unused_written_slot;
}

//----- (00000001401705B0) ----------------------------------------------------
__int64            sub_1401705B0(__int128 *a1, __int64 a2)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *text_cursor;
  char *state_address;
       char *literal_text;
  int int64_result_2;
  char *text_cursor_2;
       char *literal_text_2;
  char *state_address_2;
  int int64_result_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401705B0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 0)) /* [rsp+0h] */
#define saved_loaded_word (*(__int128 (*))(void *)(sr_frame_1401705B0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1401705B0 + 64)) /* [rsp+40h] */
#define input_value (*(__int64 (*))(void *)(sr_frame_1401705B0 + 72)) /* [rsp+48h] */
#define selection_flag (*(int (*))(void *)(sr_frame_1401705B0 + 80)) /* [rsp+50h] */
#define selection_code (*(unsigned int (*))(void *)(sr_frame_1401705B0 + 84)) /* [rsp+54h] */
#define selection_flag_2 (*(char (*))(void *)(sr_frame_1401705B0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(_BYTE (*)[127])(void *)(sr_frame_1401705B0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_1401705B0 + 216)) /* [rsp+D8h] */
#define saved_text_cursor (*(char * (*))(void *)(sr_frame_1401705B0 + 224)) /* [rsp+E0h] */
#define unused_written_slot_2 (*(char * (*))(void *)(sr_frame_1401705B0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401705B0 + 240)) /* [rsp+F0h] */
#define saved_state_address (*(char * (*))(void *)(sr_frame_1401705B0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 256)) /* [rsp+100h] */

  loaded_word = *a1;
  input_value = a2;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  saved_loaded_word = loaded_word;
  state_address_3 = &selection_flag_2;
  unused_written_slot = loaded_word_2;
  saved_text_cursor = &selection_flag_2;
  selection_code = 128;
  selection_flag = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag_2, 128);
  text_cursor = &selection_flag_2;
  running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
  saved_text_cursor = &selection_flag_2;
  if ( int64_result )
  {
    state_address = &callee_output_word[int64_result - 1];
  }
  else
  {
    selection_flag = 0;
    state_address = callee_output_word;
    selection_flag_2 = 0;
  }
  unused_written_slot_2 = state_address;
  literal_text = "#?RADIANCE\n";
  saved_state_address = state_address;
  while ( 1 )
  {
    if ( text_cursor >= state_address )
    {
      if ( selection_flag )
      {
        int64_result_2 = ((__int64 (           *)(__int64, char *, _QWORD))saved_loaded_word)(input_value, &selection_flag_2, selection_code);
        running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
        if ( int64_result_2 )
        {
          state_address = &callee_output_word[int64_result_2 - 1];
          text_cursor = callee_output_word;
          LOBYTE(int64_result_2) = selection_flag_2;
          unused_written_slot_2 = state_address;
          saved_text_cursor = callee_output_word;
        }
        else
        {
          state_address = callee_output_word;
          selection_flag = 0;
          text_cursor = callee_output_word;
          unused_written_slot_2 = callee_output_word;
          saved_text_cursor = callee_output_word;
          selection_flag_2 = 0;
        }
      }
      else
      {
        LOBYTE(int64_result_2) = 0;
      }
    }
    else
    {
      LOBYTE(int64_result_2) = *text_cursor++;
      saved_text_cursor = text_cursor;
    }
    if ( (unsigned __int8)int64_result_2 != *literal_text )
      break;
    if ( !*++literal_text )
      return 0; /* the function has no caller */
  }
  text_cursor_2 = state_address_3;
  literal_text_2 = "#?RGBE\n";
  state_address_2 = saved_state_address;
  saved_text_cursor = state_address_3;
  unused_written_slot_2 = saved_state_address;
  do
  {
    if ( text_cursor_2 >= state_address_2 )
    {
      if ( selection_flag )
      {
        int64_result_3 = ((__int64 (           *)(__int64, char *, _QWORD))saved_loaded_word)(input_value, &selection_flag_2, selection_code);
        running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
        if ( int64_result_3 )
        {
          state_address_2 = &callee_output_word[int64_result_3 - 1];
          text_cursor_2 = callee_output_word;
          LOBYTE(int64_result_3) = selection_flag_2;
          unused_written_slot_2 = state_address_2;
          saved_text_cursor = callee_output_word;
        }
        else
        {
          state_address_2 = callee_output_word;
          selection_flag = 0;
          text_cursor_2 = callee_output_word;
          unused_written_slot_2 = callee_output_word;
          saved_text_cursor = callee_output_word;
          selection_flag_2 = 0;
        }
      }
      else
      {
        LOBYTE(int64_result_3) = 0;
      }
    }
    else
    {
      LOBYTE(int64_result_3) = *text_cursor_2++;
      saved_text_cursor = text_cursor_2;
    }
    if ( (unsigned __int8)int64_result_3 != *literal_text_2 )
      break;
    ++literal_text_2;
  }
  while ( *literal_text_2 );
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef saved_loaded_word
#undef unused_written_slot
#undef input_value
#undef selection_flag
#undef selection_code
#undef selection_flag_2
#undef callee_output_word
#undef running_total
#undef saved_text_cursor
#undef unused_written_slot_2
#undef state_address_3
#undef saved_state_address
#undef unused_frame_slot_256

//----- (00000001401707E0) ----------------------------------------------------
__int64            sub_1401707E0(FILE *a1)
{
  int ftell_sr_result;
  int callback_result;
  char *text_cursor;
  char *state_address;
       char *literal_text;
  int int64_result;
  char *text_cursor_2;
       char *literal_text_2;
  char *state_address_2;
  int int64_result_2;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401707E0[272];
  int sr_matched = 1; /* edi: 0x140170836 mov edi, 1 */
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 0)) /* [rsp+0h] */
#define masked_bits (*(__int128 (*))(void *)(sr_frame_1401707E0 + 48)) /* [rsp+30h] */
#define input_cursor (*(FILE * (*))(void *)(sr_frame_1401707E0 + 72)) /* [rsp+48h] */
#define selection_flag (*(int (*))(void *)(sr_frame_1401707E0 + 80)) /* [rsp+50h] */
#define selection_code (*(unsigned int (*))(void *)(sr_frame_1401707E0 + 84)) /* [rsp+54h] */
#define selection_flag_2 (*(char (*))(void *)(sr_frame_1401707E0 + 88)) /* [rsp+58h] */
#define callee_output_word (*(_BYTE (*)[127])(void *)(sr_frame_1401707E0 + 89)) /* [rsp+59h] */
#define running_total (*(int (*))(void *)(sr_frame_1401707E0 + 216)) /* [rsp+D8h] */
#define saved_text_cursor (*(char * (*))(void *)(sr_frame_1401707E0 + 224)) /* [rsp+E0h] */
#define unused_written_slot (*(char * (*))(void *)(sr_frame_1401707E0 + 232)) /* [rsp+E8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401707E0 + 240)) /* [rsp+F0h] */
#define saved_state_address (*(char * (*))(void *)(sr_frame_1401707E0 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 256)) /* [rsp+100h] */

  ftell_sr_result = ftell_sr(a1);
  state_address_3 = &selection_flag_2;
  masked_bits = *(_OWORD *)&off_140301820;
  saved_text_cursor = &selection_flag_2;
  callback_function = off_140301830;
  input_cursor = a1;
  selection_code = 128;
  selection_flag = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag_2, 128);
  text_cursor = &selection_flag_2;
  running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
  saved_text_cursor = &selection_flag_2;
  if ( callback_result )
  {
    state_address = &callee_output_word[callback_result - 1];
  }
  else
  {
    selection_flag = 0;
    state_address = callee_output_word;
    selection_flag_2 = 0;
  }
  unused_written_slot = state_address;
  literal_text = "#?RADIANCE\n";
  saved_state_address = state_address;
  while ( 1 )
  {
    if ( text_cursor >= state_address )
    {
      if ( selection_flag )
      {
        int64_result = ((__int64 (           *)(FILE *, char *, _QWORD))masked_bits)(input_cursor, &selection_flag_2, selection_code);
        running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
        if ( int64_result )
        {
          state_address = &callee_output_word[int64_result - 1];
          text_cursor = callee_output_word;
          LOBYTE(int64_result) = selection_flag_2;
          unused_written_slot = state_address;
          saved_text_cursor = callee_output_word;
        }
        else
        {
          state_address = callee_output_word;
          selection_flag = 0;
          text_cursor = callee_output_word;
          unused_written_slot = callee_output_word;
          saved_text_cursor = callee_output_word;
          selection_flag_2 = 0;
        }
      }
      else
      {
        LOBYTE(int64_result) = 0;
      }
    }
    else
    {
      LOBYTE(int64_result) = *text_cursor++;
      saved_text_cursor = text_cursor;
    }
    if ( (unsigned __int8)int64_result != *literal_text )
      break;
    if ( !*++literal_text )
    {
      saved_text_cursor = state_address_3;
      unused_written_slot = saved_state_address;
      goto LABEL_26;
    }
  }
  text_cursor_2 = state_address_3;
  literal_text_2 = "#?RGBE\n";
  state_address_2 = saved_state_address;
  saved_text_cursor = state_address_3;
  unused_written_slot = saved_state_address;
  do
  {
    if ( text_cursor_2 >= state_address_2 )
    {
      if ( selection_flag )
      {
        int64_result_2 = ((__int64 (           *)(FILE *, char *, _QWORD))masked_bits)(input_cursor, &selection_flag_2, selection_code);
        running_total += (_DWORD)saved_text_cursor - (_DWORD)state_address_3;
        if ( int64_result_2 )
        {
          state_address_2 = &callee_output_word[int64_result_2 - 1];
          text_cursor_2 = callee_output_word;
          LOBYTE(int64_result_2) = selection_flag_2;
          unused_written_slot = state_address_2;
          saved_text_cursor = callee_output_word;
        }
        else
        {
          state_address_2 = callee_output_word;
          selection_flag = 0;
          text_cursor_2 = callee_output_word;
          unused_written_slot = callee_output_word;
          saved_text_cursor = callee_output_word;
          selection_flag_2 = 0;
        }
      }
      else
      {
        LOBYTE(int64_result_2) = 0;
      }
    }
    else
    {
      LOBYTE(int64_result_2) = *text_cursor_2++;
      saved_text_cursor = text_cursor_2;
    }
    if ( (unsigned __int8)int64_result_2 != *literal_text_2 )
    {
      sr_matched = 0; /* 0x1401709FE: mov edi, r15d */
      break;
    }
    ++literal_text_2;
  }
  while ( *literal_text_2 );
  saved_text_cursor = state_address_3;
  unused_written_slot = saved_state_address;
LABEL_26:
  sub_14020C4A8((__int64)a1, ftell_sr_result, 0);
  return sr_matched; /* 0x140170A1F: mov eax, edi */
}
#undef unused_frame_slot_0
#undef masked_bits
#undef input_cursor
#undef selection_flag
#undef selection_code
#undef selection_flag_2
#undef callee_output_word
#undef running_total
#undef saved_text_cursor
#undef unused_written_slot
#undef state_address_3
#undef saved_state_address
#undef unused_frame_slot_256

//----- (0000000140170A50) ----------------------------------------------------
__int64            sub_140170A50(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *state_address;
       char *literal_text;
  unsigned __int8 *buffer_cursor;
  unsigned __int8 loaded_word;
  unsigned __int8 *buffer_cursor_2;
       char *literal_text_2;
  unsigned __int8 loaded_word_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170A50[272];
#define scratch_buffer (*(_QWORD (*)[9])(void *)(sr_frame_140170A50 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140170A50 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140170A50 + 216)) /* [rsp+D8h] */
#define unused_written_slot_3 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 224)) /* [rsp+E0h] */
#define unused_written_slot_4 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 232)) /* [rsp+E8h] */
#define input_cursor (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 240)) /* [rsp+F0h] */
#define saved_state_address (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 248)) /* [rsp+F8h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_140170A50 + 256)) /* [rsp+100h] */

  unused_written_slot = 0;
  state_address = &a1[a2];
  scratch_buffer[6] = 0;
  saved_state_address = state_address;
  literal_text = "#?RADIANCE\n";
  unused_written_slot_4 = state_address;
  buffer_cursor = a1;
  unused_written_slot_2 = 0;
  input_cursor = a1;
  unused_written_slot_3 = a1;
  while ( 1 )
  {
    if ( buffer_cursor >= state_address )
    {
      loaded_word = 0;
    }
    else
    {
      loaded_word = *buffer_cursor++;
      unused_written_slot_3 = buffer_cursor;
    }
    if ( loaded_word != *literal_text )
      break;
    if ( !*++literal_text )
      return 0; /* the function has no caller */
  }
  buffer_cursor_2 = input_cursor;
  literal_text_2 = "#?RGBE\n";
  unused_written_slot_3 = input_cursor;
  unused_written_slot_4 = saved_state_address;
  do
  {
    if ( buffer_cursor_2 >= saved_state_address )
    {
      loaded_word_2 = 0;
    }
    else
    {
      loaded_word_2 = *buffer_cursor_2++;
      unused_written_slot_3 = buffer_cursor_2;
    }
    if ( loaded_word_2 != *literal_text_2 )
      break;
    ++literal_text_2;
  }
  while ( *literal_text_2 );
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef input_cursor
#undef saved_state_address
#undef unused_frame_slot_256

//----- (0000000140170C30) ----------------------------------------------------
__int64 sub_140170C30(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 file;
  __int64 decoded;
  sr_image_reader reader;
  int opened = sub_14020B8E4(&file, a1, "rb");
  if (opened) file=0;
  if (!file) {
    *(_QWORD *)(sr_client_static_tls()+16LL) =
      (uint64)(uintptr_t)("can't fopen");
    return 0;
  }
  reader.read=(int (*)(void *,char *,int))sub_1400012A0;
  reader.skip=(void (*)(void *,int))sub_1400012C0;
  reader.eof=(int (*)(void *))sub_140001300;
  reader.user=(void *)(uintptr_t)file;
  reader.capacity=128;
  reader.active=1;
  reader.consumed=0;
  reader.current=reader.original=reader.buffer;
  int count=reader.read(reader.user,reader.buffer,128);
  if (!count) {
    reader.active=0;
    reader.buffer[0]=0;
    count=1;
  }
  reader.end=reader.original_end=reader.buffer+count;
  decoded=(__int64)(uintptr_t)sub_140166160((__int64)(uintptr_t)&reader,a2,a3,a4,a5);
  if (decoded)
    sub_14020C4A8(file,(unsigned int)((uintptr_t)reader.current-(uintptr_t)reader.end),1u);
  crt_fclose(file);
  return decoded;
}

//----- (0000000140170DC0) ----------------------------------------------------
__int64            sub_140170DC0(char *a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int call_result;
  __int64 file_handle;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170DC0[304];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 0)) /* [rsp+0h] */
#define saved_file_handle (*(__int64 (*))(void *)(sr_frame_140170DC0 + 48)) /* [rsp+30h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140170DC0 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140170DC0 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 104)) /* [rsp+68h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140170DC0 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140170DC0 + 116)) /* [rsp+74h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140170DC0 + 120)) /* [rsp+78h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140170DC0 + 121)) /* [rsp+79h] */
#define running_total (*(int (*))(void *)(sr_frame_140170DC0 + 248)) /* [rsp+F8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140170DC0 + 256)) /* [rsp+100h] */
#define saved_state_address (*(char * (*))(void *)(sr_frame_140170DC0 + 264)) /* [rsp+108h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140170DC0 + 272)) /* [rsp+110h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_140170DC0 + 280)) /* [rsp+118h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 288)) /* [rsp+120h] */

  call_result = sub_14020B8E4(&saved_file_handle, a1, "rb");
  file_handle = saved_file_handle;
  if ( call_result )
    file_handle = 0;
  saved_file_handle = file_handle;
  if ( file_handle )
  {
    state_address_3 = &selection_flag;
    unused_written_slot = *(_OWORD *)&off_140301820;
    state_address_2 = &selection_flag;
    callback_function = off_140301830;
    unused_written_slot_2 = file_handle;
    unused_written_slot_4 = 128;
    unused_written_slot_3 = 1;
    running_total = 0;
    callback_result = off_140301820(file_handle, &selection_flag, 128);
    running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
    if ( callback_result )
    {
      state_address_2 = &selection_flag;
      state_address = &selection_flag + callback_result;
    }
    else
    {
      unused_written_slot_3 = 0;
      state_address_2 = &selection_flag;
      state_address = &callee_output_word;
      selection_flag = 0;
    }
    saved_state_address = state_address;
    unused_written_slot_5 = state_address;
    if ( sub_140165FD0((__int64)scratch_buffer, a2, a3, a4, a5) )
      sub_14020C4A8(file_handle, (_DWORD)state_address_2 - (_DWORD)saved_state_address, 1u);
    crt_fclose(file_handle);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef saved_file_handle
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef saved_state_address
#undef state_address_3
#undef unused_written_slot_5
#undef unused_frame_slot_288

//----- (0000000140170F50) ----------------------------------------------------
__int64            sub_140170F50(__int128 *a1, __int64 a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170F50[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140170F50 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140170F50 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140170F50 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140170F50 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_140170F50 + 88)) /* [rsp+58h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140170F50 + 96)) /* [rsp+60h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_140170F50 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140170F50 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140170F50 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_140170F50 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140170F50 + 240)) /* [rsp+F0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_140170F50 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140170F50 + 256)) /* [rsp+100h] */
#define unused_written_slot_7 (*(char * (*))(void *)(sr_frame_140170F50 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140170F50 + 272)) /* [rsp+110h] */

  loaded_word = *a1;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  state_address_3 = &selection_flag;
  unused_written_slot_3 = a2;
  state_address_2 = &selection_flag;
  unused_written_slot = loaded_word;
  unused_written_slot_2 = loaded_word_2;
  unused_written_slot_5 = 128;
  unused_written_slot_4 = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( int64_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + int64_result;
  }
  else
  {
    unused_written_slot_4 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_6 = state_address;
  unused_written_slot_7 = state_address;
  return sub_140165FD0((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x140171030: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_6
#undef state_address_3
#undef unused_written_slot_7
#undef unused_frame_slot_272

//----- (0000000140171060) ----------------------------------------------------
__int64            sub_140171060(__int64 a1, int a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171060[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171060 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171060 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_140171060 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140171060 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171060 + 232)) /* [rsp+E8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_140171060 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171060 + 248)) /* [rsp+F8h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140171060 + 256)) /* [rsp+100h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_140171060 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140171060 + 272)) /* [rsp+110h] */

  unused_written_slot_6 = a1;
  unused_written_slot_4 = a1;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  return sub_140165FD0((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x1401710D9: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_272

//----- (0000000140171100) ----------------------------------------------------
__int64            sub_140171100(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171100[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171100 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171100 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171100 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140171100 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_140171100 + 88)) /* [rsp+58h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140171100 + 96)) /* [rsp+60h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_140171100 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140171100 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140171100 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_140171100 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140171100 + 240)) /* [rsp+F0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_140171100 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140171100 + 256)) /* [rsp+100h] */
#define unused_written_slot_7 (*(char * (*))(void *)(sr_frame_140171100 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140171100 + 272)) /* [rsp+110h] */

  loaded_word = *a1;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  state_address_3 = &selection_flag;
  unused_written_slot_3 = a2;
  state_address_2 = &selection_flag;
  unused_written_slot = loaded_word;
  unused_written_slot_2 = loaded_word_2;
  unused_written_slot_5 = 128;
  unused_written_slot_4 = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( int64_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + int64_result;
  }
  else
  {
    unused_written_slot_4 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_6 = state_address;
  unused_written_slot_7 = state_address;
  return sub_140166160((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x1401711E0: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_6
#undef state_address_3
#undef unused_written_slot_7
#undef unused_frame_slot_272

//----- (0000000140171210) ----------------------------------------------------
__int64            sub_140171210(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171210[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171210 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171210 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171210 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140171210 + 88)) /* [rsp+58h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171210 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140171210 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140171210 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140171210 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_140171210 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140171210 + 240)) /* [rsp+F0h] */
#define saved_state_address (*(char * (*))(void *)(sr_frame_140171210 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140171210 + 256)) /* [rsp+100h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_140171210 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140171210 + 272)) /* [rsp+110h] */

  state_address_3 = &selection_flag;
  unused_written_slot = *(_OWORD *)&off_140301820;
  state_address_2 = &selection_flag;
  callback_function = off_140301830;
  unused_written_slot_2 = a1;
  unused_written_slot_4 = 128;
  unused_written_slot_3 = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( callback_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + callback_result;
  }
  else
  {
    unused_written_slot_3 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  saved_state_address = state_address;
  unused_written_slot_5 = state_address;
  if ( sub_140166160((__int64)scratch_buffer, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)state_address_2 - (_DWORD)saved_state_address, 1u);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef saved_state_address
#undef state_address_3
#undef unused_written_slot_5
#undef unused_frame_slot_272

//----- (0000000140171340) ----------------------------------------------------
__int64            sub_140171340(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171340[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171340 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171340 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171340 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140171340 + 88)) /* [rsp+58h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171340 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140171340 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140171340 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140171340 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_140171340 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140171340 + 240)) /* [rsp+F0h] */
#define saved_state_address (*(char * (*))(void *)(sr_frame_140171340 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140171340 + 256)) /* [rsp+100h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_140171340 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140171340 + 272)) /* [rsp+110h] */

  state_address_3 = &selection_flag;
  unused_written_slot = *(_OWORD *)&off_140301820;
  state_address_2 = &selection_flag;
  callback_function = off_140301830;
  unused_written_slot_2 = a1;
  unused_written_slot_4 = 128;
  unused_written_slot_3 = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( callback_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + callback_result;
  }
  else
  {
    unused_written_slot_3 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  saved_state_address = state_address;
  unused_written_slot_5 = state_address;
  if ( sub_140165FD0((__int64)scratch_buffer, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)state_address_2 - (_DWORD)saved_state_address, 1u);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef saved_state_address
#undef state_address_3
#undef unused_written_slot_5
#undef unused_frame_slot_272

//----- (0000000140171470) ----------------------------------------------------
__int64            sub_140171470(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171470[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171470 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171470 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_140171470 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140171470 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171470 + 232)) /* [rsp+E8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_140171470 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171470 + 248)) /* [rsp+F8h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140171470 + 256)) /* [rsp+100h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_140171470 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_140171470 + 272)) /* [rsp+110h] */

  unused_written_slot_6 = a1;
  unused_written_slot_4 = a1;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  return sub_140166160((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x1401714E9: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_272

//----- (0000000140171510) ----------------------------------------------------
__int64            sub_140171510(
        __int64 a1,
        int a2,
        __int64 *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        unsigned int a8)
{
  __int64 call_result;
  __int64 client_static_tls_result;
  unsigned int state_word;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  __m128i *packed_vector;
  int loaded_word_4;
  int scaled_index;
  __int64 remaining_count;
  __int64 cached_scaled_index;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171510[304];
#define scratch_buffer (*(_QWORD (*)[6])(void *)(sr_frame_140171510 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(unsigned int (*))(void *)(sr_frame_140171510 + 48)) /* [rsp+30h] */
#define packed_vector_2 (*(__m128i (*))(void *)(sr_frame_140171510 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140171510 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171510 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140171510 + 248)) /* [rsp+F8h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171510 + 256)) /* [rsp+100h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140171510 + 264)) /* [rsp+108h] */
#define unused_written_slot_7 (*(__int64 (*))(void *)(sr_frame_140171510 + 272)) /* [rsp+110h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_140171510 + 280)) /* [rsp+118h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_140171510 + 288)) /* [rsp+120h] */

  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot = a8;
  unused_written_slot_7 = a1;
  unused_written_slot_5 = a1;
  unused_written_slot_4 = 0;
  scratch_buffer[5] = (uint64)(uintptr_t)(a7);
  integer_sum = a2 + a1;
  unused_written_slot_6 = integer_sum;
  scratch_buffer[4] = (uint64)(uintptr_t)(a6);
  call_result = sub_1401663E0(&packed_vector_2, a3, a4, a5);
  client_static_tls_result = sr_client_static_tls();
  if ( *(_DWORD *)(client_static_tls_result + 8) )
    state_word = *(_DWORD *)(client_static_tls_result + 12);
  else
    state_word = g_144980DAC;
  if ( state_word )
  {
    loaded_word = *a4;
    loaded_word_2 = *a4;
    loaded_word_3 = *a7;
    packed_vector = (__m128i *)call_result;
    loaded_word_4 = *a5;
    scaled_index = *a7 * *a5 * loaded_word_2;
    if ( (int)*a6 > 0 )
    {
      remaining_count = *a6;
      cached_scaled_index = scaled_index;
      do
      {
        sub_14016F470(packed_vector, loaded_word, loaded_word_4, loaded_word_3);
        packed_vector = (__m128i *)((char *)packed_vector + cached_scaled_index);
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef unused_written_slot
#undef packed_vector_2
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef integer_sum
#undef unused_frame_slot_288

//----- (0000000140171670) ----------------------------------------------------
__int64            sub_140171670(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 file_handle;
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171670[304];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171670 + 0)) /* [rsp+0h] */
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_140171670 + 48)) /* [rsp+30h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_140171670 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171670 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_140171670 + 104)) /* [rsp+68h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_140171670 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_140171670 + 116)) /* [rsp+74h] */
#define selection_flag (*(char (*))(void *)(sr_frame_140171670 + 120)) /* [rsp+78h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_140171670 + 121)) /* [rsp+79h] */
#define running_total (*(int (*))(void *)(sr_frame_140171670 + 248)) /* [rsp+F8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_140171670 + 256)) /* [rsp+100h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_140171670 + 264)) /* [rsp+108h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_140171670 + 272)) /* [rsp+110h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_140171670 + 280)) /* [rsp+118h] */
#define unused_frame_slot_288 (*(__int64 (*))(void *)(sr_frame_140171670 + 288)) /* [rsp+120h] */

  if ( (unsigned int)sub_14020B8E4(&callee_output_word, a1, "rb") || (file_handle = callee_output_word) == 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  else
  {
    running_total = 0;
    state_address_3 = &selection_flag;
    unused_written_slot = *(_OWORD *)&off_140301820;
    state_address_2 = &selection_flag;
    callback_function = off_140301830;
    unused_written_slot_2 = callee_output_word;
    unused_written_slot_4 = 128;
    unused_written_slot_3 = 1;
    callback_result = off_140301820(callee_output_word, &selection_flag, 128);
    running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
    if ( callback_result )
    {
      state_address_2 = &selection_flag;
      state_address = &selection_flag + callback_result;
    }
    else
    {
      unused_written_slot_3 = 0;
      state_address_2 = &selection_flag;
      state_address = &callee_output_word_2;
      selection_flag = 0;
    }
    unused_written_slot_5 = state_address;
    unused_written_slot_6 = state_address;
    sub_140166D20((__int64)scratch_buffer, a2, a3, a4, a5);
    crt_fclose(file_handle);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word_2
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_288

//----- (00000001401717D0) ----------------------------------------------------
__int64            sub_1401717D0(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 loaded_word;
  __int64 loaded_word_2;
  int int64_result;
  char *state_address;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401717D0[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401717D0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401717D0 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 88)) /* [rsp+58h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1401717D0 + 96)) /* [rsp+60h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_1401717D0 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_1401717D0 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1401717D0 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_1401717D0 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_1401717D0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_1401717D0 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401717D0 + 256)) /* [rsp+100h] */
#define unused_written_slot_7 (*(char * (*))(void *)(sr_frame_1401717D0 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 272)) /* [rsp+110h] */

  loaded_word = *a1;
  loaded_word_2 = *((_QWORD *)a1 + 2);
  state_address_3 = &selection_flag;
  unused_written_slot_3 = a2;
  state_address_2 = &selection_flag;
  unused_written_slot = loaded_word;
  unused_written_slot_2 = loaded_word_2;
  unused_written_slot_5 = 128;
  unused_written_slot_4 = 1;
  running_total = 0;
  int64_result = ((__int64 (           *)(__int64, char *, __int64))loaded_word)(a2, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( int64_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + int64_result;
  }
  else
  {
    unused_written_slot_4 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_6 = state_address;
  unused_written_slot_7 = state_address;
  return sub_140166D20((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x1401718B0: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_6
#undef state_address_3
#undef unused_written_slot_7
#undef unused_frame_slot_272

//----- (00000001401718E0) ----------------------------------------------------
__int64            sub_1401718E0(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int callback_result;
  char *state_address;
  __int64 (           *callback_function)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401718E0[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401718E0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401718E0 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 88)) /* [rsp+58h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401718E0 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_1401718E0 + 100)) /* [rsp+64h] */
#define selection_flag (*(char (*))(void *)(sr_frame_1401718E0 + 104)) /* [rsp+68h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_1401718E0 + 105)) /* [rsp+69h] */
#define running_total (*(int (*))(void *)(sr_frame_1401718E0 + 232)) /* [rsp+E8h] */
#define state_address_2 (*(char * (*))(void *)(sr_frame_1401718E0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(char * (*))(void *)(sr_frame_1401718E0 + 248)) /* [rsp+F8h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_1401718E0 + 256)) /* [rsp+100h] */
#define unused_written_slot_6 (*(char * (*))(void *)(sr_frame_1401718E0 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 272)) /* [rsp+110h] */

  state_address_3 = &selection_flag;
  unused_written_slot = *(_OWORD *)&off_140301820;
  state_address_2 = &selection_flag;
  callback_function = off_140301830;
  unused_written_slot_2 = a1;
  unused_written_slot_4 = 128;
  unused_written_slot_3 = 1;
  running_total = 0;
  callback_result = off_140301820(a1, &selection_flag, 128);
  running_total += (_DWORD)state_address_2 - (_DWORD)state_address_3;
  if ( callback_result )
  {
    state_address_2 = &selection_flag;
    state_address = &selection_flag + callback_result;
  }
  else
  {
    unused_written_slot_3 = 0;
    state_address_2 = &selection_flag;
    state_address = &callee_output_word;
    selection_flag = 0;
  }
  unused_written_slot_5 = state_address;
  unused_written_slot_6 = state_address;
  return sub_140166D20((__int64)scratch_buffer, a2, a3, a4, a5); /* 0x1401719B9: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef selection_flag
#undef callee_output_word
#undef running_total
#undef state_address_2
#undef unused_written_slot_5
#undef state_address_3
#undef unused_written_slot_6
#undef unused_frame_slot_272

//----- (00000001401719E0) ----------------------------------------------------
__int64            sub_1401719E0(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401719E0[288];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_BYTE (*)[16])(void *)(sr_frame_1401719E0 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_1401719E0 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1401719E0 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_1401719E0 + 232)) /* [rsp+E8h] */
#define unused_written_slot_4 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 240)) /* [rsp+F0h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 248)) /* [rsp+F8h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 256)) /* [rsp+100h] */
#define integer_sum (*(__int64 (*))(void *)(sr_frame_1401719E0 + 264)) /* [rsp+108h] */
#define unused_frame_slot_272 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 272)) /* [rsp+110h] */

  unused_written_slot_6 = a1;
  unused_written_slot_4 = a1;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  integer_sum = a2 + a1;
  unused_written_slot_5 = integer_sum;
  return sub_140166D20((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x140171A59: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef integer_sum
#undef unused_frame_slot_272

//----- (0000000140171AD0) ----------------------------------------------------
__int64            sub_140171AD0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int call_result;
  __int64 cached_callee_output_word;
  unsigned __int64 (           *callback_function)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171AD0[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 0)) /* [rsp+0h] */
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_140171AD0 + 48)) /* [rsp+30h] */
#define file_handle (*(__int64 (*))(void *)(sr_frame_140171AD0 + 72)) /* [rsp+48h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171AD0 + 80)) /* [rsp+50h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 128)) /* [rsp+80h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 144)) /* [rsp+90h] */
#define unused_frame_slot_160 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 160)) /* [rsp+A0h] */

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_5 = 0;
  unused_written_slot_4 = 0;
  call_result = sub_14020B8E4(&callee_output_word, a1, "wb");
  cached_callee_output_word = callee_output_word;
  callback_function = sub_14016E2F0;
  if ( call_result )
    cached_callee_output_word = 0;
  file_handle = cached_callee_output_word;
  if ( cached_callee_output_word )
  {
    sub_140171BB0((__int64)&callback_function, a2, a3, a4, a5);
    crt_fclose(file_handle);
  }
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef callee_output_word
#undef file_handle
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_frame_slot_160

//----- (0000000140171BB0) ----------------------------------------------------
__int64            sub_140171BB0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171BB0[96];
#define selection_code (*(int (*))(void *)(sr_frame_140171BB0 + 0)) /* [rsp+58h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_140171BB0 + 8)) /* [rsp+60h] */
#define masked_bits (*(int (*))(void *)(sr_frame_140171BB0 + 16)) /* [rsp+68h] */
#define selection_code_3 (*(int (*))(void *)(sr_frame_140171BB0 + 40)) /* [rsp+80h] */
#define selection_code_4 (*(int (*))(void *)(sr_frame_140171BB0 + 48)) /* [rsp+88h] */
#define selection_flag (*(int (*))(void *)(sr_frame_140171BB0 + 72)) /* [rsp+A0h] */
#define selection_code_5 (*(int (*))(void *)(sr_frame_140171BB0 + 80)) /* [rsp+A8h] */

  selection_code_5 = 24;
  selection_flag = 1;
  selection_code_4 = 40;
  selection_code_3 = 54;
  masked_bits = a3 * (a2 + (a2 & 3) + 2 * a2) + 54;
  selection_code_2 = 77;
  selection_code = 66;
  return sub_140176DF0(
           a1,
           -1,
           -1,
           a2,
           a3,
           a4,
           1,
           a5,
           0,
           a2 & 3,
           "11 4 22 44 44 22 444444",
           selection_code,
           selection_code_2,
           masked_bits,
           0,
           0,
           selection_code_3,
           selection_code_4,
           a2,
           a3,
           selection_flag,
           selection_code_5,
           0,
           0,
           0,
           0,
           0,
           0);
}
#undef selection_code
#undef selection_code_2
#undef masked_bits
#undef selection_code_3
#undef selection_code_4
#undef selection_flag
#undef selection_code_5

//----- (0000000140171C80) ----------------------------------------------------
__int64            sub_140171C80(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171C80[160];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171C80 + 0)) /* [rsp+0h] */
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_140171C80 + 48)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171C80 + 64)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140171C80 + 80)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_140171C80 + 96)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_140171C80 + 112)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171C80 + 128)) /* [rsp+80h] */
#define unused_frame_slot_144 (*(__int64 (*))(void *)(sr_frame_140171C80 + 144)) /* [rsp+90h] */

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  unused_written_slot_5 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  return sub_140171BB0((__int64)scratch_buffer, a3, a4, a5, a6); /* 0x140171CEB: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_frame_slot_144

//----- (0000000140171D10) ----------------------------------------------------
__int64            sub_140171D10(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int call_result;
  __int64 cached_callee_output_word;
  unsigned int unused_written_slot;
  unsigned __int64 (           *callback_function)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171D10[112];
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_140171D10 + 0)) /* [rsp+30h] */
#define file_handle (*(__int64 (*))(void *)(sr_frame_140171D10 + 24)) /* [rsp+48h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140171D10 + 32)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_140171D10 + 48)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_140171D10 + 64)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int128 (*))(void *)(sr_frame_140171D10 + 80)) /* [rsp+80h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140171D10 + 96)) /* [rsp+90h] */

  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_5 = 0;
  call_result = sub_14020B8E4(&callee_output_word, a1, "wb");
  cached_callee_output_word = callee_output_word;
  callback_function = sub_14016E2F0;
  if ( call_result )
    cached_callee_output_word = 0;
  file_handle = cached_callee_output_word;
  if ( !cached_callee_output_word )
    return 0;
  unused_written_slot = sub_140171DD0((__int64)&callback_function, a2, a3, a4, a5);
  crt_fclose(file_handle);
  return unused_written_slot;
}
#undef callee_output_word
#undef file_handle
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6

//----- (0000000140171DD0) ----------------------------------------------------
__int64            sub_140171DD0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  _BYTE *allocated_buffer;
  unsigned int call_result;
  int iteration_count;
  int remaining_count;
  int saved_iteration_count;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171DD0[272];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 0)) /* [rsp+0h] */
#define destination_text (*(char (*)[80])(void *)(sr_frame_140171DD0 + 48)) /* [rsp+30h] */
#define scratch_buffer (*(_DWORD (*)[24])(void *)(sr_frame_140171DD0 + 128)) /* [rsp+80h] */
#define unused_frame_slot_256 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 256)) /* [rsp+100h] */

  if ( !(a3 > 0 && a2 > 0 && a5) )
    return 0; /* 0x140171F2D: xor eax, eax */
  {
    allocated_buffer = (_BYTE *)sr_path_malloc(4 * a2);
    strcpy(destination_text, "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n");
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), destination_text, 65);
    call_result = sub_140158C70(scratch_buffer, 128, (__int64)"EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n", a3, a2);
    (*(void (           **)(_QWORD, _DWORD *, _QWORD))a1)(*(_QWORD *)(a1 + 8), scratch_buffer, call_result);
    iteration_count = 0;
    remaining_count = a3 - 1;
    do
    {
      saved_iteration_count = iteration_count;
      if ( g_1449815C0 )
        saved_iteration_count = remaining_count;
      sub_1401772C0(a1, a2, a4, allocated_buffer, (float *)(a5 + 4LL * a2 * a4 * saved_iteration_count));
      ++iteration_count;
      --remaining_count;
    }
    while ( iteration_count < a3 );
    free(allocated_buffer);
  }
  return 1; /* 0x140171F16: mov eax, 1 */
}
#undef unused_frame_slot_0
#undef destination_text
#undef scratch_buffer
#undef unused_frame_slot_256

//----- (0000000140171F50) ----------------------------------------------------
__int64            sub_140171F50(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171F50[96];
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_140171F50 + 0)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140171F50 + 16)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140171F50 + 32)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_140171F50 + 48)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_140171F50 + 64)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_140171F50 + 80)) /* [rsp+80h] */

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  unused_written_slot_5 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  return sub_140171DD0((__int64)scratch_buffer, a3, a4, a5, a6);
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5

//----- (0000000140171FC0) ----------------------------------------------------
__int64            sub_140171FC0(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int call_result;
  __int64 cached_callee_output_word;
  unsigned int unused_written_slot;
  unsigned __int64 (           *callback_function)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171FC0[112];
#define callee_output_word (*(__int64 (*))(void *)(sr_frame_140171FC0 + 0)) /* [rsp+30h] */
#define file_handle (*(__int64 (*))(void *)(sr_frame_140171FC0 + 24)) /* [rsp+48h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 32)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 48)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 64)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 80)) /* [rsp+80h] */
#define unused_written_slot_6 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 96)) /* [rsp+90h] */

  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  unused_written_slot_6 = 0;
  unused_written_slot_5 = 0;
  call_result = sub_14020B8E4(&callee_output_word, a1, "wb");
  cached_callee_output_word = callee_output_word;
  callback_function = sub_14016E2F0;
  if ( call_result )
    cached_callee_output_word = 0;
  file_handle = cached_callee_output_word;
  if ( !cached_callee_output_word )
    return 0;
  unused_written_slot = sub_140172080((__int64)&callback_function, a2, a3, a4, a5, a6);
  crt_fclose(file_handle);
  return unused_written_slot;
}
#undef callee_output_word
#undef file_handle
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6

//----- (0000000140172080) ----------------------------------------------------
__int64            sub_140172080(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int16 input_value;
  int input_value_2;
  int integer_quotient;
  int cached_input_value;
  __int64 i;
  int integer_quotient_2;
  __int64 table_value;
  int scaled_index;
  int integer_quotient_3;
  float *buffer_cursor;
  __int64 record_byte_offset;
  float float_word;
  __int64 table_value_2;
  unsigned int table_value_3;
  float comparison_operand;
  float scaled_ratio;
  __m128i converted_vector;
  unsigned int table_value_4;
  __int64 table_value_5;
  float converted_vector_2;
  __m128i converted_vector_3;
  unsigned int table_value_6;
  float converted_vector_4;
  __m128i converted_vector_5;
  unsigned int table_value_7;
  __int64 table_value_8;
  float converted_vector_6;
  __m128i converted_vector_7;
  unsigned int table_value_9;
  float converted_vector_8;
  __m128i converted_vector_9;
  unsigned int table_value_10;
  __int64 table_value_11;
  float converted_vector_10;
  __m128i converted_vector_11;
  unsigned int table_value_12;
  float converted_vector_12;
  __m128i converted_vector_13;
  unsigned int table_value_13;
  __int64 table_value_14;
  float converted_vector_14;
  __m128i converted_vector_15;
  int table_value_15;
  float converted_vector_16;
  unsigned int table_value_16;
  __int64 table_value_17;
  float scaled_ratio_2;
  __m128i converted_vector_17;
  unsigned int table_value_18;
  float converted_vector_18;
  __m128i converted_vector_19;
  unsigned int table_value_19;
  __int64 table_value_20;
  float converted_vector_20;
  __m128i converted_vector_21;
  unsigned int table_value_21;
  float converted_vector_22;
  __m128i converted_vector_23;
  int table_value_22;
  char selection_code;
  __int64 loaded_word;
  __int64 loaded_word_2;
  __int64 loaded_word_3;
  __int64 loaded_word_4;
  int cached_input_value_2;
  __int64 selection_code_2;
  __int64 comparison_result;
  int record_byte_offset_2;
  __int64 integer_sum;
  int k;
  __int64 element_index;
  int iteration_count;
  int saved_iteration_count;
  int record_byte_offset_3;
  int scaled_index_2;
  int record_byte_offset_4;
  int integer_difference;
  int integer_difference_2;
  int saved_record_byte_offset;
  __int64 scaled_index_3;
  float weighted_sum;
  __m128i converted_vector_24;
  unsigned int loaded_word_5;
  int integer_difference_3;
  float converted_vector_25;
  __m128i converted_vector_26;
  float converted_vector_27;
  __int64 scaled_index_4;
  int loaded_word_6;
  float weighted_sum_2;
  float weighted_sum_3;
  int saved_record_byte_offset_2;
  float weighted_sum_4;
  float weighted_sum_5;
  __m128i converted_vector_28;
  int integer_sum_2;
  float converted_vector_29;
  __int64 scaled_index_5;
  int loaded_word_7;
  float weighted_sum_6;
  float weighted_sum_7;
  int saved_record_byte_offset_3;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  __int64 cached_input_value_3;
  int cmfcvisualmanager_ondrawtab_result;
  int cmfcvisualmanager_ondrawtab_result_2;
  int cmfcvisualmanager_ondrawtab_result_3;
  int cmfcvisualmanager_ondrawtab_result_4;
  __int64 record_byte_offset_5;
  __int64 record_byte_offset_6;
  float state_address;
  float weighted_sum_11;
  float state_address_2;
  float state_address_3;
  float state_address_4;
  float state_address_5;
  float state_address_6;
  float state_address_7;
  float state_address_8;
  float state_address_9;
  float state_address_10;
  float weighted_sum_12;
  float weighted_sum_13;
  float component_sum;
  float state_address_11;
  float weighted_sum_14;
  float state_address_12;
  float weighted_sum_15;
  float weighted_sum_16;
  float component_sum_2;
  float weighted_sum_17;
  float weighted_sum_18;
  int cmfcvisualmanager_ondrawtab_result_5;
  int j;
  __int64 element_index_2;
  int iteration_count_2;
  int saved_iteration_count_2;
  int record_byte_offset_7;
  int scaled_index_6;
  int record_byte_offset_8;
  int integer_difference_4;
  int integer_difference_5;
  int saved_record_byte_offset_4;
  __int64 scaled_index_7;
  float weighted_sum_19;
  __m128i converted_vector_30;
  unsigned int loaded_word_8;
  int integer_difference_6;
  float converted_vector_31;
  __m128i converted_vector_32;
  float converted_vector_33;
  __int64 scaled_index_8;
  int loaded_word_9;
  float weighted_sum_20;
  float weighted_sum_21;
  int saved_record_byte_offset_5;
  float weighted_sum_22;
  float weighted_sum_23;
  __m128i converted_vector_34;
  int integer_sum_3;
  float converted_vector_35;
  __int64 scaled_index_9;
  int loaded_word_10;
  float weighted_sum_24;
  float weighted_sum_25;
  int saved_record_byte_offset_6;
  float weighted_sum_26;
  float weighted_sum_27;
  float weighted_sum_28;
  __int64 cached_input_value_4;
  int cmfcvisualmanager_ondrawtab_result_6;
  __int64 cached_input_value_5;
  int shifted_bits;
  unsigned __int64 remaining_count;
  __int64 loaded_word_11;
  __int64 loaded_word_12;
  __int64 loaded_word_13;
  __int64 loaded_word_14;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140172080[8416];
#define scratch_buffer (*(char (*)[8])(void *)(sr_frame_140172080 + 0)) /* [rsp+30h] */
#define input_value_3 (*(int (*))(void *)(sr_frame_140172080 + 8)) /* [rsp+38h] */
#define selection_flag (*(int (*))(void *)(sr_frame_140172080 + 12)) /* [rsp+3Ch] */
#define selection_flag_2 (*(int (*))(void *)(sr_frame_140172080 + 16)) /* [rsp+40h] */
#define saved_record_byte_offset_7 (*(int (*))(void *)(sr_frame_140172080 + 20)) /* [rsp+44h] */
#define cached_j (*(int (*))(void *)(sr_frame_140172080 + 24)) /* [rsp+48h] */
#define cmfcvisualmanager_ondrawtab_result_7 (*(int (*))(void *)(sr_frame_140172080 + 28)) /* [rsp+4Ch] */
#define cmfcvisualmanager_ondrawtab_result_8 (*(int (*))(void *)(sr_frame_140172080 + 32)) /* [rsp+50h] */
#define saved_cmfcvisualmanager_ondrawtab_result (*(int (*))(void *)(sr_frame_140172080 + 36)) /* [rsp+54h] */
#define cached_j_2 (*(int (*))(void *)(sr_frame_140172080 + 40)) /* [rsp+58h] */
#define cached_k (*(int (*))(void *)(sr_frame_140172080 + 44)) /* [rsp+5Ch] */
#define input_value_4 (*(__int64 (*))(void *)(sr_frame_140172080 + 4384)) /* [rsp+1150h] */
#define float_word_2 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4400)) /* [rsp+1160h] */
#define float_word_3 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4656)) /* [rsp+1260h] */
#define float_word_4 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4912)) /* [rsp+1360h] */
#define float_word_5 (*(_DWORD (*)[512])(void *)(sr_frame_140172080 + 5168)) /* [rsp+1460h] */
#define float_word_6 (*(_DWORD (*)[8])(void *)(sr_frame_140172080 + 7216)) /* [rsp+1C60h] */
#define scratch_buffer_2 (*(char (*)[480])(void *)(sr_frame_140172080 + 7248)) /* [rsp+1C80h] */
#define scratch_buffer_3 (*(char (*)[32])(void *)(sr_frame_140172080 + 7728)) /* [rsp+1E60h] */
#define scratch_buffer_4 (*(char (*)[480])(void *)(sr_frame_140172080 + 7760)) /* [rsp+1E80h] */
#define selection_code_3 (*(int (*))(void *)(sr_frame_140172080 + 8240)) /* [rsp+2060h] */
#define unused_written_slot (*(char (*))(void *)(sr_frame_140172080 + 8244)) /* [rsp+2064h] */
#define unused_written_slot_2 (*(char (*))(void *)(sr_frame_140172080 + 8245)) /* [rsp+2065h] */
#define unused_written_slot_3 (*(char (*))(void *)(sr_frame_140172080 + 8246)) /* [rsp+2066h] */
#define unused_written_slot_4 (*(char (*))(void *)(sr_frame_140172080 + 8247)) /* [rsp+2067h] */
#define unused_written_slot_5 (*(char (*))(void *)(sr_frame_140172080 + 8248)) /* [rsp+2068h] */
#define unused_written_slot_6 (*(__int16 (*))(void *)(sr_frame_140172080 + 8249)) /* [rsp+2069h] */
#define unused_written_slot_7 (*(char (*))(void *)(sr_frame_140172080 + 8251)) /* [rsp+206Bh] */
#define unused_written_slot_8 (*(int (*))(void *)(sr_frame_140172080 + 8252)) /* [rsp+206Ch] */
#define unused_written_slot_9 (*(int (*))(void *)(sr_frame_140172080 + 8256)) /* [rsp+2070h] */
#define unused_written_slot_10 (*(int (*))(void *)(sr_frame_140172080 + 8260)) /* [rsp+2074h] */
#define scratch_buffer_5 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8272)) /* [rsp+2080h] */
#define scratch_buffer_6 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8336)) /* [rsp+20C0h] */
#define unused_frame_slot_8400 (*(__int64 (*))(void *)(sr_frame_140172080 + 8400)) /* [rsp+2100h] */

  input_value_3 = a3;
  input_value = a3;
  input_value_4 = a1;
  if ( !(a5 && a2 && a3 && (unsigned int)(a4 - 1) <= 3) )
    return 0; /* 0x1401737CD: xor eax, eax */
  {
    input_value_2 = 90;
    if ( a6 )
      input_value_2 = a6;
    if ( input_value_2 >= 1 )
    {
      cached_input_value = input_value_2;
      if ( input_value_2 > 100 )
        cached_input_value = 100;
      if ( cached_input_value >= 50 )
        integer_quotient = 2 * (100 - cached_input_value);
      else
        integer_quotient = 5000 / cached_input_value;
    }
    else
    {
      integer_quotient = 5000;
    }
    for ( i = 0; i < 64; ++i )
    {
      integer_quotient_2 = (integer_quotient * dword_14026F9D0[i] + 50) / 100;
      if ( integer_quotient_2 >= 1 )
      {
        if ( integer_quotient_2 > 255 )
          LOBYTE(integer_quotient_2) = -1;
      }
      else
      {
        LOBYTE(integer_quotient_2) = 1;
      }
      table_value = byte_14026E780[i];
      scaled_index = integer_quotient * dword_14026FAD0[i];
      scratch_buffer_5[table_value] = integer_quotient_2;
      integer_quotient_3 = (scaled_index + 50) / 100;
      if ( integer_quotient_3 >= 1 )
      {
        if ( integer_quotient_3 > 255 )
          LOBYTE(integer_quotient_3) = -1;
      }
      else
      {
        LOBYTE(integer_quotient_3) = 1;
      }
      scratch_buffer_6[table_value] = integer_quotient_3;
    }
    buffer_cursor = (float *)&unk_14026E8E8;
    record_byte_offset = 0;
    do
    {
      float_word = *buffer_cursor;
      table_value_2 = byte_14026E780[record_byte_offset + 1];
      table_value_3 = (unsigned __int8)scratch_buffer_5[table_value_2];
      comparison_operand = (float)(unsigned __int8)scratch_buffer_6[byte_14026E780[record_byte_offset]];
      *(float *)&float_word_3[record_byte_offset] = 0.35355338 / (float)((float)(unsigned __int8)scratch_buffer_5[byte_14026E780[record_byte_offset]] * *buffer_cursor);
      scaled_ratio = 0.35355338 / (float)(comparison_operand * float_word);
      converted_vector = _mm_cvtsi32_si128(table_value_3);
      table_value_4 = (unsigned __int8)scratch_buffer_6[table_value_2];
      table_value_5 = byte_14026E780[record_byte_offset + 2];
      *(float *)&float_word_4[record_byte_offset] = scaled_ratio;
      converted_vector_2 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * float_word);
      converted_vector_3 = _mm_cvtsi32_si128(table_value_4);
      table_value_6 = (unsigned __int8)scratch_buffer_5[table_value_5];
      *(float *)&float_word_3[record_byte_offset + 1] = converted_vector_2;
      converted_vector_4 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * float_word);
      converted_vector_5 = _mm_cvtsi32_si128(table_value_6);
      table_value_7 = (unsigned __int8)scratch_buffer_6[table_value_5];
      table_value_8 = byte_14026E780[record_byte_offset + 3];
      *(float *)&float_word_4[record_byte_offset + 1] = converted_vector_4;
      converted_vector_6 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_5), f32)[0] * float_word);
      converted_vector_7 = _mm_cvtsi32_si128(table_value_7);
      table_value_9 = (unsigned __int8)scratch_buffer_5[table_value_8];
      *(float *)&float_word_3[record_byte_offset + 2] = converted_vector_6;
      converted_vector_8 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_7), f32)[0] * float_word);
      converted_vector_9 = _mm_cvtsi32_si128(table_value_9);
      table_value_10 = (unsigned __int8)scratch_buffer_6[table_value_8];
      table_value_11 = byte_14026E780[record_byte_offset + 4];
      *(float *)&float_word_4[record_byte_offset + 2] = converted_vector_8;
      converted_vector_10 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_9), f32)[0] * float_word);
      converted_vector_11 = _mm_cvtsi32_si128(table_value_10);
      table_value_12 = (unsigned __int8)scratch_buffer_5[table_value_11];
      *(float *)&float_word_3[record_byte_offset + 3] = converted_vector_10;
      converted_vector_12 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_11), f32)[0] * float_word);
      converted_vector_13 = _mm_cvtsi32_si128(table_value_12);
      table_value_13 = (unsigned __int8)scratch_buffer_6[table_value_11];
      table_value_14 = byte_14026E780[record_byte_offset + 5];
      *(float *)&float_word_4[record_byte_offset + 3] = converted_vector_12;
      converted_vector_14 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_13), f32)[0] * float_word);
      converted_vector_15 = _mm_cvtsi32_si128(table_value_13);
      table_value_15 = (unsigned __int8)scratch_buffer_5[table_value_14];
      *(float *)&float_word_3[record_byte_offset + 4] = converted_vector_14;
      converted_vector_16 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_15), f32)[0] * float_word);
      *(float *)SR_VEC_LANES(128, converted_vector_15, i32) = (float)table_value_15;
      *(float *)&float_word_4[record_byte_offset + 4] = converted_vector_16;
      table_value_16 = (unsigned __int8)scratch_buffer_6[table_value_14];
      table_value_17 = byte_14026E780[record_byte_offset + 6];
      record_byte_offset += 8;
      scaled_ratio_2 = 0.4499881 / (float)(*(float *)SR_VEC_LANES(128, converted_vector_15, i32) * float_word);
      ++buffer_cursor;
      converted_vector_17 = _mm_cvtsi32_si128(table_value_16);
      table_value_18 = (unsigned __int8)scratch_buffer_5[table_value_17];
      *(float *)&float_word_2[record_byte_offset + 61] = scaled_ratio_2;
      converted_vector_18 = 0.4499881 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_17), f32)[0] * float_word);
      converted_vector_19 = _mm_cvtsi32_si128(table_value_18);
      table_value_19 = (unsigned __int8)scratch_buffer_6[table_value_17];
      table_value_20 = (unsigned __int8)byte_14026E768[record_byte_offset + 23];
      *(float *)&float_word_3[record_byte_offset + 61] = converted_vector_18;
      converted_vector_20 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_19), f32)[0] * float_word);
      converted_vector_21 = _mm_cvtsi32_si128(table_value_19);
      table_value_21 = (unsigned __int8)scratch_buffer_5[table_value_20];
      *(float *)&float_word_2[record_byte_offset + 62] = converted_vector_20;
      converted_vector_22 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_21), f32)[0] * float_word);
      converted_vector_23 = _mm_cvtsi32_si128(table_value_21);
      table_value_22 = (unsigned __int8)scratch_buffer_6[table_value_20];
      *(float *)&float_word_3[record_byte_offset + 62] = converted_vector_22;
      *(float *)&float_word_2[record_byte_offset + 63] = 1.2814577 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_23), f32)[0] * float_word);
      *(float *)&float_word_3[record_byte_offset + 63] = 1.2814577 / (float)((float)table_value_22 * float_word);
    }
    while ( (__int64)buffer_cursor < (__int64)"JFIF" );
    unused_written_slot_2 = HIBYTE(input_value);
    unused_written_slot_4 = BYTE1(a2);
    selection_code = 17;
    if ( input_value_2 <= 90 )
      selection_code = 34;
    loaded_word = *(_QWORD *)(a1 + 8);
    unused_written_slot_7 = selection_code;
    selection_code_3 = 285262079;
    unused_written_slot = 8;
    unused_written_slot_3 = input_value;
    unused_written_slot_5 = a2;
    unused_written_slot_6 = 259;
    unused_written_slot_8 = 17891840;
    unused_written_slot_9 = -16707325;
    unused_written_slot_10 = 10617284;
    (*(void (           **)(__int64, void *, __int64,      char *))a1)(loaded_word, &unk_14026FBD0, 25, "JFIF");
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), scratch_buffer_5, 64);
    loaded_word_2 = *(_QWORD *)(a1 + 8);
    scratch_buffer[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(loaded_word_2, scratch_buffer, 1);
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), scratch_buffer_6, 64);
    (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &selection_code_3, 24);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7C1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7D8, 12);
    loaded_word_3 = *(_QWORD *)(a1 + 8);
    scratch_buffer[0] = 16;
    (*(void (           **)(__int64, char *, __int64))a1)(loaded_word_3, scratch_buffer, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7E9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E800, 162);
    loaded_word_4 = *(_QWORD *)(a1 + 8);
    scratch_buffer[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(loaded_word_4, scratch_buffer, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8A9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8C0, 12);
    scratch_buffer[0] = 17;
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), scratch_buffer, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8D1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E910, 162);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E9B8, 14);
    cached_input_value_2 = input_value_3;
    cmfcvisualmanager_ondrawtab_result_7 = 0;
    cmfcvisualmanager_ondrawtab_result_8 = 0;
    saved_cmfcvisualmanager_ondrawtab_result = 0;
    selection_code_2 = 0;
    selection_flag_2 = 0;
    comparison_result = a5 + (a4 > 2);
    selection_flag = 0;
    if ( a4 > 2 )
      selection_code_2 = 2;
    record_byte_offset_2 = 0;
    integer_sum = a5 + selection_code_2;
    saved_record_byte_offset_7 = 0;
    if ( input_value_2 > 90 )
    {
      if ( input_value_3 > 0 )
      {
        do
        {
          if ( a2 > 0 )
          {
            j = 8;
            cached_j = 8;
            do
            {
              element_index_2 = 0;
              cached_j_2 = j;
              iteration_count_2 = record_byte_offset_2;
              if ( !sr_export_ofsub32((uint32_t)record_byte_offset_2, (uint32_t)record_byte_offset_2 + 8u) )
              {
                do
                {
                  saved_iteration_count_2 = iteration_count_2;
                  record_byte_offset_7 = j - 8;
                  if ( iteration_count_2 >= cached_input_value_2 )
                    saved_iteration_count_2 = cached_input_value_2 - 1;
                  if ( g_1449815C0 )
                    saved_iteration_count_2 = cached_input_value_2 - saved_iteration_count_2 - 1;
                  scaled_index_6 = a2 * saved_iteration_count_2;
                  if ( record_byte_offset_7 < j )
                  {
                    record_byte_offset_8 = j - 6;
                    integer_difference_4 = j - 3;
                    integer_difference_5 = a2 - 1;
                    do
                    {
                      saved_record_byte_offset_4 = record_byte_offset_7;
                      if ( record_byte_offset_7 >= a2 )
                      {
                        integer_difference_5 = a2 - 1;
                        saved_record_byte_offset_4 = a2 - 1;
                      }
                      scaled_index_7 = a4 * (scaled_index_6 + saved_record_byte_offset_4);
                      weighted_sum_19 = (float)*(unsigned __int8 *)(scaled_index_7 + a5);
                      converted_vector_30 = _mm_cvtsi32_si128(*(unsigned __int8 *)(scaled_index_7 + comparison_result));
                      loaded_word_8 = *(unsigned __int8 *)(scaled_index_7 + integer_sum);
                      integer_difference_6 = integer_difference_5;
                      converted_vector_31 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_30), f32)[0];
                      converted_vector_32 = _mm_cvtsi32_si128(loaded_word_8);
                      if ( record_byte_offset_8 - 1 < a2 )
                        integer_difference_6 = record_byte_offset_8 - 1;
                      converted_vector_33 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_32), f32)[0];
                      scaled_index_8 = a4 * (integer_difference_6 + scaled_index_6);
                      loaded_word_9 = *(unsigned __int8 *)(scaled_index_8 + a5);
                      *(float *)&float_word_6[element_index_2] = (float)((float)((float)(converted_vector_31 * 0.58700001) + (float)(weighted_sum_19 * 0.29899999))
                                                    + (float)(converted_vector_33 * 0.114))
                                            - 128.0;
                      *(float *)&float_word_2[element_index_2] = (float)(converted_vector_33 * 0.5)
                                            - (float)((float)(weighted_sum_19 * 0.16874) + (float)(converted_vector_31 * 0.33126));
                      *(float *)&float_word_5[element_index_2] = (float)((float)(weighted_sum_19 * 0.5) - (float)(converted_vector_31 * 0.41869))
                                            - (float)(converted_vector_33 * 0.081309997);
                      weighted_sum_20 = (float)*(unsigned __int8 *)(scaled_index_8 + integer_sum);
                      weighted_sum_21 = (float)*(unsigned __int8 *)(scaled_index_8 + comparison_result);
                      *(float *)&float_word_6[element_index_2 + 1] = (float)((float)((float)(weighted_sum_21 * 0.58700001)
                                                                + (float)((float)loaded_word_9 * 0.29899999))
                                                        + (float)(weighted_sum_20 * 0.114))
                                                - 128.0;
                      *(float *)&float_word_2[element_index_2 + 1] = (float)(weighted_sum_20 * 0.5)
                                                - (float)((float)((float)loaded_word_9 * 0.16874) + (float)(weighted_sum_21 * 0.33126));
                      *(float *)&float_word_5[element_index_2 + 1] = (float)((float)((float)loaded_word_9 * 0.5) - (float)(weighted_sum_21 * 0.41869))
                                                - (float)(weighted_sum_20 * 0.081309997);
                      if ( record_byte_offset_8 >= a2 )
                      {
                        saved_record_byte_offset_5 = integer_difference_5;
                      }
                      else
                      {
                        saved_record_byte_offset_5 = record_byte_offset_8;
                        integer_difference_5 = a2 - 1;
                      }
                      weighted_sum_22 = (float)*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_5) + a5);
                      weighted_sum_23 = (float)*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_5) + comparison_result);
                      converted_vector_34 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_5) + integer_sum));
                      integer_sum_3 = record_byte_offset_8 + 1;
                      if ( record_byte_offset_8 + 1 >= a2 )
                        integer_sum_3 = integer_difference_5;
                      record_byte_offset_7 += 4;
                      converted_vector_35 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_34), f32)[0];
                      record_byte_offset_8 += 4;
                      scaled_index_9 = a4 * (scaled_index_6 + integer_sum_3);
                      loaded_word_10 = *(unsigned __int8 *)(scaled_index_9 + a5);
                      *(float *)&float_word_6[element_index_2 + 2] = (float)((float)((float)(weighted_sum_23 * 0.58700001) + (float)(weighted_sum_22 * 0.29899999))
                                                        + (float)(converted_vector_35 * 0.114))
                                                - 128.0;
                      *(float *)&float_word_2[element_index_2 + 2] = (float)(converted_vector_35 * 0.5)
                                                - (float)((float)(weighted_sum_22 * 0.16874) + (float)(weighted_sum_23 * 0.33126));
                      *(float *)&float_word_5[element_index_2 + 2] = (float)((float)(weighted_sum_22 * 0.5) - (float)(weighted_sum_23 * 0.41869))
                                                - (float)(converted_vector_35 * 0.081309997);
                      weighted_sum_24 = (float)*(unsigned __int8 *)(scaled_index_9 + comparison_result);
                      weighted_sum_25 = (float)*(unsigned __int8 *)(scaled_index_9 + integer_sum);
                      *(float *)&float_word_6[element_index_2 + 3] = (float)((float)((float)(weighted_sum_24 * 0.58700001)
                                                                + (float)((float)loaded_word_10 * 0.29899999))
                                                        + (float)(weighted_sum_25 * 0.114))
                                                - 128.0;
                      *(float *)&float_word_2[element_index_2 + 3] = (float)(weighted_sum_25 * 0.5)
                                                - (float)((float)((float)loaded_word_10 * 0.16874) + (float)(weighted_sum_24 * 0.33126));
                      *(float *)&float_word_5[element_index_2 + 3] = (float)((float)((float)loaded_word_10 * 0.5) - (float)(weighted_sum_24 * 0.41869))
                                                - (float)(weighted_sum_25 * 0.081309997);
                      element_index_2 += 4;
                    }
                    while ( record_byte_offset_7 < integer_difference_4 );
                    for ( j = cached_j; record_byte_offset_7 < j; ++element_index_2 )
                    {
                      saved_record_byte_offset_6 = record_byte_offset_7;
                      if ( record_byte_offset_7 >= a2 )
                        saved_record_byte_offset_6 = integer_difference_5;
                      ++record_byte_offset_7;
                      weighted_sum_26 = (float)*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_6) + a5);
                      weighted_sum_27 = (float)*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_6) + comparison_result);
                      weighted_sum_28 = (float)*(unsigned __int8 *)(a4 * (scaled_index_6 + saved_record_byte_offset_6) + integer_sum);
                      *(float *)&float_word_6[element_index_2] = (float)((float)((float)(weighted_sum_27 * 0.58700001) + (float)(weighted_sum_26 * 0.29899999))
                                                    + (float)(weighted_sum_28 * 0.114))
                                            - 128.0;
                      *(float *)&float_word_2[element_index_2] = (float)(weighted_sum_28 * 0.5)
                                            - (float)((float)(weighted_sum_26 * 0.16874) + (float)(weighted_sum_27 * 0.33126));
                      *(float *)&float_word_5[element_index_2] = (float)((float)(weighted_sum_26 * 0.5) - (float)(weighted_sum_27 * 0.41869))
                                            - (float)(weighted_sum_28 * 0.081309997);
                    }
                    cached_input_value_2 = input_value_3;
                  }
                  ++iteration_count_2;
                }
                while ( iteration_count_2 < saved_record_byte_offset_7 + 8 );
              }
              cached_input_value_4 = input_value_4;
              cmfcvisualmanager_ondrawtab_result_7 = CMFCVisualManager__OnDrawTab(
                       input_value_4,
                       &selection_flag_2,
                       &selection_flag,
                       (__int64)float_word_6,
                       8,
                       (__int64)float_word_3,
                       cmfcvisualmanager_ondrawtab_result_7,
                       word_14026E9D0,
                       word_14026F1D0);
              cmfcvisualmanager_ondrawtab_result_8 = CMFCVisualManager__OnDrawTab(
                       cached_input_value_4,
                       &selection_flag_2,
                       &selection_flag,
                       (__int64)float_word_2,
                       8,
                       (__int64)float_word_4,
                       cmfcvisualmanager_ondrawtab_result_8,
                       word_14026EDD0,
                       word_14026F5D0);
              cmfcvisualmanager_ondrawtab_result_6 = CMFCVisualManager__OnDrawTab(
                       cached_input_value_4,
                       &selection_flag_2,
                       &selection_flag,
                       (__int64)float_word_5,
                       8,
                       (__int64)float_word_4,
                       saved_cmfcvisualmanager_ondrawtab_result,
                       word_14026EDD0,
                       word_14026F5D0);
              cached_input_value_2 = input_value_3;
              j += 8;
              record_byte_offset_2 = saved_record_byte_offset_7;
              saved_cmfcvisualmanager_ondrawtab_result = cmfcvisualmanager_ondrawtab_result_6;
              cached_j = j;
            }
            while ( cached_j_2 < a2 );
          }
          record_byte_offset_2 += 8;
          saved_record_byte_offset_7 = record_byte_offset_2;
        }
        while ( record_byte_offset_2 < cached_input_value_2 );
      }
    }
    else if ( input_value_3 > 0 )
    {
      do
      {
        if ( a2 > 0 )
        {
          k = 16;
          cached_j = 16;
          do
          {
            element_index = 0;
            cached_k = k;
            iteration_count = record_byte_offset_2;
            if ( !sr_export_ofsub32((uint32_t)record_byte_offset_2, (uint32_t)record_byte_offset_2 + 16u) )
            {
              do
              {
                saved_iteration_count = iteration_count;
                record_byte_offset_3 = k - 16;
                if ( iteration_count >= cached_input_value_2 )
                  saved_iteration_count = cached_input_value_2 - 1;
                if ( g_1449815C0 )
                  saved_iteration_count = cached_input_value_2 - saved_iteration_count - 1;
                scaled_index_2 = a2 * saved_iteration_count;
                if ( record_byte_offset_3 < k )
                {
                  record_byte_offset_4 = k - 14;
                  integer_difference = k - 3;
                  integer_difference_2 = a2 - 1;
                  do
                  {
                    saved_record_byte_offset = record_byte_offset_3;
                    if ( record_byte_offset_3 >= a2 )
                    {
                      integer_difference_2 = a2 - 1;
                      saved_record_byte_offset = a2 - 1;
                    }
                    scaled_index_3 = a4 * (scaled_index_2 + saved_record_byte_offset);
                    weighted_sum = (float)*(unsigned __int8 *)(scaled_index_3 + a5);
                    converted_vector_24 = _mm_cvtsi32_si128(*(unsigned __int8 *)(scaled_index_3 + comparison_result));
                    loaded_word_5 = *(unsigned __int8 *)(scaled_index_3 + integer_sum);
                    integer_difference_3 = integer_difference_2;
                    converted_vector_25 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_24), f32)[0];
                    converted_vector_26 = _mm_cvtsi32_si128(loaded_word_5);
                    if ( record_byte_offset_4 - 1 < a2 )
                      integer_difference_3 = record_byte_offset_4 - 1;
                    converted_vector_27 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_26), f32)[0];
                    scaled_index_4 = a4 * (scaled_index_2 + integer_difference_3);
                    loaded_word_6 = *(unsigned __int8 *)(scaled_index_4 + a5);
                    *(float *)&float_word_6[element_index] = (float)((float)((float)(weighted_sum * 0.29899999) + (float)(converted_vector_25 * 0.58700001))
                                                 + (float)(converted_vector_27 * 0.114))
                                         - 128.0;
                    *(float *)&float_word_5[element_index] = (float)(converted_vector_27 * 0.5) - (float)((float)(weighted_sum * 0.16874) + (float)(converted_vector_25 * 0.33126));
                    *(float *)&float_word_5[element_index + 256] = (float)((float)(weighted_sum * 0.5) - (float)(converted_vector_25 * 0.41869))
                                               - (float)(converted_vector_27 * 0.081309997);
                    weighted_sum_2 = (float)*(unsigned __int8 *)(scaled_index_4 + integer_sum);
                    weighted_sum_3 = (float)*(unsigned __int8 *)(scaled_index_4 + comparison_result);
                    *(float *)&float_word_6[element_index + 1] = (float)((float)((float)((float)loaded_word_6 * 0.29899999)
                                                             + (float)(weighted_sum_3 * 0.58700001))
                                                     + (float)(weighted_sum_2 * 0.114))
                                             - 128.0;
                    *(float *)&float_word_5[element_index + 1] = (float)(weighted_sum_2 * 0.5)
                                             - (float)((float)((float)loaded_word_6 * 0.16874) + (float)(weighted_sum_3 * 0.33126));
                    *(float *)&float_word_5[element_index + 257] = (float)((float)((float)loaded_word_6 * 0.5) - (float)(weighted_sum_3 * 0.41869))
                                               - (float)(weighted_sum_2 * 0.081309997);
                    if ( record_byte_offset_4 >= a2 )
                    {
                      saved_record_byte_offset_2 = integer_difference_2;
                    }
                    else
                    {
                      saved_record_byte_offset_2 = record_byte_offset_4;
                      integer_difference_2 = a2 - 1;
                    }
                    weighted_sum_4 = (float)*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_2) + a5);
                    weighted_sum_5 = (float)*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_2) + comparison_result);
                    converted_vector_28 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_2) + integer_sum));
                    integer_sum_2 = record_byte_offset_4 + 1;
                    if ( record_byte_offset_4 + 1 >= a2 )
                      integer_sum_2 = integer_difference_2;
                    record_byte_offset_3 += 4;
                    converted_vector_29 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_28), f32)[0];
                    record_byte_offset_4 += 4;
                    scaled_index_5 = a4 * (scaled_index_2 + integer_sum_2);
                    loaded_word_7 = *(unsigned __int8 *)(scaled_index_5 + a5);
                    *(float *)&float_word_6[element_index + 2] = (float)((float)((float)(weighted_sum_4 * 0.29899999) + (float)(weighted_sum_5 * 0.58700001))
                                                     + (float)(converted_vector_29 * 0.114))
                                             - 128.0;
                    *(float *)&float_word_5[element_index + 2] = (float)(converted_vector_29 * 0.5)
                                             - (float)((float)(weighted_sum_4 * 0.16874) + (float)(weighted_sum_5 * 0.33126));
                    *(float *)&float_word_5[element_index + 258] = (float)((float)(weighted_sum_4 * 0.5) - (float)(weighted_sum_5 * 0.41869))
                                               - (float)(converted_vector_29 * 0.081309997);
                    weighted_sum_6 = (float)*(unsigned __int8 *)(scaled_index_5 + comparison_result);
                    weighted_sum_7 = (float)*(unsigned __int8 *)(scaled_index_5 + integer_sum);
                    *(float *)&float_word_6[element_index + 3] = (float)((float)((float)((float)loaded_word_7 * 0.29899999)
                                                             + (float)(weighted_sum_6 * 0.58700001))
                                                     + (float)(weighted_sum_7 * 0.114))
                                             - 128.0;
                    *(float *)&float_word_5[element_index + 3] = (float)(weighted_sum_7 * 0.5)
                                             - (float)((float)((float)loaded_word_7 * 0.16874) + (float)(weighted_sum_6 * 0.33126));
                    *(float *)&float_word_5[element_index + 259] = (float)((float)((float)loaded_word_7 * 0.5) - (float)(weighted_sum_6 * 0.41869))
                                               - (float)(weighted_sum_7 * 0.081309997);
                    element_index += 4;
                  }
                  while ( record_byte_offset_3 < integer_difference );
                  for ( k = cached_j; record_byte_offset_3 < k; ++element_index )
                  {
                    saved_record_byte_offset_3 = record_byte_offset_3;
                    if ( record_byte_offset_3 >= a2 )
                      saved_record_byte_offset_3 = integer_difference_2;
                    ++record_byte_offset_3;
                    weighted_sum_8 = (float)*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_3) + a5);
                    weighted_sum_9 = (float)*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_3) + comparison_result);
                    weighted_sum_10 = (float)*(unsigned __int8 *)(a4 * (scaled_index_2 + saved_record_byte_offset_3) + integer_sum);
                    *(float *)&float_word_6[element_index] = (float)((float)((float)(weighted_sum_8 * 0.29899999) + (float)(weighted_sum_9 * 0.58700001))
                                                 + (float)(weighted_sum_10 * 0.114))
                                         - 128.0;
                    *(float *)&float_word_5[element_index] = (float)(weighted_sum_10 * 0.5)
                                         - (float)((float)(weighted_sum_8 * 0.16874) + (float)(weighted_sum_9 * 0.33126));
                    *(float *)&float_word_5[element_index + 256] = (float)((float)(weighted_sum_8 * 0.5) - (float)(weighted_sum_9 * 0.41869))
                                               - (float)(weighted_sum_10 * 0.081309997);
                  }
                  cached_input_value_2 = input_value_3;
                }
                ++iteration_count;
              }
              while ( iteration_count < saved_record_byte_offset_7 + 16 );
            }
            cached_input_value_3 = input_value_4;
            cmfcvisualmanager_ondrawtab_result = CMFCVisualManager__OnDrawTab(
                     input_value_4,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)float_word_6,
                     16,
                     (__int64)float_word_3,
                     cmfcvisualmanager_ondrawtab_result_7,
                     word_14026E9D0,
                     word_14026F1D0);
            cmfcvisualmanager_ondrawtab_result_2 = CMFCVisualManager__OnDrawTab(
                     cached_input_value_3,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)scratch_buffer_2,
                     16,
                     (__int64)float_word_3,
                     cmfcvisualmanager_ondrawtab_result,
                     word_14026E9D0,
                     word_14026F1D0);
            cmfcvisualmanager_ondrawtab_result_3 = CMFCVisualManager__OnDrawTab(
                     cached_input_value_3,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)scratch_buffer_3,
                     16,
                     (__int64)float_word_3,
                     cmfcvisualmanager_ondrawtab_result_2,
                     word_14026E9D0,
                     word_14026F1D0);
            cmfcvisualmanager_ondrawtab_result_4 = CMFCVisualManager__OnDrawTab(
                     cached_input_value_3,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)scratch_buffer_4,
                     16,
                     (__int64)float_word_3,
                     cmfcvisualmanager_ondrawtab_result_3,
                     word_14026E9D0,
                     word_14026F1D0);
            record_byte_offset_5 = 0;
            cmfcvisualmanager_ondrawtab_result_7 = cmfcvisualmanager_ondrawtab_result_4;
            record_byte_offset_6 = 0;
            do
            {
              state_address = (float)(*(float *)&float_word_5[record_byte_offset_6 + 273] + *(float *)&float_word_5[record_byte_offset_6 + 272])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 257] + *(float *)&float_word_5[record_byte_offset_6 + 256]);
              weighted_sum_11 = *(float *)&float_word_5[record_byte_offset_6 + 3] + *(float *)&float_word_5[record_byte_offset_6 + 2];
              *(float *)&float_word_2[record_byte_offset_5] = (float)((float)(*(float *)&float_word_5[record_byte_offset_6 + 17] + *(float *)&float_word_5[record_byte_offset_6 + 16])
                                            + (float)(*(float *)&float_word_5[record_byte_offset_6 + 1] + *(float *)&float_word_5[record_byte_offset_6]))
                                    * 0.25;
              state_address_2 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 19] + *(float *)&float_word_5[record_byte_offset_6 + 18]) + weighted_sum_11;
              *(float *)&float_word_6[record_byte_offset_5] = state_address * 0.25;
              state_address_3 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 275] + *(float *)&float_word_5[record_byte_offset_6 + 274])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 259] + *(float *)&float_word_5[record_byte_offset_6 + 258]);
              *(float *)&float_word_2[record_byte_offset_5 + 1] = state_address_2 * 0.25;
              state_address_4 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 21] + *(float *)&float_word_5[record_byte_offset_6 + 20])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 4] + *(float *)&float_word_5[record_byte_offset_6 + 5]);
              *(float *)&float_word_6[record_byte_offset_5 + 1] = state_address_3 * 0.25;
              state_address_5 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 277] + *(float *)&float_word_5[record_byte_offset_6 + 276])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 260] + *(float *)&float_word_5[record_byte_offset_6 + 261]);
              *(float *)&float_word_2[record_byte_offset_5 + 2] = state_address_4 * 0.25;
              state_address_6 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 23] + *(float *)&float_word_5[record_byte_offset_6 + 22])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 6] + *(float *)&float_word_5[record_byte_offset_6 + 7]);
              *(float *)&float_word_6[record_byte_offset_5 + 2] = state_address_5 * 0.25;
              state_address_7 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 279] + *(float *)&float_word_5[record_byte_offset_6 + 278])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 262] + *(float *)&float_word_5[record_byte_offset_6 + 263]);
              *(float *)&float_word_2[record_byte_offset_5 + 3] = state_address_6 * 0.25;
              state_address_8 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 25] + *(float *)&float_word_5[record_byte_offset_6 + 24])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 8] + *(float *)&float_word_5[record_byte_offset_6 + 9]);
              *(float *)&float_word_6[record_byte_offset_5 + 3] = state_address_7 * 0.25;
              state_address_9 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 281] + *(float *)&float_word_5[record_byte_offset_6 + 280])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 264] + *(float *)&float_word_5[record_byte_offset_6 + 265]);
              *(float *)&float_word_2[record_byte_offset_5 + 4] = state_address_8 * 0.25;
              state_address_10 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 27] + *(float *)&float_word_5[record_byte_offset_6 + 26])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 10] + *(float *)&float_word_5[record_byte_offset_6 + 11]);
              *(float *)&float_word_6[record_byte_offset_5 + 4] = state_address_9 * 0.25;
              weighted_sum_12 = *(float *)&float_word_5[record_byte_offset_6 + 283] + *(float *)&float_word_5[record_byte_offset_6 + 282];
              weighted_sum_13 = *(float *)&float_word_5[record_byte_offset_6 + 266] + *(float *)&float_word_5[record_byte_offset_6 + 267];
              *(float *)&float_word_2[record_byte_offset_5 + 5] = state_address_10 * 0.25;
              component_sum = weighted_sum_12 + weighted_sum_13;
              state_address_11 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 29] + *(float *)&float_word_5[record_byte_offset_6 + 28])
                   + (float)(*(float *)&float_word_5[record_byte_offset_6 + 12] + *(float *)&float_word_5[record_byte_offset_6 + 13]);
              weighted_sum_14 = *(float *)&float_word_5[record_byte_offset_6 + 268] + *(float *)&float_word_5[record_byte_offset_6 + 269];
              *(float *)&float_word_6[record_byte_offset_5 + 5] = component_sum * 0.25;
              state_address_12 = (float)(*(float *)&float_word_5[record_byte_offset_6 + 285] + *(float *)&float_word_5[record_byte_offset_6 + 284]) + weighted_sum_14;
              *(float *)&float_word_2[record_byte_offset_5 + 6] = state_address_11 * 0.25;
              weighted_sum_15 = *(float *)&float_word_5[record_byte_offset_6 + 14] + *(float *)&float_word_5[record_byte_offset_6 + 15];
              weighted_sum_16 = *(float *)&float_word_5[record_byte_offset_6 + 31] + *(float *)&float_word_5[record_byte_offset_6 + 30];
              *(float *)&float_word_6[record_byte_offset_5 + 6] = state_address_12 * 0.25;
              component_sum_2 = weighted_sum_16 + weighted_sum_15;
              weighted_sum_17 = *(float *)&float_word_5[record_byte_offset_6 + 287] + *(float *)&float_word_5[record_byte_offset_6 + 286];
              weighted_sum_18 = *(float *)&float_word_5[record_byte_offset_6 + 270] + *(float *)&float_word_5[record_byte_offset_6 + 271];
              record_byte_offset_6 += 32;
              *(float *)&float_word_2[record_byte_offset_5 + 7] = component_sum_2 * 0.25;
              *(float *)&float_word_6[record_byte_offset_5 + 7] = (float)(weighted_sum_17 + weighted_sum_18) * 0.25;
              record_byte_offset_5 += 8;
            }
            while ( record_byte_offset_6 < 256 );
            cmfcvisualmanager_ondrawtab_result_8 = CMFCVisualManager__OnDrawTab(
                     cached_input_value_3,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)float_word_2,
                     8,
                     (__int64)float_word_4,
                     cmfcvisualmanager_ondrawtab_result_8,
                     word_14026EDD0,
                     word_14026F5D0);
            cmfcvisualmanager_ondrawtab_result_5 = CMFCVisualManager__OnDrawTab(
                     cached_input_value_3,
                     &selection_flag_2,
                     &selection_flag,
                     (__int64)float_word_6,
                     8,
                     (__int64)float_word_4,
                     saved_cmfcvisualmanager_ondrawtab_result,
                     word_14026EDD0,
                     word_14026F5D0);
            cached_input_value_2 = input_value_3;
            k += 16;
            record_byte_offset_2 = saved_record_byte_offset_7;
            saved_cmfcvisualmanager_ondrawtab_result = cmfcvisualmanager_ondrawtab_result_5;
            cached_j = k;
          }
          while ( cached_k < a2 );
        }
        record_byte_offset_2 += 16;
        saved_record_byte_offset_7 = record_byte_offset_2;
      }
      while ( record_byte_offset_2 < cached_input_value_2 );
    }
    cached_input_value_5 = input_value_4;
    shifted_bits = selection_flag_2 | (127 << (24 - (selection_flag + 7)));
    if ( selection_flag + 7 >= 8 )
    {
      remaining_count = (unsigned __int64)(unsigned int)(selection_flag + 7) >> 3;
      do
      {
        loaded_word_11 = *(_QWORD *)(cached_input_value_5 + 8);
        scratch_buffer[0] = BYTE2(shifted_bits);
        (*(void (           **)(__int64, char *, __int64))cached_input_value_5)(loaded_word_11, scratch_buffer, 1);
        if ( BYTE2(shifted_bits) == 0xFF )
        {
          loaded_word_12 = *(_QWORD *)(cached_input_value_5 + 8);
          scratch_buffer[0] = 0;
          (*(void (           **)(__int64, char *, __int64))cached_input_value_5)(loaded_word_12, scratch_buffer, 1);
        }
        shifted_bits <<= 8;
        --remaining_count;
      }
      while ( remaining_count );
    }
    loaded_word_13 = *(_QWORD *)(cached_input_value_5 + 8);
    scratch_buffer[0] = -1;
    (*(void (           **)(__int64, char *, __int64))cached_input_value_5)(loaded_word_13, scratch_buffer, 1);
    loaded_word_14 = *(_QWORD *)(cached_input_value_5 + 8);
    scratch_buffer[0] = -39;
    (*(void (           **)(__int64, char *, __int64))cached_input_value_5)(loaded_word_14, scratch_buffer, 1);
  }
  return 1; /* 0x1401737C6: mov eax, 1 */
}
#undef scratch_buffer
#undef input_value_3
#undef selection_flag
#undef selection_flag_2
#undef saved_record_byte_offset_7
#undef cached_j
#undef cmfcvisualmanager_ondrawtab_result_7
#undef cmfcvisualmanager_ondrawtab_result_8
#undef saved_cmfcvisualmanager_ondrawtab_result
#undef cached_j_2
#undef cached_k
#undef input_value_4
#undef float_word_2
#undef float_word_3
#undef float_word_4
#undef float_word_5
#undef float_word_6
#undef scratch_buffer_2
#undef scratch_buffer_3
#undef scratch_buffer_4
#undef selection_code_3
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef unused_written_slot_9
#undef unused_written_slot_10
#undef scratch_buffer_5
#undef scratch_buffer_6
#undef unused_frame_slot_8400

//----- (00000001401737F0) ----------------------------------------------------
__int64            sub_1401737F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401737F0[96];
#define scratch_buffer (*(_QWORD (*)[2])(void *)(sr_frame_1401737F0 + 0)) /* [rsp+30h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_1401737F0 + 16)) /* [rsp+40h] */
#define unused_written_slot_2 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 32)) /* [rsp+50h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 48)) /* [rsp+60h] */
#define unused_written_slot_4 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 64)) /* [rsp+70h] */
#define unused_written_slot_5 (*(__int64 (*))(void *)(sr_frame_1401737F0 + 80)) /* [rsp+80h] */

  scratch_buffer[0] = a1;
  scratch_buffer[1] = a2;
  unused_written_slot_5 = 0;
  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_4 = 0;
  return sub_140172080((__int64)scratch_buffer, a3, a4, a5, a6, a7);
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5

//----- (0000000140173860) ----------------------------------------------------
__int64            sub_140173860(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  void *allocation_buffer;
  int call_result;
  __int64 file_handle;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173860[16];
#define element_count (*(int (*))(void *)(sr_frame_140173860 + 0)) /* [rsp+30h] */
#define saved_file_handle (*(__int64 (*))(void *)(sr_frame_140173860 + 8)) /* [rsp+38h] */

  allocation_buffer = (void *)sub_140173990(a5, a6, a2, a3, a4, (__int64)&element_count);
  if ( !allocation_buffer )
    return 0;
  call_result = sub_14020B8E4(&saved_file_handle, a1, "wb");
  file_handle = saved_file_handle;
  if ( call_result )
    file_handle = 0;
  saved_file_handle = file_handle;
  if ( !file_handle )
  {
    free(allocation_buffer);
    return 0;
  }
  crt_fread((__int64)allocation_buffer, 1, element_count, file_handle);
  crt_fclose(file_handle);
  free(allocation_buffer);
  return 1;
}
#undef element_count
#undef saved_file_handle

//----- (0000000140173910) ----------------------------------------------------
__int64            sub_140173910(
        void (           *a1)(__int64, __int64, _QWORD),
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 result;
  void *allocation_buffer;
  _DWORD scratch_buffer[6];

  result = sub_140173990(a6, a7, a3, a4, a5, (__int64)scratch_buffer);
  allocation_buffer = (void *)result;
  if ( result )
  {
    a1(a2, result, scratch_buffer[0]);
    free(allocation_buffer);
    return 1;
  }
  return result;
}

//----- (0000000140173990) ----------------------------------------------------
__int64            sub_140173990(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int input_value;
  int input_value_2;
  int scaled_index;
  int byte_count;
  int state_word;
  __m128i *allocated_buffer;
  int cached_input_value;
  __int64 iteration_count;
  int iteration_count_2;
  int iteration_count_3;
  int cached_iteration_count;
  int saved_vector_result;
  int vector_result;
  __int64 record_byte_offset;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __m128i vector_result_2;
  __m128i vector_result_3;
  __m128i vector_result_4;
  __m128i vector_result_5;
  int running_total;
  int running_total_2;
  int table_value;
  int shifted_bits;
  int saved_iteration_count;
  _BYTE *saved_cached_block;
  _BYTE *byte_cursor;
  __m128i *source_buffer;
  unsigned __int64 byte_count_2;
  int integer_sum;
  __int64 allocated_buffer_2;
  __int64 saved_allocated_buffer;
  int cached_input_value_2;
  int *record_pointer;
  __int64 scaled_index_2;
  unsigned int lobyte_result;
  unsigned int shifted_bits_2;
  unsigned int shifted_bits_3;
  unsigned int shifted_bits_4;
  unsigned int shifted_bits_5;
  unsigned int shifted_bits_6;
  unsigned int shifted_bits_7;
  unsigned int shifted_bits_8;
  unsigned int shifted_bits_9;
  unsigned int shifted_bits_10;
  unsigned __int64 xor_value;
  __int64 loaded_word;
  unsigned int shifted_bits_11;
  unsigned int shifted_bits_12;
  unsigned int shifted_bits_13;
  unsigned int shifted_bits_14;
  unsigned int shifted_bits_15;
  int shifted_bits_16;
  unsigned __int64 hibyte_result;
  unsigned int shifted_bits_17;
  unsigned __int64 loaded_word_2;
  int state_word_2;
  int comparison_operand;
  unsigned int shifted_bits_18;
  unsigned int shifted_bits_19;
  int shifted_bits_20;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173990[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140173990 + 0)) /* [rsp+0h] */
#define input_value_3 (*(int (*))(void *)(sr_frame_140173990 + 64)) /* [rsp+40h] */
#define scaled_index_3 (*(int (*))(void *)(sr_frame_140173990 + 68)) /* [rsp+44h] */
#define input_value_4 (*(int (*))(void *)(sr_frame_140173990 + 72)) /* [rsp+48h] */
#define input_value_5 (*(int (*))(void *)(sr_frame_140173990 + 76)) /* [rsp+4Ch] */
#define saved_state_word (*(int (*))(void *)(sr_frame_140173990 + 80)) /* [rsp+50h] */
#define allocation_size (*(int (*))(void *)(sr_frame_140173990 + 84)) /* [rsp+54h] */
#define input_value_6 (*(__int64 (*))(void *)(sr_frame_140173990 + 88)) /* [rsp+58h] */
#define cached_block (*(_BYTE * (*))(void *)(sr_frame_140173990 + 96)) /* [rsp+60h] */
#define Block (*(void * (*))(void *)(sr_frame_140173990 + 104)) /* [rsp+68h] */
#define integer_sum_2 (*(__int64 (*))(void *)(sr_frame_140173990 + 112)) /* [rsp+70h] */
#define input_value_7 (*(__int64 (*))(void *)(sr_frame_140173990 + 120)) /* [rsp+78h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140173990 + 128)) /* [rsp+80h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140173990 + 144)) /* [rsp+90h] */
#define selection_code (*(__int64 (*))(void *)(sr_frame_140173990 + 152)) /* [rsp+98h] */
#define unused_frame_slot_160 (*(__int64 (*))(void *)(sr_frame_140173990 + 160)) /* [rsp+A0h] */

  saved_allocated_buffer = 0; /* failure paths: 0x140173A83 xor eax, eax */
  input_value = a5;
  input_value_2 = a3;
  scaled_index = a2;
  byte_count = a3 * a5;
  input_value_7 = a6;
  state_word = dword_1402B2BD0;
  input_value_3 = a4;
  input_value_4 = a3;
  scaled_index_3 = a2;
  input_value_6 = a1;
  input_value_5 = a5;
  unused_written_slot = 6;
  selection_code = 0xA1A0A0D474E5089LL;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F30);
  if ( !a2 )
  {
    scaled_index = a3 * a5;
    scaled_index_3 = a3 * a5;
  }
  if ( dword_1402B2BD0 >= 5 )
    state_word = -1;
  saved_state_word = state_word;
  allocation_size = a4 * (byte_count + 1);
  Block = (void *)sr_path_malloc(allocation_size);
  if ( Block )
  {
    allocated_buffer = (__m128i *)sr_path_malloc(byte_count);
    if ( allocated_buffer )
    {
      cached_input_value = input_value_3;
      iteration_count = 0;
      iteration_count_2 = 0;
      if ( input_value_3 > 0 )
      {
        integer_sum_2 = byte_count + 1;
        cached_block = Block;
        do
        {
          if ( saved_state_word <= -1 )
          {
            cached_iteration_count = 0;
            saved_vector_result = 0x7FFFFFFF;
            iteration_count_3 = 0;
            do
            {
              sub_140175EB0(input_value_6, scaled_index_3, input_value_4, cached_input_value, iteration_count_2, input_value_5, iteration_count_3, allocated_buffer);
              vector_result = 0;
              record_byte_offset = 0;
              if ( byte_count >= 8 && dword_140302080 >= 2 )
              {
                converted_vector = _mm_cvtsi64_si128((long long)(0));
                converted_vector_2 = _mm_cvtsi64_si128((long long)(0));
                do
                {
                  converted_vector_3 = _mm_cvtsi32_si128(*(unsigned __int32 *)((char *)&SR_VEC_PTR_LANES(128, allocated_buffer, u32)[1] + record_byte_offset));
                  vector_result_2 = _mm_add_epi32(
                          _mm_abs_epi32(_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(unsigned __int32 *)((char *)SR_VEC_PTR_LANES(128, allocated_buffer, u32)
                                                                                                + record_byte_offset)))),
                          converted_vector);
                  record_byte_offset += 8;
                  converted_vector = vector_result_2;
                  vector_result_3 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(converted_vector_3)), converted_vector_2);
                  converted_vector_2 = vector_result_3;
                }
                while ( record_byte_offset < (int)(byte_count - (byte_count & 0x80000007)) );
                vector_result_4 = _mm_add_epi32(converted_vector, vector_result_3);
                vector_result_5 = _mm_add_epi32(vector_result_4, _mm_srli_si128(vector_result_4, 8));
                vector_result = _mm_cvtsi128_si32(_mm_add_epi32(vector_result_5, _mm_srli_si128(vector_result_5, 4)));
              }
              running_total = 0;
              running_total_2 = 0;
              if ( record_byte_offset < byte_count )
              {
                if ( byte_count - record_byte_offset < 2 )
                  goto LABEL_23;
                do
                {
                  running_total += abs8(SR_VEC_PTR_LANES(128, allocated_buffer, i8)[record_byte_offset]);
                  table_value = SR_VEC_PTR_LANES(128, allocated_buffer, i8)[record_byte_offset + 1];
                  shifted_bits = (unsigned __int64)SR_VEC_PTR_LANES(128, allocated_buffer, i8)[record_byte_offset + 1] >> 32;
                  record_byte_offset += 2;
                  running_total_2 += (shifted_bits ^ table_value) - shifted_bits;
                }
                while ( record_byte_offset < byte_count - 1LL );
                if ( record_byte_offset < byte_count )
LABEL_23:
                  vector_result += abs8(SR_VEC_PTR_LANES(128, allocated_buffer, i8)[record_byte_offset]);
                vector_result += running_total_2 + running_total;
              }
              saved_iteration_count = iteration_count_3;
              if ( vector_result >= saved_vector_result )
                saved_iteration_count = cached_iteration_count;
              ++iteration_count_3;
              cached_iteration_count = saved_iteration_count;
              cached_input_value = input_value_3;
              if ( vector_result >= saved_vector_result )
                vector_result = saved_vector_result;
              saved_vector_result = vector_result;
            }
            while ( iteration_count_3 < 5 );
            scaled_index = scaled_index_3;
            if ( iteration_count_3 != cached_iteration_count )
            {
              sub_140175EB0(input_value_6, scaled_index_3, input_value_4, input_value_3, iteration_count_2, input_value_5, cached_iteration_count, allocated_buffer);
              LOBYTE(iteration_count_3) = cached_iteration_count;
            }
            input_value_2 = input_value_4;
          }
          else
          {
            LOBYTE(iteration_count_3) = saved_state_word;
            sub_140175EB0(input_value_6, scaled_index, input_value_2, cached_input_value, iteration_count_2, input_value_5, saved_state_word, allocated_buffer);
          }
          saved_cached_block = cached_block;
          *cached_block = iteration_count_3;
          byte_cursor = saved_cached_block;
          crt_memcpy((__m128i *)(saved_cached_block + 1), allocated_buffer, byte_count);
          ++iteration_count_2;
          cached_input_value = input_value_3;
          cached_block = &byte_cursor[integer_sum_2];
        }
        while ( iteration_count_2 < input_value_3 );
        input_value = input_value_5;
      }
      free(allocated_buffer);
      source_buffer = sub_140174680((__int64)Block, allocation_size, &saved_state_word, dword_1402B2918);
      free(Block);
      if ( source_buffer )
      {
        byte_count_2 = saved_state_word;
        integer_sum = saved_state_word + 57;
        allocated_buffer_2 = sr_path_malloc(saved_state_word + 57);
        saved_allocated_buffer = allocated_buffer_2;
        if ( allocated_buffer_2 )
        {
          cached_input_value_2 = input_value_3;
          *(_QWORD *)allocated_buffer_2 = selection_code;
          record_pointer = (int *)input_value_7;
          *(_BYTE *)(allocated_buffer_2 + 16) = HIBYTE(input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 17) = BYTE2(input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 18) = BYTE1(input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 20) = HIBYTE(cached_input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 21) = BYTE2(cached_input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 22) = BYTE1(cached_input_value_2);
          *(_BYTE *)(allocated_buffer_2 + 23) = cached_input_value_2;
          *(_BYTE *)(allocated_buffer_2 + 19) = input_value_2;
          *(_DWORD *)(allocated_buffer_2 + 8) = 218103808;
          *(_DWORD *)(allocated_buffer_2 + 12) = 1380206665;
          *(_BYTE *)(allocated_buffer_2 + 24) = 8;
          *(_WORD *)(allocated_buffer_2 + 26) = 0;
          *(_BYTE *)(allocated_buffer_2 + 28) = 0;
          *record_pointer = integer_sum;
          scaled_index_2 = SR_VEC_LANES(128, si128, u8)[4 * input_value];
          *(_BYTE *)(allocated_buffer_2 + 25) = scaled_index_2;
          lobyte_result = ((dword_140301980[(unsigned __int8)~*(_BYTE *)(allocated_buffer_2 + 12)] ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 13)
                              ^ (unsigned __int64)(unsigned __int8)~LOBYTE(dword_140301980[(unsigned __int8)~*(_BYTE *)(allocated_buffer_2 + 12)])];
          shifted_bits_2 = (lobyte_result >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 14) ^ (unsigned __int64)(unsigned __int8)lobyte_result];
          shifted_bits_3 = (shifted_bits_2 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 15) ^ (unsigned __int64)(unsigned __int8)shifted_bits_2];
          shifted_bits_4 = (shifted_bits_3 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 16) ^ (unsigned __int64)(unsigned __int8)shifted_bits_3];
          shifted_bits_5 = (shifted_bits_4 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 17) ^ (unsigned __int64)(unsigned __int8)shifted_bits_4];
          shifted_bits_6 = (shifted_bits_5 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 18) ^ (unsigned __int64)(unsigned __int8)shifted_bits_5];
          shifted_bits_7 = (shifted_bits_6 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 19) ^ (unsigned __int64)(unsigned __int8)shifted_bits_6];
          shifted_bits_8 = (shifted_bits_7 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 20) ^ (unsigned __int64)(unsigned __int8)shifted_bits_7];
          shifted_bits_9 = (shifted_bits_8 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 21) ^ (unsigned __int64)(unsigned __int8)shifted_bits_8];
          shifted_bits_10 = (shifted_bits_9 >> 8) ^ dword_140301980[*(unsigned __int8 *)(allocated_buffer_2 + 22) ^ (unsigned __int64)(unsigned __int8)shifted_bits_9];
          xor_value = *(unsigned __int8 *)(allocated_buffer_2 + 23) ^ (unsigned __int64)(unsigned __int8)shifted_bits_10;
          loaded_word = *(unsigned __int8 *)(allocated_buffer_2 + 24);
          *(_BYTE *)(saved_allocated_buffer + 36) = byte_count_2;
          *(_DWORD *)(saved_allocated_buffer + 37) = 1413563465;
          shifted_bits_11 = (shifted_bits_10 >> 8) ^ dword_140301980[xor_value];
          shifted_bits_12 = (shifted_bits_11 >> 8) ^ dword_140301980[loaded_word ^ (unsigned __int8)shifted_bits_11];
          shifted_bits_13 = (shifted_bits_12 >> 8) ^ dword_140301980[scaled_index_2 ^ (unsigned __int8)shifted_bits_12];
          shifted_bits_14 = (shifted_bits_13 >> 8) ^ dword_140301980[(unsigned __int8)shifted_bits_13];
          shifted_bits_15 = (shifted_bits_14 >> 8) ^ dword_140301980[(unsigned __int8)shifted_bits_14];
          shifted_bits_16 = ~((shifted_bits_15 >> 8) ^ dword_140301980[(unsigned __int8)shifted_bits_15]);
          *(_BYTE *)(saved_allocated_buffer + 32) = shifted_bits_16;
          *(_BYTE *)(saved_allocated_buffer + 29) = HIBYTE(shifted_bits_16);
          *(_BYTE *)(saved_allocated_buffer + 30) = BYTE2(shifted_bits_16);
          *(_BYTE *)(saved_allocated_buffer + 31) = BYTE1(shifted_bits_16);
          *(_BYTE *)(saved_allocated_buffer + 33) = BYTE3(byte_count_2);
          *(_BYTE *)(saved_allocated_buffer + 34) = BYTE2(byte_count_2);
          *(_BYTE *)(saved_allocated_buffer + 35) = BYTE1(byte_count_2);
          crt_memcpy((__m128i *)(saved_allocated_buffer + 41), source_buffer, byte_count_2);
          hibyte_result = byte_count_2 + saved_allocated_buffer + 41;
          free(source_buffer);
          shifted_bits_17 = -1;
          if ( (int)byte_count_2 + 4 > 0 )
          {
            do
            {
              loaded_word_2 = *(unsigned __int8 *)(iteration_count + saved_allocated_buffer + 41 - 4);
              ++iteration_count;
              shifted_bits_17 = (shifted_bits_17 >> 8) ^ dword_140301980[(unsigned __int8)shifted_bits_17 ^ loaded_word_2];
            }
            while ( iteration_count < (int)byte_count_2 + 4 );
          }
          state_word_2 = dword_140301C58;
          comparison_operand = ~shifted_bits_17;
          *(_BYTE *)(hibyte_result + 3) = comparison_operand;
          *(_BYTE *)hibyte_result = HIBYTE(comparison_operand);
          *(_BYTE *)(hibyte_result + 1) = BYTE2(comparison_operand);
          *(_BYTE *)(hibyte_result + 2) = BYTE1(comparison_operand);
          *(_DWORD *)(hibyte_result + 4) = 0;
          *(_DWORD *)(hibyte_result + 8) = 1145980233;
          shifted_bits_18 = ((state_word_2 ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(hibyte_result + 9) ^ (unsigned __int64)(unsigned __int8)~(_BYTE)state_word_2];
          shifted_bits_19 = (shifted_bits_18 >> 8) ^ dword_140301980[*(unsigned __int8 *)(hibyte_result + 10) ^ (unsigned __int64)(unsigned __int8)shifted_bits_18];
          shifted_bits_20 = ~((shifted_bits_19 >> 8) ^ dword_140301980[*(unsigned __int8 *)(hibyte_result + 11) ^ (unsigned __int64)(unsigned __int8)shifted_bits_19]);
          *(_BYTE *)(hibyte_result + 15) = shifted_bits_20;
          *(_BYTE *)(hibyte_result + 12) = HIBYTE(shifted_bits_20);
          *(_BYTE *)(hibyte_result + 14) = BYTE1(shifted_bits_20);
          *(_BYTE *)(hibyte_result + 13) = BYTE2(shifted_bits_20);
          if ( hibyte_result + 16 != saved_allocated_buffer + *record_pointer )
            crt_assert(
              (char *)L"o == out + *out_len",
              (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
              0x49Bu);
        }
      }
    }
    else
    {
      free(Block);
    }
  }
  return saved_allocated_buffer; /* 0x140174096: mov rax, r14 */
}
#undef unused_frame_slot_0
#undef input_value_3
#undef scaled_index_3
#undef input_value_4
#undef input_value_5
#undef saved_state_word
#undef allocation_size
#undef input_value_6
#undef cached_block
#undef Block
#undef integer_sum_2
#undef input_value_7
#undef si128
#undef unused_written_slot
#undef selection_code
#undef unused_frame_slot_160

// 140173B8E: conditional instruction was optimized away because ebp.4>=8

