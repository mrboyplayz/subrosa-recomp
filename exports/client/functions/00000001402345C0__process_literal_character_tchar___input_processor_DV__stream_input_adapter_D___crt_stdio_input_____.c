/* Address: 0x1402345c0 | Name: ?process_literal_character_tchar@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_ND@Z | Size: 113 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_literal_character_tchar(
        __int64 a1,
        unsigned __int8 a2)
{
  int v4; // eax

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  v4 = getc_nolock(*(FILE **)(a1 + 8));
  if ( v4 != -1 )
    ++*(_QWORD *)(a1 + 16);
  if ( v4 == *(unsigned __int8 *)(a1 + 49) )
    return 1;
  if ( v4 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90(v4, *(_QWORD *)(a1 + 8));
  }
  if ( (char)a2 != -1 )
  {
    --*(_QWORD *)(a1 + 16);
    sub_14020CE90((char)a2, *(_QWORD *)(a1 + 8));
  }
  return 0;
}

