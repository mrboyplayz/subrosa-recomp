/* Address: 0x140266228 | Name: _sopen | Size: 65 bytes */
int sopen(const char *FileName, int OpenFlag, int ShareFlag, ...)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+20h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, ShareFlag);
  v7 = va_arg(va, _QWORD);
  v6 = -1;
  v3 = common_sopen_dispatch<char>((_DWORD)FileName, OpenFlag, ShareFlag, v7, (unsigned int)&v6);
  v4 = v6;
  if ( v3 )
    return -1;
  return v4;
}

