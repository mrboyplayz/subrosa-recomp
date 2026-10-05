/* Address: 0x14004e8a0 | Name: sub_14004E8A0 | Size: 701 bytes */
__int64 __fastcall sub_14004E8A0(signed int a1, unsigned int *a2, float *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v8; // r14
  float *v9; // rbx
  float *v10; // rdi
  int v11; // xmm3_4
  int v12; // xmm2_4
  int v13; // xmm1_4
  float *v14; // rdx
  unsigned int v15; // eax

  v4 = (int)dword_140404A6C[438881242];
  v6 = a1;
  if ( (int)dword_140404A6C[438881242] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v8 = 23LL * (int)dword_140404A6C[438881242];
  v9 = (float *)&dword_140404A6C[v8 + 437914601];
  *(_OWORD *)&dword_140404A6C[v8 + 437914582] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914586] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914590] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914594] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914598] = 0;
  *(_QWORD *)&dword_140404A6C[v8 + 437914602] = 0;
  dword_140404A6C[v8 + 437914581] = a1;
  dword_140404A6C[v8 + 437914583] = a4;
  dword_140404A6C[v8 + 437914582] = 600;
  dword_140404A6C[v8 + 437914586] = *a2;
  dword_140404A6C[v8 + 437914587] = a2[1];
  dword_140404A6C[v8 + 437914588] = a2[2];
  dword_140404A6C[v8 + 437914589] = *a2;
  dword_140404A6C[v8 + 437914590] = a2[1];
  dword_140404A6C[v8 + 437914591] = a2[2];
  *v9 = -*a3;
  v9[1] = -a3[1];
  v9[2] = -a3[2];
  sub_14007A240(&dword_140404A6C[v8 + 437914601], &dword_140404A6C[23 * v4 + 437914601]);
  v10 = (float *)&dword_140404A6C[v8 + 437914595];
  if ( fabs(*(float *)&dword_140404A6C[v8 + 437914602]) >= 0.70700002 )
  {
    v11 = dword_1402F617C;
    v12 = dword_1402F6180;
    *v10 = (float)(*(float *)&dword_1402F617C * v9[2]) - (float)(*(float *)&dword_1402F6180 * v9[1]);
    v13 = dword_1402F6178;
  }
  else
  {
    v11 = dword_1402F618C;
    v12 = dword_1402F6190;
    *v10 = (float)(*(float *)&dword_1402F618C * v9[2]) - (float)(*(float *)&dword_1402F6190 * v9[1]);
    v13 = dword_1402F6188;
  }
  v10[1] = (float)(*(float *)&v12 * *v9) - (float)(*(float *)&v13 * v9[2]);
  v10[2] = (float)(*(float *)&v13 * v9[1]) - (float)(*(float *)&v11 * *v9);
  sub_14007A240(&dword_140404A6C[v8 + 437914595], &dword_140404A6C[v8 + 437914595]);
  v14 = (float *)&dword_140404A6C[v8 + 437914598];
  *v14 = (float)(v9[1] * v10[2]) - (float)(v9[2] * v10[1]);
  v14[1] = (float)(*v10 * v9[2]) - (float)(*v9 * v10[2]);
  v14[2] = (float)(*v9 * v10[1]) - (float)(*v10 * v9[1]);
  sub_14007A240(v14, v14);
  dword_140404A6C[v8 + 437914592] = *(_DWORD *)a3;
  dword_140404A6C[v8 + 437914593] = *((_DWORD *)a3 + 1);
  v15 = *((_DWORD *)a3 + 2);
  ++dword_140404A6C[283785905];
  dword_140404A6C[v8 + 437914594] = v15;
  dword_140404A6C[v8 + 437914584] = dword_140404A6C[6 * v6 + 437914197];
  dword_140404A6C[v8 + 437914585] = 993158992;
  dword_140404A6C[438881242] = v4 + 1;
  return (unsigned int)v4;
}

