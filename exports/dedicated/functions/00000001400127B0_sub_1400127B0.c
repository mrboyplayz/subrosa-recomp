/* Address: 0x1400127b0 | Name: sub_1400127B0 | Size: 1109 bytes */
__int64 __fastcall sub_1400127B0(int a1)
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
  int v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm12_4
  float v24; // xmm2_4

  v1 = 9LL * a1;
  v2 = *((float *)&xmmword_14B643320[9 * a1] + 1);
  v3 = *((float *)&xmmword_14B643300[9 * a1] + 1);
  v4 = *((float *)&xmmword_14B643300[9 * a1] + 2);
  v5 = *(float *)&xmmword_14B643300[9 * a1];
  v6 = -v2;
  v7 = *(float *)&xmmword_14B643310[9 * a1];
  v8 = 47LL * LOWORD(xmmword_14B6432E0[9 * a1]);
  result = WORD1(xmmword_14B6432E0[v1]);
  v10 = 47 * result;
  v11 = *((float *)&unk_140249674 + 47 * result);
  v12 = (float)((float)((float)((float)((float)(*(float *)((char *)&unk_140249674 + v8 * 4) * v3)
                                      - (float)(*(float *)((char *)&unk_140249670 + v8 * 4) * v4))
                              + *(float *)((char *)&unk_140249624 + v8 * 4))
                      * v2)
              + *(float *)&xmmword_14B6432F0[v1])
      + (float)((float)((float)((float)(v11 * v7)
                              - (float)(*((float *)&unk_140249670 + 47 * result) * *((float *)&xmmword_14B643310[v1] + 1)))
                      + *((float *)&unk_140249624 + 47 * result))
              * (float)-v2);
  v13 = (float)((float)((float)((float)(*(float *)((char *)&unk_14024966C + v8 * 4) * v4)
                              - (float)(*(float *)((char *)&unk_140249674 + v8 * 4) * v5))
                      + *(float *)((char *)&unk_140249628 + v8 * 4))
              * v2)
      + *((float *)&xmmword_14B6432F0[v1] + 1);
  v14 = (float)((float)((float)(*(float *)((char *)&unk_140249670 + v8 * 4) * v5)
                      - (float)(*(float *)((char *)&unk_14024966C + v8 * 4) * v3))
              + *(float *)((char *)&unk_14024962C + v8 * 4))
      * v2;
  v15 = *((float *)&xmmword_14B643300[v1] + 3);
  v16 = v13
      + (float)((float)((float)((float)(*((float *)&unk_14024966C + 47 * result) * *((float *)&xmmword_14B643310[v1] + 1))
                              - (float)(v11 * v15))
                      + *((float *)&unk_140249628 + 47 * result))
              * v6);
  v17 = (float)(v14 + *((float *)&xmmword_14B6432F0[v1] + 2))
      + (float)((float)((float)((float)(*((float *)&unk_140249670 + 47 * result) * v15)
                              - (float)(*((float *)&unk_14024966C + 47 * result) * v7))
                      + *((float *)&unk_14024962C + 47 * result))
              * v6);
  v18 = fsqrt((float)((float)(v16 * v16) + (float)(v12 * v12)) + (float)(v17 * v17));
  if ( v18 > 0.033333335 )
  {
    v12 = (float)(0.033333335 / v18) * v12;
    v16 = (float)(0.033333335 / v18) * v16;
    v17 = (float)(0.033333335 / v18) * v17;
  }
  v19 = *(float *)&xmmword_14B643320[v1];
  v20 = -*((float *)&xmmword_14B643310[v1] + 3);
  *(float *)&dword_140249630[v8] = (float)(v12 * v20) + *(float *)&dword_140249630[v8];
  *(float *)&dword_140249634[v8] = (float)(v16 * v20) + *(float *)&dword_140249634[v8];
  *(float *)&dword_140249638[v8] = (float)(v17 * v20) + *(float *)&dword_140249638[v8];
  *(float *)&v21 = (float)((float)((float)(v4 * v16) - (float)(v3 * v17)) * v20) + *(float *)&dword_140249678[v8];
  v22 = (float)((float)(v5 * v17) - (float)(v4 * v12)) * v20;
  v23 = (float)((float)(v3 * v12) - (float)(v5 * v16)) * v20;
  v24 = *((float *)&xmmword_14B643310[v1] + 1);
  dword_140249678[v8] = v21;
  *(float *)&dword_14024967C[v8] = v22 + *(float *)&dword_14024967C[v8];
  *(float *)&dword_140249680[v8] = v23 + *(float *)&dword_140249680[v8];
  *(float *)&dword_140249630[v10] = (float)(v19 * v12) + *(float *)&dword_140249630[v10];
  *(float *)&dword_140249634[v10] = (float)(v19 * v16) + *(float *)&dword_140249634[v10];
  *(float *)&dword_140249638[v10] = (float)(v19 * v17) + *(float *)&dword_140249638[v10];
  *(float *)&dword_140249678[v10] = (float)((float)((float)(v24 * v16) - (float)(v7 * v17)) * v19)
                                  + *(float *)&dword_140249678[v10];
  *(float *)&dword_14024967C[v10] = (float)((float)((float)(v15 * v17) - (float)(v24 * v12)) * v19)
                                  + *(float *)&dword_14024967C[v10];
  *(float *)&dword_140249680[v10] = (float)((float)((float)(v7 * v12) - (float)(v15 * v16)) * v19)
                                  + *(float *)&dword_140249680[v10];
  return result;
}

