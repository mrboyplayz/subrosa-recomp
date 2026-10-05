/* Address: 0x1401d4c00 | Name: sub_1401D4C00 | Size: 512 bytes */
__int64 __fastcall sub_1401D4C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  int j; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+4h] [rbp-54h]
  int k; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  float v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  float v16[6]; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v13 = a2;
  v12 = a1;
  for ( i = 0; i < a7; ++i )
  {
    v15 = v13 - 4LL * *(int *)(a4 + 4LL * i);
    v14 = *(float *)(a5 + 4LL * i);
    for ( j = 0; j < 5; ++j )
      v16[j] = *(float *)(a3 + 4LL * (j + 5 * i));
    for ( j = 0; j < a8 + a6; ++j )
    {
      *(_DWORD *)(v12 + 4LL * j) = *(_DWORD *)(v13 + 4LL * j);
      for ( k = 0; k < 5; ++k )
        *(float *)(v12 + 4LL * j) = *(float *)(v12 + 4LL * j) - (float)(v16[k] * *(float *)(v15 + 4LL * (2 - k)));
      *(float *)(v12 + 4LL * j) = *(float *)(v12 + 4LL * j) * v14;
      v15 += 4;
    }
    v12 += 4LL * (a8 + a6);
    v13 += 4LL * a6;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v17);
}

