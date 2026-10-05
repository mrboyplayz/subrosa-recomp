/* Address: 0x1400932d0 | Name: sub_1400932D0 | Size: 2945 bytes */
__int64 __fastcall sub_1400932D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  float v13; // xmm4_4
  signed int v14; // r8d
  float v15; // xmm3_4
  int v16; // eax
  float v17; // xmm6_4
  char v18; // cl
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r12
  unsigned int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r14
  unsigned __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rax
  float v31; // xmm2_4
  __int64 v32; // rcx
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  unsigned int v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm1_4
  unsigned int v44; // xmm0_4
  float v45; // xmm1_4
  unsigned int v46; // xmm0_4
  float v47; // xmm1_4
  unsigned int v48; // xmm0_4
  float v49; // xmm1_4
  unsigned int v50; // xmm0_4
  unsigned __int64 v51; // r15
  __int64 v52; // rbx
  unsigned __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v55; // r15
  float *v56; // rbx
  float *v57; // rdi
  __int64 v58; // rbp
  float v59; // xmm5_4
  float v60; // xmm4_4
  __int64 v61; // rcx
  float v62; // xmm1_4
  float v63; // xmm3_4
  __int64 v64; // rax
  float v65; // xmm2_4
  float v66; // xmm0_4
  float v67; // xmm5_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm5_4
  float v74; // xmm4_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm3_4
  float v78; // xmm1_4
  float v79; // xmm2_4
  float v80; // xmm5_4
  unsigned int *v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rbp
  __int64 v85; // rcx
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm2_4
  __int64 v89; // rax
  unsigned int v90; // xmm0_4
  float v91; // xmm1_4
  unsigned int v92; // xmm0_4
  __int64 v93; // rdx
  __int64 v94; // rcx
  float v95; // xmm1_4
  unsigned int v96; // xmm0_4
  float v97; // xmm1_4
  __int64 v98; // rcx
  float v99; // xmm0_4
  __int64 v100; // rdx
  unsigned int v101; // xmm0_4
  float v102; // xmm1_4
  unsigned int v103; // xmm0_4
  float v104; // xmm1_4
  __int64 v105; // rdx
  __int64 v106; // rcx
  float v107; // xmm1_4
  unsigned int v108; // xmm0_4
  float v109; // xmm1_4
  float v110; // xmm0_4
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // xmm0_4
  float v114; // xmm1_4
  unsigned int v115; // xmm0_4
  float v116; // xmm1_4
  __int64 v117; // r14
  unsigned int *v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // rsi
  float *v121; // rax
  __int64 v122; // rcx
  unsigned int v123; // xmm1_4
  float v124; // xmm0_4
  float v125; // xmm2_4
  float v126; // xmm4_4
  float v127; // xmm1_4
  unsigned int v128; // xmm0_4
  __int64 v130; // [rsp+A0h] [rbp+8h]
  unsigned int *v131; // [rsp+A8h] [rbp+10h]
  __int64 v132; // [rsp+B0h] [rbp+18h]
  __int64 v133; // [rsp+B8h] [rbp+20h]

  v4 = 16;
  if ( dword_140404A6C[283831481] )
    v4 = 100;
  v5 = MEMORY[0x140198F9B](a1, a2, a3, a4) - dword_140404A6C[421846189];
  v10 = MEMORY[0x140198F9B](v7, v6, v8, v9);
  v11 = 4 * v4;
  dword_140404A6C[421846189] = v10;
  v12 = 0;
  if ( v5 >= 0 )
    v12 = v5;
  v13 = (float)v4;
  if ( v12 <= v11 )
    v11 = v12;
  v14 = v11 + dword_140404A6C[421846190];
  v15 = (float)(v4 * dword_140404A6C[283831474]);
  if ( (float)(v11 + dword_140404A6C[421846190]) > (float)(v15 - (float)(v13 * 0.125)) )
    v14 -= (unsigned int)v4 >> 3;
  if ( (float)v14 < (float)(v15 - (float)((float)(*(float *)&dword_140404A6C[421846191] + 0.125) * v13)) )
    v14 += (unsigned int)v4 >> 4;
  if ( v14 > (signed int)(v4 * dword_140404A6C[283831474]) )
    v14 = v4 * dword_140404A6C[283831474];
  dword_140404A6C[421846190] = v14;
  if ( v14 < (signed int)(v4 * (dword_140404A6C[283831474] - 20)) )
  {
    v14 = (int)(float)(v15 - (float)(v13 * 20.0));
    dword_140404A6C[421846190] = v14;
  }
  if ( dword_140404A6C[19065870] && v14 < (signed int)(v4 * (dword_140404A6C[283831474] - 1)) )
  {
    v14 = (int)(float)(v15 - v13);
    dword_140404A6C[421846190] = v14;
  }
  v16 = v14 / v4;
  if ( v14 / v4 > (int)dword_140404A6C[283831474] )
    v16 = dword_140404A6C[283831474];
  v17 = fmaxf((float)(v14 - v4 * v16) / v13, 0.0);
  if ( v17 > 1.0 )
    v17 = 1.0;
  v18 = v16 + 1;
  v19 = v16 & 0x3F;
  v20 = v18 & 0x3F;
  if ( !dword_140404A6C[73991654] || dword_140404A6C[179668287] )
  {
    v17 = 1.0;
    v20 = dword_140404A6C[283831474] & 0x3F;
    v19 = v20;
  }
  v21 = v19;
  v22 = 0;
  v23 = v20;
  v24 = &dword_140404A6C[280651303];
  v25 = 256;
  v131 = &dword_140404A6C[280651303];
  v26 = 0;
  v132 = 256;
  v130 = v21;
  v27 = (unsigned int)v21;
  v133 = v23;
  do
  {
    if ( *v24 )
    {
      v28 = 563328 * v27;
      v29 = 140832 * v23;
      v30 = 563328 * v27 + v26 * 4;
      v31 = *(float *)((char *)&dword_140404A6C[421846196] + v30);
      v32 = 563328 * v23 + v26 * 4;
      v33 = *(float *)((char *)&dword_140404A6C[421846196] + v32);
      if ( (float)(v31 - v33) >= 3.14159265359 )
        v33 = v33 + 6.28318530718;
      if ( (float)(v33 - v31) >= 3.14159265359 )
        v31 = v31 + 6.28318530718;
      v34 = v33 - v31;
      v35 = *(float *)((char *)&dword_140404A6C[421846198] + v30);
      v36 = v35;
      *(float *)&dword_140404A6C[v26 + 284956337] = (float)(v34 * v17)
                                                  + *(float *)((char *)&dword_140404A6C[421846196] + v30);
      v37 = *(float *)((char *)&dword_140404A6C[421846198] + v32);
      if ( (float)(v35 - v37) >= 3.14159265359 )
        v37 = v37 + 6.28318530718;
      if ( (float)(v37 - v35) >= 3.14159265359 )
        v35 = v35 + 6.28318530718;
      v38 = *(float *)((char *)&dword_140404A6C[421846200] + v32);
      v39 = v37 - v35;
      v40 = *(float *)((char *)&dword_140404A6C[421846204] + v30);
      *(float *)&v41 = (float)(v39 * v17) + v36;
      v42 = *(float *)((char *)&dword_140404A6C[421846205] + v30);
      dword_140404A6C[v26 + 284956339] = v41;
      v43 = *(float *)((char *)&dword_140404A6C[421846201] + v30);
      *(float *)&dword_140404A6C[v26 + 284956341] = (float)((float)(v38
                                                                  - *(float *)((char *)&dword_140404A6C[421846200] + v30))
                                                          * v17)
                                                  + *(float *)((char *)&dword_140404A6C[421846200] + v30);
      *(float *)&v44 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846201] + v32) - v43) * v17) + v43;
      v45 = *(float *)((char *)&dword_140404A6C[421846202] + v30);
      dword_140404A6C[v26 + 284956342] = v44;
      *(float *)&v46 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846202] + v32) - v45) * v17) + v45;
      v47 = *(float *)((char *)&dword_140404A6C[421846203] + v30);
      dword_140404A6C[v26 + 284956343] = v46;
      *(float *)&v48 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846203] + v32) - v47) * v17) + v47;
      v49 = *(float *)((char *)&dword_140404A6C[421846204] + v32);
      dword_140404A6C[v26 + 284956344] = v48;
      *(float *)&v50 = (float)((float)(*(float *)((char *)&dword_140404A6C[421846205] + v32) - v42) * v17) + v42;
      *(float *)&dword_140404A6C[v26 + 284956345] = (float)((float)(v49 - v40) * v17) + v40;
      dword_140404A6C[v26 + 284956346] = v50;
      sub_1400C2F90(
        0x140000000LL + v22 * 4 + 1144038744,
        &dword_140404A6C[v28 / 4 + 421846206 + v22],
        &dword_140404A6C[v29 + 421846206 + v22]);
      v51 = v29 * 4 - v28;
      v52 = 0x140000000LL + v28 + v22 * 4 + 1691598300;
      v53 = (char *)&dword_140404A6C[284956377] - (char *)&dword_140404A6C[421846236] - v28;
      v54 = 15;
      do
      {
        sub_1400C2F90(v53 + v52, v52, v51 + v52);
        v52 += 84;
        --v54;
      }
      while ( v54 );
      v55 = 15;
      v56 = (float *)&dword_140404A6C[v26 + 284956366];
      v57 = (float *)&dword_140404A6C[282486075];
      v58 = 0x140000054LL + v22 * 4 + 1144038744;
      do
      {
        v59 = *(v57 - 1);
        v60 = *v57;
        v61 = 21LL * *((int *)v57 - 5);
        v62 = *v57;
        v63 = *v57;
        v64 = v26 * 4 + v61 * 4;
        v65 = (float)(v59 * *(float *)&dword_140404A6C[v26 + 284956347 + v61])
            + *(float *)&dword_140404A6C[v26 + 284956344 + v61];
        *(v56 - 1) = v65;
        v66 = (float)(v59 * *(float *)((char *)&dword_140404A6C[284956348] + v64))
            + *(float *)((char *)&dword_140404A6C[284956345] + v64);
        *v56 = v66;
        v67 = (float)(v59 * *(float *)((char *)&dword_140404A6C[284956349] + v64))
            + *(float *)((char *)&dword_140404A6C[284956346] + v64);
        v56[1] = v67;
        v68 = (float)(v62 * *(float *)&dword_140404A6C[v26 + 284956350 + v61]) + v65;
        v69 = v57[1];
        *(v56 - 1) = v68;
        v70 = (float)(v63 * *(float *)&dword_140404A6C[v26 + 284956351 + v61]) + v66;
        *v56 = v70;
        v71 = (float)(v60 * *(float *)&dword_140404A6C[v26 + 284956352 + v61]) + v67;
        v56[1] = v71;
        *(v56 - 1) = (float)(v69 * *(float *)&dword_140404A6C[v26 + 284956353 + v61]) + v68;
        *v56 = (float)(v69 * *(float *)&dword_140404A6C[v26 + 284956354 + v61]) + v70;
        v56[1] = (float)(v69 * *(float *)&dword_140404A6C[v26 + 284956355 + v61]) + v71;
        sub_14007A010(v58, v58 + 36, (__int64)&dword_140404A6C[v61 + 284956347 + v22]);
        v72 = *(v57 - 4) - *(v57 - 1);
        v73 = *(v57 - 3) - *v57;
        v74 = *(v57 - 2) - v57[1];
        v75 = (float)(v72 * v56[2]) + *(v56 - 1);
        *(v56 - 1) = v75;
        v76 = (float)(v72 * v56[3]) + *v56;
        *v56 = v76;
        v77 = (float)(v72 * v56[4]) + v56[1];
        v56[1] = v77;
        v78 = (float)(v73 * v56[5]) + v75;
        *(v56 - 1) = v78;
        v79 = (float)(v73 * v56[6]) + v76;
        *v56 = v79;
        v80 = (float)(v73 * v56[7]) + v77;
        v56[1] = v80;
        *(v56 - 1) = (float)(v74 * v56[8]) + v78;
        *v56 = (float)(v74 * v56[9]) + v79;
        v58 += 84;
        v57 += 25;
        v56[1] = (float)(v74 * v56[10]) + v80;
        v56 += 21;
        --v55;
      }
      while ( v55 );
      v24 = v131;
      v25 = v132;
      v27 = v130;
      v23 = v133;
    }
    v24 += 7166;
    v22 += 344;
    v26 += 344;
    v131 = v24;
    v132 = --v25;
  }
  while ( v25 );
  v81 = &dword_140404A6C[129716709];
  v82 = 0;
  v83 = 0;
  v84 = 512;
  do
  {
    if ( *v81 )
    {
      v85 = 563328 * v130 + v83 * 4;
      v86 = *(float *)((char *)&dword_140404A6C[421934260] + v85);
      v87 = *(float *)((char *)&dword_140404A6C[421934262] + v85);
      v88 = *(float *)((char *)&dword_140404A6C[421934261] + v85);
      dword_140404A6C[v83 + 285044400] = *(unsigned int *)((char *)&dword_140404A6C[421934259] + v85);
      v89 = 563328 * v23 + v83 * 4;
      *(float *)&v90 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934260] + v89) - v86) * v17) + v86;
      v91 = *(float *)((char *)&dword_140404A6C[421934261] + v89);
      dword_140404A6C[v83 + 285044401] = v90;
      *(float *)&v92 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934262] + v89) - v87) * v17) + v87;
      *(float *)&dword_140404A6C[v83 + 285044402] = (float)((float)(v91 - v88) * v17) + v88;
      dword_140404A6C[v83 + 285044403] = v92;
      sub_1400C2F90(
        &dword_140404A6C[v82 + 285044404],
        &dword_140404A6C[140832 * v130 + 421934263 + v82],
        &dword_140404A6C[140832 * v23 + 421934263 + v82]);
      v93 = v83 * 4 + 563328 * v23;
      v94 = v83 * 4 + 563328 * v130;
      v95 = *(float *)((char *)&dword_140404A6C[421934273] + v94);
      *(float *)&dword_140404A6C[v83 + 285044413] = (float)(v17 * *(float *)((char *)&dword_140404A6C[421934275] + v93))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v94);
      *(float *)&v96 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v93) - v95) * v17) + v95;
      v97 = *(float *)((char *)&dword_140404A6C[421934274] + v94);
      v98 = v83 * 4 + 16 * (35208 * v130 + 1);
      dword_140404A6C[v83 + 285044414] = v96;
      v99 = *(float *)((char *)&dword_140404A6C[421934274] + v93);
      v100 = v83 * 4 + 16 * (35208 * v23 + 1);
      *(float *)&v101 = (float)((float)(v99 - v97) * v17) + v97;
      v102 = *(float *)((char *)&dword_140404A6C[421934273] + v98);
      dword_140404A6C[v83 + 285044415] = v101;
      *(float *)&dword_140404A6C[v83 + 285044417] = (float)(v17 * *(float *)((char *)&dword_140404A6C[421934275] + v100))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v98);
      *(float *)&v103 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v100) - v102) * v17) + v102;
      v104 = *(float *)((char *)&dword_140404A6C[421934274] + v98);
      dword_140404A6C[v83 + 285044418] = v103;
      *(float *)&dword_140404A6C[v83 + 285044419] = (float)((float)(*(float *)((char *)&dword_140404A6C[421934274] + v100)
                                                                  - v104)
                                                          * v17)
                                                  + v104;
      v105 = v83 * 4 + 16 * (35208 * v23 + 2);
      v106 = v83 * 4 + 16 * (35208 * v130 + 2);
      v107 = *(float *)((char *)&dword_140404A6C[421934273] + v106);
      *(float *)&dword_140404A6C[v83 + 285044421] = (float)(v17 * *(float *)((char *)&dword_140404A6C[421934275] + v105))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v106);
      *(float *)&v108 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v105) - v107) * v17) + v107;
      v109 = *(float *)((char *)&dword_140404A6C[421934274] + v106);
      dword_140404A6C[v83 + 285044422] = v108;
      v110 = *(float *)((char *)&dword_140404A6C[421934274] + v105);
      v111 = v83 * 4 + 16 * (35208 * v23 + 3);
      v112 = v83 * 4 + 16 * (35208 * v130 + 3);
      *(float *)&v113 = (float)((float)(v110 - v109) * v17) + v109;
      v114 = *(float *)((char *)&dword_140404A6C[421934273] + v112);
      dword_140404A6C[v83 + 285044423] = v113;
      *(float *)&dword_140404A6C[v83 + 285044425] = (float)(v17 * *(float *)((char *)&dword_140404A6C[421934275] + v111))
                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v112);
      *(float *)&v115 = (float)((float)(*(float *)((char *)&dword_140404A6C[421934273] + v111) - v114) * v17) + v114;
      v116 = *(float *)((char *)&dword_140404A6C[421934274] + v112);
      dword_140404A6C[v83 + 285044426] = v115;
      *(float *)&dword_140404A6C[v83 + 285044427] = (float)((float)(*(float *)((char *)&dword_140404A6C[421934274] + v111)
                                                                  - v116)
                                                          * v17)
                                                  + v116;
    }
    v82 += 77;
    v81 += 5210;
    v83 += 77;
    --v84;
  }
  while ( v84 );
  v117 = 0;
  v118 = &dword_140404A6C[278845893];
  v119 = 0;
  v120 = 1024;
  do
  {
    if ( *v118 )
    {
      v121 = (float *)&dword_140404A6C[140832 * v130 + 421973684 + v117];
      v122 = v117 * 4 + 563328 * v23;
      *(float *)&v123 = (float)((float)(*(float *)((char *)&dword_140404A6C[421973685] + v122) - v121[1]) * v17)
                      + v121[1];
      *(float *)&dword_140404A6C[v117 + 285083825] = (float)((float)(*(float *)((char *)&dword_140404A6C[421973684]
                                                                              + v122)
                                                                   - *v121)
                                                           * v17)
                                                   + *v121;
      v124 = *(float *)((char *)&dword_140404A6C[421973686] + v122) - v121[2];
      dword_140404A6C[v117 + 285083826] = v123;
      *(float *)&dword_140404A6C[v117 + 285083827] = (float)(v124 * v17) + v121[2];
      sub_1400C2F90(
        &dword_140404A6C[v119 + 285083828],
        &dword_140404A6C[140832 * v130 + 421973687 + v119],
        &dword_140404A6C[140832 * v23 + 421973687 + v119]);
    }
    v119 += 13;
    v118 += 1760;
    v117 += 13;
    --v120;
  }
  while ( v120 );
  v125 = *(float *)&dword_140404A6C[140832 * v130 + 421986997];
  v126 = *(float *)&dword_140404A6C[140832 * v130 + 421986998];
  v127 = *(float *)&dword_140404A6C[140832 * v23 + 421986997];
  *(float *)&dword_140404A6C[284024520] = (float)((float)(*(float *)&dword_140404A6C[140832 * v23 + 421986996]
                                                        - *(float *)&dword_140404A6C[140832 * v130 + 421986996])
                                                * v17)
                                        + *(float *)&dword_140404A6C[140832 * v130 + 421986996];
  *(float *)&v128 = (float)((float)(*(float *)&dword_140404A6C[140832 * v23 + 421986998] - v126) * v17) + v126;
  *(float *)&dword_140404A6C[284024521] = (float)((float)(v127 - v125) * v17) + v125;
  dword_140404A6C[284024522] = v128;
  return sub_1400C2F90(
           &dword_140404A6C[284024526],
           0x140000000LL + 563328 * v130 + 1692161364,
           0x140000000LL + 563328 * v23 + 1692161364);
}

