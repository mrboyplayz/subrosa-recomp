/* Address: 0x1400055f0 | Name: sub_1400055F0 | Size: 6081 bytes */
void __fastcall sub_1400055F0(int a1)
{
  int v1; // ebp
  unsigned __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // edi
  char v12; // al
  unsigned __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rax
  int v16; // edi
  int v17; // ecx
  int v18; // r14d
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // rdx
  float v22; // xmm8_4
  float v23; // xmm11_4
  float v24; // xmm10_4
  float v25; // xmm0_4
  float v26; // xmm9_4
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  int v32; // r8d
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  int v36; // r8d
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm0_4
  __int64 v43; // rcx
  __int64 v44; // rsi
  float v45; // xmm12_4
  float v46; // xmm7_4
  float v47; // xmm13_4
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm7_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm3_4
  int v60; // eax
  __int64 v61; // r15
  char v62; // al
  __int64 v63; // r12
  int v64; // edx
  unsigned __int64 v65; // rsi
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __m128 v69; // xmm0
  unsigned __int64 v70; // rdx
  int v71; // r8d
  float v72; // xmm10_4
  float v73; // xmm3_4
  __int64 v74; // r10
  float v75; // xmm9_4
  __int64 v76; // rcx
  __int64 v77; // rdx
  int v78; // r12d
  float v79; // xmm7_4
  int v80; // r15d
  float v81; // xmm6_4
  float v82; // xmm7_4
  __int64 v83; // rax
  bool v84; // cc
  __int64 v85; // rcx
  __int64 v86; // r11
  int *v87; // r8
  __int64 v88; // r10
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  float v92; // xmm2_4
  int v93; // ecx
  float v94; // xmm0_4
  float v95; // xmm1_4
  float *v96; // rax
  int v97; // edx
  float v98; // xmm0_4
  __int64 v99; // rcx
  float v100; // xmm8_4
  float v101; // xmm9_4
  float v102; // xmm10_4
  float v103; // xmm1_4
  float *v104; // rcx
  int v105; // edx
  float v106; // xmm5_4
  float v107; // xmm6_4
  float v108; // xmm0_4
  int v109; // edx
  bool v110; // sf
  int v111; // edx
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r14
  unsigned __int64 v115; // rdi
  __int64 v116; // r12
  int v117; // r8d
  __int64 v118; // rdx
  __int64 v119; // rax
  float v120; // xmm15_4
  float v121; // xmm14_4
  float v122; // xmm13_4
  __int64 v123; // r15
  __int64 v124; // rax
  float v125; // xmm12_4
  float v126; // xmm3_4
  float v127; // xmm9_4
  float v128; // xmm6_4
  float v129; // xmm7_4
  float v130; // xmm10_4
  float v131; // xmm8_4
  float v132; // xmm11_4
  float v133; // xmm3_4
  float v134; // xmm7_4
  float v135; // xmm6_4
  float v136; // xmm8_4
  float v137; // xmm3_4
  float v138; // xmm8_4
  float v139; // xmm6_4
  float v140; // xmm7_4
  float v141; // xmm1_4
  float v142; // xmm10_4
  float v143; // xmm11_4
  __m128 v144; // xmm0
  float v145; // xmm2_4
  float v146; // xmm1_4
  float v147; // xmm3_4
  float v148; // xmm4_4
  float v149; // xmm0_4
  float v150; // xmm2_4
  float v151; // xmm2_4
  float v152; // xmm2_4
  float v153; // xmm7_4
  float v154; // xmm6_4
  float v155; // xmm8_4
  double v156; // xmm0_8
  float v157; // xmm2_4
  float v158; // xmm0_4
  float v159; // xmm1_4
  float v160; // xmm2_4
  float v161; // xmm2_4
  double v162; // xmm1_8
  double v163; // xmm0_8
  float v164; // xmm2_4
  float v165; // xmm1_4
  __int64 v166; // rcx
  int v167; // edi
  char v168; // al
  float v169; // xmm2_4
  float v170; // xmm4_4
  float v171; // xmm6_4
  int v172; // ecx
  float *v173; // rdx
  float v174; // xmm8_4
  float v175; // xmm9_4
  float v176; // xmm0_4
  __int64 v177; // [rsp+30h] [rbp-118h]
  __int64 v178; // [rsp+38h] [rbp-110h]
  float v179; // [rsp+50h] [rbp-F8h]
  float v180; // [rsp+150h] [rbp+8h]
  float v181; // [rsp+150h] [rbp+8h]
  int v182; // [rsp+158h] [rbp+10h]
  float v183; // [rsp+158h] [rbp+10h]
  int v184; // [rsp+160h] [rbp+18h]

  v1 = 0;
  v3 = 1532LL * a1;
  v4 = *(_DWORD *)((char *)&unk_16D4FDB30 + v3);
  if ( v4 >= 180 )
  {
    v8 = v4 + 1;
    if ( v8 >= 320 )
      v8 = 0;
  }
  else
  {
    v5 = *(float *)((char *)&unk_16D4FD5A0 + v3);
    v6 = *(float *)((char *)&unk_16D4FD59C + v3);
    v7 = *(float *)((char *)&unk_16D4FD5A4 + v3);
    if ( fsqrt((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) >= 0.016666668
      || (float)((float)((float)(v7 * *(float *)((char *)&unk_16D4FD5CC + v3)) + *(float *)((char *)&unk_16D4FD5D4 + v3))
               + (float)((float)(v5 * *(float *)((char *)&unk_16D4FD5C8 + v3))
                       + (float)(v6 * *(float *)((char *)&unk_16D4FD5C4 + v3)))) <= 0.06666667 )
    {
      v8 = 0;
    }
    else
    {
      v8 = v4 + 1;
    }
  }
  *(_DWORD *)((char *)&unk_16D4FDB30 + v3) = v8;
  v9 = (int)dword_16D4FD60C[v3 / 4 + 321];
  if ( (_DWORD)v9 != -1 )
  {
    if ( !dword_1915FDF00 )
      goto LABEL_25;
    if ( (_DWORD)v9 == 67 )
    {
      v10 = v3 + 20LL * *(int *)((char *)&unk_16D4FD604 + v3);
      if ( !*(_DWORD *)((char *)&dword_16D4FD60C[2] + v10) )
        goto LABEL_25;
      *(_DWORD *)((char *)&dword_16D4FD60C[2] + v10) = 0;
      v11 = 68;
      *(_DWORD *)((char *)&unk_16D4FDB1C + v3) = dword_1839C5DB0 - *(_DWORD *)((char *)&unk_16D4FDB1C + v3) - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % dword_1839ABEE4;
      if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
        v11 = sub_1400BC440();
      v12 = rand();
      v13 = v3 + 20LL * *(int *)((char *)&unk_16D4FD604 + v3);
      v14 = 67;
    }
    else
    {
      if ( (_DWORD)v9 != 68
        || (v15 = v3 + 20LL * *(int *)((char *)&unk_16D4FD604 + v3), *(_DWORD *)((char *)&dword_16D4FD60C[2] + v15)) )
      {
LABEL_25:
        v16 = -1;
        v17 = *(_DWORD *)((char *)&unk_16D4FD604 + v3);
        if ( v17 >= *(_DWORD *)((char *)&unk_16D4FD608 + v3) - 1 )
        {
          dword_16D4FD60C[v3 / 4 + 321] = v9;
          dword_16D4FD60C[v3 / 4 + 323] = -1;
          v18 = rand() % dword_1839ABEE4;
          if ( dword_1915FDF00 )
            v18 = ((_DWORD)v9 == 67) + 67;
          if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
            v18 = sub_1400BC440();
          v19 = rand();
          sub_140004600(a1, v9, dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD604 + v3) + 2 + v3 / 4], v18, v19 & 1);
          v17 = *(_DWORD *)((char *)&unk_16D4FD604 + v3);
        }
        v20 = 1584 * v9;
        v184 = *(_DWORD *)((char *)&unk_16D4FDB1C + v3);
        v177 = v9;
        v178 = 1584 * v9;
        v21 = 1584 * v9 + 28LL * v184;
        if ( dword_16D4FD60C[5 * v17 + 2 + v3 / 4] )
        {
          v22 = *(float *)((char *)&unk_1839ABF34 + v21);
          v23 = *(float *)((char *)&unk_1839ABF38 + v21);
          v24 = *(float *)((char *)&unk_1839ABF3C + v21);
          v25 = *(float *)((char *)&unk_1839ABF28 + v21);
          v26 = *(float *)((char *)&unk_1839ABF30 + v21);
        }
        else
        {
          v22 = *(float *)((char *)&unk_1839ABF28 + v21);
          v23 = *(float *)((char *)&unk_1839ABF2C + v21);
          v24 = *(float *)((char *)&unk_1839ABF30 + v21);
          v25 = *(float *)((char *)&unk_1839ABF34 + v21);
          v26 = *(float *)((char *)&unk_1839ABF3C + v21);
        }
        v180 = v25;
        v182 = dword_16D4FD60C[5 * v17 + 9 + v3 / 4];
        if ( !*(_DWORD *)((char *)&unk_16D4FD600 + v3)
          && *(_DWORD *)((char *)&unk_16D4FDB20 + v3) == v184
          && (rand() & 0x7F) == 0 )
        {
          if ( !dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD604 + v3) + 9 + v3 / 4] && !(unsigned __int8)rand() )
          {
            v27 = (rand() & 1) == 0;
            v28 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3);
            if ( v27 )
              v29 = v28 - 1;
            else
              v29 = v28 + 1;
            *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v29;
          }
          v30 = *(int *)((char *)&unk_16D4FD604 + v3);
          v31 = v3 + 20 * v30;
          if ( *(_DWORD *)((char *)&dword_16D4FD60C[9] + v31) == -1 )
          {
            v32 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3);
            v33 = v32 - 1;
            if ( dword_16D4FD60C[5 * v30 + 2 + v3 / 4] )
              v33 = v32 + 1;
            *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v33;
          }
          if ( *(_DWORD *)((char *)&dword_16D4FD60C[9] + v31) == 1 )
          {
            v34 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3);
            v35 = v34 + 1;
            if ( dword_16D4FD60C[5 * v30 + 2 + v3 / 4] )
              v35 = v34 - 1;
            *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v35;
          }
          v36 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3);
          if ( dword_16D4FD60C[5 * v30 + 2 + v3 / 4] )
          {
            if ( v36 < 1 )
            {
              v36 = 1;
              *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = 1;
            }
            v38 = *(_DWORD *)((char *)&unk_1839ABF18 + v20) - 1;
          }
          else
          {
            v37 = *(_DWORD *)((char *)&unk_1839ABF18 + v20);
            if ( v36 < v37 )
            {
              v36 = *(_DWORD *)((char *)&unk_1839ABF18 + v20);
              *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v37;
            }
            v38 = *(_DWORD *)((char *)&unk_1839ABF20 + v20) - 2;
          }
          if ( v36 > v38 )
            *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v38;
        }
        v39 = *(int *)((char *)&unk_16D4FDB20 + v3);
        if ( (_DWORD)v39 != v184 )
        {
          v40 = *(float *)((char *)&unk_16D4FDB2C + v3);
          v41 = (float)(3.0 - (float)(v40 + v40)) * (float)(v40 * v40);
          v42 = fminf(
                  fsqrt(
                    (float)((float)(*(float *)((char *)&unk_16D4FD59C + v3) * *(float *)((char *)&unk_16D4FD59C + v3))
                          + (float)(*(float *)((char *)&unk_16D4FD5A0 + v3) * *(float *)((char *)&unk_16D4FD5A0 + v3)))
                  + (float)(*(float *)((char *)&unk_16D4FD5A4 + v3) * *(float *)((char *)&unk_16D4FD5A4 + v3)))
                * 0.125,
                  0.0083333338)
              + v40;
          *(float *)((char *)&unk_16D4FDB2C + v3) = v42;
          if ( v42 > 1.0 )
          {
            *(_DWORD *)((char *)&unk_16D4FDB1C + v3) = v39;
            *(_DWORD *)((char *)&unk_16D4FDB2C + v3) = 0;
          }
          v43 = v20 + 28 * v39;
          v22 = v22 + (float)((float)(*(float *)((char *)&unk_1839ABF28 + v43) - v22) * v41);
          v23 = v23 + (float)((float)(*(float *)((char *)&unk_1839ABF28 + v43 + 4) - v23) * v41);
          v24 = v24 + (float)((float)(*(float *)((char *)&unk_1839ABF28 + v43 + 8) - v24) * v41);
        }
        v44 = *(int *)((char *)&unk_16D4FD604 + v3);
        v45 = *(float *)((char *)dword_1839AC0E4 + v20);
        v46 = *(float *)((char *)dword_1839AC0E8 + v20);
        v47 = *(float *)((char *)dword_1839AC0EC + v20);
        if ( dword_16D4FD60C[5 * v44 + 2 + v3 / 4] )
        {
          v45 = -v45;
          v46 = -v46;
          v47 = -v47;
        }
        v48 = *(float *)((char *)&unk_16D4FD598 + v3);
        v49 = *(float *)((char *)&unk_16D4FD590 + v3);
        v50 = *(float *)((char *)&unk_16D4FD594 + v3);
        v51 = fmaxf(
                10.0
              - (float)(fabs(
                          (float)((float)((float)(v23 - v50) * *(float *)((char *)&unk_1839AC0F4 + v20))
                                + (float)((float)(v22 - v49) * *(float *)((char *)&unk_1839AC0F0 + v20)))
                        + (float)((float)(v24 - v48) * *(float *)((char *)&unk_1839AC0F8 + v20)))
                      * 0.25),
                0.0);
        v52 = (float)((float)((float)(v46 * v51) + v50) - v23) * v46;
        v53 = *(float *)((char *)&unk_16D4FD5A8 + v3);
        v54 = (float)(v52 + (float)((float)((float)((float)(v45 * v51) + v49) - v22) * v45))
            + (float)((float)((float)((float)(v47 * v51) + v48) - v24) * v47);
        v55 = atan2f((float)((float)(v54 * v47) + v24) - v48, (float)((float)(v54 * v45) + v22) - v49);
        if ( (float)(v53 - v55) >= 3.14159265359 )
          v55 = v55 + 6.28318530718;
        if ( (float)(v55 - v53) >= 3.14159265359 )
          v53 = v53 + 6.28318530718;
        v56 = v55 - v53;
        if ( v56 >= -0.7853981633975 )
        {
          if ( v56 > 0.7853981633975 )
            v56 = 0.78539819;
        }
        else
        {
          v56 = -0.78539819;
        }
        v57 = *(float *)((char *)&unk_16D4FD5D0 + v3);
        v58 = 0.0625;
        v59 = fmaxf(v56 - v57, -0.0625);
        if ( v59 <= 0.0625 )
          v58 = v59;
        v60 = *(_DWORD *)((char *)&unk_16D4FDB1C + v3);
        *(float *)((char *)&unk_16D4FD5D0 + v3) = v57 + v58;
        v61 = (int)dword_16D4FD60C[5 * v44 + 5 + v3 / 4];
        *(_DWORD *)((char *)&unk_16D4FDB24 + v3) = v60;
        v62 = rand();
        v63 = *(int *)((char *)&unk_16D4FD604 + v3);
        v64 = v62 & 1;
        v65 = v3 + 20 * (v63 + 1);
        if ( *(_DWORD *)((char *)&dword_16D4FD60C[4] + v65) == 1 )
        {
          if ( *(_DWORD *)((char *)&dword_16D4FD60C[2] + v65) )
            v66 = v64 + 1;
          else
            v66 = *((_DWORD *)&unk_1839ABF20 + 396 * v61) - v64 - 2;
          *(_DWORD *)((char *)&unk_16D4FDB24 + v3) = v66;
        }
        if ( *(_DWORD *)((char *)&dword_16D4FD60C[4] + v65) == -1 )
        {
          v67 = *((_DWORD *)&unk_1839ABF18 + 396 * v61);
          if ( *(_DWORD *)((char *)&dword_16D4FD60C[2] + v65) )
            v68 = v67 - v64 - 1;
          else
            v68 = v64 + v67;
          *(_DWORD *)((char *)&unk_16D4FDB24 + v3) = v68;
        }
        v69 = (__m128)*(unsigned int *)((char *)&unk_16D4FD5A8 + v3);
        *(double *)v69.m128_u64 = _libm_sse2_sincosf_();
        v179 = v69.m128_f32[0];
        v70 = v3 + 20 * v63;
        v71 = *(_DWORD *)((char *)dword_16D4FD60C + v70);
        v72 = v69.m128_f32[0];
        v73 = _mm_shuffle_ps(v69, v69, 1).m128_f32[0];
        v74 = dword_1839ABF0C[396 * v177 + (*(int *)((char *)&dword_16D4FD60C[2] + v70) ^ 1LL)];
        v75 = (float)((float)(v26 - (float)((float)(v69.m128_f32[0] * 4.0) + *(float *)((char *)&unk_16D4FD598 + v3)))
                    * v47)
            + (float)((float)(v180 - (float)((float)(v73 * 4.0) + *(float *)((char *)&unk_16D4FD590 + v3))) * v45);
        v76 = v71 == dword_183989F00[34 * v74];
        v77 = v76;
        if ( v71 == dword_183989F04[34 * v74] )
        {
          v76 = 2;
          v77 = 2;
        }
        if ( v71 == dword_183989F08[34 * v74] )
        {
          v76 = 3;
          v77 = 3;
        }
        if ( v75 < 1.0 )
        {
          dword_16D4FD60C[v3 / 4 + 323] = v74;
          dword_16D4FD60C[v3 / 4 + 321] = -1;
        }
        v78 = *(_DWORD *)((char *)&unk_16D4FD600 + v3);
        v79 = 0.26666668;
        *(_DWORD *)((char *)&unk_16D4FD5D4 + v3) = 1049135241;
        if ( v78 && (v75 > 40.0 || !*(_DWORD *)((char *)&dword_16D4FD60C[4] + v65)) )
          v79 = (float)(8 * dword_1915FD9E4 + 16) * 0.016666668;
        v80 = 0;
        v81 = fmaxf((float)(v75 - 4.0) * 0.0083333338, 0.0);
        v82 = v79 + (float)((float)(a1 & 7) * 0.0083333338);
        if ( v75 < 6.0 )
          v81 = 0.0;
        if ( !v78 )
        {
          v83 = 34 * v74;
          v84 = v182 == -1 ? dword_183989F44[v76 + v83] < 2 : dword_183989F34[v77 + v83] < 2;
          if ( v84 && v82 > v81 )
            v82 = v81;
        }
        *(float *)((char *)&unk_16D4FD5D4 + v3) = v82;
        if ( v75 < 32.0 )
        {
          v85 = *(unsigned int *)((char *)dword_16D4FD60C + v65);
          dword_16D4ED520 = 0;
          sub_1400E52A0(v85, v77);
          if ( dword_16D4ED520 > 0 )
          {
            v86 = *(int *)((char *)&dword_16D4FD60C[2] + v65);
            v87 = dword_16D4ED524;
            v88 = (unsigned int)dword_16D4ED520;
            do
            {
              v89 = *v87;
              if ( (_DWORD)v89 != a1 )
              {
                v90 = 1532 * v89;
                v91 = *((_DWORD *)&unk_16D4FDB54 + 383 * v89);
                if ( _bittest(&v91, *(_DWORD *)((char *)&unk_16D4FDB24 + v3)) )
                {
                  if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
                    v81 = fmaxf(v81, 0.2);
                  if ( *(float *)&dword_16D4FDB4C[383 * *v87 + v86] < 12.0
                    && fsqrt(
                         (float)((float)(*(float *)((char *)&unk_16D4FD59C + v90)
                                       * *(float *)((char *)&unk_16D4FD59C + v90))
                               + (float)(*(float *)((char *)&unk_16D4FD5A0 + v90)
                                       * *(float *)((char *)&unk_16D4FD5A0 + v90)))
                       + (float)(*(float *)((char *)&unk_16D4FD5A4 + v90) * *(float *)((char *)&unk_16D4FD5A4 + v90))) < 0.06666667
                    && v82 > v81 )
                  {
                    *(float *)((char *)&unk_16D4FD5D4 + v3) = v81;
                    v82 = v81;
                    v80 = 1;
                  }
                }
              }
              ++v87;
              --v88;
            }
            while ( v88 );
            v20 = v178;
          }
        }
        v92 = *(float *)((char *)&unk_16D4FD594 + v3);
        v93 = 0;
        v94 = (float)(v73 * 12.0) + *(float *)((char *)&unk_16D4FD590 + v3);
        v95 = (float)(v72 * 12.0) + *(float *)((char *)&unk_16D4FD598 + v3);
        if ( dword_1839ABEE4 > 0 )
        {
          v96 = (float *)&unk_1839AC108;
          do
          {
            if ( v93 != *(_DWORD *)((char *)&unk_16D4FDB34 + v3)
              && v94 >= *(v96 - 3)
              && v94 <= *v96
              && v95 >= *(v96 - 1)
              && v95 <= v96[2]
              && v92 >= *(v96 - 2)
              && v92 <= v96[1] )
            {
              v16 = v93;
            }
            ++v93;
            v96 += 396;
          }
          while ( v93 < dword_1839ABEE4 );
        }
        v97 = *(_DWORD *)((char *)&unk_16D4FDB34 + v3);
        if ( v97 != -1 )
        {
          v98 = sub_140004370(
                  a1,
                  v97,
                  *(_DWORD *)((char *)&unk_16D4FDB54 + v3) | (1 << *(_DWORD *)((char *)&unk_16D4FDB20 + v3)),
                  *(float *)((char *)&unk_16D4FDB3C + v3),
                  (float)((float)(v73 * *(float *)((char *)dword_1839AC0E4 + v20))
                        + (float)(v72 * *(float *)((char *)dword_1839AC0EC + v20))) < 0.0);
          if ( v78 )
            v98 = fmaxf(v98, 0.2);
          if ( v82 > v98 )
          {
            *(float *)((char *)&unk_16D4FD5D4 + v3) = v98;
            v82 = v98;
            v80 = 1;
          }
        }
        if ( v16 == -1 )
          goto LABEL_146;
        v99 = 396LL * v16;
        v100 = *(float *)&dword_1839AC0E4[v99];
        v101 = *(float *)&dword_1839AC0E4[v99 + 2];
        v102 = *(float *)&dword_1839AC0E4[v99 + 1];
        v103 = (float)(v100 * v73) + (float)(v101 * v179);
        v104 = (float *)((char *)&unk_183989EF0 + 136 * dword_1839ABF0C[v99]);
        if ( v103 >= 0.0 )
        {
          v105 = 0;
          if ( v103 > 0.0 )
          {
            v106 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v3) - v104[1]) * v102)
                         + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v3) - *v104) * v100))
                 + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v3) - v104[2]) * v101);
            v107 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v3) - v104[1]) * v102)
                         + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v3) - *v104) * v100))
                 + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v3) - v104[2]) * v101);
            if ( v106 > v107 )
              goto LABEL_139;
            goto LABEL_138;
          }
        }
        else
        {
          v105 = 1;
        }
        v106 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v3) - v104[1]) * v102)
                     + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v3) - *v104) * v100))
             + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v3) - v104[2]) * v101);
        v107 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v3) - v104[1]) * v102)
                     + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v3) - *v104) * v100))
             + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v3) - v104[2]) * v101);
        if ( v106 < v107 )
        {
LABEL_139:
          v108 = sub_140004370(a1, v16, 1 << *(_DWORD *)((char *)&unk_16D4FDB20 + v3), v106, v105);
          if ( v78 )
            v108 = fmaxf(v108, 0.2);
          if ( v82 > v108 )
          {
            *(float *)((char *)&unk_16D4FD5D4 + v3) = v108;
            v82 = v108;
            v80 = 1;
          }
LABEL_146:
          if ( v78 )
          {
            if ( v80 && v82 < 0.30000001 && *(_DWORD *)((char *)&unk_16D4FDB20 + v3) == v184 )
            {
              v109 = 2 * (rand() & 1) - 1;
              v110 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3) + v109 < 0;
              v111 = *(_DWORD *)((char *)&unk_16D4FDB20 + v3) + v109;
              *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v111;
              if ( v110 )
              {
                v111 = 0;
                *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = 0;
              }
              v112 = *(_DWORD *)((char *)&unk_1839ABF20 + v20) - 1;
              if ( v111 > v112 )
                *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v112;
            }
            if ( *(float *)((char *)&unk_16D4FD5D4 + v3) < 0.13333334 )
              *(_DWORD *)((char *)&unk_16D4FD5D4 + v3) = 1040746633;
          }
          return;
        }
