/* Address: 0x140252da0 | Name: sub_140252DA0 | Size: 243 bytes */
__int64 __fastcall sub_140252DA0(unsigned int a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 osfhandle; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned int v9; // eax
  __m128d NewFilePointer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = (int)a1;
  v5 = a2;
  osfhandle = get_osfhandle(a1);
  v7 = osfhandle;
  if ( osfhandle == -1 )
  {
    *errno() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __m128d *, __int64))SetFilePointerEx)(
                        osfhandle,
                        0,
                        &NewFilePointer,
                        1)
    || (v11 = 0,
        !(unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(v7, v5, &v11, a3)) )
  {
    v9 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v9);
    return 0xFFFFFFFFLL;
  }
  result = v11;
  if ( v11 > 0x7FFFFFFF )
  {
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))SetFilePointerEx)(
      v7,
      *(_QWORD *)&NewFilePointer.m128d_f64[0],
      0,
      0);
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)v11 == -1 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) &= ~2u;
  return result;
}

