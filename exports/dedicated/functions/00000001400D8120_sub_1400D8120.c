/* Address: 0x1400d8120 | Name: sub_1400D8120 | Size: 1774 bytes */
_BOOL8 __fastcall sub_1400D8120(int a1, float *a2, float a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  int v6; // r14d
  int v7; // esi
  int *v8; // rdi
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm15_4
  __int64 v13; // rax
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  __int64 v25; // rax
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  __int64 v29; // rax
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm8_4
  float v36; // xmm3_4
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm12_4
  float v41; // xmm13_4
  float v42; // xmm11_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm6_4
  float v46; // xmm5_4
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  float v52; // [rsp+50h] [rbp-B8h]
  float v53; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+5Ch] [rbp-ACh]
  float v55[3]; // [rsp+68h] [rbp-A0h] BYREF
  float v56[4]; // [rsp+78h] [rbp-90h] BYREF
  float v57[4]; // [rsp+88h] [rbp-80h] BYREF
  float v58[6]; // [rsp+98h] [rbp-70h] BYREF
  float v59; // [rsp+188h] [rbp+80h] BYREF
  float v60; // [rsp+190h] [rbp+88h]
  float v61; // [rsp+198h] [rbp+90h]

  v3 = a1;
  v4 = 5210LL * a1;
  v6 = (int)a2;
  if ( (float)(*a2 + a3) < *(float *)&dword_16E6A3C60[v4 + 44] )
    return 0;
  if ( (float)(a2[1] + a3) < *(float *)&dword_16E6A3C60[v4 + 45] )
    return 0;
  if ( (float)(a2[2] + a3) < *(float *)&dword_16E6A3C60[v4 + 46] )
    return 0;
  if ( (float)(*a2 - a3) > *(float *)&dword_16E6A3C60[v4 + 47] )
    return 0;
  if ( (float)(a2[1] - a3) > *(float *)&dword_16E6A3C60[v4 + 48] )
    return 0;
  if ( (float)(a2[2] - a3) > *(float *)&dword_16E6A3C60[v4 + 49] )
    return 0;
  v7 = 0;
  dword_16E18CA5C = 1199570944;
  if ( dword_16E6A3C60[v4 + 510] <= 0 )
    return 0;
  v8 = (int *)((char *)&unk_16E6A4464 + v4 * 4);
  do
  {
    if ( dword_16E6A3C60[v4 + 1] != 13 || v8[13] > 0 )
    {
      v9 = v4 * 4 + 16LL * *(v8 - 1);
      v10 = *(float *)((char *)&unk_16E6A6A60 + v9 + 4);
      v11 = *(float *)((char *)&unk_16E6A6A60 + v9 + 8);
      v12 = *(float *)((char *)&unk_16E6A6A60 + v9);
      v13 = *v8;
      v61 = v10;
      v56[1] = v10;
      v14 = v4 * 4 + 16 * v13;
      v60 = v11;
      v56[2] = v11;
      v56[0] = v12;
      v15 = *(float *)((char *)&unk_16E6A6A60 + v14);
      v16 = *(float *)((char *)&unk_16E6A6A60 + v14 + 4);
      v17 = *(float *)((char *)&unk_16E6A6A60 + v14 + 8);
      v18 = v4 * 4 + 16LL * v8[1];
      v57[1] = v16;
      v19 = v16 - v10;
      v57[2] = v17;
      v20 = v17 - v11;
      v57[0] = v15;
      v21 = v15 - v12;
      v22 = *(float *)((char *)&unk_16E6A6A60 + v18 + 4);
      v23 = *(float *)((char *)&unk_16E6A6A60 + v18 + 8);
      v24 = *(float *)((char *)&unk_16E6A6A60 + v18);
      v25 = v8[2];
      v55[1] = v22;
      v26 = v22 - v10;
      v55[2] = v23;
      v27 = v23 - v11;
      v55[0] = v24;
      v28 = v24 - v12;
      v29 = v4 * 4 + 16 * v25;
      v30 = *(float *)((char *)&unk_16E6A6A60 + v29);
      v31 = *(float *)((char *)&unk_16E6A6A60 + v29 + 4);
      v32 = *(float *)((char *)&unk_16E6A6A60 + v29 + 8);
      v33 = (float)(v26 * v20) - (float)(v27 * v19);
      v58[0] = v30;
      v58[1] = v31;
      v34 = (float)(v27 * v21) - (float)(v28 * v20);
      v58[2] = v32;
      v35 = (float)(v28 * v19) - (float)(v26 * v21);
      v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
      if ( v36 == 0.0 )
      {
        v51 = 0;
        v52 = 0.0;
      }
      else
      {
        *(float *)&v51 = v33 * (float)(1.0 / v36);
        *((float *)&v51 + 1) = v34 * (float)(1.0 / v36);
        v52 = v35 * (float)(1.0 / v36);
      }
      if ( (unsigned int)sub_1400DB7E0(
                           (unsigned int)&v53,
                           (unsigned int)&v51,
                           (unsigned int)&v59,
                           v6,
                           LODWORD(a3),
                           (__int64)v56,
                           (__int64)v57,
                           (__int64)v55)
        && *(float *)&dword_16E18CA5C > v59 )
      {
        v37 = v4 * 4 + 16LL * *(v8 - 1);
        flt_16E18CA40 = v53;
        qword_16E18CA44 = v54;
        v38 = 5210 * v3 + *(int *)((char *)&dword_16E6A3C60[2947] + v37);
        qword_16E18CA4C = v51;
        flt_16E18CA54 = v52;
        dword_16E18CA74 = dword_16E6A3C60[v38 + 60];
        v39 = v4 * 4 + 16LL * *v8;
        dword_16E18CA5C = LODWORD(v59);
        dword_16E18CA70 = v7;
        dword_16E18CA78 = dword_16E6A3C60[5210 * v3 + 60 + *(int *)((char *)&dword_16E6A3C60[2947] + v39)];
        dword_16E18CA7C = dword_16E6A3C60[5210 * v3 + 60 + dword_16E6A3C60[4 * v8[1] + 2947 + v4]];
        sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, v56, v57, v55);
      }
      if ( *(v8 - 2) == 4 )
      {
        v40 = v31 - v61;
        v41 = v32 - v60;
        v42 = v30 - v12;
        v43 = (float)(v27 * v40) - (float)(v26 * v41);
        v44 = (float)(v28 * v41) - (float)(v27 * v42);
        v45 = (float)(v26 * v42) - (float)(v28 * v40);
        v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
        if ( v46 == 0.0 )
        {
          v51 = 0;
          v52 = 0.0;
        }
        else
        {
          *(float *)&v51 = v43 * (float)(1.0 / v46);
          *((float *)&v51 + 1) = v44 * (float)(1.0 / v46);
          v52 = v45 * (float)(1.0 / v46);
        }
        if ( (unsigned int)sub_1400DB7E0(
                             (unsigned int)&v53,
                             (unsigned int)&v51,
                             (unsigned int)&v59,
                             v6,
                             LODWORD(a3),
                             (__int64)v56,
                             (__int64)v55,
                             (__int64)v58) )
        {
          if ( *(float *)&dword_16E18CA5C > v59 )
          {
            v47 = v4 * 4 + 16LL * *(v8 - 1);
            flt_16E18CA40 = v53;
            qword_16E18CA44 = v54;
            v48 = 5210 * v3 + *(int *)((char *)&dword_16E6A3C60[2947] + v47);
            qword_16E18CA4C = v51;
            flt_16E18CA54 = v52;
            dword_16E18CA74 = dword_16E6A3C60[v48 + 60];
            v49 = v4 * 4 + 16LL * v8[1];
            dword_16E18CA5C = LODWORD(v59);
            dword_16E18CA70 = v7;
            dword_16E18CA78 = dword_16E6A3C60[5210 * v3 + 60 + *(int *)((char *)&dword_16E6A3C60[2947] + v49)];
            dword_16E18CA7C = dword_16E6A3C60[5210 * v3 + 60 + dword_16E6A3C60[4 * v8[2] + 2947 + v4]];
            sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, v56, v55, v58);
          }
        }
      }
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < dword_16E6A3C60[v4 + 510] );
  return *(float *)&dword_16E18CA5C < 65536.0;
}

