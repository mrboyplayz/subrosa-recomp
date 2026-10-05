/* Address: 0x140051ff0 | Name: sub_140051FF0 | Size: 156 bytes */
void __fastcall sub_140051FF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 21;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a4;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v7) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v7) = a5[1];
      v8 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v7) = 0;
      v8 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v7) = v8;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

