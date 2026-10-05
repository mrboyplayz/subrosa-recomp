/* Address: 0x140240c80 | Name: pow | Size: 5777 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl pow(double X, double Y)
{
  __int64 v2; // rcx
  __m128i v3; // xmm5
  double v6; // r8
  double v7; // xmm6_8
  __m128i v8; // xmm2
  double v9; // xmm2_8
  double v10; // xmm1_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm7_8
  double v14; // xmm2_8
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm3_8
  double v18; // xmm7_8
  double v19; // xmm0_8
  double v20; // xmm7_8
  double v21; // xmm6_8
  double v22; // xmm3_8
  double v23; // xmm0_8
  double v24; // xmm6_8
  __m128d v25; // xmm7
  __m128i v26; // xmm4
  double v27; // xmm1_8
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  double v31; // xmm2_8
  unsigned int v32; // r9d
  double v33; // xmm0_8
  double v34; // xmm1_8
  __int64 v35; // rcx
  unsigned int v36; // r11d
  char v37; // cl
  __int64 v38; // r11
  __m128i v39; // xmm2
  __int64 v40; // r11
  signed __int64 v41; // r10
  double v42; // xmm0_8
  double v43; // xmm1_8
  double v44; // xmm3_8
  double v45; // xmm5_8
  double v46; // xmm7_8
  double v47; // xmm2_8
  double v48; // xmm1_8
  double v49; // xmm3_8
  double v50; // xmm2_8
  double v51; // xmm5_8
  double v52; // xmm7_8
  double v53; // xmm4_8
  double v54; // rax
  double v55; // rax
  double v57; // rax
  double v58; // rax
  __int64 v59; // r11
  double v60; // rax
  double v61; // rax
  __int64 v62; // r9
  double v63; // rax
  bool v64; // zf
  __int64 v132; // rcx
  unsigned int v137; // r9d
  __int64 v153; // rcx
  char v155; // cl
  __int64 v165; // r11
  signed __int64 v166; // r10
  double v167; // rax
  double v169; // rax
  double v170; // rax
  double v171; // rax
  double v181; // rax
  double v183; // rax
  __int64 v184; // r9
  double v187; // rax
  __int64 v192; // r9
  bool v193; // zf
  double v199; // [rsp+20h] [rbp-B8h]
  double v200; // [rsp+30h] [rbp-A8h]
  double v201; // [rsp+40h] [rbp-98h]
  signed __int64 v202; // [rsp+40h] [rbp-98h]
  double v203; // [rsp+50h] [rbp-88h]
  unsigned __int64 v204; // [rsp+50h] [rbp-88h]
  __int64 v205; // [rsp+60h] [rbp-78h]
  unsigned __int64 v206; // [rsp+70h] [rbp-68h]
  unsigned __int64 v207; // [rsp+80h] [rbp-58h]

  if ( dword_140404A6C[19065824] )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_B8], xmm0
      vmovsd  [rsp+0D8h+var_A8], xmm1
    }
    _RDX = v199;
    _R8 = v200;
    if ( (*(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    {
      v169 = 0.0;
      _R11 = *(_QWORD *)&v199 | 0x8000000000000LL;
      if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v169 = v199;
      if ( (*(_QWORD *)&v169 & 0xFFFFFFFFFFFFFLL) == 0 || (*(_QWORD *)&v169 & 0x8000000000000LL) != 0 )
      {
        __asm { vmovsd  xmm0, qword ptr cs:xmmword_140287BA0 }
        goto LABEL_122;
      }
      goto LABEL_202;
    }
    if ( v200 == 1.0 )
    {
      v170 = 0.0;
      _R11 = *(_QWORD *)&v199 | 0x8000000000000LL;
      if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v170 = v199;
      if ( (*(_QWORD *)&v170 & 0xFFFFFFFFFFFFFLL) == 0 )
      {
        __asm { vmovq   xmm0, rdx }
        goto LABEL_122;
      }
      goto LABEL_202;
    }
    v204 = 0;
    if ( (*(_QWORD *)&v199 & 0x8000000000000000uLL) != 0x8000000000000000uLL )
    {
      if ( v199 == 1.0 )
      {
        v167 = 0.0;
        _R11 = *(_QWORD *)&v200 | 0x8000000000000LL;
        if ( (*(_QWORD *)&v200 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
          v167 = v200;
        if ( (*(_QWORD *)&v167 & 0xFFFFFFFFFFFFFLL) == 0 || (*(_QWORD *)&v167 & 0x8000000000000LL) != 0 )
          goto LABEL_122;
        goto LABEL_206;
      }
      if ( v199 == 0.0 )
        goto LABEL_168;
      if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
      {
        if ( (*(_QWORD *)&v200 & 0x7FF0000000000000uLL) <= 0x43E0000000000000LL )
        {
          v64 = (*(_QWORD *)&v200 & 0x7FF0000000000000LL) == 0x3C00000000000000LL;
          if ( (*(_QWORD *)&v200 & 0x7FF0000000000000uLL) >= 0x3C00000000000000LL )
          {
LABEL_114:
            __asm
            {
              vpsrlq  xmm3, xmm0, 34h ; '4'
              vmovq   r8, xmm0
              vpsubq  xmm3, xmm3, cs:xmmword_140287B50
              vcvtdq2pd xmm6, xmm3
              vpand   xmm2, xmm0, cs:xmmword_140287B40
              vcomisd xmm6, cs:qword_140287C30
            }
            if ( v64 )
            {
              __asm
              {
                vpor    xmm2, xmm2, cs:xmmword_140287BA0
                vsubsd  xmm2, xmm2, qword ptr cs:xmmword_140287BA0
                vmovapd xmm5, xmm2
                vpand   xmm2, xmm2, cs:xmmword_140287B40
                vmovq   r8, xmm2
                vpsrlq  xmm5, xmm5, 34h ; '4'
                vpsubd  xmm5, xmm5, cs:xmmword_140287C40
                vcvtdq2pd xmm6, xmm5
              }
            }
            _R8 = 2 * (_R8 & 0x80000000000LL) + (_R8 & 0xFF00000000000LL);
            __asm { vmovq   xmm1, r8 }
            *(_QWORD *)&_R8 = _R8 >> 44;
            __asm
            {
              vpor    xmm2, xmm2, cs:xmmword_140287BB0
              vpor    xmm1, xmm1, cs:xmmword_140287BB0
            }
            __asm
            {
              vsubsd  xmm4, xmm1, xmm2
              vmulsd  xmm1, xmm4, qword ptr [r9+r8*8]
              vmovapd xmm5, xmm1
              vmulsd  xmm4, xmm4, qword ptr [rdx+r8*8]
              vmovapd xmm7, xmm4
              vaddsd  xmm1, xmm1, xmm4
              vmovapd xmm2, xmm1
              vmovapd xmm0, xmm1
            }
            _R9 = dbl_14028C600;
            __asm
            {
              vsubsd  xmm3, xmm5, xmm2
              vmovsd  xmm1, cs:qword_140287C20
              vmulsd  xmm0, xmm0, xmm0
              vaddsd  xmm3, xmm3, xmm7
              vfmadd213sd xmm1, xmm2, cs:qword_140287C10
              vfmadd213sd xmm1, xmm2, cs:qword_140287C00
              vfmadd213sd xmm1, xmm2, cs:qword_140287BF0
              vfmadd213sd xmm1, xmm2, cs:qword_140287BE0
              vfmadd213sd xmm1, xmm2, cs:qword_140287BD0
              vfmadd213sd xmm1, xmm0, xmm3
              vmovsd  xmm5, cs:qword_140287B80
            }
            __asm
            {
              vfmsub213sd xmm5, xmm6, xmm1
              vmovsd  xmm0, qword ptr [r9+r8*8]
              vaddsd  xmm3, xmm5, qword ptr [rdx+r8*8]
              vmovapd xmm1, xmm3
              vsubsd  xmm3, xmm3, xmm2
              vfmadd231sd xmm0, xmm6, cs:qword_140287B70
              vmovapd xmm7, xmm0
              vaddsd  xmm0, xmm0, xmm3
              vmovapd xmm5, xmm0
              vandpd  xmm0, xmm0, cs:xmmword_140287AD0
            }
            __asm
            {
              vaddsd  xmm2, xmm2, xmm3
              vsubsd  xmm7, xmm7, xmm5
              vsubsd  xmm1, xmm1, xmm2
              vaddsd  xmm7, xmm7, xmm3
              vsubsd  xmm5, xmm5, xmm0
            }
            v206 = *(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL;
            __asm
            {
              vmovsd  xmm4, [rsp+0D8h+var_A8]
              vaddsd  xmm7, xmm7, xmm1
              vaddsd  xmm7, xmm7, xmm5
              vmovsd  xmm2, [rsp+0D8h+var_68]
              vsubsd  xmm4, xmm4, xmm2
              vmulsd  xmm3, xmm4, xmm7
              vmulsd  xmm4, xmm4, xmm0
              vmulsd  xmm5, xmm7, xmm2
              vmulsd  xmm6, xmm0, xmm2
              vmovapd xmm1, xmm6
              vaddsd  xmm3, xmm3, xmm4
              vaddsd  xmm3, xmm3, xmm5
              vaddsd  xmm1, xmm1, xmm3
              vmovapd xmm0, xmm1
              vsubsd  xmm6, xmm6, xmm1
              vaddsd  xmm6, xmm6, xmm3
              vmovsd  [rsp+0D8h+var_98], xmm0
              vmulsd  xmm7, xmm0, cs:qword_140288D00
            }
            _RDX = *(double *)&v202;
            __asm { vcomisd xmm7, cs:qword_140288CE0 }
            if ( (*(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL) == 0 )
            {
              __asm { vcomisd xmm7, cs:qword_140288CF0 }
              __asm { vcvtpd2dq xmm4, xmm7 }
              __asm
              {
                vcvtdq2pd xmm1, xmm4
                vfnmadd231sd xmm0, xmm1, cs:qword_140288D10
                vmovd   ecx, xmm4
              }
              __asm
              {
                vmulsd  xmm1, xmm1, cs:qword_140288D20
                vmovapd xmm2, xmm0
              }
              v132 = (unsigned int)((_ECX - (_ECX & 0x3F)) >> 6);
              __asm
              {
                vaddsd  xmm2, xmm2, xmm1
                vaddsd  xmm2, xmm2, xmm6
                vmovapd xmm1, xmm2
                vmovsd  xmm0, cs:qword_140288D30
              }
              v137 = 0;
              __asm { vfmadd213sd xmm0, xmm2, cs:qword_140288D40 }
              __asm { vfmadd213sd xmm0, xmm2, cs:qword_140288D50 }
              if ( (int)v132 <= -1022 )
                v137 = v132;
              __asm { vfmadd213sd xmm0, xmm2, cs:qword_140288D60 }
              __asm { vfmadd213sd xmm0, xmm2, cs:qword_140288D70 }
              v2 = (v132 + 1023) << 52;
              __asm
              {
                vfmadd213sd xmm0, xmm2, qword ptr cs:xmmword_140287BA0
                vmulsd  xmm0, xmm0, xmm2
                vmulsd  xmm5, xmm0, qword ptr [r11+rax*8]
                vmulsd  xmm1, xmm0, qword ptr [r10+rax*8]
              }
              __asm
              {
                vaddsd  xmm5, xmm5, qword ptr [r11+rax*8]
                vaddsd  xmm1, xmm1, xmm5
                vaddsd  xmm1, xmm1, qword ptr [r10+rax*8]
                vmovapd xmm0, xmm1
              }
              if ( *(double *)&v2 != INFINITY )
              {
                if ( v137 )
                {
                  v153 = v137;
                  __asm { vcomisd xmm0, qword ptr cs:xmmword_140287BA0 }
                  if ( v137 == -1022 )
                  {
                    __asm
                    {
                      vmulsd  xmm0, xmm0, [rsp+0D8h+var_98]
                      vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
                    }
                  }
                  else
                  {
                    if ( v202 > (__int64)0xC0874046DFEFD9D0uLL )
                    {
                      __asm
                      {
                        vmovsd  xmm0, cs:qword_140288CC0
                        vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
                      }
                    }
                    else
                    {
                      v155 = v137 + 50;
                      if ( (int)(v137 + 1074) < 0 )
                        v155 = 0;
                      v153 = 1LL << v155;
                      __asm
                      {
                        vmulsd  xmm0, xmm0, [rsp+0D8h+var_98]
                        vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
                      }
                    }
                    __asm
                    {
                      vmovapd xmm2, xmm0
                      vmovsd  xmm0, [rsp+0D8h+var_B8]
                      vmovsd  xmm1, [rsp+0D8h+var_A8]
                    }
                    pow_special(v153, v202, 0, 8);
                  }
                }
                else
                {
                  __asm
                  {
                    vmulsd  xmm0, xmm0, [rsp+0D8h+var_98]
                    vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
                  }
                }
                goto LABEL_122;
              }
              __asm { vcomisd xmm0, qword ptr cs:xmmword_140287BA0 }
            }
            _R11 = v204 | 0x7FF0000000000000LL;
LABEL_198:
            v184 = 7;
            if ( (_R11 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
              v184 = 9;
            __asm
            {
              vmovsd  xmm0, [rsp+0D8h+var_B8]
              vmovsd  xmm1, [rsp+0D8h+var_A8]
              vmovq   xmm2, r11
            }
            pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&_R8, v184);
            goto LABEL_122;
          }
          __asm { vaddsd  xmm0, xmm1, cs:qword_140287A38 }
LABEL_122:
          __asm
          {
            vmovdqa xmm7, [rsp+0D8h+var_38]
            vmovdqa xmm6, [rsp+0D8h+var_48]
          }
          return X;
        }
LABEL_163:
        if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
        {
          if ( (*(_QWORD *)&v199 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          {
            if ( v199 != -1.0 )
            {
              if ( (*(_QWORD *)&v199 & 0x7FFFFFFFFFFFFFFFuLL) < 0x3FF0000000000000LL )
              {
                _R11 = 0;
                if ( v200 < 0.0 )
                  _R11 = 0x7FF0000000000000LL;
              }
              else
              {
                _R11 = 0;
                if ( v200 >= 0.0 )
                  _R11 = 0x7FF0000000000000LL;
              }
              v183 = 0.0;
              if ( (*(_QWORD *)&v200 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
                v183 = v200;
              if ( (*(_QWORD *)&v183 & 0xFFFFFFFFFFFFFLL) == 0 )
              {
                if ( v183 == 0.0 )
                  goto LABEL_198;
                __asm { vmovq   xmm0, r11 }
                goto LABEL_122;
              }
              _R11 = *(_QWORD *)&v200 | 0x8000000000000LL;
LABEL_206:
              __asm
              {
                vmovsd  xmm0, [rsp+0D8h+var_B8]
                vmovsd  xmm1, [rsp+0D8h+var_A8]
                vmovq   xmm2, r11
              }
              pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&v200, 4);
              goto LABEL_122;
            }
LABEL_156:
            *(_QWORD *)&_RDX = v204 | 0x3FF0000000000000LL;
            v171 = 0.0;
            _R11 = *(_QWORD *)&v200 | 0x8000000000000LL;
            if ( (*(_QWORD *)&v200 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
              v171 = v200;
            if ( (*(_QWORD *)&v171 & 0xFFFFFFFFFFFFFLL) == 0 )
            {
              __asm { vmovq   xmm0, rdx }
              goto LABEL_122;
            }
            goto LABEL_206;
          }
LABEL_168:
          _RAX = 0;
          if ( (*(_QWORD *)&v200 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
          {
            if ( v200 >= 0.0 )
            {
              __asm
              {
                vmovq   xmm0, rax
                vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
              }
            }
            else
            {
              _RAX = 0x7FF0000000000000LL;
              __asm
              {
                vmovsd  xmm0, [rsp+0D8h+var_B8]
                vmovsd  xmm1, [rsp+0D8h+var_A8]
                vmovq   xmm2, rax
                vorpd   xmm2, xmm2, [rsp+0D8h+var_88]
              }
              pow_special(v2, *(_QWORD *)&v199, *(_QWORD *)&v200, 2);
            }
            goto LABEL_122;
          }
          if ( v200 == -INFINITY )
          {
            __asm { vmovsd  xmm0, cs:qword_140287A30 }
            goto LABEL_122;
          }
          if ( v200 == INFINITY )
          {
            __asm { vxorpd  xmm0, xmm0, xmm0 }
            goto LABEL_122;
          }
          _R11 = *(_QWORD *)&v200 | 0x8000000000000LL;
          if ( (*(_QWORD *)&v200 & 0xFFFFFFFFFFFFFLL) == 0 )
          {
            __asm { vmovq   xmm0, rax }
            goto LABEL_122;
          }
          goto LABEL_206;
        }
      }
LABEL_178:
      _R11 = 0;
      if ( v200 >= 0.0 )
        _R11 = 0x7FF0000000000000LL;
      if ( (*(_QWORD *)&v199 & 0xFFFFFFFFFFFFFLL) == 0 )
      {
        v181 = 0.0;
        if ( (*(_QWORD *)&v200 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
          v181 = v200;
        if ( (*(_QWORD *)&v181 & 0xFFFFFFFFFFFFFLL) == 0 )
        {
          __asm
          {
            vmovq   xmm0, r11
            vorpd   xmm0, xmm0, [rsp+0D8h+var_88]
          }
          goto LABEL_122;
        }
        _R11 = *(_QWORD *)&v200 | 0x8000000000000LL;
        goto LABEL_206;
      }
      _R11 = *(_QWORD *)&v199 | 0x8000000000000LL;
LABEL_202:
      v187 = 0.0;
      if ( (*(_QWORD *)&_R8 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v187 = _R8;
      if ( (*(_QWORD *)&v187 & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        v192 = *(_QWORD *)&_R8;
        v193 = _R11 == 0xFFF8000000000000uLL;
        if ( _R11 == 0xFFF8000000000000uLL )
          _R11 = *(_QWORD *)&_R8;
        if ( !v193 )
        {
          if ( _R8 == NAN )
            v192 = _R11;
          if ( v192 < 0 )
            v192 = _R11;
          if ( _R11 < 0 )
            _R11 = v192;
        }
        _R11 = _R11 | 0x8000000000000LL;
        __asm
        {
          vmovsd  xmm0, [rsp+0D8h+var_B8]
          vmovsd  xmm1, [rsp+0D8h+var_A8]
          vmovq   xmm2, r11
        }
        pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&_R8, 5);
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, [rsp+0D8h+var_B8]
          vmovsd  xmm1, [rsp+0D8h+var_A8]
          vmovq   xmm2, r11
        }
        pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&_R8, 3);
      }
      goto LABEL_122;
    }
    if ( (*(_QWORD *)&v200 & 0x7FF0000000000000uLL) > 0x43E0000000000000LL )
      goto LABEL_163;
    v165 = *(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFLL;
    v2 = 52;
    v166 = ((*(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
    if ( v166 >= 0 )
    {
      v205 = *(_QWORD *)&v199 & 0x7FFFFFFFFFFFFFFFLL;
      v2 = ((*(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
      if ( v166 > 53 )
      {
LABEL_138:
        if ( *(_QWORD *)&v199 == 0x8000000000000000uLL )
          goto LABEL_168;
        if ( v199 == -1.0 )
          goto LABEL_156;
        v64 = (*(_QWORD *)&v199 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL;
        if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
        {
          __asm { vmovsd  xmm0, [rsp+0D8h+var_78] }
          goto LABEL_114;
        }
        goto LABEL_178;
      }
      if ( (v165 & (0xFFFFFFFFFFFFFuLL >> ((unsigned __int8)((*(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) == 0 )
      {
        if ( (v165 & (0x10000000000000uLL >> ((unsigned __int8)((*(_QWORD *)&v200 & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) != 0 )
          v204 = 0x8000000000000000uLL;
        goto LABEL_138;
      }
    }
    if ( (*(_QWORD *)&v199 & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
    {
      if ( *(_QWORD *)&v199 != 0x8000000000000000uLL )
      {
        __asm
        {
          vmovsd  xmm0, [rsp+0D8h+var_B8]
          vmovsd  xmm1, [rsp+0D8h+var_A8]
          vmovsd  xmm2, cs:qword_140287A60
        }
        pow_special(v2, *(_QWORD *)&v199, *(_QWORD *)&v200, 6);
        goto LABEL_122;
      }
      goto LABEL_168;
    }
    goto LABEL_178;
  }
  v199 = X;
  v200 = Y;
  _RDX = X;
  _R8 = Y;
  if ( (*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    v55 = 0.0;
    _R11 = *(_QWORD *)&X | 0x8000000000000LL;
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
      v55 = X;
    if ( (*(_QWORD *)&v55 & 0xFFFFFFFFFFFFFLL) == 0 || (*(_QWORD *)&v55 & 0x8000000000000LL) != 0 )
      return 1.0;
    goto LABEL_202;
  }
  if ( Y == 1.0 )
  {
    v57 = 0.0;
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
      v57 = X;
    if ( (*(_QWORD *)&v57 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
LABEL_99:
      v63 = 0.0;
      if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v63 = Y;
      if ( (*(_QWORD *)&v63 & 0xFFFFFFFFFFFFFLL) != 0 )
        return pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 5);
      else
        return pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 3);
    }
    return X;
  }
  v203 = 0.0;
  if ( (*(_QWORD *)&X & 0x8000000000000000uLL) == 0x8000000000000000uLL )
  {
    if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) > 0x43E0000000000000LL )
      goto LABEL_66;
    v40 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
    v2 = 52;
    v41 = ((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
    if ( v41 >= 0 )
    {
      v2 = ((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
      if ( v41 > 53 )
      {
LABEL_40:
        if ( *(_QWORD *)&X == 0x8000000000000000uLL )
          goto LABEL_71;
        if ( X == -1.0 )
          goto LABEL_59;
        if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
        {
          *(_OWORD *)&X = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_10;
        }
        goto LABEL_78;
      }
      if ( (v40 & (0xFFFFFFFFFFFFFuLL >> ((unsigned __int8)((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) == 0 )
      {
        if ( (v40 & (0x10000000000000uLL >> ((unsigned __int8)((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) != 0 )
          v203 = -0.0;
        goto LABEL_40;
      }
    }
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
    {
      if ( *(_QWORD *)&X != 0x8000000000000000uLL )
        return pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 6);
      goto LABEL_71;
    }
    goto LABEL_78;
  }
  if ( X != 1.0 )
  {
    if ( X == 0.0 )
      goto LABEL_71;
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
    {
      if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) <= 0x43E0000000000000LL )
      {
        if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) < 0x3C00000000000000LL )
          return Y + 1.0;
LABEL_10:
        v6 = X;
        v7 = _mm_cvtepi32_pd(_mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_140287B50)).m128d_f64[0];
        v8 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_140287B40);
        if ( v7 == -1023.0 )
        {
          v39 = _mm_or_si128(v8, (__m128i)xmmword_140287BA0);
          *(double *)v39.m128i_i64 = *(double *)v39.m128i_i64 - 1.0;
          v3.m128i_i64[0] = v39.m128i_i64[0];
          v8 = _mm_and_si128(v39, (__m128i)xmmword_140287B40);
          v6 = *(double *)v8.m128i_i64;
          v7 = _mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v3, 0x34u), (__m128i)xmmword_140287C40)).m128d_f64[0];
        }
        v207 = 2 * (*(_QWORD *)&v6 & 0x80000000000LL) + (*(_QWORD *)&v6 & 0xFF00000000000LL);
        *(_QWORD *)&_R8 = v207 >> 44;
        *(_QWORD *)&v9 = _mm_or_si128(v8, (__m128i)xmmword_140287BB0).m128i_u64[0];
        *(_QWORD *)&v10 = _mm_or_si128((__m128i)v207, (__m128i)xmmword_140287BB0).m128i_u64[0];
        if ( fabs(X - 1.0) < 0.125 )
        {
          v42 = v10;
          v43 = v10 - v9;
          v44 = dbl_140287C70[*(_QWORD *)&_R8] + dbl_140288480[*(_QWORD *)&_R8];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(v43 * v44) & 0xFFFFFFFFF8000000uLL;
          v46 = (v43 - v45 * v42) * v44;
          v47 = v46 + v45;
          v48 = (0.25 * v47 + 0.3333333333333333) * v47 * (v47 * v47);
          v49 = ((0.1428571428571429 * v47 + 0.1666666666666667) * v47 + 0.2) * v47 * (v47 * v47 * (v47 * v47));
          v50 = v45;
          v51 = v45 * v46 + v46 * v46 * 0.5 + v46;
          v52 = v50;
          v53 = v50 * v50 * 0.5;
          v14 = v50 + v53;
          v16 = 0.00000005769999047543285 * v7 + dbl_14028CE10[*(_QWORD *)&_R8] - (v48 + v49 + v52 - v14 + v53 + v51);
          v17 = v16 - v14;
          v15 = dbl_14028C600[*(_QWORD *)&_R8];
        }
        else
        {
          v11 = v10 - v9;
          v12 = v11 * dbl_140287C70[*(_QWORD *)&_R8];
          v13 = v11 * dbl_140288480[*(_QWORD *)&_R8];
          v14 = v12 + v13;
          v15 = dbl_14028C600[*(_QWORD *)&_R8];
          v16 = dbl_14028CE10[*(_QWORD *)&_R8]
              + 0.00000005769999047543285 * v7
              - ((0.3333333333333333 * v14 + 0.5) * (v14 * v14)
               + ((0.1666666666666667 * v14 + 0.2) * v14 + 0.25) * (v14 * v14 * (v14 * v14))
               + v13
               + v12
               - v14);
          v17 = v16 - v14;
        }
        v18 = v15 + 0.6931471228599548 * v7;
        *(_QWORD *)&v19 = COERCE_UNSIGNED_INT64(v18 + v17) & 0xFFFFFFFFF8000000uLL;
        v20 = v18 - (v18 + v17) + v17 + v16 - (v14 + v17) + v18 + v17 - v19;
        v21 = v19 * COERCE_DOUBLE(*(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL);
        v22 = (v200 - COERCE_DOUBLE(*(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL)) * v20
            + (v200 - COERCE_DOUBLE(*(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL)) * v19
            + v20 * COERCE_DOUBLE(*(_QWORD *)&v200 & 0xFFFFFFFFF8000000uLL);
        v23 = v21 + v22;
        v24 = v21 - v23 + v22;
        v25 = (__m128d)0x40571547652B82FEuLL;
        v25.m128d_f64[0] = 92.33248261689366 * v23;
        _RDX = v23;
        if ( 92.33248261689366 * v23 <= 65536.0 )
        {
          if ( v25.m128d_f64[0] < -68800.0 )
          {
            *(double *)&v38 = v203;
LABEL_95:
            v62 = 7;
            if ( (v38 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
              v62 = 9;
            return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&_R8, v62);
          }
          v26 = _mm_cvtpd_epi32(v25);
          v27 = _mm_cvtepi32_pd(v26).m128d_f64[0];
          v28 = _mm_cvtsi128_si32(v26);
          v29 = v28 & 0x3F;
          v30 = (unsigned int)((v28 - (int)v29) >> 6);
          v32 = 0;
          if ( (int)v30 <= -1022 )
            v32 = v30;
          v2 = (v30 + 1023) << 52;
          v31 = v23 - 0.01083042426034808 * v27 + v27 * -4.359010638708991e-10 + v24;
          v33 = (0.5 * v31 + 1.0) * v31
              + (0.04166666666666666 * v31 + 0.1666666666666667) * (v31 * v31 * v31)
              + (0.001388888888888889 * v31 + 0.008333333333333333) * (v31 * v31 * (v31 * v31 * v31));
          v34 = dbl_14028D620[v29] * v33 + dbl_14028D820[v29] * v33 + dbl_14028D820[v29] + dbl_14028D620[v29];
          if ( *(double *)&v2 != INFINITY )
          {
            v201 = *(double *)&v2;
            if ( v32 )
            {
              v35 = v32;
              v36 = 0;
              if ( v34 >= 1.0 )
                v36 = v32;
              if ( v36 == -1022 )
              {
                *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v201) | *(_QWORD *)&v203;
              }
              else
              {
                if ( *(__int64 *)&_RDX <= (__int64)0xC0874046DFEFD9D0uLL )
                {
                  v37 = v32 + 50;
                  if ( (int)(v32 + 1074) < 0 )
                    v37 = 0;
                  v35 = 1LL << v37;
                }
                return pow_special(v35, *(_QWORD *)&_RDX, 0, 8);
              }
            }
            else
            {
              *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * *(double *)&v2) | *(_QWORD *)&v203;
            }
            return X;
          }
          if ( v34 < 1.0 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v34 | 0x7FE0000000000000LL | *(_QWORD *)&v203;
            return X;
          }
        }
        v38 = *(_QWORD *)&v203 | 0x7FF0000000000000LL;
        goto LABEL_95;
      }
LABEL_66:
      if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
      {
        if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          if ( X != -1.0 )
          {
            if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x3FF0000000000000LL )
            {
              *(double *)&v38 = 0.0;
              if ( Y < 0.0 )
                *(double *)&v38 = INFINITY;
            }
            else
            {
              *(double *)&v38 = 0.0;
              if ( Y >= 0.0 )
                *(double *)&v38 = INFINITY;
            }
            v61 = 0.0;
            if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
              v61 = Y;
            if ( (*(_QWORD *)&v61 & 0xFFFFFFFFFFFFFLL) == 0 )
            {
              if ( v61 != 0.0 )
                return *(double *)&v38;
              goto LABEL_95;
            }
            return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&Y, 4);
          }
LABEL_59:
          *(_QWORD *)&_RDX = *(_QWORD *)&v203 | 0x3FF0000000000000LL;
          v58 = 0.0;
          if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
            v58 = Y;
          if ( (*(_QWORD *)&v58 & 0xFFFFFFFFFFFFFLL) == 0 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v203 | 0x3FF0000000000000LL;
            return X;
          }
          return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&Y, 4);
        }
LABEL_71:
        if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        {
          if ( Y != -INFINITY )
          {
            if ( (*(_QWORD *)&Y & 0xFFFFFFFFFFFFFLL) == 0 )
              return 0.0;
            return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&Y, 4);
          }
        }
        else if ( Y >= 0.0 )
        {
          return v203;
        }
        return pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 2);
      }
    }
LABEL_78:
    v59 = 0;
    if ( Y >= 0.0 )
      v59 = 0x7FF0000000000000LL;
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) == 0 )
    {
      v60 = 0.0;
      if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v60 = Y;
      if ( (*(_QWORD *)&v60 & 0xFFFFFFFFFFFFFLL) == 0 )
      {
        *(_QWORD *)&X = v59 | *(_QWORD *)&v203;
        return X;
      }
      return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&Y, 4);
    }
    goto LABEL_99;
  }
  v54 = 0.0;
  if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    v54 = Y;
  if ( (*(_QWORD *)&v54 & 0xFFFFFFFFFFFFFLL) != 0 && (*(_QWORD *)&v54 & 0x8000000000000LL) == 0 )
    return pow_special(v2, *(_QWORD *)&_RDX, *(_QWORD *)&Y, 4);
  return X;
}

