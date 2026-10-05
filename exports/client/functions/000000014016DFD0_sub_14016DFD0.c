/* Address: 0x14016dfd0 | Name: sub_14016DFD0 | Size: 114 bytes */
__m128i *(__fastcall *__fastcall sub_14016DFD0(
        _QWORD *a1))(__m128i *a1, unsigned __int8 *a2, const __m128i *a3, int a4)
{
  __m128i *(__fastcall *result)(__m128i *, unsigned __int8 *, const __m128i *, int); // rax

  a1[2318] = sub_140163020;
  a1[2319] = sub_14015B140;
  a1[2320] = sub_14016DAC0;
  _RAX = 1;
  __asm { cpuid }
  if ( (_RDX & 0x4000000) != 0 )
  {
    a1[2318] = sub_140163640;
    a1[2319] = sub_14015B270;
    a1[2320] = sub_14016DB80;
    return sub_14016DB80;
  }
  return result;
}

