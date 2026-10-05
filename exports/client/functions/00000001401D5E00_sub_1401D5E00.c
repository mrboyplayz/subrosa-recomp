/* Address: 0x1401d5e00 | Name: sub_1401D5E00 | Size: 136 bytes */
__int64 __fastcall sub_1401D5E00(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  float v6; // xmm0_4
  int i; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = a1 + 4LL * (int)(a4 - 1);
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v6 = sub_1401D0EF0(v8, a2, a3);
    *(float *)(a5 + 4LL * i) = v6;
    v8 -= 4;
  }
  return result;
}

