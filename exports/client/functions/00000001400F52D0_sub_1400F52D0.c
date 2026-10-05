/* Address: 0x1400f52d0 | Name: sub_1400F52D0 | Size: 431 bytes */
__int64 __fastcall sub_1400F52D0(unsigned int a1)
{
  int v1; // r14d
  __int64 v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rsi
  signed int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-148h] BYREF
  _BYTE Src[256]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v10; // [rsp+120h] [rbp-28h]

  if ( a1 <= 0xFF )
  {
    v1 = (signed int)dword_140404A6C[284022316] / 3;
    sub_140158AB0(Src, "%s has died", (const char *)&dword_140404A6C[3597 * a1 + 71856254]);
    if ( dword_140404A6C[456202453] )
    {
      v2 = -1;
      do
        ++v2;
      while ( Src[v2] );
      v3 = dword_140404A6C[308307070];
      if ( (int)v2 > 63 )
        LODWORD(v2) = 63;
      v4 = dword_140404A6C[283831474];
      v5 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
      MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v5, Src);
      *((_BYTE *)&dword_140404A6C[297756301] + v5 + (int)v2) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = v2;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = 3;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v5) = -1;
      dword_140404A6C[308307070] = v3 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v5) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
    v6 = dword_140404A6C[283831450];
    if ( (int)dword_140404A6C[283831450] <= 50400 )
    {
      if ( v1 > 0 )
        v6 = 18000 / v1 + dword_140404A6C[283831450];
      if ( v6 > 50400 )
        v6 = 50400;
      dword_140404A6C[283831450] = v6;
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
  }
  return result;
}

