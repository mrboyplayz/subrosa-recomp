/* Address: 0x140051f50 | Name: sub_140051F50 | Size: 146 bytes */
__int64 __fastcall sub_140051F50(signed int a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v1 = dword_140404A6C[283831474];
    v2 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v2) = 8;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v2) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v2) = a1;
    v3 = 3597LL * a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v2) = dword_140404A6C[v3 + 71856272];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v2) = dword_140404A6C[v3 + 71856288];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v2) = dword_140404A6C[v3 + 71856265];
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

