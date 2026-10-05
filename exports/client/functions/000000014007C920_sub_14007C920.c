/* Address: 0x14007c920 | Name: sub_14007C920 | Size: 48 bytes */
_BYTE *sub_14007C920(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  sub_14006E530(a1, a2, 1024, (__int64)va);
  return a1;
}

