/* Address: 0x140050d60 | Name: sub_140050D60 | Size: 1325 bytes */
__int64 __fastcall sub_140050D60(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int64 v17; // rbx
  float v18; // xmm14_4
  float v19; // xmm15_4
  __int64 v20; // r10
  float v21; // xmm2_4
  float *v22; // rdx
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rcx
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm8_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm6_4
  float v56; // [rsp+0h] [rbp-138h]
  __int64 v57; // [rsp+8h] [rbp-130h] BYREF
  float v58; // [rsp+10h] [rbp-128h]
  _OWORD v59[4]; // [rsp+20h] [rbp-118h]

  v59[0] = _mm_load_si128((const __m128i *)&xmmword_1400F79D0);
  v59[1] = _mm_load_si128((const __m128i *)&xmmword_1400F7A40);
  v3 = a2;
  v4 = 5210LL * a2;
  v5 = 60LL * dword_16E6A3D58[5210 * a2];
  v6 = 60LL * dword_16E6A3D5C[5210 * a2];
  v7 = 60LL * dword_16E6A3D64[5210 * a2];
  v8 = 60LL * dword_16E6A3D60[5210 * a2];
  v9 = 60LL * dword_16E6A3D78[5210 * a2];
  v10 = 60LL * dword_16E6A3D7C[5210 * a2];
  v11 = 60LL * dword_16E6A3D84[5210 * a2];
  v12 = 60LL * dword_16E6A3D80[v4];
  v13 = (float)((float)(*(float *)&dword_16E18CAF4[v5] + *(float *)&dword_16E18CAF4[v6])
              + (float)(*(float *)&dword_16E18CAF4[v7] + *(float *)&dword_16E18CAF4[v8]))
      + (float)((float)(*(float *)&dword_16E18CAF4[v11] + *(float *)&dword_16E18CAF4[v12])
              + (float)(*(float *)&dword_16E18CAF4[v9] + *(float *)&dword_16E18CAF4[v10]));
  v14 = (float)((float)(*(float *)&dword_16E18CAF4[v12 + 1] + *(float *)&dword_16E18CAF4[v11 + 1])
              + (float)(*(float *)&dword_16E18CAF4[v9 + 1] + *(float *)&dword_16E18CAF4[v10 + 1]))
      + (float)((float)(*(float *)&dword_16E18CAF4[v5 + 1] + *(float *)&dword_16E18CAF4[v6 + 1])
              + (float)(*(float *)&dword_16E18CAF4[v8 + 1] + *(float *)&dword_16E18CAF4[v7 + 1]));
  v15 = (float)(*(float *)&dword_16E18CAF4[v12 + 2] + *(float *)&dword_16E18CAF4[v11 + 2])
      + (float)(*(float *)&dword_16E18CAF4[v10 + 2] + *(float *)&dword_16E18CAF4[v9 + 2]);
  v16 = (float)(*(float *)&dword_16E18CAF4[v8 + 2] + *(float *)&dword_16E18CAF4[v7 + 2])
      + (float)(*(float *)&dword_16E18CAF4[v6 + 2] + *(float *)&dword_16E18CAF4[v5 + 2]);
  v17 = 5210 * v3;
  v18 = v13 * 0.125;
  v19 = v14 * 0.125;
  *(_QWORD *)a1 = 0;
  v20 = 0;
  v21 = (float)(v15 + v16) * 0.125;
  *(_DWORD *)(a1 + 8) = 0;
  v57 = 0;
  v58 = 0.0;
  v56 = v21;
  do
  {
    v22 = (float *)&v57;
    v23 = 5210 * v3 + *((int *)v59 + v20);
    v24 = 0;
    do
    {
      v25 = 60LL * dword_16E6A3D50[v23];
      v26 = *(float *)&dword_16E6A3CA4[v24 + 1 + v17];
      v27 = *(float *)&dword_16E6A3CA4[v24 + v17];
      v28 = *(float *)&dword_16E6A3CA4[v24 + 2 + v17];
      v29 = *(float *)&dword_16E18CAFC[v25] - v21;
      v30 = *(float *)&dword_16E18CAF4[v25] - v18;
      v31 = *(float *)&dword_16E18CAF8[v25] - v19;
      v32 = -(float)((float)((float)(v30 * v27) + (float)(v31 * v26)) + (float)(v29 * v28));
      v33 = (float)(v27 * v32) + v30;
      v34 = (float)(v28 * v32) + v29;
      v35 = (float)(v26 * v32) + v31;
      v36 = fsqrt((float)((float)(v35 * v35) + (float)(v33 * v33)) + (float)(v34 * v34));
      if ( v36 == 0.0 )
      {
        v37 = 0.0;
        v38 = 0.0;
        v39 = 0.0;
      }
      else
      {
        v37 = v33 * (float)(1.0 / v36);
        v38 = v35 * (float)(1.0 / v36);
        v39 = v34 * (float)(1.0 / v36);
      }
      v40 = *(float *)((char *)&unk_16E18CB0C + v25 * 4);
      v41 = *(float *)((char *)&unk_16E18CB14 + v25 * 4);
      v42 = *(float *)((char *)&unk_16E18CB10 + v25 * 4);
      v24 += 3;
      v43 = (float)(v37 * v41) - (float)(v39 * v40);
      v44 = v38;
      *v22 = v36 + *v22;
      v45 = v38 * v40;
      v21 = v56;
      *(float *)((char *)v22 + a1 - (_QWORD)&v57) = (float)((float)(v43 * v26)
                                                          + (float)((float)((float)(v39 * v42) - (float)(v44 * v41))
                                                                  * v27))
                                                  + (float)((float)((float)(v45 - (float)(v37 * v42)) * v28)
                                                          + *(float *)((char *)v22 + a1 - (_QWORD)&v57));
      ++v22;
    }
    while ( v24 < 9 );
    ++v20;
  }
  while ( v20 < 8 );
  v46 = *(float *)(a1 + 4) / *((float *)&v57 + 1);
  v47 = *(float *)(a1 + 8) / v58;
  v48 = *(float *)a1 / *(float *)&v57;
  *(float *)(a1 + 4) = v46;
  *(float *)(a1 + 8) = v47;
  *(float *)a1 = v48;
  v50 = v48 * *(float *)&dword_16E6A3CA4[5210 * v3];
  *(float *)a1 = v50;
  v51 = v48 * *(float *)&dword_16E6A3CA8[5210 * v3];
  *(float *)(a1 + 4) = v51;
  v52 = v48 * *(float *)&dword_16E6A3CAC[5210 * v3];
  *(float *)(a1 + 8) = v52;
  v53 = (float)(v46 * *(float *)&dword_16E6A3CB0[5210 * v3]) + v50;
  *(float *)a1 = v53;
  v54 = (float)(v46 * *(float *)&dword_16E6A3CB4[5210 * v3]) + v51;
  *(float *)(a1 + 4) = v54;
  v55 = (float)(v46 * *(float *)&dword_16E6A3CB8[5210 * v3]) + v52;
  *(float *)(a1 + 8) = v55;
  *(float *)a1 = (float)(v47 * *(float *)&dword_16E6A3CBC[5210 * v3]) + v53;
  *(float *)(a1 + 4) = (float)(v47 * *(float *)&dword_16E6A3CC0[5210 * v3]) + v54;
  *(float *)(a1 + 8) = (float)(v47 * *(float *)&dword_16E6A3CC4[5210 * v3]) + v55;
  return 20840 * v3;
}

