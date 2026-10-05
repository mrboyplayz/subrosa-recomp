/* Address: 0x140053840 | Name: sub_140053840 | Size: 1930 bytes */
__int64 __fastcall sub_140053840(float *a1, float *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  unsigned int *v6; // rax
  unsigned int v7; // ebp
  __int64 v10; // rsi
  unsigned int v11; // xmm0_4
  char v12; // al
  unsigned int *v13; // rdi
  unsigned int *v14; // r13
  unsigned int *v15; // rbx
  signed int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm5_4
  float i; // xmm4_4
  __int64 v20; // rcx
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
  signed int v32; // eax
  float v33; // xmm1_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  char v37; // al
  float v38; // xmm2_4
  char v39; // al
  unsigned int v40; // xmm0_4
  unsigned int v41; // eax
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  int v43; // [rsp+38h] [rbp-50h]

  v3 = 0;
  v4 = a3;
  v6 = &dword_140404A6C[280651303];
  v7 = 0;
  while ( *v6 )
  {
    ++v7;
    v6 += 7166;
    if ( (__int64)v6 >= (__int64)&dword_140404A6C[282485799] )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v10 = 7166LL * (int)v7;
  MEMORY[0x1401FCD30](&dword_140404A6C[v10 + 280651293], 0, 28664);
  dword_140404A6C[v10 + 280651303] = 1;
  dword_140404A6C[v10 + 280651325] = 1;
  v42 = 0;
  v43 = 0;
  dword_140404A6C[v10 + 280651305] = v4;
  dword_140404A6C[v10 + 280651306] = -1;
  dword_140404A6C[v10 + 280651317] = 3600;
  if ( (_DWORD)v4 == -1 )
    v11 = 1065353216;
  else
    v11 = dword_140404A6C[3597 * v4 + 71856333];
  dword_140404A6C[v10 + 280651376] = v11;
  dword_140404A6C[v10 + 280651373] = 1065353216;
  dword_140404A6C[v10 + 280651318] = 100;
  dword_140404A6C[v10 + 280658299] = 100;
  dword_140404A6C[v10 + 280658300] = 100;
  dword_140404A6C[v10 + 280658302] = 100;
  dword_140404A6C[v10 + 280658304] = 100;
  dword_140404A6C[v10 + 280658306] = 100;
  dword_140404A6C[v10 + 280658308] = 100;
  dword_140404A6C[v10 + 280658310] = 100;
  dword_140404A6C[v10 + 280658312] = 100;
  dword_140404A6C[v10 + 280651311] = 255;
  dword_140404A6C[v10 + 280651310] = 127;
  v12 = rand();
  dword_140404A6C[v10 + 280651308] = 105;
  dword_140404A6C[v10 + 280651313] = -1;
  dword_140404A6C[v10 + 280651437] = 960;
  v13 = &dword_140404A6C[282486048];
  v14 = &dword_140404A6C[v10 + 280651452];
  v15 = &dword_140404A6C[v10 + 280651442];
  dword_140404A6C[v10 + 280651323] = 3600 * ((v12 & 3) + 3);
  dword_140404A6C[v10 + 280658139] = 0;
  dword_140404A6C[v10 + 280658149] = 0;
  dword_140404A6C[v10 + 280658159] = 0;
  dword_140404A6C[v10 + 280658169] = 0;
  dword_140404A6C[v10 + 280658179] = 0;
  dword_140404A6C[v10 + 280658189] = 0;
  dword_140404A6C[v10 + 280658199] = 0;
  dword_140404A6C[v10 + 280658209] = 0;
  do
  {
    v16 = *(v13 - 3);
    v17 = *((float *)v13 - 2);
    v18 = *((float *)v13 - 1);
    for ( i = *(float *)v13; v16; i = i + *(float *)&dword_140404A6C[v20 + 282486048] )
    {
      v20 = 25LL * v16;
      v16 = dword_140404A6C[v20 + 282486045];
      v17 = v17 + *(float *)&dword_140404A6C[v20 + 282486046];
      v18 = v18 + *(float *)&dword_140404A6C[v20 + 282486047];
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
    v15[25] = v13[4];
    v15[27] = v13[5];
    v15[28] = v13[6];
    v15[29] = v13[7];
    v15[30] = v13[8];
    v15[26] = 1050673152;
    *((float *)v15 + 34) = v28;
    *((float *)v15 + 35) = v31;
    *((float *)v15 + 36) = v30;
    *((float *)v15 + 31) = 1.0 / v28;
    *((float *)v15 + 33) = 1.0 / v30;
    *((float *)v15 + 32) = 1.0 / v31;
    v32 = sub_14005CF80(0, (int)v14 - 48, (_DWORD)v14, (unsigned int)&v42, v15[30], (__int64)(v14 + 21));
    *(v15 - 3) = v32;
    v33 = *((float *)v15 + 31);
    v34 = 47LL * v32;
    *((float *)v15 + 37) = v33;
    v35 = *((float *)v15 + 32);
    dword_140404A6C[v34 + 18215712] = v7;
    dword_140404A6C[v34 + 18215713] = v3;
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
    v14 += 78;
    *((_QWORD *)v15 + 21) = 1065353216;
    v13 += 25;
    v15[46] = 1065353216;
    v15 += 78;
  }
  while ( v3 < 16 );
  sub_1400AB7B0(v7);
  sub_1400AAAA0(v7);
  sub_140048110((int *)&dword_140404A6C[v10 + 280654321]);
  sub_140048110((int *)&dword_140404A6C[v10 + 280654321]);
  dword_140404A6C[v10 + 280658006] = *(_DWORD *)a1;
  dword_140404A6C[v10 + 280658007] = *((_DWORD *)a1 + 1);
  dword_140404A6C[v10 + 280658008] = *((_DWORD *)a1 + 2);
  dword_140404A6C[v10 + 280658061] = *(_DWORD *)a1;
  dword_140404A6C[v10 + 280658062] = *((_DWORD *)a1 + 1);
  dword_140404A6C[v10 + 280658063] = *((_DWORD *)a1 + 2);
  if ( a3 == -1 )
  {
    v37 = rand();
    dword_140404A6C[v10 + 280658248] = 1023410176;
    dword_140404A6C[v10 + 280658249] = -1105618534;
    dword_140404A6C[v10 + 280658254] = 1023410176;
    dword_140404A6C[v10 + 280658255] = -1105618534;
    v38 = (float)(v37 & 0xF) * 0.001953125;
    *(float *)&dword_140404A6C[v10 + 280658247] = 0.0625 - v38;
    *(float *)&dword_140404A6C[v10 + 280658253] = v38 - 0.0625;
    v39 = rand();
    dword_140404A6C[v10 + 280658252] = 1065353216;
    dword_140404A6C[v10 + 280658258] = 1065353216;
    *(float *)&v40 = (float)((float)(v39 & 0xF) * 0.0078125) + 1.0;
    dword_140404A6C[v10 + 280658250] = v40;
    dword_140404A6C[v10 + 280658251] = v40;
    dword_140404A6C[v10 + 280658256] = v40;
    dword_140404A6C[v10 + 280658257] = v40;
    dword_140404A6C[v10 + 280658444] = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 280658441] = 0;
  }
  else
  {
    dword_140404A6C[v10 + 280658247] = dword_140404A6C[3597 * a3 + 71859768];
    dword_140404A6C[v10 + 280658248] = dword_140404A6C[3597 * a3 + 71859769];
    dword_140404A6C[v10 + 280658249] = dword_140404A6C[3597 * a3 + 71859770];
    dword_140404A6C[v10 + 280658250] = dword_140404A6C[3597 * a3 + 71859771];
    dword_140404A6C[v10 + 280658251] = dword_140404A6C[3597 * a3 + 71859772];
    dword_140404A6C[v10 + 280658252] = dword_140404A6C[3597 * a3 + 71859773];
    dword_140404A6C[v10 + 280658253] = dword_140404A6C[3597 * a3 + 71859774];
    dword_140404A6C[v10 + 280658254] = dword_140404A6C[3597 * a3 + 71859775];
    dword_140404A6C[v10 + 280658255] = dword_140404A6C[3597 * a3 + 71859776];
    dword_140404A6C[v10 + 280658256] = dword_140404A6C[3597 * a3 + 71859777];
    dword_140404A6C[v10 + 280658257] = dword_140404A6C[3597 * a3 + 71859778];
    dword_140404A6C[v10 + 280658258] = dword_140404A6C[3597 * a3 + 71859779];
    dword_140404A6C[v10 + 280658438] = dword_140404A6C[3597 * a3 + 71856286];
    dword_140404A6C[v10 + 280658439] = dword_140404A6C[3597 * a3 + 71859816];
    dword_140404A6C[v10 + 280658440] = dword_140404A6C[3597 * a3 + 71859825];
    dword_140404A6C[v10 + 280658441] = dword_140404A6C[3597 * a3 + 71859817];
    dword_140404A6C[v10 + 280658442] = dword_140404A6C[3597 * a3 + 71859818];
    dword_140404A6C[v10 + 280658443] = dword_140404A6C[3597 * a3 + 71859819];
    dword_140404A6C[v10 + 280658444] = dword_140404A6C[3597 * a3 + 71859820];
    dword_140404A6C[v10 + 280658445] = dword_140404A6C[3597 * a3 + 71859821];
    dword_140404A6C[v10 + 280658446] = dword_140404A6C[3597 * a3 + 71859822];
    v41 = dword_140404A6C[3597 * a3 + 71859823];
    dword_140404A6C[v10 + 280658449] = dword_140404A6C[3597 * a3 + 71859826];
    dword_140404A6C[v10 + 280658447] = v41;
  }
  if ( dword_140404A6C[456202453] )
    ++dword_140404A6C[v7 + 282485789];
  return v7;
}

