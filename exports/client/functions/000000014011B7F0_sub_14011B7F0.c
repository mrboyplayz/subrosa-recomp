/* Address: 0x14011b7f0 | Name: sub_14011B7F0 | Size: 241 bytes */
__int64 __fastcall sub_14011B7F0(unsigned int a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r10d
  __int64 v7; // [rsp+0h] [rbp-258h] BYREF
  _BYTE v8[512]; // [rsp+30h] [rbp-228h] BYREF
  __int64 v9; // [rsp+230h] [rbp-28h]

  if ( a1 <= 0xFF )
  {
    v4 = 3597LL * (int)a1;
    if ( !dword_140404A6C[v4 + 71856277] && a2 > 0 && dword_140404A6C[283831312] - 4 > 1 )
    {
      sub_140158AB0(
        v8,
        "%s(%d) team damage: %d",
        (const char *)&dword_140404A6C[v4 + 71856254],
        dword_140404A6C[v4 + 71856265],
        a2);
      v5 = dword_140404A6C[v4 + 71856292];
      if ( v5 != -1 )
        sub_1400A9760(v5, 3u, 0, (signed int)(a2 * dword_140404A6C[283831455]) / 100);
      sub_140051DC0(a1);
      sub_140051F50(a1);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v9);
}

