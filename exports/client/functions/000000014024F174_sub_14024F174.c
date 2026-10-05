/* Address: 0x14024f174 | Name: sub_14024F174 | Size: 130 bytes */
__int64 __fastcall sub_14024F174(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *function)(__int64, _QWORD, __int64, _QWORD); // rax
  unsigned int v10; // eax

  function = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))try_get_function(
                                                                         0xBu,
                                                                         (__int64)"GetLocaleInfoEx",
                                                                         (unsigned int *)&unk_14028ACE0,
                                                                         (unsigned int *)"GetLocaleInfoEx");
  if ( function )
    return function(a1, a2, a3, a4);
  v10 = sub_14024F5AC(a1, 0);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))GetLocaleInfoW)(v10, a2, a3, a4);
}

