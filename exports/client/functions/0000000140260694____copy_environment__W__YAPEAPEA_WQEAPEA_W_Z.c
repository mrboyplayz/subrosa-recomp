/* Address: 0x140260694 | Name: ??$copy_environment@_W@@YAPEAPEA_WQEAPEA_W@Z | Size: 239 bytes */
__int64 __fastcall copy_environment<wchar_t>(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  _WORD *v9; // rcx

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = 0;
  for ( i = v1; *i; ++i )
    ++v3;
  v5 = calloc_base(v3 + 1, 8u);
  if ( !v5 )
LABEL_15:
    abort();
  v6 = *v1;
  if ( *v1 )
  {
    v7 = v5 - (_QWORD)v1;
    do
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_WORD *)(v6 + 2 * v8) );
      *(__int64 *)((char *)v1 + v7) = calloc_base(v8 + 1, 2u);
      free_base(nullptr);
      v9 = *(_WORD **)((char *)v1 + v7);
      if ( !v9 )
        goto LABEL_15;
      if ( (unsigned int)sub_140259444(v9, v8 + 1, *v1) )
      {
        sub_14024CFBC();
        __debugbreak();
      }
      v6 = *++v1;
    }
    while ( *v1 );
  }
  free_base(nullptr);
  return v5;
}

