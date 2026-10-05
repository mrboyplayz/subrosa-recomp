/* Address: 0x1400a70b0 | Name: sub_1400A70B0 | Size: 1050 bytes */
_UNKNOWN **__fastcall sub_1400A70B0(int a1)
{
  _UNKNOWN **result; // rax
  float *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  float v6; // xmm2_4
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rdx
  float v11; // xmm11_4
  float *v12; // rdx
  float v13; // xmm12_4
  __int64 v14; // r8
  float v15; // xmm13_4
  __int64 v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  __int64 v25; // rcx
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (float *)&dword_140404A6C[280651442];
  v3 = 256;
  v4 = a1;
  do
  {
    if ( !*((_DWORD *)v2 - 139) )
      goto LABEL_21;
    v5 = 1760 * v4;
    v6 = (float)((float)((float)(*(v2 - 1) - *(float *)&dword_140404A6C[1760 * v4 + 278845917])
                       * (float)(*(v2 - 1) - *(float *)&dword_140404A6C[1760 * v4 + 278845917]))
               + (float)((float)(*(v2 - 2) - *(float *)&dword_140404A6C[1760 * v4 + 278845916])
                       * (float)(*(v2 - 2) - *(float *)&dword_140404A6C[1760 * v4 + 278845916])))
       + (float)((float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918])
               * (float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918]));
    if ( v6 >= 16.0 )
    {
      if ( v6 >= 64.0 )
        goto LABEL_21;
    }
    else
    {
      v7 = (int)dword_140404A6C[v5 + 278845901];
      *(v2 - 124) = 0.0;
      v8 = v7;
      if ( (_DWORD)v7 != -1 )
      {
        v9 = *((int *)v2 - 137);
        if ( (_DWORD)v9 != -1
          && (_DWORD)v7 != (_DWORD)v9
          && dword_140404A6C[3597 * v7 + 71856286] == dword_140404A6C[3597 * v9 + 71856286] )
        {
          sub_14011B7F0(v7, 100, 14388 * v7, (unsigned int)v7);
          v8 = dword_140404A6C[v5 + 278845901];
        }
      }
      if ( v8 != -1 )
      {
        v10 = *((unsigned int *)v2 - 137);
        if ( (_DWORD)v10 != -1 )
          sub_140116D80(v8, v10, 100);
      }
    }
    v11 = *(float *)&dword_140404A6C[v5 + 278845916];
    v12 = v2 + 30;
    v13 = *(float *)&dword_140404A6C[v5 + 278845917];
    v14 = 8;
    v15 = *(float *)&dword_140404A6C[v5 + 278845918];
    do
    {
      v16 = 47LL * *((int *)v12 - 33);
      v17 = *(float *)&dword_140404A6C[v16 + 18215715] - v11;
      v18 = *(float *)&dword_140404A6C[v16 + 18215716] - v13;
      v19 = *(float *)&dword_140404A6C[v16 + 18215717] - v15;
      v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
      if ( v20 == 0.0 )
      {
        v21 = 0.0;
        v22 = 0.0;
        v23 = 0.0;
      }
      else
      {
        v21 = (float)(1.0 / v20) * v17;
        v22 = (float)(1.0 / v20) * v18;
        v23 = (float)(1.0 / v20) * v19;
      }
      result = (_UNKNOWN **)*((int *)v12 + 45);
      v24 = (float)(fmaxf(8.0 / (float)(*v12 + 8.0), 0.125) * (float)(8.0 - v20))
          * (float)((float)(8.0 - v20) * 0.013183594);
      *(float *)&dword_140404A6C[v16 + 18215718] = (float)(v21 * v24) + *(float *)&dword_140404A6C[v16 + 18215718];
      *(float *)&dword_140404A6C[v16 + 18215719] = (float)(v22 * v24) + *(float *)&dword_140404A6C[v16 + 18215719];
      *(float *)&dword_140404A6C[v16 + 18215720] = (float)(v23 * v24) + *(float *)&dword_140404A6C[v16 + 18215720];
      v25 = 47LL * (_QWORD)result;
      v26 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215715] - v11;
      v27 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215716] - v13;
      v28 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215717] - v15;
      v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
      if ( v29 == 0.0 )
      {
        v30 = 0.0;
        v31 = 0.0;
        v32 = 0.0;
      }
      else
      {
        v30 = (float)(1.0 / v29) * v26;
        v31 = (float)(1.0 / v29) * v27;
        v32 = (float)(1.0 / v29) * v28;
      }
      v33 = 8.0 - v29;
      v34 = v12[78] + 8.0;
      v12 += 156;
      v35 = (float)(fmaxf(8.0 / v34, 0.125) * v33) * (float)(v33 * 0.013183594);
      *(float *)&dword_140404A6C[v25 + 18215718] = (float)(v30 * v35) + *(float *)&dword_140404A6C[v25 + 18215718];
      *(float *)&dword_140404A6C[v25 + 18215719] = (float)(v31 * v35) + *(float *)&dword_140404A6C[v25 + 18215719];
      *(float *)&dword_140404A6C[v25 + 18215720] = (float)(v32 * v35) + *(float *)&dword_140404A6C[v25 + 18215720];
      --v14;
    }
    while ( v14 );
LABEL_21:
    v2 += 7166;
    --v3;
  }
  while ( v3 );
  return result;
}

