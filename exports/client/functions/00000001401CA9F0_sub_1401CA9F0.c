/* Address: 0x1401ca9f0 | Name: sub_1401CA9F0 | Size: 167 bytes */
int *__fastcall sub_1401CA9F0(__int64 a1, __int64 a2, int a3, int *a4)
{
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]
  int v7; // [rsp+8h] [rbp-10h]

  for ( i = 255; i > a3; i >>= 1 )
    ;
  v7 = *a4;
  for ( j = 0; j < a3; ++j )
  {
    v7 = 196314165 * v7 + 907633515;
    *(_DWORD *)(a1 + 4LL * j) = *(_DWORD *)(a2 + 4LL * (i & (v7 >> 24)));
  }
  *a4 = v7;
  return a4;
}

