/* Address: 0x1402369b4 | Name: ?write_integer@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_N_K@Z | Size: 114 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::write_integer(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(a1 + 96) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 96) - 8LL);
  if ( !v3 )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0;
  }
  v6 = unknown_libname_650(a1 + 24) - 1;
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

