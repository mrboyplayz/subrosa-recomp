/* Address: 0x140061a60 | Name: sub_140061A60 | Size: 7296 bytes */
__int64 __fastcall sub_140061A60(unsigned int a1, signed int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float *v12; // rax
  unsigned __int64 v13; // rcx
  float *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  __int64 v18; // r10
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float *v22; // rdx
  unsigned __int64 v23; // r9
  unsigned int v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm0_4
  unsigned int v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  unsigned int v31; // xmm1_4
  float v32; // xmm0_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  unsigned int v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float *v39; // rdx
  __int64 v40; // r9
  unsigned int v41; // xmm1_4
  __int64 v42; // rax
  float v43; // xmm0_4
  __int64 v44; // rbx
  unsigned int *v45; // r11
  __int64 v46; // rbx
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  __int64 v51; // r10
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  float v56; // xmm2_4
  float v57; // xmm1_4
  __int64 v58; // rax
  float v59; // xmm5_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  unsigned int v62; // xmm2_4
  float v63; // xmm4_4
  float v64; // xmm7_4
  __int64 v65; // r11
  __int64 v66; // rbx
  unsigned int *v67; // r8
  unsigned __int64 v68; // r9
  unsigned int *v69; // r8
  __int64 v70; // r10
  int v71; // r9d
  _DWORD *v72; // r8
  unsigned int v73; // r10d
  unsigned int v74; // ebx
  unsigned int v75; // edi
  unsigned int v76; // esi
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm0
  __int64 v80; // r8
  unsigned int v81; // eax
  __int64 v82; // rdx
  float *v83; // r11
  int v84; // ecx
  unsigned int *v85; // rax
  int v86; // r10d
  float *v87; // r8
  __int64 v88; // r9
  int v89; // ecx
  int v90; // eax
  float v91; // xmm4_4
  float v92; // xmm5_4
  __int64 v93; // rax
  float v94; // xmm2_4
  float v95; // xmm7_4
  float v96; // xmm1_4
  float v97; // xmm3_4
  float v98; // xmm6_4
  float v99; // xmm4_4
  float v100; // xmm0_4
  float v101; // xmm8_4
  float v102; // xmm7_4
  float v103; // xmm0_4
  float v104; // xmm3_4
  float v105; // xmm4_4
  float v106; // xmm2_4
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // r8d
  float *v110; // rax
  float v111; // xmm4_4
  float *v112; // r9
  float v113; // xmm5_4
  float v114; // xmm3_4
  float v115; // xmm1_4
  float v116; // xmm3_4
  float v117; // xmm4_4
  float v118; // xmm0_4
  float *v119; // r10
  int v120; // ecx
  float *v121; // r9
  unsigned int *v122; // rax
  unsigned int *v123; // rax
  __int64 v124; // r9
  int v125; // ecx
  int v126; // r8d
  float *v127; // r11
  int v128; // r10d
  __int64 v129; // r13
  int v130; // r12d
  float *v131; // r10
  int v132; // r15d
  float *v133; // r14
  float *v134; // r9
  __int64 v135; // rbx
  int v136; // edi
  __int64 v137; // rdx
  unsigned int v138; // eax
  __int64 v139; // rsi
  __int64 v140; // rcx
  unsigned int v141; // eax
  __int64 v142; // rax
  int v143; // r8d
  float v144; // xmm4_4
  float v145; // xmm5_4
  float v146; // xmm3_4
  float v147; // xmm1_4
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  float v151; // xmm4_4
  float v152; // xmm5_4
  float v153; // xmm3_4
  float v154; // xmm1_4
  float v155; // xmm3_4
  float v156; // xmm4_4
  float v157; // xmm5_4
  float v158; // xmm4_4
  float v159; // xmm5_4
  float v160; // xmm3_4
  float v161; // xmm1_4
  float v162; // xmm3_4
  float v163; // xmm4_4
  float v164; // xmm5_4
  int v165; // eax
  float v166; // xmm6_4
  float v167; // xmm7_4
  float v168; // xmm8_4
  float v169; // xmm9_4
  float v170; // xmm10_4
  float v171; // xmm11_4
  float v172; // xmm3_4
  float v173; // xmm2_4
  float v174; // xmm1_4
  float v175; // xmm5_4
  float v176; // xmm5_4
  float v177; // xmm0_4
  float v178; // xmm4_4
  float v179; // xmm1_4
  float v180; // xmm3_4
  float v181; // xmm2_4
  float v182; // xmm4_4
  float v183; // xmm3_4
  float v184; // xmm5_4
  float v185; // xmm1_4
  float v186; // xmm3_4
  float v187; // xmm4_4
  float v188; // xmm5_4
  int v189; // r9d
  unsigned int *v190; // r8
  __int64 v191; // rax
  unsigned int v192; // xmm1_4
  unsigned int v193; // xmm0_4
  float v194; // xmm1_4
  __int64 v195; // rbx
  __int64 v196; // rax
  int v197; // ebx
  unsigned int v198; // eax
  signed int v199; // r11d
  _DWORD *v200; // r10
  float *v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  unsigned int v205; // xmm3_4
  unsigned int v206; // xmm4_4
  unsigned int v207; // xmm5_4
  float v208; // xmm2_4
  __int64 v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rax
  unsigned int v212; // xmm3_4
  unsigned int v213; // xmm4_4
  unsigned int v214; // xmm5_4
  int v215; // eax
  float v216; // xmm2_4
  __int64 v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v221; // [rsp+0h] [rbp-100h] BYREF
  int v222; // [rsp+20h] [rbp-E0h]
  float v223; // [rsp+28h] [rbp-D8h] BYREF
  int v224; // [rsp+2Ch] [rbp-D4h]
  int v225; // [rsp+30h] [rbp-D0h]
  int v226; // [rsp+38h] [rbp-C8h]
  int v227; // [rsp+3Ch] [rbp-C4h]
  int v228; // [rsp+40h] [rbp-C0h]
  unsigned int v229; // [rsp+44h] [rbp-BCh]
  unsigned int v230; // [rsp+48h] [rbp-B8h]
  unsigned int *v231; // [rsp+50h] [rbp-B0h]
  __int64 v232; // [rsp+58h] [rbp-A8h]
  __int64 v233; // [rsp+60h] [rbp-A0h]
  __int64 v234; // [rsp+68h] [rbp-98h]
  __int64 v235; // [rsp+70h] [rbp-90h]
  __int64 v236; // [rsp+78h] [rbp-88h]
  __m128i si128; // [rsp+80h] [rbp-80h] BYREF
  __m128i v238; // [rsp+90h] [rbp-70h]
  __int64 v239; // [rsp+A0h] [rbp-60h]

  v2 = a2;
  v3 = 99776LL * a2;
  v4 = (int)a1;
  v5 = a2;
  v229 = a2;
  v230 = a1;
  v236 = a2;
  v6 = *(int *)((char *)&dword_140404A6C[346707733] + v3);
  v235 = v3;
  if ( !(_DWORD)v6 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v221 ^ v239);
  v7 = v6;
  v8 = 0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  if ( v6 >= 4 )
  {
    v12 = (float *)((char *)&dword_140404A6C[346707737] + v3);
    v13 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v8 = 4 * v13;
    do
    {
      v9 = (float)((float)((float)(v9 + *(v12 - 2)) + v12[3]) + v12[8]) + v12[13];
      v10 = (float)((float)((float)(v10 + *(v12 - 1)) + v12[4]) + v12[9]) + v12[14];
      v11 = (float)((float)((float)(v11 + *v12) + v12[5]) + v12[10]) + v12[15];
      v12 += 20;
      --v13;
    }
    while ( v13 );
  }
  if ( v8 < v6 )
  {
    v14 = (float *)((char *)&dword_140404A6C[5 * v8 + 346707737] + v3);
    v15 = v6 - v8;
    do
    {
      v9 = v9 + *(v14 - 2);
      v10 = v10 + *(v14 - 1);
      v11 = v11 + *v14;
      v14 += 5;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  v17 = 3632 * v4;
  dword_140404A6C[177167565] = 0;
  v18 = 0;
  v234 = v17;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  v19 = v9 * (float)(1.0 / (float)(int)v6);
  v20 = v10 * (float)(1.0 / (float)(int)v6);
  v21 = v11 * (float)(1.0 / (float)(int)v6);
  *(float *)((char *)&dword_140404A6C[178527485] + v17) = v19;
  *(float *)((char *)&dword_140404A6C[178527486] + v17) = v20;
  *(float *)((char *)&dword_140404A6C[178527487] + v17) = v21;
  if ( v6 < 4 )
  {
    if ( (int)v6 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v22 = (float *)((char *)&dword_140404A6C[346707737] + v3);
    v23 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v18 = 4 * v23;
    do
    {
      *(float *)&v24 = *(v22 - 1) - v20;
      v25 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v25 + 177167567] = *(v22 - 2) - v19;
      v26 = *v22;
      dword_140404A6C[v25 + 177167568] = v24;
      *(float *)&v27 = v22[4] - v20;
      *(float *)&dword_140404A6C[v25 + 177167569] = v26 - v21;
      v28 = v22[3];
      ++dword_140404A6C[177167565];
      v29 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v29 + 177167567] = v28 - v19;
      v30 = v22[5];
      dword_140404A6C[v29 + 177167568] = v27;
      *(float *)&v31 = v22[9] - v20;
      *(float *)&dword_140404A6C[v29 + 177167569] = v30 - v21;
      v32 = v22[8];
      ++dword_140404A6C[177167565];
      v33 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v33 + 177167567] = v32 - v19;
      v34 = v22[10];
      dword_140404A6C[v33 + 177167568] = v31;
      *(float *)&v35 = v22[14] - v20;
      *(float *)&dword_140404A6C[v33 + 177167569] = v34 - v21;
      v36 = v22[13];
      ++dword_140404A6C[177167565];
      v37 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v37 + 177167567] = v36 - v19;
      v38 = v22[15];
      v22 += 20;
      dword_140404A6C[v37 + 177167568] = v35;
      *(float *)&dword_140404A6C[v37 + 177167569] = v38 - v21;
      ++dword_140404A6C[177167565];
      --v23;
    }
    while ( v23 );
    if ( v18 >= v7 )
      goto LABEL_16;
  }
  v39 = (float *)((char *)&dword_140404A6C[5 * v18 + 346707737] + v3);
  v40 = v7 - v18;
  do
  {
    *(float *)&v41 = *(v39 - 1) - v20;
    v42 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v42 + 177167567] = *(v39 - 2) - v19;
    v43 = *v39;
    v39 += 5;
    dword_140404A6C[v42 + 177167568] = v41;
    *(float *)&dword_140404A6C[v42 + 177167569] = v43 - v21;
    ++dword_140404A6C[177167565];
    --v40;
  }
  while ( v40 );
