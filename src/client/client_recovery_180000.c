#include "shared_client.h"

//----- (0000000140187180) ----------------------------------------------------
float            sub_140187180(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float component_delta;
  float scaled_value;
  float scaled_value_2;
  float unused_local;

  component_delta = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(component_delta * a3) + (float)(a2 * a6);
  scaled_value = a2 * a6;
  scaled_value_2 = component_delta * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * component_delta) + scaled_value) * a2) + (float)(scaled_value_2 * component_delta);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(component_delta * component_delta) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * component_delta) + scaled_value) * a2))
                 * a2)
         + (float)((float)(scaled_value_2 * component_delta) * component_delta);
  return unused_local;
}

//----- (0000000140187270) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_140187270(float a1, float a2, float a3, double a4, float a5)
{
  __int128 state_address;

  state_address = *(_OWORD *)&a4;
  *(float *)&state_address = (float)((float)((float)((float)((float)((float)(*(float *)&a4 * 3.0) * (float)(1.0 - a1))
                                                + (float)(a1 * a5))
                                        * a1)
                                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)(a3 * 3.0)))
                        * a1)
                + (float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)((float)(1.0 - a1) * a2));
  return (__m128)state_address;
}

// 140187270: inconsistent variable size for 'xmm3_8.8'

//----- (00000001401872F0) ----------------------------------------------------
float            sub_1401872F0(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float component_sum;
  float unused_local;

  if ( a1 == 1 )
    return a6 - a3;
  component_sum = a2 + a2;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a3 - (float)(a4 + a4)) + a6) * component_sum) - (float)(a3 + a3)) + (float)(a4 + a4);
  if ( a1 == 3 )
    return (float)((float)((float)((float)((float)((float)((float)((float)(a4 * 3.0) - a3) - (float)(a5 * 3.0)) + a6)
                                         * a2)
                                 * (float)(a2 * 3.0))
                         + (float)((float)((float)((float)(a3 * 3.0) - (float)(a4 * 6.0)) + (float)(a5 * 3.0)) * component_sum))
                 - (float)(a3 * 3.0))
         + (float)(a4 * 3.0);
  return unused_local;
}

//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sub_1401880C0(     __m128i *a1, unsigned int a2)
{
  __m128i *result;

  if ( a2 <= 0x400 )
  {
    g_1829F8BD4 = a2;
    result = crt_memcpy((__m128i *)&g_1829F8BD8, a1, a2);
    g_1829F8FD8 = 1;
  }
  return result;
}

//----- (000000014018C250) ----------------------------------------------------
void            sub_14018C250(int a1)
{
  __int64 record_word_offset;
  __int64 remaining_count;
  signed int state_word;
  unsigned int *buffer_cursor;
  __int64 saved_state_word;
  unsigned int loaded_word;

  if ( a1 != -1 )
  {
    record_word_offset = 396LL * a1;
    remaining_count = (int)dword_140404A6C[record_word_offset + 225426186];
    if ( remaining_count > 0 )
    {
      state_word = g_15FD06200;
      buffer_cursor = &dword_140404A6C[record_word_offset + 225426187];
      do
      {
        saved_state_word = state_word;
        loaded_word = *buffer_cursor++;
        dword_140404A6C[saved_state_word + 132384230] = loaded_word;
        state_word = ++g_15FD06200;
        --remaining_count;
      }
      while ( remaining_count );
    }
  }
}

//----- (000000014018C2B0) ----------------------------------------------------
void            sub_14018C2B0(_DWORD *a1, int *a2)
{
  int loaded_word;
  int table_value;
  int table_value_2;
  int table_value_3;
  int table_value_4;
  int table_value_5;
  int table_value_6;
  int table_value_7;

  loaded_word = *a2;
  table_value = a2[3];
  table_value_2 = a2[4];
  table_value_3 = a2[6];
  table_value_4 = a2[7];
  table_value_5 = a2[8];
  table_value_6 = a2[5];
  table_value_7 = a2[1];
  a1[6] = a2[2];
  a1[3] = table_value_7;
  a1[7] = table_value_6;
  *a1 = loaded_word;
  a1[1] = table_value;
  a1[2] = table_value_3;
  a1[4] = table_value_2;
  a1[5] = table_value_4;
  a1[8] = table_value_5;
}

//----- (000000014018C340) ----------------------------------------------------
void            sub_14018C340(int a1)
{
  __m128 converted_vector;
  __m128 converted_vector_2;
  float weighted_sum;
  __m128 converted_vector_3;
  __m128 converted_vector_4;
  _DWORD sr_branch_position[3];
  float sr_branch_axis[3];
  _DWORD sr_branch_position2[3];
  _DWORD sr_branch_matrix[9];
  _DWORD sr_branch_matrix2[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018C340[192];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14018C340 + 0)) /* [rsp+8h] */
#define unused_frame_slot_176 (*(__int64 (*))(void *)(sr_frame_14018C340 + 176)) /* [rsp+B8h] */

  (*(__int128 *)sr_branch_matrix) = xmmword_140278D30;
  mesh_vertex_count = 0;
  (*(__int128 *)(sr_branch_matrix + 4)) = xmmword_140278D30;
  mesh_triangle_count = 0;
  sr_branch_matrix[8] = 1065353216;
  g_16AD03DB4 = 0;
  (*(unsigned __int64 *)sr_branch_position) = 0;
  (*(float *)&sr_branch_position[2]) = 0.0;
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1056964608), 0.375, 4.0);
  converted_vector = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  converted_vector_2 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, converted_vector, f32)[0] = *((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 4.0;
  sr_branch_axis[1] = 0.0;
  SR_VEC_LANES(128, converted_vector_2, f32)[0] = *(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 4.0;
  weighted_sum = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(converted_vector, converted_vector_2), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(float *)&sr_branch_position[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  (*(_DWORD *)&sr_branch_axis[2]) = 1064852291;
  sr_branch_axis[0] = 0.24253564;
  (*(float *)&sr_branch_position2[2]) = *((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 4.0;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1052770304), 0.25, 3.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1044381696), 0.125, 3.0);
  converted_vector_3 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(__int128 *)sr_branch_matrix)))));
  SR_VEC_LANES(128, converted_vector_3, f32)[0] = (float)(*((float *)&(*(__int128 *)sr_branch_matrix) + 3) * 3.0) + SR_VEC_LANES(128, converted_vector, f32)[0];
  converted_vector_4 = ((__m128)_mm_cvtsi32_si128((int)((*(__int128 *)(sr_branch_matrix + 4)))));
  (*(__int128 *)(sr_branch_matrix2 + 4)) = (*(__int128 *)(sr_branch_matrix + 4));
  SR_VEC_LANES(128, converted_vector_4, f32)[0] = (float)(*(float *)&(*(__int128 *)(sr_branch_matrix + 4)) * 3.0) + SR_VEC_LANES(128, converted_vector_2, f32)[0];
  (*(float *)&sr_branch_position[2]) = (float)(*((float *)&(*(__int128 *)(sr_branch_matrix + 4)) + 1) * 3.0) + weighted_sum;
  (*(__int128 *)sr_branch_matrix2) = (*(__int128 *)sr_branch_matrix);
  (*(unsigned __int64 *)sr_branch_position) = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(converted_vector_3, converted_vector_4), u64)[0];
  (*(unsigned __int64 *)sr_branch_position2) = (*(unsigned __int64 *)sr_branch_position);
  sr_branch_matrix2[8] = sr_branch_matrix[8];
  (*(_DWORD *)&sr_branch_axis[2]) = -1087044365;
  sr_branch_axis[0] = 0.70710677;
  (*(float *)&sr_branch_position2[2]) = (*(float *)&sr_branch_position[2]);
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_branch_matrix), sr_branch_axis, sr_export_float_lane_container(1040187392));
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)sr_branch_matrix2), sr_branch_axis, sr_export_float_lane_container(3210739712LL));
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position), (float *)&(*(__int128 *)sr_branch_matrix), sr_export_float_lane_container(1048576000), 0.1875, 2.0);
  sub_14018C6A0((float *)&(*(unsigned __int64 *)sr_branch_position2), (float *)&(*(__int128 *)sr_branch_matrix2), sr_export_float_lane_container(1040187392), 0.09375, 2.0);
  sub_1401449C0(a1, 1);
  return;
}
#undef unused_frame_slot_0
#undef unused_frame_slot_176

//----- (000000014018C6A0) ----------------------------------------------------
__int64            sub_14018C6A0(float *a1, float *a2, double a3, float a4, float a5)
{
  unsigned int cached_mesh_vertex_count;
  unsigned int cached_mesh_vertex_count_2;
  __m128 converted_vector;
  __int64 remaining_count;
  float scaled_value;
  __m128d converted_vector_2;
  __m128 vector_result;
  double scaled_value_2;
  __int64 scaled_index;
  double reordered_vector;
  float scaled_value_3;
  float product_difference;
  float saved_scaled_value;
  double float_word;
  float weighted_sum;
  float weighted_sum_2;
  unsigned int float_word_2;
  float scaled_value_4;
  float scaled_value_5;
  unsigned int scaled_index_2;
  float product_difference_2;
  float weighted_sum_3;
  float scaled_value_6;
  float weighted_sum_4;
  unsigned int float_word_3;
  float scaled_value_7;
  float scaled_value_8;
  unsigned int integer_sum;
  __m128d converted_vector_3;
  __int64 unrecovered_register_value;
  __m128 vector_result_2;
  double scaled_value_9;
  __int64 scaled_index_3;
  double reordered_vector_2;
  float scaled_value_10;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  unsigned int masked_bits;
  float scaled_value_11;
  __int64 scaled_index_4;
  float product_difference_3;
  float scaled_value_12;
  float scaled_value_13;
  float scaled_value_14;
  float component_delta;
  float component_sum;
  int scaled_index_5;
  unsigned int integer_sum_2;
  int running_total;
  __int64 remaining_count_2;
  unsigned int float_word_4;
  unsigned int float_word_5;
  unsigned int float_word_6;
  float scaled_value_15;
  float scaled_value_16;
  __int64 scaled_index_6;
  float scaled_value_17;
  unsigned int running_total_2;
  unsigned int float_word_7;
  unsigned int float_word_8;
  unsigned int float_word_9;
  unsigned int integer_sum_3;
  __int64 result;
  unsigned int scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  unsigned int scaled_index_12;
  __int64 scaled_index_13;
  unsigned int integer_sum_4;
  __int64 scaled_index_14;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  unsigned int scaled_index_17;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  __int64 scaled_index_20;
  __int64 scaled_index_21;

  cached_mesh_vertex_count = mesh_vertex_count;
  cached_mesh_vertex_count_2 = mesh_vertex_count;
  converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  remaining_count = 3;
  scaled_value = *(float *)&a3;
  do
  {
    converted_vector_2 = _mm_cvtps_pd(converted_vector);
    vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_2, f64)[0], (__int64)a2, a3));
    scaled_value_2 = *(double *)SR_VEC_LANES(128, vector_result, u64);
    scaled_index = (int)(3 * cached_mesh_vertex_count);
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0];
    scaled_value_3 = scaled_value * reordered_vector;
    product_difference = -(scaled_value * *(double *)SR_VEC_LANES(128, vector_result, u64));
    saved_scaled_value = scaled_value_3;
    HIDWORD(float_word) = 0;
    weighted_sum = (float)(scaled_value_3 * a2[1]) + a1[1];
    weighted_sum_2 = (float)(scaled_value_3 * a2[2]) + a1[2];
    *(float *)&float_word_2 = (float)((float)(saved_scaled_value * *a2) + *a1) + (float)(product_difference * a2[6]);
    SR_VEC_LANES(128, vector_result, f32)[0] = product_difference * a2[7];
    scaled_value_4 = product_difference * a2[8];
    dword_140404A6C[scaled_index + 177167567] = float_word_2;
    *(float *)&dword_140404A6C[scaled_index + 177167568] = weighted_sum + SR_VEC_LANES(128, vector_result, f32)[0];
    *(float *)&dword_140404A6C[scaled_index + 177167569] = weighted_sum_2 + scaled_value_4;
    scaled_value_5 = a4 * reordered_vector;
    ++mesh_vertex_count;
    scaled_index_2 = 3 * mesh_vertex_count;
    product_difference_2 = -(a4 * scaled_value_2);
    weighted_sum_3 = (float)((float)(a5 * a2[3]) + *a1) + (float)(scaled_value_5 * *a2);
    SR_VEC_LANES(128, vector_result, f32)[0] = scaled_value_5 * a2[1];
    scaled_value_6 = scaled_value_5 * a2[2];
    weighted_sum_4 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, vector_result, f32)[0];
    *(float *)&float_word_3 = weighted_sum_3 + (float)(product_difference_2 * a2[6]);
    scaled_value_7 = product_difference_2 * a2[7];
    SR_VEC_LANES(128, vector_result, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    scaled_value_8 = product_difference_2 * a2[8];
    *(float *)&float_word = weighted_sum_4 + scaled_value_7;
    dword_140404A6C[scaled_index_2 + 177167567] = float_word_3;
    dword_140404A6C[scaled_index_2 + 177167568] = LODWORD(float_word);
    *(float *)&dword_140404A6C[scaled_index_2 + 177167569] = (float)(SR_VEC_LANES(128, vector_result, f32)[0] + scaled_value_6) + scaled_value_8;
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + 1.047197551196598;
    integer_sum = ++mesh_vertex_count;
    converted_vector_3 = _mm_cvtps_pd(_mm_cvtpd_ps(converted_vector_2));
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, converted_vector_3, f64)[0], unrecovered_register_value, float_word));
    scaled_value_9 = *(double *)SR_VEC_LANES(128, vector_result_2, u64);
    scaled_index_3 = (int)(3 * integer_sum);
    reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0];
    *(float *)&float_word = -(scaled_value * *(double *)SR_VEC_LANES(128, vector_result_2, u64));
    scaled_value_10 = scaled_value * reordered_vector_2;
    weighted_sum_5 = (float)(scaled_value_10 * *a2) + *a1;
    weighted_sum_6 = (float)(scaled_value_10 * a2[1]) + a1[1];
    weighted_sum_7 = (float)(scaled_value_10 * a2[2]) + a1[2];
    *(float *)&masked_bits = weighted_sum_5 + (float)(*(float *)&float_word * a2[6]);
    SR_VEC_LANES(128, vector_result_2, f32)[0] = *(float *)&float_word * a2[7];
    *(float *)&float_word = *(float *)&float_word * a2[8];
    dword_140404A6C[scaled_index_3 + 177167567] = masked_bits;
    *(float *)&dword_140404A6C[scaled_index_3 + 177167568] = weighted_sum_6 + SR_VEC_LANES(128, vector_result_2, f32)[0];
    HIDWORD(a3) = 0;
    *(float *)&dword_140404A6C[scaled_index_3 + 177167569] = weighted_sum_7 + *(float *)&float_word;
    scaled_value_11 = a4 * reordered_vector_2;
    ++mesh_vertex_count;
    scaled_index_4 = 3 * mesh_vertex_count;
    product_difference_3 = -(a4 * scaled_value_9);
    *(float *)&reordered_vector_2 = (float)((float)(a5 * a2[3]) + *a1) + (float)(scaled_value_11 * *a2);
    SR_VEC_LANES(128, vector_result_2, f32)[0] = scaled_value_11 * a2[1];
    scaled_value_12 = scaled_value_11 * a2[2];
    *(float *)&a3 = (float)((float)(a5 * a2[4]) + a1[1]) + SR_VEC_LANES(128, vector_result_2, f32)[0];
    *(float *)&reordered_vector_2 = *(float *)&reordered_vector_2 + (float)(product_difference_3 * a2[6]);
    scaled_value_13 = product_difference_3 * a2[7];
    SR_VEC_LANES(128, vector_result_2, f32)[0] = (float)(a5 * a2[5]) + a1[2];
    scaled_value_14 = product_difference_3 * a2[8];
    dword_140404A6C[scaled_index_4 + 177167567] = LODWORD(reordered_vector_2);
    *(float *)&a3 = *(float *)&a3 + scaled_value_13;
    dword_140404A6C[scaled_index_4 + 177167568] = LODWORD(a3);
    *(float *)&dword_140404A6C[scaled_index_4 + 177167569] = (float)(SR_VEC_LANES(128, vector_result_2, f32)[0] + scaled_value_12) + scaled_value_14;
    cached_mesh_vertex_count = mesh_vertex_count + 1;
    SR_VEC_LANES(128, converted_vector_3, f64)[0] = SR_VEC_LANES(128, converted_vector_3, f64)[0] + 1.047197551196598;
    ++mesh_vertex_count;
    converted_vector = _mm_cvtpd_ps(converted_vector_3);
    --remaining_count;
  }
  while ( remaining_count );
  component_delta = -scaled_value;
  component_sum = a4 + a5;
  scaled_index_5 = 3 * cached_mesh_vertex_count;
  integer_sum_2 = cached_mesh_vertex_count_2 + 12;
  running_total = 2;
  remaining_count_2 = 2;
  *(float *)&float_word_4 = (float)(component_delta * a2[3]) + *a1;
  *(float *)&float_word_5 = (float)(component_delta * a2[4]) + a1[1];
  *(float *)&float_word_6 = (float)(component_delta * a2[5]) + a1[2];
  dword_140404A6C[scaled_index_5 + 177167567] = float_word_4;
  dword_140404A6C[scaled_index_5 + 177167568] = float_word_5;
  dword_140404A6C[scaled_index_5 + 177167569] = float_word_6;
  ++mesh_vertex_count;
  scaled_value_15 = component_sum * a2[3];
  scaled_value_16 = component_sum * a2[4];
  scaled_index_6 = 3 * mesh_vertex_count;
  scaled_value_17 = component_sum * a2[5];
  running_total_2 = cached_mesh_vertex_count_2 + 2;
  *(float *)&float_word_7 = scaled_value_15 + *a1;
  *(float *)&float_word_8 = scaled_value_16 + a1[1];
  *(float *)&float_word_9 = scaled_value_17 + a1[2];
  integer_sum_3 = cached_mesh_vertex_count_2 + 13;
  dword_140404A6C[scaled_index_6 + 177167567] = float_word_7;
  dword_140404A6C[scaled_index_6 + 177167568] = float_word_8;
  dword_140404A6C[scaled_index_6 + 177167569] = float_word_9;
  ++mesh_vertex_count;
  LODWORD(result) = mesh_triangle_count;
  do
  {
    dword_140404A6C[3 * (_DWORD)result + 177495248] = running_total_2 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total_2 - 1;
    scaled_index_7 = cached_mesh_vertex_count_2 + 2 * ((running_total - 1) % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_7 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_8 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_8 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_8 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_8 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_8 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_8 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_8 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_7 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_7;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_9 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_9 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_9 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_9 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_9 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_9 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_9 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2 - 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_7;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_10 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_10 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_10 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_10 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_10 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_10 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_10 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = scaled_index_7 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total_2 - 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_11 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_11 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_11 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_11 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_11 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_11 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_11 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total_2 + 1;
    scaled_index_12 = cached_mesh_vertex_count_2 + 2 * (running_total % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_12 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_13 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_13 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_13 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_13 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_13 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_13 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_13 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_12 + 1;
    integer_sum_4 = running_total_2 + 3;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_12;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_14 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_14 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_14 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_14 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_14 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_14 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_14 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_12;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_15 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_15 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_15 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_15 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_15 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_15 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_15 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = scaled_index_12 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total_2 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_16 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_16 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_16 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_16 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_16 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_16 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_16 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = running_total_2 + 3;
    scaled_index_17 = cached_mesh_vertex_count_2 + 2 * ((running_total + 1) % 6);
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_17 + 1;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_18 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_18 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_18 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_18 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_18 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_18 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_18 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_17 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = scaled_index_17;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_19 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_19 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_19 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_19 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_19 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_19 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_19 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = running_total_2 + 2;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = scaled_index_17;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_2;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_20 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_20 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_20 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_20 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_20 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_20 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_20 + 178011350] = 1052770304;
    ++mesh_triangle_count;
    running_total += 3;
    running_total_2 += 6;
    dword_140404A6C[3 * mesh_triangle_count + 177495248] = scaled_index_17 + 1;
    dword_140404A6C[3 * mesh_triangle_count + 177495249] = integer_sum_4;
    dword_140404A6C[3 * mesh_triangle_count + 177495250] = integer_sum_3;
    dword_140404A6C[mesh_triangle_count + 178207953] = -1;
    scaled_index_21 = 6 * mesh_triangle_count;
    dword_140404A6C[scaled_index_21 + 178011345] = 1052770304;
    dword_140404A6C[scaled_index_21 + 178011346] = 1052770304;
    dword_140404A6C[scaled_index_21 + 178011347] = 1052770304;
    dword_140404A6C[scaled_index_21 + 178011348] = 1052770304;
    dword_140404A6C[scaled_index_21 + 178011349] = 1052770304;
    dword_140404A6C[scaled_index_21 + 178011350] = 1052770304;
    result = ++mesh_triangle_count;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  return result;
}

//----- (000000014018D440) ----------------------------------------------------
__int64            sub_14018D440(float *a1, int a2)
{
  char input_value;
  signed int shifted_bits;
  __int64 result;
  float product_difference;
  int decoded_value;

  input_value = a2;
  sr_net_read_bits(&decoded_value, a2);
  shifted_bits = (unsigned int)(1 << input_value) >> 1;
  result = decoded_value & (unsigned int)shifted_bits;
  product_difference = (float)(decoded_value & (shifted_bits - 1)) * (6.28318530718 / (float)shifted_bits);
  *a1 = product_difference;
  if ( (_DWORD)result == shifted_bits )
    *a1 = -product_difference;
  return result;
}

//----- (000000014018D510) ----------------------------------------------------
__int64            sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int saved_decoded_value;
  __int64 result;
  unsigned int saved_decoded_value_2;
  unsigned int decoded_value;

  sr_net_read_bits(&decoded_value, 1);
  if ( decoded_value )
  {
    sr_net_read_bits(&decoded_value, 1);
    if ( decoded_value )
    {
      return sr_net_read_bits(a1, a3);
    }
    else
    {
      sr_net_read_bits(&decoded_value, 9);
      saved_decoded_value_2 = decoded_value;
      if ( (decoded_value & 0x100) != 0 )
        saved_decoded_value_2 = decoded_value | 0xFFFFFE00;
      result = saved_decoded_value_2 + a2;
      *a1 = result;
    }
  }
  else
  {
    sr_net_read_bits(&decoded_value, 4);
    saved_decoded_value = decoded_value;
    if ( (decoded_value & 8) != 0 )
      saved_decoded_value = decoded_value | 0xFFFFFFF0;
    result = saved_decoded_value + a2;
    *a1 = result;
  }
  return result;
}

