/* Address: 0x140050ef0 | Name: sub_140050EF0 | Size: 149 bytes */
__int64 __fastcall sub_140050EF0(unsigned int a1)
{
  unsigned int *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rbx

  v2 = &dword_140404A6C[275753045];
  v3 = 0;
  while ( *v2 )
  {
    ++v3;
    v2 += 2570;
    if ( (__int64)v2 >= (__int64)&dword_140404A6C[278384725] )
      return 0xFFFFFFFFLL;
  }
  if ( v3 != -1 )
  {
    v5 = 2570LL * (int)v3;
    MEMORY[0x1401FCD30](&dword_140404A6C[v5 + 275753046], 0, 10276);
    dword_140404A6C[v5 + 275753045] = 1;
    dword_140404A6C[v5 + 275753046] = a1;
  }
  return v3;
}

