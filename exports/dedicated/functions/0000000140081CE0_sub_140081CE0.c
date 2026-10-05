/* Address: 0x140081ce0 | Name: sub_140081CE0 | Size: 1641 bytes */
__int64 __fastcall sub_140081CE0(_DWORD *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  int v8; // r15d
  __int64 v9; // r12
  float *v13; // r13
  int *v14; // rsi
  float v15; // xmm8_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __int64 v20; // rax
  float v21; // xmm5_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm2_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm11_4
  float v31; // xmm13_4
  __int64 v32; // rax
  float v33; // xmm14_4
  float v34; // xmm15_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm9_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm3_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm7_4
  bool v45; // zf
  float v46; // xmm3_4
  float v47; // xmm10_4
  float v48; // xmm11_4
  __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  int v59; // xmm1_4
  float v60; // xmm2_4
  int v61; // xmm1_4
  float v63; // [rsp+40h] [rbp-C0h]
  float v64[2]; // [rsp+48h] [rbp-B8h] BYREF
  float v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+5Ch] [rbp-A4h]
  int v68; // [rsp+60h] [rbp-A0h]
  float v69[4]; // [rsp+68h] [rbp-98h] BYREF
  float v70[4]; // [rsp+78h] [rbp-88h] BYREF
  float v71[4]; // [rsp+88h] [rbp-78h] BYREF
  float v72[6]; // [rsp+98h] [rbp-68h] BYREF
  float v73; // [rsp+1A0h] [rbp+A0h]
  float v74; // [rsp+1A8h] [rbp+A8h] BYREF

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 1.0;
  if ( *(int *)((char *)&unk_1901220C0 + v9 + 2304) <= 0 )
    return 0;
  v13 = a5;
  v14 = (int *)((char *)&unk_1901229D0 + v9);
  do
  {
    v15 = a6[3];
    v16 = v9 + 12LL * *(v14 - 1);
    v17 = *(float *)((char *)&unk_1901226C0 + v16);
    v18 = *(float *)((char *)&unk_1901226C0 + v16 + 4);
    v19 = *(float *)((char *)&unk_1901226C0 + v16 + 8);
    v20 = v9 + 12LL * *v14;
    v21 = *(float *)((char *)&unk_1901226C0 + v20);
    v22 = a6[4] * v18;
    v23 = (float)(v15 * v18) + (float)(*a6 * v17);
    v24 = a6[5] * v18;
    v25 = *(float *)((char *)&unk_1901226C0 + v20 + 4);
    v26 = v23 + (float)(a6[6] * v19);
    v27 = v22 + (float)(a6[1] * v17);
    v28 = a6[2] * v17;
    v29 = *(float *)((char *)&unk_1901226C0 + v20 + 8);
    v30 = v27 + (float)(a6[7] * v19);
    v31 = (float)(v24 + v28) + (float)(a6[8] * v19);
    v32 = v9 + 12LL * v14[1];
    v33 = (float)((float)(v21 * *a6) + (float)(v25 * v15)) + (float)(v29 * a6[6]);
    v34 = (float)((float)(v21 * a6[1]) + (float)(v25 * a6[4])) + (float)(v29 * a6[7]);
    v35 = (float)((float)(v21 * a6[2]) + (float)(v25 * a6[5])) + (float)(v29 * a6[8]);
    v36 = *(float *)((char *)&unk_1901226C0 + v32 + 8);
    v73 = (float)((float)(*(float *)((char *)&unk_1901226C0 + v32) * *a6)
                + (float)(*(float *)((char *)&unk_1901226C0 + v32 + 4) * v15))
        + (float)(v36 * a6[6]);
    v37 = (float)((float)(*(float *)((char *)&unk_1901226C0 + v32) * a6[2])
                + (float)(*(float *)((char *)&unk_1901226C0 + v32 + 4) * a6[5]))
        + (float)(v36 * a6[8]);
    v63 = (float)((float)(*(float *)((char *)&unk_1901226C0 + v32) * a6[1])
                + (float)(*(float *)((char *)&unk_1901226C0 + v32 + 4) * a6[4]))
        + (float)(v36 * a6[7]);
    v38 = (float)((float)(v63 - v30) * (float)(v35 - v31)) - (float)((float)(v37 - v31) * (float)(v34 - v30));
    v39 = (float)((float)(v37 - v31) * (float)(v33 - v26)) - (float)((float)(v73 - v26) * (float)(v35 - v31));
    v40 = (float)((float)(v73 - v26) * (float)(v34 - v30)) - (float)((float)(v63 - v30) * (float)(v33 - v26));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v64[0] = 0.0;
      v42 = 0.0;
      v65 = 0.0;
      v44 = 0.0;
      v43 = 0.0;
    }
    else
    {
      v42 = v38 * (float)(1.0 / v41);
      v43 = v40 * (float)(1.0 / v41);
      v64[0] = v42;
      v44 = v39 * (float)(1.0 / v41);
      v65 = v43;
    }
    v45 = *(v14 - 2) == 4;
    v46 = *v13;
    v64[1] = v44;
    v70[0] = v26 + v46;
    v47 = v13[1];
    v71[0] = v33 + v46;
    v69[0] = v73 + v46;
    v70[1] = v30 + v47;
    v48 = v13[2];
    v71[1] = v34 + v47;
    v69[1] = v63 + v47;
    v70[2] = v31 + v48;
    v71[2] = v35 + v48;
    v69[2] = v37 + v48;
    if ( v45 )
    {
      v49 = v9 + 12LL * v14[2];
      v50 = (float)(*(float *)((char *)&unk_1901226C0 + v49 + 4) * a6[3]) + v46;
      v51 = *(float *)((char *)&unk_1901226C0 + v49 + 8);
      v52 = *(float *)((char *)&unk_1901226C0 + v49);
      v53 = (float)((float)(v51 * a6[6]) + (float)(v52 * *a6)) + v50;
      v54 = (float)(v51 * a6[8]) + (float)(v52 * a6[2]);
      v55 = *(float *)((char *)&unk_1901226C0 + v49 + 4) * a6[5];
      v56 = (float)(v51 * a6[7]) + (float)(v52 * a6[1]);
      v57 = (float)(*(float *)((char *)&unk_1901226C0 + v49 + 4) * a6[4]) + v47;
      v72[0] = v53;
      v72[1] = v56 + v57;
      v72[2] = v54 + (float)(v55 + v48);
    }
    if ( sub_140048690((float *)&v66, v64, &v74, a7, a8, v70, v71, v69) )
    {
      v58 = v74;
      if ( v74 < *a3 )
      {
        v59 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v59;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v58;
      }
    }
    if ( *(v14 - 2) == 4 && sub_140048690((float *)&v66, v64, &v74, a7, a8, v70, v69, v72) )
    {
      v60 = v74;
      if ( v74 < *a3 )
      {
        v61 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v61;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v60;
      }
    }
    ++v8;
    v14 += 6;
  }
  while ( v8 < *(_DWORD *)((char *)&unk_1901220C0 + v9 + 2304) );
  if ( *a3 >= 1.0 )
    return 0;
  qword_16E18CA60 = 0;
  dword_16E18CA68 = 0;
  return 1;
}

