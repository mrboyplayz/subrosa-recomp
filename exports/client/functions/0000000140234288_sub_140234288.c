/* Address: 0x140234288 | Name: sub_140234288 | Size: 182 bytes */
char __fastcall sub_140234288(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  int v7; // ecx
  __int64 v8; // rax
  struct __crt_locale_pointers *v9; // rcx
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 8);
  v7 = sub_14022E18C(a1 + 8, *(_QWORD *)(a1 + 120));
  v8 = v4[2];
  if ( v8 != *v4 && (v8 != v4[1] || v7 != -1) )
    v4[2] = v8 - 1;
  v9 = *(struct __crt_locale_pointers **)(a1 + 120);
  v12[1] = *(_QWORD *)(a1 + 64);
  v12[0] = v4;
  v12[3] = &v13;
  v12[2] = 0;
  v13 = 1;
  v10 = sub_14022BE60(v9, v12, a2, a3);
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(a1 + 58) )
    return 1;
  return __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>>::write_integer(a1, v10);
}

