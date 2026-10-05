/* Address: 0x140187c70 | Name: sub_140187C70 | Size: 1096 bytes */
void __fastcall sub_140187C70(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm2_4
  __int64 v6; // rbx
  float v7; // xmm10_4
  __int64 v8; // rsi
  _BYTE *v9; // rdi
  float v10; // xmm8_4
  unsigned __int64 v11; // rax
  int v12; // xmm0_4
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // xmm1_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // xmm0_4
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // xmm1_4
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // xmm1_4
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  float v39; // [rsp+B0h] [rbp+8h] BYREF
  float v40; // [rsp+B4h] [rbp+Ch]

  dword_140404A6C[456217205] = 1;
  v6 = a1;
  dword_140404A6C[456217207] = 0;
  v7 = 0.0;
  dword_140404A6C[456217208] = 9;
  if ( *(_BYTE *)a1 )
  {
    v8 = a2 - a1;
    v9 = (_BYTE *)a1;
    v10 = a5;
    do
    {
      if ( (__int64)&v9[-v6] >= 1000 )
        break;
      v11 = (unsigned __int64)(unsigned __int8)v9[v8] >> 4;
      v40 = a4;
      *(_QWORD *)&dword_140404A6C[456807036] = 1065353216;
      dword_140404A6C[456807038] = 0;
      v12 = dword_1402B2550[3 * v11];
      v11 *= 3LL;
      dword_140404A6C[456807033] = v12;
      dword_140404A6C[456807034] = dword_1402B2554[v11];
      dword_140404A6C[456807035] = dword_1402B2558[v11];
      v39 = v7 + v5;
      sub_14007D320((unsigned int *)&v39, a2, a3);
      v13 = (unsigned __int8)*v9;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v13])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v14, v15);
      v16 = (unsigned __int8)*v9;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v16])
          + (float)(v7 + v5);
      sub_14007D320((unsigned int *)&v39, v17, v18);
      v39 = v7 + v5;
      *(_QWORD *)&dword_140404A6C[456807037] = 0;
      sub_14007D320((unsigned int *)&v39, v19, v20);
      v21 = v9[v8] & 0xF;
      dword_140404A6C[456807036] = 1065353216;
      v40 = a4;
      dword_140404A6C[456807033] = dword_1402B2550[3 * v21];
      dword_140404A6C[456807034] = dword_1402B2554[3 * v21];
      dword_140404A6C[456807035] = dword_1402B2558[3 * v21];
      v22 = 8 * ((unsigned __int8)*v9 + 449LL * (int)dword_140404A6C[438291413]);
      v23 = dword_140404A6C[v22 + 72777350];
      dword_140404A6C[456807037] = dword_140404A6C[v22 + 72777349];
      dword_140404A6C[456807038] = v23;
      sub_14007D320((unsigned int *)&v39, v24, v25);
      v26 = (unsigned __int8)*v9;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v26])
          + (float)(v7 + v5);
      v27 = 8 * (v26 + 449LL * (int)dword_140404A6C[438291413]);
      v28 = dword_140404A6C[v27 + 72777351];
      dword_140404A6C[456807038] = dword_140404A6C[v27 + 72777352];
      dword_140404A6C[456807037] = v28;
      sub_14007D320((unsigned int *)&v39, v26, v29);
      v30 = (unsigned __int8)*v9;
      v40 = a4 + v10;
      v39 = (float)(v10 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v30])
          + (float)(v7 + v5);
      v31 = 8 * (v30 + 449LL * (int)dword_140404A6C[438291413]);
      v32 = dword_140404A6C[v31 + 72777354];
      dword_140404A6C[456807037] = dword_140404A6C[v31 + 72777353];
      dword_140404A6C[456807038] = v32;
      sub_14007D320((unsigned int *)&v39, v30, v33);
      v39 = v7 + v5;
      v34 = 8 * ((unsigned __int8)*v9 + 449LL * (int)dword_140404A6C[438291413]);
      v35 = dword_140404A6C[v34 + 72777356];
      dword_140404A6C[456807037] = dword_140404A6C[v34 + 72777355];
      dword_140404A6C[456807038] = v35;
      sub_14007D320((unsigned int *)&v39, v36, v37);
      v38 = (unsigned __int8)*v9++;
      a1 = v38 + 3592LL * (int)dword_140404A6C[438291413];
      v7 = v7 + (float)(v10 * *(float *)&dword_140404A6C[a1 + 72777093]);
    }
    while ( *v9 );
  }
  sub_14006E0D0(a1, a2, a3);
}

