/* Address: 0x14023e780 | Name: swprintf_0 | Size: 82 bytes */
__int64 swprintf_0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned int *v6; // rax
  __int64 result; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = sub_140001BB0();
  result = sub_140225120(*(_QWORD *)v6, a1, a2, a3, 0, (__int64 *)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

