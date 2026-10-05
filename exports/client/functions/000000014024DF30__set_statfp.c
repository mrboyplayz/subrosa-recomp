/* Address: 0x14024df30 | Name: _set_statfp | Size: 31 bytes */
__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}

