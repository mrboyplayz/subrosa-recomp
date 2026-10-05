/* Address: 0x1401d3b00 | Name: sub_1401D3B00 | Size: 1525 bytes */
__int64 __fastcall sub_1401D3B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v8; // [rsp+0h] [rbp-788h] BYREF
  float v9; // [rsp+60h] [rbp-728h]
  __int64 v10; // [rsp+68h] [rbp-720h]
  _DWORD *v11; // [rsp+70h] [rbp-718h]
  float v12; // [rsp+78h] [rbp-710h]
  float v13; // [rsp+7Ch] [rbp-70Ch]
  int v14; // [rsp+80h] [rbp-708h]
  __int64 v15; // [rsp+88h] [rbp-700h]
  __int64 v16; // [rsp+90h] [rbp-6F8h]
  float v17[20]; // [rsp+A0h] [rbp-6E8h] BYREF
  _BYTE v18[64]; // [rsp+F0h] [rbp-698h] BYREF
  _BYTE v19[64]; // [rsp+130h] [rbp-658h] BYREF
  _DWORD v20[384]; // [rsp+170h] [rbp-618h] BYREF
  __int64 v21; // [rsp+770h] [rbp-18h]

  v14 = *(_DWORD *)(a1 + 4592) + *(_DWORD *)(a1 + 4584) + *(_DWORD *)(a1 + 4596);
  v15 = a4 - 4LL * *(int *)(a1 + 4592);
  v10 = v15 + 4LL * v14 - 4LL * *(int *)(a1 + 4548);
  v11 = v20;
  sub_1401D5E90(v20, v10, 1, *(unsigned int *)(a1 + 4596));
  v11 = &v20[*(int *)(a1 + 4596)];
  v10 += 4LL * *(int *)(a1 + 4596);
  MEMORY[0x1401FC920](v11, v10);
  v11 += *(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596);
  v10 += 4LL * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596));
  sub_1401D5E90(v11, v10, 2, *(unsigned int *)(a1 + 4596));
  sub_1401CE540((__int64)v17, (__int64)v20, *(_DWORD *)(a1 + 4548), *(_DWORD *)(a1 + 4648) + 1);
  v17[0] = v17[0] + (float)((float)(v17[0] * 0.001) + 1.0);
  v5 = v17[0];
  sub_1401CE180((__int64)v19, (__int64)v17, *(_DWORD *)(a1 + 4648));
  v12 = v5;
  if ( v5 <= 1.0 )
    v13 = 1.0;
  else
    v13 = v12;
  *(float *)(a2 + 704) = v17[0] / v13;
  sub_1401CE410((__int64)v18, (__int64)v19, *(_DWORD *)(a1 + 4648));
  sub_1401CDE70((__int64)v18, *(_DWORD *)(a1 + 4648), 0.99000001);
  sub_1401D5120(a3, (unsigned int)v18, v15, v14, *(_DWORD *)(a1 + 4648));
  if ( !*(_BYTE *)(a1 + 4781) || *(_DWORD *)(a1 + 4664) )
  {
    MEMORY[0x1401FCD30](a2 + 228, 0, 16);
    *(_WORD *)(a1 + 4778) = 0;
    *(_BYTE *)(a1 + 4780) = 0;
    *(_DWORD *)(a1 + 10084) = 0;
  }
  else
  {
    v9 = 0.60000002;
    v9 = (float)((float)((float)(0.60000002 - (float)(0.0040000002 * (float)*(int *)(a1 + 4648)))
                       - (float)((float)(0.1 * (float)*(int *)(a1 + 4532)) * 0.00390625))
               - (float)(0.15000001 * (float)(*(char *)(a1 + 4541) >> 1)))
       - (float)((float)(0.1 * (float)*(int *)(a1 + 4728)) * 0.000030517578);
    v6 = (float)*(int *)(a1 + 4652) / 65536.0;
    v16 = a2 + 228;
    if ( (unsigned int)sub_1401CE5E0(
                         a3,
                         a2 + 228,
                         a1 + 4778,
                         a1 + 4780,
                         a1 + 10084,
                         *(_DWORD *)(a1 + 4544),
                         LODWORD(v6),
                         LODWORD(v9),
                         *(_DWORD *)(a1 + 4576),
                         *(_DWORD *)(a1 + 4644),
                         *(_DWORD *)(a1 + 4580),
                         a5,
                         LODWORD(v9)) )
      *(_BYTE *)(a1 + 4781) = 1;
    else
      *(_BYTE *)(a1 + 4781) = 2;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v21);
}

