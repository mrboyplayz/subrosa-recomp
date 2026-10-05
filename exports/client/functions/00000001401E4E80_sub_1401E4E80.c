/* Address: 0x1401e4e80 | Name: sub_1401E4E80 | Size: 384 bytes */
__int64 __fastcall sub_1401E4E80(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, int a7)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int m; // [rsp+0h] [rbp-18h]
  int k; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a2 + 4LL * i) = *(float *)(a1 + 4LL * (a5 + a7 * (a4 + i))) * 32768.0;
  }
  if ( a6 <= -1 )
  {
    if ( a6 == -2 )
    {
      for ( j = 1; ; ++j )
      {
        result = (unsigned int)a7;
        if ( j >= a7 )
          break;
        for ( k = 0; k < a3; ++k )
          *(float *)(a2 + 4LL * k) = *(float *)(a2 + 4LL * k)
                                   + (float)(*(float *)(a1 + 4LL * (j + a7 * (a4 + k))) * 32768.0);
      }
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a3;
      if ( m >= a3 )
        break;
      *(float *)(a2 + 4LL * m) = *(float *)(a2 + 4LL * m)
                               + (float)(*(float *)(a1 + 4LL * (a6 + a7 * (a4 + m))) * 32768.0);
    }
  }
  return result;
}

