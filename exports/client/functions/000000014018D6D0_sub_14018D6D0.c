/* Address: 0x14018d6d0 | Name: sub_14018D6D0 | Size: 792 bytes */
__int64 __fastcall sub_14018D6D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v7; // xmm4_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1760LL * a2;
  v4 = a1;
  dword_140404A6C[v3 + 278846107] = dword_140404A6C[v3 + 278846102];
  dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278846103];
  dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278846104];
  dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278846105];
  dword_140404A6C[v3 + 278846102] = dword_140404A6C[283831474];
  sub_140115AE0(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v5),
    28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&dword_140404A6C[137358015] + v6) * 0.00024414062) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&dword_140404A6C[137358016] + v6) * 0.00024414062;
  *(float *)&v9 = (float)((float)*(int *)((char *)&dword_140404A6C[137358017] + v6) * 0.00024414062) - 4096.0;
  dword_140404A6C[v3 + 278845916] = v7;
  dword_140404A6C[v3 + 278845917] = v8;
  dword_140404A6C[v3 + 278845918] = v9;
  dword_140404A6C[v3 + 278846103] = v7;
  dword_140404A6C[v3 + 278846104] = dword_140404A6C[v3 + 278845917];
  dword_140404A6C[v3 + 278846105] = dword_140404A6C[v3 + 278845918];
  if ( !dword_140404A6C[v3 + 278846106] )
  {
    dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278845916];
    dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278845917];
    dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278846107] = dword_140404A6C[283831474];
  }
  dword_140404A6C[v3 + 278846106] = 1;
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137358018] + v6), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358019] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358020] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358021] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v5),
    14);
  sub_140191F90(&dword_140404A6C[v3 + 278845934], (char *)&dword_140404A6C[137358018] + v6);
  result = dword_140404A6C[v3 + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846062], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846061], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846063], 30);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846112], 1);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_140115AE0(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[v3 + 278846113] = result;
  }
  return result;
}

