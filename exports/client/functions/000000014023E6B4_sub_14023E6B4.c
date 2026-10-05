/* Address: 0x14023e6b4 | Name: sub_14023E6B4 | Size: 67 bytes */
__int64 sub_14023E6B4(__int64 a1, __int64 a2, ...)
{
  __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BB0();
  return sub_140224C90(*v4, a1, a2, 0, (__int64)va);
}

