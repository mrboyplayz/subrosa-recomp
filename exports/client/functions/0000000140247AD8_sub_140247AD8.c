/* Address: 0x140247ad8 | Name: sub_140247AD8 | Size: 61 bytes */
__int64 __fastcall sub_140247AD8(__int32 a1)
{
  __int64 v2; // rcx

  if ( ((a1 - 0x4000) & 0xFFFF3FFF) != 0 || a1 == 49152 )
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return 22;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065851], a1);
    return 0;
  }
}

