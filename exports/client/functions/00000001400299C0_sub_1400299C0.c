/* Address: 0x1400299c0 | Name: sub_1400299C0 | Size: 3262 bytes */
__int64 sub_1400299C0()
{
  unsigned int *v0; // rdx
  __int64 v1; // r12
  float *v2; // rsi
  __int64 v3; // r13
  unsigned int *v4; // rbp
  __int64 v5; // r9
  int v6; // r15d
  unsigned int *v7; // rbx
  unsigned int *v8; // r8
  unsigned int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float *v12; // rsi
  int *v13; // rdi
  int *v14; // rbx
  __int64 v15; // r14
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  double v19; // xmm2_8
  double v20; // xmm1_8
  double v21; // xmm4_8
  double v22; // xmm3_8
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  float *v28; // rdi
  unsigned int *v29; // rbp
  __int64 v30; // r12
  unsigned int *v31; // rsi
  unsigned int *v32; // rbx
  unsigned int *v33; // r14
  unsigned int v34; // eax
  float v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  __int64 v62; // r12
  _DWORD *v63; // rbx
  char *v64; // r14
  unsigned int *v65; // rsi
  float *v66; // rdi
  unsigned int *v67; // rbp
  int v68; // eax
  float v69; // xmm1_4
  float v70; // xmm0_4
  signed int v71; // r9d
  _DWORD *v72; // r10
  int *v73; // rdx
  unsigned int *v74; // r11
  float *v75; // r8
  float v76; // xmm1_4
  float v77; // xmm0_4
  int v78; // eax
  float v79; // xmm0_4
  int v80; // eax
  float v81; // xmm1_4
  float v82; // xmm0_4
  int v83; // eax
  float v84; // xmm0_4
  int v85; // eax
  float v86; // xmm1_4
  float v87; // xmm0_4
  int v88; // eax
  float v89; // xmm0_4
  int v90; // eax
  float v91; // xmm1_4
  float v92; // xmm0_4
  int v93; // eax
  float v94; // xmm0_4
  int v95; // eax
  float v96; // xmm1_4
  float v97; // xmm0_4
  int v98; // eax
  float v99; // xmm0_4
  int v100; // eax
  float v101; // xmm1_4
  float v102; // xmm0_4
  int v103; // eax
  float v104; // xmm0_4
  int v105; // eax
  float v106; // xmm1_4
  float v107; // xmm0_4
  int v108; // eax
  float v109; // xmm0_4
  int v110; // eax
  float v111; // xmm1_4
  float v112; // xmm0_4
  int v113; // eax
  float v114; // xmm0_4
  int v115; // eax
  __int64 v117; // [rsp+0h] [rbp-128h] BYREF
  unsigned int *v118; // [rsp+20h] [rbp-108h]
  unsigned int *v119; // [rsp+28h] [rbp-100h]
  unsigned int *v120; // [rsp+30h] [rbp-F8h]
  unsigned int *v121; // [rsp+38h] [rbp-F0h]
  unsigned int *v122; // [rsp+40h] [rbp-E8h]
  __int64 v123; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v124; // [rsp+50h] [rbp-D8h]
  __m128 v125; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v126; // [rsp+68h] [rbp-C0h]

  v0 = &dword_140404A6C[282485789];
  v1 = dword_140301DF4;
  v2 = (float *)&dword_140404A6C[280651440];
  v3 = dword_140301DF0;
  v4 = &dword_140404A6C[280651493];
  v5 = 256;
  v6 = 2;
  v121 = &dword_140404A6C[282485789];
  v124 = 318464LL * LOBYTE(dword_140404A6C[456202728]);
  v7 = &dword_140404A6C[v124 / 4 + 137297855];
  v120 = &dword_140404A6C[280651440];
  v119 = &dword_140404A6C[280651493];
  v8 = &dword_140404A6C[v124 / 4 + 137297858];
  v122 = v7;
  v118 = v8;
  v123 = 256;
  do
  {
    v9 = *((_DWORD *)v2 - 137);
    *(v7 - 2) = v9;
    if ( v9 )
    {
      v10 = (float)(v2[2] * 4096.0) + 16777216.0;
      v11 = v2[1];
      *v7 = (int)(float)((float)(*v2 * 4096.0) + 16777216.0);
      v7[1] = (int)(float)(v11 * 4096.0);
      v7[2] = (int)v10;
      sub_140114D40(v8, v4 - 41);
      v12 = v2 + 51;
      v13 = (int *)(v7 + 8);
      v14 = (int *)(v7 + 55);
      v15 = 16;
      do
      {
        v16 = *v12;
        *(v13 - 1) = (int)(*(v12 - 1) * 2607.594587617441 + 8192.0) & 0x3FFF;
        v17 = (int)(v16 * 2607.594587617441 + 8192.0);
        v18 = v12[1];
        *v13 = v17 & 0x3FFF;
        v13[1] = (int)(v18 * 2607.594587617441 + 8192.0) & 0x3FFF;
        sub_14010E370(&v125, v4);
        v19 = fabs(v125.m128_f32[1]);
        v20 = fabs(v125.m128_f32[0]);
        v21 = v20;
        if ( v20 < v19 )
          v20 = v19;
        v22 = fabs(v125.m128_f32[2]);
        v23 = v19 > v21;
        v24 = v19 > v21;
        if ( v20 < v22 )
        {
          v23 = 2;
          v24 = 2;
          v20 = v22;
        }
        if ( v20 < fabs(v125.m128_f32[3]) )
        {
          v23 = 3;
          v24 = 3;
        }
        if ( v125.m128_f32[v24] < 0.0 )
          v125 = _mm_xor_ps(v125, (__m128)xmmword_140279870);
        v25 = dword_140301DE8;
        v26 = 1;
        *v14 = v23;
        if ( (_DWORD)v25 != v23 )
        {
          v26 = 2;
          v14[1] = (int)(v125.m128_f32[v25] * 1447.447581088863);
        }
        if ( dword_140301DEC != v23 )
          v14[v26++] = (int)(v125.m128_f32[dword_140301DEC] * 1447.447581088863);
        if ( (_DWORD)v3 != v23 )
          v14[v26++] = (int)(v125.m128_f32[v3] * 1447.447581088863);
        if ( (_DWORD)v1 != v23 )
          v14[v26] = (int)(v125.m128_f32[v1] * 1447.447581088863);
        v4 += 78;
        v14 += 4;
        v12 += 78;
        v13 += 3;
        --v15;
      }
      while ( v15 );
      v0 = v121;
      v7 = v122;
      v2 = (float *)v120;
      v4 = v119;
      v8 = v118;
      v5 = v123;
      *(v122 - 1) = *v121;
    }
    v8 += 121;
    v4 += 7166;
    v2 += 7166;
    v118 = v8;
    ++v0;
    v119 = v4;
    v7 += 121;
    v120 = (unsigned int *)v2;
    --v5;
    v121 = v0;
    v123 = v5;
    v122 = v7;
  }
  while ( v5 );
  v27 = v124;
  v28 = (float *)&dword_140404A6C[129716720];
  v29 = &dword_140404A6C[129716726];
  v30 = 512;
  v31 = &dword_140404A6C[v124 / 4 + 137328837];
  v32 = &dword_140404A6C[v124 / 4 + 137328839];
  v33 = &dword_140404A6C[v124 / 4 + 137328833];
  do
  {
    v34 = *((_DWORD *)v28 - 11);
    *(v31 - 8) = v34;
    if ( v34 )
    {
      v35 = (float)(v28[2] * 4096.0) + 16777216.0;
      v36 = v28[1];
      *(v31 - 7) = (int)(float)((float)(*v28 * 4096.0) + 16777216.0);
      *(v31 - 6) = (int)(float)(v36 * 4096.0);
      *(v31 - 5) = (int)v35;
      sub_140114D40(v33, v29);
      v37 = (int)(v28[3652] * 81.16902097686128);
      *v31 = v37;
      if ( v37 >= -255 )
      {
        if ( v37 > 255 )
          *v31 = 255;
      }
      else
      {
        *v31 = -255;
      }
      v38 = (int)(float)(v28[3682] * 255.0);
      *(v32 - 1) = v38;
      if ( v38 >= 0 )
      {
        v39 = v38;
        if ( v38 > 255 )
          v39 = 255;
        *(v32 - 1) = v39;
      }
      else
      {
        *(v32 - 1) = 0;
      }
      v40 = (int)(float)(v28[3670] * 255.0);
      *v32 = v40;
      if ( v40 >= -255 )
      {
        v41 = v40;
        if ( v40 > 255 )
          v41 = 255;
        *v32 = v41;
      }
      else
      {
        *v32 = -255;
      }
      v42 = (int)(float)(v28[3687] * 255.0);
      v32[1] = v42;
      if ( v42 >= 0 )
      {
        v43 = v42;
        if ( v42 > 255 )
          v43 = 255;
        v32[1] = v43;
      }
      else
      {
        v32[1] = 0;
      }
      v44 = (int)(float)(v28[3725] * 255.0);
      v32[2] = v44;
      if ( v44 >= 0 )
      {
        v45 = v44;
        if ( v44 > 255 )
          v45 = 255;
        v32[2] = v45;
      }
      else
      {
        v32[2] = 0;
      }
      v46 = (int)(float)(v28[3713] * 255.0);
      v32[3] = v46;
      if ( v46 >= -255 )
      {
        v47 = v46;
        if ( v46 > 255 )
          v47 = 255;
        v32[3] = v47;
      }
      else
      {
        v32[3] = -255;
      }
      v48 = (int)(float)(v28[3730] * 255.0);
      v32[4] = v48;
      if ( v48 >= 0 )
      {
        v49 = v48;
        if ( v48 > 255 )
          v49 = 255;
        v32[4] = v49;
      }
      else
      {
        v32[4] = 0;
      }
      v50 = (int)(float)(v28[3768] * 255.0);
      v32[5] = v50;
      if ( v50 >= 0 )
      {
        v51 = v50;
        if ( v50 > 255 )
          v51 = 255;
        v32[5] = v51;
      }
      else
      {
        v32[5] = 0;
      }
      v52 = (int)(float)(v28[3756] * 255.0);
      v32[6] = v52;
      if ( v52 >= -255 )
      {
        v53 = v52;
        if ( v52 > 255 )
          v53 = 255;
        v32[6] = v53;
      }
      else
      {
        v32[6] = -255;
      }
      v54 = (int)(float)(v28[3773] * 255.0);
      v32[7] = v54;
      if ( v54 >= 0 )
      {
        v55 = v54;
        if ( v54 > 255 )
          v55 = 255;
        v32[7] = v55;
      }
      else
      {
        v32[7] = 0;
      }
      v56 = (int)(float)(v28[3811] * 255.0);
      v32[8] = v56;
      if ( v56 >= 0 )
      {
        v57 = v56;
        if ( v56 > 255 )
          v57 = 255;
        v32[8] = v57;
      }
      else
      {
        v32[8] = 0;
      }
      v58 = (int)(float)(v28[3799] * 255.0);
      v32[9] = v58;
      if ( v58 >= -255 )
      {
        v59 = v58;
        if ( v58 > 255 )
          v59 = 255;
        v32[9] = v59;
      }
      else
      {
        v32[9] = -255;
      }
      v60 = (int)(float)(v28[3816] * 255.0);
      v32[10] = v60;
      if ( v60 >= 0 )
      {
        v61 = v60;
        if ( v60 > 255 )
          v61 = 255;
        v32[10] = v61;
      }
      else
      {
        v32[10] = 0;
      }
    }
    v29 += 5210;
    v33 += 57;
    v31 += 57;
    v28 += 5210;
    v32 += 57;
    --v30;
  }
  while ( v30 );
  v62 = 1024;
  v63 = (unsigned int *)((char *)&dword_140404A6C[137358015] + v27);
  v64 = (char *)&dword_140404A6C[137358018] + v27;
  v65 = &dword_140404A6C[280648157];
  v66 = (float *)&dword_140404A6C[278845916];
  v67 = &dword_140404A6C[278845934];
  do
  {
    v68 = *((_DWORD *)v66 - 23);
    *(v63 - 2) = v68;
    if ( v68 )
    {
      v69 = (float)(v66[2] * 4096.0) + 16777216.0;
      v70 = v66[1];
      *v63 = (int)(float)((float)(*v66 * 4096.0) + 16777216.0);
      v63[1] = (int)(float)(v70 * 4096.0);
      v63[2] = (int)v69;
      sub_140114D40(v64, v67);
      *(v63 - 1) = *v65;
    }
    v67 += 1760;
    v64 += 36;
    v66 += 1760;
    ++v65;
    v63 += 9;
    --v62;
  }
  while ( v62 );
  v71 = dword_140404A6C[132792829];
  v72 = (unsigned int *)((char *)&dword_140404A6C[137367239] + v27);
  v73 = (int *)((char *)&dword_140404A6C[137367232] + v27);
  v74 = &dword_140404A6C[132792838];
  v75 = (float *)&dword_140404A6C[132400642];
  do
  {
    *(v72 - 10) = v6 - 2 < v71;
    if ( v6 - 2 < v71 )
    {
      v76 = (float)(v75[1] * 4096.0) + 16777216.0;
      v77 = *v75 * 4096.0;
      *(v73 - 1) = (int)(float)((float)(*(v75 - 1) * 4096.0) + 16777216.0);
      v78 = (int)v77;
      v79 = v75[5];
      *v73 = v78;
      v73[1] = (int)v76;
      v80 = (int)(v79 * 81.16902097686128);
      if ( v80 < -255 )
      {
        v80 = -255;
      }
      else if ( v80 > 255 )
      {
        v80 = 255;
      }
      v73[6] = v80;
    }
    *(v73 - 2) = *(v74 - 1);
    *v72 = v6 - 1 < v71;
    if ( v6 - 1 < v71 )
    {
      v81 = (float)(v75[384] * 4096.0) + 16777216.0;
      v82 = v75[383] * 4096.0;
      v73[9] = (int)(float)((float)(v75[382] * 4096.0) + 16777216.0);
      v83 = (int)v82;
      v84 = v75[388];
      v73[10] = v83;
      v73[11] = (int)v81;
      v85 = (int)(v84 * 81.16902097686128);
      if ( v85 < -255 )
      {
        v85 = -255;
      }
      else if ( v85 > 255 )
      {
        v85 = 255;
      }
      v73[16] = v85;
    }
    v73[8] = *v74;
    v72[10] = v6 < v71;
    if ( v6 < v71 )
    {
      v86 = (float)(v75[767] * 4096.0) + 16777216.0;
      v87 = v75[766] * 4096.0;
      v73[19] = (int)(float)((float)(v75[765] * 4096.0) + 16777216.0);
      v88 = (int)v87;
      v89 = v75[771];
      v73[20] = v88;
      v73[21] = (int)v86;
      v90 = (int)(v89 * 81.16902097686128);
      if ( v90 < -255 )
      {
        v90 = -255;
      }
      else if ( v90 > 255 )
      {
        v90 = 255;
      }
      v73[26] = v90;
    }
    v73[18] = v74[1];
    v72[20] = v6 + 1 < v71;
    if ( v6 + 1 < v71 )
    {
      v91 = (float)(v75[1150] * 4096.0) + 16777216.0;
      v92 = v75[1149] * 4096.0;
      v73[29] = (int)(float)((float)(v75[1148] * 4096.0) + 16777216.0);
      v93 = (int)v92;
      v94 = v75[1154];
      v73[30] = v93;
      v73[31] = (int)v91;
      v95 = (int)(v94 * 81.16902097686128);
      if ( v95 < -255 )
      {
        v95 = -255;
      }
      else if ( v95 > 255 )
      {
        v95 = 255;
      }
      v73[36] = v95;
    }
    v73[28] = v74[2];
    v72[30] = v6 + 2 < v71;
    if ( v6 + 2 < v71 )
    {
      v96 = (float)(v75[1533] * 4096.0) + 16777216.0;
      v97 = v75[1532] * 4096.0;
      v73[39] = (int)(float)((float)(v75[1531] * 4096.0) + 16777216.0);
      v98 = (int)v97;
      v99 = v75[1537];
      v73[40] = v98;
      v73[41] = (int)v96;
      v100 = (int)(v99 * 81.16902097686128);
      if ( v100 < -255 )
      {
        v100 = -255;
      }
      else if ( v100 > 255 )
      {
        v100 = 255;
      }
      v73[46] = v100;
    }
    v73[38] = v74[3];
    v72[40] = v6 + 3 < v71;
    if ( v6 + 3 < v71 )
    {
      v101 = (float)(v75[1916] * 4096.0) + 16777216.0;
      v102 = v75[1915] * 4096.0;
      v73[49] = (int)(float)((float)(v75[1914] * 4096.0) + 16777216.0);
      v103 = (int)v102;
      v104 = v75[1920];
      v73[50] = v103;
      v73[51] = (int)v101;
      v105 = (int)(v104 * 81.16902097686128);
      if ( v105 < -255 )
      {
        v105 = -255;
      }
      else if ( v105 > 255 )
      {
        v105 = 255;
      }
      v73[56] = v105;
    }
    v73[48] = v74[4];
    v72[50] = v6 + 4 < v71;
    if ( v6 + 4 < v71 )
    {
      v106 = (float)(v75[2299] * 4096.0) + 16777216.0;
      v107 = v75[2298] * 4096.0;
      v73[59] = (int)(float)((float)(v75[2297] * 4096.0) + 16777216.0);
      v108 = (int)v107;
      v109 = v75[2303];
      v73[60] = v108;
      v73[61] = (int)v106;
      v110 = (int)(v109 * 81.16902097686128);
      if ( v110 < -255 )
      {
        v110 = -255;
      }
      else if ( v110 > 255 )
      {
        v110 = 255;
      }
      v73[66] = v110;
    }
    v73[58] = v74[5];
    v72[60] = v6 + 5 < v71;
    if ( v6 + 5 < v71 )
    {
      v111 = (float)(v75[2682] * 4096.0) + 16777216.0;
      v112 = v75[2681] * 4096.0;
      v73[69] = (int)(float)((float)(v75[2680] * 4096.0) + 16777216.0);
      v113 = (int)v112;
      v114 = v75[2686];
      v73[70] = v113;
      v73[71] = (int)v111;
      v115 = (int)(v114 * 81.16902097686128);
      if ( v115 < -255 )
      {
        v115 = -255;
      }
      else if ( v115 > 255 )
      {
        v115 = 255;
      }
      v73[76] = v115;
    }
    v75 += 3064;
    v73[68] = v74[6];
    v74 += 8;
    v73 += 80;
    v72 += 80;
    v6 += 8;
  }
  while ( (__int64)v75 < (__int64)&dword_140404A6C[132792834] );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v117 ^ v126);
}

