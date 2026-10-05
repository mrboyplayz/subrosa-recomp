/* Address: 0x14022cb3c | Name: sub_14022CB3C | Size: 132 bytes */
char __fastcall sub_14022CB3C(__int64 a1, _BYTE *a2, _BYTE *a3, char *a4, _QWORD *a5)
{
  char v5; // r10
  _BYTE *v6; // r11
  unsigned __int64 v7; // rax
  bool v8; // zf
  char *v9; // rax

  if ( !a3 )
    return 1;
  v5 = *a4;
  v6 = a2;
  while ( v5 == v6[a1 - (_QWORD)a2] || v5 == *v6 )
  {
    v7 = a5[2] + 1LL;
    v8 = a5[1] == 0;
    a5[2] = v7;
    if ( !v8 && v7 > a5[1] || (v9 = *(char **)(*a5 + 16LL), v9 == *(char **)(*a5 + 8LL)) )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v9;
      *(_QWORD *)(*a5 + 16LL) = v9 + 1;
    }
    ++v6;
    *a4 = v5;
    if ( (_BYTE *)(v6 - a2) == a3 )
      return 1;
  }
  return 0;
}

