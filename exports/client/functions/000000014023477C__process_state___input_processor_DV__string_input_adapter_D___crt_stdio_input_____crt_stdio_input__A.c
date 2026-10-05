/* Address: 0x14023477c | Name: ?process_state@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NXZ | Size: 182 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_state(
        __int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  char v4; // cl
  unsigned __int8 *v6; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 52) - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = sub_140233CC4(a1);
        if ( v4 && *(_DWORD *)(a1 + 80) != 9 && !*(_BYTE *)(a1 + 58) )
          ++*(_QWORD *)(a1 + 136);
        return v4;
      }
    }
    else
    {
      v6 = *(unsigned __int8 **)(a1 + 24);
      if ( v6 != *(unsigned __int8 **)(a1 + 16) )
      {
        v7 = *v6;
        *(_QWORD *)(a1 + 24) = v6 + 1;
        if ( v7 == *(unsigned __int8 *)(a1 + 56) )
          return __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_literal_character_tchar(
                   a1,
                   v7);
        if ( v6 + 1 != *(unsigned __int8 **)(a1 + 8) )
          *(_QWORD *)(a1 + 24) = v6;
      }
    }
    return 0;
  }
  v8 = sub_14022E18C(a1 + 8, *(_QWORD *)(a1 + 120));
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 != *(_QWORD *)(a1 + 8) && (v9 != *(_QWORD *)(a1 + 16) || v8 != -1) )
    *(_QWORD *)(a1 + 24) = v9 - 1;
  return 1;
}

