/* Address: 0x1401f81e0 | Name: sub_1401F81E0 | Size: 118 bytes */
__int64 __fastcall sub_1401F81E0(signed int a1, int a2, int *a3, int *a4, _DWORD *a5)
{
  if ( a2 != 3 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)sub_1401F8150(a1, a5) )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a3 = (a1 + 1) / 2;
  if ( a4 )
    *a4 = a1 / 2;
  return 0;
}

