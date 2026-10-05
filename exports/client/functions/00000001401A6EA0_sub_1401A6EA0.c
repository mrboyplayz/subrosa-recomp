/* Address: 0x1401a6ea0 | Name: sub_1401A6EA0 | Size: 281 bytes */
__int64 __fastcall sub_1401A6EA0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  int j; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+24h] [rbp-14h]

  v10 = 0;
  do
  {
    for ( i = 0; i < a2; ++i )
    {
      v6 = 1.442695040888963 * log(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + i)));
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + i)) = v6 - flt_140282A10[i];
    }
    for ( j = a2; j < a3; ++j )
      *(_DWORD *)(a5 + 4LL * (j + *(_DWORD *)(a1 + 8) * v10)) = -1050673152;
    ++v10;
    result = a6;
  }
  while ( v10 < (int)a6 );
  return result;
}

