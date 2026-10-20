#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"
#include "../engine/area_bounds.h"
#include "../engine/physics_kernels.h"

//----- (0000000140064FF0) ----------------------------------------------------
double            sub_140064FF0(int a1, int a2)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 input_value_2;
  unsigned int cached_mesh_triangle_count;
  unsigned int cached_mesh_vertex_count;
  __int64 scaled_index;
  __int64 table_value;
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
  __int64 remaining_count_3;
  unsigned int *state_address_2;
  unsigned int scaled_index_9;
  int scaled_index_10;
  unsigned int table_value_2;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  bool comparison_result;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  __int64 remaining_count_4;
  unsigned int *state_address_3;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;
  __int64 scaled_index_22;

  input_value = a2;
  record_word_offset = 45072LL * a2;
  input_value_2 = a1;
  cached_mesh_triangle_count = 0;
  mesh_vertex_count = 0;
  cached_mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  scaled_index = 0;
  table_value = (int)dword_140404A6C[record_word_offset + 335170684];
  if ( table_value >= 4 )
  {
    record_byte_offset = &dword_140404A6C[record_word_offset + 335170687];
    remaining_count = ((unsigned __int64)(table_value - 4) >> 2) + 1;
    scaled_index = 4 * remaining_count;
    do
    {
      scaled_index_2 = (int)(3 * cached_mesh_vertex_count);
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
      cached_mesh_vertex_count = ++mesh_vertex_count;
      --remaining_count;
    }
    while ( remaining_count );
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  if ( scaled_index < table_value )
  {
    remaining_count_2 = table_value - scaled_index;
    state_address = &dword_140404A6C[45072 * input_value + 335170687 + 3 * scaled_index];
    do
    {
      scaled_index_7 = (int)(3 * cached_mesh_vertex_count);
      scaled_index_8 = *(state_address - 2);
      state_address += 3;
      dword_140404A6C[scaled_index_7 + 177167567] = scaled_index_8;
      dword_140404A6C[scaled_index_7 + 177167568] = *(state_address - 4);
      dword_140404A6C[scaled_index_7 + 177167569] = *(state_address - 3);
      cached_mesh_vertex_count = ++mesh_vertex_count;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    cached_mesh_triangle_count = mesh_triangle_count;
  }
  remaining_count_3 = (int)dword_140404A6C[record_word_offset + 335173757];
  if ( remaining_count_3 > 0 )
  {
    state_address_2 = &dword_140404A6C[record_word_offset + 335173761];
    do
    {
      scaled_index_9 = *(state_address_2 - 1);
      scaled_index_10 = *(state_address_2 - 3);
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = scaled_index_9;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = *state_address_2;
      table_value_2 = state_address_2[1];
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_2;
      dword_140404A6C[mesh_triangle_count + 178207953] = -1;
      scaled_index_11 = 6 * mesh_triangle_count;
      *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011349] = 1099169792;
      if ( scaled_index_10 == 1 )
      {
        scaled_index_12 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_12 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011348] = 1065353216;
        dword_140404A6C[scaled_index_12 + 178011350] = 1065353216;
      }
      else if ( scaled_index_10 == 2 )
      {
        scaled_index_13 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_13 + 178011345] = 1035993088;
        dword_140404A6C[scaled_index_13 + 178011346] = 1035993088;
        dword_140404A6C[scaled_index_13 + 178011347] = 1035993088;
        dword_140404A6C[scaled_index_13 + 178011348] = 1035993088;
        dword_140404A6C[scaled_index_13 + 178011349] = 1035993088;
        dword_140404A6C[scaled_index_13 + 178011350] = 1035993088;
      }
      cached_mesh_triangle_count = mesh_triangle_count + 1;
      comparison_result = *(state_address_2 - 2) == 4;
      ++mesh_triangle_count;
      if ( comparison_result )
      {
        dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = scaled_index_9;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[2];
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        scaled_index_14 = 6 * mesh_triangle_count;
        *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011345] = 1099169792;
        *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011347] = 1099169792;
        *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011349] = 1099169792;
        if ( scaled_index_10 == 1 )
        {
          scaled_index_15 = 6 * mesh_triangle_count;
          dword_140404A6C[scaled_index_15 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011348] = 1065353216;
          dword_140404A6C[scaled_index_15 + 178011350] = 1065353216;
        }
        else if ( scaled_index_10 == 2 )
        {
          scaled_index_16 = 6 * mesh_triangle_count;
          dword_140404A6C[scaled_index_16 + 178011345] = 1035993088;
          dword_140404A6C[scaled_index_16 + 178011346] = 1035993088;
          dword_140404A6C[scaled_index_16 + 178011347] = 1035993088;
          dword_140404A6C[scaled_index_16 + 178011348] = 1035993088;
          dword_140404A6C[scaled_index_16 + 178011349] = 1035993088;
          dword_140404A6C[scaled_index_16 + 178011350] = 1035993088;
        }
        cached_mesh_triangle_count = ++mesh_triangle_count;
      }
      state_address_2 += 26;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    cached_mesh_vertex_count = mesh_vertex_count;
  }
  if ( (int)input_value_2 >= (int)g_183EBB1C4 && (int)input_value_2 <= (int)g_183EBB240 )
  {
    remaining_count_4 = (int)dword_140404A6C[record_word_offset + 335200382];
    if ( remaining_count_4 > 0 )
    {
      state_address_3 = &dword_140404A6C[record_word_offset + 335200386];
      while ( 1 )
      {
        scaled_index_17 = (int)(3 * cached_mesh_vertex_count);
        dword_140404A6C[scaled_index_17 + 177167567] = *(state_address_3 - 2);
        dword_140404A6C[scaled_index_17 + 177167568] = *(state_address_3 - 1);
        dword_140404A6C[scaled_index_17 + 177167569] = *state_address_3;
        ++mesh_vertex_count;
        scaled_index_18 = 3 * mesh_vertex_count;
        dword_140404A6C[scaled_index_18 + 177167567] = state_address_3[1];
        dword_140404A6C[scaled_index_18 + 177167568] = state_address_3[2];
        dword_140404A6C[scaled_index_18 + 177167569] = state_address_3[3];
        ++mesh_vertex_count;
        scaled_index_19 = 3 * mesh_vertex_count;
        dword_140404A6C[scaled_index_19 + 177167567] = state_address_3[4];
        dword_140404A6C[scaled_index_19 + 177167568] = state_address_3[5];
        dword_140404A6C[scaled_index_19 + 177167569] = state_address_3[6];
        ++mesh_vertex_count;
        scaled_index_20 = 3 * mesh_vertex_count;
        dword_140404A6C[scaled_index_20 + 177167567] = state_address_3[7];
        dword_140404A6C[scaled_index_20 + 177167568] = state_address_3[8];
        dword_140404A6C[scaled_index_20 + 177167569] = state_address_3[9];
        ++mesh_vertex_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count + 1;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count + 2;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        scaled_index_21 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_21 + 178011345] = 1061158912;
        dword_140404A6C[scaled_index_21 + 178011346] = 1065353216;
        dword_140404A6C[scaled_index_21 + 178011347] = 1061158912;
        dword_140404A6C[scaled_index_21 + 178011348] = 1065353216;
        dword_140404A6C[scaled_index_21 + 178011349] = 1061158912;
        dword_140404A6C[scaled_index_21 + 178011350] = 1065353216;
        ++mesh_triangle_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_mesh_vertex_count;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = cached_mesh_vertex_count + 2;
        state_address_3 += 13;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count + 3;
        dword_140404A6C[mesh_triangle_count + 178207953] = -1;
        scaled_index_22 = 6 * mesh_triangle_count;
        dword_140404A6C[scaled_index_22 + 178011345] = 1061158912;
        dword_140404A6C[scaled_index_22 + 178011346] = 1065353216;
        dword_140404A6C[scaled_index_22 + 178011347] = 1061158912;
        dword_140404A6C[scaled_index_22 + 178011348] = 1065353216;
        dword_140404A6C[scaled_index_22 + 178011349] = 1061158912;
        dword_140404A6C[scaled_index_22 + 178011350] = 1065353216;
        ++mesh_triangle_count;
        if ( !--remaining_count_4 )
          break;
        cached_mesh_vertex_count = mesh_vertex_count;
      }
    }
  }
  g_16AD03DB4 = 0;
  dword_140404A6C[908 * input_value_2 + 178527536] = 0;
  return sub_1401449C0(input_value_2, 1);
}

