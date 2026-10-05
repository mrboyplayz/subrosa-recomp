/* Address: 0x140051b00 | Name: sub_140051B00 | Size: 198 bytes */
void __fastcall sub_140051B00(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // r9

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = 64;
    v6 = (int)dword_140404A6C[308307070];
    if ( a4 <= 64 )
      v5 = a4;
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 22;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 8);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = v5;
    MEMORY[0x1401FC920](
      &dword_140404A6C[32 * v6 + 297756301],
      (char *)&dword_140404A6C[5873 * a1 + 283831611 + 279 * a2] + (int)(a3 << 6));
    dword_140404A6C[308307070] = v6 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

