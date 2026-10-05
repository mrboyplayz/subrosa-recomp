/* Address: 0x140051cf0 | Name: sub_140051CF0 | Size: 196 bytes */
void __fastcall sub_140051CF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // xmm0_4
  unsigned int v7; // eax
  __int64 v8; // r10
  unsigned int v9; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = 0;
    v7 = dword_140404A6C[283831474];
    v8 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = a3;
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v8) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v8) = a4[1];
      v9 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v8) = 0;
      v9 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v8) = v9;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v8) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v8) = a5[1];
      v6 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v8) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v8) = v6;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

