#include "shared_client.h"

//----- (0000000140086000) ----------------------------------------------------
void            ui_draw_hud_menu_prompt_candidate(int a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __m128i v4;
  unsigned int v5;
  __int64 v6;
  __m128i v7;
  __m128i v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __m128i v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  char *v53;
  unsigned int *v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  double v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  char *v67;
  unsigned int v68;
  __m128i v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __m128 v85;
  __int64 v86;
  float v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __m128 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned sr_hud_line_point[3];
  float v136;

  if ( a1 == -1 )
    return;
  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856292];
  if ( (_DWORD)v2 != -1 )
    sub_140087810(a1, v2);
  v3 = g_18399EF70;
  v4 = _mm_cvtsi32_si128((int)(0x43800000u));
  v5 = (LOBYTE(g_18399EF70) + 1) & 0x1F;
  if ( v5 != (g_18399EF70 & 0x1F) )
  {
    do
    {
      v6 = 131LL * v5;
      if ( (int)dword_140404A6C[v6 + 282487107] > 0 )
      {
        sr_text_draw_recovered((char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 1134161792), 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4))), 24.0, 97, 1.0f, 1.0f, 1.0f, ((float)(int)dword_140404A6C[v6+282487107]*0.005f), NULL);
        v3 = g_18399EF70;
        *(float *)SR_VEC_LANES(128, v4, i32) = *(float *)SR_VEC_LANES(128, v4, i32) + 24.0;
      }
      v5 = ((_BYTE)v5 + 1) & 0x1F;
    }
    while ( v5 != (v3 & 0x1F) );
  }
  if ( game_state == 3 || (_DWORD)v2 == -1 )
    return;
  if ( g_183F79DF4 || g_183F79DF0 && !g_18329CC24 )
    sub_140088130(v2);
  v7 = _mm_cvtsi32_si128((int)(0x43900000u));
  v8 = _mm_cvtsi32_si128((int)(0x43C00000u));
  v9 = 7166 * v2;
  if ( (int)dword_140404A6C[7166 * v2 + 280658334] > 0 )
  {
    glBindTexture(3553, renderer_white_texture);
    sub_14006CFF0(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), 1132462080, 32.0, 0, 1065353216, 1065353216, 1065353216, 1040187392);
    sub_14006CFF0(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), sr_text_float_bits((float)(int)dword_140404A6C[v9+280658334]), 32.0, 0, 1065353216, 1065353216, 1065353216, 1063256064);
  }
  if ( g_18329CC38
    && ((int)dword_140404A6C[v9 + 280658139] > 0 || (int)dword_140404A6C[v9 + 280658149] > 0) )
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
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sub_14007D420(578.43585f, 327.50827f, 0.0f);
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sub_14007D420(578.43585f, 376.49173f, 0.0f);
      g_1AD299450 = xmmword_140279460;
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[v1 + 71856300] * 15.0), 0, 0.0);
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sub_14007D420(sr_x, sr_y, 0.0f);
      g_1AD299450 = xmmword_140279410;
      sub_14007D420(sr_x, sr_y, 0.0f);
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[v1 + 71856300] * 14.0625), 0, 0.0);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sub_14007D420(sr_x, sr_y, 0.0f);
      sub_14007D420(sr_x, sr_y, 0.0f);
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[v1 + 71856300] * 13.125), 0, 0.0);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sub_14007D420(sr_x, sr_y, 0.0f);
      sub_14006E0D0(0, 0, 0);
    }
    v7 = _mm_cvtsi32_si128((int)(0x43900000u));
    v8 = _mm_cvtsi32_si128((int)(0x43C00000u));
  }
  v48 = v7;
  if ( (int)dword_140404A6C[v9 + 280658139] <= 0 )
    goto LABEL_41;
  v49 = (int)dword_140404A6C[v9 + 280658140];
  if ( ((dword_140404A6C[1760 * v49 + 278845898] - 25) & 0xFFFFFFF7) == 0 )
  {
    if ( !dword_140404A6C[1760 * v49 + 278846052] )
    {
      sr_text_draw_recovered("Left-click to dial", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v8))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      LODWORD(v49) = dword_140404A6C[v9 + 280658140];
    }
    if ( dword_140404A6C[1760 * (int)v49 + 278846052] == 1 )
    {
      sr_text_draw_recovered("Use Numpad or number keys", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v8))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("1111 - Goldmen", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("2222 - Monsota", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      sr_text_draw_recovered("3333 - OXS", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      v48 = _mm_cvtsi32_si128((int)(0x43E00000u));
      if ( game_type == 4 )
      {
        sr_text_draw_recovered("4444 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[3]});
        sr_text_draw_recovered("5555 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43E80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[4]});
        sr_text_draw_recovered("6666 - /s", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43F00000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(uintptr_t)off_1402B2890[5]});
        v48 = _mm_cvtsi32_si128((int)(0x43F80000u));
      }
    }
    v50 = (int)dword_140404A6C[v9 + 280658140];
    if ( dword_140404A6C[1760 * v50 + 278846052] == 4 )
    {
      sr_text_draw_recovered("Busy", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      LODWORD(v50) = dword_140404A6C[v9 + 280658140];
    }
    v51 = 1760LL * (int)v50;
    if ( dword_140404A6C[v51 + 278846052] == 2 )
    {
      v52 = (int)dword_140404A6C[v51 + 278845983] <= 0;
      v53 = "Left-click to answer";
      v54 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u)));
      if ( v52 )
        v53 = "Left-click to hang up";
      sr_text_draw_recovered(v53, 512.0, sr_text_bits_float((unsigned)(uintptr_t)(v54)), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    }
    v55 = (int)dword_140404A6C[v9 + 280658140];
    if ( dword_140404A6C[1760 * v55 + 278846052] == 3 )
    {
      sr_text_draw_recovered("In Use", 640.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v48))), 24.0, 1, 0.0f, 1.0f, 0.0f, 1.0f, NULL);
      LODWORD(v55) = dword_140404A6C[v9 + 280658140];
    }
    *(float *)SR_VEC_LANES(128, v48, i32) = *(float *)SR_VEC_LANES(128, v48, i32) + 24.0;
    v56 = 1760LL * (int)v55;
    if ( dword_140404A6C[v56 + 278846052] - 1 <= 1 && (int)dword_140404A6C[v56 + 278845983] > 0 )
      sr_text_draw_recovered("Number:/i", 640.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v48))), 24.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[v56 + 278845983]});
  }
  if ( (int)dword_140404A6C[v9 + 280658139] <= 0
    || (v57 = (int)dword_140404A6C[v9 + 280658140], (_DWORD)v57 == -1)
    || dword_140404A6C[1760 * v57 + 278845898] != 39 )
  {
LABEL_41:
    sub_1400A7C70(v2, 512.0, 444.0);
  }
  glBindTexture(3553, renderer_white_texture);
  HIDWORD(v58) = 0;
  sub_14006CFF0(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, 127.0, 8, 1065353216, 1065353216, 1065353216, 1040187392);
  glBindTexture(3553, renderer_white_texture);
  sub_14006CFF0(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, (float)(int)dword_140404A6C[v9 + 280651310], 8, 1065353216, 1065353216, 1065353216, 1056964608);
  v61 = dword_140404A6C[v9 + 280651311];
  if ( v61 > 127 )
    v61 = 127;
  glBindTexture(3553, renderer_white_texture);
  v62 = 1103101952;
  *(float *)&v58 = 540.0 - (float)v61;
  sub_14006CFF0(sr_export_float_lane_container(1103101952), v58, 1103101952, 8.0, 4, 1065353216, 1065353216, 1065353216, 1063256064);
  if ( dword_140404A6C[v9 + 280651313] == -1 )
  {
    v66 = dword_140404A6C[v1 + 71856330];
    if ( v66 )
    {
      if ( v66 == 1 )
      {
        v67 = "Walk";
      }
      else
      {
        if ( v66 != 2 )
          goto LABEL_52;
        v67 = "Aim";
      }
    }
    else
    {
      v67 = "Run";
    }
    v62 = 1141833728;
    sr_text_draw_recovered(v67, 64.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440F0000u))))), 24.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
