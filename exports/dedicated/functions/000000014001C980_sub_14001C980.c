/* Address: 0x14001c980 | Name: sub_14001C980 | Size: 3262 bytes */
__int64 sub_14001C980()
{
  int *v0; // rdx
  __int64 v1; // r12
  float *v2; // rsi
  __int64 v3; // r13
  char *v4; // rbp
  __int64 v5; // r9
  int v6; // r15d
  _DWORD *v7; // rbx
  char *v8; // r8
  int v9; // eax
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
  float *v27; // rdi
  int *v28; // rbp
  __int64 v29; // r12
  int *v30; // rsi
  int *v31; // rbx
  char *v32; // r14
  int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm0_4
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  __int64 v61; // r12
  _DWORD *v62; // rbx
  char *v63; // r14
  int *v64; // rsi
  float *v65; // rdi
  int *v66; // rbp
  int v67; // eax
  float v68; // xmm1_4
  float v69; // xmm0_4
  int v70; // r9d
  _DWORD *v71; // r10
  int *v72; // rdx
  int *v73; // r11
  float *v74; // r8
  float v75; // xmm1_4
  float v76; // xmm0_4
  int v77; // eax
  float v78; // xmm0_4
  int v79; // eax
  float v80; // xmm1_4
  float v81; // xmm0_4
  int v82; // eax
  float v83; // xmm0_4
  int v84; // eax
  float v85; // xmm1_4
  float v86; // xmm0_4
  int v87; // eax
  float v88; // xmm0_4
  int v89; // eax
  float v90; // xmm1_4
  float v91; // xmm0_4
  int v92; // eax
  float v93; // xmm0_4
  int v94; // eax
  float v95; // xmm1_4
  float v96; // xmm0_4
  int v97; // eax
  float v98; // xmm0_4
  int v99; // eax
  float v100; // xmm1_4
  float v101; // xmm0_4
  int v102; // eax
  float v103; // xmm0_4
  int v104; // eax
  float v105; // xmm1_4
  float v106; // xmm0_4
  int v107; // eax
  float v108; // xmm0_4
  int v109; // eax
  float v110; // xmm1_4
  float v111; // xmm0_4
  int v112; // eax
  float v113; // xmm0_4
  int v114; // eax
  __int64 result; // rax
  char *v116; // [rsp+20h] [rbp-108h]
  char *v117; // [rsp+28h] [rbp-100h]
  int *v118; // [rsp+30h] [rbp-F8h]
  int *v119; // [rsp+38h] [rbp-F0h]
  char *v120; // [rsp+40h] [rbp-E8h]
  __int64 v121; // [rsp+48h] [rbp-E0h]
  __int64 v122; // [rsp+50h] [rbp-D8h]
  __m128 v123; // [rsp+58h] [rbp-D0h] BYREF

  v0 = &dword_1910411A0;
  v1 = dword_14014815C;
  v2 = (float *)dword_190941BEC;
  v3 = dword_140148158;
  v4 = (char *)&unk_190941CC0;
  v5 = 256;
  v6 = 2;
  v119 = &dword_1910411A0;
  v122 = 318464LL * (unsigned __int8)dword_163D75FAC;
  v7 = (_DWORD *)((char *)&unk_16F0DFBC8 + v122);
  v118 = dword_190941BEC;
  v117 = (char *)&unk_190941CC0;
  v8 = (char *)&unk_16F0DFBD4 + v122;
  v120 = (char *)&unk_16F0DFBC8 + v122;
  v116 = (char *)&unk_16F0DFBD4 + v122;
  v121 = 256;
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
      sub_1400AED60(v8, v4 - 164);
      v12 = v2 + 51;
      v13 = v7 + 8;
      v14 = v7 + 55;
      v15 = 16;
      do
      {
        v16 = *v12;
        *(v13 - 1) = (int)(*(v12 - 1) * 2607.594587617441 + 8192.0) & 0x3FFF;
        v17 = (int)(v16 * 2607.594587617441 + 8192.0);
        v18 = v12[1];
        *v13 = v17 & 0x3FFF;
        v13[1] = (int)(v18 * 2607.594587617441 + 8192.0) & 0x3FFF;
        sub_1400A8390(&v123, v4);
        v19 = fabs(v123.m128_f32[1]);
        v20 = fabs(v123.m128_f32[0]);
        v21 = v20;
        if ( v20 < v19 )
          v20 = v19;
        v22 = fabs(v123.m128_f32[2]);
        v23 = v19 > v21;
        v24 = v19 > v21;
        if ( v20 < v22 )
        {
          v23 = 2;
          v24 = 2;
          v20 = v22;
        }
        if ( v20 < fabs(v123.m128_f32[3]) )
        {
          v23 = 3;
          v24 = 3;
        }
        if ( v123.m128_f32[v24] < 0.0 )
          v123 = _mm_xor_ps(v123, (__m128)xmmword_1400F7F50);
        v25 = dword_140148150;
        v26 = 1;
        *v14 = v23;
        if ( (_DWORD)v25 != v23 )
        {
          v26 = 2;
          v14[1] = (int)(v123.m128_f32[v25] * 1447.447581088863);
        }
        if ( dword_140148154 != v23 )
          v14[v26++] = (int)(v123.m128_f32[dword_140148154] * 1447.447581088863);
        if ( (_DWORD)v3 != v23 )
          v14[v26++] = (int)(v123.m128_f32[v3] * 1447.447581088863);
        if ( (_DWORD)v1 != v23 )
          v14[v26] = (int)(v123.m128_f32[v1] * 1447.447581088863);
        v4 += 312;
        v14 += 4;
        v12 += 78;
        v13 += 3;
        --v15;
      }
      while ( v15 );
      v0 = v119;
      v7 = v120;
      v2 = (float *)v118;
      v4 = v117;
      v8 = v116;
      v5 = v121;
      *((_DWORD *)v120 - 1) = *v119;
    }
    v8 += 484;
    v4 += 28664;
    v2 += 7166;
    v116 = v8;
    ++v0;
    v117 = v4;
    v7 += 121;
    v118 = (int *)v2;
    --v5;
    v119 = v0;
    v121 = v5;
    v120 = (char *)v7;
  }
  while ( v5 );
  v27 = (float *)dword_16E6A3C8C;
  v28 = dword_16E6A3CA4;
  v29 = 512;
  v30 = (int *)((char *)&unk_16F0DFBC0 + v122 + 123936);
  v31 = (int *)((char *)&unk_16F0DFBC0 + v122 + 123944);
  v32 = (char *)&unk_16F0DFBC0 + v122 + 123920;
  do
  {
    v33 = *((_DWORD *)v27 - 11);
    *(v30 - 8) = v33;
    if ( v33 )
    {
      v34 = (float)(v27[2] * 4096.0) + 16777216.0;
      v35 = v27[1];
      *(v30 - 7) = (int)(float)((float)(*v27 * 4096.0) + 16777216.0);
      *(v30 - 6) = (int)(float)(v35 * 4096.0);
      *(v30 - 5) = (int)v34;
      sub_1400AED60(v32, v28);
      v36 = (int)(v27[3652] * 81.16902097686128);
      *v30 = v36;
      if ( v36 >= -255 )
      {
        if ( v36 > 255 )
          *v30 = 255;
      }
      else
      {
        *v30 = -255;
      }
      v37 = (int)(float)(v27[3682] * 255.0);
      *(v31 - 1) = v37;
      if ( v37 >= 0 )
      {
        v38 = v37;
        if ( v37 > 255 )
          v38 = 255;
        *(v31 - 1) = v38;
      }
      else
      {
        *(v31 - 1) = 0;
      }
      v39 = (int)(float)(v27[3670] * 255.0);
      *v31 = v39;
      if ( v39 >= -255 )
      {
        v40 = v39;
        if ( v39 > 255 )
          v40 = 255;
        *v31 = v40;
      }
      else
      {
        *v31 = -255;
      }
      v41 = (int)(float)(v27[3687] * 255.0);
      v31[1] = v41;
      if ( v41 >= 0 )
      {
        v42 = v41;
        if ( v41 > 255 )
          v42 = 255;
        v31[1] = v42;
      }
      else
      {
        v31[1] = 0;
      }
      v43 = (int)(float)(v27[3725] * 255.0);
      v31[2] = v43;
      if ( v43 >= 0 )
      {
        v44 = v43;
        if ( v43 > 255 )
          v44 = 255;
        v31[2] = v44;
      }
      else
      {
        v31[2] = 0;
      }
      v45 = (int)(float)(v27[3713] * 255.0);
      v31[3] = v45;
      if ( v45 >= -255 )
      {
        v46 = v45;
        if ( v45 > 255 )
          v46 = 255;
        v31[3] = v46;
      }
      else
      {
        v31[3] = -255;
      }
      v47 = (int)(float)(v27[3730] * 255.0);
      v31[4] = v47;
      if ( v47 >= 0 )
      {
        v48 = v47;
        if ( v47 > 255 )
          v48 = 255;
        v31[4] = v48;
      }
      else
      {
        v31[4] = 0;
      }
      v49 = (int)(float)(v27[3768] * 255.0);
      v31[5] = v49;
      if ( v49 >= 0 )
      {
        v50 = v49;
        if ( v49 > 255 )
          v50 = 255;
        v31[5] = v50;
      }
      else
      {
        v31[5] = 0;
      }
      v51 = (int)(float)(v27[3756] * 255.0);
      v31[6] = v51;
      if ( v51 >= -255 )
      {
        v52 = v51;
        if ( v51 > 255 )
          v52 = 255;
        v31[6] = v52;
      }
      else
      {
        v31[6] = -255;
      }
      v53 = (int)(float)(v27[3773] * 255.0);
      v31[7] = v53;
      if ( v53 >= 0 )
      {
        v54 = v53;
        if ( v53 > 255 )
          v54 = 255;
        v31[7] = v54;
      }
      else
      {
        v31[7] = 0;
      }
      v55 = (int)(float)(v27[3811] * 255.0);
      v31[8] = v55;
      if ( v55 >= 0 )
      {
        v56 = v55;
        if ( v55 > 255 )
          v56 = 255;
        v31[8] = v56;
      }
      else
      {
        v31[8] = 0;
      }
      v57 = (int)(float)(v27[3799] * 255.0);
      v31[9] = v57;
      if ( v57 >= -255 )
      {
        v58 = v57;
        if ( v57 > 255 )
          v58 = 255;
        v31[9] = v58;
      }
      else
      {
        v31[9] = -255;
      }
      v59 = (int)(float)(v27[3816] * 255.0);
      v31[10] = v59;
      if ( v59 >= 0 )
      {
        v60 = v59;
        if ( v59 > 255 )
          v60 = 255;
        v31[10] = v60;
      }
      else
      {
        v31[10] = 0;
      }
    }
    v28 += 5210;
    v32 += 228;
    v30 += 57;
    v27 += 5210;
    v31 += 57;
    --v29;
  }
  while ( v29 );
  v61 = 1024;
  v62 = (_DWORD *)((char *)&unk_16F0DFBC0 + v122 + 240648);
  v63 = (char *)&unk_16F0DFBC0 + v122 + 240660;
  v64 = dword_19093F0C0;
  v65 = (float *)&dword_19025F11C;
  v66 = &dword_19025F164;
  do
  {
    v67 = *((_DWORD *)v65 - 23);
    *(v62 - 2) = v67;
    if ( v67 )
    {
      v68 = (float)(v65[2] * 4096.0) + 16777216.0;
      v69 = v65[1];
      *v62 = (int)(float)((float)(*v65 * 4096.0) + 16777216.0);
      v62[1] = (int)(float)(v69 * 4096.0);
      v62[2] = (int)v68;
      sub_1400AED60(v63, v66);
      *(v62 - 1) = *v64;
    }
    v66 += 1760;
    v63 += 36;
    v65 += 1760;
    ++v64;
    v62 += 9;
    --v61;
  }
  while ( v61 );
  v70 = dword_16D67C580;
  v71 = (_DWORD *)((char *)&unk_16F0DFBC0 + v122 + 277544);
  v72 = (int *)((char *)&unk_16F0DFBC0 + v122 + 277516);
  v73 = (int *)&unk_16D67C5A4;
  v74 = (float *)&unk_16D4FD594;
  do
  {
    *(v71 - 10) = v6 - 2 < v70;
    if ( v6 - 2 < v70 )
    {
      v75 = (float)(v74[1] * 4096.0) + 16777216.0;
      v76 = *v74 * 4096.0;
      *(v72 - 1) = (int)(float)((float)(*(v74 - 1) * 4096.0) + 16777216.0);
      v77 = (int)v76;
      v78 = v74[5];
      *v72 = v77;
      v72[1] = (int)v75;
      v79 = (int)(v78 * 81.16902097686128);
      if ( v79 < -255 )
      {
        v79 = -255;
      }
      else if ( v79 > 255 )
      {
        v79 = 255;
      }
      v72[6] = v79;
    }
    *(v72 - 2) = *(v73 - 1);
    *v71 = v6 - 1 < v70;
    if ( v6 - 1 < v70 )
    {
      v80 = (float)(v74[384] * 4096.0) + 16777216.0;
      v81 = v74[383] * 4096.0;
      v72[9] = (int)(float)((float)(v74[382] * 4096.0) + 16777216.0);
      v82 = (int)v81;
      v83 = v74[388];
      v72[10] = v82;
      v72[11] = (int)v80;
      v84 = (int)(v83 * 81.16902097686128);
      if ( v84 < -255 )
      {
        v84 = -255;
      }
      else if ( v84 > 255 )
      {
        v84 = 255;
      }
      v72[16] = v84;
    }
    v72[8] = *v73;
    v71[10] = v6 < v70;
    if ( v6 < v70 )
    {
      v85 = (float)(v74[767] * 4096.0) + 16777216.0;
      v86 = v74[766] * 4096.0;
      v72[19] = (int)(float)((float)(v74[765] * 4096.0) + 16777216.0);
      v87 = (int)v86;
      v88 = v74[771];
      v72[20] = v87;
      v72[21] = (int)v85;
      v89 = (int)(v88 * 81.16902097686128);
      if ( v89 < -255 )
      {
        v89 = -255;
      }
      else if ( v89 > 255 )
      {
        v89 = 255;
      }
      v72[26] = v89;
    }
    v72[18] = v73[1];
    v71[20] = v6 + 1 < v70;
    if ( v6 + 1 < v70 )
    {
      v90 = (float)(v74[1150] * 4096.0) + 16777216.0;
      v91 = v74[1149] * 4096.0;
      v72[29] = (int)(float)((float)(v74[1148] * 4096.0) + 16777216.0);
      v92 = (int)v91;
      v93 = v74[1154];
      v72[30] = v92;
      v72[31] = (int)v90;
      v94 = (int)(v93 * 81.16902097686128);
      if ( v94 < -255 )
      {
        v94 = -255;
      }
      else if ( v94 > 255 )
      {
        v94 = 255;
      }
      v72[36] = v94;
    }
    v72[28] = v73[2];
    v71[30] = v6 + 2 < v70;
    if ( v6 + 2 < v70 )
    {
      v95 = (float)(v74[1533] * 4096.0) + 16777216.0;
      v96 = v74[1532] * 4096.0;
      v72[39] = (int)(float)((float)(v74[1531] * 4096.0) + 16777216.0);
      v97 = (int)v96;
      v98 = v74[1537];
      v72[40] = v97;
      v72[41] = (int)v95;
      v99 = (int)(v98 * 81.16902097686128);
      if ( v99 < -255 )
      {
        v99 = -255;
      }
      else if ( v99 > 255 )
      {
        v99 = 255;
      }
      v72[46] = v99;
    }
    v72[38] = v73[3];
    v71[40] = v6 + 3 < v70;
    if ( v6 + 3 < v70 )
    {
      v100 = (float)(v74[1916] * 4096.0) + 16777216.0;
      v101 = v74[1915] * 4096.0;
      v72[49] = (int)(float)((float)(v74[1914] * 4096.0) + 16777216.0);
      v102 = (int)v101;
      v103 = v74[1920];
      v72[50] = v102;
      v72[51] = (int)v100;
      v104 = (int)(v103 * 81.16902097686128);
      if ( v104 < -255 )
      {
        v104 = -255;
      }
      else if ( v104 > 255 )
      {
        v104 = 255;
      }
      v72[56] = v104;
    }
    v72[48] = v73[4];
    v71[50] = v6 + 4 < v70;
    if ( v6 + 4 < v70 )
    {
      v105 = (float)(v74[2299] * 4096.0) + 16777216.0;
      v106 = v74[2298] * 4096.0;
      v72[59] = (int)(float)((float)(v74[2297] * 4096.0) + 16777216.0);
      v107 = (int)v106;
      v108 = v74[2303];
      v72[60] = v107;
      v72[61] = (int)v105;
      v109 = (int)(v108 * 81.16902097686128);
      if ( v109 < -255 )
      {
        v109 = -255;
      }
      else if ( v109 > 255 )
      {
        v109 = 255;
      }
      v72[66] = v109;
    }
    v72[58] = v73[5];
    v71[60] = v6 + 5 < v70;
    if ( v6 + 5 < v70 )
    {
      v110 = (float)(v74[2682] * 4096.0) + 16777216.0;
      v111 = v74[2681] * 4096.0;
      v72[69] = (int)(float)((float)(v74[2680] * 4096.0) + 16777216.0);
      v112 = (int)v111;
      v113 = v74[2686];
      v72[70] = v112;
      v72[71] = (int)v110;
      v114 = (int)(v113 * 81.16902097686128);
      if ( v114 < -255 )
      {
        v114 = -255;
      }
      else if ( v114 > 255 )
      {
        v114 = 255;
      }
      v72[76] = v114;
    }
    result = (unsigned int)v73[6];
    v74 += 3064;
    v72[68] = result;
    v73 += 8;
    v72 += 80;
    v71 += 80;
    v6 += 8;
  }
  while ( (__int64)v74 < (__int64)flt_16D67C594 );
  return result;
}

