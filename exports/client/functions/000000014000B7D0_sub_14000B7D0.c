/* Address: 0x14000b7d0 | Name: sub_14000B7D0 | Size: 376 bytes */
__int64 __fastcall sub_14000B7D0(
        unsigned int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v10; // eax
  unsigned int v11; // xmm0_4
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // xmm1_4

  if ( a1 > 3 || a2 < 0 || (a5 & 0xE0000000) != 0x80000000 || (a6 & 0x10000) == 0 )
    return 0;
  if ( dword_140404A6C[456202453] )
  {
    v10 = dword_140404A6C[283831474];
    v11 = 0;
    v12 = dword_140404A6C[308307070];
    v13 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v13) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v13) = v10;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v13) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v13) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v13) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v13) = (unsigned __int16)a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v13) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v13) = a7[1];
      v14 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v13) = 0;
      v14 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v13) = v14;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v13) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v13) = a8[1];
      v11 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v13) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v13) = v11;
    dword_140404A6C[308307070] = v12 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
  sub_140016E30(a1, a2, a3, a4, a5 | (0x10000 << a6));
  return 1;
}