//----- (0000000140066EE0) ----------------------------------------------------
double            sub_140066EE0(int a1, float a2, double a3, float a4)
{
  __int64 float_word;
  __int64 remaining_count;
  unsigned int cached_mesh_vertex_count;
  int iteration_count;
  float scaled_value;
  __int64 remaining_count_2;
  float product_difference;
  unsigned int integer_difference;
  unsigned int comparison_operand;
  __int64 scaled_index;
  __m128 converted_vector;
  __int64 remaining_count_3;
  unsigned int integer_sum;
  float component_delta;
  __m128d converted_vector_2;
  float scaled_value_2;
  __int64 unrecovered_register_value;
  __m128 vector_result;
  double reordered_vector;
  double input_value;
  double scaled_value_3;
  double product_difference_2;
  __int64 scaled_index_2;
  unsigned int float_word_2;
  __m128 loaded_word;
  __m128 converted_vector_3;
  __int64 remaining_count_4;
  unsigned int comparison_operand_2;
  __m128d converted_vector_4;
  __int64 unrecovered_register_value_2;
  __m128 vector_result_2;
  double reordered_vector_2;
  double component_delta_2;
  __int64 scaled_index_3;
  unsigned int float_word_3;
  __m128 loaded_word_2;
  __int64 selection_flag;
  __m128 converted_vector_5;
  __int64 remaining_count_5;
  unsigned int comparison_operand_3;
  __m128d converted_vector_6;
  __int64 unrecovered_register_value_3;
  __m128 vector_result_3;
  double reordered_vector_3;
  double component_delta_3;
  unsigned int saved_reordered_vector;
  __int64 scaled_index_4;
  unsigned int float_word_4;
  __m128 loaded_word_3;
  __int64 remaining_count_6;
  unsigned int cached_mesh_triangle_count;
  int iteration_count_2;
  int integer_sum_2;
  __int64 scaled_index_5;
  unsigned int integer_sum_3;
  unsigned int iteration_count_3;
  int running_total;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  unsigned int integer_sum_4;
  unsigned int iteration_count_4;
  __int64 remaining_count_7;
  int masked_bits_3;
  unsigned int integer_sum_5;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  unsigned int integer_difference_2;
  unsigned int iteration_count_5;
  char lobyte_result;
  unsigned int remaining_count_8;
  unsigned int masked_bits_4;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  float scaled_value_4;

  scaled_value_4 = *(float *)&a3;
  LODWORD(remaining_count) = 0;
  cached_mesh_vertex_count = 0;
  iteration_count = 0;
  scaled_value = a2 * 0.5;
  remaining_count_2 = 16;
  mesh_vertex_count = 0;
  product_difference = a2 * -0.5;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  while ( 1 )
  {
    integer_difference = cached_mesh_vertex_count - 16;
    comparison_operand = iteration_count ? LODWORD(scaled_value) : LODWORD(product_difference);
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    dword_140404A6C[scaled_index + 177167567] = comparison_operand;
    *(_QWORD *)&dword_140404A6C[scaled_index + 177167568] = 0;
    dword_140404A6C[3 * mesh_vertex_count + 177249487] = -1082130432;
    dword_140404A6C[3 * mesh_vertex_count + 177249488] = remaining_count;
    dword_140404A6C[3 * mesh_vertex_count + 177249489] = remaining_count;
    dword_140404A6C[2 * mesh_vertex_count + 177216719] = remaining_count;
    dword_140404A6C[2 * mesh_vertex_count + 177216720] = remaining_count;
    remaining_count_3 = 8;
    integer_sum = ++mesh_vertex_count;
    do
    {
      if ( iteration_count )
        component_delta = 0.375;
      else
        component_delta = -0.375;
      converted_vector_2 = _mm_cvtps_pd(converted_vector);
      scaled_value_2 = a2 * component_delta;
      vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], float_word, a3));
      reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0];
      HIDWORD(a3) = 0;
      input_value = a4;
      scaled_value_3 = *(double *)SR_VEC_LANES(128, vector_result, u64) * a4;
      *(float *)&a3 = reordered_vector * a4 * 0.875;
      if ( iteration_count )
        product_difference_2 = scaled_value_3 * -0.875;
      else
        product_difference_2 = scaled_value_3 * 0.875;
      scaled_index_2 = (int)(3 * integer_sum);
      *(float *)&float_word_2 = product_difference_2;
      *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = scaled_value_2;
      dword_140404A6C[scaled_index_2 + 177167569] = float_word_2;
      dword_140404A6C[scaled_index_2 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * mesh_vertex_count + 177249487] = 0;
      loaded_word = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, converted_vector, u64), unrecovered_register_value, a3);
      float_word = 0;
      SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 0.7853981633975;
      converted_vector = _mm_cvtpd_ps(converted_vector_2);
      dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(loaded_word, loaded_word, 1), u32)[0];
      dword_140404A6C[3 * mesh_vertex_count + 177249489] = SR_VEC_LANES(128, loaded_word, i32)[0];
      dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
      dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
      integer_sum = ++mesh_vertex_count;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    converted_vector_3 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    remaining_count_4 = 16;
    do
    {
      if ( iteration_count )
        comparison_operand_2 = LODWORD(scaled_value);
      else
        comparison_operand_2 = LODWORD(product_difference);
      converted_vector_4 = _mm_cvtps_pd(converted_vector_3);
      vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_4, f64)[0], 0, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
      HIDWORD(a3) = 0;
      reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * input_value;
      component_delta_2 = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * input_value;
      *(float *)&a3 = reordered_vector_2;
      if ( iteration_count )
        component_delta_2 = -component_delta_2;
      scaled_index_3 = (int)(3 * integer_sum);
      *(float *)&float_word_3 = component_delta_2;
      dword_140404A6C[scaled_index_3 + 177167567] = comparison_operand_2;
      dword_140404A6C[scaled_index_3 + 177167569] = float_word_3;
      dword_140404A6C[scaled_index_3 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * mesh_vertex_count + 177249487] = 0;
      loaded_word_2 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, converted_vector_3, u64), unrecovered_register_value_2, a3);
      SR_VEC_LANES(128, converted_vector_4, f64)[0] = SR_VEC_LANES(128, converted_vector_4, f64)[0] + 0.39269908169875;
      selection_flag = 0;
      converted_vector_3 = _mm_cvtpd_ps(converted_vector_4);
      dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(loaded_word_2, loaded_word_2, 1), u32)[0];
      dword_140404A6C[3 * mesh_vertex_count + 177249489] = SR_VEC_LANES(128, loaded_word_2, i32)[0];
      dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
      dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
      integer_sum = ++mesh_vertex_count;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    converted_vector_5 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    remaining_count_5 = 16;
    do
    {
      if ( iteration_count )
        comparison_operand_3 = LODWORD(scaled_value);
      else
        comparison_operand_3 = LODWORD(product_difference);
      converted_vector_6 = _mm_cvtps_pd(converted_vector_5);
      vector_result_3 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_6, f64)[0], selection_flag, a3));
      a3 = scaled_value_4;
      reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * scaled_value_4;
      component_delta_3 = *(double *)SR_VEC_LANES(128, vector_result_3, u64) * scaled_value_4;
      if ( iteration_count )
        component_delta_3 = -component_delta_3;
      scaled_index_4 = (int)(3 * integer_sum);
      *(float *)&float_word_4 = component_delta_3;
      dword_140404A6C[scaled_index_4 + 177167567] = comparison_operand_3;
      dword_140404A6C[scaled_index_4 + 177167569] = float_word_4;
      *(float *)&saved_reordered_vector = reordered_vector_3;
      dword_140404A6C[scaled_index_4 + 177167568] = saved_reordered_vector;
      dword_140404A6C[3 * mesh_vertex_count + 177249487] = 0;
      loaded_word_3 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, converted_vector_5, u64), unrecovered_register_value_3, a3);
      SR_VEC_LANES(128, converted_vector_6, f64)[0] = SR_VEC_LANES(128, converted_vector_6, f64)[0] + 0.39269908169875;
      converted_vector_5 = _mm_cvtpd_ps(converted_vector_6);
      dword_140404A6C[3 * mesh_vertex_count + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(loaded_word_3, loaded_word_3, 1), u32)[0];
      dword_140404A6C[3 * mesh_vertex_count + 177249489] = SR_VEC_LANES(128, loaded_word_3, i32)[0];
      dword_140404A6C[2 * mesh_vertex_count + 177216719] = 0;
      dword_140404A6C[2 * mesh_vertex_count + 177216720] = 0;
      integer_sum = ++mesh_vertex_count;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    remaining_count_6 = 8;
    cached_mesh_triangle_count = mesh_triangle_count;
    iteration_count_2 = 1;
    do
    {
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = cached_mesh_vertex_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = iteration_count_2 + cached_mesh_vertex_count;
      integer_sum_2 = (iteration_count_2++ & 7) + 1;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_mesh_vertex_count + integer_sum_2;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_5 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_5 + 178011345] = 1056964608;
      dword_140404A6C[scaled_index_5 + 178011346] = 1056964608;
      dword_140404A6C[scaled_index_5 + 178011347] = 1056964608;
      dword_140404A6C[scaled_index_5 + 178011348] = 1056964608;
      dword_140404A6C[scaled_index_5 + 178011349] = 1056964608;
      dword_140404A6C[scaled_index_5 + 178011350] = 1056964608;
      cached_mesh_triangle_count = ++mesh_triangle_count;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    integer_sum_3 = cached_mesh_vertex_count + 1;
    iteration_count_3 = integer_sum_3;
    running_total = 1;
    remaining_count = 8;
    do
    {
      masked_bits = integer_sum_3 + (running_total & 0xF) + 8;
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = iteration_count_3;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_3 + 7 + running_total;
      masked_bits_2 = integer_sum_3 + ((1 - (_BYTE)integer_sum_3 + (_BYTE)iteration_count_3) & 7);
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_6 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_6 + 178011345] = 1056964608;
      dword_140404A6C[scaled_index_6 + 178011346] = 1056964608;
      dword_140404A6C[scaled_index_6 + 178011347] = 1056964608;
      dword_140404A6C[scaled_index_6 + 178011348] = 1056964608;
      dword_140404A6C[scaled_index_6 + 178011349] = 1056964608;
      dword_140404A6C[scaled_index_6 + 178011350] = 1056964608;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = iteration_count_3;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_2;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_7 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_7 + 178011345] = 1056964608;
      dword_140404A6C[scaled_index_7 + 178011346] = 1056964608;
      dword_140404A6C[scaled_index_7 + 178011347] = 1056964608;
      dword_140404A6C[scaled_index_7 + 178011348] = 1056964608;
      dword_140404A6C[scaled_index_7 + 178011349] = 1056964608;
      dword_140404A6C[scaled_index_7 + 178011350] = 1056964608;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = masked_bits_2;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = masked_bits;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_3 + (((_BYTE)running_total + 1) & 0xF) + 8;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_8 = 6 * mesh_triangle_count;
      dword_140404A6C[scaled_index_8 + 178011345] = 1056964608;
      ++iteration_count_3;
      dword_140404A6C[scaled_index_8 + 178011346] = 1056964608;
      running_total += 2;
      dword_140404A6C[scaled_index_8 + 178011347] = 1056964608;
      dword_140404A6C[scaled_index_8 + 178011348] = 1056964608;
      dword_140404A6C[scaled_index_8 + 178011349] = 1056964608;
      dword_140404A6C[scaled_index_8 + 178011350] = 1056964608;
      cached_mesh_triangle_count = ++mesh_triangle_count;
      --remaining_count;
    }
    while ( remaining_count );
    integer_sum_4 = integer_sum_3 + 8;
    iteration_count_4 = integer_sum_4;
    remaining_count_7 = 16;
    do
    {
      masked_bits_3 = ((_BYTE)iteration_count_4 + 1 - (_BYTE)integer_sum_4) & 0xF;
      dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = iteration_count_4;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = iteration_count_4 + 16;
      integer_sum_5 = masked_bits_3 + integer_sum_4 + 16;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_5;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_9 = 6 * mesh_triangle_count;
      *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_9 + 178011349] = 0;
      ++mesh_triangle_count;
      dword_140404A6C[3 * mesh_triangle_count + 177495248] = iteration_count_4++;
      dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_5;
      float_word = masked_bits_3 + integer_sum_4;
      dword_140404A6C[3 * mesh_triangle_count + 177495250] = float_word;
      dword_140404A6C[mesh_triangle_count + 178207953] = -2;
      scaled_index_10 = 6 * mesh_triangle_count;
      *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[scaled_index_10 + 178011349] = 0;
      cached_mesh_triangle_count = ++mesh_triangle_count;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    if ( ++iteration_count >= 2 )
      break;
    cached_mesh_vertex_count = mesh_vertex_count;
  }
  integer_difference_2 = mesh_vertex_count - 16;
  iteration_count_5 = integer_difference;
  lobyte_result = 1 - (LOBYTE(mesh_vertex_count) - 16);
  remaining_count_8 = mesh_vertex_count - 16 + 15;
  do
  {
    dword_140404A6C[3 * cached_mesh_triangle_count + 177495248] = iteration_count_5;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_difference_2 + (((_BYTE)remaining_count_8 + lobyte_result) & 0xF);
    masked_bits_4 = integer_difference + ((1 - (_BYTE)integer_difference + (_BYTE)iteration_count_5) & 0xF);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = remaining_count_8;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    scaled_index_11 = 6 * mesh_triangle_count;
    *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011349] = 0;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = iteration_count_5++;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = remaining_count_8--;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = masked_bits_4;
    dword_140404A6C[mesh_triangle_count + 178207953] = -2;
    scaled_index_12 = 6 * mesh_triangle_count;
    *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011349] = 0;
    cached_mesh_triangle_count = ++mesh_triangle_count;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  return sub_1401449C0(a1, 0);
}

