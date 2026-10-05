/* Address: 0x14024e228 | Name: ?enum_system_locales_ex_nolock@@YAHQ6AHPEA_WK_J@Z@Z | Size: 77 bytes */
__int64 __fastcall enum_system_locales_ex_nolock(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (__fastcall *)(void *, __int64))EnumSystemLocalesW)(
             &_lambda_795c6bd18aed400428efeb9a5f0e1479_::_lambda_invoker_cdecl_,
             1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  return result;
}

