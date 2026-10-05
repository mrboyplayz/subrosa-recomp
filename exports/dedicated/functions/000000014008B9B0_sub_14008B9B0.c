/* Address: 0x14008b9b0 | Name: sub_14008B9B0 | Size: 1525 bytes */
void *__fastcall sub_14008B9B0(int a1, const char *a2)
{
  __int64 v2; // r13
  FILE *v3; // rax
  int v4; // ebp
  FILE *v5; // rdi
  __int64 v6; // r15
  int v7; // esi
  __int64 v8; // rbx
  void *v9; // rax
  void *v10; // rcx
  int v11; // r14d
  int v12; // ebx
  int v13; // esi
  int v14; // r15d
  int *v15; // rsi
  int i; // ebx
  int v17; // edx
  int v18; // r8d
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  int v24; // r9d
  int *v25; // r8
  void *v26; // rcx
  void *v27; // rax
  int v28; // ecx
  void *result; // rax
  float *v30; // rcx
  float v31; // xmm2_4
  char Buffer; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1;
  v3 = fopen(a2, "rb");
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    fread(&Buffer, 4u, 1u, v3);
    v6 = 5072 * v2;
    fread((char *)&unk_190123238 + 5072 * v2, 4u, 3u, v5);
    fread((char *)&unk_190123244 + 5072 * v2, 4u, 3u, v5);
    fread((char *)&unk_190123250 + 5072 * v2, 4u, 1u, v5);
    v7 = 0;
    if ( *((int *)&unk_190123250 + 1268 * v2) > 0 )
    {
      do
      {
        v8 = 16 * (317 * v2 + v7);
        fread((char *)&unk_190123254 + v8, 4u, 1u, v5);
        fread((char *)&unk_190123258 + v8, 4u, 3u, v5);
        ++v7;
      }
      while ( v7 < *((_DWORD *)&unk_190123250 + 1268 * v2) );
      LODWORD(v2) = a1;
    }
    fread((char *)&unk_190123460 + v6, 4u, 1u, v5);
    free(*(void **)((char *)&unk_190123468 + v6));
    v9 = malloc(12 * *(_DWORD *)((char *)&unk_190123460 + v6));
    v10 = *(void **)((char *)&unk_190123470 + v6);
    *(_QWORD *)((char *)&unk_190123468 + v6) = v9;
    free(v10);
    v11 = 0;
    *(_QWORD *)((char *)&unk_190123470 + v6) = malloc(8 * *(_DWORD *)((char *)&unk_190123460 + v6));
    if ( *(int *)((char *)&unk_190123460 + v6) > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        fread((void *)(*(_QWORD *)((char *)&unk_190123468 + v6) + 4LL * v13), 4u, 3u, v5);
        fread((void *)(*(_QWORD *)((char *)&unk_190123470 + v6) + 4LL * v12), 4u, 2u, v5);
        ++v11;
        v13 += 3;
        v12 += 2;
      }
      while ( v11 < *(_DWORD *)((char *)&unk_190123460 + v6) );
      LODWORD(v2) = a1;
    }
    fread(&dword_178446BAC, 4u, 1u, v5);
    v14 = 0;
    if ( dword_178446BAC > 0 )
    {
      v15 = dword_178446BB0;
      do
      {
        fread(&dword_178446BB0[5 * v14], 4u, 1u, v5);
        for ( i = 0; i < *v15; ++i )
          fread(&dword_178446BB4[5 * v14 + i], 4u, 1u, v5);
        ++v14;
        v15 += 5;
      }
      while ( v14 < dword_178446BAC );
    }
    fclose(v5);
  }
  v17 = 0;
  v18 = 0;
  v19 = 5072LL * (int)v2;
  if ( *(int *)((char *)&unk_190123460 + v19) <= 0 )
  {
    v22 = dword_178446BAC;
  }
  else
  {
    v20 = *(_QWORD *)((char *)&unk_190123468 + v19);
    v21 = 0;
    do
    {
      *(float *)(v21 + v20) = *(float *)(v21 + v20) - *(float *)((char *)&unk_190123238 + v19);
      *(float *)(v21 + v20 + 4) = *(float *)(v21 + v20 + 4) - *(float *)((char *)&unk_19012323C + v19);
      *(float *)(v21 + v20 + 8) = *(float *)(v21 + v20 + 8) - *(float *)((char *)&unk_190123240 + v19);
      v20 = *(_QWORD *)((char *)&unk_190123468 + v19);
      if ( (float)((float)((float)(*(float *)(v21 + v20) * *(float *)(v21 + v20))
                         + (float)(*(float *)(v21 + v20 + 4) * *(float *)(v21 + v20 + 4)))
                 + (float)(*(float *)(v21 + v20 + 8) * *(float *)(v21 + v20 + 8))) > 1.0 )
        v17 = 1;
      ++v18;
      v21 += 12;
    }
    while ( v18 < *(_DWORD *)((char *)&unk_190123460 + v19) );
    v22 = dword_178446BAC;
    if ( v17 )
      v22 = 0;
    dword_178446BAC = v22;
  }
  v23 = 0;
  dword_178416BA8 = 0;
  v24 = 0;
  if ( v22 > 0 )
  {
    v25 = dword_178446BB4;
    do
    {
      dword_178416BAC[3 * v23] = *v25;
      dword_178416BB0[3 * dword_178416BA8] = v25[1];
      dword_178416BB4[3 * dword_178416BA8] = v25[2];
      v23 = ++dword_178416BA8;
      if ( *(v25 - 1) == 4 )
      {
        dword_178416BAC[3 * v23] = *v25;
        dword_178416BB0[3 * dword_178416BA8] = v25[2];
        dword_178416BB4[3 * dword_178416BA8] = v25[3];
        v23 = ++dword_178416BA8;
      }
      ++v24;
      v25 += 5;
    }
    while ( v24 < dword_178446BAC );
  }
  v26 = *(void **)((char *)&unk_190123480 + v19);
  *(_DWORD *)((char *)&unk_190123478 + v19) = v23;
  free(v26);
  v27 = malloc(12 * *(_DWORD *)((char *)&unk_190123478 + v19));
  v28 = *(_DWORD *)((char *)&unk_190123478 + v19);
  *(_QWORD *)((char *)&unk_190123480 + v19) = v27;
  result = memcpy(v27, dword_178416BAC, 12 * v28);
  if ( *(int *)((char *)&unk_190123250 + v19) > 0 )
  {
    v30 = (float *)((char *)&unk_190123260 + v19);
    do
    {
      v31 = *(v30 - 2) - *(float *)((char *)&unk_190123238 + v19);
      *(v30 - 2) = v31;
      *(v30 - 1) = *(v30 - 1) - *(float *)((char *)&unk_19012323C + v19);
      *v30 = *v30 - *(float *)((char *)&unk_190123240 + v19);
      result = (void *)*((unsigned int *)v30 - 3);
      if ( !(_DWORD)result )
      {
        *(float *)((char *)&unk_190122130 + v19) = v31;
        *(float *)((char *)&unk_190122134 + v19) = *(v30 - 1);
        *(float *)((char *)&unk_190122138 + v19) = *v30;
        result = (void *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 1 )
      {
        *(float *)((char *)&unk_190122140 + v19) = *(v30 - 2);
        *(float *)((char *)&unk_190122144 + v19) = *(v30 - 1);
        *(float *)((char *)&unk_190122148 + v19) = *v30;
        result = (void *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 2 )
      {
        *(float *)((char *)&unk_19012214C + v19) = *(v30 - 2);
        *(float *)((char *)&unk_190122150 + v19) = *(v30 - 1);
        *(float *)((char *)&unk_190122154 + v19) = *v30;
        result = (void *)*((unsigned int *)v30 - 3);
      }
      if ( (_DWORD)result == 4 )
      {
        dword_190122158[v19 / 4] = *((_DWORD *)v30 - 2);
        dword_19012215C[v19 / 4] = *((_DWORD *)v30 - 1);
        result = (void *)*(unsigned int *)v30;
        dword_190122160[v19 / 4] = (int)result;
      }
      ++v4;
      v30 += 4;
    }
    while ( v4 < *(_DWORD *)((char *)&unk_190123250 + v19) );
  }
  return result;
}

