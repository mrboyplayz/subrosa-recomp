/* Address: 0x1402338b8 | Name: sub_1402338B8 | Size: 233 bytes */
__int64 __fastcall sub_1402338B8(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 i; // rcx
  unsigned int v8; // esi
  unsigned __int8 *v9; // rax
  int v10; // ecx
  int v11; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 || v1 > *(_QWORD *)(a1 + 16) )
  {
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v5 = -1;
    *errno() = 22;
LABEL_22:
    sub_14024CF6C(v6);
    return v5;
  }
  for ( i = a1 + 32;
        sub_14022F860(i)
     && (unsigned __int8)__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::process_state(a1);
        i = a1 + 32 )
  {
    ;
  }
  v8 = *(_DWORD *)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 136) && *(_DWORD *)(a1 + 52) != 1 )
  {
    v9 = *(unsigned __int8 **)(a1 + 24);
    if ( v9 == *(unsigned __int8 **)(a1 + 16) )
    {
      v8 = -1;
      v10 = -1;
    }
    else
    {
      v10 = *v9++;
      *(_QWORD *)(a1 + 24) = v9;
    }
    if ( v9 != *(unsigned __int8 **)(a1 + 8) && (v9 != *(unsigned __int8 **)(a1 + 16) || v10 != -1) )
      *(_QWORD *)(a1 + 24) = v9 - 1;
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 48);
    if ( v11 )
    {
      v5 = v8;
      *errno() = v11;
      goto LABEL_22;
    }
  }
  return v8;
}

