/* Address: 0x14026529c | Name: _wcsnicmp | Size: 70 bytes */
__int64 __fastcall wcsnicmp(__int64 a1, __int64 a2, __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return wcsnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 )
    return _ascii_wcsnicmp(a1, a2, a3);
  *errno() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

