/* Address: 0x140191360 | Name: sub_140191360 | Size: 1724 bytes */
__int64 __fastcall sub_140191360(float *a1, int a2)
{
  float v4; // edx
  int v5; // xmm5_4
  int v6; // xmm9_4
  int v7; // xmm10_4
  __int64 v8; // rcx
  int v9; // xmm0_4
  int v10; // xmm2_4
  int v11; // xmm4_4
  __int64 v12; // rax
  int v13; // xmm14_4
  int v14; // xmm15_4
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
  unsigned int v26; // xmm6_4
  unsigned int v27; // xmm7_4
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
  unsigned int v41; // [rsp+2Ch] [rbp-CCh]
  unsigned int v42; // [rsp+30h] [rbp-C8h]
  unsigned int v43; // [rsp+34h] [rbp-C4h]
  unsigned int v44; // [rsp+38h] [rbp-C0h]
  float v45; // [rsp+3Ch] [rbp-BCh]
  float v46; // [rsp+100h] [rbp+8h]
  float v47; // [rsp+108h] [rbp+10h] BYREF
  int v48; // [rsp+110h] [rbp+18h]
  int v49; // [rsp+118h] [rbp+20h]

  sub_140115AE0(&v47, a2);
  v4 = v47;
  v5 = dword_1402B2610[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]];
  v6 = dword_1402B2614[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]];
  v7 = SLODWORD(dword_1402B2618[3 * dword_1402B2660[3 * (LOBYTE(v47) & 7)]]);
  v8 = 3LL * dword_1402B2664[3 * (LOBYTE(v47) & 7)];
  dword_140404A6C[349900629] = v5;
  v9 = dword_1402B2614[v8];
  v10 = SLODWORD(dword_1402B2618[v8]);
  v11 = dword_1402B2610[v8];
  v12 = dword_1402B2668[3 * (LOBYTE(v47) & 7)];
  dword_140404A6C[349900630] = v6;
  dword_140404A6C[349900631] = v7;
  dword_140404A6C[349900632] = v11;
  v47 = *(float *)&v9;
  v13 = dword_1402B2610[3 * v12];
  v14 = dword_1402B2614[3 * v12];
  v15 = SLODWORD(dword_1402B2618[3 * v12]);
  v16 = 3;
  dword_140404A6C[349900633] = v9;
  v46 = *(float *)&v10;
  dword_140404A6C[349900634] = v10;
  v48 = v13;
  dword_140404A6C[349900635] = v13;
  v49 = v14;
  dword_140404A6C[349900636] = v14;
  v39 = v15;
  dword_140404A6C[349900637] = v15;
  if ( a2 > 3 )
  {
    while ( 1 )
    {
      v17 = *(float *)&v9 + *(float *)&v6;
      v18 = *(float *)&v15 + *(float *)&v10;
      v19 = *(float *)&v14 + *(float *)&v9;
      v20 = *(float *)&v11 + *(float *)&v5;
      v21 = *(float *)&v10 + *(float *)&v7;
      v22 = *(float *)&v13 + *(float *)&v11;
      v23 = *(float *)&v13 + *(float *)&v5;
      v45 = *(float *)&v15 + *(float *)&v7;
      v24 = *(float *)&v14 + *(float *)&v6;
      v25 = fsqrt((float)((float)(v17 * v17) + (float)(v20 * v20)) + (float)(v21 * v21));
      if ( v25 == 0.0 )
      {
        dword_140404A6C[349900638] = 0;
        v26 = 0;
        dword_140404A6C[349900639] = 0;
        v27 = 0;
        dword_140404A6C[349900640] = 0;
        v28 = 0.0;
        v40 = 0;
        *(float *)&v41 = 0.0;
      }
      else
      {
        *(float *)&v26 = v20 * (float)(1.0 / v25);
        *(float *)&v27 = v17 * (float)(1.0 / v25);
        v28 = v21 * (float)(1.0 / v25);
        dword_140404A6C[349900638] = v26;
        dword_140404A6C[349900639] = v27;
        *(float *)&dword_140404A6C[349900640] = v28;
        v40 = __PAIR64__(v27, v26);
        *(float *)&v41 = v28;
      }
      v29 = fsqrt((float)((float)(v19 * v19) + (float)(v22 * v22)) + (float)(v18 * v18));
      if ( v29 == 0.0 )
      {
        dword_140404A6C[349900641] = 0;
        v30 = 0.0;
        dword_140404A6C[349900642] = 0;
        v31 = 0.0;
        dword_140404A6C[349900643] = 0;
        v32 = 0.0;
        *(float *)&v42 = 0.0;
        *(float *)&v43 = 0.0;
        *(float *)&v44 = 0.0;
      }
      else
      {
        v30 = v22 * (float)(1.0 / v29);
        v31 = v19 * (float)(1.0 / v29);
        v32 = v18 * (float)(1.0 / v29);
        *(float *)&dword_140404A6C[349900641] = v30;
        *(float *)&dword_140404A6C[349900642] = v31;
        *(float *)&dword_140404A6C[349900643] = v32;
        *(float *)&v42 = v30;
        *(float *)&v43 = v31;
        *(float *)&v44 = v32;
      }
      v33 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v45 * v45));
      if ( v33 == 0.0 )
      {
        *(_QWORD *)&dword_140404A6C[349900644] = 0;
        *(float *)&v13 = 0.0;
        dword_140404A6C[349900646] = 0;
        *(float *)&v14 = 0.0;
        *(float *)&v15 = 0.0;
      }
      else
      {
        *(float *)&v13 = v23 * (float)(1.0 / v33);
        *(float *)&v14 = v24 * (float)(1.0 / v33);
        *(float *)&v15 = v45 * (float)(1.0 / v33);
        dword_140404A6C[349900644] = v13;
        dword_140404A6C[349900645] = v14;
        dword_140404A6C[349900646] = v15;
      }
      v34 = (LODWORD(v4) >> v16) & 3;
      if ( !v34 )
      {
        v11 = v40;
        v47 = *((float *)&v40 + 1);
        v46 = *(float *)&v41;
        dword_140404A6C[349900634] = v41;
        v48 = v13;
        dword_140404A6C[349900635] = v13;
        v49 = v14;
        dword_140404A6C[349900636] = v14;
        *(_QWORD *)&dword_140404A6C[349900632] = v40;
        v39 = v15;
        dword_140404A6C[349900637] = v15;
      }
      if ( v34 == 1 )
        break;
      if ( v34 == 2 )
      {
        v9 = v43;
        v5 = v13;
        v10 = v44;
        v6 = v14;
        v11 = v42;
        v7 = v15;
        v13 = v48;
        dword_140404A6C[349900630] = v14;
        v14 = v49;
        dword_140404A6C[349900631] = v15;
        v15 = v39;
        dword_140404A6C[349900629] = v5;
        dword_140404A6C[349900632] = v42;
        v47 = *(float *)&v43;
        dword_140404A6C[349900633] = v43;
        v46 = *(float *)&v44;
        dword_140404A6C[349900634] = v44;
      }
      else
      {
        if ( v34 != 3 )
        {
          v13 = v48;
          v14 = v49;
          v15 = v39;
          goto LABEL_20;
        }
        *(float *)&v9 = v31;
        dword_140404A6C[349900629] = v26;
        *(float *)&v10 = v32;
        v47 = v31;
        *(float *)&v11 = v30;
        *(float *)&dword_140404A6C[349900633] = v31;
        *(float *)&dword_140404A6C[349900632] = v30;
        v5 = v26;
        v46 = v32;
        v6 = v27;
        *(float *)&dword_140404A6C[349900634] = v32;
        *(float *)&v7 = v28;
        dword_140404A6C[349900630] = v27;
        *(float *)&dword_140404A6C[349900631] = v28;
        v48 = v13;
        dword_140404A6C[349900635] = v13;
        v49 = v14;
        dword_140404A6C[349900636] = v14;
        v39 = v15;
        dword_140404A6C[349900637] = v15;
      }