//----- (000000014018D5E0) ----------------------------------------------------
__int64            sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result;
  int bit_count;
  int saved_decoded_value;
  int decoded_value;

  if ( g_16B2A224C )
  {
    result = sr_net_read_bits(&decoded_value, 1);
    if ( !decoded_value )
    {
      *a1 = a2;
      return result;
    }
  }
  sr_net_read_bits(&decoded_value, 1);
  if ( decoded_value )
  {
    sr_net_read_bits(&decoded_value, 1);
    if ( decoded_value )
      return sr_net_read_signed_bits(a1, a3);
    bit_count = g_165D84964;
  }
  else
  {
    bit_count = g_165D84960;
  }
  sr_net_read_bits(&decoded_value, bit_count);
  if ( (decoded_value & (1 << (bit_count - 1))) == 1 << (bit_count - 1) )
    saved_decoded_value = decoded_value | (-1 << bit_count);
  else
    saved_decoded_value = decoded_value;
  *a1 = saved_decoded_value + a2;
  result = (unsigned int)(saved_decoded_value + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)saved_decoded_value + 179992058];
    return (__int64)&g_16B165F60;
  }
  return result;
}

//----- (000000014018D6D0) ----------------------------------------------------
__int64            sub_14018D6D0(int a1, int a2)
{
  __int64 input_value;
  __int64 item_record_offset;
  __int64 input_value_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  __int64 result;
  unsigned int decoded_value;

  input_value = a2;
  item_record_offset = 1760LL * a2;
  input_value_2 = a1;
  dword_140404A6C[item_record_offset + 278846107] = dword_140404A6C[item_record_offset + 278846102];
  dword_140404A6C[item_record_offset + 278846108] = dword_140404A6C[item_record_offset + 278846103];
  dword_140404A6C[item_record_offset + 278846109] = dword_140404A6C[item_record_offset + 278846104];
  dword_140404A6C[item_record_offset + 278846110] = dword_140404A6C[item_record_offset + 278846105];
  dword_140404A6C[item_record_offset + 278846102] = game_tick;
  sr_net_read_bits(&decoded_value, 8);
  scaled_index = 318464LL * (int)decoded_value + 36 * input_value;
  scaled_index_2 = 318464 * input_value_2 + 36 * input_value;
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF568 + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF568 + scaled_index),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF56C + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF56C + scaled_index),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&g_160FFF570 + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF570 + scaled_index),
    28);
  *(float *)&masked_bits = (float)((float)*(int *)((char *)&g_160FFF568 + scaled_index_2) * 0.00024414062) - 4096.0;
  *(float *)&masked_bits_2 = (float)*(int *)((char *)&g_160FFF56C + scaled_index_2) * 0.00024414062;
  *(float *)&masked_bits_3 = (float)((float)*(int *)((char *)&g_160FFF570 + scaled_index_2) * 0.00024414062) - 4096.0;
  dword_140404A6C[item_record_offset + 278845916] = masked_bits;
  dword_140404A6C[item_record_offset + 278845917] = masked_bits_2;
  dword_140404A6C[item_record_offset + 278845918] = masked_bits_3;
  dword_140404A6C[item_record_offset + 278846103] = masked_bits;
  dword_140404A6C[item_record_offset + 278846104] = dword_140404A6C[item_record_offset + 278845917];
  dword_140404A6C[item_record_offset + 278846105] = dword_140404A6C[item_record_offset + 278845918];
  if ( !dword_140404A6C[item_record_offset + 278846106] )
  {
    dword_140404A6C[item_record_offset + 278846108] = dword_140404A6C[item_record_offset + 278845916];
    dword_140404A6C[item_record_offset + 278846109] = dword_140404A6C[item_record_offset + 278845917];
    dword_140404A6C[item_record_offset + 278846110] = dword_140404A6C[item_record_offset + 278845918];
    dword_140404A6C[item_record_offset + 278846107] = game_tick;
  }
  dword_140404A6C[item_record_offset + 278846106] = 1;
  sr_net_read_bits((unsigned int *)((char *)&g_160FFF574 + scaled_index_2), 2);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF578 + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF578 + scaled_index),
    14);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF57C + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF57C + scaled_index),
    14);
  sub_14018D5E0(
    (int *)((char *)&g_160FFF580 + scaled_index_2),
    *(unsigned int *)((char *)&g_160FFF580 + scaled_index),
    14);
  sub_140191F90((float *)&dword_140404A6C[item_record_offset + 278845934], (int *)((char *)&g_160FFF574 + scaled_index_2));
  result = dword_140404A6C[item_record_offset + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846062], 4);
    sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846061], 4);
    sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846063], 30);
    result = dword_140404A6C[item_record_offset + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846112], 1);
    result = dword_140404A6C[item_record_offset + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sr_net_read_bits(&decoded_value, 12);
    result = decoded_value;
    if ( decoded_value == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[item_record_offset + 278846113] = result;
  }
  return result;
}

//----- (000000014018DB20) ----------------------------------------------------
__int64            sub_14018DB20(int a1)
{
  __int64 item_record_offset;
  unsigned int saved_decoded_value;
  unsigned int saved_decoded_value_2;
  __int64 result;
  unsigned int decoded_value;

  item_record_offset = 1760LL * a1;
  sr_net_read_bits(&dword_140404A6C[item_record_offset + 278845898], 8);
  sr_net_read_bits(&decoded_value, 10);
  saved_decoded_value = decoded_value;
  if ( decoded_value == 1023 )
    saved_decoded_value = -1;
  dword_140404A6C[item_record_offset + 278845903] = saved_decoded_value;
  sr_net_read_bits(&decoded_value, 10);
  saved_decoded_value_2 = decoded_value;
  if ( decoded_value == 1023 )
    saved_decoded_value_2 = -1;
  dword_140404A6C[item_record_offset + 278845902] = saved_decoded_value_2;
  result = sr_net_read_bits(&dword_140404A6C[item_record_offset + 278845904], 4);
  if ( dword_140404A6C[item_record_offset + 278845898] == 39 )
  {
    sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846111], 5);
    return sr_net_read_bits(&dword_140404A6C[item_record_offset + 278846112], 5);
  }
  return result;
}