LABEL_52:
  v68 = g_183E93544;
  v69 = _mm_cvtsi32_si128((int)(0x44030000u));
  if ( !g_183E93544 )
  {
    v62 = 1141047296;
    sr_text_draw_recovered("Whisper", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44030000u))))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    v68 = g_183E93544;
    v69 = _mm_cvtsi32_si128((int)(0x44030000u));
  }
  if ( v68 == 2 )
  {
    v62 = SR_VEC_LANES(128, v69, i64)[0];
    sr_text_draw_recovered("Yell", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v69))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( !dword_140404A6C[v1 + 71856342] )
    goto LABEL_67;
  if ( g_18329CC24 )
  {
    if ( game_type == 4 )
      goto LABEL_63;
    v62 = 1082130432;
    sr_text_draw_recovered("$/I", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)local_player+71856272]});
    if ( dword_140404A6C[3597 * local_player + 71856286] <= 5 )
    {
      v62 = 1082130432;
      sr_text_draw_recovered("$/I", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)local_player+71856288]});
    }
  }
  else
  {
    v62 = 1103101952;
    sr_text_draw_recovered("Press Tab for Menu", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41C00000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( game_type == 4 )
  {
LABEL_63:
    if ( dword_140404A6C[v1 + 71856342] - 14 <= 0xC )
    {
      if ( dword_140404A6C[v1 + 71856286] != -1 )
        sr_text_draw_recovered("$/I", 196.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[v1+71856273]});
      v62 = 1082130432;
      sr_text_draw_recovered("Budget: $/I", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[v1+71856274]});
    }
  }