//----- (0000000140101220) ----------------------------------------------------
void            sub_140101220(int a1, float *a2)
{
  __int64 record_word_offset;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int cached_mesh_vertex_count;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  unsigned int cached_mesh_vertex_count_2;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int cached_mesh_vertex_count_3;
  __int64 scaled_index_7;
  __int64 packed_word_bits;
  float weighted_sum;
  int *record_byte_offset;
  unsigned int state_word;
  __int64 loaded_word;
  unsigned int table_value;
  __int64 table_value_2;
  unsigned int table_value_3;
  __int64 table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140101220[48];
#define scratch_buffer (*(_DWORD (*)[8])(void *)(sr_frame_140101220 + 0)) /* [rsp+0h] */
#define unused_frame_slot_32 (*(__int64 (*))(void *)(sr_frame_140101220 + 32)) /* [rsp+20h] */

  record_word_offset = 2LL * a1;
  scratch_buffer[0] = dword_140404A6C[4 * a1 + 178322642];
  scratch_buffer[1] = dword_140404A6C[4 * a1 + 178322643];
  scratch_buffer[2] = dword_140404A6C[4 * a1 + 178322644];
  scratch_buffer[3] = dword_140404A6C[4 * a1 + 178322645];
  scaled_index = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  scaled_index_2 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[scaled_index_2 + 177167567] = *(float *)&dword_140404A6C[scaled_index + 177167567] + *a2;
  *(float *)&dword_140404A6C[scaled_index_2 + 177167568] = *(float *)&dword_140404A6C[scaled_index + 177167568] + a2[1];
  *(float *)&dword_140404A6C[scaled_index_2 + 177167569] = *(float *)&dword_140404A6C[scaled_index + 177167569] + a2[2];
  cached_mesh_vertex_count = mesh_vertex_count;
  scratch_buffer[4] = mesh_vertex_count++;
  scaled_index_3 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  scaled_index_4 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[scaled_index_4 + 177167567] = *(float *)&dword_140404A6C[scaled_index_3 + 177167567] + *a2;
  *(float *)&dword_140404A6C[scaled_index_4 + 177167568] = *(float *)&dword_140404A6C[scaled_index_3 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[scaled_index_4 + 177167569] = *(float *)&dword_140404A6C[scaled_index_3 + 177167569] + a2[2];
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  scratch_buffer[5] = mesh_vertex_count++;
  scaled_index_5 = (int)(3 * dword_140404A6C[2 * record_word_offset + 178322644]);
  scaled_index_6 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[scaled_index_6 + 177167567] = *(float *)&dword_140404A6C[scaled_index_5 + 177167567] + *a2;
  *(float *)&dword_140404A6C[scaled_index_6 + 177167568] = *(float *)&dword_140404A6C[scaled_index_5 + 177167568] + a2[1];
  *(float *)&dword_140404A6C[scaled_index_6 + 177167569] = *(float *)&dword_140404A6C[scaled_index_5 + 177167569] + a2[2];
  cached_mesh_vertex_count_3 = mesh_vertex_count;
  scratch_buffer[6] = mesh_vertex_count++;
  scaled_index_7 = (int)(3 * dword_140404A6C[2 * record_word_offset + 178322645]);
  packed_word_bits = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[packed_word_bits + 177167567] = *(float *)&dword_140404A6C[scaled_index_7 + 177167567] + *a2;
  *(float *)&dword_140404A6C[packed_word_bits + 177167568] = *(float *)&dword_140404A6C[scaled_index_7 + 177167568] + a2[1];
  weighted_sum = *(float *)&dword_140404A6C[scaled_index_7 + 177167569];
  record_byte_offset = &dword_1402B3674;
  *(float *)&dword_140404A6C[packed_word_bits + 177167569] = weighted_sum + a2[2];
  LODWORD(packed_word_bits) = mesh_vertex_count;
  scratch_buffer[7] = mesh_vertex_count++;
  dword_140404A6C[2 * record_word_offset + 178322644] = cached_mesh_vertex_count_3;
  dword_140404A6C[2 * record_word_offset + 178322642] = cached_mesh_vertex_count;
  dword_140404A6C[2 * record_word_offset + 178322643] = cached_mesh_vertex_count_2;
  dword_140404A6C[2 * record_word_offset + 178322645] = packed_word_bits;
  state_word = g_16AC43DB0;
  do
  {
    loaded_word = *record_byte_offset;
    dword_140404A6C[4 * state_word + 178322642] = scratch_buffer[*(record_byte_offset - 1)];
    table_value = scratch_buffer[loaded_word];
    table_value_2 = record_byte_offset[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value;
    table_value_3 = scratch_buffer[table_value_2];
    table_value_4 = record_byte_offset[2];
    record_byte_offset += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_3;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = scratch_buffer[table_value_4];
    state_word = ++g_16AC43DB0;
  }
  while ( (__int64)record_byte_offset < (__int64)&dword_1402B36B4 );
  return;
}
#undef scratch_buffer
#undef unused_frame_slot_32

//----- (00000001401014E0) ----------------------------------------------------
__int64            sub_1401014E0(int a1)
{
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  __int64 float_word;
  float float_word_2;
  float weighted_sum;
  __int64 packed_word_bits;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  int scaled_index;
  float product_difference;
  float product_difference_2;
  float component_sum;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float component_delta;
  __int64 scaled_index_2;
  float product_difference_3;
  float weighted_sum_8;
  float product_difference_4;
  unsigned int float_word_3;
  float saved_weighted_sum;
  float weighted_sum_9;
  unsigned int float_word_4;
  float weighted_sum_10;
  unsigned int float_word_5;
  unsigned int float_word_6;
  unsigned int float_word_7;
  float component_delta_2;
  float weighted_sum_11;
  float state_address;
  __int64 scaled_index_3;
  float state_address_2;
  unsigned int float_word_8;
  float product_difference_5;
  unsigned int float_word_9;
  float component_delta_3;
  float component_delta_4;
  float saved_weighted_sum_2;
  unsigned int float_word_10;
  float component_delta_5;
  float component_delta_6;
  float weighted_sum_12;
  unsigned int cached_mesh_vertex_count;
  __int64 scaled_index_4;
  unsigned int comparison_operand;
  __int64 scaled_index_5;
  __int64 packed_word_bits_2;
  int *record_byte_offset;
  unsigned int state_word;
  __int64 loaded_word;
  unsigned int table_value;
  __int64 table_value_2;
  unsigned int table_value_3;
  __int64 table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401014E0[64];
#define saved_weighted_sum_3 (*(float (*))(void *)(sr_frame_1401014E0 + 0)) /* [rsp+0h] */
#define saved_weighted_sum_4 (*(float (*))(void *)(sr_frame_1401014E0 + 4)) /* [rsp+4h] */
#define saved_weighted_sum_5 (*(float (*))(void *)(sr_frame_1401014E0 + 8)) /* [rsp+8h] */
#define saved_float_word (*(float (*))(void *)(sr_frame_1401014E0 + 12)) /* [rsp+Ch] */
#define saved_weighted_sum_6 (*(float (*))(void *)(sr_frame_1401014E0 + 16)) /* [rsp+10h] */
#define weighted_sum_13 (*(float (*))(void *)(sr_frame_1401014E0 + 20)) /* [rsp+14h] */
#define scratch_buffer (*(_DWORD (*)[8])(void *)(sr_frame_1401014E0 + 24)) /* [rsp+18h] */
#define unused_frame_slot_56 (*(__int64 (*))(void *)(sr_frame_1401014E0 + 56)) /* [rsp+38h] */

  record_word_offset = 2LL * a1;
  scratch_buffer[0] = dword_140404A6C[4 * a1 + 178322642];
  scratch_buffer[1] = dword_140404A6C[4 * a1 + 178322643];
  scratch_buffer[2] = dword_140404A6C[4 * a1 + 178322644];
  scratch_buffer[3] = dword_140404A6C[4 * a1 + 178322645];
  record_word_offset_2 = 4 * a1;
  float_word = (int)(3 * dword_140404A6C[record_word_offset_2 + 178322642]);
  float_word_2 = *(float *)&dword_140404A6C[float_word + 177167567];
  weighted_sum = *(float *)&dword_140404A6C[float_word + 177167568];
  packed_word_bits = (int)(3 * dword_140404A6C[record_word_offset_2 + 178322643]);
  weighted_sum_13 = *(float *)&dword_140404A6C[float_word + 177167569];
  saved_weighted_sum_6 = weighted_sum;
  saved_float_word = float_word_2;
  weighted_sum_2 = *(float *)&dword_140404A6C[packed_word_bits + 177167567];
  weighted_sum_3 = *(float *)&dword_140404A6C[packed_word_bits + 177167568];
  weighted_sum_4 = *(float *)&dword_140404A6C[packed_word_bits + 177167569];
  LODWORD(packed_word_bits) = dword_140404A6C[record_word_offset_2 + 178322645];
  saved_weighted_sum_4 = weighted_sum_4;
  saved_weighted_sum_3 = weighted_sum_2;
  saved_weighted_sum_5 = weighted_sum_3;
  scaled_index = 3 * packed_word_bits;
  product_difference = (float)(weighted_sum_2 - float_word_2) * 0.125;
  product_difference_2 = (float)(weighted_sum_4 - weighted_sum_13) * 0.125;
  component_sum = float_word_2 + product_difference;
  weighted_sum_5 = *(float *)&dword_140404A6C[3 * (_DWORD)packed_word_bits + 177167567];
  weighted_sum_6 = *(float *)&dword_140404A6C[3 * (_DWORD)packed_word_bits + 177167568];
  weighted_sum_7 = *(float *)&dword_140404A6C[3 * (_DWORD)packed_word_bits + 177167569];
  component_delta = weighted_sum_5 - float_word_2;
  scaled_index_2 = (int)(3 * dword_140404A6C[record_word_offset_2 + 178322644]);
  product_difference_3 = (float)(weighted_sum_3 - weighted_sum) * 0.125;
  weighted_sum_8 = *(float *)&dword_140404A6C[scaled_index_2 + 177167569];
  product_difference_4 = (float)(weighted_sum_6 - weighted_sum) * 0.25;
  *(float *)&float_word_3 = (float)(component_delta * 0.25) + component_sum;
  saved_weighted_sum = weighted_sum;
  weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_2 + 177167568];
  *(float *)&float_word_4 = product_difference_4 + (float)(saved_weighted_sum + product_difference_3);
  weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_2 + 177167567];
  *(float *)&float_word_5 = (float)((float)(weighted_sum_7 - weighted_sum_13) * 0.25) + (float)(weighted_sum_13 + product_difference_2);
  *(float *)&float_word_6 = (float)((float)(weighted_sum_10 - weighted_sum_2) * 0.25) + (float)(weighted_sum_2 - product_difference);
  *(float *)&float_word_7 = (float)((float)(weighted_sum_9 - weighted_sum_3) * 0.25) + (float)(weighted_sum_3 - product_difference_3);
  component_delta_2 = saved_weighted_sum_4 - product_difference_2;
  weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index + 177167568];
  state_address = (float)(*(float *)&dword_140404A6C[scaled_index + 177167569] - weighted_sum_8) * 0.125;
  scaled_index_3 = 3 * mesh_vertex_count;
  state_address_2 = (float)(*(float *)&dword_140404A6C[scaled_index + 177167567] - weighted_sum_10) * 0.125;
  *(float *)&float_word_8 = (float)((float)(weighted_sum_8 - saved_weighted_sum_4) * 0.25) + component_delta_2;
  product_difference_5 = (float)(weighted_sum_11 - weighted_sum_9) * 0.125;
  saved_weighted_sum_3 = (float)((float)(saved_weighted_sum_3 - weighted_sum_10) * 0.25) + (float)(weighted_sum_10 + state_address_2);
  *(float *)&float_word_9 = (float)((float)(saved_weighted_sum_4 - weighted_sum_8) * 0.25) + (float)(weighted_sum_8 + state_address);
  component_delta_3 = saved_float_word - weighted_sum_5;
  component_delta_4 = weighted_sum_5 - state_address_2;
  saved_weighted_sum_2 = weighted_sum_13;
  *(float *)&float_word_10 = (float)((float)(saved_weighted_sum_5 - weighted_sum_9) * 0.25) + (float)(weighted_sum_9 + product_difference_5);
  component_delta_5 = saved_weighted_sum_6 - weighted_sum_11;
  component_delta_6 = weighted_sum_11 - product_difference_5;
  weighted_sum_12 = *(float *)&dword_140404A6C[scaled_index + 177167569];
  dword_140404A6C[scaled_index_3 + 177167567] = float_word_3;
  dword_140404A6C[scaled_index_3 + 177167568] = float_word_4;
  dword_140404A6C[scaled_index_3 + 177167569] = float_word_5;
  cached_mesh_vertex_count = mesh_vertex_count;
  scratch_buffer[4] = mesh_vertex_count++;
  scaled_index_4 = 3 * mesh_vertex_count;
  dword_140404A6C[scaled_index_4 + 177167567] = float_word_6;
  dword_140404A6C[scaled_index_4 + 177167568] = float_word_7;
  comparison_operand = LODWORD(saved_weighted_sum_3);
  dword_140404A6C[scaled_index_4 + 177167569] = float_word_8;
  LODWORD(record_word_offset_2) = mesh_vertex_count;
  scratch_buffer[5] = mesh_vertex_count++;
  scaled_index_5 = 3 * mesh_vertex_count;
  dword_140404A6C[scaled_index_5 + 177167567] = comparison_operand;
  dword_140404A6C[scaled_index_5 + 177167568] = float_word_10;
  dword_140404A6C[scaled_index_5 + 177167569] = float_word_9;
  LODWORD(float_word) = mesh_vertex_count;
  scratch_buffer[6] = mesh_vertex_count++;
  packed_word_bits_2 = 3 * mesh_vertex_count;
  *(float *)&dword_140404A6C[packed_word_bits_2 + 177167567] = (float)(component_delta_3 * 0.25) + component_delta_4;
  *(float *)&dword_140404A6C[packed_word_bits_2 + 177167568] = (float)(component_delta_5 * 0.25) + component_delta_6;
  *(float *)&dword_140404A6C[packed_word_bits_2 + 177167569] = (float)((float)(saved_weighted_sum_2 - weighted_sum_12) * 0.25) + (float)(weighted_sum_12 - state_address);
  LODWORD(packed_word_bits_2) = mesh_vertex_count;
  scratch_buffer[7] = mesh_vertex_count++;
  dword_140404A6C[2 * record_word_offset + 178322642] = cached_mesh_vertex_count;
  dword_140404A6C[2 * record_word_offset + 178322643] = record_word_offset_2;
  record_byte_offset = &dword_1402B3674;
  dword_140404A6C[2 * record_word_offset + 178322644] = float_word;
  dword_140404A6C[2 * record_word_offset + 178322645] = packed_word_bits_2;
  state_word = g_16AC43DB0;
  do
  {
    loaded_word = *record_byte_offset;
    dword_140404A6C[4 * state_word + 178322642] = scratch_buffer[*(record_byte_offset - 1)];
    table_value = scratch_buffer[loaded_word];
    table_value_2 = record_byte_offset[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value;
    table_value_3 = scratch_buffer[table_value_2];
    table_value_4 = record_byte_offset[2];
    record_byte_offset += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_3;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = scratch_buffer[table_value_4];
    state_word = ++g_16AC43DB0;
  }
  while ( (__int64)record_byte_offset < (__int64)&dword_1402B36B4 );
  return 0; /* the function has no caller */
}
#undef saved_weighted_sum_3
#undef saved_weighted_sum_4
#undef saved_weighted_sum_5
#undef saved_float_word
#undef saved_weighted_sum_6
#undef weighted_sum_13
#undef scratch_buffer
#undef unused_frame_slot_56

//----- (00000001401019A0) ----------------------------------------------------
__int64            sub_1401019A0(int a1)
{
  __int64 record_word_offset;
  unsigned int scaled_index;
  unsigned int float_word;
  unsigned int scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  __int64 element_index;
  float state_address;
  float state_address_2;
  float state_address_3;
  unsigned int cached_mesh_vertex_count;
  float scaled_value;
  float state_address_4;
  unsigned int state_address_5;
  __int64 running_total;
  _DWORD *cached_mesh_vertex_count_2;
  int running_total_2;
  float component_delta;
  float component_delta_2;
  float component_delta_3;
  float component_delta_4;
  int scaled_index_7;
  float component_sum;
  float component_sum_2;
  unsigned int cached_mesh_vertex_count_3;
  __int64 scaled_index_8;
  unsigned int integer_sum;
  __int64 float_word_2;
  float component_delta_5;
  float component_delta_6;
  float component_delta_7;
  int scaled_index_9;
  float weighted_sum;
  float component_sum_3;
  unsigned int cached_mesh_vertex_count_4;
  __int64 scaled_index_10;
  unsigned int table_value;
  unsigned int cached_scaled_index;
  unsigned int comparison_operand;
  unsigned int table_value_2;
  unsigned int cached_scaled_index_2;
  __int64 scaled_index_11;
  unsigned int cached_scaled_index_3;
  __int64 scaled_index_12;
  __int64 scaled_index_13;
  unsigned int cached_float_word;
  unsigned int table_value_3;
  unsigned int table_value_4;
  unsigned int table_value_5;
  unsigned int comparison_operand_2;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  unsigned int comparison_operand_3;
  unsigned int table_value_6;
  unsigned int table_value_7;
  __int64 scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  unsigned int table_value_8;
  __int64 scaled_index_21;
  unsigned int comparison_operand_4;
  __int64 scaled_index_22;
  __int64 scaled_index_23;
  unsigned int table_value_9;
  __int64 scaled_index_24;
  __int64 scaled_index_25;
  __int64 scaled_index_26;
  __int64 scaled_index_27;
  __int64 packed_word_bits;
  __int64 scaled_index_28;
  __int64 cached_mesh_vertex_count_5;
  __int64 scaled_index_29;
  __int64 integer_difference;
  __int64 scaled_index_30;
  __int64 scaled_index_31;
  __int64 scaled_index_32;
  signed int element_index_2;
  unsigned int *record_byte_offset;
  _DWORD sr_extrude_position[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401019A0[144];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 0)) /* [rsp+8h] */
