/* Address: 0x14026c670 | Name: _set_controlfp | Size: 52 bytes */
void __cdecl set_controlfp(unsigned int NewValue, unsigned int Mask)
{
  if ( NewValue != 589855 || Mask != -1 || (_mm_getcsr() & 0xFEC0) != 0x1E80 )
    common_control87(NewValue, Mask & 0xFFF7FFFF);
}

