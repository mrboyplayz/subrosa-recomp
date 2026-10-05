/* Address: 0x1400e03b0 | Name: sub_1400E03B0 | Size: 42 bytes */
FILE *__fastcall sub_1400E03B0(char *FileName, char *Mode)
{
  errno_t v2; // eax
  FILE *v3; // rcx
  FILE *Stream; // [rsp+40h] [rbp+18h] BYREF

  v2 = fopen_s(&Stream, FileName, Mode);
  v3 = Stream;
  if ( v2 )
    return nullptr;
  return v3;
}

