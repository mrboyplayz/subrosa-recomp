/* Address: 0x140239ccc | Name: sub_140239CCC | Size: 37 bytes */
__int64 sub_140239CCC()
{
  if ( (unsigned int)((__int64 (*)(void))FindClose)() )
    return 0;
  *errno() = 22;
  return 0xFFFFFFFFLL;
}

