/* Address: 0x140233a68 | Name: sub_140233A68 | Size: 226 bytes */
__int64 __fastcall sub_140233A68(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 i; // rcx
  __int16 *v8; // rax
  __int16 v9; // dx
  int v10; // ebx

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
    goto LABEL_23;
  }
  for ( i = a1 + 32;
        sub_14022FA28(i)
     && (unsigned __int8)__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>>::process_state(a1);
        i = a1 + 32 )
  {
    ;
  }
  v5 = *(_DWORD *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) && *(_DWORD *)(a1 + 52) != 1 )
  {
    v8 = *(__int16 **)(a1 + 24);
    if ( v8 == *(__int16 **)(a1 + 16) )
    {
      v9 = -1;
    }
    else
    {
      v9 = *v8++;
      *(_QWORD *)(a1 + 24) = v8;
      if ( v9 != -1 )
      {
LABEL_16:
        if ( v8 != *(__int16 **)(a1 + 8) && (v8 != *(__int16 **)(a1 + 16) || v9 != -1) )
          *(_QWORD *)(a1 + 24) = v8 - 1;
        goto LABEL_20;
      }
    }
    v5 = -1;
    goto LABEL_16;
  }
LABEL_20:
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return v5;
  v10 = *(_DWORD *)(a1 + 48);
  if ( !v10 )
    return v5;
  *errno() = v10;
LABEL_23:
  sub_14024CF6C(v6);
  return v5;
}

