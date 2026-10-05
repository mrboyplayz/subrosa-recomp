/* Address: 0x1401c92b0 | Name: sub_1401C92B0 | Size: 880 bytes */
__int64 __fastcall sub_1401C92B0(__int64 a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-128h] BYREF
  int i; // [rsp+30h] [rbp-F8h]
  int v8; // [rsp+34h] [rbp-F4h]
  int j; // [rsp+38h] [rbp-F0h]
  int v10; // [rsp+3Ch] [rbp-ECh]
  int k; // [rsp+40h] [rbp-E8h]
  int v12; // [rsp+44h] [rbp-E4h]
  int v13; // [rsp+48h] [rbp-E0h]
  _BOOL8 v14; // [rsp+50h] [rbp-D8h]
  __int64 v15; // [rsp+58h] [rbp-D0h]
  __int64 v16; // [rsp+60h] [rbp-C8h]
  _DWORD v17[40]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+110h] [rbp-18h]
  __int16 v21; // [rsp+140h] [rbp+18h]

  v21 = a3;
  v13 = sub_14019AFE0(a1, (__int64)&unk_140282458 + 9 * (a3 >> 1), 8);
  v8 = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
    ++v8;
  v16 = (__int64)&unk_1402822F0 + 18 * v13;
  for ( i = 0; i < v8; ++i )
  {
    v17[i + 20] = 0;
    for ( v17[i] = sub_14019AFE0(a1, v16, 8);
          v17[i] == 17;
          v17[i] = sub_14019AFE0(a1, (__int64)&unk_1402822F0 + v14 + 162, 8) )
    {
      v14 = ++v17[i + 20] == 10;
    }
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( (int)v17[i] <= 0 )
      MEMORY[0x1401FCD30](a2 + 32LL * (__int16)i, 0, 32);
    else
      sub_1401C2340(a2 + 32LL * (__int16)i, a1, v17[i]);
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( (int)v17[i + 20] > 0 )
    {
      v12 = v17[i + 20];
      v15 = a2 + 32LL * (__int16)i;
      for ( j = 0; j < 16; ++j )
      {
        v10 = *(__int16 *)(v15 + 2LL * j);
        for ( k = 0; k < v12; ++k )
          v10 = sub_14019AFE0(a1, (__int64)&unk_14028213C, 8) + 2 * v10;
        *(_WORD *)(v15 + 2LL * j) = v10;
      }
      v17[i] |= 32 * v12;
    }
  }
  sub_1401C0EF0(a1, a2, a5, v21, a4, (__int64)v17);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v18);
}

