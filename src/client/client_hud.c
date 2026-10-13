#include "shared_client.h"

// 1402B29C0: using guessed type char *off_1402B29C0[2];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140086000) ----------------------------------------------------
void            ui_draw_hud_menu_prompt_candidate(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  char v3; // dl
  __m128i v4; // xmm6
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __m128i v7; // xmm8
  __m128i v8; // xmm7
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __m128i v48; // xmm6
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  bool v52; // cc
  char *v53; // rcx
  unsigned int *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  double v58; // xmm6_8
  __int64 v59; // r8
  __int64 v60; // r8
  int v61; // ebx
  __int64 v62; // xmm2_8
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // eax
  char *v67; // rcx
  unsigned int v68; // eax
  __m128i v69; // xmm0
  __int64 v70; // rbp
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  float v79; // xmm7_4
  float v80; // xmm10_4
  float v81; // xmm6_4
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r8
  __m128 v85; // xmm0
  __int64 v86; // rbx
  float v87; // xmm7_4
  float v88; // xmm8_4
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rdx
  __m128 v92; // xmm0
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r8
  unsigned sr_hud_line_point[3];
  float v136; // [rsp+130h] [rbp+8h]

  if ( a1 == -1 )
    return;
  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856292];
  if ( (_DWORD)v2 != -1 )
    sub_140087810(a1, v2);
  v3 = dword_140404A6C[282487105];
  v4 = _mm_cvtsi32_si128((int)(0x43800000u));
  v5 = (LOBYTE(dword_140404A6C[282487105]) + 1) & 0x1F;
  if ( v5 != (dword_140404A6C[282487105] & 0x1F) )
  {
    do
    {
      v6 = 131LL * v5;
      if ( (int)dword_140404A6C[v6 + 282487107] > 0 )
      {
        sr_text_draw_recovered((char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v6 * 4 + 1134161792), 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4))), 24.0, 97, 1.0f, 1.0f, 1.0f, ((float)(int)dword_140404A6C[v6+282487107]*0.005f), NULL);
        v3 = dword_140404A6C[282487105];
        *(float *)SR_VEC_LANES(128, v4, i32) = *(float *)SR_VEC_LANES(128, v4, i32) + 24.0;
      }
      v5 = ((_BYTE)v5 + 1) & 0x1F;
    }
    while ( v5 != (v3 & 0x1F) );
  }
  if ( dword_140404A6C[283831448] == 3 || (_DWORD)v2 == -1 )
    return;
  if ( dword_140404A6C[284021986] || dword_140404A6C[284021985] && !dword_140404A6C[280649838] )
    sub_140088130(v2);
  v7 = _mm_cvtsi32_si128((int)(0x43900000u));
  v8 = _mm_cvtsi32_si128((int)(0x43C00000u));
  v9 = 7166 * v2;
  if ( (int)dword_140404A6C[7166 * v2 + 280658334] > 0 )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), 1132462080, 32.0, 0, 1065353216, 1065353216, 1065353216, 1040187392);
    sub_14006CFF0(sr_export_float_lane_container(1136656384), sr_export_float_lane_container(1133510656), sr_text_float_bits((float)(int)dword_140404A6C[v9+280658334]), 32.0, 0, 1065353216, 1065353216, 1065353216, 1063256064);
  }
  if ( dword_140404A6C[280649843]
    && ((int)dword_140404A6C[v9 + 280658139] > 0 || (int)dword_140404A6C[v9 + 280658149] > 0) )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    {
      /* 0x1400862F4..0x14008648E: the positions are constants and the sine/cosine pair left in xmm0
         by each call (0x14008635F, 0x1400863EC, 0x140086452); the C had dropped all of them. */
      __m128d sr_pair;
      float sr_x, sr_y;
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sub_14007D420(578.43585f, 327.50827f, 0.0f);
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sub_14007D420(578.43585f, 376.49173f, 0.0f);
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279460;
      sr_pair = sub_1401F8A50((float)(*(float *)&dword_140404A6C[v1 + 71856300] * 15.0), 0, 0.0);
      sub_14007D420(608.0f, 352.0f, 0.0f);
      sr_y = (float)(_mm_cvtsd_f64(sr_pair) * 64.0) + 352.0f;
      sr_x = 608.0f - (float)(_mm_cvtsd_f64(_mm_unpackhi_pd(sr_pair, sr_pair)) * 32.0);
      sub_14007D420(sr_x, sr_y, 0.0f);
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279410;
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
      if ( dword_140404A6C[283831312] == 4 )
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
  qword_140404050(3553, dword_140404A6C[451221642]);
  HIDWORD(v58) = 0;
  sub_14006CFF0(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, 127.0, 8, 1065353216, 1065353216, 1065353216, 1040187392);
  qword_140404050(3553, dword_140404A6C[451221642]);
  sub_14006CFF0(sr_export_float_lane_container(1103101952), sr_export_float_lane_container(1141309440), 1103101952, (float)(int)dword_140404A6C[v9 + 280651310], 8, 1065353216, 1065353216, 1065353216, 1056964608);
  v61 = dword_140404A6C[v9 + 280651311];
  if ( v61 > 127 )
    v61 = 127;
  qword_140404050(3553, dword_140404A6C[451221642]);
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
  v68 = dword_140404A6C[283785910];
  v69 = _mm_cvtsi32_si128((int)(0x44030000u));
  if ( !dword_140404A6C[283785910] )
  {
    v62 = 1141047296;
    sr_text_draw_recovered("Whisper", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44030000u))))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    v68 = dword_140404A6C[283785910];
    v69 = _mm_cvtsi32_si128((int)(0x44030000u));
  }
  if ( v68 == 2 )
  {
    v62 = SR_VEC_LANES(128, v69, i64)[0];
    sr_text_draw_recovered("Yell", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v69))), 18.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( !dword_140404A6C[v1 + 71856342] )
    goto LABEL_67;
  if ( dword_140404A6C[280649838] )
  {
    if ( dword_140404A6C[283831312] == 4 )
      goto LABEL_63;
    v62 = 1082130432;
    sr_text_draw_recovered("$/I", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)dword_140404A6C[284024501]+71856272]});
    if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] <= 5 )
    {
      v62 = 1082130432;
      sr_text_draw_recovered("$/I", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x40800000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[3597LL*(int)dword_140404A6C[284024501]+71856288]});
    }
  }
  else
  {
    v62 = 1103101952;
    sr_text_draw_recovered("Press Tab for Menu", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41C00000u))))), 24.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  if ( dword_140404A6C[283831312] == 4 )
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
      || (qword_140404050(3553, dword_140404A6C[451221642]),
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
                        * 0.7456455230712891)
                * 6.28318530718)
        - 2.3561944901925003);
        sub_140082110(
          480.0f,
          480.0f,
          32.0f,
          (float)((float)((float)(int)dword_140404A6C[5210 * v70 + 129720369] * 0.00019999999494757503) * 3.14159265359)
        - 2.3561944901925003);
        qword_140404050(3553, dword_140404A6C[451221642]);
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
        qword_140404050(3553, dword_140404A6C[451221642]);
        v79 = (float)((float)(*(float *)&dword_140404A6C[v1 + 71856293] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v1 + 71856293] * 16.0))
            + 818.0;
        v80 = (float)((float)(*(float *)&dword_140404A6C[v1 + 71856295] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v1 + 71856295] * 16.0))
            + 448.0;
        v136 = v79;
        qword_140404050(3553, dword_140404A6C[451221642]);
        v81 = 0.0;
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279470;
        dword_140404A6C[456217205] = 0;
        dword_140404A6C[456217207] = 0;
        dword_140404A6C[456217208] = 9;
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
          v81 = v81 + 0.09817477315664291;
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
    qword_140404050(3553, dword_140404A6C[451221642]);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
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
      qword_140404050(3553, dword_140404A6C[451221642]);
      if ( (_DWORD)v70 == -1 )
        sub_14006CFF0(sr_export_float_lane_container(1140850688), *(double *)SR_VEC_LANES(128, v7, i64), 1082130432, 4.0, 5, 1065353216, 1065353216, 1065353216, 1056964608);
      return;
    }
    if ( dword_140404A6C[1268 * LOBYTE(dword_140404A6C[v1 + 71857715]) + 278521289] )
    {
      qword_140404050(3553, dword_140404A6C[451221642]);
      dword_140404A6C[456217205] = 2;
      dword_140404A6C[456217207] = 0;
      dword_140404A6C[456217208] = 9;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      {
        /* 0x140087638..0x14008771A: a cross at (512, 288, 0) (xmm12 0x1400874E4, xmm8 0x1400874ED, xmm14
           0x140086272) with arms from s to 2s, s = 8.0 (xmm13, 0x140087501) / dword_140404A6C[284024514]
           (0x140087638), 2s = s + s (0x140087676). The C had lost all 24 arguments. */
        float sr_s = 8.0f / *(float *)&dword_140404A6C[284024514];
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980DA0: using guessed type unsigned int;

//----- (00000001400A77C0) ----------------------------------------------------
void sub_1400A77C0(float a1, float a2, float a3, float a4, float a5)
{
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v14; // xmm3_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  char v17; // di
  __int64 v18; // rbx
  float v19; // xmm12_4
  __int64 v20; // rdx
  __int64 v21; // r8
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  __int64 v37; // rcx
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
  dword_140404A6C[456217208] = 9;
  v18 = 0;
  dword_140404A6C[456217205] = 0;
  (*(int *)(void *)&sr_capsule_vertex[2]) = 0;
  v19 = -v15;
  dword_140404A6C[456217207] = 0;
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

// 1400A7A73: variable 'v6' is possibly undefined
// 1400A7A7C: variable 'v5' is possibly undefined
// 1400A7B8E: variable 'a2' is possibly undefined
// 1400A7B8E: variable 'a3' is possibly undefined
// 1400A7C0A: variable 'v24' is possibly undefined
// 1400A7C0A: variable 'v25' is possibly undefined
// 1400A7C5C: variable 'v33' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;

//----- (00000001400A7C70) ----------------------------------------------------
__int64            sub_1400A7C70(int a1, float a2, float a3)
{
  __int64 v3; // rbx
  double v4; // xmm2_8
  __int64 v5; // rbx
  float *v6; // r14
  __int64 v7; // r12
  float *v8; // rsi
  float *v9; // rdi
  char *v10; // r15
  __int64 v11; // rax
  float v12; // xmm15_4
  float v13; // xmm0_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm12_4
  float v22; // xmm10_4
  float v23; // xmm14_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm8_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm11_4
  float v34; // xmm1_4
  float v35; // xmm4_4
  float v36; // xmm11_4
  float v37; // xmm0_4
  float *v38; // r13
  float *v39; // r12
  int v40; // esi
  __int64 v41; // rcx
  unsigned int *v42; // rdx
  float v43; // xmm1_4
  float v44; // xmm5_4
  __int64 v45; // rcx
  int v46; // r14d
  float v47; // xmm9_4
  float v48; // xmm11_4
  float v49; // xmm8_4
  float v50; // xmm12_4
  float v51; // xmm7_4
  float v52; // xmm15_4
  float v53; // xmm14_4
  __int64 v54; // rdx
  __int64 v55; // r8
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm6_4
  float v60; // xmm10_4
  float v61; // xmm13_4
  char v62; // di
  __int64 v63; // rbx
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm3_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm3_4
  float v75; // xmm4_4
  float v76; // xmm3_4
  float v77; // xmm4_4
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  float v81; // xmm0_4
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
  sub_14007AE70(sr_health_rotations, (float *)((__int128 *)(void *)sr_health_basis), (float *)((char *)&dword_140404A6C[284956347] + v3));
  v5 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 + 1144038864;
  v6 = (float *)&(*(char *)(void *)(sr_health_positions + 5));
  v7 = 15;
  v8 = (float *)&(*(char *)(void *)(sr_health_rotations + 11));
  v9 = (float *)&dword_140404A6C[282486075];
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
  v39 = (float *)&dword_140404A6C[282486068];
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
        v42 = &dword_140404A6C[280658304];
      }
      else if ( (unsigned int)(v40 - 4) > 2 )
      {
        if ( (unsigned int)(v40 - 7) > 2 )
        {
          v42 = &dword_140404A6C[280658310];
          if ( (unsigned int)(v40 - 10) > 2 )
            v42 = &dword_140404A6C[280658312];
        }
        else
        {
          v42 = &dword_140404A6C[280658308];
        }
      }
      else
      {
        v42 = &dword_140404A6C[280658306];
      }
    }
    else
    {
      v42 = &dword_140404A6C[280658302];
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
    qword_140404050(3553, dword_140404A6C[451221642]);
    *(float *)&dword_140404A6C[456807034] = v53;
    *(float *)&dword_140404A6C[456807035] = v52;
    v56 = v51 - v49;
    dword_140404A6C[456807033] = 1065353216;
    v57 = v50 - v48;
    dword_140404A6C[456807036] = 1056964608;
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
    dword_140404A6C[456217205] = 2;
    v61 = -v60;
    v62 = 0;
    dword_140404A6C[456217207] = 0;
    v63 = 0;
    dword_140404A6C[456217208] = 9;
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
    if ( dword_140404A6C[v92 / 4 + 280658301] && v46 > 87 )
    {
      v46 = 87;
      v53 = 0.0;
      v52 = 0.0;
    }
    else
    {
      if ( v46 >= 100 )
        goto LABEL_36;
      if ( v46 < 50 )
      {
        v81 = 1.0;
        goto LABEL_35;
      }
    }
    v81 = (float)(100 - v46) * 0.02f;
LABEL_35:
    *(float *)&dword_140404A6C[456807036] = v81;
    *(float *)&dword_140404A6C[456807034] = v53;
    *(float *)&dword_140404A6C[456807035] = v52;
    dword_140404A6C[456807033] = 1065353216;
    sub_1400A77C0(v49, v48, v51, v50, v47);
LABEL_36:
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

//----- (00000001400808E0) ----------------------------------------------------
__int64 sub_1400808E0()
{
  int v0; // eax
  unsigned int *v1; // rsi
  unsigned int *v2; // rcx
  unsigned int v3; // ecx
  unsigned int *v4; // rdi
  int i; // ebx
  __m128i v6; // xmm2
  int v7; // edi
  unsigned int *v8; // rbx
  __m128i v9; // xmm8
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int *v12; // rdi
  __m128i v13; // xmm2
  __m128i v14; // xmm8
  char *v15; // rbx
  __int64 v16; // rdi
  __m128i v17; // xmm8
  int v18; // esi
  unsigned int *v19; // rdi
  int v20; // ebx
  unsigned int *v21; // rdi
  unsigned int *v22; // r8
  __m128i v23; // xmm8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400808E0[224];
#define v25 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 0)) /* [rsp+0h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 32)) /* [rsp+20h] */
#define v27 (*(int (*))(void *)(sr_frame_1400808E0 + 40)) /* [rsp+28h] */
#define v28 (*(int (*))(void *)(sr_frame_1400808E0 + 48)) /* [rsp+30h] */
#define v29 (*(int (*))(void *)(sr_frame_1400808E0 + 56)) /* [rsp+38h] */
#define v30 (*(int (*))(void *)(sr_frame_1400808E0 + 64)) /* [rsp+40h] */
#define v31 (*(double (*))(void *)(sr_frame_1400808E0 + 72)) /* [rsp+48h] */
#define v32 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 80)) /* [rsp+50h] */
#define v33 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 88)) /* [rsp+58h] */
#define v34 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 96)) /* [rsp+60h] */
#define v35 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 104)) /* [rsp+68h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 112)) /* [rsp+70h] */
#define v37 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 120)) /* [rsp+78h] */
#define v38 (*(unsigned int (*))(void *)(sr_frame_1400808E0 + 128)) /* [rsp+80h] */
#define v39 (*(char (*)[64])(void *)(sr_frame_1400808E0 + 144)) /* [rsp+90h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_1400808E0 + 208)) /* [rsp+D0h] */

  dword_140404A6C[438291413] = 2;
  v0 = 0;
  v1 = &dword_140404A6C[71859139];
  dword_140404A6C[179955148] = 0;
  v2 = &dword_140404A6C[71859139];
  do
  {
    if ( *(v2 - 2886) && !*v2 )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[711] && !v2[3597] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[4308] && !v2[7194] )
      dword_140404A6C[179955148] = ++v0;
    if ( v2[7905] && !v2[10791] )
      dword_140404A6C[179955148] = ++v0;
    v2 += 14388;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[72779971] );
  v3 = dword_140404A6C[179668286];
  if ( (int)dword_140404A6C[179668286] > 0 )
  {
    sub_140158AB0(v39, "%.2f", dword_140404A6C[179955081]);
    sr_text_draw_recovered(v39, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43FA0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080A37 */;
    sub_140158AB0(v39, "%.2f", dword_140404A6C[179955147]);
    sr_text_draw_recovered(v39, 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44010000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080AA1 */;
    v38 = dword_140404A6C[179955869];
    v37 = dword_140404A6C[179955868];
    v36 = dword_140404A6C[179955867];
    v35 = dword_140404A6C[179955866];
    v34 = dword_140404A6C[179955865];
    v33 = dword_140404A6C[179955864];
    v32 = dword_140404A6C[179955863];
    sr_text_draw_recovered("Toggle:/i /i /i /i /i /i /i /i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44050000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[179955876], dword_140404A6C[179955863], dword_140404A6C[179955864], dword_140404A6C[179955865], dword_140404A6C[179955866], dword_140404A6C[179955867], dword_140404A6C[179955868], dword_140404A6C[179955869]}) /* 0x140080B39 */;
    LODWORD(v31) = dword_140404A6C[283785903];
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_text_draw_recovered("Cheat:/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[283785903]}) /* 0x140080B88 */;
    v4 = &dword_140404A6C[308307077];
    for ( i = 0; i < 8; ++i )
    {
      LODWORD(v31) = *v4;
      v30 = 1065353216;
      v29 = 1065353216;
      v6 = _mm_castps_si128(_mm_set_ss((float)i));
      v28 = 1065353216;
      *(float *)SR_VEC_LANES(128, v6, i32) = (float)(*(float *)SR_VEC_LANES(128, v6, i32) * 16.0) + 320.0;
      v27 = 1065353216;
      LODWORD(v26) = 2;
      sr_text_draw_recovered("V:/i", 1020.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v6))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080C02 */;
      v4 += 96401;
    }
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 1 )
  {
    v7 = 0;
    if ( (int)dword_140404A6C[179955926] <= 0 )
      goto LABEL_54;
    v8 = &dword_140404A6C[179955927];
    do
    {
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v9 = _mm_castps_si128(_mm_set_ss((float)v7));
      v27 = 1065353216;
      *(float *)SR_VEC_LANES(128, v9, i32) = (float)(*(float *)SR_VEC_LANES(128, v9, i32) * 16.0) + 32.0;
      LODWORD(v26) = 32;
      sr_text_draw_recovered((char *)&dword_140404A6C[35 * v7 + 179955930], 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080CC8 */;
      v10 = *v8;
      if ( !*v8 )
      {
        LODWORD(v31) = v8[1];
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/i", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D1A */;
        v10 = *v8;
      }
      if ( v10 == 1 )
      {
        v31 = *((float *)v8 + 2);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/f", 192.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v9))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080D74 */;
      }
      ++v7;
      v8 += 35;
    }
    while ( v7 < (int)dword_140404A6C[179955926] );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 == 2 )
  {
    v11 = 0;
    v12 = &dword_140404A6C[179955149];
    do
    {
      LODWORD(v31) = *v12;
      v30 = 1065353216;
      v29 = 1065353216;
      v13 = _mm_castps_si128(_mm_set_ss((float)v11));
      v28 = 1065353216;
      *(float *)SR_VEC_LANES(128, v13, i32) = (float)(*(float *)SR_VEC_LANES(128, v13, i32) * 16.0) + 192.0;
      v27 = 1065353216;
      LODWORD(v26) = 32;
      sr_text_draw_recovered("/i", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v13))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E01 */;
      ++v11;
      ++v12;
    }
    while ( v11 < 16 );
    v14 = _mm_cvtsi32_si128((int)(0x42800000u));
    v15 = (char *)&dword_140404A6C[71856254];
    v16 = 256;
    do
    {
      if ( *(v1 - 2886) && !*v1 )
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        v26 = 0;
        sr_text_draw_recovered(v15, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v14))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080E75 */;
        *(float *)SR_VEC_LANES(128, v14, i32) = *(float *)SR_VEC_LANES(128, v14, i32) + 16.0;
      }
      v15 += 14388;
      v1 += 3597;
      --v16;
    }
    while ( v16 );
    v3 = dword_140404A6C[179668286];
  }
  if ( v3 - 3 <= 1 )
  {
    v17 = _mm_cvtsi32_si128((int)(0x43000000u));
    if ( v3 == 3 )
    {
      v18 = 64;
      if ( (int)dword_140404A6C[179457254] <= 64 )
        goto LABEL_54;
      v19 = &dword_140404A6C[179664074];
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * v18 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F43 */;
        LODWORD(v31) = *(v19 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080F8F */;
        LODWORD(v31) = *v19;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140080FDA */;
        v20 = dword_140404A6C[179457254];
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        ++v18;
        v19 += 22;
      }
      while ( v18 < (int)dword_140404A6C[179457254] );
      v3 = dword_140404A6C[179668286];
    }
    else
    {
      v20 = dword_140404A6C[179457254];
    }
    if ( v3 == 4 )
    {
      if ( v20 >= (int)dword_140404A6C[179457253] )
        goto LABEL_54;
      v21 = &dword_140404A6C[22 * v20 + 179662666];
      do
      {
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered((char *)&dword_140404A6C[22 * v20 + 179662645], 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081073 */;
        LODWORD(v31) = *(v21 - 1);
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 164.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400810BF */;
        LODWORD(v31) = *v21;
        v30 = 1065353216;
        v29 = 1065353216;
        v28 = 1065353216;
        v27 = 1065353216;
        LODWORD(v26) = 32;
        sr_text_draw_recovered("/u", 324.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v17))), 16.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008110A */;
        ++v20;
        *(float *)SR_VEC_LANES(128, v17, i32) = *(float *)SR_VEC_LANES(128, v17, i32) + 16.0;
        v21 += 22;
      }
      while ( v20 < (int)dword_140404A6C[179457253] );
      v3 = dword_140404A6C[179668286];
    }
  }
  if ( v3 == 5 )
  {
    v22 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u)));
    if ( dword_140404A6C[456202453] )
    {
      LODWORD(v31) = dword_140404A6C[456202445];
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_text_draw_recovered("Numofconnections:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v22)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[456202445]}) /* 0x140081190 */;
      v23 = _mm_cvtsi32_si128((int)(0x43340000u));
    }
    else
    {
      sr_text_draw_recovered("Roundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v22)), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[283831447]}) /* 0x1400811D1 */;
      LODWORD(v31) = dword_140404A6C[421831838];
      v30 = 1065353216;
      v29 = 1065353216;
      v28 = 1065353216;
      v27 = 1065353216;
      v26 = 0;
      sr_text_draw_recovered("ClientRoundnum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43340000u))))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[421831838]}) /* 0x140081221 */;
      v23 = _mm_cvtsi32_si128((int)(0x43480000u));
    }
    sr_text_draw_recovered("Packetsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[456202456]}) /* 0x140081276 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("MaxPacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[456202457]}) /* 0x1400812C7 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("Numofevents:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[308307070]}) /* 0x140081318 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("objpacketsize:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[179955277]}) /* 0x140081369 */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("conn0bytes:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[438887412]}) /* 0x1400813BA */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    sr_text_draw_recovered("players:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[179955148]}) /* 0x14008140B */;
    *(float *)SR_VEC_LANES(128, v23, i32) = *(float *)SR_VEC_LANES(128, v23, i32) + 20.0;
    LODWORD(v31) = dword_140404A6C[284024501];
    v30 = 1065353216;
    v29 = 1065353216;
    v28 = 1065353216;
    v27 = 1065353216;
    v26 = 0;
    sr_text_draw_recovered("playernum:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v23))), 20.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[284024501]}) /* 0x14008145C */;
  }
LABEL_54:
  dword_140404A6C[438291413] = 0;
  return 0; /* the function has no caller */
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B097E04: using guessed type unsigned int;
// 16B165F64: using guessed type unsigned int;
// 16B27E19C: using guessed type unsigned int;
// 16B27ECC8: using guessed type unsigned int;
// 16B27ECCC: using guessed type unsigned int;
// 16B27ECD0: using guessed type unsigned int;
// 16B27ECD4: using guessed type unsigned int;
// 16B27ECD8: using guessed type unsigned int;
// 16B27ECDC: using guessed type unsigned int;
// 16B27ECE0: using guessed type unsigned int;
// 183E93528: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 1A4D2DCE4: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1AD04ADA0: using guessed type unsigned int;

//----- (00000001400814D0) ----------------------------------------------------
__int64            sub_1400814D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char *v4; // rcx
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400814D0[1120];
#define v6 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 0)) /* [rsp+0h] */
#define v7 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 32)) /* [rsp+20h] */
#define v8 (*(int (*))(void *)(sr_frame_1400814D0 + 40)) /* [rsp+28h] */
#define v9 (*(int (*))(void *)(sr_frame_1400814D0 + 48)) /* [rsp+30h] */
#define v10 (*(int (*))(void *)(sr_frame_1400814D0 + 56)) /* [rsp+38h] */
#define v11 (*(int (*))(void *)(sr_frame_1400814D0 + 64)) /* [rsp+40h] */
#define v12 (*(unsigned int (*))(void *)(sr_frame_1400814D0 + 72)) /* [rsp+48h] */
#define v13 (*(char (*)[1024])(void *)(sr_frame_1400814D0 + 80)) /* [rsp+50h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1400814D0 + 1104)) /* [rsp+450h] */

  if ( a1 != -1 )
  {
    v2 = a2;
    if ( a2 != -1 )
    {
      v11 = 1065353216;
      v10 = 0;
      v3 = 3597LL * a1;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_text_draw_recovered((char *)&dword_140404A6C[v3 + 71856254], 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42400000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081599 */;
      sub_140158AB0(v13, "%03d-%04d", dword_140404A6C[v3 + 71856265] / 0x2710, dword_140404A6C[v3 + 71856265] % 0x2710);
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_text_draw_recovered(v13, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008160F */;
      v12 = dword_140404A6C[v3 + 71856275];
      v11 = 1065353216;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      sr_text_draw_recovered("Corporate rating: /i", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081663 */;
      if ( (unsigned int)v2 <= 5 )
      {
        v4 = off_1402B2890[v2];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered(v4, 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42E00000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400816B5 */;
        v12 = dword_140404A6C[v3 + 71856273];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered("$/I", 520.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081709 */;
        v12 = dword_140404A6C[v3 + 71856274];
        v11 = 1065353216;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        sr_text_draw_recovered("Budget: $/I", 680.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u))))), 16.0, 0u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140081761 */;
      }
    }
    return 0; /* the function has no caller */
  }
  return result;
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14

// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140081B60) ----------------------------------------------------
void            sub_140081B60(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int128 v5; // xmm0
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = 32901LL * a1;
  if ( !dword_140404A6C[v1 + 299853693] || dword_140404A6C[283831310] == 3 )
  {
    qword_140404050(3553, dword_140404A6C[451221642]);
    v4 = 0;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    if ( dword_140404A6C[v1 + 299853693] )
      v5 = xmmword_140279690;
    else
      v5 = xmmword_140279700;
    *(_OWORD *)&dword_140404A6C[456807033] = v5;
    v6 = &dword_140404A6C[308276353];
    {
      /* 0x140081BF4..0x140081C88: x = i + 16 (768 when dword_140404A6C[283831310] == 3), y = sample / 256 + 64
         (288), z = 0; the samples are shorts 16 bytes apart (0x140081C44 reads the one before rdi, 0x140081C65
         the one at rdi). The C had lost all three arguments of both calls. */
      float sr_x0 = 16.0f, sr_y0 = 64.0f;
      if ( dword_140404A6C[283831310] == 3 )
      {
        sr_x0 = 768.0f;
        sr_y0 = 288.0f;
      }
      do
      {
        sub_14007D420((float)v4 + sr_x0, (float)*((__int16 *)v6 - 8) * 0.00390625f + sr_y0, 0.0f);
        ++v4;
        sub_14007D420((float)v4 + sr_x0, (float)*(__int16 *)v6 * 0.00390625f + sr_y0, 0.0f);
        v6 += 4;
      }
      while ( v4 < 239 );
    }
    sub_14006E0D0(v10, v2, v3);
  }
}

// 140081C60: variable 'v2' is possibly undefined
// 140081C60: variable 'v3' is possibly undefined
// 140081C88: variable 'v8' is possibly undefined
// 140081C88: variable 'v7' is possibly undefined
// 140081C88: variable 'v9' is possibly undefined
// 140081C99: variable 'v10' is possibly undefined
// 140279690: using guessed type __int128 xmmword_140279690;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140084EB0) ----------------------------------------------------
__int64 sub_140084EB0()
{
  unsigned int v0; // eax
  __m128i v1; // xmm9
  char *v2; // rcx
  char *v3; // rcx
  unsigned int *v4; // r8
  signed int v5; // r11d
  signed int v6; // r9d
  signed int v7; // ebx
  unsigned int *v8; // r10
  char *v9; // rcx
  bool v10; // zf
  char *v11; // rax
  char *v12; // rcx
  unsigned int *v13; // r8
  signed int v14; // r11d
  signed int v15; // r9d
  signed int v16; // ebx
  unsigned int *v17; // r10
  char *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  signed int v21; // r11d
  signed int v22; // r9d
  signed int v23; // ebx
  unsigned int *v24; // r10
  char *v25; // rcx
  char *v26; // rax
  unsigned int v27; // eax
  unsigned int *v28; // rcx
  int v29; // edx
  unsigned int *v30; // rsi
  int i; // ebp
  __int64 v32; // rbx
  int v33; // edx
  float v34; // xmm10_4
  __int64 v35; // rbx
  __m128i v36; // xmm2
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140084EB0[1136];
#define v38 (*(_BYTE (*)[32])(void *)(sr_frame_140084EB0 + 0)) /* [rsp+0h] */
#define v39 (*(int (*))(void *)(sr_frame_140084EB0 + 32)) /* [rsp+20h] */
#define v40 (*(float (*))(void *)(sr_frame_140084EB0 + 40)) /* [rsp+28h] */
#define v41 (*(float (*))(void *)(sr_frame_140084EB0 + 48)) /* [rsp+30h] */
#define v42 (*(int (*))(void *)(sr_frame_140084EB0 + 56)) /* [rsp+38h] */
#define v43 (*(int (*))(void *)(sr_frame_140084EB0 + 64)) /* [rsp+40h] */
#define v44 (*(int (*))(void *)(sr_frame_140084EB0 + 72)) /* [rsp+48h] */
#define v45 (*(int (*))(void *)(sr_frame_140084EB0 + 80)) /* [rsp+50h] */
#define v46 (*(char (*)[1024])(void *)(sr_frame_140084EB0 + 96)) /* [rsp+60h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140084EB0 + 1120)) /* [rsp+460h] */

  v0 = dword_140404A6C[283831448];
  v1 = _mm_cvtsi32_si128((int)(0x43000000u));
  if ( dword_140404A6C[283831448] == 3 )
  {
    if ( (int)dword_140404A6C[283831505] <= 0 )
    {
      v2 = "Eliminator Wins!";
      if ( dword_140404A6C[284022317] != 1 )
        v2 = "Eliminators Wins!";
    }
    else
    {
      v2 = "Humans Win!";
    }
    v40 = 1.0;
    v39 = 32;
    sr_text_draw_recovered(v2, 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 32.0, 32u, 0x1.0000000000000p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140084FE7 */;
    v43 = 1065353216;
    v3 = "The Eliminator";
    v42 = 1065353216;
    v41 = 0.75;
    v4 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43000000u)));
    if ( dword_140404A6C[284022317] != 1 )
      v3 = "The Eliminators";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v3, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v4)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085040 */;
    v5 = dword_140404A6C[284022317];
    v46[0] = 0;
    v6 = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v7 = dword_140404A6C[284022317] - 1;
      v8 = &dword_140404A6C[284022319];
      do
      {
        v9 = &v38[95];
        do
          v10 = *++v9 == 0;
        while ( !v10 );
        strcpy(v9, (     char *)&dword_140404A6C[3597 * *v8 + 71856254]);
        if ( v6 < v7 )
        {
          v11 = &v38[95];
          do
            v10 = *++v11 == 0;
          while ( !v10 );
          strcpy(v11, ", ");
        }
        ++v6;
        v8 += 9;
      }
      while ( v6 < v5 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43140000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085131 */;
    v43 = 1065353216;
    v12 = "The Savior";
    v42 = 1065353216;
    v41 = 0.75;
    v13 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u)));
    if ( dword_140404A6C[284022317] != 1 )
      v12 = "The Saviors";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v12, 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v13)), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008518A */;
    v14 = dword_140404A6C[284022317];
    v15 = 0;
    v46[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v16 = dword_140404A6C[284022317] - 1;
      v17 = &dword_140404A6C[284022318];
      do
      {
        v18 = &v38[95];
        do
          v10 = *++v18 == 0;
        while ( !v10 );
        strcpy(v18, (     char *)&dword_140404A6C[3597 * *v17 + 71856254]);
        if ( v15 < v16 )
        {
          v19 = &v38[95];
          do
            v10 = *++v19 == 0;
          while ( !v10 );
          strcpy(v19, ", ");
        }
        ++v15;
        v17 += 9;
      }
      while ( v15 < v14 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008526D */;
    v20 = "The Protector";
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    if ( dword_140404A6C[284022317] != 1 )
      v20 = "The Protectors";
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v20, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400852CA */;
    v21 = dword_140404A6C[284022317];
    v22 = 0;
    v46[0] = 0;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v23 = dword_140404A6C[284022317] - 1;
      v24 = &dword_140404A6C[284022320];
      do
      {
        v25 = &v38[95];
        do
          v10 = *++v25 == 0;
        while ( !v10 );
        strcpy(v25, (     char *)&dword_140404A6C[3597 * *v24 + 71856254]);
        if ( v22 < v23 )
        {
          v26 = &v38[95];
          do
            v10 = *++v26 == 0;
          while ( !v10 );
          strcpy(v26, ", ");
        }
        ++v22;
        v24 += 9;
      }
      while ( v22 < v21 );
    }
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered(v46, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43860000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400853B1 */;
    v0 = dword_140404A6C[283831448];
  }
  if ( v0 == 1 )
  {
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    dword_140404A6C[438291413] = 2;
    v39 = 32;
    sr_text_draw_recovered("THE ELIMINATOR", 256.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 32.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085416 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("It is the present, the year 1985.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008545D */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("A robot from the year 2019 has been sent back in time", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854A8 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("to eliminate the future resistance leader.  The future people", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400854F3 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("also sent someone back to stop the robot.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008553E */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("The Eliminator", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43240000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085592 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("You must kill the future resistance leader.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x433C0000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400855D9 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("A red box will appear in the HUD showing their last known location.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43500000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085620 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("The Protector", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43780000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008566B */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("You must stop The Eliminator, the only way to destroy it is with grenades.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43880000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400856B6 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("Civilian//The Savior", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439C0000u))))), 24.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140085701 */;
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 0.75;
    v40 = 0.75;
    v39 = 32;
    sr_text_draw_recovered("Your goal is to survive, one of you is the future savior of mankind.", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43A80000u))))), 20.0, 32u, 0x1.8000000000000p-1f, 0x1.8000000000000p-1f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008574C */;
    v27 = 0;
    v28 = &dword_140404A6C[71859139];
    dword_140404A6C[346695797] = 0;
    v29 = 0;
    v30 = &dword_140404A6C[346695798];
    do
    {
      if ( *(v28 - 2886) && !*v28 )
      {
        dword_140404A6C[2 * v27 + 346695798] = v29;
        v27 = ++dword_140404A6C[346695797];
      }
      ++v29;
      v28 += 3597;
    }
    while ( v29 < 256 );
    v43 = 1065353216;
    v42 = 1065353216;
    v41 = 1.0;
    v40 = 1.0;
    v39 = 96;
    sr_text_draw_recovered("The Players", 776.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C40000u))))), 17.5, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400857F9 */;
    for ( i = 0; i < (int)dword_140404A6C[346695797]; v30 += 2 )
    {
      v32 = *v30;
      if ( (unsigned int)v32 > 0xFF )
        v32 = 0;
      if ( dword_140404A6C[283831448] != 2 && (_DWORD)v32 != dword_140404A6C[284024501] )
      {
        v45 = 1065353216;
        v44 = 1065353216;
        v43 = 1065353216;
        v42 = 1065353216;
        v41 = 0.0;
        v40 = 24.0;
        v39 = 1103101952;
        if ( dword_140404A6C[v32 + 284023074] )
          v33 = dword_140404A6C[346696312];
        else
          v33 = dword_140404A6C[3597 * (unsigned int)v32 + 71856270]
              ? dword_140404A6C[346696311]
              : dword_140404A6C[346696310];
        sr_CSDrawAtlasEntry(0, v33, 752.0, *(float *)SR_VEC_LANES(128, v1, i32), *(float *)&v39, v40, SLOBYTE(v41), v42, v43, v44, v45);
        if ( dword_140404A6C[284024633] )
        {
          if ( !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= 752.0
            && *(float *)&dword_140404A6C[284024597] < 776.0
            && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v1, i32)
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v1, i32) + 24.0) )
          {
            dword_140404A6C[v32 + 284023074] ^= 1u;
          }
        }
      }
      v34 = 1.0;
      if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v32 + 71856271] )
        v34 = 0.5;
      v43 = 1065353216;
      v42 = LODWORD(v34);
      v35 = 3597LL * (unsigned int)v32;
      v41 = v34 * 0.75;
      v40 = v34 * 0.75;
      v39 = 96;
      sr_CSDrawText(
        (char *)&dword_140404A6C[v35 + 71856254],
        776.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v1),
        17.5);
      sub_140158AB0(
        v46,
        "%03d-%04d",
        dword_140404A6C[v35 + 71856265] / 0x2710,
        dword_140404A6C[v35 + 71856265] % 0x2710);
      v43 = 1065353216;
      v36 = v1;
      *(float *)SR_VEC_LANES(128, v36, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 18.0;
      v42 = LODWORD(v34);
      v41 = v34 * 0.75;
      v40 = v34 * 0.75;
      v39 = 96;
      sr_CSDrawText(v46, 776.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v36), 10.0);
      ++i;
      *(float *)SR_VEC_LANES(128, v1, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 24.0;
    }
  }
  dword_140404A6C[438291413] = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCCC: using guessed type unsigned int;
