/* Address: 0x140051560 | Name: sub_140051560 | Size: 116 bytes */
void __fastcall sub_140051560(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v6; // r10
  unsigned int v7; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v7 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 18;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v6) = a5;
    dword_140404A6C[308307070] = v7;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

