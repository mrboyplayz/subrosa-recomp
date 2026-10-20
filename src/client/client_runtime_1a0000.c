#include "shared_client.h"

//----- (00000001401A0850) ----------------------------------------------------
__int64            sub_1401A0850(int a1)
{
  switch ( a1 )
  {
    case 8000:
      return 6;
    case 12000:
      return 4;
    case 16000:
      return 3;
    case 24000:
      return 2;
    default:
      return a1 == 48000;
  }
}

//----- (00000001401A08E0) ----------------------------------------------------
float *           sub_1401A08E0(__int64 a1, _WORD *a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  int i;
  int j;
  int k;
  int m;
  float scaled_value;
  float weighted_sum;
  int integer_quotient;
  float scaled_value_2;
  int masked_bits;
  int saved_masked_bits;
  float scaled_value_3;
  float scaled_value_4;

  scaled_value_3 = *a6;
  scaled_value = *a7;
  if ( a6[1] == 0.0 && a5 == 1 && !a8 )
  {
    for ( i = 0; i < a3; ++i )
    {
      weighted_sum = *(float *)(a1 + 4LL * i * a4) * 32768.0;
      *(float *)&a2[2 * i] = weighted_sum - scaled_value;
      scaled_value = scaled_value_3 * weighted_sum;
    }
    *a7 = scaled_value;
    return a7;
  }
  else
  {
    integer_quotient = a3 / a5;
    if ( a5 != 1 )
      crt_memset((void *)(uintptr_t)(a2), 0, 4LL * a3);
    for ( j = 0; j < integer_quotient; ++j )
      *(float *)&a2[2 * a5 * j] = *(float *)(a1 + 4LL * j * a4) * 32768.0;
    if ( a8 )
    {
      for ( k = 0; k < integer_quotient; ++k )
      {
        if ( *(float *)&a2[2 * a5 * k] <= 65536.0 )
          scaled_value_2 = *(float *)&a2[2 * a5 * k];
        else
          scaled_value_2 = 65536.0;
        if ( scaled_value_2 >= -65536.0 )
        {
          if ( *(float *)&a2[2 * a5 * k] <= 65536.0 )
            masked_bits = *(_DWORD *)&a2[2 * a5 * k];
          else
            masked_bits = 1199570944;
          saved_masked_bits = masked_bits;
        }
        else
        {
          saved_masked_bits = -947912704;
        }
        *(_DWORD *)&a2[2 * a5 * k] = saved_masked_bits;
      }
    }
    for ( m = 0; m < a3; ++m )
    {
      scaled_value_4 = *(float *)&a2[2 * m];
      *(float *)&a2[2 * m] = scaled_value_4 - scaled_value;
      scaled_value = scaled_value_3 * scaled_value_4;
    }
    *a7 = scaled_value;
    return a7;
  }
}

//----- (00000001401A0C20) ----------------------------------------------------
__m128i *           sub_1401A0C20(
        __m128i *a1,
             __m128i *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  __m128i *result;
  int i;
  float weighted_sum;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  int input_value;
  int input_value_2;
  float product_difference_4;
  float combined_products;
  float weighted_sum_2;
  float weighted_sum_3;
  float scaled_value;
  float scaled_value_2;
  float weighted_sum_4;
  float weighted_sum_5;

  if ( a6 == 0.0 && a7 == 0.0 )
  {
    result = a1;
    if ( a2 != a1 )
      return crt_memcpy(a1, a2, 4LL * a5);
  }
  else
  {
    if ( a3 <= 15 )
      input_value = 15;
    else
      input_value = a3;
    if ( a4 <= 15 )
      input_value_2 = 15;
    else
      input_value_2 = a4;
    scaled_value_2 = a6 * flt_140279B90[3 * a8];
    weighted_sum_4 = a6 * flt_140279B90[3 * a8 + 1];
    weighted_sum_5 = a6 * flt_140279B90[3 * a8 + 2];
    scaled_value = a7 * flt_140279B90[3 * a9];
    weighted_sum_3 = a7 * flt_140279B90[3 * a9 + 1];
    weighted_sum_2 = a7 * flt_140279B90[3 * a9 + 2];
    product_difference_3 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[1 - input_value_2];
    product_difference_2 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-input_value_2];
    product_difference = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-input_value_2 - 1];
    product_difference_4 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-input_value_2 - 2];
    if ( a6 == a7 && input_value == input_value_2 && a8 == a9 )
      a11 = 0;
    for ( i = 0; i < a11; ++i )
    {
      combined_products = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value_2 + 2];
      weighted_sum = *(float *)(a10 + 4LL * i) * *(float *)(a10 + 4LL * i);
      *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i] = (float)((float)((float)((float)((float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i]
                                                                          + (float)((float)((float)(1.0 - weighted_sum) * scaled_value_2)
                                                                                  * *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value]))
                                                                  + (float)((float)((float)(1.0 - weighted_sum) * weighted_sum_4)
                                                                          * (float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value + 1]
                                                                                  + *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value - 1])))
                                                          + (float)((float)((float)(1.0 - weighted_sum) * weighted_sum_5)
                                                                  * (float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value + 2]
                                                                          + *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - input_value - 2])))
                                                  + (float)((float)(weighted_sum * scaled_value) * product_difference_2))
                                          + (float)((float)(weighted_sum * weighted_sum_3) * (float)(product_difference_3 + product_difference)))
                                  + (float)((float)(weighted_sum * weighted_sum_2) * (float)(combined_products + product_difference_4));
      SR_VEC_PTR_LANES(128, a1, i32)[i] = SR_VEC_PTR_LANES(128, a1, i32)[i];
      product_difference_4 = product_difference;
      product_difference = product_difference_2;
      product_difference_2 = product_difference_3;
      product_difference_3 = combined_products;
    }
    if ( a7 == 0.0 )
    {
      result = a1;
      if ( a2 != a1 )
        return crt_memcpy(
                 (__m128i *)((char *)a1 + 4 * a11),
                 (     __m128i *)((char *)a2 + 4 * a11),
                 4LL * (a5 - a11));
    }
    else
    {
      return (__m128i *)sub_1401AE1D0(
                          (__int64)SR_VEC_PTR_LANES(128, a1, i64) + 4 * i,
                          (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 4 * i,
                          input_value_2,
                          a5 - i,
                          scaled_value,
                          weighted_sum_3,
                          weighted_sum_2);
    }
  }
  return result;
}

//----- (00000001401A12E0) ----------------------------------------------------
__int64            sub_1401A12E0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int i;

  for ( i = 0; ; ++i )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = (((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a3)
                               * a4
                               * (*(unsigned __int8 *)(*(_QWORD *)(a1 + 152)
                                                     + i
                                                     + (a4 + 2 * a3 - 1) * *(_DWORD *)(a1 + 8))
                                + 64)) >> 2;
  }
  return result;
}

//----- (00000001401A13B0) ----------------------------------------------------
__int64 sub_1401A13B0()
{
  return 0;
}

//----- (00000001401A13C0) ----------------------------------------------------
void               sub_1401A13C0(__int64 a1, __int64 a2, CGlobalUtils *a3)
{
  int i;
  float weighted_sum;
  __int64 float_word;

  weighted_sum = *(float *)(a1 + 4);
  for ( i = 0; i < *(_DWORD *)a1; ++i )
  {
    float_word = *(_QWORD *)(a2 + 8LL * i);
    *((float *)a3 + 2 * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i)) = weighted_sum * *(float *)&float_word;
    *((float *)a3 + 2 * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i) + 1) = weighted_sum * *((float *)&float_word + 1);
  }
  sub_1401A15A0(a1, a3);
  return; /* void FFT wrapper */
}

//----- (00000001401A1490) ----------------------------------------------------
__int64            sub_1401A1490(unsigned int *a1, __int64 a2, CGlobalUtils *a3)
{
  __int64 result;
  signed int i;
  signed int j;
  int k;

  for ( i = 0; i < (int)*a1; ++i )
    *((_QWORD *)a3 + *(__int16 *)(*((_QWORD *)a1 + 6) + 2LL * i)) = *(_QWORD *)(a2 + 8LL * i);
  for ( j = 0; j < (int)*a1; ++j )
    *((float *)a3 + 2 * j + 1) = -*((float *)a3 + 2 * j + 1);
  sub_1401A15A0((__int64)a1, a3);
  for ( k = 0; ; ++k )
  {
    result = *a1;
    if ( k >= (int)result )
      break;
    *((float *)a3 + 2 * k + 1) = -*((float *)a3 + 2 * k + 1);
  }
  return result;
}

//----- (00000001401A15A0) ----------------------------------------------------
void               sub_1401A15A0(__int64 a1, CGlobalUtils *a2)
{
  __int64 unused_local;
  int i;
  int element_index;
  unsigned int loaded_word;
  unsigned int loaded_word_2;
  int loaded_word_3;
  int saved_loaded_word;
  int loaded_word_4;
  int loaded_word_5;
  __int64 unused_written_slot;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  _DWORD scratch_buffer[8];
  __int64 unused_local_2;

  if ( *(int *)(a1 + 8) <= 0 )
    loaded_word_4 = 0;
  else
    loaded_word_4 = *(_DWORD *)(a1 + 8);
  saved_loaded_word = loaded_word_4;
  scratch_buffer[0] = 1;
  element_index = 0;
  do
  {
    loaded_word_5 = *(__int16 *)(a1 + 4LL * element_index + 12);
    loaded_word = *(__int16 *)(a1 + 2LL * (2 * element_index + 1) + 12);
    scratch_buffer[element_index + 1] = loaded_word_5 * scratch_buffer[element_index];
    ++element_index;
  }
  while ( loaded_word != 1 );
  loaded_word = *(__int16 *)(a1 + 2LL * (2 * element_index - 1) + 12);
  for ( i = element_index - 1; i >= 0; --i )
  {
    if ( i )
      loaded_word_2 = *(__int16 *)(a1 + 2LL * (2 * i - 1) + 12);
    else
      loaded_word_2 = 1;
    loaded_word_3 = *(__int16 *)(a1 + 4LL * i + 12);
    switch ( loaded_word_3 )
    {
      case 2:
        sub_1401B61A0((__int64)a2, loaded_word, scratch_buffer[i]);
        break;
      case 3:
        unused_written_slot_2 = i;
        sub_1401B6FA0((__int64)a2, (int)(scratch_buffer[i] << saved_loaded_word), a1, loaded_word, scratch_buffer[i], loaded_word_2);
        break;
      case 4:
        unused_written_slot = i;
        CGlobalUtils__SetNewParent(a2, (struct CObList *)(int)(scratch_buffer[i] << saved_loaded_word), (struct CWnd *)a1, loaded_word, scratch_buffer[i], loaded_word_2);
        break;
      case 5:
        unused_written_slot_3 = i;
        sub_1401B7510((__int64)a2, (int)(scratch_buffer[i] << saved_loaded_word), a1, loaded_word, scratch_buffer[i], loaded_word_2);
        break;
    }
    loaded_word = loaded_word_2;
  }
  return; /* original void FFT stage */
}

//----- (00000001401A1860) ----------------------------------------------------
void               sub_1401A1860(__int64 a1, __int64 a2, float *a3, float *a4, int a5, int a6, int a7)
{
  unsigned __int64 shifted_bits;
  void *alloca_result;
  unsigned __int64 scaled_index;
  void *alloca_result_2;
  int i;
  float *cached_p_i;
  int shifted_bits_2;
  int shifted_bits_3;
  int remaining_bits;
  float *shifted_bits_4;
  float *shifted_bits_5;
  float *state_address;
  float *state_address_2;
  float *cached_p_i_2;
  __int64 float_word;
  float *running_total;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 running_total_2;
  __int64 saved_running_total;
  float product_difference;
  float weighted_sum_6;
  float combined_products;
  float weighted_sum_7;
  __int64 loaded_word;
  CGlobalUtils *saved_alloca_result;
  float *running_total_3;
  float *state_address_3;
  int *p_i;
  __int64 saved_running_total_2;
  __int64 unused_local;

  loaded_word = *(_QWORD *)(a1 + 8LL * a6 + 8);
  weighted_sum_5 = *(float *)(loaded_word + 4);
  remaining_bits = *(_DWORD *)a1;
  running_total_2 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    remaining_bits >>= 1;
    running_total_2 += 4LL * remaining_bits;
  }
  shifted_bits_3 = remaining_bits >> 1;
  shifted_bits_2 = remaining_bits >> 2;
  shifted_bits = 4LL * (remaining_bits >> 1) + 15;
  if ( shifted_bits <= 4LL * (remaining_bits >> 1) )
    shifted_bits = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(shifted_bits & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = (int *)alloca_result;
  scaled_index = 8LL * shifted_bits_2 + 15;
  if ( scaled_index <= 8LL * shifted_bits_2 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (CGlobalUtils *)alloca_result_2;
  shifted_bits_4 = (float *)(a2 + 4LL * (a5 >> 1));
  shifted_bits_5 = (float *)(a2 + 4LL * shifted_bits_3 + 4LL * (a5 >> 1) - 4);
  cached_p_i = (float *)p_i;
  state_address = &a4[a5 >> 1];
  state_address_2 = state_address - 1;
  for ( i = 0; i < (a5 + 3) >> 2; ++i )
  {
    *cached_p_i++ = (float)(*state_address_2 * shifted_bits_4[shifted_bits_3]) + (float)(*state_address * *shifted_bits_5);
    *cached_p_i++ = (float)(*state_address * *shifted_bits_4) - (float)(*state_address_2 * shifted_bits_5[-shifted_bits_3]);
    shifted_bits_4 += 2;
    shifted_bits_5 -= 2;
    state_address += 2;
    state_address_2 -= 2;
  }
  state_address = a4;
  state_address_2 = &a4[a5 - 1];
  while ( i < shifted_bits_2 - ((a5 + 3) >> 2) )
  {
    *cached_p_i++ = *shifted_bits_5;
    *cached_p_i++ = *shifted_bits_4;
    shifted_bits_4 += 2;
    shifted_bits_5 -= 2;
    ++i;
  }
  while ( i < shifted_bits_2 )
  {
    *cached_p_i++ = (float)(*state_address_2 * *shifted_bits_5) - (float)(*state_address * shifted_bits_4[-shifted_bits_3]);
    *cached_p_i++ = (float)(*state_address_2 * *shifted_bits_4) + (float)(*state_address * shifted_bits_5[shifted_bits_3]);
    shifted_bits_4 += 2;
    shifted_bits_5 -= 2;
    state_address += 2;
    state_address_2 -= 2;
    ++i;
  }
  cached_p_i_2 = (float *)p_i;
  saved_running_total_2 = running_total_2;
  for ( i = 0; i < shifted_bits_2; ++i )
  {
    weighted_sum_2 = *(float *)(saved_running_total_2 + 4LL * i);
    weighted_sum_4 = *(float *)(saved_running_total_2 + 4LL * (i + shifted_bits_2));
    weighted_sum_3 = *cached_p_i_2++;
    weighted_sum = *cached_p_i_2++;
    product_difference = (float)(weighted_sum_3 * weighted_sum_2) - (float)(weighted_sum * weighted_sum_4);
    weighted_sum_6 = (float)(weighted_sum * weighted_sum_2) + (float)(weighted_sum_3 * weighted_sum_4);
    *(float *)&float_word = weighted_sum_5 * product_difference;
    *((float *)&float_word + 1) = weighted_sum_5 * weighted_sum_6;
    *((_QWORD *)saved_alloca_result + *(__int16 *)(*(_QWORD *)(loaded_word + 48) + 2LL * i)) = float_word;
  }
  sub_1401A15A0(loaded_word, saved_alloca_result);
  running_total = (float *)saved_alloca_result;
  running_total_3 = a3;
  state_address_3 = &a3[(shifted_bits_3 - 1) * a7];
  saved_running_total = running_total_2;
  for ( i = 0; i < shifted_bits_2; ++i )
  {
    combined_products = (float)(running_total[1] * *(float *)(saved_running_total + 4LL * (i + shifted_bits_2))) - (float)(*running_total * *(float *)(saved_running_total + 4LL * i));
    weighted_sum_7 = (float)(*running_total * *(float *)(saved_running_total + 4LL * (i + shifted_bits_2))) + (float)(running_total[1] * *(float *)(saved_running_total + 4LL * i));
    *running_total_3 = combined_products;
    *state_address_3 = weighted_sum_7;
    running_total += 2;
    running_total_3 += 2 * a7;
    state_address_3 -= 2 * a7;
  }
  return; /* native void MDCT */
}

//----- (00000001401A1F50) ----------------------------------------------------
__int64            sub_1401A1F50(__int64 a1, float *a2, float *a3, float *a4, int a5, int a6, int a7)
{
  __int64 result;
  int i;
  int j;
  int k;
  int m;
  int shifted_bits;
  int remaining_bits;
  float source_component_y;
  float source_component_y_2;
  float weighted_sum;
  float combined_products;
  float scaled_value;
  float weighted_sum_2;
  float combined_products_2;
  int shifted_bits_2;
  float weighted_sum_3;
  float product_difference;
  float *state_address;
  float *state_address_2;
  int loaded_word;
  float scaled_value_2;
  float scaled_value_3;
  float *running_total;
  float *state_address_3;
  __int64 running_total_2;
  float *buffer_cursor;
  float *buffer_cursor_2;
  float *buffer_cursor_3;
  float *buffer_cursor_4;
  float combined_products_3;
  __int16 *buffer_cursor_5;
  float *state_address_4;

  remaining_bits = *(_DWORD *)a1;
  running_total_2 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    remaining_bits >>= 1;
    running_total_2 += 4LL * remaining_bits;
  }
  shifted_bits_2 = remaining_bits >> 1;
  shifted_bits = remaining_bits >> 2;
  running_total = a2;
  state_address_3 = &a2[((remaining_bits >> 1) - 1) * a7];
  state_address_4 = &a3[a5 >> 1];
  buffer_cursor_5 = *(__int16 **)(*(_QWORD *)(a1 + 8LL * a6 + 8) + 48LL);
  for ( j = 0; j < shifted_bits; ++j )
  {
    loaded_word = *buffer_cursor_5++;
    combined_products_3 = (float)(*running_total * *(float *)(running_total_2 + 4LL * j)) - (float)(*state_address_3 * *(float *)(running_total_2 + 4LL * (j + shifted_bits)));
    state_address_4[2 * loaded_word + 1] = (float)(*state_address_3 * *(float *)(running_total_2 + 4LL * j)) + (float)(*running_total * *(float *)(running_total_2 + 4LL * (j + shifted_bits)));
    state_address_4[2 * loaded_word] = combined_products_3;
    running_total += 2 * a7;
    state_address_3 -= 2 * a7;
  }
  sub_1401A15A0(*(_QWORD *)(a1 + 8LL * a6 + 8), (CGlobalUtils *)&a3[a5 >> 1]);
  state_address = &a3[a5 >> 1];
  state_address_2 = &state_address[shifted_bits_2 - 2];
  for ( k = 0; k < (shifted_bits + 1) >> 1; ++k )
  {
    source_component_y = state_address[1];
    weighted_sum_2 = *(float *)(running_total_2 + 4LL * k);
    weighted_sum = *(float *)(running_total_2 + 4LL * (k + shifted_bits));
    weighted_sum_3 = (float)(source_component_y * weighted_sum_2) + (float)(*state_address * weighted_sum);
    product_difference = (float)(source_component_y * weighted_sum) - (float)(*state_address * weighted_sum_2);
    source_component_y_2 = state_address_2[1];
    scaled_value = *state_address_2;
    *state_address = weighted_sum_3;
    state_address_2[1] = product_difference;
    combined_products_2 = *(float *)(running_total_2 + 4LL * (shifted_bits - k - 1));
    combined_products = *(float *)(running_total_2 + 4LL * (shifted_bits_2 - k - 1));
    *state_address_2 = (float)(source_component_y_2 * combined_products_2) + (float)(scaled_value * combined_products);
    state_address[1] = (float)(source_component_y_2 * combined_products) - (float)(scaled_value * combined_products_2);
    state_address += 2;
    state_address_2 -= 2;
  }
  buffer_cursor_2 = &a3[a5 - 1];
  buffer_cursor = a3;
  buffer_cursor_3 = a4;
  buffer_cursor_4 = &a4[a5 - 1];
  for ( m = 0; ; ++m )
  {
    result = (unsigned int)(a5 / 2);
    if ( m >= (int)result )
      break;
    scaled_value_3 = *buffer_cursor_2;
    scaled_value_2 = *buffer_cursor;
    *buffer_cursor = (float)(*buffer_cursor_4 * *buffer_cursor) - (float)(*buffer_cursor_3 * *buffer_cursor_2);
    ++buffer_cursor;
    *buffer_cursor_2-- = (float)(*buffer_cursor_3++ * scaled_value_2) + (float)(*buffer_cursor_4-- * scaled_value_3);
  }
  return result;
}

//----- (00000001401A2600) ----------------------------------------------------
__int64 sub_1401A2600()
{
  return 0;
}

//----- (00000001401A2610) ----------------------------------------------------
_DWORD *           sub_1401A2610(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int call_result;
  int input_value;
  int input_value_2;
  int integer_sum;
  int integer_sum_2;
  int loaded_word;

  if ( a2 >= a3 )
    input_value = a3;
  else
    input_value = a2;
  if ( a2 <= a3 )
    input_value_2 = a3;
  else
    input_value_2 = a2;
  if ( a2 >= a3 + 1 )
    integer_sum = a3 + 1;
  else
    integer_sum = a2;
  if ( a2 <= a3 + 1 )
    integer_sum_2 = a3 + 1;
  else
    integer_sum_2 = a2;
  loaded_word = *((_DWORD *)*(&off_14027E020 + integer_sum) + integer_sum_2) + *((_DWORD *)*(&off_14027E020 + input_value) + input_value_2);
  call_result = sub_1401B57D0(a2, a1);
  return sub_14019A5E0(a4, call_result, loaded_word);
}

//----- (00000001401A2700) ----------------------------------------------------
float            sub_1401A2700(_DWORD *a1, int a2, int a3, unsigned int *a4)
{
  unsigned int loaded_word;
  int input_value;
  int input_value_2;
  int integer_sum;
  int integer_sum_2;

  if ( a2 >= a3 )
    input_value = a3;
  else
    input_value = a2;
  if ( a2 <= a3 )
    input_value_2 = a3;
  else
    input_value_2 = a2;
  if ( a2 >= a3 + 1 )
    integer_sum = a3 + 1;
  else
    integer_sum = a2;
  if ( a2 <= a3 + 1 )
    integer_sum_2 = a3 + 1;
  else
    integer_sum_2 = a2;
  loaded_word = sub_14019B0A0(a4, *((_DWORD *)*(&off_14027E020 + integer_sum) + integer_sum_2) + *((_DWORD *)*(&off_14027E020 + input_value) + input_value_2));
  return sub_1401B5990(a2, a3, loaded_word, a1);
}

//----- (00000001401A27F0) ----------------------------------------------------
__int64            sub_1401A27F0(int a1)
{
  if ( a1 >= 8 )
    return (unsigned int)(((a1 & 7) + 8) << ((a1 >> 3) - 1));
  else
    return (unsigned int)a1;
}

//----- (00000001401A2830) ----------------------------------------------------
__int64            sub_1401A2830(__int64 a1, int a2, int a3, int a4)
{
  int shifted_bits;
  int shifted_bits_2;
  int i;
  int integer_difference;
  unsigned __int8 *loaded_record_pointer;
  int integer_difference_2;

  loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                         + *(__int16 *)(*(_QWORD *)(a1 + 136) + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1))));
  shifted_bits = 0;
  shifted_bits_2 = *loaded_record_pointer;
  integer_difference_2 = a4 - 1;
  for ( i = 0; i < 6; ++i )
  {
    if ( loaded_record_pointer[(shifted_bits + shifted_bits_2 + 1) >> 1] < integer_difference_2 )
      shifted_bits = (shifted_bits + shifted_bits_2 + 1) >> 1;
    else
      shifted_bits_2 = (shifted_bits + shifted_bits_2 + 1) >> 1;
  }
  if ( shifted_bits )
    integer_difference = loaded_record_pointer[shifted_bits];
  else
    integer_difference = -1;
  if ( integer_difference_2 - integer_difference > loaded_record_pointer[shifted_bits_2] - integer_difference_2 )
    return (unsigned int)shifted_bits_2;
  else
    return (unsigned int)shifted_bits;
}

//----- (00000001401A2960) ----------------------------------------------------
__int64            sub_1401A2960(__int64 a1, int a2, int a3, int a4)
{
  if ( a4 )
    return (unsigned int)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                                             + *(__int16 *)(*(_QWORD *)(a1 + 136)
                                                          + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1)))
                                             + a4)
                        + 1);
  else
    return 0;
}

//----- (00000001401A29F0) ----------------------------------------------------
int                sub_1401A29F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int *a7,
        int *a8,
        int a9,
        int *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        unsigned int *a16,
        int a17,
        int a18,
        int a19)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 scaled_index_2;
  void *alloca_result_2;
  unsigned __int64 scaled_index_3;
  void *alloca_result_3;
  unsigned __int64 scaled_index_4;
  void *alloca_result_4;
  int i;
  int shifted_bits;
  int saved_shifted_bits;
  int shifted_bits_2;
  int remaining_count;
  int loaded_word;
  int loaded_word_2;
  int record_byte_offset;
  int integer_difference;
  int cached_selection_code;
  int *saved_alloca_result;
  int shifted_bits_3;
  int selection_code;
  int selection_code_2;
  int shifted_bits_4;
  int table_value;
  int selection_flag;
  int saved_shifted_bits_2;
  int loaded_word_3;
  int shifted_bits_5;
  int table_value_2;
  int table_value_3;
  int integer_difference_2;
  int cached_selection_code_2;
  int cached_i;
  int input_value;
  int unused_written_slot;
  int cached_i_2;
  int loaded_word_4;
  int unused_written_slot_2;
  int loaded_word_5;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  int *saved_alloca_result_4;
  __int64 unused_local;
  int integer_difference_3;
  int integer_difference_4;

  if ( a9 <= 0 )
    input_value = 0;
  else
    input_value = a9;
  loaded_word = *(_DWORD *)(a1 + 8);
  cached_i = a2;
  if ( input_value < 8 )
    selection_code = 0;
  else
    selection_code = 8;
  cached_selection_code_2 = selection_code;
  integer_difference_3 = input_value - selection_code;
  cached_selection_code = 0;
  integer_difference = 0;
  if ( a14 == 2 )
  {
    integer_difference = byte_14027E388[a3 - a2];
    if ( integer_difference <= integer_difference_3 )
    {
      integer_difference_4 = integer_difference_3 - integer_difference;
      if ( integer_difference_4 < 8 )
        selection_code_2 = 0;
      else
        selection_code_2 = 8;
      cached_selection_code = selection_code_2;
      integer_difference_3 = integer_difference_4 - selection_code_2;
    }
    else
    {
      integer_difference = 0;
    }
  }
  scaled_index = 4LL * loaded_word + 15;
  if ( scaled_index <= 4LL * loaded_word )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_4 = (int *)alloca_result;
  scaled_index_2 = 4LL * loaded_word + 15;
  if ( scaled_index_2 <= 4LL * loaded_word )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = (int *)alloca_result_2;
  scaled_index_3 = 4LL * loaded_word + 15;
  if ( scaled_index_3 <= 4LL * loaded_word )
    scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result_3;
  scaled_index_4 = 4LL * loaded_word + 15;
  if ( scaled_index_4 <= 4LL * loaded_word )
    scaled_index_4 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(scaled_index_4 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result_4;
  for ( i = a2; i < a3; ++i )
  {
    loaded_word_5 = 3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i));
    if ( 8 * a14 <= (8 * (loaded_word_5 << a15)) >> 4 )
      shifted_bits_4 = (8
           * ((3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))) << a15)) >> 4;
    else
      shifted_bits_4 = 8 * a14;
    saved_alloca_result_2[i] = shifted_bits_4;
    saved_alloca_result[i] = ((1 << (a15 + 3))
            * (a3 - i - 1)
            * (a6 - 5 - a15)
            * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))
            * a14) >> 6;
    if ( (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a15 == 1 )
      saved_alloca_result[i] -= 8 * a14;
  }
  remaining_count = 1;
  loaded_word_2 = *(_DWORD *)(a1 + 52) - 1;
  do
  {
    selection_flag = 0;
    record_byte_offset = 0;
    shifted_bits_3 = (loaded_word_2 + remaining_count) >> 1;
    i = a3;
    while ( 1 )
    {
      cached_i_2 = i;
      unused_written_slot = a2;
      --i;
      if ( cached_i_2 <= a2 )
        break;
      loaded_word_4 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
      shifted_bits = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + loaded_word * shifted_bits_3) * loaded_word_4 * a14) << a15 >> 2;
      if ( shifted_bits > 0 )
      {
        if ( saved_alloca_result[i] + shifted_bits >= 0 )
          table_value = saved_alloca_result[i] + shifted_bits;
        else
          table_value = 0;
        shifted_bits = table_value;
      }
      shifted_bits += *(_DWORD *)(a4 + 4LL * i);
      if ( shifted_bits >= saved_alloca_result_2[i] || selection_flag )
      {
        selection_flag = 1;
        if ( shifted_bits >= *(_DWORD *)(a5 + 4LL * i) )
          saved_shifted_bits_2 = *(_DWORD *)(a5 + 4LL * i);
        else
          saved_shifted_bits_2 = shifted_bits;
        record_byte_offset += saved_shifted_bits_2;
      }
      else if ( shifted_bits >= 8 * a14 )
      {
        record_byte_offset += 8 * a14;
      }
    }
    if ( record_byte_offset <= integer_difference_3 )
      remaining_count = shifted_bits_3 + 1;
    else
      loaded_word_2 = shifted_bits_3 - 1;
  }
  while ( remaining_count <= loaded_word_2 );
  loaded_word_2 = remaining_count--;
  for ( i = a2; i < a3; ++i )
  {
    loaded_word_3 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
    shifted_bits_2 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + loaded_word * remaining_count) * loaded_word_3 * a14) << a15 >> 2;
    if ( loaded_word_2 < *(_DWORD *)(a1 + 52) )
      shifted_bits_5 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + loaded_word * loaded_word_2) * loaded_word_3 * a14) << a15 >> 2;
    else
      shifted_bits_5 = *(_DWORD *)(a5 + 4LL * i);
    saved_shifted_bits = shifted_bits_5;
    if ( shifted_bits_2 > 0 )
    {
      if ( saved_alloca_result[i] + shifted_bits_2 >= 0 )
        table_value_2 = saved_alloca_result[i] + shifted_bits_2;
      else
        table_value_2 = 0;
      shifted_bits_2 = table_value_2;
    }
    if ( saved_shifted_bits > 0 )
    {
      if ( saved_alloca_result[i] + saved_shifted_bits >= 0 )
        table_value_3 = saved_alloca_result[i] + saved_shifted_bits;
      else
        table_value_3 = 0;
      saved_shifted_bits = table_value_3;
    }
    if ( remaining_count > 0 )
      shifted_bits_2 += *(_DWORD *)(a4 + 4LL * i);
    saved_shifted_bits += *(_DWORD *)(a4 + 4LL * i);
    if ( *(int *)(a4 + 4LL * i) > 0 )
      cached_i = i;
    if ( saved_shifted_bits - shifted_bits_2 >= 0 )
      integer_difference_2 = saved_shifted_bits - shifted_bits_2;
    else
      integer_difference_2 = 0;
    saved_shifted_bits = integer_difference_2;
    saved_alloca_result_4[i] = shifted_bits_2;
    saved_alloca_result_3[i] = saved_shifted_bits;
  }
  unused_written_slot_2 = sub_1401B9070(
          a1,
          a2,
          a3,
          cached_i,
          (__int64)saved_alloca_result_4,
          (__int64)saved_alloca_result_3,
          (__int64)saved_alloca_result_2,
          a5,
          integer_difference_3,
          a10,
          cached_selection_code_2,
          a7,
          integer_difference,
          a8,
          cached_selection_code,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19);
  return unused_written_slot_2; /* original result ABI */
}

//----- (00000001401A32C0) ----------------------------------------------------
__int64            sub_1401A32C0(__int16 a1)
{
  __int16 shifted_bits;

  shifted_bits = (a1 * a1 + 4096) >> 13;
  return (unsigned int)((__int16)((((__int16)((((__int16)(((-626 * shifted_bits + 0x4000) >> 15) + 8277) * shifted_bits + 0x4000) >> 15)
                                            - 7651)
                                  * shifted_bits
                                  + 0x4000) >> 15)
                                + 0x7FFF
                                - shifted_bits)
                      + 1);
}

//----- (00000001401A3360) ----------------------------------------------------
__int64            sub_1401A3360(unsigned int a1, unsigned int a2)
{
  int call_result;
  int call_result_2;

  call_result_2 = sub_14019A020(a2) + 1;
  call_result = sub_14019A020(a1);
  return (unsigned int)((((__int16)(((-2597 * (__int16)(a1 << (15 - (call_result + 1))) + 0x4000) >> 15) + 7932)
                        * (__int16)(a1 << (15 - (call_result + 1)))
                        + 0x4000) >> 15)
                      + ((call_result + 1 - call_result_2) << 11)
                      - (((__int16)(((-2597 * (__int16)(a2 << (15 - call_result_2)) + 0x4000) >> 15) + 7932)
                        * (__int16)(a2 << (15 - call_result_2))
                        + 0x4000) >> 15));
}

//----- (00000001401A3450) ----------------------------------------------------
__int64            sub_1401A3450(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  float square_root;
  __int64 result;
  int i;
  signed int iteration_count;
  int shifted_bits;
  float squared_value;
  __int64 loaded_word;

  loaded_word = *(_QWORD *)(a1 + 32);
  shifted_bits = *(_DWORD *)(a1 + 48) << a6;
  iteration_count = 0;
  do
  {
    for ( i = 0; i < a4; ++i )
    {
      squared_value = sub_1401A9C00(
              a2 + 4LL * ((*(__int16 *)(loaded_word + 2LL * i) << a6) + shifted_bits * iteration_count),
              a2 + 4LL * ((*(__int16 *)(loaded_word + 2LL * i) << a6) + shifted_bits * iteration_count),
              (*(__int16 *)(loaded_word + 2LL * (i + 1)) - *(__int16 *)(loaded_word + 2LL * i)) << a6)
          + 1.0e-27;
      square_root = sqrt(squared_value);
      *(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + i)) = square_root;
    }
    ++iteration_count;
    result = a5;
  }
  while ( iteration_count < (int)a5 );
  return result;
}

//----- (00000001401A35F0) ----------------------------------------------------
__int64            sub_1401A35F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  __int64 result;
  int i;
  signed int iteration_count;
  int j;
  int loaded_word;
  float combined_products;
  __int64 loaded_word_2;

  loaded_word_2 = *(_QWORD *)(a1 + 32);
  loaded_word = *(_DWORD *)(a1 + 48) * a7;
  iteration_count = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      combined_products = 1.0 / (float)(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + i)) + 1.0e-27);
      for ( j = *(__int16 *)(loaded_word_2 + 2LL * i) * a7; j < *(__int16 *)(loaded_word_2 + 2LL * (i + 1)) * a7; ++j )
        *(float *)(a3 + 4LL * (loaded_word * iteration_count + j)) = *(float *)(a2 + 4LL * (loaded_word * iteration_count + j)) * combined_products;
    }
    ++iteration_count;
    result = a6;
  }
  while ( iteration_count < (int)a6 );
  return result;
}

//----- (00000001401A3740) ----------------------------------------------------
_WORD *           sub_1401A3740(__int64 a1, __int64 a2, float *a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  float exp_result;
  int i;
  int j;
  int loaded_word;
  int iteration_count;
  int loaded_word_2;
  float *buffer_cursor;
  int loaded_word_3;
  float weighted_sum;
  __int64 loaded_word_4;
  int loaded_word_5;
  float *buffer_cursor_2;

  loaded_word_4 = *(_QWORD *)(a1 + 32);
  loaded_word_2 = *(_DWORD *)(a1 + 48) * a7;
  loaded_word = *(__int16 *)(loaded_word_4 + 2LL * a6) * a7;
  if ( a8 != 1 )
  {
    if ( loaded_word >= loaded_word_2 / a8 )
      loaded_word_3 = loaded_word_2 / a8;
    else
      loaded_word_3 = *(__int16 *)(loaded_word_4 + 2LL * a6) * a7;
    loaded_word = loaded_word_3;
  }
  if ( a9 )
  {
    loaded_word = 0;
    a6 = 0;
    a5 = 0;
  }
  buffer_cursor = a3;
  buffer_cursor_2 = (float *)(a2 + 4LL * *(__int16 *)(loaded_word_4 + 2LL * a5) * a7);
  for ( i = 0; i < *(__int16 *)(loaded_word_4 + 2LL * a5) * a7; ++i )
    *buffer_cursor++ = 0.0;
  for ( j = a5; j < a6; ++j )
  {
    iteration_count = *(__int16 *)(loaded_word_4 + 2LL * j) * a7;
    loaded_word_5 = *(__int16 *)(loaded_word_4 + 2LL * (j + 1)) * a7;
    if ( (float)(*(float *)(a4 + 4LL * j) + flt_140282A10[j]) <= 32.0 )
      weighted_sum = *(float *)(a4 + 4LL * j) + flt_140282A10[j];
    else
      weighted_sum = 32.0;
    exp_result = exp(0.6931471805599453 * weighted_sum);
    do
    {
      *buffer_cursor++ = *buffer_cursor_2++ * exp_result;
      ++iteration_count;
    }
    while ( iteration_count < loaded_word_5 );
  }
  return crt_memset((void *)(uintptr_t)(&a3[loaded_word]), 0, 4LL * (loaded_word_2 - loaded_word));
}

//----- (00000001401A3A00) ----------------------------------------------------
__int64            sub_1401A3A00(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 unused_local;
  signed int record_byte_offset;
  int shifted_bits;
  int i;
  signed int loaded_word;
  signed int j;
  int iteration_count;
  int comparison_result;
  float weighted_sum;
  unsigned int running_total;
  BOOL comparison_result_2;
  BOOL comparison_result_3;
  BOOL comparison_result_4;
  int integer_sum;
  __int64 loaded_word_2;
  int loaded_word_3;
  __int64 loaded_word_4;
  int iteration_count_2;
  int iteration_count_3;
  int iteration_count_4;
  __int64 unused_local_2;

  shifted_bits = 0;
  running_total = 0;
  loaded_word_2 = *(_QWORD *)(a1 + 32);
  record_byte_offset = 0;
  loaded_word_3 = *(_DWORD *)(a1 + 48) * a10;
  if ( (*(__int16 *)(loaded_word_2 + 2LL * a8) - *(__int16 *)(loaded_word_2 + 2LL * (a8 - 1))) * a10 <= 8 )
    return 0; /* 0x1401A3AA8: xor eax, eax */
  {
    iteration_count = 0;
    do
    {
      for ( i = 0; i < a8; ++i )
      {
        integer_sum = 0;
        iteration_count_2 = 0;
        iteration_count_3 = 0;
        iteration_count_4 = 0;
        loaded_word_4 = a2 + 4LL * *(__int16 *)(loaded_word_2 + 2LL * i) * a10 + 4LL * loaded_word_3 * iteration_count;
        loaded_word = (*(__int16 *)(loaded_word_2 + 2LL * (i + 1)) - *(__int16 *)(loaded_word_2 + 2LL * i)) * a10;
        if ( loaded_word > 8 )
        {
          for ( j = 0; j < loaded_word; ++j )
          {
            weighted_sum = (float)(*(float *)(loaded_word_4 + 4LL * j) * *(float *)(loaded_word_4 + 4LL * j)) * (float)loaded_word;
            if ( weighted_sum < 0.25 )
              ++iteration_count_2;
            if ( weighted_sum < 0.0625 )
              ++iteration_count_3;
            if ( weighted_sum < 0.015625 )
              ++iteration_count_4;
          }
          if ( i > *(_DWORD *)(a1 + 8) - 4 )
            record_byte_offset += sub_14019A1A0(32 * (iteration_count_2 + iteration_count_3), loaded_word);
          comparison_result_3 = 2 * iteration_count_4 >= loaded_word;
          comparison_result_2 = 2 * iteration_count_3 >= loaded_word;
          comparison_result_4 = 2 * iteration_count_2 >= loaded_word;
          integer_sum = comparison_result_4 + comparison_result_2 + comparison_result_3;
          shifted_bits += *(_DWORD *)(a11 + 4LL * i) * integer_sum;
          running_total += *(_DWORD *)(a11 + 4LL * i);
        }
      }
      ++iteration_count;
    }
    while ( iteration_count < a9 );
    if ( a7 )
    {
      if ( record_byte_offset )
        record_byte_offset = sub_14019A1A0(record_byte_offset, (a8 + 4 - *(_DWORD *)(a1 + 8)) * a9);
      *a5 = (record_byte_offset + *a5) >> 1;
      record_byte_offset = *a5;
      if ( *a6 == 2 )
      {
        record_byte_offset += 4;
      }
      else if ( !*a6 )
      {
        record_byte_offset -= 4;
      }
      if ( record_byte_offset <= 22 )
        *a6 = record_byte_offset > 18;
      else
        *a6 = 2;
    }
    shifted_bits = (int)(*a3 + sub_14019A1A0(shifted_bits << 8, running_total)) >> 1;
    *a3 = shifted_bits;
    shifted_bits = (3 * shifted_bits + ((3 - a4) << 7) + 66) >> 2;
    if ( shifted_bits >= 80 )
    {
      if ( shifted_bits >= 256 )
        comparison_result = shifted_bits < 384;
      else
        comparison_result = 2;
    }
    else
    {
      comparison_result = 3;
    }
  }
  return (unsigned int)comparison_result; /* 0x1401A3EFB: mov eax, dword ptr [rsp + 0x38] */
}

//----- (00000001401A3F20) ----------------------------------------------------
__int64            sub_1401A3F20(__int64 a1, int a2, unsigned int a3)
{
  __int64 result;
  int j;
  int i;
  float weighted_sum;
  float weighted_sum_2;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a2 >> 1; ++j )
    {
      weighted_sum = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + j * 2 * a3));
      weighted_sum_2 = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3));
      *(float *)(a1 + 4LL * (int)(i + j * 2 * a3)) = weighted_sum + weighted_sum_2;
      *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3)) = weighted_sum - weighted_sum_2;
    }
  }
  return result;
}

//----- (00000001401A4050) ----------------------------------------------------
void               sub_1401A4050(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        void *a17,
        int a18,
        int a19,
        _DWORD *a20,
        int a21,
        int a22,
        int a23)
{
  unsigned __int64 loaded_word;
  void *alloca_result;
  unsigned __int64 scaled_index;
  void *alloca_result_2;
  unsigned __int64 scaled_index_2;
  void *alloca_result_3;
  unsigned __int64 scaled_index_3;
  void *alloca_result_4;
  unsigned __int64 scaled_index_4;
  void *alloca_result_5;
  unsigned __int64 scaled_index_5;
  void *alloca_result_6;
  unsigned __int64 scaled_index_6;
  void *alloca_result_7;
  float call_result;
  float call_result_2;
  float call_result_3;
  float call_result_4;
  int i;
  int shifted_bits;
  int loaded_word_2;
  int loaded_word_3;
  unsigned int cglobalutils_checkalignment_result;
  int saved_loaded_word;
  __int64 loaded_word_4;
  int option_flags;
  int *float_word;
  int integer_difference;
  BOOL saved_comparison_result;
  int callee_output_word;
  int call_result_5;
  int cached_loaded_word;
  void *source_buffer;
  void *Src;
  int loaded_word_5;
  int cached_i;
  int cached_selection_code;
  int j;
  int iteration_count;
  int iteration_count_2;
  BOOL callee_output_word_2;
  int remaining_count;
  __m128i *loaded_record_pointer;
  int loaded_word_6;
  BOOL saved_comparison_result_2;
  int call_result_6;
  void *source_buffer_2;
  void *source_buffer_3;
  BOOL comparison_result;
  int integer_difference_2;
  int loaded_word_7;
  int loaded_word_8;
  int saved_loaded_word_2;
  int loaded_word_9;
  int saved_loaded_word_3;
  int cached_loaded_word_2;
  int loaded_word_10;
  int unused_written_slot;
  unsigned int combined_flags;
  int byte_count;
  BOOL comparison_result_2;
  int saved_comparison_result_3;
  int loaded_word_11;
  int selection_code;
  BOOL comparison_result_3;
  BOOL condition_flag;
  int saved_shifted_bits;
  BOOL comparison_result_4;
  int *float_word_2;
  float comparison_operand;
  float unrecovered_register_value;
  void *source_buffer_4;
  void *source_buffer_5;
  void *source_buffer_6;
  void *shidword_result;
  float scaled_value;
  float weighted_sum;
  float weighted_sum_2;
  unsigned int saved_cglobalutils_checkalignment_result;
  int unused_written_slot_2;
  int unused_written_slot_3;
  float comparison_operand_2;
  float cached_unrecovered_register_value;
  float scaled_value_2;
  int unused_written_slot_4;
  float comparison_operand_3;
  float cached_unrecovered_register_value_2;
  int *state_address;
  __m128i *state_address_2;
  int *state_address_3;
  __m128i *state_address_4;
  int *state_address_5;
  __m128i *state_address_6;
  int *state_address_7;
  __m128i *state_address_8;
  int *state_address_9;
  __m128i *state_address_10;
  int *state_address_11;
  __m128i *state_address_12;
  _QWORD scratch_buffer[10];
  __m128i *saved_alloca_result;
  int *saved_alloca_result_2;
  _QWORD scratch_buffer_2[7];
  _BYTE scratch_buffer_3[56];
  _BYTE scratch_buffer_4[80];
  _BYTE scratch_buffer_5[80];
  __m128i source_buffer_7[80];
  __int64 unused_local;

  loaded_word_4 = *(_QWORD *)(a2 + 32);
  saved_comparison_result_3 = 1;
  if ( a6 )
    selection_code = 2;
  else
    selection_code = 1;
  cached_selection_code = selection_code;
  comparison_result_3 = a1 && a6 && !a12 && a21 >= 8;
  saved_comparison_result_2 = comparison_result_3;
  condition_flag = !a1 || saved_comparison_result_2;
  callee_output_word_2 = condition_flag;
  unused_written_slot_3 = 1;
  shifted_bits = 1 << a18;
  if ( a10 )
    saved_shifted_bits = shifted_bits;
  else
    saved_shifted_bits = 1;
  callee_output_word = saved_shifted_bits;
  loaded_word_3 = *(__int16 *)(loaded_word_4 + 2LL * a3) * shifted_bits;
  loaded_word = 4LL * (*(__int16 *)(loaded_word_4 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * shifted_bits - loaded_word_3) * cached_selection_code + 15;
  if ( loaded_word <= 4LL * (*(__int16 *)(loaded_word_4 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * shifted_bits - loaded_word_3) * cached_selection_code )
    loaded_word = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(loaded_word & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result;
  float_word = saved_alloca_result_2;
  float_word_2 = saved_alloca_result_2 + *(__int16 *)(loaded_word_4 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * shifted_bits - loaded_word_3;
  if ( a1 && callee_output_word_2 )
    loaded_word_5 = (*(__int16 *)(loaded_word_4 + 2LL * *(int *)(a2 + 8)) - *(__int16 *)(loaded_word_4 + 2LL * (*(_DWORD *)(a2 + 8) - 1))) * shifted_bits;
  else
    loaded_word_5 = 0;
  scaled_index = 4LL * loaded_word_5 + 15;
  if ( scaled_index <= 4LL * loaded_word_5 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (__m128i *)alloca_result_2;
  if ( a1 && callee_output_word_2 )
    loaded_record_pointer = saved_alloca_result;
  else
    loaded_record_pointer = (__m128i *)(a5 + 4LL * *(__int16 *)(loaded_word_4 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * shifted_bits);
  scaled_index_2 = 4LL * loaded_word_5 + 15;
  if ( scaled_index_2 <= 4LL * loaded_word_5 )
    scaled_index_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(scaled_index_2 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_2 = (int *)alloca_result_3;
  scaled_index_3 = 4LL * loaded_word_5 + 15;
  if ( scaled_index_3 <= 4LL * loaded_word_5 )
    scaled_index_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(scaled_index_3 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_3 = (int *)alloca_result_4;
  scaled_index_4 = 4LL * loaded_word_5 + 15;
  if ( scaled_index_4 <= 4LL * loaded_word_5 )
    scaled_index_4 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_5 = alloca(scaled_index_4 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_4 = (int *)alloca_result_5;
  scaled_index_5 = 4LL * loaded_word_5 + 15;
  if ( scaled_index_5 <= 4LL * loaded_word_5 )
    scaled_index_5 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_6 = alloca(scaled_index_5 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_5 = (int *)alloca_result_6;
  scaled_index_6 = 4LL * loaded_word_5 + 15;
  if ( scaled_index_6 <= 4LL * loaded_word_5 )
    scaled_index_6 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_7 = alloca(scaled_index_6 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_6 = (int *)alloca_result_7;
  cached_i = 0;
  scratch_buffer[6] = a8;
  scratch_buffer[4] = (uint64)(uintptr_t)(a17);
  scratch_buffer[0] = __PAIR64__(callee_output_word_2, a1);
  HIDWORD(scratch_buffer[2]) = a13;
  scratch_buffer[1] = a2;
  LODWORD(scratch_buffer[7]) = *a20;
  LODWORD(scratch_buffer[3]) = a11;
  HIDWORD(scratch_buffer[7]) = a22;
  HIDWORD(scratch_buffer[8]) = a23;
  LODWORD(scratch_buffer[8]) = 0;
  comparison_result_4 = callee_output_word > 1;
  LODWORD(scratch_buffer[9]) = comparison_result_4;
  for ( i = a3; i < a4; ++i )
  {
    saved_loaded_word = -1;
    loaded_word_6 = 0;
    LODWORD(scratch_buffer[2]) = i;
    comparison_result = i == a4 - 1;
    saved_comparison_result = comparison_result;
    Src = (void *)(a5 + 4LL * *(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits);
    if ( a6 )
      source_buffer = (void *)(a6 + 4LL * *(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits);
    else
      source_buffer = nullptr;
    loaded_word_2 = *(__int16 *)(loaded_word_4 + 2LL * (i + 1)) * shifted_bits - *(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits;
    call_result_6 = sub_14019A0E0((__int64)a17);
    if ( i != a3 )
      a16 -= call_result_6;
    integer_difference = a15 - call_result_6 - 1;
    LODWORD(scratch_buffer[5]) = integer_difference;
    if ( i > a19 - 1 )
    {
      cached_loaded_word = 0;
    }
    else
    {
      if ( a19 - i <= 3 )
        integer_difference_2 = a19 - i;
      else
        integer_difference_2 = 3;
      call_result_5 = sub_14019A1C0(a16, integer_difference_2);
      if ( integer_difference + 1 >= call_result_5 + *(_DWORD *)(a9 + 4LL * i) )
        loaded_word_7 = call_result_5 + *(_DWORD *)(a9 + 4LL * i);
      else
        loaded_word_7 = integer_difference + 1;
      if ( loaded_word_7 <= 0x3FFF )
      {
        if ( integer_difference + 1 >= call_result_5 + *(_DWORD *)(a9 + 4LL * i) )
          loaded_word_8 = call_result_5 + *(_DWORD *)(a9 + 4LL * i);
        else
          loaded_word_8 = integer_difference + 1;
        saved_loaded_word_2 = loaded_word_8;
      }
      else
      {
        saved_loaded_word_2 = 0x3FFF;
      }
      if ( saved_loaded_word_2 >= 0 )
      {
        if ( integer_difference + 1 >= call_result_5 + *(_DWORD *)(a9 + 4LL * i) )
          loaded_word_11 = call_result_5 + *(_DWORD *)(a9 + 4LL * i);
        else
          loaded_word_11 = integer_difference + 1;
        if ( loaded_word_11 <= 0x3FFF )
        {
          if ( integer_difference + 1 >= call_result_5 + *(_DWORD *)(a9 + 4LL * i) )
            loaded_word_9 = call_result_5 + *(_DWORD *)(a9 + 4LL * i);
          else
            loaded_word_9 = integer_difference + 1;
          saved_loaded_word_3 = loaded_word_9;
        }
        else
        {
          saved_loaded_word_3 = 0x3FFF;
        }
        cached_loaded_word_2 = saved_loaded_word_3;
      }
      else
      {
        cached_loaded_word_2 = 0;
      }
      cached_loaded_word = cached_loaded_word_2;
    }
    if ( callee_output_word_2
      && (*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_2 >= *(__int16 *)(loaded_word_4 + 2LL * a3) * shifted_bits || i == a3 + 1)
      && (saved_comparison_result_3 || !cached_i) )
    {
      cached_i = i;
    }
    if ( i == a3 + 1 )
      sub_1401AD210(a2, (__int64)float_word, (__int64)float_word_2, a3, shifted_bits, a12);
    loaded_word_6 = *(_DWORD *)(a14 + 4LL * i);
    HIDWORD(scratch_buffer[3]) = loaded_word_6;
    if ( i >= *(_DWORD *)(a2 + 12) )
    {
      Src = float_word;
      if ( a6 )
        source_buffer = float_word;
      loaded_record_pointer = nullptr;
    }
    if ( saved_comparison_result && !saved_comparison_result_2 )
      loaded_record_pointer = nullptr;
    if ( !cached_i || a11 == 3 && callee_output_word <= 1 && loaded_word_6 >= 0 )
    {
      unused_written_slot_2 = 1;
      option_flags = (1 << callee_output_word) - 1;
      cglobalutils_checkalignment_result = option_flags;
    }
    else
    {
      if ( *(__int16 *)(loaded_word_4 + 2LL * cached_i) * shifted_bits - loaded_word_3 - loaded_word_2 >= 0 )
        loaded_word_10 = *(__int16 *)(loaded_word_4 + 2LL * cached_i) * shifted_bits - loaded_word_3 - loaded_word_2;
      else
        loaded_word_10 = 0;
      saved_loaded_word = loaded_word_10;
      remaining_count = cached_i;
      do
        --remaining_count;
      while ( *(__int16 *)(loaded_word_4 + 2LL * remaining_count) * shifted_bits > loaded_word_3 + saved_loaded_word );
      iteration_count = cached_i - 1;
      do
        ++iteration_count;
      while ( iteration_count < i && *(__int16 *)(loaded_word_4 + 2LL * iteration_count) * shifted_bits < loaded_word_2 + loaded_word_3 + saved_loaded_word );
      option_flags = 0;
      cglobalutils_checkalignment_result = 0;
      iteration_count_2 = remaining_count;
      do
      {
        cglobalutils_checkalignment_result |= *(unsigned __int8 *)(a7 + cached_selection_code * iteration_count_2);
        option_flags |= *(unsigned __int8 *)(a7 + cached_selection_code * iteration_count_2++ + cached_selection_code - 1);
      }
      while ( iteration_count_2 < iteration_count );
    }
    if ( a12 )
    {
      if ( i == a13 )
      {
        a12 = 0;
        if ( callee_output_word_2 )
        {
          for ( j = 0; j < *(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3; ++j )
            *(float *)&float_word[j] = 0.5 * (float)(*(float *)&float_word[j] + *(float *)&float_word_2[j]);
        }
      }
    }
    if ( a12 )
    {
      if ( saved_comparison_result )
        state_address = nullptr;
      else
        state_address = &float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
      if ( saved_loaded_word == -1 )
        state_address_2 = nullptr;
      else
        state_address_2 = (__m128i *)&float_word[saved_loaded_word];
      cglobalutils_checkalignment_result = sub_1401AC060((int *)scratch_buffer, (float *)Src, loaded_word_2, cached_loaded_word / 2, callee_output_word, state_address_2, a18, state_address, 1.0, loaded_record_pointer, cglobalutils_checkalignment_result);
      if ( saved_comparison_result )
        state_address_3 = nullptr;
      else
        state_address_3 = &float_word_2[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
      if ( saved_loaded_word == -1 )
        state_address_4 = nullptr;
      else
        state_address_4 = (__m128i *)&float_word_2[saved_loaded_word];
      option_flags = sub_1401AC060((int *)scratch_buffer, (float *)source_buffer, loaded_word_2, cached_loaded_word / 2, callee_output_word, state_address_4, a18, state_address_3, 1.0, loaded_record_pointer, option_flags);
    }
    else
    {
      if ( source_buffer )
      {
        if ( saved_comparison_result_2 && i < a13 )
        {
          sub_1401A9E10(*(float *)(a8 + 4LL * i), *(float *)(a8 + 4LL * (*(_DWORD *)(a2 + 8) + i)), &comparison_operand);
          combined_flags = option_flags | cglobalutils_checkalignment_result;
          qmemcpy(scratch_buffer_2, a17, sizeof(scratch_buffer_2));
          qmemcpy(scratch_buffer_4, scratch_buffer, sizeof(scratch_buffer_4));
          crt_memcpy((__m128i *)source_buffer_2, (     __m128i *)Src, 4LL * loaded_word_2);
          crt_memcpy((__m128i *)source_buffer_3, (     __m128i *)source_buffer, 4LL * loaded_word_2);
          LODWORD(scratch_buffer[8]) = -1;
          if ( saved_comparison_result )
            state_address_5 = nullptr;
          else
            state_address_5 = &float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
          if ( saved_loaded_word == -1 )
            state_address_6 = nullptr;
          else
            state_address_6 = (__m128i *)&float_word[saved_loaded_word];
          cglobalutils_checkalignment_result = CGlobalUtils__CheckAlignment(
                  (__int64)scratch_buffer,
                  (float *)Src,
                  (float *)source_buffer,
                  loaded_word_2,
                  cached_loaded_word,
                  callee_output_word,
                  state_address_6,
                  a18,
                  state_address_5,
                  loaded_record_pointer,
                  combined_flags);
          comparison_operand_2 = comparison_operand;
          call_result = sub_1401A9C00((__int64)source_buffer_2, (__int64)Src, loaded_word_2);
          scaled_value_2 = comparison_operand_2 * call_result;
          cached_unrecovered_register_value = unrecovered_register_value;
          call_result_2 = sub_1401A9C00((__int64)source_buffer_3, (__int64)source_buffer, loaded_word_2);
          weighted_sum = scaled_value_2 + (float)(cached_unrecovered_register_value * call_result_2);
          saved_cglobalutils_checkalignment_result = cglobalutils_checkalignment_result;
          qmemcpy(scratch_buffer_3, a17, sizeof(scratch_buffer_3));
          qmemcpy(scratch_buffer_5, scratch_buffer, sizeof(scratch_buffer_5));
          crt_memcpy((__m128i *)source_buffer_4, (     __m128i *)Src, 4LL * loaded_word_2);
          crt_memcpy((__m128i *)source_buffer_5, (     __m128i *)source_buffer, 4LL * loaded_word_2);
          if ( !saved_comparison_result )
            crt_memcpy(
              (__m128i *)source_buffer_6,
              (     __m128i *)&float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3],
              4LL * loaded_word_2);
          unused_written_slot = HIDWORD(scratch_buffer_2[3]);
          unused_written_slot_4 = scratch_buffer_2[1];
          shidword_result = (void *)(SHIDWORD(scratch_buffer_2[3]) + scratch_buffer_2[0]);
          byte_count = LODWORD(scratch_buffer_2[1]) - HIDWORD(scratch_buffer_2[3]);
          crt_memcpy(source_buffer_7, (     __m128i *)shidword_result, LODWORD(scratch_buffer_2[1]) - HIDWORD(scratch_buffer_2[3]));
          qmemcpy(a17, scratch_buffer_2, 0x38u);
          qmemcpy(scratch_buffer, scratch_buffer_4, sizeof(scratch_buffer));
          crt_memcpy((__m128i *)Src, (     __m128i *)source_buffer_2, 4LL * loaded_word_2);
          crt_memcpy((__m128i *)source_buffer, (     __m128i *)source_buffer_3, 4LL * loaded_word_2);
          if ( i == a3 + 1 )
            sub_1401AD210(a2, (__int64)float_word, (__int64)float_word_2, a3, shifted_bits, 0);
          LODWORD(scratch_buffer[8]) = 1;
          if ( saved_comparison_result )
            state_address_7 = nullptr;
          else
            state_address_7 = &float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
          if ( saved_loaded_word == -1 )
            state_address_8 = nullptr;
          else
            state_address_8 = (__m128i *)&float_word[saved_loaded_word];
          cglobalutils_checkalignment_result = CGlobalUtils__CheckAlignment(
                  (__int64)scratch_buffer,
                  (float *)Src,
                  (float *)source_buffer,
                  loaded_word_2,
                  cached_loaded_word,
                  callee_output_word,
                  state_address_8,
                  a18,
                  state_address_7,
                  loaded_record_pointer,
                  combined_flags);
          comparison_operand_3 = comparison_operand;
          call_result_3 = sub_1401A9C00((__int64)source_buffer_2, (__int64)Src, loaded_word_2);
          scaled_value = comparison_operand_3 * call_result_3;
          cached_unrecovered_register_value_2 = unrecovered_register_value;
          call_result_4 = sub_1401A9C00((__int64)source_buffer_3, (__int64)source_buffer, loaded_word_2);
          weighted_sum_2 = scaled_value + (float)(cached_unrecovered_register_value_2 * call_result_4);
          if ( weighted_sum >= weighted_sum_2 )
          {
            cglobalutils_checkalignment_result = saved_cglobalutils_checkalignment_result;
            qmemcpy(a17, scratch_buffer_3, 0x38u);
            qmemcpy(scratch_buffer, scratch_buffer_5, sizeof(scratch_buffer));
            crt_memcpy((__m128i *)Src, (     __m128i *)source_buffer_4, 4LL * loaded_word_2);
            crt_memcpy((__m128i *)source_buffer, (     __m128i *)source_buffer_5, 4LL * loaded_word_2);
            if ( !saved_comparison_result )
              crt_memcpy(
                (__m128i *)&float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3],
                (     __m128i *)source_buffer_6,
                4LL * loaded_word_2);
            crt_memcpy((__m128i *)shidword_result, source_buffer_7, byte_count);
          }
        }
        else
        {
          LODWORD(scratch_buffer[8]) = 0;
          if ( saved_comparison_result )
            state_address_9 = nullptr;
          else
            state_address_9 = &float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
          if ( saved_loaded_word == -1 )
            state_address_10 = nullptr;
          else
            state_address_10 = (__m128i *)&float_word[saved_loaded_word];
          cglobalutils_checkalignment_result = CGlobalUtils__CheckAlignment(
                  (__int64)scratch_buffer,
                  (float *)Src,
                  (float *)source_buffer,
                  loaded_word_2,
                  cached_loaded_word,
                  callee_output_word,
                  state_address_10,
                  a18,
                  state_address_9,
                  loaded_record_pointer,
                  option_flags | cglobalutils_checkalignment_result);
        }
      }
      else
      {
        if ( saved_comparison_result )
          state_address_11 = nullptr;
        else
          state_address_11 = &float_word[*(__int16 *)(loaded_word_4 + 2LL * i) * shifted_bits - loaded_word_3];
        if ( saved_loaded_word == -1 )
          state_address_12 = nullptr;
        else
          state_address_12 = (__m128i *)&float_word[saved_loaded_word];
        cglobalutils_checkalignment_result = sub_1401AC060((int *)scratch_buffer, (float *)Src, loaded_word_2, cached_loaded_word, callee_output_word, state_address_12, a18, state_address_11, 1.0, loaded_record_pointer, option_flags | cglobalutils_checkalignment_result);
      }
      option_flags = cglobalutils_checkalignment_result;
    }
    *(_BYTE *)(a7 + cached_selection_code * i) = cglobalutils_checkalignment_result;
    *(_BYTE *)(a7 + cached_selection_code * i + cached_selection_code - 1) = option_flags;
    a16 += call_result_6 + *(_DWORD *)(a9 + 4LL * i);
    comparison_result_2 = cached_loaded_word > 8 * loaded_word_2;
    saved_comparison_result_3 = comparison_result_2;
    LODWORD(scratch_buffer[9]) = 0;
  }
  *a20 = scratch_buffer[7];
  return ; /* original result ABI */
}

//----- (00000001401A5710) ----------------------------------------------------
__int64            sub_1401A5710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 result;
  float exp_result;
  float square_root;
  float exp_result_2;
  float scaled_value;
  int iteration_count;
  float weighted_sum;
  float weighted_sum_2;
  int i;
  signed int j;
  signed int loaded_word;
  float weighted_sum_3;
  float weighted_sum_4;
  float saved_weighted_sum;
  float combined_products;
  float scaled_value_2;
  float saved_scaled_value;
  float product_difference;
  int selection_flag;
  signed int shifted_bits;
  float scaled_ratio;
  float *shifted_bits_2;

  while ( 1 )
  {
    result = a8;
    if ( a7 >= (int)a8 )
      break;
    loaded_word = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a7 + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7);
    shifted_bits = (unsigned int)sub_14019A1A0(*(_DWORD *)(a12 + 4LL * a7) + 1, loaded_word) >> a4;
    exp_result = exp(0.6931471805599453 * (float)(-0.125 * (float)shifted_bits));
    scaled_value_2 = 0.5 * exp_result;
    square_root = sqrt((double)(loaded_word << a4));
    scaled_ratio = 1.0 / square_root;
    iteration_count = 0;
    do
    {
      selection_flag = 0;
      weighted_sum = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count));
      weighted_sum_2 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count));
      if ( a5 == 1 )
      {
        if ( weighted_sum <= *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          weighted_sum_3 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          weighted_sum_3 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count));
        weighted_sum = weighted_sum_3;
        if ( weighted_sum_2 <= *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          weighted_sum_4 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          weighted_sum_4 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count));
        weighted_sum_2 = weighted_sum_4;
      }
      if ( weighted_sum_2 <= weighted_sum )
        saved_weighted_sum = weighted_sum_2;
      else
        saved_weighted_sum = weighted_sum;
      if ( (float)(*(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count)) - saved_weighted_sum) >= 0.0 )
        combined_products = *(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * iteration_count)) - saved_weighted_sum;
      else
        combined_products = 0.0;
      exp_result_2 = exp(0.6931471805599453 * (float)-combined_products);
      scaled_value = 2.0 * exp_result_2;
      if ( a4 == 3 )
        scaled_value = scaled_value * 1.4142135;
      if ( scaled_value <= scaled_value_2 )
        saved_scaled_value = scaled_value;
      else
        saved_scaled_value = scaled_value_2;
      shifted_bits_2 = (float *)(a2 + 4LL * a6 * iteration_count + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7) << a4));
      for ( i = 0; i < 1 << a4; ++i )
      {
        if ( ((1 << i) & *(unsigned __int8 *)(a3 + iteration_count + a5 * a7)) == 0 )
        {
          for ( j = 0; j < loaded_word; ++j )
          {
            a13 = sub_1401A5C70(a13);
            if ( (a13 & 0x8000) != 0 )
              product_difference = saved_scaled_value * scaled_ratio;
            else
              product_difference = -(float)(saved_scaled_value * scaled_ratio);
            shifted_bits_2[i + (j << a4)] = product_difference;
          }
          selection_flag = 1;
        }
      }
      if ( selection_flag )
        sub_1401A6800(shifted_bits_2, loaded_word << a4, 1.0);
      ++iteration_count;
    }
    while ( iteration_count < a5 );
    ++a7;
  }
  return result;
}

//----- (00000001401A5C70) ----------------------------------------------------
__int64            sub_1401A5C70(int a1)
{
  return (unsigned int)(1664525 * a1 + 1013904223);
}

//----- (00000001401A5C90) ----------------------------------------------------
__int64            sub_1401A5C90(float a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  signed int i;

  for ( i = 0; i < a4 && *(float *)(a2 + 4LL * i) <= a1; ++i )
    ;
  if ( i > a5 && (float)(*(float *)(a2 + 4LL * a5) + *(float *)(a3 + 4LL * a5)) > a1 )
    i = a5;
  if ( i < a5 && a1 > (float)(*(float *)(a2 + 4LL * (a5 - 1)) - *(float *)(a3 + 4LL * (a5 - 1))) )
    return (unsigned int)a5;
  return (unsigned int)i;
}

//----- (00000001401A5D70) ----------------------------------------------------
__int64            sub_1401A5D70(__int64 a1, signed int a2, int a3, signed int a4, int a5, int a6)
{
  __int64 result;
  float cosine_value;
  float cosine_value_2;
  int i;
  signed int j;
  float saved_cosine_value;
  float combined_products;
  float squared_component;
  int call_result;

  i = 0;
  result = (unsigned int)(2 * a5);
  if ( (int)result < a2 && a6 )
  {
    combined_products = (float)(1.0 * (float)a2) / (float)(a5 * dword_1402821F0[a6 - 1] + a2);
    squared_component = 0.5 * (float)(combined_products * combined_products);
    cosine_value = cos((float)(1.5707964 * squared_component));
    saved_cosine_value = cosine_value;
    cosine_value_2 = cos((float)(1.5707964 * (float)(1.0 - squared_component)));
    if ( a2 >= 8 * a4 )
    {
      for ( i = 1; (a4 >> 2) + a4 * (i + i * i) < a2; ++i )
        ;
    }
    call_result = sub_14019A1A0(a2, a4);
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a4;
      if ( j >= a4 )
        break;
      if ( a3 >= 0 )
      {
        sub_1401BA120((float *)(a1 + 4LL * call_result * j), call_result, 1, saved_cosine_value, -cosine_value_2);
        if ( i )
          sub_1401BA120((float *)(a1 + 4LL * call_result * j), call_result, i, cosine_value_2, -saved_cosine_value);
      }
      else
      {
        if ( i )
          sub_1401BA120((float *)(a1 + 4LL * call_result * j), call_result, i, cosine_value_2, saved_cosine_value);
        sub_1401BA120((float *)(a1 + 4LL * call_result * j), call_result, 1, saved_cosine_value, cosine_value_2);
      }
    }
  }
  return result;
}

//----- (00000001401A6000) ----------------------------------------------------
float            sub_1401A6000(float *a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_2;
  float scaled_value;
  double floor_result;
  int element_index;
  float scaled_index;
  float squared_component;
  int remaining_amount;
  int saved_element_index;
  float component_sum;
  float weighted_sum;
  float *saved_alloca_result;
  float weighted_sum_2;
  float unused_written_slot;
  int i;
  BOOL comparison_result;
  float saved_weighted_sum;
  float saved_squared_component;
  float weighted_sum_3;
  int *saved_alloca_result_2;
  __int64 unused_local;

  record_word_offset = 4LL * a4 + 15;
  if ( record_word_offset <= 4LL * a4 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (float *)alloca_result;
  record_word_offset_2 = 4LL * a4 + 15;
  if ( record_word_offset_2 <= 4LL * a4 )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result_2;
  component_sum = 0.0;
  element_index = 0;
  do
  {
    comparison_result = a1[element_index] < 0.0;
    saved_alloca_result_2[element_index] = comparison_result;
    scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(a1[element_index]), u64);
    a1[element_index] = scaled_value;
    a2[element_index] = 0;
    saved_alloca_result[element_index++] = 0.0;
  }
  while ( element_index < a4 );
  scaled_index = 0.0;
  weighted_sum = 0.0;
  remaining_amount = a3;
  if ( a3 > a4 >> 1 )
  {
    element_index = 0;
    do
      component_sum = component_sum + a1[element_index++];
    while ( element_index < a4 );
    if ( component_sum <= 1.0e-15 || component_sum >= 64.0 )
    {
      *a1 = 1.0;
      element_index = 1;
      do
        a1[element_index++] = 0.0;
      while ( element_index < a4 );
      component_sum = 1.0;
    }
    weighted_sum_3 = (float)((float)a3 + 0.80000001) * (float)(1.0 / component_sum);
    element_index = 0;
    do
    {
      floor_result = floor((float)(weighted_sum_3 * a1[element_index]));
      a2[element_index] = (int)floor_result;
      saved_alloca_result[element_index] = (float)(int)a2[element_index];
      scaled_index = scaled_index + (float)(saved_alloca_result[element_index] * saved_alloca_result[element_index]);
      weighted_sum = weighted_sum + (float)(a1[element_index] * saved_alloca_result[element_index]);
      saved_alloca_result[element_index] = saved_alloca_result[element_index] * 2.0;
      remaining_amount -= a2[element_index++];
    }
    while ( element_index < a4 );
  }
  if ( remaining_amount > a4 + 3 )
  {
    unused_written_slot = (float)remaining_amount;
    scaled_index = scaled_index + (float)((float)remaining_amount * (float)remaining_amount);
    scaled_index = scaled_index + (float)((float)remaining_amount * *saved_alloca_result);
    *a2 += remaining_amount;
    remaining_amount = 0;
  }
  for ( i = 0; i < remaining_amount; ++i )
  {
    saved_element_index = 0;
    scaled_index = scaled_index + 1.0;
    squared_component = weighted_sum + *a1;
    weighted_sum_2 = scaled_index + *saved_alloca_result;
    squared_component = squared_component * squared_component;
    saved_weighted_sum = weighted_sum_2;
    saved_squared_component = squared_component;
    element_index = 1;
    do
    {
      squared_component = weighted_sum + a1[element_index];
      weighted_sum_2 = scaled_index + saved_alloca_result[element_index];
      squared_component = squared_component * squared_component;
      if ( (float)(saved_weighted_sum * squared_component) > (float)(weighted_sum_2 * saved_squared_component) )
      {
        saved_weighted_sum = weighted_sum_2;
        saved_squared_component = squared_component;
        saved_element_index = element_index;
      }
      ++element_index;
    }
    while ( element_index < a4 );
    weighted_sum = weighted_sum + a1[saved_element_index];
    scaled_index = scaled_index + saved_alloca_result[saved_element_index];
    saved_alloca_result[saved_element_index] = saved_alloca_result[saved_element_index] + 2.0;
    ++a2[saved_element_index];
  }
  element_index = 0;
  do
  {
    a2[element_index] = saved_alloca_result_2[element_index] + (-saved_alloca_result_2[element_index] ^ a2[element_index]);
    ++element_index;
  }
  while ( element_index < a4 );
  return scaled_index; /* 0x1401A65AE: movss xmm0, dword ptr [rbp + 4] */
}

//----- (00000001401A65D0) ----------------------------------------------------
__int64            sub_1401A65D0(float *a1, unsigned int a2, int a3, int a4, int a5, _DWORD *a6, float a7, int a8)
{
  float unused_local;
  unsigned __int64 scaled_index;
  void *alloca_result;
  _DWORD *saved_alloca_result;
  float call_result;
  int call_result_2;
  __int64 unused_local_2;

  scaled_index = 4LL * (int)(a2 + 3) + 15;
  if ( scaled_index <= 4LL * (int)(a2 + 3) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  sub_1401A5D70((__int64)a1, a2, 1, a5, a3, a4);
  call_result = sub_1401A6000(a1, saved_alloca_result, a3, a2); /* 0x1401A6675: movss dword ptr [rbp + 8], xmm0 */
  sub_1401A2610((__int64)saved_alloca_result, a2, a3, a6);
  if ( a8 )
  {
    sub_1401BA2F0((__int64)saved_alloca_result, (__int64)a1, a2, call_result, a7);
    sub_1401A5D70((__int64)a1, a2, -1, a5, a3, a4);
  }
  call_result_2 = sub_1401BA3A0((__int64)saved_alloca_result, a2, a5);
  return (unsigned int)call_result_2; /* 0x1401A66EC: mov eax, dword ptr [rbp + 0xc] */
}

//----- (00000001401A6710) ----------------------------------------------------
__int64            sub_1401A6710(__int64 a1, signed int a2, int a3, int a4, int a5, unsigned int *a6, float a7)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  float float_buffer[2];
  float *saved_alloca_result;
  __int64 unused_local;

  record_word_offset = 4LL * a2 + 15;
  if ( record_word_offset <= 4LL * a2 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result;
  float_buffer[0] = sub_1401A2700(float_buffer, a2, a3, a6);
  sub_1401BA2F0((__int64)saved_alloca_result, a1, a2, float_buffer[0], a7);
  sub_1401A5D70(a1, a2, -1, a5, a3, a4);
  LODWORD(float_buffer[1]) = sub_1401BA3A0((__int64)saved_alloca_result, a2, a5);
  return (unsigned int)LODWORD(float_buffer[1]); /* 0x1401A67E2: mov eax, dword ptr [rbp + 4] */
}

//----- (00000001401A6800) ----------------------------------------------------
__int64            sub_1401A6800(float *a1, int a2, float a3)
{
  float square_root;
  __int64 result;
  int i;
  float squared_value;
  float *buffer_cursor;

  squared_value = sub_1401A9C00((__int64)a1, (__int64)a1, a2) + 1.0e-15;
  square_root = sqrt(squared_value);
  buffer_cursor = a1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i >= a2 )
      break;
    *buffer_cursor = (float)((float)(1.0 / square_root) * a3) * *buffer_cursor;
    ++buffer_cursor;
  }
  return result;
}

//----- (00000001401A68E0) ----------------------------------------------------
__int64            sub_1401A68E0(__int64 a1, __int64 a2, int a3, int a4)
{
  float square_root;
  float square_root_2;
  float call_result;
  int i;
  float squared_value;
  float squared_value_2;
  float weighted_sum;
  float combined_products;
  float saved_square_root;

  squared_value = 1.0e-15;
  squared_value_2 = 1.0e-15;
  if ( a3 )
  {
    for ( i = 0; i < a4; ++i )
    {
      weighted_sum = *(float *)(a1 + 4LL * i) + *(float *)(a2 + 4LL * i);
      combined_products = *(float *)(a1 + 4LL * i) - *(float *)(a2 + 4LL * i);
      squared_value_2 = squared_value_2 + (float)(weighted_sum * weighted_sum);
      squared_value = squared_value + (float)(combined_products * combined_products);
    }
  }
  else
  {
    squared_value_2 = sub_1401A9C00(a1, a1, a4) + 1.0e-15;
    squared_value = sub_1401A9C00(a2, a2, a4) + 1.0e-15;
  }
  square_root = sqrt(squared_value_2);
  saved_square_root = square_root;
  square_root_2 = sqrt(squared_value);
  call_result = sub_1401A6B90(square_root_2, saved_square_root);
  return (unsigned int)(int)floor((float)((float)(10430.382 * call_result) + 0.5));
}

//----- (00000001401A6AA0) ----------------------------------------------------
__int64            sub_1401A6AA0(__int64 a1)
{
  return sr_path_malloc(a1);
}

//----- (00000001401A6AC0) ----------------------------------------------------
void            sub_1401A6AC0(void *a1)
{
  free(a1);
}

//----- (00000001401A6AE0) ----------------------------------------------------
__int64            sub_1401A6AE0(unsigned int a1)
{
  int remaining_count;
  unsigned int remaining_bits;
  unsigned int running_total;
  unsigned int shifted_bits;
  unsigned int remaining_amount;

  remaining_amount = a1;
  running_total = 0;
  remaining_count = (int)sub_14019A020(a1) >> 1;
  remaining_bits = 1 << remaining_count;
  do
  {
    shifted_bits = (remaining_bits + 2 * running_total) << remaining_count;
    if ( shifted_bits <= remaining_amount )
    {
      running_total += remaining_bits;
      remaining_amount -= shifted_bits;
    }
    remaining_bits >>= 1;
    --remaining_count;
  }
  while ( remaining_count >= 0 );
  return running_total;
}

//----- (00000001401A6B90) ----------------------------------------------------
float            sub_1401A6B90(float a1, float a2)
{
  float squared_component;
  float squared_component_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;

  squared_component_2 = a2 * a2;
  squared_component = a1 * a1;
  if ( (float)((float)(a2 * a2) + (float)(a1 * a1)) < 1.0e-18 )
    return 0.0;
  if ( squared_component <= squared_component_2 )
  {
    if ( a1 >= 0.0 )
      component_delta_2 = 1.5707964;
    else
      component_delta_2 = -1.5707964;
    if ( (float)(a2 * a1) >= 0.0 )
      component_delta_3 = 1.5707964;
    else
      component_delta_3 = -1.5707964;
    return (float)((float)((float)((float)(a2 * a1) * (float)(squared_component_2 + (float)(0.43157974 * squared_component)))
                         / (float)((float)(squared_component_2 + (float)(0.67848402 * squared_component)) * (float)(squared_component_2 + (float)(0.085955419 * squared_component))))
                 + component_delta_2)
         - component_delta_3;
  }
  else
  {
    if ( a1 >= 0.0 )
      component_delta = 1.5707964;
    else
      component_delta = -1.5707964;
    return (float)((float)((float)((float)-a2 * a1) * (float)(squared_component + (float)(0.43157974 * squared_component_2)))
                 / (float)((float)(squared_component + (float)(0.67848402 * squared_component_2)) * (float)(squared_component + (float)(0.085955419 * squared_component_2))))
         + component_delta;
  }
}

//----- (00000001401A6D80) ----------------------------------------------------
float            sub_1401A6D80(__int64 a1, int a2)
{
  int i;
  float saved_weighted_sum;
  float saved_weighted_sum_2;
  float weighted_sum;
  float weighted_sum_2;

  saved_weighted_sum = 0.0;
  saved_weighted_sum_2 = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    if ( saved_weighted_sum <= *(float *)(a1 + 4LL * i) )
      weighted_sum = *(float *)(a1 + 4LL * i);
    else
      weighted_sum = saved_weighted_sum;
    saved_weighted_sum = weighted_sum;
    if ( *(float *)(a1 + 4LL * i) <= saved_weighted_sum_2 )
      weighted_sum_2 = *(float *)(a1 + 4LL * i);
    else
      weighted_sum_2 = saved_weighted_sum_2;
    saved_weighted_sum_2 = weighted_sum_2;
  }
  if ( saved_weighted_sum <= (float)-saved_weighted_sum_2 )
    return -saved_weighted_sum_2;
  else
    return saved_weighted_sum;
}

//----- (00000001401A6EA0) ----------------------------------------------------
__int64            sub_1401A6EA0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  float log_result;
  __int64 result;
  int i;
  int j;
  signed int iteration_count;

  iteration_count = 0;
  do
  {
    for ( i = 0; i < a2; ++i )
    {
      log_result = 1.442695040888963 * log(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + i)));
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + i)) = log_result - flt_140282A10[i];
    }
    for ( j = a2; j < a3; ++j )
      *(_DWORD *)(a5 + 4LL * (j + *(_DWORD *)(a1 + 8) * iteration_count)) = -1050673152;
    ++iteration_count;
    result = a6;
  }
  while ( iteration_count < (int)a6 );
  return result;
}

//----- (00000001401A6FC0) ----------------------------------------------------
void               sub_1401A6FC0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __m128i *a6,
        int a7,
        __m128i *a8,
        _DWORD *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float *a14,
        int a15,
        int a16,
        int a17)
{
  unsigned __int64 loaded_word;
  void *alloca_result;
  unsigned __int64 loaded_word_2;
  void *alloca_result_2;
  __int64 unknown_libname_996_result;
  unsigned __int64 table_value;
  void *alloca_result_3;
  int call_result;
  __m128i unrecovered_register_value;
  int call_result_2;
  int masked_bits;
  int unknown_libname_995_result;
  __m128i *source_buffer;
  BOOL comparison_result;
  __int32 float_word;
  int masked_bits_2;
  float weighted_sum;
       __m128i *source_buffer_2;
       __m128i *source_buffer_3;
  __m128i *source_buffer_4;
  int shifted_bits;
  int call_result_3;
  _BYTE scratch_buffer[56];
  _BYTE scratch_buffer_2[56];
  __int64 unused_local;

  masked_bits = 0;
  comparison_result = a13 || !a15 && *a14 > (float)((a3 - a2) * 2 * a10) && a12 > a10 * (a3 - a2);
  SR_VEC_LANES(128, unrecovered_register_value, i32)[0] = comparison_result;
  shifted_bits = (int)(float)((float)((float)((float)a7 * *a14) * (float)a16) / (float)(a10 << 9));
  weighted_sum = sub_1401B88F0(a5, (__int64)a6, a2, a4, *(_DWORD *)(a1 + 8), a10);
  call_result_2 = sub_14019A0A0((__int64)a9);
  if ( call_result_2 + 3 > (unsigned int)a7 )
  {
    SR_VEC_LANES(128, unrecovered_register_value, i32)[0] = 0;
    a15 = 0;
  }
  SR_VEC_LANES(128, unrecovered_register_value, i32)[1] = 1098907648;
  if ( a3 - a2 > 10 )
  {
    if ( (float)(0.125 * (float)a12) <= *(float *)&SR_VEC_LANES(128, unrecovered_register_value, i32)[1] )
      *(float *)&float_word = 0.125 * (float)a12;
    else
      float_word = SR_VEC_LANES(128, unrecovered_register_value, i32)[1];
    SR_VEC_LANES(128, unrecovered_register_value, i32)[1] = float_word;
  }
  if ( a17 )
    SR_VEC_LANES(128, unrecovered_register_value, i32)[1] = 1077936128;
  qmemcpy(scratch_buffer_2, a9, sizeof(scratch_buffer_2));
  loaded_word = 4LL * *(_DWORD *)(a1 + 8) * a10 + 15;
  if ( loaded_word <= 4LL * *(_DWORD *)(a1 + 8) * a10 )
    loaded_word = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(loaded_word & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (__m128i *)alloca_result;
  loaded_word_2 = 4LL * *(_DWORD *)(a1 + 8) * a10 + 15;
  if ( loaded_word_2 <= 4LL * *(_DWORD *)(a1 + 8) * a10 )
    loaded_word_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(loaded_word_2 & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer_2 = (__m128i *)alloca_result_2;
  crt_memcpy(source_buffer, a6, 4LL * *(_DWORD *)(a1 + 8) * a10);
  if ( a15 || SR_VEC_LANES(128, unrecovered_register_value, i32)[0] )
    masked_bits = sub_1401B89F0(
            a1,
            a2,
            a3,
            a5,
            (__int64)source_buffer,
            a7,
            call_result_2,
            (__int64)&unk_140281FA0 + 84 * a11 + 42,
            (__int64)source_buffer_2,
            a9,
            a10,
            a11,
            1,
            *(float *)&SR_VEC_LANES(128, unrecovered_register_value, i32)[1],
            a17);
  if ( SR_VEC_LANES(128, unrecovered_register_value, i32)[0] )
  {
    crt_memcpy(a6, source_buffer, 4LL * *(_DWORD *)(a1 + 8) * a10);
    crt_memcpy(a8, source_buffer_2, 4LL * *(_DWORD *)(a1 + 8) * a10);
  }
  else
  {
    call_result_3 = sub_14019A0E0((__int64)a9);
    qmemcpy(scratch_buffer, a9, sizeof(scratch_buffer));
    SR_VEC_LANES(128, unrecovered_register_value, i32)[2] = unknown_libname_995((__int64)scratch_buffer_2);
    unknown_libname_995_result = unknown_libname_995((__int64)scratch_buffer);
    unknown_libname_996_result = unknown_libname_996((__int64)scratch_buffer);
    source_buffer_4 = (__m128i *)(SR_VEC_LANES(128, unrecovered_register_value, u32)[2] + unknown_libname_996_result);
    SR_VEC_LANES(128, unrecovered_register_value, i32)[3] = unknown_libname_995_result - SR_VEC_LANES(128, unrecovered_register_value, i32)[2];
    if ( unknown_libname_995_result == SR_VEC_LANES(128, unrecovered_register_value, i32)[2] )
      SR_VEC_LANES(128, unrecovered_register_value, i32)[3] = 0;
    table_value = SR_VEC_LANES(128, unrecovered_register_value, u32)[3] + 15LL;
    if ( table_value <= SR_VEC_LANES(128, unrecovered_register_value, u32)[3] )
      table_value = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_3 = alloca(table_value & 0xFFFFFFFFFFFFFFF0uLL);
    source_buffer_3 = (__m128i *)alloca_result_3;
    crt_memcpy(source_buffer_3, source_buffer_4, (unsigned int)(unknown_libname_995_result - SR_VEC_LANES(128, unrecovered_register_value, i32)[2]));
    qmemcpy(a9, scratch_buffer_2, 0x38u);
    masked_bits_2 = sub_1401B89F0(
            a1,
            a2,
            a3,
            a5,
            (__int64)a6,
            a7,
            call_result_2,
            (__int64)&unk_140281FA0 + 84 * a11 + 42 * SR_VEC_LANES(128, unrecovered_register_value, i32)[0],
            (__int64)a8,
            a9,
            a10,
            a11,
            0,
            *(float *)&SR_VEC_LANES(128, unrecovered_register_value, i32)[1],
            a17);
    if ( a15 )
    {
      if ( masked_bits < masked_bits_2 || masked_bits == masked_bits_2 && (call_result = sub_14019A0E0((__int64)a9), shifted_bits + call_result > call_result_3) )
      {
        qmemcpy(a9, scratch_buffer, 0x38u);
        crt_memcpy(source_buffer_4, source_buffer_3, (unsigned int)(unknown_libname_995_result - SR_VEC_LANES(128, unrecovered_register_value, i32)[2]));
        crt_memcpy(a6, source_buffer, 4LL * *(_DWORD *)(a1 + 8) * a10);
        crt_memcpy(a8, source_buffer_2, 4LL * *(_DWORD *)(a1 + 8) * a10);
        SR_VEC_LANES(128, unrecovered_register_value, i32)[0] = 1;
      }
    }
  }
  if ( SR_VEC_LANES(128, unrecovered_register_value, i32)[0] )
    *a14 = weighted_sum;
  else
    *a14 = (float)((float)(flt_14027E378[a11] * flt_14027E378[a11]) * *a14) + weighted_sum;
  return; /* original void energy quantizer */
}

//----- (00000001401A7710) ----------------------------------------------------
__int64            sub_1401A7710(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int a8)
{
  __int64 result;
  __int16 shifted_bits;
  int iteration_count;
  int floor_result;
  float shifted_bits_2;

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    shifted_bits = 1 << *(_DWORD *)(a6 + 4LL * a2);
    if ( *(int *)(a6 + 4LL * a2) > 0 )
    {
      iteration_count = 0;
      do
      {
        floor_result = (int)floor((float)((float)(*(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2)) + 0.5) * (float)shifted_bits));
        if ( floor_result > shifted_bits - 1 )
          floor_result = shifted_bits - 1;
        if ( floor_result < 0 )
          floor_result = 0;
        sub_14019A6D0(a7, floor_result, *(_DWORD *)(a6 + 4LL * a2));
        shifted_bits_2 = (float)((float)((float)((float)floor_result + 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * a2))))
                    * 0.000061035156)
            - 0.5;
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2))
                                                                + shifted_bits_2;
        *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2))
                                                                - shifted_bits_2;
        ++iteration_count;
      }
      while ( iteration_count < a8 );
    }
    ++a2;
  }
  return result;
}

//----- (00000001401A7930) ----------------------------------------------------
__int64            sub_1401A7930(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  __int64 result;
  int j;
  int iteration_count;
  int i;
  BOOL comparison_result;
  float shifted_bits;

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a8 >= a10; ++j )
    {
      if ( *(int *)(a6 + 4LL * j) < 8 && *(_DWORD *)(a7 + 4LL * j) == i )
      {
        iteration_count = 0;
        do
        {
          comparison_result = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j)) >= 0.0;
          sub_14019A6D0(a9, comparison_result, 1);
          shifted_bits = (float)((float)((float)comparison_result - 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * j) - 1))) * 0.000061035156;
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j))
                                                                 + shifted_bits;
          *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j))
                                                                 - shifted_bits;
          --a8;
          ++iteration_count;
        }
        while ( iteration_count < a10 );
      }
    }
    result = (unsigned int)(i + 1);
  }
  return result;
}

//----- (00000001401A7B50) ----------------------------------------------------
__int64            sub_1401A7B50(__int64 a1, int a2, int a3, __int64 a4, int a5, _DWORD *a6, int a7, int a8)
{
  __int64 result;
  int masked_bits;
  int element_index;
  int shifted_bits;
  int call_result;
  int record_word_offset;
  float saved_shifted_bits;
  int input_value;
  int loaded_word;
  float selected_scalar;
  float selected_scalar_2;
  _DWORD float_word[2];
  float weighted_sum;
  char *state_address;

  state_address = (char *)&unk_140281FA0 + 84 * a8 + 42 * a5;
  float_word[0] = 0;
  float_word[1] = 0;
  if ( a5 )
  {
    selected_scalar = 0.0;
    selected_scalar_2 = 0.1499939;
  }
  else
  {
    selected_scalar_2 = flt_14027E488[a8];
    selected_scalar = flt_14027E378[a8];
  }
  record_word_offset = 8 * a6[2];
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( a2 >= a3 )
      break;
    element_index = 0;
    do
    {
      call_result = sub_14019A0A0((__int64)a6);
      if ( record_word_offset - call_result < 15 )
      {
        if ( record_word_offset - call_result < 2 )
        {
          if ( record_word_offset - call_result < 1 )
            shifted_bits = -1;
          else
            shifted_bits = -sub_14019AF20(a6, 1);
        }
        else
        {
          masked_bits = sub_14019AFE0(a6, (__int64)&unk_14027E374, 2);
          shifted_bits = -(masked_bits & 1) ^ (masked_bits >> 1);
        }
      }
      else
      {
        if ( a2 >= 20 )
          input_value = 20;
        else
          input_value = a2;
        shifted_bits = sub_1401B8170(a6, (unsigned __int8)state_address[2 * input_value] << 7, (unsigned __int8)state_address[2 * input_value + 1] << 6);
      }
      saved_shifted_bits = (float)shifted_bits;
      if ( *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + a2)) >= -9.0 )
        loaded_word = *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + a2));
      else
        loaded_word = -1055916032;
      *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + a2)) = loaded_word;
      weighted_sum = (float)((float)(selected_scalar * *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + a2))) + *(float *)&float_word[element_index]) + saved_shifted_bits;
      *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + a2)) = weighted_sum;
      *(float *)&float_word[element_index] = (float)(*(float *)&float_word[element_index] + saved_shifted_bits) - (float)(selected_scalar_2 * saved_shifted_bits);
      ++element_index;
    }
    while ( element_index < a7 );
    ++a2;
  }
  return result;
}

//----- (00000001401A7EC0) ----------------------------------------------------
__int64            sub_1401A7EC0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, _DWORD *a6, int a7)
{
  __int64 result;
  int iteration_count;

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    if ( *(int *)(a5 + 4LL * a2) > 0 )
    {
      iteration_count = 0;
      do
      {
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + a2))
                                                               + (float)((float)((float)((float)((float)(int)sub_14019B1C0(a6, *(_DWORD *)(a5 + 4LL * a2))
                                                                                               + 0.5)
                                                                                       * (float)(1 << (14 - *(_BYTE *)(a5 + 4LL * a2))))
                                                                               * 0.000061035156)
                                                                       - 0.5);
        ++iteration_count;
      }
      while ( iteration_count < a7 );
    }
    ++a2;
  }
  return result;
}

//----- (00000001401A8000) ----------------------------------------------------
void            sub_1401A8000(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  int j;
  int iteration_count;
  int i;

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a7 >= a9; ++j )
    {
      if ( *(int *)(a5 + 4LL * j) < 8 && *(_DWORD *)(a6 + 4LL * j) == i )
      {
        iteration_count = 0;
        do
        {
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + j))
                                                                 + (float)((float)((float)((float)(int)sub_14019B1C0(a8, 1u)
                                                                                         - 0.5)
                                                                                 * (float)(1 << (14
                                                                                               - *(_BYTE *)(a5 + 4LL * j)
                                                                                               - 1)))
                                                                         * 0.000061035156);
          --a7;
          ++iteration_count;
        }
        while ( iteration_count < a9 );
      }
    }
  }
}

//----- (00000001401A8190) ----------------------------------------------------
void               sub_1401A8190(_QWORD *a1, float *a2, int a3, int a4, int a5)
{
  _DWORD scratch_buffer[16];
  int i;
  float selected_scalar;
  float scaled_value;
  float float_buffer[4];
  float float_buffer_2[6];
  float float_buffer_3[6];
  __int64 unused_local;

  scaled_value = 1.0;
  selected_scalar = 0.80000001f;
  for ( i = 1; i < a3 >> 1; ++i )
    a2[i] = 0.5f
          * (float)((float)(0.5f * (float)(*(float *)(*a1 + 4LL * (2 * i - 1)) + *(float *)(*a1 + 4LL * (2 * i + 1))))
                  + *(float *)(*a1 + 8LL * i));
  *a2 = 0.5f * (float)((float)(0.5f * *(float *)(*a1 + 4LL)) + *(float *)*a1);
  if ( a4 == 2 )
  {
    for ( i = 1; i < a3 >> 1; ++i )
      a2[i] = a2[i]
            + (float)(0.5f
                    * (float)((float)(0.5f
                                    * (float)(*(float *)(a1[1] + 4LL * (2 * i - 1))
                                            + *(float *)(a1[1] + 4LL * (2 * i + 1))))
                            + *(float *)(a1[1] + 8LL * i)));
    *a2 = *a2 + (float)(0.5f * (float)((float)(0.5f * *(float *)(a1[1] + 4LL)) + *(float *)a1[1]));
  }
  scratch_buffer[12] = a5;
  sub_1401ADFA0(a2, (__int64)float_buffer_2, 0, 0, 4, a3 >> 1);
  float_buffer_2[0] = float_buffer_2[0] * 1.0001f;
  for ( i = 1; i <= 4; ++i )
    float_buffer_2[i] = float_buffer_2[i] - (float)((float)(float_buffer_2[i] * (float)(0.0080000004f * (float)i)) * (float)(0.0080000004f * (float)i));
  sub_1401AD490(float_buffer, float_buffer_2, 4);
  for ( i = 0; i < 4; ++i )
  {
    scaled_value = 0.89999998f * scaled_value;
    float_buffer[i] = float_buffer[i] * scaled_value;
  }
  float_buffer_3[0] = float_buffer[0] + 0.80000001f;
  float_buffer_3[1] = float_buffer[1] + (float)(selected_scalar * float_buffer[0]);
  float_buffer_3[2] = float_buffer[2] + (float)(selected_scalar * float_buffer[1]);
  float_buffer_3[3] = float_buffer[3] + (float)(selected_scalar * float_buffer[2]);
  float_buffer_3[4] = selected_scalar * float_buffer[3];
  sub_1401B86A0((__int64)a2, float_buffer_3, a3 >> 1);
  return; /* original void downsample/filter */
}

//----- (00000001401A8740) ----------------------------------------------------
void               sub_1401A8740(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  unsigned __int64 shifted_bits;
  void *alloca_result;
  unsigned __int64 shifted_bits_2;
  void *alloca_result_2;
  unsigned __int64 shifted_bits_3;
  void *alloca_result_3;
  int i;
  int j;
  int best_pitch[2]; /* native contiguous +8/+c pair */
  int integer_difference;
  int *saved_alloca_result;
  float product_difference;
  float weighted_sum;
  int integer_sum;
  float shifted_bits_4;
  int integer_difference_2;
  float scaled_value;
  int *saved_alloca_result_2;
  float *saved_alloca_result_3;
  __int64 unused_local;

  best_pitch[0] = 0;
  best_pitch[1] = 0;
  integer_sum = a4 + a3;
  shifted_bits = 4LL * (a3 >> 2) + 15;
  if ( shifted_bits <= 4LL * (a3 >> 2) )
    shifted_bits = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(shifted_bits & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = (float *)alloca_result;
  shifted_bits_2 = 4LL * (integer_sum >> 2) + 15;
  if ( shifted_bits_2 <= 4LL * (integer_sum >> 2) )
    shifted_bits_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(shifted_bits_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result_2;
  shifted_bits_3 = 4LL * (a4 >> 1) + 15;
  if ( shifted_bits_3 <= 4LL * (a4 >> 1) )
    shifted_bits_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(shifted_bits_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result_3;
  for ( i = 0; i < a3 >> 2; ++i )
    saved_alloca_result_3[i] = *(float *)(a1 + 8LL * i);
  for ( i = 0; i < integer_sum >> 2; ++i )
    saved_alloca_result_2[i] = *(_DWORD *)(a2 + 8LL * i);
  sub_1401A9C80(saved_alloca_result_3, (__int64)saved_alloca_result_2, (__int64)saved_alloca_result, a3 >> 2, a4 >> 2);
  sub_1401B8330((__int64)saved_alloca_result, (__int64)saved_alloca_result_2, a3 >> 2, a4 >> 2, best_pitch);
  for ( j = 0; j < a4 >> 1; ++j )
  {
    saved_alloca_result[j] = 0;
    if ( abs(j - 2 * best_pitch[0]) <= 2 || abs(j - 2 * best_pitch[1]) <= 2 )
    {
      shifted_bits_4 = sub_1401A9C00(a1, a2 + 4LL * j, a3 >> 1);
      if ( shifted_bits_4 >= -1.0 )
        integer_difference_2 = LODWORD(shifted_bits_4);
      else
        integer_difference_2 = -1082130432;
      saved_alloca_result[j] = integer_difference_2;
    }
  }
  sub_1401B8330((__int64)saved_alloca_result, a2, a3 >> 1, a4 >> 1, best_pitch);
  if ( best_pitch[0] <= 0 || best_pitch[0] >= (a4 >> 1) - 1 )
  {
    integer_difference = 0;
  }
  else
  {
    product_difference = *(float *)&saved_alloca_result[best_pitch[0] - 1];
    scaled_value = *(float *)&saved_alloca_result[best_pitch[0]];
    weighted_sum = *(float *)&saved_alloca_result[best_pitch[0] + 1];
    if ( (float)(weighted_sum - product_difference) <= (float)(0.69999999f * (float)(scaled_value - product_difference)) )
    {
      if ( (float)(product_difference - weighted_sum) <= (float)(0.69999999f * (float)(scaled_value - weighted_sum)) )
        integer_difference = 0;
      else
        integer_difference = -1;
    }
    else
    {
      integer_difference = 1;
    }
  }
  *a5 = 2 * best_pitch[0] - integer_difference;
  return; /* original void pitch search */
}

//----- (00000001401A8B30) ----------------------------------------------------
float              sub_1401A8B30(__int64 a1, int a2, int a3, int a4, int *a5, int a6, float a7)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  float combined_products;
  int j;
  float weighted_sum;
  int call_result;
  int loaded_word;
  float scaled_value;
  int i;
  float packed_word_bits;
  float weighted_sum_2;
  float saved_weighted_sum;
  int saved_loaded_word;
  float comparison_operand;
  float integer_quotient;
  float saved_product_difference;
  float saved_weighted_sum_2;
  float saved_packed_word_bits;
  int integer_difference;
  int saved_loaded_word_2;
  float saved_weighted_sum_3;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float packed_word_bits_2;
  float cached_weighted_sum;
  int input_value;
  int *saved_alloca_result;
  float offset_operand;
  float float_buffer[4];
  __int64 unused_local;
  __int64 integer_quotient_2;
  int integer_quotient_3;
  int integer_quotient_4;
  int integer_quotient_5;
  int integer_quotient_6;

  input_value = a3;
  integer_quotient_3 = a2 / 2;
  integer_quotient_4 = a3 / 2;
  *a5 /= 2;
  integer_quotient_6 = a6 / 2;
  integer_quotient_5 = a4 / 2;
  integer_quotient_2 = a1 + 4LL * (a2 / 2);
  if ( *a5 >= a2 / 2 )
    *a5 = integer_quotient_3 - 1;
  loaded_word = *a5;
  saved_loaded_word_2 = loaded_word;
  scaled_index = 4LL * (integer_quotient_3 + 1) + 15;
  if ( scaled_index <= 4LL * (integer_quotient_3 + 1) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result;
  sub_1401A9B20(integer_quotient_2, integer_quotient_2, integer_quotient_2 - 4LL * loaded_word, integer_quotient_5, &comparison_operand, &weighted_sum_2);
  *(float *)saved_alloca_result = comparison_operand;
  weighted_sum = comparison_operand;
  for ( i = 1; i <= integer_quotient_3; ++i )
  {
    weighted_sum = (float)(weighted_sum + (float)(*(float *)(integer_quotient_2 + 4LL * -i) * *(float *)(integer_quotient_2 + 4LL * -i)))
        - (float)(*(float *)(integer_quotient_2 + 4LL * (integer_quotient_5 - i)) * *(float *)(integer_quotient_2 + 4LL * (integer_quotient_5 - i)));
    if ( weighted_sum >= 0.0 )
      saved_weighted_sum_3 = weighted_sum;
    else
      saved_weighted_sum_3 = 0.0;
    *(float *)&saved_alloca_result[i] = saved_weighted_sum_3;
  }
  weighted_sum = *(float *)&saved_alloca_result[loaded_word];
  saved_weighted_sum = weighted_sum_2;
  saved_weighted_sum_2 = weighted_sum;
  LODWORD(packed_word_bits) = SR_VEC_READ_LANES(128, sub_1401B8890(weighted_sum_2, comparison_operand, weighted_sum), u32)[0];
  saved_packed_word_bits = packed_word_bits;
  for ( j = 2; j <= 15; ++j )
  {
    scaled_value = 0.0;
    call_result = sub_14019A1A0(j + 2 * loaded_word, 2 * j);
    if ( call_result < integer_quotient_4 )
      break;
    if ( j == 2 )
    {
      if ( loaded_word + call_result <= integer_quotient_3 )
        saved_loaded_word = call_result + loaded_word;
      else
        saved_loaded_word = loaded_word;
    }
    else
    {
      saved_loaded_word = sub_14019A1A0(j + loaded_word * 2 * dword_140281F00[j], 2 * j);
    }
    sub_1401A9B20(integer_quotient_2, integer_quotient_2 + 4LL * -call_result, integer_quotient_2 + 4LL * -saved_loaded_word, integer_quotient_5, &weighted_sum_2, &offset_operand);
    weighted_sum_2 = 0.5f * (float)(weighted_sum_2 + offset_operand);
    weighted_sum = 0.5f * (float)(*(float *)&saved_alloca_result[call_result] + *(float *)&saved_alloca_result[saved_loaded_word]);
    LODWORD(packed_word_bits_2) = SR_VEC_READ_LANES(128, sub_1401B8890(weighted_sum_2, comparison_operand, weighted_sum), u32)[0];
    if ( abs(call_result - integer_quotient_6) > 1 )
    {
      if ( abs(call_result - integer_quotient_6) > 2 || j * 5 * j >= loaded_word )
        scaled_value = 0.0;
      else
        scaled_value = 0.5f * a7;
    }
    else
    {
      scaled_value = a7;
    }
    if ( (float)((float)(0.69999999f * packed_word_bits) - scaled_value) >= 0.30000001f )
      product_difference = (float)(0.69999999f * packed_word_bits) - scaled_value;
    else
      product_difference = 0.30000001f;
    saved_product_difference = product_difference;
    if ( call_result >= 3 * integer_quotient_4 )
    {
      if ( call_result < 2 * integer_quotient_4 )
      {
        if ( (float)((float)(0.89999998f * packed_word_bits) - scaled_value) >= 0.5f )
          product_difference_3 = (float)(0.89999998f * packed_word_bits) - scaled_value;
        else
          product_difference_3 = 0.5f;
        saved_product_difference = product_difference_3;
      }
    }
    else
    {
      if ( (float)((float)(0.85000002f * packed_word_bits) - scaled_value) >= 0.40000001f )
        product_difference_2 = (float)(0.85000002f * packed_word_bits) - scaled_value;
      else
        product_difference_2 = 0.40000001f;
      saved_product_difference = product_difference_2;
    }
    if ( packed_word_bits_2 > saved_product_difference )
    {
      saved_weighted_sum = weighted_sum_2;
      saved_weighted_sum_2 = weighted_sum;
      saved_loaded_word_2 = call_result;
      saved_packed_word_bits = packed_word_bits_2;
    }
  }
  if ( saved_weighted_sum >= 0.0 )
    cached_weighted_sum = saved_weighted_sum;
  else
    cached_weighted_sum = 0.0;
  saved_weighted_sum = cached_weighted_sum;
  if ( cached_weighted_sum < saved_weighted_sum_2 )
    integer_quotient = saved_weighted_sum / (float)(saved_weighted_sum_2 + 1.0f);
  else
    integer_quotient = 1.0f;
  for ( j = 0; j < 3; ++j )
  {
    combined_products = sub_1401A9C00(integer_quotient_2, integer_quotient_2 - 4LL * (saved_loaded_word_2 + j - 1), integer_quotient_5);
    float_buffer[j] = combined_products;
  }
  if ( (float)(float_buffer[2] - float_buffer[0]) <= (float)(0.69999999f * (float)(float_buffer[1] - float_buffer[0])) )
  {
    if ( (float)(float_buffer[0] - float_buffer[2]) <= (float)(0.69999999f * (float)(float_buffer[1] - float_buffer[2])) )
      integer_difference = 0;
    else
      integer_difference = -1;
  }
  else
  {
    integer_difference = 1;
  }
  if ( integer_quotient > saved_packed_word_bits )
    integer_quotient = saved_packed_word_bits;
  *a5 = integer_difference + 2 * saved_loaded_word_2;
  if ( *a5 < input_value )
    *a5 = input_value;
  return integer_quotient; /* native XMM0 pitch gain */
}

//----- (00000001401A92A0) ----------------------------------------------------
__int64            sub_1401A92A0(float *a1, float *a2, float *a3, signed int a4)
{
  __int64 result;
  float scaled_value;
  float weighted_sum;
  float weighted_sum_2;
  float scaled_value_2;
  int i;
  int integer_sum;
  int integer_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float source_component_y;
  float scaled_value_3;
  float source_component_z;
  float weighted_sum_5;
  float weighted_sum_6;
  float scaled_value_4;
  int cached_i;
  int cached_integer_sum;
  float *buffer_cursor;
  float *buffer_cursor_2;
  float *buffer_cursor_3;

  weighted_sum_3 = 0.0;
  weighted_sum_4 = *a2;
  source_component_y = a2[1];
  source_component_z = a2[2];
  buffer_cursor_2 = a2 + 3;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    scaled_value = *a1;
    buffer_cursor = a1 + 1;
    weighted_sum_3 = *buffer_cursor_2;
    buffer_cursor_3 = buffer_cursor_2 + 1;
    *a3 = *a3 + (float)(scaled_value * weighted_sum_4);
    a3[1] = a3[1] + (float)(scaled_value * source_component_y);
    a3[2] = a3[2] + (float)(scaled_value * source_component_z);
    a3[3] = a3[3] + (float)(scaled_value * weighted_sum_3);
    weighted_sum = *buffer_cursor++;
    weighted_sum_4 = *buffer_cursor_3++;
    *a3 = *a3 + (float)(weighted_sum * source_component_y);
    a3[1] = a3[1] + (float)(weighted_sum * source_component_z);
    a3[2] = a3[2] + (float)(weighted_sum * weighted_sum_3);
    a3[3] = a3[3] + (float)(weighted_sum * weighted_sum_4);
    weighted_sum_2 = *buffer_cursor++;
    source_component_y = *buffer_cursor_3++;
    *a3 = *a3 + (float)(weighted_sum_2 * source_component_z);
    a3[1] = a3[1] + (float)(weighted_sum_2 * weighted_sum_3);
    a3[2] = a3[2] + (float)(weighted_sum_2 * weighted_sum_4);
    a3[3] = a3[3] + (float)(weighted_sum_2 * source_component_y);
    scaled_value_2 = *buffer_cursor;
    a1 = buffer_cursor + 1;
    source_component_z = *buffer_cursor_3;
    buffer_cursor_2 = buffer_cursor_3 + 1;
    *a3 = *a3 + (float)(scaled_value_2 * weighted_sum_3);
    a3[1] = a3[1] + (float)(scaled_value_2 * weighted_sum_4);
    a3[2] = a3[2] + (float)(scaled_value_2 * source_component_y);
    a3[3] = a3[3] + (float)(scaled_value_2 * source_component_z);
  }
  cached_i = i;
  integer_sum = i + 1;
  if ( cached_i < a4 )
  {
    weighted_sum_5 = *a1++;
    weighted_sum_3 = *buffer_cursor_2++;
    *a3 = *a3 + (float)(weighted_sum_5 * weighted_sum_4);
    a3[1] = a3[1] + (float)(weighted_sum_5 * source_component_y);
    a3[2] = a3[2] + (float)(weighted_sum_5 * source_component_z);
    a3[3] = a3[3] + (float)(weighted_sum_5 * weighted_sum_3);
  }
  cached_integer_sum = integer_sum;
  integer_sum_2 = integer_sum + 1;
  if ( cached_integer_sum < a4 )
  {
    weighted_sum_6 = *a1++;
    weighted_sum_4 = *buffer_cursor_2++;
    *a3 = *a3 + (float)(weighted_sum_6 * source_component_y);
    a3[1] = a3[1] + (float)(weighted_sum_6 * source_component_z);
    a3[2] = a3[2] + (float)(weighted_sum_6 * weighted_sum_3);
    a3[3] = a3[3] + (float)(weighted_sum_6 * weighted_sum_4);
  }
  result = (unsigned int)a4;
  if ( integer_sum_2 < a4 )
  {
    scaled_value_4 = *a1;
    scaled_value_3 = *buffer_cursor_2;
    *a3 = *a3 + (float)(*a1 * source_component_z);
    a3[1] = a3[1] + (float)(scaled_value_4 * weighted_sum_3);
    a3[2] = a3[2] + (float)(scaled_value_4 * weighted_sum_4);
    a3[3] = a3[3] + (float)(scaled_value_4 * scaled_value_3);
    return 12;
  }
  return result;
}

//----- (00000001401A9B20) ----------------------------------------------------
float *           sub_1401A9B20(__int64 a1, __int64 a2, __int64 a3, int a4, float *a5, float *a6)
{
  int i;
  float weighted_sum;
  float weighted_sum_2;

  weighted_sum = 0.0;
  weighted_sum_2 = 0.0;
  for ( i = 0; i < a4; ++i )
  {
    weighted_sum = weighted_sum + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
    weighted_sum_2 = weighted_sum_2 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a3 + 4LL * i));
  }
  *a5 = weighted_sum;
  *a6 = weighted_sum_2;
  return a6;
}

//----- (00000001401A9C00) ----------------------------------------------------
float            sub_1401A9C00(__int64 a1, __int64 a2, int a3)
{
  int i;
  float loaded_word;

  loaded_word = 0.0;
  for ( i = 0; i < a3; ++i )
    loaded_word = loaded_word + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
  return loaded_word;
}

//----- (00000001401A9C80) ----------------------------------------------------
void               sub_1401A9C80(float *a1, __int64 a2, __int64 a3, signed int a4, int a5)
{
  __int64 unused_local;
  int i;
  float weighted_sum;
  float result4[4]; /* native contiguous +28..+37 result vector */
  __int64 unused_local_2;

  for ( i = 0; i < a5 - 3; i += 4 )
  {
    result4[0] = result4[1] = result4[2] = result4[3] = 0.0f;
    sub_1401A92A0(a1, (float *)(a2 + 4LL * i), result4, a4);
    *(float *)(a3 + 4LL * i) = result4[0];
    *(float *)(a3 + 4LL * (i + 1)) = result4[1];
    *(float *)(a3 + 4LL * (i + 2)) = result4[2];
    *(float *)(a3 + 4LL * (i + 3)) = result4[3];
  }
  while ( i < a5 )
  {
    weighted_sum = sub_1401A9C00((__int64)a1, a2 + 4LL * i, a4);
    *(float *)(a3 + 4LL * i++) = weighted_sum;
  }
  return; /* original void epilogue; compiler cookie is not a result */
}

//----- (00000001401A9E10) ----------------------------------------------------
__int64            sub_1401A9E10(float a1, float a2, float *a3)
{
  float input_value;

  if ( a2 <= a1 )
    input_value = a2;
  else
    input_value = a1;
  *a3 = a1 + (float)(input_value / 3.0);
  a3[1] = a2 + (float)(input_value / 3.0);
  return 4;
}

//----- (00000001401A9EE0) ----------------------------------------------------
__int64            sub_1401A9EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  float square_root;
  __int64 result;
  signed int i;
  float weighted_sum;
  float weighted_sum_2;

  weighted_sum = *(float *)(a4 + 4LL * a5);
  weighted_sum_2 = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) + a5));
  square_root = sqrt((float)((float)((float)(weighted_sum * weighted_sum) + 1.0e-15) + (float)(weighted_sum_2 * weighted_sum_2)));
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a2 + 4LL * i) = (float)((float)(weighted_sum / (float)(square_root + 1.0e-15)) * *(float *)(a2 + 4LL * i))
                             + (float)((float)(weighted_sum_2 / (float)(square_root + 1.0e-15)) * *(float *)(a3 + 4LL * i));
  }
  return result;
}

//----- (00000001401AA030) ----------------------------------------------------
__int64            sub_1401AA030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  int i;
  float weighted_sum;
  float weighted_sum_2;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    weighted_sum_2 = 0.70710677 * *(float *)(a1 + 4LL * i);
    weighted_sum = 0.70710677 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * i) = weighted_sum_2 + weighted_sum;
    *(float *)(a2 + 4LL * i) = weighted_sum - weighted_sum_2;
  }
  return result;
}

//----- (00000001401AA0F0) ----------------------------------------------------
__m128i *           sub_1401AA0F0(     __m128i *a1, __m128i *a2, float a3, int a4)
{
  __m128i *result;
  float square_root;
  float square_root_2;
  int i;
  float scaled_value;
  float input_value;
  float selected_scalar;
  float unused_written_slot;
  float squared_value;
  float squared_value_2;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_ratio;
  float scaled_ratio_2;

  scaled_value = 0.0;
  selected_scalar = 0.0;
  sub_1401A9B20((__int64)a2, (__int64)a1, (__int64)a2, a4, &scaled_value, &selected_scalar);
  scaled_value = a3 * scaled_value;
  input_value = a3;
  squared_value = (float)((float)(input_value * input_value) + selected_scalar) - (float)(2.0 * scaled_value);
  squared_value_2 = (float)((float)(input_value * input_value) + selected_scalar) + (float)(2.0 * scaled_value);
  if ( squared_value_2 < 0.00060000003 || squared_value < 0.00060000003 )
    return crt_memcpy(a2, a1, 4LL * a4);
  unused_written_slot = squared_value;
  square_root = sqrt(squared_value);
  scaled_ratio = 1.0 / square_root;
  unused_written_slot = squared_value_2;
  square_root_2 = sqrt(squared_value_2);
  scaled_ratio_2 = 1.0 / square_root_2;
  for ( i = 0; ; ++i )
  {
    result = (__m128i *)(unsigned int)a4;
    if ( i >= a4 )
      break;
    scaled_value_2 = a3 * *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i];
    scaled_value_3 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i];
    *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i] = scaled_ratio * (float)(scaled_value_2 - scaled_value_3);
    *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i] = scaled_ratio_2 * (float)(scaled_value_2 + scaled_value_3);
  }
  return result;
}

//----- (00000001401AA340) ----------------------------------------------------
__int64            sub_1401AA340(__m128i *a1, int a2, int a3, int a4)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int i;
  int j;
  int scaled_index;
       __m128i *source_buffer;
  char *state_address;
  __int64 unused_local;

  scaled_index = a3 * a2;
  record_word_offset = 4LL * a3 * a2 + 15;
  if ( record_word_offset <= 4LL * a3 * a2 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (     __m128i *)alloca_result;
  if ( a4 )
  {
    state_address = (char *)&unk_140282A80 + 4 * a3 - 8;
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, source_buffer, i32)[j + a2 * *(_DWORD *)&state_address[4 * i]] = SR_VEC_PTR_LANES(128, a1, i32)[i + a3 * j];
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, source_buffer, i32)[j + a2 * i] = SR_VEC_PTR_LANES(128, a1, i32)[i + a3 * j];
    }
  }
  return crt_memcpy(a1, source_buffer, 4LL * scaled_index); /* 0x1401AA4C0: the result of this call is still in rax at the exit */
}

//----- (00000001401AA4E0) ----------------------------------------------------
__int64            sub_1401AA4E0(__m128i *a1, int a2, int a3, int a4)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int j;
  int i;
  int scaled_index;
       __m128i *source_buffer;
  char *state_address;
  __int64 unused_local;

  scaled_index = a3 * a2;
  record_word_offset = 4LL * a3 * a2 + 15;
  if ( record_word_offset <= 4LL * a3 * a2 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (     __m128i *)alloca_result;
  if ( a4 )
  {
    state_address = (char *)&unk_140282A80 + 4 * a3 - 8;
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, source_buffer, i32)[i + a3 * j] = SR_VEC_PTR_LANES(128, a1, i32)[j + a2 * *(_DWORD *)&state_address[4 * i]];
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, source_buffer, i32)[i + a3 * j] = SR_VEC_PTR_LANES(128, a1, i32)[j + a2 * i];
    }
  }
  return crt_memcpy(a1, source_buffer, 4LL * scaled_index); /* 0x1401AA660: the result of this call is still in rax at the exit */
}

//----- (00000001401AA680) ----------------------------------------------------
__int64            sub_1401AA680(int a1, int a2, int a3, int a4, int a5)
{
  int call_result;
  int record_word_offset;
  int integer_difference;
  int lookup_index;

  record_word_offset = 2 * a1 - 1;
  if ( a5 && a1 == 2 )
    record_word_offset = 2;
  call_result = sub_14019A1C0(a3 * record_word_offset + a2, record_word_offset);
  if ( a2 - a4 - 32 >= call_result )
    integer_difference = call_result;
  else
    integer_difference = a2 - a4 - 32;
  if ( integer_difference <= 64 )
    lookup_index = integer_difference;
  else
    lookup_index = 64;
  if ( lookup_index >= 4 )
    return (unsigned int)(2 * (((word_140282B58[lookup_index & 7] >> (14 - (lookup_index >> 3))) + 1) >> 1));
  else
    return 1;
}

//----- (00000001401AA790) ----------------------------------------------------
BOOL *           sub_1401AA790(
        int *a1,
        BOOL *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        char a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int shifted_bits;
  int shifted_bits_2;
  signed int shifted_bits_3;
  int integer_quotient;
  int integer_quotient_2;
  int loaded_word;
  BOOL saved_comparison_result;
  int shifted_bits_4;
  unsigned int call_result;
  unsigned int call_result_2;
  unsigned int call_result_3;
  unsigned int call_result_4;
  int shifted_bits_5;
  int shifted_bits_6;
  unsigned int *loaded_record_pointer;
  int i;
  int shifted_bits_7;
  int table_value;
  int call_result_5;
  int integer_quotient_3;
  int call_result_6;
  int loaded_word_2;
  __int16 shifted_bits_8;
  int integer_quotient_4;
  int shifted_bits_9;
  int shifted_bits_10;
  int saved_shifted_bits;
  int scaled_index;
  int scaled_index_2;
  int integer_difference;
  BOOL comparison_result;
  int call_result_7;
  int selection_code;
  int table_value_2;
  int call_result_8;
  __int64 loaded_word_3;
  __int64 loaded_word_4;

  shifted_bits_2 = 0;
  saved_comparison_result = 0;
  loaded_word = *a1;
  loaded_word_3 = *((_QWORD *)a1 + 1);
  table_value = a1[4];
  table_value_2 = a1[5];
  loaded_record_pointer = *((unsigned int **)a1 + 4);
  loaded_word_4 = *((_QWORD *)a1 + 6);
  if ( a10 && a5 == 2 )
    selection_code = 16;
  else
    selection_code = 4;
  loaded_word_2 = *(__int16 *)(*(_QWORD *)(loaded_word_3 + 64) + 2LL * table_value) + 8 * a9;
  shifted_bits_3 = sub_1401AA680(a5, *a6, (loaded_word_2 >> 1) - selection_code, loaded_word_2, a10);
  if ( a10 && table_value >= table_value_2 )
    shifted_bits_3 = 1;
  if ( loaded_word )
    shifted_bits_2 = sub_1401A68E0(a3, a4, a10, a5);
  call_result_8 = sub_14019A0E0((__int64)loaded_record_pointer);
  if ( shifted_bits_3 == 1 )
  {
    if ( a10 )
    {
      if ( loaded_word )
      {
        comparison_result = shifted_bits_2 > 0x2000 && !a1[17];
        saved_comparison_result = comparison_result;
        if ( comparison_result )
        {
          for ( i = 0; i < a5; ++i )
            *(float *)(a4 + 4LL * i) = -*(float *)(a4 + 4LL * i);
        }
        sub_1401A9EE0(loaded_word_3, a3, a4, loaded_word_4, table_value, a5);
      }
      if ( *a6 <= 16 || a1[10] <= 16 )
      {
        saved_comparison_result = 0;
      }
      else if ( loaded_word )
      {
        sub_14019A450(loaded_record_pointer, saved_comparison_result, 2);
      }
      else
      {
        saved_comparison_result = sub_14019AF20(loaded_record_pointer, 2);
      }
      if ( a1[17] )
        saved_comparison_result = 0;
      shifted_bits_2 = 0;
    }
  }
  else
  {
    if ( loaded_word )
    {
      if ( a10 && a1[16] )
      {
        if ( shifted_bits_2 <= 0x2000 )
          integer_quotient_4 = -32767 / shifted_bits_3;
        else
          integer_quotient_4 = 0x7FFF / shifted_bits_3;
        if ( (integer_quotient_4 + shifted_bits_3 * shifted_bits_2) >> 14 >= 0 )
          shifted_bits_9 = (integer_quotient_4 + shifted_bits_3 * shifted_bits_2) >> 14;
        else
          shifted_bits_9 = 0;
        if ( shifted_bits_3 - 1 >= shifted_bits_9 )
        {
          if ( (integer_quotient_4 + shifted_bits_3 * shifted_bits_2) >> 14 >= 0 )
            shifted_bits_10 = (integer_quotient_4 + shifted_bits_3 * shifted_bits_2) >> 14;
          else
            shifted_bits_10 = 0;
          saved_shifted_bits = shifted_bits_10;
        }
        else
        {
          saved_shifted_bits = shifted_bits_3 - 1;
        }
        if ( a1[16] >= 0 )
          shifted_bits_2 = saved_shifted_bits + 1;
        else
          shifted_bits_2 = saved_shifted_bits;
      }
      else
      {
        shifted_bits_2 = (shifted_bits_3 * shifted_bits_2 + 0x2000) >> 14;
        if ( !a10 && a1[18] && shifted_bits_2 > 0 && shifted_bits_2 < shifted_bits_3 )
        {
          shifted_bits_8 = sub_14019A1A0(shifted_bits_2 << 14, shifted_bits_3);
          call_result = (__int16)sub_1401A32C0(shifted_bits_8);
          call_result_3 = (__int16)sub_1401A32C0(0x4000 - shifted_bits_8);
          shifted_bits_5 = ((__int16)sub_1401A3360(call_result_3, call_result) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
          if ( shifted_bits_5 <= *a6 )
          {
            if ( shifted_bits_5 < -*a6 )
              shifted_bits_2 = 0;
          }
          else
          {
            shifted_bits_2 = shifted_bits_3;
          }
        }
      }
    }
    if ( a10 && a5 > 2 )
    {
      integer_quotient = shifted_bits_3 / 2;
      integer_quotient_3 = shifted_bits_3 / 2 + 3 * (shifted_bits_3 / 2 + 1);
      if ( loaded_word )
      {
        if ( shifted_bits_2 > integer_quotient )
          scaled_index = 3 * (integer_quotient + 1) + shifted_bits_2 - integer_quotient;
        else
          scaled_index = 3 * (shifted_bits_2 + 1);
        if ( shifted_bits_2 > integer_quotient )
          sub_14019A290(loaded_record_pointer, 3 * (integer_quotient + 1) + shifted_bits_2 - 1 - integer_quotient, scaled_index, integer_quotient_3);
        else
          sub_14019A290(loaded_record_pointer, 3 * shifted_bits_2, scaled_index, integer_quotient_3);
      }
      else
      {
        call_result_5 = sub_14019AD20(loaded_record_pointer, integer_quotient_3);
        if ( call_result_5 >= 3 * (integer_quotient + 1) )
          integer_quotient_2 = integer_quotient + call_result_5 - 3 * (integer_quotient + 1) + 1;
        else
          integer_quotient_2 = call_result_5 / 3;
        if ( integer_quotient_2 > integer_quotient )
          scaled_index_2 = 3 * (integer_quotient + 1) + integer_quotient_2 - integer_quotient;
        else
          scaled_index_2 = 3 * (integer_quotient_2 + 1);
        if ( integer_quotient_2 > integer_quotient )
          sub_14019AE70(loaded_record_pointer, 3 * (integer_quotient + 1) + integer_quotient_2 - 1 - integer_quotient, scaled_index_2, integer_quotient_3);
        else
          sub_14019AE70(loaded_record_pointer, 3 * integer_quotient_2, scaled_index_2, integer_quotient_3);
        shifted_bits_2 = integer_quotient_2;
      }
    }
    else if ( a8 > 1 || a10 )
    {
      if ( loaded_word )
        sub_14019A5E0(loaded_record_pointer, shifted_bits_2, shifted_bits_3 + 1);
      else
        shifted_bits_2 = sub_14019B0A0(loaded_record_pointer, shifted_bits_3 + 1);
    }
    else
    {
      shifted_bits_4 = ((shifted_bits_3 >> 1) + 1) * ((shifted_bits_3 >> 1) + 1);
      if ( loaded_word )
      {
        if ( shifted_bits_2 > shifted_bits_3 >> 1 )
          integer_difference = shifted_bits_3 + 1 - shifted_bits_2;
        else
          integer_difference = shifted_bits_2 + 1;
        if ( shifted_bits_2 > shifted_bits_3 >> 1 )
          shifted_bits = shifted_bits_4 - (((shifted_bits_3 + 2 - shifted_bits_2) * (shifted_bits_3 + 1 - shifted_bits_2)) >> 1);
        else
          shifted_bits = ((shifted_bits_2 + 1) * shifted_bits_2) >> 1;
        sub_14019A290(loaded_record_pointer, shifted_bits, integer_difference + shifted_bits, shifted_bits_4);
      }
      else
      {
        call_result_6 = sub_14019AD20(loaded_record_pointer, shifted_bits_4);
        if ( call_result_6 >= (((shifted_bits_3 >> 1) + 1) * (shifted_bits_3 >> 1)) >> 1 )
        {
          shifted_bits_2 = (2 * shifted_bits_3 + 2 - (unsigned int)sub_1401A6AE0(8 * (shifted_bits_4 - call_result_6) - 7)) >> 1;
          shifted_bits_7 = shifted_bits_4 - (((shifted_bits_3 + 2 - shifted_bits_2) * (shifted_bits_3 + 1 - shifted_bits_2)) >> 1);
          sub_14019AE70(loaded_record_pointer, shifted_bits_7, shifted_bits_3 + 1 - shifted_bits_2 + shifted_bits_7, shifted_bits_4);
        }
        else
        {
          shifted_bits_2 = ((unsigned int)sub_1401A6AE0(8 * call_result_6 + 1) - 1) >> 1;
          sub_14019AE70(loaded_record_pointer, ((shifted_bits_2 + 1) * shifted_bits_2) >> 1, shifted_bits_2 + 1 + (((shifted_bits_2 + 1) * shifted_bits_2) >> 1), shifted_bits_4);
        }
      }
    }
    shifted_bits_2 = sub_14019A1A0(shifted_bits_2 << 14, shifted_bits_3);
    if ( loaded_word && a10 )
    {
      if ( shifted_bits_2 )
        sub_1401AA030(a3, a4, a5);
      else
        sub_1401A9EE0(loaded_word_3, a3, a4, loaded_word_4, table_value, a5);
    }
  }
  call_result_7 = sub_14019A0E0((__int64)loaded_record_pointer) - call_result_8;
  *a6 -= call_result_7;
  if ( shifted_bits_2 )
  {
    if ( shifted_bits_2 == 0x4000 )
    {
      call_result_2 = 0;
      call_result_4 = 0x7FFF;
      *a11 &= ((1 << a7) - 1) << a7;
      shifted_bits_6 = 0x4000;
    }
    else
    {
      call_result_2 = (__int16)sub_1401A32C0(shifted_bits_2);
      call_result_4 = (__int16)sub_1401A32C0(0x4000 - (unsigned __int16)shifted_bits_2);
      shifted_bits_6 = ((__int16)sub_1401A3360(call_result_4, call_result_2) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
    }
  }
  else
  {
    call_result_2 = 0x7FFF;
    call_result_4 = 0;
    *a11 &= (1 << a7) - 1;
    shifted_bits_6 = -16384;
  }
  *a2 = saved_comparison_result;
  a2[1] = call_result_2;
  a2[2] = call_result_4;
  a2[3] = shifted_bits_6;
  a2[4] = shifted_bits_2;
  a2[5] = call_result_7;
  return a2;
}

//----- (00000001401AB360) ----------------------------------------------------
__int64            sub_1401AB360(int *a1, float *a2, float *a3, int a4, _DWORD *a5)
{
  int comparison_result;
  int iteration_count;
  int integer_difference;
  int loaded_word;
  BOOL comparison_result_2;
  float *input_cursor;
  _DWORD *loaded_record_pointer;

  input_cursor = a2;
  loaded_word = *a1;
  loaded_record_pointer = *((_DWORD **)a1 + 4);
  comparison_result_2 = a3 != nullptr;
  iteration_count = 0;
  do
  {
    comparison_result = 0;
    if ( a1[10] >= 8 )
    {
      if ( loaded_word )
      {
        comparison_result = *input_cursor < 0.0;
        sub_14019A6D0(loaded_record_pointer, comparison_result, 1);
      }
      else
      {
        comparison_result = sub_14019B1C0(loaded_record_pointer, 1u);
      }
      a1[10] -= 8;
      a4 -= 8;
    }
    if ( a1[1] )
    {
      if ( comparison_result )
        integer_difference = -1082130432;
      else
        integer_difference = 1065353216;
      *(_DWORD *)input_cursor = integer_difference;
    }
    input_cursor = a3;
    ++iteration_count;
  }
  while ( iteration_count < comparison_result_2 + 1 );
  if ( a5 )
    *a5 = *(_DWORD *)a2;
  return 1;
}

//----- (00000001401AB510) ----------------------------------------------------
unsigned int       sub_1401AB510(__int64 a1, float *a2, int a3, int a4, int a5, __int64 a6, int a7, float a8, int a9)
{
  _DWORD scratch_buffer[18];
  unsigned int option_flags;
  int saved_shifted_bits;
  int i;
  int loaded_word;
  int integer_difference;
  int remaining_count;
  int integer_difference_2;
  int input_value;
  int table_value;
  int loaded_word_2;
  int call_result;
  float saved_component_delta;
  float product_difference;
  float product_difference_2;
  __int64 loaded_word_3;
  int unused_written_slot;
  int shifted_bits;
  int integer_quotient;
  int integer_quotient_2;
  int cached_integer_quotient;
  int loaded_word_4;
  int call_result_2;
  int shifted_bits_2;
  float component_delta;
  int unused_written_slot_2;
  float *state_address;
  int loaded_word_5;
  int unused_written_slot_3;
  int table_value_2;
  __int64 scaled_index;
  unsigned __int8 *loaded_record_pointer;
  unsigned int *loaded_record_pointer_2;
  int theta[6]; /* native contiguous output at frame F8..10C */
  __int64 unused_local;
  int shifted_bits_3;
  int input_value_2;

  input_value_2 = a4;
  unused_written_slot_2 = 0;
  unused_written_slot = 0;
  input_value = a5;
  product_difference_2 = 0.0;
  product_difference = 0.0;
  option_flags = 0;
  state_address = nullptr;
  loaded_word_5 = *(_DWORD *)a1;
  loaded_word_3 = *(_QWORD *)(a1 + 8);
  loaded_word_2 = *(_DWORD *)(a1 + 16);
  loaded_word_4 = *(_DWORD *)(a1 + 24);
  loaded_record_pointer_2 = *(unsigned int **)(a1 + 32);
  loaded_record_pointer = (unsigned __int8 *)(*(_QWORD *)(loaded_word_3 + 144)
                          + *(__int16 *)(*(_QWORD *)(loaded_word_3 + 136) + 2LL * (loaded_word_2 + *(_DWORD *)(loaded_word_3 + 8) * (a7 + 1))));
  if ( a7 == -1 || input_value_2 <= loaded_record_pointer[*loaded_record_pointer] + 12 || a3 <= 2 )
  {
    remaining_count = sub_1401A2830(loaded_word_3, loaded_word_2, a7, input_value_2);
    call_result = sub_1401A2960(loaded_word_3, loaded_word_2, a7, remaining_count);
    for ( *(_DWORD *)(a1 + 40) -= call_result; *(int *)(a1 + 40) < 0 && remaining_count > 0; *(_DWORD *)(a1 + 40) -= call_result )
    {
      *(_DWORD *)(a1 + 40) += call_result;
      call_result = sub_1401A2960(loaded_word_3, loaded_word_2, a7, --remaining_count);
    }
    if ( remaining_count )
    {
      call_result_2 = sub_1401A27F0(remaining_count);
      if ( loaded_word_5 )
      {
        scratch_buffer[16] = *(_DWORD *)(a1 + 60);
        option_flags = sub_1401A65D0(a2, a3, call_result_2, loaded_word_4, a5, loaded_record_pointer_2, a8, *(_DWORD *)(a1 + 4));
      }
      else
      {
        option_flags = sub_1401A6710((__int64)a2, a3, call_result_2, loaded_word_4, a5, loaded_record_pointer_2, a8);
      }
    }
    else if ( *(_DWORD *)(a1 + 4) )
    {
      unused_written_slot_3 = 1;
      shifted_bits_2 = (1 << a5) - 1;
      a9 &= shifted_bits_2;
      if ( a9 )
      {
        if ( a6 )
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(_DWORD *)(a1 + 56));
            saved_component_delta = 0.00390625;
            if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 )
              component_delta = saved_component_delta;
            else
              component_delta = -saved_component_delta;
            saved_component_delta = component_delta;
            a2[i] = *(float *)(a6 + 4LL * i) + component_delta;
          }
          option_flags = a9;
        }
        else
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(_DWORD *)(a1 + 56));
            a2[i] = (float)(*(int *)(a1 + 56) >> 20);
          }
          option_flags = shifted_bits_2;
        }
        sub_1401A6800(a2, a3, a8);
      }
      else
      {
        crt_memset((void *)(uintptr_t)(a2), 0, 4LL * a3);
      }
    }
  }
  else
  {
    scaled_index = 0;
    shifted_bits_3 = a3 >> 1;
    state_address = &a2[a3 >> 1];
    --a7;
    if ( a5 == 1 )
      a9 = (2 * a9) | a9 & 1;
    a5 = (a5 + 1) >> 1;
    sub_1401AA790((int *)a1, &theta[0], (__int64)a2, (__int64)state_address, shifted_bits_3, &input_value_2, a5, input_value, a7, 0, &a9);
    unused_written_slot_2 = theta[1];
    unused_written_slot = theta[2];
    saved_shifted_bits = theta[3];
    table_value = theta[4];
    table_value_2 = theta[5];
    product_difference_2 = 0x1p-15f * (float)theta[1];
    product_difference = 0x1p-15f * (float)theta[2];
    if ( input_value > 1 && (table_value & 0x3FFF) != 0 )
    {
      if ( table_value <= 0x2000 )
      {
        if ( ((8 * shifted_bits_3) >> (5 - a7)) + saved_shifted_bits <= 0 )
          shifted_bits = ((8 * shifted_bits_3) >> (5 - a7)) + saved_shifted_bits;
        else
          shifted_bits = 0;
        saved_shifted_bits = shifted_bits;
      }
      else
      {
        saved_shifted_bits -= saved_shifted_bits >> (4 - a7);
      }
    }
    if ( input_value_2 >= (input_value_2 - saved_shifted_bits) / 2 )
      integer_quotient = (input_value_2 - saved_shifted_bits) / 2;
    else
      integer_quotient = input_value_2;
    if ( integer_quotient >= 0 )
    {
      if ( input_value_2 >= (input_value_2 - saved_shifted_bits) / 2 )
        integer_quotient_2 = (input_value_2 - saved_shifted_bits) / 2;
      else
        integer_quotient_2 = input_value_2;
      cached_integer_quotient = integer_quotient_2;
    }
    else
    {
      cached_integer_quotient = 0;
    }
    integer_difference = cached_integer_quotient;
    integer_difference_2 = input_value_2 - cached_integer_quotient;
    *(_DWORD *)(a1 + 40) -= table_value_2;
    if ( a6 )
      scaled_index = a6 + 4LL * shifted_bits_3;
    loaded_word = *(_DWORD *)(a1 + 40);
    if ( integer_difference < integer_difference_2 )
    {
      option_flags = (unsigned int)sub_1401AB510(a1, state_address, shifted_bits_3, integer_difference_2, a5, scaled_index, a7, a8 * product_difference, a9 >> a5) << (input_value >> 1);
      loaded_word = integer_difference_2 - (loaded_word - *(_DWORD *)(a1 + 40));
      if ( loaded_word > 24 && table_value != 0x4000 )
        integer_difference = integer_difference + loaded_word - 24;
      option_flags |= sub_1401AB510(a1, a2, shifted_bits_3, integer_difference, a5, a6, a7, a8 * product_difference_2, a9);
    }
    else
    {
      option_flags = sub_1401AB510(a1, a2, shifted_bits_3, integer_difference, a5, a6, a7, a8 * product_difference_2, a9);
      loaded_word = integer_difference - (loaded_word - *(_DWORD *)(a1 + 40));
      if ( loaded_word > 24 && table_value )
        integer_difference_2 = integer_difference_2 + loaded_word - 24;
      option_flags |= (unsigned int)sub_1401AB510(a1, state_address, shifted_bits_3, integer_difference_2, a5, scaled_index, a7, a8 * product_difference, a9 >> a5) << (input_value >> 1);
    }
  }
  return option_flags; /* native EAX collapse mask */
}

//----- (00000001401AC060) ----------------------------------------------------
__int64            sub_1401AC060(
        int *a1,
        float *a2,
        int a3,
        int a4,
        int a5,
        __m128i *a6,
        int a7,
        _DWORD *a8,
        float a9,
        __m128i *a10,
        int a11)
{
  float square_root;
  int call_result;
  int j;
  int i;
  int k;
  int m;
  int saved_iteration_count;
  unsigned int option_flags;
  int iteration_count;
  int n;
  int loaded_word;
  BOOL comparison_result;
  int iteration_count_2;
  int remaining_bits;
  int shifted_bits;

  iteration_count_2 = 0;
  saved_iteration_count = 0;
  loaded_word = *a1;
  iteration_count = a1[7];
  comparison_result = a5 == 1;
  call_result = sub_14019A1A0(a3, a5);
  if ( a3 == 1 )
    return sub_1401AB360(a1, a2, nullptr, a4, a8);
  if ( iteration_count > 0 )
    saved_iteration_count = iteration_count;
  if ( a10 && a6 && (saved_iteration_count || (call_result & 1) == 0 && iteration_count < 0 || a5 > 1) )
  {
    crt_memcpy(a10, a6, 4LL * a3);
    a6 = a10;
  }
  for ( i = 0; i < saved_iteration_count; ++i )
  {
    if ( loaded_word )
      sub_1401A3F20((__int64)a2, a3 >> i, 1 << i);
    if ( a6 )
      sub_1401A3F20((__int64)a6, a3 >> i, 1 << i);
    a11 = (4 * byte_140279B70[a11 >> 4]) | byte_140279B70[a11 & 0xF];
  }
  remaining_bits = a5 >> saved_iteration_count;
  for ( j = call_result << saved_iteration_count; (j & 1) == 0 && iteration_count < 0; j >>= 1 )
  {
    if ( loaded_word )
      sub_1401A3F20((__int64)a2, j, remaining_bits);
    if ( a6 )
      sub_1401A3F20((__int64)a6, j, remaining_bits);
    a11 |= a11 << remaining_bits;
    remaining_bits *= 2;
    ++iteration_count_2;
    ++iteration_count;
  }
  if ( remaining_bits > 1 )
  {
    if ( loaded_word )
      sub_1401AA340((__m128i *)a2, j >> saved_iteration_count, remaining_bits << saved_iteration_count, comparison_result);
    if ( a6 )
      sub_1401AA340(a6, j >> saved_iteration_count, remaining_bits << saved_iteration_count, comparison_result);
  }
  option_flags = sub_1401AB510((__int64)a1, a2, a3, a4, remaining_bits, (__int64)a6, a7, a9, a11);
  if ( a1[1] )
  {
    if ( remaining_bits > 1 )
      sub_1401AA4E0((__m128i *)a2, j >> saved_iteration_count, remaining_bits << saved_iteration_count, comparison_result);
    for ( k = 0; k < iteration_count_2; ++k )
    {
      remaining_bits >>= 1;
      j *= 2;
      option_flags |= option_flags >> remaining_bits;
      sub_1401A3F20((__int64)a2, j, remaining_bits);
    }
    for ( m = 0; m < saved_iteration_count; ++m )
    {
      option_flags = byte_140279B80[option_flags];
      sub_1401A3F20((__int64)a2, a3 >> m, 1 << m);
    }
    shifted_bits = remaining_bits << saved_iteration_count;
    if ( a8 )
    {
      square_root = sqrt((double)a3);
      for ( n = 0; n < a3; ++n )
        *(float *)&a8[n] = square_root * a2[n];
    }
    option_flags &= (1 << shifted_bits) - 1;
  }
  return option_flags;
}

//----- (00000001401AC6B0) ----------------------------------------------------
__int64            CGlobalUtils__CheckAlignment(
        __int64 a1,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        __m128i *a7,
        int a8,
        _DWORD *a9,
        __m128i *a10,
        int a11)
{
  _DWORD scratch_buffer[10];
  int integer_difference;
  int remaining_amount;
  int loaded_word;
  int option_flags;
  int saved_comparison_result;
  float source_component_y;
  float scaled_value;
  int callee_output_word;
  int i;
  int cached_unrecovered_register_value;
  float scaled_value_2;
  int unused_written_slot;
  int unused_written_slot_2;
  BOOL comparison_result;
  BOOL saved_comparison_result_2;
  BOOL comparison_result_2;
  int integer_quotient;
  int integer_quotient_2;
  int cached_integer_quotient;
  int cached_unrecovered_register_value_2;
  BOOL condition_flag;
  float *record_pointer;
  float *product_difference;
  int loaded_word_2;
  int input_value;
  float *input_cursor;
  float *input_cursor_2;
  _DWORD *loaded_record_pointer;
  BOOL callee_output_word_2;
  int unrecovered_register_value;
  int unrecovered_register_value_2;
  int unrecovered_register_value_3;
  int unrecovered_register_value_4;
  int unrecovered_register_value_5;
  __int64 unused_local;

  unused_written_slot = 0;
  unused_written_slot_2 = 0;
  condition_flag = 0;
  scaled_value_2 = 0.0;
  scaled_value = 0.0;
  option_flags = 0;
  loaded_word_2 = *(_DWORD *)a1;
  loaded_record_pointer = *(_DWORD **)(a1 + 32);
  if ( a4 == 1 )
  {
    return sub_1401AB360((int *)a1, a2, a3, a5, a9); /* 0x1401AC777: the call's result stays in rax */
  }
  else
  {
    input_value = a11;
    sub_1401AA790((int *)a1, &callee_output_word_2, (__int64)a2, (__int64)a3, a4, &a5, a6, a6, a8, 1, &a11);
    condition_flag = callee_output_word_2;
    unused_written_slot = unrecovered_register_value;
    unused_written_slot_2 = unrecovered_register_value_2;
    cached_unrecovered_register_value = unrecovered_register_value_3;
    callee_output_word = unrecovered_register_value_4;
    cached_unrecovered_register_value_2 = unrecovered_register_value_5;
    scaled_value_2 = 0.000030517578 * (float)unrecovered_register_value;
    scaled_value = 0.000030517578 * (float)unrecovered_register_value_2;
    if ( a4 == 2 )
    {
      saved_comparison_result = 0;
      remaining_amount = a5;
      integer_difference = 0;
      if ( callee_output_word && callee_output_word != 0x4000 )
        integer_difference = 8;
      remaining_amount -= integer_difference;
      comparison_result = callee_output_word > 0x2000;
      saved_comparison_result_2 = comparison_result;
      *(_DWORD *)(a1 + 40) -= integer_difference + cached_unrecovered_register_value_2;
      if ( saved_comparison_result_2 )
        input_cursor = a3;
      else
        input_cursor = a2;
      record_pointer = input_cursor;
      if ( saved_comparison_result_2 )
        input_cursor_2 = a2;
      else
        input_cursor_2 = a3;
      product_difference = input_cursor_2;
      if ( integer_difference )
      {
        if ( loaded_word_2 )
        {
          comparison_result_2 = (float)((float)(*record_pointer * product_difference[1]) - (float)(record_pointer[1] * *product_difference)) < 0.0;
          saved_comparison_result = comparison_result_2;
          sub_14019A6D0(loaded_record_pointer, comparison_result_2, 1);
        }
        else
        {
          saved_comparison_result = sub_14019B1C0(loaded_record_pointer, 1u);
        }
      }
      saved_comparison_result = 1 - 2 * saved_comparison_result;
      option_flags = sub_1401AC060((int *)a1, record_pointer, 2, remaining_amount, a6, a7, a8, a9, 1.0, a10, input_value);
      *product_difference = (float)-saved_comparison_result * record_pointer[1];
      product_difference[1] = (float)saved_comparison_result * *record_pointer;
      if ( *(_DWORD *)(a1 + 4) )
      {
        *a2 = scaled_value_2 * *a2;
        a2[1] = scaled_value_2 * a2[1];
        *a3 = scaled_value * *a3;
        a3[1] = scaled_value * a3[1];
        source_component_y = *a2;
        *a2 = source_component_y - *a3;
        *a3 = source_component_y + *a3;
        source_component_y = a2[1];
        a2[1] = source_component_y - a3[1];
        a3[1] = source_component_y + a3[1];
      }
    }
    else
    {
      if ( a5 >= (a5 - cached_unrecovered_register_value) / 2 )
        integer_quotient = (a5 - cached_unrecovered_register_value) / 2;
      else
        integer_quotient = a5;
      if ( integer_quotient >= 0 )
      {
        if ( a5 >= (a5 - cached_unrecovered_register_value) / 2 )
          integer_quotient_2 = (a5 - cached_unrecovered_register_value) / 2;
        else
          integer_quotient_2 = a5;
        cached_integer_quotient = integer_quotient_2;
      }
      else
      {
        cached_integer_quotient = 0;
      }
      remaining_amount = cached_integer_quotient;
      integer_difference = a5 - cached_integer_quotient;
      *(_DWORD *)(a1 + 40) -= cached_unrecovered_register_value_2;
      loaded_word = *(_DWORD *)(a1 + 40);
      if ( remaining_amount < integer_difference )
      {
        option_flags = sub_1401AC060((int *)a1, a3, a4, integer_difference, a6, nullptr, a8, nullptr, scaled_value, nullptr, a11 >> a6);
        loaded_word = integer_difference - (loaded_word - *(_DWORD *)(a1 + 40));
        if ( loaded_word > 24 && callee_output_word != 0x4000 )
          remaining_amount = remaining_amount + loaded_word - 24;
        option_flags |= sub_1401AC060((int *)a1, a2, a4, remaining_amount, a6, a7, a8, a9, 1.0, a10, a11);
      }
      else
      {
        option_flags = sub_1401AC060((int *)a1, a2, a4, remaining_amount, a6, a7, a8, a9, 1.0, a10, a11);
        loaded_word = remaining_amount - (loaded_word - *(_DWORD *)(a1 + 40));
        if ( loaded_word > 24 && callee_output_word )
          integer_difference = integer_difference + loaded_word - 24;
        option_flags |= sub_1401AC060((int *)a1, a3, a4, integer_difference, a6, nullptr, a8, nullptr, scaled_value, nullptr, a11 >> a6);
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      if ( a4 != 2 )
      {
        scratch_buffer[8] = *(_DWORD *)(a1 + 60);
        sub_1401AA0F0((     __m128i *)a2, (__m128i *)a3, scaled_value_2, a4);
      }
      if ( condition_flag )
      {
        for ( i = 0; i < a4; ++i )
          a3[i] = -a3[i];
      }
    }
  }
  return (unsigned int)option_flags; /* 0x1401AD1EE: mov eax, dword ptr [rsp + 0x6c] */
}

//----- (00000001401AD210) ----------------------------------------------------
__m128i *           sub_1401AD210(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __m128i *result;
  int loaded_word;
  int loaded_word_2;
  __int64 loaded_word_3;

  loaded_word_3 = *(_QWORD *)(a1 + 32);
  loaded_word = (*(__int16 *)(loaded_word_3 + 2LL * (a4 + 1)) - *(__int16 *)(loaded_word_3 + 2LL * a4)) * a5;
  loaded_word_2 = (*(__int16 *)(loaded_word_3 + 2LL * (a4 + 2)) - *(__int16 *)(loaded_word_3 + 2LL * (a4 + 1))) * a5;
  result = crt_memcpy((__m128i *)(a2 + 4LL * loaded_word), (     __m128i *)(a2 + 4LL * (2 * loaded_word - loaded_word_2)), 4LL * (loaded_word_2 - loaded_word));
  if ( a6 )
    return crt_memcpy((__m128i *)(a3 + 4LL * loaded_word), (     __m128i *)(a3 + 4LL * (2 * loaded_word - loaded_word_2)), 4LL * (loaded_word_2 - loaded_word));
  return result;
}

//----- (00000001401AD3B0) ----------------------------------------------------
__int64            sub_1401AD3B0(float a1)
{
  return (unsigned int)(int)a1;
}

//----- (00000001401AD3E0) ----------------------------------------------------
__int64            sub_1401AD3E0(float a1)
{
  float component_delta;
  float saved_component_delta;

  if ( (float)(a1 * 32768.0) <= -32768.0 )
    component_delta = -32768.0;
  else
    component_delta = a1 * 32768.0;
  if ( component_delta >= 32767.0 )
    saved_component_delta = 32767.0;
  else
    saved_component_delta = component_delta;
  return sub_1401AD3B0(saved_component_delta);
}

//----- (00000001401AD490) ----------------------------------------------------
float            sub_1401AD490(_WORD *a1, float *a2, int a3)
{
  float result;
  int j;
  int k;
  int i;
  float combined_products;
  float scaled_ratio;
  float squared_component;
  float scaled_value;
  float product_difference;

  squared_component = *a2;
  crt_memset((void *)(uintptr_t)(a1), 0, 4LL * a3);
  result = *a2;
  if ( *a2 != 0.0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      combined_products = 0.0;
      for ( j = 0; j < i; ++j )
        combined_products = combined_products + (float)(*(float *)&a1[2 * j] * a2[i - j]);
      scaled_ratio = -(float)((float)(combined_products + a2[i + 1]) / squared_component);
      *(float *)&a1[2 * i] = scaled_ratio;
      for ( k = 0; k < (i + 1) >> 1; *(float *)&a1[2 * (i - 1 - k++)] = product_difference + (float)(scaled_ratio * scaled_value) )
      {
        scaled_value = *(float *)&a1[2 * k];
        product_difference = *(float *)&a1[2 * (i - 1 - k)];
        *(float *)&a1[2 * k] = scaled_value + (float)(scaled_ratio * product_difference);
      }
      squared_component = squared_component - (float)((float)(scaled_ratio * scaled_ratio) * squared_component);
      result = 0.001 * *a2;
      if ( result > squared_component )
        break;
    }
  }
  return result;
}

//----- (00000001401AD6F0) ----------------------------------------------------
__int64            sub_1401AD6F0(__int64 a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  signed int i;
  signed int j;
  float weighted_sum;
  float *saved_alloca_result;
  int float_word;
  int loaded_word;
  int loaded_word_2;
  int loaded_word_3;
  __int64 unused_local;

  record_word_offset = 4LL * a5 + 15;
  if ( record_word_offset <= 4LL * a5 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (float *)alloca_result;
  for ( i = 0; i < a5; ++i )
    saved_alloca_result[i] = *(float *)(a2 + 4LL * (a5 - i - 1));
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    float_word = *(_DWORD *)(a1 + 4LL * i);
    loaded_word = *(_DWORD *)(a1 + 4LL * (i + 1));
    loaded_word_2 = *(_DWORD *)(a1 + 4LL * (i + 2));
    loaded_word_3 = *(_DWORD *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(saved_alloca_result, (float *)(a1 + 4LL * i - 4LL * a5), (float *)&float_word, a5);
    *(_DWORD *)(a3 + 4LL * i) = float_word;
    *(_DWORD *)(a3 + 4LL * (i + 1)) = loaded_word;
    *(_DWORD *)(a3 + 4LL * (i + 2)) = loaded_word_2;
    *(_DWORD *)(a3 + 4LL * (i + 3)) = loaded_word_3;
  }
  while ( i < a4 )
  {
    weighted_sum = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      weighted_sum = weighted_sum + (float)(saved_alloca_result[j] * *(float *)(a1 + 4LL * (j + i - a5)));
    *(float *)(a3 + 4LL * i++) = weighted_sum;
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401AD990) ----------------------------------------------------
__int64            sub_1401AD990(__int64 a1, float *a2, __int64 a3, signed int a4, signed int a5, __int64 a6)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  unsigned __int64 scaled_index;
  void *alloca_result_2;
  signed int i;
  signed int *saved_alloca_result;
  signed int j;
  float weighted_sum;
  float *saved_alloca_result_2;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  __int64 unused_local;

  record_word_offset = 4LL * a5 + 15;
  if ( record_word_offset <= 4LL * a5 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (float *)alloca_result;
  scaled_index = 4LL * (a5 + a4) + 15;
  if ( scaled_index <= 4LL * (a5 + a4) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result_2;
  for ( i = 0; i < a5; ++i )
    saved_alloca_result_2[i] = a2[a5 - i - 1];
  for ( i = 0; i < a5; ++i )
    *(float *)&saved_alloca_result[i] = -*(float *)(a6 + 4LL * (a5 - i - 1));
  while ( i < a5 + a4 )
    saved_alloca_result[i++] = 0;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    weighted_sum_2 = *(float *)(a1 + 4LL * i);
    weighted_sum_3 = *(float *)(a1 + 4LL * (i + 1));
    weighted_sum_4 = *(float *)(a1 + 4LL * (i + 2));
    weighted_sum_5 = *(float *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(saved_alloca_result_2, (float *)&saved_alloca_result[i], &weighted_sum_2, a5);
    *(float *)&saved_alloca_result[a5 + i] = -weighted_sum_2;
    *(float *)(a3 + 4LL * i) = weighted_sum_2;
    weighted_sum_3 = weighted_sum_3 + (float)(*(float *)&saved_alloca_result[a5 + i] * *a2);
    *(float *)&saved_alloca_result[i + 1 + a5] = -weighted_sum_3;
    *(float *)(a3 + 4LL * (i + 1)) = weighted_sum_3;
    weighted_sum_4 = weighted_sum_4 + (float)(*(float *)&saved_alloca_result[i + 1 + a5] * *a2);
    weighted_sum_4 = weighted_sum_4 + (float)(*(float *)&saved_alloca_result[a5 + i] * a2[1]);
    *(float *)&saved_alloca_result[i + 2 + a5] = -weighted_sum_4;
    *(float *)(a3 + 4LL * (i + 2)) = weighted_sum_4;
    weighted_sum_5 = weighted_sum_5 + (float)(*(float *)&saved_alloca_result[i + 2 + a5] * *a2);
    weighted_sum_5 = weighted_sum_5 + (float)(*(float *)&saved_alloca_result[i + 1 + a5] * a2[1]);
    weighted_sum_5 = weighted_sum_5 + (float)(*(float *)&saved_alloca_result[a5 + i] * a2[2]);
    *(float *)&saved_alloca_result[i + 3 + a5] = -weighted_sum_5;
    *(float *)(a3 + 4LL * (i + 3)) = weighted_sum_5;
  }
  while ( i < a4 )
  {
    weighted_sum = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      weighted_sum = weighted_sum - (float)(saved_alloca_result_2[j] * *(float *)&saved_alloca_result[j + i]);
    *(float *)&saved_alloca_result[a5 + i] = weighted_sum;
    *(float *)(a3 + 4LL * i++) = weighted_sum;
  }
  for ( i = 0; i < a5; ++i )
    *(_DWORD *)(a6 + 4LL * i) = *(_DWORD *)(a3 + 4LL * (a4 - i - 1));
  return 0; /* no caller reads the result */
}

//----- (00000001401ADFA0) ----------------------------------------------------
void               sub_1401ADFA0(float *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int i;
  int j;
  float combined_products;
  signed int integer_difference;
  float *saved_scaled_value;
  float *saved_alloca_result;
  int unused_written_slot;
  __int64 unused_local;

  integer_difference = a6 - a5;
  record_word_offset = 4LL * a6 + 15;
  if ( record_word_offset <= 4LL * a6 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (float *)alloca_result; /* original dynamic allocation, not frame counter */
  if ( a4 )
  {
    for ( i = 0; i < a6; ++i )
      saved_alloca_result[i] = a1[i];
    for ( i = 0; i < a4; ++i )
    {
      saved_alloca_result[i] = a1[i] * *(float *)(a3 + 4LL * i);
      saved_alloca_result[a6 - i - 1] = a1[a6 - i - 1] * *(float *)(a3 + 4LL * i);
    }
    saved_scaled_value = saved_alloca_result;
  }
  else
  {
    saved_scaled_value = a1;
  }
  unused_written_slot = 0;
  sub_1401A9C80(saved_scaled_value, (__int64)saved_scaled_value, a2, integer_difference, a5 + 1);
  for ( j = 0; j <= a5; ++j )
  {
    i = integer_difference + j;
    combined_products = 0.0;
    while ( i < a6 )
    {
      combined_products = combined_products + (float)(saved_scaled_value[i] * saved_scaled_value[i - j]);
      ++i;
    }
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) + combined_products;
  }
  return; /* original void epilogue */
}

//----- (00000001401AE1D0) ----------------------------------------------------
__int64            sub_1401AE1D0(__int64 a1, __int64 a2, int a3, unsigned int a4, float a5, float a6, float a7)
{
  __int64 result;
  int i;
  float combined_products;
  float combined_products_2;
  float combined_products_3;
  float combined_products_4;
  float combined_products_5;

  combined_products_4 = *(float *)(a2 + 4LL * (-a3 - 2));
  combined_products = *(float *)(a2 + 4LL * (-a3 - 1));
  combined_products_2 = *(float *)(a2 + 4LL * -a3);
  combined_products_3 = *(float *)(a2 + 4LL * (1 - a3));
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    combined_products_5 = *(float *)(a2 + 4LL * (i - a3 + 2));
    *(float *)(a1 + 4LL * i) = (float)((float)(*(float *)(a2 + 4LL * i) + (float)(a5 * combined_products_2))
                                     + (float)(a6 * (float)(combined_products_3 + combined_products)))
                             + (float)(a7 * (float)(combined_products_5 + combined_products_4));
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a1 + 4LL * i);
    combined_products_4 = combined_products;
    combined_products = combined_products_2;
    combined_products_2 = combined_products_3;
    combined_products_3 = combined_products_5;
  }
  return result;
}

//----- (00000001401AE360) ----------------------------------------------------
__int64            sub_1401AE360(__int64 a1, int a2)
{
  return (unsigned int)((a2 << 12) + 4 * (*(_DWORD *)(a1 + 4) * a2 - 1) + 256 + 4 * *(_DWORD *)(a1 + 8) * 4 * a2);
}

//----- (00000001401AE3C0) ----------------------------------------------------
__int64            sub_1401AE3C0(_DWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  int byte_count;
  __m128i *unrecovered_register_value;

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 || !a2 )
    return 4294967289LL;
  byte_count = sub_1401AE360(a2, a3);
  crt_memset((void *)(uintptr_t)(a1), 0, byte_count);
  *(_QWORD *)a1 = a2;
  a1[2] = a3;
  a1[3] = a3;
  a1[8] = 1;
  a1[9] = 0;
  a1[10] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[13] = 1;
  a1[19] = a4;
  a1[14] = 1;
  a1[5] = 1;
  a1[11] = -1;
  a1[12] = 0;
  a1[4] = 0;
  a1[7] = 5;
  a1[16] = 24;
  sub_140199190(a1, 4028, unrecovered_register_value);
  return 0;
}

//----- (00000001401AE510) ----------------------------------------------------
int                sub_1401AE510(__int64 a1, int a2, int a3, float *a4, int *a5, int a6, _DWORD *a7)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  float square_root;
  float square_root_2;
  float square_root_3;
  float square_root_4;
  int j;
  float combined_products;
  int shifted_bits;
  int *saved_alloca_result;
  int integer_quotient;
  int saved_shifted_bits;
  float saved_square_root;
  int i;
  float cached_combined_products;
  float scaled_ratio;
  float saved_component_delta;
  BOOL saved_comparison_result;
  float weighted_sum;
  float component_sum;
  float product_difference;
  float state_address;
  float selected_scalar;
  float saved_combined_products;
  BOOL comparison_result;
  float component_delta;
  float cached_component_delta;
  float cached_component_delta_2;
  int unused_written_slot;
  double floor_result;
  double floor_result_2;
  double saved_floor_result;
  double X;
  __int64 unused_local;

  saved_comparison_result = 0;
  saved_shifted_bits = 0;
  selected_scalar = 0.0625;
  record_word_offset = 4LL * a2 + 15;
  if ( record_word_offset <= 4LL * a2 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result;
  *a7 = 0;
  if ( a6 )
    selected_scalar = 0.03125;
  integer_quotient = a2 / 2;
  for ( i = 0; i < a3; ++i )
  {
    shifted_bits = 0;
    combined_products = 0.0;
    product_difference = 0.0;
    for ( j = 0; j < a2; ++j )
    {
      weighted_sum = *(float *)(a1 + 4LL * (a2 * i + j));
      component_sum = combined_products + weighted_sum;
      combined_products = (float)(product_difference + (float)(combined_products + weighted_sum)) - (float)(2.0f * weighted_sum);
      product_difference = weighted_sum - (float)(0.5f * component_sum);
      *(float *)&saved_alloca_result[j] = component_sum;
    }
    crt_memset((void *)(uintptr_t)(saved_alloca_result), 0, 0x30u);
    saved_square_root = 0.0;
    combined_products = 0.0;
    for ( j = 0; j < integer_quotient; ++j )
    {
      state_address = (float)(*(float *)&saved_alloca_result[2 * j] * *(float *)&saved_alloca_result[2 * j])
          + (float)(*(float *)&saved_alloca_result[2 * j + 1] * *(float *)&saved_alloca_result[2 * j + 1]);
      saved_square_root = saved_square_root + state_address;
      *(float *)&saved_alloca_result[j] = combined_products + (float)(selected_scalar * (float)(state_address - combined_products));
      combined_products = *(float *)&saved_alloca_result[j];
    }
    combined_products = 0.0;
    cached_combined_products = 0.0;
    for ( j = integer_quotient - 1; j >= 0; --j )
    {
      *(float *)&saved_alloca_result[j] = combined_products + (float)(0.125f * (float)(*(float *)&saved_alloca_result[j] - combined_products));
      combined_products = *(float *)&saved_alloca_result[j];
      if ( cached_combined_products <= combined_products )
        saved_combined_products = combined_products;
      else
        saved_combined_products = cached_combined_products;
      cached_combined_products = saved_combined_products;
    }
    square_root = sqrt((float)(saved_square_root * cached_combined_products) * 0.5 * (double)integer_quotient);
    saved_square_root = square_root;
    scaled_ratio = (float)integer_quotient / (float)(square_root + 1.0e-15f);
    shifted_bits = 0;
    for ( j = 12; j < integer_quotient - 5; j += 4 )
    {
      if ( floor((float)((float)(64.0f * scaled_ratio) * (float)(*(float *)&saved_alloca_result[j] + 1.0e-15f))) <= 127.0 )
        floor_result = floor((float)((float)(64.0f * scaled_ratio) * (float)(*(float *)&saved_alloca_result[j] + 1.0e-15f)));
      else
        floor_result = 127.0;
      if ( floor_result >= 0.0 )
      {
        if ( floor((float)((float)(64.0f * scaled_ratio) * (float)(*(float *)&saved_alloca_result[j] + 1.0e-15f))) <= 127.0 )
          floor_result_2 = floor((float)((float)(64.0f * scaled_ratio) * (float)(*(float *)&saved_alloca_result[j] + 1.0e-15f)));
        else
          floor_result_2 = 127.0;
        saved_floor_result = floor_result_2;
      }
      else
      {
        saved_floor_result = 0.0;
      }
      unused_written_slot = (int)saved_floor_result;
      shifted_bits += byte_140279C00[(int)saved_floor_result];
    }
    shifted_bits = (shifted_bits << 8) / (6 * (integer_quotient - 17));
    if ( shifted_bits > saved_shifted_bits )
    {
      *a5 = i;
      saved_shifted_bits = shifted_bits;
    }
  }
  comparison_result = saved_shifted_bits > 200;
  saved_comparison_result = comparison_result;
  if ( a6 && saved_comparison_result && saved_shifted_bits < 600 )
  {
    saved_comparison_result = 0;
    *a7 = 1;
  }
  square_root_2 = sqrt((double)(27 * saved_shifted_bits));
  if ( (float)(square_root_2 - 42.0f) >= 0.0 )
  {
    square_root_3 = sqrt((double)(27 * saved_shifted_bits));
    component_delta = square_root_3 - 42.0f;
  }
  else
  {
    component_delta = 0.0;
  }
  saved_component_delta = component_delta;
  if ( component_delta <= 163.0 )
    cached_component_delta = saved_component_delta;
  else
    cached_component_delta = 163.0;
  if ( (float)(0.0068999999f * cached_component_delta) - 0.139 >= 0.0 )
  {
    if ( saved_component_delta <= 163.0 )
      cached_component_delta_2 = saved_component_delta;
    else
      cached_component_delta_2 = 163.0;
    X = (float)(0.0068999999f * cached_component_delta_2) - 0.139;
  }
  else
  {
    X = 0.0;
  }
  square_root_4 = sqrt(X);
  *a4 = square_root_4;
  return saved_comparison_result; /* native EAX transient decision */
}

//----- (00000001401AEB90) ----------------------------------------------------
__int64            sub_1401AEB90(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i;
  int iteration_count;
  float component_sum;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float saved_weighted_sum;
  float component_delta;
  int input_value;
  float weighted_sum_5;
  float selected_scalar;
  float saved_weighted_sum_2;
  float comparison_operand;
  float component_delta_2;
  int input_value_2;
  BOOL comparison_result;
  float float_buffer[28];
  __int64 unused_local;

  component_sum = 0.0;
  if ( a6 == 1 )
  {
    float_buffer[a4] = *(float *)(a2 + 4LL * a4);
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( (float)(float_buffer[i - 1] - 1.0) <= *(float *)(a2 + 4LL * i) )
        weighted_sum = *(float *)(a2 + 4LL * i);
      else
        weighted_sum = float_buffer[i - 1] - 1.0;
      float_buffer[i] = weighted_sum;
    }
  }
  else
  {
    if ( *(float *)(a2 + 4LL * a4) <= *(float *)(a2 + 4LL * (a3 + a4)) )
      weighted_sum_2 = *(float *)(a2 + 4LL * (a3 + a4));
    else
      weighted_sum_2 = *(float *)(a2 + 4LL * a4);
    float_buffer[a4] = weighted_sum_2;
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
        weighted_sum_3 = *(float *)(a2 + 4LL * (a3 + i));
      else
        weighted_sum_3 = *(float *)(a2 + 4LL * i);
      if ( (float)(float_buffer[i - 1] - 1.0) <= weighted_sum_3 )
      {
        if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
          weighted_sum_4 = *(float *)(a2 + 4LL * (a3 + i));
        else
          weighted_sum_4 = *(float *)(a2 + 4LL * i);
        saved_weighted_sum = weighted_sum_4;
      }
      else
      {
        saved_weighted_sum = float_buffer[i - 1] - 1.0;
      }
      float_buffer[i] = saved_weighted_sum;
    }
  }
  for ( i = a5 - 2; i >= a4; --i )
  {
    if ( float_buffer[i] <= (float)(float_buffer[i + 1] - 1.0) )
      component_delta = float_buffer[i + 1] - 1.0;
    else
      component_delta = float_buffer[i];
    float_buffer[i] = component_delta;
  }
  iteration_count = 0;
  do
  {
    if ( a4 >= 2 )
      input_value = a4;
    else
      input_value = 2;
    for ( i = input_value; i < a5 - 1; ++i )
    {
      if ( *(float *)(a1 + 4LL * (a3 * iteration_count + i)) >= 0.0 )
        weighted_sum_5 = *(float *)(a1 + 4LL * (a3 * iteration_count + i));
      else
        weighted_sum_5 = 0.0;
      saved_weighted_sum_2 = weighted_sum_5;
      if ( float_buffer[i] >= 0.0 )
        selected_scalar = float_buffer[i];
      else
        selected_scalar = 0.0;
      comparison_operand = selected_scalar;
      if ( (float)(saved_weighted_sum_2 - selected_scalar) >= 0.0 )
        component_delta_2 = saved_weighted_sum_2 - comparison_operand;
      else
        component_delta_2 = 0.0;
      component_sum = component_sum + component_delta_2;
    }
    ++iteration_count;
  }
  while ( iteration_count < a6 );
  if ( a4 >= 2 )
    input_value_2 = a4;
  else
    input_value_2 = 2;
  comparison_result = (float)(component_sum / (float)((a5 - 1 - input_value_2) * a6)) > 1.0;
  return (unsigned int)comparison_result; /* 0x1401AF0C8: mov eax, dword ptr [rsp + 0x40] */
}

//----- (00000001401AF0F0) ----------------------------------------------------
__int64            sub_1401AF0F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 result;
  int j;
  int k;
  int input_value;
  signed int iteration_count;
  signed int iteration_count_2;
  int shifted_bits;
  int i;
  int integer_quotient;
  int loaded_word;
  int loaded_word_2;

  loaded_word_2 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    input_value = a2;
    shifted_bits = *(_DWORD *)(a1 + 48);
    loaded_word = *(_DWORD *)(a1 + 40);
  }
  else
  {
    input_value = 1;
    shifted_bits = *(_DWORD *)(a1 + 48) << a7;
    loaded_word = *(_DWORD *)(a1 + 40) - a7;
  }
  iteration_count = 0;
  do
  {
    for ( i = 0; i < input_value; ++i )
      sub_1401A1860(
        a1 + 80,
        a3 + 4LL * (loaded_word_2 + shifted_bits * input_value) * iteration_count + 4LL * shifted_bits * i,
        (float *)(a4 + 4LL * (input_value * shifted_bits * iteration_count + i)),
        *(float **)(a1 + 72),
        loaded_word_2,
        loaded_word,
        input_value);
    ++iteration_count;
    result = a6;
  }
  while ( iteration_count < (int)a6 );
  if ( a6 == 2 && a5 == 1 )
  {
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)(shifted_bits * input_value);
      if ( j >= (int)result )
        break;
      *(float *)(a4 + 4LL * j) = (float)(0.5 * *(float *)(a4 + 4LL * j))
                               + (float)(0.5 * *(float *)(a4 + 4LL * (j + shifted_bits * input_value)));
    }
  }
  if ( a8 != 1 )
  {
    iteration_count_2 = 0;
    do
    {
      integer_quotient = shifted_bits * input_value / a8;
      for ( k = 0; k < integer_quotient; ++k )
        *(float *)(a4 + 4LL * (k + shifted_bits * input_value * iteration_count_2)) = *(float *)(a4 + 4LL * (k + shifted_bits * input_value * iteration_count_2)) * (float)a8;
      crt_memset((void *)(uintptr_t)((_WORD *)(a4 + 4LL * (integer_quotient + shifted_bits * input_value * iteration_count_2++))), 0, 4LL * (shifted_bits * input_value - integer_quotient));
      result = a5;
    }
    while ( iteration_count_2 < (int)a5 );
  }
  return result;
}

//----- (00000001401AF440) ----------------------------------------------------
float            sub_1401AF440(__int64 a1, int a2, int a3, float a4)
{
  float weighted_sum;
  float component_sum;
  int i;

  component_sum = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    weighted_sum = *(double *)SR_VEC_READ_LANES(128, sub_140244390(*(float *)(a1 + 4LL * i)), u64);
    component_sum = component_sum + weighted_sum;
  }
  return component_sum + (float)((float)((float)a3 * a4) * component_sum);
}

//----- (00000001401AF4F0) ----------------------------------------------------
int                sub_1401AF4F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        float a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  unsigned __int64 shifted_bits;
  __int64 integer_sum;
  void *alloca_result_2;
  unsigned __int64 shifted_bits_2;
  __int64 integer_sum_2;
  void *alloca_result_3;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_4;
  unsigned __int64 record_word_offset_3;
  void *alloca_result_5;
  int scaled_index;
  int absolute_value;
  int absolute_value_2;
  int absolute_value_3;
  int absolute_value_4;
  int absolute_value_5;
  int absolute_value_6;
  int absolute_value_7;
  int absolute_value_8;
  int table_value;
  int i;
  int loaded_word;
  int loaded_word_2;
  int j;
  int k;
  int shifted_bits_3;
  float component_sum;
  int selection_flag;
  int *buffer_cursor;
  int saved_loaded_word;
  int saved_loaded_word_2;
  float saved_component_sum;
  int integer_difference;
  float scaled_value;
  BOOL saved_comparison_result;
  __m128i *source_buffer;
  int input_value;
  BOOL condition_flag;
  int integer_difference_2;
  int input_value_2;
  int saved_loaded_word_3;
  int saved_loaded_word_4;
  int saved_loaded_word_5;
  int input_value_3;
  int cached_loaded_word;
  int cached_loaded_word_2;
  BOOL comparison_result;
  float component_delta;
  BOOL comparison_result_2;
  __m128i *destination_buffer;
  int unused_written_slot;
  int unused_written_slot_2;
  int cached_loaded_word_3;
  int cached_loaded_word_4;
  int unused_written_slot_3;
  int unused_written_slot_4;
  int *saved_alloca_result;
  int *saved_alloca_result_2;
  _DWORD scratch_buffer[2];
  __int64 selection_flag_2;
  __int64 selection_flag_3;
  __int64 cached_i;
  __int64 cached_i_2;
  __int64 selection_flag_4;
  __int64 selection_flag_5;
  __int64 cached_i_3;
  __int64 cached_i_4;
  __int64 unused_local;

  selection_flag = 0;
  if ( (float)(0.5 - a9) >= -0.25 )
    component_delta = 0.5 - a9;
  else
    component_delta = -0.25;
  scaled_value = 0.039999999 * component_delta;
  record_word_offset = 4LL * a2 + 15;
  if ( record_word_offset <= 4LL * a2 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  buffer_cursor = (int *)alloca_result;
  shifted_bits = 4LL
      * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a2 - 1))) << a8);
  integer_sum = shifted_bits + 15;
  if ( shifted_bits + 15 <= shifted_bits )
    integer_sum = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(integer_sum & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (__m128i *)alloca_result_2;
  shifted_bits_2 = 4LL
      * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a2 - 1))) << a8);
  integer_sum_2 = shifted_bits_2 + 15;
  if ( shifted_bits_2 + 15 <= shifted_bits_2 )
    integer_sum_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(integer_sum_2 & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer = (__m128i *)alloca_result_3;
  record_word_offset_2 = 4LL * a2 + 15;
  if ( record_word_offset_2 <= 4LL * a2 )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result_4;
  record_word_offset_3 = 4LL * a2 + 15;
  if ( record_word_offset_3 <= 4LL * a2 )
    record_word_offset_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_5 = alloca(record_word_offset_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result_5;
  for ( i = 0; i < a2; ++i )
  {
    integer_difference = 0;
    shifted_bits_3 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a8;
    comparison_result_2 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) == 1;
    saved_comparison_result = comparison_result_2;
    unused_written_slot_3 = a7 * a10;
    unused_written_slot_4 = a7 * a10;
    crt_memcpy(
      source_buffer,
      (     __m128i *)(a6 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a8) + a7 * a10)),
      4LL * shifted_bits_3);
    if ( a3 )
      input_value = a8;
    else
      input_value = 0;
    component_sum = sub_1401AF440((__int64)source_buffer, shifted_bits_3, input_value, scaled_value);
    saved_component_sum = component_sum;
    if ( a3 )
    {
      if ( !saved_comparison_result )
      {
        crt_memcpy(destination_buffer, source_buffer, 4LL * shifted_bits_3);
        unused_written_slot = 1;
        sub_1401A3F20((__int64)destination_buffer, shifted_bits_3 >> a8, 1 << a8);
        component_sum = sub_1401AF440((__int64)destination_buffer, shifted_bits_3, a8 + 1, scaled_value);
        if ( saved_component_sum > component_sum )
        {
          saved_component_sum = component_sum;
          integer_difference = -1;
        }
      }
    }
    for ( j = 0; ; ++j )
    {
      condition_flag = !a3 && !saved_comparison_result;
      if ( j >= condition_flag + a8 )
        break;
      if ( a3 )
        integer_difference_2 = a8 - j - 1;
      else
        integer_difference_2 = j + 1;
      unused_written_slot_2 = 1;
      sub_1401A3F20((__int64)source_buffer, shifted_bits_3 >> j, 1 << j);
      component_sum = sub_1401AF440((__int64)source_buffer, shifted_bits_3, integer_difference_2, scaled_value);
      if ( saved_component_sum > component_sum )
      {
        saved_component_sum = component_sum;
        integer_difference = j + 1;
      }
    }
    if ( a3 )
      scaled_index = 2 * integer_difference;
    else
      scaled_index = -2 * integer_difference;
    buffer_cursor[i] = scaled_index;
    if ( saved_comparison_result && (!buffer_cursor[i] || buffer_cursor[i] == -2 * a8) )
      --buffer_cursor[i];
  }
  selection_flag = 0;
  for ( k = 0; k < 2; ++k )
  {
    selection_flag_2 = 0;
    absolute_value = abs(*buffer_cursor - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
    loaded_word = absolute_value * *(_DWORD *)(a11 + selection_flag_2);
    if ( a3 )
      input_value_2 = 0;
    else
      input_value_2 = a5;
    selection_flag_3 = 0;
    absolute_value_2 = abs(*buffer_cursor - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
    loaded_word_2 = input_value_2 + absolute_value_2 * *(_DWORD *)(a11 + selection_flag_3);
    for ( i = 1; i < a2; ++i )
    {
      if ( loaded_word >= a5 + loaded_word_2 )
        saved_loaded_word_3 = a5 + loaded_word_2;
      else
        saved_loaded_word_3 = loaded_word;
      cached_loaded_word_3 = saved_loaded_word_3;
      if ( a5 + loaded_word >= loaded_word_2 )
        saved_loaded_word_4 = loaded_word_2;
      else
        saved_loaded_word_4 = a5 + loaded_word;
      cached_loaded_word_4 = saved_loaded_word_4;
      cached_i = i;
      absolute_value_3 = abs(buffer_cursor[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
      loaded_word = absolute_value_3 * *(_DWORD *)(a11 + 4 * cached_i) + cached_loaded_word_3;
      cached_i_2 = i;
      absolute_value_4 = abs(buffer_cursor[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
      loaded_word_2 = absolute_value_4 * *(_DWORD *)(a11 + 4 * cached_i_2) + cached_loaded_word_4;
    }
    if ( loaded_word >= loaded_word_2 )
      saved_loaded_word_5 = loaded_word_2;
    else
      saved_loaded_word_5 = loaded_word;
    loaded_word = saved_loaded_word_5;
    scratch_buffer[k] = saved_loaded_word_5;
  }
  if ( scratch_buffer[1] < scratch_buffer[0] && a3 )
    selection_flag = 1;
  selection_flag_4 = 0;
  absolute_value_5 = abs(*buffer_cursor - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * selection_flag]);
  loaded_word = absolute_value_5 * *(_DWORD *)(a11 + selection_flag_4);
  if ( a3 )
    input_value_3 = 0;
  else
    input_value_3 = a5;
  selection_flag_5 = 0;
  absolute_value_6 = abs(*buffer_cursor - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * selection_flag]);
  loaded_word_2 = input_value_3 + absolute_value_6 * *(_DWORD *)(a11 + selection_flag_5);
  for ( i = 1; i < a2; ++i )
  {
    saved_loaded_word = loaded_word;
    saved_loaded_word_2 = a5 + loaded_word_2;
    if ( loaded_word >= a5 + loaded_word_2 )
    {
      cached_loaded_word = saved_loaded_word_2;
      saved_alloca_result_2[i] = 1;
    }
    else
    {
      cached_loaded_word = saved_loaded_word;
      saved_alloca_result_2[i] = 0;
    }
    saved_loaded_word = a5 + loaded_word;
    saved_loaded_word_2 = loaded_word_2;
    if ( a5 + loaded_word >= loaded_word_2 )
    {
      cached_loaded_word_2 = saved_loaded_word_2;
      saved_alloca_result[i] = 1;
    }
    else
    {
      cached_loaded_word_2 = saved_loaded_word;
      saved_alloca_result[i] = 0;
    }
    cached_i_3 = i;
    absolute_value_7 = abs(buffer_cursor[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * selection_flag]);
    loaded_word = absolute_value_7 * *(_DWORD *)(a11 + 4 * cached_i_3) + cached_loaded_word;
    cached_i_4 = i;
    absolute_value_8 = abs(buffer_cursor[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * selection_flag]);
    loaded_word_2 = absolute_value_8 * *(_DWORD *)(a11 + 4 * cached_i_4) + cached_loaded_word_2;
  }
  comparison_result = loaded_word >= loaded_word_2;
  *(_DWORD *)(a4 + 4LL * (a2 - 1)) = comparison_result;
  for ( i = a2 - 2; i >= 0; --i )
  {
    if ( *(_DWORD *)(a4 + 4LL * (i + 1)) == 1 )
      table_value = saved_alloca_result[i + 1];
    else
      table_value = saved_alloca_result_2[i + 1];
    *(_DWORD *)(a4 + 4LL * i) = table_value;
  }
  return selection_flag; /* original result ABI */
}

//----- (00000001401B0110) ----------------------------------------------------
__int64            sub_1401B0110(int a1, signed int a2, int a3, __int64 a4, int a5, int a6, _DWORD *a7)
{
  __int64 result;
  int i;
  int j;
  int option_flags;
  unsigned int record_word_offset;
  unsigned int integer_difference;
  int loaded_word;
  int cached_selection_code;
  int call_result;
  int selection_code;
  BOOL comparison_result;
  int selection_code_2;

  record_word_offset = 8 * a7[2];
  call_result = sub_14019A0A0((__int64)a7);
  if ( a3 )
    selection_code = 2;
  else
    selection_code = 4;
  cached_selection_code = selection_code;
  comparison_result = a5 > 0 && call_result + selection_code + 1 <= record_word_offset;
  integer_difference = record_word_offset - comparison_result;
  option_flags = 0;
  loaded_word = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( cached_selection_code + call_result > integer_difference )
    {
      *(_DWORD *)(a4 + 4LL * i) = loaded_word;
    }
    else
    {
      sub_14019A450(a7, loaded_word ^ *(_DWORD *)(a4 + 4LL * i), cached_selection_code);
      call_result = sub_14019A0A0((__int64)a7);
      loaded_word = *(_DWORD *)(a4 + 4LL * i);
      option_flags |= loaded_word;
    }
    if ( a3 )
      selection_code_2 = 4;
    else
      selection_code_2 = 5;
    cached_selection_code = selection_code_2;
  }
  if ( !comparison_result || byte_14027BB98[8 * a5 + 4 * a3 + option_flags] == byte_14027BB98[8 * a5 + 2 + 4 * a3 + option_flags] )
    a6 = 0;
  else
    sub_14019A450(a7, a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * a6 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}

//----- (00000001401B0380) ----------------------------------------------------
__int64            sub_1401B0380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        __int64 a8,
        float *a9,
        float a10,
        int a11,
        float a12,
        int a13)
{
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float scaled_value_4;
  float scaled_value_5;
  float scaled_value_6;
  float log_result;
  float log_result_2;
  float log_result_3;
  float weighted_sum;
  int i;
  int j;
  int k;
  float shifted_bits;
  float product_difference;
  float shifted_bits_2;
  float scaled_value_7;
  float cached_scaled_value;
  float combined_products;
  float product_difference_2;
  int floor_result;
  float saved_log_result;
  int iteration_count;
  float saved_scaled_value;
  float shifted_bits_3;
  float saved_scaled_value_2;
  float saved_scaled_value_3;
  float saved_log_result_2;
  float component_delta;
  float scaled_ratio;
  float scaled_ratio_2;
  float saved_scaled_ratio;
  float weighted_sum_2;
  float weighted_sum_3;
  float saved_weighted_sum;
  int saved_floor_result;
  float scaled_value_8;

  combined_products = 0.0;
  shifted_bits = 5.0;
  if ( a13 >= 64000 )
  {
    if ( a13 < 80000 )
      shifted_bits = (float)(0.0625 * (float)((a13 - 64000) >> 10)) + 4.0;
  }
  else
  {
    shifted_bits = 4.0;
  }
  if ( a6 == 2 )
  {
    shifted_bits_2 = 0.0;
    for ( i = 0; i < 8; ++i )
      shifted_bits_2 = shifted_bits_2
          + sub_1401A9C00(
              a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5),
              a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5) + a7),
              (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a5);
    scaled_value_7 = 0.125 * shifted_bits_2;
    scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(scaled_value_7), u64);
    if ( scaled_value <= 1.0 )
    {
      scaled_value_2 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(scaled_value_7), u64);
      saved_scaled_value = scaled_value_2;
    }
    else
    {
      saved_scaled_value = 1.0;
    }
    cached_scaled_value = saved_scaled_value;
    for ( j = 8; j < a11; ++j )
    {
      shifted_bits_3 = sub_1401A9C00(
              a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5),
              a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5) + a7),
              (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (j + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j)) << a5);
      scaled_value_3 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(shifted_bits_3), u64);
      if ( scaled_value_3 <= cached_scaled_value )
      {
        scaled_value_4 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(shifted_bits_3), u64);
        saved_scaled_value_2 = scaled_value_4;
      }
      else
      {
        saved_scaled_value_2 = cached_scaled_value;
      }
      cached_scaled_value = saved_scaled_value_2;
    }
    scaled_value_5 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(cached_scaled_value), u64);
    if ( scaled_value_5 <= 1.0 )
    {
      scaled_value_6 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(cached_scaled_value), u64);
      saved_scaled_value_3 = scaled_value_6;
    }
    else
    {
      saved_scaled_value_3 = 1.0;
    }
    log_result = 1.442695040888963 * log((float)(1.001 - (float)(saved_scaled_value * saved_scaled_value)));
    saved_log_result = log_result;
    scaled_value_8 = 0.5 * log_result;
    log_result_2 = 1.442695040888963 * log((float)(1.001 - (float)(saved_scaled_value_3 * saved_scaled_value_3)));
    if ( scaled_value_8 <= log_result_2 )
    {
      log_result_3 = 1.442695040888963 * log((float)(1.001 - (float)(saved_scaled_value_3 * saved_scaled_value_3)));
      saved_log_result_2 = log_result_3;
    }
    else
    {
      saved_log_result_2 = 0.5 * saved_log_result;
    }
    if ( (float)(0.75 * saved_log_result) >= -4.0 )
      component_delta = 0.75 * saved_log_result;
    else
      component_delta = -4.0;
    shifted_bits = shifted_bits + component_delta;
    if ( (float)-(float)(0.5 * saved_log_result_2) <= (float)(*a9 + 0.25) )
      weighted_sum = -(float)(0.5 * saved_log_result_2);
    else
      weighted_sum = *a9 + 0.25;
    *a9 = weighted_sum;
  }
  iteration_count = 0;
  do
  {
    for ( k = 0; k < a4 - 1; ++k )
      combined_products = combined_products + (float)(*(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * iteration_count + k)) * (float)(2 * k + 2 - a4));
    ++iteration_count;
  }
  while ( iteration_count < a6 );
  product_difference_2 = combined_products / (float)((a4 - 1) * a6);
  if ( (float)((float)(product_difference_2 + 1.0) / 6.0) <= 2.0 )
    scaled_ratio = (float)(product_difference_2 + 1.0) / 6.0;
  else
    scaled_ratio = 2.0;
  if ( scaled_ratio >= -2.0 )
  {
    if ( (float)((float)(product_difference_2 + 1.0) / 6.0) <= 2.0 )
      scaled_ratio_2 = (float)(product_difference_2 + 1.0) / 6.0;
    else
      scaled_ratio_2 = 2.0;
    saved_scaled_ratio = scaled_ratio_2;
  }
  else
  {
    saved_scaled_ratio = -2.0;
  }
  product_difference = (float)((float)(shifted_bits - saved_scaled_ratio) - a12) - (float)(2.0 * a10);
  if ( *(_DWORD *)a8 )
  {
    if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
      weighted_sum_2 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
    else
      weighted_sum_2 = 2.0;
    if ( weighted_sum_2 >= -2.0 )
    {
      if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
        weighted_sum_3 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
      else
        weighted_sum_3 = 2.0;
      saved_weighted_sum = weighted_sum_3;
    }
    else
    {
      saved_weighted_sum = -2.0;
    }
    product_difference = product_difference - saved_weighted_sum;
  }
  floor_result = (int)floor((float)(product_difference + 0.5));
  if ( floor_result <= 10 )
    saved_floor_result = floor_result;
  else
    saved_floor_result = 10;
  if ( saved_floor_result >= 0 )
  {
    if ( floor_result <= 10 )
      return (unsigned int)floor_result;
    else
      return 10;
  }
  else
  {
    return 0;
  }
}

//----- (00000001401B0C90) ----------------------------------------------------
_BOOL8            sub_1401B0C90(__int64 a1, __int64 a2, int a3, int a4)
{
  float scaled_value;
  float scaled_value_2;
  float weighted_sum;
  float product_difference;
  int i;
  int j;
  float component_delta;
  float scaled_value_3;
  float weighted_sum_2;
  float weighted_sum_3;
  int selection_code;
  float component_delta_2;
  float saved_scaled_value;
  float saved_weighted_sum;

  component_delta_2 = 1.0e-15;
  component_delta = 1.0e-15;
  for ( i = 0; i < 13; ++i )
  {
    for ( j = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a3;
          j < *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) << a3;
          ++j )
    {
      weighted_sum_2 = *(float *)(a2 + 4LL * j);
      weighted_sum_3 = *(float *)(a2 + 4LL * (j + a4));
      scaled_value = *(double *)SR_VEC_READ_LANES(128, sub_140244390(weighted_sum_2), u64);
      saved_scaled_value = scaled_value;
      scaled_value_2 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(weighted_sum_3), u64);
      component_delta_2 = component_delta_2 + (float)(saved_scaled_value + scaled_value_2);
      weighted_sum = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(weighted_sum_2 + weighted_sum_3)), u64);
      saved_weighted_sum = weighted_sum;
      product_difference = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(weighted_sum_2 - weighted_sum_3)), u64);
      component_delta = component_delta + (float)(saved_weighted_sum + product_difference);
    }
  }
  scaled_value_3 = 0.70710701 * component_delta;
  selection_code = 13;
  if ( a3 <= 1 )
    selection_code = 5;
  return (float)((float)(selection_code + (*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1))) * scaled_value_3) > (float)((float)(*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1)) * component_delta_2);
}

//----- (00000001401B0ED0) ----------------------------------------------------
float            sub_1401B0ED0(float *a1)
{
  float saved_source_component_y;
  float loaded_word;
  float table_value;
  float source_component_z;
  float source_component_y;
  float saved_loaded_word;

  source_component_z = a1[2];
  if ( *a1 <= a1[1] )
  {
    source_component_y = *a1;
    loaded_word = a1[1];
  }
  else
  {
    source_component_y = a1[1];
    loaded_word = *a1;
  }
  if ( a1[3] <= a1[4] )
  {
    saved_source_component_y = a1[3];
    table_value = a1[4];
  }
  else
  {
    saved_source_component_y = a1[4];
    table_value = a1[3];
  }
  if ( source_component_y > saved_source_component_y )
  {
    saved_source_component_y = source_component_y;
    saved_loaded_word = loaded_word;
    loaded_word = table_value;
    table_value = saved_loaded_word;
  }
  if ( source_component_z <= loaded_word )
  {
    if ( saved_source_component_y <= source_component_z )
    {
      if ( table_value <= source_component_z )
        return table_value;
      else
        return a1[2];
    }
    else if ( saved_source_component_y <= loaded_word )
    {
      return saved_source_component_y;
    }
    else
    {
      return loaded_word;
    }
  }
  else if ( saved_source_component_y <= loaded_word )
  {
    if ( loaded_word <= table_value )
      return loaded_word;
    else
      return table_value;
  }
  else if ( saved_source_component_y <= source_component_z )
  {
    return saved_source_component_y;
  }
  else
  {
    return a1[2];
  }
}

//----- (00000001401B1160) ----------------------------------------------------
float            sub_1401B1160(float *a1)
{
  float loaded_word;
  float source_component_z;
  float loaded_word_2;

  if ( *a1 <= a1[1] )
  {
    loaded_word_2 = *a1;
    loaded_word = a1[1];
  }
  else
  {
    loaded_word_2 = a1[1];
    loaded_word = *a1;
  }
  source_component_z = a1[2];
  if ( source_component_z > loaded_word )
    return loaded_word;
  if ( source_component_z <= loaded_word_2 )
    return loaded_word_2;
  return a1[2];
}

//----- (00000001401B1250) ----------------------------------------------------
float              sub_1401B1250(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _WORD *a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int *a16,
        int a17,
        __int64 a18,
        _DWORD *a19,
        __int64 a20,
        __int64 a21)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_2;
  unsigned __int64 record_word_offset_3;
  void *alloca_result_3;
  unsigned __int64 record_word_offset_4;
  void *alloca_result_4;
  float combined_products;
  float combined_products_2;
  float weighted_sum;
  float combined_products_3;
  float exp_result;
  double floor_result;
  int i;
  int element_index;
  int *saved_alloca_result;
  float *state_address;
  float component_delta;
       __m128i *p_i;
  float saved_combined_products;
  int state_address_2;
  int saved_shifted_bits;
  int shifted_bits;
  float product_difference;
  float selected_scalar;
  int integer_quotient;
  int *saved_alloca_result_2;
  float component_delta_2;
  float component_delta_3;
  float saved_component_delta;
  int floor_result_2;
  int floor_result_3;
  int saved_floor_result;
  float weighted_sum_2;
  int cached_i;
  float weighted_sum_3;
  float weighted_sum_4;
  float saved_weighted_sum;
  float component_delta_4;
  float saved_component_delta_2;
  float source_component_y;
  float component_delta_5;
  float component_delta_6;
  int table_value;
  float weighted_sum_5;
  float combined_products_4;
  float combined_products_5;
  float combined_products_6;
  float combined_products_7;
  int loaded_word;
  float scaled_value;
  int comparison_result;
  int table_value_2;
  int shifted_bits_2;
  float combined_products_8;
  __int32 masked_bits;
  __int32 masked_bits_2;
  __int32 masked_bits_3;
  int unused_written_slot;
  int unused_written_slot_2;
  float comparison_operand;
  int shifted_bits_3;
  __m128i *destination_buffer;
  __int64 unused_local;

  saved_shifted_bits = 0;
  record_word_offset = 4LL * a3 * a6 + 15;
  if ( record_word_offset <= 4LL * a3 * a6 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = (int *)alloca_result;
  record_word_offset_2 = 4LL * a3 * a6 + 15;
  if ( record_word_offset_2 <= 4LL * a3 * a6 )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result_2;
  crt_memset((void *)(uintptr_t)(a7), 0, 4LL * a3);
  saved_combined_products = -31.9f;
  for ( i = 0; i < a5; ++i )
    *(float *)&saved_alloca_result_2[i] = (float)((float)((float)((float)(0.0625 * (float)*(__int16 *)(a9 + 2LL * i)) + 0.5)
                                      + (float)(9 - a8))
                              - flt_140282A10[i])
                      + (float)(0.0062000002f * (float)((i + 5) * (i + 5)));
  element_index = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( saved_combined_products <= (float)(*(float *)(a1 + 4LL * (i + a3 * element_index)) - *(float *)&saved_alloca_result_2[i]) )
        combined_products_8 = *(float *)(a1 + 4LL * (i + a3 * element_index)) - *(float *)&saved_alloca_result_2[i];
      else
        combined_products_8 = saved_combined_products;
      saved_combined_products = combined_products_8;
    }
    ++element_index;
  }
  while ( element_index < a6 );
  record_word_offset_3 = 4LL * a3 + 15;
  if ( record_word_offset_3 <= 4LL * a3 )
    record_word_offset_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(record_word_offset_3 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = (__m128i *)alloca_result_3;
  record_word_offset_4 = 4LL * a3 + 15;
  if ( record_word_offset_4 <= 4LL * a3 )
    record_word_offset_4 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(record_word_offset_4 & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer = (__m128i *)alloca_result_4;
  for ( i = 0; i < a5; ++i )
    *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] = *(float *)(a1 + 4LL * i) - *(float *)&saved_alloca_result_2[i];
  if ( a6 == 2 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&saved_alloca_result_2[i]) )
        *(float *)&masked_bits = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&saved_alloca_result_2[i];
      else
        masked_bits = SR_VEC_PTR_LANES(128, p_i, i32)[i];
      SR_VEC_PTR_LANES(128, p_i, i32)[i] = masked_bits;
    }
  }
  crt_memcpy(destination_buffer, p_i, 4LL * a5);
  for ( i = 1; i < a5; ++i )
  {
    if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i - 1] - 2.0) )
      *(float *)&masked_bits_2 = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i - 1] - 2.0;
    else
      masked_bits_2 = SR_VEC_PTR_LANES(128, p_i, i32)[i];
    SR_VEC_PTR_LANES(128, p_i, i32)[i] = masked_bits_2;
  }
  for ( i = a5 - 2; i >= 0; --i )
  {
    if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i + 1] - 3.0) )
      *(float *)&masked_bits_3 = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i + 1] - 3.0;
    else
      masked_bits_3 = SR_VEC_PTR_LANES(128, p_i, i32)[i];
    SR_VEC_PTR_LANES(128, p_i, i32)[i] = masked_bits_3;
  }
  for ( i = 0; i < a5; ++i )
  {
    if ( (float)(saved_combined_products - 12.0) >= 0.0 )
      component_delta_2 = saved_combined_products - 12.0;
    else
      component_delta_2 = 0.0;
    if ( component_delta_2 <= *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] )
    {
      saved_component_delta = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i];
    }
    else
    {
      if ( (float)(saved_combined_products - 12.0) >= 0.0 )
        component_delta_3 = saved_combined_products - 12.0;
      else
        component_delta_3 = 0.0;
      saved_component_delta = component_delta_3;
    }
    product_difference = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i] - saved_component_delta;
    if ( (int)floor((float)(product_difference + 0.5)) <= 0 )
      floor_result_2 = -(int)floor((float)(product_difference + 0.5));
    else
      floor_result_2 = 0;
    if ( floor_result_2 <= 5 )
    {
      if ( (int)floor((float)(product_difference + 0.5)) <= 0 )
        floor_result_3 = -(int)floor((float)(product_difference + 0.5));
      else
        floor_result_3 = 0;
      saved_floor_result = floor_result_3;
    }
    else
    {
      saved_floor_result = 5;
    }
    unused_written_slot = saved_floor_result;
    unused_written_slot_2 = 32;
    *(_DWORD *)(a21 + 4LL * i) = 32 >> saved_floor_result;
  }
  if ( a15 <= 50 || a14 < 1 || a17 )
  {
    for ( i = a4; i < a5; ++i )
      *(_DWORD *)(a20 + 4LL * i) = 13;
  }
  else
  {
    cached_i = 0;
    element_index = 0;
    do
    {
      state_address = (float *)&saved_alloca_result[a3 * element_index];
      *state_address = *(float *)(a2 + 4LL * a3 * element_index);
      for ( i = 1; i < a5; ++i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * element_index)) > (float)(*(float *)(a2 + 4LL * (a3 * element_index + i - 1)) + 0.5) )
          cached_i = i;
        if ( *(float *)(a2 + 4LL * (i + a3 * element_index)) <= (float)(state_address[i - 1] + 1.5) )
          weighted_sum_2 = *(float *)(a2 + 4LL * (i + a3 * element_index));
        else
          weighted_sum_2 = state_address[i - 1] + 1.5;
        state_address[i] = weighted_sum_2;
      }
      for ( i = cached_i - 1; i >= 0; --i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * element_index)) <= (float)(state_address[i + 1] + 2.0) )
          weighted_sum_3 = *(float *)(a2 + 4LL * (i + a3 * element_index));
        else
          weighted_sum_3 = state_address[i + 1] + 2.0;
        if ( weighted_sum_3 <= state_address[i] )
        {
          if ( *(float *)(a2 + 4LL * (i + a3 * element_index)) <= (float)(state_address[i + 1] + 2.0) )
            weighted_sum_4 = *(float *)(a2 + 4LL * (i + a3 * element_index));
          else
            weighted_sum_4 = state_address[i + 1] + 2.0;
          saved_weighted_sum = weighted_sum_4;
        }
        else
        {
          saved_weighted_sum = state_address[i];
        }
        state_address[i] = saved_weighted_sum;
      }
      selected_scalar = 1.0;
      for ( i = 2; i < a5 - 2; ++i )
      {
        comparison_operand = state_address[i];
        combined_products = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * element_index + i - 2)));
        if ( comparison_operand <= (float)(combined_products - selected_scalar) )
        {
          combined_products_2 = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * element_index + i - 2)));
          component_delta_4 = combined_products_2 - selected_scalar;
        }
        else
        {
          component_delta_4 = state_address[i];
        }
        state_address[i] = component_delta_4;
      }
      weighted_sum = sub_1401B1160((float *)(a2 + 4LL * a3 * element_index));
      component_delta = weighted_sum - selected_scalar;
      if ( *state_address <= (float)(weighted_sum - selected_scalar) )
        saved_component_delta_2 = component_delta;
      else
        saved_component_delta_2 = *state_address;
      *state_address = saved_component_delta_2;
      if ( state_address[1] <= component_delta )
        source_component_y = component_delta;
      else
        source_component_y = state_address[1];
      state_address[1] = source_component_y;
      combined_products_3 = sub_1401B1160((float *)(a2 + 4LL * (a3 * element_index + a5 - 3)));
      component_delta = combined_products_3 - selected_scalar;
      if ( state_address[a5 - 2] <= (float)(combined_products_3 - selected_scalar) )
        component_delta_5 = component_delta;
      else
        component_delta_5 = state_address[a5 - 2];
      state_address[a5 - 2] = component_delta_5;
      if ( state_address[a5 - 1] <= component_delta )
        component_delta_6 = component_delta;
      else
        component_delta_6 = state_address[a5 - 1];
      state_address[a5 - 1] = component_delta_6;
      for ( i = 0; i < a5; ++i )
      {
        if ( state_address[i] <= *(float *)&saved_alloca_result_2[i] )
          table_value = saved_alloca_result_2[i];
        else
          table_value = LODWORD(state_address[i]);
        LODWORD(state_address[i]) = table_value;
      }
      ++element_index;
    }
    while ( element_index < a6 );
    if ( a6 == 2 )
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( *(float *)&saved_alloca_result[i + a3] <= (float)(*(float *)&saved_alloca_result[i] - 4.0) )
          weighted_sum_5 = *(float *)&saved_alloca_result[i] - 4.0;
        else
          weighted_sum_5 = *(float *)&saved_alloca_result[i + a3];
        *(float *)&saved_alloca_result[i + a3] = weighted_sum_5;
        if ( *(float *)&saved_alloca_result[i] <= (float)(*(float *)&saved_alloca_result[i + a3] - 4.0) )
          combined_products_4 = *(float *)&saved_alloca_result[i + a3] - 4.0;
        else
          combined_products_4 = *(float *)&saved_alloca_result[i];
        *(float *)&saved_alloca_result[i] = combined_products_4;
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&saved_alloca_result[i]) >= 0.0 )
          combined_products_5 = *(float *)(a1 + 4LL * i) - *(float *)&saved_alloca_result[i];
        else
          combined_products_5 = 0.0;
        if ( (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&saved_alloca_result[i + a3]) >= 0.0 )
          combined_products_6 = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&saved_alloca_result[i + a3];
        else
          combined_products_6 = 0.0;
        *(float *)&saved_alloca_result[i] = 0.5 * (float)(combined_products_5 + combined_products_6);
      }
    }
    else
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&saved_alloca_result[i]) >= 0.0 )
          combined_products_7 = *(float *)(a1 + 4LL * i) - *(float *)&saved_alloca_result[i];
        else
          combined_products_7 = 0.0;
        *(float *)&saved_alloca_result[i] = combined_products_7;
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&saved_alloca_result[i] <= *(float *)(a18 + 4LL * i) )
        loaded_word = *(_DWORD *)(a18 + 4LL * i);
      else
        loaded_word = saved_alloca_result[i];
      saved_alloca_result[i] = loaded_word;
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&saved_alloca_result[i] >= 4.0 )
        scaled_value = 4.0;
      else
        scaled_value = *(float *)&saved_alloca_result[i];
      exp_result = exp(0.6931471805599453 * scaled_value);
      floor_result = floor((float)((float)(13.0 * exp_result) + 0.5));
      *(_DWORD *)(a20 + 4LL * i) = (int)floor_result;
    }
    if ( (!a11 || a12) && !a10 )
    {
      for ( i = a4; i < a5; ++i )
        *(float *)&saved_alloca_result[i] = 0.5 * *(float *)&saved_alloca_result[i];
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( i < 8 )
        *(float *)&saved_alloca_result[i] = *(float *)&saved_alloca_result[i] * 2.0;
      if ( i >= 12 )
        *(float *)&saved_alloca_result[i] = 0.5 * *(float *)&saved_alloca_result[i];
    }
    if ( *a19 )
    {
      for ( i = a4; ; ++i )
      {
        comparison_result = a5 <= 19 ? a5 : 19;
        if ( i >= comparison_result )
          break;
        *(float *)&saved_alloca_result[i] = *(float *)&saved_alloca_result[i] + (float)(0.015625 * (float)*((unsigned __int8 *)a19 + i + 44));
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&saved_alloca_result[i] >= 4.0 )
        table_value_2 = 1082130432;
      else
        table_value_2 = saved_alloca_result[i];
      saved_alloca_result[i] = table_value_2;
      shifted_bits = ((*(__int16 *)(a13 + 2LL * (i + 1)) - *(__int16 *)(a13 + 2LL * i)) * a6) << a14;
      if ( shifted_bits >= 6 )
      {
        if ( shifted_bits <= 48 )
        {
          state_address_2 = (int)(float)((float)(*(float *)&saved_alloca_result[i] * (float)shifted_bits) / 6.0);
          integer_quotient = 48 * state_address_2;
        }
        else
        {
          state_address_2 = (int)(float)(*(float *)&saved_alloca_result[i] * 8.0);
          integer_quotient = 8 * shifted_bits * state_address_2 / 8;
        }
      }
      else
      {
        state_address_2 = (int)*(float *)&saved_alloca_result[i];
        integer_quotient = 8 * shifted_bits * state_address_2;
      }
      if ( !a11 || a12 && !a10 )
      {
        shifted_bits_3 = (integer_quotient + saved_shifted_bits) >> 6;
        if ( shifted_bits_3 > 2 * a15 / 3 )
        {
          shifted_bits_2 = (2 * a15 / 3) << 6;
          *(_DWORD *)&a7[2 * i] = shifted_bits_2 - saved_shifted_bits;
          saved_shifted_bits = shifted_bits_2;
          break;
        }
      }
      *(_DWORD *)&a7[2 * i] = state_address_2;
      saved_shifted_bits += integer_quotient;
    }
  }
  *a16 = saved_shifted_bits;
  return saved_combined_products; /* native XMM0 maximum spectral level */
}

//----- (00000001401B2750) ----------------------------------------------------
__int64            sub_1401B2750(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        float *a8,
        int *a9,
        int a10,
        int a11,
        __int64 a12)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 shifted_bits;
  void *alloca_result_2;
  float weighted_sum;
  int absolute_value;
  float combined_products;
  float combined_products_2;
       __m128i *table_value;
       __m128i *source_buffer;
       __m128i *source_buffer_2;
  int element_index;
  int loaded_word;
  float weighted_sum_2;
  float component_delta;
  int integer_difference;
  int floor_result;
  int loaded_word_2;
  _QWORD scratch_buffer[2];
  float saved_component_delta;
  int saved_floor_result;
  int saved_floor_result_2;
  int cached_floor_result;
  int loaded_word_3;
  int unused_written_slot;
  int *saved_alloca_result;
  __int64 loaded_word_4;
  int *saved_alloca_result_2;
  __int64 unused_written_slot_2;
  __m128i *destination_buffer;
  __m128i *destination_buffer_2;
  __m128i *packed_vector;
  __m128i *destination_buffer_3;
  __m128i *destination_buffer_4;
  __m128i *destination_buffer_5;
  __m128i *destination_buffer_6;
  __int64 unused_local;

  loaded_word_4 = *a1;
  loaded_word = *(_DWORD *)(loaded_word_4 + 4);
  scaled_index = 4LL * (a5 + 1024) * a4 + 15;
  if ( scaled_index <= 4LL * (a5 + 1024) * a4 )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = (int *)alloca_result;
  scratch_buffer[0] = (uint64)(uintptr_t)saved_alloca_result_2;
  scratch_buffer[1] = (uint64)(uintptr_t)(saved_alloca_result_2 + a5 + 1024);
  element_index = 0;
  do
  {
    unused_written_slot_2 = element_index;
    crt_memcpy((__m128i *)scratch_buffer[element_index], (     __m128i *)(a3 + 4LL * (element_index << 10)), 0x1000u);
    destination_buffer = (__m128i *)(scratch_buffer[element_index] + 4096LL);
    crt_memcpy(destination_buffer, (     __m128i *)(a2 + 4LL * (loaded_word + a5) * element_index++ + 4LL * loaded_word), 4LL * a5);
  }
  while ( element_index < a4 );
  if ( a10 )
  {
    shifted_bits = 4LL * ((a5 + 1024) >> 1) + 15;
    if ( shifted_bits <= 4LL * ((a5 + 1024) >> 1) )
      shifted_bits = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(shifted_bits & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = (int *)alloca_result_2;
    sub_1401A8190(scratch_buffer, (float *)saved_alloca_result, a5 + 1024, a4, *((_DWORD *)a1 + 19));
    sub_1401A8740((__int64)(saved_alloca_result + 512), (__int64)saved_alloca_result, a5, 979, &integer_difference);
    integer_difference = 1024 - integer_difference;
    weighted_sum = *((float *)a1 + 28);
    weighted_sum_2 = sub_1401A8B30((__int64)saved_alloca_result, 1024, 15, a5, &integer_difference, *((_DWORD *)a1 + 27), weighted_sum);
    if ( integer_difference > 1022 )
      integer_difference = 1022;
    weighted_sum_2 = 0.69999999 * weighted_sum_2;
    if ( *((int *)a1 + 15) > 2 )
      weighted_sum_2 = 0.5 * weighted_sum_2;
    if ( *((int *)a1 + 15) > 4 )
      weighted_sum_2 = 0.5 * weighted_sum_2;
    if ( *((int *)a1 + 15) > 8 )
      weighted_sum_2 = 0.0;
  }
  else
  {
    weighted_sum_2 = 0.0;
    integer_difference = 15;
  }
  if ( *(_DWORD *)a12 )
    weighted_sum_2 = weighted_sum_2 * *(float *)(a12 + 40);
  component_delta = 0.2;
  absolute_value = abs(integer_difference - *((_DWORD *)a1 + 27));
  if ( 10 * absolute_value > integer_difference )
    component_delta = component_delta + 0.2;
  if ( a11 < 25 )
    component_delta = component_delta + 0.1;
  if ( a11 < 35 )
    component_delta = component_delta + 0.1;
  if ( *((float *)a1 + 28) > 0.40000001 )
    component_delta = component_delta - 0.1;
  if ( *((float *)a1 + 28) > 0.55000001 )
    component_delta = component_delta - 0.1;
  if ( component_delta <= 0.2 )
    saved_component_delta = 0.2;
  else
    saved_component_delta = component_delta;
  component_delta = saved_component_delta;
  if ( saved_component_delta <= weighted_sum_2 )
  {
    combined_products = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(weighted_sum_2 - *((float *)a1 + 28))), u64);
    if ( combined_products < 0.1 )
      weighted_sum_2 = *((float *)a1 + 28);
    floor_result = (int)floor((float)((float)((float)(weighted_sum_2 * 32.0) / 3.0) + 0.5)) - 1;
    if ( floor_result <= 7 )
      saved_floor_result = floor_result;
    else
      saved_floor_result = 7;
    if ( saved_floor_result >= 0 )
    {
      if ( floor_result <= 7 )
        saved_floor_result_2 = floor_result;
      else
        saved_floor_result_2 = 7;
      cached_floor_result = saved_floor_result_2;
    }
    else
    {
      cached_floor_result = 0;
    }
    floor_result = cached_floor_result;
    weighted_sum_2 = 0.09375 * (float)(cached_floor_result + 1);
    unused_written_slot = 1;
  }
  else
  {
    weighted_sum_2 = 0.0;
    unused_written_slot = 0;
    floor_result = 0;
  }
  element_index = 0;
  do
  {
    loaded_word_2 = *(_DWORD *)(loaded_word_4 + 48) - loaded_word;
    if ( *((int *)a1 + 27) <= 15 )
      loaded_word_3 = 15;
    else
      loaded_word_3 = *((_DWORD *)a1 + 27);
    *((_DWORD *)a1 + 27) = loaded_word_3;
    destination_buffer_2 = (__m128i *)(a2 + 4LL * (loaded_word + a5) * element_index);
    crt_memcpy(destination_buffer_2, (     __m128i *)((char *)a1 + 4 * loaded_word * element_index + 252), 4LL * loaded_word);
    if ( loaded_word_2 )
      sub_1401A0C20(
        (__m128i *)(a2 + 4LL * (loaded_word + a5) * element_index + 4LL * loaded_word),
        (     __m128i *)(scratch_buffer[element_index] + 4096LL),
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 27),
        loaded_word_2,
        -*((float *)a1 + 28),
        -*((float *)a1 + 28),
        *((_DWORD *)a1 + 29),
        *((_DWORD *)a1 + 29),
        0,
        0);
    combined_products_2 = -*((float *)a1 + 28);
    table_value = (     __m128i *)(scratch_buffer[element_index] + 4LL * loaded_word_2 + 4096);
    packed_vector = (__m128i *)(a2 + 4LL * (loaded_word + a5) * element_index + 4LL * loaded_word + 4LL * loaded_word_2);
    sub_1401A0C20(
      packed_vector,
      table_value,
      *((_DWORD *)a1 + 27),
      integer_difference,
      a5 - loaded_word_2,
      combined_products_2,
      -weighted_sum_2,
      *((_DWORD *)a1 + 29),
      a6,
      *(_QWORD *)(loaded_word_4 + 72),
      loaded_word);
    destination_buffer_3 = (__m128i *)((char *)a1 + 4 * loaded_word * element_index + 252);
    crt_memcpy(destination_buffer_3, (     __m128i *)(a2 + 4LL * (loaded_word + a5) * element_index + 4LL * a5), 4LL * loaded_word);
    if ( a5 <= 1024 )
    {
      destination_buffer_5 = (__m128i *)(a3 + 4LL * (element_index << 10));
      crt_memcpy(destination_buffer_5, (__m128i *)((char *)destination_buffer_5 + 4 * a5), 4LL * (1024 - a5));
      source_buffer_2 = (     __m128i *)(scratch_buffer[element_index] + 4096LL);
      destination_buffer_6 = (__m128i *)(a3 + 4LL * (element_index << 10) + 4096 - 4LL * a5);
      crt_memcpy(destination_buffer_6, source_buffer_2, 4LL * a5);
    }
    else
    {
      source_buffer = (     __m128i *)(scratch_buffer[element_index] + 4LL * a5);
      destination_buffer_4 = (__m128i *)(a3 + 4LL * (element_index << 10));
      crt_memcpy(destination_buffer_4, source_buffer, 0x1000u);
    }
    ++element_index;
  }
  while ( element_index < a4 );
  *a8 = weighted_sum_2;
  *a7 = integer_difference;
  *a9 = floor_result;
  return unused_written_slot; /* native EAX filter-enabled result */
}

//----- (00000001401B32A0) ----------------------------------------------------
__int64            sub_1401B32A0(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        float a12,
        int a13,
        float a14,
        int a15,
        int a16,
        float a17,
        float a18)
{
  int remaining_amount;
  int shifted_bits;
  int running_total;
  int shifted_bits_2;
  int shifted_bits_3;
  int running_total_2;
  int loaded_word;
  int saved_loaded_word;
  int saved_loaded_word_2;
  float input_value;
  float scaled_ratio;
  float product_difference;
  float combined_products;
  int integer_quotient;
  int loaded_word_2;
  int shifted_bits_4;
  int saved_shifted_bits;
  int integer_difference;
  int integer_difference_2;
  int cached_integer_difference;
  __int64 loaded_word_3;

  loaded_word_2 = *(_DWORD *)(a1 + 8);
  loaded_word_3 = *(_QWORD *)(a1 + 32);
  if ( a6 )
    loaded_word = a6;
  else
    loaded_word = *(_DWORD *)(a1 + 8);
  shifted_bits_2 = *(__int16 *)(loaded_word_3 + 2LL * loaded_word) << a4;
  if ( a7 == 2 )
  {
    if ( a8 >= loaded_word )
      saved_loaded_word = loaded_word;
    else
      saved_loaded_word = a8;
    shifted_bits_2 += *(__int16 *)(loaded_word_3 + 2LL * saved_loaded_word) << a4;
  }
  remaining_amount = a3;
  if ( *(_DWORD *)a2 && *(float *)(a2 + 16) < 0.4 )
    remaining_amount = a3 - (int)(float)((float)(8 * shifted_bits_2) * (float)(0.40000001 - *(float *)(a2 + 16)));
  if ( a7 == 2 )
  {
    if ( a8 >= loaded_word )
      saved_loaded_word_2 = loaded_word;
    else
      saved_loaded_word_2 = a8;
    shifted_bits_3 = (*(__int16 *)(loaded_word_3 + 2LL * saved_loaded_word_2) << a4) - saved_loaded_word_2;
    scaled_ratio = (float)(0.80000001 * (float)shifted_bits_3) / (float)shifted_bits_2;
    if ( a10 >= 1.0 )
      input_value = 1.0;
    else
      input_value = a10;
    if ( (float)((float)(input_value - 0.1) * (float)(8 * shifted_bits_3)) <= (float)(scaled_ratio * (float)remaining_amount) )
      product_difference = (float)(input_value - 0.1) * (float)(8 * shifted_bits_3);
    else
      product_difference = scaled_ratio * (float)remaining_amount;
    remaining_amount -= (int)product_difference;
  }
  shifted_bits = (int)(float)((float)(a12 - 0.044) * (float)(a11 - (19 << a4) + remaining_amount)) + a11 - (19 << a4) + remaining_amount;
  if ( *(_DWORD *)a2 && !a15 )
  {
    if ( (float)(*(float *)(a2 + 4) - 0.15000001) >= 0.0 )
      combined_products = *(float *)(a2 + 4) - 0.15000001;
    else
      combined_products = 0.0;
    running_total_2 = (int)(float)((float)((float)(8 * shifted_bits_2) * 1.2) * (float)(combined_products - 0.12)) + shifted_bits;
    if ( a13 )
      running_total_2 += (int)(float)((float)(8 * shifted_bits_2) * 0.80000001);
    shifted_bits = running_total_2;
  }
  if ( a16 && !a15 )
  {
    if ( shifted_bits / 4 <= (int)(float)(a17 * (float)(8 * shifted_bits_2)) + shifted_bits )
      integer_quotient = (int)(float)(a17 * (float)(8 * shifted_bits_2)) + shifted_bits;
    else
      integer_quotient = shifted_bits / 4;
    shifted_bits = integer_quotient;
  }
  if ( (int)(float)((float)(8 * (*(__int16 *)(loaded_word_3 + 2LL * (loaded_word_2 - 2)) << a4) * a7) * a14) <= shifted_bits >> 2 )
    shifted_bits_4 = shifted_bits >> 2;
  else
    shifted_bits_4 = (int)(float)((float)(8 * (*(__int16 *)(loaded_word_3 + 2LL * (loaded_word_2 - 2)) << a4) * a7) * a14);
  if ( shifted_bits >= shifted_bits_4 )
    saved_shifted_bits = shifted_bits_4;
  else
    saved_shifted_bits = shifted_bits;
  running_total = saved_shifted_bits;
  if ( (!a16 || a15) && a9 )
    running_total = (int)(float)(0.67000002 * (float)(saved_shifted_bits - a3)) + a3;
  if ( !a16 && a12 < 0.2 )
  {
    if ( 96000 - a5 <= 32000 )
      integer_difference = 96000 - a5;
    else
      integer_difference = 32000;
    if ( integer_difference >= 0 )
    {
      if ( 96000 - a5 <= 32000 )
        integer_difference_2 = 96000 - a5;
      else
        integer_difference_2 = 32000;
      cached_integer_difference = integer_difference_2;
    }
    else
    {
      cached_integer_difference = 0;
    }
    running_total += (int)(float)((float)(a18 * (float)(0.0000031 * (float)cached_integer_difference)) * (float)running_total);
  }
  if ( 2 * a3 >= running_total )
    return (unsigned int)running_total;
  else
    return (unsigned int)(2 * a3);
}

//----- (00000001401B38C0) ----------------------------------------------------
__int64            sub_1401B38C0(__int64 a1, int a2)
{
  return (unsigned int)(96 * a2 + 4 * ((*(_DWORD *)(a1 + 4) + 2048) * a2 - 1) + 104 + 32 * *(_DWORD *)(a1 + 8));
}

//----- (00000001401B3920) ----------------------------------------------------
__int64            sub_1401B3920(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int byte_count;
  int *unrecovered_register_value;

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    return 4294967289LL;
  byte_count = sub_1401B38C0(a2, a3);
  crt_memset((void *)(uintptr_t)(a1), 0, byte_count);
  *(_QWORD *)a1 = a2;
  a1[2] = *(_DWORD *)(a2 + 4);
  a1[3] = a3;
  a1[4] = a3;
  a1[5] = 1;
  a1[6] = 0;
  a1[7] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[8] = 1;
  a1[9] = a3 == 1;
  a1[10] = sub_1401A13B0();
  sub_140199AA0(a1, 4028, unrecovered_register_value);
  return 0;
}

//----- (00000001401B3A40) ----------------------------------------------------
__int64            sub_1401B3A40(__int64 *a1, __int64 a2, int a3, float a4, float *a5)
{
  int i;
  float scaled_value;
  float source_component_y;
  float combined_products;
  float combined_products_2;
  __int64 loaded_word;
  __int64 table_value;

  loaded_word = *a1;
  table_value = a1[1];
  scaled_value = *a5;
  source_component_y = a5[1];
  for ( i = 0; i < a3; ++i )
  {
    combined_products = (float)(*(float *)(loaded_word + 4LL * i) + 1.0e-30) + scaled_value;
    combined_products_2 = (float)(*(float *)(table_value + 4LL * i) + 1.0e-30) + source_component_y;
    scaled_value = a4 * combined_products;
    source_component_y = a4 * combined_products_2;
    *(float *)(a2 + 8LL * i) = combined_products * 0.000030517578;
    *(float *)(a2 + 4LL * (2 * i + 1)) = combined_products_2 * 0.000030517578;
  }
  *a5 = scaled_value;
  a5[1] = source_component_y;
  return 4;
}

//----- (00000001401B3BD0) ----------------------------------------------------
__int64            sub_1401B3BD0(__int64 *a1, __int64 a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
  int i;
  int element_index;
  float scaled_value;
  float combined_products;
  float scaled_value_2;
  float combined_products_2;
  int selection_flag;
  int integer_quotient;
  __int64 table_value;
  int *saved_alloca_result;
  __int64 scaled_index;
  __int64 unused_local;

  selection_flag = 0;
  if ( a5 == 1 && a4 == 2 && !a8 )
  {
    sub_1401B3A40(a1, a2, a3, *a6, a7);
  }
  else
  {
    record_word_offset = 4LL * a3 + 15;
    if ( record_word_offset <= 4LL * a3 )
      record_word_offset = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    scaled_value_2 = *a6;
    integer_quotient = a3 / a5;
    element_index = 0;
    do
    {
      scaled_value = a7[element_index];
      table_value = a1[element_index];
      scaled_index = a2 + 4LL * element_index;
      if ( a5 <= 1 )
      {
        for ( i = 0; i < a3; ++i )
        {
          combined_products_2 = (float)(*(float *)(table_value + 4LL * i) + 1.0e-30) + scaled_value;
          scaled_value = scaled_value_2 * combined_products_2;
          *(float *)(scaled_index + 4LL * a4 * i) = combined_products_2 * 0.000030517578;
        }
      }
      else
      {
        for ( i = 0; i < a3; ++i )
        {
          combined_products = (float)(*(float *)(table_value + 4LL * i) + 1.0e-30) + scaled_value;
          scaled_value = scaled_value_2 * combined_products;
          *(float *)&saved_alloca_result[i] = combined_products;
        }
        selection_flag = 1;
      }
      a7[element_index] = scaled_value;
      if ( selection_flag )
      {
        for ( i = 0; i < integer_quotient; ++i )
          *(float *)(scaled_index + 4LL * a4 * i) = *(float *)&saved_alloca_result[a5 * i] * 0.000030517578;
      }
      ++element_index;
    }
    while ( element_index < a4 );
  }
  return 0; /* no caller reads the result */
}

//----- (00000001401B3E40) ----------------------------------------------------
__int64            sub_1401B3E40(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  float *weighted_sum;
  float *weighted_sum_2;
  float *weighted_sum_3;
  float *weighted_sum_4;
  int i;
  int j;
  int element_index;
  int saved_shifted_bits;
  int loaded_word;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int loaded_word_2;
  float *source_buffer;
  int loaded_word_3;
  int unused_written_slot;
  __m128i *destination_buffer;
  float *weighted_sum_5;
  __int64 unused_written_slot_2;
  __int64 unused_written_slot_3;
  __int64 unused_written_slot_4;
  __int64 unused_written_slot_5;
  __int64 unused_written_slot_6;
  __int64 unused_written_slot_7;
  __int64 unused_written_slot_8;
  __int64 unused_written_slot_9;
  __int64 unused_local;

  loaded_word = *(_DWORD *)(a1 + 4);
  loaded_word_3 = *(_DWORD *)(a1 + 8);
  unused_written_slot_2 = a1;
  shifted_bits = *(_DWORD *)(a1 + 48) << a10;
  scaled_index = 4LL * shifted_bits + 15;
  if ( scaled_index <= 4LL * shifted_bits )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  source_buffer = (float *)alloca_result;
  unused_written_slot = 1;
  shifted_bits_2 = 1 << a10;
  if ( a9 )
  {
    saved_shifted_bits = shifted_bits_2;
    shifted_bits_3 = *(_DWORD *)(a1 + 48);
    loaded_word_2 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    saved_shifted_bits = 1;
    unused_written_slot_3 = a1;
    shifted_bits_3 = *(_DWORD *)(a1 + 48) << a10;
    loaded_word_2 = *(_DWORD *)(a1 + 40) - a10;
  }
  if ( a8 == 2 && a7 == 1 )
  {
    sub_1401A3740(a1, a2, source_buffer, a4, a5, a6, shifted_bits_2, a11, a12);
    unused_written_slot_4 = 8;
    destination_buffer = (__m128i *)(a3[1] + 4LL * (loaded_word / 2));
    crt_memcpy(destination_buffer, (     __m128i *)source_buffer, 4LL * shifted_bits);
    for ( i = 0; i < saved_shifted_bits; ++i )
    {
      weighted_sum = (float *)(*a3 + 4LL * i * shifted_bits_3);
      unused_written_slot_5 = a1 + 80;
      sub_1401A1F50(a1 + 80, (float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i], weighted_sum, *(float **)(a1 + 72), loaded_word, loaded_word_2, saved_shifted_bits);
    }
    for ( i = 0; i < saved_shifted_bits; ++i )
    {
      weighted_sum_2 = (float *)(a3[1] + 4LL * i * shifted_bits_3);
      unused_written_slot_6 = a1 + 80;
      sub_1401A1F50(a1 + 80, &source_buffer[i], weighted_sum_2, *(float **)(a1 + 72), loaded_word, loaded_word_2, saved_shifted_bits);
    }
  }
  else if ( a8 == 1 && a7 == 2 )
  {
    unused_written_slot_7 = 0;
    weighted_sum_5 = (float *)(*a3 + 4LL * (loaded_word / 2));
    sub_1401A3740(a1, a2, source_buffer, a4, a5, a6, shifted_bits_2, a11, a12);
    sub_1401A3740(a1, a2 + 4LL * shifted_bits, weighted_sum_5, a4 + 4LL * loaded_word_3, a5, a6, shifted_bits_2, a11, a12);
    for ( j = 0; j < shifted_bits; ++j )
      source_buffer[j] = (float)(0.5 * source_buffer[j]) + (float)(0.5 * weighted_sum_5[j]);
    for ( i = 0; i < saved_shifted_bits; ++i )
    {
      weighted_sum_3 = (float *)(*a3 + 4LL * i * shifted_bits_3);
      unused_written_slot_8 = a1 + 80;
      sub_1401A1F50(a1 + 80, &source_buffer[i], weighted_sum_3, *(float **)(a1 + 72), loaded_word, loaded_word_2, saved_shifted_bits);
    }
  }
  else
  {
    element_index = 0;
    do
    {
      sub_1401A3740(a1, a2 + 4LL * shifted_bits * element_index, source_buffer, a4 + 4LL * loaded_word_3 * element_index, a5, a6, shifted_bits_2, a11, a12);
      for ( i = 0; i < saved_shifted_bits; ++i )
      {
        weighted_sum_4 = (float *)(a3[element_index] + 4LL * i * shifted_bits_3);
        unused_written_slot_9 = a1 + 80;
        sub_1401A1F50(a1 + 80, &source_buffer[i], weighted_sum_4, *(float **)(a1 + 72), loaded_word, loaded_word_2, saved_shifted_bits);
      }
      ++element_index;
    }
    while ( element_index < a8 );
  }
  element_index = 0;
  do
  {
    for ( j = 0; j < shifted_bits; ++j )
      *(_DWORD *)(a3[element_index] + 4LL * j) = *(_DWORD *)(a3[element_index] + 4LL * j);
    ++element_index;
  }
  while ( element_index < a8 );
  return 0; /* no caller reads the result */
}

//----- (00000001401B4530) ----------------------------------------------------
__int64            sub_1401B4530(int a1, signed int a2, int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 result;
  int i;
  int j;
  int selection_flag;
  unsigned int record_word_offset;
  unsigned int integer_difference;
  int cached_selection_code;
  int option_flags;
  int call_result;
  int selection_code;
  BOOL comparison_result;
  int selection_code_2;
  BOOL call_result_2;

  record_word_offset = 8 * a6[2];
  call_result = sub_14019A0A0((__int64)a6);
  if ( a3 )
    selection_code = 2;
  else
    selection_code = 4;
  cached_selection_code = selection_code;
  comparison_result = a5 > 0 && call_result + selection_code + 1 <= record_word_offset;
  integer_difference = record_word_offset - comparison_result;
  selection_flag = 0;
  option_flags = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( cached_selection_code + call_result <= integer_difference )
    {
      selection_flag ^= sub_14019AF20(a6, cached_selection_code);
      call_result = sub_14019A0A0((__int64)a6);
      option_flags |= selection_flag;
    }
    *(_DWORD *)(a4 + 4LL * i) = selection_flag;
    if ( a3 )
      selection_code_2 = 4;
    else
      selection_code_2 = 5;
    cached_selection_code = selection_code_2;
  }
  call_result_2 = 0;
  if ( comparison_result && byte_14027BB98[8 * a5 + 4 * a3 + option_flags] != byte_14027BB98[8 * a5 + 2 + 4 * a3 + option_flags] )
    call_result_2 = sub_14019AF20(a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * call_result_2 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}

//----- (00000001401B4770) ----------------------------------------------------
__int64            sub_1401B4770(_QWORD *a1, int a2, int a3)
{
  void *alloca_result;
  float float_buffer[2048];
  int integer_difference;
  float *saved_alloca_result;
  __int64 unused_local;

  alloca_result = alloca(4096);
  saved_alloca_result = alloca_result;
  sub_1401A8190(a1, float_buffer, 2048, a2, a3);
  sub_1401A8740((__int64)(saved_alloca_result + 360), (__int64)saved_alloca_result, 1328, 620, &integer_difference);
  integer_difference = 720 - integer_difference;
  return (unsigned int)integer_difference; /* 0x1401B4807: mov eax, dword ptr [rbp] */
}

//----- (00000001401B4830) ----------------------------------------------------
__int64            sub_1401B4830(__int64 a1, int a2, int a3)
{
  unsigned __int64 record_word_offset;
  void *alloca_result;
       __m128i *source_buffer;
  unsigned __int64 float_word;
  void *alloca_result_2;
  void *alloca_result_3;
  unsigned __int64 scaled_index;
  void *alloca_result_4;
  float square_root;
  float square_root_2;
  _BYTE unused_local[8304];
  int unused_written_slot;
  int i;
  int j;
  int loaded_word;
  int loaded_word_2;
  __m128i *destination_buffer;
  int loaded_word_3;
  int element_index;
  signed int lookup_index;
  int loaded_word_4;
  int loaded_word_5;
  float squared_length;
  int loaded_word_6;
  float combined_products;
  float squared_length_2;
  float squared_length_3;
  float squared_length_4;
  signed int integer_sum;
  int loaded_word_7;
  int k;
  int loaded_word_8;
  __int64 loaded_word_9;
  float *weighted_sum;
  signed int shifted_bits;
  float scaled_value;
  int saved_loaded_word;
  int float_word_2;
  float scaled_value_2;
  float weighted_sum_2;
  int shifted_bits_2;
  int shifted_bits_3;
  int cached_loaded_word;
  int scaled_index_2;
  float saved_squared_length;
  float selected_scalar;
  float saved_square_root;
  int integer_difference;
  float combined_products_2;
  float combined_products_3;
  float saved_square_root_2;
  BOOL comparison_result;
  int loaded_word_10;
  int loaded_word_11;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 loaded_word_12;
  int loaded_word_13;
  float combined_products_4;
  BOOL unused_written_slot_2;
  __int64 loaded_word_14;
  int *saved_alloca_result;
       __m128i *source_buffer_2;
  __m128i *p_i;
  _QWORD scratch_buffer[2];
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 unused_written_slot_3;
  _BYTE *saved_alloca_result_2;
  __int64 scaled_index_8;
  _QWORD scratch_buffer_2[2];
  float float_buffer[28];
  _DWORD scratch_buffer_3[24];
  __int64 unused_local_2;

  loaded_word_2 = *(_DWORD *)(a1 + 12);
  loaded_word_9 = *(_QWORD *)a1;
  loaded_word_3 = *(_DWORD *)(loaded_word_9 + 8);
  loaded_word = *(_DWORD *)(loaded_word_9 + 4);
  loaded_word_14 = *(_QWORD *)(loaded_word_9 + 32);
  j = 0;
  do
  {
    scratch_buffer[j] = a1 + 4LL * (loaded_word + 2048) * j + 96;
    scratch_buffer_2[j] = scratch_buffer[j] + 0x2000LL - 4LL * a2;
    ++j;
  }
  while ( j < loaded_word_2 );
  scaled_index_4 = a1 + 4LL * loaded_word_2 * (loaded_word + 2048) + 96;
  scaled_index_3 = scaled_index_4 + 96LL * loaded_word_2;
  scaled_index_6 = scaled_index_3 + 8LL * loaded_word_3;
  scaled_index_7 = scaled_index_6 + 8LL * loaded_word_3;
  scaled_index_5 = scaled_index_7 + 8LL * loaded_word_3;
  loaded_word_7 = *(_DWORD *)(a1 + 56);
  loaded_word_5 = *(_DWORD *)(a1 + 24);
  comparison_result = loaded_word_7 >= 5 || loaded_word_5 || *(_DWORD *)(a1 + 60);
  unused_written_slot_2 = comparison_result;
  if ( comparison_result )
  {
    loaded_word_6 = *(_DWORD *)(a1 + 28);
    if ( loaded_word_6 >= *(_DWORD *)(loaded_word_9 + 12) )
      loaded_word_10 = *(_DWORD *)(loaded_word_9 + 12);
    else
      loaded_word_10 = loaded_word_6;
    if ( loaded_word_5 <= loaded_word_10 )
    {
      if ( loaded_word_6 >= *(_DWORD *)(loaded_word_9 + 12) )
        loaded_word_11 = *(_DWORD *)(loaded_word_9 + 12);
      else
        loaded_word_11 = loaded_word_6;
      saved_loaded_word = loaded_word_11;
    }
    else
    {
      saved_loaded_word = loaded_word_5;
    }
    cached_loaded_word = saved_loaded_word;
    record_word_offset = 4LL * a2 * loaded_word_2 + 15;
    if ( record_word_offset <= 4LL * a2 * loaded_word_2 )
      record_word_offset = 0xFFFFFFFFFFFFFF0LL;
    alloca_result = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
    saved_alloca_result = alloca_result;
    if ( loaded_word_7 )
      float_word_2 = 1056964608;
    else
      float_word_2 = 1069547520;
    scaled_value_2 = *(float *)&float_word_2;
    j = 0;
    do
    {
      for ( i = loaded_word_5; i < loaded_word_6; ++i )
      {
        if ( *(float *)(scaled_index_5 + 4LL * (i + loaded_word_3 * j)) <= (float)(*(float *)(scaled_index_3 + 4LL * (i + loaded_word_3 * j)) - scaled_value_2) )
          weighted_sum_2 = *(float *)(scaled_index_3 + 4LL * (i + loaded_word_3 * j)) - scaled_value_2;
        else
          weighted_sum_2 = *(float *)(scaled_index_5 + 4LL * (i + loaded_word_3 * j));
        *(float *)(scaled_index_3 + 4LL * (i + loaded_word_3 * j)) = weighted_sum_2;
      }
      ++j;
    }
    while ( j < loaded_word_2 );
    loaded_word_8 = *(_DWORD *)(a1 + 44);
    for ( j = 0; j < loaded_word_2; ++j )
    {
      for ( i = loaded_word_5; i < cached_loaded_word; ++i )
      {
        loaded_word_13 = *(__int16 *)(loaded_word_14 + 2LL * i);
        shifted_bits_2 = (loaded_word_13 << a3) + j * a2;
        shifted_bits_3 = (*(__int16 *)(loaded_word_14 + 2LL * (i + 1)) - *(__int16 *)(loaded_word_14 + 2LL * i)) << a3;
        for ( k = 0; k < shifted_bits_3; ++k )
        {
          loaded_word_8 = sub_1401A5C70(loaded_word_8);
          *(float *)&saved_alloca_result[k + shifted_bits_2] = (float)(loaded_word_8 >> 20);
        }
        sub_1401A6800((float *)&saved_alloca_result[shifted_bits_2], shifted_bits_3, 1.0);
      }
    }
    *(_DWORD *)(a1 + 44) = loaded_word_8;
    j = 0;
    do
    {
      source_buffer = (     __m128i *)(scratch_buffer[j] + 4LL * a2);
      unused_written_slot_3 = j;
      crt_memcpy((__m128i *)scratch_buffer[j++], source_buffer, 4LL * ((loaded_word >> 1) + 2048 - a2));
    }
    while ( j < loaded_word_2 );
    unused_written_slot = *(_DWORD *)(a1 + 40);
    sub_1401B3E40(loaded_word_9, (__int64)saved_alloca_result, scratch_buffer_2, scaled_index_3, loaded_word_5, cached_loaded_word, loaded_word_2, loaded_word_2, 0, a3, *(_DWORD *)(a1 + 20), 0);
  }
  else
  {
    selected_scalar = 1.0;
    if ( loaded_word_7 )
    {
      loaded_word_4 = *(_DWORD *)(a1 + 52);
      selected_scalar = 0.80000001;
    }
    else
    {
      loaded_word_4 = sub_1401B4770(scratch_buffer, loaded_word_2, *(_DWORD *)(a1 + 40));
      *(_DWORD *)(a1 + 52) = loaded_word_4;
    }
    if ( 2 * loaded_word_4 >= 1024 )
      scaled_index_2 = 1024;
    else
      scaled_index_2 = 2 * loaded_word_4;
    lookup_index = scaled_index_2;
    float_word = 4LL * loaded_word + 15;
    if ( float_word <= 4LL * loaded_word )
      float_word = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_2 = alloca(float_word & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)alloca_result_2;
    alloca_result_3 = alloca(4192);
    saved_alloca_result_2 = alloca_result_3;
    scaled_index = 4LL * lookup_index + 15;
    if ( scaled_index <= 4LL * lookup_index )
      scaled_index = 0xFFFFFFFFFFFFFF0LL;
    alloca_result_4 = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
    source_buffer_2 = (     __m128i *)alloca_result_4;
    weighted_sum = (float *)(saved_alloca_result_2 + 96);
    loaded_word_12 = *(_QWORD *)(loaded_word_9 + 72);
    j = 0;
    do
    {
      squared_length_3 = 0.0;
      destination_buffer = (__m128i *)scratch_buffer[j];
      for ( i = 0; i < 1048; ++i )
        weighted_sum[i - 24] = *(float *)&SR_VEC_LANES(128, destination_buffer[250], i32)[i];
      if ( !loaded_word_7 )
      {
        sub_1401ADFA0(weighted_sum, (__int64)float_buffer, loaded_word_12, loaded_word, 24, 1024);
        float_buffer[0] = float_buffer[0] * 1.0001;
        for ( i = 1; i <= 24; ++i )
          float_buffer[i] = float_buffer[i] - (float)((float)((float)(float_buffer[i] * 0.000064000007) * (float)i) * (float)i);
        sub_1401AD490((_WORD *)(scaled_index_4 + 96LL * j), float_buffer, 24);
      }
      sub_1401AD6F0((__int64)&weighted_sum[-lookup_index + 1024], scaled_index_4 + 96LL * j, (__int64)source_buffer_2, lookup_index, 24);
      crt_memcpy((__m128i *)&weighted_sum[-lookup_index + 1024], source_buffer_2, 4LL * lookup_index);
      squared_length = 1.0;
      squared_length_2 = 1.0;
      shifted_bits = lookup_index >> 1;
      for ( i = 0; i < shifted_bits; ++i )
      {
        combined_products = weighted_sum[i + 1024 - shifted_bits];
        squared_length = squared_length + (float)(combined_products * combined_products);
        combined_products = weighted_sum[i + 1024 - 2 * shifted_bits];
        squared_length_2 = squared_length_2 + (float)(combined_products * combined_products);
      }
      if ( squared_length_2 <= squared_length )
        saved_squared_length = squared_length_2;
      else
        saved_squared_length = squared_length;
      squared_length = saved_squared_length;
      square_root = sqrt((float)(saved_squared_length / squared_length_2));
      saved_square_root = square_root;
      crt_memcpy(destination_buffer, (__m128i *)((char *)destination_buffer + 4 * a2), 4LL * (2048 - a2));
      integer_difference = 1024 - loaded_word_4;
      integer_sum = loaded_word + a2;
      scaled_value = selected_scalar * saved_square_root;
      element_index = 0;
      i = 0;
      while ( i < integer_sum )
      {
        if ( element_index >= loaded_word_4 )
        {
          element_index -= loaded_word_4;
          scaled_value = scaled_value * saved_square_root;
        }
        *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2] = scaled_value * weighted_sum[element_index + integer_difference];
        combined_products_2 = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[element_index + integer_difference + 1024 - a2];
        squared_length_3 = squared_length_3 + (float)(combined_products_2 * combined_products_2);
        ++i;
        ++element_index;
      }
      for ( i = 0; i < 24; ++i )
        scratch_buffer_3[i] = SR_VEC_PTR_LANES(128, destination_buffer, i32)[2048 - a2 - 1 - i];
      scaled_index_8 = (__int64)SR_VEC_LANES(128, destination_buffer[512], i64) - 4 * a2;
      sub_1401AD990(scaled_index_8, (float *)(scaled_index_4 + 96LL * j), scaled_index_8, integer_sum, 24, (__int64)scratch_buffer_3);
      squared_length_4 = 0.0;
      for ( i = 0; i < integer_sum; ++i )
      {
        combined_products_3 = *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2];
        squared_length_4 = squared_length_4 + (float)(combined_products_3 * combined_products_3);
      }
      if ( squared_length_3 > (float)(0.2 * squared_length_4) )
      {
        if ( squared_length_4 > squared_length_3 )
        {
          square_root_2 = sqrt((float)((float)(squared_length_3 + 1.0) / (float)(squared_length_4 + 1.0)));
          saved_square_root_2 = square_root_2;
          for ( i = 0; i < loaded_word; ++i )
          {
            combined_products_4 = 1.0 - (float)(*(float *)(loaded_word_12 + 4LL * i) * (float)(1.0 - saved_square_root_2));
            *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2] = combined_products_4 * *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2];
          }
          for ( i = loaded_word; i < integer_sum; ++i )
            *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2] = saved_square_root_2 * *(float *)&SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2];
        }
      }
      else
      {
        for ( i = 0; i < integer_sum; ++i )
          SR_VEC_PTR_LANES(128, destination_buffer, i32)[i + 2048 - a2] = 0;
      }
      sub_1401A0C20(
        p_i,
        destination_buffer + 512,
        *(_DWORD *)(a1 + 64),
        *(_DWORD *)(a1 + 64),
        loaded_word,
        -*(float *)(a1 + 72),
        -*(float *)(a1 + 72),
        *(_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 80),
        0,
        0);
      for ( i = 0; i < loaded_word / 2; ++i )
        *(float *)&SR_VEC_LANES(128, destination_buffer[512], i32)[i] = (float)(*(float *)(loaded_word_12 + 4LL * i) * *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[loaded_word - 1 - i])
                                         + (float)(*(float *)(loaded_word_12 + 4LL * (loaded_word - i - 1)) * *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i]);
      ++j;
    }
    while ( j < loaded_word_2 );
  }
  *(_DWORD *)(a1 + 56) = loaded_word_7 + 1;
  return 0; /* no caller reads the result */
}

//----- (00000001401B57D0) ----------------------------------------------------
__int64            sub_1401B57D0(int a1, __int64 a2)
{
  int remaining_count;
  int absolute_value;
  unsigned int comparison_result;
  int saved_absolute_value;
  int saved_absolute_value_2;
  int integer_difference;
  int integer_difference_2;

  remaining_count = a1 - 1;
  comparison_result = *(int *)(a2 + 4LL * (a1 - 1)) < 0;
  absolute_value = abs(*(_DWORD *)(a2 + 4LL * (a1 - 1)));
  do
  {
    --remaining_count;
    if ( a1 - remaining_count >= absolute_value )
      saved_absolute_value = absolute_value;
    else
      saved_absolute_value = a1 - remaining_count;
    if ( a1 - remaining_count <= absolute_value )
      saved_absolute_value_2 = absolute_value;
    else
      saved_absolute_value_2 = a1 - remaining_count;
    comparison_result += *((_DWORD *)*(&off_14027E020 + saved_absolute_value) + saved_absolute_value_2);
    absolute_value += abs(*(_DWORD *)(a2 + 4LL * remaining_count));
    if ( *(int *)(a2 + 4LL * remaining_count) < 0 )
    {
      if ( a1 - remaining_count >= absolute_value + 1 )
        integer_difference = absolute_value + 1;
      else
        integer_difference = a1 - remaining_count;
      if ( a1 - remaining_count <= absolute_value + 1 )
        integer_difference_2 = absolute_value + 1;
      else
        integer_difference_2 = a1 - remaining_count;
      comparison_result += *((_DWORD *)*(&off_14027E020 + integer_difference) + integer_difference_2);
    }
  }
  while ( remaining_count > 0 );
  return comparison_result;
}

//----- (00000001401B5990) ----------------------------------------------------
float            sub_1401B5990(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  __int16 xor_value;
  __int16 xor_value_2;
  __int16 xor_value_3;
  unsigned int loaded_word;
  unsigned int i;
  unsigned int loaded_word_2;
  int comparison_result;
  int comparison_result_2;
  float weighted_sum;
  float weighted_sum_2;
  unsigned int loaded_word_3;
  __int16 input_value;
  __int16 input_value_2;
  __int64 scaled_index;
  unsigned int shifted_bits;
  unsigned int masked_bits;
  unsigned int masked_bits_2;

  weighted_sum = 0.0;
  while ( a1 > 2 )
  {
    if ( a2 < a1 )
    {
      loaded_word_2 = *((_DWORD *)*(&off_14027E020 + a2) + a1);
      loaded_word_3 = *((_DWORD *)*(&off_14027E020 + a2 + 1) + a1);
      if ( loaded_word_2 <= a3 && a3 < loaded_word_3 )
      {
        a3 -= loaded_word_2;
        *a4++ = 0;
        goto LABEL_18;
      }
      comparison_result = -(a3 >= loaded_word_3);
      masked_bits = a3 - (comparison_result & loaded_word_3);
      input_value = a2;
      do
        i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
      while ( i > masked_bits );
    }
    else
    {
      scaled_index = (__int64)*(&off_14027E020 + a1);
      loaded_word = *(_DWORD *)(scaled_index + 4LL * (a2 + 1));
      comparison_result = -(a3 >= loaded_word);
      masked_bits = a3 - (comparison_result & loaded_word);
      input_value = a2;
      if ( *(_DWORD *)(scaled_index + 4LL * a1) <= masked_bits )
      {
        for ( i = *(_DWORD *)(scaled_index + 4LL * a2); i > masked_bits; i = *(_DWORD *)(scaled_index + 4LL * a2) )
          --a2;
      }
      else
      {
        a2 = a1;
        do
          i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
        while ( i > masked_bits );
      }
    }
    a3 = masked_bits - i;
    xor_value = comparison_result ^ (comparison_result + input_value - a2);
    *a4++ = xor_value;
    weighted_sum = weighted_sum + (float)((float)xor_value * (float)xor_value);
LABEL_18:
    --a1;
  }
  comparison_result_2 = -(a3 >= 2 * a2 + 1);
  masked_bits_2 = a3 - (comparison_result_2 & (2 * a2 + 1));
  input_value_2 = a2;
  shifted_bits = (masked_bits_2 + 1) >> 1;
  if ( shifted_bits )
    LOWORD(masked_bits_2) = masked_bits_2 - (2 * shifted_bits - 1);
  xor_value_2 = comparison_result_2 ^ (comparison_result_2 + input_value_2 - shifted_bits);
  *a4 = xor_value_2;
  weighted_sum_2 = weighted_sum + (float)((float)xor_value_2 * (float)xor_value_2);
  xor_value_3 = -(__int16)masked_bits_2 ^ (shifted_bits - masked_bits_2);
  a4[1] = xor_value_3;
  return weighted_sum_2 + (float)((float)xor_value_3 * (float)xor_value_3);
}

//----- (00000001401B5DD0) ----------------------------------------------------
__int64            sub_1401B5DD0(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 28) >= *(_DWORD *)(a1 + 8) )
    return 0;
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++);
}

//----- (00000001401B5E30) ----------------------------------------------------
__int64            sub_1401B5E30(__int64 a1)
{
  int loaded_word;

  if ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    loaded_word = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = loaded_word;
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - loaded_word));
  }
}

//----- (00000001401B5EA0) ----------------------------------------------------
_DWORD *           sub_1401B5EA0(_DWORD *a1)
{
  _DWORD *result;
  int table_value;

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    a1[6] += 8;
    a1[8] <<= 8;
    table_value = a1[11];
    a1[11] = sub_1401B5DD0((__int64)a1);
    a1[9] = ((unsigned __int8)~((a1[11] | (table_value << 8)) >> 1) + (a1[9] << 8)) & 0x7FFFFFFF;
  }
  return result;
}

//----- (00000001401B5F50) ----------------------------------------------------
__int64            sub_1401B5F50(__int64 a1, char a2)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++) = a2;
  return 0;
}

//----- (00000001401B5FB0) ----------------------------------------------------
__int64            sub_1401B5FB0(__int64 a1, char a2)
{
  int loaded_word;

  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  loaded_word = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(a1 + 12) = loaded_word;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - loaded_word)) = a2;
  return 0;
}

//----- (00000001401B6030) ----------------------------------------------------
__int64            sub_1401B6030(_DWORD *a1, int a2)
{
  __int64 result;
  int shifted_bits;
  int integer_difference;
  unsigned __int8 input_value;

  input_value = a2;
  if ( a2 == 255 )
  {
    result = (unsigned int)(a1[10] + 1);
    a1[10] = result;
  }
  else
  {
    shifted_bits = a2 >> 8;
    if ( (int)a1[11] >= 0 )
      a1[12] |= sub_1401B5F50((__int64)a1, BYTE1(a2) + (unsigned __int8)a1[11]);
    if ( a1[10] )
    {
      do
      {
        a1[12] |= sub_1401B5F50((__int64)a1, (unsigned __int8)shifted_bits - 1);
        integer_difference = a1[10] - 1;
        a1[10] = integer_difference;
      }
      while ( integer_difference );
    }
    a1[11] = input_value;
    return input_value;
  }
  return result;
}

//----- (00000001401B6120) ----------------------------------------------------
_DWORD *           sub_1401B6120(_DWORD *a1)
{
  _DWORD *result;

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    sub_1401B6030(a1, a1[9] >> 23);
    a1[9] = (a1[9] << 8) & 0x7FFFFFFF;
    a1[8] <<= 8;
    a1[6] += 8;
  }
  return result;
}

//----- (00000001401B61A0) ----------------------------------------------------
__int64            sub_1401B61A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  int i;
  __int64 float_word;

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    float_word = *(_QWORD *)(a1 + 32);
    *(float *)(a1 + 32) = *(float *)a1 - *(float *)&float_word;
    *(float *)(a1 + 36) = *(float *)(a1 + 4) - *((float *)&float_word + 1);
    *(float *)a1 = *(float *)a1 + *(float *)&float_word;
    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *((float *)&float_word + 1);
    *(float *)&float_word = (float)(*(float *)(a1 + 40) + *(float *)(a1 + 44)) * 0.70710677;
    *((float *)&float_word + 1) = (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * 0.70710677;
    *(float *)(a1 + 40) = *(float *)(a1 + 8) - *(float *)&float_word;
    *(float *)(a1 + 44) = *(float *)(a1 + 12) - *((float *)&float_word + 1);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)&float_word;
    *(float *)(a1 + 12) = *(float *)(a1 + 12) + *((float *)&float_word + 1);
    LODWORD(float_word) = *(_DWORD *)(a1 + 52);
    *((float *)&float_word + 1) = -*(float *)(a1 + 48);
    *(float *)(a1 + 48) = *(float *)(a1 + 16) - *(float *)&float_word;
    *(float *)(a1 + 52) = *(float *)(a1 + 20) - *((float *)&float_word + 1);
    *(float *)(a1 + 16) = *(float *)(a1 + 16) + *(float *)&float_word;
    *(float *)(a1 + 20) = *(float *)(a1 + 20) + *((float *)&float_word + 1);
    *(float *)&float_word = (float)(*(float *)(a1 + 60) - *(float *)(a1 + 56)) * 0.70710677;
    *((float *)&float_word + 1) = (float)-(float)(*(float *)(a1 + 60) + *(float *)(a1 + 56)) * 0.70710677;
    *(float *)(a1 + 56) = *(float *)(a1 + 24) - *(float *)&float_word;
    *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&float_word + 1);
    *(float *)(a1 + 24) = *(float *)(a1 + 24) + *(float *)&float_word;
    *(float *)(a1 + 28) = *(float *)(a1 + 28) + *((float *)&float_word + 1);
    a1 += 64;
  }
  return result;
}

//----- (00000001401B6640) ----------------------------------------------------
void               CGlobalUtils__SetNewParent(
        CGlobalUtils *this,
        struct CObList *a2,
        struct CWnd *a3,
        int a4,
        int a5,
        int a6)
{
  int i;
  int record_word_offset;
  int record_word_offset_2;
  float component_delta;
  float component_delta_2;
  int j;
  float *weighted_sum;
  float *record_byte_offset;
  float *saved_weighted_sum;
  float product_difference;
  float component_delta_3;
  CGlobalUtils *cached_this;
  float combined_products;
  float weighted_sum_2;
  float combined_products_2;
  float weighted_sum_3;
  float combined_products_3;
  float weighted_sum_4;
  float component_sum;
  float component_sum_2;
  float component_delta_4;
  float component_delta_5;
  float product_difference_2;
  float component_delta_6;
  __int64 unused_local;
  float *cached_this_2;
  float *weighted_sum_5;

  cached_this_2 = (float *)this;
  if ( a4 == 1 )
  {
    for ( i = 0; i < a5; ++i )
    {
      product_difference = *cached_this_2 - cached_this_2[4];
      component_delta_3 = cached_this_2[1] - cached_this_2[5];
      *cached_this_2 = *cached_this_2 + cached_this_2[4];
      cached_this_2[1] = cached_this_2[1] + cached_this_2[5];
      component_delta = cached_this_2[2] + cached_this_2[6];
      component_delta_2 = cached_this_2[3] + cached_this_2[7];
      cached_this_2[4] = *cached_this_2 - component_delta;
      cached_this_2[5] = cached_this_2[1] - component_delta_2;
      *cached_this_2 = *cached_this_2 + component_delta;
      cached_this_2[1] = cached_this_2[1] + component_delta_2;
      component_delta = cached_this_2[2] - cached_this_2[6];
      component_delta_2 = cached_this_2[3] - cached_this_2[7];
      cached_this_2[2] = product_difference + component_delta_2;
      cached_this_2[3] = component_delta_3 - component_delta;
      cached_this_2[6] = product_difference - component_delta_2;
      cached_this_2[7] = component_delta_3 + component_delta;
      cached_this_2 += 8;
    }
  }
  else
  {
    record_word_offset = 2 * a4;
    record_word_offset_2 = 3 * a4;
    cached_this = this;
    for ( i = 0; i < a5; ++i )
    {
      weighted_sum_5 = (float *)((char *)cached_this + 8 * a6 * i);
      weighted_sum = *((float **)a3 + 7);
      record_byte_offset = weighted_sum;
      saved_weighted_sum = weighted_sum;
      for ( j = 0; j < a4; ++j )
      {
        combined_products = (float)(weighted_sum_5[2 * a4] * *weighted_sum) - (float)(weighted_sum_5[2 * a4 + 1] * weighted_sum[1]);
        weighted_sum_2 = (float)(weighted_sum_5[2 * a4] * weighted_sum[1]) + (float)(weighted_sum_5[2 * a4 + 1] * *weighted_sum);
        combined_products_2 = (float)(weighted_sum_5[2 * record_word_offset] * *record_byte_offset) - (float)(weighted_sum_5[2 * record_word_offset + 1] * record_byte_offset[1]);
        weighted_sum_3 = (float)(weighted_sum_5[2 * record_word_offset] * record_byte_offset[1]) + (float)(weighted_sum_5[2 * record_word_offset + 1] * *record_byte_offset);
        combined_products_3 = (float)(weighted_sum_5[2 * record_word_offset_2] * *saved_weighted_sum) - (float)(weighted_sum_5[2 * record_word_offset_2 + 1] * saved_weighted_sum[1]);
        weighted_sum_4 = (float)(weighted_sum_5[2 * record_word_offset_2] * saved_weighted_sum[1]) + (float)(weighted_sum_5[2 * record_word_offset_2 + 1] * *saved_weighted_sum);
        product_difference_2 = *weighted_sum_5 - combined_products_2;
        component_delta_6 = weighted_sum_5[1] - weighted_sum_3;
        *weighted_sum_5 = *weighted_sum_5 + combined_products_2;
        weighted_sum_5[1] = weighted_sum_5[1] + weighted_sum_3;
        component_sum = combined_products + combined_products_3;
        component_sum_2 = weighted_sum_2 + weighted_sum_4;
        component_delta_4 = combined_products - combined_products_3;
        component_delta_5 = weighted_sum_2 - weighted_sum_4;
        weighted_sum_5[2 * record_word_offset] = *weighted_sum_5 - (float)(combined_products + combined_products_3);
        weighted_sum_5[2 * record_word_offset + 1] = weighted_sum_5[1] - component_sum_2;
        weighted_sum += 2 * (_QWORD)a2;
        record_byte_offset += 4 * (_QWORD)a2;
        saved_weighted_sum += 6 * (_QWORD)a2;
        *weighted_sum_5 = *weighted_sum_5 + component_sum;
        weighted_sum_5[1] = weighted_sum_5[1] + component_sum_2;
        weighted_sum_5[2 * a4] = product_difference_2 + component_delta_5;
        weighted_sum_5[2 * a4 + 1] = component_delta_6 - component_delta_4;
        weighted_sum_5[2 * record_word_offset_2] = product_difference_2 - component_delta_5;
        weighted_sum_5[2 * record_word_offset_2 + 1] = component_delta_6 + component_delta_4;
        weighted_sum_5 += 2;
      }
    }
  }
  return; /* original void FFT stage */
}

//----- (00000001401B6FA0) ----------------------------------------------------
void               sub_1401B6FA0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int i;
  float *record_byte_offset;
  float *saved_record_byte_offset;
  __int64 record_word_offset;
  __int64 remaining_count;
  __int64 float_word;
  __int64 input_value;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  float weighted_sum_3;
  float combined_products_2;
  float weighted_sum_4;
  float component_sum;
  float component_sum_2;
  __int64 unused_local;
  float *weighted_sum_5;

  record_word_offset = 2 * a4;
  input_value = a1;
  float_word = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  for ( i = 0; i < a5; ++i )
  {
    weighted_sum_5 = (float *)(input_value + 8LL * a6 * i);
    record_byte_offset = *(float **)(a3 + 56);
    saved_record_byte_offset = record_byte_offset;
    remaining_count = a4;
    do
    {
      combined_products = (float)(weighted_sum_5[2 * a4] * *saved_record_byte_offset) - (float)(weighted_sum_5[2 * a4 + 1] * saved_record_byte_offset[1]);
      weighted_sum_3 = (float)(weighted_sum_5[2 * a4] * saved_record_byte_offset[1]) + (float)(weighted_sum_5[2 * a4 + 1] * *saved_record_byte_offset);
      combined_products_2 = (float)(weighted_sum_5[2 * record_word_offset] * *record_byte_offset) - (float)(weighted_sum_5[2 * record_word_offset + 1] * record_byte_offset[1]);
      weighted_sum_4 = (float)(weighted_sum_5[2 * record_word_offset] * record_byte_offset[1]) + (float)(weighted_sum_5[2 * record_word_offset + 1] * *record_byte_offset);
      component_sum = combined_products + combined_products_2;
      component_sum_2 = weighted_sum_3 + weighted_sum_4;
      weighted_sum = combined_products - combined_products_2;
      weighted_sum_2 = weighted_sum_3 - weighted_sum_4;
      saved_record_byte_offset += 2 * a2;
      record_byte_offset += 4 * a2;
      weighted_sum_5[2 * a4] = *weighted_sum_5 - (float)((float)(combined_products + combined_products_2) * 0.5);
      weighted_sum_5[2 * a4 + 1] = weighted_sum_5[1] - (float)(component_sum_2 * 0.5);
      weighted_sum = weighted_sum * *((float *)&float_word + 1);
      weighted_sum_2 = weighted_sum_2 * *((float *)&float_word + 1);
      *weighted_sum_5 = *weighted_sum_5 + component_sum;
      weighted_sum_5[1] = weighted_sum_5[1] + component_sum_2;
      weighted_sum_5[2 * record_word_offset] = weighted_sum_5[2 * a4] + weighted_sum_2;
      weighted_sum_5[2 * record_word_offset + 1] = weighted_sum_5[2 * a4 + 1] - weighted_sum;
      weighted_sum_5[2 * a4] = weighted_sum_5[2 * a4] - weighted_sum_2;
      weighted_sum_5[2 * a4 + 1] = weighted_sum_5[2 * a4 + 1] + weighted_sum;
      weighted_sum_5 += 2;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return; /* original void FFT stage */
}

//----- (00000001401B7510) ----------------------------------------------------
void               sub_1401B7510(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int j;
  __int64 loaded_word;
  float *weighted_sum;
  int i;
  __int64 float_word;
  __int64 float_word_2;
  float *state_address;
  float *state_address_2;
  float *state_address_3;
  float *state_address_4;
  __int64 input_value;
  __int64 float_word_3;
  float combined_products;
  float weighted_sum_2;
  float combined_products_2;
  float weighted_sum_3;
  float combined_products_3;
  float weighted_sum_4;
  float combined_products_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float state_address_5;
  float combined_products_5;
  float component_sum;
  float component_sum_2;
  float component_sum_3;
  float component_sum_4;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  float weighted_sum_8;
  float weighted_sum_9;
  float state_address_6;
  float state_address_7;
  __int64 unused_local;

  input_value = a1;
  float_word_2 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  float_word = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * 2 * a2);
  loaded_word = *(_QWORD *)(a3 + 56);
  for ( i = 0; i < a5; ++i )
  {
    weighted_sum = (float *)(input_value + 8LL * a6 * i);
    state_address = &weighted_sum[2 * a4];
    state_address_2 = &weighted_sum[4 * a4];
    state_address_3 = &weighted_sum[6 * a4];
    state_address_4 = &weighted_sum[8 * a4];
    for ( j = 0; j < a4; ++j )
    {
      float_word_3 = *(_QWORD *)weighted_sum;
      combined_products = (float)(*state_address * *(float *)(loaded_word + 8 * a2 * j)) - (float)(state_address[1] * *(float *)(loaded_word + 8 * a2 * j + 4));
      weighted_sum_2 = (float)(*state_address * *(float *)(loaded_word + 8 * a2 * j + 4)) + (float)(state_address[1] * *(float *)(loaded_word + 8 * a2 * j));
      combined_products_2 = (float)(*state_address_2 * *(float *)(loaded_word + 8 * a2 * 2 * j)) - (float)(state_address_2[1] * *(float *)(loaded_word + 8 * a2 * 2 * j + 4));
      weighted_sum_3 = (float)(*state_address_2 * *(float *)(loaded_word + 8 * a2 * 2 * j + 4)) + (float)(state_address_2[1] * *(float *)(loaded_word + 8 * a2 * 2 * j));
      combined_products_3 = (float)(*state_address_3 * *(float *)(loaded_word + 8 * a2 * 3 * j)) - (float)(state_address_3[1] * *(float *)(loaded_word + 8 * a2 * 3 * j + 4));
      weighted_sum_4 = (float)(*state_address_3 * *(float *)(loaded_word + 8 * a2 * 3 * j + 4)) + (float)(state_address_3[1] * *(float *)(loaded_word + 8 * a2 * 3 * j));
      combined_products_4 = (float)(*state_address_4 * *(float *)(loaded_word + 8 * a2 * 4 * j)) - (float)(state_address_4[1] * *(float *)(loaded_word + 8 * a2 * 4 * j + 4));
      weighted_sum_5 = (float)(*state_address_4 * *(float *)(loaded_word + 8 * a2 * 4 * j + 4)) + (float)(state_address_4[1] * *(float *)(loaded_word + 8 * a2 * 4 * j));
      component_sum = combined_products + combined_products_4;
      component_sum_2 = weighted_sum_2 + weighted_sum_5;
      component_delta_3 = combined_products - combined_products_4;
      component_delta_4 = weighted_sum_2 - weighted_sum_5;
      component_sum_3 = combined_products_2 + combined_products_3;
      component_sum_4 = weighted_sum_3 + weighted_sum_4;
      component_delta = combined_products_2 - combined_products_3;
      component_delta_2 = weighted_sum_3 - weighted_sum_4;
      *weighted_sum = *weighted_sum + (float)((float)(combined_products + combined_products_4) + (float)(combined_products_2 + combined_products_3));
      weighted_sum[1] = weighted_sum[1] + (float)(component_sum_2 + component_sum_4);
      weighted_sum_6 = *(float *)&float_word_3 + (float)((float)(component_sum * *(float *)&float_word_2) + (float)(component_sum_3 * *(float *)&float_word));
      weighted_sum_7 = *((float *)&float_word_3 + 1) + (float)((float)(component_sum_2 * *(float *)&float_word_2) + (float)(component_sum_4 * *(float *)&float_word));
      state_address_5 = (float)(component_delta_4 * *((float *)&float_word_2 + 1)) + (float)(component_delta_2 * *((float *)&float_word + 1));
      combined_products_5 = -(float)((float)(component_delta_3 * *((float *)&float_word_2 + 1)) + (float)(component_delta * *((float *)&float_word + 1)));
      *state_address = weighted_sum_6 - state_address_5;
      state_address[1] = weighted_sum_7 - combined_products_5;
      *state_address_4 = weighted_sum_6 + state_address_5;
      state_address_4[1] = weighted_sum_7 + combined_products_5;
      weighted_sum_8 = *(float *)&float_word_3 + (float)((float)(component_sum * *(float *)&float_word) + (float)(component_sum_3 * *(float *)&float_word_2));
      weighted_sum_9 = *((float *)&float_word_3 + 1) + (float)((float)(component_sum_2 * *(float *)&float_word) + (float)(component_sum_4 * *(float *)&float_word_2));
      state_address_6 = (float)(component_delta_2 * *((float *)&float_word_2 + 1)) - (float)(component_delta_4 * *((float *)&float_word + 1));
      state_address_7 = (float)(component_delta_3 * *((float *)&float_word + 1)) - (float)(component_delta * *((float *)&float_word_2 + 1));
      *state_address_2 = weighted_sum_8 + state_address_6;
      state_address_2[1] = weighted_sum_9 + state_address_7;
      *state_address_3 = weighted_sum_8 - state_address_6;
      state_address_3[1] = weighted_sum_9 - state_address_7;
      weighted_sum += 2;
      state_address += 2;
      state_address_2 += 2;
      state_address_3 += 2;
      state_address_4 += 2;
    }
  }
  return; /* original void FFT stage */
}

//----- (00000001401B7F80) ----------------------------------------------------
_DWORD *           sub_1401B7F80(_DWORD *a1, int *a2, int a3, int a4)
{
  int state_address;
  int running_total;
  int loaded_word;
  int xor_value;
  int i;
  int comparison_result;
  int shifted_bits;
  int integer_difference;
  int integer_sum;
  int shifted_bits_2;
  int scaled_index;

  integer_sum = a3;
  loaded_word = *a2;
  state_address = 0;
  if ( *a2 )
  {
    comparison_result = loaded_word < 0;
    xor_value = -comparison_result ^ (loaded_word - comparison_result);
    running_total = a3;
    shifted_bits_2 = sub_1401B82F0(a3, a4);
    for ( i = 1; shifted_bits_2 && i < xor_value; ++i )
    {
      scaled_index = 2 * shifted_bits_2;
      running_total += scaled_index + 2;
      shifted_bits_2 = (unsigned int)(a4 * scaled_index) >> 15;
    }
    if ( shifted_bits_2 )
    {
      integer_sum = shifted_bits_2 + 1;
      state_address = ((comparison_result - 1) & integer_sum) + running_total;
    }
    else
    {
      if ( xor_value - i >= ((0x8000 - running_total + comparison_result) >> 1) - 1 )
        shifted_bits = ((0x8000 - running_total + comparison_result) >> 1) - 1;
      else
        shifted_bits = xor_value - i;
      state_address = 2 * shifted_bits - comparison_result + 1 + running_total;
      if ( state_address == 0x8000 || state_address == 32767 )
        integer_difference = 0x8000 - state_address;
      else
        integer_difference = 1;
      integer_sum = integer_difference;
      *a2 = -comparison_result ^ (shifted_bits + i - comparison_result);
    }
  }
  return sub_14019A360(a1, state_address, integer_sum + state_address, 15);
}

//----- (00000001401B8170) ----------------------------------------------------
__int64            sub_1401B8170(_DWORD *a1, unsigned int a2, int a3)
{
  int running_total;
  unsigned int iteration_count;
  unsigned int call_result;
  int integer_sum;
  int record_word_offset;

  iteration_count = 0;
  call_result = sub_14019ADB0(a1, 15);
  running_total = 0;
  if ( call_result >= a2 )
  {
    iteration_count = 1;
    running_total = a2;
    a2 = sub_1401B82F0(a2, a3) + 1;
    while ( a2 > 1 && call_result >= running_total + 2 * a2 )
    {
      record_word_offset = 2 * a2;
      running_total += record_word_offset;
      a2 = ((unsigned int)(a3 * (record_word_offset - 2)) >> 15) + 1;
      ++iteration_count;
    }
    if ( a2 <= 1 )
    {
      iteration_count += (call_result - running_total) >> 1;
      running_total += 2 * ((call_result - running_total) >> 1);
    }
    if ( call_result >= a2 + running_total )
      running_total += a2;
    else
      iteration_count = -iteration_count;
  }
  if ( a2 + running_total >= 0x8000 )
    integer_sum = 0x8000;
  else
    integer_sum = a2 + running_total;
  sub_14019AE70(a1, running_total, integer_sum, 0x8000);
  return iteration_count;
}

//----- (00000001401B82F0) ----------------------------------------------------
__int64            sub_1401B82F0(int a1, int a2)
{
  return (unsigned int)((0x4000 - a2) * (32736 - a1)) >> 15;
}

//----- (00000001401B8330) ----------------------------------------------------
__int64            sub_1401B8330(__int64 a1, __int64 a2, int a3, signed int a4, signed int *a5)
{
  __int64 result;
  signed int j;
  float weighted_sum;
  float combined_products;
  int i;
  float combined_products_2;
  int float_word;
  float squared_component;
  float squared_component_2;
  float saved_weighted_sum;
  float saved_weighted_sum_2;

  weighted_sum = 1.0;
  squared_component = -1.0;
  squared_component_2 = -1.0;
  saved_weighted_sum = 0.0;
  saved_weighted_sum_2 = 0.0;
  *a5 = 0;
  a5[1] = 1;
  for ( i = 0; i < a3; ++i )
    weighted_sum = weighted_sum + (float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i));
  for ( j = 0; ; ++j )
  {
    result = (unsigned int)a4;
    if ( j >= a4 )
      break;
    if ( *(float *)(a1 + 4LL * j) > 0.0 )
    {
      combined_products_2 = *(float *)(a1 + 4LL * j) * 1.0e-12;
      if ( (float)((float)(combined_products_2 * combined_products_2) * saved_weighted_sum_2) > (float)(squared_component_2 * weighted_sum) )
      {
        if ( (float)((float)(combined_products_2 * combined_products_2) * saved_weighted_sum) <= (float)(squared_component * weighted_sum) )
        {
          squared_component_2 = combined_products_2 * combined_products_2;
          saved_weighted_sum_2 = weighted_sum;
          a5[1] = j;
        }
        else
        {
          squared_component_2 = squared_component;
          saved_weighted_sum_2 = saved_weighted_sum;
          a5[1] = *a5;
          squared_component = combined_products_2 * combined_products_2;
          saved_weighted_sum = weighted_sum;
          *a5 = j;
        }
      }
    }
    combined_products = weighted_sum
       + (float)((float)(*(float *)(a2 + 4LL * (a3 + j)) * *(float *)(a2 + 4LL * (a3 + j)))
               - (float)(*(float *)(a2 + 4LL * j) * *(float *)(a2 + 4LL * j)));
    if ( combined_products >= 1.0 )
      float_word = LODWORD(combined_products);
    else
      float_word = 1065353216;
    weighted_sum = *(float *)&float_word;
  }
  return result;
}

//----- (00000001401B86A0) ----------------------------------------------------
__int64            sub_1401B86A0(__int64 a1, float *a2, unsigned int a3)
{
  __int64 result;
  float weighted_sum;
  int i;
  float cached_weighted_sum;
  float cached_weighted_sum_2;
  float saved_weighted_sum;
  float weighted_sum_2;
  float cached_weighted_sum_3;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float source_component_w;
  float source_float_4;

  scaled_value = *a2;
  source_component_y = a2[1];
  source_component_z = a2[2];
  source_component_w = a2[3];
  source_float_4 = a2[4];
  weighted_sum_2 = 0.0;
  saved_weighted_sum = 0.0;
  cached_weighted_sum_2 = 0.0;
  cached_weighted_sum = 0.0;
  cached_weighted_sum_3 = 0.0;
  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    weighted_sum = (float)((float)((float)((float)(*(float *)(a1 + 4LL * i) + (float)(scaled_value * weighted_sum_2)) + (float)(source_component_y * saved_weighted_sum))
                       + (float)(source_component_z * cached_weighted_sum_2))
               + (float)(source_component_w * cached_weighted_sum))
       + (float)(source_float_4 * cached_weighted_sum_3);
    cached_weighted_sum_3 = cached_weighted_sum;
    cached_weighted_sum = cached_weighted_sum_2;
    cached_weighted_sum_2 = saved_weighted_sum;
    saved_weighted_sum = weighted_sum_2;
    weighted_sum_2 = *(float *)(a1 + 4LL * i);
    *(float *)(a1 + 4LL * i) = weighted_sum;
  }
  return result;
}

//----- (00000001401B8890) ----------------------------------------------------
__m128            sub_1401B8890(float a1, float a2, float a3)
{
  float square_root;
  __int128 float_word;

  square_root = sqrt((float)((float)(a2 * a3) + 1.0));
  float_word = LODWORD(a1);
  *(float *)&float_word = a1 / square_root;
  return (__m128)float_word;
}

//----- (00000001401B88F0) ----------------------------------------------------
float            sub_1401B88F0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i;
  int iteration_count;
  float scaled_index;
  float combined_products;

  scaled_index = 0.0;
  iteration_count = 0;
  do
  {
    for ( i = a3; i < a4; ++i )
    {
      combined_products = *(float *)(a1 + 4LL * (a5 * iteration_count + i)) - *(float *)(a2 + 4LL * (a5 * iteration_count + i));
      scaled_index = scaled_index + (float)(combined_products * combined_products);
    }
    ++iteration_count;
  }
  while ( iteration_count < a6 );
  if ( scaled_index <= 200.0 )
    return scaled_index;
  else
    return 200.0;
}

//----- (00000001401B89F0) ----------------------------------------------------
__int64            sub_1401B89F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15)
{
  int floor_result;
  int i;
  int element_index;
  float weighted_sum;
  int scaled_index;
  float selected_scalar;
  float saved_floor_result;
  unsigned int running_total;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_delta;
  int saved_floor_result_2;
  int saved_floor_result_3;
  int saved_floor_result_4;
  int cached_i;
  int unused_written_slot;
  int saved_floor_result_5;
  int saved_floor_result_6;
  int integer_difference;
  int comparison_result;
  int saved_floor_result_7;
  float product_difference;
  float saved_weighted_sum;
  float selected_scalar_2;
  _DWORD float_word[2];
  int saved_floor_result_8;
  float weighted_sum_4;
  int call_result;

  running_total = 0;
  float_word[0] = 0;
  float_word[1] = 0;
  if ( a7 + 3 <= a6 )
    sub_14019A450(a10, a13, 3);
  if ( a13 )
  {
    selected_scalar = 0.0;
    selected_scalar_2 = 0.1499939;
  }
  else
  {
    selected_scalar_2 = flt_14027E488[a12];
    selected_scalar = flt_14027E378[a12];
  }
  for ( i = a2; i < a3; ++i )
  {
    element_index = 0;
    do
    {
      weighted_sum = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i)) >= -9.0 )
        weighted_sum_2 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i));
      else
        weighted_sum_2 = -9.0;
      saved_weighted_sum = weighted_sum_2;
      product_difference = (float)(weighted_sum - (float)(selected_scalar * weighted_sum_2)) - *(float *)&float_word[element_index];
      floor_result = (int)floor((float)(product_difference + 0.5));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i)) >= -28.0 )
        weighted_sum_3 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i));
      else
        weighted_sum_3 = -28.0;
      component_delta = weighted_sum_3 - a14;
      if ( floor_result < 0 && component_delta > weighted_sum )
      {
        floor_result += (int)(float)(component_delta - weighted_sum);
        if ( floor_result > 0 )
          floor_result = 0;
      }
      saved_floor_result_8 = floor_result;
      call_result = sub_14019A0A0((__int64)a10);
      scaled_index = a6 - call_result - (a3 - i) * 3 * a11;
      if ( i != a2 && scaled_index < 30 )
      {
        if ( scaled_index < 24 )
        {
          if ( floor_result <= 1 )
            saved_floor_result_2 = floor_result;
          else
            saved_floor_result_2 = 1;
          floor_result = saved_floor_result_2;
        }
        if ( scaled_index < 16 )
        {
          if ( floor_result >= -1 )
            saved_floor_result_3 = floor_result;
          else
            saved_floor_result_3 = -1;
          floor_result = saved_floor_result_3;
        }
      }
      if ( a15 && i >= 2 )
      {
        if ( floor_result >= 0 )
          saved_floor_result_4 = 0;
        else
          saved_floor_result_4 = floor_result;
        floor_result = saved_floor_result_4;
      }
      if ( a6 - call_result < 15 )
      {
        if ( a6 - call_result < 2 )
        {
          if ( a6 - call_result < 1 )
          {
            floor_result = -1;
          }
          else
          {
            if ( floor_result <= 0 )
              saved_floor_result_7 = floor_result;
            else
              saved_floor_result_7 = 0;
            floor_result = saved_floor_result_7;
            sub_14019A450(a10, -saved_floor_result_7, 1);
          }
        }
        else
        {
          if ( floor_result >= 1 )
            saved_floor_result_5 = 1;
          else
            saved_floor_result_5 = floor_result;
          if ( saved_floor_result_5 >= -1 )
          {
            if ( floor_result >= 1 )
              saved_floor_result_6 = 1;
            else
              saved_floor_result_6 = floor_result;
            integer_difference = saved_floor_result_6;
          }
          else
          {
            integer_difference = -1;
          }
          floor_result = integer_difference;
          comparison_result = integer_difference < 0;
          sub_14019A4F0(a10, -comparison_result ^ (2 * integer_difference), (__int64)&unk_14027E374, 2);
        }
      }
      else
      {
        if ( i >= 20 )
          cached_i = 20;
        else
          cached_i = i;
        unused_written_slot = 2 * cached_i;
        sub_1401B7F80(a10, &floor_result, *(unsigned __int8 *)(a8 + 2 * cached_i) << 7, *(unsigned __int8 *)(a8 + 2 * cached_i + 1) << 6);
      }
      *(float *)(a9 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i)) = product_difference - (float)floor_result;
      running_total += abs(saved_floor_result_8 - floor_result);
      saved_floor_result = (float)floor_result;
      weighted_sum_4 = (float)((float)(selected_scalar * saved_weighted_sum) + *(float *)&float_word[element_index]) + (float)floor_result;
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * element_index + i)) = weighted_sum_4;
      *(float *)&float_word[element_index] = (float)(*(float *)&float_word[element_index] + saved_floor_result) - (float)(selected_scalar_2 * saved_floor_result);
      ++element_index;
    }
    while ( element_index < a11 );
  }
  if ( a15 )
    return 0;
  else
    return running_total;
}

//----- (00000001401B9070) ----------------------------------------------------
__int64            sub_1401B9070(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int *a10,
        int a11,
        int *a12,
        int a13,
        int *a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        unsigned int *a21,
        int a22,
        int a23,
        int a24)
{
  int remaining_count;
  int remaining_count_2;
  int integer_difference;
  int k;
  int m;
  int n;
  int j;
  int running_total;
  int record_byte_offset;
  int loaded_word;
  int loaded_word_2;
  int remaining_amount;
  int shifted_bits;
  int remaining_amount_2;
  int shifted_bits_2;
  int record_word_offset;
  unsigned int scaled_index;
  int loaded_word_3;
  int selection_flag;
  int selection_flag_2;
  int remaining_amount_3;
  int loaded_word_4;
  int loaded_word_5;
  int shifted_bits_3;
  int shifted_bits_4;
  int saved_remaining_amount;
  char comparison_result;
  int i;
  int shifted_bits_5;
  int shifted_bits_6;
  int loaded_word_6;
  int shifted_bits_7;
  int shifted_bits_8;
  int saved_shifted_bits;
  int comparison_result_2;
  int comparison_result_3;
  int selection_code;
  int cached_selection_code;
  int loaded_word_7;
  int cached_j;
  int saved_remaining_amount_2;
  int loaded_word_8;
  BOOL comparison_result_4;
  int loaded_word_9;
  int loaded_word_10;
  int scaled_index_2;
  int shifted_bits_9;
  int record_word_offset_2;
  int integer_difference_2;
  int integer_difference_3;

  record_word_offset = 8 * a19;
  comparison_result = a19 > 1;
  shifted_bits_6 = 0;
  shifted_bits_8 = 64;
  for ( i = 0; i < 6; ++i )
  {
    shifted_bits_5 = (shifted_bits_8 + shifted_bits_6) >> 1;
    running_total = 0;
    selection_flag = 0;
    remaining_count = a3;
    while ( 1 )
    {
      integer_difference_2 = remaining_count--;
      if ( integer_difference_2 <= a2 )
        break;
      shifted_bits_3 = *(_DWORD *)(a5 + 4LL * remaining_count) + ((*(_DWORD *)(a6 + 4LL * remaining_count) * shifted_bits_5) >> 6);
      if ( shifted_bits_3 >= *(_DWORD *)(a7 + 4LL * remaining_count) || selection_flag )
      {
        selection_flag = 1;
        if ( shifted_bits_3 >= *(_DWORD *)(a8 + 4LL * remaining_count) )
          shifted_bits_7 = *(_DWORD *)(a8 + 4LL * remaining_count);
        else
          shifted_bits_7 = *(_DWORD *)(a5 + 4LL * remaining_count) + ((*(_DWORD *)(a6 + 4LL * remaining_count) * shifted_bits_5) >> 6);
        running_total += shifted_bits_7;
      }
      else if ( shifted_bits_3 >= record_word_offset )
      {
        running_total += record_word_offset;
      }
    }
    if ( running_total <= a9 )
      shifted_bits_6 = (shifted_bits_8 + shifted_bits_6) >> 1;
    else
      shifted_bits_8 = (shifted_bits_8 + shifted_bits_6) >> 1;
  }
  record_byte_offset = 0;
  selection_flag_2 = 0;
  remaining_count_2 = a3;
  while ( 1 )
  {
    integer_difference_3 = remaining_count_2--;
    if ( integer_difference_3 <= a2 )
      break;
    shifted_bits_2 = *(_DWORD *)(a5 + 4LL * remaining_count_2) + ((*(_DWORD *)(a6 + 4LL * remaining_count_2) * shifted_bits_6) >> 6);
    if ( shifted_bits_2 >= *(_DWORD *)(a7 + 4LL * remaining_count_2) || selection_flag_2 )
    {
      selection_flag_2 = 1;
    }
    else if ( shifted_bits_2 < record_word_offset )
    {
      shifted_bits_2 = 0;
    }
    else
    {
      shifted_bits_2 = 8 * a19;
    }
    if ( shifted_bits_2 >= *(_DWORD *)(a8 + 4LL * remaining_count_2) )
      saved_shifted_bits = *(_DWORD *)(a8 + 4LL * remaining_count_2);
    else
      saved_shifted_bits = shifted_bits_2;
    *(_DWORD *)(a16 + 4LL * remaining_count_2) = saved_shifted_bits;
    record_byte_offset += saved_shifted_bits;
  }
  for ( j = a3; ; --j )
  {
    integer_difference = j - 1;
    if ( j - 1 <= a4 )
    {
      a9 += a11;
      goto LABEL_60;
    }
    loaded_word_4 = sub_14019A1A0(
            a9 - record_byte_offset,
            *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    loaded_word_2 = a9
        - record_byte_offset
        - loaded_word_4 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    comparison_result_2 = loaded_word_2 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * integer_difference) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2)) <= 0
        ? 0
        : loaded_word_2 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * integer_difference) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    loaded_word_7 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * integer_difference);
    remaining_amount_3 = comparison_result_2 + loaded_word_7 * loaded_word_4 + *(_DWORD *)(a16 + 4LL * integer_difference);
    comparison_result_3 = *(_DWORD *)(a7 + 4LL * integer_difference) <= record_word_offset + 8 ? record_word_offset + 8 : *(_DWORD *)(a7 + 4LL * integer_difference);
    if ( remaining_amount_3 >= comparison_result_3 )
      break;
LABEL_55:
    loaded_word = record_byte_offset - (a13 + *(_DWORD *)(a16 + 4LL * integer_difference));
    if ( a13 > 0 )
      a13 = byte_14027E388[integer_difference - a2];
    record_byte_offset = a13 + loaded_word;
    if ( remaining_amount_3 < record_word_offset )
    {
      *(_DWORD *)(a16 + 4LL * integer_difference) = 0;
    }
    else
    {
      record_byte_offset += record_word_offset;
      *(_DWORD *)(a16 + 4LL * integer_difference) = record_word_offset;
    }
  }
  if ( !a22 )
  {
    if ( sub_14019AF20(a21, 1) )
      goto LABEL_60;
    goto LABEL_54;
  }
  if ( j <= 17 )
  {
    cached_selection_code = 0;
  }
  else
  {
    if ( integer_difference >= a23 )
      selection_code = 9;
    else
      selection_code = 7;
    cached_selection_code = selection_code;
  }
  if ( j > a2 + 2 && (remaining_amount_3 <= (8 * ((loaded_word_7 * cached_selection_code) << a20)) >> 4 || integer_difference > a24) )
  {
    sub_14019A450(a21, 0, 1);
LABEL_54:
    record_byte_offset += 8;
    remaining_amount_3 -= 8;
    goto LABEL_55;
  }
  sub_14019A450(a21, 1, 1);
LABEL_60:
  if ( a13 <= 0 )
  {
    *a12 = 0;
  }
  else if ( a22 )
  {
    if ( *a12 >= j )
      cached_j = j;
    else
      cached_j = *a12;
    *a12 = cached_j;
    sub_14019A5E0(a21, *a12 - a2, j + 1 - a2);
  }
  else
  {
    *a12 = sub_14019B0A0(a21, j + 1 - a2) + a2;
  }
  if ( *a12 <= a2 )
  {
    a9 += a15;
    a15 = 0;
  }
  if ( a15 <= 0 )
  {
    *a14 = 0;
  }
  else if ( a22 )
  {
    sub_14019A450(a21, *a14, 1);
  }
  else
  {
    *a14 = sub_14019AF20(a21, 1);
  }
  loaded_word_5 = sub_14019A1A0(
          a9 - record_byte_offset,
          *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
  remaining_amount = a9 - record_byte_offset - loaded_word_5 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
  for ( k = a2; k < j; ++k )
    *(_DWORD *)(a16 + 4LL * k) += (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (k + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * k))
                                * loaded_word_5;
  for ( m = a2; m < j; ++m )
  {
    if ( remaining_amount >= *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m) )
      saved_remaining_amount_2 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m);
    else
      saved_remaining_amount_2 = remaining_amount;
    *(_DWORD *)(a16 + 4LL * m) += saved_remaining_amount_2;
    remaining_amount -= saved_remaining_amount_2;
  }
  saved_remaining_amount = 0;
  for ( n = a2; n < j; ++n )
  {
    shifted_bits_4 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (n + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * n)) << a20;
    loaded_word_3 = saved_remaining_amount + *(_DWORD *)(a16 + 4LL * n);
    if ( shifted_bits_4 <= 1 )
    {
      if ( loaded_word_3 - 8 * a19 >= 0 )
        scaled_index_2 = loaded_word_3 - 8 * a19;
      else
        scaled_index_2 = 0;
      remaining_amount_2 = scaled_index_2;
      *(_DWORD *)(a16 + 4LL * n) = loaded_word_3 - scaled_index_2;
      *(_DWORD *)(a17 + 4LL * n) = 0;
      *(_DWORD *)(a18 + 4LL * n) = 1;
    }
    else
    {
      if ( loaded_word_3 - *(_DWORD *)(a8 + 4LL * n) <= 0 )
        loaded_word_8 = 0;
      else
        loaded_word_8 = loaded_word_3 - *(_DWORD *)(a8 + 4LL * n);
      remaining_amount_2 = loaded_word_8;
      *(_DWORD *)(a16 + 4LL * n) = loaded_word_3 - loaded_word_8;
      comparison_result_4 = a19 == 2 && shifted_bits_4 > 2 && !*a14 && n < *a12;
      scaled_index = comparison_result_4 + shifted_bits_4 * a19;
      loaded_word_6 = (8 * a20 + *(__int16 *)(*(_QWORD *)(a1 + 64) + 2LL * n)) * scaled_index;
      shifted_bits = (loaded_word_6 >> 1) - 21 * scaled_index;
      if ( shifted_bits_4 == 2 )
        shifted_bits += (int)(8 * scaled_index) >> 2;
      if ( shifted_bits + *(_DWORD *)(a16 + 4LL * n) >= (int)(16 * scaled_index) )
      {
        if ( shifted_bits + *(_DWORD *)(a16 + 4LL * n) < (int)(24 * scaled_index) )
          shifted_bits += loaded_word_6 >> 3;
      }
      else
      {
        shifted_bits += loaded_word_6 >> 2;
      }
      if ( (int)(shifted_bits + *(_DWORD *)(a16 + 4LL * n) + 4 * scaled_index) >= 0 )
        loaded_word_9 = shifted_bits + *(_DWORD *)(a16 + 4LL * n) + 4 * scaled_index;
      else
        loaded_word_9 = 0;
      *(_DWORD *)(a17 + 4LL * n) = loaded_word_9;
      *(_DWORD *)(a17 + 4LL * n) = (unsigned int)sub_14019A1A0(*(_DWORD *)(a17 + 4LL * n), scaled_index) >> 3;
      if ( *(_DWORD *)(a17 + 4LL * n) * a19 > *(int *)(a16 + 4LL * n) >> 3 )
        *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> comparison_result >> 3;
      if ( *(int *)(a17 + 4LL * n) >= 8 )
        loaded_word_10 = 8;
      else
        loaded_word_10 = *(_DWORD *)(a17 + 4LL * n);
      *(_DWORD *)(a17 + 4LL * n) = loaded_word_10;
      *(_DWORD *)(a18 + 4LL * n) = (int)(8 * scaled_index * *(_DWORD *)(a17 + 4LL * n)) >= shifted_bits + *(_DWORD *)(a16 + 4LL * n);
      *(_DWORD *)(a16 + 4LL * n) -= 8 * *(_DWORD *)(a17 + 4LL * n) * a19;
    }
    if ( remaining_amount_2 > 0 )
    {
      if ( remaining_amount_2 >> (comparison_result + 3) >= 8 - *(_DWORD *)(a17 + 4LL * n) )
        shifted_bits_9 = 8 - *(_DWORD *)(a17 + 4LL * n);
      else
        shifted_bits_9 = remaining_amount_2 >> (comparison_result + 3);
      *(_DWORD *)(a17 + 4LL * n) += shifted_bits_9;
      record_word_offset_2 = 8 * a19 * shifted_bits_9;
      *(_DWORD *)(a18 + 4LL * n) = record_word_offset_2 >= remaining_amount_2 - saved_remaining_amount;
      remaining_amount_2 -= record_word_offset_2;
    }
    saved_remaining_amount = remaining_amount_2;
  }
  *a10 = saved_remaining_amount;
  while ( n < a3 )
  {
    *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> comparison_result >> 3;
    *(_DWORD *)(a16 + 4LL * n) = 0;
    *(_DWORD *)(a18 + 4LL * n) = *(_DWORD *)(a17 + 4LL * n) < 1;
    ++n;
  }
  return (unsigned int)j;
}

//----- (00000001401BA120) ----------------------------------------------------
__int64            sub_1401BA120(float *a1, int a2, int a3, float a4, float a5)
{
  __int64 result;
  int i;
  int j;
  float scaled_value;
  float comparison_operand;
  float scaled_value_2;
  float component_delta;
  float comparison_operand_2;
  float *buffer_cursor;
  float *buffer_cursor_2;

  buffer_cursor = a1;
  component_delta = -a5;
  for ( i = 0; i < a2 - a3; ++i )
  {
    scaled_value = *buffer_cursor;
    comparison_operand = buffer_cursor[a3];
    buffer_cursor[a3] = (float)(a4 * comparison_operand) + (float)(a5 * *buffer_cursor);
    *buffer_cursor++ = (float)(a4 * scaled_value) + (float)(component_delta * comparison_operand);
  }
  buffer_cursor_2 = &a1[a2 - 2 * a3 - 1];
  result = (unsigned int)(a2 - 2 * a3 - 1);
  for ( j = a2 - 2 * a3 - 1; j >= 0; --j )
  {
    scaled_value_2 = *buffer_cursor_2;
    comparison_operand_2 = buffer_cursor_2[a3];
    buffer_cursor_2[a3] = (float)(a4 * comparison_operand_2) + (float)(a5 * *buffer_cursor_2);
    *buffer_cursor_2-- = (float)(a4 * scaled_value_2) + (float)(component_delta * comparison_operand_2);
    result = (unsigned int)(j - 1);
  }
  return result;
}

//----- (00000001401BA2F0) ----------------------------------------------------
__int64            sub_1401BA2F0(__int64 a1, __int64 a2, unsigned int a3, float a4, float a5)
{
  float square_root;
  __int64 result;
  int iteration_count;

  square_root = sqrt(a4);
  iteration_count = 0;
  do
  {
    *(float *)(a2 + 4LL * iteration_count) = (float)((float)(1.0 / square_root) * a5) * (float)*(int *)(a1 + 4LL * iteration_count);
    ++iteration_count;
    result = a3;
  }
  while ( iteration_count < (int)a3 );
  return result;
}

//----- (00000001401BA3A0) ----------------------------------------------------
__int64            sub_1401BA3A0(__int64 a1, unsigned int a2, signed int a3)
{
  signed int iteration_count;
  int iteration_count_2;
  int option_flags;
  unsigned int option_flags_2;
  int call_result;

  if ( a3 <= 1 )
    return 1;
  call_result = sub_14019A1A0(a2, a3);
  option_flags_2 = 0;
  iteration_count = 0;
  do
  {
    option_flags = 0;
    iteration_count_2 = 0;
    do
    {
      option_flags |= *(_DWORD *)(a1 + 4LL * (iteration_count_2 + call_result * iteration_count));
      ++iteration_count_2;
    }
    while ( iteration_count_2 < call_result );
    option_flags_2 |= (option_flags != 0) << iteration_count++;
  }
  while ( iteration_count < a3 );
  return option_flags_2;
}

//----- (00000001401BA490) ----------------------------------------------------
__int64            sub_1401BA490(unsigned int a1)
{
  if ( a1 )
    return (unsigned int)(32 - (sub_14019A020(a1) + 1));
  else
    return 32;
}

//----- (00000001401BA4E0) ----------------------------------------------------
__int64            sub_1401BA4E0(__int64 a1, int a2, int a3, int a4)
{
  char selection_flag;

  crt_memset((void *)(uintptr_t)((_WORD *)a1), 0, 0x130u);
  if ( a4 )
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000 && a2 != 24000 && a2 != 48000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821D0[3 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 4
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  else
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 && a3 != 24000 && a3 != 48000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821E0[5 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 6
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  *(_DWORD *)(a1 + 284) = a2 / 1000;
  *(_DWORD *)(a1 + 288) = a3 / 1000;
  *(_DWORD *)(a1 + 268) = 10 * *(_DWORD *)(a1 + 284);
  selection_flag = 0;
  if ( a3 <= a2 )
  {
    if ( a3 >= a2 )
    {
      *(_DWORD *)(a1 + 264) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 264) = 3;
      if ( 4 * a3 == 3 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 3;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140282100);
      }
      else if ( 3 * a3 == 2 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 2;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_14027FFE8);
      }
      else if ( 2 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 24;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140282140);
      }
      else if ( 3 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140280058);
      }
      else if ( 4 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_1402800C8);
      }
      else
      {
        if ( 6 * a3 != a2 )
          return 0xFFFFFFFFLL;
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140280138);
      }
    }
  }
  else if ( a3 == 2 * a2 )
  {
    *(_DWORD *)(a1 + 264) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 264) = 2;
    selection_flag = 1;
  }
  for ( *(_DWORD *)(a1 + 272) = 4 * ((a2 << (selection_flag + 14)) / a3);
        (int)((a3 * (__int64)*(int *)(a1 + 272)) >> 16) < a2 << selection_flag;
        ++*(_DWORD *)(a1 + 272) )
  {
    ;
  }
  return 0;
}

//----- (00000001401BAA30) ----------------------------------------------------
__int64            sub_1401BAA30(_DWORD *a1, __m128i *a2,      __m128i *a3, int a4)
{
  int integer_difference;
  int table_value;

  integer_difference = a1[71] - a1[73];
  crt_memcpy((__m128i *)((char *)a1 + 2 * a1[73] + 168), a3, 2LL * integer_difference);
  table_value = a1[66];
  switch ( table_value )
  {
    case 1:
      sub_1401DD350(a1, (__int64)a2, (__int64)(a1 + 42), a1[71]);
      sub_1401DD350(a1, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[72], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * integer_difference, a4 - a1[71]);
      break;
    case 2:
      sub_1401DCF80((__int64)a1, SR_VEC_PTR_LANES(128, a2, i16), (__int64)(a1 + 42), a1[71]);
      sub_1401DCF80((__int64)a1, &SR_VEC_PTR_LANES(128, a2, i16)[a1[72]], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * integer_difference, a4 - a1[71]);
      break;
    case 3:
      sub_1401DD130((__int64)a1, SR_VEC_PTR_LANES(128, a2, i16), (__int64)(a1 + 42), a1[71]);
      sub_1401DD130((__int64)a1, &SR_VEC_PTR_LANES(128, a2, i16)[a1[72]], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * integer_difference, a4 - a1[71]);
      break;
    default:
      crt_memcpy(a2, (     __m128i *)(a1 + 42), 2LL * (int)a1[71]);
      crt_memcpy(
        (__m128i *)((char *)a2 + 2 * a1[72]),
        (     __m128i *)((char *)a3 + 2 * integer_difference),
        2LL * (a4 - a1[71]));
      break;
  }
  crt_memcpy((__m128i *)(a1 + 42), (     __m128i *)((char *)a3 + 2 * (a4 - a1[73])), 2LL * (int)a1[73]);
  return 0;
}

//----- (00000001401BAD00) ----------------------------------------------------
__int64            sub_1401BAD00(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  int scaled_index;
  int table_value;
  int i;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  __int16 saved_shifted_bits;
  int shifted_bits_6;

  shifted_bits_6 = a4 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)shifted_bits_6;
    if ( i >= shifted_bits_6 )
      break;
    shifted_bits_3 = *(__int16 *)(a3 + 4LL * i) << 10;
    shifted_bits = ((-25727LL * (shifted_bits_3 - *a1)) >> 16) + shifted_bits_3 - *a1;
    scaled_index = shifted_bits + *a1;
    *a1 = shifted_bits + shifted_bits_3;
    shifted_bits_4 = *(__int16 *)(a3 + 2LL * (2 * i + 1)) << 10;
    shifted_bits_2 = (9872LL * (shifted_bits_4 - a1[1])) >> 16;
    table_value = shifted_bits_2 + a1[1] + scaled_index;
    a1[1] = shifted_bits_2 + shifted_bits_4;
    if ( ((table_value >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((table_value >> 10) + 1) >> 1 >= -32768 )
        shifted_bits_5 = ((table_value >> 10) + 1) >> 1;
      else
        LOWORD(shifted_bits_5) = 0x8000;
      saved_shifted_bits = shifted_bits_5;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * i) = saved_shifted_bits;
  }
  return result;
}

//----- (00000001401BAEE0) ----------------------------------------------------
__int64            sub_1401BAEE0(__m128i *a1, _WORD *a2, __int64 a3, int a4)
{
  void *alloca_result;
  __m128i destination_buffer[118];
  int shifted_bits;
  signed int saved_comparison_result;
  __m128i *saved_destination_buffer;
  int i;
  __m128i *destination_buffer_2;
  signed int comparison_result;
  int shifted_bits_2;
  int saved_shifted_bits;
  int shifted_bits_3;
  int saved_shifted_bits_2;
  __int64 unused_local;
  _WORD *record_pointer;

  alloca_result = alloca(1936);
  destination_buffer_2 = alloca_result;
  crt_memcpy(destination_buffer, a1, 0x10u);
  while ( 1 )
  {
    comparison_result = a4 >= 480 ? 480 : a4;
    saved_comparison_result = comparison_result;
    sub_1401DD7A0((__m128i *)SR_VEC_LANES(128, a1[1], i32), (__int64)SR_VEC_LANES(128, destination_buffer_2[1], i64), a3, word_140282160, comparison_result);
    saved_destination_buffer = destination_buffer_2;
    for ( i = saved_comparison_result; i > 2; i -= 3 )
    {
      shifted_bits = (unk_140282164 * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[0]) >> 16;
      shifted_bits += (unk_140282166 * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[1]) >> 16;
      shifted_bits += (unk_14028216A * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[2]) >> 16;
      shifted_bits += (unk_140282168 * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[3]) >> 16;
      if ( ((shifted_bits >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((shifted_bits >> 5) + 1) >> 1 >= -32768 )
          shifted_bits_2 = ((shifted_bits >> 5) + 1) >> 1;
        else
          shifted_bits_2 = -32768;
        saved_shifted_bits = shifted_bits_2;
      }
      else
      {
        saved_shifted_bits = 0x7FFF;
      }
      *a2 = saved_shifted_bits;
      record_pointer = a2 + 1;
      shifted_bits = (unk_140282168 * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[1]) >> 16;
      shifted_bits += (unk_14028216A * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[2]) >> 16;
      shifted_bits += (unk_140282166 * (__int64)SR_VEC_PTR_LANES(128, saved_destination_buffer, i32)[3]) >> 16;
      shifted_bits += (unk_140282164 * (__int64)SR_VEC_LANES(128, saved_destination_buffer[1], i32)[0]) >> 16;
      if ( ((shifted_bits >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((shifted_bits >> 5) + 1) >> 1 >= -32768 )
          shifted_bits_3 = ((shifted_bits >> 5) + 1) >> 1;
        else
          shifted_bits_3 = -32768;
        saved_shifted_bits_2 = shifted_bits_3;
      }
      else
      {
        saved_shifted_bits_2 = 0x7FFF;
      }
      *record_pointer = saved_shifted_bits_2;
      a2 = record_pointer + 1;
      saved_destination_buffer = (__m128i *)((char *)saved_destination_buffer + 12);
    }
    a3 += 2LL * saved_comparison_result;
    a4 -= saved_comparison_result;
    if ( a4 <= 0 )
      break;
    crt_memcpy(destination_buffer_2, (__m128i *)((char *)destination_buffer_2 + 4 * saved_comparison_result), 0x10u);
  }
  return crt_memcpy(a1, (__m128i *)((char *)destination_buffer_2 + 4 * saved_comparison_result), 0x10u); /* 0x1401BB2A1: the result of this call is still in rax at the exit */
}

//----- (00000001401BB2C0) ----------------------------------------------------
__int64            sub_1401BB2C0(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result;
  int shifted_bits;
  signed int i;
  __int16 loaded_word;
  int shifted_bits_2;
  __int16 saved_shifted_bits;
  int masked_bits;
  int shifted_bits_3;
  int integer_difference;
  int shifted_bits_4;

  masked_bits = -*a3 & 0x3FFF;
  shifted_bits_3 = -*a3 >> 14;
  integer_difference = -a3[1] & 0x3FFF;
  shifted_bits_4 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    loaded_word = *(_WORD *)(a1 + 2LL * i);
    shifted_bits = 4 * (((loaded_word * (__int64)*a2) >> 16) + *a4);
    *a4 = a4[1] + ((((int)(((__int16)masked_bits * (__int64)shifted_bits) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)shifted_bits_3 * (__int64)shifted_bits) >> 16;
    *a4 += (loaded_word * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)integer_difference * (__int64)shifted_bits) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)shifted_bits_4 * (__int64)shifted_bits) >> 16;
    a4[1] += (loaded_word * (__int64)a2[2]) >> 16;
    if ( (shifted_bits + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (shifted_bits + 0x3FFF) >> 14 >= -32768 )
        shifted_bits_2 = (shifted_bits + 0x3FFF) >> 14;
      else
        LOWORD(shifted_bits_2) = 0x8000;
      saved_shifted_bits = shifted_bits_2;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = saved_shifted_bits;
  }
  return result;
}

//----- (00000001401BB590) ----------------------------------------------------
__int64            sub_1401BB590(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result;
  signed int i;
  int shifted_bits;
  int shifted_bits_2;
  int masked_bits;
  int shifted_bits_3;
  int integer_difference;
  int shifted_bits_4;
  int shifted_bits_5;
  __int16 saved_shifted_bits;
  int shifted_bits_6;
  __int16 saved_shifted_bits_2;

  masked_bits = -*a3 & 0x3FFF;
  shifted_bits_3 = -*a3 >> 14;
  integer_difference = -a3[1] & 0x3FFF;
  shifted_bits_4 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    shifted_bits = 4 * (((*(__int16 *)(a1 + 4LL * i) * (__int64)*a2) >> 16) + *a4);
    shifted_bits_2 = 4 * (((*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)*a2) >> 16) + a4[2]);
    *a4 = a4[1] + ((((int)(((__int16)masked_bits * (__int64)shifted_bits) >> 16) >> 13) + 1) >> 1);
    a4[2] = a4[3] + ((((int)(((__int16)masked_bits * (__int64)shifted_bits_2) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)shifted_bits_3 * (__int64)shifted_bits) >> 16;
    a4[2] += ((__int16)shifted_bits_3 * (__int64)shifted_bits_2) >> 16;
    *a4 += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[1]) >> 16;
    a4[2] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)integer_difference * (__int64)shifted_bits) >> 16) >> 13) + 1) >> 1;
    a4[3] = (((int)(((__int16)integer_difference * (__int64)shifted_bits_2) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)shifted_bits_4 * (__int64)shifted_bits) >> 16;
    a4[3] += ((__int16)shifted_bits_4 * (__int64)shifted_bits_2) >> 16;
    a4[1] += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[2]) >> 16;
    a4[3] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[2]) >> 16;
    if ( (shifted_bits + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (shifted_bits + 0x3FFF) >> 14 >= -32768 )
        shifted_bits_5 = (shifted_bits + 0x3FFF) >> 14;
      else
        LOWORD(shifted_bits_5) = 0x8000;
      saved_shifted_bits = shifted_bits_5;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *(_WORD *)(a5 + 4LL * i) = saved_shifted_bits;
    if ( (shifted_bits_2 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (shifted_bits_2 + 0x3FFF) >> 14 >= -32768 )
        shifted_bits_6 = (shifted_bits_2 + 0x3FFF) >> 14;
      else
        LOWORD(shifted_bits_6) = 0x8000;
      saved_shifted_bits_2 = shifted_bits_6;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * (2 * i + 1)) = saved_shifted_bits_2;
  }
  return result;
}

//----- (00000001401BBB40) ----------------------------------------------------
_WORD *           sub_1401BBB40(_WORD *a1, __int64 a2, __int16 *a3, int a4, int a5)
{
  int running_total;
  int j;
  int i;
  int shifted_bits;
  int shifted_bits_2;
  __int16 saved_shifted_bits;
  __int16 *record_pointer;

  for ( i = a5; i < a4; ++i )
  {
    record_pointer = (__int16 *)(a2 + 2LL * (i - 1));
    running_total = a3[5] * *(record_pointer - 5)
       + a3[4] * *(record_pointer - 4)
       + a3[3] * *(record_pointer - 3)
       + a3[2] * *(record_pointer - 2)
       + a3[1] * *(record_pointer - 1)
       + *a3 * *record_pointer;
    for ( j = 6; j < a5; j += 2 )
      running_total += a3[j + 1] * record_pointer[-j - 1] + a3[j] * record_pointer[-j];
    shifted_bits = ((((record_pointer[1] << 12) - running_total) >> 11) + 1) >> 1;
    if ( shifted_bits <= 0x7FFF )
    {
      if ( shifted_bits >= -32768 )
        shifted_bits_2 = ((((record_pointer[1] << 12) - running_total) >> 11) + 1) >> 1;
      else
        LOWORD(shifted_bits_2) = 0x8000;
      saved_shifted_bits = shifted_bits_2;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    a1[i] = saved_shifted_bits;
  }
  return crt_memset((void *)(uintptr_t)(a1), 0, 2LL * a5);
}

//----- (00000001401BBDE0) ----------------------------------------------------
__int64            sub_1401BBDE0(__int64 a1, int a2, int a3)
{
  __int64 result;
  int i;
  int running_total;

  running_total = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_WORD *)(a1 + 2LL * i) = (((*(__int16 *)(a1 + 2LL * i) * running_total) >> 15) + 1) >> 1;
    running_total += ((((a3 - 0x10000) * running_total) >> 15) + 1) >> 1;
  }
  result = (unsigned int)((((*(__int16 *)(a1 + 2LL * (a2 - 1)) * running_total) >> 15) + 1) >> 1);
  *(_WORD *)(a1 + 2LL * (a2 - 1)) = result;
  return result;
}

//----- (00000001401BBEB0) ----------------------------------------------------
__int64            sub_1401BBEB0(__int64 a1, int a2, int a3)
{
  __int64 result;
  int i;
  int running_total;

  running_total = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_DWORD *)(a1 + 4LL * i) = (*(int *)(a1 + 4LL * i) * (__int64)running_total) >> 16;
    running_total += ((((a3 - 0x10000) * running_total) >> 15) + 1) >> 1;
  }
  result = (*(int *)(a1 + 4LL * (a2 - 1)) * (__int64)running_total) >> 16;
  *(_DWORD *)(a1 + 4LL * (a2 - 1)) = result;
  return result;
}

//----- (00000001401BBF70) ----------------------------------------------------
__int64            sub_1401BBF70(__int64 a1, int a2)
{
  __int64 unused_local;
  int i;
  int running_total;
  _DWORD scratch_buffer[24];
  __int64 unused_local_2;

  running_total = 0;
  for ( i = 0; i < a2; ++i )
  {
    running_total += *(__int16 *)(a1 + 2LL * i);
    scratch_buffer[i] = *(__int16 *)(a1 + 2LL * i) << 12;
  }
  if ( running_total < 4096 )
    return sub_1401DC4C0(scratch_buffer, a2); /* 0x1401BC011: the call's result stays in rax */
  return 0; /* 0x1401BC001: xor eax, eax */
}

//----- (00000001401BC040) ----------------------------------------------------
__int64            sub_1401BC040(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result;
  int i;
  int scaled_index;
  int table_value;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  __int16 saved_shifted_bits;
  int shifted_bits_6;
  __int16 saved_shifted_bits_2;
  int shifted_bits_7;

  shifted_bits_7 = a5 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)shifted_bits_7;
    if ( i >= shifted_bits_7 )
      break;
    shifted_bits_3 = *(__int16 *)(a1 + 4LL * i) << 10;
    shifted_bits = ((word_140301FEC * (__int64)(shifted_bits_3 - *a2)) >> 16) + shifted_bits_3 - *a2;
    scaled_index = shifted_bits + *a2;
    *a2 = shifted_bits + shifted_bits_3;
    shifted_bits_4 = *(__int16 *)(a1 + 2LL * (2 * i + 1)) << 10;
    shifted_bits_2 = (word_140301FE8 * (__int64)(shifted_bits_4 - a2[1])) >> 16;
    table_value = shifted_bits_2 + a2[1];
    a2[1] = shifted_bits_2 + shifted_bits_4;
    if ( (((scaled_index + table_value) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((scaled_index + table_value) >> 10) + 1) >> 1 >= -32768 )
        shifted_bits_5 = (((scaled_index + table_value) >> 10) + 1) >> 1;
      else
        LOWORD(shifted_bits_5) = 0x8000;
      saved_shifted_bits = shifted_bits_5;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = saved_shifted_bits;
    if ( (((table_value - scaled_index) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((table_value - scaled_index) >> 10) + 1) >> 1 >= -32768 )
        shifted_bits_6 = (((table_value - scaled_index) >> 10) + 1) >> 1;
      else
        LOWORD(shifted_bits_6) = 0x8000;
      saved_shifted_bits_2 = shifted_bits_6;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    *(_WORD *)(a4 + 2LL * i) = saved_shifted_bits_2;
  }
  return result;
}

//----- (00000001401BC2A0) ----------------------------------------------------
__int64            sub_1401BC2A0(unsigned int a1)
{
  int callee_output_word;
  _DWORD scratch_buffer[5];

  sub_1401BE460(a1, scratch_buffer, &callee_output_word);
  return ((31 - scratch_buffer[0]) << 7) + (unsigned int)((179LL * (128 - callee_output_word) * callee_output_word) >> 16) + callee_output_word;
}

//----- (00000001401BC300) ----------------------------------------------------
__int64            sub_1401BC300(int a1)
{
  if ( a1 >= 0 )
  {
    if ( a1 < 192 )
      return dword_140281F88[a1 >> 5] + (a1 & 0x1Fu) * word_1402801A8[2 * (a1 >> 5)];
    else
      return 0x7FFF;
  }
  else if ( -a1 < 192 )
  {
    return dword_140282200[-a1 >> 5] - (-(char)a1 & 0x1Fu) * word_1402801A8[2 * (-a1 >> 5)];
  }
  else
  {
    return 0;
  }
}

//----- (00000001401BC3D0) ----------------------------------------------------
__int64            sub_1401BC3D0(int a1)
{
  int shifted_bits;
  int shifted_bits_2;

  if ( a1 < 0 )
    return 0;
  if ( a1 >= 3967 )
    return 0x7FFFFFFF;
  shifted_bits_2 = 1 << (a1 >> 7);
  if ( a1 >= 2048 )
    shifted_bits = (((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * (shifted_bits_2 >> 7);
  else
    shifted_bits = (int)((((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * shifted_bits_2) >> 7;
  return (unsigned int)(shifted_bits + shifted_bits_2);
}

//----- (00000001401BC4C0) ----------------------------------------------------
_DWORD *           sub_1401BC4C0(_DWORD *a1, _DWORD *a2, __int64 a3, signed int a4)
{
  int call_result;
  signed int i;
  signed int j;
  unsigned int running_total;
  int running_total_2;
  int call_result_2;
  int call_result_3;

  call_result_2 = 31 - sub_1401BA490(a4);
  running_total = a4;
  for ( i = 0; i < a4 - 1; i += 2 )
    running_total += (unsigned int)(*(__int16 *)(a3 + 2LL * (i + 1)) * *(__int16 *)(a3 + 2LL * (i + 1))
                       + *(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> call_result_2;
  if ( i < a4 )
    running_total += (unsigned int)(*(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> call_result_2;
  call_result = sub_1401BA490(running_total);
  call_result_3 = sub_1401BE420(0, call_result_2 + 3 - call_result);
  running_total_2 = 0;
  for ( j = 0; j < a4 - 1; j += 2 )
    running_total_2 += (unsigned int)(*(__int16 *)(a3 + 2LL * (j + 1)) * *(__int16 *)(a3 + 2LL * (j + 1))
                       + *(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> call_result_3;
  if ( j < a4 )
    running_total_2 += (unsigned int)(*(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> call_result_3;
  *a2 = call_result_3;
  *a1 = running_total_2;
  return a1;
}

//----- (00000001401BC700) ----------------------------------------------------
__int64            sub_1401BC700(__int16 a1, char a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result;
  signed int i;
  int record_word_offset;
  int record_word_offset_2;
  int selection_code;
  int record_word_offset_3;
  int record_word_offset_4;
  int record_word_offset_5;
  int record_word_offset_6;
  int saved_record_word_offset;
  char *state_address;

  if ( a4 == 8 )
  {
    if ( a5 == 4 )
    {
      state_address = (char *)&unk_14027E290;
      selection_code = 11;
    }
    else
    {
      state_address = (char *)&unk_14027BC14;
      selection_code = 3;
    }
  }
  else if ( a5 == 4 )
  {
    state_address = byte_14027E2C0;
    selection_code = 34;
  }
  else
  {
    state_address = (char *)&unk_14027CC28;
    selection_code = 12;
  }
  record_word_offset = 2 * (__int16)a4;
  record_word_offset_2 = 18 * (__int16)a4;
  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_DWORD *)(a3 + 4LL * i) = state_address[a2 + selection_code * i] + a1 + 2 * (__int16)a4;
    if ( record_word_offset <= record_word_offset_2 )
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= record_word_offset_2 )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= record_word_offset )
          record_word_offset_5 = *(_DWORD *)(a3 + 4LL * i);
        else
          record_word_offset_5 = 2 * (__int16)a4;
        record_word_offset_6 = record_word_offset_5;
      }
      else
      {
        record_word_offset_6 = 18 * (__int16)a4;
      }
      saved_record_word_offset = record_word_offset_6;
    }
    else
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= record_word_offset )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= record_word_offset_2 )
          record_word_offset_3 = *(_DWORD *)(a3 + 4LL * i);
        else
          record_word_offset_3 = 18 * (__int16)a4;
        record_word_offset_4 = record_word_offset_3;
      }
      else
      {
        record_word_offset_4 = 2 * (__int16)a4;
      }
      saved_record_word_offset = record_word_offset_4;
    }
    *(_DWORD *)(a3 + 4LL * i) = saved_record_word_offset;
  }
  return result;
}

//----- (00000001401BC940) ----------------------------------------------------
__int64            sub_1401BC940(_WORD *a1, __int64 a2, int a3)
{
  __int64 unused_local;
  int shifted_bits;
  int j;
  int saved_shifted_bits;
  int element_index;
  int shifted_bits_2;
  int running_total;
  int call_result;
  int saved_shifted_bits_2;
  int comparison_result;
  _DWORD *table_value;
  int call_result_2;
  int i;
  int iteration_count;
  int shifted_bits_3;
  int integer_difference;
  int saved_shifted_bits_3;
  int unused_written_slot;
  int shifted_bits_4;
  int shifted_bits_5;
  int unused_written_slot_2;
  int unused_written_slot_3;
  _QWORD scratch_buffer[2];
  _DWORD scratch_buffer_2[14];
  _DWORD scratch_buffer_3[14];
  __int64 unused_local_2;

  scratch_buffer[0] = (uint64)(uintptr_t)(scratch_buffer_2);
  scratch_buffer[1] = (uint64)(uintptr_t)(scratch_buffer_3);
  shifted_bits_2 = a3 >> 1;
  sub_1401DC340(a2, (__int64)scratch_buffer_2, (__int64)scratch_buffer_3, a3 >> 1);
  table_value = scratch_buffer_2;
  saved_shifted_bits = 0x2000;
  shifted_bits = sub_1401DC160(scratch_buffer_2, 0x2000, shifted_bits_2);
  if ( shifted_bits >= 0 )
  {
    element_index = 0;
  }
  else
  {
    *a1 = 0;
    table_value = scratch_buffer_3;
    shifted_bits = sub_1401DC160(scratch_buffer_3, saved_shifted_bits, shifted_bits_2);
    element_index = 1;
  }
  j = 1;
  iteration_count = 0;
  comparison_result = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        saved_shifted_bits_2 = word_140282900[j];
        call_result = sub_1401DC160(table_value, saved_shifted_bits_2, shifted_bits_2);
        if ( (shifted_bits > 0 || call_result < comparison_result) && (shifted_bits < 0 || call_result > -comparison_result) )
          break;
        comparison_result = call_result == 0;
        running_total = -256;
        for ( i = 0; i < 3; ++i )
        {
          shifted_bits_3 = (((_BYTE)saved_shifted_bits_2 + (_BYTE)saved_shifted_bits) & 1) + ((saved_shifted_bits_2 + saved_shifted_bits) >> 1);
          call_result_2 = sub_1401DC160(table_value, shifted_bits_3, shifted_bits_2);
          if ( (shifted_bits > 0 || call_result_2 < 0) && (shifted_bits < 0 || call_result_2 > 0) )
          {
            saved_shifted_bits = shifted_bits_3;
            shifted_bits = call_result_2;
            unused_written_slot = 128;
            running_total += 128 >> i;
          }
          else
          {
            saved_shifted_bits_2 = shifted_bits_3;
            call_result = call_result_2;
          }
        }
        if ( shifted_bits <= 0 )
          saved_shifted_bits_3 = -shifted_bits;
        else
          saved_shifted_bits_3 = shifted_bits;
        if ( saved_shifted_bits_3 >= 0x10000 )
        {
          shifted_bits_5 = (shifted_bits - call_result) >> 5;
          running_total += shifted_bits / shifted_bits_5;
        }
        else
        {
          integer_difference = shifted_bits - call_result;
          shifted_bits_4 = ((shifted_bits - call_result) >> 1) + 32 * shifted_bits;
          if ( shifted_bits != call_result )
            running_total += shifted_bits_4 / integer_difference;
        }
        a1[element_index++] = sub_1401BE360(running_total + (j << 8), 0x7FFFu);
        if ( element_index >= a3 )
          return (unsigned int)a3; /* no result: rax still holds the loop bound from 0x1401BCC74 / 0x1401BCD56 */
        table_value = (_DWORD *)scratch_buffer[element_index & 1];
        saved_shifted_bits = word_140282900[j - 1];
        shifted_bits = (1 - (element_index & 2)) << 12;
      }
      ++j;
      saved_shifted_bits = saved_shifted_bits_2;
      shifted_bits = call_result;
      comparison_result = 0;
    }
    while ( j <= 128 );
    if ( ++iteration_count > 16 )
      break;
    unused_written_slot_3 = 1;
    sub_1401BBEB0(a2, a3, 0x10000 - (1 << iteration_count));
    sub_1401DC340(a2, (__int64)scratch_buffer_2, (__int64)scratch_buffer_3, shifted_bits_2);
    table_value = scratch_buffer_2;
    saved_shifted_bits = 0x2000;
    shifted_bits = sub_1401DC160(scratch_buffer_2, 0x2000, shifted_bits_2);
    if ( shifted_bits >= 0 )
    {
      element_index = 0;
    }
    else
    {
      *a1 = 0;
      table_value = scratch_buffer_3;
      shifted_bits = sub_1401DC160(scratch_buffer_3, saved_shifted_bits, shifted_bits_2);
      element_index = 1;
    }
    j = 1;
  }
  unused_written_slot_2 = a3 + 1;
  *a1 = 0x8000 / (a3 + 1);
  for ( j = 1; j < a3; ++j )
    a1[j] = *a1 + a1[j - 1];
  return (unsigned int)a3; /* no result: rax still holds the loop bound from 0x1401BCC74 / 0x1401BCD56 */
}

//----- (00000001401BCEC0) ----------------------------------------------------
__int64            CWinApp__ShowAppMessageBox(struct CWinApp *a1,      char *a2, int a3)
{
  __int64 unused_local;
  int i;
  int j;
  int shifted_bits;
  int shifted_bits_2;
  int table_value;
  int table_value_2;
  int integer_difference;
  int integer_difference_2;
  int shifted_bits_3;
  int unused_written_slot;
  unsigned __int8 *state_address;
  unsigned __int8 *saved_state_address;
  _DWORD scratch_buffer[14];
  _DWORD scratch_buffer_2[16];
  _DWORD scratch_buffer_3[24];
  int callee_output_word;
  int scratch_buffer_4[23];
  __int64 unused_local_2;

  if ( a3 == 16 )
    state_address = (unsigned __int8 *)&unk_14027E788;
  else
    state_address = (unsigned __int8 *)&unk_1402820F0;
  saved_state_address = state_address;
  for ( i = 0; i < a3; ++i )
  {
    shifted_bits = *(__int16 *)&a2[2 * i] >> 8;
    shifted_bits_3 = *(__int16 *)&a2[2 * i] - (shifted_bits << 8);
    table_value = word_140282900[shifted_bits];
    integer_difference_2 = word_140282900[shifted_bits + 1] - table_value;
    scratch_buffer_4[saved_state_address[i] - 1] = (((shifted_bits_3 * integer_difference_2 + (table_value << 8)) >> 3) + 1) >> 1;
  }
  shifted_bits_2 = a3 >> 1;
  sub_1401DCE10(scratch_buffer, &callee_output_word, a3 >> 1);
  sub_1401DCE10(scratch_buffer_2, scratch_buffer_4, a3 >> 1);
  for ( i = 0; i < shifted_bits_2; ++i )
  {
    table_value_2 = scratch_buffer[i] + scratch_buffer[i + 1];
    integer_difference = scratch_buffer_2[i + 1] - scratch_buffer_2[i];
    scratch_buffer_3[i] = -integer_difference - table_value_2;
    scratch_buffer_3[a3 - i - 1] = integer_difference - table_value_2;
  }
  sub_1401BD1D0((__int64)a1, (__int64)scratch_buffer_3, 12, 17, a3);
  for ( j = 0; !(unsigned int)sub_1401BBF70((__int64)a1, a3) && j < 16; ++j )
  {
    unused_written_slot = 2;
    sub_1401BBEB0((__int64)scratch_buffer_3, a3, 0x10000 - (2 << j));
    for ( i = 0; i < a3; ++i )
      *((_WORD *)a1 + i) = (((int)scratch_buffer_3[i] >> 4) + 1) >> 1;
  }
  return 0; /* no result: rax is residue of the call at 0x1401BD117 */
}

//----- (00000001401BD1D0) ----------------------------------------------------
__int64            sub_1401BD1D0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result;
  int state_address;
  int state_address_2;
  int state_address_3;
  int state_address_4;
  int j;
  int k;
  int m;
  int saved_loaded_word;
  int i;
  int loaded_word;
  int comparison_result;
  int saved_comparison_result;
  int cached_j;
  __int16 saved_state_address;
  __int16 cached_state_address;

  cached_j = 0;
  for ( i = 0; i < 10; ++i )
  {
    saved_loaded_word = 0;
    for ( j = 0; j < a5; ++j )
    {
      if ( *(int *)(a2 + 4LL * j) <= 0 )
        loaded_word = -*(_DWORD *)(a2 + 4LL * j);
      else
        loaded_word = *(_DWORD *)(a2 + 4LL * j);
      if ( loaded_word > saved_loaded_word )
      {
        saved_loaded_word = loaded_word;
        cached_j = j;
      }
    }
    comparison_result = a4 - a3 == 1 ? (saved_loaded_word & 1) + (saved_loaded_word >> 1) : ((saved_loaded_word >> (a4 - a3 - 1)) + 1) >> 1;
    if ( comparison_result <= 0x7FFF )
      break;
    if ( comparison_result >= 163838 )
      saved_comparison_result = 163838;
    else
      saved_comparison_result = comparison_result;
    sub_1401BBEB0(a2, a5, 65470 - ((saved_comparison_result - 0x7FFF) << 14) / (((cached_j + 1) * saved_comparison_result) >> 2));
  }
  if ( i == 10 )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)a5;
      if ( k >= a5 )
        break;
      if ( a4 - a3 == 1 )
        state_address = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
      else
        state_address = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
      if ( state_address <= 0x7FFF )
      {
        if ( a4 - a3 == 1 )
          state_address_2 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
        else
          state_address_2 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
        if ( state_address_2 >= -32768 )
        {
          if ( a4 - a3 == 1 )
            state_address_3 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
          else
            state_address_3 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
          saved_state_address = state_address_3;
        }
        else
        {
          saved_state_address = 0x8000;
        }
        cached_state_address = saved_state_address;
      }
      else
      {
        cached_state_address = 0x7FFF;
      }
      *(_WORD *)(a1 + 2LL * k) = cached_state_address;
      *(_DWORD *)(a2 + 4LL * k) = *(__int16 *)(a1 + 2LL * k) << (a4 - a3);
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a5;
      if ( m >= a5 )
        break;
      if ( a4 - a3 == 1 )
        state_address_4 = (*(_DWORD *)(a2 + 4LL * m) & 1) + (*(int *)(a2 + 4LL * m) >> 1);
      else
        state_address_4 = ((*(int *)(a2 + 4LL * m) >> (a4 - a3 - 1)) + 1) >> 1;
      *(_WORD *)(a1 + 2LL * m) = state_address_4;
    }
  }
  return result;
}

//----- (00000001401BD610) ----------------------------------------------------
__int64            sub_1401BD610(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int k;
  int n;
  int i;
  int j;
  int m;
  int loaded_word;
  int loaded_word_2;

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = i;
  for ( j = 1; j < a4; ++j )
  {
    loaded_word = *(_DWORD *)(a1 + 4LL * j);
    for ( k = j - 1; k >= 0 && loaded_word < *(_DWORD *)(a1 + 4LL * k); --k )
    {
      *(_DWORD *)(a1 + 4LL * (k + 1)) = *(_DWORD *)(a1 + 4LL * k);
      *(_DWORD *)(a2 + 4LL * (k + 1)) = *(_DWORD *)(a2 + 4LL * k);
    }
    *(_DWORD *)(a1 + 4LL * (k + 1)) = loaded_word;
    *(_DWORD *)(a2 + 4LL * (k + 1)) = j;
  }
  for ( m = a4; ; ++m )
  {
    result = (unsigned int)a3;
    if ( m >= a3 )
      break;
    loaded_word_2 = *(_DWORD *)(a1 + 4LL * m);
    if ( loaded_word_2 < *(_DWORD *)(a1 + 4LL * (a4 - 1)) )
    {
      for ( n = a4 - 2; n >= 0 && loaded_word_2 < *(_DWORD *)(a1 + 4LL * n); --n )
      {
        *(_DWORD *)(a1 + 4LL * (n + 1)) = *(_DWORD *)(a1 + 4LL * n);
        *(_DWORD *)(a2 + 4LL * (n + 1)) = *(_DWORD *)(a2 + 4LL * n);
      }
      *(_DWORD *)(a1 + 4LL * (n + 1)) = loaded_word_2;
      *(_DWORD *)(a2 + 4LL * (n + 1)) = m;
    }
  }
  return result;
}

//----- (00000001401BD810) ----------------------------------------------------
__int64            sub_1401BD810(__int64 a1, int a2)
{
  __int64 result;
  int j;
  int i;
  int loaded_word;

  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i >= a2 )
      break;
    loaded_word = *(__int16 *)(a1 + 2LL * i);
    for ( j = i - 1; j >= 0 && loaded_word < *(__int16 *)(a1 + 2LL * j); --j )
      *(_WORD *)(a1 + 2LL * (j + 1)) = *(_WORD *)(a1 + 2LL * j);
    *(_WORD *)(a1 + 2LL * (j + 1)) = loaded_word;
  }
  return result;
}

//----- (00000001401BD8C0) ----------------------------------------------------
void            sub_1401BD8C0(__int16 *a1, __int16 *a2, int a3)
{
  int cached_j;
  int j;
  int n;
  int ii;
  int k;
  int m;
  int remaining_amount;
  int shifted_bits;
  int running_total;
  int shifted_bits_2;
  int scaled_index;
  int i;
  int shifted_bits_3;
  __int16 saved_shifted_bits;
  int shifted_bits_4;
  __int16 saved_shifted_bits_2;
  __int16 cached_shifted_bits;
  __int16 integer_difference;
  __int16 cached_integer_difference;

  for ( i = 0; i < 20; ++i )
  {
    scaled_index = *a1 - *a2;
    cached_j = 0;
    for ( j = 1; j <= a3 - 1; ++j )
    {
      if ( a1[j] - (a2[j] + a1[j - 1]) < scaled_index )
      {
        scaled_index = a1[j] - (a2[j] + a1[j - 1]);
        cached_j = j;
      }
    }
    if ( 0x8000 - (a2[a3] + a1[a3 - 1]) < scaled_index )
    {
      scaled_index = 0x8000 - (a2[a3] + a1[a3 - 1]);
      cached_j = a3;
    }
    if ( scaled_index >= 0 )
      return;
    if ( cached_j )
    {
      if ( cached_j == a3 )
      {
        a1[a3 - 1] = 0x8000 - a2[a3];
      }
      else
      {
        running_total = 0;
        for ( k = 0; k < cached_j; ++k )
          running_total += a2[k];
        shifted_bits_2 = (a2[cached_j] >> 1) + running_total;
        remaining_amount = 0x8000;
        for ( m = a3; m > cached_j; --m )
          remaining_amount -= a2[m];
        shifted_bits = remaining_amount - (a2[cached_j] >> 1);
        if ( shifted_bits_2 <= shifted_bits )
        {
          if ( (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1) <= shifted_bits )
          {
            if ( (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1) >= shifted_bits_2 )
              shifted_bits_4 = (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1);
            else
              LOWORD(shifted_bits_4) = shifted_bits_2;
            saved_shifted_bits_2 = shifted_bits_4;
          }
          else
          {
            saved_shifted_bits_2 = shifted_bits;
          }
          cached_shifted_bits = saved_shifted_bits_2;
        }
        else
        {
          if ( (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1) <= shifted_bits_2 )
          {
            if ( (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1) >= shifted_bits )
              shifted_bits_3 = (((unsigned __int8)a1[cached_j] + (unsigned __int8)a1[cached_j - 1]) & 1) + ((a1[cached_j] + a1[cached_j - 1]) >> 1);
            else
              LOWORD(shifted_bits_3) = shifted_bits;
            saved_shifted_bits = shifted_bits_3;
          }
          else
          {
            saved_shifted_bits = shifted_bits_2;
          }
          cached_shifted_bits = saved_shifted_bits;
        }
        a1[cached_j - 1] = cached_shifted_bits - (a2[cached_j] >> 1);
        a1[cached_j] = a2[cached_j] + a1[cached_j - 1];
      }
    }
    else
    {
      *a1 = *a2;
    }
  }
  if ( i == 20 )
  {
    sub_1401BD810((__int64)a1, a3);
    *a1 = sub_1401BE3A0(*a1, *a2);
    for ( n = 1; n < a3; ++n )
    {
      if ( a2[n] + a1[n - 1] <= 0x7FFF )
      {
        if ( a2[n] + a1[n - 1] >= -32768 )
          integer_difference = a2[n] + a1[n - 1];
        else
          integer_difference = 0x8000;
        cached_integer_difference = integer_difference;
      }
      else
      {
        cached_integer_difference = 0x7FFF;
      }
      a1[n] = sub_1401BE3A0(a1[n], cached_integer_difference);
    }
    a1[a3 - 1] = sub_1401BE320(a1[a3 - 1], 0x8000 - a2[a3]);
    for ( ii = a3 - 2; ii >= 0; --ii )
      a1[ii] = sub_1401BE320(a1[ii], a1[ii + 1] - a2[ii + 1]);
  }
}

//----- (00000001401BDFF0) ----------------------------------------------------
__int64            sub_1401BDFF0(_WORD *a1, __int16 *a2, int a3)
{
  __int64 result;
  int call_result;
  int call_result_2;
  int call_result_3;
  int i;
  int call_result_4;

  call_result = 0x20000 / (int)sub_1401BE3A0(*a2, 1u);
  call_result_4 = 0x20000 / (int)sub_1401BE3A0(a2[1] - *a2, 1u);
  *a1 = sub_1401BE320(call_result_4 + call_result, 0x7FFFu);
  for ( i = 1; i < a3 - 1; i += 2 )
  {
    call_result_2 = 0x20000 / (int)sub_1401BE3A0(a2[i + 1] - a2[i], 1u);
    a1[i] = sub_1401BE320(call_result_4 + call_result_2, 0x7FFFu);
    call_result_4 = 0x20000 / (int)sub_1401BE3A0(a2[i + 2] - a2[i + 1], 1u);
    a1[i + 1] = sub_1401BE320(call_result_4 + call_result_2, 0x7FFFu);
  }
  call_result_3 = 0x20000 / (int)sub_1401BE3A0(0x8000 - a2[a3 - 1], 1u);
  result = sub_1401BE320(call_result_4 + call_result_3, 0x7FFFu);
  a1[a3 - 1] = result;
  return result;
}

//----- (00000001401BE210) ----------------------------------------------------
__int64            sub_1401BE210(__int64 a1, __int64 a2, char a3, int a4)
{
  int i;
  unsigned int running_total;

  running_total = 0;
  for ( i = 0; i < a4; ++i )
    running_total += (*(__int16 *)(a2 + 2LL * i) * *(__int16 *)(a1 + 2LL * i)) >> a3;
  return running_total;
}

//----- (00000001401BE290) ----------------------------------------------------
__int64            sub_1401BE290(unsigned int a1, int a2)
{
  if ( !a2 )
    return a1;
  if ( a2 >= 0 )
    return (unsigned int)__ROR4__(a1, a2);
  return (unsigned int)__ROL4__(a1, -(char)a2);
}

//----- (00000001401BE320) ----------------------------------------------------
__int64            sub_1401BE320(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 >= (int)a2 )
    return a2;
  else
    return a1;
}

//----- (00000001401BE360) ----------------------------------------------------
__int64            sub_1401BE360(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 >= (int)a2 )
    return a2;
  else
    return a1;
}

//----- (00000001401BE3A0) ----------------------------------------------------
__int64            sub_1401BE3A0(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}

//----- (00000001401BE3E0) ----------------------------------------------------
__int64            sub_1401BE3E0(unsigned __int16 a1, unsigned __int16 a2)
{
  if ( (__int16)a1 <= (__int16)a2 )
    return a2;
  else
    return a1;
}

//----- (00000001401BE420) ----------------------------------------------------
__int64            sub_1401BE420(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}

//----- (00000001401BE460) ----------------------------------------------------
__int64            sub_1401BE460(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result;
  int call_result;

  call_result = sub_1401BA490(a1);
  *a2 = call_result;
  result = sub_1401BE290(a1, 24 - call_result) & 0x7F;
  *a3 = result;
  return result;
}

//----- (00000001401BE4C0) ----------------------------------------------------
__int64            sub_1401BE4C0(signed int a1)
{
  int selection_code;
  int callee_output_word;
  _DWORD scratch_buffer[4];

  if ( a1 <= 0 )
    return 0;
  sub_1401BE460(a1, &callee_output_word, scratch_buffer);
  if ( (callee_output_word & 1) != 0 )
    selection_code = 0x8000;
  else
    selection_code = 46214;
  return (unsigned int)(((__int16)(213 * LOWORD(scratch_buffer[0])) * (__int64)(selection_code >> (callee_output_word >> 1))) >> 16) + (selection_code >> (callee_output_word >> 1));
}

//----- (00000001401BE550) ----------------------------------------------------
__int64            sub_1401BE550(signed int a1, signed int a2, int a3)
{
  int call_result;
  int call_result_2;
  int integer_difference;
  int shifted_bits;
  int shifted_bits_2;
  signed int shifted_bits_3;
  int shifted_bits_4;
  int integer_difference_2;
  int shifted_bits_5;
  int shifted_bits_6;
  int shifted_bits_7;
  int shifted_bits_8;
  int saved_shifted_bits;

  if ( a1 <= 0 )
    call_result = sub_1401BA490(-a1);
  else
    call_result = sub_1401BA490(a1);
  integer_difference_2 = call_result - 1;
  shifted_bits_3 = a1 << (call_result - 1);
  if ( a2 <= 0 )
    call_result_2 = sub_1401BA490(-a2);
  else
    call_result_2 = sub_1401BA490(a2);
  shifted_bits_4 = 0x1FFFFFFF / (a2 << (call_result_2 - 1) >> 16);
  shifted_bits = ((__int16)shifted_bits_4 * (__int64)shifted_bits_3) >> 16;
  shifted_bits_2 = (((__int16)shifted_bits_4 * (__int64)(int)(shifted_bits_3 - 8 * ((unsigned __int64)(shifted_bits * (__int64)(a2 << (call_result_2 - 1))) >> 32))) >> 16) + shifted_bits;
  integer_difference = integer_difference_2 + 29 - (call_result_2 - 1) - a3;
  if ( integer_difference >= 0 )
  {
    if ( integer_difference >= 32 )
      return 0;
    else
      return (unsigned int)(shifted_bits_2 >> integer_difference);
  }
  else
  {
    if ( (int)0x80000000 >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) <= 0x7FFFFFFF >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) )
    {
      if ( shifted_bits_2 <= 0x7FFFFFFF >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) )
      {
        if ( shifted_bits_2 >= (int)0x80000000 >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) )
          shifted_bits_7 = shifted_bits_2;
        else
          shifted_bits_7 = (int)0x80000000 >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1)));
        shifted_bits_8 = shifted_bits_7;
      }
      else
      {
        shifted_bits_8 = 0x7FFFFFFF >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1)));
      }
      saved_shifted_bits = shifted_bits_8;
    }
    else
    {
      if ( shifted_bits_2 <= (int)0x80000000 >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) )
      {
        if ( shifted_bits_2 >= 0x7FFFFFFF >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))) )
          shifted_bits_5 = shifted_bits_2;
        else
          shifted_bits_5 = 0x7FFFFFFF >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1)));
        shifted_bits_6 = shifted_bits_5;
      }
      else
      {
        shifted_bits_6 = (int)0x80000000 >> (a3 - (integer_difference_2 + 29 - (call_result_2 - 1)));
      }
      saved_shifted_bits = shifted_bits_6;
    }
    return (unsigned int)(saved_shifted_bits << (a3 - (integer_difference_2 + 29 - (call_result_2 - 1))));
  }
}

//----- (00000001401BE820) ----------------------------------------------------
__int64            sub_1401BE820(signed int a1, int a2)
{
  int call_result;
  int integer_difference;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  int shifted_bits_5;
  int saved_shifted_bits;

  if ( a1 <= 0 )
    call_result = sub_1401BA490(-a1);
  else
    call_result = sub_1401BA490(a1);
  shifted_bits = ((0x1FFFFFFF
       / (a1 << (call_result - 1) >> 16)
       * (__int64)(int)(8 * (0x20000000 - ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16) * (__int64)(a1 << (call_result - 1))) >> 16)))) >> 16)
     + ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16)) << 16);
  integer_difference = 61 - (call_result - 1) - a2;
  if ( integer_difference > 0 )
  {
    if ( integer_difference >= 32 )
      return 0;
    else
      return (unsigned int)(shifted_bits >> integer_difference);
  }
  else
  {
    if ( (int)0x80000000 >> (a2 - (61 - (call_result - 1))) <= 0x7FFFFFFF >> (a2 - (61 - (call_result - 1))) )
    {
      if ( shifted_bits <= 0x7FFFFFFF >> (a2 - (61 - (call_result - 1))) )
      {
        if ( shifted_bits >= (int)0x80000000 >> (a2 - (61 - (call_result - 1))) )
          shifted_bits_4 = ((0x1FFFFFFF
               / (a1 << (call_result - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16) * (__int64)(a1 << (call_result - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16)) << 16);
        else
          shifted_bits_4 = (int)0x80000000 >> (a2 - (61 - (call_result - 1)));
        shifted_bits_5 = shifted_bits_4;
      }
      else
      {
        shifted_bits_5 = 0x7FFFFFFF >> (a2 - (61 - (call_result - 1)));
      }
      saved_shifted_bits = shifted_bits_5;
    }
    else
    {
      if ( shifted_bits <= (int)0x80000000 >> (a2 - (61 - (call_result - 1))) )
      {
        if ( shifted_bits >= 0x7FFFFFFF >> (a2 - (61 - (call_result - 1))) )
          shifted_bits_2 = ((0x1FFFFFFF
               / (a1 << (call_result - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16) * (__int64)(a1 << (call_result - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (call_result - 1) >> 16)) << 16);
        else
          shifted_bits_2 = 0x7FFFFFFF >> (a2 - (61 - (call_result - 1)));
        shifted_bits_3 = shifted_bits_2;
      }
      else
      {
        shifted_bits_3 = (int)0x80000000 >> (a2 - (61 - (call_result - 1)));
      }
      saved_shifted_bits = shifted_bits_3;
    }
    return (unsigned int)(saved_shifted_bits << (a2 - (61 - (call_result - 1))));
  }
}

//----- (00000001401BEA90) ----------------------------------------------------
_DWORD *           sub_1401BEA90(_DWORD *a1)
{
  a1[1049] = a1[582] << 7;
  a1[1067] = 0x10000;
  a1[1068] = 0x10000;
  a1[1071] = 20;
  a1[1070] = 2;
  return a1;
}

//----- (00000001401BEB10) ----------------------------------------------------
__int64            sub_1401BEB10(_DWORD *a1,      __m128i *a2, __int64 a3, int a4)
{
  __int64 result;

  if ( a1[579] != a1[1069] )
  {
    sub_1401BEA90(a1);
    a1[1069] = a1[579];
  }
  if ( !a4 )
    return sub_1401D9A80((__int64)a1, a2);
  sub_1401D9E20((__int64)a1, (__int64)a2, a3);
  result = (unsigned int)(a1[1046] + 1);
  a1[1046] = result;
  return result;
}

//----- (00000001401BEBC0) ----------------------------------------------------
_DWORD *           sub_1401BEBC0(_DWORD *a1, __int64 a2, signed int a3)
{
  _DWORD *result;
  char integer_difference;
  int call_result;
  int remaining_bits;
  _DWORD *record_pointer;
  signed int i;
  int running_total;
  int callee_output_word;
  int integer_difference_2;
  int integer_quotient;
  int saved_remaining_bits;
  signed int integer_quotient_2;
  _DWORD *unused_written_slot;
  _DWORD *unused_written_slot_2;

  record_pointer = a1 + 1049;
  if ( a1[1046] )
  {
    sub_1401BC4C0(record_pointer + 15, record_pointer + 16, a2, a3);
    result = record_pointer;
    record_pointer[12] = 1;
  }
  else
  {
    if ( a1[1061] )
    {
      sub_1401BC4C0(&remaining_bits, &callee_output_word, a2, a3);
      if ( callee_output_word <= record_pointer[16] )
      {
        if ( callee_output_word < record_pointer[16] )
          remaining_bits >>= record_pointer[16] - callee_output_word;
      }
      else
      {
        integer_difference = callee_output_word - record_pointer[16];
        unused_written_slot = record_pointer;
        record_pointer[15] = (int)record_pointer[15] >> integer_difference;
      }
      if ( remaining_bits > record_pointer[15] )
      {
        call_result = sub_1401BA490(record_pointer[15]);
        integer_difference_2 = call_result - 1;
        unused_written_slot_2 = record_pointer;
        record_pointer[15] <<= call_result - 1;
        remaining_bits >>= sub_1401BE420(24 - integer_difference_2, 0);
        if ( remaining_bits <= 1 )
          saved_remaining_bits = 1;
        else
          saved_remaining_bits = remaining_bits;
        integer_quotient_2 = record_pointer[15] / saved_remaining_bits;
        running_total = 16 * sub_1401BE4C0(integer_quotient_2);
        integer_quotient = 4 * ((0x10000 - running_total) / a3);
        for ( i = 0; i < a3; ++i )
        {
          *(_WORD *)(a2 + 2LL * i) = (unsigned int)(*(__int16 *)(a2 + 2LL * i) * running_total) >> 16;
          running_total += integer_quotient;
          if ( running_total > 0x10000 )
            break;
        }
      }
    }
    result = record_pointer;
    record_pointer[12] = 0;
  }
  return result;
}

//----- (00000001401BEE10) ----------------------------------------------------
__int64            sub_1401BEE10(
        __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  unsigned __int64 scaled_index;
  void *alloca_result;
  unsigned __int64 record_word_offset;
  void *alloca_result_2;
  unsigned __int64 record_word_offset_2;
  void *alloca_result_3;
  unsigned __int64 record_word_offset_3;
  void *alloca_result_4;
  unsigned __int64 record_word_offset_4;
  void *alloca_result_5;
  int i;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  void *destination_buffer;
  int loaded_word;
  int record_word_offset_5;
  int scaled_index_2;
  unsigned int shifted_bits_5;
  int shifted_bits_6;
  int running_total;
  int running_total_2;
  void *destination_buffer_2;
  int integer_quotient;
  int selection_code;
  int cached_scaled_index;
  BOOL saved_comparison_result;
  int selection_code_2;
  int scaled_index_3;
  int saved_shifted_bits;
  int cached_shifted_bits;
  int shifted_bits_7;
  int saved_shifted_bits_2;
  int shifted_bits_8;
  int saved_shifted_bits_3;
  int shifted_bits_9;
  int saved_shifted_bits_4;
  BOOL comparison_result;
  int shifted_bits_10;
  int shifted_bits_11;
  unsigned int shifted_bits_12;
  int callee_output_word;
  int scratch_buffer[3];
  int *saved_alloca_result;
  int *p_i;
  int *saved_alloca_result_2;
  int *saved_alloca_result_3;
  __int64 unused_local;
  signed int integer_difference;

  destination_buffer = (void *)(a2 - 4);
  scaled_index = 2LL * (a11 + 2) + 15;
  if ( scaled_index <= 2LL * (a11 + 2) )
    scaled_index = 0xFFFFFFFFFFFFFF0LL;
  alloca_result = alloca(scaled_index & 0xFFFFFFFFFFFFFFF0uLL);
  destination_buffer_2 = alloca_result;
  for ( i = 0; i < a11 + 2; ++i )
  {
    shifted_bits = *(__int16 *)(a3 + 2LL * (i - 2)) + *(__int16 *)(a2 + 2LL * (i - 2));
    loaded_word = *(__int16 *)(a2 + 2LL * (i - 2)) - *(__int16 *)(a3 + 2LL * (i - 2));
    *((_WORD *)destination_buffer + i) = (shifted_bits & 1) + (shifted_bits >> 1);
    if ( (loaded_word & 1) + (loaded_word >> 1) <= 0x7FFF )
    {
      if ( (loaded_word & 1) + (loaded_word >> 1) >= -32768 )
        shifted_bits_9 = (loaded_word & 1) + (loaded_word >> 1);
      else
        shifted_bits_9 = -32768;
      saved_shifted_bits_4 = shifted_bits_9;
    }
    else
    {
      saved_shifted_bits_4 = 0x7FFF;
    }
    *((_WORD *)destination_buffer_2 + i) = saved_shifted_bits_4;
  }
  crt_memcpy((__m128i *)destination_buffer, (     __m128i *)(a1 + 2), 4u);
  crt_memcpy((__m128i *)destination_buffer_2, (     __m128i *)(a1 + 4), 4u);
  crt_memcpy((__m128i *)(a1 + 2), (     __m128i *)((char *)destination_buffer + 2 * a11), 4u);
  crt_memcpy((__m128i *)(a1 + 4), (     __m128i *)((char *)destination_buffer_2 + 2 * a11), 4u);
  record_word_offset = 2LL * a11 + 15;
  if ( record_word_offset <= 2LL * a11 )
    record_word_offset = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_2 = alloca(record_word_offset & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = alloca_result_2;
  record_word_offset_2 = 2LL * a11 + 15;
  if ( record_word_offset_2 <= 2LL * a11 )
    record_word_offset_2 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_3 = alloca(record_word_offset_2 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_3 = alloca_result_3;
  for ( i = 0; i < a11; ++i )
  {
    shifted_bits = (((*((__int16 *)destination_buffer + i + 2) + *((__int16 *)destination_buffer + i) + 2 * *((__int16 *)destination_buffer + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)p_i + i) = shifted_bits;
    *((_WORD *)saved_alloca_result_3 + i) = *((_WORD *)destination_buffer + i + 1) - shifted_bits;
  }
  record_word_offset_3 = 2LL * a11 + 15;
  if ( record_word_offset_3 <= 2LL * a11 )
    record_word_offset_3 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_4 = alloca(record_word_offset_3 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result = alloca_result_4;
  record_word_offset_4 = 2LL * a11 + 15;
  if ( record_word_offset_4 <= 2LL * a11 )
    record_word_offset_4 = 0xFFFFFFFFFFFFFF0LL;
  alloca_result_5 = alloca(record_word_offset_4 & 0xFFFFFFFFFFFFFFF0uLL);
  saved_alloca_result_2 = alloca_result_5;
  for ( i = 0; i < a11; ++i )
  {
    shifted_bits = (((*((__int16 *)destination_buffer_2 + i + 2) + *((__int16 *)destination_buffer_2 + i) + 2 * *((__int16 *)destination_buffer_2 + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)saved_alloca_result + i) = shifted_bits;
    *((_WORD *)saved_alloca_result_2 + i) = *((_WORD *)destination_buffer_2 + i + 1) - shifted_bits;
  }
  comparison_result = a11 == 10 * a10;
  saved_comparison_result = comparison_result;
  if ( a11 == 10 * a10 )
    selection_code = 328;
  else
    selection_code = 655;
  shifted_bits_5 = ((__int16)selection_code * (__int64)(a8 * a8)) >> 16;
  shifted_bits_2 = sub_1401C0320(&callee_output_word, (__int64)p_i, (__int64)saved_alloca_result, (signed int *)a1 + 3, a11, shifted_bits_5);
  shifted_bits_3 = sub_1401C0320(scratch_buffer, (__int64)saved_alloca_result_3, (__int64)saved_alloca_result_2, (signed int *)a1 + 5, a11, shifted_bits_5);
  scaled_index_2 = 3 * (__int16)callee_output_word + scratch_buffer[0];
  if ( scaled_index_2 >= 0x10000 )
    cached_scaled_index = 0x10000;
  else
    cached_scaled_index = scaled_index_2;
  scaled_index_2 = cached_scaled_index;
  if ( saved_comparison_result )
    selection_code_2 = 1200;
  else
    selection_code_2 = 600;
  integer_difference = a7 - selection_code_2;
  if ( integer_difference < 1 )
    integer_difference = 1;
  record_word_offset_5 = 600 * (__int16)a10 + 2000;
  scaled_index_3 = 3 * scaled_index_2;
  *a6 = sub_1401BE550(integer_difference, 3 * scaled_index_2 + 851968, 19);
  if ( *a6 >= record_word_offset_5 )
  {
    a6[1] = integer_difference - *a6;
    shifted_bits_4 = 0x4000;
  }
  else
  {
    *a6 = record_word_offset_5;
    a6[1] = integer_difference - *a6;
    shifted_bits_4 = sub_1401BE550(2 * a6[1] - record_word_offset_5, ((__int16)record_word_offset_5 * (__int64)(scaled_index_3 + 0x10000)) >> 16, 16);
    if ( shifted_bits_4 <= 0x4000 )
    {
      if ( shifted_bits_4 >= 0 )
        saved_shifted_bits = shifted_bits_4;
      else
        saved_shifted_bits = 0;
      cached_shifted_bits = saved_shifted_bits;
    }
    else
    {
      cached_shifted_bits = 0x4000;
    }
    shifted_bits_4 = cached_shifted_bits;
  }
  a1[14] += (unsigned int)((__int16)shifted_bits_5 * (shifted_bits_4 - a1[14])) >> 16;
  *a5 = 0;
  if ( a9 )
  {
    shifted_bits_4 = 0;
    shifted_bits_2 = 0;
    shifted_bits_3 = 0;
    sub_1401C06A0(&shifted_bits_2, a4);
  }
  else if ( a1[15] || 8 * integer_difference >= 13 * record_word_offset_5 && (int)((a1[14] * (__int64)scaled_index_2) >> 16) >= 819 )
  {
    if ( a1[15] && (8 * integer_difference < 11 * record_word_offset_5 || (int)((a1[14] * (__int64)scaled_index_2) >> 16) < 328) )
    {
      shifted_bits_2 = ((__int16)shifted_bits_2 * a1[14]) >> 14;
      shifted_bits_3 = ((__int16)shifted_bits_3 * a1[14]) >> 14;
      sub_1401C06A0(&shifted_bits_2, a4);
      shifted_bits_4 = 0;
      shifted_bits_2 = 0;
      shifted_bits_3 = 0;
    }
    else if ( a1[14] <= 15565 )
    {
      shifted_bits_2 = ((__int16)shifted_bits_2 * a1[14]) >> 14;
      shifted_bits_3 = ((__int16)shifted_bits_3 * a1[14]) >> 14;
      sub_1401C06A0(&shifted_bits_2, a4);
      shifted_bits_4 = a1[14];
    }
    else
    {
      sub_1401C06A0(&shifted_bits_2, a4);
      shifted_bits_4 = 0x4000;
    }
  }
  else
  {
    shifted_bits_2 = ((__int16)shifted_bits_2 * a1[14]) >> 14;
    shifted_bits_3 = ((__int16)shifted_bits_3 * a1[14]) >> 14;
    sub_1401C06A0(&shifted_bits_2, a4);
    shifted_bits_4 = 0;
    shifted_bits_2 = 0;
    shifted_bits_3 = 0;
    *a6 = integer_difference;
    a6[1] = 0;
    *a5 = 1;
  }
  if ( *a5 == 1 )
  {
    a1[16] += a11 - 8 * a10;
    if ( a1[16] >= 5 * a10 )
      a1[16] = 10000;
    else
      *a5 = 0;
  }
  else
  {
    a1[16] = 0;
  }
  if ( !*a5 && a6[1] < 1 )
  {
    a6[1] = 1;
    *a6 = sub_1401BE3A0(1u, integer_difference - a6[1]);
  }
  running_total = -*a1;
  running_total_2 = -a1[1];
  shifted_bits_6 = a1[15] << 10;
  scratch_buffer[1] = 8 * a10;
  integer_quotient = 0x10000 / (8 * a10);
  shifted_bits_10 = -(((((__int16)integer_quotient * (__int16)(shifted_bits_2 - *a1)) >> 15) + 1) >> 1);
  shifted_bits_11 = -(((((__int16)integer_quotient * (__int16)(shifted_bits_3 - a1[1])) >> 15) + 1) >> 1);
  shifted_bits_12 = (unsigned int)(((__int16)integer_quotient * (__int64)(shifted_bits_4 - a1[15])) >> 16) << 10;
  for ( i = 0; i < 8 * a10; ++i )
  {
    running_total += shifted_bits_10;
    running_total_2 += shifted_bits_11;
    shifted_bits_6 += shifted_bits_12;
    shifted_bits = (*((__int16 *)destination_buffer + i + 2) + *((__int16 *)destination_buffer + i) + 2 * *((__int16 *)destination_buffer + i + 1)) << 9;
    shifted_bits = (((__int16)running_total * (__int64)shifted_bits) >> 16) + ((*((__int16 *)destination_buffer_2 + i + 1) * (__int64)shifted_bits_6) >> 16);
    shifted_bits += ((__int16)running_total_2 * (__int64)(*((__int16 *)destination_buffer + i + 1) << 11)) >> 16;
    if ( ((shifted_bits >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((shifted_bits >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_7 = ((shifted_bits >> 7) + 1) >> 1;
      else
        shifted_bits_7 = -32768;
      saved_shifted_bits_2 = shifted_bits_7;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = saved_shifted_bits_2;
  }
  running_total = -shifted_bits_2;
  running_total_2 = -shifted_bits_3;
  shifted_bits_6 = shifted_bits_4 << 10;
  for ( i = 8 * a10; i < a11; ++i )
  {
    shifted_bits = (*((__int16 *)destination_buffer + i + 2) + *((__int16 *)destination_buffer + i) + 2 * *((__int16 *)destination_buffer + i + 1)) << 9;
    shifted_bits = (((__int16)running_total * (__int64)shifted_bits) >> 16) + ((*((__int16 *)destination_buffer_2 + i + 1) * (__int64)shifted_bits_6) >> 16);
    shifted_bits += ((__int16)running_total_2 * (__int64)(*((__int16 *)destination_buffer + i + 1) << 11)) >> 16;
    if ( ((shifted_bits >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((shifted_bits >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_8 = ((shifted_bits >> 7) + 1) >> 1;
      else
        shifted_bits_8 = -32768;
      saved_shifted_bits_3 = shifted_bits_8;
    }
    else
    {
      saved_shifted_bits_3 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = saved_shifted_bits_3;
  }
  *a1 = shifted_bits_2;
  a1[1] = shifted_bits_3;
  a1[15] = shifted_bits_4;
  return 0; /* no caller reads the result */
}

//----- (00000001401BFD30) ----------------------------------------------------
__int64            sub_1401BFD30(__int16 *a1, __m128i *a2, __m128i *a3, _DWORD *a4, int a5, int a6)
{
  __int64 result;
  int i;
  int j;
  int k;
  int shifted_bits;
  int shifted_bits_2;
  int table_value;
  int running_total;
  int loaded_word;
  int running_total_2;
  int table_value_2;
  int integer_difference;
  int integer_quotient;
  int shifted_bits_3;
  __int16 saved_shifted_bits;
  int shifted_bits_4;
  __int16 saved_shifted_bits_2;
  __int16 table_value_3;
  __int16 cached_table_value;
  __int16 cached_integer_difference;
  __int16 cached_integer_difference_2;
  int shifted_bits_5;
  int shifted_bits_6;

  crt_memcpy(a2, (     __m128i *)(a1 + 2), 4u);
  crt_memcpy(a3, (     __m128i *)(a1 + 4), 4u);
  crt_memcpy((__m128i *)(a1 + 2), (__m128i *)((char *)a2 + 2 * a6), 4u);
  crt_memcpy((__m128i *)(a1 + 4), (__m128i *)((char *)a3 + 2 * a6), 4u);
  running_total = *a1;
  running_total_2 = a1[1];
  integer_quotient = 0x10000 / (8 * a5);
  shifted_bits_5 = ((((__int16)integer_quotient * (__int16)(*a4 - *a1)) >> 15) + 1) >> 1;
  shifted_bits_6 = ((((__int16)integer_quotient * (__int16)(a4[1] - a1[1])) >> 15) + 1) >> 1;
  for ( i = 0; i < 8 * a5; ++i )
  {
    running_total += shifted_bits_5;
    running_total_2 += shifted_bits_6;
    shifted_bits = (((__int16)running_total_2 * (__int64)(SR_VEC_PTR_LANES(128, a2, i16)[i + 1] << 11)) >> 16)
        + (((__int16)running_total * (__int64)((SR_VEC_PTR_LANES(128, a2, i16)[i + 2] + SR_VEC_PTR_LANES(128, a2, i16)[i] + 2 * SR_VEC_PTR_LANES(128, a2, i16)[i + 1]) << 9)) >> 16)
        + (SR_VEC_PTR_LANES(128, a3, i16)[i + 1] << 8);
    if ( ((shifted_bits >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((shifted_bits >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_3 = ((shifted_bits >> 7) + 1) >> 1;
      else
        LOWORD(shifted_bits_3) = 0x8000;
      saved_shifted_bits = shifted_bits_3;
    }
    else
    {
      saved_shifted_bits = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[i + 1] = saved_shifted_bits;
  }
  loaded_word = *a4;
  table_value_2 = a4[1];
  for ( j = 8 * a5; j < a6; ++j )
  {
    shifted_bits_2 = (((__int16)table_value_2 * (__int64)(SR_VEC_PTR_LANES(128, a2, i16)[j + 1] << 11)) >> 16)
        + (((__int16)loaded_word * (__int64)((SR_VEC_PTR_LANES(128, a2, i16)[j + 2] + SR_VEC_PTR_LANES(128, a2, i16)[j] + 2 * SR_VEC_PTR_LANES(128, a2, i16)[j + 1]) << 9)) >> 16)
        + (SR_VEC_PTR_LANES(128, a3, i16)[j + 1] << 8);
    if ( ((shifted_bits_2 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((shifted_bits_2 >> 7) + 1) >> 1 >= -32768 )
        shifted_bits_4 = ((shifted_bits_2 >> 7) + 1) >> 1;
      else
        LOWORD(shifted_bits_4) = 0x8000;
      saved_shifted_bits_2 = shifted_bits_4;
    }
    else
    {
      saved_shifted_bits_2 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[j + 1] = saved_shifted_bits_2;
  }
  *a1 = *(_WORD *)a4;
  a1[1] = *((_WORD *)a4 + 2);
  for ( k = 0; ; ++k )
  {
    result = (unsigned int)a6;
    if ( k >= a6 )
      break;
    table_value = SR_VEC_PTR_LANES(128, a3, i16)[k + 1] + SR_VEC_PTR_LANES(128, a2, i16)[k + 1];
    integer_difference = SR_VEC_PTR_LANES(128, a2, i16)[k + 1] - SR_VEC_PTR_LANES(128, a3, i16)[k + 1];
    if ( table_value <= 0x7FFF )
    {
      if ( table_value >= -32768 )
        table_value_3 = SR_VEC_PTR_LANES(128, a3, i16)[k + 1] + SR_VEC_PTR_LANES(128, a2, i16)[k + 1];
      else
        table_value_3 = 0x8000;
      cached_table_value = table_value_3;
    }
    else
    {
      cached_table_value = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a2, i16)[k + 1] = cached_table_value;
    if ( integer_difference <= 0x7FFF )
    {
      if ( integer_difference >= -32768 )
        cached_integer_difference = integer_difference;
      else
        cached_integer_difference = 0x8000;
      cached_integer_difference_2 = cached_integer_difference;
    }
    else
    {
      cached_integer_difference_2 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[k + 1] = cached_integer_difference_2;
  }
  return result;
}
