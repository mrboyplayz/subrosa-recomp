#include "shared_client.h"

//----- (00000001400D12E0) ----------------------------------------------------
unsigned int *sub_1400D12E0()
{
  unsigned int *state_address;
  int iteration_count;
  int i;
  int record_byte_offset;
  float *buffer_cursor;
  float product_difference;
  int iteration_count_2;
  float source_float_2048;
  float scaled_value;
  float source_float_2049;
  int j;
  int k;
  unsigned int *state_address_2;
  unsigned int *saved_state_address;
  __int64 remaining_count;
  __int64 remaining_count_2;
  int iteration_count_3;
  unsigned int *state_address_3;
  int iteration_count_4;
  unsigned int *state_address_4;
  int iteration_count_5;
  unsigned int *state_address_5;
  int iteration_count_6;
  unsigned int *state_address_6;
  int iteration_count_7;
  unsigned int *state_address_7;
  unsigned int *result;
  unsigned int *state_address_8;

  state_address = &g_16D482830;
  iteration_count = 0;
  for ( i = 0; i < 0x4000; i += 8 )
  {
    record_byte_offset = 0;
    buffer_cursor = (float *)state_address;
    do
    {
      product_difference = *(buffer_cursor - 1);
      iteration_count_2 = 0;
      source_float_2048 = buffer_cursor[2048];
      scaled_value = *buffer_cursor;
      source_float_2049 = buffer_cursor[2049];
      do
      {
        for ( j = 0; j < 8; ++j )
          sub_1400D2DB0(
            record_byte_offset + j,
            i + iteration_count_2,
            (float)((float)(1.0 - (float)((float)j * 0.125))
                  * (float)((float)((float)(1.0 - (float)((float)iteration_count_2 * 0.125)) * product_difference)
                          + (float)(source_float_2048 * (float)((float)iteration_count_2 * 0.125))))
          + (float)((float)((float)((float)(1.0 - (float)((float)iteration_count_2 * 0.125)) * scaled_value)
                          + (float)(source_float_2049 * (float)((float)iteration_count_2 * 0.125)))
                  * (float)((float)j * 0.125)));
        ++iteration_count_2;
      }
      while ( iteration_count_2 < 8 );
      record_byte_offset += 8;
      ++buffer_cursor;
    }
    while ( record_byte_offset < 0x4000 );
    state_address += 2049;
  }
  if ( !g_183F7CB60 )
  {
    sub_1400D3340(2);
    sub_1400D3340(40);
    sub_1400D3340(32);
    sub_1400D3340(46);
    sub_1400D3340(45);
    sub_1400D3340(47);
    sub_1400D3340(28);
    sub_1400D3340(10);
    sub_1400D3340(33);
    sub_1400D3340(42);
    sub_1400D3340(35);
    sub_1400D3340(13);
    sub_1400D3340(59);
    sub_1400D3340(31);
    sub_1400D3340(52);
    sub_1400D3340(48);
    sub_1400D3340(50);
    sub_1400D3340(19);
    sub_1400D3340(22);
    sub_1400D3340(58);
    sub_1400D3340(62);
    sub_1400D3340(61);
    sub_1400D3340(41);
    sub_1400D3340(36);
    sub_1400D3340(43);
    sub_1400D3340(44);
    sub_1400D3340(38);
    sub_1400D3340(39);
  }
  for ( k = 0; k < 64; ++k )
    sub_1400D00F0(k);
  state_address_2 = &g_1811BF878;
  do
  {
    saved_state_address = state_address_2;
    remaining_count = 16;
    do
    {
      remaining_count_2 = 16;
      do
      {
        *(_QWORD *)(saved_state_address - 1) = -1;
        *(_QWORD *)(saved_state_address + 1) = -1;
        *(_QWORD *)(saved_state_address + 3) = -1;
        saved_state_address[5] = -1;
        saved_state_address += 13;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      --remaining_count;
    }
    while ( remaining_count );
    state_address_2 += 3336;
  }
  while ( (__int64)state_address_2 < (__int64)&g_181290078 );
  iteration_count_3 = 0;
  g_1810FF794 = 0;
  if ( (int)g_1810FF788 > 0 )
  {
    state_address_3 = &g_1810FF798;
    do
    {
      *state_address_3 = -1;
      state_address_3 += 3;
      ++iteration_count_3;
    }
    while ( iteration_count_3 < (int)g_1810FF788 );
  }
  iteration_count_4 = 0;
  g_1811177AC = 0;
  if ( (int)g_1811177A0 > 0 )
  {
    state_address_4 = &g_1811177B0;
    do
    {
      *state_address_4 = -1;
      state_address_4 += 3;
      ++iteration_count_4;
    }
    while ( iteration_count_4 < (int)g_1811177A0 );
  }
  iteration_count_5 = 0;
  g_18112F7C4 = 0;
  if ( (int)g_18112F7B8 > 0 )
  {
    state_address_5 = &g_18112F7C8;
    do
    {
      *state_address_5 = -1;
      state_address_5 += 3;
      ++iteration_count_5;
    }
    while ( iteration_count_5 < (int)g_18112F7B8 );
  }
  iteration_count_6 = 0;
  g_1811477DC = 0;
  if ( (int)g_1811477D0 > 0 )
  {
    state_address_6 = &g_1811477E0;
    do
    {
      *state_address_6 = -1;
      state_address_6 += 3;
      ++iteration_count_6;
    }
    while ( iteration_count_6 < (int)g_1811477D0 );
  }
  iteration_count_7 = 0;
  g_18115F7F4 = 0;
  if ( (int)g_18115F7E8 > 0 )
  {
    state_address_7 = &g_18115F7F8;
    do
    {
      *state_address_7 = -1;
      state_address_7 += 3;
      ++iteration_count_7;
    }
    while ( iteration_count_7 < (int)g_18115F7E8 );
  }
  result = nullptr;
  g_18117780C = 0;
  if ( (int)g_181177800 > 0 )
  {
    state_address_8 = &g_181177810;
    do
    {
      *state_address_8 = -1;
      state_address_8 += 3;
      result = (unsigned int *)(unsigned int)((_DWORD)result + 1);
    }
    while ( (int)result < (int)g_181177800 );
  }
  g_18118F824 = 0;
  if ( (int)g_18118F818 > 0 )
  {
    result = &g_18118F828;
    do
    {
      *result = -1;
      result += 3;
      ++iteration_count;
    }
    while ( iteration_count < (int)g_18118F818 );
  }
  return result;
}

//----- (00000001400D1830) ----------------------------------------------------
int                sub_1400D1830(unsigned __int64 a1, float *a2, float *a3)
{
  union { float *saved; float coordinates[4]; } sr_triangle_c;
  _Alignas(8) __int64 sr_triangle_b[2];
  _Alignas(8) unsigned __int64 sr_normal[2];
  float sr_triangle_a[3];
  float sr_walk_b[3];
  float sr_walk_a[3];
  float sr_weight[3];
  int sr_end[3];
  int sr_start[3];
  int sr_direction[3];
  float *running_total;
  signed __int64 state_address;
  int running_total_2;
  signed __int64 bit_mask;
  signed __int64 state_address_2;
  signed __int64 scaled_index;
  signed __int64 state_address_3;
  signed __int64 state_address_4;
  signed __int64 state_address_5;
  signed __int64 state_address_6;
  signed __int64 state_address_7;
  signed __int64 state_address_8;
  float combined_products;
  float product_difference;
  bool comparison_result;
  int saved_t;
  float absolute_value;
  float scaled_value;
  signed __int64 saved_state_address;
  float scaled_value_2;
  float combined_products_2;
  float weighted_sum;
  float component_delta;
  int integer_difference;
  float absolute_value_2;
  signed __int64 saved_state_address_2;
  float source_component_y;
  signed __int64 saved_state_address_3;
  signed __int64 saved_state_address_4;
  float weighted_sum_2;
  float weighted_sum_3;
  float component_delta_2;
  signed __int64 saved_state_address_5;
  int saved_t_2;
  float absolute_value_3;
  float *cached_saved;
  unsigned __int64 table_value;
  __m128d vector_result;
  double lane_mask;
  float component_delta_3;
  float source_component_y_2;
  float component_sum;
  float source_component_z;
  __m128d vector_result_2;
  float scaled_value_3;
  double lane_mask_2;
  int table_value_2;
  float component_delta_4;
  float source_component_x;
  float component_sum_2;
  float scaled_value_4;
  float product_difference_2;
  __m128d vector_result_3;
  double lane_mask_3;
  int table_value_3;
  float component_delta_5;
  int table_value_4;
  int table_value_5;
  float component_sum_3;
  int table_value_6;
  int running_total_3;
  signed int abs32_result;
  float source_component_x_2;
  int iteration_count;
  float source_component_z_2;
  float source_component_y_3;
  float source_component_x_3;
  float source_component_z_3;
  float source_component_y_4;
  unsigned int shifted_bits;
  unsigned int shifted_bits_2;
  int bit_mask_2;
  __int64 shifted_bits_3;
  float weighted_sum_4;
  __int64 masked_bits;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  __int64 masked_bits_2;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float component_delta_6;
  float combined_products_3;
  float product_difference_3;
  float combined_products_4;
  float combined_products_5;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  int saved_t_3;
  float source_component_y_5;
  float weighted_sum_11;
  float weighted_sum_12;
  __int64 masked_bits_3;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float weighted_sum_17;
  float weighted_sum_18;
  float component_delta_7;
  float component_delta_8;
  float combined_products_6;
  float product_difference_4;
  float product_difference_5;
  float scaled_value_5;
  float square_root_2;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  BOOL collision_line_triangle_result;
  int saved_t_4;
  float source_component_y_6;
  _BOOL8 comparison_result_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D1830[304];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_1400D1830 + 8)) /* [rsp+8h] */
