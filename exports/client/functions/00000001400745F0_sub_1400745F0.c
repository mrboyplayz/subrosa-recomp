/* Address: 0x1400745f0 | Name: sub_1400745F0 | Size: 1432 bytes */
__int64 __fastcall sub_1400745F0(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4; // r8
  __int64 v5; // r8
  double v6; // xmm1_8
  float v7; // xmm3_4
  __int64 v8; // r8
  __int64 v9; // r8
  double v10; // xmm0_8
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // xmm0_4
  float v14; // xmm3_4
  double v15; // xmm1_8
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  unsigned int *v18; // rbx
  signed int i; // edi
  double v20; // xmm2_8
  double v21; // xmm1_8
  signed int v22; // eax
  signed int v23; // edi
  unsigned int *v24; // rbx
  int v25; // xmm1_4
  __m128i v26; // xmm3
  __m128i v27; // xmm2
  int v28; // xmm0_4
  int v29; // xmm1_4
  unsigned int *v30; // rcx
  int j; // edx
  __int64 k; // rbx
  signed int v33; // eax
  __int64 v34; // rax
  __int64 v36; // [rsp+0h] [rbp-498h] BYREF
  int v37; // [rsp+28h] [rbp-470h]
  int v38; // [rsp+30h] [rbp-468h]
  int v39; // [rsp+38h] [rbp-460h]
  int v40; // [rsp+40h] [rbp-458h]
  _DWORD v41[256]; // [rsp+50h] [rbp-448h]
  __int64 v42; // [rsp+450h] [rbp-48h]

  if ( a1 <= 0xFF )
  {
    v2 = 98LL * (int)a1;
    if ( (unsigned int)sub_140075460() )
    {
      unk_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
      v3 = 0;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v4,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        dword_140404A6C[70087091],
        dword_140404A6C[70087092],
        dword_140404A6C[70087093],
        dword_140404A6C[70087094]);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v5,
        *(float *)&dword_140404A6C[v2 + 70290900],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v6 = dword_140404A6C[v2 + 70290976];
      v7 = *(float *)&dword_140404A6C[v2 + 70290900];
      *(float *)&v6 = (float)(*(float *)&v6 + *(float *)&dword_140404A6C[v2 + 70290974]) - v7;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        v6,
        v8,
        v7,
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v9,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v10 = dword_140404A6C[v2 + 70290973];
      *(float *)&v10 = (float)(*(float *)&v10 + *(float *)&dword_140404A6C[v2 + 70290975])
                     - *(float *)&dword_140404A6C[v2 + 70290900];
      sub_14006D660(
        v10,
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v11,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      if ( !dword_140404A6C[v2 + 70290972] )
      {
        v13 = 1056964608;
        if ( a1 == dword_140404A6C[70087104] )
          v13 = 1059061760;
        v14 = *(float *)&dword_140404A6C[v2 + 70290980];
        *(_QWORD *)&v15 = dword_140404A6C[v2 + 70290978];
        v40 = 1065353216;
        sub_14006D660(
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290977]),
          v15,
          v12,
          v14,
          0,
          v13,
          v13,
          v13,
          1065353216);
        v16 = (__m128i)dword_140404A6C[v2 + 70290977];
        *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 + *(float *)&dword_140404A6C[v2 + 70290900];
        v17 = (__m128i)dword_140404A6C[v2 + 70290978];
        *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 + 4.0;
        v40 = 1065353216;
        *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 + 4.0;
        v39 = 1065353216;
        v38 = 1065353216;
        v37 = 1065353216;
        sub_14006D930(
          &dword_140404A6C[v2 + 70290908],
          (unsigned int)_mm_cvtsi128_si32(v16),
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)dword_140404A6C[70087071]),
          64);
      }
      sub_140075340();
      if ( (unsigned int)sub_140075460() )
      {
        v18 = &dword_140404A6C[70087122];
        for ( i = 0; i < 1024; ++i )
        {
          if ( *(v18 - 9) == 3 && *v18 == a1 && *(v18 - 4) )
          {
            *(_QWORD *)&v20 = v18[13];
            *(_QWORD *)&v21 = v18[12];
            dword_140404A6C[438291413] = v18[1];
            sub_140073430(i, v21, v20);
          }
          v18 += 122;
        }
        v22 = dword_140404A6C[70212041];
        v23 = 0;
        if ( (int)dword_140404A6C[70212041] > 0 )
        {
          v24 = &dword_140404A6C[70212049];
          do
          {
            if ( *(v24 - 6) == a1 )
            {
              v25 = *(v24 - 1);
              v26 = (__m128i)v24[1];
              v27 = (__m128i)v24[3];
              v40 = *v24;
              v28 = *(v24 - 2);
              v39 = v25;
              v29 = *(v24 - 3);
              v38 = v28;
              v37 = v29;
              sub_14006D930(
                &dword_140404A6C[77 * v23 + 70212055],
                (unsigned int)_mm_cvtsi128_si32((__m128i)v24[2]),
                (unsigned int)_mm_cvtsi128_si32(v27),
                (unsigned int)_mm_cvtsi128_si32(v26),
                64);
              v22 = dword_140404A6C[70212041];
            }
            ++v23;
            v24 += 77;
          }
          while ( v23 < v22 );
        }
        v30 = &dword_140404A6C[70290893];
        for ( j = 0; j < 256; ++j )
        {
          if ( *(v30 - 2) == 3 && *v30 == a1 )
          {
            ++v3;
            v41[v30[2]] = j;
          }
          v30 += 98;
        }
        for ( k = v3 - 1; k >= 0; --k )
        {
          v30 = (unsigned int *)(int)v41[k];
          if ( dword_140404A6C[98 * (_QWORD)v30 + 70290891] == 3 )
            sub_1400745F0();
        }
        if ( (int)dword_140404A6C[70317864] <= 0
          || (v33 = dword_140404A6C[70317864] - 1, dword_140404A6C[70317864] = v33, v33 <= 0) )
        {
          (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3089);
        }
        else
        {
          v34 = 2LL * v33;
          dword_140404A6C[70318060] = dword_140404A6C[2 * v34 + 70317861];
          dword_140404A6C[70318062] = dword_140404A6C[2 * v34 + 70317863];
          dword_140404A6C[70318061] = dword_140404A6C[2 * v34 + 70317862];
          dword_140404A6C[70318063] = dword_140404A6C[2 * v34 + 70317864];
          sub_14007B7E0(v30);
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v36 ^ v42);
}

