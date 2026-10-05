/* Address: 0x14006d120 | Name: sub_14006D120 | Size: 194 bytes */
__int64 __fastcall sub_14006D120(signed int a1)
{
  __m128i si128; // xmm0
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __m128i *v4; // rdx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  __int64 result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
  v2 = a1;
  v3 = 1760LL * a1;
  v4 = (__m128i *)((char *)&unk_19025FC34 + 64 * (SLODWORD(qword_19025F428[v3 / 2]) + 110LL * a1));
  *v4 = si128;
  v4[1] = si128;
  v4[2] = si128;
  v4[3].m128i_i64[0] = si128.m128i_i64[0];
  v4[3].m128i_i32[2] = si128.m128i_i32[0];
  v4[3].m128i_i16[6] = si128.m128i_i16[0];
  v4[3].m128i_i8[14] = si128.m128i_i8[0];
  sub_1400395A0(a1, qword_19025F428[v3 / 2]);
  v5 = qword_19025F428[v3 / 2];
  v6 = HIDWORD(qword_19025F428[v3 / 2]);
  if ( (((_BYTE)v5 + 10) & 0x1F) == v6 )
    HIDWORD(qword_19025F428[v3 / 2]) = ((_BYTE)v6 + 1) & 0x1F;
  v7 = ((_BYTE)v5 + 1) & 0x1F;
  LODWORD(qword_19025F428[v3 / 2]) = v7;
  result = (unsigned int)(v7 << 6);
  ++dword_19093F0C0[v2];
  dword_19025F430[v3] = result;
  return result;
}

