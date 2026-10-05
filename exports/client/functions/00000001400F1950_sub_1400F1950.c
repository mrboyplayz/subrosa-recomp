/* Address: 0x1400f1950 | Name: sub_1400F1950 | Size: 8260 bytes */
__int64 __fastcall sub_1400F1950(signed int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // r12
  float v8; // xmm0_4
  unsigned __int64 v9; // rbx
  bool v10; // zf
  int v11; // edi
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  signed int v22; // ecx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  signed int v35; // edx
  signed int v36; // r8d
  int v37; // r10d
  int v38; // r10d
  __int64 v39; // rdx
  signed int v40; // r12d
  int v41; // ecx
  __int64 v42; // rsi
  unsigned int v43; // xmm1_4
  unsigned int v44; // xmm0_4
  signed int v45; // r15d
  int i; // edi
  __int64 v47; // rcx
  int v48; // edx
  __int64 v49; // rsi
  signed int v50; // ecx
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm0_4
  signed int v53; // r15d
  int j; // edi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r15
  unsigned int v59; // esi
  __int64 v60; // rdi
  int v61; // ecx
  __int64 v62; // r15
  int v63; // eax
  unsigned int v64; // xmm1_4
  unsigned int v65; // xmm0_4
  signed int v66; // esi
  int k; // edi
  int v68; // r12d
  int v69; // ecx
  unsigned int v70; // ecx
  __int64 v71; // rdi
  float v72; // xmm0_4
  float v73; // xmm0_4
  unsigned int v74; // r15d
  unsigned int v75; // xmm1_4
  unsigned int v76; // xmm0_4
  int v77; // r14d
  int v78; // edi
  signed int v79; // esi
  __int64 v80; // rdi
  unsigned int v81; // eax
  __int64 v82; // rcx
  unsigned int v83; // r12d
  unsigned int v84; // eax
  int v85; // edi
  __int64 v86; // rcx
  float v87; // xmm0_4
  float v88; // xmm0_4
  int v89; // eax
  int v90; // ecx
  __int64 v91; // rcx
  float v92; // xmm0_4
  float v93; // xmm0_4
  int v94; // eax
  float v95; // xmm6_4
  float v96; // xmm7_4
  float v97; // xmm4_4
  float v98; // xmm8_4
  float v99; // xmm3_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm2_4
  signed int v103; // edi
  int m; // ebx
  __int64 v105; // rdx
  int v106; // edi
  int v107; // esi
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rbx
  unsigned int v112; // xmm1_4
  unsigned int v113; // xmm0_4
  signed int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // r12
  signed int v117; // edi
  int v118; // r15d
  __int64 v119; // rcx
  __int64 v120; // rcx
  unsigned int v121; // xmm1_4
  unsigned int v122; // xmm0_4
  signed int v123; // eax
  int v124; // r8d
  __int64 v125; // rdi
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rsi
  int v129; // r15d
  int v130; // esi
  int v131; // ecx
  unsigned int *v132; // rbx
  float v133; // xmm0_4
  unsigned int *v134; // rbx
  int v135; // edi
  int v136; // eax
  int n; // ebx
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned int *v140; // rcx
  unsigned __int64 v141; // r8
  unsigned int v142; // esi
  __int64 v143; // rdi
  __int64 v145; // [rsp+0h] [rbp-100h] BYREF
  int v146; // [rsp+20h] [rbp-E0h]
  int v147; // [rsp+28h] [rbp-D8h]
  unsigned int v148; // [rsp+30h] [rbp-D0h]
  unsigned int v149; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v150; // [rsp+38h] [rbp-C8h]
  int v151; // [rsp+40h] [rbp-C0h]
  unsigned int v152; // [rsp+48h] [rbp-B8h] BYREF
  float v153; // [rsp+4Ch] [rbp-B4h]
  float v154; // [rsp+50h] [rbp-B0h]
  int v155; // [rsp+58h] [rbp-A8h]
  int v156; // [rsp+5Ch] [rbp-A4h]
  unsigned int v157; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v158; // [rsp+68h] [rbp-98h]
  __int128 v159; // [rsp+70h] [rbp-90h] BYREF
  __int128 v160; // [rsp+80h] [rbp-80h]
  int v161; // [rsp+90h] [rbp-70h]
  __int64 v162; // [rsp+98h] [rbp-68h]
  unsigned int v163[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v164; // [rsp+A8h] [rbp-58h]
  unsigned int v165[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v166; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v167; // [rsp+C0h] [rbp-40h]
  __int128 v168; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v169; // [rsp+D8h] [rbp-28h]
  __int64 v170; // [rsp+E8h] [rbp-18h]
  _BYTE Src[2048]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v172; // [rsp+8F0h] [rbp+7F0h]

  v4 = a1;
  v5 = 14388LL * a1;
  v148 = a1;
  v162 = v5;
  v6 = *(unsigned int *)((char *)&dword_140404A6C[71856363] + v5);
  LODWORD(v7) = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5);
  v149 = v7;
  if ( v6 != *(unsigned int *)((char *)&dword_140404A6C[71856362] + v5) )
  {
    while ( 1 )
    {
      if ( (_DWORD)v7 != -1 )
      {
        a4 = v5 + 84LL * v6;
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + a4) == 3 )
          break;
      }
LABEL_14:
      v167 = 84LL * v6;
      v9 = v167 + v5;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[v167 / 4 + 71856367] + v5) == 2;
      v150 = v167 + v5;
      if ( v10 )
      {
        LODWORD(v7) = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5);
        v149 = v7;
        if ( (_DWORD)v7 != -1 )
        {
          v11 = -1;
          v12 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          v13 = 7166LL * (int)v149;
          if ( (int)dword_140404A6C[v13 + 280658139] > 0 && dword_140404A6C[v13 + 280658140] == (_DWORD)v12 )
            v11 = 0;
          if ( (int)dword_140404A6C[v13 + 280658149] > 0 && dword_140404A6C[v13 + 280658150] == (_DWORD)v12 )
          {
            v11 = 1;
            goto LABEL_23;
          }
          if ( v11 != -1 )
          {
LABEL_23:
            v14 = 1760 * v12;
            v15 = dword_140404A6C[1760 * v12 + 278845898];
            if ( v15 == 39 )
            {
              sub_1400C6D90(v12, *(unsigned int *)((char *)&dword_140404A6C[71856369] + v150));
              v15 = dword_140404A6C[v14 + 278845898];
            }
            if ( v15 == 18 )
            {
              v16 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v150);
              if ( !v16 )
              {
                ++dword_140404A6C[v14 + 278846061];
                goto LABEL_37;
              }
              if ( v16 == 1 )
              {
                --dword_140404A6C[v14 + 278846061];
                goto LABEL_37;
              }
              if ( v16 - 2 <= (int)dword_140404A6C[v14 + 278846062] )
              {
                v17 = v13 * 4 + 40 * (v11 ^ 1LL);
                if ( !*(unsigned int *)((char *)&dword_140404A6C[280658139] + v17) )
                {
                  v18 = sub_140054130(
                          18,
                          &dword_140404A6C[v14 + 278845916],
                          &dword_140404A6C[v14 + 278845925],
                          &dword_140404A6C[v14 + 278845934]);
                  v19 = 1760LL * v18;
                  dword_140404A6C[v19 + 278846063] = (dword_140404A6C[v14 + 278846063] >> (3
                                                                                         * dword_140404A6C[v14 + 278846061]))
                                                   & 7;
                  dword_140404A6C[v19 + 278846062] = 0;
                  sub_1400E35D0(v18, -1, v149, v11 ^ 1);
                  v20 = dword_140404A6C[v14 + 278846061];
                  goto LABEL_36;
                }
                a4 = *(int *)((char *)&dword_140404A6C[280658140] + v17);
                if ( dword_140404A6C[1760 * a4 + 278845898] == 18
                  && (unsigned int)sub_1400C3AB0(
                                     a4,
                                     0,
                                     (dword_140404A6C[v14 + 278846063] >> (3 * dword_140404A6C[v14 + 278846061])) & 7) )
                {
                  v20 = dword_140404A6C[v14 + 278846061];
LABEL_36:
                  sub_1400CA740((unsigned int)v12, v20);
                }
              }
LABEL_37:
              v21 = dword_140404A6C[v14 + 278846061];
              if ( v21 < 0 )
              {
                v21 = 0;
                dword_140404A6C[v14 + 278846061] = 0;
              }
              v22 = dword_140404A6C[v14 + 278846062];
              if ( v21 > v22 )
                dword_140404A6C[v14 + 278846061] = v22;
            }
            if ( ((dword_140404A6C[v14 + 278845898] - 25) & 0xFFFFFFF7) != 0
              || dword_140404A6C[v14 + 278846052] != 1
              || dword_140404A6C[v14 + 278845972] )
            {
              v9 = v150;
            }
            else
            {
              a4 = *(int *)((char *)&dword_140404A6C[71856369] + v150);
              if ( (unsigned int)a4 > 9 )
              {
                v9 = v150;
              }
              else
              {
                v10 = dword_140404A6C[456202453] == 0;
                v23 = a4 + 10 * dword_140404A6C[v14 + 278845984];
                dword_140404A6C[v14 + 278845984] = v23;
                if ( !v10 )
                {
                  v24 = dword_140404A6C[283831474];
                  v25 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v25) = 19;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v25) = v24;
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v25) = dword_140404A6C[a4 + 283785984];
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v25) = v12;
                  *(unsigned int *)((char *)&dword_140404A6C[297756297] + v25) = 1065353216;
                  *(unsigned int *)((char *)&dword_140404A6C[297756298] + v25) = 1065353216;
                }
                dword_140404A6C[v14 + 278845983] = v23;
                sub_140051940((unsigned int)v12);
                v9 = v150;
              }
            }
          }
          LODWORD(v7) = v149;
        }
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 1
        && !(unsigned int)sub_1401307D0(v4, (char *)&dword_140404A6C[71856372] + v9) )
      {
        sub_1401164B0(v4, (unsigned int)v6);
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) )
        goto LABEL_166;
      v26 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v9);
      v156 = v26;
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) != v26 )
        goto LABEL_166;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5) == -1;
      v27 = *(int *)((char *)&dword_140404A6C[71856369] + v9);
      LODWORD(v158) = v27;
      if ( !v10 )
        goto LABEL_89;
      if ( v26 == 2 )
      {
        if ( dword_140404A6C[283831448] != 1 )
          goto LABEL_89;
        if ( ((int)dword_140404A6C[283831450] >= 600 || dword_140404A6C[283831312] == 7)
          && !*(unsigned int *)((char *)&dword_140404A6C[71856287] + v5) )
        {
          a4 = (unsigned int)-((_DWORD)v27 != 1);
          v28 = -(__int64)((_DWORD)v27 != 1);
          switch ( (_DWORD)v27 )
          {
            case 2:
              v28 = 1;
              a4 = 1;
              goto LABEL_67;
            case 3:
              a4 = 2;
              v28 = 2;
              goto LABEL_67;
            case 1:
LABEL_67:
              v29 = 23492 * v28;
              v30 = 0;
              a3 = (int)dword_140404A6C[5873 * v28 + 283837164];
              if ( (int)a3 > 0 )
              {
                LODWORD(a2) = *(unsigned int *)((char *)&dword_140404A6C[71856268] + v5);
                v31 = (_DWORD *)(0x140000000LL + v29 + 1139562016);
                while ( *v31 != (_DWORD)a2 )
                {
                  ++v30;
                  ++v31;
                  if ( v30 >= a3 )
                    goto LABEL_71;
                }
                goto LABEL_89;
              }
LABEL_71:
              *(unsigned int *)((char *)&dword_140404A6C[71856286] + v5) = a4;
              *(unsigned int *)((char *)&dword_140404A6C[71856287] + v5) = 60;
              *(unsigned int *)((char *)&dword_140404A6C[71856271] + v5) = 0;
              break;
          }
          if ( (_DWORD)v27 == 4 )
          {
            v32 = *(int *)((char *)&dword_140404A6C[71856286] + v5);
            if ( (unsigned int)v32 <= 0x10 )
            {
              v33 = 5873 * v32;
              if ( dword_140404A6C[5873 * v32 + 283831510] == v4 )
              {
                dword_140404A6C[v33 + 283831510] = -1;
                dword_140404A6C[v33 + 283837164] = 0;
              }
            }
            sub_14011AF80(v4, *(unsigned int *)((char *)&dword_140404A6C[71856288] + v5));
            *(unsigned int *)((char *)&dword_140404A6C[71856286] + v5) = 17;
            *(unsigned int *)((char *)&dword_140404A6C[71856289] + v5) = 0;
            sub_140051F50(v4);
            *(unsigned int *)((char *)&dword_140404A6C[71856287] + v5) = 60;
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v5) = 0;
            sub_140051DC0(v4);
            goto LABEL_89;
          }
        }
        if ( (_DWORD)v27 == 5 )
        {
          if ( !*(unsigned int *)((char *)&dword_140404A6C[71856271] + v5) )
          {
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v5) = 1;
            sub_140051DC0(v4);
            goto LABEL_89;
          }
          if ( (int)dword_140404A6C[283831450] > 180 )
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v5) = 0;
        }
        sub_140051DC0(v4);
        goto LABEL_89;
      }
      if ( v26 == 1 && !*(unsigned int *)((char *)&dword_140404A6C[71856291] + v5) )
      {
        if ( (_DWORD)v27 == 1 )
        {
          sub_140138430(v4, 17);
        }
        else if ( (_DWORD)v27 != 2 )
        {
          goto LABEL_89;
        }
        sub_1401166B0(
          v4,
          a2,
          a3,
          a4,
          v146,
          v147,
          v148,
          v150,
          v151,
          v152,
          LODWORD(v154),
          v155,
          v157,
          v158,
          v159,
          DWORD2(v159),
          v160,
          DWORD2(v160),
          v161,
          v162,
          v163[0],
          v164,
          v165[0],
          v166,
          v167,
          v168,
          DWORD2(v168),
          v169,
          DWORD2(v169),
          v170);
      }
