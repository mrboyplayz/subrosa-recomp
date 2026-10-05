/* Address: 0x1402437e0 | Name: tan | Size: 1459 bytes */
// local variable allocation has failed, the output may be wrong!
double __cdecl tan(double X)
{
  __int64 v1; // rcx
  double v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // r8d
  double v7; // xmm6_8
  int v8; // r8d
  double v9; // xmm3_8
  double v10; // xmm2_8
  double v11; // xmm6_8
  unsigned __int64 v12; // rdx
  double v13; // xmm1_8
  double v14; // xmm1_8
  char v15; // r8
  int v16; // r10d
  __int64 v18; // rdx
  char v41; // cf
  char v42; // zf
  char v43; // al

  if ( !dword_140404A6C[19065824] )
  {
    v4 = X;
    v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
    {
      if ( v5 < 0x7FF0000000000000LL )
      {
        v6 = 0;
        v7 = fabs(X);
        if ( v7 >= 500000.0 )
        {
          X = v7;
          v15 = sub_14025C4F0(v5, *(_QWORD *)&v4, 0);
        }
        else
        {
          if ( v5 > 0x400F6A7A2955385ELL )
          {
            if ( v5 > 0x401C463ABECCB2BBLL )
            {
              v8 = (int)(v7 * 0.6366197723675814 + 0.5);
            }
            else
            {
              LOBYTE(v6) = v5 > 0x4015FDBBE9BBA775LL;
              v8 = v6 + 3;
            }
          }
          else
          {
            LOBYTE(v6) = v5 > 0x4002D97C7F3321D2LL;
            v8 = v6 + 1;
          }
          v9 = (double)v8;
          v10 = (double)v8 * 6.077100506506192e-11;
          v11 = v7 - (double)v8 * 1.570796326734126;
          v12 = (v5 >> 52) - ((*(_QWORD *)&v11 >> 52) & 0x7FFLL);
          if ( v12 > 0xF )
          {
            v13 = v11;
            v11 = v11 - v9 * 6.077100506303966e-11;
            v10 = v9 * 2.022266248795951e-21 - (v13 - v11 - v9 * 6.077100506303966e-11);
            if ( v12 > 0x30 )
            {
              v14 = v11;
              v11 = v11 - v9 * 2.022266248711166e-21;
              v10 = v9 * 8.4784276603689e-32 - (v14 - v11 - v9 * 2.022266248711166e-21);
            }
          }
          v15 = v8 & 3;
          X = v11 - v10;
        }
        sub_140243DA0(v5, v12, v15 & 1);
        if ( v16 )
          return -X;
      }
      else
      {
        return tan_special(v5, *(_QWORD *)&X);
      }
    }
    else if ( v5 >= 0x3F20000000000000LL )
    {
      return sub_140243DA0(v5, *(_QWORD *)&X, 0);
    }
    else if ( v5 >= 0x3E40000000000000LL )
    {
      return X * X * X * 0.3333333333333333 + X;
    }
    return X;
  }
  __asm { vmovq   r9, xmm0 }
  v18 = _R9;
  _R9 = _R9 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)_R9 < 0x3FE921FB54442D18LL )
  {
    __asm
    {
      vmovsd  xmm5, cs:qword_140289830
      vmovsd  xmm6, cs:qword_140289840
      vxorpd  xmm1, xmm1, xmm1
      vxorpd  xmm7, xmm7, xmm7
    }
    if ( (unsigned __int64)_R9 > 0x3FE5C28F5C28F5C3LL )
    {
      if ( X < 0.0 )
      {
        __asm
        {
          vmovsd  xmm7, cs:qword_1402898C0
          vaddsd  xmm0, xmm5, xmm0
          vaddsd  xmm0, xmm0, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovsd  xmm7, cs:qword_1402898B8
          vsubsd  xmm0, xmm5, xmm0
          vaddsd  xmm0, xmm0, xmm6
        }
      }
    }
    else if ( _R9 < 0x3E40000000000000LL )
    {
      if ( X != 0.0 )
      {
        __asm
        {
          vmulsd  xmm1, xmm0, cs:qword_1402898D0
          vaddsd  xmm1, xmm0, cs:qword_1402898B8
        }
      }
      goto Ltan_fma3_ext_piby4_zero;
    }
    __asm
    {
      vmovsd  xmm4, cs:qword_140289810
      vmovsd  xmm3, cs:qword_1402897D0
      vmulsd  xmm2, xmm0, xmm0
      vfmadd213sd xmm4, xmm2, cs:qword_140289800
      vfmadd213sd xmm3, xmm2, cs:qword_1402897C0
      vfmadd213sd xmm4, xmm2, cs:qword_1402897F0
      vfmadd213sd xmm3, xmm2, cs:qword_1402897B0
      vfmadd213sd xmm4, xmm2, cs:qword_1402897E0
      vdivsd  xmm3, xmm3, xmm4
      vmulsd  xmm3, xmm3, xmm2
      vfmadd132sd xmm0, xmm0, xmm3
    }
    if ( *(double *)&_XMM7 != 0.0 )
    {
      __asm
      {
        vmovsd  xmm3, cs:qword_1402898B8
        vaddsd  xmm4, xmm0, cs:qword_1402898B8
        vdivsd  xmm6, xmm0, xmm4
        vfnmadd231sd xmm3, xmm6, cs:qword_1402898C8
        vmulsd  xmm0, xmm3, xmm7
      }
    }
Ltan_fma3_ext_piby4_zero:
    __asm
    {
      vmovdqa xmm7, [rsp+88h+var_58]
      vmovdqa xmm6, [rsp+88h+var_68]
    }
    return X;
  }
  if ( (unsigned __int64)_R9 >= 0x7FF0000000000000LL )
  {
    tan_special(v1, v18);
    __asm
    {
      vmovdqa xmm7, [rsp+88h+var_58]
      vmovdqa xmm6, [rsp+88h+var_68]
    }
  }
  else
  {
    __asm
    {
      vmovapd [rsp+88h+var_48], xmm0
      vmovq   xmm0, r9
    }
    if ( _R9 >= 0x417312D000000000LL )
      v43 = sub_14025C840(v1, v18);
    else
      *(double *)&_XMM0 = MEMORY[0x14025CA30](v1, v18);
    __asm
    {
      vmovsd  xmm5, cs:qword_140289830
      vmovsd  xmm6, cs:qword_140289840
      vxorpd  xmm7, xmm7, xmm7
      vcomisd xmm0, cs:qword_1402898A0
    }
    if ( v41 | v42 )
    {
      __asm { vcomisd xmm0, cs:qword_1402898A8 }
      if ( v41 )
      {
        __asm
        {
          vmovsd  xmm7, cs:qword_1402898C0
          vaddsd  xmm0, xmm5, xmm0
          vaddsd  xmm2, xmm6, xmm1
          vaddsd  xmm0, xmm0, xmm2
          vxorps  xmm1, xmm1, xmm1
        }
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm7, cs:qword_1402898B8
        vsubsd  xmm0, xmm5, xmm0
        vsubsd  xmm2, xmm6, xmm1
        vaddsd  xmm0, xmm0, xmm2
        vxorps  xmm1, xmm1, xmm1
      }
    }
    __asm
    {
      vmulsd  xmm2, xmm0, xmm0
      vmulsd  xmm5, xmm1, xmm0
      vfmadd132sd xmm5, xmm2, cs:qword_1402898C8
      vmovsd  xmm2, cs:qword_1402897D0
      vfmadd213sd xmm2, xmm5, cs:qword_1402897C0
      vfmadd213sd xmm2, xmm5, cs:qword_1402897B0
      vmovsd  xmm4, cs:qword_140289810
      vfmadd213sd xmm4, xmm5, cs:qword_140289800
      vfmadd213sd xmm4, xmm5, cs:qword_1402897F0
      vfmadd213sd xmm4, xmm5, cs:qword_1402897E0
      vdivsd  xmm2, xmm2, xmm4
      vmulsd  xmm2, xmm2, xmm5
      vfmadd213sd xmm2, xmm0, xmm1
      vaddsd  xmm1, xmm0, xmm2
      vxorpd  xmm6, xmm6, xmm6
      vcomisd xmm7, xmm6
    }
    if ( v42 )
    {
      if ( (v43 & 1) != 0 )
      {
        __asm
        {
          vandpd  xmm7, xmm1, cs:xmmword_140289820
          vsubsd  xmm4, xmm7, xmm0
          vsubsd  xmm4, xmm2, xmm4
          vmovsd  xmm2, cs:qword_1402898C0
          vdivsd  xmm2, xmm2, xmm1
          vandpd  xmm5, xmm2, cs:xmmword_140289820
          vfmadd213sd xmm7, xmm5, cs:qword_1402898B8
          vfmadd231sd xmm7, xmm4, xmm5
          vfmadd213sd xmm7, xmm2, xmm5
          vmovapd xmm1, xmm7
        }
      }
    }
    else
    {
      __asm
      {
        vaddsd  xmm6, xmm1, xmm1
        vmovsd  xmm4, cs:qword_1402898B8
        vaddsd  xmm2, xmm1, xmm4
        vsubsd  xmm5, xmm1, xmm4
      }
      if ( (v43 & 1) != 0 )
      {
        __asm
        {
          vsubsd  xmm2, xmm1, xmm4
          vdivsd  xmm2, xmm1, xmm2
          vfmsub132sd xmm2, xmm4, cs:qword_1402898C8
          vmulsd  xmm1, xmm2, xmm7
        }
      }
      else
      {
        __asm
        {
          vaddsd  xmm2, xmm1, xmm4
          vdivsd  xmm2, xmm1, xmm2
          vfnmadd132sd xmm2, xmm4, cs:qword_1402898C8
          vmulsd  xmm1, xmm2, xmm7
        }
      }
    }
    __asm
    {
      vmovapd xmm0, xmm1
      vmovapd xmm1, [rsp+88h+var_48]
      vandpd  xmm1, xmm1, cs:xmmword_140289760
      vxorpd  xmm0, xmm0, xmm1
      vmovdqa xmm7, [rsp+88h+var_58]
      vmovdqa xmm6, [rsp+88h+var_68]
    }
  }
  return X;
}

