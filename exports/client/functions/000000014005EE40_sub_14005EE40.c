/* Address: 0x14005ee40 | Name: sub_14005EE40 | Size: 781 bytes */
__int64 __fastcall sub_14005EE40(unsigned int a1, unsigned int *a2, unsigned int *a3, float a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned int v7; // xmm0_4
  float *v8; // rdi
  float *v9; // rbp
  int v10; // xmm3_4
  int v11; // xmm2_4
  int v12; // xmm1_4
  float *v13; // rdx

  v4 = dword_140404A6C[433435845];
  if ( (int)dword_140404A6C[433435845] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v6 = 37LL * (int)dword_140404A6C[433435845];
  dword_140404A6C[v6 + 432826949] = a1;
  dword_140404A6C[v6 + 432826952] = *a2;
  dword_140404A6C[v6 + 432826953] = a2[1];
  dword_140404A6C[v6 + 432826954] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v6 + 432826955] = *a3;
    dword_140404A6C[v6 + 432826956] = a3[1];
    v7 = a3[2];
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[v6 + 432826955] = 0;
    v7 = 0;
  }
  dword_140404A6C[v6 + 432826957] = v7;
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1u:
        dword_140404A6C[v6 + 432826950] = 0xFFFF;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4 * 0.25;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4 * 0.5;
        dword_140404A6C[v6 + 432826951] = 993158992;
        dword_140404A6C[v6 + 432826983] = 1065311273;
        break;
      case 2u:
        dword_140404A6C[v6 + 432826950] = 60;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4;
        dword_140404A6C[v6 + 432826951] = 993158992;
        dword_140404A6C[v6 + 432826983] = 1064933786;
        break;
      case 5u:
        *(_QWORD *)&dword_140404A6C[v6 + 432826950] = 3;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4;
        dword_140404A6C[v6 + 432826983] = 1063256064;
        break;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[v6 + 432826950] = 0xFFFF;
    *(float *)&dword_140404A6C[v6 + 432826984] = a4;
    *(float *)&dword_140404A6C[v6 + 432826985] = a4;
    dword_140404A6C[v6 + 432826983] = 0;
    v8 = (float *)&dword_140404A6C[v6 + 432826949];
    sub_14007A240(&dword_140404A6C[v6 + 432826967], a3);
    v9 = (float *)&dword_140404A6C[v6 + 432826949];
    if ( fabs(*(float *)&dword_140404A6C[v6 + 432826968]) >= 0.70700002 )
    {
      v10 = dword_1402F617C;
      v11 = dword_1402F6180;
      v9[12] = (float)(*(float *)&dword_1402F617C * v8[20]) - (float)(*(float *)&dword_1402F6180 * v8[19]);
      v12 = dword_1402F6178;
    }
    else
    {
      v10 = dword_1402F618C;
      v11 = dword_1402F6190;
      v9[12] = (float)(*(float *)&dword_1402F618C * v8[20]) - (float)(*(float *)&dword_1402F6190 * v8[19]);
      v12 = dword_1402F6188;
    }
    v9[13] = (float)(*(float *)&v11 * v8[18]) - (float)(*(float *)&v12 * v8[20]);
    v9[14] = (float)(*(float *)&v12 * v8[19]) - (float)(*(float *)&v10 * v8[18]);
    sub_14007A240(v9 + 12, v9 + 12);
    v13 = (float *)&dword_140404A6C[v6 + 432826964];
    *v13 = (float)(v8[19] * v9[14]) - (float)(v8[20] * v9[13]);
    v13[1] = (float)(v9[12] * v8[20]) - (float)(v9[14] * v8[18]);
    v13[2] = (float)(v9[13] * v8[18]) - (float)(v9[12] * v8[19]);
    sub_14007A240(v13, v13);
    *(float *)&dword_140404A6C[v6 + 432826952] = (float)(v8[18] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826952];
    *(float *)&dword_140404A6C[v6 + 432826953] = (float)(v8[19] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826953];
    *(float *)&dword_140404A6C[v6 + 432826954] = (float)(v8[20] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826954];
  }
  dword_140404A6C[433435845] = v4 + 1;
  return v4;
}

