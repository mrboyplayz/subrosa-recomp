/* Address: 0x1400f26fe | Name: fopen_s | Size: 6 bytes */
// attributes: thunk
errno_t __cdecl fopen_s(FILE **Stream, const char *FileName, const char *Mode)
{
  return __imp_fopen_s(Stream, FileName, Mode);
}

