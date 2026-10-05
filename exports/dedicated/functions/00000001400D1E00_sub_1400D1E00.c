/* Address: 0x1400d1e00 | Name: sub_1400D1E00 | Size: 4840 bytes */
__int64 __fastcall sub_1400D1E00(int a1, float a2, float a3, int a4)
{
  int v4; // r12d
  int v5; // ebx
  float v6; // xmm11_4
  __int64 v8; // r15
  float v9; // xmm14_4
  __int64 v10; // rsi
  int v11; // r10d
  __int64 v12; // r8
  float *v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rdi
  int v17; // eax
  float v18; // xmm2_4
  int v19; // xmm1_4
  float v20; // xmm2_4
  int v21; // xmm1_4
  __int64 v22; // rcx
  float v23; // xmm2_4
  int v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm2_4
  int v27; // xmm1_4
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  int *v31; // r9
  __int64 v32; // r10
  float v33; // xmm2_4
  int v34; // xmm1_4
  int v35; // eax
  __int64 v36; // rdi
  int *v37; // rbx
  __int64 result; // rax
  __int64 v39; // rbx
  __int64 v40; // r13
  int v41; // xmm10_4
  float *v42; // rbp
  int v43; // r14d
  float v44; // xmm3_4
  float v45; // xmm12_4
  int v46; // r10d
  int v47; // esi
  int v48; // edx
  __int64 v49; // rdi
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm6_4
  float *v53; // rcx
  int v54; // r8d
  float v55; // xmm7_4
  float v56; // xmm1_4
  int v57; // eax
  float v58; // xmm9_4
  float v59; // xmm1_4
  int v60; // r9d
  float v61; // xmm8_4
  float v62; // xmm1_4
  int v63; // eax
  float v64; // xmm7_4
  float v65; // xmm1_4
  float *v66; // rax
  int v67; // ecx
  float v68; // xmm4_4
  float v69; // xmm1_4
  int v70; // r8d
  __int64 v71; // rdx
  __int64 v72; // r9
  int v73; // r11d
  float v74; // xmm10_4
  float v75; // xmm11_4
  float v76; // xmm8_4
  float v77; // xmm4_4
  float v78; // xmm9_4
  float v79; // xmm7_4
  float v80; // xmm0_4
  float *v81; // rax
  float v82; // xmm2_4
  float v83; // xmm8_4
  float v84; // xmm4_4
  float v85; // xmm11_4
  float v86; // xmm9_4
  float v87; // xmm7_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  float *v90; // rax
  float v91; // xmm5_4
  float v92; // xmm6_4
  float v93; // xmm3_4
  float v94; // xmm9_4
  float v95; // xmm10_4
  float v96; // xmm8_4
  float v97; // xmm0_4
  float v98; // xmm11_4
  float v99; // xmm9_4
  float v100; // xmm5_4
  float v101; // xmm6_4
  float v102; // xmm10_4
  float v103; // xmm8_4
  float v104; // xmm0_4
  float v105; // xmm10_4
  float v106; // xmm11_4
  float v107; // xmm9_4
  float v108; // xmm0_4
  float v109; // xmm2_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm2_4
  float v113; // xmm0_4
  float v114; // xmm2_4
  float v115; // xmm1_4
  float v116; // xmm6_4
  float v117; // xmm2_4
  float v118; // xmm2_4
  float v119; // xmm0_4
  int v120; // xmm1_4
  int v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm4_4
  int v124; // ecx
  float v125; // xmm2_4
  float v126; // xmm3_4
  float v127; // xmm1_4
  float v128; // xmm1_4
  float v129; // xmm7_4
  int v130; // ecx
  float v131; // xmm2_4
  float v132; // xmm3_4
  float v133; // xmm5_4
  float v134; // xmm6_4
  float v135; // xmm4_4
  float v136; // xmm1_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm0_4
  float v140; // xmm1_4
  float v141; // xmm2_4
  int v142; // edx
  __int64 v143; // rcx
  int v144; // r9d
  float v145; // xmm15_4
  float *v146; // r8
  float v147; // xmm6_4
  float *v148; // rdx
  float v149; // xmm2_4
  float v150; // xmm4_4
  float v151; // xmm3_4
  float v152; // xmm5_4
  int v153; // [rsp+60h] [rbp-138h]
  int v154; // [rsp+64h] [rbp-134h]
  __int64 v155; // [rsp+70h] [rbp-128h]
  __int64 v156; // [rsp+88h] [rbp-110h]
  int v157[8]; // [rsp+90h] [rbp-108h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = a2;
  v8 = 180288LL * a1;
  v9 = 0.0;
  v10 = a1;
  v156 = v8;
  v11 = *(int *)((char *)&dword_143DA6AEC + v8);
  if ( v11 < 4 )
  {
    if ( v11 <= 0 )
      goto LABEL_20;
    v16 = 0;
    goto LABEL_16;
  }
  v12 = 99776LL * a1;
  v13 = (float *)((char *)dword_143DA6AF0 + v8);
  v14 = ((unsigned int)(v11 - 4) >> 2) + 1;
  v15 = v14;
  v5 = 4 * v14;
  v16 = 4LL * v14;
  v17 = *(_DWORD *)((char *)&unk_14AA15320 + v12);
  do
  {
    v18 = v13[1];
    v19 = 1065353216;
    if ( v18 < 0.0 )
      v19 = 0x40000000;
    *(float *)((char *)&unk_14AA15328 + 20 * v17 + v12) = *v13;
    *(float *)((char *)&unk_14AA1532C + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v18;
    v20 = v13[5];
    *(float *)((char *)&unk_14AA15330 + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v13[2];
    dword_14AA15334[5 * *(int *)((char *)&unk_14AA15320 + v12) + (unsigned __int64)v12 / 4] = v19;
    v21 = 1065353216;
    v22 = *(int *)((char *)&unk_14AA15320 + v12);
    *(_DWORD *)((char *)&unk_14AA15320 + v12) = v22 + 1;
    if ( v20 < 0.0 )
      v21 = 0x40000000;
    dword_14AA15334[5 * v22 + 2 + (unsigned __int64)v12 / 4] = *((_DWORD *)v13 + 4);
    *(float *)((char *)&unk_14AA1532C + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v20;
    v23 = v13[9];
    *(float *)((char *)&unk_14AA15330 + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v13[6];
    dword_14AA15334[5 * *(int *)((char *)&unk_14AA15320 + v12) + (unsigned __int64)v12 / 4] = v21;
    v24 = 1065353216;
    v25 = *(int *)((char *)&unk_14AA15320 + v12);
    *(_DWORD *)((char *)&unk_14AA15320 + v12) = v25 + 1;
    if ( v23 < 0.0 )
      v24 = 0x40000000;
    dword_14AA15334[5 * v25 + 2 + (unsigned __int64)v12 / 4] = *((_DWORD *)v13 + 8);
    *(float *)((char *)&unk_14AA1532C + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v23;
    v26 = v13[13];
    *(float *)((char *)&unk_14AA15330 + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v13[10];
    dword_14AA15334[5 * *(int *)((char *)&unk_14AA15320 + v12) + (unsigned __int64)v12 / 4] = v24;
    v27 = 1065353216;
    v28 = *(int *)((char *)&unk_14AA15320 + v12);
    *(_DWORD *)((char *)&unk_14AA15320 + v12) = v28 + 1;
    if ( v26 < 0.0 )
      v27 = 0x40000000;
    dword_14AA15334[5 * v28 + 2 + (unsigned __int64)v12 / 4] = *((_DWORD *)v13 + 12);
    *(float *)((char *)&unk_14AA1532C + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v26;
    v29 = *((_DWORD *)v13 + 14);
    v13 += 16;
    *(_DWORD *)((char *)&unk_14AA15330 + 20 * *(int *)((char *)&unk_14AA15320 + v12) + v12) = v29;
    dword_14AA15334[5 * (*(_DWORD *)((char *)&unk_14AA15320 + v12))++ + (unsigned __int64)v12 / 4] = v27;
    v17 = *(_DWORD *)((char *)&unk_14AA15320 + v12);
    --v15;
  }
  while ( v15 );
  if ( v5 < v11 )
  {
LABEL_16:
    v30 = 99776 * v10;
    v31 = &dword_143DA6AF0[45072 * v10 + 4 * v16];
    v32 = (unsigned int)(v11 - v5);
    do
    {
      v33 = *((float *)v31 + 1);
      v34 = 1065353216;
      if ( v33 < 0.0 )
        v34 = 0x40000000;
      *(_DWORD *)((char *)&unk_14AA15328 + 20 * *(int *)((char *)&unk_14AA15320 + v30) + v30) = *v31;
      *(float *)((char *)&unk_14AA1532C + 20 * *(int *)((char *)&unk_14AA15320 + v30) + v30) = v33;
      v35 = v31[2];
      v31 += 4;
      *(_DWORD *)((char *)&unk_14AA15330 + 20 * *(int *)((char *)&unk_14AA15320 + v30) + v30) = v35;
      dword_14AA15334[5 * (*(_DWORD *)((char *)&unk_14AA15320 + v30))++ + (unsigned __int64)v30 / 4] = v34;
      --v32;
    }
    while ( v32 );
  }
LABEL_20:
  v36 = *(int *)((char *)&dword_143DA7AF0 + v8);
  if ( v36 > 0 )
  {
    v37 = (int *)((char *)&unk_143DA7AF8 + v8);
    do
    {
      sub_1400A6AA0(a1, 0, *v37, v37[1]);
      v37 += 3;
      --v36;
    }
    while ( v36 );
  }
  result = 99776 * v10;
  v39 = 99776 * v10;
  v154 = 0;
  v155 = 99776 * v10;
  dword_14AA15334[24944 * v10 + 316] = 8;
  *(_DWORD *)((char *)&unk_14AA15828 + result) = 0;
  *(_DWORD *)((char *)&unk_14AA1582C + result) = 1;
  *(_DWORD *)((char *)&unk_14AA15830 + result) = 2;
  *(_DWORD *)((char *)&unk_14AA15834 + result) = 3;
  *(_DWORD *)((char *)&unk_14AA15838 + result) = 4;
  *(_DWORD *)((char *)&unk_14AA1583C + result) = 5;
  *(_DWORD *)((char *)&unk_14AA15840 + result) = 6;
  *(_DWORD *)((char *)&unk_14AA15844 + result) = 7;
  if ( *(int *)((char *)&dword_143DD2508 + v8) > 0 )
  {
    v40 = 11268 * v10;
    *(float *)&v41 = 1.6 / (float)(v6 * v6);
    v42 = (float *)((char *)&unk_143DD2514 + v8);
    v153 = v41;
    while ( 1 )
    {
      v43 = *(int *)((char *)&dword_143DA6AEC + v8);
      v44 = 65536.0;
      v45 = 65536.0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      if ( v43 >= 4 )
      {
        v50 = *(v42 - 1);
        v51 = *v42;
        v52 = v42[1];
        v53 = (float *)((char *)dword_143DA6AF8 + v8);
        v49 = 4LL * (((unsigned int)(v43 - 4) >> 2) + 1);
        v54 = 2;
        do
        {
          v55 = v44;
          v56 = fsqrt(
                  (float)((float)((float)((float)(v51 - *(v53 - 1)) * (float)(v51 - *(v53 - 1))) * 16.0)
                        + (float)((float)(v50 - *(v53 - 2)) * (float)(v50 - *(v53 - 2))))
                + (float)((float)(v52 - *v53) * (float)(v52 - *v53)));
          if ( v56 < v44 )
            v44 = v56;
          v57 = v48;
          if ( v55 <= v56 )
            v57 = v46;
          v58 = v44;
          v59 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[3]) * (float)(v51 - v53[3])) * 16.0)
                        + (float)((float)(v50 - v53[2]) * (float)(v50 - v53[2])))
                + (float)((float)(v52 - v53[4]) * (float)(v52 - v53[4])));
          if ( v59 < v44 )
            v44 = v59;
          v60 = v54 - 1;
          if ( v58 <= v59 )
            v60 = v57;
          v61 = v44;
          v62 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[7]) * (float)(v51 - v53[7])) * 16.0)
                        + (float)((float)(v50 - v53[6]) * (float)(v50 - v53[6])))
                + (float)((float)(v52 - v53[8]) * (float)(v52 - v53[8])));
          if ( v62 < v44 )
            v44 = v62;
          v63 = v54;
          if ( v61 <= v62 )
            v63 = v60;
          v64 = v44;
          v65 = fsqrt(
                  (float)((float)((float)((float)(v51 - v53[11]) * (float)(v51 - v53[11])) * 16.0)
                        + (float)((float)(v50 - v53[10]) * (float)(v50 - v53[10])))
                + (float)((float)(v52 - v53[12]) * (float)(v52 - v53[12])));
          if ( v65 < v44 )
            v44 = v65;
          v46 = v54 + 1;
          if ( v64 <= v65 )
            v46 = v63;
          v53 += 16;
          v48 += 4;
          v54 += 4;
        }
        while ( v48 < v43 - 3 );
      }
      if ( v48 < v43 )
      {
        v66 = (float *)&dword_143DA6AF8[4 * v49 + 4 * v40];
        do
        {
          v67 = v46;
          v68 = v44;
          v69 = fsqrt(
                  (float)((float)((float)((float)(*v42 - *(v66 - 1)) * (float)(*v42 - *(v66 - 1))) * 16.0)
                        + (float)((float)(*(v42 - 1) - *(v66 - 2)) * (float)(*(v42 - 1) - *(v66 - 2))))
                + (float)((float)(v42[1] - *v66) * (float)(v42[1] - *v66)));
          if ( v69 < v44 )
            v44 = v69;
          v46 = v48;
          if ( v68 <= v69 )
            v46 = v67;
          v66 += 4;
          ++v48;
        }
        while ( v48 < v43 );
      }
      v70 = 0;
      v71 = 0;
      if ( v43 >= 4 )
        break;
      if ( v43 > 0 )
      {
        v72 = v46;
        goto LABEL_74;
      }
