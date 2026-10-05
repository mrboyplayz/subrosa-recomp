/* Address: 0x140234634 | Name: ?process_literal_character_tchar@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_ND@Z | Size: 129 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_literal_character_tchar(
        __int64 a1,
        unsigned __int8 a2)
{
  unsigned __int8 *v4; // r8
  int v5; // ecx

  if ( (sub_140256DC0()[a2] & 0x8000u) == 0 )
    return 1;
  v4 = *(unsigned __int8 **)(a1 + 24);
  if ( v4 == *(unsigned __int8 **)(a1 + 16) )
  {
    v5 = -1;
  }
  else
  {
    v5 = *v4++;
    *(_QWORD *)(a1 + 24) = v4;
  }
  if ( v5 == *(unsigned __int8 *)(a1 + 57) )
    return 1;
  if ( v4 != *(unsigned __int8 **)(a1 + 8) )
  {
    if ( v4 != *(unsigned __int8 **)(a1 + 16) || v5 != -1 )
      *(_QWORD *)(a1 + 24) = --v4;
    if ( v4 != *(unsigned __int8 **)(a1 + 8) && (v4 != *(unsigned __int8 **)(a1 + 16) || a2 != 0xFF) )
      *(_QWORD *)(a1 + 24) = v4 - 1;
  }
  return 0;
}

