/* Address: 0x140012380 | Name: sub_140012380 | Size: 1070 bytes */
__int64 __fastcall sub_140012380(int a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  __int64 v7; // rcx
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  __int64 v11; // rdx
  float v12; // xmm4_4
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm2_4
  float v22; // xmm9_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm3_4
  float v34; // xmm8_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm9_4
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4

  result = a1;
  v2 = 244LL * a1;
  v3 = 9LL * a1;
  v4 = *(float *)((char *)&unk_14B883358 + v2);
  v5 = *(float *)((char *)&unk_14B883360 + v2);
  v6 = *(float *)((char *)&unk_14B88335C + v2);
  v7 = *(int *)((char *)&unk_14B8833B8 + v2);
  v8 = *(float *)((char *)&unk_14B883364 + v2);
  v9 = v6;
  v10 = *(float *)((char *)&unk_14B883368 + v2);
  v11 = *(int *)((char *)&unk_14B8833BC + v2);
  v12 = v10;
  LOWORD(xmmword_14B6432E0[v3]) = v7;
  v13 = 188 * v7;
  WORD1(xmmword_14B6432E0[v3]) = v11;
  v14 = 188 * v11;
  v15 = (float)((float)(v6 * *(float *)((char *)&unk_140249648 + v13))
              + (float)(v4 * *(float *)((char *)&unk_14024963C + v13)))
      + (float)(v5 * *(float *)((char *)&unk_140249654 + v13));
  v16 = (float)(v6 * *(float *)((char *)&unk_140249650 + v13)) + (float)(v4 * *(float *)((char *)&unk_140249644 + v13));
  v17 = v5;
  v18 = (float)(v9 * *(float *)((char *)&unk_14024964C + v13)) + (float)(v4 * *(float *)((char *)&unk_140249640 + v13));
  v19 = v10 * *(float *)((char *)&unk_14024964C + v14);
  v20 = v16 + (float)(v5 * *(float *)((char *)&unk_14024965C + v13));
  v21 = *(float *)((char *)&unk_14B88336C + v2);
  v22 = v18 + (float)(v17 * *(float *)((char *)&unk_140249658 + v13));
  v23 = v10 * *(float *)((char *)&unk_140249650 + v14);
  v24 = v21 * *(float *)((char *)&unk_140249654 + v14);
  v25 = (float)(v12 * *(float *)((char *)&unk_140249648 + v14)) + (float)(v8 * *(float *)((char *)&unk_14024963C + v14));
  *(float *)&xmmword_14B643300[v3] = v15;
  v26 = v8 * *(float *)((char *)&unk_140249640 + v14);
  v27 = v15 + *(float *)((char *)&unk_140249618 + v13);
  v28 = v8 * *(float *)((char *)&unk_140249644 + v14);
  v29 = v25 + v24;
  *((float *)&xmmword_14B643300[v3] + 1) = v22;
  v30 = v22 + *(float *)((char *)&unk_14024961C + v13);
  *((float *)&xmmword_14B643300[v3] + 2) = v20;
  v31 = v20 + *(float *)((char *)&unk_140249620 + v13);
  *((float *)&xmmword_14B643300[v3] + 3) = v29;
  v32 = (float)(v23 + v28) + (float)(v21 * *(float *)((char *)&unk_14024965C + v14));
  v33 = (float)(v19 + v26) + (float)(v21 * *(float *)((char *)&unk_140249658 + v14));
  v34 = v27 - (float)(v29 + *(float *)((char *)&unk_140249618 + v14));
  *((float *)&xmmword_14B643310[v3] + 1) = v32;
  v35 = v32 + *(float *)((char *)&unk_140249620 + v14);
  *(float *)&xmmword_14B643310[v3] = v33;
  v36 = v31 - v35;
  v37 = v30 - (float)(v33 + *(float *)((char *)&unk_14024961C + v14));
  v38 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
  if ( v38 > 0.0625 )
  {
    v34 = (float)(v34 * (float)(1.0 / v38)) * 0.0625;
    v37 = (float)(v37 * (float)(1.0 / v38)) * 0.0625;
    v36 = (float)(v36 * (float)(1.0 / v38)) * 0.0625;
  }
  if ( *(_DWORD *)((char *)&unk_14B8833C4 + v2) == 1111 )
  {
    v39 = fsqrt((float)((float)(v37 * v37) + (float)(v34 * v34)) + (float)(v36 * v36));
    if ( v39 > 0.015625 )
    {
      v34 = (float)((float)(1.0 / v39) * v34) * 0.015625;
      v37 = (float)((float)(1.0 / v39) * v37) * 0.015625;
      v36 = (float)((float)(1.0 / v39) * v36) * 0.015625;
    }
  }
  v40 = *(float *)&dword_140249614[v14 / 4];
  v41 = *(float *)&dword_140249614[v13 / 4];
  *((float *)&xmmword_14B643340[v3] + 3) = v34 * 0.1875;
  *(float *)&xmmword_14B643350[v3] = v37 * 0.1875;
  *((float *)&xmmword_14B643350[v3] + 1) = v36 * 0.1875;
  DWORD1(xmmword_14B643320[v3]) = 1044381696;
  v42 = 1.0 / (float)(v40 + v41);
  *(float *)&xmmword_14B643320[v3] = v42 * v41;
  *((float *)&xmmword_14B643310[v3] + 3) = v42 * v40;
  *((float *)&xmmword_14B643350[v3] + 2) = *(float *)&xmmword_14B6432F0[v3] * 0.875;
  *((float *)&xmmword_14B643350[v3] + 3) = *((float *)&xmmword_14B6432F0[v3] + 1) * 0.875;
  *((float *)&unk_14B643360 + 1 * v3) = *((float *)&xmmword_14B6432F0[v3] + 2) * 0.875;
  *(float *)((char *)&qword_14B643362[v3 * 2] + 2) = fminf(
                                                       (float)(*(float *)&xmmword_14B643320[v3]
                                                             + *(float *)&xmmword_14B643320[v3])
                                                     * *(float *)&dword_14024969C[v14 / 4],
                                                       (float)(*((float *)&xmmword_14B643310[v3] + 3)
                                                             + *((float *)&xmmword_14B643310[v3] + 3))
                                                     * *(float *)&dword_14024969C[v13 / 4]);
  return result;
}

