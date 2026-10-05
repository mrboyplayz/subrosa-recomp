/* Address: 0x1400689a0 | Name: sub_1400689A0 | Size: 1494 bytes */
__int64 __fastcall sub_1400689A0(int a1, int a2, int a3, int a4, int a5, signed int a6, unsigned int *a7, float *a8)
{
  __int64 v9; // rdx
  __int64 v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm14_4
  float v22; // xmm10_4
  float v23; // xmm6_4
  int v24; // r10d
  char v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v38; // [rsp+0h] [rbp-C9h] BYREF
  float v39; // [rsp+4h] [rbp-C5h]
  _DWORD v40[22]; // [rsp+8h] [rbp-C1h]
  __int64 v41; // [rsp+60h] [rbp-69h]

  if ( (a5 & 0xE0000000) == 0x80000000 )
  {
    v9 = 58LL * (unsigned __int16)a5;
    if ( a6 < (int)dword_140404A6C[v9 + 20074651] )
    {
      v10 = *(_QWORD *)&dword_140404A6C[v9 + 20074653];
      v11 = *(float *)&dword_140404A6C[263004 * a1 + 111579653];
      v12 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 44)) * v11;
      v13 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 36)) * v11;
      v14 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 32)) * v11;
      v15 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 24)) * v11;
      v16 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 12)) * v11;
      v17 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 16)) * v11;
      v18 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 20)) * v11;
      v19 = (float)((float)a2 + *(float *)(v10 + 48LL * a6)) * v11;
      v20 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 4)) * v11;
      v21 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 8)) * v11;
      v22 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 40)) * v11;
      v23 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 28)) * v11;
      v38 = v13;
      v39 = v22;
      *(float *)v40 = v12;
      *(float *)&v40[1] = v15;
      *(float *)&v40[2] = v23;
      *(float *)&v40[3] = v14;
      *(float *)&v40[4] = v16;
      *(float *)&v40[10] = (float)(v13 + v15) * 0.5;
      *(float *)&v40[5] = v17;
      *(float *)&v40[6] = v18;
      *(float *)&v40[7] = v19;
      *(float *)&v40[8] = v20;
      *(float *)&v40[9] = v21;
      *(float *)&v40[11] = (float)(v22 + v23) * 0.5;
      v24 = dword_140404A6C[433435845];
      v25 = 0;
      v26 = 0;
      *(float *)&v40[12] = (float)(v12 + v14) * 0.5;
      *(float *)&v40[17] = (float)(v17 + v20) * 0.5;
      *(float *)&v40[15] = (float)(v14 + v18) * 0.5;
      *(float *)&v40[18] = (float)(v18 + v21) * 0.5;
      *(float *)&v40[19] = (float)(v13 + v19) * 0.5;
      *(float *)&v40[20] = (float)(v22 + v20) * 0.5;
      *(float *)&v40[21] = (float)(v12 + v21) * 0.5;
      *(float *)&v40[14] = (float)(v17 + v23) * 0.5;
      *(float *)&v40[13] = (float)(v16 + v15) * 0.5;
      *(float *)&v40[16] = (float)(v16 + v19) * 0.5;
      do
      {
        if ( v24 < 0x4000 )
        {
          v27 = 37LL * v24;
          v28 = *((_DWORD *)&v38 + 3 * v26);
          dword_140404A6C[v27 + 432826949] = 4;
          dword_140404A6C[v27 + 432826961] = v28;
          dword_140404A6C[v27 + 432826962] = v40[3 * v26 - 1];
          dword_140404A6C[v27 + 432826963] = v40[3 * v26];
          dword_140404A6C[v27 + 432826964] = *((_DWORD *)&v38 + 3 * ((v25 + 1) & 3));
          dword_140404A6C[v27 + 432826965] = v40[3 * ((v25 + 1) & 3) - 1];
          dword_140404A6C[v27 + 432826966] = v40[3 * ((v25 + 1) & 3)];
          dword_140404A6C[v27 + 432826967] = *a7;
          dword_140404A6C[v27 + 432826968] = a7[1];
          dword_140404A6C[v27 + 432826969] = a7[2];
          if ( v26 == 2 )
            *(float *)&dword_140404A6C[v27 + 432826968] = *(float *)&dword_140404A6C[v27 + 432826968] - 0.0625;
          *(_QWORD *)&dword_140404A6C[v27 + 432826970] = 0;
          ++v24;
          *(_QWORD *)&dword_140404A6C[v27 + 432826972] = 0;
          *(_QWORD *)&dword_140404A6C[v27 + 432826974] = 0;
          *(float *)&dword_140404A6C[v27 + 432826976] = *a8 * 0.015625;
          *(float *)&dword_140404A6C[v27 + 432826977] = a8[1] * 0.015625;
          *(float *)&v29 = a8[2] * 0.015625;
          dword_140404A6C[433435845] = v24;
          dword_140404A6C[v27 + 432826978] = v29;
          dword_140404A6C[v27 + 432826950] = 60000;
          dword_140404A6C[v27 + 432826984] = 1048576000;
          dword_140404A6C[v27 + 432826951] = 993158992;
          dword_140404A6C[v27 + 432826983] = 1065311273;
          v30 = *(float *)&dword_140404A6C[v27 + 432826961] - *(float *)&dword_140404A6C[v27 + 432826964];
          v31 = *(float *)&dword_140404A6C[v27 + 432826962] - *(float *)&dword_140404A6C[v27 + 432826965];
          v32 = *(float *)&dword_140404A6C[v27 + 432826963] - *(float *)&dword_140404A6C[v27 + 432826966];
          *(float *)&dword_140404A6C[v27 + 432826979] = fsqrt(
                                                          (float)((float)(v31 * v31) + (float)(v30 * v30))
                                                        + (float)(v32 * v32));
          v33 = *(float *)&dword_140404A6C[v27 + 432826964] - *(float *)&dword_140404A6C[v27 + 432826967];
          v34 = *(float *)&dword_140404A6C[v27 + 432826965] - *(float *)&dword_140404A6C[v27 + 432826968];
          v35 = *(float *)&dword_140404A6C[v27 + 432826966] - *(float *)&dword_140404A6C[v27 + 432826969];
          *(float *)&dword_140404A6C[v27 + 432826980] = fsqrt(
                                                          (float)((float)(v34 * v34) + (float)(v33 * v33))
                                                        + (float)(v35 * v35));
          v36 = *(float *)&dword_140404A6C[v27 + 432826969] - *(float *)&dword_140404A6C[v27 + 432826963];
          *(float *)&dword_140404A6C[v27 + 432826981] = fsqrt(
                                                          (float)((float)((float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962]))
                                                                + (float)((float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])))
                                                        + (float)(v36 * v36));
        }
        ++v25;
        ++v26;
      }
      while ( v26 < 4 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v38 ^ v41);
}

