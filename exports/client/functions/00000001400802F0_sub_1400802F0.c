/* Address: 0x1400802f0 | Name: sub_1400802F0 | Size: 331 bytes */
void __fastcall sub_1400802F0(unsigned int a1)
{
  __int64 v2; // r14
  int v3; // edi
  unsigned int *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = 3597LL * (int)a1;
  if ( !dword_140404A6C[v2 + 71859139] )
  {
    sub_1400F3B30(a1);
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    if ( a1 <= 0xFF )
      sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    v3 = 0;
    v4 = &dword_140404A6C[283831510];
    do
    {
      if ( *v4 == a1 )
      {
        if ( dword_140404A6C[283831312] == 4 )
          sub_140194C10((unsigned int)v3);
        *v4 = -1;
        v4[5654] = 0;
      }
      ++v3;
      v4 += 5873;
    }
    while ( v3 < 6 );
    v5 = (int)dword_140404A6C[v2 + 71856268];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 28 * v5;
      dword_140404A6C[v6 + 134050374] = dword_140404A6C[v2 + 71856272];
      dword_140404A6C[v6 + 134050375] = dword_140404A6C[v2 + 71856275];
      dword_140404A6C[v6 + 134050376] = dword_140404A6C[v2 + 71856276];
      dword_140404A6C[v6 + 134050377] = dword_140404A6C[v2 + 71856291];
    }
  }
  v7 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 7166 * v7;
    if ( dword_140404A6C[7166 * v7 + 280651305] == a1 )
    {
      dword_140404A6C[v8 + 280651306] = dword_140404A6C[v2 + 71856268];
      dword_140404A6C[v8 + 280651305] = -1;
    }
  }
  dword_140404A6C[v2 + 71856253] = 0;
  sub_140051DC0(a1);
}

