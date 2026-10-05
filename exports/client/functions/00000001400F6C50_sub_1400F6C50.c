/* Address: 0x1400f6c50 | Name: sub_1400F6C50 | Size: 5188 bytes */
__int64 sub_1400F6C50()
{
  unsigned int *v0; // rcx
  __int64 v1; // rdx
  unsigned int *v2; // rbx
  int v3; // r11d
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r12d
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  int v13; // ecx
  __int64 v14; // rax
  float v15; // xmm6_4
  float v16; // xmm6_4
  bool v17; // cc
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r13d
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r11d
  bool v28; // zf
  unsigned int *v29; // rsi
  unsigned int *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rbx
  unsigned int *v35; // rax
  const char **v36; // r13
  __int64 v37; // rax
  __int64 v38; // r12
  unsigned int v39; // eax
  unsigned int v40; // esi
  __int64 v41; // rdi
  int v42; // esi
  __int64 v43; // rdi
  int v44; // r8d
  int v45; // ecx
  __int64 v46; // rdx
  unsigned int *v47; // rax
  unsigned int v48; // r12d
  signed int v49; // eax
  __int64 v50; // rdx
  int v51; // r8d
  int v52; // ecx
  __int64 v53; // rdx
  unsigned int *v54; // rax
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm8_4
  float v58; // xmm9_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned int v63; // eax
  __int64 v64; // rdx
  int v65; // r8d
  int j; // r10d
  unsigned int *v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // esi
  unsigned int *v71; // r12
  int v72; // ebx
  _DWORD *v73; // rdi
  __int64 v74; // rax
  int v75; // r11d
  signed int v76; // r8d
  unsigned int *v77; // rcx
  __int64 v78; // rdx
  int v79; // eax
  unsigned int *v80; // rsi
  int v81; // r9d
  __int64 v82; // rdi
  unsigned int *v83; // rbx
  int v84; // ecx
  __int64 v85; // rdx
  unsigned int v86; // eax
  float v87; // xmm0_4
  BOOL v88; // eax
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm0_4
  int v92; // r10d
  float *v93; // rdx
  int v94; // r9d
  unsigned int *v95; // rcx
  __int64 v96; // rax
  float v97; // xmm0_4
  float v98; // xmm0_4
  unsigned int v99; // r8d
  unsigned int v100; // edx
  unsigned int *v101; // rax
  __int64 v102; // rax
  unsigned int *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // edx
  float *i; // rcx
  int v108; // eax
  float v109; // xmm1_4
  float *v110; // rax
  float v111; // xmm0_4
  float v112; // xmm0_4
  unsigned int *v113; // rbx
  signed int v114; // eax
  unsigned int *v115; // rax
  int v116; // r15d
  unsigned int *v117; // rcx
  unsigned int v118; // esi
  unsigned int *v119; // r13
  int v120; // edi
  float *v121; // r12
  __int64 v122; // rbx
  __int64 v123; // r10
  int v124; // r11d
  int v125; // r9d
  __int64 v126; // r8
  unsigned int *v127; // rdx
  __int64 v128; // rax
  int v129; // eax
  float v130; // xmm1_4
  __int64 v131; // rax
  int v132; // eax
  float v133; // xmm1_4
  __int64 v134; // rax
  int v135; // eax
  float v136; // xmm1_4
  __int64 v137; // rax
  int v138; // eax
  float v139; // xmm1_4
  unsigned int *v140; // rbx
  __int64 v142; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v143; // [rsp+20h] [rbp-E0h]
  int v144; // [rsp+28h] [rbp-D8h]
  float v145; // [rsp+30h] [rbp-D0h] BYREF
  float v146; // [rsp+34h] [rbp-CCh]
  float v147; // [rsp+38h] [rbp-C8h]
  __int64 v148; // [rsp+40h] [rbp-C0h]
  unsigned int *v149; // [rsp+48h] [rbp-B8h]
  __int128 v150; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v151; // [rsp+60h] [rbp-A0h]
  float v152; // [rsp+70h] [rbp-90h]
  int v153; // [rsp+78h] [rbp-88h]
  _DWORD v154[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v155; // [rsp+E0h] [rbp-20h]
  __int64 v156; // [rsp+280h] [rbp+180h]

  v0 = &dword_140404A6C[71856287];
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && (int)*v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  if ( dword_140404A6C[283831448] != 1 )
  {
    if ( dword_140404A6C[283831448] == 2 )
    {
      v76 = dword_140404A6C[283831451] + 1;
      v75 = --dword_140404A6C[283831450];
      ++dword_140404A6C[283831451];
      if ( dword_140404A6C[283831450] == 3600 * ((signed int)dword_140404A6C[283831450] / 3600) )
      {
        v77 = &dword_140404A6C[71856280];
        v78 = 256;
        do
        {
          v79 = *v77;
          *(v77 - 1) = 0;
          if ( v79 > 0 )
            *v77 = v79 - 1;
          v77[1] = 0;
          v77 += 3597;
          --v78;
        }
        while ( v78 );
      }
      v80 = &dword_140404A6C[71856286];
      v81 = 1;
      v82 = 1024;
      if ( v76 >= 7200 )
      {
        v83 = &dword_140404A6C[278845893];
        v84 = 1;
        v85 = 1024;
        do
        {
          if ( *v83 )
          {
            v86 = v83[5];
            if ( v86 == 17 || v86 - 19 <= 5 )
            {
              v87 = *((float *)v83 + 23);
              v88 = 0;
              if ( v87 >= *(float *)&dword_140404A6C[283831485] && v87 < *(float *)&dword_140404A6C[283831488] )
              {
                v89 = *((float *)v83 + 25);
                if ( v89 >= *(float *)&dword_140404A6C[283831487] )
                  v88 = *(float *)&dword_140404A6C[283831490] > v89;
              }
              if ( v87 >= *(float *)&dword_140404A6C[283837358] && v87 < *(float *)&dword_140404A6C[283837361] )
              {
                v90 = *((float *)v83 + 25);
                if ( v90 >= *(float *)&dword_140404A6C[283837360] && *(float *)&dword_140404A6C[283837363] > v90 )
                  v88 = 1;
              }
              if ( v87 < *(float *)&dword_140404A6C[283843231]
                || v87 >= *(float *)&dword_140404A6C[283843234]
                || (v91 = *((float *)v83 + 25), v91 < *(float *)&dword_140404A6C[283843233])
                || v91 >= *(float *)&dword_140404A6C[283843236] )
              {
                if ( !v88 )
                  v84 = 0;
              }
            }
          }
          v83 += 1760;
          --v85;
        }
        while ( v85 );
        if ( !v84 )
        {
          v92 = 0;
          v93 = (float *)&dword_140404A6C[283831488];
          do
          {
            v94 = 0;
            v95 = &dword_140404A6C[71856286];
            do
            {
              if ( *(v95 - 33) )
              {
                if ( *v95 == v92 )
                {
                  v96 = (int)v95[6];
                  if ( (_DWORD)v96 != -1 )
                  {
                    v97 = *(float *)&dword_140404A6C[7166 * v96 + 280651335];
                    if ( v97 < *(v93 - 3) )
                      goto LABEL_155;
                    if ( v97 >= *v93 )
                      goto LABEL_155;
                    v98 = *(float *)&dword_140404A6C[7166 * v96 + 280651337];
                    if ( v98 < *(v93 - 1) || v98 >= v93[2] )
                      goto LABEL_155;
                  }
                }
              }
              ++v94;
              v95 += 3597;
            }
            while ( v94 < 256 );
            ++v92;
            v93 += 5873;
          }
          while ( (__int64)v93 < (__int64)&dword_140404A6C[283849107] );
          v75 -= 9;
          dword_140404A6C[283831450] = v75;
LABEL_155:
          v81 = 1;
        }
      }
      v99 = dword_140404A6C[283831474];
      v100 = dword_140404A6C[456202453];
      if ( !dword_140404A6C[283831509] )
      {
        v101 = &dword_140404A6C[71856286];
        do
        {
          if ( *(v101 - 33) && !*v101 && v101[6] != -1 )
            goto LABEL_165;
          v101 += 3597;
        }
        while ( (__int64)v101 < (__int64)&dword_140404A6C[72777118] );
        if ( dword_140404A6C[456202453] )
        {
          v102 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v102) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v102) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v102) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v102) = 1;
        }
        dword_140404A6C[283831509] = 1;
      }
