/* Address: 0x140234a34 | Name: ?process_string_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NW4conversion_mode@2@@Z | Size: 137 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_string_specifier(
        _QWORD *a1,
        int a2)
{
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E18C((__int64)(a1 + 1), a1[15]);
    v5 = a1[3];
    if ( v5 != a1[1] && (v5 != a1[2] || v4 != -1) )
      a1[3] = v5 - 1;
  }
  v6 = unknown_libname_649(a1 + 4) - 1;
  if ( !v6 )
    return sub_14022D3C8((__int64)a1, a2);
  if ( v6 == 1 )
    return sub_14022DB28((__int64)a1, a2);
  return 0;
}

