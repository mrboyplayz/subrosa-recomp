/* Address: 0x1401c0aa0 | Name: sub_1401C0AA0 | Size: 639 bytes */
__int64 __fastcall sub_1401C0AA0(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+24h] [rbp-34h]
  int v7; // [rsp+28h] [rbp-30h]
  _DWORD v8[6]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v2 = sub_14019AFE0(a1, (__int64)&unk_1402827C0, 8);
  v8[2] = v2 / 5;
  v8[5] = v2 % 5;
  for ( i = 0; i < 2; ++i )
  {
    v8[3 * i] = sub_14019AFE0(a1, (__int64)&unk_14028215C, 8);
    v8[3 * i + 1] = sub_14019AFE0(a1, (__int64)&unk_1402823A4, 8);
  }
  for ( i = 0; i < 2; ++i )
  {
    v8[3 * i] += 3 * v8[3 * i + 2];
    v6 = word_1402827A0[v8[3 * i]];
    v7 = (6554LL * (word_1402827A0[v8[3 * i] + 1] - v6)) >> 16;
    a2[i] = (__int16)(2 * v8[3 * i + 1] + 1) * (__int16)v7 + v6;
  }
  *a2 -= a2[1];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v9);
}

