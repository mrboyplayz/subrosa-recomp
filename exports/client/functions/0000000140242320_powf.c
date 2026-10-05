/* Address: 0x140242320 | Name: powf | Stack analysis corrected in export snapshot. */
// local variable allocation has failed, the output may be wrong!
float __cdecl powf(float X, float Y)
{
  __m128i v4; // xmm1
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __m128i v9; // xmm2
  __int64 v10; // rax
  __m128i v11; // xmm2
  double v12; // xmm1_8
  __m128i v15; // xmm4
  double v16; // xmm0_8
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128d v19; // xmm6
  __m128d v20; // xmm2
  __m128d v21; // xmm4
  __m128i v22; // xmm2
  int v23; // edx
  int v24; // r10d
  bool v25; // sf
  bool v26; // cc
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // edx
  bool v30; // cc
  unsigned int v31; // ecx
  float v32; // eax
  int v37; // r9d
  unsigned int v38; // eax
  unsigned int v39; // ecx
  bool v44; // cf
  int v87; // r10d
  bool v88; // sf
  bool v89; // cc
  bool v98; // cc
  unsigned int v164; // [rsp+40h] [rbp-28h]
  unsigned int v165; // [rsp+40h] [rbp-28h]
  unsigned int v166; // [rsp+40h] [rbp-28h]
  int v167; // [rsp+40h] [rbp-28h]
  int v168; // [rsp+40h] [rbp-28h]
  int v169; // [rsp+40h] [rbp-28h]
  int v170; // [rsp+50h] [rbp-18h]
  int v171; // [rsp+50h] [rbp-18h]
  int v172; // [rsp+50h] [rbp-18h]

  if ( dword_140404A6C[19065824] )
  {
    __asm
    {
      vpunpckldq xmm1, xmm1, xmm0
      vpxor   xmm5, xmm5, xmm5
      vmovd   eax, xmm1
      vmovd   ecx, xmm0
    }
    v37 = _ECX;
    v38 = _EAX & 0x7FFFFFFF;
    v39 = _ECX & 0x7FFFFFFF;
    if ( v38 >= 0x7F800000 )
    {
      if ( v38 <= 0x7F800000 )
      {
        if ( v39 > 0x7F800000 )
          goto Lpowf_fma3_return_x_nan;
        if ( v39 == 1065353216 )
        {
          _EDX = 1065353216;
          __asm
          {
            vmovd   xmm0, edx
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
          return X;
        }
        __asm { vmovd   eax, xmm1 }
        if ( _EAX < 0 )
        {
          _EAX = 0;
          if ( v39 < 0x3F800000 )
            _EAX = 2139095040;
          __asm
          {
            vmovd   xmm0, eax
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
          return X;
        }
        if ( v39 >= 0x3F800000 )
          goto Lpowf_fma3_return_pos_inf;
        goto Lpowf_fma3_return_pos_zero;
      }
      if ( v39 > 0x7F800000 )
      {
        if ( v37 == -4194304 )
        {
          __asm { vmovd   eax, xmm1 }
          _EAX |= 0x400000u;
          __asm { vmovd   xmm2, eax }
          *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 5u);
          __asm
          {
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
        }
        else
        {
          __asm { vmovd   ecx, xmm0 }
          _ECX |= 0x400000u;
          __asm { vmovd   xmm2, ecx }
          *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 5u);
          __asm
          {
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
        }
        return X;
      }
      if ( v37 != 1065353216 )
      {
        __asm { vmovdqa xmm0, xmm1 }
        __asm { vmovd   eax, xmm1 }
        _EAX |= 0x400000u;
        __asm { vmovd   xmm2, eax }
        *(double *)&X = powf_special(*(double *)&_XMM0, *(float *)&_XMM1, *(double *)&_XMM2, 4u);
        __asm
        {
          vmovdqa xmm7, [rsp+68h+var_38]
          vmovdqa xmm6, [rsp+68h+var_48]
        }
        return X;
      }
      if ( v38 < 0x7FC00000 )
      {
        _EDX = 1065353216;
        __asm { vmovd   xmm2, edx }
        *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 4u);
        __asm
        {
          vmovdqa xmm7, [rsp+68h+var_38]
          vmovdqa xmm6, [rsp+68h+var_48]
        }
        return X;
      }
    }
    else
    {
      if ( (int)v38 > 1065353216 )
        goto Lpowf_fma3_y_is_not_zero_or_pos_one;
      if ( v38 )
      {
        __asm { vmovd   edx, xmm1 }
        if ( _EDX == 1065353216 )
        {
          if ( v39 > 0x7F800000 )
          {
            __asm { vmovd   edx, xmm0 }
            _EDX |= 0x400000u;
            __asm { vmovd   xmm2, edx }
            *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 3u);
          }
          else
          {
            __asm
            {
              vmovdqa xmm7, [rsp+68h+var_38]
              vmovdqa xmm6, [rsp+68h+var_48]
            }
          }
          return X;
        }
Lpowf_fma3_y_is_not_zero_or_pos_one:
        if ( v39 < 0x7F800000 )
        {
          __asm { vcvtps2pd xmm0, xmm1 }
          if ( v37 < 1065877504 )
          {
            if ( v37 <= 0 )
            {
              if ( !v39 )
              {
                __asm { vmovd   edx, xmm1 }
                v87 = 0;
                v88 = _EDX < 0;
                v89 = _EDX <= 0;
                if ( _EDX < 0 )
                  _EDX = 2139095040;
                if ( v88 )
                  v87 = 2139095040;
                if ( !v89 )
                  _EDX = 0;
                if ( (v38 & 0x7F800000) <= 0x4B000000 )
                {
                  __asm { vstmxcsr [rsp+68h+var_28] }
                  v171 = v168 | 0x1F80;
                  __asm
                  {
                    vldmxcsr [rsp+68h+var_18]
                    vcvtss2si r8d, xmm1
                    vcvtsi2ss xmm2, xmm2, r8d
                    vldmxcsr [rsp+68h+var_28]
                    vucomiss xmm2, xmm1
                  }
                }
                _ECX = _EDX;
                __asm { vmovd   xmm0, ecx }
                if ( v87 )
                {
                  __asm { vmovdqa xmm2, xmm0 }
                  *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 2u);
                  __asm
                  {
                    vmovdqa xmm7, [rsp+68h+var_38]
                    vmovdqa xmm6, [rsp+68h+var_48]
                  }
                }
                return X;
              }
              if ( (v38 & 0x7F800000) <= 0x4B000000 )
              {
                __asm { vstmxcsr [rsp+68h+var_28] }
                v170 = v167 | 0x1F80;
                __asm
                {
                  vldmxcsr [rsp+68h+var_18]
                  vcvtss2si edx, xmm1
                  vcvtsi2ss xmm2, xmm2, edx
                  vldmxcsr [rsp+68h+var_28]
                  vucomiss xmm2, xmm1
                }
                _EDX = -4194304;
                __asm { vmovd   xmm2, edx }
                *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 6u);
                __asm
                {
                  vmovdqa xmm7, [rsp+68h+var_38]
                  vmovdqa xmm6, [rsp+68h+var_48]
                }
                return X;
              }
            }
            __asm
            {
              vpshufd xmm3, xmm0, 0EEh
              vsubsd  xmm3, xmm3, cs:qword_140288DDC
              vmovq   rdx, xmm3
            }
            if ( (_RDX & 0x7FFFFFFFFFFFFFFFuLL) < 0x3FB0000000000000LL )
            {
              __asm
              {
                vpshufd xmm5, xmm5, 44h ; 'D'
                vmovapd xmm1, xmm3
                vmovsd  xmm5, xmm5, xmm3
                vaddsd  xmm1, xmm1, cs:qword_140288DE4
                vdivsd  xmm5, xmm5, xmm1
                vmovapd xmm2, xmm5
                vmulsd  xmm5, xmm5, xmm3
                vaddsd  xmm2, xmm2, xmm2
                vmovapd xmm1, xmm2
                vmulsd  xmm1, xmm1, xmm2
                vpshufd xmm4, xmm1, 44h ; 'D'
                vmulpd  xmm4, xmm4, cs:xmmword_140288E00
                vmulsd  xmm2, xmm2, xmm1
                vaddpd  xmm4, xmm4, cs:xmmword_140288E10
                vmulsd  xmm1, xmm1, xmm1
                vmulsd  xmm1, xmm1, xmm2
                vunpcklpd xmm2, xmm2, xmm1
                vmulpd  xmm2, xmm2, xmm4
                vpshufd xmm1, xmm2, 0EEh
                vaddsd  xmm2, xmm1, xmm2
                vsubsd  xmm2, xmm2, xmm5
                vpshufd xmm5, xmm5, 0EEh
                vaddsd  xmm3, xmm3, xmm2
              }
              goto LABEL_7;
            }
          }
          __asm
          {
            vpshufd xmm2, xmm0, 0EEh
            vpand   xmm2, xmm2, cs:xmmword_140288E60
            vmovq   rcx, xmm2
          }
          _RCX = (__CFSHR__(_RCX, 44) + (_RCX >> 44)) | 0x3FE00;
          v44 = __CFSHL__(_RCX, 44);
          _RCX <<= 44;
          __asm
          {
            vmovq   xmm1, rcx
            vpor    xmm2, xmm2, cs:xmmword_140288E40
            vpshufd xmm3, xmm2, 0EEh
            vpsrlq  xmm3, xmm3, 34h ; '4'
            vpsubq  xmm3, xmm3, cs:xmmword_140288E50
            vcvtdq2pd xmm3, xmm3
          }
          __asm
          {
            vsubsd  xmm1, xmm1, xmm2
            vmulsd  xmm1, xmm1, qword ptr [rcx+rax*8]
            vmovapd xmm2, xmm1
            vmovsd  xmm4, cs:qword_140288DA4
            vfmadd213sd xmm4, xmm1, qword ptr cs:xmmword_140288E40
            vfmadd213sd xmm4, xmm1, cs:qword_140288DDC
            vmulsd  xmm1, xmm1, xmm4
            vmulsd  xmm3, xmm3, cs:qword_140288DAC
          }
          __asm
          {
            vaddsd  xmm3, xmm3, qword ptr [rcx+rax*8]
            vsubsd  xmm3, xmm3, xmm1
            vmulsd  xmm0, xmm0, xmm3
            vucomisd xmm0, cs:qword_140288DB4
          }
          if ( v44 || _RCX == 0 )
          {
            __asm { vucomisd xmm0, cs:qword_140288DBC }
            __asm
            {
              vpxor   xmm2, xmm2, xmm2
              vorps   xmm2, xmm2, xmm5
            }
            *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 7u);
            __asm
            {
              vmovdqa xmm7, [rsp+68h+var_38]
              vmovdqa xmm6, [rsp+68h+var_48]
            }
          }
          else
          {
            _EDX = 2139095040;
            __asm
            {
              vmovd   xmm2, edx
              vorps   xmm2, xmm2, xmm5
            }
            *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 9u);
            __asm
            {
              vmovdqa xmm7, [rsp+68h+var_38]
              vmovdqa xmm6, [rsp+68h+var_48]
            }
          }
          return X;
        }
        __asm
        {
          vmovd   ecx, xmm0
          vmovd   edx, xmm1
        }
        if ( _ECX != 2139095040 )
        {
          if ( _ECX == -8388608 )
          {
            v98 = _EDX <= 0;
            if ( _EDX < 0 )
              _EDX = 0;
            if ( !v98 )
              _EDX = 2139095040;
            if ( (v38 & 0x7F800000) <= 0x4B000000 )
            {
              __asm { vstmxcsr [rsp+68h+var_28] }
              v172 = v169 | 0x1F80;
              __asm
              {
                vldmxcsr [rsp+68h+var_18]
                vcvtss2si r8d, xmm1
                vcvtsi2ss xmm2, xmm2, r8d
                vldmxcsr [rsp+68h+var_28]
                vucomiss xmm2, xmm1
              }
            }
            _ECX = _EDX;
            __asm
            {
              vmovd   xmm0, ecx
              vmovdqa xmm7, [rsp+68h+var_38]
              vmovdqa xmm6, [rsp+68h+var_48]
            }
            return X;
          }
Lpowf_fma3_return_x_nan:
          __asm { vmovd   ecx, xmm0 }
          _ECX |= 0x400000u;
          __asm { vmovd   xmm2, ecx }
          *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 3u);
          __asm
          {
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
          return X;
        }
        if ( _EDX >= 0 )
        {
Lpowf_fma3_return_pos_inf:
          _EDX = 2139095040;
          __asm
          {
            vmovd   xmm0, edx
            vmovdqa xmm7, [rsp+68h+var_38]
            vmovdqa xmm6, [rsp+68h+var_48]
          }
          return X;
        }
