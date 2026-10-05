/* Address: 0x1400515e0 | Name: sub_1400515E0 | Size: 111 bytes */
__int64 __fastcall sub_1400515E0(unsigned int a1, unsigned int *a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v6 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 9;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v5) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v5) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v5) = a2[2];
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    dword_140404A6C[308307070] = v6;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    return 0;
  }
  return result;
}

