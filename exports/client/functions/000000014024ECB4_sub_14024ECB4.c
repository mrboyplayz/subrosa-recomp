/* Address: 0x14024ecb4 | Name: sub_14024ECB4 | Size: 78 bytes */
__int64 __fastcall sub_14024ECB4(__int64 a1)
{
  __int64 (__fastcall *function)(__int64, __int64); // rax

  function = (__int64 (__fastcall *)(__int64, __int64))try_get_function(
                                                         0x1Eu,
                                                         (__int64)"AppPolicyGetShowDeveloperDiagnostic",
                                                         &dword_14028AF20,
                                                         &dword_14028AF24);
  if ( function )
    return function(-6, a1);
  else
    return 3221226021LL;
}

