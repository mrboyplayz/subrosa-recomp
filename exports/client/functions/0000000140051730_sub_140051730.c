/* Address: 0x140051730 | Name: sub_140051730 | Size: 223 bytes */
void __fastcall sub_140051730(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  unsigned int v9; // xmm0_4
  unsigned int v10; // r11d
  __int64 v11; // r10
  unsigned int v12; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v8 = dword_140404A6C[283831474];
    v9 = 0;
    v10 = dword_140404A6C[308307070];
    v11 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v11) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v11) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v11) = a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = a7[1];
      v12 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v11) = 0;
      v12 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = a8[1];
      v9 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v11) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
    dword_140404A6C[308307070] = v10 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

