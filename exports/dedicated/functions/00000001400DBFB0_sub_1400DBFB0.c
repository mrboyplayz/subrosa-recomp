/* Address: 0x1400dbfb0 | Name: sub_1400DBFB0 | Size: 82 bytes */
int sub_1400DBFB0(char *Buffer, char *Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = (unsigned __int64 *)sub_140001010();
  return __stdio_common_vsscanf(*v4, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, nullptr, va);
}

