/* Address: 0x1401d4100 | Name: sub_1401D4100 | Size: 1389 bytes */
__int64 __fastcall sub_1401D4100(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  float v5; // xmm0_4
  __int64 v7; // [rsp+0h] [rbp-8B8h] BYREF
  int i; // [rsp+50h] [rbp-868h]
  float v9; // [rsp+54h] [rbp-864h]
  _BYTE *v10; // [rsp+58h] [rbp-860h]
  __int64 v11; // [rsp+60h] [rbp-858h]
  __int64 v12; // [rsp+68h] [rbp-850h]
  __int64 v13; // [rsp+70h] [rbp-848h]
  __int64 v14; // [rsp+78h] [rbp-840h]
  __int64 v15; // [rsp+80h] [rbp-838h]
  float v16[6]; // [rsp+88h] [rbp-830h] BYREF
  _BYTE v17[80]; // [rsp+A0h] [rbp-818h] BYREF
  _BYTE v18[400]; // [rsp+F0h] [rbp-7C8h] BYREF
  _BYTE v19[1536]; // [rsp+280h] [rbp-638h] BYREF
  _BYTE v20[32]; // [rsp+880h] [rbp-38h] BYREF
  __int64 v21; // [rsp+8A0h] [rbp-18h]
  int v24; // [rsp+8D8h] [rbp+20h]

  v24 = a4;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    v16[i] = 1.0 / *(float *)(a2 + 4LL * i);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    sub_1401D49F0((unsigned int)v18, (unsigned int)v17, a3, a2 + 228, *(_DWORD *)(a1 + 4588), *(_DWORD *)(a1 + 4580));
    v12 = a1 + 4756;
    v13 = a2 + 144;
    sub_1401D5210(
      a2 + 144,
      a1 + 4756,
      a1 + 4784,
      a1 + 4656,
      a2 + 708,
      (__int64)v18,
      (__int64)v17,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 5108));
    sub_1401D39E0(a1, a2, a5);
    sub_1401D4C00(
      (unsigned int)v19,
      v24 - 4 * *(_DWORD *)(a1 + 4640),
      a2 + 144,
      a2 + 228,
      (__int64)v16,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 4640));
  }
  else
  {
    v11 = a4 - 4LL * *(int *)(a1 + 4640);
    v10 = v19;
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      sub_1401D0DC0((__int64)v10, v11, v16[i], *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588));
      v10 += 4 * *(_DWORD *)(a1 + 4640) + 4 * *(_DWORD *)(a1 + 4588);
      v11 += 4LL * *(int *)(a1 + 4588);
    }
    MEMORY[0x1401FCD30](a2 + 144, 0, 20LL * *(_DWORD *)(a1 + 4580));
    *(_DWORD *)(a2 + 708) = 0;
    *(_DWORD *)(a1 + 4656) = 0;
  }
  if ( *(_DWORD *)(a1 + 4664) )
  {
    v9 = 0.0099999998;
  }
  else
  {
    v5 = pow(2.0, (float)(*(float *)(a2 + 708) / 3.0));
    v9 = v5 / 10000.0;
    v9 = (float)(v5 / 10000.0) / (float)((float)(0.75 * *(float *)(a2 + 700)) + 0.25);
  }
  sub_1401D4680(a1, v20, v19);
  v14 = a1;
  sub_1401D61A0(a1, a2 + 16, v20, a1 + 4500);
  v15 = a2 + 712;
  sub_1401D4E10(
    a2 + 712,
    (unsigned int)v19,
    a2 + 16,
    a2,
    *(_DWORD *)(a1 + 4588),
    *(_DWORD *)(a1 + 4580),
    *(_DWORD *)(a1 + 4640));
  MEMORY[0x1401FC920](a1 + 4500, v20);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v21);
}