//----- (000000014018DBF0) ----------------------------------------------------
__int64            sub_14018DBF0(int a1)
{
  __int64 shifted_bits;
  int *state_address;
  __int64 result;
  int loaded_word;
  _DWORD *decoded_value;
  int remaining_amount;
  _DWORD *decoded_value_2;
  int *state_address_2;
  unsigned int saved_decoded_value;
  int loaded_word_2;
  int iteration_count;
  char *text_cursor;
  int option_flags;
  unsigned int saved_decoded_value_2;
  signed int cached_packet_in_byte;
  int cached_packet_in_length;
  int cached_packet_in_bit;
  __int64 saved_cached_packet_in_byte;
  __int64 masked_bits;
  __int64 saved_cached_packet_in_byte_2;
  __int64 masked_bits_2;
  int masked_bits_3;
  unsigned int saved_decoded_value_3;
  unsigned int saved_decoded_value_4;
  _DWORD *decoded_value_3;
  unsigned int saved_decoded_value_5;
  int cached_packet_in_byte_2;
  __int64 iteration_count_2;
  int remaining_amount_2;
  char running_total;
  int integer_difference;
  unsigned int *saved_state_address;
  int remaining_amount_3;
  unsigned int option_flags_2;
  char running_total_2;
  int integer_difference_2;
  _DWORD *decoded_value_4;
  __int64 saved_cached_packet_in_byte_3;
  __int64 saved_cached_packet_in_byte_4;
  __int64 saved_cached_packet_in_byte_5;
  __int64 saved_cached_packet_in_byte_6;
  __int64 masked_bits_4;
  __int64 saved_cached_packet_in_byte_7;
  __int64 saved_cached_packet_in_byte_8;
  __int64 saved_cached_packet_in_byte_9;
  __int64 saved_cached_packet_in_byte_10;
  int loaded_word_3;
  __int64 saved_cached_packet_in_byte_11;
  __int64 saved_cached_packet_in_byte_12;
  __int64 saved_cached_packet_in_byte_13;
  __int64 saved_cached_packet_in_byte_14;
  __int64 saved_cached_packet_in_byte_15;
  __int64 saved_cached_packet_in_byte_16;
  __int64 saved_cached_packet_in_byte_17;
  __int64 saved_cached_packet_in_byte_18;
  unsigned __int64 byte_count;
  __int64 saved_cached_packet_in_byte_19;
  __int64 masked_bits_5;
  __int64 saved_cached_packet_in_byte_20;
  __int64 saved_cached_packet_in_byte_21;
  __int64 saved_cached_packet_in_byte_22;
  __int64 saved_cached_packet_in_byte_23;
  __int64 saved_cached_packet_in_byte_24;
  __int64 saved_cached_packet_in_byte_25;
  __int64 saved_cached_packet_in_byte_26;
  __int64 saved_cached_packet_in_byte_27;
  unsigned int option_flags_3;
  char running_total_3;
  int integer_difference_3;
  __int64 saved_cached_packet_in_byte_28;
  __int64 masked_bits_6;
  __int64 saved_cached_packet_in_byte_29;
  __int64 masked_bits_7;
  __int64 saved_cached_packet_in_byte_30;
  __int64 saved_cached_packet_in_byte_31;
  signed int cached_packet_in_byte_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018DBF0[32];
#define decoded_value_5 (*(unsigned int (*))(void *)(sr_frame_14018DBF0 + 0)) /* [rsp+70h] */
#define decoded_value_6 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 8)) /* [rsp+78h] */
#define state_address_3 (*(char * (*))(void *)(sr_frame_14018DBF0 + 16)) /* [rsp+80h] */
#define decoded_value_7 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 24)) /* [rsp+88h] */

  shifted_bits = (__int64)a1 << 7;
  state_address = (int *)((char *)&g_1873DE460 + shifted_bits);
  state_address_3 = (char *)&g_1873DE460 + shifted_bits;
  result = sr_net_read_bits((unsigned int *)((char *)&g_1873DE460 + shifted_bits), 6);
  if ( *(unsigned int *)((char *)&g_1873DE460 + shifted_bits) != 23 )
  {
    sr_net_read_bits((unsigned int *)((char *)&g_1873DE464 + shifted_bits), 28);
    loaded_word = *state_address;
    decoded_value = (unsigned int *)((char *)&g_1873DE480 + shifted_bits);
    remaining_amount = 10;
    if ( !*state_address )
    {
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits), 4);
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits), 10);
      sr_net_read_bytes((__m128i *)((char *)&g_1873DE468 + shifted_bits), 4, 3);
      sr_net_read_bytes((__m128i *)((char *)&g_1873DE474 + shifted_bits), 4, 3);
      loaded_word = *state_address;
    }
    if ( loaded_word == 1 )
    {
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits), 4);
      decoded_value_2 = (unsigned int *)((char *)&g_1873DE484 + shifted_bits);
      decoded_value_6 = (unsigned int *)((char *)&g_1873DE484 + shifted_bits);
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE484 + shifted_bits), 6);
      sr_net_read_bytes((__m128i *)((char *)&g_1873DE468 + shifted_bits), 4, 3);
      sr_net_read_bytes((__m128i *)((char *)&g_1873DE474 + shifted_bits), 4, 3);
      loaded_word = *state_address;
    }
    else
    {
      decoded_value_2 = (unsigned int *)((char *)&g_1873DE484 + shifted_bits);
      decoded_value_6 = (unsigned int *)((char *)&g_1873DE484 + shifted_bits);
    }
    if ( loaded_word == 2 )
    {
      state_address_2 = (int *)((char *)&g_1873DE480 + shifted_bits);
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits), 6);
      sr_net_read_bits(decoded_value_2, 4);
      sr_net_read_bits(&decoded_value_5, 10);
      saved_decoded_value = decoded_value_5;
      if ( decoded_value_5 == 1023 )
        saved_decoded_value = -1;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = saved_decoded_value;
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits), 4);
      loaded_word_2 = *state_address_2;
      iteration_count = 0;
      if ( *state_address_2 <= 0 )
      {
        LOBYTE(option_flags) = decoded_value_5;
      }
      else
      {
        text_cursor = (char *)&g_1873DE4A0 + shifted_bits;
        do
        {
          sr_net_read_bits(&decoded_value_5, 7);
          LOBYTE(option_flags) = decoded_value_5;
          ++iteration_count;
          *text_cursor++ = decoded_value_5;
          loaded_word_2 = *state_address_2;
        }
        while ( iteration_count < *state_address_2 );
        decoded_value_2 = decoded_value_6;
      }
      state_address = (int *)state_address_3;
      *((_BYTE *)&g_1873DE4A0 + shifted_bits + loaded_word_2) = 0;
      loaded_word = *state_address;
    }
    else
    {
      LOBYTE(option_flags) = decoded_value_5;
    }
    if ( loaded_word == 3 )
    {
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits), 10);
      sr_net_read_bits(decoded_value_2, 8);
      sr_net_read_bits(&decoded_value_5, 4);
      saved_decoded_value_2 = decoded_value_5;
      if ( decoded_value_5 == 15 )
        saved_decoded_value_2 = -1;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = saved_decoded_value_2;
    }
    if ( *state_address == 4 )
    {
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE480 + shifted_bits), 10);
      sr_net_read_bits(decoded_value_2, 4);
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits), 10);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte = cached_packet_in_byte;
          cached_packet_in_byte += 12;
          masked_bits = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte);
          LODWORD(saved_cached_packet_in_byte) = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte);
          *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = masked_bits;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = saved_cached_packet_in_byte;
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 12 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_2 = cached_packet_in_byte;
          cached_packet_in_byte += 12;
          masked_bits_2 = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_2);
          LODWORD(saved_cached_packet_in_byte_2) = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte_2);
          *(_QWORD *)((char *)&g_1873DE474 + shifted_bits) = masked_bits_2;
          *(unsigned int *)((char *)&g_1873DE47C + shifted_bits) = saved_cached_packet_in_byte_2;
          packet_in_byte = cached_packet_in_byte;
        }
      }
    }
    else
    {
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
    }
    masked_bits_3 = *state_address;
    if ( *state_address == 5 )
    {
      sr_net_read_bits(decoded_value, 20);
      sr_net_read_bits(&decoded_value_5, 10);
      saved_decoded_value_3 = decoded_value_5;
      if ( decoded_value_5 == 1023 )
        saved_decoded_value_3 = -1;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = saved_decoded_value_3;
      sr_net_read_bits(&decoded_value_5, 10);
      saved_decoded_value_4 = decoded_value_5;
      if ( decoded_value_5 == 1023 )
        saved_decoded_value_4 = -1;
      decoded_value_3 = (unsigned int *)((char *)&g_1873DE48C + shifted_bits);
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = saved_decoded_value_4;
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE48C + shifted_bits), 4);
      masked_bits_3 = *(unsigned int *)((char *)&g_1873DE460 + shifted_bits);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_length = packet_in_length;
    }
    else
    {
      decoded_value_3 = (unsigned int *)((char *)&g_1873DE48C + shifted_bits);
    }
    if ( masked_bits_3 == 6 )
    {
      sr_net_read_bits(decoded_value, 10);
      sr_net_read_bits(decoded_value_6, 3);
      sr_net_read_bits((unsigned int *)((char *)&g_1873DE488 + shifted_bits), 16);
      sr_net_read_bits(decoded_value_3, 2);
      masked_bits_3 = *(unsigned int *)((char *)&g_1873DE460 + shifted_bits);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_length = packet_in_length;
    }
    decoded_value_7 = (unsigned int *)((char *)&g_1873DE480 + shifted_bits);
    if ( masked_bits_3 == 7 )
    {
      sr_net_read_bits(decoded_value, 16);
      sr_net_read_bits(&decoded_value_5, 10);
      saved_decoded_value_5 = decoded_value_5;
      cached_packet_in_byte_2 = packet_in_byte;
      if ( decoded_value_5 == 1023 )
        saved_decoded_value_5 = -1;
      *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = saved_decoded_value_5;
      if ( cached_packet_in_byte_2 < 0x10000 && cached_packet_in_byte_2 + 4 <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          ++cached_packet_in_byte_2;
          packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte_2;
        }
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + cached_packet_in_byte_2);
        packet_in_byte = cached_packet_in_byte_2 + 4;
      }
      sr_net_read_bits(decoded_value_3, 24);
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      iteration_count_2 = 0;
      cached_packet_in_byte = packet_in_byte;
      do
      {
        remaining_amount_2 = 7;
        if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte <= cached_packet_in_length )
        {
          option_flags = 0;
          running_total = 0;
          while ( 1 )
          {
            integer_difference = 8 - cached_packet_in_bit;
            option_flags |= (~(-1 << remaining_amount_2)
                  & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte) >> SLOBYTE(packet_in_bit))) << running_total;
            if ( remaining_amount_2 < (unsigned int)(8 - cached_packet_in_bit) )
              break;
            if ( remaining_amount_2 == integer_difference )
            {
              packet_in_byte = ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              goto LABEL_60;
            }
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            remaining_amount_2 -= integer_difference;
            packet_in_byte = cached_packet_in_byte;
            running_total += integer_difference;
            packet_in_bit = 0;
            if ( remaining_amount_2 <= 0 )
              goto LABEL_61;
          }
          cached_packet_in_bit += remaining_amount_2;
LABEL_60:
          packet_in_bit = cached_packet_in_bit;
        }
LABEL_61:
        *((_BYTE *)&g_1873DE4A0 + shifted_bits + iteration_count_2++) = option_flags;
      }
      while ( iteration_count_2 < 31 );
      saved_state_address = (unsigned int *)state_address_3;
      *((_BYTE *)&g_1873DE4BC + shifted_bits + 3) = 0;
      masked_bits_3 = *saved_state_address;
    }
    else
    {
      saved_state_address = (unsigned int *)state_address_3;
    }
    if ( masked_bits_3 == 17 )
    {
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238528), 10);
      sr_net_read_bits(decoded_value_6, 1);
      cached_packet_in_byte = packet_in_byte;
      remaining_amount_3 = 8;
      cached_packet_in_length = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        option_flags_2 = decoded_value_5;
        cached_packet_in_bit = packet_in_bit;
      }
      else
      {
        cached_packet_in_bit = packet_in_bit;
        option_flags_2 = 0;
        running_total_2 = 0;
        while ( 1 )
        {
          integer_difference_2 = 8 - cached_packet_in_bit;
          option_flags_2 |= (~(-1 << remaining_amount_3)
                & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte) >> SLOBYTE(packet_in_bit))) << running_total_2;
          if ( remaining_amount_3 < (unsigned int)(8 - cached_packet_in_bit) )
            break;
          if ( remaining_amount_3 == integer_difference_2 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
            goto LABEL_75;
          }
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          remaining_amount_3 -= integer_difference_2;
          packet_in_byte = cached_packet_in_byte;
          running_total_2 += integer_difference_2;
          packet_in_bit = 0;
          if ( remaining_amount_3 <= 0 )
            goto LABEL_75;
        }
        cached_packet_in_bit += remaining_amount_3;
        packet_in_bit = cached_packet_in_bit;
      }
LABEL_75:
      if ( option_flags_2 == 255 )
        option_flags_2 = -1;
      *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = option_flags_2;
    }
    decoded_value_4 = decoded_value_7;
    if ( *saved_state_address == 8 )
    {
      sr_net_read_bits(decoded_value_7, 8);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_3 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_3);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_4 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_4);
            packet_in_byte = cached_packet_in_byte;
          }
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_5 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_5);
            packet_in_byte = cached_packet_in_byte;
          }
        }
      }
    }
    if ( *saved_state_address == 9 )
    {
      sr_net_read_bits(decoded_value_4, 8);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_6 = cached_packet_in_byte;
          cached_packet_in_byte += 12;
          masked_bits_4 = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_6);
          LODWORD(saved_cached_packet_in_byte_6) = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte_6);
          *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = masked_bits_4;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = saved_cached_packet_in_byte_6;
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_7 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE490 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_7);
            packet_in_byte = cached_packet_in_byte;
          }
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_8 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE494 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_8);
            packet_in_byte = cached_packet_in_byte;
          }
        }
      }
    }
    if ( *saved_state_address == 19 )
    {
      sr_net_read_bits(decoded_value_4, 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238532), 16);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000 )
      {
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_9 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE490 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_9);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_10 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE494 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_10);
          packet_in_byte = cached_packet_in_byte;
        }
      }
    }
    loaded_word_3 = *saved_state_address;
    if ( *saved_state_address == 10 )
    {
      sr_net_read_bits(decoded_value_4, 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238532), 1);
      loaded_word_3 = *saved_state_address;
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
    }
    else
    {
      decoded_value_4 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238528);
    }
    if ( loaded_word_3 == 11 && cached_packet_in_byte < 0x10000 )
    {
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_11 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_11);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte < 0x10000 )
      {
        if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_12 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_12);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_13 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_13);
            packet_in_byte = cached_packet_in_byte;
          }
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_14 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_14);
            packet_in_byte = cached_packet_in_byte;
          }
        }
      }
    }
    if ( *saved_state_address == 12 && cached_packet_in_byte < 0x10000 )
    {
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_15 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_15);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte < 0x10000 )
      {
        if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_16 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_16);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_17 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_17);
            packet_in_byte = cached_packet_in_byte;
          }
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_18 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_18);
            packet_in_byte = cached_packet_in_byte;
          }
        }
      }
    }
    if ( *saved_state_address == 22 )
    {
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238528), 16);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238532), 6);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238536), 7);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000 )
      {
        cached_packet_in_bit = packet_in_bit;
      }
      else
      {
        byte_count = *(int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238536);
        cached_packet_in_bit = packet_in_bit;
        if ( (signed int)(packet_in_byte + byte_count) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte = packet_in_byte + 1;
            cached_packet_in_bit = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          crt_memcpy(
            (__m128i *)((char *)&g_1873DE4A0 + shifted_bits),
            (     __m128i *)((char *)&packet_in_data + cached_packet_in_byte),
            byte_count);
          cached_packet_in_byte += byte_count;
          packet_in_byte = cached_packet_in_byte;
        }
      }
    }
    if ( *saved_state_address == 21 )
    {
      sr_net_read_bits(decoded_value_4, 10);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238532), 4);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238536), 4);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238540), 30);
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
      cached_packet_in_bit = packet_in_bit;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 12) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          cached_packet_in_byte = packet_in_byte + 1;
          cached_packet_in_bit = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_19 = cached_packet_in_byte;
        cached_packet_in_byte += 12;
        masked_bits_5 = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_19);
        LODWORD(saved_cached_packet_in_byte_19) = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte_19);
        *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = masked_bits_5;
        *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = saved_cached_packet_in_byte_19;
        packet_in_byte = cached_packet_in_byte;
      }
    }
    if ( *saved_state_address == 13 && cached_packet_in_byte < 0x10000 )
    {
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_20 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_20);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte < 0x10000 )
      {
        if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_21 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_21);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_22 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_22);
          packet_in_byte = cached_packet_in_byte;
        }
      }
    }
    result = *saved_state_address;
    if ( (_DWORD)result == 14 )
    {
      sr_net_read_bits(decoded_value_4, 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238532), 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238536), 8);
      sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238540), 20);
      result = *saved_state_address;
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
    }
    if ( (_DWORD)result == 15 )
    {
      if ( cached_packet_in_byte < 0x10000 )
      {
        if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_23 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                        + saved_cached_packet_in_byte_23);
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_24 = cached_packet_in_byte;
            cached_packet_in_byte += 4;
            *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + saved_cached_packet_in_byte_24);
            packet_in_byte = cached_packet_in_byte;
          }
          if ( cached_packet_in_byte < 0x10000 && cached_packet_in_byte + 4 <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
            }
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + cached_packet_in_byte);
            packet_in_byte = cached_packet_in_byte + 4;
          }
        }
      }
      result = sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238540), 2);
      cached_packet_in_bit = packet_in_bit;
      cached_packet_in_byte = packet_in_byte;
      cached_packet_in_length = packet_in_length;
    }
    if ( *saved_state_address == 16 )
    {
      if ( cached_packet_in_byte >= 0x10000 )
        goto LABEL_240;
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_25 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_25);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte >= 0x10000 )
        goto LABEL_240;
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_26 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_26);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte >= 0x10000 )
        goto LABEL_240;
      if ( cached_packet_in_byte + 4 <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_27 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = *(unsigned int *)((char *)&packet_in_data
                                                                                      + saved_cached_packet_in_byte_27);
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte >= 0x10000 || cached_packet_in_byte + 1 > cached_packet_in_length )
      {
LABEL_240:
        option_flags_3 = decoded_value_5;
      }
      else
      {
        option_flags_3 = 0;
        running_total_3 = 0;
        while ( 1 )
        {
          integer_difference_3 = 8 - cached_packet_in_bit;
          option_flags_3 |= (~(-1 << remaining_amount)
                & (*((unsigned __int8 *)&packet_in_data + cached_packet_in_byte) >> SLOBYTE(packet_in_bit))) << running_total_3;
          if ( remaining_amount < (unsigned int)(8 - cached_packet_in_bit) )
            break;
          if ( remaining_amount == integer_difference_3 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
            goto LABEL_241;
          }
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          remaining_amount -= integer_difference_3;
          packet_in_byte = cached_packet_in_byte;
          running_total_3 += integer_difference_3;
          packet_in_bit = 0;
          if ( remaining_amount <= 0 )
            goto LABEL_241;
        }
        cached_packet_in_bit += remaining_amount;
        packet_in_bit = cached_packet_in_bit;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( option_flags_3 == 1023 )
        option_flags_3 = -1;
      *(unsigned int *)((char *)&g_1873DE48C + shifted_bits) = option_flags_3;
      if ( cached_packet_in_byte < 0x10000 )
      {
        result = (unsigned int)(cached_packet_in_byte + 12);
        if ( (int)result <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_28 = cached_packet_in_byte;
          cached_packet_in_byte += 12;
          masked_bits_6 = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_28);
          result = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte_28);
          *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = masked_bits_6;
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = result;
          packet_in_byte = cached_packet_in_byte;
        }
        if ( cached_packet_in_byte < 0x10000 )
        {
          result = (unsigned int)(cached_packet_in_byte + 12);
          if ( (int)result <= cached_packet_in_length )
          {
            if ( cached_packet_in_bit > 0 )
            {
              ++cached_packet_in_byte;
              cached_packet_in_bit = 0;
              packet_in_byte = cached_packet_in_byte;
              packet_in_bit = 0;
            }
            saved_cached_packet_in_byte_29 = cached_packet_in_byte;
            cached_packet_in_byte += 12;
            masked_bits_7 = *(_QWORD *)((char *)&packet_in_data + saved_cached_packet_in_byte_29);
            result = *(unsigned int *)((char *)&g_1853AD42C + saved_cached_packet_in_byte_29);
            *(_QWORD *)((char *)&g_1873DE474 + shifted_bits) = masked_bits_7;
            *(unsigned int *)((char *)&g_1873DE47C + shifted_bits) = result;
            packet_in_byte = cached_packet_in_byte;
          }
        }
      }
    }
    if ( *saved_state_address == 18 && cached_packet_in_byte < 0x10000 )
    {
      result = (unsigned int)(cached_packet_in_byte + 4);
      if ( (int)result <= cached_packet_in_length )
      {
        if ( cached_packet_in_bit > 0 )
        {
          ++cached_packet_in_byte;
          cached_packet_in_bit = 0;
          packet_in_byte = cached_packet_in_byte;
          packet_in_bit = 0;
        }
        saved_cached_packet_in_byte_30 = cached_packet_in_byte;
        cached_packet_in_byte += 4;
        result = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_30);
        *(unsigned int *)((char *)&g_1873DE480 + shifted_bits) = result;
        packet_in_byte = cached_packet_in_byte;
      }
      if ( cached_packet_in_byte < 0x10000 )
      {
        result = (unsigned int)(cached_packet_in_byte + 4);
        if ( (int)result <= cached_packet_in_length )
        {
          if ( cached_packet_in_bit > 0 )
          {
            ++cached_packet_in_byte;
            cached_packet_in_bit = 0;
            packet_in_byte = cached_packet_in_byte;
            packet_in_bit = 0;
          }
          saved_cached_packet_in_byte_31 = cached_packet_in_byte;
          cached_packet_in_byte += 4;
          result = *(unsigned int *)((char *)&packet_in_data + saved_cached_packet_in_byte_31);
          *(unsigned int *)((char *)&g_1873DE484 + shifted_bits) = result;
          packet_in_byte = cached_packet_in_byte;
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
            *(unsigned int *)((char *)&g_1873DE488 + shifted_bits) = result;
            packet_in_byte = cached_packet_in_byte + 4;
          }
        }
      }
    }
    if ( *saved_state_address == 20 )
    {
      result = sr_net_read_bits((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + shifted_bits + 1195238528), 8);
      cached_packet_in_byte_3 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000 )
      {
        result = packet_in_byte + 12;
        if ( (int)result <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            cached_packet_in_byte_3 = packet_in_byte + 1;
            packet_in_bit = 0;
            ++packet_in_byte;
          }
          result = *(unsigned int *)((char *)&g_1853AD42C + cached_packet_in_byte_3);
          *(_QWORD *)((char *)&g_1873DE468 + shifted_bits) = *(_QWORD *)((char *)&packet_in_data + cached_packet_in_byte_3);
          *(unsigned int *)((char *)&g_1873DE470 + shifted_bits) = result;
          packet_in_byte = cached_packet_in_byte_3 + 12;
        }
      }
    }
  }
  return result;
}
#undef decoded_value_5
#undef decoded_value_6
#undef state_address_3
#undef decoded_value_7

