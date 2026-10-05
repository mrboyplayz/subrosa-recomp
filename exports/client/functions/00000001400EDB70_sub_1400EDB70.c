/* Address: 0x1400edb70 | Name: sub_1400EDB70 | Size: 405 bytes */
__int64 __fastcall sub_1400EDB70(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbp
  char *v10; // rbx
  __int64 result; // rax
  signed __int64 v12; // rcx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  unsigned int *v17; // rsi
  void **v18; // rdi
  __int64 v19; // rax
  signed int v20; // r9d
  signed int i; // eax
  signed int v22; // ecx

  v7 = a1;
  v10 = a2;
  result = sub_1400E7590((int)a2);
  if ( (_DWORD)result )
  {
    v12 = (char *)&dword_140404A6C[284205165] - v10;
    do
    {
      v13 = *v10;
      v10[v12] = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = dword_140404A6C[468765293];
    v15 = 44 * v7;
    v16 = &dword_140404A6C[44 * v7 + 284024933];
    v17 = &dword_140404A6C[44 * v7 + 284024934];
    dword_140404A6C[v15 + 284024938] = a4;
    *v16 = v14;
    v18 = (void **)&dword_140404A6C[44 * v7 + 284024945];
    *v17 = dword_140404A6C[468765294];
    dword_140404A6C[v15 + 284024939] = a5;
    dword_140404A6C[v15 + 284024940] = a6;
    dword_140404A6C[v15 + 284024941] = a7;
    dword_140404A6C[v15 + 284024935] = 1;
    dword_140404A6C[v15 + 284024936] = 6408;
    dword_140404A6C[v15 + 284024937] = 6408;
    dword_140404A6C[v15 + 284024943] = 0;
    free(*v18);
    v19 = j__malloc_base((int)(4 * *v16 * *v17));
    v20 = 0;
    for ( *v18 = (void *)v19; v20 < (int)*v17; ++v20 )
    {
      for ( i = 0; i < (int)*v16; *((_DWORD *)*v18 + v22) = dword_140404A6C[v22 + 468765295] )
      {
        v22 = i + *v16 * v20;
        ++i;
      }
    }
    if ( a3 )
      sub_14009A370(v7);
    sub_14014D3E0((unsigned int)v7, 1);
    return 1;
  }
  return result;
}

