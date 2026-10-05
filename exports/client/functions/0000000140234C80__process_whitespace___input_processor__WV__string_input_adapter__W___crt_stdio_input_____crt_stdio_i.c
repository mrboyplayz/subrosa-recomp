/* Address: 0x140234c80 | Name: ?process_whitespace@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 66 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>>::process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int16 v2; // cx
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E1E0(a1 + 8);
  v3 = v1[2];
  if ( v3 != *v1 && (v3 != v1[1] || v2 != -1) )
    v1[2] = v3 - 2;
  return 1;
}

