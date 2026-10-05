/* Address: 0x140009e30 | Name: sub_140009E30 | Size: 6077 bytes */
void __fastcall sub_140009E30(int a1)
{
  int v1; // ebp
  __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edi
  char v12; // al
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  int v16; // edi
  signed int v17; // ecx
  int v18; // r14d
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // rdx
  float v22; // xmm0_4
  float v23; // xmm9_4
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned int v29; // r8d
  unsigned int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // eax
  int v33; // r8d
  signed int v34; // eax
  signed int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // xmm0_4
  __int64 v38; // rsi
  float v39; // xmm12_4
  float v40; // xmm13_4
  float v41; // xmm7_4
  double v42; // xmm0_8
  float v43; // xmm3_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  unsigned int v48; // eax
  __int64 v49; // r15
  char v50; // al
  __int64 v51; // r12
  int v52; // edx
  __int64 v53; // rsi
  unsigned int v54; // eax
  unsigned int v55; // eax
  int v56; // eax
  __m128 v57; // xmm0
  __int64 v58; // rdx
  int v59; // r8d
  float v60; // xmm10_4
  float v61; // xmm3_4
  __int64 v62; // r10
  float v63; // xmm9_4
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned int v66; // r12d
  float v67; // xmm7_4
  int v68; // r15d
  float v69; // xmm6_4
  float v70; // xmm7_4
  __int64 v71; // rax
  bool v72; // cc
  __int64 v73; // rcx
  __int64 v74; // r11
  unsigned int *v75; // r8
  __int64 v76; // r10
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // eax
  float v80; // xmm2_4
  int v81; // ecx
  float v82; // xmm0_4
  float v83; // xmm1_4
  float *v84; // rax
  int v85; // edx
  float v86; // xmm0_4
  __int64 v87; // rcx
  float v88; // xmm8_4
  float v89; // xmm9_4
  float v90; // xmm10_4
  float v91; // xmm1_4
  float *v92; // rcx
  int v93; // edx
  float v94; // xmm5_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  int v97; // edx
  bool v98; // sf
  signed int v99; // edx
  signed int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rdi
  __int64 v104; // r12
  unsigned int v105; // r8d
  __int64 v106; // rdx
  __int64 v107; // rax
  float v108; // xmm15_4
  float v109; // xmm14_4
  float v110; // xmm13_4
  __int64 v111; // r15
  __int64 v112; // rax
  float v113; // xmm12_4
  float v114; // xmm3_4
  float v115; // xmm9_4
  float v116; // xmm6_4
  float v117; // xmm7_4
  float v118; // xmm10_4
  float v119; // xmm8_4
  float v120; // xmm11_4
  float v121; // xmm3_4
  float v122; // xmm7_4
  float v123; // xmm6_4
  float v124; // xmm8_4
  float v125; // xmm3_4
  float v126; // xmm8_4
  float v127; // xmm6_4
  float v128; // xmm7_4
  float v129; // xmm1_4
  float v130; // xmm10_4
  float v131; // xmm11_4
  __m128 v132; // xmm0
  float v133; // xmm2_4
  float v134; // xmm1_4
  float v135; // xmm3_4
  float v136; // xmm4_4
  float v137; // xmm0_4
  float v138; // xmm2_4
  float v139; // xmm2_4
  float v140; // xmm2_4
  float v141; // xmm7_4
  float v142; // xmm6_4
  float v143; // xmm8_4
  double v144; // xmm0_8
  float v145; // xmm2_4
  float v146; // xmm0_4
  float v147; // xmm1_4
  float v148; // xmm2_4
  float v149; // xmm2_4
  double v150; // xmm1_8
  double v151; // xmm0_8
  float v152; // xmm2_4
  float v153; // xmm1_4
  __int64 v154; // rcx
  int v155; // edi
  char v156; // al
  float v157; // xmm2_4
  float v158; // xmm4_4
  float v159; // xmm6_4
  unsigned int v160; // ecx
  float *v161; // rdx
  float v162; // xmm8_4
  float v163; // xmm9_4
  float v164; // xmm0_4
  __int64 v165; // [rsp+30h] [rbp-118h]
  __int64 v166; // [rsp+38h] [rbp-110h]
  float v167; // [rsp+50h] [rbp-F8h]
  float v168; // [rsp+150h] [rbp+8h]
  float v169; // [rsp+150h] [rbp+8h]
  unsigned int v170; // [rsp+158h] [rbp+10h]
  float v171; // [rsp+158h] [rbp+10h]
  signed int v172; // [rsp+160h] [rbp+18h]

  v1 = 0;
  v3 = 383LL * a1;
  v4 = dword_140404A6C[v3 + 132401001];
  if ( v4 >= 180 )
  {
    v8 = v4 + 1;
    if ( v8 >= 320 )
      v8 = 0;
  }
  else
  {
    v5 = *(float *)&dword_140404A6C[v3 + 132400645];
    v6 = *(float *)&dword_140404A6C[v3 + 132400644];
    v7 = *(float *)&dword_140404A6C[v3 + 132400646];
    if ( fsqrt((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) >= 0.016666668
      || (float)((float)((float)(v7 * *(float *)&dword_140404A6C[v3 + 132400656])
                       + *(float *)&dword_140404A6C[v3 + 132400658])
               + (float)((float)(v5 * *(float *)&dword_140404A6C[v3 + 132400655])
                       + (float)(v6 * *(float *)&dword_140404A6C[v3 + 132400654]))) <= 0.06666667 )
    {
      v8 = 0;
    }
    else
    {
      v8 = v4 + 1;
    }
  }
  dword_140404A6C[v3 + 132401001] = v8;
  v9 = (int)dword_140404A6C[v3 + 132400993];
  if ( (_DWORD)v9 != -1 )
  {
    if ( !dword_140404A6C[284024893] )
      goto LABEL_25;
    if ( (_DWORD)v9 == 67 )
    {
      v10 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      if ( !*(unsigned int *)((char *)&dword_140404A6C[132400674] + v10) )
        goto LABEL_25;
      *(unsigned int *)((char *)&dword_140404A6C[132400674] + v10) = 0;
      v11 = 68;
      dword_140404A6C[v3 + 132400996] = dword_140404A6C[225452593] - dword_140404A6C[v3 + 132400996] - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[v3 + 132400669] )
        v11 = sub_140130000();
      v12 = rand();
      v13 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      v14 = 67;
    }
    else
    {
      if ( (_DWORD)v9 != 68
        || (v15 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670],
            *(unsigned int *)((char *)&dword_140404A6C[132400674] + v15)) )
      {
LABEL_25:
        v16 = -1;
        v17 = dword_140404A6C[v3 + 132400670];
        if ( v17 >= (int)(dword_140404A6C[v3 + 132400671] - 1) )
        {
          dword_140404A6C[v3 + 132400993] = v9;
          dword_140404A6C[v3 + 132400995] = -1;
          v18 = rand() % (signed int)dword_140404A6C[225426046];
          if ( dword_140404A6C[284024893] )
            v18 = ((_DWORD)v9 == 67) + 67;
          if ( dword_140404A6C[v3 + 132400669] )
            v18 = sub_140130000();
          v19 = rand();
          sub_140008E40(
            a1,
            v9,
            dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400674 + v3],
            v18,
            v19 & 1);
          v17 = dword_140404A6C[v3 + 132400670];
        }
        v20 = 1584 * v9;
        v172 = dword_140404A6C[v3 + 132400996];
        v165 = v9;
        v166 = 1584 * v9;
        v21 = 1584 * v9 + 28LL * v172;
        if ( dword_140404A6C[5 * v17 + 132400674 + v3] )
        {
          v22 = *(float *)((char *)&dword_140404A6C[225426063] + v21);
          v23 = *(float *)((char *)&dword_140404A6C[225426065] + v21);
        }
        else
        {
          v22 = *(float *)((char *)&dword_140404A6C[225426066] + v21);
          v23 = *(float *)((char *)&dword_140404A6C[225426068] + v21);
        }
        v168 = v22;
        v170 = dword_140404A6C[5 * v17 + 132400681 + v3];
        if ( !dword_140404A6C[v3 + 132400669] && dword_140404A6C[v3 + 132400997] == v172 && (rand() & 0x7F) == 0 )
        {
          if ( !dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400681 + v3] && !(unsigned __int8)rand() )
          {
            v24 = (rand() & 1) == 0;
            v25 = dword_140404A6C[v3 + 132400997];
            if ( v24 )
              v26 = v25 - 1;
            else
              v26 = v25 + 1;
            dword_140404A6C[v3 + 132400997] = v26;
          }
          v27 = (int)dword_140404A6C[v3 + 132400670];
          v28 = v3 * 4 + 20 * v27;
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400681] + v28) == -1 )
          {
            v29 = dword_140404A6C[v3 + 132400997];
            v30 = v29 - 1;
            if ( dword_140404A6C[5 * v27 + 132400674 + v3] )
              v30 = v29 + 1;
            dword_140404A6C[v3 + 132400997] = v30;
          }
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400681] + v28) == 1 )
          {
            v31 = dword_140404A6C[v3 + 132400997];
            v32 = v31 + 1;
            if ( dword_140404A6C[5 * v27 + 132400674 + v3] )
              v32 = v31 - 1;
            dword_140404A6C[v3 + 132400997] = v32;
          }
          v33 = dword_140404A6C[v3 + 132400997];
          if ( dword_140404A6C[5 * v27 + 132400674 + v3] )
          {
            if ( v33 < 1 )
            {
              v33 = 1;
              dword_140404A6C[v3 + 132400997] = 1;
            }
            v35 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20) - 1;
          }
          else
          {
            v34 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20);
            if ( v33 < v34 )
            {
              v33 = *(unsigned int *)((char *)&dword_140404A6C[225426059] + v20);
              dword_140404A6C[v3 + 132400997] = v34;
            }
            v35 = *(unsigned int *)((char *)&dword_140404A6C[225426061] + v20) - 2;
          }
          if ( v33 > v35 )
            dword_140404A6C[v3 + 132400997] = v35;
        }
        v36 = dword_140404A6C[v3 + 132400997];
        if ( v36 != v172 )
        {
          *(float *)&v37 = fminf(
                             fsqrt(
                               (float)((float)(*(float *)&dword_140404A6C[v3 + 132400644]
                                             * *(float *)&dword_140404A6C[v3 + 132400644])
                                     + (float)(*(float *)&dword_140404A6C[v3 + 132400645]
                                             * *(float *)&dword_140404A6C[v3 + 132400645]))
                             + (float)(*(float *)&dword_140404A6C[v3 + 132400646]
                                     * *(float *)&dword_140404A6C[v3 + 132400646]))
                           * 0.125,
                             0.0083333338)
                         + *(float *)&dword_140404A6C[v3 + 132401000];
          dword_140404A6C[v3 + 132401000] = v37;
          if ( *(float *)&v37 > 1.0 )
          {
            dword_140404A6C[v3 + 132400996] = v36;
            dword_140404A6C[v3 + 132401000] = 0;
          }
        }
        v38 = (int)dword_140404A6C[v3 + 132400670];
        v39 = *(float *)((char *)&dword_140404A6C[225426174] + v20);
        v40 = *(float *)((char *)&dword_140404A6C[225426176] + v20);
        if ( dword_140404A6C[5 * v38 + 132400674 + v3] )
        {
          v39 = -v39;
          v40 = -v40;
        }
        v41 = *(float *)&dword_140404A6C[v3 + 132400647];
        v42 = sub_14023F704();
        v43 = *(float *)&v42;
        if ( (float)(v41 - *(float *)&v42) >= 3.14159265359 )
          v43 = *(float *)&v42 + 6.28318530718;
        if ( (float)(v43 - v41) >= 3.14159265359 )
          v41 = v41 + 6.28318530718;
        v44 = v43 - v41;
        if ( v44 >= -0.7853981633975 )
        {
          if ( v44 > 0.7853981633975 )
            v44 = 0.78539819;
        }
        else
        {
          v44 = -0.78539819;
        }
        v45 = *(float *)&dword_140404A6C[v3 + 132400657];
        v46 = 0.0625;
        v47 = fmaxf(v44 - v45, -0.0625);
        if ( v47 <= 0.0625 )
          v46 = v47;
        v48 = dword_140404A6C[v3 + 132400996];
        *(float *)&dword_140404A6C[v3 + 132400657] = v45 + v46;
        v49 = (int)dword_140404A6C[5 * v38 + 132400677 + v3];
        dword_140404A6C[v3 + 132400998] = v48;
        v50 = rand();
        v51 = (int)dword_140404A6C[v3 + 132400670];
        v52 = v50 & 1;
        v53 = v3 * 4 + 20 * (v51 + 1);
        if ( *(unsigned int *)((char *)&dword_140404A6C[132400676] + v53) == 1 )
        {
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v53) )
            v54 = v52 + 1;
          else
            v54 = dword_140404A6C[396 * v49 + 225426061] - v52 - 2;
          dword_140404A6C[v3 + 132400998] = v54;
        }
        if ( *(unsigned int *)((char *)&dword_140404A6C[132400676] + v53) == -1 )
        {
          v55 = dword_140404A6C[396 * v49 + 225426059];
          if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v53) )
            v56 = v55 - v52 - 1;
          else
            v56 = v52 + v55;
          dword_140404A6C[v3 + 132400998] = v56;
        }
        v57 = (__m128)dword_140404A6C[v3 + 132400647];
        *(double *)v57.m128_u64 = MEMORY[0x1401F8AC0]();
        v167 = v57.m128_f32[0];
        v58 = v3 * 4 + 20 * v51;
        v59 = *(unsigned int *)((char *)&dword_140404A6C[132400672] + v58);
        v60 = v57.m128_f32[0];
        v61 = _mm_shuffle_ps(v57, v57, 1).m128_f32[0];
        v62 = (int)dword_140404A6C[396 * v165 + 225426056 + (*(int *)((char *)&dword_140404A6C[132400674] + v58) ^ 1LL)];
        v63 = (float)((float)(v23 - (float)((float)(v57.m128_f32[0] * 4.0) + *(float *)&dword_140404A6C[v3 + 132400643]))
                    * v40)
            + (float)((float)(v168 - (float)((float)(v61 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400641])) * v39);
        v64 = v59 == dword_140404A6C[34 * v62 + 225391237];
        v65 = v64;
        if ( v59 == dword_140404A6C[34 * v62 + 225391238] )
        {
          v64 = 2;
          v65 = 2;
        }
        if ( v59 == dword_140404A6C[34 * v62 + 225391239] )
        {
          v64 = 3;
          v65 = 3;
        }
        if ( v63 < 1.0 )
        {
          dword_140404A6C[v3 + 132400995] = v62;
          dword_140404A6C[v3 + 132400993] = -1;
        }
        v66 = dword_140404A6C[v3 + 132400669];
        v67 = 0.26666668;
        dword_140404A6C[v3 + 132400658] = 1049135241;
        if ( v66 && (v63 > 40.0 || !*(unsigned int *)((char *)&dword_140404A6C[132400676] + v53)) )
          v67 = (float)(8 * dword_140404A6C[284024358] + 16) * 0.016666668;
        v68 = 0;
        v69 = fmaxf((float)(v63 - 4.0) * 0.0083333338, 0.0);
        v70 = v67 + (float)((float)(a1 & 7) * 0.0083333338);
        if ( v63 < 6.0 )
          v69 = 0.0;
        if ( !v66 )
        {
          v71 = 34 * v62;
          v72 = v170 == -1
              ? (int)dword_140404A6C[v64 + 225391254 + v71] < 2
              : (int)dword_140404A6C[v65 + 225391250 + v71] < 2;
          if ( v72 && v70 > v69 )
            v70 = v69;
        }
        *(float *)&dword_140404A6C[v3 + 132400658] = v70;
        if ( v63 < 32.0 )
        {
          v73 = *(unsigned int *)((char *)&dword_140404A6C[132400672] + v53);
          dword_140404A6C[132384229] = 0;
          sub_14018C250(v73, v65);
          if ( (int)dword_140404A6C[132384229] > 0 )
          {
            v74 = *(int *)((char *)&dword_140404A6C[132400674] + v53);
            v75 = &dword_140404A6C[132384230];
            v76 = dword_140404A6C[132384229];
            do
            {
              v77 = (int)*v75;
              if ( (_DWORD)v77 != a1 )
              {
                v78 = 383 * v77;
                v79 = dword_140404A6C[383 * v77 + 132401010];
                if ( _bittest((const int *)&v79, dword_140404A6C[v3 + 132400998]) )
                {
                  if ( dword_140404A6C[v3 + 132400669] )
                    v69 = fmaxf(v69, 0.2);
                  if ( *(float *)&dword_140404A6C[383 * (int)*v75 + 132401008 + v74] < 12.0
                    && fsqrt(
                         (float)((float)(*(float *)&dword_140404A6C[v78 + 132400644]
                                       * *(float *)&dword_140404A6C[v78 + 132400644])
                               + (float)(*(float *)&dword_140404A6C[v78 + 132400645]
                                       * *(float *)&dword_140404A6C[v78 + 132400645]))
                       + (float)(*(float *)&dword_140404A6C[v78 + 132400646]
                               * *(float *)&dword_140404A6C[v78 + 132400646])) < 0.06666667
                    && v70 > v69 )
                  {
                    *(float *)&dword_140404A6C[v3 + 132400658] = v69;
                    v70 = v69;
                    v68 = 1;
                  }
                }
              }
              ++v75;
              --v76;
            }
            while ( v76 );
            v20 = v166;
          }
        }
        v80 = *(float *)&dword_140404A6C[v3 + 132400642];
        v81 = 0;
        v82 = (float)(v61 * 12.0) + *(float *)&dword_140404A6C[v3 + 132400641];
        v83 = (float)(v60 * 12.0) + *(float *)&dword_140404A6C[v3 + 132400643];
        if ( (int)dword_140404A6C[225426046] > 0 )
        {
          v84 = (float *)&dword_140404A6C[225426183];
          do
          {
            if ( v81 != dword_140404A6C[v3 + 132401002]
              && v82 >= *(v84 - 3)
              && v82 <= *v84
              && v83 >= *(v84 - 1)
              && v83 <= v84[2]
              && v80 >= *(v84 - 2)
              && v80 <= v84[1] )
            {
              v16 = v81;
            }
            ++v81;
            v84 += 396;
          }
          while ( v81 < (int)dword_140404A6C[225426046] );
        }
        v85 = dword_140404A6C[v3 + 132401002];
        if ( v85 != -1 )
        {
          v86 = sub_140008BB0(
                  a1,
                  v85,
                  dword_140404A6C[v3 + 132401010] | (1 << dword_140404A6C[v3 + 132400997]),
                  *(float *)&dword_140404A6C[v3 + 132401004],
                  (float)((float)(v61 * *(float *)((char *)&dword_140404A6C[225426174] + v20))
                        + (float)(v60 * *(float *)((char *)&dword_140404A6C[225426176] + v20))) < 0.0);
          if ( v66 )
            v86 = fmaxf(v86, 0.2);
          if ( v70 > v86 )
          {
            *(float *)&dword_140404A6C[v3 + 132400658] = v86;
            v70 = v86;
            v68 = 1;
          }
        }
        if ( v16 == -1 )
          goto LABEL_145;
        v87 = 396LL * v16;
        v88 = *(float *)&dword_140404A6C[v87 + 225426174];
        v89 = *(float *)&dword_140404A6C[v87 + 225426176];
        v90 = *(float *)&dword_140404A6C[v87 + 225426175];
        v91 = (float)(v88 * v61) + (float)(v89 * v167);
        v92 = (float *)&dword_140404A6C[34 * dword_140404A6C[v87 + 225426056] + 225391233];
        if ( v91 >= 0.0 )
        {
          v93 = 0;
          if ( v91 > 0.0 )
          {
            v94 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v92[1]) * v90)
                        + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v92) * v88))
                + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v92[2]) * v89);
            v95 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v92[1]) * v90)
                        + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v92) * v88))
                + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v92[2]) * v89);
            if ( v94 > v95 )
              goto LABEL_138;
            goto LABEL_137;
          }
        }
        else
        {
          v93 = 1;
        }
        v94 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v92[1]) * v90)
                    + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v92) * v88))
            + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v92[2]) * v89);
        v95 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v92[1]) * v90)
                    + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v92) * v88))
            + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v92[2]) * v89);
        if ( v94 < v95 )
        {
LABEL_138:
          v96 = sub_140008BB0(a1, v16, 1 << dword_140404A6C[v3 + 132400997], v94, v93);
          if ( v66 )
            v96 = fmaxf(v96, 0.2);
          if ( v70 > v96 )
          {
            *(float *)&dword_140404A6C[v3 + 132400658] = v96;
            v70 = v96;
            v68 = 1;
          }
LABEL_145:
          if ( v66 )
          {
            if ( v68 && v70 < 0.30000001 && dword_140404A6C[v3 + 132400997] == v172 )
            {
              v97 = 2 * (rand() & 1) - 1;
              v98 = (int)(dword_140404A6C[v3 + 132400997] + v97) < 0;
              v99 = dword_140404A6C[v3 + 132400997] + v97;
              dword_140404A6C[v3 + 132400997] = v99;
              if ( v98 )
              {
                v99 = 0;
                dword_140404A6C[v3 + 132400997] = 0;
              }
              v100 = *(unsigned int *)((char *)&dword_140404A6C[225426061] + v20) - 1;
              if ( v99 > v100 )
                dword_140404A6C[v3 + 132400997] = v100;
            }
            if ( *(float *)&dword_140404A6C[v3 + 132400658] < 0.13333334 )
              dword_140404A6C[v3 + 132400658] = 1040746633;
          }
          return;
        }
