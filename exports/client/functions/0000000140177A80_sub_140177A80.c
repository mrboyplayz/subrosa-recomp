/* Address: 0x140177a80 | Name: sub_140177A80 | Size: 34 bytes */
__int64 sub_140177A80(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_140177AB0(a1, a2, (__int64 *)va);
}

