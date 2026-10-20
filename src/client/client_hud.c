#include "shared_client.h"

//----- (0000000140086000) ----------------------------------------------------
void            ui_draw_hud_menu_prompt_candidate(int a1)
{
  __int64 player_record_offset;
  __int64 table_value;
  char state_word;
  __m128i converted_vector;
  unsigned int lobyte_result;
  __int64 scaled_index;
  __m128i converted_vector_2;
  __m128i converted_vector_3;
  __int64 scaled_index_2;
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
  __int64 unused_local_17;
  __int64 unused_local_18;
  __int64 unused_local_19;
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
  __int64 unused_local_32;
  __int64 unused_local_33;
  __int64 unused_local_34;
  __int64 unused_local_35;
  __int64 unused_local_36;
  __int64 unused_local_37;
  __int64 unused_local_38;
  __m128i converted_vector_4;
  __int64 packed_word_bits;
  __int64 packed_word_bits_2;
  __int64 scaled_index_3;
  bool comparison_result;
  char *literal_text;
  unsigned int *converted_vector_5;
  __int64 packed_word_bits_3;
  __int64 scaled_index_4;
  __int64 table_value_2;
  double y;
  __int64 unused_local_39;
  __int64 unused_local_40;
  int table_value_3;
  __int64 saved_state_address;
  __int64 unused_local_41;
  __int64 unused_local_42;
  __int64 unused_local_43;
  unsigned int table_value_4;
  char *literal_text_2;
  unsigned int state_word_2;
  __m128i converted_vector_6;
  __int64 table_value_5;
  __int64 unused_local_44;
  __int64 unused_local_45;
  __int64 unused_local_46;
  __int64 unused_local_47;
  __int64 unused_local_48;
  __int64 unused_local_49;
  __int64 unused_local_50;
  __int64 unused_local_51;
  float state_address;
  float state_address_2;
  float component_sum;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  __int64 unrecovered_register_value_3;
  __m128 vector_result;
  __int64 remaining_count;
  float weighted_sum;
  float reordered_vector;
  __int64 unrecovered_register_value_4;
  __int64 unrecovered_register_value_5;
  __int64 unrecovered_register_value_6;
  __m128 vector_result_2;
  __int64 unrecovered_register_value_7;
  __int64 unrecovered_register_value_8;
  __int64 void_2;
  __int64 unused_local_52;
  __int64 unused_local_53;
  __int64 unused_local_54;
  __int64 unused_local_55;
  __int64 unused_local_56;
  __int64 unused_local_57;
  __int64 unused_local_58;
  __int64 unused_local_59;
  __int64 unused_local_60;
  __int64 unused_local_61;
  __int64 unused_local_62;
  __int64 unused_local_63;
  __int64 unused_local_64;
  __int64 unused_local_65;
  __int64 unused_local_66;
  __int64 unused_local_67;
  __int64 unused_local_68;
  __int64 unused_local_69;
  __int64 unused_local_70;
  __int64 unused_local_71;
  __int64 unused_local_72;
  __int64 unused_local_73;
  __int64 unused_local_74;
  __int64 unused_local_75;
  __int64 unused_local_76;
  __int64 unused_local_77;
  __int64 unused_local_78;
  __int64 unused_local_79;
  __int64 unused_local_80;
  __int64 unused_local_81;
  __int64 unused_local_82;
  __int64 unused_local_83;
  __int64 unused_local_84;
  __int64 unrecovered_register_value_9;
  __int64 void_3;
  __int64 unrecovered_register_value_10;
  __int64 unused_local_85;
  unsigned sr_hud_line_point[3];
  float saved_state_address_2;

  if ( a1 == -1 )
    return;
  player_record_offset = 3597LL * a1;
  table_value = (int)dword_140404A6C[player_record_offset + 71856292];
  if ( (_DWORD)table_value != -1 )
    sub_140087810(a1, table_value);
  state_word = g_18399EF70;
  converted_vector = _mm_cvtsi32_si128((int)(0x43800000u));
  lobyte_result = (LOBYTE(g_18399EF70) + 1) & 0x1F;
  if ( lobyte_result != (g_18399EF70 & 0x1F) )
  {
    do
    {
      scaled_index = 131LL * lobyte_result;
      if ( (int)dword_140404A6C[scaled_index + 282487107] > 0 )
      {
        sr_text_draw_recovered((char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + scaled_index * 4 + 1134161792), 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector))), 24.0, 97, 1.0f, 1.0f, 1.0f, ((float)(int)dword_140404A6C[scaled_index+282487107]*0.005f), NULL);
        state_word = g_18399EF70;
        *(float *)SR_VEC_LANES(128, converted_vector, i32) = *(float *)SR_VEC_LANES(128, converted_vector, i32) + 24.0;
      }
      lobyte_result = ((_BYTE)lobyte_result + 1) & 0x1F;
    }
    while ( lobyte_result != (state_word & 0x1F) );
  }
  if ( game_state == 3 || (_DWORD)table_value == -1 )
    return;
  if ( g_183F79DF4 || g_183F79DF0 && !g_18329CC24 )
    sub_140088130(table_value);
  converted_vector_2 = _mm_cvtsi32_si128((int)(0x43900000u));
  converted_vector_3 = _mm_cvtsi32_si128((int)(0x43C00000u));
  scaled_index_2 = 7166 * table_value;
  if ( (int)dword_140404A6C[7166 * table_value + 280658334] > 0 )
  {
    glBindTexture(3553, renderer_white_texture);
    sr_renderer_draw_textured_rect(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), 1132462080, 32.0, 0, 1065353216, 1065353216, 1065353216, 1040187392);
    sr_renderer_draw_textured_rect(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), sr_text_float_bits((float)(int)dword_140404A6C[scaled_index_2+280658334]), 32.0, 0, 1065353216, 1065353216, 1065353216, 1063256064);
  }
  if ( g_18329CC38
    && ((int)dword_140404A6C[scaled_index_2 + 280658139] > 0 || (int)dword_140404A6C[scaled_index_2 + 280658149] > 0) )
  {
    glBindTexture(3553, renderer_white_texture);
    g_1AD299450 = xmmword_140279430;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    {
      /* 0x1400862F4..0x14008648E: the positions are constants and the sine/cosine pair left in xmm0
         by each call (0x14008635F, 0x1400863EC, 0x140086452); the C had dropped all of them. */
      __m128d sr_pair;
      float sr_x, sr_y;
      sr_renderer_batch_vertex3f(608.0f, 352.0f, 0.0f);
      sr_renderer_batch_vertex3f(578.43585f, 327.50827f, 0.0f);
      sr_renderer_batch_vertex3f(608.0f, 352.0f, 0.0f);
      sr_renderer_batch_vertex3f(578.43585f, 376.49173f, 0.0f);
      g_1AD299450 = xmmword_140279460;
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[player_record_offset + 71856300] * 15.0), 0, 0.0);
      sr_renderer_batch_vertex3f(608.0f, 352.0f, 0.0f);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sr_renderer_batch_vertex3f(sr_x, sr_y, 0.0f);
      g_1AD299450 = xmmword_140279410;
      sr_renderer_batch_vertex3f(sr_x, sr_y, 0.0f);
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[player_record_offset + 71856300] * 14.0625), 0, 0.0);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sr_renderer_batch_vertex3f(sr_x, sr_y, 0.0f);
      sr_renderer_batch_vertex3f(sr_x, sr_y, 0.0f);
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[player_record_offset + 71856300] * 13.125), 0, 0.0);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sr_renderer_batch_vertex3f(sr_x, sr_y, 0.0f);
      sr_renderer_batch_flush(0, 0, 0);
    }
    converted_vector_2 = _mm_cvtsi32_si128((int)(0x43900000u));
    converted_vector_3 = _mm_cvtsi32_si128((int)(0x43C00000u));
  }
  converted_vector_4 = converted_vector_2;
  if ( (int)dword_140404A6C[scaled_index_2 + 280658139] <= 0 )
    goto LABEL_41;
  packed_word_bits = (int)dword_140404A6C[scaled_index_2 + 280658140];
  if ( ((dword_140404A6C[1760 * packed_word_bits + 278845898] - 25) & 0xFFFFFFF7) == 0 )
  {
    if ( !dword_140404A6C[1760 * packed_word_bits + 278846052] )
    {
      sr_text_draw_recovered("Left-click to dial", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_3))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      LODWORD(packed_word_bits) = dword_140404A6C[scaled_index_2 + 280658140];
    }
    if ( dword_140404A6C[1760 * (int)packed_word_bits + 278846052] == 1 )
    {
      sr_text_draw_recovered("Use Numpad or number keys", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_3))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("1111 - Goldmen", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("2222 - Monsota", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("3333 - OXS", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      converted_vector_4 = _mm_cvtsi32_si128((int)(0x43E00000u));
      if ( game_type == 4 )
      {
        sr_text_draw_recovered("4444 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[3]});
        sr_text_draw_recovered("5555 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[4]});
        sr_text_draw_recovered("6666 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43F00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[5]});
        converted_vector_4 = _mm_cvtsi32_si128((int)(0x43F80000u));
      }
    }
    packed_word_bits_2 = (int)dword_140404A6C[scaled_index_2 + 280658140];
    if ( dword_140404A6C[1760 * packed_word_bits_2 + 278846052] == 4 )
    {
      sr_text_draw_recovered("Busy", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      LODWORD(packed_word_bits_2) = dword_140404A6C[scaled_index_2 + 280658140];
    }
    scaled_index_3 = 1760LL * (int)packed_word_bits_2;
    if ( dword_140404A6C[scaled_index_3 + 278846052] == 2 )
    {
      comparison_result = (int)dword_140404A6C[scaled_index_3 + 278845983] <= 0;
      literal_text = "Left-click to answer";
      converted_vector_5 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u)));
      if ( comparison_result )
        literal_text = "Left-click to hang up";
      sr_text_draw_recovered(literal_text, 512.0, sr_text_bits_float((unsigned)(uintptr_t)(converted_vector_5)), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    }
    packed_word_bits_3 = (int)dword_140404A6C[scaled_index_2 + 280658140];
    if ( dword_140404A6C[1760 * packed_word_bits_3 + 278846052] == 3 )
    {
      sr_text_draw_recovered("In Use", 640.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 24.0, 1, 0.0f, 1.0f, 0.0f, 1.0f, NULL);
      LODWORD(packed_word_bits_3) = dword_140404A6C[scaled_index_2 + 280658140];
    }
    *(float *)SR_VEC_LANES(128, converted_vector_4, i32) = *(float *)SR_VEC_LANES(128, converted_vector_4, i32) + 24.0;
    scaled_index_4 = 1760LL * (int)packed_word_bits_3;
    if ( dword_140404A6C[scaled_index_4 + 278846052] - 1 <= 1 && (int)dword_140404A6C[scaled_index_4 + 278845983] > 0 )
      sr_text_draw_recovered("Number:/i", 640.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_4))), 24.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[scaled_index_4 + 278845983]});
  }
  if ( (int)dword_140404A6C[scaled_index_2 + 280658139] <= 0
    || (table_value_2 = (int)dword_140404A6C[scaled_index_2 + 280658140], (_DWORD)table_value_2 == -1)
    || dword_140404A6C[1760 * table_value_2 + 278845898] != 39 )
  {
LABEL_41:
    sub_1400A7C70(table_value, 512.0, 444.0);
  }
  glBindTexture(3553, renderer_white_texture);
  HIDWORD(y) = 0;
  sr_renderer_draw_textured_rect(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, 127.0, 8, 1065353216, 1065353216, 1065353216, 1040187392);
  glBindTexture(3553, renderer_white_texture);
  sr_renderer_draw_textured_rect(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, (float)(int)dword_140404A6C[scaled_index_2 + 280651310], 8, 1065353216, 1065353216, 1065353216, 1056964608);
  table_value_3 = dword_140404A6C[scaled_index_2 + 280651311];
  if ( table_value_3 > 127 )
    table_value_3 = 127;
  glBindTexture(3553, renderer_white_texture);
  saved_state_address = 1103101952;
  *(float *)&y = 540.0 - (float)table_value_3;
  sr_renderer_draw_textured_rect(sr_export_float_lane_container(1103101952), y, 1103101952, 8.0, 4, 1065353216, 1065353216, 1065353216, 1063256064);
  if ( dword_140404A6C[scaled_index_2 + 280651313] == -1 )
  {
    table_value_4 = dword_140404A6C[player_record_offset + 71856330];
    if ( table_value_4 )
    {
      if ( table_value_4 == 1 )
      {
        literal_text_2 = "Walk";
      }
      else
      {
        if ( table_value_4 != 2 )
          goto LABEL_52;
        literal_text_2 = "Aim";
      }
    }
    else
    {
      literal_text_2 = "Run";
    }
    saved_state_address = 1141833728;
    sr_text_draw_recovered(literal_text_2, 64.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440F0000u))))), 24.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
