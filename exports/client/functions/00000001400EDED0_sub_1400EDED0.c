/* Address: 0x1400eded0 | Name: sub_1400EDED0 | Size: 463 bytes */
__int64 __fastcall sub_1400EDED0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rbp
  char *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  signed __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  unsigned int *v17; // rbx
  unsigned int *v18; // rsi
  void **v19; // rdi
  __int64 v20; // rax
  signed int v21; // r10d
  unsigned int v22; // ecx
  signed int i; // edx
  signed int v24; // eax

  v8 = a1;
  v11 = a2;
  if ( !(unsigned int)sub_1400E7590((int)a2) )
    return 0;
  v12 = dword_140404A6C[468765293];
  if ( ((dword_140404A6C[468765293] - 1) & dword_140404A6C[468765293]) != 0 )
    return 0;
  v13 = dword_140404A6C[468765294];
  if ( ((dword_140404A6C[468765294] - 1) & dword_140404A6C[468765294]) != 0 )
    return 0;
  v14 = (char *)&dword_140404A6C[284205165] - v11;
  do
  {
    v15 = *v11;
    v11[v14] = *v11;
    ++v11;
  }
  while ( v15 );
  v16 = 44 * v8;
  v17 = &dword_140404A6C[44 * v8 + 284024933];
  v18 = &dword_140404A6C[44 * v8 + 284024934];
  dword_140404A6C[v16 + 284024938] = a4;
  dword_140404A6C[v16 + 284024939] = a5;
  v19 = (void **)&dword_140404A6C[44 * v8 + 284024945];
  dword_140404A6C[v16 + 284024940] = a6;
  *v17 = v12;
  *v18 = v13;
  dword_140404A6C[v16 + 284024935] = 1;
  dword_140404A6C[v16 + 284024936] = 6408;
  dword_140404A6C[v16 + 284024937] = 6408;
  dword_140404A6C[v16 + 284024943] = 0;
  dword_140404A6C[v16 + 284024941] = a7;
  free(*v19);
  v20 = j__malloc_base((int)(4 * *v17 * *v18));
  v21 = 0;
  for ( *v19 = (void *)v20; v21 < (int)*v18; ++v21 )
  {
    v22 = *v17;
    for ( i = 0; i < (int)*v17; v22 = *v17 )
    {
      v24 = i + v22 * v21;
      if ( dword_140404A6C[293250409] )
      {
        LOBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8;
      }
      else
      {
        HIBYTE(dword_140404A6C[v24 + 468765295]) = 0;
        dword_140404A6C[v24 + 468765295] |= a8 << 24;
      }
      ++i;
      *((_DWORD *)*v19 + v24) = dword_140404A6C[v24 + 468765295];
    }
  }
  if ( a3 )
    sub_14009A370(v8);
  sub_14014D3E0((unsigned int)v8, 0);
  return 1;
}

