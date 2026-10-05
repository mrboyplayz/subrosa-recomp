/* Address: 0x14022cbc0 | Name: sub_14022CBC0 | Size: 184 bytes */
char __fastcall sub_14022CBC0(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, __int64 a5)
{
  _WORD *v7; // rbx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi

  v7 = a2;
  v8 = 0;
  if ( !a3 )
    return 1;
  v9 = *a4;
  v10 = a1 - (_QWORD)a2;
  while ( v9 == *(_WORD *)((char *)v7 + v10) || v9 == *v7 )
  {
    v11 = *(_QWORD *)(a5 + 16) + 1LL;
    *(_QWORD *)(a5 + 16) = v11;
    if ( *(_QWORD *)(a5 + 8) && v11 > *(_QWORD *)(a5 + 8) )
    {
      v9 = 0;
    }
    else
    {
      v12 = *(_QWORD **)a5;
      v9 = j__fgetwc_nolock(**(_QWORD **)a5);
      if ( v9 == -1 )
        v9 = 0;
      else
        ++v12[1];
    }
    ++v8;
    *a4 = v9;
    ++v7;
    if ( v8 == a3 )
      return 1;
  }
  return 0;
}

