/* Address: 0x14020ba9c | Name: sub_14020BA9C | Size: 43 bytes */
__int64 __fastcall sub_14020BA9C(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 4) & 1;
  *errno() = 22;
  sub_14024CF6C();
  return 0;
}