LABEL_165:
      if ( !dword_140404A6C[283837382] )
      {
        v103 = &dword_140404A6C[71856286];
        do
        {
          if ( *(v103 - 33) && *v103 == 1 && v103[6] != -1 )
            goto LABEL_174;
          v103 += 3597;
        }
        while ( (__int64)v103 < (__int64)&dword_140404A6C[72777118] );
        if ( v100 )
        {
          v104 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v104) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v104) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v104) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v104) = 1;
        }
        dword_140404A6C[283837382] = 1;
      }
LABEL_174:
      if ( !dword_140404A6C[283843255] )
      {
        do
        {
          if ( *(v80 - 33) && *v80 == 2 && v80[6] != -1 )
            goto LABEL_182;
          v80 += 3597;
        }
        while ( (__int64)v80 < (__int64)&dword_140404A6C[72777118] );
        if ( v100 )
        {
          v105 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v105) = 10;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v105) = v99;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v105) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v105) = 1;
        }
        dword_140404A6C[283843255] = 1;
      }
LABEL_182:
      v106 = 1;
      for ( i = (float *)&dword_140404A6C[278845916]; ; i += 1760 )
      {
        if ( *((_DWORD *)i - 23) )
        {
          v108 = *((_DWORD *)i - 18);
          if ( v108 == 17 || (unsigned int)(v108 - 19) <= 5 )
          {
            v109 = *i;
            v110 = (float *)&dword_140404A6C[283831494];
            do
            {
              if ( v109 >= *(v110 - 3) && v109 < *v110 )
              {
                v111 = i[1];
                if ( v111 >= *(v110 - 2) && v111 < v110[1] )
                {
                  v112 = i[2];
                  if ( v112 >= *(v110 - 1) && v112 < v110[2] )
                    goto LABEL_195;
                }
              }
              v110 += 5873;
            }
            while ( (__int64)v110 < (__int64)&dword_140404A6C[283849113] );
            v106 = 0;
          }
        }
LABEL_195:
        if ( !--v82 )
        {
          if ( v106 )
          {
            if ( v75 > 60 )
              v75 = 60;
            dword_140404A6C[283831450] = v75;
          }
          v113 = &dword_140404A6C[71859139];
          do
          {
            if ( *(v113 - 2886) && !*v113 && *(v113 - 2847) != -1 )
              v81 = 0;
            v113 += 3597;
          }
          while ( (__int64)v113 < (__int64)&dword_140404A6C[72779971] );
          if ( v81 && v75 > 60 )
          {
            dword_140404A6C[283831450] = 60;
          }
          else if ( v75 <= 0 )
          {
            sub_1400F3E60();
            dword_140404A6C[283831448] = 3;
            dword_140404A6C[283831450] = dword_140404A6C[283831473];
          }
          return MEMORY[0x1401F8B20]((unsigned __int64)&v142 ^ v156);
        }
      }
    }
    if ( dword_140404A6C[283831448] != 3 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v142 ^ v156);
    v114 = dword_140404A6C[283831450] - 1;
    dword_140404A6C[283831450] = v114;
    if ( v114 == 1250 )
    {
      sub_1400F0160(-1);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 1200 )
    {
      sub_1400F0160(0);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 1080 )
    {
      sub_1400F0160(1);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 960 )
    {
      sub_1400F0160(2);
      v114 = dword_140404A6C[283831450];
    }
    v148 = 3;
    if ( v114 == 840 )
    {
      sub_1400F0160(3);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 720 )
    {
      sub_1400F0160(4);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 600 )
    {
      sub_1400F0160(5);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 480 )
    {
      sub_1400F0160(6);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 360 )
    {
      sub_1400F0160(7);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 240 )
    {
      sub_1400F0160(8);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 == 120 )
    {
      sub_1400F0160(9);
      v114 = dword_140404A6C[283831450];
    }
    if ( v114 > 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v142 ^ v156);
    v115 = &dword_140404A6C[71856289];
    v116 = 0;
    v117 = &dword_140404A6C[72777121];
    do
    {
      if ( *(v115 - 36) )
        *v115 = 0;
      if ( v115[3561] )
        v115[3597] = 0;
      v115 += 7194;
    }
    while ( (__int64)v115 < (__int64)&dword_140404A6C[72777121] );
    v118 = dword_140404A6C[283831441];
    v119 = &dword_140404A6C[283831510];
    v120 = 0;
    v121 = (float *)&dword_140404A6C[335047062];