#define packed_word_bits_2 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 32)) /* [rsp+28h] */
#define cached_scaled_index_4 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 64)) /* [rsp+48h] */
#define scaled_index_33 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 68)) /* [rsp+4Ch] */
#define saved_float_word (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 72)) /* [rsp+50h] */
#define cached_scaled_index_5 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 76)) /* [rsp+54h] */
#define frame_word_at_80 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 80)) /* [rsp+58h] */
#define callee_output_word (*(_DWORD (*)[8])(void *)(sr_frame_1401019A0 + 84)) /* [rsp+5Ch] */
#define frame_word_at_116 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 116)) /* [rsp+7Ch] */
#define frame_word_at_120 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 120)) /* [rsp+80h] */
#define frame_word_at_124 (*(unsigned int (*))(void *)(sr_frame_1401019A0 + 124)) /* [rsp+84h] */
#define unused_frame_slot_128 (*(__int64 (*))(void *)(sr_frame_1401019A0 + 128)) /* [rsp+88h] */

  LODWORD(packed_word_bits_2) = a1;
  record_word_offset = 2LL * a1;
  scaled_index = dword_140404A6C[4 * a1 + 178322642];
  float_word = dword_140404A6C[4 * a1 + 178322644];
  scaled_index_2 = dword_140404A6C[2 * record_word_offset + 178322645];
  scaled_index_33 = dword_140404A6C[2 * record_word_offset + 178322643];
  cached_scaled_index_4 = scaled_index;
  saved_float_word = float_word;
  cached_scaled_index_5 = scaled_index_2;
  scaled_index_3 = (int)(3 * scaled_index_33);
  scaled_index_4 = (int)(3 * scaled_index);
  scaled_index_5 = (int)(3 * float_word);
  scaled_index_6 = (int)(3 * scaled_index_2);
  element_index = 0;
  state_address = (float)(*(float *)&dword_140404A6C[scaled_index_4 + 177167568] + *(float *)&dword_140404A6C[scaled_index_3 + 177167568])
      + *(float *)&dword_140404A6C[scaled_index_5 + 177167568];
  state_address_2 = (float)(*(float *)&dword_140404A6C[scaled_index_4 + 177167569] + *(float *)&dword_140404A6C[scaled_index_3 + 177167569])
      + *(float *)&dword_140404A6C[scaled_index_5 + 177167569];
  state_address_3 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_4 + 177167567] + *(float *)&dword_140404A6C[scaled_index_3 + 177167567])
              + *(float *)&dword_140404A6C[scaled_index_5 + 177167567])
      + *(float *)&dword_140404A6C[scaled_index_6 + 177167567];
  cached_mesh_vertex_count = mesh_vertex_count;
  scaled_value = state_address_3 * 0.25;
  state_address_4 = (float)(state_address + *(float *)&dword_140404A6C[scaled_index_6 + 177167568]) * 0.25;
  *(float *)&state_address_5 = (float)(state_address_2 + *(float *)&dword_140404A6C[scaled_index_6 + 177167569]) * 0.25;
  do
  {
    running_total = 0;
    cached_mesh_vertex_count_2 = &callee_output_word[4 * element_index];
    running_total_2 = 1;
    do
    {
      component_delta = 0.0;
      if ( (unsigned __int64)element_index >= 2 )
      {
        component_delta_2 = -0.03125;
        component_delta_3 = 0.015625;
      }
      else
      {
        if ( element_index )
          component_delta = -0.0625;
        else
          component_delta = 0.0625;
        component_delta_2 = 0.03125;
        component_delta_3 = 0.03125;
      }
      if ( running_total && running_total != 3 )
        component_delta_3 = -component_delta_3;
      if ( running_total >= 2 )
        component_delta_4 = -0.015625;
      else
        component_delta_4 = 0.015625;
      if ( element_index == 2 && running_total < 2 )
        component_delta_4 = component_delta_4 + 0.015625;
      scaled_index_7 = 3 * cached_mesh_vertex_count;
      component_sum = component_delta + component_delta_3;
      component_sum_2 = component_delta_2 + component_delta_4;
      dword_140404A6C[scaled_index_7 + 177167569] = state_address_5;
      *(float *)&dword_140404A6C[scaled_index_7 + 177167567] = component_sum + scaled_value;
      *(float *)&dword_140404A6C[scaled_index_7 + 177167568] = component_sum_2 + state_address_4;
      cached_mesh_vertex_count_3 = mesh_vertex_count;
      scaled_index_8 = 7LL * (int)mesh_vertex_count;
      *(cached_mesh_vertex_count_2 - 1) = mesh_vertex_count;
      integer_sum = cached_mesh_vertex_count_3 + 1;
      mesh_vertex_count = integer_sum;
      if ( element_index )
      {
        if ( element_index != 1 )
        {
          *(float *)&dword_140404A6C[scaled_index_8 + 160235602] = component_sum;
          *(float *)&dword_140404A6C[scaled_index_8 + 160235603] = component_sum_2;
          dword_140404A6C[scaled_index_8 + 160235598] = 3;
          dword_140404A6C[scaled_index_8 + 160235604] = -1105618534;
          float_word_2 = 1015021568;
          component_delta_5 = 0.0;
          component_delta_6 = -0.03125;
          goto LABEL_27;
        }
        *(float *)&dword_140404A6C[scaled_index_8 + 160235602] = component_delta_3;
        *(float *)&dword_140404A6C[scaled_index_8 + 160235603] = component_delta_4;
        dword_140404A6C[scaled_index_8 + 160235598] = 17;
        dword_140404A6C[scaled_index_8 + 160235599] = 3;
        dword_140404A6C[scaled_index_8 + 160235604] = 0;
      }
      else
      {
        *(float *)&dword_140404A6C[scaled_index_8 + 160235602] = component_delta_3;
        *(float *)&dword_140404A6C[scaled_index_8 + 160235603] = component_delta_4;
        dword_140404A6C[scaled_index_8 + 160235598] = 16;
        dword_140404A6C[scaled_index_8 + 160235599] = 3;
        dword_140404A6C[scaled_index_8 + 160235604] = 0;
      }
      if ( element_index )
        component_delta_5 = -0.0625;
      else
        component_delta_5 = 0.0625;
      component_delta_6 = 0.03125;
      float_word_2 = 1023410176;
LABEL_27:
      if ( running_total_2 && running_total_2 != 3 )
        float_word_2 ^= 0x80000000uLL;
      if ( running_total_2 >= 2 )
        component_delta_7 = -0.015625;
      else
        component_delta_7 = 0.015625;
      if ( element_index == 2 && running_total_2 < 2 )
        component_delta_7 = component_delta_7 + 0.015625;
      scaled_index_9 = 3 * integer_sum;
      weighted_sum = component_delta_5 + *(float *)&float_word_2;
      component_sum_3 = component_delta_6 + component_delta_7;
      *(float *)&dword_140404A6C[scaled_index_9 + 177167567] = weighted_sum + scaled_value;
      *(float *)&dword_140404A6C[scaled_index_9 + 177167568] = component_sum_3 + state_address_4;
      dword_140404A6C[scaled_index_9 + 177167569] = state_address_5;
      cached_mesh_vertex_count_4 = mesh_vertex_count;
      scaled_index_10 = 7LL * (int)mesh_vertex_count;
      *cached_mesh_vertex_count_2 = mesh_vertex_count;
      if ( element_index )
      {
        if ( element_index == 1 )
        {
          dword_140404A6C[scaled_index_10 + 160235598] = 17;
          dword_140404A6C[scaled_index_10 + 160235599] = 3;
          dword_140404A6C[scaled_index_10 + 160235602] = float_word_2;
          *(float *)&dword_140404A6C[scaled_index_10 + 160235603] = component_delta_7;
          dword_140404A6C[scaled_index_10 + 160235604] = 0;
        }
        else
        {
          dword_140404A6C[scaled_index_10 + 160235598] = 3;
          *(float *)&dword_140404A6C[scaled_index_10 + 160235602] = weighted_sum;
          *(float *)&dword_140404A6C[scaled_index_10 + 160235603] = component_sum_3;
          dword_140404A6C[scaled_index_10 + 160235604] = -1105618534;
        }
      }
      else
      {
        dword_140404A6C[scaled_index_10 + 160235598] = 16;
        dword_140404A6C[scaled_index_10 + 160235599] = 3;
        dword_140404A6C[scaled_index_10 + 160235602] = float_word_2;
        *(float *)&dword_140404A6C[scaled_index_10 + 160235603] = component_delta_7;
        dword_140404A6C[scaled_index_10 + 160235604] = 0;
      }
      cached_mesh_vertex_count = cached_mesh_vertex_count_4 + 1;
      running_total_2 += 2;
      running_total += 2;
      mesh_vertex_count = cached_mesh_vertex_count;
      cached_mesh_vertex_count_2 += 2;
    }
    while ( running_total < 4 );
    ++element_index;
  }
  while ( element_index < 3 );
  table_value = callee_output_word[0];
  cached_scaled_index = cached_scaled_index_4;
  comparison_operand = frame_word_at_80;
  table_value_2 = callee_output_word[2];
  cached_scaled_index_2 = cached_scaled_index_5;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_4;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = comparison_operand;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_11 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_11 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand;
  cached_scaled_index_3 = scaled_index_33;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_12 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_12 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = cached_scaled_index_2;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_13 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_13 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_3;
  cached_float_word = saved_float_word;
  table_value_3 = callee_output_word[5];
  table_value_4 = callee_output_word[4];
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = saved_float_word;
  table_value_5 = callee_output_word[3];
  comparison_operand_2 = frame_word_at_120;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_14 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_14 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_4;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_15 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_15 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_4;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_5;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_16 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_16 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_float_word;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand_2;
  comparison_operand_3 = frame_word_at_116;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = frame_word_at_116;
  table_value_6 = callee_output_word[6];
  table_value_7 = callee_output_word[1];
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_17 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_17 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_float_word;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = comparison_operand_3;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_6;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_18 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_18 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_float_word;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_6;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_3;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_19 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_19 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_7;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_20 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_20 + 178011349] = 1065353216;
  table_value_8 = callee_output_word[7];
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_7;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_8;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_21 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_21 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[3 * mesh_triangle_count + 177495248] = cached_scaled_index_2;
  dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_8;
  comparison_operand_4 = frame_word_at_124;
  dword_140404A6C[3 * mesh_triangle_count + 177495250] = frame_word_at_124;
  dword_140404A6C[mesh_triangle_count + 178207953] = -2;
  scaled_index_22 = 6 * mesh_triangle_count;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_22 + 178011349] = 1065353216;
  ++mesh_triangle_count;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = comparison_operand_4;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = comparison_operand_2;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = cached_float_word;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = cached_scaled_index_2;
  scaled_index_23 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_23 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  table_value_9 = callee_output_word[0];
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = table_value_7;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value_6;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = comparison_operand_3;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = table_value_8;
  scaled_index_24 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_24 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = table_value_9;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value_5;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_6;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = table_value_7;
  scaled_index_25 = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[scaled_index_25 + 178388184] = 1065353216;
  ++g_16AC43DB0;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = frame_word_at_80;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value_9;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_7;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = table_value_2;
  scaled_index_26 = 8LL * (int)g_16AC43DB0;
  *(_OWORD *)&dword_140404A6C[scaled_index_26 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_26 + 178388182] = 0;
  g_16677CBA4 = g_16AC43DB0++;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = table_value_5;
  (*(__int64 *)sr_extrude_position) = 0;
  sr_extrude_position[2] = -1124073472;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value_4;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_3;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = table_value_6;
  scaled_index_27 = 8LL * (int)g_16AC43DB0;
  *(_OWORD *)&dword_140404A6C[scaled_index_27 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[scaled_index_27 + 178388182] = 0;
  g_16677CBA8 = g_16AC43DB0++;
  dword_140404A6C[4 * g_16AC43DB0 + 178322642] = table_value_8;
  dword_140404A6C[4 * g_16AC43DB0 + 178322643] = comparison_operand_3;
  dword_140404A6C[4 * g_16AC43DB0 + 178322644] = comparison_operand_2;
  dword_140404A6C[4 * g_16AC43DB0 + 178322645] = comparison_operand_4;
  packed_word_bits = 8 * g_16AC43DB0;
  *(_QWORD *)&dword_140404A6C[packed_word_bits + 178388178] = 1065353216;
  *(_QWORD *)&dword_140404A6C[packed_word_bits + 178388180] = 1065353216;
  *(_QWORD *)&dword_140404A6C[packed_word_bits + 178388182] = 1065353216;
  *(_QWORD *)&dword_140404A6C[packed_word_bits + 178388184] = 1065353216;
  LODWORD(packed_word_bits) = g_16AC43DB0;
  g_16677CBAC = g_16AC43DB0++;
  scaled_index_28 = 4 * (int)packed_word_bits_2;
  dword_140404A6C[scaled_index_28 + 178322642] = cached_scaled_index_4;
  dword_140404A6C[scaled_index_28 + 178322643] = scaled_index_33;
  dword_140404A6C[scaled_index_28 + 178322644] = table_value_5;
  dword_140404A6C[scaled_index_28 + 178322645] = table_value_9;
  sub_140101220(packed_word_bits, (float *)&(*(__int64 *)sr_extrude_position));
  cached_mesh_vertex_count_5 = (int)mesh_vertex_count;
  scaled_index_29 = 7 * ((int)mesh_vertex_count - 4LL);
  integer_difference = (int)mesh_vertex_count - 3LL;
  dword_140404A6C[scaled_index_29 + 160235598] = 3;
  dword_140404A6C[scaled_index_29 + 160235602] = 1010827264;
  dword_140404A6C[scaled_index_29 + 160235603] = -1132462080;
  dword_140404A6C[scaled_index_29 + 160235604] = -1103521382;
  scaled_index_30 = 7 * integer_difference;
  dword_140404A6C[scaled_index_30 + 160235598] = 3;
  dword_140404A6C[scaled_index_30 + 160235602] = -1136656384;
  dword_140404A6C[scaled_index_30 + 160235603] = -1132462080;
  dword_140404A6C[scaled_index_30 + 160235604] = -1103521382;
  scaled_index_31 = 7 * (cached_mesh_vertex_count_5 - 2);
  scaled_index_32 = 7 * cached_mesh_vertex_count_5;
  dword_140404A6C[scaled_index_31 + 160235598] = 3;
  dword_140404A6C[scaled_index_31 + 160235602] = -1132462080;
  dword_140404A6C[scaled_index_31 + 160235603] = -1119879168;
  dword_140404A6C[scaled_index_31 + 160235604] = -1103521382;
  dword_140404A6C[scaled_index_32 + 160235591] = 3;
  dword_140404A6C[scaled_index_32 + 160235595] = 1015021568;
  dword_140404A6C[scaled_index_32 + 160235596] = -1119879168;
  dword_140404A6C[scaled_index_32 + 160235597] = -1103521382;
  element_index_2 = g_16AC43DB0 - 4;
  if ( (signed int)(g_16AC43DB0 - 4) < (int)g_16AC43DB0 )
  {
    record_byte_offset = &dword_140404A6C[8 * element_index_2 + 178388179];
    do
    {
      *(_QWORD *)(record_byte_offset - 1) = 1065353216;
      ++element_index_2;
      *(_QWORD *)(record_byte_offset + 1) = 1065353216;
      *(_QWORD *)(record_byte_offset + 3) = 1065353216;
      *(_QWORD *)(record_byte_offset + 5) = 1065353216;
      record_byte_offset += 8;
    }
    while ( element_index_2 < (int)g_16AC43DB0 );
  }
  sub_1400FFCE0(g_16677CBA4, 0, *(double *)&float_word_2);
  return sub_1400FFCE0(g_16677CBA8, 1, *(double *)&float_word_2); /* 0x140102A36: the result of this call is still in rax at the exit */
}
#undef unused_frame_slot_0
#undef packed_word_bits_2
#undef cached_scaled_index_4
#undef scaled_index_33
#undef saved_float_word
#undef cached_scaled_index_5
#undef frame_word_at_80
#undef callee_output_word
#undef frame_word_at_116
#undef frame_word_at_120
#undef frame_word_at_124
#undef unused_frame_slot_128

