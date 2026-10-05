/* Address: 0x140265e14 | Name: ?decode_open_create_flags@@YAKH@Z | Size: 124 bytes */
__int64 __fastcall decode_open_create_flags(__int16 a1)
{
  int v1; // ecx

  v1 = a1 & 0x700;
  if ( v1 )
  {
    switch ( v1 )
    {
      case 256:
        return 4;
      case 512:
        return 5;
      case 768:
        return 2;
    }
    if ( v1 != 1024 )
    {
      if ( v1 == 1280 )
        return 1;
      if ( v1 != 1536 )
      {
        if ( v1 != 1792 )
        {
          *errno() = 22;
          sub_14024CF6C();
          return 0xFFFFFFFFLL;
        }
        return 1;
      }
      return 5;
    }
  }
  return 3;
}

