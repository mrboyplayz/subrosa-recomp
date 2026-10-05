/* Address: 0x1401a35f0 | Name: sub_1401A35F0 | Size: 327 bytes */
__int64 __fastcall sub_1401A35F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int v9; // [rsp+4h] [rbp-24h]
  int j; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+Ch] [rbp-1Ch]
  float v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = *(_QWORD *)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 48) * a7;
  v9 = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      v12 = 1.0 / (float)(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + i)) + 1.0e-27);
      for ( j = *(__int16 *)(v13 + 2LL * i) * a7; j < *(__int16 *)(v13 + 2LL * (i + 1)) * a7; ++j )
        *(float *)(a3 + 4LL * (v11 * v9 + j)) = *(float *)(a2 + 4LL * (v11 * v9 + j)) * v12;
    }
    ++v9;
    result = a6;
  }
  while ( v9 < (int)a6 );
  return result;
}

