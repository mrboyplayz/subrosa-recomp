/* Address: 0x140086000 | Name: ui_draw_hud_menu_prompt_candidate | Size: 6148 bytes */
void __fastcall ui_draw_hud_menu_prompt_candidate(__int64 a1, __int64 a2, int a3, int a4)
{
  __int128 v4; // xmm7
  __int128 v5; // xmm8
  __int128 v6; // xmm9
  __int128 v7; // xmm10
  __int128 v8; // xmm11
  __int128 v9; // xmm12
  __int128 v10; // xmm13
  __int128 v11; // xmm14
  __int128 v12; // xmm15
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __m128i v16; // xmm6
  unsigned int v17; // ebx
  __int64 v18; // rcx
  int v19; // eax
  __m128i v20; // xmm8
  __m128i v21; // xmm7
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r8
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
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __m128i v61; // xmm6
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  bool v65; // cc
  const char *v66; // rcx
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  double v72; // xmm6_8
  __int64 v73; // r8
  __int64 v74; // r8
  int v75; // ebx
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned int v78; // eax
  const char *v79; // rcx
  unsigned int v80; // eax
  __m128i v81; // xmm0
  unsigned int v82; // ebp
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  float v89; // xmm7_4
  float v90; // xmm10_4
  float v91; // xmm6_4
  __m128d v92; // xmm0
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // r8
  double v96; // xmm2_8
  __int64 v97; // rbx
  float v98; // xmm7_4
  float v99; // xmm8_4
  __int64 v100; // rdx
  __int64 v101; // r8
  __m128d v102; // xmm0
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r8
  int v144; // [rsp+28h] [rbp-100h]
  int v145; // [rsp+30h] [rbp-F8h]
  int v146; // [rsp+38h] [rbp-F0h]
  float v147; // [rsp+40h] [rbp-E8h]
  unsigned int v148; // [rsp+48h] [rbp-E0h]
  float v149; // [rsp+50h] [rbp-D8h] BYREF
  float v150; // [rsp+54h] [rbp-D4h]
  int v151; // [rsp+58h] [rbp-D0h]
  __int128 v152; // [rsp+60h] [rbp-C8h]
  __int128 v153; // [rsp+70h] [rbp-B8h]
  __int128 v154; // [rsp+80h] [rbp-A8h]
  __int128 v155; // [rsp+90h] [rbp-98h]
  __int128 v156; // [rsp+A0h] [rbp-88h]
  __int128 v157; // [rsp+B0h] [rbp-78h]
  __int128 v158; // [rsp+C0h] [rbp-68h]
  __int128 v159; // [rsp+D0h] [rbp-58h]
  __int128 v160; // [rsp+E0h] [rbp-48h]
  float v161; // [rsp+130h] [rbp+8h]

  if ( (_DWORD)a1 == -1 )
    return;
  v158 = v6;
  v156 = v8;
  v155 = v9;
  v154 = v10;
  v13 = 3597LL * (int)a1;
  v14 = (int)dword_140404A6C[v13 + 71856292];
  if ( (_DWORD)v14 != -1 )
    sub_140087810(a1, (unsigned int)v14);
  LODWORD(v15) = dword_140404A6C[282487105];
  v16 = (__m128i)0x43800000u;
  v17 = (LOBYTE(dword_140404A6C[282487105]) + 1) & 0x1F;
  v160 = v4;
  if ( v17 != (dword_140404A6C[282487105] & 0x1F) )
  {
    do
    {
      v18 = 131LL * v17;
      v19 = dword_140404A6C[v18 + 282487107];
      if ( v19 > 0 )
      {
        v147 = (float)v19 * 0.0049999999;
        v146 = 1065353216;
        v145 = 1065353216;
        v144 = 1065353216;
        sub_14006D930(
          0x140000000LL + v18 * 4 + 1134161792,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32(v16),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          97);
        LODWORD(v15) = dword_140404A6C[282487105];
        *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 + 24.0;
      }
      v17 = ((_BYTE)v17 + 1) & 0x1F;
    }
    while ( v17 != (v15 & 0x1F) );
  }
  if ( dword_140404A6C[283831448] == 3 || (_DWORD)v14 == -1 )
    return;
  v159 = v5;
  v157 = v7;
  v153 = v11;
  v152 = v12;
  if ( dword_140404A6C[284021986] || dword_140404A6C[284021985] && !dword_140404A6C[280649838] )
    sub_140088130((unsigned int)v14);
  v20 = (__m128i)0x43900000u;
  v21 = (__m128i)0x43C00000u;
  v22 = 7166 * v14;
  if ( (int)dword_140404A6C[7166 * v14 + 280658334] > 0 )
  {
    unk_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(
      COERCE_DOUBLE(1136656384),
      COERCE_DOUBLE(1133510656),
      v23,
      32.0,
      0,
      1065353216,
      1065353216,
      1065353216,
      1040187392);
    sub_14006CFF0(
      COERCE_DOUBLE(1136656384),
      COERCE_DOUBLE(1133510656),
      v24,
      32.0,
      0,
      1065353216,
      1065353216,
      1065353216,
      1063256064);
  }
  if ( dword_140404A6C[280649843]
    && ((int)dword_140404A6C[v22 + 280658139] > 0 || (int)dword_140404A6C[v22 + 280658149] > 0) )
  {
    unk_140404050(3553, dword_140404A6C[451221642]);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    sub_14007D420(v26, v25, v27);
    sub_14007D420(v29, v28, v30);
    sub_14007D420(v32, v31, v33);
    sub_14007D420(v35, v34, v36);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279460;
    MEMORY[0x1401F8A50](v37);
    sub_14007D420(v39, v38, v40);
    sub_14007D420(v42, v41, v43);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279410;
    sub_14007D420(v45, v44, v46);
    MEMORY[0x1401F8A50](v47);
    sub_14007D420(v49, v48, v50);
    sub_14007D420(v52, v51, v53);
    MEMORY[0x1401F8A50](v54);
    sub_14007D420(v56, v55, v57);
    sub_14006E0D0(v59, v58, v60);
    v20 = (__m128i)0x43900000u;
    v21 = (__m128i)0x43C00000u;
  }
  v61 = v20;
  if ( (int)dword_140404A6C[v22 + 280658139] <= 0 )
    goto LABEL_41;
  v62 = (int)dword_140404A6C[v22 + 280658140];
  v15 = 7040 * v62;
  if ( ((dword_140404A6C[1760 * v62 + 278845898] - 25) & 0xFFFFFFF7) == 0 )
  {
    if ( !*(unsigned int *)((char *)&dword_140404A6C[278846052] + v15) )
    {
      v147 = 1.0;
      v146 = 1065353216;
      v145 = 1065353216;
      v144 = 1065353216;
      sub_14006D930(
        "Left-click to dial",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32(v21),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      LODWORD(v62) = dword_140404A6C[v22 + 280658140];
    }
    if ( dword_140404A6C[1760 * (int)v62 + 278846052] == 1 )
    {
      sub_14006D930(
        "Use Numpad or number keys",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32(v21),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      sub_14006D930(
        "1111 - Goldmen",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      sub_14006D930(
        "2222 - Monsota",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      v147 = 1.0;
      v146 = 1065353216;
      v145 = 1065353216;
      v144 = 1065353216;
      sub_14006D930(
        "3333 - OXS",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D80000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      v61 = (__m128i)0x43E00000u;
      if ( dword_140404A6C[283831312] == 4 )
      {
        sub_14006D930(
          "4444 - /s",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43E00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          1);
        sub_14006D930(
          "5555 - /s",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43E80000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          1);
        v148 = (unsigned int)off_1402B28B8[0];
        v147 = 1.0;
        v146 = 1065353216;
        v145 = 1065353216;
        v144 = 1065353216;
        sub_14006D930(
          "6666 - /s",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43F00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          1);
        v61 = (__m128i)0x43F80000u;
      }
    }
    v63 = (int)dword_140404A6C[v22 + 280658140];
    if ( dword_140404A6C[1760 * v63 + 278846052] == 4 )
    {
      v147 = 1.0;
      v146 = 1065353216;
      v145 = 1065353216;
      v144 = 1065353216;
      sub_14006D930(
        "Busy",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        1);
      LODWORD(v63) = dword_140404A6C[v22 + 280658140];
    }
    v64 = 1760LL * (int)v63;
    if ( dword_140404A6C[v64 + 278846052] == 2 )
    {
      v65 = (int)dword_140404A6C[v64 + 278845983] <= 0;
      v147 = 1.0;
      v66 = "Left-click to answer";
      v146 = 1065353216;
      v145 = 1065353216;
      v144 = 1065353216;
      v67 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
      v68 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u);
      v69 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u);
      if ( v65 )
        v66 = "Left-click to hang up";
      sub_14006D930(v66, v69, v68, v67, 1);
    }
    v15 = (int)dword_140404A6C[v22 + 280658140];
    if ( dword_140404A6C[1760 * v15 + 278846052] == 3 )
    {
      v147 = 1.0;
      v146 = 0;
      v145 = 1065353216;
      v144 = 0;
      sub_14006D930(
        "In Use",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44200000u),
        (unsigned int)_mm_cvtsi128_si32(v61),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        1);
      LODWORD(v15) = dword_140404A6C[v22 + 280658140];
    }
    *(float *)v61.m128i_i32 = *(float *)v61.m128i_i32 + 24.0;
    v70 = 1760LL * (int)v15;
    if ( dword_140404A6C[v70 + 278846052] - 1 <= 1 && (int)dword_140404A6C[v70 + 278845983] > 0 )
    {
      v148 = dword_140404A6C[v70 + 278845983];
      v147 = 1.0;
      v146 = 1065353216;
      v145 = 1065353216;
      v144 = 1065353216;
      sub_14006D930(
        "Number:/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44200000u),
        (unsigned int)_mm_cvtsi128_si32(v61),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        1);
    }
  }
  if ( (int)dword_140404A6C[v22 + 280658139] <= 0
    || (v71 = (int)dword_140404A6C[v22 + 280658140], (_DWORD)v71 == -1)
    || (LODWORD(v15) = 7040 * v71, dword_140404A6C[1760 * v71 + 278845898] != 39) )
  {
LABEL_41:
    sub_1400A7C70(
      v14,
      v15,
      a3,
      a4,
      1124073472,
      v144,
      v145,
      v146,
      LODWORD(v147),
      v148,
      LODWORD(v149),
      v151,
      v152,
      DWORD2(v152),
      v153,
      DWORD2(v153),
      v154,
      DWORD2(v154),
      v155,
      DWORD2(v155),
      v156,
      DWORD2(v156),
      v157,
      DWORD2(v157),
      v158,
      DWORD2(v158),
      v159,
      DWORD2(v159),
      v160,
      *((__int64 *)&v160 + 1));
  }
  unk_140404050(3553, dword_140404A6C[451221642]);
  HIDWORD(v72) = 0;
  sub_14006CFF0(
    COERCE_DOUBLE(1103101952),
    COERCE_DOUBLE(1141309440),
    v73,
    127.0,
    8,
    1065353216,
    1065353216,
    1065353216,
    1040187392);
  unk_140404050(3553, dword_140404A6C[451221642]);
  sub_14006CFF0(
    COERCE_DOUBLE(1103101952),
    COERCE_DOUBLE(1141309440),
    v74,
    (float)(int)dword_140404A6C[v22 + 280651310],
    8,
    1065353216,
    1065353216,
    1065353216,
    1056964608);
  v75 = dword_140404A6C[v22 + 280651311];
  if ( v75 > 127 )
    v75 = 127;
  unk_140404050(3553, dword_140404A6C[451221642]);
  *(float *)&v72 = 540.0 - (float)v75;
  sub_14006CFF0(COERCE_DOUBLE(1103101952), v72, v76, 8.0, 4, 1065353216, 1065353216, 1065353216, 1063256064);
  if ( dword_140404A6C[v22 + 280651313] == -1 )
  {
    v78 = dword_140404A6C[v13 + 71856330];
    if ( v78 )
    {
      if ( v78 == 1 )
      {
        v79 = "Walk";
      }
      else
      {
        if ( v78 != 2 )
          goto LABEL_52;
        v79 = "Aim";
      }
    }
    else
    {
      v79 = "Run";
    }
    sub_14006D930(
      v79,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x440F0000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      8);
  }
LABEL_52:
  v80 = dword_140404A6C[283785910];
  v81 = (__m128i)0x44030000u;
  if ( !dword_140404A6C[283785910] )
  {
    sub_14006D930(
      "Whisper",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44030000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41900000u),
      8);
    v80 = dword_140404A6C[283785910];
    v81 = (__m128i)0x44030000u;
  }
  if ( v80 == 2 )
    sub_14006D930(
      "Yell",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32(v81),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41900000u),
      8);
  if ( !dword_140404A6C[v13 + 71856342] )
    goto LABEL_67;
  if ( dword_140404A6C[280649838] )
  {
    if ( dword_140404A6C[283831312] == 4 )
      goto LABEL_63;
    sub_14006D930(
      "$/I",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      0);
    if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] <= 5 )
      sub_14006D930(
        "$/I",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43400000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        0);
  }
  else
  {
    sub_14006D930(
      "Press Tab for Menu",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      0);
  }
  if ( dword_140404A6C[283831312] == 4 )
  {
LABEL_63:
    if ( dword_140404A6C[v13 + 71856342] - 14 <= 0xC )
    {
      if ( dword_140404A6C[v13 + 71856286] != -1 )
        sub_14006D930(
          "$/I",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43440000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          0);
      sub_14006D930(
        "Budget: $/I",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        0);
    }
  }
