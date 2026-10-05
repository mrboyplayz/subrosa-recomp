/* Address: 0x1400790a0 | Name: sub_1400790A0 | Size: 1629 bytes */
__int64 __fastcall sub_1400790A0(int *a1, float *a2, float *a3)
{
  float *v4; // r11
  __int64 result; // rax
  int v6; // ecx
  int v7; // r13d
  int v8; // r15d
  int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // r8d
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  float v15; // xmm11_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int64 v19; // r9
  float v20; // xmm13_4
  float v21; // xmm4_4
  float v22; // xmm12_4
  float v23; // xmm11_4
  float v24; // xmm9_4
  float v25; // xmm3_4
  float v26; // xmm10_4
  float v27; // xmm0_4
  __int64 v28; // rax
  int v29; // ebp
  float *v30; // rcx
  float *v31; // rcx
  int v32; // edx
  int v33; // esi
  float *v34; // rcx
  int v35; // edi
  float *v36; // rcx
  float v37; // xmm4_4
  float v38; // xmm10_4
  float v39; // xmm9_4
  float v40; // xmm12_4
  float *v41; // rdx
  __int64 v42; // rcx
  float v43; // xmm11_4
  float *v44; // rdx
  unsigned int v46; // [rsp+100h] [rbp+18h]
  int v47; // [rsp+108h] [rbp+20h]

  v4 = a2;
  result = (unsigned int)(int)(float)(*a2 - *(float *)&dword_18E9B8940);
  v6 = (int)(float)(a3[2] - *(float *)&dword_18E9B8948);
  v46 = (int)(float)(*a2 - *(float *)&dword_18E9B8940);
  v7 = (int)(float)(*a3 - *(float *)&dword_18E9B8940);
  v47 = v6;
  v8 = (int)(float)(a2[2] - *(float *)&dword_18E9B8948);
  if ( v8 > v6 )
    return result;
  do
  {
    v9 = result;
    if ( (int)result > v7 )
      goto LABEL_52;
    v10 = v8 >> 11;
    do
    {
      if ( (unsigned int)(v9 >> 11) > 7 )
        goto LABEL_50;
      if ( v10 > 7 )
        goto LABEL_50;
      v11 = v8 >> 2;
      if ( (unsigned int)(v9 >> 2) > 0xFFF )
        goto LABEL_50;
      if ( v11 > 0xFFF )
        goto LABEL_50;
      v12 = *(unsigned __int16 *)(qword_18E9B8950 + 2LL * ((v9 >> 4) + (v8 >> 4 << 10)));
      if ( !_bittest(&v12, (unsigned __int8)(((v9 >> 2) & 3) + 4 * (v11 & 3))) )
        goto LABEL_50;
      v13 = 13344LL * (int)((v9 >> 11) + 8 * v10);
      v14 = *(_QWORD *)((char *)&unk_18E8E8140 + v13 + 24);
      v15 = *(float *)((char *)&unk_18E8E8140 + v13 + 4);
      v16 = *(float *)((char *)&unk_18E8E8140 + v13);
      v17 = *(float *)((char *)&unk_18E8E8140 + v13 + 8);
      v18 = (float)(v9 & 0x7FF) + v16;
      v19 = (v9 & 0x7FF) + 2049 * (v8 & 0x7FFu);
      v20 = v15 + *(float *)(v14 + 4 * v19);
      v21 = v15 + *(float *)(v14 + 4 * v19 + 4);
      v22 = v15 + *(float *)(v14 + 4 * v19 + 8200);
      v23 = v15 + *(float *)(v14 + 4 * v19 + 8196);
      v24 = (float)((v8 & 0x7FF) + 1) + v17;
      v25 = (float)(v8 & 0x7FF) + v17;
      v26 = (float)((v9 & 0x7FF) + 1) + v16;
      if ( a1[8193] >= 1023 )
        goto LABEL_50;
      v27 = v4[1];
      if ( v20 <= v27 && v21 <= v27 && v22 <= v27 && v23 <= v27 )
        goto LABEL_50;
      v28 = *a1;
      v29 = 0;
      if ( (int)v28 > 0 )
      {
        v30 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v30 - 1)) >= 0.000061035156
             || fabs(v20 - *v30) >= 0.000061035156
             || fabs(v25 - v30[1]) >= 0.000061035156 )
        {
          ++v29;
          v30 += 4;
          if ( v29 >= (int)v28 )
            goto LABEL_20;
        }
LABEL_23:
        v31 = (float *)(a1 + 3);
        v32 = 0;
        while ( fabs(v26 - *(v31 - 1)) >= 0.000061035156
             || fabs(v21 - *v31) >= 0.000061035156
             || fabs(v25 - v31[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v32;
          v31 += 4;
          if ( v32 >= *a1 )
            goto LABEL_28;
        }
        goto LABEL_31;
      }
LABEL_20:
      if ( (int)v28 < 2048 )
      {
        v28 *= 2;
        *(float *)&a1[2 * v28 + 2] = v18;
        *(float *)&a1[2 * v28 + 3] = v20;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v29 = v28 - 1;
      if ( (int)v28 > 0 )
        goto LABEL_23;
LABEL_28:
      if ( (int)v28 < 2048 )
      {
        v28 = 2LL * (int)v28;
        *(float *)&a1[2 * v28 + 2] = v26;
        *(float *)&a1[2 * v28 + 3] = v21;
        *(float *)&a1[2 * v28 + 4] = v25;
        LODWORD(v28) = *a1 + 1;
        *a1 = v28;
      }
      v32 = v28 - 1;
LABEL_31:
      v33 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_37:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v26;
          *(float *)&a1[2 * v28 + 3] = v22;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v33 = v28 - 1;
      }
      else
      {
        v34 = (float *)(a1 + 3);
        while ( fabs(v26 - *(v34 - 1)) >= 0.000061035156
             || fabs(v22 - *v34) >= 0.000061035156
             || fabs(v24 - v34[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v33;
          v34 += 4;
          if ( v33 >= *a1 )
            goto LABEL_37;
        }
      }
      v35 = 0;
      if ( (int)v28 <= 0 )
      {
LABEL_46:
        if ( (int)v28 < 2048 )
        {
          v28 = 2LL * (int)v28;
          *(float *)&a1[2 * v28 + 2] = v18;
          *(float *)&a1[2 * v28 + 3] = v23;
          *(float *)&a1[2 * v28 + 4] = v24;
          LODWORD(v28) = *a1 + 1;
          *a1 = v28;
        }
        v35 = v28 - 1;
      }
      else
      {
        v36 = (float *)(a1 + 3);
        while ( fabs(v18 - *(v36 - 1)) >= 0.000061035156
             || fabs(v23 - *v36) >= 0.000061035156
             || fabs(v24 - v36[1]) >= 0.000061035156 )
        {
          LODWORD(v28) = *a1;
          ++v35;
          v36 += 4;
          if ( v35 >= *a1 )
            goto LABEL_46;
        }
      }
      v37 = v21 - v20;
      v38 = v26 - v18;
      v39 = v24 - v25;
      v40 = v22 - v20;
      a1[8 * a1[8193] + 8194] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v32;
      a1[8 * a1[8193] + 8197] = v33;
      v41 = (float *)&a1[8 * a1[8193] + 8199];
      *v41 = -(float)(v39 * v37);
      v41[1] = v39 * v38;
      v41[2] = (float)(v37 * v38) - (float)(v40 * v38);
      sub_140049260((__int64)v41, v41);
      v42 = a1[8193];
      v43 = v23 - v20;
      a1[8193] = v42 + 1;
      a1[8 * v42 + 8202] = 3;
      a1[8 * a1[8193] + 8195] = v29;
      a1[8 * a1[8193] + 8196] = v33;
      a1[8 * a1[8193] + 8197] = v35;
      v44 = (float *)&a1[8 * a1[8193] + 8199];
      *v44 = (float)(v43 * v39) - (float)(v39 * v40);
      v44[1] = v39 * v38;
      v44[2] = -(float)(v43 * v38);
      sub_140049260((__int64)v44, v44);
      ++a1[8193];
      v4 = a2;
LABEL_50:
      ++v9;
    }
    while ( v9 <= v7 );
    result = v46;
    v6 = v47;
LABEL_52:
    ++v8;
  }
  while ( v8 <= v6 );
  return result;
}