LABEL_138:
        v106 = v107;
        goto LABEL_139;
      }
      *(_DWORD *)((char *)&dword_16D4FD60C[2] + v15) = 1;
      v11 = 67;
      *(_DWORD *)((char *)&unk_16D4FDB1C + v3) = dword_1839C63E0 - *(_DWORD *)((char *)&unk_16D4FDB1C + v3) - 1;
      if ( (rand() & 1) == 0 )
        v11 = rand() % dword_1839ABEE4;
      if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
        v11 = sub_1400BC440();
      v12 = rand();
      v13 = v3 + 20LL * *(int *)((char *)&unk_16D4FD604 + v3);
      v14 = 68;
    }
    sub_140004600(a1, v14, *(_DWORD *)((char *)&dword_16D4FD60C[2] + v13), v11, v12 & 1);
    goto LABEL_25;
  }
  if ( dword_16D4FD60C[v3 / 4 + 323] != -1 )
  {
    v113 = *(int *)((char *)&unk_16D4FD604 + v3);
    v114 = (int)dword_16D4FD60C[5 * v113 + v3 / 4];
    v115 = v3 + 20 * (v113 + 1);
    v116 = *(int *)((char *)dword_16D4FD60C + v115);
    v117 = dword_16D4FD60C[5 * v113 + 2 + v3 / 4];
    v118 = 396 * v114;
    v119 = 1584 * v114 + 28LL * *(int *)((char *)&unk_16D4FDB1C + v3);
    if ( v117 )
    {
      v120 = *(float *)((char *)&unk_1839ABF28 + v119);
      v121 = *(float *)((char *)&unk_1839ABF2C + v119);
      v122 = *(float *)((char *)&unk_1839ABF30 + v119);
    }
    else
    {
      v120 = *(float *)((char *)&unk_1839ABF34 + v119);
      v121 = *(float *)((char *)&unk_1839ABF38 + v119);
      v122 = *(float *)((char *)&unk_1839ABF3C + v119);
    }
    v123 = *(int *)((char *)&unk_16D4FDB24 + v3);
    v124 = 1584 * v116 + 28 * v123;
    if ( *(_DWORD *)((char *)&dword_16D4FD60C[2] + v115) )
    {
      v125 = *(float *)((char *)&unk_1839ABF34 + v124);
      v126 = *(float *)((char *)&unk_1839ABF38 + v124);
      v127 = *(float *)((char *)&unk_1839ABF3C + v124);
    }
    else
    {
      v125 = *(float *)((char *)&unk_1839ABF28 + v124);
      v126 = *(float *)((char *)&unk_1839ABF2C + v124);
      v127 = *(float *)((char *)&unk_1839ABF30 + v124);
    }
    v128 = *(float *)&dword_1839AC0E8[v118];
    v129 = *(float *)&dword_1839AC0E4[v118];
    v130 = v125 - v120;
    v131 = *(float *)&dword_1839AC0EC[v118];
    v181 = v126;
    v132 = v127 - v122;
    v133 = fabs(
             (float)((float)((float)(v126 - v121) * v128) + (float)((float)(v125 - v120) * v129))
           + (float)((float)(v127 - v122) * v131));
    if ( fabs(
           (float)((float)(v128 * *(float *)&dword_1839AC0E8[396 * v116])
                 + (float)(v129 * *(float *)&dword_1839AC0E4[396 * v116]))
         + (float)(v131 * *(float *)&dword_1839AC0EC[396 * v116])) > 0.5 )
      v133 = v133 * 0.5;
    if ( v117 )
    {
      v137 = -v133;
      v134 = v137 * v129;
      v135 = v137 * v128;
      v136 = v137 * v131;
    }
    else
    {
      v134 = v129 * v133;
      v135 = v128 * v133;
      v136 = v131 * v133;
    }
    v138 = v136 + v122;
    v139 = v135 + v121;
    v140 = v134 + v120;
    v141 = fsqrt((float)(v132 * v132) + (float)(v130 * v130));
    v183 = v141;
    if ( v141 == 0.0 )
    {
      v142 = 0.0;
      v143 = 0.0;
    }
    else
    {
      v142 = v130 * (float)(1.0 / v141);
      v143 = v132 * (float)(1.0 / v141);
    }
    v144 = (__m128)*(unsigned int *)((char *)&unk_16D4FD5A8 + v3);
    *(double *)v144.m128_u64 = _libm_sse2_sincosf_();
    v145 = v144.m128_f32[0];
    v146 = *(float *)((char *)&unk_16D4FD5E0 + v3) + 4.0;
    v147 = *(float *)((char *)&unk_16D4FD590 + v3);
    v148 = *(float *)((char *)&unk_16D4FD598 + v3);
    v149 = (float)(_mm_shuffle_ps(v144, v144, 1).m128_f32[0] * v146) + v147;
    v150 = (float)(v145 * v146) + v148;
    if ( v183 <= 0.000015258789 )
      v151 = 1.0;
    else
      v151 = (float)((float)((float)(v150 - v122) * v143) + (float)((float)(v149 - v120) * v142)) / v183;
    v152 = fmaxf(v151 + 0.125, 0.0);
    if ( v152 > 1.0 )
      v152 = 1.0;
    v153 = (float)((float)((float)((float)((float)(v140 + v140) * (float)(1.0 - v152)) + (float)(v125 * v152)) * v152)
                 + (float)((float)((float)(1.0 - v152) * v120) * (float)(1.0 - v152)))
         - v147;
    v154 = (float)((float)((float)((float)(v139 + v139) * (float)(1.0 - v152)) + (float)(v181 * v152)) * v152)
         + (float)((float)(v121 * (float)(1.0 - v152)) * (float)(1.0 - v152));
    v155 = (float)((float)((float)((float)((float)(v138 + v138) * (float)(1.0 - v152)) + (float)(v127 * v152)) * v152)
                 + (float)((float)(v122 * (float)(1.0 - v152)) * (float)(1.0 - v152)))
         - v148;
    if ( fsqrt(
           (float)((float)((float)(v154 - *(float *)((char *)&unk_16D4FD594 + v3))
                         * (float)(v154 - *(float *)((char *)&unk_16D4FD594 + v3)))
                 + (float)(v153 * v153))
         + (float)(v155 * v155)) > 0.000015258789 )
      atan2f(v155, v153);
    v156 = sub_140006DC0();
    v157 = *(float *)&v156;
    if ( *(float *)&v156 >= -0.981747704246875 )
    {
      if ( *(float *)&v156 > 0.981747704246875 )
        v157 = 0.98174769;
    }
    else
    {
      v157 = -0.98174769;
    }
    v158 = 0.25;
    v159 = *(float *)((char *)&unk_16D4FD5D0 + v3);
    v160 = fmaxf(v157 - v159, -0.25);
    if ( v160 <= 0.25 )
      v158 = v160;
    v161 = 0.13333334;
    *(_DWORD *)((char *)&unk_16D4FD5D4 + v3) = 1040746633;
    *(float *)((char *)&unk_16D4FD5D0 + v3) = v159 + v158;
    if ( !*(_DWORD *)((char *)&dword_16D4FD60C[4] + v115) )
    {
      v161 = 0.26666668;
      if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
      {
        if ( dword_19154118C == 6 )
          v161 = (float)(4 * dword_1915FD9E4 + 16) * 0.016666668;
        else
          v161 = 0.40000001;
      }
    }
    v162 = 0.5 - fabs(v158);
    v163 = v161;
    v164 = *(float *)&dword_1839AC0EC[396 * v116];
    *(float *)&v163 = (v162 + v162) * v163;
    v165 = *(float *)&dword_1839AC0E4[396 * v116];
    *(_DWORD *)((char *)&unk_16D4FD5D4 + v3) = LODWORD(v163);
    if ( *(_DWORD *)((char *)&dword_16D4FD60C[2] + v115) )
    {
      v165 = -v165;
      v164 = -v164;
    }
    if ( (float)((float)((float)(v127 - (float)((float)(v164 * 4.0) + *(float *)((char *)&unk_16D4FD598 + v3))) * v164)
               + (float)((float)(v125 - (float)((float)(v165 * 4.0) + *(float *)((char *)&unk_16D4FD590 + v3))) * v165)) < 1.0 )
    {
      if ( *(_DWORD *)((char *)&unk_16D4FD604 + v3) >= *(_DWORD *)((char *)&unk_16D4FD608 + v3) - 1 )
      {
        dword_16D4FD60C[v3 / 4 + 321] = v114;
        dword_16D4FD60C[v3 / 4 + 323] = -1;
        rand();
        v167 = ((_DWORD)v114 == 67) + 67;
        if ( *(_DWORD *)((char *)&unk_16D4FD600 + v3) )
          v167 = sub_1400BC440();
        if ( (unsigned int)(v114 - 67) > 1 )
        {
          v168 = rand();
          sub_140004600(
            a1,
            v114,
            dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD604 + v3) + 2 + v3 / 4],
            v167,
            v168 & 1);
        }
      }
      else
      {
        v166 = *(int *)((char *)&unk_16D4FD604 + v3);
        *(_DWORD *)((char *)&unk_16D4FD604 + v3) = v166 + 1;
        dword_16D4FD60C[v3 / 4 + 321] = dword_16D4FD60C[5 * v166 + 5 + v3 / 4];
        dword_16D4FD60C[v3 / 4 + 323] = -1;
        *(_DWORD *)((char *)&unk_16D4FDB1C + v3) = v123;
        *(_DWORD *)((char *)&unk_16D4FDB20 + v3) = v123;
      }
    }
    if ( (_DWORD)v116 != -1 )
    {
      v169 = *(float *)&dword_1839AC0E8[396 * v116];
      v170 = *(float *)&dword_1839AC0E4[396 * v116];
      v171 = *(float *)&dword_1839AC0EC[396 * v116];
      v172 = dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD604 + v3) + 7 + v3 / 4];
      v173 = (float *)((char *)&unk_183989EF0 + 136 * dword_1839ABF0C[396 * v116]);
      v174 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5E8 + v3) - v173[1]) * v169)
                   + (float)((float)(*(float *)((char *)&unk_16D4FD5E4 + v3) - *v173) * v170))
           + (float)((float)(*(float *)((char *)&unk_16D4FD5EC + v3) - v173[2]) * v171);
      v175 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v3) - v173[1]) * v169)
                   + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v3) - *v173) * v170))
           + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v3) - v173[2]) * v171);
      if ( v172 )
      {
        if ( v174 < v175 )
          goto LABEL_204;
      }
      else if ( v174 > v175 )
      {
        goto LABEL_204;
      }
      v174 = (float)((float)((float)(*(float *)((char *)&unk_16D4FD5F4 + v3) - v173[1]) * v169)
                   + (float)((float)(*(float *)((char *)&unk_16D4FD5F0 + v3) - *v173) * v170))
           + (float)((float)(*(float *)((char *)&unk_16D4FD5F8 + v3) - v173[2]) * v171);
LABEL_204:
      LOBYTE(v1) = v172 != 0;
      v176 = sub_140004370(a1, v116, 1 << *(_DWORD *)((char *)&unk_16D4FDB24 + v3), v174, v1);
      if ( v176 < *(float *)((char *)&unk_16D4FD5D4 + v3) )
        *(float *)((char *)&unk_16D4FD5D4 + v3) = v176;
    }
  }
}

