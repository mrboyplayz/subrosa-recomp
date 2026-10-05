/* Address: 0x140260ca4 | Name: ??$common_tcsncpy_s@_W@@YAHQEA_W_KQEB_W1@Z | Size: 219 bytes */
__int64 __fastcall common_tcsncpy_s<wchar_t>(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // r11
  _WORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int16 v12; // ax
  __int16 v13; // ax

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
    {
LABEL_4:
      v5 = errno();
      v6 = 22;
LABEL_5:
      *v5 = v6;
      sub_14024CF6C();
      return v6;
    }
    return 0;
  }
  if ( !a2 )
    goto LABEL_4;
  if ( !a4 )
  {
    *a1 = 0;
    return 0;
  }
  if ( !a3 )
  {
    *a1 = 0;
    goto LABEL_4;
  }
  v8 = a3 - (_QWORD)a1;
  v9 = a1;
  v10 = a2;
  v11 = a4;
  if ( a4 == -1 )
  {
    do
    {
      v12 = *(_WORD *)((char *)v9 + v8);
      *v9++ = v12;
      if ( !v12 )
        break;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    do
    {
      v13 = *(_WORD *)((char *)v9 + v8);
      *v9++ = v13;
      if ( !v13 )
        break;
      if ( !--v10 )
        break;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
      *v9 = 0;
  }
  if ( v10 )
    return 0;
  if ( a4 != -1 )
  {
    *a1 = 0;
    v5 = errno();
    v6 = 34;
    goto LABEL_5;
  }
  a1[a2 - 1] = 0;
  return 80;
}

