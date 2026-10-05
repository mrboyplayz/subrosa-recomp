/* Address: 0x140001160 | Name: vsnprintf | Size: 101 bytes */
int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax
  va_list v10; // [rsp+60h] [rbp+28h]

  v8 = (unsigned __int64 *)sub_140001000();
  result = __stdio_common_vsprintf_s(*v8, Buffer, BufferCount, Format, (_locale_t)ArgList, v10);
  if ( result < 0 )
    return -1;
  return result;
}

