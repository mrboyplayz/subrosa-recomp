/* Address: 0x14004e2e0 | Name: sub_14004E2E0 | Size: 325 bytes */
__int64 __fastcall sub_14004E2E0(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rax
  unsigned int v7; // esi
  __int64 v9; // rdi
  unsigned int *v10; // rax

  v4 = &dword_140404A6C[486149253];
  v7 = 0;
  while ( *v4 )
  {
    ++v7;
    v4 += 61;
    if ( (__int64)v4 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 61LL * (int)v7;
  MEMORY[0x1401FCD30](&dword_140404A6C[v9 + 486149254], 0, 240);
  dword_140404A6C[v9 + 486149253] = 1;
  dword_140404A6C[v9 + 486149254] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 486149256] = 0x10000;
  dword_140404A6C[v9 + 486149291] = a1;
  dword_140404A6C[v9 + 486149281] = 1031798784;
  dword_140404A6C[v9 + 486149282] = 1040187392;
  v10 = &dword_140404A6C[36 * v7 + 485543029];
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  *((_OWORD *)v10 + 7) = 0;
  *((_OWORD *)v10 + 8) = 0;
  dword_140404A6C[v9 + 486149267] = *a2;
  dword_140404A6C[v9 + 486149268] = a2[1];
  dword_140404A6C[v9 + 486149269] = a2[2];
  dword_140404A6C[v9 + 486149264] = *a3;
  dword_140404A6C[v9 + 486149265] = a3[1];
  dword_140404A6C[v9 + 486149266] = a3[2];
  return v7;
}