LABEL_16:
  v16 = dword_140404A6C[177495247];
LABEL_17:
  v44 = *(int *)((char *)&dword_140404A6C[346713116] + v3);
  if ( v7 < v44 )
  {
    v45 = &dword_140404A6C[24944 * v5 + 346713117 + 8 * v7];
    v46 = v44 - v7;
    do
    {
      v47 = *((float *)v45 + 4);
      v48 = *((float *)v45 + 5);
      v49 = *((float *)v45 + 6);
      v50 = *((float *)v45 + 7);
      v51 = v3 + 20LL * (int)*v45;
      v52 = v3 + 20LL * (int)v45[1];
      v53 = (int)v45[3];
      v54 = v3 + 20LL * (int)v45[2];
      v45 += 8;
      v55 = v3 + 20 * v53;
      v56 = (float)((float)(v48 * *(float *)((char *)&dword_140404A6C[346707735] + v52))
                  + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707735] + v51)))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707735] + v54));
      v57 = v49 * *(float *)((char *)&dword_140404A6C[346707736] + v54);
      v58 = 3 * dword_140404A6C[177167565];
      v59 = v49 * *(float *)((char *)&dword_140404A6C[346707737] + v54);
      v60 = (float)(v48 * *(float *)((char *)&dword_140404A6C[346707736] + v52))
          + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707736] + v51));
      v61 = v50 * *(float *)((char *)&dword_140404A6C[346707736] + v55);
      *(float *)&v62 = (float)(v56 + (float)(v50 * *(float *)((char *)&dword_140404A6C[346707735] + v55))) - v19;
      v63 = v50 * *(float *)((char *)&dword_140404A6C[346707737] + v55);
      v64 = (float)(v48 * *(float *)((char *)&dword_140404A6C[346707737] + v52))
          + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707737] + v51));
      dword_140404A6C[v58 + 177167567] = v62;
      *(float *)&dword_140404A6C[v58 + 177167568] = (float)((float)(v60 + v57) + v61) - v20;
      *(float *)&dword_140404A6C[v58 + 177167569] = (float)((float)(v64 + v59) + v63) - v21;
      ++dword_140404A6C[177167565];
      --v46;
    }
    while ( v46 );
    v16 = dword_140404A6C[177495247];
    v17 = v234;
  }
  v65 = *(int *)((char *)&dword_140404A6C[346709019] + v3);
  v66 = 0;
  if ( v65 >= 4 )
  {
    v67 = (unsigned int *)((char *)&dword_140404A6C[346709021] + v3);
    v68 = ((unsigned __int64)(v65 - 4) >> 2) + 1;
    v66 = 4 * v68;
    do
    {
      if ( *(v67 - 1) == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = *v67;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[15] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[16];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[17];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[18];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[31] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[32];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[33];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[34];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[47] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[48];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[49];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[50];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      v67 += 64;
      --v68;
    }
    while ( v68 );
  }
  if ( v66 < v65 )
  {
    v69 = &dword_140404A6C[16 * (v66 + 1559 * v5) + 346709021];
    v70 = v65 - v66;
    do
    {
      if ( *(v69 - 1) == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = *v69;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      v69 += 16;
      --v70;
    }
    while ( v70 );
  }
  v71 = 0;
  if ( (int)v65 > 0 )
  {
    v72 = (unsigned int *)((char *)&dword_140404A6C[346709035] + v3);
    do
    {
      if ( *(v72 - 15) == 4 && *v72 != 1 )
      {
        v73 = *(v72 - 14);
        v74 = *(v72 - 12);
        v75 = *(v72 - 13);
        dword_140404A6C[3 * v16 + 177495248] = v73;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v75;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 0;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v73;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74;
        v76 = *(v72 - 11);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v76;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
        if ( (v2 <= 9 || v2 == 12) && v71 == *(unsigned int *)((char *)&dword_140404A6C[346709019] + v3) - 1 )
        {
          dword_140404A6C[3 * v16 + 177495248] = v73;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v75;
          dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
          v77 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v77 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v77 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v77 + 178011348] = 1065353216;
          dword_140404A6C[v77 + 178011350] = 1065353216;
          ++dword_140404A6C[177495247];
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v73;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v76;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
          dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
          v78 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v78 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v78 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v78 + 178011348] = 1065353216;
          dword_140404A6C[v78 + 178011350] = 1065353216;
          v16 = ++dword_140404A6C[177495247];
        }
      }
      ++v71;
      v72 += 16;
    }
    while ( v71 < (int)v65 );
  }
  if ( v2 <= 6 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279020);
    v238 = _mm_load_si128((const __m128i *)&xmmword_140279060);
    sub_140004140((__int64)&si128);
    v16 = dword_140404A6C[177495247];
  }
  if ( v2 - 7 <= 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140278FF0);
    v238 = _mm_load_si128((const __m128i *)&xmmword_140279040);
    sub_140004140((__int64)&si128);
    v16 = dword_140404A6C[177495247];
  }
  if ( v2 == 10 )
  {
    v79 = _mm_load_si128((const __m128i *)&xmmword_140279040);
LABEL_54:
    v238 = _mm_load_si128((const __m128i *)&xmmword_140279060);
    si128 = v79;
    sub_140004140((__int64)&si128);
    v16 = dword_140404A6C[177495247];
    goto LABEL_55;
  }
  if ( v2 == 12 )
  {
    v79 = _mm_load_si128((const __m128i *)&xmmword_140279020);
    goto LABEL_54;
  }
