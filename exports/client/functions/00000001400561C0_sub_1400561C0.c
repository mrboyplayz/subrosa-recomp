/* Address: 0x1400561c0 | Name: sub_1400561C0 | Size: 922 bytes */
__int64 __fastcall sub_1400561C0(unsigned int a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int *v4; // rax
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int *v7; // rax
  unsigned int *v8; // r9
  unsigned int *v9; // r8
  unsigned int *v10; // r10
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-40h]
  _OWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+58h] [rbp-10h]

  v1 = 0;
  v14 = -1119879168;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v13 = 0;
  sub_140003460((float *)&v13, 0.015625, 0.03125, 0.09375);
  v3 = 0;
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v4 = &dword_140404A6C[178388179];
    do
    {
      *(_QWORD *)(v4 - 1) = 1056964608;
      ++v3;
      *(_QWORD *)(v4 + 1) = 1056964608;
      *(_QWORD *)(v4 + 3) = 1056964608;
      *(_QWORD *)(v4 + 5) = 1056964608;
      v4 += 8;
    }
    while ( v3 < (int)dword_140404A6C[178322641] );
  }
  v15[0] = xmmword_140278D30;
  v14 = 1015021568;
  v15[1] = xmmword_140278D30;
  v16 = 1065353216;
  sub_14007B2A0(v15, (char *)v15 + 12);
  sub_1400054F0((float *)&v13, (float *)v15, 0.03125, 0.03125);
  v5 = dword_140404A6C[177495247];
  v6 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v7 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v7 - 1) = 0;
      ++v6;
      *(_QWORD *)(v7 + 1) = 0;
      *(_QWORD *)(v7 + 3) = 0;
      v7 += 6;
      v5 = dword_140404A6C[177495247];
    }
    while ( v6 < (int)dword_140404A6C[177495247] );
  }
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v8 = &dword_140404A6C[178322642];
    v9 = &dword_140404A6C[178388181];
    v10 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v5 + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v9 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v9;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v9[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      v8 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      v9 += 8;
      v10 += 8;
      ++v1;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v10 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v10 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v10 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v10 - 6);
      v5 = ++dword_140404A6C[177495247];
    }
    while ( v1 < (int)dword_140404A6C[178322641] );
  }
  sub_1401449C0(a1, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v17);
}