//----- (0000000140191F90) ----------------------------------------------------
__int64            sub_140191F90(float *a1, int *a2)
{
  __int64 loaded_word;
  __int64 element_index;
  __m128d converted_vector;
  __m128d converted_vector_2;
  double source_component_y;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  double comparison_operand;
  float vector_result;
  __m128 converted_vector_5;
  double vector_result_2;
  __int64 running_total;
  double reordered_vector;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191F90[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140191F90 + 0)) /* [rsp+0h] */
#define quaternion (*(__int128 (*))(void *)(sr_frame_140191F90 + 32)) /* [rsp+20h] */
#define unused_frame_slot_48 (*(__int64 (*))(void *)(sr_frame_140191F90 + 48)) /* [rsp+30h] */

  loaded_word = *a2;
  element_index = 1;
  converted_vector = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  converted_vector_2 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( dword_140301DD8 != (_DWORD)loaded_word )
  {
    element_index = 2;
    source_component_y = (double)a2[1];
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = 1.0 - source_component_y * source_component_y * 0.00000002980959967779399;
    *((float *)&quaternion + dword_140301DD8) = source_component_y * 0.0001726545674976309;
  }
  if ( dword_140301DDC != (_DWORD)loaded_word )
  {
    converted_vector_3 = _mm_cvtsi32_si128(a2[element_index++]);
    *(double *)SR_VEC_LANES(128, converted_vector_3, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(converted_vector_3), f64)[0];
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * -0.00000002980959967779399;
    *((float *)&quaternion + dword_140301DDC) = *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE0 != (_DWORD)loaded_word )
  {
    converted_vector_4 = _mm_cvtsi32_si128(a2[element_index++]);
    *(double *)SR_VEC_LANES(128, converted_vector_4, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(converted_vector_4), f64)[0];
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * -0.00000002980959967779399;
    *((float *)&quaternion + dword_140301DE0) = *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * 0.0001726545674976309;
  }
  if ( dword_140301DE4 != (_DWORD)loaded_word )
  {
    comparison_operand = (double)a2[element_index];
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + comparison_operand * comparison_operand * -0.00000002980959967779399;
    *((float *)&quaternion + dword_140301DE4) = comparison_operand * 0.0001726545674976309;
  }
  if ( SR_VEC_LANES(128, converted_vector_2, f64)[0] <= 0.0 )
    vector_result = 0.0;
  else
    vector_result = SR_VEC_READ_LANES(128, _mm_sqrt_pd(converted_vector_2), f64)[0];
  *((float *)&quaternion + loaded_word) = vector_result;
  converted_vector_5 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(quaternion))));
  SR_VEC_LANES(128, converted_vector_5, f32)[0] = (float)((float)(SR_VEC_LANES(128, converted_vector_5, f32)[0] * SR_VEC_LANES(128, converted_vector_5, f32)[0])
                          + (float)(*((float *)&quaternion + 2) * *((float *)&quaternion + 2)))
                  + (float)((float)(*(float *)&quaternion * *(float *)&quaternion)
                          + (float)(*((float *)&quaternion + 1) * *((float *)&quaternion + 1)));
  vector_result_2 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector_5)), f64)[0];
  if ( vector_result_2 == 0.0 )
  {
    quaternion = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, converted_vector, f64)[0] = 1.0 / vector_result_2;
    running_total = 0;
    reordered_vector = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(converted_vector, converted_vector), f64)[0];
    do
    {
      *(double *)((char *)&quaternion + 4 * running_total) = COERCE_FLOAT(*(_QWORD *)((char *)&quaternion + 4 * running_total)) * reordered_vector;
      running_total += 2;
    }
    while ( running_total < 4 );
  }
  sr_math_mat3_from_quat(a1, (float *)&quaternion);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef quaternion
#undef unused_frame_slot_48

//----- (0000000140192160) ----------------------------------------------------
__int64            sub_140192160(float *a1, int *a2, char a3)
{
  __m128d converted_vector;
  char integer_difference;
  __int64 element_index;
  __m128d converted_vector_2;
  int shifted_bits;
  __int64 loaded_word;
  double component_delta;
  double scaled_ratio;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  double scaled_ratio_2;
  float vector_result;
  __m128 converted_vector_5;
  double vector_result_2;
  __int64 running_total;
  double reordered_vector;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192160[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140192160 + 0)) /* [rsp+0h] */
#define quaternion (*(__int128 (*))(void *)(sr_frame_140192160 + 32)) /* [rsp+20h] */
#define unused_frame_slot_48 (*(__int64 (*))(void *)(sr_frame_140192160 + 48)) /* [rsp+30h] */

  converted_vector = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  integer_difference = a3 - 1;
  element_index = 1;
  converted_vector_2 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  shifted_bits = 1 << integer_difference;
  loaded_word = *a2;
  component_delta = (double)shifted_bits - 1.0;
  if ( dword_140301DF8 != (_DWORD)loaded_word )
  {
    element_index = 2;
    scaled_ratio = (double)a2[1] / component_delta;
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = 1.0 - scaled_ratio * scaled_ratio * 2.0;
    *((float *)&quaternion + dword_140301DF8) = scaled_ratio * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)loaded_word )
  {
    converted_vector_3 = _mm_cvtsi32_si128(a2[element_index++]);
    *(double *)SR_VEC_LANES(128, converted_vector_3, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(converted_vector_3), f64)[0] / component_delta;
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * -2.0;
    *((float *)&quaternion + dword_140301DFC) = *(double *)SR_VEC_LANES(128, converted_vector_3, i64) * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)loaded_word )
  {
    converted_vector_4 = _mm_cvtsi32_si128(a2[element_index++]);
    *(double *)SR_VEC_LANES(128, converted_vector_4, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(converted_vector_4), f64)[0] / component_delta;
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * -2.0;
    *((float *)&quaternion + dword_140301E00) = *(double *)SR_VEC_LANES(128, converted_vector_4, i64) * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)loaded_word )
  {
    scaled_ratio_2 = (double)a2[element_index] / component_delta;
    SR_VEC_LANES(128, converted_vector_2, f64)[0] = SR_VEC_LANES(128, converted_vector_2, f64)[0] + scaled_ratio_2 * scaled_ratio_2 * -2.0;
    *((float *)&quaternion + dword_140301E04) = scaled_ratio_2 * 1.414213562373095;
  }
  if ( SR_VEC_LANES(128, converted_vector_2, f64)[0] <= 0.0 )
    vector_result = 0.0;
  else
    vector_result = SR_VEC_READ_LANES(128, _mm_sqrt_pd(converted_vector_2), f64)[0];
  *((float *)&quaternion + loaded_word) = vector_result;
  converted_vector_5 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(quaternion))));
  SR_VEC_LANES(128, converted_vector_5, f32)[0] = (float)((float)(SR_VEC_LANES(128, converted_vector_5, f32)[0] * SR_VEC_LANES(128, converted_vector_5, f32)[0])
                          + (float)(*((float *)&quaternion + 2) * *((float *)&quaternion + 2)))
                  + (float)((float)(*(float *)&quaternion * *(float *)&quaternion)
                          + (float)(*((float *)&quaternion + 1) * *((float *)&quaternion + 1)));
  vector_result_2 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(converted_vector_5)), f64)[0];
  if ( vector_result_2 == 0.0 )
  {
    quaternion = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, converted_vector, f64)[0] = 1.0 / vector_result_2;
    running_total = 0;
    reordered_vector = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(converted_vector, converted_vector), f64)[0];
    do
    {
      *(double *)((char *)&quaternion + 4 * running_total) = COERCE_FLOAT(*(_QWORD *)((char *)&quaternion + 4 * running_total)) * reordered_vector;
      running_total += 2;
    }
    while ( running_total < 4 );
  }
  sr_math_mat3_from_quat(a1, (float *)&quaternion);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef quaternion
#undef unused_frame_slot_48

//----- (0000000140192470) ----------------------------------------------------
__int64            sub_140192470(float *a1, __int64 a2, float a3, int a4)
{
  float *buffer_cursor;
  signed int shifted_bits;
  __int64 remaining_count;
  __int64 integer_difference;
  float scaled_ratio;
  float component_delta;
  __int64 result;
  float scaled_ratio_2;
  _DWORD decoded_value[4];

  buffer_cursor = a1;
  shifted_bits = (unsigned int)(1 << a4) >> 1;
  remaining_count = 3;
  integer_difference = a2 - (_QWORD)a1;
  scaled_ratio = (float)shifted_bits / a3;
  do
  {
    sr_net_read_bits(decoded_value, a4);
    component_delta = (float)(decoded_value[0] & (shifted_bits - 1));
    result = decoded_value[0] & (unsigned int)shifted_bits;
    scaled_ratio_2 = (float)(1.0 / scaled_ratio) * component_delta;
    if ( (_DWORD)result == shifted_bits )
      scaled_ratio_2 = (float)(-1.0 / scaled_ratio) * component_delta;
    *buffer_cursor = scaled_ratio_2 + *(float *)((char *)buffer_cursor + integer_difference);
    ++buffer_cursor;
    --remaining_count;
  }
  while ( remaining_count );
  return result;
}

//----- (0000000140192560) ----------------------------------------------------
__int64            sub_140192560(float *a1, float a2, int a3)
{
  char input_value;
  signed int shifted_bits;
  __int64 result;
  float scaled_ratio;
  int decoded_value;

  input_value = a3;
  sr_net_read_bits(&decoded_value, a3);
  shifted_bits = (unsigned int)(1 << input_value) >> 1;
  result = decoded_value & (unsigned int)shifted_bits;
  scaled_ratio = (float)(decoded_value & (shifted_bits - 1)) / (float)((float)shifted_bits / a2);
  *a1 = scaled_ratio;
  if ( (_DWORD)result == shifted_bits )
    *a1 = -scaled_ratio;
  return result;
}

//----- (00000001401925F0) ----------------------------------------------------
__int64            sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 masked_bits;
  float component_delta;
  __int64 element_index;
  __int64 result;
  int shifted_bits;
  double saved_shifted_bits;
  double scaled_ratio;
  double scaled_ratio_2;
  double scaled_ratio_3;
  float source_component_z;
  float source_component_y;
  float scaled_value;
  float square_root;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;

  masked_bits = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    component_delta = -1.0;
  else
    component_delta = 1.0;
  a2[*a1 & 3] = component_delta;
  element_index = 1;
  result = (unsigned int)((1 << a3) - 1);
  shifted_bits = (1 << a3) - 1;
  saved_shifted_bits = (double)shifted_bits;
  if ( masked_bits )
  {
    result = (unsigned int)shifted_bits & (a1[1] >> 1);
    scaled_ratio = 1.0 / saved_shifted_bits;
    if ( (a1[1] & 1) != 0 )
      scaled_ratio = -1.0 / saved_shifted_bits;
    element_index = 2;
    *a2 = (double)(int)result * scaled_ratio;
  }
  if ( (_DWORD)masked_bits != 1 )
  {
    result = (unsigned int)shifted_bits & (a1[element_index] >> 1);
    scaled_ratio_2 = (double)(int)result / saved_shifted_bits;
    if ( (a1[element_index] & 1) != 0 )
      scaled_ratio_2 = -1.0 / saved_shifted_bits * (double)(int)result;
    ++element_index;
    a2[1] = scaled_ratio_2;
  }
  if ( (_DWORD)masked_bits == 2 )
  {
    source_component_z = a2[2];
  }
  else
  {
    result = (unsigned int)shifted_bits & (a1[element_index] >> 1);
    scaled_ratio_3 = (double)(int)result / saved_shifted_bits;
    if ( (a1[element_index] & 1) != 0 )
      scaled_ratio_3 = -1.0 / saved_shifted_bits * (double)(int)result;
    source_component_z = scaled_ratio_3;
  }
  source_component_y = a2[1];
  scaled_value = *a2;
  square_root = fsqrt((float)((float)(scaled_value * scaled_value) + (float)(source_component_y * source_component_y)) + (float)(source_component_z * source_component_z));
  if ( square_root == 0.0 )
  {
    scaled_ratio_4 = 0.0;
    scaled_ratio_5 = 0.0;
    scaled_ratio_6 = 0.0;
  }
  else
  {
    scaled_ratio_4 = source_component_z * (float)(1.0 / square_root);
    scaled_ratio_5 = source_component_y * (float)(1.0 / square_root);
    scaled_ratio_6 = scaled_value * (float)(1.0 / square_root);
  }
  *a2 = scaled_ratio_6;
  a2[1] = scaled_ratio_5;
  a2[2] = scaled_ratio_4;
  return result;
}

//----- (0000000140192790) ----------------------------------------------------
__int64            sub_140192790(int a1, int a2)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 record_word_offset_2;
  __int64 float_word;
  int masked_bits;
  char *record_byte_offset;
  int *buffer_cursor;
  __int64 remaining_count;
  __int64 record_word_offset_3;
  int masked_bits_2;
  unsigned int saved_iteration_count;
  unsigned int saved_iteration_count_2;
  unsigned int saved_iteration_count_3;
  unsigned int integer_difference;
  __int64 cached_iteration_count;
  int iteration_count;
  __int64 iteration_count_2;
  int saved_iteration_count_4;
  signed int iteration_count_3;
  int iteration_count_4;
  signed int iteration_count_5;
  __int64 saved_iteration_count_5;
  int iteration_count_6;
  __int64 element_index;
  signed int iteration_count_7;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta;
  float component_delta_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float component_delta_3;
  float component_delta_4;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  __int64 remaining_count_2;
  float absolute_value;
  float *saved_float_word;
  unsigned int float_word_2;
  unsigned int float_word_3;
  unsigned int float_word_4;
  unsigned int float_word_5;
  unsigned int float_word_6;
  __int64 scaled_index;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192790[304];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_140192790 + 8)) /* [rsp+0h] */
