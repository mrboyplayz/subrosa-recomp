/* Address: 0x1400e7f80 | Name: sub_1400E7F80 | Size: 1525 bytes */
__int64 __fastcall sub_1400E7F80(int a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  signed int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r15
  signed int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  signed int v11; // r14d
  int v12; // ebx
  int v13; // esi
  int v14; // r15d
  unsigned int *v15; // rsi
  signed int i; // ebx
  int v17; // edx
  signed int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // r9d
  unsigned int *v25; // r8
  void *v26; // rcx
  __int64 v27; // rax
  __int64 result; // rax
  float *v29; // rcx
  float v30; // xmm2_4
  char Buffer; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1;
  v3 = MEMORY[0x14020B8D8](a2, "rb");
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    fread(&Buffer, 4, 1, v3);
    v6 = 1268 * v2;
    fread(&dword_140404A6C[1268 * v2 + 278522403], 4, 3, v5);
    fread(&dword_140404A6C[1268 * v2 + 278522406], 4, 3, v5);
    fread(&dword_140404A6C[1268 * v2 + 278522409], 4, 1, v5);
    v7 = 0;
    if ( (int)dword_140404A6C[1268 * v2 + 278522409] > 0 )
    {
      do
      {
        v8 = 4 * (317 * v2 + v7);
        fread(&dword_140404A6C[v8 + 278522410], 4, 1, v5);
        fread(&dword_140404A6C[v8 + 278522411], 4, 3, v5);
        ++v7;
      }
      while ( v7 < (int)dword_140404A6C[1268 * v2 + 278522409] );
      LODWORD(v2) = a1;
    }
    fread(&dword_140404A6C[v6 + 278522541], 4, 1, v5);
    free(*(void **)&dword_140404A6C[v6 + 278522543]);
    v9 = j__malloc_base((int)(12 * dword_140404A6C[v6 + 278522541]));
    v10 = *(void **)&dword_140404A6C[v6 + 278522545];
    *(_QWORD *)&dword_140404A6C[v6 + 278522543] = v9;
    free(v10);
    v11 = 0;
    *(_QWORD *)&dword_140404A6C[v6 + 278522545] = j__malloc_base((int)(8 * dword_140404A6C[v6 + 278522541]));
    if ( (int)dword_140404A6C[v6 + 278522541] > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        fread(*(_QWORD *)&dword_140404A6C[v6 + 278522543] + 4LL * v13, 4, 3, v5);
        fread(*(_QWORD *)&dword_140404A6C[v6 + 278522545] + 4LL * v12, 4, 2, v5);
        ++v11;
        v13 += 3;
        v12 += 2;
      }
      while ( v11 < (int)dword_140404A6C[v6 + 278522541] );
      LODWORD(v2) = a1;
    }
    fread(&dword_140404A6C[177544400], 4, 1, v5);
    v14 = 0;
    if ( (int)dword_140404A6C[177544400] > 0 )
    {
      v15 = &dword_140404A6C[177544401];
      do
      {
        fread(&dword_140404A6C[5 * v14 + 177544401], 4, 1, v5);
        for ( i = 0; i < (int)*v15; ++i )
          fread(&dword_140404A6C[5 * v14 + 177544402 + i], 4, 1, v5);
        ++v14;
        v15 += 5;
      }
      while ( v14 < (int)dword_140404A6C[177544400] );
    }
    sub_14020B9E8(v5);
  }
  v17 = 0;
  v18 = 0;
  v19 = 1268LL * (int)v2;
  if ( (int)dword_140404A6C[v19 + 278522541] <= 0 )
  {
    v22 = dword_140404A6C[177544400];
  }
  else
  {
    v20 = *(_QWORD *)&dword_140404A6C[v19 + 278522543];
    v21 = 0;
    do
    {
      *(float *)(v21 + v20) = *(float *)(v21 + v20) - *(float *)&dword_140404A6C[v19 + 278522403];
      *(float *)(v21 + v20 + 4) = *(float *)(v21 + v20 + 4) - *(float *)&dword_140404A6C[v19 + 278522404];
      *(float *)(v21 + v20 + 8) = *(float *)(v21 + v20 + 8) - *(float *)&dword_140404A6C[v19 + 278522405];
      v20 = *(_QWORD *)&dword_140404A6C[v19 + 278522543];
      if ( (float)((float)((float)(*(float *)(v21 + v20) * *(float *)(v21 + v20))
                         + (float)(*(float *)(v21 + v20 + 4) * *(float *)(v21 + v20 + 4)))
                 + (float)(*(float *)(v21 + v20 + 8) * *(float *)(v21 + v20 + 8))) > 1.0 )
        v17 = 1;
      ++v18;
      v21 += 12;
    }
    while ( v18 < (int)dword_140404A6C[v19 + 278522541] );
    v22 = dword_140404A6C[177544400];
    if ( v17 )
      v22 = 0;
    dword_140404A6C[177544400] = v22;
  }
  v23 = 0;
  dword_140404A6C[177495247] = 0;
  v24 = 0;
  if ( v22 > 0 )
  {
    v25 = &dword_140404A6C[177544402];
    do
    {
      dword_140404A6C[3 * v23 + 177495248] = *v25;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v25[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v25[2];
      v23 = ++dword_140404A6C[177495247];
      if ( *(v25 - 1) == 4 )
      {
        dword_140404A6C[3 * v23 + 177495248] = *v25;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v25[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v25[3];
        v23 = ++dword_140404A6C[177495247];
      }
      ++v24;
      v25 += 5;
    }
    while ( v24 < (int)dword_140404A6C[177544400] );
  }
  v26 = *(void **)&dword_140404A6C[v19 + 278522549];
  dword_140404A6C[v19 + 278522547] = v23;
  free(v26);
  v27 = j__malloc_base((int)(12 * dword_140404A6C[v19 + 278522547]));
  *(_QWORD *)&dword_140404A6C[v19 + 278522549] = v27;
  result = MEMORY[0x1401FC920](v27, &dword_140404A6C[177495248]);
  if ( (int)dword_140404A6C[v19 + 278522409] > 0 )
  {
    v29 = (float *)&dword_140404A6C[v19 + 278522413];
    do
    {
      v30 = *(v29 - 2) - *(float *)&dword_140404A6C[v19 + 278522403];
      *(v29 - 2) = v30;
      *(v29 - 1) = *(v29 - 1) - *(float *)&dword_140404A6C[v19 + 278522404];
      *v29 = *v29 - *(float *)&dword_140404A6C[v19 + 278522405];
      result = *((unsigned int *)v29 - 3);
      if ( !(_DWORD)result )
      {
        *(float *)&dword_140404A6C[v19 + 278521313] = v30;
        dword_140404A6C[v19 + 278521314] = *((_DWORD *)v29 - 1);
        dword_140404A6C[v19 + 278521315] = *(_DWORD *)v29;
        result = *((unsigned int *)v29 - 3);
      }
      if ( (_DWORD)result == 1 )
      {
        dword_140404A6C[v19 + 278521317] = *((_DWORD *)v29 - 2);
        dword_140404A6C[v19 + 278521318] = *((_DWORD *)v29 - 1);
        dword_140404A6C[v19 + 278521319] = *(_DWORD *)v29;
        result = *((unsigned int *)v29 - 3);
      }
      if ( (_DWORD)result == 2 )
      {
        dword_140404A6C[v19 + 278521320] = *((_DWORD *)v29 - 2);
        dword_140404A6C[v19 + 278521321] = *((_DWORD *)v29 - 1);
        dword_140404A6C[v19 + 278521322] = *(_DWORD *)v29;
        result = *((unsigned int *)v29 - 3);
      }
      if ( (_DWORD)result == 4 )
      {
        dword_140404A6C[v19 + 278521323] = *((_DWORD *)v29 - 2);
        dword_140404A6C[v19 + 278521324] = *((_DWORD *)v29 - 1);
        result = *(unsigned int *)v29;
        dword_140404A6C[v19 + 278521325] = result;
      }
      ++v4;
      v29 += 4;
    }
    while ( v4 < (int)dword_140404A6C[v19 + 278522409] );
  }
  return result;
}

