/* Address: 0x14014e9c0 | Name: sub_14014E9C0 | Size: 4322 bytes */
__int64 __fastcall sub_14014E9C0(int a1, float a2, float a3, unsigned int a4)
{
  int v4; // edi
  float v5; // xmm11_4
  int v6; // r14d
  __int64 v7; // r13
  float v8; // xmm14_4
  __int64 v9; // rbx
  int v10; // r10d
  __int64 v11; // r8
  char *v12; // r9
  unsigned int v13; // eax
  __int64 v14; // r11
  __int64 v15; // rsi
  unsigned int v16; // eax
  float v17; // xmm2_4
  unsigned int v18; // xmm1_4
  float v19; // xmm2_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm2_4
  unsigned int v23; // xmm1_4
  __int64 v24; // rcx
  float v25; // xmm2_4
  unsigned int v26; // xmm1_4
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int *v30; // r9
  __int64 v31; // r10
  float v32; // xmm2_4
  unsigned int v33; // xmm1_4
  unsigned int v34; // eax
  __int64 result; // rax
  __int64 v36; // rsi
  bool v37; // cc
  __int64 v38; // r12
  float v39; // xmm10_4
  float *v40; // rbp
  int v41; // r14d
  float v42; // xmm3_4
  float v43; // xmm12_4
  signed int v44; // r10d
  unsigned int v45; // edi
  signed int v46; // edx
  __int64 v47; // rbx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float *v51; // rcx
  int v52; // r8d
  float v53; // xmm7_4
  float v54; // xmm1_4
  signed int v55; // eax
  float v56; // xmm9_4
  float v57; // xmm1_4
  int v58; // r9d
  float v59; // xmm8_4
  float v60; // xmm1_4
  signed int v61; // eax
  float v62; // xmm7_4
  float v63; // xmm1_4
  float *v64; // rax
  signed int v65; // ecx
  float v66; // xmm4_4
  float v67; // xmm1_4
  signed int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // r11d
  float v72; // xmm11_4
  float v73; // xmm5_4
  float v74; // xmm8_4
  float v75; // xmm3_4
  float v76; // xmm10_4
  float v77; // xmm6_4
  float v78; // xmm0_4
  float *v79; // rax
  float v80; // xmm2_4
  float v81; // xmm8_4
  float v82; // xmm5_4
  float v83; // xmm3_4
  float v84; // xmm10_4
  float v85; // xmm6_4
  float v86; // xmm0_4
  float *v87; // rax
  float v88; // xmm4_4
  float v89; // xmm9_4
  float v90; // xmm5_4
  float v91; // xmm11_4
  float v92; // xmm6_4
  float v93; // xmm0_4
  float v94; // xmm8_4
  float v95; // xmm9_4
  float v96; // xmm4_4
  float v97; // xmm5_4
  float v98; // xmm11_4
  float v99; // xmm6_4
  float v100; // xmm0_4
  float v101; // xmm11_4
  float v102; // xmm5_4
  float v103; // xmm10_4
  float v104; // xmm0_4
  float v105; // xmm2_4
  float v106; // xmm0_4
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm1_4
  float v110; // xmm2_4
  float v111; // xmm0_4
  float v112; // xmm6_4
  float v113; // xmm2_4
  float v114; // xmm2_4
  float v115; // xmm0_4
  unsigned int v116; // xmm1_4
  unsigned int v117; // xmm2_4
  float v118; // xmm0_4
  float *v119; // rcx
  signed int v120; // edx
  signed int v121; // edx
  float v122; // xmm2_4
  float v123; // xmm3_4
  float v124; // xmm5_4
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm3_4
  float v128; // xmm1_4
  float v129; // xmm2_4
  signed int v130; // edx
  int v131; // xmm1_4
  float v132; // xmm2_4
  float v133; // xmm0_4
  float v134; // xmm0_4
  float v135; // [rsp+60h] [rbp-138h]
  int v136; // [rsp+64h] [rbp-134h]
  __int64 v137; // [rsp+70h] [rbp-128h]
  __int64 v138; // [rsp+88h] [rbp-110h]
  unsigned int v139[8]; // [rsp+90h] [rbp-108h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 180288LL * a1;
  v8 = 0.0;
  v9 = a1;
  v138 = v7;
  v10 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v7);
  if ( v10 < 4 )
  {
    if ( v10 <= 0 )
      goto LABEL_20;
    v15 = 0;
    goto LABEL_16;
  }
  v11 = 24944LL * a1;
  v12 = (char *)&dword_140404A6C[335157369] + v7;
  v13 = ((unsigned int)(v10 - 4) >> 2) + 1;
  v14 = v13;
  v4 = 4 * v13;
  v15 = 4LL * v13;
  v16 = dword_140404A6C[v11 + 346707733];
  do
  {
    v17 = *((float *)v12 + 1);
    v18 = 1065353216;
    if ( v17 < 0.0 )
      v18 = 0x40000000;
    dword_140404A6C[5 * (int)v16 + 346707735 + v11] = *(_DWORD *)v12;
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v17;
    v19 = *((float *)v12 + 5);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 2);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v18;
    v20 = 1065353216;
    v21 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v21 + 1;
    if ( v19 < 0.0 )
      v20 = 0x40000000;
    dword_140404A6C[5 * v21 + 346707740 + v11] = *((_DWORD *)v12 + 4);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v19;
    v22 = *((float *)v12 + 9);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 6);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v20;
    v23 = 1065353216;
    v24 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v24 + 1;
    if ( v22 < 0.0 )
      v23 = 0x40000000;
    dword_140404A6C[5 * v24 + 346707740 + v11] = *((_DWORD *)v12 + 8);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v22;
    v25 = *((float *)v12 + 13);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 10);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v23;
    v26 = 1065353216;
    v27 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v27 + 1;
    if ( v25 < 0.0 )
      v26 = 0x40000000;
    dword_140404A6C[5 * v27 + 346707740 + v11] = *((_DWORD *)v12 + 12);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v25;
    v28 = *((_DWORD *)v12 + 14);
    v12 += 64;
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = v28;
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733]++ + 346707738 + v11] = v26;
    v16 = dword_140404A6C[v11 + 346707733];
    --v14;
  }
  while ( v14 );
  if ( v4 < v10 )
  {
LABEL_16:
    v29 = 24944 * v9;
    v30 = &dword_140404A6C[45072 * v9 + 335157369 + 4 * v15];
    v31 = (unsigned int)(v10 - v4);
    do
    {
      v32 = *((float *)v30 + 1);
      v33 = 1065353216;
      if ( v32 < 0.0 )
        v33 = 0x40000000;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707735 + v29] = *v30;
      *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707736 + v29] = v32;
      v34 = v30[2];
      v30 += 4;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707737 + v29] = v34;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733]++ + 346707738 + v29] = v33;
      --v31;
    }
    while ( v31 );
  }
