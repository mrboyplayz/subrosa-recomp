/* Address: 0x140234bd8 | Name: ?process_whitespace@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 49 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_whitespace(
        __int64 a1)
{
  __int64 *v1; // rbx
  int v2; // eax

  v1 = (__int64 *)(a1 + 8);
  v2 = sub_14022E0F4(a1 + 8, *(_QWORD *)(a1 + 112));
  if ( v2 != -1 )
  {
    --v1[1];
    sub_14020CE90(v2, *v1);
  }
  return 1;
}

