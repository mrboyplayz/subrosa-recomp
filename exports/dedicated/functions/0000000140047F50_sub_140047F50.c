/* Address: 0x140047f50 | Name: sub_140047F50 | Size: 146 bytes */
__int64 __fastcall sub_140047F50(_BYTE *a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  int v5; // r9d
  _BYTE *v6; // rdx
  char v7; // cl
  __int64 result; // rax
  int i; // ecx
  char v10; // dl

  v2 = dword_1406A6780;
  v3 = 0;
  if ( dword_1406A6780 < dword_1406A6784 )
  {
    v5 = a2 - 1;
    v6 = a1;
    do
    {
      if ( v3 >= v5 )
        break;
      v7 = *((_BYTE *)&dword_1406A6780 + v2 + 8);
      if ( v7 == 13 )
        break;
      if ( v7 == 10 )
        break;
      *v6 = v7;
      ++v3;
      ++v6;
      v2 = ++dword_1406A6780;
    }
    while ( dword_1406A6780 < dword_1406A6784 );
  }
  result = v3;
  a1[v3] = 0;
  for ( i = dword_1406A6780; i < dword_1406A6784; dword_1406A6780 = ++i )
  {
    result = i;
    v10 = *((_BYTE *)&dword_1406A6780 + i + 8);
    if ( v10 != 13 && v10 != 10 )
      break;
  }
  return result;
}

