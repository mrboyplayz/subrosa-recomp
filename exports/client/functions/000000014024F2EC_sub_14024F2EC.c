/* Address: 0x14024f2ec | Name: sub_14024F2EC | Size: 97 bytes */
__int64 __fastcall sub_14024F2EC(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *function)(__int64, _QWORD); // rax
  unsigned int v6; // eax

  function = (__int64 (__fastcall *)(__int64, _QWORD))try_get_function(
                                                        0xFu,
                                                        (__int64)"GetUserDefaultLocaleName",
                                                        (unsigned int *)&unk_14028AD58,
                                                        (unsigned int *)"GetUserDefaultLocaleName");
  if ( function )
    return function(a1, a2);
  v6 = ((__int64 (*)(void))GetUserDefaultLCID)();
  return sub_14024F460(v6, a1, a2, 0);
}

