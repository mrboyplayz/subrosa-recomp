/* Address: 0x14001bf70 | Name: sub_14001BF70 | Size: 2055 bytes */
__int64 __fastcall sub_14001BF70(int a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  float v3; // xmm7_4
  float v4; // xmm15_4
  float v5; // xmm4_4
  float v6; // xmm12_4
  float v7; // xmm14_4
  __int64 v8; // rdx
  __int64 v9; // r8
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm12_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm14_4
  float v30; // xmm15_4
  __int64 result; // rax
  float v32; // xmm4_4
  float v33; // xmm9_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm9_4
  float v38; // xmm2_4
  float v39; // xmm9_4
  float v40; // xmm1_4
  float v41; // xmm10_4
  float v42; // xmm9_4
  float v43; // xmm15_4
  float v44; // xmm14_4
  float v45; // xmm10_4
  float v46; // xmm3_4
  float v47; // xmm11_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm12_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  float v55; // xmm5_4
  float v56; // xmm2_4
  float v57; // [rsp+B0h] [rbp+8h]
  float v58; // [rsp+C0h] [rbp+18h]

  v1 = a1;
  v2 = 18LL * a1;
  v3 = *(float *)&dword_140404A6C[2 * v2 + 485543046];
  v4 = *(float *)&dword_140404A6C[2 * v2 + 485543038];
  v5 = -v3;
  v6 = *(float *)&dword_140404A6C[2 * v2 + 485543039];
  v7 = *(float *)&dword_140404A6C[2 * v2 + 485543037];
  v8 = 47LL * LOWORD(dword_140404A6C[2 * v2 + 485543029]);
  v9 = 47LL * HIWORD(dword_140404A6C[2 * v2 + 485543029]);
  v10 = (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215738] * v4)
                                      - (float)(*(float *)&dword_140404A6C[v8 + 18215737] * v6))
                              + *(float *)&dword_140404A6C[v8 + 18215718])
                      * v3)
              + *(float *)&dword_140404A6C[2 * v2 + 485543056])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215738]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543041])
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215737]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543042]))
                      + *(float *)&dword_140404A6C[v9 + 18215718])
              * (float)-v3);
  v11 = (float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215737] * v7)
                      - (float)(*(float *)&dword_140404A6C[v8 + 18215736] * v4))
              + *(float *)&dword_140404A6C[v8 + 18215720])
      * v3;
  v12 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v8 + 18215736] * v6)
                              - (float)(*(float *)&dword_140404A6C[v8 + 18215738] * v7))
                      + *(float *)&dword_140404A6C[v8 + 18215719])
              * v3)
      + *(float *)&dword_140404A6C[2 * v2 + 485543057];
  v13 = *(float *)&dword_140404A6C[2 * v2 + 485543040];
  v14 = v12
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543042])
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215738] * v13))
                      + *(float *)&dword_140404A6C[v9 + 18215719])
              * v5);
  v15 = (float)(v11 + *(float *)&dword_140404A6C[2 * v2 + 485543058])
      + (float)((float)((float)((float)(*(float *)&dword_140404A6C[v9 + 18215737] * v13)
                              - (float)(*(float *)&dword_140404A6C[v9 + 18215736]
                                      * *(float *)&dword_140404A6C[2 * v2 + 485543041]))
                      + *(float *)&dword_140404A6C[v9 + 18215720])
              * v5);
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v10 * v10)) + (float)(v15 * v15));
  if ( v16 > 0.033333335 )
  {
    v10 = (float)(0.033333335 / v16) * v10;
    v14 = (float)(0.033333335 / v16) * v14;
    v15 = (float)(0.033333335 / v16) * v15;
  }
  v17 = *(float *)&dword_140404A6C[2 * v2 + 485543045];
  v18 = *(float *)&dword_140404A6C[2 * v2 + 485543044];
  v19 = *(float *)&dword_140404A6C[2 * v2 + 485543039];
  v58 = v18;
  *(float *)&dword_140404A6C[v8 + 18215721] = (float)(v10 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215721];
  *(float *)&dword_140404A6C[v8 + 18215722] = (float)(v14 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215722];
  *(float *)&dword_140404A6C[v8 + 18215723] = (float)(v15 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215723];
  v20 = (float)(v14 * v19) - (float)(v4 * v15);
  v21 = v10 * v19;
  v22 = *(float *)&dword_140404A6C[2 * v2 + 485543042];
  *(float *)&dword_140404A6C[v8 + 18215739] = (float)(v20 * (float)-v18) + *(float *)&dword_140404A6C[v8 + 18215739];
  *(float *)&dword_140404A6C[v8 + 18215740] = (float)((float)((float)(v7 * v15) - v21) * (float)-v18)
                                            + *(float *)&dword_140404A6C[v8 + 18215740];
  v23 = *(float *)&dword_140404A6C[2 * v2 + 485543041];
  *(float *)&dword_140404A6C[v8 + 18215741] = (float)((float)((float)(v10 * v4) - (float)(v14 * v7)) * (float)-v18)
                                            + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v9 + 18215721] = (float)(v10 * v17) + *(float *)&dword_140404A6C[v9 + 18215721];
  *(float *)&dword_140404A6C[v9 + 18215722] = (float)(v14 * v17) + *(float *)&dword_140404A6C[v9 + 18215722];
  *(float *)&dword_140404A6C[v9 + 18215723] = (float)(v17 * v15) + *(float *)&dword_140404A6C[v9 + 18215723];
  *(float *)&dword_140404A6C[v9 + 18215739] = (float)((float)((float)(v14 * v22) - (float)(v23 * v15)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215739];
  *(float *)&dword_140404A6C[v9 + 18215740] = (float)((float)((float)(v13 * v15) - (float)(v10 * v22)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215740];
  *(float *)&dword_140404A6C[v9 + 18215741] = (float)((float)((float)(v10 * v23) - (float)(v14 * v13)) * v17)
                                            + *(float *)&dword_140404A6C[v9 + 18215741];
  v24 = *(float *)&dword_140404A6C[v8 + 18215737];
  v25 = *(float *)&dword_140404A6C[v8 + 18215736];
  v57 = v24;
  v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[v9 + 18215736];
  v29 = *(float *)&dword_140404A6C[v9 + 18215737];
  v30 = *(float *)&dword_140404A6C[v9 + 18215738];
  v26 = *(float *)&dword_140404A6C[v8 + 18215738];
  result = 244 * v1;
  v32 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543059] - (float)(v25 * 0.875)) + (float)(v28 * 0.875);
  v33 = *(float *)&dword_140404A6C[61 * v1 + 486149287];
  v34 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543060] - (float)(v24 * 0.875)) + (float)(v29 * 0.875);
  v35 = (float)(*(float *)&dword_140404A6C[2 * v2 + 485543061] - (float)(v26 * 0.875)) + (float)(v30 * 0.875);
  if ( v33 != 0.0 )
  {
    v36 = fsqrt((float)((float)(v34 * v34) + (float)(v32 * v32)) + (float)(v35 * v35));
    if ( v36 > v33 )
    {
      v37 = v33 / v36;
      v32 = v37 * v32;
      v34 = v37 * v34;
      v35 = v37 * v35;
    }
    v38 = *(float *)&dword_140404A6C[2 * v2 + 485543064];
    v39 = v29 - v24;
    v40 = v28 - v25;
    v41 = v30 - *(float *)&dword_140404A6C[v8 + 18215738];
    if ( v38 == 0.0 )
    {
      v32 = v32 + (float)(v40 * 0.125);
      v34 = v34 + (float)(v39 * 0.125);
      v35 = v35 + (float)(v41 * 0.125);
    }
    else
    {
      v32 = v32 + (float)(v38 * v40);
      v34 = v34 + (float)(v38 * v39);
      v35 = v35 + (float)(v38 * v41);
    }
    v26 = *(float *)&dword_140404A6C[v8 + 18215738];
    v24 = v57;
  }
  if ( dword_140404A6C[2 * v2 + 485543048] )
  {
    v42 = *(float *)&dword_140404A6C[2 * v2 + 485543049];
    v43 = v30 - v26;
    v44 = v29 - v24;
    v45 = *(float *)&dword_140404A6C[2 * v2 + 485543050];
    v46 = v28 - v25;
    v47 = *(float *)&dword_140404A6C[2 * v2 + 485543051];
    v48 = fsqrt((float)((float)(v42 * v42) + (float)(v45 * v45)) + (float)(v47 * v47));
    if ( v48 == 0.0 )
    {
      v49 = 0.0;
      v50 = 0.0;
    }
    else
    {
      v27 = v42 * (float)(1.0 / v48);
      v49 = v45 * (float)(1.0 / v48);
      v50 = v47 * (float)(1.0 / v48);
    }
    v51 = (float)((float)(v46 * v27) + (float)(v44 * v49)) + (float)(v43 * v50);
    v52 = v51 * v50;
    v18 = v58;
    v32 = v32 + (float)((float)((float)(v51 * v27) * 0.875) + (float)(v42 * 0.875));
    v34 = v34 + (float)((float)((float)(v51 * v49) * 0.875) + (float)(v45 * 0.875));
    v35 = v35 + (float)((float)(v52 * 0.875) + (float)(v47 * 0.875));
  }
  v53 = *(float *)&dword_140404A6C[2 * v2 + 485543062];
  v54 = v32 * v53;
  v55 = v34 * v53;
  v56 = v53 * v35;
  *(float *)&dword_140404A6C[v8 + 18215739] = (float)(v54 * v18) + *(float *)&dword_140404A6C[v8 + 18215739];
  *(float *)&dword_140404A6C[v8 + 18215740] = (float)(v55 * v18) + *(float *)&dword_140404A6C[v8 + 18215740];
  *(float *)&dword_140404A6C[v8 + 18215741] = (float)(v56 * v18) + *(float *)&dword_140404A6C[v8 + 18215741];
  *(float *)&dword_140404A6C[v9 + 18215739] = (float)((float)-v17 * v54) + *(float *)&dword_140404A6C[v9 + 18215739];
  *(float *)&dword_140404A6C[v9 + 18215740] = (float)((float)-v17 * v55) + *(float *)&dword_140404A6C[v9 + 18215740];
  *(float *)&dword_140404A6C[v9 + 18215741] = (float)((float)-v17 * v56) + *(float *)&dword_140404A6C[v9 + 18215741];
  return result;
}

