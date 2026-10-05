/* Address: 0x1400636e0 | Name: sub_1400636E0 | Size: 6401 bytes */
_UNKNOWN **__fastcall sub_1400636E0(int a1, int a2)
{
  _UNKNOWN **result; // rax
  int v3; // r15d
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float *v13; // rax
  unsigned __int64 v14; // rcx
  float *v15; // rcx
  __int64 v16; // rax
  int v17; // r11d
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r10
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float *v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // xmm1_4
  float v28; // xmm0_4
  unsigned int v29; // xmm1_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  unsigned int v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  float v40; // xmm0_4
  float *v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // rsi
  unsigned int *v47; // rbx
  __int64 v48; // rsi
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  __int64 v53; // r10
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm5_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  unsigned int v64; // xmm2_4
  float v65; // xmm4_4
  float v66; // xmm7_4
  __int64 v67; // rsi
  unsigned __int64 v68; // r9
  __int64 v69; // rbx
  unsigned int *v70; // r8
  unsigned int *v71; // r8
  __int64 v72; // r10
  __int64 v73; // r9
  unsigned int *v74; // r8
  unsigned int v75; // r10d
  unsigned int v76; // r11d
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  float *v81; // rbx
  unsigned int *v82; // rax
  int v83; // r10d
  float *v84; // r8
  __int64 v85; // r9
  float v86; // xmm4_4
  float v87; // xmm0_4
  float v88; // xmm5_4
  __int64 v89; // rdx
  __int64 v90; // rax
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm7_4
  float v94; // xmm3_4
  float v95; // xmm6_4
  float v96; // xmm4_4
  float v97; // xmm0_4
  float v98; // xmm8_4
  float v99; // xmm7_4
  float v100; // xmm0_4
  float v101; // xmm3_4
  float v102; // xmm4_4
  float v103; // xmm2_4
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // r8d
  float *v107; // rax
  float v108; // xmm4_4
  float *v109; // r9
  float v110; // xmm5_4
  float v111; // xmm3_4
  float v112; // xmm1_4
  float v113; // xmm3_4
  float v114; // xmm4_4
  float v115; // xmm5_4
  int v116; // edx
  float *v117; // r9
  unsigned int *v118; // rcx
  unsigned int *v119; // rcx
  float *v120; // rdi
  __int64 v121; // r9
  int v122; // r8d
  int v123; // edx
  int v124; // r10d
  __int64 v125; // r12
  int v126; // r15d
  float *v127; // rbx
  int v128; // ebp
  float *v129; // r14
  float *v130; // r9
  __int64 v131; // r10
  int v132; // r11d
  __int64 v133; // rdx
  unsigned int v134; // eax
  __int64 v135; // rsi
  __int64 v136; // rcx
  unsigned int v137; // eax
  __int64 v138; // rax
  int v139; // r8d
  float v140; // xmm3_4
  float v141; // xmm4_4
  float v142; // xmm5_4
  float v143; // xmm1_4
  float v144; // xmm0_4
  float v145; // xmm1_4
  float v146; // xmm2_4
  float v147; // xmm0_4
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  float v151; // xmm1_4
  float v152; // xmm0_4
  float v153; // xmm1_4
  float v154; // xmm2_4
  float v155; // xmm0_4
  float v156; // xmm3_4
  float v157; // xmm4_4
  float v158; // xmm5_4
  float v159; // xmm1_4
  float v160; // xmm0_4
  float v161; // xmm1_4
  float v162; // xmm2_4
  float v163; // xmm0_4
  int v164; // ecx
  float v165; // xmm7_4
  float v166; // xmm8_4
  float v167; // xmm9_4
  float v168; // xmm10_4
  float v169; // xmm13_4
  float v170; // xmm14_4
  float v171; // xmm1_4
  float v172; // xmm2_4
  float v173; // xmm6_4
  float v174; // xmm4_4
  float v175; // xmm5_4
  float v176; // xmm3_4
  float v177; // xmm0_4
  float v178; // xmm4_4
  float v179; // xmm1_4
  float v180; // xmm0_4
  float v181; // xmm1_4
  float v182; // xmm2_4
  float v183; // xmm0_4
  unsigned int *v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rbx
  __int64 v187; // rax
  int v188; // [rsp+20h] [rbp-118h]
  int v189; // [rsp+24h] [rbp-114h]
  unsigned int *v190; // [rsp+28h] [rbp-110h]
  __int64 v191; // [rsp+30h] [rbp-108h]
  __int64 v192; // [rsp+38h] [rbp-100h]
  unsigned __int64 v193; // [rsp+40h] [rbp-F8h] BYREF
  int v194; // [rsp+48h] [rbp-F0h]
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+0h] BYREF
  int v198; // [rsp+150h] [rbp+18h]
  int v199; // [rsp+158h] [rbp+20h]

  result = &retaddr;
  v3 = a2;
  v4 = 24944LL * a2;
  v5 = a1;
  v6 = a2;
  v7 = (int)dword_140404A6C[v4 + 346707733];
  if ( !(_DWORD)v7 )
    return result;
  v8 = 0;
  v9 = (int)dword_140404A6C[v4 + 346707733];
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  if ( v7 >= 4 )
  {
    v13 = (float *)&dword_140404A6C[v4 + 346707737];
    v14 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v8 = 4 * v14;
    do
    {
      v10 = (float)((float)((float)(v10 + *(v13 - 2)) + v13[3]) + v13[8]) + v13[13];
      v11 = (float)((float)((float)(v11 + *(v13 - 1)) + v13[4]) + v13[9]) + v13[14];
      v12 = (float)((float)((float)(v12 + *v13) + v13[5]) + v13[10]) + v13[15];
      v13 += 20;
      --v14;
    }
    while ( v14 );
  }
  if ( v8 < v7 )
  {
    v15 = (float *)&dword_140404A6C[5 * v8 + 346707737 + v4];
    v16 = v7 - v8;
    do
    {
      v10 = v10 + *(v15 - 2);
      v11 = v11 + *(v15 - 1);
      v12 = v12 + *v15;
      v15 += 5;
      --v16;
    }
    while ( v16 );
  }
  v17 = 0;
  v18 = 3632 * v5;
  v19 = 0;
  dword_140404A6C[177167565] = 0;
  v20 = 0;
  v193 = v18;
  dword_140404A6C[177495247] = 0;
  v21 = v10 * (float)(1.0 / (float)(int)v7);
  v22 = v11 * (float)(1.0 / (float)(int)v7);
  v23 = v12 * (float)(1.0 / (float)(int)v7);
  *(float *)((char *)&dword_140404A6C[178527485] + v18) = v21;
  *(float *)((char *)&dword_140404A6C[178527486] + v18) = v22;
  *(float *)((char *)&dword_140404A6C[178527487] + v18) = v23;
  if ( v7 >= 4 )
  {
    v24 = (float *)&dword_140404A6C[v4 + 346707737];
    v25 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v20 = 4 * v25;
    do
    {
      v26 = 3 * v17;
      *(float *)&v27 = *(v24 - 1) - v22;
      *(float *)&dword_140404A6C[v26 + 177167567] = *(v24 - 2) - v21;
      v28 = *v24;
      dword_140404A6C[v26 + 177167568] = v27;
      *(float *)&v29 = v24[4] - v22;
      *(float *)&dword_140404A6C[v26 + 177167569] = v28 - v23;
      v30 = v24[3];
      ++dword_140404A6C[177167565];
      v31 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v31 + 177167567] = v30 - v21;
      v32 = v24[5];
      dword_140404A6C[v31 + 177167568] = v29;
      *(float *)&v33 = v24[9] - v22;
      *(float *)&dword_140404A6C[v31 + 177167569] = v32 - v23;
      v34 = v24[8];
      ++dword_140404A6C[177167565];
      v35 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v35 + 177167567] = v34 - v21;
      v36 = v24[10];
      dword_140404A6C[v35 + 177167568] = v33;
      *(float *)&v37 = v24[14] - v22;
      *(float *)&dword_140404A6C[v35 + 177167569] = v36 - v23;
      v38 = v24[13];
      ++dword_140404A6C[177167565];
      v39 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v39 + 177167567] = v38 - v21;
      v40 = v24[15];
      v24 += 20;
      dword_140404A6C[v39 + 177167568] = v37;
      *(float *)&dword_140404A6C[v39 + 177167569] = v40 - v23;
      v17 = ++dword_140404A6C[177167565];
      --v25;
    }
    while ( v25 );
    if ( v20 >= v9 )
      goto LABEL_16;
    goto LABEL_14;
  }
  if ( (int)v7 > 0 )
  {
LABEL_14:
    v41 = (float *)&dword_140404A6C[5 * v20 + 346707737 + v4];
    v42 = v9 - v20;
    do
    {
      v43 = 3 * v17;
      *(float *)&v44 = *(v41 - 1) - v22;
      *(float *)&dword_140404A6C[v43 + 177167567] = *(v41 - 2) - v21;
      v45 = *v41;
      v41 += 5;
      dword_140404A6C[v43 + 177167568] = v44;
      *(float *)&dword_140404A6C[v43 + 177167569] = v45 - v23;
      v17 = ++dword_140404A6C[177167565];
      --v42;
    }
    while ( v42 );
LABEL_16:
    v19 = dword_140404A6C[177495247];
  }
  v46 = (int)dword_140404A6C[v4 + 346713116];
  if ( v9 < v46 )
  {
    v47 = &dword_140404A6C[24944 * v6 + 346713117 + 8 * v9];
    v48 = v46 - v9;
    do
    {
      v49 = *((float *)v47 + 4);
      v50 = *((float *)v47 + 5);
      v51 = *((float *)v47 + 6);
      v52 = *((float *)v47 + 7);
      v53 = v4 * 4 + 20LL * (int)*v47;
      v54 = v4 * 4 + 20LL * (int)v47[1];
      v55 = v4 * 4 + 20LL * (int)v47[2];
      v56 = (int)v47[3];
      v47 += 8;
      v57 = v4 * 4 + 20 * v56;
      v58 = 3 * v17;
      v59 = (float)((float)(v50 * *(float *)((char *)&dword_140404A6C[346707735] + v54))
                  + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707735] + v53)))
          + (float)(v51 * *(float *)((char *)&dword_140404A6C[346707735] + v55));
      v60 = v51 * *(float *)((char *)&dword_140404A6C[346707736] + v55);
      v61 = v51 * *(float *)((char *)&dword_140404A6C[346707737] + v55);
      v62 = (float)(v50 * *(float *)((char *)&dword_140404A6C[346707736] + v54))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707736] + v53));
      v63 = v52 * *(float *)((char *)&dword_140404A6C[346707736] + v57);
      *(float *)&v64 = (float)(v59 + (float)(v52 * *(float *)((char *)&dword_140404A6C[346707735] + v57))) - v21;
      v65 = v52 * *(float *)((char *)&dword_140404A6C[346707737] + v57);
      v66 = (float)(v50 * *(float *)((char *)&dword_140404A6C[346707737] + v54))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707737] + v53));
      dword_140404A6C[v58 + 177167567] = v64;
      *(float *)&dword_140404A6C[v58 + 177167568] = (float)((float)(v62 + v60) + v63) - v22;
      *(float *)&dword_140404A6C[v58 + 177167569] = (float)((float)(v66 + v61) + v65) - v23;
      v17 = ++dword_140404A6C[177167565];
      --v48;
    }
    while ( v48 );
    v19 = dword_140404A6C[177495247];
    v3 = a2;
  }
  v67 = dword_140404A6C[v4 + 346709019];
  LODWORD(v68) = 0;
  v69 = 0;
  if ( (int)v67 >= 4LL )
  {
    v70 = &dword_140404A6C[v4 + 346709021];
    v68 = ((unsigned __int64)((int)v67 - 4LL) >> 2) + 1;
    v69 = 4 * v68;
    do
    {
      if ( *(v70 - 1) == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = *v70;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[15] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[16];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[17];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[18];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[31] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[32];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[33];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[34];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[47] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[48];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[49];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[50];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      v70 += 64;
      --v68;
    }
    while ( v68 );
    v17 = dword_140404A6C[177167565];
  }
  if ( v69 < (int)v67 )
  {
    v71 = &dword_140404A6C[16 * (v69 + 1559 * v6) + 346709021];
    v72 = (int)v67 - v69;
    do
    {
      if ( *(v71 - 1) == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = *v71;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v71[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v71[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = v68;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = v68;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = v68;
        v19 = ++dword_140404A6C[177495247];
      }
      v71 += 16;
      --v72;
    }
    while ( v72 );
    v17 = dword_140404A6C[177167565];
  }
  if ( (int)v67 > 0 )
  {
    v73 = v67;
    v74 = &dword_140404A6C[v4 + 346709021];
    do
    {
      if ( *(v74 - 1) == 4 )
      {
        v75 = *v74;
        v76 = v74[14];
        dword_140404A6C[3 * v19 + 177495248] = *v74;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74[1];
        v77 = v74[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v76 == 1 )
        {
          v78 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v78 + 178011345] = 1061158912;
          dword_140404A6C[v78 + 178011346] = 1065353216;
          dword_140404A6C[v78 + 178011347] = 1061158912;
          dword_140404A6C[v78 + 178011348] = 1065353216;
          dword_140404A6C[v78 + 178011349] = 1061158912;
          dword_140404A6C[v78 + 178011350] = 1065353216;
        }
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v75;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74[3];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v76 == 1 )
        {
          v79 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v79 + 178011345] = 1061158912;
          dword_140404A6C[v79 + 178011346] = 1065353216;
          dword_140404A6C[v79 + 178011347] = 1061158912;
          dword_140404A6C[v79 + 178011348] = 1065353216;
          dword_140404A6C[v79 + 178011349] = 1061158912;
          dword_140404A6C[v79 + 178011350] = 1065353216;
        }
        v19 = ++dword_140404A6C[177495247];
      }
      v74 += 16;
      --v73;
    }
    while ( v73 );
    v17 = dword_140404A6C[177167565];
  }
  v80 = 0;
  dword_140404A6C[178519250] = 0;
  v81 = (float *)&dword_140404A6C[177249489];
  if ( v17 > 0 )
  {
    v82 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v82 - 1) = 0;
      ++v80;
      *v82 = 0;
      v82 += 3;
      v17 = dword_140404A6C[177167565];
    }
    while ( v80 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  v83 = 0;
  if ( v19 > 0 )
  {
    v84 = (float *)&dword_140404A6C[177814739];
    do
    {
      v85 = 3 * *((_DWORD *)v84 - 319491);
      v86 = *(float *)&dword_140404A6C[v85 + 177167568];
      v87 = *(float *)&dword_140404A6C[v85 + 177167567];
      v88 = *(float *)&dword_140404A6C[v85 + 177167569];
      v89 = 3 * *((_DWORD *)v84 - 319490);
      v90 = 3 * *((_DWORD *)v84 - 319489);
      v91 = *(float *)&dword_140404A6C[v89 + 177167569] - v88;
      v92 = *(float *)&dword_140404A6C[v90 + 177167568] - v86;
      v93 = *(float *)&dword_140404A6C[v90 + 177167569] - v88;
      v94 = *(float *)&dword_140404A6C[v89 + 177167568] - v86;
      v95 = *(float *)&dword_140404A6C[v89 + 177167567] - v87;
      v96 = (float)(v92 * v91) - (float)(v93 * v94);
      v97 = *(float *)&dword_140404A6C[v90 + 177167567] - v87;
      v98 = (float)(v97 * v94) - (float)(v92 * v95);
      v99 = (float)(v93 * v95) - (float)(v97 * v91);
      v100 = fsqrt((float)((float)(v99 * v99) + (float)(v96 * v96)) + (float)(v98 * v98));
      if ( v100 == 0.0 )
      {
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
      }
      else
      {
        v101 = (float)(1.0 / v100) * v96;
        v102 = (float)(1.0 / v100) * v99;
        v103 = (float)(1.0 / v100) * v98;
      }
      *(v84 - 2) = v101;
      *(v84 - 1) = v102;
      *v84 = v103;
      ++v83;
      *(float *)&dword_140404A6C[v85 + 177249487] = v101 + *(float *)&dword_140404A6C[v85 + 177249487];
      *(float *)&dword_140404A6C[v85 + 177249488] = v102 + *(float *)&dword_140404A6C[v85 + 177249488];
      *(float *)&dword_140404A6C[v85 + 177249489] = v103 + *(float *)&dword_140404A6C[v85 + 177249489];
      v104 = 3 * *((_DWORD *)v84 - 319490);
      *(float *)&dword_140404A6C[v104 + 177249487] = v101 + *(float *)&dword_140404A6C[v104 + 177249487];
      *(float *)&dword_140404A6C[v104 + 177249488] = v102 + *(float *)&dword_140404A6C[v104 + 177249488];
      *(float *)&dword_140404A6C[v104 + 177249489] = v103 + *(float *)&dword_140404A6C[v104 + 177249489];
      *(float *)&v104 = *(v84 - 319489);
      v84 += 3;
      v105 = 3 * (int)v104;
      *(float *)&dword_140404A6C[v105 + 177249487] = v101 + *(float *)&dword_140404A6C[v105 + 177249487];
      *(float *)&dword_140404A6C[v105 + 177249488] = v102 + *(float *)&dword_140404A6C[v105 + 177249488];
      *(float *)&dword_140404A6C[v105 + 177249489] = v103 + *(float *)&dword_140404A6C[v105 + 177249489];
      v19 = dword_140404A6C[177495247];
    }
    while ( v83 < (int)dword_140404A6C[177495247] );
    v17 = dword_140404A6C[177167565];
  }
  v106 = 0;
  if ( v17 > 0 )
  {
    v107 = (float *)&dword_140404A6C[177249489];
    do
    {
      v108 = *(v107 - 1);
      v109 = v107;
      v110 = *(v107 - 2);
      v111 = *v107;
      v112 = fsqrt((float)((float)(v110 * v110) + (float)(v108 * v108)) + (float)(v111 * v111));
      if ( v112 == 0.0 )
      {
        v113 = 0.0;
        v114 = 0.0;
        v115 = 0.0;
      }
      else
      {
        v113 = v111 * (float)(1.0 / v112);
        v114 = v108 * (float)(1.0 / v112);
        v115 = v110 * (float)(1.0 / v112);
      }
      *(v107 - 2) = v115;
      ++v106;
      *(v107 - 1) = v114;
      v107 += 3;
      *v109 = v113;
      v17 = dword_140404A6C[177167565];
    }
    while ( v106 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  v116 = 0;
  v117 = (float *)&dword_140404A6C[177863891];
  if ( v19 > 0 )
  {
    v118 = &dword_140404A6C[177863891];
    do
    {
      *((_QWORD *)v118 - 1) = 0;
      ++v116;
      *(_QWORD *)v118 = 0;
      *((_QWORD *)v118 + 1) = 0;
      *((_QWORD *)v118 + 2) = 0;
      v118[6] = 0;
      v118 += 9;
      v19 = dword_140404A6C[177495247];
    }
    while ( v116 < (int)dword_140404A6C[177495247] );
    if ( (int)dword_140404A6C[177495247] > 0 )
    {
      v119 = &dword_140404A6C[177863891];
      v120 = (float *)&dword_140404A6C[177814738];
      v121 = 3;
      v190 = &dword_140404A6C[177863891];
      v122 = 0;
      v192 = 3;
      v123 = 1;
      v198 = 0;
      v188 = 1;
      do
      {
        v189 = v123;
        v124 = v123;
        v199 = v123;
        if ( v123 < v19 )
        {
          v125 = v121;
          v126 = v122 + 3;
          v127 = v120 + 4;
          do
          {
            v128 = 0;
            v191 = 3;
            v129 = v120 - 319490;
            v130 = (float *)v119;
            do
            {
              v131 = 0;
              v132 = 1;
              do
              {
                v133 = 3 * *(_DWORD *)v129;
                v134 = 3 * dword_140404A6C[v126 + 177495248 + v132 % 3];
                if ( *(float *)&dword_140404A6C[v134 + 177167567] == *(float *)&dword_140404A6C[v133 + 177167567]
                  && *(float *)&dword_140404A6C[v134 + 177167568] == *(float *)&dword_140404A6C[v133 + 177167568]
                  && *(float *)&dword_140404A6C[v134 + 177167569] == *(float *)&dword_140404A6C[v133 + 177167569] )
                {
                  v135 = v131 + v125;
                  v136 = (int)(3 * dword_140404A6C[(v128 + 1) % 3 + 177495248 + v198]);
                  v137 = 3 * dword_140404A6C[v131 + 177495248 + v125];
                  if ( *(float *)&dword_140404A6C[v137 + 177167567] == *(float *)&dword_140404A6C[v136 + 177167567]
                    && *(float *)&dword_140404A6C[v137 + 177167568] == *(float *)&dword_140404A6C[v136 + 177167568]
                    && *(float *)&dword_140404A6C[v137 + 177167569] == *(float *)&dword_140404A6C[v136 + 177167569] )
                  {
                    v138 = 3 * v135;
                    *(v130 - 2) = *(v120 - 1) + *(v130 - 2);
                    *(v130 - 1) = *v120 + *(v130 - 1);
                    *v130 = *v130 + v120[1];
                    *(float *)&dword_140404A6C[v138 + 177863889] = *(float *)&dword_140404A6C[3 * v135 + 177863889]
                                                                 + *(v120 - 1);
                    *(float *)&dword_140404A6C[v138 + 177863890] = *(float *)&dword_140404A6C[3 * v135 + 177863890]
                                                                 + *v120;
                    *(float *)&dword_140404A6C[v138 + 177863891] = *(float *)&dword_140404A6C[3 * v135 + 177863891]
                                                                 + v120[1];
                    *(v130 - 2) = *(v130 - 2) + *(v127 - 2);
                    *(v130 - 1) = *(v127 - 1) + *(v130 - 1);
                    *v130 = *v130 + *v127;
                    *(float *)&dword_140404A6C[v138 + 177863889] = *(float *)&dword_140404A6C[3 * v135 + 177863889]
                                                                 + *(v127 - 2);
                    *(float *)&dword_140404A6C[v138 + 177863890] = *(float *)&dword_140404A6C[3 * v135 + 177863890]
                                                                 + *(v127 - 1);
                    *(float *)&dword_140404A6C[v138 + 177863891] = *(float *)&dword_140404A6C[3 * v135 + 177863891]
                                                                 + *v127;
                  }
                }
                ++v132;
                ++v131;
              }
              while ( v131 < 3 );
              ++v128;
              ++v129;
              v130 += 3;
              --v191;
            }
            while ( v191 );
            v126 += 3;
            v19 = dword_140404A6C[177495247];
            v127 += 3;
            ++v199;
            v125 += 3;
            v119 = v190;
          }
          while ( v199 < (int)dword_140404A6C[177495247] );
          v123 = v188;
          v122 = v198;
          v121 = v192;
          v124 = v189;
        }
        ++v123;
        v122 += 3;
        v121 += 3;
        v188 = v123;
        v119 += 9;
        v198 = v122;
        v120 += 3;
        v192 = v121;
        v190 = v119;
      }
      while ( v124 < v19 );
      v18 = v193;
      v117 = (float *)&dword_140404A6C[177863891];
      v3 = a2;
      v81 = (float *)&dword_140404A6C[177249489];
      LODWORD(v5) = a1;
    }
    v17 = dword_140404A6C[177167565];
  }
  v139 = 0;
  if ( v19 > 0 )
  {
    do
    {
      v140 = *(v117 - 1);
      v141 = *(v117 - 2);
      v142 = *v117;
      v143 = fsqrt((float)((float)(v141 * v141) + (float)(v140 * v140)) + (float)(v142 * v142));
      if ( v143 == 0.0 )
      {
        v145 = 0.0;
        v146 = 0.0;
        v147 = 0.0;
      }
      else
      {
        v144 = 1.0 / v143;
        v145 = (float)(1.0 / v143) * v142;
        v146 = v144 * v140;
        v147 = v144 * v141;
      }
      *(v117 - 2) = v147;
      *(v117 - 1) = v146;
      *v117 = v145;
      v148 = v117[2];
      v149 = v117[1];
      v150 = v117[3];
      v151 = fsqrt((float)((float)(v149 * v149) + (float)(v148 * v148)) + (float)(v150 * v150));
      if ( v151 == 0.0 )
      {
        v153 = 0.0;
        v154 = 0.0;
        v155 = 0.0;
      }
      else
      {
        v152 = 1.0 / v151;
        v153 = (float)(1.0 / v151) * v150;
        v154 = v152 * v148;
        v155 = v152 * v149;
      }
      v117[1] = v155;
      v117[2] = v154;
      v117[3] = v153;
      v156 = v117[5];
      v157 = v117[4];
      v158 = v117[6];
      v159 = fsqrt((float)((float)(v157 * v157) + (float)(v156 * v156)) + (float)(v158 * v158));
      if ( v159 == 0.0 )
      {
        v161 = 0.0;
        v162 = 0.0;
        v163 = 0.0;
      }
      else
      {
        v160 = 1.0 / v159;
        v161 = (float)(1.0 / v159) * v158;
        v162 = v160 * v156;
        v163 = v160 * v157;
      }
      v117[4] = v163;
      ++v139;
      v117[5] = v162;
      v117[6] = v161;
      v117 += 9;
      v19 = dword_140404A6C[177495247];
    }
    while ( v139 < (int)dword_140404A6C[177495247] );
    v17 = dword_140404A6C[177167565];
  }
  v164 = 0;
  if ( v17 > 0 )
  {
    v165 = *(float *)&dword_1402F6180;
    v166 = *(float *)&dword_1402F617C;
    v167 = *(float *)&dword_1402F6178;
    v168 = *(float *)&dword_1402F618C;
    v169 = *(float *)&dword_1402F6190;
    v170 = *(float *)&dword_1402F6188;
    do
    {
      v171 = *(v81 - 1);
      v172 = *(v81 - 2);
      v173 = *v81;
      if ( fabs(v171) <= 0.70700002 )
      {
        v174 = v170;
        v175 = (float)(v168 * v173) - (float)(v169 * v171);
        v176 = (float)(v169 * v172) - (float)(v170 * v173);
        v177 = v168;
      }
      else
      {
        v174 = v167;
        v175 = (float)(v166 * v173) - (float)(v165 * v171);
        v176 = (float)(v165 * v172) - (float)(v167 * v173);
        v177 = v166;
      }
      v178 = (float)(v174 * v171) - (float)(v177 * v172);
      v179 = fsqrt((float)((float)(v176 * v176) + (float)(v175 * v175)) + (float)(v178 * v178));
      if ( v179 == 0.0 )
      {
        v181 = 0.0;
        v182 = 0.0;
        v183 = 0.0;
      }
      else
      {
        v180 = 1.0 / v179;
        v181 = (float)(1.0 / v179) * v178;
        v182 = v180 * v176;
        v183 = v180 * v175;
      }
      v81[49150] = v183;
      ++v164;
      v81[49151] = v182;
      v81[49152] = v181;
      v81 += 3;
    }
    while ( v164 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  if ( v19 > 0 )
  {
    v184 = &dword_140404A6C[177495248];
    v185 = (unsigned int)v19;
    do
    {
      v184 += 3;
      --v185;
    }
    while ( v185 );
  }
  v186 = v19;
  if ( v3 == 1 )
  {
    v194 = -1069285376;
    v193 = 0xBF00000000000000uLL;
    sub_140002D00((float *)&v193, 1.03125, 0.125, 0.0625);
    HIDWORD(v193) = -1107296256;
    sub_140002D00((float *)&v193, 0.375, 0.3125, 0.03125);
    v19 = dword_140404A6C[177495247];
  }
  if ( (int)v186 < v19 )
  {
    v187 = 0x140000000LL + 24 * v186 + 716258740;
    do
    {
      *(_QWORD *)(v187 - 4) = 1065353216;
      LODWORD(v186) = v186 + 1;
      *(_QWORD *)(v187 + 4) = 1065353216;
      *(_QWORD *)(v187 + 12) = 1065353216;
      v187 += 24;
    }
    while ( (int)v186 < (int)dword_140404A6C[177495247] );
  }
  *(unsigned int *)((char *)&dword_140404A6C[178527536] + v18) = 0;
  return (_UNKNOWN **)sub_1401449C0((unsigned int)v5, 1);
}

