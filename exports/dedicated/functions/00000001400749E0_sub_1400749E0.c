/* Address: 0x1400749e0 | Name: sub_1400749E0 | Size: 3464 bytes */
int __fastcall sub_1400749E0(int a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rdi
  int *v4; // r14
  int result; // eax
  int i; // ebx
  int v7; // r13d
  int *v8; // rbp
  __int64 v9; // r14
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  int *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbp
  int v17; // ebx
  __int64 v18; // rsi
  int v19; // r15d
  int *v20; // rsi
  int v21; // ebx
  __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  void *v24; // rcx
  void *v25; // rax
  void *v26; // rcx
  void *v27; // rax
  int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  int *v35; // r9
  int v36; // r11d
  signed __int64 v37; // r10
  int *v38; // r8
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // r10d
  int *v44; // r8
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm2_4
  int v48; // xmm3_4
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // rcx
  void *v56; // rax
  int v57; // ecx
  void *v58; // rax
  int v59; // ecx
  int v60; // eax
  void *v61; // rax
  int v62; // r8d
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // ebp
  __int64 v67; // r12
  int *v68; // rdi
  int *v69; // rbx
  int v70; // eax
  void *v71; // rax
  int v72; // r8d
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  void *v76; // rax
  int v77; // r10d
  _DWORD *v78; // r9
  int v79; // r8d
  char *v80; // rdx
  int v81; // eax
  _DWORD *v82; // rax
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
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // r14d
  char *v96; // rbp
  int v97; // edi
  __int64 v98; // rbx
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // rax
  float v102; // xmm0_4
  float v103; // xmm1_4
  float v104; // xmm6_4
  __int64 v105; // rdx
  float v106; // xmm8_4
  float v107; // xmm4_4
  float v108; // xmm7_4
  __int64 v109; // rax
  float *v110; // rdx
  float v111; // xmm5_4
  float v112; // xmm2_4
  float v113; // xmm3_4
  int v114; // [rsp+20h] [rbp-78h] BYREF
  int Buffer; // [rsp+24h] [rbp-74h] BYREF
  __int64 v116; // [rsp+28h] [rbp-70h]
  int v118; // [rsp+B0h] [rbp+18h] BYREF
  int v119; // [rsp+B8h] [rbp+20h] BYREF

  v2 = fopen(a2, "rb");
  v3 = v2;
  v4 = (int *)&unk_18EDC1BA8;
  if ( v2 )
  {
    fread(&Buffer, 4u, 1u, v2);
    if ( Buffer != 3 )
      return fclose(v3);
    fread(&v118, 4u, 1u, v3);
    if ( !v118 )
    {
      v119 = 2;
      fread(&v119, 4u, 1u, v3);
      if ( v119 == 2 )
      {
        fread(dword_18EDBEBA0, 4u, 1u, v3);
        for ( i = 0; i < dword_18EDBEBA0[0]; ++i )
          fread(&dword_18EDBEBA0[2 * i + 1 + i], 4u, 3u, v3);
        fread(&dword_18EDC1BA4, 4u, 1u, v3);
        v7 = 0;
        v114 = 0;
        if ( dword_18EDC1BA4 > 0 )
        {
          v8 = (int *)&unk_18EDC1BA8;
          do
          {
            v9 = 52LL * v7;
            fread((char *)&unk_18EDC1BA8 + v9, 4u, 1u, v3);
            v10 = 0;
            if ( *v8 > 0 )
            {
              do
              {
                fread(&dword_18EDBEBA0[13 * v7 + 3075 + v10], 4u, 1u, v3);
                fread((char *)&unk_18EDC1BBC + 8 * v10++ + v9, 4u, 2u, v3);
              }
              while ( v10 < *v8 );
              v7 = v114;
            }
            ++v7;
            v8 += 13;
            v114 = v7;
          }
          while ( v7 < dword_18EDC1BA4 );
        }
      }
    }
    fread(&v118, 4u, 1u, v3);
    if ( v118 == 1 )
    {
      v114 = 1;
      fread(&v114, 4u, 1u, v3);
      if ( v114 == 1 )
      {
        fread(&dword_18EDD1BB0, 4u, 1u, v3);
        v11 = 0;
        if ( dword_18EDD1BB0 > 0 )
        {
          v12 = 0;
          do
          {
            fread(&dword_18EDBEBA0[v12 + 19461], 4u, 3u, v3);
            ++v11;
            v12 += 3;
          }
          while ( v11 < dword_18EDD1BB0 );
        }
        fread(&dword_18EDD33B4, 4u, 1u, v3);
        v13 = 0;
        v119 = 0;
        if ( dword_18EDD33B4 > 0 )
        {
          v14 = (int *)&unk_18EDD3BC8;
          do
          {
            v15 = v13;
            v16 = 26648LL * v13;
            v116 = v16;
            fread((char *)&dword_18EDBEBA0[20998] + v16, 4u, 3u, v3);
            fread((char *)&dword_18EDBEBA0[21001] + v16, 4u, 1u, v3);
            v17 = 0;
            if ( *(v14 - 513) > 0 )
            {
              v18 = 6662 * v15;
              do
                fread(&dword_18EDBEBA0[v18 + 21002 + v17++], 4u, 1u, v3);
              while ( v17 < *(v14 - 513) );
            }
            fread((char *)&dword_18EDBEBA0[21514] + v16, 4u, 1u, v3);
            v19 = 0;
            if ( *v14 > 0 )
            {
              v20 = v14 + 2;
              do
              {
                fread((char *)&unk_18EDD3BD0 + 36 * v19 + v16, 4u, 1u, v3);
                v21 = 0;
                if ( *v20 > 0 )
                {
                  v22 = 9LL * v19 + 6662LL * v119;
                  do
                    fread(&dword_18EDBEBA0[v22 + 21517 + v21++], 4u, 1u, v3);
                  while ( v21 < *v20 );
                  v16 = v116;
                }
                ++v19;
                v20 += 9;
              }
              while ( v19 < *v14 );
            }
            v14 += 6662;
            v13 = ++v119;
          }
          while ( v119 < dword_18EDD33B4 );
        }
      }
    }
    fclose(v3);
    v4 = (int *)&unk_18EDC1BA8;
  }
  v23 = 5072LL * a1;
  v24 = *(void **)((char *)&unk_190123468 + v23);
  *(_DWORD *)((char *)&unk_190123460 + v23) = dword_18EDBEBA0[0];
  free(v24);
  v25 = malloc(12 * *(_DWORD *)((char *)&unk_190123460 + v23));
  v26 = *(void **)((char *)&unk_190123470 + v23);
  *(_QWORD *)((char *)&unk_190123468 + v23) = v25;
  free(v26);
  v27 = malloc(8 * *(_DWORD *)((char *)&unk_190123460 + v23));
  v28 = 0;
  *(_QWORD *)((char *)&unk_190123470 + v23) = v27;
  if ( *(int *)((char *)&unk_190123460 + v23) > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = dword_18EDBEBA0[v30 + 1];
      v30 += 3;
      v32 = *(_QWORD *)((char *)&unk_190123468 + v23);
      v29 += 8;
      ++v28;
      *(_DWORD *)(v30 * 4 + v32 - 12) = v31;
      *(_DWORD *)(v30 * 4 + v32 - 8) = dword_18EDBEBA0[v30 - 1];
      *(_DWORD *)(v30 * 4 + v32 - 4) = dword_18EDBEBA0[v30];
      v33 = *(_QWORD *)((char *)&unk_190123470 + v23);
      *(_DWORD *)(v29 + v33 - 8) = dword_18EDBEBA0[v30 + 1534];
      *(_DWORD *)(v29 + v33 - 4) = dword_18EDBEBA0[v30 + 1535];
    }
    while ( v28 < *(_DWORD *)((char *)&unk_190123460 + v23) );
  }
  v34 = dword_18EDC1BA4;
  v35 = dword_178446BB4;
  v36 = 0;
  dword_178446BAC = dword_18EDC1BA4;
  if ( dword_18EDC1BA4 > 0 )
  {
    v37 = &unk_18EDC1BAC - (_UNKNOWN *)dword_178446BB4;
    v38 = dword_178446BB0;
    do
    {
      v39 = *v4;
      v40 = 0;
      *v38 = *v4;
      if ( v39 > 0 )
      {
        v41 = v38 + 1;
        do
        {
          ++v40;
          *v41 = *(_DWORD *)((char *)v41 + v37);
          ++v41;
        }
        while ( v40 < *v38 );
      }
      v34 = dword_178446BAC;
      ++v36;
      v4 += 13;
      v38 += 5;
      v37 += 32LL;
    }
    while ( v36 < dword_178446BAC );
  }
  v42 = 0;
  v43 = 0;
  dword_178416BA8 = 0;
  if ( v34 > 0 )
  {
    v44 = (int *)&unk_18EDC1BC8;
    do
    {
      v45 = *(v44 - 3);
      v46 = *(v44 - 2);
      v47 = v44[1];
      v48 = v44[2];
      dword_178416BAC[3 * v42] = *v35;
      dword_178416BB0[3 * dword_178416BA8] = v35[1];
      dword_178416BB4[3 * dword_178416BA8] = v35[2];
      v49 = 6 * dword_178416BA8;
      dword_17860EBB0[v49] = v45;
      dword_17860EBB4[v49] = v46;
      v50 = 6 * dword_178416BA8;
      dword_17860EBB8[v50] = *(v44 - 1);
      dword_17860EBBC[v50] = *v44;
      v51 = 6 * dword_178416BA8;
      dword_17860EBC0[v51] = v47;
      dword_17860EBC4[v51] = v48;
      v42 = ++dword_178416BA8;
      if ( *(v35 - 1) == 4 )
      {
        dword_178416BAC[3 * v42] = *v35;
        dword_178416BB0[3 * dword_178416BA8] = v35[2];
        dword_178416BB4[3 * dword_178416BA8] = v35[3];
        v52 = 6 * dword_178416BA8;
        dword_17860EBB0[v52] = v45;
        dword_17860EBB4[v52] = v46;
        v53 = 6 * dword_178416BA8;
        dword_17860EBB8[v53] = v47;
        dword_17860EBBC[v53] = v48;
        v54 = 6 * dword_178416BA8;
        dword_17860EBC0[v54] = v44[3];
        dword_17860EBC4[v54] = v44[4];
        v42 = ++dword_178416BA8;
      }
      ++v43;
      v35 += 5;
      v44 += 13;
    }
    while ( v43 < dword_178446BAC );
  }
  v55 = *(void **)((char *)&unk_190123480 + v23);
  *(_DWORD *)((char *)&unk_190123478 + v23) = v42;
  free(v55);
  v56 = malloc(12 * *(_DWORD *)((char *)&unk_190123478 + v23));
  v57 = *(_DWORD *)((char *)&unk_190123478 + v23);
  *(_QWORD *)((char *)&unk_190123480 + v23) = v56;
  memcpy(v56, dword_178416BAC, 12 * v57);
  free(*(void **)((char *)&unk_190123488 + v23));
  v58 = malloc(24 * *(_DWORD *)((char *)&unk_190123478 + v23));
  v59 = *(_DWORD *)((char *)&unk_190123478 + v23);
  *(_QWORD *)((char *)&unk_190123488 + v23) = v58;
  memcpy(v58, dword_17860EBB0, 24 * v59);
  v60 = dword_18EDD1BB0;
  dword_190122FC8[v23 / 4] = dword_18EDD1BB0;
  v61 = malloc(12 * v60);
  v62 = 0;
  qword_190122FD0[v23 / 8] = (__int64)v61;
  if ( dword_18EDD1BB0 > 0 )
  {
    v63 = 0;
    do
    {
      v64 = dword_18EDBEBA0[v63 + 19461];
      v63 += 3;
      v65 = qword_190122FD0[v23 / 8];
      ++v62;
      *(_DWORD *)(v63 * 4 + v65 - 12) = v64;
      *(_DWORD *)(v63 * 4 + v65 - 8) = dword_18EDBEBA0[v63 + 19459];
      *(_DWORD *)(v63 * 4 + v65 - 4) = dword_18EDBEBA0[v63 + 19460];
    }
    while ( v62 < dword_18EDD1BB0 );
  }
  result = dword_18EDD33B4;
  v66 = 0;
  *(_DWORD *)&algn_190122FD8[v23] = dword_18EDD33B4;
  if ( result > 0 )
  {
    v67 = -(__int64)&unk_18EDD3BD0;
    v68 = &dword_190123008[v23 / 4];
    v69 = (int *)&unk_18EDD33C4;
    do
    {
      *(v68 - 10) = *(v69 - 3);
      *(v68 - 9) = *(v69 - 2);
      *(v68 - 8) = *(v69 - 1);
      v70 = *v69;
      *(v68 - 7) = *v69;
      v71 = malloc(4 * v70);
      v72 = 0;
      *((_QWORD *)v68 - 3) = v71;
      if ( *v69 > 0 )
      {
        v73 = 0;
        do
        {
          v74 = v69[++v73];
          ++v72;
          *(_DWORD *)(v73 * 4 + *((_QWORD *)v68 - 3) - 4) = v74;
        }
        while ( v72 < *v69 );
      }
      v75 = v69[513];
      *(v68 - 4) = v75;
      v76 = malloc(36 * v75);
      v77 = 0;
      *((_QWORD *)v68 - 1) = v76;
      if ( v69[513] > 0 )
      {
        v78 = v69 + 515;
        do
        {
          v79 = 0;
          *(_DWORD *)((char *)v78 + *((_QWORD *)v68 - 1) + v67 + 4) = *v78;
          if ( (int)*v78 > 0 )
          {
            v80 = (char *)v78 + v67 + 8;
            do
            {
              v81 = *(_DWORD *)&v80[(_QWORD)v69 + 2056];
              v80 += 4;
              ++v79;
              *(_DWORD *)&v80[*((_QWORD *)v68 - 1) - 4] = v81;
            }
            while ( v79 < *v78 );
          }
          ++v77;
          v78 += 9;
        }
        while ( v77 < v69[513] );
      }
      *v68 = 0;
      v82 = malloc(0x90u);
      v83 = *v68;
      *((_QWORD *)v68 + 1) = v82;
      v82[3 * v83] = dword_1401478F0[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_1401478F4[0];
      v84 = *v68;
      *v68 = v84 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v84 + 1)) = dword_1401478F8[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_1401478FC[0];
      v85 = *v68;
      *v68 = v85 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v85 + 1)) = dword_140147900[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_140147904[0];
      v86 = *v68;
      *v68 = v86 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v86 + 1)) = dword_140147908;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_14014790C;
      v87 = *v68;
      *v68 = v87 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v87 + 1)) = dword_140147910;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_140147914;
      v88 = *v68;
      *v68 = v88 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v88 + 1)) = dword_140147918;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_14014791C;
      v89 = *v68;
      *v68 = v89 + 1;
      ++v66;
      v69 += 6662;
      v67 -= 26648;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v89 + 1)) = dword_140147920;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_140147924;
      v90 = *v68;
      *v68 = v90 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v90 + 1)) = dword_140147928;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_14014792C;
      v91 = *v68;
      *v68 = v91 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v91 + 1)) = dword_140147930;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_140147934;
      v92 = *v68;
      *v68 = v92 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v92 + 1)) = dword_140147938;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_14014793C;
      v93 = *v68;
      *v68 = v93 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v93 + 1)) = dword_140147940;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * *v68 + 4) = dword_140147944;
      v94 = *v68;
      *v68 = v94 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v94 + 1)) = dword_140147948;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (*v68)++ + 4) = dword_14014794C;
      result = dword_18EDD33B4;
      v68 += 14;
    }
    while ( v66 < dword_18EDD33B4 );
  }
  v95 = 0;
  if ( result > 0 )
  {
    v96 = (char *)&unk_190122FF8 + v23;
    do
    {
      v97 = 0;
      if ( *(int *)v96 > 0 )
      {
        v98 = 0;
        do
        {
          v99 = qword_190122FD0[v23 / 8];
          v100 = *((_QWORD *)v96 + 1);
          v101 = 3 * *(_DWORD *)(v100 + v98 + 8);
          v102 = *(float *)(v99 + 4 * v101);
          v103 = *(float *)(v99 + 4 * v101 + 4);
          v104 = *(float *)(v99 + 4 * v101 + 8);
          v105 = 3 * *(_DWORD *)(v100 + v98 + 12);
          v106 = *(float *)(v99 + 4 * v105 + 4) - v103;
          v107 = *(float *)(v99 + 4 * v105 + 8) - v104;
          v108 = *(float *)(v99 + 4 * v105) - v102;
          v109 = 3 * *(_DWORD *)(v100 + v98 + 16);
          v110 = (float *)(v98 + v100 + 24);
          v111 = *(float *)(v99 + 4 * v109 + 4) - v103;
          v112 = *(float *)(v99 + 4 * v109 + 8) - v104;
          v113 = *(float *)(v99 + 4 * v109) - v102;
          *v110 = (float)(v111 * v107) - (float)(v112 * v106);
          v110[2] = (float)(v106 * v113) - (float)(v111 * v108);
          v110[1] = (float)(v112 * v108) - (float)(v107 * v113);
          sub_140049260((__int64)v110, v110);
          ++v97;
          v98 += 36;
        }
        while ( v97 < *(_DWORD *)v96 );
        result = dword_18EDD33B4;
      }
      ++v95;
      v96 += 56;
    }
    while ( v95 < result );
  }
  return result;
}

