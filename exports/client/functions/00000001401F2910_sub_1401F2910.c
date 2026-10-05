/* Address: 0x1401f2910 | Name: sub_1401F2910 | Size: 274 bytes */
__int64 __fastcall sub_1401F2910(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, __int64 a6, int a7)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-Ch]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    for ( j = 0; j < a4; ++j )
    {
      v10 = *(float *)(a6 + 4LL * 48000 / a7 * j) * *(float *)(a6 + 4LL * 48000 / a7 * j);
      *(float *)(a3 + 4LL * (int)(i + a5 * j)) = (float)(v10 * *(float *)(a2 + 4LL * (int)(i + a5 * j)))
                                               + (float)((float)(1.0 - v10) * *(float *)(a1 + 4LL * (int)(i + a5 * j)));
    }
  }
  return result;
}