#define integer_sum (*(int (*))(void *)(sr_frame_140192790 + 40)) /* [rsp+20h] */
#define saved_masked_bits (*(unsigned int (*))(void *)(sr_frame_140192790 + 44)) /* [rsp+24h] */
#define saved_absolute_value (*(float (*))(void *)(sr_frame_140192790 + 48)) /* [rsp+28h] */
#define saved_iteration_count_6 (*(unsigned int (*))(void *)(sr_frame_140192790 + 52)) /* [rsp+2Ch] */
#define saved_iteration_count_7 (*(unsigned int (*))(void *)(sr_frame_140192790 + 56)) /* [rsp+30h] */
#define saved_iteration_count_8 (*(unsigned int (*))(void *)(sr_frame_140192790 + 60)) /* [rsp+34h] */
#define integer_difference_2 (*(unsigned int (*))(void *)(sr_frame_140192790 + 64)) /* [rsp+38h] */
#define saved_iteration_count_9 (*(int (*))(void *)(sr_frame_140192790 + 68)) /* [rsp+3Ch] */
#define saved_iteration_count_10 (*(int (*))(void *)(sr_frame_140192790 + 72)) /* [rsp+40h] */
#define saved_iteration_count_11 (*(__int128 (*))(void *)(sr_frame_140192790 + 80)) /* [rsp+48h] */
#define saved_iteration_count_12 (*(int (*))(void *)(sr_frame_140192790 + 96)) /* [rsp+58h] */
#define saved_iteration_count_13 (*(__int64 (*))(void *)(sr_frame_140192790 + 104)) /* [rsp+60h] */
#define saved_iteration_count_14 (*(__int64 (*))(void *)(sr_frame_140192790 + 112)) /* [rsp+68h] */
#define lookup_index (*(__int64 (*))(void *)(sr_frame_140192790 + 120)) /* [rsp+70h] */
#define input_value_2 (*(__int64 (*))(void *)(sr_frame_140192790 + 128)) /* [rsp+78h] */
#define saved_record_word_offset (*(__int64 (*))(void *)(sr_frame_140192790 + 136)) /* [rsp+80h] */
#define integer_sum_2 (*(__int64 (*))(void *)(sr_frame_140192790 + 144)) /* [rsp+88h] */
#define saved_iteration_count_15 (*(__int64 (*))(void *)(sr_frame_140192790 + 152)) /* [rsp+90h] */
#define integer_sum_3 (*(__int64 (*))(void *)(sr_frame_140192790 + 160)) /* [rsp+98h] */
#define saved_record_word_offset_2 (*(__int64 (*))(void *)(sr_frame_140192790 + 168)) /* [rsp+A0h] */
#define input_value_3 (*(__int64 (*))(void *)(sr_frame_140192790 + 176)) /* [rsp+A8h] */
#define scaled_index_2 (*(unsigned int (*))(void *)(sr_frame_140192790 + 184)) /* [rsp+B0h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140192790 + 188)) /* [rsp+B4h] */
#define unused_written_slot_2 (*(unsigned int (*))(void *)(sr_frame_140192790 + 192)) /* [rsp+B8h] */
#define unused_written_slot_3 (*(unsigned int (*))(void *)(sr_frame_140192790 + 196)) /* [rsp+BCh] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_140192790 + 200)) /* [rsp+C0h] */
#define float_word_7 (*(unsigned int (*))(void *)(sr_frame_140192790 + 204)) /* [rsp+C4h] */
#define unused_written_slot_5 (*(unsigned int (*))(void *)(sr_frame_140192790 + 208)) /* [rsp+C8h] */
#define weighted_sum_11 (*(float (*))(void *)(sr_frame_140192790 + 212)) /* [rsp+CCh] */
#define unused_written_slot_6 (*(unsigned int (*))(void *)(sr_frame_140192790 + 216)) /* [rsp+D0h] */
#define unused_written_slot_7 (*(unsigned int (*))(void *)(sr_frame_140192790 + 220)) /* [rsp+D4h] */
#define unused_written_slot_8 (*(float (*))(void *)(sr_frame_140192790 + 224)) /* [rsp+D8h] */
#define unused_written_slot_9 (*(float (*))(void *)(sr_frame_140192790 + 228)) /* [rsp+DCh] */
#define frame_float_at_232 (*(float (*))(void *)(sr_frame_140192790 + 232)) /* [rsp+E0h] */
#define frame_float_at_236 (*(float (*))(void *)(sr_frame_140192790 + 236)) /* [rsp+E4h] */
#define frame_float_at_240 (*(float (*))(void *)(sr_frame_140192790 + 240)) /* [rsp+E8h] */
#define frame_float_at_244 (*(float (*))(void *)(sr_frame_140192790 + 244)) /* [rsp+ECh] */
#define float_word_8 (*(_DWORD (*)[2])(void *)(sr_frame_140192790 + 248)) /* [rsp+F0h] */
#define callee_output_word (*(char (*))(void *)(sr_frame_140192790 + 256)) /* [rsp+F8h] */
#define unused_frame_slot_296 (*(__int64 (*))(void *)(sr_frame_140192790 + 296)) /* [rsp+120h] */

  input_value = a1;
  record_word_offset = 104LL * a2;
  record_word_offset_2 = 180288LL * a1;
  input_value_2 = a1;
  input_value_3 = a2;
  saved_record_word_offset_2 = record_word_offset;
  float_word = record_word_offset + record_word_offset_2;
  masked_bits = *(unsigned int *)((char *)&g_19029AC68 + record_word_offset + record_word_offset_2);
  integer_sum_3 = record_word_offset + record_word_offset_2;
  saved_masked_bits = masked_bits;
  if ( masked_bits >= 3 )
  {
    record_byte_offset = &callee_output_word;
    buffer_cursor = (int *)((char *)&g_19029AC6C + float_word);
    remaining_count = (unsigned int)masked_bits;
    do
    {
      record_byte_offset += 12;
      record_word_offset_3 = 15024LL * a1 + *buffer_cursor++;
      *((_DWORD *)record_byte_offset - 5) = dword_140404A6C[3 * record_word_offset_3 + 335170685];
      *((_DWORD *)record_byte_offset - 4) = dword_140404A6C[3 * record_word_offset_3 + 335170686];
      *((_DWORD *)record_byte_offset - 3) = dword_140404A6C[3 * record_word_offset_3 + 335170687];
      --remaining_count;
    }
    while ( remaining_count );
    masked_bits_2 = *(unsigned int *)((char *)&g_19028AC4C + record_word_offset_2);
    LODWORD(record_word_offset_2) = 0;
    saved_absolute_value = 65536.0;
    saved_record_word_offset = 0;
    saved_iteration_count_11 = 0;
    saved_iteration_count = 0;
    saved_iteration_count_2 = 0;
    saved_iteration_count_3 = 0;
    integer_difference = 0;
    if ( masked_bits_2 > 0 )
    {
      cached_iteration_count = 0;
      iteration_count = 1;
      lookup_index = 0;
      integer_sum = 1;
      saved_iteration_count_6 = 0;
      saved_iteration_count_7 = 0;
      saved_iteration_count_8 = 0;
      integer_difference_2 = 0;
      do
      {
        iteration_count_2 = cached_iteration_count + 1;
        saved_iteration_count_12 = iteration_count;
        *(_QWORD *)&saved_iteration_count_11 = iteration_count_2;
        saved_iteration_count_4 = iteration_count;
        saved_iteration_count_14 = iteration_count_2;
        iteration_count_3 = iteration_count;
        if ( iteration_count < masked_bits_2 )
        {
          iteration_count_4 = iteration_count + 1;
          saved_iteration_count_10 = iteration_count + 1;
          do
          {
            ++iteration_count_2;
            iteration_count_5 = iteration_count_4;
            saved_iteration_count_15 = iteration_count_2;
            saved_iteration_count_5 = iteration_count_2;
            saved_iteration_count_13 = iteration_count_2;
            if ( iteration_count_4 < masked_bits_2 )
            {
              iteration_count_6 = iteration_count_4 + 1;
              saved_iteration_count_9 = iteration_count_4 + 1;
              do
              {
                element_index = saved_iteration_count_5 + 1;
                iteration_count_7 = iteration_count_6;
                integer_sum_2 = saved_iteration_count_5 + 1;
                if ( iteration_count_6 < masked_bits_2 )
                {
                  do
                  {
                    weighted_sum = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157369 + 4 * lookup_index];
                    weighted_sum_2 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157370 + 4 * lookup_index];
                    weighted_sum_3 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157371 + 4 * lookup_index];
                    scaled_index_2 = LODWORD(weighted_sum);
                    unused_written_slot = weighted_sum_2;
                    unused_written_slot_2 = LODWORD(weighted_sum_3);
                    weighted_sum_4 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157370 + 4 * saved_iteration_count_14];
                    weighted_sum_5 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157369 + 4 * saved_iteration_count_14];
                    float_word_7 = dword_140404A6C[45072 * input_value_2 + 335157371 + 4 * saved_iteration_count_14];
                    unused_written_slot_4 = weighted_sum_4;
                    component_delta = weighted_sum_4 - weighted_sum_2;
                    unused_written_slot_3 = LODWORD(weighted_sum_5);
                    component_delta_2 = weighted_sum_5 - weighted_sum;
                    weighted_sum_6 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157371 + 4 * saved_iteration_count_5];
                    weighted_sum_7 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157369 + 4 * saved_iteration_count_5];
                    weighted_sum_11 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157370 + 4 * saved_iteration_count_5];
                    unused_written_slot_6 = LODWORD(weighted_sum_6);
                    component_delta_3 = weighted_sum_6 - weighted_sum_3;
                    unused_written_slot_5 = LODWORD(weighted_sum_7);
                    component_delta_4 = weighted_sum_7 - weighted_sum;
                    weighted_sum_8 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157369 + 4 * element_index];
                    weighted_sum_9 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157370 + 4 * element_index];
                    weighted_sum_10 = *(float *)&dword_140404A6C[45072 * input_value_2 + 335157371 + 4 * element_index];
                    product_difference = (float)((float)(weighted_sum_11 - weighted_sum_2) * (float)(*(float *)&float_word_7 - weighted_sum_3)) - (float)(component_delta_3 * component_delta);
                    unused_written_slot_7 = LODWORD(weighted_sum_8);
                    unused_written_slot_8 = weighted_sum_9;
                    product_difference_2 = (float)(component_delta_3 * component_delta_2) - (float)(component_delta_4 * (float)(*(float *)&float_word_7 - weighted_sum_3));
                    unused_written_slot_9 = weighted_sum_10;
                    product_difference_3 = (float)(component_delta_4 * component_delta) - (float)((float)(weighted_sum_11 - weighted_sum_2) * component_delta_2);
                    square_root = fsqrt((float)((float)(product_difference_2 * product_difference_2) + (float)(product_difference * product_difference)) + (float)(product_difference_3 * product_difference_3));
                    if ( square_root == 0.0 )
                    {
                      scaled_ratio = 0.0;
                      scaled_ratio_2 = 0.0;
                      scaled_ratio_3 = 0.0;
                    }
                    else
                    {
                      scaled_ratio = product_difference * (float)(1.0 / square_root);
                      scaled_ratio_2 = product_difference_2 * (float)(1.0 / square_root);
                      scaled_ratio_3 = product_difference_3 * (float)(1.0 / square_root);
                    }
                    remaining_count_2 = saved_masked_bits;
                    if ( (double)((float)((float)((float)((float)(weighted_sum_9 - weighted_sum_2) * scaled_ratio_2) + (float)((float)(weighted_sum_8 - weighted_sum) * scaled_ratio))
                                        + (float)((float)(weighted_sum_10 - weighted_sum_3) * scaled_ratio_3)) < 0.25) == 0.0 )
                    {
                      absolute_value = 0.0;
                      saved_float_word = (float *)float_word_8;
                      do
                      {
                        sub_14002E730((__int64)&frame_float_at_232, 4, (__int64)&scaled_index_2, saved_float_word);
                        if ( absolute_value < fabs(frame_float_at_232) )
                          absolute_value = fabs(frame_float_at_232);
                        if ( absolute_value < fabs(frame_float_at_236) )
                          absolute_value = fabs(frame_float_at_236);
                        if ( absolute_value < fabs(frame_float_at_240) )
                          absolute_value = fabs(frame_float_at_240);
                        if ( absolute_value < fabs(frame_float_at_244) )
                          absolute_value = fabs(frame_float_at_244);
                        saved_float_word += 3;
                        --remaining_count_2;
                      }
                      while ( remaining_count_2 );
                      LODWORD(record_word_offset_2) = 0;
                      iteration_count = integer_sum;
                      saved_iteration_count_5 = saved_iteration_count_13;
                      if ( saved_absolute_value <= absolute_value )
                      {
                        saved_iteration_count = saved_iteration_count_6;
                        saved_iteration_count_2 = saved_iteration_count_7;
                        saved_iteration_count_3 = saved_iteration_count_8;
                        integer_difference = integer_difference_2;
                      }
                      else
                      {
                        integer_difference = integer_sum - 1;
                        saved_absolute_value = absolute_value;
                        saved_iteration_count = iteration_count_7;
                        integer_difference_2 = integer_sum - 1;
                        saved_iteration_count_6 = iteration_count_7;
                        saved_iteration_count_3 = iteration_count_3;
                        saved_iteration_count_8 = iteration_count_3;
                        saved_iteration_count_2 = iteration_count_5;
                        saved_iteration_count_7 = iteration_count_5;
                      }
                    }
                    else
                    {
                      iteration_count = integer_sum;
                    }
                    ++iteration_count_7;
                    ++element_index;
                  }
                  while ( iteration_count_7 < masked_bits_2 );
                  iteration_count_6 = saved_iteration_count_9;
                }
                saved_iteration_count_5 = integer_sum_2;
                ++iteration_count_6;
                ++iteration_count_5;
                saved_iteration_count_9 = iteration_count_6;
                saved_iteration_count_13 = integer_sum_2;
              }
              while ( iteration_count_5 < masked_bits_2 );
              iteration_count_4 = saved_iteration_count_10;
              iteration_count_2 = saved_iteration_count_15;
            }
            ++iteration_count_4;
            saved_iteration_count_14 = iteration_count_2;
            ++iteration_count_3;
            saved_iteration_count_10 = iteration_count_4;
          }
          while ( iteration_count_3 < masked_bits_2 );
          saved_iteration_count_4 = saved_iteration_count_12;
        }
        cached_iteration_count = saved_iteration_count_11;
        integer_sum = ++iteration_count;
        lookup_index = saved_iteration_count_11;
      }
      while ( saved_iteration_count_4 < masked_bits_2 );
      input_value = input_value_2;
      float_word = integer_sum_3;
      record_word_offset = saved_record_word_offset_2;
    }
    float_word_2 = dword_140404A6C[45072 * input_value + 335157370 + 4 * (int)integer_difference];
    scaled_index_2 = dword_140404A6C[45072 * input_value + 335157369 + 4 * (int)integer_difference];
    unused_written_slot_2 = dword_140404A6C[45072 * input_value + 335157371 + 4 * (int)integer_difference];
    unused_written_slot = *(float *)&float_word_2;
    float_word_3 = dword_140404A6C[45072 * input_value + 335157370 + 4 * (int)saved_iteration_count_3];
    unused_written_slot_3 = dword_140404A6C[45072 * input_value + 335157369 + 4 * (int)saved_iteration_count_3];
    float_word_7 = dword_140404A6C[45072 * input_value + 335157371 + 4 * (int)saved_iteration_count_3];
    unused_written_slot_4 = *(float *)&float_word_3;
    float_word_4 = dword_140404A6C[45072 * input_value + 335157370 + 4 * (int)saved_iteration_count_2];
    unused_written_slot_5 = dword_140404A6C[45072 * input_value + 335157369 + 4 * (int)saved_iteration_count_2];
    unused_written_slot_6 = dword_140404A6C[45072 * input_value + 335157371 + 4 * (int)saved_iteration_count_2];
    weighted_sum_11 = *(float *)&float_word_4;
    float_word_5 = dword_140404A6C[45072 * input_value + 335157370 + 4 * (int)saved_iteration_count];
    unused_written_slot_7 = dword_140404A6C[45072 * input_value + 335157369 + 4 * (int)saved_iteration_count];
    float_word_6 = dword_140404A6C[45072 * input_value + 335157371 + 4 * (int)saved_iteration_count];
    unused_written_slot_8 = *(float *)&float_word_5;
    unused_written_slot_9 = *(float *)&float_word_6;
    scaled_index = 104 * input_value_3 + 180288 * input_value;
    *(unsigned int *)((char *)&g_19029AC7C + scaled_index) = integer_difference;
    *(unsigned int *)((char *)&g_19029AC80 + scaled_index) = saved_iteration_count_3;
    *(unsigned int *)((char *)&g_19029AC84 + scaled_index) = saved_iteration_count_2;
    *(unsigned int *)((char *)&g_19029AC88 + scaled_index) = saved_iteration_count;
    if ( *(int *)((char *)&g_19029AC68 + float_word) > 0 )
    {
      do
      {
        sub_14002E730(
          (__int64)&dword_140404A6C[45072 * input_value + 335173768 + 4 * (int)record_word_offset_2] + record_word_offset,
          4,
          (__int64)&scaled_index_2,
          (float *)&float_word_8[3 * (int)record_word_offset_2]);
        record_word_offset_2 = (unsigned int)(saved_record_word_offset + 1);
        saved_record_word_offset = record_word_offset_2;
      }
      while ( (int)record_word_offset_2 < *(int *)((char *)&g_19029AC68 + float_word) );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_8
#undef integer_sum
#undef saved_masked_bits
#undef saved_absolute_value
#undef saved_iteration_count_6
#undef saved_iteration_count_7
#undef saved_iteration_count_8
#undef integer_difference_2
#undef saved_iteration_count_9
#undef saved_iteration_count_10
#undef saved_iteration_count_11
#undef saved_iteration_count_12
#undef saved_iteration_count_13
#undef saved_iteration_count_14
#undef lookup_index
#undef input_value_2
#undef saved_record_word_offset
#undef integer_sum_2
#undef saved_iteration_count_15
#undef integer_sum_3
#undef saved_record_word_offset_2
#undef input_value_3
#undef scaled_index_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef float_word_7
#undef unused_written_slot_5
#undef weighted_sum_11
#undef unused_written_slot_6
#undef unused_written_slot_7
#undef unused_written_slot_8
#undef unused_written_slot_9
#undef frame_float_at_232
#undef frame_float_at_236
#undef frame_float_at_240
#undef frame_float_at_244
#undef float_word_8
#undef callee_output_word
#undef unused_frame_slot_296

//----- (0000000140194590) ----------------------------------------------------
__int64            sub_140194590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *returned_pointer;

  returned_pointer = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)returned_pointer | 1LL, a1, -1, a2, nullptr, a3);
}

