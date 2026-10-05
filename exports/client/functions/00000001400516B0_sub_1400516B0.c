/* Address: 0x1400516b0 | Name: sub_1400516B0 | Size: 125 bytes */
void __fastcall sub_1400516B0(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v8 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 15;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a6;
    dword_140404A6C[308307070] = v8;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