// 140101B8E: conditional instruction was optimized away because r8.8==1
// 140101CBA: conditional instruction was optimized away because r8.8 is in (==2|<0)
// 140101CD4: conditional instruction was optimized away because r8.8==1

//----- (0000000140102AA0) ----------------------------------------------------
__int64            sub_140102AA0(int a1, float *a2, float a3, float a4, float a5)
{
  __int64 record_word_offset;
  __int64 scaled_index;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  float weighted_sum_4;
  float weighted_sum_5;
  float state_address;
  __int64 scaled_index_5;
  float scaled_value;
  float state_address_2;
  float state_address_3;
  unsigned int cached_mesh_vertex_count;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  float state_address_4;
  float state_address_5;
  unsigned int cached_mesh_vertex_count_2;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  float state_address_6;
  float state_address_7;
  unsigned int cached_mesh_vertex_count_3;
  __int64 scaled_index_10;
  __int64 packed_word_bits;
  float weighted_sum_6;
  float weighted_sum_7;
  unsigned int state_word;
  int *record_byte_offset;
  __int64 loaded_word;
  unsigned int table_value;
  __int64 table_value_2;
  unsigned int table_value_3;
  __int64 table_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102AA0[48];
#define scratch_buffer (*(_DWORD (*)[8])(void *)(sr_frame_140102AA0 + 0)) /* [rsp+0h] */
#define unused_frame_slot_32 (*(__int64 (*))(void *)(sr_frame_140102AA0 + 32)) /* [rsp+20h] */

  record_word_offset = 2LL * a1;
  scratch_buffer[0] = dword_140404A6C[4 * a1 + 178322642];
  scratch_buffer[1] = dword_140404A6C[4 * a1 + 178322643];
  scratch_buffer[2] = dword_140404A6C[4 * a1 + 178322644];
  scratch_buffer[3] = dword_140404A6C[4 * a1 + 178322645];
  scaled_index = (int)(3 * dword_140404A6C[4 * a1 + 178322642]);
  weighted_sum = *(float *)&dword_140404A6C[scaled_index + 177167567];
  weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index + 177167568];
  weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index + 177167569];
  scaled_index_2 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  scaled_index_3 = (int)(3 * dword_140404A6C[4 * a1 + 178322644]);
  scaled_index_4 = (int)(3 * dword_140404A6C[4 * a1 + 178322645]);
  weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_4 + 177167568];
  weighted_sum_5 = *(float *)&dword_140404A6C[scaled_index_4 + 177167569];
  state_address = (float)(*(float *)&dword_140404A6C[scaled_index_3 + 177167567] + *(float *)&dword_140404A6C[scaled_index_4 + 177167567])
      + (float)(weighted_sum + *(float *)&dword_140404A6C[scaled_index_2 + 177167567]);
  scaled_index_5 = 3 * mesh_vertex_count;
  scaled_value = state_address * 0.25;
  state_address_2 = (float)((float)(weighted_sum_4 + *(float *)&dword_140404A6C[scaled_index_3 + 177167568])
              + (float)(weighted_sum_2 + *(float *)&dword_140404A6C[scaled_index_2 + 177167568]))
      * 0.25;
  state_address_3 = (float)((float)(weighted_sum_5 + *(float *)&dword_140404A6C[scaled_index_3 + 177167569])
              + (float)(weighted_sum_3 + *(float *)&dword_140404A6C[scaled_index_2 + 177167569]))
      * 0.25;
  *(float *)&dword_140404A6C[scaled_index_5 + 177167567] = (float)((float)((float)(weighted_sum - scaled_value) * a3) + scaled_value) + *a2;
  *(float *)&dword_140404A6C[scaled_index_5 + 177167568] = (float)((float)((float)(weighted_sum_2 - state_address_2) * a4) + state_address_2) + a2[1];
  *(float *)&dword_140404A6C[scaled_index_5 + 177167569] = (float)((float)((float)(weighted_sum_3 - state_address_3) * a5) + state_address_3) + a2[2];
  cached_mesh_vertex_count = mesh_vertex_count;
  scratch_buffer[4] = mesh_vertex_count++;
  scaled_index_6 = (int)(3 * dword_140404A6C[4 * a1 + 178322643]);
  scaled_index_7 = 3 * mesh_vertex_count;
  state_address_4 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 177167568] - state_address_2) * a4) + state_address_2;
  state_address_5 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 177167569] - state_address_3) * a5) + state_address_3;
  *(float *)&dword_140404A6C[scaled_index_7 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_6 + 177167567] - scaled_value)
                                                              * a3)
                                                      + scaled_value)
                                              + *a2;
  *(float *)&dword_140404A6C[scaled_index_7 + 177167568] = state_address_4 + a2[1];
  *(float *)&dword_140404A6C[scaled_index_7 + 177167569] = state_address_5 + a2[2];
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  scratch_buffer[5] = mesh_vertex_count++;
  scaled_index_8 = (int)(3 * dword_140404A6C[2 * record_word_offset + 178322644]);
  scaled_index_9 = 3 * mesh_vertex_count;
  state_address_6 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_8 + 177167568] - state_address_2) * a4) + state_address_2;
  state_address_7 = (float)((float)(*(float *)&dword_140404A6C[scaled_index_8 + 177167569] - state_address_3) * a5) + state_address_3;
  *(float *)&dword_140404A6C[scaled_index_9 + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_8 + 177167567] - scaled_value)
                                                              * a3)
                                                      + scaled_value)
                                              + *a2;
  *(float *)&dword_140404A6C[scaled_index_9 + 177167568] = state_address_6 + a2[1];
  *(float *)&dword_140404A6C[scaled_index_9 + 177167569] = state_address_7 + a2[2];
  cached_mesh_vertex_count_3 = mesh_vertex_count;
  scratch_buffer[6] = mesh_vertex_count++;
  scaled_index_10 = (int)(3 * dword_140404A6C[2 * record_word_offset + 178322645]);
  packed_word_bits = 3 * mesh_vertex_count;
  weighted_sum_6 = *(float *)&dword_140404A6C[scaled_index_10 + 177167568];
  weighted_sum_7 = *(float *)&dword_140404A6C[scaled_index_10 + 177167569];
  *(float *)&dword_140404A6C[packed_word_bits + 177167567] = (float)((float)((float)(*(float *)&dword_140404A6C[scaled_index_10 + 177167567] - scaled_value)
                                                              * a3)
                                                      + scaled_value)
                                              + *a2;
  *(float *)&dword_140404A6C[packed_word_bits + 177167568] = (float)((float)((float)(weighted_sum_6 - state_address_2) * a4) + state_address_2) + a2[1];
  *(float *)&dword_140404A6C[packed_word_bits + 177167569] = (float)((float)((float)(weighted_sum_7 - state_address_3) * a5) + state_address_3) + a2[2];
  LODWORD(packed_word_bits) = mesh_vertex_count;
  scratch_buffer[7] = mesh_vertex_count++;
  dword_140404A6C[2 * record_word_offset + 178322642] = cached_mesh_vertex_count;
  dword_140404A6C[2 * record_word_offset + 178322643] = cached_mesh_vertex_count_2;
  dword_140404A6C[2 * record_word_offset + 178322644] = cached_mesh_vertex_count_3;
  dword_140404A6C[2 * record_word_offset + 178322645] = packed_word_bits;
  state_word = g_16AC43DB0;
  record_byte_offset = &dword_1402B3674;
  do
  {
    loaded_word = *record_byte_offset;
    dword_140404A6C[4 * state_word + 178322642] = scratch_buffer[*(record_byte_offset - 1)];
    table_value = scratch_buffer[loaded_word];
    table_value_2 = record_byte_offset[1];
    dword_140404A6C[4 * g_16AC43DB0 + 178322643] = table_value;
    table_value_3 = scratch_buffer[table_value_2];
    table_value_4 = record_byte_offset[2];
    record_byte_offset += 4;
    dword_140404A6C[4 * g_16AC43DB0 + 178322644] = table_value_3;
    dword_140404A6C[4 * g_16AC43DB0 + 178322645] = scratch_buffer[table_value_4];
    state_word = ++g_16AC43DB0;
  }
  while ( (__int64)record_byte_offset < (__int64)&dword_1402B36B4 );
  return 0; /* the function has no caller */
}
#undef scratch_buffer
#undef unused_frame_slot_32

