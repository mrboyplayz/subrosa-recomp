#include "shared_client.h"

//----- (00000001400E8580) ----------------------------------------------------
__int64            sr_character_cmc_load_candidate(int a1, char *a2)
{
  extern void character_load_cmc(int character, const char *name);

  character_load_cmc(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}

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
