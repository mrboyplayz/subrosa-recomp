/* Address: 0x1400c5ac0 | Name: sub_1400C5AC0 | Size: 1868 bytes */
__int64 __fastcall sub_1400C5AC0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // r12d
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  __m128i v7; // xmm7
  float *v8; // r15
  int v9; // r14d
  int v10; // eax
  float v11; // xmm7_4
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  float v16; // xmm2_4
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  float v22; // xmm2_4
  int v23; // ecx
  float v24; // xmm4_4
  float v25; // xmm8_4
  float v26; // xmm3_4
  float v27; // xmm9_4
  unsigned int v28; // eax
  __m128i v29; // xmm5
  __int64 result; // rax
  float v31; // xmm5_4
  __int64 v32; // rdx
  float v33; // xmm0_4
  float v34; // xmm2_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // xmm2_4
  __int64 v40; // rcx
  __int64 v41; // rcx

  v1 = 396LL * a1;
  v2 = (unsigned int)dword_183989E80[v1 + 34854];
  v3 = dword_183989E80[v1 + 34855];
  v4 = 34LL * dword_183989E80[v1 + 34852];
  v5 = 34LL * dword_183989E80[v1 + 34851];
  if ( dword_183989E80[v1 + 34853] )
    v6 = dword_183989E80[v4 + 27] - dword_183989E80[v5 + 36] - dword_183989E80[v5 + 27] - dword_183989E80[v4 + 38];
  else
    v6 = dword_183989E80[v4 + 25] - dword_183989E80[v5 + 35] - dword_183989E80[v5 + 25] - dword_183989E80[v4 + 37];
  v7 = _mm_cvtsi32_si128(v6);
  v8 = (float *)&dword_1839AC0E4[v1];
  v9 = 0;
  v10 = dword_183989E80[v4 + 25] - dword_183989E80[v5 + 25];
  dword_183989E80[v1 + 34970] = 0;
  v11 = _mm_cvtepi32_ps(v7).m128_f32[0] * 4.0;
  *(float *)&dword_1839AC0E4[v1] = (float)v10;
  *(float *)&dword_183989E80[v1 + 34971] = (float)(dword_183989E80[v4 + 27] - dword_183989E80[v5 + 27]);
  sub_140049260((__int64)&dword_1839AC0E4[v1], (float *)&dword_1839AC0E4[v1]);
  v12 = dword_1839AC0E4[v1];
  *(_QWORD *)&dword_183989E80[v1 + 34972] = COERCE_UNSIGNED_INT(-*(float *)&dword_183989E80[v1 + 34971]);
  dword_183989E80[v1 + 34974] = v12;
  if ( dword_183989E80[v1 + 34853] )
    v13 = dword_183989E80[v5 + 25];
  else
    v13 = dword_183989E80[v5 + 25] + dword_183989E80[v5 + 35];
  *(float *)&dword_183989E80[v1 + 34975] = (float)v13 * 4.0;
  if ( dword_183989E80[v1 + 34853] == 1 )
    v14 = dword_183989E80[v5 + 27] + dword_183989E80[v5 + 36];
  else
    v14 = dword_183989E80[v5 + 27];
  *(float *)&dword_183989E80[v1 + 34977] = (float)v14 * 4.0;
  v15 = dword_183989E80[v1 + 34853] == 0;
  if ( dword_183989E80[v1 + 34853] )
    v16 = (float)v3 * 4.0;
  else
    v16 = (float)(int)v2 * -4.0;
  *(float *)&dword_183989E80[v1 + 34975] = (float)(v16 * *(float *)&dword_183989E80[v1 + 34972])
                                         + *(float *)&dword_183989E80[v1 + 34975];
  *(float *)&dword_183989E80[v1 + 34976] = (float)(v16 * *(float *)&dword_183989E80[v1 + 34973])
                                         + *(float *)&dword_183989E80[v1 + 34976];
  *(float *)&dword_183989E80[v1 + 34977] = (float)(v16 * *(float *)&dword_183989E80[v1 + 34974])
                                         + *(float *)&dword_183989E80[v1 + 34977];
  v17 = dword_183989E80[v4 + 25];
  if ( v15 )
    v17 -= dword_183989E80[v4 + 37];
  *(float *)&dword_183989E80[v1 + 34978] = (float)v17 * 4.0;
  v18 = dword_183989E80[v4 + 27];
  if ( dword_183989E80[v1 + 34853] == 1 )
    v18 -= dword_183989E80[v4 + 38];
  *(float *)&dword_183989E80[v1 + 34980] = (float)v18 * 4.0;
  v19 = dword_183989E80[v5 + 26];
  v20 = dword_183989E80[v4 + 26];
  if ( v19 >= v20 )
  {
    *(float *)&dword_183989E80[v1 + 34976] = (float)((float)v20 + 1.0) * 4.0;
    v21 = dword_183989E80[v5 + 26];
  }
  else
  {
    *(float *)&dword_183989E80[v1 + 34976] = (float)((float)v19 + 1.0) * 4.0;
    v21 = dword_183989E80[v4 + 26];
  }
  *(float *)&dword_183989E80[v1 + 34979] = (float)((float)v21 * 4.0) + 8.0;
  if ( dword_183989E80[v1 + 34853] )
    v22 = (float)(int)v2 * -4.0;
  else
    v22 = (float)v3 * 4.0;
  *(float *)&dword_183989E80[v1 + 34978] = (float)(v22 * *(float *)&dword_183989E80[v1 + 34972])
                                         + *(float *)&dword_183989E80[v1 + 34978];
  *(float *)&dword_183989E80[v1 + 34979] = (float)(v22 * *(float *)&dword_183989E80[v1 + 34973])
                                         + *(float *)&dword_183989E80[v1 + 34979];
  *(float *)&dword_183989E80[v1 + 34980] = (float)(v22 * *(float *)&dword_183989E80[v1 + 34974])
                                         + *(float *)&dword_183989E80[v1 + 34980];
  v23 = dword_183989E80[v1 + 34853];
  if ( !v23 )
  {
    v24 = (float)(dword_183989E80[v5 + 25] + dword_183989E80[v5 + 35]) * 4.0;
    v25 = v24;
    v26 = (float)((float)(dword_183989E80[v5 + 26] + 1) * 4.0) + 0.125;
    v27 = v26;
LABEL_25:
    v28 = dword_183989E80[v5 + 27];
    goto LABEL_26;
  }
  v24 = (float)dword_183989E80[v5 + 25] * 4.0;
  v25 = v24;
  v26 = (float)((float)(dword_183989E80[v5 + 26] + 1) * 4.0) + 0.125;
  v27 = v26;
  if ( v23 != 1 )
    goto LABEL_25;
  v28 = dword_183989E80[v5 + 27] + dword_183989E80[v5 + 36];
