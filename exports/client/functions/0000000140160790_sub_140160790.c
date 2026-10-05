/* Address: 0x140160790 | Name: sub_140160790 | Size: 197 bytes */
char __fastcall sub_140160790(_BYTE *a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  char *v5; // rax
  char v6; // cl
  __int64 v7; // rbx
  char *v8; // rax
  char v9; // cl

  result = a1[18472];
  if ( result != -1 )
  {
    a1[18472] = -1;
    return result;
  }
  v4 = *(_QWORD *)a1;
  v5 = *(char **)(*(_QWORD *)a1 + 192LL);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
  {
    if ( !*(_DWORD *)(v4 + 48) )
      return -1;
    sub_14016D910(*(_QWORD *)a1, a2);
    v5 = *(char **)(v4 + 192);
  }
  v6 = *v5;
  *(_QWORD *)(v4 + 192) = v5 + 1;
  if ( v6 == -1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)a1;
      v8 = *(char **)(*(_QWORD *)a1 + 192LL);
      if ( (unsigned __int64)v8 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
      {
        if ( !*(_DWORD *)(v7 + 48) )
          return 0;
        sub_14016D910(*(_QWORD *)a1, a2);
        v8 = *(char **)(v7 + 192);
      }
      v9 = *v8;
      *(_QWORD *)(v7 + 192) = v8 + 1;
      if ( v9 != -1 )
        return v9;
    }
  }
  return -1;
}

