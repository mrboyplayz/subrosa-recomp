/* Address: 0x140032e60 | Name: sub_140032E60 | Size: 1953 bytes */
_BOOL8 __fastcall sub_140032E60(
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
  signed int v22; // r12d
  __int64 v23; // r8
  unsigned int *v24; // rsi
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
  __int64 v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+48h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  float v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+74h] [rbp-8Ch]
  int v76; // [rsp+78h] [rbp-88h]
  float v77[4]; // [rsp+80h] [rbp-80h] BYREF
  float v78[4]; // [rsp+90h] [rbp-70h] BYREF
  float v79[4]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v80[4]; // [rsp+B0h] [rbp-50h] BYREF
  float v81; // [rsp+1A8h] [rbp+A8h]
  float v82; // [rsp+1B0h] [rbp+B0h]

  v12 = (int)a7;
  v14 = a9;
  v15 = *a5;
  v16 = 2310LL * a4;
  LODWORD(v70) = 9240 * a4;
  v17 = *(float *)&dword_140404A6C[v16 + 432531269];
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
  if ( (int)dword_140404A6C[v16 + 432532039] <= 0 )
    return 0;
  v23 = 770LL * a4;
  v24 = &dword_140404A6C[v16 + 432532042];
  LODWORD(v71) = 770 * a4;
  do
  {
    v25 = a6[3];
    v26 = *(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*(v24 - 1)];
    v27 = *(float *)&dword_140404A6C[3 * v23 + 432531272 + 3 * (int)*(v24 - 1)];
    v28 = *(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*(v24 - 1)];
    v29 = v23 + (int)v24[1];
    v30 = (float)((float)(v25 * v27) + (float)(*a6 * v26)) + (float)(a6[6] * v28);
    v31 = (float)((float)(a6[4] * v27) + (float)(a6[1] * v26)) + (float)(a6[7] * v28);
    v32 = *(float *)&dword_140404A6C[3 * v23 + 432531272 + 3 * (int)*v24];
    v33 = (float)((float)(a6[5] * v27) + (float)(a6[2] * v26)) + (float)(a6[8] * v28);
    v34 = (float)((float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * *a6) + (float)(v32 * v25))
        + (float)(*(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*v24] * a6[6]);
    v35 = *(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*v24];
    v36 = (float)((float)(v32 * a6[4]) + (float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * a6[1]))
        + (float)(v35 * a6[7]);
    v37 = (float)((float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * a6[2]) + (float)(v32 * a6[5]))
        + (float)(v35 * a6[8]);
    v38 = *(float *)&dword_140404A6C[3 * v29 + 432531273];
    v81 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * *a6)
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * v25))
        + (float)(v38 * a6[6]);
    v39 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * a6[2])
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * a6[5]))
        + (float)(v38 * a6[8]);
    v82 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * a6[1])
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * a6[4]))
        + (float)(v38 * a6[7]);
    v40 = (float)((float)(v82 - v31) * (float)(v37 - v33)) - (float)((float)(v39 - v33) * (float)(v36 - v31));
    v41 = (float)((float)(v39 - v33) * (float)(v34 - v30)) - (float)((float)(v81 - v30) * (float)(v37 - v33));
    v42 = (float)((float)(v81 - v30) * (float)(v36 - v31)) - (float)((float)(v82 - v31) * (float)(v34 - v30));
    v43 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42));
    if ( v43 == 0.0 )
    {
      v72 = 0;
      v73 = 0.0;
    }
    else
    {
      *(float *)&v72 = (float)(1.0 / v43) * v40;
      *((float *)&v72 + 1) = (float)(1.0 / v43) * v41;
      v73 = (float)(1.0 / v43) * v42;
    }
    v44 = *(v24 - 2) == 4;
    v45 = a5[1];
    v46 = *a5;
    v47 = a5[2];
    v78[1] = v31 + v45;
    v78[0] = v30 + v46;
    v78[2] = v33 + v47;
    v79[1] = v45 + v36;
    v79[2] = v47 + v37;
    v79[0] = v34 + v46;
    v77[0] = v46 + v81;
    v77[1] = v45 + v82;
    v77[2] = v47 + v39;
    if ( v44 )
    {
      v48 = v23 + (int)v24[2];
      v49 = (float)(*(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[3]) + v46;
      v50 = *(float *)&dword_140404A6C[3 * v48 + 432531273];
      v51 = *(float *)&dword_140404A6C[3 * v48 + 432531271];
      v52 = (float)((float)(v50 * a6[6]) + (float)(v51 * *a6)) + v49;
      v53 = (float)(v50 * a6[8]) + (float)(v51 * a6[2]);
      v54 = *(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[5];
      v55 = (float)(v50 * a6[7]) + (float)(v51 * a6[1]);
      v56 = (float)(*(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[4]) + v45;
      *(float *)v80 = v52;
      *(float *)&v80[1] = v55 + v56;
      *(float *)&v80[2] = v53 + (float)(v54 + v47);
    }
    *(float *)&v68 = v14;
    if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int))sub_140035690)(
                         (unsigned int)&v74,
                         (unsigned int)&v72,
                         (unsigned int)&a9,
                         v12,
                         (__int64)a8,
                         v68,
                         (__int64)v78,
                         (__int64)v79,
                         (__int64)v77,
                         v69,
                         v70,
                         v71,
                         v72,
                         LODWORD(v73),
                         v74,
                         v76) )
    {
      v57 = a9;
      if ( a9 < *a3 )
      {
        v58 = v75;
        *a1 = v74;
        v59 = v76;
        a1[1] = v58;
        v60 = v72;
        a1[2] = v59;
        v61 = HIDWORD(v72);
        *(_DWORD *)a2 = v60;
        *(float *)(a2 + 8) = v73;
        *(_DWORD *)(a2 + 4) = v61;
        *a3 = v57;
      }
    }
    if ( *(v24 - 2) == 4 )
    {
      *(float *)&v68 = v14;
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, _DWORD, __int64, __int64, __int64, __int64, __int64, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int))sub_140035690)(
                           (unsigned int)&v74,
                           (unsigned int)&v72,
                           (unsigned int)&a9,
                           (_DWORD)a7,
                           (__int64)a8,
                           v68,
                           (__int64)v78,
                           (__int64)v77,
                           (__int64)v80,
                           v69,
                           v70,
                           v71,
                           v72,
                           LODWORD(v73),
                           v74,
                           v76) )
      {
        v62 = a9;
        if ( a9 < *a3 )
        {
          v63 = v75;
          *a1 = v74;
          v64 = v76;
          a1[1] = v63;
          v65 = v72;
          a1[2] = v64;
          v66 = HIDWORD(v72);
          *(_DWORD *)a2 = v65;
          *(float *)(a2 + 8) = v73;
          *(_DWORD *)(a2 + 4) = v66;
          *a3 = v62;
        }
      }
    }
    v12 = (int)a7;
    ++v22;
    v23 = v71;
    v24 += 6;
  }
  while ( v22 < *(int *)((char *)&dword_140404A6C[432532039] + v70) );
  return *a3 < 65536.0;
}

