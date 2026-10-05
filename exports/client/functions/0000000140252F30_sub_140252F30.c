/* Address: 0x140252f30 | Name: sub_140252F30 | Size: 158 bytes */
__int64 __fastcall sub_140252F30(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // eax
  __m128d NewFilePointer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        a1,
                        0,
                        &NewFilePointer,
                        1)
    || (v9 = 0,
        !(unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(a1, v3, &v9, a3)) )
  {
    v6 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v6);
    return 0xFFFFFFFFLL;
  }
  if ( v9 > 0x7FFFFFFF )
  {
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      a1,
      *(_QWORD *)&NewFilePointer.m128d_f64[0],
      0,
      0);
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v9;
}

