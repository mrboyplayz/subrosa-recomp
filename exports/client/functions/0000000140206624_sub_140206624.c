/* Address: 0x140206624 | Name: sub_140206624 | Size: 70 bytes */
__int64 __fastcall sub_140206624(unsigned int a1)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = (__int64 (__fastcall *)(_QWORD))sub_140206244(
                                         1u,
                                         (__int64)"FlsFree",
                                         (unsigned int *)&unk_1402849D8,
                                         (unsigned int *)"FlsFree");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (__fastcall *)(_QWORD))TlsFree)(a1);
}

