/* Address: 0x14006a5f0 | Name: sub_14006A5F0 | Size: 3778 bytes */
__int64 __fastcall sub_14006A5F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  unsigned int v9; // edi
  unsigned int v10; // xmm9_4
  float v11; // xmm15_4
  float v12; // xmm14_4
  float v13; // xmm11_4
  float v14; // xmm5_4
  float v15; // xmm13_4
  float v16; // xmm11_4
  double v17; // xmm0_8
  float v18; // xmm13_4
  float v19; // xmm1_4
  signed int v20; // r10d
  int v21; // ecx
  int v22; // r11d
  float v23; // xmm0_4
  unsigned int v24; // xmm10_4
  float v25; // xmm6_4
  signed int v26; // eax
  signed int v27; // ecx
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm11_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  unsigned int *v34; // r8
  unsigned int *v35; // rdx
  __int64 v36; // r9
  __int16 v37; // ax
  float v38; // xmm7_4
  float v39; // xmm3_4
  int v40; // edx
  int v41; // ecx
  __int64 result; // rax
  float v43; // xmm0_4
  int v44; // ecx
  float v45; // xmm1_4
  int v46; // ecx
  __int64 v47; // r9
  float v48; // xmm7_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  __int64 v51; // rdi
  float *v52; // rsi
  unsigned int v53; // eax
  float v54; // xmm2_4
  unsigned int v55; // eax
  float v56; // xmm2_4
  __m128i v57; // xmm0
  __int64 v58; // rax
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  __int64 v62; // rcx
  float v63; // xmm4_4
  __int64 v64; // rcx
  float v65; // xmm1_4
  float v66; // xmm3_4
  __m128i v67; // xmm0
  float v68; // xmm3_4
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  __m128i si128; // xmm0
  __m128i v74; // xmm3
  __m128i v75; // xmm6
  __m128i v76; // xmm2
  __m128i v77; // xmm4
  __m128i v78; // xmm5
  __m128i v79; // xmm0
  __m128i v80; // xmm1
  __m128i v81; // xmm2
  __m128i v82; // xmm0
  __m128i v83; // xmm2
  __m128i v84; // xmm1
  __m128i v85; // xmm0
  __m128i v86; // xmm1
  __m128i v87; // xmm2
  __m128i v88; // xmm0
  __m128i v89; // xmm5
  __m128i v90; // xmm2
  __m128i v91; // xmm1
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __m128i v94; // xmm2
  __m128i v95; // xmm0
  __m128i v96; // xmm5
  __m128i v97; // xmm0
  int v98; // eax
  float v99; // [rsp+20h] [rbp-F8h]
  float v100; // [rsp+24h] [rbp-F4h]
  float v101; // [rsp+28h] [rbp-F0h]
  float v102; // [rsp+2Ch] [rbp-ECh]
  float v103; // [rsp+120h] [rbp+8h]
  float v104; // [rsp+128h] [rbp+10h]
  float v105; // [rsp+128h] [rbp+10h]
  float v106; // [rsp+130h] [rbp+18h]
  float v107; // [rsp+138h] [rbp+20h]

  v2 = 30LL * (int)dword_140404A6C[18198545];
  v3 = a1;
  v4 = 278720LL * a1;
  v5 = a2;
  v6 = *(float *)&dword_140404A6C[v4 + 606302] - *(float *)&dword_140404A6C[v2 + 18198546];
  v7 = *(float *)&dword_140404A6C[v4 + 606303] - *(float *)&dword_140404A6C[v2 + 18198547];
  v8 = *(float *)&dword_140404A6C[v4 + 606304] - *(float *)&dword_140404A6C[v2 + 18198548];
  v104 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  v9 = a1 - 56;
  *(float *)&v10 = *(float *)&dword_140404A6C[5] * (float)(v104 + 8.0);
  if ( (unsigned int)(a1 - 56) <= 7 )
    *(float *)&v10 = *(float *)&dword_140404A6C[5] * 16.0;
  v11 = (float)a2;
  v12 = 1.0 / (float)a2;
  v13 = (float)(*(float *)&dword_140404A6C[v4 + 606302]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606305]
                                      - *(float *)&dword_140404A6C[v2 + 18198558])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198546];
  v14 = (float)(*(float *)&dword_140404A6C[v4 + 606303]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606306]
                                      - *(float *)&dword_140404A6C[v2 + 18198559])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198547];
  v15 = (float)(*(float *)&dword_140404A6C[v4 + 606304]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606307]
                                      - *(float *)&dword_140404A6C[v2 + 18198560])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198548];
  v16 = (float)(*(float *)&v10
              - (float)((float)(fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) + 8.0)
                      * *(float *)&dword_140404A6C[5]))
      * v12;
  if ( v9 <= 7 )
    v16 = 0.0;
  v17 = sub_14023F704();
  v18 = *(float *)&v17;
  v19 = sub_14023EDE4();
  v20 = (int)((v19 + 1.570796326794897) * (double)(int)dword_140404A6C[175561671] * 0.3183098861837907);
  if ( v20 < 0 )
    v20 = 0;
  if ( (signed int)(dword_140404A6C[175561671] - 1) < v20 )
    v20 = dword_140404A6C[175561671] - 1;
  v21 = dword_140404A6C[v20 + 175561672];
  if ( v21 )
    v22 = (int)((v18 + 6.283185307179586) * (double)v21 * 0.1591549430918953) % v21;
  else
    v22 = 0;
  v23 = *(float *)&dword_140404A6C[v4 + 606414];
  *(float *)&v24 = fminf(*(float *)&dword_140404A6C[v4 + 606308] / (float)(v104 + 0.0625), 1.0)
                 * *(float *)&dword_140404A6C[v4 + 327699];
  v25 = (float)(int)dword_140404A6C[256 * (__int64)v20 + 176086216 + 2 * v22];
  v106 = v25;
  v103 = (float)(int)dword_140404A6C[256 * (__int64)v20 + 176086217 + 2 * v22];
  if ( v23 == 0.0 )
  {
    v100 = 0.0;
    v26 = v20;
    v101 = 0.0;
    v27 = v22;
    v99 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
  }
  else
  {
    v28 = *(float *)&dword_140404A6C[v4 + 606415];
    v26 = dword_140404A6C[v4 + 606412];
    v27 = dword_140404A6C[v4 + 606413];
    v31 = *(float *)&v10 - v23;
    v10 = dword_140404A6C[v4 + 606414];
    v32 = *(float *)&v24 - *(float *)&dword_140404A6C[v4 + 606416];
    v24 = dword_140404A6C[v4 + 606416];
    v33 = v25 - *(float *)&dword_140404A6C[v4 + 606410];
    v106 = *(float *)&dword_140404A6C[v4 + 606410];
    v25 = v106;
    v29 = v31 * v12;
    v99 = v32 * v12;
    v103 = *(float *)&dword_140404A6C[v4 + 606411];
    v100 = v33 * v12;
    v30 = (float)(v16 - v28) * v12;
    v101 = (float)((float)(int)dword_140404A6C[256 * (__int64)v20 + 176086217 + 2 * v22] - v103) * v12;
  }
  v34 = &dword_140404A6C[18215689];
  v105 = v28;
  v107 = v29;
  v35 = &dword_140404A6C[32 * (v27 + ((__int64)v26 << 7)) + 175561959];
  v36 = (v22 + ((v20 - (__int64)v26) << 7) - v27) << 7;
  do
  {
    *((_WORD *)v34 - 96) = *(_WORD *)((char *)v35 + v36);
    *((_WORD *)v34 - 64) = *(_WORD *)v35;
    *((_WORD *)v34 - 32) = *(_WORD *)((char *)v35 + v36 + 2);
    *(_WORD *)v34 = *((_WORD *)v35 + 1);
    *((_WORD *)v34 - 95) = *(_WORD *)((char *)v35 + v36 - 4);
    *((_WORD *)v34 - 63) = *((_WORD *)v35 - 2);
    *((_WORD *)v34 - 31) = *(_WORD *)((char *)v35 + v36 - 2);
    *((_WORD *)v34 + 1) = *((_WORD *)v35 - 1);
    *((_WORD *)v34 - 94) = *(_WORD *)((char *)v35 + v36 - 8);
    *((_WORD *)v34 - 62) = *((_WORD *)v35 - 4);
    *((_WORD *)v34 - 30) = *(_WORD *)((char *)v35 + v36 - 6);
    *((_WORD *)v34 + 2) = *((_WORD *)v35 - 3);
    *((_WORD *)v34 - 93) = *(_WORD *)((char *)v35 + v36 - 12);
    *((_WORD *)v34 - 61) = *((_WORD *)v35 - 6);
    *((_WORD *)v34 - 29) = *(_WORD *)((char *)v35 + v36 - 10);
    *((_WORD *)v34 + 3) = *((_WORD *)v35 - 5);
    *((_WORD *)v34 - 92) = *(_WORD *)((char *)v35 + v36 - 16);
    *((_WORD *)v34 - 60) = *((_WORD *)v35 - 8);
    *((_WORD *)v34 - 28) = *(_WORD *)((char *)v35 + v36 - 14);
    *((_WORD *)v34 + 4) = *((_WORD *)v35 - 7);
    *((_WORD *)v34 - 91) = *(_WORD *)((char *)v35 + v36 - 20);
    *((_WORD *)v34 - 59) = *((_WORD *)v35 - 10);
    *((_WORD *)v34 - 27) = *(_WORD *)((char *)v35 + v36 - 18);
    *((_WORD *)v34 + 5) = *((_WORD *)v35 - 9);
    *((_WORD *)v34 - 90) = *(_WORD *)((char *)v35 + v36 - 24);
    *((_WORD *)v34 - 58) = *((_WORD *)v35 - 12);
    *((_WORD *)v34 - 26) = *(_WORD *)((char *)v35 + v36 - 22);
    *((_WORD *)v34 + 6) = *((_WORD *)v35 - 11);
    *((_WORD *)v34 - 89) = *(_WORD *)((char *)v35 + v36 - 28);
    *((_WORD *)v34 - 57) = *((_WORD *)v35 - 14);
    *((_WORD *)v34 - 25) = *(_WORD *)((char *)v35 + v36 - 26);
    *((_WORD *)v34 + 7) = *((_WORD *)v35 - 13);
    *((_WORD *)v34 - 88) = *(_WORD *)((char *)v35 + v36 - 32);
    *((_WORD *)v34 - 56) = *((_WORD *)v35 - 16);
    *((_WORD *)v34 - 24) = *(_WORD *)((char *)v35 + v36 - 30);
    *((_WORD *)v34 + 8) = *((_WORD *)v35 - 15);
    *((_WORD *)v34 - 87) = *(_WORD *)((char *)v35 + v36 - 36);
    *((_WORD *)v34 - 55) = *((_WORD *)v35 - 18);
    *((_WORD *)v34 - 23) = *(_WORD *)((char *)v35 + v36 - 34);
    *((_WORD *)v34 + 9) = *((_WORD *)v35 - 17);
    *((_WORD *)v34 - 86) = *(_WORD *)((char *)v35 + v36 - 40);
    v37 = *((_WORD *)v35 - 20);
    v35 -= 16;
    *((_WORD *)v34 - 54) = v37;
    *((_WORD *)v34 - 22) = *(_WORD *)((char *)v35 + v36 + 26);
    *((_WORD *)v34 + 10) = *((_WORD *)v35 + 13);
    *((_WORD *)v34 - 85) = *(_WORD *)((char *)v35 + v36 + 20);
    *((_WORD *)v34 - 53) = *((_WORD *)v35 + 10);
    *((_WORD *)v34 - 21) = *(_WORD *)((char *)v35 + v36 + 22);
    *((_WORD *)v34 + 11) = *((_WORD *)v35 + 11);
    *((_WORD *)v34 - 84) = *(_WORD *)((char *)v35 + v36 + 16);
    *((_WORD *)v34 - 52) = *((_WORD *)v35 + 8);
    *((_WORD *)v34 - 20) = *(_WORD *)((char *)v35 + v36 + 18);
    *((_WORD *)v34 + 12) = *((_WORD *)v35 + 9);
    *((_WORD *)v34 - 83) = *(_WORD *)((char *)v35 + v36 + 12);
    *((_WORD *)v34 - 51) = *((_WORD *)v35 + 6);
    *((_WORD *)v34 - 19) = *(_WORD *)((char *)v35 + v36 + 14);
    *((_WORD *)v34 + 13) = *((_WORD *)v35 + 7);
    *((_WORD *)v34 - 82) = *(_WORD *)((char *)v35 + v36 + 8);
    *((_WORD *)v34 - 50) = *((_WORD *)v35 + 4);
    *((_WORD *)v34 - 18) = *(_WORD *)((char *)v35 + v36 + 10);
    *((_WORD *)v34 + 14) = *((_WORD *)v35 + 5);
    *((_WORD *)v34 - 81) = *(_WORD *)((char *)v35 + v36 + 4);
    *((_WORD *)v34 - 49) = *((_WORD *)v35 + 2);
    *((_WORD *)v34 - 17) = *(_WORD *)((char *)v35 + v36 + 6);
    *((_WORD *)v34 + 15) = *((_WORD *)v35 + 3);
    v34 += 8;
  }
  while ( (__int64)v34 < (__int64)&dword_140404A6C[18215705] );
  v102 = 0.0;
  v38 = 1.0 - (float)((float)((float)(v30 * 0.5) * v11) + v28);
  if ( v9 <= 7 )
    v38 = 1.0;
  v39 = *(float *)&dword_140404A6C[v4 + 606309];
  v40 = dword_140404A6C[v4 + 327772];
  v41 = v40 - ((int)(float)((float)(v11 * v38) + v39) & 0x3FFFF);
  result = (unsigned int)(v41 + 0x40000);
  if ( v41 >= -131072 )
    result = (unsigned int)v41;
  v43 = (float)(int)result;
  if ( v9 > 7 )
  {
    if ( v43 < 16.0 )
    {
      v44 = ((v40 - 16) & 0x3FFFF) - (int)v39;
      result = (unsigned int)(v44 + 0x40000);
      if ( v44 >= -131072 )
        result = (unsigned int)v44;
      v38 = (float)(int)result * v12;
    }
  }
  else
  {
    v43 = 16.0;
  }
  v45 = (float)((float)((float)(v29 * 0.5) * v11) + *(float *)&v10) + 8192.0;
  if ( v43 > v45 )
  {
    v46 = ((int)(float)((float)v40 - v45) & 0x3FFFF) - (int)v39;
    result = (unsigned int)(v46 + 0x40000);
    if ( v46 >= -131072 )
      result = (unsigned int)v46;
    v38 = (float)(int)result * v12;
  }
  if ( v9 <= 7 )
    v38 = 1.0;
  v47 = v5;
  v48 = fminf(fmaxf(v38, 0.0625), 16.0);
  v49 = v103;
  if ( (int)v5 > 0 )
  {
    v50 = 0.0;
    v51 = 278720 * v3;
    v52 = (float *)&dword_140404A6C[v4 + 589919];
    do
    {
      v53 = dword_140404A6C[v4 + 606310];
      if ( v53 )
      {
        v98 = v53 + 1;
        v61 = 0.0;
        if ( (float)v98 >= *(float *)&v10 )
          v98 = 0;
        dword_140404A6C[v4 + 606310] = v98;
      }
      else
      {
        v54 = *(float *)&dword_140404A6C[v4 + 606309];
        v55 = (int)v54;
        v56 = v54 + v48;
        v57 = _mm_cvtsi32_si128(v55);
        v58 = v55 & 0x3FFFF;
        v59 = *(float *)&dword_140404A6C[v4 + 606309] - _mm_cvtepi32_ps(v57).m128_f32[0];
        *(float *)v57.m128i_i32 = (float)(1.0 - v59) * *(float *)&dword_140404A6C[v4 + 327773 + v58];
        v60 = v59 * *(float *)&dword_140404A6C[v4 + 327773 + (((_DWORD)v58 + 1) & 0x3FFFF)];
        *(float *)&dword_140404A6C[v4 + 606309] = v56;
        v61 = *(float *)v57.m128i_i32 + v60;
        if ( v56 >= 262144.0 )
          *(float *)&dword_140404A6C[v4 + 606309] = v56 - 262144.0;
        v49 = v103;
      }
      *(float *)&dword_140404A6C[v51 + 606346 + (int)dword_140404A6C[v4 + 606345]] = v61;
      v62 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v25) & 0x3F;
      v63 = (float)((float)(1.0 - (float)(v25 - (float)(int)v25)) * *(float *)&dword_140404A6C[v62 + 606346 + v51])
          + (float)((float)(v25 - (float)(int)v25) * *(float *)&dword_140404A6C[v51 + 606346 + (((_BYTE)v62 - 1) & 0x3F)]);
      v64 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v49) & 0x3F;
      v65 = v49 - (float)(int)v49;
      v66 = (float)(1.0 - v65) * *(float *)&dword_140404A6C[v64 + 606346 + v51];
      LOWORD(dword_140404A6C[18215705]) = (int)(float)((float)(v63 * v50) * 32767.0);
      HIWORD(dword_140404A6C[18215705]) = dword_140404A6C[18215705];
      v67 = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606313] + 2));
      v68 = v66 + (float)(v65 * *(float *)&dword_140404A6C[v51 + 606346 + (((_BYTE)v64 - 1) & 0x3F)]);
      LOWORD(dword_140404A6C[18215706]) = (int)(float)((float)((float)(1.0 - v50) * v63) * 32767.0);
      HIWORD(dword_140404A6C[18215706]) = dword_140404A6C[18215706];
      LOWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v50) * v68) * 32767.0);
      v69 = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606329] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606313] = v67;
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v69;
      v70 = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606333] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606317] = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606317]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v70;
      v71 = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606337] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606321] = _mm_loadu_si128((const __m128i *)((char *)&dword_140404A6C[v4 + 606321]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v71;
      v72 = _mm_srli_si128(_mm_loadu_si128((const __m128i *)&dword_140404A6C[v4 + 606341]), 2);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_srli_si128(
                                                    _mm_loadu_si128((const __m128i *)&dword_140404A6C[v4 + 606325]),
                                                    2);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = v72;
      LOWORD(dword_140404A6C[18215707]) = (int)(float)((float)(v68 * v50) * 32767.0);
      HIWORD(dword_140404A6C[18215707]) = dword_140404A6C[18215707];
      HIWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v50) * v68) * 32767.0);
      *(float *)&v10 = *(float *)&v10 + v107;
      si128 = _mm_load_si128((const __m128i *)&dword_140404A6C[18215705]);
      v74 = _mm_shuffle_epi32(si128, 0);
      v75 = _mm_shuffle_epi32(si128, 170);
      v76 = _mm_mulhi_epi16(v75, *(__m128i *)&dword_140404A6C[18215673]);
      v77 = _mm_shuffle_epi32(si128, 255);
      v78 = _mm_shuffle_epi32(si128, 85);
      v79 = _mm_mulhi_epi16(v77, *(__m128i *)&dword_140404A6C[18215689]);
      *(__m128i *)&dword_140404A6C[v4 + 606313] = _mm_add_epi16(
                                                    _mm_add_epi16(
                                                      _mm_mulhi_epi16(v74, *(__m128i *)&dword_140404A6C[18215641]),
                                                      _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215657])),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606313]);
      v80 = _mm_mulhi_epi16(v74, *(__m128i *)&dword_140404A6C[18215645]);
      v81 = _mm_add_epi16(_mm_add_epi16(v76, v79), *(__m128i *)&dword_140404A6C[v4 + 606329]);
      v82 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215661]);
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v81;
      v83 = _mm_mulhi_epi16(v75, *(__m128i *)&dword_140404A6C[18215677]);
      v84 = _mm_add_epi16(_mm_add_epi16(v80, v82), *(__m128i *)&dword_140404A6C[v4 + 606317]);
      v85 = _mm_mulhi_epi16(v77, *(__m128i *)&dword_140404A6C[18215693]);
      *(__m128i *)&dword_140404A6C[v4 + 606317] = v84;
      v86 = _mm_mulhi_epi16(v74, *(__m128i *)&dword_140404A6C[18215649]);
      v87 = _mm_add_epi16(_mm_add_epi16(v83, v85), *(__m128i *)&dword_140404A6C[v4 + 606333]);
      v88 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215665]);
      v89 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215669]);
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v87;
      v90 = _mm_mulhi_epi16(v75, *(__m128i *)&dword_140404A6C[18215681]);
      v91 = _mm_add_epi16(_mm_add_epi16(v86, v88), *(__m128i *)&dword_140404A6C[v4 + 606321]);
      v92 = _mm_mulhi_epi16(v77, *(__m128i *)&dword_140404A6C[18215697]);
      *(__m128i *)&dword_140404A6C[v4 + 606321] = v91;
      v93 = _mm_mulhi_epi16(_mm_load_si128((const __m128i *)&dword_140404A6C[18215701]), v77);
      v28 = v105 + v30;
      v94 = _mm_add_epi16(_mm_add_epi16(v90, v92), *(__m128i *)&dword_140404A6C[v4 + 606337]);
      v95 = _mm_load_si128((const __m128i *)&dword_140404A6C[18215653]);
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v94;
      v96 = _mm_add_epi16(v89, _mm_mulhi_epi16(v95, v74));
      v97 = _mm_load_si128((const __m128i *)&dword_140404A6C[18215685]);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_add_epi16(v96, *(__m128i *)&dword_140404A6C[v4 + 606325]);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = _mm_add_epi16(
                                                    _mm_add_epi16(v93, _mm_mulhi_epi16(v97, v75)),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606341]);
      *(float *)v97.m128i_i32 = (float)SLOWORD(dword_140404A6C[v4 + 606313]);
      *v52 = (float)((float)SLOWORD(dword_140404A6C[v4 + 606329]) * 0.000061035156) * *(float *)&v24;
      *(float *)v97.m128i_i32 = (float)(*(float *)v97.m128i_i32 * 0.000061035156) * *(float *)&v24;
      *(float *)&v24 = *(float *)&v24 + v99;
      *(v52 - 1) = *(float *)v97.m128i_i32;
      result = ((unsigned __int8)dword_140404A6C[v4 + 606345] + 1) & 0x3F;
      dword_140404A6C[v4 + 606345] = result;
      v52 += 2;
      v105 = v105 + v30;
      v50 = v102 + v12;
      v25 = v106 + v100;
      v49 = v103 + v101;
      v102 = v102 + v12;
      v106 = v106 + v100;
      v103 = v103 + v101;
      --v47;
    }
    while ( v47 );
  }
  dword_140404A6C[v4 + 606413] = v22;
  dword_140404A6C[v4 + 606414] = v10;
  *(float *)&dword_140404A6C[v4 + 606410] = v25;
  dword_140404A6C[v4 + 606416] = v24;
  *(float *)&dword_140404A6C[v4 + 606415] = v28;
  *(float *)&dword_140404A6C[v4 + 606411] = v49;
  dword_140404A6C[v4 + 606412] = v20;
  return result;
}