LABEL_242:
    v122 = -1;
    v123 = 2;
    v124 = -1;
    v125 = 2;
    v126 = 0;
    v127 = &dword_140404A6C[71856286];
    while ( 1 )
    {
      if ( *(v127 - 33) && *v127 == v120 )
      {
        if ( v118 == 1 )
        {
          v128 = (int)*(v127 - 18);
          if ( (_DWORD)v128 != -1 )
          {
            LODWORD(v117) = 112 * v128;
            v129 = dword_140404A6C[28 * v128 + 134050374];
            if ( (int)v126 < v129 )
            {
              v126 = (unsigned int)v129;
LABEL_251:
              v122 = v123 - 2;
              v124 = v125 - 2;
            }
          }
        }
        else
        {
          v130 = (float)((float)(int)v127[2] * *v121) + (float)(int)*(v127 - 14);
          if ( (float)(int)v126 < v130 )
          {
            v126 = (unsigned int)(int)v130;
            goto LABEL_251;
          }
        }
      }
      if ( v127[3564] && v127[3597] == v120 )
      {
        if ( v118 == 1 )
        {
          v131 = (int)v127[3579];
          if ( (_DWORD)v131 != -1 )
          {
            LODWORD(v117) = 112 * v131;
            v132 = dword_140404A6C[28 * v131 + 134050374];
            if ( (int)v126 < v132 )
            {
              v126 = (unsigned int)v132;
LABEL_260:
              v122 = v123 - 1;
              v124 = v125 - 1;
            }
          }
        }
        else
        {
          v133 = (float)((float)(int)v127[3599] * *v121) + (float)(int)v127[3583];
          if ( (float)(int)v126 < v133 )
          {
            v126 = (unsigned int)(int)v133;
            goto LABEL_260;
          }
        }
      }
      if ( v127[7161] && v127[7194] == v120 )
      {
        if ( v118 == 1 )
        {
          v134 = (int)v127[7176];
          if ( (_DWORD)v134 != -1 )
          {
            LODWORD(v117) = 112 * v134;
            v135 = dword_140404A6C[28 * v134 + 134050374];
            if ( (int)v126 < v135 )
            {
              v126 = (unsigned int)v135;
LABEL_269:
              v122 = v123;
              v124 = v125;
            }
          }
        }
        else
        {
          v136 = (float)((float)(int)v127[7196] * *v121) + (float)(int)v127[7180];
          if ( (float)(int)v126 < v136 )
          {
            v126 = (unsigned int)(int)v136;
            goto LABEL_269;
          }
        }
      }
      if ( !v127[10758] || v127[10791] != v120 )
        goto LABEL_279;
      if ( v118 == 1 )
      {
        v137 = (int)v127[10773];
        if ( (_DWORD)v137 == -1 )
          goto LABEL_279;
        LODWORD(v117) = 112 * v137;
        v138 = dword_140404A6C[28 * v137 + 134050374];
        if ( (int)v126 >= v138 )
          goto LABEL_279;
        v126 = (unsigned int)v138;
        goto LABEL_278;
      }
      v139 = (float)((float)(int)v127[10793] * *v121) + (float)(int)v127[10777];
      if ( (float)(int)v126 < v139 )
      {
        v126 = (unsigned int)(int)v139;
LABEL_278:
        v122 = v123 + 1;
        v124 = v125 + 1;
      }
LABEL_279:
      v125 += 4;
      v123 += 4;
      v127 += 14388;
      if ( v125 - 2 >= 256 )
      {
        if ( v124 != -1 )
        {
          v117 = &dword_140404A6C[71856289];
          dword_140404A6C[3597 * v122 + 71856289] = 1;
        }
        if ( *v119 != v124 )
        {
          *v119 = v124;
          v119[5654] = 0;
          v118 = dword_140404A6C[283831441];
        }
        ++v120;
        v121 += 6;
        v119 += 5873;
        if ( !--v148 )
        {
          v140 = &dword_140404A6C[71859139];
          do
          {
            if ( *(v140 - 2886) && !*v140 )
              sub_140117340((unsigned int)v116, v127, v126);
            ++v116;
            v140 += 3597;
          }
          while ( v116 < 256 );
          sub_140127910(
            (_DWORD)v117,
            (_DWORD)v127,
            v126,
            v125,
            v143,
            v144,
            LODWORD(v145),
            LODWORD(v147),
            v148,
            (_DWORD)v149,
            v150,
            DWORD2(v150),
            v151,
            DWORD2(v151),
            LODWORD(v152),
            v153,
            v154[0],
            v154[2],
            v154[4],
            v154[6],
            v154[8],
            v154[10],
            v154[12],
            v154[14],
            v154[16],
            v154[18],
            v154[20],
            v154[22],
            v155);
          return MEMORY[0x1401F8B20]((unsigned __int64)&v142 ^ v156);
        }
        goto LABEL_242;
      }
    }
  }
  v2 = &dword_140404A6C[71859139];
  v3 = dword_140404A6C[283831450];
  v4 = 0;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( *(v2 - 2886) && !*v2 )
    {
      v7 = (int)*(v2 - 2853);
      if ( (unsigned int)v7 <= 2 )
        ++v4;
      v8 = 0;
      if ( *(v2 - 2868) )
        v8 = v6;
      v6 = v8;
      v9 = v8;
      if ( v3 < 5400 && *(v2 - 2847) == -1 && (_DWORD)v7 != -1 && (int)v7 < 3 )
      {
        v10 = *(float *)&dword_140404A6C[5873 * v7 + 283831501];
        v11 = *(float *)&dword_140404A6C[5873 * v7 + 283831502];
        v12 = *(float *)&dword_140404A6C[5873 * v7 + 283831503];
        v145 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
        v13 = (unsigned __int8)rand();
        v14 = (int)*(v2 - 2853);
        v152 = 1.0;
        v146 = v11 - 0.25;
        v15 = *(float *)&dword_140404A6C[5873 * v14 + 283831497];
        v147 = (float)((float)(v13 - 127) * 0.0234375) + v12;
        v16 = v15 + 1.5707964;
        v150 = xmmword_140278D30;
        v151 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v150, (float *)&v150 + 3);
        v17 = (int)v2[683] <= 2;
        v18 = *(v2 - 2853);
        v2[682] = 1;
        if ( v17 )
          v2[683] = v18;
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            v2[684] = 9;
          }
          else if ( v18 == 2 )
          {
            v2[684] = 8;
          }
        }
        else
        {
          v2[684] = 2;
        }
        v19 = sub_140053840(&v145, (float *)&v150, v5);
        *(v2 - 2847) = v19;
        *(v2 - 2797) = 0;
        *(float *)&dword_140404A6C[7166 * v19 + 280651341] = v16;
        sub_140051DC0(v5);
        sub_140117020((unsigned int)v5);
        v3 = dword_140404A6C[283831450];
        v6 = v9;
      }
    }
    ++v5;
    v2 += 3597;
  }
  while ( v5 < 256 );
  v20 = dword_140404A6C[283831474];
  v21 = 0;
  if ( v4 )
    v21 = v6;
  if ( v3 == dword_140404A6C[283831452] && dword_140404A6C[456202453] )
  {
    v22 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    v23 = (int)dword_140404A6C[308307070];
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v22) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v22) = v20;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v22) = 0;
    v24 = v23 << 7;
    dword_140404A6C[308307070] = v23 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    v25 = (int)dword_140404A6C[308307070];
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v24) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v24) = v20;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v24) = 1;
    v26 = v25 << 7;
    dword_140404A6C[308307070] = v25 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v26) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v26) = v20;
    *(_QWORD *)((char *)&dword_140404A6C[297756293] + v26) = 2;
  }
  v27 = v3 - 1;
  dword_140404A6C[283831450] = v27;
  if ( !v4 )
  {
    if ( (unsigned int)(v27 - 5401) <= 0x5DA )
      v27 = 6900;
    dword_140404A6C[283831450] = v27;
  }
  if ( !v21 )
  {
    v28 = v27 == 5400;
LABEL_41:
    if ( !v28 )
      goto LABEL_92;
    goto LABEL_42;
  }
  v28 = v27 == 5400;
  if ( v27 <= 5400 )
    goto LABEL_41;
  dword_140404A6C[283831450] = 5400;
