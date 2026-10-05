/* Address: 0x1400b91e0 | Name: sub_1400B91E0 | Size: 717 bytes */
__int64 __fastcall sub_1400B91E0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  float v4; // xmm6_4
  __int64 v7; // rbx
  unsigned int v8; // xmm7_4
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm9_4
  unsigned int v11; // xmm10_4
  unsigned int v12; // xmm11_4
  unsigned int v13; // xmm12_4
  unsigned int v14; // xmm13_4
  unsigned int v15; // xmm14_4
  unsigned int v16; // xmm15_4
  __int64 v17; // rsi
  signed int v18; // edi
  unsigned int *v19; // rbx
  unsigned int v21; // [rsp+F0h] [rbp+8h]

  v3 = -1;
  v4 = 1.0;
  v7 = a1;
  if ( (unsigned int)sub_1400DC050(a2, a3, 0) )
  {
    v8 = dword_140404A6C[73006981];
    v9 = dword_140404A6C[73006982];
    v10 = dword_140404A6C[73006983];
    v11 = dword_140404A6C[73006984];
    v12 = dword_140404A6C[73006985];
    v13 = dword_140404A6C[73006986];
    v14 = dword_140404A6C[73006989];
    v15 = dword_140404A6C[73006990];
    v16 = dword_140404A6C[73006991];
    v4 = *(float *)&dword_140404A6C[73006987];
  }
  else
  {
    v10 = v21;
    v8 = v21;
    v13 = v21;
    v14 = v21;
    v15 = v21;
    v9 = v21;
    v16 = v21;
    v12 = v21;
    v11 = v21;
  }
  v17 = 7166 * v7;
  v18 = 0;
  if ( (int)dword_140404A6C[7166 * v7 + 280651427] > 0 )
  {
    v19 = &dword_140404A6C[v17 + 280651428];
    do
    {
      if ( (unsigned int)sub_1400DC940(*v19, a2, a3, 0) && *(float *)&dword_140404A6C[73006987] < v4 )
      {
        v8 = dword_140404A6C[73006981];
        v4 = *(float *)&dword_140404A6C[73006987];
        v9 = dword_140404A6C[73006982];
        v10 = dword_140404A6C[73006983];
        v11 = dword_140404A6C[73006984];
        v12 = dword_140404A6C[73006985];
        v13 = dword_140404A6C[73006986];
        v14 = dword_140404A6C[73006989];
        v15 = dword_140404A6C[73006990];
        v16 = dword_140404A6C[73006991];
        v3 = *v19;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < (int)dword_140404A6C[v17 + 280651427] );
  }
  if ( v4 >= 1.0 )
    return 0;
  dword_140404A6C[73006981] = v8;
  dword_140404A6C[73006982] = v9;
  dword_140404A6C[73006983] = v10;
  dword_140404A6C[73006984] = v11;
  dword_140404A6C[73006985] = v12;
  dword_140404A6C[73006986] = v13;
  dword_140404A6C[73006989] = v14;
  dword_140404A6C[73006990] = v15;
  dword_140404A6C[73006991] = v16;
  *(float *)&dword_140404A6C[73006987] = v4;
  dword_140404A6C[73007011] = v3;
  return 1;
}

