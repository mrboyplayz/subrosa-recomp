/* Address: 0x14009e880 | Name: sub_14009E880 | Size: 202 bytes */
__int64 __fastcall sub_14009E880(_DWORD *a1, float *a2)
{
  float v3; // xmm2_4
  int v4; // xmm1_4
  float v5; // xmm3_4
  int v6; // xmm0_4
  float v7; // xmm2_4
  double v8; // xmm0_8
  __int64 v9; // rdx
  __int64 v10; // rcx
  double v11; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rcx
  double v14; // xmm0_8
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+34h] [rbp-24h]
  float v20[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-10h]

  v3 = a2[6];
  v4 = *((_DWORD *)a2 + 4);
  v5 = a2[7];
  v17 = *(_OWORD *)a2;
  v6 = *((_DWORD *)a2 + 5);
  v20[0] = v3;
  v7 = a2[8];
  v19 = v6;
  v18 = v4;
  v20[1] = v5;
  v20[2] = v7;
  v8 = sub_14023F704(a1, a2);
  *a1 = LODWORD(v8);
  sub_14007B2A0((__int64)&v17, (float *)&v17);
  v11 = sub_14023F704(v10, v9);
  a1[2] = LODWORD(v11);
  sub_14007B2A0((__int64)&v17, v20);
  v14 = sub_14023F704(v13, v12);
  a1[1] = LODWORD(v14);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v21);
}

