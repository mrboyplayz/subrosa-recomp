/* Address: 0x1400b36f0 | Name: sub_1400B36F0 | Size: 85 bytes */
int sub_1400B36F0(char *Format, ...)
{
  FILE *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = __acrt_iob_func(1u);
  v3 = (unsigned __int64 *)sub_140001000();
  return __stdio_common_vfprintf(*v3, v2, Format, nullptr, va);
}

