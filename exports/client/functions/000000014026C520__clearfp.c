/* Address: 0x14026c520 | Name: _clearfp | Size: 110 bytes */
unsigned int __cdecl clearfp()
{
  char fpsr; // bl
  unsigned int v1; // r9d
  int v2; // r8d
  int v3; // ecx
  int v4; // edx

  fpsr = get_fpsr();
  fclrf();
  v1 = 0;
  if ( (fpsr & 0x3F) != 0 )
  {
    v2 = (16 * (fpsr & 1)) | 8;
    if ( (fpsr & 4) == 0 )
      v2 = 16 * (fpsr & 1);
    v3 = v2 | 4;
    if ( (fpsr & 8) == 0 )
      v3 = v2;
    v4 = v3 | 2;
    if ( (fpsr & 0x10) == 0 )
      v4 = v3;
    v1 = v4 | 1;
    if ( (fpsr & 0x20) == 0 )
      v1 = v4;
    if ( (fpsr & 2) != 0 )
      v1 |= 0x80000u;
  }
  return v1;
}

