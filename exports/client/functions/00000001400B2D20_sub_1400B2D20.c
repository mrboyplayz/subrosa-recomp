/* Address: 0x1400b2d20 | Name: sub_1400B2D20 | Size: 323 bytes */
__int64 __fastcall sub_1400B2D20(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4

  v6 = 28664LL * a1;
  result = a2;
  v8 = v6 + 312LL * a3;
  v9 = v6 + 312LL * a2;
  v10 = (float)(*(float *)((char *)&dword_140404A6C[280651461] + v9)
              - *(float *)((char *)&dword_140404A6C[280651461] + v8))
      * a6;
  v11 = (float)(*(float *)((char *)&dword_140404A6C[280651462] + v9)
              - *(float *)((char *)&dword_140404A6C[280651462] + v8))
      * a6;
  v12 = (float)(*(float *)((char *)&dword_140404A6C[280651463] + v9)
              - *(float *)((char *)&dword_140404A6C[280651463] + v8))
      * a6;
  v13 = *a4 - v10;
  v14 = a4[1] - v11;
  v15 = a4[2] - v12;
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  if ( v16 > a5 )
  {
    v17 = (float)(fminf(v16 - a5, a5) * 0.5) + a5;
    if ( v16 == 0.0 )
    {
      v18 = 0.0;
      v19 = 0.0;
      v20 = 0.0;
    }
    else
    {
      v18 = v13 * (float)(1.0 / v16);
      v19 = v14 * (float)(1.0 / v16);
      v20 = v15 * (float)(1.0 / v16);
    }
    *a4 = (float)(v18 * v17) + v10;
    a4[1] = (float)(v19 * v17) + v11;
    a4[2] = (float)(v20 * v17) + v12;
  }
  return result;
}

