/* Address: 0x140263de4 | Name: TestDefaultLanguage_0 | Size: 171 bytes */
_BOOL8 __fastcall TestDefaultLanguage_0(int a1, int a2)
{
  __int64 v4; // rdi
  __int16 *v5; // r9
  int v6; // r8d
  __int16 v7; // dx
  __int16 *v8; // rcx
  __int64 v9; // rcx
  __int64 LCData; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_140255A70();
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        a1 & 0x3FF | 0x400u,
                        536870913,
                        &LCData,
                        2) )
    return 0;
  if ( a1 == (_DWORD)LCData || !a2 )
    return 1;
  v5 = *(__int16 **)(v4 + 152);
  v6 = 0;
  v7 = *v5;
  v8 = v5 + 1;
  while ( (unsigned __int16)(v7 - 65) <= 0x19u || (unsigned __int16)(v7 - 97) <= 0x19u )
  {
    v7 = *v8;
    ++v6;
    ++v8;
  }
  v9 = -1;
  do
    ++v9;
  while ( v5[v9] );
  return v6 != (_DWORD)v9;
}