LABEL_67:
  v82 = dword_140404A6C[v22 + 280651313];
  if ( v82 != -1 && !dword_140404A6C[v22 + 280651314] )
  {
    if ( dword_140404A6C[v13 + 71856339] != 3
      || (unk_140404050(3553, dword_140404A6C[451221642]),
          sub_14006CFF0(COERCE_DOUBLE(1145864192), COERCE_DOUBLE(1138753536), v83, 80.0, 5, 0, 0, 0, 1056964608),
          sub_14006CFF0(
            COERCE_DOUBLE(1145864192),
            COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
                                              448.0
                                            - (float)((float)(*(float *)&dword_140404A6C[v13 + 71856296] * 16.0)
                                                    + (float)(*(float *)&dword_140404A6C[v13 + 71856296] * 16.0)))),
            v84,
            16.0,
            5,
            1065353216,
            1065353216,
            1065353216,
            1056964608),
          !dword_140404A6C[v22 + 280651314]) )
    {
      if ( dword_140404A6C[v13 + 71856339] == 2 )
      {
        sub_140082110();
        sub_140082110();
        unk_140404050(3553, dword_140404A6C[451221642]);
        sub_14006CFF0(COERCE_DOUBLE(1145864192), COERCE_DOUBLE(1138753536), v85, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(COERCE_DOUBLE(1146388480), COERCE_DOUBLE(1138753536), v86, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(COERCE_DOUBLE(1146912768), COERCE_DOUBLE(1138753536), v87, 68.0, 5, 0, 0, 0, 1061158912);
        sub_14006CFF0(COERCE_DOUBLE(1146388480), COERCE_DOUBLE(1138753536), v88, 8.0, 5, 0, 0, 0, 1061158912);
        sub_14006D930(
          "1",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x444C8000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D20000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        sub_14006D930(
          "2",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x444C8000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43EE0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        sub_14006D930(
          "3",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44548000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D20000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        sub_14006D930(
          "4",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44548000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43EE0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        sub_14006D930(
          "A",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x445C8000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43D20000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        sub_14006D930(
          "R",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x445C8000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43EE0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          5);
        unk_140404050(3553, dword_140404A6C[451221642]);
        v89 = (float)((float)(*(float *)&dword_140404A6C[v13 + 71856293] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v13 + 71856293] * 16.0))
            + 818.0;
        v90 = (float)((float)(*(float *)&dword_140404A6C[v13 + 71856295] * 16.0)
                    + (float)(*(float *)&dword_140404A6C[v13 + 71856295] * 16.0))
            + 448.0;
        v161 = v89;
        unk_140404050(3553, dword_140404A6C[451221642]);
        v91 = 0.0;
        *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279470;
        dword_140404A6C[456217205] = 0;
        v92 = 0;
        dword_140404A6C[456217207] = 0;
        dword_140404A6C[456217208] = 9;
        v151 = 0;
        v92.m128d_f64[0] = MEMORY[0x1401F8A50](v93);
        v96 = v89;
        v97 = 64;
        v98 = v92.m128d_f64[0] * 12.0 + v89;
        v99 = v90 - _mm_shuffle_pd(v92, v92, 1).m128d_f64[0] * 12.0;
        do
        {
          v149 = v161;
          v150 = v90;
          sub_14007D520((unsigned int *)&v149, v94, v95);
          v149 = v98;
          v150 = v99;
          sub_14007D520((unsigned int *)&v149, v100, v101);
          v91 = v91 + 0.098174773;
          v102 = 0;
          v102.m128d_f64[0] = MEMORY[0x1401F8A50](v103);
          v98 = v102.m128d_f64[0] * 12.0 + v96;
          v149 = v98;
          v99 = v90 - _mm_shuffle_pd(v102, v102, 1).m128d_f64[0] * 12.0;
          v150 = v99;
          sub_14007D520((unsigned int *)&v149, v104, v105);
          --v97;
        }
        while ( v97 );
        sub_14006E0D0(v106, v94, v95);
        v20.m128i_i64[0] = 1133510656;
      }
    }
  }
  if ( (int)dword_140404A6C[v13 + 71857714] > 0 && LOBYTE(dword_140404A6C[v13 + 71857715]) == 28 )
  {
    MEMORY[0x1401F8A50](v77);
    unk_140404050(3553, dword_140404A6C[451221642]);
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    sub_14007D420(v108, v107, v109);
    sub_14007D420(v111, v110, v112);
    sub_14006E0D0(v114, v113, v115);
  }
  if ( (dword_140404A6C[v13 + 71856325] & 0x10) == 0 )
  {
    if ( (int)dword_140404A6C[v13 + 71857714] <= 0 )
    {
LABEL_84:
      unk_140404050(3553, dword_140404A6C[451221642]);
      if ( v82 == -1 )
        sub_14006CFF0(
          COERCE_DOUBLE(1140850688),
          *(double *)v20.m128i_i64,
          v143,
          4.0,
          5,
          1065353216,
          1065353216,
          1065353216,
          1056964608);
      return;
    }
    if ( dword_140404A6C[1268 * LOBYTE(dword_140404A6C[v13 + 71857715]) + 278521289] )
    {
      unk_140404050(3553, dword_140404A6C[451221642]);
      dword_140404A6C[456217205] = 2;
      dword_140404A6C[456217207] = 0;
      dword_140404A6C[456217208] = 9;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279430;
      sub_14007D420(v117, v116, v118);
      sub_14007D420(v120, v119, v121);
      sub_14007D420(v123, v122, v124);
      sub_14007D420(v126, v125, v127);
      sub_14007D420(v129, v128, v130);
      sub_14007D420(v132, v131, v133);
      sub_14007D420(v135, v134, v136);
      sub_14007D420(v138, v137, v139);
      sub_14006E0D0(v141, v140, v142);
      return;
    }
  }
  if ( (int)dword_140404A6C[v13 + 71857714] <= 0 || LOBYTE(dword_140404A6C[v13 + 71857715]) != 39 )
    goto LABEL_84;
}

