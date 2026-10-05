/* Address: 0x140192ec0 | Name: asset_load_vehicle_sbv_candidate | Size: 4370 bytes */
// Candidate .sbv vehicle loader: formats data/%s.sbv, opens rb, large parser with allocation and geometry/physics setup.
__int64 __fastcall asset_load_vehicle_sbv_candidate(int a1, const char *a2)
{
  __int64 v2; // rsi
  int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // esi
  int v13; // r13d
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  __int64 v16; // r12
  int i; // ebx
  int v18; // ebx
  __int64 v19; // rsi
  int v20; // r13d
  int *v21; // rbp
  __int64 v22; // r12
  int v23; // esi
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rsi
  char *v29; // rbx
  int v30; // ebp
  __int64 v31; // r13
  int *v32; // rsi
  __int64 v33; // r12
  int v34; // ebx
  int v35; // esi
  __int64 v36; // rbp
  __int64 v37; // rbx
  int v38; // r10d
  float v39; // xmm6_4
  __int64 v40; // r8
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  int v44; // edx
  __int64 v45; // rcx
  float *v46; // rax
  int v47; // ecx
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float *v52; // rax
  _DWORD *v53; // rdx
  int v54; // ecx
  float *v55; // rax
  int v56; // ebx
  unsigned __int64 v57; // rbx
  int v58; // ecx
  int *v59; // rdx
  int *v60; // r8
  int v61; // eax
  unsigned __int64 v62; // rdx
  float *v63; // rax
  int v64; // ecx
  float *v65; // rax
  __int64 v66; // r8
  int v67; // ecx
  float *v68; // rax
  int v69; // ecx
  float *v70; // rax
  int v71; // ecx
  float *v72; // rax
  float v73; // xmm2_4
  float v74; // xmm3_4
  __int64 v75; // rdx
  float *v76; // rax
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm2_4
  float v80; // xmm3_4
  int *v81; // rcx
  int *v82; // rdx
  int v83; // eax
  float *v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // r9
  bool v88; // cc
  __int64 v89; // r8
  int v90; // eax
  __int64 v91; // rcx
  int v92; // ecx
  int *v93; // rdi
  int v94; // eax
  __int64 v95; // rbp
  int *v96; // rsi
  int v97; // edx
  int v98; // r8d
  int *v99; // rcx
  int v100; // r10d
  int *v101; // rcx
  int v102; // r10d
  int *v103; // rcx
  int *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  __int64 v110; // rdx
  char *v111; // r8
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // r8d
  __int64 v117; // r9
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rbx
  __int64 v121; // rdi
  __int64 v122; // r9
  __int64 v123; // r8
  __int64 v124; // rax
  float v125; // xmm0_4
  float v126; // xmm1_4
  float v127; // xmm2_4
  __int64 v128; // rdx
  float v129; // xmm8_4
  float v130; // xmm7_4
  float v131; // xmm4_4
  __int64 v132; // rax
  float *v133; // rdx
  float v134; // xmm5_4
  float v135; // xmm3_4
  float v136; // xmm6_4
  __int64 v138; // [rsp+0h] [rbp-2D8h] BYREF
  int Buffer; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v140; // [rsp+28h] [rbp-2B0h]
  __int64 v141; // [rsp+30h] [rbp-2A8h]
  int v142; // [rsp+38h] [rbp-2A0h]
  __int64 v143; // [rsp+40h] [rbp-298h]
  __int64 v144; // [rsp+48h] [rbp-290h]
  __int64 v145; // [rsp+50h] [rbp-288h]
  __int64 v146; // [rsp+58h] [rbp-280h]
  char FileName[512]; // [rsp+60h] [rbp-278h] BYREF
  __int64 v148; // [rsp+260h] [rbp-78h]

  v2 = a1;
  v3 = 0;
  v142 = a1;
  Buffer = 0;
  sub_140158AB0(FileName, "data/%s.sbv", a2);
  v4 = MEMORY[0x14020B8D8](FileName, "rb");
  v140 = v2;
  v6 = v4;
  v7 = v2;
  if ( v4 )
  {
    fread(&Buffer, 4, 1, v4);
    v8 = 180288 * v2;
    v144 = 180288 * v2;
    if ( Buffer >= 5 )
      fread((char *)&MEMORY[0x19028AC40] + v8, 4, 3, v6);
    fread((char *)MEMORY[0x19028AC4C] + v8, 4, 1, v6);
    v9 = 0;
    if ( *(int *)((char *)MEMORY[0x19028AC4C] + v8) > 0 )
    {
      do
      {
        v10 = 4 * (11268 * v7 + v9);
        fread(&MEMORY[0x19028AC50][v10], 4, 3, v6);
        fread((char *)&MEMORY[0x19028AC5C] + v10 * 4, 4, 1, v6);
        ++v9;
      }
      while ( v9 < MEMORY[0x19028AC4C][45072 * v7] );
      v7 = v140;
    }
    fread(0x140000000LL + v8 + 1344846928, 4, 1, v6);
    v11 = 15024 * v7;
    v12 = 0;
    v143 = 15024 * v7;
    if ( *(int *)((char *)MEMORY[0x19028BC50] + v8) > 0 )
    {
      do
      {
        fread((char *)&MEMORY[0x19028BC54] + 12 * v11 + 12 * v12, 4, 1, v6);
        fread((char *)&MEMORY[0x19028BC58] + 12 * v11 + 12 * v12++, 4, 2, v6);
      }
      while ( v12 < MEMORY[0x19028BC50][45072 * v7] );
    }
    fread(0x140000000LL + v8 + 1344871512, 4, 1, v6);
    v13 = 0;
    if ( *(int *)((char *)&MEMORY[0x190291C58] + v8) > 0 )
    {
      v14 = 7512 * v140;
      v141 = 7512 * v140;
      v15 = (_DWORD *)(0x140000000LL + v8 + 1344871520);
      do
      {
        v16 = v14 + v13;
        fread(0x140000000LL + 24 * v16 + 1344871520, 4, 1, v6);
        for ( i = 0; i < *v15; ++i )
          fread((char *)&MEMORY[0x190291C64] + 24 * v16 + 4 * i, 4, 1, v6);
        v14 = v141;
        ++v13;
        v15 += 6;
      }
      while ( v13 < *(_DWORD *)((char *)&MEMORY[0x190291C58] + v8) );
      v11 = v143;
    }
    fread(0x140000000LL + v8 + 1344896092, 4, 1, v6);
    v18 = 0;
    if ( *(int *)((char *)MEMORY[0x190297C5C] + v8) > 0 )
    {
      v19 = 45072 * v140;
      do
        fread(0x140000000LL + 12 * (v11 + v18++) + 1344896096, 4, 3, v6);
      while ( v18 < MEMORY[0x190297C5C][v19] );
    }
    fread((char *)MEMORY[0x19029AC60] + v8, 4, 1, v6);
    v20 = 0;
    LODWORD(v141) = 0;
    if ( *(int *)((char *)MEMORY[0x19029AC60] + v8) > 0 )
    {
      v21 = (int *)((char *)&MEMORY[0x19029AC68] + v8);
      do
      {
        if ( Buffer >= 3 )
          fread((char *)&MEMORY[0x19029AC64] + 104 * v20 + v8, 4, 1, v6);
        v145 = 104LL * v20;
        v22 = v8 + v145;
        v146 = v8 + v145;
        fread((char *)&MEMORY[0x19029AC68] + v8 + v145, 4, 1, v6);
        v23 = 0;
        if ( *v21 > 0 )
        {
          v24 = v140;
          v25 = v145;
          v26 = 45072 * v140 + 26LL * v20;
          do
          {
            fread(&MEMORY[0x19029AC6C][v26 + v23], 4, 1, v6);
            if ( Buffer >= 2 )
            {
              v27 = v25 + 16 * (11268 * v24 + v23);
              fread((char *)&MEMORY[0x19029AC8C] + v27, 4, 1, v6);
              fread((char *)&MEMORY[0x19029AC90] + v27, 4, 1, v6);
              fread((char *)&MEMORY[0x19029AC94] + v27, 4, 1, v6);
              fread((char *)&MEMORY[0x19029AC98] + v27, 4, 1, v6);
            }
            ++v23;
          }
          while ( v23 < *v21 );
          v8 = v144;
          v3 = 0;
          v20 = v141;
          v22 = v146;
        }
        if ( Buffer >= 2 )
        {
          v28 = 4;
          v29 = (char *)&MEMORY[0x19029AC7C] + v22;
          do
          {
            fread(v29, 4, 1, v6);
            v29 += 4;
            --v28;
          }
          while ( v28 );
        }
        ++v20;
        v21 += 26;
        LODWORD(v141) = v20;
      }
      while ( v20 < *(int *)((char *)MEMORY[0x19029AC60] + v8) );
    }
    fread((char *)MEMORY[0x1902B4C64] + v8, 4, 1, v6);
    v30 = 0;
    if ( *(int *)((char *)MEMORY[0x1902B4C64] + v8) > 0 )
    {
      v31 = v143;
      v32 = (int *)((char *)&MEMORY[0x1902B4C68] + v8);
      do
      {
        v33 = 52LL * v30;
        fread((char *)&MEMORY[0x1902B4C68] + v8 + v33, 4, 1, v6);
        v34 = 0;
        if ( *v32 > 0 )
        {
          do
            fread((char *)&MEMORY[0x1902B4C6C] + 12 * v31 + 12 * v34++ + v33, 4, 3, v6);
          while ( v34 < *v32 );
          v8 = v144;
        }
        ++v30;
        v32 += 13;
      }
      while ( v30 < *(int *)((char *)MEMORY[0x1902B4C64] + v8) );
    }
    fread((char *)MEMORY[0x1902B6668] + v8, 4, 1, v6);
    v35 = 0;
    v7 = v140;
    if ( *(int *)((char *)MEMORY[0x1902B6668] + v8) > 0 )
    {
      v36 = 45072 * v140;
      do
      {
        v37 = v8 + 20LL * v35;
        fread((char *)&MEMORY[0x1902B666C] + v37, 4, 1, v6);
        fread((char *)&MEMORY[0x1902B6670] + v37, 4, 3, v6);
        fread((char *)&MEMORY[0x1902B667C] + v37, 4, 1, v6);
        ++v35;
      }
      while ( v35 < MEMORY[0x1902B6668][v36] );
    }
    sub_14020B9E8(v6);
    LODWORD(v2) = v142;
  }
  v38 = Buffer;
  v39 = 0.0;
  if ( Buffer < 2 )
  {
    v40 = 45072 * v7;
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    v44 = MEMORY[0x19028AC4C][45072 * v7];
    if ( v44 > 0 )
    {
      v45 = (unsigned int)v44;
      v46 = (float *)&MEMORY[0x19028AC58][v40];
      do
      {
        v41 = v41 + *(v46 - 2);
        v42 = v42 + *(v46 - 1);
        v43 = v43 + *v46;
        v46 += 4;
        --v45;
      }
      while ( v45 );
    }
    v47 = 0;
    v48 = 1.0 / (float)v44;
    v49 = v41 * v48;
    v50 = v42 * v48;
    v51 = v43 * v48;
    if ( MEMORY[0x190297C5C][v40] > 0 )
    {
      v52 = (float *)((char *)&MEMORY[0x190297C68] + v40 * 4);
      do
      {
        ++v47;
        *(v52 - 2) = *(v52 - 2) - v49;
        *(v52 - 1) = *(v52 - 1) - v50;
        *v52 = *v52 - v51;
        v52 += 3;
      }
      while ( v47 < MEMORY[0x190297C5C][v40] );
    }
    v5 = 0;
    if ( MEMORY[0x1902B4C64][v40] > 0 )
    {
      v53 = (_DWORD *)((char *)&MEMORY[0x1902B4C68] + v40 * 4);
      do
      {
        v54 = 0;
        if ( (int)*v53 > 0 )
        {
          v55 = (float *)(v53 + 3);
          do
          {
            ++v54;
            *(v55 - 2) = *(v55 - 2) - v49;
            *(v55 - 1) = *(v55 - 1) - v50;
            *v55 = *v55 - v51;
            v55 += 3;
          }
          while ( v54 < *v53 );
        }
        v5 = (unsigned int)(v5 + 1);
        v53 += 13;
      }
      while ( (int)v5 < MEMORY[0x1902B4C64][v40] );
    }
    v56 = 0;
    if ( MEMORY[0x19029AC60][v40] > 0 )
    {
      do
        sub_140192790((unsigned int)v2, (unsigned int)v56++, v40 * 4, v5);
      while ( v56 < MEMORY[0x19029AC60][45072 * v7] );
      v38 = Buffer;
    }
  }
  v57 = 180288 * v7;
  v58 = MEMORY[0x19028AC4C][45072 * v7];
  if ( v38 < 5 )
  {
    v73 = 0.0;
    v74 = 0.0;
    if ( v58 > 0 )
    {
      v75 = (unsigned int)MEMORY[0x19028AC4C][45072 * v7];
      v76 = (float *)&MEMORY[0x19028AC58][v57 / 4];
      do
      {
        v39 = v39 + *(v76 - 2);
        v73 = v73 + *(v76 - 1);
        v74 = v74 + *v76;
        v76 += 4;
        --v75;
      }
      while ( v75 );
    }
    v66 = 0;
    MEMORY[0x19028EC54][v57 / 4] = v58;
    v77 = 1.0 / (float)v58;
    v78 = v39 * v77;
    v79 = v73 * v77;
    v80 = v74 * v77;
    if ( v58 > 0 )
    {
      v81 = &MEMORY[0x19028EC60][v57 / 4];
      v82 = &MEMORY[0x19028AC58][v57 / 4];
      do
      {
        v83 = *(v82 - 2);
        v82 += 4;
        *(v81 - 2) = v83;
        v81 += 3;
        v66 = (unsigned int)(v66 + 1);
        *(v81 - 4) = *(v82 - 5);
        *(v81 - 3) = *(v82 - 4);
      }
      while ( (int)v66 < MEMORY[0x19028AC4C][v57 / 4] );
      v58 = MEMORY[0x19028EC54][v57 / 4];
    }
    v62 = 0;
    if ( v58 > 0 )
    {
      v84 = (float *)&MEMORY[0x19028EC60][v57 / 4];
      do
      {
        v62 = (unsigned int)(v62 + 1);
        *(v84 - 2) = *(v84 - 2) - v78;
        *(v84 - 1) = *(v84 - 1) - v79;
        *v84 = *v84 - v80;
        v84 += 3;
        v58 = MEMORY[0x19028EC54][v57 / 4];
      }
      while ( (int)v62 < v58 );
    }
  }
  else
  {
    MEMORY[0x19028EC54][v57 / 4] = v58;
    v5 = 0;
    if ( v58 > 0 )
    {
      v59 = &MEMORY[0x19028EC60][v57 / 4];
      v60 = &MEMORY[0x19028AC58][v57 / 4];
      do
      {
        v61 = *(v60 - 2);
        v60 += 4;
        *(v59 - 2) = v61;
        v59 += 3;
        v5 = (unsigned int)(v5 + 1);
        *(v59 - 4) = *(v60 - 5);
        *(v59 - 3) = *(v60 - 4);
        v58 = MEMORY[0x19028AC4C][v57 / 4];
      }
      while ( (int)v5 < v58 );
    }
    v62 = 0;
    if ( v58 > 0 )
    {
      v63 = (float *)&MEMORY[0x19028AC58][v57 / 4];
      do
      {
        v62 = (unsigned int)(v62 + 1);
        *(v63 - 2) = *(v63 - 2) - *(float *)((char *)&MEMORY[0x19028AC40] + v57);
        *(v63 - 1) = *(v63 - 1) - *(float *)((char *)&MEMORY[0x19028AC44] + v57);
        *v63 = *v63 - *(float *)((char *)&MEMORY[0x19028AC48] + v57);
        v63 += 4;
      }
      while ( (int)v62 < MEMORY[0x19028AC4C][v57 / 4] );
    }
    v64 = 0;
    if ( MEMORY[0x190297C5C][v57 / 4] > 0 )
    {
      v65 = (float *)((char *)&MEMORY[0x190297C68] + v57);
      do
      {
        ++v64;
        *(v65 - 2) = *(v65 - 2) - *(float *)((char *)&MEMORY[0x19028AC40] + v57);
        *(v65 - 1) = *(v65 - 1) - *(float *)((char *)&MEMORY[0x19028AC44] + v57);
        *v65 = *v65 - *(float *)((char *)&MEMORY[0x19028AC48] + v57);
        v65 += 3;
      }
      while ( v64 < MEMORY[0x190297C5C][v57 / 4] );
    }
    v66 = 0;
    if ( MEMORY[0x1902B4C64][v57 / 4] > 0 )
    {
      v62 = (unsigned __int64)&MEMORY[0x1902B4C68] + v57;
      do
      {
        v67 = 0;
        if ( *(int *)v62 > 0 )
        {
          v68 = (float *)(v62 + 12);
          do
          {
            ++v67;
            *(v68 - 2) = *(v68 - 2) - *(float *)((char *)&MEMORY[0x19028AC40] + v57);
            *(v68 - 1) = *(v68 - 1) - *(float *)((char *)&MEMORY[0x19028AC44] + v57);
            *v68 = *v68 - *(float *)((char *)&MEMORY[0x19028AC48] + v57);
            v68 += 3;
          }
          while ( v67 < *(_DWORD *)v62 );
        }
        v66 = (unsigned int)(v66 + 1);
        v62 += 52LL;
      }
      while ( (int)v66 < MEMORY[0x1902B4C64][v57 / 4] );
    }
    v69 = 0;
    if ( MEMORY[0x19028EC54][v57 / 4] > 0 )
    {
      v70 = (float *)&MEMORY[0x19028EC60][v57 / 4];
      do
      {
        ++v69;
        *(v70 - 2) = *(v70 - 2) - *(float *)((char *)&MEMORY[0x19028AC40] + v57);
        *(v70 - 1) = *(v70 - 1) - *(float *)((char *)&MEMORY[0x19028AC44] + v57);
        *v70 = *v70 - *(float *)((char *)&MEMORY[0x19028AC48] + v57);
        v70 += 3;
      }
      while ( v69 < MEMORY[0x19028EC54][v57 / 4] );
    }
    v71 = 0;
    if ( MEMORY[0x1902B6668][v57 / 4] > 0 )
    {
      v72 = (float *)((char *)&MEMORY[0x1902B6678] + v57);
      do
      {
        ++v71;
        *(v72 - 2) = *(v72 - 2) - *(float *)((char *)&MEMORY[0x19028AC40] + v57);
        *(v72 - 1) = *(v72 - 1) - *(float *)((char *)&MEMORY[0x19028AC44] + v57);
        *v72 = *v72 - *(float *)((char *)&MEMORY[0x19028AC48] + v57);
        v72 += 5;
      }
      while ( v71 < MEMORY[0x1902B6668][v57 / 4] );
    }
    v58 = MEMORY[0x19028EC54][v57 / 4];
  }
  *(_DWORD *)((char *)&MEMORY[0x1902B67B0] + v57) = v58;
  v85 = j__malloc_base(12 * v58, v62, v66, v5);
  v88 = MEMORY[0x19028EC54][v57 / 4] <= 0;
  v89 = 0;
  *(_QWORD *)((char *)&MEMORY[0x1902B67B8] + v57) = v85;
  if ( !v88 )
  {
    v87 = 180288 * v7;
    v86 = (unsigned __int64)&MEMORY[0x19028EC60][45072 * v7];
    do
    {
      v90 = *(_DWORD *)(v86 - 8);
      v86 += 12LL;
      v89 = (unsigned int)(v89 + 1);
      v91 = *(_QWORD *)((char *)&MEMORY[0x1902B67B8] + v87) - (_QWORD)&MEMORY[0x19028EC60][45072 * v7];
      *(_DWORD *)(v91 + v86 - 12) = v90;
      *(_DWORD *)(v91 + v86 - 8) = *(_DWORD *)(v86 - 16);
      *(_DWORD *)(v91 + v86 - 4) = *(_DWORD *)(v86 - 12);
    }
    while ( (int)v89 < *(int *)((char *)MEMORY[0x19028EC54] + v87) );
  }
  v92 = *(_DWORD *)((char *)&MEMORY[0x190291C58] + v57);
  v93 = MEMORY[0x19028A430];
  v94 = 0;
  MEMORY[0x19028A428] = 0;
  if ( v92 > 0 )
  {
    v95 = (unsigned int)v92;
    v96 = (int *)((char *)&MEMORY[0x190291C68] + v57);
    do
    {
      if ( *(v96 - 2) == 4 )
      {
        v97 = *v96;
        v87 = (unsigned int)*(v96 - 1);
        if ( v94 < 256 )
        {
          v98 = 0;
          if ( v94 <= 0 )
          {
LABEL_103:
            MEMORY[0x19028A42C][2 * v94] = v87;
            MEMORY[0x19028A430][2 * MEMORY[0x19028A428]] = v97;
            v94 = ++MEMORY[0x19028A428];
          }
          else
          {
            v99 = MEMORY[0x19028A430];
            while ( *(_QWORD *)(v99 - 1) != __PAIR64__(v97, v87) && *(_QWORD *)(v99 - 1) != __PAIR64__(v87, v97) )
            {
              ++v98;
              v99 += 2;
              if ( v98 >= v94 )
                goto LABEL_103;
            }
          }
        }
        v89 = (unsigned int)v96[1];
        if ( v94 < 256 )
        {
          v100 = 0;
          if ( v94 <= 0 )
          {
LABEL_110:
            MEMORY[0x19028A42C][2 * v94] = v97;
            MEMORY[0x19028A430][2 * MEMORY[0x19028A428]] = v89;
            v94 = ++MEMORY[0x19028A428];
          }
          else
          {
            v101 = MEMORY[0x19028A430];
            while ( *(_QWORD *)(v101 - 1) != __PAIR64__(v89, v97) && *(_QWORD *)(v101 - 1) != __PAIR64__(v97, v89) )
            {
              ++v100;
              v101 += 2;
              if ( v100 >= v94 )
                goto LABEL_110;
            }
          }
        }
        v86 = (unsigned int)v96[2];
        if ( v94 < 256 )
        {
          v102 = 0;
          if ( v94 <= 0 )
          {
LABEL_117:
            MEMORY[0x19028A42C][2 * v94] = v89;
            MEMORY[0x19028A430][2 * MEMORY[0x19028A428]] = v86;
            v94 = ++MEMORY[0x19028A428];
          }
          else
          {
            v103 = MEMORY[0x19028A430];
            while ( *(_QWORD *)(v103 - 1) != __PAIR64__(v86, v89) && *(_QWORD *)(v103 - 1) != __PAIR64__(v89, v86) )
            {
              ++v102;
              v103 += 2;
              if ( v102 >= v94 )
                goto LABEL_117;
            }
          }
          if ( v94 < 256 )
          {
            v89 = 0;
            if ( v94 <= 0 )
            {
LABEL_125:
              MEMORY[0x19028A42C][2 * v94] = v86;
              MEMORY[0x19028A430][2 * MEMORY[0x19028A428]] = v87;
              v94 = ++MEMORY[0x19028A428];
            }
            else
            {
              v104 = MEMORY[0x19028A430];
              while ( *(_QWORD *)(v104 - 1) != __PAIR64__(v87, v86)
                   && (*(v104 - 1) != (_DWORD)v87 || *v104 != (_DWORD)v86) )
              {
                v89 = (unsigned int)(v89 + 1);
                v104 += 2;
                if ( (int)v89 >= v94 )
                  goto LABEL_125;
              }
            }
          }
        }
      }
      v96 += 6;
      --v95;
    }
    while ( v95 );
  }
  *(_DWORD *)((char *)&MEMORY[0x1902B67C0] + v57) = 1;
  *(_QWORD *)((char *)&MEMORY[0x1902B67C8] + v57) = 0;
  *(_DWORD *)((char *)&MEMORY[0x1902B67D0] + v57) = 0;
  *(_DWORD *)((char *)&MEMORY[0x1902B67D4] + v57) = MEMORY[0x19028EC54][v57 / 4];
  v105 = j__malloc_base(4 * MEMORY[0x19028EC54][v57 / 4], v86, v89, v87);
  v109 = 0;
  *(_QWORD *)((char *)&MEMORY[0x1902B67D8] + v57) = v105;
  if ( MEMORY[0x19028EC54][v57 / 4] > 0 )
  {
    v107 = 180288 * v7;
    v106 = 0;
    do
    {
      v106 += 4;
      *(_DWORD *)(v106 + *(_QWORD *)((char *)&MEMORY[0x1902B67D8] + v107) - 4) = v109++;
    }
    while ( v109 < MEMORY[0x19028EC54][v107 / 4] );
  }
  *(_DWORD *)((char *)&MEMORY[0x1902B67E0] + v57) = *(_DWORD *)((char *)&MEMORY[0x190291C58] + v57);
  *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) = j__malloc_base(
                                                      36LL * *(int *)((char *)&MEMORY[0x190291C58] + v57),
                                                      v106,
                                                      v107,
                                                      v108);
  v112 = 0;
  if ( *(int *)((char *)&MEMORY[0x190291C58] + v57) > 0 )
  {
    v110 = 0;
    v111 = (char *)&MEMORY[0x190291C64] + v57;
    do
    {
      v113 = *((_DWORD *)v111 - 1);
      v111 += 24;
      v110 += 36;
      v112 = (unsigned int)(v112 + 1);
      *(_DWORD *)(v110 + *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) - 32) = v113;
      *(_DWORD *)(v110 + *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) - 28) = *((_DWORD *)v111 - 6);
      *(_DWORD *)(v110 + *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) - 24) = *((_DWORD *)v111 - 5);
      *(_DWORD *)(v110 + *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) - 20) = *((_DWORD *)v111 - 4);
      *(_DWORD *)(v110 + *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v57) - 16) = *((_DWORD *)v111 - 3);
    }
    while ( (int)v112 < *(_DWORD *)((char *)&MEMORY[0x190291C58] + v57) );
  }
  v114 = MEMORY[0x19028A428];
  *(_DWORD *)((char *)&MEMORY[0x1902B67F0] + v57) = MEMORY[0x19028A428];
  v115 = j__malloc_base(12 * v114, v110, v111, v112);
  v88 = MEMORY[0x19028A428] <= 0;
  v116 = 0;
  *(_QWORD *)((char *)&MEMORY[0x1902B67F8] + v57) = v115;
  if ( !v88 )
  {
    v117 = 180288 * v7;
    v118 = 0;
    do
    {
      v119 = *(v93 - 1);
      v93 += 2;
      v118 += 12;
      ++v116;
      *(_DWORD *)(v118 + *(_QWORD *)((char *)&MEMORY[0x1902B67F8] + v117) - 12) = v119;
      *(_DWORD *)(v118 + *(_QWORD *)((char *)&MEMORY[0x1902B67F8] + v117) - 8) = *(v93 - 2);
    }
    while ( v116 < MEMORY[0x19028A428] );
  }
  if ( *(int *)((char *)&MEMORY[0x1902B67E0] + v57) > 0 )
  {
    v120 = 0;
    v121 = 180288 * v7;
    do
    {
      v122 = *(_QWORD *)((char *)&MEMORY[0x1902B67B8] + v121);
      v123 = *(_QWORD *)((char *)&MEMORY[0x1902B67E8] + v121);
      v124 = 3 * *(_DWORD *)(v123 + v120 + 8);
      v125 = *(float *)(v122 + 4 * v124);
      v126 = *(float *)(v122 + 4 * v124 + 4);
      v127 = *(float *)(v122 + 4 * v124 + 8);
      v128 = 3 * *(_DWORD *)(v123 + v120 + 12);
      v129 = *(float *)(v122 + 4 * v128) - v125;
      v130 = *(float *)(v122 + 4 * v128 + 4) - v126;
      v131 = *(float *)(v122 + 4 * v128 + 8) - v127;
      v132 = 3 * *(_DWORD *)(v123 + v120 + 16);
      v133 = (float *)(v120 + v123 + 24);
      v134 = *(float *)(v122 + 4 * v132 + 4) - v126;
      v135 = *(float *)(v122 + 4 * v132 + 8) - v127;
      v136 = *(float *)(v122 + 4 * v132) - v125;
      *v133 = (float)(v134 * v131) - (float)(v135 * v130);
      v133[1] = (float)(v129 * v135) - (float)(v136 * v131);
      v133[2] = (float)(v136 * v130) - (float)(v129 * v134);
      sub_14007A240(v133, v133);
      ++v3;
      v120 += 36;
    }
    while ( v3 < *(_DWORD *)((char *)&MEMORY[0x1902B67E0] + v121) );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v138 ^ v148);
}

