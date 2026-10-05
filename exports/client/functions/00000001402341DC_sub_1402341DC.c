/* Address: 0x1402341dc | Name: sub_1402341DC | Size: 172 bytes */
char __fastcall sub_1402341DC(__int64 a1, signed int a2, unsigned __int8 a3)
{
  __int64 *v4; // rdi
  int v7; // eax
  struct __crt_locale_pointers *v8; // rcx
  __int64 v9; // rax
  FILE **v11[5]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 8);
  v7 = sub_14022E0F4(a1 + 8, *(_QWORD *)(a1 + 112));
  if ( v7 != -1 )
  {
    --v4[1];
    sub_14020CE90(v7, *v4);
  }
  v8 = *(struct __crt_locale_pointers **)(a1 + 112);
  v11[1] = *(FILE ***)(a1 + 56);
  v11[0] = (FILE **)v4;
  v11[3] = (FILE **)&v12;
  v11[2] = nullptr;
  v12 = 1;
  v9 = sub_14022B0C8(v8, v11, a2, a3);
  if ( !v12 )
    return 0;
  if ( *(_BYTE *)(a1 + 50) )
    return 1;
  return __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>>::write_integer(a1, v9);
}

