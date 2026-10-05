/* Address: 0x14024f3a4 | Name: __acrt_InitializeCriticalSectionEx | Size: 97 bytes */
__int64 __fastcall _acrt_InitializeCriticalSectionEx(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 (__fastcall *function)(__int64, _QWORD, _QWORD); // rax

  function = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))try_get_function(
                                                                0x12u,
                                                                (__int64)"InitializeCriticalSectionEx",
                                                                (unsigned int *)"\a",
                                                                (unsigned int *)&unk_14028ADD0);
  if ( function )
    return function(a1, a2, a3);
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))InitializeCriticalSectionAndSpinCount)(a1, a2);
}

