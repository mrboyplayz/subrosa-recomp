/* Address: 0x14009a4c0 | Name: sub_14009A4C0 | Size: 6389 bytes */
__int64 __fastcall sub_14009A4C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v5; // r8
  int v6; // edi
  unsigned int v7; // edx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // r13
  int v12; // r15d
  _DWORD *v13; // rax
  int *v14; // rdx
  int j; // ecx
  __int64 v16; // r8
  int v17; // r12d
  int v18; // eax
  int v19; // r12d
  int v20; // edx
  _DWORD *v21; // rdi
  __int64 v22; // rcx
  _DWORD *v23; // rsi
  int v24; // edx
  _DWORD *v25; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  int v28; // edx
  _DWORD *v29; // rdi
  __int64 v30; // rcx
  _DWORD *v31; // rsi
  int v32; // esi
  int v33; // eax
  __int64 v34; // rdi
  bool v35; // cc
  int v36; // edx
  __int64 v37; // rdi
  float v38; // xmm6_4
  float v39; // xmm7_4
  unsigned int v40; // eax
  __m128i v41; // xmm0
  int v42; // eax
  int v43; // eax
  __int64 v44; // r12
  _DWORD *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rcx
  int v48; // r15d
  int v49; // r9d
  int v50; // r10d
  __int64 v51; // r11
  int v52; // r12d
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // r13d
  unsigned __int64 v58; // r12
  unsigned int v59; // eax
  int v60; // r15d
  int v61; // edi
  int v62; // esi
  unsigned int v63; // ecx
  __int64 v64; // rdx
  _DWORD *v65; // rax
  int v66; // edi
  int v67; // eax
  float v68; // xmm8_4
  float v69; // xmm9_4
  float v70; // xmm11_4
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // rdi
  float v75; // xmm8_4
  float v76; // xmm9_4
  float v77; // xmm11_4
  float v78; // xmm6_4
  float v79; // xmm7_4
  float v80; // xmm8_4
  float v81; // xmm9_4
  float v82; // xmm6_4
  float v83; // xmm7_4
  unsigned int v84; // eax
  __int64 v85; // rdi
  int v86; // eax
  float v87; // xmm6_4
  float v88; // xmm7_4
  float v89; // xmm8_4
  __int64 v90; // rdx
  int v91; // edx
  int v92; // edi
  int v93; // edi
  _DWORD *v94; // rdx
  _DWORD *v95; // r13
  int v96; // r11d
  int v97; // edi
  int v98; // r12d
  _DWORD *v99; // rax
  int v100; // r8d
  int v101; // esi
  int *v102; // rdx
  __int64 v103; // r10
  int v104; // xmm1_4
  int v105; // r10d
  int v106; // esi
  int *v107; // rdi
  int v108; // xmm0_4
  int v109; // xmm2_4
  int v110; // xmm1_4
  int v111; // eax
  __int64 v112; // rcx
  int v113; // edx
  int v114; // xmm0_4
  int v115; // eax
  int v116; // xmm1_4
  int v117; // xmm0_4
  __int64 v118; // rcx
  int v119; // edx
  int v120; // edi
  __int64 v121; // rcx
  float v122; // xmm1_4
  float v123; // xmm0_4
  int v124; // esi
  int v125; // edi
  int v126; // r15d
  int v127; // edi
  float *v128; // rsi
  float v129; // xmm1_4
  int v130; // ecx
  int v131; // edi
  __int64 v132; // r8
  int v133; // edx
  char v134; // cl
  float *v135; // r12
  int i; // r13d
  float v137; // xmm12_4
  float v138; // xmm9_4
  float v139; // xmm13_4
  __int64 v140; // r8
  __int64 v141; // rcx
  float v142; // xmm7_4
  float v143; // xmm6_4
  float v144; // xmm9_4
  float v145; // xmm8_4
  float v146; // xmm12_4
  float v147; // xmm13_4
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  int *v151; // rax
  __int64 v152; // r15
  int v153; // edi
  int v154; // esi
  float v155; // xmm12_4
  float v156; // xmm9_4
  float v157; // xmm13_4
  float v158; // xmm6_4
  float v159; // xmm7_4
  float v160; // xmm8_4
  float v161; // xmm9_4
  float v162; // xmm6_4
  float v163; // xmm7_4
  float v164; // xmm6_4
  float v165; // xmm7_4
  float v166; // xmm8_4
  __int64 v167; // rdi
  int v168; // edi
  int v169; // ecx
  int *v170; // rdx
  int v171; // ecx
  int *v172; // r9
  int v173; // r11d
  int v174; // r9d
  int v175; // esi
  _DWORD *v176; // rdi
  int v177; // edx
  __int64 v178; // rcx
  float v179; // [rsp+30h] [rbp-D0h] BYREF
  float v180; // [rsp+34h] [rbp-CCh]
  float v181; // [rsp+38h] [rbp-C8h]
  int v182; // [rsp+40h] [rbp-C0h]
  __int128 v183; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v184; // [rsp+58h] [rbp-A8h]
  int v185; // [rsp+68h] [rbp-98h]
  _BYTE v186[1024]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v187[1024]; // [rsp+470h] [rbp+370h] BYREF

  result = (unsigned int)dword_1915413AC;
  if ( dword_1915413AC != 1 )
  {
    if ( dword_1915413AC != 2 )
    {
      if ( dword_1915413AC == 3 )
      {
        result = (unsigned int)(qword_1915413B4 - 1);
        LODWORD(qword_1915413B4) = result;
        if ( (int)result <= 0 )
          return sub_1400B4790(a1, a2, a3, a4);
      }
      return result;
    }
    v95 = &unk_16D6802B8;
    v96 = qword_1915413B4 - 1;
    v97 = HIDWORD(qword_1915413B4) + 1;
    LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
    v98 = 0;
    ++HIDWORD(qword_1915413B4);
    v99 = &unk_16D6802B8;
    do
    {
      if ( *(v99 - 2886) && !*v99 && *(v99 - 2868) )
        ++v98;
      v99 += 3597;
    }
    while ( (__int64)v99 < (__int64)dword_16DA036B8 );
    v100 = xmmword_1915FBA00;
    v101 = 1800;
    if ( v97 < 18000 )
      v101 = 2700;
    if ( v97 >= 28800 )
      v101 = 900;
    result = 300;
    if ( v97 >= 39600 )
      v101 = 300;
    if ( (int)xmmword_1915FBA00 > 0 )
    {
      v102 = (int *)&xmmword_1915FBA00 + 1;
      v103 = (unsigned int)xmmword_1915FBA00;
      do
      {
        result = dword_16D67D63C[3597 * *v102];
        if ( (_DWORD)result != -1 )
        {
          v104 = dword_190941BEC[7166 * result + 1];
          dword_1915FBC80 = dword_190941BEC[7166 * result];
          dword_1915FBC88 = dword_190941BEC[7166 * result + 2];
          dword_1915FBC84 = v104;
        }
        v102 += 9;
        --v103;
      }
      while ( v103 );
    }
    v105 = dword_163D75B60;
    if ( v97 >= 7200 )
    {
      result = (unsigned int)(v96 / v101);
      if ( !(v96 % v101) )
      {
        v106 = 0;
        if ( (int)xmmword_1915FBA00 > 0 )
        {
          v107 = (int *)&unk_1915FBA20;
          do
          {
            v108 = *(v107 - 1);
            *(v107 - 4) = v108;
            v109 = *v107;
            *(v107 - 3) = *v107;
            v110 = v107[1];
            *(v107 - 2) = v110;
            if ( SHIDWORD(qword_1915413B4) >= 10800 && v105 )
            {
              v111 = dword_191541414;
              v112 = (__int64)dword_196199564 << 7;
              v113 = dword_196199564 + 1;
              *(_DWORD *)((char *)&unk_195999560 + v112) = 21;
              *(_DWORD *)((char *)&unk_195999564 + v112) = v111;
              *(int *)((char *)&dword_195999580 + v112) = *(v107 - 6);
              *(_QWORD *)((char *)&dword_195999584 + v112) = 1;
              *(_DWORD *)((char *)&unk_19599958C + v112) = 0;
              *(_DWORD *)((char *)&qword_195999568 + v112) = v108;
              *(_DWORD *)((char *)&qword_195999568 + v112 + 4) = v109;
              *(int *)((char *)&dword_195999570 + v112) = v110;
              dword_196199564 = v113;
              HIWORD(dword_196199564) = 0;
            }
            result = dword_16D67D63C[3597 * *(v107 - 7)];
            if ( (_DWORD)result == -1 )
            {
              *(v107 - 1) = dword_1915FBC80;
              *v107 = dword_1915FBC84;
              v114 = dword_1915FBC88;
            }
            else
            {
              v114 = dword_190941BEC[7166 * result + 2];
              *(v107 - 1) = dword_190941BEC[7166 * result];
              result = (unsigned int)dword_190941BEC[7166 * result + 1];
              *v107 = result;
            }
            v107[1] = v114;
            if ( v105 )
            {
              v115 = dword_191541414;
              v116 = v107[1];
              v117 = *v107;
              v118 = (__int64)dword_196199564 << 7;
              v119 = dword_196199564 + 1;
              *(_DWORD *)((char *)&unk_195999560 + v118) = 21;
              *(_DWORD *)((char *)&unk_195999564 + v118) = v115;
              *(int *)((char *)&dword_195999580 + v118) = *(v107 - 5);
              result = (unsigned int)*(v107 - 1);
              *(_QWORD *)((char *)&dword_195999584 + v118) = 1;
              *(_DWORD *)((char *)&unk_19599958C + v118) = 0;
              *(_DWORD *)((char *)&qword_195999568 + v118) = result;
              *(_DWORD *)((char *)&qword_195999568 + v118 + 4) = v117;
              *(int *)((char *)&dword_195999570 + v118) = v116;
              dword_196199564 = v119;
              HIWORD(dword_196199564) = 0;
            }
            v100 = xmmword_1915FBA00;
            ++v106;
            v107 += 9;
          }
          while ( v106 < (int)xmmword_1915FBA00 );
          v97 = HIDWORD(qword_1915413B4);
          v96 = qword_1915413B4;
        }
      }
    }
    if ( v97 < 10800 || (result = (unsigned int)(3600 * (v97 / 3600)), v97 != (_DWORD)result) )
    {
LABEL_204:
      v168 = 0;
      v169 = 0;
      if ( v100 <= 0 )
      {
LABEL_209:
        dword_191541490[0] = 100;
        v168 = 1;
        dword_191547054 = 0;
        dword_19154CC18 = 100;
      }
      else
      {
        v170 = (int *)&xmmword_1915FBA00 + 2;
        while ( 1 )
        {
          result = 14388LL * *v170;
          if ( *(int *)((char *)dword_16D67D5A0 + result) )
          {
            if ( *(int *)((char *)dword_16D67D63C + result) != -1 )
              break;
          }
          ++v169;
          v170 += 9;
          if ( v169 >= v100 )
            goto LABEL_209;
        }
      }
      v171 = 0;
      if ( v100 <= 0 )
      {
LABEL_215:
        dword_191541490[0] = 0;
        dword_191547054 = 100;
        dword_19154CC18 = 0;
      }
      else
      {
        v172 = (int *)&xmmword_1915FBA00 + 1;
        while ( 1 )
        {
          result = *v172;
          if ( dword_16D67D5A0[3597 * result] )
          {
            if ( dword_16D67D63C[3597 * result] != -1 )
              break;
          }
          ++v171;
          v172 += 9;
          if ( v171 >= v100 )
            goto LABEL_215;
        }
        if ( !v168 )
        {
          if ( v96 > 0 )
            return result;
          dword_191541490[0] = 100;
          dword_191547054 = 0;
          dword_19154CC18 = 100;
        }
      }
      v173 = dword_191541414;
      v174 = 0;
      dword_1915413AC = 3;
      LODWORD(qword_1915413B4) = 1200;
      do
      {
        if ( *(v95 - 2886) )
        {
          if ( !*v95 )
          {
            v175 = 0;
            if ( v100 > 0 )
            {
              v176 = (_DWORD *)&xmmword_1915FBA00 + 2;
              do
              {
                if ( v105 )
                {
                  v177 = dword_196199564;
                  v178 = (__int64)dword_196199564 << 7;
                  result = (unsigned int)(*(v176 - 1) + ((*v176 + (v176[1] << 10)) << 10));
                  *(_DWORD *)((char *)&unk_195999560 + v178) = 21;
                  *(_DWORD *)((char *)&unk_195999564 + v178) = v173;
                  *(int *)((char *)&dword_195999580 + v178) = v174;
                  *(int *)((char *)&dword_195999584 + v178) = 2;
                  *(int *)((char *)&dword_195999588 + v178) = v175;
                  *(_DWORD *)((char *)&unk_19599958C + v178) = result;
                  dword_196199564 = v177 + 1;
                  *(__int64 *)((char *)&qword_195999568 + v178) = 0;
                  *(int *)((char *)&dword_195999570 + v178) = 0;
                  HIWORD(dword_196199564) = 0;
                }
                ++v175;
                v176 += 9;
              }
              while ( v175 < v100 );
            }
          }
        }
        ++v174;
        v95 += 3597;
      }
      while ( v174 < 256 );
      return result;
    }
    v120 = rand() % 8;
    sub_140051570(&v179, 0.25, 0.0);
    v121 = 19LL * v120;
    v185 = 1065353216;
    v122 = v180 + *(float *)&dword_163D94B7C[v121 + 1];
    v179 = v179 + *(float *)&dword_163D94B7C[v121];
    v123 = v181 + *(float *)&dword_163D94B7C[v121 + 2];
    v180 = v122;
    v181 = v123;
    v183 = xmmword_1400F78B0;
    v184 = xmmword_1400F78B0;
    sub_14003B080(13, (int *)&v179, nullptr, (int *)&v183);
    v124 = rand() % 8;
    v125 = rand() % 5;
    if ( v125 )
    {
      if ( v125 == 1 )
      {
        v126 = 7;
      }
      else if ( v125 == 2 )
      {
        v126 = 1;
      }
      else
      {
        v126 = 9;
        if ( v125 == 3 )
          v126 = 3;
      }
    }
    else
    {
      v126 = 11;
    }
    v127 = 0;
    v128 = (float *)&dword_163D94B7C[19 * v124];
    do
    {
      sub_140051570(&v179, 1.0, 0.0);
      v129 = v181 + v128[2];
      v130 = v126;
      v179 = v179 + *v128;
      if ( v127 )
        v130 = v126 + 1;
      v180 = v128[1];
      v181 = v129;
      sub_14003B080(v130, (int *)&v179, nullptr, (int *)&v183);
      ++v127;
    }
    while ( v127 < 4 );
    v131 = rand() % 3;
    v133 = 1 << v131;
    v182 = 1 << v131;
    if ( v98 <= 14 )
    {
      if ( v98 <= 7 )
        goto LABEL_166;
      v134 = 0;
      if ( v131 + 1 <= 2 )
        v134 = v131 + 1;
      v133 |= 1 << v134;
    }
    else
    {
      v133 = 7;
    }
    v182 = v133;
LABEL_166:
    v135 = (float *)&unk_19154147C;
    for ( i = 0; i < 3; ++i )
    {
      result = (unsigned int)(v133 >> i);
      if ( (result & 1) != 0 )
      {
        v137 = *(v135 - 2);
        v138 = *(v135 - 1);
        v139 = *v135;
        v183 = xmmword_1400F78B0;
        v185 = 1065353216;
        v184 = xmmword_1400F78B0;
        sub_140049C20((__int64)&v183, (float *)&v183 + 3, v132);
        sub_140049C20((__int64)&v183, (float *)&v183 + 3, v140);
        v141 = 16;
        v142 = *((float *)&v183 + 1) * 0.375;
        v143 = *(float *)&v183 * 0.375;
        v144 = v138 + (float)(*((float *)&v183 + 1) * 0.375);
        v145 = *((float *)&v183 + 2) * 0.375;
        v146 = v137 + (float)(*(float *)&v183 * 0.375);
        v147 = v139 + (float)(*((float *)&v183 + 2) * 0.375);
        v180 = v144;
        v148 = v144 - 0.5;
        v179 = v146;
        v149 = v146;
        v181 = v147;
        v150 = v147;
        do
        {
          v151 = dword_19025F124;
          do
          {
            if ( *(v151 - 25)
              && fsqrt(
                   (float)((float)((float)(v148 - *((float *)v151 - 1)) * (float)(v148 - *((float *)v151 - 1)))
                         + (float)((float)(v149 - *((float *)v151 - 2)) * (float)(v149 - *((float *)v151 - 2))))
                 + (float)((float)(v150 - *(float *)v151) * (float)(v150 - *(float *)v151))) < 0.5
              && *(v151 - 16) == -1 )
            {
              *(v151 - 18) = 0;
            }
            if ( v151[1735]
              && fsqrt(
                   (float)((float)((float)(v148 - *((float *)v151 + 1759)) * (float)(v148 - *((float *)v151 + 1759)))
                         + (float)((float)(v149 - *((float *)v151 + 1758)) * (float)(v149 - *((float *)v151 + 1758))))
                 + (float)((float)(v150 - *((float *)v151 + 1760)) * (float)(v150 - *((float *)v151 + 1760)))) < 0.5
              && v151[1744] == -1 )
            {
              v151[1742] = 0;
            }
            if ( v151[3495]
              && fsqrt(
                   (float)((float)((float)(v148 - *((float *)v151 + 3519)) * (float)(v148 - *((float *)v151 + 3519)))
                         + (float)((float)(v149 - *((float *)v151 + 3518)) * (float)(v149 - *((float *)v151 + 3518))))
                 + (float)((float)(v150 - *((float *)v151 + 3520)) * (float)(v150 - *((float *)v151 + 3520)))) < 0.5
              && v151[3504] == -1 )
            {
              v151[3502] = 0;
            }
            if ( v151[5255]
              && fsqrt(
                   (float)((float)((float)(v148 - *((float *)v151 + 5279)) * (float)(v148 - *((float *)v151 + 5279)))
                         + (float)((float)(v149 - *((float *)v151 + 5278)) * (float)(v149 - *((float *)v151 + 5278))))
                 + (float)((float)(v150 - *((float *)v151 + 5280)) * (float)(v150 - *((float *)v151 + 5280)))) < 0.5
              && v151[5264] == -1 )
            {
              v151[5262] = 0;
            }
            v151 += 7040;
          }
          while ( (__int64)v151 < (__int64)dword_19093F124 );
          v149 = v149 + v143;
          v148 = v148 + v142;
          v150 = v150 + v145;
          --v141;
        }
        while ( v141 );
        v152 = 3;
        do
        {
          v153 = rand() % 5;
          if ( v153 )
          {
            if ( v153 == 1 )
            {
              v154 = 7;
            }
            else if ( v153 == 2 )
            {
              v154 = 1;
            }
            else
            {
              v154 = 9;
              if ( v153 == 3 )
                v154 = 3;
            }
          }
          else
          {
            v154 = 11;
          }
          sub_14003B080(v154, (int *)&v179, nullptr, (int *)&v183);
          v155 = v146 + (float)(*(float *)&v183 * 0.375);
          v156 = v144 + (float)(*((float *)&v183 + 1) * 0.375);
          v179 = v155;
          v180 = v156;
          v157 = v147 + (float)(*((float *)&v183 + 2) * 0.375);
          v181 = v157;
          sub_14003B080(v154 + 1, (int *)&v179, nullptr, (int *)&v183);
          v158 = (float)(*(float *)&v183 * 0.375) + v155;
          v159 = (float)(*((float *)&v183 + 1) * 0.375) + v156;
          v160 = (float)(*((float *)&v183 + 2) * 0.375) + v157;
          v179 = v158;
          v180 = v159;
          v181 = v160;
          sub_14003B080(v154 + 1, (int *)&v179, nullptr, (int *)&v183);
          v161 = (float)(*(float *)&v183 * 0.375) + v158;
          v162 = (float)(*((float *)&v183 + 1) * 0.375) + v159;
          v179 = v161;
          v180 = v162;
          v163 = (float)(*((float *)&v183 + 2) * 0.375) + v160;
          v181 = v163;
          sub_14003B080(v154 + 1, (int *)&v179, nullptr, (int *)&v183);
          v146 = (float)(*(float *)&v183 * 0.375) + v161;
          v147 = (float)(*((float *)&v183 + 2) * 0.375) + v163;
          v179 = v146;
          v144 = (float)(*((float *)&v183 + 1) * 0.375) + v162;
          v181 = v147;
          v180 = v144;
          --v152;
        }
        while ( v152 );
        sub_14003B080(13, (int *)&v179, nullptr, (int *)&v183);
        v164 = (float)(*(float *)&v183 * 0.375) + v146;
        v165 = (float)(*((float *)&v183 + 1) * 0.375) + v144;
        v166 = (float)(*((float *)&v183 + 2) * 0.375) + v147;
        v179 = v164;
        v180 = v165;
        v181 = v166;
        result = (rand() & 1u) + 1;
        if ( (_DWORD)result )
        {
          v167 = (unsigned int)result;
          do
          {
            result = sub_14003B080(14, (int *)&v179, nullptr, (int *)&v183);
            v164 = v164 + (float)(*(float *)&v183 * 0.375);
            v165 = v165 + (float)(*((float *)&v183 + 1) * 0.375);
            v179 = v164;
            v166 = v166 + (float)(*((float *)&v183 + 2) * 0.375);
            v180 = v165;
            v181 = v166;
            --v167;
          }
          while ( v167 );
        }
        v133 = v182;
      }
      v135 += 5873;
    }
    v100 = xmmword_1915FBA00;
    v96 = qword_1915413B4;
    v95 = &unk_16D6802B8;
    v105 = dword_163D75B60;
    goto LABEL_204;
  }
  v5 = &unk_16D6802B8;
  v6 = 0;
  v7 = 1;
  v8 = 256;
  do
  {
    if ( *(v5 - 2886) && !*v5 )
    {
      v9 = v6 + 1;
      if ( !*(v5 - 2868) )
      {
        v9 = v6;
        v7 = 0;
      }
      v6 = v9;
    }
    v5 += 3597;
    --v8;
  }
  while ( v8 );
  result = 0;
  v10 = qword_1915413B4 - 1;
  LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
  if ( v6 >= 3 )
    result = v7;
  if ( (_DWORD)result )
  {
    result = 180;
    if ( v10 > 180 )
      v10 = 180;
    LODWORD(qword_1915413B4) = v10;
  }
  if ( v6 < 3 && v10 < 1800 )
  {
    LODWORD(qword_1915413B4) = 1800;
    return result;
  }
  if ( v10 <= 0 )
  {
    sub_1400BAD70(128);
    xmmword_1915FBA00 = 0;
    if ( dword_183989EDC > 0 )
      memset(v187, 0, 4LL * dword_183989EDC);
    v11 = &unk_16D67D5E8;
    v12 = 0;
    v13 = &unk_16D67D5E8;
    v14 = (int *)v186;
    for ( j = 0; j < 256; ++j )
    {
      if ( *(v13 - 18) && *v13 && !v13[2868] )
      {
        ++v12;
        *v14++ = j;
      }
      v13 += 3597;
    }
    dword_1915FB9FC = v12;
    v17 = rand() % 3;
    v18 = xmmword_1915FBA00;
    v19 = v17 + 3;
    while ( (!v18 || v12 >= v19) && v18 < 8 )
    {
      if ( v12 > 0 )
      {
        v20 = rand() % v12--;
        v16 = v20;
        v21 = &v186[4 * v20];
        *((_DWORD *)&xmmword_1915FBA00 + 9 * (int)xmmword_1915FBA00 + 2) = *v21;
        if ( v20 < (__int64)v12 )
        {
          v22 = v12 - (__int64)v20;
          v23 = &v186[4 * v20 + 4];
          while ( v22 )
          {
            *v21++ = *v23++;
            --v22;
          }
        }
        if ( v12 > 0 )
        {
          v24 = rand() % v12--;
          v16 = v24;
          v25 = &v186[4 * v24];
          *((_DWORD *)&xmmword_1915FBA00 + 9 * (int)xmmword_1915FBA00 + 1) = *v25;
          if ( v24 < (__int64)v12 )
          {
            v26 = v12 - (__int64)v24;
            v27 = &v186[4 * v24 + 4];
            while ( v26 )
            {
              *v25++ = *v27++;
              --v26;
            }
          }
          if ( v12 > 0 )
          {
            v28 = rand() % v12--;
            v16 = v28;
            v29 = &v186[4 * v28];
            *((_DWORD *)&xmmword_1915FBA00 + 9 * (int)xmmword_1915FBA00 + 3) = *v29;
            if ( v28 < (__int64)v12 )
            {
              v30 = v12 - (__int64)v28;
              v31 = &v186[4 * v28 + 4];
              while ( v30 )
              {
                *v29++ = *v31++;
                --v30;
              }
            }
          }
        }
        v18 = xmmword_1915FBA00;
      }
      LODWORD(xmmword_1915FBA00) = ++v18;
    }
    v32 = 0;
    v33 = 0;
    v182 = 0;
    v34 = 0xC000100040000LL;
    while ( 1 )
    {
      if ( !*(v11 - 18) || !*v11 || v11[2868] )
        goto LABEL_79;
      v35 = dword_183989EDC <= 0;
      v11[15] = 0;
      if ( v35 )
      {
        v36 = 0;
      }
      else
      {
        do
        {
          do
            v36 = rand() % dword_183989EDC;
          while ( (unsigned int)v36 <= 0x33 && _bittest64(&v34, v36) );
        }
        while ( v187[v36] );
        v187[v36] = 1;
      }
      v37 = 136LL * v36;
      v183 = xmmword_1400F78B0;
      v184 = xmmword_1400F78B0;
      v185 = 1065353216;
      v38 = *(float *)((char *)&unk_183989EF0 + v37);
      v39 = *(float *)((char *)&unk_183989EF8 + v37);
      v180 = *(float *)((char *)&unk_183989EF4 + v37) + 1.0;
      sub_140049C20((__int64)&v183, (float *)&v183 + 3, v16);
      v40 = *(_DWORD *)((char *)&unk_183989F14 + v37) - 1;
      *((_QWORD *)v11 + 1775) = 1;
      v41 = _mm_cvtsi32_si128(v40);
      v42 = *(_DWORD *)((char *)&unk_183989F18 + v37) - 1;
      v179 = (float)(_mm_cvtepi32_ps(v41).m128_f32[0] * 4.0) + v38;
      v181 = (float)((float)v42 * 4.0) + v39;
      v43 = sub_14003A7B0(&v179, (float *)&v183, v32);
      v44 = (unsigned int)xmmword_1915FBA00;
      v11[21] = v43;
      if ( v43 != -1 )
      {
        if ( (int)v44 > 0 )
        {
          v45 = (_DWORD *)&xmmword_1915FBA00 + 2;
          v46 = (unsigned int)v44;
          do
          {
            if ( v32 == *v45 )
            {
              v47 = 7166LL * v43;
              dword_190941A04[v47] = 100;
              *(_DWORD *)&algn_190941A08[v47 * 4] = 1;
            }
            v45 += 9;
            --v46;
          }
          while ( v46 );
        }
        *((_DWORD *)&unk_190941A60 + 7166 * v43) = 0;
      }
      v11[71] = 0;
      sub_14003A3D0(v32);
      v48 = dword_191541414;
      v49 = 0;
      v50 = dword_163D75B60;
      if ( (int)v44 <= 0 )
      {
LABEL_76:
        v34 = 0xC000100040000LL;
        if ( v50 )
        {
          v56 = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + v56) = 21;
          *(_DWORD *)((char *)&unk_195999564 + v56) = v48;
          *(int *)((char *)&dword_195999580 + v56) = v32;
          *(_QWORD *)((char *)&dword_195999584 + v56) = 0;
          *(_DWORD *)((char *)&unk_19599958C + v56) = 0;
          *(__int64 *)((char *)&qword_195999568 + v56) = 0;
          *(int *)((char *)&dword_195999570 + v56) = 0;
        }
        v33 = v182;
        goto LABEL_79;
      }
      v51 = v44;
      v16 = (__int64)&xmmword_1915FBA00 + 12;
      v52 = v182;
      do
      {
        if ( v32 == *(_DWORD *)(v16 - 4) )
        {
          v49 = 1;
          if ( !v50 )
            goto LABEL_74;
          v53 = (__int64)dword_196199564++ << 7;
          *(_DWORD *)((char *)&unk_195999560 + v53) = 21;
          *(_DWORD *)((char *)&unk_195999564 + v53) = v48;
          *(int *)((char *)&dword_195999580 + v53) = v32;
          *(int *)((char *)&dword_195999584 + v53) = 0;
          *(_QWORD *)((char *)&dword_195999588 + v53) = 1;
          *(__int64 *)((char *)&qword_195999568 + v53) = 0;
          *(int *)((char *)&dword_195999570 + v53) = 0;
          goto LABEL_73;
        }
        if ( v32 == *(_DWORD *)v16 )
        {
          v49 = 1;
          if ( v50 )
          {
            v54 = *(_DWORD *)(v16 - 8);
            v55 = (__int64)dword_196199564++ << 7;
            *(_DWORD *)((char *)&unk_195999560 + v55) = 21;
            *(_DWORD *)((char *)&unk_195999564 + v55) = v48;
            *(int *)((char *)&dword_195999580 + v55) = v32;
            *(int *)((char *)&dword_195999584 + v55) = 0;
            *(int *)((char *)&dword_195999588 + v55) = 2;
            *(_DWORD *)((char *)&unk_19599958C + v55) = v52 + v54;
            *(__int64 *)((char *)&qword_195999568 + v55) = 0;
            *(int *)((char *)&dword_195999570 + v55) = 0;
LABEL_73:
            HIWORD(dword_196199564) = 0;
          }
        }
LABEL_74:
        v16 += 36;
        --v51;
      }
      while ( v51 );
      if ( !v49 )
        goto LABEL_76;
      v33 = v52;
      v34 = 0xC000100040000LL;
LABEL_79:
      v33 += 1024;
      ++v32;
      v11 += 3597;
      v182 = v33;
      if ( v33 >= 0x40000 )
      {
        v57 = 0;
        v58 = 0;
        do
        {
          v59 = rand() & 0xF;
          if ( v59 >= 6 )
          {
            v60 = 6;
            if ( v59 >= 0xB )
              v60 = 16;
            v61 = rand() % 6;
          }
          else
          {
            v60 = 15;
            v61 = rand() % 6;
          }
          v62 = dword_191545FF8[v58 / 4];
          v63 = 0;
          v64 = 0;
          if ( v62 <= 0 )
          {
LABEL_91:
            v66 = -1;
          }
          else
          {
            v65 = (_DWORD *)((char *)&unk_191545FFC + v58);
            while ( *v65 )
            {
              ++v63;
              ++v64;
              v65 += 13;
              if ( (int)v63 >= v62 )
                goto LABEL_91;
            }
            *(_DWORD *)((char *)&unk_191545FFC + 52 * v64 + v58) = 1;
            v66 = sub_1400414B0(
                    v60,
                    (int *)&unk_191546000 + 5873 * v57 + 13 * v63,
                    nullptr,
                    (int *)&unk_19154600C + 5873 * v57 + 13 * v63,
                    v61);
          }
          v67 = sub_1400B92B0(v60, 0, 0, 0, 0, 0);
          v68 = *(float *)((char *)&unk_191541474 + v58);
          v69 = *(float *)((char *)&unk_191541478 + v58);
          v70 = *(float *)((char *)&unk_19154147C + v58);
          v71 = 1532LL * v67;
          v179 = v68;
          v180 = v69;
          v181 = v70;
          v183 = xmmword_1400F78B0;
          v184 = xmmword_1400F78B0;
          v185 = 1065353216;
          *(_DWORD *)((char *)&unk_16D4FD5FC + v71) = 0;
          *(_DWORD *)((char *)&unk_16D4FD588 + v71) = v66;
          dword_16E6A72A8[5210 * v66] = v67;
          sub_140049C20((__int64)&v183, (float *)&v183 + 3, v72);
          sub_140049C20((__int64)&v183, (float *)&v183 + 3, v73);
          v74 = 3;
          do
          {
            rand();
            sub_14003B080(11, (int *)&v179, nullptr, (int *)&v183);
            v75 = v68 + (float)(*(float *)&v183 * 0.375);
            v76 = v69 + (float)(*((float *)&v183 + 1) * 0.375);
            v179 = v75;
            v180 = v76;
            v77 = v70 + (float)(*((float *)&v183 + 2) * 0.375);
            v181 = v77;
            sub_14003B080(12, (int *)&v179, nullptr, (int *)&v183);
            v78 = (float)(*(float *)&v183 * 0.375) + v75;
            v79 = (float)(*((float *)&v183 + 1) * 0.375) + v76;
            v80 = (float)(*((float *)&v183 + 2) * 0.375) + v77;
            v179 = v78;
            v180 = v79;
            v181 = v80;
            sub_14003B080(12, (int *)&v179, nullptr, (int *)&v183);
            v81 = (float)(*(float *)&v183 * 0.375) + v78;
            v82 = (float)(*((float *)&v183 + 1) * 0.375) + v79;
            v179 = v81;
            v180 = v82;
            v83 = (float)(*((float *)&v183 + 2) * 0.375) + v80;
            v181 = v83;
            sub_14003B080(12, (int *)&v179, nullptr, (int *)&v183);
            v68 = (float)(*(float *)&v183 * 0.375) + v81;
            v70 = (float)(*((float *)&v183 + 2) * 0.375) + v83;
            v179 = v68;
            v69 = (float)(*((float *)&v183 + 1) * 0.375) + v82;
            v181 = v70;
            v180 = v69;
            --v74;
          }
          while ( v74 );
          v84 = (rand() & 1) + 1;
          if ( v84 )
          {
            v85 = v84;
            do
            {
              sub_14003B080(14, (int *)&v179, nullptr, (int *)&v183);
              v68 = v68 + (float)(*(float *)&v183 * 0.375);
              v69 = v69 + (float)(*((float *)&v183 + 1) * 0.375);
              v179 = v68;
              v70 = v70 + (float)(*((float *)&v183 + 2) * 0.375);
              v180 = v69;
              v181 = v70;
              --v85;
            }
            while ( v85 );
          }
          v86 = sub_14003B080(25, (int *)&v179, nullptr, (int *)&v183);
          v87 = (float)(*(float *)&v183 * 0.375) + v68;
          v88 = (float)(*((float *)&v183 + 1) * 0.375) + v69;
          v179 = v87;
          v89 = (float)(*((float *)&v183 + 2) * 0.375) + v70;
          v180 = v88;
          v181 = v89;
          if ( v86 != -1 )
          {
            v90 = 7040LL * v86;
            *(_DWORD *)((char *)&unk_19025F338 + v90) = 0;
            *(_DWORD *)((char *)&unk_19025F220 + v90) = 1111 * (v57 + 1);
            sub_140039F50(v86);
          }
          result = sub_14003B080(35, (int *)&v179, nullptr, (int *)&v183);
          ++v57;
          v58 += 23492LL;
          v179 = (float)(*(float *)&v183 * 0.375) + v87;
          v180 = (float)(*((float *)&v183 + 1) * 0.375) + v88;
          v181 = (float)(*((float *)&v183 + 2) * 0.375) + v89;
        }
        while ( v57 < 3 );
        v91 = dword_163D75B60;
        v92 = dword_191541414;
        if ( dword_163D75B60 )
        {
          result = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + result) = 10;
          *(_DWORD *)((char *)&unk_195999564 + result) = v92;
          *(int *)((char *)&dword_195999580 + result) = 0;
          *(int *)((char *)&dword_195999584 + result) = 1;
        }
        dword_1915414A0[0] = 1;
        if ( v91 )
        {
          result = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + result) = 10;
          *(_DWORD *)((char *)&unk_195999564 + result) = v92;
          *(int *)((char *)&dword_195999580 + result) = 1;
          *(int *)((char *)&dword_195999584 + result) = 1;
        }
        dword_191547064 = 1;
        if ( v91 )
        {
          result = (__int64)dword_196199564++ << 7;
          HIWORD(dword_196199564) = 0;
          *(_DWORD *)((char *)&unk_195999560 + result) = 10;
          *(_DWORD *)((char *)&unk_195999564 + result) = v92;
          *(int *)((char *)&dword_195999580 + result) = 2;
          *(int *)((char *)&dword_195999584 + result) = 1;
        }
        v93 = 0;
        dword_19154CC28 = 1;
        if ( (int)xmmword_1915FBA00 > 0 )
        {
          v94 = &unk_1915FBA24;
          do
          {
            *((_QWORD *)v94 - 1) = 0;
            *v94 = 0;
            result = dword_16D67D63C[3597 * *(v94 - 8)];
            if ( (_DWORD)result != -1 )
            {
              *(v94 - 2) = dword_190941BEC[7166 * result];
              *(v94 - 1) = dword_190941BEC[7166 * result + 1];
              result = (unsigned int)dword_190941BEC[7166 * result + 2];
              *v94 = result;
            }
            ++v93;
            v94 += 9;
          }
          while ( v93 < (int)xmmword_1915FBA00 );
        }
        dword_1915413AC = 2;
        qword_1915413B4 = 54000;
        return result;
      }
    }
  }
  return result;
}

