/* Address: 0x140139740 | Name: sub_140139740 | Size: 1868 bytes */
__int64 __fastcall sub_140139740(int a1)
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
  signed int v10; // eax
  float v11; // xmm7_4
  float v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  bool v15; // zf
  float v16; // xmm2_4
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  float v22; // xmm2_4
  unsigned int v23; // ecx
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
  v2 = dword_140404A6C[v1 + 225426059];
  v3 = dword_140404A6C[v1 + 225426060];
  v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
  v5 = 34LL * (int)dword_140404A6C[v1 + 225426056];
  if ( dword_140404A6C[v1 + 225426058] )
    v6 = dword_140404A6C[v4 + 225391232]
       - dword_140404A6C[v5 + 225391241]
       - dword_140404A6C[v5 + 225391232]
       - dword_140404A6C[v4 + 225391243];
  else
    v6 = dword_140404A6C[v4 + 225391230]
       - dword_140404A6C[v5 + 225391240]
       - dword_140404A6C[v5 + 225391230]
       - dword_140404A6C[v4 + 225391242];
  v7 = _mm_cvtsi32_si128(v6);
  v8 = (float *)&dword_140404A6C[v1 + 225426174];
  v9 = 0;
  v10 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v5 + 225391230];
  dword_140404A6C[v1 + 225426175] = 0;
  v11 = _mm_cvtepi32_ps(v7).m128_f32[0] * 4.0;
  *v8 = (float)v10;
  *(float *)&dword_140404A6C[v1 + 225426176] = (float)(int)(dword_140404A6C[v4 + 225391232]
                                                          - dword_140404A6C[v5 + 225391232]);
  sub_14007A240((__int64)v8, v8);
  v12 = *v8;
  *(_QWORD *)&dword_140404A6C[v1 + 225426177] = COERCE_UNSIGNED_INT(-*(float *)&dword_140404A6C[v1 + 225426176]);
  *(float *)&dword_140404A6C[v1 + 225426179] = v12;
  if ( dword_140404A6C[v1 + 225426058] )
    v13 = dword_140404A6C[v5 + 225391230];
  else
    v13 = dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240];
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)v13 * 4.0;
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v14 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
  else
    v14 = dword_140404A6C[v5 + 225391232];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)v14 * 4.0;
  v15 = dword_140404A6C[v1 + 225426058] == 0;
  if ( dword_140404A6C[v1 + 225426058] )
    v16 = (float)v3 * 4.0;
  else
    v16 = (float)(int)v2 * -4.0;
  *(float *)&dword_140404A6C[v1 + 225426180] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426180];
  *(float *)&dword_140404A6C[v1 + 225426181] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426181];
  *(float *)&dword_140404A6C[v1 + 225426182] = (float)(v16 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426182];
  v17 = dword_140404A6C[v4 + 225391230];
  if ( v15 )
    v17 -= dword_140404A6C[v4 + 225391242];
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)v17 * 4.0;
  v18 = dword_140404A6C[v4 + 225391232];
  if ( dword_140404A6C[v1 + 225426058] == 1 )
    v18 -= dword_140404A6C[v4 + 225391243];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)v18 * 4.0;
  v19 = dword_140404A6C[v5 + 225391231];
  v20 = dword_140404A6C[v4 + 225391231];
  if ( v19 >= v20 )
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v20 + 1.0) * 4.0;
    v21 = dword_140404A6C[v5 + 225391231];
  }
  else
  {
    *(float *)&dword_140404A6C[v1 + 225426181] = (float)((float)v19 + 1.0) * 4.0;
    v21 = dword_140404A6C[v4 + 225391231];
  }
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)((float)v21 * 4.0) + 8.0;
  if ( dword_140404A6C[v1 + 225426058] )
    v22 = (float)(int)v2 * -4.0;
  else
    v22 = (float)v3 * 4.0;
  *(float *)&dword_140404A6C[v1 + 225426183] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426177])
                                             + *(float *)&dword_140404A6C[v1 + 225426183];
  *(float *)&dword_140404A6C[v1 + 225426184] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426178])
                                             + *(float *)&dword_140404A6C[v1 + 225426184];
  *(float *)&dword_140404A6C[v1 + 225426185] = (float)(v22 * *(float *)&dword_140404A6C[v1 + 225426179])
                                             + *(float *)&dword_140404A6C[v1 + 225426185];
  v23 = dword_140404A6C[v1 + 225426058];
  if ( !v23 )
  {
    v24 = (float)(int)(dword_140404A6C[v5 + 225391230] + dword_140404A6C[v5 + 225391240]) * 4.0;
    v25 = v24;
    v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
    v27 = v26;
LABEL_25:
    v28 = dword_140404A6C[v5 + 225391232];
    goto LABEL_26;
  }
  v24 = (float)(int)dword_140404A6C[v5 + 225391230] * 4.0;
  v25 = v24;
  v26 = (float)((float)(int)(dword_140404A6C[v5 + 225391231] + 1) * 4.0) + 0.125;
  v27 = v26;
  if ( v23 != 1 )
    goto LABEL_25;
  v28 = dword_140404A6C[v5 + 225391232] + dword_140404A6C[v5 + 225391241];
LABEL_26:
  v29 = _mm_cvtsi32_si128(v28);
  result = 0;
  dword_140404A6C[v1 + 225426061] = 0;
  v31 = _mm_cvtepi32_ps(v29).m128_f32[0] * 4.0;
  if ( (int)v2 > 0 )
  {
    v32 = v2;
    do
    {
      v33 = (float)(int)v2;
      LODWORD(v2) = v2 - 1;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 0;
      v34 = 2.0 - (float)(v33 * 4.0);
      v35 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426063] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426064] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426065] + v35) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v36 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v24;
      *(float *)((char *)&dword_140404A6C[225426067] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v26;
      *(float *)((char *)&dword_140404A6C[225426068] + v36) = (float)(v34 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v37 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v37) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v37);
      *(float *)((char *)&dword_140404A6C[225426067] + v37) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v37);
      *(float *)((char *)&dword_140404A6C[225426068] + v37) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v37);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
      --v32;
    }
    while ( v32 );
  }
  if ( v3 > 0 )
  {
    do
    {
      ++v9;
      dword_140404A6C[7 * (int)result + 225426062 + v1] = 1;
      v38 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      v39 = (float)((float)v9 * 4.0) - 2.0;
      *(float *)((char *)&dword_140404A6C[225426063] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426064] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426065] + v38) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v40 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426177])
                                                            + v25;
      *(float *)((char *)&dword_140404A6C[225426067] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426178])
                                                            + v27;
      *(float *)((char *)&dword_140404A6C[225426068] + v40) = (float)(v39 * *(float *)&dword_140404A6C[v1 + 225426179])
                                                            + v31;
      v41 = v1 * 4 + 28LL * (int)dword_140404A6C[v1 + 225426061];
      *(float *)((char *)&dword_140404A6C[225426066] + v41) = (float)(v11 * *v8)
                                                            + *(float *)((char *)&dword_140404A6C[225426066] + v41);
      *(float *)((char *)&dword_140404A6C[225426067] + v41) = (float)(v11 * v8[1])
                                                            + *(float *)((char *)&dword_140404A6C[225426067] + v41);
      *(float *)((char *)&dword_140404A6C[225426068] + v41) = (float)(v11 * v8[2])
                                                            + *(float *)((char *)&dword_140404A6C[225426068] + v41);
      result = dword_140404A6C[v1 + 225426061] + 1;
      dword_140404A6C[v1 + 225426061] = result;
    }
    while ( v9 < v3 );
  }
  return result;
}

