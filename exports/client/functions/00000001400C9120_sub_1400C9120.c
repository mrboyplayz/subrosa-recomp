/* Address: 0x1400c9120 | Name: sub_1400C9120 | Size: 388 bytes */
void __fastcall sub_1400C9120(int a1, int a2)
{
  __int64 v2; // rbp
  signed int v3; // edi
  unsigned int *v4; // rsi
  unsigned int *v5; // rbx
  __m128i si128; // xmm0

  v2 = a1;
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v3 = 0;
      v4 = &dword_140404A6C[1760 * v2 + 278846114];
      dword_140404A6C[1760 * v2 + 278847324] = 0;
      v5 = &dword_140404A6C[1760 * v2 + 278846626];
      do
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
        *(_BYTE *)v4 = 0;
        *(__m128i *)v5 = si128;
        *((__m128i *)v5 + 1) = si128;
        *((__m128i *)v5 + 2) = si128;
        *((_QWORD *)v5 + 6) = si128.m128i_i64[0];
        v5[14] = si128.m128i_i32[0];
        *((_WORD *)v5 + 30) = si128.m128i_i16[0];
        *((_BYTE *)v5 + 62) = si128.m128i_i8[0];
        sub_140050F90(v2, v3++);
        v5 += 16;
        v4 += 16;
      }
      while ( v3 < 24 );
    }
  }
  else
  {
    switch ( a2 )
    {
      case 19:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 2 )
          dword_140404A6C[1760 * a1 + 278847330] = 0;
        break;
      case 18:
        if ( dword_140404A6C[1760 * a1 + 278847330] )
          dword_140404A6C[1760 * a1 + 278847330] = 2;
        break;
      case 17:
        if ( dword_140404A6C[1760 * a1 + 278847330] != 3 )
          dword_140404A6C[1760 * a1 + 278847330] = 1;
        break;
      default:
        if ( a2 == 16 && dword_140404A6C[1760 * a1 + 278847330] != 1 )
          dword_140404A6C[1760 * a1 + 278847330] = 3;
        break;
    }
  }
}

