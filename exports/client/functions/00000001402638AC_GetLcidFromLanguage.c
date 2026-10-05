/* Address: 0x1402638ac | Name: GetLcidFromLanguage | Size: 150 bytes */
__int64 __fastcall GetLcidFromLanguage(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int16 *v4; // rdx
  int v5; // ecx
  int i; // r9d
  __int16 v7; // r8
  __int64 result; // rax

  v2 = sub_140255A70();
  v3 = -1;
  v4 = *(__int16 **)(v2 + 152);
  do
    ++v3;
  while ( v4[v3] );
  v5 = 2;
  *(_DWORD *)(v2 + 176) = v3 == 3;
  if ( v3 != 3 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *v4++;
      if ( (unsigned __int16)(v7 - 65) > 0x19u && (unsigned __int16)(v7 - 97) > 0x19u )
        break;
    }
    v5 = i;
  }
  *(_DWORD *)(v2 + 172) = v5;
  result = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), __int64))EnumSystemLocalesW)(LanguageEnumProc, 1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

