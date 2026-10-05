/* Address: 0x14025788c | Name: sub_14025788C | Size: 112 bytes */
__int64 __fastcall sub_14025788C(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 128, (__int64 *)&Locale);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x80;
    return v1;
  }
  return result;
}

