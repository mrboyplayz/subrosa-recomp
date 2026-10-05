/* Address: 0x1401d0150 | Name: sub_1401D0150 | Size: 2861 bytes */
__int64 __fastcall sub_1401D0150(__int64 a1, __int64 a2, float a3, int a4, int a5, int a6)
{
  float v6; // xmm0_4
  float v7; // xmm0_4
  __int64 v9; // [rsp+0h] [rbp-498h] BYREF
  int k; // [rsp+20h] [rbp-478h]
  int j; // [rsp+24h] [rbp-474h]
  int i; // [rsp+28h] [rbp-470h]
  double v13; // [rsp+30h] [rbp-468h]
  double v14; // [rsp+38h] [rbp-460h]
  __int64 v15; // [rsp+40h] [rbp-458h]
  double v16; // [rsp+48h] [rbp-450h]
  double v17; // [rsp+50h] [rbp-448h]
  double v18; // [rsp+58h] [rbp-440h]
  int v19; // [rsp+60h] [rbp-438h]
  double v20; // [rsp+68h] [rbp-430h]
  double v21; // [rsp+70h] [rbp-428h]
  double v22; // [rsp+78h] [rbp-420h]
  double v23; // [rsp+80h] [rbp-418h]
  double v24; // [rsp+88h] [rbp-410h]
  __int64 v25; // [rsp+90h] [rbp-408h]
  double v26[24]; // [rsp+A0h] [rbp-3F8h]
  double v27[26]; // [rsp+160h] [rbp-338h]
  double v28[26]; // [rsp+230h] [rbp-268h]
  double v29[24]; // [rsp+300h] [rbp-198h] BYREF
  _QWORD v30[27]; // [rsp+3C0h] [rbp-D8h] BYREF

  v20 = sub_1401D1050(a2, (unsigned int)(a4 * a5));
  MEMORY[0x1401FCD30](v29, 0, 192);
  for ( i = 0; i < a5; ++i )
  {
    v15 = a2 + 4LL * a4 * i;
    for ( j = 1; j < a6 + 1; ++j )
    {
      v25 = j - 1;
      v29[v25] = v29[v25] + sub_1401D0EF0(v15, v15 + 4LL * j, (unsigned int)(a4 - j));
    }
  }
  MEMORY[0x1401FC920](v30, v29);
  v24 = v20 + 0.000009999999747378752 * v20 + 9.999999717180685e-10;
  v28[0] = v24;
  v27[0] = v24;
  v21 = 1.0;
  v19 = 0;
  for ( j = 0; j < a6; ++j )
  {
    for ( i = 0; i < a5; ++i )
    {
      v15 = a2 + 4LL * a4 * i;
      v13 = *(float *)(v15 + 4LL * j);
      v16 = *(float *)(v15 + 4LL * (a4 - j - 1));
      for ( k = 0; k < j; ++k )
      {
        v29[k] = v29[k] - (float)(*(float *)(v15 + 4LL * j) * *(float *)(v15 + 4LL * (j - k - 1)));
        *(double *)&v30[k] = *(double *)&v30[k]
                           - (float)(*(float *)(v15 + 4LL * (a4 - j - 1)) * *(float *)(v15 + 4LL * (k + a4 - j)));
        v14 = v26[k];
        v13 = v13 + *(float *)(v15 + 4LL * (j - k - 1)) * v14;
        v16 = v16 + *(float *)(v15 + 4LL * (k + a4 - j)) * v14;
      }
      for ( k = 0; k <= j; ++k )
      {
        v28[k] = v28[k] - v13 * *(float *)(v15 + 4LL * (j - k));
        v27[k] = v27[k] - v16 * *(float *)(v15 + 4LL * (a4 - j + k - 1));
      }
    }
    v13 = v29[j];
    v16 = *(double *)&v30[j];
    for ( k = 0; k < j; ++k )
    {
      v14 = v26[k];
      v13 = v13 + *(double *)&v30[j - k - 1] * v14;
      v16 = v16 + v29[j - k - 1] * v14;
    }
    v28[j + 1] = v13;
    v27[j + 1] = v16;
    v22 = v27[j + 1];
    v23 = v27[0];
    v18 = v28[0];
    for ( k = 0; k < j; ++k )
    {
      v14 = v26[k];
      v22 = v22 + v27[j - k] * v14;
      v23 = v23 + v27[k + 1] * v14;
      v18 = v18 + v28[k + 1] * v14;
    }
    v17 = -2.0 * v22 / (v18 + v23);
    v13 = v21 * (1.0 - v17 * v17);
    if ( a3 < v13 )
    {
      v21 = v13;
    }
    else
    {
      v17 = sqrt(1.0 - a3 / v21);
      if ( v22 > 0.0 )
        v17 = -v17;
      v21 = a3;
      v19 = 1;
    }
    for ( k = 0; k < (j + 1) >> 1; ++k )
    {
      v13 = v26[k];
      v16 = v26[j - k - 1];
      v26[k] = v13 + v17 * v16;
      v26[j - k - 1] = v16 + v17 * v13;
    }
    v26[j] = v17;
    if ( v19 )
    {
      for ( k = j + 1; k < a6; ++k )
        v26[k] = 0.0;
      break;
    }
    for ( k = 0; k <= j + 1; ++k )
    {
      v13 = v28[k];
      v28[k] = v28[k] + v17 * v27[j - k + 1];
      v27[j - k + 1] = v27[j - k + 1] + v17 * v13;
    }
  }
  if ( v19 )
  {
    for ( k = 0; k < a6; ++k )
    {
      v6 = -v26[k];
      *(float *)(a1 + 4LL * k) = v6;
    }
    for ( i = 0; i < a5; ++i )
      v20 = v20 - sub_1401D1050(a2 + 4LL * a4 * i, (unsigned int)a6);
    v18 = v20 * v21;
  }
  else
  {
    v18 = v28[0];
    v13 = 1.0;
    for ( k = 0; k < a6; ++k )
    {
      v14 = v26[k];
      v18 = v18 + v28[k + 1] * v14;
      v13 = v13 + v14 * v14;
      v7 = -v14;
      *(float *)(a1 + 4LL * k) = v7;
    }
    v18 = v18 - 0.000009999999747378752 * v20 * v13;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v30[24]);
}

