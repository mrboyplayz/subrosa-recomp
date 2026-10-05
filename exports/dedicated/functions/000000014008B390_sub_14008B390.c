/* Address: 0x14008b390 | Name: sub_14008B390 | Size: 741 bytes */
int __fastcall sub_14008B390(int a1, char *a2)
{
  __int64 v2; // rsi
  int v4; // r13d
  int v5; // r12d
  char *v6; // rdx
  char v7; // cl
  FILE *v8; // rax
  FILE *v9; // rdi
  int *v10; // rbx
  int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // edi
  int *v15; // r11
  int v16; // r9d
  int *v17; // r10
  char *v18; // rbx
  unsigned __int8 *v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int Buffer; // [rsp+20h] [rbp-248h] BYREF
  int v26; // [rsp+24h] [rbp-244h]
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  v2 = a1;
  v26 = _chdir("data");
  v4 = v26;
  v5 = _chdir("itemset");
  v6 = (char *)(FileName - a2);
  do
  {
    v7 = *a2;
    a2[(_QWORD)v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = fopen(FileName, "rb");
  v9 = v8;
  if ( v8 )
  {
    Buffer = 1;
    fread(&Buffer, 4u, 1u, v8);
    v10 = (int *)((char *)&unk_18E9EA980 + 3792 * v2);
    fread(v10 + 19, 4u, 1u, v9);
    v11 = 0;
    if ( v10[19] > 0 )
    {
      do
      {
        v12 = 3792 * v2 + 116LL * v11;
        fread((char *)&unk_18E9EA9D0 + v12, 1u, 0x40u, v9);
        fread((char *)&unk_18E9EAA14 + v12, 4u, 3u, v9);
        fread((char *)&unk_18E9EAA20 + v12, 4u, 3u, v9);
        fread((char *)&unk_18E9EAA2C + v12, 4u, 3u, v9);
        fread((char *)&unk_18E9EAA38 + v12, 4u, 3u, v9);
        ++v11;
      }
      while ( v11 < *((_DWORD *)&unk_18E9EA980 + 948 * v2 + 19) );
      v4 = v26;
    }
    LODWORD(v8) = fclose(v9);
  }
  if ( !v5 )
    LODWORD(v8) = _chdir("..");
  if ( !v4 )
    LODWORD(v8) = _chdir("..");
  v13 = 3792 * v2;
  v14 = 0;
  if ( *(int *)((char *)&unk_18E9EA980 + v13 + 76) > 0 )
  {
    v15 = (int *)((char *)&unk_18E9EA980 + v13 + 144);
    do
    {
      v16 = 0;
      v17 = dword_1901220F0;
      v18 = (char *)&unk_18E9EA9D0 + 116 * v14 + v13;
      do
      {
        v19 = (unsigned __int8 *)&unk_18E9EA9D0 + 116 * v14 + v13;
        do
        {
          v20 = v19[(char *)v17 - v18];
          v21 = *v19 - v20;
          if ( v21 )
            break;
          ++v19;
        }
        while ( v20 );
        if ( !v21 )
          *v15 = v16;
        v8 = (FILE *)((char *)&unk_18E9EA9D0 + 116 * v14 + v13);
        do
        {
          v22 = *((unsigned __int8 *)&v8->_ptr + (char *)(v17 + 1268) - v18);
          v23 = LOBYTE(v8->_ptr) - v22;
          if ( v23 )
            break;
          v8 = (FILE *)((char *)v8 + 1);
        }
        while ( v22 );
        if ( !v23 )
        {
          LODWORD(v8) = v16 + 1;
          *v15 = v16 + 1;
        }
        v16 += 2;
        v17 += 2536;
      }
      while ( v16 < 46 );
      ++v14;
      v15 += 29;
    }
    while ( v14 < *(_DWORD *)((char *)&unk_18E9EA980 + v13 + 76) );
  }
  return (int)v8;
}

