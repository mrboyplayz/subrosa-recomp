/* Address: 0x1400518b0 | Name: sub_1400518B0 | Size: 79 bytes */
__int64 __fastcall sub_1400518B0(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = a1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = a2;
    return 0;
  }
  return result;
}

