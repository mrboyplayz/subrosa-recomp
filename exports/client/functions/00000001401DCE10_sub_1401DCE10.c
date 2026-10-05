/* Address: 0x1401dce10 | Name: sub_1401DCE10 | Size: 358 bytes */
__int64 __fastcall sub_1401DCE10(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]
  int v6; // [rsp+8h] [rbp-10h]

  *a1 = 0x10000;
  a1[1] = -*a2;
  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    v6 = a2[2 * i];
    a1[i + 1] = 2 * a1[i - 1] - (((((int)a1[i] * (__int64)v6) >> 15) + 1) >> 1);
    for ( j = i; j > 1; --j )
      a1[j] += a1[j - 2] - (((((int)a1[j - 1] * (__int64)v6) >> 15) + 1) >> 1);
    a1[1] -= v6;
  }
  return result;
}

