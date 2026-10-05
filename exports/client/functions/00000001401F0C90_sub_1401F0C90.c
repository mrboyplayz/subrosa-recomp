/* Address: 0x1401f0c90 | Name: sub_1401F0C90 | Size: 74 bytes */
__int64 sub_1401F0C90(int *a1, int a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return (unsigned int)sub_1401E3F90(a1, a2, (__int64 *)va);
}

