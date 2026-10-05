/* Address: 0x140262d28 | Name: GetLocaleNameFromLanguage | Size: 152 bytes */
__int64 __fastcall GetLocaleNameFromLanguage(__int64 a1)
{
  __int16 *v1; // rdx
  __int64 v2; // r8
  int v4; // ecx
  int v5; // r9d
  __int16 v6; // r8
  __int64 result; // rax

  v1 = *(__int16 **)a1;
  v2 = -1;
  do
    ++v2;
  while ( v1[v2] );
  *(_DWORD *)(a1 + 24) = v2 == 3;
  if ( v2 == 3 )
  {
    v4 = 2;
  }
  else
  {
    v5 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        v6 = *v1++;
        if ( (unsigned __int16)(v6 - 65) > 0x19u && (unsigned __int16)(v6 - 97) > 0x19u )
          break;
        ++v5;
      }
      v4 = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  *(_DWORD *)(a1 + 20) = v4;
  result = sub_14024EEBC((__int64)LanguageEnumProcEx, 3u, 0, 0);
  if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
    *(_DWORD *)(a1 + 16) = 0;
  return result;
}