LABEL_89:
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5) != -1 )
      {
        v149 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5);
        if ( dword_140404A6C[283831312] == 4 )
        {
          if ( (unsigned int)(v26 - 20) <= 6 )
            sub_1400EF0D0(v4, v26, v27);
        }
        else if ( (unsigned int)(v26 - 14) <= 5 )
        {
          sub_1400EE780(v4, v27);
        }
        switch ( v26 )
        {
          case 9:
            if ( (_DWORD)v27 == 1 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 10;
            }
            else if ( (_DWORD)v27 == 2 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 11;
            }
            break;
          case 10:
            if ( (int)v27 < 1
              || (a3 = *(int *)((char *)&dword_140404A6C[71856343] + v5),
                  (int)v27 >= (int)(dword_140404A6C[14019 * a3 + 225654128] + 1)) )
            {
              LODWORD(a2) = v151;
            }
            else
            {
              v34 = dword_140404A6C[14019 * a3 + 225641203];
              if ( v34 == 5 )
              {
                a4 = *(int *)((char *)&dword_140404A6C[71856292] + v5);
                if ( (_DWORD)a4 != -1 )
                {
                  v35 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5);
                  v36 = dword_140404A6C[14019 * a3 + 225654127 + 3 * v27];
                  if ( v35 >= v36 )
                  {
                    if ( (int)v27 <= 3 )
                    {
                      v37 = (_DWORD)v27 == 1 ? 3 : ((_DWORD)v27 == 2) + 7;
                      v155 = v37;
                      if ( *(unsigned int *)((char *)&dword_140404A6C[71859822] + v5) != v37 )
                      {
                        ++dword_140404A6C[a4 + 282485789];
                        v35 -= v36;
                        *(unsigned int *)((char *)&dword_140404A6C[71859822] + v5) = v37;
                        *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = v35;
                        dword_140404A6C[7166 * a4 + 280658446] = v37;
                      }
                    }
                    if ( (unsigned int)(v27 - 4) <= 1 )
                    {
                      v38 = (_DWORD)v27 == 4 ? 1 : 2;
                      v155 = v38;
                      if ( *(unsigned int *)((char *)&dword_140404A6C[71859826] + v5) != v38 )
                      {
                        ++dword_140404A6C[a4 + 282485789];
                        *(unsigned int *)((char *)&dword_140404A6C[71859826] + v5) = v38;
                        *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = v35 - v36;
                        dword_140404A6C[7166 * a4 + 280658449] = v38;
                      }
                    }
                    sub_140051DC0(v4);
                    if ( dword_140404A6C[283831312] == 3 )
                      sub_140051F50(v4);
                  }
                }
                LODWORD(a2) = 0;
                v151 = 0;
              }
              else if ( v34 == 3 )
              {
                sub_1400EFD20(v4, v27);
                LODWORD(a2) = 1;
                v151 = 1;
              }
              else
              {
                LODWORD(a2) = v151;
              }
              a3 = *(int *)((char *)&dword_140404A6C[71856343] + v5);
              if ( dword_140404A6C[14019 * a3 + 225641203] == 8 )
              {
                if ( *(int *)((char *)&dword_140404A6C[71856279] + v5) < 20 )
                {
                  v39 = v27 + 4673LL * *(int *)((char *)&dword_140404A6C[71856343] + v5);
                  v40 = dword_140404A6C[3 * v39 + 225654127];
                  v41 = dword_140404A6C[3 * v39 + 225654126];
                  if ( *(int *)((char *)&dword_140404A6C[71856272] + v5) >= v40 )
                  {
                    v42 = *(int *)((char *)&dword_140404A6C[71856292] + v5);
                    LODWORD(v170) = 1065353216;
                    v43 = dword_140404A6C[7166 * v42 + 280651336];
                    v163[0] = dword_140404A6C[7166 * v42 + 280651335];
                    v44 = dword_140404A6C[7166 * v42 + 280651337];
                    v163[1] = v43;
                    v164 = v44;
                    v168 = xmmword_140278D30;
                    v169 = xmmword_140278D30;
                    v45 = sub_140054130(v41, v163, nullptr, (unsigned int *)&v168);
                    for ( i = 2; i < 7; ++i )
                    {
                      if ( (unsigned int)sub_1400E35D0(v45, -1, v42, i) )
                        break;
                    }
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) -= v40;
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v5);
                    sub_140051DC0(v4);
                    a3 = *(unsigned int *)((char *)&dword_140404A6C[71856343] + v5);
                    LODWORD(v27) = v158;
                  }
                }
                LODWORD(a2) = 0;
                v151 = 0;
              }
              v47 = (int)a3;
              if ( dword_140404A6C[14019 * (int)a3 + 225641203] == 9 )
              {
                a3 = *(unsigned int *)((char *)&dword_140404A6C[71856279] + v5);
                if ( (int)a3 < 10 )
                {
                  v48 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5);
                  v49 = *(int *)((char *)&dword_140404A6C[71856292] + v5);
                  v50 = dword_140404A6C[14019 * v47 + 225654127 + 3 * (int)v27];
                  if ( v48 >= v50 )
                  {
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = v48 - v50;
                    *(unsigned int *)((char *)&dword_140404A6C[71856279] + v5) = a3 + 1;
                    if ( (_DWORD)v27 == 1 && (_DWORD)v49 != -1 )
                    {
                      LODWORD(v170) = 1065353216;
                      v51 = dword_140404A6C[7166 * v49 + 280651336];
                      v165[0] = dword_140404A6C[7166 * v49 + 280651335];
                      v52 = dword_140404A6C[7166 * v49 + 280651337];
                      v165[1] = v51;
                      v166 = v52;
                      v168 = xmmword_140278D30;
                      v169 = xmmword_140278D30;
                      v53 = sub_140054130(30, v165, nullptr, (unsigned int *)&v168);
                      for ( j = 0; j < 7; ++j )
                      {
                        if ( (unsigned int)sub_1400E35D0(v53, -1, v49, j) )
                          break;
                      }
                      v5 = v162;
                    }
                  }
                }
                LODWORD(a2) = 0;
                v151 = 0;
              }
            }
            if ( (_DWORD)v27 == 16 )
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 9;
            v26 = v156;
            if ( (_DWORD)a2 == 1 )
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 9;
            break;
          case 11:
            if ( (_DWORD)v27 == 1 )
            {
              v55 = *(int *)((char *)&dword_140404A6C[71856292] + v5);
              if ( (_DWORD)v55 != -1 && (int)dword_140404A6C[7166 * v55 + 280658139] > 0 )
              {
                v56 = (int)dword_140404A6C[7166 * v55 + 280658140];
                a3 = 7040 * v56;
                if ( dword_140404A6C[1760 * v56 + 278845898] == 27 )
                {
                  a2 = (int)dword_140404A6C[1760 * v56 + 278846053];
                  if ( (unsigned int)a2 <= 0x1FF
                    && dword_140404A6C[5210 * a2 + 129716709]
                    && (int)dword_140404A6C[5210 * a2 + 129716712] > 0 )
                  {
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = (int)(float)((float)((float)(int)dword_140404A6C[24944 * dword_140404A6C[5210 * a2 + 129716710] + 346707730] * 0.75)
                                                                                            + (float)*(int *)((char *)&dword_140404A6C[71856272] + v5));
                  }
                  dword_140404A6C[1760 * v56 + 278845900] = 0;
                  dword_140404A6C[5210 * a2 + 129716716] = 0;
                }
              }
            }
            else if ( (_DWORD)v27 == 16 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 9;
            }
            break;
        }
      }
      v57 = *(int *)((char *)&dword_140404A6C[71856286] + v5);
      if ( (_DWORD)v57 == -1 || *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5) == -1 )
      {
LABEL_345:
        v4 = v148;
        LODWORD(v7) = v149;
        goto LABEL_165;
      }
      v7 = *(int *)((char *)&dword_140404A6C[71856292] + v5);
      v149 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v5);
      switch ( v26 )
      {
        case 3:
          switch ( (_DWORD)v27 )
          {
            case 1:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 4;
              break;
            case 2:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 5;
              break;
            case 3:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 7;
              break;
            default:
              v4 = v148;
              if ( (_DWORD)v27 != 4 )
              {
                v10 = (_DWORD)v27 == 5;
                v58 = -1;
                v9 = v150;
                if ( v10 )
                  *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 8;
                goto LABEL_167;
              }
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 12;
              goto LABEL_165;
          }
          goto LABEL_164;
        case 4:
          v61 = 11;
          if ( (_DWORD)v27 != 1 )
            v61 = -1;
          switch ( (_DWORD)v27 )
          {
            case 2:
              v61 = 7;
              goto LABEL_204;
            case 3:
              v61 = 1;
              goto LABEL_204;
            case 4:
              v61 = 3;
              goto LABEL_204;
            case 1:
              goto LABEL_204;
          }
          break;
        case 5:
          switch ( (_DWORD)v27 )
          {
            case 1:
              v61 = 12;
LABEL_204:
              if ( *(int *)((char *)&dword_140404A6C[71856279] + v5) < 10 )
              {
                LODWORD(a2) = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5);
                if ( (int)a2 >= 0 )
                {
                  v62 = 1268LL * v61;
                  v63 = dword_140404A6C[v62 + 278521286];
                  if ( (int)a2 >= v63 || !v63 )
                  {
                    v161 = 1065353216;
                    v64 = dword_140404A6C[7166 * v7 + 280651336];
                    v152 = dword_140404A6C[7166 * v7 + 280651335];
                    v65 = dword_140404A6C[7166 * v7 + 280651337];
                    v153 = *(float *)&v64;
                    v154 = *(float *)&v65;
                    v159 = xmmword_140278D30;
                    v160 = xmmword_140278D30;
                    v66 = sub_140054130(v61, &v152, nullptr, (unsigned int *)&v159);
                    for ( k = 2; k < 7; ++k )
                    {
                      if ( (unsigned int)sub_1400E35D0(v66, -1, v7, k) )
                        break;
                    }
                    LODWORD(v27) = v158;
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) -= dword_140404A6C[v62 + 278521286];
                    if ( dword_140404A6C[283831312] == 3 )
                      sub_140051F50(v148);
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v5);
                    v26 = v156;
                  }
                }
              }
              goto LABEL_214;
            case 2:
              v61 = 8;
              goto LABEL_204;
            case 3:
              v61 = 2;
              goto LABEL_204;
            case 4:
              v61 = 4;
              goto LABEL_204;
          }
          break;
        default:
          goto LABEL_216;
      }
