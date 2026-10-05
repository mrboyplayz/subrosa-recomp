/* Address: 0x14008b1f0 | Name: sub_14008B1F0 | Size: 407 bytes */
int __fastcall sub_14008B1F0(int a1, char *a2)
{
  __int64 v2; // rsi
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
  _DWORD Buffer[4]; // [rsp+20h] [rbp-248h] BYREF
  char FileName[512]; // [rsp+30h] [rbp-238h] BYREF

  v2 = a1;
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
  v8 = fopen(FileName, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread(Buffer, 4u, 1u, v8);
    if ( Buffer[0] != 1 )
    {
      LODWORD(v8) = fclose(v9);
      return (int)v8;
    }
    v10 = 4100 * v2;
    v11 = &dword_163D849E0[1025 * v2];
    fread(v11, 4u, 1u, v9);
    for ( i = 0; i < *v11; ++i )
    {
      v13 = v10 + 16LL * i;
      fread((char *)&unk_163D849E4 + v13, 4u, 3u, v9);
      fread((char *)&unk_163D849F0 + v13, 4u, 1u, v9);
    }
    LODWORD(v8) = fclose(v9);
  }
  if ( !v5 )
    LODWORD(v8) = _chdir("..");
  if ( !v4 )
    LODWORD(v8) = _chdir("..");
  return (int)v8;
}

