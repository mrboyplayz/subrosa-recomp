/* Address: 0x14012ceb0 | Name: sub_14012CEB0 | Size: 1116 bytes */
__int64 __fastcall sub_14012CEB0(int a1, unsigned int a2, signed int a3, int a4, int a5, float a6)
{
  __int64 v6; // r15
  __int64 v9; // rbx
  int v11; // ecx
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  __int64 v24; // rax
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm7_4
  __int64 v32; // r14
  unsigned int v33; // xmm7_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // eax
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rdi
  char v39; // al
  unsigned int *v40; // rcx
  unsigned int v41; // ecx
  __int64 v43; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v44; // [rsp+30h] [rbp-98h] BYREF
  float v45; // [rsp+34h] [rbp-94h]
  float v46; // [rsp+38h] [rbp-90h]
  float v47[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v48; // [rsp+50h] [rbp-78h]

  v6 = a1;
  v9 = 396LL * a3;
  v11 = 0;
  v12 = dword_140404A6C[v9 + 225426061];
  v13 = *(float *)&dword_140404A6C[v9 + 225426175];
  v14 = *(float *)&dword_140404A6C[v9 + 225426176];
  v15 = *(float *)&dword_140404A6C[v9 + 225426174];
  v16 = (int)dword_140404A6C[v9 + 225426057];
  if ( (v12 >> 1) - a5 - 1 >= 0 )
    v11 = ((int)dword_140404A6C[v9 + 225426061] >> 1) - a5 - 1;
  v17 = v12 - 1;
  if ( v11 <= v12 - 1 )
    v17 = v11;
  if ( a4 )
  {
    v15 = -v15;
    v13 = -v13;
    v14 = -v14;
    v24 = v9 * 4 + 28LL * v17;
    v22 = *(float *)((char *)&dword_140404A6C[225426063] + v24);
    v23 = *(float *)((char *)&dword_140404A6C[225426065] + v24);
    v19 = *(float *)((char *)&dword_140404A6C[225426066] + v24);
    v20 = *(float *)((char *)&dword_140404A6C[225426067] + v24);
    v21 = *(float *)((char *)&dword_140404A6C[225426068] + v24);
  }
  else
  {
    v18 = v9 * 4 + 28LL * (v12 - v17);
    v19 = *(float *)((char *)&dword_140404A6C[225426056] + v18);
    v20 = *(float *)((char *)&dword_140404A6C[225426057] + v18);
    v21 = *(float *)((char *)&dword_140404A6C[225426058] + v18);
    v22 = *(float *)((char *)&dword_140404A6C[225426059] + v18);
    v23 = *(float *)((char *)&dword_140404A6C[225426061] + v18);
  }
  v25 = -1.5707964;
  v26 = a6 * fsqrt((float)((float)(v23 - v21) * (float)(v23 - v21)) + (float)((float)(v22 - v19) * (float)(v22 - v19)));
  if ( !dword_140404A6C[v9 + 225426058] )
    v25 = -3.1415927;
  if ( !a4 )
    v25 = v25 + 3.14159265359;
  v27 = (float)(v13 * v26) + v20;
  v28 = (float)(v15 * v26) + v19;
  v29 = *(float *)&dword_140404A6C[34 * dword_140404A6C[v9 + 225426056] + 225391234];
  v30 = (float)(v14 * v26) + v21;
  v44 = LODWORD(v28);
  v46 = v30;
  if ( v27 < v29 )
    v27 = v29;
  if ( v27 < *(float *)&dword_140404A6C[34 * v16 + 225391234] )
    v27 = *(float *)&dword_140404A6C[34 * v16 + 225391234];
  v45 = v27 + 2.0;
  v47[0] = v28 - (float)(*(float *)&dword_1402F6188 * 128.0);
  v47[1] = (float)(v27 + 2.0) - (float)(*(float *)&dword_1402F618C * 128.0);
  v47[2] = v30 - (float)(*(float *)&dword_1402F6190 * 128.0);
  if ( (unsigned int)sub_1400DC050(&v44, v47, 0) )
    v31 = *(float *)&dword_140404A6C[73006982];
  else
    v31 = v45;
  v32 = 383LL * (int)dword_140404A6C[132792829];
  *(float *)&v33 = v31 + (float)(0.375 - *(float *)&dword_140404A6C[24944 * v6 + 346731821]);
  MEMORY[0x1401FCD30](&dword_140404A6C[v32 + 132400638], 0, 1528);
  v34 = LODWORD(v46);
  v35 = dword_140404A6C[v9 + 225426059];
  dword_140404A6C[v32 + 132400641] = v44;
  dword_140404A6C[v32 + 132400643] = v34;
  dword_140404A6C[v32 + 132400642] = v33;
  dword_140404A6C[v32 + 132400637] = v6;
  *(_QWORD *)&dword_140404A6C[v32 + 132400638] = -1;
  *(float *)&dword_140404A6C[v32 + 132400647] = v25;
  dword_140404A6C[v32 + 132401011] = a2;
  dword_140404A6C[v32 + 132400659] = 1080033280;
  dword_140404A6C[v32 + 132400660] = -1090519040;
  dword_140404A6C[v32 + 132400661] = 1077936128;
  dword_140404A6C[v32 + 132400668] = 1;
  if ( a4 )
    v36 = v35 - a5 - 1;
  else
    v36 = a5 + v35;
  dword_140404A6C[v32 + 132400996] = v36;
  dword_140404A6C[v32 + 132400997] = v36;
  dword_140404A6C[v32 + 132400993] = a3;
  dword_140404A6C[v32 + 132400994] = a4;
  dword_140404A6C[v32 + 132400995] = -1;
  dword_140404A6C[v32 + 132400999] = 0;
  v37 = rand() % (signed int)dword_140404A6C[225426046];
  v38 = 383LL * (int)dword_140404A6C[132792829];
  v39 = rand();
  sub_140008E40(dword_140404A6C[132792829], dword_140404A6C[v38 + 132400993], a4, v37, v39 & 1);
  v40 = &dword_140404A6C[v38 + 132400648];
  *(_QWORD *)v40 = 1065353216;
  *((_QWORD *)v40 + 1) = 0;
  *((_QWORD *)v40 + 2) = 1065353216;
  *((_QWORD *)v40 + 3) = 0;
  v40[8] = 1065353216;
  sub_14007B2A0((__int64)&dword_140404A6C[v38 + 132400648], (float *)&dword_140404A6C[v38 + 132400651]);
  v41 = dword_140404A6C[132792829];
  ++dword_140404A6C[dword_140404A6C[132792829] + 132792837];
  dword_140404A6C[132792829] = v41 + 1;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v43 ^ v48);
}