LABEL_52:
  state_word_2 = g_183E93544;
  converted_vector_6 = _mm_cvtsi32_si128((int)(0x44030000u));
  if ( !g_183E93544 )
  {
    saved_state_address = 1141047296;
    sr_text_draw_recovered("Whisper", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44030000u))))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    state_word_2 = g_183E93544;
    converted_vector_6 = _mm_cvtsi32_si128((int)(0x44030000u));
  }
  if ( state_word_2 == 2 )
  {
    saved_state_address = SR_VEC_LANES(128, converted_vector_6, i64)[0];
    sr_text_draw_recovered("Yell", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(converted_vector_6))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( !dword_140404A6C[player_record_offset + 71856342] )
    goto LABEL_67;
  if ( g_18329CC24 )
  {
    if ( game_type == 4 )
      goto LABEL_63;
    saved_state_address = 1082130432;
    sr_text_draw_recovered("$/I", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)local_player+71856272]});
    if ( dword_140404A6C[3597 * local_player + 71856286] <= 5 )
    {
      saved_state_address = 1082130432;
      sr_text_draw_recovered("$/I", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)local_player+71856288]});
    }
  }
  else
  {
    saved_state_address = 1103101952;
    sr_text_draw_recovered("Press Tab for Menu", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41C00000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( game_type == 4 )
  {
LABEL_63:
    if ( dword_140404A6C[player_record_offset + 71856342] - 14 <= 0xC )
    {
      if ( dword_140404A6C[player_record_offset + 71856286] != -1 )
        sr_text_draw_recovered("$/I", 196.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[player_record_offset+71856273]});
      saved_state_address = 1082130432;
      sr_text_draw_recovered("Budget: $/I", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[player_record_offset+71856274]});
    }
  }
