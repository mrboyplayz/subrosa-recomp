/* Address: 0x1400512d0 | Name: sub_1400512D0 | Size: 172 bytes */
void __fastcall sub_1400512D0(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  unsigned int v7; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = dword_140404A6C[308307070];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a3[2];
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a4[1];
      v7 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v6) = 0;
      v7 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a2;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