Lpowf_fma3_return_pos_zero:
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqa xmm7, [rsp+68h+var_38]
          vmovdqa xmm6, [rsp+68h+var_48]
        }
        return X;
      }
      if ( v39 > 0x7F800000 && v39 < 0x7FC00000 )
      {
        _EDX = v39 | 0x400000;
        __asm { vmovd   xmm2, edx }
        *(double *)&X = powf_special(*(double *)&X, *(float *)&_XMM1, *(double *)&_XMM2, 3u);
        __asm
        {
          vmovdqa xmm7, [rsp+68h+var_38]
          vmovdqa xmm6, [rsp+68h+var_48]
        }
        return X;
      }
    }
    _EDX = 1065353216;
    __asm
    {
      vmovd   xmm0, edx
      vmovdqa xmm7, [rsp+68h+var_38]
      vmovdqa xmm6, [rsp+68h+var_48]
    }
    return X;
  }
  v4 = _mm_unpacklo_epi32(*(__m128i *)&Y, *(__m128i *)&X);
  *(_QWORD *)&_XMM5 = 0;
  v6 = _mm_cvtsi128_si32(*(__m128i *)&X);
  v7 = _mm_cvtsi128_si32(v4) & 0x7FFFFFFF;
  v8 = v6 & 0x7FFFFFFF;
  if ( v7 >= 0x7F800000 )
  {
    if ( v7 <= 0x7F800000 )
    {
      if ( v8 > 0x7F800000 )
        goto LABEL_66;
      if ( v8 == 1065353216 )
        return 1.0;
      if ( _mm_cvtsi128_si32(v4) < 0 )
      {
        v32 = 0.0;
        if ( v8 )
        {
          if ( v8 < 0x3F800000 )
            return INFINITY;
          return v32;
        }
        return INFINITY;
      }
      if ( v8 >= 0x3F800000 )
        return INFINITY;
      return 0.0;
    }
    if ( v8 > 0x7F800000 )
    {
      if ( v6 == -4194304 )
        *(double *)&X = powf_special(
                          *(double *)&X,
                          *(float *)v4.m128i_i32,
                          *(double *)_mm_cvtsi32_si128(_mm_cvtsi128_si32(v4) | 0x400000u).m128i_i64,
                          5u);
      else
        *(double *)&X = powf_special(
                          *(double *)&X,
                          *(float *)v4.m128i_i32,
                          *(double *)_mm_cvtsi32_si128(_mm_cvtsi128_si32(*(__m128i *)&X) | 0x400000u).m128i_i64,
                          5u);
      return X;
    }
    if ( v6 != 1065353216 )
    {
      *(double *)&X = powf_special(
                        *(double *)&X,
                        *(float *)v4.m128i_i32,
                        *(double *)_mm_cvtsi32_si128(_mm_cvtsi128_si32(v4) | 0x400000u).m128i_i64,
                        4u);
      return X;
    }
    if ( v7 < 0x7FC00000 )
    {
      *(double *)&X = powf_special(
                        *(double *)&X,
                        *(float *)v4.m128i_i32,
                        *(double *)_mm_cvtsi32_si128(0x3F800000u).m128i_i64,
                        4u);
      return X;
    }
    return 1.0;
  }
  if ( (int)v7 > 1065353216 )
    goto LABEL_4;
  if ( !v7 )
  {
    if ( v8 > 0x7F800000 && v8 < 0x7FC00000 )
    {
      *(double *)&X = powf_special(
                        *(double *)&X,
                        *(float *)v4.m128i_i32,
                        *(double *)_mm_cvtsi32_si128(v6 & 0x7FBFFFFF | 0x400000u).m128i_i64,
                        3u);
      return X;
    }
    return 1.0;
  }
  if ( _mm_cvtsi128_si32(v4) == 1065353216 )
  {
    if ( (_mm_cvtsi128_si32(*(__m128i *)&X) & 0x7FFFFFFFu) <= 0x7F800000 )
      return X;
    goto LABEL_66;
  }
