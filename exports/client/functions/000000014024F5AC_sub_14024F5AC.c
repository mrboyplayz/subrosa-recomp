/* Address: 0x14024f5ac | Name: sub_14024F5AC | Size: 80 bytes */
__int64 __fastcall sub_14024F5AC(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *function)(__int64, _QWORD); // rax

  function = (__int64 (__fastcall *)(__int64, _QWORD))try_get_function(
                                                        0x16u,
                                                        (__int64)"LocaleNameToLCID",
                                                        (unsigned int *)&unk_14028AE28,
                                                        (unsigned int *)"LocaleNameToLCID");
  if ( function )
    return function(a1, a2);
  else
    return _acrt_DownlevelLocaleNameToLCID(a1);
}

