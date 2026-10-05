/* Address: 0x14024efe4 | Name: sub_14024EFE4 | Size: 70 bytes */
__int64 __fastcall sub_14024EFE4(unsigned int a1)
{
  __int64 (__fastcall *function)(_QWORD); // rax

  function = (__int64 (__fastcall *)(_QWORD))try_get_function(
                                               5u,
                                               (__int64)"FlsGetValue",
                                               (unsigned int *)&unk_14028AC58,
                                               (unsigned int *)&unk_14028AC60);
  if ( function )
    return function(a1);
  else
    return ((__int64 (__fastcall *)(_QWORD))TlsGetValue)(a1);
}

