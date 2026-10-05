/* Address: 0x14003a7b0 | Name: sub_14003A7B0 | Size: 1932 bytes */
__int64 __fastcall sub_14003A7B0(float *a1, float *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  int *v6; // rax
  unsigned int v7; // ebp
  unsigned __int64 v10; // rsi
  int v11; // xmm0_4
  char v12; // al
  char *v13; // rdi
  char *v14; // r13
  int *v15; // rbx
  int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm5_4
  float i; // xmm4_4
  unsigned __int64 v20; // rcx
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  int v32; // eax
  float v33; // xmm1_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  char v37; // al
  float v38; // xmm2_4
  char v39; // al
  float v40; // xmm0_4
  int v41; // eax
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  int v43; // [rsp+38h] [rbp-50h]

  v3 = 0;
  v4 = a3;
  v6 = dword_1909419C8;
  v7 = 0;
  while ( *v6 )
  {
    ++v7;
    v6 += 7166;
    if ( (__int64)v6 >= (__int64)dword_1910411C8 )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v10 = 28664LL * (int)v7;
  memset((char *)&unk_1909419A0 + v10, 0, 0x6FF8u);
  dword_1909419C8[v10 / 4] = 1;
  *(_DWORD *)&algn_190941A08[v10 + 24] = 1;
  v42 = 0;
  v43 = 0;
  dword_1909419D0[v10 / 4] = v4;
  *(_DWORD *)((char *)&unk_1909419D4 + v10) = -1;
  dword_190941A00[v10 / 4] = 3600;
  if ( (_DWORD)v4 == -1 )
    v11 = 1065353216;
  else
    v11 = *((_DWORD *)&unk_16D67D6E0 + 3597 * v4);
  *(_DWORD *)&algn_190941AC4[v10 + 40] = v11;
  *(_DWORD *)&algn_190941AC4[v10 + 28] = 1065353216;
  dword_190941A04[v10 / 4] = 100;
  *(_DWORD *)((char *)&unk_190948718 + v10) = 100;
  *(_DWORD *)((char *)&unk_19094871C + v10) = 100;
  dword_190948724[v10 / 4] = 100;
  dword_19094872C[v10 / 4] = 100;
  dword_190948734[v10 / 4] = 100;
  dword_19094873C[v10 / 4] = 100;
  dword_190948744[v10 / 4] = 100;
  dword_19094874C[v10 / 4] = 100;
  *(_DWORD *)((char *)&unk_1909419E8 + v10) = 255;
  *(_DWORD *)((char *)&unk_1909419E4 + v10) = 127;
  v12 = rand();
  *(_DWORD *)((char *)&unk_1909419DC + v10) = 105;
  dword_1909419F0[v10 / 4] = -1;
  *(_DWORD *)((char *)&unk_190941BE0 + v10) = 960;
  v13 = (char *)&xmmword_1910415A4 + 8;
  v14 = (char *)&xmmword_190941C1C + v10;
  v15 = &dword_190941BF4[v10 / 4];
  *(_DWORD *)&algn_190941A08[v10 + 16] = 3600 * ((v12 & 3) + 3);
  dword_190948498[v10 / 4] = 0;
  *(_DWORD *)((char *)&unk_1909484C0 + v10) = 0;
  *(_DWORD *)((char *)&unk_1909484E8 + v10) = 0;
  *(_DWORD *)((char *)&unk_190948510 + v10) = 0;
  *(_DWORD *)((char *)&unk_190948538 + v10) = 0;
  *(_DWORD *)((char *)&unk_190948560 + v10) = 0;
  *(_DWORD *)((char *)&unk_190948588 + v10) = 0;
  *(_DWORD *)((char *)&unk_1909485B0 + v10) = 0;
  do
  {
    v16 = *((_DWORD *)v13 - 3);
    v17 = *((float *)v13 - 2);
    v18 = *((float *)v13 - 1);
    for ( i = *(float *)v13; v16; i = i + *(float *)((char *)&xmmword_1910415A4 + v20 + 8) )
    {
      v20 = 100LL * v16;
      v16 = dword_1910415A0[v20 / 4];
      v17 = v17 + *(float *)((char *)&xmmword_1910415A4 + v20);
      v18 = v18 + *(float *)((char *)&xmmword_1910415A4 + v20 + 4);
    }
    v21 = i * a2[7];
    v22 = (float)((float)(i * a2[6]) + (float)(v17 * *a2)) + (float)((float)(v18 * a2[3]) + *a1);
    v23 = (float)(i * a2[8]) + (float)(v17 * a2[2]);
    v24 = v21 + (float)(v17 * a2[1]);
    v25 = (float)(v18 * a2[4]) + a1[1];
    v26 = (float)(v18 * a2[5]) + a1[2];
    *((float *)v15 - 2) = v22;
    v27 = v24 + v25;
    v28 = *((float *)v13 + 9);
    *((float *)v15 - 1) = v27;
    v29 = v23 + v26;
    *(float *)v15 = v29;
    *((float *)v15 + 1) = v22;
    v30 = *((float *)v13 + 11);
    *((float *)v15 + 2) = v27;
    v31 = *((float *)v13 + 10);
    *((float *)v15 + 3) = v29;
    v15[10] = *(_DWORD *)a2;
    v15[11] = *((_DWORD *)a2 + 1);
    v15[12] = *((_DWORD *)a2 + 2);
    v15[13] = *((_DWORD *)a2 + 3);
    v15[14] = *((_DWORD *)a2 + 4);
    v15[15] = *((_DWORD *)a2 + 5);
    v15[16] = *((_DWORD *)a2 + 6);
    v15[17] = *((_DWORD *)a2 + 7);
    v15[18] = *((_DWORD *)a2 + 8);
    v15[25] = *((_DWORD *)v13 + 4);
    v15[27] = *((_DWORD *)v13 + 5);
    v15[28] = *((_DWORD *)v13 + 6);
    v15[29] = *((_DWORD *)v13 + 7);
    v15[30] = *((_DWORD *)v13 + 8);
    v15[26] = 1050673152;
    *((float *)v15 + 34) = v28;
    *((float *)v15 + 35) = v31;
    *((float *)v15 + 36) = v30;
    *((float *)v15 + 31) = 1.0 / v28;
    *((float *)v15 + 33) = 1.0 / v30;
    *((float *)v15 + 32) = 1.0 / v31;
    v32 = sub_140042790(0, (int)v14 - 48, (_DWORD)v14, (unsigned int)&v42, v15[30], (__int64)(v14 + 84));
    *(v15 - 3) = v32;
    v33 = *((float *)v15 + 31);
    v34 = 47LL * v32;
    *((float *)v15 + 37) = v33;
    v35 = *((float *)v15 + 32);
    dword_14024960C[v34] = v7;
    dword_140249610[v34] = v3;
    if ( v33 > v35 )
    {
      *((float *)v15 + 37) = v35;
      v33 = v35;
    }
    v36 = *((float *)v15 + 33);
    if ( v33 > v36 )
      *((float *)v15 + 37) = v36;
    *((_QWORD *)v15 + 19) = 1065353216;
    *((_QWORD *)v15 + 20) = 0;
    ++v3;
    *((_QWORD *)v15 + 22) = 0;
    v14 += 312;
    *((_QWORD *)v15 + 21) = 1065353216;
    v13 += 100;
    v15[46] = 1065353216;
    v15 += 78;
  }
  while ( v3 < 16 );
  sub_140054E60(v7);
  sub_140054150(v7);
  sub_1400331B0((int *)((char *)&unk_1909448F0 + v10));
  sub_1400331B0((int *)((char *)&unk_1909448F0 + v10));
  *(float *)((char *)&unk_190948284 + v10) = *a1;
  *(float *)((char *)&unk_190948288 + v10) = a1[1];
  *(float *)((char *)&unk_19094828C + v10) = a1[2];
  *(float *)((char *)&unk_190948360 + v10) = *a1;
  *(float *)((char *)&unk_190948364 + v10) = a1[1];
  *(float *)((char *)&unk_190948368 + v10) = a1[2];
  if ( a3 == -1 )
  {
    v37 = rand();
    *(_DWORD *)((char *)&unk_19094864C + v10) = 1023410176;
    *(_DWORD *)((char *)&unk_190948650 + v10) = -1105618534;
    *(_DWORD *)((char *)&unk_190948664 + v10) = 1023410176;
    *(_DWORD *)((char *)&unk_190948668 + v10) = -1105618534;
    v38 = (float)(v37 & 0xF) * 0.001953125;
    *(float *)((char *)&unk_190948648 + v10) = 0.0625 - v38;
    *(float *)((char *)&unk_190948660 + v10) = v38 - 0.0625;
    v39 = rand();
    *(_DWORD *)((char *)&unk_19094865C + v10) = 1065353216;
    *(_DWORD *)((char *)&unk_190948674 + v10) = 1065353216;
    v40 = (float)((float)(v39 & 0xF) * 0.0078125) + 1.0;
    *(float *)((char *)&unk_190948654 + v10) = v40;
    *(float *)((char *)&unk_190948658 + v10) = v40;
    *(float *)((char *)&unk_19094866C + v10) = v40;
    *(float *)((char *)&unk_190948670 + v10) = v40;
    *(_DWORD *)((char *)&unk_19094895C + v10) = 0;
    *(_QWORD *)((char *)&unk_190948950 + v10) = 0;
  }
  else
  {
    *(_DWORD *)((char *)&unk_190948648 + v10) = dword_16D680B14[3597 * a3 + 94];
    *(_DWORD *)((char *)&unk_19094864C + v10) = dword_16D680B14[3597 * a3 + 95];
    *(_DWORD *)((char *)&unk_190948650 + v10) = dword_16D680B14[3597 * a3 + 96];
    *(_DWORD *)((char *)&unk_190948654 + v10) = dword_16D680B14[3597 * a3 + 97];
    *(_DWORD *)((char *)&unk_190948658 + v10) = dword_16D680B14[3597 * a3 + 98];
    *(_DWORD *)((char *)&unk_19094865C + v10) = dword_16D680B14[3597 * a3 + 99];
    *(_DWORD *)((char *)&unk_190948660 + v10) = dword_16D680B14[3597 * a3 + 100];
    *(_DWORD *)((char *)&unk_190948664 + v10) = dword_16D680B14[3597 * a3 + 101];
    *(_DWORD *)((char *)&unk_190948668 + v10) = dword_16D680B14[3597 * a3 + 102];
    *(_DWORD *)((char *)&unk_19094866C + v10) = dword_16D680B14[3597 * a3 + 103];
    *(_DWORD *)((char *)&unk_190948670 + v10) = dword_16D680B14[3597 * a3 + 104];
    *(_DWORD *)((char *)&unk_190948674 + v10) = dword_16D680B14[3597 * a3 + 105];
    *(_DWORD *)((char *)&unk_190948944 + v10) = dword_16D67D624[3597 * a3];
    *(_DWORD *)((char *)&unk_190948948 + v10) = dword_16D680D4C[3597 * a3];
    *(_DWORD *)((char *)&unk_19094894C + v10) = dword_16D680D70[3597 * a3];
    *(_DWORD *)((char *)&unk_190948950 + v10) = dword_16D680D50[3597 * a3];
    *(_DWORD *)((char *)&unk_190948954 + v10) = dword_16D680D54[3597 * a3];
    *(_DWORD *)((char *)&unk_190948958 + v10) = dword_16D680D58[3597 * a3];
    *(_DWORD *)((char *)&unk_19094895C + v10) = dword_16D680D5C[3597 * a3];
    dword_190948960[v10 / 4] = dword_16D680D60[3597 * a3];
    dword_190948964[v10 / 4] = dword_16D680D64[3597 * a3];
    v41 = *(_DWORD *)&algn_16D680D68[14388 * a3];
    dword_190948970[v10 / 4] = *(_DWORD *)&algn_16D680D74[14388 * a3];
    dword_190948968[v10 / 4] = v41;
  }
  if ( dword_163D75B60 )
    ++dword_1910411A0[v7];
  return v7;
}

