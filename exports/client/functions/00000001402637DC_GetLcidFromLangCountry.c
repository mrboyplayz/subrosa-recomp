/* Address: 0x1402637dc | Name: GetLcidFromLangCountry | Size: 205 bytes */
bool __fastcall GetLcidFromLangCountry(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // r8d
  __int16 *v9; // rcx
  int i; // r10d
  __int16 v11; // r9
  bool result; // al

  v2 = sub_140255A70();
  v3 = -1;
  v4 = -1;
  v5 = v2 + 152;
  v6 = *(_QWORD *)(v2 + 152);
  do
    ++v4;
  while ( *(_WORD *)(v6 + 2 * v4) );
  *(_DWORD *)(v5 + 24) = v4 == 3;
  do
    ++v3;
  while ( *(_WORD *)(*(_QWORD *)(v5 + 8) + 2 * v3) );
  v7 = v3 == 3;
  v8 = 2;
  *(_DWORD *)(v5 + 28) = v7;
  a1[1] = 0;
  if ( !*(_DWORD *)(v5 + 24) )
  {
    v9 = *(__int16 **)v5;
    for ( i = 0; ; ++i )
    {
      v11 = *v9++;
      if ( (unsigned __int16)(v11 - 65) > 0x19u && (unsigned __int16)(v11 - 97) > 0x19u )
        break;
    }
    v8 = i;
  }
  *(_DWORD *)(v5 + 20) = v8;
  ((void (__fastcall *)(__int64 (__fastcall *)(), __int64))EnumSystemLocalesW)(LangCountryEnumProc, 1);
  result = (*a1 & 0x100) != 0;
  if ( (*a1 & 0x200) == 0 || (*a1 & 7) == 0 || !result )
    *a1 = 0;
  return result;
}

