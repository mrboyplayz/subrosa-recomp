/* Address: 0x14020b9e8 | Name: sub_14020B9E8 | Size: 98 bytes */
__int64 __fastcall sub_14020B9E8(__int64 a1)
{
  unsigned int v3; // edi

  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
  {
    MEMORY[0x14025065C](a1);
    return 0xFFFFFFFFLL;
  }
  sub_14020B5E0();
  v3 = sub_14020B964((FILE *)a1);
  sub_14020B5EC(a1);
  return v3;
}

