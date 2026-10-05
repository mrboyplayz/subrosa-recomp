/* Address: 0x140257524 | Name: sub_140257524 | Size: 107 bytes */
__int64 __fastcall sub_140257524(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v1 = 0;
  if ( dword_140404A6C[19065283] )
  {
    sub_140213644((_LocaleUpdate *)&v4, nullptr);
    result = sub_140236ED8(a1, 32, &v5);
    if ( v6 )
      *(_DWORD *)(v4 + 936) &= ~2u;
  }
  else
  {
    if ( a1 + 1 <= 0x100 )
      return off_140302420[a1] & 0x20;
    return v1;
  }
  return result;
}

