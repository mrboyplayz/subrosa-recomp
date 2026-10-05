/* Address: 0x1402066b4 | Name: sub_1402066B4 | Size: 81 bytes */
__int64 __fastcall sub_1402066B4(unsigned int a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64); // rax

  v4 = (__int64 (__fastcall *)(_QWORD, __int64))sub_140206244(
                                                  3u,
                                                  (__int64)"FlsSetValue",
                                                  (unsigned int *)&unk_140284A00,
                                                  (unsigned int *)"FlsSetValue");
  if ( v4 )
    return v4(a1, a2);
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

