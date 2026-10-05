/* Address: 0x1401f8150 | Name: sub_1401F8150 | Size: 126 bytes */
__int64 __fastcall sub_1401F8150(signed int a1, _DWORD *a2)
{
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+24h] [rbp-14h]

  if ( a1 < 1 || a1 > 227 )
    return 0xFFFFFFFFLL;
  v3 = sub_1401A6AE0(a1);
  v4 = a1 - v3 * v3;
  if ( v4 && v4 != 2 )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = v3;
  return 0;
}