LABEL_67:
  table_value_5 = (int)dword_140404A6C[scaled_index_2 + 280651313];
  if ( (_DWORD)table_value_5 != -1 && !dword_140404A6C[scaled_index_2 + 280651314] )
  {
    if ( dword_140404A6C[player_record_offset + 71856339] != 3
      || (((double (*)(_QWORD, _QWORD))glBindTexture)(3553, renderer_white_texture),
          sr_renderer_draw_textured_rect(sr_export_float_lane_container(1145864192), sr_export_float_lane_container(1138753536), 1098907648, 80.0, 5, 0, 0, 0, 1056964608),
          saved_state_address = 1098907648,
          sr_renderer_draw_textured_rect(sr_export_float_lane_container(1145864192), sr_export_float_lane_container((unsigned __int64)COERCE_UNSIGNED_INT(
                                              448.0f
                                            - (float)((float)(*(float *)&dword_140404A6C[player_record_offset + 71856296] * 16.0)
                                                    + (float)(*(float *)&dword_140404A6C[player_record_offset + 71856296] * 16.0)))), 1098907648, 16.0, 5, 1065353216, 1065353216, 1065353216, 1056964608),
          !dword_140404A6C[scaled_index_2 + 280651314]) )
    {
      if ( dword_140404A6C[player_record_offset + 71856339] == 2 )
      {
        sub_140082110(
          548.0f,
          480.0f,
          36.0f,
          (float)((float)(fsqrt(
                            (float)((float)(*(float *)&dword_140404A6C[5210 * table_value_5 + 129716744]
                                          * *(float *)&dword_140404A6C[5210 * table_value_5 + 129716744])
                                  + (float)(*(float *)&dword_140404A6C[5210 * table_value_5 + 129716745]
                                          * *(float *)&dword_140404A6C[5210 * table_value_5 + 129716745]))
                          + (float)(*(float *)&dword_140404A6C[5210 * table_value_5 + 129716746]
                                  * *(float *)&dword_140404A6C[5210 * table_value_5 + 129716746]))
                        * 0.74564552)
                * 6.28318530718)
        - 2.3561944901925);
        sub_140082110(
          480.0f,
          480.0f,
          32.0f,
          (float)((float)((float)(int)dword_140404A6C[5210 * table_value_5 + 129720369] * 0.00019999999) * 3.14159265359)
        - 2.3561944901925);
        glBindTexture(3553, renderer_white_texture);
        sr_renderer_draw_textured_rect(sr_export_float_lane_container(1145864192), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sr_renderer_draw_textured_rect(sr_export_float_lane_container(1146388480), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sr_renderer_draw_textured_rect(sr_export_float_lane_container(1146912768), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sr_renderer_draw_textured_rect(sr_export_float_lane_container(1146388480), sr_export_float_lane_container(1138753536), 1116733440, 8.0, 5, 0, 0, 0, 1061158912);
        sr_text_draw_recovered("1", 818.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("2", 818.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("3", 850.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("4", 850.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("A", 882.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("R", 882.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        glBindTexture(3553, renderer_white_texture);
        state_address = (float)((float)(*(float *)&dword_140404A6C[player_record_offset + 71856293] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[player_record_offset + 71856293] * 16.0))
            + 818.0;
        state_address_2 = (float)((float)(*(float *)&dword_140404A6C[player_record_offset + 71856295] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[player_record_offset + 71856295] * 16.0))
            + 448.0;
        saved_state_address_2 = state_address;
        glBindTexture(3553, renderer_white_texture);
        component_sum = 0.0;
        g_1AD299450 = xmmword_140279470;
        g_1AD059440 = 0;
        g_1AD059448 = 0;
        g_1AD05944C = 9;
        sr_hud_line_point[2] = 0;
        vector_result = _mm_castpd_ps(sub_1401F8A50(0.0, unrecovered_register_value, 0.0 /* unused native input */));
        *(double *)&saved_state_address = state_address;
        remaining_count = 64;
        weighted_sum = *(double *)SR_VEC_LANES(128, vector_result, u64) * 12.0 + state_address;
        reordered_vector = state_address_2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result, (__m128d)vector_result, 1), f64)[0] * 12.0;
        do
        {
          (*(float *)&sr_hud_line_point[0]) = saved_state_address_2;
          (*(float *)&sr_hud_line_point[1]) = state_address_2;
          sr_renderer_batch_vertex3fv((unsigned int *)&(*(float *)&sr_hud_line_point[0]), unrecovered_register_value_2, unrecovered_register_value_3);
          (*(float *)&sr_hud_line_point[0]) = weighted_sum;
          (*(float *)&sr_hud_line_point[1]) = reordered_vector;
          sr_renderer_batch_vertex3fv((unsigned int *)&(*(float *)&sr_hud_line_point[0]), unrecovered_register_value_4, unrecovered_register_value_5);
          component_sum = component_sum + 0.098174773;
          vector_result_2 = _mm_castpd_ps(sub_1401F8A50(component_sum, unrecovered_register_value_6, *(double *)&saved_state_address));
          weighted_sum = *(double *)SR_VEC_LANES(128, vector_result_2, u64) * 12.0 + *(double *)&saved_state_address;
          (*(float *)&sr_hud_line_point[0]) = weighted_sum;
          reordered_vector = state_address_2 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)vector_result_2, (__m128d)vector_result_2, 1), f64)[0] * 12.0;
          (*(float *)&sr_hud_line_point[1]) = reordered_vector;
          sr_renderer_batch_vertex3fv((unsigned int *)&(*(float *)&sr_hud_line_point[0]), unrecovered_register_value_7, unrecovered_register_value_8);
          --remaining_count;
        }
        while ( remaining_count );
        sr_renderer_batch_flush(void_2, unrecovered_register_value_2, unrecovered_register_value_3);
        SR_VEC_LANES(128, converted_vector_2, i64)[0] = 1133510656;
      }
    }
  }
  if ( (int)dword_140404A6C[player_record_offset + 71857714] > 0 && LOBYTE(dword_140404A6C[player_record_offset + 71857715]) == 28 )
  {
    /* 0x140087565: movaps xmm7, xmm0 -- the pair gives the end of the line (0x1400875AF..0x1400875DD) */
    __m128d sr_pair = sub_1401F8A50(
      (float)(*(float *)&dword_140404A6C[player_record_offset + 71856293] - *(float *)&dword_140404A6C[player_record_offset + 71856297]),
      0,
      0.0);
    glBindTexture(3553, renderer_white_texture);
    g_1AD299450 = xmmword_140279430;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    sr_renderer_batch_vertex3f(512.0f, 336.0f, 0.0f);
    sr_renderer_batch_vertex3f(
      (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 64.0) + 512.0f,
      (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 336.0f,
      0.0f);
    sr_renderer_batch_flush(0, 0, 0);
  }
  if ( (dword_140404A6C[player_record_offset + 71856325] & 0x10) == 0 )
  {
    if ( (int)dword_140404A6C[player_record_offset + 71857714] <= 0 )
    {
LABEL_84:
      glBindTexture(3553, renderer_white_texture);
      if ( (_DWORD)table_value_5 == -1 )
        sr_renderer_draw_textured_rect(sr_export_float_lane_container(1140850688), *(double *)SR_VEC_LANES(128, converted_vector_2, i64), 1082130432, 4.0, 5, 1065353216, 1065353216, 1065353216, 1056964608);
      return;
    }
    if ( dword_140404A6C[1268 * LOBYTE(dword_140404A6C[player_record_offset + 71857715]) + 278521289] )
    {
      glBindTexture(3553, renderer_white_texture);
      g_1AD059440 = 2;
      g_1AD059448 = 0;
      g_1AD05944C = 9;
      g_1AD299450 = xmmword_140279430;
      {
        /* 0x140087638..0x14008771A: a cross at (512, 288, 0) (xmm12 0x1400874E4, xmm8 0x1400874ED, xmm14
           0x140086272) with arms from s to 2s, s = 8.0 (xmm13, 0x140087501) / *(unsigned int *)&g_183F7C574
           (0x140087638), 2s = s + s (0x140087676). The C had lost all 24 arguments. */
        float sr_s = 8.0f / g_183F7C574;
        float sr_s2 = sr_s + sr_s;
        sr_renderer_batch_vertex3f(512.0f, 288.0f - sr_s2, 0.0f);
        sr_renderer_batch_vertex3f(512.0f, 288.0f - sr_s, 0.0f);
        sr_renderer_batch_vertex3f(512.0f, sr_s + 288.0f, 0.0f);
        sr_renderer_batch_vertex3f(512.0f, sr_s2 + 288.0f, 0.0f);
        sr_renderer_batch_vertex3f(512.0f - sr_s2, 288.0f, 0.0f);
        sr_renderer_batch_vertex3f(512.0f - sr_s, 288.0f, 0.0f);
        sr_renderer_batch_vertex3f(sr_s + 512.0f, 288.0f, 0.0f);
        sr_renderer_batch_vertex3f(sr_s2 + 512.0f, 288.0f, 0.0f);
      }
      sr_renderer_batch_flush(void_3, unrecovered_register_value_9, unrecovered_register_value_10);
      return;
    }
  }
  if ( (int)dword_140404A6C[player_record_offset + 71857714] <= 0 || LOBYTE(dword_140404A6C[player_record_offset + 71857715]) != 39 )
    goto LABEL_84;
}

//----- (00000001400A77C0) ----------------------------------------------------
void sub_1400A77C0(float a1, float a2, float a3, float a4, float a5)
{
  float input_value;
  float input_value_2;
  float component_delta;
  float component_delta_2;
  float weighted_sum;
  float weighted_sum_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  char iteration_count;
  __int64 element_index;
  float component_delta_3;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  float weighted_sum_3;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float component_sum;
  float component_sum_2;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 masked_bits;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float weighted_sum_10;
  float component_sum_3;
  float component_sum_4;
  __int64 void_2;
  float sr_capsule_vertex[3];

  input_value = a3;
  input_value_2 = a2;
  component_delta = a3 - a1;
  component_delta_2 = a4 - a2;
  weighted_sum = (float)(a1 + a3) * 0.5;
  weighted_sum_2 = (float)(a2 + a4) * 0.5;
  square_root = fsqrt((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta));
  if ( square_root == 0.0 )
  {
    scaled_ratio = 0.0;
    scaled_ratio_2 = 0.0;
  }
  else
  {
    scaled_ratio = component_delta * (float)(1.0 / square_root);
    scaled_ratio_2 = component_delta_2 * (float)(1.0 / square_root);
  }
  iteration_count = 0;
  g_1AD05944C = 9;
  element_index = 0;
  g_1AD059440 = 0;
  (*(int *)(void *)&sr_capsule_vertex[2]) = 0;
  component_delta_3 = -scaled_ratio;
  g_1AD059448 = 0;
  do
  {
    sr_capsule_vertex[0] = weighted_sum;
    sr_capsule_vertex[1] = weighted_sum_2;
    sr_renderer_batch_vertex3fv((unsigned int *)&sr_capsule_vertex[0], a2, a3);
    weighted_sum_3 = a5 * *(float *)&dword_140404A6C[2 * element_index + 346696314];
    weighted_sum_4 = a5 * *(float *)&dword_140404A6C[2 * element_index + 346696315];
    weighted_sum_5 = (float)(scaled_ratio * weighted_sum_4) + (float)(scaled_ratio_2 * weighted_sum_3);
    weighted_sum_6 = (float)(component_delta_3 * weighted_sum_3) + (float)(scaled_ratio_2 * weighted_sum_4);
    if ( (unsigned __int64)element_index >= 0x20 )
    {
      component_sum = weighted_sum_5 + a1;
      component_sum_2 = weighted_sum_6 + input_value_2;
    }
    else
    {
      component_sum = weighted_sum_5 + input_value;
      component_sum_2 = weighted_sum_6 + a4;
    }
    sr_capsule_vertex[1] = component_sum_2;
    sr_capsule_vertex[0] = component_sum;
    sr_renderer_batch_vertex3fv((unsigned int *)&sr_capsule_vertex[0], unrecovered_register_value, unrecovered_register_value_2);
    masked_bits = ++iteration_count & 0x3F;
    weighted_sum_7 = a5 * *(float *)&dword_140404A6C[2 * masked_bits + 346696314];
    weighted_sum_8 = a5 * *(float *)&dword_140404A6C[2 * masked_bits + 346696315];
    weighted_sum_9 = (float)(scaled_ratio * weighted_sum_8) + (float)(scaled_ratio_2 * weighted_sum_7);
    weighted_sum_10 = (float)(component_delta_3 * weighted_sum_7) + (float)(scaled_ratio_2 * weighted_sum_8);
    if ( (iteration_count & 0x3Fu) >= 0x20 )
    {
      component_sum_3 = weighted_sum_9 + a1;
      component_sum_4 = weighted_sum_10 + input_value_2;
    }
    else
    {
      component_sum_3 = weighted_sum_9 + input_value;
      component_sum_4 = weighted_sum_10 + a4;
    }
    sr_capsule_vertex[1] = component_sum_4;
    sr_capsule_vertex[0] = component_sum_3;
    sr_renderer_batch_vertex3fv((unsigned int *)&sr_capsule_vertex[0], unrecovered_register_value_3, unrecovered_register_value_4);
    ++element_index;
  }
  while ( element_index < 64 );
  sr_renderer_batch_flush(void_2, a2, a3);
}

//----- (00000001400A7C70) ----------------------------------------------------
__int64            sub_1400A7C70(int a1, float a2, float a3)
{
  __int64 input_value;
  double angle;
  __int64 running_total;
  float *weighted_sum;
  __int64 remaining_count;
  float *float_word;
  float *state_address;
  char *record_byte_offset;
  __int64 loaded_word;
  float scaled_value;
  float weighted_sum_2;
  float weighted_sum_3;
  float state_address_2;
  float weighted_sum_4;
  float weighted_sum_5;
  float weighted_sum_6;
  float weighted_sum_7;
  float weighted_sum_8;
  float weighted_sum_9;
  float combined_products;
  float weighted_sum_10;
  float product_difference;
  float product_difference_2;
  float product_difference_3;
  float scaled_value_2;
  float scaled_value_3;
  float combined_products_2;
  float scaled_value_4;
  float product_difference_4;
  float scaled_value_5;
  float weighted_sum_11;
  float saved_product_difference;
  float scaled_value_6;
  float component_sum;
  float state_address_3;
  float *running_total_2;
  float *state_address_4;
  int float_word_2;
  __int64 integer_sum;
  unsigned int *state_address_5;
  float product_difference_5;
  float scaled_value_7;
  __int64 loaded_word_2;
  int integer_quotient;
  float scaled_value_8;
  float combined_products_3;
  float weighted_sum_12;
  float combined_products_4;
  float weighted_sum_13;
  float product_difference_6;
  float scaled_value_9;
  __int64 unrecovered_register_value;
  __int64 unrecovered_register_value_2;
  float component_delta;
  float component_delta_2;
  float square_root;
  float scaled_ratio;
  float scaled_ratio_2;
  float component_delta_3;
  char iteration_count;
  __int64 element_index;
  float weighted_sum_14;
  float weighted_sum_15;
  float weighted_sum_16;
  float component_sum_2;
  float saved_combined_products;
  __int64 unrecovered_register_value_3;
  __int64 unrecovered_register_value_4;
  __int64 masked_bits;
  float weighted_sum_17;
  float weighted_sum_18;
  float weighted_sum_19;
  float weighted_sum_20;
  float component_sum_3;
  float component_sum_4;
  __int64 void_2;
  __int64 unused_local;
  __int64 unused_local_2;
  float unused_local_3;
  float sr_health_vertex[3];
  _Alignas(16) unsigned sr_health_basis[9];
  float sr_health_positions[16 * 3];
  float sr_health_rotations[16 * 9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A7C70[928];
#define unused_frame_slot_0 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 0)) /* [rsp+8h] */
#define source_component_y (*(float (*))(void *)(sr_frame_1400A7C70 + 48)) /* [rsp+38h] */
#define float_word_3 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 72)) /* [rsp+50h] */
#define saved_weighted_sum (*(float (*))(void *)(sr_frame_1400A7C70 + 80)) /* [rsp+58h] */
#define input_value_2 (*(float (*))(void *)(sr_frame_1400A7C70 + 84)) /* [rsp+5Ch] */
#define float_word_4 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 88)) /* [rsp+60h] */
#define record_word_offset (*(unsigned __int64 (*))(void *)(sr_frame_1400A7C70 + 96)) /* [rsp+68h] */
#define unused_frame_slot_912 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 912)) /* [rsp+398h] */

  input_value = a1;
  *(float *)&float_word_4 = a3;
  input_value_2 = a2;
  ((__int128 *)(void *)sr_health_basis)[0] = xmmword_140278D30;
  (*(int64_t *)(void *)sr_health_positions) = 0;
  (sr_health_positions + 2)[0] = 0.0;
  ((__int128 *)(void *)sr_health_basis)[1] = xmmword_140278D30;
  sr_health_basis[8] = 1065353216;
  *(_QWORD *)&angle = dword_140404A6C[7166 * a1 + 280651341];
  record_word_offset = 28664LL * a1;
  sr_math_mat3_rotate_rows((__int64)((__int128 *)(void *)sr_health_basis), (float *)((__int128 *)(void *)sr_health_basis) + 3, angle);
  input_value *= 1376;
  sr_math_mat3_multiply_transposed(sr_health_rotations, (float *)((__int128 *)(void *)sr_health_basis), (float *)((char *)&g_18430A558 + input_value));
  running_total = ((intptr_t)dword_140404A6C - 0x404a6cLL) + input_value + 1144038864;
  weighted_sum = (float *)&(*(char *)(void *)(sr_health_positions + 5));
  remaining_count = 15;
  float_word = (float *)&(*(char *)(void *)(sr_health_rotations + 11));
  state_address = (float *)(unsigned int *)&g_18399DF58;
  record_byte_offset = &(*(char *)(void *)(sr_health_rotations + 9));
  do
  {
    loaded_word = *((int *)state_address - 5);
    scaled_value = *state_address;
    *(float *)&float_word_3 = *(state_address - 1);
    weighted_sum_2 = sr_health_rotations[9 * loaded_word + 2];
    weighted_sum_3 = *(float *)&float_word_3 * sr_health_rotations[9 * loaded_word + 1];
    state_address_2 = (float)(*(float *)&float_word_3 * sr_health_rotations[9 * loaded_word]) + (sr_health_positions + 2)[3 * loaded_word - 2];
    weighted_sum_4 = sr_health_rotations[9 * loaded_word + 3];
    weighted_sum_5 = sr_health_rotations[9 * loaded_word + 4];
    weighted_sum_6 = sr_health_rotations[9 * loaded_word + 5];
    weighted_sum_7 = sr_health_rotations[9 * loaded_word + 6];
    weighted_sum_8 = sr_health_rotations[9 * loaded_word + 7];
    weighted_sum_9 = sr_health_rotations[9 * loaded_word + 8];
    *(weighted_sum - 2) = state_address_2;
    combined_products = weighted_sum_3 + (sr_health_positions + 2)[3 * loaded_word - 1];
    saved_weighted_sum = weighted_sum_2;
    source_component_y = state_address[1];
    *(weighted_sum - 1) = combined_products;
    weighted_sum_10 = (sr_health_positions + 2)[3 * loaded_word];
    sr_math_mat3_multiply((__int64)record_byte_offset, running_total, (__int64)&sr_health_rotations[9 * loaded_word]);
    product_difference = *(state_address - 4) - *(state_address - 1);
    product_difference_2 = *(state_address - 3) - *state_address;
    product_difference_3 = *(state_address - 2) - state_address[1];
    scaled_value_2 = source_component_y * weighted_sum_9;
    scaled_value_3 = product_difference_2 * float_word[2];
    combined_products_2 = (float)((float)((float)((float)((float)(weighted_sum_4 * scaled_value) + state_address_2) + (float)(source_component_y * weighted_sum_7)) + (float)(product_difference * *(float_word - 2)))
                + (float)(product_difference_2 * float_word[1]))
        + (float)(product_difference_3 * float_word[4]);
    scaled_value_4 = product_difference_2 * float_word[3];
    product_difference_4 = product_difference * *(float_word - 1);
    scaled_value_5 = product_difference * *float_word;
    weighted_sum_11 = (float)((float)((float)(weighted_sum_5 * scaled_value) + combined_products) + (float)(source_component_y * weighted_sum_8)) + product_difference_4;
    *(weighted_sum - 2) = combined_products_2;
    saved_product_difference = product_difference_3;
    scaled_value_6 = product_difference_3 * float_word[6];
    component_sum = weighted_sum_11 + scaled_value_3;
    state_address_3 = (float)((float)(saved_weighted_sum * *(float *)&float_word_3) + weighted_sum_10) + (float)(weighted_sum_6 * scaled_value);
    *(weighted_sum - 1) = component_sum + (float)(saved_product_difference * float_word[5]);
    *weighted_sum = (float)((float)((float)(state_address_3 + scaled_value_2) + scaled_value_5) + scaled_value_4) + scaled_value_6;
    running_total += 84;
    record_byte_offset += 36;
    state_address += 25;
    float_word += 9;
    weighted_sum += 3;
    --remaining_count;
  }
  while ( remaining_count );
  running_total_2 = (float *)&(*(int64_t *)(void *)sr_health_positions);
  state_address_4 = (float *)&g_18399DF3C;
  *(float *)&float_word_2 = 0.0;
  integer_sum = 0;
  source_component_y = 0.0;
  float_word_3 = 0;
  LODWORD(sr_health_vertex[2]) = 0;
  do
  {
    if ( (unsigned int)float_word_2 > 2 )
    {
      if ( float_word_2 == 3 )
      {
        state_address_5 = &g_1832A506C;
      }
      else if ( (unsigned int)(float_word_2 - 4) > 2 )
      {
        if ( (unsigned int)(float_word_2 - 7) > 2 )
        {
          state_address_5 = &g_1832A5084;
          if ( (unsigned int)(float_word_2 - 10) > 2 )
            state_address_5 = &g_1832A508C;
        }
        else
        {
          state_address_5 = &g_1832A507C;
        }
      }
      else
      {
        state_address_5 = &g_1832A5074;
      }
    }
    else
    {
      state_address_5 = &g_1832A5064;
    }
    product_difference_5 = *state_address_4 * -0.5;
    scaled_value_7 = *state_address_4 * 0.5;
    loaded_word_2 = 3 * (integer_sum + *((int *)state_address_4 - 1));
    integer_quotient = state_address_5[record_word_offset / 4];
    scaled_value_8 = state_address_4[1] * 64.0;
    combined_products_3 = *(float *)&float_word_4 - (float)((float)((float)(sr_health_rotations[loaded_word_2 + 1] * product_difference_5) + running_total_2[1]) * 64.0);
    weighted_sum_12 = (float)((float)((float)(sr_health_rotations[loaded_word_2] * product_difference_5) + *running_total_2) * 64.0) + input_value_2;
    combined_products_4 = *(float *)&float_word_4 - (float)((float)((float)(sr_health_rotations[loaded_word_2 + 1] * scaled_value_7) + running_total_2[1]) * 64.0);
    weighted_sum_13 = (float)((float)((float)(sr_health_rotations[loaded_word_2] * scaled_value_7) + *running_total_2) * 64.0) + input_value_2;
    if ( integer_quotient >= 50 )
    {
      product_difference_6 = (float)(integer_quotient - 50) * 0.02f;
      scaled_value_9 = 1.0;
    }
    else
    {
      product_difference_6 = 0.0;
      scaled_value_9 = (float)integer_quotient * 0.02f;
    }
    glBindTexture(3553, renderer_white_texture);
    *(float *)&g_1AD299454 = scaled_value_9;
    *(float *)&g_1AD299458 = product_difference_6;
    component_delta = weighted_sum_13 - weighted_sum_12;
    *(unsigned int *)&g_1AD299450 = 1065353216;
    component_delta_2 = combined_products_4 - combined_products_3;
    g_1AD29945C = 1056964608;
    square_root = fsqrt((float)(component_delta_2 * component_delta_2) + (float)(component_delta * component_delta));
    if ( square_root == 0.0 )
    {
      scaled_ratio_2 = 0.0;
      scaled_ratio = 0.0;
    }
    else
    {
      scaled_ratio = (float)(1.0 / square_root) * component_delta_2;
      scaled_ratio_2 = (float)(1.0 / square_root) * component_delta;
    }
    g_1AD059440 = 2;
    component_delta_3 = -scaled_ratio_2;
    iteration_count = 0;
    g_1AD059448 = 0;
    element_index = 0;
    g_1AD05944C = 9;
    do
    {
      weighted_sum_14 = scaled_value_8 * *(float *)&dword_140404A6C[2 * element_index + 346696314];
      weighted_sum_15 = scaled_value_8 * *(float *)&dword_140404A6C[2 * element_index + 346696315];
      weighted_sum_16 = (float)(scaled_ratio_2 * weighted_sum_15) + (float)(scaled_ratio * weighted_sum_14);
      if ( (unsigned __int64)element_index >= 0x20 )
      {
        component_sum_2 = weighted_sum_16 + weighted_sum_12;
        saved_combined_products = combined_products_3;
      }
      else
      {
        component_sum_2 = weighted_sum_16 + weighted_sum_13;
        saved_combined_products = combined_products_4;
      }
      sr_health_vertex[0] = component_sum_2;
      sr_health_vertex[1] = saved_combined_products + (float)((float)(scaled_ratio * weighted_sum_15) + (float)(component_delta_3 * weighted_sum_14));
      sr_renderer_batch_vertex3fv((unsigned int *)&sr_health_vertex[0], unrecovered_register_value, unrecovered_register_value_2);
      masked_bits = ++iteration_count & 0x3F;
      weighted_sum_17 = scaled_value_8 * *(float *)&dword_140404A6C[2 * masked_bits + 346696314];
      weighted_sum_18 = scaled_value_8 * *(float *)&dword_140404A6C[2 * masked_bits + 346696315];
      weighted_sum_19 = (float)(scaled_ratio_2 * weighted_sum_18) + (float)(scaled_ratio * weighted_sum_17);
      weighted_sum_20 = (float)(scaled_ratio * weighted_sum_18) + (float)(component_delta_3 * weighted_sum_17);
      if ( (iteration_count & 0x3Fu) >= 0x20 )
      {
        component_sum_3 = weighted_sum_19 + weighted_sum_12;
        component_sum_4 = weighted_sum_20 + combined_products_3;
      }
      else
      {
        component_sum_3 = weighted_sum_19 + weighted_sum_13;
        component_sum_4 = weighted_sum_20 + combined_products_4;
      }
      sr_health_vertex[1] = component_sum_4;
      sr_health_vertex[0] = component_sum_3;
      sr_renderer_batch_vertex3fv((unsigned int *)&sr_health_vertex[0], unrecovered_register_value_3, unrecovered_register_value_4);
      ++element_index;
    }
    while ( element_index < 64 );
    sr_renderer_batch_flush(void_2, unrecovered_register_value, unrecovered_register_value_2);
    /* Damage fill uses named, clamped colors; light wounds must remain visible. */
    {
      extern void hud_damage_color(int health, int bleeding, float rgba[4]);
      float damage_color[4];
      hud_damage_color(integer_quotient, dword_140404A6C[record_word_offset / 4 + 280658301] != 0, damage_color);
      if (damage_color[3] > 0.0f) {
        memcpy((unsigned int *)&g_1AD299450, damage_color, sizeof(damage_color));
        sub_1400A77C0(weighted_sum_12, combined_products_3, weighted_sum_13, combined_products_4, scaled_value_8);
      }
    }
    integer_sum = float_word_3 + 3;
    float_word_2 = LODWORD(source_component_y) + 1;
    state_address_4 += 25;
    source_component_y = *(float *)&float_word_2;
    running_total_2 += 3;
    float_word_3 += 3;
  }
  while ( float_word_2 < 16 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef unused_frame_slot_0
#undef source_component_y
#undef float_word_3
#undef saved_weighted_sum
#undef input_value_2
#undef float_word_4
#undef record_word_offset
#undef unused_frame_slot_912
