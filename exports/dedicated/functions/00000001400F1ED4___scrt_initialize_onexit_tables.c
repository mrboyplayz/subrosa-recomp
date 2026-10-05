/* Address: 0x1400f1ed4 | Name: __scrt_initialize_onexit_tables | Size: 139 bytes */
char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_140585AD9 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5);
      JUMPOUT(0x1400F1F5ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&xmmword_1400F8020);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_140585AF8._first = *(_OWORD *)&Table._first;
      stru_140585AF8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_140585AF8) )
    {
      return 0;
    }
    byte_140585AD9 = 1;
  }
  return 1;
}

