/* Address: 0x14011da50 | Name: sub_14011DA50 | Size: 853 bytes */
unsigned int *__fastcall sub_14011DA50(int a1)
{
  __int64 v1; // r12
  unsigned int *result; // rax
  unsigned int *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  signed int v6; // edi
  unsigned int *v7; // rbx
  float *v8; // rbp
  float *v9; // rsi
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm2_4
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm1_4
  unsigned int *v31; // [rsp+E0h] [rbp+18h]
  __int64 v32; // [rsp+E8h] [rbp+20h]

  v1 = 4;
  result = &dword_140404A6C[83200503];
  v32 = 4;
  v3 = &dword_140404A6C[6930 * a1 + 83200503];
  v31 = v3;
  do
  {
    if ( v3[780] )
    {
      v4 = (int)*v3;
      if ( (int)v4 >= 0 )
      {
        result = (unsigned int *)unk_140404050(
                                   3553,
                                   dword_140404A6C[44 * dword_140404A6C[4 * dword_140404A6C[421784429] + 283827814]
                                                 + 284024944]);
        v5 = 8969 * v4;
        v6 = 0;
        dword_140404A6C[456217207] = 0;
        dword_140404A6C[456217208] = 6;
        if ( (int)dword_140404A6C[8969 * v4 + 73995254] > 0 )
        {
          result = (unsigned int *)dword_140404A6C[284677614];
          v7 = &dword_140404A6C[v5 + 73995255];
          v8 = (float *)&dword_140404A6C[v5 + 73995261];
          v9 = (float *)&dword_140404A6C[v5 + 73995266];
          do
          {
            if ( *v7 )
            {
              if ( (int)result < 0x4000 )
              {
                v10 = *v8;
                v11 = *(v9 - 4);
                v12 = *(v9 - 3);
                v13 = v9[1];
                v14 = *(v9 - 2);
                v15 = *(v9 - 1);
                v16 = *v9;
                v17 = v9[4];
                v18 = v9[5];
                v19 = v9[2];
                v20 = v9[3];
                v21 = v9[6];
                v22 = 17LL * (int)result;
                *(float *)&dword_140404A6C[v22 + 284677616] = v11;
                *(float *)&dword_140404A6C[v22 + 284677617] = v12;
                *(float *)&dword_140404A6C[v22 + 284677615] = v10;
                v23 = 17LL * (int)dword_140404A6C[284677614];
                *(float *)&dword_140404A6C[v23 + 284677618] = v14;
                *(float *)&dword_140404A6C[v23 + 284677619] = v15;
                *(float *)&dword_140404A6C[v23 + 284677620] = v16;
                v24 = 17LL * (int)dword_140404A6C[284677614];
                v25 = (float)((float)((float)(v11 + v15) + v19) + v18) * 0.25;
                v26 = (float)((float)(v14 + v10) + v13) + v17;
                *(float *)&dword_140404A6C[v24 + 284677621] = v13;
                v27 = *(float *)&dword_140404A6C[284024503];
                *(float *)&dword_140404A6C[v24 + 284677622] = v19;
                *(float *)&dword_140404A6C[v24 + 284677623] = v20;
                v28 = 17LL * (int)dword_140404A6C[284677614];
                *(float *)&dword_140404A6C[v28 + 284677624] = v17;
                v29 = *(float *)&dword_140404A6C[284024504];
                *(float *)&dword_140404A6C[v28 + 284677625] = v18;
                v30 = *(float *)&dword_140404A6C[284024502];
                *(float *)&dword_140404A6C[v28 + 284677626] = v21;
                *(float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677630] = fsqrt(
                                                                                            (float)((float)((float)(v27 - v25) * (float)(v27 - v25))
                                                                                                  + (float)((float)(v30 - (float)(v26 * 0.25)) * (float)(v30 - (float)(v26 * 0.25))))
                                                                                          + (float)((float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))
                                                                                                  * (float)(v29 - (float)((float)((float)((float)(v12 + v16) + v20) + v21) * 0.25))));
                sub_14006EC40(
                  (float *)(0x140000000LL + 68LL * (int)dword_140404A6C[284677614] + 1142923864),
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677615],
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677618],
                  (float *)&dword_140404A6C[17 * dword_140404A6C[284677614] + 284677621]);
                result = (unsigned int *)++dword_140404A6C[284677614];
              }
            }
            ++v6;
            v7 += 21;
            v8 += 21;
            v9 += 21;
          }
          while ( v6 < (int)dword_140404A6C[v5 + 73995254] );
          v3 = v31;
          v1 = v32;
        }
      }
    }
    ++v3;
    --v1;
    v31 = v3;
    v32 = v1;
  }
  while ( v1 );
  return result;
}

