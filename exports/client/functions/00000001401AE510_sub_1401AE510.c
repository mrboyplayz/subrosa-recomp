/* Address: 0x1401ae510 | Name: sub_1401AE510 | Size: 1656 bytes */
__int64 __fastcall sub_1401AE510(__int64 a1, int a2, int a3, float *a4, _DWORD *a5, int a6, _DWORD *a7)
{
  void *v7; // rsp
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  int j; // [rsp+20h] [rbp+0h] BYREF
  float v14; // [rsp+24h] [rbp+4h]
  int v15; // [rsp+28h] [rbp+8h]
  int *v16; // [rsp+30h] [rbp+10h]
  int v17; // [rsp+38h] [rbp+18h]
  int v18; // [rsp+3Ch] [rbp+1Ch]
  float v19; // [rsp+40h] [rbp+20h]
  int i; // [rsp+44h] [rbp+24h]
  float v21; // [rsp+48h] [rbp+28h]
  float v22; // [rsp+4Ch] [rbp+2Ch]
  float v23; // [rsp+50h] [rbp+30h]
  BOOL v24; // [rsp+54h] [rbp+34h]
  float v25; // [rsp+58h] [rbp+38h]
  float v26; // [rsp+5Ch] [rbp+3Ch]
  float v27; // [rsp+60h] [rbp+40h]
  float v28; // [rsp+64h] [rbp+44h]
  float v29; // [rsp+68h] [rbp+48h]
  float v30; // [rsp+6Ch] [rbp+4Ch]
  BOOL v31; // [rsp+70h] [rbp+50h]
  float v32; // [rsp+74h] [rbp+54h]
  float v33; // [rsp+78h] [rbp+58h]
  float v34; // [rsp+7Ch] [rbp+5Ch]
  int v35; // [rsp+80h] [rbp+60h]
  double v36; // [rsp+88h] [rbp+68h]
  double v37; // [rsp+90h] [rbp+70h]
  double v38; // [rsp+98h] [rbp+78h]
  double X; // [rsp+A0h] [rbp+80h]
  __int64 v40; // [rsp+A8h] [rbp+88h]

  v24 = 0;
  v18 = 0;
  v29 = 0.0625;
  v7 = alloca(sub_1401F89D0());
  v16 = &j;
  *a7 = 0;
  if ( a6 )
    v29 = 0.03125;
  v17 = a2 / 2;
  for ( i = 0; i < a3; ++i )
  {
    v15 = 0;
    v14 = 0.0;
    v27 = 0.0;
    for ( j = 0; j < a2; ++j )
    {
      v25 = *(float *)(a1 + 4LL * (a2 * i + j));
      v26 = v14 + v25;
      v14 = (float)(v27 + (float)(v14 + v25)) - (float)(2.0 * v25);
      v27 = v25 - (float)(0.5 * v26);
      *(float *)&v16[j] = v26;
    }
    MEMORY[0x1401FCD30](v16, 0, 48);
    v19 = 0.0;
    v14 = 0.0;
    for ( j = 0; j < v17; ++j )
    {
      v28 = (float)(*(float *)&v16[2 * j] * *(float *)&v16[2 * j])
          + (float)(*(float *)&v16[2 * j + 1] * *(float *)&v16[2 * j + 1]);
      v19 = v19 + v28;
      *(float *)&v16[j] = v14 + (float)(v29 * (float)(v28 - v14));
      v14 = *(float *)&v16[j];
    }
    v14 = 0.0;
    v21 = 0.0;
    for ( j = v17 - 1; j >= 0; --j )
    {
      *(float *)&v16[j] = v14 + (float)(0.125 * (float)(*(float *)&v16[j] - v14));
      v14 = *(float *)&v16[j];
      if ( v21 <= v14 )
        v30 = v14;
      else
        v30 = v21;
      v21 = v30;
    }
    v8 = sqrt((float)(v19 * v21) * 0.5 * (double)v17);
    v19 = v8;
    v22 = (float)v17 / (float)(v8 + 1.0e-15);
    v15 = 0;
    for ( j = 12; j < v17 - 5; j += 4 )
    {
      if ( floor((float)((float)(64.0 * v22) * (float)(*(float *)&v16[j] + 1.0e-15))) <= 127.0 )
        v36 = floor((float)((float)(64.0 * v22) * (float)(*(float *)&v16[j] + 1.0e-15)));
      else
        v36 = 127.0;
      if ( v36 >= 0.0 )
      {
        if ( floor((float)((float)(64.0 * v22) * (float)(*(float *)&v16[j] + 1.0e-15))) <= 127.0 )
          v37 = floor((float)((float)(64.0 * v22) * (float)(*(float *)&v16[j] + 1.0e-15)));
        else
          v37 = 127.0;
        v38 = v37;
      }
      else
      {
        v38 = 0.0;
      }
      v35 = (int)v38;
      v15 += byte_140279C00[(int)v38];
    }
    v15 = (v15 << 8) / (6 * (v17 - 17));
    if ( v15 > v18 )
    {
      *a5 = i;
      v18 = v15;
    }
  }
  v31 = v18 > 200;
  v24 = v31;
  if ( a6 && v24 && v18 < 600 )
  {
    v24 = 0;
    *a7 = 1;
  }
  v9 = sqrt((double)(27 * v18));
  if ( (float)(v9 - 42.0) >= 0.0 )
  {
    v10 = sqrt((double)(27 * v18));
    v32 = v10 - 42.0;
  }
  else
  {
    v32 = 0.0;
  }
  v23 = v32;
  if ( v32 <= 163.0 )
    v33 = v23;
  else
    v33 = 163.0;
  if ( (float)(0.0068999999 * v33) - 0.139 >= 0.0 )
  {
    if ( v23 <= 163.0 )
      v34 = v23;
    else
      v34 = 163.0;
    X = (float)(0.0068999999 * v34) - 0.139;
  }
  else
  {
    X = 0.0;
  }
  v11 = sqrt(X);
  *a4 = v11;
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v40);
}

