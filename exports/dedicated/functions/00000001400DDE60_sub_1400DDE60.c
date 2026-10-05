/* Address: 0x1400dde60 | Name: sub_1400DDE60 | Size: 175 bytes */
__int64 __fastcall sub_1400DDE60(char *FileName, unsigned int a2, unsigned int a3, int a4, __int64 a5, unsigned int a6)
{
  void *v7; // rdi
  errno_t v8; // eax
  FILE *v9; // rbx
  int v11; // [rsp+30h] [rbp-18h] BYREF
  FILE *Stream; // [rsp+38h] [rbp-10h] BYREF

  v7 = (void *)sub_1400DDF90(a5, a6, a2, a3, a4, &v11);
  if ( !v7 )
    return 0;
  v8 = fopen_s(&Stream, FileName, "wb");
  v9 = Stream;
  if ( v8 )
    v9 = nullptr;
  Stream = v9;
  if ( !v9 )
  {
    free(v7);
    return 0;
  }
  fwrite(v7, 1u, v11, v9);
  fclose(v9);
  free(v7);
  return 1;
}

