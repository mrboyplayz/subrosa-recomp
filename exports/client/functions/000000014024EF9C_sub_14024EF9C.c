/* Address: 0x14024ef9c | Name: sub_14024EF9C | Size: 70 bytes */
__int64 __fastcall sub_14024EF9C(unsigned int a1)
{
  __int64 (__fastcall *function)(_QWORD); // rax

  function = (__int64 (__fastcall *)(_QWORD))try_get_function(
                                               4u,
                                               (__int64)"FlsFree",
                                               (unsigned int *)&unk_14028AC50,
                                               (unsigned int *)&unk_14028AC58);
  if ( function )
    return function(a1);
  else
    return ((__int64 (__fastcall *)(_QWORD))TlsFree)(a1);
}

