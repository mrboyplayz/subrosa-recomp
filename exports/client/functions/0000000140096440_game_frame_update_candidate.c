/* Address: 0x140096440 | Name: game_frame_update_candidate | Size: 11356 bytes */
// Main frame/update hub candidate: polls input, handles connection/game state, invokes UI/menu draw, render uniform cache, and gameplay mouse/camera state.
__int64 game_frame_update_candidate()
{
  unsigned int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // eax
  __int64 v6; // rcx
  char v7; // al
  int i; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm6
  __int64 v23; // r14
  __m128i v24; // xmm7
  __m128i si128; // xmm14
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // esi
  unsigned int *v50; // rbx
  unsigned __int64 v51; // rdi
  signed int v52; // eax
  int v53; // esi
  unsigned int *v54; // rbx
  unsigned int *v55; // rdi
  unsigned int v56; // eax
  int v57; // ebp
  __int64 v58; // r14
  unsigned __int64 v59; // rsi
  __int64 j; // rdi
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // r8d
  unsigned int v65; // r9d
  __int64 v66; // r10
  bool v67; // zf
  unsigned int v68; // xmm1_4
  __int64 v69; // rcx
  unsigned int v70; // xmm1_4
  unsigned int v71; // xmm2_4
  unsigned int v72; // xmm3_4
  unsigned int v73; // xmm4_4
  unsigned int v74; // xmm0_4
  unsigned int v75; // xmm1_4
  unsigned int v76; // eax
  __int64 v77; // rax
  unsigned int v78; // xmm1_4
  unsigned int v79; // xmm0_4
  unsigned int v80; // eax
  unsigned int v81; // xmm1_4
  unsigned int v82; // xmm0_4
  unsigned int v83; // xmm2_4
  unsigned int v84; // xmm1_4
  unsigned int v85; // xmm1_4
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int *v88; // r15
  unsigned int *v89; // rbx
  __int64 v90; // r14
  unsigned int v91; // eax
  __int64 v92; // rcx
  char *v93; // rsi
  _DWORD *v94; // rdi
  __int64 v95; // rax
  char *v96; // r12
  char *v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rcx
  char *v100; // rax
  char *v101; // r8
  char *v102; // r15
  char *v103; // rbx
  char *v104; // r14
  __int64 v105; // rbp
  int v106; // ecx
  int v107; // eax
  __int64 v108; // rax
  char *v109; // rax
  char *v110; // rax
  char *v111; // rax
  char *v112; // rax
  char *v113; // rdx
  char *v114; // rax
  char *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  int v119; // r8d
  int v120; // r9d
  unsigned int v121; // eax
  unsigned int v122; // edx
  unsigned int v123; // eax
  const char *v124; // rcx
  unsigned int v125; // eax
  unsigned int v126; // ecx
  __int64 v127; // r8
  __m128i v128; // xmm5
  const __m128i *v129; // rax
  __m128i v130; // xmm2
  __m128i v131; // xmm3
  __m128i v132; // xmm1
  __m128i v133; // xmm0
  __m128i v134; // xmm1
  __m128i v135; // xmm2
  __m128i v136; // xmm0
  __m128i v137; // xmm1
  __m128i v138; // xmm2
  __m128i v139; // xmm2
  int v140; // edx
  int v141; // r8d
  int v142; // r9d
  __int64 v143; // rcx
  __int64 v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // r8
  __int128 v147; // xmm0
  int v148; // ebx
  unsigned int *v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rcx
  const char *v154; // rcx
  char v155; // cl
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __m128 v160; // xmm2
  __m128 v161; // xmm3
  unsigned int v162; // eax
  int v163; // ecx
  const __m128i *v164; // rax
  __m128 v165; // xmm1
  __m128i v166; // xmm0
  __m128 v167; // xmm2
  __m128 v168; // xmm1
  int v169; // ebx
  __int64 v170; // rbx
  __int64 v171; // rbx
  __int64 v172; // rbx
  int k; // ebx
  __int64 v174; // rbx
  int v175; // ebx
  int v176; // edi
  unsigned int *v177; // rbx
  __int64 v179; // [rsp+0h] [rbp-658h] BYREF
  __int64 v180; // [rsp+20h] [rbp-638h]
  int v181; // [rsp+28h] [rbp-630h]
  int v182; // [rsp+30h] [rbp-628h]
  int v183; // [rsp+38h] [rbp-620h]
  unsigned int v184; // [rsp+40h] [rbp-618h]
  int v185; // [rsp+48h] [rbp-610h]
  int v186; // [rsp+50h] [rbp-608h]
  int v187; // [rsp+58h] [rbp-600h]
  __int64 v188; // [rsp+60h] [rbp-5F8h]
  unsigned int *v189; // [rsp+68h] [rbp-5F0h]
  __int64 v190; // [rsp+70h] [rbp-5E8h]
  unsigned int *v191; // [rsp+78h] [rbp-5E0h]
  __int64 v192; // [rsp+80h] [rbp-5D8h]
  char *v193; // [rsp+88h] [rbp-5D0h]
  char *v194; // [rsp+90h] [rbp-5C8h]
  char *v195; // [rsp+98h] [rbp-5C0h]
  char *v196; // [rsp+A0h] [rbp-5B8h]
  __int64 v197; // [rsp+A8h] [rbp-5B0h]
  char *v198; // [rsp+B0h] [rbp-5A8h]
  char *v199; // [rsp+B8h] [rbp-5A0h]
  char *v200; // [rsp+C0h] [rbp-598h]
  char *v201; // [rsp+C8h] [rbp-590h]
  char *v202; // [rsp+D0h] [rbp-588h]
  char *v203; // [rsp+D8h] [rbp-580h]
  __int64 v204; // [rsp+E0h] [rbp-578h]
  char *v205; // [rsp+E8h] [rbp-570h]
  char *v206; // [rsp+F0h] [rbp-568h]
  char *v207; // [rsp+F8h] [rbp-560h]
  char *v208; // [rsp+100h] [rbp-558h]
  char *v209; // [rsp+108h] [rbp-550h]
  __int64 v210; // [rsp+110h] [rbp-548h]
  char *v211; // [rsp+118h] [rbp-540h]
  __int64 v212; // [rsp+120h] [rbp-538h]
  char *v213; // [rsp+128h] [rbp-530h]
  char *v214; // [rsp+130h] [rbp-528h]
  char v215[64]; // [rsp+140h] [rbp-518h] BYREF
  _BYTE v216[512]; // [rsp+180h] [rbp-4D8h] BYREF
  _BYTE v217[512]; // [rsp+380h] [rbp-2D8h] BYREF
  __int64 v218; // [rsp+580h] [rbp-D8h]

  *(_QWORD *)&dword_140404A6C[284024502] = 0;
  dword_140404A6C[284024504] = 0;
  *(_QWORD *)&dword_140404A6C[284024515] = 0;
  dword_140404A6C[284024517] = 0;
  *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
  dword_140404A6C[284024513] = 1065353216;
  *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
  v0 = sub_140237448(0);
  srand(v0);
  sub_140075650();
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  sub_14006D930(
    "generating",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    1);
  MEMORY[0x140198EF3](*(_QWORD *)&dword_140404A6C[137297751]);
  sub_140139E90(
    v2,
    v1,
    v3,
    v4,
    v180,
    1065353216,
    1065353216,
    1065353216,
    1065353216,
    v185,
    v186,
    v187,
    v188,
    (_DWORD)v189,
    v190,
    (_DWORD)v191,
    v192,
    (_DWORD)v193,
    (_DWORD)v194,
    (_DWORD)v195,
    (_DWORD)v196,
    v197);
  *(_OWORD *)&dword_140404A6C[225391181] = xmmword_140279810;
  dword_140404A6C[225391197] = 1115684864;
  dword_140404A6C[225391198] = 1061158912;
  *(_OWORD *)&dword_140404A6C[225391185] = xmmword_140279710;
  *(_OWORD *)&dword_140404A6C[225391189] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[225391193] = xmmword_140279490;
  sub_14007B2A0((__int64)&dword_140404A6C[225391188], (float *)&dword_140404A6C[225391188]);
  dword_140404A6C[193070975] = 3;
  *(_QWORD *)&dword_140404A6C[193070967] = -1;
  dword_140404A6C[193070974] = -1;
  *(_QWORD *)&dword_140404A6C[193070976] = 3;
  sub_14013CDF0();
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v184 = 1065353216;
  v183 = 1065353216;
  v182 = 1065353216;
  v181 = 1065353216;
  sub_14006D930(
    "connecting",
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    1);
  MEMORY[0x140198EF3](*(_QWORD *)&dword_140404A6C[137297751]);
  if ( !(unsigned int)sub_1400A3F30() )
  {
    v5 = inet_addr("66.226.72.227");
    dword_140404A6C[280649181] = ntohl(v5);
    LOWORD(dword_140404A6C[280649182]) = 27592;
  }
  sub_1400E5F10();
  dword_140404A6C[278384725] = sub_140198A50(&dword_140404A6C[278384727]);
  if ( dword_140404A6C[278384725] )
  {
    if ( (unsigned int)sub_140198AF0(v216) )
    {
      v216[63] = 0;
      v6 = 0;
      do
      {
        v7 = v216[v6];
        *((_BYTE *)&dword_140404A6C[73991096] + v6++) = v7;
      }
      while ( v7 );
      HIBYTE(dword_140404A6C[73991103]) = 0;
    }
    dword_140404A6C[278384988] = sub_1401988C0(4);
    for ( i = 0; i < (int)dword_140404A6C[278384988]; ++i )
      sub_140198820(0x140000000LL + 528LL * i + 1117753312, &dword_140404A6C[132 * i + 278384992], (unsigned int)i, 4);
  }
  dword_140404A6C[133919261] = 0;
  sub_14024C22C(&dword_140404A6C[278520373]);
  sub_140158AB0(v215, "client2.csk");
  sub_14024C22C(&dword_140404A6C[278520245]);
  sub_14008EAD0(1);
  dword_140404A6C[289301069] = 1;
  v13 = MEMORY[0x140198F9B](v10, v9, v11, v12);
  dword_140404A6C[283831309] = 0;
  dword_140404A6C[179668278] = v13 - 1000;
  dword_140404A6C[70087066] = 2;
  dword_140404A6C[283831311] = 0;
  MEMORY[0x140198F9B](v15, v14, v16, v17);
  if ( (int)dword_140404A6C[283831311] <= 1 )
  {
    v22 = (__m128i)0x43A00000u;
    v23 = 0x18420000000LL;
    v24 = (__m128i)0x41400000u;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1402799B0);
    do
    {
      if ( dword_140404A6C[137297749] )
        break;
      dword_140404A6C[179955013] = MEMORY[0x140198F9B](v19, v18, v20, v21);
      input_poll_events_candidate();
      if ( !dword_140404A6C[283831309] || (v26 = 3, dword_140404A6C[280649838]) )
        v26 = 2;
      sub_140076770(v26);
      sub_140198E40();
      if ( !dword_140404A6C[283831309] && *(_QWORD *)&dword_140404A6C[284024901] )
      {
        *(_QWORD *)&dword_140404A6C[456202717] = *(_QWORD *)&dword_140404A6C[284024901];
        *(_QWORD *)&dword_140404A6C[284024901] = 0;
        dword_140404A6C[456202714] = 0;
        dword_140404A6C[456202453] = 0;
        MEMORY[0x1401FCD30](&dword_140404A6C[421831837], 0, 36112484);
        dword_140404A6C[179662132] = 1;
        v35 = MEMORY[0x140198F9B](v32, v31, v33, v34);
        dword_140404A6C[283831447] = -1;
        dword_140404A6C[179662126] = v35 + 200;
        dword_140404A6C[283831310] = 2;
      }
      sub_14006BED0(v28, v27, v29, v30);
      if ( dword_140404A6C[137297773] )
      {
        v37 = (unsigned int)((signed int)(16 * dword_140404A6C[137297756]) / 9);
        if ( (int)dword_140404A6C[137297755] <= (int)v37 )
          v37 = dword_140404A6C[137297755];
        dword_140404A6C[278520508] = v37;
        dword_140404A6C[137297759] = v37;
        dword_140404A6C[278520509] = ((int)v37 + 8 * ((int)v37 + 1)) / 16;
        dword_140404A6C[137297760] = dword_140404A6C[278520509];
        sub_14013D1B0(v37);
        render_cache_camera_uniforms_candidate();
        dword_140404A6C[137297773] = 0;
      }
      if ( dword_140404A6C[283831309] )
      {
        if ( dword_140404A6C[283831310] == 3 )
        {
LABEL_31:
          ui_build_options_menu_candidate();
          goto LABEL_55;
        }
        if ( dword_140404A6C[283785909] )
        {
          dword_140404A6C[70087067] = 1114636288;
          dword_140404A6C[70087068] = 1134559232;
          dword_140404A6C[70087073] = 1;
          v41 = sub_140070200("chat", (__int64)&dword_140404A6C[283785913], 0x3Cu);
          if ( v41 )
          {
            if ( v41 == 1 )
            {
              v42 = -1;
              do
                ++v42;
              while ( *((_BYTE *)&dword_140404A6C[283785913] + v42) );
              dword_140404A6C[283785912] = v42;
              v43 = -1;
              do
                ++v43;
              while ( *((_BYTE *)&dword_140404A6C[283785913] + v43) );
              v44 = 3597LL * (int)dword_140404A6C[284024501];
              dword_140404A6C[21 * (int)dword_140404A6C[v44 + 71856362] + 71856367 + v44] = 1;
              dword_140404A6C[21 * (int)dword_140404A6C[v44 + 71856362] + 71856368 + v44] = v43 & 0x3F;
              MEMORY[0x1401FC920](
                &dword_140404A6C[21 * (int)dword_140404A6C[v44 + 71856362] + 71856372 + v44],
                &dword_140404A6C[283785913]);
              dword_140404A6C[21 * (int)dword_140404A6C[v44 + 71856362] + 71856369 + v44] = dword_140404A6C[283785910];
              dword_140404A6C[v44 + 71856362] = ((unsigned __int8)dword_140404A6C[v44 + 71856362] + 1) & 0x3F;
              dword_140404A6C[283785911] = (LOBYTE(dword_140404A6C[283785911]) + 1) & 7;
            }
            dword_140404A6C[283785909] = 0;
          }
        }
      }
      else if ( dword_140404A6C[283831310] )
      {
        switch ( dword_140404A6C[283831310] )
        {
          case 1u:
            sub_1400FD300(v36);
            break;
          case 2u:
            sub_1400FC480(v36);
            break;
          case 3u:
            goto LABEL_31;
          case 4u:
            sub_1400FCFF0(v36);
            break;
          case 5u:
            if ( (int)dword_140404A6C[70317962] < 16 )
            {
              dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
              dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
            }
            dword_140404A6C[70087069] = 1128267776;
            dword_140404A6C[70087070] = 1103101952;
            dword_140404A6C[70087074] = 41;
            v38 = ui_button_candidate((__int64)"Back");
            v39 = dword_140404A6C[283831310];
            if ( v38 )
              v39 = 0;
            dword_140404A6C[70087067] = 1107296256;
            dword_140404A6C[283831310] = v39;
            *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 64.0;
            ui_select_value_candidate((__int64)"Female", (int *)&dword_140404A6C[73991647], 0);
            ui_select_value_candidate((__int64)"Male", (int *)&dword_140404A6C[73991647], 1);
            ui_int_slider_candidate((__int64)"Head", (int *)&dword_140404A6C[73991648], 0, 4, 1);
            ui_int_slider_candidate((__int64)"Eyes", (int *)&dword_140404A6C[73991652], 0, 7, 1);
            ui_int_slider_candidate((__int64)"Hair", (int *)&dword_140404A6C[73991651], 0, 8, 1);
            ui_int_slider_candidate((__int64)"Hair Color", (int *)&dword_140404A6C[73991650], 0, 11, 1);
            ui_int_slider_candidate((__int64)"Skin", (int *)&dword_140404A6C[73991649], 0, 5, 1);
            v40 = dword_140404A6C[70317962];
            if ( (int)dword_140404A6C[70317962] > 0 )
            {
              --dword_140404A6C[70317962];
              dword_140404A6C[70087069] = dword_140404A6C[2 * (v40 - 1) + 70317963];
              dword_140404A6C[70087070] = dword_140404A6C[2 * (v40 - 1) + 70317964];
            }
            break;
          case 6u:
            dword_140404A6C[70087069] = 1126170624;
            dword_140404A6C[70087070] = 1101004800;
            dword_140404A6C[70087074] = 41;
            if ( (unsigned int)ui_button_candidate((__int64)"Back") )
              dword_140404A6C[283831310] = 0;
            break;
          default:
            dword_140404A6C[283831310] = 0;
            goto LABEL_142;
        }
      }
      else
      {
        sub_1400FE1B0(v36);
      }
LABEL_55:
      if ( !dword_140404A6C[283831309] )
        goto LABEL_142;
      gameplay_mouse_camera_state_candidate(dword_140404A6C[284024501]);
      if ( !dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
        goto LABEL_142;
      v49 = 0;
      v50 = &dword_140404A6C[278846100];
      do
      {
        if ( *(v50 - 207) )
        {
          v51 = (int)*(v50 - 202);
          if ( (unsigned int)v51 <= 0x28 )
          {
            if ( _bittest64(&v23, v51) )
            {
              if ( *v50 == -1 )
              {
                v52 = sub_1400A4560(v46);
                *v50 = v52;
                if ( v52 != -1 )
                {
                  v50[1] = 0;
                  v46 = 3LL * v52;
                  dword_140404A6C[v46 + 278520517] = 1;
                  dword_140404A6C[3 * v52 + 278520518] = v49;
                  dword_140404A6C[v46 + 278520519] = v51;
                }
              }
            }
          }
        }
        ++v49;
        v50 += 1760;
      }
      while ( v49 < 1024 );
      v53 = 0;
      v54 = &dword_140404A6C[278520518];
      v55 = &dword_140404A6C[283830725];
      do
      {
        if ( *(v54 - 1) )
        {
          v46 = (int)*v54;
          v45 = 1760 * v46;
          if ( dword_140404A6C[1760 * v46 + 278845893] && (v56 = dword_140404A6C[v45 + 278845898], v56 == v54[1]) )
          {
            if ( !dword_140404A6C[v45 + 278846101] || v56 == 40 )
            {
              switch ( v56 )
              {
                case 0x27u:
                  sub_14009C680(v46, *v55);
                  break;
                case 0x28u:
                  sub_14009C040(v46, *v55);
                  break;
                case 0x22u:
                  sub_14009CD10(v46, *v55);
                  break;
                case 0x1Du:
                  sub_14009D210(v46, *v55);
                  break;
              }
              v46 = 7040LL * (int)*v54;
              *(unsigned int *)((char *)&dword_140404A6C[278846101] + v46) = 1;
            }
          }
          else
          {
            if ( dword_140404A6C[v45 + 278846100] == v53 )
              dword_140404A6C[v45 + 278846100] = -1;
            *(v54 - 1) = 0;
          }
        }
        ++v53;
        ++v55;
        v54 += 3;
      }
      while ( v53 < 256 );
      v57 = 0;
      v58 = 0;
      v59 = 0;
      do
      {
        if ( dword_140404A6C[v59 + 83194357] )
        {
          if ( dword_140404A6C[v59 + 83200510] && (unsigned int)v57 <= 0xFFF )
          {
            sub_14000C4C0(v57);
            for ( j = 0; j < 4; ++j )
            {
              if ( v59 <= 28378350 )
              {
                v61 = (int)dword_140404A6C[j + 83200503 + v58];
                dword_140404A6C[j + 83200503 + v58] = -1;
                if ( (unsigned int)v61 <= 0x3FF )
                {
                  dword_140404A6C[8969 * v61 + 73991662] = -1;
                  sub_1401941F0(0, (unsigned int)v61);
                  sub_1401941F0(3, (unsigned int)v61);
                  sub_1401941F0(5, (unsigned int)v61);
                }
              }
            }
            dword_140404A6C[v59 + 83200510] = 0;
            if ( v57 == 1008 )
              ++dword_140404A6C[284205157];
          }
          if ( dword_140404A6C[v59 + 83200511] )
            sub_140017910(v57);
        }
        ++v57;
        v59 += 6930LL;
        v58 += 6930;
      }
      while ( v57 < 4096 );
      sub_1400932D0(v46, v45 * 4, v47, v48);
      v64 = dword_140404A6C[309078285];
      v65 = dword_140404A6C[284024501];
      if ( dword_140404A6C[309078285] )
      {
        v76 = dword_140404A6C[284021983];
        goto LABEL_112;
      }
      if ( dword_140404A6C[284024501] == -1
        || (LODWORD(v63) = 14388 * dword_140404A6C[284024501],
            v62 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292],
            (_DWORD)v62 == -1) )
      {
        v67 = dword_140404A6C[284021983] == 0;
        if ( (int)dword_140404A6C[284021983] > 0 )
        {
          v76 = --dword_140404A6C[284021983];
LABEL_112:
          v67 = v76 == 0;
        }
      }
      else
      {
        v66 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
        LODWORD(v63) = dword_140404A6C[7166 * v62 + 280651318];
        if ( (int)v63 > 0 )
        {
          dword_140404A6C[284021983] = 180;
          goto LABEL_106;
        }
        v67 = dword_140404A6C[284021983] == 0;
        if ( (int)dword_140404A6C[284021983] > 0 )
        {
          dword_140404A6C[284021982] = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
          --dword_140404A6C[284021983];
LABEL_106:
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          dword_140404A6C[284024513] = 1065353216;
          v68 = dword_140404A6C[344 * v66 + 284956408];
          dword_140404A6C[284024502] = dword_140404A6C[344 * v66 + 284956407];
          dword_140404A6C[284024504] = dword_140404A6C[344 * v66 + 284956409];
          dword_140404A6C[284024503] = v68;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
          v69 = 3597LL * (int)dword_140404A6C[284024501];
          v62 = (int)dword_140404A6C[v69 + 71856292];
          *(float *)&dword_140404A6C[284024514] = 1.0 - *(float *)&dword_140404A6C[v69 + 71856332];
          v70 = dword_140404A6C[344 * v62 + 284956411];
          v71 = dword_140404A6C[344 * v62 + 284956413];
          v72 = dword_140404A6C[344 * v62 + 284956414];
          v73 = dword_140404A6C[344 * v62 + 284956415];
          dword_140404A6C[284024505] = dword_140404A6C[344 * v62 + 284956410];
          dword_140404A6C[284024507] = dword_140404A6C[344 * v62 + 284956412];
          dword_140404A6C[284024511] = dword_140404A6C[344 * v62 + 284956416];
          v74 = dword_140404A6C[344 * v62 + 284956418];
          dword_140404A6C[284024506] = v70;
          v75 = dword_140404A6C[344 * v62 + 284956417];
          dword_140404A6C[284024513] = v74;
          dword_140404A6C[284024508] = v71;
          dword_140404A6C[284024509] = v72;
          dword_140404A6C[284024510] = v73;
          dword_140404A6C[284024512] = v75;
          if ( dword_140404A6C[283831478] )
          {
            v71 = dword_140404A6C[284024529];
            v72 = dword_140404A6C[284024530];
            v73 = dword_140404A6C[284024531];
            dword_140404A6C[284024505] = dword_140404A6C[284024526];
            dword_140404A6C[284024507] = dword_140404A6C[284024528];
            dword_140404A6C[284024506] = dword_140404A6C[284024527];
            dword_140404A6C[284024508] = dword_140404A6C[284024529];
            dword_140404A6C[284024509] = dword_140404A6C[284024530];
            *(_QWORD *)&dword_140404A6C[284024510] = *(_QWORD *)&dword_140404A6C[284024531];
            *(_QWORD *)&dword_140404A6C[284024512] = *(_QWORD *)&dword_140404A6C[284024533];
          }
          v63 = (__int64)&dword_140404A6C[280651680];
          *(float *)&dword_140404A6C[284024502] = (float)(*(float *)&dword_140404A6C[284024502]
                                                        - (float)(*(float *)&v71 * 0.0625))
                                                + (float)(*(float *)&v71 * 0.0625);
          *(float *)&dword_140404A6C[284024503] = (float)(*(float *)&dword_140404A6C[284024503]
                                                        - (float)(*(float *)&v72 * 0.0625))
                                                + (float)(*(float *)&v72 * 0.0625);
          dword_140404A6C[284024516] = dword_140404A6C[7166 * v62 + 280651681];
          *(float *)&dword_140404A6C[284024504] = (float)(*(float *)&dword_140404A6C[284024504]
                                                        - (float)(*(float *)&v73 * 0.0625))
                                                + (float)(*(float *)&v73 * 0.0625);
          dword_140404A6C[284024515] = dword_140404A6C[7166 * v62 + 280651680];
          dword_140404A6C[284024517] = dword_140404A6C[7166 * v62 + 280651682];
          goto LABEL_139;
        }
      }
      if ( v67 || dword_140404A6C[309078285] )
      {
        if ( dword_140404A6C[284024501] == -1 && !dword_140404A6C[19065870] || dword_140404A6C[309078285] )
        {
          dword_140404A6C[284024513] = 1065353216;
          v77 = 0;
          if ( dword_140404A6C[309078285] )
            v77 = 2;
          v78 = dword_140404A6C[7 * v77 + 284024382];
          dword_140404A6C[284024502] = dword_140404A6C[7 * v77 + 284024381];
          v79 = dword_140404A6C[7 * v77 + 284024383];
          dword_140404A6C[284024503] = v78;
          dword_140404A6C[284024504] = v79;
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
          *(_OWORD *)&dword_140404A6C[284024514] = xmmword_140278D30;
        }
        else
        {
          dword_140404A6C[284024502] = dword_140404A6C[284024388];
          dword_140404A6C[284024503] = dword_140404A6C[284024389];
          dword_140404A6C[284024504] = dword_140404A6C[284024390];
          dword_140404A6C[284024514] = 1065353216;
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          dword_140404A6C[284024513] = 1065353216;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
          LODWORD(v62) = dword_140404A6C[284021982];
          *(_QWORD *)&dword_140404A6C[284024515] = 0;
          dword_140404A6C[284024517] = 0;
          *(float *)&dword_140404A6C[284024502] = *(float *)&dword_140404A6C[284024502]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024511]);
          *(float *)&dword_140404A6C[284024503] = *(float *)&dword_140404A6C[284024503]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024512]);
          *(float *)&dword_140404A6C[284024504] = *(float *)&dword_140404A6C[284024504]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024513]);
          if ( dword_140404A6C[284021982] != -1 )
          {
            LODWORD(v63) = 28664 * dword_140404A6C[284021982];
            if ( !dword_140404A6C[7166 * dword_140404A6C[284021982] + 280651303] )
              LODWORD(v62) = -1;
            dword_140404A6C[284021982] = v62;
          }
          v80 = dword_140404A6C[19065870];
          if ( !dword_140404A6C[19065870] )
            goto LABEL_131;
          v64 = dword_140404A6C[19065878];
          if ( dword_140404A6C[19065878] != 1 )
          {
            dword_140404A6C[284024513] = 1065353216;
            v81 = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024382];
            dword_140404A6C[284024502] = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024381];
            v82 = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024383];
            dword_140404A6C[284024503] = v81;
            dword_140404A6C[284024504] = v82;
            *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
            *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
            sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
            sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
            v64 = dword_140404A6C[19065878];
            LODWORD(v62) = dword_140404A6C[284021982];
            v80 = dword_140404A6C[19065870];
            v63 = 28LL * (int)dword_140404A6C[19065878];
            *(float *)&dword_140404A6C[284024514] = 1.0 - *(float *)((char *)&dword_140404A6C[284024386] + v63);
          }
          if ( v80 )
          {
            if ( v64 == 1 )
              goto LABEL_135;
          }
          else
          {
LABEL_131:
            LODWORD(v63) = dword_140404A6C[283831312];
            if ( dword_140404A6C[283831312] == 3
              || dword_140404A6C[283831312] - 5 <= 2
              || dword_140404A6C[283831312] == 4
              && (v63 = 14388LL * (int)dword_140404A6C[284024501],
                  *(unsigned int *)((char *)&dword_140404A6C[71856266] + v63)) )
            {
LABEL_135:
              if ( (_DWORD)v62 != -1 )
              {
                dword_140404A6C[284024514] = 1065353216;
                dword_140404A6C[284024513] = 1065353216;
                v83 = dword_140404A6C[344 * (int)v62 + 284956344];
                v84 = dword_140404A6C[344 * (int)v62 + 284956345];
                dword_140404A6C[284024390] = dword_140404A6C[344 * (int)v62 + 284956346];
                dword_140404A6C[284024504] = dword_140404A6C[284024390];
                dword_140404A6C[284024388] = v83;
                dword_140404A6C[284024389] = v84;
                dword_140404A6C[284024502] = v83;
                dword_140404A6C[284024503] = v84;
                *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
                *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
                sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
                sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
                *(float *)&dword_140404A6C[284024502] = *(float *)&dword_140404A6C[284024502]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024511]);
                *(float *)&dword_140404A6C[284024503] = *(float *)&dword_140404A6C[284024503]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024512]);
                *(float *)&dword_140404A6C[284024504] = *(float *)&dword_140404A6C[284024504]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024513]);
                if ( dword_140404A6C[284021982] == -1 )
                {
                  *(_QWORD *)&dword_140404A6C[284024515] = 0;
                  dword_140404A6C[284024517] = 0;
                }
                else
                {
                  v63 = 28664LL * (int)dword_140404A6C[284021982];
                  v85 = *(unsigned int *)((char *)&dword_140404A6C[280651339] + v63);
                  dword_140404A6C[284024515] = *(unsigned int *)((char *)&dword_140404A6C[280651338] + v63);
                  dword_140404A6C[284024517] = *(unsigned int *)((char *)&dword_140404A6C[280651340] + v63);
                  dword_140404A6C[284024516] = v85;
                }
              }
            }
          }
        }
      }
