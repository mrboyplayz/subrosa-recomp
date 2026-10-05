/* Address: 0x1401a9ee0 | Name: sub_1401A9EE0 | Size: 328 bytes */
__int64 __fastcall sub_1401A9EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  float v9; // [rsp+24h] [rbp-34h]
  float v10; // [rsp+28h] [rbp-30h]

  v9 = *(float *)(a4 + 4LL * a5);
  v10 = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) + a5));
  v6 = sqrt((float)((float)((float)(v9 * v9) + 1.0e-15) + (float)(v10 * v10)));
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a2 + 4LL * i) = (float)((float)(v9 / (float)(v6 + 1.0e-15)) * *(float *)(a2 + 4LL * i))
                             + (float)((float)(v10 / (float)(v6 + 1.0e-15)) * *(float *)(a3 + 4LL * i));
  }
  return result;
}

