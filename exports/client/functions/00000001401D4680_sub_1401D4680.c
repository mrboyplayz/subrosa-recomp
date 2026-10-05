/* Address: 0x1401d4680 | Name: sub_1401D4680 | Size: 865 bytes */
__int64 __fastcall sub_1401D4680(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 v7; // [rsp+0h] [rbp-708h] BYREF
  int v8; // [rsp+30h] [rbp-6D8h]
  int i; // [rsp+34h] [rbp-6D4h]
  float v10; // [rsp+38h] [rbp-6D0h]
  float v11; // [rsp+3Ch] [rbp-6CCh]
  float v12; // [rsp+40h] [rbp-6C8h]
  double v13; // [rsp+48h] [rbp-6C0h]
  _BYTE v14[64]; // [rsp+50h] [rbp-6B8h] BYREF
  _BYTE v15[64]; // [rsp+90h] [rbp-678h] BYREF
  _DWORD v16[384]; // [rsp+D0h] [rbp-638h] BYREF
  _BYTE v17[32]; // [rsp+6D0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+6F0h] [rbp-18h]

  v8 = *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588);
  *(_BYTE *)(a1 + 4783) = 4;
  sub_1401D0150((__int64)v15, a3, a4, v8, *(_DWORD *)(a1 + 4580), *(_DWORD *)(a1 + 4640));
  v10 = v4;
  if ( *(_DWORD *)(a1 + 4632) && !*(_DWORD *)(a1 + 4664) && *(_DWORD *)(a1 + 4580) == 4 )
  {
    sub_1401D0150((__int64)v14, a3 + 8LL * v8, a4, v8, 2, *(_DWORD *)(a1 + 4640));
    v10 = v10 - v4;
    sub_1401D6050(a2, v14, *(unsigned int *)(a1 + 4640));
    v12 = 3.4028235e38;
    for ( i = 3; i >= 0; --i )
    {
      sub_1401C2F40((__int64)v17, a1 + 4500, a2, i, *(_DWORD *)(a1 + 4640));
      sub_1401D6100(v14, v17, *(unsigned int *)(a1 + 4640), *(unsigned int *)(a1 + 5108));
      sub_1401D5120((unsigned int)v16, (unsigned int)v14, a3, 2 * v8, *(_DWORD *)(a1 + 4640));
      v13 = sub_1401D1050((__int64)&v16[*(int *)(a1 + 4640)], v8 - *(_DWORD *)(a1 + 4640));
      v5 = v13 + sub_1401D1050((__int64)&v16[*(int *)(a1 + 4640) + v8], v8 - *(_DWORD *)(a1 + 4640));
      v11 = v5;
      if ( v10 <= v5 )
      {
        if ( v11 > v12 )
          break;
      }
      else
      {
        v10 = v11;
        *(_BYTE *)(a1 + 4783) = i;
      }
      v12 = v11;
    }
  }
  if ( *(_BYTE *)(a1 + 4783) == 4 )
    sub_1401D6050(a2, v15, *(unsigned int *)(a1 + 4640));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v18);
}

