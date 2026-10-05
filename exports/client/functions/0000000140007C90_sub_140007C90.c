/* Address: 0x140007c90 | Name: sub_140007C90 | Size: 513 bytes */
__int64 __fastcall sub_140007C90(int a1)
{
  __int64 v1; // rbx
  signed int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  unsigned int *v8; // rcx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  signed int v11; // eax
  unsigned int v12; // xmm0_4
  __int64 v13; // rcx
  unsigned int v14; // eax
  char v15; // al
  __int64 v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v19[2]; // [rsp+28h] [rbp-40h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v1 = a1;
  v2 = sub_14005CCF0();
  v3 = v2;
  if ( v2 != -1 )
  {
    v4 = 202 * v1;
    v5 = 3597LL * v2;
    dword_140404A6C[v4 + 133450255] = v2;
    dword_140404A6C[v5 + 71856286] = 7;
    sub_140158AB0(&dword_140404A6C[v5 + 71856254], Parameters);
    v6 = dword_140404A6C[v4 + 133450262];
    dword_140404A6C[v5 + 71859139] = 1;
    dword_140404A6C[v5 + 71859816] = 1;
    dword_140404A6C[v5 + 71859821] = 2;
    dword_140404A6C[v5 + 71859822] = 1;
    dword_140404A6C[v5 + 71859146] = 0;
    dword_140404A6C[v5 + 71859147] = v6;
    if ( v6 > 0 )
    {
      v7 = (unsigned int)v6;
      v8 = &dword_140404A6C[v5 + 71859150];
      v9 = &dword_140404A6C[v4 + 133450265];
      do
      {
        v10 = *(v9 - 2);
        v9 += 3;
        *(v8 - 2) = v10;
        v8 += 8;
        *(v8 - 9) = *(v9 - 4);
        *(v8 - 8) = *(v9 - 3);
        --v7;
      }
      while ( v7 );
    }
    sub_140051DC0(v3);
    v19[0] = xmmword_140278D30;
    v19[1] = xmmword_140278D30;
    v20 = 1065353216;
    sub_14007B2A0(v19, &dword_1402F6188);
    v11 = sub_140053840(&dword_140404A6C[v4 + 133450258], v19, v3);
    dword_140404A6C[v5 + 71856292] = v11;
    if ( v11 != -1 )
    {
      v12 = dword_140404A6C[v4 + 133450261];
      dword_140404A6C[v4 + 133450256] = v11;
      v13 = 7166LL * v11;
      dword_140404A6C[v5 + 71859143] = v12;
      v14 = dword_140404A6C[v4 + 133450254];
      dword_140404A6C[v5 + 71856297] = 0;
      dword_140404A6C[v13 + 280651341] = v12;
      if ( v14 == 1 )
      {
        dword_140404A6C[v5 + 71859140] = 1;
      }
      else if ( !v14 )
      {
        v15 = rand();
        v16 = 7;
        if ( (v15 & 1) != 0 )
          v16 = 11;
        sub_14012CD60(dword_140404A6C[v5 + 71856292], v16);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v21);
}

