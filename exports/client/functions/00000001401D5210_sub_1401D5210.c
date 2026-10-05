/* Address: 0x1401d5210 | Name: sub_1401D5210 | Size: 435 bytes */
__int64 __fastcall sub_1401D5210(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8,
        int a9,
        int a10)
{
  _DWORD v11[20]; // [rsp+0h] [rbp-278h] BYREF
  int i; // [rsp+50h] [rbp-228h]
  int v13[3]; // [rsp+54h] [rbp-224h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-218h] BYREF
  _DWORD v15[100]; // [rsp+B0h] [rbp-1C8h] BYREF
  _WORD v16[20]; // [rsp+240h] [rbp-38h] BYREF
  __int64 v17; // [rsp+268h] [rbp-10h]

  for ( i = 0; i < 25 * a9; ++i )
    v15[i] = sub_1401D11F0();
  for ( i = 0; i < 5 * a9; ++i )
    v14[i] = sub_1401D11F0();
  v11[18] = a10;
  sub_1401C2FD0((__int64)v16, a2, a3, a4, v13, (__int64)v15, (__int64)v14, a8, a9);
  for ( i = 0; i < 5 * a9; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)v16[i] * 0.000061035156;
  *a5 = (float)v13[0] * 0.0078125;
  return MEMORY[0x1401F8B20]((unsigned __int64)v11 ^ v17);
}

