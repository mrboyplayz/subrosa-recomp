/* Address: 0x1400b9d90 | Name: sub_1400B9D90 | Size: 1151 bytes */
__int64 __fastcall sub_1400B9D90(int a1)
{
  float v1; // xmm3_4
  float v2; // xmm7_4
  float v3; // xmm0_4
  __int64 v5; // r12
  float *v6; // rdi
  float *v7; // rbx
  float v8; // xmm9_4
  float v9; // xmm11_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm13_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21; // rsi
  int v22; // r15d
  unsigned int *v23; // r14
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  __int64 v45; // [rsp+0h] [rbp-100h] BYREF
  float *v46; // [rsp+20h] [rbp-E0h]
  __int64 *v47; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+38h] [rbp-C8h]
  __int128 *v50; // [rsp+40h] [rbp-C0h]
  _DWORD *v51; // [rsp+48h] [rbp-B8h]
  unsigned int *v52; // [rsp+50h] [rbp-B0h]
  unsigned int *v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+68h] [rbp-98h]
  unsigned int v56[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v57[4]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v58[4]; // [rsp+90h] [rbp-70h] BYREF
  float v59[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  float v62; // [rsp+C8h] [rbp-38h]
  float v63; // [rsp+D0h] [rbp-30h]
  float v64; // [rsp+D4h] [rbp-2Ch]
  _DWORD v65[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h]

  v1 = *(float *)&dword_140404A6C[282486300];
  v2 = *(float *)&dword_140404A6C[282486299];
  v3 = *(float *)&dword_140404A6C[282486300];
  v5 = 7166LL * a1;
  v6 = (float *)&dword_140404A6C[v5 + 280651440];
  v7 = (float *)&dword_140404A6C[v5 + 280651452];
  dword_140404A6C[v5 + 280651334] = 0;
  dword_140404A6C[v5 + 280658026] = 0;
  dword_140404A6C[v5 + 280658081] = 0;
  v8 = *v7;
  v9 = v7[1];
  v10 = *(float *)&dword_140404A6C[v5 + 280651455];
  v11 = *(float *)&dword_140404A6C[v5 + 280651456];
  v12 = v7[2];
  v13 = *(float *)&dword_140404A6C[v5 + 280651457];
  v14 = (float)((float)(v9 * v2) + v6[1]) + (float)(v1 * v11);
  v63 = (float)((float)(*v7 * v2) + *v6) + (float)(v3 * v10);
  v64 = v14;
  v15 = (float)(v8 * *(float *)&dword_140404A6C[282486374]) + *v6;
  v16 = (float)((float)(v12 * v2) + v6[2]) + (float)(v13 * v1);
  v17 = (float)(v9 * *(float *)&dword_140404A6C[282486374]) + v6[1];
  v18 = (float)(v12 * *(float *)&dword_140404A6C[282486374]) + v6[2];
  *(float *)v65 = v16;
  *(float *)&v65[1] = v15 + (float)(*(float *)&dword_140404A6C[282486375] * v10);
  *(float *)&v65[2] = v17 + (float)(*(float *)&dword_140404A6C[282486375] * v11);
  *(float *)&v65[3] = v18 + (float)(*(float *)&dword_140404A6C[282486375] * v13);
  sub_1400ABB10(a1);
  if ( !dword_140404A6C[v5 + 280651324] )
  {
    v19 = (float)(*(float *)&dword_140404A6C[v5 + 280657931] * 16.0) - 0.875;
    v20 = (float)(*(float *)&dword_1402F618C * v19) + v6[1];
    *(float *)&v61 = (float)(*(float *)&dword_1402F6188 * v19) + *v6;
    *((float *)&v61 + 1) = v20;
    v62 = (float)(*(float *)&dword_1402F6190 * v19) + v6[2];
    sub_1400DC050(&dword_140404A6C[v5 + 280651440], &v61, 0);
  }
  v21 = (float *)v65;
  v22 = 0;
  v23 = &dword_140404A6C[v5 + 280658055];
  v58[0] = 1016515556;
  v58[1] = 1016515556;
  v58[2] = 1016515556;
  v56[0] = 1015021568;
  v56[1] = 1015021568;
  v56[2] = 1015021568;
  v57[0] = 1040187392;
  v57[1] = 1040187392;
  v57[2] = 1040187392;
  do
  {
    v23[1] = *v23;
    *v23 = 0;
    v24 = *v6;
    v25 = v6[1];
    v26 = v6[2];
    v27 = *v7 * 0.3125;
    v28 = v7[1] * 0.3125;
    if ( v22 )
    {
      v29 = v27 + v24;
      v30 = v28 + v25;
      v31 = (float)(v7[2] * 0.3125) + v26;
    }
    else
    {
      v29 = v24 - v27;
      v30 = v25 - v28;
      v31 = v26 - (float)(v7[2] * 0.3125);
    }
    v32 = *(float *)&dword_140404A6C[v5 + 280651458];
    v33 = *(float *)&dword_140404A6C[v5 + 280651455];
    v55 = 0;
    v54 = 1061752795;
    v53 = v56;
    v52 = v57;
    v51 = v58;
    v50 = &v60;
    v34 = v29 - (float)(v32 * 0.75);
    v49 = 0;
    v35 = *(float *)&dword_140404A6C[v5 + 280651459] * 0.75;
    v61 = 0;
    v48 = 1065353216;
    v36 = v34 - (float)(v33 * 0.125);
    v47 = &v61;
    v37 = v30 - v35;
    v38 = *(float *)&dword_140404A6C[v5 + 280651460];
    v39 = *(float *)&dword_140404A6C[v5 + 280651456] * 0.125;
    v62 = 0.0;
    v40 = v36 - *(v21 - 2);
    v46 = (float *)&dword_140404A6C[v5 + 280651452];
    v41 = v37 - v39;
    v42 = *(float *)&dword_140404A6C[v5 + 280651457] * 0.125;
    v59[0] = v40;
    v43 = v41 - *(v21 - 1);
    v60 = xmmword_140279490;
    v59[1] = v43;
    v59[2] = (float)((float)(v31 - (float)(v38 * 0.75)) - v42) - *v21;
    sub_1400B1450(
      a1,
      0,
      v22 + 2 * (v22 + 5),
      v59,
      v46,
      (float *)&v61,
      1.0,
      0,
      (__m128 *)&v60,
      v58,
      v57,
      v56,
      0.78539819,
      0);
    ++v22;
    v23 += 55;
    v21 += 3;
  }
  while ( v22 < 2 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v45 ^ v66);
}

