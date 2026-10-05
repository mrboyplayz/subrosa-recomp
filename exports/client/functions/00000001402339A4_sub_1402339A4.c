/* Address: 0x1402339a4 | Name: sub_1402339A4 | Size: 196 bytes */
__int64 __fastcall sub_1402339A4(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 i; // rcx
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  __int64 v7; // r8
  int v8; // ebx

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) )
  {
    v2 = -1;
    *errno() = 22;
LABEL_18:
    sub_14024CF6C(v3);
    return v2;
  }
  for ( i = a1 + 24;
        sub_14022FA28(i)
     && (unsigned __int8)__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::process_state(a1);
        i = a1 + 24 )
  {
    ;
  }
  v5 = *(_DWORD *)(a1 + 104);
  if ( !*(_QWORD *)(a1 + 104) && *(_DWORD *)(a1 + 44) != 1 )
  {
    v6 = j__fgetwc_nolock(*(_QWORD *)(a1 + 8));
    if ( v6 == 0xFFFF )
      v5 = -1;
    else
      ++*(_QWORD *)(a1 + 16);
    if ( v6 != 0xFFFF )
    {
      --*(_QWORD *)(a1 + 16);
      ungetwc_nolock(v6, *(_QWORD *)(a1 + 8), v7);
    }
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( v8 )
    {
      v2 = v5;
      *errno() = v8;
      goto LABEL_18;
    }
  }
  return v5;
}

