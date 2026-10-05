/* Address: 0x14004c960 | Name: sub_14004C960 | Size: 84 bytes */
__int64 __fastcall sub_14004C960(int a1, int a2)
{
  __int64 v3; // rcx

  if ( a2 == 2 )
    return dword_140404A6C[1760 * a1 + 278846098];
  if ( a2 )
    return 0xFFFFFFFFLL;
  v3 = 1760LL * a1;
  if ( (int)dword_140404A6C[v3 + 278845906] <= 0 )
    return 0xFFFFFFFFLL;
  return dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
}

