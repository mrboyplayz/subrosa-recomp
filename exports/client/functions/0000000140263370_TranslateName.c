/* Address: 0x140263370 | Name: TranslateName | Size: 153 bytes */
__int64 __fastcall TranslateName(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  int v7; // eax
  int v8; // esi
  bool v9; // zf
  __int64 v10; // rbp

  v3 = 0;
  v5 = a2;
  v7 = 1;
  v8 = 0;
  if ( a2 < 0 )
  {
LABEL_9:
    v9 = v7 == 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = v7 == 0;
      if ( !v7 )
        break;
      v10 = (v8 + v5) / 2;
      v7 = sub_14026AE18(*a3, *(_QWORD *)(16 * v10 + a1));
      if ( v7 )
      {
        if ( v7 >= 0 )
          v8 = v10 + 1;
        else
          v5 = v10 - 1;
      }
      else
      {
        *a3 = 16 * v10 + a1 + 8;
      }
      if ( v8 > v5 )
        goto LABEL_9;
    }
  }
  LOBYTE(v3) = v9;
  return v3;
}

