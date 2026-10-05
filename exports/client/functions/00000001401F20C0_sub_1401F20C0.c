/* Address: 0x1401f20c0 | Name: sub_1401F20C0 | Size: 90 bytes */
__int64 sub_1401F20C0(__int64 a1, int a2, ...)
{
  __int64 v2; // rax
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  v2 = sub_1401F8050(a1);
  return (unsigned int)sub_1401E47A0(v2, a2, (int **)va);
}

