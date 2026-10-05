/* Address: 0x1401f2a30 | Name: sub_1401F2A30 | Size: 95 bytes */
__int64 __fastcall sub_1401F2A30(_BYTE *a1)
{
  if ( (*a1 & 0x80) != 0 )
  {
    return 1002;
  }
  else if ( (*a1 & 0x60) == 0x60 )
  {
    return 1001;
  }
  else
  {
    return 1000;
  }
}

