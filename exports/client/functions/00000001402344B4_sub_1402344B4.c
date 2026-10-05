/* Address: 0x1402344b4 | Name: sub_1402344B4 | Size: 84 bytes */
char __fastcall sub_1402344B4(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = getc_nolock(*(FILE **)(a1 + 8));
  if ( v2 == -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = v3;
  if ( v2 != *(unsigned __int8 *)(a1 + 48) )
  {
    v4 = v3 - 1;
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v4;
    sub_14020CE90(v2, v5);
    return 0;
  }
  LOBYTE(v3) = v2;
  return __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_literal_character_tchar(
           a1,
           v3);
}

