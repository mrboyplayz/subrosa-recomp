/* Address: 0x140206708 | Name: sub_140206708 | Size: 97 bytes */
__int64 __fastcall sub_140206708(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rax

  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))sub_140206244(
                                                          4u,
                                                          (__int64)"InitializeCriticalSectionEx",
                                                          (unsigned int *)&unk_140284A18,
                                                          (unsigned int *)"InitializeCriticalSectionEx");
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

