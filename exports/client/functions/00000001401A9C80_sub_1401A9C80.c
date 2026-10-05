/* Address: 0x1401a9c80 | Name: sub_1401A9C80 | Size: 390 bytes */
__int64 __fastcall sub_1401A9C80(float *a1, __int64 a2, __int64 a3, signed int a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int i; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  for ( i = 0; i < a5 - 3; i += 4 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    sub_1401A92A0(a1, (float *)(a2 + 4LL * i), (float *)&v9, a4);
    *(_DWORD *)(a3 + 4LL * i) = v9;
    *(_DWORD *)(a3 + 4LL * (i + 1)) = v10;
    *(_DWORD *)(a3 + 4LL * (i + 2)) = v11;
    *(_DWORD *)(a3 + 4LL * (i + 3)) = v12;
  }
  while ( i < a5 )
  {
    v8 = sub_1401A9C00((__int64)a1, a2 + 4LL * i, a4);
    *(float *)(a3 + 4LL * i++) = v8;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v13);
}