#define t (*(__int64 (*))(void *)(sr_frame_1400D1830 + 72)) /* [rsp+48h] */
#define saved_source_component_x (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 96)) /* [rsp+60h] */
#define state_address_9 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 152)) /* [rsp+98h] */
#define state_address_10 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 160)) /* [rsp+A0h] */
#define state_address_11 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 168)) /* [rsp+A8h] */
#define state_address_12 (*(signed __int64 (*))(void *)(sr_frame_1400D1830 + 176)) /* [rsp+B0h] */
#define component_sum_4 (*(float (*))(void *)(sr_frame_1400D1830 + 184)) /* [rsp+B8h] */
#define to (*(float * (*))(void *)(sr_frame_1400D1830 + 192)) /* [rsp+C0h] */
#define unused_frame_slot_288 (*(__int128 (*))(void *)(sr_frame_1400D1830 + 288)) /* [rsp+120h] */

  running_total = a2 + 1;
  sr_triangle_c.saved = a2;
  to = a3;
  sr_normal[0] = a1;
  state_address_12 = (char *)&sr_walk_a[2] - (char *)a2;
  state_address = (char *)&sr_walk_a[1] - (char *)a2;
  LODWORD(t) = -1;
  running_total_2 = 0;
  state_address_11 = (char *)&sr_walk_b[0] - (char *)a2;
  bit_mask = (char *)&sr_walk_b[1] - (char *)a2;
  state_address_9 = (char *)&g_181290044 - (char *)a2;
  state_address_2 = (char *)&sr_start[0] - (char *)a2;
  saved_source_component_x = (char *)&sr_start[1] - (char *)a2;
  sr_triangle_b[0] = ((_BYTE *)&sr_end[1]) - (_BYTE *)a2;
  scaled_index = (char *)a3 - (char *)a2;
  state_address_3 = (char *)(unsigned int *)&g_181290040 - (char *)a2;
  state_address_4 = (char *)&sr_end[0] - (char *)a2;
  state_address_10 = (char *)&sr_weight[1] - (char *)a2;
  state_address_5 = (char *)&sr_direction[0] - (char *)a2;
  state_address_6 = (char *)&sr_walk_a[0] - (char *)a2;
  state_address_7 = (char *)&sr_weight[0] - (char *)a2;
  state_address_8 = (char *)&sr_direction[1] - (char *)a2;
  do
  {
    combined_products = *(float *)((char *)running_total + scaled_index - 4);
    product_difference = combined_products - *(running_total - 1);
    *(_DWORD *)((char *)running_total + state_address_2 - 4) = (int)(float)(*(running_total - 1) - *(float *)((char *)running_total + state_address_3 - 4));
    *(_DWORD *)((char *)running_total + state_address_4 - 4) = (int)(float)(combined_products - *(float *)((char *)running_total + state_address_3 - 4));
    if ( running_total_2 == 1 )
      product_difference = 0.0;
    comparison_result = product_difference <= 0.0;
    saved_t = 1;
    absolute_value = fabs(product_difference);
    if ( comparison_result )
      saved_t = t;
    *(_DWORD *)((char *)running_total + state_address_5 - 4) = saved_t;
    scaled_value = *running_total;
    saved_state_address = state_address_12;
    scaled_value_2 = *running_total;
    *(float *)((char *)running_total + state_address_6 - 4) = absolute_value;
    *(float *)((char *)running_total + state_address_7 - 4) = absolute_value;
    combined_products_2 = scaled_value_2 - *(float *)((char *)running_total + state_address_3);
    *(float *)((char *)running_total + saved_state_address) = absolute_value;
    LODWORD(saved_state_address) = (int)combined_products_2;
    weighted_sum = *(float *)((char *)running_total + scaled_index);
    component_delta = weighted_sum - scaled_value;
    *(_DWORD *)((char *)running_total + state_address_2) = saved_state_address;
    *(_DWORD *)((char *)running_total + state_address_4) = (int)(float)(weighted_sum - *(float *)((char *)running_total + state_address_3));
    if ( !running_total_2 )
      component_delta = 0.0;
    comparison_result = component_delta <= 0.0;
    integer_difference = 1;
    absolute_value_2 = fabs(component_delta);
    if ( comparison_result )
      integer_difference = -1;
    *(_DWORD *)((char *)running_total + state_address_5) = integer_difference;
    saved_state_address_2 = state_address_11;
    source_component_y = running_total[1];
    saved_state_address_3 = saved_source_component_x;
    *(float *)((char *)running_total + state_address_6) = absolute_value_2;
    *(float *)((char *)running_total + saved_state_address_2) = absolute_value_2;
    saved_state_address_4 = state_address_9;
    *(float *)((char *)running_total + state_address_7) = absolute_value_2;
    weighted_sum_2 = *(float *)((char *)running_total + saved_state_address_4);
    weighted_sum_3 = *(float *)((char *)running_total + scaled_index + 4);
    component_delta_2 = weighted_sum_3 - source_component_y;
    *(_DWORD *)((char *)running_total + saved_state_address_3) = (int)(float)(source_component_y - weighted_sum_2);
    *(_DWORD *)((char *)running_total + sr_triangle_b[0]) = (int)(float)(weighted_sum_3 - weighted_sum_2);
    saved_state_address_5 = state_address_10;
    if ( running_total_2 == -1 )
      component_delta_2 = 0.0;
    comparison_result = component_delta_2 <= 0.0;
    saved_t_2 = 1;
    absolute_value_3 = fabs(component_delta_2);
    if ( comparison_result )
      saved_t_2 = t;
    running_total_2 += 3;
    *(_DWORD *)((char *)running_total + state_address_8) = saved_t_2;
    *(float *)((char *)running_total + state_address) = absolute_value_3;
    *(float *)((char *)running_total + bit_mask) = absolute_value_3;
    *(float *)((char *)running_total + saved_state_address_5) = absolute_value_3;
    running_total += 3;
  }
  while ( running_total_2 < 3 );
  cached_saved = sr_triangle_c.saved;
  table_value = sr_normal[0];
  vector_result = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)sr_triangle_c.saved))));
  lane_mask = SR_VEC_LANES(128, vector_result, f64)[0];
  if ( (double)(int)SR_VEC_LANES(128, vector_result, f64)[0] != SR_VEC_LANES(128, vector_result, f64)[0] )
    lane_mask = (double)((int)SR_VEC_LANES(128, vector_result, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(vector_result, vector_result)) & 1));
  component_delta_3 = SR_VEC_LANES(128, vector_result, f64)[0] - (lane_mask + 0.5);
  if ( sr_direction[0] > 0 )
    component_delta_3 = -component_delta_3;
  source_component_y_2 = sr_weight[1];
  component_sum = component_delta_3 + component_delta_3;
  source_component_z = sr_weight[2];
  vector_result_2 = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)sr_triangle_c.saved + 1)))));
  sr_walk_a[0] = (float)(sr_weight[1] * component_sum) - sr_walk_a[0];
  scaled_value_3 = sr_weight[2] * component_sum;
  lane_mask_2 = SR_VEC_LANES(128, vector_result_2, f64)[0];
  sr_walk_b[0] = scaled_value_3 - sr_walk_b[0];
  if ( (double)(int)SR_VEC_LANES(128, vector_result_2, f64)[0] != SR_VEC_LANES(128, vector_result_2, f64)[0] )
    lane_mask_2 = (double)((int)SR_VEC_LANES(128, vector_result_2, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(vector_result_2, vector_result_2)) & 1));
  table_value_2 = sr_direction[1];
  component_delta_4 = SR_VEC_LANES(128, vector_result_2, f64)[0] - (lane_mask_2 + 0.5);
  if ( sr_direction[1] > 0 )
    component_delta_4 = -component_delta_4;
  source_component_x = sr_weight[0];
  component_sum_2 = component_delta_4 + component_delta_4;
  scaled_value_4 = sr_weight[2] * component_sum_2;
  product_difference_2 = (float)(sr_weight[0] * component_sum_2) - sr_walk_a[1];
  vector_result_3 = _mm_cvtps_pd(_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*((unsigned int *)sr_triangle_c.saved + 2)))));
  sr_walk_a[1] = product_difference_2;
  sr_walk_b[1] = scaled_value_4 - sr_walk_b[1];
  lane_mask_3 = SR_VEC_LANES(128, vector_result_3, f64)[0];
  if ( (double)(int)SR_VEC_LANES(128, vector_result_3, f64)[0] != SR_VEC_LANES(128, vector_result_3, f64)[0] )
    lane_mask_3 = (double)((int)SR_VEC_LANES(128, vector_result_3, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(vector_result_3, vector_result_3)) & 1));
  table_value_3 = sr_direction[2];
  component_delta_5 = SR_VEC_LANES(128, vector_result_3, f64)[0] - (lane_mask_3 + 0.5);
  if ( sr_direction[2] > 0 )
    component_delta_5 = -component_delta_5;
  table_value_4 = sr_end[0];
  table_value_5 = sr_start[0];
  component_sum_3 = component_delta_5 + component_delta_5;
  table_value_6 = sr_end[2];
  running_total_3 = sr_start[2];
  *(_DWORD *)(sr_normal[0] + 24) = 1065353216;
  sr_walk_a[2] = (float)(source_component_x * component_sum_3) - sr_walk_a[2];
  sr_walk_b[2] = (float)(source_component_y_2 * component_sum_3) - sr_walk_b[2];
  abs32_result = abs32(table_value_6 - running_total_3) + abs32(table_value_4 - table_value_5);
  LODWORD(state_address_9) = 0x4000;
  if ( abs32_result > 0x4000 || (LODWORD(state_address_9) = abs32_result, abs32_result >= 0) )
  {
    source_component_x_2 = sr_walk_a[0];
    iteration_count = 0;
    source_component_z_2 = sr_walk_b[2];
    source_component_y_3 = sr_walk_b[1];
    source_component_x_3 = sr_walk_b[0];
    source_component_z_3 = sr_walk_a[2];
    source_component_y_4 = sr_walk_a[1];
    *(float *)&saved_source_component_x = sr_walk_a[0];
    while ( 1 )
    {
      shifted_bits = running_total_3 >> 11;
      if ( (unsigned int)(table_value_5 >> 11) <= 7 && shifted_bits <= 7 )
      {
        shifted_bits_2 = running_total_3 >> 2;
        if ( (unsigned int)(table_value_5 >> 2) <= 0xFFF && shifted_bits_2 <= 0xFFF )
        {
          bit_mask_2 = *(unsigned __int16 *)(g_181290050 + 2LL * ((table_value_5 >> 4) + (running_total_3 >> 4 << 10)));
          if ( _bittest(&bit_mask_2, (unsigned __int8)(((table_value_5 >> 2) & 3) + 4 * (shifted_bits_2 & 3))) )
          {
            shifted_bits_3 = 3336LL * (int)((table_value_5 >> 11) + 8 * shifted_bits);
            *(float *)&state_address_11 = (float)(table_value_5 & 0x7FF);
            weighted_sum_4 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034677];
            masked_bits = *(_QWORD *)&dword_140404A6C[shifted_bits_3 + 272034683];
            weighted_sum_5 = *(float *)&state_address_11 + weighted_sum_4;
            weighted_sum_6 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034678];
            weighted_sum_7 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034679];
            masked_bits_2 = (table_value_5 & 0x7FF) + 2049 * (running_total_3 & 0x7FFu);
            weighted_sum_8 = weighted_sum_6 + *(float *)(masked_bits + 4 * masked_bits_2);
            component_sum_4 = (float)((table_value_5 & 0x7FF) + 1);
            *(float *)&state_address_12 = (float)(running_total_3 & 0x7FF);
            weighted_sum_9 = weighted_sum_6 + *(float *)(masked_bits + 4 * masked_bits_2 + 4);
            weighted_sum_10 = weighted_sum_6 + *(float *)(masked_bits + 4 * masked_bits_2 + 8200);
            *((float *)&sr_triangle_b[0] + 1) = weighted_sum_9;
            component_delta_6 = weighted_sum_9 - weighted_sum_8;
            *(float *)&state_address_10 = (float)((running_total_3 & 0x7FF) + 1);
            *(float *)&sr_triangle_b[0] = weighted_sum_4 + component_sum_4;
            *(float *)&sr_triangle_c.saved = weighted_sum_4 + component_sum_4;
            combined_products_3 = (float)(weighted_sum_4 + component_sum_4) - (float)(*(float *)&state_address_11 + weighted_sum_4);
            *((float *)&sr_triangle_c.saved + 1) = weighted_sum_10;
            sr_triangle_a[2] = weighted_sum_7 + *(float *)&state_address_12;
            *(float *)&sr_triangle_b[1] = weighted_sum_7 + *(float *)&state_address_12;
            sr_triangle_a[0] = weighted_sum_5;
            sr_triangle_c.coordinates[2] = weighted_sum_7 + *(float *)&state_address_10;
            sr_triangle_a[1] = weighted_sum_8;
            product_difference_3 = (float)(combined_products_3 * component_delta_6) - (float)((float)(weighted_sum_10 - weighted_sum_8) * combined_products_3);
            combined_products_4 = -(float)(component_delta_6 * (float)((float)(weighted_sum_7 + *(float *)&state_address_10) - (float)(weighted_sum_7 + *(float *)&state_address_12)));
            combined_products_5 = combined_products_3 * (float)((float)(weighted_sum_7 + *(float *)&state_address_10) - (float)(weighted_sum_7 + *(float *)&state_address_12));
            square_root = fsqrt((float)((float)(combined_products_5 * combined_products_5) + (float)(combined_products_4 * combined_products_4)) + (float)(product_difference_3 * product_difference_3));
            if ( square_root == 0.0 )
            {
              sr_normal[0] = 0;
              scaled_ratio = 0.0;
              scaled_ratio_2 = 0.0;
              LODWORD(sr_normal[1]) = 0;
              scaled_ratio_3 = 0.0;
            }
            else
            {
              scaled_ratio = combined_products_4 * (float)(1.0 / square_root);
              scaled_ratio_2 = combined_products_5 * (float)(1.0 / square_root);
              scaled_ratio_3 = product_difference_3 * (float)(1.0 / square_root);
              sr_normal[0] = __PAIR64__(LODWORD(scaled_ratio_2), LODWORD(scaled_ratio));
              *(float *)&sr_normal[1] = scaled_ratio_3;
            }
            if ( sr_collision_line_triangle(&sr_walk_a[0], (float *)&sr_normal[0], (float *)&t, cached_saved, to, &sr_triangle_a[0], (float *)&sr_triangle_b[0], (float *)&sr_triangle_c.saved) )
            {
              saved_t_3 = t;
              if ( *(float *)&t < *(float *)(table_value + 24) )
              {
                source_component_y_5 = sr_walk_a[1];
                *(float *)table_value = sr_walk_a[0];
                *(float *)(table_value + 8) = sr_walk_a[2];
                *(float *)(table_value + 4) = source_component_y_5;
                *(float *)(table_value + 12) = scaled_ratio;
                *(float *)(table_value + 16) = scaled_ratio_2;
                *(float *)(table_value + 20) = scaled_ratio_3;
                *(_DWORD *)(table_value + 24) = saved_t_3;
              }
            }
            weighted_sum_11 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034678];
            weighted_sum_12 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034677];
            masked_bits_3 = *(_QWORD *)&dword_140404A6C[shifted_bits_3 + 272034683];
            weighted_sum_13 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034679];
            weighted_sum_14 = weighted_sum_11 + *(float *)(masked_bits_3 + 4 * masked_bits_2);
            weighted_sum_15 = weighted_sum_11 + *(float *)(masked_bits_3 + 4 * masked_bits_2 + 8196);
            weighted_sum_16 = *(float *)&dword_140404A6C[shifted_bits_3 + 272034678] + *(float *)(masked_bits_3 + 4 * masked_bits_2 + 8200);
            weighted_sum_17 = weighted_sum_13 + *(float *)&state_address_10;
            weighted_sum_18 = weighted_sum_13 + *(float *)&state_address_12;
            sr_triangle_a[1] = weighted_sum_14;
            *((float *)&sr_triangle_c.saved + 1) = weighted_sum_15;
            component_delta_7 = weighted_sum_15 - weighted_sum_14;
            *((float *)&sr_triangle_b[0] + 1) = weighted_sum_16;
            *(float *)&sr_triangle_b[1] = weighted_sum_17;
            sr_triangle_c.coordinates[2] = weighted_sum_17;
            component_delta_8 = weighted_sum_17 - weighted_sum_18;
            *(float *)&sr_triangle_b[0] = weighted_sum_12 + component_sum_4;
            sr_triangle_a[2] = weighted_sum_18;
            sr_triangle_a[0] = *(float *)&state_address_11 + weighted_sum_12;
            *(float *)&sr_triangle_c.saved = *(float *)&state_address_11 + weighted_sum_12;
            combined_products_6 = (float)(weighted_sum_12 + component_sum_4) - (float)(*(float *)&state_address_11 + weighted_sum_12);
            product_difference_4 = (float)(component_delta_7 * component_delta_8) - (float)((float)(weighted_sum_16 - weighted_sum_14) * component_delta_8);
            product_difference_5 = -(float)(component_delta_7 * combined_products_6);
            scaled_value_5 = combined_products_6 * component_delta_8;
            square_root_2 = fsqrt((float)((float)(scaled_value_5 * scaled_value_5) + (float)(product_difference_4 * product_difference_4)) + (float)(product_difference_5 * product_difference_5));
            if ( square_root_2 == 0.0 )
            {
              sr_normal[0] = 0;
              scaled_ratio_4 = 0.0;
              scaled_ratio_5 = 0.0;
              LODWORD(sr_normal[1]) = 0;
              scaled_ratio_6 = 0.0;
            }
            else
            {
              scaled_ratio_4 = product_difference_4 * (float)(1.0 / square_root_2);
              scaled_ratio_5 = scaled_value_5 * (float)(1.0 / square_root_2);
              scaled_ratio_6 = product_difference_5 * (float)(1.0 / square_root_2);
              sr_normal[0] = __PAIR64__(LODWORD(scaled_ratio_5), LODWORD(scaled_ratio_4));
              *(float *)&sr_normal[1] = scaled_ratio_6;
            }
            collision_line_triangle_result = sr_collision_line_triangle(
                     &sr_walk_a[0],
                     (float *)&sr_normal[0],
                     (float *)&t,
                     cached_saved,
                     to,
                     &sr_triangle_a[0],
                     (float *)&sr_triangle_b[0],
                     (float *)&sr_triangle_c.saved);
            source_component_x = sr_weight[0];
            source_component_y_2 = sr_weight[1];
            table_value_4 = sr_end[0];
            table_value_6 = sr_end[2];
            if ( collision_line_triangle_result )
            {
              saved_t_4 = t;
              table_value_3 = sr_direction[2];
              table_value_2 = sr_direction[1];
              if ( *(float *)&t < *(float *)(table_value + 24) )
              {
                source_component_y_6 = sr_walk_a[1];
                *(float *)table_value = sr_walk_a[0];
                *(float *)(table_value + 8) = sr_walk_a[2];
                *(float *)(table_value + 4) = source_component_y_6;
                *(float *)(table_value + 12) = scaled_ratio_4;
                *(float *)(table_value + 16) = scaled_ratio_5;
                *(float *)(table_value + 20) = scaled_ratio_6;
                *(_DWORD *)(table_value + 24) = saved_t_4;
              }
              source_component_x_2 = *(float *)&saved_source_component_x;
              source_component_z = sr_weight[2];
              goto LABEL_50;
            }
            source_component_x_2 = *(float *)&saved_source_component_x;
            source_component_z = sr_weight[2];
          }
        }
        table_value_2 = sr_direction[1];
        table_value_3 = sr_direction[2];
      }
