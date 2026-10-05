/* Address: 0x140266204 | Name: _open | Size: 35 bytes */
int open(const char *FileName, int OpenFlag, ...)
{
  unsigned int v3; // [rsp+40h] [rbp+18h]
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _QWORD);
  return common_open<char>(FileName, OpenFlag, v3);
}

