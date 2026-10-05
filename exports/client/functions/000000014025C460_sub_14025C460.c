/* Address: 0x14025c460 | Name: sub_14025C460 | Size: 112 bytes */
__int64 sub_14025C460()
{
  unsigned int v0; // r8d

  v0 = 0;
  dword_140404A6C[19065823] = 0;
  _RAX = 1;
  __asm { cpuid }
  if ( (_RCX & 0x18001000) == 0x18001000 )
  {
    __asm { xgetbv }
    v0 = dword_140404A6C[19065823];
  }
  dword_140404A6C[19065824] = v0;
  return 0;
}

