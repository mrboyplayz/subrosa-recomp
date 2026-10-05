/* Address: 0x140234b48 | Name: ?process_string_specifier@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NW4conversion_mode@2@@Z | Size: 144 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>>::process_string_specifier(
        _QWORD *a1,
        int a2)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E1E0((__int64)(a1 + 1));
    v5 = a1[3];
    if ( v5 != a1[1] && (v5 != a1[2] || v4 != -1) )
      a1[3] = v5 - 2;
  }
  v6 = unknown_libname_650(a1 + 4) - 1;
  if ( !v6 )
    return sub_14022D774((__int64)a1, a2);
  if ( v6 == 1 )
    return sub_14022DED8((__int64)a1, a2);
  return 0;
}

