/* Address: 0x14018a3e0 | Name: sub_14018A3E0 | Size: 4754 bytes */
__int64 sub_14018A3E0()
{
  int v0; // r11d
  __int64 v1; // r10
  unsigned int *v2; // r8
  unsigned int *v3; // r9
  bool v4; // cc
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  int v15; // ebx
  unsigned int *v16; // rdi
  int v17; // r10d
  unsigned int *v18; // r8
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // r11
  int v32; // r9d
  int v33; // r10d
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  __int64 v44; // rax
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  int v55; // r14d
  unsigned int *v56; // rdi
  int v57; // eax
  float v58; // xmm3_4
  int v59; // r10d
  float v60; // xmm9_4
  unsigned int v61; // eax
  float v62; // xmm4_4
  float v63; // xmm12_4
  float v64; // xmm2_4
  float v65; // xmm11_4
  float v66; // xmm10_4
  float v67; // xmm14_4
  float v68; // xmm13_4
  __int64 v69; // rcx
  float v70; // xmm6_4
  float v71; // xmm7_4
  float v72; // xmm8_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  signed int v75; // eax
  int v76; // eax
  unsigned int v77; // eax
  int v78; // ebx
  char v79; // al
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // r14d
  unsigned int *v83; // rdi
  __int64 v84; // rax
  float v85; // xmm7_4
  float v86; // xmm8_4
  float v87; // xmm2_4
  float v88; // xmm9_4
  double v89; // xmm0_8
  float v90; // xmm11_4
  double v91; // xmm6_8
  float v92; // xmm1_4
  float v93; // xmm2_4
  double v94; // xmm0_8
  double v95; // xmm0_8
  float v96; // xmm0_4
  __m128 v97; // xmm0
  float v98; // xmm2_4
  float v99; // xmm3_4
  float v100; // xmm4_4
  float v101; // xmm5_4
  float v102; // xmm1_4
  float v103; // xmm5_4
  float v104; // xmm6_4
  float v105; // xmm5_4
  float v106; // xmm5_4
  float v107; // xmm0_4
  float v108; // xmm7_4
  float v109; // xmm6_4
  float v110; // xmm4_4
  float v111; // xmm3_4
  float v112; // xmm2_4
  float v113; // xmm1_4
  float v114; // xmm0_4
  float v115; // xmm7_4
  float v116; // xmm5_4
  __int64 v117; // rcx
  float v118; // xmm8_4
  float v119; // xmm8_4
  __int64 v120; // rcx
  float *v121; // rbx
  float *v122; // rsi
  float v123; // xmm3_4
  unsigned int v124; // xmm1_4
  float v125; // xmm2_4
  float v126; // xmm3_4
  __int64 v127; // rbx
  float v128; // xmm12_4
  float v129; // xmm11_4
  float v130; // xmm1_4
  float v131; // xmm3_4
  float v132; // xmm2_4
  float v133; // xmm5_4
  float v134; // xmm13_4
  float v135; // xmm9_4
  float v136; // xmm8_4
  float v137; // xmm10_4
  __int64 v138; // rcx
  float v139; // xmm2_4
  float v140; // xmm1_4
  float v141; // xmm6_4
  float v142; // xmm4_4
  float v143; // xmm7_4
  float v144; // xmm3_4
  float v145; // xmm2_4
  double v146; // xmm0_8
  bool v147; // zf
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm2_4
  int v151; // eax
  _DWORD v153[12]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v154[10]; // [rsp+30h] [rbp-D0h] BYREF
  float v155; // [rsp+58h] [rbp-A8h] BYREF
  float v156; // [rsp+5Ch] [rbp-A4h]
  float v157; // [rsp+60h] [rbp-A0h]
  float v158; // [rsp+68h] [rbp-98h] BYREF
  float v159; // [rsp+6Ch] [rbp-94h]
  float v160; // [rsp+70h] [rbp-90h]
  __int64 v161; // [rsp+78h] [rbp-88h]

  v0 = 0;
  if ( (int)dword_140404A6C[225391228] > 0 )
  {
    v1 = 0;
    v2 = &dword_140404A6C[225391247];
    v3 = &dword_140404A6C[225391251];
    do
    {
      v4 = (int)++v2[1] < 800;
      v2[2] = 800;
      if ( !v4 )
      {
        v5 = ((unsigned __int8)*v2 + 1) & 3;
        v6 = v1 + (((unsigned __int8)*v2 + 1) & 3);
        *v2 = v5;
        if ( dword_140404A6C[v6 + 225391236] == -1 )
        {
          v7 = ((_BYTE)v5 + 1) & 3;
          v5 = v7;
          *v2 = v7;
        }
        if ( dword_140404A6C[v1 + 225391236 + v5] == -1 )
          *v2 = ((_BYTE)v5 + 1) & 3;
        v2[1] = 0;
      }
      *(_QWORD *)(v3 - 1) = 0;
      *(_QWORD *)(v3 + 1) = 0;
      *(_QWORD *)(v3 + 3) = 0;
      *(_QWORD *)(v3 + 5) = 0;
      dword_140404A6C[v1 + 225391250 + (int)*v2] = 2;
      v8 = (int)*v2;
      if ( dword_140404A6C[v1 + 225391236 + (((_BYTE)v8 + 1) & 3)] == -1 )
      {
        dword_140404A6C[v1 + 225391250 + (((_BYTE)v8 - 2) & 3)] = 2;
        if ( (int)v2[1] >= (int)(v2[2] - 128) )
        {
          dword_140404A6C[v1 + 225391250 + (int)*v2] = 1;
          dword_140404A6C[v1 + 225391250 + (((unsigned __int8)*v2 - 2) & 3)] = 1;
        }
      }
      else
      {
        dword_140404A6C[v8 + 225391250 + v1] = 2;
        dword_140404A6C[v1 + 225391254 + (int)*v2] = 2;
        if ( (int)v2[1] >= (int)(v2[2] - 128) )
        {
          dword_140404A6C[v1 + 225391250 + (int)*v2] = 1;
          dword_140404A6C[v1 + 225391254 + (int)*v2] = 1;
        }
      }
      v9 = (*(v2 - 11) == -1) + 1;
      if ( *(v2 - 10) != -1 )
        v9 = *(v2 - 11) == -1;
      v10 = v9 + 1;
      if ( *(v2 - 9) != -1 )
        v10 = v9;
      v11 = v10 + 1;
      if ( *(v2 - 8) != -1 )
        v11 = v10;
      if ( v11 >= 2 )
      {
        *(v3 - 1) = 2;
        *v3 = 2;
        v3[1] = 2;
        v3[2] = 2;
        v3[3] = 2;
        v3[4] = 2;
        v3[5] = 2;
        v3[6] = 2;
      }
      ++v0;
      v2 += 34;
      v1 += 34;
      v3 += 34;
    }
    while ( v0 < (int)dword_140404A6C[225391228] );
  }
  sub_14018B680();
  v14 = dword_140404A6C[132792829];
  v15 = 0;
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v16 = &dword_140404A6C[132400668];
    do
    {
      if ( *v16 == 1 )
      {
        sub_140009E30(v15);
        v14 = dword_140404A6C[132792829];
      }
      ++v15;
      v16 += 383;
    }
    while ( v15 < v14 );
  }
  v17 = 0;
  v18 = &dword_140404A6C[132400643];
  if ( v14 < 4 )
  {
    if ( v14 <= 0 )
      goto LABEL_102;
    v22 = 0;
  }
  else
  {
    v19 = &dword_140404A6C[132400643];
    v20 = ((unsigned int)(v14 - 4) >> 2) + 1;
    v21 = v20;
    v17 = 4 * v20;
    v22 = 4LL * v20;
    do
    {
      v23 = (int)*(v19 - 4);
      if ( (_DWORD)v23 != -1 )
      {
        v13 = 20840 * v23;
        *(v19 - 2) = dword_140404A6C[5210 * v23 + 129716720];
        *(v19 - 1) = dword_140404A6C[5210 * v23 + 129716721];
        *v19 = dword_140404A6C[5210 * v23 + 129716722];
      }
      v24 = (int)v19[379];
      if ( (_DWORD)v24 != -1 )
      {
        v13 = 20840 * v24;
        v19[381] = dword_140404A6C[5210 * v24 + 129716720];
        v19[382] = dword_140404A6C[5210 * v24 + 129716721];
        v19[383] = dword_140404A6C[5210 * v24 + 129716722];
      }
      v25 = (int)v19[762];
      if ( (_DWORD)v25 != -1 )
      {
        v13 = 20840 * v25;
        v19[764] = dword_140404A6C[5210 * v25 + 129716720];
        v19[765] = dword_140404A6C[5210 * v25 + 129716721];
        v19[766] = dword_140404A6C[5210 * v25 + 129716722];
      }
      v26 = (int)v19[1145];
      if ( (_DWORD)v26 != -1 )
      {
        v13 = 20840 * v26;
        v19[1147] = dword_140404A6C[5210 * v26 + 129716720];
        v19[1148] = dword_140404A6C[5210 * v26 + 129716721];
        v19[1149] = dword_140404A6C[5210 * v26 + 129716722];
      }
      v19 += 1532;
      --v21;
    }
    while ( v21 );
    if ( v17 >= v14 )
      goto LABEL_47;
  }
  v27 = &dword_140404A6C[383 * v22 + 132400643];
  v28 = (unsigned int)(v14 - v17);
  do
  {
    v29 = (int)*(v27 - 4);
    if ( (_DWORD)v29 != -1 )
    {
      v13 = 20840 * v29;
      *(v27 - 2) = dword_140404A6C[5210 * v29 + 129716720];
      *(v27 - 1) = dword_140404A6C[5210 * v29 + 129716721];
      *v27 = dword_140404A6C[5210 * v29 + 129716722];
    }
    v27 += 383;
    --v28;
  }
  while ( v28 );
