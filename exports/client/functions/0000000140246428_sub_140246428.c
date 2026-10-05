/* Address: 0x140246428 | Name: sub_140246428 | Size: 262 bytes */
void *__fastcall sub_140246428(char *Source)
{
  void *v2; // rsi
  __int64 v3; // rcx
  char *v4; // r8
  char i; // dl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rbx
  __int64 *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi

  v2 = nullptr;
  v3 = 0;
  v4 = Source;
  for ( i = *Source; i; i = *v4 )
  {
    v6 = v3 + 1;
    if ( i == 61 )
      v6 = v3;
    v3 = v6;
    v7 = -1;
    do
      ++v7;
    while ( v4[v7] );
    v4 += v7 + 1;
  }
  v8 = calloc_base(v3 + 1, 8);
  v9 = (void *)v8;
  if ( v8 )
  {
    v10 = (__int64 *)v8;
    while ( *Source )
    {
      v11 = -1;
      do
        ++v11;
      while ( Source[v11] );
      v12 = v11 + 1;
      if ( *Source != 61 )
      {
        v13 = calloc_base(v12, 1);
        v14 = v13;
        if ( !v13 )
        {
          unknown_libname_753(v9);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)strcpy_s(v13, v12, Source) )
        {
          sub_14024CFBC(0, 0, 0, 0, 0);
          JUMPOUT(0x14024652DLL);
        }
        *v10++ = v14;
        free_base(nullptr);
      }
      Source += v12;
    }
    v2 = v9;
  }
LABEL_20:
  free_base(nullptr);
  return v2;
}

