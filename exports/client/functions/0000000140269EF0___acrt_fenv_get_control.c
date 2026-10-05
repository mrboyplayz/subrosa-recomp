/* Address: 0x140269ef0 | Name: __acrt_fenv_get_control | Size: 241 bytes */
__int64 _acrt_fenv_get_control()
{
  unsigned int v0; // r9d
  __int16 v1; // ax
  int v2; // r8d
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v0 = _mm_getcsr();
  v1 = v0 & 0x8040;
  if ( (v0 & 0x8040) == 0x8000 )
  {
    v2 = 3072;
  }
  else if ( v1 == 64 )
  {
    v2 = 2048;
  }
  else
  {
    v2 = 0;
    if ( v1 == -32704 )
      v2 = 1024;
  }
  v3 = v0 & 0x6000;
  if ( (v0 & 0x6000) != 0 )
  {
    if ( v3 == 0x2000 )
    {
      v4 = 256;
    }
    else if ( v3 == 0x4000 )
    {
      v4 = 512;
    }
    else
    {
      v4 = 768;
      if ( v3 != 24576 )
        v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = v2
     | v4
     | (v0 >> 12) & 1
     | (2 * ((v0 >> 11) & 1))
     | (4 * ((v0 >> 10) & 1))
     | (8 * ((v0 >> 9) & 1))
     | (16 * ((v0 >> 7) & 1))
     | (32 * ((v0 >> 8) & 1));
  return v5
       | ((v2 & 0x3F
         | v4 & 0x3F
         | ((v0 & 0x1000) != 0)
         | ((unsigned __int8)(2 * ((v0 & 0x800) != 0))
          | (unsigned __int8)((4 * ((v0 & 0x400) != 0))
                            | (8 * ((v0 & 0x200) != 0))
                            | (16 * ((v0 & 0x80) != 0))
                            | (32 * (BYTE1(v0) & 1))))
         & 0x3F) << 24)
       | (v5 << 22) & 0xC0000000;
}