LABEL_67:
  v70 = (int)dword_140404A6C[v9 + 280651313];
  if ( (_DWORD)v70 != -1 && !dword_140404A6C[v9 + 280651314] )
  {
    if ( dword_140404A6C[v1 + 71856339] != 3
      || (((double (*)(_QWORD, _QWORD))glBindTexture)(3553, renderer_white_texture),
          sub_14006CFF0(sr_export_float_lane_container(1145864192), sr_export_float_lane_container(1138753536), 1098907648, 80.0, 5, 0, 0, 0, 1056964608),
          v62 = 1098907648,
          sub_14006CFF0(sr_export_float_lane_container(1145864192), sr_export_float_lane_container((unsigned __int64)COERCE_UNSIGNED_INT(
                                              448.0f
                                            - (float)((float)(*(float *)&dword_140404A6C[v1 + 71856296] * 16.0)
                                                    + (float)(*(float *)&dword_140404A6C[v1 + 71856296] * 16.0)))), 1098907648, 16.0, 5, 1065353216, 1065353216, 1065353216, 1056964608),
          !dword_140404A6C[v9 + 280651314]) )
    {
      if ( dword_140404A6C[v1 + 71856339] == 2 )
      {
        sub_140082110(
          548.0f,
          480.0f,
          36.0f,
          (float)((float)(fsqrt(
                            (float)((float)(*(float *)&dword_140404A6C[5210 * v70 + 129716744]
                                          * *(float *)&dword_140404A6C[5210 * v70 + 129716744])
                                  + (float)(*(float *)&dword_140404A6C[5210 * v70 + 129716745]
                                          * *(float *)&dword_140404A6C[5210 * v70 + 129716745]))
                          + (float)(*(float *)&dword_140404A6C[5210 * v70 + 129716746]
                                  * *(float *)&dword_140404A6C[5210 * v70 + 129716746]))
                        * 0.74564552)
                * 6.28318530718)
        - 2.3561944901925);
        sub_140082110(
          480.0f,
          480.0f,
          32.0f,
          (float)((float)((float)(int)dword_140404A6C[5210 * v70 + 129720369] * 0.00019999999) * 3.14159265359)
        - 2.3561944901925);
        glBindTexture(3553, renderer_white_texture);
        sub_14006CFF0(sr_export_float_lane_container(1145864192), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(sr_export_float_lane_container(1146388480), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(sr_export_float_lane_container(1146912768), sr_export_float_lane_container(1138753536), 1090519040, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(sr_export_float_lane_container(1146388480), sr_export_float_lane_container(1138753536), 1116733440, 8.0, 5, 0, 0, 0, 1061158912);
        sr_text_draw_recovered("1", 818.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("2", 818.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("3", 850.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("4", 850.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("A", 882.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43D20000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        sr_text_draw_recovered("R", 882.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43EE0000u))))), 16.0, 5, 1.0f, 1.0f, 1.0f, 0.75f, NULL);
        glBindTexture(3553, renderer_white_texture);
        v79 = (float)((float)(*(float *)&dword_140404A6C[v1 + 71856293] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v1 + 71856293] * 16.0))
            + 818.0;
        v80 = (float)((float)(*(float *)&dword_140404A6C[v1 + 71856295] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v1 + 71856295] * 16.0))
            + 448.0;
        v136 = v79;
        glBindTexture(3553, renderer_white_texture);
        v81 = 0.0;
        g_1AD299450 = xmmword_140279470;
        g_1AD059440 = 0;
        g_1AD059448 = 0;
        g_1AD05944C = 9;
        sr_hud_line_point[2] = 0;
        v85 = _mm_castpd_ps(sub_1401F8A50(0.0, v82, 0.0 /* unused native input */));
        *(double *)&v62 = v79;
        v86 = 64;
        v87 = *(double *)SR_VEC_LANES(128, v85, u64) * 12.0 + v79;
        v88 = v80 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v85, (__m128d)v85, 1), f64)[0] * 12.0;
        do
        {
          (*(float *)&sr_hud_line_point[0]) = v136;
          (*(float *)&sr_hud_line_point[1]) = v80;
          sub_14007D520((unsigned int *)&(*(float *)&sr_hud_line_point[0]), v83, v84);
          (*(float *)&sr_hud_line_point[0]) = v87;
          (*(float *)&sr_hud_line_point[1]) = v88;
          sub_14007D520((unsigned int *)&(*(float *)&sr_hud_line_point[0]), v89, v90);
          v81 = v81 + 0.098174773;
          v92 = _mm_castpd_ps(sub_1401F8A50(v81, v91, *(double *)&v62));
          v87 = *(double *)SR_VEC_LANES(128, v92, u64) * 12.0 + *(double *)&v62;
          (*(float *)&sr_hud_line_point[0]) = v87;
          v88 = v80 - SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v92, (__m128d)v92, 1), f64)[0] * 12.0;
          (*(float *)&sr_hud_line_point[1]) = v88;
          sub_14007D520((unsigned int *)&(*(float *)&sr_hud_line_point[0]), v93, v94);
          --v86;
        }
        while ( v86 );
        sub_14006E0D0(v95, v83, v84);
        SR_VEC_LANES(128, v7, i64)[0] = 1133510656;
      }
    }
  }
  if ( (int)dword_140404A6C[v1 + 71857714] > 0 && LOBYTE(dword_140404A6C[v1 + 71857715]) == 28 )
  {
    /* 0x140087565: movaps xmm7, xmm0 -- the pair gives the end of the line (0x1400875AF..0x1400875DD) */
    __m128d sr_pair = sub_1401F8A50(
      (float)(*(float *)&dword_140404A6C[v1 + 71856293] - *(float *)&dword_140404A6C[v1 + 71856297]),
      0,
      0.0);
    glBindTexture(3553, renderer_white_texture);
    g_1AD299450 = xmmword_140279430;
    g_1AD059440 = 2;
    g_1AD059448 = 0;
    g_1AD05944C = 9;
    sub_14007D420(512.0f, 336.0f, 0.0f);
    sub_14007D420(
      (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 64.0) + 512.0f,
      (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 336.0f,
      0.0f);
    sub_14006E0D0(0, 0, 0);
  }
  if ( (dword_140404A6C[v1 + 71856325] & 0x10) == 0 )
  {
    if ( (int)dword_140404A6C[v1 + 71857714] <= 0 )
    {
LABEL_84:
      glBindTexture(3553, renderer_white_texture);
      if ( (_DWORD)v70 == -1 )
        sub_14006CFF0(sr_export_float_lane_container(1140850688), *(double *)SR_VEC_LANES(128, v7, i64), 1082130432, 4.0, 5, 1065353216, 1065353216, 1065353216, 1056964608);
      return;
    }
    if ( dword_140404A6C[1268 * LOBYTE(dword_140404A6C[v1 + 71857715]) + 278521289] )
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
        sub_14007D420(512.0f, 288.0f - sr_s2, 0.0f);
        sub_14007D420(512.0f, 288.0f - sr_s, 0.0f);
        sub_14007D420(512.0f, sr_s + 288.0f, 0.0f);
        sub_14007D420(512.0f, sr_s2 + 288.0f, 0.0f);
        sub_14007D420(512.0f - sr_s2, 288.0f, 0.0f);
        sub_14007D420(512.0f - sr_s, 288.0f, 0.0f);
        sub_14007D420(sr_s + 512.0f, 288.0f, 0.0f);
        sub_14007D420(sr_s2 + 512.0f, 288.0f, 0.0f);
      }
      sub_14006E0D0(v130, v129, v131);
      return;
    }
  }
  if ( (int)dword_140404A6C[v1 + 71857714] <= 0 || LOBYTE(dword_140404A6C[v1 + 71857715]) != 39 )
    goto LABEL_84;
}

