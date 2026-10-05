/* Address: 0x1400c72b0 | Name: sub_1400C72B0 | Size: 412 bytes */
__int64 __fastcall sub_1400C72B0(int a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  signed int v3; // edi
  char *v4; // rbx
  __m128i si128; // xmm0
  unsigned int *v6; // rcx
  __int64 result; // rax
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rcx

  v1 = a1;
  v2 = 1760LL * a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  MEMORY[0x1401FCD30](&dword_140404A6C[v2 + 278847325], 0, 1056);
  dword_140404A6C[v2 + 278847328] = -1;
  v3 = 0;
  v4 = (char *)&dword_140404A6C[1760 * v1 + 278846114];
  do
  {
    *v4 = 0;
    if ( !v3 )
      strcpy(v4, "CONNECTING...");
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
    v6 = &dword_140404A6C[16 * (110 * v1 + (unsigned int)v3) + 278846626];
    *(__m128i *)v6 = si128;
    *((__m128i *)v6 + 1) = si128;
    *((__m128i *)v6 + 2) = si128;
    *((_QWORD *)v6 + 6) = si128.m128i_i64[0];
    v6[14] = si128.m128i_i32[0];
    *((_WORD *)v6 + 30) = si128.m128i_i16[0];
    *((_BYTE *)v6 + 62) = si128.m128i_i8[0];
    result = sub_140050F90(v1, v3++);
    v4 += 64;
  }
  while ( v3 < 24 );
  dword_140404A6C[v2 + 278847326] = 256;
  v8 = dword_140404A6C[456202453] == 0;
  dword_140404A6C[v2 + 278847325] = 0;
  if ( !v8 )
  {
    v9 = dword_140404A6C[283831474];
    v10 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    result = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = dword_140404A6C[283786017];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756297] + v10) = 1065353216;
    *(unsigned int *)((char *)&dword_140404A6C[297756298] + v10) = 1065353216;
  }
  return result;
}

