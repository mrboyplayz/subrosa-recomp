/* Address: 0x1402571e0 | Name: sub_1402571E0 | Size: 60 bytes */
__int64 __fastcall sub_1402571E0(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  result = sub_140236ED8(a1, 4, (__int64 *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

