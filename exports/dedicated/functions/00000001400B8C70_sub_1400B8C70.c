/* Address: 0x1400b8c70 | Name: sub_1400B8C70 | Size: 583 bytes */
__int64 __fastcall sub_1400B8C70(int a1, char *a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r14d
  int v7; // r15d
  char *v8; // rdx
  char v9; // cl
  FILE *v10; // rax
  FILE *v12; // rax
  FILE *v13; // rdi
  __int64 v14; // r12
  char *v15; // rsi
  int i; // ebp
  __int64 v17; // rbx
  int Buffer[4]; // [rsp+20h] [rbp-248h] BYREF
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  v3 = a1;
  v6 = _chdir("data");
  v7 = _chdir("itemset");
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
      Buffer[0] = 1;
      fwrite(Buffer, 4u, 1u, v12);
      v14 = 3792 * v3;
      v15 = (char *)&unk_18E9EA980 + 3792 * v3;
      fwrite(v15 + 76, 4u, 1u, v13);
      for ( i = 0; i < *((_DWORD *)v15 + 19); ++i )
      {
        v17 = v14 + 116LL * i;
        fwrite((char *)&unk_18E9EA9D0 + v17, 1u, 0x40u, v13);
        fwrite((char *)&unk_18E9EAA14 + v17, 4u, 3u, v13);
        fwrite((char *)&unk_18E9EAA20 + v17, 4u, 3u, v13);
        fwrite((char *)&unk_18E9EAA2C + v17, 4u, 3u, v13);
        fwrite((char *)&unk_18E9EAA38 + v17, 4u, 3u, v13);
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

