/* Address: 0x1401d49f0 | Name: sub_1401D49F0 | Size: 515 bytes */
__int64 __fastcall sub_1401D49F0(float *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 result; // rax
  float v7; // xmm0_4
  int i; // [rsp+30h] [rbp-38h]
  float v9; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v12 = a3 - 4 * (*(_DWORD *)(a4 + 4LL * i) + 2);
    sub_1401D5B50(a3 - 4LL * (*(_DWORD *)(a4 + 4LL * i) + 2), a5, 5, a1);
    sub_1401D5E00(v12, a3, a5, 5, a2);
    v7 = sub_1401D1050(a3, a5 + 5);
    if ( v7 <= (float)((float)(0.015 * (float)(*a1 + a1[24])) + 1.0) )
      v9 = (float)(0.015 * (float)(*a1 + a1[24])) + 1.0;
    else
      v9 = v7;
    sub_1401D0C90((__int64)a1, 1.0 / v9, 25);
    sub_1401D0C90(a2, 1.0 / v9, 5);
    a3 += 4LL * (int)a5;
    a1 += 25;
    a2 += 20;
  }
  return result;
}

