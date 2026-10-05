/* Address: 0x14025cc50 | Name: sub_14025CC50 | Size: 332 bytes */
double __fastcall MEMORY[0x14025CC50](double a1)
{
  unsigned __int64 v1; // r11
  __int64 v2; // r10
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int128 v9; // kr10_16
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rcx

  v1 = (*(_QWORD *)&a1 >> 52) - 1023LL;
  v2 = 134 - (v1 >> 3);
  v3 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v4 = _mm_loadu_si128((const __m128i *)((char *)&unk_1402937C0 + v2 + 8));
  v5 = v3 * *(_QWORD *)((char *)&unk_1402937C0 + v2);
  v6 = v1 & 7;
  v9 = __PAIR128__(
         v3 * _mm_srli_si128(v4, 8).m128i_u64[0],
         ((unsigned __int64)v3 * (unsigned __int128)*(unsigned __int64 *)((char *)&unk_1402937C0 + v2)) >> 64)
     + (unsigned __int64)v3 * (unsigned __int128)v4.m128i_u64[0];
  v8 = *((_QWORD *)&v9 + 1);
  v7 = v9;
  v10 = 0;
  if ( __CFSHR__(*((_QWORD *)&v9 + 1), 54 - v6) )
  {
    v8 = ~*((_QWORD *)&v9 + 1);
    v7 = ~(_QWORD)v9;
    v5 = ~v5;
    v10 = 0x8000000000000000uLL;
  }
  v11 = (unsigned __int64)(v8 << ((unsigned __int8)v6 + 10)) >> ((unsigned __int8)v6 + 10);
  v12 = v6 - 54;
  if ( !_BitScanReverse64((unsigned __int64 *)&v14, v11) )
  {
    v11 = v7;
    v7 = v5;
    _BitScanReverse64((unsigned __int64 *)&v14, v11);
    v12 -= 64LL;
  }
  v15 = v14 + v12;
  v16 = v14 - 52;
  if ( v16 < 0 )
  {
    v11 = (v7 >> ((unsigned __int8)v16 + 64)) | (v11 << -(char)v16);
  }
  else if ( v16 )
  {
    v11 >>= v16;
  }
  return COERCE_DOUBLE(((v15 + 1023) << 52) | v10 | v11 & 0xFFEFFFFFFFFFFFFFuLL) * 1.570796326794897;
}

