/* Address: 0x140246530 | Name: sub_140246530 | Size: 275 bytes */
void *__fastcall sub_140246530(__int16 *a1)
{
  void *v2; // rsi
  __int64 v3; // rcx
  __int16 *v4; // r8
  __int16 i; // dx
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
  v4 = a1;
  for ( i = *a1; i; i = *v4 )
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
    while ( *a1 )
    {
      v11 = -1;
      do
        ++v11;
      while ( a1[v11] );
      v12 = v11 + 1;
      if ( *a1 != 61 )
      {
        v13 = calloc_base(v12, 2);
        v14 = v13;
        if ( !v13 )
        {
          unknown_libname_754(v9);
          free_base(nullptr);
          goto LABEL_20;
        }
        if ( (unsigned int)sub_140259444(v13, v12, a1) )
        {
          sub_14024CFBC(0, 0, 0, 0, 0);
          JUMPOUT(0x140246642LL);
        }
        *v10++ = v14;
        free_base(nullptr);
      }
      a1 += v12;
    }
    v2 = v9;
  }
LABEL_20:
  free_base(nullptr);
  return v2;
}