LABEL_47:
  v30 = dword_140404A6C[284024893];
  v31 = (unsigned int)v14;
  do
  {
    v32 = 0;
    *(v18 - 3) = 0;
    v33 = 2;
    v12 = &dword_140404A6C[280651442];
    do
    {
      if ( *(v12 - 139) )
      {
        v13 = (int)*(v12 - 137);
        if ( (_DWORD)v13 != -1 && (int)*(v12 - 124) > 0 && v32 < 2 && *(v18 - 5) != v33 - 2 )
        {
          v34 = 96.0;
          v35 = *((float *)v18 - 2) - *((float *)v12 - 2);
          v36 = *((float *)v18 - 1) - *((float *)v12 - 1);
          v37 = *(float *)v18 - *(float *)v12;
          v13 *= 14388;
          v155 = v35;
          v156 = v36;
          v157 = v37;
          if ( *(unsigned int *)((char *)&dword_140404A6C[71859139] + v13) )
            v34 = 16.0;
          v38 = fsqrt((float)((float)(v35 * v35) + (float)(v36 * v36)) + (float)(v37 * v37));
          if ( v38 < v34 )
          {
            v32 = 2;
LABEL_60:
            *(v18 - 3) = v32;
            goto LABEL_61;
          }
          if ( v38 < (float)(v34 + 4.0) )
          {
            v32 = 1;
            goto LABEL_60;
          }
        }
      }
LABEL_61:
      if ( v12[7027] )
      {
        v13 = (int)v12[7029];
        if ( (_DWORD)v13 != -1 && (int)v12[7042] > 0 && v32 < 2 && *(v18 - 5) != v33 - 1 )
        {
          v39 = 96.0;
          v40 = *((float *)v18 - 2) - *((float *)v12 + 7164);
          v41 = *((float *)v18 - 1) - *((float *)v12 + 7165);
          v42 = *(float *)v18 - *((float *)v12 + 7166);
          v13 *= 14388;
          v155 = v40;
          v156 = v41;
          v157 = v42;
          if ( *(unsigned int *)((char *)&dword_140404A6C[71859139] + v13) )
            v39 = 16.0;
          v43 = fsqrt((float)((float)(v40 * v40) + (float)(v41 * v41)) + (float)(v42 * v42));
          if ( v43 < v39 )
          {
            v32 = 2;
LABEL_72:
            *(v18 - 3) = v32;
            goto LABEL_73;
          }
          if ( v43 < (float)(v39 + 4.0) )
          {
            v32 = 1;
            goto LABEL_72;
          }
        }
      }
LABEL_73:
      if ( v12[14193] )
      {
        v44 = (int)v12[14195];
        if ( (_DWORD)v44 != -1 && (int)v12[14208] > 0 && v32 < 2 && *(v18 - 5) != v33 )
        {
          v45 = 96.0;
          v46 = *((float *)v18 - 2) - *((float *)v12 + 14330);
          v47 = *((float *)v18 - 1) - *((float *)v12 + 14331);
          v48 = *(float *)v18 - *((float *)v12 + 14332);
          v13 = 14388 * v44;
          v155 = v46;
          v156 = v47;
          v157 = v48;
          if ( dword_140404A6C[3597 * v44 + 71859139] )
            v45 = 16.0;
          v49 = fsqrt((float)((float)(v46 * v46) + (float)(v47 * v47)) + (float)(v48 * v48));
          if ( v49 < v45 )
          {
            v32 = 2;
LABEL_84:
            *(v18 - 3) = v32;
            goto LABEL_85;
          }
          if ( v49 < (float)(v45 + 4.0) )
          {
            v32 = 1;
            goto LABEL_84;
          }
        }
      }
LABEL_85:
      if ( v12[21359] )
      {
        v13 = (int)v12[21361];
        if ( (_DWORD)v13 != -1 && (int)v12[21374] > 0 && v32 < 2 && *(v18 - 5) != v33 + 1 )
        {
          v50 = 96.0;
          v51 = *((float *)v18 - 2) - *((float *)v12 + 21496);
          v52 = *((float *)v18 - 1) - *((float *)v12 + 21497);
          v53 = *(float *)v18 - *((float *)v12 + 21498);
          v13 *= 14388;
          v155 = v51;
          v156 = v52;
          v157 = v53;
          if ( *(unsigned int *)((char *)&dword_140404A6C[71859139] + v13) )
            v50 = 16.0;
          v54 = fsqrt((float)((float)(v51 * v51) + (float)(v52 * v52)) + (float)(v53 * v53));
          if ( v54 >= v50 )
          {
            if ( v54 >= (float)(v50 + 4.0) )
              goto LABEL_97;
            v32 = 1;
          }
          else
          {
            v32 = 2;
          }
          *(v18 - 3) = v32;
        }
      }
LABEL_97:
      v33 += 4;
      v12 += 28664;
    }
    while ( v33 - 2 < 256 );
    if ( v30 && v18[359] - 67 <= 1 )
      *(v18 - 3) = 0;
    v18 += 383;
    --v31;
  }
  while ( v31 );
