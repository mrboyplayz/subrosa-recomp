/* Address: 0x140099070 | Name: sub_140099070 | Size: 5188 bytes */
__int64 sub_140099070()
{
  int *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rbx
  int v4; // r11d
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  unsigned __int8 v13; // al
  int v14; // ecx
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm6_4
  __int64 v18; // r8
  bool v19; // cc
  int v20; // eax
  int v21; // eax
  int v22; // r13d
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r11d
  bool v29; // zf
  int *v30; // rsi
  int *v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rbx
  int *v36; // rax
  char **v37; // r13
  __int64 v38; // r12
  int v39; // eax
  int v40; // esi
  __int64 v41; // rdi
  int v42; // esi
  unsigned __int64 v43; // rdi
  int v44; // r8d
  unsigned int v45; // ecx
  __int64 v46; // rdx
  _DWORD *v47; // rax
  int v48; // r12d
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // rdx
  _DWORD *v54; // rax
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm8_4
  __int64 v58; // r8
  float v59; // xmm9_4
  float v60; // xmm6_4
  float v61; // xmm7_4
  int v62; // eax
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // r8d
  int j; // r10d
  int *v67; // rdx
  __int64 v68; // r9
  int v69; // esi
  int *v70; // r12
  int v71; // ebx
  _DWORD *v72; // rdi
  __int64 v73; // rax
  int v74; // r11d
  int v75; // r8d
  int *v76; // rcx
  __int64 v77; // rdx
  int v78; // eax
  int *v79; // rsi
  int v80; // r9d
  __int64 v81; // rdi
  char *v82; // rbx
  int v83; // ecx
  __int64 v84; // rdx
  int v85; // eax
  float v86; // xmm0_4
  BOOL v87; // eax
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm0_4
  int v91; // r10d
  float *v92; // rdx
  int v93; // r9d
  int *v94; // rcx
  __int64 v95; // rax
  float v96; // xmm0_4
  float v97; // xmm0_4
  int v98; // r8d
  int v99; // edx
  int *v100; // rax
  __int64 v101; // rax
  int *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // edx
  float *i; // rcx
  int v107; // eax
  float v108; // xmm1_4
  float *v109; // rax
  float v110; // xmm0_4
  float v111; // xmm0_4
  _DWORD *v112; // rbx
  _DWORD *v113; // rax
  int v114; // r15d
  __int64 v115; // rcx
  int v116; // esi
  int *v117; // r13
  int v118; // edi
  float *v119; // r12
  __int64 v120; // rbx
  __int64 v121; // r10
  int v122; // r11d
  __int64 v123; // r9
  __int64 v124; // r8
  int *v125; // rdx
  __int64 v126; // rax
  int v127; // eax
  float v128; // xmm1_4
  __int64 v129; // rax
  int v130; // eax
  float v131; // xmm1_4
  __int64 v132; // rax
  int v133; // eax
  float v134; // xmm1_4
  __int64 v135; // rax
  int v136; // eax
  float v137; // xmm1_4
  _DWORD *v138; // rbx
  float v139; // [rsp+30h] [rbp-D0h] BYREF
  float v140; // [rsp+34h] [rbp-CCh]
  float v141; // [rsp+38h] [rbp-C8h]
  __int64 v142; // [rsp+40h] [rbp-C0h]
  int *v143; // [rsp+48h] [rbp-B8h]
  __int128 v144; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v145; // [rsp+60h] [rbp-A0h]
  float v146; // [rsp+70h] [rbp-90h]
  char Src[512]; // [rsp+80h] [rbp-80h] BYREF

  v0 = (int *)&unk_16D67D628;
  v1 = 256;
  do
  {
    if ( *(v0 - 34) && *v0 > 0 )
      --*v0;
    v0 += 3597;
    --v1;
  }
  while ( v1 );
  result = (unsigned int)dword_1915413AC;
  if ( dword_1915413AC != 1 )
  {
    if ( dword_1915413AC == 2 )
    {
      v75 = HIDWORD(qword_1915413B4) + 1;
      LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
      v74 = qword_1915413B4;
      ++HIDWORD(qword_1915413B4);
      if ( (_DWORD)qword_1915413B4 == 3600 * ((int)qword_1915413B4 / 3600) )
      {
        v76 = (int *)&unk_16D67D60C;
        v77 = 256;
        do
        {
          v78 = *v76;
          *(v76 - 1) = 0;
          if ( v78 > 0 )
            *v76 = v78 - 1;
          v76[1] = 0;
          v76 += 3597;
          --v77;
        }
        while ( v77 );
      }
      v79 = dword_16D67D624;
      v80 = 1;
      v81 = 1024;
      if ( v75 >= 7200 )
      {
        v82 = (char *)&unk_19025F0C0;
        v83 = 1;
        v84 = 1024;
        do
        {
          if ( *(_DWORD *)v82 )
          {
            v85 = *((_DWORD *)v82 + 5);
            if ( v85 == 17 || (unsigned int)(v85 - 19) <= 5 )
            {
              v86 = *((float *)v82 + 23);
              v87 = 0;
              if ( v86 >= *(float *)dword_191541440 && v86 < *(float *)dword_19154144C )
              {
                v88 = *((float *)v82 + 25);
                if ( v88 >= *(float *)dword_191541448 )
                  v87 = *(float *)dword_191541454 > v88;
              }
              if ( v86 >= *(float *)&dword_191547004 && v86 < *(float *)&dword_191547010 )
              {
                v89 = *((float *)v82 + 25);
                if ( v89 >= *(float *)&dword_19154700C && *(float *)&dword_191547018 > v89 )
                  v87 = 1;
              }
              if ( v86 < *(float *)&dword_19154CBC8
                || v86 >= *(float *)&dword_19154CBD4
                || (v90 = *((float *)v82 + 25), v90 < *(float *)&dword_19154CBD0)
                || v90 >= *(float *)&dword_19154CBDC )
              {
                if ( !v87 )
                  v83 = 0;
              }
            }
          }
          v82 += 7040;
          --v84;
        }
        while ( v84 );
        if ( !v83 )
        {
          v91 = 0;
          v92 = (float *)dword_19154144C;
          do
          {
            v93 = 0;
            v94 = dword_16D67D624;
            do
            {
              if ( *(v94 - 33) )
              {
                if ( *v94 == v91 )
                {
                  v95 = v94[6];
                  if ( (_DWORD)v95 != -1 )
                  {
                    v96 = *(float *)&dword_190941A48[7166 * v95];
                    if ( v96 < *(v92 - 3) )
                      goto LABEL_155;
                    if ( v96 >= *v92 )
                      goto LABEL_155;
                    v97 = *(float *)&dword_190941A48[7166 * v95 + 2];
                    if ( v97 < *(v92 - 1) || v97 >= v92[2] )
                      goto LABEL_155;
                  }
                }
              }
              ++v93;
              v94 += 3597;
            }
            while ( v93 < 256 );
            ++v91;
            v92 += 5873;
          }
          while ( (__int64)v92 < (__int64)&dword_191552798 );
          v74 -= 9;
          LODWORD(qword_1915413B4) = v74;
LABEL_155:
          v80 = 1;
        }
      }
      v98 = dword_191541414;
      v99 = dword_163D75B60;
      if ( !dword_1915414A0[0] )
      {
        v100 = dword_16D67D624;
        do
        {
          if ( *(v100 - 33) && !*v100 && v100[6] != -1 )
            goto LABEL_165;
          v100 += 3597;
        }
        while ( (__int64)v100 < (__int64)&unk_16DA00A24 );
        if ( dword_163D75B60 )
        {
          v101 = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + v101) = 10;
          *(_DWORD *)((char *)&unk_195999564 + v101) = v98;
          *(int *)((char *)&dword_195999580 + v101) = 0;
          *(int *)((char *)&dword_195999584 + v101) = 1;
        }
        dword_1915414A0[0] = 1;
      }
LABEL_165:
      if ( !dword_191547064 )
      {
        v102 = dword_16D67D624;
        do
        {
          if ( *(v102 - 33) && *v102 == 1 && v102[6] != -1 )
            goto LABEL_174;
          v102 += 3597;
        }
        while ( (__int64)v102 < (__int64)&unk_16DA00A24 );
        if ( v99 )
        {
          v103 = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + v103) = 10;
          *(_DWORD *)((char *)&unk_195999564 + v103) = v98;
          *(int *)((char *)&dword_195999580 + v103) = 1;
          *(int *)((char *)&dword_195999584 + v103) = 1;
        }
        dword_191547064 = 1;
      }
LABEL_174:
      if ( !dword_19154CC28 )
      {
        do
        {
          if ( *(v79 - 33) && *v79 == 2 && v79[6] != -1 )
            goto LABEL_182;
          v79 += 3597;
        }
        while ( (__int64)v79 < (__int64)&unk_16DA00A24 );
        if ( v99 )
        {
          v104 = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + v104) = 10;
          *(_DWORD *)((char *)&unk_195999564 + v104) = v98;
          *(int *)((char *)&dword_195999580 + v104) = 2;
          *(int *)((char *)&dword_195999584 + v104) = 1;
        }
        dword_19154CC28 = 1;
      }
