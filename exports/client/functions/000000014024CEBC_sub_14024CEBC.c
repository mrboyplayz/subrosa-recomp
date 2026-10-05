/* Address: 0x14024cebc | Name: sub_14024CEBC | Size: 174 bytes */
__int64 __fastcall sub_14024CEBC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD, __int64); // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD, __int64); // r10

  v9 = sub_140255BEC();
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(v9 + 952);
    if ( v10 )
      return v10(a1, a2, a3, a4, a5);
  }
  v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))__ROR8__(
                                                                              *(_QWORD *)&dword_140404A6C[19065287]
                                                                            ^ _security_cookie,
                                                                              _security_cookie & 0x3F);
  if ( !v12 )
  {
    sub_14024CFBC(a1, a2, a3, a4, a5);
    JUMPOUT(0x14024CF69LL);
  }
  return v12(a1, a2, a3, a4, a5);
}

