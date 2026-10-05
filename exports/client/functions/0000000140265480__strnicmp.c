/* Address: 0x140265480 | Name: _strnicmp | Size: 79 bytes */
__int64 __fastcall strnicmp(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( dword_140404A6C[19065283] )
    return strnicmp_l(a1, a2, a3, 0);
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
    JUMPOUT(0x140265434LL);
  *errno() = 22;
  sub_14024CF6C();
  return 0x7FFFFFFF;
}

