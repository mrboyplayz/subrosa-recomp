/* Address: 0x1400d8790 | Name: sub_1400D8790 | Size: 584 bytes */
_BOOL8 __fastcall sub_1400D8790(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  int *v7; // rdi
  int *v11; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  __int64 v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rcx
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  _BOOL8 result; // rax
  float v33[4]; // [rsp+40h] [rbp-78h] BYREF
  float v34[4]; // [rsp+50h] [rbp-68h] BYREF
  float v35[4]; // [rsp+60h] [rbp-58h] BYREF
  float v36[8]; // [rsp+70h] [rbp-48h] BYREF

  v7 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = 0;
  while ( 1 )
  {
    v14 = 3LL * *(v7 - 1);
    v15 = *a6;
    v16 = a6[1];
    v17 = a6[2];
    v18 = *a7;
    v19 = a7[1];
    v20 = a7[2];
    v21 = *v7;
    v34[0] = (float)(*a7 * *(float *)&dword_1402B34F0[3 * *(v7 - 1)]) + *a6;
    v34[1] = (float)(v19 * *(float *)&dword_1402B34F0[v14 + 1]) + v16;
    v22 = v20 * *(float *)&dword_1402B34F0[v14 + 2];
    v23 = 3 * v21;
    v24 = v7[1];
    v34[2] = v22 + v17;
    v35[0] = (float)(v18 * *(float *)&dword_1402B34F0[v23]) + v15;
    v35[1] = (float)(v19 * *(float *)&dword_1402B34F0[v23 + 1]) + v16;
    v25 = v20 * *(float *)&dword_1402B34F0[v23 + 2];
    v26 = 3 * v24;
    v27 = v7[2];
    v35[2] = v25 + v17;
    v33[0] = (float)(v18 * *(float *)&dword_1402B34F0[v26]) + v15;
    v33[1] = (float)(v19 * *(float *)&dword_1402B34F0[v26 + 1]) + v16;
    v28 = v19 * *(float *)&dword_1402B34F0[3 * v27 + 1];
    v29 = (float)(v20 * *(float *)&dword_1402B34F0[v26 + 2]) + v17;
    v30 = v20 * *(float *)&dword_1402B34F0[3 * v27 + 2];
    v31 = (float)(v18 * *(float *)&dword_1402B34F0[3 * v27]) + v15;
    *(_DWORD *)a2 = *(v11 - 2);
    *(_DWORD *)(a2 + 4) = *(v11 - 1);
    *(_DWORD *)(a2 + 8) = *v11;
    v33[2] = v29;
    v36[0] = v31;
    v36[1] = v28 + v16;
    v36[2] = v30 + v17;
    if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v35, v33) )
      break;
    result = sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v33, v36);
    if ( result )
      break;
    ++v13;
    v7 += 4;
    v11 += 3;
    if ( v13 >= 6 )
      return result;
  }
  return 1;
}