LABEL_42:
  sub_14012E960(128);
  v29 = &dword_140404A6C[335047158];
  v30 = &dword_140404A6C[335047158];
  do
  {
    if ( *v30 && (rand() & 7) == 0 )
      *v30 = 0;
    v30 += 4;
  }
  while ( (__int64)v30 < (__int64)&dword_140404A6C[335047190] );
  do
  {
    if ( *v29 )
      goto LABEL_62;
    v31 = rand() & 0xF;
    if ( v31 < 2 )
    {
      v32 = 7;
LABEL_60:
      v33 = v32;
      goto LABEL_61;
    }
    if ( v31 >= 6 )
    {
      if ( v31 < 0xA )
      {
        v32 = 15;
        goto LABEL_60;
      }
      if ( v31 < 0xD )
      {
        v32 = 9;
        goto LABEL_60;
      }
      if ( v31 < 0xF )
      {
        v32 = 6;
        goto LABEL_60;
      }
      LODWORD(v32) = 4;
      v33 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v32 = 5;
        goto LABEL_60;
      }
    }
    else
    {
      LODWORD(v32) = 0;
      v33 = 0;
    }
LABEL_61:
    *v29 = 1;
    v29[1] = v32;
    v29[3] = dword_140404A6C[24944 * v33 + 346707730];
    v29[2] = rand() % 6;
