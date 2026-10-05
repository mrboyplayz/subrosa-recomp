/* Address: 0x14020ba70 | Name: sub_14020BA70 | Size: 43 bytes */
__int64 __fastcall sub_14020BA70(__int64 a1)
{
  if ( a1 )
    return (*(_DWORD *)(a1 + 20) >> 3) & 1;
  *errno() = 22;
  sub_14024CF6C();
  return 0;
}