//----- (0000000140102ED0) ----------------------------------------------------
double            sub_140102ED0(int a1, int a2, char *a3)
{
  double result;
  int input_value;
  int input_value_2;
  __int64 file_handle;
  __int64 file_handle_2;
  unsigned int integer_sum;
  int element_index;
  int running_total;
  int element_index_2;
  unsigned int *state_address;
  signed int element_index_3;
  __int64 running_total_2;
  __int64 remaining_count;
  unsigned int float_word;
  unsigned int float_word_2;
  unsigned int table_value;
  unsigned int *state_address_2;
  __int64 remaining_count_2;
  unsigned int scaled_index;
  unsigned int table_value_2;
  bool comparison_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102ED0[112];
#define scaled_index_2 (*(__int64 (*))(void *)(sr_frame_140102ED0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_140102ED0 + 104)) /* [rsp+88h] */

  input_value = a2;
  input_value_2 = a1;
  file_handle = crt_fopen(a3, "rb");
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    Buffer = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    integer_sum = 0;
    if ( Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      element_index = 0;
      if ( (int)g_16684E3D0 > 0 )
      {
        running_total = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[running_total + 160507482]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[element_index++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          running_total += 3;
        }
        while ( element_index < (int)g_16684E3D0 );
      }
      fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      element_index_2 = 0;
      if ( (int)g_16688E3D4 > 0 )
      {
        state_address = &g_16688E3D8;
        do
        {
          scaled_index_2 = 56LL * element_index_2;
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_2 + 646505432), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          element_index_3 = 0;
          if ( (int)*state_address > 0 )
          {
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_2 + 160573020 + element_index_3]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_2 + 160573024 + 2 * element_index_3++]), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
            }
            while ( element_index_3 < (int)*state_address );
            integer_sum = 0;
          }
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_2 + 646505484), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          ++element_index_2;
          state_address += 14;
        }
        while ( element_index_2 < (int)g_16688E3D4 );
        input_value = a2;
      }
      input_value_2 = a1;
    }
    crt_fclose(file_handle_2);
    mesh_vertex_count = g_16684E3D0;
    if ( (int)g_16684E3D0 > 0 )
    {
      running_total_2 = 0;
      remaining_count = g_16684E3D0;
      do
      {
        float_word = dword_140404A6C[running_total_2 + 160507483];
        float_word_2 = dword_140404A6C[running_total_2 + 160507484];
        table_value = dword_140404A6C[running_total_2 + 160507482];
        dword_140404A6C[running_total_2 + 177167568] = float_word;
        dword_140404A6C[running_total_2 + 177167569] = float_word_2;
        dword_140404A6C[running_total_2 + 177167567] = table_value;
        if ( input_value_2 != 8 )
        {
          *(float *)&dword_140404A6C[running_total_2 + 177167568] = *(float *)&float_word + 0.625;
          *(float *)&dword_140404A6C[running_total_2 + 177167569] = *(float *)&float_word_2 + 0.625;
        }
        running_total_2 += 3;
        --remaining_count;
      }
      while ( remaining_count );
    }
    mesh_triangle_count = 0;
    if ( (int)g_16688E3D4 > 0 )
    {
      state_address_2 = &g_16688E3E0;
      remaining_count_2 = g_16688E3D4;
      do
      {
        scaled_index = *(state_address_2 - 1);
        dword_140404A6C[3 * integer_sum + 177495248] = scaled_index;
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *state_address_2;
        table_value_2 = state_address_2[1];
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = table_value_2;
        integer_sum = mesh_triangle_count + 1;
        comparison_result = *(state_address_2 - 2) == 4;
        ++mesh_triangle_count;
        if ( comparison_result )
        {
          dword_140404A6C[3 * integer_sum + 177495248] = scaled_index;
          dword_140404A6C[3 * mesh_triangle_count + 177495249] = table_value_2;
          dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[2];
          integer_sum = ++mesh_triangle_count;
        }
        state_address_2 += 14;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    return sub_1401449C0(input_value, 1);
  }
  return result;
}
#undef scaled_index_2
#undef Buffer

//----- (0000000140103270) ----------------------------------------------------
double            sub_140103270(int a1, char *a2)
{
  double result;
  int input_value;
  __int64 file_handle;
  __int64 file_handle_2;
  int element_index;
  int running_total;
  int element_index_2;
  unsigned int *state_address;
  __int64 saved_packed_word_bits;
  signed int element_index_3;
  int state_word;
  int iteration_count;
  unsigned int *state_address_2;
  __int64 scaled_index;
  signed int i;
  unsigned __int64 scaled_index_2;
  int state_word_2;
  float *state_address_3;
  __int64 remaining_count;
  float combined_products;
  int masked_bits;
  int state_word_3;
  unsigned int *state_address_4;
  unsigned int *state_address_5;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  unsigned int *state_address_8;
  __int64 remaining_count_2;
  unsigned int loaded_word;
  unsigned int integer_quotient;
  int input_value_2;
  __int64 saved_packed_word_bits_2;
  __int64 cached_buffer;
  __int64 running_total_2;
  unsigned __int64 masked_bits_2;
  __int64 table_value;
  __int64 scaled_index_3;
  unsigned __int64 integer_quotient_2;
  unsigned int *record_byte_offset;
  unsigned __int64 remaining_count_3;
  char *byte_cursor;
  unsigned int scaled_index_4;
  char *state_address_9;
  char *state_address_10;
  char *state_address_11;
  char *state_address_12;
  __int64 remaining_count_4;
  unsigned int *state_address_13;
  char *state_address_14;
  unsigned int loaded_word_2;
  __int64 integer_quotient_3;
  __int64 integer_quotient_4;
  __int64 integer_quotient_5;
  __int64 integer_quotient_6;
  __int64 integer_quotient_7;
  __int64 integer_quotient_8;
  __int64 integer_quotient_9;
  __int64 integer_quotient_10;
  int element_index_4;
  int running_total_3;
  int state_word_4;
  int element_index_5;
  unsigned int *state_address_15;
  signed int j;
  int state_word_5;
  unsigned int *state_address_16;
  __int64 remaining_count_5;
  __int64 remaining_count_6;
  unsigned int *state_address_17;
  unsigned int *state_address_18;
  unsigned int *state_address_19;
  unsigned int loaded_word_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140103270[112];
#define saved_file_handle (*(__int64 (*))(void *)(sr_frame_140103270 + 0)) /* [rsp+20h] */
#define Buffer (*(__int64 (*))(void *)(sr_frame_140103270 + 96)) /* [rsp+80h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140103270 + 104)) /* [rsp+88h] */

  input_value = a1;
  file_handle = crt_fopen(a2, "rb");
  saved_file_handle = file_handle;
  file_handle_2 = file_handle;
  if ( file_handle )
  {
    LODWORD(Buffer) = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle));
    if ( (_DWORD)Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      element_index = 0;
      if ( (int)g_16684E3D0 > 0 )
      {
        running_total = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[running_total + 160507482]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[element_index++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          running_total += 3;
        }
        while ( element_index < (int)g_16684E3D0 );
      }
      fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      element_index_2 = 0;
      if ( (int)g_16688E3D4 > 0 )
      {
        state_address = &g_16688E3D8;
        do
        {
          saved_packed_word_bits = 56LL * element_index_2;
          packed_word_bits = saved_packed_word_bits;
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + saved_packed_word_bits + 646505432), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          element_index_3 = 0;
          if ( (int)*state_address > 0 )
          {
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_2 + 160573020 + element_index_3]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_2 + 160573024 + 2 * element_index_3++]), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
            }
            while ( element_index_3 < (int)*state_address );
            saved_packed_word_bits = packed_word_bits;
          }
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + saved_packed_word_bits + 646505484), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          ++element_index_2;
          state_address += 14;
        }
        while ( element_index_2 < (int)g_16688E3D4 );
        input_value = a1;
      }
    }
    LODWORD(Buffer) = 1;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
    if ( (_DWORD)Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&g_1669A3CB8), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      state_word = g_1669A3CB8;
      iteration_count = 0;
      if ( (int)g_1669A3CB8 > 0 )
      {
        state_address_2 = &g_1669A3CBC;
        do
        {
          scaled_index = 13LL * iteration_count;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 160857236]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
          for ( i = 0; i < (int)*state_address_2; ++i )
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * i + 160857237 + scaled_index]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
          state_word = g_1669A3CB8;
          ++iteration_count;
          state_address_2 += 13;
        }
        while ( iteration_count < (int)g_1669A3CB8 );
        input_value = a1;
      }
    }
    else
    {
      state_word = g_1669A3CB8;
    }
    scaled_index_2 = 180288LL * input_value;
    packed_word_bits = input_value;
    state_word_2 = g_16684E3D0;
    dword_140404A6C[scaled_index_2 / 4 + 335170684] = g_16684E3D0;
    if ( state_word_2 > 0 )
    {
      state_address_3 = (float *)&dword_140404A6C[scaled_index_2 / 4 + 335170687];
      remaining_count = (unsigned int)state_word_2;
      do
      {
        *(_QWORD *)&result = *(unsigned int *)((uintptr_t)state_address_3
                                             + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                             - (uintptr_t)&g_190297C68);
        combined_products = *(float *)((uintptr_t)state_address_3
                       + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                       - (uintptr_t)&g_190297C68);
        masked_bits = *(_DWORD *)((uintptr_t)state_address_3
                        + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                        - (uintptr_t)&g_190297C68);
        *(state_address_3 - 1) = *(float *)&result;
        *state_address_3 = combined_products;
        *((_DWORD *)state_address_3 - 2) = masked_bits;
        if ( input_value != 8 )
        {
          *(float *)&result = *(float *)&result + 0.625;
          *(state_address_3 - 1) = *(float *)&result;
          *state_address_3 = combined_products + 0.625;
        }
        state_address_3 += 3;
        --remaining_count;
      }
      while ( remaining_count );
    }
    state_word_3 = g_16688E3D4;
    state_address_4 = &g_16688E3E0;
    dword_140404A6C[scaled_index_2 / 4 + 335173757] = g_16688E3D4;
    if ( state_word_3 > 0 )
    {
      state_address_5 = &g_16688E3D8;
      state_address_6 = &dword_140404A6C[scaled_index_2 / 4 + 335173759];
      state_address_7 = &g_16688E3E0;
      state_address_8 = &dword_140404A6C[scaled_index_2 / 4 + 335173761];
      remaining_count_2 = (unsigned int)state_word_3;
      do
      {
        state_address_8 += 26;
        *state_address_6 = *state_address_5;
        state_address_5 += 14;
        state_address_6 += 26;
        *(state_address_8 - 27) = *(state_address_7 - 1);
        loaded_word = *state_address_7;
        state_address_7 += 14;
        *(state_address_8 - 26) = loaded_word;
        *(state_address_8 - 25) = *(state_address_7 - 13);
        *(state_address_8 - 24) = *(state_address_7 - 12);
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    integer_quotient = 0;
    dword_140404A6C[scaled_index_2 / 4 + 335200382] = 0;
    if ( state_word > 0 )
    {
      input_value_2 = a1;
      saved_packed_word_bits_2 = packed_word_bits;
      cached_buffer = (unsigned int)state_word;
      running_total_2 = 0;
      Buffer = (unsigned int)state_word;
      masked_bits_2 = scaled_index_2 - (_QWORD)&g_1669A3CC8;
      do
      {
        table_value = (int)dword_140404A6C[running_total_2 + 160857236];
        scaled_index_3 = 0;
        dword_140404A6C[13 * (int)integer_quotient + 335200383 + scaled_index_2 / 4] = 4;
        integer_quotient_2 = scaled_index_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
        *(unsigned int *)((char *)&g_1902B4C90 + integer_quotient_2) = dword_140404A6C[running_total_2 + 160857243];
        *(unsigned int *)((char *)&g_1902B4C94 + integer_quotient_2) = dword_140404A6C[running_total_2 + 160857244];
        *(unsigned int *)((char *)&g_1902B4C98 + integer_quotient_2) = dword_140404A6C[running_total_2 + 160857245];
        if ( table_value >= 4 )
        {
          record_byte_offset = &dword_140404A6C[running_total_2 + 160857239];
          remaining_count_3 = ((unsigned __int64)(table_value - 4) >> 2) + 1;
          scaled_index_3 = 4 * remaining_count_3;
          do
          {
            byte_cursor = (char *)record_byte_offset + masked_bits_2;
            scaled_index_4 = *(record_byte_offset - 2);
            record_byte_offset += 12;
            state_address_9 = &byte_cursor[52 * dword_140404A6C[scaled_index_2 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C6C + (_QWORD)state_address_9) = scaled_index_4;
            *(unsigned int *)((char *)&g_1902B4C70 + (_QWORD)state_address_9) = *(record_byte_offset - 13);
            *(unsigned int *)((char *)&g_1902B4C74 + (_QWORD)state_address_9) = *(record_byte_offset - 12);
            state_address_10 = &byte_cursor[52 * dword_140404A6C[scaled_index_2 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C78 + (_QWORD)state_address_10) = *(record_byte_offset - 11);
            *(unsigned int *)((char *)&g_1902B4C7C + (_QWORD)state_address_10) = *(record_byte_offset - 10);
            *(unsigned int *)((char *)&g_1902B4C80 + (_QWORD)state_address_10) = *(record_byte_offset - 9);
            state_address_11 = &byte_cursor[52 * dword_140404A6C[scaled_index_2 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C84 + (_QWORD)state_address_11) = *(record_byte_offset - 8);
            *(unsigned int *)((char *)&g_1902B4C88 + (_QWORD)state_address_11) = *(record_byte_offset - 7);
            *(unsigned int *)((char *)&g_1902B4C8C + (_QWORD)state_address_11) = *(record_byte_offset - 6);
            state_address_12 = &byte_cursor[52 * dword_140404A6C[scaled_index_2 / 4 + 335200382]];
            *(unsigned int *)((char *)&g_1902B4C90 + (_QWORD)state_address_12) = *(record_byte_offset - 5);
            *(unsigned int *)((char *)&g_1902B4C94 + (_QWORD)state_address_12) = *(record_byte_offset - 4);
            *(unsigned int *)((char *)&g_1902B4C98 + (_QWORD)state_address_12) = *(record_byte_offset - 3);
            --remaining_count_3;
          }
          while ( remaining_count_3 );
          input_value_2 = a1;
          cached_buffer = Buffer;
          saved_packed_word_bits_2 = a1;
        }
        if ( scaled_index_3 < table_value )
        {
          remaining_count_4 = table_value - scaled_index_3;
          state_address_13 = &dword_140404A6C[3 * scaled_index_3 + 160857239 + running_total_2];
          do
          {
            state_address_14 = (char *)&state_address_13[13 * dword_140404A6C[scaled_index_2 / 4 + 335200382]] + masked_bits_2;
            *(unsigned int *)((char *)&g_1902B4C6C + (_QWORD)state_address_14) = *(state_address_13 - 2);
            *(unsigned int *)((char *)&g_1902B4C70 + (_QWORD)state_address_14) = *(state_address_13 - 1);
            loaded_word_2 = *state_address_13;
            state_address_13 += 3;
            *(unsigned int *)((char *)&g_1902B4C74 + (_QWORD)state_address_14) = loaded_word_2;
            --remaining_count_4;
          }
          while ( remaining_count_4 );
        }
        if ( input_value_2 != 8 )
        {
          integer_quotient_3 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C70 + integer_quotient_3) = *(float *)((char *)&g_1902B4C70 + integer_quotient_3)
                                                                + 0.625;
          integer_quotient_4 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C74 + integer_quotient_4) = *(float *)((char *)&g_1902B4C74 + integer_quotient_4)
                                                                + 0.625;
          integer_quotient_5 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C7C + integer_quotient_5) = *(float *)((char *)&g_1902B4C7C + integer_quotient_5)
                                                                + 0.625;
          integer_quotient_6 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C80 + integer_quotient_6) = *(float *)((char *)&g_1902B4C80 + integer_quotient_6)
                                                                + 0.625;
          integer_quotient_7 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C88 + integer_quotient_7) = *(float *)((char *)&g_1902B4C88 + integer_quotient_7)
                                                                + 0.625;
          integer_quotient_8 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C8C + integer_quotient_8) = *(float *)((char *)&g_1902B4C8C + integer_quotient_8)
                                                                + 0.625;
          integer_quotient_9 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(float *)((char *)&g_1902B4C94 + integer_quotient_9) = *(float *)((char *)&g_1902B4C94 + integer_quotient_9)
                                                                + 0.625;
          integer_quotient_10 = 180288 * saved_packed_word_bits_2 + 52LL * (int)dword_140404A6C[scaled_index_2 / 4 + 335200382];
          *(_QWORD *)&result = *(unsigned int *)((char *)&g_1902B4C98 + integer_quotient_10);
          *(float *)&result = *(float *)&result + 0.625;
          *(unsigned int *)((char *)&g_1902B4C98 + integer_quotient_10) = LODWORD(result);
        }
        running_total_2 += 13;
        integer_quotient = dword_140404A6C[scaled_index_2 / 4 + 335200382] + 1;
        masked_bits_2 -= 52LL;
        --cached_buffer;
        dword_140404A6C[scaled_index_2 / 4 + 335200382] = integer_quotient;
        Buffer = cached_buffer;
      }
      while ( cached_buffer );
      file_handle_2 = saved_file_handle;
      state_address_4 = &g_16688E3E0;
    }
    if ( a1 == 8 )
    {
      LODWORD(Buffer) = 2;
      fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
      if ( (_DWORD)Buffer == 2 )
      {
        fread_sr((void *)(uintptr_t)(&g_16684E3CC), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        fread_sr((void *)(uintptr_t)(&g_16684E3D0), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        element_index_4 = 0;
        if ( (int)g_16684E3D0 > 0 )
        {
          running_total_3 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[running_total_3 + 160507482]), 4, 3, (FILE *)(uintptr_t)(file_handle_2));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[element_index_4++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            running_total_3 += 3;
          }
          while ( element_index_4 < (int)g_16684E3D0 );
        }
        fread_sr((void *)(uintptr_t)(&g_16688E3D4), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
        state_word_4 = g_16688E3D4;
        LODWORD(packed_word_bits) = 0;
        if ( (int)g_16688E3D4 > 0 )
        {
          element_index_5 = packed_word_bits;
          state_address_15 = &g_16688E3D8;
          do
          {
            packed_word_bits = 56LL * element_index_5;
            fread_sr((void *)(uintptr_t)((char *)&g_16688E3D8 + packed_word_bits), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            for ( j = 0; j < (int)*state_address_15; ++j )
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_5 + 160573020 + j]), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * element_index_5 + 160573024 + 2 * j]), 4, 2, (FILE *)(uintptr_t)(file_handle_2));
            }
            fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + packed_word_bits + 646505484), 4, 1, (FILE *)(uintptr_t)(file_handle_2));
            state_word_4 = g_16688E3D4;
            ++element_index_5;
            state_address_15 += 14;
          }
          while ( element_index_5 < (int)g_16688E3D4 );
          state_address_4 = &g_16688E3E0;
        }
      }
      else
      {
        state_word_4 = g_16688E3D4;
      }
      state_word_5 = g_16684E3D0;
      dword_140404A6C[scaled_index_2 / 4 + 335161466] = g_16684E3D0;
      if ( state_word_5 > 0 )
      {
        state_address_16 = &dword_140404A6C[scaled_index_2 / 4 + 335161469];
        remaining_count_5 = (unsigned int)state_word_5;
        do
        {
          *(state_address_16 - 2) = *(unsigned int *)((uintptr_t)state_address_16
                                       + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507482]
                                       - (uintptr_t)&g_19028EC60);
          *(state_address_16 - 1) = *(unsigned int *)((uintptr_t)state_address_16
                                       + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507483]
                                       - (uintptr_t)&g_19028EC60);
          *state_address_16 = *(unsigned int *)((uintptr_t)state_address_16
                                 + (uintptr_t)&dword_140404A6C[scaled_index_2 / 0xFFFFFFFFFFFFFFFCuLL + 160507484]
                                 - (uintptr_t)&g_19028EC60);
          state_address_16 += 3;
          --remaining_count_5;
        }
        while ( remaining_count_5 );
      }
      dword_140404A6C[scaled_index_2 / 4 + 335164539] = state_word_4;
      if ( state_word_4 > 0 )
      {
        remaining_count_6 = (unsigned int)state_word_4;
        state_address_17 = &g_1903F1E60;
        state_address_18 = &g_16688E3D8;
        state_address_19 = &g_1903F1E68;
        do
        {
          state_address_19 += 6;
          *state_address_17 = *state_address_18;
          state_address_17 += 6;
          state_address_18 += 14;
          *(state_address_19 - 7) = *(state_address_4 - 1);
          loaded_word_3 = *state_address_4;
          state_address_4 += 14;
          *(state_address_19 - 6) = loaded_word_3;
          *(state_address_19 - 5) = *(state_address_4 - 13);
          *(state_address_19 - 4) = *(state_address_4 - 12);
          --remaining_count_6;
        }
        while ( remaining_count_6 );
      }
    }
    crt_fclose(file_handle_2);
  }
  return result;
}
#undef saved_file_handle
#undef Buffer
#undef packed_word_bits

