/* Address: 0x14005cf80 | Name: sub_14005CF80 | Size: 620 bytes */
__int64 __fastcall sub_14005CF80(
        unsigned int a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v7; // rax
  unsigned int v11; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4

  v7 = &dword_140404A6C[18215709];
  v11 = 0;
  while ( *v7 )
  {
    ++v11;
    v7 += 47;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[18600733] )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v13 = 47LL * (int)v11;
  MEMORY[0x1401FCD30](&dword_140404A6C[v13 + 18215710], 0, 184);
  dword_140404A6C[v13 + 18215714] = a5;
  dword_140404A6C[v13 + 18215709] = 1;
  dword_140404A6C[v13 + 18215710] = a1;
  dword_140404A6C[v13 + 18215752] = 1056964608;
  dword_140404A6C[v13 + 18215753] = 1048576000;
  dword_140404A6C[v13 + 18215754] = 1056964608;
  dword_140404A6C[v13 + 18215715] = *a2;
  dword_140404A6C[v13 + 18215716] = a2[1];
  dword_140404A6C[v13 + 18215717] = a2[2];
  dword_140404A6C[v13 + 18215724] = *a3;
  dword_140404A6C[v13 + 18215725] = a3[1];
  dword_140404A6C[v13 + 18215726] = a3[2];
  dword_140404A6C[v13 + 18215727] = a3[3];
  dword_140404A6C[v13 + 18215728] = a3[4];
  dword_140404A6C[v13 + 18215729] = a3[5];
  dword_140404A6C[v13 + 18215730] = a3[6];
  dword_140404A6C[v13 + 18215731] = a3[7];
  dword_140404A6C[v13 + 18215732] = a3[8];
  if ( a4 )
  {
    dword_140404A6C[v13 + 18215718] = *a4;
    dword_140404A6C[v13 + 18215719] = a4[1];
    dword_140404A6C[v13 + 18215720] = a4[2];
  }
  dword_140404A6C[v13 + 18215742] = *a6;
  dword_140404A6C[v13 + 18215743] = a6[1];
  dword_140404A6C[v13 + 18215744] = a6[2];
  v14 = 47LL * (int)v11;
  v15 = *(float *)&dword_140404A6C[v14 + 18215742];
  if ( v15 <= 0.0 )
    v16 = 0.0;
  else
    v16 = 1.0 / v15;
  *(float *)&dword_140404A6C[v14 + 18215745] = v16;
  v17 = *(float *)&dword_140404A6C[v14 + 18215743];
  if ( v17 <= 0.0 )
    v18 = 0.0;
  else
    v18 = 1.0 / v17;
  *(float *)&dword_140404A6C[v14 + 18215746] = v18;
  v19 = *(float *)&dword_140404A6C[v14 + 18215744];
  if ( v19 <= 0.0 )
    v20 = 0.0;
  else
    v20 = 1.0 / v19;
  *(float *)&dword_140404A6C[v14 + 18215747] = v20;
  v21 = dword_140404A6C[v13 + 18215742];
  dword_140404A6C[v13 + 18215748] = v21;
  v22 = dword_140404A6C[v13 + 18215743];
  if ( *(float *)&v21 > *(float *)&v22 )
  {
    dword_140404A6C[v13 + 18215748] = v22;
    v21 = v22;
  }
  v23 = dword_140404A6C[v13 + 18215744];
  if ( *(float *)&v21 > *(float *)&v23 )
    dword_140404A6C[v13 + 18215748] = v23;
  return v11;
}

