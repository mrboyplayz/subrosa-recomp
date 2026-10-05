/* Address: 0x14006d300 | Name: sub_14006D300 | Size: 849 bytes */
__int64 __fastcall sub_14006D300(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // xmm5_4
  unsigned int v16; // xmm4_4
  int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  int v19; // xmm0_4
  unsigned int v20; // xmm0_4
  int v21; // xmm0_4
  __int64 v22; // r8
  _DWORD v24[10]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  unsigned __int64 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-48h]
  _DWORD v28[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]

  v11 = a4;
  v12 = a3;
  v28[0] = a8;
  v28[1] = a9;
  v28[2] = a10;
  v28[3] = a11;
  if ( (a7 & 1) != 0 )
  {
    v12 = a3 + (float)(a5 * -0.5);
  }
  else if ( (a7 & 2) != 0 )
  {
    v12 = a3 - a5;
  }
  if ( (a7 & 4) != 0 )
  {
    v11 = a4 + (float)(a6 * -0.5);
  }
  else if ( (a7 & 8) != 0 )
  {
    v11 = a4 - a6;
  }
  v13 = 49166LL * a1;
  dword_140404A6C[438291417] = 4;
  dword_140404A6C[438291416] = 6;
  *(_QWORD *)&dword_140404A6C[438291418] = __PAIR64__(LODWORD(v11), LODWORD(v12));
  v27 = __PAIR64__(LODWORD(v11), v12 + a5);
  v14 = v13 * 4 + 48LL * a2;
  v16 = *(unsigned int *)((char *)&dword_140404A6C[433435871] + v14);
  v17 = *(unsigned int *)((char *)&dword_140404A6C[433435872] + v14);
  v18 = *(unsigned int *)((char *)&dword_140404A6C[433435874] + v14);
  LODWORD(v26) = *(unsigned int *)((char *)&dword_140404A6C[433435870] + v14);
  v15 = v26;
  HIDWORD(v26) = v16;
  *(_QWORD *)&dword_140404A6C[438291420] = v26;
  LODWORD(v26) = v17;
  v19 = *(unsigned int *)((char *)&dword_140404A6C[433435873] + v14);
  *(_QWORD *)&dword_140404A6C[438291422] = __PAIR64__(LODWORD(v11), v12 + a5);
  HIDWORD(v26) = v19;
  v20 = *(unsigned int *)((char *)&dword_140404A6C[433435875] + v14);
  *(_QWORD *)&dword_140404A6C[438291424] = v26;
  *((float *)&v27 + 1) = v11 + a6;
  *(_QWORD *)&dword_140404A6C[438291426] = v27;
  *(_QWORD *)&dword_140404A6C[438291428] = __PAIR64__(v20, v18);
  v26 = __PAIR64__(v20, v15);
  v27 = __PAIR64__(LODWORD(v11), LODWORD(v12));
  *(_QWORD *)&dword_140404A6C[438291430] = __PAIR64__(LODWORD(v11), LODWORD(v12));
  v21 = *(unsigned int *)((char *)&dword_140404A6C[433435876] + v14);
  *(_QWORD *)&dword_140404A6C[438291432] = __PAIR64__(v16, v15);
  v27 = __PAIR64__(v11 + a6, v12 + a5);
  LODWORD(v26) = v18;
  *(_QWORD *)&dword_140404A6C[438291434] = __PAIR64__(v11 + a6, v12 + a5);
  *(_QWORD *)&dword_140404A6C[438291436] = v26;
  LODWORD(v26) = v21;
  HIDWORD(v26) = *(unsigned int *)((char *)&dword_140404A6C[433435877] + v14);
  *(float *)&v27 = v12;
  *(_QWORD *)&dword_140404A6C[438291438] = v27;
  *(_QWORD *)&dword_140404A6C[438291440] = v26;
  unk_1404042E0(dword_140404A6C[451221605]);
  unk_140404050(3553, dword_140404A6C[v13 + 433435861]);
  unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  unk_140404170(34962, dword_140404A6C[451221644], v22);
  unk_140404190(34962, 4 * dword_140404A6C[438291416] * dword_140404A6C[438291417], &dword_140404A6C[438291418], 35040);
  unk_140404238(0);
  unk_140404238(1);
  unk_1404044A8(0, 2, 5126);
  v25 = 8;
  v24[8] = 4 * dword_140404A6C[438291417];
  unk_1404044A8(1, 2, 5126);
  unk_140404470(2, v28);
  qword_140302FF8(4, 0, dword_140404A6C[438291416]);
  unk_140404230(0);
  unk_140404230(1);
  unk_1404042E0(0);
  return MEMORY[0x1401F8B20]((unsigned __int64)v24 ^ v29);
}

