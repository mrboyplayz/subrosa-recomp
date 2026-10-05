/* Address: 0x1401f63c0 | Name: sub_1401F63C0 | Size: 208 bytes */
__int64 __fastcall sub_1401F63C0(signed int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-24h]

  if ( a1 < 1 || a1 > 227 )
    return 0;
  v5 = sub_1401A6AE0(a1);
  v4 = a1 - v5 * v5;
  if ( v4 && v4 != 2 )
    return 0;
  if ( a2 )
    *a2 = (a1 != v5 * v5) + v5 * v5;
  if ( a3 )
    *a3 = a1 != v5 * v5;
  return 1;
}

