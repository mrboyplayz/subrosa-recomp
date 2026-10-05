/* Address: 0x1401a6000 | Name: sub_1401A6000 | Size: 1477 bytes */
__int64 __fastcall sub_1401A6000(float *a1, _DWORD *a2, int a3, int a4)
{
  void *v4; // rsp
  void *v5; // rsp
  float v6; // xmm0_4
  double v7; // xmm0_8
  int v9; // [rsp+20h] [rbp+0h] BYREF
  float v10; // [rsp+24h] [rbp+4h]
  float v11; // [rsp+28h] [rbp+8h]
  int v12; // [rsp+2Ch] [rbp+Ch]
  int v13; // [rsp+30h] [rbp+10h]
  float v14; // [rsp+34h] [rbp+14h]
  float v15; // [rsp+38h] [rbp+18h]
  float *v16; // [rsp+40h] [rbp+20h]
  float v17; // [rsp+48h] [rbp+28h]
  float v18; // [rsp+4Ch] [rbp+2Ch]
  int i; // [rsp+50h] [rbp+30h]
  BOOL v20; // [rsp+54h] [rbp+34h]
  float v21; // [rsp+58h] [rbp+38h]
  float v22; // [rsp+5Ch] [rbp+3Ch]
  float v23; // [rsp+60h] [rbp+40h]
  int *v24; // [rsp+68h] [rbp+48h]
  __int64 v25; // [rsp+70h] [rbp+50h]

  v4 = alloca(sub_1401F89D0());
  v16 = (float *)&v9;
  v5 = alloca(sub_1401F89D0());
  v24 = &v9;
  v14 = 0.0;
  v9 = 0;
  do
  {
    v20 = a1[v9] < 0.0;
    v24[v9] = v20;
    v6 = sub_140244390();
    a1[v9] = v6;
    a2[v9] = 0;
    v16[v9++] = 0.0;
  }
  while ( v9 < a4 );
  v10 = 0.0;
  v15 = 0.0;
  v12 = a3;
  if ( a3 > a4 >> 1 )
  {
    v9 = 0;
    do
      v14 = v14 + a1[v9++];
    while ( v9 < a4 );
    if ( v14 <= 1.0e-15 || v14 >= 64.0 )
    {
      *a1 = 1.0;
      v9 = 1;
      do
        a1[v9++] = 0.0;
      while ( v9 < a4 );
      v14 = 1.0;
    }
    v23 = (float)((float)a3 + 0.80000001) * (float)(1.0 / v14);
    v9 = 0;
    do
    {
      v7 = floor((float)(v23 * a1[v9]));
      a2[v9] = (int)v7;
      v16[v9] = (float)(int)a2[v9];
      v10 = v10 + (float)(v16[v9] * v16[v9]);
      v15 = v15 + (float)(a1[v9] * v16[v9]);
      v16[v9] = v16[v9] * 2.0;
      v12 -= a2[v9++];
    }
    while ( v9 < a4 );
  }
  if ( v12 > a4 + 3 )
  {
    v18 = (float)v12;
    v10 = v10 + (float)((float)v12 * (float)v12);
    v10 = v10 + (float)((float)v12 * *v16);
    *a2 += v12;
    v12 = 0;
  }
  for ( i = 0; i < v12; ++i )
  {
    v13 = 0;
    v10 = v10 + 1.0;
    v11 = v15 + *a1;
    v17 = v10 + *v16;
    v11 = v11 * v11;
    v21 = v17;
    v22 = v11;
    v9 = 1;
    do
    {
      v11 = v15 + a1[v9];
      v17 = v10 + v16[v9];
      v11 = v11 * v11;
      if ( (float)(v21 * v11) > (float)(v17 * v22) )
      {
        v21 = v17;
        v22 = v11;
        v13 = v9;
      }
      ++v9;
    }
    while ( v9 < a4 );
    v15 = v15 + a1[v13];
    v10 = v10 + v16[v13];
    v16[v13] = v16[v13] + 2.0;
    ++a2[v13];
  }
  v9 = 0;
  do
  {
    a2[v9] = v24[v9] + (-v24[v9] ^ a2[v9]);
    ++v9;
  }
  while ( v9 < a4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v25);
}

