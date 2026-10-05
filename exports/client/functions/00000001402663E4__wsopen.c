/* Address: 0x1402663e4 | Name: _wsopen | Size: 65 bytes */
int wsopen(const #49 *FileName, int OpenFlag, int ShareFlag, ...)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+20h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, ShareFlag);
  v7 = va_arg(va, _QWORD);
  v6[0] = -1;
  v3 = common_sopen_dispatch<wchar_t>((__int64)FileName, OpenFlag, ShareFlag, v7, v6, 0);
  v4 = v6[0];
  if ( v3 )
    return -1;
  return v4;
}