// 183F7A320: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140088C00) ----------------------------------------------------
void sub_140088C00()
{
  __int64 v0; // rax
  __m128i v1; // xmm8
  unsigned int *v2; // rdi
  unsigned int *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  int v6; // edx

  sr_text_draw_recovered("Spectating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44000000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088C8D */;
  if ( dword_140404A6C[284021982] != -1 )
  {
    v0 = (int)dword_140404A6C[7166 * dword_140404A6C[284021982] + 280651305];
    if ( (_DWORD)v0 != -1 )
      sr_CSDrawText(
        (char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * v0 + 291638372),
        512.0,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44040000u))),
        20.0);
  }
  sr_text_draw_recovered("Press Space to switch player", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088D9C */;
  sr_text_draw_recovered("Press 1 for freecam", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440D0000u))))), 16.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140088DE6 */;
  v1 = _mm_cvtsi32_si128((int)(0x42800000u));
  v2 = &dword_140404A6C[284023074];
  v3 = &dword_140404A6C[71859139];
  v4 = (char *)&dword_140404A6C[71856254];
  v5 = 256;
  do
  {
    if ( *(v3 - 2886) && !*v3 && *(v3 - 2847) == -1 )
    {
      sr_CSDrawText(v4, 772.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v1), 20.0);
      if ( *v2 )
      {
        v6 = dword_140404A6C[346696312];
      }
      else if ( *(v3 - 2869) )
      {
        v6 = dword_140404A6C[346696311];
      }
      else
      {
        v6 = dword_140404A6C[346696310];
      }
      sr_CSDrawAtlasEntry(0, v6, 752.0, *(float *)SR_VEC_LANES(128, v1, i32), 20.0, 20.0, 0, 1065353216, 1065353216, 1065353216, 1065353216);
      *(float *)SR_VEC_LANES(128, v1, i32) = *(float *)SR_VEC_LANES(128, v1, i32) + 20.0;
    }
    v4 += 14388;
    ++v2;
    v3 += 3597;
    --v5;
  }
  while ( v5 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;

//----- (0000000140088F80) ----------------------------------------------------
double sub_140088F80()
{
  __m128i si128; // xmm5
       __m128i *v1; // rax
  __m128i v2; // xmm6
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  double result; // xmm0_8

  sr_CSDrawText("Ping:", 0.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))), 16.0);
  sr_text_draw_recovered("/i", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, (const uint64[]){dword_140404A6C[430859699]}) /* 0x14008903F */;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279150);
  v1 = (     __m128i *)&dword_140404A6C[430859706];
  v2 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
  v3 = _mm_cvtsi64_si128((long long)(0));
  v4 = _mm_cvtsi64_si128((long long)(0));
  do
  {
    v5 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(v1 - 1), _mm_cvtsi32_si128((int)(0LL))), v2);
    v3 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v3), v5), _mm_andnot_si128(v5, v3));
    v6 = _mm_loadu_si128(v1);
    v1 += 2;
    v7 = _mm_andnot_si128(_mm_cmpeq_epi32(v6, _mm_cvtsi32_si128((int)(0LL))), v2);
    v4 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(si128, v4), v7), _mm_andnot_si128(v7, v4));
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[430859962] );
  v8 = _mm_add_epi32(v4, v3);
  sr_text_draw_recovered("Packetloss:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008912C */;
  sr_text_draw_recovered("/i%", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 2u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x140089183 */;
  *(_QWORD *)&result = SR_VEC_READ_LANES(128, _mm_srli_si128(_mm_add_epi32(v8, _mm_srli_si128(v8, 8)), 4), u64)[0];
  return result;
}

// 140279150: using guessed type __int128 xmmword_140279150;
// 1402799B0: using guessed type __int128 xmmword_1402799B0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140089430) ----------------------------------------------------
void sub_140089430()
{
  __int64 v0; // r8
  int v1; // ebp
  __int64 v2; // r14
  __m128i v3; // xmm6
  __m128i v4; // xmm9
  float v5; // xmm14_4
  float v6; // xmm6_4
  int v7; // r8d
  float v8; // xmm1_4
  int v9; // eax
  float v10; // xmm1_4
  unsigned int *v11; // r8
  char *v12; // rcx
  float v13; // xmm14_4
  int v14; // ebx
  unsigned int *v15; // rdx
  __m128i v16; // xmm9
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // r8
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // r8
  int v25; // r10d
  __int64 v26; // r8
  int v27; // r10d
  __int64 v28; // r8
  int v29; // r10d
  __int64 v30; // r8
  int v31; // r10d
  __int64 v32; // r8
  int v33; // r10d
  int v34; // r8d
  __int64 v35; // rdx
  __m128i si128; // xmm4
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  unsigned int *v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  int v44; // esi
  unsigned int *v45; // rdi
  unsigned int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // edx

  qword_140404050(3553, dword_140404A6C[451221642]);
  sub_14006CFF0(sr_export_float_lane_container(0x40000000), sr_export_float_lane_container(1123811328), 0x447F0000 /* native XMM2 width 1020.0f */, 480.0, 0, 0, 0, 0, 1056964608);
  if ( dword_140404A6C[283831312] == 3 )
  {
    v1 = 0;
    v2 = 0;
    v3 = _mm_cvtsi32_si128((int)(0x43000000u));
    v4 = _mm_cvtsi32_si128((int)(0x42D00000u));
    do
    {
      v5 = (float)v1 * 252.0;
      if ( (unsigned int)v1 >= 3 )
      {
        sr_CSDrawText(Parameters, v5 + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4), 24.0);
      }
      else
      {
        v6 = v5 + 8.0;
        sr_CSDrawText(off_1402B2890[v2], v5 + 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4), 24.0);
        if ( dword_140404A6C[283831448] == 3 && (v7 = dword_140404A6C[6 * v2 + 335047065]) != 0 )
        {
          v8 = (float)((float)((float)((int)dword_140404A6C[6 * v2 + 335047064] / 10) * 100.0) / (float)v7) - 100.0;
          if ( v8 <= 0.0 )
          {
            if ( v8 < 0.0 )
              v8 = v8 - 0.5;
          }
          else
          {
            v8 = v8 + 0.5;
          }
          v9 = (int)v8;
          v10 = v6 + 228.0;
          v11 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4);
          if ( v9 < -50 )
          {
            v12 = "$/i(Split)";
          }
          else
          {
            v12 = "$/i(+/i%)";
            if ( v9 <= 0 )
              v12 = "$/i(/i%)";
          }
        }
        else
        {
          v10 = v6 + 228.0;
          v11 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4);
          v12 = "$/i";
        }
        sr_CSDrawText(v12, v10, v11, 24.0);
        v3 = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      v13 = v5 + 4.0;
      if ( !dword_140404A6C[283831448] )
        sr_text_draw_recovered("/i.", v13, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v4))), 24.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008982D */;
      v14 = 0;
      v15 = &dword_140404A6C[71859139];
      dword_140404A6C[346695797] = 0;
      v16 = v3;
      v17 = 2;
      do
      {
        if ( *(v15 - 2886) )
        {
          if ( !*v15 )
          {
            v18 = (int)*(v15 - 2853);
            if ( (_DWORD)v18 == v1 || v2 == 3 && (_DWORD)v18 == 17 )
            {
              v19 = *(v15 - 2867);
              dword_140404A6C[2 * v14 + 346695798] = v17 - 2;
              if ( (_DWORD)v18 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v19;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v18 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)*(v15 - 2851))
                                                                                         + (float)v19);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[711] )
        {
          if ( !v15[3597] )
          {
            v20 = (int)v15[744];
            if ( (_DWORD)v20 == v1 || v2 == 3 && (_DWORD)v20 == 17 )
            {
              v21 = v15[730];
              dword_140404A6C[2 * v14 + 346695798] = v17 - 1;
              if ( (_DWORD)v20 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v21;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v20 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[746])
                                                                                         + (float)v21);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[4308] )
        {
          if ( !v15[7194] )
          {
            v22 = (int)v15[4341];
            if ( (_DWORD)v22 == v1 || v2 == 3 && (_DWORD)v22 == 17 )
            {
              v23 = v15[4327];
              dword_140404A6C[2 * v14 + 346695798] = v17;
              if ( (_DWORD)v22 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[4343])
                                                                                         + (float)v23);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[7905] )
        {
          if ( !v15[10791] )
          {
            v24 = (int)v15[7938];
            if ( (_DWORD)v24 == v1 || v2 == 3 && (_DWORD)v24 == 17 )
            {
              v25 = v15[7924];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 1;
              if ( (_DWORD)v24 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[7940])
                                                                                         + (float)v25);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[11502] )
        {
          if ( !v15[14388] )
          {
            v26 = (int)v15[11535];
            if ( (_DWORD)v26 == v1 || v2 == 3 && (_DWORD)v26 == 17 )
            {
              v27 = v15[11521];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 2;
              if ( (_DWORD)v26 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[11537])
                                                                                         + (float)v27);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[15099] )
        {
          if ( !v15[17985] )
          {
            v28 = (int)v15[15132];
            if ( (_DWORD)v28 == v1 || v2 == 3 && (_DWORD)v28 == 17 )
            {
              v29 = v15[15118];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 3;
              if ( (_DWORD)v28 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[15134])
                                                                                         + (float)v29);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[18696] )
        {
          if ( !v15[21582] )
          {
            v30 = (int)v15[18729];
            if ( (_DWORD)v30 == v1 || v2 == 3 && (_DWORD)v30 == 17 )
            {
              v31 = v15[18715];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 4;
              if ( (_DWORD)v30 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[18731])
                                                                                         + (float)v31);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v15[22293] )
        {
          if ( !v15[25179] )
          {
            v32 = (int)v15[22326];
            if ( (_DWORD)v32 == v1 || v2 == 3 && (_DWORD)v32 == 17 )
            {
              v33 = v15[22312];
              dword_140404A6C[2 * v14 + 346695798] = v17 + 5;
              if ( (_DWORD)v32 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.10000000149011612)
                                                                                                 * (float)(int)v15[22328])
                                                                                         + (float)v33);
              v14 = ++dword_140404A6C[346695797];
            }
          }
        }
        v17 += 8;
        v15 += 28776;
      }
      while ( (int)(v17 - 2) < 256 );
      dword_140404A6C[436668493] = v14;
      v34 = 0;
      v35 = 0;
      if ( v14 >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          v34 += 8;
          v37 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695813]);
          v38 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695811]);
          v39 = _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695807]);
          *(__m128i *)&dword_140404A6C[v35 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695805]))));
          *(__m128i *)&dword_140404A6C[v35 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                v39,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v35 + 346695809])),
                                                              _mm_unpacklo_epi32(v38, v37)));
          v35 += 8;
        }
        while ( v35 < v14 - (v14 & 7) );
      }
      if ( v34 < v14 )
      {
        v40 = &dword_140404A6C[v35 + 437192782];
        v41 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v35 + 1390996552);
        v42 = (unsigned int)(v14 - v34);
        do
        {
          ++v40;
          v43 = -1879048193 - *v41;
          v41 += 2;
          *(v40 - 1) = v43;
          --v42;
        }
        while ( v42 );
      }
      sub_14007D710();
      v44 = 0;
      if ( v14 > 0 )
      {
        v45 = &dword_140404A6C[436668494];
        do
        {
          v46 = dword_140404A6C[2 * *v45 + 346695798];
          if ( v46 > 0xFF )
            v46 = 0;
          v47 = 3597LL * v46;
          sr_CSDrawText(
            (char *)&dword_140404A6C[v47 + 71856254],
            v13,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16),
            24.0);
          v48 = (int)dword_140404A6C[v47 + 71856286];
          v49 = dword_140404A6C[v47 + 71856272];
          if ( (_DWORD)v48 != -1 )
            v49 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v48 + 335047064] * 0.10000000149011612)
                                     * (float)(int)dword_140404A6C[v47 + 71856288])
                             + (float)v49);
          dword_140404A6C[v47 + 71856278] = v49;
          sr_text_draw_recovered("$/I", v13 + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16))), 24.0, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A01C */;
          ++v44;
          *(float *)SR_VEC_LANES(128, v16, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 24.0;
          ++v45;
        }
        while ( v44 < (int)dword_140404A6C[346695797] );
        v3 = _mm_cvtsi32_si128((int)(0x43000000u));
      }
      v4 = _mm_cvtsi32_si128((int)(0x42D00000u));
      ++v1;
      ++v2;
    }
    while ( v1 < 4 );
  }
}

