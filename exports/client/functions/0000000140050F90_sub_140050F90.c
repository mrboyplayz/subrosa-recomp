/* Address: 0x140050f90 | Name: sub_140050F90 | Size: 465 bytes */
__int64 __fastcall sub_140050F90(unsigned int a1, signed int a2)
{
  __int64 v4; // r8
  __int64 v5; // rbp
  char *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r11
  unsigned int *v10; // rax
  _BYTE *i; // rdx
  unsigned int v13; // esi
  unsigned int *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax

  v4 = -1;
  v5 = (a2 + 110LL * (int)a1) << 6;
  v6 = (char *)&dword_140404A6C[278845893] + v5;
  do
    ++v4;
  while ( v6[v4 + 884] );
  if ( (int)v4 > 63 )
    LODWORD(v4) = 63;
  v7 = dword_140404A6C[1760 * (int)a1 + 278845985 + ((__int64)a2 >> 5)];
  if ( _bittest((const int *)&v7, a2 & 0x1F) )
  {
    v8 = (int)dword_140404A6C[1760 * a1 + 278845987 + a2];
    v9 = 39 * v8;
    if ( dword_140404A6C[39 * v8 + 290382651] == (_DWORD)v4 )
    {
      if ( (int)v4 <= 0 )
        return (unsigned int)v8;
      v10 = &dword_140404A6C[v9 + 290382668];
      for ( i = (char *)&dword_140404A6C[278846626] + v5; *((_BYTE *)v10 - 64) == *(i - 2048) && *(_BYTE *)v10 == *i; ++i )
      {
        v10 = (unsigned int *)((char *)v10 + 1);
        if ( (char *)v10 - (char *)&dword_140404A6C[v9 + 290382668] >= (int)v4 )
          return (unsigned int)v8;
      }
    }
    dword_140404A6C[v9 + 290382645] = 0;
  }
  v13 = 0;
  v14 = &dword_140404A6C[290382645];
  while ( *v14 )
  {
    ++v13;
    v14 += 39;
    if ( (__int64)v14 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v13 == -1 )
    return 0xFFFFFFFFLL;
  v15 = 39LL * (int)v13;
  v16 = dword_140404A6C[283831474];
  dword_140404A6C[v15 + 290382651] = v4;
  *(_QWORD *)&dword_140404A6C[v15 + 290382645] = 1;
  dword_140404A6C[v15 + 290382648] = v16;
  dword_140404A6C[v15 + 290382647] = 1;
  dword_140404A6C[v15 + 290382649] = a1;
  dword_140404A6C[v15 + 290382650] = a2;
  MEMORY[0x1401FC920](&dword_140404A6C[v15 + 290382652], v6 + 884);
  MEMORY[0x1401FC920](&dword_140404A6C[v15 + 290382668], (char *)&dword_140404A6C[278846626] + v5);
  sub_1400C3BA0(a1, v13, (unsigned int)a2);
  return v13;
}

