/* Address: 0x140116ca0 | Name: sub_140116CA0 | Size: 224 bytes */
unsigned int *__fastcall sub_140116CA0(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r10
  unsigned int *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  result = (unsigned int *)(int)a1;
  v2 = 3597LL * (int)a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v3 != -1 )
  {
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    result = &dword_140404A6C[280658140];
    v4 = 7;
    v5 = &dword_140404A6C[7166 * v3 + 280658140];
    do
    {
      v6 = (int)*(v5 - 1);
      if ( v6 > 0 )
      {
        result = v5;
        do
        {
          v7 = (int)*result;
          if ( dword_140404A6C[1760 * v7 + 278845898] == 27 )
          {
            v8 = (int)dword_140404A6C[1760 * v7 + 278846053];
            if ( (unsigned int)v8 <= 0x1FF )
            {
              v9 = 5210 * v8;
              if ( dword_140404A6C[5210 * v8 + 129716709] )
              {
                if ( (int)dword_140404A6C[v9 + 129716712] > 0 )
                  dword_140404A6C[v2 + 71856272] += dword_140404A6C[24944 * dword_140404A6C[v9 + 129716710] + 346707730];
              }
            }
          }
          ++result;
          --v6;
        }
        while ( v6 );
      }
      v5 += 10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

