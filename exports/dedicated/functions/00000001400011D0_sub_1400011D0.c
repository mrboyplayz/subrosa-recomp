/* Address: 0x1400011d0 | Name: sub_1400011D0 | Size: 90 bytes */
int __fastcall sub_1400011D0(char *Buffer, char *Format, _locale_t Locale, va_list ArgList)
{
  unsigned __int64 *v8; // rax

  v8 = (unsigned __int64 *)sub_140001010();
  return __stdio_common_vsscanf(*v8, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, Locale, ArgList);
}