LABEL_4:
  if ( v8 >= 0x7F800000 )
  {
    v28 = _mm_cvtsi128_si32(*(__m128i *)&X);
    v29 = _mm_cvtsi128_si32(v4);
    if ( v28 != 2139095040 )
    {
      if ( v28 == -8388608 )
      {
        v30 = v29 <= 0;
        if ( v29 < 0 )
          v29 = 0;
        if ( !v30 )
          v29 = 2139095040;
        v31 = 0x80000000;
        if ( (v7 & 0x7F800000) <= 0x4B000000 )
        {
          v166 = _mm_getcsr();
          _mm_setcsr(v166 | 0x1F80);
          _mm_setcsr(v166);
          if ( (float)(int)*(float *)v4.m128i_i32 == *(float *)v4.m128i_i32 )
          {
            if ( !((int)*(float *)v4.m128i_i32 & 1) )
              v31 = 0;
          }
          else
          {
            v31 = 0;
          }
        }
        else
        {
          v31 = 0;
        }
        LODWORD(X) = v29 | v31;
        return X;
      }
LABEL_66:
      *(double *)&X = powf_special(
                        *(double *)&X,
                        *(float *)v4.m128i_i32,
                        *(double *)_mm_cvtsi32_si128(_mm_cvtsi128_si32(*(__m128i *)&X) | 0x400000u).m128i_i64,
                        3u);
      return X;
    }
    if ( v29 >= 0 )
      return INFINITY;
    return 0.0;
  }
  *(__m128d *)&X = _mm_cvtps_pd((__m128)v4);
  if ( v6 >= 1065877504 )
  {
LABEL_6:
    v9 = _mm_and_si128(_mm_shuffle_epi32(*(__m128i *)&X, 238), (__m128i)xmmword_140288E60);
    v10 = __CFSHR__(v9.m128i_i64[0], 44) + (unsigned int)((unsigned __int64)v9.m128i_i64[0] >> 44);
    v11 = _mm_or_si128(v9, (__m128i)xmmword_140288E40);
    v12 = (COERCE_DOUBLE((unsigned __int64)((unsigned int)v10 | 0x3FE00) << 44) - *(double *)v11.m128i_i64)
        * dbl_14028DA30[v10];
    _XMM1.m128d_f64[0] = v12 * v12 * (0.3333333333333333 * v12 + 0.5) + v12;
    *(double *)_XMM3.m128i_i64 = _mm_cvtepi32_pd(
                                   _mm_sub_epi64(
                                     _mm_srli_epi64(_mm_shuffle_epi32(v11, 238), 0x34u),
                                     (__m128i)xmmword_140288E50)).m128d_f64[0]
                               * 0.6931471805599453
                               + dbl_140288E70[v10]
                               - _XMM1.m128d_f64[0];
    goto LABEL_7;
  }
  if ( v6 > 0 )
    goto LABEL_16;
  if ( v8 )
  {
    if ( (v7 & 0x7F800000) <= 0x4B000000 )
    {
      v164 = _mm_getcsr();
      _mm_setcsr(v164 | 0x1F80);
      _mm_setcsr(v164);
      if ( (float)(int)*(float *)v4.m128i_i32 != *(float *)v4.m128i_i32 )
      {
        *(double *)&X = powf_special(
                          *(double *)&X,
                          *(float *)v4.m128i_i32,
                          *(double *)_mm_cvtsi32_si128(0xFFC00000).m128i_i64,
                          6u);
        return X;
      }
      if ( (int)*(float *)v4.m128i_i32 & 1 )
        *(_QWORD *)&_XMM5 = 0x80000000LL;
    }
LABEL_16:
    _XMM3 = _mm_shuffle_epi32(*(__m128i *)&X, 238);
    *(double *)_XMM3.m128i_i64 = *(double *)_XMM3.m128i_i64 - 1.0;
    if ( (_XMM3.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFuLL) >= 0x3FB0000000000000LL )
      goto LABEL_6;
    *(_QWORD *)&v19.m128d_f64[1] = _XMM3.m128i_i64[1];
    v19.m128d_f64[0] = *(double *)_XMM3.m128i_i64 / (*(double *)_XMM3.m128i_i64 + 2.0);
    v20 = v19;
    v20.m128d_f64[0] = v20.m128d_f64[0] + v20.m128d_f64[0];
    *(_QWORD *)&_XMM1.m128d_f64[1] = _XMM3.m128i_i64[1];
    _XMM1.m128d_f64[0] = v20.m128d_f64[0] * v20.m128d_f64[0];
    v20.m128d_f64[0] = v20.m128d_f64[0] * (v20.m128d_f64[0] * v20.m128d_f64[0]);
    v21 = _mm_add_pd(
            _mm_mul_pd((__m128d)_mm_shuffle_epi32((__m128i)_XMM1, 68), (__m128d)xmmword_140288E00),
            (__m128d)xmmword_140288E10);
    _XMM1.m128d_f64[0] = _XMM1.m128d_f64[0] * _XMM1.m128d_f64[0] * v20.m128d_f64[0];
    v22 = (__m128i)_mm_mul_pd(_mm_unpacklo_pd(v20, _XMM1), v21);
    _XMM1.m128d_f64[0] = *(double *)_mm_shuffle_epi32(v22, 238).m128i_i64;
    *(double *)_XMM3.m128i_i64 = *(double *)_XMM3.m128i_i64
                               + *(double *)v22.m128i_i64
                               + _XMM1.m128d_f64[0]
                               - v19.m128d_f64[0] * *(double *)_XMM3.m128i_i64;
LABEL_7:
    *(double *)&X = *(double *)&X * *(double *)_XMM3.m128i_i64;
    if ( *(double *)&X > 88.72283935546875 )
    {
      *(double *)&X = powf_special(
                        *(double *)&X,
                        *(float *)_XMM1.m128d_f64,
                        COERCE_DOUBLE(_mm_cvtsi32_si128(0x7F800000u).m128i_u64[0] | _XMM5),
                        9u);
    }
    else if ( *(double *)&X <= -103.2789306640625 )
    {
      *(double *)&X = powf_special(*(double *)&X, *(float *)_XMM1.m128d_f64, *(double *)&_XMM5, 7u);
    }
    else
    {
      v15 = _mm_cvtpd_epi32(_mm_mul_pd(*(__m128d *)&X, (__m128d)xmmword_140288E30));
      v16 = *(double *)&X - _mm_cvtepi32_pd(v15).m128d_f64[0] * 0.01083042469624915;
      v17 = _mm_cvtsi128_si32(v15) & 0x3F;
      *(double *)v18.m128i_i64 = (v16 * v16 * (0.1666666666666667 * v16 + 0.5) + v16) * dbl_14028C3F0[v17]
                               + dbl_14028C3F0[v17];
      *(float *)v18.m128i_i32 = *(double *)_mm_add_epi64(_mm_slli_epi64(_mm_srai_epi32(v15, 6u), 0x34u), v18).m128i_i64;
      LODWORD(X) = v18.m128i_i32[0] | _XMM5;
    }
    return X;
  }
  v23 = _mm_cvtsi128_si32(v4);
  v24 = 0;
  v25 = v23 < 0;
  v26 = v23 <= 0;
  if ( v23 < 0 )
    v23 = 2139095040;
  if ( v25 )
    v24 = 2139095040;
  if ( !v26 )
    v23 = 0;
  if ( (v7 & 0x7F800000) <= 0x4B000000 )
  {
    v165 = _mm_getcsr();
    _mm_setcsr(v165 | 0x1F80);
    _mm_setcsr(v165);
    if ( (float)(int)*(float *)v4.m128i_i32 == *(float *)v4.m128i_i32 )
    {
      if ( (int)*(float *)v4.m128i_i32 & 1 )
        v27 = v6 & 0x80000000;
      else
        v27 = 0;
    }
    else
    {
      v27 = 0;
    }
  }
  else
  {
    v27 = 0;
  }
  *(_QWORD *)&X = _mm_cvtsi32_si128(v23 | v27).m128i_u64[0];
  if ( v24 )
    *(double *)&X = powf_special(*(double *)&X, *(float *)v4.m128i_i32, *(double *)&X, 2u);
  return X;
}

