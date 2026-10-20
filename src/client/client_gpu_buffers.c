#include "shared_client.h"

//----- (00000001400817C0) ----------------------------------------------------
__int64 sub_1400817C0()
{
  __int64 unused_local;
  signed int float_word;
  double x;
  float scaled_ratio;
  float scaled_ratio_2;
  signed int iteration_count;
  unsigned int *state_address;
  int running_total;
  int running_total_2;
  int running_total_3;
  signed int iteration_count_2;
  int *saved_state_address;
  signed int saved_iteration_count;
  int shifted_bits;
  int shifted_bits_2;
  float squared_component;
  int shifted_bits_3;
  double x_2;
  __int64 unused_local_2;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400817C0[16];
#define saved_iteration_count_2 (*(signed int (*))(void *)(sr_frame_1400817C0 + 0)) /* [rsp+120h] */
#define saved_running_total (*(int (*))(void *)(sr_frame_1400817C0 + 8)) /* [rsp+128h] */

  glBindTexture(3553, renderer_white_texture);
  float_word = g_18B7D2FC8;
  *(_QWORD *)&x = 1115684864;
  scaled_ratio = 384.0;
  scaled_ratio_2 = 512.0 / (float)(int)g_18B7D2FC8;
  if ( (int)g_18B7D2FCC > 0 )
    scaled_ratio = 384.0 / (float)(int)g_18B7D2FCC;
  iteration_count = 0;
  saved_iteration_count_2 = 0;
  if ( (int)g_18B7D2FC8 > 0 )
  {
    state_address = &g_18B7D2FDC;
    running_total = 57;
    running_total_2 = 0;
    running_total_3 = 0;
    saved_running_total = 0;
    do
    {
      iteration_count_2 = 0;
      if ( (int)*(state_address - 1) > 0 )
      {
        saved_state_address = (int *)state_address;
        saved_iteration_count = iteration_count;
        do
        {
          shifted_bits = 15731 * (iteration_count ^ (iteration_count << 13)) * (iteration_count ^ (iteration_count << 13)) + 789221;
          shifted_bits_2 = 15731 * (((running_total_3 + iteration_count_2) << 13) ^ (running_total_3 + iteration_count_2)) * (((running_total_3 + iteration_count_2) << 13) ^ (running_total_3 + iteration_count_2)) + 789221;
          squared_component = (float)((shifted_bits_2 * shifted_bits_2 - 771171059) & 0x7FFFFFFF);
          shifted_bits_3 = (saved_iteration_count ^ (saved_iteration_count << 13)) * (saved_iteration_count ^ (saved_iteration_count << 13));
          sr_renderer_draw_textured_rect(
            x,
            sr_export_float_lane_container((unsigned __int64)COERCE_UNSIGNED_INT(512.0f - (float)((float)*saved_state_address * scaled_ratio))),
            COERCE_UNSIGNED_INT((float)(scaled_ratio_2)) /* native XMM2 width = XMM8 */,
            (float)saved_state_address[1] * scaled_ratio,
            8,
            COERCE_INT((float)(0.5 - (float)((float)((shifted_bits * shifted_bits - 771171059) & 0x7FFFFFFF) * 4.6566129e-10)) + 0.5f),
            COERCE_INT((float)(0.5 - (float)(squared_component * 4.6566129e-10)) + 0.5f),
            COERCE_INT(
              (float)(0.5
                    - (float)((float)(((15731 * shifted_bits_3 + 789221) * (15731 * shifted_bits_3 + 789221) - 771171059) & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 0.5f),
            1065353216);
          ++iteration_count_2;
          iteration_count += running_total_2 + 57;
          running_total_3 += running_total_2;
          saved_iteration_count += running_total;
          saved_state_address += 3;
        }
        while ( iteration_count_2 < (int)*(state_address - 1) );
        float_word = g_18B7D2FC8;
        iteration_count = saved_iteration_count_2;
        running_total_3 = saved_running_total;
      }
      ++iteration_count;
      *(float *)&x = *(float *)&x + scaled_ratio_2;
      running_total_3 += 57;
      saved_iteration_count_2 = iteration_count;
      running_total += 1684013;
      saved_running_total = running_total_3;
      running_total_2 += 54323;
      state_address += 3074;
    }
    while ( iteration_count < float_word );
  }
  sr_renderer_draw_textured_rect(sr_export_float_lane_container(1115684864), sr_export_float_lane_container(1140850688), COERCE_UNSIGNED_INT((float)(scaled_ratio_2 + scaled_ratio_2)) /* native XMM2 width = XMM8+XMM8 */, 384.0, 8, 1065353216, 0, 0, 1065353216);
  *(_QWORD *)&x_2 = COERCE_UNSIGNED_INT((float)(int)g_18B7D2FC8);
  *(float *)&x_2 = (float)(*(float *)&x_2 * scaled_ratio_2) + 64.0;
  return sr_renderer_draw_textured_rect(x_2, sr_export_float_lane_container(1140850688), COERCE_UNSIGNED_INT((float)(scaled_ratio_2 + scaled_ratio_2)) /* native XMM2 width = XMM8+XMM8 */, 384.0, 8, 1065353216, 0, 0, 1065353216);
}
#undef saved_iteration_count_2
#undef saved_running_total

//----- (000000014011E090) ----------------------------------------------------
void            sub_14011E090(int a1)
{
  __int64 remaining_count;
  unsigned int *buffer_cursor;
  __int64 scaled_index;
  __int64 scaled_index_2;
  __int64 scaled_index_3;

  if ( !g_18AB70F9C && !g_18E95B03C )
  {
    remaining_count = 4;
    buffer_cursor = &dword_140404A6C[6930 * a1 + 83200503];
    do
    {
      if ( buffer_cursor[780] )
      {
        scaled_index = (int)*buffer_cursor;
        if ( (int)scaled_index >= 0 )
        {
          scaled_index_2 = (int)*buffer_cursor;
          scaled_index_3 = 6 * scaled_index;
          if ( dword_140404A6C[6 * scaled_index + 312226123] != -1 )
          {
            glVertexAttribPointer(0,3,5126,0,64,(const void *)((intptr_t)(int32_t)(dword_140404A6C[309078348+3074*((int64_t)(int32_t)dword_140404A6C[6*scaled_index+312226123])+3*((int64_t)(int32_t)dword_140404A6C[(6*scaled_index+312226123)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[6*scaled_index+312226123])*g_189F0EF8C)));
            if ( dword_140404A6C[scaled_index_3 + 328456563] != -1 )
              (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(12,(int)(uint32_t)(6u*dword_140404A6C[8969*scaled_index_2+73991665]),5125,(const void *)((intptr_t)(int32_t)(dword_140404A6C[325308788+3074*((int64_t)(int32_t)dword_140404A6C[scaled_index_3+328456563])+3*((int64_t)(int32_t)dword_140404A6C[(scaled_index_3+328456563)+1])]+(uint32_t)((int64_t)(int32_t)dword_140404A6C[scaled_index_3+328456563])*g_18DCF902C)));
          }
        }
      }
      ++buffer_cursor;
      --remaining_count;
    }
    while ( remaining_count );
  }
}

//----- (0000000140193FE0) ----------------------------------------------------
__int64            sub_140193FE0(int a1, int a2, __int64 a3, int a4)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 input_value_2;
  __int64 scaled_index;
  int element_index;
  __int64 integer_difference;
  _DWORD *state_address;
  __int64 scaled_index_2;
  unsigned int *state_address_2;
  int *state_address_3;

  input_value = a4;
  record_word_offset = 3246088LL * a1;
  input_value_2 = a1;
  if ( dword_140404A6C[record_word_offset + 312324428] )
    return 0;
  scaled_index = record_word_offset * 4 + 24LL * a2;
  if ( *(unsigned int *)((char *)&g_18AB10F98 + scaled_index) != -1 )
    sub_1401941F0(a1, a2);
  if ( !(_DWORD)input_value || (int)input_value >= (int)dword_140404A6C[record_word_offset + 309078344] )
    goto LABEL_16;
  element_index = 0;
  integer_difference = dword_140404A6C[record_word_offset + 309078343] - 1;
  if ( (int)(dword_140404A6C[record_word_offset + 309078343] - 1) > 0 )
  {
    /* 0x140194083: lea rax, [rdi+0x49f0ef98] is the page's entry count, dword index 309078347. */
    state_address = &dword_140404A6C[309078347 + record_word_offset];
    do
    {
      if ( (int)input_value + *(state_address - 1) < (int)dword_140404A6C[record_word_offset + 309078344]
        && *state_address < (signed int)dword_140404A6C[record_word_offset + 309078345] )
      {
        break;
      }
      ++element_index;
      state_address += 3074;
    }
    while ( element_index < (int)integer_difference );
  }
  if ( element_index < (int)integer_difference )
  {
    if ( !dword_140404A6C[record_word_offset + 312324428] )
    {
      glBindBuffer(dword_140404A6C[record_word_offset + 309078341],
        dword_140404A6C[2 * dword_140404A6C[input_value_2 + 283791462] + 283793813]);
      glBufferSubData(dword_140404A6C[record_word_offset + 309078341],
        (int)(element_index * dword_140404A6C[record_word_offset + 309078344] + dword_140404A6C[3074 * element_index + 309078346 + record_word_offset]),
        input_value,
        a3);
    }
    scaled_index_2 = 3074LL * element_index;
    state_address_2 = &dword_140404A6C[record_word_offset + 309078346 + scaled_index_2];
    state_address_3 = (int *)&dword_140404A6C[309078347 + record_word_offset + scaled_index_2];
    dword_140404A6C[3 * *state_address_3 + 309078348 + scaled_index_2 + record_word_offset] = *state_address_2;
    dword_140404A6C[3 * *state_address_3 + 309078349 + scaled_index_2 + record_word_offset] = input_value;
    dword_140404A6C[3 * *state_address_3 + 309078350 + scaled_index_2 + record_word_offset] = a2;
    *(unsigned int *)((char *)&g_18AB10F98 + scaled_index) = element_index;
    *(unsigned int *)((char *)&g_18AB10F9C + scaled_index) = (*state_address_3)++;
    *state_address_2 += input_value;
    dword_140404A6C[record_word_offset + 312324427] += input_value;
    return 1;
  }
  else
  {
LABEL_16:
    *(_QWORD *)((char *)&g_18AB10F98 + scaled_index) = -1;
    return 0;
  }
}

//----- (00000001401941F0) ----------------------------------------------------
void            sub_1401941F0(int a1, int a2)
{
  __int64 input_value;
  __int64 record_word_offset;
  __int64 scaled_index;
  __int64 masked_bits;
  __int64 masked_bits_2;
  __int64 scaled_index_2;
  __int64 scaled_index_3;
  __int64 scaled_index_4;
  int masked_bits_3;
  bool state_address;
  unsigned int masked_bits_4;
  int running_total;
  unsigned int masked_bits_5;
  __int64 unused_local;
  int masked_bits_6;
  unsigned int *state_address_2;
  __int64 table_value;
  __int64 scaled_index_5;
  unsigned int saved_masked_bits;
  __int64 unused_local_2;
  unsigned int table_value_2;
  unsigned int scaled_index_6;
  unsigned int *state_address_3;
  __int64 packed_word_bits;
  __int64 saved_masked_bits_2;
  unsigned int loaded_word;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401941F0[32];
#define saved_masked_bits_3 (*(unsigned int (*))(void *)(sr_frame_1401941F0 + 0)) /* [rsp+70h] */
#define scaled_index_7 (*(__int64 (*))(void *)(sr_frame_1401941F0 + 16)) /* [rsp+80h] */

  input_value = a1;
  record_word_offset = 3246088LL * a1;
  if ( !dword_140404A6C[record_word_offset + 312324428] )
  {
    scaled_index = record_word_offset * 4 + 24LL * a2;
    masked_bits = *(int *)((char *)&g_18AB10F9C + scaled_index);
    masked_bits_2 = *(int *)((char *)&g_18AB10F98 + scaled_index);
    if ( (int)masked_bits_2 >= 0
      && (int)masked_bits_2 < (int)(dword_140404A6C[record_word_offset + 309078343] - 1)
      && (int)masked_bits >= 0
      && (int)masked_bits < (int)dword_140404A6C[record_word_offset + 309078345] )
    {
      scaled_index_2 = 3074 * masked_bits_2;
      scaled_index_3 = 12296 * masked_bits_2 + record_word_offset * 4;
      if ( *(int *)((char *)&g_189F0EF98 + scaled_index_3) > 0 )
      {
        *(unsigned int *)((char *)&g_18AB10F98 + scaled_index) = -1;
        *(unsigned int *)((char *)&g_18AB10F9C + scaled_index) = -1;
        --*(unsigned int *)((char *)&g_189F0EF98 + scaled_index_3);
        scaled_index_4 = 12 * masked_bits + scaled_index_3;
        scaled_index_7 = 3 * masked_bits;
        masked_bits_3 = *(unsigned int *)((char *)&g_189F0EFA0 + scaled_index_4);
        state_address = (int)(*(unsigned int *)((char *)&g_189F0EF94 + scaled_index_3) - masked_bits_3) < 0;
        *(unsigned int *)((char *)&g_189F0EF94 + scaled_index_3) -= masked_bits_3;
        masked_bits_4 = *(unsigned int *)((char *)&g_189F0EF94 + scaled_index_3);
        running_total = 0;
        if ( state_address )
          masked_bits_4 = 0;
        *(unsigned int *)((char *)&g_189F0EF94 + scaled_index_3) = masked_bits_4;
        dword_140404A6C[record_word_offset + 312324427] -= *(unsigned int *)((char *)&g_189F0EFA0 + scaled_index_4);
        masked_bits_5 = *(unsigned int *)((char *)&g_189F0EF9C + scaled_index_4);
        glBindBuffer(dword_140404A6C[record_word_offset + 309078341],
          dword_140404A6C[2 * dword_140404A6C[input_value + 283791462] + 283793813]);
        masked_bits_6 = *(unsigned int *)((char *)&g_189F0EF98 + scaled_index_3);
        if ( g_183F7CBF4 )
        {
          if ( (int)masked_bits < masked_bits_6 )
          {
            state_address_2 = &dword_140404A6C[record_word_offset + 309078349 + scaled_index_2 + scaled_index_7];
            do
            {
              table_value = (int)state_address_2[4];
              state_address_2 += 3;
              scaled_index_5 = (int)*state_address_2;
              saved_masked_bits = masked_bits;
              LODWORD(masked_bits) = masked_bits + 1;
              dword_140404A6C[6 * table_value + 312226124 + record_word_offset] = saved_masked_bits;
              glBindBuffer(36663, dword_140404A6C[2 * g_183E98C20 + 283793813]);
              glCopyBufferSubData(dword_140404A6C[record_word_offset + 309078341],
                36663,
                (int)(*(state_address_2 - 1) + dword_140404A6C[record_word_offset + 309078344] * masked_bits_2),
                0,
                scaled_index_5);
              glBindBuffer(36662, dword_140404A6C[2 * g_183E98C20 + 283793813]);
              glCopyBufferSubData(36662,
                dword_140404A6C[record_word_offset + 309078341],
                0,
                (int)(masked_bits_5 + dword_140404A6C[record_word_offset + 309078344] * masked_bits_2),
                scaled_index_5);
              *(state_address_2 - 3) = *state_address_2;
              table_value_2 = state_address_2[1];
              *(state_address_2 - 4) = masked_bits_5;
              masked_bits_5 += scaled_index_5;
              *(state_address_2 - 2) = table_value_2;
            }
            while ( (int)masked_bits < *(int *)((char *)&g_189F0EF98 + scaled_index_3) );
          }
        }
        else if ( (int)masked_bits < masked_bits_6 )
        {
          saved_masked_bits_3 = masked_bits_5;
          scaled_index_6 = dword_140404A6C[3 * masked_bits + 309078351 + record_word_offset + scaled_index_2];
          state_address_3 = &dword_140404A6C[record_word_offset + 309078349 + scaled_index_2 + scaled_index_7];
          do
          {
            packed_word_bits = (int)state_address_3[4];
            state_address_3 += 3;
            running_total += *state_address_3;
            saved_masked_bits_2 = (unsigned int)masked_bits;
            LODWORD(masked_bits) = masked_bits + 1;
            dword_140404A6C[6 * packed_word_bits + 312226124 + record_word_offset] = saved_masked_bits_2;
            loaded_word = *state_address_3;
            LODWORD(packed_word_bits) = state_address_3[1];
            *(state_address_3 - 4) = masked_bits_5;
            masked_bits_5 += loaded_word;
            *(state_address_3 - 3) = loaded_word;
            *(state_address_3 - 2) = packed_word_bits;
          }
          while ( (int)masked_bits < *(int *)((char *)&g_189F0EF98 + scaled_index_3) );
          glBindBuffer(36663, dword_140404A6C[2 * g_183E98C20 + 283793813]);
          glCopyBufferSubData(dword_140404A6C[record_word_offset + 309078341],
            36663,
            (int)(scaled_index_6 + dword_140404A6C[record_word_offset + 309078344] * masked_bits_2),
            0,
            running_total);
          glCopyBufferSubData(36663,
            dword_140404A6C[record_word_offset + 309078341],
            0,
            (int)(saved_masked_bits_3 + dword_140404A6C[record_word_offset + 309078344] * masked_bits_2),
            running_total);
        }
      }
    }
  }
}
#undef saved_masked_bits_3
#undef scaled_index_7

