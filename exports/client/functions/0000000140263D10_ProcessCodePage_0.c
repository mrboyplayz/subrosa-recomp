/* Address: 0x140263d10 | Name: ProcessCodePage_0 | Size: 174 bytes */
__int64 __fastcall ProcessCodePage_0(#49 *String1, __int64 a2)
{
  __int64 result; // rax
  __int64 LCData; // [rsp+30h] [rbp+8h] BYREF

  if ( String1 && *(_WORD *)String1 && wcscmp(String1, (const #49 *)L"ACP") )
  {
    if ( wcscmp(String1, (const #49 *)L"OCP") )
      return unknown_libname_847((__int64)String1);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                         *(unsigned int *)(a2 + 8),
                         536870923,
                         &LCData,
                         2) )
      return (unsigned int)LCData;
    return 0;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int64))GetLocaleInfoW)(
                        *(unsigned int *)(a2 + 8),
                        536875012,
                        &LCData,
                        2) )
    return 0;
  result = (unsigned int)LCData;
  if ( !(_DWORD)LCData )
    return ((__int64 (*)(void))GetACP)();
  return result;
}

