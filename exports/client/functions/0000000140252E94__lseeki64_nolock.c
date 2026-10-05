/* Address: 0x140252e94 | Name: _lseeki64_nolock | Size: 153 bytes */
__int64 __fastcall lseeki64_nolock(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 osfhandle; // rax
  __int64 result; // rax
  unsigned int v8; // eax
  __int64 NewFilePointer; // [rsp+48h] [rbp+20h] BYREF

  v3 = (int)a1;
  osfhandle = get_osfhandle(a1);
  if ( osfhandle == -1 )
  {
    *errno() = 9;
    return -1;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD))SetFilePointerEx)(
                        osfhandle,
                        a2,
                        &NewFilePointer,
                        a3) )
  {
    v8 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v8);
    return -1;
  }
  result = NewFilePointer;
  if ( NewFilePointer == -1 )
    return -1;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) &= ~2u;
  return result;
}

