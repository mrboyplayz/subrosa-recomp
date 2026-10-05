/* Address: 0x140051480 | Name: sub_140051480 | Size: 224 bytes */
__int64 __fastcall sub_140051480(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v7 = -1;
    do
      ++v7;
    while ( *(_BYTE *)(a2 + v7) );
    v8 = dword_140404A6C[308307070];
    if ( (int)v7 > 63 )
      LODWORD(v7) = 63;
    v9 = dword_140404A6C[283831474];
    v10 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    MEMORY[0x1401FC920]((char *)&dword_140404A6C[297756301] + v10, a2);
    *((_BYTE *)&dword_140404A6C[297756301] + v10 + (int)v7) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v10) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v10) = a4;
    dword_140404A6C[308307070] = v8 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

