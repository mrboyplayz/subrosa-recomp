/* Address: 0x1401f2860 | Name: sub_1401F2860 | Size: 170 bytes */
__int64 __fastcall sub_1401F2860(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a4; ++j )
      *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i)
                               + (float)((float)*(char *)(a2 + i + a5 * j) * *(float *)(a6 + 4LL * j));
  }
  return result;
}

