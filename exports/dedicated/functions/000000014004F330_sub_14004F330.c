/* Address: 0x14004f330 | Name: sub_14004F330 | Size: 69 bytes */
int sub_14004F330(FILE *Stream, char *Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = (unsigned __int64 *)sub_140001000();
  return __stdio_common_vfprintf(*v4, Stream, Format, nullptr, va);
}

