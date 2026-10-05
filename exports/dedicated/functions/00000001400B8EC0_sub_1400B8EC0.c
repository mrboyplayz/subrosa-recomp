/* Address: 0x1400b8ec0 | Name: sub_1400B8EC0 | Size: 663 bytes */
__int64 __fastcall sub_1400B8EC0(int a1, char *a2, int a3)
{
  __int64 v3; // rbp
  int v6; // r12d
  int v7; // r13d
  char *v8; // rdx
  char v9; // cl
  FILE *v10; // rax
  FILE *v12; // rax
  FILE *v13; // rsi
  __int64 v14; // r15
  int v15; // ebx
  int v16; // r14d
  int v17; // edi
  int v18; // ebp
  int v19; // edi
  int Buffer; // [rsp+20h] [rbp-248h] BYREF
  int v21; // [rsp+24h] [rbp-244h]
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  v3 = a1;
  v21 = _chdir("data");
  v6 = v21;
  v7 = _chdir("item");
  v8 = (char *)(FileName - a2);
  do
  {
    v9 = *a2;
    a2[(_QWORD)v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = fopen(FileName, "rb")) == nullptr )
  {
    v12 = fopen(FileName, "wb");
    v13 = v12;
    if ( v12 )
    {
      Buffer = 2;
      fwrite(&Buffer, 4u, 1u, v12);
      v14 = 200 * v3;
      fwrite((char *)&unk_18E9B89A0 + 200 * v3, 1u, 0x40u, v13);
      fwrite((char *)&unk_18E9B8960 + 200 * v3 + 132, 4u, 1u, v13);
      v15 = 0;
      v16 = 0;
      if ( *((int *)&unk_18E9B8960 + 50 * v3 + 33) > 0 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          fwrite((const void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v14 + 136) + 4LL * v18), 4u, 3u, v13);
          fwrite((const void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v14 + 144) + 4LL * v17), 4u, 2u, v13);
          ++v16;
          v18 += 3;
          v17 += 2;
        }
        while ( v16 < *(_DWORD *)((char *)&unk_18E9B8960 + v14 + 132) );
        v6 = v21;
      }
      fwrite((char *)&unk_18E9B8960 + v14 + 152, 4u, 1u, v13);
      if ( *(int *)((char *)&unk_18E9B8960 + v14 + 152) > 0 )
      {
        v19 = 0;
        do
        {
          fwrite((const void *)(*(_QWORD *)((char *)&unk_18E9B8960 + v14 + 160) + 4LL * v19), 4u, 3u, v13);
          ++v15;
          v19 += 3;
        }
        while ( v15 < *(_DWORD *)((char *)&unk_18E9B8960 + v14 + 152) );
      }
      fclose(v13);
    }
    if ( !v7 )
      _chdir("..");
    if ( !v6 )
      _chdir("..");
    return 1;
  }
  else
  {
    fclose(v10);
    if ( !v7 )
      _chdir("..");
    if ( !v6 )
      _chdir("..");
    return 0;
  }
}