LABEL_214:
      if ( (_DWORD)v27 == 16 )
        *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 3;
LABEL_216:
      switch ( v26 )
      {
        case 6:
          v68 = v27 - 1;
          a4 = -1;
          if ( (int)v27 - 1 >= (int)dword_140404A6C[335047157]
            || (v69 = dword_140404A6C[4 * (int)v27 + 335047157], v69 <= 0)
            || *(int *)((char *)&dword_140404A6C[71856272] + v5) < v69 )
          {
            v70 = v157;
          }
          else
          {
            v70 = dword_140404A6C[4 * (int)v27 + 335047156];
            a4 = dword_140404A6C[4 * (int)v27 + 335047155];
            v157 = v70;
          }
          v71 = 7166LL * (int)v149;
          a3 = 23492 * v57;
          v72 = *(float *)&dword_140404A6C[v71 + 280651335];
          if ( v72 >= *(float *)&dword_140404A6C[5873 * v57 + 283831485]
            && v72 < *(float *)((char *)&dword_140404A6C[283831488] + a3) )
          {
            v73 = *(float *)&dword_140404A6C[v71 + 280651337];
            if ( v73 >= *(float *)((char *)&dword_140404A6C[283831487] + a3)
              && v73 < *(float *)((char *)&dword_140404A6C[283831490] + a3)
              && (_DWORD)a4 != -1 )
            {
              v74 = sub_1400F00D0(a4, v57, v70);
              if ( v74 != -1 )
              {
                v161 = 1065353216;
                v75 = dword_140404A6C[v71 + 280651336];
                v152 = dword_140404A6C[v71 + 280651335];
                v76 = dword_140404A6C[v71 + 280651337];
                v153 = *(float *)&v75;
                v154 = *(float *)&v76;
                *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 3;
                v159 = xmmword_140278D30;
                v160 = xmmword_140278D30;
                v77 = v149;
                v78 = 2;
                v79 = sub_140054130(27, &v152, nullptr, (unsigned int *)&v159);
                dword_140404A6C[1760 * v79 + 278846053] = v74;
                do
                {
                  if ( (unsigned int)sub_1400E35D0(v79, -1, v77, v78) )
                    break;
                  ++v78;
                }
                while ( v78 < 7 );
                LODWORD(v27) = v158;
                v5 = v162;
                v80 = 2LL * (int)v158;
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v162) -= dword_140404A6C[4 * (int)v158
                                                                                              + 335047157];
                if ( dword_140404A6C[283831312] == 3 )
                  sub_140051F50(v148);
                a3 = 0;
                v10 = dword_140404A6C[456202453] == 0;
                dword_140404A6C[2 * v80 + 335047157] = 0;
                if ( !v10 )
                {
                  v81 = dword_140404A6C[283831474];
                  v82 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  v83 = dword_140404A6C[335047157] + 16 * v68;
                  LODWORD(a2) = dword_140404A6C[308307070] + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v82) = 14;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v82) = v81;
                  v84 = dword_140404A6C[2 * v80 + 335047155];
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v82) = v83;
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v82) = v84;
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v82) = dword_140404A6C[2 * v80 + 335047156];
                  dword_140404A6C[308307070] = a2;
                  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v82) = 0;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                }
              }
            }
          }
          LODWORD(v7) = v149;