// 140089DCC: conditional instruction was optimized away because ebx.4>=8
// 140089DC6: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 14008949D: variable 'v0' is possibly undefined
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E8EC40: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;

//----- (000000014008A110) ----------------------------------------------------
__int64 sub_14008A110()
{
  unsigned int v0; // eax
  char *v1; // rcx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  char *v8; // rcx
  bool v9; // zf
  __m128i v10; // xmm4
  int v11; // ebp
  __int64 v12; // rsi
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm14_4
  char *v17; // rcx
  int v18; // r9d
  float v19; // xmm1_4
       char *v20; // rdx
  __m128i v21; // xmm15
  int v22; // ebx
  unsigned int v23; // r9d
  unsigned int *v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r8
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  __m128i si128; // xmm4
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  unsigned int *v47; // rcx
  _DWORD *v48; // rdx
  __int64 v49; // r8
  int v50; // eax
  int v51; // r14d
  unsigned int *v52; // rdi
  float v53; // xmm10_4
  __int64 v54; // rbx
  int v55; // edx
  float v56; // xmm0_4
  __int64 v57; // rbx
  __m128i v58; // xmm2
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008A110[640];
#define v60 (*(__int64 (*))(void *)(sr_frame_14008A110 + 0)) /* [rsp+0h] */
#define v61 (*(int (*))(void *)(sr_frame_14008A110 + 32)) /* [rsp+20h] */
#define v62 (*(float (*))(void *)(sr_frame_14008A110 + 40)) /* [rsp+28h] */
#define v63 (*(float (*))(void *)(sr_frame_14008A110 + 48)) /* [rsp+30h] */
#define v64 (*(float (*))(void *)(sr_frame_14008A110 + 56)) /* [rsp+38h] */
#define v65 (*(int (*))(void *)(sr_frame_14008A110 + 64)) /* [rsp+40h] */
#define v66 (*(int (*))(void *)(sr_frame_14008A110 + 72)) /* [rsp+48h] */
#define v67 (*(int (*))(void *)(sr_frame_14008A110 + 80)) /* [rsp+50h] */
#define v68 (*(float (*))(void *)(sr_frame_14008A110 + 96)) /* [rsp+60h] */
#define v69 (*(float (*))(void *)(sr_frame_14008A110 + 100)) /* [rsp+64h] */
#define v70 (*(float (*))(void *)(sr_frame_14008A110 + 104)) /* [rsp+68h] */
#define v71 (*(char (*)[512])(void *)(sr_frame_14008A110 + 112)) /* [rsp+70h] */
#define v72 (*(__int64 (*))(void *)(sr_frame_14008A110 + 624)) /* [rsp+270h] */

  if ( dword_140404A6C[283831441] != 1 )
    goto LABEL_16;
  v0 = dword_140404A6C[283831446];
  if ( (int)dword_140404A6C[283831446] >= 7 )
  {
LABEL_5:
    if ( dword_140404A6C[283831448] != 3 || v0 != 5 )
      goto LABEL_16;
    v2 = 0;
    v3 = dword_140404A6C[335047064];
    v4 = 0;
    if ( (int)dword_140404A6C[335047070] > (int)dword_140404A6C[335047064] )
    {
      v2 = 1;
      v3 = dword_140404A6C[335047070];
      v4 = 1;
    }
    if ( (int)dword_140404A6C[335047076] > v3 )
    {
      v5 = dword_1402B2848;
      v6 = dword_1402B284C;
      v7 = dword_1402B2850;
LABEL_14:
      v8 = "OXS Wins!";
      goto LABEL_15;
    }
    v5 = dword_1402B2830[3 * v4];
    v6 = dword_1402B2834[3 * v4];
    v7 = dword_1402B2838[3 * v4];
    if ( v2 )
    {
      v9 = v2 == 1;
      v8 = "Monsota Wins!";
      if ( !v9 )
        goto LABEL_14;
    }
    else
    {
      v8 = "Goldmen Wins!";
    }
LABEL_15:
    v65 = 1065353216;
    v64 = *(float *)&v7;
    v63 = *(float *)&v6;
    v62 = *(float *)&v5;
    v61 = 33;
    sr_text_draw_recovered(v8, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A207 */;
    goto LABEL_16;
  }
  v1 = off_1402B2920[dword_140404A6C[283831446]];
  v65 = 1065353216;
  v64 = 1.0;
  v63 = 1.0;
  v62 = 1.0;
  v61 = 32;
  sr_CSDrawText(v1, 8.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))), 20.0);
  if ( dword_140404A6C[283831441] == 1 )
  {
    v0 = dword_140404A6C[283831446];
    goto LABEL_5;
  }
