/* Address: 0x1400c3e00 | Name: sub_1400C3E00 | Size: 194 bytes */
__int64 __fastcall sub_1400C3E00(signed int a1)
{
  __m128i si128; // xmm0
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int *v4; // rdx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  __int64 result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
  v2 = a1;
  v3 = 1760LL * a1;
  v4 = &dword_140404A6C[16 * ((int)dword_140404A6C[v3 + 278846111] + 110LL * a1) + 278846626];
  *(__m128i *)v4 = si128;
  *((__m128i *)v4 + 1) = si128;
  *((__m128i *)v4 + 2) = si128;
  *((_QWORD *)v4 + 6) = si128.m128i_i64[0];
  v4[14] = si128.m128i_i32[0];
  *((_WORD *)v4 + 30) = si128.m128i_i16[0];
  *((_BYTE *)v4 + 62) = si128.m128i_i8[0];
  sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
  v5 = dword_140404A6C[v3 + 278846111];
  v6 = dword_140404A6C[v3 + 278846112];
  if ( (((_BYTE)v5 + 10) & 0x1F) == v6 )
    dword_140404A6C[v3 + 278846112] = ((_BYTE)v6 + 1) & 0x1F;
  v7 = ((_BYTE)v5 + 1) & 0x1F;
  dword_140404A6C[v3 + 278846111] = v7;
  result = (unsigned int)(v7 << 6);
  ++dword_140404A6C[v2 + 280648157];
  dword_140404A6C[v3 + 278846113] = result;
  return result;
}

