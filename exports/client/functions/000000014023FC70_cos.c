/* Address: 0x14023fc70 | Name: cos | Size: 1402 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl cos(double X)
{
  unsigned __int64 v2; // r10
  double v3; // xmm0_8
  __m128i v4; // xmm0
  double v5; // xmm2_8
  double v6; // xmm4_8
  double v7; // xmm1_8
  char v8; // al
  double v9; // xmm4_8
  double v10; // xmm2_8
  double v11; // xmm4_8
  double v12; // xmm2_8
  __int64 v14; // rax
  char v29; // al

  if ( dword_140404A6C[19065824] )
  {
    __asm { vmovq   r9, xmm0 }
    v14 = _R9;
    _R9 = _R9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( _R9 <= 0x3FE921FB54442D18LL )
    {
      if ( _R9 >= 0x3F20000000000000LL )
      {
        __asm
        {
          vmulsd  xmm3, xmm0, xmm0
          vmovapd xmm0, cs:xmmword_14028BFE0
          vfmadd213sd xmm0, xmm3, qword ptr cs:xmmword_14028BFD0
          vfmadd213sd xmm0, xmm3, cs:qword_14028BFC0
          vfmadd213sd xmm0, xmm3, cs:qword_14028BFB0
          vfmadd213sd xmm0, xmm3, cs:qword_14028BFA0
          vfmadd213sd xmm0, xmm3, cs:qword_14028BF90
          vfmsub213sd xmm0, xmm3, cs:qword_140287748
          vfmadd213sd xmm0, xmm3, qword ptr cs:xmmword_140287700
        }
      }
      else if ( _R9 >= 0x3E40000000000000LL )
      {
        __asm
        {
          vaddsd  xmm2, xmm0, cs:qword_140287790
          vmulsd  xmm1, xmm0, cs:qword_140287748
          vfnmadd213sd xmm0, xmm1, qword ptr cs:xmmword_140287700
        }
      }
      else
      {
        __asm
        {
          vmovapd xmm1, xmm0
          vmovsd  xmm0, qword ptr cs:xmmword_140287700
          vaddsd  xmm1, xmm1, cs:qword_140287790
        }
      }
      return X;
    }
    if ( (v14 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
      return cos_special();
    __asm { vmovq   xmm0, r9 }
    if ( (unsigned __int64)_R9 >= 0x417312D000000000LL )
      v29 = sub_14025C840();
    else
      v29 = MEMORY[0x14025CA30]();
    if ( (v29 & 1) != 0 )
    {
      __asm
      {
        vmovapd xmm5, cs:xmmword_14028C030
        vmulsd  xmm3, xmm0, xmm0
        vfmadd231sd xmm5, xmm3, cs:qword_14028C040
        vfmadd213sd xmm5, xmm3, cs:qword_14028C020
        vfmadd213sd xmm5, xmm3, cs:qword_14028C010
        vfmadd213sd xmm5, xmm3, cs:qword_14028C000
        vmulsd  xmm4, xmm0, xmm3
        vmulsd  xmm2, xmm4, xmm5
        vmulsd  xmm5, xmm1, cs:qword_140287748
        vsubsd  xmm2, xmm5, xmm2
        vmulsd  xmm2, xmm3, xmm2
        vsubsd  xmm2, xmm2, xmm1
        vfnmadd231sd xmm2, xmm4, cs:qword_14028BFF0
        vsubsd  xmm0, xmm0, xmm2
      }
    }
    else
    {
      __asm
      {
        vmovapd xmm2, cs:xmmword_140287700
        vmulsd  xmm3, xmm0, xmm0
        vmulsd  xmm5, xmm3, cs:qword_140287748
        vsubsd  xmm4, xmm2, xmm5
        vsubsd  xmm2, xmm2, xmm4
        vsubsd  xmm2, xmm2, xmm5
        vmovapd xmm5, cs:xmmword_14028BFD0
        vfnmadd231sd xmm2, xmm0, xmm1
        vmulsd  xmm1, xmm3, xmm3
        vfmadd231sd xmm5, xmm3, qword ptr cs:xmmword_14028BFE0
        vfmadd213sd xmm5, xmm3, cs:qword_14028BFC0
        vfmadd213sd xmm5, xmm3, cs:qword_14028BFB0
        vfmadd213sd xmm5, xmm3, cs:qword_14028BFA0
        vfmadd213sd xmm5, xmm3, cs:qword_14028BF90
        vfmadd213sd xmm5, xmm1, xmm2
        vaddsd  xmm0, xmm5, xmm4
      }
    }
    _R8 = 0;
    if ( ((v29 + 1) & 2) != 0 )
      _R8 = 0x8000000000000000uLL;
    __asm
    {
      vmovq   xmm3, r8
      vxorpd  xmm0, xmm0, xmm3
    }
  }
  else
  {
    v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) >= 0x3FE921FB54442D18LL )
    {
      *(_QWORD *)&v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
      if ( v2 < 0x411E848000000000LL )
      {
        v4 = _mm_cvttpd_epi32((__m128d)COERCE_UNSIGNED_INT64(*(double *)&v2 * 0.6366197723675814 + 0.5));
        v5 = _mm_cvtepi32_pd(v4).m128d_f64[0];
        v6 = *(double *)&v2 - 1.570796326734126 * v5;
        v7 = 6.077100506506192e-11 * v5;
        v8 = _mm_cvtsi128_si32(v4);
        v3 = v6 - 6.077100506506192e-11 * v5;
        if ( (__int64)((v2 >> 52) - ((unsigned __int64)(2LL * *(_QWORD *)&v3) >> 53)) > 15 )
        {
          v6 = v6 - 6.077100506303966e-11 * v5;
          v7 = 2.022266248795951e-21 * v5 - (*(double *)&v2 - 1.570796326734126 * v5 - v6 - 6.077100506303966e-11 * v5);
          v3 = v6 - v7;
        }
        v9 = v6 - v3 - v7;
        goto LABEL_7;
      }
      if ( v2 < 0x7FF0000000000000LL )
      {
        v8 = sub_14025C4F0();
        v9 = *(double *)&_XMM1;
LABEL_7:
        v10 = v3 * v3;
        if ( (v8 & 1) != 0 )
          X = v9
            + v3
            * v10
            * (((1.591814430448591e-10 * v10 + -0.0000000250511320680217) * v10 + 0.00000275573161037288)
             * (v10
              * v10
              * v10)
             + (-0.0001984126983676113 * v10 + 0.00833333333333095) * v10
             + -0.1666666666666667)
            - v10 * 0.5 * v9
            + v3;
        else
          X = ((0.00002480158729876704 * v10 + -0.00138888888888874) * v10
             + 0.04166666666666666
             + ((-1.138263981623609e-11 * v10 + 0.000000002087614638237214) * v10 + -0.0000002755731727234489)
             * (v10
              * v10
              * v10))
            * (v10
             * v10)
            + 0.5 * v10
            - 1.0
            + 1.0
            - v10 * 0.5
            - v9 * v3
            - (v10 * 0.5
             - 1.0);
        if ( ((v8 + 1) & 2) != 0 )
          return 0.0 - X;
        return X;
      }
      return cos_special();
    }
    if ( v2 < 0x3F20000000000000LL )
    {
      v12 = X;
      X = 1.0;
      if ( v2 >= 0x3E40000000000000LL )
        return 1.0 - v12 * v12 * 0.5;
    }
    else
    {
      v11 = X * X * (X * X);
      return 1.0
           - (X * X * -0.5
            + 1.0)
           + X * X * -0.5
           + (-0.00138888888888874 * (X * X) + 0.04166666666666666) * v11
           + (-0.0000002755731727234489 * (X * X) + 0.00002480158729876704) * (v11 * v11)
           + v11 * (v11 * v11) * (-1.138263981623609e-11 * (X * X) + 0.000000002087614638237214)
           + X * X * -0.5
           + 1.0;
    }
  }
  return X;
}

