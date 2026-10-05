/* Address: 0x1400d9460 | Name: sub_1400D9460 | Size: 184 bytes */
__int64 __fastcall sub_1400D9460(_DWORD *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v6 = *a4 - *a6;
  v7 = a4[1] - a6[1];
  v8 = a4[2] - a6[2];
  v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  if ( v9 < a5 )
  {
    *a2 = (float)(1.0 / v9) * v6;
    a2[1] = (float)(1.0 / v9) * v7;
    a2[2] = (float)(1.0 / v9) * v8;
    *a1 = *(_DWORD *)a4;
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = *((_DWORD *)a4 + 2);
    *a3 = a5 - v9;
  }
  return 0;
}

