/* Address: 0x14004db20 | Name: sub_14004DB20 | Size: 784 bytes */
void __fastcall sub_14004DB20(signed int a1, unsigned int *a2, unsigned int a3, int a4, unsigned int a5, float a6)
{
  __int64 v6; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // rax
  unsigned int *v22; // rax

  v6 = a1;
  v9 = a3;
  if ( (unsigned int)a1 <= 3 )
  {
    v10 = 263004LL * a1;
    v11 = a5;
    dword_140404A6C[v10 + 111579637] = 1;
    dword_140404A6C[v10 + 111579638] = *a2;
    dword_140404A6C[v10 + 111579639] = a2[1];
    dword_140404A6C[v10 + 111579640] = a2[2];
    *(_QWORD *)&dword_140404A6C[v10 + 111579641] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579643] = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 111579645] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579647] = 0;
    dword_140404A6C[v10 + 111579649] = 1065353216;
    dword_140404A6C[v10 + 111579650] = a3;
    dword_140404A6C[v10 + 111579651] = a4;
    dword_140404A6C[v10 + 111579652] = a5;
    *(float *)&dword_140404A6C[v10 + 111579653] = a6;
    *(float *)&dword_140404A6C[v10 + 111579654] = 1.0 / a6;
    free(*(void **)&dword_140404A6C[v10 + 111579655]);
    v12 = (int)(4 * a5 * a4 * v9);
    *(_QWORD *)&dword_140404A6C[v10 + 111579655] = j__malloc_base(v12);
    free(*(void **)&dword_140404A6C[2 * v6 + 421506981]);
    *(_QWORD *)&dword_140404A6C[2 * v6 + 421506981] = j__malloc_base(v12);
    if ( a4 > 0 )
    {
      v13 = 0;
      v14 = (unsigned int)a4;
      do
      {
        if ( v11 > 0 )
        {
          v15 = v13;
          v16 = (unsigned int)v11;
          do
          {
            if ( (int)v9 > 0 )
            {
              v17 = v15;
              v18 = v9;
              do
              {
                v17 += 4;
                *(_DWORD *)(v17 + *(_QWORD *)&dword_140404A6C[v10 + 111579655] - 4) = -1;
                --v18;
              }
              while ( v18 );
            }
            v15 += 4LL * (int)v9;
            --v16;
          }
          while ( v16 );
          v11 = a5;
        }
        v13 += 4LL * (int)(a5 * v9);
        --v14;
      }
      while ( v14 );
    }
    v19 = (_DWORD *)(0x140000000LL + v10 * 4 + 450533292);
    v20 = 512;
    do
    {
      *v19 = 0;
      v19 += 513;
      --v20;
    }
    while ( v20 );
    dword_140404A6C[73991661] = 0;
    v21 = &dword_140404A6C[73991662];
    do
    {
      *v21 = -1;
      v21 += 8969;
    }
    while ( (__int64)v21 < (__int64)&dword_140404A6C[83175918] );
    v22 = &dword_140404A6C[83194357];
    do
    {
      if ( v22[1] == (_DWORD)v6 )
        *v22 = 0;
      if ( v22[6931] == (_DWORD)v6 )
        v22[6930] = 0;
      v22 += 13860;
    }
    while ( (__int64)v22 < (__int64)&dword_140404A6C[111579637] );
    dword_140404A6C[v10 + 111579657] = *a2;
    dword_140404A6C[v10 + 111579658] = a2[1];
    dword_140404A6C[v10 + 111579659] = a2[2];
    *(float *)&dword_140404A6C[v10 + 111579660] = (float)((float)((float)(int)v9 * 64.0) * a6) + *(float *)a2;
    *(float *)&dword_140404A6C[v10 + 111579661] = (float)((float)((float)a4 * 64.0) * a6) + *((float *)a2 + 1);
    *(float *)&dword_140404A6C[v10 + 111579662] = (float)((float)((float)v11 * 64.0) * a6) + *((float *)a2 + 2);
    dword_140404A6C[v10 + 111579663] = 0;
  }
}

