/* Address: 0x1402580b0 | Name: ??$common_dupenv_s_nolock@D@@YAHQEAPEADQEA_KQEBDH2H@Z | Size: 214 bytes */
__int64 __fastcall common_dupenv_s_nolock<char>(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  _BYTE *v10; // rax

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a3 )
  {
LABEL_2:
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
  v6 = sub_140258328(a3);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(v6 + v8) );
  v9 = v8 + 1;
  v10 = (_BYTE *)j__calloc_base(v9);
  *a1 = v10;
  if ( v10 )
  {
    if ( (unsigned int)strcpy_s(v10, v9, v7) )
    {
      sub_14024CFBC();
      JUMPOUT(0x140258185LL);
    }
    if ( a2 )
      *a2 = v9;
    return 0;
  }
  *errno() = 12;
  return 12;
}

