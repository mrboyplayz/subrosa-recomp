/* Address: 0x1401bd810 | Name: sub_1401BD810 | Size: 169 bytes */
__int64 __fastcall sub_1401BD810(__int64 a1, int a2)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v5; // [rsp+8h] [rbp-10h]

  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i >= a2 )
      break;
    v5 = *(__int16 *)(a1 + 2LL * i);
    for ( j = i - 1; j >= 0 && v5 < *(__int16 *)(a1 + 2LL * j); --j )
      *(_WORD *)(a1 + 2LL * (j + 1)) = *(_WORD *)(a1 + 2LL * j);
    *(_WORD *)(a1 + 2LL * (j + 1)) = v5;
  }
  return result;
}

