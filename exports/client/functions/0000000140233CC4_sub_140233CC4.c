/* Address: 0x140233cc4 | Name: sub_140233CC4 | Size: 286 bytes */
char __fastcall sub_140233CC4(__int64 a1)
{
  int v1; // edx
  char v3; // di
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // rax
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= 5 )
  {
    if ( v1 == 5 )
    {
      v7 = 10;
      goto LABEL_37;
    }
    v3 = 0;
    if ( v1 )
    {
      v4 = v1 - 1;
      if ( !v4 )
        return __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_string_specifier(
                 a1,
                 1);
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
          {
            v7 = 8;
LABEL_37:
            v8 = 0;
            return sub_140234288(a1, v7, v8);
          }
          return 0;
        }
        v7 = 10;
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      return sub_140234288(a1, v7, v8);
    }
    v10 = unknown_libname_649(a1 + 32) - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = 0;
      return sub_14022DB28(a1, v11);
    }
    v13 = 0;
    return sub_14022D3C8(a1, v13);
  }
  v14 = v1 - 6;
  if ( !v14 )
  {
    v7 = 16;
    goto LABEL_37;
  }
  v15 = v14 - 1;
  if ( !v15 )
    return sub_140234088();
  v16 = v15 - 1;
  if ( !v16 )
  {
    v17 = unknown_libname_649(a1 + 32) - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return 0;
      v11 = 8;
      return sub_14022DB28(a1, v11);
    }
    v13 = 8;
    return sub_14022D3C8(a1, v13);
  }
  if ( v16 != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  else
    return __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::write_integer(
             a1,
             *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8));
}

