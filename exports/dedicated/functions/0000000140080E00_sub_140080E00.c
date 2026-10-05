/* Address: 0x140080e00 | Name: sub_140080E00 | Size: 853 bytes */
_BOOL8 __fastcall sub_140080E00(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4; // r14d
  int *v9; // rsi
  float v10; // xmm1_4
  float v11; // xmm2_4
  __int64 v12; // rax
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm4_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  int v37; // xmm1_4
  float v39[2]; // [rsp+48h] [rbp-89h] BYREF
  float v40; // [rsp+50h] [rbp-81h]
  int v41; // [rsp+58h] [rbp-79h] BYREF
  int v42; // [rsp+5Ch] [rbp-75h]
  int v43; // [rsp+60h] [rbp-71h]
  float v44[2]; // [rsp+68h] [rbp-69h] BYREF
  float v45; // [rsp+70h] [rbp-61h]
  float v46[4]; // [rsp+78h] [rbp-59h] BYREF
  float v47[4]; // [rsp+88h] [rbp-49h] BYREF
  float v48[6]; // [rsp+98h] [rbp-39h] BYREF
  float v49; // [rsp+138h] [rbp+67h] BYREF

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v9 = (int *)(a2 + 32784);
  do
  {
    v10 = *(float *)(a2 + 16LL * *(v9 - 1) + 12);
    v11 = *(float *)(a2 + 16LL * *(v9 - 1) + 16);
    v12 = 2LL * *v9;
    v46[0] = *(float *)(a2 + 16LL * *(v9 - 1) + 8);
    v46[2] = v11;
    v46[1] = v10;
    v13 = *(float *)(a2 + 8 * v12 + 16);
    v14 = *(float *)(a2 + 8 * v12 + 8);
    v15 = *(float *)(a2 + 8 * v12 + 12);
    v16 = 2LL * v9[1];
    v47[2] = v13;
    v17 = v13 - v11;
    v47[1] = v15;
    v18 = v15 - v10;
    v47[0] = v14;
    v19 = v14 - v46[0];
    v20 = *(float *)(a2 + 8 * v16 + 8);
    v21 = *(float *)(a2 + 8 * v16 + 12);
    v45 = *(float *)(a2 + 8 * v16 + 16);
    v44[0] = v20;
    v22 = v20 - v46[0];
    v44[1] = v21;
    v23 = v21 - v10;
    v24 = (float)(v23 * v17) - (float)((float)(v45 - v11) * v18);
    v25 = (float)((float)(v45 - v11) * v19) - (float)(v22 * v17);
    v26 = (float)(v22 * v18) - (float)(v23 * v19);
    v27 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
    if ( v27 == 0.0 )
    {
      v39[0] = 0.0;
      v28 = 0.0;
      v40 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v24 * (float)(1.0 / v27);
      v29 = v26 * (float)(1.0 / v27);
      v39[0] = v28;
      v30 = v25 * (float)(1.0 / v27);
      v40 = v29;
    }
    v39[1] = v30;
    if ( sub_140048690((float *)&v41, v39, &v49, a3, a4, v46, v47, v44) )
    {
      v31 = v49;
      if ( v49 < *(float *)(a1 + 24) )
      {
        v32 = v42;
        *(_DWORD *)a1 = v41;
        *(_DWORD *)(a1 + 8) = v43;
        *(_DWORD *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    if ( *(v9 - 2) == 4 )
    {
      v33 = 2LL * v9[2];
      v34 = *(float *)(a2 + 16LL * v9[2] + 12);
      v48[0] = *(float *)(a2 + 16LL * v9[2] + 8);
      v35 = *(float *)(a2 + 8 * v33 + 16);
      v48[1] = v34;
      v48[2] = v35;
      if ( sub_140048690((float *)&v41, v39, &v49, a3, a4, v46, v44, v48) )
      {
        v36 = v49;
        if ( v49 < *(float *)(a1 + 24) )
        {
          v37 = v42;
          *(_DWORD *)a1 = v41;
          *(_DWORD *)(a1 + 8) = v43;
          *(_DWORD *)(a1 + 4) = v37;
          *(float *)(a1 + 12) = v28;
          *(float *)(a1 + 16) = v30;
          *(float *)(a1 + 20) = v29;
          *(float *)(a1 + 24) = v36;
        }
      }
    }
    ++v4;
    v9 += 8;
  }
  while ( v4 < *(_DWORD *)(a2 + 32772) );
  return *(float *)(a1 + 24) < 1.0;
}

