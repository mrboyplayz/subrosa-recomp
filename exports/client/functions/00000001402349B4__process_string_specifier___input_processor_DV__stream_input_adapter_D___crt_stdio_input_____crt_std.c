/* Address: 0x1402349b4 | Name: ?process_string_specifier@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NW4conversion_mode@2@@Z | Size: 127 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_string_specifier(
        __int64 *a1,
        int a2)
{
  int v4; // eax
  __int64 v5; // rax

  if ( a2 == 1 )
  {
    v4 = sub_14022E0F4((__int64)(a1 + 1), a1[14]);
    if ( v4 != -1 )
    {
      --a1[2];
      sub_14020CE90(v4, a1[1]);
    }
  }
  v5 = unknown_libname_649(a1 + 3) - 1;
  if ( !v5 )
    return sub_14022D22C((__int64)a1, a2);
  if ( v5 == 1 )
    return sub_14022D954((__int64)a1, a2);
  return 0;
}