//----- (00000001400A77C0) ----------------------------------------------------
void sub_1400A77C0(float a1, float a2, float a3, float a4, float a5)
{
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  char v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  float sr_capsule_vertex[3];

  v8 = a3;
  v9 = a2;
  v10 = a3 - a1;
  v11 = a4 - a2;
  v12 = (float)(a1 + a3) * 0.5;
  v13 = (float)(a2 + a4) * 0.5;
  v14 = fsqrt((float)(v11 * v11) + (float)(v10 * v10));
  if ( v14 == 0.0 )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v15 = v10 * (float)(1.0 / v14);
    v16 = v11 * (float)(1.0 / v14);
  }
  v17 = 0;
  g_1AD05944C = 9;
  v18 = 0;
  g_1AD059440 = 0;
  (*(int *)(void *)&sr_capsule_vertex[2]) = 0;
  v19 = -v15;
  g_1AD059448 = 0;
  do
  {
    sr_capsule_vertex[0] = v12;
    sr_capsule_vertex[1] = v13;
    sub_14007D520((unsigned int *)&sr_capsule_vertex[0], a2, a3);
    v22 = a5 * *(float *)&dword_140404A6C[2 * v18 + 346696314];
    v23 = a5 * *(float *)&dword_140404A6C[2 * v18 + 346696315];
    v24 = (float)(v15 * v23) + (float)(v16 * v22);
    v25 = (float)(v19 * v22) + (float)(v16 * v23);
    if ( (unsigned __int64)v18 >= 0x20 )
    {
      v26 = v24 + a1;
      v27 = v25 + v9;
    }
    else
    {
      v26 = v24 + v8;
      v27 = v25 + a4;
    }
    sr_capsule_vertex[1] = v27;
    sr_capsule_vertex[0] = v26;
    sub_14007D520((unsigned int *)&sr_capsule_vertex[0], v20, v21);
    v30 = ++v17 & 0x3F;
    v31 = a5 * *(float *)&dword_140404A6C[2 * v30 + 346696314];
    v32 = a5 * *(float *)&dword_140404A6C[2 * v30 + 346696315];
    v33 = (float)(v15 * v32) + (float)(v16 * v31);
    v34 = (float)(v19 * v31) + (float)(v16 * v32);
    if ( (v17 & 0x3Fu) >= 0x20 )
    {
      v35 = v33 + a1;
      v36 = v34 + v9;
    }
    else
    {
      v35 = v33 + v8;
      v36 = v34 + a4;
    }
    sr_capsule_vertex[1] = v36;
    sr_capsule_vertex[0] = v35;
    sub_14007D520((unsigned int *)&sr_capsule_vertex[0], v28, v29);
    ++v18;
  }
  while ( v18 < 64 );
  sub_14006E0D0(v37, a2, a3);
}

