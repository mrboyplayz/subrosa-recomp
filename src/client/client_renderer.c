#include "shared_client.h"

//----- (000000014001B6A0) ----------------------------------------------------
__int64 sub_14001B6A0()
{
  unsigned int *buffer_cursor;
  int remaining_bits;
  int i;
  int j;
  __int64 unused_local;
  __int64 selection_code;
  float *axis;
  __int64 scaled_index;
  __int64 unrecovered_register_value;
  _Alignas(16) unsigned sr_cube_filter_rotation[12];
  _Alignas(16) unsigned sr_cube_filter_vertices[28];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B6A0[624];
#define scratch_buffer (*(_DWORD (*)[10])(void *)(sr_frame_14001B6A0 + 0)) /* [rsp+8h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 40)) /* [rsp+30h] */
#define unused_frame_slot_608 (*(__int64 (*))(void *)(sr_frame_14001B6A0 + 608)) /* [rsp+268h] */

  glDisable(2929);
  glDepthMask(0);
  glDisable(3042);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278EB0;
  g_1A724E5B0 = xmmword_140279730;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(texture_lod_program);
  glUniformMatrix4fv(texture_lod_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  buffer_cursor = &g_183E97754;
  remaining_bits = 256;
  for ( i = 1; i < 10; ++i )
  {
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    glBindFramebuffer(36160, dword_140404A6C[2 * *buffer_cursor + 283791765]);
    glUniform1f((int)texture_lod_u_texlod,_mm_cvtss_f32(_mm_cvtepi32_ps(_mm_setr_epi32(i-1,0,0,0))));
    for ( j = 0; j < 6; ++j )
    {
      glFramebufferTexture2D(36160,
        36064,
        (unsigned int)(j + 34069),
        dword_140404A6C[44 * shading_cube_map + 284024944],
        i);
      glViewport(0, 0, (unsigned int)remaining_bits, (unsigned int)remaining_bits);
      (*(float *)(void *)(sr_cube_filter_rotation+8)) = 1.0;
      *(_OWORD *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i8) = xmmword_140278D30;
      *(_OWORD *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), u64)[2] = xmmword_140278D30;
      switch ( j )
      {
        case 0:
          selection_code = 1070141403;
LABEL_13:
          axis = (float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3];
          break;
        case 1:
          selection_code = 3217625051LL;
          goto LABEL_13;
        case 2:
          selection_code = 1070141403;
          axis = (float *)&(*(__m256i *)(void *)sr_cube_filter_rotation);
          break;
        case 3:
          selection_code = 3217625051LL;
          axis = (float *)&(*(__m256i *)(void *)sr_cube_filter_rotation);
          break;
        case 5:
          selection_code = 1078530011;
          goto LABEL_13;
        default:
          goto LABEL_15;
      }
      sr_math_mat3_rotate_rows((__int64)&(*(__m256i *)(void *)sr_cube_filter_rotation), axis, *(double *)&selection_code);
LABEL_15:
      HIDWORD(((uint64_t *)(void *)sr_cube_filter_vertices)[0]) = 0;
      scaled_index = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
      ((uint64_t *)(void *)sr_cube_filter_vertices)[1] = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+25)) = *(__int64 *)((char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i64)[1] + 4);
      (*(unsigned *)(void *)(sr_cube_filter_vertices+27)) = SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5];
      (*(unsigned *)(void *)(sr_cube_filter_vertices+7)) = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+8)) = 1065353216;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+13)) = 1065353216;
      (*(unsigned *)(void *)(sr_cube_filter_vertices+15)) = 0;
      (*(uint64_t *)(void *)(sr_cube_filter_vertices+19)) = 0;
      (*(float *)(void *)(sr_cube_filter_vertices+4)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3] + (float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) * -1.0)) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+22)) = (float)((float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+5)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4] + (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] * -1.0))
          - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(unsigned *)(void *)(sr_cube_filter_vertices+21)) = 0;
      (*(float *)(void *)(sr_cube_filter_vertices+6)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5] + (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] * -1.0)) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+23)) = (float)((float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4])
          - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+10)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3] + *(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+24)) = (float)((float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] * -1.0) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+11)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4] + *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+12)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5] + *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      (*(float *)(void *)(sr_cube_filter_vertices+16)) = (float)(*(float *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[3]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[6];
      (*(float *)(void *)(sr_cube_filter_vertices+17)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[1] - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[4]) - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[7];
      (*(float *)(void *)(sr_cube_filter_vertices+18)) = (float)(*(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[2] - *(float *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_cube_filter_rotation), i32)[5]) - (*(float *)(void *)(sr_cube_filter_rotation+8));
      glBindBuffer(34962, scaled_index);
      glBufferSubData(34962, 0, 96, (char *)((uint64_t *)(void *)sr_cube_filter_vertices) + 4);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glEnableVertexAttribArray(2);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
      unused_written_slot = 24;
      scratch_buffer[8] = 24;
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(24));
      glDrawArrays(6, 0, 4);
      glDisableVertexAttribArray(0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(2);
    }
    remaining_bits >>= 1;
    ++buffer_cursor;
  }
  glBindFramebuffer(36160, 0);
  glEnable(2929);
  LOBYTE(unrecovered_register_value) = 1;
  glDepthMask(unrecovered_register_value);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef unused_written_slot
#undef unused_frame_slot_608

//----- (00000001400212E0) ----------------------------------------------------
__int64 sub_1400212E0()
{
  int iteration_count;
  unsigned int *buffer_cursor;
  unsigned int *state_address;
  int iteration_count_2;
  int *buffer_cursor_2;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  float *state_address_4;
  int iteration_count_3;
  unsigned int float_word;
  unsigned int float_word_2;
  int table_value;
  unsigned int selection_code;
  unsigned int scaled_index;
  float product_difference;
  float product_difference_2;
  float scaled_value;
  int scaled_index_2;
  unsigned int table_value_2;
  float combined_products;
  unsigned int table_value_3;
  float float_word_3;
  float weighted_sum;
  __m128i converted_vector;
  __m128i converted_vector_2;
  int scaled_index_3;
  float product_difference_3;
  float product_difference_4;
  float component_delta;
  float product_difference_5;
  int iteration_count_4;
  unsigned int *state_address_5;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  unsigned int table_value_4;
  float weighted_sum_2;
  float product_difference_6;
  float product_difference_7;
  float product_difference_8;
  unsigned int table_value_5;
  float packed_word_bits;
  float product_difference_9;
  float combined_products_2;
  float product_difference_10;
  signed int iteration_count_5;
  unsigned int *state_address_6;
  float product_difference_11;
  float scaled_value_2;
  float weighted_sum_3;
  __int64 table_value_6;
  unsigned int table_value_7;
  unsigned int *state_address_7;
  float state_scalar;
  unsigned int *state_address_8;
  float state_scalar_2;
  unsigned int *state_address_9;
  float scaled_value_3;
  __int64 remaining_count;
  float product_difference_12;
  float product_difference_13;
  float product_difference_14;
  __int64 saved_float_word;
  float combined_products_3;
  bool comparison_result;
  __int64 scaled_index_6;
  unsigned int table_value_8;
  __int128 masked_bits;
  __int64 scaled_index_7;
  signed int iteration_count_6;
  int *running_total;
  float *running_total_2;
  __int64 cached_scaled_index;
  float *record_byte_offset;
  float weighted_sum_4;
  float product_difference_15;
  float source_component_y;
  float packed_word_bits_2;
  float packed_word_bits_3;
  float packed_word_bits_4;
  float packed_word_bits_5;
  float packed_word_bits_6;
  float packed_word_bits_7;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  double scaled_value_4;
  float combined_products_4;
  float combined_products_5;
  float packed_word_bits_8;
  float packed_word_bits_9;
  unsigned int scaled_index_8;
  unsigned int scaled_index_9;
  int scaled_index_10;
  unsigned int masked_bits_2;
  unsigned int float_word_4;
  float combined_products_6;
  float weighted_sum_8;
  double source_float_3680;
  __int64 scaled_index_11;
  __int64 remaining_count_2;
  _DWORD *buffer_cursor_3;
  __int64 running_total_3;
  int state_word;
  __int64 record_byte_offset_2;
  float component_sum;
  float *state_address_10;
  float component_sum_2;
  float component_sum_3;
  float source_component_w;
  float combined_products_7;
  __int64 scaled_index_12;
  float combined_products_8;
  float combined_products_9;
  float combined_products_10;
  float source_component_y_2;
  float combined_products_11;
  float component_sum_4;
  float component_sum_5;
  float source_component_z;
  float combined_products_12;
  float combined_products_13;
  __int64 scaled_index_13;
  float combined_products_14;
  __int64 scaled_index_14;
  float *state_address_11;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float combined_products_15;
  float combined_products_16;
  float combined_products_17;
  float combined_products_18;
  float combined_products_19;
  float combined_products_20;
  __int64 scaled_index_15;
  int element_index;
  unsigned int *state_address_12;
  unsigned int *state_address_13;
  unsigned int *state_address_14;
  unsigned int *state_address_15;
  unsigned int state_word_2;
  __int64 remaining_count_3;
  __int64 selection_code_2;
  __int64 scaled_index_16;
  unsigned __int64 scaled_index_17;
  unsigned int cached_resting_texture_0;
  signed int iteration_count_7;
  int table_value_9;
  float weighted_sum_12;
  float packed_word_bits_10;
  float packed_word_bits_11;
  unsigned int table_value_10;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  unsigned __int64 shifted_bits;
  bool comparison_result_2;
  float saved_weighted_sum;
  float saved_weighted_sum_2;
  unsigned int table_value_11;
  float comparison_result_3;
  double scaled_value_5;
  __int64 table_value_12;
  unsigned int state_word_3;
  __int64 table_value_13;
  unsigned int *buffer_cursor_4;
  __int64 element_index_2;
  __int64 scaled_index_18;
  __int64 scaled_index_19;
  signed int iteration_count_8;
  float *state_address_16;
  signed int iteration_count_9;
  __int64 loaded_word;
  int rol4_result;
  unsigned int *state_address_17;
  __int64 scaled_index_20;
  float product_difference_16;
  float product_difference_17;
  float combined_products_21;
  float combined_products_22;
  float product_difference_18;
  float component_sum_6;
  float product_difference_19;
  float weighted_sum_17;
  signed int iteration_count_10;
  unsigned int *state_address_18;
  __int64 scaled_index_21;
  unsigned int scaled_index_22;
  unsigned int state_word_4;
  __int64 scaled_index_23;
  unsigned int *record_pointer;
  unsigned int *record_pointer_2;
  __int64 scaled_index_24;
  unsigned int masked_bits_3;
  unsigned int saved_masked_bits;
  __int64 scaled_index_25;
  int state_word_5;
  unsigned int *buffer_cursor_5;
  __int64 remaining_count_4;
  unsigned int *state_address_19;
  unsigned int loaded_word_2;
  __int64 element_index_3;
  unsigned sr_scene_draw_textures[4];
  _Alignas(8) unsigned sr_scene_draw_position[3];
  _Alignas(16) unsigned sr_scene_draw_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400212E0[176];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 0)) /* [rsp+8h] */
#define saved_state_address (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 32)) /* [rsp+28h] */
#define float_word_5 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 80)) /* [rsp+58h] */
#define state_address_20 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 88)) /* [rsp+60h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_1400212E0 + 96)) /* [rsp+68h] */
#define state_address_21 (*(unsigned int * (*))(void *)(sr_frame_1400212E0 + 104)) /* [rsp+70h] */
#define scaled_index_26 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 112)) /* [rsp+78h] */
#define saved_float_word_2 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 120)) /* [rsp+80h] */
#define unused_frame_slot_168 (*(__int64 (*))(void *)(sr_frame_1400212E0 + 168)) /* [rsp+B0h] */

  iteration_count = 0;
  buffer_cursor = &g_183EBBBC4;
  g_18417E1B4 = 0;
  state_address = &g_18329E308;
  g_1841FA224 = 0;
  iteration_count_2 = 0;
  buffer_cursor_2 = (int *)&g_183EBBBC4;
  do
  {
    if ( *state_address )
      sub_140022DF0(iteration_count_2, *buffer_cursor_2);
    ++iteration_count_2;
    state_address += 7166;
    ++buffer_cursor_2;
  }
  while ( iteration_count_2 < 256 );
  state_address_2 = &g_18430A654;
  state_address_3 = &g_18329E9FC;
  state_address_4 = (float *)&g_18430A668;
  iteration_count_3 = 0;
  do
  {
    if ( *(state_address_3 - 445) )
    {
      float_word = *buffer_cursor;
      sr_scene_draw_textures[0] = g_183EBF174;
      sr_scene_draw_textures[1] = g_183EBF174;
      (*(uint64_t *)(void *)sr_scene_draw_position) = 0;
      (*(float *)&sr_scene_draw_position[2]) = 0.0;
      (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
      (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
      (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
      sub_140092140(float_word, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)state_address_3[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)&float_word_2 = (float)((float)(int)state_address_3[6698] * 0.0625) + 0.03125;
      dword_140404A6C[30 * g_18417E1B4 + 284554678] = dword_140404A6C[908 * *buffer_cursor + 178527484];
      dword_140404A6C[30 * g_18417E1B4 + 284554704] = float_word_2;
      table_value = state_address_3[6699];
      if ( table_value > 0 )
        *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)((float)(table_value - 1) * 0.0625)
                                                                                + 0.03125;
      selection_code = 1;
      if ( !g_183F7C2F8 && local_player != -1 )
      {
        scaled_index = dword_140404A6C[3597 * local_player + 71856292];
        if ( scaled_index != -1
          && !g_16B165F6C
          && scaled_index == iteration_count_3
          && ((int)*(state_address_3 - 430) > 0 || (int)g_183F79DE8 > 0) )
        {
          selection_code = 3;
        }
      }
      product_difference = *(state_address_4 - 2);
      product_difference_2 = *(state_address_4 - 1);
      scaled_value = *state_address_4;
      scaled_index_2 = 16 * state_address_3[6691];
      sr_scene_draw_textures[0] = g_183EBF17C;
      sr_scene_draw_textures[1] = g_183EBF17C;
      table_value_2 = scaled_index_2 + state_address_3[6692];
      saved_state_address = state_address_2;
      combined_products = (float)(product_difference * 0.125) + *((float *)state_address_3 - 2);
      table_value_3 = dword_140404A6C[table_value_2 + 283827702];
      float_word_3 = (float)(product_difference_2 * 0.125) + *((float *)state_address_3 - 1);
      (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(float_word_3), LODWORD(combined_products));
      weighted_sum = (float)(scaled_value * 0.125) + *(float *)state_address_3;
      (*(float *)&sr_scene_draw_position[2]) = weighted_sum;
      sub_140092140(table_value_3, &sr_scene_draw_textures[0], selection_code, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), state_address_2);
      converted_vector = _mm_cvtsi32_si128(state_address_3[6693]);
      converted_vector_2 = _mm_cvtsi32_si128(state_address_3[6694]);
      saved_state_address = state_address_2;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = (float)(int)state_address_3[6696];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554704] = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0]
                                                                                      * 0.0625)
                                                                              + 0.03125;
      scaled_index_3 = 16 * state_address_3[6691];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) * 0.0625)
                                                                              + 0.03125;
      sub_140092140(dword_140404A6C[scaled_index_3 + state_address_3[6695] + 283827734], &sr_scene_draw_textures[0], selection_code, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), saved_state_address);
      *(float *)SR_VEC_LANES(128, converted_vector_2, i32) = (float)((float)(int)state_address_3[6694] * 0.0625) + 0.03125;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)state_address_3[6693] * 0.0625)
                                                                              + 0.03125;
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = (float)(int)state_address_3[6696];
      dword_140404A6C[30 * g_18417E1B4 + 284554704] = SR_VEC_LANES(128, converted_vector_2, i32)[0];
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554705] = (float)(*(float *)SR_VEC_LANES(128, converted_vector, i32) * 0.0625)
                                                                              + 0.03125;
      if ( state_address_3[6700] )
      {
        product_difference_3 = *((float *)state_address_3 - 58);
        product_difference_4 = *((float *)state_address_3 - 59) * 0.046875;
        sr_scene_draw_textures[0] = g_183EBF0F4;
        sr_scene_draw_textures[1] = g_183EBF0F4;
        component_delta = combined_products - product_difference_4;
        saved_state_address = state_address_2;
        product_difference_5 = *((float *)state_address_3 - 57) * 0.046875;
        *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = component_delta;
        *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = float_word_3 - (float)(product_difference_3 * 0.046875);
        (*(float *)&sr_scene_draw_position[2]) = weighted_sum - product_difference_5;
        sub_140092140(g_183EBC3CC, &sr_scene_draw_textures[0], selection_code, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), state_address_2);
      }
    }
    ++iteration_count_3;
    state_address_2 += 344;
    ++buffer_cursor;
    state_address_4 += 344;
    state_address_3 += 7166;
  }
  while ( iteration_count_3 < 256 );
  iteration_count_4 = 0;
  if ( (int)world_unknown_15fd16260_count > 0 )
  {
    state_address_5 = &g_15FD16294;
    do
    {
      scaled_index_4 = (int)*(state_address_5 - 11);
      if ( (_DWORD)scaled_index_4 == -1
        || !dword_140404A6C[77 * scaled_index_4 + 285044400]
        || dword_140404A6C[5210 * *(state_address_5 - 11) + 129720183] != iteration_count_4 )
      {
        scaled_index_5 = (int)*(state_address_5 - 13);
        table_value_4 = state_address_5[3];
        weighted_sum_2 = *((float *)state_address_5 + 6);
        product_difference_6 = *((float *)state_address_5 - 9);
        product_difference_7 = *((float *)state_address_5 - 8);
        product_difference_8 = *((float *)state_address_5 - 7);
        table_value_5 = dword_140404A6C[scaled_index_5 + 283826646];
        (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(state_address_5 - 2);
        sr_scene_draw_textures[0] = g_183EBF050;
        LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = state_address_5[2];
        LODWORD(packed_word_bits) = state_address_5[4];
        *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(packed_word_bits), table_value_4);
        HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = state_address_5[5];
        (*(float *)&sr_scene_draw_rotation[8]) = weighted_sum_2;
        sr_scene_draw_textures[1] = g_183EBF050;
        product_difference_9 = product_difference_6 - (float)(packed_word_bits * 1.5);
        combined_products_2 = product_difference_7 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) * 1.5);
        product_difference_10 = product_difference_8 - (float)(weighted_sum_2 * 1.5);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(combined_products_2), LODWORD(product_difference_9));
        (*(float *)&sr_scene_draw_position[2]) = product_difference_10;
        sub_140092140(table_value_5, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        iteration_count_5 = 0;
        *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)state_address_5[361] * 0.0625)
                                                                                + 0.03125;
        sr_scene_draw_textures[0] = g_183EBF0F0;
        sr_scene_draw_textures[1] = g_183EBF0F0;
        if ( (int)dword_140404A6C[24944 * *(state_address_5 - 13) + 346731811] > 0 )
        {
          state_address_6 = &dword_140404A6C[24944 * scaled_index_5 + 346731821];
          do
          {
            product_difference_11 = *((float *)state_address_6 - 1);
            scaled_value_2 = *(float *)state_address_6;
            weighted_sum_3 = *((float *)state_address_6 + 1);
            table_value_6 = (int)state_address_6[7];
            saved_state_address = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
            table_value_7 = dword_140404A6C[table_value_6 + 283827222];
            *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * product_difference_11) + product_difference_9)
                                    + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * scaled_value_2))
                            + (float)(weighted_sum_3 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
            *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * product_difference_11) + combined_products_2)
                                          + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * scaled_value_2))
                                  + (float)(weighted_sum_3 * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3));
            (*(float *)&sr_scene_draw_position[2]) = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * product_difference_11) + product_difference_10) + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * scaled_value_2))
                 + (float)(weighted_sum_3 * (*(float *)&sr_scene_draw_rotation[8]));
            sub_140092140(table_value_7, &sr_scene_draw_textures[0], 0, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
            ++iteration_count_5;
            state_address_6 += 20;
          }
          while ( iteration_count_5 < (int)dword_140404A6C[24944 * *(state_address_5 - 13) + 346731811] );
        }
      }
      ++iteration_count_4;
      state_address_5 += 383;
    }
    while ( iteration_count_4 < (int)world_unknown_15fd16260_count );
  }
  state_address_7 = &g_15F2D9208;
  state_scalar = g_183F7C54C;
  state_address_8 = &g_184360530;
  state_scalar_2 = g_183F7C548;
  state_address_9 = &g_184360550;
  scaled_value_3 = g_183F7C544;
  remaining_count = 512;
  state_address_20 = &g_15F2D9208;
  state_address_21 = &g_184360530;
  saved_remaining_count = 512;
  do
  {
    if ( *(state_address_7 - 2) && *(state_address_9 - 9) && *state_address_7 != 3 )
    {
      product_difference_12 = *((float *)state_address_9 - 8);
      product_difference_13 = *((float *)state_address_9 - 7);
      product_difference_14 = *((float *)state_address_9 - 6);
      sr_scene_draw_textures[0] = g_183EBF050;
      sr_scene_draw_textures[1] = g_183EBF050;
      LODWORD(float_word_5) = *(state_address_7 - 1);
      saved_float_word = (int)float_word_5;
      saved_float_word_2 = (int)float_word_5;
      combined_products_3 = (float)((float)((float)(product_difference_13 - state_scalar_2) * (float)(product_difference_13 - state_scalar_2)) + (float)((float)(product_difference_12 - scaled_value_3) * (float)(product_difference_12 - scaled_value_3)))
          + (float)((float)(product_difference_14 - state_scalar) * (float)(product_difference_14 - state_scalar));
      sub_140092140(dword_140404A6C[(int)float_word_5 + 283826582], &sr_scene_draw_textures[0], 1u, state_address_8, state_address_8 + 3);
      comparison_result = (int)state_address_7[1] <= 0;
      *(float *)&dword_140404A6C[30 * g_18417E1B4 + 284554703] = (float)((float)(int)state_address_7[4] * 0.0625)
                                                                              + 0.03125;
      if ( comparison_result )
        dword_140404A6C[30 * g_18417E1B4 + 284554703] = 1053818880;
      if ( *(state_address_7 - 1) == 17 && (int)state_address_7[5039] > 0 )
      {
        scaled_index_6 = 47LL * (int)state_address_7[5040];
        table_value_8 = dword_140404A6C[scaled_index_6 + 18215716];
        LODWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = dword_140404A6C[scaled_index_6 + 18215715];
        (*(float *)&sr_scene_draw_position[2]) = *(float *)&dword_140404A6C[scaled_index_6 + 18215717];
        masked_bits = *(_OWORD *)&dword_140404A6C[scaled_index_6 + 18215724];
        HIDWORD((*(uint64_t *)(void *)sr_scene_draw_position)) = table_value_8;
        (*(__int128 *)(void *)sr_scene_draw_rotation) = masked_bits;
        (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)&dword_140404A6C[scaled_index_6 + 18215728];
        (*(float *)&sr_scene_draw_rotation[8]) = *(float *)&dword_140404A6C[scaled_index_6 + 18215732];
        sub_140092140(g_183EBB3D4, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      scaled_index_7 = 99776 * saved_float_word;
      sr_scene_draw_textures[0] = g_183EBF0F0;
      iteration_count_6 = 0;
      sr_scene_draw_textures[1] = g_183EBF0F0;
      scaled_index_26 = 99776 * saved_float_word;
      if ( (int)dword_140404A6C[24944 * saved_float_word + 346731811] > 0 )
      {
        running_total = (int *)(state_address_7 + 3666);
        running_total_2 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_7 + 1391140640);
        cached_scaled_index = scaled_index_26;
        record_byte_offset = (float *)(state_address_9 + 5);
        do
        {
          weighted_sum_4 = *((float *)state_address_9 + 2);
          product_difference_15 = *(running_total_2 - 1);
          source_component_y = running_total_2[1];
          LODWORD(packed_word_bits_2) = *(state_address_9 - 5);
          LODWORD(packed_word_bits_3) = *(state_address_9 - 4);
          LODWORD(packed_word_bits_4) = *(state_address_9 - 3);
          LODWORD(packed_word_bits_5) = *(state_address_9 - 2);
          LODWORD(packed_word_bits_6) = *state_address_9;
          LODWORD(packed_word_bits_7) = state_address_9[1];
          weighted_sum_5 = *((float *)state_address_9 + 3);
          weighted_sum_6 = record_byte_offset[1] + *running_total_2;
          LODWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = *(state_address_9 - 1);
          (*(float *)&sr_scene_draw_rotation[8]) = weighted_sum_5;
          *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(LODWORD(packed_word_bits_3), LODWORD(packed_word_bits_2));
          *((_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) = __PAIR64__(LODWORD(packed_word_bits_5), LODWORD(packed_word_bits_4));
          *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3) = weighted_sum_4;
          weighted_sum_7 = (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * weighted_sum_6) + (float)(weighted_sum_4 * source_component_y);
          *(_QWORD *)&scaled_value_4 = *(unsigned int *)record_byte_offset;
          *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 4) = __PAIR64__(LODWORD(packed_word_bits_7), LODWORD(packed_word_bits_6));
          combined_products_4 = weighted_sum_7 + (float)((float)(packed_word_bits_3 * product_difference_15) + *((float *)state_address_9 - 7));
          combined_products_5 = (float)((float)(weighted_sum_5 * source_component_y) + (float)(packed_word_bits_6 * weighted_sum_6)) + (float)((float)(packed_word_bits_4 * product_difference_15) + *((float *)state_address_9 - 6));
          *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)(packed_word_bits_7 * source_component_y) + (float)(packed_word_bits_5 * weighted_sum_6))
                          + (float)((float)(packed_word_bits_2 * product_difference_15) + *((float *)state_address_9 - 8));
          *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = combined_products_4;
          (*(float *)&sr_scene_draw_position[2]) = combined_products_5;
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, scaled_value_4);
          sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation), sr_export_float_lane_container((unsigned __int64)*((_DWORD *)record_byte_offset - 1)));
          sub_140092140(
            dword_140404A6C[*running_total + 283827222],
            &sr_scene_draw_textures[0],
            combined_products_3 < 16384.0,
            (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
            (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
          ++iteration_count_6;
          running_total_2 += 20;
          record_byte_offset += 4;
          running_total += 43;
        }
        while ( iteration_count_6 < *(int *)((char *)&g_192EB1EF8 + cached_scaled_index) );
        state_address_7 = state_address_20;
        scaled_index_7 = scaled_index_26;
        saved_float_word = saved_float_word_2;
      }
      if ( (_DWORD)float_word_5 == 12 )
      {
        LODWORD(packed_word_bits_8) = *(state_address_9 - 1);
        LODWORD(packed_word_bits_9) = *state_address_9;
        scaled_index_8 = *(state_address_9 - 5);
        scaled_index_9 = *(state_address_9 - 4);
        HIDWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = *(state_address_9 - 2);
        *(_QWORD *)&(*(__int128 *)(void *)sr_scene_draw_rotation) = __PAIR64__(scaled_index_9, scaled_index_8);
        scaled_index_10 = *(state_address_9 - 3);
        *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(packed_word_bits_9), LODWORD(packed_word_bits_8));
        *(float *)&masked_bits_2 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 1.5) + *((float *)state_address_9 - 8);
        DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = scaled_index_10;
        *(float *)&float_word_4 = (float)(packed_word_bits_8 * 1.5) + *((float *)state_address_9 - 7);
        combined_products_6 = (float)(packed_word_bits_9 * 1.5) + *((float *)state_address_9 - 6);
        *((_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) = *(_QWORD *)(state_address_9 + 1);
        weighted_sum_8 = *((float *)state_address_9 + 3);
        (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(float_word_4, masked_bits_2);
        *(_QWORD *)&source_float_3680 = state_address_7[3680];
        (*(float *)&sr_scene_draw_rotation[8]) = weighted_sum_8;
        (*(float *)&sr_scene_draw_position[2]) = combined_products_6;
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, source_float_3680);
        sub_140092140(g_183EBC3DC, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
        sub_14012BD30((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1078530011));
        sub_140092140(g_183EBC3DC, &sr_scene_draw_textures[0], 1u, (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position), (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
      }
      if ( *(unsigned int *)((char *)&g_192E9A680 + scaled_index_7)
        && (scaled_index_11 = 45072 * saved_float_word, remaining_count_2 = (int)dword_140404A6C[45072 * saved_float_word + 335200382], remaining_count_2 > 0) )
      {
        scaled_value_3 = g_183F7C544;
        buffer_cursor_3 = state_address_7 + 2557;
        state_scalar = g_183F7C54C;
        running_total_3 = 0;
        state_scalar_2 = g_183F7C548;
        state_word = g_1841FA224;
        LODWORD(float_word_5) = *(unsigned int *)&g_183F7C544;
        do
        {
          if ( !*buffer_cursor_3 && state_word < 0x4000 )
          {
            record_byte_offset_2 = 0;
            component_sum = 0.0;
            state_address_10 = (float *)&dword_140404A6C[scaled_index_11 + 335200386 + running_total_3];
            component_sum_2 = 0.0;
            component_sum_3 = 0.0;
            while ( 1 )
            {
              source_component_w = state_address_10[3];
              combined_products_7 = (float)((float)(*state_address_10 * *((float *)state_address_9 + 1)) + (float)(*(state_address_10 - 2) * *((float *)state_address_9 - 5)))
                   + (float)((float)(*(state_address_10 - 1) * *((float *)state_address_9 - 2)) + *((float *)state_address_9 - 8));
              scaled_index_12 = record_byte_offset_2 + 68LL * state_word;
              combined_products_8 = (float)(*(state_address_10 - 2) * *((float *)state_address_9 - 4)) + (float)(*state_address_10 * *((float *)state_address_9 + 2));
              combined_products_9 = (float)(*state_address_10 * *((float *)state_address_9 + 3)) + (float)(*(state_address_10 - 2) * *((float *)state_address_9 - 3));
              combined_products_10 = (float)(*(state_address_10 - 1) * *((float *)state_address_9 - 1)) + *((float *)state_address_9 - 7);
              source_component_y_2 = state_address_10[1];
              combined_products_11 = (float)(*(state_address_10 - 1) * *(float *)state_address_9) + *((float *)state_address_9 - 6);
              *(float *)((char *)&g_1841FA228 + scaled_index_12) = combined_products_7;
              component_sum_4 = combined_products_8 + combined_products_10;
              component_sum_5 = combined_products_9 + combined_products_11;
              source_component_z = state_address_10[2];
              state_address_10 += 6;
              *(float *)((char *)&g_1841FA22C + scaled_index_12) = component_sum_4;
              *(float *)((char *)&g_1841FA230 + scaled_index_12) = component_sum_5;
              combined_products_12 = (float)((float)(source_component_y_2 * *((float *)state_address_9 - 5)) + (float)(source_component_w * *((float *)state_address_9 + 1)))
                   + (float)((float)(source_component_z * *((float *)state_address_9 - 2)) + *((float *)state_address_9 - 8));
              combined_products_13 = (float)((float)(source_component_y_2 * *((float *)state_address_9 - 4)) + (float)(source_component_w * *((float *)state_address_9 + 2)))
                   + (float)((float)(source_component_z * *((float *)state_address_9 - 1)) + *((float *)state_address_9 - 7));
              component_sum = (float)(combined_products_7 + component_sum) + combined_products_12;
              scaled_index_13 = record_byte_offset_2 + 68LL * (int)g_1841FA224;
              combined_products_14 = (float)((float)(source_component_w * *((float *)state_address_9 + 3)) + (float)(source_component_y_2 * *((float *)state_address_9 - 3)))
                   + (float)((float)(source_component_z * *(float *)state_address_9) + *((float *)state_address_9 - 6));
              record_byte_offset_2 += 24;
              component_sum_2 = (float)(component_sum_4 + component_sum_2) + combined_products_13;
              *(float *)((char *)&g_1841FA234 + scaled_index_13) = combined_products_12;
              *(float *)((char *)&g_1841FA238 + scaled_index_13) = combined_products_13;
              component_sum_3 = (float)(component_sum_5 + component_sum_3) + combined_products_14;
              *(float *)((char *)&g_1841FA23C + scaled_index_13) = combined_products_14;
              if ( record_byte_offset_2 >= 48 )
                break;
              state_word = g_1841FA224;
            }
            scaled_value_3 = *(float *)&float_word_5;
            *(float *)&dword_140404A6C[17 * g_1841FA224 + 284677630] = fsqrt(
                                                                                        (float)((float)((float)(state_scalar_2 - (float)(component_sum_2 * 0.25)) * (float)(state_scalar_2 - (float)(component_sum_2 * 0.25)))
                                                                                              + (float)((float)(*(float *)&float_word_5 - (float)(component_sum * 0.25)) * (float)(*(float *)&float_word_5 - (float)(component_sum * 0.25))))
                                                                                      + (float)((float)(state_scalar - (float)(component_sum_3 * 0.25))
                                                                                              * (float)(state_scalar - (float)(component_sum_3 * 0.25))));
            scaled_index_14 = 17LL * (int)g_1841FA224;
            weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_14 + 284677615];
            weighted_sum_10 = *(float *)&dword_140404A6C[scaled_index_14 + 284677616];
            weighted_sum_11 = *(float *)&dword_140404A6C[scaled_index_14 + 284677617];
            combined_products_15 = *(float *)&dword_140404A6C[scaled_index_14 + 284677621] - weighted_sum_9;
            combined_products_16 = *(float *)&dword_140404A6C[scaled_index_14 + 284677622] - weighted_sum_10;
            combined_products_17 = *(float *)&dword_140404A6C[scaled_index_14 + 284677618] - weighted_sum_9;
            combined_products_18 = *(float *)&dword_140404A6C[scaled_index_14 + 284677619] - weighted_sum_10;
            combined_products_19 = *(float *)&dword_140404A6C[scaled_index_14 + 284677620] - weighted_sum_11;
            state_address_11 = (float *)&dword_140404A6C[scaled_index_14 + 284677627];
            combined_products_20 = *(float *)&dword_140404A6C[scaled_index_14 + 284677623] - weighted_sum_11;
            *state_address_11 = (float)(combined_products_16 * combined_products_19) - (float)(combined_products_20 * combined_products_18);
            state_address_11[1] = (float)(combined_products_20 * combined_products_17) - (float)(combined_products_15 * combined_products_19);
            state_address_11[2] = (float)(combined_products_15 * combined_products_18) - (float)(combined_products_16 * combined_products_17);
            sr_math_vec3_normalize((__int64)state_address_11, state_address_11);
            iteration_count = 0;
            scaled_index_15 = 17LL * (int)g_1841FA224;
            dword_140404A6C[scaled_index_15 + 284677631] = (float)((float)((float)((float)(state_scalar_2
                                                                              - *(float *)&dword_140404A6C[scaled_index_15 + 284677616])
                                                                      * *(float *)&dword_140404A6C[scaled_index_15 + 284677628])
                                                              + (float)((float)(scaled_value_3
                                                                              - *(float *)&dword_140404A6C[scaled_index_15 + 284677615])
                                                                      * *(float *)&dword_140404A6C[scaled_index_15 + 284677627]))
                                                      + (float)((float)(state_scalar
                                                                      - *(float *)&dword_140404A6C[scaled_index_15 + 284677617])
                                                              * *(float *)&dword_140404A6C[scaled_index_15 + 284677629])) >= 0.0;
            state_word = ++g_1841FA224;
          }
          ++buffer_cursor_3;
          running_total_3 += 13;
          --remaining_count_2;
        }
        while ( remaining_count_2 );
        state_address_7 = state_address_20;
      }
      else
      {
        state_scalar = g_183F7C54C;
        state_scalar_2 = g_183F7C548;
        scaled_value_3 = g_183F7C544;
      }
      remaining_count = saved_remaining_count;
      state_address_8 = state_address_21;
    }
    state_address_8 += 77;
    state_address_7 += 5210;
    state_address_9 += 77;
    --remaining_count;
    state_address_21 = state_address_8;
    saved_remaining_count = remaining_count;
    state_address_20 = state_address_7;
  }
  while ( remaining_count );
  element_index = 0;
  sr_scene_draw_textures[0] = resting_texture_0;
  sr_scene_draw_textures[1] = resting_texture_0;
  if ( (int)world_bullet_count > 0 )
  {
    state_address_12 = &g_1A8A879C0;
    do
    {
      sub_140092140(
        dword_140404A6C[*state_address_12 + 283827542],
        &sr_scene_draw_textures[0],
        0,
        &dword_140404A6C[23 * element_index + 437914586],
        &dword_140404A6C[23 * element_index + 437914595]);
      ++element_index;
      state_address_12 += 23;
    }
    while ( element_index < (int)world_bullet_count );
  }
  state_address_13 = &g_182BBB1A8;
  state_address_14 = &g_184386D30;
  state_address_15 = &g_184386D38;
  state_word_2 = g_183EBF178;
  remaining_count_3 = 1024;
  selection_code_2 = 0x200800002000LL;
  do
  {
    if ( *(state_address_13 - 10) )
    {
      scaled_index_16 = (int)*state_address_13;
      if ( ((_DWORD)scaled_index_16 == -1
         || dword_140404A6C[1760 * scaled_index_16 + 278845902] == -1
         || (int)dword_140404A6C[1760 * scaled_index_16 + 278845904] < 3)
        && (*(state_address_13 - 1) == -1 || (int)state_address_13[1] < 3) )
      {
        scaled_index_17 = (int)*(state_address_13 - 5);
        sr_scene_draw_textures[0] = g_183EBF0F4;
        sr_scene_draw_textures[1] = g_183EBF0F4;
        if ( (unsigned int)(scaled_index_17 - 1) <= 0xB )
        {
          sr_scene_draw_textures[0] = state_word_2;
          sr_scene_draw_textures[1] = state_word_2;
        }
        if ( !(_DWORD)scaled_index_17 )
        {
          sr_scene_draw_textures[0] = state_word_2;
          sr_scene_draw_textures[1] = state_word_2;
          goto LABEL_121;
        }
        if ( (_DWORD)scaled_index_17 == 6 )
        {
          cached_resting_texture_0 = resting_texture_0;
        }
        else
        {
          if ( (unsigned int)scaled_index_17 <= 0x2D && _bittest64(&selection_code_2, scaled_index_17) )
          {
            sr_scene_draw_textures[0] = dword_140404A6C[scaled_index_17 + 283830981];
            sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
          }
          if ( (_DWORD)scaled_index_17 == 18 )
          {
            iteration_count_7 = 0;
            table_value_9 = state_address_13[159];
            weighted_sum_12 = *((float *)state_address_15 + 4);
            LODWORD(packed_word_bits_10) = state_address_15[5];
            LODWORD(packed_word_bits_11) = state_address_15[6];
            table_value_10 = state_address_15[2];
            LODWORD((*(__int128 *)(void *)sr_scene_draw_rotation)) = state_address_15[1];
            DWORD2((*(__int128 *)(void *)sr_scene_draw_rotation)) = state_address_15[3];
            DWORD2((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = state_address_15[7];
            weighted_sum_13 = *((float *)state_address_15 + 9);
            *((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) = weighted_sum_12;
            *(_QWORD *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = __PAIR64__(LODWORD(packed_word_bits_11), LODWORD(packed_word_bits_10));
            (*(float *)&sr_scene_draw_rotation[8]) = weighted_sum_13;
            DWORD1((*(__int128 *)(void *)sr_scene_draw_rotation)) = table_value_10;
            HIDWORD((*(__int128 *)(void *)(sr_scene_draw_rotation+4))) = state_address_15[8];
            weighted_sum_14 = (float)((float)(weighted_sum_12 * (float)table_value_9) * 0.0068359375) + *((float *)state_address_15 - 2);
            weighted_sum_15 = (float)((float)(packed_word_bits_10 * (float)table_value_9) * 0.0068359375) + *((float *)state_address_15 - 1);
            weighted_sum_16 = (float)((float)(packed_word_bits_11 * (float)table_value_9) * 0.0068359375) + *(float *)state_address_15;
            (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(weighted_sum_15), LODWORD(weighted_sum_14));
            (*(float *)&sr_scene_draw_position[2]) = weighted_sum_16;
            if ( table_value_9 < 0 )
              goto LABEL_125;
            do
            {
              shifted_bits = ((unsigned __int64)state_address_13[160] >> (3 * (unsigned __int8)iteration_count_7)) & 7;
              saved_state_address = (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation);
              sr_scene_draw_textures[0] = dword_140404A6C[shifted_bits + 283830706];
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
              sub_140092140(
                dword_140404A6C[*(state_address_13 - 5) + 283826966],
                &sr_scene_draw_textures[0],
                1u,
                (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
              comparison_result_2 = *(state_address_13 - 1) == -1;
              weighted_sum_14 = weighted_sum_14 - (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * 0.013671875);
              weighted_sum_15 = weighted_sum_15 - (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * 0.013671875);
              (*(uint64_t *)(void *)sr_scene_draw_position) = __PAIR64__(LODWORD(weighted_sum_15), LODWORD(weighted_sum_14));
              saved_weighted_sum = weighted_sum_14;
              saved_weighted_sum_2 = weighted_sum_15;
              weighted_sum_16 = weighted_sum_16 - (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * 0.013671875);
              *(float *)&float_word_5 = weighted_sum_16;
              (*(float *)&sr_scene_draw_position[2]) = weighted_sum_16;
              if ( !comparison_result_2 )
              {
                table_value_11 = state_address_13[1];
                if ( table_value_11 )
                  comparison_result_3 = table_value_11 == 1 ? 0.03125 : 0.0;
                else
                  comparison_result_3 = -0.03125;
                scaled_value_5 = comparison_result_3 * 1.570796326795;
                sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_5))) /* the original converts to float (cvtsd2ss) before this call */);
                if ( iteration_count_7 == state_address_13[158] - 1 )
                {
                  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(sr_text_float_bits((float)(scaled_value_5))) /* the original converts to float (cvtsd2ss) before this call */);
                  weighted_sum_14 = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * comparison_result_3) + weighted_sum_14;
                  weighted_sum_15 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * comparison_result_3) + weighted_sum_15;
                  weighted_sum_16 = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * comparison_result_3) + *(float *)&float_word_5;
                  *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * comparison_result_3) + saved_weighted_sum;
                  *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * comparison_result_3) + saved_weighted_sum_2;
                  (*(float *)&sr_scene_draw_position[2]) = weighted_sum_16;
                }
              }
              ++iteration_count_7;
            }
            while ( iteration_count_7 <= (int)state_address_13[159] );
            goto LABEL_124;
          }
          if ( (unsigned int)(scaled_index_17 - 37) <= 1 || (_DWORD)scaled_index_17 == 44 )
          {
            sr_scene_draw_textures[0] = g_183EBF10C;
            sr_scene_draw_textures[1] = g_183EBF10C;
          }
          if ( (_DWORD)scaled_index_17 == 43 )
          {
            sr_scene_draw_textures[0] = g_183EBF10C;
            sr_scene_draw_textures[1] = g_183EBF10C;
            goto LABEL_121;
          }
          if ( (unsigned int)(scaled_index_17 - 39) <= 1 )
          {
            table_value_12 = (int)state_address_13[197];
            if ( dword_140404A6C[3 * table_value_12 + 278520517] )
              state_word_3 = dword_140404A6C[table_value_12 + 283830725];
            else
              state_word_3 = g_183EBF57C;
            sr_scene_draw_textures[1] = state_word_3;
            sr_scene_draw_textures[0] = state_word_3;
          }
          if ( (_DWORD)scaled_index_17 == 17 )
          {
            cached_resting_texture_0 = g_183EBF148;
          }
          else
          {
            if ( (unsigned int)(scaled_index_17 - 19) <= 5 )
            {
              sr_scene_draw_textures[0] = scaled_index_17 + g_183EBF0F4 - 19;
              sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
            }
            if ( (_DWORD)scaled_index_17 == 14 )
            {
              cached_resting_texture_0 = g_183EBC404;
            }
            else if ( (_DWORD)scaled_index_17 == 30 )
            {
              cached_resting_texture_0 = g_183EBF16C;
            }
            else
            {
              if ( (((_DWORD)scaled_index_17 - 25) & 0xFFFFFFF7) == 0 )
              {
                sr_scene_draw_textures[0] = g_183EBF10C;
                sr_scene_draw_textures[1] = g_183EBF10C;
              }
              switch ( (_DWORD)scaled_index_17 )
              {
                case 0x1A:
                  cached_resting_texture_0 = g_183EBF110;
                  break;
                case 0x1C:
                  sr_scene_draw_textures[0] = g_183EBF0F4;
                  sr_scene_draw_textures[1] = g_183EBF0F4;
                  goto LABEL_121;
                case 0x1B:
                  sr_scene_draw_textures[0] = g_183EBF0F4;
                  sr_scene_draw_textures[1] = g_183EBF0F4;
                  goto LABEL_121;
                case 0x22:
                case 0x1D:
                  table_value_13 = (int)state_address_13[197];
                  if ( dword_140404A6C[3 * table_value_13 + 278520517] )
                    cached_resting_texture_0 = dword_140404A6C[table_value_13 + 283830725];
                  else
                    cached_resting_texture_0 = g_183EBF168;
                  break;
                default:
LABEL_121:
                  sub_140092140(dword_140404A6C[scaled_index_17 + 283826966], &sr_scene_draw_textures[0], 1u, state_address_14, state_address_14 + 3);
                  if ( *(state_address_13 - 5) == 25 && state_address_13[148] == 1 )
                    dword_140404A6C[30 * g_18417E1B4 + 284554703] = 1046478848;
LABEL_124:
                  state_word_2 = g_183EBF178;
                  selection_code_2 = 0x200800002000LL;
                  goto LABEL_125;
              }
            }
          }
        }
        sr_scene_draw_textures[0] = cached_resting_texture_0;
        sr_scene_draw_textures[1] = cached_resting_texture_0;
        goto LABEL_121;
      }
    }
LABEL_125:
    state_address_14 += 13;
    state_address_15 += 13;
    state_address_13 += 1760;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  (*(uint64_t *)(void *)sr_scene_draw_position) = 0x41C0000044890000LL;
  (*(float *)&sr_scene_draw_position[2]) = 1056.0;
  (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
  (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
  (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
  sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3, sr_export_float_lane_container(1070141403));
  sr_scene_draw_textures[0] = g_183EBF178;
  sr_scene_draw_textures[1] = g_183EBF178;
  LODWORD(float_word_5) = 0;
  if ( (int)g_150F55020 > 0 )
  {
    buffer_cursor_4 = &g_150F55024;
    state_address_20 = &g_150F55024;
    do
    {
      element_index_2 = 0;
      saved_remaining_count = 0;
      do
      {
        scaled_index_18 = (int)dword_140404A6C[6930 * (int)*buffer_cursor_4 + 83200503 + element_index_2];
        if ( (int)scaled_index_18 >= 0 )
        {
          scaled_index_19 = 8969 * scaled_index_18;
          iteration_count_8 = 0;
          LODWORD(state_address_21) = 0;
          if ( (int)dword_140404A6C[8969 * scaled_index_18 + 73993587] > 0 )
          {
            state_address_16 = (float *)&dword_140404A6C[scaled_index_19 + 73993594];
            do
            {
              iteration_count_9 = 0;
              loaded_word = 948LL * *((int *)state_address_16 - 6);
              if ( (int)dword_140404A6C[loaded_word + 272299416] > 0 )
              {
                rol4_result = 1;
                state_address_17 = &dword_140404A6C[loaded_word + 272299439];
                do
                {
                  if ( (rol4_result & *(_DWORD *)(state_address_16 - 4)) == 0 )
                  {
                    scaled_index_20 = (int)*(state_address_17 - 6);
                    sr_scene_draw_textures[0] = dword_140404A6C[scaled_index_20 + 283830981];
                    sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                    if ( (unsigned int)(scaled_index_20 - 37) <= 1 || (_DWORD)scaled_index_20 == 44 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF10C;
                      sr_scene_draw_textures[1] = g_183EBF10C;
                    }
                    if ( (_DWORD)scaled_index_20 == 43 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF10C;
                      sr_scene_draw_textures[1] = g_183EBF10C;
                    }
                    else if ( (unsigned int)(scaled_index_20 - 39) <= 1 )
                    {
                      sr_scene_draw_textures[0] = g_183EBF57C;
                      sr_scene_draw_textures[1] = g_183EBF57C;
                    }
                    (*(float *)&sr_scene_draw_rotation[8]) = 1.0;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = xmmword_140278D30;
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = xmmword_140278D30;
                    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)((float)*((int *)state_address_16 - 3) * 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
                    product_difference_16 = *((float *)state_address_17 - 5);
                    product_difference_17 = *((float *)state_address_17 - 4);
                    combined_products_21 = *((float *)state_address_17 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 3);
                    combined_products_22 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 1) * product_difference_16) + *(state_address_16 - 1))
                         + (float)(*(float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) * product_difference_17);
                    product_difference_18 = *((float *)state_address_17 - 3) * (*(float *)&sr_scene_draw_rotation[8]);
                    *(float *)&(*(uint64_t *)(void *)sr_scene_draw_position) = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) * product_difference_16) + *(state_address_16 - 2))
                                            + (float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 3) * product_difference_17))
                                    + (float)(*((float *)state_address_17 - 3) * *((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 2));
                    component_sum_6 = combined_products_22 + combined_products_21;
                    product_difference_19 = (float)*((int *)state_address_16 - 3);
                    weighted_sum_17 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_scene_draw_rotation) + 2) * product_difference_16) + *state_address_16)
                         + (float)(*((float *)&(*(__int128 *)(void *)(sr_scene_draw_rotation+4)) + 1) * product_difference_17);
                    *((float *)&(*(uint64_t *)(void *)sr_scene_draw_position) + 1) = component_sum_6;
                    (*(__int128 *)(void *)sr_scene_draw_rotation) = *(_OWORD *)(state_address_17 - 2);
                    (*(__int128 *)(void *)(sr_scene_draw_rotation+4)) = *(_OWORD *)(state_address_17 + 2);
                    (*(float *)&sr_scene_draw_rotation[8]) = *((float *)state_address_17 + 6);
                    (*(float *)&sr_scene_draw_position[2]) = weighted_sum_17 + product_difference_18;
                    sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_scene_draw_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(product_difference_19 * 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
                    sub_140092140(
                      dword_140404A6C[*(state_address_17 - 6) + 283826966],
                      &sr_scene_draw_textures[0],
                      1u,
                      (unsigned int *)&(*(uint64_t *)(void *)sr_scene_draw_position),
                      (unsigned int *)&(*(__int128 *)(void *)sr_scene_draw_rotation));
                  }
                  ++iteration_count_9;
                  rol4_result = __ROL4__(rol4_result, 1);
                  state_address_17 += 29;
                }
                while ( iteration_count_9 < (int)dword_140404A6C[loaded_word + 272299416] );
                iteration_count_8 = (int)state_address_21;
              }
              ++iteration_count_8;
              state_address_16 += 7;
              LODWORD(state_address_21) = iteration_count_8;
            }
            while ( iteration_count_8 < (int)dword_140404A6C[scaled_index_19 + 73993587] );
            element_index_2 = saved_remaining_count;
          }
          iteration_count_10 = 0;
          if ( (int)dword_140404A6C[scaled_index_19 + 73991666] > 0 )
          {
            state_address_18 = &dword_140404A6C[scaled_index_19 + 73991669];
            while ( 1 )
            {
              scaled_index_21 = (int)*(state_address_18 - 2);
              sr_scene_draw_textures[0] = g_183EBF0F4;
              sr_scene_draw_textures[1] = g_183EBF0F4;
              if ( (_DWORD)scaled_index_21 == 1 )
              {
                sr_scene_draw_textures[0] = g_183EBF074;
                sr_scene_draw_textures[1] = g_183EBF074;
                scaled_index_22 = dword_140404A6C[34 * *(state_address_18 - 1) + 225391250 + *state_address_18];
                if ( scaled_index_22 == 1 )
                {
                  state_word_4 = g_183EBF078;
LABEL_154:
                  sr_scene_draw_textures[1] = state_word_4;
                  sr_scene_draw_textures[0] = state_word_4;
                  goto LABEL_155;
                }
                if ( scaled_index_22 == 2 )
                {
                  state_word_4 = g_183EBF07C;
                  goto LABEL_154;
                }
              }
LABEL_155:
              scaled_index_23 = scaled_index_19 * 4 + 60LL * iteration_count_10;
              record_pointer = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_23 + 300180036);
              record_pointer_2 = (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index_23 + 300180048);
              sub_140092140(dword_140404A6C[scaled_index_21 + 283827606], &sr_scene_draw_textures[0], 1u, record_pointer, record_pointer_2);
              if ( *(state_address_18 - 2) == 1 )
              {
                scaled_index_24 = 34LL * (int)*(state_address_18 - 1);
                masked_bits_3 = dword_140404A6C[scaled_index_24 + 225391236 + (((unsigned __int8)*state_address_18 + 1) & 3)];
                if ( masked_bits_3 == -1 )
                  masked_bits_3 = dword_140404A6C[scaled_index_24 + 225391236 + (((unsigned __int8)*state_address_18 - 1) & 3)];
                saved_state_address = record_pointer_2;
                saved_masked_bits = 0;
                if ( masked_bits_3 != -1 )
                  saved_masked_bits = masked_bits_3;
                scaled_index_25 = dword_140404A6C[396 * saved_masked_bits + 225426055];
                if ( (unsigned int)scaled_index_25 > 0x10 )
                  scaled_index_25 = 0;
                sr_scene_draw_textures[0] = dword_140404A6C[scaled_index_25 + 283831239];
                sr_scene_draw_textures[1] = sr_scene_draw_textures[0];
                sub_140092140(g_183EBC0D4, &sr_scene_draw_textures[0], 1u, record_pointer, saved_state_address);
              }
              ++iteration_count_10;
              state_address_18 += 15;
              if ( iteration_count_10 >= (int)dword_140404A6C[scaled_index_19 + 73991666] )
              {
                element_index_2 = saved_remaining_count;
                break;
              }
            }
          }
          buffer_cursor_4 = state_address_20;
        }
        saved_remaining_count = ++element_index_2;
      }
      while ( element_index_2 < 4 );
      state_address_20 = ++buffer_cursor_4;
      LODWORD(float_word_5) = float_word_5 + 1;
    }
    while ( (int)float_word_5 < (int)g_150F55020 );
  }
  state_word_5 = g_18417E1B4;
  if ( (int)g_18417E1B4 > 0 )
  {
    buffer_cursor_5 = &g_1A87C6BA4;
    remaining_count_4 = g_18417E1B4;
    state_address_19 = &g_1841821C8;
    do
    {
      loaded_word_2 = *state_address_19;
      state_address_19 += 30;
      *buffer_cursor_5++ = loaded_word_2;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
  }
  renderer_sort_count = state_word_5;
  sr_renderer_sort();
  if ( state_word_5 > 0 )
  {
    element_index_3 = 0;
    do
    {
      ++iteration_count;
      dword_140404A6C[element_index_3 + 284550611] = dword_140404A6C[element_index_3 + 436668494];
      ++element_index_3;
    }
    while ( iteration_count < (int)g_18417E1B4 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef saved_state_address
#undef float_word_5
#undef state_address_20
#undef saved_remaining_count
#undef state_address_21
#undef scaled_index_26
#undef saved_float_word_2
#undef unused_frame_slot_168

//----- (0000000140029800) ----------------------------------------------------
__int64            sub_140029800(__int64 a1, __int64 a2, int a3)
{
  int input_value;
  int *record_pointer;
  int iteration_count;
  int *running_total;
  __int64 scaled_index;
  __int64 destination_buffer;
  int iteration_count_2;
  __int64 scaled_index_2;
  __int64 destination_buffer_2;
  __int64 integer_sum;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140029800[112];
#define saved_iteration_count (*(int (*))(void *)(sr_frame_140029800 + 0)) /* [rsp+20h] */
#define destination_buffer_3 (*(int (*))(void *)(sr_frame_140029800 + 104)) /* [rsp+88h] */

  destination_buffer_3 = 1;
  input_value = a3;
  if ( a3 )
  {
    crt_fread((__int64)&destination_buffer_3, 4, 1, a2);
    record_pointer = (int *)(a1 + 47352508);
    crt_fread(a1 + 47352508, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&destination_buffer_3), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( destination_buffer_3 != 1 )
      return 0;
    record_pointer = (int *)(a1 + 47352508);
    fread_sr((void *)(uintptr_t)(a1 + 47352508), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  iteration_count = 0;
  saved_iteration_count = 0;
  if ( *record_pointer > 0 )
  {
    running_total = (int *)(a1 + 47352512);
    do
    {
      scaled_index = 1028LL * iteration_count;
      destination_buffer = scaled_index + a1 + 47352512;
      if ( input_value )
        crt_fread(destination_buffer, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(destination_buffer), 4, 1, (FILE *)(uintptr_t)(a2));
      iteration_count_2 = 0;
      if ( *running_total > 0 )
      {
        do
        {
          scaled_index_2 = scaled_index + 16LL * iteration_count_2;
          destination_buffer_2 = scaled_index_2 + a1 + 47352516;
          integer_sum = scaled_index_2 + a1;
          if ( a3 )
          {
            crt_fread(destination_buffer_2, 4, 3, a2);
            crt_fread(integer_sum + 47352528, 4, 1, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 3, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(integer_sum + 47352528), 4, 1, (FILE *)(uintptr_t)(a2));
          }
          ++iteration_count_2;
        }
        while ( iteration_count_2 < *running_total );
        iteration_count = saved_iteration_count;
      }
      input_value = a3;
      ++iteration_count;
      running_total += 257;
      saved_iteration_count = iteration_count;
    }
    while ( iteration_count < *record_pointer );
  }
  return 1;
}
#undef saved_iteration_count
#undef destination_buffer_3

//----- (000000014002FA00) ----------------------------------------------------
__int64 sub_14002FA00()
{
  __int64 scaled_index;
  __int64 float_word;
  unsigned int float_word_2;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  __int128 masked_bits_4;
  unsigned int scaled_index_2;
  float float_word_3;
  __int64 scaled_index_3;
  float weighted_sum;
  double angle;
  double float_word_4;
  double scaled_value;
  double component_delta;
  __int128 masked_bits_5;
  float weighted_sum_2;
  float *axis;
  double angle_2;
  double angle_3;
  double angle_4;
  float weighted_sum_3;
  float weighted_sum_4;
  float reordered_vector;
  float scaled_value_2;
  float scaled_value_3;
  float weighted_sum_5;
  float combined_products;
  float product_difference;
  float component_delta_2;
  float product_difference_2;
  float scaled_value_4;
  float combined_products_2;
  float product_difference_3;
  float product_difference_4;
  float combined_products_3;
  float component_delta_3;
  float product_difference_5;
  float combined_products_4;
  float combined_products_5;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float scaled_ratio_3;
  double acos_result;
  float component_sum;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  double square_root_2;
  float weighted_sum_9;
  float absolute_value;
  float weighted_sum_10;
  float scaled_value_5;
  double angle_5;
  __int64 scaled_index_4;
  double angle_6;
  double angle_7;
  __int64 scaled_index_5;
  double angle_8;
  float reordered_vector_2;
  float scaled_value_6;
  float scaled_value_7;
  float weighted_sum_11;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  float combined_products_6;
  float combined_products_7;
  float combined_products_8;
  float combined_products_9;
  float square_root_3;
  float scaled_ratio_4;
  float scaled_ratio_5;
  float scaled_ratio_6;
  double acos_result_2;
  float component_sum_2;
  float scaled_value_8;
  float scaled_value_9;
  float scaled_value_10;
  float square_root_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002FA00[144];
#define unused_frame_slot_8 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 8)) /* [rsp+8h] */
#define quaternion (*(float (*))(void *)(sr_frame_14002FA00 + 40)) /* [rsp+28h] */
#define saved_combined_products (*(float (*))(void *)(sr_frame_14002FA00 + 44)) /* [rsp+2Ch] */
#define float_word_5 (*(_QWORD (*)[3])(void *)(sr_frame_14002FA00 + 48)) /* [rsp+30h] */
#define axis_2 (*(float (*))(void *)(sr_frame_14002FA00 + 80)) /* [rsp+50h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14002FA00 + 84)) /* [rsp+54h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14002FA00 + 88)) /* [rsp+58h] */
#define axis_3 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 96)) /* [rsp+60h] */
#define unused_written_slot_3 (*(__int128 (*))(void *)(sr_frame_14002FA00 + 112)) /* [rsp+70h] */
#define unused_written_slot_4 (*(unsigned int (*))(void *)(sr_frame_14002FA00 + 128)) /* [rsp+80h] */
#define unused_frame_slot_136 (*(__int64 (*))(void *)(sr_frame_14002FA00 + 136)) /* [rsp+88h] */

  if ( local_player == -1 )
  {
    g_183F7C588 = -1;
    return 0; /* the function has no caller */
  }
  scaled_index = 3597LL * (int)local_player;
  float_word = (int)dword_140404A6C[scaled_index + 71856292];
  if ( (_DWORD)float_word == -1 )
  {
    g_183F7C588 = -1;
    return 0; /* the function has no caller */
  }
  if ( (_DWORD)float_word == g_183F7C588 )
  {
    masked_bits_3 = *(unsigned int *)&g_183F7C5AC;
    masked_bits_2 = *(unsigned int *)&g_183F7C5A8;
    masked_bits = *(unsigned int *)&g_183F7C5A4;
  }
  else
  {
    *(_QWORD *)&g_183F7C5C8 = 0;
    *(unsigned int *)&g_183F7C5D0 = 0;
    g_183F7C598 = 0;
    g_183F7C5A0 = 0;
    float_word_2 = dword_140404A6C[344 * float_word + 284956408];
    masked_bits = dword_140404A6C[344 * float_word + 284956410];
    masked_bits_2 = dword_140404A6C[344 * float_word + 284956411];
    masked_bits_3 = dword_140404A6C[344 * float_word + 284956412];
    *(unsigned int *)&g_183F7C58C = dword_140404A6C[344 * float_word + 284956407];
    *(unsigned int *)&g_183F7C594 = dword_140404A6C[344 * float_word + 284956409];
    masked_bits_4 = *(_OWORD *)&dword_140404A6C[344 * float_word + 284956413];
    *(unsigned int *)&g_183F7C590 = float_word_2;
    scaled_index_2 = dword_140404A6C[344 * float_word + 284956417];
    *(_OWORD *)&g_183F7C5B0 = masked_bits_4;
    g_183F7C5C4 = dword_140404A6C[344 * float_word + 284956418];
    *(unsigned int *)&g_183F7C5A4 = masked_bits;
    *(unsigned int *)&g_183F7C5A8 = masked_bits_2;
    *(unsigned int *)&g_183F7C5AC = masked_bits_3;
    *(unsigned int *)&g_183F7C5C0 = scaled_index_2;
  }
  float_word_3 = *(float *)&dword_140404A6C[scaled_index + 71856301];
  scaled_index_3 = 344 * float_word;
  weighted_sum = *(float *)&dword_140404A6C[344 * float_word + 284956339];
  if ( (float)(float_word_3 - weighted_sum) >= 3.14159265359 )
    weighted_sum = weighted_sum + 6.28318530718;
  if ( (float)(weighted_sum - float_word_3) >= 3.14159265359 )
    float_word_3 = float_word_3 + 6.28318530718;
  *(_QWORD *)&angle = dword_140404A6C[scaled_index + 71856297];
  HIDWORD(float_word_4) = HIDWORD(angle);
  *(float *)&float_word_4 = *(float *)&angle - (float)(weighted_sum - float_word_3);
  scaled_value = *(float *)&float_word_4;
  if ( *(float *)&float_word_4 < -3.14159265359 )
  {
    component_delta = scaled_value + 6.28318530718;
LABEL_14:
    float_word_4 = component_delta;
    goto LABEL_15;
  }
  if ( scaled_value > 3.14159265359 )
  {
    component_delta = scaled_value - 6.28318530718;
    goto LABEL_14;
  }
LABEL_15:
  masked_bits_5 = *(_OWORD *)&dword_140404A6C[scaled_index_3 + 284956414];
  axis_3 = *(_OWORD *)&dword_140404A6C[scaled_index_3 + 284956410];
  unused_written_slot_4 = dword_140404A6C[scaled_index_3 + 284956418];
  unused_written_slot_3 = masked_bits_5;
  if ( fsqrt(
         (float)((float)(*(float *)&masked_bits * *(float *)&masked_bits) + (float)(*(float *)&masked_bits_2 * *(float *)&masked_bits_2))
       + (float)(*(float *)&masked_bits_3 * *(float *)&masked_bits_3)) < 0.5 )
  {
    axis_3 = xmmword_140278D30;
    unused_written_slot_4 = 1065353216;
    g_183F7C5C4 = 1065353216;
    unused_written_slot_3 = xmmword_140278D30;
    g_183F7C5A4 = xmmword_140278D30;
    *(_OWORD *)&g_183F7C5B4 = xmmword_140278D30;
  }
  weighted_sum_2 = *(float *)&dword_140404A6C[scaled_index_3 + 284956341];
  axis = (float *)&axis_3 + 3;
  if ( dword_140404A6C[7166 * float_word + 280651313] == -1 )
  {
    HIDWORD(angle_2) = HIDWORD(float_word_4);
    *(float *)&angle_2 = *(float *)&float_word_4 - weighted_sum_2;
  }
  else
  {
    *(float *)&angle = (float)(*(float *)&angle - weighted_sum_2) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle);
    *(_QWORD *)&angle_3 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&angle_3 = (float)(*(float *)&angle_3 - *(float *)&dword_140404A6C[scaled_index_3 + 284956342]) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3, angle_3);
    *(_QWORD *)&angle_4 = dword_140404A6C[3597 * local_player + 71856297];
    *(float *)&angle_4 = (float)(*(float *)&angle_4 - *(float *)&dword_140404A6C[scaled_index_3 + 284956341]) * 0.5;
    sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle_4);
    axis = (float *)&axis_3;
    *(_QWORD *)&angle_2 = dword_140404A6C[3597 * local_player + 71856298];
    *(float *)&angle_2 = (float)(*(float *)&angle_2 - *(float *)&dword_140404A6C[scaled_index_3 + 284956342]) * 0.5;
  }
  sr_math_mat3_rotate_rows((__int64)&axis_3, axis, angle_2);
  weighted_sum_3 = *(float *)&dword_140404A6C[scaled_index_3 + 284956408];
  weighted_sum_4 = *(float *)&dword_140404A6C[scaled_index_3 + 284956409];
  g_183F7C58C = g_183F7C58C
                                        + (float)((float)(*(float *)&dword_140404A6C[scaled_index_3 + 284956407]
                                                        - g_183F7C58C)
                                                * 0.5);
  g_183F7C590 = g_183F7C590
                                        + (float)((float)(weighted_sum_3 - g_183F7C590) * 0.5);
  g_183F7C594 = g_183F7C594
                                        + (float)((float)(weighted_sum_4 - g_183F7C594) * 0.5);
  sr_math_quat_from_mat3(&quaternion, (float *)&axis_3);
  sr_math_quat_from_mat3((float *)&float_word_5[1], (float *)(unsigned int *)&g_183F7C5A4);
  reordered_vector = *((float *)&float_word_5[2] + 1);
  scaled_value_2 = *(float *)&float_word_5[2];
  scaled_value_3 = *(float *)&float_word_5[1];
  weighted_sum_5 = *((float *)&float_word_5[1] + 1);
  if ( (float)((float)((float)(*((float *)float_word_5 + 1) * *((float *)&float_word_5[2] + 1))
                     + (float)(*(float *)float_word_5 * *(float *)&float_word_5[2]))
             + (float)((float)(quaternion * *(float *)&float_word_5[1]) + (float)(saved_combined_products * *((float *)&float_word_5[1] + 1)))) < 0.0 )
  {
    *(__m128_u *)&float_word_5[1] = _mm_xor_ps(*(__m128_u *)&float_word_5[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    scaled_value_2 = *(float *)&float_word_5[2];
    weighted_sum_5 = *((float *)&float_word_5[1] + 1);
    scaled_value_3 = *(float *)&float_word_5[1];
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&float_word_5[1], *(__m128_u *)&float_word_5[1], 255), f32)[0];
  }
  *(float *)&float_word_5[2] = -scaled_value_2;
  *(float *)&float_word_5[1] = -scaled_value_3;
  *((float *)&float_word_5[1] + 1) = -weighted_sum_5;
  combined_products = (float)((float)((float)(*((float *)float_word_5 + 1) * (float)-scaled_value_3) + (float)(reordered_vector * quaternion))
              + (float)(*(float *)float_word_5 * (float)-weighted_sum_5))
      - (float)(saved_combined_products * (float)-scaled_value_2);
  product_difference = (float)-scaled_value_3 * *(float *)float_word_5;
  component_delta_2 = -scaled_value_3;
  product_difference_2 = (float)-scaled_value_3 * quaternion;
  scaled_value_4 = component_delta_2 * saved_combined_products;
  combined_products_2 = (float)((float)(reordered_vector * saved_combined_products) - product_difference) + (float)((float)-weighted_sum_5 * *((float *)float_word_5 + 1));
  product_difference_3 = (float)-weighted_sum_5 * quaternion;
  product_difference_4 = (float)-weighted_sum_5 * saved_combined_products;
  combined_products_3 = combined_products_2 + (float)((float)-scaled_value_2 * quaternion);
  quaternion = combined_products;
  saved_combined_products = combined_products_3;
  component_delta_3 = -scaled_value_2;
  product_difference_5 = (float)-scaled_value_2 * *(float *)float_word_5;
  combined_products_4 = (float)((float)(scaled_value_4 + (float)(reordered_vector * *(float *)float_word_5)) - product_difference_3) + (float)(component_delta_3 * *((float *)float_word_5 + 1));
  *(float *)float_word_5 = combined_products_4;
  combined_products_5 = (float)((float)((float)(*((float *)float_word_5 + 1) * reordered_vector) - product_difference_2) - product_difference_4) - product_difference_5;
  *((float *)float_word_5 + 1) = combined_products_5;
  square_root = fsqrt((float)((float)(combined_products * combined_products) + (float)(combined_products_3 * combined_products_3)) + (float)(combined_products_4 * combined_products_4));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio = combined_products * (float)(1.0 / square_root);
    scaled_ratio_2 = combined_products_3 * (float)(1.0 / square_root);
    scaled_ratio_3 = combined_products_4 * (float)(1.0 / square_root);
  }
  acos_result = acos(fminf(fmaxf(combined_products_5, -1.0), 1.0));
  HIDWORD(square_root_2) = 0;
  component_sum = acos_result + acos_result;
  weighted_sum_6 = (float)((float)(scaled_ratio_2 * component_sum) * 0.125) + g_183F7C5CC;
  weighted_sum_7 = (float)((float)(scaled_ratio * component_sum) * 0.125) + g_183F7C5C8;
  weighted_sum_8 = (float)((float)(scaled_ratio_3 * component_sum) * 0.125) + g_183F7C5D0;
  g_183F7C5C8 = weighted_sum_7 * 0.5;
  g_183F7C5CC = weighted_sum_6 * 0.5;
  g_183F7C5D0 = weighted_sum_8 * 0.5;
  *(float *)&square_root_2 = fsqrt((float)((float)((float)(weighted_sum_6 * weighted_sum_6) + (float)(weighted_sum_7 * weighted_sum_7)) + (float)(weighted_sum_8 * weighted_sum_8)) * 0.25);
  if ( *(float *)&square_root_2 > 0.000015258789 )
  {
    axis_2 = (float)(weighted_sum_7 * 0.5) * (float)(1.0 / *(float *)&square_root_2);
    unused_written_slot = (float)(weighted_sum_6 * 0.5) * (float)(1.0 / *(float *)&square_root_2);
    unused_written_slot_2 = (float)(weighted_sum_8 * 0.5) * (float)(1.0 / *(float *)&square_root_2);
    sr_math_mat3_rotate_rows((__int64)(unsigned int *)&g_183F7C5A4, &axis_2, square_root_2);
  }
  if ( dword_140404A6C[7166 * float_word + 280651313] == -1 )
  {
    weighted_sum_9 = *(float *)&dword_140404A6C[scaled_index_3 + 284956343];
    if ( weighted_sum_9 > 0.0 )
    {
      if ( g_183F7C5B4 <= 0.0 )
        absolute_value = 0.0;
      else
        absolute_value = fabs(
                (float)(g_183F7C5B4 * g_183F7C5B4)
              * g_183F7C5B4);
      weighted_sum_10 = *(float *)&float_word_4 + *(float *)&dword_140404A6C[scaled_index_3 + 284956337];
      scaled_value_5 = absolute_value * weighted_sum_9;
      axis_3 = xmmword_140278D30;
      unused_written_slot_3 = xmmword_140278D30;
      unused_written_slot_4 = 1065353216;
      *(_QWORD *)&angle_5 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&angle_5 = (float)(*(float *)&angle_5 * 0.5) + weighted_sum_10;
      sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle_5);
      scaled_index_4 = 3597LL * (int)local_player;
      *(_QWORD *)&angle_6 = dword_140404A6C[scaled_index_4 + 71856300];
      *(float *)&angle_6 = (float)(*(float *)&angle_6 * 0.75) + (float)(*(float *)&dword_140404A6C[scaled_index_4 + 71856298] * 0.5);
      sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3, angle_6);
      *(_QWORD *)&angle_7 = dword_140404A6C[3597 * local_player + 71856299];
      *(float *)&angle_7 = *(float *)&angle_7 * 0.5;
      sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3 + 3, angle_7);
      scaled_index_5 = 3597LL * (int)local_player;
      *(_QWORD *)&angle_8 = dword_140404A6C[scaled_index_5 + 71856300];
      *(float *)&angle_8 = (float)(*(float *)&angle_8 * 0.25) + (float)(*(float *)&dword_140404A6C[scaled_index_5 + 71856298] * 0.5);
      sr_math_mat3_rotate_rows((__int64)&axis_3, (float *)&axis_3, angle_8);
      sr_math_quat_from_mat3(&quaternion, (float *)&axis_3);
      sr_math_quat_from_mat3((float *)&float_word_5[1], (float *)(unsigned int *)&g_183F7C5A4);
      reordered_vector_2 = *((float *)&float_word_5[2] + 1);
      scaled_value_6 = *(float *)&float_word_5[2];
      scaled_value_7 = *(float *)&float_word_5[1];
      weighted_sum_11 = *((float *)&float_word_5[1] + 1);
      if ( (float)((float)((float)(*((float *)float_word_5 + 1) * *((float *)&float_word_5[2] + 1))
                         + (float)(*(float *)float_word_5 * *(float *)&float_word_5[2]))
                 + (float)((float)(quaternion * *(float *)&float_word_5[1]) + (float)(saved_combined_products * *((float *)&float_word_5[1] + 1)))) < 0.0 )
      {
        *(__m128_u *)&float_word_5[1] = _mm_xor_ps(*(__m128_u *)&float_word_5[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        scaled_value_6 = *(float *)&float_word_5[2];
        weighted_sum_11 = *((float *)&float_word_5[1] + 1);
        scaled_value_7 = *(float *)&float_word_5[1];
        reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128_u *)&float_word_5[1], *(__m128_u *)&float_word_5[1], 255), f32)[0];
      }
      component_delta_4 = -scaled_value_6;
      component_delta_5 = -weighted_sum_11;
      component_delta_6 = -scaled_value_7;
      combined_products_6 = (float)((float)((float)(*((float *)float_word_5 + 1) * component_delta_6) + (float)(reordered_vector_2 * quaternion)) + (float)(*(float *)float_word_5 * component_delta_5))
          - (float)(saved_combined_products * component_delta_4);
      combined_products_7 = (float)((float)((float)(reordered_vector_2 * saved_combined_products) - (float)(*(float *)float_word_5 * component_delta_6)) + (float)(*((float *)float_word_5 + 1) * component_delta_5))
          + (float)(quaternion * component_delta_4);
      combined_products_8 = (float)((float)((float)(saved_combined_products * component_delta_6) + (float)(reordered_vector_2 * *(float *)float_word_5)) - (float)(quaternion * component_delta_5))
          + (float)(*((float *)float_word_5 + 1) * component_delta_4);
      combined_products_9 = (float)((float)((float)(*((float *)float_word_5 + 1) * reordered_vector_2) - (float)(quaternion * component_delta_6)) - (float)(saved_combined_products * component_delta_5))
          - (float)(*(float *)float_word_5 * component_delta_4);
      square_root_3 = fsqrt((float)((float)(combined_products_7 * combined_products_7) + (float)(combined_products_6 * combined_products_6)) + (float)(combined_products_8 * combined_products_8));
      if ( square_root_3 == 0.0 )
      {
        scaled_ratio_4 = 0.0;
        scaled_ratio_5 = 0.0;
        scaled_ratio_6 = 0.0;
      }
      else
      {
        scaled_ratio_4 = combined_products_6 * (float)(1.0 / square_root_3);
        scaled_ratio_5 = combined_products_7 * (float)(1.0 / square_root_3);
        scaled_ratio_6 = combined_products_8 * (float)(1.0 / square_root_3);
      }
      acos_result_2 = acos(fminf(fmaxf(combined_products_9, -1.0), 1.0));
      component_sum_2 = acos_result_2 + acos_result_2;
      scaled_value_8 = (float)(scaled_ratio_4 * component_sum_2) * (float)(scaled_value_5 * 0.5);
      scaled_value_9 = (float)(scaled_ratio_5 * component_sum_2) * (float)(scaled_value_5 * 0.5);
      scaled_value_10 = (float)(scaled_ratio_6 * component_sum_2) * (float)(scaled_value_5 * 0.5);
      square_root_4 = fsqrt((float)((float)(scaled_value_9 * scaled_value_9) + (float)(scaled_value_8 * scaled_value_8)) + (float)(scaled_value_10 * scaled_value_10));
      if ( square_root_4 > 0.000015258789 )
      {
        unused_written_slot = (float)(1.0 / square_root_4) * scaled_value_9;
        axis_2 = scaled_value_8 * (float)(1.0 / square_root_4);
        unused_written_slot_2 = scaled_value_10 * (float)(1.0 / square_root_4);
        sr_math_mat3_rotate_rows(
          (__int64)(unsigned int *)&g_183F7C5A4,
          &axis_2, sr_export_float_lane_container(sr_text_float_bits((float)(fmin(fmax(scaled_value_5 * -0.39269908169875, square_root_4), scaled_value_5 * 0.39269908169875)))) /* the original converts to float (cvtsd2ss) before this call */);
      }
    }
  }
  g_183F7C588 = float_word;
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_8
#undef quaternion
#undef saved_combined_products
#undef float_word_5
#undef axis_2
#undef unused_written_slot
#undef unused_written_slot_2
#undef axis_3
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_frame_slot_136

//----- (000000014003A0F0) ----------------------------------------------------
void sub_14003A0F0()
{
  unsigned int *record_byte_offset;
  __int64 remaining_count;
  __int64 remaining_count_2;
  unsigned int *record_byte_offset_2;
  __int128 loaded_word;
  __int128 loaded_word_2;
  __int128 loaded_word_3;
  __int128 loaded_word_4;
  __int128 loaded_word_5;
  __int128 loaded_word_6;
  __int128 loaded_word_7;
  __int128 loaded_word_8;
  __int64 remaining_count_3;
  __int128 loaded_word_9;
  __int128 loaded_word_10;
  __int128 loaded_word_11;
  __int128 loaded_word_12;
  __int128 loaded_word_13;
  __int128 loaded_word_14;
  unsigned int *record_byte_offset_3;
  unsigned int *record_byte_offset_4;
  __int128 loaded_word_15;
  __int128 loaded_word_16;
  __int128 loaded_word_17;
  __int128 loaded_word_18;
  __int128 loaded_word_19;
  __int128 loaded_word_20;
  __int128 loaded_word_21;
  __int128 loaded_word_22;
  __int64 remaining_count_4;
  __int128 loaded_word_23;
  __int128 loaded_word_24;
  __int128 loaded_word_25;
  __int128 loaded_word_26;
  __int128 loaded_word_27;
  __int128 loaded_word_28;
  unsigned int *record_byte_offset_5;
  unsigned int *record_byte_offset_6;
  __int128 loaded_word_29;
  __int128 loaded_word_30;
  __int128 loaded_word_31;
  __int128 loaded_word_32;
  __int128 loaded_word_33;
  __int128 loaded_word_34;
  __int128 loaded_word_35;
  __int128 loaded_word_36;
  __int64 remaining_count_5;
  __int128 loaded_word_37;
  __int128 loaded_word_38;
  __int128 loaded_word_39;
  __int128 loaded_word_40;
  __int128 loaded_word_41;
  __int128 loaded_word_42;
  unsigned int *record_byte_offset_7;
  unsigned int *record_byte_offset_8;
  __int128 loaded_word_43;
  __int128 loaded_word_44;
  __int128 loaded_word_45;
  __int128 loaded_word_46;
  __int128 loaded_word_47;
  __int128 loaded_word_48;
  __int128 loaded_word_49;
  __int128 loaded_word_50;
  __int64 remaining_count_6;
  __int128 loaded_word_51;
  __int128 loaded_word_52;
  __int128 loaded_word_53;
  __int128 loaded_word_54;
  __int128 loaded_word_55;
  __int128 loaded_word_56;
  unsigned int *record_byte_offset_9;
  unsigned int *record_byte_offset_10;
  __int128 loaded_word_57;
  __int128 loaded_word_58;
  __int128 loaded_word_59;
  __int128 loaded_word_60;
  __int128 loaded_word_61;
  __int128 loaded_word_62;
  __int128 loaded_word_63;
  __int128 loaded_word_64;
  __int64 remaining_count_7;
  __int128 loaded_word_65;
  __int128 loaded_word_66;
  __int128 loaded_word_67;
  __int128 loaded_word_68;
  __int128 loaded_word_69;
  __int128 loaded_word_70;
  unsigned int *record_byte_offset_11;
  unsigned int *record_byte_offset_12;
  __int128 loaded_word_71;
  __int128 loaded_word_72;
  __int128 loaded_word_73;
  __int128 loaded_word_74;
  __int128 loaded_word_75;
  __int128 loaded_word_76;
  __int128 loaded_word_77;
  __int128 loaded_word_78;
  __int64 remaining_count_8;
  __int128 loaded_word_79;
  __int128 loaded_word_80;
  __int128 loaded_word_81;
  __int128 loaded_word_82;
  __int128 loaded_word_83;
  __int128 loaded_word_84;
  unsigned int *record_byte_offset_13;
  unsigned int *record_byte_offset_14;
  __int128 loaded_word_85;
  __int128 loaded_word_86;
  __int128 loaded_word_87;
  __int128 loaded_word_88;
  __int128 loaded_word_89;
  __int128 loaded_word_90;
  __int128 loaded_word_91;
  __int128 loaded_word_92;
  __int64 remaining_count_9;
  __int128 loaded_word_93;
  __int128 loaded_word_94;
  __int128 loaded_word_95;
  __int128 loaded_word_96;
  __int128 loaded_word_97;
  __int128 loaded_word_98;
  unsigned int *record_byte_offset_15;
  unsigned int *record_byte_offset_16;
  __int128 loaded_word_99;
  __int128 loaded_word_100;
  __int128 loaded_word_101;
  __int128 loaded_word_102;
  __int128 loaded_word_103;
  __int128 loaded_word_104;
  __int128 loaded_word_105;
  __int128 loaded_word_106;
  __int64 remaining_count_10;
  __int128 loaded_word_107;
  __int128 loaded_word_108;
  __int128 loaded_word_109;
  __int128 loaded_word_110;
  __int128 loaded_word_111;
  __int128 loaded_word_112;
  unsigned int *record_byte_offset_17;
  unsigned int *record_byte_offset_18;
  __int128 loaded_word_113;
  __int128 loaded_word_114;
  __int128 loaded_word_115;
  __int128 loaded_word_116;
  __int128 loaded_word_117;
  __int128 loaded_word_118;
  __int128 loaded_word_119;
  __int128 loaded_word_120;
  __int64 remaining_count_11;
  __int128 loaded_word_121;
  __int128 loaded_word_122;
  __int128 loaded_word_123;
  __int128 loaded_word_124;
  __int128 loaded_word_125;
  __int128 loaded_word_126;
  unsigned int *record_byte_offset_19;
  unsigned int *record_byte_offset_20;
  __int128 loaded_word_127;
  __int128 loaded_word_128;
  __int128 loaded_word_129;
  __int128 loaded_word_130;
  __int128 loaded_word_131;
  __int128 loaded_word_132;
  __int128 loaded_word_133;
  __int128 loaded_word_134;
  __int64 remaining_count_12;
  __int128 loaded_word_135;
  __int128 loaded_word_136;
  __int128 loaded_word_137;
  __int128 loaded_word_138;
  __int128 loaded_word_139;
  __int128 loaded_word_140;
  unsigned int *record_byte_offset_21;
  unsigned int *record_byte_offset_22;
  __int128 loaded_word_141;
  __int128 loaded_word_142;
  __int128 loaded_word_143;
  __int128 loaded_word_144;
  __int128 loaded_word_145;
  __int128 loaded_word_146;
  __int128 loaded_word_147;
  __int128 loaded_word_148;
  __int64 remaining_count_13;
  __int128 loaded_word_149;
  __int128 loaded_word_150;
  __int128 loaded_word_151;
  __int128 loaded_word_152;
  __int128 loaded_word_153;
  __int128 loaded_word_154;
  unsigned int *record_byte_offset_23;
  unsigned int *record_byte_offset_24;
  __int128 loaded_word_155;
  __int128 loaded_word_156;
  __int128 loaded_word_157;
  __int128 loaded_word_158;
  __int128 loaded_word_159;
  __int128 loaded_word_160;
  __int128 loaded_word_161;
  __int128 loaded_word_162;
  __int64 remaining_count_14;
  __int128 loaded_word_163;
  __int128 loaded_word_164;
  __int128 loaded_word_165;
  __int128 loaded_word_166;
  __int128 loaded_word_167;
  __int128 loaded_word_168;
  unsigned int *record_byte_offset_25;
  unsigned int *record_byte_offset_26;
  __int128 loaded_word_169;
  __int128 loaded_word_170;
  __int128 loaded_word_171;
  __int128 loaded_word_172;
  __int128 loaded_word_173;
  __int128 loaded_word_174;
  __int128 loaded_word_175;
  __int128 loaded_word_176;
  __int64 remaining_count_15;
  __int128 loaded_word_177;
  __int128 loaded_word_178;
  __int128 loaded_word_179;
  __int128 loaded_word_180;
  __int128 loaded_word_181;
  __int128 loaded_word_182;
  unsigned int *record_byte_offset_27;
  unsigned int *record_byte_offset_28;
  __int128 loaded_word_183;
  __int128 loaded_word_184;
  __int128 loaded_word_185;
  __int128 loaded_word_186;
  __int128 loaded_word_187;
  __int128 loaded_word_188;
  __int128 loaded_word_189;
  __int128 loaded_word_190;
  __int64 remaining_count_16;
  __int128 loaded_word_191;
  __int128 loaded_word_192;
  __int128 loaded_word_193;
  __int128 loaded_word_194;
  __int128 loaded_word_195;
  __int128 loaded_word_196;
  unsigned int *record_byte_offset_29;
  unsigned int *record_byte_offset_30;
  __int128 loaded_word_197;
  __int128 loaded_word_198;
  __int128 loaded_word_199;
  __int128 loaded_word_200;
  __int128 loaded_word_201;
  __int128 loaded_word_202;
  __int128 loaded_word_203;
  __int128 loaded_word_204;
  __int64 remaining_count_17;
  __int128 loaded_word_205;
  __int128 loaded_word_206;
  __int128 loaded_word_207;
  __int128 loaded_word_208;
  __int128 loaded_word_209;
  __int128 loaded_word_210;
  unsigned int *record_byte_offset_31;
  unsigned int *record_byte_offset_32;
  __int128 loaded_word_211;
  __int128 loaded_word_212;
  __int128 loaded_word_213;
  __int128 loaded_word_214;
  __int128 loaded_word_215;
  __int128 loaded_word_216;
  __int128 loaded_word_217;
  __int128 loaded_word_218;
  __int64 remaining_count_18;
  __int128 loaded_word_219;
  __int128 loaded_word_220;
  __int128 loaded_word_221;
  __int128 loaded_word_222;
  __int128 loaded_word_223;
  __int128 loaded_word_224;
  unsigned int *record_byte_offset_33;
  unsigned int *record_byte_offset_34;
  __int128 loaded_word_225;
  __int128 loaded_word_226;
  __int128 loaded_word_227;
  __int128 loaded_word_228;
  __int128 loaded_word_229;
  __int128 loaded_word_230;
  __int128 loaded_word_231;
  __int128 loaded_word_232;
  __int64 remaining_count_19;
  __int128 loaded_word_233;
  __int128 loaded_word_234;
  __int128 loaded_word_235;
  __int128 loaded_word_236;
  __int128 loaded_word_237;
  __int128 loaded_word_238;
  unsigned int *record_byte_offset_35;
  unsigned int *record_byte_offset_36;
  __int128 loaded_word_239;
  __int128 loaded_word_240;
  __int128 loaded_word_241;
  __int128 loaded_word_242;
  __int128 loaded_word_243;
  __int128 loaded_word_244;
  __int128 loaded_word_245;
  __int128 loaded_word_246;
  __int64 remaining_count_20;
  __int128 loaded_word_247;
  __int128 loaded_word_248;
  __int128 loaded_word_249;
  __int128 loaded_word_250;
  __int128 loaded_word_251;
  __int128 loaded_word_252;
  unsigned int *record_byte_offset_37;
  unsigned int *record_byte_offset_38;
  __int128 loaded_word_253;
  __int128 loaded_word_254;
  __int128 loaded_word_255;
  __int128 loaded_word_256;
  __int128 loaded_word_257;
  __int128 loaded_word_258;
  __int128 loaded_word_259;
  __int128 loaded_word_260;
  __int64 remaining_count_21;
  __int128 loaded_word_261;
  __int128 loaded_word_262;
  __int128 loaded_word_263;
  __int128 loaded_word_264;
  __int128 loaded_word_265;
  __int128 loaded_word_266;
  unsigned int *record_byte_offset_39;
  unsigned int *record_byte_offset_40;
  __int128 loaded_word_267;
  __int128 loaded_word_268;
  __int128 loaded_word_269;
  __int128 loaded_word_270;
  __int128 loaded_word_271;
  __int128 loaded_word_272;
  __int128 loaded_word_273;
  __int128 loaded_word_274;
  __int64 remaining_count_22;
  __int128 loaded_word_275;
  __int128 loaded_word_276;
  __int128 loaded_word_277;
  __int128 loaded_word_278;
  __int128 loaded_word_279;
  __int128 loaded_word_280;
  unsigned int *record_byte_offset_41;
  unsigned int *record_byte_offset_42;
  __int128 loaded_word_281;
  __int128 loaded_word_282;
  __int128 loaded_word_283;
  __int128 loaded_word_284;
  __int128 loaded_word_285;
  __int128 loaded_word_286;
  __int128 loaded_word_287;
  __int128 loaded_word_288;
  __int64 remaining_count_23;
  __int128 loaded_word_289;
  __int128 loaded_word_290;
  __int128 loaded_word_291;
  __int128 loaded_word_292;
  __int128 loaded_word_293;
  __int128 loaded_word_294;
  unsigned int *record_byte_offset_43;
  unsigned int *record_byte_offset_44;
  __int128 loaded_word_295;
  __int128 loaded_word_296;
  __int128 loaded_word_297;
  __int128 loaded_word_298;
  __int128 loaded_word_299;
  __int128 loaded_word_300;
  __int128 loaded_word_301;
  __int128 loaded_word_302;
  __int64 remaining_count_24;
  __int128 loaded_word_303;
  __int128 loaded_word_304;
  __int128 loaded_word_305;
  __int128 loaded_word_306;
  __int128 loaded_word_307;
  __int128 loaded_word_308;
  unsigned int *record_byte_offset_45;
  unsigned int *record_byte_offset_46;
  __int128 loaded_word_309;
  __int128 loaded_word_310;
  __int128 loaded_word_311;
  __int128 loaded_word_312;
  __int128 loaded_word_313;
  __int128 loaded_word_314;
  __int128 loaded_word_315;
  __int128 loaded_word_316;
  __int64 remaining_count_25;
  __int128 loaded_word_317;
  __int128 loaded_word_318;
  __int128 loaded_word_319;
  __int128 loaded_word_320;
  __int128 loaded_word_321;
  __int128 loaded_word_322;
  unsigned int *record_byte_offset_47;
  unsigned int *record_byte_offset_48;
  __int128 loaded_word_323;
  __int128 loaded_word_324;
  __int128 loaded_word_325;
  __int128 loaded_word_326;
  __int128 loaded_word_327;
  __int128 loaded_word_328;
  __int128 loaded_word_329;
  __int128 loaded_word_330;
  __int64 remaining_count_26;
  __int128 loaded_word_331;
  __int128 loaded_word_332;
  __int128 loaded_word_333;
  __int128 loaded_word_334;
  __int128 loaded_word_335;
  __int128 loaded_word_336;
  unsigned int *record_byte_offset_49;
  unsigned int *record_byte_offset_50;
  __int128 loaded_word_337;
  __int128 loaded_word_338;
  __int128 loaded_word_339;
  __int128 loaded_word_340;
  __int128 loaded_word_341;
  __int128 loaded_word_342;
  __int128 loaded_word_343;
  __int128 loaded_word_344;
  __int64 remaining_count_27;
  __int128 loaded_word_345;
  __int128 loaded_word_346;
  __int128 loaded_word_347;
  __int128 loaded_word_348;
  __int128 loaded_word_349;
  __int128 loaded_word_350;
  unsigned int *record_byte_offset_51;
  unsigned int *record_byte_offset_52;
  __int128 loaded_word_351;
  __int128 loaded_word_352;
  __int128 loaded_word_353;
  __int128 loaded_word_354;
  __int128 loaded_word_355;
  __int128 loaded_word_356;
  __int128 loaded_word_357;
  __int128 loaded_word_358;
  __int64 remaining_count_28;
  __int128 loaded_word_359;
  __int128 loaded_word_360;
  __int128 loaded_word_361;
  __int128 loaded_word_362;
  __int128 loaded_word_363;
  __int128 loaded_word_364;
  unsigned int *record_byte_offset_53;
  unsigned int *record_byte_offset_54;
  __int128 loaded_word_365;
  __int128 loaded_word_366;
  __int128 loaded_word_367;
  __int128 loaded_word_368;
  __int128 loaded_word_369;
  __int128 loaded_word_370;
  __int128 loaded_word_371;
  __int128 loaded_word_372;
  __int64 remaining_count_29;
  __int128 loaded_word_373;
  __int128 loaded_word_374;
  __int128 loaded_word_375;
  __int128 loaded_word_376;
  __int128 loaded_word_377;
  __int128 loaded_word_378;
  unsigned int *record_byte_offset_55;
  unsigned int *record_byte_offset_56;
  __int128 loaded_word_379;
  __int128 loaded_word_380;
  __int128 loaded_word_381;
  __int128 loaded_word_382;
  __int128 loaded_word_383;
  __int128 loaded_word_384;
  __int128 loaded_word_385;
  __int128 loaded_word_386;
  __int64 remaining_count_30;
  __int128 loaded_word_387;
  __int128 loaded_word_388;
  __int128 loaded_word_389;
  __int128 loaded_word_390;
  __int128 loaded_word_391;
  __int128 loaded_word_392;
  unsigned int *record_byte_offset_57;
  unsigned int *record_byte_offset_58;
  __int128 loaded_word_393;
  __int128 loaded_word_394;
  __int128 loaded_word_395;
  __int128 loaded_word_396;
  __int128 loaded_word_397;
  __int128 loaded_word_398;
  __int128 loaded_word_399;
  __int128 loaded_word_400;
  __int64 remaining_count_31;
  __int128 loaded_word_401;
  __int128 loaded_word_402;
  __int128 loaded_word_403;
  __int128 loaded_word_404;
  __int128 loaded_word_405;
  __int128 loaded_word_406;
  unsigned int *record_byte_offset_59;
  unsigned int *record_byte_offset_60;
  __int128 loaded_word_407;
  __int128 loaded_word_408;
  __int128 loaded_word_409;
  __int128 loaded_word_410;
  __int128 loaded_word_411;
  __int128 loaded_word_412;
  __int128 loaded_word_413;
  __int128 loaded_word_414;
  __int64 remaining_count_32;
  __int128 loaded_word_415;
  __int128 loaded_word_416;
  __int128 loaded_word_417;
  __int128 loaded_word_418;
  __int128 loaded_word_419;
  __int128 loaded_word_420;
  unsigned int *record_byte_offset_61;
  unsigned int *record_byte_offset_62;
  __int128 loaded_word_421;
  __int128 loaded_word_422;
  __int128 loaded_word_423;
  __int128 loaded_word_424;
  __int128 loaded_word_425;
  __int128 loaded_word_426;
  __int128 loaded_word_427;
  __int128 loaded_word_428;
  __int128 loaded_word_429;
  __int128 loaded_word_430;
  __int128 loaded_word_431;
  __int128 loaded_word_432;
  __int128 loaded_word_433;
  __int128 loaded_word_434;
  unsigned int *record_byte_offset_63;
  unsigned int *record_byte_offset_64;
  __int128 loaded_word_435;
  __int128 loaded_word_436;
  __int128 loaded_word_437;
  __int128 loaded_word_438;
  __int128 loaded_word_439;
  __int128 loaded_word_440;
  __int128 loaded_word_441;
  __int128 loaded_word_442;
  __int128 loaded_word_443;
  __int128 loaded_word_444;
  __int128 loaded_word_445;
  __int128 loaded_word_446;
  __int128 loaded_word_447;
  __int128 loaded_word_448;
  int iteration_count;
  __int64 running_total;
  unsigned int *state_address;
  int pad_instance_result;
  int pad_controller_attached_result;
  signed int iteration_count_2;
  __int64 scaled_index;
  int table_value;
  unsigned int *buffer_cursor;
  signed int iteration_count_3;
  unsigned int *buffer_cursor_2;
  unsigned int *buffer_cursor_3;
  signed int iteration_count_4;
  unsigned int *buffer_cursor_4;
  signed int iteration_count_5;
  _DWORD *record_byte_offset_65;
  _QWORD *running_total_2;
  int pad_hat_result;
  __int64 pad_controller_open_result;
  int pad_instance_result_2;
  char *pad_name_result;
  __int64 scaled_index_2;
  char *state_address_2;
  char input_byte;
  __int64 pad_open_result;
  int pad_instance_result_3;
  char *pad_name_result_2;
  __int64 scaled_index_3;
  char *state_address_3;
  char input_byte_2;

  if ( g_182A7D020 )
  {
    record_byte_offset = &g_184393D40;
    remaining_count = 3;
    remaining_count_2 = 3;
    record_byte_offset_2 = &g_184397B40;
    do
    {
      record_byte_offset += 32;
      loaded_word = *(_OWORD *)record_byte_offset_2;
      loaded_word_2 = *((_OWORD *)record_byte_offset_2 + 1);
      record_byte_offset_2 += 32;
      *((_OWORD *)record_byte_offset - 8) = loaded_word;
      loaded_word_3 = *((_OWORD *)record_byte_offset_2 - 6);
      *((_OWORD *)record_byte_offset - 7) = loaded_word_2;
      loaded_word_4 = *((_OWORD *)record_byte_offset_2 - 5);
      *((_OWORD *)record_byte_offset - 6) = loaded_word_3;
      loaded_word_5 = *((_OWORD *)record_byte_offset_2 - 4);
      *((_OWORD *)record_byte_offset - 5) = loaded_word_4;
      loaded_word_6 = *((_OWORD *)record_byte_offset_2 - 3);
      *((_OWORD *)record_byte_offset - 4) = loaded_word_5;
      loaded_word_7 = *((_OWORD *)record_byte_offset_2 - 2);
      *((_OWORD *)record_byte_offset - 3) = loaded_word_6;
      loaded_word_8 = *((_OWORD *)record_byte_offset_2 - 1);
      *((_OWORD *)record_byte_offset - 2) = loaded_word_7;
      *((_OWORD *)record_byte_offset - 1) = loaded_word_8;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    remaining_count_3 = 3;
    loaded_word_9 = *((_OWORD *)record_byte_offset_2 + 1);
    *(_OWORD *)record_byte_offset = *(_OWORD *)record_byte_offset_2;
    loaded_word_10 = *((_OWORD *)record_byte_offset_2 + 2);
    *((_OWORD *)record_byte_offset + 1) = loaded_word_9;
    loaded_word_11 = *((_OWORD *)record_byte_offset_2 + 3);
    *((_OWORD *)record_byte_offset + 2) = loaded_word_10;
    loaded_word_12 = *((_OWORD *)record_byte_offset_2 + 4);
    *((_OWORD *)record_byte_offset + 3) = loaded_word_11;
    loaded_word_13 = *((_OWORD *)record_byte_offset_2 + 5);
    *((_OWORD *)record_byte_offset + 4) = loaded_word_12;
    loaded_word_14 = *((_OWORD *)record_byte_offset_2 + 6);
    record_byte_offset_3 = &g_184397D30;
    *((_OWORD *)record_byte_offset + 5) = loaded_word_13;
    *((_OWORD *)record_byte_offset + 6) = loaded_word_14;
    record_byte_offset_4 = &g_184393F30;
    do
    {
      record_byte_offset_4 += 32;
      loaded_word_15 = *(_OWORD *)record_byte_offset_3;
      loaded_word_16 = *((_OWORD *)record_byte_offset_3 + 1);
      record_byte_offset_3 += 32;
      *((_OWORD *)record_byte_offset_4 - 8) = loaded_word_15;
      loaded_word_17 = *((_OWORD *)record_byte_offset_3 - 6);
      *((_OWORD *)record_byte_offset_4 - 7) = loaded_word_16;
      loaded_word_18 = *((_OWORD *)record_byte_offset_3 - 5);
      *((_OWORD *)record_byte_offset_4 - 6) = loaded_word_17;
      loaded_word_19 = *((_OWORD *)record_byte_offset_3 - 4);
      *((_OWORD *)record_byte_offset_4 - 5) = loaded_word_18;
      loaded_word_20 = *((_OWORD *)record_byte_offset_3 - 3);
      *((_OWORD *)record_byte_offset_4 - 4) = loaded_word_19;
      loaded_word_21 = *((_OWORD *)record_byte_offset_3 - 2);
      *((_OWORD *)record_byte_offset_4 - 3) = loaded_word_20;
      loaded_word_22 = *((_OWORD *)record_byte_offset_3 - 1);
      *((_OWORD *)record_byte_offset_4 - 2) = loaded_word_21;
      *((_OWORD *)record_byte_offset_4 - 1) = loaded_word_22;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    remaining_count_4 = 3;
    loaded_word_23 = *((_OWORD *)record_byte_offset_3 + 1);
    *(_OWORD *)record_byte_offset_4 = *(_OWORD *)record_byte_offset_3;
    loaded_word_24 = *((_OWORD *)record_byte_offset_3 + 2);
    *((_OWORD *)record_byte_offset_4 + 1) = loaded_word_23;
    loaded_word_25 = *((_OWORD *)record_byte_offset_3 + 3);
    *((_OWORD *)record_byte_offset_4 + 2) = loaded_word_24;
    loaded_word_26 = *((_OWORD *)record_byte_offset_3 + 4);
    *((_OWORD *)record_byte_offset_4 + 3) = loaded_word_25;
    loaded_word_27 = *((_OWORD *)record_byte_offset_3 + 5);
    *((_OWORD *)record_byte_offset_4 + 4) = loaded_word_26;
    loaded_word_28 = *((_OWORD *)record_byte_offset_3 + 6);
    record_byte_offset_5 = &g_184397F20;
    *((_OWORD *)record_byte_offset_4 + 5) = loaded_word_27;
    *((_OWORD *)record_byte_offset_4 + 6) = loaded_word_28;
    record_byte_offset_6 = &g_184394120;
    do
    {
      record_byte_offset_6 += 32;
      loaded_word_29 = *(_OWORD *)record_byte_offset_5;
      loaded_word_30 = *((_OWORD *)record_byte_offset_5 + 1);
      record_byte_offset_5 += 32;
      *((_OWORD *)record_byte_offset_6 - 8) = loaded_word_29;
      loaded_word_31 = *((_OWORD *)record_byte_offset_5 - 6);
      *((_OWORD *)record_byte_offset_6 - 7) = loaded_word_30;
      loaded_word_32 = *((_OWORD *)record_byte_offset_5 - 5);
      *((_OWORD *)record_byte_offset_6 - 6) = loaded_word_31;
      loaded_word_33 = *((_OWORD *)record_byte_offset_5 - 4);
      *((_OWORD *)record_byte_offset_6 - 5) = loaded_word_32;
      loaded_word_34 = *((_OWORD *)record_byte_offset_5 - 3);
      *((_OWORD *)record_byte_offset_6 - 4) = loaded_word_33;
      loaded_word_35 = *((_OWORD *)record_byte_offset_5 - 2);
      *((_OWORD *)record_byte_offset_6 - 3) = loaded_word_34;
      loaded_word_36 = *((_OWORD *)record_byte_offset_5 - 1);
      *((_OWORD *)record_byte_offset_6 - 2) = loaded_word_35;
      *((_OWORD *)record_byte_offset_6 - 1) = loaded_word_36;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    remaining_count_5 = 3;
    loaded_word_37 = *((_OWORD *)record_byte_offset_5 + 1);
    *(_OWORD *)record_byte_offset_6 = *(_OWORD *)record_byte_offset_5;
    loaded_word_38 = *((_OWORD *)record_byte_offset_5 + 2);
    *((_OWORD *)record_byte_offset_6 + 1) = loaded_word_37;
    loaded_word_39 = *((_OWORD *)record_byte_offset_5 + 3);
    *((_OWORD *)record_byte_offset_6 + 2) = loaded_word_38;
    loaded_word_40 = *((_OWORD *)record_byte_offset_5 + 4);
    *((_OWORD *)record_byte_offset_6 + 3) = loaded_word_39;
    loaded_word_41 = *((_OWORD *)record_byte_offset_5 + 5);
    *((_OWORD *)record_byte_offset_6 + 4) = loaded_word_40;
    loaded_word_42 = *((_OWORD *)record_byte_offset_5 + 6);
    record_byte_offset_7 = &g_184398110;
    *((_OWORD *)record_byte_offset_6 + 5) = loaded_word_41;
    *((_OWORD *)record_byte_offset_6 + 6) = loaded_word_42;
    record_byte_offset_8 = &g_184394310;
    do
    {
      record_byte_offset_8 += 32;
      loaded_word_43 = *(_OWORD *)record_byte_offset_7;
      loaded_word_44 = *((_OWORD *)record_byte_offset_7 + 1);
      record_byte_offset_7 += 32;
      *((_OWORD *)record_byte_offset_8 - 8) = loaded_word_43;
      loaded_word_45 = *((_OWORD *)record_byte_offset_7 - 6);
      *((_OWORD *)record_byte_offset_8 - 7) = loaded_word_44;
      loaded_word_46 = *((_OWORD *)record_byte_offset_7 - 5);
      *((_OWORD *)record_byte_offset_8 - 6) = loaded_word_45;
      loaded_word_47 = *((_OWORD *)record_byte_offset_7 - 4);
      *((_OWORD *)record_byte_offset_8 - 5) = loaded_word_46;
      loaded_word_48 = *((_OWORD *)record_byte_offset_7 - 3);
      *((_OWORD *)record_byte_offset_8 - 4) = loaded_word_47;
      loaded_word_49 = *((_OWORD *)record_byte_offset_7 - 2);
      *((_OWORD *)record_byte_offset_8 - 3) = loaded_word_48;
      loaded_word_50 = *((_OWORD *)record_byte_offset_7 - 1);
      *((_OWORD *)record_byte_offset_8 - 2) = loaded_word_49;
      *((_OWORD *)record_byte_offset_8 - 1) = loaded_word_50;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    remaining_count_6 = 3;
    loaded_word_51 = *((_OWORD *)record_byte_offset_7 + 1);
    *(_OWORD *)record_byte_offset_8 = *(_OWORD *)record_byte_offset_7;
    loaded_word_52 = *((_OWORD *)record_byte_offset_7 + 2);
    *((_OWORD *)record_byte_offset_8 + 1) = loaded_word_51;
    loaded_word_53 = *((_OWORD *)record_byte_offset_7 + 3);
    *((_OWORD *)record_byte_offset_8 + 2) = loaded_word_52;
    loaded_word_54 = *((_OWORD *)record_byte_offset_7 + 4);
    *((_OWORD *)record_byte_offset_8 + 3) = loaded_word_53;
    loaded_word_55 = *((_OWORD *)record_byte_offset_7 + 5);
    *((_OWORD *)record_byte_offset_8 + 4) = loaded_word_54;
    loaded_word_56 = *((_OWORD *)record_byte_offset_7 + 6);
    record_byte_offset_9 = &g_184398300;
    *((_OWORD *)record_byte_offset_8 + 5) = loaded_word_55;
    *((_OWORD *)record_byte_offset_8 + 6) = loaded_word_56;
    record_byte_offset_10 = &g_184394500;
    do
    {
      record_byte_offset_10 += 32;
      loaded_word_57 = *(_OWORD *)record_byte_offset_9;
      loaded_word_58 = *((_OWORD *)record_byte_offset_9 + 1);
      record_byte_offset_9 += 32;
      *((_OWORD *)record_byte_offset_10 - 8) = loaded_word_57;
      loaded_word_59 = *((_OWORD *)record_byte_offset_9 - 6);
      *((_OWORD *)record_byte_offset_10 - 7) = loaded_word_58;
      loaded_word_60 = *((_OWORD *)record_byte_offset_9 - 5);
      *((_OWORD *)record_byte_offset_10 - 6) = loaded_word_59;
      loaded_word_61 = *((_OWORD *)record_byte_offset_9 - 4);
      *((_OWORD *)record_byte_offset_10 - 5) = loaded_word_60;
      loaded_word_62 = *((_OWORD *)record_byte_offset_9 - 3);
      *((_OWORD *)record_byte_offset_10 - 4) = loaded_word_61;
      loaded_word_63 = *((_OWORD *)record_byte_offset_9 - 2);
      *((_OWORD *)record_byte_offset_10 - 3) = loaded_word_62;
      loaded_word_64 = *((_OWORD *)record_byte_offset_9 - 1);
      *((_OWORD *)record_byte_offset_10 - 2) = loaded_word_63;
      *((_OWORD *)record_byte_offset_10 - 1) = loaded_word_64;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    remaining_count_7 = 3;
    loaded_word_65 = *((_OWORD *)record_byte_offset_9 + 1);
    *(_OWORD *)record_byte_offset_10 = *(_OWORD *)record_byte_offset_9;
    loaded_word_66 = *((_OWORD *)record_byte_offset_9 + 2);
    *((_OWORD *)record_byte_offset_10 + 1) = loaded_word_65;
    loaded_word_67 = *((_OWORD *)record_byte_offset_9 + 3);
    *((_OWORD *)record_byte_offset_10 + 2) = loaded_word_66;
    loaded_word_68 = *((_OWORD *)record_byte_offset_9 + 4);
    *((_OWORD *)record_byte_offset_10 + 3) = loaded_word_67;
    loaded_word_69 = *((_OWORD *)record_byte_offset_9 + 5);
    *((_OWORD *)record_byte_offset_10 + 4) = loaded_word_68;
    loaded_word_70 = *((_OWORD *)record_byte_offset_9 + 6);
    record_byte_offset_11 = &g_1843984F0;
    *((_OWORD *)record_byte_offset_10 + 5) = loaded_word_69;
    *((_OWORD *)record_byte_offset_10 + 6) = loaded_word_70;
    record_byte_offset_12 = &g_1843946F0;
    do
    {
      record_byte_offset_12 += 32;
      loaded_word_71 = *(_OWORD *)record_byte_offset_11;
      loaded_word_72 = *((_OWORD *)record_byte_offset_11 + 1);
      record_byte_offset_11 += 32;
      *((_OWORD *)record_byte_offset_12 - 8) = loaded_word_71;
      loaded_word_73 = *((_OWORD *)record_byte_offset_11 - 6);
      *((_OWORD *)record_byte_offset_12 - 7) = loaded_word_72;
      loaded_word_74 = *((_OWORD *)record_byte_offset_11 - 5);
      *((_OWORD *)record_byte_offset_12 - 6) = loaded_word_73;
      loaded_word_75 = *((_OWORD *)record_byte_offset_11 - 4);
      *((_OWORD *)record_byte_offset_12 - 5) = loaded_word_74;
      loaded_word_76 = *((_OWORD *)record_byte_offset_11 - 3);
      *((_OWORD *)record_byte_offset_12 - 4) = loaded_word_75;
      loaded_word_77 = *((_OWORD *)record_byte_offset_11 - 2);
      *((_OWORD *)record_byte_offset_12 - 3) = loaded_word_76;
      loaded_word_78 = *((_OWORD *)record_byte_offset_11 - 1);
      *((_OWORD *)record_byte_offset_12 - 2) = loaded_word_77;
      *((_OWORD *)record_byte_offset_12 - 1) = loaded_word_78;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    remaining_count_8 = 3;
    loaded_word_79 = *((_OWORD *)record_byte_offset_11 + 1);
    *(_OWORD *)record_byte_offset_12 = *(_OWORD *)record_byte_offset_11;
    loaded_word_80 = *((_OWORD *)record_byte_offset_11 + 2);
    *((_OWORD *)record_byte_offset_12 + 1) = loaded_word_79;
    loaded_word_81 = *((_OWORD *)record_byte_offset_11 + 3);
    *((_OWORD *)record_byte_offset_12 + 2) = loaded_word_80;
    loaded_word_82 = *((_OWORD *)record_byte_offset_11 + 4);
    *((_OWORD *)record_byte_offset_12 + 3) = loaded_word_81;
    loaded_word_83 = *((_OWORD *)record_byte_offset_11 + 5);
    *((_OWORD *)record_byte_offset_12 + 4) = loaded_word_82;
    loaded_word_84 = *((_OWORD *)record_byte_offset_11 + 6);
    record_byte_offset_13 = &g_1843986E0;
    *((_OWORD *)record_byte_offset_12 + 5) = loaded_word_83;
    *((_OWORD *)record_byte_offset_12 + 6) = loaded_word_84;
    record_byte_offset_14 = &g_1843948E0;
    do
    {
      record_byte_offset_14 += 32;
      loaded_word_85 = *(_OWORD *)record_byte_offset_13;
      loaded_word_86 = *((_OWORD *)record_byte_offset_13 + 1);
      record_byte_offset_13 += 32;
      *((_OWORD *)record_byte_offset_14 - 8) = loaded_word_85;
      loaded_word_87 = *((_OWORD *)record_byte_offset_13 - 6);
      *((_OWORD *)record_byte_offset_14 - 7) = loaded_word_86;
      loaded_word_88 = *((_OWORD *)record_byte_offset_13 - 5);
      *((_OWORD *)record_byte_offset_14 - 6) = loaded_word_87;
      loaded_word_89 = *((_OWORD *)record_byte_offset_13 - 4);
      *((_OWORD *)record_byte_offset_14 - 5) = loaded_word_88;
      loaded_word_90 = *((_OWORD *)record_byte_offset_13 - 3);
      *((_OWORD *)record_byte_offset_14 - 4) = loaded_word_89;
      loaded_word_91 = *((_OWORD *)record_byte_offset_13 - 2);
      *((_OWORD *)record_byte_offset_14 - 3) = loaded_word_90;
      loaded_word_92 = *((_OWORD *)record_byte_offset_13 - 1);
      *((_OWORD *)record_byte_offset_14 - 2) = loaded_word_91;
      *((_OWORD *)record_byte_offset_14 - 1) = loaded_word_92;
      --remaining_count_8;
    }
    while ( remaining_count_8 );
    remaining_count_9 = 3;
    loaded_word_93 = *((_OWORD *)record_byte_offset_13 + 1);
    *(_OWORD *)record_byte_offset_14 = *(_OWORD *)record_byte_offset_13;
    loaded_word_94 = *((_OWORD *)record_byte_offset_13 + 2);
    *((_OWORD *)record_byte_offset_14 + 1) = loaded_word_93;
    loaded_word_95 = *((_OWORD *)record_byte_offset_13 + 3);
    *((_OWORD *)record_byte_offset_14 + 2) = loaded_word_94;
    loaded_word_96 = *((_OWORD *)record_byte_offset_13 + 4);
    *((_OWORD *)record_byte_offset_14 + 3) = loaded_word_95;
    loaded_word_97 = *((_OWORD *)record_byte_offset_13 + 5);
    *((_OWORD *)record_byte_offset_14 + 4) = loaded_word_96;
    loaded_word_98 = *((_OWORD *)record_byte_offset_13 + 6);
    record_byte_offset_15 = &g_1843988D0;
    *((_OWORD *)record_byte_offset_14 + 5) = loaded_word_97;
    *((_OWORD *)record_byte_offset_14 + 6) = loaded_word_98;
    record_byte_offset_16 = &g_184394AD0;
    do
    {
      record_byte_offset_16 += 32;
      loaded_word_99 = *(_OWORD *)record_byte_offset_15;
      loaded_word_100 = *((_OWORD *)record_byte_offset_15 + 1);
      record_byte_offset_15 += 32;
      *((_OWORD *)record_byte_offset_16 - 8) = loaded_word_99;
      loaded_word_101 = *((_OWORD *)record_byte_offset_15 - 6);
      *((_OWORD *)record_byte_offset_16 - 7) = loaded_word_100;
      loaded_word_102 = *((_OWORD *)record_byte_offset_15 - 5);
      *((_OWORD *)record_byte_offset_16 - 6) = loaded_word_101;
      loaded_word_103 = *((_OWORD *)record_byte_offset_15 - 4);
      *((_OWORD *)record_byte_offset_16 - 5) = loaded_word_102;
      loaded_word_104 = *((_OWORD *)record_byte_offset_15 - 3);
      *((_OWORD *)record_byte_offset_16 - 4) = loaded_word_103;
      loaded_word_105 = *((_OWORD *)record_byte_offset_15 - 2);
      *((_OWORD *)record_byte_offset_16 - 3) = loaded_word_104;
      loaded_word_106 = *((_OWORD *)record_byte_offset_15 - 1);
      *((_OWORD *)record_byte_offset_16 - 2) = loaded_word_105;
      *((_OWORD *)record_byte_offset_16 - 1) = loaded_word_106;
      --remaining_count_9;
    }
    while ( remaining_count_9 );
    remaining_count_10 = 3;
    loaded_word_107 = *((_OWORD *)record_byte_offset_15 + 1);
    *(_OWORD *)record_byte_offset_16 = *(_OWORD *)record_byte_offset_15;
    loaded_word_108 = *((_OWORD *)record_byte_offset_15 + 2);
    *((_OWORD *)record_byte_offset_16 + 1) = loaded_word_107;
    loaded_word_109 = *((_OWORD *)record_byte_offset_15 + 3);
    *((_OWORD *)record_byte_offset_16 + 2) = loaded_word_108;
    loaded_word_110 = *((_OWORD *)record_byte_offset_15 + 4);
    *((_OWORD *)record_byte_offset_16 + 3) = loaded_word_109;
    loaded_word_111 = *((_OWORD *)record_byte_offset_15 + 5);
    *((_OWORD *)record_byte_offset_16 + 4) = loaded_word_110;
    loaded_word_112 = *((_OWORD *)record_byte_offset_15 + 6);
    record_byte_offset_17 = &g_184398AC0;
    *((_OWORD *)record_byte_offset_16 + 5) = loaded_word_111;
    *((_OWORD *)record_byte_offset_16 + 6) = loaded_word_112;
    record_byte_offset_18 = &g_184394CC0;
    do
    {
      record_byte_offset_18 += 32;
      loaded_word_113 = *(_OWORD *)record_byte_offset_17;
      loaded_word_114 = *((_OWORD *)record_byte_offset_17 + 1);
      record_byte_offset_17 += 32;
      *((_OWORD *)record_byte_offset_18 - 8) = loaded_word_113;
      loaded_word_115 = *((_OWORD *)record_byte_offset_17 - 6);
      *((_OWORD *)record_byte_offset_18 - 7) = loaded_word_114;
      loaded_word_116 = *((_OWORD *)record_byte_offset_17 - 5);
      *((_OWORD *)record_byte_offset_18 - 6) = loaded_word_115;
      loaded_word_117 = *((_OWORD *)record_byte_offset_17 - 4);
      *((_OWORD *)record_byte_offset_18 - 5) = loaded_word_116;
      loaded_word_118 = *((_OWORD *)record_byte_offset_17 - 3);
      *((_OWORD *)record_byte_offset_18 - 4) = loaded_word_117;
      loaded_word_119 = *((_OWORD *)record_byte_offset_17 - 2);
      *((_OWORD *)record_byte_offset_18 - 3) = loaded_word_118;
      loaded_word_120 = *((_OWORD *)record_byte_offset_17 - 1);
      *((_OWORD *)record_byte_offset_18 - 2) = loaded_word_119;
      *((_OWORD *)record_byte_offset_18 - 1) = loaded_word_120;
      --remaining_count_10;
    }
    while ( remaining_count_10 );
    remaining_count_11 = 3;
    loaded_word_121 = *((_OWORD *)record_byte_offset_17 + 1);
    *(_OWORD *)record_byte_offset_18 = *(_OWORD *)record_byte_offset_17;
    loaded_word_122 = *((_OWORD *)record_byte_offset_17 + 2);
    *((_OWORD *)record_byte_offset_18 + 1) = loaded_word_121;
    loaded_word_123 = *((_OWORD *)record_byte_offset_17 + 3);
    *((_OWORD *)record_byte_offset_18 + 2) = loaded_word_122;
    loaded_word_124 = *((_OWORD *)record_byte_offset_17 + 4);
    *((_OWORD *)record_byte_offset_18 + 3) = loaded_word_123;
    loaded_word_125 = *((_OWORD *)record_byte_offset_17 + 5);
    *((_OWORD *)record_byte_offset_18 + 4) = loaded_word_124;
    loaded_word_126 = *((_OWORD *)record_byte_offset_17 + 6);
    record_byte_offset_19 = &g_184398CB0;
    *((_OWORD *)record_byte_offset_18 + 5) = loaded_word_125;
    *((_OWORD *)record_byte_offset_18 + 6) = loaded_word_126;
    record_byte_offset_20 = &g_184394EB0;
    do
    {
      record_byte_offset_20 += 32;
      loaded_word_127 = *(_OWORD *)record_byte_offset_19;
      loaded_word_128 = *((_OWORD *)record_byte_offset_19 + 1);
      record_byte_offset_19 += 32;
      *((_OWORD *)record_byte_offset_20 - 8) = loaded_word_127;
      loaded_word_129 = *((_OWORD *)record_byte_offset_19 - 6);
      *((_OWORD *)record_byte_offset_20 - 7) = loaded_word_128;
      loaded_word_130 = *((_OWORD *)record_byte_offset_19 - 5);
      *((_OWORD *)record_byte_offset_20 - 6) = loaded_word_129;
      loaded_word_131 = *((_OWORD *)record_byte_offset_19 - 4);
      *((_OWORD *)record_byte_offset_20 - 5) = loaded_word_130;
      loaded_word_132 = *((_OWORD *)record_byte_offset_19 - 3);
      *((_OWORD *)record_byte_offset_20 - 4) = loaded_word_131;
      loaded_word_133 = *((_OWORD *)record_byte_offset_19 - 2);
      *((_OWORD *)record_byte_offset_20 - 3) = loaded_word_132;
      loaded_word_134 = *((_OWORD *)record_byte_offset_19 - 1);
      *((_OWORD *)record_byte_offset_20 - 2) = loaded_word_133;
      *((_OWORD *)record_byte_offset_20 - 1) = loaded_word_134;
      --remaining_count_11;
    }
    while ( remaining_count_11 );
    remaining_count_12 = 3;
    loaded_word_135 = *((_OWORD *)record_byte_offset_19 + 1);
    *(_OWORD *)record_byte_offset_20 = *(_OWORD *)record_byte_offset_19;
    loaded_word_136 = *((_OWORD *)record_byte_offset_19 + 2);
    *((_OWORD *)record_byte_offset_20 + 1) = loaded_word_135;
    loaded_word_137 = *((_OWORD *)record_byte_offset_19 + 3);
    *((_OWORD *)record_byte_offset_20 + 2) = loaded_word_136;
    loaded_word_138 = *((_OWORD *)record_byte_offset_19 + 4);
    *((_OWORD *)record_byte_offset_20 + 3) = loaded_word_137;
    loaded_word_139 = *((_OWORD *)record_byte_offset_19 + 5);
    *((_OWORD *)record_byte_offset_20 + 4) = loaded_word_138;
    loaded_word_140 = *((_OWORD *)record_byte_offset_19 + 6);
    record_byte_offset_21 = &g_184398EA0;
    *((_OWORD *)record_byte_offset_20 + 5) = loaded_word_139;
    *((_OWORD *)record_byte_offset_20 + 6) = loaded_word_140;
    record_byte_offset_22 = &g_1843950A0;
    do
    {
      record_byte_offset_22 += 32;
      loaded_word_141 = *(_OWORD *)record_byte_offset_21;
      loaded_word_142 = *((_OWORD *)record_byte_offset_21 + 1);
      record_byte_offset_21 += 32;
      *((_OWORD *)record_byte_offset_22 - 8) = loaded_word_141;
      loaded_word_143 = *((_OWORD *)record_byte_offset_21 - 6);
      *((_OWORD *)record_byte_offset_22 - 7) = loaded_word_142;
      loaded_word_144 = *((_OWORD *)record_byte_offset_21 - 5);
      *((_OWORD *)record_byte_offset_22 - 6) = loaded_word_143;
      loaded_word_145 = *((_OWORD *)record_byte_offset_21 - 4);
      *((_OWORD *)record_byte_offset_22 - 5) = loaded_word_144;
      loaded_word_146 = *((_OWORD *)record_byte_offset_21 - 3);
      *((_OWORD *)record_byte_offset_22 - 4) = loaded_word_145;
      loaded_word_147 = *((_OWORD *)record_byte_offset_21 - 2);
      *((_OWORD *)record_byte_offset_22 - 3) = loaded_word_146;
      loaded_word_148 = *((_OWORD *)record_byte_offset_21 - 1);
      *((_OWORD *)record_byte_offset_22 - 2) = loaded_word_147;
      *((_OWORD *)record_byte_offset_22 - 1) = loaded_word_148;
      --remaining_count_12;
    }
    while ( remaining_count_12 );
    remaining_count_13 = 3;
    loaded_word_149 = *((_OWORD *)record_byte_offset_21 + 1);
    *(_OWORD *)record_byte_offset_22 = *(_OWORD *)record_byte_offset_21;
    loaded_word_150 = *((_OWORD *)record_byte_offset_21 + 2);
    *((_OWORD *)record_byte_offset_22 + 1) = loaded_word_149;
    loaded_word_151 = *((_OWORD *)record_byte_offset_21 + 3);
    *((_OWORD *)record_byte_offset_22 + 2) = loaded_word_150;
    loaded_word_152 = *((_OWORD *)record_byte_offset_21 + 4);
    *((_OWORD *)record_byte_offset_22 + 3) = loaded_word_151;
    loaded_word_153 = *((_OWORD *)record_byte_offset_21 + 5);
    *((_OWORD *)record_byte_offset_22 + 4) = loaded_word_152;
    loaded_word_154 = *((_OWORD *)record_byte_offset_21 + 6);
    record_byte_offset_23 = &g_184399090;
    *((_OWORD *)record_byte_offset_22 + 5) = loaded_word_153;
    *((_OWORD *)record_byte_offset_22 + 6) = loaded_word_154;
    record_byte_offset_24 = &g_184395290;
    do
    {
      record_byte_offset_24 += 32;
      loaded_word_155 = *(_OWORD *)record_byte_offset_23;
      loaded_word_156 = *((_OWORD *)record_byte_offset_23 + 1);
      record_byte_offset_23 += 32;
      *((_OWORD *)record_byte_offset_24 - 8) = loaded_word_155;
      loaded_word_157 = *((_OWORD *)record_byte_offset_23 - 6);
      *((_OWORD *)record_byte_offset_24 - 7) = loaded_word_156;
      loaded_word_158 = *((_OWORD *)record_byte_offset_23 - 5);
      *((_OWORD *)record_byte_offset_24 - 6) = loaded_word_157;
      loaded_word_159 = *((_OWORD *)record_byte_offset_23 - 4);
      *((_OWORD *)record_byte_offset_24 - 5) = loaded_word_158;
      loaded_word_160 = *((_OWORD *)record_byte_offset_23 - 3);
      *((_OWORD *)record_byte_offset_24 - 4) = loaded_word_159;
      loaded_word_161 = *((_OWORD *)record_byte_offset_23 - 2);
      *((_OWORD *)record_byte_offset_24 - 3) = loaded_word_160;
      loaded_word_162 = *((_OWORD *)record_byte_offset_23 - 1);
      *((_OWORD *)record_byte_offset_24 - 2) = loaded_word_161;
      *((_OWORD *)record_byte_offset_24 - 1) = loaded_word_162;
      --remaining_count_13;
    }
    while ( remaining_count_13 );
    remaining_count_14 = 3;
    loaded_word_163 = *((_OWORD *)record_byte_offset_23 + 1);
    *(_OWORD *)record_byte_offset_24 = *(_OWORD *)record_byte_offset_23;
    loaded_word_164 = *((_OWORD *)record_byte_offset_23 + 2);
    *((_OWORD *)record_byte_offset_24 + 1) = loaded_word_163;
    loaded_word_165 = *((_OWORD *)record_byte_offset_23 + 3);
    *((_OWORD *)record_byte_offset_24 + 2) = loaded_word_164;
    loaded_word_166 = *((_OWORD *)record_byte_offset_23 + 4);
    *((_OWORD *)record_byte_offset_24 + 3) = loaded_word_165;
    loaded_word_167 = *((_OWORD *)record_byte_offset_23 + 5);
    *((_OWORD *)record_byte_offset_24 + 4) = loaded_word_166;
    loaded_word_168 = *((_OWORD *)record_byte_offset_23 + 6);
    record_byte_offset_25 = &g_184399280;
    *((_OWORD *)record_byte_offset_24 + 5) = loaded_word_167;
    *((_OWORD *)record_byte_offset_24 + 6) = loaded_word_168;
    record_byte_offset_26 = &g_184395480;
    do
    {
      record_byte_offset_26 += 32;
      loaded_word_169 = *(_OWORD *)record_byte_offset_25;
      loaded_word_170 = *((_OWORD *)record_byte_offset_25 + 1);
      record_byte_offset_25 += 32;
      *((_OWORD *)record_byte_offset_26 - 8) = loaded_word_169;
      loaded_word_171 = *((_OWORD *)record_byte_offset_25 - 6);
      *((_OWORD *)record_byte_offset_26 - 7) = loaded_word_170;
      loaded_word_172 = *((_OWORD *)record_byte_offset_25 - 5);
      *((_OWORD *)record_byte_offset_26 - 6) = loaded_word_171;
      loaded_word_173 = *((_OWORD *)record_byte_offset_25 - 4);
      *((_OWORD *)record_byte_offset_26 - 5) = loaded_word_172;
      loaded_word_174 = *((_OWORD *)record_byte_offset_25 - 3);
      *((_OWORD *)record_byte_offset_26 - 4) = loaded_word_173;
      loaded_word_175 = *((_OWORD *)record_byte_offset_25 - 2);
      *((_OWORD *)record_byte_offset_26 - 3) = loaded_word_174;
      loaded_word_176 = *((_OWORD *)record_byte_offset_25 - 1);
      *((_OWORD *)record_byte_offset_26 - 2) = loaded_word_175;
      *((_OWORD *)record_byte_offset_26 - 1) = loaded_word_176;
      --remaining_count_14;
    }
    while ( remaining_count_14 );
    remaining_count_15 = 3;
    loaded_word_177 = *((_OWORD *)record_byte_offset_25 + 1);
    *(_OWORD *)record_byte_offset_26 = *(_OWORD *)record_byte_offset_25;
    loaded_word_178 = *((_OWORD *)record_byte_offset_25 + 2);
    *((_OWORD *)record_byte_offset_26 + 1) = loaded_word_177;
    loaded_word_179 = *((_OWORD *)record_byte_offset_25 + 3);
    *((_OWORD *)record_byte_offset_26 + 2) = loaded_word_178;
    loaded_word_180 = *((_OWORD *)record_byte_offset_25 + 4);
    *((_OWORD *)record_byte_offset_26 + 3) = loaded_word_179;
    loaded_word_181 = *((_OWORD *)record_byte_offset_25 + 5);
    *((_OWORD *)record_byte_offset_26 + 4) = loaded_word_180;
    loaded_word_182 = *((_OWORD *)record_byte_offset_25 + 6);
    record_byte_offset_27 = &g_184399470;
    *((_OWORD *)record_byte_offset_26 + 5) = loaded_word_181;
    *((_OWORD *)record_byte_offset_26 + 6) = loaded_word_182;
    record_byte_offset_28 = &g_184395670;
    do
    {
      record_byte_offset_28 += 32;
      loaded_word_183 = *(_OWORD *)record_byte_offset_27;
      loaded_word_184 = *((_OWORD *)record_byte_offset_27 + 1);
      record_byte_offset_27 += 32;
      *((_OWORD *)record_byte_offset_28 - 8) = loaded_word_183;
      loaded_word_185 = *((_OWORD *)record_byte_offset_27 - 6);
      *((_OWORD *)record_byte_offset_28 - 7) = loaded_word_184;
      loaded_word_186 = *((_OWORD *)record_byte_offset_27 - 5);
      *((_OWORD *)record_byte_offset_28 - 6) = loaded_word_185;
      loaded_word_187 = *((_OWORD *)record_byte_offset_27 - 4);
      *((_OWORD *)record_byte_offset_28 - 5) = loaded_word_186;
      loaded_word_188 = *((_OWORD *)record_byte_offset_27 - 3);
      *((_OWORD *)record_byte_offset_28 - 4) = loaded_word_187;
      loaded_word_189 = *((_OWORD *)record_byte_offset_27 - 2);
      *((_OWORD *)record_byte_offset_28 - 3) = loaded_word_188;
      loaded_word_190 = *((_OWORD *)record_byte_offset_27 - 1);
      *((_OWORD *)record_byte_offset_28 - 2) = loaded_word_189;
      *((_OWORD *)record_byte_offset_28 - 1) = loaded_word_190;
      --remaining_count_15;
    }
    while ( remaining_count_15 );
    remaining_count_16 = 3;
    loaded_word_191 = *((_OWORD *)record_byte_offset_27 + 1);
    *(_OWORD *)record_byte_offset_28 = *(_OWORD *)record_byte_offset_27;
    loaded_word_192 = *((_OWORD *)record_byte_offset_27 + 2);
    *((_OWORD *)record_byte_offset_28 + 1) = loaded_word_191;
    loaded_word_193 = *((_OWORD *)record_byte_offset_27 + 3);
    *((_OWORD *)record_byte_offset_28 + 2) = loaded_word_192;
    loaded_word_194 = *((_OWORD *)record_byte_offset_27 + 4);
    *((_OWORD *)record_byte_offset_28 + 3) = loaded_word_193;
    loaded_word_195 = *((_OWORD *)record_byte_offset_27 + 5);
    *((_OWORD *)record_byte_offset_28 + 4) = loaded_word_194;
    loaded_word_196 = *((_OWORD *)record_byte_offset_27 + 6);
    record_byte_offset_29 = &g_184399660;
    *((_OWORD *)record_byte_offset_28 + 5) = loaded_word_195;
    *((_OWORD *)record_byte_offset_28 + 6) = loaded_word_196;
    record_byte_offset_30 = &g_184395860;
    do
    {
      record_byte_offset_30 += 32;
      loaded_word_197 = *(_OWORD *)record_byte_offset_29;
      loaded_word_198 = *((_OWORD *)record_byte_offset_29 + 1);
      record_byte_offset_29 += 32;
      *((_OWORD *)record_byte_offset_30 - 8) = loaded_word_197;
      loaded_word_199 = *((_OWORD *)record_byte_offset_29 - 6);
      *((_OWORD *)record_byte_offset_30 - 7) = loaded_word_198;
      loaded_word_200 = *((_OWORD *)record_byte_offset_29 - 5);
      *((_OWORD *)record_byte_offset_30 - 6) = loaded_word_199;
      loaded_word_201 = *((_OWORD *)record_byte_offset_29 - 4);
      *((_OWORD *)record_byte_offset_30 - 5) = loaded_word_200;
      loaded_word_202 = *((_OWORD *)record_byte_offset_29 - 3);
      *((_OWORD *)record_byte_offset_30 - 4) = loaded_word_201;
      loaded_word_203 = *((_OWORD *)record_byte_offset_29 - 2);
      *((_OWORD *)record_byte_offset_30 - 3) = loaded_word_202;
      loaded_word_204 = *((_OWORD *)record_byte_offset_29 - 1);
      *((_OWORD *)record_byte_offset_30 - 2) = loaded_word_203;
      *((_OWORD *)record_byte_offset_30 - 1) = loaded_word_204;
      --remaining_count_16;
    }
    while ( remaining_count_16 );
    remaining_count_17 = 3;
    loaded_word_205 = *((_OWORD *)record_byte_offset_29 + 1);
    *(_OWORD *)record_byte_offset_30 = *(_OWORD *)record_byte_offset_29;
    loaded_word_206 = *((_OWORD *)record_byte_offset_29 + 2);
    *((_OWORD *)record_byte_offset_30 + 1) = loaded_word_205;
    loaded_word_207 = *((_OWORD *)record_byte_offset_29 + 3);
    *((_OWORD *)record_byte_offset_30 + 2) = loaded_word_206;
    loaded_word_208 = *((_OWORD *)record_byte_offset_29 + 4);
    *((_OWORD *)record_byte_offset_30 + 3) = loaded_word_207;
    loaded_word_209 = *((_OWORD *)record_byte_offset_29 + 5);
    *((_OWORD *)record_byte_offset_30 + 4) = loaded_word_208;
    loaded_word_210 = *((_OWORD *)record_byte_offset_29 + 6);
    record_byte_offset_31 = &g_184399850;
    *((_OWORD *)record_byte_offset_30 + 5) = loaded_word_209;
    *((_OWORD *)record_byte_offset_30 + 6) = loaded_word_210;
    record_byte_offset_32 = &g_184395A50;
    do
    {
      record_byte_offset_32 += 32;
      loaded_word_211 = *(_OWORD *)record_byte_offset_31;
      loaded_word_212 = *((_OWORD *)record_byte_offset_31 + 1);
      record_byte_offset_31 += 32;
      *((_OWORD *)record_byte_offset_32 - 8) = loaded_word_211;
      loaded_word_213 = *((_OWORD *)record_byte_offset_31 - 6);
      *((_OWORD *)record_byte_offset_32 - 7) = loaded_word_212;
      loaded_word_214 = *((_OWORD *)record_byte_offset_31 - 5);
      *((_OWORD *)record_byte_offset_32 - 6) = loaded_word_213;
      loaded_word_215 = *((_OWORD *)record_byte_offset_31 - 4);
      *((_OWORD *)record_byte_offset_32 - 5) = loaded_word_214;
      loaded_word_216 = *((_OWORD *)record_byte_offset_31 - 3);
      *((_OWORD *)record_byte_offset_32 - 4) = loaded_word_215;
      loaded_word_217 = *((_OWORD *)record_byte_offset_31 - 2);
      *((_OWORD *)record_byte_offset_32 - 3) = loaded_word_216;
      loaded_word_218 = *((_OWORD *)record_byte_offset_31 - 1);
      *((_OWORD *)record_byte_offset_32 - 2) = loaded_word_217;
      *((_OWORD *)record_byte_offset_32 - 1) = loaded_word_218;
      --remaining_count_17;
    }
    while ( remaining_count_17 );
    remaining_count_18 = 3;
    loaded_word_219 = *((_OWORD *)record_byte_offset_31 + 1);
    *(_OWORD *)record_byte_offset_32 = *(_OWORD *)record_byte_offset_31;
    loaded_word_220 = *((_OWORD *)record_byte_offset_31 + 2);
    *((_OWORD *)record_byte_offset_32 + 1) = loaded_word_219;
    loaded_word_221 = *((_OWORD *)record_byte_offset_31 + 3);
    *((_OWORD *)record_byte_offset_32 + 2) = loaded_word_220;
    loaded_word_222 = *((_OWORD *)record_byte_offset_31 + 4);
    *((_OWORD *)record_byte_offset_32 + 3) = loaded_word_221;
    loaded_word_223 = *((_OWORD *)record_byte_offset_31 + 5);
    *((_OWORD *)record_byte_offset_32 + 4) = loaded_word_222;
    loaded_word_224 = *((_OWORD *)record_byte_offset_31 + 6);
    record_byte_offset_33 = &g_184399A40;
    *((_OWORD *)record_byte_offset_32 + 5) = loaded_word_223;
    *((_OWORD *)record_byte_offset_32 + 6) = loaded_word_224;
    record_byte_offset_34 = &g_184395C40;
    do
    {
      record_byte_offset_34 += 32;
      loaded_word_225 = *(_OWORD *)record_byte_offset_33;
      loaded_word_226 = *((_OWORD *)record_byte_offset_33 + 1);
      record_byte_offset_33 += 32;
      *((_OWORD *)record_byte_offset_34 - 8) = loaded_word_225;
      loaded_word_227 = *((_OWORD *)record_byte_offset_33 - 6);
      *((_OWORD *)record_byte_offset_34 - 7) = loaded_word_226;
      loaded_word_228 = *((_OWORD *)record_byte_offset_33 - 5);
      *((_OWORD *)record_byte_offset_34 - 6) = loaded_word_227;
      loaded_word_229 = *((_OWORD *)record_byte_offset_33 - 4);
      *((_OWORD *)record_byte_offset_34 - 5) = loaded_word_228;
      loaded_word_230 = *((_OWORD *)record_byte_offset_33 - 3);
      *((_OWORD *)record_byte_offset_34 - 4) = loaded_word_229;
      loaded_word_231 = *((_OWORD *)record_byte_offset_33 - 2);
      *((_OWORD *)record_byte_offset_34 - 3) = loaded_word_230;
      loaded_word_232 = *((_OWORD *)record_byte_offset_33 - 1);
      *((_OWORD *)record_byte_offset_34 - 2) = loaded_word_231;
      *((_OWORD *)record_byte_offset_34 - 1) = loaded_word_232;
      --remaining_count_18;
    }
    while ( remaining_count_18 );
    remaining_count_19 = 3;
    loaded_word_233 = *((_OWORD *)record_byte_offset_33 + 1);
    *(_OWORD *)record_byte_offset_34 = *(_OWORD *)record_byte_offset_33;
    loaded_word_234 = *((_OWORD *)record_byte_offset_33 + 2);
    *((_OWORD *)record_byte_offset_34 + 1) = loaded_word_233;
    loaded_word_235 = *((_OWORD *)record_byte_offset_33 + 3);
    *((_OWORD *)record_byte_offset_34 + 2) = loaded_word_234;
    loaded_word_236 = *((_OWORD *)record_byte_offset_33 + 4);
    *((_OWORD *)record_byte_offset_34 + 3) = loaded_word_235;
    loaded_word_237 = *((_OWORD *)record_byte_offset_33 + 5);
    *((_OWORD *)record_byte_offset_34 + 4) = loaded_word_236;
    loaded_word_238 = *((_OWORD *)record_byte_offset_33 + 6);
    record_byte_offset_35 = &g_184399C30;
    *((_OWORD *)record_byte_offset_34 + 5) = loaded_word_237;
    *((_OWORD *)record_byte_offset_34 + 6) = loaded_word_238;
    record_byte_offset_36 = &g_184395E30;
    do
    {
      record_byte_offset_36 += 32;
      loaded_word_239 = *(_OWORD *)record_byte_offset_35;
      loaded_word_240 = *((_OWORD *)record_byte_offset_35 + 1);
      record_byte_offset_35 += 32;
      *((_OWORD *)record_byte_offset_36 - 8) = loaded_word_239;
      loaded_word_241 = *((_OWORD *)record_byte_offset_35 - 6);
      *((_OWORD *)record_byte_offset_36 - 7) = loaded_word_240;
      loaded_word_242 = *((_OWORD *)record_byte_offset_35 - 5);
      *((_OWORD *)record_byte_offset_36 - 6) = loaded_word_241;
      loaded_word_243 = *((_OWORD *)record_byte_offset_35 - 4);
      *((_OWORD *)record_byte_offset_36 - 5) = loaded_word_242;
      loaded_word_244 = *((_OWORD *)record_byte_offset_35 - 3);
      *((_OWORD *)record_byte_offset_36 - 4) = loaded_word_243;
      loaded_word_245 = *((_OWORD *)record_byte_offset_35 - 2);
      *((_OWORD *)record_byte_offset_36 - 3) = loaded_word_244;
      loaded_word_246 = *((_OWORD *)record_byte_offset_35 - 1);
      *((_OWORD *)record_byte_offset_36 - 2) = loaded_word_245;
      *((_OWORD *)record_byte_offset_36 - 1) = loaded_word_246;
      --remaining_count_19;
    }
    while ( remaining_count_19 );
    remaining_count_20 = 3;
    loaded_word_247 = *((_OWORD *)record_byte_offset_35 + 1);
    *(_OWORD *)record_byte_offset_36 = *(_OWORD *)record_byte_offset_35;
    loaded_word_248 = *((_OWORD *)record_byte_offset_35 + 2);
    *((_OWORD *)record_byte_offset_36 + 1) = loaded_word_247;
    loaded_word_249 = *((_OWORD *)record_byte_offset_35 + 3);
    *((_OWORD *)record_byte_offset_36 + 2) = loaded_word_248;
    loaded_word_250 = *((_OWORD *)record_byte_offset_35 + 4);
    *((_OWORD *)record_byte_offset_36 + 3) = loaded_word_249;
    loaded_word_251 = *((_OWORD *)record_byte_offset_35 + 5);
    *((_OWORD *)record_byte_offset_36 + 4) = loaded_word_250;
    loaded_word_252 = *((_OWORD *)record_byte_offset_35 + 6);
    record_byte_offset_37 = &g_184399E20;
    *((_OWORD *)record_byte_offset_36 + 5) = loaded_word_251;
    *((_OWORD *)record_byte_offset_36 + 6) = loaded_word_252;
    record_byte_offset_38 = &g_184396020;
    do
    {
      record_byte_offset_38 += 32;
      loaded_word_253 = *(_OWORD *)record_byte_offset_37;
      loaded_word_254 = *((_OWORD *)record_byte_offset_37 + 1);
      record_byte_offset_37 += 32;
      *((_OWORD *)record_byte_offset_38 - 8) = loaded_word_253;
      loaded_word_255 = *((_OWORD *)record_byte_offset_37 - 6);
      *((_OWORD *)record_byte_offset_38 - 7) = loaded_word_254;
      loaded_word_256 = *((_OWORD *)record_byte_offset_37 - 5);
      *((_OWORD *)record_byte_offset_38 - 6) = loaded_word_255;
      loaded_word_257 = *((_OWORD *)record_byte_offset_37 - 4);
      *((_OWORD *)record_byte_offset_38 - 5) = loaded_word_256;
      loaded_word_258 = *((_OWORD *)record_byte_offset_37 - 3);
      *((_OWORD *)record_byte_offset_38 - 4) = loaded_word_257;
      loaded_word_259 = *((_OWORD *)record_byte_offset_37 - 2);
      *((_OWORD *)record_byte_offset_38 - 3) = loaded_word_258;
      loaded_word_260 = *((_OWORD *)record_byte_offset_37 - 1);
      *((_OWORD *)record_byte_offset_38 - 2) = loaded_word_259;
      *((_OWORD *)record_byte_offset_38 - 1) = loaded_word_260;
      --remaining_count_20;
    }
    while ( remaining_count_20 );
    remaining_count_21 = 3;
    loaded_word_261 = *((_OWORD *)record_byte_offset_37 + 1);
    *(_OWORD *)record_byte_offset_38 = *(_OWORD *)record_byte_offset_37;
    loaded_word_262 = *((_OWORD *)record_byte_offset_37 + 2);
    *((_OWORD *)record_byte_offset_38 + 1) = loaded_word_261;
    loaded_word_263 = *((_OWORD *)record_byte_offset_37 + 3);
    *((_OWORD *)record_byte_offset_38 + 2) = loaded_word_262;
    loaded_word_264 = *((_OWORD *)record_byte_offset_37 + 4);
    *((_OWORD *)record_byte_offset_38 + 3) = loaded_word_263;
    loaded_word_265 = *((_OWORD *)record_byte_offset_37 + 5);
    *((_OWORD *)record_byte_offset_38 + 4) = loaded_word_264;
    loaded_word_266 = *((_OWORD *)record_byte_offset_37 + 6);
    record_byte_offset_39 = &g_18439A010;
    *((_OWORD *)record_byte_offset_38 + 5) = loaded_word_265;
    *((_OWORD *)record_byte_offset_38 + 6) = loaded_word_266;
    record_byte_offset_40 = &g_184396210;
    do
    {
      record_byte_offset_40 += 32;
      loaded_word_267 = *(_OWORD *)record_byte_offset_39;
      loaded_word_268 = *((_OWORD *)record_byte_offset_39 + 1);
      record_byte_offset_39 += 32;
      *((_OWORD *)record_byte_offset_40 - 8) = loaded_word_267;
      loaded_word_269 = *((_OWORD *)record_byte_offset_39 - 6);
      *((_OWORD *)record_byte_offset_40 - 7) = loaded_word_268;
      loaded_word_270 = *((_OWORD *)record_byte_offset_39 - 5);
      *((_OWORD *)record_byte_offset_40 - 6) = loaded_word_269;
      loaded_word_271 = *((_OWORD *)record_byte_offset_39 - 4);
      *((_OWORD *)record_byte_offset_40 - 5) = loaded_word_270;
      loaded_word_272 = *((_OWORD *)record_byte_offset_39 - 3);
      *((_OWORD *)record_byte_offset_40 - 4) = loaded_word_271;
      loaded_word_273 = *((_OWORD *)record_byte_offset_39 - 2);
      *((_OWORD *)record_byte_offset_40 - 3) = loaded_word_272;
      loaded_word_274 = *((_OWORD *)record_byte_offset_39 - 1);
      *((_OWORD *)record_byte_offset_40 - 2) = loaded_word_273;
      *((_OWORD *)record_byte_offset_40 - 1) = loaded_word_274;
      --remaining_count_21;
    }
    while ( remaining_count_21 );
    remaining_count_22 = 3;
    loaded_word_275 = *((_OWORD *)record_byte_offset_39 + 1);
    *(_OWORD *)record_byte_offset_40 = *(_OWORD *)record_byte_offset_39;
    loaded_word_276 = *((_OWORD *)record_byte_offset_39 + 2);
    *((_OWORD *)record_byte_offset_40 + 1) = loaded_word_275;
    loaded_word_277 = *((_OWORD *)record_byte_offset_39 + 3);
    *((_OWORD *)record_byte_offset_40 + 2) = loaded_word_276;
    loaded_word_278 = *((_OWORD *)record_byte_offset_39 + 4);
    *((_OWORD *)record_byte_offset_40 + 3) = loaded_word_277;
    loaded_word_279 = *((_OWORD *)record_byte_offset_39 + 5);
    *((_OWORD *)record_byte_offset_40 + 4) = loaded_word_278;
    loaded_word_280 = *((_OWORD *)record_byte_offset_39 + 6);
    record_byte_offset_41 = &g_18439A200;
    *((_OWORD *)record_byte_offset_40 + 5) = loaded_word_279;
    *((_OWORD *)record_byte_offset_40 + 6) = loaded_word_280;
    record_byte_offset_42 = &g_184396400;
    do
    {
      record_byte_offset_42 += 32;
      loaded_word_281 = *(_OWORD *)record_byte_offset_41;
      loaded_word_282 = *((_OWORD *)record_byte_offset_41 + 1);
      record_byte_offset_41 += 32;
      *((_OWORD *)record_byte_offset_42 - 8) = loaded_word_281;
      loaded_word_283 = *((_OWORD *)record_byte_offset_41 - 6);
      *((_OWORD *)record_byte_offset_42 - 7) = loaded_word_282;
      loaded_word_284 = *((_OWORD *)record_byte_offset_41 - 5);
      *((_OWORD *)record_byte_offset_42 - 6) = loaded_word_283;
      loaded_word_285 = *((_OWORD *)record_byte_offset_41 - 4);
      *((_OWORD *)record_byte_offset_42 - 5) = loaded_word_284;
      loaded_word_286 = *((_OWORD *)record_byte_offset_41 - 3);
      *((_OWORD *)record_byte_offset_42 - 4) = loaded_word_285;
      loaded_word_287 = *((_OWORD *)record_byte_offset_41 - 2);
      *((_OWORD *)record_byte_offset_42 - 3) = loaded_word_286;
      loaded_word_288 = *((_OWORD *)record_byte_offset_41 - 1);
      *((_OWORD *)record_byte_offset_42 - 2) = loaded_word_287;
      *((_OWORD *)record_byte_offset_42 - 1) = loaded_word_288;
      --remaining_count_22;
    }
    while ( remaining_count_22 );
    remaining_count_23 = 3;
    loaded_word_289 = *((_OWORD *)record_byte_offset_41 + 1);
    *(_OWORD *)record_byte_offset_42 = *(_OWORD *)record_byte_offset_41;
    loaded_word_290 = *((_OWORD *)record_byte_offset_41 + 2);
    *((_OWORD *)record_byte_offset_42 + 1) = loaded_word_289;
    loaded_word_291 = *((_OWORD *)record_byte_offset_41 + 3);
    *((_OWORD *)record_byte_offset_42 + 2) = loaded_word_290;
    loaded_word_292 = *((_OWORD *)record_byte_offset_41 + 4);
    *((_OWORD *)record_byte_offset_42 + 3) = loaded_word_291;
    loaded_word_293 = *((_OWORD *)record_byte_offset_41 + 5);
    *((_OWORD *)record_byte_offset_42 + 4) = loaded_word_292;
    loaded_word_294 = *((_OWORD *)record_byte_offset_41 + 6);
    record_byte_offset_43 = &g_18439A3F0;
    *((_OWORD *)record_byte_offset_42 + 5) = loaded_word_293;
    *((_OWORD *)record_byte_offset_42 + 6) = loaded_word_294;
    record_byte_offset_44 = &g_1843965F0;
    do
    {
      record_byte_offset_44 += 32;
      loaded_word_295 = *(_OWORD *)record_byte_offset_43;
      loaded_word_296 = *((_OWORD *)record_byte_offset_43 + 1);
      record_byte_offset_43 += 32;
      *((_OWORD *)record_byte_offset_44 - 8) = loaded_word_295;
      loaded_word_297 = *((_OWORD *)record_byte_offset_43 - 6);
      *((_OWORD *)record_byte_offset_44 - 7) = loaded_word_296;
      loaded_word_298 = *((_OWORD *)record_byte_offset_43 - 5);
      *((_OWORD *)record_byte_offset_44 - 6) = loaded_word_297;
      loaded_word_299 = *((_OWORD *)record_byte_offset_43 - 4);
      *((_OWORD *)record_byte_offset_44 - 5) = loaded_word_298;
      loaded_word_300 = *((_OWORD *)record_byte_offset_43 - 3);
      *((_OWORD *)record_byte_offset_44 - 4) = loaded_word_299;
      loaded_word_301 = *((_OWORD *)record_byte_offset_43 - 2);
      *((_OWORD *)record_byte_offset_44 - 3) = loaded_word_300;
      loaded_word_302 = *((_OWORD *)record_byte_offset_43 - 1);
      *((_OWORD *)record_byte_offset_44 - 2) = loaded_word_301;
      *((_OWORD *)record_byte_offset_44 - 1) = loaded_word_302;
      --remaining_count_23;
    }
    while ( remaining_count_23 );
    remaining_count_24 = 3;
    loaded_word_303 = *((_OWORD *)record_byte_offset_43 + 1);
    *(_OWORD *)record_byte_offset_44 = *(_OWORD *)record_byte_offset_43;
    loaded_word_304 = *((_OWORD *)record_byte_offset_43 + 2);
    *((_OWORD *)record_byte_offset_44 + 1) = loaded_word_303;
    loaded_word_305 = *((_OWORD *)record_byte_offset_43 + 3);
    *((_OWORD *)record_byte_offset_44 + 2) = loaded_word_304;
    loaded_word_306 = *((_OWORD *)record_byte_offset_43 + 4);
    *((_OWORD *)record_byte_offset_44 + 3) = loaded_word_305;
    loaded_word_307 = *((_OWORD *)record_byte_offset_43 + 5);
    *((_OWORD *)record_byte_offset_44 + 4) = loaded_word_306;
    loaded_word_308 = *((_OWORD *)record_byte_offset_43 + 6);
    record_byte_offset_45 = &g_18439A5E0;
    *((_OWORD *)record_byte_offset_44 + 5) = loaded_word_307;
    *((_OWORD *)record_byte_offset_44 + 6) = loaded_word_308;
    record_byte_offset_46 = &g_1843967E0;
    do
    {
      record_byte_offset_46 += 32;
      loaded_word_309 = *(_OWORD *)record_byte_offset_45;
      loaded_word_310 = *((_OWORD *)record_byte_offset_45 + 1);
      record_byte_offset_45 += 32;
      *((_OWORD *)record_byte_offset_46 - 8) = loaded_word_309;
      loaded_word_311 = *((_OWORD *)record_byte_offset_45 - 6);
      *((_OWORD *)record_byte_offset_46 - 7) = loaded_word_310;
      loaded_word_312 = *((_OWORD *)record_byte_offset_45 - 5);
      *((_OWORD *)record_byte_offset_46 - 6) = loaded_word_311;
      loaded_word_313 = *((_OWORD *)record_byte_offset_45 - 4);
      *((_OWORD *)record_byte_offset_46 - 5) = loaded_word_312;
      loaded_word_314 = *((_OWORD *)record_byte_offset_45 - 3);
      *((_OWORD *)record_byte_offset_46 - 4) = loaded_word_313;
      loaded_word_315 = *((_OWORD *)record_byte_offset_45 - 2);
      *((_OWORD *)record_byte_offset_46 - 3) = loaded_word_314;
      loaded_word_316 = *((_OWORD *)record_byte_offset_45 - 1);
      *((_OWORD *)record_byte_offset_46 - 2) = loaded_word_315;
      *((_OWORD *)record_byte_offset_46 - 1) = loaded_word_316;
      --remaining_count_24;
    }
    while ( remaining_count_24 );
    remaining_count_25 = 3;
    loaded_word_317 = *((_OWORD *)record_byte_offset_45 + 1);
    *(_OWORD *)record_byte_offset_46 = *(_OWORD *)record_byte_offset_45;
    loaded_word_318 = *((_OWORD *)record_byte_offset_45 + 2);
    *((_OWORD *)record_byte_offset_46 + 1) = loaded_word_317;
    loaded_word_319 = *((_OWORD *)record_byte_offset_45 + 3);
    *((_OWORD *)record_byte_offset_46 + 2) = loaded_word_318;
    loaded_word_320 = *((_OWORD *)record_byte_offset_45 + 4);
    *((_OWORD *)record_byte_offset_46 + 3) = loaded_word_319;
    loaded_word_321 = *((_OWORD *)record_byte_offset_45 + 5);
    *((_OWORD *)record_byte_offset_46 + 4) = loaded_word_320;
    loaded_word_322 = *((_OWORD *)record_byte_offset_45 + 6);
    record_byte_offset_47 = &g_18439A7D0;
    *((_OWORD *)record_byte_offset_46 + 5) = loaded_word_321;
    *((_OWORD *)record_byte_offset_46 + 6) = loaded_word_322;
    record_byte_offset_48 = &g_1843969D0;
    do
    {
      record_byte_offset_48 += 32;
      loaded_word_323 = *(_OWORD *)record_byte_offset_47;
      loaded_word_324 = *((_OWORD *)record_byte_offset_47 + 1);
      record_byte_offset_47 += 32;
      *((_OWORD *)record_byte_offset_48 - 8) = loaded_word_323;
      loaded_word_325 = *((_OWORD *)record_byte_offset_47 - 6);
      *((_OWORD *)record_byte_offset_48 - 7) = loaded_word_324;
      loaded_word_326 = *((_OWORD *)record_byte_offset_47 - 5);
      *((_OWORD *)record_byte_offset_48 - 6) = loaded_word_325;
      loaded_word_327 = *((_OWORD *)record_byte_offset_47 - 4);
      *((_OWORD *)record_byte_offset_48 - 5) = loaded_word_326;
      loaded_word_328 = *((_OWORD *)record_byte_offset_47 - 3);
      *((_OWORD *)record_byte_offset_48 - 4) = loaded_word_327;
      loaded_word_329 = *((_OWORD *)record_byte_offset_47 - 2);
      *((_OWORD *)record_byte_offset_48 - 3) = loaded_word_328;
      loaded_word_330 = *((_OWORD *)record_byte_offset_47 - 1);
      *((_OWORD *)record_byte_offset_48 - 2) = loaded_word_329;
      *((_OWORD *)record_byte_offset_48 - 1) = loaded_word_330;
      --remaining_count_25;
    }
    while ( remaining_count_25 );
    remaining_count_26 = 3;
    loaded_word_331 = *((_OWORD *)record_byte_offset_47 + 1);
    *(_OWORD *)record_byte_offset_48 = *(_OWORD *)record_byte_offset_47;
    loaded_word_332 = *((_OWORD *)record_byte_offset_47 + 2);
    *((_OWORD *)record_byte_offset_48 + 1) = loaded_word_331;
    loaded_word_333 = *((_OWORD *)record_byte_offset_47 + 3);
    *((_OWORD *)record_byte_offset_48 + 2) = loaded_word_332;
    loaded_word_334 = *((_OWORD *)record_byte_offset_47 + 4);
    *((_OWORD *)record_byte_offset_48 + 3) = loaded_word_333;
    loaded_word_335 = *((_OWORD *)record_byte_offset_47 + 5);
    *((_OWORD *)record_byte_offset_48 + 4) = loaded_word_334;
    loaded_word_336 = *((_OWORD *)record_byte_offset_47 + 6);
    record_byte_offset_49 = &g_18439A9C0;
    *((_OWORD *)record_byte_offset_48 + 5) = loaded_word_335;
    *((_OWORD *)record_byte_offset_48 + 6) = loaded_word_336;
    record_byte_offset_50 = &g_184396BC0;
    do
    {
      record_byte_offset_50 += 32;
      loaded_word_337 = *(_OWORD *)record_byte_offset_49;
      loaded_word_338 = *((_OWORD *)record_byte_offset_49 + 1);
      record_byte_offset_49 += 32;
      *((_OWORD *)record_byte_offset_50 - 8) = loaded_word_337;
      loaded_word_339 = *((_OWORD *)record_byte_offset_49 - 6);
      *((_OWORD *)record_byte_offset_50 - 7) = loaded_word_338;
      loaded_word_340 = *((_OWORD *)record_byte_offset_49 - 5);
      *((_OWORD *)record_byte_offset_50 - 6) = loaded_word_339;
      loaded_word_341 = *((_OWORD *)record_byte_offset_49 - 4);
      *((_OWORD *)record_byte_offset_50 - 5) = loaded_word_340;
      loaded_word_342 = *((_OWORD *)record_byte_offset_49 - 3);
      *((_OWORD *)record_byte_offset_50 - 4) = loaded_word_341;
      loaded_word_343 = *((_OWORD *)record_byte_offset_49 - 2);
      *((_OWORD *)record_byte_offset_50 - 3) = loaded_word_342;
      loaded_word_344 = *((_OWORD *)record_byte_offset_49 - 1);
      *((_OWORD *)record_byte_offset_50 - 2) = loaded_word_343;
      *((_OWORD *)record_byte_offset_50 - 1) = loaded_word_344;
      --remaining_count_26;
    }
    while ( remaining_count_26 );
    remaining_count_27 = 3;
    loaded_word_345 = *((_OWORD *)record_byte_offset_49 + 1);
    *(_OWORD *)record_byte_offset_50 = *(_OWORD *)record_byte_offset_49;
    loaded_word_346 = *((_OWORD *)record_byte_offset_49 + 2);
    *((_OWORD *)record_byte_offset_50 + 1) = loaded_word_345;
    loaded_word_347 = *((_OWORD *)record_byte_offset_49 + 3);
    *((_OWORD *)record_byte_offset_50 + 2) = loaded_word_346;
    loaded_word_348 = *((_OWORD *)record_byte_offset_49 + 4);
    *((_OWORD *)record_byte_offset_50 + 3) = loaded_word_347;
    loaded_word_349 = *((_OWORD *)record_byte_offset_49 + 5);
    *((_OWORD *)record_byte_offset_50 + 4) = loaded_word_348;
    loaded_word_350 = *((_OWORD *)record_byte_offset_49 + 6);
    record_byte_offset_51 = &g_18439ABB0;
    *((_OWORD *)record_byte_offset_50 + 5) = loaded_word_349;
    *((_OWORD *)record_byte_offset_50 + 6) = loaded_word_350;
    record_byte_offset_52 = &g_184396DB0;
    do
    {
      record_byte_offset_52 += 32;
      loaded_word_351 = *(_OWORD *)record_byte_offset_51;
      loaded_word_352 = *((_OWORD *)record_byte_offset_51 + 1);
      record_byte_offset_51 += 32;
      *((_OWORD *)record_byte_offset_52 - 8) = loaded_word_351;
      loaded_word_353 = *((_OWORD *)record_byte_offset_51 - 6);
      *((_OWORD *)record_byte_offset_52 - 7) = loaded_word_352;
      loaded_word_354 = *((_OWORD *)record_byte_offset_51 - 5);
      *((_OWORD *)record_byte_offset_52 - 6) = loaded_word_353;
      loaded_word_355 = *((_OWORD *)record_byte_offset_51 - 4);
      *((_OWORD *)record_byte_offset_52 - 5) = loaded_word_354;
      loaded_word_356 = *((_OWORD *)record_byte_offset_51 - 3);
      *((_OWORD *)record_byte_offset_52 - 4) = loaded_word_355;
      loaded_word_357 = *((_OWORD *)record_byte_offset_51 - 2);
      *((_OWORD *)record_byte_offset_52 - 3) = loaded_word_356;
      loaded_word_358 = *((_OWORD *)record_byte_offset_51 - 1);
      *((_OWORD *)record_byte_offset_52 - 2) = loaded_word_357;
      *((_OWORD *)record_byte_offset_52 - 1) = loaded_word_358;
      --remaining_count_27;
    }
    while ( remaining_count_27 );
    remaining_count_28 = 3;
    loaded_word_359 = *((_OWORD *)record_byte_offset_51 + 1);
    *(_OWORD *)record_byte_offset_52 = *(_OWORD *)record_byte_offset_51;
    loaded_word_360 = *((_OWORD *)record_byte_offset_51 + 2);
    *((_OWORD *)record_byte_offset_52 + 1) = loaded_word_359;
    loaded_word_361 = *((_OWORD *)record_byte_offset_51 + 3);
    *((_OWORD *)record_byte_offset_52 + 2) = loaded_word_360;
    loaded_word_362 = *((_OWORD *)record_byte_offset_51 + 4);
    *((_OWORD *)record_byte_offset_52 + 3) = loaded_word_361;
    loaded_word_363 = *((_OWORD *)record_byte_offset_51 + 5);
    *((_OWORD *)record_byte_offset_52 + 4) = loaded_word_362;
    loaded_word_364 = *((_OWORD *)record_byte_offset_51 + 6);
    record_byte_offset_53 = &g_18439ADA0;
    *((_OWORD *)record_byte_offset_52 + 5) = loaded_word_363;
    *((_OWORD *)record_byte_offset_52 + 6) = loaded_word_364;
    record_byte_offset_54 = &g_184396FA0;
    do
    {
      record_byte_offset_54 += 32;
      loaded_word_365 = *(_OWORD *)record_byte_offset_53;
      loaded_word_366 = *((_OWORD *)record_byte_offset_53 + 1);
      record_byte_offset_53 += 32;
      *((_OWORD *)record_byte_offset_54 - 8) = loaded_word_365;
      loaded_word_367 = *((_OWORD *)record_byte_offset_53 - 6);
      *((_OWORD *)record_byte_offset_54 - 7) = loaded_word_366;
      loaded_word_368 = *((_OWORD *)record_byte_offset_53 - 5);
      *((_OWORD *)record_byte_offset_54 - 6) = loaded_word_367;
      loaded_word_369 = *((_OWORD *)record_byte_offset_53 - 4);
      *((_OWORD *)record_byte_offset_54 - 5) = loaded_word_368;
      loaded_word_370 = *((_OWORD *)record_byte_offset_53 - 3);
      *((_OWORD *)record_byte_offset_54 - 4) = loaded_word_369;
      loaded_word_371 = *((_OWORD *)record_byte_offset_53 - 2);
      *((_OWORD *)record_byte_offset_54 - 3) = loaded_word_370;
      loaded_word_372 = *((_OWORD *)record_byte_offset_53 - 1);
      *((_OWORD *)record_byte_offset_54 - 2) = loaded_word_371;
      *((_OWORD *)record_byte_offset_54 - 1) = loaded_word_372;
      --remaining_count_28;
    }
    while ( remaining_count_28 );
    remaining_count_29 = 3;
    loaded_word_373 = *((_OWORD *)record_byte_offset_53 + 1);
    *(_OWORD *)record_byte_offset_54 = *(_OWORD *)record_byte_offset_53;
    loaded_word_374 = *((_OWORD *)record_byte_offset_53 + 2);
    *((_OWORD *)record_byte_offset_54 + 1) = loaded_word_373;
    loaded_word_375 = *((_OWORD *)record_byte_offset_53 + 3);
    *((_OWORD *)record_byte_offset_54 + 2) = loaded_word_374;
    loaded_word_376 = *((_OWORD *)record_byte_offset_53 + 4);
    *((_OWORD *)record_byte_offset_54 + 3) = loaded_word_375;
    loaded_word_377 = *((_OWORD *)record_byte_offset_53 + 5);
    *((_OWORD *)record_byte_offset_54 + 4) = loaded_word_376;
    loaded_word_378 = *((_OWORD *)record_byte_offset_53 + 6);
    record_byte_offset_55 = &g_18439AF90;
    *((_OWORD *)record_byte_offset_54 + 5) = loaded_word_377;
    *((_OWORD *)record_byte_offset_54 + 6) = loaded_word_378;
    record_byte_offset_56 = &g_184397190;
    do
    {
      record_byte_offset_56 += 32;
      loaded_word_379 = *(_OWORD *)record_byte_offset_55;
      loaded_word_380 = *((_OWORD *)record_byte_offset_55 + 1);
      record_byte_offset_55 += 32;
      *((_OWORD *)record_byte_offset_56 - 8) = loaded_word_379;
      loaded_word_381 = *((_OWORD *)record_byte_offset_55 - 6);
      *((_OWORD *)record_byte_offset_56 - 7) = loaded_word_380;
      loaded_word_382 = *((_OWORD *)record_byte_offset_55 - 5);
      *((_OWORD *)record_byte_offset_56 - 6) = loaded_word_381;
      loaded_word_383 = *((_OWORD *)record_byte_offset_55 - 4);
      *((_OWORD *)record_byte_offset_56 - 5) = loaded_word_382;
      loaded_word_384 = *((_OWORD *)record_byte_offset_55 - 3);
      *((_OWORD *)record_byte_offset_56 - 4) = loaded_word_383;
      loaded_word_385 = *((_OWORD *)record_byte_offset_55 - 2);
      *((_OWORD *)record_byte_offset_56 - 3) = loaded_word_384;
      loaded_word_386 = *((_OWORD *)record_byte_offset_55 - 1);
      *((_OWORD *)record_byte_offset_56 - 2) = loaded_word_385;
      *((_OWORD *)record_byte_offset_56 - 1) = loaded_word_386;
      --remaining_count_29;
    }
    while ( remaining_count_29 );
    remaining_count_30 = 3;
    loaded_word_387 = *((_OWORD *)record_byte_offset_55 + 1);
    *(_OWORD *)record_byte_offset_56 = *(_OWORD *)record_byte_offset_55;
    loaded_word_388 = *((_OWORD *)record_byte_offset_55 + 2);
    *((_OWORD *)record_byte_offset_56 + 1) = loaded_word_387;
    loaded_word_389 = *((_OWORD *)record_byte_offset_55 + 3);
    *((_OWORD *)record_byte_offset_56 + 2) = loaded_word_388;
    loaded_word_390 = *((_OWORD *)record_byte_offset_55 + 4);
    *((_OWORD *)record_byte_offset_56 + 3) = loaded_word_389;
    loaded_word_391 = *((_OWORD *)record_byte_offset_55 + 5);
    *((_OWORD *)record_byte_offset_56 + 4) = loaded_word_390;
    loaded_word_392 = *((_OWORD *)record_byte_offset_55 + 6);
    record_byte_offset_57 = &g_18439B180;
    *((_OWORD *)record_byte_offset_56 + 5) = loaded_word_391;
    *((_OWORD *)record_byte_offset_56 + 6) = loaded_word_392;
    record_byte_offset_58 = &g_184397380;
    do
    {
      record_byte_offset_58 += 32;
      loaded_word_393 = *(_OWORD *)record_byte_offset_57;
      loaded_word_394 = *((_OWORD *)record_byte_offset_57 + 1);
      record_byte_offset_57 += 32;
      *((_OWORD *)record_byte_offset_58 - 8) = loaded_word_393;
      loaded_word_395 = *((_OWORD *)record_byte_offset_57 - 6);
      *((_OWORD *)record_byte_offset_58 - 7) = loaded_word_394;
      loaded_word_396 = *((_OWORD *)record_byte_offset_57 - 5);
      *((_OWORD *)record_byte_offset_58 - 6) = loaded_word_395;
      loaded_word_397 = *((_OWORD *)record_byte_offset_57 - 4);
      *((_OWORD *)record_byte_offset_58 - 5) = loaded_word_396;
      loaded_word_398 = *((_OWORD *)record_byte_offset_57 - 3);
      *((_OWORD *)record_byte_offset_58 - 4) = loaded_word_397;
      loaded_word_399 = *((_OWORD *)record_byte_offset_57 - 2);
      *((_OWORD *)record_byte_offset_58 - 3) = loaded_word_398;
      loaded_word_400 = *((_OWORD *)record_byte_offset_57 - 1);
      *((_OWORD *)record_byte_offset_58 - 2) = loaded_word_399;
      *((_OWORD *)record_byte_offset_58 - 1) = loaded_word_400;
      --remaining_count_30;
    }
    while ( remaining_count_30 );
    remaining_count_31 = 3;
    loaded_word_401 = *((_OWORD *)record_byte_offset_57 + 1);
    *(_OWORD *)record_byte_offset_58 = *(_OWORD *)record_byte_offset_57;
    loaded_word_402 = *((_OWORD *)record_byte_offset_57 + 2);
    *((_OWORD *)record_byte_offset_58 + 1) = loaded_word_401;
    loaded_word_403 = *((_OWORD *)record_byte_offset_57 + 3);
    *((_OWORD *)record_byte_offset_58 + 2) = loaded_word_402;
    loaded_word_404 = *((_OWORD *)record_byte_offset_57 + 4);
    *((_OWORD *)record_byte_offset_58 + 3) = loaded_word_403;
    loaded_word_405 = *((_OWORD *)record_byte_offset_57 + 5);
    *((_OWORD *)record_byte_offset_58 + 4) = loaded_word_404;
    loaded_word_406 = *((_OWORD *)record_byte_offset_57 + 6);
    record_byte_offset_59 = &g_18439B370;
    *((_OWORD *)record_byte_offset_58 + 5) = loaded_word_405;
    *((_OWORD *)record_byte_offset_58 + 6) = loaded_word_406;
    record_byte_offset_60 = &g_184397570;
    do
    {
      record_byte_offset_60 += 32;
      loaded_word_407 = *(_OWORD *)record_byte_offset_59;
      loaded_word_408 = *((_OWORD *)record_byte_offset_59 + 1);
      record_byte_offset_59 += 32;
      *((_OWORD *)record_byte_offset_60 - 8) = loaded_word_407;
      loaded_word_409 = *((_OWORD *)record_byte_offset_59 - 6);
      *((_OWORD *)record_byte_offset_60 - 7) = loaded_word_408;
      loaded_word_410 = *((_OWORD *)record_byte_offset_59 - 5);
      *((_OWORD *)record_byte_offset_60 - 6) = loaded_word_409;
      loaded_word_411 = *((_OWORD *)record_byte_offset_59 - 4);
      *((_OWORD *)record_byte_offset_60 - 5) = loaded_word_410;
      loaded_word_412 = *((_OWORD *)record_byte_offset_59 - 3);
      *((_OWORD *)record_byte_offset_60 - 4) = loaded_word_411;
      loaded_word_413 = *((_OWORD *)record_byte_offset_59 - 2);
      *((_OWORD *)record_byte_offset_60 - 3) = loaded_word_412;
      loaded_word_414 = *((_OWORD *)record_byte_offset_59 - 1);
      *((_OWORD *)record_byte_offset_60 - 2) = loaded_word_413;
      *((_OWORD *)record_byte_offset_60 - 1) = loaded_word_414;
      --remaining_count_31;
    }
    while ( remaining_count_31 );
    remaining_count_32 = 3;
    loaded_word_415 = *((_OWORD *)record_byte_offset_59 + 1);
    *(_OWORD *)record_byte_offset_60 = *(_OWORD *)record_byte_offset_59;
    loaded_word_416 = *((_OWORD *)record_byte_offset_59 + 2);
    *((_OWORD *)record_byte_offset_60 + 1) = loaded_word_415;
    loaded_word_417 = *((_OWORD *)record_byte_offset_59 + 3);
    *((_OWORD *)record_byte_offset_60 + 2) = loaded_word_416;
    loaded_word_418 = *((_OWORD *)record_byte_offset_59 + 4);
    *((_OWORD *)record_byte_offset_60 + 3) = loaded_word_417;
    loaded_word_419 = *((_OWORD *)record_byte_offset_59 + 5);
    *((_OWORD *)record_byte_offset_60 + 4) = loaded_word_418;
    loaded_word_420 = *((_OWORD *)record_byte_offset_59 + 6);
    record_byte_offset_61 = &g_18439B560;
    *((_OWORD *)record_byte_offset_60 + 5) = loaded_word_419;
    *((_OWORD *)record_byte_offset_60 + 6) = loaded_word_420;
    record_byte_offset_62 = &g_184397760;
    do
    {
      record_byte_offset_62 += 32;
      loaded_word_421 = *(_OWORD *)record_byte_offset_61;
      loaded_word_422 = *((_OWORD *)record_byte_offset_61 + 1);
      record_byte_offset_61 += 32;
      *((_OWORD *)record_byte_offset_62 - 8) = loaded_word_421;
      loaded_word_423 = *((_OWORD *)record_byte_offset_61 - 6);
      *((_OWORD *)record_byte_offset_62 - 7) = loaded_word_422;
      loaded_word_424 = *((_OWORD *)record_byte_offset_61 - 5);
      *((_OWORD *)record_byte_offset_62 - 6) = loaded_word_423;
      loaded_word_425 = *((_OWORD *)record_byte_offset_61 - 4);
      *((_OWORD *)record_byte_offset_62 - 5) = loaded_word_424;
      loaded_word_426 = *((_OWORD *)record_byte_offset_61 - 3);
      *((_OWORD *)record_byte_offset_62 - 4) = loaded_word_425;
      loaded_word_427 = *((_OWORD *)record_byte_offset_61 - 2);
      *((_OWORD *)record_byte_offset_62 - 3) = loaded_word_426;
      loaded_word_428 = *((_OWORD *)record_byte_offset_61 - 1);
      *((_OWORD *)record_byte_offset_62 - 2) = loaded_word_427;
      *((_OWORD *)record_byte_offset_62 - 1) = loaded_word_428;
      --remaining_count_32;
    }
    while ( remaining_count_32 );
    loaded_word_429 = *((_OWORD *)record_byte_offset_61 + 1);
    *(_OWORD *)record_byte_offset_62 = *(_OWORD *)record_byte_offset_61;
    loaded_word_430 = *((_OWORD *)record_byte_offset_61 + 2);
    *((_OWORD *)record_byte_offset_62 + 1) = loaded_word_429;
    loaded_word_431 = *((_OWORD *)record_byte_offset_61 + 3);
    *((_OWORD *)record_byte_offset_62 + 2) = loaded_word_430;
    loaded_word_432 = *((_OWORD *)record_byte_offset_61 + 4);
    *((_OWORD *)record_byte_offset_62 + 3) = loaded_word_431;
    loaded_word_433 = *((_OWORD *)record_byte_offset_61 + 5);
    *((_OWORD *)record_byte_offset_62 + 4) = loaded_word_432;
    loaded_word_434 = *((_OWORD *)record_byte_offset_61 + 6);
    record_byte_offset_63 = &g_18439B750;
    *((_OWORD *)record_byte_offset_62 + 5) = loaded_word_433;
    *((_OWORD *)record_byte_offset_62 + 6) = loaded_word_434;
    record_byte_offset_64 = &g_184397950;
    do
    {
      record_byte_offset_64 += 32;
      loaded_word_435 = *(_OWORD *)record_byte_offset_63;
      loaded_word_436 = *((_OWORD *)record_byte_offset_63 + 1);
      record_byte_offset_63 += 32;
      *((_OWORD *)record_byte_offset_64 - 8) = loaded_word_435;
      loaded_word_437 = *((_OWORD *)record_byte_offset_63 - 6);
      *((_OWORD *)record_byte_offset_64 - 7) = loaded_word_436;
      loaded_word_438 = *((_OWORD *)record_byte_offset_63 - 5);
      *((_OWORD *)record_byte_offset_64 - 6) = loaded_word_437;
      loaded_word_439 = *((_OWORD *)record_byte_offset_63 - 4);
      *((_OWORD *)record_byte_offset_64 - 5) = loaded_word_438;
      loaded_word_440 = *((_OWORD *)record_byte_offset_63 - 3);
      *((_OWORD *)record_byte_offset_64 - 4) = loaded_word_439;
      loaded_word_441 = *((_OWORD *)record_byte_offset_63 - 2);
      *((_OWORD *)record_byte_offset_64 - 3) = loaded_word_440;
      loaded_word_442 = *((_OWORD *)record_byte_offset_63 - 1);
      *((_OWORD *)record_byte_offset_64 - 2) = loaded_word_441;
      *((_OWORD *)record_byte_offset_64 - 1) = loaded_word_442;
      --remaining_count;
    }
    while ( remaining_count );
    loaded_word_443 = *((_OWORD *)record_byte_offset_63 + 1);
    *(_OWORD *)record_byte_offset_64 = *(_OWORD *)record_byte_offset_63;
    loaded_word_444 = *((_OWORD *)record_byte_offset_63 + 2);
    *((_OWORD *)record_byte_offset_64 + 1) = loaded_word_443;
    loaded_word_445 = *((_OWORD *)record_byte_offset_63 + 3);
    *((_OWORD *)record_byte_offset_64 + 2) = loaded_word_444;
    loaded_word_446 = *((_OWORD *)record_byte_offset_63 + 4);
    *((_OWORD *)record_byte_offset_64 + 3) = loaded_word_445;
    loaded_word_447 = *((_OWORD *)record_byte_offset_63 + 5);
    *((_OWORD *)record_byte_offset_64 + 4) = loaded_word_446;
    loaded_word_448 = *((_OWORD *)record_byte_offset_63 + 6);
    *((_OWORD *)record_byte_offset_64 + 5) = loaded_word_447;
    *((_OWORD *)record_byte_offset_64 + 6) = loaded_word_448;
    sr_pad_update();
    iteration_count = 0;
    g_18439BB60 = sr_pad_count();
    if ( (int)g_18439BB60 > 0 )
    {
      running_total = 0;
      state_address = &g_184397C20;
      do
      {
        if ( iteration_count < 32 )
        {
          if ( (unsigned int)sr_pad_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149])) )
          {
            pad_instance_result = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
            if ( pad_instance_result > 31 )
              pad_instance_result = 31;
            pad_controller_attached_result = sr_pad_controller_attached(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105085]));
            iteration_count_2 = 0;
            scaled_index = 124LL * pad_instance_result;
            table_value = dword_140404A6C[scaled_index + 285101115];
            if ( pad_controller_attached_result )
            {
              if ( table_value > 0 )
              {
                buffer_cursor = &dword_140404A6C[scaled_index + 285101116];
                do
                {
                  ++buffer_cursor;
                  ++iteration_count_2;
                  *((float *)buffer_cursor - 1) = (float)(__int16)sr_pad_controller_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105085]),iteration_count_2-1) * 0.000030517578;
                }
                while ( iteration_count_2 < (int)dword_140404A6C[scaled_index + 285101115] );
              }
              iteration_count_3 = 0;
              if ( (int)dword_140404A6C[scaled_index + 285101132] > 0 )
              {
                buffer_cursor_2 = &dword_140404A6C[scaled_index + 285101133];
                do
                {
                  ++iteration_count_3;
                  *buffer_cursor_2++ = (unsigned __int8)sr_pad_controller_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105085]),iteration_count_3-1);
                }
                while ( iteration_count_3 < (int)dword_140404A6C[scaled_index + 285101132] );
              }
            }
            else
            {
              if ( table_value > 0 )
              {
                buffer_cursor_3 = &dword_140404A6C[scaled_index + 285101116];
                do
                {
                  ++buffer_cursor_3;
                  ++iteration_count_2;
                  *((float *)buffer_cursor_3 - 1) = (float)(__int16)sr_pad_axis(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]),iteration_count_2-1) * 0.000030517578;
                }
                while ( iteration_count_2 < (int)dword_140404A6C[scaled_index + 285101115] );
              }
              iteration_count_4 = 0;
              if ( (int)dword_140404A6C[scaled_index + 285101132] > 0 )
              {
                buffer_cursor_4 = &dword_140404A6C[scaled_index + 285101133];
                do
                {
                  ++iteration_count_4;
                  *buffer_cursor_4++ = (unsigned __int8)sr_pad_button(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]),iteration_count_4-1);
                }
                while ( iteration_count_4 < (int)dword_140404A6C[scaled_index + 285101132] );
              }
              iteration_count_5 = 0;
              if ( (int)*state_address > 0 )
              {
                record_byte_offset_65 = state_address + 2;
                running_total_2 = state_address + 3;
                do
                {
                  pad_hat_result = (unsigned __int8)sr_pad_hat(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]),iteration_count_5);
                  memset(record_byte_offset_65 - 1,0,4 * sizeof(*record_byte_offset_65)); /* native two qword clears */
                  if ( ((pad_hat_result - 1) & 0xFFFFFFF5) == 0 && pad_hat_result != 11 )
                    *(record_byte_offset_65 - 1) = 1;
                  if ( ((pad_hat_result - 4) & 0xFFFFFFF5) == 0 && pad_hat_result != 14 )
                    *record_byte_offset_65 = 1;
                  if ( ((pad_hat_result - 8) & 0xFFFFFFFA) == 0 && pad_hat_result != 13 )
                    record_byte_offset_65[1] = 1;
                  if ( ((pad_hat_result - 2) & 0xFFFFFFFA) == 0 && pad_hat_result != 7 )
                    record_byte_offset_65[2] = 1;
                  ++iteration_count_5;
                  running_total_2 += 2;
                  record_byte_offset_65 += 4;
                }
                while ( iteration_count_5 < (int)*state_address );
              }
            }
          }
          else if ( (unsigned int)sr_pad_is_controller(iteration_count) )
          {
            pad_controller_open_result = (__int64)(uintptr_t)sr_pad_controller_open(iteration_count);
            *(_QWORD *)&dword_140404A6C[running_total + 285105085] = pad_controller_open_result;
            if ( pad_controller_open_result )
            {
              *(_QWORD *)&dword_140404A6C[running_total + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105085]));
              pad_instance_result_2 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
              if ( pad_instance_result_2 > 31 )
                pad_instance_result_2 = 31;
              pad_name_result = (char *)sr_pad_name(iteration_count);
              scaled_index_2 = 124LL * pad_instance_result_2;
              state_address_2 = (char *)&g_184397B40 + scaled_index_2 * 4 - (_QWORD)pad_name_result;
              do
              {
                input_byte = *pad_name_result;
                pad_name_result[(_QWORD)state_address_2 + 356] = *pad_name_result;
                ++pad_name_result;
              }
              while ( input_byte );
              dword_140404A6C[scaled_index_2 + 285101115] = 6;
              dword_140404A6C[scaled_index_2 + 285101132] = 16;
              dword_140404A6C[scaled_index_2 + 285101165] = 0;
              dword_140404A6C[scaled_index_2 + 285101109] = 1;
            }
          }
          else
          {
            pad_open_result = (__int64)(uintptr_t)sr_pad_open(iteration_count);
            *(_QWORD *)&dword_140404A6C[running_total + 285105149] = pad_open_result;
            if ( pad_open_result )
            {
              pad_instance_result_3 = sr_pad_instance(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
              if ( pad_instance_result_3 > 31 )
                pad_instance_result_3 = 31;
              pad_name_result_2 = (char *)sr_pad_name(iteration_count);
              scaled_index_3 = 124LL * pad_instance_result_3;
              state_address_3 = (char *)&g_184397B40 + scaled_index_3 * 4 - (_QWORD)pad_name_result_2;
              do
              {
                input_byte_2 = *pad_name_result_2;
                pad_name_result_2[(_QWORD)state_address_3 + 356] = *pad_name_result_2;
                ++pad_name_result_2;
              }
              while ( input_byte_2 );
              dword_140404A6C[scaled_index_3 + 285101115] = sr_pad_axes(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
              dword_140404A6C[scaled_index_3 + 285101132] = sr_pad_buttons(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
              dword_140404A6C[scaled_index_3 + 285101165] = sr_pad_hats(((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[running_total + 285105149]));
              dword_140404A6C[scaled_index_3 + 285101109] = 1;
            }
          }
        }
        ++iteration_count;
        state_address += 124;
        running_total += 2;
      }
      while ( iteration_count < (int)g_18439BB60 );
    }
  }
}

//----- (0000000140056980) ----------------------------------------------------
__int64 sub_140056980()
{
  int iteration_count;
  unsigned int float_word;
  signed int state_word;
  unsigned int element_index;
  unsigned int *record_byte_offset;
  __int64 state_address;
  char *text_cursor;
  char input_byte;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int table_value;
  int scaled_index_3;
  int table_value_2;
  int scaled_index_4;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 float_word_2;
  __int64 running_total;
  __int64 remaining_count;
  unsigned int *state_address_2;
  unsigned int cached_game_type;
  int state_word_2;
  unsigned int *state_address_3;
  __int64 remaining_count_2;
  unsigned int state_word_3;
  signed int scaled_index_5;
  int table_value_3;
  unsigned int loaded_word;
  unsigned int state_word_4;
  __m128i converted_vector;
  __m128i converted_vector_2;
  unsigned int state_word_5;
  float converted_vector_3;
  unsigned int state_word_6;
  signed int *state_address_4;
  __int64 remaining_count_3;
  unsigned int *state_address_5;
  signed int table_value_4;
  signed int loaded_word_2;
  signed int scaled_index_6;
  signed int scaled_index_7;
  unsigned int *buffer_cursor;
  signed int state_word_7;
  signed int element_index_2;
  int state_word_8;
  signed int iteration_count_2;
       char *right_text;
  float state_scalar;
  int iteration_count_3;
  int iteration_count_4;
  int iteration_count_5;
  unsigned int *state_address_6;
  unsigned int *state_address_7;
  int scaled_index_8;
  int table_value_5;
  int table_value_6;
  int scaled_index_9;
  int scaled_index_10;
  unsigned int scaled_index_11;
  __m128i converted_vector_4;
  int scaled_index_12;
  int i;
  __int64 running_total_2;
  unsigned int *state_address_8;
  int saved_state_word;
  unsigned int *saved_record_byte_offset;
  _DWORD *buffer_cursor_2;
  int iteration_count_6;
  __int64 iteration_count_7;
  int iteration_count_8;
  unsigned int scaled_index_13;
  __int64 integer_sum;
  int scaled_index_14;
  bool condition_flag;
  bool condition_flag_2;
  bool condition_flag_3;
  bool condition_flag_4;
  bool condition_flag_5;
  bool condition_flag_6;
  int scaled_index_15;
  unsigned int scaled_index_16;
  int scaled_index_17;
  BOOL call_result;
  int call_result_2;
  int cached_call_result;
  int cached_call_result_2;
  int call_result_3;
  int lookup_index;
  int integer_sum_2;
  unsigned int *state_address_9;
       char *left_text;
  int comparison_result;
  int comparison_result_2;
  int selection_code;
  signed int lookup_index_2;
  __int64 element_index_3;
  unsigned __int8 table_value_7;
  int comparison_result_3;
  bool comparison_result_4;
  __int64 element_index_4;
  char table_value_8;
  bool hiword_result;
  __int64 element_index_5;
  char table_value_9;
  bool comparison_result_5;
  __int64 element_index_6;
  char table_value_10;
  bool comparison_result_6;
  __int64 element_index_7;
  char table_value_11;
  bool comparison_result_7;
  __int64 element_index_8;
  char table_value_12;
  bool comparison_result_8;
  __int64 element_index_9;
  char table_value_13;
  bool comparison_result_9;
  __int64 element_index_10;
  char table_value_14;
  bool comparison_result_10;
  __int64 element_index_11;
  char table_value_15;
  bool comparison_result_11;
  __int64 element_index_12;
  char table_value_16;
  bool comparison_result_12;
  int state_word_9;
  unsigned int state_word_10;
  int state_word_11;
  unsigned int state_word_12;
  unsigned int saved_iteration_count;
  __int64 lookup_index_3;
  int scaled_index_18;
  int scaled_index_19;
  unsigned int loaded_word_3;
  float state_address_10;
  int table_value_17;
  float weighted_sum;
  float weighted_sum_2;
  float state_scalar_2;
  float state_scalar_3;
  float state_scalar_4;
  float state_scalar_5;
  float scaled_value;
  unsigned int saved_state_word_2;
  int iteration_count_9;
  float scaled_value_2;
  float scaled_value_3;
  unsigned int saved_state_word_3;
  unsigned int integer_difference;
  float product_difference;
  float product_difference_2;
  __int64 element_index_13;
  char masked_bits;
  int j;
  int k;
  unsigned int *state_address_11;
  int iteration_count_10;
  unsigned int *buffer_cursor_3;
  int iteration_count_11;
  __int64 remaining_count_4;
  int iteration_count_12;
  __int64 remaining_count_5;
  __int64 scaled_index_20;
  unsigned int masked_bits_2;
  unsigned int masked_bits_3;
  __int64 running_total_3;
  __int64 remaining_count_6;
  signed int iteration_count_13;
  __int64 running_total_4;
  unsigned __int64 running_total_5;
  __int64 m;
  __int64 table_value_18;
  int *buffer_cursor_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140056980[176];
#define scratch_buffer (*(_QWORD (*)[5])(void *)(sr_frame_140056980 + 0)) /* [rsp+0h] */
#define state_word_13 (*(unsigned int (*))(void *)(sr_frame_140056980 + 80)) /* [rsp+50h] */
#define iteration_count_14 (*(int (*))(void *)(sr_frame_140056980 + 84)) /* [rsp+54h] */
#define saved_iteration_count_2 (*(int (*))(void *)(sr_frame_140056980 + 88)) /* [rsp+58h] */
#define saved_iteration_count_3 (*(int (*))(void *)(sr_frame_140056980 + 92)) /* [rsp+5Ch] */
#define cached_scaled_index (*(int (*))(void *)(sr_frame_140056980 + 96)) /* [rsp+60h] */
#define record_byte_offset_2 (*(unsigned int * (*))(void *)(sr_frame_140056980 + 104)) /* [rsp+68h] */
#define chdir_result (*(int (*))(void *)(sr_frame_140056980 + 112)) /* [rsp+70h] */
#define chdir_result_2 (*(int (*))(void *)(sr_frame_140056980 + 116)) /* [rsp+74h] */
#define remaining_count_7 (*(__int64 (*))(void *)(sr_frame_140056980 + 120)) /* [rsp+78h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140056980 + 128)) /* [rsp+80h] */
#define saved_running_total (*(__int64 (*))(void *)(sr_frame_140056980 + 136)) /* [rsp+88h] */
#define saved_iteration_count_4 (*(__int64 (*))(void *)(sr_frame_140056980 + 144)) /* [rsp+90h] */
#define selection_code_2 (*(int (*))(void *)(sr_frame_140056980 + 152)) /* [rsp+98h] */
#define selection_code_3 (*(int (*))(void *)(sr_frame_140056980 + 156)) /* [rsp+9Ch] */
#define selection_code_4 (*(int (*))(void *)(sr_frame_140056980 + 160)) /* [rsp+A0h] */
#define selection_code_5 (*(int (*))(void *)(sr_frame_140056980 + 164)) /* [rsp+A4h] */
#define unused_frame_slot_168 (*(__int64 (*))(void *)(sr_frame_140056980 + 168)) /* [rsp+A8h] */

  crt_memset((void *)(uintptr_t)(&g_17CE6F5F8), 0, 0x4000000u);
  chdir_result = crt_chdir("data");
  chdir_result_2 = crt_chdir((unsigned int *)&g_183EBFAB0);
  sub_1401979D0(0, 0);
  asset_load_city_sbc_candidate();
  _mm_storeu_si128((__m128i *)(void *)&g_175FD1444, _mm_load_si128((const __m128i *)&xmmword_1402799A0));
  g_175FD1454 = -65536;
  g_1873DE440 = 1102577664;
  g_175FD1458 = -65536;
  sub_140026E70();
  sub_140010110();
  srand(0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC404, "concrete2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC408, "concrete2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  iteration_count = 0;
  sub_1400EDED0(resting_texture_1, "asphalt2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBC418, "asphalt2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  float_word = g_1863AE154;
  state_word = g_1A4CFF8D0;
  element_index = 0;
  g_1A4CFF560 = g_1A4CFF8D0;
  g_1A4CFF8D4 = 0;
  if ( g_1863AE154 )
  {
    record_byte_offset = &g_1863AE158;
    do
    {
      if ( *record_byte_offset == 1482293252 )
      {
        state_address = (intptr_t)&dword_140404A6C[16LL * (int)element_index + 293512638];
        text_cursor = (char *)state_address;
        do
        {
          input_byte = *text_cursor;
          text_cursor[(_QWORD)&g_1A4CFFCF8 + 184LL * state_word - state_address] = *text_cursor;
          ++text_cursor;
        }
        while ( input_byte );
        sub_1401978F0(0, state_address, 1482293252);
        sub_140197630(g_1A4CFF560, *(__int64 *)&g_1863AE140, 0);
        scaled_index = 46LL * (int)g_1A4CFF560;
        scaled_index_2 = 2LL * (int)g_1A4CFF560;
        table_value = dword_140404A6C[scaled_index + 421784755];
        scaled_index_3 = dword_140404A6C[4 * g_1A4CFF560 + 283827814];
        if ( table_value <= 0 )
          sub_140138590(scaled_index_3, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
        else
          sub_1400EE0A0(scaled_index_3, table_value, *(_QWORD *)&dword_140404A6C[scaled_index + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
        table_value_2 = dword_140404A6C[scaled_index + 421784759];
        scaled_index_4 = dword_140404A6C[2 * scaled_index_2 + 283827815];
        if ( table_value_2 <= 0 )
          sub_140138590(scaled_index_4, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
        else
          sub_1400EE0A0(scaled_index_4, table_value_2, *(_QWORD *)&dword_140404A6C[scaled_index + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
        dword_140404A6C[g_1A4CFF8D4 + 421784475] = g_1A4CFF560;
        float_word = g_1863AE154;
        state_word = g_1A4CFF560 + 1;
        ++g_1A4CFF8D4;
        ++g_1A4CFF560;
      }
      ++element_index;
      record_byte_offset += 16;
    }
    while ( element_index < float_word );
  }
  sub_1400ED9D0(g_183EBF11C, "map.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400C2DB0(unrecovered_register_value_2, unrecovered_register_value, float_word_2);
  sub_140056560();
  running_total = 0;
  do
  {
    remaining_count = 1024;
    do
    {
      *(_WORD *)(running_total + g_181290050) = -1;
      running_total += 2;
      --remaining_count;
    }
    while ( remaining_count );
  }
  while ( running_total < 0x200000 );
  g_1A4CF0940 = 0;
  remaining_count_7 = 0;
  unused_written_slot = 0;
  sub_14004DB20(0, (float *)&remaining_count_7, 0x40u, 8, 0x40u, 4.0);
  state_address_2 = &g_17CE4B61C;
  do
  {
    *(state_address_2 - 9) = 0;
    *state_address_2 = 0;
    state_address_2[9] = 0;
    state_address_2[18] = 0;
    state_address_2[27] = 0;
    state_address_2[36] = 0;
    state_address_2[45] = 0;
    state_address_2[54] = 0;
    state_address_2[63] = 0;
    state_address_2[72] = 0;
    state_address_2[81] = 0;
    state_address_2[90] = 0;
    state_address_2[99] = 0;
    state_address_2[108] = 0;
    state_address_2[117] = 0;
    state_address_2[126] = 0;
    state_address_2[135] = 0;
    state_address_2[144] = 0;
    state_address_2[153] = 0;
    state_address_2[162] = 0;
    state_address_2[171] = 0;
    state_address_2[180] = 0;
    state_address_2[189] = 0;
    state_address_2[198] = 0;
    state_address_2[207] = 0;
    state_address_2[216] = 0;
    state_address_2[225] = 0;
    state_address_2[234] = 0;
    state_address_2[243] = 0;
    state_address_2[252] = 0;
    state_address_2[261] = 0;
    state_address_2[270] = 0;
    state_address_2[279] = 0;
    state_address_2[288] = 0;
    state_address_2[297] = 0;
    state_address_2[306] = 0;
    state_address_2[315] = 0;
    state_address_2[324] = 0;
    state_address_2[333] = 0;
    state_address_2[342] = 0;
    state_address_2[351] = 0;
    state_address_2[360] = 0;
    state_address_2[369] = 0;
    state_address_2[378] = 0;
    state_address_2[387] = 0;
    state_address_2[396] = 0;
    state_address_2[405] = 0;
    state_address_2[414] = 0;
    state_address_2[423] = 0;
    state_address_2[432] = 0;
    state_address_2[441] = 0;
    state_address_2[450] = 0;
    state_address_2[459] = 0;
    state_address_2[468] = 0;
    state_address_2[477] = 0;
    state_address_2[486] = 0;
    state_address_2[495] = 0;
    state_address_2[504] = 0;
    state_address_2[513] = 0;
    state_address_2[522] = 0;
    state_address_2[531] = 0;
    state_address_2[540] = 0;
    state_address_2[549] = 0;
    state_address_2[558] = 0;
    state_address_2 += 576;
  }
  while ( (__int64)state_address_2 < (__int64)&g_17CE6F61C );
  cached_game_type = game_type;
  state_word_2 = 0;
  g_175FD145C = 0;
  g_175FF3464 = 0;
  g_1760B9468 = 0;
  g_1760BF46C = 0;
  g_1760C5470 = 0;
  g_183EC4918 = 0;
  g_183ECA4DC = 0;
  g_183ED00A0 = 0;
  g_183ED5C64 = 0;
  g_183EDB828 = 0;
  g_183EE13EC = 0;
  g_183EE6FB0 = 0;
  g_183EECB74 = 0;
  item_block_region_count = 0;
  g_16B2AAEE4 = 0;
  if ( game_type != 1 )
  {
    if ( (int)g_16E486878 > 0 )
    {
      state_address_3 = &g_16E486880;
      remaining_count_2 = g_16E486878;
      do
      {
        state_word_3 = g_175FD1444;
        scaled_index_5 = *(state_address_3 - 1);
        table_value_3 = state_address_3[1];
        loaded_word = *state_address_3;
        state_address_3 += 3;
        if ( (int)g_175FD1444 > scaled_index_5 )
          state_word_3 = scaled_index_5;
        g_175FD1444 = state_word_3;
        state_word_4 = g_175FD1450;
        converted_vector = _mm_cvtsi32_si128(scaled_index_5);
        if ( (int)g_175FD1450 < scaled_index_5 )
          state_word_4 = scaled_index_5;
        converted_vector_2 = _mm_cvtsi32_si128(loaded_word);
        g_175FD1450 = state_word_4;
        state_word_5 = g_175FD144C;
        converted_vector_3 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0];
        if ( (int)g_175FD144C > table_value_3 )
          state_word_5 = table_value_3;
        g_175FD144C = state_word_5;
        state_word_6 = g_175FD1458;
        if ( (int)g_175FD1458 < table_value_3 )
          state_word_6 = table_value_3;
        g_175FD1458 = state_word_6;
        dword_140404A6C[34 * state_word_2 + 225391230] = scaled_index_5;
        dword_140404A6C[34 * g_175FD145C + 225391231] = loaded_word - 1;
        dword_140404A6C[34 * g_175FD145C + 225391232] = table_value_3;
        dword_140404A6C[34 * g_175FD145C + 225391236] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391237] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391238] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391239] = -1;
        dword_140404A6C[34 * g_175FD145C + 225391240] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391241] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391242] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391243] = 0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391233] = converted_vector_3 * 4.0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391234] = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_2), f32)[0] * 4.0;
        *(float *)&dword_140404A6C[34 * g_175FD145C + 225391235] = (float)table_value_3 * 4.0;
        dword_140404A6C[34 * g_175FD145C + 225391244] = 0;
        dword_140404A6C[34 * g_175FD145C + 225391245] = 0;
        state_word_2 = ++g_175FD145C;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
    }
    if ( (int)g_16E48987C > 0 )
    {
      state_address_4 = (signed int *)&g_16E48988C;
      remaining_count_3 = g_16E48987C;
      state_address_5 = &g_16E489894;
      do
      {
        table_value_4 = state_address_4[1];
        loaded_word_2 = *state_address_4;
        scaled_index_6 = *(state_address_4 - 2);
        scaled_index_7 = *(state_address_4 - 3);
        scratch_buffer[4] = (uint64)(uintptr_t)(state_address_5);
        sub_1400038E0(scaled_index_7, scaled_index_6, loaded_word_2, table_value_4);
        state_address_5 += 13;
        state_address_4 += 13;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
    }
    g_175FD1460 = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628800] = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628801] = 0;
    dword_140404A6C[12 * g_1760B9468 + 225628802] = 32;
    dword_140404A6C[12 * g_1760B9468 + 225628804] = 32;
    dword_140404A6C[12 * g_1760B9468 + 225628803] = 6;
    dword_140404A6C[12 * g_1760B9468 + 225628805] = 24;
    dword_140404A6C[12 * g_1760B9468++ + 225628806] = 24;
    state_word_2 = g_175FD145C;
  }
  selection_code_2 = 65537;
  selection_code_3 = 65537;
  selection_code_4 = 65537;
  selection_code_5 = 65537;
  if ( cached_game_type == 1 )
  {
    asset_load_building_sbb_candidate((char *)&g_1AD2C94A0, (     char *)&g_1ABD4ACA0, 0);
    sub_140028BD0();
    sub_140027D00();
    sub_140027D00();
    sub_140027D00();
    sub_140029120();
    sub_140023AC0(
      0,
      36 - g_1AD2C94EC,
      6 - g_1AD2C94F0,
      36 - g_1AD2C94F4,
      g_1AE1C94F8,
      g_1AE1C94FC,
      g_1AE1C9500,
      0,
      0);
    state_word_2 = g_175FD145C;
    cached_game_type = game_type;
  }
  buffer_cursor = &g_175EFA090;
  crt_memset((void *)(uintptr_t)(&g_175EFA090), 0, 0x1000u);
  state_word_7 = g_175EEA08C;
  element_index_2 = 0;
  if ( (int)g_175EEA08C > 0 )
  {
    state_word_8 = g_181676080;
    do
    {
      iteration_count_2 = 0;
      if ( state_word_8 > 0 )
      {
        right_text = (     char *)&g_1812C2080;
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)element_index_2 + 225154441], right_text) )
            *buffer_cursor = iteration_count_2;
          ++iteration_count_2;
          right_text += 3792;
        }
        while ( iteration_count_2 < state_word_8 );
        state_word_7 = g_175EEA08C;
      }
      ++element_index_2;
      ++buffer_cursor;
    }
    while ( element_index_2 < state_word_7 );
  }
  state_scalar = 1.0;
  if ( cached_game_type != 1 )
  {
    iteration_count_3 = 0;
    if ( (int)g_175FF3464 > 0 )
    {
      do
        sub_140020580(iteration_count_3++);
      while ( iteration_count_3 < (int)g_175FF3464 );
      state_word_2 = g_175FD145C;
    }
    iteration_count_4 = 0;
    if ( state_word_2 > 0 )
    {
      do
      {
        sub_140020130(iteration_count_4);
        state_word_2 = g_175FD145C;
        ++iteration_count_4;
      }
      while ( iteration_count_4 < (int)g_175FD145C );
    }
    iteration_count_5 = 0;
    if ( state_word_2 > 0 )
    {
      state_address_6 = &g_175FD14D4;
      state_address_7 = &g_175FD1490;
      do
      {
        scaled_index_8 = *(state_address_7 - 1);
        if ( scaled_index_8 > 0 )
          *(state_address_7 - 1) = scaled_index_8 + 1;
        if ( (int)*state_address_7 > 0 )
          ++*state_address_7;
        table_value_5 = state_address_7[1];
        if ( table_value_5 > 0 )
          state_address_7[1] = table_value_5 + 1;
        table_value_6 = state_address_7[2];
        if ( table_value_6 > 0 )
          state_address_7[2] = table_value_6 + 1;
        ++iteration_count_5;
        scaled_index_9 = *(state_address_6 - 28) - *(state_address_6 - 16);
        state_address_7 += 34;
        state_address_6[1] = 0;
        *(float *)state_address_6 = (float)scaled_index_9 * 4.0;
        scaled_index_10 = *(state_address_6 - 18);
        *((float *)state_address_6 + 2) = (float)(int)(*(state_address_6 - 26) - *(state_address_6 - 15)) * 4.0;
        scaled_index_11 = *(state_address_6 - 28) + scaled_index_10;
        state_address_6[4] = 0;
        converted_vector_4 = _mm_cvtsi32_si128(scaled_index_11);
        scaled_index_12 = *(state_address_6 - 17);
        *((float *)state_address_6 + 3) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_4), f32)[0] * 4.0;
        *((float *)state_address_6 + 5) = (float)(int)(*(state_address_6 - 26) + scaled_index_12) * 4.0;
        state_address_6 += 34;
      }
      while ( iteration_count_5 < (int)g_175FD145C );
    }
    for ( i = 0; i < (int)g_175FF3464; ++i )
      sub_140139740(i);
    sub_140009340();
    iteration_count_14 = 0;
    if ( (int)g_1726DA088 > 0 )
    {
      running_total_2 = 0;
      saved_running_total = 0;
      state_address_8 = &g_1726DA098;
      do
      {
        saved_state_word = 0;
        state_word_13 = 0;
        saved_record_byte_offset = nullptr;
        buffer_cursor_2 = state_address_8 + 3073;
        do
        {
          iteration_count_6 = 0;
          saved_iteration_count_2 = 0;
          record_byte_offset_2 = saved_record_byte_offset;
          remaining_count_7 = 8;
          do
          {
            iteration_count_7 = 0;
            saved_iteration_count_3 = 0;
            saved_iteration_count_4 = 0;
            iteration_count_8 = 0;
            do
            {
              scaled_index_13 = *(buffer_cursor_2 - 3072);
              if ( scaled_index_13 )
              {
                integer_sum = (__int64)saved_record_byte_offset + iteration_count_7 + running_total_2;
                scaled_index_14 = *(state_address_8 - 3);
                integer_sum *= 2;
                hiword_result = HIWORD(dword_140404A6C[2 * integer_sum + 210458508]) == 0;
                LOWORD(selection_code_2) = LOWORD(dword_140404A6C[2 * integer_sum + 210458508]) != 0;
                condition_flag = !hiword_result;
                hiword_result = LOWORD(dword_140404A6C[2 * integer_sum + 210458509]) == 0;
                HIWORD(selection_code_2) = condition_flag;
                condition_flag_2 = !hiword_result;
                hiword_result = HIWORD(dword_140404A6C[2 * integer_sum + 210458509]) == 0;
                LOWORD(selection_code_3) = condition_flag_2;
                condition_flag_3 = !hiword_result;
                hiword_result = LOWORD(dword_140404A6C[2 * integer_sum + 210458510]) == 0;
                HIWORD(selection_code_3) = condition_flag_3;
                condition_flag_4 = !hiword_result;
                hiword_result = HIWORD(dword_140404A6C[2 * integer_sum + 210458510]) == 0;
                LOWORD(selection_code_4) = condition_flag_4;
                condition_flag_5 = !hiword_result;
                hiword_result = LOWORD(dword_140404A6C[2 * integer_sum + 210458511]) == 0;
                HIWORD(selection_code_4) = condition_flag_5;
                condition_flag_6 = !hiword_result;
                hiword_result = HIWORD(dword_140404A6C[2 * integer_sum + 210458511]) == 0;
                LOWORD(selection_code_5) = condition_flag_6;
                HIWORD(selection_code_5) = !hiword_result;
                scaled_index_15 = iteration_count_6 + 8 * *state_address_8;
                scaled_index_16 = saved_state_word + 8 * *(state_address_8 - 1);
                scaled_index_17 = iteration_count_8 + 8 * *(state_address_8 - 2);
                cached_scaled_index = scaled_index_17;
                if ( scaled_index_13 == (g_14500A70C | 0x80000000) )
                {
                  call_result = sub_1400D5950(scaled_index_14, scaled_index_17, scaled_index_16, scaled_index_15 - 1) == 0;
                  call_result_2 = sub_1400D5950(scaled_index_14, scaled_index_17 + 1, scaled_index_16, scaled_index_15);
                  cached_call_result = call_result | 2;
                  if ( call_result_2 )
                    cached_call_result = call_result;
                  cached_call_result_2 = cached_call_result | 4;
                  if ( (unsigned int)sub_1400D5950(scaled_index_14, cached_scaled_index, scaled_index_16, scaled_index_15 + 1) )
                    cached_call_result_2 = cached_call_result;
                  call_result_3 = sub_1400D5950(scaled_index_14, cached_scaled_index - 1, scaled_index_16, scaled_index_15);
                  lookup_index = cached_call_result_2 | 8;
                  if ( call_result_3 )
                    lookup_index = cached_call_result_2;
                  sub_14000F830(scaled_index_14, cached_scaled_index, scaled_index_16, scaled_index_15, dword_140404A6C[lookup_index + 19928872] | 0x80000000, &selection_code_2);
                  iteration_count_7 = saved_iteration_count_4;
                }
                else
                {
                  sub_14000F830(scaled_index_14, scaled_index_17, scaled_index_16, scaled_index_15, scaled_index_13, &selection_code_2);
                }
                running_total_2 = saved_running_total;
                saved_record_byte_offset = record_byte_offset_2;
                saved_state_word = state_word_13;
                iteration_count_6 = saved_iteration_count_2;
                iteration_count_8 = saved_iteration_count_3;
              }
              if ( *buffer_cursor_2 )
                sub_140016F60(
                  *(state_address_8 - 3),
                  iteration_count_8 + 8 * *(state_address_8 - 2),
                  saved_state_word + 8 * *(state_address_8 - 1),
                  iteration_count_6 + 8 * *state_address_8,
                  *buffer_cursor_2 & 0xFFFF0000 | dword_140404A6C[(*buffer_cursor_2 & 0x3FF) + 225170825]);
              saved_state_word = state_word_13;
              ++iteration_count_8;
              ++iteration_count_7;
              saved_iteration_count_3 = iteration_count_8;
              ++buffer_cursor_2;
              saved_iteration_count_4 = iteration_count_7;
            }
            while ( iteration_count_7 < 8 );
            ++iteration_count_6;
            saved_record_byte_offset += 2;
            hiword_result = remaining_count_7-- == 1;
            saved_iteration_count_2 = iteration_count_6;
            record_byte_offset_2 = saved_record_byte_offset;
          }
          while ( !hiword_result );
          saved_state_word = state_word_13 + 1;
          state_word_13 = saved_state_word;
        }
        while ( saved_state_word < 8 );
        running_total_2 += 897;
        saved_running_total = running_total_2;
        state_address_8 += 3588;
        ++iteration_count_14;
      }
      while ( iteration_count_14 < (int)g_1726DA088 );
    }
    sub_1400E6960();
    integer_sum_2 = 0;
    cached_scaled_index = 0;
    if ( (int)g_175EFB090 > 0 )
    {
      state_address_9 = &g_175EFB0E0;
      record_byte_offset_2 = &g_175EFB0E0;
      do
      {
        left_text = (     char *)&dword_140404A6C[24 * integer_sum_2 + 225171851];
        sub_1401978F0(0, (__int64)left_text, 1482293250);
        sub_140196D60((char *)&g_1AD2C94A0, *(FILE **)&g_1863AE140, 0);
        sub_140028BD0();
        if ( g_183F7CB60 )
        {
          comparison_result = strcmp_sr(left_text, "bc-base01");
          comparison_result_2 = strcmp_sr(left_text, "cornerstore");
          selection_code = 13;
          if ( comparison_result_2 )
            selection_code = 9;
          lookup_index_2 = 0;
          if ( comparison_result )
            lookup_index_2 = selection_code;
          if ( !strcmp_sr(left_text, "bc-base02") )
            lookup_index_2 = 1;
          saved_iteration_count_2 = lookup_index_2;
          if ( !strcmp_sr(left_text, "bc-base03") )
          {
            lookup_index_2 = 2;
            saved_iteration_count_2 = 2;
          }
        }
        else
        {
          element_index_3 = 0;
          while ( 1 )
          {
            table_value_7 = left_text[element_index_3++];
            if ( table_value_7 != sr_mem_140276314[element_index_3 - 1] )
              break;
            if ( element_index_3 == 7 )
            {
              comparison_result_3 = 0;
              goto LABEL_104;
            }
          }
          comparison_result_3 = table_value_7 < (unsigned __int8)sr_mem_140276314[element_index_3 - 1] ? -1 : 1;
LABEL_104:
          comparison_result_4 = comparison_result_3 != 0;
          element_index_4 = 0;
          lookup_index_2 = comparison_result_4 ? 9 : 0;
          while ( 1 )
          {
            table_value_8 = left_text[element_index_4++];
            hiword_result = table_value_8 == sr_mem_14027631c[element_index_4 - 1];
            if ( table_value_8 != sr_mem_14027631c[element_index_4 - 1] )
              break;
            if ( element_index_4 == 7 )
            {
              hiword_result = table_value_8 == sr_mem_14027631c[6];
              break;
            }
          }
          if ( hiword_result )
            lookup_index_2 = 1;
          element_index_5 = 0;
          while ( 1 )
          {
            table_value_9 = left_text[element_index_5++];
            comparison_result_5 = table_value_9 == sr_mem_140276324[element_index_5 - 1];
            if ( table_value_9 != sr_mem_140276324[element_index_5 - 1] )
              break;
            if ( element_index_5 == 7 )
            {
              comparison_result_5 = table_value_9 == sr_mem_140276324[6];
              break;
            }
          }
          if ( comparison_result_5 )
            lookup_index_2 = 2;
          element_index_6 = 0;
          while ( 1 )
          {
            table_value_10 = left_text[element_index_6++];
            comparison_result_6 = table_value_10 == sr_mem_14027632c[element_index_6 - 1];
            if ( table_value_10 != sr_mem_14027632c[element_index_6 - 1] )
              break;
            if ( element_index_6 == 7 )
            {
              comparison_result_6 = table_value_10 == sr_mem_14027632c[6];
              break;
            }
          }
          if ( comparison_result_6 )
            lookup_index_2 = 3;
          element_index_7 = 0;
          while ( 1 )
          {
            table_value_11 = left_text[element_index_7++];
            comparison_result_7 = table_value_11 == sr_mem_140276334[element_index_7 - 1];
            if ( table_value_11 != sr_mem_140276334[element_index_7 - 1] )
              break;
            if ( element_index_7 == 7 )
            {
              comparison_result_7 = table_value_11 == sr_mem_140276334[6];
              break;
            }
          }
          if ( comparison_result_7 )
            lookup_index_2 = 4;
          element_index_8 = 0;
          while ( 1 )
          {
            table_value_12 = left_text[element_index_8++];
            comparison_result_8 = table_value_12 == sr_mem_14027633c[element_index_8 - 1];
            if ( table_value_12 != sr_mem_14027633c[element_index_8 - 1] )
              break;
            if ( element_index_8 == 7 )
            {
              comparison_result_8 = table_value_12 == sr_mem_14027633c[6];
              break;
            }
          }
          if ( comparison_result_8 )
            lookup_index_2 = 5;
          if ( !strcmp_sr(left_text, "cardealer") )
            lookup_index_2 = 11;
          if ( !strcmp_sr(left_text, "gunstore") )
            lookup_index_2 = 14;
          element_index_9 = 0;
          while ( 1 )
          {
            table_value_13 = left_text[element_index_9++];
            comparison_result_9 = table_value_13 == sr_mem_1402739f8[element_index_9 - 1];
            if ( table_value_13 != sr_mem_1402739f8[element_index_9 - 1] )
              break;
            if ( element_index_9 == 7 )
            {
              comparison_result_9 = table_value_13 == sr_mem_1402739f8[6];
              break;
            }
          }
          if ( comparison_result_9 )
            lookup_index_2 = 16;
          element_index_10 = 0;
          while ( 1 )
          {
            table_value_14 = left_text[element_index_10++];
            comparison_result_10 = table_value_14 == sr_mem_140276364[element_index_10 - 1];
            if ( table_value_14 != sr_mem_140276364[element_index_10 - 1] )
              break;
            if ( element_index_10 == 5 )
            {
              comparison_result_10 = table_value_14 == algn_140276369[-1];
              break;
            }
          }
          if ( comparison_result_10 )
            lookup_index_2 = 12;
          element_index_11 = 0;
          while ( 1 )
          {
            table_value_15 = left_text[element_index_11++];
            comparison_result_11 = table_value_15 == sr_mem_14027636c[element_index_11 - 1];
            if ( table_value_15 != sr_mem_14027636c[element_index_11 - 1] )
              break;
            if ( element_index_11 == 6 )
            {
              comparison_result_11 = table_value_15 == sr_mem_14027636c[5];
              break;
            }
          }
          if ( comparison_result_11 )
            lookup_index_2 = 13;
          element_index_12 = 0;
          while ( 1 )
          {
            table_value_16 = left_text[element_index_12++];
            comparison_result_12 = table_value_16 == sr_mem_140276378[element_index_12 - 1];
            if ( table_value_16 != sr_mem_140276378[element_index_12 - 1] )
              break;
            if ( element_index_12 == 8 )
            {
              comparison_result_12 = table_value_16 == sr_mem_140276378[7];
              break;
            }
          }
          if ( comparison_result_12 )
            lookup_index_2 = 10;
          saved_iteration_count_2 = lookup_index_2;
        }
        state_word_9 = g_1AD2C94F4;
        state_word_10 = g_1AD2C94F4;
        state_word_11 = g_1AD2C94EC;
        state_word_12 = g_1AD2C94EC;
        saved_iteration_count = g_1AD2C94F0;
        iteration_count_14 = g_1AD2C94F0;
        g_1AF0C951C = g_1AD2C94E0 - g_1AD2C94EC;
        g_1AF0C9520 = g_1AD2C94E8;
        state_word_13 = g_1AD2C94F4;
        g_1AF0C9510 = g_1AD2C94EC;
        g_1AF0C9514 = g_1AD2C94F0;
        g_1AF0C9518 = g_1AD2C94F4;
        g_1AF0C9524 = g_1AD2C94E4 - g_1AD2C94F4;
        lookup_index_3 = lookup_index_2;
        if ( lookup_index_2 < 6 )
          dword_140404A6C[5873 * lookup_index_2 + 283831497] = 1078530011;
        scaled_index_18 = *(state_address_9 - 2);
        scaled_index_19 = *(state_address_9 - 1);
        loaded_word_3 = *state_address_9;
        g_1AF0C981C = xmmword_140278D30;
        *(unsigned int *)&g_1AF0C983C = 1065353216;
        saved_iteration_count_3 = 0;
        state_address_10 = (float)(scaled_index_18 - state_word_11) * 4.0;
        table_value_17 = record_byte_offset_2[1];
        weighted_sum = (float)(int)(scaled_index_19 - saved_iteration_count) * 4.0;
        weighted_sum_2 = (float)(int)(loaded_word_3 - state_word_9) * 4.0;
        g_1AF0C9810 = state_address_10;
        g_1AF0C9814 = weighted_sum;
        g_1AF0C9818 = weighted_sum_2;
        *(_OWORD *)&g_1AF0C982C = xmmword_140278D30;
        if ( table_value_17 > 0 )
        {
          state_scalar_2 = g_1AF0C9824;
          state_scalar_3 = 0.0;
          state_scalar_4 = g_1AF0C9820;
          state_scalar_5 = 0.0;
          scaled_value = *(float *)&g_1AF0C981C;
          saved_state_word_2 = state_word_9;
          iteration_count_9 = saved_iteration_count_3;
          do
          {
            scaled_value_2 = (float)state_word_11 * 4.0;
            scaled_value_3 = (float)state_word_9 * 4.0;
            g_1AF0C9810 = (float)((float)(scaled_value_2 * scaled_value) + state_address_10) + (float)(scaled_value_3 * state_scalar_3);
            g_1AF0C9814 = (float)((float)(scaled_value_2 * state_scalar_4) + weighted_sum) + (float)(scaled_value_3 * state_scalar_5);
            g_1AF0C9818 = (float)((float)(scaled_value_2 * state_scalar_2) + weighted_sum_2) + (float)(scaled_value_3 * state_scalar);
            sr_math_mat3_rotate_rows(
              (__int64)(unsigned int *)&g_1AF0C981C,
              (float *)&g_1AF0C9828,
              sr_export_float_lane_container(1070141403));
            saved_state_word_3 = state_word_12;
            integer_difference = g_1AE1C94FC - saved_state_word_2;
            saved_state_word_2 = saved_state_word_3;
            state_word_12 = integer_difference - 1;
            sub_140027D00();
            if ( lookup_index_3 < 6 )
              *(float *)&dword_140404A6C[5873 * lookup_index_3 + 283831497] = *(float *)&dword_140404A6C[5873 * lookup_index_3 + 283831497]
                                                                  + 1.570796326795;
            state_word_11 = g_1AD2C94EC;
            ++iteration_count_9;
            state_word_9 = g_1AD2C94F4;
            scaled_value = *(float *)&g_1AF0C981C;
            state_scalar_3 = g_1AF0C9834;
            state_scalar_4 = g_1AF0C9820;
            state_scalar_5 = g_1AF0C9838;
            state_scalar_2 = g_1AF0C9824;
            state_scalar = g_1AF0C983C;
            product_difference = (float)-g_1AD2C94EC * 4.0;
            table_value_17 = record_byte_offset_2[1];
            product_difference_2 = (float)(-1 - g_1AD2C94F4) * 4.0;
            state_address_10 = (float)((float)(product_difference * *(float *)&g_1AF0C981C) + g_1AF0C9810)
                 + (float)(g_1AF0C9834 * product_difference_2);
            g_1AF0C9810 = state_address_10;
            weighted_sum = (float)((float)(product_difference * g_1AF0C9820) + g_1AF0C9814)
                 + (float)(g_1AF0C9838 * product_difference_2);
            g_1AF0C9814 = weighted_sum;
            weighted_sum_2 = (float)((float)(product_difference * g_1AF0C9824) + g_1AF0C9818)
                 + (float)(g_1AF0C983C * product_difference_2);
            g_1AF0C9818 = weighted_sum_2;
          }
          while ( iteration_count_9 < table_value_17 );
          loaded_word_3 = *record_byte_offset_2;
          scaled_index_19 = *(record_byte_offset_2 - 1);
          scaled_index_18 = *(record_byte_offset_2 - 2);
          state_scalar = 1.0;
          lookup_index_2 = saved_iteration_count_2;
          saved_iteration_count = iteration_count_14;
          state_word_13 = saved_state_word_2;
          iteration_count = 0;
          state_word_10 = state_word_13;
        }
        g_1AE1C9504 = state_word_12;
        g_1AE1C9508 = saved_iteration_count;
        g_1AE1C950C = state_word_10;
        sub_140029120();
        sub_140023AC0(
          0,
          scaled_index_18 - state_word_12,
          scaled_index_19 - iteration_count_14,
          loaded_word_3 - state_word_13,
          g_1AE1C94F8,
          g_1AE1C94FC,
          g_1AE1C9500,
          lookup_index_2,
          table_value_17);
        integer_sum_2 = cached_scaled_index + 1;
        state_address_9 = record_byte_offset_2 + 24;
        cached_scaled_index = integer_sum_2;
        record_byte_offset_2 += 24;
      }
      while ( integer_sum_2 < (int)g_175EFB090 );
    }
    element_index_13 = 0;
    while ( 1 )
    {
      masked_bits = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + element_index_13++);
      if ( masked_bits != sr_mem_140274da0[element_index_13 - 1] )
        break;
      if ( element_index_13 == 6 )
      {
        for ( j = 0; j < 2; ++j )
        {
          for ( k = 0; k < 2; ++k )
            sub_140016F60(0, j + 407, 0x11u, k + 367, 2u);
        }
        break;
      }
    }
    iteration_count_14 = 0;
    if ( (int)g_1726DA088 > 0 )
    {
      state_address_11 = &g_1726DA094;
      do
      {
        iteration_count_10 = 0;
        buffer_cursor_3 = state_address_11 + 2562;
        do
        {
          iteration_count_11 = 0;
          remaining_count_4 = 8;
          do
          {
            iteration_count_12 = 0;
            remaining_count_5 = 8;
            do
            {
              if ( *buffer_cursor_3 )
              {
                sub_1400D4FC0(0, iteration_count_12 + 8 * *(state_address_11 - 1), iteration_count_10 + 8 * *state_address_11, iteration_count_11 + 8 * state_address_11[1], *buffer_cursor_3);
                sub_14003FA40(iteration_count_12 + 8 * *(state_address_11 - 1), iteration_count_11 + 8 * state_address_11[1], (float)(int)(iteration_count_10 + 8 * *state_address_11) * 4.0);
              }
              ++iteration_count_12;
              ++buffer_cursor_3;
              --remaining_count_5;
            }
            while ( remaining_count_5 );
            ++iteration_count_11;
            --remaining_count_4;
          }
          while ( remaining_count_4 );
          ++iteration_count_10;
        }
        while ( iteration_count_10 < 8 );
        state_address_11 += 3588;
        ++iteration_count_14;
      }
      while ( iteration_count_14 < (int)g_1726DA088 );
    }
  }
  sub_1401977E0(0);
  sub_1400D12E0();
  scaled_index_20 = 34LL * (int)g_175FF348C;
  g_16B2A2ED4 = 1098907648;
  g_16B2A2ED8 = 1082130432;
  g_16B2A2EDC = 1098907648;
  *(float *)&masked_bits_2 = *(float *)&dword_140404A6C[scaled_index_20 + 225391235] - 24.0;
  g_16B2A2EC8 = *(float *)&dword_140404A6C[scaled_index_20 + 225391233] + 1480.0;
  *(float *)&masked_bits_3 = *(float *)&dword_140404A6C[scaled_index_20 + 225391234] + 1.0;
  g_16B2A2ED0 = masked_bits_2;
  g_183F79E00 = g_175FBB094;
  *(unsigned int *)&g_16B2A2ECC = masked_bits_3;
  if ( (int)g_175FBB094 > 0 )
  {
    running_total_3 = 0;
    remaining_count_6 = g_175FBB094;
    do
    {
      dword_140404A6C[running_total_3 + 284021990] = dword_140404A6C[running_total_3 + 225368459];
      dword_140404A6C[running_total_3 + 284021991] = dword_140404A6C[running_total_3 + 225368460];
      dword_140404A6C[running_total_3 + 284021992] = dword_140404A6C[running_total_3 + 225368461];
      running_total_3 += 3;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
  }
  sub_140099DD0(g_1A4CFF7E4, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  iteration_count_13 = 0;
  running_total_4 = 0;
  running_total_5 = 0;
  do
  {
    if ( dword_140404A6C[running_total_5 + 83194357] && dword_140404A6C[running_total_5 + 83200510] && (unsigned int)iteration_count_13 <= 0xFFF )
    {
      sub_14000C4C0(iteration_count_13);
      for ( m = 0; m < 4; ++m )
      {
        if ( running_total_5 <= 28378350 )
        {
          table_value_18 = (int)dword_140404A6C[m + 83200503 + running_total_4];
          dword_140404A6C[m + 83200503 + running_total_4] = -1;
          if ( (unsigned int)table_value_18 <= 0x3FF )
          {
            dword_140404A6C[8969 * table_value_18 + 73991662] = -1;
            sub_1401941F0(0, table_value_18);
            sub_1401941F0(3, table_value_18);
            sub_1401941F0(5, table_value_18);
          }
        }
      }
      dword_140404A6C[running_total_5 + 83200510] = 0;
      if ( iteration_count_13 == 1008 )
        ++g_18402CC00;
    }
    ++iteration_count_13;
    running_total_5 += 6930LL;
    running_total_4 += 6930;
  }
  while ( iteration_count_13 < 4096 );
  /* Rendering recovery: land mask 283830718 with all-zero R16UI discards every
     terrain fragment (prog08:66-67). Fall back to 0xFFFF (keep all), mirroring
     the standalone render-test. */
  {
    unsigned short *sr_m = (unsigned short *)(uintptr_t)g_181290050;
    int sr_zero = 1;
    if (!sr_m)
    {
      sr_m = (unsigned short *)(uintptr_t)sr_path_malloc(0x200000);
      g_181290050 = (unsigned long long)(uintptr_t)sr_m;
    }
    if (sr_m)
    {
      unsigned int sr_i;
      for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i)
      {
        if (sr_m[sr_i]) { sr_zero = 0; break; }
      }
      if (sr_zero)
      {
        for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i) sr_m[sr_i] = 0xFFFFu;
        SR_DEBUG_LOG("land mask 283830718 missing/zero -> 0xFFFF R16UI fallback");
      }
    }
  }
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  glTexImage2D(3553,
    0,
    33332,
    1024,
    1024,
    0,
    36244,
    5123,
    g_181290050);
  buffer_cursor_4 = (int *)&g_183EBF988;
  do
    sub_14009DA10(*buffer_cursor_4++, iteration_count++);
  while ( iteration_count < 17 );
  if ( !chdir_result_2 )
    crt_chdir("..");
  if ( !chdir_result )
    crt_chdir("..");
  g_175FD1400 = 1;
  return 0; /* legacy result ignored; native returns void */
}
#undef scratch_buffer
#undef state_word_13
#undef iteration_count_14
#undef saved_iteration_count_2
#undef saved_iteration_count_3
#undef cached_scaled_index
#undef record_byte_offset_2
#undef chdir_result
#undef chdir_result_2
#undef remaining_count_7
#undef unused_written_slot
#undef saved_running_total
#undef saved_iteration_count_4
#undef selection_code_2
#undef selection_code_3
#undef selection_code_4
#undef selection_code_5
#undef unused_frame_slot_168

//----- (000000014007A8C0) ----------------------------------------------------
__int64            sub_14007A8C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float input_value;
  float input_value_2;
  unsigned int integer_quotient;
  unsigned int integer_quotient_2;
  unsigned int integer_quotient_3;
  unsigned int integer_quotient_4;
  float scaled_ratio;

  input_value = (float)a3;
  input_value_2 = (float)a4;
  integer_quotient = (int)(float)((float)(a1 * g_182A7D55C) * (float)(1.0 / (renderer_canvas_width)));
  integer_quotient_2 = (int)(float)((float)(a3 * g_182A7D55C) * (float)(1.0 / (renderer_canvas_width)));
  integer_quotient_3 = (int)(float)((float)(g_182A7D560
                           * (int)(float)((renderer_canvas_height) - (float)(a2 + a4)))
                   * (float)(1.0 / (renderer_canvas_height)));
  integer_quotient_4 = (int)(float)((float)(a4 * g_182A7D560) * (float)(1.0 / (renderer_canvas_height)));
  glViewport(integer_quotient, integer_quotient_3, integer_quotient_2, integer_quotient_4);
  glScissor(integer_quotient, integer_quotient_3, integer_quotient_2, integer_quotient_4);
  *(float *)&g_1A724E580 = a5 / (float)(a5 * a7);
  g_1A724E584 = 0;
  g_1A724E598 = 0;
  g_1A724E594 = a5 / (float)((float)((float)(input_value_2 / input_value) * a7) * a5);
  if ( g_151E46194 )
  {
    *(_OWORD *)&g_1A724E5A8 = xmmword_140278DE0;
    g_1A724E5B8 = a5;
    g_1A724E5BC = 0;
  }
  else
  {
    *(_QWORD *)&g_1A724E5B0 = 0;
    g_1A724E5BC = 0;
    scaled_ratio = 1.0 / (float)(a6 - a5);
    g_1A724E5A8 = -(float)((float)(a5 + a6) * scaled_ratio);
    g_1A724E5AC = -1082130432;
    g_1A724E5B8 = (float)(scaled_ratio * a5) * (float)(a6 * -2.0);
  }
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  return sr_math_mat4_multiply(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (000000014007D230) ----------------------------------------------------
__int64            sub_14007D230(float a1, float a2)
{
  /* x arrives in xmm0 (0x14007D247), y in xmm1 (0x14007D23F); Hex-Rays had typed them as integers and lost both */
  unsigned int text_float_bits_result = sr_text_float_bits(a1);
  unsigned int text_float_bits_result_2 = sr_text_float_bits(a2);
  unsigned int state_word;
  unsigned int state_word_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 result;

  state_word = g_1AD059448;
  if ( (int)g_1AD059448 < 0x10000 )
  {
    state_word_2 = g_1AD05944C;
  }
  else
  {
    sr_renderer_batch_flush(0, 0, 0);
    state_word = 0;
    state_word_2 = 9;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
  }
  scaled_index = (int)(state_word_2 * state_word);
  dword_140404A6C[scaled_index + 456217209] = text_float_bits_result;
  dword_140404A6C[scaled_index + 456217210] = text_float_bits_result_2;
  dword_140404A6C[scaled_index + 456217211] = 0;
  scaled_index_2 = g_1AD059448 * g_1AD05944C;
  dword_140404A6C[scaled_index_2 + 456217212] = g_1AD299460;
  dword_140404A6C[scaled_index_2 + 456217213] = g_1AD299464;
  result = g_1AD059448 * g_1AD05944C;
  dword_140404A6C[(int)result + 456217214] = *(unsigned int *)&g_1AD299450;
  dword_140404A6C[(int)result + 456217215] = g_1AD299454;
  dword_140404A6C[(int)result + 456217216] = g_1AD299458;
  dword_140404A6C[(int)result + 456217217] = g_1AD29945C;
  ++g_1AD059448;
  return result;
}

//----- (000000014007E010) ----------------------------------------------------
__int64            sub_14007E010(
        unsigned int *a1,
        _DWORD *a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  float *state_address;
  int iteration_count;
  float product_difference;
  float product_difference_2;
  __int64 masked_bits;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  float scaled_value;
  float scaled_value_2;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 masked_bits_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  float product_difference_3;
  float product_difference_4;
  __int64 unrecovered_register_value_9;
  __int64 unrecovered_register_value_10;
  float scaled_value_3;
  float scaled_value_4;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E010[16];
#define position (*(float (*))(void *)(sr_frame_14007E010 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14007E010 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14007E010 + 8)) /* [rsp+28h] */

  sr_camera_set_model(a1, a2);
  state_address = (float *)&unk_1402B2CC4;
  *(unsigned int *)&g_1AD299450 = a6;
  iteration_count = 0;
  g_1AD299454 = a7;
  g_1AD299458 = a8;
  g_1AD29945C = 1065353216;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    product_difference = a4 * *(state_address - 12);
    position = a3 * *(state_address - 13);
    product_difference_2 = a5 * *(state_address - 11);
    unused_written_slot = product_difference;
    unused_written_slot_2 = product_difference_2;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value, unrecovered_register_value_2);
    masked_bits = ((_BYTE)iteration_count + 1) & 3;
    position = a3 * flt_1402B2C90[3 * masked_bits];
    unused_written_slot = a4 * flt_1402B2C90[3 * masked_bits + 1];
    unused_written_slot_2 = a5 * flt_1402B2C90[3 * masked_bits + 2];
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_3, unrecovered_register_value_4);
    scaled_value = a4 * *state_address;
    position = a3 * *(state_address - 1);
    scaled_value_2 = a5 * state_address[1];
    unused_written_slot = scaled_value;
    unused_written_slot_2 = scaled_value_2;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_5, unrecovered_register_value_6);
    masked_bits_2 = (++iteration_count & 3) + 4LL;
    position = a3 * flt_1402B2C90[3 * masked_bits_2];
    unused_written_slot = a4 * flt_1402B2C90[3 * masked_bits_2 + 1];
    unused_written_slot_2 = a5 * flt_1402B2C90[3 * masked_bits_2 + 2];
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_7, unrecovered_register_value_8);
    product_difference_3 = a4 * *(state_address - 12);
    position = a3 * *(state_address - 13);
    product_difference_4 = a5 * *(state_address - 11);
    unused_written_slot = product_difference_3;
    unused_written_slot_2 = product_difference_4;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
    scaled_value_3 = a4 * *state_address;
    position = a3 * *(state_address - 1);
    scaled_value_4 = a5 * state_address[1];
    unused_written_slot = scaled_value_3;
    unused_written_slot_2 = scaled_value_4;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_11, unrecovered_register_value_12);
    state_address += 3;
  }
  while ( (__int64)state_address < (__int64)flt_1402B2CF4 );
  sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sr_math_mat4_multiply(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (000000014007E2A0) ----------------------------------------------------
__int64            sub_14007E2A0(float *a1, __int64 a2, int a3, float a4, float a5)
{
  signed int iteration_count;
  int selected_word;
  __int64 frame_word_at_0;
  float scaled_value;
  float *state_address;
  __int64 iteration_count_2;
  float input_value;
  double state_address_2;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 record_word_offset;
  signed int integer_difference;
  __m128i converted_vector;
  __m128 vector_result;
  float component_sum;
  float reordered_vector;
  float scaled_value_2;
  float component_delta;
  float component_sum_2;
  float weighted_sum;
  float weighted_sum_2;
  float component_delta_2;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 unrecovered_register_value;
  __m128 vector_result_2;
  float weighted_sum_5;
  float reordered_vector_2;
  float weighted_sum_6;
  float weighted_sum_7;
  float scaled_value_3;
  float weighted_sum_8;
  float component_sum_3;
  float source_component_z;
  double state_address_3;
  float component_sum_4;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float component_sum_5;
  float weighted_sum_9;
  __m128 vector_result_3;
  float reordered_vector_3;
  float scaled_value_4;
  float weighted_sum_10;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  unsigned int *position;
  __int64 record_byte_offset;
  char iteration_count_3;
  __int64 integer_sum;
  __int64 remaining_count;
  __int64 masked_bits;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 unrecovered_register_value_9;
  __int64 unrecovered_register_value_10;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 unrecovered_register_value_13;
  __int64 unrecovered_register_value_14;
  __int64 unrecovered_register_value_15;
  __int64 unrecovered_register_value_16;
  __int64 void_2;
  bool comparison_result;
  float *buffer_cursor;
  signed __int64 state_address_4;
  float *record_byte_offset_2;
  __int64 remaining_count_2;
  float product_difference_4;
  __int64 remaining_count_3;
  float scaled_value_5;
  float source_component_y;
  float source_component_z_2;
  float *buffer_cursor_2;
  signed __int64 state_address_5;
  float *record_byte_offset_3;
  __int64 remaining_count_4;
  float product_difference_5;
  __int64 remaining_count_5;
  float scaled_value_6;
  float source_component_y_2;
  float source_component_z_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E2A0[1680];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 0)) /* [rsp+0h] */
#define float_lane_0 (*(float (*))(void *)(sr_frame_14007E2A0 + 32)) /* [rsp+20h] */
#define cached_integer_difference (*(int (*))(void *)(sr_frame_14007E2A0 + 36)) /* [rsp+24h] */
#define remaining_count_6 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 40)) /* [rsp+28h] */
#define remaining_count_7 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 48)) /* [rsp+30h] */
#define frame_float_at_56 (*(double (*))(void *)(sr_frame_14007E2A0 + 56)) /* [rsp+38h] */
#define float_word (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 64)) /* [rsp+40h] */
#define packed_vector (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 80)) /* [rsp+50h] */
#define packed_vector_2 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 96)) /* [rsp+60h] */
#define packed_vector_3 (*(__int128 (*))(void *)(sr_frame_14007E2A0 + 112)) /* [rsp+70h] */
#define callee_output_word (*(_DWORD (*)[2])(void *)(sr_frame_14007E2A0 + 128)) /* [rsp+80h] */
#define float_word_2 (*(char (*))(void *)(sr_frame_14007E2A0 + 136)) /* [rsp+88h] */
#define callee_output_word_2 (*(char (*))(void *)(sr_frame_14007E2A0 + 320)) /* [rsp+140h] */
#define unused_frame_slot_1664 (*(__int64 (*))(void *)(sr_frame_14007E2A0 + 1664)) /* [rsp+680h] */

  iteration_count = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      selected_word = 0;
      frame_word_at_0 = 2;
    }
    else if ( a3 == 2 )
    {
      selected_word = 0;
      frame_word_at_0 = 1;
    }
    else
    {
      selected_word = LODWORD(float_lane_0);
      frame_word_at_0 = LODWORD(float_lane_0);
    }
  }
  else
  {
    selected_word = 1;
    frame_word_at_0 = 2;
  }
  scaled_value = a4 * 0.5;
  state_address = (float *)&float_word_2;
  iteration_count_2 = 0;
  input_value = a5;
  state_address_2 = 0.5235987755983333;
  scaled_index = 3LL * selected_word;
  scaled_index_2 = 3LL * (int)frame_word_at_0;
  record_word_offset = 3LL * a3;
  integer_difference = 7;
  remaining_count_7 = 7;
  cached_integer_difference = 7;
  do
  {
    if ( iteration_count >= 4 )
      converted_vector = _mm_cvtsi32_si128(integer_difference);
    else
      converted_vector = _mm_cvtsi32_si128(iteration_count);
    vector_result = _mm_castpd_ps(sub_1401F8A50(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 0.5235987755983333, frame_word_at_0, 0.5235987755983333));
    remaining_count_6 = 8;
    component_sum = 0.0;
    reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0];
    SR_VEC_LANES(128, vector_result, f32)[0] = *(double *)SR_VEC_LANES(128, vector_result, u64);
    scaled_value_2 = reordered_vector * input_value;
    SR_VEC_LANES(128, vector_result, f32)[0] = SR_VEC_LANES(128, vector_result, f32)[0] * input_value;
    component_delta = -scaled_value_2;
    component_sum_2 = scaled_value_2 + scaled_value;
    float_lane_0 = SR_VEC_LANES(128, vector_result, f32)[0];
    do
    {
      weighted_sum = *(float *)(a2 + 4 * record_word_offset + 4);
      weighted_sum_2 = *(float *)(a2 + 4 * record_word_offset + 8);
      if ( iteration_count_2 >= 4 )
      {
        component_delta_2 = component_delta - scaled_value;
        weighted_sum_3 = weighted_sum * (float)(component_delta - scaled_value);
        weighted_sum_4 = weighted_sum_2 * (float)(component_delta - scaled_value);
      }
      else
      {
        component_sum_2 = scaled_value + scaled_value_2;
        component_delta_2 = scaled_value + scaled_value_2;
        weighted_sum_3 = weighted_sum * (float)(scaled_value + scaled_value_2);
        weighted_sum_4 = weighted_sum_2 * (float)(scaled_value + scaled_value_2);
      }
      vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum, frame_word_at_0, state_address_2));
      weighted_sum_5 = *(float *)(a2 + 4 * scaled_index_2 + 8);
      frame_float_at_56 = float_lane_0;
      reordered_vector_2 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * float_lane_0;
      weighted_sum_6 = *(float *)(a2 + 4 * record_word_offset) * component_delta_2;
      weighted_sum_7 = *(float *)(a2 + 4 * record_word_offset);
      scaled_value_3 = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * float_lane_0;
      SR_VEC_LANES(128, vector_result_2, f32)[0] = *(float *)(a2 + 4 * scaled_index + 4) * reordered_vector_2;
      weighted_sum_8 = (float)((float)(*(float *)(a2 + 4 * scaled_index_2) * scaled_value_3) + (float)(*(float *)(a2 + 4 * scaled_index) * reordered_vector_2))
          + (float)(weighted_sum_6 + *a1);
      component_sum_3 = a1[1] + weighted_sum_3;
      source_component_z = a1[2];
      *(state_address - 2) = weighted_sum_8;
      *(_QWORD *)&state_address_3 = *(unsigned int *)(a2 + 4 * scaled_index_2 + 4);
      *(float *)&state_address_3 = (float)(*(float *)&state_address_3 * scaled_value_3) + SR_VEC_LANES(128, vector_result_2, f32)[0];
      SR_VEC_LANES(128, vector_result_2, f32)[0] = *(float *)(a2 + 4 * scaled_index + 8) * reordered_vector_2;
      *(float *)&state_address_3 = *(float *)&state_address_3 + component_sum_3;
      component_sum_4 = component_sum + 0.39269909;
      *(state_address - 1) = *(float *)&state_address_3;
      *state_address = (float)((float)(weighted_sum_5 * scaled_value_3) + SR_VEC_LANES(128, vector_result_2, f32)[0]) + (float)(source_component_z + weighted_sum_4);
      if ( iteration_count_2 >= 4 )
      {
        component_sum_2 = scaled_value_2 + scaled_value;
        product_difference = weighted_sum_7 * (float)(component_delta - scaled_value);
        product_difference_2 = weighted_sum * (float)(component_delta - scaled_value);
        product_difference_3 = weighted_sum_2 * (float)(component_delta - scaled_value);
      }
      else
      {
        product_difference = weighted_sum_7 * component_sum_2;
        product_difference_2 = weighted_sum * component_sum_2;
        product_difference_3 = weighted_sum_2 * component_sum_2;
      }
      component_sum_5 = product_difference_2 + a1[1];
      weighted_sum_9 = product_difference + *a1;
      vector_result_3 = _mm_castpd_ps(sub_1401F8A50(component_sum_4, unrecovered_register_value, state_address_3));
      *(_QWORD *)&state_address_2 = *(unsigned int *)(a2 + 4 * scaled_index + 4);
      component_sum = component_sum_4 + 0.39269909;
      reordered_vector_3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * frame_float_at_56;
      scaled_value_4 = *(double *)SR_VEC_LANES(128, vector_result_3, u64) * frame_float_at_56;
      SR_VEC_LANES(128, vector_result_3, f32)[0] = *(float *)(a2 + 4 * scaled_index_2 + 4) * scaled_value_4;
      state_address[1] = (float)((float)(*(float *)(a2 + 4 * scaled_index) * reordered_vector_3) + weighted_sum_9) + (float)(*(float *)(a2 + 4 * scaled_index_2) * scaled_value_4);
      *(float *)&state_address_2 = (float)((float)(*(float *)&state_address_2 * reordered_vector_3) + component_sum_5) + SR_VEC_LANES(128, vector_result_3, f32)[0];
      weighted_sum_10 = *(float *)(a2 + 4 * scaled_index + 8);
      SR_VEC_LANES(128, vector_result_3, i32)[0] = *(_DWORD *)(a2 + 4 * scaled_index_2 + 8);
      state_address[2] = *(float *)&state_address_2;
      state_address[3] = (float)((float)(weighted_sum_10 * reordered_vector_3) + (float)(product_difference_3 + source_component_z)) + (float)(SR_VEC_LANES(128, vector_result_3, f32)[0] * scaled_value_4);
      state_address += 6;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    ++iteration_count;
    state_address_2 = 0.5235987755983333;
    integer_difference = cached_integer_difference - 1;
    input_value = a5;
    ++iteration_count_2;
    cached_integer_difference = integer_difference;
  }
  while ( integer_difference > -1 );
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  position = (unsigned int *)&callee_output_word_2;
  record_byte_offset = 0;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD299450 = xmmword_140279530;
  g_1AD05944C = 9;
  do
  {
    iteration_count_3 = 1;
    integer_sum = record_byte_offset + 16;
    remaining_count = 16;
    do
    {
      sr_renderer_batch_vertex3fv(position - 48, unrecovered_register_value_2, unrecovered_register_value_3);
      masked_bits = iteration_count_3 & 0xF;
      sr_renderer_batch_vertex3fv(&callee_output_word[3 * masked_bits + 3 * record_byte_offset], unrecovered_register_value_4, unrecovered_register_value_5);
      sr_renderer_batch_vertex3fv(&callee_output_word[3 * masked_bits + 3 * record_byte_offset], unrecovered_register_value_6, unrecovered_register_value_7);
      sr_renderer_batch_vertex3fv(&callee_output_word[3 * integer_sum + 3 * masked_bits], 3 * (integer_sum + masked_bits), unrecovered_register_value_8);
      sr_renderer_batch_vertex3fv(&callee_output_word[3 * integer_sum + 3 * masked_bits], unrecovered_register_value_9, unrecovered_register_value_10);
      sr_renderer_batch_vertex3fv(position, unrecovered_register_value_11, unrecovered_register_value_12);
      sr_renderer_batch_vertex3fv(position, unrecovered_register_value_13, unrecovered_register_value_14);
      sr_renderer_batch_vertex3fv(position - 48, unrecovered_register_value_15, unrecovered_register_value_16);
      position += 3;
      ++iteration_count_3;
      --remaining_count;
    }
    while ( remaining_count );
    comparison_result = remaining_count_7-- == 1;
    record_byte_offset += 16;
  }
  while ( !comparison_result );
  sr_renderer_batch_flush(void_2, unrecovered_register_value_2, unrecovered_register_value_3);
  g_1A724E600 = xmmword_140278D30;
  buffer_cursor = (float *)&float_word;
  state_address_4 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&float_word;
  record_byte_offset_2 = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  remaining_count_2 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference_4 = *(record_byte_offset_2 - 1);
    remaining_count_3 = 4;
    scaled_value_5 = *record_byte_offset_2;
    source_component_y = record_byte_offset_2[1];
    source_component_z_2 = record_byte_offset_2[2];
    do
    {
      *buffer_cursor = (float)((float)((float)(product_difference_4 * *(float *)((char *)buffer_cursor + state_address_4 - 16))
                           + (float)(scaled_value_5 * *(float *)((char *)buffer_cursor + state_address_4)))
                   + (float)(source_component_y * *(float *)((char *)buffer_cursor + state_address_4 + 16)))
           + (float)(source_component_z_2 * *(float *)((char *)buffer_cursor + state_address_4 + 32));
      ++buffer_cursor;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    record_byte_offset_2 += 4;
    state_address_4 -= 16LL;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  g_1A724E640 = float_word;
  buffer_cursor_2 = (float *)&float_word;
  state_address_5 = (char *)(unsigned int *)&g_1A724E590 - (char *)&float_word;
  record_byte_offset_3 = (float *)&g_1A724E644;
  g_1A724E650 = packed_vector;
  remaining_count_4 = 4;
  g_1A724E660 = packed_vector_2;
  g_1A724E670 = packed_vector_3;
  do
  {
    product_difference_5 = *(record_byte_offset_3 - 1);
    remaining_count_5 = 4;
    scaled_value_6 = *record_byte_offset_3;
    source_component_y_2 = record_byte_offset_3[1];
    source_component_z_3 = record_byte_offset_3[2];
    do
    {
      *buffer_cursor_2 = (float)((float)((float)(product_difference_5 * *(float *)((char *)buffer_cursor_2 + state_address_5 - 16))
                           + (float)(scaled_value_6 * *(float *)((char *)buffer_cursor_2 + state_address_5)))
                   + (float)(source_component_y_2 * *(float *)((char *)buffer_cursor_2 + state_address_5 + 16)))
           + (float)(source_component_z_3 * *(float *)((char *)buffer_cursor_2 + state_address_5 + 32));
      ++buffer_cursor_2;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    record_byte_offset_3 += 4;
    state_address_5 -= 16LL;
    --remaining_count_4;
  }
  while ( remaining_count_4 );
  g_1A724E6C0 = float_word;
  g_1A724E6D0 = packed_vector;
  g_1A724E6E0 = packed_vector_2;
  g_1A724E6F0 = packed_vector_3;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef float_lane_0
#undef cached_integer_difference
#undef remaining_count_6
#undef remaining_count_7
#undef frame_float_at_56
#undef float_word
#undef packed_vector
#undef packed_vector_2
#undef packed_vector_3
#undef callee_output_word
#undef float_word_2
#undef callee_output_word_2
#undef unused_frame_slot_1664

//----- (000000014007E9D0) ----------------------------------------------------
__int64            sub_14007E9D0(unsigned int *a1, _DWORD *a2, double a3, float a4)
{
  float component_sum;
  float component_sum_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  double scaled_value;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  __m128 vector_result;
  __int64 remaining_count;
  __int64 remaining_count_2;
  float reordered_vector;
  float scaled_value_2;
  __int64 unrecovered_register_value_8;
  __m128 vector_result_2;
  double float_word;
  __int64 unrecovered_register_value_9;
  __int64 unrecovered_register_value_10;
  float component_sum_3;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 unrecovered_register_value_13;
  __int64 unrecovered_register_value_14;
  __int64 unrecovered_register_value_15;
  __m128 vector_result_3;
  double float_word_2;
  __int64 unrecovered_register_value_16;
  __int64 unrecovered_register_value_17;
  __int64 remaining_count_3;
  __m128 vector_result_4;
  double float_word_3;
  __int64 unrecovered_register_value_18;
  __int64 unrecovered_register_value_19;
  __int64 unrecovered_register_value_20;
  __int64 unrecovered_register_value_21;
  __int64 void_2;
  __int64 unrecovered_register_value_22;
  float *buffer_cursor;
  signed __int64 state_address;
  float *record_byte_offset;
  __int64 remaining_count_4;
  float product_difference;
  __int64 remaining_count_5;
  float scaled_value_3;
  float source_component_y;
  float source_component_z;
  float *buffer_cursor_2;
  signed __int64 state_address_2;
  float *record_byte_offset_2;
  __int64 remaining_count_6;
  float product_difference_2;
  __int64 remaining_count_7;
  float scaled_value_4;
  float source_component_y_2;
  float source_component_z_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007E9D0[128];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 0)) /* [rsp+8h] */
#define float_word_4 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 28)) /* [rsp+24h] */
#define pair64_result (*(unsigned __int64 (*))(void *)(sr_frame_14007E9D0 + 36)) /* [rsp+2Ch] */
#define float_word_5 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 48)) /* [rsp+38h] */
#define packed_vector (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 64)) /* [rsp+48h] */
#define packed_vector_2 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 80)) /* [rsp+58h] */
#define packed_vector_3 (*(__int128 (*))(void *)(sr_frame_14007E9D0 + 96)) /* [rsp+68h] */
#define unused_frame_slot_112 (*(__int64 (*))(void *)(sr_frame_14007E9D0 + 112)) /* [rsp+78h] */

  sr_camera_set_model(a1, a2);
  g_1AD059440 = 2;
  component_sum = 0.0;
  *((float *)&float_word_4 + 1) = -a4;
  component_sum_2 = 0.0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  g_1AD299450 = xmmword_1402794A0;
  pair64_result = 0;
  sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value, unrecovered_register_value_2);
  scaled_value = *(float *)&a3;
  HIDWORD(pair64_result) = LODWORD(a3);
  sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_3, unrecovered_register_value_4);
  vector_result = _mm_castpd_ps(sub_1401F8A50(0.0, unrecovered_register_value_5, a3));
  remaining_count = 32;
  remaining_count_2 = 32;
  reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * *(float *)&a3;
  scaled_value_2 = *(double *)SR_VEC_LANES(128, vector_result, u64) * *(float *)&a3;
  pair64_result = __PAIR64__(LODWORD(reordered_vector), LODWORD(scaled_value_2));
  do
  {
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_6, unrecovered_register_value_7);
    component_sum_2 = component_sum_2 + 0.19634955;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum_2, unrecovered_register_value_8, a3));
    float_word = *(double *)SR_VEC_LANES(128, vector_result_2, u64);
    SR_VEC_LANES(128, vector_result_2, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * scaled_value;
    *(float *)&float_word = float_word * scaled_value;
    pair64_result = __PAIR64__(SR_VEC_LANES(128, vector_result_2, u32)[0], LODWORD(float_word));
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_9, unrecovered_register_value_10);
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  *((float *)&float_word_4 + 1) = a4;
  component_sum_3 = 0.0;
  pair64_result = 0;
  sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_6, unrecovered_register_value_7);
  *((float *)&pair64_result + 1) = *(float *)&a3;
  sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_11, unrecovered_register_value_12);
  pair64_result = __PAIR64__(LODWORD(reordered_vector), LODWORD(scaled_value_2));
  do
  {
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_13, unrecovered_register_value_14);
    component_sum_3 = component_sum_3 + 0.19634955;
    vector_result_3 = _mm_castpd_ps(sub_1401F8A50(component_sum_3, unrecovered_register_value_15, a3));
    float_word_2 = *(double *)SR_VEC_LANES(128, vector_result_3, u64);
    SR_VEC_LANES(128, vector_result_3, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_3, (__m128d)vector_result_3, 1), f64)[0] * scaled_value;
    *(float *)&float_word_2 = float_word_2 * scaled_value;
    pair64_result = __PAIR64__(SR_VEC_LANES(128, vector_result_3, u32)[0], LODWORD(float_word_2));
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_16, unrecovered_register_value_17);
    --remaining_count;
  }
  while ( remaining_count );
  remaining_count_3 = 16;
  do
  {
    *((float *)&float_word_4 + 1) = -a4;
    vector_result_4 = _mm_castpd_ps(sub_1401F8A50(component_sum, unrecovered_register_value_13, a3));
    float_word_3 = *(double *)SR_VEC_LANES(128, vector_result_4, u64);
    SR_VEC_LANES(128, vector_result_4, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_4, (__m128d)vector_result_4, 1), f64)[0] * scaled_value;
    *(float *)&float_word_3 = float_word_3 * scaled_value;
    pair64_result = __PAIR64__(SR_VEC_LANES(128, vector_result_4, u32)[0], LODWORD(float_word_3));
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_18, unrecovered_register_value_19);
    *((float *)&float_word_4 + 1) = a4;
    sr_renderer_batch_vertex3fv((unsigned int *)&float_word_4 + 1, unrecovered_register_value_20, unrecovered_register_value_21);
    component_sum = component_sum + 0.39269909;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  sr_renderer_batch_flush(void_2, unrecovered_register_value_13, unrecovered_register_value_22);
  g_1A724E600 = xmmword_140278D30;
  buffer_cursor = (float *)&float_word_5;
  state_address = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&float_word_5;
  record_byte_offset = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  remaining_count_4 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference = *(record_byte_offset - 1);
    remaining_count_5 = 4;
    scaled_value_3 = *record_byte_offset;
    source_component_y = record_byte_offset[1];
    source_component_z = record_byte_offset[2];
    do
    {
      *buffer_cursor = (float)((float)((float)(product_difference * *(float *)((char *)buffer_cursor + state_address - 16))
                           + (float)(scaled_value_3 * *(float *)((char *)buffer_cursor + state_address)))
                   + (float)(source_component_y * *(float *)((char *)buffer_cursor + state_address + 16)))
           + (float)(source_component_z * *(float *)((char *)buffer_cursor + state_address + 32));
      ++buffer_cursor;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    record_byte_offset += 4;
    state_address -= 16LL;
    --remaining_count_4;
  }
  while ( remaining_count_4 );
  g_1A724E640 = float_word_5;
  buffer_cursor_2 = (float *)&float_word_5;
  state_address_2 = (char *)(unsigned int *)&g_1A724E590 - (char *)&float_word_5;
  record_byte_offset_2 = (float *)&g_1A724E644;
  g_1A724E650 = packed_vector;
  remaining_count_6 = 4;
  g_1A724E660 = packed_vector_2;
  g_1A724E670 = packed_vector_3;
  do
  {
    product_difference_2 = *(record_byte_offset_2 - 1);
    remaining_count_7 = 4;
    scaled_value_4 = *record_byte_offset_2;
    source_component_y_2 = record_byte_offset_2[1];
    source_component_z_2 = record_byte_offset_2[2];
    do
    {
      *buffer_cursor_2 = (float)((float)((float)(product_difference_2 * *(float *)((char *)buffer_cursor_2 + state_address_2 - 16))
                           + (float)(scaled_value_4 * *(float *)((char *)buffer_cursor_2 + state_address_2)))
                   + (float)(source_component_y_2 * *(float *)((char *)buffer_cursor_2 + state_address_2 + 16)))
           + (float)(source_component_z_2 * *(float *)((char *)buffer_cursor_2 + state_address_2 + 32));
      ++buffer_cursor_2;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    record_byte_offset_2 += 4;
    state_address_2 -= 16LL;
    --remaining_count_6;
  }
  while ( remaining_count_6 );
  g_1A724E6C0 = float_word_5;
  g_1A724E6D0 = packed_vector;
  g_1A724E6E0 = packed_vector_2;
  g_1A724E6F0 = packed_vector_3;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef float_word_4
#undef pair64_result
#undef float_word_5
#undef packed_vector
#undef packed_vector_2
#undef packed_vector_3
#undef unused_frame_slot_112

//----- (0000000140081DA0) ----------------------------------------------------
void            sub_140081DA0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 unrecovered_register_value;
  float component_sum;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __m128 vector_result;
  double scaled_value;
  __int64 remaining_count;
  double input_value;
  double input_value_2;
  double reordered_vector;
  unsigned int float_word;
  __int64 unrecovered_register_value_4;
  __m128 vector_result_2;
  unsigned int float_word_2;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140081DA0[16];
#define position (*(unsigned int (*))(void *)(sr_frame_140081DA0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(__int32 (*))(void *)(sr_frame_140081DA0 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140081DA0 + 8)) /* [rsp+28h] */

  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  component_sum = 0.0;
  g_1AD299458 = a6;
  g_1AD29945C = a7;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  vector_result = _mm_castpd_ps(sub_1401F8A50(0.0, unrecovered_register_value, a3));
  scaled_value = *(float *)&a3;
  unused_written_slot_2 = 0;
  remaining_count = 64;
  input_value = a2;
  input_value_2 = a1;
  reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * *(float *)&a3;
  *(float *)&float_word = *(double *)SR_VEC_LANES(128, vector_result, u64) * scaled_value + input_value_2;
  SR_VEC_LANES(128, vector_result, f32)[0] = input_value - reordered_vector;
  position = float_word;
  unused_written_slot = SR_VEC_LANES(128, vector_result, i32)[0];
  do
  {
    sr_renderer_batch_vertex3fv(&position, unrecovered_register_value_2, unrecovered_register_value_3);
    component_sum = component_sum + 0.098174773;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum, unrecovered_register_value_4, reordered_vector));
    *(float *)&float_word_2 = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * scaled_value + input_value_2;
    position = float_word_2;
    SR_VEC_LANES(128, vector_result_2, f32)[0] = input_value - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * scaled_value;
    unused_written_slot = SR_VEC_LANES(128, vector_result_2, i32)[0];
    sr_renderer_batch_vertex3fv(&position, unrecovered_register_value_5, unrecovered_register_value_6);
    --remaining_count;
  }
  while ( remaining_count );
  sr_renderer_batch_flush(void_2, unrecovered_register_value_2, unrecovered_register_value_3);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (0000000140081F20) ----------------------------------------------------
void            sub_140081F20(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  float component_sum;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __m128 vector_result;
  double scaled_value;
  __int64 remaining_count;
  double reordered_vector;
  float weighted_sum;
  float reordered_vector_2;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __m128 vector_result_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140081F20[16];
#define position (*(float (*))(void *)(sr_frame_140081F20 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140081F20 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140081F20 + 8)) /* [rsp+28h] */

  glBindTexture(3553, renderer_white_texture);
  g_1AD29945C = a7;
  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  component_sum = 0.0;
  g_1AD299458 = a6;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  unused_written_slot_2 = 0;
  vector_result = _mm_castpd_ps(sub_1401F8A50(0.0, unrecovered_register_value, a3));
  scaled_value = *(float *)&a3;
  remaining_count = 64;
  reordered_vector = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * *(float *)&a3;
  weighted_sum = *(double *)SR_VEC_LANES(128, vector_result, u64) * scaled_value + a1;
  reordered_vector_2 = a2 - reordered_vector;
  do
  {
    position = a1;
    unused_written_slot = a2;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_2, unrecovered_register_value_3);
    position = weighted_sum;
    unused_written_slot = reordered_vector_2;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_4, unrecovered_register_value_5);
    component_sum = component_sum + 0.098174773;
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum, unrecovered_register_value_6, reordered_vector));
    weighted_sum = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * scaled_value + a1;
    position = weighted_sum;
    reordered_vector_2 = a2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * scaled_value;
    unused_written_slot = reordered_vector_2;
    sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_7, unrecovered_register_value_8);
    --remaining_count;
  }
  while ( remaining_count );
  sr_renderer_batch_flush(void_2, unrecovered_register_value_2, unrecovered_register_value_3);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (0000000140082110) ----------------------------------------------------
__int64            sub_140082110(float a1, float a2, float a3, float a4)
{
  /* Written out from 0x140082110..0x14008240C. Hex-Rays had typed the centre (xmm0, xmm1) and the
     radius (xmm2) as integers and discarded all four sine/cosine pairs (calls at 0x1400821B2,
     0x14008224F, 0x14008230F, 0x140082388: each is followed by movaps xmmN, xmm0 / shufpd / mulsd),
     so every vertex was drawn from undefined values. */
  __m128d call_result; // xmm0: sine in the low lane, cosine in the high lane
  double input_value;
  double input_value_2;
  double input_value_3;
  float component_sum;
  float converted_float; // xmm13_4 / xmm9_4
  float converted_float_2; // xmm14_4 / xmm10_4
  float converted_float_3;
  float converted_float_4;
  __int64 remaining_count;

  glBindTexture(3553, renderer_white_texture);
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  component_sum = 0.0;
  g_1AD299450 = xmmword_1402792F0;
  input_value_2 = a2;
  call_result = sub_1401F8A50(0.0, 0, 0.0); /* 0x1400821C7: movaps xmm2, xmm0 */
  input_value = a3;
  input_value_3 = a1;
  converted_float_3 = input_value_2 - _mm_cvtsd_f64(_mm_unpackhi_pd(call_result, call_result)) * input_value; /* 0x1400821E7: cvtpd2ps xmm9, xmm1 */
  converted_float_4 = _mm_cvtsd_f64(call_result) * input_value + input_value_3; /* 0x14008220D: cvtsd2ss xmm10, xmm0 */
  converted_float = converted_float_3;
  converted_float_2 = converted_float_4;
  remaining_count = 64;
  do
  {
    sr_renderer_batch_vertex3f(a1, a2, 0.0);
    sr_renderer_batch_vertex3f(converted_float_2, converted_float, 0.0);
    component_sum = (double)component_sum + 0.0981747704246875;
    call_result = sub_1401F8A50(component_sum, 0, 0.0); /* 0x140082254: movaps xmm2, xmm0 */
    converted_float = input_value_2 - _mm_cvtsd_f64(_mm_unpackhi_pd(call_result, call_result)) * input_value;
    converted_float_2 = _mm_cvtsd_f64(call_result) * input_value + input_value_3;
    sr_renderer_batch_vertex3f(converted_float_2, converted_float, 0.0);
    --remaining_count;
  }
  while ( remaining_count );
  sr_renderer_batch_flush(0, 0, 0);
  glLineWidth(2.0f /* native XMM0 */);
  component_sum = 0.0;
  converted_float = converted_float_3; /* 0x1400822B6: movss xmm9, dword ptr [rsp + 0xd8] */
  converted_float_2 = converted_float_4;
  g_1AD299450 = xmmword_140279490;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  remaining_count = 64;
  do
  {
    sr_renderer_batch_vertex3f(converted_float_2, converted_float, 0.0);
    component_sum = (double)component_sum + 0.0981747704246875;
    call_result = sub_1401F8A50(component_sum, 0, 0.0); /* 0x140082314: movaps xmm2, xmm0 */
    converted_float = input_value_2 - _mm_cvtsd_f64(_mm_unpackhi_pd(call_result, call_result)) * input_value;
    converted_float_2 = _mm_cvtsd_f64(call_result) * input_value + input_value_3;
    sr_renderer_batch_vertex3f(converted_float_2, converted_float, 0.0);
    --remaining_count;
  }
  while ( remaining_count );
  g_1AD299450 = xmmword_1402796B0;
  sr_renderer_batch_vertex3f(a1, a2, 0.0);
  call_result = sub_1401F8A50(a4, 0, 0.0); /* 0x14008238D: movaps xmm1, xmm0 */
  converted_float = input_value_2 - _mm_cvtsd_f64(_mm_unpackhi_pd(call_result, call_result)) * input_value;
  converted_float_2 = _mm_cvtsd_f64(call_result) * input_value + input_value_3;
  sr_renderer_batch_vertex3f(converted_float_2, converted_float, 0.0);
  sr_renderer_batch_flush(0, 0, 0);
  return (*(__int64 (**)(float))(unsigned int *)&glLineWidth)(1.0f /* native XMM0 */);
}

//----- (0000000140088000) ----------------------------------------------------
void            sub_140088000(
        float a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  float input_value = a2; // xmm1_4: y (0x140088044 movaps xmm9, xmm1); Hex-Rays had lost it
  double text_float_bits_result = sr_export_float_lane_container(sr_text_float_bits(a3)); // xmm2_8: the length (0x140088028), as float bits
  float cached_input_value;
  __int64 unused_local;
  __m128 vector_result;
  unsigned int masked_bits;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __int64 void_2;
  __int64 unrecovered_register_value_4;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140088000[16];
#define position (*(unsigned int (*))(void *)(sr_frame_140088000 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140088000 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_140088000 + 8)) /* [rsp+28h] */

  *(unsigned int *)&g_1AD299450 = a5;
  cached_input_value = input_value;
  g_1AD299454 = a6;
  unused_written_slot = input_value;
  unused_written_slot_2 = 0;
  g_1AD299458 = a7;
  g_1AD29945C = a8;
  position = LODWORD(a1);
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sr_renderer_batch_vertex3fv(&position, 0, 0);
  vector_result = _mm_castpd_ps(sub_1401F8A50(a4, 0, 0.0)); /* 0x1400880B0: only xmm0 = (double)a4 is an argument */
  *(float *)&masked_bits = *(double *)SR_VEC_LANES(128, vector_result, u64) * *(float *)&text_float_bits_result + a1;
  unused_written_slot = cached_input_value - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * *(float *)&text_float_bits_result;
  position = masked_bits;
  sr_renderer_batch_vertex3fv(&position, unrecovered_register_value, unrecovered_register_value_2);
  sr_renderer_batch_flush(void_2, unrecovered_register_value_3, unrecovered_register_value_4);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (00000001400891B0) ----------------------------------------------------
void            sub_1400891B0(
        float a1,
        float a2,
        double a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        float a8)
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  signed int iteration_count;
  signed int remaining_count;
  double scaled_value;
  double input_value;
  double input_value_2;
  __m128i converted_vector;
  float converted_vector_2;
  __int64 unrecovered_register_value_3;
  __m128 vector_result;
  double limited_value;
  unsigned int float_word;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __m128i converted_vector_3;
  float converted_vector_4;
  __m128 vector_result_2;
  unsigned int float_word_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400891B0[16];
#define position (*(unsigned int (*))(void *)(sr_frame_1400891B0 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(__int32 (*))(void *)(sr_frame_1400891B0 + 4)) /* [rsp+24h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_1400891B0 + 8)) /* [rsp+28h] */

  glBindTexture(3553, renderer_white_texture);
  iteration_count = 0;
  remaining_count = 63;
  scaled_value = *(float *)&a3;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  *(float *)&g_1AD299450 = a4;
  g_1AD299454 = a5;
  g_1AD299458 = a6;
  g_1AD29945C = a7;
  unused_written_slot_2 = 0;
  input_value = a1;
  input_value_2 = a2;
  do
  {
    if ( iteration_count >= 32 )
      converted_vector = _mm_cvtsi32_si128(remaining_count + 1);
    else
      converted_vector = _mm_cvtsi32_si128(iteration_count);
    position = LODWORD(a1);
    unused_written_slot = LODWORD(a2);
    converted_vector_2 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector), f32)[0] * 0.25);
    sr_renderer_batch_vertex3fv(&position, unrecovered_register_value, unrecovered_register_value_2);
    vector_result = _mm_castpd_ps(sub_1401F8A50(a8, unrecovered_register_value_3, a3));
    limited_value = fmaxf(converted_vector_2, 1.0);
    *(float *)&float_word = *(double *)SR_VEC_LANES(128, vector_result, u64) * scaled_value * limited_value + input_value;
    SR_VEC_LANES(128, vector_result, f32)[0] = input_value_2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * scaled_value * limited_value;
    position = float_word;
    unused_written_slot = SR_VEC_LANES(128, vector_result, i32)[0];
    sr_renderer_batch_vertex3fv(&position, unrecovered_register_value_4, unrecovered_register_value_5);
    a8 = a8 + 0.098174773;
    if ( ++iteration_count >= 32 )
      converted_vector_3 = _mm_cvtsi32_si128(remaining_count);
    else
      converted_vector_3 = _mm_cvtsi32_si128(iteration_count);
    converted_vector_4 = 1.75 - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(converted_vector_3), f32)[0] * 0.25);
    vector_result_2 = _mm_castpd_ps(sub_1401F8A50(a8, unrecovered_register_value_6, limited_value));
    a3 = fmaxf(converted_vector_4, 1.0);
    *(float *)&float_word_2 = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * scaled_value * a3 + input_value;
    SR_VEC_LANES(128, vector_result_2, f32)[0] = input_value_2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * scaled_value * a3;
    position = float_word_2;
    unused_written_slot = SR_VEC_LANES(128, vector_result_2, i32)[0];
    sr_renderer_batch_vertex3fv(&position, unrecovered_register_value_7, unrecovered_register_value_8);
    --remaining_count;
  }
  while ( remaining_count > -1 );
  sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
}
#undef position
#undef unused_written_slot
#undef unused_written_slot_2

//----- (000000014008D280) ----------------------------------------------------
void            sub_14008D280(float *a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  /* Written out from the assembly (0x14008D280..0x14008D55A): the box from a1 to a1 + (a2, a3, a4) in colour
     (a5, a6, a7, 1); the comment on each call is its address. Hex-Rays had typed the corner and the sizes as
     integers and lost every vertex after the first. */
  *(float *)&g_1AD299450 = a5;
  *(float *)&g_1AD299454 = a6;
  *(float *)&g_1AD299458 = a7;
  g_1AD29945C = 1065353216;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D312 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D328 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D33E */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D357 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D370 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a4 + a1[2]); /* 0x14008D386 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a4 + a1[2]); /* 0x14008D39C */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D3AF */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D3C2 */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a1[2]); /* 0x14008D3D9 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D3EF */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D409 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a4 + a1[2]); /* 0x14008D422 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D43F */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a4 + a1[2]); /* 0x14008D455 */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D46F */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a1[2]); /* 0x14008D486 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D4A0 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a1[2]); /* 0x14008D4BA */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D4D7 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D4F4 */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D50E */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a4 + a1[2]); /* 0x14008D528 */
  sr_renderer_batch_vertex3f(a1[0], a3 + a1[1], a1[2]); /* 0x14008D540 */
  sr_renderer_batch_flush(0, 0, 0);
}

//----- (000000014008D560) ----------------------------------------------------
void            sub_14008D560(float *a1, float a2, float a3, float a4, float a5)
{
  /* Written out from the assembly (0x14008D560..0x14008D7FB): the cube from a1 to a1 + a2 on every axis in
     colour (a3, a4, a5, 1); the comment on each call is its address. Hex-Rays had lost a3 (xmm2, stored at
     0x14008D56F), typed the corner and size as integers and lost every vertex after the first. */
  *(float *)&g_1AD299450 = a3;
  g_1AD29945C = 1065353216;
  *(float *)&g_1AD299454 = a4;
  *(float *)&g_1AD299458 = a5;
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D5CB */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D5E1 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D5F7 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D610 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D629 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a2 + a1[2]); /* 0x14008D63F */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a2 + a1[2]); /* 0x14008D655 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D668 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a1[2]); /* 0x14008D67B */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a1[2]); /* 0x14008D691 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a1[2]); /* 0x14008D6A7 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D6C0 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a1[1], a2 + a1[2]); /* 0x14008D6D9 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D6F5 */
  sr_renderer_batch_vertex3f(a1[0], a1[1], a2 + a1[2]); /* 0x14008D70B */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D724 */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a1[2]); /* 0x14008D73A */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D753 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a1[2]); /* 0x14008D76C */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D788 */
  sr_renderer_batch_vertex3f(a2 + a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7A4 */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7BD */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a2 + a1[2]); /* 0x14008D7D6 */
  sr_renderer_batch_vertex3f(a1[0], a2 + a1[1], a1[2]); /* 0x14008D7EC */
  sr_renderer_batch_flush(0, 0, 0);
}

//----- (000000014008D800) ----------------------------------------------------
__int64 sub_14008D800()
{
  int iteration_count;
  int float_word;
  float selected_scalar;
  float selected_scalar_2;
  float selected_scalar_3;
  float selected_scalar_4;
  int scaled_index;
  int scaled_index_2;
  int scaled_index_3;
  __int64 float_word_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 float_word_3;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  __int64 void_2;
  __int64 unrecovered_register_value_8;
  __int64 unrecovered_register_value_9;
  __int64 void_3;
  __int64 unrecovered_register_value_10;
  int n;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  int ii;
  __int64 unrecovered_register_value_13;
  __int64 unrecovered_register_value_14;
  __int64 unrecovered_register_value_15;
  __int64 unrecovered_register_value_16;
  __int64 unrecovered_register_value_17;
  __int64 unrecovered_register_value_18;
  int i;
  __int64 unrecovered_register_value_19;
  __int64 unrecovered_register_value_20;
  __int64 unrecovered_register_value_21;
  __int64 unrecovered_register_value_22;
  int j;
  __int64 unrecovered_register_value_23;
  __int64 unrecovered_register_value_24;
  int k;
  __int64 unrecovered_register_value_25;
  __int64 unrecovered_register_value_26;
  int m;
  __int64 unrecovered_register_value_27;
  __int64 unrecovered_register_value_28;
  __int64 state_word;
  __int64 void_4;
  __int64 unrecovered_register_value_29;
  __int64 remaining_count;
  __int64 integer_difference;
  __int64 scaled_index_4;
  unsigned int integer_difference_2;
  __int64 integer_difference_3;
  unsigned int integer_difference_4;
  unsigned int cached_integer_difference;
  signed int integer_difference_5;
  __int64 unused_local;
  int iteration_count_2;
  unsigned int *record_byte_offset;
  float product_difference;
  float product_difference_2;
  __int64 remaining_count_2;
  __int64 loaded_word;
  int scaled_index_5;
  unsigned int saved_loaded_word;
  unsigned int integer_difference_6;
  __int64 integer_difference_7;
  unsigned int cached_loaded_word;
  float product_difference_3;
  int scaled_index_6;
  int iteration_count_3;
  int state_word_2;
  int iteration_count_4;
  int iteration_count_5;
  int element_index;
  unsigned int *record_byte_offset_2;
  double angle;
  float combined_products;
  float scaled_value;
  int iteration_count_6;
  unsigned int *state_address;
  __int128 cached_xmmword_140279700;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  int scaled_index_9;
  __int64 scaled_index_10;
  int scaled_index_11;
  int scaled_index_12;
  float component_delta;
  float component_delta_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float component_sum;
  float scaled_value_2;
  unsigned int float_word_4;
  float scaled_value_3;
  __int64 unrecovered_register_value_30;
  __int64 unrecovered_register_value_31;
  float component_sum_2;
  float component_sum_3;
  signed int iteration_count_7;
  float component_delta_3;
  float component_delta_4;
  float component_delta_5;
  float component_delta_6;
  float scaled_value_4;
  float scaled_value_5;
  float component_delta_7;
  __int64 unrecovered_register_value_32;
  __int64 unrecovered_register_value_33;
  float component_sum_4;
  float component_sum_5;
  float component_sum_6;
  float component_sum_7;
  signed int iteration_count_8;
  float scaled_value_6;
  float scaled_value_7;
  __int64 unrecovered_register_value_34;
  __int64 unrecovered_register_value_35;
  int *state_address_2;
  float scaled_value_8;
  float source_component_y;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008D800[224];
#define scratch_buffer (*(_DWORD (*)[10])(void *)(sr_frame_14008D800 + 8)) /* [rsp+0h] */
#define position (*(float (*))(void *)(sr_frame_14008D800 + 72)) /* [rsp+40h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_14008D800 + 76)) /* [rsp+44h] */
#define unused_written_slot_2 (*(float (*))(void *)(sr_frame_14008D800 + 80)) /* [rsp+48h] */
#define unused_written_slot_3 (*(float (*))(void *)(sr_frame_14008D800 + 88)) /* [rsp+50h] */
#define position_2 (*(float (*))(void *)(sr_frame_14008D800 + 96)) /* [rsp+58h] */
#define unused_written_slot_4 (*(float (*))(void *)(sr_frame_14008D800 + 100)) /* [rsp+5Ch] */
#define unused_written_slot_5 (*(float (*))(void *)(sr_frame_14008D800 + 104)) /* [rsp+60h] */
#define saved_scaled_ratio (*(float (*))(void *)(sr_frame_14008D800 + 112)) /* [rsp+68h] */
#define saved_scaled_ratio_2 (*(float (*))(void *)(sr_frame_14008D800 + 116)) /* [rsp+6Ch] */
#define scaled_value_9 (*(float (*))(void *)(sr_frame_14008D800 + 120)) /* [rsp+70h] */
#define weighted_sum (*(float (*))(void *)(sr_frame_14008D800 + 124)) /* [rsp+74h] */
#define scaled_value_10 (*(float (*))(void *)(sr_frame_14008D800 + 128)) /* [rsp+78h] */
#define component_delta_8 (*(float (*))(void *)(sr_frame_14008D800 + 132)) /* [rsp+7Ch] */
#define unused_written_slot_6 (*(float (*))(void *)(sr_frame_14008D800 + 136)) /* [rsp+80h] */
#define float_word_5 (*(unsigned int (*))(void *)(sr_frame_14008D800 + 140)) /* [rsp+84h] */
#define position_3 (*(unsigned int (*)[4])(void *)(sr_frame_14008D800 + 144)) /* [rsp+88h] */
#define position_4 (*(unsigned int (*)[4])(void *)(sr_frame_14008D800 + 160)) /* [rsp+98h] */
#define matrix (*(__int128 (*))(void *)(sr_frame_14008D800 + 176)) /* [rsp+A8h] */
#define cached_xmmword_140278d30 (*(__int128 (*))(void *)(sr_frame_14008D800 + 192)) /* [rsp+B8h] */
#define frame_float_at_208 (*(float (*))(void *)(sr_frame_14008D800 + 208)) /* [rsp+C8h] */
#define unused_frame_slot_216 (*(__int64 (*))(void *)(sr_frame_14008D800 + 216)) /* [rsp+D0h] */

  iteration_count = 0;
  if ( *(float *)&g_189F0EEE8 == 0.0 )
  {
    selected_scalar_2 = 0.0;
    selected_scalar = 256.0;
    if ( *(float *)&g_189F0EEF0 == 0.0 )
    {
      float_word = 1;
      selected_scalar_3 = 0.0;
      selected_scalar_4 = 256.0;
    }
    else
    {
      float_word = 2;
      selected_scalar_3 = 256.0;
      selected_scalar_4 = 0.0;
    }
  }
  else
  {
    float_word = 0;
    selected_scalar = 0.0;
    selected_scalar_2 = 256.0;
    selected_scalar_3 = 256.0;
    selected_scalar_4 = 0.0;
  }
  scaled_index = (int)(float)(g_189F0EEDC * 0.25);
  scaled_index_2 = (int)(float)(g_189F0EEE4 * 0.25);
  scaled_index_3 = (int)(float)(g_189F0EEE0 * 0.25);
  glEnable(3042);
  glDisable(2884);
  glDepthMask(0);
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = xmmword_140279420;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  position = g_189F0EEDC - selected_scalar;
  g_1AD05944C = 9;
  unused_written_slot = g_189F0EEE0 + selected_scalar_3;
  unused_written_slot_2 = (float)(g_189F0EEE4 - selected_scalar_2) + selected_scalar_4;
  sr_renderer_batch_vertex3fv((unsigned int *)&position, float_word_2, unrecovered_register_value);
  position = g_189F0EEDC + selected_scalar;
  unused_written_slot = g_189F0EEE0 + selected_scalar_3;
  unused_written_slot_2 = (float)(g_189F0EEE4 + selected_scalar_2) + selected_scalar_4;
  sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_2, unrecovered_register_value_3);
  position = g_189F0EEDC + selected_scalar;
  unused_written_slot = g_189F0EEE0 - selected_scalar_3;
  unused_written_slot_2 = (float)(g_189F0EEE4 + selected_scalar_2) - selected_scalar_4;
  sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_4, float_word_3);
  position = g_189F0EEDC - selected_scalar;
  unused_written_slot = g_189F0EEE0 - selected_scalar_3;
  unused_written_slot_2 = (float)(g_189F0EEE4 - selected_scalar_2) - selected_scalar_4;
  sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_5, unrecovered_register_value_6);
  sr_renderer_batch_flush(void_2, unrecovered_register_value_7, unrecovered_register_value_8);
  g_1AD059440 = 2;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( float_word )
  {
    if ( float_word == 1 )
    {
      position = 0.0;
      g_1AD299450 = xmmword_1402796A0;
      unused_written_slot = g_189F0EEE0;
      unused_written_slot_2 = g_189F0EEE4 - 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
      unused_written_slot = g_189F0EEE0;
      unused_written_slot_2 = g_189F0EEE4 + 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_15, unrecovered_register_value_16);
      for ( i = scaled_index - 64; i < scaled_index + 64; ++i )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (i & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (i & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)i )
          g_1AD299450 = xmmword_1402796A0;
        unused_written_slot_2 = g_189F0EEE4 - 256.0;
        position = (float)i * 4.0;
        unused_written_slot = g_189F0EEE0;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_17, unrecovered_register_value_18);
        unused_written_slot = g_189F0EEE0;
        unused_written_slot_2 = g_189F0EEE4 + 256.0;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_19, unrecovered_register_value_20);
      }
      unused_written_slot_2 = 0.0;
      g_1AD299450 = xmmword_1402796A0;
      unused_written_slot = g_189F0EEE0;
      position = g_189F0EEDC - 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_17, unrecovered_register_value_18);
      position = g_189F0EEDC + 256.0;
      unused_written_slot = g_189F0EEE0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_21, unrecovered_register_value_22);
      for ( j = scaled_index_2 - 64; j < scaled_index_2 + 64; ++j )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (j & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (j & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)j )
          g_1AD299450 = xmmword_1402796A0;
        position = g_189F0EEDC - 256.0;
        unused_written_slot = g_189F0EEE0;
        unused_written_slot_2 = (float)j * 4.0;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
        position = g_189F0EEDC + 256.0;
        unused_written_slot = g_189F0EEE0;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_23, unrecovered_register_value_24);
      }
    }
    else
    {
      for ( k = scaled_index - 64; k < scaled_index + 64; ++k )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (k & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (k & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)k )
          g_1AD299450 = xmmword_1402796A0;
        unused_written_slot = g_189F0EEE0 - 256.0;
        position = (float)k * 4.0;
        unused_written_slot_2 = g_189F0EEE4;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
        unused_written_slot = g_189F0EEE0 + 256.0;
        unused_written_slot_2 = g_189F0EEE4;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_25, unrecovered_register_value_26);
      }
      for ( m = scaled_index_3 - 64; m < scaled_index_3 + 64; ++m )
      {
        g_1AD299450 = xmmword_140279320;
        if ( (m & 3) == 0 )
          g_1AD299450 = xmmword_140279340;
        if ( (m & 7) == 0 )
          g_1AD299450 = xmmword_140279430;
        if ( !(_BYTE)m )
          g_1AD299450 = xmmword_1402796A0;
        position = g_189F0EEDC - 256.0;
        unused_written_slot_2 = g_189F0EEE4;
        unused_written_slot = (float)m * 4.0;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
        position = g_189F0EEDC + 256.0;
        unused_written_slot_2 = g_189F0EEE4;
        sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_27, unrecovered_register_value_28);
      }
    }
  }
  else
  {
    for ( n = scaled_index_3 - 64; n < scaled_index_3 + 64; ++n )
    {
      g_1AD299450 = xmmword_140279320;
      if ( (n & 3) == 0 )
        g_1AD299450 = xmmword_140279340;
      if ( (n & 7) == 0 )
        g_1AD299450 = xmmword_140279430;
      if ( !(_BYTE)n )
        g_1AD299450 = xmmword_1402796A0;
      position = g_189F0EEDC;
      unused_written_slot_2 = g_189F0EEE4 - 256.0;
      unused_written_slot = (float)n * 4.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
      position = g_189F0EEDC;
      unused_written_slot_2 = g_189F0EEE4 + 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_11, unrecovered_register_value_12);
    }
    for ( ii = scaled_index_2 - 64; ii < scaled_index_2 + 64; ++ii )
    {
      g_1AD299450 = xmmword_140279320;
      if ( (ii & 3) == 0 )
        g_1AD299450 = xmmword_140279340;
      if ( (ii & 7) == 0 )
        g_1AD299450 = xmmword_140279430;
      if ( !(_BYTE)ii )
        g_1AD299450 = xmmword_1402796A0;
      position = g_189F0EEDC;
      unused_written_slot = g_189F0EEE0 - 256.0;
      unused_written_slot_2 = (float)ii * 4.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_9, unrecovered_register_value_10);
      position = g_189F0EEDC;
      unused_written_slot = g_189F0EEE0 + 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&position, unrecovered_register_value_13, unrecovered_register_value_14);
    }
  }
  sr_renderer_batch_flush(void_3, unrecovered_register_value_9, unrecovered_register_value_10);
  if ( g_189F0EEA4 )
    goto LABEL_81;
  position = (float)(int)g_189F0EEF4 * 4.0;
  unused_written_slot = (float)(int)g_189F0EEF8 * 4.0;
  unused_written_slot_2 = (float)(int)g_189F0EEFC * 4.0;
  /* 0x14008E0C1: size xmm7 = 4.0 (0x14008DA75), colour xmm6 = 1.0 (0x14008E058) */
  sub_14008D560(&position, 4.0f, 1.0f, 1.0f, 1.0f);
  integer_difference = 0;
  scaled_index_4 = 22LL * (int)g_189F0EF4C;
  integer_difference_2 = 0;
  integer_difference_3 = dword_140404A6C[scaled_index_4 + 225368670] - dword_140404A6C[scaled_index_4 + 225368674];
  integer_difference_4 = dword_140404A6C[scaled_index_4 + 225368669] - dword_140404A6C[scaled_index_4 + 225368672];
  if ( g_189F0EF50 == 1 )
    integer_difference = (unsigned int)(integer_difference_3 - 1);
  if ( g_189F0EF50 == 2 )
  {
    integer_difference = integer_difference_4 - 1;
    integer_difference_2 = integer_difference_3 - 1;
  }
  else if ( g_189F0EF50 == 3 )
  {
    integer_difference = 0;
    integer_difference_2 = integer_difference_4 - 1;
  }
  else if ( (int)g_189F0EF50 <= 0 )
  {
    goto LABEL_68;
  }
  remaining_count = g_189F0EF50;
  do
  {
    cached_integer_difference = integer_difference_4;
    integer_difference_4 = integer_difference_3;
    integer_difference_3 = cached_integer_difference;
    --remaining_count;
  }
  while ( remaining_count );
LABEL_68:
  integer_difference_5 = g_189F0EEF8 - dword_140404A6C[scaled_index_4 + 225368673];
  /* 0x14008E171: cvtdq2ps, a signed conversion (the C converted the unsigned difference) */
  position = (float)(int)(g_189F0EEF4 - (unsigned int)integer_difference) * 4.0;
  unused_written_slot = (float)integer_difference_5 * 4.0;
  unused_written_slot_2 = (float)(int)(g_189F0EEFC - integer_difference_2) * 4.0;
  /* 0x14008E1CE: sizes ecx (v55) * 4 (0x14008E14F), dword [r11+r15+7B34BA8h] * 4 (0x14008E142), edx (v54) * 4
     (0x14008E158); colour 1, 1, xmm11 = 0 (0x14008D863) */
  sub_14008D280(
    &position,
    (float)(int)integer_difference_4 * 4.0f,
    (float)(int)dword_140404A6C[scaled_index_4 + 225368671] * 4.0f,
    (float)(int)integer_difference_3 * 4.0f,
    1.0f,
    1.0f,
    0.0f);
  if ( !g_189F0EEA4 )
  {
    iteration_count_2 = 0;
    if ( (int)g_175EFB090 > 0 )
    {
      record_byte_offset = &g_175EFB0EC;
      while ( 1 )
      {
        product_difference = (float)(int)*(record_byte_offset - 4);
        position = (float)(int)*(record_byte_offset - 5) * 4.0;
        product_difference_2 = (float)(int)*(record_byte_offset - 3);
        unused_written_slot = product_difference * 4.0;
        unused_written_slot_2 = product_difference_2 * 4.0;
        /* 0x14008E257: sizes xmm7 = 4.0 (0x14008DA75); colour 1, xmm11 = 0 (0x14008D863), 1 */
        sub_14008D280(&position, 4.0f, 4.0f, 4.0f, 1.0f, 0.0f, 1.0f);
        loaded_word = *record_byte_offset;
        scaled_index_5 = *(record_byte_offset - 2);
        saved_loaded_word = *(record_byte_offset - 1);
        integer_difference_6 = loaded_word - 1;
        if ( scaled_index_5 == 2 )
          break;
        integer_difference_7 = integer_difference_6;
        if ( scaled_index_5 != 1 )
          integer_difference_7 = 0;
        if ( scaled_index_5 == 3 )
        {
          integer_difference_7 = 0;
          integer_difference_6 = saved_loaded_word - 1;
LABEL_78:
          remaining_count_2 = *(record_byte_offset - 2);
          do
          {
            cached_loaded_word = saved_loaded_word;
            saved_loaded_word = loaded_word;
            loaded_word = cached_loaded_word;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          goto LABEL_80;
        }
        integer_difference_6 = 0;
        if ( scaled_index_5 > 0 )
          goto LABEL_78;
LABEL_80:
        product_difference_3 = (float)(int)(*(record_byte_offset - 5) - integer_difference_7);
        scaled_index_6 = *(record_byte_offset - 3) - integer_difference_6;
        unused_written_slot = (float)(int)*(record_byte_offset - 4) * 4.0;
        position = product_difference_3 * 4.0;
        unused_written_slot_2 = (float)scaled_index_6 * 4.0;
        /* 0x14008E325: sizes ecx (v66) * 4 (0x14008E2DA), [rbx+4] * 4 (0x14008E2B7), edx (v64) * 4 (0x14008E2ED);
           colour xmm6 = 1.0 */
        sub_14008D280(&position, (float)(int)saved_loaded_word * 4.0f, (float)(int)record_byte_offset[1] * 4.0f, (float)(int)loaded_word * 4.0f, 1.0f, 1.0f, 1.0f);
        ++iteration_count_2;
        record_byte_offset += 24;
        if ( iteration_count_2 >= (int)g_175EFB090 )
          goto LABEL_81;
      }
      integer_difference_7 = saved_loaded_word - 1;
      goto LABEL_78;
    }
    goto LABEL_120;
  }
LABEL_81:
  if ( g_189F0EEA4 == 1 )
  {
    iteration_count_3 = g_189F0EF20;
    state_word = g_189F0EF2C;
    if ( (int)g_189F0EF20 > (int)g_189F0EF2C )
      goto LABEL_120;
    void_4 = g_189F0EF30;
    state_word_2 = g_189F0EF28;
    do
    {
      iteration_count_4 = g_189F0EF24;
      if ( (int)g_189F0EF24 <= (int)void_4 )
      {
        do
        {
          iteration_count_5 = g_189F0EF1C;
          if ( (int)g_189F0EF1C <= state_word_2 )
          {
            unused_written_slot = (float)((float)iteration_count_3 * 4.0) - 0.125;
            unused_written_slot_2 = (float)((float)iteration_count_4 * 4.0) - 0.125;
            do
            {
              position = (float)((float)iteration_count_5 * 4.0) - 0.125;
              /* 0x14008E3FB: size xmm9 = 4.25 (0x14008E34C), colour xmm6 = 1.0 */
              sub_14008D560(&position, 4.25f, 1.0f, 1.0f, 1.0f);
              state_word_2 = g_189F0EF28;
              ++iteration_count_5;
            }
            while ( iteration_count_5 <= (int)g_189F0EF28 );
            void_4 = g_189F0EF30;
          }
          ++iteration_count_4;
        }
        while ( iteration_count_4 <= (int)void_4 );
        state_word = g_189F0EF2C;
      }
      ++iteration_count_3;
    }
    while ( iteration_count_3 <= (int)state_word );
  }
  if ( g_189F0EEA4 == 3 )
  {
    position = (float)((float)(int)g_189F0EEF4 * 4.0) - 0.125;
    unused_written_slot = (float)((float)(int)g_189F0EEF8 * 4.0) - 0.125;
    unused_written_slot_2 = (float)((float)(int)g_189F0EEFC * 4.0) - 0.125;
    /* 0x14008E49C: size xmm9 = 4.25 (0x14008E34C), colour xmm6 = 1.0 */
    sub_14008D560(&position, 4.25f, 1.0f, 1.0f, 1.0f);
    element_index = 0;
    if ( (int)g_1B4277C40 > 0 )
    {
      record_byte_offset_2 = &g_1B4277C4C;
      do
      {
        scratch_buffer[8] = 1065353216;
        glVertexAttrib4f(2,0x1.8000000000000p+0f,0x1.0000000000000p-1f,0x0.0p+0f,0x1.0000000000000p+0f);
        sub_140125670(&dword_140404A6C[4 * element_index + 486132854], 0.5, 2);
        *(_QWORD *)&angle = record_byte_offset_2[1];
        frame_float_at_208 = 1.0;
        matrix = xmmword_140278D30;
        cached_xmmword_140278d30 = xmmword_140278D30;
        sr_math_mat3_rotate_rows((__int64)&matrix, (float *)&matrix + 3, angle);
        combined_products = *((float *)record_byte_offset_2 - 1) - *((float *)&cached_xmmword_140278d30 + 3);
        position = *((float *)record_byte_offset_2 - 2) - *((float *)&cached_xmmword_140278d30 + 2);
        scaled_value = *(float *)record_byte_offset_2;
        unused_written_slot = combined_products;
        unused_written_slot_2 = scaled_value - frame_float_at_208;
        sub_140125670((unsigned int *)&position, 0.5, 2);
        ++element_index;
        record_byte_offset_2 += 4;
      }
      while ( element_index < (int)g_1B4277C40 );
    }
  }
  if ( g_189F0EEA4 == 2 )
  {
    iteration_count_6 = 0;
    g_1AD299450 = xmmword_1402796D0;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    if ( (int)g_16E48987C > 0 )
    {
      state_address = &g_16E48988C;
      do
      {
        if ( iteration_count_6 == g_189F0EF5C )
          cached_xmmword_140279700 = xmmword_140279700;
        else
          cached_xmmword_140279700 = xmmword_1402796D0;
        scaled_index_7 = (int)*(state_address - 2);
        g_1AD299450 = cached_xmmword_140279700;
        scaled_index_8 = dword_140404A6C[3 * scaled_index_7 + 193070982];
        scaled_index_9 = dword_140404A6C[3 * scaled_index_7 + 193070980];
        scaled_index_10 = 3LL * (int)*(state_address - 3);
        scaled_index_11 = dword_140404A6C[3 * *(state_address - 3) + 193070982];
        scaled_index_12 = dword_140404A6C[3 * *(state_address - 3) + 193070980];
        component_delta = (float)(scaled_index_11 - scaled_index_8);
        component_delta_2 = (float)(scaled_index_9 - scaled_index_12);
        square_root = fsqrt((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta));
        if ( square_root == 0.0 )
        {
          saved_scaled_ratio_2 = 0.0;
          scaled_ratio_2 = 0.0;
          scaled_ratio = 0.0;
        }
        else
        {
          scaled_ratio = (float)(1.0 / square_root) * component_delta_2;
          scaled_ratio_2 = (float)(1.0 / square_root) * component_delta;
          saved_scaled_ratio_2 = scaled_ratio_2;
        }
        component_sum = (float)(int)dword_140404A6C[scaled_index_10 + 193070981];
        scaled_value_9 = (float)scaled_index_9 * 4.0;
        *(float *)position_4 = scaled_value_9;
        scaled_value_2 = (float)scaled_index_12 * 4.0;
        *(float *)&float_word_4 = (float)(component_sum * 4.0) + 0.25;
        scaled_value_3 = (float)scaled_index_11 * 4.0;
        weighted_sum = (float)((float)(int)dword_140404A6C[3 * scaled_index_7 + 193070981] * 4.0) + 0.25;
        *(float *)&position_4[1] = weighted_sum;
        saved_scaled_ratio = scaled_ratio;
        *(float *)position_3 = scaled_value_2;
        float_word_5 = float_word_4;
        scaled_value_10 = (float)(int)scaled_index_8 * 4.0;
        *(float *)&position_4[2] = scaled_value_10;
        position_3[1] = float_word_4;
        *(float *)&position_3[2] = scaled_value_3;
        sr_renderer_batch_vertex3fv(position_3, scaled_index_10, scaled_index_8);
        sr_renderer_batch_vertex3fv(position_4, unrecovered_register_value_30, unrecovered_register_value_31);
        component_sum_2 = scaled_ratio_2 + scaled_ratio_2;
        unused_written_slot = *(float *)&float_word_4;
        unused_written_slot_4 = weighted_sum;
        component_sum_3 = scaled_ratio + scaled_ratio;
        iteration_count_7 = 0;
        component_delta_3 = scaled_value_2 - (float)(scaled_ratio_2 + scaled_ratio_2);
        component_delta_4 = scaled_value_10 - (float)(scaled_ratio + scaled_ratio);
        component_delta_5 = scaled_value_3 - (float)(scaled_ratio + scaled_ratio);
        component_delta_8 = scaled_value_9 - (float)(scaled_ratio_2 + scaled_ratio_2);
        position = component_delta_3;
        position_2 = component_delta_8;
        unused_written_slot_6 = component_delta_4;
        unused_written_slot_2 = component_delta_5;
        unused_written_slot_5 = component_delta_4;
        if ( (int)*state_address > 0 )
        {
          component_delta_6 = scaled_value_9 - (float)(scaled_ratio_2 + scaled_ratio_2);
          unused_written_slot_3 = scaled_ratio;
          scaled_value_4 = scaled_ratio * 4.0;
          scaled_value_5 = scaled_ratio_2 * 4.0;
          component_delta_7 = component_delta_4;
          do
          {
            sr_renderer_batch_vertex3fv((unsigned int *)&position, state_word, unrecovered_register_value_29);
            sr_renderer_batch_vertex3fv((unsigned int *)&position_2, unrecovered_register_value_32, unrecovered_register_value_33);
            component_delta_3 = component_delta_3 - scaled_value_5;
            ++iteration_count_7;
            component_delta_5 = component_delta_5 - scaled_value_4;
            component_delta_6 = component_delta_6 - scaled_value_5;
            component_delta_7 = component_delta_7 - scaled_value_4;
            position = component_delta_3;
            unused_written_slot_2 = component_delta_5;
            position_2 = component_delta_6;
            unused_written_slot_5 = component_delta_7;
          }
          while ( iteration_count_7 < (int)*state_address );
          scaled_ratio = saved_scaled_ratio;
          scaled_ratio_2 = saved_scaled_ratio_2;
        }
        component_sum_4 = scaled_value_2 + component_sum_2;
        component_sum_5 = component_sum_2 + scaled_value_9;
        component_sum_6 = scaled_value_3 + component_sum_3;
        unused_written_slot = *(float *)&float_word_5;
        component_sum_7 = component_sum_3 + scaled_value_10;
        iteration_count_8 = 0;
        position = component_sum_4;
        position_2 = component_sum_5;
        unused_written_slot_2 = component_sum_6;
        unused_written_slot_5 = component_sum_7;
        unused_written_slot_4 = weighted_sum;
        if ( (int)state_address[1] > 0 )
        {
          scaled_value_6 = scaled_ratio_2 * 4.0;
          scaled_value_7 = scaled_ratio * 4.0;
          do
          {
            sr_renderer_batch_vertex3fv((unsigned int *)&position, state_word, unrecovered_register_value_29);
            sr_renderer_batch_vertex3fv((unsigned int *)&position_2, unrecovered_register_value_34, unrecovered_register_value_35);
            component_sum_4 = component_sum_4 + scaled_value_6;
            ++iteration_count_8;
            component_sum_6 = component_sum_6 + scaled_value_7;
            component_sum_5 = component_sum_5 + scaled_value_6;
            component_sum_7 = component_sum_7 + scaled_value_7;
            position = component_sum_4;
            unused_written_slot_2 = component_sum_6;
            position_2 = component_sum_5;
            unused_written_slot_5 = component_sum_7;
          }
          while ( iteration_count_8 < (int)state_address[1] );
        }
        ++iteration_count_6;
        state_address += 13;
      }
      while ( iteration_count_6 < (int)g_16E48987C );
    }
    sr_renderer_batch_flush(void_4, state_word, unrecovered_register_value_29);
    g_1AD299450 = xmmword_140279550;
    position = (float)(int)g_189F0EEF4 * 4.0;
    unused_written_slot = (float)(int)g_189F0EEF8 * 4.0;
    unused_written_slot_2 = (float)(int)g_189F0EEFC * 4.0;
    sub_140125670((unsigned int *)&position, 1.0, 2);
    if ( (int)g_16E486878 > 0 )
    {
      state_address_2 = (int *)&g_16E486880;
      do
      {
        g_1AD299450 = xmmword_140279690;
        if ( iteration_count == g_189F0EF54 )
        {
          *(unsigned int *)&g_1AD299450 = 1065353216;
          g_1AD299454 = 1065353216;
          g_1AD299458 = 1065353216;
        }
        if ( iteration_count == g_189F0EF58 )
        {
          *(unsigned int *)&g_1AD299450 = 1065353216;
          g_1AD299454 = 1061158912;
          g_1AD299458 = 1061158912;
        }
        scaled_value_8 = (float)*state_address_2;
        position = (float)*(state_address_2 - 1) * 4.0;
        source_component_y = (float)state_address_2[1];
        unused_written_slot = scaled_value_8 * 4.0;
        unused_written_slot_2 = source_component_y * 4.0;
        sub_140125670((unsigned int *)&position, 1.0, 2);
        ++iteration_count;
        state_address_2 += 3;
      }
      while ( iteration_count < (int)g_16E486878 );
    }
  }
LABEL_120:
  LOBYTE(void_4) = 1;
  glDepthMask(void_4);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef position
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef position_2
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef saved_scaled_ratio
#undef saved_scaled_ratio_2
#undef scaled_value_9
#undef weighted_sum
#undef scaled_value_10
#undef component_delta_8
#undef unused_written_slot_6
#undef float_word_5
#undef position_3
#undef position_4
#undef matrix
#undef cached_xmmword_140278d30
#undef frame_float_at_208
#undef unused_frame_slot_216

// 14008DEAD: conditional instruction was optimized away because ebx.4==2

//----- (0000000140092140) ----------------------------------------------------
__int64            sub_140092140(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 result;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int *state_address_3;
  unsigned int *state_address_4;

  result = (int)g_18417E1B4;
  if ( (int)g_18417E1B4 < 4096 )
  {
    dword_140404A6C[30 * g_18417E1B4 + 284554707] = a1;
    dword_140404A6C[30 * g_18417E1B4 + 284554708] = a1;
    dword_140404A6C[30 * g_18417E1B4 + 284554711] = *a2;
    dword_140404A6C[30 * g_18417E1B4 + 284554712] = a2[1];
    dword_140404A6C[30 * g_18417E1B4 + 284554713] = a2[2];
    dword_140404A6C[30 * g_18417E1B4 + 284554714] = a2[3];
    dword_140404A6C[30 * g_18417E1B4 + 284554710] = a3;
    state_address = &dword_140404A6C[30 * g_18417E1B4 + 284554715];
    *state_address = *a4;
    state_address[1] = a4[1];
    state_address[2] = a4[2];
    state_address_2 = &dword_140404A6C[30 * g_18417E1B4 + 284554718];
    *state_address_2 = *a5;
    state_address_2[1] = a5[1];
    state_address_2[2] = a5[2];
    state_address_3 = &dword_140404A6C[30 * g_18417E1B4 + 284554721];
    *state_address_3 = a5[3];
    state_address_3[1] = a5[4];
    state_address_3[2] = a5[5];
    state_address_4 = &dword_140404A6C[30 * g_18417E1B4 + 284554724];
    *state_address_4 = a5[6];
    state_address_4[1] = a5[7];
    state_address_4[2] = a5[8];
    dword_140404A6C[30 * g_18417E1B4 + 284554727] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554728] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554729] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554730] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554731] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554732] = 1065353216;
    dword_140404A6C[30 * g_18417E1B4 + 284554733] = 0;
    dword_140404A6C[30 * g_18417E1B4 + 284554734] = 0;
    dword_140404A6C[30 * g_18417E1B4 + 284554735] = 0;
    result = (int)g_18417E1B4;
    dword_140404A6C[30 * g_18417E1B4++ + 284554736] = 0;
  }
  return result;
}

//----- (0000000140092D70) ----------------------------------------------------
__int64 sub_140092D70()
{
  unsigned int *state_address;
  __int64 running_total;
  __int64 remaining_count;
  __int64 scaled_index;
  float abs32_result;
  int integer_difference;
  int scaled_index_2;
  __int64 scaled_index_3;
  __int64 integer_sum;
  __int16 *record_byte_offset;
  unsigned __int64 remaining_count_2;
  float abs16_result;
  float abs16_result_2;
  __m128i abs16_result_3;
  int loaded_word;
  __int64 remaining_count_3;
  __int16 *buffer_cursor;
  int loaded_word_2;
  float *buffer_cursor_2;
  float *record_byte_offset_2;
  __int64 remaining_count_4;
  unsigned int scaled_index_4;
  unsigned int masked_bits;
  unsigned int scaled_index_5;
  signed __int64 state_address_2;
  float limited_value;
  float product_difference;
  __int64 remaining_count_5;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  __int64 unused_local;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140092D70[224];
#define scratch_buffer (*(_DWORD (*)[21])(void *)(sr_frame_140092D70 + 0)) /* [rsp+0h] */
#define scratch_buffer_2 (*(_DWORD (*)[11])(void *)(sr_frame_140092D70 + 84)) /* [rsp+54h] */
#define unused_written_slot (*(__int128 (*))(void *)(sr_frame_140092D70 + 128)) /* [rsp+80h] */
#define scratch_buffer_3 (*(_OWORD (*)[4])(void *)(sr_frame_140092D70 + 144)) /* [rsp+90h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_140092D70 + 208)) /* [rsp+D0h] */

  state_address = &g_189C1DC90;
  running_total = 0;
  remaining_count = 8;
  do
  {
    if ( *(state_address - 4) )
    {
      scaled_index = (int)*state_address;
      if ( (_DWORD)scaled_index != -1 )
      {
        abs32_result = 0.0;
        integer_difference = state_address[30731] - 1;
        if ( !state_address[30731] )
          integer_difference = 63;
        scaled_index_2 = 960 * integer_difference;
        scaled_index_3 = scaled_index_2;
        integer_sum = scaled_index_2 + 960;
        if ( scaled_index_2 < integer_sum )
        {
          if ( integer_sum - scaled_index_2 < 4 )
            goto LABEL_11;
          record_byte_offset = (__int16 *)&dword_140404A6C[scaled_index_2 / 2u + 308307091 + running_total] + 1;
          remaining_count_2 = ((unsigned __int64)(integer_sum - scaled_index_2 - 4) >> 2) + 1;
          scaled_index_3 = scaled_index_2 + 4 * remaining_count_2;
          do
          {
            abs16_result = (float)abs16(record_byte_offset[2]);
            abs16_result_2 = (float)abs16(record_byte_offset[1]);
            abs16_result_3 = _mm_cvtsi32_si128(abs16(*(record_byte_offset - 1)));
            loaded_word = *record_byte_offset;
            record_byte_offset += 4;
            abs32_result = abs32_result
               + (float)((float)((float)(abs16_result * 0.0009765625) + (float)(abs16_result_2 * 0.0009765625))
                       + (float)((float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(abs16_result_3), f32)[0] * 0.0009765625)
                               + (float)((float)(int)abs32(loaded_word) * 0.0009765625)));
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          if ( scaled_index_3 < integer_sum )
          {
LABEL_11:
            remaining_count_3 = integer_sum - scaled_index_3;
            buffer_cursor = (__int16 *)&g_189C1DCB8 + scaled_index_3 + running_total * 2;
            do
            {
              loaded_word_2 = *buffer_cursor++;
              abs32_result = abs32_result + (float)((float)(int)abs32(loaded_word_2) * 0.0009765625);
              --remaining_count_3;
            }
            while ( remaining_count_3 );
          }
        }
        buffer_cursor_2 = (float *)scratch_buffer_3;
        g_1A724E600 = xmmword_140278D30;
        record_byte_offset_2 = (float *)scratch_buffer_2;
        g_1A724E63C = 1065353216;
        remaining_count_4 = 4;
        g_1A724E610 = xmmword_140278D80;
        g_1A724E620 = xmmword_140278E20;
        scratch_buffer_2[2] = 0;
        scratch_buffer[20] = *(unsigned int *)&g_183F7C550;
        scaled_index_4 = dword_140404A6C[344 * scaled_index + 284956344];
        *(float *)&masked_bits = *(float *)&dword_140404A6C[344 * scaled_index + 284956345] + 1.125;
        scaled_index_5 = dword_140404A6C[344 * scaled_index + 284956346];
        scratch_buffer_2[0] = *(unsigned int *)&g_183F7C554;
        state_address_2 = (char *)(unsigned int *)&g_1A724E610 - (char *)scratch_buffer_3;
        scratch_buffer_2[1] = *(unsigned int *)&g_183F7C558;
        scratch_buffer_2[3] = *(unsigned int *)&g_183F7C55C;
        scratch_buffer_2[4] = *(unsigned int *)&g_183F7C560;
        scratch_buffer_2[5] = *(unsigned int *)&g_183F7C564;
        scratch_buffer_2[6] = 0;
        scratch_buffer_2[7] = *(unsigned int *)&g_183F7C568;
        scratch_buffer_2[8] = *(unsigned int *)&g_183F7C56C;
        limited_value = fmaxf(abs32_result * 0.0010416667, 0.25);
        g_1A724E634 = masked_bits;
        *(unsigned int *)&g_1A724E630 = scaled_index_4;
        g_1A724E638 = scaled_index_5;
        scratch_buffer_2[9] = *(unsigned int *)&g_183F7C570;
        scratch_buffer_2[10] = 0;
        unused_written_slot = xmmword_140279490;
        do
        {
          product_difference = *(record_byte_offset_2 - 1);
          remaining_count_5 = 4;
          scaled_value = *record_byte_offset_2;
          source_component_y = record_byte_offset_2[1];
          source_component_z = record_byte_offset_2[2];
          do
          {
            *buffer_cursor_2 = (float)((float)(source_component_z * *(float *)((char *)buffer_cursor_2 + state_address_2 + 32))
                         + (float)(source_component_y * *(float *)((char *)buffer_cursor_2 + state_address_2 + 16)))
                 + (float)((float)(product_difference * *(float *)((char *)buffer_cursor_2 + state_address_2 - 16))
                         + (float)(scaled_value * *(float *)((char *)buffer_cursor_2 + state_address_2)));
            ++buffer_cursor_2;
            --remaining_count_5;
          }
          while ( remaining_count_5 );
          record_byte_offset_2 += 4;
          state_address_2 -= 16LL;
          --remaining_count_4;
        }
        while ( remaining_count_4 );
        g_1A724E600 = scratch_buffer_3[0];
        g_1A724E610 = scratch_buffer_3[1];
        g_1A724E620 = scratch_buffer_3[2];
        g_1A724E630 = scratch_buffer_3[3];
        sr_math_mat4_multiply(
          (unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E600,
          (__int64)(unsigned int *)&g_1A724E5C0);
        sr_math_mat4_multiply(
          (unsigned int *)&g_1A724E6C0,
          (__int64)(unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E580);
        glBindTexture(3553, dword_140404A6C[44 * g_183EBF120 + 284024944]);
        sr_renderer_draw_textured_rect(0.0, 0.0, 0x3E280000 /* native XMM2 width 0.1640625f */, 0.1640625, 133, 1065353216, 1065353216, 1065353216, COERCE_INT(limited_value * 0.75f));
        g_1A724E600 = xmmword_140278D30;
        g_1A724E610 = xmmword_140278D80;
        g_1A724E620 = xmmword_140278E20;
        g_1A724E630 = xmmword_140279490;
        sr_math_mat4_multiply(
          (unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E600,
          (__int64)(unsigned int *)&g_1A724E5C0);
        sr_math_mat4_multiply(
          (unsigned int *)&g_1A724E6C0,
          (__int64)(unsigned int *)&g_1A724E640,
          (__int64)(unsigned int *)&g_1A724E580);
      }
    }
    state_address += 96401;
    running_total += 96401;
    --remaining_count;
  }
  while ( remaining_count );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef scratch_buffer_2
#undef unused_written_slot
#undef scratch_buffer_3
#undef unused_frame_slot_208

//----- (00000001400932D0) ----------------------------------------------------
_UNKNOWN **           sub_1400932D0()
{
  int selection_code;
  int float_word;
  unsigned int call_result;
  int float_word_2;
  int float_word_3;
  float cached_selection_code;
  signed int remaining_amount;
  float scaled_value;
  int cached_game_tick;
  double limited_value;
  char float_word_4;
  unsigned int masked_bits;
  unsigned int masked_bits_2;
  __int64 saved_masked_bits;
  __int64 running_total;
  __int64 saved_masked_bits_2;
  unsigned int *state_address;
  __int64 remaining_count;
  __int64 running_total_2;
  __int64 cached_masked_bits;
  unsigned __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  float weighted_sum;
  __int64 scaled_index_4;
  float weighted_sum_2;
  float component_delta;
  float weighted_sum_3;
  float saved_weighted_sum;
  float weighted_sum_4;
  float weighted_sum_5;
  float component_delta_2;
  float weighted_sum_6;
  unsigned int state_address_2;
  float weighted_sum_7;
  float weighted_sum_8;
  unsigned int state_address_3;
  float weighted_sum_9;
  unsigned int state_address_4;
  float weighted_sum_10;
  unsigned int state_address_5;
  float weighted_sum_11;
  unsigned int state_address_6;
  unsigned __int64 scaled_index_5;
  float *running_total_3;
  unsigned __int64 state_address_7;
  __int64 remaining_count_2;
  __int64 remaining_count_3;
  float *state_address_8;
  float *state_address_9;
  __int64 running_total_4;
  float product_difference;
  float scaled_value_2;
  __int64 loaded_word;
  float scaled_value_3;
  float scaled_value_4;
  __int64 scaled_index_6;
  float state_address_10;
  float state_address_11;
  float state_address_12;
  float state_address_13;
  float source_component_y;
  float state_address_14;
  float state_address_15;
  float product_difference_2;
  float product_difference_3;
  float product_difference_4;
  float combined_products;
  float weighted_sum_12;
  float weighted_sum_13;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  unsigned int *state_address_16;
  __int64 running_total_5;
  __int64 running_total_6;
  __int64 remaining_count_4;
  __int64 scaled_index_7;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  __int64 scaled_index_8;
  unsigned int state_address_17;
  float weighted_sum_20;
  unsigned int state_address_18;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  float weighted_sum_21;
  unsigned int state_address_19;
  float weighted_sum_22;
  __int64 scaled_index_11;
  float weighted_sum_23;
  __int64 scaled_index_12;
  unsigned int masked_bits_3;
  float weighted_sum_24;
  unsigned int state_address_20;
  float weighted_sum_25;
  __int64 scaled_index_13;
  __int64 scaled_index_14;
  float weighted_sum_26;
  unsigned int state_address_21;
  float weighted_sum_27;
  float weighted_sum_28;
  __int64 scaled_index_15;
  __int64 scaled_index_16;
  unsigned int masked_bits_4;
  float weighted_sum_29;
  unsigned int state_address_22;
  float weighted_sum_30;
  __int64 running_total_7;
  unsigned int *state_address_23;
  __int64 running_total_8;
  __int64 remaining_count_5;
  float *state_address_24;
  __int64 scaled_index_17;
  unsigned int state_address_25;
  float combined_products_2;
  float weighted_sum_31;
  float weighted_sum_32;
  float weighted_sum_33;
  unsigned int state_address_26;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400932D0[32];
#define lookup_index (*(__int64 (*))(void *)(sr_frame_1400932D0 + 0)) /* [rsp+A0h] */
#define state_address_27 (*(unsigned int * (*))(void *)(sr_frame_1400932D0 + 8)) /* [rsp+A8h] */
#define integer_difference (*(__int64 (*))(void *)(sr_frame_1400932D0 + 16)) /* [rsp+B0h] */
#define cached_masked_bits_2 (*(__int64 (*))(void *)(sr_frame_1400932D0 + 24)) /* [rsp+B8h] */

  selection_code = 16;
  if ( frame_slow_pacing )
    selection_code = 100;
  float_word = sub_140198F9B() - g_1A4D3BD20;
  call_result = sub_140198F9B();
  float_word_2 = 4 * selection_code;
  g_1A4D3BD20 = call_result;
  float_word_3 = 0;
  if ( float_word >= 0 )
    float_word_3 = float_word;
  cached_selection_code = (float)selection_code;
  if ( float_word_3 <= float_word_2 )
    float_word_2 = float_word_3;
  remaining_amount = float_word_2 + g_1A4D3BD24;
  scaled_value = (float)(selection_code * game_tick);
  if ( (float)(float_word_2 + g_1A4D3BD24) > (float)(scaled_value - (float)(cached_selection_code * 0.125)) )
    remaining_amount -= (unsigned int)selection_code >> 3;
  if ( (float)remaining_amount < (float)(scaled_value - (float)((float)(g_1A4D3BD28 + 0.125) * cached_selection_code)) )
    remaining_amount += (unsigned int)selection_code >> 4;
  if ( remaining_amount > (signed int)(selection_code * game_tick) )
    remaining_amount = selection_code * game_tick;
  g_1A4D3BD24 = remaining_amount;
  if ( remaining_amount < (signed int)(selection_code * (game_tick - 20)) )
  {
    remaining_amount = (int)(float)(scaled_value - (float)(cached_selection_code * 20.0));
    g_1A4D3BD24 = remaining_amount;
  }
  if ( replay_active && remaining_amount < (signed int)(selection_code * (game_tick - 1)) )
  {
    remaining_amount = (int)(float)(scaled_value - cached_selection_code);
    g_1A4D3BD24 = remaining_amount;
  }
  cached_game_tick = remaining_amount / selection_code;
  if ( remaining_amount / selection_code > (int)game_tick )
    cached_game_tick = game_tick;
  *(_QWORD *)&limited_value = COERCE_UNSIGNED_INT((float)(remaining_amount - selection_code * cached_game_tick));
  *(float *)&limited_value = fmaxf(*(float *)&limited_value / cached_selection_code, 0.0);
  if ( *(float *)&limited_value > 1.0 )
    *(_QWORD *)&limited_value = 1065353216;
  float_word_4 = cached_game_tick + 1;
  masked_bits = cached_game_tick & 0x3F;
  masked_bits_2 = float_word_4 & 0x3F;
  if ( !g_151E46204 || g_16B165F68 )
  {
    *(_QWORD *)&limited_value = 1065353216;
    masked_bits_2 = game_tick & 0x3F;
    masked_bits = masked_bits_2;
  }
  saved_masked_bits = masked_bits;
  running_total = 0;
  saved_masked_bits_2 = masked_bits_2;
  state_address = &g_18329E308;
  remaining_count = 256;
  state_address_27 = &g_18329E308;
  running_total_2 = 0;
  integer_difference = 256;
  lookup_index = saved_masked_bits;
  cached_masked_bits = (unsigned int)saved_masked_bits;
  cached_masked_bits_2 = saved_masked_bits_2;
  do
  {
    if ( *state_address )
    {
      scaled_index = 563328 * cached_masked_bits;
      scaled_index_2 = 140832 * saved_masked_bits_2;
      scaled_index_3 = 563328 * cached_masked_bits + running_total_2 * 4;
      weighted_sum = *(float *)((char *)&g_1A4D3BD3C + scaled_index_3);
      scaled_index_4 = 563328 * saved_masked_bits_2 + running_total_2 * 4;
      weighted_sum_2 = *(float *)((char *)&g_1A4D3BD3C + scaled_index_4);
      if ( (float)(weighted_sum - weighted_sum_2) >= 3.14159265359 )
        weighted_sum_2 = weighted_sum_2 + 6.28318530718;
      if ( (float)(weighted_sum_2 - weighted_sum) >= 3.14159265359 )
        weighted_sum = weighted_sum + 6.28318530718;
      component_delta = weighted_sum_2 - weighted_sum;
      weighted_sum_3 = *(float *)((char *)&g_1A4D3BD44 + scaled_index_3);
      saved_weighted_sum = weighted_sum_3;
      *(float *)&dword_140404A6C[running_total_2 + 284956337] = (float)(component_delta * *(float *)&limited_value)
                                                  + *(float *)((char *)&g_1A4D3BD3C + scaled_index_3);
      weighted_sum_4 = *(float *)((char *)&g_1A4D3BD44 + scaled_index_4);
      if ( (float)(weighted_sum_3 - weighted_sum_4) >= 3.14159265359 )
        weighted_sum_4 = weighted_sum_4 + 6.28318530718;
      if ( (float)(weighted_sum_4 - weighted_sum_3) >= 3.14159265359 )
        weighted_sum_3 = weighted_sum_3 + 6.28318530718;
      weighted_sum_5 = *(float *)((char *)&g_1A4D3BD4C + scaled_index_4);
      component_delta_2 = weighted_sum_4 - weighted_sum_3;
      weighted_sum_6 = *(float *)((char *)&g_1A4D3BD5C + scaled_index_3);
      *(float *)&state_address_2 = (float)(component_delta_2 * *(float *)&limited_value) + saved_weighted_sum;
      weighted_sum_7 = *(float *)((char *)&g_1A4D3BD60 + scaled_index_3);
      dword_140404A6C[running_total_2 + 284956339] = state_address_2;
      weighted_sum_8 = *(float *)((char *)&g_1A4D3BD50 + scaled_index_3);
      *(float *)&dword_140404A6C[running_total_2 + 284956341] = (float)((float)(weighted_sum_5
                                                                  - *(float *)((char *)&g_1A4D3BD4C + scaled_index_3))
                                                          * *(float *)&limited_value)
                                                  + *(float *)((char *)&g_1A4D3BD4C + scaled_index_3);
      *(float *)&state_address_3 = (float)((float)(*(float *)((char *)&g_1A4D3BD50 + scaled_index_4) - weighted_sum_8) * *(float *)&limited_value)
                     + weighted_sum_8;
      weighted_sum_9 = *(float *)((char *)&g_1A4D3BD54 + scaled_index_3);
      dword_140404A6C[running_total_2 + 284956342] = state_address_3;
      *(float *)&state_address_4 = (float)((float)(*(float *)((char *)&g_1A4D3BD54 + scaled_index_4) - weighted_sum_9) * *(float *)&limited_value)
                     + weighted_sum_9;
      weighted_sum_10 = *(float *)((char *)&g_1A4D3BD58 + scaled_index_3);
      dword_140404A6C[running_total_2 + 284956343] = state_address_4;
      *(float *)&state_address_5 = (float)((float)(*(float *)((char *)&g_1A4D3BD58 + scaled_index_4) - weighted_sum_10) * *(float *)&limited_value)
                     + weighted_sum_10;
      weighted_sum_11 = *(float *)((char *)&g_1A4D3BD5C + scaled_index_4);
      dword_140404A6C[running_total_2 + 284956344] = state_address_5;
      *(float *)&state_address_6 = (float)((float)(*(float *)((char *)&g_1A4D3BD60 + scaled_index_4) - weighted_sum_7) * *(float *)&limited_value)
                     + weighted_sum_7;
      *(float *)&dword_140404A6C[running_total_2 + 284956345] = (float)((float)(weighted_sum_11 - weighted_sum_6) * *(float *)&limited_value) + weighted_sum_6;
      dword_140404A6C[running_total_2 + 284956346] = state_address_6;
      sub_1400C2F90(
        (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + running_total * 4 + 1144038744),
        (float *)&dword_140404A6C[scaled_index / 4 + 421846206 + running_total],
        (float *)&dword_140404A6C[scaled_index_2 + 421846206 + running_total],
        limited_value);
      scaled_index_5 = scaled_index_2 * 4 - scaled_index;
      running_total_3 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index + running_total * 4 + 1691598300);
      state_address_7 = (char *)&g_18430A5D0 - (char *)&g_1A4D3BDDC - scaled_index;
      remaining_count_2 = 15;
      do
      {
        sub_1400C2F90((float *)((char *)running_total_3 + state_address_7), running_total_3, (float *)((char *)running_total_3 + scaled_index_5), limited_value);
        running_total_3 += 21;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      remaining_count_3 = 15;
      state_address_8 = (float *)&dword_140404A6C[running_total_2 + 284956366];
      state_address_9 = (float *)(unsigned int *)&g_18399DF58;
      running_total_4 = (((intptr_t)dword_140404A6C - 0x404a6cLL) + 84LL) + running_total * 4 + 1144038744;
      do
      {
        product_difference = *(state_address_9 - 1);
        scaled_value_2 = *state_address_9;
        loaded_word = 21LL * *((int *)state_address_9 - 5);
        scaled_value_3 = *state_address_9;
        scaled_value_4 = *state_address_9;
        scaled_index_6 = running_total_2 * 4 + loaded_word * 4;
        state_address_10 = (float)(product_difference * *(float *)&dword_140404A6C[running_total_2 + 284956347 + loaded_word])
            + *(float *)&dword_140404A6C[running_total_2 + 284956344 + loaded_word];
        *(state_address_8 - 1) = state_address_10;
        state_address_11 = (float)(product_difference * *(float *)((char *)&g_18430A55C + scaled_index_6))
            + *(float *)((char *)&g_18430A550 + scaled_index_6);
        *state_address_8 = state_address_11;
        state_address_12 = (float)(product_difference * *(float *)((char *)&g_18430A560 + scaled_index_6))
            + *(float *)((char *)&g_18430A554 + scaled_index_6);
        state_address_8[1] = state_address_12;
        state_address_13 = (float)(scaled_value_3 * *(float *)&dword_140404A6C[running_total_2 + 284956350 + loaded_word]) + state_address_10;
        source_component_y = state_address_9[1];
        *(state_address_8 - 1) = state_address_13;
        state_address_14 = (float)(scaled_value_4 * *(float *)&dword_140404A6C[running_total_2 + 284956351 + loaded_word]) + state_address_11;
        *state_address_8 = state_address_14;
        state_address_15 = (float)(scaled_value_2 * *(float *)&dword_140404A6C[running_total_2 + 284956352 + loaded_word]) + state_address_12;
        state_address_8[1] = state_address_15;
        *(state_address_8 - 1) = (float)(source_component_y * *(float *)&dword_140404A6C[running_total_2 + 284956353 + loaded_word]) + state_address_13;
        *state_address_8 = (float)(source_component_y * *(float *)&dword_140404A6C[running_total_2 + 284956354 + loaded_word]) + state_address_14;
        state_address_8[1] = (float)(source_component_y * *(float *)&dword_140404A6C[running_total_2 + 284956355 + loaded_word]) + state_address_15;
        sr_math_mat3_multiply(running_total_4, running_total_4 + 36, (__int64)&dword_140404A6C[loaded_word + 284956347 + running_total]);
        product_difference_2 = *(state_address_9 - 4) - *(state_address_9 - 1);
        product_difference_3 = *(state_address_9 - 3) - *state_address_9;
        product_difference_4 = *(state_address_9 - 2) - state_address_9[1];
        combined_products = (float)(product_difference_2 * state_address_8[2]) + *(state_address_8 - 1);
        *(state_address_8 - 1) = combined_products;
        weighted_sum_12 = (float)(product_difference_2 * state_address_8[3]) + *state_address_8;
        *state_address_8 = weighted_sum_12;
        weighted_sum_13 = (float)(product_difference_2 * state_address_8[4]) + state_address_8[1];
        state_address_8[1] = weighted_sum_13;
        weighted_sum_14 = (float)(product_difference_3 * state_address_8[5]) + combined_products;
        *(state_address_8 - 1) = weighted_sum_14;
        weighted_sum_15 = (float)(product_difference_3 * state_address_8[6]) + weighted_sum_12;
        *state_address_8 = weighted_sum_15;
        weighted_sum_16 = (float)(product_difference_3 * state_address_8[7]) + weighted_sum_13;
        state_address_8[1] = weighted_sum_16;
        *(state_address_8 - 1) = (float)(product_difference_4 * state_address_8[8]) + weighted_sum_14;
        *state_address_8 = (float)(product_difference_4 * state_address_8[9]) + weighted_sum_15;
        running_total_4 += 84;
        state_address_9 += 25;
        state_address_8[1] = (float)(product_difference_4 * state_address_8[10]) + weighted_sum_16;
        state_address_8 += 21;
        --remaining_count_3;
      }
      while ( remaining_count_3 );
      state_address = state_address_27;
      remaining_count = integer_difference;
      cached_masked_bits = lookup_index;
      saved_masked_bits_2 = cached_masked_bits_2;
    }
    state_address += 7166;
    running_total += 344;
    running_total_2 += 344;
    state_address_27 = state_address;
    integer_difference = --remaining_count;
  }
  while ( remaining_count );
  state_address_16 = &g_15F2D9200;
  running_total_5 = 0;
  running_total_6 = 0;
  remaining_count_4 = 512;
  do
  {
    if ( *state_address_16 )
    {
      scaled_index_7 = 563328 * lookup_index + running_total_6 * 4;
      weighted_sum_17 = *(float *)((char *)&g_1A4D91D3C + scaled_index_7);
      weighted_sum_18 = *(float *)((char *)&g_1A4D91D44 + scaled_index_7);
      weighted_sum_19 = *(float *)((char *)&g_1A4D91D40 + scaled_index_7);
      dword_140404A6C[running_total_6 + 285044400] = *(unsigned int *)((char *)&g_1A4D91D38 + scaled_index_7);
      scaled_index_8 = 563328 * saved_masked_bits_2 + running_total_6 * 4;
      *(float *)&state_address_17 = (float)((float)(*(float *)((char *)&g_1A4D91D3C + scaled_index_8) - weighted_sum_17) * *(float *)&limited_value)
                     + weighted_sum_17;
      weighted_sum_20 = *(float *)((char *)&g_1A4D91D40 + scaled_index_8);
      dword_140404A6C[running_total_6 + 285044401] = state_address_17;
      *(float *)&state_address_18 = (float)((float)(*(float *)((char *)&g_1A4D91D44 + scaled_index_8) - weighted_sum_18) * *(float *)&limited_value)
                     + weighted_sum_18;
      *(float *)&dword_140404A6C[running_total_6 + 285044402] = (float)((float)(weighted_sum_20 - weighted_sum_19) * *(float *)&limited_value) + weighted_sum_19;
      dword_140404A6C[running_total_6 + 285044403] = state_address_18;
      sub_1400C2F90(
        (float *)&dword_140404A6C[running_total_5 + 285044404],
        (float *)&dword_140404A6C[140832 * lookup_index + 421934263 + running_total_5],
        (float *)&dword_140404A6C[140832 * saved_masked_bits_2 + 421934263 + running_total_5],
        limited_value);
      scaled_index_9 = running_total_6 * 4 + 563328 * saved_masked_bits_2;
      scaled_index_10 = running_total_6 * 4 + 563328 * lookup_index;
      weighted_sum_21 = *(float *)((char *)&g_1A4D91D70 + scaled_index_10);
      *(float *)&dword_140404A6C[running_total_6 + 285044413] = (float)(*(float *)&limited_value
                                                          * *(float *)((char *)&g_1A4D91D78 + scaled_index_9))
                                                  + *(float *)((char *)&g_1A4D91D6C + scaled_index_10);
      *(float *)&state_address_19 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + scaled_index_9) - weighted_sum_21) * *(float *)&limited_value)
                     + weighted_sum_21;
      weighted_sum_22 = *(float *)((char *)&g_1A4D91D74 + scaled_index_10);
      scaled_index_11 = running_total_6 * 4 + 16 * (35208 * lookup_index + 1);
      dword_140404A6C[running_total_6 + 285044414] = state_address_19;
      weighted_sum_23 = *(float *)((char *)&g_1A4D91D74 + scaled_index_9);
      scaled_index_12 = running_total_6 * 4 + 16 * (35208 * saved_masked_bits_2 + 1);
      *(float *)&masked_bits_3 = (float)((float)(weighted_sum_23 - weighted_sum_22) * *(float *)&limited_value) + weighted_sum_22;
      weighted_sum_24 = *(float *)((char *)&g_1A4D91D70 + scaled_index_11);
      dword_140404A6C[running_total_6 + 285044415] = masked_bits_3;
      *(float *)&dword_140404A6C[running_total_6 + 285044417] = (float)(*(float *)&limited_value
                                                          * *(float *)((char *)&g_1A4D91D78 + scaled_index_12))
                                                  + *(float *)((char *)&g_1A4D91D6C + scaled_index_11);
      *(float *)&state_address_20 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + scaled_index_12) - weighted_sum_24) * *(float *)&limited_value)
                     + weighted_sum_24;
      weighted_sum_25 = *(float *)((char *)&g_1A4D91D74 + scaled_index_11);
      dword_140404A6C[running_total_6 + 285044418] = state_address_20;
      *(float *)&dword_140404A6C[running_total_6 + 285044419] = (float)((float)(*(float *)((char *)&g_1A4D91D74 + scaled_index_12)
                                                                  - weighted_sum_25)
                                                          * *(float *)&limited_value)
                                                  + weighted_sum_25;
      scaled_index_13 = running_total_6 * 4 + 16 * (35208 * saved_masked_bits_2 + 2);
      scaled_index_14 = running_total_6 * 4 + 16 * (35208 * lookup_index + 2);
      weighted_sum_26 = *(float *)((char *)&g_1A4D91D70 + scaled_index_14);
      *(float *)&dword_140404A6C[running_total_6 + 285044421] = (float)(*(float *)&limited_value
                                                          * *(float *)((char *)&g_1A4D91D78 + scaled_index_13))
                                                  + *(float *)((char *)&g_1A4D91D6C + scaled_index_14);
      *(float *)&state_address_21 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + scaled_index_13) - weighted_sum_26) * *(float *)&limited_value)
                      + weighted_sum_26;
      weighted_sum_27 = *(float *)((char *)&g_1A4D91D74 + scaled_index_14);
      dword_140404A6C[running_total_6 + 285044422] = state_address_21;
      weighted_sum_28 = *(float *)((char *)&g_1A4D91D74 + scaled_index_13);
      scaled_index_15 = running_total_6 * 4 + 16 * (35208 * saved_masked_bits_2 + 3);
      scaled_index_16 = running_total_6 * 4 + 16 * (35208 * lookup_index + 3);
      *(float *)&masked_bits_4 = (float)((float)(weighted_sum_28 - weighted_sum_27) * *(float *)&limited_value) + weighted_sum_27;
      weighted_sum_29 = *(float *)((char *)&g_1A4D91D70 + scaled_index_16);
      dword_140404A6C[running_total_6 + 285044423] = masked_bits_4;
      *(float *)&dword_140404A6C[running_total_6 + 285044425] = (float)(*(float *)&limited_value
                                                          * *(float *)((char *)&g_1A4D91D78 + scaled_index_15))
                                                  + *(float *)((char *)&g_1A4D91D6C + scaled_index_16);
      *(float *)&state_address_22 = (float)((float)(*(float *)((char *)&g_1A4D91D70 + scaled_index_15) - weighted_sum_29) * *(float *)&limited_value)
                      + weighted_sum_29;
      weighted_sum_30 = *(float *)((char *)&g_1A4D91D74 + scaled_index_16);
      dword_140404A6C[running_total_6 + 285044426] = state_address_22;
      *(float *)&dword_140404A6C[running_total_6 + 285044427] = (float)((float)(*(float *)((char *)&g_1A4D91D74 + scaled_index_15)
                                                                  - weighted_sum_30)
                                                          * *(float *)&limited_value)
                                                  + weighted_sum_30;
    }
    running_total_5 += 77;
    state_address_16 += 5210;
    running_total_6 += 77;
    --remaining_count_4;
  }
  while ( remaining_count_4 );
  running_total_7 = 0;
  state_address_23 = &g_182BBB180;
  running_total_8 = 0;
  remaining_count_5 = 1024;
  do
  {
    if ( *state_address_23 )
    {
      state_address_24 = (float *)&dword_140404A6C[140832 * lookup_index + 421973684 + running_total_7];
      scaled_index_17 = running_total_7 * 4 + 563328 * saved_masked_bits_2;
      *(float *)&state_address_25 = (float)((float)(*(float *)((char *)&g_1A4DB8540 + scaled_index_17) - state_address_24[1]) * *(float *)&limited_value)
                      + state_address_24[1];
      *(float *)&dword_140404A6C[running_total_7 + 285083825] = (float)((float)(*(float *)((char *)&g_1A4DB853C
                                                                              + scaled_index_17)
                                                                   - *state_address_24)
                                                           * *(float *)&limited_value)
                                                   + *state_address_24;
      combined_products_2 = *(float *)((char *)&g_1A4DB8544 + scaled_index_17) - state_address_24[2];
      dword_140404A6C[running_total_7 + 285083826] = state_address_25;
      *(float *)&dword_140404A6C[running_total_7 + 285083827] = (float)(combined_products_2 * *(float *)&limited_value) + state_address_24[2];
      sub_1400C2F90(
        (float *)&dword_140404A6C[running_total_8 + 285083828],
        (float *)&dword_140404A6C[140832 * lookup_index + 421973687 + running_total_8],
        (float *)&dword_140404A6C[140832 * saved_masked_bits_2 + 421973687 + running_total_8],
        limited_value);
    }
    running_total_8 += 13;
    state_address_23 += 1760;
    running_total_7 += 13;
    --remaining_count_5;
  }
  while ( remaining_count_5 );
  weighted_sum_31 = *(float *)&dword_140404A6C[140832 * lookup_index + 421986997];
  weighted_sum_32 = *(float *)&dword_140404A6C[140832 * lookup_index + 421986998];
  weighted_sum_33 = *(float *)&dword_140404A6C[140832 * saved_masked_bits_2 + 421986997];
  g_183F7C58C = (float)((float)(*(float *)&dword_140404A6C[140832 * saved_masked_bits_2 + 421986996]
                                                        - *(float *)&dword_140404A6C[140832 * lookup_index + 421986996])
                                                * *(float *)&limited_value)
                                        + *(float *)&dword_140404A6C[140832 * lookup_index + 421986996];
  *(float *)&state_address_26 = (float)((float)(*(float *)&dword_140404A6C[140832 * saved_masked_bits_2 + 421986998] - weighted_sum_32) * *(float *)&limited_value) + weighted_sum_32;
  g_183F7C590 = (float)((float)(weighted_sum_33 - weighted_sum_31) * *(float *)&limited_value) + weighted_sum_31;
  *(unsigned int *)&g_183F7C594 = state_address_26;
  return sub_1400C2F90(
           (float *)(unsigned int *)&g_183F7C5A4,
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * lookup_index + 1692161364),
           (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 563328 * saved_masked_bits_2 + 1692161364),
           limited_value);
}
#undef lookup_index
#undef state_address_27
#undef integer_difference
#undef cached_masked_bits_2

//----- (0000000140093E60) ----------------------------------------------------
__int64 sub_140093E60()
{
  int i;
  __int64 unused_local;
  __int64 unused_frame_slot_0;
  __int64 unused_frame_slot_176;
  __int64 unused_local_2;
  __int64 selection_code;
  float *axis;
  float *buffer_cursor;
  float *record_byte_offset;
  signed __int64 state_address;
  __int64 remaining_count;
  float product_difference;
  __int64 remaining_count_2;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  int j;
  unsigned int state_word;
  __int64 selection_code_2;
  _Alignas(16) unsigned sr_cube_rotation[12];
  float sr_cube_light[3];
  _Alignas(16) unsigned sr_cube_translation[16];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140093E60[256];
#define unused_frame_slot_0_2 (*(__int64 (*))(void *)(sr_frame_140093E60 + 0)) /* [rsp+8h] */
#define scratch_buffer (*(_OWORD (*)[4])(void *)(sr_frame_140093E60 + 176)) /* [rsp+B8h] */
#define unused_frame_slot_240 (*(__int64 (*))(void *)(sr_frame_140093E60 + 240)) /* [rsp+F8h] */

  glDepthFunc(515);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E9774C + 283791765]);
  for ( i = 0; i < 6; ++i )
  {
    glFramebufferTexture2D(36160,
      36064,
      (unsigned int)(i + 34069),
      dword_140404A6C[44 * shading_cube_map + 284024944],
      0);
    glClearColor(0.375f,0.375f,0.375f,0.0f);
    glStencilMask(0xFFFFFFFFLL);
    glClearStencil(0);
    glClear(17664);
    glStencilMask(0);
    sr_cube_rotation[8] = 1065353216;
    (*(__int128 *)(void *)sr_cube_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_cube_rotation+4)) = xmmword_140278D30;
    switch ( i )
    {
      case 0:
        selection_code = 1070141403;
LABEL_12:
        axis = (float *)&(*(__int128 *)(void *)sr_cube_rotation) + 3;
        goto LABEL_13;
      case 1:
        selection_code = 3217625051LL;
        goto LABEL_12;
      case 2:
        sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_cube_rotation), (float *)&(*(__int128 *)(void *)sr_cube_rotation), sr_export_float_lane_container(1070141403));
        break;
      case 3:
        selection_code = 3217625051LL;
        axis = (float *)&(*(__int128 *)(void *)sr_cube_rotation);
LABEL_13:
        sr_math_mat3_rotate_rows((__int64)&(*(__int128 *)(void *)sr_cube_rotation), axis, *(double *)&selection_code);
        break;
      case 5:
        selection_code = 1078530011;
        goto LABEL_12;
    }
    glViewport(0, 0, 512, 512);
    g_1A724E590 = xmmword_140278D80;
    *(_QWORD *)&g_1A724E5A0 = 0;
    g_1A724E580 = xmmword_140278D30;
    g_1A724E5AC = -1082130432;
    *(_QWORD *)&g_1A724E5B0 = 0;
    g_1A724E63C = 1065353216;
    *(_OWORD *)&g_1A724E5BC = xmmword_140278D80;
    g_1A724E5A8 = (float)(g_184178D6C
                                                  + g_184178D70)
                                          * (float)(-1.0
                                                  / (float)(g_184178D70
                                                          - g_184178D6C));
    *(_OWORD *)&g_1A724E5CC = xmmword_140278E20;
    *(_OWORD *)&g_1A724E5EC = 0;
    *(_OWORD *)&g_1A724E5DC = xmmword_140279490;
    g_1A724E60C = xmmword_140278E20;
    *(_OWORD *)&g_1A724E5FC = xmmword_140278D90;
    g_1A724E62C = 0;
    g_1A724E5B8 = (float)((float)(g_184178D70 * -2.0)
                                                  * g_184178D6C)
                                          / (float)(g_184178D70
                                                  - g_184178D6C);
    g_1A724E61C = xmmword_140279490;
    sr_math_mat4_multiply_copy(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sr_math_mat4_multiply_copy(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sr_math_mat4_multiply_copy(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    *(unsigned int *)&g_1A724E5C0 = (*(__int128 *)(void *)sr_cube_rotation);
    *(unsigned int *)&g_1A724E5E0 = DWORD2((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5D4 = (*(__int128 *)(void *)(sr_cube_rotation+4));
    *(unsigned int *)&g_1A724E5D0 = DWORD1((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5C8 = DWORD2((*(__int128 *)(void *)(sr_cube_rotation+4)));
    g_1A724E5C4 = HIDWORD((*(__int128 *)(void *)sr_cube_rotation));
    g_1A724E5E8 = sr_cube_rotation[8];
    g_1A724E5E4 = DWORD1((*(__int128 *)(void *)(sr_cube_rotation+4)));
    ((_OWORD *)(void *)sr_cube_translation)[0] = xmmword_140278D30;
    g_1A724E5D8 = HIDWORD((*(__int128 *)(void *)(sr_cube_rotation+4)));
    *(_QWORD *)&g_1A724E5F0 = 0;
    g_1A724E5F8 = 0;
    g_1A724E5CC = 0;
    g_1A724E5DC = 0;
    g_1A724E5EC = 0;
    g_1A724E5FC = 1065353216;
    buffer_cursor = (float *)scratch_buffer;
    record_byte_offset = (float *)((_OWORD *)(void *)sr_cube_translation) + 1;
    ((_OWORD *)(void *)sr_cube_translation)[1] = xmmword_140278D80;
    state_address = (char *)(unsigned int *)&g_1A724E5D0 - (char *)scratch_buffer;
    remaining_count = 4;
    ((_OWORD *)(void *)sr_cube_translation)[2] = xmmword_140278E20;
    sr_cube_translation[12] = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
    (*(float *)&sr_cube_translation[13]) = -g_183F7C548;
    (*(float *)&sr_cube_translation[14]) = -g_183F7C54C;
    sr_cube_translation[15] = 1065353216;
    do
    {
      product_difference = *(record_byte_offset - 1);
      remaining_count_2 = 4;
      scaled_value = *record_byte_offset;
      source_component_y = record_byte_offset[1];
      source_component_z = record_byte_offset[2];
      do
      {
        *buffer_cursor = (float)((float)(source_component_z * *(float *)((char *)buffer_cursor + state_address + 32)) + (float)(source_component_y * *(float *)((char *)buffer_cursor + state_address + 16)))
            + (float)((float)(scaled_value * *(float *)((char *)buffer_cursor + state_address)) + (float)(product_difference * *(float *)((char *)buffer_cursor + state_address - 16)));
        ++buffer_cursor;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      record_byte_offset += 4;
      state_address -= 16LL;
      --remaining_count;
    }
    while ( remaining_count );
    g_1A724E5C0 = scratch_buffer[0];
    g_1A724E5D0 = scratch_buffer[1];
    g_1A724E5E0 = scratch_buffer[2];
    g_1A724E5F0 = scratch_buffer[3];
    g_1A724E600 = xmmword_140278D30;
    g_1A724E610 = xmmword_140278D80;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    sr_cube_light[0] = g_184178D40 * 0.5;
    sr_cube_light[1] = g_184178D44 * 0.5;
    sr_cube_light[2] = g_184178D48 * 0.5;
    glUniform3fv(terrain_u_lightambient, 1, &sr_cube_light[0]);
    sr_cube_light[0] = g_184178D50 * 0.5;
    sr_cube_light[1] = g_184178D54 * 0.5;
    sr_cube_light[2] = g_184178D58 * 0.5;
    glUniform3fv(terrain_u_lightdiffuse, 1, &sr_cube_light[0]);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF154 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33988);
    glBindTexture(3553, renderer_white_texture);
    glActiveTexture(33987);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
    glEnableVertexAttribArray(0);
    for ( j = 0; j < 64; ++j )
      sub_1400D2B90(j);
    glDisableVertexAttribArray(0);
    glActiveTexture(33984);
    glUseProgram(0);
    glDisable(32823);
  }
  glBindFramebuffer(36160, 0);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  sub_14001B6A0();
  state_word = g_151E46194;
  if ( g_151E46194 )
  {
    glDepthFunc(518);
    state_word = g_151E46194;
  }
  if ( unk_14040488C && glClipControl )
  {
    selection_code_2 = 37727;
    if ( !state_word )
      selection_code_2 = 37726;
    glClipControl(36001, selection_code_2);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0_2
#undef scratch_buffer
#undef unused_frame_slot_240

//----- (0000000140094A90) ----------------------------------------------------
__int64 sub_140094A90()
{
  unsigned int state_word;
  unsigned int *state_address;
  unsigned int *state_address_2;
  unsigned int state_word_2;
  __int64 remaining_count;
  __int64 remaining_count_2;
  __int64 scaled_index;
  int *running_total;
  int integer_quotient;
  __int64 loaded_word;
  int loaded_word_2;
  unsigned int *state_address_3;
  int byte4_result;
  float *buffer_cursor;
  float *record_byte_offset;
  signed __int64 state_address_4;
  __int64 remaining_count_3;
  float product_difference;
  __int64 remaining_count_4;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float *record_byte_offset_2;
  float *buffer_cursor_2;
  float *record_byte_offset_3;
  signed __int64 state_address_5;
  __int64 remaining_count_5;
  float product_difference_2;
  __int64 remaining_count_6;
  float scaled_value_2;
  float source_component_y_2;
  float source_component_z_2;
  float *buffer_cursor_3;
  float *record_byte_offset_4;
  signed __int64 state_address_6;
  __int64 remaining_count_7;
  float product_difference_3;
  __int64 remaining_count_8;
  float scaled_value_3;
  float source_component_y_3;
  float source_component_z_3;
  float *record_byte_offset_5;
  float *buffer_cursor_4;
  float *record_byte_offset_6;
  signed __int64 state_address_7;
  __int64 remaining_count_9;
  float product_difference_4;
  __int64 remaining_count_10;
  float scaled_value_4;
  float source_component_y_4;
  float source_component_z_4;
  __int64 scaled_index_2;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 scaled_index_3;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  __int64 unrecovered_register_value;
  float scaled_value_5;
  float *buffer_cursor_5;
  float *record_byte_offset_7;
  signed __int64 state_address_8;
  __int64 remaining_count_11;
  float product_difference_5;
  __int64 remaining_count_12;
  float scaled_value_6;
  float source_component_y_5;
  float source_component_z_5;
  float *buffer_cursor_6;
  __int64 remaining_count_13;
  signed __int64 state_address_9;
  float product_difference_6;
  __int64 remaining_count_14;
  float scaled_value_7;
  float source_component_y_6;
  float source_component_z_6;
  float *buffer_cursor_7;
  signed __int64 state_address_10;
  __int64 remaining_count_15;
  float product_difference_7;
  __int64 remaining_count_16;
  float scaled_value_8;
  float source_component_y_7;
  float source_component_z_7;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  _Alignas(16) __int128 sr_visibility_matrix[4];
  _Alignas(16) unsigned char sr_visibility_clip[16];
  _Alignas(16) __int128 sr_visibility_basis[4];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140094A90[224];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140094A90 + 0)) /* [rsp+8h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140094A90 + 32)) /* [rsp+28h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_140094A90 + 40)) /* [rsp+30h] */
#define unused_frame_slot_208 (*(__int64 (*))(void *)(sr_frame_140094A90 + 208)) /* [rsp+D8h] */

  crt_memset((void *)(uintptr_t)(&g_149F54C20), 0, 0x400u);
  if ( !g_183F7CB60 )
  {
    state_word = g_18B7D2FCC;
    state_address = &g_18C3D4FDC;
    state_address_2 = &g_154167270;
    state_word_2 = g_18AB70FAC;
    remaining_count = 4096;
    do
    {
      if ( *(state_address_2 - 6156) )
      {
        remaining_count_2 = *state_address_2;
        if ( (int)remaining_count_2 > 0 )
        {
          scaled_index = (int)(state_word * *(state_address - 1) + dword_140404A6C[3074 * *(state_address - 1) + 315570524 + 3 * *state_address]);
          running_total = (int *)(state_address_2 + 2);
          integer_quotient = (int)(state_word_2 * *(state_address - 3246089) + dword_140404A6C[3074 * *(state_address - 3246089) + 312324436 + 3 * *(state_address - 3246088)])
             / 64;
          do
          {
            loaded_word = *((unsigned __int8 *)running_total - 4);
            loaded_word_2 = *running_total;
            running_total += 3;
            state_address_3 = &dword_140404A6C[loaded_word + 40714349];
            loaded_word <<= 14;
            dword_140404A6C[loaded_word + 40714605 + (int)*state_address_3] = 3 * loaded_word_2;
            byte4_result = *(running_total - 2) + (((BYTE4(scaled_index) & 3) + (int)scaled_index) >> 2) + 2 * *(running_total - 2);
            dword_140404A6C[loaded_word + 53297517 + (int)*state_address_3] = byte4_result;
            dword_140404A6C[loaded_word + 53297517 + (int)*state_address_3] *= 4;
            *(_QWORD *)&dword_140404A6C[2 * loaded_word + 44908909 + 2 * (int)*state_address_3] = 4 * byte4_result;
            *(_QWORD *)&dword_140404A6C[2 * loaded_word + 57491821 + 2 * (int)*state_address_3] = dword_140404A6C[loaded_word + 53297517 + (int)*state_address_3];
            dword_140404A6C[loaded_word + 65880429 + (int)(*state_address_3)++] = integer_quotient;
            --remaining_count_2;
          }
          while ( remaining_count_2 );
          state_word = g_18B7D2FCC;
        }
      }
      state_address += 6;
      state_address_2 += 6930;
      --remaining_count;
    }
    while ( remaining_count );
  }
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97798 + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  buffer_cursor = (float *)&sr_visibility_matrix[0];
  *(unsigned int *)&g_1A724E5C0 = *(unsigned int *)&g_183F7C550;
  record_byte_offset = (float *)&sr_visibility_basis[0] + 1;
  *(unsigned int *)&g_1A724E5E0 = *(unsigned int *)&g_183F7C558;
  state_address_4 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  remaining_count_3 = 4;
  *(unsigned int *)&g_1A724E5D0 = *(unsigned int *)&g_183F7C554;
  g_1A724E5C4 = *(unsigned int *)&g_183F7C55C;
  g_1A724E5D4 = *(unsigned int *)&g_183F7C560;
  g_1A724E5E4 = *(unsigned int *)&g_183F7C564;
  g_1A724E5C8 = *(unsigned int *)&g_183F7C568;
  g_1A724E5D8 = *(unsigned int *)&g_183F7C56C;
  g_1A724E5E8 = *(unsigned int *)&g_183F7C570;
  sr_visibility_basis[1] = xmmword_140278D80;
  sr_visibility_basis[0] = xmmword_140278D30;
  LODWORD(sr_visibility_basis[3]) = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
  sr_visibility_basis[2] = xmmword_140278E20;
  *((float *)&sr_visibility_basis[3] + 1) = -g_183F7C548;
  *((float *)&sr_visibility_basis[3] + 2) = -g_183F7C54C;
  *(_QWORD *)&g_1A724E5F0 = 0;
  g_1A724E5F8 = 0;
  g_1A724E5CC = 0;
  g_1A724E5DC = 0;
  g_1A724E5EC = 0;
  g_1A724E5FC = 1065353216;
  HIDWORD(sr_visibility_basis[3]) = 1065353216;
  do
  {
    product_difference = *(record_byte_offset - 1);
    remaining_count_4 = 4;
    scaled_value = *record_byte_offset;
    source_component_y = record_byte_offset[1];
    source_component_z = record_byte_offset[2];
    do
    {
      *buffer_cursor = (float)((float)((float)(product_difference * *(float *)((char *)buffer_cursor + state_address_4 - 16))
                           + (float)(scaled_value * *(float *)((char *)buffer_cursor + state_address_4)))
                   + (float)(source_component_y * *(float *)((char *)buffer_cursor + state_address_4 + 16)))
           + (float)(source_component_z * *(float *)((char *)buffer_cursor + state_address_4 + 32));
      ++buffer_cursor;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    record_byte_offset += 4;
    state_address_4 -= 16LL;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  record_byte_offset_2 = (float *)&g_1A724E604;
  g_1A724E5C0 = sr_visibility_matrix[0];
  buffer_cursor_2 = (float *)&sr_visibility_matrix[0];
  record_byte_offset_3 = (float *)&g_1A724E604;
  g_1A724E5D0 = sr_visibility_matrix[1];
  state_address_5 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  remaining_count_5 = 4;
  g_1A724E5E0 = sr_visibility_matrix[2];
  g_1A724E5F0 = sr_visibility_matrix[3];
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference_2 = *(record_byte_offset_3 - 1);
    remaining_count_6 = 4;
    scaled_value_2 = *record_byte_offset_3;
    source_component_y_2 = record_byte_offset_3[1];
    source_component_z_2 = record_byte_offset_3[2];
    do
    {
      *buffer_cursor_2 = (float)((float)((float)(product_difference_2 * *(float *)((char *)buffer_cursor_2 + state_address_5 - 16))
                           + (float)(scaled_value_2 * *(float *)((char *)buffer_cursor_2 + state_address_5)))
                   + (float)(source_component_y_2 * *(float *)((char *)buffer_cursor_2 + state_address_5 + 16)))
           + (float)(source_component_z_2 * *(float *)((char *)buffer_cursor_2 + state_address_5 + 32));
      ++buffer_cursor_2;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    record_byte_offset_3 += 4;
    state_address_5 -= 16LL;
    --remaining_count_5;
  }
  while ( remaining_count_5 );
  g_1A724E640 = sr_visibility_matrix[0];
  buffer_cursor_3 = (float *)&sr_visibility_matrix[0];
  record_byte_offset_4 = (float *)&g_1A724E5C4;
  g_1A724E650 = sr_visibility_matrix[1];
  state_address_6 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  remaining_count_7 = 4;
  g_1A724E660 = sr_visibility_matrix[2];
  g_1A724E670 = sr_visibility_matrix[3];
  do
  {
    product_difference_3 = *(record_byte_offset_4 - 1);
    remaining_count_8 = 4;
    scaled_value_3 = *record_byte_offset_4;
    source_component_y_3 = record_byte_offset_4[1];
    source_component_z_3 = record_byte_offset_4[2];
    do
    {
      *buffer_cursor_3 = (float)((float)((float)(product_difference_3 * *(float *)((char *)buffer_cursor_3 + state_address_6 - 16))
                           + (float)(scaled_value_3 * *(float *)((char *)buffer_cursor_3 + state_address_6)))
                   + (float)(source_component_y_3 * *(float *)((char *)buffer_cursor_3 + state_address_6 + 16)))
           + (float)(source_component_z_3 * *(float *)((char *)buffer_cursor_3 + state_address_6 + 32));
      ++buffer_cursor_3;
      --remaining_count_8;
    }
    while ( remaining_count_8 );
    record_byte_offset_4 += 4;
    state_address_6 -= 16LL;
    --remaining_count_7;
  }
  while ( remaining_count_7 );
  record_byte_offset_5 = (float *)&g_1A724E644;
  g_1A724E680 = sr_visibility_matrix[0];
  buffer_cursor_4 = (float *)&sr_visibility_matrix[0];
  record_byte_offset_6 = (float *)&g_1A724E644;
  g_1A724E690 = sr_visibility_matrix[1];
  state_address_7 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  remaining_count_9 = 4;
  g_1A724E6A0 = sr_visibility_matrix[2];
  g_1A724E6B0 = sr_visibility_matrix[3];
  do
  {
    product_difference_4 = *(record_byte_offset_6 - 1);
    remaining_count_10 = 4;
    scaled_value_4 = *record_byte_offset_6;
    source_component_y_4 = record_byte_offset_6[1];
    source_component_z_4 = record_byte_offset_6[2];
    do
    {
      *buffer_cursor_4 = (float)((float)((float)(product_difference_4 * *(float *)((char *)buffer_cursor_4 + state_address_7 - 16))
                           + (float)(scaled_value_4 * *(float *)((char *)buffer_cursor_4 + state_address_7)))
                   + (float)(source_component_y_4 * *(float *)((char *)buffer_cursor_4 + state_address_7 + 16)))
           + (float)(source_component_z_4 * *(float *)((char *)buffer_cursor_4 + state_address_7 + 32));
      ++buffer_cursor_4;
      --remaining_count_10;
    }
    while ( remaining_count_10 );
    record_byte_offset_6 += 4;
    state_address_7 -= 16LL;
    --remaining_count_9;
  }
  while ( remaining_count_9 );
  g_1A724E6C0 = sr_visibility_matrix[0];
  g_1A724E6D0 = sr_visibility_matrix[1];
  LODWORD(packed_word_bits) = 0;
  g_1A724E6E0 = sr_visibility_matrix[2];
  scaled_index_2 = dword_140404A6C[44 * g_183EBE428 + 284024944];
  g_1A724E6F0 = sr_visibility_matrix[3];
  glFramebufferTexture2D(36160, 36064, 3553, scaled_index_2, 0);
  glClearColor(0x1.8000000000000p-2f,0x1.8000000000000p-2f,0x1.8000000000000p-2f,0.0f);
  glStencilMask(0xFFFFFFFFLL);
  glClearStencil(0);
  if ( g_151E46194 )
    glClearDepth(0.0);
  glClear(17664);
  if ( g_151E46194 )
    glClearDepth(0x1.0000000000000p+0);
  glStencilMask(0);
  glDepthMask(0);
  g_1AD059458 = g_16D482828;
  g_1AD059470 = g_16D482828;
  scaled_index_3 = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  *(_OWORD *)&g_1AD05945C = xmmword_140279830;
  g_1AD05944C = 6;
  *(_OWORD *)&g_1AD059474 = xmmword_140279830;
  g_1AD059448 = 4;
  g_1AD059450 = g_16D482820;
  g_1AD059454 = g_1873DE440;
  g_1AD05946C = g_1873DE440;
  g_1AD059484 = g_1873DE440;
  *(unsigned int *)&g_1AD059498 = g_16D482820;
  g_1AD05949C = g_1873DE440;
  *(_OWORD *)&g_1AD059488 = xmmword_140278E30;
  *(_OWORD *)&g_1AD0594A0 = xmmword_140278E30;
  glBindBuffer(34962, scaled_index_3);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glUseProgram(lit_program);
  glUniform3fv(lit_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(lit_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(lit_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(lit_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(lit_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  glDisable(2884);
  glActiveTexture(33985);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glActiveTexture(33984);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  unused_written_slot = 12;
  LODWORD(packed_word_bits) = 4 * g_1AD05944C;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glBindBuffer(34963, g_1AD29946C);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(6u*((int32_t)g_1AD059448/4)),5123,NULL);
  glBindBuffer(34963, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(34067, 0);
  glActiveTexture(33984);
  LOBYTE(unrecovered_register_value) = 1;
  glDepthMask(unrecovered_register_value);
  scaled_value_5 = *(float *)&g_1873DE440;
  buffer_cursor_5 = (float *)&sr_visibility_matrix[0];
  record_byte_offset_7 = (float *)&sr_visibility_basis[0] + 1;
  g_1A724E600 = xmmword_140278D30;
  state_address_8 = (char *)(unsigned int *)&g_1A724E610 - (char *)&sr_visibility_matrix[0];
  *(unsigned int *)&g_1A724E630 = 0;
  remaining_count_11 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E638 = 0;
  g_1A724E63C = 1065353216;
  g_1A724E610 = xmmword_140278D80;
  sr_visibility_basis[1] = xmmword_140278DE0;
  *(float *)&g_1A724E634 = scaled_value_5 + scaled_value_5;
  sr_visibility_basis[0] = xmmword_140278D30;
  sr_visibility_basis[2] = xmmword_140278E20;
  sr_visibility_basis[3] = xmmword_140279490;
  do
  {
    product_difference_5 = *(record_byte_offset_7 - 1);
    remaining_count_12 = 4;
    scaled_value_6 = *record_byte_offset_7;
    source_component_y_5 = record_byte_offset_7[1];
    source_component_z_5 = record_byte_offset_7[2];
    do
    {
      *buffer_cursor_5 = (float)((float)((float)(product_difference_5 * *(float *)((char *)buffer_cursor_5 + state_address_8 - 16))
                           + (float)(scaled_value_6 * *(float *)((char *)buffer_cursor_5 + state_address_8)))
                   + (float)(source_component_y_5 * *(float *)((char *)buffer_cursor_5 + state_address_8 + 16)))
           + (float)(source_component_z_5 * *(float *)((char *)buffer_cursor_5 + state_address_8 + 32));
      ++buffer_cursor_5;
      --remaining_count_12;
    }
    while ( remaining_count_12 );
    record_byte_offset_7 += 4;
    state_address_8 -= 16LL;
    --remaining_count_11;
  }
  while ( remaining_count_11 );
  buffer_cursor_6 = (float *)&sr_visibility_matrix[0];
  g_1A724E600 = sr_visibility_matrix[0];
  remaining_count_13 = 4;
  state_address_9 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_visibility_matrix[0];
  g_1A724E610 = sr_visibility_matrix[1];
  g_1A724E620 = sr_visibility_matrix[2];
  g_1A724E630 = sr_visibility_matrix[3];
  do
  {
    product_difference_6 = *(record_byte_offset_2 - 1);
    remaining_count_14 = 4;
    scaled_value_7 = *record_byte_offset_2;
    source_component_y_6 = record_byte_offset_2[1];
    source_component_z_6 = record_byte_offset_2[2];
    do
    {
      *buffer_cursor_6 = (float)((float)((float)(product_difference_6 * *(float *)((char *)buffer_cursor_6 + state_address_9 - 16))
                           + (float)(scaled_value_7 * *(float *)((char *)buffer_cursor_6 + state_address_9)))
                   + (float)(source_component_y_6 * *(float *)((char *)buffer_cursor_6 + state_address_9 + 16)))
           + (float)(source_component_z_6 * *(float *)((char *)buffer_cursor_6 + state_address_9 + 32));
      ++buffer_cursor_6;
      --remaining_count_14;
    }
    while ( remaining_count_14 );
    record_byte_offset_2 += 4;
    state_address_9 -= 16LL;
    --remaining_count_13;
  }
  while ( remaining_count_13 );
  buffer_cursor_7 = (float *)&sr_visibility_matrix[0];
  state_address_10 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_visibility_matrix[0];
  remaining_count_15 = 4;
  g_1A724E640 = sr_visibility_matrix[0];
  g_1A724E650 = sr_visibility_matrix[1];
  g_1A724E660 = sr_visibility_matrix[2];
  g_1A724E670 = sr_visibility_matrix[3];
  do
  {
    product_difference_7 = *(record_byte_offset_5 - 1);
    remaining_count_16 = 4;
    scaled_value_8 = *record_byte_offset_5;
    source_component_y_7 = record_byte_offset_5[1];
    source_component_z_7 = record_byte_offset_5[2];
    do
    {
      *buffer_cursor_7 = (float)((float)((float)(product_difference_7 * *(float *)((char *)buffer_cursor_7 + state_address_10 - 16))
                           + (float)(scaled_value_8 * *(float *)((char *)buffer_cursor_7 + state_address_10)))
                   + (float)(source_component_y_7 * *(float *)((char *)buffer_cursor_7 + state_address_10 + 16)))
           + (float)(source_component_z_7 * *(float *)((char *)buffer_cursor_7 + state_address_10 + 32));
      ++buffer_cursor_7;
      --remaining_count_16;
    }
    while ( remaining_count_16 );
    record_byte_offset_5 += 4;
    state_address_10 -= 16LL;
    --remaining_count_15;
  }
  while ( remaining_count_15 );
  g_1A724E6C0 = sr_visibility_matrix[0];
  (*(int32_t *)(sr_visibility_clip+0)) = 0;
  g_1A724E6D0 = sr_visibility_matrix[1];
  (*(int64_t *)(sr_visibility_clip+4)) = 1065353216;
  g_1A724E6E0 = sr_visibility_matrix[2];
  g_1A724E6F0 = sr_visibility_matrix[3];
  (*(float *)(sr_visibility_clip+12)) = -scaled_value_5;
  glUseProgram(world_program);
  glUniform4fv(world_u_clipplane, 1, &(*(int32_t *)(sr_visibility_clip+0)));
  glUseProgram(object_program);
  glUniform4fv(object_u_clipplane, 1, &(*(int32_t *)(sr_visibility_clip+0)));
  glEnable(12288);
  sub_14011E210(0, unrecovered_register_value_2, unrecovered_register_value_3);
  glDisable(12288);
  return 0; /* compatibility result discarded by all reviewed callers */
}

#undef unused_frame_slot_0
#undef packed_word_bits
#undef unused_written_slot
#undef unused_frame_slot_208

//----- (00000001400990A0) ----------------------------------------------------
double            sub_1400990A0(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int state_word;
  int state_word_2;
  signed int state_word_3;
  __int64 input_value;
  unsigned int element_index;
  unsigned int iteration_count;
  int selection_code;
  int selection_code_2;
  int selection_code_3;
  bool comparison_result;
  unsigned int integer_difference;
  bool comparison_result_2;
  unsigned int integer_sum;
  int shifted_bits;
  __int64 scaled_index;
  unsigned int input_value_2;
  unsigned int input_value_3;
  unsigned int input_value_4;
  unsigned int input_value_5;
  signed int state_word_4;
  int iteration_count_2;
  unsigned int state_word_5;
  int state_word_6;
  int iteration_count_3;
  float saved_iteration_count;
  float saved_iteration_count_2;
  int selection_code_4;
  int integer_sum_2;
  float saved_iteration_count_3;
  float call_result;
  float call_result_2;
  float call_result_3;
  float call_result_4;
  float call_result_5;
  int shifted_bits_2;
  int scaled_index_2;

  state_word = g_1862AE010;
  state_word_2 = 128;
  state_word_3 = 128;
  input_value = a1;
  g_1B0037420 = 128;
  element_index = -117;
  g_1B0037424 = 128;
  do
  {
    if ( state_word_2 <= 0 )
      goto LABEL_49;
    iteration_count = -5;
    do
    {
      selection_code = 0;
      selection_code_2 = 0;
      selection_code_3 = 0;
      if ( (unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 6) <= 1 )
      {
        selection_code = 255;
        selection_code_2 = 32;
        switch ( a2 )
        {
          case 1:
            if ( element_index + 112 <= 5 )
              selection_code_3 = 255;
            goto LABEL_44;
          case 2:
            if ( element_index <= 5 )
              selection_code_3 = 255;
            goto LABEL_44;
          case 6:
            if ( iteration_count <= 5 )
              selection_code_3 = 255;
            goto LABEL_44;
        }
      }
      if ( a2 == 7 )
      {
        if ( iteration_count - 112 <= 5 )
          selection_code_3 = 255;
        goto LABEL_44;
      }
      if ( (unsigned int)(a2 - 4) <= 1 || (unsigned int)(a2 - 9) <= 1 )
      {
        selection_code = 255;
        selection_code_2 = 255;
        switch ( a2 )
        {
          case 4:
            comparison_result = element_index + 112 <= 5;
LABEL_22:
            if ( !comparison_result )
              goto LABEL_44;
            integer_difference = iteration_count - 27;
LABEL_24:
            comparison_result_2 = integer_difference <= 0x3F;
LABEL_25:
            if ( comparison_result_2 )
              selection_code_3 = 255;
            goto LABEL_44;
          case 5:
            comparison_result = element_index <= 5;
            goto LABEL_22;
          case 9:
            if ( iteration_count > 5 )
              goto LABEL_44;
            integer_difference = element_index + 85;
            goto LABEL_24;
        }
      }
      switch ( a2 )
      {
        case 10:
          if ( iteration_count - 112 > 5 )
            break;
          integer_difference = element_index + 85;
          goto LABEL_24;
        case 3:
          selection_code_3 = 255;
          selection_code = 255;
          selection_code_2 = 255;
          if ( element_index + 101 > 0xF )
            selection_code_3 = 0;
          comparison_result_2 = element_index + 21 <= 0xF;
          goto LABEL_25;
        case 8:
          selection_code_3 = 255;
          selection_code = 255;
          selection_code_2 = 255;
          if ( iteration_count - 11 > 0xF )
            selection_code_3 = 0;
          if ( iteration_count - 91 <= 0xF )
            selection_code_3 = 255;
          break;
      }
LABEL_44:
      integer_sum = iteration_count + 5;
      if ( state_word )
        shifted_bits = selection_code_3 + (selection_code_2 << 8) + 16842752 * selection_code;
      else
        shifted_bits = (selection_code_3 << 24) + selection_code + (selection_code_2 << 16) + (selection_code << 8);
      ++iteration_count;
      dword_140404A6C[integer_sum + state_word_2 * (element_index + 117) + 468765295] = shifted_bits;
      state_word_2 = g_1B0037420;
    }
    while ( (int)(iteration_count + 5) < (int)g_1B0037420 );
    state_word_3 = g_1B0037424;
LABEL_49:
    ++element_index;
  }
  while ( (int)(element_index + 117) < state_word_3 );
  scaled_index = 2 * input_value;
  glBindTexture(35866, dword_140404A6C[44 * dword_140404A6C[4 * input_value + 283827816] + 284024944]);
  input_value_2 = a7;
  input_value_3 = 9728;
  input_value_4 = a5;
  input_value_5 = a4;
  if ( !a2 )
  {
    glTexParameteri(35866, 10242, a4);
    glTexParameteri(35866, 10243, a5);
    glTexParameteri(35866, 10240, 9728);
    glTexParameteri(35866, 10241, a7);
    glTexImage3D(35866, 0, 6408, g_1B0037420, g_1B0037424, 11, 0, 6408, 5121, 0);
  }
  glTexSubImage3D(35866,
    0,
    0,
    0,
    a2,
    g_1B0037420,
    g_1B0037424,
    1,
    6408,
    5121,
    &g_1B0037428);
  glGenerateMipmap(35866);
  glTexParameterf(35866, 34046, 16.0f /* native XMM2 */);
  state_word_4 = g_1B0037424;
  iteration_count_2 = 0;
  if ( (int)g_1B0037424 > 0 )
  {
    state_word_5 = g_1862AE010;
    state_word_6 = g_1B0037420;
    do
    {
      iteration_count_3 = 0;
      if ( state_word_6 > 0 )
      {
        saved_iteration_count = (float)iteration_count_2;
        saved_iteration_count_2 = (float)iteration_count_2;
        do
        {
          selection_code_4 = 0;
          integer_sum_2 = 0;
          if ( a2 == 1 || a2 == 2 )
          {
            saved_iteration_count_3 = (float)iteration_count_3;
            selection_code_4 = 128;
            call_result = SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count_3, saved_iteration_count, 1023), f32)[0];
            saved_iteration_count_2 = (float)iteration_count_2;
            integer_sum_2 = (int)(float)((float)(call_result + call_result) + 130.0);
          }
          else
          {
            saved_iteration_count_3 = (float)iteration_count_3;
          }
          if ( (unsigned int)(a2 - 6) <= 1 )
          {
            selection_code_4 = 128;
            call_result_2 = SR_VEC_READ_LANES(128, sub_1400384F0(saved_iteration_count_3, saved_iteration_count, 1023), f32)[0];
            integer_sum_2 = (int)(float)((float)(call_result_2 + call_result_2) + 130.0);
          }
          if ( (unsigned int)(a2 - 4) <= 1 )
          {
            selection_code_4 = 128;
            call_result_3 = SR_VEC_READ_LANES(128, sub_1400384F0(saved_iteration_count_3, saved_iteration_count_2, 1023), f32)[0];
            integer_sum_2 = (int)(float)((float)(call_result_3 + call_result_3) + 130.0);
          }
          if ( (unsigned int)(a2 - 9) <= 1 )
          {
            selection_code_4 = 128;
            call_result_4 = SR_VEC_READ_LANES(128, sub_1400384F0(saved_iteration_count_3, saved_iteration_count_2, 1023), f32)[0];
            integer_sum_2 = (int)(float)((float)(call_result_4 + call_result_4) + 130.0);
          }
          if ( a2 == 3 || a2 == 8 )
          {
            selection_code_4 = 128;
            call_result_5 = SR_VEC_READ_LANES(128, sub_1400384F0(saved_iteration_count_3, saved_iteration_count_2, 1023), f32)[0];
            integer_sum_2 = (int)(float)((float)(call_result_5 + call_result_5) + 130.0);
          }
          else
          {
            saved_iteration_count_2 = (float)iteration_count_2;
          }
          if ( state_word_5 )
          {
            shifted_bits_2 = integer_sum_2 << 16;
            selection_code_4 <<= 24;
          }
          else
          {
            shifted_bits_2 = integer_sum_2 << 8;
          }
          scaled_index_2 = iteration_count_2 * state_word_6 + iteration_count_3++;
          dword_140404A6C[scaled_index_2 + 468765295] = selection_code_4 + shifted_bits_2;
          state_word_6 = g_1B0037420;
        }
        while ( iteration_count_3 < (int)g_1B0037420 );
        state_word_4 = g_1B0037424;
      }
      ++iteration_count_2;
    }
    while ( iteration_count_2 < state_word_4 );
    input_value_2 = a7;
    input_value_3 = a6;
    input_value_4 = a5;
    input_value_5 = a4;
  }
  glBindTexture(35866, dword_140404A6C[44 * dword_140404A6C[2 * scaled_index + 283827817] + 284024944]);
  if ( !a2 )
  {
    glTexParameteri(35866, 10242, input_value_5);
    glTexParameteri(35866, 10243, input_value_4);
    glTexParameteri(35866, 10240, input_value_3);
    glTexParameteri(35866, 10241, input_value_2);
    glTexImage3D(35866, 0, 6408, g_1B0037420, g_1B0037424, 11, 0, 6408, 5121, 0);
  }
  glTexSubImage3D(35866,
    0,
    0,
    0,
    a2,
    g_1B0037420,
    g_1B0037424,
    1,
    6408,
    5121,
    &g_1B0037428);
  glGenerateMipmap(35866);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(35866, 34046, 16.0f /* native XMM2 */);
}

//----- (0000000140099730) ----------------------------------------------------
double            sub_140099730(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  __int64 record_word_offset;
  int input_value;
  int scaled_index;
  int state_word;
  int state_word_2;
  __int64 scaled_index_2;
  unsigned int state_word_3;
  int i;
  int iteration_count;
  int selection_code;
  int selection_code_2;
  int integer_sum;
  int scaled_index_3;
  int cached_selection_code;
  float scaled_value;
  float scaled_value_2;
  float scaled_value_3;
  float component_sum;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  unsigned int integer_sum_2;
  int scaled_index_4;
  __int64 scaled_index_5;
  __int64 allocated_buffer;
  signed int iteration_count_2;
  signed int j;
  __int64 scaled_index_6;
  signed int scaled_index_7;
  double result;
  signed int state_word_4;
  signed int iteration_count_3;
  __int64 scaled_index_8;
  int state_word_5;
  unsigned int state_word_6;
  int iteration_count_4;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 allocated_buffer_2;
  signed int iteration_count_5;
  signed int k;
  __int64 scaled_index_11;
  signed int scaled_index_12;
  int cached_scaled_index;

  record_word_offset = 2LL * a1;
  input_value = a2;
  scaled_index = dword_140404A6C[4 * a1 + 283827814];
  cached_scaled_index = scaled_index;
  if ( a1 == 1 )
  {
    scaled_index_2 = 44LL * (int)resting_texture_1;
    state_word = dword_140404A6C[scaled_index_2 + 284024933];
    state_word_2 = dword_140404A6C[scaled_index_2 + 284024934];
    g_1B0037420 = state_word;
    g_1B0037424 = state_word_2;
    if ( state_word_2 <= 0 )
      goto LABEL_17;
  }
  else
  {
    state_word = 128;
    g_1B0037420 = 128;
    state_word_2 = 128;
    g_1B0037424 = 128;
  }
  state_word_3 = g_1862AE010;
  for ( i = 0; i < state_word_2; ++i )
  {
    iteration_count = 0;
    if ( state_word > 0 )
    {
      selection_code = 16;
      selection_code_2 = 16;
      if ( a1 != 2 )
      {
        selection_code = 0;
        selection_code_2 = 255;
      }
      do
      {
        integer_sum = selection_code_2;
        scaled_index_3 = selection_code_2;
        cached_selection_code = selection_code;
        if ( !a1 )
        {
          scaled_value = SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count * 0.5, (float)i * 0.25, 31), f32)[0];
          scaled_value_2 = SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count * 0.25, (float)i * 0.125, 15), f32)[0];
          scaled_value_3 = SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count, (float)i * 0.5, 63), f32)[0];
          component_sum = SR_VEC_READ_LANES(128, sub_1400384F0((float)((float)iteration_count + (float)iteration_count) + 1235.0, (float)i + 123.0, 127), f32)[0];
          scaled_index_3 = (int)(float)((float)((float)((float)(scaled_value + scaled_value_2) + (float)(scaled_value_3 + component_sum)) * 1.75) + 167.0);
          integer_sum = (int)(float)((float)((float)((float)(component_sum + component_sum) + scaled_value_3) + (float)(scaled_value_2 + scaled_value_3))
                           + (float)((float)(scaled_value + scaled_value) + (float)(scaled_value_2 + 168.0)));
          cached_selection_code = integer_sum;
        }
        if ( state_word_3 )
        {
          shifted_bits_3 = (integer_sum << 24) + 32;
          shifted_bits = cached_selection_code << 16;
          shifted_bits_2 = scaled_index_3 << 8;
        }
        else
        {
          shifted_bits = cached_selection_code << 8;
          shifted_bits_2 = scaled_index_3 << 16;
          shifted_bits_3 = integer_sum + 0x20000000;
        }
        integer_sum_2 = shifted_bits + shifted_bits_3 + shifted_bits_2;
        scaled_index_4 = iteration_count + i * state_word;
        ++iteration_count;
        dword_140404A6C[scaled_index_4 + 468765295] = integer_sum_2;
        state_word = g_1B0037420;
      }
      while ( iteration_count < (int)g_1B0037420 );
      state_word_2 = g_1B0037424;
    }
  }
  scaled_index = cached_scaled_index;
  input_value = a2;
LABEL_17:
  scaled_index_5 = 44LL * scaled_index;
  dword_140404A6C[scaled_index_5 + 284024933] = state_word;
  dword_140404A6C[scaled_index_5 + 284024938] = a3;
  dword_140404A6C[scaled_index_5 + 284024939] = a4;
  dword_140404A6C[scaled_index_5 + 284024934] = state_word_2;
  dword_140404A6C[scaled_index_5 + 284024935] = 1;
  dword_140404A6C[scaled_index_5 + 284024936] = 6408;
  dword_140404A6C[scaled_index_5 + 284024937] = 6408;
  dword_140404A6C[scaled_index_5 + 284024943] = 0;
  dword_140404A6C[scaled_index_5 + 284024940] = a5;
  dword_140404A6C[scaled_index_5 + 284024941] = a6;
  free(*(void **)&dword_140404A6C[scaled_index_5 + 284024945]);
  allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_5 + 284024933] * dword_140404A6C[scaled_index_5 + 284024934]));
  iteration_count_2 = 0;
  for ( *(_QWORD *)&dword_140404A6C[scaled_index_5 + 284024945] = allocated_buffer; iteration_count_2 < (int)dword_140404A6C[scaled_index_5 + 284024934]; ++iteration_count_2 )
  {
    for ( j = 0;
          j < (int)dword_140404A6C[scaled_index_5 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_5 + 284024945] + 4LL * scaled_index_7) = dword_140404A6C[scaled_index_6 + 468765295] )
    {
      scaled_index_6 = j + iteration_count_2 * g_1B0037420;
      scaled_index_7 = j + dword_140404A6C[scaled_index_5 + 284024933] * iteration_count_2;
      ++j;
    }
  }
  if ( input_value )
    sub_14009A370(scaled_index);
  sub_14014D3E0(scaled_index, 1);
  result = (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
  if ( a1 == 1 )
  {
    state_word_4 = g_1B0037424;
    iteration_count_3 = 0;
    scaled_index_8 = (int)dword_140404A6C[2 * record_word_offset + 283827815];
    state_word_5 = g_1B0037420;
    if ( (int)g_1B0037424 > 0 )
    {
      state_word_6 = g_1862AE010;
      do
      {
        iteration_count_4 = 0;
        if ( state_word_5 > 0 )
        {
          do
          {
            scaled_index_9 = iteration_count_4 + iteration_count_3 * state_word_5;
            if ( state_word_6 )
              dword_140404A6C[scaled_index_9 + 468765295] = -16711904;
            else
              dword_140404A6C[scaled_index_9 + 468765295] = 553582847;
            state_word_5 = g_1B0037420;
            ++iteration_count_4;
          }
          while ( iteration_count_4 < (int)g_1B0037420 );
          state_word_4 = g_1B0037424;
        }
        ++iteration_count_3;
      }
      while ( iteration_count_3 < state_word_4 );
    }
    scaled_index_10 = 44 * scaled_index_8;
    dword_140404A6C[scaled_index_10 + 284024938] = a3;
    dword_140404A6C[scaled_index_10 + 284024939] = a4;
    dword_140404A6C[scaled_index_10 + 284024933] = state_word_5;
    dword_140404A6C[scaled_index_10 + 284024934] = state_word_4;
    dword_140404A6C[scaled_index_10 + 284024935] = 1;
    dword_140404A6C[scaled_index_10 + 284024936] = 6408;
    dword_140404A6C[scaled_index_10 + 284024937] = 6408;
    dword_140404A6C[scaled_index_10 + 284024943] = 0;
    dword_140404A6C[scaled_index_10 + 284024940] = a5;
    dword_140404A6C[scaled_index_10 + 284024941] = a6;
    free(*(void **)&dword_140404A6C[44 * scaled_index_8 + 284024945]);
    allocated_buffer_2 = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_10 + 284024933] * dword_140404A6C[scaled_index_10 + 284024934]));
    iteration_count_5 = 0;
    *(_QWORD *)&dword_140404A6C[scaled_index_10 + 284024945] = allocated_buffer_2;
    if ( (int)dword_140404A6C[44 * scaled_index_8 + 284024934] > 0 )
    {
      do
      {
        for ( k = 0;
              k < (int)dword_140404A6C[scaled_index_10 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_10 + 284024945] + 4LL * scaled_index_12) = dword_140404A6C[scaled_index_11 + 468765295] )
        {
          scaled_index_11 = k + iteration_count_5 * g_1B0037420;
          scaled_index_12 = k + dword_140404A6C[scaled_index_10 + 284024933] * iteration_count_5;
          ++k;
        }
        ++iteration_count_5;
      }
      while ( iteration_count_5 < (int)dword_140404A6C[scaled_index_10 + 284024934] );
    }
    if ( input_value )
      sub_14009A370(scaled_index_8);
    sub_14014D3E0(scaled_index_8, 1);
    return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
      sub_140138590(dword_140404A6C[2 * record_word_offset + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 224, 32, 0, 0);
  }
  else
  {
    sub_140138590(dword_140404A6C[2 * record_word_offset + 283827815], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 96, 192, 0, 0);
  }
  return result;
}

//----- (0000000140099DD0) ----------------------------------------------------
double            sub_140099DD0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int iteration_count;
  unsigned int input_value;
  int input_value_2;
  int iteration_count_2;
  __int64 record_word_offset;
  signed int scaled_index;
  __int64 scaled_index_2;
  float state_scalar;
  __int64 unrecovered_register_value;
  unsigned int *state_address;
  unsigned int scaled_index_3;
  __int64 scaled_index_4;
  double x;
  double y;
  float height;
  __int64 unused_local;
  __int64 unused_local_2;

  iteration_count = 0;
  input_value = a3;
  input_value_2 = a2;
  iteration_count_2 = 0;
  record_word_offset = 2LL * a1;
  do
  {
    if ( iteration_count_2 )
      scaled_index = dword_140404A6C[2 * record_word_offset + 283827815];
    else
      scaled_index = dword_140404A6C[2 * record_word_offset + 283827814];
    scaled_index_2 = 44LL * scaled_index;
    g_1B0037420 = 128;
    g_1B0037424 = 128;
    glBindTexture(35866, dword_140404A6C[scaled_index_2 + 284024944]);
    glTexParameteri(35866, 10242, input_value);
    glTexParameteri(35866, 10243, a4);
    glTexParameteri(35866, 10240, a5);
    glTexParameteri(35866, 10241, a6);
    glTexImage3D(35866,
      0,
      6408,
      g_1B0037420,
      g_1B0037424,
      g_1A4CF0940,
      0,
      6408,
      5121,
      0);
    glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
    glViewport(0, 0, g_1B0037420, g_1B0037424);
    state_scalar = (float)(int)g_1B0037420;
    *(unsigned int *)&g_1A724E5A8 = -1082130432;
    g_1A724E5AC = 0;
    g_1A724E584 = 0;
    g_1A724E598 = 0;
    *(float *)&g_1A724E580 = (float)(1.0 / state_scalar) + (float)(1.0 / state_scalar);
    *(float *)&g_1A724E5B0 = -(float)((float)(1.0 / state_scalar) * state_scalar);
    *(_OWORD *)&g_1A724E5C8 = xmmword_140279490;
    g_1A724E594 = (float)(1.0 / (float)(int)g_1B0037424)
                                          + (float)(1.0 / (float)(int)g_1B0037424);
    *(_OWORD *)&g_1A724E5B8 = xmmword_140278E70;
    *(_OWORD *)&g_1A724E5D8 = 0;
    *(_OWORD *)&g_1A724E5E8 = xmmword_140278D30;
    *(_OWORD *)&g_1A724E5F8 = xmmword_140278E60;
    g_1A724E5B4 = -(float)((float)(1.0 / (float)(int)g_1B0037424)
                                                   * (float)(int)g_1B0037424);
    g_1A724E608 = xmmword_140279490;
    g_1A724E638 = 0;
    g_1A724E63C = 1065353216;
    g_1A724E628 = xmmword_140278D30;
    g_1A724E618 = 0;
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E680,
      (__int64)(unsigned int *)&g_1A724E5C0,
      (__int64)(unsigned int *)&g_1A724E580);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glDisable(3042);
    glBlendFunc(770,771);
    glDisable(2929);
    glDepthMask(0);
    glColorMask(1,1,1,1);
    glDisable(2884);
    if ( (int)g_1A4CF0940 > 0 )
    {
      state_address = &g_1A4CF0948;
      do
      {
        glFramebufferTextureLayer(36160, 36064, dword_140404A6C[scaled_index_2 + 284024944], 0, iteration_count);
        if ( iteration_count_2 )
          scaled_index_3 = dword_140404A6C[4 * *(state_address - 1) + 283827815];
        else
          scaled_index_3 = dword_140404A6C[4 * *(state_address - 1) + 283827814];
        scaled_index_4 = 768LL * (int)state_address[1] + 12352LL * (int)*state_address;
        *(_QWORD *)&x = *(unsigned int *)((char *)&g_1ABC89C44 + scaled_index_4);
        *(_QWORD *)&y = *(unsigned int *)((char *)&g_1ABC89C4C + scaled_index_4);
        *(float *)&x = *(float *)&x * 128.0;
        *(float *)&y = *(float *)&y * 128.0;
        height = *(float *)((char *)&g_1ABC89C50 + scaled_index_4) * 128.0;
        glColorMask(1,1,1,1);
        glBindTexture(3553, dword_140404A6C[44 * scaled_index_3 + 284024944]);
        sr_renderer_draw_textured_rect(0.0, 0.0, 0x43000000 /* native XMM2 width 128.0f */, 128.0, 128, 1065353216, 1065353216, 1065353216, 1065353216);
        if ( !iteration_count_2 )
        {
          glColorMask(0,0,0,1);
          glBindTexture(3553, renderer_white_texture);
          sr_renderer_draw_textured_rect(x, y, COERCE_UNSIGNED_INT((float)(*(float *)((char *)&g_1ABC89C48 + scaled_index_4) * 128.0f)) /* native XMM2 width = XMM10 */, height, 128, 0, 0, 0, 1065353216);
        }
        ++iteration_count;
        state_address += 3;
      }
      while ( iteration_count < (int)g_1A4CF0940 );
      input_value_2 = a2;
      input_value = a3;
    }
    LOBYTE(unrecovered_register_value) = 1;
    glColorMask(1,1,1,0);
    glBindTexture(35866, dword_140404A6C[scaled_index_2 + 284024944]);
    if ( input_value_2 )
      glGenerateMipmap(35866);
    glTexParameterf(35866, 34046, 16.0f /* native XMM2 */);
    ++iteration_count_2;
    iteration_count = 0;
  }
  while ( iteration_count_2 < 2 );
  return ((double (*)(_QWORD, _QWORD))glBindFramebuffer)(36160, 0);
}

//----- (000000014009A5F0) ----------------------------------------------------
void            sub_14009A5F0(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int state_word;
  int input_value;
  __int64 input_value_2;
  int masked_bits;
  int masked_bits_2;
  int masked_bits_3;
  int element_index;
  unsigned int state_word_2;
  int state_word_3;
  signed int state_word_4;
  int element_index_2;
  int selection_code;
  int selection_code_2;
  int selection_code_3;
  int cached_selection_code;
  int state_word_5;
  int state_word_6;
  int state_word_7;
  int state_word_8;
  int element_index_3;
  int state_address;
  int state_address_2;
  int state_address_3;
  int cached_selection_code_2;
  int selection_code_4;
  int selection_code_5;
  int selection_code_6;
  float square_root;
  float product_difference;
  int shifted_bits;
  signed int abs32_result;
  int shifted_bits_2;
  int shifted_bits_3;
  float squared_value;
  bool comparison_result;
  float square_root_2;
  __int64 scaled_index;
  __int64 allocated_buffer;
  signed int iteration_count;
  signed int i;
  __int64 scaled_index_2;
  signed int scaled_index_3;
  int integer_sum;

  state_word = g_183EBE444;
  input_value = a2;
  input_value_2 = a1;
  if ( a1 == g_183EBE440 )
  {
    masked_bits = dword_1402B2830[0];
    masked_bits_2 = dword_1402B2834[0];
    masked_bits_3 = dword_1402B2838[0];
  }
  else if ( a1 == g_183EBE444 )
  {
    masked_bits = dword_1402B283C;
    masked_bits_2 = dword_1402B2840;
    masked_bits_3 = dword_1402B2844;
  }
  else if ( a1 == g_183EBE448 )
  {
    masked_bits = dword_1402B2848;
    masked_bits_2 = dword_1402B284C;
    masked_bits_3 = dword_1402B2850;
  }
  else
  {
    masked_bits = a2;
    masked_bits_2 = a2;
    masked_bits_3 = a2;
  }
  if ( a1 == g_183EBF050 || a1 == g_183EBF054 || a1 == g_183EBF058 )
  {
    *(float *)&masked_bits = *(float *)&dword_1402B2848 * 0.5;
    *(float *)&masked_bits_2 = *(float *)&dword_1402B284C * 0.5;
    *(float *)&masked_bits_3 = *(float *)&dword_1402B2850 * 0.5;
  }
  else if ( a1 >= (int)g_183EBF05C && a1 <= (int)g_183EBF06C )
  {
    *(float *)&masked_bits = 0.125;
    *(float *)&masked_bits_3 = 0.375;
    *(float *)&masked_bits_2 = 0.125;
  }
  element_index = 0;
  if ( a1 != g_183EBF050 )
  {
    state_word_5 = g_183EBF108;
    state_word_3 = 128;
    state_word_6 = g_183EBF0F4;
    state_word_4 = 128;
    state_word_7 = g_183EBF07C;
    state_word_8 = g_183EBF074;
    g_1B0037420 = 128;
    g_1B0037424 = 128;
    integer_sum = 0;
    while ( 1 )
    {
      element_index_3 = 0;
      if ( state_word_3 > 0 )
        break;
LABEL_160:
      integer_sum = ++element_index;
      if ( element_index >= state_word_4 )
      {
        input_value = a2;
        goto LABEL_162;
      }
    }
    while ( 1 )
    {
      state_address = 0;
      state_address_2 = 255;
      state_address_3 = 255;
      cached_selection_code_2 = 32;
      if ( (int)input_value_2 < state_word_8 || (int)input_value_2 > state_word_7 )
        goto LABEL_63;
      if ( (unsigned int)(element_index_3 - 40) > 0x2F )
        break;
      if ( (unsigned int)(element_index - 84) <= 0x17 && (_DWORD)input_value_2 == state_word_8 )
      {
        cached_selection_code_2 = 255;
LABEL_61:
        state_address = 32;
        goto LABEL_62;
      }
      if ( (unsigned int)(element_index - 52) <= 0x17 && (_DWORD)input_value_2 == g_183EBF078 )
      {
        state_address = 255;
        cached_selection_code_2 = 255;
      }
      else
      {
        if ( (unsigned int)(element_index - 20) > 0x17 || (_DWORD)input_value_2 != state_word_7 )
          break;
        state_address_2 = 32;
        state_address = 255;
        cached_selection_code_2 = 255;
      }
LABEL_62:
      state_word_5 = g_183EBF108;
      state_address_3 = 32;
LABEL_63:
      if ( (int)input_value_2 >= state_word_6 && (int)input_value_2 <= state_word_5 )
      {
        if ( (_DWORD)input_value_2 == state_word_6 )
        {
          state_address_2 = 32;
          state_address = 32;
          state_address_3 = 32;
        }
        if ( (_DWORD)input_value_2 == g_183EBF0F8 )
        {
          state_address_2 = 32;
          state_address = 80;
          state_address_3 = 32;
        }
        if ( (_DWORD)input_value_2 == g_183EBF0FC )
        {
          state_address_2 = 32;
          state_address = 32;
          state_address_3 = 128;
        }
        if ( (_DWORD)input_value_2 == g_183EBF100 )
        {
          state_address_2 = 192;
          state_address = 192;
          state_address_3 = 192;
        }
        if ( (_DWORD)input_value_2 == g_183EBF104 )
        {
          state_address_2 = 247;
          state_address_3 = 25;
          state_address = 181;
        }
        if ( (_DWORD)input_value_2 == state_word_5 )
        {
          state_address = 16;
          state_address_2 = 64;
          state_address_3 = 16;
        }
        cached_selection_code_2 = 32;
        if ( element_index >= 88
          && (unsigned int)(element_index_3 - 32) <= 0x3F
          && ((unsigned int)(element_index - 92) > 0x1B || (unsigned int)(element_index_3 - 40) > 0xF) )
        {
          state_address_2 = 96;
          cached_selection_code_2 = 192;
          state_address = 96;
          state_address_3 = 96;
        }
      }
      if ( (_DWORD)input_value_2 == g_183EBE434 )
      {
        state_address_2 = 16;
        cached_selection_code_2 = 32;
        state_address_3 = 16;
        state_address = 64;
      }
      if ( (_DWORD)input_value_2 == g_183EBF10C )
      {
        if ( element_index_3 >= 64 )
        {
          state_address_2 = 32;
          state_address = 32;
          state_address_3 = 32;
          cached_selection_code_2 = 32;
        }
        else
        {
          state_address_2 = 128;
          state_address = 120;
          state_address_3 = 112;
          cached_selection_code_2 = 1;
        }
      }
      if ( (_DWORD)input_value_2 == g_183EBF114 )
      {
        if ( element_index_3 >= 64 )
        {
          state_address_2 = 64;
          cached_selection_code_2 = 32;
          state_address = 24;
          state_address_3 = 12;
        }
        else
        {
          state_address_2 = 16;
          cached_selection_code_2 = 192;
          state_address = 16;
          state_address_3 = 16;
        }
      }
      if ( (_DWORD)input_value_2 == resting_texture_0 )
      {
        state_address_2 = 160;
        state_address_3 = 32;
        cached_selection_code_2 = 192;
        state_address = 96;
      }
      if ( (_DWORD)input_value_2 == g_183EBF0F0 )
      {
        selection_code_4 = 192;
        selection_code_5 = 112;
        selection_code_6 = 110;
        if ( (float)((float)((float)((float)element_index - 64.0) * (float)((float)element_index - 64.0))
                   + (float)((float)((float)element_index_3 - 64.0) * (float)((float)element_index_3 - 64.0))) >= 2304.0 )
        {
          selection_code_6 = 32;
          selection_code_4 = 4;
          selection_code_5 = 32;
        }
        state_address = selection_code_6;
        state_address_2 = selection_code_6;
        state_address_3 = selection_code_5;
        cached_selection_code_2 = selection_code_4;
        if ( element_index >= 120 && element_index < 124 && element_index_3 >= 56 && element_index_3 < 72 )
        {
          state_address_3 = 64;
          cached_selection_code_2 = 4;
          state_address = 64;
          state_address_2 = 64;
        }
      }
      if ( (_DWORD)input_value_2 == g_183EBE438 )
      {
        cached_selection_code_2 = 0;
        state_address_2 = 255;
        state_address = 255;
        state_address_3 = 255;
        if ( (float)((float)((float)(64 - element_index) * (float)(64 - element_index)) + (float)((float)(64 - element_index_3) * (float)(64 - element_index_3))) < 2304.0 )
          cached_selection_code_2 = 192;
      }
      if ( (_DWORD)input_value_2 == effect_texture )
      {
        state_address_2 = 255;
        state_address = 255;
        state_address_3 = 255;
        square_root = fsqrt((float)((float)(64 - element_index) * (float)(64 - element_index)) + (float)((float)(64 - element_index_3) * (float)(64 - element_index_3)));
        product_difference = SR_VEC_READ_LANES(128, sub_1400384F0((float)element_index_3 * 0.0625, (float)element_index * 0.0625, -1), f32)[0];
        cached_selection_code_2 = 0;
        element_index = integer_sum;
        state_word = g_183EBE444;
        if ( (float)((float)(product_difference * 6.0) + 48.0) > square_root )
          cached_selection_code_2 = 192;
      }
      if ( (int)input_value_2 >= (int)g_183EBF050 && (int)input_value_2 <= (int)g_183EBF06C )
      {
        state_address = 16;
        state_address_2 = 128;
        if ( (_DWORD)input_value_2 != g_183EBF054 )
        {
          state_address = 32;
          state_address_2 = 32;
        }
        state_address_3 = state_address;
        if ( (_DWORD)input_value_2 == g_183EBF058 )
        {
          state_address_2 = 32;
          state_address = 32;
          state_address_3 = 96;
        }
        if ( (_DWORD)input_value_2 == g_183EBF05C )
        {
          state_address_2 = 128;
          state_address = 128;
          state_address_3 = 128;
        }
        if ( (_DWORD)input_value_2 == g_183EBF060 )
        {
          state_address_2 = 224;
          state_address = 224;
          state_address_3 = 224;
        }
        if ( (_DWORD)input_value_2 == g_183EBF064 )
        {
          state_address_2 = 219;
          state_address = 192;
          state_address_3 = 89;
        }
        if ( element_index_3 >= 64 )
        {
          state_address_2 = 64;
          state_address = 64;
          state_address_3 = 64;
        }
        cached_selection_code_2 = 128;
      }
      if ( (int)input_value_2 >= (int)g_183EBE440 && (int)input_value_2 <= (int)g_183EBE44C )
      {
        cached_selection_code_2 = 32;
        if ( element_index_3 >= 64 )
        {
          if ( element_index >= 64 )
          {
            if ( element_index >= 96 )
            {
              state_address_2 = 56;
              state_address = 64;
              state_address_3 = 253;
              squared_value = (float)((float)(111.5 - (float)element_index) * (float)(111.5 - (float)element_index))
                  + (float)((float)(79.5 - (float)element_index_3) * (float)(79.5 - (float)element_index_3));
              comparison_result = squared_value < 36.0;
              square_root_2 = fsqrt(squared_value);
              if ( !comparison_result )
              {
                state_address_2 = 253;
                state_address = 253;
              }
              if ( square_root_2 < 3.5 )
              {
                state_address_3 = 64;
                state_address = 64;
                state_address_2 = 64;
              }
            }
            else
            {
              state_address = 128;
              state_address_3 = 32;
              state_address_2 = 160;
            }
          }
          else
          {
            state_address_3 = 159;
            state_address = 180;
            state_address_2 = 253;
          }
        }
        else
        {
          state_address_3 = 96;
          state_address = 96;
          state_address_2 = 96;
          if ( (int)input_value_2 <= state_word && (unsigned int)(element_index - 96) <= 3 && (unsigned int)(element_index_3 - 42) <= 5 )
          {
            cached_selection_code_2 = 192;
            state_address_3 = (int)(float)(*(float *)&masked_bits_3 * 255.0);
            state_address = (int)(float)(*(float *)&masked_bits_2 * 255.0);
            state_address_2 = (int)(float)(*(float *)&masked_bits * 255.0);
          }
          shifted_bits = (element_index - 80) >> 2;
          abs32_result = abs32(element_index_3 - 32);
          if ( abs32_result < shifted_bits || (int)abs32(element_index_3 - 31) < shifted_bits )
          {
            cached_selection_code_2 = 0;
            state_address_3 = 192;
            state_address = 192;
            state_address_2 = 192;
            if ( (_DWORD)input_value_2 == g_183EBE448 )
            {
              if ( element_index < 126 && (unsigned int)(element_index_3 - 31) <= 1 )
              {
                cached_selection_code_2 = 192;
                state_address_3 = (int)(float)(*(float *)&masked_bits_3 * 255.0);
                state_address = (int)(float)(*(float *)&masked_bits_2 * 255.0);
                state_address_2 = (int)(float)(*(float *)&masked_bits * 255.0);
              }
              if ( element_index < 124 && (unsigned int)(element_index_3 - 30) <= 3 )
              {
                cached_selection_code_2 = 192;
                state_address_3 = (int)(float)(*(float *)&masked_bits_3 * 255.0);
                state_address = (int)(float)(*(float *)&masked_bits_2 * 255.0);
                state_address_2 = (int)(float)(*(float *)&masked_bits * 255.0);
              }
            }
            if ( (int)input_value_2 <= state_word && element_index < 126 )
            {
              shifted_bits_2 = (element_index - 112) >> 1;
              if ( abs32_result < shifted_bits_2 || (int)abs32(element_index_3 - 31) < shifted_bits_2 )
              {
                cached_selection_code_2 = 192;
                state_address_3 = (int)(float)(*(float *)&masked_bits_3 * 255.0);
                state_address = (int)(float)(*(float *)&masked_bits_2 * 255.0);
                state_address_2 = (int)(float)(*(float *)&masked_bits * 255.0);
              }
              shifted_bits_3 = (120 - element_index) >> 2;
              if ( abs32_result < shifted_bits_3 || (int)abs32(element_index_3 - 31) < shifted_bits_3 )
              {
                cached_selection_code_2 = 192;
                state_address_3 = (int)(float)(*(float *)&masked_bits_3 * 255.0);
                state_address = (int)(float)(*(float *)&masked_bits_2 * 255.0);
                state_address_2 = (int)(float)(*(float *)&masked_bits * 255.0);
              }
            }
          }
        }
      }
      if ( g_1862AE010 )
        dword_140404A6C[element_index * state_word_3 + 468765295 + element_index_3] = (state_address_3 << 8) + cached_selection_code_2 + (state_address << 16) + (state_address_2 << 24);
      else
        dword_140404A6C[element_index * state_word_3 + 468765295 + element_index_3] = (cached_selection_code_2 << 24) + state_address_2 + (state_address_3 << 16) + (state_address << 8);
      state_word_3 = g_1B0037420;
      ++element_index_3;
      state_word_7 = g_183EBF07C;
      state_word_8 = g_183EBF074;
      state_word_5 = g_183EBF108;
      state_word_6 = g_183EBF0F4;
      if ( element_index_3 >= (int)g_1B0037420 )
      {
        state_word_4 = g_1B0037424;
        goto LABEL_160;
      }
    }
    state_address_2 = 32;
    goto LABEL_61;
  }
  state_word_2 = g_1862AE010;
  state_word_3 = 16;
  state_word_4 = 16;
  g_1B0037420 = 16;
  g_1B0037424 = 16;
  do
  {
    element_index_2 = 0;
    if ( state_word_3 <= 0 )
      goto LABEL_44;
    do
    {
      if ( element_index == 15 )
      {
        if ( element_index_2 < 8 )
        {
LABEL_34:
          selection_code = 32;
          selection_code_3 = 32;
          cached_selection_code = 32;
          selection_code_2 = 32;
          if ( element_index != 1 )
            goto LABEL_39;
          selection_code = 255;
          selection_code_3 = 255;
          cached_selection_code = 255;
          if ( element_index_2 != 1 )
            goto LABEL_39;
          selection_code = 192;
          selection_code_2 = 192;
LABEL_37:
          selection_code_3 = 16;
        }
        else
        {
          selection_code = 96;
          selection_code_2 = 32;
          selection_code_3 = 96;
        }
LABEL_38:
        cached_selection_code = selection_code_3;
        goto LABEL_39;
      }
      if ( element_index )
        goto LABEL_34;
      selection_code = 32;
      selection_code_3 = 32;
      cached_selection_code = 32;
      selection_code_2 = 192;
      switch ( element_index_2 )
      {
        case 1:
          selection_code = 128;
          goto LABEL_37;
        case 2:
          cached_selection_code = 96;
          break;
        case 3:
          selection_code = 128;
          selection_code_3 = 128;
          goto LABEL_38;
        case 4:
          selection_code = 224;
          selection_code_3 = 224;
          goto LABEL_38;
        case 5:
          selection_code = 219;
          cached_selection_code = 89;
          selection_code_3 = 192;
          break;
        case 6:
          selection_code = 0;
          selection_code_3 = 0;
          cached_selection_code = 0;
          break;
      }
LABEL_39:
      if ( state_word_2 )
        dword_140404A6C[element_index_2 + 468765295 + element_index * state_word_3] = (cached_selection_code << 8) + selection_code_2 + (selection_code_3 << 16) + (selection_code << 24);
      else
        dword_140404A6C[element_index_2 + 468765295 + element_index * state_word_3] = (selection_code_2 << 24) + selection_code + (cached_selection_code << 16) + (selection_code_3 << 8);
      state_word_3 = g_1B0037420;
      ++element_index_2;
    }
    while ( element_index_2 < (int)g_1B0037420 );
    state_word_4 = g_1B0037424;
LABEL_44:
    ++element_index;
  }
  while ( element_index < state_word_4 );
LABEL_162:
  scaled_index = 44 * input_value_2;
  dword_140404A6C[scaled_index + 284024938] = a3;
  dword_140404A6C[scaled_index + 284024939] = a4;
  dword_140404A6C[scaled_index + 284024940] = a5;
  dword_140404A6C[scaled_index + 284024941] = a6;
  dword_140404A6C[scaled_index + 284024933] = state_word_3;
  dword_140404A6C[scaled_index + 284024934] = state_word_4;
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024937] = 6408;
  dword_140404A6C[scaled_index + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * input_value_2 + 284024945]);
  allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index + 284024933] * dword_140404A6C[scaled_index + 284024934]));
  iteration_count = 0;
  *(_QWORD *)&dword_140404A6C[scaled_index + 284024945] = allocated_buffer;
  if ( (int)dword_140404A6C[44 * input_value_2 + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[scaled_index + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index + 284024945] + 4LL * scaled_index_3) = dword_140404A6C[scaled_index_2 + 468765295] )
      {
        scaled_index_2 = i + iteration_count * g_1B0037420;
        scaled_index_3 = i + dword_140404A6C[scaled_index + 284024933] * iteration_count;
        ++i;
      }
      ++iteration_count;
    }
    while ( iteration_count < (int)dword_140404A6C[scaled_index + 284024934] );
  }
  if ( input_value )
    sub_14009A370(input_value_2);
  sub_14014D3E0(input_value_2, 1);
}

//----- (000000014009C040) ----------------------------------------------------
double            sub_14009C040(int a1, int a2)
{
  __int64 element_index;
  __int64 input_value;
  __int64 record_word_offset;
  float component_sum;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  __int64 unused_local_8;
  __int64 unused_local_9;
  __int64 unused_local_10;
  __int64 unused_local_11;
  __int64 unused_local_12;
  __int64 unused_local_13;
  __int64 unused_local_14;
  __int64 unused_local_15;
  __int64 unused_local_16;
  __int64 unrecovered_register_value;
  __int64 void_2;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  unsigned int cached_renderer_current_font;
  __int64 unrecovered_register_value_4;
  __int64 void_3;
  __int64 unrecovered_register_value_5;
  __int64 table_value;
  int integer_difference;
  unsigned int shifted_bits;
  unsigned int masked_bits;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 unrecovered_register_value_9;
  __int64 unrecovered_register_value_10;
  __int64 unrecovered_register_value_11;
  __int64 unused_local_17;
  __int64 unused_local_18;
  __int64 unused_local_19;
  __int64 unrecovered_register_value_12;
  __int64 unrecovered_register_value_13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009C040[16];
#define position (*(float (*))(void *)(sr_frame_14009C040 + 0)) /* [rsp+40h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14009C040 + 4)) /* [rsp+44h] */

  element_index = 0;
  input_value = a1;
  record_word_offset = 44LL * a2;
  g_1B0037420 = 512;
  g_1B0037424 = 512;
  dword_140404A6C[record_word_offset + 284024933] = 512;
  dword_140404A6C[record_word_offset + 284024934] = 512;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = 10497;
  dword_140404A6C[record_word_offset + 284024939] = 10497;
  dword_140404A6C[record_word_offset + 284024940] = 9729;
  dword_140404A6C[record_word_offset + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[record_word_offset + 284024945]);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[record_word_offset + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sr_camera_begin_orthographic(0, 0, 512, 512, 512.0, 512.0, 512.0);
  *(unsigned int *)&renderer_canvas_width = 1140850688;
  *(unsigned int *)&renderer_canvas_height = 1140850688;
  glViewport(0, 0, 512, 512);
  component_sum = 0.0;
  sr_math_mat4_ortho(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = 0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  /* 0x14009C374..0x14009C39E: xmm6 = 384.0 (0x14009C33F), xmm7 = 512.0 (0x14009C178), zeros from xorps */
  sr_renderer_batch_vertex3f(0.0f, 384.0f, 0.0f);
  sr_renderer_batch_vertex3f(512.0f, 384.0f, 0.0f);
  sr_renderer_batch_vertex3f(512.0f, 0.0f, 0.0f);
  sr_renderer_batch_vertex3f(0.0f, 0.0f, 0.0f);
  sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
  LOBYTE(unrecovered_register_value_3) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  cached_renderer_current_font = renderer_current_font;
  renderer_current_font = 3;
  if ( (_DWORD)input_value != -1 )
  {
    glBindTexture(3553, dword_140404A6C[44 * g_183EBFA88 + 284024944]);
    g_1AD059440 = 1;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    do
    {
      if ( element_index >= 1000 )
        break;
      table_value = (unsigned __int8)aHelloWorld[element_index];
      integer_difference = 39;
      g_1AD299450 = xmmword_140279700;
      if ( (unsigned __int8)(table_value - 65) <= 0x19u )
        integer_difference = table_value - 52;
      unused_written_slot = 1107296256;
      component_sum = component_sum + 16.0;
      *(float *)&shifted_bits = (float)(integer_difference >> 4) * 0.0625;
      position = component_sum;
      *(float *)&masked_bits = (float)(integer_difference & 0xF) * 0.0625;
      g_1AD299460 = masked_bits;
      *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, table_value, unrecovered_register_value_5);
      *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
      position = component_sum + 16.0;
      *(float *)&g_1AD299460 = *(float *)&masked_bits + 0.0625;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_6, unrecovered_register_value_7);
      *(float *)&g_1AD299460 = *(float *)&masked_bits + 0.0625;
      g_1AD299464 = shifted_bits;
      unused_written_slot = 1098907648;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_8, unrecovered_register_value_9);
      position = component_sum;
      g_1AD299460 = masked_bits;
      g_1AD299464 = shifted_bits;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_10, unrecovered_register_value_11);
      ++element_index;
    }
    while ( aHelloWorld[element_index] );
    sr_renderer_batch_flush(void_3, unrecovered_register_value_4, unrecovered_register_value_5);
    /* 0x14009C583: x = 320.0 (0x14009C56E), y = size = xmm12 = 16.0 (0x14009C3CC) */
    sub_140187860(40, 320.0f, 16.0f, 16.0);
    {
      /* 0x14009C5BA: x, y = twice the two ints at [rbp * 1B80h + 42BBB4E8h] (0x14009C5A2, 0x14009C598, addss
         each to itself); the C had passed a byte offset and an undefined local */
      float sr_x = (float)(int)dword_140404A6C[1760 * input_value + 278846111];
      float sr_y = (float)(int)dword_140404A6C[1760 * input_value + 278846112];
      sub_140187860(40, sr_x + sr_x, sr_y + sr_y, 16.0);
    }
  }
  glBindFramebuffer(36160, 0);
  renderer_current_font = cached_renderer_current_font;
  glEnable(3042);
  LOBYTE(unrecovered_register_value_12) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(unrecovered_register_value_13) = 1;
  glDepthMask(unrecovered_register_value_13);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}
#undef position
#undef unused_written_slot

//----- (000000014009C680) ----------------------------------------------------
__int64            sub_14009C680(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 input_value;
  __int64 unused_frame_slot_0;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unrecovered_register_value;
  __int64 void_2;
  __int64 unrecovered_register_value_2;
  int iteration_count;
  unsigned int *state_address;
  unsigned int loaded_word;
  unsigned int table_value;
  __int64 unused_local_4;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  __int64 unused_local_8;
  __int64 unused_local_9;
  __int64 unused_local_10;
  __int64 unused_local_11;
  __int64 unused_local_12;
  __int64 unused_local_13;
  __int64 unused_local_14;
  __int64 unused_local_15;
  __int64 unused_local_16;
  __int64 unused_local_17;
  __int64 unused_local_18;
  __int64 unused_local_19;
  __int64 unused_local_20;
  __int64 unused_local_21;
  __int64 unused_local_22;
  __int64 unused_local_23;
  __int64 unused_local_24;
  __int64 unrecovered_register_value_3;
  __int64 void_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  unsigned int cached_renderer_current_font;
  float component_sum;
  __int64 unused_local_25;
  __int64 remaining_count;
  __int64 scaled_index;
  __int64 scaled_index_2;
  int masked_bits;
  int table_value_2;
  unsigned int shifted_bits;
  __m128i vector_result;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009C680[1120];
#define scratch_buffer (*(_DWORD (*)[20])(void *)(sr_frame_14009C680 + 0)) /* [rsp+0h] */
#define text (*(__int16 (*)[512])(void *)(sr_frame_14009C680 + 80)) /* [rsp+50h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_14009C680 + 1104)) /* [rsp+450h] */

  record_word_offset = 44LL * a2;
  input_value = a1;
  g_1B0037420 = 512;
  g_1B0037424 = 512;
  dword_140404A6C[record_word_offset + 284024933] = 512;
  dword_140404A6C[record_word_offset + 284024934] = 512;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = 10497;
  dword_140404A6C[record_word_offset + 284024939] = 10497;
  dword_140404A6C[record_word_offset + 284024940] = 9729;
  dword_140404A6C[record_word_offset + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[record_word_offset + 284024945]);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[record_word_offset + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sr_camera_begin_orthographic(0, 0, 512, 512, 512.0, 512.0, 512.0);
  *(unsigned int *)&renderer_canvas_width = 1140850688;
  *(unsigned int *)&renderer_canvas_height = 1140850688;
  glViewport(0, 0, 512, 512);
  sr_math_mat4_ortho(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glBindTexture(3553, renderer_white_texture);
  iteration_count = 0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  state_address = &g_1665C4B48;
  do
  {
    loaded_word = *state_address;
    *(unsigned int *)&g_1AD299450 = *(state_address - 1);
    table_value = state_address[1];
    g_1AD299454 = loaded_word;
    g_1AD299458 = table_value;
    g_1AD29945C = 0;
    /* 0x14009CA1E..0x14009CA70: x0 = i * 16 (xmm7), x1 = (i + 1.0) * 16 (xmm6); y 496 (xmm12, 0x14009C9E6)
       and 512 (xmm11, 0x14009C7D7); z = 0 (xmm8, 0x14009C846) */
    sr_renderer_batch_vertex3f((float)iteration_count * 16.0f, 496.0f, 0.0f);
    sr_renderer_batch_vertex3f(((float)iteration_count + 1.0f) * 16.0f, 496.0f, 0.0f);
    sr_renderer_batch_vertex3f(((float)iteration_count + 1.0f) * 16.0f, 512.0f, 0.0f);
    sr_renderer_batch_vertex3f((float)iteration_count * 16.0f, 512.0f, 0.0f);
    ++iteration_count;
    state_address += 6;
  }
  while ( iteration_count < (int)g_1665C4B40 );
  sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  /* 0x14009CAD0..0x14009CB02: xmm6 = 384.0 (0x14009CAA0), xmm11 = 512.0 (0x14009C7D7), xmm8 = 0 (0x14009C846) */
  sr_renderer_batch_vertex3f(0.0f, 384.0f, 0.0f);
  sr_renderer_batch_vertex3f(512.0f, 384.0f, 0.0f);
  sr_renderer_batch_vertex3f(512.0f, 0.0f, 0.0f);
  sr_renderer_batch_vertex3f(0.0f, 0.0f, 0.0f);
  sr_renderer_batch_flush(void_3, unrecovered_register_value_3, unrecovered_register_value_4);
  LOBYTE(unrecovered_register_value_5) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  cached_renderer_current_font = renderer_current_font;
  component_sum = 16.0;
  renderer_current_font = 3;
  if ( (_DWORD)input_value != -1 )
  {
    glBindTexture(3553, g_1519AE8C4);
    remaining_count = 23;
    scaled_index = 1760 * input_value;
    scaled_index_2 = 110 * input_value;
    masked_bits = dword_140404A6C[scaled_index + 278846112];
    do
    {
      sub_140187C70(
        (__int64)&dword_140404A6C[16 * (scaled_index_2 + masked_bits) + 278846114],
        (__int64)&dword_140404A6C[16 * (scaled_index_2 + masked_bits) + 278846626],
        8.0f /* 0x14009CBB8: x = xmm7 = 8.0 (0x14009CB6C); the C had passed an undefined local */,
        component_sum,
        16.0);
      component_sum = component_sum + 16.0;
      masked_bits = ((_BYTE)masked_bits + 1) & 0x1F;
      --remaining_count;
    }
    while ( remaining_count );
    table_value_2 = dword_140404A6C[scaled_index + 278846113];
    if ( table_value_2 != -1 )
    {
      scratch_buffer[16] = 1065353216;
      shifted_bits = (table_value_2 >> 6) - dword_140404A6C[scaled_index + 278846112];
      scratch_buffer[14] = 1065353216;
      scratch_buffer[12] = 1065353216;
      text[0] = 127;
      vector_result = _mm_castps_si128(_mm_set_ss((float)(shifted_bits & 0x1F)));
      scratch_buffer[10] = 1065353216;
      scratch_buffer[8] = 64;
      *(float *)SR_VEC_LANES(128, vector_result, i32) = (float)(*(float *)SR_VEC_LANES(128, vector_result, i32) + 1.0) * 16.0;
      sr_text_draw_recovered((char *)text, (float)((float)(table_value_2 & 0x3F) + 1.0) * 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result))), 16.0, 64u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009CC53 */;
    }
  }
  glBindFramebuffer(36160, 0);
  renderer_current_font = cached_renderer_current_font;
  glEnable(3042);
  LOBYTE(unrecovered_register_value_6) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(unrecovered_register_value_7) = 1;
  glDepthMask(unrecovered_register_value_7);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* native stack-cookie check is non-returning only on corruption */
}
#undef scratch_buffer
#undef text
#undef unused_frame_slot_1104

//----- (000000014009CD10) ----------------------------------------------------
__int64            sub_14009CD10(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  unsigned int cached_renderer_current_font;
  int integer_sum;
  __m128i converted_vector;
  __int64 element_index;
  __int64 scaled_index;
  int iteration_count;
  __int64 i;
  unsigned __int8 masked_bits;
  int integer_sum_2;
  char masked_bits_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009CD10[1120];
#define scratch_buffer (*(_DWORD (*)[20])(void *)(sr_frame_14009CD10 + 0)) /* [rsp+0h] */
#define text (*(unsigned __int8 (*)[1024])(void *)(sr_frame_14009CD10 + 80)) /* [rsp+50h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_14009CD10 + 1104)) /* [rsp+450h] */

  record_word_offset = 44LL * a2;
  input_value = a1;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  dword_140404A6C[record_word_offset + 284024933] = 1024;
  dword_140404A6C[record_word_offset + 284024934] = 1024;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = 10497;
  dword_140404A6C[record_word_offset + 284024939] = 10497;
  dword_140404A6C[record_word_offset + 284024940] = 9729;
  dword_140404A6C[record_word_offset + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[record_word_offset + 284024945]);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[record_word_offset + 284024944], 0);
  glEnable(3553);
  glEnable(3042);
  glBlendFunc(770,771);
  sr_camera_begin_orthographic(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1149239296;
  glViewport(0, 0, 1024, 1024);
  sr_math_mat4_ortho(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glEnable(3042);
  cached_renderer_current_font = renderer_current_font;
  integer_sum = 0;
  converted_vector = _mm_cvtsi32_si128((int)(0x41800000u));
  element_index = 0;
  scaled_index = 1760 * input_value;
  renderer_current_font = 3;
  do
  {
    if ( !*((_BYTE *)&dword_140404A6C[scaled_index + 278846111] + element_index) )
      break;
    iteration_count = 0;
    for ( i = 0; i < 1024; ++i )
    {
      masked_bits = text[(_QWORD)&g_182BBB4E8 + element_index + scaled_index * 4 - (_QWORD)text + i];
      if ( !masked_bits )
        break;
      if ( masked_bits == 10 )
        break;
      text[i] = masked_bits;
      ++iteration_count;
    }
    if ( (unsigned __int64)i >= 0x400 )
      sub_1401F8694();
    scratch_buffer[16] = 1065353216;
    scratch_buffer[14] = 0;
    scratch_buffer[12] = 0;
    scratch_buffer[10] = 0;
    text[i] = 0;
    scratch_buffer[8] = 64;
    sr_text_draw_recovered((char *)text, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 32.0, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D105 */;
    element_index += i;
    integer_sum_2 = iteration_count + integer_sum;
    masked_bits_2 = *((_BYTE *)&dword_140404A6C[scaled_index + 278846111] + element_index);
    if ( masked_bits_2 )
    {
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 32.0;
      if ( masked_bits_2 == 10 )
        ++element_index;
    }
    integer_sum = integer_sum_2 + 1;
    if ( masked_bits_2 != 10 )
      integer_sum = integer_sum_2;
  }
  while ( element_index < 1024 );
  glBindFramebuffer(36160, 0);
  renderer_current_font = cached_renderer_current_font;
  glEnable(3042);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  glEnable(2929);
  LOBYTE(unrecovered_register_value_2) = 1;
  glDepthMask(unrecovered_register_value_2);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef text
#undef unused_frame_slot_1104

//----- (000000014009D210) ----------------------------------------------------
__int64            sub_14009D210(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  unsigned int cached_renderer_current_font;
  __m128i converted_vector;
  int iteration_count;
  __int64 element_index;
  __int64 scaled_index;
  char masked_bits;
  int iteration_count_2;
  __int64 i;
  unsigned __int8 masked_bits_2;
  int integer_sum;
  char masked_bits_3;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009D210[1120];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14009D210 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_14009D210 + 32)) /* [rsp+20h] */
#define unused_written_slot_2 (*(int (*))(void *)(sr_frame_14009D210 + 40)) /* [rsp+28h] */
#define unused_written_slot_3 (*(int (*))(void *)(sr_frame_14009D210 + 48)) /* [rsp+30h] */
#define unused_written_slot_4 (*(int (*))(void *)(sr_frame_14009D210 + 56)) /* [rsp+38h] */
#define unused_written_slot_5 (*(int (*))(void *)(sr_frame_14009D210 + 64)) /* [rsp+40h] */
#define text (*(unsigned __int8 (*)[1024])(void *)(sr_frame_14009D210 + 80)) /* [rsp+50h] */
#define unused_frame_slot_1104 (*(__int64 (*))(void *)(sr_frame_14009D210 + 1104)) /* [rsp+450h] */

  record_word_offset = 44LL * a2;
  input_value = a1;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  dword_140404A6C[record_word_offset + 284024933] = 1024;
  dword_140404A6C[record_word_offset + 284024934] = 1024;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = 10497;
  dword_140404A6C[record_word_offset + 284024939] = 10497;
  dword_140404A6C[record_word_offset + 284024940] = 9729;
  dword_140404A6C[record_word_offset + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[record_word_offset + 284024945]);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[record_word_offset + 284024944], 0);
  glEnable(3553);
  glEnable(3042);
  glBlendFunc(770,771);
  sr_camera_begin_orthographic(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1149239296;
  glViewport(0, 0, 1024, 1024);
  sr_math_mat4_ortho(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.5f,0.5f,0.5f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  glEnable(3042);
  cached_renderer_current_font = renderer_current_font;
  unused_written_slot_5 = 1065353216;
  unused_written_slot_4 = 0;
  unused_written_slot_3 = 0;
  unused_written_slot_2 = 0;
  renderer_current_font = 2;
  unused_written_slot = 65;
  sr_text_draw_recovered("The Readme", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 48.0, 65u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D588 */;
  converted_vector = _mm_cvtsi32_si128((int)(0x42C00000u));
  iteration_count = 0;
  element_index = 0;
  scaled_index = 1760 * input_value;
  do
  {
    masked_bits = *((_BYTE *)&dword_140404A6C[scaled_index + 278846111] + element_index);
    if ( !masked_bits )
      break;
    iteration_count_2 = 0;
    for ( i = 0; i < 1024; ++i )
    {
      masked_bits_2 = text[(_QWORD)&g_182BBB4E8 + element_index + scaled_index * 4 - (_QWORD)text + i];
      if ( !masked_bits_2 )
        break;
      if ( masked_bits_2 == 10 )
        break;
      text[i] = masked_bits_2;
      ++iteration_count_2;
    }
    if ( i <= 0 )
    {
      *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 32.0;
      if ( masked_bits == 10 )
      {
        ++iteration_count;
        ++element_index;
      }
    }
    else
    {
      if ( (unsigned __int64)i >= 0x400 )
        sub_1401F8694();
      unused_written_slot_5 = 1065353216;
      unused_written_slot_4 = 0;
      unused_written_slot_3 = 0;
      unused_written_slot_2 = 0;
      text[i] = 0;
      unused_written_slot = 64;
      sr_text_draw_recovered((char *)text, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 32.0, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009D673 */;
      element_index += i;
      integer_sum = iteration_count_2 + iteration_count;
      masked_bits_3 = *((_BYTE *)&dword_140404A6C[scaled_index + 278846111] + element_index);
      if ( masked_bits_3 )
      {
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 32.0;
        if ( masked_bits_3 == 10 )
          ++element_index;
      }
      iteration_count = integer_sum + 1;
      if ( masked_bits_3 != 10 )
        iteration_count = integer_sum;
    }
  }
  while ( element_index < 1024 );
  glBindFramebuffer(36160, 0);
  renderer_current_font = cached_renderer_current_font;
  glEnable(3042);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  glEnable(2929);
  LOBYTE(unrecovered_register_value_2) = 1;
  glDepthMask(unrecovered_register_value_2);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef unused_written_slot
#undef unused_written_slot_2
#undef unused_written_slot_3
#undef unused_written_slot_4
#undef unused_written_slot_5
#undef text
#undef unused_frame_slot_1104

//----- (000000014009DA10) ----------------------------------------------------
double            sub_14009DA10(int a1, int a2)
{
  __int64 record_word_offset;
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unrecovered_register_value;
  unsigned int cached_renderer_current_font;
  char *text;
  __m128i vector_result;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;

  record_word_offset = 44LL * a1;
  input_value = a2;
  g_1B0037420 = 256;
  g_1B0037424 = 64;
  dword_140404A6C[record_word_offset + 284024933] = 256;
  dword_140404A6C[record_word_offset + 284024934] = 64;
  dword_140404A6C[record_word_offset + 284024935] = 1;
  dword_140404A6C[record_word_offset + 284024936] = 6408;
  dword_140404A6C[record_word_offset + 284024937] = 6408;
  dword_140404A6C[record_word_offset + 284024943] = 0;
  dword_140404A6C[record_word_offset + 284024938] = 10497;
  dword_140404A6C[record_word_offset + 284024939] = 10497;
  dword_140404A6C[record_word_offset + 284024940] = 9729;
  dword_140404A6C[record_word_offset + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[record_word_offset + 284024945]);
  *(_QWORD *)&dword_140404A6C[record_word_offset + 284024945] = 0;
  sub_14014D3E0(a1, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97790 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[record_word_offset + 284024944], 0);
  glEnable(3042);
  glBlendFunc(770,771);
  sr_camera_begin_orthographic(
    0,
    0,
    g_1B0037420,
    g_1B0037424,
    (float)(int)g_1B0037420,
    (float)(int)g_1B0037424,
    (float)(int)g_1B0037424);
  (renderer_canvas_width) = (float)(int)g_1B0037420;
  (renderer_canvas_height) = (float)(int)g_1B0037424;
  glViewport(0, 0, g_1B0037420, g_1B0037424);
  sr_math_mat4_ortho(
    (__int64)(unsigned int *)&g_1A724E580,
    0.0,
    (renderer_canvas_width),
    (renderer_canvas_height),
    0.0,
    -1.0,
    1.0);
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glColorMask(1,1,1,1);
  glDisable(2929);
  glDepthMask(0);
  glDisable(3553);
  glDisable(3042);
  glClearColor(0.0f,0.25f,0.0f,0.0f) /* native XMM0-3 */;
  glClear(0x4000);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  glEnable(3042);
  cached_renderer_current_font = renderer_current_font;
  text = (char *)off_1402B2C00[input_value];
  vector_result = _mm_castps_si128(_mm_set_ss((float)(int)g_1B0037424));
  renderer_current_font = g_182A7CFE8;
  *(float *)SR_VEC_LANES(128, vector_result, i32) = *(float *)SR_VEC_LANES(128, vector_result, i32) * 0.5;
  sr_text_draw_recovered(text, (float)(int)g_1B0037420 * 0.5, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(vector_result))), 52.0, 5u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14009DDAE */;
  glBindFramebuffer(36160, 0);
  glBindTexture(3553, dword_140404A6C[record_word_offset + 284024944]);
  glGenerateMipmap(3553);
  renderer_current_font = cached_renderer_current_font;
  glEnable(3042);
  LOBYTE(unrecovered_register_value_2) = 1;
  glColorMask(1,1,1,0);
  *(unsigned int *)&renderer_canvas_width = 1149239296;
  *(unsigned int *)&renderer_canvas_height = 1141899264;
  glEnable(2929);
  LOBYTE(unrecovered_register_value_3) = 1;
  glDepthMask(unrecovered_register_value_3);
  return (*(double (**)(unsigned, unsigned, float))(unsigned int *)&glTexParameterf)(3553, 34046, 16.0f /* native XMM2 */);
}

//----- (00000001400A0EB0) ----------------------------------------------------
void            sub_1400A0EB0(int a1)
{
  __int64 player_record_offset;
  __int64 input_value;
  bool comparison_result;
  __int64 table_value;
  __int64 scaled_index;
  signed int integer_difference;
  float weighted_sum;
  unsigned int state_address;
  float product_difference;
  float weighted_sum_2;
  float weighted_sum_3;
  unsigned int *unused_written_slot;
  float weighted_sum_4;
  unsigned int *unused_written_slot_2;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float weighted_sum_11;
  float weighted_sum_12;
  __int64 scaled_index_2;
  double scaled_value;
  unsigned int absolute_value;
  unsigned int float_word;
  double float_word_2;
  double weighted_sum_13;
  double state_scalar;
  unsigned int table_value_2;
  float weighted_sum_14;

  player_record_offset = 3597LL * a1;
  input_value = a1;
  comparison_result = g_18329CC24 == 0;
  dword_140404A6C[player_record_offset + 71856325] = 0;
  if ( comparison_result )
  {
    table_value = (int)dword_140404A6C[player_record_offset + 71856292];
    if ( (_DWORD)table_value != -1 )
    {
      scaled_index = 7166 * table_value;
      if ( dword_140404A6C[7166 * table_value + 280651313] != -1 )
      {
        integer_difference = -1;
        if ( (int)dword_140404A6C[scaled_index + 280658139] > 0 )
          integer_difference = dword_140404A6C[scaled_index + 280658140];
        comparison_result = dword_140404A6C[player_record_offset + 71856340] == 2;
        dword_140404A6C[player_record_offset + 71856330] = 1;
        if ( !comparison_result )
        {
          *(_QWORD *)&dword_140404A6C[player_record_offset + 71856297] = 0;
          dword_140404A6C[player_record_offset + 71856293] = 0x40000000;
          dword_140404A6C[player_record_offset + 71856295] = -1082130432;
        }
        if ( integer_difference == -1 || dword_140404A6C[1760 * integer_difference + 278845898] != 18 )
          *(float *)&dword_140404A6C[player_record_offset + 71856331] = (float)((float)(int)g_160FC481C * 0.125)
                                                    + *(float *)&dword_140404A6C[player_record_offset + 71856331];
        else
          sub_1400A2C00(a1, integer_difference);
        weighted_sum = *(float *)&dword_140404A6C[player_record_offset + 71856331];
        if ( weighted_sum >= 0.0 )
        {
          if ( weighted_sum > 0.625 )
          {
            weighted_sum = 0.625;
            dword_140404A6C[player_record_offset + 71856331] = 1059061760;
          }
        }
        else
        {
          weighted_sum = 0.0;
          dword_140404A6C[player_record_offset + 71856331] = 0;
        }
        comparison_result = g_183F7C754 == 0;
        *(float *)&state_address = (float)((float)(weighted_sum - *(float *)&dword_140404A6C[player_record_offset + 71856332]) * 0.0625)
                      + *(float *)&dword_140404A6C[player_record_offset + 71856332];
        dword_140404A6C[player_record_offset + 71856332] = state_address;
        product_difference = 1.0 - *(float *)&state_address;
        if ( comparison_result )
        {
          comparison_result = g_151E46198 == 0;
          weighted_sum_2 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
          *(float *)&dword_140404A6C[player_record_offset + 71856297] = (float)((float)(g_183F7C6C8 * product_difference)
                                                            * 0.001953125)
                                                    + *(float *)&dword_140404A6C[player_record_offset + 71856297];
          if ( comparison_result )
            weighted_sum_3 = (float)((float)(g_183F7C6CC * product_difference) * 0.001953125) + weighted_sum_2;
          else
            weighted_sum_3 = weighted_sum_2 - (float)((float)(g_183F7C6CC * product_difference) * 0.001953125);
          *(float *)&dword_140404A6C[player_record_offset + 71856298] = weighted_sum_3;
          unused_written_slot = &dword_140404A6C[player_record_offset + 71856293];
          weighted_sum_4 = *(float *)&dword_140404A6C[player_record_offset + 71856293];
          if ( weighted_sum_4 >= 0.5 )
          {
            if ( weighted_sum_4 >= 1.5 )
              *unused_written_slot = 0x40000000;
            else
              *unused_written_slot = 1065353216;
          }
          else
          {
            *unused_written_slot = 0;
          }
          unused_written_slot_2 = &dword_140404A6C[player_record_offset + 71856295];
          weighted_sum_5 = *(float *)&dword_140404A6C[player_record_offset + 71856295];
          if ( weighted_sum_5 >= -0.375 )
          {
            if ( weighted_sum_5 <= 0.375 )
              *unused_written_slot_2 = 0;
            else
              *unused_written_slot_2 = 1065353216;
          }
          else
          {
            *unused_written_slot_2 = -1082130432;
          }
        }
        else
        {
          unused_written_slot = &dword_140404A6C[player_record_offset + 71856293];
          unused_written_slot_2 = &dword_140404A6C[player_record_offset + 71856295];
          weighted_sum_6 = (float)(g_183F7C6C8 * 0.0066666668)
              + *(float *)&dword_140404A6C[player_record_offset + 71856293];
          weighted_sum_7 = (float)(g_183F7C6CC * 0.0066666668)
              + *(float *)&dword_140404A6C[player_record_offset + 71856295];
          *(float *)&dword_140404A6C[player_record_offset + 71856293] = weighted_sum_6;
          *(float *)&dword_140404A6C[player_record_offset + 71856295] = weighted_sum_7;
          if ( weighted_sum_6 >= -0.125 )
          {
            if ( weighted_sum_6 > 2.125 )
              *unused_written_slot = 1074266112;
          }
          else
          {
            *unused_written_slot = -1107296256;
          }
          if ( weighted_sum_7 >= -1.0 )
          {
            if ( weighted_sum_7 > 1.0 )
              *unused_written_slot_2 = 1065353216;
          }
          else
          {
            *unused_written_slot_2 = -1082130432;
          }
          dword_140404A6C[player_record_offset + 71856325] |= 2u;
        }
        weighted_sum_8 = *(float *)&dword_140404A6C[player_record_offset + 71856297];
        if ( weighted_sum_8 >= -3.14159265359 )
        {
          if ( weighted_sum_8 > 3.14159265359 )
            dword_140404A6C[player_record_offset + 71856297] = 1078530011;
        }
        else
        {
          dword_140404A6C[player_record_offset + 71856297] = -1068953637;
        }
        weighted_sum_9 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
        if ( weighted_sum_9 >= -1.570796326795 )
        {
          if ( weighted_sum_9 > 1.570796326795 )
            dword_140404A6C[player_record_offset + 71856298] = 1070141403;
        }
        else
        {
          dword_140404A6C[player_record_offset + 71856298] = -1077342245;
        }
        if ( !g_18329B180 )
        {
          weighted_sum_10 = *(float *)&dword_140404A6C[player_record_offset + 71856296];
          if ( BYTE2(g_183F7C978) )
          {
            *(float *)&dword_140404A6C[player_record_offset + 71856296] = weighted_sum_10 + 0.03125;
          }
          else if ( BYTE2(g_183F7C974) )
          {
            *(float *)&dword_140404A6C[player_record_offset + 71856296] = weighted_sum_10 - 0.03125;
          }
          else if ( weighted_sum_10 < 0.125 )
          {
            if ( weighted_sum_10 > -0.125 )
              dword_140404A6C[player_record_offset + 71856296] = 0;
            else
              *(float *)&dword_140404A6C[player_record_offset + 71856296] = weighted_sum_10 + 0.125;
          }
          else
          {
            *(float *)&dword_140404A6C[player_record_offset + 71856296] = weighted_sum_10 - 0.125;
          }
          weighted_sum_11 = *(float *)&dword_140404A6C[player_record_offset + 71856294];
          if ( LOBYTE(g_183F7C964) )
          {
            if ( weighted_sum_11 <= -0.72187501 )
            {
              weighted_sum_11 = -0.75;
              dword_140404A6C[player_record_offset + 71856294] = -1086324736;
              weighted_sum_12 = -0.75;
            }
            else
            {
              weighted_sum_11 = weighted_sum_11 - 0.028125001;
              *(float *)&dword_140404A6C[player_record_offset + 71856294] = weighted_sum_11;
              weighted_sum_12 = weighted_sum_11;
            }
          }
          else if ( weighted_sum_11 >= -0.037500001 )
          {
            weighted_sum_12 = *(float *)&dword_140404A6C[player_record_offset + 71856294];
            if ( weighted_sum_11 < 0.0 )
            {
              weighted_sum_11 = 0.0;
              dword_140404A6C[player_record_offset + 71856294] = 0;
              weighted_sum_12 = 0.0;
            }
          }
          else
          {
            weighted_sum_11 = weighted_sum_11 + 0.037500001;
            *(float *)&dword_140404A6C[player_record_offset + 71856294] = weighted_sum_11;
            weighted_sum_12 = weighted_sum_11;
          }
          if ( HIBYTE(g_183F7C964) )
          {
            if ( weighted_sum_11 >= 0.72187501 )
              dword_140404A6C[player_record_offset + 71856294] = 1061158912;
            else
              *(float *)&dword_140404A6C[player_record_offset + 71856294] = weighted_sum_12 + 0.028125001;
          }
          else if ( weighted_sum_11 <= 0.037500001 )
          {
            if ( weighted_sum_11 > 0.0 )
              dword_140404A6C[player_record_offset + 71856294] = 0;
          }
          else
          {
            *(float *)&dword_140404A6C[player_record_offset + 71856294] = weighted_sum_12 - 0.037500001;
          }
          if ( LOBYTE(g_183F7C98C) )
            dword_140404A6C[player_record_offset + 71856325] |= 4u;
          if ( LOBYTE(g_183F7CA40) )
            dword_140404A6C[player_record_offset + 71856325] |= 8u;
          if ( BYTE1(g_183F7CA40) )
            dword_140404A6C[player_record_offset + 71856325] |= 0x10u;
          if ( integer_difference != -1 )
          {
            scaled_index_2 = 1760LL * integer_difference;
            if ( dword_140404A6C[scaled_index_2 + 278845898] == 25 && dword_140404A6C[scaled_index_2 + 278846052] == 1 )
              sub_1400A2DC0(a1, integer_difference);
          }
          if ( LOBYTE(g_183F7C968) )
            dword_140404A6C[player_record_offset + 71856325] |= 0x800u;
          if ( BYTE1(g_183F7C974) )
            dword_140404A6C[3597 * input_value + 71856325] |= 0x1000u;
          if ( BYTE1(g_183F7C968) )
            dword_140404A6C[3597 * input_value + 71856325] |= 0x2000u;
          if ( LOBYTE(g_183F7C9AC) )
            dword_140404A6C[3597 * input_value + 71856325] |= 0x40000u;
        }
        if ( toggle_183f7c2fc )
        {
          comparison_result = g_184397BA4 == 0;
          scaled_value = g_184397B64 * 2.3561944901925;
          *(float *)&absolute_value = fabs(g_184397B5C) * g_184397B5C * 0.75;
          *(float *)&float_word = g_184397B70 - g_184397B6C;
          dword_140404A6C[player_record_offset + 71856294] = absolute_value;
          float_word_2 = *(float *)&dword_140404A6C[player_record_offset + 71856297];
          dword_140404A6C[player_record_offset + 71856296] = float_word;
          weighted_sum_13 = *(float *)&dword_140404A6C[player_record_offset + 71856298];
          *(float *)&float_word_2 = (scaled_value - float_word_2) * 0.0625 + float_word_2;
          state_scalar = g_184397B68;
          dword_140404A6C[player_record_offset + 71856297] = LODWORD(float_word_2);
          *(float *)&dword_140404A6C[player_record_offset + 71856298] = (state_scalar * 2.3561944901925 - weighted_sum_13) * 0.0625 + weighted_sum_13;
          if ( !comparison_result )
            dword_140404A6C[player_record_offset + 71856325] |= 4u;
          if ( g_184397BA8 && !g_184393DA8 )
            dword_140404A6C[player_record_offset + 71856329] = -1;
          if ( g_184397BA0 && !g_184393DA0 )
            dword_140404A6C[player_record_offset + 71856329] = 0;
          table_value_2 = dword_140404A6C[player_record_offset + 71856329];
          if ( !table_value_2 )
          {
            *unused_written_slot = 0x40000000;
            *unused_written_slot_2 = -1082130432;
            table_value_2 = dword_140404A6C[player_record_offset + 71856329];
          }
          if ( table_value_2 == -1 )
          {
            *unused_written_slot = 0x40000000;
            *unused_written_slot_2 = 1065353216;
          }
        }
        sub_14009EA20(a1, table_value);
        weighted_sum_14 = *(float *)&dword_140404A6C[player_record_offset + 71856296];
        if ( weighted_sum_14 >= -1.0 )
        {
          if ( weighted_sum_14 > 1.0 )
            dword_140404A6C[player_record_offset + 71856296] = 1065353216;
        }
        else
        {
          dword_140404A6C[player_record_offset + 71856296] = -1082130432;
        }
      }
    }
  }
}

//----- (00000001400A5890) ----------------------------------------------------
void            sub_1400A5890(float *a1)
{
  float state_scalar;
  float state_scalar_2;
  float square_root;
  float scaled_value;
  float scaled_value_2;
  float weighted_sum;
  float square_root_2;
  float weighted_sum_2;
  float square_root_3;
  float expf_result;
  float scaled_value_3;
  float expf_result_2;
  float scaled_value_4;
  float scaled_ratio;
  float expf_result_3;
  float scaled_ratio_2;
  float scaled_ratio_3;
  float scaled_value_5;
  float scaled_value_6;
  float scaled_value_7;
  float weighted_sum_3;
  float scaled_value_8;
  float weighted_sum_4;
  float expf_result_4;
  float expf_result_5;
  float expf_result_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5890[32];
#define scaled_value_9 (*(float (*))(void *)(sr_frame_1400A5890 + 0)) /* [rsp+D0h] */
#define saved_expf_result (*(float (*))(void *)(sr_frame_1400A5890 + 8)) /* [rsp+D8h] */
#define saved_expf_result_2 (*(float (*))(void *)(sr_frame_1400A5890 + 16)) /* [rsp+E0h] */

  state_scalar = g_18417DE78;
  state_scalar_2 = g_18417DE7C;
  square_root = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(state_scalar_2 * state_scalar_2) * 246016.0)))
     - (float)(g_18417DE7C * 496.0);
  scaled_value = g_18417DE78 * square_root;
  scaled_value_2 = g_18417DE80 * square_root;
  scaled_value_9 = g_18417DE7C * square_root;
  weighted_sum = (float)((float)(g_18417DE7C * square_root) * 0.375) + 496.0;
  square_root_2 = fsqrt(
         (float)((float)((float)(square_root * g_18417DE7C)
                       * (float)(square_root * g_18417DE7C))
               + (float)(scaled_value * scaled_value))
       + (float)(scaled_value_2 * scaled_value_2));
  weighted_sum_2 = (float)((float)((float)((float)(g_18417DE78 * square_root) * 0.375)
                     * g_18417DE78)
             + (float)(weighted_sum * g_18417DE7C))
     + (float)((float)((float)(g_18417DE80 * square_root) * 0.375)
             * g_18417DE80);
  square_root_3 = (float)(fsqrt(
                  262144.0
                - (float)((float)((float)((float)((float)(scaled_value_2 * scaled_value_2) + (float)(scaled_value * scaled_value)) * 0.140625) + (float)(weighted_sum * weighted_sum))
                        - (float)(weighted_sum_2 * weighted_sum_2)))
              - weighted_sum_2)
      * 0.0390625;
  expf_result = expf(-(float)(*(float *)&dword_1402B23D0 * square_root_3));
  scaled_value_3 = *(float *)&dword_1402B23D4;
  saved_expf_result = expf_result;
  expf_result_2 = expf(-(float)(*(float *)&dword_1402B23D4 * square_root_3));
  scaled_value_4 = *(float *)&dword_1402B23D8;
  saved_expf_result_2 = expf_result_2;
  scaled_ratio = 0.0;
  expf_result_3 = expf(-(float)(*(float *)&dword_1402B23D8 * square_root_3));
  if ( square_root_2 == 0.0 )
  {
    scaled_ratio_2 = 0.0;
    scaled_ratio_3 = 0.0;
  }
  else
  {
    scaled_ratio_2 = scaled_value * (float)(1.0 / square_root_2);
    scaled_ratio = (float)(1.0 / square_root_2) * scaled_value_9;
    scaled_ratio_3 = scaled_value_2 * (float)(1.0 / square_root_2);
  }
  scaled_value_5 = g_18417DE80 * scaled_ratio_3;
  scaled_value_6 = square_root_2 * 0.0390625;
  scaled_value_7 = square_root_2 * 0.014648438;
  weighted_sum_3 = (float)(state_scalar * scaled_ratio_2) + (float)(state_scalar_2 * scaled_ratio);
  scaled_value_8 = *(float *)&dword_1402B23D0;
  weighted_sum_4 = (float)((float)(weighted_sum_3 + scaled_value_5) * (float)(weighted_sum_3 + scaled_value_5)) + 1.0;
  expf_result_4 = expf(-(float)(*(float *)&dword_1402B23D0 * scaled_value_7)) * (float)((float)((float)(scaled_value_6 * saved_expf_result) * weighted_sum_4) * scaled_value_8);
  *a1 = expf_result_4;
  expf_result_5 = expf(-(float)(scaled_value_3 * scaled_value_7)) * (float)((float)((float)(scaled_value_6 * saved_expf_result_2) * weighted_sum_4) * scaled_value_3);
  a1[1] = expf_result_5;
  expf_result_6 = expf(-(float)(scaled_value_4 * scaled_value_7)) * (float)((float)((float)(scaled_value_6 * expf_result_3) * weighted_sum_4) * scaled_value_4);
  a1[2] = expf_result_6;
  if ( expf_result_4 > 1.0 )
    *a1 = 1.0;
  if ( expf_result_5 > 1.0 )
    a1[1] = 1.0;
  if ( expf_result_6 > 1.0 )
    a1[2] = 1.0;
}
#undef scaled_value_9
#undef saved_expf_result
#undef saved_expf_result_2

//----- (00000001400A5D30) ----------------------------------------------------
void sub_1400A5D30()
{
  float square_root;
  float square_root_2;
  float square_root_3;
  float square_root_4;
  float square_root_5;
  float product_difference;
  float square_root_6;
  float square_root_7;
  float square_root_8;
  float scaled_value;
  float product_difference_2;
  float expf_result;
  float expf_result_2;
  float expf_result_3;
  float expf_result_4;
  float expf_result_5;
  float scaled_value_2;
  float expf_result_6;
  float expf_result_7;
  float expf_result_8;
  float expf_result_9;
  float expf_result_10;
  float scaled_value_3;
  float expf_result_11;
  float expf_result_12;
  float expf_result_13;
  float expf_result_14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5D30[32];
#define square_root_9 (*(float (*))(void *)(sr_frame_1400A5D30 + 0)) /* [rsp+D0h] */
#define square_root_10 (*(float (*))(void *)(sr_frame_1400A5D30 + 8)) /* [rsp+D8h] */
#define square_root_11 (*(float (*))(void *)(sr_frame_1400A5D30 + 16)) /* [rsp+E0h] */
#define square_root_12 (*(float (*))(void *)(sr_frame_1400A5D30 + 24)) /* [rsp+E8h] */

  square_root = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)(g_18417DE7C * g_18417DE7C)
                       * 246016.0)))
     - (float)(g_18417DE7C * 496.0);
  square_root_12 = fsqrt(
          (float)((float)((float)(g_18417DE7C * square_root)
                        * (float)(g_18417DE7C * square_root))
                + (float)((float)(g_18417DE78 * square_root)
                        * (float)(g_18417DE78 * square_root)))
        + (float)((float)(g_18417DE80 * square_root)
                * (float)(g_18417DE80 * square_root)))
      * 0.029296875;
  square_root_2 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F618C * *(float *)&dword_1402F618C) * 246016.0)))
     - (float)(*(float *)&dword_1402F618C * 496.0);
  square_root_9 = fsqrt(
          (float)((float)((float)((float)((float)(square_root_2 * square_root_2) * *(float *)&dword_1402F618C) * *(float *)&dword_1402F618C)
                        + (float)((float)(square_root_2 * *(float *)&dword_1402F6190) * (float)(square_root_2 * *(float *)&dword_1402F6190)))
                * 0.09765625)
        + (float)((float)((float)(square_root_2 * 0.09765625) * square_root_2)
                * (float)(*(float *)&dword_1402F6188 * *(float *)&dword_1402F6188)))
      * 0.029296875;
  square_root_3 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F617C * *(float *)&dword_1402F617C) * 246016.0)))
     - (float)(*(float *)&dword_1402F617C * 496.0);
  square_root_10 = fsqrt(
          (float)((float)((float)((float)((float)(square_root_3 * square_root_3) * *(float *)&dword_1402F617C) * *(float *)&dword_1402F617C)
                        + (float)((float)(square_root_3 * *(float *)&dword_1402F6180) * (float)(square_root_3 * *(float *)&dword_1402F6180)))
                * 0.09765625)
        + (float)((float)((float)(square_root_3 * 0.09765625) * square_root_3)
                * (float)(*(float *)&dword_1402F6178 * *(float *)&dword_1402F6178)))
      * 0.029296875;
  square_root_4 = fsqrt(
         262144.0
       - (float)(246016.0
               - (float)((float)((float)-*(float *)&dword_1402F617C * (float)-*(float *)&dword_1402F617C) * 246016.0)))
     - (float)((float)-*(float *)&dword_1402F617C * 496.0);
  square_root_11 = fsqrt(
          (float)((float)((float)((float)(square_root_4 * 0.09765625) * (float)-*(float *)&dword_1402F617C)
                        * (float)(square_root_4 * (float)-*(float *)&dword_1402F617C))
                + (float)((float)((float)(square_root_4 * 0.09765625) * square_root_4)
                        * (float)((float)-*(float *)&dword_1402F6178 * (float)-*(float *)&dword_1402F6178)))
        + (float)((float)((float)(square_root_4 * 0.09765625) * square_root_4)
                * (float)((float)-*(float *)&dword_1402F6180 * (float)-*(float *)&dword_1402F6180)))
      * 0.029296875;
  square_root_5 = fsqrt(
         262144.0
       - (float)(246016.0 - (float)((float)(*(float *)&dword_1402F619C * *(float *)&dword_1402F619C) * 246016.0)))
     - (float)(*(float *)&dword_1402F619C * 496.0);
  product_difference = -*(float *)&dword_1402F619C;
  square_root_6 = fsqrt(
         (float)((float)((float)((float)((float)(square_root_5 * square_root_5) * *(float *)&dword_1402F619C) * *(float *)&dword_1402F619C)
                       + (float)((float)(square_root_5 * *(float *)&dword_1402F61A0) * (float)(square_root_5 * *(float *)&dword_1402F61A0)))
               * 0.09765625)
       + (float)((float)((float)(square_root_5 * 0.09765625) * square_root_5)
               * (float)(*(float *)&dword_1402F6198 * *(float *)&dword_1402F6198)))
     * 0.029296875;
  square_root_7 = fsqrt(262144.0 - (float)(246016.0 - (float)((float)(product_difference * product_difference) * 246016.0))) - (float)(product_difference * 496.0);
  square_root_8 = fsqrt(
         (float)((float)((float)((float)(square_root_7 * 0.09765625) * square_root_7)
                       * (float)((float)-*(float *)&dword_1402F6198 * (float)-*(float *)&dword_1402F6198))
               + (float)((float)((float)(product_difference * product_difference) * 0.09765625) * (float)(square_root_7 * square_root_7)))
       + (float)((float)((float)(square_root_7 * 0.09765625) * square_root_7)
               * (float)((float)-*(float *)&dword_1402F61A0 * (float)-*(float *)&dword_1402F61A0)))
     * 0.029296875;
  scaled_value = *(float *)&dword_1402B23D0;
  product_difference_2 = 1.0
      - (float)((float)((float)(1.0 - g_18417DE7C)
                      * (float)(1.0 - g_18417DE7C))
              * (float)((float)(1.0 - g_18417DE7C)
                      * (float)(1.0 - g_18417DE7C)));
  expf_result = expf(-(float)(square_root_10 * *(float *)&dword_1402B23D0));
  expf_result_2 = expf_result + expf(-(float)(square_root_11 * scaled_value));
  expf_result_3 = expf(-(float)(square_root_6 * scaled_value));
  expf_result_4 = (float)(expf_result_2 + (float)(expf_result_3 + expf(-(float)(square_root_8 * scaled_value)))) * 0.5;
  expf_result_5 = expf_result_4 + (float)(expf(-(float)(scaled_value * square_root_9)) * 0.75);
  scaled_value_2 = *(float *)&dword_1402B23D4;
  g_184178D40 = (float)(expf_result_5 * product_difference_2) * 0.75;
  expf_result_6 = expf(-(float)(square_root_10 * *(float *)&dword_1402B23D4));
  expf_result_7 = expf_result_6 + expf(-(float)(square_root_11 * scaled_value_2));
  expf_result_8 = expf(-(float)(square_root_6 * scaled_value_2));
  expf_result_9 = (float)(expf_result_7 + (float)(expf_result_8 + expf(-(float)(square_root_8 * scaled_value_2)))) * 0.5;
  expf_result_10 = expf(-(float)(scaled_value_2 * square_root_9));
  scaled_value_3 = *(float *)&dword_1402B23D8;
  g_184178D44 = (float)((float)(expf_result_9 + (float)(expf_result_10 * 0.75)) * product_difference_2) * 0.75;
  expf_result_11 = expf(-(float)(square_root_10 * *(float *)&dword_1402B23D8));
  expf_result_12 = expf_result_11 + expf(-(float)(square_root_11 * scaled_value_3));
  expf_result_13 = expf(-(float)(square_root_6 * scaled_value_3));
  expf_result_14 = (float)(expf_result_12 + (float)(expf_result_13 + expf(-(float)(square_root_8 * scaled_value_3)))) * 0.5;
  g_184178D48 = (float)((float)(expf_result_14 + (float)(expf(-(float)(scaled_value_3 * square_root_9)) * 0.75)) * product_difference_2) * 0.75;
  g_184178D50 = expf(-(float)(scaled_value * square_root_12)) * 1.125;
  g_184178D54 = expf(-(float)(scaled_value_2 * square_root_12)) * 1.125;
  g_184178D58 = expf(-(float)(scaled_value_3 * square_root_12)) * 1.125;
}
#undef square_root_9
#undef square_root_10
#undef square_root_11
#undef square_root_12

//----- (00000001400A6DF0) ----------------------------------------------------
__int64 sub_1400A6DF0()
{
  __int64 unrecovered_register_value;

  glEnable(3553);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD))glStencilFunc)(517, 0, 0xFFFFFFFFLL);
}

//----- (00000001400A6E90) ----------------------------------------------------
__int64 sub_1400A6E90()
{
  __int64 unrecovered_register_value;

  glEnable(3553);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD))glStencilFunc)(514, 0, 0xFFFFFFFFLL);
}

//----- (00000001400A6F30) ----------------------------------------------------
double sub_1400A6F30()
{
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;

  glEnable(3553);
  LOBYTE(unrecovered_register_value) = 1;
  glColorMask(1,1,1,0);
  LOBYTE(unrecovered_register_value_2) = 1;
  glDepthMask(unrecovered_register_value_2);
  glDisable(3042);
  glEnable(2929);
  glDepthFunc(515);
  glEnable(2884);
  glFrontFace(2304);
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(2960);
}

//----- (00000001400A6FB0) ----------------------------------------------------
__int64 sub_1400A6FB0()
{
  __int64 selection_code;

  glDisable(3553);
  glColorMask(0,0,0,0);
  glDepthMask(0);
  glEnable(2929);
  selection_code = 518;
  if ( g_151E46194 )
    selection_code = 515;
  glDepthFunc(selection_code);
  glDisable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilFuncSeparate(1029, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1029, 0xFFFFFFFFLL);
  glStencilOpSeparate(1029, 7680, 7680, 34056);
  glStencilFuncSeparate(1028, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1028, 0xFFFFFFFFLL);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glStencilOpSeparate)(1028, 7680, 7680, 34055);
}

//----- (00000001400C2DB0) ----------------------------------------------------
__int64            sub_1400C2DB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *state_address;
  __int64 i;
  int selection_code;
  __int64 remaining_count;
  unsigned int *saved_state_address;
  int scaled_index;
  int iteration_count;
  unsigned int *running_total;
  int scaled_index_2;
  int callee_output_word;

  state_address = &g_18AB10F98;
  for ( i = 0; i < 6; ++i )
  {
    if ( !*(state_address - 3147781) )
      state_address[98305] = 0;
    *(state_address - 3147782) = 34962;
    if ( (unsigned __int64)i < 2 )
    {
      selection_code = 128;
    }
    else
    {
      *(state_address - 3147782) = 34963;
      selection_code = 64;
    }
    *(state_address - 3147780) = selection_code;
    remaining_count = 0x4000;
    *(state_address - 3147779) = 0x80000;
    saved_state_address = state_address;
    *(state_address - 3147778) = 128;
    do
    {
      *saved_state_address = -1;
      saved_state_address += 6;
      --remaining_count;
    }
    while ( remaining_count );
    scaled_index = *(state_address - 3147780);
    iteration_count = 0;
    if ( scaled_index > 0 )
    {
      running_total = state_address - 3147776;
      do
      {
        *(_QWORD *)(running_total - 1) = 0;
        running_total += 3074;
        scaled_index = *(state_address - 3147780);
        ++iteration_count;
      }
      while ( iteration_count < scaled_index );
    }
    state_address[98304] = 0;
    if ( !*(state_address - 3147781) )
    {
      scaled_index_2 = *(state_address - 3147779) * scaled_index;
      glBindBuffer(*(state_address - 3147782), dword_140404A6C[2 * dword_140404A6C[i + 283791462] + 283793813]);
      glBufferData(*(state_address - 3147782), (int)(*(state_address - 3147779) * *(state_address - 3147780)), 0, 35048);
      glGetBufferParameteriv(*(state_address - 3147782), 34660, &callee_output_word);
      if ( scaled_index_2 != callee_output_word )
      {
        state_address[98305] = 1;
        sub_140198F95(16, (__int64)"Error", (__int64)"Videomem malloc failed");
        g_160FC47C0 = 1;
      }
    }
    *(state_address - 3147781) = 1;
    state_address += 3246088;
  }
  g_18F5BD060 = 34962;
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C20 + 283793813]);
  return ((__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))glBufferData)(g_18F5BD060, 0x80000, 0, 35048);
}

//----- (00000001400D4360) ----------------------------------------------------
double            sub_1400D4360(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  double result;
  unsigned int state_word;
  int masked_bits;
  int state_word_2;
  int saved_masked_bits;
  int iteration_count;
  int saved_masked_bits_2;
  int running_total;
  int masked_bits_2;
  __int64 input_value;
  signed int state_word_3;
  int iteration_count_2;
  int shifted_bits;
  int shifted_bits_2;
  int shifted_bits_3;
  int shifted_bits_4;
  unsigned int integer_sum;
  int scaled_index;
  __int64 scaled_index_2;
  __int64 allocated_buffer;
  signed int iteration_count_3;
  signed int i;
  __int64 scaled_index_3;
  signed int scaled_index_4;
  int saved_running_total;

  state_word = g_183EBF160;
  masked_bits = a3;
  state_word_2 = 1024;
  saved_masked_bits = a3;
  iteration_count = 0;
  saved_masked_bits_2 = a3;
  running_total = 0;
  masked_bits_2 = a3;
  input_value = a1;
  state_word_3 = 1024;
  g_1B0037420 = 1024;
  g_1B0037424 = 1024;
  saved_running_total = 0;
  do
  {
    iteration_count_2 = 0;
    if ( state_word_2 > 0 )
    {
      do
      {
        if ( (_DWORD)input_value == g_183EBF15C || (_DWORD)input_value == state_word )
        {
          masked_bits = 151;
          saved_masked_bits_2 = 84;
          if ( (_DWORD)input_value == state_word && (unsigned int)(iteration_count - 576) <= 0xBF && (unsigned int)(iteration_count_2 - 256) <= 0xBF )
          {
            masked_bits = 123;
            saved_masked_bits_2 = 123;
          }
          masked_bits_2 = 255;
          saved_masked_bits = 123;
        }
        if ( (_DWORD)input_value == g_183EBF158 )
        {
          masked_bits_2 = 0;
          shifted_bits = (((running_total + iteration_count_2) << 13) ^ (running_total + iteration_count_2)) * (((running_total + iteration_count_2) << 13) ^ (running_total + iteration_count_2));
          masked_bits = (int)(float)((float)(16.0
                                  - (float)((float)(((15731 * shifted_bits + 789221) * (15731 * shifted_bits + 789221) - 771171059)
                                                  & 0x7FFFFFFF)
                                          * 0.000000014901161))
                          + 192.0);
          saved_masked_bits_2 = masked_bits;
          saved_masked_bits = masked_bits;
          *(_QWORD *)&result = SR_VEC_READ_LANES(128, sub_1400384F0((float)iteration_count_2, (float)iteration_count, 1023), u64)[0];
          running_total = saved_running_total;
          if ( *(float *)&result > 0.25 )
          {
            *(float *)&result = (float)(*(float *)&result - 0.25) * 128.0;
            masked_bits_2 = (int)*(float *)&result;
          }
        }
        if ( g_1862AE010 )
        {
          shifted_bits_2 = masked_bits_2 + (saved_masked_bits << 16);
          shifted_bits_3 = saved_masked_bits_2 << 8;
          shifted_bits_4 = masked_bits << 24;
        }
        else
        {
          shifted_bits_2 = masked_bits + (saved_masked_bits_2 << 16);
          shifted_bits_3 = masked_bits_2 << 24;
          shifted_bits_4 = saved_masked_bits << 8;
        }
        integer_sum = shifted_bits_3 + shifted_bits_2 + shifted_bits_4;
        scaled_index = iteration_count_2 + iteration_count * state_word_2;
        ++iteration_count_2;
        dword_140404A6C[scaled_index + 468765295] = integer_sum;
        state_word_2 = g_1B0037420;
        state_word = g_183EBF160;
      }
      while ( iteration_count_2 < (int)g_1B0037420 );
      state_word_3 = g_1B0037424;
    }
    running_total += 57;
    ++iteration_count;
    saved_running_total = running_total;
  }
  while ( iteration_count < state_word_3 );
  scaled_index_2 = 44 * input_value;
  dword_140404A6C[scaled_index_2 + 284024938] = a3;
  dword_140404A6C[scaled_index_2 + 284024939] = a4;
  dword_140404A6C[scaled_index_2 + 284024940] = a5;
  dword_140404A6C[scaled_index_2 + 284024941] = a6;
  dword_140404A6C[scaled_index_2 + 284024933] = state_word_2;
  dword_140404A6C[scaled_index_2 + 284024934] = state_word_3;
  dword_140404A6C[scaled_index_2 + 284024935] = 1;
  dword_140404A6C[scaled_index_2 + 284024936] = 6408;
  dword_140404A6C[scaled_index_2 + 284024937] = 6408;
  dword_140404A6C[scaled_index_2 + 284024943] = 0;
  free(*(void **)&dword_140404A6C[44 * input_value + 284024945]);
  allocated_buffer = sr_path_malloc((int)(4 * dword_140404A6C[scaled_index_2 + 284024933] * dword_140404A6C[scaled_index_2 + 284024934]));
  iteration_count_3 = 0;
  *(_QWORD *)&dword_140404A6C[scaled_index_2 + 284024945] = allocated_buffer;
  if ( (int)dword_140404A6C[44 * input_value + 284024934] > 0 )
  {
    do
    {
      for ( i = 0;
            i < (int)dword_140404A6C[scaled_index_2 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[scaled_index_2 + 284024945] + 4LL * scaled_index_4) = dword_140404A6C[scaled_index_3 + 468765295] )
      {
        scaled_index_3 = i + iteration_count_3 * g_1B0037420;
        scaled_index_4 = i + iteration_count_3 * dword_140404A6C[scaled_index_2 + 284024933];
        ++i;
      }
      ++iteration_count_3;
    }
    while ( iteration_count_3 < (int)dword_140404A6C[scaled_index_2 + 284024934] );
  }
  if ( a2 )
    sub_14009A370(input_value);
  sub_14014D3E0(input_value, 1);
  return result;
}

//----- (00000001400E3AB0) ----------------------------------------------------
__int64 sub_1400E3AB0()
{
  int iteration_count;
  __int64 result;
  __int64 state_word;
  int iteration_count_2;
  unsigned int *state_address;
  __int64 scaled_index;
  __int64 scaled_index_2;
  unsigned int integer_sum;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E3AB0[16];
#define frame_word_at_0 (*(unsigned int (*))(void *)(sr_frame_1400E3AB0 + 0)) /* [rsp+24h] */
#define frame_word_at_4 (*(unsigned int (*))(void *)(sr_frame_1400E3AB0 + 4)) /* [rsp+28h] */

  iteration_count = 0;
  result = sub_140198EB7();
  if ( (int)result > 0 )
  {
    do
    {
      if ( iteration_count < 512 )
      {
        sub_140198EBD();
        state_word = (int)g_184393D30;
        iteration_count_2 = 0;
        if ( (int)g_184393D30 <= 0 )
        {
LABEL_8:
          scaled_index = 3 * state_word;
          dword_140404A6C[scaled_index + 284532901] = frame_word_at_0;
          dword_140404A6C[scaled_index + 284532902] = frame_word_at_4;
          dword_140404A6C[scaled_index + 284532903] = 32;
          g_184393D30 = state_word + 1;
        }
        else
        {
          state_address = &g_18416CD04;
          while ( 1 )
          {
            if ( *(state_address - 1) == frame_word_at_0 )
            {
              *state_address = frame_word_at_4;
              if ( frame_word_at_4 )
                break;
            }
            ++iteration_count_2;
            state_address += 3;
            if ( iteration_count_2 >= (int)state_word )
              goto LABEL_8;
          }
        }
      }
      ++iteration_count;
      result = sub_140198EB7();
    }
    while ( iteration_count < (int)result );
  }
  scaled_index_2 = 3LL * (int)g_184393D30;
  integer_sum = g_184393D30 + 1;
  dword_140404A6C[scaled_index_2 + 284532901] = 1024;
  dword_140404A6C[scaled_index_2 + 284532902] = 640;
  dword_140404A6C[scaled_index_2 + 284532903] = 32;
  g_184393D30 = integer_sum;
  return result;
}
#undef frame_word_at_0
#undef frame_word_at_4

//----- (000000014011DA50) ----------------------------------------------------
void            sub_14011DA50(int a1)
{
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  __int64 scaled_index_2;
  signed int iteration_count;
  int state_word;
  unsigned int *state_address;
  float *state_address_2;
  float *state_address_3;
  float scaled_value;
  float product_difference;
  float product_difference_2;
  float source_component_y;
  float product_difference_3;
  float product_difference_4;
  float scaled_value_2;
  float source_float_4;
  float source_float_5;
  float source_component_z;
  float source_component_w;
  float source_float_6;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  __int64 scaled_index_5;
  float weighted_sum;
  float component_sum;
  float state_scalar;
  __int64 scaled_index_6;
  float state_scalar_2;
  float state_scalar_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011DA50[16];
#define saved_buffer_cursor (*(unsigned int * (*))(void *)(sr_frame_14011DA50 + 0)) /* [rsp+E0h] */
#define saved_remaining_count (*(__int64 (*))(void *)(sr_frame_14011DA50 + 8)) /* [rsp+E8h] */

  remaining_count = 4;
  saved_remaining_count = 4;
  buffer_cursor = &dword_140404A6C[6930 * a1 + 83200503];
  saved_buffer_cursor = buffer_cursor;
  do
  {
    if ( buffer_cursor[780] )
    {
      scaled_index = (int)*buffer_cursor;
      if ( (int)scaled_index >= 0 )
      {
        glBindTexture(3553,
          dword_140404A6C[44 * dword_140404A6C[4 * mark_texture_choice + 283827814] + 284024944]);
        scaled_index_2 = 8969 * scaled_index;
        iteration_count = 0;
        g_1AD059448 = 0;
        g_1AD05944C = 6;
        if ( (int)dword_140404A6C[8969 * scaled_index + 73995254] > 0 )
        {
          state_word = g_1841FA224;
          state_address = &dword_140404A6C[scaled_index_2 + 73995255];
          state_address_2 = (float *)&dword_140404A6C[scaled_index_2 + 73995261];
          state_address_3 = (float *)&dword_140404A6C[scaled_index_2 + 73995266];
          do
          {
            if ( *state_address )
            {
              if ( state_word < 0x4000 )
              {
                scaled_value = *state_address_2;
                product_difference = *(state_address_3 - 4);
                product_difference_2 = *(state_address_3 - 3);
                source_component_y = state_address_3[1];
                product_difference_3 = *(state_address_3 - 2);
                product_difference_4 = *(state_address_3 - 1);
                scaled_value_2 = *state_address_3;
                source_float_4 = state_address_3[4];
                source_float_5 = state_address_3[5];
                source_component_z = state_address_3[2];
                source_component_w = state_address_3[3];
                source_float_6 = state_address_3[6];
                scaled_index_3 = 17LL * state_word;
                *(float *)&dword_140404A6C[scaled_index_3 + 284677616] = product_difference;
                *(float *)&dword_140404A6C[scaled_index_3 + 284677617] = product_difference_2;
                *(float *)&dword_140404A6C[scaled_index_3 + 284677615] = scaled_value;
                scaled_index_4 = 17LL * (int)g_1841FA224;
                *(float *)&dword_140404A6C[scaled_index_4 + 284677618] = product_difference_3;
                *(float *)&dword_140404A6C[scaled_index_4 + 284677619] = product_difference_4;
                *(float *)&dword_140404A6C[scaled_index_4 + 284677620] = scaled_value_2;
                scaled_index_5 = 17LL * (int)g_1841FA224;
                weighted_sum = (float)((float)((float)(product_difference + product_difference_4) + source_component_z) + source_float_5) * 0.25;
                component_sum = (float)((float)(product_difference_3 + scaled_value) + source_component_y) + source_float_4;
                *(float *)&dword_140404A6C[scaled_index_5 + 284677621] = source_component_y;
                state_scalar = g_183F7C548;
                *(float *)&dword_140404A6C[scaled_index_5 + 284677622] = source_component_z;
                *(float *)&dword_140404A6C[scaled_index_5 + 284677623] = source_component_w;
                scaled_index_6 = 17LL * (int)g_1841FA224;
                *(float *)&dword_140404A6C[scaled_index_6 + 284677624] = source_float_4;
                state_scalar_2 = g_183F7C54C;
                *(float *)&dword_140404A6C[scaled_index_6 + 284677625] = source_float_5;
                state_scalar_3 = g_183F7C544;
                *(float *)&dword_140404A6C[scaled_index_6 + 284677626] = source_float_6;
                *(float *)&dword_140404A6C[17 * g_1841FA224 + 284677630] = fsqrt(
                                                                                            (float)((float)((float)(state_scalar - weighted_sum) * (float)(state_scalar - weighted_sum))
                                                                                                  + (float)((float)(state_scalar_3 - (float)(component_sum * 0.25)) * (float)(state_scalar_3 - (float)(component_sum * 0.25))))
                                                                                          + (float)((float)(state_scalar_2 - (float)((float)((float)((float)(product_difference_2 + scaled_value_2) + source_component_w) + source_float_6) * 0.25))
                                                                                                  * (float)(state_scalar_2 - (float)((float)((float)((float)(product_difference_2 + scaled_value_2) + source_component_w) + source_float_6) * 0.25))));
                sr_math_triangle_normal(
                  (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 68LL * (int)g_1841FA224 + 1142923864),
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677615],
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677618],
                  (float *)&dword_140404A6C[17 * g_1841FA224 + 284677621]);
                state_word = ++g_1841FA224;
              }
            }
            ++iteration_count;
            state_address += 21;
            state_address_2 += 21;
            state_address_3 += 21;
          }
          while ( iteration_count < (int)dword_140404A6C[scaled_index_2 + 73995254] );
          buffer_cursor = saved_buffer_cursor;
          remaining_count = saved_remaining_count;
        }
      }
    }
    ++buffer_cursor;
    --remaining_count;
    saved_buffer_cursor = buffer_cursor;
    saved_remaining_count = remaining_count;
  }
  while ( remaining_count );
}
#undef saved_buffer_cursor
#undef saved_remaining_count

//----- (000000014011DDB0) ----------------------------------------------------
__int64            sub_14011DDB0(int a1, int a2)
{
  __int64 result;
  __int64 input_value;
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  signed int iteration_count;
  __int64 scaled_index_2;
  unsigned int *state_address;
  __int64 loaded_word;
  _UNKNOWN *retaddr;

  result = (__int64)&retaddr;
  input_value = a1;
  if ( !g_18AB70F9C && !g_18D096FFC )
  {
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
    if ( !a2 )
    {
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
    /* Native sub_14011DDB0 inherits program/lights from its caller
       (sub_14011FD00 binds 71737685 once before the loop); no per-draw
       uniform upload here. */
    result = (__int64)&g_154167248;
    remaining_count = 4;
    buffer_cursor = &dword_140404A6C[6930 * input_value + 83200503];
    do
    {
      if ( buffer_cursor[780] )
      {
        result = (int)*buffer_cursor;
        if ( (int)result >= 0 )
        {
          scaled_index = (int)*buffer_cursor;
          result *= 3;
          if ( dword_140404A6C[2 * result + 312226123] != -1 )
          {
            iteration_count = 0;
            scaled_index_2 = 8969 * scaled_index;
            /* Original EBP holds vertex bytes; R12D holds element indices. */
            int32_t sr_building_vertex_bytes = (int32_t)(
                g_189F0EF8C * dword_140404A6C[2*result+312226123]
                + dword_140404A6C[309078348+3074*(int64_t)(int32_t)dword_140404A6C[2*result+312226123]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+312226124]]);
            int32_t sr_building_index_bytes = (int32_t)(
                g_18C434FEC * dword_140404A6C[2*result+321964387]
                + dword_140404A6C[318816612+3074*(int64_t)(int32_t)dword_140404A6C[2*result+321964387]
                    +3*(int64_t)(int32_t)dword_140404A6C[2*result+321964388]]);
            if ( (int)dword_140404A6C[8969 * scaled_index + 73994484] > 0 )
            {
              state_address = &dword_140404A6C[scaled_index_2 + 73994485];
              do
              {
                loaded_word = *(unsigned __int8 *)state_address;
                result = 184 * loaded_word;
                if ( !dword_140404A6C[46 * loaded_word + 421784738] )
                {
                  glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[4 * loaded_word + 283827814] + 284024944]);
                  glActiveTexture(33986);
                  glBindTexture(3553,
                    dword_140404A6C[44 * dword_140404A6C[4 * *(unsigned __int8 *)state_address + 283827815] + 284024944]);
                  glActiveTexture(33988);
                  glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
                  glActiveTexture(33989);
                  glBindTexture(35866, dword_140404A6C[44 * g_183EBC420 + 284024944]);
                  glActiveTexture(33984);
                  glDrawElementsBaseVertex(4,(int32_t)(3u*state_address[1]),5125,(const void *)(intptr_t)(int32_t)(4u*((uint32_t)(sr_building_index_bytes/4)+3u*state_address[2])),sr_building_vertex_bytes/64);
                }
                ++iteration_count;
                state_address += 3;
              }
              while ( iteration_count < (int)dword_140404A6C[scaled_index_2 + 73994484] );
            }
          }
        }
      }
      ++buffer_cursor;
      --remaining_count;
    }
    while ( remaining_count );
  }
  return result;
}

//----- (000000014011E210) ----------------------------------------------------
void            sub_14011E210(int a1, __int64 a2, __int64 a3)
{
  __int64 unused_local;
  int iteration_count;
  __int64 unused_local_2;
  unsigned int *buffer_cursor;
  unsigned int *record_byte_offset;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 cached_world_u_flags;
  __int64 selection_code;
  __int64 scaled_index;
  __int64 selection_code_2;
  __int64 scaled_index_2;
  __int64 selection_code_3;
  __int64 unused_local_3;

  if ( g_18B7D2FBC || g_18C434FDC )
    return;
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
  glEnableVertexAttribArray(0);
  if ( a1 != 1 )
  {
    glEnableVertexAttribArray(1);
    if ( !a1 )
    {
      glEnableVertexAttribArray(2);
      iteration_count = 0;
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      goto LABEL_7;
    }
  }
  iteration_count = 0;
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
  if ( a1 != 1 )
  {
LABEL_7:
    glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
    if ( a1 )
    {
      if ( a1 == 2 )
        glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
    }
    else
    {
      glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(12));
    }
  }
  buffer_cursor = &g_149F54C20;
  record_byte_offset = &g_183EBC404;
  state_address = &g_149F55020;
  state_address_2 = &g_14DF55020;
  do
  {
    if ( (int)*buffer_cursor <= 0 )
      goto LABEL_28;
    if ( a1 )
    {
      if ( a1 != 2 )
        goto LABEL_26;
      glUseProgram(renderer_ui_program);
      glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
      glActiveTexture(33984);
      scaled_index_2 = dword_140404A6C[44 * *record_byte_offset + 284024944];
      selection_code_3 = 3553;
    }
    else
    {
      if ( iteration_count == g_1A4CFF7E4 )
      {
        glUseProgram(object_program);
        glUniform3fv(object_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(object_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(object_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(object_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniformMatrix4fv(object_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        cached_world_u_flags = object_u_flags;
      }
      else
      {
        glUseProgram(world_program);
        glUniform3fv(world_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(world_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(world_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(world_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniformMatrix4fv(world_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        cached_world_u_flags = world_u_flags;
      }
      glUniform1i(cached_world_u_flags, 0);
      selection_code = 3553;
      if ( iteration_count == g_1A4CFF7E4 )
        selection_code = 35866;
      glBindTexture(selection_code, dword_140404A6C[44 * *record_byte_offset + 284024944]);
      glActiveTexture(33985);
      glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
      if ( iteration_count == g_1A4CFF7E4 )
      {
        glActiveTexture(33986);
        scaled_index = dword_140404A6C[44 * record_byte_offset[1] + 284024944];
        selection_code_2 = 35866;
      }
      else
      {
        glActiveTexture(33986);
        scaled_index = dword_140404A6C[44 * record_byte_offset[1] + 284024944];
        selection_code_2 = 3553;
      }
      glBindTexture(selection_code_2, scaled_index);
      glActiveTexture(33987);
      glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
      glActiveTexture(33988);
      glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
      glActiveTexture(33989);
      scaled_index_2 = dword_140404A6C[44 * g_183EBC420 + 284024944];
      selection_code_3 = 35866;
    }
    glBindTexture(selection_code_3, scaled_index_2);
LABEL_26:
    unk_140404808(4, state_address, 5125, state_address_2, *buffer_cursor, state_address + 25165824);
    if ( !a1 )
      glActiveTexture(33984);
LABEL_28:
    ++iteration_count;
    state_address += 0x4000;
    state_address_2 += 0x8000;
    record_byte_offset += 4;
    ++buffer_cursor;
  }
  while ( iteration_count < 256 );
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  if ( a1 == 1 || (((double (*)(_QWORD))glDisableVertexAttribArray)(1), a1) )
  {
    glDisableVertexAttribArray(0);
  }
  else
  {
    glDisableVertexAttribArray(2);
    glDisableVertexAttribArray(0);
    glUseProgram(0);
  }
}

// 14011E71A: conditional instruction was optimized away because edi.4!=0

//----- (000000014011FD00) ----------------------------------------------------
__int64 sub_14011FD00()
{
  __int64 selection_code;
  int iteration_count;
  __int64 float_word;
  __int64 state_word;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unrecovered_register_value;
  __int64 remaining_count;
  __int64 unrecovered_register_value_2;
  __int64 unused_local_5;
  __int64 unused_local_6;
  unsigned int *record_byte_offset;
  unsigned int *buffer_cursor;
  __int64 remaining_count_2;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 unused_local_7;
  __int64 unused_local_8;
  __int64 unused_local_9;
  __int64 unused_local_10;
  int *buffer_cursor_2;
  int iteration_count_2;
  int *buffer_cursor_3;
  __int64 unused_local_11;
  unsigned int cached_resting_texture_1;
  unsigned int *state_address_3;
  unsigned int loaded_word;
  __int64 scaled_index;
  float *buffer_cursor_4;
  float *record_byte_offset_2;
  signed __int64 state_address_4;
  __int64 remaining_count_3;
  float product_difference;
  __int64 remaining_count_4;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float *buffer_cursor_5;
  float *record_byte_offset_3;
  signed __int64 state_address_5;
  __int64 remaining_count_5;
  float product_difference_2;
  __int64 remaining_count_6;
  float scaled_value_2;
  float source_component_y_2;
  float source_component_z_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  float *buffer_cursor_6;
  float *record_byte_offset_4;
  signed __int64 state_address_6;
  __int64 remaining_count_7;
  float product_difference_3;
  __int64 remaining_count_8;
  float scaled_value_3;
  float source_component_y_3;
  float source_component_z_3;
  float *buffer_cursor_7;
  float *record_byte_offset_5;
  signed __int64 state_address_7;
  __int64 remaining_count_9;
  float product_difference_4;
  __int64 remaining_count_10;
  float scaled_value_4;
  float source_component_y_4;
  float source_component_z_4;
  float *buffer_cursor_8;
  float *record_byte_offset_6;
  signed __int64 state_address_8;
  __int64 remaining_count_11;
  float product_difference_5;
  __int64 remaining_count_12;
  float scaled_value_5;
  float source_component_y_5;
  float source_component_z_5;
  float *buffer_cursor_9;
  float *record_byte_offset_7;
  signed __int64 state_address_9;
  __int64 remaining_count_13;
  float product_difference_6;
  __int64 remaining_count_14;
  float scaled_value_6;
  float source_component_y_6;
  float source_component_z_6;
  int i;
  unsigned int state_word_2;
  unsigned int *buffer_cursor_10;
  float *state_address_10;
  __int64 remaining_count_15;
  float scaled_value_7;
  unsigned int state_word_3;
  __int64 integer_sum;
  unsigned int *buffer_cursor_11;
  __int64 remaining_count_16;
  __int64 packed_word_bits;
  __int64 scaled_index_2;
  unsigned int scaled_index_3;
  unsigned int scaled_index_4;
  unsigned int scaled_index_5;
  __int64 scaled_index_6;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  __int64 scaled_index_9;
  __int64 scaled_index_10;
  __int64 scaled_index_11;
  __int64 scaled_index_12;
  __int64 unused_local_12;
  __int64 unused_local_13;
  __int64 unused_local_14;
  __int64 unused_local_15;
  __int64 unused_local_16;
  __int64 scaled_index_13;
  __int64 unused_local_17;
  __int64 unused_local_18;
  float *buffer_cursor_12;
  signed __int64 state_address_11;
  float *record_byte_offset_8;
  __int64 remaining_count_17;
  float product_difference_7;
  __int64 remaining_count_18;
  float scaled_value_8;
  float source_component_y_7;
  float source_component_z_7;
  float *buffer_cursor_13;
  float *record_byte_offset_9;
  signed __int64 state_address_12;
  __int64 remaining_count_19;
  float product_difference_8;
  __int64 remaining_count_20;
  float scaled_value_9;
  float source_component_y_8;
  float source_component_z_8;
  __int64 scaled_index_14;
  unsigned int float_word_2;
  __int64 unrecovered_register_value_9;
  __int64 unused_local_19;
  __int64 unused_local_20;
  __int64 unused_local_21;
  __int64 unused_local_22;
  signed __int64 state_address_13;
  float *record_byte_offset_10;
  signed int cached_local_player;
  int integer_difference;
  __int64 masked_bits;
  unsigned int scaled_index_15;
  unsigned int *state_address_14;
  unsigned int *state_address_15;
  int j;
  float product_difference_9;
  float product_difference_10;
  float scaled_value_10;
  float *buffer_cursor_14;
  float *record_byte_offset_11;
  signed __int64 state_address_16;
  __int64 remaining_count_21;
  float product_difference_11;
  __int64 remaining_count_22;
  float scaled_value_11;
  float source_component_y_9;
  float source_component_z_9;
  float *buffer_cursor_15;
  signed __int64 state_address_17;
  float *record_byte_offset_12;
  __int64 remaining_count_23;
  float product_difference_12;
  __int64 remaining_count_24;
  float scaled_value_12;
  float source_component_y_10;
  float source_component_z_10;
  float *buffer_cursor_16;
  signed __int64 state_address_18;
  float *record_byte_offset_13;
  __int64 remaining_count_25;
  float product_difference_13;
  __int64 remaining_count_26;
  float scaled_value_13;
  float source_component_y_11;
  float source_component_z_11;
  int table_value;
  int selection_code_2;
  int selection_code_3;
  unsigned int scaled_index_16;
  __int64 scaled_index_17;
  unsigned int scaled_index_18;
  float *buffer_cursor_17;
  signed __int64 state_address_19;
  float *record_byte_offset_14;
  __int64 remaining_count_27;
  float product_difference_14;
  __int64 remaining_count_28;
  float scaled_value_14;
  float source_component_y_12;
  float source_component_z_12;
  float *buffer_cursor_18;
  __int64 remaining_count_29;
  float product_difference_15;
  __int64 remaining_count_30;
  float scaled_value_15;
  float source_component_y_13;
  float source_component_z_13;
  unsigned int *state_address_20;
  unsigned int state_word_4;
  int scaled_index_19;
  float *buffer_cursor_19;
  unsigned int table_value_2;
  unsigned int float_word_3;
  unsigned int table_value_3;
  float *record_byte_offset_15;
  signed __int64 state_address_21;
  __int64 remaining_count_31;
  float product_difference_16;
  __int64 remaining_count_32;
  float scaled_value_16;
  float source_component_y_14;
  float source_component_z_14;
  float *buffer_cursor_20;
  float *record_byte_offset_16;
  signed __int64 state_address_22;
  __int64 remaining_count_33;
  float product_difference_17;
  __int64 remaining_count_34;
  float scaled_value_17;
  float source_component_y_15;
  float source_component_z_15;
  float *buffer_cursor_21;
  float *record_byte_offset_17;
  signed __int64 state_address_23;
  __int64 remaining_count_35;
  float product_difference_18;
  __int64 remaining_count_36;
  float scaled_value_18;
  float source_component_y_16;
  float source_component_z_16;
  float *buffer_cursor_22;
  float *record_byte_offset_18;
  signed __int64 state_address_24;
  __int64 remaining_count_37;
  float product_difference_19;
  __int64 remaining_count_38;
  float scaled_value_19;
  float source_component_y_17;
  float source_component_z_17;
  float *buffer_cursor_23;
  __int64 remaining_count_39;
  float product_difference_20;
  __int64 remaining_count_40;
  float scaled_value_20;
  float source_component_y_18;
  float source_component_z_18;
  __int64 masked_bits_2;
  __int128 cached_xmmword_1402794a0;
  float component_sum;
  __int64 unrecovered_register_value_10;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 void_2;
  __int64 unrecovered_register_value_13;
  __int64 unused_local_23;
  __int64 packed_word_bits_2;
  __int64 packed_word_bits_3;
  int unused_written_slot;
  int unused_written_slot_2;
  int unused_written_slot_3;
  int unused_local_24;
  _Alignas(16) uint32_t sr_world_direction[3];
  uint32_t sr_world_material_pair[2];
  _Alignas(16) unsigned char sr_world_matrix_backing[80];
  _Alignas(16) __int128 sr_world_matrix[4];
  __int128 selection_flag;
  char text[512];
  __int64 unused_local_25;

  if ( unk_14040488C && glClipControl )
  {
    selection_code = 37727;
    if ( !g_151E46194 )
      selection_code = 37726;
    glClipControl(36001, selection_code);
  }
  iteration_count = 0;
  g_151E461B8 = 0;
  g_184178D00 = 0;
  *(unsigned int *)&g_18417DE78 = 0;
  *(unsigned int *)&g_18417DE7C = 1065353216;
  *(unsigned int *)&g_18417DE80 = 1056964608;
  g_184178D08 = (float)(int)g_182A7D55C;
  *(unsigned int *)&g_184178D6C = 1031798784;
  *(unsigned int *)&g_184178D74 = *(unsigned int *)&g_183F7C574;
  g_184178D0C = (float)(int)g_182A7D560;
  *(unsigned int *)&g_184178D70 = 1182793728;
  g_184178E38 = (float)(g_183F7C550 * 0.70709997)
                                        + (float)(g_183F7C568 * 0.70709997);
  g_184178E44 = (float)(g_183F7C568 * 0.70709997)
                                        - (float)(g_183F7C550 * 0.70709997);
  g_184178E3C = (float)(g_183F7C554 * 0.70709997)
                                        + (float)(g_183F7C56C * 0.70709997);
  g_184178E48 = (float)(g_183F7C56C * 0.70709997)
                                        - (float)(g_183F7C554 * 0.70709997);
  g_184178E40 = (float)(g_183F7C558 * 0.70709997)
                                        + (float)(g_183F7C570 * 0.70709997);
  g_184178E4C = (float)(g_183F7C570 * 0.70709997)
                                        - (float)(g_183F7C558 * 0.70709997);
  g_1841FA1C8 = g_183F7C544 * *(float *)&dword_1402F61BC;
  g_1841FA1CC = (float)(g_183F7C548 * *(float *)&dword_1402F61BC)
                                        + *(float *)&dword_1402F61C4;
  g_1841FA1D0 = g_183F7C54C * *(float *)&dword_1402F61BC;
  sr_math_vec3_normalize((__int64)(unsigned int *)&g_18417DE78, (float *)(unsigned int *)&g_18417DE78);
  (*(float *)&sr_world_direction[1]) = 0.44721359;
  *(float *)&sr_world_direction[2] = -0.89442718;
  *(float *)&sr_world_direction[0] = 0.0;
  sr_math_vec3_rotate(
    (float *)(unsigned int *)&g_18417DE78,
    (float *)&sr_world_direction[0],
    sr_export_float_lane_container((unsigned __int64)*(unsigned int *)&game_sun_angle));
  g_18417DE84 = 0;
  sub_1400212E0();
  sub_1400D26A0((float *)(unsigned int *)&g_183F7C544);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(float_word) = 1;
  glDepthMask(float_word);
  sub_140094A90();
  sub_140093E60();
  sub_14011CC30(0);
  glEnable(2884);
  glFrontFace(2304);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  sr_camera_set_view((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  if ( !g_16B165F60 )
    sub_140123190();
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  sr_camera_set_view((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  state_word = (int)g_183EBE404;
  LODWORD(packed_word_bits_2) = 0;
  if ( g_16B165F60 )
    state_word = (int)g_183EBE430;
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * state_word + 284024944], packed_word_bits_2);
  if ( g_16B165F60 )
  {
    glClearColor(1.0f,1.0f,1.0f,0.0f);
    glStencilMask(0xFFFFFFFFLL);
    glClearStencil(0);
    glClear(17664);
    glStencilMask(0);
  }
  glClearColor(0.0f,0.0f,0.0f,0.0f);
  glClear(16384);
  sub_1400A5D30();
  sub_1400A5890((float *)&g_184178D60);
  /* Observe-only recovery diagnostics: log the main-frame state once so the
     black-frame cause is decidable from the debug log. No state is changed. */
  {
    static int sr_frame_logged;
    if (!sr_frame_logged && g_150F55020 != 0)
    {
      unsigned int sr_main = dword_140404A6C[2 * g_183E97744 + 283791765];
      unsigned int sr_refl = dword_140404A6C[2 * g_183E97798 + 283791765];
      __int64 sr_st = glCheckFramebufferStatus ? glCheckFramebufferStatus(36160) : -1;
      SR_DEBUG_LOG("RENDER fbo main=%u refl=%u status=0x%llx size=%ux%u win=%ux%u",
          sr_main, sr_refl, (unsigned long long)sr_st,
          g_182A7D55C, g_182A7D560,
          g_160FC47D8, g_160FC47DC);
      SR_DEBUG_LOG("RENDER cam=(%.2f,%.2f,%.2f) mvp[0,5,10,15]=%.3f,%.3f,%.3f,%.3f draws=%u",
          g_183F7C544, g_183F7C548,
          g_183F7C54C,
          *(float *)&g_1A724E6C0, g_1A724E6D4,
          g_1A724E6E8, g_1A724E6FC,
          g_150F55020);
      SR_DEBUG_LOG("RENDER light dir=(%.3f,%.3f,%.3f) amb=(%.3f,%.3f,%.3f) dif=(%.3f,%.3f,%.3f)",
          g_18417DE78, g_18417DE7C,
          g_18417DE80,
          g_184178D40, g_184178D44,
          g_184178D48,
          g_184178D50, g_184178D54,
          g_184178D58);
      SR_DEBUG_LOG("RENDER tex normal=%u detail=%u color=%u mask=%u shadow=%u cubemap=%u "
          "prog08=%u loc(dir/amb/dif/view/mvp/mask)=%d,%d,%d,%d,%d,%d",
          dword_140404A6C[44 * g_183EBF154 + 284024944],
          dword_140404A6C[44 * g_183EBF158 + 284024944],
          dword_140404A6C[44 * g_183EBF15C + 284024944],
          dword_140404A6C[44 * g_183EBF164 + 284024944],
          dword_140404A6C[44 * shading_texture + 284024944],
          dword_140404A6C[44 * shading_cube_map + 284024944],
          terrain_program,
          (int)terrain_u_lightdirection, (int)terrain_u_lightambient,
          (int)terrain_u_lightdiffuse, (int)terrain_u_viewposition,
          (int)terrain_u_modelviewprojectionmatrix, (int)terrain_u_land_usemask);
      {
        float *sr_p = (float *)(unsigned int *)&g_1A724E580;
        float *sr_v = (float *)(unsigned int *)&g_1A724E5C0;
        float *sr_m = (float *)(unsigned int *)&g_1A724E6C0;
        SR_DEBUG_LOG("RENDER near=%.4f far=%.1f zoom=%.4f rt=%ux%u",
            g_184178D6C, g_184178D70,
            g_184178D74,
            g_182A7D55C, g_182A7D560);
        SR_DEBUG_LOG("RENDER proj =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_p[0],sr_p[1],sr_p[2],sr_p[3], sr_p[4],sr_p[5],sr_p[6],sr_p[7],
            sr_p[8],sr_p[9],sr_p[10],sr_p[11], sr_p[12],sr_p[13],sr_p[14],sr_p[15]);
        SR_DEBUG_LOG("RENDER view =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_v[0],sr_v[1],sr_v[2],sr_v[3], sr_v[4],sr_v[5],sr_v[6],sr_v[7],
            sr_v[8],sr_v[9],sr_v[10],sr_v[11], sr_v[12],sr_v[13],sr_v[14],sr_v[15]);
        SR_DEBUG_LOG("RENDER mvp  =%.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f | %.3f,%.3f,%.3f,%.3f",
            sr_m[0],sr_m[1],sr_m[2],sr_m[3], sr_m[4],sr_m[5],sr_m[6],sr_m[7],
            sr_m[8],sr_m[9],sr_m[10],sr_m[11], sr_m[12],sr_m[13],sr_m[14],sr_m[15]);
      }
      {
        /* Terrain visibility, using the exact index math of sub_1400D22E0:
           enabled flag dword[271166189 + slot*257], sub-cell pointer
           dword[271166190 + slot*257 + j], and the -1 cull lookup
           dword[cell + 272034690 + slot*3336 + j*13]. */
        int sr_slot, sr_j, sr_cell, sr_live = 0, sr_enabled = 0;
        unsigned int sr_count = 0, sr_stride = 0, sr_first_cell = 0;
        int sr_first_slot = -1, sr_first_j = -1, sr_lod = -1;
        for (sr_slot = 0; sr_slot < 64; ++sr_slot)
        {
          if (!dword_140404A6C[271166189 + sr_slot * 257]) continue;
          ++sr_enabled;
          for (sr_j = 0; sr_j < 256; ++sr_j)
          {
            sr_cell = (int)dword_140404A6C[271166190 + sr_slot * 257 + sr_j];
            if (dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13] != -1)
            {
              if (!sr_live)
              {
                sr_first_cell = (unsigned int)sr_cell;
                sr_first_slot = sr_slot;
                sr_first_j = sr_j;
                sr_stride = dword_140404A6C[24582 * sr_cell + 271838021];
                sr_count = dword_140404A6C[24582 * sr_cell + 271838022];
                sr_lod = (int)dword_140404A6C[sr_cell + 272034690 + sr_slot * 3336 + sr_j * 13];
              }
              ++sr_live;
            }
          }
        }
        SR_DEBUG_LOG("RENDER terrain enabled-slots=%d live-subcells=%d first(cell=%u count=%u stride=%u)",
            sr_enabled, sr_live, sr_first_cell, sr_count, sr_stride);
        /* Geometry dump: chunk origins, LOD descriptor and the VBO staging
           vertex. Pointer values only (no dereference) so a bad pointer cannot
           fault the diagnostic. sub_1400D0C10 builds
           pos = origin + (cell<<7) + sample, y = heightGrid[...] + originY. */
        if (sr_first_slot >= 0)
        {
          unsigned int sr_cellu = sr_first_cell;
          float *sr_stage = (float *)&g_180E7F720;
          unsigned long long sr_grid_by_tile =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * (int)sr_cellu];
          unsigned long long sr_grid_by_slot =
              *(unsigned long long *)&dword_140404A6C[272034683 + 3336 * sr_first_slot];
          SR_DEBUG_LOG("RENDER geo slot=%d j=%d cell=%u lod=%d ring=%d",
              sr_first_slot, sr_first_j, sr_cellu, sr_lod,
              (int)dword_140404A6C[sr_cell + 272034690 + sr_first_slot * 3336 + sr_first_j * 13]);
          SR_DEBUG_LOG("RENDER geo origin-by-tile=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034678 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034679 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034680 + 3336 * (int)sr_cellu],
              (int)dword_140404A6C[272034681 + 3336 * (int)sr_cellu]);
          SR_DEBUG_LOG("RENDER geo origin-by-slot=(%d,%d,%d) cellZ=%d cellX=%d",
              (int)dword_140404A6C[272034677 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034678 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034679 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034680 + 3336 * sr_first_slot],
              (int)dword_140404A6C[272034681 + 3336 * sr_first_slot]);
          SR_DEBUG_LOG("RENDER geo heightgrid ptr tile=0x%llx slot=0x%llx (0=unalloc, ffff..=unset)",
              sr_grid_by_tile, sr_grid_by_slot);
          SR_DEBUG_LOG("RENDER geo loddesc verts-per-patch=%u bytes-per-patch=%u ringhead=%u",
              dword_140404A6C[24582 * sr_cellu + 271838023],
              dword_140404A6C[24582 * sr_cellu + 271838025],
              dword_140404A6C[24582 * sr_cellu + 271838026]);
          SR_DEBUG_LOG("RENDER geo staging pos=(%.2f,%.2f,%.2f) nrm=(%.2f,%.2f,%.2f)",
              sr_stage[0], sr_stage[1], sr_stage[2],
              sr_stage[3], sr_stage[4], sr_stage[5]);
          SR_DEBUG_LOG("RENDER geo vbo-ids tile: ibo=%u vbo=%u  slot: ibo=%u vbo=%u",
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_cellu + 283791752] + 283793813],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791480] + 283793814],
              dword_140404A6C[2 * dword_140404A6C[sr_first_slot + 283791752] + 283793813]);
        }
      }
      sr_frame_logged = 1;
    }
  }
  glDisable(3042);
  if ( g_16B165F60 )
  {
    glPolygonMode(1032, 6913);
    glDisable(2929);
  }
  /* Native 0x140120173/0x14012017E: GL_CULL_FACE on with glFrontFace(GL_CW)
     for the whole terrain pass. Verified against original disassembly. */
  glEnable(2884);
  glFrontFace(2304);
  remaining_count = 256;
  if ( g_16B165F60
    || ((*(void (           **)(_QWORD))(unsigned int *)&glDepthMask)(0), g_16B165F60) )
  {
    if ( !g_18B7D2FBC && !g_18C434FDC )
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
      glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      packed_word_bits_3 = 36;
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      LODWORD(packed_word_bits_2) = 1065353216;
      glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      record_byte_offset = &g_183EBC404;
      buffer_cursor = &g_149F54C20;
      remaining_count_2 = 256;
      state_address = &g_149F55020;
      state_address_2 = &g_14DF55020;
      do
      {
        if ( (int)*buffer_cursor > 0 )
        {
          glUseProgram(renderer_ui_program);
          glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * *record_byte_offset + 284024944]);
          unk_140404808(4, state_address, 5125, state_address_2, *buffer_cursor, state_address + 25165824);
        }
        state_address += 0x4000;
        state_address_2 += 0x8000;
        record_byte_offset += 4;
        ++buffer_cursor;
        --remaining_count_2;
      }
      while ( remaining_count_2 );
      glBindBuffer(34963, 0);
      glBindBuffer(34962, 0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(0);
      iteration_count = 0;
    }
  }
  else
  {
    sub_14011E210(0, unrecovered_register_value_2, unrecovered_register_value);
  }
  sub_1400D22E0(0);
  glUseProgram(world_program);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
  glActiveTexture(33984);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C10 + 283793813]);
  buffer_cursor_2 = (int *)&g_150F55024;
  iteration_count_2 = 0;
  if ( (int)g_150F55020 > 0 )
  {
    buffer_cursor_3 = (int *)&g_150F55024;
    do
    {
      sub_14011DDB0(*buffer_cursor_3, 0);
      ++iteration_count_2;
      ++buffer_cursor_3;
    }
    while ( iteration_count_2 < (int)g_150F55020 );
  }
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glActiveTexture(33984);
  glDisableVertexAttribArray(2);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(0);
  glUseProgram(0);
  glUseProgram(model_program);
  sub_140124AF0(0, 0);
  cached_resting_texture_1 = resting_texture_1;
  selection_flag = 0;
  sr_world_material_pair[0] = resting_texture_1;
  sr_world_material_pair[1] = resting_texture_1;
  if ( (int)world_particle_count > 0 )
  {
    state_address_3 = &g_1A70AE580;
    do
    {
      if ( state_address_3[2] )
      {
        loaded_word = *state_address_3;
        scaled_index = 26LL * iteration_count;
        if ( !*state_address_3 )
        {
          sr_world_material_pair[0] = resting_texture_0;
          sr_world_material_pair[1] = resting_texture_0;
          sub_140124840(
            world_particle_mesh_0,
            &dword_140404A6C[scaled_index + 431138504],
            &dword_140404A6C[scaled_index + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&selection_flag);
          loaded_word = *state_address_3;
          cached_resting_texture_1 = resting_texture_1;
        }
        if ( loaded_word == 1 )
        {
          sr_world_material_pair[0] = cached_resting_texture_1;
          sr_world_material_pair[1] = cached_resting_texture_1;
          sub_140124840(
            world_particle_mesh_1,
            &dword_140404A6C[scaled_index + 431138504],
            &dword_140404A6C[scaled_index + 431138510],
            0,
            (int *)&sr_world_material_pair[0],
            (__int64)&selection_flag);
          cached_resting_texture_1 = resting_texture_1;
        }
      }
      ++iteration_count;
      state_address_3 += 26;
    }
    while ( iteration_count < (int)world_particle_count );
  }
  g_1A724E600 = xmmword_140278D30;
  buffer_cursor_4 = (float *)&sr_world_matrix[0];
  record_byte_offset_2 = (float *)&g_1A724E604;
  g_1A724E610 = xmmword_140278D80;
  state_address_4 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&sr_world_matrix[0];
  remaining_count_3 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference = *(record_byte_offset_2 - 1);
    remaining_count_4 = 4;
    scaled_value = *record_byte_offset_2;
    source_component_y = record_byte_offset_2[1];
    source_component_z = record_byte_offset_2[2];
    do
    {
      *buffer_cursor_4 = (float)((float)((float)(product_difference * *(float *)((char *)buffer_cursor_4 + state_address_4 - 16))
                           + (float)(scaled_value * *(float *)((char *)buffer_cursor_4 + state_address_4)))
                   + (float)(source_component_y * *(float *)((char *)buffer_cursor_4 + state_address_4 + 16)))
           + (float)(source_component_z * *(float *)((char *)buffer_cursor_4 + state_address_4 + 32));
      ++buffer_cursor_4;
      --remaining_count_4;
    }
    while ( remaining_count_4 );
    record_byte_offset_2 += 4;
    state_address_4 -= 16LL;
    --remaining_count_3;
  }
  while ( remaining_count_3 );
  g_1A724E640 = sr_world_matrix[0];
  buffer_cursor_5 = (float *)&sr_world_matrix[0];
  g_1A724E650 = sr_world_matrix[1];
  record_byte_offset_3 = (float *)&g_1A724E644;
  state_address_5 = (char *)(unsigned int *)&g_1A724E590 - (char *)&sr_world_matrix[0];
  remaining_count_5 = 4;
  g_1A724E660 = sr_world_matrix[2];
  g_1A724E670 = sr_world_matrix[3];
  do
  {
    product_difference_2 = *(record_byte_offset_3 - 1);
    remaining_count_6 = 4;
    scaled_value_2 = *record_byte_offset_3;
    source_component_y_2 = record_byte_offset_3[1];
    source_component_z_2 = record_byte_offset_3[2];
    do
    {
      *buffer_cursor_5 = (float)((float)((float)(product_difference_2 * *(float *)((char *)buffer_cursor_5 + state_address_5 - 16))
                           + (float)(scaled_value_2 * *(float *)((char *)buffer_cursor_5 + state_address_5)))
                   + (float)(source_component_y_2 * *(float *)((char *)buffer_cursor_5 + state_address_5 + 16)))
           + (float)(source_component_z_2 * *(float *)((char *)buffer_cursor_5 + state_address_5 + 32));
      ++buffer_cursor_5;
      --remaining_count_6;
    }
    while ( remaining_count_6 );
    record_byte_offset_3 += 4;
    state_address_5 -= 16LL;
    --remaining_count_5;
  }
  while ( remaining_count_5 );
  g_1A724E6C0 = sr_world_matrix[0];
  g_1A724E6D0 = sr_world_matrix[1];
  g_1A724E6E0 = sr_world_matrix[2];
  g_1A724E6F0 = sr_world_matrix[3];
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  sr_world_draw_resting_particles(0, unrecovered_register_value_3, unrecovered_register_value_4);
  glUseProgram(0);
  sub_140189E80(0, unrecovered_register_value_5, unrecovered_register_value_6);
  glUseProgram(0);
  if ( g_16B165F60 )
  {
    glPolygonMode(1032, 6914);
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  sub_140122690(0.5625, unrecovered_register_value_7, unrecovered_register_value_8);
  sub_14007A8C0(
    0,
    0,
    1024,
    576,
    g_184178D6C,
    g_184178D70,
    g_184178D74);
  buffer_cursor_6 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  record_byte_offset_4 = (float *)&sr_world_matrix[0] + 1;
  *(unsigned int *)&g_1A724E5C0 = *(unsigned int *)&g_183F7C550;
  state_address_6 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  *(unsigned int *)&g_1A724E5D0 = *(unsigned int *)&g_183F7C554;
  remaining_count_7 = 4;
  *(unsigned int *)&g_1A724E5E0 = *(unsigned int *)&g_183F7C558;
  g_1A724E5C4 = *(unsigned int *)&g_183F7C55C;
  g_1A724E5D4 = *(unsigned int *)&g_183F7C560;
  g_1A724E5E4 = *(unsigned int *)&g_183F7C564;
  g_1A724E5C8 = *(unsigned int *)&g_183F7C568;
  g_1A724E5D8 = *(unsigned int *)&g_183F7C56C;
  g_1A724E5E8 = *(unsigned int *)&g_183F7C570;
  sr_world_matrix[1] = xmmword_140278D80;
  sr_world_matrix[0] = xmmword_140278D30;
  sr_world_matrix[2] = xmmword_140278E20;
  LODWORD(sr_world_matrix[3]) = *(unsigned int *)&g_183F7C544 ^ 0x80000000;
  *((float *)&sr_world_matrix[3] + 1) = -g_183F7C548;
  *((float *)&sr_world_matrix[3] + 2) = -g_183F7C54C;
  *(_QWORD *)&g_1A724E5F0 = 0;
  g_1A724E5F8 = 0;
  g_1A724E5CC = 0;
  g_1A724E5DC = 0;
  g_1A724E5EC = 0;
  g_1A724E5FC = 1065353216;
  HIDWORD(sr_world_matrix[3]) = 1065353216;
  do
  {
    product_difference_3 = *(record_byte_offset_4 - 1);
    remaining_count_8 = 4;
    scaled_value_3 = *record_byte_offset_4;
    source_component_y_3 = record_byte_offset_4[1];
    source_component_z_3 = record_byte_offset_4[2];
    do
    {
      *buffer_cursor_6 = (float)((float)((float)(product_difference_3 * *(float *)((char *)buffer_cursor_6 + state_address_6 - 16))
                           + (float)(scaled_value_3 * *(float *)((char *)buffer_cursor_6 + state_address_6)))
                   + (float)(source_component_y_3 * *(float *)((char *)buffer_cursor_6 + state_address_6 + 16)))
           + (float)(source_component_z_3 * *(float *)((char *)buffer_cursor_6 + state_address_6 + 32));
      ++buffer_cursor_6;
      --remaining_count_8;
    }
    while ( remaining_count_8 );
    record_byte_offset_4 += 4;
    state_address_6 -= 16LL;
    --remaining_count_7;
  }
  while ( remaining_count_7 );
  buffer_cursor_7 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E5C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  record_byte_offset_5 = (float *)&g_1A724E604;
  state_address_7 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E5D0 = (*(__int128 *)(sr_world_matrix_backing+32));
  remaining_count_9 = 4;
  g_1A724E5E0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E5F0 = (*(__int128 *)(sr_world_matrix_backing+64));
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference_4 = *(record_byte_offset_5 - 1);
    remaining_count_10 = 4;
    scaled_value_4 = *record_byte_offset_5;
    source_component_y_4 = record_byte_offset_5[1];
    source_component_z_4 = record_byte_offset_5[2];
    do
    {
      *buffer_cursor_7 = (float)((float)((float)(product_difference_4 * *(float *)((char *)buffer_cursor_7 + state_address_7 - 16))
                           + (float)(scaled_value_4 * *(float *)((char *)buffer_cursor_7 + state_address_7)))
                   + (float)(source_component_y_4 * *(float *)((char *)buffer_cursor_7 + state_address_7 + 16)))
           + (float)(source_component_z_4 * *(float *)((char *)buffer_cursor_7 + state_address_7 + 32));
      ++buffer_cursor_7;
      --remaining_count_10;
    }
    while ( remaining_count_10 );
    record_byte_offset_5 += 4;
    state_address_7 -= 16LL;
    --remaining_count_9;
  }
  while ( remaining_count_9 );
  buffer_cursor_8 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  record_byte_offset_6 = (float *)&g_1A724E5C4;
  state_address_8 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
  remaining_count_11 = 4;
  g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    product_difference_5 = *(record_byte_offset_6 - 1);
    remaining_count_12 = 4;
    scaled_value_5 = *record_byte_offset_6;
    source_component_y_5 = record_byte_offset_6[1];
    source_component_z_5 = record_byte_offset_6[2];
    do
    {
      *buffer_cursor_8 = (float)((float)((float)(product_difference_5 * *(float *)((char *)buffer_cursor_8 + state_address_8 - 16))
                           + (float)(scaled_value_5 * *(float *)((char *)buffer_cursor_8 + state_address_8)))
                   + (float)(source_component_y_5 * *(float *)((char *)buffer_cursor_8 + state_address_8 + 16)))
           + (float)(source_component_z_5 * *(float *)((char *)buffer_cursor_8 + state_address_8 + 32));
      ++buffer_cursor_8;
      --remaining_count_12;
    }
    while ( remaining_count_12 );
    record_byte_offset_6 += 4;
    state_address_8 -= 16LL;
    --remaining_count_11;
  }
  while ( remaining_count_11 );
  buffer_cursor_9 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E680 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  record_byte_offset_7 = (float *)&g_1A724E644;
  state_address_9 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E690 = (*(__int128 *)(sr_world_matrix_backing+32));
  remaining_count_13 = 4;
  g_1A724E6A0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E6B0 = (*(__int128 *)(sr_world_matrix_backing+64));
  do
  {
    product_difference_6 = *(record_byte_offset_7 - 1);
    remaining_count_14 = 4;
    scaled_value_6 = *record_byte_offset_7;
    source_component_y_6 = record_byte_offset_7[1];
    source_component_z_6 = record_byte_offset_7[2];
    do
    {
      *buffer_cursor_9 = (float)((float)((float)(product_difference_6 * *(float *)((char *)buffer_cursor_9 + state_address_9 - 16))
                           + (float)(scaled_value_6 * *(float *)((char *)buffer_cursor_9 + state_address_9)))
                   + (float)(source_component_y_6 * *(float *)((char *)buffer_cursor_9 + state_address_9 + 16)))
           + (float)(source_component_z_6 * *(float *)((char *)buffer_cursor_9 + state_address_9 + 32));
      ++buffer_cursor_9;
      --remaining_count_14;
    }
    while ( remaining_count_14 );
    record_byte_offset_7 += 4;
    state_address_9 -= 16LL;
    --remaining_count_13;
  }
  while ( remaining_count_13 );
  g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
  g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
  g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
  g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
  glEnable(3042);
  glBlendFunc(1,1);
  glDisable(3553);
  *(float *)&sr_world_direction[0] = (float)(g_18417DE78 * 16368.0) + g_183F7C544;
  *(float *)&sr_world_direction[2] = (float)(g_18417DE80 * 16368.0) + g_183F7C54C;
  (*(float *)&sr_world_direction[1]) = (float)(g_18417DE7C * 16368.0) + g_183F7C548;
  glEnable(3553);
  glBlendFunc(770,771);
  glDepthMask(0);
  glEnable(3042);
  glBlendFunc(1,771);
  sub_1401945F0();
  glUseProgram(lit_program);
  glUniform3fv(lit_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(lit_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(lit_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(lit_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(lit_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  glDisable(2884);
  glActiveTexture(33985);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glActiveTexture(33984);
  for ( i = 0; i < (int)g_150F55020; ++buffer_cursor_2 )
  {
    sub_14011DA50(*buffer_cursor_2);
    ++i;
  }
  state_word_2 = g_1841FA224;
  if ( (int)g_1841FA224 > 0 )
  {
    buffer_cursor_10 = &g_1A87C6BA4;
    state_address_10 = (float *)&g_1841FA264;
    remaining_count_15 = g_1841FA224;
    do
    {
      scaled_value_7 = *state_address_10 * 256.0;
      state_address_10 += 17;
      *buffer_cursor_10++ = (int)(float)(16777216.0 - scaled_value_7);
      --remaining_count_15;
    }
    while ( remaining_count_15 );
  }
  renderer_sort_count = state_word_2;
  sr_renderer_sort();
  glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[4 * mark_texture_choice + 283827814] + 284024944]);
  g_1AD059448 = 0;
  state_word_3 = 6;
  g_1AD05944C = 6;
  integer_sum = 0;
  if ( (int)g_1841FA224 > 0 )
  {
    buffer_cursor_11 = &g_1A85C6BA4;
    remaining_count_16 = g_1841FA224;
    while ( 1 )
    {
      packed_word_bits = (int)*buffer_cursor_11++;
      scaled_index_2 = 17 * packed_word_bits;
      scaled_index_3 = dword_140404A6C[17 * packed_word_bits + 284677627];
      scaled_index_4 = dword_140404A6C[17 * packed_word_bits + 284677628];
      scaled_index_5 = dword_140404A6C[17 * packed_word_bits + 284677629];
      scaled_index_6 = (int)(integer_sum * state_word_3);
      dword_140404A6C[scaled_index_6 + 456217209] = dword_140404A6C[17 * packed_word_bits + 284677615];
      dword_140404A6C[scaled_index_6 + 456217210] = dword_140404A6C[17 * packed_word_bits + 284677616];
      dword_140404A6C[scaled_index_6 + 456217211] = dword_140404A6C[17 * packed_word_bits + 284677617];
      scaled_index_7 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_7 + 456217212] = scaled_index_3;
      dword_140404A6C[scaled_index_7 + 456217213] = scaled_index_4;
      dword_140404A6C[scaled_index_7 + 456217214] = scaled_index_5;
      LODWORD(packed_word_bits) = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[(int)packed_word_bits + 456217209] = dword_140404A6C[scaled_index_2 + 284677618];
      dword_140404A6C[(int)packed_word_bits + 456217210] = dword_140404A6C[scaled_index_2 + 284677619];
      dword_140404A6C[(int)packed_word_bits + 456217211] = dword_140404A6C[scaled_index_2 + 284677620];
      scaled_index_8 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_8 + 456217212] = scaled_index_3;
      dword_140404A6C[scaled_index_8 + 456217213] = scaled_index_4;
      dword_140404A6C[scaled_index_8 + 456217214] = scaled_index_5;
      scaled_index_9 = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_9 + 456217209] = dword_140404A6C[scaled_index_2 + 284677621];
      dword_140404A6C[scaled_index_9 + 456217210] = dword_140404A6C[scaled_index_2 + 284677622];
      dword_140404A6C[scaled_index_9 + 456217211] = dword_140404A6C[scaled_index_2 + 284677623];
      scaled_index_10 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_10 + 456217212] = scaled_index_3;
      dword_140404A6C[scaled_index_10 + 456217213] = scaled_index_4;
      dword_140404A6C[scaled_index_10 + 456217214] = scaled_index_5;
      scaled_index_11 = ++g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_11 + 456217209] = dword_140404A6C[scaled_index_2 + 284677624];
      dword_140404A6C[scaled_index_11 + 456217210] = dword_140404A6C[scaled_index_2 + 284677625];
      dword_140404A6C[scaled_index_11 + 456217211] = dword_140404A6C[scaled_index_2 + 284677626];
      scaled_index_12 = g_1AD059448 * g_1AD05944C;
      dword_140404A6C[scaled_index_12 + 456217212] = scaled_index_3;
      dword_140404A6C[scaled_index_12 + 456217213] = scaled_index_4;
      dword_140404A6C[scaled_index_12 + 456217214] = scaled_index_5;
      integer_sum = ++g_1AD059448;
      if ( !--remaining_count_16 )
        break;
      state_word_3 = g_1AD05944C;
    }
  }
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C48 + 283793813]);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(2);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  LODWORD(packed_word_bits_2) = 4 * g_1AD05944C;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glBindBuffer(34963, g_1AD29946C);
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)((unsigned int)(6 * ((signed int)g_1AD059448 / 4))),5123,NULL);
  glBindBuffer(34963, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(2);
  glActiveTexture(33985);
  glBindTexture(34067, 0);
  glActiveTexture(33984);
  glEnable(2884);
  glUseProgram(0);
  glBlendFunc(770,771);
  sr_world_draw_effects();
  glDisable(2884);
  glDepthMask(0);
  glEnable(3042);
  glBlendFunc(770,771);
  glBindTexture(3553, renderer_white_texture);
  glBlendFunc(1,771);
  glBlendFunc(770,771);
  glEnable(2884);
  glEnable(3553);
  glUseProgram(renderer_ui_program);
  sub_1401253C0();
  if ( !toggle_183f7aee0
    && nearest_item != -1
    && dword_140404A6C[1760 * nearest_item + 278845898] != 42 )
  {
    LODWORD(packed_word_bits_2) = 1056964608;
    glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p-1f);
    scaled_index_13 = (int)dword_140404A6C[dword_140404A6C[1760 * nearest_item + 278845898] + 283826966];
    sr_camera_set_model(
      (unsigned int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)nearest_item + 1144548656),
      (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 52LL * (int)nearest_item + 1144548668));
    sr_camera_scale_model(1.125, 1.125, 1.125);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[scaled_index_13 + 283790166] + 283793813]);
    glEnableVertexAttribArray(0);
    packed_word_bits_3 = 0;
    scaled_index_13 *= 3632;
    LODWORD(packed_word_bits_2) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + scaled_index_13);
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)packed_word_bits_2),(const void *)(intptr_t)(0));
    glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + scaled_index_13));
    glDisableVertexAttribArray(0);
    glBindBuffer(34962, 0);
    g_1A724E600 = xmmword_140278D30;
    buffer_cursor_12 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    state_address_11 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_8 = (float *)&g_1A724E604;
    g_1A724E610 = xmmword_140278D80;
    remaining_count_17 = 4;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    do
    {
      product_difference_7 = *(record_byte_offset_8 - 1);
      remaining_count_18 = 4;
      scaled_value_8 = *record_byte_offset_8;
      source_component_y_7 = record_byte_offset_8[1];
      source_component_z_7 = record_byte_offset_8[2];
      do
      {
        *buffer_cursor_12 = (float)((float)((float)(product_difference_7 * *(float *)((char *)buffer_cursor_12 + state_address_11 - 16))
                              + (float)(scaled_value_8 * *(float *)((char *)buffer_cursor_12 + state_address_11)))
                      + (float)(source_component_y_7 * *(float *)((char *)buffer_cursor_12 + state_address_11 + 16)))
              + (float)(source_component_z_7 * *(float *)((char *)buffer_cursor_12 + state_address_11 + 32));
        ++buffer_cursor_12;
        --remaining_count_18;
      }
      while ( remaining_count_18 );
      record_byte_offset_8 += 4;
      state_address_11 -= 16LL;
      --remaining_count_17;
    }
    while ( remaining_count_17 );
    buffer_cursor_13 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_9 = (float *)&g_1A724E644;
    state_address_12 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    remaining_count_19 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      product_difference_8 = *(record_byte_offset_9 - 1);
      remaining_count_20 = 4;
      scaled_value_9 = *record_byte_offset_9;
      source_component_y_8 = record_byte_offset_9[1];
      source_component_z_8 = record_byte_offset_9[2];
      do
      {
        *buffer_cursor_13 = (float)((float)((float)(product_difference_8 * *(float *)((char *)buffer_cursor_13 + state_address_12 - 16))
                              + (float)(scaled_value_9 * *(float *)((char *)buffer_cursor_13 + state_address_12)))
                      + (float)(source_component_y_8 * *(float *)((char *)buffer_cursor_13 + state_address_12 + 16)))
              + (float)(source_component_z_8 * *(float *)((char *)buffer_cursor_13 + state_address_12 + 32));
        ++buffer_cursor_13;
        --remaining_count_20;
      }
      while ( remaining_count_20 );
      record_byte_offset_9 += 4;
      state_address_12 -= 16LL;
      --remaining_count_19;
    }
    while ( remaining_count_19 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
    glPolygonMode(1032, 6914);
    scaled_index_14 = 1760LL * (int)nearest_item;
    float_word_2 = dword_140404A6C[scaled_index_14 + 278845917];
    sr_world_direction[0] = dword_140404A6C[scaled_index_14 + 278845916];
    sr_world_direction[2] = dword_140404A6C[scaled_index_14 + 278845918];
    (*(float *)&sr_world_direction[1]) = *(float *)&float_word_2;
  }
  glDepthMask(0);
  LOBYTE(unrecovered_register_value_9) = 1;
  glDepthMask(unrecovered_register_value_9);
  glUseProgram(renderer_ui_program);
  glBindTexture(3553, renderer_white_texture);
  if ( g_16B165F68 )
    sub_14011E9B0();
  glPolygonMode(1032, 6914);
  glPolygonMode(1032, 6914);
  glDisable(2884);
  glPolygonMode(1032, 6914);
  glEnable(3042);
  glLineWidth(0x1.8000000000000p+1f);
  glLineWidth(1.0f);
  glEnable(3553);
  if ( game_unknown_189f0eea0 )
    sub_14008D800();
  glDepthMask(0);
  cached_local_player = local_player;
  integer_difference = -1;
  renderer_current_font = 2;
  if ( local_player != -1 )
  {
    state_address_13 = 14388LL * (int)local_player;
    masked_bits = *(int *)((char *)&g_151620CFC + state_address_13);
    if ( (_DWORD)masked_bits != -1 )
    {
      state_address_13 = 28664 * masked_bits;
      scaled_index_15 = dword_140404A6C[7166 * masked_bits + 280651313];
      if ( scaled_index_15 != -1 )
        integer_difference = scaled_index_15;
    }
  }
  state_address_14 = &g_18329E310;
  state_address_15 = &g_18430A554;
  for ( j = 0; j < 256; ++j )
  {
    if ( !*(state_address_14 - 2) )
      goto LABEL_133;
    if ( *state_address_14 == -1 )
      goto LABEL_133;
    product_difference_9 = *((float *)state_address_15 - 2);
    product_difference_10 = *((float *)state_address_15 - 1);
    scaled_value_10 = *(float *)state_address_15;
    if ( (float)((float)((float)((float)(product_difference_10 - g_183F7C548)
                               * (float)(product_difference_10 - g_183F7C548))
                       + (float)((float)(product_difference_9 - g_183F7C544)
                               * (float)(product_difference_9 - g_183F7C544)))
               + (float)((float)(*(float *)state_address_15 - g_183F7C54C)
                       * (float)(*(float *)state_address_15 - g_183F7C54C))) >= 1024.0 )
      goto LABEL_133;
    g_1A724E600 = xmmword_140278D30;
    g_1A724E63C = 1065353216;
    buffer_cursor_14 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E620 = xmmword_140278E20;
    record_byte_offset_11 = (float *)&sr_world_matrix[0] + 1;
    state_address_16 = (char *)(unsigned int *)&g_1A724E610 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E610 = xmmword_140278D80;
    remaining_count_21 = 4;
    *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&g_183F7C550;
    *((_QWORD *)&sr_world_matrix[0] + 1) = *(unsigned int *)&g_183F7C558;
    *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&g_183F7C55C;
    *((_QWORD *)&sr_world_matrix[1] + 1) = *(unsigned int *)&g_183F7C564;
    *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&g_183F7C568;
    *((_QWORD *)&sr_world_matrix[2] + 1) = *(unsigned int *)&g_183F7C570;
    *(float *)&g_1A724E630 = product_difference_9;
    *(float *)&g_1A724E634 = product_difference_10 + 0.875;
    *(float *)&g_1A724E638 = scaled_value_10;
    sr_world_matrix[3] = xmmword_140279490;
    do
    {
      product_difference_11 = *(record_byte_offset_11 - 1);
      remaining_count_22 = 4;
      scaled_value_11 = *record_byte_offset_11;
      source_component_y_9 = record_byte_offset_11[1];
      source_component_z_9 = record_byte_offset_11[2];
      do
      {
        *buffer_cursor_14 = (float)((float)(product_difference_11 * *(float *)((char *)buffer_cursor_14 + state_address_16 - 16))
                      + (float)(scaled_value_11 * *(float *)((char *)buffer_cursor_14 + state_address_16)))
              + (float)((float)(source_component_z_9 * *(float *)((char *)buffer_cursor_14 + state_address_16 + 32))
                      + (float)(source_component_y_9 * *(float *)((char *)buffer_cursor_14 + state_address_16 + 16)));
        ++buffer_cursor_14;
        --remaining_count_22;
      }
      while ( remaining_count_22 );
      record_byte_offset_11 += 4;
      state_address_16 -= 16LL;
      --remaining_count_21;
    }
    while ( remaining_count_21 );
    g_1A724E600 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    buffer_cursor_15 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    state_address_17 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_12 = (float *)&g_1A724E604;
    g_1A724E610 = (*(__int128 *)(sr_world_matrix_backing+32));
    remaining_count_23 = 4;
    g_1A724E620 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E630 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      product_difference_12 = *(record_byte_offset_12 - 1);
      remaining_count_24 = 4;
      scaled_value_12 = *record_byte_offset_12;
      source_component_y_10 = record_byte_offset_12[1];
      source_component_z_10 = record_byte_offset_12[2];
      do
      {
        *buffer_cursor_15 = (float)((float)(product_difference_12 * *(float *)((char *)buffer_cursor_15 + state_address_17 - 16))
                      + (float)(scaled_value_12 * *(float *)((char *)buffer_cursor_15 + state_address_17)))
              + (float)((float)(source_component_z_10 * *(float *)((char *)buffer_cursor_15 + state_address_17 + 32))
                      + (float)(source_component_y_10 * *(float *)((char *)buffer_cursor_15 + state_address_17 + 16)));
        ++buffer_cursor_15;
        --remaining_count_24;
      }
      while ( remaining_count_24 );
      record_byte_offset_12 += 4;
      state_address_17 -= 16LL;
      --remaining_count_23;
    }
    while ( remaining_count_23 );
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    buffer_cursor_16 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    state_address_18 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_13 = (float *)&g_1A724E644;
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    remaining_count_25 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      product_difference_13 = *(record_byte_offset_13 - 1);
      remaining_count_26 = 4;
      scaled_value_13 = *record_byte_offset_13;
      source_component_y_11 = record_byte_offset_13[1];
      source_component_z_11 = record_byte_offset_13[2];
      do
      {
        *buffer_cursor_16 = (float)((float)(scaled_value_13 * *(float *)((char *)buffer_cursor_16 + state_address_18))
                      + (float)(product_difference_13 * *(float *)((char *)buffer_cursor_16 + state_address_18 - 16)))
              + (float)((float)(source_component_z_11 * *(float *)((char *)buffer_cursor_16 + state_address_18 + 32))
                      + (float)(source_component_y_11 * *(float *)((char *)buffer_cursor_16 + state_address_18 + 16)));
        ++buffer_cursor_16;
        --remaining_count_26;
      }
      while ( remaining_count_26 );
      record_byte_offset_13 += 4;
      state_address_18 -= 16LL;
      --remaining_count_25;
    }
    while ( remaining_count_25 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
    if ( integer_difference != -1 && state_address_14[8] == integer_difference )
    {
      glDisable(2929);
      cached_local_player = local_player;
    }
    table_value = state_address_14[7145];
    selection_code_2 = 1065353216;
    selection_code_3 = 1065353216;
    if ( table_value == 1 )
      goto LABEL_114;
    if ( table_value == 2 )
    {
      selection_code_2 = 0;
LABEL_114:
      selection_code_3 = 0;
    }
    if ( cached_local_player == -1 || (scaled_index_16 = dword_140404A6C[3597 * cached_local_player + 71856292], scaled_index_16 == -1) || scaled_index_16 != j )
    {
      if ( table_value > 0 || g_18329CC44 )
      {
        scaled_index_17 = (int)*state_address_14;
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = selection_code_3;
        unused_written_slot = selection_code_2;
        LODWORD(packed_word_bits_3) = 1065353216;
        LODWORD(packed_word_bits_2) = 193;
        sr_text_draw_recovered((char *)&dword_140404A6C[3597 * scaled_index_17 + 71856254], 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x3E800000u))))), 0.3125, 193u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140121B9D */;
        scaled_index_18 = dword_140404A6C[3597 * *state_address_14 + 71856265];
        crt_sprintf(text, "%03d-%04d", scaled_index_18 / 0x2710, scaled_index_18 % 0x2710);
        unused_written_slot_3 = 1065353216;
        unused_written_slot_2 = selection_code_3;
        unused_written_slot = selection_code_2;
        LODWORD(packed_word_bits_3) = 1065353216;
        LODWORD(packed_word_bits_2) = 193;
        sr_text_draw_recovered(text, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 0.25, 193u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140121C22 */;
        cached_local_player = local_player;
      }
    }
    if ( integer_difference != -1 && state_address_14[8] == integer_difference )
    {
      glEnable(2929);
      cached_local_player = local_player;
    }
    g_1A724E600 = xmmword_140278D30;
    buffer_cursor_17 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    state_address_19 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_14 = (float *)&g_1A724E604;
    g_1A724E610 = xmmword_140278D80;
    remaining_count_27 = 4;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    do
    {
      product_difference_14 = *(record_byte_offset_14 - 1);
      remaining_count_28 = 4;
      scaled_value_14 = *record_byte_offset_14;
      source_component_y_12 = record_byte_offset_14[1];
      source_component_z_12 = record_byte_offset_14[2];
      do
      {
        *buffer_cursor_17 = (float)((float)(source_component_z_12 * *(float *)((char *)buffer_cursor_17 + state_address_19 + 32))
                      + (float)(source_component_y_12 * *(float *)((char *)buffer_cursor_17 + state_address_19 + 16)))
              + (float)((float)(scaled_value_14 * *(float *)((char *)buffer_cursor_17 + state_address_19))
                      + (float)(product_difference_14 * *(float *)((char *)buffer_cursor_17 + state_address_19 - 16)));
        ++buffer_cursor_17;
        --remaining_count_28;
      }
      while ( remaining_count_28 );
      record_byte_offset_14 += 4;
      state_address_19 -= 16LL;
      --remaining_count_27;
    }
    while ( remaining_count_27 );
    g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    buffer_cursor_18 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    state_address_13 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    record_byte_offset_10 = (float *)&g_1A724E644;
    g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
    remaining_count_29 = 4;
    g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
    do
    {
      product_difference_15 = *(record_byte_offset_10 - 1);
      remaining_count_30 = 4;
      scaled_value_15 = *record_byte_offset_10;
      source_component_y_13 = record_byte_offset_10[1];
      source_component_z_13 = record_byte_offset_10[2];
      do
      {
        *buffer_cursor_18 = (float)((float)(product_difference_15 * *(float *)((char *)buffer_cursor_18 + state_address_13 - 16))
                      + (float)(scaled_value_15 * *(float *)((char *)buffer_cursor_18 + state_address_13)))
              + (float)((float)(source_component_z_13 * *(float *)((char *)buffer_cursor_18 + state_address_13 + 32))
                      + (float)(source_component_y_13 * *(float *)((char *)buffer_cursor_18 + state_address_13 + 16)));
        ++buffer_cursor_18;
        --remaining_count_30;
      }
      while ( remaining_count_30 );
      record_byte_offset_10 += 4;
      state_address_13 -= 16LL;
      --remaining_count_29;
    }
    while ( remaining_count_29 );
    g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
    g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
    g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
    g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
LABEL_133:
    state_address_15 += 344;
    state_address_14 += 7166;
  }
  if ( !g_18329CC44 && game_type == 5 && cached_local_player != -1 )
  {
    state_address_13 = 14388LL * cached_local_player;
    if ( *(unsigned int *)((char *)&g_151620CE4 + state_address_13) == 2 )
    {
      state_address_20 = &g_18329E390;
      state_word_4 = g_183F7A564;
      do
      {
        if ( *(state_address_20 - 34) )
        {
          scaled_index_19 = *(state_address_20 - 32);
          if ( scaled_index_19 != -1
            && (scaled_index_19 == state_word_4 || scaled_index_19 == g_183F7A568)
            && (float)((float)((float)((float)(*((float *)state_address_20 - 1) - g_183F7C548)
                                     * (float)(*((float *)state_address_20 - 1) - g_183F7C548))
                             + (float)((float)(*((float *)state_address_20 - 2) - g_183F7C544)
                                     * (float)(*((float *)state_address_20 - 2) - g_183F7C544)))
                     + (float)((float)(*(float *)state_address_20 - g_183F7C54C)
                             * (float)(*(float *)state_address_20 - g_183F7C54C))) < 1024.0 )
          {
            buffer_cursor_19 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            table_value_2 = state_address_20[103];
            *(float *)&float_word_3 = *((float *)state_address_20 + 104) + 1.25;
            table_value_3 = state_address_20[105];
            record_byte_offset_15 = (float *)&sr_world_matrix[0] + 1;
            g_1A724E600 = xmmword_140278D30;
            state_address_21 = (char *)(unsigned int *)&g_1A724E610 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E63C = 1065353216;
            remaining_count_31 = 4;
            g_1A724E620 = xmmword_140278E20;
            g_1A724E610 = xmmword_140278D80;
            *(_QWORD *)&sr_world_matrix[0] = *(_QWORD *)&g_183F7C550;
            *((_QWORD *)&sr_world_matrix[0] + 1) = *(unsigned int *)&g_183F7C558;
            *(_QWORD *)&sr_world_matrix[1] = *(_QWORD *)&g_183F7C55C;
            *((_QWORD *)&sr_world_matrix[1] + 1) = *(unsigned int *)&g_183F7C564;
            *(_QWORD *)&sr_world_matrix[2] = *(_QWORD *)&g_183F7C568;
            *((_QWORD *)&sr_world_matrix[2] + 1) = *(unsigned int *)&g_183F7C570;
            *(unsigned int *)&g_1A724E630 = table_value_2;
            g_1A724E634 = float_word_3;
            g_1A724E638 = table_value_3;
            sr_world_matrix[3] = xmmword_140279490;
            do
            {
              product_difference_16 = *(record_byte_offset_15 - 1);
              remaining_count_32 = 4;
              scaled_value_16 = *record_byte_offset_15;
              source_component_y_14 = record_byte_offset_15[1];
              source_component_z_14 = record_byte_offset_15[2];
              do
              {
                *buffer_cursor_19 = (float)((float)(product_difference_16 * *(float *)((char *)buffer_cursor_19 + state_address_21 - 16))
                              + (float)(scaled_value_16 * *(float *)((char *)buffer_cursor_19 + state_address_21)))
                      + (float)((float)(source_component_z_14 * *(float *)((char *)buffer_cursor_19 + state_address_21 + 32))
                              + (float)(source_component_y_14 * *(float *)((char *)buffer_cursor_19 + state_address_21 + 16)));
                ++buffer_cursor_19;
                --remaining_count_32;
              }
              while ( remaining_count_32 );
              record_byte_offset_15 += 4;
              state_address_21 -= 16LL;
              --remaining_count_31;
            }
            while ( remaining_count_31 );
            g_1A724E600 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            buffer_cursor_20 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E610 = (*(__int128 *)(sr_world_matrix_backing+32));
            record_byte_offset_16 = (float *)&g_1A724E604;
            state_address_22 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            remaining_count_33 = 4;
            g_1A724E620 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E630 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              product_difference_17 = *(record_byte_offset_16 - 1);
              remaining_count_34 = 4;
              scaled_value_17 = *record_byte_offset_16;
              source_component_y_15 = record_byte_offset_16[1];
              source_component_z_15 = record_byte_offset_16[2];
              do
              {
                *buffer_cursor_20 = (float)((float)(source_component_z_15 * *(float *)((char *)buffer_cursor_20 + state_address_22 + 32))
                              + (float)(source_component_y_15 * *(float *)((char *)buffer_cursor_20 + state_address_22 + 16)))
                      + (float)((float)(scaled_value_17 * *(float *)((char *)buffer_cursor_20 + state_address_22))
                              + (float)(product_difference_17 * *(float *)((char *)buffer_cursor_20 + state_address_22 - 16)));
                ++buffer_cursor_20;
                --remaining_count_34;
              }
              while ( remaining_count_34 );
              record_byte_offset_16 += 4;
              state_address_22 -= 16LL;
              --remaining_count_33;
            }
            while ( remaining_count_33 );
            g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            buffer_cursor_21 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
            record_byte_offset_17 = (float *)&g_1A724E644;
            state_address_23 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            remaining_count_35 = 4;
            g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              product_difference_18 = *(record_byte_offset_17 - 1);
              remaining_count_36 = 4;
              scaled_value_18 = *record_byte_offset_17;
              source_component_y_16 = record_byte_offset_17[1];
              source_component_z_16 = record_byte_offset_17[2];
              do
              {
                *buffer_cursor_21 = (float)((float)(product_difference_18 * *(float *)((char *)buffer_cursor_21 + state_address_23 - 16))
                              + (float)(scaled_value_18 * *(float *)((char *)buffer_cursor_21 + state_address_23)))
                      + (float)((float)(source_component_z_16 * *(float *)((char *)buffer_cursor_21 + state_address_23 + 32))
                              + (float)(source_component_y_16 * *(float *)((char *)buffer_cursor_21 + state_address_23 + 16)));
                ++buffer_cursor_21;
                --remaining_count_36;
              }
              while ( remaining_count_36 );
              record_byte_offset_17 += 4;
              state_address_23 -= 16LL;
              --remaining_count_35;
            }
            while ( remaining_count_35 );
            g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
            g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
            if ( scaled_index_19 == state_word_4 )
            {
              unused_written_slot_3 = 1065353216;
              unused_written_slot_2 = 0;
              unused_written_slot = 1065353216;
              LODWORD(packed_word_bits_3) = 0;
              LODWORD(packed_word_bits_2) = 193;
              sr_text_draw_recovered("The Savior", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 0.25, 193u, 0x0.0p+0f, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140122282 */;
              state_word_4 = g_183F7A564;
            }
            buffer_cursor_22 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E600 = xmmword_140278D30;
            record_byte_offset_18 = (float *)&g_1A724E604;
            state_address_24 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E610 = xmmword_140278D80;
            remaining_count_37 = 4;
            g_1A724E620 = xmmword_140278E20;
            g_1A724E630 = xmmword_140279490;
            do
            {
              product_difference_19 = *(record_byte_offset_18 - 1);
              remaining_count_38 = 4;
              scaled_value_19 = *record_byte_offset_18;
              source_component_y_17 = record_byte_offset_18[1];
              source_component_z_17 = record_byte_offset_18[2];
              do
              {
                *buffer_cursor_22 = (float)((float)(source_component_z_17 * *(float *)((char *)buffer_cursor_22 + state_address_24 + 32))
                              + (float)(source_component_y_17 * *(float *)((char *)buffer_cursor_22 + state_address_24 + 16)))
                      + (float)((float)(product_difference_19 * *(float *)((char *)buffer_cursor_22 + state_address_24 - 16))
                              + (float)(scaled_value_19 * *(float *)((char *)buffer_cursor_22 + state_address_24)));
                ++buffer_cursor_22;
                --remaining_count_38;
              }
              while ( remaining_count_38 );
              record_byte_offset_18 += 4;
              state_address_24 -= 16LL;
              --remaining_count_37;
            }
            while ( remaining_count_37 );
            buffer_cursor_23 = (float *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E640 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            record_byte_offset_10 = (float *)&g_1A724E644;
            state_address_13 = (char *)(unsigned int *)&g_1A724E590 - (char *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E650 = (*(__int128 *)(sr_world_matrix_backing+32));
            remaining_count_39 = 4;
            g_1A724E660 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E670 = (*(__int128 *)(sr_world_matrix_backing+64));
            do
            {
              product_difference_20 = *(record_byte_offset_10 - 1);
              remaining_count_40 = 4;
              scaled_value_20 = *record_byte_offset_10;
              source_component_y_18 = record_byte_offset_10[1];
              source_component_z_18 = record_byte_offset_10[2];
              do
              {
                *buffer_cursor_23 = (float)((float)(product_difference_20 * *(float *)((char *)buffer_cursor_23 + state_address_13 - 16))
                              + (float)(scaled_value_20 * *(float *)((char *)buffer_cursor_23 + state_address_13)))
                      + (float)((float)(source_component_z_18 * *(float *)((char *)buffer_cursor_23 + state_address_13 + 32))
                              + (float)(source_component_y_18 * *(float *)((char *)buffer_cursor_23 + state_address_13 + 16)));
                ++buffer_cursor_23;
                --remaining_count_40;
              }
              while ( remaining_count_40 );
              record_byte_offset_10 += 4;
              state_address_13 -= 16LL;
              --remaining_count_39;
            }
            while ( remaining_count_39 );
            g_1A724E6C0 = *(_OWORD *)&((uint64_t *)(sr_world_matrix_backing+8))[1];
            g_1A724E6D0 = (*(__int128 *)(sr_world_matrix_backing+32));
            g_1A724E6E0 = (*(__int128 *)(sr_world_matrix_backing+48));
            g_1A724E6F0 = (*(__int128 *)(sr_world_matrix_backing+64));
          }
        }
        state_address_20 += 7166;
        --remaining_count;
      }
      while ( remaining_count );
      cached_local_player = local_player;
    }
  }
  if ( !toggle_183f7aee0 )
  {
    sub_140092D70();
    cached_local_player = local_player;
  }
  if ( game_type == 5 && cached_local_player != -1 )
  {
    state_address_13 = 14388LL * cached_local_player;
    masked_bits_2 = *(unsigned int *)((char *)&g_151620CE4 + state_address_13);
    if ( (unsigned int)(masked_bits_2 - 1) <= 1 && g_183F7A570 != 0.0 )
    {
      sr_world_direction[0] = *(unsigned int *)&g_183F7A570;
      sr_world_direction[2] = *(unsigned int *)&g_183F7A578;
      g_1AD059440 = 2;
      g_1AD059448 = 0;
      g_1AD05944C = 9;
      if ( (_DWORD)masked_bits_2 == 1 )
        cached_xmmword_1402794a0 = xmmword_1402794A0;
      else
        cached_xmmword_1402794a0 = xmmword_140279530;
      g_1AD299450 = cached_xmmword_1402794a0;
      component_sum = g_183F7A574 + 2.0;
      (*(float *)&sr_world_direction[1]) = g_183F7A574 + 2.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&sr_world_direction[0], masked_bits_2, (__int64)record_byte_offset_10);
      (*(float *)&sr_world_direction[1]) = component_sum + 256.0;
      sr_renderer_batch_vertex3fv((unsigned int *)&sr_world_direction[0], unrecovered_register_value_10, unrecovered_register_value_11);
      sr_renderer_batch_flush(void_2, unrecovered_register_value_12, unrecovered_register_value_13);
    }
  }
  LOBYTE(state_address_13) = 1;
  glDepthMask(state_address_13);
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
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (0000000140122690) ----------------------------------------------------
__int64            sub_140122690(float a1, __int64 a2, __int64 a3)
{
  __int64 scaled_index;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unrecovered_register_value;

  LOBYTE(a3) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glEnable(3042);
  glBlendFunc(1,770);
  glViewport(0,
    0,
    (unsigned int)(int)g_184178D08,
    (unsigned int)(int)g_184178D0C);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278E80;
  g_1A724E5B0 = xmmword_140279760;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(sky_program);
  glUniform3fv(sky_u_worldposition, 1, (unsigned int *)&g_1841FA1C8);
  glUniform3fv(sky_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(sky_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform1i(sky_u_flags, 0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE414 + 284024944]);
  *(_QWORD *)&g_1AD05944C = 6;
  g_1AD059454 = 1065353216;
  g_1AD059458 = -964689984;
  g_1AD059468 = 1065353216;
  g_1AD05946C = 1065353216;
  g_1AD059470 = -964689984;
  *(float *)&g_1AD05945C = (float)((float)(g_183F7C550
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  g_1AD059460 = (float)((float)(g_183F7C554
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C560
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C56C;
  *(float *)&g_1AD059464 = (float)((float)(g_183F7C558
                                                        * (float)(g_183F7C574 * -1.0))
                                                + (float)(g_183F7C564
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C570;
  *(float *)&g_1AD05947C = (float)((float)(g_183F7C564
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C558
                                                        * g_183F7C574))
                                        - g_183F7C570;
  *(float *)&g_1AD059474 = (float)((float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C550
                                                        * g_183F7C574))
                                        - g_183F7C568;
  g_1AD059478 = (float)((float)(g_183F7C560
                                                        * (float)(g_183F7C574 * a1))
                                                + (float)(g_183F7C554
                                                        * g_183F7C574))
                                        - g_183F7C56C;
  g_1AD059490 = (float)((float)(g_183F7C554
                                                        * g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C560))
                                        - g_183F7C56C;
  scaled_index = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  g_1AD059480 = 1065353216;
  *(float *)&g_1AD05948C = (float)((float)(g_183F7C550
                                                        * g_183F7C574)
                                                - (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  g_1AD059488 = -964689984;
  g_1AD059498 = 0;
  g_1AD0594A0 = -964689984;
  g_1AD059448 = 4;
  *(float *)&g_1AD059494 = (float)((float)(g_183F7C558
                                                        * g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C564))
                                        - g_183F7C570;
  *(float *)&g_1AD0594A4 = (float)((float)(g_183F7C550
                                                        * (float)-g_183F7C574)
                                                - (float)(g_183F7C55C
                                                        * (float)(g_183F7C574 * a1)))
                                        - g_183F7C568;
  *(float *)&g_1AD0594AC = (float)((float)(g_183F7C558
                                                        * (float)-g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C564))
                                        - g_183F7C570;
  *(float *)&g_1AD0594A8 = (float)((float)(g_183F7C554
                                                        * (float)-g_183F7C574)
                                                - (float)((float)(g_183F7C574 * a1)
                                                        * g_183F7C560))
                                        - g_183F7C56C;
  glBindBuffer(34962, scaled_index);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glVertexAttrib2f(1,0.5f,0.5f);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glDrawArrays(6, 0, g_1AD059448);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glBindBuffer(34962, 0);
  glUseProgram(0);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(unrecovered_register_value) = 1;
  glDepthMask(unrecovered_register_value);
  glEnable(2884);
  return (*(__int64 (           **)(__int64))(unsigned int *)&glFrontFace)(2304);
}

//----- (0000000140122CA0) ----------------------------------------------------
double            sub_140122CA0(float a1, float *a2, __int64 a3)
{
  __int64 scaled_index;
  unsigned int float_word;
  unsigned int float_word_2;
  float input_value;
  float input_value_2;
  float input_value_3;
  float component_delta;
  unsigned int float_word_3;
  unsigned int float_word_4;
  unsigned int float_word_5;
  unsigned int float_word_6;
  unsigned int float_word_7;
  unsigned int float_word_8;
  unsigned int float_word_9;
  __int64 unused_local;
  __int64 unrecovered_register_value;

  LOBYTE(a3) = 1;
  glColorMask(1,1,1,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glDisable(3042);
  glBlendFunc(1,770);
  glViewport(0, 0, 512, 512);
  g_1A724E580 = xmmword_140278D40;
  g_1A724E590 = xmmword_140278DA0;
  g_1A724E5A0 = xmmword_140278EB0;
  g_1A724E5B0 = xmmword_140279730;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E680, (__int64)(unsigned int *)&g_1A724E5C0, (__int64)(unsigned int *)&g_1A724E580);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUseProgram(sky_program);
  glUniform3fv(sky_u_worldposition, 1, (unsigned int *)&g_1841FA1C8);
  glUniform3fv(sky_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
  glUniformMatrix4fv(sky_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF170 + 284024944]);
  g_1AD059448 = 0;
  g_1AD05944C = 6;
  scaled_index = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  *(float *)&float_word = (float)((float)(a1 * a2[5]) - a2[2]) - a2[8];
  *(float *)&float_word_2 = (float)((float)(a1 * a2[3]) - *a2) - a2[6];
  g_1AD059460 = (float)((float)(a1 * a2[4]) - a2[1]) - a2[7];
  input_value = a1;
  g_1AD059464 = float_word;
  input_value_2 = a1;
  g_1AD059448 = 1;
  g_1AD059450 = 0;
  g_1AD05945C = float_word_2;
  input_value_3 = a1;
  component_delta = -a1;
  *(_QWORD *)&g_1AD059454 = 1065353216;
  *(float *)&float_word_3 = (float)((float)(input_value_2 * a2[5]) + a2[2]) - a2[8];
  *(float *)&float_word_4 = (float)((float)(input_value_3 * a2[3]) + *a2) - a2[6];
  g_1AD059478 = (float)((float)(input_value * a2[4]) + a2[1]) - a2[7];
  g_1AD05947C = float_word_3;
  g_1AD059448 = 2;
  g_1AD059468 = 1065353216;
  g_1AD059474 = float_word_4;
  *(_QWORD *)&g_1AD05946C = 1065353216;
  *(float *)&float_word_5 = (float)((float)(component_delta * a2[5]) + a2[2]) - a2[8];
  *(float *)&float_word_6 = (float)((float)(component_delta * a2[3]) + *a2) - a2[6];
  g_1AD059490 = (float)((float)(component_delta * a2[4]) + a2[1]) - a2[7];
  g_1AD059494 = float_word_5;
  g_1AD059448 = 3;
  g_1AD059480 = 1065353216;
  g_1AD05948C = float_word_6;
  g_1AD059488 = 0;
  *(float *)&float_word_7 = (float)((float)(component_delta * a2[3]) - *a2) - a2[6];
  *(float *)&float_word_8 = (float)((float)(component_delta * a2[4]) - a2[1]) - a2[7];
  *(float *)&float_word_9 = (float)((float)(component_delta * a2[5]) - a2[2]) - a2[8];
  g_1AD059498 = 0;
  g_1AD0594A0 = 0;
  g_1AD0594A4 = float_word_7;
  g_1AD0594A8 = float_word_8;
  g_1AD0594AC = float_word_9;
  g_1AD059448 = 4;
  glBindBuffer(34962, scaled_index);
  glBufferSubData(34962, 0, 4 * g_1AD059448 * g_1AD05944C, &g_1AD059450);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(0));
  glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(4u*g_1AD05944C),(const void *)(intptr_t)(12));
  glDrawArrays(6, 0, g_1AD059448);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glUseProgram(0);
  glEnable(2929);
  LOBYTE(unrecovered_register_value) = 1;
  glDepthMask(unrecovered_register_value);
  glEnable(2884);
  glFrontFace(2304);
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(3042);
}

//----- (0000000140123190)

__int64 sub_140123190()
{
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unused_local_5;
  __int64 unused_local_6;
  unsigned int *buffer_cursor;
  __int64 remaining_count;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 unused_local_7;
  __int64 unused_local_8;
  __int64 unused_local_9;
  __int64 unused_local_10;
  int iteration_count;
  int *buffer_cursor_2;
  __int64 unused_local_11;
  int iteration_count_2;
  unsigned int *state_address_3;
  unsigned int loaded_word;
  __int64 scaled_index;
  __int64 cached_world_particle_mesh_0;
  __int64 unused_local_12;
  __int64 unused_local_13;
  __int64 cached_world_particle_mesh_1;
  __int64 unused_local_14;
  __int64 unused_local_15;
  float *record_byte_offset;
  float *buffer_cursor_3;
  float *record_byte_offset_2;
  signed __int64 state_address_4;
  __int64 remaining_count_2;
  float product_difference;
  __int64 remaining_count_3;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  float *record_byte_offset_3;
  float *buffer_cursor_4;
  __int64 remaining_count_4;
  float *record_byte_offset_4;
  signed __int64 state_address_5;
  float product_difference_2;
  __int64 remaining_count_5;
  float scaled_value_2;
  float source_component_y_2;
  float source_component_z_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unused_local_16;
  __int64 unused_local_17;
  __int64 unused_local_18;
  __int64 unused_local_19;
  __int64 selection_code;
  __int64 unrecovered_register_value_5;
  float *buffer_cursor_5;
  signed __int64 state_address_6;
  __int64 remaining_count_6;
  float product_difference_3;
  __int64 remaining_count_7;
  float scaled_value_3;
  float source_component_y_3;
  float source_component_z_3;
  float *buffer_cursor_6;
  float *record_byte_offset_5;
  signed __int64 state_address_7;
  __int64 remaining_count_8;
  float product_difference_4;
  __int64 remaining_count_9;
  float scaled_value_4;
  float source_component_y_4;
  float source_component_z_4;
  float *buffer_cursor_7;
  __int64 remaining_count_10;
  signed __int64 state_address_8;
  float product_difference_5;
  __int64 remaining_count_11;
  float scaled_value_5;
  float source_component_y_5;
  float source_component_z_5;
  __int64 unused_local_20;
  __int64 unused_local_21;
  __int64 unused_local_22;
  __int64 unused_local_23;
  __int64 unused_local_24;
  __int64 unused_local_25;
  __int64 unused_local_26;
  __int64 unused_local_27;
  __int64 unused_local_28;
  __int64 unused_local_29;
  __int64 unused_local_30;
  __int64 unused_local_31;
  __int64 unrecovered_register_value_6;
  __int64 void_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 unrecovered_register_value_9;
  __int64 unused_local_32;
  __int64 packed_word_bits;
  __int64 unused_written_slot;
  _Alignas(16) unsigned sr_stencil_pass_matrix[16];
  __int64 unused_local_33;

  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE414 + 284024944], 0);
  glClearColor(0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0.0f);
  glStencilMask(0xFFFFFFFFLL);
  glClearStencil(0);
  if ( g_151E46194 )
    glClearDepth(0.0);
  glClear(17664);
  if ( g_151E46194 )
    glClearDepth(0x1.0000000000000p+0);
  glStencilMask(0);
  glDisable(3042);
  glUseProgram(land_mask_program);
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(land_mask_u_modelviewmatrix, 1, 0, (unsigned int *)&g_1A724E640);
  if ( !g_18B7D2FBC && !g_18C434FDC )
  {
    glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
    glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
    glEnableVertexAttribArray(0);
    unused_written_slot = 0;
    LODWORD(packed_word_bits) = 64;
    glVertexAttribPointer(0,3,5126,0,64,NULL);
    buffer_cursor = &g_149F54C20;
    remaining_count = 256;
    state_address = &g_149F55020;
    state_address_2 = &g_14DF55020;
    do
    {
      if ( (int)*buffer_cursor > 0 )
        unk_140404808(4, state_address, 5125, state_address_2, *buffer_cursor, state_address + 25165824);
      state_address += 0x4000;
      state_address_2 += 0x8000;
      ++buffer_cursor;
      --remaining_count;
    }
    while ( remaining_count );
    glBindBuffer(34963, 0);
    glBindBuffer(34962, 0);
    glDisableVertexAttribArray(0);
  }
  sub_140189E80(1, unrecovered_register_value, unrecovered_register_value_2);
  glEnableVertexAttribArray(0);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C04 + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * g_183E98C10 + 283793813]);
  iteration_count = 0;
  if ( (int)g_150F55020 > 0 )
  {
    buffer_cursor_2 = (int *)&g_150F55024;
    do
    {
      sub_14011DDB0(*buffer_cursor_2, 1);
      ++iteration_count;
      ++buffer_cursor_2;
    }
    while ( iteration_count < (int)g_150F55020 );
  }
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  glDisable(32823);
  glDisableVertexAttribArray(0);
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(land_mask_u_modelviewmatrix, 1, 0, (unsigned int *)&g_1A724E640);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glUniform1i(land_mask_u_land_usemask, 1);
  sub_1400D22E0(1);
  glUniform1i(land_mask_u_land_usemask, 0);
  sub_140124AF0(1, 0);
  iteration_count_2 = 0;
  if ( (int)world_particle_count > 0 )
  {
    state_address_3 = &g_1A70AE580;
    do
    {
      if ( state_address_3[2] )
      {
        loaded_word = *state_address_3;
        scaled_index = 26LL * iteration_count_2;
        if ( !*state_address_3 )
        {
          cached_world_particle_mesh_0 = (int)world_particle_mesh_0;
          sr_camera_set_model(&dword_140404A6C[scaled_index + 431138504], &dword_140404A6C[scaled_index + 431138510]);
          glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
          glEnableVertexAttribArray(0);
          glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[cached_world_particle_mesh_0 + 283790166] + 283793813]);
          unused_written_slot = 0;
          cached_world_particle_mesh_0 *= 3632;
          LODWORD(packed_word_bits) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + cached_world_particle_mesh_0);
          glVertexAttribPointer(0,3,5126,0,(int)(uint32_t)packed_word_bits,NULL);
          glVertexAttrib4fv(3, &g_184182220);
          glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + cached_world_particle_mesh_0));
          glBindBuffer(34962, 0);
          glDisableVertexAttribArray(0);
          g_1A724E600 = xmmword_140278D30;
          g_1A724E610 = xmmword_140278D80;
          g_1A724E620 = xmmword_140278E20;
          g_1A724E630 = xmmword_140279490;
          sr_math_mat4_multiply(
            (unsigned int *)&g_1A724E640,
            (__int64)(unsigned int *)&g_1A724E600,
            (__int64)(unsigned int *)&g_1A724E5C0);
          sr_math_mat4_multiply(
            (unsigned int *)&g_1A724E6C0,
            (__int64)(unsigned int *)&g_1A724E640,
            (__int64)(unsigned int *)&g_1A724E580);
          loaded_word = *state_address_3;
        }
        if ( loaded_word == 1 )
        {
          cached_world_particle_mesh_1 = (int)world_particle_mesh_1;
          sr_camera_set_model(&dword_140404A6C[scaled_index + 431138504], &dword_140404A6C[scaled_index + 431138510]);
          glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
          glEnableVertexAttribArray(0);
          glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[cached_world_particle_mesh_1 + 283790166] + 283793813]);
          unused_written_slot = 0;
          cached_world_particle_mesh_1 *= 3632;
          LODWORD(packed_word_bits) = 4 * *(unsigned int *)((char *)&g_16AD0BE04 + cached_world_particle_mesh_1);
          glVertexAttribPointer(0,3,5126,0,(int)(uint32_t)packed_word_bits,NULL);
          glVertexAttrib4fv(3, &g_184182220);
          glDrawArrays(4, 0, 3 * *(unsigned int *)((char *)&g_16AD0BE10 + cached_world_particle_mesh_1));
          glBindBuffer(34962, 0);
          glDisableVertexAttribArray(0);
          g_1A724E600 = xmmword_140278D30;
          g_1A724E610 = xmmword_140278D80;
          g_1A724E620 = xmmword_140278E20;
          g_1A724E630 = xmmword_140279490;
          sr_math_mat4_multiply(
            (unsigned int *)&g_1A724E640,
            (__int64)(unsigned int *)&g_1A724E600,
            (__int64)(unsigned int *)&g_1A724E5C0);
          sr_math_mat4_multiply(
            (unsigned int *)&g_1A724E6C0,
            (__int64)(unsigned int *)&g_1A724E640,
            (__int64)(unsigned int *)&g_1A724E580);
        }
      }
      ++iteration_count_2;
      state_address_3 += 26;
    }
    while ( iteration_count_2 < (int)world_particle_count );
  }
  record_byte_offset = (float *)&g_1A724E604;
  g_1A724E600 = xmmword_140278D30;
  buffer_cursor_3 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E610 = xmmword_140278D80;
  record_byte_offset_2 = (float *)&g_1A724E604;
  state_address_4 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  remaining_count_2 = 4;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  do
  {
    product_difference = *(record_byte_offset_2 - 1);
    remaining_count_3 = 4;
    scaled_value = *record_byte_offset_2;
    source_component_y = record_byte_offset_2[1];
    source_component_z = record_byte_offset_2[2];
    do
    {
      *buffer_cursor_3 = (float)((float)((float)(product_difference * *(float *)((char *)buffer_cursor_3 + state_address_4 - 16))
                           + (float)(scaled_value * *(float *)((char *)buffer_cursor_3 + state_address_4)))
                   + (float)(source_component_y * *(float *)((char *)buffer_cursor_3 + state_address_4 + 16)))
           + (float)(source_component_z * *(float *)((char *)buffer_cursor_3 + state_address_4 + 32));
      ++buffer_cursor_3;
      --remaining_count_3;
    }
    while ( remaining_count_3 );
    record_byte_offset_2 += 4;
    state_address_4 -= 16LL;
    --remaining_count_2;
  }
  while ( remaining_count_2 );
  record_byte_offset_3 = (float *)&g_1A724E644;
  g_1A724E640 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  buffer_cursor_4 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E650 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  remaining_count_4 = 4;
  record_byte_offset_4 = (float *)&g_1A724E644;
  state_address_5 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E660 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E670 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    product_difference_2 = *(record_byte_offset_4 - 1);
    remaining_count_5 = 4;
    scaled_value_2 = *record_byte_offset_4;
    source_component_y_2 = record_byte_offset_4[1];
    source_component_z_2 = record_byte_offset_4[2];
    do
    {
      *buffer_cursor_4 = (float)((float)((float)(product_difference_2 * *(float *)((char *)buffer_cursor_4 + state_address_5 - 16))
                           + (float)(scaled_value_2 * *(float *)((char *)buffer_cursor_4 + state_address_5)))
                   + (float)(source_component_y_2 * *(float *)((char *)buffer_cursor_4 + state_address_5 + 16)))
           + (float)(source_component_z_2 * *(float *)((char *)buffer_cursor_4 + state_address_5 + 32));
      ++buffer_cursor_4;
      --remaining_count_5;
    }
    while ( remaining_count_5 );
    record_byte_offset_4 += 4;
    state_address_5 -= 16LL;
    --remaining_count_4;
  }
  while ( remaining_count_4 );
  g_1A724E6C0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E6D0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6E0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6F0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  sr_world_draw_resting_particles(1, unrecovered_register_value_3, unrecovered_register_value_4);
  glUseProgram(0);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * shading_texture + 284024944], 0);
  glClearColor(0.0f,0.0f,0.0f,0.0f);
  glClear(0x4000);
  glDisable(3553);
  glColorMask(0,0,0,0);
  glDepthMask(0);
  glEnable(2929);
  selection_code = 518;
  if ( g_151E46194 )
    selection_code = 515;
  glDepthFunc(selection_code);
  glDisable(2884);
  glFrontFace(2304);
  glEnable(2960);
  glStencilFuncSeparate(1029, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1029, 0xFFFFFFFFLL);
  glStencilOpSeparate(1029, 7680, 7680, 34056);
  glStencilFuncSeparate(1028, 519, 0, 0xFFFFFFFFLL);
  glStencilMaskSeparate(1028, 0xFFFFFFFFLL);
  glStencilOpSeparate(1028, 7680, 7680, 34055);
  sub_1400946D0();
  LOBYTE(unrecovered_register_value_5) = 1;
  glColorMask(1,1,0,0);
  glDepthMask(0);
  glDisable(2929);
  glDisable(2884);
  glEnable(2960);
  glStencilMask(0xFFFFFFFFLL);
  glStencilOp(7680, 7680, 7680);
  glStencilFunc(514, 0, 0xFFFFFFFFLL);
  glViewport(0,
    0,
    (unsigned int)(int)g_184178D08,
    (unsigned int)(int)g_184178D0C);
  g_1A724E580 = xmmword_140278D30;
  g_1A724E590 = xmmword_140278D80;
  g_1A724E5A0 = xmmword_140278E90;
  g_1A724E5B0 = xmmword_140279720;
  g_1A724E5C0 = xmmword_140278D30;
  g_1A724E5D0 = xmmword_140278D80;
  g_1A724E5E0 = xmmword_140278E20;
  g_1A724E5F0 = xmmword_140279490;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  buffer_cursor_5 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  state_address_6 = (char *)(unsigned int *)&g_1A724E5D0 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  remaining_count_6 = 4;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  do
  {
    product_difference_3 = *(record_byte_offset - 1);
    remaining_count_7 = 4;
    scaled_value_3 = *record_byte_offset;
    source_component_y_3 = record_byte_offset[1];
    source_component_z_3 = record_byte_offset[2];
    do
    {
      *buffer_cursor_5 = (float)((float)((float)(product_difference_3 * *(float *)((char *)buffer_cursor_5 + state_address_6 - 16))
                           + (float)(scaled_value_3 * *(float *)((char *)buffer_cursor_5 + state_address_6)))
                   + (float)(source_component_y_3 * *(float *)((char *)buffer_cursor_5 + state_address_6 + 16)))
           + (float)(source_component_z_3 * *(float *)((char *)buffer_cursor_5 + state_address_6 + 32));
      ++buffer_cursor_5;
      --remaining_count_7;
    }
    while ( remaining_count_7 );
    record_byte_offset += 4;
    state_address_6 -= 16LL;
    --remaining_count_6;
  }
  while ( remaining_count_6 );
  buffer_cursor_6 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  record_byte_offset_5 = (float *)&g_1A724E5C4;
  g_1A724E640 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  state_address_7 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  remaining_count_8 = 4;
  g_1A724E650 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E660 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E670 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    product_difference_4 = *(record_byte_offset_5 - 1);
    remaining_count_9 = 4;
    scaled_value_4 = *record_byte_offset_5;
    source_component_y_4 = record_byte_offset_5[1];
    source_component_z_4 = record_byte_offset_5[2];
    do
    {
      *buffer_cursor_6 = (float)((float)((float)(product_difference_4 * *(float *)((char *)buffer_cursor_6 + state_address_7 - 16))
                           + (float)(scaled_value_4 * *(float *)((char *)buffer_cursor_6 + state_address_7)))
                   + (float)(source_component_y_4 * *(float *)((char *)buffer_cursor_6 + state_address_7 + 16)))
           + (float)(source_component_z_4 * *(float *)((char *)buffer_cursor_6 + state_address_7 + 32));
      ++buffer_cursor_6;
      --remaining_count_9;
    }
    while ( remaining_count_9 );
    record_byte_offset_5 += 4;
    state_address_7 -= 16LL;
    --remaining_count_8;
  }
  while ( remaining_count_8 );
  buffer_cursor_7 = (float *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E680 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  remaining_count_10 = 4;
  state_address_8 = (char *)(unsigned int *)&g_1A724E590 - (char *)&(*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E690 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6A0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6B0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  do
  {
    product_difference_5 = *(record_byte_offset_3 - 1);
    remaining_count_11 = 4;
    scaled_value_5 = *record_byte_offset_3;
    source_component_y_5 = record_byte_offset_3[1];
    source_component_z_5 = record_byte_offset_3[2];
    do
    {
      *buffer_cursor_7 = (float)((float)((float)(product_difference_5 * *(float *)((char *)buffer_cursor_7 + state_address_8 - 16))
                           + (float)(scaled_value_5 * *(float *)((char *)buffer_cursor_7 + state_address_8)))
                   + (float)(source_component_y_5 * *(float *)((char *)buffer_cursor_7 + state_address_8 + 16)))
           + (float)(source_component_z_5 * *(float *)((char *)buffer_cursor_7 + state_address_8 + 32));
      ++buffer_cursor_7;
      --remaining_count_11;
    }
    while ( remaining_count_11 );
    record_byte_offset_3 += 4;
    state_address_8 -= 16LL;
    --remaining_count_10;
  }
  while ( remaining_count_10 );
  g_1A724E6C0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+0));
  g_1A724E6D0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+4));
  g_1A724E6E0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+8));
  g_1A724E6F0 = (*(__int128 *)(void *)(sr_stencil_pass_matrix+12));
  glBindTexture(3553, renderer_white_texture);
  g_1AD299450 = xmmword_1402796E0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  sr_renderer_batch_vertex3f(-1.0f, 1.0f, 0.0f);
  sr_renderer_batch_vertex3f(1.0f, 1.0f, 0.0f);
  sr_renderer_batch_vertex3f(1.0f, -1.0f, 0.0f);
  sr_renderer_batch_vertex3f(-1.0f, -1.0f, 0.0f);
  sr_renderer_batch_flush(void_2, unrecovered_register_value_6, unrecovered_register_value_7);
  glDisable(2960);
  LOBYTE(unrecovered_register_value_8) = 1;
  glColorMask(1,1,1,0);
  glEnable(2929);
  glDepthFunc(515);
  if ( g_151E46194 )
    glDepthFunc(518);
  LOBYTE(unrecovered_register_value_9) = 1;
  glDepthMask(1);
  glEnable(2884);
  glFrontFace(2304);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (0000000140123F80) ----------------------------------------------------
__int64            sub_140123F80(int a1)
{
  int i;
  float sr_terrain_light[3]; // native rsp+20h..28h vec3 upload
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140123F80[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_140123F80 + 0)) /* [rsp+0h] */
#define unused_frame_slot_48 (*(__int64 (*))(void *)(sr_frame_140123F80 + 48)) /* [rsp+30h] */

  if ( !a1 )
  {
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    sr_terrain_light[0] = g_184178D40 * 0.5;
    sr_terrain_light[2] = g_184178D48 * 0.5;
    sr_terrain_light[1] = g_184178D44 * 0.5;
    glUniform3fv(terrain_u_lightambient, 1, sr_terrain_light);
    sr_terrain_light[0] = g_184178D50 * 0.5;
    sr_terrain_light[1] = g_184178D54 * 0.5;
    sr_terrain_light[2] = g_184178D58 * 0.5;
    glUniform3fv(terrain_u_lightdiffuse, 1, sr_terrain_light);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF160 + 284024944]);
    glActiveTexture(33988);
    glBindTexture(3553, renderer_white_texture);
  }
  glActiveTexture(33987);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF164 + 284024944]);
  glEnableVertexAttribArray(0);
  for ( i = 0; i < 64; ++i )
    sub_1400D2B90(i);
  glDisableVertexAttribArray(0);
  if ( !a1 )
  {
    glActiveTexture(33984);
    glUseProgram(0);
  }
  glDisable(32823);
  return 0; /* the function has no caller */
}
#undef unused_frame_slot_0
#undef unused_frame_slot_48

//----- (00000001401241B0) ----------------------------------------------------
double            sub_1401241B0(int a1)
{
  glEnable(32823);
  (*(void (**)(float,float))&flt_140384000[131078])(1.0f, 1.0f); /* glPolygonOffset: native XMM0, XMM1 */
  if ( !a1 )
  {
    glUseProgram(terrain_program);
    glUniform3fv(terrain_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glUniform3fv(terrain_u_lightambient, 1, (unsigned int *)&g_184178D40);
    glUniform3fv(terrain_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
    glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF154 + 284024944]);
    glActiveTexture(33985);
    glEnable(3553);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF158 + 284024944]);
    glActiveTexture(33986);
    glEnable(3553);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF15C + 284024944]);
    glDisable(3553);
    glActiveTexture(33985);
    glDisable(3553);
    glActiveTexture(33984);
    glUseProgram(0);
  }
  return (*(double (           **)(__int64))(unsigned int *)&glDisable)(32823);
}

//----- (0000000140124320) ----------------------------------------------------
__int64 sub_140124320()
{
  int state_word;
  __int64 float_word;
  void *allocation_buffer;
  __int64 unrecovered_register_value;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;
  __int64 unrecovered_register_value_2;
  __int64 unused_local_5;
  __int64 unused_local_6;
  __int64 unused_local_7;
  unsigned int *buffer_cursor;
  __int64 remaining_count;
  unsigned int *record_byte_offset;
  unsigned int *state_address;
  unsigned int *state_address_2;
  __int64 unused_local_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124320[128];
#define scratch_buffer (*(_DWORD (*)[10])(void *)(sr_frame_140124320 + 0)) /* [rsp+0h] */
#define packed_word_bits (*(__int64 (*))(void *)(sr_frame_140124320 + 40)) /* [rsp+28h] */
#define eye (*(__int64 (*))(void *)(sr_frame_140124320 + 64)) /* [rsp+40h] */
#define component_sum (*(float (*))(void *)(sr_frame_140124320 + 72)) /* [rsp+48h] */
#define axis (*(_OWORD (*)[2])(void *)(sr_frame_140124320 + 80)) /* [rsp+50h] */
#define unused_written_slot (*(int (*))(void *)(sr_frame_140124320 + 112)) /* [rsp+70h] */
#define unused_frame_slot_120 (*(__int64 (*))(void *)(sr_frame_140124320 + 120)) /* [rsp+78h] */

  if ( g_183F7CB60 )
  {
    *(unsigned int *)&g_18399EB64 = 1148190720;
    *(unsigned int *)&g_18399EB6C = 1147142144;
    g_18399EB68 = 0;
    return 0; /* reset caller ignores native EAX */
  }
  else
  {
    state_word = g_183EBF11C;
    float_word = 44LL * (int)g_183EBF11C;
    dword_140404A6C[float_word + 284024933] = 512;
    dword_140404A6C[float_word + 284024934] = 512;
    dword_140404A6C[float_word + 284024935] = 1;
    dword_140404A6C[float_word + 284024936] = 6408;
    dword_140404A6C[float_word + 284024937] = 6408;
    dword_140404A6C[float_word + 284024938] = 33071;
    dword_140404A6C[float_word + 284024939] = 33071;
    dword_140404A6C[float_word + 284024940] = 9729;
    dword_140404A6C[float_word + 284024941] = 9729;
    allocation_buffer = *(void **)&dword_140404A6C[float_word + 284024945];
    *(_QWORD *)&g_18399EB64 = 1147142144;
    *(unsigned int *)&g_18399EB6C = 1147142144;
    free(allocation_buffer);
    *(_QWORD *)&dword_140404A6C[float_word + 284024945] = 0;
    sub_14014D3E0(state_word, 0);
    if ( glClipControl )
      glClipControl(36001, 37726);
    glClearDepth(1.0);
    glEnable(2929);
    glDepthFunc(515);
    LOBYTE(unrecovered_register_value) = 1;
    glDepthMask(1);
    glEnable(2884);
    glFrontFace(2304);
    glDisable(3042);
    glColorMask(1,1,1,1);
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(16640);
    LOBYTE(unrecovered_register_value_2) = 1;
    glColorMask(1,1,1,0);
    HIDWORD(eye) = 0;
    axis[0] = xmmword_140278D30;
    unused_written_slot = 1065353216;
    axis[1] = xmmword_140278D30;
    *(float *)&eye = g_18399EB64 + 1024.0;
    component_sum = g_18399EB6C + 1024.0;
    sr_math_mat3_rotate_rows((__int64)axis, (float *)axis, sr_export_float_lane_container(1070141403));
    sr_camera_begin_orthographic(0, 0, 1024, 640, 1024.0, 1024.0, 1024.0);
    sr_camera_set_view((float *)&eye, (unsigned int *)axis);
    glViewport(0, 0, 512, 512);
    sub_14011CC30(0);
    if ( !g_18B7D2FBC && !g_18C434FDC )
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E98C08 + 283793813]);
      glBindBuffer(34963, dword_140404A6C[2 * g_183E98C0C + 283793813]);
      glEnableVertexAttribArray(0);
      glEnableVertexAttribArray(1);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(0));
      packed_word_bits = 36;
      glVertexAttribPointer(1, 3, 5126,0,(int)(uint32_t)(64),(const void *)(intptr_t)(36));
      scratch_buffer[8] = 1065353216;
      glVertexAttrib4f(2,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f,0x1.0000000000000p+0f);
      buffer_cursor = &g_149F54C20;
      remaining_count = 256;
      record_byte_offset = &g_183EBC404;
      state_address = &g_149F55020;
      state_address_2 = &g_14DF55020;
      do
      {
        if ( (int)*buffer_cursor > 0 )
        {
          glUseProgram(renderer_ui_program);
          glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * *record_byte_offset + 284024944]);
          unk_140404808(4, state_address, 5125, state_address_2, *buffer_cursor, state_address + 25165824);
        }
        state_address += 0x4000;
        state_address_2 += 0x8000;
        record_byte_offset += 4;
        ++buffer_cursor;
        --remaining_count;
      }
      while ( remaining_count );
      glBindBuffer(34963, 0);
      glBindBuffer(34962, 0);
      glDisableVertexAttribArray(1);
      glDisableVertexAttribArray(0);
    }
    glBindTexture(3553, dword_140404A6C[44 * g_183EBF11C + 284024944]);
    LODWORD(packed_word_bits) = 0;
    (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, int, int, __int64, float))&flt_140384000[131086])(
      3553,
      0,
      0,
      0,
      0,
      packed_word_bits,
      512,
      512,
      eye,
      COERCE_FLOAT(LODWORD(component_sum)));
    return 0; /* reset caller ignores native EAX */
  }
}
#undef scratch_buffer
#undef packed_word_bits
#undef eye
#undef component_sum
#undef axis
#undef unused_written_slot
#undef unused_frame_slot_120

//----- (0000000140124840) ----------------------------------------------------
double            sub_140124840(int a1, unsigned int *a2, _DWORD *a3, int a4, int *a5, __int64 a6)
{
  __int64 input_value;
  __int64 selection_code;
  __int64 unused_local;
  __int64 unused_local_2;
  double result;

  input_value = a1;
  if ( a4 )
  {
    if ( a4 == 2 )
    {
      glBindTexture(3553, dword_140404A6C[44 * *a5 + 284024944]);
      sr_camera_set_model(a2, a3);
    }
    else
    {
      sr_camera_set_model(a2, a3);
      if ( a4 == 1 )
        glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    }
    selection_code = 0;
  }
  else
  {
    glActiveTexture(33984);
    glBindTexture(3553, dword_140404A6C[44 * *a5 + 284024944]);
    glActiveTexture(33986);
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    sr_camera_set_model(a2, a3);
    glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    selection_code = 2;
  }
  glEnableVertexAttribArray(selection_code);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value + 283790166] + 283793813]);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*input_value+178527462]),(const void *)(intptr_t)(0));
  if ( !a4 )
  {
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*input_value+178527462]),(const void *)(intptr_t)(12));
    glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*input_value+178527462]),(const void *)(intptr_t)(20));
  }
  glVertexAttrib4fv(3, a6);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * input_value + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  if ( !a4 )
  {
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(2);
  }
  g_1A724E600 = xmmword_140278D30;
  result = 0.0;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  if ( !a4 )
    return ((double (*)(_QWORD))glActiveTexture)(33984);
  return result;
}

//----- (0000000140124AF0) ----------------------------------------------------
double            sub_140124AF0(int a1, int a2)
{
  int input_value;
  signed int state_word;
  signed int iteration_count;
  unsigned int integer_difference;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  __int64 table_value;
  __int64 cached_land_mask_u_modelviewmatrix;
  unsigned int *state_address;
  __int64 unused_local;
  __int64 unused_local_2;
  double result;
  int integer_difference_2;

  input_value = a2;
  if ( !g_16B165F68 )
  {
    glUniform1i(model_u_flags, 0);
    glEnableVertexAttribArray(0);
    if ( (a1 & 0xFFFFFFFD) == 0 )
    {
      glEnableVertexAttribArray(1);
      glEnableVertexAttribArray(2);
      if ( !a1 )
      {
        glActiveTexture(33985);
        glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
        glActiveTexture(33986);
        glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
      }
    }
    state_word = g_18417E1B4;
    iteration_count = 0;
    integer_difference = -1;
    integer_difference_2 = -1;
    if ( (int)g_18417E1B4 > 0 )
    {
      buffer_cursor = &g_18417E1B8;
      while ( 1 )
      {
        scaled_index = 30LL * (int)*buffer_cursor;
        if ( (dword_140404A6C[scaled_index + 284554710] & 2) == 0 || input_value )
          break;
LABEL_21:
        ++iteration_count;
        ++buffer_cursor;
        if ( iteration_count >= state_word )
          goto LABEL_22;
      }
      table_value = (int)dword_140404A6C[scaled_index + 284554707];
      if ( a1 )
      {
        sr_camera_set_model(&dword_140404A6C[scaled_index + 284554715], &dword_140404A6C[scaled_index + 284554718]);
        if ( a1 != 1 )
        {
LABEL_16:
          if ( (_DWORD)table_value != integer_difference_2 )
          {
            glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[table_value + 283790166] + 283793813]);
            glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*table_value+178527462]),(const void *)(intptr_t)(0));
            if ( (a1 & 0xFFFFFFFD) == 0 )
            {
              glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*table_value+178527462]),(const void *)(intptr_t)(12));
              glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*table_value+178527462]),(const void *)(intptr_t)(20));
            }
            integer_difference_2 = table_value;
          }
          glVertexAttrib4fv(3, &dword_140404A6C[scaled_index + 284554733]);
          glDrawArrays(4, 0, 3 * dword_140404A6C[908 * table_value + 178527465]);
          state_word = g_18417E1B4;
          input_value = a2;
          goto LABEL_21;
        }
        glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
        cached_land_mask_u_modelviewmatrix = land_mask_u_modelviewmatrix;
        state_address = (unsigned int *)&g_1A724E640;
      }
      else
      {
        if ( dword_140404A6C[scaled_index + 284554711] != integer_difference )
        {
          glActiveTexture(33984);
          glBindTexture(3553, dword_140404A6C[44 * dword_140404A6C[scaled_index + 284554711] + 284024944]);
          integer_difference = dword_140404A6C[scaled_index + 284554711];
        }
        glUniform3fv(model_u_viewposition, 1, (unsigned int *)&g_183F7C544);
        glUniform3fv(model_u_objposition, 1, &dword_140404A6C[scaled_index + 284554715]);
        glUniformMatrix3fv(model_u_objorientation, 1, 0, &dword_140404A6C[scaled_index + 284554718]);
        glUniform3fv(model_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
        glUniform3fv(model_u_lightambient, 1, (unsigned int *)&g_184178D40);
        glUniform3fv(model_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
        glUniform3fv(model_u_viewdirection, 1, (unsigned int *)&g_183F7C568);
        sr_camera_set_model(&dword_140404A6C[scaled_index + 284554715], &dword_140404A6C[scaled_index + 284554718]);
        cached_land_mask_u_modelviewmatrix = model_u_modelviewprojectionmatrix;
        state_address = (unsigned int *)&g_1A724E6C0;
      }
      glUniformMatrix4fv(cached_land_mask_u_modelviewmatrix, 1, 0, state_address);
      goto LABEL_16;
    }
LABEL_22:
    g_1A724E600 = xmmword_140278D30;
    g_1A724E610 = xmmword_140278D80;
    g_1A724E620 = xmmword_140278E20;
    g_1A724E630 = xmmword_140279490;
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E600,
      (__int64)(unsigned int *)&g_1A724E5C0);
    sr_math_mat4_multiply(
      (unsigned int *)&g_1A724E6C0,
      (__int64)(unsigned int *)&g_1A724E640,
      (__int64)(unsigned int *)&g_1A724E580);
    glBindBuffer(34962, 0);
    if ( a1 )
    {
      if ( a1 != 2 )
        return ((double (*)(_QWORD))glDisableVertexAttribArray)(0);
    }
    else
    {
      glActiveTexture(33986);
      glBindTexture(34067, 0);
      glActiveTexture(33984);
    }
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    return ((double (*)(_QWORD))glDisableVertexAttribArray)(2);
  }
  return result;
}

//----- (0000000140124FE0) ----------------------------------------------------
__int64            sub_140124FE0(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 input_value;
  __int64 input_value_2;
  float weighted_sum;
  float weighted_sum_2;
  float weighted_sum_3;
  float weighted_sum_4;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140124FE0[80];
#define scratch_buffer (*(_DWORD (*)[10])(void *)(sr_frame_140124FE0 + 0)) /* [rsp+0h] */
#define unused_written_slot (*(__int64 (*))(void *)(sr_frame_140124FE0 + 40)) /* [rsp+28h] */
#define float_buffer (*(float (*)[4])(void *)(sr_frame_140124FE0 + 48)) /* [rsp+30h] */
#define unused_frame_slot_64 (*(__int64 (*))(void *)(sr_frame_140124FE0 + 64)) /* [rsp+40h] */

  input_value = a2;
  input_value_2 = a1;
  weighted_sum = g_18417DE80 * *(float *)(a4 + 32);
  weighted_sum_2 = g_18417DE80 * *(float *)(a4 + 20);
  weighted_sum_3 = (float)(g_18417DE7C * *(float *)(a4 + 16))
     + (float)(g_18417DE78 * *(float *)(a4 + 12));
  weighted_sum_4 = (float)(g_18417DE7C * *(float *)(a4 + 28))
     + (float)(g_18417DE78 * *(float *)(a4 + 24));
  float_buffer[0] = (float)((float)(g_18417DE7C * *(float *)(a4 + 4))
                 + (float)(g_18417DE78 * *(float *)a4))
         + (float)(g_18417DE80 * *(float *)(a4 + 8));
  float_buffer[1] = weighted_sum_3 + weighted_sum_2;
  float_buffer[2] = weighted_sum_4 + weighted_sum;
  sr_camera_set_model(a3, (_DWORD *)a4);
  glUseProgram(shadow_program);
  glUniformMatrix4fv(shadow_u_modelmatrix, 1, 0, (unsigned int *)&g_1A724E600);
  glUniformMatrix4fv(shadow_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniformMatrix4fv(shadow_u_projectionmatrix, 1, 0, (unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(shadow_u_viewmatrix, 1, 0, (unsigned int *)&g_1A724E5C0);
  glUniform3fv(shadow_u_lightdirection, 1, float_buffer);
  glUniform1f((int)shadow_u_shadowlength,0x1.0000000000000p+6f);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value_2 + 283790166] + 283793813]);
  glBindBuffer(34963, dword_140404A6C[2 * dword_140404A6C[input_value + 283790166] + 283793814]);
  glEnableVertexAttribArray(0);
  unused_written_slot = 0;
  scratch_buffer[8] = 4 * dword_140404A6C[908 * input_value_2 + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*input_value_2+178527462]),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6 * dword_140404A6C[908 * input_value + 178527475]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef scratch_buffer
#undef unused_written_slot
#undef float_buffer
#undef unused_frame_slot_64

//----- (0000000140125270) ----------------------------------------------------
__int64            sub_140125270(int a1, unsigned int *a2, _DWORD *a3, __int64 a4, float a5)
{
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;

  input_value = a1;
  sr_camera_set_model(a2, a3);
  sr_camera_scale_model(a5, a5, a5);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[input_value + 283790166] + 283793813]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[908*input_value+178527462]),(const void *)(intptr_t)(0));
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * input_value + 178527465]);
  glDisableVertexAttribArray(0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sr_math_mat4_multiply(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (00000001401253C0) ----------------------------------------------------
double sub_1401253C0()
{
  __int64 unrecovered_register_value;
  __int64 void_2;
  __int64 float_word;
  unsigned int *state_address;
  __int64 remaining_count;
  int state_word;
  int iteration_count;
  float weighted_sum;
  __int64 record_byte_offset;
  __int64 remaining_count_2;
  float product_difference;
  float scaled_value;
  __int64 loaded_word;
  __int64 scaled_index;
  float weighted_sum_2;
  float weighted_sum_3;
  float combined_products;
  float combined_products_2;
  float weighted_sum_4;
  float combined_products_3;
  float scaled_value_2;
  float combined_products_4;
  float weighted_sum_5;
  float scaled_value_3;
  float combined_products_5;
  __int64 unrecovered_register_value_2;
  unsigned int position[4];

  glDepthMask(0);
  glBindTexture(3553, renderer_white_texture);
  glBlendFunc(770,1);
  state_address = &g_182BBB244;
  remaining_count = 1024;
  state_word = g_1665C4A18;
  g_1AD299450 = xmmword_140279300;
  g_1AD059440 = 0;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    if ( *(state_address - 49) )
    {
      void_2 = state_address[37];
      if ( (int)void_2 > 0 )
      {
        iteration_count = 0;
        weighted_sum = (float)((float)(int)void_2 * 0.015625) + 0.125;
        if ( state_word > 0 )
        {
          record_byte_offset = 0;
          do
          {
            remaining_count_2 = 3;
            do
            {
              product_difference = *((float *)state_address - 1);
              scaled_value = *(float *)state_address;
              loaded_word = *(unsigned int *)(g_1665C4A20 + record_byte_offset);
              scaled_index = 3 * (int)loaded_word;
              weighted_sum_2 = weighted_sum * *(float *)(g_1665C4A10 + 4 * scaled_index);
              weighted_sum_3 = weighted_sum * *(float *)(g_1665C4A10 + 4 * scaled_index + 4);
              combined_products = (float)((float)(weighted_sum_2 * *((float *)state_address - 8)) + *((float *)state_address - 26)) + (float)(weighted_sum_3 * *((float *)state_address - 5));
              combined_products_2 = (float)((float)(weighted_sum_2 * *((float *)state_address - 7)) + *((float *)state_address - 25)) + (float)(weighted_sum_3 * *((float *)state_address - 4));
              weighted_sum_4 = weighted_sum * *(float *)(g_1665C4A10 + 4LL * (3 * (int)loaded_word + 2));
              combined_products_3 = (float)((float)(weighted_sum_2 * *((float *)state_address - 6)) + *((float *)state_address - 24)) + (float)(weighted_sum_3 * *((float *)state_address - 3));
              if ( (_DWORD)loaded_word == 1 )
                scaled_value_2 = weighted_sum_4 * 1.5;
              else
                scaled_value_2 = weighted_sum_4 * 3.0;
              combined_products_4 = (float)(*((float *)state_address - 2) * scaled_value_2) + combined_products;
              weighted_sum_5 = (float)(product_difference * scaled_value_2) + combined_products_2;
              scaled_value_3 = scaled_value * scaled_value_2;
              combined_products_5 = *(float *)&dword_140404A6C[1268 * *(state_address - 44) + 278521315] - weighted_sum;
              *(float *)position = combined_products_4 + (float)(*((float *)state_address - 2) * combined_products_5);
              *(float *)&position[1] = weighted_sum_5 + (float)(product_difference * combined_products_5);
              *(float *)&position[2] = (float)(scaled_value_3 + combined_products_3) + (float)(scaled_value * combined_products_5);
              sr_renderer_batch_vertex3fv(position, loaded_word, *(__int64 *)&g_1665C4A10);
              record_byte_offset += 4;
              --remaining_count_2;
            }
            while ( remaining_count_2 );
            state_word = g_1665C4A18;
            ++iteration_count;
          }
          while ( iteration_count < (int)g_1665C4A18 );
        }
      }
    }
    state_address += 1760;
    --remaining_count;
  }
  while ( remaining_count );
  sr_renderer_batch_flush(void_2, unrecovered_register_value, float_word);
  glBlendFunc(770,771);
  LOBYTE(unrecovered_register_value_2) = 1;
  return (*(double (           **)(__int64))(unsigned int *)&glDepthMask)(unrecovered_register_value_2);
}

//----- (0000000140125670) ----------------------------------------------------
__int64            sub_140125670(unsigned int *a1, float a2, int a3)
{
  __int64 input_value;
  __int64 scaled_index;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;

  input_value = a3;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E600 = xmmword_140278D30;
  g_1A724E630 = xmmword_140279490;
  g_1A724E620 = xmmword_140278E20;
  if ( a1 )
  {
    *(unsigned int *)&g_1A724E630 = *a1;
    g_1A724E634 = a1[1];
    g_1A724E638 = a1[2];
  }
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sr_math_mat4_multiply((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  sr_camera_scale_model(a2, a2, a2);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  scaled_index = 5 * input_value;
  glBindBuffer(34962, dword_140404A6C[2 * scaled_index + 159842277]);
  glBindBuffer(34963, dword_140404A6C[2 * scaled_index + 159842278]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * scaled_index + 159842283]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sr_math_mat4_multiply(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (0000000140125860) ----------------------------------------------------
__int64            sub_140125860(unsigned int *a1, _DWORD *a2, float a3, int a4)
{
  __int64 input_value;
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 unused_local_4;

  input_value = a4;
  sr_camera_set_model(a1, a2);
  sr_camera_scale_model(a3, a3, a3);
  glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, 0, (unsigned int *)&g_1A724E6C0);
  input_value *= 5;
  glBindBuffer(34962, dword_140404A6C[2 * input_value + 159842277]);
  glBindBuffer(34963, dword_140404A6C[2 * input_value + 159842278]);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[2 * input_value + 159842283]),5125,NULL);
  glDisableVertexAttribArray(0);
  glBindBuffer(34963, 0);
  glBindBuffer(34962, 0);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sr_math_mat4_multiply((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  return sr_math_mat4_multiply(
           (unsigned int *)&g_1A724E6C0,
           (__int64)(unsigned int *)&g_1A724E640,
           (__int64)(unsigned int *)&g_1A724E580);
}

//----- (000000014013D1B0) ----------------------------------------------------
double sub_14013D1B0()
{
  int iteration_count;
  __m128 converted_vector;
  double cosine_value;
  int i;
  double cosine_value_2;
  double float_lane_0;
  unsigned int *state_address;
  signed int running_total;
  __m128i si128;
  double vector_result;
  int cached_shading_texture;
  __int64 scaled_index;
  int state_word;
  __int64 scaled_index_2;
  int state_word_2;
  __int64 scaled_index_3;
  int state_word_3;
  __int64 scaled_index_4;
  int state_word_4;
  __int64 scaled_index_5;
  int j;
  __int64 selection_code;
  int glcheckframebufferstatus_result;
  __int64 selection_code_2;

  iteration_count = 0;
  SR_VEC_LANES(128, converted_vector, i32)[0] = 0;
  do
  {
    cosine_value = cos((float)iteration_count++ * 0.1847995678582353);
    SR_VEC_LANES(128, converted_vector, f32)[0] = cosine_value + SR_VEC_LANES(128, converted_vector, f32)[0];
  }
  while ( iteration_count < 8 );
  for ( i = 1; i < 8; ++i )
  {
    cosine_value_2 = cos((float)i * 0.1847995678582353);
    float_lane_0 = SR_VEC_LANES(128, converted_vector, f32)[0];
    converted_vector = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    SR_VEC_LANES(128, converted_vector, f32)[0] = cosine_value_2 + float_lane_0;
  }
  SR_VEC_LANES(128, converted_vector, f32)[0] = SR_VEC_LANES(128, converted_vector, f32)[0] * 0.875;
  state_address = &g_1841FA1E0;
  running_total = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F50);
  *(double *)SR_VEC_LANES(128, converted_vector, u64) = SR_VEC_READ_LANES(128, _mm_shuffle_ps(converted_vector, converted_vector, 0), f32)[0];
  do
  {
    vector_result = SR_VEC_READ_LANES(128, sub_1401F8B50(
                      SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(running_total), 0), _mm_move_epi64(si128))), f32)[0]
                    * 0.1847995678582353), f64)[0];
    running_total += 2;
    state_address += 2;
    *((double *)state_address - 1) = vector_result / *(double *)SR_VEC_LANES(128, converted_vector, u64);
  }
  while ( running_total < 8 );
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    34842,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5126,
    0);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE428 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    32856,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5121,
    0);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE430 + 436582486]);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    32856,
    g_182A7D55C,
    g_182A7D560,
    0,
    6408,
    5121,
    0);
  cached_shading_texture = shading_texture;
  scaled_index = 44LL * (int)shading_texture;
  dword_140404A6C[scaled_index + 284024933] = g_182A7D55C;
  dword_140404A6C[scaled_index + 284024934] = g_182A7D560;
  dword_140404A6C[scaled_index + 284024935] = 1;
  dword_140404A6C[scaled_index + 284024936] = 6408;
  dword_140404A6C[scaled_index + 284024937] = 32856;
  dword_140404A6C[scaled_index + 284024938] = 33071;
  dword_140404A6C[scaled_index + 284024939] = 33071;
  dword_140404A6C[scaled_index + 284024940] = 9729;
  dword_140404A6C[scaled_index + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[scaled_index + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index + 284024945] = 0;
  sub_14014D3E0(cached_shading_texture, 0);
  state_word = g_183EBE414;
  scaled_index_2 = 44LL * (int)g_183EBE414;
  dword_140404A6C[scaled_index_2 + 284024933] = g_182A7D55C;
  dword_140404A6C[scaled_index_2 + 284024934] = g_182A7D560;
  dword_140404A6C[scaled_index_2 + 284024935] = 1;
  dword_140404A6C[scaled_index_2 + 284024936] = 6408;
  dword_140404A6C[scaled_index_2 + 284024937] = 32856;
  dword_140404A6C[scaled_index_2 + 284024938] = 33071;
  dword_140404A6C[scaled_index_2 + 284024939] = 33071;
  dword_140404A6C[scaled_index_2 + 284024940] = 9728;
  dword_140404A6C[scaled_index_2 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[scaled_index_2 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_2 + 284024945] = 0;
  sub_14014D3E0(state_word, 0);
  state_word_2 = g_183EBE41C;
  scaled_index_3 = 44LL * (int)g_183EBE41C;
  dword_140404A6C[scaled_index_3 + 284024933] = g_182A7D55C;
  dword_140404A6C[scaled_index_3 + 284024934] = g_182A7D560;
  dword_140404A6C[scaled_index_3 + 284024935] = 1;
  dword_140404A6C[scaled_index_3 + 284024936] = 6408;
  dword_140404A6C[scaled_index_3 + 284024937] = 32856;
  dword_140404A6C[scaled_index_3 + 284024938] = 33071;
  dword_140404A6C[scaled_index_3 + 284024939] = 33071;
  dword_140404A6C[scaled_index_3 + 284024940] = 9729;
  dword_140404A6C[scaled_index_3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[scaled_index_3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_3 + 284024945] = 0;
  sub_14014D3E0(state_word_2, 0);
  state_word_3 = g_183EBE420;
  scaled_index_4 = 44LL * (int)g_183EBE420;
  dword_140404A6C[scaled_index_4 + 284024933] = g_182A7D55C;
  dword_140404A6C[scaled_index_4 + 284024934] = g_182A7D560;
  dword_140404A6C[scaled_index_4 + 284024935] = 1;
  dword_140404A6C[scaled_index_4 + 284024936] = 6408;
  dword_140404A6C[scaled_index_4 + 284024937] = 32856;
  dword_140404A6C[scaled_index_4 + 284024938] = 33071;
  dword_140404A6C[scaled_index_4 + 284024939] = 33071;
  dword_140404A6C[scaled_index_4 + 284024940] = 9729;
  dword_140404A6C[scaled_index_4 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[scaled_index_4 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_4 + 284024945] = 0;
  sub_14014D3E0(state_word_3, 0);
  state_word_4 = g_183EBE424;
  scaled_index_5 = 44LL * (int)g_183EBE424;
  dword_140404A6C[scaled_index_5 + 284024933] = g_182A7D55C;
  dword_140404A6C[scaled_index_5 + 284024934] = g_182A7D560;
  dword_140404A6C[scaled_index_5 + 284024935] = 1;
  dword_140404A6C[scaled_index_5 + 284024936] = 6408;
  dword_140404A6C[scaled_index_5 + 284024937] = 32856;
  dword_140404A6C[scaled_index_5 + 284024938] = 33071;
  dword_140404A6C[scaled_index_5 + 284024939] = 33071;
  dword_140404A6C[scaled_index_5 + 284024940] = 9729;
  dword_140404A6C[scaled_index_5 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[scaled_index_5 + 284024945]);
  *(_QWORD *)&dword_140404A6C[scaled_index_5 + 284024945] = 0;
  sub_14014D3E0(state_word_4, 0);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE418 + 284024944]);
  glTexImage2D(3553,
    0,
    36013,
    g_182A7D55C,
    g_182A7D560,
    0,
    34041,
    36269,
    0);
  glTexParameteri(3553, 10240, 9728);
  glTexParameteri(3553, 10241, 9728);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glEnable(34895);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  glTexParameteri(34067, 10240, 9729);
  glTexParameteri(34067, 10241, 9985);
  glTexParameteri(34067, 10242, 33071);
  glTexParameteri(34067, 10243, 33071);
  glTexParameteri(34067, 32882, 33071);
  for ( j = 0; j < 6; ++j )
    glTexImage2D((unsigned int)(j + 34069),
      0,
      34842,
      512,
      512,
      0,
      6408,
      5126,
      0);
  glGenerateMipmap(34067);
  glBindTexture(34067, 0);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE404 + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
  selection_code = 35056;
  if ( g_151E46190 )
    selection_code = 36013;
  glRenderbufferStorage(36161, selection_code, g_182A7D55C, g_182A7D560);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
  glcheckframebufferstatus_result = glCheckFramebufferStatus(36160);
  if ( g_151E46190 )
  {
    if ( glcheckframebufferstatus_result == 36053 )
      goto LABEL_16;
    glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
    glRenderbufferStorage(36161, 35056, g_182A7D55C, g_182A7D560);
    glBindRenderbuffer(36161, 0);
    glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97744 + 283791766]);
    glcheckframebufferstatus_result = glCheckFramebufferStatus(36160);
  }
  if ( glcheckframebufferstatus_result != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create framebuffer");
LABEL_16:
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E9774C + 283791765]);
  glFramebufferTexture2D(36160, 36064, 34069, dword_140404A6C[44 * shading_cube_map + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E9774C + 283791766]);
  glRenderbufferStorage(36161, 35056, 512, 512);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E9774C + 283791766]);
  if ( (unsigned int)glCheckFramebufferStatus(36160) != 36053 )
    sub_140198F95(16, (__int64)"OpenGL Error", (__int64)"Unable to create cubemap framebuffer");
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97798 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE428 + 284024944], 0);
  glBindRenderbuffer(36161, dword_140404A6C[2 * g_183E97798 + 283791766]);
  selection_code_2 = 35056;
  if ( g_151E46190 )
    selection_code_2 = 36013;
  glRenderbufferStorage(36161, selection_code_2, g_182A7D55C, g_182A7D560);
  glBindRenderbuffer(36161, 0);
  glFramebufferRenderbuffer(36160, 33306, 36161, dword_140404A6C[2 * g_183E97798 + 283791766]);
  return ((double (*)(_QWORD, _QWORD))glBindFramebuffer)(36160, 0);
}

//----- (0000000140144700) ----------------------------------------------------
void sub_140144700()
{
  int iteration_count;
  __int64 running_total;
  __int64 pad_controller_open_result;
  int pad_instance_result;
  __int64 pad_name_result;
  __int64 scaled_index;
  char *state_address;
  char input_byte;
  __int64 pad_open_result;
  int pad_instance_result_2;
  __int64 pad_name_result_2;
  __int64 scaled_index_2;
  char *state_address_2;
  char input_byte_2;

  sr_pad_mappings(sr_pad_file("gamecontrollerdb.txt","rb"),1);
  g_184397B40 = 0;
  g_184397D30 = 0;
  g_184397F20 = 0;
  g_184398110 = 0;
  g_184398300 = 0;
  g_1843984F0 = 0;
  g_1843986E0 = 0;
  g_1843988D0 = 0;
  g_184398AC0 = 0;
  g_184398CB0 = 0;
  g_184398EA0 = 0;
  g_184399090 = 0;
  g_184399280 = 0;
  g_184399470 = 0;
  g_184399660 = 0;
  g_184399850 = 0;
  g_184399A40 = 0;
  g_184399C30 = 0;
  g_184399E20 = 0;
  g_18439A010 = 0;
  g_18439A200 = 0;
  g_18439A3F0 = 0;
  g_18439A5E0 = 0;
  g_18439A7D0 = 0;
  g_18439A9C0 = 0;
  g_18439ABB0 = 0;
  g_18439ADA0 = 0;
  g_18439AF90 = 0;
  g_18439B180 = 0;
  g_18439B370 = 0;
  g_18439B560 = 0;
  g_18439B750 = 0;
  g_18439BB60 = sr_pad_count();
  iteration_count = 0;
  if ( (int)g_18439BB60 > 0 )
  {
    running_total = 0;
    do
    {
      if ( iteration_count < 32 )
      {
        if ( (unsigned int)sr_pad_is_controller(iteration_count) )
        {
          pad_controller_open_result = (__int64)(uintptr_t)sr_pad_controller_open(iteration_count);
          *(_QWORD *)&dword_140404A6C[running_total + 285105085] = pad_controller_open_result;
          if ( pad_controller_open_result )
          {
            *(_QWORD *)&dword_140404A6C[running_total + 285105149] = (__int64)(uintptr_t)sr_pad_controller_joystick((void *)(uintptr_t)pad_controller_open_result);
            pad_instance_result = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[running_total + 285105149]);
            if ( pad_instance_result > 31 )
              pad_instance_result = 31;
            pad_name_result = (__int64)(uintptr_t)sr_pad_name(iteration_count);
            scaled_index = 124LL * pad_instance_result;
            state_address = (char *)&g_184397CA4 + scaled_index * 4 - pad_name_result;
            do
            {
              input_byte = *(_BYTE *)pad_name_result;
              state_address[pad_name_result] = *(_BYTE *)pad_name_result;
              ++pad_name_result;
            }
            while ( input_byte );
            dword_140404A6C[scaled_index + 285101115] = 6;
            dword_140404A6C[scaled_index + 285101132] = 16;
            dword_140404A6C[scaled_index + 285101165] = 0;
            dword_140404A6C[scaled_index + 285101109] = 1;
          }
        }
        else
        {
          pad_open_result = (__int64)(uintptr_t)sr_pad_open(iteration_count);
          *(_QWORD *)&dword_140404A6C[running_total + 285105149] = pad_open_result;
          if ( pad_open_result )
          {
            pad_instance_result_2 = sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[running_total + 285105149]);
            if ( pad_instance_result_2 > 31 )
              pad_instance_result_2 = 31;
            pad_name_result_2 = (__int64)(uintptr_t)sr_pad_name(iteration_count);
            scaled_index_2 = 124LL * pad_instance_result_2;
            state_address_2 = (char *)&g_184397CA4 + scaled_index_2 * 4 - pad_name_result_2;
            do
            {
              input_byte_2 = *(_BYTE *)pad_name_result_2;
              state_address_2[pad_name_result_2] = *(_BYTE *)pad_name_result_2;
              ++pad_name_result_2;
            }
            while ( input_byte_2 );
            dword_140404A6C[scaled_index_2 + 285101115] = sr_pad_axes((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[running_total + 285105149]);
            dword_140404A6C[scaled_index_2 + 285101132] = sr_pad_buttons((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[running_total + 285105149]);
            dword_140404A6C[scaled_index_2 + 285101165] = sr_pad_hats((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[running_total + 285105149]);
            dword_140404A6C[scaled_index_2 + 285101109] = 1;
          }
        }
      }
      ++iteration_count;
      running_total += 2;
    }
    while ( iteration_count < (int)g_18439BB60 );
  }
  SDL_JoystickEventState(0);
}

// 1401449A7: control flows out of bounds to 140198F4D

//----- (000000014014B2A0) ----------------------------------------------------
// Candidate shader/camera uniform cache: resolves viewposition/viewdirection/matrices/light/sampler uniforms and sets inverse resolution.
__int64 render_cache_camera_uniforms_candidate()
{
  __int64 close_status;
  __int64 file_handle;
  __int64 file_handle_2;
  float resolution[2]; /* original contiguous vec2 uniform */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014B2A0[64];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 0)) /* [rsp+0h] */
#define unused_frame_slot_48 (*(__int64 (*))(void *)(sr_frame_14014B2A0 + 48)) /* [rsp+30h] */

  LOBYTE(g_1515B0BC0) = 0;
  if ( (unsigned int)shader_compile_program(0, (__int64)(uintptr_t)world_vertex_source, (__int64)(uintptr_t)world_fragment_source, 0) )
  {
    glUseProgram(world_program);
    world_u_clipplane = glGetUniformLocation(world_program, "clipplane");
    world_u_ooresolution = glGetUniformLocation(world_program, "ooresolution");
    world_u_viewposition = glGetUniformLocation(world_program, "viewposition");
    world_u_flags = glGetUniformLocation(world_program, "flags");
    world_u_lightdirection = glGetUniformLocation(world_program, "lightdirection");
    world_u_isreflection = glGetUniformLocation(world_program, "isreflection");
    world_u_planeposition = glGetUniformLocation(world_program, "planeposition");
    world_u_planenormal = glGetUniformLocation(world_program, "planenormal");
    world_u_modelviewprojectionmatrix = glGetUniformLocation(world_program, "modelviewprojectionmatrix");
    world_u_lightambient = glGetUniformLocation(world_program, "lightambient");
    world_u_lightdiffuse = glGetUniformLocation(world_program, "lightdiffuse");
    world_u_tex_color = glGetUniformLocation(world_program, "tex_color");
    world_u_tex_shadowmap = glGetUniformLocation(world_program, "tex_shadowmap");
    world_u_tex_material = glGetUniformLocation(world_program, "tex_material");
    world_u_tex_cubemap = glGetUniformLocation(world_program, "tex_cubemap");
    world_u_tex_atlas_color = glGetUniformLocation(world_program, "tex_atlas_color");
    world_u_tex_atlas_material = glGetUniformLocation(world_program, "tex_atlas_material");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(world_u_ooresolution, 1, resolution);
    glUniform1i(world_u_tex_color, 0);
    glUniform1i(world_u_tex_shadowmap, 1);
    glUniform1i(world_u_tex_material, 2);
    glUniform1i(world_u_tex_cubemap, 3);
    glUniform1i(world_u_tex_atlas_color, 4);
    glUniform1i(world_u_tex_atlas_material, 5);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(1, (__int64)(uintptr_t)object_vertex_source, (__int64)(uintptr_t)object_fragment_source, 0) )
  {
    glUseProgram(object_program);
    object_u_clipplane = glGetUniformLocation(object_program, "clipplane");
    object_u_ooresolution = glGetUniformLocation(object_program, "ooresolution");
    object_u_viewposition = glGetUniformLocation(object_program, "viewposition");
    object_u_lightdirection = glGetUniformLocation(object_program, "lightdirection");
    object_u_isreflection = glGetUniformLocation(object_program, "isreflection");
    object_u_planeposition = glGetUniformLocation(object_program, "planeposition");
    object_u_planenormal = glGetUniformLocation(object_program, "planenormal");
    object_u_modelviewprojectionmatrix = glGetUniformLocation(object_program, "modelviewprojectionmatrix");
    object_u_lightambient = glGetUniformLocation(object_program, "lightambient");
    object_u_lightdiffuse = glGetUniformLocation(object_program, "lightdiffuse");
    object_u_tex_color = glGetUniformLocation(object_program, "tex_color");
    object_u_tex_shadowmap = glGetUniformLocation(object_program, "tex_shadowmap");
    object_u_tex_material = glGetUniformLocation(object_program, "tex_material");
    object_u_tex_cubemap = glGetUniformLocation(object_program, "tex_cubemap");
    object_u_flags = glGetUniformLocation(object_program, "flags");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(object_u_ooresolution, 1, resolution);
    glUniform1i(object_u_tex_color, 0);
    glUniform1i(object_u_tex_shadowmap, 1);
    glUniform1i(object_u_tex_material, 2);
    glUniform1i(object_u_tex_cubemap, 3);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(2, (__int64)(uintptr_t)lit_vertex_source, (__int64)(uintptr_t)lit_fragment_source, 0) )
  {
    glUseProgram(lit_program);
    lit_u_ooresolution = glGetUniformLocation(lit_program, "ooresolution");
    lit_u_viewposition = glGetUniformLocation(lit_program, "viewposition");
    lit_u_lightdirection = glGetUniformLocation(lit_program, "lightdirection");
    lit_u_modelviewprojectionmatrix = glGetUniformLocation(lit_program, "modelviewprojectionmatrix");
    lit_u_lightambient = glGetUniformLocation(lit_program, "lightambient");
    lit_u_lightdiffuse = glGetUniformLocation(lit_program, "lightdiffuse");
    lit_u_tex_color = glGetUniformLocation(lit_program, "tex_color");
    lit_u_tex_cubemap = glGetUniformLocation(lit_program, "tex_cubemap");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(lit_u_ooresolution, 1, resolution);
    glUniform1i(lit_u_tex_color, 0);
    glUniform1i(lit_u_tex_cubemap, 1);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(3, (__int64)(uintptr_t)model_vertex_source, (__int64)(uintptr_t)model_fragment_source, 0) )
  {
    glUseProgram(model_program);
    model_u_ooresolution = glGetUniformLocation(model_program, "ooresolution");
    model_u_viewposition = glGetUniformLocation(model_program, "viewposition");
    model_u_objposition = glGetUniformLocation(model_program, "objposition");
    model_u_objorientation = glGetUniformLocation(model_program, "objorientation");
    model_u_modelviewprojectionmatrix = glGetUniformLocation(model_program, "modelviewprojectionmatrix");
    model_u_lightdirection = glGetUniformLocation(model_program, "lightdirection");
    model_u_lightambient = glGetUniformLocation(model_program, "lightambient");
    model_u_lightdiffuse = glGetUniformLocation(model_program, "lightdiffuse");
    model_u_viewdirection = glGetUniformLocation(model_program, "viewdirection");
    model_u_tex_color = glGetUniformLocation(model_program, "tex_color");
    model_u_tex_shadowmap = glGetUniformLocation(model_program, "tex_shadowmap");
    model_u_tex_cubemap = glGetUniformLocation(model_program, "tex_cubemap");
    model_u_flags = glGetUniformLocation(model_program, "flags");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(model_u_ooresolution, 1, resolution);
    glUniform1i(model_u_tex_color, 0);
    glUniform1i(model_u_tex_shadowmap, 1);
    glUniform1i(model_u_tex_cubemap, 2);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(4, (__int64)(uintptr_t)skin_vertex_source, (__int64)(uintptr_t)skin_fragment_source, 0) )
  {
    glTransformFeedbackVaryings(skin_program, 3, off_140301DB0, 35980);
    glLinkProgram(skin_program);
    glUseProgram(skin_program);
    skin_u_boneorgposition = glGetUniformLocation(skin_program, "boneorgposition");
    skin_u_boneposition = glGetUniformLocation(skin_program, "boneposition");
    skin_u_boneorientation = glGetUniformLocation(skin_program, "boneorientation");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(5, (__int64)(uintptr_t)land_mask_vertex_source, (__int64)(uintptr_t)land_mask_fragment_source, 0) )
  {
    glUseProgram(land_mask_program);
    land_mask_u_modelviewprojectionmatrix = glGetUniformLocation(land_mask_program, "modelviewprojectionmatrix");
    land_mask_u_modelviewmatrix = glGetUniformLocation(land_mask_program, "modelviewmatrix");
    land_mask_u_land_usemask = glGetUniformLocation(land_mask_program, "land_usemask");
    land_mask_u_tex_mask = glGetUniformLocation(land_mask_program, "tex_mask");
    glUniform1i(land_mask_u_tex_mask, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(6, (__int64)(uintptr_t)sky_vertex_source, (__int64)(uintptr_t)sky_fragment_source, 0) )
  {
    glUseProgram(sky_program);
    sky_u_atmoconstant = glGetUniformLocation(sky_program, "atmoconstant");
    sky_u_atmowavelength = glGetUniformLocation(sky_program, "atmowavelength");
    sky_u_worldposition = glGetUniformLocation(sky_program, "worldposition");
    sky_u_ooresolution = glGetUniformLocation(sky_program, "ooresolution");
    sky_u_lightdirection = glGetUniformLocation(sky_program, "lightdirection");
    sky_u_modelviewprojectionmatrix = glGetUniformLocation(sky_program, "modelviewprojectionmatrix");
    sky_u_numofsamples = glGetUniformLocation(sky_program, "numofsamples");
    glUniform4fv(sky_u_atmoconstant, 1, &unk_1402F61B8);
    glUniform3fv(sky_u_atmowavelength, 1, &unk_1402F61C8);
    glUniform1i(sky_u_numofsamples, 4);
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(sky_u_ooresolution, 1, resolution);
    sky_u_tex_depth = glGetUniformLocation(sky_program, "tex_depth");
    glUniform1i(sky_u_tex_depth, 0);
    sky_u_flags = glGetUniformLocation(sky_program, "flags");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(7, (__int64)(uintptr_t)blur_vertex_source, (__int64)(uintptr_t)blur_fragment_source, 0) )
  {
    glUseProgram(blur_program);
    blur_u_ooresolution = glGetUniformLocation(blur_program, "ooresolution");
    blur_u_sampledir = glGetUniformLocation(blur_program, "sampledir");
    blur_u_blurfilter = glGetUniformLocation(blur_program, "blurfilter");
    blur_u_blurfilter2 = glGetUniformLocation(blur_program, "blurfilter2");
    blur_u_modelviewprojectionmatrix = glGetUniformLocation(blur_program, "modelviewprojectionmatrix");
    blur_u_tex_color = glGetUniformLocation(blur_program, "tex_color");
    resolution[0] = 1.0f / (float)(int)g_182A7D55C;
    resolution[1] = 1.0f / (float)(int)g_182A7D560;
    glUniform2fv(blur_u_ooresolution, 1, resolution);
    glUniform1i(blur_u_tex_color, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(8, (__int64)(uintptr_t)terrain_vertex_source, (__int64)(uintptr_t)terrain_fragment_source, 0) )
  {
    glUseProgram(terrain_program);
    terrain_u_lightdirection = glGetUniformLocation(terrain_program, "lightdirection");
    terrain_u_lightambient = glGetUniformLocation(terrain_program, "lightambient");
    terrain_u_lightdiffuse = glGetUniformLocation(terrain_program, "lightdiffuse");
    terrain_u_viewposition = glGetUniformLocation(terrain_program, "viewposition");
    terrain_u_modelviewprojectionmatrix = glGetUniformLocation(terrain_program, "modelviewprojectionmatrix");
    terrain_u_land_usemask = glGetUniformLocation(terrain_program, "land_usemask");
    terrain_u_tex_normal = glGetUniformLocation(terrain_program, "tex_normal");
    terrain_u_tex_detail = glGetUniformLocation(terrain_program, "tex_detail");
    terrain_u_tex_color = glGetUniformLocation(terrain_program, "tex_color");
    terrain_u_tex_mask = glGetUniformLocation(terrain_program, "tex_mask");
    terrain_u_tex_shadow = glGetUniformLocation(terrain_program, "tex_shadow");
    glUniform1i(terrain_u_tex_normal, 0);
    glUniform1i(terrain_u_tex_detail, 1);
    glUniform1i(terrain_u_tex_color, 2);
    glUniform1i(terrain_u_tex_mask, 3);
    glUniform1i(terrain_u_tex_shadow, 4);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(
                       9,
                       (__int64)(uintptr_t)shadow_vertex_source,
                       (__int64)(uintptr_t)shadow_fragment_source,
                       (__int64)(uintptr_t)sr_mem_1402ff550) )
  {
    glUseProgram(shadow_program);
    shadow_u_modelmatrix = glGetUniformLocation(shadow_program, "modelmatrix");
    shadow_u_modelviewprojectionmatrix = glGetUniformLocation(shadow_program, "modelviewprojectionmatrix");
    shadow_u_lightdirection = glGetUniformLocation(shadow_program, "lightdirection");
    shadow_u_shadowlength = glGetUniformLocation(shadow_program, "shadowlength");
    shadow_u_projectionmatrix = glGetUniformLocation(shadow_program, "projectionmatrix");
    shadow_u_viewmatrix = glGetUniformLocation(shadow_program, "viewmatrix");
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(10, (__int64)(uintptr_t)texture_lod_vertex_source, (__int64)(uintptr_t)texture_lod_fragment_source, 0) )
  {
    glUseProgram(texture_lod_program);
    texture_lod_u_modelviewprojectionmatrix = glGetUniformLocation(texture_lod_program, "modelviewprojectionmatrix");
    texture_lod_u_texlod = glGetUniformLocation(texture_lod_program, "texlod");
    texture_lod_u_tex_color = glGetUniformLocation(texture_lod_program, "tex_color");
    glUniform1i(texture_lod_u_tex_color, 0);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(11, (__int64)(uintptr_t)hdr_vertex_source, (__int64)(uintptr_t)hdr_fragment_source, 0) )
  {
    glUseProgram(hdr_program);
    hdr_u_tex_hdrcolor = glGetUniformLocation(hdr_program, "tex_hdrcolor");
    hdr_u_tex_hdrbloom = glGetUniformLocation(hdr_program, "tex_hdrbloom");
    glUniform1i(hdr_u_tex_hdrcolor, 0);
    glUniform1i(hdr_u_tex_hdrbloom, 1);
    glUseProgram(0);
  }
  if ( (unsigned int)shader_compile_program(12, (__int64)(uintptr_t)water_vertex_source, (__int64)(uintptr_t)water_fragment_source, 0) )
  {
    glUseProgram(water_program);
    water_u_modelviewprojectionmatrix = glGetUniformLocation(water_program, "modelviewprojectionmatrix");
    water_u_texturematrix = glGetUniformLocation(water_program, "texturematrix");
    water_u_waterangle = glGetUniformLocation(water_program, "waterangle");
    water_u_flags = glGetUniformLocation(water_program, "flags");
    water_u_tex_color = glGetUniformLocation(water_program, "tex_color");
    glUniform1i(water_u_tex_color, 0);
    glUseProgram(0);
  }
  close_status = -1;
  do
    ++close_status;
  while ( *((_BYTE *)&g_1515B0BC0 + close_status) );
  if ( close_status )
  {
    file_handle = crt_fopen("shaderoutput.txt", "wb");
    file_handle_2 = file_handle;
    close_status = file_handle;
    if ( file_handle )
    {
      sub_1400920F0(file_handle, (     char *)&g_1515B0BC0);
      close_status = crt_fclose(file_handle_2);
    }
  }
  return close_status; /* native strlen, fopen-failure or fclose RAX */
}

#undef unused_frame_slot_0
#undef unused_frame_slot_48

//----- (000000014014D3E0) ----------------------------------------------------
void            sub_14014D3E0(int a1, int a2)
{
  __int64 record_word_offset;
  int table_value;
  int iteration_count;
  unsigned int *state_address;
  signed int iteration_count_2;
  void **buffer_cursor;

  record_word_offset = 44LL * a1;
  glBindTexture(3553, dword_140404A6C[record_word_offset + 284024944]);
  glTexParameteri(3553,
    10242,
    dword_140404A6C[record_word_offset + 284024938]);
  glTexParameteri(3553,
    10243,
    dword_140404A6C[record_word_offset + 284024939]);
  glTexParameteri(3553,
    10240,
    dword_140404A6C[record_word_offset + 284024940]);
  glTexParameteri(3553,
    10241,
    dword_140404A6C[record_word_offset + 284024941]);
  table_value = dword_140404A6C[record_word_offset + 284024935];
  iteration_count = 0;
  if ( table_value > 0 )
  {
    state_address = &dword_140404A6C[record_word_offset + 284024945];
    do
    {
      glTexImage2D(3553,
        (unsigned int)iteration_count,
        dword_140404A6C[record_word_offset + 284024937],
        (unsigned int)((int)dword_140404A6C[record_word_offset + 284024933] >> iteration_count),
        (int)dword_140404A6C[record_word_offset + 284024934] >> iteration_count,
        0,
        dword_140404A6C[record_word_offset + 284024936],
        5121,
        *(_QWORD *)state_address);
      table_value = dword_140404A6C[record_word_offset + 284024935];
      state_address += 2;
      ++iteration_count;
    }
    while ( iteration_count < table_value );
  }
  if ( a2 )
  {
    iteration_count_2 = 0;
    if ( table_value > 0 )
    {
      buffer_cursor = (void **)&dword_140404A6C[record_word_offset + 284024945];
      do
      {
        if ( *buffer_cursor )
        {
          free(*buffer_cursor);
          *buffer_cursor = nullptr;
        }
        ++iteration_count_2;
        ++buffer_cursor;
      }
      while ( iteration_count_2 < (int)dword_140404A6C[record_word_offset + 284024935] );
    }
  }
}

//----- (0000000140187860) ----------------------------------------------------
void            sub_140187860(int a1, float a2, float a3, float a4)
{
  int iteration_count;
  __int128 masked_bits;
  __int128 saved_masked_bits;
  __int128 masked_bits_2;
  unsigned int shifted_bits;
  unsigned int masked_bits_3;
  __int128 masked_bits_4;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 void_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187860[16];
#define position (*(float (*))(void *)(sr_frame_140187860 + 0)) /* [rsp+20h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140187860 + 4)) /* [rsp+24h] */

  iteration_count = 0;
  /* x arrives in xmm1 (0x14018788A movaps xmm10, xmm1), y in xmm2 (0x1401878A8 movaps xmm14, xmm2); Hex-Rays had
     lost both (v4, v5) and typed the parameters as integers */
  masked_bits = 0;
  saved_masked_bits = 0;
  *(float *)&masked_bits = a2;
  *(float *)&saved_masked_bits = a3;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  do
  {
    position = *(float *)&masked_bits;
    masked_bits_2 = saved_masked_bits;
    g_1AD299450 = xmmword_140279700;
    *(float *)&shifted_bits = (float)((iteration_count + a1) >> 4) * 0.0625;
    unused_written_slot = *(float *)&saved_masked_bits + a4;
    *(float *)&masked_bits_3 = (float)(((_BYTE)iteration_count + (_BYTE)a1) & 0xF) * 0.0625;
    g_1AD299460 = masked_bits_3;
    *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
    sr_renderer_batch_vertex2fv((unsigned int *)&position, a2, a3);
    masked_bits_4 = masked_bits;
    *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
    position = *(float *)&masked_bits + a4;
    *(float *)&g_1AD299460 = *(float *)&masked_bits_3 + 0.0625;
    sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value, unrecovered_register_value_2);
    unused_written_slot = *(float *)&saved_masked_bits;
    *(float *)&g_1AD299460 = *(float *)&masked_bits_3 + 0.0625;
    g_1AD299464 = shifted_bits;
    sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_3, unrecovered_register_value_4);
    position = *(float *)&masked_bits;
    g_1AD299460 = masked_bits_3;
    g_1AD299464 = shifted_bits;
    sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_5, unrecovered_register_value_6);
    if ( (iteration_count & 0xFFFFFFFD) != 0 )
    {
      *(float *)&masked_bits = *(float *)&masked_bits - a4;
      *(float *)&masked_bits_2 = *(float *)&saved_masked_bits + a4;
      saved_masked_bits = masked_bits_2;
    }
    else
    {
      *(float *)&masked_bits_4 = *(float *)&masked_bits + a4;
      masked_bits = masked_bits_4;
    }
    ++iteration_count;
  }
  while ( iteration_count < 4 );
  sr_renderer_batch_flush(void_2, a2, a3);
}
#undef position
#undef unused_written_slot

//----- (0000000140187A40) ----------------------------------------------------
void            sub_140187A40(_BYTE *a1, __int64 a2, float a3, float a4, float a5)
{
  float input_value = a3; // xmm2_4: x arrives in xmm2 (0x140187A89 movaps xmm15, xmm2); Hex-Rays had lost it
  float component_sum;
  _BYTE *buffer_cursor;
  float input_value_2;
  int integer_difference;
  __int64 scaled_index;
  unsigned int shifted_bits;
  unsigned int masked_bits;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187A40[16];
#define position (*(float (*))(void *)(sr_frame_140187A40 + 0)) /* [rsp+D0h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140187A40 + 4)) /* [rsp+D4h] */

  component_sum = 0.0;
  g_1AD059440 = 1;
  g_1AD059448 = 0;
  g_1AD05944C = 9;
  if ( *a1 )
  {
    buffer_cursor = a1;
    input_value_2 = a5;
    do
    {
      if ( buffer_cursor - a1 >= 1000 )
        break;
      integer_difference = 39;
      g_1AD299450 = xmmword_140279700;
      scaled_index = (unsigned __int8)*buffer_cursor;
      if ( (unsigned __int8)(scaled_index - 65) <= 0x19u )
        integer_difference = scaled_index - 52;
      *(float *)&shifted_bits = (float)(integer_difference >> 4) * 0.0625;
      position = component_sum + input_value;
      *(float *)&masked_bits = (float)(integer_difference & 0xF) * 0.0625;
      unused_written_slot = a4 + input_value_2;
      g_1AD299460 = masked_bits;
      *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, scaled_index, a3);
      *(float *)&g_1AD299464 = *(float *)&shifted_bits + 0.0625;
      position = (float)(component_sum + input_value) + input_value_2;
      *(float *)&g_1AD299460 = *(float *)&masked_bits + 0.0625;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value, unrecovered_register_value_2);
      unused_written_slot = a4;
      *(float *)&g_1AD299460 = *(float *)&masked_bits + 0.0625;
      g_1AD299464 = shifted_bits;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_3, unrecovered_register_value_4);
      position = component_sum + input_value;
      g_1AD299460 = masked_bits;
      g_1AD299464 = shifted_bits;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_5, unrecovered_register_value_6);
      ++buffer_cursor;
      component_sum = component_sum + input_value_2;
    }
    while ( *buffer_cursor );
  }
  sr_renderer_batch_flush((__int64)a1, a2, a3);
}
#undef position
#undef unused_written_slot

//----- (0000000140187C70) ----------------------------------------------------
void            sub_140187C70(__int64 a1, __int64 a2, float a3, float a4, float a5)
{
  float input_value = a3; // xmm2_4: x arrives in xmm2 (0x140187CBB movaps xmm11, xmm2); Hex-Rays had lost it
  __int64 input_value_2;
  float weighted_sum;
  __int64 integer_difference;
  _BYTE *buffer_cursor;
  float input_value_3;
  unsigned __int64 shifted_bits;
  int scaled_index;
  __int64 scaled_index_2;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 scaled_index_3;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __int64 table_value;
  __int64 scaled_index_4;
  unsigned int table_value_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 scaled_index_5;
  __int64 scaled_index_6;
  unsigned int table_value_3;
  __int64 unrecovered_register_value_9;
  __int64 scaled_index_7;
  __int64 scaled_index_8;
  unsigned int table_value_4;
  __int64 unrecovered_register_value_10;
  __int64 scaled_index_9;
  unsigned int table_value_5;
  __int64 unrecovered_register_value_11;
  __int64 unrecovered_register_value_12;
  __int64 scaled_index_10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140187C70[16];
#define position (*(float (*))(void *)(sr_frame_140187C70 + 0)) /* [rsp+B0h] */
#define unused_written_slot (*(float (*))(void *)(sr_frame_140187C70 + 4)) /* [rsp+B4h] */

  g_1AD059440 = 1;
  input_value_2 = a1;
  g_1AD059448 = 0;
  weighted_sum = 0.0;
  g_1AD05944C = 9;
  if ( *(_BYTE *)a1 )
  {
    integer_difference = a2 - a1;
    buffer_cursor = (_BYTE *)a1;
    input_value_3 = a5;
    do
    {
      if ( (__int64)&buffer_cursor[-input_value_2] >= 1000 )
        break;
      shifted_bits = (unsigned __int64)(unsigned __int8)buffer_cursor[integer_difference] >> 4;
      unused_written_slot = a4;
      *(_QWORD *)&g_1AD29945C = 1065353216;
      g_1AD299464 = 0;
      scaled_index = dword_1402B2550[3 * shifted_bits];
      shifted_bits *= 3LL;
      *(unsigned int *)&g_1AD299450 = scaled_index;
      g_1AD299454 = dword_1402B2554[shifted_bits];
      g_1AD299458 = dword_1402B2558[shifted_bits];
      position = weighted_sum + input_value;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, a2, a3);
      scaled_index_2 = (unsigned __int8)*buffer_cursor;
      *(_QWORD *)&g_1AD299460 = 0;
      position = (float)(input_value_3 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + scaled_index_2])
          + (float)(weighted_sum + input_value);
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value, unrecovered_register_value_2);
      scaled_index_3 = (unsigned __int8)*buffer_cursor;
      *(_QWORD *)&g_1AD299460 = 0;
      unused_written_slot = a4 + input_value_3;
      position = (float)(input_value_3 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + scaled_index_3])
          + (float)(weighted_sum + input_value);
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_3, unrecovered_register_value_4);
      position = weighted_sum + input_value;
      *(_QWORD *)&g_1AD299460 = 0;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_5, unrecovered_register_value_6);
      table_value = buffer_cursor[integer_difference] & 0xF;
      g_1AD29945C = 1065353216;
      unused_written_slot = a4;
      *(unsigned int *)&g_1AD299450 = dword_1402B2550[3 * table_value];
      g_1AD299454 = dword_1402B2554[3 * table_value];
      g_1AD299458 = dword_1402B2558[3 * table_value];
      scaled_index_4 = 8 * ((unsigned __int8)*buffer_cursor + 449LL * (int)renderer_current_font);
      table_value_2 = dword_140404A6C[scaled_index_4 + 72777350];
      g_1AD299460 = dword_140404A6C[scaled_index_4 + 72777349];
      g_1AD299464 = table_value_2;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_7, unrecovered_register_value_8);
      scaled_index_5 = (unsigned __int8)*buffer_cursor;
      position = (float)(input_value_3 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + scaled_index_5])
          + (float)(weighted_sum + input_value);
      scaled_index_6 = 8 * (scaled_index_5 + 449LL * (int)renderer_current_font);
      table_value_3 = dword_140404A6C[scaled_index_6 + 72777351];
      g_1AD299464 = dword_140404A6C[scaled_index_6 + 72777352];
      g_1AD299460 = table_value_3;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, scaled_index_5, unrecovered_register_value_9);
      scaled_index_7 = (unsigned __int8)*buffer_cursor;
      unused_written_slot = a4 + input_value_3;
      position = (float)(input_value_3 * *(float *)&dword_140404A6C[3592 * (int)renderer_current_font + 72777093 + scaled_index_7])
          + (float)(weighted_sum + input_value);
      scaled_index_8 = 8 * (scaled_index_7 + 449LL * (int)renderer_current_font);
      table_value_4 = dword_140404A6C[scaled_index_8 + 72777354];
      g_1AD299460 = dword_140404A6C[scaled_index_8 + 72777353];
      g_1AD299464 = table_value_4;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, scaled_index_7, unrecovered_register_value_10);
      position = weighted_sum + input_value;
      scaled_index_9 = 8 * ((unsigned __int8)*buffer_cursor + 449LL * (int)renderer_current_font);
      table_value_5 = dword_140404A6C[scaled_index_9 + 72777356];
      g_1AD299460 = dword_140404A6C[scaled_index_9 + 72777355];
      g_1AD299464 = table_value_5;
      sr_renderer_batch_vertex2fv((unsigned int *)&position, unrecovered_register_value_11, unrecovered_register_value_12);
      scaled_index_10 = (unsigned __int8)*buffer_cursor++;
      a1 = scaled_index_10 + 3592LL * (int)renderer_current_font;
      weighted_sum = weighted_sum + (float)(input_value_3 * *(float *)&dword_140404A6C[a1 + 72777093]);
    }
    while ( *buffer_cursor );
  }
  sr_renderer_batch_flush(a1, a2, a3);
}
#undef position
#undef unused_written_slot

//----- (0000000140189E80) ----------------------------------------------------
double            sub_140189E80(int a1, __int64 a2, __int64 a3)
{
  __int64 unused_local;
  __int64 unused_local_2;
  __int64 unused_local_3;
  __int64 selection_code;
  __int64 unused_local_4;
  __int64 selection_code_2;
  __int64 unrecovered_register_value;
  __int64 selection_code_3;

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      glUniformMatrix4fv(land_mask_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
      glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
      glEnableVertexAttribArray(0);
      glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    }
    else
    {
      glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
    }
  }
  else
  {
    glUseProgram(world_program);
    glUniform3fv(world_u_viewposition, 1, (unsigned int *)&g_183F7C544);
    glUniform3fv(world_u_lightdirection, 1, (unsigned int *)&g_18417DE78);
    glUniform3fv(world_u_lightambient, 1, (unsigned int *)&g_184178D40);
    glUniform3fv(world_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
    glUniformMatrix4fv(world_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
    glActiveTexture(33984);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBC404 + 284024944]);
    glActiveTexture(33985);
    glBindTexture(3553, dword_140404A6C[44 * shading_texture + 284024944]);
    glActiveTexture(33986);
    glBindTexture(3553, dword_140404A6C[44 * g_183EBC408 + 284024944]);
    glActiveTexture(33987);
    glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
    glActiveTexture(33988);
    glBindTexture(35866, dword_140404A6C[44 * g_183EBC41C + 284024944]);
    glActiveTexture(33989);
    glBindTexture(35866, dword_140404A6C[44 * g_183EBC420 + 284024944]);
    glActiveTexture(33984);
    glBindBuffer(34962, dword_140404A6C[2 * g_183E977A4 + 283793813]);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    /* 0x14018A05F: position at 0, texcoord at 12, normal at 20 (rsi = 0). */
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(12));
    glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(20));
  }
  glDrawArrays(4, 0, g_195AD08C4);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E977A8 + 283793813]);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_11;
    selection_code = 0;
  }
  else
  {
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(12));
    selection_code = 2;
  }
  glVertexAttribPointer(selection_code, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08C0),(const void *)(intptr_t)(selection_code==0?0:20));
LABEL_11:
  glBindTexture(3553, dword_140404A6C[44 * g_183EBC424 + 284024944]);
  glDrawArrays(4, 0, g_195AD08CC);
  glBindBuffer(34962, dword_140404A6C[2 * g_183E977AC + 283793813]);
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_16;
    selection_code_2 = 0;
  }
  else
  {
    /* 0x14018A289: the third mesh uses its own stride at 0x195AD08D0. */
    glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(0));
    glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(12));
    selection_code_2 = 2;
  }
  glVertexAttribPointer(selection_code_2, 3, 5126,0,(int)(uint32_t)(4u*g_195AD08D0),(const void *)(intptr_t)(selection_code_2==0?0:20));
LABEL_16:
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * resting_texture_1 + 284024944]);
  glActiveTexture(33986);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBC418 + 284024944]);
  glActiveTexture(33984);
  glDrawArrays(4, 0, g_195AD08D4);
  if ( !a1 )
  {
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    selection_code_3 = 2;
LABEL_20:
    glDisableVertexAttribArray(selection_code_3);
    return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, unrecovered_register_value);
  }
  if ( a1 == 1 )
  {
    selection_code_3 = 0;
    goto LABEL_20;
  }
  return ((double (*)(_QWORD, _QWORD, _QWORD))glBindBuffer)(34962, 0, unrecovered_register_value);
}

//----- (00000001401945F0)

__int64 sub_1401945F0()
{
  float *buffer_cursor;
  float *record_byte_offset;
  signed __int64 state_address;
  __int64 remaining_count;
  float product_difference;
  __int64 remaining_count_2;
  float scaled_value;
  float source_component_y;
  float source_component_z;
  __int64 scaled_index;
  __int64 unused_local;
  _DWORD scratch_buffer[10];
  __int64 unused_written_slot;
  _Alignas(16) unsigned sr_screen_sample_matrix[16];
  _DWORD scratch_buffer_2[1048];
  _Alignas(16) unsigned sr_screen_sample_result[16];
  _DWORD scratch_buffer_3[1024];
  __int64 unused_local_2;

  glUseProgram(water_program);
  scratch_buffer_2[0] = *(unsigned int *)&game_spin_angle;
  scratch_buffer_2[1] = *(unsigned int *)&game_spin_angle;
  scratch_buffer_2[2] = *(unsigned int *)&game_spin_angle;
  glUniformMatrix4fv(water_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glUniform3fv(water_u_waterangle, 1, scratch_buffer_2);
  glUniform1i(water_u_flags, BYTE2(g_183F7C968) != 0);
  HIDWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1065353216;
  buffer_cursor = (float *)&(*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = xmmword_140278E20;
  record_byte_offset = (float *)&g_1A724E6C4;
  state_address = (char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), u64)[2] - (char *)&(*(__m256i *)(void *)sr_screen_sample_result);
  *(__int64 *)((char *)SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64) + 4) = 0;
  *(__int64 *)((char *)&SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[1] + 4) = 0;
  remaining_count = 4;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i64)[3] = 0;
  *(_QWORD *)((char *)&(*(__int128 *)(void *)(sr_screen_sample_matrix+12)) + 4) = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[0] = 1056964608;
  SR_VEC_LANES(256, (*(__m256i *)(void *)sr_screen_sample_matrix), i32)[5] = 1056964608;
  LODWORD((*(__int128 *)(void *)(sr_screen_sample_matrix+12))) = 1056964608;
  do
  {
    product_difference = *(record_byte_offset - 1);
    remaining_count_2 = 4;
    scaled_value = *record_byte_offset;
    source_component_y = record_byte_offset[1];
    source_component_z = record_byte_offset[2];
    do
    {
      *buffer_cursor = (float)((float)((float)(product_difference * *(float *)((char *)buffer_cursor + state_address - 16)) + (float)(scaled_value * *(float *)((char *)buffer_cursor + state_address)))
                  + (float)(source_component_y * *(float *)((char *)buffer_cursor + state_address + 16)))
          + (float)(source_component_z * *(float *)((char *)buffer_cursor + state_address + 32));
      ++buffer_cursor;
      --remaining_count_2;
    }
    while ( remaining_count_2 );
    record_byte_offset += 4;
    state_address -= 16LL;
    --remaining_count;
  }
  while ( remaining_count );
  (*(__m256i *)(void *)sr_screen_sample_matrix) = (*(__m256i *)(void *)sr_screen_sample_result);
  (*(__int128 *)(void *)(sr_screen_sample_matrix+8)) = (*(__int128 *)(void *)(sr_screen_sample_result+8));
  (*(__int128 *)(void *)(sr_screen_sample_matrix+12)) = (*(__int128 *)(void *)(sr_screen_sample_result+12));
  glUniformMatrix4fv(water_u_texturematrix, 1, 0, &(*(__m256i *)(void *)sr_screen_sample_matrix));
  glBindTexture(3553, dword_140404A6C[44 * g_183EBE428 + 284024944]);
  scratch_buffer_3[0] = g_16D482820;
  scratch_buffer_3[2] = g_16D482828;
  scratch_buffer_3[5] = g_16D482828;
  scaled_index = dword_140404A6C[2 * effect_mesh_buffer + 283793813];
  scratch_buffer_3[9] = g_16D482820;
  scratch_buffer_3[1] = 1102577664;
  scratch_buffer_3[3] = 1157627904;
  scratch_buffer_3[4] = 1102577664;
  scratch_buffer_3[6] = 1157627904;
  scratch_buffer_3[7] = 1102577664;
  scratch_buffer_3[8] = 1157627904;
  scratch_buffer_3[10] = 1102577664;
  scratch_buffer_3[11] = 1157627904;
  glBindBuffer(34962, scaled_index);
  glBufferSubData(34962, 0, 48, scratch_buffer_3);
  glEnableVertexAttribArray(0);
  unused_written_slot = 0;
  scratch_buffer[8] = 12;
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)(12),(const void *)(intptr_t)(0));
  glDrawArrays(6, 0, 4);
  glDisableVertexAttribArray(0);
  return 0; /* compatibility result discarded by all reviewed callers */
}
//----- (0000000140196D60) ----------------------------------------------------
__int64            sub_140196D60(char *Buffer, FILE *Stream, int a3)
{
  int input_value;
  char *byte_cursor;
  char *byte_cursor_2;
  char *byte_cursor_3;
  char *byte_cursor_4;
  int i;
  char *destination_buffer;
  char *destination_buffer_2;
  int j;
  char *destination_buffer_3;
  char *destination_buffer_4;
  int k;
  char *destination_buffer_5;
  char *destination_buffer_6;
  int m;
  char *destination_buffer_7;
  int iteration_count;
  int cached_n;
  int iteration_count_2;
  __int64 shifted_bits;
  __int64 scaled_index;
  char *destination_buffer_8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140196D60[128];
#define integer_sum (*(int (*))(void *)(sr_frame_140196D60 + 0)) /* [rsp+20h] */
#define destination_buffer_9 (*(int (*))(void *)(sr_frame_140196D60 + 104)) /* [rsp+88h] */
#define input_value_2 (*(int (*))(void *)(sr_frame_140196D60 + 112)) /* [rsp+90h] */
#define n (*(int (*))(void *)(sr_frame_140196D60 + 120)) /* [rsp+98h] */

  input_value_2 = a3;
  input_value = a3;
  if ( !Stream )
    return 0;
  destination_buffer_9 = 1;
  if ( a3 )
  {
    crt_fread((__int64)&destination_buffer_9, 4, 1, (__int64)Stream);
    crt_fread((__int64)Buffer, 1, 64, (__int64)Stream);
    byte_cursor = Buffer + 64;
    crt_fread((__int64)(Buffer + 64), 4, 1, (__int64)Stream);
    byte_cursor_2 = Buffer + 68;
    crt_fread((__int64)(Buffer + 68), 4, 1, (__int64)Stream);
    byte_cursor_3 = Buffer + 72;
    crt_fread((__int64)(Buffer + 72), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 76), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 80), 4, 1, (__int64)Stream);
    crt_fread((__int64)(Buffer + 84), 4, 1, (__int64)Stream);
    byte_cursor_4 = Buffer + 47187628;
    crt_fread((__int64)(Buffer + 47187628), 4, 1, (__int64)Stream);
    goto LABEL_6;
  }
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 17) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  fread_sr((void *)(uintptr_t)(&destination_buffer_9), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( destination_buffer_9 != 1 )
    return 0;
  fread_sr((void *)(uintptr_t)(Buffer), 1, 64, (FILE *)(uintptr_t)(Stream));
  byte_cursor = Buffer + 64;
  fread_sr((void *)(uintptr_t)(Buffer + 64), 4, 1, (FILE *)(uintptr_t)(Stream));
  byte_cursor_2 = Buffer + 68;
  fread_sr((void *)(uintptr_t)(Buffer + 68), 4, 1, (FILE *)(uintptr_t)(Stream));
  byte_cursor_3 = Buffer + 72;
  fread_sr((void *)(uintptr_t)(Buffer + 72), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 76), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 80), 4, 1, (FILE *)(uintptr_t)(Stream));
  fread_sr((void *)(uintptr_t)(Buffer + 84), 4, 1, (FILE *)(uintptr_t)(Stream));
  byte_cursor_4 = Buffer + 47187628;
  fread_sr((void *)(uintptr_t)(Buffer + 47187628), 4, 1, (FILE *)(uintptr_t)(Stream));
LABEL_6:
  for ( i = 0; i < *(_DWORD *)byte_cursor_4; ++i )
  {
    destination_buffer = &Buffer[64 * (__int64)i + 47187632];
    if ( input_value )
      crt_fread((__int64)destination_buffer, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(destination_buffer), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  destination_buffer_2 = Buffer + 47208112;
  if ( input_value )
    crt_fread((__int64)destination_buffer_2, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(destination_buffer_2), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
  {
    destination_buffer_3 = &Buffer[64 * (__int64)j + 47208116];
    if ( input_value )
      crt_fread((__int64)destination_buffer_3, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(destination_buffer_3), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  destination_buffer_4 = Buffer + 47277748;
  if ( input_value )
    crt_fread((__int64)destination_buffer_4, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(destination_buffer_4), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
  {
    destination_buffer_5 = &Buffer[64 * (__int64)k + 47277752];
    if ( input_value )
      crt_fread((__int64)destination_buffer_5, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(destination_buffer_5), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  destination_buffer_6 = Buffer + 47282872;
  if ( input_value )
    crt_fread((__int64)destination_buffer_6, 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(destination_buffer_6), 4, 1, (FILE *)(uintptr_t)(Stream));
  for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
  {
    destination_buffer_7 = &Buffer[64 * (__int64)m + 47282876];
    if ( input_value )
      crt_fread((__int64)destination_buffer_7, 1, 64, (__int64)Stream);
    else
      fread_sr((void *)(uintptr_t)(destination_buffer_7), 1, 64, (FILE *)(uintptr_t)(Stream));
  }
  iteration_count = 0;
  integer_sum = 0;
  if ( *(int *)byte_cursor_3 > 0 )
  {
    do
    {
      cached_n = 0;
      for ( n = 0; cached_n <= *(_DWORD *)byte_cursor_2; n = cached_n )
      {
        iteration_count_2 = 0;
        if ( *(int *)byte_cursor >= 0 )
        {
          shifted_bits = (cached_n + ((__int64)iteration_count << 6)) << 6;
          do
          {
            scaled_index = 60 * (shifted_bits + iteration_count_2);
            destination_buffer_8 = &Buffer[scaled_index + 92];
            if ( input_value_2 )
            {
              crt_fread((__int64)destination_buffer_8, 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 96], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 88], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 100], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 104], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 108], 4, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 112], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 114], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 116], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 118], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 120], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 122], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 124], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 126], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 128], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 130], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 132], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 134], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 136], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 138], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 140], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 142], 2, 1, (__int64)Stream);
              crt_fread((__int64)&Buffer[scaled_index + 144], 4, 1, (__int64)Stream);
            }
            else
            {
              fread_sr((void *)(uintptr_t)(destination_buffer_8), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 96]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 88]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 100]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 104]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 108]), 4, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 112]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 114]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 116]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 118]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 120]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 122]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 124]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 126]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 128]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 130]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 132]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 134]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 136]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 138]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 140]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 142]), 2, 1, (FILE *)(uintptr_t)(Stream));
              fread_sr((void *)(uintptr_t)(&Buffer[scaled_index + 144]), 4, 1, (FILE *)(uintptr_t)(Stream));
            }
            ++iteration_count_2;
          }
          while ( iteration_count_2 <= *(_DWORD *)byte_cursor );
          cached_n = n;
          iteration_count = integer_sum;
        }
        ++cached_n;
      }
      integer_sum = ++iteration_count;
    }
    while ( iteration_count < *(_DWORD *)byte_cursor_3 );
    input_value = input_value_2;
  }
  sub_140029800((__int64)Buffer, (__int64)Stream, input_value);
  return 1;
}
#undef integer_sum
#undef destination_buffer_9
#undef input_value_2
#undef n