LABEL_20:
  result = 99776 * v9;
  v36 = 99776 * v9;
  v37 = *(int *)((char *)&dword_140404A6C[335202047] + v7) <= 0;
  v136 = 0;
  v137 = 99776 * v9;
  dword_140404A6C[24944 * v9 + 346708054] = 8;
  *(unsigned int *)((char *)&dword_140404A6C[346708055] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346708056] + result) = 1;
  *(unsigned int *)((char *)&dword_140404A6C[346708057] + result) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[346708058] + result) = 3;
  *(unsigned int *)((char *)&dword_140404A6C[346708059] + result) = 4;
  *(unsigned int *)((char *)&dword_140404A6C[346708060] + result) = 5;
  *(unsigned int *)((char *)&dword_140404A6C[346708061] + result) = 6;
  *(unsigned int *)((char *)&dword_140404A6C[346708062] + result) = 7;
  if ( !v37 )
  {
    v38 = 11268 * v9;
    v39 = 1.6 / (float)(v5 * v5);
    v40 = (float *)((char *)&dword_140404A6C[335202050] + v7);
    v135 = v39;
    do
    {
      v41 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v7);
      v42 = 65536.0;
      v43 = 65536.0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      if ( v41 >= 4 )
      {
        v48 = *(v40 - 1);
        v49 = *v40;
        v50 = v40[1];
        v51 = (float *)(0x140000000LL + v7 + 1344842840);
        v52 = 2;
        v47 = 4LL * (((unsigned int)(v41 - 4) >> 2) + 1);
        do
        {
          v53 = v42;
          v54 = fsqrt(
                  (float)((float)((float)((float)(v49 - *(v51 - 1)) * (float)(v49 - *(v51 - 1))) * 16.0)
                        + (float)((float)(v48 - *(v51 - 2)) * (float)(v48 - *(v51 - 2))))
                + (float)((float)(v50 - *v51) * (float)(v50 - *v51)));
          if ( v54 < v42 )
            v42 = v54;
          v55 = v46;
          if ( v53 <= v54 )
            v55 = v44;
          v56 = v42;
          v57 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[3]) * (float)(v49 - v51[3])) * 16.0)
                        + (float)((float)(v48 - v51[2]) * (float)(v48 - v51[2])))
                + (float)((float)(v50 - v51[4]) * (float)(v50 - v51[4])));
          if ( v57 < v42 )
            v42 = v57;
          v58 = v52 - 1;
          if ( v56 <= v57 )
            v58 = v55;
          v59 = v42;
          v60 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[7]) * (float)(v49 - v51[7])) * 16.0)
                        + (float)((float)(v48 - v51[6]) * (float)(v48 - v51[6])))
                + (float)((float)(v50 - v51[8]) * (float)(v50 - v51[8])));
          if ( v60 < v42 )
            v42 = v60;
          v61 = v52;
          if ( v59 <= v60 )
            v61 = v58;
          v62 = v42;
          v63 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[11]) * (float)(v49 - v51[11])) * 16.0)
                        + (float)((float)(v48 - v51[10]) * (float)(v48 - v51[10])))
                + (float)((float)(v50 - v51[12]) * (float)(v50 - v51[12])));
          if ( v63 < v42 )
            v42 = v63;
          v44 = v52 + 1;
          if ( v62 <= v63 )
            v44 = v61;
          v51 += 16;
          v46 += 4;
          v52 += 4;
        }
        while ( v46 < v41 - 3 );
      }
      if ( v46 < v41 )
      {
        v64 = (float *)&dword_140404A6C[4 * v47 + 335157371 + 4 * v38];
        do
        {
          v65 = v44;
          v66 = v42;
          v67 = fsqrt(
                  (float)((float)((float)((float)(*v40 - *(v64 - 1)) * (float)(*v40 - *(v64 - 1))) * 16.0)
                        + (float)((float)(*(v40 - 1) - *(v64 - 2)) * (float)(*(v40 - 1) - *(v64 - 2))))
                + (float)((float)(v40[1] - *v64) * (float)(v40[1] - *v64)));
          if ( v67 < v42 )
            v42 = v67;
          v44 = v46;
          if ( v66 <= v67 )
            v44 = v65;
          v64 += 4;
          ++v46;
        }
        while ( v46 < v41 );
      }
      v68 = 0;
      v69 = 0;
      if ( v41 < 4 )
      {
        if ( v41 <= 0 )
          goto LABEL_75;
        v70 = v44;
      }
      else
      {
        v70 = v44;
        v71 = 2;
        do
        {
          if ( v69 != v44 )
          {
            v72 = *(float *)&dword_140404A6C[4 * v69 + 335157369 + 4 * v38];
            v73 = *(float *)&dword_140404A6C[4 * v69 + 335157370 + 4 * v38];
            v74 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v75 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v76 = *(float *)&dword_140404A6C[4 * v69 + 335157371 + 4 * v38];
            v77 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v78 = fsqrt(
                    (float)((float)((float)((float)(*(v40 - 1) - v72) * (float)(*(v40 - 1) - v72))
                                  + (float)((float)(*v40 - v73) * (float)(*v40 - v73)))
                          * 16.0)
                  + (float)((float)(v40[1] - v76) * (float)(v40[1] - v76)));
            if ( (float)((float)((float)((float)(*v40 - v75) * (float)(v73 - v75))
                               + (float)((float)(v72 - v74) * (float)(*(v40 - 1) - v74)))
                       + (float)((float)(v40[1] - v77) * (float)(v76 - v77))) >= 0.0
              && v78 < v43 )
            {
              v45 = v68;
              v43 = v78;
            }
          }
          if ( v69 + 1 != v44 )
          {
            v79 = (float *)&dword_140404A6C[4 * v69 + 335157373 + 4 * v38];
            v80 = *(v40 - 1);
            v81 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v82 = v79[1];
            v83 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v84 = v79[2];
            v85 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v86 = fsqrt(
                    (float)((float)((float)((float)(v80 - *v79) * (float)(v80 - *v79))
                                  + (float)((float)(*v40 - v82) * (float)(*v40 - v82)))
                          * 16.0)
                  + (float)((float)(v40[1] - v84) * (float)(v40[1] - v84)));
            if ( (float)((float)((float)((float)(*v40 - v83) * (float)(v82 - v83))
                               + (float)((float)(*v79 - v81) * (float)(v80 - v81)))
                       + (float)((float)(v40[1] - v85) * (float)(v84 - v85))) >= 0.0
              && v86 < v43 )
            {
              v45 = v71 - 1;
              v43 = v86;
            }
          }
          if ( v69 + 2 != v44 )
          {
            v87 = (float *)&dword_140404A6C[4 * v38 + 335157377 + 4 * v69];
            v88 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v89 = v87[1];
            v90 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v91 = v87[2];
            v92 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v93 = fsqrt(
                    (float)((float)((float)((float)(*(v40 - 1) - *v87) * (float)(*(v40 - 1) - *v87))
                                  + (float)((float)(*v40 - v89) * (float)(*v40 - v89)))
                          * 16.0)
                  + (float)((float)(v40[1] - v91) * (float)(v40[1] - v91)));
            if ( (float)((float)((float)((float)(*(v40 - 1) - v88) * (float)(*v87 - v88))
                               + (float)((float)(*v40 - v90) * (float)(v89 - v90)))
                       + (float)((float)(v40[1] - v92) * (float)(v91 - v92))) >= 0.0
              && v93 < v43 )
            {
              v45 = v71;
              v43 = v93;
            }
          }
          if ( v69 + 3 != v44 )
          {
            v94 = *(float *)&dword_140404A6C[4 * v38 + 335157381 + 4 * v69];
            v95 = *(float *)&dword_140404A6C[4 * v38 + 335157382 + 4 * v69];
            v96 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v97 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v98 = *(float *)&dword_140404A6C[4 * v38 + 335157383 + 4 * v69];
            v99 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v100 = fsqrt(
                     (float)((float)((float)((float)(*(v40 - 1) - v94) * (float)(*(v40 - 1) - v94))
                                   + (float)((float)(*v40 - v95) * (float)(*v40 - v95)))
                           * 16.0)
                   + (float)((float)(v40[1] - v98) * (float)(v40[1] - v98)));
            if ( (float)((float)((float)((float)(*(v40 - 1) - v96) * (float)(v94 - v96))
                               + (float)((float)(*v40 - v97) * (float)(v95 - v97)))
                       + (float)((float)(v40[1] - v99) * (float)(v98 - v99))) >= 0.0
              && v100 < v43 )
            {
              v45 = v71 + 1;
              v43 = v100;
            }
          }
          v69 += 4;
          v68 += 4;
          v71 += 4;
        }
        while ( v68 < v41 - 3 );
        v36 = v137;
        v7 = v138;
        if ( v68 >= v41 )
          goto LABEL_74;
      }
      do
      {
        if ( v69 != v70 )
        {
          v101 = *(float *)&dword_140404A6C[4 * v69 + 335157369 + 4 * v38];
          v102 = *(float *)&dword_140404A6C[4 * v69 + 335157370 + 4 * v38];
          v103 = *(float *)&dword_140404A6C[4 * v69 + 335157371 + 4 * v38];
          v104 = fsqrt(
                   (float)((float)((float)((float)(*(v40 - 1) - v101) * (float)(*(v40 - 1) - v101))
                                 + (float)((float)(*v40 - v102) * (float)(*v40 - v102)))
                         * 16.0)
                 + (float)((float)(v40[1] - v103) * (float)(v40[1] - v103)));
          if ( (float)((float)((float)((float)(*v40 - *(float *)&dword_140404A6C[4 * v70 + 335157370 + 4 * v38])
                                     * (float)(v102 - *(float *)&dword_140404A6C[4 * v70 + 335157370 + 4 * v38]))
                             + (float)((float)(v101 - *(float *)&dword_140404A6C[4 * v70 + 335157369 + 4 * v38])
                                     * (float)(*(v40 - 1) - *(float *)&dword_140404A6C[4 * v70 + 335157369 + 4 * v38])))
                     + (float)((float)(v40[1] - *(float *)&dword_140404A6C[4 * v70 + 335157371 + 4 * v38])
                             * (float)(v103 - *(float *)&dword_140404A6C[4 * v70 + 335157371 + 4 * v38]))) >= 0.0
            && v104 < v43 )
          {
            v45 = v68;
            v43 = v104;
          }
        }
        ++v69;
        ++v68;
      }
      while ( v68 < v41 );
      v36 = v137;
