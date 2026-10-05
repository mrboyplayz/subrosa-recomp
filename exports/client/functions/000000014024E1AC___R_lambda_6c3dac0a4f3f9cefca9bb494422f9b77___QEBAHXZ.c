/* Address: 0x14024e1ac | Name: ??R_lambda_6c3dac0a4f3f9cefca9bb494422f9b77_@@QEBAHXZ | Size: 83 bytes */
__int64 __fastcall _lambda_6c3dac0a4f3f9cefca9bb494422f9b77_::operator()(_QWORD **a1)
{
  __int64 result; // rax

  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(**a1, 64 - (_security_cookie & 0x3Fu));
  result = ((__int64 (__fastcall *)(void *, __int64))EnumSystemLocalesW)(
             &_lambda_795c6bd18aed400428efeb9a5f0e1479_::_lambda_invoker_cdecl_,
             1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  return result;
}

