/* Address: 0x1401e99e0 | Name: sub_1401E99E0 | Size: 1701 bytes */
__int64 __fastcall sub_1401E99E0(char *a1, int a2, int a3, _BYTE *a4, __int64 a5, __int16 *a6, _DWORD *a7, _DWORD *a8)
{
  int j; // [rsp+20h] [rbp-48h]
  int i; // [rsp+20h] [rbp-48h]
  int k; // [rsp+20h] [rbp-48h]
  int m; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  char v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  char v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+34h] [rbp-34h]
  int v18; // [rsp+34h] [rbp-34h]
  int v19; // [rsp+34h] [rbp-34h]
  BOOL v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+3Ch] [rbp-2Ch]
  int v22; // [rsp+40h] [rbp-28h]
  int v23; // [rsp+44h] [rbp-24h]
  int v24; // [rsp+48h] [rbp-20h]
  int v25; // [rsp+54h] [rbp-14h]
  int v26; // [rsp+58h] [rbp-10h]
  char *v28; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+78h] [rbp+10h]
  int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+78h] [rbp+10h]

  v23 = 0;
  v26 = (int)a1;
  if ( !a6 || a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 4294967292LL;
  v25 = sub_1401E2D90(a1, 48000);
  v20 = 0;
  v16 = *a1;
  v28 = a1 + 1;
  v30 = a2 - 1;
  v15 = v30;
  v21 = v16 & 3;
  if ( (v16 & 3) != 0 )
  {
    if ( v21 == 1 )
    {
      v13 = 2;
      v20 = 1;
      if ( !a3 )
      {
        if ( (v30 & 1) != 0 )
          return 4294967292LL;
        v15 = v30 / 2;
        *a6 = v30 / 2;
      }
    }
    else if ( v21 == 2 )
    {
      v13 = 2;
      v17 = sub_1401F8490(v28, (unsigned int)v30, a6);
      v30 -= v17;
      if ( *a6 < 0 || *a6 > v30 )
        return 4294967292LL;
      v28 += v17;
      v15 = v30 - *a6;
    }
    else
    {
      if ( v30 < 1 )
        return 4294967292LL;
      v14 = *v28++;
      v13 = v14 & 0x3F;
      if ( (v14 & 0x3F) == 0 || v13 * v25 > 5760 )
        return 4294967292LL;
      --v30;
      if ( (v14 & 0x40) != 0 )
      {
        while ( v30 > 0 )
        {
          v22 = (unsigned __int8)*v28++;
          v31 = v30 - 1;
          if ( v22 == 255 )
            v24 = 254;
          else
            v24 = v22;
          v30 = v31 - v24;
          v23 += v24;
          if ( v22 != 255 )
            goto LABEL_32;
        }
        return 4294967292LL;
      }
LABEL_32:
      if ( v30 < 0 )
        return 4294967292LL;
      v20 = v14 >= 0;
      if ( v14 >= 0 )
      {
        if ( !a3 )
        {
          v15 = v30 / v13;
          if ( v13 * (v30 / v13) != v30 )
            return 4294967292LL;
          for ( i = 0; i < v13 - 1; ++i )
            a6[i] = v15;
        }
      }
      else
      {
        v15 = v30;
        for ( j = 0; j < v13 - 1; ++j )
        {
          v18 = sub_1401F8490(v28, (unsigned int)v30, &a6[j]);
          v30 -= v18;
          if ( a6[j] < 0 || a6[j] > v30 )
            return 4294967292LL;
          v28 += v18;
          v15 -= a6[j] + v18;
        }
        if ( v15 < 0 )
          return 4294967292LL;
      }
    }
  }
  else
  {
    v13 = 1;
  }
  if ( a3 )
  {
    v19 = sub_1401F8490(v28, (unsigned int)v30, &a6[v13 - 1]);
    v32 = v30 - v19;
    if ( a6[v13 - 1] < 0 || a6[v13 - 1] > v32 )
      return 4294967292LL;
    v28 += v19;
    if ( v20 )
    {
      if ( v13 * a6[v13 - 1] > v32 )
        return 4294967292LL;
      for ( k = 0; k < v13 - 1; ++k )
        a6[k] = a6[v13 - 1];
    }
    else if ( a6[v13 - 1] + v19 > v15 )
    {
      return 4294967292LL;
    }
  }
  else
  {
    if ( v15 > 1275 )
      return 4294967292LL;
    a6[v13 - 1] = v15;
  }
  if ( a7 )
    *a7 = (_DWORD)v28 - v26;
  for ( m = 0; m < v13; ++m )
  {
    if ( a5 )
      *(_QWORD *)(a5 + 8LL * m) = v28;
    v28 += a6[m];
  }
  if ( a8 )
    *a8 = (_DWORD)v28 - v26 + v23;
  if ( a4 )
    *a4 = v16;
  return (unsigned int)v13;
}

