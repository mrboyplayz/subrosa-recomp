/* Address: 0x140001080 | Name: sub_140001080 | Size: 105 bytes */
int __fastcall sub_140001080(char *Buffer, size_t BufferCount, char *Format, _locale_t Locale, va_list ArgList)
{
  _QWORD *v9; // rax
  int result; // eax

  v9 = sub_140001000();
  result = __stdio_common_vsprintf(*v9 | 1LL, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

