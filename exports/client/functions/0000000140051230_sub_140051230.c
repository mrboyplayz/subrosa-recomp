/* Address: 0x140051230 | Name: sub_140051230 | Size: 154 bytes */
void __fastcall sub_140051230(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  __int64 v6; // r10

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[308307070];
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a2[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = a3[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    dword_140404A6C[308307070] = v4 + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

