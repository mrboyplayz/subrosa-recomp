/* Address: 0x140263e90 | Name: TranslateName_0 | Size: 127 bytes */
char __fastcall TranslateName_0(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // edi
  int v5; // ebx
  __int64 v7; // rsi
  int v8; // eax

  v3 = 0;
  v5 = a2;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    v7 = (v3 + v5) / 2;
    v8 = sub_14026AE18(*a3, *(_QWORD *)(16 * v7 + a1));
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v3 = v7 + 1;
    else
      v5 = v7 - 1;
    if ( v3 > v5 )
      return 0;
  }
  *a3 = 16 * v7 + a1 + 8;
  return 1;
}

