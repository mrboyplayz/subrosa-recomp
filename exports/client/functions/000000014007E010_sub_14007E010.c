/* Address: 0x14007e010 | Name: sub_14007E010 | Size: 643 bytes */
__int64 __fastcall sub_14007E010(
        unsigned int *a1,
        _DWORD *a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  float *v10; // rbx
  int v11; // edi
  float v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rdx
  __int64 v27; // r8
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  float v34; // [rsp+20h] [rbp-40h] BYREF
  float v35; // [rsp+24h] [rbp-3Ch]
  float v36; // [rsp+28h] [rbp-38h]

  sub_14007B990(a1, a2);
  v10 = (float *)&unk_1402B2CC4;
  dword_140404A6C[456807033] = a6;
  v11 = 0;
  dword_140404A6C[456807034] = a7;
  dword_140404A6C[456807035] = a8;
  dword_140404A6C[456807036] = 1065353216;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    v12 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v13 = a5 * *(v10 - 11);
    v35 = v12;
    v36 = v13;
    sub_14007D520((unsigned int *)&v34, v8, v9);
    v14 = ((_BYTE)v11 + 1) & 3;
    v34 = a3 * flt_1402B2C90[3 * v14];
    v35 = a4 * flt_1402B2C90[3 * v14 + 1];
    v36 = a5 * flt_1402B2C90[3 * v14 + 2];
    sub_14007D520((unsigned int *)&v34, v15, v16);
    v17 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v18 = a5 * v10[1];
    v35 = v17;
    v36 = v18;
    sub_14007D520((unsigned int *)&v34, v19, v20);
    v21 = (++v11 & 3) + 4LL;
    v34 = a3 * flt_1402B2C90[3 * v21];
    v35 = a4 * flt_1402B2C90[3 * v21 + 1];
    v36 = a5 * flt_1402B2C90[3 * v21 + 2];
    sub_14007D520((unsigned int *)&v34, v22, v23);
    v24 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v25 = a5 * *(v10 - 11);
    v35 = v24;
    v36 = v25;
    sub_14007D520((unsigned int *)&v34, v26, v27);
    v28 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v29 = a5 * v10[1];
    v35 = v28;
    v36 = v29;
    sub_14007D520((unsigned int *)&v34, v30, v31);
    v10 += 3;
  }
  while ( (__int64)v10 < (__int64)flt_1402B2CF4 );
  sub_14006E0D0(v32, v8, v9);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

