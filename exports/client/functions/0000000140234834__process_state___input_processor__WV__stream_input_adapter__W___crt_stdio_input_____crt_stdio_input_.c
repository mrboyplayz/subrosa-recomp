/* Address: 0x140234834 | Name: ?process_state@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 191 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  unsigned __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // r8

  v2 = *(_DWORD *)(a1 + 44) - 2;
  if ( !v2 )
  {
    v10 = sub_14022E144((_QWORD *)(a1 + 8));
    if ( v10 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v10, *(_QWORD *)(a1 + 8), v11);
    }
    return 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = j__fgetwc_nolock(*(_QWORD *)(a1 + 8));
    v7 = v6;
    if ( v6 == 0xFFFF )
      return 0;
    v8 = *(_QWORD *)(a1 + 16) + 1LL;
    *(_QWORD *)(a1 + 16) = v8;
    if ( (_WORD)v7 != *(_WORD *)(a1 + 48) )
    {
      v9 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = v8 - 1;
      ungetwc_nolock((unsigned __int16)v7, v9, v7);
      return 0;
    }
    return 1;
  }
  if ( v3 != 1 )
    return 0;
  v4 = sub_140233DE4(a1);
  if ( v4 && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 52) )
    ++*(_QWORD *)(a1 + 104);
  return v4;
}

