/* Address: 0x14009d4c0 | Name: main | Size: 487 bytes */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // r9d
  __int64 v8; // r10
  const char *v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rax
  char v13; // cl
  bool v14; // zf
  char *v15; // rdx
  char *v16; // rdx
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // rcx
  const char *v20; // r9
  __int64 v21; // r8
  char v22; // dl

  v4 = 1;
  v6 = argc;
  if ( argc > 1LL )
  {
    v7 = dword_191625F54;
    v8 = 1;
    do
    {
      v9 = argv[v8];
      v10 = 0;
      do
      {
        v11 = aTest1[v10++];
        if ( v11 != v9[v10 - 1] )
          goto LABEL_7;
      }
      while ( v10 != 7 );
      dword_191625F50 = 1;
      v9 = argv[v8];
LABEL_7:
      v12 = 0;
      do
      {
        v13 = aTest2_0[v12++];
        v14 = v13 == v9[v12 - 1];
        if ( v13 != v9[v12 - 1] )
          goto LABEL_11;
      }
      while ( v12 != 7 );
      v14 = v13 == v9[6];
LABEL_11:
      if ( v14 )
        v7 = 1;
      ++v8;
      dword_191625F54 = v7;
    }
    while ( v8 < v6 );
  }
  dword_191625F54 = 1;
  byte_16E6A33C8 = 0;
  if ( argc > 1 )
  {
    v15 = &byte_16E6A33C8 - 1;
    do
      v14 = *++v15 == 0;
    while ( !v14 );
    strcpy(v15, argv[1]);
    v16 = &byte_16E6A33C8 - 1;
    do
      v14 = *++v16 == 0;
    while ( !v14 );
    *(_WORD *)v16 = 47;
  }
  v17 = &byte_16E6A33C8 - 1;
  do
    v14 = *++v17 == 0;
  while ( !v14 );
  strcpy(v17, "dedlog.txt");
  nullsub_1();
  sub_1400BEDA0();
  sub_14004F860();
  dword_196ABD8D8 = sub_140046C40();
  sub_1400D1C70();
  sub_140028DB0();
  sub_140051290();
  if ( v6 > 1 )
  {
    do
    {
      if ( v4 == 1 )
      {
        v18 = &byte_196ABD6C0[-1];
        do
          v14 = *++v18 == 0;
        while ( !v14 );
        *(_WORD *)v18 = 47;
        v19 = &byte_196ABD6C0[-1];
        do
          v14 = *++v19 == 0;
        while ( !v14 );
        v20 = argv[1];
        v21 = 0;
        do
        {
          v22 = v20[v21];
          v19[v21++] = v22;
        }
        while ( v22 );
      }
      ++v4;
    }
    while ( v4 < v6 );
  }
  sub_14008E030(0);
  WSAStartup(0x101u, &WSAData);
  sub_14004AF40();
}

