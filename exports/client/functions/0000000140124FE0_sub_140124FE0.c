/* Address: 0x140124fe0 | Name: sub_140124FE0 | Size: 651 bytes */
__int64 __fastcall sub_140124FE0(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  _DWORD v14[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  float v16[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]

  v4 = a2;
  v5 = a1;
  v6 = *(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 32);
  v7 = *(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 20);
  v8 = (float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 16))
     + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)(a4 + 12));
  v9 = (float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 28))
     + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)(a4 + 24));
  v16[0] = (float)((float)(*(float *)&dword_140404A6C[284550404] * *(float *)(a4 + 4))
                 + (float)(*(float *)&dword_140404A6C[284550403] * *(float *)a4))
         + (float)(*(float *)&dword_140404A6C[284550405] * *(float *)(a4 + 8));
  v16[1] = v8 + v7;
  v16[2] = v9 + v6;
  sub_14007B990(a3, (_DWORD *)a4);
  unk_1404042E0(dword_140404A6C[71738225]);
  unk_140404378(dword_140404A6C[71738230], 1, 0, &dword_140404A6C[431564517]);
  unk_140404378(dword_140404A6C[71738231], 1, 0, &dword_140404A6C[431564565]);
  unk_140404378(dword_140404A6C[71738234], 1, 0, &dword_140404A6C[431564485]);
  unk_140404378(dword_140404A6C[71738235], 1, 0, &dword_140404A6C[431564501]);
  unk_140404338(dword_140404A6C[71738232], 1, v16);
  unk_1404042E8(dword_140404A6C[71738233]);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v5 + 283790166] + 283793813], v10);
  unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v4 + 283790166] + 283793814], v11);
  unk_140404238(0);
  v15 = 0;
  v14[8] = 4 * dword_140404A6C[908 * v5 + 178527462];
  unk_1404044A8(0, 3, 5126);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))&flt_140384000[131076])(
    12,
    6 * dword_140404A6C[908 * v4 + 178527475],
    5125);
  unk_140404230(0);
  unk_140404170(34963, 0, v12);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return MEMORY[0x1401F8B20]((unsigned __int64)v14 ^ v17);
}