//----- (00000001401048E0) ----------------------------------------------------
double            sub_1401048E0(double result, int a2, char *a3)
{
  FILE *file_handle;
  __int64 file_handle_2;
  __int64 running_total;
  __int64 remaining_count;
  unsigned int integer_sum;
  unsigned int *state_address;
  signed int state_word;
  unsigned int *buffer_cursor;
  unsigned int *state_address_2;
  __int64 remaining_count_2;
  __int64 scaled_index;
  unsigned int float_word;
  unsigned int float_word_2;
  unsigned int float_word_3;
  unsigned int float_word_4;
  unsigned int float_word_5;
  signed int iteration_count;
  float *state_address_3;
  unsigned int masked_bits;
  unsigned int float_word_6;
  unsigned int float_word_7;
  float weighted_sum;

  file_handle = (FILE *)crt_fopen(a3, "rb");
  file_handle_2 = (__int64)file_handle;
  if ( file_handle )
  {
    sub_140091310(file_handle, 0);
    crt_fclose(file_handle_2);
    mesh_vertex_count = g_16677E3C4;
    if ( (int)g_16677E3C4 > 0 )
    {
      running_total = 0;
      remaining_count = g_16677E3C4;
      do
      {
        dword_140404A6C[running_total + 177167567] = dword_140404A6C[running_total + 160294487];
        dword_140404A6C[running_total + 177167568] = dword_140404A6C[running_total + 160294488];
        dword_140404A6C[running_total + 177167569] = dword_140404A6C[running_total + 160294489];
        running_total += 3;
        --remaining_count;
      }
      while ( remaining_count );
    }
    integer_sum = 0;
    mesh_triangle_count = 0;
    if ( (int)g_1667AE3C8 > 0 )
    {
      state_address = &g_1667EE3D0;
      state_word = g_1665C4B40;
      buffer_cursor = &g_1667DE3CC;
      state_address_2 = &g_1667AE3D0;
      remaining_count_2 = g_1667AE3C8;
      do
      {
        dword_140404A6C[3 * integer_sum + 177495248] = *(state_address_2 - 1);
        dword_140404A6C[3 * mesh_triangle_count + 177495249] = *state_address_2;
        dword_140404A6C[3 * mesh_triangle_count + 177495250] = state_address_2[1];
        scaled_index = (int)*buffer_cursor;
        if ( (unsigned int)scaled_index > 0xFF )
        {
          *(float *)&float_word_6 = (float)(*(float *)state_address * 0.75) + 0.25;
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = *(state_address - 1);
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = float_word_6;
          *(float *)&float_word_7 = (float)(*((float *)state_address + 2) * 0.75) + 0.25;
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = state_address[1];
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = float_word_7;
          weighted_sum = *((float *)state_address + 4);
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = state_address[3];
          *(float *)&dword_140404A6C[6 * mesh_triangle_count + 178011350] = (float)(weighted_sum * 0.75) + 0.25;
        }
        else
        {
          float_word = dword_140404A6C[6 * scaled_index + 160292955];
          float_word_2 = dword_140404A6C[6 * scaled_index + 160292954];
          float_word_3 = dword_140404A6C[6 * scaled_index + 160292952];
          float_word_4 = dword_140404A6C[6 * scaled_index + 160292951];
          float_word_5 = dword_140404A6C[6 * scaled_index + 160292950];
          iteration_count = 0;
          if ( state_word <= 0 )
          {
LABEL_16:
            if ( state_word <= 0x10000 )
            {
              dword_140404A6C[6 * state_word + 159842358] = float_word_5;
              dword_140404A6C[6 * g_1665C4B40 + 159842359] = float_word_4;
              dword_140404A6C[6 * g_1665C4B40 + 159842360] = float_word_3;
              dword_140404A6C[6 * g_1665C4B40 + 159842362] = float_word_2;
              dword_140404A6C[6 * g_1665C4B40 + 159842363] = float_word;
              state_word = g_1665C4B40 + 1;
              g_1665C4B40 = state_word;
              LOBYTE(iteration_count) = state_word - 1;
            }
            else
            {
              LOBYTE(iteration_count) = 0;
            }
          }
          else
          {
            state_address_3 = (float *)&g_1665C4B48;
            while ( *(float *)&float_word_5 != *(state_address_3 - 1)
                 || *(float *)&float_word_4 != *state_address_3
                 || *(float *)&float_word_3 != state_address_3[1]
                 || *(float *)&float_word_2 != state_address_3[3]
                 || *(float *)&float_word != state_address_3[4] )
            {
              ++iteration_count;
              state_address_3 += 6;
              if ( iteration_count >= state_word )
                goto LABEL_16;
            }
          }
          *(float *)&masked_bits = (float)((float)(iteration_count & 0xF) * 0.03125) + 0.015625;
          dword_140404A6C[6 * mesh_triangle_count + 178011345] = masked_bits;
          dword_140404A6C[6 * mesh_triangle_count + 178011346] = 1065353216;
          dword_140404A6C[6 * mesh_triangle_count + 178011347] = masked_bits;
          dword_140404A6C[6 * mesh_triangle_count + 178011348] = 1065353216;
          dword_140404A6C[6 * mesh_triangle_count + 178011349] = masked_bits;
          dword_140404A6C[6 * mesh_triangle_count + 178011350] = 1065353216;
        }
        state_address_2 += 3;
        integer_sum = mesh_triangle_count + 1;
        ++buffer_cursor;
        state_address += 6;
        ++mesh_triangle_count;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    return sub_1401449C0(a2, 1);
  }
  return result;
}

//----- (0000000140104EA0) ----------------------------------------------------
__int64            sub_140104EA0(int a1, __int64 a2, double a3)
{
  float scaled_value;
  __int64 input_value;
  double saved_scaled_value;
  __int64 record_word_offset;
  __m128 vector_result;
  unsigned int float_word;
  __int64 scaled_index;
  __m128 vector_result_2;
  __int64 scaled_index_2;
  __m128 vector_result_3;
  unsigned int float_word_2;
  __int64 scaled_index_3;
  __m128 vector_result_4;
  unsigned int reordered_vector;
  __int64 result;
  float weighted_sum;
  float component_delta;
  float weighted_sum_2;
  float weighted_sum_3;

  scaled_value = 0.25;
  if ( BYTE1(g_183F7CA40) )
    scaled_value = 1.0;
  if ( LOBYTE(g_183F7CA40) )
  {
    if ( BYTE1(g_183F7CA40) )
      scaled_value = scaled_value * 16.0;
    else
      scaled_value = scaled_value * 0.125;
  }
  input_value = a1;
  saved_scaled_value = scaled_value;
  if ( BYTE2(g_183F7C978) )
  {
    record_word_offset = 7LL * a1;
    vector_result = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[record_word_offset + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, vector_result, u64) * saved_scaled_value + *(float *)&dword_140404A6C[record_word_offset + 284024381];
    *(float *)&float_word = a3;
    dword_140404A6C[record_word_offset + 284024381] = float_word;
    *(float *)&dword_140404A6C[record_word_offset + 284024383] = *(float *)&dword_140404A6C[record_word_offset + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * saved_scaled_value;
  }
  if ( BYTE2(g_183F7C974) )
  {
    scaled_index = 7 * input_value;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381] - *(double *)SR_VEC_LANES(128, vector_result_2, u64) * saved_scaled_value;
    SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * saved_scaled_value
                    + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    *(float *)&dword_140404A6C[scaled_index + 284024381] = a3;
    dword_140404A6C[scaled_index + 284024383] = SR_VEC_LANES(128, vector_result_2, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    scaled_index_2 = 7 * input_value;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
    *(float *)&float_word_2 = a3;
    dword_140404A6C[scaled_index_2 + 284024381] = float_word_2;
    *(float *)&dword_140404A6C[scaled_index_2 + 284024383] = *(float *)&dword_140404A6C[scaled_index_2 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    scaled_index_3 = 7 * input_value;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * saved_scaled_value
                   + *(float *)&dword_140404A6C[7 * input_value + 284024381];
    SR_VEC_LANES(128, vector_result_4, f32)[0] = *(double *)SR_VEC_LANES(128, vector_result_4, u64) * saved_scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    dword_140404A6C[scaled_index_3 + 284024381] = reordered_vector;
    dword_140404A6C[scaled_index_3 + 284024383] = SR_VEC_LANES(128, vector_result_4, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = *(float *)&dword_140404A6C[7 * input_value + 284024382] - scaled_value;
  result = 7 * input_value;
  weighted_sum = *(float *)&dword_140404A6C[7 * input_value + 284024386];
  component_delta = 1.0 - weighted_sum;
  if ( g_183F7C754 )
  {
    *(float *)&dword_140404A6C[result + 284024384] = (float)((float)(g_183F7C6C8 * component_delta)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024384];
    *(float *)&dword_140404A6C[result + 284024385] = (float)((float)(g_183F7C6CC * component_delta)
                                                           * 0.003125)
                                                   + *(float *)&dword_140404A6C[result + 284024385];
  }
  weighted_sum_2 = 0.0;
  weighted_sum_3 = (float)((float)(int)g_160FC481C * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( weighted_sum_3 >= 0.0 )
  {
    weighted_sum_2 = (float)((float)(int)g_160FC481C * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
    if ( weighted_sum_3 > 0.875 )
      weighted_sum_2 = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = weighted_sum_2;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(weighted_sum_2 - weighted_sum) * 0.0625) + weighted_sum;
  return result * 4;
}

//----- (0000000140105180) ----------------------------------------------------
__int64            sub_140105180(int a1, __int64 a2, double a3)
{
  float scaled_value;
  __int64 input_value;
  double saved_scaled_value;
  __int64 record_word_offset;
  __m128 vector_result;
  unsigned int float_word;
  __int64 scaled_index;
  __m128 vector_result_2;
  __int64 scaled_index_2;
  __m128 vector_result_3;
  unsigned int float_word_2;
  __int64 scaled_index_3;
  __m128 vector_result_4;
  unsigned int reordered_vector;
  __int64 result;
  bool comparison_result;
  float weighted_sum;
  float weighted_sum_2;
  float combined_products;
  float combined_products_2;

  scaled_value = 0.25;
  if ( BYTE1(g_183F7CA40) )
    scaled_value = 1.0;
  if ( LOBYTE(g_183F7CA40) )
    scaled_value = scaled_value * 0.25;
  input_value = a1;
  saved_scaled_value = scaled_value;
  if ( BYTE2(g_183F7C978) )
  {
    record_word_offset = 7LL * a1;
    vector_result = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[record_word_offset + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, vector_result, u64) * saved_scaled_value + *(float *)&dword_140404A6C[record_word_offset + 284024381];
    *(float *)&float_word = a3;
    dword_140404A6C[record_word_offset + 284024381] = float_word;
    *(float *)&dword_140404A6C[record_word_offset + 284024383] = *(float *)&dword_140404A6C[record_word_offset + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * saved_scaled_value;
  }
  if ( BYTE2(g_183F7C974) )
  {
    scaled_index = 7 * input_value;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381] - *(double *)SR_VEC_LANES(128, vector_result_2, u64) * saved_scaled_value;
    SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * saved_scaled_value
                    + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    *(float *)&dword_140404A6C[scaled_index + 284024381] = a3;
    dword_140404A6C[scaled_index + 284024383] = SR_VEC_LANES(128, vector_result_2, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    scaled_index_2 = 7 * input_value;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
    *(float *)&float_word_2 = a3;
    dword_140404A6C[scaled_index_2 + 284024381] = float_word_2;
    *(float *)&dword_140404A6C[scaled_index_2 + 284024383] = *(float *)&dword_140404A6C[scaled_index_2 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    scaled_index_3 = 7 * input_value;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * saved_scaled_value
                   + *(float *)&dword_140404A6C[7 * input_value + 284024381];
    SR_VEC_LANES(128, vector_result_4, f32)[0] = *(double *)SR_VEC_LANES(128, vector_result_4, u64) * saved_scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    dword_140404A6C[scaled_index_3 + 284024381] = reordered_vector;
    dword_140404A6C[scaled_index_3 + 284024383] = SR_VEC_LANES(128, vector_result_4, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = *(float *)&dword_140404A6C[7 * input_value + 284024382] - scaled_value;
  result = 7 * input_value;
  comparison_result = g_151E46198 == 0;
  weighted_sum = *(float *)&dword_140404A6C[7 * input_value + 284024385];
  *(float *)&dword_140404A6C[7 * input_value + 284024384] = (float)(g_183F7C6C8 * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * input_value + 284024384];
  if ( comparison_result )
    weighted_sum_2 = (float)(g_183F7C6CC * 0.003125) + weighted_sum;
  else
    weighted_sum_2 = weighted_sum - (float)(g_183F7C6CC * 0.003125);
  *(float *)&dword_140404A6C[result + 284024385] = weighted_sum_2;
  if ( weighted_sum_2 >= -1.570796326795 )
  {
    if ( weighted_sum_2 > 1.570796326795 )
      dword_140404A6C[result + 284024385] = 1070141403;
  }
  else
  {
    dword_140404A6C[result + 284024385] = -1077342245;
  }
  combined_products = 2.0;
  combined_products_2 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)g_160FC481C;
  if ( combined_products_2 >= 2.0 )
  {
    combined_products = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)g_160FC481C;
    if ( combined_products_2 > 32.0 )
      combined_products = 32.0;
  }
  *(float *)&dword_140404A6C[result + 284024387] = combined_products;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(combined_products - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

//----- (0000000140105470) ----------------------------------------------------
__int64            sub_140105470(int a1, __int64 a2, double a3)
{
  float scaled_value;
  __int64 input_value;
  double saved_scaled_value;
  __int64 record_word_offset;
  __m128 vector_result;
  unsigned int float_word;
  __int64 scaled_index;
  __m128 vector_result_2;
  __int64 scaled_index_2;
  __m128 vector_result_3;
  unsigned int float_word_2;
  __int64 scaled_index_3;
  __m128 vector_result_4;
  unsigned int reordered_vector;
  __int64 result;
  bool comparison_result;
  float combined_products;
  float weighted_sum;
  float weighted_sum_2;
  float state_scalar;
  float saved_weighted_sum;
  float weighted_sum_3;

  scaled_value = 0.25;
  if ( BYTE1(g_183F7CA40) )
    scaled_value = 1.0;
  if ( LOBYTE(g_183F7CA40) )
    scaled_value = scaled_value * 0.25;
  input_value = a1;
  saved_scaled_value = scaled_value;
  if ( BYTE2(g_183F7C978) )
  {
    record_word_offset = 7LL * a1;
    vector_result = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[record_word_offset + 284024384], a2, a3));
    a3 = *(double *)SR_VEC_LANES(128, vector_result, u64) * saved_scaled_value + *(float *)&dword_140404A6C[record_word_offset + 284024381];
    *(float *)&float_word = a3;
    dword_140404A6C[record_word_offset + 284024381] = float_word;
    *(float *)&dword_140404A6C[record_word_offset + 284024383] = *(float *)&dword_140404A6C[record_word_offset + 284024383]
                                               - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * saved_scaled_value;
  }
  if ( BYTE2(g_183F7C974) )
  {
    scaled_index = 7 * input_value;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381] - *(double *)SR_VEC_LANES(128, vector_result_2, u64) * saved_scaled_value;
    SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * saved_scaled_value
                    + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    *(float *)&dword_140404A6C[scaled_index + 284024381] = a3;
    dword_140404A6C[scaled_index + 284024383] = SR_VEC_LANES(128, vector_result_2, i32)[0];
  }
  if ( LOBYTE(g_183F7C964) )
  {
    scaled_index_2 = 7 * input_value;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    a3 = *(float *)&dword_140404A6C[7 * input_value + 284024381]
       - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * saved_scaled_value;
    *(float *)&float_word_2 = a3;
    dword_140404A6C[scaled_index_2 + 284024381] = float_word_2;
    *(float *)&dword_140404A6C[scaled_index_2 + 284024383] = *(float *)&dword_140404A6C[scaled_index_2 + 284024383]
                                                - *(double *)SR_VEC_LANES(128, vector_result_3, u64) * saved_scaled_value;
  }
  if ( HIBYTE(g_183F7C964) )
  {
    scaled_index_3 = 7 * input_value;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(*(float *)&dword_140404A6C[7 * input_value + 284024384], a2, a3));
    *(float *)&reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * saved_scaled_value
                   + *(float *)&dword_140404A6C[7 * input_value + 284024381];
    SR_VEC_LANES(128, vector_result_4, f32)[0] = *(double *)SR_VEC_LANES(128, vector_result_4, u64) * saved_scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024383];
    dword_140404A6C[scaled_index_3 + 284024381] = reordered_vector;
    dword_140404A6C[scaled_index_3 + 284024383] = SR_VEC_LANES(128, vector_result_4, i32)[0];
  }
  if ( LOBYTE(g_183F7C974) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = scaled_value + *(float *)&dword_140404A6C[7 * input_value + 284024382];
  if ( BYTE1(g_183F7C97C) )
    *(float *)&dword_140404A6C[7 * input_value + 284024382] = *(float *)&dword_140404A6C[7 * input_value + 284024382] - scaled_value;
  result = 7 * input_value;
  comparison_result = g_151E46198 == 0;
  combined_products = 1.0 - *(float *)&dword_140404A6C[7 * input_value + 284024386];
  weighted_sum = *(float *)&dword_140404A6C[7 * input_value + 284024385];
  *(float *)&dword_140404A6C[7 * input_value + 284024384] = (float)((float)(g_183F7C6C8 * combined_products)
                                                         * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * input_value + 284024384];
  if ( comparison_result )
    weighted_sum_2 = (float)((float)(g_183F7C6CC * combined_products) * 0.003125) + weighted_sum;
  else
    weighted_sum_2 = weighted_sum - (float)((float)(g_183F7C6CC * combined_products) * 0.003125);
  state_scalar = (float)(int)g_160FC481C;
  *(float *)&dword_140404A6C[result + 284024385] = weighted_sum_2;
  saved_weighted_sum = 0.0;
  weighted_sum_3 = (float)(state_scalar * 0.125) + *(float *)&dword_140404A6C[result + 284024387];
  if ( weighted_sum_3 >= 0.0 )
  {
    saved_weighted_sum = weighted_sum_3;
    if ( weighted_sum_3 > 0.875 )
      saved_weighted_sum = 0.875;
  }
  *(float *)&dword_140404A6C[result + 284024387] = saved_weighted_sum;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(saved_weighted_sum - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

