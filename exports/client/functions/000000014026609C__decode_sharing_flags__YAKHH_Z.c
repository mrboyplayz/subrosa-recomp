/* Address: 0x14026609c | Name: ?decode_sharing_flags@@YAKHH@Z | Size: 86 bytes */
__int64 __fastcall decode_sharing_flags(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = a1 - 16;
  if ( v2 )
  {
    v3 = v2 - 16;
    if ( !v3 )
      return 1;
    v4 = v3 - 16;
    if ( !v4 )
      return 2;
    v5 = v4 - 16;
    if ( !v5 )
      return 3;
    if ( v5 != 64 )
    {
      *errno() = 22;
      sub_14024CF6C();
      return 0xFFFFFFFFLL;
    }
    if ( a2 == 0x80000000 )
      return 1;
  }
  return 0;
}

