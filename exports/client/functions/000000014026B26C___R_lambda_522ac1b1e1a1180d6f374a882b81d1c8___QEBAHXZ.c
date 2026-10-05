/* Address: 0x14026b26c | Name: ??R_lambda_522ac1b1e1a1180d6f374a882b81d1c8_@@QEBAHXZ | Size: 83 bytes */
__int64 __fastcall _lambda_522ac1b1e1a1180d6f374a882b81d1c8_::operator()(_DWORD **a1)
{
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a1 >> 6) + 19065401] + 72LL * (**a1 & 0x3F) + 56) & 1) != 0 )
    return chsize_nolock(**a1);
  *errno() = 9;
  return 9;
}

