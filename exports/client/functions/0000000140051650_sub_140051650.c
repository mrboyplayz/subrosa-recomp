/* Address: 0x140051650 | Name: sub_140051650 | Size: 93 bytes */
__int64 __fastcall sub_140051650(unsigned int a1, unsigned int a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = a2;
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

