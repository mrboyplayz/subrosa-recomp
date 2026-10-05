/* Address: 0x140258188 | Name: ??$common_dupenv_s_nolock@_W@@YAHQEAPEA_WQEA_KQEB_WHQEBDH@Z | Size: 222 bytes */
__int64 __fastcall common_dupenv_s_nolock<wchar_t>(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax

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
  v6 = sub_1402583B4(a3);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = -1;
  do
    ++v8;
  while ( *(_WORD *)(v6 + 2 * v8) );
  v9 = v8 + 1;
  v10 = j__calloc_base(v9);
  *a1 = v10;
  if ( v10 )
  {
    if ( (unsigned int)sub_140259444(v10, v9, v7) )
    {
      sub_14024CFBC();
      JUMPOUT(0x140258265LL);
    }
    if ( a2 )
      *a2 = v9;
    return 0;
  }
  *errno() = 12;
  return 12;
}

