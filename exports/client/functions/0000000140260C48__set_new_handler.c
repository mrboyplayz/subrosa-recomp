/* Address: 0x140260c48 | Name: _set_new_handler | Size: 89 bytes */
__int64 __fastcall set_new_handler(__int64 a1)
{
  __int64 v2; // rbx

  sub_140258B64(0);
  v2 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065849] ^ _security_cookie, _security_cookie & 0x3F);
  *(_QWORD *)&dword_140404A6C[19065849] = _security_cookie ^ __ROR8__(a1, 64 - (_security_cookie & 0x3Fu));
  sub_140258BB8(0);
  return v2;
}

