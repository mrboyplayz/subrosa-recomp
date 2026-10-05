/* Address: 0x140051940 | Name: sub_140051940 | Size: 166 bytes */
__int64 __fastcall sub_140051940(unsigned int a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    if ( a1 <= 0x3FF )
    {
      v1 = dword_140404A6C[283831474];
      v2 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v2) = 6;
      ++dword_140404A6C[a1 + 280648157];
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v2) = v1;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v2) = a1;
      v3 = 1760LL * (int)a1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v2) = dword_140404A6C[v3 + 278846052];
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v2) = dword_140404A6C[v3 + 278845983];
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v2) = dword_140404A6C[v3 + 278846051];
      HIWORD(dword_140404A6C[308307070]) = 0;
      return 0;
    }
  }
  return result;
}

