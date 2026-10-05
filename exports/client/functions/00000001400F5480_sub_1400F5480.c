/* Address: 0x1400f5480 | Name: sub_1400F5480 | Size: 928 bytes */
__int64 sub_1400F5480()
{
  int v0; // edi
  int *v1; // r8
  int i; // edx
  int v3; // ecx
  unsigned int *v4; // rax
  int v5; // edx
  int *v6; // r8
  int v7; // ecx
  unsigned int *v8; // rax
  int v9; // ebx
  unsigned int *v10; // r8
  __int64 v11; // rsi
  signed int v12; // r11d
  unsigned int *v13; // rax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int *v26; // r9
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // rcx
  unsigned int *v30; // rbx
  __int64 v32; // [rsp+0h] [rbp-88h] BYREF
  int v33; // [rsp+20h] [rbp-68h] BYREF
  int v34; // [rsp+24h] [rbp-64h]
  int v35; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+44h] [rbp-44h]
  __int64 v37; // [rsp+60h] [rbp-28h]

  v0 = 0;
  v1 = &v33;
  for ( i = 0; i < 2; ++i )
  {
    v3 = 0;
    *v1 = 0;
    v4 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v4 - 2886) && !*v4 && *(v4 - 2853) == i )
        *v1 = ++v3;
      v4 += 3597;
    }
    while ( (__int64)v4 < (__int64)&dword_140404A6C[72779971] );
    ++v1;
  }
  if ( !dword_140404A6C[284022503] || !v33 || !v34 )
  {
    v35 = 2;
    goto LABEL_16;
  }
  if ( v33 >= v34 )
  {
    v35 = 2 * v33 / v34;
LABEL_16:
    v36 = 2;
    goto LABEL_17;
  }
  v35 = 2;
  v36 = 2 * v34 / v33;
LABEL_17:
  v5 = 0;
  v6 = &v33;
  do
  {
    v7 = 0;
    *v6 = 0;
    v8 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v8 - 2886) && !*v8 && *(v8 - 2853) == v5 && *(v8 - 2847) != -1 )
        *v6 = ++v7;
      v8 += 3597;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72779971] );
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  v9 = 0;
  v10 = &dword_140404A6C[283831491];
  v11 = 0;
  do
  {
    v12 = 0;
    if ( *(int *)((char *)&v33 + v11 * 4) > 0 )
    {
      v13 = &dword_140404A6C[278845918];
      v14 = (unsigned int)v9 ^ 1LL;
      do
      {
        if ( *(v13 - 25) && *(v13 - 20) == 17 )
        {
          if ( (v15 = *((float *)v13 - 2), v15 >= *(float *)v10)
            && v15 < *((float *)v10 + 3)
            && (v16 = *((float *)v13 - 1), v16 >= *((float *)v10 + 1))
            && v16 < *((float *)v10 + 4)
            && *(float *)v13 >= *((float *)v10 + 2)
            && *(float *)v13 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[1735] && v13[1740] == 17 )
        {
          if ( (v17 = *((float *)v13 + 1758), v17 >= *(float *)v10)
            && v17 < *((float *)v10 + 3)
            && (v18 = *((float *)v13 + 1759), v18 >= *((float *)v10 + 1))
            && v18 < *((float *)v10 + 4)
            && (v19 = *((float *)v13 + 1760), v19 >= *((float *)v10 + 2))
            && v19 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[3495] && v13[3500] == 17 )
        {
          if ( (v20 = *((float *)v13 + 3518), v20 >= *(float *)v10)
            && v20 < *((float *)v10 + 3)
            && (v21 = *((float *)v13 + 3519), v21 >= *((float *)v10 + 1))
            && v21 < *((float *)v10 + 4)
            && (v22 = *((float *)v13 + 3520), v22 >= *((float *)v10 + 2))
            && v22 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        if ( v13[5255] && v13[5260] == 17 )
        {
          if ( (v23 = *((float *)v13 + 5278), v23 >= *(float *)v10)
            && v23 < *((float *)v10 + 3)
            && (v24 = *((float *)v13 + 5279), v24 >= *((float *)v10 + 1))
            && v24 < *((float *)v10 + 4)
            && (v25 = *((float *)v13 + 5280), v25 >= *((float *)v10 + 2))
            && v25 < *((float *)v10 + 5)
            || !*(&v33 + v14) )
          {
            v12 += 250;
          }
        }
        v13 += 7040;
      }
      while ( (__int64)v13 < (__int64)&dword_140404A6C[280648158] );
    }
    v26 = &dword_140404A6C[71856272];
    v27 = 256;
    do
    {
      if ( *(v26 - 19) )
      {
        if ( v26[14] == v9 )
        {
          v28 = v12 / *(int *)((char *)&v35 + v11 * 4);
          *v26 += v28 + 250;
          v29 = (int)*(v26 - 4);
          if ( (_DWORD)v29 != -1 )
            dword_140404A6C[28 * v29 + 134050374] += v28;
        }
      }
      v26 += 3597;
      --v27;
    }
    while ( v27 );
    v10[14] = v12;
    ++v9;
    dword_140404A6C[v11 + 284023018] += v12;
    v10 += 5873;
    ++v11;
  }
  while ( v9 < 2 );
  v30 = &dword_140404A6C[71856253];
  do
  {
    if ( *v30 )
      sub_140051F50((unsigned int)v0);
    ++v0;
    v30 += 3597;
  }
  while ( v0 < 256 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v37);
}

