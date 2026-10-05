/* Address: 0x1400cb5f0 | Name: sub_1400CB5F0 | Size: 3448 bytes */
void __fastcall sub_1400CB5F0(int a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // r14
  int i; // ebx
  int v6; // r13d
  unsigned int *v7; // rbp
  __int64 v8; // r14
  signed int v9; // esi
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  unsigned int *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rbp
  signed int v16; // ebx
  __int64 v17; // rsi
  signed int v18; // r15d
  int *v19; // rsi
  int v20; // ebx
  __int64 v21; // rbp
  __int64 v22; // rsi
  void *v23; // rcx
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rax
  signed int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  unsigned int *v34; // r9
  int v35; // r11d
  signed __int64 v36; // r10
  unsigned int *v37; // r8
  int v38; // eax
  signed int v39; // edx
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  int v42; // r10d
  unsigned int *v43; // r8
  unsigned int v44; // xmm0_4
  unsigned int v45; // xmm1_4
  unsigned int v46; // xmm2_4
  unsigned int v47; // xmm3_4
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  void *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  int v64; // ebp
  __int64 v65; // r12
  unsigned int *v66; // rdi
  unsigned int *v67; // rbx
  int v68; // eax
  __int64 v69; // rax
  signed int v70; // r8d
  __int64 v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  signed int v75; // r10d
  _DWORD *v76; // r9
  int v77; // r8d
  char *v78; // rdx
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // r14d
  unsigned int *v94; // rbp
  signed int v95; // edi
  __int64 v96; // rbx
  __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // rax
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm6_4
  __int64 v103; // rdx
  float v104; // xmm8_4
  float v105; // xmm4_4
  float v106; // xmm7_4
  __int64 v107; // rax
  float *v108; // rdx
  float v109; // xmm5_4
  float v110; // xmm2_4
  float v111; // xmm3_4
  int v112; // [rsp+20h] [rbp-78h] BYREF
  int Buffer; // [rsp+24h] [rbp-74h] BYREF
  __int64 v114; // [rsp+28h] [rbp-70h]
  int v116; // [rsp+B0h] [rbp+18h] BYREF
  int v117; // [rsp+B8h] [rbp+20h] BYREF

  v2 = MEMORY[0x14020B8D8](a2, "rb");
  v3 = v2;
  v4 = &dword_140404A6C[273306127];
  if ( v2 )
  {
    fread(&Buffer, 4, 1, v2);
    if ( Buffer != 3 )
    {
      sub_14020B9E8(v3);
      return;
    }
    fread(&v116, 4, 1, v3);
    if ( !v116 )
    {
      v117 = 2;
      fread(&v117, 4, 1, v3);
      if ( v117 == 2 )
      {
        fread(&dword_140404A6C[273303053], 4, 1, v3);
        for ( i = 0; i < (int)dword_140404A6C[273303053]; ++i )
          fread(&dword_140404A6C[2 * i + 273303054 + i], 4, 3, v3);
        fread(&dword_140404A6C[273306126], 4, 1, v3);
        v6 = 0;
        v112 = 0;
        if ( (int)dword_140404A6C[273306126] > 0 )
        {
          v7 = &dword_140404A6C[273306127];
          do
          {
            v8 = 13LL * v6;
            fread(&dword_140404A6C[v8 + 273306127], 4, 1, v3);
            v9 = 0;
            if ( (int)*v7 > 0 )
            {
              do
              {
                fread(&dword_140404A6C[13 * v6 + 273306128 + v9], 4, 1, v3);
                fread(&dword_140404A6C[2 * v9++ + 273306132 + v8], 4, 2, v3);
              }
              while ( v9 < (int)*v7 );
              v6 = v112;
            }
            ++v6;
            v7 += 13;
            v112 = v6;
          }
          while ( v6 < (int)dword_140404A6C[273306126] );
        }
      }
    }
    fread(&v116, 4, 1, v3);
    if ( v116 == 1 )
    {
      v112 = 1;
      fread(&v112, 4, 1, v3);
      if ( v112 == 1 )
      {
        fread(&dword_140404A6C[273322513], 4, 1, v3);
        v10 = 0;
        if ( (int)dword_140404A6C[273322513] > 0 )
        {
          v11 = 0;
          do
          {
            fread(&dword_140404A6C[v11 + 273322514], 4, 3, v3);
            ++v10;
            v11 += 3;
          }
          while ( v10 < (int)dword_140404A6C[273322513] );
        }
        fread(&dword_140404A6C[273324050], 4, 1, v3);
        v12 = 0;
        v117 = 0;
        if ( (int)dword_140404A6C[273324050] > 0 )
        {
          v13 = &dword_140404A6C[273324567];
          do
          {
            v14 = v12;
            v15 = 26648LL * v12;
            v114 = v15;
            fread((char *)&dword_140404A6C[273324051] + v15, 4, 3, v3);
            fread((char *)&dword_140404A6C[273324054] + v15, 4, 1, v3);
            v16 = 0;
            if ( (int)*(v13 - 513) > 0 )
            {
              v17 = 6662 * v14;
              do
                fread(&dword_140404A6C[v17 + 273324055 + v16++], 4, 1, v3);
              while ( v16 < (int)*(v13 - 513) );
            }
            fread((char *)&dword_140404A6C[273324567] + v15, 4, 1, v3);
            v18 = 0;
            if ( (int)*v13 > 0 )
            {
              v19 = (int *)(v13 + 2);
              do
              {
                fread((char *)&dword_140404A6C[9 * v18 + 273324569] + v15, 4, 1, v3);
                v20 = 0;
                if ( *v19 > 0 )
                {
                  v21 = 9LL * v18 + 6662LL * v117;
                  do
                    fread(&dword_140404A6C[v21 + 273324570 + v20++], 4, 1, v3);
                  while ( v20 < *v19 );
                  v15 = v114;
                }
                ++v18;
                v19 += 9;
              }
              while ( v18 < (int)*v13 );
            }
            v13 += 6662;
            v12 = ++v117;
          }
          while ( v117 < (int)dword_140404A6C[273324050] );
        }
      }
    }
    sub_14020B9E8(v3);
    v4 = &dword_140404A6C[273306127];
  }
  v22 = 1268LL * a1;
  v23 = *(void **)&dword_140404A6C[v22 + 278522543];
  dword_140404A6C[v22 + 278522541] = dword_140404A6C[273303053];
  free(v23);
  v24 = j__malloc_base((int)(12 * dword_140404A6C[v22 + 278522541]));
  v25 = *(void **)&dword_140404A6C[v22 + 278522545];
  *(_QWORD *)&dword_140404A6C[v22 + 278522543] = v24;
  free(v25);
  v26 = j__malloc_base((int)(8 * dword_140404A6C[v22 + 278522541]));
  v27 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522545] = v26;
  if ( (int)dword_140404A6C[v22 + 278522541] > 0 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      v30 = dword_140404A6C[v29 + 273303054];
      v29 += 3;
      v31 = *(_QWORD *)&dword_140404A6C[v22 + 278522543];
      v28 += 8;
      ++v27;
      *(_DWORD *)(v29 * 4 + v31 - 12) = v30;
      *(_DWORD *)(v29 * 4 + v31 - 8) = dword_140404A6C[v29 + 273303052];
      *(_DWORD *)(v29 * 4 + v31 - 4) = dword_140404A6C[v29 + 273303053];
      v32 = *(_QWORD *)&dword_140404A6C[v22 + 278522545];
      *(_DWORD *)(v28 + v32 - 8) = dword_140404A6C[v29 + 273304587];
      *(_DWORD *)(v28 + v32 - 4) = dword_140404A6C[v29 + 273304588];
    }
    while ( v27 < (int)dword_140404A6C[v22 + 278522541] );
  }
  v33 = dword_140404A6C[273306126];
  v34 = &dword_140404A6C[177544402];
  v35 = 0;
  dword_140404A6C[177544400] = dword_140404A6C[273306126];
  if ( (int)dword_140404A6C[273306126] > 0 )
  {
    v36 = (char *)&dword_140404A6C[273306128] - (char *)&dword_140404A6C[177544402];
    v37 = &dword_140404A6C[177544401];
    do
    {
      v38 = *v4;
      v39 = 0;
      *v37 = *v4;
      if ( v38 > 0 )
      {
        v40 = v37 + 1;
        do
        {
          ++v39;
          *v40 = *(_DWORD *)((char *)v40 + v36);
          ++v40;
        }
        while ( v39 < (int)*v37 );
      }
      v33 = dword_140404A6C[177544400];
      ++v35;
      v4 += 13;
      v37 += 5;
      v36 += 32LL;
    }
    while ( v35 < (int)dword_140404A6C[177544400] );
  }
  v41 = 0;
  v42 = 0;
  dword_140404A6C[177495247] = 0;
  if ( v33 > 0 )
  {
    v43 = &dword_140404A6C[273306135];
    do
    {
      v44 = *(v43 - 3);
      v45 = *(v43 - 2);
      v46 = v43[1];
      v47 = v43[2];
      dword_140404A6C[3 * v41 + 177495248] = *v34;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[2];
      v48 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v48 + 178011345] = v44;
      dword_140404A6C[v48 + 178011346] = v45;
      v49 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v49 + 178011347] = *(v43 - 1);
      dword_140404A6C[v49 + 178011348] = *v43;
      v50 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v50 + 178011349] = v46;
      dword_140404A6C[v50 + 178011350] = v47;
      v41 = ++dword_140404A6C[177495247];
      if ( *(v34 - 1) == 4 )
      {
        dword_140404A6C[3 * v41 + 177495248] = *v34;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[3];
        v51 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v51 + 178011345] = v44;
        dword_140404A6C[v51 + 178011346] = v45;
        v52 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v52 + 178011347] = v46;
        dword_140404A6C[v52 + 178011348] = v47;
        v53 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v53 + 178011349] = v43[3];
        dword_140404A6C[v53 + 178011350] = v43[4];
        v41 = ++dword_140404A6C[177495247];
      }
      ++v42;
      v34 += 5;
      v43 += 13;
    }
    while ( v42 < (int)dword_140404A6C[177544400] );
  }
  v54 = *(void **)&dword_140404A6C[v22 + 278522549];
  dword_140404A6C[v22 + 278522547] = v41;
  free(v54);
  v55 = j__malloc_base((int)(12 * dword_140404A6C[v22 + 278522547]));
  *(_QWORD *)&dword_140404A6C[v22 + 278522549] = v55;
  MEMORY[0x1401FC920](v55, &dword_140404A6C[177495248]);
  free(*(void **)&dword_140404A6C[v22 + 278522551]);
  v56 = j__malloc_base((int)(24 * dword_140404A6C[v22 + 278522547]));
  *(_QWORD *)&dword_140404A6C[v22 + 278522551] = v56;
  MEMORY[0x1401FC920](v56, &dword_140404A6C[178011345]);
  v57 = dword_140404A6C[273322513];
  dword_140404A6C[v22 + 278522247] = dword_140404A6C[273322513];
  v58 = j__malloc_base((int)(12 * v57));
  v59 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522249] = v58;
  if ( (int)dword_140404A6C[273322513] > 0 )
  {
    v60 = 0;
    do
    {
      v61 = dword_140404A6C[v60 + 273322514];
      v60 += 3;
      v62 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
      ++v59;
      *(_DWORD *)(v60 * 4 + v62 - 12) = v61;
      *(_DWORD *)(v60 * 4 + v62 - 8) = dword_140404A6C[v60 + 273322512];
      *(_DWORD *)(v60 * 4 + v62 - 4) = dword_140404A6C[v60 + 273322513];
    }
    while ( v59 < (int)dword_140404A6C[273322513] );
  }
  v63 = dword_140404A6C[273324050];
  v64 = 0;
  dword_140404A6C[v22 + 278522251] = dword_140404A6C[273324050];
  if ( v63 > 0 )
  {
    v65 = -(__int64)&dword_140404A6C[273324569];
    v66 = &dword_140404A6C[v22 + 278522263];
    v67 = &dword_140404A6C[273324054];
    do
    {
      *(v66 - 10) = *(v67 - 3);
      *(v66 - 9) = *(v67 - 2);
      *(v66 - 8) = *(v67 - 1);
      v68 = *v67;
      *(v66 - 7) = *v67;
      v69 = j__malloc_base(4 * v68);
      v70 = 0;
      *((_QWORD *)v66 - 3) = v69;
      if ( (int)*v67 > 0 )
      {
        v71 = 0;
        do
        {
          v72 = v67[++v71];
          ++v70;
          *(_DWORD *)(v71 * 4 + *((_QWORD *)v66 - 3) - 4) = v72;
        }
        while ( v70 < (int)*v67 );
      }
      v73 = (int)v67[513];
      *(v66 - 4) = v73;
      v74 = j__malloc_base(36 * v73);
      v75 = 0;
      *((_QWORD *)v66 - 1) = v74;
      if ( (int)v67[513] > 0 )
      {
        v76 = v67 + 515;
        do
        {
          v77 = 0;
          *(_DWORD *)((char *)v76 + *((_QWORD *)v66 - 1) + v65 + 4) = *v76;
          if ( (int)*v76 > 0 )
          {
            v78 = (char *)v76 + v65 + 8;
            do
            {
              v79 = *(_DWORD *)&v78[(_QWORD)v67 + 2056];
              v78 += 4;
              ++v77;
              *(_DWORD *)&v78[*((_QWORD *)v66 - 1) - 4] = v79;
            }
            while ( v77 < *v76 );
          }
          ++v75;
          v76 += 9;
        }
        while ( v75 < (int)v67[513] );
      }
      *v66 = 0;
      v80 = j__malloc_base(144);
      v81 = (int)*v66;
      *((_QWORD *)v66 + 1) = v80;
      *(_DWORD *)(v80 + 12 * v81) = dword_1402B3750[0];
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B3754[0];
      v82 = (int)*v66;
      *v66 = v82 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v82 + 1)) = dword_1402B3758[0];
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B375C[0];
      v83 = (int)*v66;
      *v66 = v83 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v83 + 1)) = dword_1402B3760[0];
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B3764[0];
      v84 = (int)*v66;
      *v66 = v84 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v84 + 1)) = dword_1402B3768;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B376C;
      v85 = (int)*v66;
      *v66 = v85 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v85 + 1)) = dword_1402B3770;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B3774;
      v86 = (int)*v66;
      *v66 = v86 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v86 + 1)) = dword_1402B3778;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B377C;
      v87 = (int)*v66;
      *v66 = v87 + 1;
      ++v64;
      v67 += 6662;
      v65 -= 26648;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v87 + 1)) = dword_1402B3780;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B3784;
      v88 = (int)*v66;
      *v66 = v88 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v88 + 1)) = dword_1402B3788;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B378C;
      v89 = (int)*v66;
      *v66 = v89 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v89 + 1)) = dword_1402B3790;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B3794;
      v90 = (int)*v66;
      *v66 = v90 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v90 + 1)) = dword_1402B3798;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B379C;
      v91 = (int)*v66;
      *v66 = v91 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v91 + 1)) = dword_1402B37A0;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)*v66 + 4) = dword_1402B37A4;
      v92 = (int)*v66;
      *v66 = v92 + 1;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12 * (v92 + 1)) = dword_1402B37A8;
      *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL * (int)(*v66)++ + 4) = dword_1402B37AC;
      v63 = dword_140404A6C[273324050];
      v66 += 14;
    }
    while ( v64 < (int)dword_140404A6C[273324050] );
  }
  v93 = 0;
  if ( v63 > 0 )
  {
    v94 = &dword_140404A6C[v22 + 278522259];
    do
    {
      v95 = 0;
      if ( (int)*v94 > 0 )
      {
        v96 = 0;
        do
        {
          v97 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
          v98 = *((_QWORD *)v94 + 1);
          v99 = 3 * *(_DWORD *)(v98 + v96 + 8);
          v100 = *(float *)(v97 + 4 * v99);
          v101 = *(float *)(v97 + 4 * v99 + 4);
          v102 = *(float *)(v97 + 4 * v99 + 8);
          v103 = 3 * *(_DWORD *)(v98 + v96 + 12);
          v104 = *(float *)(v97 + 4 * v103 + 4) - v101;
          v105 = *(float *)(v97 + 4 * v103 + 8) - v102;
          v106 = *(float *)(v97 + 4 * v103) - v100;
          v107 = 3 * *(_DWORD *)(v98 + v96 + 16);
          v108 = (float *)(v96 + v98 + 24);
          v109 = *(float *)(v97 + 4 * v107 + 4) - v101;
          v110 = *(float *)(v97 + 4 * v107 + 8) - v102;
          v111 = *(float *)(v97 + 4 * v107) - v100;
          *v108 = (float)(v109 * v105) - (float)(v110 * v104);
          v108[2] = (float)(v104 * v111) - (float)(v109 * v106);
          v108[1] = (float)(v110 * v106) - (float)(v105 * v111);
          sub_14007A240((__int64)v108, v108);
          ++v95;
          v96 += 36;
        }
        while ( v95 < (int)*v94 );
        v63 = dword_140404A6C[273324050];
      }
      ++v93;
      v94 += 14;
    }
    while ( v93 < v63 );
  }
}