LABEL_139:
      if ( dword_140404A6C[179668288] )
      {
        *(_QWORD *)&dword_140404A6C[284024502] = *(_QWORD *)&dword_140404A6C[284024381];
        dword_140404A6C[284024504] = dword_140404A6C[284024383];
        *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
        dword_140404A6C[284024513] = 1065353216;
        *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
        sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508]);
        sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505]);
        *(_OWORD *)&dword_140404A6C[284024514] = xmmword_140278D30;
      }
      sub_14011FD00(
        v63,
        v62,
        v64,
        v65,
        v180,
        v181,
        v182,
        v183,
        v184,
        v185,
        v186,
        v187,
        v188,
        (_DWORD)v189,
        v190,
        (_DWORD)v191,
        v192,
        (_DWORD)v193,
        (_DWORD)v194,
        (_DWORD)v195,
        (_DWORD)v196,
        v197,
        (_DWORD)v198,
        (_DWORD)v199,
        (_DWORD)v200,
        (_DWORD)v201,
        (_DWORD)v202,
        (_DWORD)v203,
        v204);
LABEL_142:
      dword_140404A6C[421831846] = 0;
      if ( dword_140404A6C[283831309] && dword_140404A6C[456202453] )
      {
        dword_140404A6C[450929628] = dword_140404A6C[284021982];
        sub_14002DB60(255, dword_140404A6C[284024501]);
        v86 = 0;
        v190 = 0;
        v87 = 8;
        v188 = 0;
        v88 = &dword_140404A6C[450929549];
        v192 = 8;
        v89 = &dword_140404A6C[308337814];
        v189 = &dword_140404A6C[450929549];
        v90 = 0;
        v191 = &dword_140404A6C[308337814];
        do
        {
          v91 = *(v88 - 1);
          *(unsigned int *)((char *)&dword_140404A6C[308307077] + v90) = v91;
          if ( v91 )
          {
            v92 = (int)*v88;
            v93 = (char *)&dword_140404A6C[308338453] + v86;
            *(unsigned int *)((char *)&dword_140404A6C[308307081] + v90) = v88[1];
            *(unsigned int *)((char *)&dword_140404A6C[308307082] + v90) = v88[2];
            *(unsigned int *)((char *)&dword_140404A6C[308307079] + v90) = v92;
            v92 *= 131604;
            v94 = (unsigned int *)((char *)&dword_140404A6C[308337813] + v90);
            *(unsigned int *)((char *)&dword_140404A6C[308337811] + v90) = *(unsigned int *)((char *)&dword_140404A6C[299853696]
                                                                                           + v92);
            v95 = v92 - v86 - (_QWORD)&dword_140404A6C[308338453];
            v96 = (char *)&dword_140404A6C[299854338] + v95;
            v193 = (char *)&dword_140404A6C[299855362] + v95;
            v97 = (char *)&dword_140404A6C[299854850] + v95;
            v194 = (char *)&dword_140404A6C[299855874] + v95;
            v195 = (char *)&dword_140404A6C[299856386] + v95;
            v208 = (char *)&dword_140404A6C[299856898] + v95;
            v211 = (char *)&dword_140404A6C[299857410] + v95;
            v98 = 0x140000000LL + v95 + 1203628660;
            v99 = v92 - v90 - (_QWORD)&dword_140404A6C[308337813];
            v212 = v98;
            v196 = (char *)&dword_140404A6C[299853763] + v99;
            v100 = (char *)&dword_140404A6C[299853762] + v99;
            v213 = (char *)&dword_140404A6C[299853762] + v99;
            v101 = (char *)&dword_140404A6C[299853698] + v99;
            v197 = (__int64)&dword_140404A6C[299853699] + v99;
            v214 = (char *)&dword_140404A6C[299853698] + v99;
            v198 = (char *)&dword_140404A6C[299853764] + v99;
            v199 = (char *)&dword_140404A6C[299853700] + v99;
            v200 = (char *)&dword_140404A6C[299853765] + v99;
            v201 = (char *)&dword_140404A6C[299853701] + v99;
            v202 = (char *)&dword_140404A6C[299853766] + v99;
            v203 = (char *)&dword_140404A6C[299853702] + v99;
            v204 = (__int64)&dword_140404A6C[299853767] + v99;
            v205 = (char *)&dword_140404A6C[299853703] + v99;
            v206 = (char *)&dword_140404A6C[299853768] + v99;
            v102 = v193;
            v103 = v194;
            v104 = v195;
            v207 = (char *)&dword_140404A6C[299853704] + v99;
            v209 = (char *)&dword_140404A6C[299853769] + v99;
            v210 = 0x140000000LL + v99 + 1203628176;
            v105 = 8;
            do
            {
              v106 = *(_DWORD *)((char *)v94 + (_QWORD)v100);
              v107 = *(_DWORD *)((char *)v94 + (_QWORD)v101);
              *v94 = v106;
              v94[64] = v107;
              MEMORY[0x1401FC920](v93 - 2048, &v93[v98]);
              v108 = v197;
              v94[1] = *(_DWORD *)((char *)v94 + (_QWORD)v196);
              v94[65] = *(_DWORD *)((char *)v94 + v108);
              MEMORY[0x1401FC920](v93, &v93[(_QWORD)v96]);
              v109 = v199;
              v94[2] = *(_DWORD *)((char *)v94 + (_QWORD)v198);
              v94[66] = *(_DWORD *)((char *)v94 + (_QWORD)v109);
              MEMORY[0x1401FC920](v93 + 2048, &v97[(_QWORD)v93]);
              v110 = v201;
              v94[3] = *(_DWORD *)((char *)v94 + (_QWORD)v200);
              v94[67] = *(_DWORD *)((char *)v94 + (_QWORD)v110);
              MEMORY[0x1401FC920](v93 + 4096, &v93[(_QWORD)v102]);
              v111 = v203;
              v94[4] = *(_DWORD *)((char *)v94 + (_QWORD)v202);
              v94[68] = *(_DWORD *)((char *)v94 + (_QWORD)v111);
              MEMORY[0x1401FC920](v93 + 6144, &v93[(_QWORD)v103]);
              v112 = v205;
              v94[5] = *(_DWORD *)((char *)v94 + v204);
              v94[69] = *(_DWORD *)((char *)v94 + (_QWORD)v112);
              MEMORY[0x1401FC920](v93 + 0x2000, &v93[(_QWORD)v104]);
              v113 = &v208[(_QWORD)v93];
              v114 = v207;
              v94[6] = *(_DWORD *)((char *)v94 + (_QWORD)v206);
              v94[70] = *(_DWORD *)((char *)v94 + (_QWORD)v114);
              MEMORY[0x1401FC920](v93 + 10240, v113);
              v115 = &v211[(_QWORD)v93];
              v116 = v210;
              v94[7] = *(_DWORD *)((char *)v94 + (_QWORD)v209);
              v94[71] = *(_DWORD *)((char *)v94 + v116);
              MEMORY[0x1401FC920](v93 + 12288, v115);
              v93 += 0x4000;
              v98 = v212;
              v94 += 8;
              v100 = v213;
              v101 = v214;
              --v105;
            }
            while ( v105 );
            v89 = v191;
            v90 = v190;
            v88 = v189;
            v86 = v188;
            v87 = v192;
          }
          else
          {
            *(_QWORD *)(v89 - 1) = 0;
            *(_QWORD *)(v89 + 1) = 0;
            *(_QWORD *)(v89 + 3) = 0;
            *(_QWORD *)(v89 + 5) = 0;
            *(_QWORD *)(v89 + 7) = 0;
            *(_QWORD *)(v89 + 9) = 0;
            *(_QWORD *)(v89 + 11) = 0;
            *(_QWORD *)(v89 + 13) = 0;
            *(_QWORD *)(v89 + 15) = 0;
            *(_QWORD *)(v89 + 17) = 0;
            *(_QWORD *)(v89 + 19) = 0;
            *(_QWORD *)(v89 + 21) = 0;
            *(_QWORD *)(v89 + 23) = 0;
            *(_QWORD *)(v89 + 25) = 0;
            *(_QWORD *)(v89 + 27) = 0;
            *(_QWORD *)(v89 + 29) = 0;
            *(_QWORD *)(v89 + 31) = 0;
            *(_QWORD *)(v89 + 33) = 0;
            *(_QWORD *)(v89 + 35) = 0;
            *(_QWORD *)(v89 + 37) = 0;
            *(_QWORD *)(v89 + 39) = 0;
            *(_QWORD *)(v89 + 41) = 0;
            *(_QWORD *)(v89 + 43) = 0;
            *(_QWORD *)(v89 + 45) = 0;
            *(_QWORD *)(v89 + 47) = 0;
            *(_QWORD *)(v89 + 49) = 0;
            *(_QWORD *)(v89 + 51) = 0;
            *(_QWORD *)(v89 + 53) = 0;
            *(_QWORD *)(v89 + 55) = 0;
            *(_QWORD *)(v89 + 57) = 0;
            *(_QWORD *)(v89 + 59) = 0;
            *(_QWORD *)(v89 + 61) = 0;
          }
          v86 += 385604;
          v88 += 10;
          v90 += 385604;
          v188 = v86;
          v89 += 96401;
          v189 = v88;
          --v87;
          v190 = v90;
          v192 = v87;
          v191 = v89;
        }
        while ( v87 );
      }
      sub_14014FCF0(&dword_140404A6C[284024502], &dword_140404A6C[284024505], &dword_140404A6C[284024515]);
      if ( dword_140404A6C[284024501] == -1 )
      {
        sub_14009E210(0);
      }
      else
      {
        sub_14009E210(dword_140404A6C[284024501]);
        v117 = 3597LL * (int)dword_140404A6C[284024501];
        v118 = 32901LL * (int)dword_140404A6C[284024501];
        dword_140404A6C[v117 + 71856270] = 0;
        if ( !dword_140404A6C[v118 + 299853693] )
          dword_140404A6C[v117 + 71856270] = 1;
      }
      unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
      unk_140404718(36160, 36064, 3553, dword_140404A6C[42 * dword_140404A6C[283829873] + 436582486], 0);
      if ( !dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
      {
        (*(void (**)(void))&dword_140404A6C[18215089])();
        (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(0x4000);
      }
      sub_14007BB00();
      v121 = dword_140404A6C[283831309];
      if ( dword_140404A6C[283831309] )
      {
        v122 = dword_140404A6C[283831310];
        if ( dword_140404A6C[283831310] != 3
          && !dword_140404A6C[284023069]
          && dword_140404A6C[283831448]
          && dword_140404A6C[284024501] != -1 )
        {
          ui_draw_hud_menu_prompt_candidate(dword_140404A6C[284024501], dword_140404A6C[283831310], v119, v120);
          v122 = dword_140404A6C[283831310];
          v121 = dword_140404A6C[283831309];
        }
        if ( v121 )
        {
          if ( v122 != 3 && !dword_140404A6C[284023069] )
          {
            sub_140092D70();
            v122 = dword_140404A6C[283831310];
            v121 = dword_140404A6C[283831309];
          }
          if ( v121 && v122 != 3 && !dword_140404A6C[284023070] )
            sub_140092370();
        }
      }
      sub_14007BB00();
      if ( dword_140404A6C[283831309] && dword_140404A6C[283831310] != 3 && !dword_140404A6C[284023069] )
        sub_140082420();
      dword_140404A6C[438291413] = 2;
      if ( dword_140404A6C[283785909] )
      {
        if ( dword_140404A6C[284024501] == -1 )
        {
          v124 = "Chat:";
          goto LABEL_185;
        }
        v123 = dword_140404A6C[283785910];
        if ( !dword_140404A6C[283785910] )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            "Whisper:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
            (unsigned int)_mm_cvtsi128_si32(v22),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v123 = dword_140404A6C[283785910];
        }
        if ( v123 == 1 )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            "Say:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
            (unsigned int)_mm_cvtsi128_si32(v22),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v123 = dword_140404A6C[283785910];
        }
        if ( v123 == 2 )
        {
          v124 = "Yell:";
LABEL_185:
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            v124,
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
            (unsigned int)_mm_cvtsi128_si32(v22),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
        }
      }
      sub_14007BB00();
      v125 = dword_140404A6C[283831309];
      if ( dword_140404A6C[283831309] )
      {
        v126 = dword_140404A6C[283831310];
        if ( dword_140404A6C[283831310] != 3
          && dword_140404A6C[283831448] == 2
          && *(float *)&dword_140404A6C[284023067] > 0.0 )
        {
          unk_140404050(3553, dword_140404A6C[451221642]);
          sub_14006CFF0(0.0, 0.0, v127, 576.0, 0, 0, 0, 0, dword_140404A6C[284023067]);
          v126 = dword_140404A6C[283831310];
          v125 = dword_140404A6C[283831309];
        }
        if ( v125 && v126 != 3 && dword_140404A6C[19065870] && dword_140404A6C[283831448] == 3 )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            "Replay End",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43700000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            1);
        }
      }
      sub_14007BB00();
      if ( dword_140404A6C[283831309]
        && dword_140404A6C[283831310] != 3
        && dword_140404A6C[284024501] != -1
        && (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
        && dword_140404A6C[283831448] == 2
        && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292] == -1
        && !dword_140404A6C[284023069] )
      {
        sub_140088C00();
      }
      if ( dword_140404A6C[73991642] )
      {
        sub_14006D930(
          "Ping:",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43960000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        v185 = dword_140404A6C[430859699];
        v184 = 1065353216;
        v183 = 1065353216;
        v182 = 1065353216;
        v181 = 1065353216;
        sub_14006D930(
          "/i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43960000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          2);
        v128 = _mm_load_si128((const __m128i *)&xmmword_140279150);
        v129 = (const __m128i *)&dword_140404A6C[430859706];
        v130 = 0;
        v131 = 0;
        do
        {
          v132 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(v129 - 1), (__m128i)0LL), si128);
          v133 = _mm_and_si128(_mm_add_epi32(v128, v130), v132);
          v134 = _mm_andnot_si128(v132, v130);
          v135 = v133;
          v136 = _mm_loadu_si128(v129);
          v129 += 2;
          v130 = _mm_or_si128(v135, v134);
          v137 = _mm_andnot_si128(_mm_cmpeq_epi32((__m128i)0LL, v136), si128);
          v131 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(v128, v131), v137), _mm_andnot_si128(v137, v131));
        }
        while ( (__int64)v129 < (__int64)&dword_140404A6C[430859962] );
        v138 = _mm_add_epi32(v130, v131);
        v139 = _mm_add_epi32(v138, _mm_srli_si128(v138, 8));
        sub_14006D930(
          "Packetloss:",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x439E0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        v185 = 100 - (_mm_cvtsi128_si32(_mm_add_epi32(v139, _mm_srli_si128(v139, 4))) >> 8);
        v184 = 1065353216;
        v183 = 1065353216;
        v182 = 1065353216;
        v181 = 1065353216;
        sub_14006D930(
          "/i%",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x439E0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          2);
      }
      v185 = dword_140404A6C[73991644];
      v184 = dword_140404A6C[284023068];
      v183 = 1065353216;
      v182 = 1065353216;
      v181 = 1065353216;
      sub_14006D930(
        "Mic:/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
        (unsigned int)_mm_cvtsi128_si32(v24),
        32);
      v143 = 0;
      if ( (dword_140404A6C[284024501] & 0x80000000) == 0 )
        v143 = dword_140404A6C[284024501];
      if ( dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
      {
        v144 = 32901LL * (int)v143;
        if ( !dword_140404A6C[v144 + 299853693] || dword_140404A6C[283831310] == 3 )
        {
          unk_140404050(3553, dword_140404A6C[451221642]);
          v67 = dword_140404A6C[v144 + 299853693] == 0;
          dword_140404A6C[456217205] = 2;
          dword_140404A6C[456217207] = 0;
          dword_140404A6C[456217208] = 9;
          if ( v67 )
            v147 = xmmword_140279700;
          else
            v147 = xmmword_140279690;
          *(_OWORD *)&dword_140404A6C[456807033] = v147;
          v148 = 0;
          v149 = &dword_140404A6C[308276353];
          do
          {
            sub_14007D420(8 * v148++, v145, v146);
            sub_14007D420(v151, v150, v152);
            v149 += 4;
          }
          while ( v148 < 239 );
          sub_14006E0D0(v153, v145, v146);
          v22 = (__m128i)0x43A00000u;
          v24 = (__m128i)0x41400000u;
        }
        if ( dword_140404A6C[283831309] )
          goto LABEL_248;
      }
      if ( !dword_140404A6C[283831310] )
      {
        sub_14006D930(
          "Sub Rosa",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          1);
        v186 = dword_1402B23DC + 97;
        v185 = dword_1402B231C;
        sub_14006D930(
          "ALPHA /i/c",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43300000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          1);
        v184 = 1065353216;
        v183 = 1065353216;
        v182 = 1065353216;
        v181 = 1065353216;
        sub_14006D930(
          (char *)off_1402B2810,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43400000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41600000u),
          65);
        if ( dword_140404A6C[278384725] )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            "Steam",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44090000u),
            (unsigned int)_mm_cvtsi128_si32(v24),
            0);
        }
      }
      if ( dword_140404A6C[283831310] == 1 )
      {
        sub_14006D930(
          "Name",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          0);
        sub_14006D930(
          "Ping",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43F00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          2);
        sub_14006D930(
          "Players",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x440C0000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          2);
        sub_14006D930(
          "Game Type",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44280000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          2);
        sub_14006D930(
          "Version",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44440000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          2);
        sub_14006D930(
          "Password",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x445B8000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
          2);
        sub_14006D930(
          "/i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43C80000u),
          (unsigned int)_mm_cvtsi128_si32(v24),
          0);
        v185 = dword_140404A6C[179662128];
        v184 = 1065353216;
        v183 = 1065353216;
        v182 = 1065353216;
        v181 = 1065353216;
        sub_14006D930(
          "/i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43CE0000u),
          (unsigned int)_mm_cvtsi128_si32(v24),
          0);
      }
      if ( dword_140404A6C[283831310] == 2 )
      {
        v143 = dword_140404A6C[179662132];
        if ( dword_140404A6C[179662132] - 1 <= 1 )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            "Connecting",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
            1);
          v143 = dword_140404A6C[179662132];
        }
        if ( (_DWORD)v143 == 4 )
        {
          v184 = 1065353216;
          v183 = 1065353216;
          v182 = 1065353216;
          v181 = 1065353216;
          sub_14006D930(
            &dword_140404A6C[179662389],
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43200000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
            1);
        }
      }
      if ( dword_140404A6C[283831310] == 5 )
        sub_1400FBA50(
          v143,
          v140,
          v141,
          v142,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          (_DWORD)v189,
          v190,
          (_DWORD)v191,
          v192,
          (_DWORD)v193,
          (_DWORD)v194,
          (_DWORD)v195,
          (_DWORD)v196,
          v197,
          (_DWORD)v198,
          (_DWORD)v199,
          (_DWORD)v200,
          (_DWORD)v201,
          (_DWORD)v202,
          (_DWORD)v203,
          v204);
      if ( dword_140404A6C[283831310] == 6 )
        sub_1400FCC90(v143);
      if ( dword_140404A6C[283831309] )
      {
LABEL_248:
        if ( dword_140404A6C[283831310] != 3 && dword_140404A6C[73991641] )
          sub_140085AA0();
        if ( dword_140404A6C[283831309] )
        {
          v155 = 1;
          if ( !dword_140404A6C[280649838] )
            goto LABEL_254;
        }
        goto LABEL_253;
      }
      if ( dword_140404A6C[179668277] )
      {
        if ( dword_140404A6C[179668277] == 1 )
        {
          v154 = "CS Auth...";
        }
        else
        {
          if ( dword_140404A6C[179668277] != 2 )
            goto LABEL_253;
          sub_140158AB0(v217, "%03d-%04d", dword_140404A6C[134050337] / 0x2710, dword_140404A6C[134050337] % 0x2710);
          v154 = v217;
        }
      }
      else if ( dword_140404A6C[278384725] )
      {
        v154 = "Steam Auth...";
        if ( !dword_140404A6C[278384987] )
          v154 = "Steam Ticket...";
      }
      else
      {
        v154 = "Steam Init Failed";
      }
      v184 = 1065353216;
      v183 = 1065353216;
      v182 = 1065353216;
      v181 = 1065353216;
      sub_14006D930(
        v154,
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x440C0000u),
        (unsigned int)_mm_cvtsi128_si32(v24),
        0);
      if ( dword_140404A6C[283831309] )
        goto LABEL_248;