LABEL_236:
          v4 = v148;
          goto LABEL_237;
        case 7:
          v85 = 14;
          v58 = -1;
          if ( (_DWORD)v27 != 1 )
            v85 = -1;
          if ( (_DWORD)v27 == 2 )
          {
            v86 = 5873 * v57;
            v87 = *(float *)&dword_140404A6C[7166 * v7 + 280651335];
            if ( v87 >= *(float *)&dword_140404A6C[5873 * v57 + 283831485]
              && v87 < *(float *)&dword_140404A6C[v86 + 283831488] )
            {
              v88 = *(float *)&dword_140404A6C[7166 * v7 + 280651337];
              if ( v88 >= *(float *)&dword_140404A6C[v86 + 283831487]
                && v88 < *(float *)&dword_140404A6C[v86 + 283831490] )
              {
                v89 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5);
                if ( v89 >= 1000 )
                {
                  v90 = v148;
                  *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = v89 - 1000;
                  *(unsigned int *)((char *)&dword_140404A6C[71859822] + v5) = 7;
                  sub_140051DC0(v90);
                }
              }
            }
          }
          a2 = 28664 * v7;
          v91 = 5873 * v57;
          v92 = *(float *)&dword_140404A6C[7166 * v7 + 280651335];
          if ( v92 >= *(float *)&dword_140404A6C[5873 * v57 + 283831485]
            && v92 < *(float *)&dword_140404A6C[v91 + 283831488] )
          {
            v93 = *(float *)((char *)&dword_140404A6C[280651337] + a2);
            if ( v93 >= *(float *)&dword_140404A6C[v91 + 283831487]
              && v93 < *(float *)&dword_140404A6C[v91 + 283831490]
              && (_DWORD)v27 == 1 )
            {
              if ( *(int *)((char *)&dword_140404A6C[71856279] + v5) >= 10
                || (v94 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5), v94 < 0)
                || v94 < (int)dword_140404A6C[278539038] )
              {
                v4 = v148;
                v9 = v150;
              }
              else
              {
                LODWORD(v95) = *(unsigned int *)((char *)&dword_140404A6C[280651458] + a2);
                LODWORD(v96) = *(unsigned int *)((char *)&dword_140404A6C[280651459] + a2);
                LODWORD(v97) = *(unsigned int *)((char *)&dword_140404A6C[280651456] + a2);
                v98 = *(float *)((char *)&dword_140404A6C[280651460] + a2);
                LODWORD(v99) = *(unsigned int *)((char *)&dword_140404A6C[280651457] + a2);
                v100 = *(float *)((char *)&dword_140404A6C[280651455] + a2) * 0.75;
                v101 = *(float *)((char *)&dword_140404A6C[280651440] + a2) - (float)(v95 * 0.75);
                HIDWORD(v159) = *(unsigned int *)((char *)&dword_140404A6C[280651455] + a2);
                *(_QWORD *)&v160 = __PAIR64__(LODWORD(v99), LODWORD(v97));
                *((_QWORD *)&v160 + 1) = __PAIR64__(LODWORD(v96), LODWORD(v95));
                v161 = LODWORD(v98);
                *(float *)&v152 = v101 + v100;
                v153 = (float)(*(float *)((char *)&dword_140404A6C[280651441] + a2) - (float)(v96 * 0.75))
                     + (float)(v97 * 0.75);
                v102 = *(float *)((char *)&dword_140404A6C[280651442] + a2);
                LODWORD(v159) = *(unsigned int *)((char *)&dword_140404A6C[280651452] + a2);
                DWORD2(v159) = *(unsigned int *)((char *)&dword_140404A6C[280651454] + a2);
                DWORD1(v159) = *(unsigned int *)((char *)&dword_140404A6C[280651453] + a2);
                v154 = (float)(v102 - (float)(v98 * 0.75)) + (float)(v99 * 0.75);
                v103 = sub_140054130(v85, &v152, nullptr, (unsigned int *)&v159);
                for ( m = 2; m < 7; ++m )
                {
                  if ( (unsigned int)sub_1400E35D0(v103, -1, v7, m) )
                    break;
                }
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) -= dword_140404A6C[278539038];
                v4 = v148;
                if ( dword_140404A6C[283831312] == 3 )
                  sub_140051F50(v148);
                ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v5);
                v9 = v150;
              }
              goto LABEL_167;
            }
          }
          v4 = v148;
          goto LABEL_238;
        case 8:
          if ( (_DWORD)v27 == 1 )
          {
            v105 = 1;
            goto LABEL_268;
          }
          if ( (_DWORD)v27 == 2 )
          {
            v4 = v148;
            sub_14011AF80(v148, 1);
          }
          else
          {
            switch ( (_DWORD)v27 )
            {
              case 3:
                v105 = 10;
                break;
              case 4:
                v4 = v148;
                sub_14011AF80(v148, 10);
                goto LABEL_269;
              case 5:
                v105 = 100;
                break;
              case 6:
                v4 = v148;
                sub_14011AF80(v148, 100);
                goto LABEL_269;
              case 7:
                v105 = 5000;
                break;
              default:
                v4 = v148;
                if ( (_DWORD)v27 != 8 )
                {
                  sub_140051F50(v148);
LABEL_237:
                  v58 = -1;
                  goto LABEL_238;
                }
                sub_14011AF80(v148, 5000);
                goto LABEL_269;
            }
LABEL_268:
            v4 = v148;
            sub_1401189F0(v148, v105, a3, a4);
          }
