/* Address: 0x1400dbb30 | Name: sub_1400DBB30 | Size: 94 bytes */
int sub_1400DBB30(char *Buffer, char *Format, ...)
{
  _QWORD *v4; // rax
  int result; // eax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = sub_140001000();
  result = __stdio_common_vsprintf(*v4 | 1LL, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, nullptr, va);
  if ( result < 0 )
    return -1;
  return result;
}

