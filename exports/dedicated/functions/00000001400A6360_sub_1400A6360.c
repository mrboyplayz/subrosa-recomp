/* Address: 0x1400a6360 | Name: sub_1400A6360 | Size: 1851 bytes */
unsigned __int64 __fastcall sub_1400A6360(int a1)
{
  __int64 v1; // r15
  int v2; // xmm12_4
  int v3; // xmm11_4
  int v4; // xmm10_4
  char *v5; // rbx
  __int64 v6; // rcx
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm5_4
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm5_4
  __int64 v21; // rcx
  int v22; // r12d
  int v23; // ecx
  int v24; // r9d
  int v25; // r10d
  int v26; // edx
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rcx
  int *v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rbx
  float *v40; // rdi
  float *v41; // rsi
  float v42; // xmm6_4
  float v43; // xmm2_4
  float v44; // xmm8_4
  float v45; // xmm7_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm1_4
  float v49; // xmm6_4
  float v50; // xmm8_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  bool v53; // zf
  unsigned __int64 v54; // [rsp+40h] [rbp-C238h]
  __int64 v55; // [rsp+40h] [rbp-C238h]
  __int64 v56; // [rsp+48h] [rbp-C230h]
  char *v57; // [rsp+48h] [rbp-C230h]
  int v58; // [rsp+50h] [rbp-C228h]
  __int64 v59; // [rsp+50h] [rbp-C228h]
  int v60; // [rsp+58h] [rbp-C220h]
  __int64 v61; // [rsp+60h] [rbp-C218h]
  float v62[4]; // [rsp+70h] [rbp-C208h] BYREF
  float v63[4]; // [rsp+80h] [rbp-C1F8h] BYREF
  float v64[3]; // [rsp+90h] [rbp-C1E8h] BYREF
  float v65[9]; // [rsp+9Ch] [rbp-C1DCh] BYREF
  int v66[12356]; // [rsp+C0h] [rbp-C1B8h] BYREF

  v1 = 5210LL * a1;
  v2 = dword_16E6A3CB0[v1];
  v3 = dword_16E6A3CB4[v1];
  v4 = dword_16E6A3CB8[v1];
  v5 = (char *)&unk_16E6A8C1C + v1 * 4;
  v6 = 188LL * dword_16E6A3C88[v1];
  v7 = *(float *)((char *)&unk_140249650 + v6);
  v8 = *(float *)((char *)&unk_14024964C + v6);
  v9 = *(float *)((char *)&unk_140249648 + v6);
  v10 = 188LL * *(int *)((char *)&unk_16E6A8C1C + v1 * 4);
  v11 = *(float *)((char *)&unk_140249648 + v10 + 4);
  v12 = *(float *)((char *)&unk_140249648 + v10 + 8);
  v13 = *(float *)((char *)&unk_140249648 + v10);
  v14 = *(int *)((char *)&unk_16E6A8C28 + v1 * 4);
  v15 = 9LL * *(int *)((char *)&unk_16E6A8C24 + v1 * 4);
  *(float *)&xmmword_14B6432F0[v15] = (float)((float)(v11 * v7) - (float)(v12 * v8)) * 0.0625;
  *((float *)&xmmword_14B6432F0[v15] + 1) = (float)((float)(v9 * v12) - (float)(v13 * v7)) * 0.0625;
  *((float *)&xmmword_14B6432F0[v15] + 2) = (float)((float)(v13 * v8) - (float)(v9 * v11)) * 0.0625;
  HIDWORD(xmmword_14B643330[v15]) = 1;
  LODWORD(xmmword_14B643340[v15]) = v2;
  DWORD1(xmmword_14B643340[v15]) = v3;
  DWORD2(xmmword_14B643340[v15]) = v4;
  v16 = 188 * v14;
  result = *(int *)((char *)&unk_16E6A8C30 + v1 * 4);
  v18 = *(float *)((char *)&unk_140249648 + v16 + 4);
  v19 = *(float *)((char *)&unk_140249648 + v16 + 8);
  v20 = *(float *)((char *)&unk_140249648 + v16);
  v21 = 9 * result;
  *(float *)&xmmword_14B6432F0[v21] = (float)((float)(v18 * v7) - (float)(v19 * v8)) * 0.0625;
  *((float *)&xmmword_14B6432F0[v21] + 1) = (float)((float)(v9 * v19) - (float)(v20 * v7)) * 0.0625;
  *((float *)&xmmword_14B6432F0[v21] + 2) = (float)((float)(v20 * v8) - (float)(v9 * v18)) * 0.0625;
  HIDWORD(xmmword_14B643330[v21]) = 1;
  LODWORD(xmmword_14B643340[v21]) = v2;
  DWORD1(xmmword_14B643340[v21]) = v3;
  DWORD2(xmmword_14B643340[v21]) = v4;
  v22 = 0;
  v23 = (int)(float)(*(float *)&dword_16E6A3D10[v1] * 0.015625);
  v60 = v23;
  v24 = (int)(float)(*(float *)&dword_16E6A3D1C[v1] * 0.015625);
  v58 = v24;
  v25 = (int)(float)(*(float *)&dword_16E6A3D18[v1] * 0.015625);
  v26 = (int)(float)(*(float *)&dword_16E6A3D24[v1] * 0.015625);
  if ( v25 <= v26 )
  {
    result = v25;
    v54 = v25;
    v27 = 0;
    v28 = (__int64)v25 << 6;
    v29 = (unsigned int)(v26 - v25 + 1);
    v56 = (unsigned int)v29;
    do
    {
      if ( result <= 0x3F && v23 <= v24 )
      {
        v30 = v23;
        v31 = (unsigned int)(v24 - v23 + 1);
        do
        {
          if ( v30 <= 0x3F )
          {
            v32 = dword_18A804078[9 * v30 + 9 * v28];
            if ( (int)v32 > 0 )
            {
              memcpy(&v66[v27 + 12292], (const void *)(0x140000000LL + 36 * (v30 + v28) + 1249919100), 4 * v32);
              v22 += v32;
              v27 += v32;
            }
          }
          ++v30;
          --v31;
        }
        while ( v31 );
        result = v54;
        v23 = v60;
        v29 = v56;
        v24 = v58;
      }
      ++result;
      v28 += 64;
      --v29;
      v54 = result;
      v56 = v29;
    }
    while ( v29 );
    v5 = (char *)&unk_16E6A8C1C + v1 * 4;
  }
  v33 = v22;
  v61 = v22;
  if ( v22 > 0 )
  {
    v34 = 0;
    v59 = 0;
    do
    {
      v35 = v66[v34 + 12292];
      v36 = 15432 * v35;
      if ( !*((_DWORD *)&unk_14BC53360 + 15432 * v35)
        && *(float *)&dword_14BC62464[v36] <= *(float *)&dword_16E6A3D1C[v1]
        && *(float *)&dword_14BC6246C[v36] <= *(float *)&dword_16E6A3D24[v1]
        && *(float *)&dword_14BC62470[v36] >= *(float *)&dword_16E6A3D10[v1]
        && *(float *)&dword_14BC62478[v36] >= *(float *)&dword_16E6A3D18[v1] )
      {
        v66[0] = 0;
        v66[12289] = 0;
        sub_1400E29E0(v66, (unsigned int)v35, 0);
        sub_1400E29E0(v66, (unsigned int)v35, 1);
        v37 = (int *)v5;
        v57 = v5;
        v55 = 2;
        do
        {
          v38 = *v37;
          v39 = 188 * v38;
          v40 = (float *)((char *)&unk_140249618 + 188 * v38);
          v41 = (float *)dword_140147698;
          do
          {
            v42 = (float)(*(v41 - 2) - 0.5) * 1.4349999;
            v43 = (float)((float)(*v41 - 0.5) + *v41) - 0.5;
            v44 = (float)((float)(v42 * *(float *)((char *)&unk_140249640 + v39)) + v40[1])
                + (float)(v43 * *(float *)((char *)&unk_140249658 + v39));
            v45 = (float)((float)((float)(v42 * *(float *)((char *)&unk_14024963C + v39)) + *v40)
                        + (float)(v43 * *(float *)((char *)&unk_140249654 + v39)))
                - (float)(*(float *)((char *)&unk_140249648 + v39) * 0.5);
            v46 = *(float *)((char *)&unk_140249650 + v39) * 0.5;
            v47 = (float)((float)(v42 * *(float *)((char *)&unk_140249644 + v39)) + v40[2])
                + (float)(v43 * *(float *)((char *)&unk_14024965C + v39));
            v48 = *(float *)((char *)&unk_14024964C + v39) * 0.5;
            v62[0] = v45;
            v49 = v47 - v46;
            v50 = v44 - v48;
            v62[2] = v49;
            v62[1] = v50;
            result = sub_140080B80((__int64)v64, v66, (float *)&unk_140249618 + 47 * v38, v62);
            if ( (_DWORD)result )
            {
              v51 = v50 - v40[1];
              v63[0] = v45 - *v40;
              v52 = v49 - v40[2];
              v63[1] = v51;
              v63[2] = v52;
              result = sub_140002AE0(
                         v38,
                         v63,
                         v65,
                         (float)((float)((float)(v64[0] - v45) * v65[0]) + (float)((float)(v64[1] - v50) * v65[1]))
                       + (float)((float)(v64[2] - v49) * v65[2]),
                         0,
                         0.125,
                         1040187392);
              *(_DWORD *)((char *)&unk_16E6A8C10 + v1 * 4) = v35;
            }
            v41 += 3;
            dword_16F0D0C60 = 0;
          }
          while ( (__int64)v41 < (__int64)&dword_1401476C8 );
          v37 = (int *)(v57 + 12);
          v53 = v55-- == 1;
          v57 += 12;
        }
        while ( !v53 );
        v34 = v59;
        v33 = v61;
      }
      v5 = (char *)&unk_16E6A8C1C + v1 * 4;
      v59 = ++v34;
    }
    while ( v34 < v33 );
  }
  return result;
}

