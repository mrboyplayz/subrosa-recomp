/* Address: 0x14024f408 | Name: sub_14024F408 | Size: 86 bytes */
__int64 __fastcall sub_14024F408(__int64 a1)
{
  __int64 (__fastcall *function)(__int64); // rax
  unsigned int v4; // eax

  function = (__int64 (__fastcall *)(__int64))try_get_function(
                                                0x13u,
                                                (__int64)"IsValidLocaleName",
                                                (unsigned int *)&unk_14028ADD0,
                                                (unsigned int *)"IsValidLocaleName");
  if ( function )
    return function(a1);
  v4 = sub_14024F5AC(a1, 0);
  return ((__int64 (__fastcall *)(_QWORD, __int64))IsValidLocale)(v4, 1);
}