LABEL_253:
      v155 = 0;
LABEL_254:
      sub_140072450(v155);
      v160 = 0;
      v161 = 0;
      dword_140404A6C[dword_140404A6C[179955015] + 179955016] = MEMORY[0x140198F9B](v157, v156, v158, v159)
                                                              - dword_140404A6C[179955013];
      v162 = dword_140404A6C[179955080];
      v163 = dword_140404A6C[dword_140404A6C[179955015] + 179955016];
      dword_140404A6C[179955081] = 0;
      if ( (int)dword_140404A6C[179955080] < v163 )
        v162 = v163;
      dword_140404A6C[179955080] = v162;
      dword_140404A6C[179955015] = (LOBYTE(dword_140404A6C[179955015]) + 1) & 0x1F;
      v164 = (const __m128i *)&dword_140404A6C[179955020];
      do
      {
        v165 = _mm_cvtepi32_ps(_mm_loadu_si128(v164 - 1));
        v166 = _mm_loadu_si128(v164);
        v164 += 2;
        v160 = _mm_add_ps(v160, v165);
        v161 = _mm_add_ps(v161, _mm_cvtepi32_ps(v166));
      }
      while ( (__int64)v164 < (__int64)&dword_140404A6C[179955052] );
      v167 = _mm_add_ps(v160, v161);
      dword_140404A6C[421831846] = 0;
      v168 = _mm_add_ps(_mm_movehl_ps(v167, v167), v167);
      *(float *)&dword_140404A6C[179955081] = (float)(v168.m128_f32[0] + _mm_shuffle_ps(v168, v168, 245).m128_f32[0])
                                            * 0.03125;
      if ( dword_140404A6C[283831309] )
      {
        v169 = 0;
        if ( dword_140404A6C[456202453] )
        {
          for ( ; !(unsigned int)sub_14003B920(); ++v169 )
          {
            if ( v169 >= 20 )
              break;
          }
          v170 = 4;
          do
          {
            sub_14003B920();
            --v170;
          }
          while ( v170 );
        }
        else if ( dword_140404A6C[19065870] )
        {
          for ( ; !(unsigned int)sub_14003B920(); ++v169 )
          {
            if ( v169 >= 20 )
              break;
            MEMORY[0x140198FA1](1);
          }
          v171 = 4;
          if ( BYTE1(dword_140404A6C[284024767]) )
            v171 = 16;
          if ( BYTE2(dword_140404A6C[284024767]) )
            v171 = 64;
          do
          {
            sub_14003B920();
            --v171;
          }
          while ( v171 );
        }
        else if ( dword_140404A6C[73991654] )
        {
          for ( ; !(unsigned int)sub_14003B920(); ++v169 )
          {
            if ( v169 >= 20 )
              break;
          }
          v174 = 4;
          do
          {
            sub_14003B920();
            --v174;
          }
          while ( v174 );
        }
        else
        {
          for ( ; !(unsigned int)sub_14003B920(); ++v169 )
          {
            if ( v169 >= 20 )
              break;
            MEMORY[0x140198FA1](1);
          }
          v172 = 4;
          do
          {
            sub_14003B920();
            --v172;
          }
          while ( v172 );
          for ( k = 0; !dword_140404A6C[421831846]; ++k )
          {
            if ( k >= 50 )
              break;
            sub_14003B920();
            MEMORY[0x140198FA1](1);
          }
        }
      }
      unk_1404046F0(36160, 0);
      (*(void (**)(void))&dword_140404A6C[18215089])();
      (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(0x4000);
      v175 = 0;
      v176 = 0;
      if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[278520508] )
        v175 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[278520508]) / 2;
      if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[278520509] )
        v176 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[278520509]) / 2;
      unk_1404046F0(36008, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
      unk_1404046F0(36009, 0);
      v185 = 9728;
      v184 = 0x4000;
      v183 = dword_140404A6C[278520509] + v176;
      v182 = dword_140404A6C[278520508] + v175;
      v181 = v176;
      LODWORD(v180) = v175;
      unk_140404740(0, 0);
      unk_1404046F0(36008, 0);
      MEMORY[0x140198EF3](*(_QWORD *)&dword_140404A6C[137297751]);
      v23 = 0x18420000000LL;
    }
    while ( (int)dword_140404A6C[283831311] <= 1 );
  }
  if ( dword_140404A6C[283831309] )
    sub_140095FC0(v19, v18, v20);
  closesocket((int)dword_140404A6C[289301079]);
  dword_140404A6C[289301071] = 0;
  sub_1401E0F20(*(_QWORD *)&dword_140404A6C[299853437]);
  v177 = &dword_140404A6C[299853565];
  do
  {
    sub_1401E2C30(*(_QWORD *)v177);
    v177 += 2;
  }
  while ( (__int64)v177 < (__int64)&dword_140404A6C[299853581] );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v179 ^ v218);
}

