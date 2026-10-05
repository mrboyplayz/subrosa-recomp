/* Address: 0x14024ed04 | Name: sub_14024ED04 | Size: 78 bytes */
__int64 __fastcall sub_14024ED04(__int64 a1)
{
  __int64 (__fastcall *function)(__int64, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, __int64))try_get_function(
                                                         0x1Du,
                                                         (__int64)"AppPolicyGetThreadInitializationType",
                                                         &dword_14028AEF0,
                                                         &dword_14028AEF4);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

