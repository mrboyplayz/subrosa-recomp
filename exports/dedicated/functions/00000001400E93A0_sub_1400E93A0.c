/* Address: 0x1400e93a0 | Name: sub_1400E93A0 | Size: 1724 bytes */
__int64 __fastcall sub_1400E93A0(float *a1, int a2)
{
  float v4; // edx
  float v5; // xmm5_4
  float v6; // xmm9_4
  int v7; // xmm10_4
  __int64 v8; // rcx
  float v9; // xmm0_4
  int v10; // xmm2_4
  float v11; // xmm4_4
  __int64 v12; // rax
  float v13; // xmm14_4
  float v14; // xmm15_4
  int v15; // xmm1_4
  int v16; // ecx
  float v17; // xmm7_4
  float v18; // xmm13_4
  float v19; // xmm12_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm11_4
  float v23; // xmm14_4
  float v24; // xmm15_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  float v33; // xmm1_4
  int v34; // eax
  float v35; // xmm4_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  int v39; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v40; // [rsp+24h] [rbp-D4h]
  int v41; // [rsp+2Ch] [rbp-CCh]
  unsigned __int64 v42; // [rsp+30h] [rbp-C8h]
  int v43; // [rsp+38h] [rbp-C0h]
  float v44; // [rsp+3Ch] [rbp-BCh]
  int v45; // [rsp+100h] [rbp+8h]
  float v46; // [rsp+108h] [rbp+10h] BYREF
  float v47; // [rsp+110h] [rbp+18h]
  float v48; // [rsp+118h] [rbp+20h]

  sub_1400AFB00(&v46, a2);
  v4 = v46;
  v5 = *(float *)&dword_140104020[3 * dword_140104070[3 * (LOBYTE(v46) & 7)]];
  v6 = *(float *)&dword_140104024[3 * dword_140104070[3 * (LOBYTE(v46) & 7)]];
  v7 = SLODWORD(dword_140104028[3 * dword_140104070[3 * (LOBYTE(v46) & 7)]]);
  v8 = 3LL * dword_140104074[3 * (LOBYTE(v46) & 7)];
  *(float *)&qword_196ABD300 = v5;
  v9 = *(float *)&dword_140104024[v8];
  v10 = SLODWORD(dword_140104028[v8]);
  v11 = *(float *)&dword_140104020[v8];
  v12 = dword_140104078[3 * (LOBYTE(v46) & 7)];
  *((float *)&qword_196ABD300 + 1) = v6;
  dword_196ABD308 = v7;
  *(float *)&qword_196ABD30C = v11;
  v46 = v9;
  v13 = *(float *)&dword_140104020[3 * v12];
  v14 = *(float *)&dword_140104024[3 * v12];
  v15 = SLODWORD(dword_140104028[3 * v12]);
  v16 = 3;
  *((float *)&qword_196ABD30C + 1) = v9;
  v45 = v10;
  dword_196ABD314 = v10;
  v47 = v13;
  *(float *)&qword_196ABD318 = v13;
  v48 = v14;
  *((float *)&qword_196ABD318 + 1) = v14;
  v39 = v15;
  dword_196ABD320 = v15;
  if ( a2 > 3 )
  {
    while ( 1 )
    {
      v17 = v9 + v6;
      v18 = *(float *)&v15 + *(float *)&v10;
      v19 = v14 + v9;
      v20 = v11 + v5;
      v21 = *(float *)&v10 + *(float *)&v7;
      v22 = v13 + v11;
      v23 = v13 + v5;
      v44 = *(float *)&v15 + *(float *)&v7;
      v24 = v14 + v6;
      v25 = fsqrt((float)((float)(v17 * v17) + (float)(v20 * v20)) + (float)(v21 * v21));
      if ( v25 == 0.0 )
      {
        qword_196ABD324 = 0;
        v26 = 0.0;
        v27 = 0.0;
        dword_196ABD32C = 0;
        v28 = 0.0;
        v40 = 0;
        *(float *)&v41 = 0.0;
      }
      else
      {
        v26 = v20 * (float)(1.0 / v25);
        v27 = v17 * (float)(1.0 / v25);
        v28 = v21 * (float)(1.0 / v25);
        *(float *)&qword_196ABD324 = v26;
        *((float *)&qword_196ABD324 + 1) = v27;
        dword_196ABD32C = LODWORD(v28);
        v40 = __PAIR64__(LODWORD(v27), LODWORD(v26));
        *(float *)&v41 = v28;
      }
      v29 = fsqrt((float)((float)(v19 * v19) + (float)(v22 * v22)) + (float)(v18 * v18));
      if ( v29 == 0.0 )
      {
        qword_196ABD330 = 0;
        v30 = 0.0;
        v31 = 0.0;
        dword_196ABD338 = 0;
        v32 = 0.0;
        v42 = 0;
        *(float *)&v43 = 0.0;
      }
      else
      {
        v30 = v22 * (float)(1.0 / v29);
        v31 = v19 * (float)(1.0 / v29);
        v32 = v18 * (float)(1.0 / v29);
        *(float *)&qword_196ABD330 = v30;
        *((float *)&qword_196ABD330 + 1) = v31;
        dword_196ABD338 = LODWORD(v32);
        v42 = __PAIR64__(LODWORD(v31), LODWORD(v30));
        *(float *)&v43 = v32;
      }
      v33 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v44 * v44));
      if ( v33 == 0.0 )
      {
        qword_196ABD33C = 0;
        v13 = 0.0;
        dword_196ABD344 = 0;
        v14 = 0.0;
        *(float *)&v15 = 0.0;
      }
      else
      {
        v13 = v23 * (float)(1.0 / v33);
        v14 = v24 * (float)(1.0 / v33);
        *(float *)&v15 = v44 * (float)(1.0 / v33);
        *(float *)&qword_196ABD33C = v13;
        *((float *)&qword_196ABD33C + 1) = v14;
        dword_196ABD344 = v15;
      }
      v34 = (LODWORD(v4) >> v16) & 3;
      if ( !v34 )
      {
        v11 = *(float *)&v40;
        v46 = *((float *)&v40 + 1);
        v45 = v41;
        dword_196ABD314 = v41;
        v47 = v13;
        *(float *)&qword_196ABD318 = v13;
        v48 = v14;
        *((float *)&qword_196ABD318 + 1) = v14;
        qword_196ABD30C = v40;
        v39 = v15;
        dword_196ABD320 = v15;
      }
      if ( v34 == 1 )
        break;
      if ( v34 == 2 )
      {
        v9 = *((float *)&v42 + 1);
        v5 = v13;
        v10 = v43;
        v6 = v14;
        v11 = *(float *)&v42;
        v7 = v15;
        v13 = v47;
        *((float *)&qword_196ABD300 + 1) = v14;
        v14 = v48;
        dword_196ABD308 = v15;
        v15 = v39;
        *(float *)&qword_196ABD300 = v5;
        qword_196ABD30C = v42;
        v46 = *((float *)&v42 + 1);
        v45 = v43;
        dword_196ABD314 = v43;
      }
      else
      {
        if ( v34 != 3 )
        {
          v13 = v47;
          v14 = v48;
          v15 = v39;
          goto LABEL_20;
        }
        v9 = v31;
        *(float *)&qword_196ABD300 = v26;
        *(float *)&v10 = v32;
        v46 = v31;
        v11 = v30;
        *((float *)&qword_196ABD30C + 1) = v31;
        *(float *)&qword_196ABD30C = v30;
        v5 = v26;
        *(float *)&v45 = v32;
        v6 = v27;
        dword_196ABD314 = LODWORD(v32);
        *(float *)&v7 = v28;
        *((float *)&qword_196ABD300 + 1) = v27;
        dword_196ABD308 = LODWORD(v28);
        v47 = v13;
        *(float *)&qword_196ABD318 = v13;
        v48 = v14;
        *((float *)&qword_196ABD318 + 1) = v14;
        v39 = v15;
        dword_196ABD320 = v15;
      }
LABEL_21:
      v16 += 2;
      if ( v16 >= a2 )
        goto LABEL_22;
    }
    v13 = *(float *)&v42;
    v14 = *((float *)&v42 + 1);
    v15 = v43;
    v5 = *(float *)&v40;
    v6 = *((float *)&v40 + 1);
    v7 = v41;
    qword_196ABD300 = v40;
    dword_196ABD308 = v41;
    __SET_PAIR__(LODWORD(v48), LODWORD(v47), v42);
    qword_196ABD318 = v42;
    v39 = v43;
    dword_196ABD320 = v43;
LABEL_20:
    v10 = v45;
    v9 = v46;
    goto LABEL_21;
  }
LABEL_22:
  v35 = v11 + v5;
  *a1 = v35;
  v36 = *((float *)&qword_196ABD30C + 1) + *((float *)&qword_196ABD300 + 1);
  a1[1] = *((float *)&qword_196ABD30C + 1) + *((float *)&qword_196ABD300 + 1);
  v37 = *(float *)&dword_196ABD314 + *(float *)&dword_196ABD308;
  a1[2] = *(float *)&dword_196ABD314 + *(float *)&dword_196ABD308;
  *a1 = v35 + *(float *)&qword_196ABD318;
  a1[1] = v36 + *((float *)&qword_196ABD318 + 1);
  a1[2] = v37 + *(float *)&dword_196ABD320;
  return sub_140049260((__int64)a1, a1);
}

