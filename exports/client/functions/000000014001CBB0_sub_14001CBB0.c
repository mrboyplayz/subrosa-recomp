/* Address: 0x14001cbb0 | Name: sub_14001CBB0 | Size: 1109 bytes */
__int64 __fastcall sub_14001CBB0(int a1)
{
  __int64 v1; // r8
  float v2; // xmm7_4
  float v3; // xmm12_4
  float v4; // xmm14_4
  float v5; // xmm15_4
  float v6; // xmm4_4
  float v7; // xmm13_4
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  float v11; // xmm1_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  unsigned int v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm12_4
  float v24; // xmm2_4

  v1 = 18LL * a1;
  v2 = *(float *)&dword_140404A6C[36 * a1 + 485543046];
  v3 = *(float *)&dword_140404A6C[36 * a1 + 485543038];
  v4 = *(float *)&dword_140404A6C[36 * a1 + 485543039];
  v5 = *(float *)&dword_140404A6C[36 * a1 + 485543037];
  v6 = -v2;
  v7 = *(float *)&dword_140404A6C[36 * a1 + 485543041];
  v8 = 47LL * LOWORD(dword_140404A6C[36 * a1 + 485543029]);
  result = HIWORD(dword_140404A6C[2 * v1 + 485543029]);
  v10 = 47 * result;
  v11 = *(float *)&dword_140404A6C[47 * result + 18215738];
  v12 = (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215738] * v3)
                                      - (float)(*(float *)&dword_140404A6C[v8 + 18215737] * v4))
                              + *(float *)&dword_140404A6C[v8 + 18215718])
                      * v2)
              + *(float *)&dword_140404A6C[2 * v1 + 485543033])
      + (float)((float)((float)((float)(v11 * v7)
                              - (float)(*(float *)&dword_140404A6C[47 * result + 18215737]
                                      * *(float *)&dword_140404A6C[2 * v1 + 485543042]))
                      + *(float *)&dword_140404A6C[47 * result + 18215718])
              * (float)-v2);
  v13 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215736] * v4)
                              - (float)(*(float *)&dword_140404A6C[v8 + 18215738] * v5))
                      + *(float *)&dword_140404A6C[v8 + 18215719])
              * v2)
      + *(float *)&dword_140404A6C[2 * v1 + 485543034];
  v14 = (float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215737] * v5)
                      - (float)(*(float *)&dword_140404A6C[v8 + 18215736] * v3))
              + *(float *)&dword_140404A6C[v8 + 18215720])
      * v2;
  v15 = *(float *)&dword_140404A6C[2 * v1 + 485543040];
  v16 = v13
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[47 * result + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v1 + 485543042])
                              - (float)(v11 * v15))
                      + *(float *)&dword_140404A6C[47 * result + 18215719])
              * v6);
  v17 = (float)(v14 + *(float *)&dword_140404A6C[2 * v1 + 485543035])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[47 * result + 18215737] * v15)
                              - (float)(*(float *)&dword_140404A6C[47 * result + 18215736] * v7))
                      + *(float *)&dword_140404A6C[47 * result + 18215720])
              * v6);
  v18 = fsqrt((float)((float)(v16 * v16) + (float)(v12 * v12)) + (float)(v17 * v17));
  if ( v18 > 0.033333335 )
  {
    v12 = (float)(0.033333335 / v18) * v12;
    v16 = (float)(0.033333335 / v18) * v16;
    v17 = (float)(0.033333335 / v18) * v17;
  }
  v19 = *(float *)&dword_140404A6C[2 * v1 + 485543045];
  v20 = -*(float *)&dword_140404A6C[2 * v1 + 485543044];
  *(float *)&dword_140404A6C[v8 + 18215721] = (float)(v12 * v20) + *(float *)&dword_140404A6C[v8 + 18215721];
  *(float *)&dword_140404A6C[v8 + 18215722] = (float)(v16 * v20) + *(float *)&dword_140404A6C[v8 + 18215722];
  *(float *)&dword_140404A6C[v8 + 18215723] = (float)(v17 * v20) + *(float *)&dword_140404A6C[v8 + 18215723];
  *(float *)&v21 = (float)((float)((float)(v4 * v16) - (float)(v3 * v17)) * v20)
                 + *(float *)&dword_140404A6C[v8 + 18215739];
  v22 = (float)((float)(v5 * v17) - (float)(v4 * v12)) * v20;
  v23 = (float)((float)(v3 * v12) - (float)(v5 * v16)) * v20;
  v24 = *(float *)&dword_140404A6C[2 * v1 + 485543042];
  dword_140404A6C[v8 + 18215739] = v21;
  *(float *)&dword_140404A6C[v8 + 18215740] = v22 + *(float *)&dword_140404A6C[v8 + 18215740];
  *(float *)&dword_140404A6C[v8 + 18215741] = v23 + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v10 + 18215721] = (float)(v19 * v12) + *(float *)&dword_140404A6C[v10 + 18215721];
  *(float *)&dword_140404A6C[v10 + 18215722] = (float)(v19 * v16) + *(float *)&dword_140404A6C[v10 + 18215722];
  *(float *)&dword_140404A6C[v10 + 18215723] = (float)(v19 * v17) + *(float *)&dword_140404A6C[v10 + 18215723];
  *(float *)&dword_140404A6C[v10 + 18215739] = (float)((float)((float)(v24 * v16) - (float)(v7 * v17)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215739];
  *(float *)&dword_140404A6C[v10 + 18215740] = (float)((float)((float)(v15 * v17) - (float)(v24 * v12)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215740];
  *(float *)&dword_140404A6C[v10 + 18215741] = (float)((float)((float)(v7 * v12) - (float)(v15 * v16)) * v19)
                                             + *(float *)&dword_140404A6C[v10 + 18215741];
  return result;
}

