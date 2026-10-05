/* Address: 0x1400818e0 | Name: sub_1400818E0 | Size: 1010 bytes */
_BOOL8 __fastcall sub_1400818E0(int a1, float *a2, float *a3, float a4)
{
  int *v4; // rdi
  float v6; // xmm9_4
  int v7; // ebx
  float v8; // xmm10_4
  __int64 v9; // r14
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm14_4
  float v14; // xmm15_4
  __int64 v15; // r13
  float *v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm8_4
  __int64 v19; // rcx
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm10_4
  float v39; // xmm0_4
  float v40; // xmm10_4
  float v41; // xmm0_4
  float v43; // [rsp+48h] [rbp-C0h]
  float v44; // [rsp+4Ch] [rbp-BCh]
  float v45; // [rsp+54h] [rbp-B4h] BYREF
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  float v47; // [rsp+5Ch] [rbp-ACh]
  float v48; // [rsp+60h] [rbp-A8h]
  float v49[4]; // [rsp+68h] [rbp-A0h] BYREF
  float v50[4]; // [rsp+78h] [rbp-90h] BYREF
  float v51; // [rsp+88h] [rbp-80h] BYREF
  float v52; // [rsp+8Ch] [rbp-7Ch]
  float v53; // [rsp+90h] [rbp-78h]

  v4 = dword_1910415F8;
  v6 = v44;
  v7 = 0;
  v8 = v44;
  v9 = 0;
  v11 = v44;
  v12 = v44;
  v13 = 1.0;
  v14 = v44;
  dword_16E18CA58 = 1065353216;
  v15 = 7166LL * a1;
  v16 = (float *)&dword_190941BF4[v15];
  do
  {
    v17 = *((float *)v4 + 1) * -0.5;
    v18 = *((float *)v4 + 1) * 0.5;
    v19 = v15 * 4 + 12 * (v9 + *v4);
    v20 = *(float *)((char *)&xmmword_190941C1C + v19 + 4);
    v21 = *(float *)((char *)&xmmword_190941C1C + v19 + 8);
    v22 = (float)(*(float *)((char *)&xmmword_190941C1C + v19) * v18) + *(v16 - 2);
    v50[0] = (float)(*(float *)((char *)&xmmword_190941C1C + v19) * v17) + *(v16 - 2);
    v23 = (float)(v20 * v17) + *(v16 - 1);
    v49[0] = v22;
    v24 = (float)(v20 * v18) + *(v16 - 1);
    v50[1] = v23;
    v25 = (float)(v21 * v17) + *v16;
    v49[1] = v24;
    v26 = (float)(v21 * v18) + *v16;
    v50[2] = v25;
    v27 = a4 + *((float *)v4 + 2);
    v49[2] = v26;
    if ( sub_14007D360(&v51, &v46, &v45, a2, a3, v50, v49, v27) )
    {
      v28 = v51;
      v29 = v52;
      v30 = v46 - v51;
      v31 = v47 - v52;
      v14 = v53;
      v32 = v48 - v53;
      v44 = v51;
      v43 = v52;
      v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
      if ( v33 == 0.0 )
      {
        v11 = 0.0;
        v12 = 0.0;
        v6 = 0.0;
      }
      else
      {
        v11 = (float)(1.0 / v33) * v30;
        v12 = (float)(1.0 / v33) * v31;
        v6 = (float)(1.0 / v33) * v32;
      }
      v34 = *a3 - *a2;
      v35 = a3[1] - a2[1];
      v36 = a3[2] - a2[2];
      v37 = v53 - a2[2];
      v38 = (float)(v51 - *a2) * v34;
      v39 = (float)(v52 - a2[1]) * v35;
      v47 = v35;
      v40 = v38 + v39;
      v41 = v45;
      v46 = v34;
      v48 = v36;
      v8 = (float)(v40 + (float)(v37 * v36))
         / (float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    }
    else
    {
      v41 = 65536.0;
      v29 = v43;
      v28 = v44;
    }
    if ( v41 < 65536.0 && v13 > v8 )
    {
      flt_16E18CA40 = v28;
      v13 = v8;
      *(float *)&qword_16E18CA44 = v29;
      *((float *)&qword_16E18CA44 + 1) = v14;
      *(float *)&qword_16E18CA4C = v11;
      *((float *)&qword_16E18CA4C + 1) = v12;
      dword_16E18CA54 = LODWORD(v6);
      dword_16E18CA58 = LODWORD(v8);
      dword_16E18CA74 = v7;
    }
    ++v7;
    v9 += 26;
    v16 += 78;
    v4 += 25;
  }
  while ( v7 < 16 );
  return v13 < 1.0;
}

