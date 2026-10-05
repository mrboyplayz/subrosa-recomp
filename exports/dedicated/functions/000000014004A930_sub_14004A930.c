/* Address: 0x14004a930 | Name: sub_14004A930 | Size: 48 bytes */
_BYTE *sub_14004A930(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  sub_1400475C0(a1, a2, 1024, (__int64)va);
  return a1;
}

