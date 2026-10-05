/* Address: 0x140265db8 | Name: ?decode_access_flags@@YAKH@Z | Size: 90 bytes */
__int64 __fastcall decode_access_flags(int a1)
{
  if ( (a1 & 3) == 0 )
    return 0x80000000LL;
  if ( (a1 & 3) != 1 )
  {
    if ( (a1 & 3) != 2 )
    {
      *errno() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    return 3221225472LL;
  }
  if ( (a1 & 0x70000) != 0 && (a1 & 8) != 0 )
    return 3221225472LL;
  return 0x40000000;
}

