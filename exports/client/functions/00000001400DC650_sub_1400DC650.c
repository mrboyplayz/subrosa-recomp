/* Address: 0x1400dc650 | Name: sub_1400DC650 | Size: 752 bytes */
__int64 __fastcall sub_1400DC650(float *a1, __int64 a2, float *a3, float *a4, float *a5, int *a6, int a7, float a8)
{
  int *v9; // rdi
  int *v10; // rsi
  signed int v15; // ebx
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  __int64 v19; // rcx
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int64 v28; // rcx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // rcx
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v39; // [rsp+40h] [rbp-98h] BYREF
  float v40; // [rsp+44h] [rbp-94h]
  float v41; // [rsp+48h] [rbp-90h]
  float v42; // [rsp+50h] [rbp-88h] BYREF
  float v43; // [rsp+54h] [rbp-84h]
  float v44; // [rsp+58h] [rbp-80h]
  float v45[20]; // [rsp+60h] [rbp-78h] BYREF

  v9 = dword_1402B3668;
  v10 = dword_1402B3558;
  v15 = 0;
  v16 = (float)*a6;
  v17 = (float)a6[1];
  v18 = (float)a6[2];
  while ( 1 )
  {
    if ( ((((64 << v15) & a7) != 0) & _bittest(&a7, v15)) != 0 )
    {
      v19 = 3LL * *(v9 - 2);
      v20 = *(v9 - 1);
      v21 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v9 - 2) + 1]) * a8;
      v45[0] = (float)(v16 + *(float *)&dword_1402B34F0[3 * *(v9 - 2)]) * a8;
      v22 = v18 + *(float *)&dword_1402B34F0[v19 + 2];
      v23 = 3 * v20;
      v45[1] = v21;
      v24 = *v9;
      v25 = (float)(v17 + *(float *)&dword_1402B34F0[v23 + 1]) * a8;
      v45[2] = v22 * a8;
      v26 = v16 + *(float *)&dword_1402B34F0[v23];
      v43 = v25;
      v42 = v26 * a8;
      v27 = v18 + *(float *)&dword_1402B34F0[v23 + 2];
      v28 = 3 * v24;
      LODWORD(v24) = *(v10 - 2);
      v29 = (float)(v17 + *(float *)&dword_1402B34F0[v28 + 1]) * a8;
      v44 = v27 * a8;
      v30 = v16 + *(float *)&dword_1402B34F0[v28];
      v40 = v29;
      v39 = v30 * a8;
      v31 = v18 + *(float *)&dword_1402B34F0[v28 + 2];
      *(_DWORD *)a2 = v24;
      *(_DWORD *)(a2 + 4) = *(v10 - 1);
      *(_DWORD *)(a2 + 8) = *v10;
      v41 = v31 * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &v42, &v39) )
        break;
      v32 = 3LL * *v9;
      v33 = v9[1];
      v34 = (float)(v17 + *(float *)&dword_1402B34F0[3 * *v9 + 1]) * a8;
      v42 = (float)(v16 + *(float *)&dword_1402B34F0[3 * *v9]) * a8;
      v35 = v18 + *(float *)&dword_1402B34F0[v32 + 2];
      v43 = v34;
      v36 = v17 + *(float *)&dword_1402B34F0[3 * v33 + 1];
      v44 = v35 * a8;
      v37 = v16 + *(float *)&dword_1402B34F0[3 * v33];
      v40 = v36 * a8;
      v39 = v37 * a8;
      v41 = (float)(v18 + *(float *)&dword_1402B34F0[3 * v33 + 2]) * a8;
      if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v45, &v42, &v39) )
        break;
    }
    ++v15;
    v10 += 3;
    v9 += 4;
    if ( v15 >= 6 )
      return 0;
  }
  dword_140404A6C[73007008] = v15;
  return 1;
}

