/* Address: 0x1401db3d0 | Name: sub_1401DB3D0 | Size: 648 bytes */
__int64 __fastcall sub_1401DB3D0(int *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _BYTE v13[272]; // [rsp+0h] [rbp-130h] BYREF
  int v14; // [rsp+130h] [rbp+0h] BYREF
  int v15; // [rsp+134h] [rbp+4h]
  int v16; // [rsp+138h] [rbp+8h]
  int v17; // [rsp+13Ch] [rbp+Ch]
  int v18; // [rsp+140h] [rbp+10h]
  int v19; // [rsp+144h] [rbp+14h]
  int *v20; // [rsp+148h] [rbp+18h]
  _DWORD *v21; // [rsp+150h] [rbp+20h]
  _BYTE *v22; // [rsp+158h] [rbp+28h]
  __int64 v23; // [rsp+160h] [rbp+30h]
  __int16 v25; // [rsp+188h] [rbp+58h]

  v25 = a2;
  v14 = 0;
  if ( a1[1144] != (_DWORD)a2 || a1[1140] != a1[1139] )
  {
    if ( a1[1144] )
    {
      v16 = 10 * a1[1145] + 5;
      v15 = a1[1144] * v16;
      v17 = a2 * v16;
      if ( v15 <= (int)a2 * v16 )
        v18 = v17;
      else
        v18 = v15;
      v2 = 2LL * v18 + 15;
      if ( v2 <= 2LL * v18 )
        v2 = 0xFFFFFFFFFFFFFF0LL;
      v3 = alloca(sub_1401F89D0(v2 & 0xFFFFFFFFFFFFFFF0uLL, a2));
      v20 = &v14;
      sub_1401D1210((__int64)&v14, (__int64)(a1 + 1801), v15);
      v4 = alloca(304);
      v21 = v13;
      v5 = sub_1401BA4E0((__int64)v13, 1000 * *((__int16 *)a1 + 2288), a1[1139], 0);
      v14 += v5;
      v6 = (unsigned int)(a1[1139] >> 31);
      LODWORD(v6) = a1[1139] % 1000;
      v19 = a1[1139] / 1000 * v16;
      v7 = 2LL * v19 + 15;
      if ( v7 <= 2LL * v19 )
        v7 = 0xFFFFFFFFFFFFFF0LL;
      v8 = alloca(sub_1401F89D0(v7 & 0xFFFFFFFFFFFFFFF0uLL, v6));
      v22 = v13;
      v9 = sub_1401BAA30(v21, (__int64)v13, (__int64)v20, v15);
      v14 += v9;
      v10 = sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * v25, 1);
      v14 += v10;
      v11 = sub_1401BAA30(a1 + 1448, (__int64)v20, (__int64)v22, v19);
      v14 += v11;
      sub_1401D12E0((__int64)(a1 + 1801), (__int64)v20, v17);
    }
    else
    {
      v14 += sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * (int)a2, 1);
    }
  }
  a1[1140] = a1[1139];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v23);
}

