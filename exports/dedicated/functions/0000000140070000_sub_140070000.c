/* Address: 0x140070000 | Name: sub_140070000 | Size: 246 bytes */
__m128i *__fastcall sub_140070000(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  signed int v4; // ebx
  __int64 v5; // rdx
  __m128i *result; // rax
  __m128i si128; // xmm0

  v2 = 7040LL * (int)a1;
  v3 = *(int *)((char *)&unk_19025F0C0 + v2 + 872);
  v4 = 2;
  *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5108) = 2;
  *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 5720) = -1;
  strcpy((char *)&unk_19025F0C0 + 7040 * (int)a1 + 64 * v3 + 884, "STARTING CS-DOS...");
  sub_14006D120(a1);
  sub_14006D120(a1);
  sub_140070100(a1, 0);
  do
    sub_1400395A0(a1, v4++);
  while ( v4 < 24 );
  v5 = 32;
  result = (__m128i *)((char *)&unk_19025FC34 + v2);
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
    *result = si128;
    result[1] = si128;
    result[2] = si128;
    result += 4;
    result[-1].m128i_i64[0] = si128.m128i_i64[0];
    result[-1].m128i_i32[2] = si128.m128i_i32[0];
    result[-1].m128i_i16[6] = si128.m128i_i16[0];
    result[-1].m128i_i8[14] = si128.m128i_i8[0];
    --v5;
  }
  while ( v5 );
  return result;
}

