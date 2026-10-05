/* Address: 0x140257190 | Name: sub_140257190 | Size: 77 bytes */
__int64 __fastcall sub_140257190(unsigned int a1, struct __crt_locale_pointers *a2)
{
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v5, a2);
  v3 = sub_140236ED8(a1, 259, (__int64 *)&Locale);
  result = 0;
  if ( v7 )
    *(_DWORD *)(v5 + 936) &= ~2u;
  if ( v3 || a1 == 95 )
    return 1;
  return result;
}

