/* Address: 0x14004e160 | Name: sub_14004E160 | Size: 383 bytes */
__int64 __fastcall sub_14004E160(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int *v6; // rax
  unsigned int v10; // esi
  __int64 v12; // rdi
  unsigned int *v13; // rax

  v6 = &dword_140404A6C[486149253];
  v10 = 0;
  while ( *v6 )
  {
    ++v10;
    v6 += 61;
    if ( (__int64)v6 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v10 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 61LL * (int)v10;
  MEMORY[0x1401FCD30](&dword_140404A6C[v12 + 486149254], 0, 240);
  dword_140404A6C[v12 + 486149253] = 1;
  dword_140404A6C[v12 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
  dword_140404A6C[v12 + 486149292] = a2;
  dword_140404A6C[v12 + 486149291] = a1;
  dword_140404A6C[v12 + 486149293] = -1;
  dword_140404A6C[v12 + 486149281] = 1048576000;
  dword_140404A6C[v12 + 486149282] = 1052770304;
  v13 = &dword_140404A6C[36 * v10 + 485543029];
  *(_OWORD *)v13 = 0;
  *((_OWORD *)v13 + 1) = 0;
  *((_OWORD *)v13 + 2) = 0;
  *((_OWORD *)v13 + 3) = 0;
  *((_OWORD *)v13 + 4) = 0;
  *((_OWORD *)v13 + 5) = 0;
  *((_OWORD *)v13 + 6) = 0;
  *((_OWORD *)v13 + 7) = 0;
  *((_OWORD *)v13 + 8) = 0;
  dword_140404A6C[v12 + 486149278] = a5;
  dword_140404A6C[v12 + 486149267] = *a3;
  dword_140404A6C[v12 + 486149268] = a3[1];
  dword_140404A6C[v12 + 486149269] = a3[2];
  dword_140404A6C[v12 + 486149270] = *a4;
  dword_140404A6C[v12 + 486149271] = a4[1];
  dword_140404A6C[v12 + 486149272] = a4[2];
  return v10;
}

