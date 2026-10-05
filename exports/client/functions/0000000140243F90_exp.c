/* Address: 0x140243f90 | Name: exp | Size: 1013 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl exp(double X)
{
  __int64 v1; // rcx
  __int64 v14; // rcx

  _XMM0 = _mm_move_epi64(*(__m128i *)&X);
  if ( (_XMM0.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFuLL) >= 0x7FF0000000000000LL )
  {
    if ( _XMM0.m128i_i64[0] != 0x7FF0000000000000LL )
    {
      if ( _XMM0.m128i_i64[0] == 0xFFF0000000000000uLL )
        _XMM0.m128i_i64[0] = 0;
      else
        _XMM0.m128i_i64[0] |= 0x8000000000000uLL;
    }
  }
  else
  {
    if ( !dword_140404A6C[19065824] )
    {
      if ( *(double *)_XMM0.m128i_i64 <= 709.782712893384 && *(double *)_XMM0.m128i_i64 > -745.1332191019411 )
      {
        _XMM0.m128i_i64[0] = unk_1402899C0;
        return *(double *)_XMM0.m128i_i64;
      }
LABEL_17:
      *(double *)_XMM0.m128i_i64 = exp_special(v1, _XMM0.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL);
      return *(double *)_XMM0.m128i_i64;
    }
    __asm
    {
      vcmplesd xmm2, xmm0, cs:qword_140289970
      vcmpnltsd xmm3, xmm0, cs:qword_140289978
      vandps  xmm2, xmm3, xmm2
      vucomisd xmm2, xmm2
    }
    if ( !__SETP__(dword_140404A6C[19065824], 0) )
    {
      __asm { vucomisd xmm0, cs:qword_140289970 }
      if ( dword_140404A6C[19065824] )
      {
        _RAX = 0x7FF0000000000000LL;
        __asm { vmovq   xmm1, rax }
      }
      else
      {
        __asm { vpxor   xmm1, xmm1, xmm1 }
      }
      goto LABEL_17;
    }
    __asm { vmovq   rdx, xmm0 }
    if ( (_RDX & 0x7FFFFFFFFFFFFFFFuLL) <= 0x3E50000000000000LL )
    {
      __asm
      {
        vaddsd  xmm1, xmm0, cs:qword_1402899D8
        vaddsd  xmm0, xmm0, cs:qword_1402899C8
      }
      return *(double *)_XMM0.m128i_i64;
    }
    __asm
    {
      vmulsd  xmm1, xmm0, cs:qword_140289988
      vroundsd xmm2, xmm1, xmm1, 3
      vcvttsd2si ecx, xmm1
      vfmadd231sd xmm0, xmm2, cs:qword_1402899B0
      vmulsd  xmm2, xmm2, cs:qword_1402899B8
      vaddsd  xmm2, xmm2, xmm0
    }
    v14 = (unsigned int)(_ECX >> 6);
    __asm
    {
      vmovapd xmm3, cs:xmmword_140289900
      vfmadd213sd xmm3, xmm2, cs:qword_140289910
      vfmadd213sd xmm3, xmm2, cs:qword_140289940
      vfmadd213sd xmm3, xmm2, qword ptr cs:xmmword_140289920
      vfmadd213sd xmm3, xmm2, cs:qword_140289930
      vmulsd  xmm0, xmm2, xmm2
      vfmadd213sd xmm0, xmm3, xmm2
    }
    __asm
    {
      vmulsd  xmm2, xmm0, qword ptr [rdx+rax*8]
      vaddsd  xmm1, xmm2, qword ptr [r11+rax*8]
      vaddsd  xmm0, xmm1, qword ptr [r10+rax*8]
    }
    if ( (int)v14 <= -1022 )
    {
      if ( (int)v14 < -1022 )
      {
        _RAX = 1LL << ((unsigned __int8)v14 + 50);
        __asm
        {
          vmovq   xmm2, rax
          vmulsd  xmm0, xmm0, xmm2
        }
        return *(double *)_XMM0.m128i_i64;
      }
      __asm { vucomisd xmm0, cs:qword_1402899C8 }
    }
    _RCX = v14 << 52;
    __asm
    {
      vmovq   xmm2, rcx
      vpaddq  xmm0, xmm0, xmm2
    }
  }
  return *(double *)_XMM0.m128i_i64;
}

