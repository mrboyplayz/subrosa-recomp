/* Address: 0x1400eaef0 | Name: sub_1400EAEF0 | Size: 4418 bytes */
__int64 __fastcall sub_1400EAEF0(int a1, const char *a2)
{
  __int64 v2; // rsi
  int v3; // r15d
  FILE *v4; // rax
  __int64 v5; // r13
  FILE *v6; // rdi
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // r12
  int v11; // esi
  int v12; // r13d
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  __int64 v15; // r12
  int i; // ebx
  int v17; // ebx
  __int64 v18; // rsi
  int v19; // r13d
  int *v20; // rbp
  __int64 v21; // r12
  int v22; // esi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rsi
  char *v28; // rbx
  int v29; // ebp
  __int64 v30; // r13
  int *v31; // rsi
  __int64 v32; // r12
  int v33; // ebx
  int v34; // esi
  __int64 v35; // rbp
  __int64 v36; // rbx
  int v37; // r10d
  float v38; // xmm6_4
  __int64 v39; // r8
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  int v43; // edx
  __int64 v44; // rcx
  float *v45; // rax
  int v46; // ecx
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float *v50; // rax
  int v51; // r9d
  _DWORD *v52; // rdx
  int v53; // ecx
  float *v54; // rax
  int v55; // ebx
  unsigned __int64 v56; // rbx
  int v57; // ecx
  int v58; // r9d
  char *v59; // rdx
  int *v60; // r8
  int v61; // eax
  int v62; // edx
  float *v63; // rax
  int v64; // ecx
  float *v65; // rax
  int v66; // r8d
  _DWORD *v67; // rdx
  int v68; // ecx
  float *v69; // rax
  int v70; // ecx
  float *v71; // rax
  int v72; // ecx
  float *v73; // rax
  float v74; // xmm2_4
  float v75; // xmm3_4
  __int64 v76; // rdx
  float *v77; // rax
  int v78; // r8d
  float v79; // xmm7_4
  float v80; // xmm6_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  char *v83; // rcx
  int *v84; // rdx
  int v85; // eax
  int v86; // edx
  float *v87; // rax
  void *v88; // rax
  bool v89; // cc
  int v90; // r8d
  __int64 v91; // r9
  char *v92; // rdx
  int v93; // eax
  __int64 v94; // rcx
  int v95; // ecx
  int *v96; // rdi
  int v97; // eax
  __int64 v98; // rbp
  int *v99; // rsi
  int v100; // edx
  int v101; // r9d
  int v102; // r8d
  int *v103; // rcx
  int v104; // r10d
  int v105; // r8d
  int v106; // r10d
  int *v107; // rcx
  int v108; // r11d
  int v109; // edx
  int v110; // r10d
  int *v111; // rcx
  int v112; // r11d
  int v113; // r8d
  int *v114; // rcx
  int v115; // r10d
  void *v116; // rax
  int v117; // ecx
  __int64 v118; // r8
  __int64 v119; // rdx
  int v120; // r9d
  __int64 v121; // rdx
  char *v122; // r8
  int v123; // eax
  __int64 v124; // rax
  __int64 result; // rax
  int v126; // r8d
  __int64 v127; // r9
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rbx
  __int64 v131; // rdi
  __int64 v132; // r9
  __int64 v133; // r8
  __int64 v134; // rax
  float v135; // xmm0_4
  float v136; // xmm1_4
  float v137; // xmm2_4
  __int64 v138; // rdx
  float v139; // xmm8_4
  float v140; // xmm7_4
  float v141; // xmm4_4
  __int64 v142; // rax
  float *v143; // rdx
  float v144; // xmm5_4
  float v145; // xmm3_4
  float v146; // xmm6_4
  int Buffer; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v148; // [rsp+28h] [rbp-2B0h]
  __int64 v149; // [rsp+30h] [rbp-2A8h]
  int v150; // [rsp+38h] [rbp-2A0h]
  __int64 v151; // [rsp+40h] [rbp-298h]
  __int64 v152; // [rsp+48h] [rbp-290h]
  __int64 v153; // [rsp+50h] [rbp-288h]
  __int64 v154; // [rsp+58h] [rbp-280h]
  char FileName[512]; // [rsp+60h] [rbp-278h] BYREF

  v2 = a1;
  v3 = 0;
  v150 = a1;
  Buffer = 0;
  sub_1400DBB30(FileName, "data/%s.sbv", a2);
  v4 = fopen(FileName, "rb");
  v5 = v2;
  v148 = v2;
  v6 = v4;
  if ( v4 )
  {
    fread(&Buffer, 4u, 1u, v4);
    v7 = 180288 * v2;
    v152 = 180288 * v2;
    if ( Buffer >= 5 )
      fread((char *)&unk_143DA6AE0 + v7, 4u, 3u, v6);
    fread((char *)dword_143DA6AEC + v7, 4u, 1u, v6);
    v8 = 0;
    if ( *(int *)((char *)dword_143DA6AEC + v7) > 0 )
    {
      do
      {
        v9 = 4 * (11268 * v5 + v8);
        fread(&dword_143DA6AF0[v9], 4u, 3u, v6);
        fread((char *)&unk_143DA6AFC + v9 * 4, 4u, 1u, v6);
        ++v8;
      }
      while ( v8 < dword_143DA6AEC[45072 * v5] );
      v5 = v148;
    }
    fread((void *)(0x140000000LL + v7 + 64649968), 4u, 1u, v6);
    v10 = 15024 * v5;
    v11 = 0;
    v151 = 15024 * v5;
    if ( *(int *)((char *)dword_143DA7AF0 + v7) > 0 )
    {
      do
      {
        fread((char *)&unk_143DA7AF4 + 12 * v10 + 12 * v11, 4u, 1u, v6);
        fread((char *)&unk_143DA7AF8 + 12 * v10 + 12 * v11++, 4u, 2u, v6);
      }
      while ( v11 < dword_143DA7AF0[45072 * v5] );
    }
    fread((void *)(0x140000000LL + v7 + 64674552), 4u, 1u, v6);
    v12 = 0;
    if ( *(int *)((char *)&unk_143DADAF8 + v7) > 0 )
    {
      v13 = 7512 * v148;
      v149 = 7512 * v148;
      v14 = (_DWORD *)(0x140000000LL + v7 + 64674560);
      do
      {
        v15 = v13 + v12;
        fread((void *)(0x140000000LL + 24 * v15 + 64674560), 4u, 1u, v6);
        for ( i = 0; i < *v14; ++i )
          fread((char *)&unk_143DADB04 + 24 * v15 + 4 * i, 4u, 1u, v6);
        v13 = v149;
        ++v12;
        v14 += 6;
      }
      while ( v12 < *(_DWORD *)((char *)&unk_143DADAF8 + v7) );
      v10 = v151;
    }
    fread((void *)(0x140000000LL + v7 + 64699132), 4u, 1u, v6);
    v17 = 0;
    if ( *(int *)((char *)dword_143DB3AFC + v7) > 0 )
    {
      v18 = 45072 * v148;
      do
        fread((void *)(0x140000000LL + 12 * (v10 + v17++) + 64699136), 4u, 3u, v6);
      while ( v17 < dword_143DB3AFC[v18] );
    }
    fread((char *)dword_143DB6B00 + v7, 4u, 1u, v6);
    v19 = 0;
    LODWORD(v149) = 0;
    if ( *(int *)((char *)dword_143DB6B00 + v7) > 0 )
    {
      v20 = (int *)((char *)&unk_143DB6B08 + v7);
      do
      {
        if ( Buffer >= 3 )
          fread((char *)&unk_143DB6B04 + 104 * v19 + v7, 4u, 1u, v6);
        v153 = 104LL * v19;
        v21 = v7 + v153;
        v154 = v7 + v153;
        fread((char *)&unk_143DB6B08 + v7 + v153, 4u, 1u, v6);
        v22 = 0;
        if ( *v20 > 0 )
        {
          v23 = v148;
          v24 = v153;
          v25 = 45072 * v148 + 26LL * v19;
          do
          {
            fread(&dword_143DB6B0C[v25 + v22], 4u, 1u, v6);
            if ( Buffer >= 2 )
            {
              v26 = v24 + 16 * (11268 * v23 + v22);
              fread((char *)&unk_143DB6B2C + v26, 4u, 1u, v6);
              fread((char *)&unk_143DB6B30 + v26, 4u, 1u, v6);
              fread((char *)&unk_143DB6B34 + v26, 4u, 1u, v6);
              fread((char *)&unk_143DB6B38 + v26, 4u, 1u, v6);
            }
            ++v22;
          }
          while ( v22 < *v20 );
          v7 = v152;
          v3 = 0;
          v19 = v149;
          v21 = v154;
        }
        if ( Buffer >= 2 )
        {
          v27 = 4;
          v28 = (char *)&unk_143DB6B1C + v21;
          do
          {
            fread(v28, 4u, 1u, v6);
            v28 += 4;
            --v27;
          }
          while ( v27 );
        }
        ++v19;
        v20 += 26;
        LODWORD(v149) = v19;
      }
      while ( v19 < *(int *)((char *)dword_143DB6B00 + v7) );
    }
    fread((char *)dword_143DD0B04 + v7, 4u, 1u, v6);
    v29 = 0;
    if ( *(int *)((char *)dword_143DD0B04 + v7) > 0 )
    {
      v30 = v151;
      v31 = (int *)((char *)&unk_143DD0B08 + v7);
      do
      {
        v32 = 52LL * v29;
        fread((char *)&unk_143DD0B08 + v7 + v32, 4u, 1u, v6);
        v33 = 0;
        if ( *v31 > 0 )
        {
          do
            fread((char *)&unk_143DD0B0C + 12 * v30 + 12 * v33++ + v32, 4u, 3u, v6);
          while ( v33 < *v31 );
          v7 = v152;
        }
        ++v29;
        v31 += 13;
      }
      while ( v29 < *(int *)((char *)dword_143DD0B04 + v7) );
    }
    fread((char *)dword_143DD2508 + v7, 4u, 1u, v6);
    v34 = 0;
    v5 = v148;
    if ( *(int *)((char *)dword_143DD2508 + v7) > 0 )
    {
      v35 = 45072 * v148;
      do
      {
        v36 = v7 + 20LL * v34;
        fread((char *)&unk_143DD250C + v36, 4u, 1u, v6);
        fread((char *)&dword_143DD2510 + v36, 4u, 3u, v6);
        fread((char *)&unk_143DD251C + v36, 4u, 1u, v6);
        ++v34;
      }
      while ( v34 < dword_143DD2508[v35] );
    }
    fclose(v6);
    LODWORD(v2) = v150;
  }
  v37 = Buffer;
  v38 = 0.0;
  if ( Buffer < 2 )
  {
    v39 = 45072 * v5;
    v40 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v43 = dword_143DA6AEC[45072 * v5];
    if ( v43 > 0 )
    {
      v44 = (unsigned int)v43;
      v45 = (float *)&dword_143DA6AF8[v39];
      do
      {
        v40 = v40 + *(v45 - 2);
        v41 = v41 + *(v45 - 1);
        v42 = v42 + *v45;
        v45 += 4;
        --v44;
      }
      while ( v44 );
    }
    v46 = 0;
    v47 = v40 * (float)(1.0 / (float)v43);
    v48 = v41 * (float)(1.0 / (float)v43);
    v49 = v42 * (float)(1.0 / (float)v43);
    if ( dword_143DB3AFC[v39] > 0 )
    {
      v50 = (float *)((char *)&unk_143DB3B08 + v39 * 4);
      do
      {
        ++v46;
        *(v50 - 2) = *(v50 - 2) - v47;
        *(v50 - 1) = *(v50 - 1) - v48;
        *v50 = *v50 - v49;
        v50 += 3;
      }
      while ( v46 < dword_143DB3AFC[v39] );
    }
    v51 = 0;
    if ( dword_143DD0B04[v39] > 0 )
    {
      v52 = (_DWORD *)((char *)&unk_143DD0B08 + v39 * 4);
      do
      {
        v53 = 0;
        if ( (int)*v52 > 0 )
        {
          v54 = (float *)(v52 + 3);
          do
          {
            ++v53;
            *(v54 - 2) = *(v54 - 2) - v47;
            *(v54 - 1) = *(v54 - 1) - v48;
            *v54 = *v54 - v49;
            v54 += 3;
          }
          while ( v53 < *v52 );
        }
        ++v51;
        v52 += 13;
      }
      while ( v51 < dword_143DD0B04[v39] );
    }
    v55 = 0;
    if ( dword_143DB6B00[v39] > 0 )
    {
      do
        sub_1400EA7C0(v2, v55++);
      while ( v55 < dword_143DB6B00[45072 * v5] );
      v37 = Buffer;
    }
  }
  v56 = 180288 * v5;
  v57 = dword_143DA6AEC[45072 * v5];
  if ( v37 < 5 )
  {
    v74 = 0.0;
    v75 = 0.0;
    if ( v57 > 0 )
    {
      v76 = (unsigned int)dword_143DA6AEC[45072 * v5];
      v77 = (float *)&dword_143DA6AF8[v56 / 4];
      do
      {
        v38 = v38 + *(v77 - 2);
        v74 = v74 + *(v77 - 1);
        v75 = v75 + *v77;
        v77 += 4;
        --v76;
      }
      while ( v76 );
    }
    v78 = 0;
    *(_DWORD *)((char *)&unk_143DAAAF4 + v56) = v57;
    v79 = 1.0 / (float)v57;
    v80 = v38 * v79;
    v81 = v74 * v79;
    v82 = v75 * v79;
    if ( v57 > 0 )
    {
      v83 = (char *)&unk_143DAAB00 + v56;
      v84 = &dword_143DA6AF8[v56 / 4];
      do
      {
        v85 = *(v84 - 2);
        v84 += 4;
        *((_DWORD *)v83 - 2) = v85;
        v83 += 12;
        ++v78;
        *((_DWORD *)v83 - 4) = *(v84 - 5);
        *((_DWORD *)v83 - 3) = *(v84 - 4);
      }
      while ( v78 < dword_143DA6AEC[v56 / 4] );
      v57 = *(_DWORD *)((char *)&unk_143DAAAF4 + v56);
    }
    v86 = 0;
    if ( v57 > 0 )
    {
      v87 = (float *)((char *)&unk_143DAAB00 + v56);
      do
      {
        ++v86;
        *(v87 - 2) = *(v87 - 2) - v80;
        *(v87 - 1) = *(v87 - 1) - v81;
        *v87 = *v87 - v82;
        v87 += 3;
        v57 = *(_DWORD *)((char *)&unk_143DAAAF4 + v56);
      }
      while ( v86 < v57 );
    }
  }
  else
  {
    *(_DWORD *)((char *)&unk_143DAAAF4 + v56) = v57;
    v58 = 0;
    if ( v57 > 0 )
    {
      v59 = (char *)&unk_143DAAB00 + v56;
      v60 = &dword_143DA6AF8[v56 / 4];
      do
      {
        v61 = *(v60 - 2);
        v60 += 4;
        *((_DWORD *)v59 - 2) = v61;
        v59 += 12;
        ++v58;
        *((_DWORD *)v59 - 4) = *(v60 - 5);
        *((_DWORD *)v59 - 3) = *(v60 - 4);
        v57 = dword_143DA6AEC[v56 / 4];
      }
      while ( v58 < v57 );
    }
    v62 = 0;
    if ( v57 > 0 )
    {
      v63 = (float *)&dword_143DA6AF8[v56 / 4];
      do
      {
        ++v62;
        *(v63 - 2) = *(v63 - 2) - *(float *)((char *)&unk_143DA6AE0 + v56);
        *(v63 - 1) = *(v63 - 1) - *(float *)((char *)&unk_143DA6AE4 + v56);
        *v63 = *v63 - *(float *)((char *)&unk_143DA6AE8 + v56);
        v63 += 4;
      }
      while ( v62 < dword_143DA6AEC[v56 / 4] );
    }
    v64 = 0;
    if ( dword_143DB3AFC[v56 / 4] > 0 )
    {
      v65 = (float *)((char *)&unk_143DB3B08 + v56);
      do
      {
        ++v64;
        *(v65 - 2) = *(v65 - 2) - *(float *)((char *)&unk_143DA6AE0 + v56);
        *(v65 - 1) = *(v65 - 1) - *(float *)((char *)&unk_143DA6AE4 + v56);
        *v65 = *v65 - *(float *)((char *)&unk_143DA6AE8 + v56);
        v65 += 3;
      }
      while ( v64 < dword_143DB3AFC[v56 / 4] );
    }
    v66 = 0;
    if ( dword_143DD0B04[v56 / 4] > 0 )
    {
      v67 = (_DWORD *)((char *)&unk_143DD0B08 + v56);
      do
      {
        v68 = 0;
        if ( (int)*v67 > 0 )
        {
          v69 = (float *)(v67 + 3);
          do
          {
            ++v68;
            *(v69 - 2) = *(v69 - 2) - *(float *)((char *)&unk_143DA6AE0 + v56);
            *(v69 - 1) = *(v69 - 1) - *(float *)((char *)&unk_143DA6AE4 + v56);
            *v69 = *v69 - *(float *)((char *)&unk_143DA6AE8 + v56);
            v69 += 3;
          }
          while ( v68 < *v67 );
        }
        ++v66;
        v67 += 13;
      }
      while ( v66 < dword_143DD0B04[v56 / 4] );
    }
    v70 = 0;
    if ( *(int *)((char *)&unk_143DAAAF4 + v56) > 0 )
    {
      v71 = (float *)((char *)&unk_143DAAB00 + v56);
      do
      {
        ++v70;
        *(v71 - 2) = *(v71 - 2) - *(float *)((char *)&unk_143DA6AE0 + v56);
        *(v71 - 1) = *(v71 - 1) - *(float *)((char *)&unk_143DA6AE4 + v56);
        *v71 = *v71 - *(float *)((char *)&unk_143DA6AE8 + v56);
        v71 += 3;
      }
      while ( v70 < *(_DWORD *)((char *)&unk_143DAAAF4 + v56) );
    }
    v72 = 0;
    if ( dword_143DD2508[v56 / 4] > 0 )
    {
      v73 = (float *)((char *)&unk_143DD2518 + v56);
      do
      {
        ++v72;
        *(v73 - 2) = *(v73 - 2) - *(float *)((char *)&unk_143DA6AE0 + v56);
        *(v73 - 1) = *(v73 - 1) - *(float *)((char *)&unk_143DA6AE4 + v56);
        *v73 = *v73 - *(float *)((char *)&unk_143DA6AE8 + v56);
        v73 += 5;
      }
      while ( v72 < dword_143DD2508[v56 / 4] );
    }
    v57 = *(_DWORD *)((char *)&unk_143DAAAF4 + v56);
  }
  dword_143DD2650[v56 / 4] = v57;
  v88 = malloc(12 * v57);
  v89 = *(_DWORD *)((char *)&unk_143DAAAF4 + v56) <= 0;
  v90 = 0;
  *(_QWORD *)&dword_143DD2650[v56 / 4 + 2] = v88;
  if ( !v89 )
  {
    v91 = 45072 * v5;
    v92 = (char *)&unk_143DAAB00 + 180288 * v5;
    do
    {
      v93 = *((_DWORD *)v92 - 2);
      v92 += 12;
      ++v90;
      v94 = *(_QWORD *)&dword_143DD2650[v91 + 2] - ((_QWORD)&unk_143DAAB00 + 180288 * v5);
      *(_DWORD *)&v92[v94 - 12] = v93;
      *(_DWORD *)&v92[v94 - 8] = *((_DWORD *)v92 - 4);
      *(_DWORD *)&v92[v94 - 4] = *((_DWORD *)v92 - 3);
    }
    while ( v90 < *(_DWORD *)((char *)&unk_143DAAAF4 + v91 * 4) );
  }
  v95 = *(_DWORD *)((char *)&unk_143DADAF8 + v56);
  v96 = dword_143DA62D0;
  v97 = 0;
  dword_143DA62C8 = 0;
  if ( v95 > 0 )
  {
    v98 = (unsigned int)v95;
    v99 = (int *)((char *)&unk_143DADB08 + v56);
    do
    {
      if ( *(v99 - 2) == 4 )
      {
        v100 = *v99;
        v101 = *(v99 - 1);
        if ( v97 < 256 )
        {
          v102 = 0;
          if ( v97 <= 0 )
          {
LABEL_105:
            dword_143DA62CC[2 * v97] = v101;
            dword_143DA62D0[2 * dword_143DA62C8] = v100;
            v97 = ++dword_143DA62C8;
          }
          else
          {
            v103 = dword_143DA62D0;
            while ( 1 )
            {
              v104 = *(v103 - 1);
              if ( v104 == v101 && *v103 == v100 )
                break;
              if ( v104 == v100 && *v103 == v101 )
                break;
              ++v102;
              v103 += 2;
              if ( v102 >= v97 )
                goto LABEL_105;
            }
          }
        }
        v105 = v99[1];
        if ( v97 < 256 )
        {
          v106 = 0;
          if ( v97 <= 0 )
          {
LABEL_114:
            dword_143DA62CC[2 * v97] = v100;
            dword_143DA62D0[2 * dword_143DA62C8] = v105;
            v97 = ++dword_143DA62C8;
          }
          else
          {
            v107 = dword_143DA62D0;
            while ( 1 )
            {
              v108 = *(v107 - 1);
              if ( v108 == v100 && *v107 == v105 )
                break;
              if ( v108 == v105 && *v107 == v100 )
                break;
              ++v106;
              v107 += 2;
              if ( v106 >= v97 )
                goto LABEL_114;
            }
          }
        }
        v109 = v99[2];
        if ( v97 < 256 )
        {
          v110 = 0;
          if ( v97 <= 0 )
          {
LABEL_123:
            dword_143DA62CC[2 * v97] = v105;
            dword_143DA62D0[2 * dword_143DA62C8] = v109;
            v97 = ++dword_143DA62C8;
          }
          else
          {
            v111 = dword_143DA62D0;
            while ( 1 )
            {
              v112 = *(v111 - 1);
              if ( v112 == v105 && *v111 == v109 )
                break;
              if ( v112 == v109 && *v111 == v105 )
                break;
              ++v110;
              v111 += 2;
              if ( v110 >= v97 )
                goto LABEL_123;
            }
          }
          if ( v97 < 256 )
          {
            v113 = 0;
            if ( v97 <= 0 )
            {
LABEL_132:
              dword_143DA62CC[2 * v97] = v109;
              dword_143DA62D0[2 * dword_143DA62C8] = v101;
              v97 = ++dword_143DA62C8;
            }
            else
            {
              v114 = dword_143DA62D0;
              while ( 1 )
              {
                v115 = *(v114 - 1);
                if ( v115 == v109 && *v114 == v101 )
                  break;
                if ( v115 == v101 && *v114 == v109 )
                  break;
                ++v113;
                v114 += 2;
                if ( v113 >= v97 )
                  goto LABEL_132;
              }
            }
          }
        }
      }
      v99 += 6;
      --v98;
    }
    while ( v98 );
  }
  dword_143DD2650[v56 / 4 + 4] = 1;
  *(_QWORD *)&dword_143DD2650[v56 / 4 + 6] = 0;
  dword_143DD2650[v56 / 4 + 8] = 0;
  dword_143DD2650[v56 / 4 + 9] = *(_DWORD *)((char *)&unk_143DAAAF4 + v56);
  v116 = malloc(4 * *(_DWORD *)((char *)&unk_143DAAAF4 + v56));
  v117 = 0;
  *(_QWORD *)&dword_143DD2650[v56 / 4 + 10] = v116;
  if ( *(int *)((char *)&unk_143DAAAF4 + v56) > 0 )
  {
    v118 = 45072 * v5;
    v119 = 0;
    do
    {
      v119 += 4;
      *(_DWORD *)(v119 + *(_QWORD *)&dword_143DD2650[v118 + 10] - 4) = v117++;
    }
    while ( v117 < *(_DWORD *)((char *)&unk_143DAAAF4 + v118 * 4) );
  }
  dword_143DD2650[v56 / 4 + 12] = *(_DWORD *)((char *)&unk_143DADAF8 + v56);
  *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] = malloc(36LL * *(int *)((char *)&unk_143DADAF8 + v56));
  v120 = 0;
  if ( *(int *)((char *)&unk_143DADAF8 + v56) > 0 )
  {
    v121 = 0;
    v122 = (char *)&unk_143DADB04 + v56;
    do
    {
      v123 = *((_DWORD *)v122 - 1);
      v122 += 24;
      v121 += 36;
      ++v120;
      *(_DWORD *)(v121 + *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] - 32) = v123;
      *(_DWORD *)(v121 + *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] - 28) = *((_DWORD *)v122 - 6);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] - 24) = *((_DWORD *)v122 - 5);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] - 20) = *((_DWORD *)v122 - 4);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_143DD2650[v56 / 4 + 14] - 16) = *((_DWORD *)v122 - 3);
    }
    while ( v120 < *(_DWORD *)((char *)&unk_143DADAF8 + v56) );
  }
  v124 = dword_143DA62C8;
  dword_143DD2650[v56 / 4 + 16] = dword_143DA62C8;
  result = (__int64)malloc(12 * v124);
  v89 = dword_143DA62C8 <= 0;
  v126 = 0;
  *(_QWORD *)&dword_143DD2650[v56 / 4 + 18] = result;
  if ( !v89 )
  {
    v127 = 45072 * v5;
    v128 = 0;
    do
    {
      v129 = *(v96 - 1);
      v96 += 2;
      v128 += 12;
      ++v126;
      *(_DWORD *)(v128 + *(_QWORD *)&dword_143DD2650[v127 + 18] - 12) = v129;
      result = (unsigned int)*(v96 - 2);
      *(_DWORD *)(v128 + *(_QWORD *)&dword_143DD2650[v127 + 18] - 8) = result;
    }
    while ( v126 < dword_143DA62C8 );
  }
  if ( dword_143DD2650[v56 / 4 + 12] > 0 )
  {
    v130 = 0;
    v131 = 45072 * v5;
    do
    {
      v132 = *(_QWORD *)&dword_143DD2650[v131 + 2];
      v133 = *(_QWORD *)&dword_143DD2650[v131 + 14];
      v134 = 3 * *(_DWORD *)(v133 + v130 + 8);
      v135 = *(float *)(v132 + 4 * v134);
      v136 = *(float *)(v132 + 4 * v134 + 4);
      v137 = *(float *)(v132 + 4 * v134 + 8);
      v138 = 3 * *(_DWORD *)(v133 + v130 + 12);
      v139 = *(float *)(v132 + 4 * v138) - v135;
      v140 = *(float *)(v132 + 4 * v138 + 4) - v136;
      v141 = *(float *)(v132 + 4 * v138 + 8) - v137;
      v142 = 3 * *(_DWORD *)(v133 + v130 + 16);
      v143 = (float *)(v130 + v133 + 24);
      v144 = *(float *)(v132 + 4 * v142 + 4) - v136;
      v145 = *(float *)(v132 + 4 * v142 + 8) - v137;
      v146 = *(float *)(v132 + 4 * v142) - v135;
      *v143 = (float)(v144 * v141) - (float)(v145 * v140);
      v143[1] = (float)(v139 * v145) - (float)(v146 * v141);
      v143[2] = (float)(v146 * v140) - (float)(v139 * v144);
      result = sub_140049260((__int64)v143, v143);
      ++v3;
      v130 += 36;
    }
    while ( v3 < dword_143DD2650[v131 + 12] );
  }
  return result;
}

