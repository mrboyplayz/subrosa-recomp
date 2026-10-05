/* Address: 0x1400dbcf0 | Name: swprintf | Size: 88 bytes */
int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = (unsigned __int64 *)sub_140001000();
  result = __stdio_common_vsprintf_s(*v6, (char *)Buffer, BufferCount, (const char *)Format, nullptr, va);
  if ( result < 0 )
    return -1;
  return result;
}