LABEL_269:
          sub_140051F50(v4);
          goto LABEL_165;
        case 13:
          if ( (unsigned int)(v27 - 1) > 5 )
            goto LABEL_295;
          v106 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5);
          v107 = dword_1402B2960[(int)v27];
          if ( v106 < v107 )
            goto LABEL_295;
          if ( (int)v27 >= 3 || *(int *)((char *)&dword_140404A6C[71856281] + v5) < 40 )
          {
            v108 = 7166 * v7;
            if ( (int)dword_140404A6C[7166 * v7 + 280658139] <= 0 )
            {
              v112 = dword_140404A6C[v108 + 280651336];
              v152 = dword_140404A6C[v108 + 280651335];
              v113 = dword_140404A6C[v108 + 280651337];
              v153 = *(float *)&v112;
              v154 = *(float *)&v113;
              v161 = 1065353216;
              v159 = xmmword_140278D30;
              v160 = xmmword_140278D30;
              v114 = sub_140054130(18, &v152, nullptr, (unsigned int *)&v159);
              v115 = 1760LL * v114;
              dword_140404A6C[v115 + 278846062] = 0;
              dword_140404A6C[v115 + 278846063] = v27;
              sub_1400E35D0(v114, -1, v7, 0);
              *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) -= dword_1402B2960[(int)v27];
              if ( (int)v27 < 3 )
              {
                ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v5);
                v4 = v148;
                goto LABEL_165;
              }
            }
            else
            {
              v109 = (int)dword_140404A6C[v108 + 280658140];
              LODWORD(a2) = 7040 * v109;
              if ( dword_140404A6C[1760 * v109 + 278845898] == 18 )
              {
                if ( (unsigned int)sub_1400C3AB0(v109, 0, v27) )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) = v106 - v107;
                  if ( (int)v27 < 3 )
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v5);
                }
              }
            }
