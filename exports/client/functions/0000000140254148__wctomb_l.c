/* Address: 0x140254148 | Name: _wctomb_l | Size: 114 bytes */
__int64 __fastcall wctomb_l(__int64 a1, unsigned __int16 a2, struct __crt_locale_pointers *a3)
{
  int v5; // eax
  unsigned int v6; // edx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+48h] [rbp-10h]
  int SizeConverted; // [rsp+78h] [rbp+20h] BYREF

  sub_140213644((_LocaleUpdate *)&v8, a3);
  SizeConverted = 0;
  v5 = wctomb_s_l(&SizeConverted, a1, *(int *)(v9 + 8), a2, &v9);
  v6 = SizeConverted;
  if ( v5 )
    v6 = -1;
  if ( v10 )
    *(_DWORD *)(v8 + 936) &= ~2u;
  return v6;
}