LABEL_26:
  v29 = _mm_cvtsi32_si128(v28);
  result = 0;
  dword_183989E80[v1 + 34856] = 0;
  v31 = _mm_cvtepi32_ps(v29).m128_f32[0] * 4.0;
  if ( (int)v2 > 0 )
  {
    v32 = v2;
    do
    {
      v33 = (float)(int)v2;
      LODWORD(v2) = v2 - 1;
      dword_183989E80[7 * (int)result + 34857 + v1] = 0;
      v34 = 2.0 - (float)(v33 * 4.0);
      v35 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      *(float *)((char *)&unk_1839ABF28 + v35) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34972]) + v24;
      *(float *)((char *)&unk_1839ABF28 + v35 + 4) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34973]) + v26;
      *(float *)((char *)&unk_1839ABF28 + v35 + 8) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34974]) + v31;
      v36 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      *(float *)((char *)&unk_1839ABF34 + v36) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34972]) + v24;
      *(float *)((char *)&unk_1839ABF34 + v36 + 4) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34973]) + v26;
      *(float *)((char *)&unk_1839ABF34 + v36 + 8) = (float)(v34 * *(float *)&dword_183989E80[v1 + 34974]) + v31;
      v37 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      *(float *)((char *)&dword_183989E80[34861] + v37) = (float)(v11 * *v8)
                                                        + *(float *)((char *)&dword_183989E80[34861] + v37);
      *(float *)((char *)&dword_183989E80[34862] + v37) = (float)(v11 * v8[1])
                                                        + *(float *)((char *)&dword_183989E80[34862] + v37);
      *(float *)((char *)&dword_183989E80[34863] + v37) = (float)(v11 * v8[2])
                                                        + *(float *)((char *)&dword_183989E80[34863] + v37);
      result = (unsigned int)(dword_183989E80[v1 + 34856] + 1);
      dword_183989E80[v1 + 34856] = result;
      --v32;
    }
    while ( v32 );
  }
  if ( v3 > 0 )
  {
    do
    {
      ++v9;
      dword_183989E80[7 * (int)result + 34857 + v1] = 1;
      v38 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      v39 = (float)((float)v9 * 4.0) - 2.0;
      *(float *)((char *)&unk_1839ABF28 + v38) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34972]) + v25;
      *(float *)((char *)&unk_1839ABF28 + v38 + 4) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34973]) + v27;
      *(float *)((char *)&unk_1839ABF28 + v38 + 8) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34974]) + v31;
      v40 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      *(float *)((char *)&unk_1839ABF34 + v40) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34972]) + v25;
      *(float *)((char *)&unk_1839ABF34 + v40 + 4) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34973]) + v27;
      *(float *)((char *)&unk_1839ABF34 + v40 + 8) = (float)(v39 * *(float *)&dword_183989E80[v1 + 34974]) + v31;
      v41 = v1 * 4 + 28LL * dword_183989E80[v1 + 34856];
      *(float *)((char *)&dword_183989E80[34861] + v41) = (float)(v11 * *v8)
                                                        + *(float *)((char *)&dword_183989E80[34861] + v41);
      *(float *)((char *)&dword_183989E80[34862] + v41) = (float)(v11 * v8[1])
                                                        + *(float *)((char *)&dword_183989E80[34862] + v41);
      *(float *)((char *)&dword_183989E80[34863] + v41) = (float)(v11 * v8[2])
                                                        + *(float *)((char *)&dword_183989E80[34863] + v41);
      result = (unsigned int)(dword_183989E80[v1 + 34856] + 1);
      dword_183989E80[v1 + 34856] = result;
    }
    while ( v9 < v3 );
  }
  return result;
}

