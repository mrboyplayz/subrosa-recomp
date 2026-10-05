/* Address: 0x14014ca70 | Name: sub_14014CA70 | Size: 362 bytes */
__int64 sub_14014CA70()
{
  unsigned int *v0; // rbx
  void *v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax

  v0 = &dword_140404A6C[18182167];
  do
  {
    v1 = *((void **)v0 - 2);
    *(v0 - 6) = 1;
    *v0 = 1086324736;
    *(v0 - 5) = 0x40000;
    free(v1);
    v2 = j__malloc_base(0x100000);
    *((_QWORD *)v0 - 2) = v2;
    MEMORY[0x1401FCD30](v2, 0, 0x100000);
    v3 = 0;
    v4 = 384;
    *((_QWORD *)v0 - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)v0 - 2) + 4 * v3) = 0;
      v5 = *((_QWORD *)v0 - 2);
      v6 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v6;
      *(_DWORD *)(v5 + 4 * v6) = 0;
      v7 = *((_QWORD *)v0 - 2);
      v8 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v8;
      *(_DWORD *)(v7 + 4 * v8) = 0;
      v9 = *((_QWORD *)v0 - 2);
      v10 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v10;
      *(_DWORD *)(v9 + 4 * v10) = 0;
      v11 = *((_QWORD *)v0 - 2);
      v12 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v12;
      *(_DWORD *)(v11 + 4 * v12) = 0;
      v13 = *((_QWORD *)v0 - 2);
      v14 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v14;
      *(_DWORD *)(v13 + 4 * v14) = 0;
      v15 = *((_QWORD *)v0 - 2);
      v16 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v16;
      *(_DWORD *)(v15 + 4 * v16) = 0;
      v17 = *((_QWORD *)v0 - 2);
      v18 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v18;
      *(_DWORD *)(v17 + 4 * v18) = 0;
      v19 = *((_QWORD *)v0 - 2);
      v20 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v20;
      *(_DWORD *)(v19 + 4 * v20) = 0;
      v21 = *((_QWORD *)v0 - 2);
      v22 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v22;
      *(_DWORD *)(v21 + 4 * v22) = 0;
      result = (*(v0 - 2) + 1) & 0x3FFFF;
      v3 = (unsigned int)result;
      *(v0 - 2) = result;
      --v4;
    }
    while ( v4 );
    v0 += 8;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[18182231] );
  return result;
}

