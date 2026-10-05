/* Address: 0x1400eaa00 | Name: player_load_profile_config_candidate | Size: 6661 bytes */
// Candidate startup config/profile loader: reads config.txt and player appearance/settings keys.
__int64 __fastcall player_load_profile_config_candidate(unsigned int a1)
{
  unsigned int v2; // eax
  __int16 v3; // ax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // r10d
  __int64 v7; // rbx
  int i; // ecx
  __int64 v9; // r8
  int v10; // edx
  char v11; // r9
  int v12; // eax
  int v13; // r10d
  __int64 v14; // r8
  int v15; // edx
  char v16; // r9
  int v17; // eax
  int v18; // r10d
  __int64 v19; // r8
  int v20; // edx
  char v21; // r9
  int v22; // eax
  int v23; // r10d
  __int64 v24; // r8
  int v25; // edx
  char v26; // r9
  int v27; // eax
  int v28; // r10d
  __int64 v29; // r8
  int v30; // edx
  char v31; // r9
  int v32; // eax
  int v33; // r10d
  __int64 v34; // r8
  int v35; // edx
  char v36; // r9
  int v37; // eax
  int v38; // r10d
  __int64 v39; // r8
  int v40; // edx
  char v41; // r9
  int v42; // eax
  int v43; // r10d
  __int64 v44; // r8
  int v45; // edx
  char v46; // r9
  int v47; // eax
  int v48; // r10d
  __int64 v49; // r8
  int v50; // edx
  char v51; // r9
  int v52; // eax
  int v53; // r10d
  __int64 v54; // r8
  int v55; // edx
  char v56; // r9
  int v57; // eax
  int v58; // r10d
  __int64 v59; // r8
  int v60; // edx
  char v61; // r9
  int v62; // eax
  int v63; // r10d
  __int64 v64; // r8
  int v65; // edx
  char v66; // r9
  __int64 v67; // rax
  int v68; // eax
  int v69; // r10d
  int j; // ecx
  __int64 v71; // r8
  int v72; // edx
  char v73; // r9
  int v74; // eax
  int v75; // r10d
  __int64 v76; // r8
  int v77; // edx
  char v78; // r9
  int v79; // eax
  int v80; // r10d
  __int64 v81; // r8
  int v82; // edx
  char v83; // r9
  int v84; // eax
  int v85; // r10d
  __int64 v86; // r8
  int v87; // edx
  char v88; // r9
  int v89; // eax
  int v90; // r10d
  __int64 v91; // r8
  int v92; // edx
  char v93; // r9
  int v94; // eax
  int v95; // r10d
  __int64 v96; // r8
  int v97; // edx
  char v98; // r9
  int v99; // r10d
  __int64 v100; // r8
  int v101; // edx
  char v102; // r9
  int v103; // eax
  int v104; // r10d
  __int64 v105; // r8
  int v106; // edx
  char v107; // r9
  int v108; // eax
  int v109; // r10d
  __int64 v110; // r8
  int v111; // edx
  char v112; // r9
  int v113; // eax
  int v114; // r10d
  __int64 v115; // r8
  int v116; // edx
  char v117; // r9
  int v118; // eax
  int v119; // r10d
  __int64 v120; // r8
  int v121; // edx
  char v122; // r9
  int v123; // eax
  int v124; // r10d
  __int64 v125; // r8
  int v126; // edx
  char v127; // r9
  int v128; // eax
  int v129; // r10d
  __int64 v130; // r8
  int v131; // edx
  char v132; // r9
  int v133; // eax
  int v134; // r10d
  __int64 v135; // r8
  int v136; // edx
  char v137; // r9
  int v138; // eax
  int v139; // r10d
  __int64 v140; // r8
  int v141; // edx
  char v142; // r9
  int v143; // eax
  int v144; // r10d
  __int64 v145; // r8
  int v146; // edx
  char v147; // r9
  int v148; // eax
  int v149; // r10d
  __int64 v150; // r8
  int v151; // edx
  char v152; // r9
  int v153; // eax
  int v154; // r10d
  __int64 v155; // r8
  int v156; // edx
  char v157; // r9
  int v158; // eax
  int v159; // r10d
  __int64 v160; // r8
  int v161; // edx
  char v162; // r9
  int v163; // eax
  int v164; // r10d
  __int64 v165; // r8
  int v166; // edx
  char v167; // r9
  int v168; // eax
  int v169; // r10d
  __int64 v170; // r8
  int v171; // edx
  char v172; // r9
  int v173; // eax
  int v174; // r10d
  __int64 v175; // r8
  int v176; // edx
  char v177; // r9
  int v178; // eax
  int v179; // r10d
  __int64 v180; // r8
  int v181; // edx
  char v182; // r9
  int v183; // eax
  int v184; // r10d
  __int64 v185; // r8
  int v186; // edx
  char v187; // r9
  float v188; // xmm0_4
  int v189; // xmm0_4

  sub_14024C22C(MEMORY[0x182A7D340]);
  if ( a1 )
  {
    DWORD2(MEMORY[0x182A7D000]) = MEMORY[0x18329B1C4];
    HIDWORD(MEMORY[0x182A7D000]) = MEMORY[0x18329B1BC];
    LODWORD(MEMORY[0x182A7D010]) = MEMORY[0x18329B1C0];
    DWORD1(MEMORY[0x182A7D010]) = MEMORY[0x160FC4804];
    v67 = MEMORY[0x14020B8D8]("config.txt", "wb");
    v7 = v67;
    if ( !v67 )
      return sub_14024C22C(&MEMORY[0x182A7D140]);
    sub_1400920F0(v67, "%s%d\r\n", "screenwidth=", (_DWORD)MEMORY[0x182A7D000]);
    sub_1400920F0(v7, "%s%d\r\n", "screenheight=", DWORD1(MEMORY[0x182A7D000]));
    sub_1400920F0(v7, "%s%d\r\n", "colordepth=", DWORD2(MEMORY[0x182A7D000]));
    sub_1400920F0(v7, "%s%d\r\n", "depthbits=", HIDWORD(MEMORY[0x182A7D000]));
    sub_1400920F0(v7, "%s%d\r\n", "stencilbits=", (_DWORD)MEMORY[0x182A7D010]);
    sub_1400920F0(v7, "%s%d\r\n", "fullscreen=", DWORD1(MEMORY[0x182A7D010]));
    sub_1400920F0(v7, "%s%d\r\n", "joystick=", MEMORY[0x182A7D020]);
    sub_1400920F0(v7, "%s%d\r\n", "sound=", DWORD2(MEMORY[0x182A7D010]));
    sub_1400920F0(v7, "%s%d\r\n", "soundvolume=", MEMORY[0x151E4615C]);
    sub_1400920F0(v7, "%s%d\r\n", "musicvolume=", MEMORY[0x151E46160]);
    sub_1400920F0(v7, "%s%d\r\n", "port=", MEMORY[0x151E45940]);
    sub_1400920F0(v7, "%s%d\r\n", "servermaxbytespersecond=", MEMORY[0x151E45944]);
  }
  else
  {
    MEMORY[0x182A7D000] = (__int128)_mm_load_si128((const __m128i *)&xmmword_140279080);
    MEMORY[0x182A7D020] = 1;
    MEMORY[0x182A7D010] = (__int128)_mm_load_si128((const __m128i *)&xmmword_140278ED0);
    MEMORY[0x151E45940] = 27584;
    MEMORY[0x151E45944] = 500000;
    MEMORY[0x151E4615C] = 80;
    MEMORY[0x151E46160] = 80;
    MEMORY[0x151E461B0] = 10;
    MEMORY[0x151E461A8] = 16;
    MEMORY[0x151E4619C] = 100;
    v2 = sub_140237448(0);
    srand(v2);
    v3 = rand();
    sub_140158AB0(&MEMORY[0x151E4594C], "Agent %d", v3 & 0x1FF);
    MEMORY[0x151E461AC] = 3;
    MEMORY[0x151E45B4C] = xmmword_140276AC8;
    v4 = sub_140237448(0);
    srand(v4);
    v5 = rand();
    sub_140158AB0(&MEMORY[0x151E45D4C], "%d", v5);
    MEMORY[0x151E461BC] = (__int128)_mm_load_si128((const __m128i *)&xmmword_140279090);
    MEMORY[0x151E45F4C] = 0;
    MEMORY[0x151E45948] = 1;
    MEMORY[0x151E46154] = 2;
    MEMORY[0x151E46158] = 2;
    MEMORY[0x151E461DC] = 100;
    MEMORY[0x151E461D0] = 1;
    MEMORY[0x151E461B8] = 1;
    MEMORY[0x151E46190] = 1;
    MEMORY[0x151E46194] = 1;
    MEMORY[0x151E461D8] = 1;
    MEMORY[0x151E461B4] = 1;
    MEMORY[0x151E461E8] = rand() % 2;
    MEMORY[0x151E461EC] = rand() % 5;
    MEMORY[0x151E461F0] = rand() % 6;
    MEMORY[0x151E461F4] = rand() % 12;
    MEMORY[0x151E461F8] = rand() % 9;
    MEMORY[0x151E461FC] = rand() % 8;
    MEMORY[0x151E46200] = 0;
    MEMORY[0x151E46204] = 1;
    MEMORY[0x151E46208] = 1;
    MEMORY[0x18329DEE0] = 20;
    MEMORY[0x18329DEE8] = 53;
    MEMORY[0x18329DEE4] = 225;
    sub_1400ED940("config.txt");
    v6 = MEMORY[0x1862AE020];
    v7 = 0;
    for ( i = MEMORY[0x1862AE024]; v6 < MEMORY[0x1862AE024]; MEMORY[0x1862AE020] = ++v6 )
    {
      v9 = 0;
      if ( v6 < MEMORY[0x1862AE024] )
      {
        v10 = v6;
        do
        {
          v11 = MEMORY[0x140276AE8][v9];
          if ( !v11 )
            break;
          if ( v11 != *((_BYTE *)&MEMORY[0x1862AE020] + v10 + 8) )
            break;
          ++v10;
          ++v9;
        }
        while ( v10 < MEMORY[0x1862AE024] );
      }
      if ( !MEMORY[0x140276AE8][v9] )
        break;
    }
    MEMORY[0x1862AE020] = v6 + 12;
    if ( v6 + 12 < MEMORY[0x1862AE024] )
    {
      v12 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      LODWORD(MEMORY[0x182A7D000]) = v12;
    }
    v13 = 0;
    for ( MEMORY[0x1862AE020] = 0; v13 < i; MEMORY[0x1862AE020] = ++v13 )
    {
      v14 = 0;
      if ( v13 < i )
      {
        v15 = v13;
        do
        {
          v16 = MEMORY[0x140276AF8][v14];
          if ( !v16 )
            break;
          if ( v16 != *((_BYTE *)&MEMORY[0x1862AE020] + v15 + 8) )
            break;
          ++v15;
          ++v14;
        }
        while ( v15 < i );
      }
      if ( !MEMORY[0x140276AF8][v14] )
        break;
    }
    MEMORY[0x1862AE020] = v13 + 13;
    if ( v13 + 13 < i )
    {
      v17 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      DWORD1(MEMORY[0x182A7D000]) = v17;
    }
    v18 = 0;
    for ( MEMORY[0x1862AE020] = 0; v18 < i; MEMORY[0x1862AE020] = ++v18 )
    {
      v19 = 0;
      if ( v18 < i )
      {
        v20 = v18;
        do
        {
          v21 = MEMORY[0x140276B08][v19];
          if ( !v21 )
            break;
          if ( v21 != *((_BYTE *)&MEMORY[0x1862AE020] + v20 + 8) )
            break;
          ++v20;
          ++v19;
        }
        while ( v20 < i );
      }
      if ( !MEMORY[0x140276B08][v19] )
        break;
    }
    MEMORY[0x1862AE020] = v18 + 11;
    if ( v18 + 11 < i )
    {
      v22 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      DWORD2(MEMORY[0x182A7D000]) = v22;
    }
    v23 = 0;
    for ( MEMORY[0x1862AE020] = 0; v23 < i; MEMORY[0x1862AE020] = ++v23 )
    {
      v24 = 0;
      if ( v23 < i )
      {
        v25 = v23;
        do
        {
          v26 = MEMORY[0x140276B18][v24];
          if ( !v26 )
            break;
          if ( v26 != *((_BYTE *)&MEMORY[0x1862AE020] + v25 + 8) )
            break;
          ++v25;
          ++v24;
        }
        while ( v25 < i );
      }
      if ( !MEMORY[0x140276B18][v24] )
        break;
    }
    MEMORY[0x1862AE020] = v23 + 10;
    if ( v23 + 10 < i )
    {
      v27 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      HIDWORD(MEMORY[0x182A7D000]) = v27;
    }
    v28 = 0;
    for ( MEMORY[0x1862AE020] = 0; v28 < i; MEMORY[0x1862AE020] = ++v28 )
    {
      v29 = 0;
      if ( v28 < i )
      {
        v30 = v28;
        do
        {
          v31 = MEMORY[0x140276B28][v29];
          if ( !v31 )
            break;
          if ( v31 != *((_BYTE *)&MEMORY[0x1862AE020] + v30 + 8) )
            break;
          ++v30;
          ++v29;
        }
        while ( v30 < i );
      }
      if ( !MEMORY[0x140276B28][v29] )
        break;
    }
    MEMORY[0x1862AE020] = v28 + 12;
    if ( v28 + 12 < i )
    {
      v32 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      LODWORD(MEMORY[0x182A7D010]) = v32;
    }
    v33 = 0;
    for ( MEMORY[0x1862AE020] = 0; v33 < i; MEMORY[0x1862AE020] = ++v33 )
    {
      v34 = 0;
      if ( v33 < i )
      {
        v35 = v33;
        do
        {
          v36 = MEMORY[0x140276B38][v34];
          if ( !v36 )
            break;
          if ( v36 != *((_BYTE *)&MEMORY[0x1862AE020] + v35 + 8) )
            break;
          ++v35;
          ++v34;
        }
        while ( v35 < i );
      }
      if ( !MEMORY[0x140276B38][v34] )
        break;
    }
    MEMORY[0x1862AE020] = v33 + 11;
    if ( v33 + 11 < i )
    {
      v37 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      DWORD1(MEMORY[0x182A7D010]) = v37;
    }
    v38 = 0;
    for ( MEMORY[0x1862AE020] = 0; v38 < i; MEMORY[0x1862AE020] = ++v38 )
    {
      v39 = 0;
      if ( v38 < i )
      {
        v40 = v38;
        do
        {
          v41 = MEMORY[0x140276B48][v39];
          if ( !v41 )
            break;
          if ( v41 != *((_BYTE *)&MEMORY[0x1862AE020] + v40 + 8) )
            break;
          ++v40;
          ++v39;
        }
        while ( v40 < i );
      }
      if ( !MEMORY[0x140276B48][v39] )
        break;
    }
    MEMORY[0x1862AE020] = v38 + 9;
    if ( v38 + 9 < i )
    {
      v42 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      MEMORY[0x182A7D020] = v42;
    }
    v43 = 0;
    for ( MEMORY[0x1862AE020] = 0; v43 < i; MEMORY[0x1862AE020] = ++v43 )
    {
      v44 = 0;
      if ( v43 < i )
      {
        v45 = v43;
        do
        {
          v46 = MEMORY[0x140276B54][v44];
          if ( !v46 )
            break;
          if ( v46 != *((_BYTE *)&MEMORY[0x1862AE020] + v45 + 8) )
            break;
          ++v45;
          ++v44;
        }
        while ( v45 < i );
      }
      if ( !MEMORY[0x140276B54][v44] )
        break;
    }
    MEMORY[0x1862AE020] = v43 + 6;
    if ( v43 + 6 < i )
    {
      v47 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      DWORD2(MEMORY[0x182A7D010]) = v47;
    }
    v48 = 0;
    for ( MEMORY[0x1862AE020] = 0; v48 < i; MEMORY[0x1862AE020] = ++v48 )
    {
      v49 = 0;
      if ( v48 < i )
      {
        v50 = v48;
        do
        {
          v51 = MEMORY[0x140276B60][v49];
          if ( !v51 )
            break;
          if ( v51 != *((_BYTE *)&MEMORY[0x1862AE020] + v50 + 8) )
            break;
          ++v50;
          ++v49;
        }
        while ( v50 < i );
      }
      if ( !MEMORY[0x140276B60][v49] )
        break;
    }
    MEMORY[0x1862AE020] = v48 + 12;
    if ( v48 + 12 < i )
    {
      v52 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      MEMORY[0x151E4615C] = v52;
    }
    v53 = 0;
    for ( MEMORY[0x1862AE020] = 0; v53 < i; MEMORY[0x1862AE020] = ++v53 )
    {
      v54 = 0;
      if ( v53 < i )
      {
        v55 = v53;
        do
        {
          v56 = MEMORY[0x140276B70][v54];
          if ( !v56 )
            break;
          if ( v56 != *((_BYTE *)&MEMORY[0x1862AE020] + v55 + 8) )
            break;
          ++v55;
          ++v54;
        }
        while ( v55 < i );
      }
      if ( !MEMORY[0x140276B70][v54] )
        break;
    }
    MEMORY[0x1862AE020] = v53 + 12;
    if ( v53 + 12 < i )
    {
      v57 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      MEMORY[0x151E46160] = v57;
    }
    v58 = 0;
    for ( MEMORY[0x1862AE020] = 0; v58 < i; MEMORY[0x1862AE020] = ++v58 )
    {
      v59 = 0;
      if ( v58 < i )
      {
        v60 = v58;
        do
        {
          v61 = MEMORY[0x140276B80][v59];
          if ( !v61 )
            break;
          if ( v61 != *((_BYTE *)&MEMORY[0x1862AE020] + v60 + 8) )
            break;
          ++v60;
          ++v59;
        }
        while ( v60 < i );
      }
      if ( !MEMORY[0x140276B80][v59] )
        break;
    }
    MEMORY[0x1862AE020] = v58 + 5;
    if ( v58 + 5 < i )
    {
      v62 = sub_1400A3D70();
      i = MEMORY[0x1862AE024];
      MEMORY[0x151E45940] = v62;
    }
    v63 = 0;
    for ( MEMORY[0x1862AE020] = 0; v63 < i; MEMORY[0x1862AE020] = ++v63 )
    {
      v64 = 0;
      if ( v63 < i )
      {
        v65 = v63;
        do
        {
          v66 = MEMORY[0x140276B88][v64];
          if ( !v66 )
            break;
          if ( v66 != *((_BYTE *)&MEMORY[0x1862AE020] + v65 + 8) )
            break;
          ++v65;
          ++v64;
        }
        while ( v65 < i );
      }
      if ( !MEMORY[0x140276B88][v64] )
        break;
    }
    MEMORY[0x1862AE020] = v63 + 24;
    if ( v63 + 24 < i )
      MEMORY[0x151E45944] = sub_1400A3D70();
    MEMORY[0x1862AE020] = 0;
  }
  sub_14010E0D0((unsigned int)&MEMORY[0x151E4594C], (unsigned int)"name=", 30, v7, a1);
  sub_14010E0D0((unsigned int)&MEMORY[0x151E45B4C], (unsigned int)"servername=", 50, v7, a1);
  sub_14010E0D0((unsigned int)&MEMORY[0x151E45D4C], (unsigned int)"adminpassword=", 50, v7, a1);
  sub_14010E0D0((unsigned int)&MEMORY[0x151E45F4C], (unsigned int)"serverpassword=", 50, v7, a1);
  v68 = MEMORY[0x1AD04B1F0];
  if ( MEMORY[0x151E45F4C] )
    v68 = 1;
  MEMORY[0x1AD04B1F0] = v68;
  if ( a1 )
  {
    sub_1400920F0(v7, "%s%d\r\n", "gametype=", MEMORY[0x151E461AC]);
    sub_1400920F0(v7, "%s%d\r\n", "invertmouse=", MEMORY[0x151E46198]);
    sub_1400920F0(v7, "%s%d\r\n", "maxnumofplayers=", MEMORY[0x151E461A8]);
    sub_1400920F0(v7, "%s%d\r\n", "roundtime=", MEMORY[0x151E461B0]);
    sub_1400920F0(v7, "%s%d\r\n", "setcpuaffinity=", MEMORY[0x151E461B4]);
    sub_1400920F0(v7, "%s%d\r\n", "voicechat=", DWORD1(MEMORY[0x151E461BC]));
    DWORD1(MEMORY[0x151E461BC]) = 1;
    sub_1400920F0(v7, "%s%d\r\n", "voiceholdtotalk=", DWORD2(MEMORY[0x151E461BC]));
    sub_1400920F0(v7, "%s%d\r\n", "voicekey=", HIDWORD(MEMORY[0x151E461BC]));
    sub_1400920F0(v7, "%s%d\r\n", "voicemb=", MEMORY[0x151E461CC]);
    sub_1400920F0(v7, "%s%d\r\n", "voicemin=", (_DWORD)MEMORY[0x151E461BC]);
    sub_1400920F0(v7, "%s%d\r\n", "voiceboost=", MEMORY[0x151E461DC]);
    sub_1400920F0(v7, "%s%d\r\n", "help=", MEMORY[0x151E461D0]);
    sub_1400920F0(v7, "%s%d\r\n", "occlusion=", MEMORY[0x151E461B8]);
    sub_1400920F0(v7, "%s%d\r\n", "verticalsync=", MEMORY[0x151E461D8]);
    sub_1400920F0(v7, "%s%d\r\n", "playergender=", MEMORY[0x151E461E8]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhead=", MEMORY[0x151E461EC]);
    sub_1400920F0(v7, "%s%d\r\n", "playerskincolor=", MEMORY[0x151E461F0]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhaircolor=", MEMORY[0x151E461F4]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhairstyle=", MEMORY[0x151E461F8]);
    sub_1400920F0(v7, "%s%d\r\n", "playereyecolor=", MEMORY[0x151E461FC]);
    sub_1400920F0(v7, "%s%d\r\n", "manualhands=", MEMORY[0x151E46200]);
    sub_1400920F0(v7, "%s%d\r\n", "floatdepthbuffer=", MEMORY[0x151E46190]);
    sub_1400920F0(v7, "%s%d\r\n", "framesmoothing=", MEMORY[0x151E46204]);
    sub_1400920F0(v7, "%s%d\r\n", "spritemodels=", MEMORY[0x151E46208]);
  }
  else
  {
    v69 = MEMORY[0x1862AE020];
    for ( j = MEMORY[0x1862AE024]; v69 < MEMORY[0x1862AE024]; MEMORY[0x1862AE020] = ++v69 )
    {
      v71 = 0;
      if ( v69 < MEMORY[0x1862AE024] )
      {
        v72 = v69;
        do
        {
          v73 = MEMORY[0x140276BE0][v71];
          if ( !v73 )
            break;
          if ( v73 != *((_BYTE *)&MEMORY[0x1862AE020] + v72 + 8) )
            break;
          ++v72;
          ++v71;
        }
        while ( v72 < MEMORY[0x1862AE024] );
      }
      if ( !MEMORY[0x140276BE0][v71] )
        break;
    }
    MEMORY[0x1862AE020] = v69 + 9;
    if ( v69 + 9 < MEMORY[0x1862AE024] )
    {
      v74 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461AC] = v74;
    }
    v75 = 0;
    for ( MEMORY[0x1862AE020] = 0; v75 < j; MEMORY[0x1862AE020] = ++v75 )
    {
      v76 = 0;
      if ( v75 < j )
      {
        v77 = v75;
        do
        {
          v78 = MEMORY[0x140276BF0][v76];
          if ( !v78 )
            break;
          if ( v78 != *((_BYTE *)&MEMORY[0x1862AE020] + v77 + 8) )
            break;
          ++v77;
          ++v76;
        }
        while ( v77 < j );
      }
      if ( !MEMORY[0x140276BF0][v76] )
        break;
    }
    MEMORY[0x1862AE020] = v75 + 12;
    if ( v75 + 12 < j )
    {
      v79 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E46198] = v79;
    }
    v80 = 0;
    for ( MEMORY[0x1862AE020] = 0; v80 < j; MEMORY[0x1862AE020] = ++v80 )
    {
      v81 = 0;
      if ( v80 < j )
      {
        v82 = v80;
        do
        {
          v83 = MEMORY[0x140276C00][v81];
          if ( !v83 )
            break;
          if ( v83 != *((_BYTE *)&MEMORY[0x1862AE020] + v82 + 8) )
            break;
          ++v82;
          ++v81;
        }
        while ( v82 < j );
      }
      if ( !MEMORY[0x140276C00][v81] )
        break;
    }
    MEMORY[0x1862AE020] = v80 + 16;
    if ( v80 + 16 < j )
    {
      v84 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461A8] = v84;
    }
    v85 = 0;
    for ( MEMORY[0x1862AE020] = 0; v85 < j; MEMORY[0x1862AE020] = ++v85 )
    {
      v86 = 0;
      if ( v85 < j )
      {
        v87 = v85;
        do
        {
          v88 = MEMORY[0x140276C18][v86];
          if ( !v88 )
            break;
          if ( v88 != *((_BYTE *)&MEMORY[0x1862AE020] + v87 + 8) )
            break;
          ++v87;
          ++v86;
        }
        while ( v87 < j );
      }
      if ( !MEMORY[0x140276C18][v86] )
        break;
    }
    MEMORY[0x1862AE020] = v85 + 10;
    if ( v85 + 10 < j )
    {
      v89 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461B0] = v89;
    }
    v90 = 0;
    for ( MEMORY[0x1862AE020] = 0; v90 < j; MEMORY[0x1862AE020] = ++v90 )
    {
      v91 = 0;
      if ( v90 < j )
      {
        v92 = v90;
        do
        {
          v93 = MEMORY[0x140276C28][v91];
          if ( !v93 )
            break;
          if ( v93 != *((_BYTE *)&MEMORY[0x1862AE020] + v92 + 8) )
            break;
          ++v92;
          ++v91;
        }
        while ( v92 < j );
      }
      if ( !MEMORY[0x140276C28][v91] )
        break;
    }
    MEMORY[0x1862AE020] = v90 + 15;
    if ( v90 + 15 < j )
    {
      v94 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461B4] = v94;
    }
    v95 = 0;
    for ( MEMORY[0x1862AE020] = 0; v95 < j; MEMORY[0x1862AE020] = ++v95 )
    {
      v96 = 0;
      if ( v95 < j )
      {
        v97 = v95;
        do
        {
          v98 = MEMORY[0x140276C38][v96];
          if ( !v98 )
            break;
          if ( v98 != *((_BYTE *)&MEMORY[0x1862AE020] + v97 + 8) )
            break;
          ++v97;
          ++v96;
        }
        while ( v97 < j );
      }
      if ( !MEMORY[0x140276C38][v96] )
        break;
    }
    MEMORY[0x1862AE020] = v95 + 10;
    if ( v95 + 10 < j )
    {
      sub_1400A3D70();
      j = MEMORY[0x1862AE024];
    }
    v99 = 0;
    DWORD1(MEMORY[0x151E461BC]) = 1;
    for ( MEMORY[0x1862AE020] = 0; v99 < j; MEMORY[0x1862AE020] = ++v99 )
    {
      v100 = 0;
      if ( v99 < j )
      {
        v101 = v99;
        do
        {
          v102 = MEMORY[0x140276C48][v100];
          if ( !v102 )
            break;
          if ( v102 != *((_BYTE *)&MEMORY[0x1862AE020] + v101 + 8) )
            break;
          ++v101;
          ++v100;
        }
        while ( v101 < j );
      }
      if ( !MEMORY[0x140276C48][v100] )
        break;
    }
    MEMORY[0x1862AE020] = v99 + 16;
    if ( v99 + 16 < j )
    {
      v103 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      DWORD2(MEMORY[0x151E461BC]) = v103;
    }
    v104 = 0;
    for ( MEMORY[0x1862AE020] = 0; v104 < j; MEMORY[0x1862AE020] = ++v104 )
    {
      v105 = 0;
      if ( v104 < j )
      {
        v106 = v104;
        do
        {
          v107 = MEMORY[0x140276C60][v105];
          if ( !v107 )
            break;
          if ( v107 != *((_BYTE *)&MEMORY[0x1862AE020] + v106 + 8) )
            break;
          ++v106;
          ++v105;
        }
        while ( v106 < j );
      }
      if ( !MEMORY[0x140276C60][v105] )
        break;
    }
    MEMORY[0x1862AE020] = v104 + 9;
    if ( v104 + 9 < j )
    {
      v108 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      HIDWORD(MEMORY[0x151E461BC]) = v108;
    }
    v109 = 0;
    for ( MEMORY[0x1862AE020] = 0; v109 < j; MEMORY[0x1862AE020] = ++v109 )
    {
      v110 = 0;
      if ( v109 < j )
      {
        v111 = v109;
        do
        {
          v112 = MEMORY[0x140276C70][v110];
          if ( !v112 )
            break;
          if ( v112 != *((_BYTE *)&MEMORY[0x1862AE020] + v111 + 8) )
            break;
          ++v111;
          ++v110;
        }
        while ( v111 < j );
      }
      if ( !MEMORY[0x140276C70][v110] )
        break;
    }
    MEMORY[0x1862AE020] = v109 + 8;
    if ( v109 + 8 < j )
    {
      v113 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461CC] = v113;
    }
    v114 = 0;
    for ( MEMORY[0x1862AE020] = 0; v114 < j; MEMORY[0x1862AE020] = ++v114 )
    {
      v115 = 0;
      if ( v114 < j )
      {
        v116 = v114;
        do
        {
          v117 = MEMORY[0x140276C80][v115];
          if ( !v117 )
            break;
          if ( v117 != *((_BYTE *)&MEMORY[0x1862AE020] + v116 + 8) )
            break;
          ++v116;
          ++v115;
        }
        while ( v116 < j );
      }
      if ( !MEMORY[0x140276C80][v115] )
        break;
    }
    MEMORY[0x1862AE020] = v114 + 9;
    if ( v114 + 9 < j )
    {
      v118 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      LODWORD(MEMORY[0x151E461BC]) = v118;
    }
    v119 = 0;
    for ( MEMORY[0x1862AE020] = 0; v119 < j; MEMORY[0x1862AE020] = ++v119 )
    {
      v120 = 0;
      if ( v119 < j )
      {
        v121 = v119;
        do
        {
          v122 = MEMORY[0x140276C90][v120];
          if ( !v122 )
            break;
          if ( v122 != *((_BYTE *)&MEMORY[0x1862AE020] + v121 + 8) )
            break;
          ++v121;
          ++v120;
        }
        while ( v121 < j );
      }
      if ( !MEMORY[0x140276C90][v120] )
        break;
    }
    MEMORY[0x1862AE020] = v119 + 11;
    if ( v119 + 11 < j )
    {
      v123 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461DC] = v123;
    }
    v124 = 0;
    for ( MEMORY[0x1862AE020] = 0; v124 < j; MEMORY[0x1862AE020] = ++v124 )
    {
      v125 = 0;
      if ( v124 < j )
      {
        v126 = v124;
        do
        {
          v127 = MEMORY[0x140276C9C][v125];
          if ( !v127 )
            break;
          if ( v127 != *((_BYTE *)&MEMORY[0x1862AE020] + v126 + 8) )
            break;
          ++v126;
          ++v125;
        }
        while ( v126 < j );
      }
      if ( !MEMORY[0x140276C9C][v125] )
        break;
    }
    MEMORY[0x1862AE020] = v124 + 5;
    if ( v124 + 5 < j )
    {
      v128 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461D0] = v128;
    }
    v129 = 0;
    for ( MEMORY[0x1862AE020] = 0; v129 < j; MEMORY[0x1862AE020] = ++v129 )
    {
      v130 = 0;
      if ( v129 < j )
      {
        v131 = v129;
        do
        {
          v132 = MEMORY[0x140276CA8][v130];
          if ( !v132 )
            break;
          if ( v132 != *((_BYTE *)&MEMORY[0x1862AE020] + v131 + 8) )
            break;
          ++v131;
          ++v130;
        }
        while ( v131 < j );
      }
      if ( !MEMORY[0x140276CA8][v130] )
        break;
    }
    MEMORY[0x1862AE020] = v129 + 10;
    if ( v129 + 10 < j )
    {
      v133 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461B8] = v133;
    }
    v134 = 0;
    for ( MEMORY[0x1862AE020] = 0; v134 < j; MEMORY[0x1862AE020] = ++v134 )
    {
      v135 = 0;
      if ( v134 < j )
      {
        v136 = v134;
        do
        {
          v137 = MEMORY[0x140276CB8][v135];
          if ( !v137 )
            break;
          if ( v137 != *((_BYTE *)&MEMORY[0x1862AE020] + v136 + 8) )
            break;
          ++v136;
          ++v135;
        }
        while ( v136 < j );
      }
      if ( !MEMORY[0x140276CB8][v135] )
        break;
    }
    MEMORY[0x1862AE020] = v134 + 13;
    if ( v134 + 13 < j )
    {
      v138 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461D8] = v138;
    }
    v139 = 0;
    for ( MEMORY[0x1862AE020] = 0; v139 < j; MEMORY[0x1862AE020] = ++v139 )
    {
      v140 = 0;
      if ( v139 < j )
      {
        v141 = v139;
        do
        {
          v142 = MEMORY[0x140276CC8][v140];
          if ( !v142 )
            break;
          if ( v142 != *((_BYTE *)&MEMORY[0x1862AE020] + v141 + 8) )
            break;
          ++v141;
          ++v140;
        }
        while ( v141 < j );
      }
      if ( !MEMORY[0x140276CC8][v140] )
        break;
    }
    MEMORY[0x1862AE020] = v139 + 13;
    if ( v139 + 13 < j )
    {
      v143 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461E8] = v143;
    }
    v144 = 0;
    for ( MEMORY[0x1862AE020] = 0; v144 < j; MEMORY[0x1862AE020] = ++v144 )
    {
      v145 = 0;
      if ( v144 < j )
      {
        v146 = v144;
        do
        {
          v147 = MEMORY[0x140276CD8][v145];
          if ( !v147 )
            break;
          if ( v147 != *((_BYTE *)&MEMORY[0x1862AE020] + v146 + 8) )
            break;
          ++v146;
          ++v145;
        }
        while ( v146 < j );
      }
      if ( !MEMORY[0x140276CD8][v145] )
        break;
    }
    MEMORY[0x1862AE020] = v144 + 11;
    if ( v144 + 11 < j )
    {
      v148 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461EC] = v148;
    }
    v149 = 0;
    for ( MEMORY[0x1862AE020] = 0; v149 < j; MEMORY[0x1862AE020] = ++v149 )
    {
      v150 = 0;
      if ( v149 < j )
      {
        v151 = v149;
        do
        {
          v152 = MEMORY[0x140276CE8][v150];
          if ( !v152 )
            break;
          if ( v152 != *((_BYTE *)&MEMORY[0x1862AE020] + v151 + 8) )
            break;
          ++v151;
          ++v150;
        }
        while ( v151 < j );
      }
      if ( !MEMORY[0x140276CE8][v150] )
        break;
    }
    MEMORY[0x1862AE020] = v149 + 16;
    if ( v149 + 16 < j )
    {
      v153 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461F0] = v153;
    }
    v154 = 0;
    for ( MEMORY[0x1862AE020] = 0; v154 < j; MEMORY[0x1862AE020] = ++v154 )
    {
      v155 = 0;
      if ( v154 < j )
      {
        v156 = v154;
        do
        {
          v157 = MEMORY[0x140276D00][v155];
          if ( !v157 )
            break;
          if ( v157 != *((_BYTE *)&MEMORY[0x1862AE020] + v156 + 8) )
            break;
          ++v156;
          ++v155;
        }
        while ( v156 < j );
      }
      if ( !MEMORY[0x140276D00][v155] )
        break;
    }
    MEMORY[0x1862AE020] = v154 + 16;
    if ( v154 + 16 < j )
    {
      v158 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461F4] = v158;
    }
    v159 = 0;
    for ( MEMORY[0x1862AE020] = 0; v159 < j; MEMORY[0x1862AE020] = ++v159 )
    {
      v160 = 0;
      if ( v159 < j )
      {
        v161 = v159;
        do
        {
          v162 = MEMORY[0x140276D18][v160];
          if ( !v162 )
            break;
          if ( v162 != *((_BYTE *)&MEMORY[0x1862AE020] + v161 + 8) )
            break;
          ++v161;
          ++v160;
        }
        while ( v161 < j );
      }
      if ( !MEMORY[0x140276D18][v160] )
        break;
    }
    MEMORY[0x1862AE020] = v159 + 16;
    if ( v159 + 16 < j )
    {
      v163 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461F8] = v163;
    }
    v164 = 0;
    for ( MEMORY[0x1862AE020] = 0; v164 < j; MEMORY[0x1862AE020] = ++v164 )
    {
      v165 = 0;
      if ( v164 < j )
      {
        v166 = v164;
        do
        {
          v167 = MEMORY[0x140276D30][v165];
          if ( !v167 )
            break;
          if ( v167 != *((_BYTE *)&MEMORY[0x1862AE020] + v166 + 8) )
            break;
          ++v166;
          ++v165;
        }
        while ( v166 < j );
      }
      if ( !MEMORY[0x140276D30][v165] )
        break;
    }
    MEMORY[0x1862AE020] = v164 + 15;
    if ( v164 + 15 < j )
    {
      v168 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E461FC] = v168;
    }
    v169 = 0;
    for ( MEMORY[0x1862AE020] = 0; v169 < j; MEMORY[0x1862AE020] = ++v169 )
    {
      v170 = 0;
      if ( v169 < j )
      {
        v171 = v169;
        do
        {
          v172 = MEMORY[0x140276D40][v170];
          if ( !v172 )
            break;
          if ( v172 != *((_BYTE *)&MEMORY[0x1862AE020] + v171 + 8) )
            break;
          ++v171;
          ++v170;
        }
        while ( v171 < j );
      }
      if ( !MEMORY[0x140276D40][v170] )
        break;
    }
    MEMORY[0x1862AE020] = v169 + 12;
    if ( v169 + 12 < j )
    {
      v173 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E46200] = v173;
    }
    v174 = 0;
    for ( MEMORY[0x1862AE020] = 0; v174 < j; MEMORY[0x1862AE020] = ++v174 )
    {
      v175 = 0;
      if ( v174 < j )
      {
        v176 = v174;
        do
        {
          v177 = MEMORY[0x140276D50][v175];
          if ( !v177 )
            break;
          if ( v177 != *((_BYTE *)&MEMORY[0x1862AE020] + v176 + 8) )
            break;
          ++v176;
          ++v175;
        }
        while ( v176 < j );
      }
      if ( !MEMORY[0x140276D50][v175] )
        break;
    }
    MEMORY[0x1862AE020] = v174 + 17;
    if ( v174 + 17 < j )
    {
      v178 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E46190] = v178;
    }
    v179 = 0;
    for ( MEMORY[0x1862AE020] = 0; v179 < j; MEMORY[0x1862AE020] = ++v179 )
    {
      v180 = 0;
      if ( v179 < j )
      {
        v181 = v179;
        do
        {
          v182 = MEMORY[0x140276D68][v180];
          if ( !v182 )
            break;
          if ( v182 != *((_BYTE *)&MEMORY[0x1862AE020] + v181 + 8) )
            break;
          ++v181;
          ++v180;
        }
        while ( v181 < j );
      }
      if ( !MEMORY[0x140276D68][v180] )
        break;
    }
    MEMORY[0x1862AE020] = v179 + 15;
    if ( v179 + 15 < j )
    {
      v183 = sub_1400A3D70();
      j = MEMORY[0x1862AE024];
      MEMORY[0x151E46204] = v183;
    }
    v184 = 0;
    for ( MEMORY[0x1862AE020] = 0; v184 < j; MEMORY[0x1862AE020] = ++v184 )
    {
      v185 = 0;
      if ( v184 < j )
      {
        v186 = v184;
        do
        {
          v187 = MEMORY[0x140276D78][v185];
          if ( !v187 )
            break;
          if ( v187 != *((_BYTE *)&MEMORY[0x1862AE020] + v186 + 8) )
            break;
          ++v186;
          ++v185;
        }
        while ( v186 < j );
      }
      if ( !MEMORY[0x140276D78][v185] )
        break;
    }
    MEMORY[0x1862AE020] = v184 + 13;
    if ( v184 + 13 < j )
      MEMORY[0x151E46208] = sub_1400A3D70();
    MEMORY[0x1862AE020] = 0;
  }
  v188 = (float)MEMORY[0x151E461DC] * 0.0099999998;
  MEMORY[0x151E461E0] = LODWORD(v188);
  if ( v188 >= 0.125 )
  {
    if ( v188 > 4.0 )
      MEMORY[0x151E461E0] = 1082130432;
  }
  else
  {
    MEMORY[0x151E461E0] = 1040187392;
  }
  if ( a1 )
  {
    sub_14020B9E8(v7);
  }
  else
  {
    *(float *)&v189 = (float)MEMORY[0x151E4619C] * 0.00001953125;
    MEMORY[0x151E461A0] = v189;
    if ( MEMORY[0x151E46198] )
      *(float *)&v189 = -*(float *)&v189;
    MEMORY[0x151E461A4] = v189;
  }
  sub_1400ECD70(a1);
  sub_1400EC410(a1);
  sub_1400EC7E0(a1);
  return sub_14024C22C(&MEMORY[0x182A7D140]);
}