//----- (00000001401948E0) ----------------------------------------------------
__int64            sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result;
  __int64 record_word_offset;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  char *text_cursor;
  unsigned int *state_address;
  char input_byte;

  result = a1;
  record_word_offset = 5873LL * a1;
  remaining_count = (int)dword_140404A6C[record_word_offset + 283831511];
  if ( remaining_count > 0 )
  {
    buffer_cursor = &dword_140404A6C[record_word_offset + 283831512];
    do
    {
      scaled_index = 2570LL * (int)*buffer_cursor;
      result = (int)dword_140404A6C[scaled_index + 275754072];
      if ( (int)result < 256 )
      {
        text_cursor = a2;
        dword_140404A6C[6 * result + 275754073 + scaled_index] = a3;
        state_address = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index + 275754072] + 275754074 + scaled_index];
        do
        {
          input_byte = *text_cursor++;
          *(_BYTE *)state_address = input_byte;
          state_address = (unsigned int *)((char *)state_address + 1);
        }
        while ( input_byte );
        result = scaled_index * 4 + 24LL * (int)dword_140404A6C[scaled_index + 275754072];
        *(unsigned int *)((char *)&g_181FEFBE4 + result) = 0;
        ++dword_140404A6C[scaled_index + 275754072];
      }
      ++buffer_cursor;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (00000001401949C0) ----------------------------------------------------
__int64            sub_1401949C0(int a1)
{
  __int64 record_word_offset;
  int integer_quotient;
  __int64 table_value;
  int table_value_2;
  __int64 result;
  int integer_sum;
  _DWORD *unused_written_slot;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  unsigned int *state_address_5;
  signed int scaled_index;

  record_word_offset = 5873LL * a1;
  integer_quotient = 0;
  table_value = (int)dword_140404A6C[record_word_offset + 283831510];
  if ( (_DWORD)table_value != -1 )
  {
    if ( (int)(dword_140404A6C[3597 * table_value + 71856275] - 1000) / 100 >= 0 )
      integer_quotient = (int)(dword_140404A6C[3597 * table_value + 71856275] - 1000) / 100;
    if ( integer_quotient > 1000 )
      integer_quotient = 1000;
  }
  table_value_2 = dword_140404A6C[record_word_offset + 283831506];
  if ( table_value_2 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * table_value_2);
  integer_sum = result + integer_quotient;
  if ( !g_16B2AAF28 )
  {
    result = 2156LL * a1;
    unused_written_slot = (unsigned int *)((char *)&g_16B2AAF34 + result);
    if ( *(int *)((char *)&g_16B2AAF34 + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2AAF2C * integer_sum) >> 32) >> 31;
      *unused_written_slot = g_16B2AAF2C + (signed int)(g_16B2AAF2C * integer_sum) / 100;
    }
  }
  if ( !g_16B2CCC9C )
  {
    result = (__int64)&g_16B2CCCA8;
    state_address = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*state_address > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2CCCA0 * integer_sum) >> 32) >> 31;
      *state_address = g_16B2CCCA0 + (signed int)(g_16B2CCCA0 * integer_sum) / 100;
    }
  }
  if ( !g_16B2EEA10 )
  {
    result = (__int64)&g_16B2EEA1C;
    state_address_2 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*state_address_2 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B2EEA14 * integer_sum) >> 32) >> 31;
      *state_address_2 = g_16B2EEA14 + (signed int)(g_16B2EEA14 * integer_sum) / 100;
    }
  }
  if ( !g_16B310784 )
  {
    result = (__int64)&g_16B310790;
    state_address_3 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*state_address_3 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B310788 * integer_sum) >> 32) >> 31;
      *state_address_3 = g_16B310788 + (signed int)(g_16B310788 * integer_sum) / 100;
    }
  }
  if ( !g_16B3324F8 )
  {
    result = (__int64)&g_16B332504;
    state_address_4 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*state_address_4 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B3324FC * integer_sum) >> 32) >> 31;
      *state_address_4 = g_16B3324FC + (signed int)(g_16B3324FC * integer_sum) / 100;
    }
  }
  if ( !g_16B35426C )
  {
    result = (__int64)&g_16B354278;
    state_address_5 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*state_address_5 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * g_16B354270 * integer_sum) >> 32) >> 31;
      *state_address_5 = g_16B354270 + (signed int)(g_16B354270 * integer_sum) / 100;
    }
  }
  if ( !g_16B375FE0 && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    scaled_index = g_16B375FE4 * integer_sum;
    dword_140404A6C[539 * a1 + 180208992] = g_16B375FE4 + scaled_index / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * scaled_index) >> 32) >> 31;
  }
  return result;
}

//----- (0000000140194C10) ----------------------------------------------------
__int64            sub_140194C10(int a1)
{
  __int64 input_value;
  __int64 result;
  int iteration_count;
  unsigned int *state_address;
  int integer_quotient;
  int integer_quotient_2;
  int iteration_count_2;
  unsigned int *state_address_2;
  unsigned int loaded_word;

  input_value = a1;
  result = (__int64)&g_151620CE4;
  iteration_count = 0;
  do
  {
    if ( *(_DWORD *)(result - 132) && *(_DWORD *)result == (_DWORD)input_value )
      ++iteration_count;
    if ( *(_DWORD *)(result + 14256) && *(_DWORD *)(result + 14388) == (_DWORD)input_value )
      ++iteration_count;
    if ( *(_DWORD *)(result + 28644) && *(_DWORD *)(result + 28776) == (_DWORD)input_value )
      ++iteration_count;
    if ( *(_DWORD *)(result + 43032) && *(_DWORD *)(result + 43164) == (_DWORD)input_value )
      ++iteration_count;
    result += 57552;
  }
  while ( result < (__int64)&g_1519A40E4 );
  if ( iteration_count )
  {
    state_address = &dword_140404A6C[5 * input_value + 188872237];
    integer_quotient = 2 * ((int)*state_address / 10);
    if ( (int)*state_address / 10 >= 0 )
      integer_quotient = (int)*state_address / 10;
    if ( iteration_count <= 1 )
    {
      integer_quotient_2 = integer_quotient;
    }
    else
    {
      integer_quotient /= 2;
      integer_quotient_2 = integer_quotient / (iteration_count - 1);
    }
    result = 23492 * input_value;
    iteration_count_2 = 0;
    state_address_2 = &g_151620CB8;
    do
    {
      if ( *(state_address_2 - 22) && state_address_2[11] == (_DWORD)input_value )
      {
        loaded_word = *state_address_2;
        if ( dword_140404A6C[5873 * input_value + 283831510] == iteration_count_2 )
          result = integer_quotient + loaded_word;
        else
          result = integer_quotient_2 + loaded_word;
        *state_address_2 = result;
      }
      ++iteration_count_2;
      state_address_2 += 3597;
    }
    while ( (__int64)state_address_2 < (__int64)&g_1519A40B8 );
    *state_address = 0;
  }
  return result;
}

//----- (0000000140194D40) ----------------------------------------------------
__int64 sub_140194D40()
{
  int element_index;
  unsigned int *state_address;
  __int64 scaled_index;
  int state_word;
  int record_byte_offset;
  signed int vector_result;
  __m128i si128;
  __m128i vector_result_2;
  __int64 record_byte_offset_2;
  unsigned int *state_address_2;
  __m128i converted_vector;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __m128i converted_vector_4;
  __m128i vector_result_3;
  __m128i vector_result_4;
  unsigned int *state_address_3;
  __int64 remaining_count;
  signed int saved_vector_result;
  int iteration_count;
  int rand_result;
  __int64 saved_rand_result;
  __int64 scaled_index_2;
  __int64 table_value;
  __int64 scaled_index_3;
  signed int iteration_count_2;
  unsigned int *state_address_4;
  __int64 table_value_2;
  __int64 scaled_index_4;
  int rand_result_2;
  __int64 scaled_index_5;
  __int64 rand_result_3;
  int i;
       char *table_value_3;
       char **state_address_5;
       char *text_cursor;
  char input_byte;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  char *text_cursor_2;
  unsigned int *state_address_6;
  char input_byte_2;
  int rand_result_4;
  BOOL comparison_result;
  int rand_result_5;
  __int64 remaining_count_2;
  int integer_quotient;
  __int64 rand_result_6;
  __int64 scaled_index_8;
  int integer_sum;
  unsigned int *state_address_7;
  unsigned int *state_address_8;
  char *text_cursor_3;
  char input_byte_3;
  char *state_address_9;
  char input_byte_4;
  char *state_address_10;
  char input_byte_5;
  char *text_cursor_4;
  char input_byte_6;
  unsigned int *state_address_11;
  __int64 remaining_count_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140194D40[848];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140194D40 + 0)) /* [rsp+0h] */
#define table_value_4 (*(unsigned int (*))(void *)(sr_frame_140194D40 + 48)) /* [rsp+30h] */
#define saved_element_index (*(__int64 (*))(void *)(sr_frame_140194D40 + 56)) /* [rsp+38h] */
#define scratch_buffer (*(char (*)[256])(void *)(sr_frame_140194D40 + 64)) /* [rsp+40h] */
#define lookup_index (*(_BYTE (*)[512])(void *)(sr_frame_140194D40 + 320)) /* [rsp+140h] */
#define unused_frame_slot_832 (*(__int64 (*))(void *)(sr_frame_140194D40 + 832)) /* [rsp+340h] */

  element_index = 0;
  state_address = &g_16B2CCC94;
  while ( *(state_address - 34653) )
  {
    if ( !*state_address )
    {
      ++element_index;
      break;
    }
    if ( !state_address[34653] )
    {
      element_index += 2;
      break;
    }
    if ( !state_address[69306] )
    {
      element_index += 3;
      break;
    }
    state_address += 138612;
    element_index += 4;
    if ( (__int64)state_address >= (__int64)&g_16D4A4094 )
      break;
  }
  if ( element_index != -1 )
  {
    scaled_index = 34653LL * element_index;
    saved_element_index = element_index;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 180001070]), 0, 0x21D70u);
    state_word = g_1B46590BC;
    dword_140404A6C[scaled_index + 180001069] = 1;
    if ( state_word )
    {
      record_byte_offset = 0;
      vector_result = 0x10000;
      if ( state_word >= 8 && dword_140302080 >= 2 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
        vector_result_2 = si128;
        record_byte_offset_2 = 0;
        state_address_2 = &g_1B46598DC;
        do
        {
          converted_vector = _mm_cvtsi32_si128(state_address_2[259]);
          record_byte_offset += 8;
          converted_vector_2 = _mm_cvtsi32_si128(*(state_address_2 - 259));
          record_byte_offset_2 += 8;
          converted_vector_3 = _mm_cvtsi32_si128(*state_address_2);
          converted_vector_4 = _mm_cvtsi32_si128(*(state_address_2 - 518));
          state_address_2 += 2072;
          si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(converted_vector_4, converted_vector_2), _mm_unpacklo_epi32(converted_vector_3, converted_vector)));
          vector_result_2 = _mm_min_epi32(
                 vector_result_2,
                 _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(state_address_2 - 1554)), _mm_cvtsi32_si128(*(state_address_2 - 1295))),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(state_address_2 - 1036)), _mm_cvtsi32_si128(*(state_address_2 - 777)))));
        }
        while ( record_byte_offset_2 < (int)(state_word - (state_word & 0x80000007)) );
        vector_result_3 = _mm_min_epi32(si128, vector_result_2);
        vector_result_4 = _mm_min_epi32(vector_result_3, _mm_srli_si128(vector_result_3, 8));
        vector_result = _mm_cvtsi128_si32(_mm_min_epi32(vector_result_4, _mm_srli_si128(vector_result_4, 4)));
      }
      if ( record_byte_offset < state_word )
      {
        state_address_3 = &dword_140404A6C[259 * record_byte_offset + 487149974];
        remaining_count = (unsigned int)(state_word - record_byte_offset);
        do
        {
          saved_vector_result = *state_address_3;
          state_address_3 += 259;
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
      scaled_index_2 = 259LL * rand_result;
      table_value = (int)dword_140404A6C[scaled_index_2 + 487149973];
      ++dword_140404A6C[scaled_index_2 + 487149974];
      scaled_index_3 = 14019 * table_value;
      iteration_count_2 = 0;
      state_address_4 = &g_1816DEB80;
      table_value_2 = (int)dword_140404A6C[scaled_index_3 + 225641322];
      table_value_4 = dword_140404A6C[scaled_index_3 + 225641321];
      while ( *state_address_4 )
      {
        ++iteration_count_2;
        state_address_4 += 290;
        if ( (__int64)state_address_4 >= (__int64)&g_181FEEB80 )
          return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( iteration_count_2 != -1 )
      {
        scaled_index_4 = 290LL * iteration_count_2;
        dword_140404A6C[34653 * element_index + 180035569] = iteration_count_2;
        dword_140404A6C[scaled_index_4 + 273377349] = 1;
        dword_140404A6C[scaled_index_4 + 273377606] = 0;
        rand_result_2 = 0;
        if ( &dword_140404A6C[scaled_index_2 + 487149976] )
          rand_result_2 = rand() % (int)dword_140404A6C[scaled_index_2 + 487149975];
        scaled_index_5 = (int)dword_140404A6C[259 * saved_rand_result + 487149976 + rand_result_2];
        rand_result_3 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[rand_result_3 + 485542517] )
            break;
          rand_result_3 = rand() & 0x1F;
        }
        dword_140404A6C[rand_result_3 + 485542517] = 1;
        table_value_3 = off_1402B2000[rand_result_3];
        state_address_5 = &off_1402B2000[rand_result_3];
        text_cursor = table_value_3;
        do
        {
          input_byte = *text_cursor;
          text_cursor[(intptr_t)((uintptr_t)(lookup_index) - (uintptr_t)(table_value_3))] = *text_cursor;
          ++text_cursor;
        }
        while ( input_byte );
        crt_sprintf(scratch_buffer, "%s.DOC", table_value_3);
        scaled_index_6 = 2570 * scaled_index_5;
        scaled_index_7 = (int)dword_140404A6C[2570 * scaled_index_5 + 275754072];
        if ( (int)scaled_index_7 < 256 )
        {
          dword_140404A6C[6 * scaled_index_7 + 275754073 + scaled_index_6] = iteration_count_2;
          text_cursor_2 = scratch_buffer;
          state_address_6 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_6 + 275754072] + 275754074 + scaled_index_6];
          do
          {
            input_byte_2 = *text_cursor_2++;
            *(_BYTE *)state_address_6 = input_byte_2;
            state_address_6 = (unsigned int *)((char *)state_address_6 + 1);
          }
          while ( input_byte_2 );
          dword_140404A6C[6 * (int)dword_140404A6C[scaled_index_6 + 275754072]++ + 275754078 + scaled_index_6] = 0;
        }
        crt_sprintf(scratch_buffer, "%s", *state_address_5);
        rand_result_4 = rand();
        comparison_result = rand_result_4 == 5 * (rand_result_4 / 5);
        rand_result_5 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * element_index + 180001072] = rand_result_5;
        if ( element_index == g_16B2AAF18 )
          dword_140404A6C[34653 * element_index + 180001072] = 5 * rand_result_5;
        remaining_count_2 = 3;
        do
        {
          integer_quotient = 0;
          rand_result_6 = rand() % 6;
          scaled_index_8 = (int)dword_140404A6C[5873 * rand_result_6 + 283831510];
          if ( (_DWORD)scaled_index_8 != -1 )
          {
            if ( (int)(dword_140404A6C[3597 * scaled_index_8 + 71856275] - 1000) / 100 >= 0 )
              integer_quotient = (int)(dword_140404A6C[3597 * scaled_index_8 + 71856275] - 1000) / 100;
            if ( integer_quotient > 1000 )
              integer_quotient = 1000;
          }
          dword_140404A6C[34653 * element_index + 180001074 + 539 * rand_result_6] = dword_140404A6C[34653 * element_index + 180001072]
                                                              + (int)(integer_quotient * dword_140404A6C[34653 * element_index + 180001072])
                                                              / 100;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        integer_sum = element_index + 200;
        dword_140404A6C[34653 * element_index + 180035589] = element_index + 200;
        crt_sprintf(&dword_140404A6C[scaled_index + 180035590], "INTEL%02d.CDE", element_index);
        state_address_7 = &dword_140404A6C[396 * table_value_2 + 225426047];
        state_address_8 = &dword_140404A6C[396 * table_value_4 + 225426047];
        sub_14012F890(
          &dword_140404A6C[290 * integer_sum + 273377350],
          scratch_buffer,
          (__int64)state_address_8,
          (__int64)state_address_7,
          (__int64)off_1402B2100[saved_element_index],
          comparison_result);
        sub_140115FF0(integer_sum);
        text_cursor_3 = scratch_buffer;
        do
        {
          input_byte_3 = *text_cursor_3;
          *((_BYTE *)&g_16B2CCB90 + scaled_index * 4 - (_QWORD)scratch_buffer + (_QWORD)text_cursor_3) = *text_cursor_3;
          ++text_cursor_3;
        }
        while ( input_byte_3 );
        state_address_9 = (char *)&g_16B2CCBD0 + scaled_index * 4 - (_QWORD)state_address_8;
        do
        {
          input_byte_4 = *(_BYTE *)state_address_8;
          state_address_9[(_QWORD)state_address_8] = *(_BYTE *)state_address_8;
          state_address_8 = (unsigned int *)((char *)state_address_8 + 1);
        }
        while ( input_byte_4 );
        state_address_10 = (char *)&g_16B2CCC10 + scaled_index * 4 - (_QWORD)state_address_7;
        do
        {
          input_byte_5 = *(_BYTE *)state_address_7;
          state_address_10[(_QWORD)state_address_7] = *(_BYTE *)state_address_7;
          state_address_7 = (unsigned int *)((char *)state_address_7 + 1);
        }
        while ( input_byte_5 );
        text_cursor_4 = lookup_index;
        do
        {
          input_byte_6 = *text_cursor_4;
          *((_BYTE *)&g_16B2CCC50 + scaled_index * 4 - (_QWORD)lookup_index + (_QWORD)text_cursor_4) = *text_cursor_4;
          ++text_cursor_4;
        }
        while ( input_byte_6 );
        dword_140404A6C[scaled_index + 180035721] = comparison_result;
        state_address_11 = &dword_140404A6C[scaled_index + 180001596];
        remaining_count_3 = 6;
        do
        {
          crt_sprintf(state_address_11, (     char *)&dword_140273614);
          state_address_11 += 539;
          --remaining_count_3;
        }
        while ( remaining_count_3 );
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef table_value_4
#undef saved_element_index
#undef scratch_buffer
#undef lookup_index
#undef unused_frame_slot_832

// 140194E6F: conditional instruction was optimized away because edx.4>=8

//----- (0000000140195970) ----------------------------------------------------
__int64 sub_140195970()
{
  signed int state_word;
  unsigned int *state_address;
  int integer_sum;
  unsigned int *state_address_2;
  __int64 running_total;
  __int64 remaining_count;
  int rand_result;
  __int64 table_value;
  __int64 rand_result_2;
  int i;
  __int64 scaled_index;
  __int64 integer_sum_2;
  __int64 scaled_index_2;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  _BYTE *byte_cursor;
  int table_value_2;
  int loaded_word;
  unsigned int iteration_count;
  __int64 iteration_count_2;
  unsigned int *state_address_5;
  __int64 scaled_index_3;
  char *text_cursor;
  unsigned int *state_address_6;
  char input_byte;
  signed int cached_j;
  signed int iteration_count_3;
  int *buffer_cursor;
  __int64 scaled_index_4;
  __int64 remaining_count_2;
  __int64 rand_result_3;
  int rand_result_4;
  unsigned int *state_address_7;
  __int64 scaled_index_5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195970[576];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140195970 + 0)) /* [rsp+0h] */
