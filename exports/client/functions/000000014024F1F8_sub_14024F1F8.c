/* Address: 0x14024f1f8 | Name: sub_14024F1F8 | Size: 72 bytes */
__int64 __fastcall sub_14024F1F8(__int64 a1)
{
  __int64 (__fastcall *function)(__int64); // rax

  function = (__int64 (__fastcall *)(__int64))try_get_function(
                                                0xDu,
                                                (__int64)"GetSystemTimePreciseAsFileTime",
                                                (unsigned int *)"\b",
                                                &dword_14028AD1C);
  if ( function )
    return function(a1);
  else
    return ((__int64 (__fastcall *)(__int64))GetSystemTimeAsFileTime)(a1);
}

