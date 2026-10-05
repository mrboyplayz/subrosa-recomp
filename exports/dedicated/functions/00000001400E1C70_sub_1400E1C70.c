/* Address: 0x1400e1c70 | Name: sub_1400E1C70 | Size: 34 bytes */
__int64 sub_1400E1C70(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_1400E1CA0(a1, a2, (__int64 *)va);
}

