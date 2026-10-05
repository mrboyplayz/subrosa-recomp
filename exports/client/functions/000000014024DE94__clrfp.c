/* Address: 0x14024de94 | Name: _clrfp | Size: 29 bytes */
__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}

