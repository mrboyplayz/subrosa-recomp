/* Address: 0x1401a3f20 | Name: sub_1401A3F20 | Size: 289 bytes */
__int64 __fastcall sub_1401A3F20(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]
  float v7; // [rsp+Ch] [rbp-Ch]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a2 >> 1; ++j )
    {
      v6 = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + j * 2 * a3));
      v7 = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3));
      *(float *)(a1 + 4LL * (int)(i + j * 2 * a3)) = v6 + v7;
      *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3)) = v6 - v7;
    }
  }
  return result;
}

