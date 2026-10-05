/* Address: 0x1402361f0 | Name: ?unget@?$stream_input_adapter@D@__crt_stdio_input@@QEAAXH@Z | Size: 30 bytes */
__int64 __fastcall __crt_stdio_input::stream_input_adapter<char>::unget(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a2 != -1 )
  {
    --a1[1];
    return sub_14020CE90(a2, *a1);
  }
  return result;
}

