/* Address: 0x140264d6a | Name: _fclrf | Size: 20 bytes */
void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

