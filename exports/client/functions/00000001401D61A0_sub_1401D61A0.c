/* Address: 0x1401d61a0 | Name: sub_1401D61A0 | Size: 239 bytes */
__int64 __fastcall sub_1401D61A0(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  int j; // [rsp+24h] [rbp-64h]
  _OWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  sub_1401C5A20(a1, (__int64)v8, a3, a4);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 4640); ++j )
      *(float *)(((__int64)i << 6) + a2 + 4LL * j) = (float)*((__int16 *)&v8[2 * i] + j) * 0.00024414062;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v9);
}

