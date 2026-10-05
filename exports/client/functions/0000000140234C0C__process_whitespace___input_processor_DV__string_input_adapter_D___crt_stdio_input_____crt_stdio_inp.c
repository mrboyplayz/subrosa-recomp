/* Address: 0x140234c0c | Name: ?process_whitespace@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 59 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // ecx
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E18C(a1 + 8, *(_QWORD *)(a1 + 120));
  v3 = v1[2];
  if ( v3 != *v1 && (v3 != v1[1] || v2 != -1) )
    v1[2] = v3 - 1;
  return 1;
}

