/* Address: 0x1401dd7a0 | Name: sub_1401DD7A0 | Size: 249 bytes */
__int64 __fastcall sub_1401DD7A0(_DWORD *a1, __int64 a2, __int64 a3, __int16 *a4, unsigned int a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int v7; // [rsp+4h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    v7 = *a1 + (*(__int16 *)(a3 + 2LL * i) << 8);
    *(_DWORD *)(a2 + 4LL * i) = v7;
    v7 *= 4;
    *a1 = ((*a4 * (__int64)v7) >> 16) + a1[1];
    a1[1] = (a4[1] * (__int64)v7) >> 16;
  }
  return result;
}

