/* Address: 0x1400dad20 | Name: sub_1400DAD20 | Size: 819 bytes */
_BOOL8 __fastcall sub_1400DAD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6, float *a7)
{
  int v7; // eax
  float *v10; // r12
  float *v11; // r13
  __int64 v12; // r15
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdx
  bool v16; // zf
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm8_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm2_4
  int v39; // xmm1_4
  float v40; // xmm2_4
  int v41; // xmm1_4
  int v43; // [rsp+48h] [rbp-91h]
  int v44; // [rsp+50h] [rbp-89h] BYREF
  int v45; // [rsp+54h] [rbp-85h]
  int v46; // [rsp+58h] [rbp-81h]
  float v47[4]; // [rsp+60h] [rbp-79h] BYREF
  float v48[4]; // [rsp+70h] [rbp-69h] BYREF
  float v49[4]; // [rsp+80h] [rbp-59h] BYREF
  float v50[4]; // [rsp+90h] [rbp-49h] BYREF
  float v51[4]; // [rsp+A0h] [rbp-39h] BYREF
  float v52; // [rsp+128h] [rbp+4Fh] BYREF
  __int64 v53; // [rsp+130h] [rbp+57h]

  v53 = a2;
  v7 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v43 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = a7;
  v11 = a6;
  v12 = a2 + 48;
  do
  {
    v13 = 0;
    if ( *(int *)v12 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v12 + 8);
        v16 = *(_DWORD *)(v15 + v14 + 4) == 4;
        v17 = *(float *)(v15 + v14 + 24);
        v18 = *(float *)(v15 + v14 + 28);
        v19 = *(float *)(v15 + v14 + 32);
        v20 = 3 * *(_DWORD *)(v15 + v14 + 8);
        v21 = *(float *)(a3 + 4 * v20 + 4);
        v48[0] = *(float *)(a3 + 4 * v20);
        v22 = *(float *)(a3 + 4 * v20 + 8);
        LODWORD(v20) = *(_DWORD *)(v15 + v14 + 12);
        v48[2] = v22;
        v48[1] = v21;
        v23 = 3 * (int)v20;
        v24 = *(float *)(a3 + 4 * v23 + 4);
        v50[0] = *(float *)(a3 + 4 * v23);
        v25 = *(float *)(a3 + 4 * v23 + 8);
        LODWORD(v23) = *(_DWORD *)(v15 + v14 + 16);
        v50[2] = v25;
        v50[1] = v24;
        v26 = 3 * (int)v23;
        v27 = *(float *)(a3 + 4 * v26 + 4);
        v47[0] = *(float *)(a3 + 4 * v26);
        v47[2] = *(float *)(a3 + 4 * v26 + 8);
        v47[1] = v27;
        v28 = v17 * a5[1];
        v29 = (float)((float)(v18 * a5[3]) + (float)(v17 * *a5)) + (float)(v19 * a5[6]);
        v30 = v19 * a5[7];
        v31 = (float)(v17 * a5[2]) + (float)(v18 * a5[5]);
        v32 = v19 * a5[8];
        v33 = (float)(v18 * a5[4]) + v28;
        v49[0] = v29;
        v34 = v31 + v32;
        v35 = v33 + v30;
        v49[2] = v34;
        v49[1] = v35;
        if ( v16 )
        {
          v36 = 3 * *(_DWORD *)(v15 + v14 + 20);
          v37 = *(float *)(a3 + 4 * v36 + 4);
          v51[0] = *(float *)(a3 + 4 * v36);
          v51[2] = *(float *)(a3 + 4 * v36 + 8);
          v51[1] = v37;
        }
        if ( sub_140077FA0((float *)&v44, v49, &v52, v11, v10, v48, v50, v47) )
        {
          v38 = v52;
          if ( v52 < *(float *)(a1 + 24) )
          {
            v39 = v45;
            *(_DWORD *)a1 = v44;
            *(_DWORD *)(a1 + 8) = v46;
            *(_DWORD *)(a1 + 4) = v39;
            *(float *)(a1 + 12) = v29;
            *(float *)(a1 + 16) = v35;
            *(float *)(a1 + 20) = v34;
            *(float *)(a1 + 24) = v38;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 8) + v14 + 4) == 4
          && sub_140077FA0((float *)&v44, v49, &v52, v11, v10, v48, v47, v51) )
        {
          v40 = v52;
          if ( v52 < *(float *)(a1 + 24) )
          {
            v41 = v45;
            *(_DWORD *)a1 = v44;
            *(_DWORD *)(a1 + 8) = v46;
            *(_DWORD *)(a1 + 4) = v41;
            *(float *)(a1 + 12) = v29;
            *(float *)(a1 + 16) = v35;
            *(float *)(a1 + 20) = v34;
            *(float *)(a1 + 24) = v40;
          }
        }
        ++v13;
        v14 += 36;
      }
      while ( v13 < *(_DWORD *)v12 );
      v7 = v43;
      a2 = v53;
    }
    ++v7;
    v12 += 56;
    v43 = v7;
  }
  while ( v7 < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}

