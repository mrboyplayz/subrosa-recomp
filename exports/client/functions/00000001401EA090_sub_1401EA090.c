/* Address: 0x1401ea090 | Name: sub_1401EA090 | Size: 1876 bytes */
__int64 __fastcall sub_1401EA090(__int64 a1, int a2, int a3, _BYTE *a4, int a5, int a6, int a7)
{
  int i; // [rsp+20h] [rbp-58h]
  int j; // [rsp+20h] [rbp-58h]
  int k; // [rsp+20h] [rbp-58h]
  int m; // [rsp+20h] [rbp-58h]
  int n; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+24h] [rbp-54h]
  int v14; // [rsp+24h] [rbp-54h]
  int v15; // [rsp+24h] [rbp-54h]
  _BYTE *v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+30h] [rbp-48h]
  __int16 *v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+58h] [rbp-20h]
  int v21; // [rsp+5Ch] [rbp-1Ch]
  __int64 v22; // [rsp+68h] [rbp-10h]

  if ( a2 < 0 || a2 >= a3 || a3 > *(_DWORD *)(a1 + 4) )
    return 0xFFFFFFFFLL;
  v17 = a3 - a2;
  v18 = (__int16 *)(a1 + 2LL * a2 + 392);
  v22 = a1 + 8LL * a2 + 8;
  if ( a6 )
    v13 = (v18[v17 - 1] >= 252) + 1;
  else
    v13 = 0;
  v16 = a4;
  if ( v17 == 1 )
  {
    v13 += *v18 + 1;
    if ( v13 > a5 )
      return 4294967294LL;
    *a4 = *(_BYTE *)a1 & 0xFC;
    v16 = a4 + 1;
  }
  else if ( v17 == 2 )
  {
    if ( *(__int16 *)(a1 + 2LL * a2 + 394) == *(__int16 *)(a1 + 2LL * a2 + 392) )
    {
      v13 += 2 * *v18 + 1;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 1;
      v16 = a4 + 1;
    }
    else
    {
      v13 += *(__int16 *)(a1 + 2LL * a2 + 394)
           + *(__int16 *)(a1 + 2LL * a2 + 392)
           + (*(__int16 *)(a1 + 2LL * a2 + 392) >= 252)
           + 2;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 2;
      v16 = &a4[(int)sub_1401E5230((unsigned int)*v18, a4 + 1) + 1];
    }
  }
  if ( v17 > 2 || a7 && v13 < a5 )
  {
    if ( a6 )
      v14 = (v18[v17 - 1] >= 252) + 1;
    else
      v14 = 0;
    v19 = 0;
    for ( i = 1; i < v17; ++i )
    {
      if ( v18[i] != *v18 )
      {
        v19 = 1;
        break;
      }
    }
    if ( v19 )
    {
      v15 = v14 + 2;
      for ( j = 0; j < v17 - 1; ++j )
        v15 += v18[j] + (v18[j] >= 252) + 1;
      v13 = v18[v17 - 1] + v15;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = v17 | 0x80;
      v16 = a4 + 2;
    }
    else
    {
      v13 = v14 + *v18 * v17 + 2;
      if ( v13 > a5 )
        return 4294967294LL;
      *a4 = *(_BYTE *)a1 & 0xFC | 3;
      a4[1] = v17;
      v16 = a4 + 2;
    }
    if ( a7 )
      v20 = a5 - v13;
    else
      v20 = 0;
    if ( v20 )
    {
      a4[1] |= 0x40u;
      v21 = (v20 - 1) / 255;
      for ( k = 0; k < v21; ++k )
        *v16++ = -1;
      *v16++ = v20 + v21 - 1;
      v13 += v20;
    }
    if ( v19 )
    {
      for ( m = 0; m < v17 - 1; ++m )
        v16 += (int)sub_1401E5230((unsigned int)v18[m], v16);
    }
  }
  if ( a6 )
    v16 += (int)sub_1401E5230((unsigned int)v18[v17 - 1], v16);
  for ( n = 0; n < v17; ++n )
  {
    MEMORY[0x1401FC920](v16, *(_QWORD *)(v22 + 8LL * n));
    v16 += v18[n];
  }
  if ( a7 )
  {
    while ( v16 < &a4[a5] )
      *v16++ = 0;
  }
  return (unsigned int)v13;
}

