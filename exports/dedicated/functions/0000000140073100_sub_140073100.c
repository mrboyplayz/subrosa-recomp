/* Address: 0x140073100 | Name: sub_140073100 | Size: 1173 bytes */
unsigned __int64 sub_140073100()
{
  unsigned __int64 result; // rax
  float *v1; // rbx
  char *v2; // rbp
  int *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // r8d
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
  v1 = (float *)&unk_19025F1C4;
  v2 = (char *)&unk_19025F128;
  v3 = dword_19025F178;
  v4 = 1024;
  do
  {
    if ( *(v3 - 46) && *(v3 - 45) )
    {
      *(v3 - 20) = *(v3 - 23);
      *(v3 - 19) = *(v3 - 22);
      *(v3 - 18) = *(v3 - 21);
      v5 = 188LL * *(v3 - 24);
      *(v3 - 23) = *(_DWORD *)((char *)&unk_140249618 + v5);
      *(v3 - 22) = *(_DWORD *)((char *)&unk_14024961C + v5);
      *(v3 - 21) = *(_DWORD *)((char *)&unk_140249620 + v5);
      *(v3 - 14) = *(_DWORD *)((char *)&unk_140249624 + v5);
      *(v3 - 13) = *(_DWORD *)((char *)&unk_140249624 + v5 + 4);
      *(v3 - 12) = *(_DWORD *)((char *)&unk_140249624 + v5 + 8);
      *(v3 - 5) = *(_DWORD *)((char *)&unk_14024963C + v5);
      *(v3 - 4) = *(_DWORD *)((char *)&unk_140249640 + v5);
      *(v3 - 3) = *(_DWORD *)((char *)&unk_140249644 + v5);
      *(v3 - 2) = *(_DWORD *)((char *)&unk_140249648 + v5);
      *(v3 - 1) = *(_DWORD *)((char *)&unk_14024964C + v5);
      *v3 = *(_DWORD *)((char *)&unk_140249650 + v5);
      v3[1] = *(_DWORD *)((char *)&unk_140249654 + v5);
      v3[2] = *(_DWORD *)((char *)&unk_140249658 + v5);
      v3[3] = *(_DWORD *)((char *)&unk_14024965C + v5);
      v3[4] = *(_DWORD *)((char *)&unk_14024966C + v5);
      v3[5] = *(_DWORD *)((char *)&unk_140249670 + v5);
      v3[6] = *(_DWORD *)((char *)&unk_140249674 + v5);
      if ( (unsigned int)sub_1400828D0(v2, v2 - 12, 1) )
      {
        v6 = (float)((float)(*((float *)v3 - 23) - *((float *)v3 - 20))
                   * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
           + *((float *)v3 - 20);
        v7 = (float)((float)(*((float *)v3 - 22) - *((float *)v3 - 19))
                   * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
           + *((float *)v3 - 19);
        v8 = (float)((float)(*((float *)v3 - 21) - *((float *)v3 - 18))
                   * (float)(*(float *)&dword_16E18CA58 * 0.97500002))
           + *((float *)v3 - 18);
        *((float *)v3 - 23) = v6;
        *(float *)((char *)&unk_140249618 + v5) = v6;
        *((float *)v3 - 22) = v7;
        *(float *)((char *)&unk_14024961C + v5) = v7;
        *((float *)v3 - 21) = v8;
        *(float *)((char *)&unk_140249620 + v5) = v8;
      }
      *v1 = 65536.0;
      v9 = 0;
      v1[3] = -65536.0;
      v10 = 65536.0;
      v1[1] = 65536.0;
      v11 = -65536.0;
      v1[4] = -65536.0;
      v1[2] = 65536.0;
      v1[5] = -65536.0;
      v12 = *(v3 - 41);
      if ( dword_190122FC8[1268 * v12] > 0 )
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
          v20 = qword_190122FD0[634 * (int)v12];
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
            v10 = *v1;
          }
          else
          {
            *v1 = v22;
            v13 = v22;
          }
          if ( v14 < v22 )
          {
            v1[3] = v22;
            v14 = v22;
          }
          if ( v15 > v24 )
          {
            v1[1] = v24;
            v15 = v24;
          }
          if ( v16 < v24 )
          {
            v1[4] = v24;
            v16 = v24;
          }
          if ( v17 > v11 )
          {
            v1[2] = v11;
            v17 = v11;
          }
          if ( v18 >= v11 )
          {
            v11 = v1[5];
          }
          else
          {
            v1[5] = v11;
            v18 = v11;
          }
          v12 = *(v3 - 41);
          ++v9;
          v19 += 12;
        }
        while ( v9 < dword_190122FC8[1268 * v12] );
      }
      v25 = v1[3] * 0.25;
      v26 = v1[1] * 0.25;
      *((_DWORD *)v1 + 6) = (int)(float)(v10 * 0.25);
      v27 = (int)v25;
      v28 = v1[4];
      *((_DWORD *)v1 + 9) = v27;
      v29 = (int)v26;
      v30 = v1[2];
      *((_DWORD *)v1 + 7) = v29;
      *((_DWORD *)v1 + 10) = (int)(float)(v28 * 0.25);
      *((_DWORD *)v1 + 8) = (int)(float)(v30 * 0.25);
      result = (unsigned int)(int)(float)(v11 * 0.25);
      *((_DWORD *)v1 + 11) = result;
    }
    v2 += 7040;
    v3 += 1760;
    v1 += 1760;
    --v4;
  }
  while ( v4 );
  return result;
}

