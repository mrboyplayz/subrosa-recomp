/* Address: 0x1400234f0 | Name: sub_1400234F0 | Size: 1953 bytes */
_BOOL8 __fastcall sub_1400234F0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  int v12; // edx
  float v14; // xmm7_4
  float v15; // xmm9_4
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  int v22; // r12d
  __int64 v23; // r8
  int *v24; // rsi
  float v25; // xmm9_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  __int64 v29; // rax
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm1_4
  float v36; // xmm15_4
  float v37; // xmm13_4
  float v38; // xmm3_4
  float v39; // xmm14_4
  float v40; // xmm12_4
  float v41; // xmm8_4
  float v42; // xmm9_4
  float v43; // xmm0_4
  bool v44; // zf
  float v45; // xmm8_4
  float v46; // xmm3_4
  float v47; // xmm9_4
  __int64 v48; // rax
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm6_4
  float v54; // xmm5_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  int v58; // xmm1_4
  int v59; // xmm0_4
  int v60; // xmm1_4
  int v61; // xmm0_4
  float v62; // xmm2_4
  int v63; // xmm1_4
  int v64; // xmm0_4
  int v65; // xmm1_4
  int v66; // xmm0_4
  __int64 v68; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  float v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+74h] [rbp-8Ch]
  int v74; // [rsp+78h] [rbp-88h]
  float v75[4]; // [rsp+80h] [rbp-80h] BYREF
  float v76[4]; // [rsp+90h] [rbp-70h] BYREF
  float v77[4]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v78[4]; // [rsp+B0h] [rbp-50h] BYREF
  float v79; // [rsp+1A8h] [rbp+A8h]
  float v80; // [rsp+1B0h] [rbp+B0h]

  v12 = (int)a7;
  v14 = a9;
  v15 = *a5;
  v16 = 9240LL * a4;
  v68 = v16;
  v17 = *(float *)((char *)&unk_140585B60 + v16);
  v18 = *a5 - v17;
  if ( (float)(*a7 + a9) < v18 && (float)(a9 + *a8) < v18 )
    return 0;
  v19 = a5[1];
  if ( (float)(a7[1] + a9) < (float)(v19 - v17) && (float)(a9 + a8[1]) < (float)(v19 - v17) )
    return 0;
  v20 = a5[2] - v17;
  if ( (float)(a7[2] + a9) < v20 && (float)(a9 + a8[2]) < v20 )
    return 0;
  if ( (float)(*a7 - a9) > (float)(v17 + v15) && (float)(*a8 - a9) > (float)(v17 + v15) )
    return 0;
  if ( (float)(a7[1] - a9) > (float)(v17 + v19) && (float)(a8[1] - a9) > (float)(v17 + v19) )
    return 0;
  v21 = v17 + a5[2];
  if ( (float)(a7[2] - a9) > v21 && (float)(a8[2] - a9) > v21 )
    return 0;
  v22 = 0;
  *a3 = 65536.0;
  if ( *(int *)((char *)&unk_140585B60 + v16 + 3080) <= 0 )
    return 0;
  v23 = 770LL * a4;
  v24 = (int *)((char *)&unk_140586774 + v16);
  v69 = v23;
  do
  {
    v25 = a6[3];
    v26 = *((float *)&unk_140585B60 + 3 * v23 + 3 * *(v24 - 1) + 2);
    v27 = *((float *)&unk_140585B60 + 3 * v23 + 3 * *(v24 - 1) + 3);
    v28 = *((float *)&unk_140585B60 + 3 * v23 + 3 * *(v24 - 1) + 4);
    v29 = v23 + v24[1];
    v30 = (float)((float)(v25 * v27) + (float)(*a6 * v26)) + (float)(a6[6] * v28);
    v31 = (float)((float)(a6[4] * v27) + (float)(a6[1] * v26)) + (float)(a6[7] * v28);
    v32 = *((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 3);
    v33 = (float)((float)(a6[5] * v27) + (float)(a6[2] * v26)) + (float)(a6[8] * v28);
    v34 = (float)((float)(*((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 2) * *a6) + (float)(v32 * v25))
        + (float)(*((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 4) * a6[6]);
    v35 = *((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 4);
    v36 = (float)((float)(v32 * a6[4]) + (float)(*((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 2) * a6[1]))
        + (float)(v35 * a6[7]);
    v37 = (float)((float)(*((float *)&unk_140585B60 + 3 * v23 + 3 * *v24 + 2) * a6[2]) + (float)(v32 * a6[5]))
        + (float)(v35 * a6[8]);
    v38 = *((float *)&unk_140585B60 + 3 * v29 + 4);
    v79 = (float)((float)(*((float *)&unk_140585B60 + 3 * v29 + 2) * *a6)
                + (float)(*((float *)&unk_140585B60 + 3 * v29 + 3) * v25))
        + (float)(v38 * a6[6]);
    v39 = (float)((float)(*((float *)&unk_140585B60 + 3 * v29 + 2) * a6[2])
                + (float)(*((float *)&unk_140585B60 + 3 * v29 + 3) * a6[5]))
        + (float)(v38 * a6[8]);
    v80 = (float)((float)(*((float *)&unk_140585B60 + 3 * v29 + 2) * a6[1])
                + (float)(*((float *)&unk_140585B60 + 3 * v29 + 3) * a6[4]))
        + (float)(v38 * a6[7]);
    v40 = (float)((float)(v80 - v31) * (float)(v37 - v33)) - (float)((float)(v39 - v33) * (float)(v36 - v31));
    v41 = (float)((float)(v39 - v33) * (float)(v34 - v30)) - (float)((float)(v79 - v30) * (float)(v37 - v33));
    v42 = (float)((float)(v79 - v30) * (float)(v36 - v31)) - (float)((float)(v80 - v31) * (float)(v34 - v30));
    v43 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42));
    if ( v43 == 0.0 )
    {
      v70 = 0;
      v71 = 0.0;
    }
    else
    {
      *(float *)&v70 = (float)(1.0 / v43) * v40;
      *((float *)&v70 + 1) = (float)(1.0 / v43) * v41;
      v71 = (float)(1.0 / v43) * v42;
    }
    v44 = *(v24 - 2) == 4;
    v45 = a5[1];
    v46 = *a5;
    v47 = a5[2];
    v76[1] = v31 + v45;
    v76[0] = v30 + v46;
    v76[2] = v33 + v47;
    v77[1] = v45 + v36;
    v77[2] = v47 + v37;
    v77[0] = v34 + v46;
    v75[0] = v46 + v79;
    v75[1] = v45 + v80;
    v75[2] = v47 + v39;
    if ( v44 )
    {
      v48 = v23 + v24[2];
      v49 = (float)(*((float *)&unk_140585B60 + 3 * v48 + 3) * a6[3]) + v46;
      v50 = *((float *)&unk_140585B60 + 3 * v48 + 4);
      v51 = *((float *)&unk_140585B60 + 3 * v48 + 2);
      v52 = (float)((float)(v50 * a6[6]) + (float)(v51 * *a6)) + v49;
      v53 = (float)(v50 * a6[8]) + (float)(v51 * a6[2]);
      v54 = *((float *)&unk_140585B60 + 3 * v48 + 3) * a6[5];
      v55 = (float)(v50 * a6[7]) + (float)(v51 * a6[1]);
      v56 = (float)(*((float *)&unk_140585B60 + 3 * v48 + 3) * a6[4]) + v45;
      *(float *)v78 = v52;
      *(float *)&v78[1] = v55 + v56;
      *(float *)&v78[2] = v53 + (float)(v54 + v47);
    }
    if ( (unsigned int)sub_140025D20(
                         (unsigned int)&v72,
                         (unsigned int)&v70,
                         (unsigned int)&a9,
                         v12,
                         (__int64)a8,
                         LODWORD(v14),
                         (__int64)v76,
                         (__int64)v77,
                         (__int64)v75) )
    {
      v57 = a9;
      if ( a9 < *a3 )
      {
        v58 = v73;
        *a1 = v72;
        v59 = v74;
        a1[1] = v58;
        v60 = v70;
        a1[2] = v59;
        v61 = HIDWORD(v70);
        *(_DWORD *)a2 = v60;
        *(float *)(a2 + 8) = v71;
        *(_DWORD *)(a2 + 4) = v61;
        *a3 = v57;
      }
    }
    if ( *(v24 - 2) == 4
      && (unsigned int)sub_140025D20(
                         (unsigned int)&v72,
                         (unsigned int)&v70,
                         (unsigned int)&a9,
                         (_DWORD)a7,
                         (__int64)a8,
                         LODWORD(v14),
                         (__int64)v76,
                         (__int64)v75,
                         (__int64)v78) )
    {
      v62 = a9;
      if ( a9 < *a3 )
      {
        v63 = v73;
        *a1 = v72;
        v64 = v74;
        a1[1] = v63;
        v65 = v70;
        a1[2] = v64;
        v66 = HIDWORD(v70);
        *(_DWORD *)a2 = v65;
        *(float *)(a2 + 8) = v71;
        *(_DWORD *)(a2 + 4) = v66;
        *a3 = v62;
      }
    }
    v12 = (int)a7;
    ++v22;
    v23 = v69;
    v24 += 6;
  }
  while ( v22 < *(_DWORD *)((char *)&unk_140585B60 + v68 + 3080) );
  return *a3 < 65536.0;
}

