/* Address: 0x1402365f4 | Name: ?write_character@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AEAA_NQEFA_W_KAEAPEFA_WAEA_KD@Z | Size: 145 bytes */
char __fastcall __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::write_character(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD **a4,
        _QWORD *a5,
        __int16 a6)
{
  __int64 v6; // rdi
  int v9; // eax
  __int64 v10; // r9
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = (unsigned __int8)a6;
  HIBYTE(a6) = 0;
  if ( (sub_140256DC0()[v6] & 0x8000u) != 0 )
  {
    v9 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v9 != -1 )
      ++*(_QWORD *)(a1 + 16);
    HIBYTE(a6) = v9;
  }
  v10 = *(_QWORD *)(a1 + 112);
  v12 = 63;
  mbtowc_l((#115 *)&v12, (#49 *)&a6, (char *)*(int *)(*(_QWORD *)v10 + 8LL));
  *(*a4)++ = (char)v6;
  --*a5;
  return 1;
}

