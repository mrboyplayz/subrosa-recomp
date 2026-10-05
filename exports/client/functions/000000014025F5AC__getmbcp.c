/* Address: 0x14025f5ac | Name: _getmbcp | Size: 58 bytes */
int __cdecl getmbcp()
{
  int result; // eax
  __int64 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]
  char v3; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v1, nullptr);
  if ( *(_DWORD *)(v2 + 8) )
    result = *(_DWORD *)(v2 + 4);
  else
    result = 0;
  if ( v3 )
    *(_DWORD *)(v1 + 936) &= ~2u;
  return result;
}