LABEL_50:
      if ( *(float *)(table_value + 24) >= 1.0 && (table_value_5 != table_value_4 || running_total_3 != table_value_6) )
      {
        comparison_result_2 = source_component_x_2 >= source_component_y_4;
        if ( source_component_z_3 <= source_component_x_3 || comparison_result_2 )
        {
          if ( source_component_y_3 > source_component_z_2 )
          {
            running_total_3 += table_value_3;
            source_component_z_3 = source_component_z_3 + source_component_x;
            sr_start[2] = running_total_3;
            source_component_x_3 = source_component_x_3 - source_component_x;
            source_component_y_3 = source_component_y_3 - source_component_y_2;
            source_component_z_2 = source_component_z_2 + source_component_y_2;
          }
          else
          {
            sr_start[1] += table_value_2;
            source_component_x_2 = source_component_x_2 - source_component_x;
            source_component_y_4 = source_component_y_4 + source_component_x;
            source_component_y_3 = source_component_y_3 + source_component_z;
            source_component_z_2 = source_component_z_2 - source_component_z;
            *(float *)&saved_source_component_x = source_component_x_2;
          }
        }
        else
        {
          *(&sr_start[0] + comparison_result_2) += *(&sr_direction[0] + comparison_result_2);
          running_total_3 = sr_start[2];
          table_value_5 = sr_start[0];
          source_component_x_2 = source_component_x_2 + source_component_y_2;
          source_component_y_4 = source_component_y_4 - source_component_y_2;
          source_component_z_3 = source_component_z_3 - source_component_z;
          source_component_x_3 = source_component_x_3 + source_component_z;
          *(float *)&saved_source_component_x = source_component_x_2;
        }
        if ( ++iteration_count <= (int)state_address_9 )
          continue;
      }
      return *(float *)(table_value + 24) < 1.0f;
    }
  }
  return 0;
}
#undef unused_frame_slot_8
#undef t
#undef saved_source_component_x
#undef state_address_9
#undef state_address_10
#undef state_address_11
#undef state_address_12
#undef component_sum_4
#undef to
#undef unused_frame_slot_288

