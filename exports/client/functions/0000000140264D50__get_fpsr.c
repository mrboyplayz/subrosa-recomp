/* Address: 0x140264d50 | Name: _get_fpsr | Size: 16 bytes */
__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}

