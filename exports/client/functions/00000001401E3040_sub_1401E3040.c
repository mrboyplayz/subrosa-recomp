/* Address: 0x1401e3040 | Name: sub_1401E3040 | Size: 1942 bytes */
__int64 __fastcall sub_1401E3040(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  int i; // [rsp+20h] [rbp-68h]
  int k; // [rsp+20h] [rbp-68h]
  int m; // [rsp+20h] [rbp-68h]
  int n; // [rsp+20h] [rbp-68h]
  int ii; // [rsp+20h] [rbp-68h]
  float *v13; // [rsp+28h] [rbp-60h]
  float v14; // [rsp+30h] [rbp-58h]
  float v15; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+34h] [rbp-54h]
  int v17; // [rsp+38h] [rbp-50h]
  int j; // [rsp+3Ch] [rbp-4Ch]
  float v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+44h] [rbp-44h]
  float v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  float v23; // [rsp+50h] [rbp-38h]
  int v24; // [rsp+54h] [rbp-34h]
  int v25; // [rsp+58h] [rbp-30h]
  BOOL v26; // [rsp+5Ch] [rbp-2Ch]
  float v27; // [rsp+64h] [rbp-24h]
  int v28; // [rsp+68h] [rbp-20h]
  int v29; // [rsp+6Ch] [rbp-1Ch]
  float v30; // [rsp+70h] [rbp-18h]
  float v31; // [rsp+74h] [rbp-14h]

  if ( a3 >= 1 && a2 >= 1 && a1 && a4 )
  {
    for ( i = 0; i < a3 * a2; ++i )
    {
      if ( *(float *)(a1 + 4LL * i) <= 2.0 )
        v23 = *(float *)(a1 + 4LL * i);
      else
        v23 = 2.0;
      if ( v23 >= -2.0 )
      {
        if ( *(float *)(a1 + 4LL * i) <= 2.0 )
          v24 = *(_DWORD *)(a1 + 4LL * i);
        else
          v24 = 0x40000000;
        v25 = v24;
      }
      else
      {
        v25 = -1073741824;
      }
      *(_DWORD *)(a1 + 4LL * i) = v25;
    }
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a3;
      if ( j >= a3 )
        break;
      v13 = (float *)(a1 + 4LL * j);
      v14 = *(float *)(a4 + 4LL * j);
      for ( k = 0; k < a2 && (float)(v13[a3 * k] * v14) < 0.0; ++k )
        v13[a3 * k] = v13[a3 * k] + (float)((float)(v14 * v13[a3 * k]) * v13[a3 * k]);
      v22 = 0;
      v30 = *v13;
      while ( 1 )
      {
        for ( m = v22; m < a2 && v13[a3 * m] <= 1.0 && v13[a3 * m] >= -1.0; ++m )
          ;
        if ( m == a2 )
          break;
        v20 = m;
        v16 = m;
        v17 = m;
        v5 = sub_140244390();
        v19 = v5;
        while ( v17 > 0 && (float)(v13[a3 * m] * v13[a3 * (v17 - 1)]) >= 0.0 )
          --v17;
        while ( v16 < a2 && (float)(v13[a3 * m] * v13[a3 * v16]) >= 0.0 )
        {
          v6 = sub_140244390();
          if ( v6 > v19 )
          {
            v7 = sub_140244390();
            v19 = v7;
            v20 = v16;
          }
          ++v16;
        }
        v26 = !v17 && (float)(v13[a3 * m] * *v13) >= 0.0;
        v15 = (float)((float)(v19 - 1.0) / (float)(v19 * v19))
            + (float)((float)((float)(v19 - 1.0) / (float)(v19 * v19)) * 0.00000023999999);
        if ( v13[a3 * m] > 0.0 )
          v15 = -v15;
        for ( n = v17; n < v16; ++n )
          v13[a3 * n] = v13[a3 * n] + (float)((float)(v15 * v13[a3 * n]) * v13[a3 * n]);
        if ( v26 && v20 >= 2 )
        {
          v21 = v30 - *v13;
          v31 = v21 / (float)v20;
          for ( ii = v22; ii < v20; ++ii )
          {
            v21 = v21 - v31;
            v13[a3 * ii] = v13[a3 * ii] + v21;
            if ( v13[a3 * ii] <= 1.0 )
              v27 = v13[a3 * ii];
            else
              v27 = 1.0;
            if ( v27 >= -1.0 )
            {
              if ( v13[a3 * ii] <= 1.0 )
                v28 = LODWORD(v13[a3 * ii]);
              else
                v28 = 1065353216;
              v29 = v28;
            }
            else
            {
              v29 = -1082130432;
            }
            LODWORD(v13[a3 * ii]) = v29;
          }
        }
        v22 = v16;
        if ( v16 == a2 )
          goto LABEL_66;
      }
      v15 = 0.0;
LABEL_66:
      *(float *)(a4 + 4LL * j) = v15;
    }
  }
  return result;
}