// 1400D1AB0: conditional instruction was optimized away because rcx.8<100000000u
// 1400D1B49: conditional instruction was optimized away because rcx.8<100000000u
// 1400D1BCF: conditional instruction was optimized away because rcx.8<100000000u
// 1400D21F1: conditional instruction was optimized away because rcx.8==0

//----- (00000001400D22E0) ----------------------------------------------------
double            sub_1400D22E0(int a1)
{
  __int64 unused_frame_slot_0;
  int integer_sum;
  unsigned int *state_address;
  __int64 integer_sum_2;
  unsigned int *buffer_cursor;
  __int64 running_total;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int64 scaled_index;
  __int64 table_value;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D22E0[32];
#define cached_integer_sum (*(int (*))(void *)(sr_frame_1400D22E0 + 0)) /* [rsp+88h] */
#define running_total_2 (*(__int64 (*))(void *)(sr_frame_1400D22E0 + 8)) /* [rsp+90h] */
#define state_address_2 (*(unsigned int * (*))(void *)(sr_frame_1400D22E0 + 16)) /* [rsp+98h] */

  if ( !a1 )
  {
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glUniform3fv(terrain_u_lightambient, 1, (unsigned int *)&g_184178D40);
    glUniform3fv(terrain_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
    glUniform3fv(terrain_u_viewposition, 1, (unsigned int *)&g_183F7C544);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    /* DIAG: native sets 1. The mask writer only clears bits into a 0xFFFF-prefilled
       buffer, so wrong bit math keeps MORE, not less; not the black-frame cause. */
    glUniform1i(terrain_u_land_usemask, 1);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF154 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF15C + 284024944]);
    glActiveTexture(33988);
    glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
  }
  glActiveTexture(33987);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glActiveTexture(33984);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  integer_sum = 0;
  state_address = &g_180E6F624;
  integer_sum_2 = 0;
  cached_integer_sum = 0;
  running_total_2 = 0;
  state_address_2 = &g_180E6F624;
  do
  {
    if ( *(state_address - 1) )
    {
      buffer_cursor = state_address;
      running_total = integer_sum_2;
      remaining_count = 16;
      do
      {
        remaining_count_2 = 16;
        do
        {
          scaled_index = (int)*buffer_cursor;
          table_value = (int)dword_140404A6C[scaled_index + 272034690 + running_total];
          if ( (_DWORD)table_value != -1 )
          {
            glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[scaled_index + 283791480] + 283793814]);
            glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[scaled_index + 283791752] + 283793813]);
            glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*scaled_index+271838021]),(const void *)(intptr_t)(0));
            glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*scaled_index+271838021]),(const void *)(intptr_t)(12));
            glDrawElementsBaseVertex(4,(int32_t)(3u*dword_140404A6C[24582*scaled_index+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*scaled_index+271838024]*(uint32_t)table_value));
            dword_140404A6C[24582 * scaled_index + 271838029 + 3 * table_value] = 4;
          }
          running_total += 13;
          ++buffer_cursor;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        --remaining_count;
      }
      while ( remaining_count );
      state_address = state_address_2;
    }
    else
    {
      sub_1400D2B90(integer_sum);
    }
    state_address += 257;
    integer_sum = cached_integer_sum + 1;
    integer_sum_2 = running_total_2 + 3336;
    cached_integer_sum = integer_sum;
    running_total_2 += 3336;
    state_address_2 = state_address;
  }
  while ( integer_sum < 64 );
  if ( a1 )
  {
    glDisableVertexAttribArray(0);
    return ((double (*)(_QWORD))glDisableVertexAttribArray)(1);
  }
  else
  {
    glUniform1i(terrain_u_land_usemask, 0);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    return ((double (*)(_QWORD))glUseProgram)(0);
  }
}
#undef cached_integer_sum
#undef running_total_2
#undef state_address_2