LABEL_55:
  v80 = *(int *)((char *)&dword_140404A6C[346715165] + v3);
  v81 = 0;
  dword_140404A6C[178519250] = 0;
  if ( v80 > 0 )
  {
    v82 = 0x140000000LL + v3 + 1391074024;
    do
    {
      v82 += 8;
      dword_140404A6C[2 * v81 + 178519251] = *(_DWORD *)(v82 - 12);
      dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = *(_DWORD *)(v82 - 8);
      v81 = ++dword_140404A6C[178519250];
      --v80;
    }
    while ( v80 );
    v16 = dword_140404A6C[177495247];
  }
  v83 = (float *)&dword_140404A6C[177249489];
  v84 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v85 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v85 - 1) = 0;
      ++v84;
      *v85 = 0;
      v85 += 3;
    }
    while ( v84 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v86 = 0;
  if ( v16 > 0 )
  {
    v87 = (float *)&dword_140404A6C[177814739];
    do
    {
      v88 = 3 * *((_DWORD *)v87 - 319491);
      v89 = 3 * *((_DWORD *)v87 - 319490);
      v90 = *((_DWORD *)v87 - 319489);
      v91 = *(float *)&dword_140404A6C[v88 + 177167568];
      v92 = *(float *)&dword_140404A6C[v88 + 177167569];
      v223 = *(float *)&dword_140404A6C[v88 + 177167567];
      v93 = 3 * v90;
      v224 = LODWORD(v91);
      v225 = LODWORD(v92);
      v94 = *(float *)&dword_140404A6C[v93 + 177167568] - v91;
      v95 = *(float *)&dword_140404A6C[v93 + 177167569] - v92;
      v96 = *(float *)&dword_140404A6C[v89 + 177167569] - v92;
      v97 = *(float *)&dword_140404A6C[v89 + 177167568] - v91;
      v98 = *(float *)&dword_140404A6C[v89 + 177167567] - v223;
      v99 = (float)(v94 * v96) - (float)(v95 * v97);
      v100 = *(float *)&dword_140404A6C[v93 + 177167567] - v223;
      v101 = (float)(v100 * v97) - (float)(v94 * v98);
      v102 = (float)(v95 * v98) - (float)(v100 * v96);
      v103 = fsqrt((float)((float)(v102 * v102) + (float)(v99 * v99)) + (float)(v101 * v101));
      if ( v103 == 0.0 )
      {
        v104 = 0.0;
        v105 = 0.0;
        v106 = 0.0;
      }
      else
      {
        v104 = (float)(1.0 / v103) * v99;
        v105 = (float)(1.0 / v103) * v102;
        v106 = (float)(1.0 / v103) * v101;
      }
      *(v87 - 2) = v104;
      *(v87 - 1) = v105;
      *v87 = v106;
      ++v86;
      *(float *)&dword_140404A6C[v88 + 177249487] = v104 + *(float *)&dword_140404A6C[v88 + 177249487];
      *(float *)&dword_140404A6C[v88 + 177249488] = v105 + *(float *)&dword_140404A6C[v88 + 177249488];
      *(float *)&dword_140404A6C[v88 + 177249489] = v106 + *(float *)&dword_140404A6C[v88 + 177249489];
      v107 = 3 * *((_DWORD *)v87 - 319490);
      *(float *)&dword_140404A6C[v107 + 177249487] = v104 + *(float *)&dword_140404A6C[v107 + 177249487];
      *(float *)&dword_140404A6C[v107 + 177249488] = v105 + *(float *)&dword_140404A6C[v107 + 177249488];
      *(float *)&dword_140404A6C[v107 + 177249489] = v106 + *(float *)&dword_140404A6C[v107 + 177249489];
      *(float *)&v107 = *(v87 - 319489);
      v87 += 3;
      v108 = 3 * (int)v107;
      *(float *)&dword_140404A6C[v108 + 177249487] = v104 + *(float *)&dword_140404A6C[v108 + 177249487];
      *(float *)&dword_140404A6C[v108 + 177249488] = v105 + *(float *)&dword_140404A6C[v108 + 177249488];
      *(float *)&dword_140404A6C[v108 + 177249489] = v106 + *(float *)&dword_140404A6C[v108 + 177249489];
      v16 = dword_140404A6C[177495247];
    }
    while ( v86 < (int)dword_140404A6C[177495247] );
  }
  v109 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v110 = (float *)&dword_140404A6C[177249489];
    do
    {
      v111 = *(v110 - 1);
      v112 = v110;
      v113 = *(v110 - 2);
      v114 = *v110;
      v115 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v114 * v114));
      if ( v115 == 0.0 )
      {
        v116 = 0.0;
        v117 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v116 = v114 * (float)(1.0 / v115);
        v117 = v111 * (float)(1.0 / v115);
        v118 = (float)(1.0 / v115) * v113;
      }
      *(v110 - 2) = v118;
      ++v109;
      *(v110 - 1) = v117;
      v110 += 3;
      *v112 = v116;
    }
    while ( v109 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v119 = (float *)&dword_140404A6C[177814738];
  v120 = 0;
  v121 = (float *)&dword_140404A6C[177863891];
  if ( v16 > 0 )
  {
    v122 = &dword_140404A6C[177863891];
    do
    {
      *((_QWORD *)v122 - 1) = 0;
      ++v120;
      *(_QWORD *)v122 = 0;
      *((_QWORD *)v122 + 1) = 0;
      *((_QWORD *)v122 + 2) = 0;
      v122[6] = 0;
      v122 += 9;
      v16 = dword_140404A6C[177495247];
    }
    while ( v120 < (int)dword_140404A6C[177495247] );
    if ( (int)dword_140404A6C[177495247] > 0 )
    {
      v123 = &dword_140404A6C[177863891];
      v222 = 0;
      v124 = 3;
      v231 = &dword_140404A6C[177863891];
      v125 = 1;
      v233 = 3;
      v126 = 0;
      v227 = 1;
      v127 = (float *)&dword_140404A6C[177814738];
      do
      {
        v228 = v125;
        v128 = v125;
        v226 = v125;
        if ( v125 < v16 )
        {
          v129 = v124;
          v130 = v126 + 3;
          v131 = v127 + 4;
          do
          {
            v132 = 0;
            v232 = 3;
            v133 = v127 - 319490;
            v134 = (float *)v123;
            do
            {
              v135 = 0;
              v136 = 1;
              do
              {
                v137 = 3 * *(_DWORD *)v133;
                v138 = 3 * dword_140404A6C[v130 + 177495248 + v136 % 3];
                if ( *(float *)&dword_140404A6C[v138 + 177167567] == *(float *)&dword_140404A6C[v137 + 177167567]
                  && *(float *)&dword_140404A6C[v138 + 177167568] == *(float *)&dword_140404A6C[v137 + 177167568]
                  && *(float *)&dword_140404A6C[v138 + 177167569] == *(float *)&dword_140404A6C[v137 + 177167569] )
                {
                  v139 = v135 + v129;
                  v140 = (int)(3 * dword_140404A6C[v222 + 177495248 + (v132 + 1) % 3]);
                  v141 = 3 * dword_140404A6C[v135 + 177495248 + v129];
                  if ( *(float *)&dword_140404A6C[v141 + 177167567] == *(float *)&dword_140404A6C[v140 + 177167567]
                    && *(float *)&dword_140404A6C[v141 + 177167568] == *(float *)&dword_140404A6C[v140 + 177167568]
                    && *(float *)&dword_140404A6C[v141 + 177167569] == *(float *)&dword_140404A6C[v140 + 177167569] )
                  {
                    v142 = 3 * v139;
                    *(v134 - 2) = *(v127 - 1) + *(v134 - 2);
                    *(v134 - 1) = *v127 + *(v134 - 1);
                    *v134 = *v134 + v127[1];
                    *(float *)&dword_140404A6C[v142 + 177863889] = *(v127 - 1)
                                                                 + *(float *)&dword_140404A6C[3 * v139 + 177863889];
                    *(float *)&dword_140404A6C[v142 + 177863890] = *(float *)&dword_140404A6C[3 * v139 + 177863890]
                                                                 + *v127;
                    *(float *)&dword_140404A6C[v142 + 177863891] = *(float *)&dword_140404A6C[3 * v139 + 177863891]
                                                                 + v127[1];
                    *(v134 - 2) = *(v134 - 2) + *(v131 - 2);
                    *(v134 - 1) = *(v131 - 1) + *(v134 - 1);
                    *v134 = *v134 + *v131;
                    *(float *)&dword_140404A6C[v142 + 177863889] = *(float *)&dword_140404A6C[3 * v139 + 177863889]
                                                                 + *(v131 - 2);
                    *(float *)&dword_140404A6C[v142 + 177863890] = *(float *)&dword_140404A6C[3 * v139 + 177863890]
                                                                 + *(v131 - 1);
                    *(float *)&dword_140404A6C[v142 + 177863891] = *(float *)&dword_140404A6C[3 * v139 + 177863891]
                                                                 + *v131;
                  }
                }
                ++v136;
                ++v135;
              }
              while ( v135 < 3 );
              ++v132;
              ++v133;
              v134 += 3;
              --v232;
            }
            while ( v232 );
            v130 += 3;
            v16 = dword_140404A6C[177495247];
            v131 += 3;
            ++v226;
            v129 += 3;
            v123 = v231;
          }
          while ( v226 < (int)dword_140404A6C[177495247] );
          v126 = v222;
          v125 = v227;
          v124 = v233;
          v128 = v228;
        }
        ++v125;
        v126 += 3;
        v124 += 3;
        v227 = v125;
        v123 += 9;
        v222 = v126;
        v127 += 3;
        v233 = v124;
        v231 = v123;
      }
      while ( v128 < v16 );
      v17 = v234;
      v121 = (float *)&dword_140404A6C[177863891];
      v2 = v229;
      v83 = (float *)&dword_140404A6C[177249489];
      v3 = v235;
      v119 = (float *)&dword_140404A6C[177814738];
      v5 = v236;
    }
  }
  v143 = 0;
  if ( v16 > 0 )
  {
    do
    {
      v144 = *(v121 - 1);
      v145 = *(v121 - 2);
      v146 = *v121;
      v147 = fsqrt((float)((float)(v145 * v145) + (float)(v144 * v144)) + (float)(v146 * v146));
      if ( v147 == 0.0 )
      {
        v148 = 0.0;
        v149 = 0.0;
        v150 = 0.0;
      }
      else
      {
        v148 = v146 * (float)(1.0 / v147);
        v149 = v144 * (float)(1.0 / v147);
        v150 = v145 * (float)(1.0 / v147);
      }
      *(v121 - 2) = v150;
      *(v121 - 1) = v149;
      *v121 = v148;
      v151 = v121[2];
      v152 = v121[1];
      v153 = v121[3];
      v154 = fsqrt((float)((float)(v152 * v152) + (float)(v151 * v151)) + (float)(v153 * v153));
      if ( v154 == 0.0 )
      {
        v155 = 0.0;
        v156 = 0.0;
        v157 = 0.0;
      }
      else
      {
        v155 = v153 * (float)(1.0 / v154);
        v156 = v151 * (float)(1.0 / v154);
        v157 = v152 * (float)(1.0 / v154);
      }
      v121[1] = v157;
      v121[2] = v156;
      v121[3] = v155;
      v158 = v121[5];
      v159 = v121[4];
      v160 = v121[6];
      v161 = fsqrt((float)((float)(v159 * v159) + (float)(v158 * v158)) + (float)(v160 * v160));
      if ( v161 == 0.0 )
      {
        v162 = 0.0;
        v163 = 0.0;
        v164 = 0.0;
      }
      else
      {
        v162 = v160 * (float)(1.0 / v161);
        v163 = v158 * (float)(1.0 / v161);
        v164 = v159 * (float)(1.0 / v161);
      }
      v121[4] = v164;
      ++v143;
      v121[5] = v163;
      v121[6] = v162;
      v121 += 9;
      v16 = dword_140404A6C[177495247];
    }
    while ( v143 < (int)dword_140404A6C[177495247] );
  }
  v165 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v166 = *(float *)&dword_1402F6180;
    v167 = *(float *)&dword_1402F617C;
    v168 = *(float *)&dword_1402F6178;
    v169 = *(float *)&dword_1402F6190;
    v170 = *(float *)&dword_1402F618C;
    v171 = *(float *)&dword_1402F6188;
    do
    {
      v172 = *(v83 - 1);
      v173 = *(v83 - 2);
      v174 = *v83;
      v175 = *v83;
      if ( fabs(v172) <= 0.70700002 )
      {
        v176 = v175 * v170;
        v177 = v172 * v169;
        v178 = v173 * v169;
        v179 = v174 * v171;
        v180 = v172 * v171;
        v181 = v173 * v170;
      }
      else
      {
        v176 = v175 * v167;
        v177 = v172 * v166;
        v178 = v173 * v166;
        v179 = v174 * v168;
        v180 = v172 * v168;
        v181 = v173 * v167;
      }
      v182 = v178 - v179;
      v183 = v180 - v181;
      v184 = v176 - v177;
      v185 = fsqrt((float)((float)(v182 * v182) + (float)(v184 * v184)) + (float)(v183 * v183));
      if ( v185 == 0.0 )
      {
        v186 = 0.0;
        v187 = 0.0;
        v188 = 0.0;
      }
      else
      {
        v186 = v183 * (float)(1.0 / v185);
        v187 = v182 * (float)(1.0 / v185);
        v188 = v184 * (float)(1.0 / v185);
      }
      v83[49150] = v188;
      ++v165;
      v83[49151] = v187;
      v83[49152] = v186;
      v83 += 3;
    }
    while ( v165 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v189 = 0;
  if ( v16 > 0 )
  {
    v190 = &dword_140404A6C[178011346];
    do
    {
      v191 = 3 * *((_DWORD *)v119 - 319490);
      v192 = dword_140404A6C[v191 + 177167568];
      v223 = *(float *)&dword_140404A6C[v191 + 177167567];
      v193 = dword_140404A6C[v191 + 177167569];
      v224 = v192;
      v194 = *v119;
      v225 = v193;
      if ( v5 == 13 && v194 > 0.89999998 )
      {
        *(_QWORD *)(v190 - 1) = 1061158912;
        *(_QWORD *)(v190 + 1) = 1061158912;
        *(_QWORD *)(v190 + 3) = 1061158912;
        v16 = dword_140404A6C[177495247];
      }
      ++v189;
      v119 += 3;
      v190 += 6;
    }
    while ( v189 < v16 );
  }
  v195 = v16;
  if ( v2 == 1 )
  {
    v225 = -1069285376;
    v224 = -1090519040;
    v223 = 0.0;
    sub_140002D00(&v223, 1.03125, 0.125, 0.0625);
    v224 = -1107296256;
    sub_140002D00(&v223, 0.375, 0.3125, 0.03125);
    v16 = dword_140404A6C[177495247];
  }
  if ( (int)v195 < v16 )
  {
    v196 = 0x140000000LL + 24 * v195 + 716258740;
    do
    {
      *(_QWORD *)(v196 - 4) = 1065353216;
      LODWORD(v195) = v195 + 1;
      *(_QWORD *)(v196 + 4) = 1065353216;
      *(_QWORD *)(v196 + 12) = 1065353216;
      v196 += 24;
    }
    while ( (int)v195 < (int)dword_140404A6C[177495247] );
  }
  v197 = *(unsigned int *)((char *)&dword_140404A6C[346709019] + v3);
  v198 = 0;
  *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) = 0;
  v199 = 0;
  if ( v197 > 0 )
  {
    v200 = (_DWORD *)(0x140000000LL + v3 + 1391049496);
    do
    {
      if ( *(v200 - 15) == 4 && *v200 == 1 )
      {
        v201 = (float *)(v200 - 10);
        v202 = 0;
        v203 = 2;
        *(unsigned int *)((char *)&dword_140404A6C[13 * v198 + 178527549] + v17) = v199;
        do
        {
          v204 = 3 * *((_DWORD *)v201 - 4);
          v205 = dword_140404A6C[v204 + 177167567];
          v206 = dword_140404A6C[v204 + 177167568];
          v207 = dword_140404A6C[v204 + 177167569];
          if ( *(_DWORD *)v201 != -1 )
          {
            v208 = v201[4];
            v209 = 3 * *(_DWORD *)v201;
            *(float *)&v205 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167567] - *(float *)&v205) * v208)
                            + *(float *)&v205;
            *(float *)&v206 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167568] - *(float *)&v206) * v208)
                            + *(float *)&v206;
            *(float *)&v207 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167569] - *(float *)&v207) * v208)
                            + *(float *)&v207;
          }
          if ( v2 != 13 )
          {
            *(float *)&v205 = *(float *)&v205 * 0.97500002;
            *(float *)&v206 = *(float *)&v206 * 0.97500002;
            *(float *)&v207 = *(float *)&v207 * 0.97500002;
          }
          v210 = v17 + v202 + 52LL * *(int *)((char *)&dword_140404A6C[178527536] + v17);
          v211 = 3 * *((_DWORD *)v201 - 3);
          *(unsigned int *)((char *)&dword_140404A6C[178527537] + v210) = v205;
          *(unsigned int *)((char *)&dword_140404A6C[178527538] + v210) = v206;
          *(unsigned int *)((char *)&dword_140404A6C[178527539] + v210) = v207;
          v212 = dword_140404A6C[v211 + 177167567];
          v213 = dword_140404A6C[v211 + 177167568];
          v214 = dword_140404A6C[v211 + 177167569];
          v215 = *((_DWORD *)v201 + 1);
          if ( v215 != -1 )
          {
            v216 = v201[5];
            v217 = 3 * v215;
            *(float *)&v212 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167567] - *(float *)&v212) * v216)
                            + *(float *)&v212;
            *(float *)&v213 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167568] - *(float *)&v213) * v216)
                            + *(float *)&v213;
            *(float *)&v214 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167569] - *(float *)&v214) * v216)
                            + *(float *)&v214;
          }
          if ( v2 != 13 )
          {
            *(float *)&v212 = *(float *)&v212 * 0.97500002;
            *(float *)&v213 = *(float *)&v213 * 0.97500002;
            *(float *)&v214 = *(float *)&v214 * 0.97500002;
          }
          v201 += 2;
          v218 = v202 + 52LL * *(int *)((char *)&dword_140404A6C[178527536] + v17);
          v202 += 24;
          v219 = v17 + v218;
          *(unsigned int *)((char *)&dword_140404A6C[178527540] + v219) = v212;
          *(unsigned int *)((char *)&dword_140404A6C[178527541] + v219) = v213;
          *(unsigned int *)((char *)&dword_140404A6C[178527542] + v219) = v214;
          --v203;
        }
        while ( v203 );
        v198 = *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) + 1;
        *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) = v198;
      }
      ++v199;
      v200 += 16;
    }
    while ( v199 < v197 );
  }
  sub_1401449C0(v230, 1);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v221 ^ v239);
}

