/* Address: 0x1400010f0 | Name: sub_1400010F0 | Size: 102 bytes */
int __fastcall sub_1400010F0(char *Buffer, char *Format, _locale_t Locale, va_list ArgList)
{
  _QWORD *v8; // rax
  int result; // eax

  v8 = sub_140001000();
  result = __stdio_common_vsprintf(*v8 | 1LL, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