LABEL_81:
      v109 = *(float *)&dword_143DA6AF0[4 * v40 + 4 * v47] - *(v42 - 1);
      v110 = *(float *)&dword_143DA6AF0[4 * v40 + 1 + 4 * v47] - *v42;
      v111 = *(float *)&dword_143DA6AF0[4 * v40 + 2 + 4 * v47] - v42[1];
      v112 = (float)(v109 * v109) + (float)(v110 * v110);
      v113 = *(float *)&dword_143DA6AF0[4 * v40 + 1 + 4 * v46] - *v42;
      v114 = v112 + (float)(v111 * v111);
      v115 = *(float *)&dword_143DA6AF0[4 * v40 + 2 + 4 * v46] - v42[1];
      v116 = fsqrt(v114);
      v117 = *(float *)&dword_143DA6AF0[4 * v40 + 4 * v46] - *(v42 - 1);
      v118 = fsqrt((float)((float)(v117 * v117) + (float)(v113 * v113)) + (float)(v115 * v115));
      v119 = 1.0 / (float)(v118 + v116);
      *(float *)&v120 = v119 * v118;
      v121 = 1059061760;
      v157[1] = v120;
      *(float *)v157 = v119 * v116;
      v122 = -0.03125;
      if ( a1 )
      {
        if ( (unsigned int)(a1 - 4) <= 1 )
        {
          v121 = 1061158912;
          v122 = 0.0;
        }
      }
      else
      {
        v122 = -0.0625;
        v121 = 1056964608;
      }
      sub_1400A6D10(a1, 0, v46, v47, v157, SLODWORD(v6), SLODWORD(a3), v41, v122, 1048576000, 1056964608, v121);
      v8 = v156;
      v42 += 5;
      *(_DWORD *)((char *)&unk_14AA2CB4C + 80 * *(int *)((char *)&unk_14AA2CB58 + v39) + v39) = a4;
      result = (unsigned int)(v154 + 1);
      v154 = result;
      if ( (int)result >= *(int *)((char *)&dword_143DD2508 + v156) )
        goto LABEL_86;
    }
    v72 = v46;
    v73 = 2;
    do
    {
      if ( v71 != v46 )
      {
        v74 = *(float *)&dword_143DA6AF0[4 * v71 + 4 * v40];
        v75 = *(float *)&dword_143DA6AF0[4 * v71 + 1 + 4 * v40];
        v76 = *(float *)&dword_143DA6AF0[4 * v46 + 4 * v40];
        v77 = *(float *)&dword_143DA6AF4[4 * v46 + 4 * v40];
        v78 = *(float *)&dword_143DA6AF0[4 * v71 + 2 + 4 * v40];
        v79 = *(float *)&dword_143DA6AF8[4 * v46 + 4 * v40];
        v80 = fsqrt(
                (float)((float)((float)((float)(*(v42 - 1) - v74) * (float)(*(v42 - 1) - v74))
                              + (float)((float)(*v42 - v75) * (float)(*v42 - v75)))
                      * 16.0)
              + (float)((float)(v42[1] - v78) * (float)(v42[1] - v78)));
        if ( (float)((float)((float)((float)(v75 - v77) * (float)(*v42 - v77))
                           + (float)((float)(v74 - v76) * (float)(*(v42 - 1) - v76)))
                   + (float)((float)(v78 - v79) * (float)(v42[1] - v79))) >= 0.0
          && v80 < v45 )
        {
          v47 = v70;
          v45 = v80;
        }
      }
      if ( v71 + 1 != v46 )
      {
        v81 = (float *)((char *)&unk_143DA6B00 + 16 * v71 + 16 * v40);
        v82 = *(v42 - 1);
        v83 = *(float *)&dword_143DA6AF0[4 * v46 + 4 * v40];
        v84 = *(float *)&dword_143DA6AF4[4 * v46 + 4 * v40];
        v85 = v81[1];
        v86 = v81[2];
        v87 = *(float *)&dword_143DA6AF8[4 * v46 + 4 * v40];
        v88 = fsqrt(
                (float)((float)((float)((float)(v82 - *v81) * (float)(v82 - *v81))
                              + (float)((float)(*v42 - v85) * (float)(*v42 - v85)))
                      * 16.0)
              + (float)((float)(v42[1] - v86) * (float)(v42[1] - v86)));
        if ( (float)((float)((float)((float)(v85 - v84) * (float)(*v42 - v84))
                           + (float)((float)(*v81 - v83) * (float)(v82 - v83)))
                   + (float)((float)(v86 - v87) * (float)(v42[1] - v87))) >= 0.0
          && v88 < v45 )
        {
          v47 = v73 - 1;
          v45 = v88;
        }
      }
      if ( v71 + 2 != v46 )
      {
        v89 = *(v42 - 1);
        v90 = (float *)((char *)&unk_143DA6B10 + 16 * v71 + 16 * v40);
        v91 = *(float *)&dword_143DA6AF0[4 * v46 + 4 * v40];
        v92 = *(float *)&dword_143DA6AF4[4 * v46 + 4 * v40];
        v93 = v89 - v91;
        v94 = v90[1];
        v95 = v90[2];
        v96 = *(float *)&dword_143DA6AF8[4 * v46 + 4 * v40];
        v97 = fsqrt(
                (float)((float)((float)((float)(*v42 - v94) * (float)(*v42 - v94))
                              + (float)((float)(v89 - *v90) * (float)(v89 - *v90)))
                      * 16.0)
              + (float)((float)(v42[1] - v95) * (float)(v42[1] - v95)));
        if ( (float)((float)((float)((float)(*v90 - v91) * v93) + (float)((float)(v94 - v92) * (float)(*v42 - v92)))
                   + (float)((float)(v95 - v96) * (float)(v42[1] - v96))) >= 0.0
          && v97 < v45 )
        {
          v47 = v73;
          v45 = v97;
        }
      }
      if ( v71 + 3 != v46 )
      {
        v98 = flt_143DA6B20[4 * v71 + 4 * v40];
        v99 = flt_143DA6B20[4 * v71 + 1 + 4 * v40];
        v100 = *(float *)&dword_143DA6AF0[4 * v46 + 4 * v40];
        v101 = *(float *)&dword_143DA6AF4[4 * v46 + 4 * v40];
        v102 = flt_143DA6B20[4 * v71 + 2 + 4 * v40];
        v103 = *(float *)&dword_143DA6AF8[4 * v46 + 4 * v40];
        v104 = fsqrt(
                 (float)((float)((float)((float)(*v42 - v99) * (float)(*v42 - v99))
                               + (float)((float)(*(v42 - 1) - v98) * (float)(*(v42 - 1) - v98)))
                       * 16.0)
               + (float)((float)(v42[1] - v102) * (float)(v42[1] - v102)));
        if ( (float)((float)((float)((float)(v98 - v100) * (float)(*(v42 - 1) - v100))
                           + (float)((float)(v99 - v101) * (float)(*v42 - v101)))
                   + (float)((float)(v102 - v103) * (float)(v42[1] - v103))) >= 0.0
          && v104 < v45 )
        {
          v47 = v73 + 1;
          v45 = v104;
        }
      }
      v71 += 4;
      v70 += 4;
      v73 += 4;
    }
    while ( v70 < v43 - 3 );
    v4 = 0;
    v39 = v155;
    if ( v70 < v43 )
    {
      do
      {
LABEL_74:
        if ( v71 != v72 )
        {
          v105 = *(float *)&dword_143DA6AF0[4 * v71 + 4 * v40];
          v106 = *(float *)&dword_143DA6AF0[4 * v71 + 1 + 4 * v40];
          v107 = *(float *)&dword_143DA6AF0[4 * v71 + 2 + 4 * v40];
          v108 = fsqrt(
                   (float)((float)((float)((float)(*(v42 - 1) - v105) * (float)(*(v42 - 1) - v105))
                                 + (float)((float)(*v42 - v106) * (float)(*v42 - v106)))
                         * 16.0)
                 + (float)((float)(v42[1] - v107) * (float)(v42[1] - v107)));
          if ( (float)((float)((float)((float)(v106 - *(float *)&dword_143DA6AF4[4 * v72 + 4 * v40])
                                     * (float)(*v42 - *(float *)&dword_143DA6AF4[4 * v72 + 4 * v40]))
                             + (float)((float)(v105 - *(float *)&dword_143DA6AF0[4 * v72 + 4 * v40])
                                     * (float)(*(v42 - 1) - *(float *)&dword_143DA6AF0[4 * v72 + 4 * v40])))
                     + (float)((float)(v107 - *(float *)&dword_143DA6AF8[4 * v72 + 4 * v40])
                             * (float)(v42[1] - *(float *)&dword_143DA6AF8[4 * v72 + 4 * v40]))) >= 0.0
            && v108 < v45 )
          {
            v47 = v70;
            v45 = v108;
          }
        }
        ++v71;
        ++v70;
      }
      while ( v70 < v43 );
      v39 = v155;
      v4 = 0;
    }
    v6 = a2;
    v41 = v153;
    goto LABEL_81;
  }
