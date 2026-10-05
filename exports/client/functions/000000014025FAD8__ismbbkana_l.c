/* Address: 0x14025fad8 | Name: _ismbbkana_l | Size: 101 bytes */
__int64 __fastcall ismbbkana_l(unsigned __int8 a1, struct __crt_locale_pointers *a2)
{
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v6, a2);
  if ( v7 && *(_DWORD *)(v7 + 4) == 932 )
    v4 = x_ismbbtype_l(a2, a1, 0, 3u);
  else
    v4 = 0;
  if ( v8 )
    *(_DWORD *)(v6 + 936) &= ~2u;
  return v4;
}

