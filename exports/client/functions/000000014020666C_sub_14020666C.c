/* Address: 0x14020666c | Name: sub_14020666C | Size: 70 bytes */
__int64 __fastcall sub_14020666C(unsigned int a1)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = (__int64 (__fastcall *)(_QWORD))sub_140206244(
                                         2u,
                                         (__int64)"FlsGetValue",
                                         (unsigned int *)&unk_1402849E8,
                                         (unsigned int *)"FlsGetValue");
  if ( v2 )
    return v2(a1);
  else
    return ((__int64 (__fastcall *)(_QWORD))TlsGetValue)(a1);
}

