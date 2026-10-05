/* Address: 0x14026b530 | Name: _umask_s | Size: 61 bytes */
__int64 __fastcall umask_s(unsigned int a1, _DWORD *a2)
{
  if ( !a2 || (*a2 = dword_140404A6C[19065861], (a1 & 0xFFFFFE7F) != 0) )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
  else
  {
    dword_140404A6C[19065861] = a1;
    return 0;
  }
}

