/* Address: 0x140234ac0 | Name: ?process_string_specifier@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NW4conversion_mode@2@@Z | Size: 133 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::process_string_specifier(
        __int64 a1,
        int a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // r8
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E144((_QWORD *)(a1 + 8));
    if ( v4 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v4, *(_QWORD *)(a1 + 8), v5);
    }
  }
  v6 = unknown_libname_650(a1 + 24) - 1;
  if ( !v6 )
    return sub_14022D584(a1, a2);
  if ( v6 == 1 )
    return sub_14022DD14(a1, a2);
  return 0;
}

