/* Address: 0x140072450 | Name: sub_140072450 | Size: 773 bytes */
__int64 __fastcall sub_140072450(char a1)
{
  __int64 v1; // r10
  unsigned int *v3; // rsi
  unsigned int *v4; // r8
  __int64 v5; // rdx
  unsigned int *v6; // rcx
  __int64 v7; // r9
  unsigned int *v8; // rbx
  int v9; // edi
  signed int v10; // eax
  signed int v11; // edi
  unsigned int *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // xmm1_4
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  __m128i v19; // xmm1
  int v20; // edx
  int i; // ecx
  __int64 j; // rbx
  __int64 v23; // r8
  _DWORD v25[276]; // [rsp+0h] [rbp-478h] BYREF
  __int64 v26; // [rsp+450h] [rbp-28h]

  v1 = 0;
  v3 = &dword_140404A6C[70290893];
  v4 = &dword_140404A6C[70290893];
  do
  {
    if ( *(v4 - 2) == 2 )
    {
      v5 = 0;
      v6 = &dword_140404A6C[70290895];
      v7 = 256;
      do
      {
        if ( (int)*(v6 - 4) >= 2 && v5 != v1 && *(v6 - 2) == *v4 && (int)*v6 > (int)v4[2] )
          --*v6;
        ++v5;
        v6 += 98;
        --v7;
      }
      while ( v7 );
    }
    ++v1;
    v4 += 98;
  }
  while ( (__int64)v4 < (__int64)&dword_140404A6C[70315981] );
  dword_140404A6C[70317864] = 0;
  unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
  v8 = &dword_140404A6C[70087118];
  v9 = 0;
  dword_140404A6C[70318062] = dword_140404A6C[438291414];
  dword_140404A6C[70318063] = dword_140404A6C[438291415];
  *(_QWORD *)&dword_140404A6C[70318060] = 0;
  do
  {
    if ( *(v8 - 5) == 3 && *v8 && v8[4] == -1 )
    {
      dword_140404A6C[438291413] = v8[5];
      sub_140073430((unsigned int)v9);
    }
    ++v9;
    v8 += 122;
  }
  while ( v9 < 1024 );
  v10 = dword_140404A6C[70212041];
  v11 = 0;
  if ( (int)dword_140404A6C[70212041] > 0 )
  {
    v12 = &dword_140404A6C[70212042];
    do
    {
      if ( v12[1] == -1 )
      {
        v13 = *v12;
        v14 = v12[6];
        v15 = (__m128i)v12[8];
        v16 = (__m128i)v12[3];
        v25[16] = v12[7];
        v17 = v12[5];
        v25[14] = v14;
        v18 = v12[4];
        v25[12] = v17;
        v25[10] = v18;
        v19 = (__m128i)v12[2];
        dword_140404A6C[438291413] = v13;
        sub_14006D930(
          &dword_140404A6C[77 * v11 + 70212055],
          (unsigned int)_mm_cvtsi128_si32(v19),
          (unsigned int)_mm_cvtsi128_si32(v16),
          (unsigned int)_mm_cvtsi128_si32(v15),
          64);
        v10 = dword_140404A6C[70212041];
      }
      ++v11;
      v12 += 77;
    }
    while ( v11 < v10 );
  }
  v20 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v3 - 2) == 3 && *v3 == -1 )
    {
      ++v20;
      v25[v3[2] + 20] = i;
    }
    v3 += 98;
  }
  for ( j = v20 - 1; j >= 0; --j )
  {
    if ( dword_140404A6C[98 * v25[j + 20] + 70290891] == 3 )
      sub_1400745F0();
  }
  if ( (a1 & 1) == 0 )
  {
    unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777087]);
    sub_14006CFF0(
      COERCE_DOUBLE((unsigned __int64)dword_140404A6C[468760125]),
      COERCE_DOUBLE((unsigned __int64)dword_140404A6C[468760126]),
      v23,
      32.0,
      5,
      1065353216,
      1065353216,
      1065353216,
      1065353216);
  }
  dword_140404A6C[70212041] = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)v25 ^ v26);
}