LABEL_86:
  v123 = 0.0;
  v124 = 0;
  v125 = 0.0;
  v126 = 0.0;
  v127 = 0.0;
  *(float *)((char *)&unk_14AA2D560 + v39) = fabs(
                                               *(float *)((char *)&unk_143DD2518 + v8)
                                             - *(float *)((char *)&dword_143DD2540 + v8));
  *(float *)((char *)&unk_14AA2D55C + v39) = fabs(
                                               *(float *)((char *)&dword_143DD2510 + v8)
                                             - *(float *)((char *)&dword_143DD2524 + v8));
  *(_QWORD *)((char *)&unk_14AA2D808 + v39) = 0;
  *(_DWORD *)((char *)&unk_14AA2D810 + v39) = 0;
  if ( *(int *)((char *)&unk_14AA15320 + v39) > 0 )
  {
    result = (__int64)&unk_14AA15330 + v39;
    do
    {
      if ( *(float *)(result - 4) >= 0.0 )
      {
        v128 = *(float *)(result + 4);
      }
      else
      {
        *(_DWORD *)(result + 4) = 1082130432;
        v128 = 4.0;
      }
      ++v124;
      v125 = (float)(v128 * *(float *)(result - 8)) + *(float *)((char *)&unk_14AA2D808 + v39);
      *(float *)((char *)&unk_14AA2D808 + v39) = v125;
      v126 = (float)(v128 * *(float *)(result - 4)) + *(float *)((char *)&unk_14AA2D80C + v39);
      *(float *)((char *)&unk_14AA2D80C + v39) = v126;
      v127 = (float)(v128 * *(float *)result) + *(float *)((char *)&unk_14AA2D810 + v39);
      *(float *)((char *)&unk_14AA2D810 + v39) = v127;
      v123 = v123 + *(float *)(result + 4);
      result += 20;
    }
    while ( v124 < *(_DWORD *)((char *)&unk_14AA15320 + v39) );
  }
  v129 = 0.0;
  v130 = 0;
  *(float *)((char *)&unk_14AA2D808 + v39) = v125 * (float)(1.0 / v123);
  v131 = 0.0;
  *(float *)((char *)&unk_14AA2D80C + v39) = v126 * (float)(1.0 / v123);
  v132 = 0.0;
  *(float *)((char *)&unk_14AA2D810 + v39) = v127 * (float)(1.0 / v123);
  *(_QWORD *)((char *)&unk_14AA2D820 + v39) = 0;
  *(_DWORD *)((char *)&unk_14AA2D828 + v39) = 0;
  if ( *(int *)((char *)&unk_14AA15320 + v39) > 0 )
  {
    v133 = *(float *)((char *)&unk_14AA2D824 + v39);
    v134 = *(float *)((char *)&unk_14AA2D828 + v39);
    result = (__int64)dword_14AA15334 + v39;
    v135 = 0.0;
    do
    {
      ++v130;
      v136 = (float)(*(float *)(result - 4) - *(float *)((char *)&unk_14AA2D810 + v39))
           * (float)(*(float *)(result - 4) - *(float *)((char *)&unk_14AA2D810 + v39));
      v137 = (float)(*(float *)(result - 8) - *(float *)((char *)&unk_14AA2D80C + v39))
           * (float)(*(float *)(result - 8) - *(float *)((char *)&unk_14AA2D80C + v39));
      v138 = (float)(*(float *)(result - 12) - *(float *)((char *)&unk_14AA2D808 + v39))
           * (float)(*(float *)(result - 12) - *(float *)((char *)&unk_14AA2D808 + v39));
      v135 = v135 + (float)((float)(v136 + v137) * *(float *)result);
      *(float *)((char *)&unk_14AA2D820 + v39) = v135;
      v133 = v133 + (float)((float)(v136 + v138) * *(float *)result);
      *(float *)((char *)&unk_14AA2D824 + v39) = v133;
      v134 = v134 + (float)((float)(v137 + v138) * *(float *)result);
      *(float *)((char *)&unk_14AA2D828 + v39) = v134;
      v129 = v129 + *(float *)result;
      result += 20;
    }
    while ( v130 < *(_DWORD *)((char *)&unk_14AA15320 + v39) );
    v131 = v133;
    v132 = v134;
  }
  v139 = (float)(1.0 / v129) * *(float *)((char *)&unk_14AA2D820 + v39);
  v140 = 0.0;
  *(float *)((char *)&unk_14AA2D824 + v39) = v131 * (float)(1.0 / v129);
  v141 = 0.0;
  *(float *)((char *)&unk_14AA2D820 + v39) = v139;
  *(float *)((char *)&unk_14AA2D828 + v39) = v132 * (float)(1.0 / v129);
  v142 = *(_DWORD *)((char *)&unk_14AA15320 + v39);
  if ( v142 > 0 )
  {
    v143 = (unsigned int)v142;
    result = (__int64)&unk_14AA15330 + v39;
    do
    {
      v9 = v9 + *(float *)(result - 8);
      v140 = v140 + *(float *)(result - 4);
      v141 = v141 + *(float *)result;
      result += 20;
      --v143;
    }
    while ( v143 );
  }
  v144 = 0;
  v145 = 1.0 / (float)v142;
  *(float *)((char *)&unk_14AA2D814 + v39) = (float)(v9 * v145) - *(float *)((char *)&unk_14AA2D808 + v39);
  *(float *)((char *)&unk_14AA2D818 + v39) = (float)(v140 * v145) - *(float *)((char *)&unk_14AA2D80C + v39);
  *(float *)((char *)&unk_14AA2D81C + v39) = (float)(v141 * v145) - *(float *)((char *)&unk_14AA2D810 + v39);
  if ( *(int *)((char *)&unk_14AA2CB58 + v39) > 0 )
  {
    v146 = (float *)((char *)&unk_14AA2CBA8 + v39);
    do
    {
      v147 = *(v146 - 15);
      ++v144;
      v148 = (float *)((char *)&unk_14AA15328 + 20 * *((int *)v146 - 18) + v39);
      result = v39 + 20LL * *((int *)v146 - 17);
      v149 = v148[1];
      v150 = v148[2];
      v151 = *(float *)((char *)&unk_14AA15328 + result + 4);
      v152 = *(float *)((char *)&unk_14AA15328 + result + 8);
      *(v146 - 2) = (float)((float)((float)(*(float *)((char *)&unk_14AA15328 + result) - *v148) * v147) + *v148)
                  - *(float *)((char *)&unk_14AA2D808 + v39);
      *(v146 - 1) = (float)((float)((float)(v151 - v149) * v147) + v149) - *(float *)((char *)&unk_14AA2D80C + v39);
      *v146 = (float)((float)((float)(v152 - v150) * v147) + v150) - *(float *)((char *)&unk_14AA2D810 + v39);
      v146 += 20;
    }
    while ( v144 < *(_DWORD *)((char *)&unk_14AA2CB58 + v39) );
  }
  if ( *(int *)((char *)&unk_14AA2D82C + v39) > 0 )
  {
    result = (__int64)&unk_14AA2D838 + v39;
    do
    {
      ++v4;
      *(float *)(result - 8) = *(float *)((char *)&unk_14AA2D814 + v39) + *(float *)(result - 8);
      *(float *)(result - 4) = *(float *)(result - 4) + *(float *)((char *)&unk_14AA2D818 + v39);
      *(float *)result = *(float *)((char *)&unk_14AA2D81C + v39) + *(float *)result;
      result += 28;
    }
    while ( v4 < *(_DWORD *)((char *)&unk_14AA2D82C + v39) );
  }
  return result;
}

