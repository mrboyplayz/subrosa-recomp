/* Address: 0x140063440 | Name: sub_140063440 | Size: 1151 bytes */
__int64 __fastcall sub_140063440(int a1)
{
  float v1; // xmm3_4
  float v2; // xmm7_4
  float v3; // xmm0_4
  unsigned __int64 v5; // r12
  float *v6; // rdi
  float *v7; // rbx
  float v8; // xmm9_4
  float v9; // xmm11_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm13_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm11_4
  float v18; // xmm13_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21; // rsi
  int v22; // r15d
  _DWORD *v23; // r14
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  __int64 result; // rax
  _DWORD v43[4]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v44[4]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v45[4]; // [rsp+90h] [rbp-70h] BYREF
  float v46[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-40h] BYREF
  float v49; // [rsp+C8h] [rbp-38h]
  float v50; // [rsp+D0h] [rbp-30h]
  float v51; // [rsp+D4h] [rbp-2Ch]
  _DWORD v52[4]; // [rsp+D8h] [rbp-28h] BYREF

  v1 = *(float *)&qword_19104199C;
  v2 = *(float *)&dword_191041998;
  v3 = *(float *)&qword_19104199C;
  v5 = 28664LL * a1;
  v6 = (float *)&dword_190941BEC[v5 / 4];
  v7 = (float *)((char *)&xmmword_190941C1C + v5);
  *(_DWORD *)((char *)&unk_1909419A0 + v5 + 164) = 0;
  *(_DWORD *)((char *)&unk_1909419A0 + v5 + 26932) = 0;
  *(_DWORD *)((char *)&unk_1909419A0 + v5 + 27152) = 0;
  v8 = *(float *)((char *)&xmmword_190941C1C + v5);
  v9 = *(float *)((char *)&xmmword_190941C1C + v5 + 4);
  v10 = *(float *)((char *)&unk_1909419A0 + v5 + 648);
  v11 = *(float *)((char *)&unk_1909419A0 + v5 + 652);
  v12 = *(float *)((char *)&xmmword_190941C1C + v5 + 8);
  v13 = *(float *)((char *)&unk_1909419A0 + v5 + 656);
  v14 = (float)((float)(v9 * v2) + *(float *)&dword_190941BEC[v5 / 4 + 1]) + (float)(v1 * v11);
  v50 = (float)((float)(v8 * v2) + *(float *)&dword_190941BEC[v5 / 4]) + (float)(v3 * v10);
  v51 = v14;
  v15 = (float)(v8 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v5 / 4];
  v16 = (float)((float)(v12 * v2) + *(float *)&dword_190941BEC[v5 / 4 + 2]) + (float)(v13 * v1);
  v17 = (float)(v9 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v5 / 4 + 1];
  v18 = (float)(v12 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v5 / 4 + 2];
  *(float *)v52 = v16;
  *(float *)&v52[1] = v15 + (float)(*(float *)&qword_191041AC8 * v10);
  *(float *)&v52[2] = v17 + (float)(*(float *)&qword_191041AC8 * v11);
  *(float *)&v52[3] = v18 + (float)(*(float *)&qword_191041AC8 * v13);
  sub_1400551C0(a1);
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v5 + 124) )
  {
    v19 = (float)(*(float *)((char *)&unk_1909419A0 + v5 + 26552) * 16.0) - 0.875;
    v20 = (float)(*((float *)&qword_140146A28 + 1) * v19) + v6[1];
    *(float *)&v48 = (float)(*(float *)&qword_140146A28 * v19) + *v6;
    *((float *)&v48 + 1) = v20;
    v49 = (float)(*(float *)&dword_140146A30 * v19) + v6[2];
    sub_1400828D0(&dword_190941BEC[v5 / 4], &v48, 0);
  }
  v21 = (float *)v52;
  v22 = 0;
  v23 = (_DWORD *)((char *)&unk_1909419A0 + v5 + 27048);
  v45[0] = 1016515556;
  v45[1] = 1016515556;
  v45[2] = 1016515556;
  v43[0] = 1015021568;
  v43[1] = 1015021568;
  v43[2] = 1015021568;
  v44[0] = 1040187392;
  v44[1] = 1040187392;
  v44[2] = 1040187392;
  do
  {
    v23[1] = *v23;
    *v23 = 0;
    v24 = *v6;
    v25 = v6[1];
    v26 = v6[2];
    v27 = *v7 * 0.3125;
    v28 = v7[1] * 0.3125;
    if ( v22 )
    {
      v29 = v27 + v24;
      v30 = v28 + v25;
      v31 = (float)(v7[2] * 0.3125) + v26;
    }
    else
    {
      v29 = v24 - v27;
      v30 = v25 - v28;
      v31 = v26 - (float)(v7[2] * 0.3125);
    }
    v32 = *(float *)((char *)&unk_1909419A0 + v5 + 648);
    v33 = v29 - (float)(*(float *)((char *)&unk_1909419A0 + v5 + 660) * 0.75);
    v34 = *(float *)((char *)&unk_1909419A0 + v5 + 664) * 0.75;
    v48 = 0;
    v35 = v33 - (float)(v32 * 0.125);
    v36 = v30 - v34;
    v37 = *(float *)((char *)&unk_1909419A0 + v5 + 668);
    v38 = *(float *)((char *)&unk_1909419A0 + v5 + 652) * 0.125;
    v49 = 0.0;
    v39 = v36 - v38;
    v40 = *(float *)((char *)&unk_1909419A0 + v5 + 656) * 0.125;
    v46[0] = v35 - *(v21 - 2);
    v41 = v39 - *(v21 - 1);
    v47 = xmmword_1400F7D40;
    v46[1] = v41;
    v46[2] = (float)((float)(v31 - (float)(v37 * 0.75)) - v40) - *v21;
    result = sub_14005AB00(
               a1,
               0,
               v22 + 2 * (v22 + 5),
               v46,
               (float *)((char *)&xmmword_190941C1C + v5),
               (float *)&v48,
               1.0,
               0,
               (__m128 *)&v47,
               v45,
               v44,
               v43,
               0.78539819,
               0);
    ++v22;
    v23 += 55;
    v21 += 3;
  }
  while ( v22 < 2 );
  return result;
}

