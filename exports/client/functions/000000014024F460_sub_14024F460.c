/* Address: 0x14024f460 | Name: sub_14024F460 | Size: 112 bytes */
__int64 __fastcall sub_14024F460(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *function)(_QWORD, __int64, _QWORD, _QWORD); // rax

  function = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))try_get_function(
                                                                        0x15u,
                                                                        (__int64)"LCIDToLocaleName",
                                                                        (unsigned int *)&unk_14028AE08,
                                                                        (unsigned int *)"LCIDToLocaleName");
  if ( function )
    return function(a1, a2, a3, a4);
  else
    return _acrt_DownlevelLCIDToLocaleName(a1, a2, a3);
}

