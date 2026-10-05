/* Address: 0x140234c48 | Name: ?process_whitespace@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 55 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::process_whitespace(
        __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int16 v2; // ax
  __int64 v3; // r8

  v1 = (_QWORD *)(a1 + 8);
  v2 = sub_14022E144((_QWORD *)(a1 + 8));
  if ( v2 != 0xFFFF )
  {
    --v1[1];
    ungetwc_nolock(v2, *v1, v3);
  }
  return 1;
}

