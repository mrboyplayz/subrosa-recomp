/* Address: 0x14026ace8 | Name: _mbsdec_l | Size: 148 bytes */
unsigned __int8 *__fastcall mbsdec_l(unsigned __int64 a1, unsigned __int64 a2, struct __crt_locale_pointers *a3)
{
  unsigned __int8 *v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]

  if ( !a1 || !a2 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return nullptr;
  }
  if ( a1 >= a2 )
    return nullptr;
  sub_140213644((_LocaleUpdate *)&v7, a3);
  v6 = (unsigned __int8 *)(a2 - 1);
  if ( *(_DWORD *)(v8 + 8) )
  {
    do
      --v6;
    while ( a1 <= (unsigned __int64)v6 && (*(_BYTE *)(*v6 + v8 + 25) & 4) != 0 );
    v6 = (unsigned __int8 *)(a2 - (((_BYTE)a2 - (_BYTE)v6) & 1) - 1);
  }
  if ( v9 )
    *(_DWORD *)(v7 + 936) &= ~2u;
  return v6;
}