//----- (00000001400D2C90) ----------------------------------------------------
__int64            sub_1400D2C90(int a1, int a2, __int64 a3)
{
  __int64 input_value;
  __int64 input_value_2;
  __int64 unused_local;
  __int64 record_pointer;
  __int64 result;

  input_value = a1;
  if ( a1 != -1 )
  {
    input_value_2 = a2;
    glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[a2 + 283791480] + 283793814]);
    glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value_2 + 283791752] + 283793813]);
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*input_value_2+271838021]),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*input_value_2+271838021]),(const void *)(intptr_t)(12));
    glDrawElementsBaseVertex(4,(int32_t)(3u*dword_140404A6C[24582*input_value_2+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*input_value_2+271838024]*(uint32_t)input_value));
    record_pointer = input_value + 8194 * input_value_2;
    dword_140404A6C[3 * record_pointer + 271838029] = 4;
    return 3 * record_pointer;
  }
  return result;
}

//----- (00000001400D2DB0) ----------------------------------------------------
void            sub_1400D2DB0(int a1, int a2, float a3)
{
  int shifted_bits;
  int shifted_bits_2;
  __int64 scaled_index;
  int masked_bits;
  __int64 scaled_index_2;
  __int64 masked_bits_2;

  shifted_bits = a1 >> 11;
  shifted_bits_2 = a2 >> 11;
  if ( (unsigned int)(a1 >> 11) <= 7 && (unsigned int)shifted_bits_2 <= 7 )
  {
    scaled_index = shifted_bits + 8 * shifted_bits_2;
    masked_bits = a2 & 0x7FF;
    scaled_index_2 = (unsigned int)(2049 * masked_bits);
    masked_bits_2 = a1 & 0x7FF;
    *(float *)(*(_QWORD *)&dword_140404A6C[3336 * scaled_index + 272034683] + 4LL * (unsigned int)(scaled_index_2 + masked_bits_2)) = a3;
    if ( (a1 & 0x7FF) == 0 )
    {
      if ( masked_bits )
      {
        if ( shifted_bits <= 0 )
          return;
      }
      else
      {
        if ( shifted_bits <= 0 )
        {
LABEL_11:
          if ( shifted_bits_2 > 0 )
            *(float *)(*(_QWORD *)&dword_140404A6C[3336 * scaled_index + 272007995] + 4 * masked_bits_2 + 16785408) = a3;
          return;
        }
        if ( shifted_bits_2 > 0 )
          *(float *)(*(_QWORD *)&dword_140404A6C[3336 * scaled_index + 272004659] + 16793600LL) = a3;
      }
      *(float *)(*(_QWORD *)&dword_140404A6C[3336 * scaled_index + 272031347] + 4 * scaled_index_2 + 0x2000) = a3;
    }
    if ( masked_bits )
      return;
    goto LABEL_11;
  }
}
