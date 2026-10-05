/* Address: 0x1402443a0 | Name: log | Size: 1323 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl log(double X)
{
  __int64 v1; // rcx
  __m128i v2; // xmm5
  double v3; // rax
  __m128i v4; // xmm3
  double v5; // xmm6_8
  __m128i v6; // xmm2
  unsigned __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // rax
  double v10; // xmm2_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  double v13; // xmm0_8
  double v14; // xmm1_8
  double v15; // xmm6_8
  double v16; // xmm1_8
  __m128i v17; // xmm2

  if ( dword_140404A6C[19065824] )
  {
    __asm
    {
      vpsrlq  xmm3, xmm0, 34h ; '4'
      vmovq   rax, xmm0
      vpsubq  xmm3, xmm3, cs:xmmword_140289A50
      vcvtdq2pd xmm6, xmm3
      vpand   xmm5, xmm0, cs:xmmword_140289A00
      vcomisd xmm5, qword ptr cs:xmmword_140289A00
    }
    if ( _RAX != 0x7FF0000000000000LL )
    {
      if ( _RAX == 0xFFF0000000000000uLL )
      {
        __asm { vmovsd  xmm1, cs:qword_140289A10 }
        X = log_special(v1);
        __asm { vmovdqa xmm6, [rsp+58h+var_38] }
        return X;
      }
      _RAX = _RAX | 0x8000000000000LL;
      __asm { vmovq   xmm1, rax }
      X = log_special(v1);
    }
    __asm { vmovdqa xmm6, [rsp+58h+var_38] }
  }
  else
  {
    v3 = X;
    v4 = _mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_140289A50);
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x7FF0000000000000LL )
    {
      v5 = _mm_cvtepi32_pd(v4).m128d_f64[0];
      v6 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_140289A40);
      if ( v5 == -1023.0 )
      {
        v17 = _mm_or_si128(v6, (__m128i)xmmword_140289AA0);
        *(double *)v17.m128i_i64 = *(double *)v17.m128i_i64 - 1.0;
        v2.m128i_i64[0] = v17.m128i_i64[0];
        v6 = _mm_and_si128(v17, (__m128i)xmmword_140289A40);
        v3 = *(double *)v6.m128i_i64;
        v5 = _mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v2, 0x34u), (__m128i)xmmword_140289B60)).m128d_f64[0];
      }
      v7 = 2 * (*(_QWORD *)&v3 & 0x80000000000LL) + (*(_QWORD *)&v3 & 0xFF00000000000LL);
      v8 = (__m128i)v7;
      if ( fabs(X - 1.0) < 0.0625 )
      {
        v13 = X - 1.0;
        v14 = v13 / (v13 + 2.0);
        v15 = v13 * v14;
        v16 = v14 + v14;
        return v13
             + (0.01250000000377175 * (v16 * v16) + 0.08333333333333179) * (v16 * v16 * v16)
             + (0.0004348877777076146 * (v16 * v16) + 0.002232139987919448)
             * (v16
              * v16
              * v16
              * (v16
               * v16
               * v16)
              * v16)
             - v15;
      }
      v9 = v7 >> 44;
      *(_QWORD *)&v10 = _mm_or_si128(v6, (__m128i)xmmword_140289AD0).m128i_u64[0];
      *(_QWORD *)&v11 = _mm_or_si128(v8, (__m128i)xmmword_140289AD0).m128i_u64[0];
      if ( X > 0.0 )
      {
        v12 = (v11 - v10) * dbl_14028DA30[v9];
        return dbl_14028C600[v9]
             + 0.6931471228599548 * v5
             + dbl_14028CE10[v9]
             + 0.00000005769999047543285 * v5
             - ((0.3333333333333333 * v12 + 0.5) * (v12 * v12)
              + v12
              + ((0.1666666666666667 * v12 + 0.2) * v12 + 0.25) * (v12 * v12 * (v12 * v12)));
      }
      return log_special(*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
    }
    if ( X != INFINITY )
    {
      if ( X == -INFINITY )
        return log_special(*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
      *(_QWORD *)&X |= 0x8000000000000uLL;
    }
  }
  return X;
}

