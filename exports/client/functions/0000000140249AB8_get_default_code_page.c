/* Address: 0x140249ab8 | Name: get_default_code_page | Size: 52 bytes */
__int64 __fastcall get_default_code_page(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !(unsigned int)sub_14024F174(a1, 536875012, &v2, 2) )
    return 65001;
  result = v2;
  if ( !v2 )
    return 65001;
  return result;
}

