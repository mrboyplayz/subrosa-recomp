/* Address: 0x140262c58 | Name: GetLocaleNameFromLangCountry | Size: 207 bytes */
bool __fastcall GetLocaleNameFromLangCountry(__int64 a1)
{
  __int16 *v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // r9d
  __int16 v7; // r8
  bool result; // al

  v1 = *(__int16 **)a1;
  v2 = -1;
  v4 = -1;
  do
    ++v4;
  while ( v1[v4] );
  *(_DWORD *)(a1 + 24) = v4 == 3;
  do
    ++v2;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v2) );
  *(_DWORD *)(a1 + 28) = v2 == 3;
  if ( v4 == 3 )
  {
    v5 = 2;
  }
  else
  {
    v6 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        v7 = *v1++;
        if ( (unsigned __int16)(v7 - 65) > 0x19u && (unsigned __int16)(v7 - 97) > 0x19u )
          break;
        ++v6;
      }
      v5 = v6;
    }
    else
    {
      v5 = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = v5;
  sub_14024EEBC((__int64)LangCountryEnumProcEx, 3u, 0, 0);
  result = (*(_DWORD *)(a1 + 16) & 0x100) != 0;
  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 || (*(_DWORD *)(a1 + 16) & 7) == 0 || !result )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}

