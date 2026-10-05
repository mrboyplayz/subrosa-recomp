/* Address: 0x140236210 | Name: ?unget@?$stream_input_adapter@_W@__crt_stdio_input@@QEAAXG@Z | Size: 37 bytes */
__int64 __fastcall __crt_stdio_input::stream_input_adapter<wchar_t>::unget(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( a2 != 0xFFFF )
  {
    --a1[1];
    return ungetwc_nolock(a2, *a1, a3);
  }
  return result;
}

