/* Address: 0x1401a3450 | Name: sub_1401A3450 | Size: 407 bytes */
__int64 __fastcall sub_1401A3450(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+24h] [rbp-34h]
  int v10; // [rsp+28h] [rbp-30h]
  float v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 48) << a6;
  v9 = 0;
  do
  {
    for ( i = 0; i < a4; ++i )
    {
      v11 = sub_1401A9C00(
              a2 + 4LL * ((*(__int16 *)(v12 + 2LL * i) << a6) + v10 * v9),
              a2 + 4LL * ((*(__int16 *)(v12 + 2LL * i) << a6) + v10 * v9),
              (unsigned int)((*(__int16 *)(v12 + 2LL * (i + 1)) - *(__int16 *)(v12 + 2LL * i)) << a6))
          + 1.0e-27;
      v6 = sqrt(v11);
      *(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + i)) = v6;
    }
    ++v9;
    result = a5;
  }
  while ( v9 < (int)a5 );
  return result;
}

