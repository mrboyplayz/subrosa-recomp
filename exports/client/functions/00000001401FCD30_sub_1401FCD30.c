/* Address: 0x1401fcd30 | Name: sub_1401FCD30 | Size: 400 bytes */
__int64 __fastcall MEMORY[0x1401FCD30](_WORD *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __m128 v4; // xmm0
  float *v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  unsigned __int64 v8; // r8
  __int64 result; // rax
  __int64 v11; // kr18_8
  char *v12; // rcx

  v11 = 0x101010101010101LL * a2;
  v12 = (char *)a1 + a3;
  result = (__int64)a1;
  switch ( a3 )
  {
    case 0uLL:
      return result;
    case 1uLL:
      goto LABEL_19;
    case 2uLL:
      goto LABEL_27;
    case 3uLL:
      goto LABEL_18;
    case 4uLL:
      goto LABEL_21;
    case 5uLL:
      goto LABEL_24;
    case 6uLL:
      goto LABEL_26;
    case 7uLL:
      goto LABEL_17;
    case 8uLL:
      *(_QWORD *)a1 = v11;
      return result;
    case 9uLL:
      *(_QWORD *)(v12 - 9) = v11;
      *(v12 - 1) = v11;
      return result;
    case 0xAuLL:
      *(_QWORD *)a1 = v11;
      a1[4] = v11;
      return result;
    case 0xBuLL:
      *(_QWORD *)a1 = v11;
      a1[4] = v11;
      *((_BYTE *)a1 + 10) = v11;
      return result;
    case 0xCuLL:
      *(_QWORD *)(v12 - 12) = v11;
LABEL_21:
      *((_DWORD *)v12 - 1) = v11;
      return result;
    case 0xDuLL:
      *(_QWORD *)(v12 - 13) = v11;
LABEL_24:
      *(_DWORD *)(v12 - 5) = v11;
      *(v12 - 1) = v11;
      return result;
    case 0xEuLL:
      *(_QWORD *)(v12 - 14) = v11;
LABEL_26:
      *(_DWORD *)(v12 - 6) = v11;
LABEL_27:
      *((_WORD *)v12 - 1) = v11;
      return result;
    case 0xFuLL:
      *(_QWORD *)(v12 - 15) = v11;
LABEL_17:
      *(_DWORD *)(v12 - 7) = v11;
LABEL_18:
      *(_WORD *)(v12 - 3) = v11;
LABEL_19:
      *(v12 - 1) = v11;
      return result;
    case 0x10uLL:
      *(_QWORD *)a1 = v11;
      *((_QWORD *)a1 + 1) = v11;
      return result;
    default:
      v5 = (float *)a1;
      v4 = (__m128)_mm_unpacklo_epi8((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
      if ( a3 <= 0x80 )
        goto LABEL_8;
      if ( (dword_140404A6C[19064469] & 2) != 0 )
        return sub_1401FCD10(a1, a2, a3);
      *(__m128 *)a1 = v4;
      v5 = (float *)((unsigned __int64)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      a3 = (char *)a1 + a3 - (char *)v5;
      v6 = a3 >> 7;
      if ( a3 >> 7 )
      {
        if ( v6 > qword_140302090 )
        {
          do
          {
            _mm_stream_ps(v5, v4);
            _mm_stream_ps(v5 + 4, v4);
            v5 += 32;
            _mm_stream_ps(v5 - 24, v4);
            _mm_stream_ps(v5 - 20, v4);
            --v6;
            _mm_stream_ps(v5 - 16, v4);
            _mm_stream_ps(v5 - 12, v4);
            _mm_stream_ps(v5 - 8, v4);
            _mm_stream_ps(v5 - 4, v4);
          }
          while ( v6 );
          _mm_sfence();
          a3 &= 0x7Fu;
        }
        else
        {
          do
          {
            *(__m128 *)v5 = v4;
            *((__m128 *)v5 + 1) = v4;
            v5 += 32;
            *((__m128 *)v5 - 6) = v4;
            *((__m128 *)v5 - 5) = v4;
            --v6;
            *((__m128 *)v5 - 4) = v4;
            *((__m128 *)v5 - 3) = v4;
            *((__m128 *)v5 - 2) = v4;
            *((__m128 *)v5 - 1) = v4;
          }
          while ( v6 );
          a3 &= 0x7Fu;
        }
      }
LABEL_8:
      for ( i = a3 >> 4; i; --i )
      {
        *(__m128 *)v5 = v4;
        v5 += 4;
      }
      v8 = a3 & 0xF;
      if ( v8 )
        *(__m128 *)((char *)v5 + v8 - 16) = v4;
      return (__int64)a1;
  }
}

