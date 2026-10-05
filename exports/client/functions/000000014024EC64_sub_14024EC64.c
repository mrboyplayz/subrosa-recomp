/* Address: 0x14024ec64 | Name: sub_14024EC64 | Size: 78 bytes */
__int64 __fastcall sub_14024EC64(__int64 a1)
{
  __int64 (__fastcall *function)(__int64, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, __int64))try_get_function(
                                                         0x1Cu,
                                                         (__int64)"AppPolicyGetProcessTerminationMethod",
                                                         &dword_14028AEC0,
                                                         &dword_14028AEC4);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

