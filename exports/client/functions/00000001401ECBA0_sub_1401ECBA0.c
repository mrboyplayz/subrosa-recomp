/* Address: 0x1401ecba0 | Name: sub_1401ECBA0 | Size: 470 bytes */
__int64 __fastcall sub_1401ECBA0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]
  int v15; // [rsp+58h] [rbp-10h]
  unsigned int v16; // [rsp+5Ch] [rbp-Ch]

  if ( a3 )
  {
    if ( 95 * a9 / 50 >= a4 - (a4 & 1) )
      v15 = a4 - (a4 & 1);
    else
      v15 = 95 * a9 / 50;
    v13 = v15 - a1[1860];
    v14 = a1[1860];
    while ( v13 > 0 )
    {
      if ( a9 / 50 >= v13 )
        v16 = v13;
      else
        v16 = a9 / 50;
      sub_1401ED2D0(a1, a2, a3, v16, v14, a6, a7, a8, a10, a11);
      v14 += a9 / 50;
      v13 -= a9 / 50;
    }
    a1[1860] = v15;
    a1[1860] -= a5;
  }
  return sub_1401EBF50(a1, a12, a5);
}

