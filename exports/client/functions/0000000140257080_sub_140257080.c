/* Address: 0x140257080 | Name: sub_140257080 | Size: 60 bytes */
__int64 __fastcall sub_140257080(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 259, (__int64 *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

