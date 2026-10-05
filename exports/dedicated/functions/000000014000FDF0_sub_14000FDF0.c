/* Address: 0x14000fdf0 | Name: sub_14000FDF0 | Size: 1088 bytes */
__int64 __fastcall sub_14000FDF0(__int64 a1, int a2, int a3)
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
  int v24; // xmm1_4
  int v25; // xmm2_4
  int v26; // xmm0_4
  int v27; // r8d
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

  v3 = dword_140147804;
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
      v27 = dword_1605618A0[0];
      v28 = 3LL * dword_1605618A0[0];
      *(float *)&dword_1605618A0[v28 + 262145] = v17;
      dword_1605618A0[v28 + 262146] = *(_DWORD *)(a1 + 12 * v12 + 4);
      dword_1605618A0[v28 + 262147] = *(_DWORD *)(a1 + 12 * v12 + 8);
      v29 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v29 + 311297] = v24;
      dword_1605618A0[v29 + 311298] = v25;
      dword_1605618A0[v29 + 311299] = v26;
      ++dword_1605618A0[0];
      v30 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v30 + 262145] = *(_DWORD *)(a1 + 4 * v11);
      dword_1605618A0[v30 + 262146] = *(_DWORD *)(a1 + 4 * v11 + 4);
      dword_1605618A0[v30 + 262147] = *(_DWORD *)(a1 + 4 * v11 + 8);
      v31 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v31 + 311297] = v24;
      dword_1605618A0[v31 + 311298] = v25;
      dword_1605618A0[v31 + 311299] = v26;
      ++dword_1605618A0[0];
      v32 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v32 + 262145] = *(_DWORD *)(a1 + 4 * v10);
      dword_1605618A0[v32 + 262146] = *(_DWORD *)(a1 + 4 * v10 + 4);
      dword_1605618A0[v32 + 262147] = *(_DWORD *)(a1 + 4 * v10 + 8);
      v33 = 3LL * dword_1605618A0[0];
      v34 = v3[2];
      dword_1605618A0[v33 + 311297] = v24;
      dword_1605618A0[v33 + 311298] = v25;
      dword_1605618A0[v33 + 311299] = v26;
      ++dword_1605618A0[0];
      v35 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v35 + 262145] = *(_DWORD *)(a1 + 12 * v34);
      dword_1605618A0[v35 + 262146] = *(_DWORD *)(a1 + 12 * v34 + 4);
      dword_1605618A0[v35 + 262147] = *(_DWORD *)(a1 + 12 * v34 + 8);
      v36 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v36 + 311297] = v24;
      dword_1605618A0[v36 + 311298] = v25;
      dword_1605618A0[v36 + 311299] = v26;
      ++dword_1605618A0[0];
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
      dword_1605618A0[4 * dword_1607918A4 + 573442] = v27;
      dword_1605618A0[4 * dword_1607918A4 + 573443] = v27 + 1;
      dword_1605618A0[4 * dword_1607918A4 + 573444] = v27 + 2;
      dword_1605618A0[4 * dword_1607918A4 + 573445] = v27 + 3;
      dword_1605618A0[dword_1607918A4 + 638978] = v37 | a2;
      result = dword_1607918A4;
      dword_1605618A0[dword_1607918A4++ + 671746] = 0;
    }
    v4 = __ROL4__(v4, 1);
    v3 += 4;
    --v8;
  }
  while ( v8 );
  return result;
}

