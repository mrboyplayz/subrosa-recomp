/* Address: 0x1402401f0 | Name: cosf | Size: 1279 bytes */
// local variable allocation has failed, the output may be wrong!
float __cdecl cosf(float X)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r10
  char v3; // al
  __m128i v4; // xmm0
  double v5; // xmm2_8
  double v6; // xmm4_8
  double v7; // xmm2_8
  double v8; // xmm2_8

  if ( !dword_140404A6C[19065824] )
  {
    if ( (_mm_cvtsi128_si32(*(__m128i *)&X) & 0x7F800000) != 0x7F800000 )
    {
      *(double *)&X = X;
      v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
      {
        if ( v2 >= 0x411E848000000000LL )
        {
          *(double *)&X = MEMORY[0x14025CC50](v1, *(_QWORD *)&X, 1);
        }
        else
        {
          v4 = _mm_cvttpd_epi32((__m128d)COERCE_UNSIGNED_INT64(*(double *)&v2 * 0.6366197723675814 + 0.5));
          v5 = _mm_cvtepi32_pd(v4).m128d_f64[0];
          v6 = *(double *)&v2 - 1.570796326734126 * v5;
          v3 = _mm_cvtsi128_si32(v4);
          *(double *)&X = v6 - 6.077100506506192e-11 * v5;
          if ( (__int64)((v2 >> 52) - ((unsigned __int64)(2LL * *(_QWORD *)&X) >> 53)) > 15 )
            *(double *)&X = v6
                          - 6.077100506303966e-11 * v5
                          - (2.022266248795951e-21 * v5
                           - (v6
                            - (v6
                             - 6.077100506303966e-11 * v5)
                            - 6.077100506303966e-11 * v5));
          if ( (unsigned __int64)(2 * COERCE__INT64(v6 - 6.077100506506192e-11 * v5)) >> 53 < 0x3F2 )
          {
            if ( (unsigned __int64)(2 * COERCE__INT64(v6 - 6.077100506506192e-11 * v5)) >> 53 <= 0x3DE )
            {
              if ( (v3 & 1) == 0 )
                *(_QWORD *)&X = 0x3FF0000000000000LL;
            }
            else
            {
              v7 = *(double *)&X * *(double *)&X;
              if ( (v3 & 1) != 0 )
                *(double *)&X = *(double *)&X - 0.1666666666666667 * *(double *)&X * v7;
              else
                *(double *)&X = 1.0 - v7 * 0.5;
            }
            goto LABEL_19;
          }
        }
      }
      else
      {
        v3 = 0;
      }
      v8 = *(double *)&X * *(double *)&X;
      if ( (v3 & 1) != 0 )
        *(double *)&X = *(double *)&X
                      + ((0.000002755731922398589 * v8 + -0.0001984126984126984) * (v8 * v8)
                       + 0.008333333333333333 * v8
                       + -0.1666666666666667)
                      * (*(double *)&X
                       * v8);
      else
        *(double *)&X = -0.5 * v8
                      + 1.0
                      + ((-0.0000002755731922398589 * v8 + 0.0000248015873015873) * (v8 * v8)
                       + -0.001388888888888889 * v8
                       + 0.04166666666666666)
                      * (v8
                       * v8);
LABEL_19:
      if ( ((v3 + 1) & 2) != 0 )
        *(double *)&X = 0.0 - *(double *)&X;
      return *(double *)&X;
    }
    return cosf_special();
  }
  __asm { vmovd   eax, xmm0 }
  if ( (_EAX & 0x7F800000) == 0x7F800000 )
    return cosf_special();
  __asm
  {
    vcvtss2sd xmm5, xmm0, xmm0
    vmovq   r9, xmm5
  }
  _R9 = _R9 & 0x7FFFFFFFFFFFFFFFLL;
  if ( _R9 > 0x3FE921FB54442D18LL )
  {
    __asm { vmovq   xmm0, r9 }
    if ( _R9 >= 0x41E921FB60000000LL )
    {
      __asm { vmovq   xmm0, r9 }
      _RAX = sub_14025C840();
    }
    else
    {
      __asm
      {
        vandpd  xmm1, xmm0, cs:xmmword_140287850
        vmovapd xmm2, cs:xmmword_1402877C0
        vfmadd213sd xmm2, xmm1, cs:qword_1402877B0
        vcvttpd2dq xmm2, xmm2
        vpmovsxdq xmm1, xmm2
        vandpd  xmm4, xmm1, cs:xmmword_140287860
        vshufps xmm1, xmm1, xmm1, 8
        vcvtdq2pd xmm1, xmm1
        vmovdqa xmm2, xmm0
        vfnmadd231sd xmm2, xmm1, cs:qword_1402877F0
        vmulsd  xmm3, xmm1, cs:qword_140287800
        vsubsd  xmm0, xmm2, xmm3
        vsubsd  xmm2, xmm2, xmm0
        vsubsd  xmm1, xmm2, xmm3
        vmovq   rax, xmm4
      }
    }
    if ( (_RAX & 1) != 0 )
    {
      __asm
      {
        vmovsd  xmm1, cs:qword_14028C3E0
        vmulsd  xmm3, xmm0, xmm0
        vfmadd231sd xmm1, xmm3, cs:qword_14028C3E8
        vfmadd213sd xmm1, xmm3, cs:qword_14028C3D8
        vfmadd213sd xmm1, xmm3, cs:qword_14028C3D0
        vmulsd  xmm3, xmm0, xmm3
        vfmadd231sd xmm0, xmm1, xmm3
      }
    }
    else
    {
      __asm
      {
        vmovapd xmm2, cs:xmmword_1402877A0
        vmulsd  xmm3, xmm0, xmm0
        vmulsd  xmm1, xmm3, cs:qword_1402877B0
        vsubsd  xmm2, xmm2, xmm1
        vmovsd  xmm1, cs:qword_14028C3B8
        vfmadd231sd xmm1, xmm3, cs:qword_14028C3C0
        vfmadd213sd xmm1, xmm3, cs:qword_14028C3B0
        vfmadd213sd xmm1, xmm3, cs:qword_14028C3A8
        vmulsd  xmm3, xmm3, xmm3
        vmovdqa xmm0, xmm2
        vfmadd231sd xmm0, xmm1, xmm3
      }
    }
    _RAX = (unsigned __int64)(_RAX + 1) >> 1 << 63;
    __asm
    {
      vmovq   xmm3, rax
      vxorpd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm0, xmm0, xmm0
    }
  }
  else if ( _R9 >= 0x3F80000000000000LL )
  {
    *(double *)&_XMM0 = *(double *)&_XMM5;
    __asm
    {
      vmovapd xmm2, cs:xmmword_1402877A0
      vmulsd  xmm3, xmm0, xmm0
      vmulsd  xmm1, xmm3, cs:qword_1402877B0
      vsubsd  xmm2, xmm2, xmm1
      vmovsd  xmm1, cs:qword_14028C3B8
      vfmadd231sd xmm1, xmm3, cs:qword_14028C3C0
      vfmadd213sd xmm1, xmm3, cs:qword_14028C3B0
      vfmadd213sd xmm1, xmm3, cs:qword_14028C3A8
      vmulsd  xmm3, xmm3, xmm3
      vmovdqa xmm0, xmm2
      vfmadd231sd xmm0, xmm1, xmm3
      vcvtsd2ss xmm0, xmm0, xmm0
    }
  }
  else if ( _R9 >= 0x3F20000000000000LL )
  {
    __asm
    {
      vmulsd  xmm0, xmm5, cs:qword_1402877B0
      vfnmadd213sd xmm0, xmm5, qword ptr cs:xmmword_1402877A0
      vcvtsd2ss xmm0, xmm0, xmm0
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm1, xmm0, cs:dword_1402878A0
      vmovd   xmm0, cs:dword_1402878A8
    }
  }
  return X;
}