LABEL_16:
  v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
  v11 = 0;
  v12 = 0;
  do
  {
    if ( (unsigned int)v11 >= 3 )
    {
      v13 = 1.0;
      v14 = 1.0;
      v15 = 1.0;
      goto LABEL_21;
    }
    v13 = *(float *)&dword_1402B2830[3 * v12];
    v14 = *(float *)&dword_1402B2834[3 * v12];
    v15 = *(float *)&dword_1402B2838[3 * v12];
    v68 = v13;
    v70 = v14;
    v69 = v15;
    if ( v11 == 2 )
    {
      v13 = v13 * 1.5;
      v14 = v14 * 1.5;
      v15 = v15 * 1.5;
LABEL_21:
      v69 = v15;
      v70 = v14;
      v68 = v13;
    }
    v16 = (float)((float)v11 * 248.0) + 8.0;
    if ( dword_140404A6C[283831312] == 3 && (unsigned int)v11 < 3 )
    {
      v17 = off_1402B2890[v12];
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 96;
      sr_text_draw_recovered(v17, v16, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10))), 20.0, 96u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A441 */;
      if ( dword_140404A6C[283831448] == 3 && (v18 = dword_140404A6C[6 * v12 + 335047065]) != 0 )
      {
        v19 = (float)((float)((float)((int)dword_140404A6C[6 * v12 + 335047064] / 10) * 100.0) / (float)v18) - 100.0;
        if ( v19 <= 0.0 )
        {
          if ( v19 < 0.0 )
            v19 = v19 - 0.5;
        }
        else
        {
          v19 = v19 + 0.5;
        }
        if ( (int)v19 < -50 )
        {
          sub_140158AB0(v71, "$%d(Split)");
        }
        else
        {
          v20 = "$%d(+%d%%)";
          if ( (int)v19 <= 0 )
            v20 = "$%d(%d%%)";
          sub_140158AB0(v71, v20);
        }
      }
      else
      {
        sub_140158AB0(v71, "$%d");
      }
      v65 = 1065353216;
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = 34;
      sr_text_draw_recovered(v71, v16 + 240.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 34u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A56B */;
      if ( dword_140404A6C[283831448] == 3 )
      {
        v66 = dword_140404A6C[5873 * v12 + 283831505];
        v65 = 1065353216;
        v64 = v15;
        v63 = v14;
        v62 = v13;
        v61 = 32;
        sr_text_draw_recovered("Bonus:$/i", v16, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))))), 17.5, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008A5CF */;
      }
    }
    v21 = _mm_cvtsi32_si128((int)(0x43000000u));
    v22 = 0;
    dword_140404A6C[346695797] = 0;
    v23 = 2;
    v24 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v24 - 2886) )
      {
        if ( !*v24 )
        {
          v25 = (int)*(v24 - 2853);
          if ( (_DWORD)v25 == v11 || v12 == 3 && (_DWORD)v25 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 - 2;
            if ( (_DWORD)v25 == -1 || (int)v25 >= 6 )
              v26 = *(v24 - 2867);
            else
              v26 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v25 + 335047064] * 0.10000000149011612)
                                       * (float)(int)*(v24 - 2851))
                               + (float)(int)*(v24 - 2867));
            *(v24 - 2861) = v26;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v26;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[711] )
      {
        if ( !v24[3597] )
        {
          v27 = (int)v24[744];
          if ( (_DWORD)v27 == v11 || v12 == 3 && (_DWORD)v27 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 - 1;
            if ( (_DWORD)v27 == -1 || (int)v27 >= 6 )
              v28 = v24[730];
            else
              v28 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v27 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[746])
                               + (float)(int)v24[730]);
            v24[736] = v28;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v28;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[4308] )
      {
        if ( !v24[7194] )
        {
          v29 = (int)v24[4341];
          if ( (_DWORD)v29 == v11 || v12 == 3 && (_DWORD)v29 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23;
            if ( (_DWORD)v29 == -1 || (int)v29 >= 6 )
              v30 = v24[4327];
            else
              v30 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v29 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[4343])
                               + (float)(int)v24[4327]);
            v24[4333] = v30;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v30;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[7905] )
      {
        if ( !v24[10791] )
        {
          v31 = (int)v24[7938];
          if ( (_DWORD)v31 == v11 || v12 == 3 && (_DWORD)v31 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 1;
            if ( (_DWORD)v31 == -1 || (int)v31 >= 6 )
              v32 = v24[7924];
            else
              v32 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v31 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[7940])
                               + (float)(int)v24[7924]);
            v24[7930] = v32;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v32;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[11502] )
      {
        if ( !v24[14388] )
        {
          v33 = (int)v24[11535];
          if ( (_DWORD)v33 == v11 || v12 == 3 && (_DWORD)v33 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 2;
            if ( (_DWORD)v33 == -1 || (int)v33 >= 6 )
              v34 = v24[11521];
            else
              v34 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v33 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[11537])
                               + (float)(int)v24[11521]);
            v24[11527] = v34;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v34;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[15099] )
      {
        if ( !v24[17985] )
        {
          v35 = (int)v24[15132];
          if ( (_DWORD)v35 == v11 || v12 == 3 && (_DWORD)v35 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 3;
            if ( (_DWORD)v35 == -1 || (int)v35 >= 6 )
              v36 = v24[15118];
            else
              v36 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v35 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[15134])
                               + (float)(int)v24[15118]);
            v24[15124] = v36;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v36;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[18696] )
      {
        if ( !v24[21582] )
        {
          v37 = (int)v24[18729];
          if ( (_DWORD)v37 == v11 || v12 == 3 && (_DWORD)v37 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 4;
            if ( (_DWORD)v37 == -1 || (int)v37 >= 6 )
              v38 = v24[18715];
            else
              v38 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v37 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[18731])
                               + (float)(int)v24[18715]);
            v24[18721] = v38;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v38;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v24[22293] )
      {
        if ( !v24[25179] )
        {
          v39 = (int)v24[22326];
          if ( (_DWORD)v39 == v11 || v12 == 3 && (_DWORD)v39 == 17 )
          {
            dword_140404A6C[2 * v22 + 346695798] = v23 + 5;
            if ( (_DWORD)v39 == -1 || (int)v39 >= 6 )
              v40 = v24[22312];
            else
              v40 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v39 + 335047064] * 0.10000000149011612)
                                       * (float)(int)v24[22328])
                               + (float)(int)v24[22312]);
            v24[22318] = v40;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v40;
            v22 = ++dword_140404A6C[346695797];
          }
        }
      }
      v23 += 8;
      v24 += 28776;
    }
    while ( (int)(v23 - 2) < 256 );
    dword_140404A6C[436668493] = v22;
    v41 = 0;
    v42 = 0;
    if ( v22 >= 8 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
      do
      {
        v41 += 8;
        v44 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695813]);
        v45 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695811]);
        v46 = _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695807]);
        *(__m128i *)&dword_140404A6C[v42 + 437192782] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695799]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695801])),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695803]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695805]))));
        *(__m128i *)&dword_140404A6C[v42 + 437192786] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              v46,
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v42 + 346695809])),
                                                            _mm_unpacklo_epi32(v45, v44)));
        v42 += 8;
      }
      while ( v42 < v22 - (v22 & 7) );
    }
    if ( v41 < v22 )
    {
      v47 = &dword_140404A6C[v42 + 437192782];
      v48 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v42 + 1390996552);
      v49 = (unsigned int)(v22 - v41);
      do
      {
        ++v47;
        v50 = -1879048193 - *v48;
        v48 += 2;
        *(v47 - 1) = v50;
        --v49;
      }
      while ( v49 );
    }
    sub_14007D710();
    dword_140404A6C[438291413] = 2;
    v51 = 0;
    if ( v22 > 0 )
    {
      v52 = &dword_140404A6C[436668494];
      v53 = v16 + 24.0;
      do
      {
        v54 = dword_140404A6C[2 * *v52 + 346695798];
        if ( (unsigned int)v54 > 0xFF )
          v54 = 0;
        if ( dword_140404A6C[283831448] != 2 )
        {
          v67 = 1065353216;
          v66 = 1065353216;
          v65 = 1065353216;
          v64 = 1.0;
          v63 = 0.0;
          v62 = 24.0;
          v61 = 1103101952;
          if ( dword_140404A6C[v54 + 284023074] )
            v55 = dword_140404A6C[346696312];
          else
            v55 = dword_140404A6C[3597 * (unsigned int)v54 + 71856270]
                ? dword_140404A6C[346696311]
                : dword_140404A6C[346696310];
          sr_CSDrawAtlasEntry(
            0,
            v55,
            v16,
            *(float *)SR_VEC_LANES(128, v21, i32),
            *(float *)&v61,
            v62,
            SLOBYTE(v63),
            SLODWORD(v64),
            v65,
            v66,
            v67);
          if ( (_DWORD)v54 != dword_140404A6C[284024501]
            && dword_140404A6C[284024633]
            && !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= v16
            && *(float *)&dword_140404A6C[284024597] < v53
            && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v21, i32)
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v21, i32) + 24.0) )
          {
            sub_140117820(v54);
          }
        }
        v56 = 1.0;
        if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v54 + 71856271] )
          v56 = 0.5;
        v65 = 1065353216;
        v57 = 3597LL * (unsigned int)v54;
        v64 = v15 * v56;
        v63 = v14 * v56;
        v62 = v68 * v56;
        v61 = 96;
        sr_CSDrawText(
          (char *)&dword_140404A6C[v57 + 71856254],
          v53,
          (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v21),
          17.5);
        sub_140158AB0(
          v71,
          "%03d-%04d",
          dword_140404A6C[v57 + 71856265] / 0x2710,
          dword_140404A6C[v57 + 71856265] % 0x2710);
        v65 = 1065353216;
        v58 = v21;
        *(float *)SR_VEC_LANES(128, v58, i32) = *(float *)SR_VEC_LANES(128, v21, i32) + 18.0;
        v62 = v68 * v56;
        v61 = 96;
        sr_CSDrawText(v71, v53, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v58), 10.0);
        v15 = v69;
        v14 = v70;
        v66 = dword_140404A6C[v57 + 71856278];
        v65 = 1065353216;
        v64 = v69;
        v63 = v70;
        v62 = v68;
        v61 = 34;
        sr_CSDrawText("$/I", v16 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v21), 17.5);
        ++v51;
        *(float *)SR_VEC_LANES(128, v21, i32) = *(float *)SR_VEC_LANES(128, v21, i32) + 24.0;
        ++v52;
      }
      while ( v51 < (int)dword_140404A6C[346695797] );
    }
    ++v11;
    ++v12;
    v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
    dword_140404A6C[438291413] = 0;
  }
  while ( v11 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

// 14008ABBF: conditional instruction was optimized away because ebx.4>=8
// 14008ABB9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2830: using guessed type int dword_1402B2830[];
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2838: using guessed type int dword_1402B2838[];
// 1402B2848: using guessed type int dword_1402B2848;
// 1402B284C: using guessed type int dword_1402B284C;
// 1402B2850: using guessed type int dword_1402B2850;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 1402B2920: using guessed type char *off_1402B2920[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC4: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 19021F0CC: using guessed type unsigned int;
// 19021F0E4: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 192E8F450: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (000000014008B050) ----------------------------------------------------
__int64 sub_14008B050()
{
  unsigned int v0; // eax
  char *v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  char *v8; // rcx
  int v9; // esi
  __m128i v10; // xmm2
  __int64 v11; // r14
  float v12; // xmm13_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  char *v15; // rcx
  __m128i v16; // xmm15
  unsigned int *v17; // rdx
  int v18; // ebx
  unsigned int v19; // r9d
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  __m128i si128; // xmm4
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  unsigned int *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  int v46; // r15d
  float v47; // xmm12_4
  unsigned int *v48; // rbp
  float v49; // xmm10_4
  __int64 v50; // rbx
  int v51; // edx
  float v52; // xmm0_4
  __int64 v53; // rbx
  __m128i v54; // xmm2
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008B050[640];
#define v56 (*(__int64 (*))(void *)(sr_frame_14008B050 + 0)) /* [rsp+0h] */
#define v57 (*(int (*))(void *)(sr_frame_14008B050 + 32)) /* [rsp+20h] */
#define v58 (*(float (*))(void *)(sr_frame_14008B050 + 40)) /* [rsp+28h] */
#define v59 (*(float (*))(void *)(sr_frame_14008B050 + 48)) /* [rsp+30h] */
#define v60 (*(float (*))(void *)(sr_frame_14008B050 + 56)) /* [rsp+38h] */
#define v61 (*(int (*))(void *)(sr_frame_14008B050 + 64)) /* [rsp+40h] */
#define v62 (*(int (*))(void *)(sr_frame_14008B050 + 72)) /* [rsp+48h] */
#define v63 (*(int (*))(void *)(sr_frame_14008B050 + 80)) /* [rsp+50h] */
#define v64 (*(int (*))(void *)(sr_frame_14008B050 + 96)) /* [rsp+60h] */
#define v65 (*(float (*))(void *)(sr_frame_14008B050 + 100)) /* [rsp+64h] */
#define v66 (*(float (*))(void *)(sr_frame_14008B050 + 104)) /* [rsp+68h] */
#define v67 (*(char (*)[512])(void *)(sr_frame_14008B050 + 112)) /* [rsp+70h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_14008B050 + 624)) /* [rsp+270h] */

  v0 = dword_140404A6C[283831446];
  if ( (int)dword_140404A6C[283831446] < 7 )
  {
    v1 = off_1402B2920[dword_140404A6C[283831446]];
    v61 = 1065353216;
    v60 = 1.0;
    v59 = 1.0;
    v58 = 1.0;
    v57 = 32;
    sr_text_draw_recovered(v1, 8.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 20.0, 32u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B13B */;
    v0 = dword_140404A6C[283831446];
  }
  if ( dword_140404A6C[283831448] == 3 && v0 == 5 )
  {
    if ( (int)dword_140404A6C[284023018] <= (int)dword_140404A6C[284023019] )
    {
      if ( (int)dword_140404A6C[284023018] >= (int)dword_140404A6C[284023019] )
      {
        *(float *)&v5 = 1.0;
        *(float *)&v6 = 1.0;
        *(float *)&v7 = 1.0;
        v8 = "Tie";
LABEL_13:
        v61 = 1065353216;
        v60 = *(float *)&v7;
        v59 = *(float *)&v6;
        v58 = *(float *)&v5;
        v57 = 33;
        sr_text_draw_recovered(v8, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x41800000u))))), 30.0, 33u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008B20D */;
        goto LABEL_14;
      }
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    v3 = v2;
    v4 = 3LL * v2;
    v5 = dword_1402B2830[v4];
    v6 = dword_1402B2834[v4];
    v7 = dword_1402B2838[v4];
    if ( v3 )
      v8 = "Monsota Wins!";
    else
      v8 = "Goldmen Wins!";
    goto LABEL_13;
  }
