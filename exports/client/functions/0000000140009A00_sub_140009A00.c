/* Address: 0x140009a00 | Name: sub_140009A00 | Size: 411 bytes */
void __fastcall sub_140009A00(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  float v7; // xmm3_4
  float v8; // xmm4_4
  unsigned int v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // eax

  v2 = a1;
  if ( dword_140404A6C[283831448] == 1 )
  {
    dword_140404A6C[3597 * a1 + 71856296] = -1082130432;
  }
  else
  {
    v3 = 5210LL * a2;
    v4 = (int)dword_140404A6C[v3 + 129720183];
    if ( (_DWORD)v4 != -1 )
    {
      dword_140404A6C[383 * v4 + 132400669] = 1;
      sub_140009E30();
      v5 = (int)dword_140404A6C[v3 + 129720183];
      v6 = 3597 * v2;
      v7 = (float)((float)(*(float *)&dword_140404A6C[v3 + 129716745] * *(float *)&dword_140404A6C[v3 + 129716733])
                 + (float)(*(float *)&dword_140404A6C[v3 + 129716744] * *(float *)&dword_140404A6C[v3 + 129716732]))
         + (float)(*(float *)&dword_140404A6C[v3 + 129716746] * *(float *)&dword_140404A6C[v3 + 129716734]);
      dword_140404A6C[v6 + 71856293] = 0x40000000;
      dword_140404A6C[v6 + 71856295] = -1082130432;
      v8 = *(float *)&dword_140404A6C[383 * v5 + 132400658];
      v9 = dword_140404A6C[383 * v5 + 132400657];
      dword_140404A6C[v6 + 71856294] = v9;
      v10 = (float)(v7 + v8) * 8.0;
      if ( v10 > 1.0 )
        v10 = 1.0;
      *(float *)&dword_140404A6C[v6 + 71856296] = v10 / (float)(fabs(*(float *)&v9) + 1.0);
      if ( v8 < 0.050000001 )
        dword_140404A6C[v6 + 71856296] = -1082130432;
      v11 = dword_140404A6C[383 * v5 + 132401001];
      dword_140404A6C[v6 + 71856325] = 0;
      if ( v11 >= 180 )
      {
        dword_140404A6C[v6 + 71856296] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v6 + 71856293] = 0x40000000;
        dword_140404A6C[v6 + 71856295] = 1065353216;
        if ( v11 >= 280 )
          dword_140404A6C[v6 + 71856296] = -1082130432;
      }
    }
  }
}

