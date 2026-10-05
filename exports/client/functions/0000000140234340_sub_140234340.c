/* Address: 0x140234340 | Name: sub_140234340 | Size: 178 bytes */
char __fastcall sub_140234340(__int64 a1, signed int a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  struct __crt_locale_pointers *v9; // rcx
  __int64 v10; // rax
  _QWORD *v12[5]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 8);
  v7 = sub_14022E144((_QWORD *)(a1 + 8));
  if ( v7 != 0xFFFF )
  {
    --v4[1];
    ungetwc_nolock(v7, *v4, v8);
  }
  v9 = *(struct __crt_locale_pointers **)(a1 + 88);
  v12[1] = *(_QWORD **)(a1 + 56);
  v12[0] = v4;
  v12[3] = &v13;
  v12[2] = nullptr;
  v13 = 1;
  v10 = sub_14022B534(v9, v12, a2, a3);
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  return __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>>::write_integer(
           a1,
           v10);
}

