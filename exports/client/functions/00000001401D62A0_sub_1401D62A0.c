/* Address: 0x1401d62a0 | Name: sub_1401D62A0 | Size: 1600 bytes */
__int64 __fastcall sub_1401D62A0(_DWORD *a1, __int64 a2, char *a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v7; // [rsp+68h] [rbp-440h]
  __int64 v8; // [rsp+70h] [rbp-438h]
  int i; // [rsp+80h] [rbp-428h]
  int j; // [rsp+84h] [rbp-424h]
  int v11; // [rsp+88h] [rbp-420h]
  int v12; // [rsp+8Ch] [rbp-41Ch]
  unsigned int v13; // [rsp+90h] [rbp-418h]
  __int64 v14; // [rsp+98h] [rbp-410h]
  _DWORD *v15; // [rsp+A0h] [rbp-408h]
  _DWORD v16[4]; // [rsp+A8h] [rbp-400h] BYREF
  _DWORD v17[4]; // [rsp+B8h] [rbp-3F0h] BYREF
  _DWORD v18[4]; // [rsp+C8h] [rbp-3E0h] BYREF
  int v19[4]; // [rsp+D8h] [rbp-3D0h] BYREF
  _WORD v20[20]; // [rsp+E8h] [rbp-3C0h] BYREF
  _OWORD v21[4]; // [rsp+110h] [rbp-398h] BYREF
  _WORD v22[96]; // [rsp+150h] [rbp-358h] BYREF
  _WORD v23[320]; // [rsp+210h] [rbp-298h] BYREF
  __int64 v24; // [rsp+490h] [rbp-18h]

  for ( i = 0; i < a1[1145]; ++i )
  {
    for ( j = 0; j < a1[1159]; ++j )
      v22[24 * i + j] = sub_1401D11F0();
  }
  for ( i = 0; i < a1[1145]; ++i )
  {
    v13 = (unsigned int)sub_1401D11F0() << 16;
    v17[i] = (unsigned __int16)sub_1401D11F0() | v13;
    v18[i] = sub_1401D11F0();
    v19[i] = sub_1401D11F0();
  }
  v12 = sub_1401D11F0();
  for ( i = 0; i < 5 * a1[1145]; ++i )
    v20[i] = sub_1401D11F0();
  for ( j = 0; j < 2; ++j )
  {
    for ( i = 0; i < a1[1160]; ++i )
      *((_WORD *)&v21[2 * j] + i) = sub_1401D11F0();
  }
  for ( i = 0; i < a1[1145]; ++i )
    v16[i] = sub_1401D11F0();
  if ( a3[29] == 2 )
    v11 = word_140282798[a3[33]];
  else
    v11 = 0;
  for ( i = 0; i < a1[1146]; ++i )
    v23[i] = sub_1401D11F0();
  if ( (int)a1[1157] <= 1 && (int)a1[1168] <= 0 )
  {
    v15 = a1;
    sub_1401C3AC0(
      a1,
      a4,
      a3,
      (__int64)v23,
      a5,
      (__int64)v21,
      (__int64)v20,
      (__int64)v22,
      (__int64)v19,
      (__int64)v18,
      (__int64)v17,
      (__int64)v16,
      a2 + 228,
      v12,
      v11);
  }
  else
  {
    v14 = (__int64)a1;
    LODWORD(v7) = v12;
    LODWORD(v8) = v11;
    sub_1401C4120(
      a1,
      a4,
      a3,
      (__int64)v23,
      a5,
      (__int64)v21,
      (__int64)v20,
      (__int64)v22,
      v19,
      v18,
      (__int64)v17,
      (__int64)v16,
      a2 + 228,
      v7,
      v8);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v24);
}