LABEL_182:
      v105 = 1;
      for ( i = (float *)dword_19025F11C; ; i += 1760 )
      {
        if ( *((_DWORD *)i - 23) )
        {
          v107 = *((_DWORD *)i - 18);
          if ( v107 == 17 || (unsigned int)(v107 - 19) <= 5 )
          {
            v108 = *i;
            v109 = (float *)&unk_191541464;
            do
            {
              if ( v108 >= *(v109 - 3) && v108 < *v109 )
              {
                v110 = i[1];
                if ( v110 >= *(v109 - 2) && v110 < v109[1] )
                {
                  v111 = i[2];
                  if ( v111 >= *(v109 - 1) && v111 < v109[2] )
                    goto LABEL_195;
                }
              }
              v109 += 5873;
            }
            while ( (__int64)v109 < (__int64)flt_1915527B0 );
            v105 = 0;
          }
        }
LABEL_195:
        if ( !--v81 )
        {
          if ( v105 )
          {
            if ( v74 > 60 )
              v74 = 60;
            LODWORD(qword_1915413B4) = v74;
          }
          v112 = &unk_16D6802B8;
          result = (__int64)dword_16DA036B8;
          do
          {
            if ( *(v112 - 2886) && !*v112 && *(v112 - 2847) != -1 )
              v80 = 0;
            v112 += 3597;
          }
          while ( (__int64)v112 < (__int64)dword_16DA036B8 );
          if ( v80 && v74 > 60 )
          {
            LODWORD(qword_1915413B4) = 60;
          }
          else if ( v74 <= 0 )
          {
            sub_140096280();
            dword_1915413AC = 3;
            LODWORD(qword_1915413B4) = dword_191541410;
            return (unsigned int)dword_191541410;
          }
          return result;
        }
      }
    }
    if ( dword_1915413AC != 3 )
      return result;
    result = (unsigned int)(qword_1915413B4 - 1);
    LODWORD(qword_1915413B4) = result;
    if ( (_DWORD)result == 1250 )
    {
      sub_140092580(-1);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 1200 )
    {
      sub_140092580(0);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 1080 )
    {
      sub_140092580(1);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 960 )
    {
      sub_140092580(2);
      result = (unsigned int)qword_1915413B4;
    }
    v142 = 3;
    if ( (_DWORD)result == 840 )
    {
      sub_140092580(3);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 720 )
    {
      sub_140092580(4);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 600 )
    {
      sub_140092580(5);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 480 )
    {
      sub_140092580(6);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 360 )
    {
      sub_140092580(7);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 240 )
    {
      sub_140092580(8);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (_DWORD)result == 120 )
    {
      sub_140092580(9);
      result = (unsigned int)qword_1915413B4;
    }
    if ( (int)result > 0 )
      return result;
    v113 = &unk_16D67D630;
    v114 = 0;
    v115 = (__int64)dword_16DA00A30;
    do
    {
      if ( *(v113 - 36) )
        *v113 = 0;
      if ( v113[3561] )
        v113[3597] = 0;
      v113 += 7194;
    }
    while ( (__int64)v113 < (__int64)dword_16DA00A30 );
    v116 = dword_191541390;
    v117 = dword_1915414A4;
    v118 = 0;
    v119 = dword_1961996A4;
