/* Address: 0x140073c40 | Name: sub_140073C40 | Size: 329 bytes */
__int64 __fastcall sub_140073C40(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  int v4; // xmm0_4
  __int64 v5; // rbx
  float v6; // xmm3_4
  double v7; // xmm4_8
  __int64 v8; // r8

  v4 = 1048576000;
  if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[122 * a1 + 70087116] )
    v4 = 1052770304;
  v5 = 122LL * a1;
  sub_14006D660(a2, v3, a3, *(float *)&dword_140404A6C[v5 + 70087128], 0, v4, v4, v4, 1065353216);
  v6 = *(float *)&dword_140404A6C[v5 + 70087219];
  *(_QWORD *)&v7 = **(unsigned int **)&dword_140404A6C[v5 + 70087217];
  *(float *)&v7 = (float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v5 + 70087220])
                                * (float)(*(float *)&dword_140404A6C[v5 + 70087128] - v6))
                        / (float)(*(float *)&dword_140404A6C[v5 + 70087221] - *(float *)&dword_140404A6C[v5 + 70087220]))
                + *(float *)&v3;
  return sub_14006D660(a2, v7, v8, v6, 0, 1056964608, 1056964608, 1056964608, 1065353216);
}

