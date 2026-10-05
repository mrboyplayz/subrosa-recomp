/* Address: 0x14025fdc4 | Name: sub_14025FDC4 | Size: 257 bytes */
void *sub_14025FDC4()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  _WORD *i; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebp
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rsi

  v0 = ((__int64 (*)(void))GetEnvironmentStringsW)();
  v1 = v0;
  if ( !v0 )
    goto LABEL_12;
  for ( i = (_WORD *)v0; *i; i += v3 + 1 )
  {
    v3 = -1;
    do
      ++v3;
    while ( i[v3] );
  }
  v4 = ((__int64)i - v1 + 2) >> 1;
  v5 = sub_140258A84(0, 0, v1, (unsigned int)v4, 0, 0, 0, 0);
  v6 = v5;
  if ( v5 )
  {
    v7 = malloc_base(v5);
    v8 = (void *)v7;
    if ( v7 && (unsigned int)sub_140258A84(0, 0, v1, (unsigned int)v4, v7, v6, 0, 0) )
    {
      v9 = v8;
      v8 = nullptr;
    }
    else
    {
      v9 = nullptr;
    }
    free_base(v8);
  }
  else
  {
LABEL_12:
    v9 = nullptr;
  }
  if ( v1 )
    ((void (__fastcall *)(__int64))FreeEnvironmentStringsW)(v1);
  return v9;
}

