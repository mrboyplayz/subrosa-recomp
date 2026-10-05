/* Address: 0x14024f02c | Name: sub_14024F02C | Size: 81 bytes */
__int64 __fastcall sub_14024F02C(unsigned int a1, __int64 a2)
{
  __int64 (__fastcall *function)(_QWORD, __int64); // rax

  function = (__int64 (__fastcall *)(_QWORD, __int64))try_get_function(
                                                        6u,
                                                        (__int64)"FlsSetValue",
                                                        (unsigned int *)&unk_14028AC60,
                                                        (unsigned int *)&unk_14028AC68);
  if ( function )
    return function(a1, a2);
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64))TlsSetValue)(a1, a2);
}