LABEL_14:
  v9 = 0;
  v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
  v11 = 0;
  do
  {
    if ( v9 != 2 )
    {
      v12 = (float)((float)v9 * 248.0) + 8.0;
      if ( (unsigned int)v9 >= 3 )
      {
        *(float *)&v64 = 1.0;
        v13 = 1.0;
        v65 = 1.0;
        v14 = 1.0;
      }
      else
      {
        v13 = *(float *)&dword_1402B2834[3 * v11];
        v14 = *(float *)&dword_1402B2838[3 * v11];
        v64 = dword_1402B2830[3 * v11];
        v66 = v13;
        v65 = v14;
        v15 = off_1402B2890[v11];
        v61 = 1065353216;
        v60 = v14;
        v59 = v13;
        v58 = *(float *)&v64;
        v57 = 96;
        sr_CSDrawText(v15, v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10), 20.0);
        if ( dword_140404A6C[283831448] == 3 )
        {
          v62 = dword_140404A6C[5873 * v11 + 283831505];
          v61 = 1065353216;
          v60 = v14;
          v59 = v13;
          v58 = *(float *)&v64;
          v57 = 32;
          sr_CSDrawText("Bonus:$/i", v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42D00000u))), 17.5);
        }
        v62 = dword_140404A6C[v11 + 284023018];
        v61 = 1065353216;
        v60 = v14;
        v59 = v13;
        v58 = *(float *)&v64;
        v57 = 32;
        sr_CSDrawText("Total:$/i", v12, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42F80000u))), 17.5);
        v65 = v14;
      }
      v66 = v13;
      v16 = _mm_cvtsi32_si128((int)(0x43180000u));
      v17 = &dword_140404A6C[71859139];
      v18 = 0;
      v19 = 2;
      dword_140404A6C[346695797] = 0;
      do
      {
        if ( *(v17 - 2886) )
        {
          if ( !*v17 )
          {
            v20 = (int)*(v17 - 2853);
            if ( (_DWORD)v20 == v9 || v11 == 3 && (_DWORD)v20 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 - 2;
              if ( (_DWORD)v20 == -1 || (int)v20 >= 6 )
                v21 = *(v17 - 2867);
              else
                v21 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v20 + 335047064] * 0.10000000149011612)
                                         * (float)(int)*(v17 - 2851))
                                 + (float)(int)*(v17 - 2867));
              *(v17 - 2861) = v21;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v21;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[711] )
        {
          if ( !v17[3597] )
          {
            v22 = (int)v17[744];
            if ( (_DWORD)v22 == v9 || v11 == 3 && (_DWORD)v22 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 - 1;
              if ( (_DWORD)v22 == -1 || (int)v22 >= 6 )
                v23 = v17[730];
              else
                v23 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[746])
                                 + (float)(int)v17[730]);
              v17[736] = v23;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[4308] )
        {
          if ( !v17[7194] )
          {
            v24 = (int)v17[4341];
            if ( (_DWORD)v24 == v9 || v11 == 3 && (_DWORD)v24 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19;
              if ( (_DWORD)v24 == -1 || (int)v24 >= 6 )
                v25 = v17[4327];
              else
                v25 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[4343])
                                 + (float)(int)v17[4327]);
              v17[4333] = v25;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[7905] )
        {
          if ( !v17[10791] )
          {
            v26 = (int)v17[7938];
            if ( (_DWORD)v26 == v9 || v11 == 3 && (_DWORD)v26 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 1;
              if ( (_DWORD)v26 == -1 || (int)v26 >= 6 )
                v27 = v17[7924];
              else
                v27 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[7940])
                                 + (float)(int)v17[7924]);
              v17[7930] = v27;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[11502] )
        {
          if ( !v17[14388] )
          {
            v28 = (int)v17[11535];
            if ( (_DWORD)v28 == v9 || v11 == 3 && (_DWORD)v28 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 2;
              if ( (_DWORD)v28 == -1 || (int)v28 >= 6 )
                v29 = v17[11521];
              else
                v29 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[11537])
                                 + (float)(int)v17[11521]);
              v17[11527] = v29;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[15099] )
        {
          if ( !v17[17985] )
          {
            v30 = (int)v17[15132];
            if ( (_DWORD)v30 == v9 || v11 == 3 && (_DWORD)v30 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 3;
              if ( (_DWORD)v30 == -1 || (int)v30 >= 6 )
                v31 = v17[15118];
              else
                v31 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[15134])
                                 + (float)(int)v17[15118]);
              v17[15124] = v31;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[18696] )
        {
          if ( !v17[21582] )
          {
            v32 = (int)v17[18729];
            if ( (_DWORD)v32 == v9 || v11 == 3 && (_DWORD)v32 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 4;
              if ( (_DWORD)v32 == -1 || (int)v32 >= 6 )
                v33 = v17[18715];
              else
                v33 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[18731])
                                 + (float)(int)v17[18715]);
              v17[18721] = v33;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v17[22293] )
        {
          if ( !v17[25179] )
          {
            v34 = (int)v17[22326];
            if ( (_DWORD)v34 == v9 || v11 == 3 && (_DWORD)v34 == 7 )
            {
              dword_140404A6C[2 * v18 + 346695798] = v19 + 5;
              if ( (_DWORD)v34 == -1 || (int)v34 >= 6 )
                v35 = v17[22312];
              else
                v35 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v34 + 335047064] * 0.10000000149011612)
                                         * (float)(int)v17[22328])
                                 + (float)(int)v17[22312]);
              v17[22318] = v35;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v35;
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        v19 += 8;
        v17 += 28776;
      }
      while ( (int)(v19 - 2) < 256 );
      dword_140404A6C[436668493] = v18;
      v36 = 0;
      v37 = 0;
      if ( v18 >= 8 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279890);
        do
        {
          v36 += 8;
          v39 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695813]);
          v40 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695811]);
          v41 = _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695807]);
          *(__m128i *)&dword_140404A6C[v37 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695805]))));
          *(__m128i *)&dword_140404A6C[v37 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                v41,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v37 + 346695809])),
                                                              _mm_unpacklo_epi32(v40, v39)));
          v37 += 8;
        }
        while ( v37 < v18 - (v18 & 7) );
      }
      if ( v36 < v18 )
      {
        v42 = &dword_140404A6C[v37 + 437192782];
        v43 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 8 * v37 + 1390996552);
        v44 = (unsigned int)(v18 - v36);
        do
        {
          ++v42;
          v45 = -1879048193 - *v43;
          v43 += 2;
          *(v42 - 1) = v45;
          --v44;
        }
        while ( v44 );
      }
      sub_14007D710();
      dword_140404A6C[438291413] = 2;
      v46 = 0;
      if ( v18 > 0 )
      {
        v47 = *(float *)&v64;
        v48 = &dword_140404A6C[436668494];
        v49 = v12 + 24.0;
        do
        {
          v50 = dword_140404A6C[2 * *v48 + 346695798];
          if ( (unsigned int)v50 > 0xFF )
            v50 = 0;
          if ( dword_140404A6C[283831448] != 2 )
          {
            v63 = 1065353216;
            v62 = 1065353216;
            v61 = 1065353216;
            v60 = 1.0;
            v59 = 0.0;
            v58 = 24.0;
            v57 = 1103101952;
            if ( dword_140404A6C[v50 + 284023074] )
              v51 = dword_140404A6C[346696312];
            else
              v51 = dword_140404A6C[3597 * (unsigned int)v50 + 71856270]
                  ? dword_140404A6C[346696311]
                  : dword_140404A6C[346696310];
            sr_CSDrawAtlasEntry(
              0,
              v51,
              v12,
              *(float *)SR_VEC_LANES(128, v16, i32),
              *(float *)&v57,
              v58,
              SLOBYTE(v59),
              SLODWORD(v60),
              v61,
              v62,
              v63);
            if ( (_DWORD)v50 != dword_140404A6C[284024501]
              && dword_140404A6C[284024633]
              && !dword_140404A6C[346696313]
              && *(float *)&dword_140404A6C[284024597] >= v12
              && *(float *)&dword_140404A6C[284024597] < v49
              && *(float *)&dword_140404A6C[284024598] >= *(float *)SR_VEC_LANES(128, v16, i32)
              && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)SR_VEC_LANES(128, v16, i32) + 24.0) )
            {
              dword_140404A6C[v50 + 284023074] ^= 1u;
            }
          }
          v52 = 1.0;
          if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v50 + 71856271] )
            v52 = 0.5;
          v61 = 1065353216;
          v53 = 3597LL * (unsigned int)v50;
          v60 = v14 * v52;
          v59 = v13 * v52;
          v58 = v47 * v52;
          v57 = 96;
          sr_CSDrawText(
            (char *)&dword_140404A6C[v53 + 71856254],
            v49,
            (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16),
            17.5);
          sub_140158AB0(
            v67,
            "%03d-%04d",
            dword_140404A6C[v53 + 71856265] / 0x2710,
            dword_140404A6C[v53 + 71856265] % 0x2710);
          v61 = 1065353216;
          v54 = v16;
          *(float *)SR_VEC_LANES(128, v54, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 18.0;
          v58 = v47 * v52;
          v57 = 96;
          sr_CSDrawText(v67, v49, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v54), 10.0);
          v14 = v65;
          v13 = v66;
          v62 = dword_140404A6C[v53 + 71856278];
          v61 = 1065353216;
          v60 = v65;
          v59 = v66;
          v58 = v47;
          v57 = 34;
          sr_CSDrawText("$/I", v12 + 240.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v16), 17.5);
          ++v46;
          *(float *)SR_VEC_LANES(128, v16, i32) = *(float *)SR_VEC_LANES(128, v16, i32) + 24.0;
          ++v48;
        }
        while ( v46 < (int)dword_140404A6C[346695797] );
      }
      v10 = _mm_cvtsi32_si128((int)(0x42A00000u));
      dword_140404A6C[438291413] = 0;
    }
    ++v9;
    ++v11;
  }
  while ( v9 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 14008B1AD: conditional instruction was optimized away because ecx.4==1
// 14008B2A0: conditional instruction was optimized away because esi.4<2u
// 14008B9EF: conditional instruction was optimized away because ebx.4>=8
// 14008B9E9: mask 0x80000007 is shortened because ebx.4 <= 0x7FFFFFFF
// 140279890: using guessed type __int128 xmmword_140279890;
// 1402B2830: using guessed type int dword_1402B2830[];
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2838: using guessed type int dword_1402B2838[];
// 1402B2890: using guessed type char *off_1402B2890[17];
// 1402B2920: using guessed type char *off_1402B2920[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC4: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 192E8EC40: using guessed type unsigned int;
// 192E8F444: using guessed type unsigned int;
// 192E8F448: using guessed type unsigned int;
// 192E8F44C: using guessed type unsigned int;
// 192E8F450: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140092370) ----------------------------------------------------
__int64 sub_140092370()
{
  float v0; // xmm10_4
  float v1; // xmm9_4
  __m128 v2; // xmm7
  float v3; // xmm6_4
  float v4; // xmm8_4
  __int64 v5; // rdx
  float v6; // xmm0_4
  double v7; // xmm2_8
  float v8; // xmm7_4
  __m128 v9; // xmm0
  double v10; // xmm3_8
  double v11; // xmm7_8
  double v12; // xmm10_8
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  signed int v17; // r14d
  __int64 result; // rax
  __int64 v19; // rdi
  int v20; // ecx
  unsigned int v21; // esi
  float v22; // xmm11_4
  __int64 v23; // rbp
  unsigned int v24; // xmm10_4
  unsigned int v25; // xmm7_4
  unsigned int v26; // xmm12_4
  unsigned int v27; // eax
  float v28; // xmm10_4
  float v29; // xmm7_4
  float v30; // xmm12_4
  float v31; // xmm9_4
  float v32; // xmm13_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm8_4
  unsigned int *v36; // rbx
  unsigned int *v37; // rdx
  __int64 v38; // rax
  __m128d v39; // xmm1
  __int64 v40; // rdx
  float v41; // xmm3_4
  double v42; // xmm2_8
  float v43; // xmm7_4
  __m128 v44; // xmm0
  double v45; // xmm4_8
  double v46; // xmm1_8
  __m128d v47; // xmm0
  double v48; // xmm3_8
  __m128i v49; // xmm7
  __m128i v50; // xmm0
  double v51; // xmm10_8
  __m128i v52; // xmm0
  __int64 v53; // r8
  int v54; // xmm0_4
  unsigned int v55; // eax
  float v56; // [rsp+130h] [rbp+8h]

  if ( dword_140404A6C[283831312] == 5
    && dword_140404A6C[284024501] != -1
    && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] - 1 <= 1
    && *(float *)&dword_140404A6C[284022465] != 0.0 )
  {
    (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
    v2 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[284024509])));
    v0 = *(float *)&dword_140404A6C[284024514];
    v1 = (float)((float)(*(float *)&dword_140404A6C[284024506]
                       * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
               + (float)(*(float *)&dword_140404A6C[284024505]
                       * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
       + (float)(*(float *)&dword_140404A6C[284024507]
               * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    SR_VEC_LANES(128, v2, f32)[0] = (float)((float)(*(float *)&dword_140404A6C[284024509]
                                   * (float)(*(float *)&dword_140404A6C[284022466]
                                           - *(float *)&dword_140404A6C[284024503]))
                           + (float)(*(float *)&dword_140404A6C[284024508]
                                   * (float)(*(float *)&dword_140404A6C[284022465]
                                           - *(float *)&dword_140404A6C[284024502])))
                   + (float)(*(float *)&dword_140404A6C[284024510]
                           * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    v3 = -(float)((float)((float)(*(float *)&dword_140404A6C[284024512]
                                * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
                        + (float)(*(float *)&dword_140404A6C[284024511]
                                * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
                + (float)(*(float *)&dword_140404A6C[284024513]
                        * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504])));
    v4 = fmaxf(
           fminf(
             (float)(192.0
                   / (float)((float)(fsqrt(
                                       (float)((float)((float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503])
                                                     * (float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503]))
                                             + (float)((float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])
                                                     * (float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])))
                                     + (float)((float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])
                                             * (float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])))
                                   * 0.0625)
                           * *(float *)&dword_140404A6C[284024514]))
           + 4.0,
             192.0),
           8.0);
    if ( v3 < 1.0 )
      v3 = 1.0;
    v6 = sub_14023F704(SR_VEC_LANES(128, v2, f32)[0], v1);
    SR_VEC_LANES(128, v2, f32)[0] = (float)(SR_VEC_LANES(128, v2, f32)[0] * SR_VEC_LANES(128, v2, f32)[0]) + (float)(v1 * v1);
    v7 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v2)), f64)[0] * 512.0;
    v8 = v7;
    if ( v3 > 1.0 )
      v8 = v8 / (float)(v3 * v0);
    v9 = _mm_castpd_ps(sub_1401F8A50(v6, v5, v7));
    HIDWORD(v12) = 0;
    v10 = fminf(512.0 - (float)(v4 * 0.5), v8);
    v11 = 288.0 - *(double *)SR_VEC_LANES(128, v9, u64) * v10;
    *(float *)&v12 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v9, (__m128d)v9, 1), f64)[0] * v10 + 512.0;
    if ( *(float *)&v11 >= 24.0 )
    {
      if ( *(float *)&v11 > 552.0 )
        *(_QWORD *)&v11 = 1141506048;
    }
    else
    {
      *(_QWORD *)&v11 = 1103101952;
    }
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283831238] + 284024944]);
    v14 = dword_140404A6C[284024501];
    if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] == 1 )
    {
      sub_14006CFF0(v12, v11, COERCE_UNSIGNED_INT((float)(v4)) /* native XMM2 width = XMM8, same as the height */, v4, 133, 1065353216, 0, 0, 1061158912);
      v14 = dword_140404A6C[284024501];
    }
    if ( dword_140404A6C[3597 * v14 + 71856286] == 2 )
      sub_14006CFF0(v12, v11, COERCE_UNSIGNED_INT((float)(v4)) /* native XMM2 width = XMM8, same as the height */, v4, 133, 0, 1065353216, 0, 1061158912);
  }
  dword_140404A6C[438291413] = 2;
  v15 = &dword_140404A6C[280658298];
  do
  {
    *v15 = 0;
    v15 += 7166;
  }
  while ( (__int64)v15 < (__int64)&dword_140404A6C[282492794] );
  v16 = &dword_140404A6C[278846060];
  do
  {
    *v16 = 0;
    v16 += 1760;
  }
  while ( (__int64)v16 < (__int64)&dword_140404A6C[280648300] );
  v17 = dword_140404A6C[346706173];
  for ( result = dword_140404A6C[346706173] + 1;
        v17 != (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
        result = dword_140404A6C[346706173] + 1 )
  {
    v19 = 38LL * v17;
    v20 = dword_140404A6C[v19 + 346696447];
    if ( v20 > 0 && (int)dword_140404A6C[v19 + 346696448] > 0 )
    {
      v21 = dword_140404A6C[v19 + 346696445];
      if ( v21 - 1 <= 1 )
      {
        v22 = (float)v20 * 0.004999999888241291;
        if ( dword_140404A6C[v19 + 346696449] != -1 )
        {
          v23 = (int)dword_140404A6C[v19 + 346696449];
          if ( v21 == 1 )
          {
            v24 = dword_140404A6C[344 * v23 + 284956407];
            v25 = dword_140404A6C[344 * v23 + 284956408];
            v26 = dword_140404A6C[344 * v23 + 284956409];
          }
          else
          {
            v24 = dword_140404A6C[13 * v23 + 285083825];
            v25 = dword_140404A6C[13 * v23 + 285083826];
            v26 = dword_140404A6C[13 * v23 + 285083827];
          }
          v27 = dword_140404A6C[v19 + 346696450];
          v28 = (float)((float)(*(float *)&dword_140404A6C[284024508] * 0.5) + *(float *)&v24)
              - *(float *)&dword_140404A6C[284024502];
          v29 = (float)((float)(*(float *)&dword_140404A6C[284024509] * 0.5) + *(float *)&v25)
              - *(float *)&dword_140404A6C[284024503];
          v56 = (float)((float)(*(float *)&dword_140404A6C[284024510] * 0.5) + *(float *)&v26)
              - *(float *)&dword_140404A6C[284024504];
          v30 = (float)((float)(v29 * *(float *)&dword_140404A6C[284024506])
                      + (float)(v28 * *(float *)&dword_140404A6C[284024505]))
              + (float)(v56 * *(float *)&dword_140404A6C[284024507]);
          v31 = (float)((float)(v29 * *(float *)&dword_140404A6C[284024509])
                      + (float)(v28 * *(float *)&dword_140404A6C[284024508]))
              + (float)(v56 * *(float *)&dword_140404A6C[284024510]);
          v32 = -(float)((float)((float)(v29 * *(float *)&dword_140404A6C[284024512])
                               + (float)(v28 * *(float *)&dword_140404A6C[284024511]))
                       + (float)(v56 * *(float *)&dword_140404A6C[284024513]));
          v33 = 256.0 / fsqrt((float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v56 * v56));
          if ( v27 )
          {
            if ( v27 == 2 )
              v33 = v33 + v33;
          }
          else
          {
            v33 = v33 * 0.25;
          }
          if ( v21 == 2 )
            v33 = v33 * 0.125;
          v34 = fminf(v33, 32.0);
          if ( v34 > 4.0 )
          {
            if ( v34 < 8.0 )
              v22 = v22 * (float)((float)(v34 - 4.0) * 0.25);
            v35 = 0.0;
            v36 = &dword_140404A6C[v19 + 346696451];
            if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && *(_BYTE *)v36 )
            {
              v37 = &dword_140404A6C[v19 + 346696451];
              do
              {
                if ( (char *)v37 - (char *)v36 >= 0xFFFF )
                  break;
                v38 = *(char *)v37;
                v37 = (unsigned int *)((char *)v37 + 1);
                v35 = v35
                    + (float)(v34 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v38]);
              }
              while ( *(_BYTE *)v37 );
            }
            v39 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
            v41 = sub_14023F704(v31, v30);
            SR_VEC_LANES(128, v39, f64)[0] = (float)((float)(v31 * v31) + (float)(v30 * v30));
            v42 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v39), f64)[0] * 512.0;
            v43 = v42;
            if ( v32 <= 1.0 )
            {
              if ( v32 < -1.0 )
                v43 = v43 * (float)(-1.0 / (float)(v32 * *(float *)&dword_140404A6C[284024514]));
            }
            else
            {
              v43 = v43 / (float)(v32 * *(float *)&dword_140404A6C[284024514]);
            }
            v44 = _mm_castpd_ps(sub_1401F8A50(v41, v40, v42));
            v45 = *(double *)SR_VEC_LANES(128, v44, u64);
            v46 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v44, (__m128d)v44, 1), f64)[0];
            v47 = ((__m128d)_mm_cvtsi64_si128((long long)(0x4072000000000000uLL)));
            v48 = fminf(512.0 - (float)(v35 * 0.5), v43);
            SR_VEC_LANES(128, v47, f64)[0] = 288.0 - v45 * v48;
            HIDWORD(v51) = 0;
            v49 = (__m128i)_mm_cvtpd_ps(v47);
            v50 = _mm_cvtsi32_si128((int)(0x41C00000u));
            *(float *)&v51 = v46 * v48 + 512.0;
            if ( *(float *)SR_VEC_LANES(128, v49, i32) < 24.0 || (v50 = _mm_cvtsi32_si128((int)(0x440A0000u)), *(float *)SR_VEC_LANES(128, v49, i32) > 552.0) )
              v49 = v50;
            if ( v21 == 1 )
              v52 = _mm_cvtsi32_si128(dword_140404A6C[7166 * v23 + 280658298]);
            else
              v52 = _mm_cvtsi32_si128(dword_140404A6C[1760 * v23 + 278846060]);
            *(float *)SR_VEC_LANES(128, v49, i32) = *(float *)SR_VEC_LANES(128, v49, i32) - (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v52), f32)[0] * v34);
            qword_140404050(3553, dword_140404A6C[451221642]);
            v54 = 1061158912;
            if ( v32 > -0.125 )
              v54 = 1065353216;
            /* 0x140092C29: width = the text width summed at 0x140092A7F (v35) + 4.0 (0x140092BE0, xmm2 at 0x140092C04);
               the C had passed an undefined local */
            sub_14006CFF0(v51, *(double *)SR_VEC_LANES(128, v49, i64), sr_text_float_bits(v35 + 4.0f), v34 * 0.875, 5, v54, v54, v54, COERCE_INT(v22 * 0.75f));
            sr_CSDrawText(
              (char *)&dword_140404A6C[v19 + 346696451],
              *(float *)&v51,
              (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v49),
              v34);
            v55 = dword_140404A6C[v19 + 346696445];
            if ( v55 == 1 )
            {
              ++dword_140404A6C[7166 * dword_140404A6C[v19 + 346696449] + 280658298];
            }
            else if ( v55 == 2 )
            {
              ++dword_140404A6C[1760 * dword_140404A6C[v19 + 346696449] + 278846060];
            }
          }
        }
      }
    }
    v17 = (unsigned __int8)(v17 - 1);
  }
  return result;
}

// 140092850: conditional instruction was optimized away because esi.4==2
// 140092B9D: conditional instruction was optimized away because esi.4==2
// 1400925BB: variable 'v5' is possibly undefined
// 14009269A: variable 'v13' is possibly undefined
// 140092B10: variable 'v40' is possibly undefined
// 140092C29: variable 'v53' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 183F7C540: using guessed type unsigned int;
// 183F7C574: using guessed type unsigned int;
// 192E98E60: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