LABEL_62:
    v29 += 4;
  }
  while ( (__int64)v29 < (__int64)&dword_140404A6C[335047190] );
  sub_14005E520();
  v34 = 3;
  v35 = &dword_140404A6C[283831510];
  v36 = (const char **)off_1402B2890;
  v149 = &dword_140404A6C[283831510];
  v148 = 3;
  do
  {
    v37 = (int)*v35;
    if ( (_DWORD)v37 != -1 )
    {
      sub_140158AB0(v154, "%s Manager: %s", *v36, (const char *)&dword_140404A6C[3597 * v37 + 71856254]);
      if ( dword_140404A6C[456202453] )
      {
        v38 = -1;
        do
          ++v38;
        while ( *((_BYTE *)v154 + v38) );
        v39 = dword_140404A6C[283831474];
        v40 = dword_140404A6C[308307070];
        if ( (int)v38 > 63 )
          LODWORD(v38) = 63;
        v41 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v41) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v41) = v39;
        MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v41, v154);
        v34 = v148;
        *((_BYTE *)&dword_140404A6C[297756301] + v41 + (int)v38) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v41) = v38;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v41) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v41) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v41) = 0;
        dword_140404A6C[308307070] = v40 + 1;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
    }
    ++v36;
    v35 = v149 + 5873;
    --v34;
    v149 += 5873;
    v148 = v34;
  }
  while ( v34 );
  v42 = 0;
  v43 = 0;
  do
  {
    v44 = dword_140404A6C[v43 + 283836331];
    v45 = 0;
    v46 = 0;
    if ( v44 <= 0 )
    {
LABEL_77:
      v48 = -1;
    }
    else
    {
      v47 = &dword_140404A6C[v43 + 283836332];
      while ( *v47 )
      {
        ++v45;
        ++v46;
        v47 += 13;
        if ( v45 >= v44 )
          goto LABEL_77;
      }
      v143 = 0;
      dword_140404A6C[13 * v46 + 283836332 + v43] = 1;
      v48 = sub_14005BCA0(
              0,
              &dword_140404A6C[5873 * v42 + 283836333 + 13 * v45],
              nullptr,
              &dword_140404A6C[5873 * v42 + 283836336 + 13 * v45],
              v143);
    }
    v49 = sub_14012CEB0(0, 0, 0, 0, 0, 0);
    v50 = 383LL * v49;
    dword_140404A6C[v50 + 132400668] = 0;
    dword_140404A6C[v50 + 132400639] = v48;
    v17 = (int)dword_140404A6C[v43 + 283831506] <= 4;
    dword_140404A6C[5210 * v48 + 129720183] = v49;
    if ( !v17 )
    {
      v51 = dword_140404A6C[v43 + 283836331];
      v52 = 0;
      v53 = 0;
      if ( v51 > 0 )
      {
        v54 = &dword_140404A6C[v43 + 283836332];
        while ( *v54 )
        {
          ++v52;
          ++v53;
          v54 += 13;
          if ( v52 >= v51 )
            goto LABEL_86;
        }
        v143 = 0;
        dword_140404A6C[13 * v53 + 283836332 + v43] = 1;
        sub_14005BCA0(
          9,
          &dword_140404A6C[5873 * v42 + 283836333 + 13 * v52],
          nullptr,
          &dword_140404A6C[5873 * v42 + 283836336 + 13 * v52],
          v143);
      }
    }
LABEL_86:
    v55 = *(float *)&dword_140404A6C[v43 + 283831498];
    v56 = *(float *)&dword_140404A6C[v43 + 283831499];
    v57 = *(float *)&dword_140404A6C[v43 + 283831500];
    v150 = xmmword_140278D30;
    v152 = 1.0;
    v151 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v150, (float *)&v150 + 3);
    sub_14007B2A0((__int64)&v150, (float *)&v150 + 3);
    v58 = (float)(*((float *)&v151 + 2) * 7.75) + v55;
    v59 = (float)(*((float *)&v151 + 3) * 7.75) + v56;
    v145 = v58;
    v146 = v59;
    v60 = (float)(v152 * 7.75) + v57;
    v147 = v60;
    v61 = sub_140054130(25, (unsigned int *)&v145, nullptr, (unsigned int *)&v150);
    if ( v61 != -1 )
    {
      v62 = 1760LL * (int)v61;
      dword_140404A6C[v62 + 278846051] = 0;
      dword_140404A6C[v62 + 278845981] = 1111 * (v42 + 1);
      sub_140051940(v61);
    }
    v145 = (float)(*(float *)&v150 * 0.5) + v58;
    v146 = (float)(*((float *)&v150 + 1) * 0.5) + v59;
    v147 = (float)(*((float *)&v150 + 2) * 0.5) + v60;
    v63 = sub_140054130(25, (unsigned int *)&v145, nullptr, (unsigned int *)&v150);
    if ( v63 != -1 )
    {
      v64 = 1760LL * (int)v63;
      dword_140404A6C[v64 + 278846051] = 1;
      dword_140404A6C[v64 + 278845981] = 1111 * v42 + 1112;
      sub_140051940(v63);
    }
    ++v42;
    v43 += 5873;
  }
  while ( v42 < 3 );
  v20 = dword_140404A6C[283831474];
  v27 = dword_140404A6C[283831450];