//----- (00000001400A7C70) ----------------------------------------------------
__int64            sub_1400A7C70(int a1, float a2, float a3)
{
  __int64 v3;
  double v4;
  __int64 v5;
  float *v6;
  __int64 v7;
  float *v8;
  float *v9;
  char *v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float *v38;
  float *v39;
  int v40;
  __int64 v41;
  unsigned int *v42;
  float v43;
  float v44;
  __int64 v45;
  int v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  __int64 v54;
  __int64 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  char v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float sr_health_vertex[3];
  _Alignas(16) unsigned sr_health_basis[9];
  float sr_health_positions[16 * 3];
  float sr_health_rotations[16 * 9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A7C70[928];
#define v83 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 0)) /* [rsp+8h] */
#define v84 (*(float (*))(void *)(sr_frame_1400A7C70 + 48)) /* [rsp+38h] */
#define v88 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 72)) /* [rsp+50h] */
#define v89 (*(float (*))(void *)(sr_frame_1400A7C70 + 80)) /* [rsp+58h] */
#define v90 (*(float (*))(void *)(sr_frame_1400A7C70 + 84)) /* [rsp+5Ch] */
#define v91 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 88)) /* [rsp+60h] */
#define v92 (*(unsigned __int64 (*))(void *)(sr_frame_1400A7C70 + 96)) /* [rsp+68h] */
#define v101 (*(__int64 (*))(void *)(sr_frame_1400A7C70 + 912)) /* [rsp+398h] */

  v3 = a1;
  *(float *)&v91 = a3;
  v90 = a2;
  ((__int128 *)(void *)sr_health_basis)[0] = xmmword_140278D30;
  (*(int64_t *)(void *)sr_health_positions) = 0;
  (sr_health_positions + 2)[0] = 0.0;
  ((__int128 *)(void *)sr_health_basis)[1] = xmmword_140278D30;
  sr_health_basis[8] = 1065353216;
  *(_QWORD *)&v4 = dword_140404A6C[7166 * a1 + 280651341];
  v92 = 28664LL * a1;
  sub_14007B2A0((__int64)((__int128 *)(void *)sr_health_basis), (float *)((__int128 *)(void *)sr_health_basis) + 3, v4);
  v3 *= 1376;
  sub_14007AE70(sr_health_rotations, (float *)((__int128 *)(void *)sr_health_basis), (float *)((char *)&g_18430A558 + v3));
  v5 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 + 1144038864;
  v6 = (float *)&(*(char *)(void *)(sr_health_positions + 5));
  v7 = 15;
  v8 = (float *)&(*(char *)(void *)(sr_health_rotations + 11));
  v9 = (float *)(unsigned int *)&g_18399DF58;
  v10 = &(*(char *)(void *)(sr_health_rotations + 9));
  do
  {
    v11 = *((int *)v9 - 5);
    v12 = *v9;
    *(float *)&v88 = *(v9 - 1);
    v13 = sr_health_rotations[9 * v11 + 2];
    v14 = *(float *)&v88 * sr_health_rotations[9 * v11 + 1];
    v15 = (float)(*(float *)&v88 * sr_health_rotations[9 * v11]) + (sr_health_positions + 2)[3 * v11 - 2];
    v16 = sr_health_rotations[9 * v11 + 3];
    v17 = sr_health_rotations[9 * v11 + 4];
    v18 = sr_health_rotations[9 * v11 + 5];
    v19 = sr_health_rotations[9 * v11 + 6];
    v20 = sr_health_rotations[9 * v11 + 7];
    v21 = sr_health_rotations[9 * v11 + 8];
    *(v6 - 2) = v15;
    v22 = v14 + (sr_health_positions + 2)[3 * v11 - 1];
    v89 = v13;
    v84 = v9[1];
    *(v6 - 1) = v22;
    v23 = (sr_health_positions + 2)[3 * v11];
    sub_14007A010((__int64)v10, v5, (__int64)&sr_health_rotations[9 * v11]);
    v24 = *(v9 - 4) - *(v9 - 1);
    v25 = *(v9 - 3) - *v9;
    v26 = *(v9 - 2) - v9[1];
    v27 = v84 * v21;
    v28 = v25 * v8[2];
    v29 = (float)((float)((float)((float)((float)(v16 * v12) + v15) + (float)(v84 * v19)) + (float)(v24 * *(v8 - 2)))
                + (float)(v25 * v8[1]))
        + (float)(v26 * v8[4]);
    v30 = v25 * v8[3];
    v31 = v24 * *(v8 - 1);
    v32 = v24 * *v8;
    v33 = (float)((float)((float)(v17 * v12) + v22) + (float)(v84 * v20)) + v31;
    *(v6 - 2) = v29;
    v34 = v26;
    v35 = v26 * v8[6];
    v36 = v33 + v28;
    v37 = (float)((float)(v89 * *(float *)&v88) + v23) + (float)(v18 * v12);
    *(v6 - 1) = v36 + (float)(v34 * v8[5]);
    *v6 = (float)((float)((float)(v37 + v27) + v32) + v30) + v35;
    v5 += 84;
    v10 += 36;
    v9 += 25;
    v8 += 9;
    v6 += 3;
    --v7;
  }
  while ( v7 );
  v38 = (float *)&(*(int64_t *)(void *)sr_health_positions);
  v39 = (float *)&g_18399DF3C;
  *(float *)&v40 = 0.0;
  v41 = 0;
  v84 = 0.0;
  v88 = 0;
  LODWORD(sr_health_vertex[2]) = 0;
  do
  {
    if ( (unsigned int)v40 > 2 )
    {
      if ( v40 == 3 )
      {
        v42 = &g_1832A506C;
      }
      else if ( (unsigned int)(v40 - 4) > 2 )
      {
        if ( (unsigned int)(v40 - 7) > 2 )
        {
          v42 = &g_1832A5084;
          if ( (unsigned int)(v40 - 10) > 2 )
            v42 = &g_1832A508C;
        }
        else
        {
          v42 = &g_1832A507C;
        }
      }
      else
      {
        v42 = &g_1832A5074;
      }
    }
    else
    {
      v42 = &g_1832A5064;
    }
    v43 = *v39 * -0.5;
    v44 = *v39 * 0.5;
    v45 = 3 * (v41 + *((int *)v39 - 1));
    v46 = v42[v92 / 4];
    v47 = v39[1] * 64.0;
    v48 = *(float *)&v91 - (float)((float)((float)(sr_health_rotations[v45 + 1] * v43) + v38[1]) * 64.0);
    v49 = (float)((float)((float)(sr_health_rotations[v45] * v43) + *v38) * 64.0) + v90;
    v50 = *(float *)&v91 - (float)((float)((float)(sr_health_rotations[v45 + 1] * v44) + v38[1]) * 64.0);
    v51 = (float)((float)((float)(sr_health_rotations[v45] * v44) + *v38) * 64.0) + v90;
    if ( v46 >= 50 )
    {
      v52 = (float)(v46 - 50) * 0.02f;
      v53 = 1.0;
    }
    else
    {
      v52 = 0.0;
      v53 = (float)v46 * 0.02f;
    }
    glBindTexture(3553, renderer_white_texture);
    *(float *)&g_1AD299454 = v53;
    *(float *)&g_1AD299458 = v52;
    v56 = v51 - v49;
    *(unsigned int *)&g_1AD299450 = 1065353216;
    v57 = v50 - v48;
    g_1AD29945C = 1056964608;
    v58 = fsqrt((float)(v57 * v57) + (float)(v56 * v56));
    if ( v58 == 0.0 )
    {
      v60 = 0.0;
      v59 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v57;
      v60 = (float)(1.0 / v58) * v56;
    }
    g_1AD059440 = 2;
    v61 = -v60;
    v62 = 0;
    g_1AD059448 = 0;
    v63 = 0;
    g_1AD05944C = 9;
    do
    {
      v64 = v47 * *(float *)&dword_140404A6C[2 * v63 + 346696314];
      v65 = v47 * *(float *)&dword_140404A6C[2 * v63 + 346696315];
      v66 = (float)(v60 * v65) + (float)(v59 * v64);
      if ( (unsigned __int64)v63 >= 0x20 )
      {
        v67 = v66 + v49;
        v68 = v48;
      }
      else
      {
        v67 = v66 + v51;
        v68 = v50;
      }
      sr_health_vertex[0] = v67;
      sr_health_vertex[1] = v68 + (float)((float)(v59 * v65) + (float)(v61 * v64));
      sub_14007D520((unsigned int *)&sr_health_vertex[0], v54, v55);
      v71 = ++v62 & 0x3F;
      v72 = v47 * *(float *)&dword_140404A6C[2 * v71 + 346696314];
      v73 = v47 * *(float *)&dword_140404A6C[2 * v71 + 346696315];
      v74 = (float)(v60 * v73) + (float)(v59 * v72);
      v75 = (float)(v59 * v73) + (float)(v61 * v72);
      if ( (v62 & 0x3Fu) >= 0x20 )
      {
        v76 = v74 + v49;
        v77 = v75 + v48;
      }
      else
      {
        v76 = v74 + v51;
        v77 = v75 + v50;
      }
      sr_health_vertex[1] = v77;
      sr_health_vertex[0] = v76;
      sub_14007D520((unsigned int *)&sr_health_vertex[0], v69, v70);
      ++v63;
    }
    while ( v63 < 64 );
    sub_14006E0D0(v78, v54, v55);
    /* Damage fill uses named, clamped colors; light wounds must remain visible. */
    {
      extern void hud_damage_color(int health, int bleeding, float rgba[4]);
      float damage_color[4];
      hud_damage_color(v46, dword_140404A6C[v92 / 4 + 280658301] != 0, damage_color);
      if (damage_color[3] > 0.0f) {
        memcpy((unsigned int *)&g_1AD299450, damage_color, sizeof(damage_color));
        sub_1400A77C0(v49, v48, v51, v50, v47);
      }
    }
    v41 = v88 + 3;
    v40 = LODWORD(v84) + 1;
    v39 += 25;
    v84 = *(float *)&v40;
    v38 += 3;
    v88 += 3;
  }
  while ( v40 < 16 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v83
#undef v84
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v101
