/* Address: 0x14024ed54 | Name: sub_14024ED54 | Size: 78 bytes */
__int64 __fastcall sub_14024ED54(__int64 a1)
{
  __int64 (__fastcall *function)(__int64, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, __int64))try_get_function(
                                                         0x1Fu,
                                                         (__int64)"AppPolicyGetWindowingModel",
                                                         &dword_14028AF4C,
                                                         (unsigned int *)"AppPolicyGetWindowingModel");
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

