/* Address: 0x140001020 | Name: _vfprintf_l | Size: 81 bytes */
int __cdecl vfprintf_l(FILE *const Stream, const char *const Format, const _locale_t Locale, va_list ArgList)
{
  unsigned __int64 *v8; // rax

  v8 = (unsigned __int64 *)sub_140001000();
  return __stdio_common_vfprintf(*v8, Stream, Format, Locale, ArgList);
}