LABEL_295:
            if ( (_DWORD)v27 != 7 )
              goto LABEL_236;
            if ( (int)dword_140404A6C[7166 * v7 + 280658139] > 0 )
            {
              v110 = (int)dword_140404A6C[7166 * v7 + 280658140];
              v111 = 1760 * v110;
              if ( dword_140404A6C[1760 * v110 + 278845898] == 18 )
              {
                v4 = v148;
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v5) += sub_1400C3D10(v110);
                dword_140404A6C[v111 + 278845900] = 0;
                goto LABEL_165;
              }
            }
          }
          break;
        case 12:
          v116 = *(int *)((char *)&dword_140404A6C[71856286] + v5);
          if ( (unsigned int)v116 > 5 )
            goto LABEL_345;
          if ( (unsigned int)(v27 - 1) > 5 )
            goto LABEL_314;
          v117 = dword_140404A6C[6 * v116 + 335047066];
          v118 = dword_1402B2960[(int)v27];
          if ( v117 < v118 )
            goto LABEL_314;
          if ( (int)v27 < 3 && *(int *)((char *)&dword_140404A6C[71856281] + v5) >= 40 )
            goto LABEL_345;
          a3 = (int)v149;
          v119 = 7166LL * (int)v149;
          if ( (int)dword_140404A6C[v119 + 280658139] <= 0 )
          {
            v121 = dword_140404A6C[v119 + 280651336];
            v152 = dword_140404A6C[v119 + 280651335];
            v122 = dword_140404A6C[v119 + 280651337];
            v153 = *(float *)&v121;
            v154 = *(float *)&v122;
            v161 = 1065353216;
            v159 = xmmword_140278D30;
            v160 = xmmword_140278D30;
            v123 = sub_140054130(18, &v152, nullptr, (unsigned int *)&v159);
            v124 = v149;
            v125 = 0;
            v58 = -1;
            v126 = 1760LL * v123;
            dword_140404A6C[v126 + 278846062] = 0;
            dword_140404A6C[v126 + 278846063] = v27;
            sub_1400E35D0(v123, -1, v124, 0);
            dword_140404A6C[6 * v116 + 335047066] -= dword_1402B2960[(int)v27];
            if ( (int)v27 < 3 )
            {
              ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v5);
              v4 = v148;
              LODWORD(v7) = v149;
              v9 = v150;
              goto LABEL_167;
            }
            a3 = v149;
            goto LABEL_317;
          }
          v120 = (int)dword_140404A6C[v119 + 280658140];
          LODWORD(a2) = 7040 * v120;
          if ( dword_140404A6C[1760 * v120 + 278845898] == 18 )
          {
            if ( (unsigned int)sub_1400C3AB0(v120, 0, v27) )
            {
              a3 = v149;
              dword_140404A6C[6 * v116 + 335047066] = v117 - v118;
              v58 = -1;
              if ( (int)v27 < 3 )
                ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v5);
LABEL_316:
              v125 = 0;
LABEL_317:
              if ( (_DWORD)v27 != 7 )
              {
                v4 = v148;
                LODWORD(v7) = v149;
LABEL_238:
                v10 = (_DWORD)v27 == 16;
                v9 = v150;
                if ( v10 )
                  *(unsigned int *)((char *)&dword_140404A6C[71856342] + v5) = 3;
                goto LABEL_167;
              }
              v127 = 7166LL * (int)a3;
              if ( (int)dword_140404A6C[v127 + 280658139] <= 0 )
                goto LABEL_343;
              v128 = (int)dword_140404A6C[v127 + 280658140];
              v158 = 7040 * v128;
              if ( dword_140404A6C[1760 * v128 + 278845898] != 18 )
              {
                for ( n = 0; n < 16; ++n )
                {
                  v138 = *(int *)((char *)&dword_140404A6C[71856286] + v5);
                  v139 = v125 + 23492 * v138;
                  if ( *(unsigned int *)((char *)&dword_140404A6C[283831588] + v139)
                    && (_DWORD)v128 == *(unsigned int *)((char *)&dword_140404A6C[283831592] + v139) )
                  {
                    sub_1400F4D00(v138, (unsigned int)n);
                  }
                  v125 += 1116;
                }
LABEL_343:
                v4 = v148;
                LODWORD(v7) = v149;
                v9 = v150;
                goto LABEL_167;
              }
              v129 = sub_1400C3D10(v128);
              v130 = dword_140404A6C[6 * v116 + 335047061];
              if ( v130 > 0 )
                *(float *)&dword_140404A6C[6 * v116 + 335047062] = (float)((float)v129 / (float)v130)
                                                                 + *(float *)&dword_140404A6C[6 * v116 + 335047062];
              v131 = dword_140404A6C[5873 * v116 + 283831506];
              if ( v131 > 0 )
                v129 /= v131;
              v132 = &dword_140404A6C[71856286];
              do
              {
                if ( *(v132 - 33) && *v132 == (_DWORD)v116 )
                {
                  *(v132 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)v132[2] / (float)v130), 0.0), 1.0)
                                             * (float)v129);
                  sub_140051F50((unsigned int)v125);
                }
                LODWORD(v125) = v125 + 1;
                v132 += 3597;
              }
              while ( (int)v125 < 256 );
              v133 = *(float *)&dword_140404A6C[6 * v116 + 335047062];
              if ( v133 > 500.0 )
              {
                v134 = &dword_140404A6C[71856288];
                v135 = 0;
                *(float *)&dword_140404A6C[6 * v116 + 335047062] = v133 * 0.2;
                do
                {
                  if ( *(v134 - 35) && *(v134 - 2) == (_DWORD)v116 )
                  {
                    v130 += 4 * *v134;
                    v136 = 5 * *v134;
                    dword_140404A6C[6 * v116 + 335047061] = v130;
                    *v134 = v136;
                    sub_140051F50((unsigned int)v135);
                  }
                  ++v135;
                  v134 += 3597;
                }
                while ( v135 < 256 );
                v5 = v162;
              }
              sub_140052090();
              LODWORD(v7) = v149;
              dword_140404A6C[v158 / 4 + 278845900] = 0;
              break;
            }
