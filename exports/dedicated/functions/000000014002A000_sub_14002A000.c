/* Address: 0x14002a000 | Name: sub_14002A000 | Size: 683 bytes */
_BOOL8 __fastcall sub_14002A000(float *a1, int *a2, int a3, __int64 a4, int a5)
{
  int v5; // edi
  float *v10; // rsi
  int v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm9_4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  float v38; // [rsp+60h] [rbp-A8h]
  _DWORD v39[3]; // [rsp+68h] [rbp-A0h] BYREF
  float v40[4]; // [rsp+78h] [rbp-90h] BYREF
  float v41[4]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v42[6]; // [rsp+98h] [rbp-70h] BYREF
  float v43; // [rsp+148h] [rbp+40h] BYREF

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = (float *)(a2 + 3);
  v11 = a5;
  do
  {
    v12 = v10[6];
    v13 = *(v10 - 1);
    v14 = *v10;
    v15 = v10[4];
    v16 = v10[5];
    v17 = v10[3];
    v18 = v10[2];
    v19 = v10[1];
    v41[0] = *(v10 - 2);
    v41[2] = v14;
    *(float *)&v39[2] = v12;
    v20 = v12 - v14;
    v40[2] = v17;
    v21 = v17 - v14;
    *(float *)v39 = v15;
    *(float *)&v39[1] = v16;
    v22 = v16 - v13;
    v41[1] = v13;
    v40[1] = v18;
    v23 = v18 - v13;
    v40[0] = v19;
    v24 = v19 - v41[0];
    v25 = (float)(v22 * v21) - (float)(v20 * v23);
    v26 = (float)(v15 - v41[0]) * v21;
    v27 = (float)((float)(v15 - v41[0]) * v23) - (float)(v22 * v24);
    v28 = (float)(v20 * v24) - v26;
    v29 = fsqrt((float)((float)(v28 * v28) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v29 == 0.0 )
    {
      v37 = 0;
      v38 = 0.0;
    }
    else
    {
      *(float *)&v37 = v25 * (float)(1.0 / v29);
      *((float *)&v37 + 1) = v28 * (float)(1.0 / v29);
      v38 = v27 * (float)(1.0 / v29);
    }
    if ( (unsigned int)sub_14002B880(
                         (unsigned int)v42,
                         (unsigned int)&v37,
                         (unsigned int)&v43,
                         a3,
                         a4,
                         v11,
                         (__int64)v41,
                         (__int64)v40,
                         (__int64)v39) )
    {
      v30 = v43;
      if ( v43 < a1[7] )
      {
        v31 = v42[1];
        *a1 = *(float *)v42;
        v32 = v42[2];
        *((_DWORD *)a1 + 1) = v31;
        v33 = v37;
        *((_DWORD *)a1 + 2) = v32;
        v34 = HIDWORD(v37);
        *((_DWORD *)a1 + 3) = v33;
        v35 = v38;
        *((_DWORD *)a1 + 4) = v34;
        a1[5] = v35;
        a1[7] = v30;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}

