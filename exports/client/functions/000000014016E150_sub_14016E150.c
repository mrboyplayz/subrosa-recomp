/* Address: 0x14016e150 | Name: sub_14016E150 | Size: 29 bytes */
__int64 sub_14016E150()
{
  _RAX = 1;
  __asm { cpuid }
  return ((int)_RDX >> 26) & 1;
}

