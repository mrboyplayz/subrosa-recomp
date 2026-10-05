/* Address: 0x14025ca30 | Name: sub_14025CA30 | Size: 119 bytes */
// local variable allocation has failed, the output may be wrong!
double __fastcall MEMORY[0x14025CA30](double _XMM0_8)
{
  double result; // xmm0_8

  __asm
  {
    vmovapd xmm1, xmm0
    vmovapd xmm4, cs:xmmword_14028C340
    vmovapd xmm2, cs:xmmword_14028C360
    vfmadd132sd xmm1, xmm2, cs:qword_14028C320
    vsubsd  xmm1, xmm1, xmm2
    vcvttpd2dq xmm5, xmm1
    vmovq   rax, xmm5
    vmovapd xmm2, xmm1
    vfnmadd132sd xmm2, xmm0, cs:qword_14028C330
    vmulsd  xmm3, xmm1, xmm4
    vmovapd xmm0, xmm1
    vfmsub213sd xmm0, xmm4, xmm3
    vsubsd  xmm5, xmm2, xmm3
    vsubsd  xmm4, xmm2, xmm5
    vsubsd  xmm4, xmm4, xmm3
    vfnmadd231sd xmm2, xmm1, qword ptr cs:xmmword_14028C340
    vsubsd  xmm5, xmm5, xmm2
    vaddsd  xmm5, xmm5, xmm4
    vsubsd  xmm5, xmm5, xmm0
    vmovapd xmm0, xmm2
    vfnmadd132sd xmm1, xmm5, cs:qword_14028C350
  }
  *(_QWORD *)&result = _XMM0;
  return result;
}