LABEL_102:
  v55 = 0;
  if ( v14 > 0 )
  {
    v56 = &dword_140404A6C[132400650];
    do
    {
      v57 = *(v56 - 10);
      if ( v57 == 2 )
      {
        if ( *(v56 - 11) == -1 )
        {
          v58 = *((float *)v56 + 4);
          v59 = *(v56 - 13);
          v60 = *((float *)v56 + 5);
          v61 = v56[361];
          v62 = *((float *)v56 + 1);
          v63 = *((float *)v56 + 6);
          v64 = *((float *)v56 - 9) - (float)(v58 * 1.5);
          v65 = *((float *)v56 - 1);
          v66 = *((float *)v56 + 2);
          v67 = *(float *)v56;
          v68 = *((float *)v56 + 3);
          v69 = 24944LL * v59;
          v154[0] = *(v56 - 2);
          *(float *)&v154[1] = v65;
          *(float *)&v154[2] = v67;
          *(float *)&v154[3] = v62;
          *(float *)&v154[4] = v66;
          *(float *)&v154[5] = v68;
          *(float *)&v154[6] = v58;
          *(float *)&v154[7] = v60;
          v70 = *(float *)&dword_140404A6C[v69 + 346708247];
          v71 = *(float *)&dword_140404A6C[v69 + 346708248];
          v72 = -*(float *)&dword_140404A6C[v69 + 346708249];
          v153[8] = v61;
          *(float *)&v154[8] = v63;
          v155 = (float)((float)(v64 - (float)(v70 * *(float *)v154)) - (float)(v71 * v62)) + (float)(v72 * v58);
          v73 = (float)((float)((float)(*((float *)v56 - 8) - (float)(v60 * 1.5)) - (float)(v70 * v65))
                      - (float)(v71 * v66))
              + (float)(v72 * v60);
          v74 = *((float *)v56 - 7) - (float)(v63 * 1.5);
          v158 = *((float *)v56 - 6);
          v160 = *((float *)v56 - 4);
          v156 = v73;
          v157 = (float)((float)(v74 - (float)(v70 * v67)) - (float)(v71 * v68)) + (float)(v72 * v63);
          v159 = *((float *)v56 - 5);
          v75 = sub_14005BCA0(v59, (unsigned int *)&v155, (unsigned int *)&v158, v154, v61);
          v14 = dword_140404A6C[132792829];
          *(v56 - 11) = v75;
          if ( v75 != -1 )
          {
            v13 = 20840LL * v75;
            *(unsigned int *)((char *)&dword_140404A6C[129720183] + v13) = v55;
          }
        }
      }
      else if ( !v57 )
      {
        v76 = v56[18];
        if ( v76 > 0 )
        {
          if ( v76 == 2 )
          {
            v77 = v56[352];
            if ( v77 != -1 )
            {
              v56[343] = v77;
              v56[345] = -1;
              v78 = rand() % (signed int)dword_140404A6C[225426046];
              v79 = rand();
              sub_140008E40(v55, v56[352], 0, v78, v79 & 1);
              v14 = dword_140404A6C[132792829];
              *((_QWORD *)v56 + 9) = 1;
            }
          }
          if ( !v56[19] )
          {
            v80 = (int)*(v56 - 11);
            if ( (_DWORD)v80 != -1 )
            {
              v13 = 20840 * v80;
              dword_140404A6C[5210 * v80 + 129716716] = 0;
            }
            v81 = (int)*(v56 - 12);
            if ( (_DWORD)v81 != -1 )
            {
              v13 = 28664 * v81;
              dword_140404A6C[7166 * v81 + 280651317] = 0;
            }
          }
        }
      }
      ++v55;
      v56 += 383;
    }
    while ( v55 < v14 );
  }
  v82 = 0;
  if ( v14 > 0 )
  {
    v83 = &dword_140404A6C[132400645];
    do
    {
      v84 = (int)*(v83 - 6);
      if ( (_DWORD)v84 != -1 )
      {
        v127 = 5210 * v84;
        v128 = *(float *)&dword_140404A6C[5210 * v84 + 129716732];
        v129 = *(float *)&dword_140404A6C[5210 * v84 + 129716734];
        v130 = *(float *)&dword_140404A6C[5210 * v84 + 129716726];
        v131 = *(float *)&dword_140404A6C[5210 * v84 + 129716729];
        v132 = (float)(v128 * 1.5) + *(float *)&dword_140404A6C[5210 * v84 + 129716720];
        v133 = *(float *)&dword_140404A6C[5210 * v84 + 129716733];
        v134 = *(float *)&dword_140404A6C[5210 * v84 + 129716728];
        v135 = *(float *)&dword_140404A6C[5210 * v84 + 129716727];
        v136 = *(float *)&dword_140404A6C[5210 * v84 + 129716730];
        v137 = *(float *)&dword_140404A6C[5210 * v84 + 129716731];
        *(v83 - 1) = dword_140404A6C[5210 * v84 + 129716744];
        *v83 = dword_140404A6C[5210 * v84 + 129716745];
        v83[1] = dword_140404A6C[5210 * v84 + 129716746];
        *((float *)v83 + 3) = v130;
        *((float *)v83 + 5) = v134;
        *((float *)v83 + 4) = v135;
        *((float *)v83 + 6) = v131;
        *((float *)v83 + 7) = v136;
        *((float *)v83 + 8) = v137;
        *((float *)v83 + 9) = v128;
        *((float *)v83 + 10) = v133;
        *((float *)v83 + 11) = v129;
        v138 = (int)*(v83 - 8);
        v139 = (float)(v132 + (float)(*(float *)&dword_140404A6C[24944 * v138 + 346708247] * v130))
             + (float)(*(float *)&dword_140404A6C[24944 * v138 + 346708248] * v131);
        v140 = *(float *)&dword_140404A6C[24944 * v138 + 346708248] * v136;
        v141 = *(float *)&dword_140404A6C[24944 * v138 + 346708248] * v137;
        v142 = *(float *)&dword_140404A6C[24944 * v138 + 346708249];
        v143 = *(float *)&dword_140404A6C[24944 * v138 + 346708247] * v134;
        v144 = (float)((float)(v133 * 1.5) + *(float *)&dword_140404A6C[5210 * v84 + 129716721])
             + (float)(*(float *)&dword_140404A6C[24944 * v138 + 346708247] * v135);
        *((float *)v83 - 4) = v139 + (float)(v142 * v128);
        v145 = (float)((float)(v129 * 1.5) + *(float *)&dword_140404A6C[5210 * v84 + 129716722]) + v143;
        *((float *)v83 - 3) = (float)(v144 + v140) + (float)(v142 * v133);
        *((float *)v83 - 2) = (float)(v145 + v141) + (float)(v142 * v129);
        v146 = sub_14023F704(v138, v12);
        v147 = v83[23] == 1;
        v83[2] = LODWORD(v146);
        if ( v147 )
        {
          v148 = *((float *)v83 + 12);
          v149 = *((float *)v83 + 13);
          *(float *)&dword_140404A6C[v127 + 129720166] = v148;
          dword_140404A6C[v127 + 129720165] = 0x40000000;
          dword_140404A6C[v127 + 129720167] = -1082130432;
          v150 = (float)((float)((float)(*(float *)&dword_140404A6C[v127 + 129716745]
                                       * *(float *)&dword_140404A6C[v127 + 129716733])
                               + (float)(*(float *)&dword_140404A6C[v127 + 129716744]
                                       * *(float *)&dword_140404A6C[v127 + 129716732]))
                       + (float)((float)(*(float *)&dword_140404A6C[v127 + 129716746]
                                       * *(float *)&dword_140404A6C[v127 + 129716734])
                               + v149))
               * 8.0;
          if ( v150 < 0.0 )
            v150 = v150 + v150;
          if ( v150 >= -1.0 )
          {
            if ( v150 > 1.0 )
              v150 = 1.0;
          }
          else
          {
            v150 = -1.0;
          }
          *(float *)&dword_140404A6C[v127 + 129720168] = v150 / (float)(fabs(v148) + 1.0);
          if ( v149 < 0.050000001 )
            dword_140404A6C[v127 + 129720168] = -1082130432;
          v151 = v83[356];
          dword_140404A6C[v127 + 129720173] = 0;
          if ( v151 >= 180 )
          {
            *(_QWORD *)&dword_140404A6C[v127 + 129720165] = 0x40000000;
            dword_140404A6C[v127 + 129720167] = 1065353216;
            if ( v151 >= 280 )
              dword_140404A6C[v127 + 129720168] = -1082130432;
            else
              dword_140404A6C[v127 + 129720168] = 1065353216;
          }
        }
        goto LABEL_157;
      }
      if ( v83[23] != 1 )
        v83[13] = 0;
      v85 = *((float *)v83 - 1);
      v86 = *((float *)v83 + 1);
      v87 = 0.0;
      v88 = *((float *)v83 + 12);
      v89 = fabs(v88);
      v90 = fsqrt((float)((float)(v85 * v85) + (float)(*(float *)v83 * *(float *)v83)) + (float)(v86 * v86));
      if ( v89 > 0.0 )
      {
        v91 = *((float *)v83 + 16);
        v92 = v91 / tan(v89);
        if ( v88 < 0.0 )
          v92 = -v92;
        v87 = v90 / v92;
      }
      v93 = v87 + *((float *)v83 + 2);
      v94 = v93;
      *((float *)v83 + 2) = v93;
      if ( v93 >= -3.14159265359 )
      {
        if ( v94 <= 3.14159265359 )
          goto LABEL_133;
        v95 = v94 - 6.28318530718;
      }
      else
      {
        v95 = v94 + 6.28318530718;
      }
      v96 = v95;
      *((float *)v83 + 2) = v96;
LABEL_133:
      v97 = 0;
      *(double *)v97.m128_u64 = MEMORY[0x1401F8AC0](v13);
      *v83 = 0;
      v98 = *((float *)v83 + 13);
      v99 = v97.m128_f32[0];
      v100 = _mm_shuffle_ps(v97, v97, 1).m128_f32[0];
      v101 = (float)(v100 * v85) + (float)(v97.m128_f32[0] * v86);
      v102 = (float)((float)(v97.m128_f32[0] * v101) * v97.m128_f32[0]) + (float)((float)(v100 * v101) * v100);
      if ( v102 >= v98 )
      {
        v106 = v101 + (float)(fminf((float)(v102 - v98) * 32.0, 2.0) * -0.0027777778);
        v107 = v106 * v100;
        v105 = v106 * v99;
        *((float *)v83 - 1) = v107;
        v104 = v107;
        v108 = *(float *)v83;
        *((float *)v83 + 1) = v105;
        if ( v98 >= 0.033333335 || fsqrt((float)(v105 * v105) + (float)(v107 * v107)) >= 0.016666668 )
          goto LABEL_139;
        *(v83 - 1) = 0;
        v104 = 0.0;
        v83[1] = 0;
        v105 = 0.0;
      }
      else
      {
        v103 = v101 + (float)(fminf((float)(v98 - v102) * 16.0, 1.0) * 0.0013888889);
        v104 = v103 * v100;
        v105 = v103 * v97.m128_f32[0];
        *((float *)v83 - 1) = v104;
        *((float *)v83 + 1) = v105;
      }
      v108 = 0.0;
LABEL_139:
      v109 = v104 + *((float *)v83 - 4);
      v110 = *(float *)&dword_1402F6188;
      v111 = *(float *)&dword_1402F618C;
      v112 = *(float *)&dword_1402F6190;
      v113 = *(float *)&dword_1402F618C;
      v114 = *(float *)&dword_1402F6188 * 2.0;
      *((float *)v83 - 4) = v109;
      v115 = v108 + *((float *)v83 - 3);
      *((float *)v83 - 3) = v115;
      v116 = v105 + *((float *)v83 - 2);
      v155 = v114 + v109;
      *((float *)v83 - 2) = v116;
      v117 = 24944LL * (int)*(v83 - 8);
      v156 = (float)(v113 * 2.0) + v115;
      v158 = v109 - (float)(v110 * 32.0);
      v159 = v115 - (float)(v111 * 32.0);
      v157 = (float)(v112 * 2.0) + v116;
      v118 = *(float *)&dword_140404A6C[v117 + 346731818];
      v160 = v116 - (float)(v112 * 32.0);
      v119 = (float)(v118 * 0.875) - *(float *)&dword_140404A6C[v117 + 346731821];
      if ( (unsigned int)sub_1400DC050(&v155, &v158, 0) )
        *((float *)v83 - 3) = *(float *)&dword_140404A6C[73006982] + v119;
      v120 = 383LL * v82;
      *(_QWORD *)(v83 + 3) = 1065353216;
      v121 = (float *)&dword_140404A6C[v120 + 132400651];
      *(_QWORD *)(v83 + 5) = 0;
      v122 = (float *)&dword_140404A6C[v120 + 132400648];
      *(_QWORD *)(v83 + 7) = 1065353216;
      *(_QWORD *)(v83 + 9) = 0;
      v83[11] = 1065353216;
      sub_14007B2A0((__int64)&dword_140404A6C[v120 + 132400648], (float *)&dword_140404A6C[v120 + 132400651]);
      sub_14007B2A0((__int64)v122, v121);
      v123 = -*((float *)v83 + 16);
      *(float *)&v124 = (float)(v123 * *((float *)v83 + 9)) + *((float *)v83 - 4);
      v125 = (float)(v123 * *((float *)v83 + 10)) + *((float *)v83 - 3);
      v126 = (float)(v123 * *((float *)v83 + 11)) + *((float *)v83 - 2);
      v155 = *(float *)&v124;
      v156 = v125;
      v158 = *(float *)&v124 - (float)(*(float *)&dword_1402F6188 * 32.0);
      v157 = v126;
      v160 = v126 - (float)(*(float *)&dword_1402F6190 * 32.0);
      v159 = v125 - (float)(*(float *)&dword_1402F618C * 32.0);
      if ( (unsigned int)sub_1400DC050(&v155, &v158, 0) )
      {
        v156 = *(float *)&dword_140404A6C[73006982] + v119;
        sub_14023F704(v13, v12);
        sub_14007B2A0((__int64)v122, v122);
      }
      v14 = dword_140404A6C[132792829];
LABEL_157:
      ++v82;
      v83 += 383;
    }
    while ( v82 < v14 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v153 ^ v161);
}

