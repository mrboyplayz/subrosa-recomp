/* Address: 0x1401380f0 | Name: sub_1401380F0 | Size: 683 bytes */
__int64 __fastcall sub_1401380F0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // xmm0_4
  float v6; // xmm4_4
  unsigned int v7; // xmm1_4
  unsigned int v8; // eax
  float v9; // xmm0_4
  unsigned int v10; // eax
  unsigned int v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // rax
  unsigned int *v14; // rcx
  unsigned int v15; // xmm2_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  __int64 v18; // rcx

  result = a1;
  v3 = 1760LL * a1;
  if ( dword_140404A6C[v3 + 278845904] > 1 )
  {
    v4 = 7166LL * a2;
    *(float *)&v5 = -*(float *)&dword_140404A6C[v4 + 280651614];
    v6 = *(float *)&dword_140404A6C[v4 + 280651596];
    *(float *)&v7 = -*(float *)&dword_140404A6C[v4 + 280651616];
    dword_140404A6C[v3 + 278845934] = dword_140404A6C[v4 + 280651608];
    dword_140404A6C[v3 + 278845935] = dword_140404A6C[v4 + 280651609];
    dword_140404A6C[v3 + 278845936] = dword_140404A6C[v4 + 280651610];
    v8 = dword_140404A6C[v4 + 280651611];
    dword_140404A6C[v3 + 278845937] = v5;
    v9 = *(float *)&dword_140404A6C[v4 + 280651615];
    dword_140404A6C[v3 + 278845939] = v7;
    *(float *)&dword_140404A6C[v3 + 278845938] = -v9;
    dword_140404A6C[v3 + 278845940] = v8;
    dword_140404A6C[v3 + 278845941] = dword_140404A6C[v4 + 280651612];
    dword_140404A6C[v3 + 278845942] = dword_140404A6C[v4 + 280651613];
    v10 = dword_140404A6C[v4 + 280651440];
    *(float *)&v11 = v6 - (float)(*(float *)&dword_140404A6C[v3 + 278845937] * 0.25);
    v12 = *(float *)&dword_140404A6C[v4 + 280651597];
    dword_140404A6C[v3 + 278845916] = v11;
    *(float *)&dword_140404A6C[v3 + 278845917] = v12 - (float)(*(float *)&dword_140404A6C[v3 + 278845938] * 0.25);
    *(float *)&dword_140404A6C[v3 + 278845918] = *(float *)&dword_140404A6C[v4 + 280651598]
                                               - (float)(*(float *)&dword_140404A6C[v3 + 278845939] * 0.25);
    *(float *)&dword_140404A6C[v3 + 278845916] = (float)(*(float *)&dword_140404A6C[v3 + 278845934] * 0.125)
                                               + *(float *)&v11;
    *(float *)&dword_140404A6C[v3 + 278845917] = (float)(*(float *)&dword_140404A6C[v3 + 278845935] * 0.125)
                                               + *(float *)&dword_140404A6C[v3 + 278845917];
    *(float *)&dword_140404A6C[v3 + 278845918] = (float)(*(float *)&dword_140404A6C[v3 + 278845936] * 0.125)
                                               + *(float *)&dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278845919] = v10;
    dword_140404A6C[v3 + 278845920] = dword_140404A6C[v4 + 280651441];
    dword_140404A6C[v3 + 278845921] = dword_140404A6C[v4 + 280651442];
    v13 = (int)dword_140404A6C[v4 + 280651313];
    if ( (_DWORD)v13 != -1 )
    {
      v14 = &dword_140404A6C[5210 * v13 + 129716720];
      dword_140404A6C[v3 + 278845919] = *v14;
      dword_140404A6C[v3 + 278845920] = v14[1];
      dword_140404A6C[v3 + 278845921] = v14[2];
    }
    v15 = dword_140404A6C[v4 + 280651446];
    v16 = dword_140404A6C[v4 + 280651447];
    v17 = dword_140404A6C[v4 + 280651448];
    dword_140404A6C[v3 + 278845925] = v15;
    dword_140404A6C[v3 + 278845926] = v16;
    dword_140404A6C[v3 + 278845927] = v17;
    v18 = 47LL * (int)dword_140404A6C[v3 + 278845915];
    dword_140404A6C[v18 + 18215718] = v15;
    dword_140404A6C[v18 + 18215719] = v16;
    dword_140404A6C[v18 + 18215720] = v17;
    *(_QWORD *)&dword_140404A6C[v18 + 18215733] = 0;
    *(_QWORD *)&dword_140404A6C[v18 + 18215735] = 0;
    *(_QWORD *)&dword_140404A6C[v18 + 18215737] = 0;
    return 0;
  }
  return result;
}

