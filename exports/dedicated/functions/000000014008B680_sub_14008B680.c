/* Address: 0x14008b680 | Name: sub_14008B680 | Size: 807 bytes */
int __fastcall sub_14008B680(int a1, char *a2)
{
  __int64 v2; // rdi
  int v4; // r12d
  char *v5; // rdx
  int v6; // r13d
  char v7; // cl
  FILE *v8; // rax
  FILE *v9; // rbx
  __int64 v10; // rbp
  char *v11; // r15
  void *v12; // rax
  void *v13; // rcx
  void *v14; // rax
  int v15; // edi
  int v16; // r14d
  __int64 v17; // r12
  int v18; // esi
  int v19; // ebp
  int v20; // esi
  int v22; // [rsp+20h] [rbp-258h]
  int Buffer; // [rsp+24h] [rbp-254h] BYREF
  int v24; // [rsp+28h] [rbp-250h]
  __int64 v25; // [rsp+30h] [rbp-248h]
  char FileName[512]; // [rsp+40h] [rbp-238h] BYREF

  v2 = a1;
  v22 = _chdir("data");
  v4 = v22;
  v24 = _chdir("item");
  v5 = (char *)(FileName - a2);
  v6 = v24;
  do
  {
    v7 = *a2;
    a2[(_QWORD)v5] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = fopen(FileName, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread(&Buffer, 4u, 1u, v8);
    if ( Buffer != 2 )
    {
      if ( !v6 )
        _chdir("..");
      if ( !v22 )
        _chdir("..");
      LODWORD(v8) = fclose(v9);
      return (int)v8;
    }
    v10 = 200 * v2;
    v25 = 200 * v2;
    fread((char *)&unk_18E9B89A0 + 200 * v2, 1u, 0x40u, v9);
    v11 = (char *)&unk_18E9B8960 + v10;
    fread((char *)&unk_18E9B8960 + 200 * v2 + 132, 4u, 1u, v9);
    free(*((void **)&unk_18E9B8960 + 25 * v2 + 17));
    v12 = malloc(12 * *((_DWORD *)&unk_18E9B8960 + 50 * v2 + 33));
    v13 = *((void **)&unk_18E9B8960 + 25 * v2 + 18);
    *(_QWORD *)((char *)&unk_18E9B8960 + v10 + 136) = v12;
    free(v13);
    v14 = malloc(8 * *((_DWORD *)&unk_18E9B8960 + 50 * v2 + 33));
    v15 = 0;
    *(_QWORD *)((char *)&unk_18E9B8960 + v10 + 144) = v14;
    v16 = 0;
    if ( *(int *)((char *)&unk_18E9B8960 + v10 + 132) > 0 )
    {
      v17 = v25;
      v18 = 0;
      v19 = 0;
      do
      {
        fread((void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v17 + 136) + 4LL * v19), 4u, 3u, v9);
        fread((void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v17 + 144) + 4LL * v18), 4u, 2u, v9);
        ++v16;
        v19 += 3;
        v18 += 2;
      }
      while ( v16 < *((_DWORD *)v11 + 33) );
      v4 = v22;
      v6 = v24;
      v10 = v25;
    }
    fread((char *)&unk_18E9B8960 + v10 + 152, 4u, 1u, v9);
    free(*(void **)((char *)&unk_18E9B8960 + v10 + 160));
    *(_QWORD *)((char *)&unk_18E9B8960 + v10 + 160) = malloc(12 * *(_DWORD *)((char *)&unk_18E9B8960 + v10 + 152));
    if ( *(int *)((char *)&unk_18E9B8960 + v10 + 152) > 0 )
    {
      v20 = 0;
      do
      {
        fread((void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v10 + 160) + 4LL * v20), 4u, 3u, v9);
        ++v15;
        v20 += 3;
      }
      while ( v15 < *(_DWORD *)((char *)&unk_18E9B8960 + v10 + 152) );
      v4 = v22;
    }
    LODWORD(v8) = fclose(v9);
  }
  if ( !v6 )
    LODWORD(v8) = _chdir("..");
  if ( !v4 )
    LODWORD(v8) = _chdir("..");
  return (int)v8;
}

