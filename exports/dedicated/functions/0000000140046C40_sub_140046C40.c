/* Address: 0x140046c40 | Name: sub_140046C40 | Size: 54 bytes */
_BOOL8 sub_140046C40()
{
  _RAX = 1;
  __asm { cpuid }
  if ( (int)_RAX < 1 )
    return 0;
  _RAX = 1;
  __asm { cpuid }
  return (_RCX & 0x80000) != 0;
}