LABEL_137:
        v94 = v95;
        goto LABEL_138;
      }
      *(unsigned int *)((char *)&dword_140404A6C[132400674] + v15) = 1;
      v11 = 67;
      dword_140404A6C[v3 + 132400996] = dword_140404A6C[225452989] - dword_140404A6C[v3 + 132400996] - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[v3 + 132400669] )
        v11 = sub_140130000();
      v12 = rand();
      v13 = v3 * 4 + 20LL * (int)dword_140404A6C[v3 + 132400670];
      v14 = 68;
    }
    sub_140008E40(a1, v14, *(unsigned int *)((char *)&dword_140404A6C[132400674] + v13), v11, v12 & 1);
    goto LABEL_25;
  }
  if ( dword_140404A6C[v3 + 132400995] != -1 )
  {
    v101 = (int)dword_140404A6C[v3 + 132400670];
    v102 = (int)dword_140404A6C[5 * v101 + 132400672 + v3];
    v103 = v3 * 4 + 20 * (v101 + 1);
    v104 = *(int *)((char *)&dword_140404A6C[132400672] + v103);
    v105 = dword_140404A6C[5 * v101 + 132400674 + v3];
    v106 = 396 * v102;
    v107 = 1584 * v102 + 28LL * (int)dword_140404A6C[v3 + 132400996];
    if ( v105 )
    {
      v108 = *(float *)((char *)&dword_140404A6C[225426063] + v107);
      v109 = *(float *)((char *)&dword_140404A6C[225426064] + v107);
      v110 = *(float *)((char *)&dword_140404A6C[225426065] + v107);
    }
    else
    {
      v108 = *(float *)((char *)&dword_140404A6C[225426066] + v107);
      v109 = *(float *)((char *)&dword_140404A6C[225426067] + v107);
      v110 = *(float *)((char *)&dword_140404A6C[225426068] + v107);
    }
    v111 = (int)dword_140404A6C[v3 + 132400998];
    v112 = 1584 * v104 + 28 * v111;
    if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v103) )
    {
      v113 = *(float *)((char *)&dword_140404A6C[225426066] + v112);
      v114 = *(float *)((char *)&dword_140404A6C[225426067] + v112);
      v115 = *(float *)((char *)&dword_140404A6C[225426068] + v112);
    }
    else
    {
      v113 = *(float *)((char *)&dword_140404A6C[225426063] + v112);
      v114 = *(float *)((char *)&dword_140404A6C[225426064] + v112);
      v115 = *(float *)((char *)&dword_140404A6C[225426065] + v112);
    }
    v116 = *(float *)&dword_140404A6C[v106 + 225426175];
    v117 = *(float *)&dword_140404A6C[v106 + 225426174];
    v118 = v113 - v108;
    v119 = *(float *)&dword_140404A6C[v106 + 225426176];
    v169 = v114;
    v120 = v115 - v110;
    v121 = fabs(
             (float)((float)((float)(v114 - v109) * v116) + (float)((float)(v113 - v108) * v117))
           + (float)((float)(v115 - v110) * v119));
    if ( fabs(
           (float)((float)(v116 * *(float *)&dword_140404A6C[396 * v104 + 225426175])
                 + (float)(v117 * *(float *)&dword_140404A6C[396 * v104 + 225426174]))
         + (float)(v119 * *(float *)&dword_140404A6C[396 * v104 + 225426176])) > 0.5 )
      v121 = v121 * 0.5;
    if ( v105 )
    {
      v125 = -v121;
      v122 = v125 * v117;
      v123 = v125 * v116;
      v124 = v125 * v119;
    }
    else
    {
      v122 = v117 * v121;
      v123 = v116 * v121;
      v124 = v119 * v121;
    }
    v126 = v124 + v110;
    v127 = v123 + v109;
    v128 = v122 + v108;
    v129 = fsqrt((float)(v120 * v120) + (float)(v118 * v118));
    v171 = v129;
    if ( v129 == 0.0 )
    {
      v130 = 0.0;
      v131 = 0.0;
    }
    else
    {
      v130 = v118 * (float)(1.0 / v129);
      v131 = v120 * (float)(1.0 / v129);
    }
    v132 = (__m128)dword_140404A6C[v3 + 132400647];
    *(double *)v132.m128_u64 = MEMORY[0x1401F8AC0]();
    v133 = v132.m128_f32[0];
    v134 = *(float *)&dword_140404A6C[v3 + 132400661] + 4.0;
    v135 = *(float *)&dword_140404A6C[v3 + 132400641];
    v136 = *(float *)&dword_140404A6C[v3 + 132400643];
    v137 = (float)(_mm_shuffle_ps(v132, v132, 1).m128_f32[0] * v134) + v135;
    v138 = (float)(v133 * v134) + v136;
    if ( v171 <= 0.000015258789 )
      v139 = 1.0;
    else
      v139 = (float)((float)((float)(v138 - v110) * v131) + (float)((float)(v137 - v108) * v130)) / v171;
    v140 = fmaxf(v139 + 0.125, 0.0);
    if ( v140 > 1.0 )
      v140 = 1.0;
    v141 = (float)((float)((float)((float)((float)(v128 + v128) * (float)(1.0 - v140)) + (float)(v113 * v140)) * v140)
                 + (float)((float)((float)(1.0 - v140) * v108) * (float)(1.0 - v140)))
         - v135;
    v142 = (float)((float)((float)((float)(v127 + v127) * (float)(1.0 - v140)) + (float)(v169 * v140)) * v140)
         + (float)((float)(v109 * (float)(1.0 - v140)) * (float)(1.0 - v140));
    v143 = (float)((float)((float)((float)((float)(v126 + v126) * (float)(1.0 - v140)) + (float)(v115 * v140)) * v140)
                 + (float)((float)(v110 * (float)(1.0 - v140)) * (float)(1.0 - v140)))
         - v136;
    if ( fsqrt(
           (float)((float)((float)(v142 - *(float *)&dword_140404A6C[v3 + 132400642])
                         * (float)(v142 - *(float *)&dword_140404A6C[v3 + 132400642]))
                 + (float)(v141 * v141))
         + (float)(v143 * v143)) > 0.000015258789 )
      sub_14023F704();
    v144 = sub_14000B5F0();
    v145 = *(float *)&v144;
    if ( *(float *)&v144 >= -0.981747704246875 )
    {
      if ( *(float *)&v144 > 0.981747704246875 )
        v145 = 0.98174769;
    }
    else
    {
      v145 = -0.98174769;
    }
    v146 = 0.25;
    v147 = *(float *)&dword_140404A6C[v3 + 132400657];
    v148 = fmaxf(v145 - v147, -0.25);
    if ( v148 <= 0.25 )
      v146 = v148;
    v149 = 0.13333334;
    dword_140404A6C[v3 + 132400658] = 1040746633;
    *(float *)&dword_140404A6C[v3 + 132400657] = v147 + v146;
    if ( !*(unsigned int *)((char *)&dword_140404A6C[132400676] + v103) )
    {
      v149 = 0.26666668;
      if ( dword_140404A6C[v3 + 132400669] )
      {
        if ( dword_140404A6C[283831312] == 6 )
          v149 = (float)(4 * dword_140404A6C[284024358] + 16) * 0.016666668;
        else
          v149 = 0.40000001;
      }
    }
    v150 = 0.5 - fabs(v146);
    v151 = v149;
    v152 = *(float *)&dword_140404A6C[396 * v104 + 225426176];
    *(float *)&v151 = (v150 + v150) * v151;
    v153 = *(float *)&dword_140404A6C[396 * v104 + 225426174];
    dword_140404A6C[v3 + 132400658] = LODWORD(v151);
    if ( *(unsigned int *)((char *)&dword_140404A6C[132400674] + v103) )
    {
      v153 = -v153;
      v152 = -v152;
    }
    if ( (float)((float)((float)(v115 - (float)((float)(v152 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400643])) * v152)
               + (float)((float)(v113 - (float)((float)(v153 * 4.0) + *(float *)&dword_140404A6C[v3 + 132400641])) * v153)) < 1.0 )
    {
      if ( (int)dword_140404A6C[v3 + 132400670] >= (int)(dword_140404A6C[v3 + 132400671] - 1) )
      {
        dword_140404A6C[v3 + 132400993] = v102;
        dword_140404A6C[v3 + 132400995] = -1;
        rand();
        v155 = ((_DWORD)v102 == 67) + 67;
        if ( dword_140404A6C[v3 + 132400669] )
          v155 = sub_140130000();
        if ( (unsigned int)(v102 - 67) > 1 )
        {
          v156 = rand();
          sub_140008E40(
            a1,
            v102,
            dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400674 + v3],
            v155,
            v156 & 1);
        }
      }
      else
      {
        v154 = (int)dword_140404A6C[v3 + 132400670];
        dword_140404A6C[v3 + 132400670] = v154 + 1;
        dword_140404A6C[v3 + 132400993] = dword_140404A6C[5 * v154 + 132400677 + v3];
        dword_140404A6C[v3 + 132400995] = -1;
        dword_140404A6C[v3 + 132400996] = v111;
        dword_140404A6C[v3 + 132400997] = v111;
      }
    }
    if ( (_DWORD)v104 != -1 )
    {
      v157 = *(float *)&dword_140404A6C[396 * v104 + 225426175];
      v158 = *(float *)&dword_140404A6C[396 * v104 + 225426174];
      v159 = *(float *)&dword_140404A6C[396 * v104 + 225426176];
      v160 = dword_140404A6C[5 * (int)dword_140404A6C[v3 + 132400670] + 132400679 + v3];
      v161 = (float *)&dword_140404A6C[34 * dword_140404A6C[396 * v104 + 225426056] + 225391233];
      v162 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400663] - v161[1]) * v157)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400662] - *v161) * v158))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400664] - v161[2]) * v159);
      v163 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v161[1]) * v157)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v161) * v158))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v161[2]) * v159);
      if ( v160 )
      {
        if ( v162 < v163 )
          goto LABEL_203;
      }
      else if ( v162 > v163 )
      {
        goto LABEL_203;
      }
      v162 = (float)((float)((float)(*(float *)&dword_140404A6C[v3 + 132400666] - v161[1]) * v157)
                   + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400665] - *v161) * v158))
           + (float)((float)(*(float *)&dword_140404A6C[v3 + 132400667] - v161[2]) * v159);
LABEL_203:
      LOBYTE(v1) = v160 != 0;
      v164 = sub_140008BB0(a1, v104, 1 << dword_140404A6C[v3 + 132400998], v162, v1);
      if ( v164 < *(float *)&dword_140404A6C[v3 + 132400658] )
        *(float *)&dword_140404A6C[v3 + 132400658] = v164;
    }
  }
}

