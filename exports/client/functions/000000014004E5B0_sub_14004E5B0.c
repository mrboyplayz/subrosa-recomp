/* Address: 0x14004e5b0 | Name: sub_14004E5B0 | Size: 296 bytes */
__int64 __fastcall sub_14004E5B0(unsigned int a1, unsigned int a2)
{
  unsigned int *v3; // rax
  unsigned int v5; // esi
  __int64 v7; // rdi
  unsigned int *v8; // rax

  v3 = &dword_140404A6C[486149253];
  v5 = 0;
  while ( *v3 )
  {
    ++v5;
    v3 += 61;
    if ( (__int64)v3 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v7 = 61LL * (int)v5;
  MEMORY[0x1401FCD30](&dword_140404A6C[v7 + 486149254], 0, 240);
  dword_140404A6C[v7 + 486149253] = 1;
  dword_140404A6C[v7 + 486149254] = 8;
  *(_QWORD *)&dword_140404A6C[v7 + 486149256] = 0x10000;
  dword_140404A6C[v7 + 486149292] = a2;
  dword_140404A6C[v7 + 486149291] = a1;
  dword_140404A6C[v7 + 486149293] = -1;
  v8 = &dword_140404A6C[36 * v5 + 485543029];
  dword_140404A6C[v7 + 486149281] = 1031798784;
  dword_140404A6C[v7 + 486149282] = 1040187392;
  *(_OWORD *)v8 = 0;
  *((_OWORD *)v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  *((_OWORD *)v8 + 3) = 0;
  *((_OWORD *)v8 + 4) = 0;
  *((_OWORD *)v8 + 5) = 0;
  *((_OWORD *)v8 + 6) = 0;
  *((_OWORD *)v8 + 7) = 0;
  *((_OWORD *)v8 + 8) = 0;
  return v5;
}

