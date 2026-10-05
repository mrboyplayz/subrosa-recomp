/* Address: 0x14020b598 | Name: sub_14020B598 | Size: 71 bytes */
__int64 __fastcall sub_14020B598(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  if ( a1 )
  {
    if ( a2 )
      *a2 = a1 + 8;
    if ( a3 )
      *a3 = a1;
    if ( a4 )
      *a4 = a1 + 16;
    return 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
}

