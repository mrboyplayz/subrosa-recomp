/* Address: 0x14025c114 | Name: _exception_enabled | Size: 186 bytes */
_BOOL8 __fastcall exception_enabled(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    set_statfp(1);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    set_statfp(4);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    set_statfp(8);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      set_statfp(16);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    set_statfp(32);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}