LABEL_242:
    v120 = -1;
    v121 = 2;
    v122 = -1;
    LODWORD(v123) = 2;
    v124 = 0;
    v125 = dword_16D67D624;
    while ( 1 )
    {
      if ( *(v125 - 33) && *v125 == v118 )
      {
        if ( v116 == 1 )
        {
          v126 = *(v125 - 18);
          if ( (_DWORD)v126 != -1 )
          {
            v115 = 112 * v126;
            v127 = *((_DWORD *)&unk_16DDCBA64 + 28 * v126);
            if ( (int)v124 < v127 )
            {
              v124 = (unsigned int)v127;
LABEL_251:
              v120 = v121 - 2;
              v122 = v123 - 2;
            }
          }
        }
        else
        {
          v128 = (float)((float)v125[2] * *v119) + (float)*(v125 - 14);
          if ( (float)(int)v124 < v128 )
          {
            v124 = (unsigned int)(int)v128;
            goto LABEL_251;
          }
        }
      }
      if ( v125[3564] && v125[3597] == v118 )
      {
        if ( v116 == 1 )
        {
          v129 = v125[3579];
          if ( (_DWORD)v129 != -1 )
          {
            v115 = 112 * v129;
            v130 = *((_DWORD *)&unk_16DDCBA64 + 28 * v129);
            if ( (int)v124 < v130 )
            {
              v124 = (unsigned int)v130;
LABEL_260:
              v120 = v121 - 1;
              v122 = v123 - 1;
            }
          }
        }
        else
        {
          v131 = (float)((float)v125[3599] * *v119) + (float)v125[3583];
          if ( (float)(int)v124 < v131 )
          {
            v124 = (unsigned int)(int)v131;
            goto LABEL_260;
          }
        }
      }
      if ( v125[7161] && v125[7194] == v118 )
      {
        if ( v116 == 1 )
        {
          v132 = v125[7176];
          if ( (_DWORD)v132 != -1 )
          {
            v115 = 112 * v132;
            v133 = *((_DWORD *)&unk_16DDCBA64 + 28 * v132);
            if ( (int)v124 < v133 )
            {
              v124 = (unsigned int)v133;
LABEL_269:
              v120 = v121;
              v122 = v123;
            }
          }
        }
        else
        {
          v134 = (float)((float)v125[7196] * *v119) + (float)v125[7180];
          if ( (float)(int)v124 < v134 )
          {
            v124 = (unsigned int)(int)v134;
            goto LABEL_269;
          }
        }
      }
      if ( !v125[10758] || v125[10791] != v118 )
        goto LABEL_279;
      if ( v116 == 1 )
      {
        v135 = v125[10773];
        if ( (_DWORD)v135 == -1 )
          goto LABEL_279;
        v115 = 112 * v135;
        v136 = *((_DWORD *)&unk_16DDCBA64 + 28 * v135);
        if ( (int)v124 >= v136 )
          goto LABEL_279;
        v124 = (unsigned int)v136;
        goto LABEL_278;
      }
      v137 = (float)((float)v125[10793] * *v119) + (float)v125[10777];
      if ( (float)(int)v124 < v137 )
      {
        v124 = (unsigned int)(int)v137;
LABEL_278:
        v120 = v121 + 1;
        v122 = v123 + 1;
      }
LABEL_279:
      v123 = (unsigned int)(v123 + 4);
      v121 += 4;
      v125 += 14388;
      if ( (int)v123 - 2 >= 256 )
      {
        if ( v122 != -1 )
        {
          v115 = (__int64)&unk_16D67D630;
          *((_DWORD *)&unk_16D67D630 + 3597 * v120) = 1;
        }
        if ( *v117 != v122 )
        {
          *v117 = v122;
          v117[5654] = 0;
          v116 = dword_191541390;
        }
        ++v118;
        v119 += 6;
        v117 += 5873;
        if ( !--v142 )
        {
          v138 = &unk_16D6802B8;
          do
          {
            if ( *(v138 - 2886) && !*v138 )
              sub_1400B1360((unsigned int)v114, v125, v124);
            ++v114;
            v138 += 3597;
          }
          while ( v114 < 256 );
          return sub_1400B4790(v115, v125, v124, v123);
        }
        goto LABEL_242;
      }
    }
  }
  v3 = &unk_16D6802B8;
  v4 = qword_1915413B4;
  v5 = 0;
  v6 = 0;
  v7 = dword_1915413AC;
  do
  {
    if ( *(v3 - 2886) && !*v3 )
    {
      v8 = (int)*(v3 - 2853);
      if ( (unsigned int)v8 <= 2 )
        ++v5;
      result = 0;
      if ( *(v3 - 2868) )
        result = v7;
      v7 = result;
      v9 = result;
      if ( v4 < 5400 && *(v3 - 2847) == -1 && (_DWORD)v8 != -1 && (int)v8 < 3 )
      {
        v10 = *(float *)&dword_191541480[5873 * v8];
        v11 = *(float *)&dword_191541480[5873 * v8 + 1];
        v12 = *(float *)&dword_191541480[5873 * v8 + 2];
        v139 = (float)((float)((unsigned __int8)rand() - 127) * 0.0234375) + v10;
        v13 = rand();
        v146 = 1.0;
        v14 = v13;
        v15 = (int)*(v3 - 2853);
        v140 = v11 - 0.25;
        v16 = *((float *)&unk_191541470 + 5873 * v15);
        v141 = (float)((float)(v14 - 127) * 0.0234375) + v12;
        v17 = v16 + 1.5707964;
        v144 = xmmword_1400F78B0;
        v145 = xmmword_1400F78B0;
        sub_140049C20((__int64)&v144, (float *)&v144 + 3, v18);
        v19 = v3[683] <= 2;
        v20 = *(v3 - 2853);
        v3[682] = 1;
        if ( v19 )
          v3[683] = v20;
        if ( v20 )
        {
          if ( v20 == 1 )
          {
            v3[684] = 9;
          }
          else if ( v20 == 2 )
          {
            v3[684] = 8;
          }
        }
        else
        {
          v3[684] = 2;
        }
        v21 = sub_14003A7B0(&v139, (float *)&v144, v6);
        *(v3 - 2847) = v21;
        *(v3 - 2797) = 0;
        *((float *)&unk_190941A60 + 7166 * v21) = v17;
        sub_14003A3D0(v6);
        result = sub_1400B1040((unsigned int)v6);
        v4 = qword_1915413B4;
        v7 = v9;
      }
    }
    ++v6;
    v3 += 3597;
  }
  while ( v6 < 256 );
  v22 = dword_191541414;
  v23 = 0;
  if ( v5 )
    v23 = v7;
  if ( v4 == dword_1915413BC && dword_163D75B60 )
  {
    v24 = (__int64)dword_196199564++ << 7;
    HIWORD(dword_196199564) = 0;
    v25 = dword_196199564;
    *(_DWORD *)((char *)&unk_195999560 + v24) = 10;
    *(_DWORD *)((char *)&unk_195999564 + v24) = v22;
    *(_QWORD *)((char *)&dword_195999580 + v24) = 0;
    v26 = v25 << 7;
    dword_196199564 = v25 + 1;
    HIWORD(dword_196199564) = 0;
    v27 = dword_196199564;
    *(_DWORD *)((char *)&unk_195999560 + v26) = 10;
    *(_DWORD *)((char *)&unk_195999564 + v26) = v22;
    *(_QWORD *)((char *)&dword_195999580 + v26) = 1;
    result = v27 << 7;
    dword_196199564 = v27 + 1;
    HIWORD(dword_196199564) = 0;
    *(_DWORD *)((char *)&unk_195999560 + result) = 10;
    *(_DWORD *)((char *)&unk_195999564 + result) = v22;
    *(_QWORD *)((char *)&dword_195999580 + result) = 2;
  }
  v28 = v4 - 1;
  LODWORD(qword_1915413B4) = v28;
  if ( !v5 )
  {
    result = (unsigned int)(v28 - 5401);
    if ( (unsigned int)result <= 0x5DA )
      v28 = 6900;
    LODWORD(qword_1915413B4) = v28;
  }
  if ( !v23 )
  {
    v29 = v28 == 5400;
LABEL_41:
    if ( !v29 )
      goto LABEL_92;
    goto LABEL_42;
  }
  v29 = v28 == 5400;
  if ( v28 <= 5400 )
    goto LABEL_41;
  LODWORD(qword_1915413B4) = 5400;
