/* Address: 0x140018ca0 | Name: sub_140018CA0 | Size: 863 bytes */
__int64 __fastcall sub_140018CA0(int *a1, int a2, int *a3, unsigned __int16 a4, float a5)
{
  signed int v6; // r11d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm15_4
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  __int64 v25; // rax
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  __int64 v29; // rax
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx

  v6 = 0;
  result = a2;
  v8 = 263004LL * a2;
  v9 = 58LL * a4;
  v10 = (float)((float)*a3 * a5) + *(float *)&dword_140404A6C[v8 + 111579638];
  v11 = (float)((float)a3[1] * a5) + *(float *)&dword_140404A6C[v8 + 111579639];
  v12 = (float)((float)a3[2] * a5) + *(float *)&dword_140404A6C[v8 + 111579640];
  if ( (int)dword_140404A6C[v9 + 20074623] > 0 )
  {
    v13 = *a1;
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
      v16 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
      v17 = 3 * *(_DWORD *)(v16 + v14);
      v18 = (float)(a5 * *(float *)(v15 + 4 * v17)) + v10;
      v19 = (float)(a5 * *(float *)(v15 + 4 * v17 + 4)) + v11;
      v20 = (float)(a5 * *(float *)(v15 + 4 * v17 + 8)) + v12;
      v21 = 3 * *(_DWORD *)(v16 + v14 + 4);
      v22 = (float)(a5 * *(float *)(v15 + 4 * v21)) + v10;
      v23 = (float)(a5 * *(float *)(v15 + 4 * v21 + 4)) + v11;
      v24 = (float)(a5 * *(float *)(v15 + 4 * v21 + 8)) + v12;
      v25 = 3 * *(_DWORD *)(v16 + v14 + 8);
      v26 = (float)(a5 * *(float *)(v15 + 4 * v25)) + v10;
      v27 = (float)(a5 * *(float *)(v15 + 4 * v25 + 4)) + v11;
      v28 = (float)(a5 * *(float *)(v15 + 4 * v25 + 8)) + v12;
      v29 = 3 * *(_DWORD *)(v16 + v14 + 12);
      v30 = a5 * *(float *)(v15 + 4 * v29 + 4);
      v31 = a5 * *(float *)(v15 + 4 * v29 + 8);
      v32 = (float)(a5 * *(float *)(v15 + 4 * v29)) + v10;
      result = (unsigned int)v13;
      v33 = v30 + v11;
      v34 = v31 + v12;
      if ( v13 < 256 )
      {
        v35 = 3LL * v13;
        *(float *)&a1[2 * v35 + 1] = v18;
        *(float *)&a1[2 * v35 + 2] = v19;
        *(float *)&a1[2 * v35 + 3] = v20;
        v36 = 3LL * *a1;
        *(float *)&a1[2 * v36 + 4] = v22;
        *(float *)&a1[2 * v36 + 5] = v23;
        *(float *)&a1[2 * v36 + 6] = v24;
        result = (unsigned int)++*a1;
      }
      v13 = result;
      if ( (int)result < 256 )
      {
        v37 = 3LL * (int)result;
        *(float *)&a1[2 * v37 + 1] = v22;
        *(float *)&a1[2 * v37 + 2] = v23;
        *(float *)&a1[2 * v37 + 3] = v24;
        result = *a1;
        v38 = 3 * result;
        *(float *)&a1[2 * v38 + 4] = v26;
        *(float *)&a1[2 * v38 + 5] = v27;
        *(float *)&a1[2 * v38 + 6] = v28;
        v13 = ++*a1;
      }
      if ( v13 < 256 )
      {
        v39 = 3LL * v13;
        *(float *)&a1[2 * v39 + 1] = v26;
        *(float *)&a1[2 * v39 + 2] = v27;
        *(float *)&a1[2 * v39 + 3] = v28;
        result = *a1;
        v40 = 3 * result;
        *(float *)&a1[2 * v40 + 4] = v32;
        *(float *)&a1[2 * v40 + 5] = v33;
        *(float *)&a1[2 * v40 + 6] = v34;
        v13 = ++*a1;
        if ( *a1 < 256 )
        {
          v41 = 3LL * v13;
          *(float *)&a1[2 * v41 + 1] = v32;
          *(float *)&a1[2 * v41 + 2] = v33;
          *(float *)&a1[2 * v41 + 3] = v34;
          result = *a1;
          v42 = 3 * result;
          *(float *)&a1[2 * v42 + 4] = v18;
          *(float *)&a1[2 * v42 + 5] = v19;
          *(float *)&a1[2 * v42 + 6] = v20;
          v13 = ++*a1;
        }
      }
      ++v6;
      v14 += 16;
    }
    while ( v6 < (int)dword_140404A6C[v9 + 20074623] );
  }
  return result;
}

