/* Address: 0x14015e240 | Name: sub_14015E240 | Size: 23 bytes */
__int64 sub_14015E240()
{
  _RAX = 1;
  __asm { cpuid }
  return (unsigned int)_RDX;
}