LABEL_42:
  sub_1400BAD70(128);
  v30 = dword_196199824;
  v31 = dword_196199824;
  do
  {
    if ( *v31 && (rand() & 7) == 0 )
      *v31 = 0;
    v31 += 4;
  }
  while ( (__int64)v31 < (__int64)dword_1961998A4 );
  do
  {
    if ( *v30 )
      goto LABEL_62;
    v32 = rand() & 0xF;
    if ( v32 < 2 )
    {
      v33 = 7;
LABEL_60:
      v34 = v33;
      goto LABEL_61;
    }
    if ( v32 >= 6 )
    {
      if ( v32 < 0xA )
      {
        v33 = 15;
        goto LABEL_60;
      }
      if ( v32 < 0xD )
      {
        v33 = 9;
        goto LABEL_60;
      }
      if ( v32 < 0xF )
      {
        v33 = 6;
        goto LABEL_60;
      }
      LODWORD(v33) = 4;
      v34 = 4;
      if ( (rand() & 0xF) == 0 )
      {
        v33 = 5;
        goto LABEL_60;
      }
    }
    else
    {
      LODWORD(v33) = 0;
      v34 = 0;
    }
LABEL_61:
    *v30 = 1;
    v30[1] = v33;
    v30[3] = dword_14AA15314[24944 * v34];
    v30[2] = rand() % 6;
LABEL_62:
    v30 += 4;
  }
  while ( (__int64)v30 < (__int64)dword_1961998A4 );
  sub_140043CA0();
  v35 = 3;
  v36 = dword_1915414A4;
  v37 = off_140146AB0;
  v143 = dword_1915414A4;
  v142 = 3;
  do
  {
    if ( *v36 != -1 )
    {
      sub_1400DBB30(Src, "%s Manager: %s");
      if ( dword_163D75B60 )
      {
        v38 = -1;
        do
          ++v38;
        while ( Src[v38] );
        v39 = dword_191541414;
        v40 = dword_196199564;
        if ( (int)v38 > 63 )
          LODWORD(v38) = 63;
        v41 = (__int64)dword_196199564 << 7;
        *(_DWORD *)((char *)&unk_195999560 + v41) = 2;
        *(_DWORD *)((char *)&unk_195999564 + v41) = v39;
        memcpy(&byte_1959995A0[v41], Src, (int)v38);
        v35 = v142;
        byte_1959995A0[v41 + (int)v38] = 0;
        *(int *)((char *)&dword_195999580 + v41) = v38;
        *(int *)((char *)&dword_195999584 + v41) = 0;
        *(int *)((char *)&dword_195999588 + v41) = -1;
        *(_DWORD *)((char *)&unk_19599958C + v41) = 0;
        dword_196199564 = v40 + 1;
        HIWORD(dword_196199564) = 0;
      }
    }
    ++v37;
    v36 = v143 + 5873;
    --v35;
    v143 += 5873;
    v142 = v35;
  }
  while ( v35 );
  v42 = 0;
  v43 = 0;
  do
  {
    v44 = dword_191545FF8[v43 / 4];
    v45 = 0;
    v46 = 0;
    if ( v44 <= 0 )
    {
LABEL_77:
      v48 = -1;
    }
    else
    {
      v47 = (_DWORD *)((char *)&unk_191545FFC + v43);
      while ( *v47 )
      {
        ++v45;
        ++v46;
        v47 += 13;
        if ( (int)v45 >= v44 )
          goto LABEL_77;
      }
      *(_DWORD *)((char *)&unk_191545FFC + 52 * v46 + v43) = 1;
      v48 = sub_1400414B0(
              0,
              (int *)&unk_191546000 + 5873 * v42 + 13 * v45,
              nullptr,
              (int *)&unk_19154600C + 5873 * v42 + 13 * v45,
              0);
    }
    v49 = sub_1400B92B0(0, 0, 0, 0, 0, 0);
    v51 = 1532LL * v49;
    *(_DWORD *)((char *)&unk_16D4FD5FC + v51) = 0;
    *(_DWORD *)((char *)&unk_16D4FD588 + v51) = v48;
    v19 = dword_191541494[v43 / 4] <= 4;
    dword_16E6A72A8[5210 * v48] = v49;
    if ( !v19 )
    {
      v50 = (unsigned int)dword_191545FF8[v43 / 4];
      v52 = 0;
      v53 = 0;
      if ( (int)v50 > 0 )
      {
        v54 = (_DWORD *)((char *)&unk_191545FFC + v43);
        while ( *v54 )
        {
          ++v52;
          ++v53;
          v54 += 13;
          if ( (int)v52 >= (int)v50 )
            goto LABEL_86;
        }
        *(_DWORD *)((char *)&unk_191545FFC + 52 * v53 + v43) = 1;
        sub_1400414B0(
          9,
          (int *)&unk_191546000 + 5873 * v42 + 13 * v52,
          nullptr,
          (int *)&unk_19154600C + 5873 * v42 + 13 * v52,
          0);
      }
    }
LABEL_86:
    v55 = *(float *)((char *)&unk_191541474 + v43);
    v56 = *(float *)((char *)&unk_191541478 + v43);
    v57 = *(float *)((char *)&unk_19154147C + v43);
    v144 = xmmword_1400F78B0;
    v146 = 1.0;
    v145 = xmmword_1400F78B0;
    sub_140049C20((__int64)&v144, (float *)&v144 + 3, v50);
    sub_140049C20((__int64)&v144, (float *)&v144 + 3, v58);
    v59 = (float)(*((float *)&v145 + 2) * 7.75) + v55;
    v60 = (float)(*((float *)&v145 + 3) * 7.75) + v56;
    v139 = v59;
    v140 = v60;
    v61 = (float)(v146 * 7.75) + v57;
    v141 = v61;
    v62 = sub_14003B080(25, (int *)&v139, nullptr, (int *)&v144);
    if ( v62 != -1 )
    {
      v63 = 7040LL * v62;
      *(_DWORD *)((char *)&unk_19025F0C0 + v63 + 632) = 0;
      *(_DWORD *)((char *)&unk_19025F0C0 + v63 + 352) = 1111 * (v42 + 1);
      sub_140039F50(v62);
    }
    v139 = (float)(*(float *)&v144 * 0.5) + v59;
    v140 = (float)(*((float *)&v144 + 1) * 0.5) + v60;
    v141 = (float)(*((float *)&v144 + 2) * 0.5) + v61;
    result = sub_14003B080(25, (int *)&v139, nullptr, (int *)&v144);
    if ( (_DWORD)result != -1 )
    {
      v64 = 7040LL * (int)result;
      *(_DWORD *)((char *)&unk_19025F0C0 + v64 + 632) = 1;
      *(_DWORD *)((char *)&unk_19025F0C0 + v64 + 352) = 1111 * v42 + 1112;
      result = sub_140039F50(result);
    }
    ++v42;
    v43 += 23492LL;
  }
  while ( v42 < 3 );
  v22 = dword_191541414;
  v28 = qword_1915413B4;