LABEL_21:
      v16 += 2;
      if ( v16 >= a2 )
        goto LABEL_22;
    }
    v13 = v42;
    v14 = v43;
    v15 = v44;
    v5 = v40;
    v6 = SHIDWORD(v40);
    v7 = v41;
    *(_QWORD *)&dword_140404A6C[349900629] = v40;
    dword_140404A6C[349900631] = v41;
    v48 = v42;
    dword_140404A6C[349900635] = v42;
    v49 = v43;
    dword_140404A6C[349900636] = v43;
    v39 = v44;
    dword_140404A6C[349900637] = v44;
LABEL_20:
    *(float *)&v10 = v46;
    *(float *)&v9 = v47;
    goto LABEL_21;
  }
LABEL_22:
  v35 = *(float *)&v11 + *(float *)&v5;
  *a1 = v35;
  v36 = *(float *)&dword_140404A6C[349900633] + *(float *)&dword_140404A6C[349900630];
  a1[1] = *(float *)&dword_140404A6C[349900633] + *(float *)&dword_140404A6C[349900630];
  v37 = *(float *)&dword_140404A6C[349900634] + *(float *)&dword_140404A6C[349900631];
  a1[2] = *(float *)&dword_140404A6C[349900634] + *(float *)&dword_140404A6C[349900631];
  *a1 = v35 + *(float *)&dword_140404A6C[349900635];
  a1[1] = v36 + *(float *)&dword_140404A6C[349900636];
  a1[2] = v37 + *(float *)&dword_140404A6C[349900637];
  return sub_14007A240((__int64)a1, a1);
}