LABEL_314:
            a3 = v149;
          }
          v58 = -1;
          goto LABEL_316;
      }
LABEL_164:
      v4 = v148;
LABEL_165:
      v9 = v150;
LABEL_166:
      v58 = -1;
LABEL_167:
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856266] + v5) )
      {
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 4 )
        {
          a4 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          if ( (int)a4 >= 0 && (int)a4 < (int)dword_140404A6C[134050358] )
          {
            LODWORD(a2) = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
            if ( (int)a2 >= 0 )
            {
              v146 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
              dword_140404A6C[28 * a4 + 134050385] = a2;
              sub_140158AB0(Src, "%s %d banned %d", (const char *)&dword_140404A6C[28 * a4 + 134050365], a4, v146);
              if ( dword_140404A6C[456202453] )
              {
                do
                  ++v58;
                while ( Src[v58] );
                v59 = dword_140404A6C[308307070];
                if ( (int)v58 > 63 )
                  LODWORD(v58) = 63;
                v60 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v60) = 2;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v60) = dword_140404A6C[283831474];
                MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v60, Src);
                dword_140404A6C[308307070] = v59 + 1;
                v9 = v150;
                *((_BYTE *)&dword_140404A6C[297756301] + v60 + (int)v58) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v60) = v58;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v60) = 4;
                v58 = -1;
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v60) = -1;
                *(unsigned int *)((char *)&dword_140404A6C[297756296] + v60) = 0;
                HIWORD(dword_140404A6C[308307070]) = 0;
              }
            }
          }
        }
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 5 )
        {
          a2 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          if ( (int)a2 >= 0 && (int)a2 < (int)dword_140404A6C[134050358] )
          {
            a3 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
            if ( (int)a3 >= 0 )
            {
              dword_140404A6C[28 * a2 + 134050376] = a3;
              v140 = &dword_140404A6C[71856268];
              v141 = v167;
              do
              {
                if ( *(v140 - 15) && *v140 == (_DWORD)a2 )
                  v140[8] = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v141 + v5);
                v140 += 3597;
              }
              while ( (__int64)v140 < (__int64)&dword_140404A6C[72777100] );
              sub_140158AB0(
                Src,
                "%s %d rating %d",
                (const char *)&dword_140404A6C[28 * *(unsigned int *)((char *)&dword_140404A6C[71856368] + v141 + v5)
                                             + 134050365],
                *(unsigned int *)((char *)&dword_140404A6C[71856368] + v141 + v5),
                *(unsigned int *)((char *)&dword_140404A6C[71856369] + v141 + v5));
              if ( dword_140404A6C[456202453] )
              {
                do
                  ++v58;
                while ( Src[v58] );
                v142 = dword_140404A6C[308307070];
                if ( (int)v58 > 63 )
                  LODWORD(v58) = 63;
                v143 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v143) = 2;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v143) = dword_140404A6C[283831474];
                MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v143, Src);
                dword_140404A6C[308307070] = v142 + 1;
                *((_BYTE *)&dword_140404A6C[297756301] + v143 + (int)v58) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v143) = v58;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v143) = 4;
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v143) = -1;
                HIWORD(dword_140404A6C[308307070]) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756296] + v143) = 0;
              }
            }
          }
        }
      }
      v6 = ((unsigned __int8)*(unsigned int *)((char *)&dword_140404A6C[71856363] + v5) + 1) & 0x3F;
      *(unsigned int *)((char *)&dword_140404A6C[71856363] + v5) = v6;
      if ( v6 == *(unsigned int *)((char *)&dword_140404A6C[71856362] + v5) )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v145 ^ v172);
    }
    a3 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + a4);
    if ( (unsigned int)(a3 - 3) <= 4 )
    {
      LODWORD(a2) = 28664 * v7;
      dword_140404A6C[7166 * (int)v7 + 280658342 + 12 * dword_140404A6C[7166 * (int)v7 + 280658341]] = 2;
      dword_140404A6C[7166 * (int)v7 + 280658352 + 12 * dword_140404A6C[7166 * (int)v7 + 280658341]] = *(unsigned int *)((char *)&dword_140404A6C[71856369] + a4);
      dword_140404A6C[7166 * (int)v7 + 280658353 + 12 * dword_140404A6C[7166 * (int)v7 + 280658341]] = a3 - 3;
      dword_140404A6C[7166 * (int)v7 + 280658343 + 12 * dword_140404A6C[7166 * (int)v7 + 280658341]] = 0;
      dword_140404A6C[7166 * (int)v7 + 280658341] = ((unsigned __int8)dword_140404A6C[7166 * (int)v7 + 280658341] + 1)
                                                  & 7;
    }
    switch ( (_DWORD)a3 )
    {
      case 1:
        a2 = 28664LL * (int)v7;
        *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                                 + 280658342]
                        + a2) = 1;
        break;
      case 2:
        a2 = 28664LL * (int)v7;
        v8 = *(float *)((char *)&dword_140404A6C[280651384] + a2) * 8.0;
        *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                                 + 280658342]
                        + a2) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                                 + 280658352]
                        + a2) = *(unsigned int *)((char *)&dword_140404A6C[71856369] + a4);
        *(float *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2) + 280658353]
                 + a2) = v8;
        goto LABEL_9;
      case 8:
        a2 = 28664LL * (int)v7;
        *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                                 + 280658342]
                        + a2) = 3;
        break;
      default:
        goto LABEL_14;
    }
    *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                             + 280658352]
                    + a2) = *(unsigned int *)((char *)&dword_140404A6C[71856369] + a4);
    *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                             + 280658353]
                    + a2) = 0;
LABEL_9:
    *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                             + 280658343]
                    + a2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[280658341] + a2) = ((unsigned __int8)*(unsigned int *)((char *)&dword_140404A6C[280658341] + a2)
                                                                 + 1)
                                                                & 7;
    goto LABEL_14;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v145 ^ v172);
}

