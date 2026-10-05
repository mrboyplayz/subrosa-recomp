/* Address: 0x1402570bc | Name: sub_1402570BC | Size: 70 bytes */
__int64 __fastcall sub_1402570BC(unsigned int a1, struct __crt_locale_pointers *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v4, a2);
  if ( a1 == 9 )
    result = 64;
  else
    result = sub_140236ED8(a1, 64, (__int64 *)&Locale);
  if ( v6 )
    *(_DWORD *)(v4 + 936) &= ~2u;
  return result;
}

