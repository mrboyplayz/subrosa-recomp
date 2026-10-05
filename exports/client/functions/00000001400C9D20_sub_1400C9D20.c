/* Address: 0x1400c9d20 | Name: sub_1400C9D20 | Size: 1173 bytes */
unsigned __int64 sub_1400C9D20()
{
  unsigned __int64 result; // rax
  unsigned int *v1; // rbx
  unsigned int *v2; // rbp
  unsigned int *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  signed int v9; // r8d
  float v10; // xmm7_4
  float v11; // xmm4_4
  __int64 v12; // rdx
  float v13; // xmm14_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  __int64 v19; // r9
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  int v27; // eax
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v1 = &dword_140404A6C[278845958];
  v2 = &dword_140404A6C[278845919];
  v3 = &dword_140404A6C[278845939];
  v4 = 1024;
  do
  {
    if ( *(v3 - 46) && *(v3 - 45) )
    {
      *(v3 - 20) = *(v3 - 23);
      *(v3 - 19) = *(v3 - 22);
      *(v3 - 18) = *(v3 - 21);
      v5 = 47LL * (int)*(v3 - 24);
      *(v3 - 23) = dword_140404A6C[v5 + 18215715];
      *(v3 - 22) = dword_140404A6C[v5 + 18215716];
      *(v3 - 21) = dword_140404A6C[v5 + 18215717];
      *(v3 - 14) = dword_140404A6C[v5 + 18215718];
      *(v3 - 13) = dword_140404A6C[v5 + 18215719];
      *(v3 - 12) = dword_140404A6C[v5 + 18215720];
      *(v3 - 5) = dword_140404A6C[v5 + 18215724];
      *(v3 - 4) = dword_140404A6C[v5 + 18215725];
      *(v3 - 3) = dword_140404A6C[v5 + 18215726];
      *(v3 - 2) = dword_140404A6C[v5 + 18215727];
      *(v3 - 1) = dword_140404A6C[v5 + 18215728];
      *v3 = dword_140404A6C[v5 + 18215729];
      v3[1] = dword_140404A6C[v5 + 18215730];
      v3[2] = dword_140404A6C[v5 + 18215731];
      v3[3] = dword_140404A6C[v5 + 18215732];
      v3[4] = dword_140404A6C[v5 + 18215736];
      v3[5] = dword_140404A6C[v5 + 18215737];
      v3[6] = dword_140404A6C[v5 + 18215738];
      if ( (unsigned int)sub_1400DC050(v2, v2 - 3, 1) )
      {
        v6 = (float)((float)(*((float *)v3 - 23) - *((float *)v3 - 20))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 20);
        v7 = (float)((float)(*((float *)v3 - 22) - *((float *)v3 - 19))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 19);
        v8 = (float)((float)(*((float *)v3 - 21) - *((float *)v3 - 18))
                   * (float)(*(float *)&dword_140404A6C[73006987] * 0.97500002))
           + *((float *)v3 - 18);
        *((float *)v3 - 23) = v6;
        *(float *)&dword_140404A6C[v5 + 18215715] = v6;
        *((float *)v3 - 22) = v7;
        *(float *)&dword_140404A6C[v5 + 18215716] = v7;
        *((float *)v3 - 21) = v8;
        *(float *)&dword_140404A6C[v5 + 18215717] = v8;
      }
      *v1 = 1199570944;
      v9 = 0;
      v1[3] = -947912704;
      v10 = 65536.0;
      v1[1] = 1199570944;
      v11 = -65536.0;
      v1[4] = -947912704;
      v1[2] = 1199570944;
      v1[5] = -947912704;
      v12 = (int)*(v3 - 41);
      if ( (int)dword_140404A6C[1268 * v12 + 278522247] > 0 )
      {
        v13 = 65536.0;
        v14 = -65536.0;
        v15 = 65536.0;
        v16 = -65536.0;
        v17 = 65536.0;
        v18 = -65536.0;
        v19 = 0;
        do
        {
          v20 = *(_QWORD *)&dword_140404A6C[1268 * (int)v12 + 278522249];
          v21 = *(float *)(v20 + v19 + 4);
          v22 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 5)) + *((float *)v3 - 23))
                      + (float)(v21 * *((float *)v3 - 2)))
              + (float)(*(float *)(v20 + v19 + 8) * *((float *)v3 + 1));
          v23 = *(float *)(v20 + v19 + 8);
          v10 = v22;
          v11 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 3)) + *((float *)v3 - 21))
                      + (float)(v21 * *(float *)v3))
              + (float)(v23 * *((float *)v3 + 3));
          v24 = (float)((float)((float)(*(float *)(v20 + v19) * *((float *)v3 - 4)) + *((float *)v3 - 22))
                      + (float)(v21 * *((float *)v3 - 1)))
              + (float)(v23 * *((float *)v3 + 2));
          if ( v13 <= v22 )
          {
            v10 = *(float *)v1;
          }
          else
          {
            *(float *)v1 = v22;
            v13 = v22;
          }
          if ( v14 < v22 )
          {
            *((float *)v1 + 3) = v22;
            v14 = v22;
          }
          if ( v15 > v24 )
          {
            *((float *)v1 + 1) = v24;
            v15 = v24;
          }
          if ( v16 < v24 )
          {
            *((float *)v1 + 4) = v24;
            v16 = v24;
          }
          if ( v17 > v11 )
          {
            *((float *)v1 + 2) = v11;
            v17 = v11;
          }
          if ( v18 >= v11 )
          {
            v11 = *((float *)v1 + 5);
          }
          else
          {
            *((float *)v1 + 5) = v11;
            v18 = v11;
          }
          v12 = (int)*(v3 - 41);
          ++v9;
          v19 += 12;
        }
        while ( v9 < (int)dword_140404A6C[1268 * v12 + 278522247] );
      }
      v25 = *((float *)v1 + 3) * 0.25;
      v26 = *((float *)v1 + 1) * 0.25;
      v1[6] = (int)(float)(v10 * 0.25);
      v27 = (int)v25;
      v28 = *((float *)v1 + 4);
      v1[9] = v27;
      v29 = (int)v26;
      v30 = *((float *)v1 + 2);
      v1[7] = v29;
      v1[10] = (int)(float)(v28 * 0.25);
      v1[8] = (int)(float)(v30 * 0.25);
      result = (unsigned int)(int)(float)(v11 * 0.25);
      v1[11] = result;
    }
    v2 += 1760;
    v3 += 1760;
    v1 += 1760;
    --v4;
  }
  while ( v4 );
  return result;
}

