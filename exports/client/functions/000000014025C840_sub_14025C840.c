/* Address: 0x14025c840 | Name: sub_14025C840 | Size: 492 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_14025C840(double _XMM0_8)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int128 v13; // kr00_16
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  bool v16; // cf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // r11
  unsigned __int64 v32; // rcx

  _R9 = &unk_1402937C0;
  __asm { vmovq   r11, xmm0 }
  v3 = _R11;
  v4 = (_R11 >> 52) - 1023;
  _R10 = 134 - (v4 >> 3);
  v6 = *(_QWORD *)((char *)&unk_1402937C0 + _R10);
  v7 = v3 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  _R10 += 8;
  __asm { vmovdqu xmm0, xmmword ptr [r9+r10] }
  _RAX = (unsigned __int64)v7 * (unsigned __int128)v6;
  v10 = _RAX;
  __asm { vmovq   rax, xmm0 }
  v11 = v4 & 7;
  __asm { vpsrldq xmm0, xmm0, 8 }
  v13 = *((unsigned __int64 *)&_RAX + 1) + (unsigned __int64)v7 * (unsigned __int128)(unsigned __int64)_RAX;
  __asm { vmovq   rax, xmm0 }
  v14 = v7 * _RAX + *((_QWORD *)&v13 + 1);
  v15 = 0;
  v16 = __CFSHR__(v14, 54 - v11);
  v17 = v14 >> (54 - (unsigned __int8)v11);
  if ( v16 )
  {
    v14 = ~v14;
    v10 = ~v10;
    v15 = 0x8000000000000000uLL;
    *(_QWORD *)&v13 = ~(_QWORD)v13;
  }
  v18 = v14 << ((unsigned __int8)v11 + 10) >> ((unsigned __int8)v11 + 10);
  v19 = v11 - 54;
  if ( !_BitScanReverse64((unsigned __int64 *)&v21, v18) )
  {
    v18 = v13;
    v22 = v10;
    v10 = 0;
    _BitScanReverse64((unsigned __int64 *)&v21, v13);
    v19 -= 64LL;
    *(_QWORD *)&v13 = v22;
  }
  v23 = v21 + v19;
  v24 = v21 - 52;
  if ( v24 < 0 )
  {
    v26 = -v24;
    v27 = v18 << v26;
    v28 = (_QWORD)v13 << v26;
    LOBYTE(v26) = 64 - v26;
    v18 = ((unsigned __int64)v13 >> v26) | v27;
    *(_QWORD *)&v13 = (v10 >> v26) | v28;
  }
  else if ( v24 )
  {
    v25 = v18;
    v18 >>= v24;
    *(_QWORD *)&v13 = (v25 << (64 - (unsigned __int8)v24)) | ((unsigned __int64)v13 >> v24);
  }
  v29 = v23 + 1023;
  _R10 = (v29 << 52) | v15 | v18 & 0xFFEFFFFFFFFFFFFFuLL;
  __asm { vmovq   xmm2, r10 }
  _BitScanReverse64(&v32, v13);
  _R9 = ((v29 - (64 - v32 + 52)) << 52) | v15 | ((_QWORD)v13 << (64 - (unsigned __int8)v32) >> 12);
  __asm
  {
    vmovq   xmm1, r9
    vandpd  xmm4, xmm2, cs:xmmword_14028C220
    vsubsd  xmm0, xmm2, xmm4
    vmulsd  xmm5, xmm2, cs:qword_14028C210
    vmulsd  xmm3, xmm4, cs:qword_14028C230
    vsubsd  xmm3, xmm3, xmm5
    vfmadd231sd xmm3, xmm0, cs:qword_14028C230
    vfmadd231sd xmm3, xmm4, cs:qword_14028C240
    vfmadd231sd xmm3, xmm0, cs:qword_14028C240
    vmulsd  xmm4, xmm1, cs:qword_14028C210
    vfmadd231sd xmm4, xmm2, cs:qword_14028C250
    vaddsd  xmm3, xmm3, xmm4
    vaddsd  xmm0, xmm5, xmm3
    vsubsd  xmm1, xmm5, xmm0
    vaddsd  xmm1, xmm1, xmm3
  }
  return (v16 + (_BYTE)v17) & 3;
}

