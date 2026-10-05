/* Address: 0x14024ede0 | Name: sub_14024EDE0 | Size: 220 bytes */
__int64 __fastcall sub_14024EDE0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 (__fastcall *function)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64); // rax
  unsigned int v15; // eax

  function = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, int, __int64, __int64, __int64))try_get_function(1u, (__int64)"CompareStringEx", (unsigned int *)&unk_14028AC10, (unsigned int *)"CompareStringEx");
  if ( function )
    return function(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v15 = sub_14024F5AC(a1, 0);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, int))CompareStringW)(
           v15,
           a2,
           a3,
           a4,
           a5,
           a6);
}

