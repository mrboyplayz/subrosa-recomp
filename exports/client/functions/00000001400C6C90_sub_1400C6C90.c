/* Address: 0x1400c6c90 | Name: sub_1400C6C90 | Size: 246 bytes */
unsigned int *__fastcall sub_1400C6C90(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  signed int v4; // ebx
  __int64 v5; // rdx
  unsigned int *result; // rax
  __m128i si128; // xmm0

  v2 = 1760LL * (int)a1;
  v3 = (int)dword_140404A6C[v2 + 278846111];
  v4 = 2;
  dword_140404A6C[v2 + 278847170] = 2;
  dword_140404A6C[v2 + 278847323] = -1;
  strcpy((char *)&dword_140404A6C[1760 * (int)a1 + 278846114 + 16 * v3], "STARTING CS-DOS...");
  sub_1400C3E00(a1);
  sub_1400C3E00(a1);
  sub_1400C6D90(a1, 0);
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  v5 = 32;
  result = &dword_140404A6C[v2 + 278846626];
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
    *(__m128i *)result = si128;
    *((__m128i *)result + 1) = si128;
    *((__m128i *)result + 2) = si128;
    result += 16;
    *((_QWORD *)result - 2) = si128.m128i_i64[0];
    *(result - 2) = si128.m128i_i32[0];
    *((_WORD *)result - 2) = si128.m128i_i16[0];
    *((_BYTE *)result - 2) = si128.m128i_i8[0];
    --v5;
  }
  while ( v5 );
  return result;
}

