/* Address: 0x14024df50 | Name: _statfp | Size: 17 bytes */
__int64 statfp()
{
  return get_fpsr() & 0x3F;
}

