/* Address: 0x1401deae0 | Name: sub_1401DEAE0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401DEAE0()
{
  _DWORD *v0; // rax
  _QWORD v2[6]; // [rsp-20h] [rbp-2310h] BYREF
  int i; // [rsp+10h] [rbp-22E0h]
  __m128i *v4; // [rsp+18h] [rbp-22D8h]
  BOOL v5; // [rsp+20h] [rbp-22D0h]
  __m128i v6[272]; // [rsp+30h] [rbp-22C0h] BYREF
  _DWORD v7[4]; // [rsp+1130h] [rbp-11C0h] BYREF
  __m128i v8; // [rsp+1140h] [rbp-11B0h] BYREF
  __int64 v9; // [rsp+1150h] [rbp-11A0h]
  _DWORD *v10; // [rsp+1170h] [rbp-1180h]
  __m128i *v11; // [rsp+1178h] [rbp-1178h]
  __int64 v12; // [rsp+1180h] [rbp-1170h]
  int v13; // [rsp+1188h] [rbp-1168h]

  v4 = (__m128i *)&v10[9 * v10[1441] + 1530];
  if ( v10[1528] && (int)v10[1133] > 77 )
  {
    v10[v10[1441] + 1185] = 1;
    MEMORY[0x1401FC920](v6, (const __m128i *)(v10 + 37), 0x1100u);
    MEMORY[0x1401FC920](v4, (const __m128i *)v10 + 297, 0x24u);
    MEMORY[0x1401FC920](&v8, v11, 4LL * (int)v10[1145]);
    if ( !v10[1441] || !v10[v10[1441] + 1184] )
    {
      *((_BYTE *)v10 + 4540) = *((_BYTE *)v10 + 7192);
      v4->m128i_i8[0] += *((_BYTE *)v10 + 6116);
      v4->m128i_i8[0] = sub_1401BE320(v4->m128i_i8[0], 0x3Fu);
    }
    v5 = v13 == 2;
    sub_1401C2D70((__int64)v7, v4->m128i_i8, (char *)v10 + 4540, v5, v10[1145]);
    for ( i = 0; i < v10[1145]; ++i )
      *(float *)&v11->m128i_i32[i] = (float)(int)v7[i] * 0.000015258789;
    v0 = &v10[80 * v10[1441] + 1557];
    v2[5] = v12;
    sub_1401D62A0(v10, (__int64)v11, v4->m128i_i8, v6, (__int64)v0);
    MEMORY[0x1401FC920](v11, &v8, 4LL * (int)v10[1145]);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v2 ^ v9);
}