LABEL_92:
  if ( v27 < 5400 )
  {
    v65 = 1;
    for ( j = 0; j < 3; ++j )
    {
      v67 = &dword_140404A6C[71856286];
      v68 = 256;
      do
      {
        if ( *(v67 - 33) )
        {
          if ( *v67 == j )
          {
            v69 = (int)v67[6];
            if ( (_DWORD)v69 != -1 && dword_140404A6C[7166 * v69 + 280651313] == -1 )
              v65 = 0;
          }
        }
        v67 += 3597;
        --v68;
      }
      while ( v68 );
    }
    if ( v65 )
    {
      v27 -= 7;
      dword_140404A6C[283831450] = v27;
    }
  }
  if ( v27 <= 0 )
  {
    v70 = 0;
    v71 = &dword_140404A6C[283831509];
    while ( 1 )
    {
      v72 = 0;
      v73 = v71 + 79;
      do
      {
        if ( *v73 )
          sub_1400519F0(v70, v72);
        ++v72;
        v73 += 279;
      }
      while ( v72 < 16 );
      if ( dword_140404A6C[456202453] )
      {
        v74 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v74) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v74) = v20;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v74) = v70;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v74) = 1;
      }
      *v71 = 1;
      ++v70;
      v71 += 5873;
      if ( v70 >= 3 )
        break;
      v20 = dword_140404A6C[283831474];
    }
    dword_140404A6C[283831448] = 2;
    dword_140404A6C[283831450] = 3600 * dword_140404A6C[284022480];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v142 ^ v156);
}

