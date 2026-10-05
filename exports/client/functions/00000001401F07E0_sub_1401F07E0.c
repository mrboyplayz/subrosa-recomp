/* Address: 0x1401f07e0 | Name: sub_1401F07E0 | Size: 901 bytes */
__int64 __fastcall sub_1401F07E0(__int64 a1, int a2, int a3, int a4, int *a5, _DWORD *a6, _BYTE *a7, int a8)
{
  int k; // [rsp+40h] [rbp-18h]
  int m; // [rsp+40h] [rbp-18h]
  int i; // [rsp+44h] [rbp-14h]
  int j; // [rsp+48h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+8h]

  v13 = a1;
  if ( a3 > 255 || a3 < 1 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 272) = -1;
  if ( a4 )
  {
    if ( a4 == 1 && a3 <= 8 )
    {
      *a5 = dword_140281E80[4 * a3 - 4];
      *a6 = dword_140281E80[4 * a3 - 3];
      for ( i = 0; i < a3; ++i )
        a7[i] = *((_BYTE *)&dword_140281E80[4 * a3 - 2] + i);
      if ( a3 >= 6 )
        *(_DWORD *)(a1 + 272) = *a5 - 1;
    }
    else if ( a4 == 255 )
    {
      *a5 = a3;
      *a6 = 0;
      for ( j = 0; j < a3; ++j )
        a7[j] = j;
    }
    else
    {
      if ( a4 != 2 )
        return 4294967291LL;
      if ( !(unsigned int)sub_1401F63C0((unsigned int)a3, a5, a6) )
        return 0xFFFFFFFFLL;
      for ( k = 0; k < *a5 - *a6; ++k )
        a7[k] = k + 2 * *(_BYTE *)a6;
      for ( m = 0; m < 2 * *a6; ++m )
        a7[*a5 - *a6 + m] = m;
    }
  }
  else if ( a3 == 1 )
  {
    *a5 = 1;
    *a6 = 0;
    *a7 = 0;
  }
  else
  {
    if ( a3 != 2 )
      return 4294967291LL;
    *a5 = 1;
    *a6 = 1;
    *a7 = 0;
    a7[1] = 1;
  }
  if ( a3 > 2 && a4 == 1 )
    return sub_1401F7450(v13, a2, a3, *a5, *a6, (__int64)a7, a8, 1);
  if ( a4 == 2 )
    return sub_1401F7450(v13, a2, a3, *a5, *a6, (__int64)a7, a8, 2);
  return sub_1401F7450(v13, a2, a3, *a5, *a6, (__int64)a7, a8, 0);
}

