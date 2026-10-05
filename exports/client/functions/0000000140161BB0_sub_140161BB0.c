/* Address: 0x140161bb0 | Name: sub_140161BB0 | Size: 353 bytes */
__int64 __fastcall sub_140161BB0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char v4; // cl
  char *v5; // rax
  char v6; // cl
  char *v7; // rax
  char v8; // cl
  char *v9; // rax
  char v10; // cl
  char *v11; // rax
  char v12; // cl
  char *v13; // rax
  char v14; // cl

  v2 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    sub_14016D910(a1, a2);
    v2 = *(char **)(a1 + 192);
  }
  v4 = *v2;
  v5 = v2 + 1;
  *(_QWORD *)(a1 + 192) = v5;
  if ( v4 == 71 )
  {
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      sub_14016D910(a1, a2);
      v5 = *(char **)(a1 + 192);
    }
    v6 = *v5;
    v7 = v5 + 1;
    *(_QWORD *)(a1 + 192) = v7;
    if ( v6 == 73 )
    {
      if ( (unsigned __int64)v7 >= *(_QWORD *)(a1 + 200) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          return 0;
        sub_14016D910(a1, a2);
        v7 = *(char **)(a1 + 192);
      }
      v8 = *v7;
      v9 = v7 + 1;
      *(_QWORD *)(a1 + 192) = v9;
      if ( v8 == 70 )
      {
        if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            return 0;
          sub_14016D910(a1, a2);
          v9 = *(char **)(a1 + 192);
        }
        v10 = *v9;
        v11 = v9 + 1;
        *(_QWORD *)(a1 + 192) = v11;
        if ( v10 == 56 )
        {
          if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            sub_14016D910(a1, a2);
            v11 = *(char **)(a1 + 192);
          }
          v12 = *v11;
          v13 = v11 + 1;
          *(_QWORD *)(a1 + 192) = v13;
          if ( v12 != 57 && v12 != 55 )
            return 0;
          if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            sub_14016D910(a1, a2);
            v13 = *(char **)(a1 + 192);
          }
          v14 = *v13;
          *(_QWORD *)(a1 + 192) = v13 + 1;
          if ( v14 == 97 )
            return 1;
        }
      }
    }
  }
  return 0;
}

