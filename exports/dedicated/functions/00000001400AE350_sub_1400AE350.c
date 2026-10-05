/* Address: 0x1400ae350 | Name: sub_1400AE350 | Size: 1972 bytes */
double __fastcall sub_1400AE350(float *a1, int a2)
{
  int v2; // r8d
  bool v5; // cc
  __int64 v6; // rax
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm2_4
  __int64 v10; // rcx
  __int128 v11; // xmm5
  int v12; // xmm6_4
  int v13; // xmm7_4
  __int64 v14; // rax
  __int128 v15; // xmm12
  __int128 v16; // xmm13
  __int128 v17; // xmm14
  int v18; // ecx
  int v19; // edx
  float v20; // xmm3_4
  float v21; // xmm4_4
  __int128 v22; // xmm15
  float v23; // xmm14_4
  float v24; // xmm12_4
  float v25; // xmm13_4
  __int128 v26; // xmm9
  __int128 v27; // xmm10
  __int128 v28; // xmm11
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm5_4
  float v37; // xmm7_4
  float v38; // xmm1_4
  float v39; // xmm4_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm7_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v49; // [rsp+20h] [rbp-C8h]
  float v50; // [rsp+24h] [rbp-C4h]
  unsigned int v51; // [rsp+28h] [rbp-C0h]
  int v52; // [rsp+2Ch] [rbp-BCh]
  int v53; // [rsp+30h] [rbp-B8h]
  unsigned int v54; // [rsp+34h] [rbp-B4h]
  unsigned int v55; // [rsp+38h] [rbp-B0h]
  unsigned int v56; // [rsp+3Ch] [rbp-ACh]
  float v57; // [rsp+F0h] [rbp+8h]
  int v58; // [rsp+F8h] [rbp+10h] BYREF
  float v59; // [rsp+100h] [rbp+18h]
  int v60; // [rsp+108h] [rbp+20h]

  v2 = 0;
  v5 = *a1 >= 0.0;
  v58 = 0;
  v6 = 0;
  if ( !v5 )
  {
    v2 = 1;
    v58 = 1;
    v6 = 1;
  }
  if ( a1[2] < 0.0 )
  {
    v2 = v6 | 2;
    v58 = v6 | 2;
    v6 = (unsigned int)v6 | 2;
  }
  if ( a1[1] < 0.0 )
  {
    v2 = v6 | 4;
    v58 = v6 | 4;
    v6 = (unsigned int)v6 | 4;
  }
  v7 = dword_140104020[3 * dword_140104070[3 * v6]];
  v8 = dword_140104024[3 * dword_140104070[3 * v6]];
  v9 = dword_140104028[3 * dword_140104070[3 * v6]];
  v10 = 3LL * dword_140104074[3 * v6];
  v60 = v7;
  v11 = (unsigned int)dword_140104020[v10];
  v12 = dword_140104024[v10];
  v13 = dword_140104028[v10];
  v14 = dword_140104078[3 * v6];
  dword_196ABD300 = v7;
  v49 = *(float *)&v8;
  dword_196ABD304 = v8;
  v50 = *(float *)&v9;
  v15 = (unsigned int)dword_140104020[3 * v14];
  v16 = (unsigned int)dword_140104024[3 * v14];
  v17 = (unsigned int)dword_140104028[3 * v14];
  v18 = 3;
  dword_196ABD308 = v9;
  v51 = v11;
  dword_196ABD30C = v11;
  v52 = v12;
  dword_196ABD310 = v12;
  v53 = v13;
  dword_196ABD314 = v13;
  v54 = v15;
  dword_196ABD318 = v15;
  v55 = v16;
  dword_196ABD31C = v16;
  v56 = v17;
  dword_196ABD320 = v17;
  if ( a2 > 3 )
  {
    v19 = 8;
    while ( 1 )
    {
      v22 = v11;
      v20 = *(float *)&v12 + *(float *)&v8;
      v21 = *(float *)&v13 + *(float *)&v9;
      v26 = v15;
      *(float *)&v22 = *(float *)&v11 + *(float *)&v7;
      v28 = v17;
      v23 = *(float *)&v17 + *(float *)&v9;
      v27 = v16;
      v24 = *(float *)&v15 + *(float *)&v7;
      v25 = *(float *)&v16 + *(float *)&v8;
      *(float *)&v26 = *(float *)&v26 + *(float *)&v11;
      *(float *)&v27 = *(float *)&v27 + *(float *)&v12;
      *(float *)&v28 = *(float *)&v28 + *(float *)&v13;
      v29 = fsqrt((float)((float)(v20 * v20) + (float)(*(float *)&v22 * *(float *)&v22)) + (float)(v21 * v21));
      if ( v29 == 0.0 )
      {
        qword_196ABD324 = 0;
        v22 = 0;
        dword_196ABD32C = 0;
        v30 = 0.0;
        v31 = 0.0;
      }
      else
      {
        *(float *)&v22 = *(float *)&v22 * (float)(1.0 / v29);
        v30 = v20 * (float)(1.0 / v29);
        v31 = v21 * (float)(1.0 / v29);
        LODWORD(qword_196ABD324) = v22;
        *((float *)&qword_196ABD324 + 1) = v30;
        dword_196ABD32C = LODWORD(v31);
      }
      v59 = v31;
      v57 = v30;
      v32 = fsqrt(
              (float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(*(float *)&v26 * *(float *)&v26))
            + (float)(*(float *)&v28 * *(float *)&v28));
      if ( v32 == 0.0 )
      {
        qword_196ABD330 = 0;
        v26 = 0;
        dword_196ABD338 = 0;
        v27 = 0;
        v28 = 0;
      }
      else
      {
        *(float *)&v26 = *(float *)&v26 * (float)(1.0 / v32);
        *(float *)&v27 = *(float *)&v27 * (float)(1.0 / v32);
        *(float *)&v28 = *(float *)&v28 * (float)(1.0 / v32);
        LODWORD(qword_196ABD330) = v26;
        HIDWORD(qword_196ABD330) = v27;
        dword_196ABD338 = v28;
      }
      v33 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v23 * v23));
      if ( v33 == 0.0 )
      {
        qword_196ABD33C = 0;
        v15 = 0;
        dword_196ABD344 = 0;
        v16 = 0;
        v17 = 0;
      }
      else
      {
        *(float *)&v15 = v24 * (float)(1.0 / v33);
        *(float *)&v16 = v25 * (float)(1.0 / v33);
        *(float *)&v17 = v23 * (float)(1.0 / v33);
        LODWORD(qword_196ABD33C) = v15;
        HIDWORD(qword_196ABD33C) = v16;
        dword_196ABD344 = v17;
      }
      v34 = v30 - *(float *)&v16;
      v35 = a1[2] - *(float *)&v17;
      v36 = a1[1] - *(float *)&v16;
      v37 = *a1 - *(float *)&v15;
      v38 = v31 - *(float *)&v17;
      v39 = v34 * v35;
      v40 = (float)(*(float *)&v22 - *(float *)&v15) * v35;
      v41 = a1[1];
      v42 = (float)((float)(v39 - (float)(v38 * v36)) * *a1) + (float)((float)((float)(v38 * v37) - v40) * v41);
      v43 = a1[2];
      if ( (float)(v42
                 + (float)((float)((float)((float)(*(float *)&v22 - *(float *)&v15) * v36) - (float)(v34 * v37)) * v43)) > 0.0 )
        break;
      v44 = a1[1];
      if ( (float)((float)((float)((float)((float)((float)(*(float *)&v27 - v57) * (float)(v43 - v59))
                                         - (float)((float)(*(float *)&v28 - v59) * (float)(v41 - v57)))
                                 * *a1)
                         + (float)((float)((float)((float)(*(float *)&v28 - v59) * (float)(*a1 - *(float *)&v22))
                                         - (float)((float)(*(float *)&v26 - *(float *)&v22) * (float)(v43 - v59)))
                                 * v44))
                 + (float)((float)((float)((float)(*(float *)&v26 - *(float *)&v22) * (float)(v41 - v57))
                                 - (float)((float)(*(float *)&v27 - v57) * (float)(*a1 - *(float *)&v22)))
                         * a1[2])) <= 0.0 )
      {
        v45 = *a1 - *(float *)&v26;
        v46 = (float)(*(float *)&v17 - *(float *)&v28) * v45;
        v47 = (float)(*(float *)&v16 - *(float *)&v27) * v45;
        v13 = v28;
        v11 = v26;
        v12 = v27;
        if ( (float)((float)((float)((float)((float)((float)(*(float *)&v16 - *(float *)&v27)
                                                   * (float)(a1[2] - *(float *)&v28))
                                           - (float)((float)(*(float *)&v17 - *(float *)&v28)
                                                   * (float)(v44 - *(float *)&v27)))
                                   * *a1)
                           + (float)((float)(v46
                                           - (float)((float)(*(float *)&v15 - *(float *)&v26)
                                                   * (float)(a1[2] - *(float *)&v28)))
                                   * a1[1]))
                   + (float)((float)((float)((float)(*(float *)&v15 - *(float *)&v26) * (float)(v44 - *(float *)&v27))
                                   - v47)
                           * a1[2])) > 0.0 )
        {
          v7 = v15;
          v8 = v16;
          v15 = v54;
          v9 = v17;
          v16 = v55;
          v17 = v56;
          v2 |= 2 << v18;
          v60 = v7;
          v58 = v2;
          dword_196ABD300 = v7;
          v49 = *(float *)&v8;
          dword_196ABD304 = v8;
          v50 = *(float *)&v9;
          dword_196ABD308 = v9;
LABEL_26:
          v51 = v11;
          dword_196ABD30C = v11;
          v52 = v12;
          dword_196ABD310 = v12;
          v53 = v13;
          dword_196ABD314 = v13;
          goto LABEL_27;
        }
        *(float *)&v8 = v57;
        v7 = v22;
        *(float *)&v9 = v59;
        v2 |= 3 << v18;
        v60 = v22;
        v58 = v2;
        dword_196ABD300 = v22;
        v49 = v57;
        dword_196ABD304 = LODWORD(v57);
        v50 = v59;
        dword_196ABD308 = LODWORD(v59);
LABEL_25:
        dword_196ABD320 = v17;
        v56 = v17;
        dword_196ABD31C = v16;
        v55 = v16;
        dword_196ABD318 = v15;
        v54 = v15;
        goto LABEL_26;
      }
      *(float *)&v8 = v57;
      v7 = v22;
      *(float *)&v9 = v59;
      v2 |= v19;
      v11 = v51;
      v15 = v26;
      v12 = v52;
      v16 = v27;
      v13 = v53;
      v17 = v28;
      v60 = v22;
      dword_196ABD300 = v22;
      v49 = v57;
      dword_196ABD304 = LODWORD(v57);
      v50 = v59;
      dword_196ABD308 = LODWORD(v59);
      v58 = v2;
      v54 = v26;
      dword_196ABD318 = v26;
      v55 = v27;
      dword_196ABD31C = v27;
      v56 = v28;
      dword_196ABD320 = v28;
LABEL_27:
      v18 += 2;
      v19 = __ROL4__(v19, 2);
      if ( v18 >= a2 )
        return sub_1400AFDB0(&v58, (unsigned int)a2);
    }
    *(float *)&v12 = v57;
    v11 = v22;
    *(float *)&v13 = v59;
    v7 = v60;
    *(float *)&v8 = v49;
    *(float *)&v9 = v50;
    goto LABEL_25;
  }
  return sub_1400AFDB0(&v58, (unsigned int)a2);
}

