/* Address: 0x1400b8aa0 | Name: sub_1400B8AA0 | Size: 461 bytes */
__int64 __fastcall sub_1400B8AA0(int a1, char *a2)
{
  __int64 v3; // rsi
  int v4; // r15d
  int v5; // r12d
  char *v6; // rdx
  char v7; // cl
  FILE *v8; // rax
  FILE *v9; // rdi
  __int64 v10; // r14
  int *v11; // rbp
  int i; // esi
  __int64 v13; // rbx
  int Buffer[4]; // [rsp+20h] [rbp-248h] BYREF
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  v3 = a1;
  v4 = _chdir("data");
  v5 = _chdir("mission");
  v6 = (char *)(FileName - a2);
  do
  {
    v7 = *a2;
    a2[(_QWORD)v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = fopen(FileName, "wb");
  v9 = v8;
  if ( v8 )
  {
    Buffer[0] = 1;
    fwrite(Buffer, 4u, 1u, v8);
    v10 = 4100 * v3;
    v11 = &dword_163D849E0[1025 * v3];
    fwrite(v11, 4u, 1u, v9);
    for ( i = 0; i < *v11; ++i )
    {
      v13 = v10 + 16LL * i;
      fwrite((char *)&unk_163D849E4 + v13, 4u, 3u, v9);
      fwrite((char *)&unk_163D849F0 + v13, 4u, 1u, v9);
    }
    fclose(v9);
  }
  if ( !v5 )
    _chdir("..");
  if ( !v4 )
    _chdir("..");
  return 1;
}