LABEL_74:
      v5 = a2;
      v39 = v135;
LABEL_75:
      v6 = a1;
      v105 = *(float *)&dword_140404A6C[4 * v38 + 335157370 + 4 * (int)v45] - *v40;
      v106 = *(float *)&dword_140404A6C[4 * v38 + 335157371 + 4 * (int)v45] - v40[1];
      v107 = *(float *)&dword_140404A6C[4 * v38 + 335157369 + 4 * (int)v45] - *(v40 - 1);
      v108 = (float)(v105 * v105) + (float)(v107 * v107);
      v109 = *(float *)&dword_140404A6C[4 * v38 + 335157369 + 4 * v44] - *(v40 - 1);
      v110 = v108 + (float)(v106 * v106);
      v111 = *(float *)&dword_140404A6C[4 * v38 + 335157371 + 4 * v44] - v40[1];
      v112 = fsqrt(v110);
      v113 = *(float *)&dword_140404A6C[4 * v38 + 335157370 + 4 * v44] - *v40;
      v114 = fsqrt((float)((float)(v113 * v113) + (float)(v109 * v109)) + (float)(v111 * v111));
      v115 = 1.0 / (float)(v114 + v112);
      *(float *)&v116 = v115 * v114;
      v117 = 1059061760;
      v139[1] = v116;
      *(float *)v139 = v115 * v112;
      v118 = -0.03125;
      if ( a1 )
      {
        if ( (unsigned int)(a1 - 4) <= 1 )
        {
          v117 = 1061158912;
          v118 = 0.0;
        }
      }
      else
      {
        v118 = -0.0625;
        v117 = 1056964608;
      }
      sub_14010CAC0(a1, 0, v44, v45, v139, LODWORD(v5), LODWORD(a3), LODWORD(v39), v118, 0x3E800000u, 0x3F000000u, v117);
      v40 += 5;
      *(unsigned int *)((char *)&dword_140404A6C[20 * *(unsigned int *)((char *)&dword_140404A6C[346731811] + v36)
                                               + 346731808]
                      + v36) = a4;
      result = (unsigned int)(v136 + 1);
      v136 = result;
    }
    while ( (int)result < *(int *)((char *)&dword_140404A6C[335202047] + v7) );
  }
  v119 = (float *)(0x140000000LL + v7 + 1345021560);
  v120 = 0;
  *(float *)((char *)&dword_140404A6C[346732453] + v36) = fabs(*v119 - *(float *)((char *)&dword_140404A6C[335202061]
                                                                                + v7));
  *(float *)((char *)&dword_140404A6C[346732452] + v36) = fabs(
                                                            *(float *)((char *)&dword_140404A6C[335202049] + v7)
                                                          - *(float *)((char *)&dword_140404A6C[335202054] + v7));
  *(_QWORD *)((char *)&dword_140404A6C[346732623] + v36) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346732625] + v36) = 0;
  if ( *(int *)((char *)&dword_140404A6C[346707733] + v36) > 0 )
  {
    result = (__int64)&dword_140404A6C[346707738] + v36;
    do
    {
      if ( *(float *)(result - 8) < 0.0 )
        *(_DWORD *)result = 1082130432;
      ++v120;
      result += 20;
    }
    while ( v120 < *(int *)((char *)&dword_140404A6C[346707733] + v36) );
  }
  if ( v6 != 17 )
  {
    *(_QWORD *)((char *)&dword_140404A6C[346732629] + v36) = 0;
    v121 = 0;
    *(unsigned int *)((char *)&dword_140404A6C[346732631] + v36) = 0;
    v122 = 0.0;
    v123 = 0.0;
    if ( *(int *)((char *)&dword_140404A6C[346707733] + v36) > 0 )
    {
      v124 = *(float *)((char *)&dword_140404A6C[346732630] + v36);
      v125 = *(float *)((char *)&dword_140404A6C[346732631] + v36);
      result = (__int64)&dword_140404A6C[346707738] + v36;
      v126 = 0.0;
      do
      {
        ++v121;
        v127 = (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v36))
             * (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v36));
        v128 = (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v36))
             * (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v36));
        v129 = (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v36))
             * (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v36));
        v126 = v126 + (float)((float)(v127 + v128) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732629] + v36) = v126;
        v124 = v124 + (float)((float)(v128 + v129) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732630] + v36) = v124;
        v125 = v125 + (float)((float)(v127 + v129) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732631] + v36) = v125;
        v8 = v8 + *(float *)result;
        result += 20;
      }
      while ( v121 < *(int *)((char *)&dword_140404A6C[346707733] + v36) );
      v122 = v124;
      v123 = v125;
    }
    *(float *)((char *)&dword_140404A6C[346732629] + v36) = (float)(1.0 / v8)
                                                          * *(float *)((char *)&dword_140404A6C[346732629] + v36);
    *(float *)((char *)&dword_140404A6C[346732630] + v36) = (float)(1.0 / v8) * v122;
    *(float *)((char *)&dword_140404A6C[346732631] + v36) = (float)(1.0 / v8) * v123;
  }
  v130 = 0;
  if ( *(int *)((char *)&dword_140404A6C[346731811] + v36) > 0 )
  {
    result = (__int64)&dword_140404A6C[346731830] + v36;
    do
    {
      v131 = *((_DWORD *)v119 - 2);
      ++v130;
      v132 = *v119;
      v133 = *(v119 - 1);
      v119 += 5;
      *(_DWORD *)(result - 4) = v131;
      v134 = v133 - 0.125;
      *(float *)(result + 4) = v132;
      *(float *)result = v134;
      *(_DWORD *)(result - 40) = v131;
      *(float *)(result - 36) = v134;
      *(float *)(result - 32) = v132;
      result += 80;
    }
    while ( v130 < *(int *)((char *)&dword_140404A6C[346731811] + v36) );
  }
  *(_QWORD *)((char *)&dword_140404A6C[346732623] + v36) = 0;
  *(_QWORD *)((char *)&dword_140404A6C[346732625] + v36) = 0;
  *(_QWORD *)((char *)&dword_140404A6C[346732627] + v36) = 0;
  return result;
}

