/* Address: 0x1400331b0 | Name: sub_1400331B0 | Size: 2260 bytes */
unsigned __int64 __fastcall sub_1400331B0(int *a1)
{
  int v2; // ebp
  float *v3; // r10
  __int64 v4; // rsi
  float v5; // xmm7_4
  float v6; // xmm11_4
  float v7; // xmm9_4
  __int64 v8; // r15
  float *v9; // r14
  unsigned __int64 v10; // rbx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm15_4
  float v14; // xmm14_4
  float v15; // xmm10_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  float v21; // xmm1_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  float *v29; // rdx
  __int64 v30; // r11
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  __int64 v34; // rcx
  int *v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  unsigned __int64 result; // rax
  __int64 v68; // r10
  int v69; // r8d
  char *v70; // rdx
  int *v71; // r9
  __int64 v72; // rcx
  float v73; // [rsp+0h] [rbp-428h]
  float v74; // [rsp+4h] [rbp-424h]
  float v75; // [rsp+8h] [rbp-420h]
  float v76; // [rsp+Ch] [rbp-41Ch]
  float v77; // [rsp+14h] [rbp-414h]
  float v78; // [rsp+18h] [rbp-410h]
  float v79; // [rsp+20h] [rbp-408h]
  float v80; // [rsp+24h] [rbp-404h]
  float v81; // [rsp+2Ch] [rbp-3FCh]
  float v82; // [rsp+34h] [rbp-3F4h]
  float v83; // [rsp+38h] [rbp-3F0h]
  char v84; // [rsp+58h] [rbp-3D0h] BYREF

  v2 = 0;
  if ( *a1 > 0 )
  {
    v3 = (float *)(a1 + 19);
    do
    {
      v4 = 0;
      v3[2] = *(v3 - 1);
      v5 = 0.0;
      v6 = 0.0;
      v3[3] = *v3;
      v7 = 0.0;
      v3[4] = v3[1];
      v8 = *((int *)v3 - 18);
      v74 = 0.0;
      v75 = 0.0;
      v76 = 0.0;
      if ( v8 >= 4 )
      {
        v9 = v3 - 17;
        v10 = ((unsigned __int64)(v8 - 4) >> 2) + 1;
        v4 = 4 * v10;
        do
        {
          v11 = v9[1];
          v12 = v9[2];
          v13 = v9[10];
          v14 = v9[11];
          v15 = v9[13];
          v16 = v9[14];
          v17 = v9[15];
          v18 = 188LL * *(int *)v9;
          v19 = 188LL * *((int *)v9 + 4);
          v73 = *(float *)((char *)&unk_140249600 + v18 + 60) * v11;
          v78 = v11 * *(float *)((char *)&unk_140249600 + v18 + 64);
          v20 = 188LL * *((int *)v9 + 8);
          v81 = v11 * *(float *)((char *)&unk_140249600 + v18 + 68);
          v21 = v9[3];
          v22 = 188LL * *((int *)v9 + 12);
          v77 = *(float *)((char *)&unk_140249600 + v18 + 84) * v21;
          v79 = v21 * *(float *)((char *)&unk_140249600 + v18 + 88);
          v82 = v21 * *(float *)((char *)&unk_140249600 + v18 + 92);
          v23 = v9[5];
          v24 = *(float *)((char *)&unk_140249600 + v19 + 60) * v23;
          v80 = v23 * *(float *)((char *)&unk_140249600 + v19 + 64);
          v25 = v9[7];
          v26 = v9[9];
          v83 = v23 * *(float *)((char *)&unk_140249600 + v19 + 68);
          v27 = v9[6];
          v9 += 16;
          v28 = (float)((float)((float)((float)((float)((float)(v73 + *(float *)((char *)&unk_140249600 + v18 + 24))
                                                      + (float)(*(float *)((char *)&unk_140249600 + v18 + 72) * v12))
                                              + v77)
                                      + v74)
                              + (float)((float)((float)(v24 + *(float *)((char *)&unk_140249600 + v19 + 24))
                                              + (float)(*(float *)((char *)&unk_140249600 + v19 + 72) * v27))
                                      + (float)(*(float *)((char *)&unk_140249600 + v19 + 84) * v25)))
                      + (float)((float)((float)((float)(*(float *)((char *)&unk_140249600 + v20 + 60) * v26)
                                              + *(float *)((char *)&unk_140249600 + v20 + 24))
                                      + (float)(*(float *)((char *)&unk_140249600 + v20 + 72) * v13))
                              + (float)(*(float *)((char *)&unk_140249600 + v20 + 84) * v14)))
              + (float)((float)((float)((float)(v15 * *(float *)((char *)&unk_140249600 + v22 + 60))
                                      + *(float *)((char *)&unk_140249600 + v22 + 24))
                              + (float)(v16 * *(float *)((char *)&unk_140249600 + v22 + 72)))
                      + (float)(v17 * *(float *)((char *)&unk_140249600 + v22 + 84)));
          v74 = v28;
          v6 = (float)((float)((float)((float)((float)((float)(v78 + *(float *)((char *)&unk_140249600 + v18 + 28))
                                                     + (float)(v12 * *(float *)((char *)&unk_140249600 + v18 + 76)))
                                             + v79)
                                     + v75)
                             + (float)((float)((float)(v80 + *(float *)((char *)&unk_140249600 + v19 + 28))
                                             + (float)(v27 * *(float *)((char *)&unk_140249600 + v19 + 76)))
                                     + (float)(v25 * *(float *)((char *)&unk_140249600 + v19 + 88))))
                     + (float)((float)((float)((float)(v26 * *(float *)((char *)&unk_140249600 + v20 + 64))
                                             + *(float *)((char *)&unk_140249600 + v20 + 28))
                                     + (float)(v13 * *(float *)((char *)&unk_140249600 + v20 + 76)))
                             + (float)(v14 * *(float *)((char *)&unk_140249600 + v20 + 88))))
             + (float)((float)((float)((float)(v15 * *(float *)((char *)&unk_140249600 + v22 + 64))
                                     + *(float *)((char *)&unk_140249600 + v22 + 28))
                             + (float)(v16 * *(float *)((char *)&unk_140249600 + v22 + 76)))
                     + (float)(v17 * *(float *)((char *)&unk_140249600 + v22 + 88)));
          v75 = v6;
          v7 = (float)((float)((float)((float)((float)((float)(v81 + *(float *)((char *)&unk_140249600 + v18 + 32))
                                                     + (float)(v12 * *(float *)((char *)&unk_140249600 + v18 + 80)))
                                             + v82)
                                     + v76)
                             + (float)((float)((float)(v83 + *(float *)((char *)&unk_140249600 + v19 + 32))
                                             + (float)(v27 * *(float *)((char *)&unk_140249600 + v19 + 80)))
                                     + (float)(v25 * *(float *)((char *)&unk_140249600 + v19 + 92))))
                     + (float)((float)((float)((float)(v26 * *(float *)((char *)&unk_140249600 + v20 + 68))
                                             + *(float *)((char *)&unk_140249600 + v20 + 32))
                                     + (float)(v13 * *(float *)((char *)&unk_140249600 + v20 + 80)))
                             + (float)(v14 * *(float *)((char *)&unk_140249600 + v20 + 92))))
             + (float)((float)((float)((float)(v15 * *(float *)((char *)&unk_140249600 + v22 + 68))
                                     + *(float *)((char *)&unk_140249600 + v22 + 32))
                             + (float)(v16 * *(float *)((char *)&unk_140249600 + v22 + 80)))
                     + (float)(v17 * *(float *)((char *)&unk_140249600 + v22 + 92)));
          v76 = v7;
          --v10;
        }
        while ( v10 );
        v5 = v28;
      }
      if ( v4 < v8 )
      {
        v29 = &v3[4 * v4 - 17];
        v30 = v8 - v4;
        do
        {
          v31 = v29[1];
          v32 = v29[2];
          v33 = v29[3];
          v34 = 188LL * *(int *)v29;
          v29 += 4;
          v5 = v5
             + (float)((float)((float)((float)(v31 * *(float *)((char *)&unk_140249600 + v34 + 60))
                                     + *(float *)((char *)&unk_140249600 + v34 + 24))
                             + (float)(v32 * *(float *)((char *)&unk_140249600 + v34 + 72)))
                     + (float)(v33 * *(float *)((char *)&unk_140249600 + v34 + 84)));
          v6 = v6
             + (float)((float)((float)((float)(v31 * *(float *)((char *)&unk_140249600 + v34 + 64))
                                     + *(float *)((char *)&unk_140249600 + v34 + 28))
                             + (float)(v32 * *(float *)((char *)&unk_140249600 + v34 + 76)))
                     + (float)(v33 * *(float *)((char *)&unk_140249600 + v34 + 88)));
          v7 = v7
             + (float)((float)((float)((float)(v31 * *(float *)((char *)&unk_140249600 + v34 + 68))
                                     + *(float *)((char *)&unk_140249600 + v34 + 32))
                             + (float)(v32 * *(float *)((char *)&unk_140249600 + v34 + 80)))
                     + (float)(v33 * *(float *)((char *)&unk_140249600 + v34 + 92)));
          --v30;
        }
        while ( v30 );
      }
      ++v2;
      *(v3 - 1) = v5 * (float)(1.0 / (float)(int)v8);
      *v3 = v6 * (float)(1.0 / (float)(int)v8);
      v3[1] = v7 * (float)(1.0 / (float)(int)v8);
      v3 += 23;
    }
    while ( v2 < *a1 );
  }
  v35 = a1 + 2453;
  v36 = 2;
  do
  {
    v37 = *(v35 - 18);
    if ( v37 > 0 )
      *(v35 - 18) = v37 - 1;
    if ( *v35 > 0 )
      --*v35;
    v38 = v35[18];
    if ( v38 > 0 )
      v35[18] = v38 - 1;
    v39 = v35[36];
    if ( v39 > 0 )
      v35[36] = v39 - 1;
    v40 = v35[54];
    if ( v40 > 0 )
      v35[54] = v40 - 1;
    v41 = v35[72];
    if ( v41 > 0 )
      v35[72] = v41 - 1;
    v42 = v35[90];
    if ( v42 > 0 )
      v35[90] = v42 - 1;
    v43 = v35[108];
    if ( v43 > 0 )
      v35[108] = v43 - 1;
    v44 = v35[126];
    if ( v44 > 0 )
      v35[126] = v44 - 1;
    v45 = v35[144];
    if ( v45 > 0 )
      v35[144] = v45 - 1;
    v46 = v35[162];
    if ( v46 > 0 )
      v35[162] = v46 - 1;
    v47 = v35[180];
    if ( v47 > 0 )
      v35[180] = v47 - 1;
    v48 = v35[198];
    if ( v48 > 0 )
      v35[198] = v48 - 1;
    v49 = v35[216];
    if ( v49 > 0 )
      v35[216] = v49 - 1;
    v50 = v35[234];
    if ( v50 > 0 )
      v35[234] = v50 - 1;
    v51 = v35[252];
    if ( v51 > 0 )
      v35[252] = v51 - 1;
    v52 = v35[270];
    if ( v52 > 0 )
      v35[270] = v52 - 1;
    v53 = v35[288];
    if ( v53 > 0 )
      v35[288] = v53 - 1;
    v54 = v35[306];
    if ( v54 > 0 )
      v35[306] = v54 - 1;
    v55 = v35[324];
    if ( v55 > 0 )
      v35[324] = v55 - 1;
    v56 = v35[342];
    if ( v56 > 0 )
      v35[342] = v56 - 1;
    v57 = v35[360];
    if ( v57 > 0 )
      v35[360] = v57 - 1;
    v58 = v35[378];
    if ( v58 > 0 )
      v35[378] = v58 - 1;
    v59 = v35[396];
    if ( v59 > 0 )
      v35[396] = v59 - 1;
    v60 = v35[414];
    if ( v60 > 0 )
      v35[414] = v60 - 1;
    v61 = v35[432];
    if ( v61 > 0 )
      v35[432] = v61 - 1;
    v62 = v35[450];
    if ( v62 > 0 )
      v35[450] = v62 - 1;
    v63 = v35[468];
    if ( v63 > 0 )
      v35[468] = v63 - 1;
    v64 = v35[486];
    if ( v64 > 0 )
      v35[486] = v64 - 1;
    v65 = v35[504];
    if ( v65 > 0 )
      v35[504] = v65 - 1;
    v66 = v35[522];
    if ( v66 > 0 )
      v35[522] = v66 - 1;
    result = (unsigned int)v35[540];
    if ( (int)result > 0 )
    {
      result = (unsigned int)(result - 1);
      v35[540] = result;
    }
    v35 += 576;
    --v36;
  }
  while ( v36 );
  v68 = *a1;
  v69 = 0;
  if ( v68 > 0 )
  {
    v70 = &v84;
    v71 = a1 + 20;
    do
    {
      v72 = 0;
      result = (unsigned __int64)(a1 + 2436);
      do
      {
        if ( *(int *)(result - 4) > 0
          && *(_DWORD *)result == v69
          && !*(_DWORD *)(result + 4)
          && !*(_DWORD *)(result + 8)
          && !*(_DWORD *)(result + 12) )
        {
          break;
        }
        ++v72;
        result += 72LL;
      }
      while ( v72 < 64 );
      ++v69;
      v71 += 23;
      v70 += 12;
      --v68;
    }
    while ( v68 );
  }
  return result;
}

