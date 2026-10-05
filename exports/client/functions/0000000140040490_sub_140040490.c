/* Address: 0x140040490 | Name: sub_140040490 | Size: 5864 bytes */
__int64 sub_140040490()
{
  unsigned int *v0; // r9
  __int64 v1; // r11
  unsigned int v2; // ebp
  __int64 v3; // rbx
  unsigned int *v4; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  __m128i v7; // xmm0
  _DWORD *v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r10
  unsigned int *v14; // r8
  unsigned int *v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int *v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  unsigned int v26; // xmm2_4
  unsigned int v27; // xmm3_4
  unsigned int v28; // xmm4_4
  unsigned int v29; // xmm5_4
  unsigned int v30; // xmm6_4
  unsigned int v31; // xmm7_4
  unsigned int v32; // xmm8_4
  unsigned int v33; // xmm9_4
  unsigned int v34; // xmm10_4
  unsigned int v35; // xmm11_4
  unsigned int *v36; // rax
  __int64 v37; // r8
  unsigned int *v38; // rdi
  signed int v39; // eax
  __int64 v40; // r9
  unsigned int *v41; // r8
  float v42; // xmm1_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  float v45; // xmm9_4
  unsigned int v46; // ebx
  float v47; // xmm6_4
  __int64 v48; // r15
  unsigned int *v49; // r13
  __int64 v50; // rbp
  __int64 v51; // rcx
  unsigned __int64 v52; // rdi
  char *v53; // r14
  char *v54; // r8
  unsigned int v55; // eax
  unsigned __int64 v56; // rdx
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  char *v61; // rbx
  float v62; // xmm2_4
  unsigned __int64 v63; // rcx
  float v64; // xmm4_4
  float v65; // xmm5_4
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r15
  __int64 v69; // r12
  __int64 v70; // r9
  unsigned int *v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r12
  __int64 v74; // r8
  __int64 v75; // rbx
  char *v76; // r14
  __int64 v77; // rbp
  char *v78; // r13
  __int64 v79; // r15
  bool v80; // zf
  float *v81; // rdx
  __int64 v82; // rcx
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm5_4
  __int64 v86; // rdx
  __int64 v87; // r8
  float *v88; // rcx
  unsigned int *v89; // rcx
  __int64 v90; // rdx
  unsigned int *v91; // r14
  __int64 v92; // r15
  char *v93; // rdi
  float *v94; // rbx
  __int64 v95; // r13
  unsigned int v96; // eax
  __int64 v97; // rcx
  float v98; // xmm4_4
  float v99; // xmm2_4
  float v100; // xmm5_4
  float *v101; // rcx
  float *v102; // rcx
  __int64 result; // rax
  __int64 v104; // rcx
  double v105; // xmm0_8
  double v106; // xmm0_8
  double v107; // xmm0_8
  double v108; // xmm0_8
  double v109; // xmm0_8
  double v110; // xmm0_8
  double v111; // xmm0_8
  double v112; // xmm0_8
  __int64 v113; // [rsp+20h] [rbp-D8h]
  __int64 v114; // [rsp+28h] [rbp-D0h]
  char *v115; // [rsp+30h] [rbp-C8h]
  char *v116; // [rsp+38h] [rbp-C0h]
  int v117; // [rsp+100h] [rbp+8h]
  __int64 v118; // [rsp+108h] [rbp+10h]
  __int64 v119; // [rsp+110h] [rbp+18h]
  __int64 v120; // [rsp+110h] [rbp+18h]
  __int64 v121; // [rsp+118h] [rbp+20h]

  v0 = &dword_140404A6C[280651457];
  v1 = dword_140404A6C[283831474] & 0x3F;
  v2 = dword_140404A6C[421846192] & 0x3F;
  v3 = 256;
  dword_140404A6C[421846192] = dword_140404A6C[283831474] & 0x3F;
  v4 = &dword_140404A6C[140832 * v1 + 421846211];
  dword_140404A6C[421846193] = dword_140404A6C[283831474];
  do
  {
    v5 = *(v0 - 154);
    *(v4 - 16) = v5;
    if ( v5 )
    {
      v6 = v4 + 30;
      v7 = _mm_cvtsi32_si128(*(v0 - 123));
      v8 = v0 + 119;
      *(v4 - 15) = *(v0 - 116);
      v9 = 3;
      *(v4 - 14) = *(v0 - 115);
      *(v4 - 13) = *(v0 - 100);
      *(v4 - 11) = *(v0 - 92);
      *(v4 - 10) = *(v0 - 91);
      v10 = *(v0 - 17);
      *(v4 - 9) = _mm_cvtepi32_ps(v7).m128_u32[0];
      *(v4 - 8) = v10;
      *(v4 - 7) = *(v0 - 16);
      *(v4 - 6) = *(v0 - 15);
      *(v4 - 5) = *(v0 - 5);
      *(v4 - 4) = *(v0 - 4);
      *(v4 - 3) = *(v0 - 3);
      *(v4 - 2) = *(v0 - 2);
      *(v4 - 1) = *(v0 - 1);
      *v4 = *v0;
      v4[1] = v0[1];
      v4[2] = v0[2];
      v4[3] = v0[3];
      do
      {
        *(v6 - 5) = *(v8 - 5);
        *(v6 - 4) = *(v8 - 4);
        *(v6 - 3) = *(v8 - 3);
        *(v6 - 2) = *(v8 - 2);
        *(v6 - 1) = *(v8 - 1);
        *v6 = *v8;
        v6[1] = v8[1];
        v6[2] = v8[2];
        v6[3] = v8[3];
        v6[16] = v8[73];
        v6[17] = v8[74];
        v6[18] = v8[75];
        v6[19] = v8[76];
        v6[20] = v8[77];
        v6[21] = v8[78];
        v6[22] = v8[79];
        v6[23] = v8[80];
        v6[24] = v8[81];
        v6[37] = v8[151];
        v6[38] = v8[152];
        v6[39] = v8[153];
        v6[40] = v8[154];
        v6[41] = v8[155];
        v6[42] = v8[156];
        v6[43] = v8[157];
        v6[44] = v8[158];
        v6[45] = v8[159];
        v6[58] = v8[229];
        v6[59] = v8[230];
        v6[60] = v8[231];
        v6[61] = v8[232];
        v6[62] = v8[233];
        v6[63] = v8[234];
        v6[64] = v8[235];
        v6[65] = v8[236];
        v6[66] = v8[237];
        v6[79] = v8[307];
        v6[80] = v8[308];
        v6[81] = v8[309];
        v6[82] = v8[310];
        v6[83] = v8[311];
        v6 += 105;
        v11 = v8[312];
        v8 += 390;
        *(v6 - 21) = v11;
        *(v6 - 20) = *(v8 - 77);
        *(v6 - 19) = *(v8 - 76);
        *(v6 - 18) = *(v8 - 75);
        --v9;
      }
      while ( v9 );
    }
    v4 += 344;
    v0 += 7166;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v13 = 0;
  v14 = &dword_140404A6C[129716731];
  v15 = &dword_140404A6C[140832 * v1 + 421934268];
  v16 = 512;
  do
  {
    v17 = *(v14 - 22);
    *(v15 - 9) = v17;
    if ( v17 )
    {
      *(v15 - 8) = *(v14 - 11);
      *(v15 - 7) = *(v14 - 10);
      *(v15 - 6) = *(v14 - 9);
      *(v15 - 5) = *(v14 - 5);
      *(v15 - 4) = *(v14 - 4);
      *(v15 - 3) = *(v14 - 3);
      *(v15 - 2) = *(v14 - 2);
      *(v15 - 1) = *(v14 - 1);
      *v15 = *v14;
      v15[1] = v14[1];
      v15[2] = v14[2];
      v15[3] = v14[3];
      v18 = v13 + 563328 * v1;
      *(unsigned int *)((char *)&dword_140404A6C[421934273] + v18) = v14[3641];
      *(unsigned int *)((char *)&dword_140404A6C[421934275] + v18) = v14[3659];
      *(unsigned int *)((char *)&dword_140404A6C[421934274] + v18) = v14[3671];
      *(unsigned int *)((char *)&dword_140404A6C[421934277] + v18) = v14[3641];
      *(unsigned int *)((char *)&dword_140404A6C[421934279] + v18) = v14[3702];
      *(unsigned int *)((char *)&dword_140404A6C[421934278] + v18) = v14[3714];
      *(unsigned int *)((char *)&dword_140404A6C[421934281] + v18) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[421934283] + v18) = v14[3745];
      *(unsigned int *)((char *)&dword_140404A6C[421934282] + v18) = v14[3757];
      *(unsigned int *)((char *)&dword_140404A6C[421934285] + v18) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[421934287] + v18) = v14[3788];
      *(unsigned int *)((char *)&dword_140404A6C[421934286] + v18) = v14[3800];
    }
    v14 += 5210;
    v13 += 308;
    v15 += 77;
    --v16;
  }
  while ( v16 );
  v121 = v2;
  v19 = &dword_140404A6C[278845939];
  v20 = &dword_140404A6C[140832 * v1 + 421973692];
  v21 = 0;
  v22 = 1024;
  do
  {
    v23 = *(v19 - 46);
    *(v20 - 9) = v23;
    if ( v23 )
    {
      v24 = *(v19 - 23);
      v25 = *(v19 - 22);
      v26 = *(v19 - 21);
      v27 = *(v19 - 5);
      v28 = *(v19 - 4);
      v29 = *(v19 - 3);
      v30 = *(v19 - 2);
      v31 = *(v19 - 1);
      v32 = *v19;
      v33 = v19[1];
      v34 = v19[2];
      v35 = v19[3];
      *(v20 - 8) = v24;
      *(v20 - 7) = v25;
      *(v20 - 6) = v26;
      *(v20 - 5) = v27;
      *(v20 - 4) = v28;
      *(v20 - 3) = v29;
      *(v20 - 2) = v30;
      *(v20 - 1) = v31;
      *v20 = v32;
      v20[1] = v33;
      v20[2] = v34;
      v20[3] = v35;
      if ( !dword_140404A6C[140832 * v2 + 421973683 + v21] )
      {
        v36 = &dword_140404A6C[v21 + 421973692];
        v37 = 16;
        do
        {
          *(v36 - 8) = v24;
          *(v36 - 7) = v25;
          *(v36 - 6) = v26;
          *(v36 - 5) = v27;
          *(v36 - 4) = v28;
          *(v36 - 3) = v29;
          *(v36 - 2) = v30;
          *(v36 - 1) = v31;
          *v36 = v32;
          v36[1] = v33;
          v36[2] = v34;
          v36[3] = v35;
          v36[140824] = v24;
          v36[140825] = v25;
          v36[140826] = v26;
          v36[140827] = v27;
          v36[140828] = v28;
          v36[140829] = v29;
          v36[140830] = v30;
          v36[140831] = v31;
          v36[140832] = v32;
          v36[140833] = v33;
          v36[140834] = v34;
          v36[140835] = v35;
          v36[281656] = v24;
          v36[281657] = v25;
          v36[281658] = v26;
          v36[281659] = v27;
          v36[281660] = v28;
          v36[281661] = v29;
          v36[281662] = v30;
          v36[281663] = v31;
          v36[281664] = v32;
          v36[281665] = v33;
          v36[281666] = v34;
          v36[281667] = v35;
          v36[422488] = v24;
          v36[422489] = v25;
          v36[422490] = v26;
          v36[422491] = v27;
          v36[422492] = v28;
          v36[422493] = v29;
          v36[422494] = v30;
          v36[422495] = v31;
          v36[422496] = v32;
          v36[422497] = v33;
          v36[422498] = v34;
          v36[422499] = v35;
          v36 += 563328;
          --v37;
        }
        while ( v37 );
      }
    }
    v19 += 1760;
    v21 += 13;
    v20 += 13;
    --v22;
  }
  while ( v22 );
  v38 = &dword_140404A6C[129716709];
  v39 = dword_140404A6C[421846192] - v2;
  v40 = 0;
  v41 = &dword_140404A6C[129716709];
  if ( (int)v2 >= (int)dword_140404A6C[421846192] )
    v39 = dword_140404A6C[421846192] - v2 + 64;
  v42 = (float)v39;
  do
  {
    if ( *v41 )
    {
      v43 = v40 + 563328 * v1;
      v44 = v40 + 563328LL * v2;
      *(float *)((char *)&dword_140404A6C[421934272] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934275]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934272] + v44);
      *(float *)((char *)&dword_140404A6C[421934276] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934279]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934276] + v44);
      *(float *)((char *)&dword_140404A6C[421934280] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934283]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934280] + v44);
      *(float *)((char *)&dword_140404A6C[421934284] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934287]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934284] + v44);
    }
    v41 += 5210;
    v40 += 308;
  }
  while ( (__int64)v41 < (__int64)&dword_140404A6C[132384229] );
  v45 = 0.0;
  *(float *)&dword_140404A6C[421846191] = (float)((float)(v42 - *(float *)&dword_140404A6C[421846191]) * 0.125)
                                        + *(float *)&dword_140404A6C[421846191];
  if ( *(float *)&dword_140404A6C[421846191] >= 0.0 )
  {
    if ( *(float *)&dword_140404A6C[421846191] > 16.0 )
      dword_140404A6C[421846191] = 1098907648;
  }
  else
  {
    dword_140404A6C[421846191] = 0;
  }
  if ( v42 > 0.0 )
    v45 = 1.0 / v42;
  v46 = ((_BYTE)v2 + 1) & 0x3F;
  v47 = v45;
  v117 = v46;
  if ( v46 != dword_140404A6C[421846192] )
  {
    v48 = 563328LL * v2;
    v114 = v48;
    do
    {
      v49 = &dword_140404A6C[280651303];
      v50 = 563328LL * v46;
      v51 = 256;
      v113 = v46;
      v118 = v50;
      v52 = 0;
      v119 = 256;
      v53 = (char *)&dword_140404A6C[421846205] + v50;
      v54 = (char *)&dword_140404A6C[421846236] + v50;
      v115 = v53;
      v116 = v54;
      do
      {
        v55 = *v49;
        *(_DWORD *)&v53[v52 - 40] = *v49;
        if ( v55 )
        {
          v56 = v48 + v52;
          v57 = *(float *)((char *)&dword_140404A6C[421846196] + v48 + v52);
          v58 = *(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846196 + v52 / 4];
          if ( (float)(v57 - v58) >= 3.14159265359 )
            v58 = v58 + 6.28318530718;
          if ( (float)(v58 - v57) >= 3.14159265359 )
            v57 = v57 + 6.28318530718;
          *(float *)&v53[v52 - 36] = (float)((float)(v58 - v57) * v47)
                                   + *(float *)((char *)&dword_140404A6C[421846196] + v48 + v52);
          v59 = *(float *)((char *)&dword_140404A6C[421846198] + v56);
          v60 = *(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846198 + v52 / 4];
          if ( (float)(v59 - v60) >= 3.14159265359 )
            v60 = v60 + 6.28318530718;
          if ( (float)(v60 - v59) >= 3.14159265359 )
            v59 = v59 + 6.28318530718;
          v61 = &v54[v12 * 4];
          *(float *)&v53[v52 - 28] = (float)((float)(v60 - v59) * v47)
                                   + *(float *)((char *)&dword_140404A6C[421846198] + v56);
          *(float *)&v53[v52 - 20] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846200
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846200] + v56))
                                           * v47)
                                   + *(float *)((char *)&dword_140404A6C[421846200] + v56);
          *(float *)&v53[v52 - 16] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846201
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846201] + v56))
                                           * v47)
                                   + *(float *)((char *)&dword_140404A6C[421846201] + v56);
          *(float *)&v53[v52 - 12] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846202
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846202] + v56))
                                           * v47)
                                   + *(float *)((char *)&dword_140404A6C[421846202] + v56);
          v62 = *(float *)((char *)&dword_140404A6C[421846204] + v56);
          v63 = v52 + 563328LL * (int)dword_140404A6C[421846192];
          v64 = *(float *)((char *)&dword_140404A6C[421846204] + v63);
          v65 = (float)(*(float *)((char *)&dword_140404A6C[421846205] + v63)
                      - *(float *)((char *)&dword_140404A6C[421846205] + v56))
              * v47;
          *(float *)&v53[v52 - 8] = (float)((float)(*(float *)((char *)&dword_140404A6C[421846203] + v63)
                                                  - *(float *)((char *)&dword_140404A6C[421846203] + v56))
                                          * v47)
                                  + *(float *)((char *)&dword_140404A6C[421846203] + v56);
          *(float *)&v53[v52 - 4] = (float)((float)(v64 - v62) * v47)
                                  + *(float *)((char *)&dword_140404A6C[421846204] + v56);
          *(float *)&v53[v52] = v65 + *(float *)((char *)&dword_140404A6C[421846205] + v56);
          sub_1400C2F90(
            &v54[v12 * 4 - 120],
            (char *)&dword_140404A6C[v12 + 421846206] + v48,
            &dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846206 + v12]);
          v66 = -v50;
          v67 = 15;
          v68 = v66 + v48;
          v69 = v66 - v12 * 4 - (_QWORD)&dword_140404A6C[421846236] + 84;
          do
          {
            sub_1400C2F90(
              v61,
              &v61[v68],
              (char *)&dword_140404A6C[421846215]
            + (_QWORD)&v61[563328 * (int)dword_140404A6C[421846192] + v12 * 4 + v69]);
            v61 += 84;
            --v67;
          }
          while ( v67 );
          v53 = v115;
          v48 = v114;
          v50 = v118;
          v51 = v119;
          v54 = v116;
        }
        v12 += 344;
        v49 += 7166;
        v52 += 1376LL;
        v119 = --v51;
      }
      while ( v51 );
      v70 = v113;
      v71 = &dword_140404A6C[129716709];
      v72 = 140832 * (v121 - v113);
      v73 = -v50;
      v74 = v48 - 32 - v50;
      v75 = 0;
      v76 = (char *)&dword_140404A6C[421934263] + v50;
      v120 = v74;
      v77 = v48 - v50;
      v78 = (char *)&dword_140404A6C[421934268] + v118;
      v79 = 512;
      do
      {
        v80 = *v71 == 0;
        v81 = (float *)&v78[v75 * 4];
        *(_DWORD *)&v78[v75 * 4 - 36] = *(_DWORD *)&v78[v75 * 4 - 36 + v77];
        if ( !v80 )
        {
          v82 = v75 * 4 + 563328LL * (int)dword_140404A6C[421846192];
          if ( *(_DWORD *)((char *)v81 + v77 - 36) )
          {
            v83 = *(float *)((char *)&dword_140404A6C[421934261] + v82);
            v84 = v81[v72 - 7];
            v85 = (float)(*(float *)((char *)&dword_140404A6C[421934262] + v82) - v81[v72 - 6]) * v47;
            *(v81 - 8) = (float)((float)(*(float *)((char *)&dword_140404A6C[421934260] + v82)
                                       - *(float *)((char *)v81 + v74))
                               * v47)
                       + *(float *)((char *)v81 + v74);
            *(v81 - 7) = (float)((float)(v83 - v84) * v47) + v81[v72 - 7];
            *(v81 - 6) = v85 + v81[v72 - 6];
            sub_1400C2F90(v76, &v76[v72 * 4], &v76[563328 * (int)dword_140404A6C[421846192] + v73]);
            v70 = v113;
            v86 = v75 * 4 + 563328 * v121;
            v87 = v75 * 4 + 563328 * v113;
            *(float *)((char *)&dword_140404A6C[421934272] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934272 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934272]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v86);
            *(float *)((char *)&dword_140404A6C[421934273] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934273 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934273]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934273] + v86);
            *(float *)((char *)&dword_140404A6C[421934274] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934274 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934274]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934274] + v86);
            *(float *)((char *)&dword_140404A6C[421934275] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934275 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934275]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934275] + v86);
            *(float *)((char *)&dword_140404A6C[421934276] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934276 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934276]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934276] + v86);
            *(float *)((char *)&dword_140404A6C[421934277] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934277 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934277]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934277] + v86);
            *(float *)((char *)&dword_140404A6C[421934278] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934278 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934278]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934278] + v86);
            *(float *)((char *)&dword_140404A6C[421934279] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934279 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934279]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934279] + v86);
            *(float *)((char *)&dword_140404A6C[421934280] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934280 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934280]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934280] + v86);
            *(float *)((char *)&dword_140404A6C[421934281] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934281 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934281]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934281] + v86);
            *(float *)((char *)&dword_140404A6C[421934282] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934282 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934282]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934282] + v86);
            *(float *)((char *)&dword_140404A6C[421934283] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934283 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934283]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934283] + v86);
            *(float *)((char *)&dword_140404A6C[421934284] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934284 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934284]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934284] + v86);
            *(float *)((char *)&dword_140404A6C[421934285] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934285 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934285]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934285] + v86);
            *(float *)((char *)&dword_140404A6C[421934286] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934286 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934286]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934286] + v86);
            *(float *)((char *)&dword_140404A6C[421934287] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934287 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934287]
                                                                                             + v86))
                                                                          * v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934287] + v86);
            v74 = v120;
          }
          else
          {
            v88 = (float *)((char *)&dword_140404A6C[421934260] + v82);
            *(v81 - 8) = *v88;
            *(v81 - 7) = v88[1];
            *(v81 - 6) = v88[2];
            v89 = &dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934263 + v75];
            *((_DWORD *)v81 - 5) = *v89;
            *((_DWORD *)v81 - 4) = v89[1];
            *((_DWORD *)v81 - 3) = v89[2];
            *((_DWORD *)v81 - 2) = v89[3];
            *((_DWORD *)v81 - 1) = v89[4];
            *(_DWORD *)v81 = v89[5];
            *((_DWORD *)v81 + 1) = v89[6];
            *((_DWORD *)v81 + 2) = v89[7];
            *((_DWORD *)v81 + 3) = v89[8];
            v90 = v75 * 4 + 563328 * v70;
            *(unsigned int *)((char *)&dword_140404A6C[421934272] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934272
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934273] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934273
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934274] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934274
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934275] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934275
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934276] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934276
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934277] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934277
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934278] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934278
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934279] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934279
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934280] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934280
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934281] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934281
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934282] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934282
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934283] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934283
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934284] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934284
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934285] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934285
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934286] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934286
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934287] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934287
                                                                                         + v75];
          }
        }
        v76 += 308;
        v71 += 5210;
        v75 += 77;
        --v79;
      }
      while ( v79 );
      v91 = &dword_140404A6C[278845893];
      v92 = 1024;
      v93 = (char *)&dword_140404A6C[421973687] + v118;
      v94 = (float *)((char *)&dword_140404A6C[421973692] + v118);
      v95 = v73 - (_QWORD)&dword_140404A6C[421973692];
      do
      {
        v96 = *v91;
        *((_DWORD *)v94 - 9) = *v91;
        if ( v96 )
        {
          v97 = (__int64)&v94[140832 * dword_140404A6C[421846192]] + v95;
          if ( *(_DWORD *)((char *)v94 + v77 - 36) )
          {
            v98 = *(float *)((char *)&dword_140404A6C[421973685] + v97);
            v99 = v94[v72 - 7];
            v100 = (float)(*(float *)((char *)&dword_140404A6C[421973686] + v97) - v94[v72 - 6]) * v47;
            *(v94 - 8) = (float)((float)(*(float *)((char *)&dword_140404A6C[421973684] + v97)
                                       - *(float *)((char *)v94 + v74))
                               * v47)
                       + *(float *)((char *)v94 + v74);
            *(v94 - 7) = (float)((float)(v98 - v99) * v47) + v94[v72 - 7];
            *(v94 - 6) = v100 + v94[v72 - 6];
            sub_1400C2F90(v93, &v93[v72 * 4], &v93[563328 * (int)dword_140404A6C[421846192] + v73]);
          }
          else
          {
            v101 = (float *)((char *)&dword_140404A6C[421973684] + v97);
            *(v94 - 8) = *v101;
            *(v94 - 7) = v101[1];
            *(v94 - 6) = v101[2];
            v102 = (float *)((char *)&dword_140404A6C[421973687]
                           + (_QWORD)&v94[140832 * dword_140404A6C[421846192]]
                           + v95);
            *(v94 - 5) = *v102;
            *(v94 - 4) = v102[1];
            *(v94 - 3) = v102[2];
            *(v94 - 2) = v102[3];
            *(v94 - 1) = v102[4];
            *v94 = v102[5];
            v94[1] = v102[6];
            v94[2] = v102[7];
            v94[3] = v102[8];
          }
        }
        v74 = v120;
        v93 += 52;
        v91 += 1760;
        v94 += 13;
        --v92;
      }
      while ( v92 );
      sub_140030590(v117);
      v48 = v114;
      v47 = v47 + v45;
      v46 = ((_BYTE)v117 + 1) & 0x3F;
      v117 = v46;
      v12 = 0;
    }
    while ( v46 != dword_140404A6C[421846192] );
    v38 = &dword_140404A6C[129716709];
  }
  result = sub_140030590(v46);
  do
  {
    if ( !*v38 )
      goto LABEL_80;
    v104 = v12 * 4 + 563328LL * v46;
    v105 = *(float *)((char *)&dword_140404A6C[421934272] + v104);
    if ( v105 >= -3.14159265359 )
    {
      if ( v105 <= 3.14159265359 )
        goto LABEL_65;
      v106 = v105 - 6.28318530718;
    }
    else
    {
      v106 = v105 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934272] + v104) = v106;
LABEL_65:
    v107 = *(float *)((char *)&dword_140404A6C[421934276] + v104);
    if ( v107 >= -3.14159265359 )
    {
      if ( v107 <= 3.14159265359 )
        goto LABEL_70;
      v108 = v107 - 6.28318530718;
    }
    else
    {
      v108 = v107 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934276] + v104) = v108;
LABEL_70:
    v109 = *(float *)((char *)&dword_140404A6C[421934280] + v104);
    if ( v109 >= -3.14159265359 )
    {
      if ( v109 <= 3.14159265359 )
        goto LABEL_75;
      v110 = v109 - 6.28318530718;
    }
    else
    {
      v110 = v109 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934280] + v104) = v110;
LABEL_75:
    v111 = *(float *)((char *)&dword_140404A6C[421934284] + v104);
    if ( v111 >= -3.14159265359 )
    {
      if ( v111 <= 3.14159265359 )
        goto LABEL_80;
      v112 = v111 - 6.28318530718;
    }
    else
    {
      v112 = v111 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934284] + v104) = v112;
LABEL_80:
    v38 += 5210;
    v12 += 77;
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[132384229] );
  return result;
}

