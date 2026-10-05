/* Address: 0x1400337b0 | Name: sub_1400337B0 | Size: 917 bytes */
_BOOL8 __fastcall sub_1400337B0(float *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // r14d
  int *v10; // rsi
  int v11; // xmm10_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm4_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // rax
  int v37; // xmm1_4
  int v38; // xmm0_4
  float v39; // xmm2_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  float v44; // xmm1_4
  __int64 v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  float v49; // [rsp+60h] [rbp-A8h]
  int v50; // [rsp+68h] [rbp-A0h] BYREF
  int v51; // [rsp+6Ch] [rbp-9Ch]
  int v52; // [rsp+70h] [rbp-98h]
  _DWORD v53[2]; // [rsp+78h] [rbp-90h] BYREF
  float v54; // [rsp+80h] [rbp-88h]
  float v55[4]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v56[4]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v57[6]; // [rsp+A8h] [rbp-60h] BYREF
  float v58; // [rsp+158h] [rbp+50h] BYREF

  v5 = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v10 = (int *)(a2 + 32784);
  v11 = a5;
  do
  {
    v12 = *(float *)(a2 + 16LL * *(v10 - 1) + 12);
    v13 = *(float *)(a2 + 16LL * *(v10 - 1) + 16);
    v14 = 2LL * *v10;
    v55[0] = *(float *)(a2 + 16LL * *(v10 - 1) + 8);
    v55[2] = v13;
    v55[1] = v12;
    v15 = *(float *)(a2 + 8 * v14 + 16);
    v16 = *(float *)(a2 + 8 * v14 + 8);
    v17 = *(float *)(a2 + 8 * v14 + 12);
    v18 = 2LL * v10[1];
    *(float *)&v56[2] = v15;
    v19 = v15 - v13;
    *(float *)&v56[1] = v17;
    v20 = v17 - v12;
    *(float *)v56 = v16;
    v21 = v16 - v55[0];
    v22 = *(float *)(a2 + 8 * v18 + 8);
    v23 = *(float *)(a2 + 8 * v18 + 12);
    v54 = *(float *)(a2 + 8 * v18 + 16);
    *(float *)v53 = v22;
    v24 = v22 - v55[0];
    *(float *)&v53[1] = v23;
    v25 = v23 - v12;
    v26 = (float)(v25 * v19) - (float)((float)(v54 - v13) * v20);
    v27 = (float)((float)(v54 - v13) * v21) - (float)(v24 * v19);
    v28 = (float)(v24 * v20) - (float)(v25 * v21);
    v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
    if ( v29 == 0.0 )
    {
      v48 = 0;
      v49 = 0.0;
    }
    else
    {
      *(float *)&v48 = v26 * (float)(1.0 / v29);
      *((float *)&v48 + 1) = v27 * (float)(1.0 / v29);
      v49 = v28 * (float)(1.0 / v29);
    }
    LODWORD(v46) = v11;
    if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, _DWORD, _DWORD, int, int))sub_140035690)(
                         (unsigned int)&v50,
                         (unsigned int)&v48,
                         (unsigned int)&v58,
                         a3,
                         a4,
                         v46,
                         (__int64)v55,
                         (__int64)v56,
                         (__int64)v53,
                         v47,
                         v48,
                         LODWORD(v49),
                         v50,
                         v52) )
    {
      v30 = v58;
      if ( v58 < a1[7] )
      {
        v31 = v51;
        *(_DWORD *)a1 = v50;
        v32 = v52;
        *((_DWORD *)a1 + 1) = v31;
        v33 = v48;
        *((_DWORD *)a1 + 2) = v32;
        v34 = HIDWORD(v48);
        *((_DWORD *)a1 + 3) = v33;
        v35 = v49;
        *((_DWORD *)a1 + 4) = v34;
        a1[5] = v35;
        a1[7] = v30;
      }
    }
    if ( *(v10 - 2) == 4 )
    {
      v36 = 2LL * v10[2];
      v37 = *(_DWORD *)(a2 + 16LL * v10[2] + 12);
      v57[0] = *(_DWORD *)(a2 + 16LL * v10[2] + 8);
      v38 = *(_DWORD *)(a2 + 8 * v36 + 16);
      LODWORD(v46) = v11;
      v57[1] = v37;
      v57[2] = v38;
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, _DWORD, _DWORD, int, int))sub_140035690)(
                           (unsigned int)&v50,
                           (unsigned int)&v48,
                           (unsigned int)&v58,
                           a3,
                           a4,
                           v46,
                           (__int64)v55,
                           (__int64)v53,
                           (__int64)v57,
                           v47,
                           v48,
                           LODWORD(v49),
                           v50,
                           v52) )
      {
        v39 = v58;
        if ( v58 < a1[7] )
        {
          v40 = v51;
          *(_DWORD *)a1 = v50;
          v41 = v52;
          *((_DWORD *)a1 + 1) = v40;
          v42 = v48;
          *((_DWORD *)a1 + 2) = v41;
          v43 = HIDWORD(v48);
          *((_DWORD *)a1 + 3) = v42;
          v44 = v49;
          *((_DWORD *)a1 + 4) = v43;
          a1[5] = v44;
          a1[7] = v39;
        }
      }
    }
    ++v5;
    v10 += 8;
  }
  while ( v5 < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}

