/* Address: 0x1402348f4 | Name: ?process_state@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 192 bytes */
char __fastcall __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>>::process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  __int16 *v6; // rax
  __int16 v7; // dx
  _WORD *v8; // rax
  __int16 v9; // dx
  __int64 v10; // rax

  v2 = *(_DWORD *)(a1 + 52) - 2;
  if ( !v2 )
  {
    v9 = sub_14022E1E0(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 != *(_QWORD *)(a1 + 8) && (v10 != *(_QWORD *)(a1 + 16) || v9 != -1) )
      *(_QWORD *)(a1 + 24) = v10 - 2;
    return 1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v6 = *(__int16 **)(a1 + 24);
    if ( v6 == *(__int16 **)(a1 + 16) )
      return 0;
    v7 = *v6;
    v8 = v6 + 1;
    *(_QWORD *)(a1 + 24) = v8;
    if ( v7 == -1 )
      return 0;
    if ( v7 != *(_WORD *)(a1 + 56) )
    {
      if ( v8 != *(_WORD **)(a1 + 8) )
        *(_QWORD *)(a1 + 24) = v8 - 1;
      return 0;
    }
    return 1;
  }
  if ( v3 != 1 )
    return 0;
  v4 = sub_140233F00(a1);
  if ( v4 && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 60) )
    ++*(_QWORD *)(a1 + 112);
  return v4;
}

