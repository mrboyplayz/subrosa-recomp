/* Address: 0x1400edd10 | Name: sub_1400EDD10 | Size: 444 bytes */
double __fastcall sub_1400EDD10(int a1, const char *a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // rbp
  const char *v9; // rbx
  signed __int64 v10; // r14
  char v11; // al
  __int64 v12; // rcx
  unsigned int *v13; // rbx
  unsigned int *v14; // r15
  void **v15; // r14
  __int64 v16; // rax
  int v17; // r10d
  signed int v18; // edx
  unsigned int v19; // eax
  signed int i; // r9d
  double result; // xmm0_8

  v7 = a1;
  v9 = a2;
  if ( strcmp((const char *)&dword_140404A6C[284205165], a2) )
  {
    if ( !(unsigned int)sub_1400E7590((int)v9) )
      return result;
    v10 = (char *)&dword_140404A6C[284205165] - v9;
    do
    {
      v11 = *v9;
      v9[v10] = *v9;
      ++v9;
    }
    while ( v11 );
  }
  v12 = 44 * v7;
  v13 = &dword_140404A6C[44 * v7 + 284024933];
  v14 = &dword_140404A6C[44 * v7 + 284024934];
  v15 = (void **)&dword_140404A6C[44 * v7 + 284024945];
  dword_140404A6C[v12 + 284024935] = 1;
  dword_140404A6C[v12 + 284024936] = 6408;
  dword_140404A6C[v12 + 284024933] = a5;
  dword_140404A6C[v12 + 284024934] = a6;
  dword_140404A6C[v12 + 284024937] = 6408;
  dword_140404A6C[v12 + 284024943] = 0;
  dword_140404A6C[v12 + 284024938] = 33071;
  dword_140404A6C[v12 + 284024939] = 33071;
  dword_140404A6C[v12 + 284024940] = 9729;
  dword_140404A6C[v12 + 284024941] = 9729;
  free(*v15);
  v16 = j__malloc_base((int)(4 * *v13 * *v14));
  v17 = 0;
  *v15 = (void *)v16;
  if ( (int)*v14 > 0 )
  {
    v18 = dword_140404A6C[468765293];
    do
    {
      if ( v17 < (int)dword_140404A6C[468765294] )
      {
        v19 = *v13;
        for ( i = 0; i < (int)*v13; ++i )
        {
          if ( i < v18 )
          {
            *((_DWORD *)*v15 + (int)(i + v17 * v19)) = dword_140404A6C[a3 + 468765295 + i + v18 * (v17 + a4)];
            v18 = dword_140404A6C[468765293];
          }
          v19 = *v13;
        }
      }
      ++v17;
    }
    while ( v17 < (int)*v14 );
  }
  return sub_14014D3E0((unsigned int)v7, 0);
}

