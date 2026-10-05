/* Address: 0x14002c360 | Name: sub_14002C360 | Size: 2117 bytes */
__int64 __fastcall sub_14002C360(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  float v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 result; // rax

  v8 = a1;
  v9 = 9240LL * a1;
  v10 = 770LL * a1;
  v11 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v12 = (float)((float)(*(float *)dword_140147698 - 0.5) * a7) + a4;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v11 + 2) = (float)((float)(*(float *)dword_140147690 - 0.5) * a5) + a2;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = (float)((float)(*(float *)dword_140147694 - 0.5) * a6)
                                                                                           + a3;
  v13 = *(float *)&dword_14014769C - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = v12;
  v14 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v15 = *(float *)&dword_1401476A0 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v14 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v14 + 5) = (float)(v13 * a5) + a2;
  v16 = *(float *)&dword_1401476A4 - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = (float)(v15 * a6) + a3;
  v17 = (float)(*(float *)&dword_1401476AC - 0.5) * a6;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)(v16 * a7) + a4;
  v18 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v19 = *(float *)&dword_1401476A8 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v18 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v18 + 5) = (float)(v19 * a5) + a2;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v17 + a3;
  v20 = (float)((float)(*(float *)&dword_1401476B8 - 0.5) * a6) + a3;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)((float)(*(float *)&dword_1401476B0 - 0.5) * a7)
                                                                                           + a4;
  v21 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v22 = *(float *)&dword_1401476B4 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v21 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v21 + 5) = (float)(v22 * a5) + a2;
  v23 = *(float *)&dword_1401476BC - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v20;
  v24 = (float)(*(float *)&dword_1401476C4 - 0.5) * a6;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)(v23 * a7) + a4;
  v25 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v26 = *(float *)&dword_1401476C0 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v25 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v25 + 5) = (float)(v26 * a5) + a2;
  v27 = *(float *)&dword_1401476C8 - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v24 + a3;
  v28 = (float)(*(float *)&dword_1401476D0 - 0.5) * a6;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)(v27 * a7) + a4;
  v29 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v30 = *(float *)&dword_1401476CC - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v29 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v29 + 5) = (float)(v30 * a5) + a2;
  v31 = *(float *)&dword_1401476D4 - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v28 + a3;
  v8 *= 385;
  v32 = (float)(*(float *)&dword_1401476DC - 0.5) * a6;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)(v31 * a7) + a4;
  v33 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v34 = *(float *)&dword_1401476D8 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v33 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v33 + 5) = (float)(v34 * a5) + a2;
  v35 = *(float *)&dword_1401476E0 - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v32 + a3;
  v36 = (float)(*(float *)&dword_1401476E8 - 0.5) * a6;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 4) = (float)(v35 * a7) + a4;
  v37 = *(int *)((char *)&unk_140585B60 + v9 + 4);
  v38 = *(float *)&dword_1401476E4 - 0.5;
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 4) = v37 + 1;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * v37 + 5) = (float)(v38 * a5) + a2;
  v39 = *(float *)&dword_1401476EC - 0.5;
  *((float *)&unk_140585B60 + 3 * v10 + 3 * *(int *)((char *)&unk_140585B60 + v9 + 4) + 3) = v36 + a3;
  v40 = v10 + *(int *)((char *)&unk_140585B60 + v9 + 4);
  LODWORD(v10) = v11 + dword_140147800[0];
  *((float *)&unk_140585B60 + 3 * v40 + 4) = (float)(v39 * a7) + a4;
  v41 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  ++*(_DWORD *)((char *)&unk_140585B60 + v9 + 4);
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v41 + 772) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11
                                                                                                + dword_140147804[0];
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11
                                                                                                + dword_140147808[0];
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11
                                                                                                + dword_14014780C[0];
  LODWORD(v10) = v11 + dword_140147810;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 771) = 4;
  v42 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 3080) = v42 + 1;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v42 + 778) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11 + dword_140147814;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11 + dword_140147818;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11 + dword_14014781C;
  LODWORD(v10) = v11 + dword_140147820;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 771) = 4;
  v43 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 3080) = v43 + 1;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v43 + 778) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11 + dword_140147824;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11 + dword_140147828;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11 + dword_14014782C;
  LODWORD(v10) = v11 + dword_140147830;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 771) = 4;
  v44 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 3080) = v44 + 1;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v44 + 778) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11 + dword_140147834;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11 + dword_140147838;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11 + dword_14014783C;
  LODWORD(v10) = v11 + dword_140147840;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 771) = 4;
  v45 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 3080) = v45 + 1;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v45 + 778) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11 + dword_140147844;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11 + dword_140147848;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11 + dword_14014784C;
  LODWORD(v10) = v11 + dword_140147850;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 771) = 4;
  v46 = *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *(_DWORD *)((char *)&unk_140585B60 + v9 + 3080) = v46 + 1;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * v46 + 778) = v10;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 773) = v11 + dword_140147854;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 774) = v11 + dword_140147858;
  *((_DWORD *)&unk_140585B60 + 6 * v8 + 6 * *(int *)((char *)&unk_140585B60 + v9 + 3080) + 775) = v11 + dword_14014785C;
  result = v8 + *(int *)((char *)&unk_140585B60 + v9 + 3080);
  *((_DWORD *)&unk_140585B60 + 6 * result + 771) = 4;
  ++*(_DWORD *)((char *)&unk_140585B60 + v9 + 3080);
  return result;
}

