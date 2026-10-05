/* Address: 0x14024e088 | Name: sub_14024E088 | Size: 121 bytes */
__int64 __fastcall sub_14024E088(__int64 a1, unsigned int *a2, _QWORD **a3, unsigned int *a4)
{
  sub_140258B64(*a2);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie ^ __ROR8__(**a3, 64 - (_security_cookie & 0x3Fu));
  LODWORD(a3) = ((__int64 (__fastcall *)(void *, __int64))EnumSystemLocalesW)(
                  &_lambda_795c6bd18aed400428efeb9a5f0e1479_::_lambda_invoker_cdecl_,
                  1);
  *(_QWORD *)&dword_140404A6C[19065397] = _security_cookie;
  sub_140258BB8(*a4);
  return (unsigned int)a3;
}

