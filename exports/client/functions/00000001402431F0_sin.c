/* Address: 0x1402431f0 | Name: sin | Size: 1386 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl sin(double X)
{
  __int64 v1; // rcx
  double v3; // rdx
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  double v6; // xmm0_8
  __m128i v7; // xmm0
  double v8; // xmm2_8
  double v9; // xmm4_8
  double v10; // xmm1_8
  unsigned int v11; // eax
  double v12; // xmm4_8
  double v13; // xmm2_8
  __int64 v15; // r10
  char v30; // al
  __int64 v31; // r10
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r10
  __int64 v64; // [rsp+30h] [rbp-48h]
  __int64 v65; // [rsp+50h] [rbp-28h]

  if ( dword_140404A6C[19065824] )
  {
    __asm { vmovq   r9, xmm0 }
    v15 = _R9;
    _R9 = _R9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)_R9 >= 0x3FE921FB54442D18LL )
    {
      if ( (unsigned __int64)_R9 >= 0x7FF0000000000000LL )
      {
        return ((double (*)(void))sin_special)();
      }
      else
      {
        __asm { vmovq   xmm0, r9 }
        if ( (unsigned __int64)_R9 >= 0x417312D000000000LL )
        {
          v65 = v15;
          v30 = sub_14025C840();
          v31 = v65;
        }
        else
        {
          *(double *)&_XMM0 = MEMORY[0x14025CA30]();
        }
        __asm { vmulsd  xmm3, xmm0, xmm0 }
        if ( (v30 & 1) != 0 )
        {
          __asm
          {
            vmovapd xmm2, cs:xmmword_1402896C0
            vmulsd  xmm5, xmm3, cs:qword_140289718
            vsubsd  xmm4, xmm2, xmm5
            vsubsd  xmm2, xmm2, xmm4
            vsubsd  xmm2, xmm2, xmm5
            vmovsd  xmm5, qword ptr cs:xmmword_14028BFE0
            vfnmadd231sd xmm2, xmm0, xmm1
            vmulsd  xmm1, xmm3, xmm3
            vfmadd213sd xmm5, xmm3, qword ptr cs:xmmword_14028BFD0
            vfmadd213sd xmm5, xmm3, cs:qword_14028BFC0
            vfmadd213sd xmm5, xmm3, cs:qword_14028BFB0
            vfmadd213sd xmm5, xmm3, cs:qword_14028BFA0
            vfmadd213sd xmm5, xmm3, cs:qword_14028BF90
            vfmadd213sd xmm5, xmm1, xmm2
            vaddsd  xmm0, xmm5, xmm4
          }
        }
        else
        {
          __asm
          {
            vmovsd  xmm5, cs:qword_14028C040
            vfmadd213sd xmm5, xmm3, qword ptr cs:xmmword_14028C030
            vfmadd213sd xmm5, xmm3, cs:qword_14028C020
            vfmadd213sd xmm5, xmm3, cs:qword_14028C010
            vfmadd213sd xmm5, xmm3, cs:qword_14028C000
            vmulsd  xmm4, xmm0, xmm3
            vmulsd  xmm2, xmm4, xmm5
            vmulsd  xmm5, xmm1, cs:qword_140289718
            vsubsd  xmm2, xmm5, xmm2
            vmulsd  xmm2, xmm3, xmm2
            vsubsd  xmm2, xmm2, xmm1
            vfnmadd231sd xmm2, xmm4, cs:qword_14028BFF0
            vsubsd  xmm0, xmm0, xmm2
          }
        }
        v60 = 0;
        v61 = v31 & 0x8000000000000000uLL;
        if ( (v30 & 2) != 0 )
          v60 = 0x8000000000000000uLL;
        _R8 = v61 ^ v60;
        __asm
        {
          vmovq   xmm3, r8
          vxorpd  xmm0, xmm0, xmm3
        }
      }
    }
    else if ( _R9 >= 0x3F20000000000000LL )
    {
      __asm
      {
        vmovsd  xmm5, cs:qword_14028C040
        vmulsd  xmm3, xmm0, xmm0
        vfmadd213sd xmm5, xmm3, qword ptr cs:xmmword_14028C030
        vfmadd213sd xmm5, xmm3, cs:qword_14028C020
        vfmadd213sd xmm5, xmm3, cs:qword_14028C010
        vfmadd213sd xmm5, xmm3, cs:qword_14028C000
        vmulsd  xmm4, xmm0, xmm3
        vfmadd213sd xmm5, xmm3, cs:qword_14028BFF0
        vfmadd231sd xmm0, xmm4, xmm5
      }
    }
    else if ( _R9 >= 0x3E40000000000000LL )
    {
      __asm
      {
        vmulsd  xmm1, xmm0, xmm0
        vmulsd  xmm1, xmm1, xmm0
        vfnmadd231sd xmm0, xmm1, cs:qword_140289720
      }
    }
    else
    {
      __asm
      {
        vmulsd  xmm1, xmm0, cs:qword_140289758
        vaddsd  xmm1, xmm0, qword ptr cs:xmmword_1402896C0
      }
    }
  }
  else
  {
    v3 = X;
    v4 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x3FE921FB54442D18LL )
    {
      if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3E40000000000000LL )
        return X
             + X
             * (X
              * X)
             * (((1.591814430448591e-10 * (X * X) + -0.0000000250511320680217) * (X * X) + 0.00000275573161037288)
              * (X
               * X
               * (X
                * X)
               * (X
                * X))
              + (-0.0001984126983676113 * (X * X) + 0.00833333333333095) * (X * X)
              + -0.1666666666666667);
    }
    else
    {
      v5 = *(_QWORD *)&X >> 63;
      *(_QWORD *)&v6 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
      if ( v4 >= 0x411E848000000000LL )
      {
        if ( v4 >= 0x7FF0000000000000LL )
          return sin_special(v1, *(_QWORD *)&v3, 1);
        v64 = *(_QWORD *)&v3 >> 63;
        v11 = sub_14025C4F0(v1, *(_QWORD *)&v3, 1);
        LOBYTE(v5) = v64;
        v12 = *(double *)&_XMM1;
      }
      else
      {
        v7 = _mm_cvttpd_epi32((__m128d)COERCE_UNSIGNED_INT64(*(double *)&v4 * 0.6366197723675814 + 0.5));
        v8 = _mm_cvtepi32_pd(v7).m128d_f64[0];
        v9 = *(double *)&v4 - 1.570796326734126 * v8;
        v10 = 6.077100506506192e-11 * v8;
        v11 = _mm_cvtsi128_si32(v7);
        v6 = v9 - 6.077100506506192e-11 * v8;
        if ( (__int64)((v4 >> 52) - ((unsigned __int64)(2LL * *(_QWORD *)&v6) >> 53)) > 15 )
        {
          v9 = v9 - 6.077100506303966e-11 * v8;
          v10 = 2.022266248795951e-21 * v8 - (*(double *)&v4 - 1.570796326734126 * v8 - v9 - 6.077100506303966e-11 * v8);
          v6 = v9 - v10;
        }
        v12 = v9 - v6 - v10;
      }
      v13 = v6 * v6;
      if ( (v11 & 1) != 0 )
        X = ((0.00002480158729876704 * v13 + -0.00138888888888874) * v13
           + 0.04166666666666666
           + ((-1.138263981623609e-11 * v13 + 0.000000002087614638237214) * v13 + -0.0000002755731727234489)
           * (v13
            * v13
            * v13))
          * (v13
           * v13)
          + 0.5 * v13
          - 1.0
          + 1.0
          - v13 * 0.5
          - v12 * v6
          - (v13 * 0.5
           - 1.0);
      else
        X = v12
          + v6
          * v13
          * (((1.591814430448591e-10 * v13 + -0.0000000250511320680217) * v13 + 0.00000275573161037288)
           * (v13
            * v13
            * v13)
           + (-0.0001984126983676113 * v13 + 0.00833333333333095) * v13
           + -0.1666666666666667)
          - v13 * 0.5 * v12
          + v6;
      if ( (((unsigned __int8)(~(_BYTE)v5 & ~(unsigned __int8)(v11 >> 1)) | (unsigned __int8)(v5 & (v11 >> 1))) & 1) == 0 )
        return 0.0 - X;
    }
  }
  return X;
}

