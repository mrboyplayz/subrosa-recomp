/* Address: 0x1402346c0 | Name: ?process_state@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 188 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax

  v2 = *(_DWORD *)(a1 + 44) - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = sub_140233BA8(a1);
        if ( v4 && *(_DWORD *)(a1 + 72) != 9 && !*(_BYTE *)(a1 + 50) )
          ++*(_QWORD *)(a1 + 128);
        return v4;
      }
    }
    else
    {
      v6 = getc_nolock(*(FILE **)(a1 + 8));
      if ( v6 != -1 )
      {
        v7 = *(_QWORD *)(a1 + 16) + 1LL;
        *(_QWORD *)(a1 + 16) = v7;
        if ( v6 == *(unsigned __int8 *)(a1 + 48) )
          return __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_literal_character_tchar(
                   a1,
                   v6);
        v8 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 16) = v7 - 1;
        sub_14020CE90(v6, v8);
      }
    }
    return 0;
  }
  v9 = sub_14022E0F4(a1 + 8, *(_QWORD *)(a1 + 112));
  if ( v9 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(v9, *(_QWORD *)(a1 + 8));
  }
  return 1;
}

