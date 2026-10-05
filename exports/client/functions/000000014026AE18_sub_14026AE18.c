/* Address: 0x14026ae18 | Name: sub_14026AE18 | Size: 70 bytes */
__int64 __fastcall sub_14026AE18(__int64 a1, __int64 a2)
{
  if ( dword_140404A6C[19065283] )
    return sub_14026AE60(a1, a2, 0);
  if ( a1 )
  {
    if ( a2 )
      JUMPOUT(0x14026ADD8LL);
  }
  *errno() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

