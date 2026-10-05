/* Address: 0x14004e430 | Name: sub_14004E430 | Size: 370 bytes */
__int64 __fastcall sub_14004E430(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v5; // rax
  unsigned int v9; // esi
  __int64 v11; // rdi
  unsigned int *v12; // rax

  v5 = &dword_140404A6C[486149253];
  v9 = 0;
  while ( *v5 )
  {
    ++v9;
    v5 += 61;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 61LL * (int)v9;
  MEMORY[0x1401FCD30](&dword_140404A6C[v11 + 486149254], 0, 240);
  dword_140404A6C[v11 + 486149253] = 1;
  dword_140404A6C[v11 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 486149256] = 0x10000;
  dword_140404A6C[v11 + 486149292] = a2;
  dword_140404A6C[v11 + 486149291] = a1;
  dword_140404A6C[v11 + 486149293] = -1;
  dword_140404A6C[v11 + 486149281] = 1048576000;
  dword_140404A6C[v11 + 486149282] = 1052770304;
  v12 = &dword_140404A6C[36 * v9 + 485543029];
  *(_OWORD *)v12 = 0;
  *((_OWORD *)v12 + 1) = 0;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  *((_OWORD *)v12 + 4) = 0;
  *((_OWORD *)v12 + 5) = 0;
  *((_OWORD *)v12 + 6) = 0;
  *((_OWORD *)v12 + 7) = 0;
  *((_OWORD *)v12 + 8) = 0;
  dword_140404A6C[v11 + 486149267] = *a3;
  dword_140404A6C[v11 + 486149268] = a3[1];
  dword_140404A6C[v11 + 486149269] = a3[2];
  dword_140404A6C[v11 + 486149270] = *a4;
  dword_140404A6C[v11 + 486149271] = a4[1];
  dword_140404A6C[v11 + 486149272] = a4[2];
  return v9;
}