LABEL_92:
  if ( v28 < 5400 )
  {
    v65 = 1;
    for ( j = 0; j < 3; ++j )
    {
      v67 = dword_16D67D624;
      v68 = 256;
      do
      {
        if ( *(v67 - 33) )
        {
          if ( *v67 == j )
          {
            result = v67[6];
            if ( (_DWORD)result != -1 && dword_1909419F0[7166 * result] == -1 )
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
      v28 -= 7;
      LODWORD(qword_1915413B4) = v28;
    }
  }
  if ( v28 <= 0 )
  {
    v69 = 0;
    v70 = dword_1915414A0;
    while ( 1 )
    {
      v71 = 0;
      v72 = v70 + 79;
      do
      {
        if ( *v72 )
          sub_14003A000(v69, v71);
        ++v71;
        v72 += 279;
      }
      while ( v71 < 16 );
      if ( dword_163D75B60 )
      {
        v73 = (__int64)dword_196199564++ << 7;
        HIWORD(dword_196199564) = 0;
        *(_DWORD *)((char *)&unk_195999560 + v73) = 10;
        *(_DWORD *)((char *)&unk_195999564 + v73) = v22;
        *(int *)((char *)&dword_195999580 + v73) = v69;
        *(int *)((char *)&dword_195999584 + v73) = 1;
      }
      *v70 = 1;
      ++v69;
      v70 += 5873;
      if ( v69 >= 3 )
        break;
      v22 = dword_191541414;
    }
    dword_1915413AC = 2;
    LODWORD(qword_1915413B4) = 3600 * xmmword_1915FBC8C;
    return (unsigned int)(3600 * xmmword_1915FBC8C);
  }
  return result;
}

