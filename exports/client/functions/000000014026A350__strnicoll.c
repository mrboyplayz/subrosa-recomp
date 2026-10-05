/* Address: 0x14026a350 | Name: _strnicoll | Size: 21 bytes */
__int64 __fastcall strnicoll(__int64 a1, __int64 a2, __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return strnicoll_l(a1, a2, a3, 0);
  else
    return strnicmp();
}

