/* Address: 0x1402337f8 | Name: sub_1402337F8 | Size: 191 bytes */
__int64 __fastcall sub_1402337F8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    goto LABEL_2;
  if ( !sub_14022389C(v2) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_2:
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0xFFFFFFFFLL;
  }
  while ( sub_14022F860(a1 + 24)
       && (unsigned __int8)__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::process_state(a1) )
    ;
  v5 = *(_DWORD *)(a1 + 128);
  if ( !*(_QWORD *)(a1 + 128) && *(_DWORD *)(a1 + 44) != 1 )
  {
    v6 = getc_nolock(*(FILE **)(a1 + 8));
    if ( v6 == -1 )
      v5 = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( v6 != -1 )
    {
      --*(_QWORD *)(a1 + 16);
      sub_14020CE90(v6, *(_QWORD *)(a1 + 8));
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 )
    {
      *errno() = v7;
      sub_14024CF6C(v8);
    }
  }
  return v5;
}

