/* Address: 0x140263758 | Name: GetLcidFromCountry | Size: 95 bytes */
__int64 __fastcall GetLcidFromCountry(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_140255A70();
  v3 = -1;
  v4 = v2;
  v5 = *(_QWORD *)(v2 + 160);
  do
    ++v3;
  while ( *(_WORD *)(v5 + 2 * v3) );
  *(_DWORD *)(v4 + 180) = v3 == 3;
  result = ((__int64 (__fastcall *)(__int64 (__fastcall *)(__int64), __int64))EnumSystemLocalesW)(CountryEnumProc, 1);
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