#define j (*(int (*))(void *)(sr_frame_140195970 + 32)) /* [rsp+20h] */
#define scratch_buffer (*(_BYTE (*)[512])(void *)(sr_frame_140195970 + 48)) /* [rsp+30h] */
#define unused_frame_slot_560 (*(__int64 (*))(void *)(sr_frame_140195970 + 560)) /* [rsp+230h] */

  state_word = g_1B46590BC;
  state_address = &g_1B46590C8;
  integer_sum = 0;
  j = 0;
  if ( (int)g_1B46590BC > 0 )
  {
    state_address_2 = &g_1B46590C8;
    running_total = 0;
    do
    {
      remaining_count = 64;
      do
      {
        rand_result = 0;
        if ( &dword_140404A6C[259 * integer_sum + 487149976] )
          rand_result = rand() % (int)*state_address_2;
        table_value = (int)dword_140404A6C[running_total + 487149976 + rand_result];
        rand_result_2 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[rand_result_2 + 485542517] )
            break;
          rand_result_2 = rand() & 0x1F;
        }
        crt_sprintf(scratch_buffer, "%s.DOC", off_1402B2000[rand_result_2]);
        scaled_index = 2570 * table_value;
        integer_sum_2 = 0;
        scaled_index_2 = (int)dword_140404A6C[2570 * table_value + 275754072];
        if ( (int)scaled_index_2 <= 0 )
        {
LABEL_17:
          iteration_count = 0;
          iteration_count_2 = 0;
          state_address_5 = &g_1816DEB80;
          while ( *state_address_5 )
          {
            ++iteration_count;
            ++iteration_count_2;
            state_address_5 += 290;
            if ( (__int64)state_address_5 >= (__int64)&g_181FEEB80 )
              goto LABEL_26;
          }
          if ( iteration_count != -1 )
          {
            scaled_index_3 = 290 * iteration_count_2;
            dword_140404A6C[scaled_index_3 + 273377349] = 1;
            dword_140404A6C[scaled_index_3 + 273377606] = 0;
            if ( (int)scaled_index_2 < 256 )
            {
              dword_140404A6C[6 * scaled_index_2 + 275754073 + scaled_index] = iteration_count;
              text_cursor = scratch_buffer;
              state_address_6 = &dword_140404A6C[6 * (int)dword_140404A6C[scaled_index + 275754072] + 275754074 + scaled_index];
              do
              {
                input_byte = *text_cursor++;
                *(_BYTE *)state_address_6 = input_byte;
                state_address_6 = (unsigned int *)((char *)state_address_6 + 1);
              }
              while ( input_byte );
              dword_140404A6C[6 * (int)dword_140404A6C[scaled_index + 275754072]++ + 275754078 + scaled_index] = 0;
            }
          }
        }
        else
        {
          state_address_3 = &dword_140404A6C[scaled_index + 275754078];
          while ( 1 )
          {
            if ( !*state_address_3 )
            {
              state_address_4 = &dword_140404A6C[6 * integer_sum_2 + 275754074 + scaled_index];
              byte_cursor = (_BYTE *)(scratch_buffer - (_BYTE *)state_address_4);
              do
              {
                table_value_2 = (unsigned __int8)byte_cursor[(_QWORD)state_address_4];
                loaded_word = *(unsigned __int8 *)state_address_4 - table_value_2;
                if ( loaded_word )
                  break;
                state_address_4 = (unsigned int *)((char *)state_address_4 + 1);
              }
              while ( table_value_2 );
              if ( !loaded_word )
                break;
            }
            integer_sum_2 = (unsigned int)(integer_sum_2 + 1);
            state_address_3 += 6;
            if ( (int)integer_sum_2 >= (int)scaled_index_2 )
              goto LABEL_17;
          }
        }
LABEL_26:
        --remaining_count;
      }
      while ( remaining_count );
      running_total += 259;
      state_word = g_1B46590BC;
      integer_sum = j + 1;
      state_address_2 += 259;
      j = integer_sum;
    }
    while ( integer_sum < (int)g_1B46590BC );
    state_address = &g_1B46590C8;
  }
  cached_j = 0;
  for ( j = 0; cached_j < state_word; j = cached_j )
  {
    iteration_count_3 = 0;
    if ( (int)*state_address > 0 )
    {
      buffer_cursor = (int *)(state_address + 1);
      do
      {
        scaled_index_4 = 2570LL * *buffer_cursor;
        if ( (int)dword_140404A6C[scaled_index_4 + 275754072] > 1 )
        {
          remaining_count_2 = 64;
          do
          {
            rand_result_3 = rand() % (int)dword_140404A6C[scaled_index_4 + 275754072];
            rand_result_4 = rand() % (int)dword_140404A6C[scaled_index_4 + 275754072];
            if ( (_DWORD)rand_result_3 != rand_result_4 )
            {
              state_address_7 = &dword_140404A6C[6 * rand_result_3 + 275754073 + scaled_index_4];
              scaled_index_5 = scaled_index_4 * 4 + 24LL * rand_result_4;
              *(_OWORD *)&dword_140404A6C[scaled_index_4 + 275755609] = *(_OWORD *)state_address_7;
              *(_QWORD *)&dword_140404A6C[scaled_index_4 + 275755613] = *((_QWORD *)state_address_7 + 2);
              *(_OWORD *)state_address_7 = *(_OWORD *)((char *)&g_181FEFBD0 + scaled_index_5);
              *((_QWORD *)state_address_7 + 2) = *(_QWORD *)((char *)&g_181FEFBE0 + scaled_index_5);
              *(_OWORD *)((char *)&g_181FEFBD0 + scaled_index_5) = *(_OWORD *)&dword_140404A6C[scaled_index_4 + 275755609];
              *(_QWORD *)((char *)&g_181FEFBE0 + scaled_index_5) = *(_QWORD *)&dword_140404A6C[scaled_index_4 + 275755613];
            }
            --remaining_count_2;
          }
          while ( remaining_count_2 );
        }
        ++iteration_count_3;
        ++buffer_cursor;
      }
      while ( iteration_count_3 < (int)*state_address );
      state_word = g_1B46590BC;
      cached_j = j;
    }
    ++cached_j;
    state_address += 259;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef j
#undef scratch_buffer
#undef unused_frame_slot_560

//----- (0000000140195D20) ----------------------------------------------------
__int64            sub_140195D20(int a1,      char *a2)
{
  __int64 input_value;
  char *table_value;
  __int64 integer_quotient;
       char *literal_text;
  char *destination_text;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  int createitem_result;
  __int64 saved_createitem_result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195D20[2176];
#define callee_output_word (*(_BYTE (*)[32])(void *)(sr_frame_140195D20 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140195D20 + 32)) /* [rsp+20h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140195D20 + 48)) /* [rsp+30h] */
#define matrix (*(_OWORD (*)[2])(void *)(sr_frame_140195D20 + 64)) /* [rsp+40h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140195D20 + 96)) /* [rsp+60h] */
#define scratch_buffer (*(__m128i (*)[128])(void *)(sr_frame_140195D20 + 112)) /* [rsp+70h] */
#define unused_frame_slot_2160 (*(__int64 (*))(void *)(sr_frame_140195D20 + 2160)) /* [rsp+870h] */

  input_value = a1;
  table_value = off_1402B2890[a1];
  integer_quotient = (unsigned int)((signed int)game_day_time / 3600 / 60 % -12);
  literal_text = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)integer_quotient )
    integer_quotient = 12;
  LODWORD(packed_word_bits) = (signed int)game_day_time / 3600 % 60;
  if ( (int)game_day_time >= 2592000 )
    literal_text = "\n%s Internal Memo\n%d:%02d PM\n\n";
  crt_sprintf(scratch_buffer, literal_text, table_value, integer_quotient, packed_word_bits);
  destination_text = &callee_output_word[111];
  while ( *++destination_text != 0 )
    ;
  strcpy(destination_text, a2);
  matrix[0] = xmmword_140278D30;
  matrix[1] = xmmword_140278D30;
  unused_written_slot = 1065353216;
  weighted_sum = *(float *)&dword_140404A6C[5873 * input_value + 283831498];
  weighted_sum_2 = *(float *)&dword_140404A6C[5873 * input_value + 283831499];
  weighted_sum_3 = *(float *)&dword_140404A6C[5873 * input_value + 283831500];
  sr_math_mat3_rotate_rows((__int64)matrix, (float *)matrix + 3, sr_export_float_lane_container(sr_text_float_bits((float)(*(float *)&dword_140404A6C[5873 * input_value + 283831497] - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
  float_buffer[0] = weighted_sum - (float)(*(float *)matrix * 0.5);
  float_buffer[2] = weighted_sum_3 - (float)(*((float *)matrix + 2) * 0.5);
  float_buffer[1] = weighted_sum_2 - (float)(*((float *)matrix + 1) * 0.5);
  createitem_result = sr_CreateItem(34, float_buffer, nullptr, (float *)matrix);
  saved_createitem_result = createitem_result;
  if ( createitem_result != -1 )
  {
    sub_1400584B0(createitem_result, scratch_buffer);
    dword_140404A6C[1760 * saved_createitem_result + 278845900] = 0x10000;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef callee_output_word
#undef packed_word_bits
#undef float_buffer
#undef matrix
#undef unused_written_slot
#undef scratch_buffer
#undef unused_frame_slot_2160

//----- (0000000140195FB0) ----------------------------------------------------
__int64            sub_140195FB0(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 input_value;
  __int64 record_word_offset_2;
  __int64 scaled_index;
  int masked_bits;
  _BYTE *state_address;
  int *state_address_2;
  __int64 iteration_count;
  unsigned int *state_address_3;
  unsigned int *state_address_4;
  __int64 remaining_count;
  __int64 saved_packed_word_bits;
  int saved_packed_word_bits_2;
  int iteration_count_2;
  unsigned int *state_address_5;
       char **text_cursor;
  __int64 running_total;
  int scaled_index_2;
  signed int loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195FB0[1088];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140195FB0 + 32)) /* [rsp+20h] */
#define scaled_index_3 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 40)) /* [rsp+28h] */
#define scratch_buffer (*(char (*)[1024])(void *)(sr_frame_140195FB0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_1072 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 1072)) /* [rsp+430h] */

  record_word_offset = 34653LL * a1;
  input_value = a2;
  record_word_offset_2 = 539LL * a2;
  LODWORD(packed_word_bits) = a2;
  scaled_index_3 = record_word_offset_2 * 4;
  scaled_index = record_word_offset_2 * 4 + record_word_offset * 4;
  if ( !dword_140404A6C[record_word_offset_2 + 180001073 + record_word_offset] )
  {
    *(unsigned int *)((char *)&g_16B2AAF30 + scaled_index) = 1;
    if ( (int)dword_140404A6C[record_word_offset + 180001071] < 2 )
    {
      masked_bits = *(unsigned int *)((char *)&g_16B2AAF34 + scaled_index);
      state_address = (char *)&g_16B2AAF5C + scaled_index;
      state_address_2 = (int *)((char *)&g_16B2AAF58 + scaled_index);
      if ( masked_bits <= 0 )
      {
        *state_address_2 = 0;
        crt_sprintf(state_address, "TRADE");
        ++*state_address_2;
        crt_sprintf((_BYTE *)&g_16B2AB75C + scaled_index, "Trade");
        saved_packed_word_bits_2 = packed_word_bits;
        iteration_count_2 = 0;
        state_address_5 = &dword_140404A6C[record_word_offset + 180001083];
        text_cursor = (     char **)off_1402B2890;
        running_total = 0;
        do
        {
          if ( iteration_count_2 != saved_packed_word_bits_2 )
          {
            scaled_index_2 = *(state_address_5 - 9);
            if ( scaled_index_2 > 0 )
            {
              if ( dword_140404A6C[record_word_offset + 180001071] )
              {
                loaded_word = *state_address_5;
              }
              else
              {
                *state_address_5 = 0;
                loaded_word = 0;
              }
              crt_sprintf(
                &dword_140404A6C[64 * (__int64)loaded_word + 180001084 + running_total + record_word_offset],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[input_value],
                scaled_index_2);
              ++*state_address_5;
              crt_sprintf(&dword_140404A6C[record_word_offset + 180001596 + running_total], "Trade");
              crt_sprintf(
                scratch_buffer,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[input_value],
                (     char *)&dword_140404A6C[record_word_offset + 180035705]);
              sub_140195D20(iteration_count_2, scratch_buffer);
              crt_sprintf(
                (_BYTE *)&dword_140404A6C[64 * (__int64)*state_address_2 + 180001084 + record_word_offset] + scaled_index_3,
                "%s WANTS THE FILE",
                *text_cursor);
              ++*state_address_2;
              saved_packed_word_bits_2 = packed_word_bits;
            }
          }
          ++iteration_count_2;
          running_total += 539;
          state_address_5 += 539;
          ++text_cursor;
        }
        while ( iteration_count_2 < 6 );
        dword_140404A6C[record_word_offset + 180001071] = 1;
      }
      else
      {
        dword_140404A6C[5 * input_value + 188872237] += masked_bits;
        packed_word_bits = 20 * input_value;
        *state_address_2 = 0;
        crt_sprintf(state_address, "MISSION SUCCESS");
        crt_sprintf(
          &dword_140404A6C[64 * (__int64)++*state_address_2 + 180001084 + record_word_offset + record_word_offset_2],
          "VALUE: $%d",
          *(unsigned int *)((char *)&g_16B2AAF34 + scaled_index));
        ++*state_address_2;
        crt_sprintf((_BYTE *)&g_16B2AB75C + scaled_index, "Success");
        iteration_count = 0;
        state_address_3 = &dword_140404A6C[record_word_offset + 180001083];
        state_address_4 = &dword_140404A6C[record_word_offset + 180001596];
        remaining_count = 6;
        do
        {
          if ( iteration_count != input_value )
          {
            *state_address_3 = 0;
            crt_sprintf((_BYTE *)state_address_4 - 2048, "MISSION CLOSED");
            ++*state_address_3;
            crt_sprintf(state_address_4, "Closed");
          }
          state_address_4 += 539;
          ++iteration_count;
          state_address_3 += 539;
          --remaining_count;
        }
        while ( remaining_count );
        saved_packed_word_bits = packed_word_bits;
        dword_140404A6C[record_word_offset + 180001071] = 2;
        if ( *(int *)((char *)&g_16D48232C + saved_packed_word_bits) > 0 )
          *(unsigned int *)((char *)&g_16D48232C + saved_packed_word_bits) = 1;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef packed_word_bits
#undef scaled_index_3
#undef scratch_buffer
#undef unused_frame_slot_1072

//----- (0000000140196320) ----------------------------------------------------
__int64            sub_140196320(int a1, char *a2, unsigned int a3, char *a4)
{
  __int64 result;
  __int64 record_word_offset;
  unsigned int *state_address;
  char input_byte;
  __int64 file_handle;
  int iteration_count;
  int i;
  __int64 scaled_index;
  __int64 remaining_count;
  unsigned int *destination_buffer;
  __int64 destination_buffer_2;
  __int64 remaining_count_2;
  __int64 remaining_count_3;
  __int64 scaled_index_2;
  __int64 destination_buffer_3;
  __int64 remaining_count_4;
  __int64 destination_buffer_4;
  int ftell_sr_result;
  unsigned __int64 shifted_bits;
  unsigned int table_value;
  int destination_buffer_5;

  result = a1;
  record_word_offset = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    state_address = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      input_byte = *a2++;
      *(_BYTE *)state_address = input_byte;
      state_address = (unsigned int *)((char *)state_address + 1);
    }
    while ( input_byte );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[record_word_offset + 293512634] + 293512636 + record_word_offset] = ftell_sr(*(FILE **)&dword_140404A6C[record_word_offset + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        file_handle = *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629];
        if ( file_handle )
        {
          destination_buffer_5 = 1;
          crt_fread((__int64)&destination_buffer_5, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBA0, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBA4, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBA8, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBAC, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBB0, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBB4, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBB8, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBBC, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBC0, 4, 1, file_handle);
          crt_fread((__int64)&g_144FBFBC4, 4, 1, file_handle);
          iteration_count = 0;
          for ( i = 0; i < (int)g_144FBFBC4; ++i )
          {
            scaled_index = 87LL * i;
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852378], 4, 1, file_handle);
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852376], 4, 1, file_handle);
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852379], 4, 1, file_handle);
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852377], 4, 1, file_handle);
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852460], 4, 1, file_handle);
            crt_fread((__int64)&dword_140404A6C[scaled_index + 19852461], 4, 1, file_handle);
            remaining_count = 4;
            destination_buffer = &dword_140404A6C[scaled_index + 19852428];
            destination_buffer_2 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 83622876;
            do
            {
              remaining_count_2 = 4;
              do
              {
                crt_fread(destination_buffer_2, 4, 3, file_handle);
                crt_fread((__int64)destination_buffer, 4, 2, file_handle);
                destination_buffer_2 += 12;
                destination_buffer += 2;
                --remaining_count_2;
              }
              while ( remaining_count_2 );
              --remaining_count;
            }
            while ( remaining_count );
          }
          crt_fread((__int64)&g_144FEB3C8, 4, 1, file_handle);
          if ( (int)g_144FEB3C8 > 0 )
          {
            do
            {
              remaining_count_3 = 8;
              scaled_index_2 = 124LL * iteration_count;
              destination_buffer_3 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_2 + 83801036;
              do
              {
                crt_fread(destination_buffer_3, 4, 3, file_handle);
                destination_buffer_3 += 12;
                --remaining_count_3;
              }
              while ( remaining_count_3 );
              remaining_count_4 = 6;
              destination_buffer_4 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_2 + 83801132;
              do
              {
                crt_fread(destination_buffer_4, 4, 1, file_handle);
                destination_buffer_4 += 4;
                --remaining_count_4;
              }
              while ( remaining_count_4 );
              crt_fread(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_2 + 83801156, 4, 1, file_handle);
              ++iteration_count;
            }
            while ( iteration_count < (int)g_144FEB3C8 );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[record_word_offset + 293512629], 1);
        break;
      case 0x585A0004u:
        sub_140197630(*(_DWORD *)a4, *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629], 1);
        break;
    }
    ftell_sr_result = ftell_sr(*(FILE **)&dword_140404A6C[record_word_offset + 293512629]);
    shifted_bits = record_word_offset * 4 + ((unsigned __int64)dword_140404A6C[record_word_offset + 293512634] << 6);
    *(unsigned int *)((char *)&g_1863AE160 + shifted_bits) = ftell_sr_result
                                                                 - *(unsigned int *)((char *)&g_1863AE15C
                                                                                   + shifted_bits);
    table_value = dword_140404A6C[record_word_offset + 293512634];
    dword_140404A6C[record_word_offset + 293512633] += dword_140404A6C[16 * (unsigned __int64)table_value + 293512637 + record_word_offset];
    result = table_value + 1;
    dword_140404A6C[record_word_offset + 293512634] = result;
  }
  return result;
}

