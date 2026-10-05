/* Address: 0x1400e8580 | Name: asset_load_character_cmc_candidate | Size: 5337 bytes */
// Candidate .cmc character clothing/config loader: formats data/model/%s.cmc.
__int64 __fastcall asset_load_character_cmc_candidate(int a1, const char *a2)
{
  int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rbp
  _DWORD *v5; // rbx
  int v6; // edi
  float *v7; // rbx
  float v8; // xmm0_4
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  int *v14; // r12
  __int64 v15; // rbx
  int v16; // r14d
  float *v17; // rsi
  int v18; // r9d
  __int64 v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdx
  float v24; // xmm0_4
  __int64 v25; // rdx
  float *v26; // rax
  int v27; // ecx
  float v28; // xmm1_4
  float *v29; // rax
  float v30; // xmm0_4
  int i; // esi
  __int64 v32; // rdi
  int *v33; // rbx
  __int64 v34; // r8
  int v35; // xmm12_4
  int v36; // xmm13_4
  int v37; // xmm14_4
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  float v41; // xmm9_4
  float v42; // xmm10_4
  float v43; // xmm11_4
  float v44; // xmm0_4
  float v45; // xmm9_4
  float v46; // xmm10_4
  float v47; // xmm11_4
  __int64 v48; // rcx
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm7_4
  float v52; // xmm8_4
  float v53; // xmm3_4
  float v54; // xmm6_4
  int v55; // eax
  int v56; // r11d
  __int64 v57; // rdx
  char *v58; // r9
  int v59; // eax
  float v60; // xmm8_4
  float v61; // xmm9_4
  float v62; // xmm10_4
  float *v63; // r8
  __int64 v64; // r10
  float *v65; // rdx
  float v66; // xmm7_4
  float v67; // xmm6_4
  float v68; // xmm5_4
  float v69; // xmm4_4
  __int64 v70; // rax
  float v71; // xmm2_4
  int *v72; // rcx
  int v73; // eax
  int v74; // edi
  int v75; // r11d
  char *v76; // r9
  __int64 v77; // r10
  int *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r15
  unsigned __int64 v83; // rbx
  _DWORD *v84; // rdx
  _DWORD *v85; // rcx
  unsigned __int64 v86; // r8
  int v87; // eax
  int v88; // r9d
  int v89; // r14d
  int *v90; // rsi
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rdx
  float *v94; // rcx
  float v95; // xmm7_4
  float v96; // xmm3_4
  float v97; // xmm8_4
  float v98; // xmm5_4
  float v99; // xmm4_4
  float v100; // xmm6_4
  float v101; // xmm9_4
  float v102; // xmm7_4
  float v103; // xmm8_4
  float v104; // xmm3_4
  float v105; // xmm9_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  __int64 v108; // rbp
  __int64 v109; // rdx
  __int64 v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // edx
  int v115; // ecx
  __int64 v116; // r8
  float v117; // xmm0_4
  __int64 v118; // r8
  float v119; // xmm0_4
  int v120; // r9d
  int v121; // r8d
  __int64 v122; // r11
  float v123; // xmm0_4
  __int64 v124; // rcx
  float v125; // xmm0_4
  int v126; // r11d
  __int64 v127; // rcx
  char *v128; // r9
  int v129; // ecx
  __int64 v130; // r8
  __int64 v132; // [rsp+0h] [rbp-458h] BYREF
  int v133; // [rsp+20h] [rbp-438h]
  int v134; // [rsp+24h] [rbp-434h] BYREF
  int v135; // [rsp+28h] [rbp-430h]
  __int64 v136; // [rsp+30h] [rbp-428h]
  __int64 v137; // [rsp+38h] [rbp-420h]
  __int64 v138; // [rsp+40h] [rbp-418h]
  __int64 v139; // [rsp+48h] [rbp-410h]
  __int64 v140; // [rsp+50h] [rbp-408h]
  unsigned __int64 v141; // [rsp+60h] [rbp-3F8h]
  char v142[256]; // [rsp+70h] [rbp-3E8h] BYREF
  _BYTE v143[512]; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v144; // [rsp+370h] [rbp-E8h]

  v2 = a1;
  v135 = a1;
  sub_140158AB0(v143, "data/model/%s.cmc", a2);
  v3 = MEMORY[0x14020B8D8](v143, "rb");
  v4 = v3;
  v136 = v3;
  v5 = &MEMORY[0x1699AACCC];
  if ( v3 )
  {
    MEMORY[0x1862AE008](v142, 1, 4, v3);
    MEMORY[0x1862AE008](&v134, 4, 1, v4);
    if ( v134 != 2 )
    {
      sub_14020B9E8(v4);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v132 ^ v144);
    }
    MEMORY[0x1862AE008](&MEMORY[0x169CBACC8], 4, 1, v4);
    v6 = 0;
    if ( MEMORY[0x169CBACC8] > 0 )
    {
      v7 = (float *)&MEMORY[0x169CBACD4];
      do
      {
        MEMORY[0x1862AE008](&MEMORY[0x1699AACC0][18 * v6 + 802819], 4, 3, v4);
        v8 = *(v7 - 2);
        v7 += 18;
        ++v6;
        *(v7 - 20) = v8 * 1.125;
        *(v7 - 19) = *(v7 - 19) * 1.125;
        *(v7 - 18) = *(v7 - 18) * 1.125;
      }
      while ( v6 < MEMORY[0x169CBACC8] );
    }
    MEMORY[0x1862AE008](MEMORY[0x1699AACC0], 4, 1, v4);
    v9 = 0;
    v133 = 0;
    if ( (int)MEMORY[0x1699AACC0][0] > 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v140 = 0;
      v13 = 0;
      v139 = 0;
      v137 = 0;
      v14 = (int *)&MEMORY[0x1699AACCC];
      v138 = 0;
      do
      {
        v15 = v9;
        v141 = 276LL * v9;
        MEMORY[0x1862AE008](&MEMORY[0x1699AACC0][v141 / 4 + 1], 4, 3, v4);
        v16 = 0;
        if ( MEMORY[0x169CBACC8] > 0 )
        {
          v17 = (float *)(v14 + 3);
          do
          {
            MEMORY[0x1862AE008](&MEMORY[0x1699AACC0][46 * v15 + 4 + 23 * v15 + 2 * v16 + v16], 4, 3, v4);
            *(v17 - 2) = *(v17 - 2) * 1.125;
            *(v17 - 1) = *(v17 - 1) * 1.125;
            *v17 = *v17 * 1.125;
            MEMORY[0x1862AE008](&MEMORY[0x1699AACC0][69 * v15 + 52 + v16++], 4, 1, v4);
            v17 += 3;
          }
          while ( v16 < MEMORY[0x169CBACC8] );
          v10 = v140;
          v11 = v139;
          v12 = v138;
          v13 = v137;
        }
        MEMORY[0x1862AE008](&MEMORY[0x1699AACC0][v141 / 4 + 68], 4, 2, v4);
        v18 = 0;
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565249] + v10) = *(v14 - 2);
        v19 = 0;
        v20 = 0;
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565250] + v10) = *(v14 - 1);
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565251] + v10) = *v14;
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565273] + v10) = v14[65];
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565274] + v10) = v14[66];
        LODWORD(v21) = 0;
        *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565252] + v10) = 0;
        v22 = MEMORY[0x169CBACC8];
        if ( MEMORY[0x169CBACC8] > 0 )
        {
          do
          {
            v21 = *(int *)((char *)&MEMORY[0x1699AACC0][565252] + v10);
            v20 = v21;
            if ( (int)v21 < 4 && *(float *)&MEMORY[0x1699AACC0][v12 + 52 + v19] > 0.0 )
            {
              MEMORY[0x1699AACC0][v11 + 565253 + v21] = v18;
              v23 = v10 + 12LL * *(int *)((char *)&MEMORY[0x1699AACC0][565252] + v10);
              *(_DWORD *)((char *)&MEMORY[0x169BD2CE4] + v23) = MEMORY[0x1699AACC0][3 * v19 + 4 + 3 * v13];
              *(_DWORD *)((char *)&MEMORY[0x169BD2CE4] + v23 + 4) = MEMORY[0x1699AACC0][3 * v19 + 5 + 3 * v13];
              *(_DWORD *)((char *)&MEMORY[0x169BD2CE4] + v23 + 8) = MEMORY[0x1699AACC0][3 * v19 + 6 + 3 * v13];
              MEMORY[0x1699AACC0][v11 + 565269 + (int)(*(unsigned int *)((char *)&MEMORY[0x1699AACC0][565252] + v10))++] = MEMORY[0x1699AACC0][v12 + 52 + v19];
              LODWORD(v21) = *(unsigned int *)((char *)&MEMORY[0x1699AACC0][565252] + v10);
              v20 = v21;
              v22 = MEMORY[0x169CBACC8];
            }
            ++v18;
            ++v19;
          }
          while ( v18 < v22 );
          v4 = v136;
        }
        v24 = 0.0;
        if ( (int)v21 > 0 )
        {
          v25 = v20;
          v26 = (float *)((char *)&MEMORY[0x169BD2D14] + v10);
          do
          {
            v24 = v24 + *v26++;
            --v25;
          }
          while ( v25 );
          LODWORD(v21) = v20;
        }
        v27 = 0;
        if ( (int)v21 > 0 )
        {
          v28 = 1.0 / v24;
          v29 = (float *)((char *)&MEMORY[0x169BD2D14] + v10);
          do
          {
            ++v27;
            v30 = v28 * *v29++;
            *(v29 - 1) = v30;
          }
          while ( v27 < *(int *)((char *)&MEMORY[0x1699AACC0][565252] + v10) );
        }
        v13 += 23;
        v9 = v133 + 1;
        v137 = v13;
        v12 += 69;
        v133 = v9;
        v11 += 26;
        v138 = v12;
        v10 += 104;
        v139 = v11;
        v14 += 69;
        v140 = v10;
      }
      while ( v9 < (int)MEMORY[0x1699AACC0][0] );
      v2 = v135;
    }
    MEMORY[0x1862AE008](&MEMORY[0x169CA2CC4], 4, 1, v4);
    for ( i = 0; i < MEMORY[0x169CA2CC4]; ++i )
    {
      v32 = 3;
      v33 = (int *)&MEMORY[0x1699AACC0][3 * i + 778242];
      do
      {
        MEMORY[0x1862AE008](v33++, 4, 1, v4);
        --v32;
      }
      while ( v32 );
    }
    sub_14020B9E8(v4);
    v5 = &MEMORY[0x1699AACCC];
  }
  v34 = 0;
  MEMORY[0x18329E55C] = xmmword_140278D30;
  MEMORY[0x18329E57C][0] = 1065353216;
  MEMORY[0x18329E56C] = xmmword_140278D30;
  MEMORY[0x18329E6B4] = 1065353216;
  MEMORY[0x18329E694] = xmmword_140278D30;
  MEMORY[0x18329E7EC] = 1065353216;
  MEMORY[0x18329E6A4] = xmmword_140278D30;
  MEMORY[0x18329E924] = 1065353216;
  MEMORY[0x18329E7CC] = xmmword_140278D30;
  MEMORY[0x18329EA5C] = 1065353216;
  MEMORY[0x18329E7DC] = xmmword_140278D30;
  MEMORY[0x18329EB94] = 1065353216;
  MEMORY[0x18329E904] = xmmword_140278D30;
  MEMORY[0x18329ECCC] = 1065353216;
  MEMORY[0x18329E914] = xmmword_140278D30;
  MEMORY[0x18329EE04] = 1065353216;
  MEMORY[0x18329EA3C] = xmmword_140278D30;
  MEMORY[0x18329EF3C] = 1065353216;
  MEMORY[0x18329EA4C] = xmmword_140278D30;
  MEMORY[0x18329F074] = 1065353216;
  MEMORY[0x18329EB74] = xmmword_140278D30;
  MEMORY[0x18329F1AC] = 1065353216;
  MEMORY[0x18329EB84] = xmmword_140278D30;
  MEMORY[0x18329F2E4] = 1065353216;
  MEMORY[0x18329ECAC] = xmmword_140278D30;
  MEMORY[0x18329F41C] = 1065353216;
  MEMORY[0x18329ECBC] = xmmword_140278D30;
  MEMORY[0x18329F554] = 1065353216;
  MEMORY[0x18329EDE4] = xmmword_140278D30;
  MEMORY[0x18329F68C] = 1065353216;
  MEMORY[0x18329EDF4] = xmmword_140278D30;
  MEMORY[0x18329F7C4] = 1065353216;
  MEMORY[0x18329EF1C] = xmmword_140278D30;
  MEMORY[0x169CBACD8] = 0;
  MEMORY[0x18329EF2C] = xmmword_140278D30;
  MEMORY[0x169CBACDC] = -1103101952;
  MEMORY[0x18329F054] = xmmword_140278D30;
  MEMORY[0x18329F064] = xmmword_140278D30;
  MEMORY[0x18329F18C] = xmmword_140278D30;
  MEMORY[0x18329F19C] = xmmword_140278D30;
  MEMORY[0x18329F2C4] = xmmword_140278D30;
  MEMORY[0x18329F2D4] = xmmword_140278D30;
  MEMORY[0x18329F3FC] = xmmword_140278D30;
  MEMORY[0x18329F40C] = xmmword_140278D30;
  MEMORY[0x18329F534] = xmmword_140278D30;
  MEMORY[0x18329F544] = xmmword_140278D30;
  MEMORY[0x18329F66C] = xmmword_140278D30;
  MEMORY[0x18329F67C] = xmmword_140278D30;
  MEMORY[0x18329F7A4] = xmmword_140278D30;
  MEMORY[0x18329F7B4] = xmmword_140278D30;
  MEMORY[0x169CBACE0] = 1031798784;
  do
  {
    v35 = *((_DWORD *)&MEMORY[0x18329E55C] + 78 * v34 + 3);
    v36 = *((_DWORD *)&MEMORY[0x18329E56C] + 78 * v34);
    v37 = *((_DWORD *)&MEMORY[0x18329E56C] + 78 * v34 + 1);
    v38 = 9 * v34;
    v39 = MEMORY[0x18399DEE0][25 * v34];
    MEMORY[0x1699AACC0][2 * v38 + 802828] = *((_DWORD *)&MEMORY[0x18329E55C] + 78 * v34);
    MEMORY[0x1699AACC0][2 * v38 + 802829] = *((_DWORD *)&MEMORY[0x18329E55C] + 78 * v34 + 1);
    MEMORY[0x1699AACC0][2 * v38 + 802830] = *((_DWORD *)&MEMORY[0x18329E55C] + 78 * v34 + 2);
    v40 = *((_DWORD *)&MEMORY[0x18329E56C] + 78 * v34 + 2);
    MEMORY[0x1699AACC0][2 * v38 + 802831] = v35;
    MEMORY[0x1699AACC0][2 * v38 + 802832] = v36;
    MEMORY[0x1699AACC0][2 * v38 + 802833] = v37;
    MEMORY[0x1699AACC0][2 * v38 + 802834] = v40;
    MEMORY[0x1699AACC0][2 * v38 + 802835] = *((_DWORD *)&MEMORY[0x18329E56C] + 78 * v34 + 3);
    MEMORY[0x1699AACC0][2 * v38 + 802836] = MEMORY[0x18329E57C][78 * v34];
    if ( v34 )
    {
      v41 = *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802819];
      v42 = *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802820];
      v43 = *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802821];
      if ( (unsigned __int64)(v34 - 5) <= 1 || (unsigned __int64)(v34 - 8) <= 1 )
      {
        v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
        if ( v44 == 0.0 )
        {
          v45 = 0.0;
          v46 = 0.0;
          v47 = 0.0;
        }
        else
        {
          v45 = (float)(1.0 / v44) * v41;
          v46 = (float)(1.0 / v44) * v42;
          v47 = (float)(1.0 / v44) * v43;
        }
        v41 = v45 * 0.328125;
        v42 = v46 * 0.328125;
        v43 = v47 * 0.328125;
      }
      v48 = 9 * v39;
      v49 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802832];
      v50 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802829];
      v51 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802833];
      v52 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802830];
      v53 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802835] * v43;
      v54 = *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802836] * v43;
      *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802822] = (float)((float)(v43
                                                                        * *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802834])
                                                                + (float)(v41
                                                                        * *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802828]))
                                                        + (float)((float)(v42
                                                                        * *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802831])
                                                                + *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802822]);
      *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802823] = (float)((float)(v50 * v41) + v53)
                                                        + (float)((float)(v49 * v42)
                                                                + *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802823]);
      *(float *)&MEMORY[0x1699AACC0][18 * v34 + 802824] = (float)((float)(v52 * v41) + v54)
                                                        + (float)((float)(v51 * v42)
                                                                + *(float *)&MEMORY[0x1699AACC0][2 * v48 + 802824]);
    }
    ++v34;
    MEMORY[0x1699AACC0][2 * v38 + 802825] = MEMORY[0x1699AACC0][2 * v38 + 802822];
    MEMORY[0x1699AACC0][2 * v38 + 802826] = MEMORY[0x1699AACC0][2 * v38 + 802823];
    MEMORY[0x1699AACC0][2 * v38 + 802827] = MEMORY[0x1699AACC0][2 * v38 + 802824];
  }
  while ( v34 < 16 );
  v55 = MEMORY[0x1699AACC0][0];
  v56 = 0;
  v57 = MEMORY[0x1699AACC0][0];
  if ( (int)MEMORY[0x1699AACC0][0] > 0 )
  {
    v58 = (char *)&MEMORY[0x169BD2CCC];
    do
    {
      v59 = *((_DWORD *)v58 + 1);
      v60 = 0.0;
      v61 = 0.0;
      v62 = 0.0;
      if ( v59 > 0 )
      {
        v63 = (float *)(v58 + 72);
        v64 = (unsigned int)v59;
        v65 = (float *)(v58 + 32);
        do
        {
          v66 = *(v65 - 2);
          v67 = *(v65 - 1);
          v68 = *v65;
          v69 = *v63;
          v70 = *((int *)v63 - 16);
          v71 = *v65;
          ++v63;
          v65 += 3;
          v60 = v60
              + (float)((float)((float)((float)(v71 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802834])
                                      + (float)(v66 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802828]))
                              + (float)((float)(v67 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802831])
                                      + *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802822]))
                      * v69);
          v61 = v61
              + (float)((float)((float)((float)(v66 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802829])
                                      + (float)(v68 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802835]))
                              + (float)((float)(v67 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802832])
                                      + *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802823]))
                      * v69);
          v62 = v62
              + (float)((float)((float)((float)(v66 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802830])
                                      + (float)(v68 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802836]))
                              + (float)((float)(v67 * *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802833])
                                      + *(float *)&MEMORY[0x1699AACC0][18 * v70 + 802824]))
                      * v69);
          --v64;
        }
        while ( v64 );
      }
      *((float *)v58 - 2) = v60;
      ++v56;
      *((float *)v58 - 1) = v61;
      *(float *)v58 = v62;
      v58 += 104;
      v55 = MEMORY[0x1699AACC0][0];
      v57 = MEMORY[0x1699AACC0][0];
    }
    while ( v56 < (int)MEMORY[0x1699AACC0][0] );
  }
  MEMORY[0x16A7DBDA0] = v55;
  if ( v55 > 0 )
  {
    v72 = &MEMORY[0x16A7DBDB0];
    do
    {
      v73 = *(v5 - 2);
      v5 += 69;
      *(v72 - 2) = v73;
      v72 += 3;
      *(v72 - 4) = *(v5 - 70);
      *(v72 - 3) = *(v5 - 69);
      --v57;
    }
    while ( v57 );
  }
  v74 = MEMORY[0x169CA2CC4];
  v75 = 0;
  MEMORY[0x16A91BDA8] = MEMORY[0x169CA2CC4];
  if ( MEMORY[0x169CA2CC4] > 0 )
  {
    v76 = (char *)&MEMORY[0x16AB13DB0] + 4;
    v77 = 0;
    v78 = &MEMORY[0x16ABD3DB0];
    do
    {
      v79 = (int)MEMORY[0x1699AACC0][v77 + 778242];
      v76 += 24;
      v80 = (int)MEMORY[0x1699AACC0][v77 + 778243];
      ++v75;
      v81 = (int)MEMORY[0x1699AACC0][v77 + 778244];
      ++v78;
      MEMORY[0x16A91BDAC][v77] = v79;
      MEMORY[0x16A91BDB0][v77] = v80;
      MEMORY[0x16A91BDB4][v77] = v81;
      v77 += 3;
      *(v78 - 1) = -2;
      *((_DWORD *)v76 - 7) = MEMORY[0x1699AACC0][69 * v79 + 68];
      *((_DWORD *)v76 - 6) = MEMORY[0x1699AACC0][69 * v79 + 69];
      *((_DWORD *)v76 - 5) = MEMORY[0x1699AACC0][69 * v80 + 68];
      *((_DWORD *)v76 - 4) = MEMORY[0x1699AACC0][69 * v80 + 69];
      *((_DWORD *)v76 - 3) = MEMORY[0x1699AACC0][69 * v81 + 68];
      *((_DWORD *)v76 - 2) = MEMORY[0x1699AACC0][69 * v81 + 69];
    }
    while ( v75 < v74 );
  }
  v82 = v2;
  v136 = v2;
  sub_1401449C0((unsigned int)MEMORY[0x183EBC144][v2], 0);
  v83 = 786828LL * v2;
  v84 = (_DWORD *)((char *)&MEMORY[0x166A649D4] + v83);
  v85 = &MEMORY[0x169CBACEC];
  v86 = (unsigned __int64)MEMORY[0x169CBB16C];
  do
  {
    *(v84 - 2) = *(v85 - 2);
    *(v84 - 1) = *(v85 - 1);
    *v84 = *v85;
    v84[1] = *(v85 - 8);
    v84[2] = *(v85 - 7);
    v84[3] = *(v85 - 6);
    v84[4] = v85[16];
    v84[5] = v85[17];
    v84[6] = v85[18];
    v84[7] = v85[10];
    v84[8] = v85[11];
    v84[9] = v85[12];
    v84[10] = v85[34];
    v84[11] = v85[35];
    v84[12] = v85[36];
    v84[13] = v85[28];
    v84[14] = v85[29];
    v84[15] = v85[30];
    v84[16] = v85[52];
    v84[17] = v85[53];
    v84[18] = v85[54];
    v84[19] = v85[46];
    v84[20] = v85[47];
    v84[21] = v85[48];
    v84[22] = v85[70];
    v84[23] = v85[71];
    v84[24] = v85[72];
    v84[25] = v85[64];
    v84[26] = v85[65];
    v84[27] = v85[66];
    v84[28] = v85[88];
    v84[29] = v85[89];
    v84[30] = v85[90];
    v84[31] = v85[82];
    v84[32] = v85[83];
    v84[33] = v85[84];
    v84[34] = v85[106];
    v84[35] = v85[107];
    v84[36] = v85[108];
    v84[37] = v85[100];
    v84[38] = v85[101];
    v84 += 48;
    *(v84 - 9) = v85[102];
    *(v84 - 8) = v85[124];
    *(v84 - 7) = v85[125];
    *(v84 - 6) = v85[126];
    *(v84 - 5) = v85[118];
    *(v84 - 4) = v85[119];
    v87 = v85[120];
    v85 += 144;
    *(v84 - 3) = v87;
  }
  while ( (__int64)v85 < (__int64)MEMORY[0x169CBB16C] );
  v88 = 0;
  *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83) = 16;
  v89 = 0;
  *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) = 0;
  if ( MEMORY[0x169CA2CC4] > 0 )
  {
    v90 = (int *)&MEMORY[0x169CA2CC8];
    v91 = 196707LL * v2;
    do
    {
      v92 = 104LL * v90[2];
      v93 = 104LL * v90[1];
      v94 = (float *)((char *)&MEMORY[0x169BD2CC4] + 104 * *v90);
      v95 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v92 + 8) - v94[2];
      v96 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v93 + 8) - v94[2];
      v97 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v92) - *v94;
      v98 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v93 + 4) - v94[1];
      v99 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v92 + 4) - v94[1];
      v100 = *(float *)((char *)&MEMORY[0x169BD2CC4] + v93) - *v94;
      v101 = (float)(v99 * v96) - (float)(v95 * v98);
      v102 = (float)(v95 * v100) - (float)(v97 * v96);
      v103 = (float)(v97 * v98) - (float)(v99 * v100);
      v104 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v103 * v103));
      if ( v104 == 0.0 )
      {
        v105 = 0.0;
        v106 = 0.0;
        v107 = 0.0;
      }
      else
      {
        v105 = v101 * (float)(1.0 / v104);
        v106 = v102 * (float)(1.0 / v104);
        v107 = v103 * (float)(1.0 / v104);
      }
      v108 = 3;
      do
      {
        v109 = *v90;
        if ( (unsigned int)(v2 - 22) <= 1 )
          *(float *)&MEMORY[0x1699AACC0][26 * *v90 + 565251] = *(float *)&MEMORY[0x1699AACC0][26 * *v90 + 565251]
                                                             - 0.015625;
        v110 = 26 * v109;
        v111 = v91 + v88 * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
        MEMORY[0x1669A49C8][v111] = MEMORY[0x1699AACC0][26 * v109 + 565249];
        MEMORY[0x1669A49CC][v111] = MEMORY[0x1699AACC0][26 * v109 + 565250];
        MEMORY[0x1669A49D0][v111] = MEMORY[0x1699AACC0][26 * v109 + 565251];
        v112 = v91 + *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
        MEMORY[0x1669A49D4][v112] = MEMORY[0x1699AACC0][26 * v109 + 565273];
        MEMORY[0x1669A49D8][v112] = MEMORY[0x1699AACC0][26 * v109 + 565274];
        v113 = v91 + *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
        *(float *)&MEMORY[0x1669A49DC][v113] = v105;
        *(float *)&MEMORY[0x1669A49E0][v113] = v106;
        *(float *)&MEMORY[0x1669A49E4][v113] = v107;
        v114 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
        v115 = *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
        v116 = v91 + v115 * v114;
        v117 = *(float *)&MEMORY[0x1669A49D8][v116];
        if ( v117 >= 0.9375 && v117 < 1.0 )
        {
          MEMORY[0x1669A49D4][v116] = 1099169792;
          v115 = *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
          v114 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
        }
        v118 = v91 + v115 * v114;
        v119 = *(float *)&MEMORY[0x1669A49D8][v118];
        if ( v119 >= 0.625 && v119 < 0.6875 )
        {
          MEMORY[0x1669A49D4][v118] = 1099694080;
          v115 = *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
          v114 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
        }
        v120 = v115;
        v121 = v114;
        v122 = v115 * v114;
        v123 = *(float *)&MEMORY[0x1669A49D8][v122 + v91];
        if ( v123 >= 0.375 && v123 < 0.4375 && *(float *)&MEMORY[0x1669A49D4][v122 + v91] < 0.3125 )
        {
          MEMORY[0x1669A49D4][v122 + v91] = 1099694080;
          v120 = *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83);
          v121 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
        }
        v124 = v91 + v120 * v121;
        v125 = *(float *)&MEMORY[0x1669A49D8][v124];
        if ( v125 >= 0.5 && v125 < 0.5625 )
        {
          MEMORY[0x1669A49D4][v124] = 1100218368;
          v121 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
        }
        v126 = MEMORY[0x1699AACC0][v110 + 565252];
        v127 = v91 + 4 * v121;
        v86 = 0;
        *((_DWORD *)MEMORY[0x166A449C8] + v127) = 1065353216;
        *((_DWORD *)&MEMORY[0x166A449C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 1) = 0;
        *((_DWORD *)&MEMORY[0x166A449C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 2) = 0;
        *((_DWORD *)&MEMORY[0x166A449C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 3) = 0;
        *((_DWORD *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91) = 0;
        *((_DWORD *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 1) = 0;
        *((_DWORD *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 2) = 0;
        *((_DWORD *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + 3) = 0;
        if ( v126 > 0 )
        {
          v128 = (char *)&MEMORY[0x169BD2D14] + v110 * 4;
          do
          {
            v128 += 4;
            *((_DWORD *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)] + v91 + (int)v86) = *((_DWORD *)v128 - 17);
            v129 = v86 + 4 * *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83);
            v86 = (unsigned int)(v86 + 1);
            *((_DWORD *)MEMORY[0x166A449C8] + v91 + v129) = *((_DWORD *)v128 - 1);
          }
          while ( (int)v86 < v126 );
        }
        ++v90;
        *(__int128 *)((char *)&MEMORY[0x1669A49E8]
                    + 4 * v91
                    + 4
                    * *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)
                    * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83)) = *(__int128 *)((char *)&MEMORY[0x166A249C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)]
                                                                                     + 4 * v91);
        *(__int128 *)((char *)&MEMORY[0x1669A49F8]
                    + 4 * v91
                    + 4
                    * *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)
                    * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83)) = *(__int128 *)((char *)&MEMORY[0x166A449C8][*(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83)]
                                                                                     + 4 * v91);
        v88 = *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) + 1;
        *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) = v88;
        --v108;
      }
      while ( v108 );
      ++v89;
    }
    while ( v89 < MEMORY[0x169CA2CC4] );
    v82 = v136;
  }
  unk_140404170(34962, (unsigned int)MEMORY[0x183E9B0C0][2 * MEMORY[0x183E987C4][v82]], v86);
  unk_140404190(
    34962,
    4 * *(_DWORD *)((char *)&MEMORY[0x1669A49C0] + v83) * *(_DWORD *)((char *)&MEMORY[0x1669A49C4] + v83),
    &MEMORY[0x1669A49C8][v83 / 4],
    35044);
  unk_140404170(34962, 0, v130);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v132 ^ v144);
}

