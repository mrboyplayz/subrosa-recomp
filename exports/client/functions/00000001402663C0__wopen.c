/* Address: 0x1402663c0 | Name: _wopen | Size: 35 bytes */
int wopen(const #49 *FileName, int OpenFlag, ...)
{
  int v3; // [rsp+40h] [rbp+18h]
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _QWORD);
  return common_open<wchar_t>((__int64)FileName, OpenFlag, v3);
}

