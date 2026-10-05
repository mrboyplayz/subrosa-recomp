/* Address: 0x1402406f0 | Name: expf | Size: 679 bytes */
// local variable allocation has failed, the output may be wrong!
float __cdecl expf(float X)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  __m128d v5; // xmm3
  __m128i v6; // xmm4
  int v7; // ecx
  double v8; // xmm1_8
  int v9; // edx

  if ( !dword_140404A6C[19065824] )
  {
    v4 = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)&X);
    LODWORD(v4) = v4 & 0x7FFFFFFF;
    if ( (int)v4 < 2139095040 )
    {
      *(double *)&X = X;
      v5.m128d_f64[1] = 0.0;
      v5.m128d_f64[0] = 92.33248261689366 * *(double *)&X;
      if ( 92.33248261689366 * *(double *)&X >= 8192.0 || v5.m128d_f64[0] < -9600.0 )
        return expf_special(v2, v4);
      v6 = _mm_cvtpd_epi32(v5);
      v7 = _mm_cvtsi128_si32(v6);
      v8 = *(double *)&X - 0.01083042469624915 * _mm_cvtepi32_pd(v6).m128d_f64[0];
      return ((v8 * v8 * (0.1666666666666667 * v8 + 0.5) + v8) * dbl_14028C3F0[v7 & 0x3F] + dbl_14028C3F0[v7 & 0x3F])
           * COERCE_DOUBLE(((unsigned int)((v7 - (v7 & 0x3F)) >> 6) + 1023LL) << 52);
    }
    v9 = _mm_cvtsi128_si32(*(__m128i *)&X);
    if ( v9 == 2139095040 )
      return X;
    if ( v9 != -8388608 )
      return expf_special(v2, v9 | 0x400000u);
    return 0.0;
  }
  __asm { vmovd   edx, xmm0 }
  LODWORD(_RDX) = _EDX & 0x7FFFFFFF;
  if ( (int)_RDX < 2139095040 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmulsd  xmm3, xmm0, qword ptr cs:xmmword_1402878F0
      vcomisd xmm3, cs:qword_1402878D0
    }
    __asm { vucomisd xmm3, cs:qword_1402878E0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmovd   xmm0, edx
    }
    return expf_special(v2, _RDX);
  }
  __asm { vmovd   edx, xmm0 }
  if ( _EDX != 2139095040 )
  {
    if ( _EDX != -8388608 )
    {
      _RDX = _EDX | 0x400000u;
      __asm { vmovd   xmm1, edx }
      return expf_special(v2, _RDX);
    }
    return 0.0;
  }
  return X;
}