//----- (00000001401967E0) ----------------------------------------------------
__int64            sub_1401967E0(__int64 a1, int a2)
{
  int element_index;
  int iteration_count;
  __int64 scaled_index;
  unsigned int *destination_buffer;
  unsigned int *state_address;
  __int64 remaining_count;
  unsigned int *destination_buffer_2;
  unsigned int *destination_buffer_3;
  __int64 remaining_count_2;
  __int64 scaled_index_2;
  __int64 remaining_count_3;
  unsigned int *destination_buffer_4;
  __int64 remaining_count_4;
  unsigned int *destination_buffer_5;
  unsigned int *destination_buffer_6;
  int Buffer;

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&g_144FBFBA0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBA4), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBA8), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBAC), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB4), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBB8), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBBC), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBC0), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&g_144FBFBC4), 4, 1, (FILE *)(uintptr_t)(a1));
      goto LABEL_6;
    }
    return 0;
  }
  crt_fread((__int64)&Buffer, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA4, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBA8, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBAC, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB4, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBB8, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBBC, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBC0, 4, 1, a1);
  crt_fread((__int64)&g_144FBFBC4, 4, 1, a1);
LABEL_6:
  element_index = 0;
  iteration_count = 0;
  if ( (int)g_144FBFBC4 > 0 )
  {
    do
    {
      scaled_index = 87LL * iteration_count;
      destination_buffer = &dword_140404A6C[scaled_index + 19852378];
      state_address = &dword_140404A6C[scaled_index + 19852349];
      if ( a2 )
      {
        crt_fread((__int64)destination_buffer, 4, 1, a1);
        crt_fread((__int64)(state_address + 27), 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[scaled_index + 19852379], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[scaled_index + 19852377], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[scaled_index + 19852460], 4, 1, a1);
        crt_fread((__int64)&dword_140404A6C[scaled_index + 19852461], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(state_address + 27), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852379]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852377]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852460]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 19852461]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      remaining_count = 4;
      destination_buffer_2 = &dword_140404A6C[scaled_index + 19852428];
      destination_buffer_3 = &dword_140404A6C[scaled_index + 19852380];
      do
      {
        remaining_count_2 = 4;
        do
        {
          if ( a2 )
          {
            crt_fread((__int64)destination_buffer_3, 4, 3, a1);
            crt_fread((__int64)destination_buffer_2, 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(destination_buffer_3), 4, 3, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          destination_buffer_3 += 3;
          destination_buffer_2 += 2;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        --remaining_count;
      }
      while ( remaining_count );
      ++iteration_count;
    }
    while ( iteration_count < (int)g_144FBFBC4 );
    element_index = 0;
  }
  if ( a2 )
    crt_fread((__int64)&g_144FEB3C8, 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&g_144FEB3C8), 4, 1, (FILE *)(uintptr_t)(a1));
  if ( (int)g_144FEB3C8 > 0 )
  {
    do
    {
      scaled_index_2 = 31LL * element_index;
      remaining_count_3 = 8;
      destination_buffer_4 = &dword_140404A6C[scaled_index_2 + 19896920];
      do
      {
        if ( a2 )
          crt_fread((__int64)destination_buffer_4, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 3, (FILE *)(uintptr_t)(a1));
        destination_buffer_4 += 3;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      remaining_count_4 = 6;
      destination_buffer_5 = &dword_140404A6C[scaled_index_2 + 19896944];
      do
      {
        if ( a2 )
          crt_fread((__int64)destination_buffer_5, 4, 1, a1);
        else
          fread_sr((void *)(uintptr_t)(destination_buffer_5), 4, 1, (FILE *)(uintptr_t)(a1));
        ++destination_buffer_5;
        --remaining_count_4;
      }
      while ( remaining_count_4 );
      destination_buffer_6 = &dword_140404A6C[31 * element_index + 19896950];
      if ( a2 )
        crt_fread((__int64)destination_buffer_6, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer_6), 4, 1, (FILE *)(uintptr_t)(a1));
      ++element_index;
    }
    while ( element_index < (int)g_144FEB3C8 );
  }
  return 1;
}

//----- (0000000140197630) ----------------------------------------------------
__int64            sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 input_value;
  unsigned int *state_address;
  __int64 scaled_index;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  int Buffer;

  input_value = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    crt_fread((__int64)&Buffer, 4, 1, a2);
    crt_fread((__int64)&dword_140404A6C[46 * input_value + 421784763], 1, 64, a2);
    state_address = &dword_140404A6C[46 * input_value + 421784733];
    crt_fread((__int64)(state_address + 22), 4, 1, a2);
    crt_fread((__int64)(state_address + 26), 4, 1, a2);
    crt_fread(*((_QWORD *)state_address + 12), 1, (int)state_address[22], a2);
    crt_fread(*((_QWORD *)state_address + 14), 1, (int)state_address[26], a2);
    return 1;
  }
  fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( Buffer != 1 )
    return 0;
  scaled_index = 46 * input_value;
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 421784763]), 1, 64, (FILE *)(uintptr_t)(a2));
  state_address_2 = &dword_140404A6C[scaled_index + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 421784755]), 4, 1, (FILE *)(uintptr_t)(a2));
  state_address_3 = &dword_140404A6C[scaled_index + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[scaled_index + 421784759]), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( (int)dword_140404A6C[scaled_index + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[scaled_index + 421784757] = sr_path_malloc((int)state_address_2[22]);
  if ( (int)state_address_3[26] > 0 )
    *(_QWORD *)&dword_140404A6C[scaled_index + 421784761] = sr_path_malloc((int)state_address_3[26]);
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 421784757]), 1, (int)state_address_2[22], (FILE *)(uintptr_t)(a2));
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[scaled_index + 421784761]), 1, (int)state_address_3[26], (FILE *)(uintptr_t)(a2));
  return 1;
}

//----- (00000001401977E0) ----------------------------------------------------
void            sub_1401977E0(int a1)
{
  __int64 record_word_offset;
  __int64 masked_bits;
  unsigned int i;

  record_word_offset = 265228LL * a1;
  masked_bits = *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629];
  if ( masked_bits )
  {
    if ( dword_140404A6C[record_word_offset + 293512631] )
    {
      sub_14020C4A8(masked_bits, 4, 0);
      crt_fread((__int64)&dword_140404A6C[record_word_offset + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629]);
      crt_fread((__int64)&dword_140404A6C[record_word_offset + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629]);
      sub_14020C4A8(*(_QWORD *)&dword_140404A6C[record_word_offset + 293512629], dword_140404A6C[record_word_offset + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[record_word_offset + 293512634]; ++i )
        crt_fread(
          (__int64)&dword_140404A6C[16 * (__int64)(int)i + 293512635 + record_word_offset],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629]);
    }
    crt_fclose(*(_QWORD *)&dword_140404A6C[record_word_offset + 293512629]);
    *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629] = 0;
  }
}

//----- (00000001401978F0) ----------------------------------------------------
unsigned int *           sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result;
  __int64 record_word_offset;
  int element_index;
  unsigned int table_value;
  unsigned int *i;
  __int64 integer_difference;
  int loaded_word;
  int loaded_word_2;

  result = (unsigned int *)a1;
  record_word_offset = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629] )
  {
    if ( !dword_140404A6C[record_word_offset + 293512631] )
    {
      element_index = 0;
      table_value = dword_140404A6C[record_word_offset + 293512634];
      if ( table_value )
      {
        for ( i = &dword_140404A6C[record_word_offset + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)element_index + 293512638 + record_word_offset];
            integer_difference = a2 - (_QWORD)result;
            do
            {
              loaded_word = *((unsigned __int8 *)result + integer_difference);
              loaded_word_2 = *(unsigned __int8 *)result - loaded_word;
              if ( loaded_word_2 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( loaded_word );
            if ( !loaded_word_2 )
              break;
          }
          if ( ++element_index >= table_value )
            return result;
        }
        return (unsigned int *)sub_14020C4A8(
                                 *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629],
                                 dword_140404A6C[16 * (__int64)element_index + 293512636 + record_word_offset],
                                 0);
      }
    }
  }
  return result;
}

//----- (00000001401979D0) ----------------------------------------------------
void            sub_1401979D0(int a1, int a2)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 file_handle;
  __int64 file_handle_2;
  int state_word;
  unsigned int *destination_buffer;
  __int64 file_handle_3;
  unsigned int element_index;
  unsigned int *state_address;
  unsigned int *record_byte_offset;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401979D0[560];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 0)) /* [rsp+0h] */
#define destination_text (*(char (*)[512])(void *)(sr_frame_1401979D0 + 32)) /* [rsp+20h] */
#define unused_frame_slot_544 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 544)) /* [rsp+220h] */

  input_value = a1;
  record_word_offset = 265228LL * a1;
  strcpy(destination_text, "test.csx");
  if ( a2 )
  {
    file_handle = crt_fopen(destination_text, "wb");
    *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629] = file_handle;
    file_handle_2 = file_handle;
    if ( file_handle )
    {
      state_word = dword_1402B2314;
      dword_140404A6C[record_word_offset + 293512631] = 1;
      destination_buffer = &dword_140404A6C[record_word_offset + 293512632];
      *(_QWORD *)&dword_140404A6C[record_word_offset + 293512633] = 12;
      *destination_buffer = state_word;
      crt_fread((__int64)destination_buffer, 12, 1, file_handle_2);
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[record_word_offset + 293774779]), 0, 0x3014u);
    }
  }
  else
  {
    file_handle_3 = crt_fopen(destination_text, "rb");
    *(_QWORD *)&dword_140404A6C[record_word_offset + 293512629] = file_handle_3;
    if ( file_handle_3 )
    {
      element_index = 0;
      dword_140404A6C[record_word_offset + 293512631] = 0;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[record_word_offset + 293512632]), 12, 1, (FILE *)(uintptr_t)(file_handle_3));
      crt_memset((void *)(uintptr_t)(&dword_140404A6C[record_word_offset + 293774779]), 0, 0x3014u);
      state_address = &dword_140404A6C[record_word_offset + 293512629];
      if ( dword_140404A6C[record_word_offset + 293512632] == dword_1402B2314 )
      {
        sub_14020C4A8(*(_QWORD *)&dword_140404A6C[record_word_offset + 293512629], dword_140404A6C[record_word_offset + 293512633], 0);
        if ( state_address[5] )
        {
          record_byte_offset = &dword_140404A6C[record_word_offset + 293512635];
          do
          {
            fread_sr(
              (void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)(int)element_index + 293512635 + record_word_offset]),
              64,
              1,
              (FILE *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[record_word_offset + 293512629]));
            if ( *record_byte_offset == 1482293250 )
              dword_140404A6C[265228 * input_value + 293775805 + (int)dword_140404A6C[record_word_offset + 293775804]++] = element_index;
            ++element_index;
            record_byte_offset += 16;
          }
          while ( element_index < state_address[5] );
        }
      }
      else
      {
        state_address[5] = 0;
        sub_1401977E0(input_value);
      }
    }
  }
  return;
}
#undef unused_frame_slot_0
#undef destination_text
#undef unused_frame_slot_544

//----- (0000000140197C00) ----------------------------------------------------
__int64            sub_140197C00(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 337);
  }
  return a1;
}

//----- (0000000140197C50) ----------------------------------------------------
__int64            sub_140197C50(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 513);
  }
  return a1;
}

//----- (0000000140197CA0) ----------------------------------------------------
__int64            sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

//----- (0000000140197DF0) ----------------------------------------------------
__int64            sub_140197DF0(__int64 a1)
{
  __int64 integer_sum;

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  integer_sum = a1 + 40;
  *(_QWORD *)integer_sum = (uint64)(uintptr_t)(&off_140279AA0);
  *(_QWORD *)(integer_sum + 24) = (uintptr_t)sub_1401982A0;
  *(_BYTE *)(integer_sum + 8) = 0;
  *(_DWORD *)(integer_sum + 12) = 0;
  *(_QWORD *)(integer_sum + 16) = a1;
  SteamAPI_RegisterCallback(integer_sum, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AF0);
  *(_QWORD *)(a1 + 96) = (uintptr_t)sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = (uint64)(uintptr_t)(&off_140279B40);
  *(_QWORD *)(a1 + 128) = (uintptr_t)sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

//----- (0000000140197EC0) ----------------------------------------------------
__int64 (           **           sub_140197EC0(_QWORD *a1))()
{
  __int64 table_value;
  __int64 (           **result)();

  table_value = a1[2];
  result = &off_140279A58;
  *a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( table_value )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    a1[2] = 0;
  }
  return result;
}

//----- (0000000140197FB0) ----------------------------------------------------
__int64 (           **           sub_140197FB0(__int64 a1))()
{
  __int64 integer_sum;
  bool state_address;
  __int64 loaded_word;
  __int64 (           **result)();

  integer_sum = a1 + 104;
  *(_QWORD *)integer_sum = (uint64)(uintptr_t)(&off_140279B18);
  if ( (*(_BYTE *)(integer_sum + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback(integer_sum);
  state_address = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = (uint64)(uintptr_t)(&off_140279AC8);
  if ( !state_address )
    SteamAPI_UnregisterCallback(a1 + 72);
  state_address = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(&off_140279A78);
  if ( !state_address )
    SteamAPI_UnregisterCallback(a1 + 40);
  loaded_word = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = (uint64)(uintptr_t)(&off_140279A58);
  if ( loaded_word )
  {
    result = (__int64 (           **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
