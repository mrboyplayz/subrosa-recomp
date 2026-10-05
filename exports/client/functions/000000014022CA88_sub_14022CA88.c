/* Address: 0x14022ca88 | Name: sub_14022CA88 | Size: 177 bytes */
char __fastcall sub_14022CA88(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, __int64 a5)
{
  char v8; // r10
  _BYTE *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  bool v12; // zf
  FILE **v13; // rdi
  int v14; // eax

  if ( !a3 )
    return 1;
  v8 = *a4;
  v9 = a2;
  v10 = a1 - (_QWORD)a2;
  while ( v8 == v9[v10] || v8 == *v9 )
  {
    v11 = *(_QWORD *)(a5 + 16) + 1LL;
    v12 = *(_QWORD *)(a5 + 8) == 0;
    *(_QWORD *)(a5 + 16) = v11;
    if ( !v12 && v11 > *(_QWORD *)(a5 + 8)
      || (v13 = *(FILE ***)a5, v14 = getc_nolock(**(FILE ***)a5), v8 = v14, v14 == -1) )
    {
      v8 = 0;
    }
    else
    {
      v13[1] = (FILE *)((char *)v13[1] + 1);
    }
    ++v9;
    *a4 = v8;
    if ( (_BYTE *)(v9 - a2) == a3 )
      return 1;
  }
  return 0;
}

