/* Address: 0x1400ba210 | Name: sub_1400BA210 | Size: 2081 bytes */
__int64 __fastcall sub_1400BA210(int a1)
{
  float v1; // xmm2_4
  __int64 v2; // rdi
  float v3; // xmm3_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  __int64 v6; // rbx
  float *v7; // r12
  float *v8; // r13
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm11_4
  float v15; // xmm5_4
  float v16; // xmm13_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm13_4
  float v28; // xmm9_4
  float v29; // xmm11_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rsi
  _DWORD *v33; // r15
  int v34; // r14d
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm14_4
  float v40; // xmm15_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm6_4
  float v47; // xmm2_4
  float v48; // xmm7_4
  float v49; // xmm8_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  unsigned __int64 v55; // rsi
  unsigned int *v56; // r9
  unsigned __int64 v57; // rsi
  unsigned int *v58; // r9
  __int64 v60; // [rsp+8h] [rbp-100h] BYREF
  __int64 v61; // [rsp+78h] [rbp-90h]
  int *v62; // [rsp+80h] [rbp-88h]
  __int128 v63; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v64[4]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v65[4]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v66[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v67[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h] BYREF
  float v69; // [rsp+E0h] [rbp-28h]
  float v70; // [rsp+E8h] [rbp-20h]
  float v71; // [rsp+ECh] [rbp-1Ch]
  float v72[4]; // [rsp+F0h] [rbp-18h]
  float v73; // [rsp+100h] [rbp-8h]
  float v74; // [rsp+104h] [rbp-4h]
  _DWORD v75[4]; // [rsp+108h] [rbp+0h]
  __int64 v76; // [rsp+118h] [rbp+10h]

  v1 = *(float *)&dword_140404A6C[282486350];
  v2 = 0;
  v3 = *(float *)&dword_140404A6C[282486425];
  v4 = *(float *)&dword_140404A6C[282486299];
  v5 = *(float *)&dword_140404A6C[282486350];
  v6 = 7166LL * a1;
  LODWORD(v61) = a1;
  v7 = (float *)&dword_140404A6C[v6 + 280651452];
  v8 = (float *)&dword_140404A6C[v6 + 280651440];
  dword_140404A6C[v6 + 280651334] = 0;
  dword_140404A6C[v6 + 280658026] = 0;
  dword_140404A6C[v6 + 280658081] = 0;
  v9 = v5 * *(float *)&dword_140404A6C[v6 + 280652314];
  v10 = (float)(v5 * *(float *)&dword_140404A6C[v6 + 280652313]) + *(float *)&dword_140404A6C[v6 + 280652298];
  v11 = *(float *)&dword_140404A6C[v6 + 280651452];
  v12 = (float)(v1 * *(float *)&dword_140404A6C[v6 + 280652315]) + *(float *)&dword_140404A6C[v6 + 280652300];
  v13 = *(float *)&dword_140404A6C[v6 + 280651455];
  v14 = *(float *)&dword_140404A6C[v6 + 280651453];
  v15 = *(float *)&dword_140404A6C[v6 + 280651456];
  v16 = *(float *)&dword_140404A6C[v6 + 280651454];
  v17 = *(float *)&dword_140404A6C[v6 + 280651457];
  v74 = v9 + *(float *)&dword_140404A6C[v6 + 280652299];
  v18 = v3 * *(float *)&dword_140404A6C[v6 + 280652548];
  v73 = v10;
  v19 = v3 * *(float *)&dword_140404A6C[v6 + 280652547];
  v20 = v18 + *(float *)&dword_140404A6C[v6 + 280652533];
  v21 = v3 * *(float *)&dword_140404A6C[v6 + 280652549];
  v22 = v19 + *(float *)&dword_140404A6C[v6 + 280652532];
  *(float *)v75 = v12;
  v23 = v21 + *(float *)&dword_140404A6C[v6 + 280652534];
  *(float *)&v75[2] = v20;
  *(float *)&v75[1] = v22;
  v24 = (float)(v11 * v4) + *(float *)&dword_140404A6C[v6 + 280651440];
  *(float *)&v75[3] = v23;
  v25 = (float)((float)(v14 * v4) + *(float *)&dword_140404A6C[v6 + 280651441])
      + (float)(v15 * *(float *)&dword_140404A6C[282486300]);
  v70 = v24 + (float)(v13 * *(float *)&dword_140404A6C[282486300]);
  v26 = (float)(v16 * v4) + *(float *)&dword_140404A6C[v6 + 280651442];
  v71 = v25;
  v27 = (float)(v16 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651442];
  v28 = (float)((float)(v11 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651440])
      + (float)(v13 * *(float *)&dword_140404A6C[282486375]);
  v29 = (float)((float)(v14 * *(float *)&dword_140404A6C[282486374]) + *(float *)&dword_140404A6C[v6 + 280651441])
      + (float)(v15 * *(float *)&dword_140404A6C[282486375]);
  v72[0] = v26 + (float)(v17 * *(float *)&dword_140404A6C[282486300]);
  v72[1] = v28;
  v72[2] = v29;
  v72[3] = v27 + (float)(v17 * *(float *)&dword_140404A6C[282486375]);
  sub_1400ABB10(a1);
  if ( !dword_140404A6C[v6 + 280651324] )
  {
    v30 = (float)(*(float *)&dword_140404A6C[v6 + 280657931] * 16.0) - 0.875;
    v31 = (float)(*(float *)&dword_1402F618C * v30) + v8[1];
    *(float *)&v68 = (float)(*(float *)&dword_1402F6188 * v30) + *v8;
    *((float *)&v68 + 1) = v31;
    v69 = (float)(*(float *)&dword_1402F6190 * v30) + v8[2];
    sub_1400DC050(&dword_140404A6C[v6 + 280651440], &v68, 0);
  }
  v32 = 0x140000000LL + v6 * 4 + 1126822832;
  v66[0] = 1016515556;
  v62 = (int *)v32;
  v33 = (_DWORD *)(0x140000000LL + v6 * 4 + 1126845576);
  v34 = 0;
  v66[1] = 1016515556;
  v66[2] = 1016515556;
  v64[0] = 1031798784;
  v64[1] = 1031798784;
  v64[2] = 1031798784;
  v65[0] = 1048576000;
  v65[1] = 1048576000;
  v65[2] = 1048576000;
  do
  {
    v33[1] = *v33;
    *v33 = 0;
    v35 = *(float *)&dword_140404A6C[v6 + 280657930];
    v36 = *(float *)&dword_140404A6C[v6 + 280657931];
    v37 = *(float *)&dword_140404A6C[v6 + 280657932];
    v38 = v35 + *(float *)((char *)&v70 + v2 * 4);
    v39 = v36 + v72[v2 - 1];
    v40 = v37 + v72[v2];
    v41 = v35 + *v8;
    v42 = v36 + v8[1];
    v43 = v37 + v8[2];
    if ( v34 )
    {
      v50 = fmaxf(*(float *)&dword_140404A6C[v6 + 280651453] * -0.5, 0.0);
      v48 = (float)((float)(v7[1] * 0.25) + v42) + (float)(v50 * v7[1]);
      v49 = (float)(v7[2] * 0.25) + v43;
      v51 = v50 * *v7;
      v47 = v50 * v7[2];
      v46 = (float)((float)(*v7 * 0.25) + v41) + v51;
    }
    else
    {
      v44 = -fmaxf(*(float *)&dword_140404A6C[v6 + 280651453] * 0.5, 0.0);
      v45 = v7[2];
      v46 = (float)(v41 - (float)(*v7 * 0.25)) + (float)(*v7 * v44);
      v47 = v45 * v44;
      v48 = (float)(v42 - (float)(v7[1] * 0.25)) + (float)(v7[1] * v44);
      v49 = v43 - (float)(v45 * 0.25);
    }
    v52 = (float)((float)(v46 - (float)(*(float *)&dword_140404A6C[v6 + 280651458] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651455] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651458] * 0.125);
    v53 = (float)((float)(v48 - (float)(*(float *)&dword_140404A6C[v6 + 280651459] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651456] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651459] * 0.125);
    v54 = (float)((float)((float)(v49 + v47) - (float)(*(float *)&dword_140404A6C[v6 + 280651460] * 0.25))
                - (float)(*(float *)&dword_140404A6C[v6 + 280651457] * 0.75))
        - (float)(*(float *)&dword_140404A6C[v6 + 280651460] * 0.125);
    if ( !dword_140404A6C[v6 + 280651324] )
    {
      v52 = (float)((float)(v52 - (float)(v35 + *(float *)((char *)&v73 + v2 * 4))) * 0.015625)
          + (float)(v35 + *(float *)((char *)&v73 + v2 * 4));
      v53 = (float)((float)(v53 - (float)(v36 + *(float *)&v75[v2 - 1])) * 0.015625)
          + (float)(v36 + *(float *)&v75[v2 - 1]);
      v54 = (float)((float)(v54 - (float)(v37 + *(float *)&v75[v2])) * 0.015625) + (float)(v37 + *(float *)&v75[v2]);
    }
    v63 = xmmword_140279490;
    v67[0] = v52 - v38;
    v67[1] = v53 - v39;
    v67[2] = v54 - v40;
    v68 = 0;
    v69 = 0.0;
    sub_1400B1450(
      v61,
      0,
      v34 + 2 * (v34 + 5),
      v67,
      (float *)&dword_140404A6C[v6 + 280651452],
      (float *)&v68,
      1.0,
      0,
      (__m128 *)&v63,
      v66,
      v65,
      v64,
      0.78539819,
      24);
    *(_QWORD *)&v63 = *(int *)(v32 - 312);
    v55 = 36 * v63;
    v56 = &dword_140404A6C[36 * v63 + 485543049];
    dword_140404A6C[36 * (_QWORD)v63 + 485543048] = 0;
    *(_QWORD *)v56 = 0;
    v56[2] = 0;
    sub_1400A9EF0((unsigned int)v61, 0, v34 + 2 * (v34 + 5), (float *)v56);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v55 + 485543049]
                               * *(float *)&dword_140404A6C[v55 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v55 + 485543050]
                               * *(float *)&dword_140404A6C[v55 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v55 + 485543051] * *(float *)&dword_140404A6C[v55 + 485543051])) > 0.0 )
      dword_140404A6C[v55 + 485543048] = 1;
    dword_140404A6C[61 * (_QWORD)v63 + 486149287] = 981467136;
    *(_QWORD *)&v63 = *v62;
    v57 = 36 * v63;
    v58 = &dword_140404A6C[36 * v63 + 485543049];
    dword_140404A6C[36 * (_QWORD)v63 + 485543048] = 0;
    *(_QWORD *)v58 = 0;
    v58[2] = 0;
    sub_1400A9EF0((unsigned int)v61, (unsigned int)(3 * v34 + 10), 3 * v34 + 11, (float *)v58);
    if ( (float)((float)((float)(*(float *)&dword_140404A6C[v57 + 485543049]
                               * *(float *)&dword_140404A6C[v57 + 485543049])
                       + (float)(*(float *)&dword_140404A6C[v57 + 485543050]
                               * *(float *)&dword_140404A6C[v57 + 485543050]))
               + (float)(*(float *)&dword_140404A6C[v57 + 485543051] * *(float *)&dword_140404A6C[v57 + 485543051])) > 0.0 )
      dword_140404A6C[v57 + 485543048] = 1;
    ++v34;
    v32 = (__int64)(v62 + 234);
    v33 += 55;
    v2 += 3;
    v62 += 234;
    dword_140404A6C[61 * (_QWORD)v63 + 486149287] = 981467136;
  }
  while ( v34 < 2 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v60 ^ v76);
}

