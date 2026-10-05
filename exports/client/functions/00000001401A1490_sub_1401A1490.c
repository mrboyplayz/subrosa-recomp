/* Address: 0x1401a1490 | Name: sub_1401A1490 | Size: 264 bytes */
__int64 __fastcall sub_1401A1490(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  signed int i; // [rsp+20h] [rbp-18h]
  signed int j; // [rsp+20h] [rbp-18h]
  int k; // [rsp+20h] [rbp-18h]

  for ( i = 0; i < (int)*a1; ++i )
    *(_QWORD *)(a3 + 8LL * *(__int16 *)(*((_QWORD *)a1 + 6) + 2LL * i)) = *(_QWORD *)(a2 + 8LL * i);
  for ( j = 0; j < (int)*a1; ++j )
    *(float *)(a3 + 8LL * j + 4) = -*(float *)(a3 + 8LL * j + 4);
  sub_1401A15A0(a1, a3);
  for ( k = 0; ; ++k )
  {
    result = *a1;
    if ( k >= (int)result )
      break;
    *(float *)(a3 + 8LL * k + 4) = -*(float *)(a3 + 8LL * k + 4);
  }
  return result;
}

