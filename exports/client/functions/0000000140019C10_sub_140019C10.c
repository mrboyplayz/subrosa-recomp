/* Address: 0x140019c10 | Name: sub_140019C10 | Size: 1088 bytes */
__int64 __fastcall sub_140019C10(__int64 a1, int a2, int a3)
{
  int *v3; // r11
  int v4; // r9d
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm12_4
  float v18; // xmm5_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm2_4
  unsigned int v26; // xmm0_4
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx

  v3 = dword_1402B3664;
  v4 = 1;
  v8 = 6;
  do
  {
    result = a3 & (unsigned int)v4;
    if ( (_DWORD)result == v4 )
    {
      v10 = 3LL * v3[1];
      v11 = 3LL * *v3;
      v12 = *(v3 - 1);
      v13 = *(float *)(a1 + 12LL * *v3 + 8) - *(float *)(a1 + 12 * v12 + 8);
      v14 = *(float *)(a1 + 12LL * v3[1] + 4) - *(float *)(a1 + 12 * v12 + 4);
      v15 = *(float *)(a1 + 12LL * v3[1] + 8) - *(float *)(a1 + 12 * v12 + 8);
      v16 = *(float *)(a1 + 12LL * *v3 + 4) - *(float *)(a1 + 12 * v12 + 4);
      v17 = *(float *)(a1 + 12 * v12);
      v18 = *(float *)(a1 + 12LL * *v3) - v17;
      v19 = (float)(v14 * v13) - (float)(v15 * v16);
      v20 = *(float *)(a1 + 12LL * v3[1]) - v17;
      v21 = (float)(v20 * v16) - (float)(v14 * v18);
      v22 = (float)(v15 * v18) - (float)(v20 * v13);
      v23 = fsqrt((float)((float)(v22 * v22) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v23 == 0.0 )
      {
        *(float *)&v24 = 0.0;
        *(float *)&v25 = 0.0;
        *(float *)&v26 = 0.0;
      }
      else
      {
        *(float *)&v24 = (float)(1.0 / v23) * v19;
        *(float *)&v25 = (float)(1.0 / v23) * v22;
        *(float *)&v26 = (float)(1.0 / v23) * v21;
      }
      v27 = dword_140404A6C[70425405];
      v28 = 3LL * (int)dword_140404A6C[70425405];
      *(float *)&dword_140404A6C[v28 + 70687550] = v17;
      dword_140404A6C[v28 + 70687551] = *(_DWORD *)(a1 + 12 * v12 + 4);
      dword_140404A6C[v28 + 70687552] = *(_DWORD *)(a1 + 12 * v12 + 8);
      v29 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v29 + 70736702] = v24;
      dword_140404A6C[v29 + 70736703] = v25;
      dword_140404A6C[v29 + 70736704] = v26;
      v30 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v30 + 70687550] = *(_DWORD *)(a1 + 4 * v11);
      dword_140404A6C[v30 + 70687551] = *(_DWORD *)(a1 + 4 * v11 + 4);
      dword_140404A6C[v30 + 70687552] = *(_DWORD *)(a1 + 4 * v11 + 8);
      v31 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v31 + 70736702] = v24;
      dword_140404A6C[v31 + 70736703] = v25;
      dword_140404A6C[v31 + 70736704] = v26;
      v32 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v32 + 70687550] = *(_DWORD *)(a1 + 4 * v10);
      dword_140404A6C[v32 + 70687551] = *(_DWORD *)(a1 + 4 * v10 + 4);
      dword_140404A6C[v32 + 70687552] = *(_DWORD *)(a1 + 4 * v10 + 8);
      v33 = 3LL * (int)dword_140404A6C[70425405];
      v34 = v3[2];
      dword_140404A6C[v33 + 70736702] = v24;
      dword_140404A6C[v33 + 70736703] = v25;
      dword_140404A6C[v33 + 70736704] = v26;
      v35 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v35 + 70687550] = *(_DWORD *)(a1 + 12 * v34);
      dword_140404A6C[v35 + 70687551] = *(_DWORD *)(a1 + 12 * v34 + 4);
      dword_140404A6C[v35 + 70687552] = *(_DWORD *)(a1 + 12 * v34 + 8);
      v36 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v36 + 70736702] = v24;
      dword_140404A6C[v36 + 70736703] = v25;
      dword_140404A6C[v36 + 70736704] = v26;
      ++dword_140404A6C[70425405];
      if ( *(float *)&v25 <= 0.70700002 )
      {
        if ( *(float *)&v25 >= -0.70700002 )
        {
          if ( *(float *)&v24 <= 0.70700002 )
          {
            if ( *(float *)&v24 >= -0.70700002 )
            {
              v37 = 327680;
              if ( *(float *)&v26 > 0.70700002 )
                v37 = 393216;
            }
            else
            {
              v37 = 0x10000;
            }
          }
          else
          {
            v37 = 0x20000;
          }
        }
        else
        {
          v37 = 196608;
        }
      }
      else
      {
        v37 = 0x40000;
      }
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = v27;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v27 + 1;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v27 + 2;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v27 + 3;
      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v37 | a2;
      result = (int)dword_140404A6C[70998846];
      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
      ++dword_140404A6C[70998846];
    }
    v4 = __ROL4__(v4, 1);
    v3 += 4;
    --v8;
  }
  while ( v8 );
  return result;
}

