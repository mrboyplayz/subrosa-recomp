/* Address: 0x140007d80 | Name: sub_140007D80 | Size: 1713 bytes */
char __fastcall sub_140007D80(int *a1, int a2, int a3, int a4, int a5, float a6)
{
  signed int v7; // esi
  __int64 v9; // r14
  float v10; // xmm14_4
  float v11; // xmm0_4
  float v12; // xmm13_4
  __int64 v14; // rax
  int v15; // ebx
  float v16; // xmm3_4
  float v17; // xmm4_4
  __int64 v18; // rax
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  float v28; // xmm14_4
  float *v29; // rcx
  float *v30; // rcx
  int v31; // r11d
  int v32; // r9d
  float *v33; // rcx
  int v34; // r8d
  float *v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  _DWORD *v38; // rcx
  int v39; // edi
  _DWORD *v40; // rcx
  int v41; // edx
  int v42; // edi
  int v43; // edx
  _DWORD *v44; // rcx
  int v45; // r11d
  int v46; // edx
  _DWORD *v47; // rcx
  float v49; // [rsp+D8h] [rbp+10h]
  float v50; // [rsp+E0h] [rbp+18h]
  float v51; // [rsp+F8h] [rbp+30h]

  v7 = 0;
  v9 = 0;
  v10 = (float)a4;
  v11 = (float)a2;
  v12 = (float)a3;
  v50 = (float)a4;
  v51 = (float)a2;
  v49 = (float)a3;
  do
  {
    LOBYTE(v14) = _bittest(&a5, v7);
    if ( ((((64 << v7) & a5) != 0) & (unsigned __int8)v14) == 0 || a1[8193] >= 1024 )
      goto LABEL_75;
    v15 = 0;
    v16 = (float)(v11 + *(float *)&dword_140147690[3 * dword_140147800[4 * v9]]) * a6;
    v17 = (float)(v12 + *(float *)&dword_140147694[3 * dword_140147800[4 * v9]]) * a6;
    v18 = *a1;
    v19 = (float)(v10 + *(float *)&dword_140147698[3 * dword_140147800[4 * v9]]) * a6;
    v20 = (float)(v11 + *(float *)&dword_140147690[3 * dword_140147804[4 * v9]]) * a6;
    v21 = (float)(v12 + *(float *)&dword_140147694[3 * dword_140147804[4 * v9]]) * a6;
    v22 = (float)(v10 + *(float *)&dword_140147698[3 * dword_140147804[4 * v9]]) * a6;
    v23 = (float)(v11 + *(float *)&dword_140147690[3 * dword_140147808[4 * v9]]) * a6;
    v24 = (float)(v12 + *(float *)&dword_140147694[3 * dword_140147808[4 * v9]]) * a6;
    v25 = (float)(v10 + *(float *)&dword_140147698[3 * dword_140147808[4 * v9]]) * a6;
    v26 = (float)(v11 + *(float *)&dword_140147690[3 * dword_14014780C[4 * v9]]) * a6;
    v27 = (float)(v12 + *(float *)&dword_140147694[3 * dword_14014780C[4 * v9]]) * a6;
    v28 = (float)(v10 + *(float *)&dword_140147698[3 * dword_14014780C[4 * v9]]) * a6;
    if ( (int)v18 <= 0 )
    {
LABEL_10:
      if ( (int)v18 < 2048 )
      {
        v18 *= 2;
        *(float *)&a1[2 * v18 + 2] = v16;
        *(float *)&a1[2 * v18 + 3] = v17;
        *(float *)&a1[2 * v18 + 4] = v19;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v15 = v18 - 1;
      if ( (int)v18 <= 0 )
      {
LABEL_18:
        if ( (int)v18 < 2048 )
        {
          v18 = 2LL * (int)v18;
          *(float *)&a1[2 * v18 + 2] = v20;
          *(float *)&a1[2 * v18 + 3] = v21;
          *(float *)&a1[2 * v18 + 4] = v22;
          LODWORD(v18) = *a1 + 1;
          *a1 = v18;
        }
        v31 = v18 - 1;
        goto LABEL_21;
      }
    }
    else
    {
      v29 = (float *)(a1 + 3);
      while ( fabs(v16 - *(v29 - 1)) >= 0.000061035156
           || fabs(v17 - *v29) >= 0.000061035156
           || fabs(v19 - v29[1]) >= 0.000061035156 )
      {
        ++v15;
        v29 += 4;
        if ( v15 >= (int)v18 )
          goto LABEL_10;
      }
    }
    v30 = (float *)(a1 + 3);
    v31 = 0;
    while ( fabs(v20 - *(v30 - 1)) >= 0.000061035156
         || fabs(v21 - *v30) >= 0.000061035156
         || fabs(v22 - v30[1]) >= 0.000061035156 )
    {
      LODWORD(v18) = *a1;
      ++v31;
      v30 += 4;
      if ( v31 >= *a1 )
        goto LABEL_18;
    }
LABEL_21:
    v32 = 0;
    if ( (int)v18 <= 0 )
    {
LABEL_27:
      if ( (int)v18 < 2048 )
      {
        v18 = 2LL * (int)v18;
        *(float *)&a1[2 * v18 + 2] = v23;
        *(float *)&a1[2 * v18 + 3] = v24;
        *(float *)&a1[2 * v18 + 4] = v25;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v32 = v18 - 1;
    }
    else
    {
      v33 = (float *)(a1 + 3);
      while ( fabs(v23 - *(v33 - 1)) >= 0.000061035156
           || fabs(v24 - *v33) >= 0.000061035156
           || fabs(v25 - v33[1]) >= 0.000061035156 )
      {
        LODWORD(v18) = *a1;
        ++v32;
        v33 += 4;
        if ( v32 >= *a1 )
          goto LABEL_27;
      }
    }
    v34 = 0;
    if ( (int)v18 <= 0 )
    {
LABEL_36:
      if ( (int)v18 < 2048 )
      {
        v18 = 2LL * (int)v18;
        *(float *)&a1[2 * v18 + 2] = v26;
        *(float *)&a1[2 * v18 + 3] = v27;
        *(float *)&a1[2 * v18 + 4] = v28;
        LODWORD(v18) = *a1 + 1;
        *a1 = v18;
      }
      v34 = v18 - 1;
    }
    else
    {
      v35 = (float *)(a1 + 3);
      while ( fabs(v26 - *(v35 - 1)) >= 0.000061035156
           || fabs(v27 - *v35) >= 0.000061035156
           || fabs(v28 - v35[1]) >= 0.000061035156 )
      {
        LODWORD(v18) = *a1;
        ++v34;
        v35 += 4;
        if ( v34 >= *a1 )
          goto LABEL_36;
      }
    }
    a1[8 * a1[8193] + 8194] = 4;
    a1[8 * a1[8193] + 8195] = v15;
    a1[8 * a1[8193] + 8196] = v31;
    a1[8 * a1[8193] + 8197] = v32;
    a1[8 * a1[8193] + 8198] = v34;
    v36 = 8LL * a1[8193];
    a1[v36 + 8199] = dword_1401476F0[3 * v9];
    a1[v36 + 8200] = dword_1401476F4[3 * v9];
    v37 = 0;
    a1[v36 + 8201] = dword_1401476F8[3 * v9];
    ++a1[8193];
    v14 = a1[16386];
    if ( (int)v14 > 0 )
    {
      v38 = a1 + 16388;
      while ( 1 )
      {
        v39 = *(v38 - 1);
        if ( v15 == v39 && v31 == *v38 )
          break;
        if ( v15 == *v38 && v31 == v39 )
          break;
        ++v37;
        v38 += 2;
        if ( v37 >= (int)v14 )
          goto LABEL_46;
      }
LABEL_49:
      v40 = a1 + 16388;
      v41 = 0;
      while ( 1 )
      {
        v42 = *(v40 - 1);
        if ( v31 == v42 && v32 == *v40 )
          goto LABEL_57;
        if ( v31 == *v40 && v32 == v42 )
          goto LABEL_57;
        LODWORD(v14) = a1[16386];
        ++v41;
        v40 += 2;
        if ( v41 >= (int)v14 )
          goto LABEL_55;
      }
    }
LABEL_46:
    if ( (int)v14 < 1024 )
    {
      a1[2 * v14 + 16387] = v15;
      a1[2 * a1[16386] + 16388] = v31;
      LODWORD(v14) = a1[16386] + 1;
      a1[16386] = v14;
    }
    if ( (int)v14 > 0 )
      goto LABEL_49;
LABEL_55:
    if ( (int)v14 < 1024 )
    {
      a1[2 * (int)v14 + 16387] = v31;
      a1[2 * a1[16386] + 16388] = v32;
      LODWORD(v14) = a1[16386] + 1;
      a1[16386] = v14;
    }
LABEL_57:
    v43 = 0;
    if ( (int)v14 <= 0 )
    {
LABEL_64:
      if ( (int)v14 < 1024 )
      {
        a1[2 * (int)v14 + 16387] = v32;
        a1[2 * a1[16386] + 16388] = v34;
        LODWORD(v14) = a1[16386] + 1;
        a1[16386] = v14;
      }
    }
    else
    {
      v44 = a1 + 16388;
      while ( 1 )
      {
        v45 = *(v44 - 1);
        if ( v32 == v45 && v34 == *v44 )
          break;
        if ( v32 == *v44 && v34 == v45 )
          break;
        LODWORD(v14) = a1[16386];
        ++v43;
        v44 += 2;
        if ( v43 >= (int)v14 )
          goto LABEL_64;
      }
    }
    v46 = 0;
    if ( (int)v14 <= 0 )
    {
LABEL_72:
      v11 = v51;
      v12 = v49;
      v10 = v50;
      if ( (int)v14 < 1024 )
      {
        a1[2 * (int)v14 + 16387] = v34;
        v14 = a1[16386];
        a1[2 * v14 + 16388] = v15;
        ++a1[16386];
      }
    }
    else
    {
      v47 = a1 + 16388;
      while ( 1 )
      {
        LODWORD(v14) = *(v47 - 1);
        if ( __PAIR64__(v15, v34) == *(_QWORD *)(v47 - 1) || v34 == *v47 && v15 == (_DWORD)v14 )
          break;
        LODWORD(v14) = a1[16386];
        ++v46;
        v47 += 2;
        if ( v46 >= (int)v14 )
          goto LABEL_72;
      }
      v10 = v50;
      v12 = v49;
      v11 = v51;
    }
LABEL_75:
    ++v7;
    ++v9;
  }
  while ( v7 < 6 );
  return v14;
}

