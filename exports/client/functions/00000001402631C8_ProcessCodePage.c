/* Address: 0x1402631c8 | Name: ProcessCodePage | Size: 201 bytes */
__int64 __fastcall ProcessCodePage(#49 *String1, __int64 a2)
{
  unsigned int v4; // edx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( String1 && *(_WORD *)String1 && wcscmp(String1, (const #49 *)L"ACP") )
  {
    if ( !(unsigned int)sub_14026AE18(String1, L"utf8") || !(unsigned int)sub_14026AE18(String1, L"utf-8") )
      return 65001;
    if ( wcscmp(String1, (const #49 *)L"OCP") )
      return unknown_libname_847((__int64)String1);
    v4 = 536870923;
  }
  else
  {
    v4 = 536875012;
  }
  if ( !(unsigned int)sub_14024F174(a2 + 600, v4, (__int64)&v6, 2u) )
    return 0;
  result = (unsigned int)v6;
  if ( v6 < 3 )
    return 65001;
  return result;
}

