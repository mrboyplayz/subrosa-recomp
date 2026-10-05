/* Address: 0x140037060 | Name: sub_140037060 | Size: 1153 bytes */
__int64 __fastcall sub_140037060(__int16 a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6; // rsi
  __int64 v8; // rbx
  int v10; // r15d
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rdx
  float v16; // xmm12_4
  float v17; // xmm11_4
  float v18; // xmm10_4
  float v19; // xmm15_4
  float v20; // xmm14_4
  float v21; // xmm13_4
  int v22; // eax
  float v23; // xmm7_4
  float v24; // xmm9_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm9_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm2_4
  char *v44; // rbx
  __int64 v45; // r14
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm0_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  float v53; // [rsp+48h] [rbp-B8h]
  float v54; // [rsp+50h] [rbp-B0h]
  float v55; // [rsp+54h] [rbp-ACh]
  float v56; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v57[3]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v58[3]; // [rsp+6Ch] [rbp-94h] BYREF
  float v59; // [rsp+78h] [rbp-88h] BYREF
  float v60; // [rsp+7Ch] [rbp-84h]
  float v61; // [rsp+80h] [rbp-80h]
  float v62[4]; // [rsp+88h] [rbp-78h] BYREF
  float v63[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h]
  float *v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+C0h] [rbp-40h] BYREF
  char v67; // [rsp+C4h] [rbp-3Ch] BYREF

  v6 = a4;
  v65 = a4;
  v8 = a2;
  v64 = a2;
  v10 = 0;
  v66 = 0;
  result = sub_140007A40((int)&v66, 0, a5, a6);
  if ( *(int *)(v8 + 64) > 0 )
  {
    v12 = v66;
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)(v8 + 8);
      v15 = *(_QWORD *)(v8 + 72);
      v16 = v6[3];
      v17 = *v6;
      v18 = v6[6];
      v19 = v6[4];
      v20 = v6[1];
      v21 = v6[7];
      v22 = 3 * *(_DWORD *)(v15 + v13);
      v55 = v6[5];
      v54 = v6[2];
      v23 = *(float *)(v14 + 4LL * v22);
      v24 = *(float *)(v14 + 4LL * v22 + 4);
      v25 = *(float *)(v14 + 4LL * v22 + 8);
      result = 3 * *(_DWORD *)(v15 + v13 + 4);
      v26 = (float)((float)(v18 * v25) + (float)(v17 * v23)) + (float)((float)(v16 * v24) + *a3);
      v27 = (float)(v21 * v25) + (float)(v20 * v23);
      v28 = v6[2] * v23;
      v29 = (float)(v19 * v24) + a3[1];
      v30 = *(float *)(v14 + 4 * result + 4);
      *(float *)v57 = v26;
      v31 = v6[8] * v25;
      v32 = *(float *)(v14 + 4 * result);
      v33 = v27 + v29;
      v34 = v6[5] * v24;
      v35 = *(float *)(v14 + 4 * result + 8);
      *(float *)&v57[1] = v33;
      v36 = (float)(v31 + v28) + (float)(v34 + a3[2]);
      v37 = (float)(v30 * v16) + *a3;
      *(float *)&v57[2] = v36;
      v38 = v35;
      v39 = (float)((float)(v35 * v18) + (float)(v32 * v17)) + v37;
      v40 = v30;
      v41 = (float)(v35 * v6[8]) + (float)(v32 * v54);
      v42 = (float)(v30 * v55) + a3[2];
      *(float *)v58 = v39;
      v43 = (float)((float)(v38 * v21) + (float)(v32 * v20)) + (float)((float)(v40 * v19) + a3[1]);
      *(float *)&v58[2] = v41 + v42;
      *(float *)&v58[1] = v43;
      if ( v12 > 0 )
      {
        v44 = &v67;
        v45 = (unsigned int)v12;
        do
        {
          result = sub_14004D9D0(
                     (unsigned int)v62,
                     (unsigned int)&v59,
                     (unsigned int)&v56,
                     (unsigned int)v57,
                     (__int64)v58,
                     (__int64)v44,
                     (__int64)(v44 + 12));
          if ( (_DWORD)result )
          {
            result = sub_1400E2590((_DWORD)v44, (int)v44 + 12, (_DWORD)a3, (unsigned int)v57, (__int64)v58);
            if ( (_DWORD)result )
            {
              v46 = v59 - v62[0];
              v47 = v60 - v62[1];
              v48 = v61 - v62[2];
              v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
              if ( v49 == 0.0 )
              {
                v52 = 0;
                v53 = 0.0;
              }
              else
              {
                *(float *)&v52 = (float)(1.0 / v49) * v46;
                *((float *)&v52 + 1) = (float)(1.0 / v49) * v47;
                v53 = (float)(1.0 / v49) * v48;
              }
              v50 = v60 - a3[1];
              v51 = v61 - a3[2];
              v63[0] = v59 - *a3;
              v63[1] = v50;
              v63[2] = v51;
              result = sub_140002AE0(a1, v63, &v52, v56, 1058642330, 0.001953125, 998244352);
            }
          }
          v44 += 24;
          --v45;
        }
        while ( v45 );
        v8 = v64;
        v12 = v66;
        v6 = v65;
      }
      ++v10;
      v13 += 12;
    }
    while ( v10 < *(_DWORD *)(v8 + 64) );
  }
  return result;
}

