/* Address: 0x140122ca0 | Name: sub_140122CA0 | Size: 1235 bytes */
__int64 __fastcall sub_140122CA0(float a1, float *a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // xmm0_4
  unsigned int v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm2_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm2_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm6_4
  __int64 v19; // r8
  __int64 v20; // rcx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, a3);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(1);
  qword_140302FE8(0, 0, 512, 512);
  *(_OWORD *)&dword_140404A6C[431564485] = xmmword_140278D40;
  *(_OWORD *)&dword_140404A6C[431564489] = xmmword_140278DA0;
  *(_OWORD *)&dword_140404A6C[431564493] = xmmword_140278EB0;
  *(_OWORD *)&dword_140404A6C[431564497] = xmmword_140279730;
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  unk_1404042E0(dword_140404A6C[71738045]);
  unk_140404338(dword_140404A6C[71738052], 1, &dword_140404A6C[284677591]);
  unk_140404338(dword_140404A6C[71738054], 1, &dword_140404A6C[284550403]);
  unk_140404378(dword_140404A6C[71738055], 1, 0, &dword_140404A6C[431564565]);
  unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830721] + 284024944]);
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 6;
  v5 = dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813];
  *(float *)&v6 = (float)((float)(a1 * a2[5]) - a2[2]) - a2[8];
  *(float *)&v7 = (float)((float)(a1 * a2[3]) - *a2) - a2[6];
  *(float *)&dword_140404A6C[456217213] = (float)((float)(a1 * a2[4]) - a2[1]) - a2[7];
  v8 = a1;
  dword_140404A6C[456217214] = v6;
  v9 = a1;
  dword_140404A6C[456217207] = 1;
  dword_140404A6C[456217209] = 0;
  dword_140404A6C[456217212] = v7;
  v10 = a1;
  v11 = -a1;
  *(_QWORD *)&dword_140404A6C[456217210] = 1065353216;
  *(float *)&v12 = (float)((float)(v9 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v13 = (float)((float)(v10 * a2[3]) + *a2) - a2[6];
  *(float *)&dword_140404A6C[456217219] = (float)((float)(v8 * a2[4]) + a2[1]) - a2[7];
  dword_140404A6C[456217220] = v12;
  dword_140404A6C[456217207] = 2;
  dword_140404A6C[456217215] = 1065353216;
  dword_140404A6C[456217218] = v13;
  *(_QWORD *)&dword_140404A6C[456217216] = 1065353216;
  *(float *)&v14 = (float)((float)(v11 * a2[5]) + a2[2]) - a2[8];
  *(float *)&v15 = (float)((float)(v11 * a2[3]) + *a2) - a2[6];
  *(float *)&dword_140404A6C[456217225] = (float)((float)(v11 * a2[4]) + a2[1]) - a2[7];
  dword_140404A6C[456217226] = v14;
  dword_140404A6C[456217207] = 3;
  *(_QWORD *)&dword_140404A6C[456217221] = 1065353216;
  dword_140404A6C[456217224] = v15;
  dword_140404A6C[456217223] = 0;
  *(float *)&v16 = (float)((float)(v11 * a2[3]) - *a2) - a2[6];
  *(float *)&v17 = (float)((float)(v11 * a2[4]) - a2[1]) - a2[7];
  *(float *)&v18 = (float)((float)(v11 * a2[5]) - a2[2]) - a2[8];
  *(_QWORD *)&dword_140404A6C[456217227] = 0;
  dword_140404A6C[456217229] = 0;
  dword_140404A6C[456217230] = v16;
  dword_140404A6C[456217231] = v17;
  dword_140404A6C[456217232] = v18;
  dword_140404A6C[456217207] = 4;
  unk_140404170(34962, v5, v19);
  unk_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
  unk_140404238(0);
  unk_140404238(1);
  unk_1404044A8(0, 3, 5126);
  unk_1404044A8(1, 3, 5126);
  qword_140302FF8(6, 0, dword_140404A6C[456217207]);
  unk_140404230(0);
  unk_140404230(1);
  unk_1404042E0(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v20);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2884);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215061])(2304);
  return (*(__int64 (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
}

