/* Address: 0x14024f080 | Name: sub_14024F080 | Size: 182 bytes */
__int64 __fastcall sub_14024F080(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 (__fastcall *function)(__int64, _QWORD, __int64, __int64, __int64, int, __int64); // rax
  unsigned int v13; // eax

  function = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, __int64))try_get_function(
                                                                                                 8u,
                                                                                                 (__int64)"GetDateFormatEx",
                                                                                                 (unsigned int *)&unk_14028AC80,
                                                                                                 (unsigned int *)"GetDateFormatEx");
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7);
  v13 = sub_14024F5AC(a1, 0);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64, int))GetDateFormatW)(
           v13,
           a2,
           a3,
           a4,
           a5,
           a6);
}

