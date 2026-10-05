/* Address: 0x14004a480 | Name: sub_14004A480 | Size: 486 bytes */
__int64 __fastcall sub_14004A480(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int v5; // r11d
  int v8; // ebx
  __int64 v9; // rcx
  float *v10; // rdx
  __int64 result; // rax
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  __int64 v21; // rcx
  float *v22; // rdx
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // xmm5_4

  v5 = 0;
  v8 = 0;
  if ( *(int *)a3 > 0 )
  {
    v9 = 0;
    v10 = (float *)(a1 + 8);
    do
    {
      result = *(_QWORD *)(a3 + 8);
      ++v8;
      v12 = a5[4];
      v13 = a5[7];
      v14 = *(float *)(v9 + result);
      v15 = *(float *)(v9 + result + 4);
      v16 = *(float *)(v9 + result + 8);
      v9 += 16;
      v17 = a5[5];
      v18 = a5[8];
      v19 = a5[1] * v14;
      v20 = a5[2] * v14;
      *(v10 - 2) = (float)((float)(v14 * *a5) + (float)(v16 * a5[6])) + (float)((float)(v15 * a5[3]) + *a4);
      *(v10 - 1) = (float)((float)(v13 * v16) + v19) + (float)((float)(v12 * v15) + a4[1]);
      *v10 = (float)((float)(v18 * v16) + v20) + (float)((float)(v17 * v15) + a4[2]);
      v10 += 3;
    }
    while ( v8 < *(_DWORD *)a3 );
  }
  if ( *(int *)(a3 + 16) > 0 )
  {
    v21 = 0;
    v22 = (float *)(a2 + 8);
    do
    {
      result = *(_QWORD *)(a3 + 24);
      ++v5;
      v23 = *(float *)(v21 + result + 24);
      v24 = *(float *)(v21 + result + 28);
      v25 = *(float *)(v21 + result + 32);
      v21 += 36;
      *(v22 - 2) = (float)((float)(v23 * *a5) + (float)(v24 * a5[3])) + (float)(v25 * a5[6]);
      *(v22 - 1) = (float)((float)(v23 * a5[1]) + (float)(v24 * a5[4])) + (float)(v25 * a5[7]);
      *v22 = (float)((float)(v24 * a5[5]) + (float)(v23 * a5[2])) + (float)(v25 * a5[8]);
      v22 += 3;
    }
    while ( v5 < *(_DWORD *)(a3 + 16) );
  }
  return result;
}

