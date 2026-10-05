/* Address: 0x14023693c | Name: ?write_integer@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_N_K@Z | Size: 120 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(a1 + 128) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( !v3 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0;
  }
  v6 = unknown_libname_649(a1 + 32) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
          return 0;
        *v3 = a2;
      }
      else
      {
        *(_DWORD *)v3 = a2;
      }
    }
    else
    {
      *(_WORD *)v3 = a2;
    }
  }
  else
  {
    *(_BYTE *)v3 = a2;
  }
  return 1;
}

