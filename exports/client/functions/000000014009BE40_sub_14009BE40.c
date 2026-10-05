/* Address: 0x14009be40 | Name: sub_14009BE40 | Size: 512 bytes */
double __fastcall sub_14009BE40(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r10d
  __int64 v7; // rbp
  unsigned int v9; // r9d
  signed int v10; // edi
  signed int i; // r11d
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rcx
  unsigned int *v16; // rsi
  unsigned int *v17; // rbx
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r10d
  signed int j; // r9d
  __int64 v22; // r8
  signed int v23; // eax

  v6 = 128;
  v7 = a1;
  dword_140404A6C[468765293] = 128;
  v9 = dword_140404A6C[293250409];
  v10 = 128;
  dword_140404A6C[468765294] = 128;
  for ( i = 0; i < v10; ++i )
  {
    v13 = 0;
    if ( v6 > 0 )
    {
      do
      {
        v14 = v13 + i * v6;
        if ( v9 )
          dword_140404A6C[v14 + 468765295] = -16711904;
        else
          dword_140404A6C[v14 + 468765295] = 553582847;
        v6 = dword_140404A6C[468765293];
        ++v13;
      }
      while ( v13 < (int)dword_140404A6C[468765293] );
      v10 = dword_140404A6C[468765294];
    }
  }
  if ( v9 )
  {
    dword_140404A6C[468765295] = 1612720160;
    dword_140404A6C[468765296] = -425767648;
  }
  else
  {
    dword_140404A6C[468765295] = 539500640;
    dword_140404A6C[468765296] = 541958118;
  }
  v15 = 44LL * a1;
  v16 = &dword_140404A6C[44 * v7 + 284024934];
  v17 = &dword_140404A6C[44 * v7 + 284024933];
  dword_140404A6C[v15 + 284024940] = a5;
  *v16 = v10;
  v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  *v17 = v6;
  dword_140404A6C[v15 + 284024935] = 1;
  dword_140404A6C[v15 + 284024936] = 6408;
  dword_140404A6C[v15 + 284024937] = 6408;
  dword_140404A6C[v15 + 284024943] = 0;
  dword_140404A6C[v15 + 284024938] = a3;
  dword_140404A6C[v15 + 284024939] = a4;
  dword_140404A6C[v15 + 284024941] = a6;
  free(*v18);
  v19 = j__malloc_base((int)(4 * *v17 * *v16));
  v20 = 0;
  for ( *v18 = (void *)v19; v20 < (int)*v16; ++v20 )
  {
    for ( j = 0; j < (int)*v17; *((_DWORD *)*v18 + v23) = dword_140404A6C[v22 + 468765295] )
    {
      v22 = j + v20 * dword_140404A6C[468765293];
      v23 = j + *v17 * v20;
      ++j;
    }
  }
  if ( a2 )
    sub_14009A370(v7);
  return sub_14014D3E0((unsigned int)v7, 1);
}

