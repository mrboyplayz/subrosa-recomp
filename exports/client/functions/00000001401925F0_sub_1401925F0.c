/* Address: 0x1401925f0 | Name: sub_1401925F0 | Size: 388 bytes */
__int64 __fastcall sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // r11
  int v6; // xmm0_4
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edx
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4

  v4 = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    v6 = -1082130432;
  else
    v6 = 1065353216;
  LODWORD(a2[*a1 & 3]) = v6;
  v8 = 1;
  result = (unsigned int)((1 << a3) - 1);
  v10 = (1 << a3) - 1;
  v11 = (double)v10;
  if ( v4 )
  {
    result = (unsigned int)v10 & (a1[1] >> 1);
    v12 = 1.0 / v11;
    if ( (a1[1] & 1) != 0 )
      v12 = -1.0 / v11;
    v8 = 2;
    *a2 = (double)(int)result * v12;
  }
  if ( (_DWORD)v4 != 1 )
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v13 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v13 = -1.0 / v11 * (double)(int)result;
    ++v8;
    a2[1] = v13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v15 = a2[2];
  }
  else
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v14 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v14 = -1.0 / v11 * (double)(int)result;
    v15 = v14;
  }
  v16 = a2[1];
  v17 = *a2;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v15 * v15));
  if ( v18 == 0.0 )
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v19 = v15 * (float)(1.0 / v18);
    v20 = v16 * (float)(1.0 / v18);
    v21 = v17 * (float)(1.0 / v18);
  }
  *a2 = v21;
  a2[1] = v20;
  a2[2] = v19;
  return result;
}

