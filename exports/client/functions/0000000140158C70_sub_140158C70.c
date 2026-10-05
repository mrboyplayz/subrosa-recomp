/* Address: 0x140158c70 | Name: sub_140158C70 | Size: 87 bytes */
__int64 sub_140158C70(int a1, int a2, int a3, ...)
{
  _QWORD *v6; // rax
  __int64 result; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = (_QWORD *)sub_140001BB0();
  result = sub_1402250BC(*v6, a1, a2, a3, 0, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

