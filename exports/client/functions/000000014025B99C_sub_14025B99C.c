/* Address: 0x14025b99c | Name: sub_14025B99C | Size: 69 bytes */
__int64 __fastcall sub_14025B99C(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // rbx

  sub_140258B64(*a2);
  v5 = __ROR8__(*(_QWORD *)&dword_140404A6C[19065819] ^ _security_cookie, _security_cookie & 0x3F);
  sub_140258BB8(*a4);
  return v5;
}

