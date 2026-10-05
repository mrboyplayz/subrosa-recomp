/* Address: 0x1400bf2c0 | Name: sub_1400BF2C0 | Size: 41 bytes */
__int64 sub_1400BF2C0()
{
  unsigned int v0; // ecx
  _DWORD *v1; // rax

  v0 = 0;
  v1 = &unk_160F23920;
  while ( *v1 )
  {
    ++v0;
    v1 += 20;
    if ( (__int64)v1 >= (__int64)dword_160F28920 )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

