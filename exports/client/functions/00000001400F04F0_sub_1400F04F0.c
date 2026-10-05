/* Address: 0x1400f04f0 | Name: sub_1400F04F0 | Size: 335 bytes */
void __fastcall sub_1400F04F0(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  signed int v5; // r15d
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdx
  unsigned int v9; // xmm1_4
  signed int v10; // ebp
  int i; // ebx
  unsigned int v12[4]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-28h]

  v3 = 3597LL * a1;
  if ( (int)dword_140404A6C[v3 + 71856279] < 20 )
  {
    v4 = a2 + 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v5 = dword_140404A6C[3 * v4 + 225654127];
    v6 = dword_140404A6C[3 * v4 + 225654126];
    if ( (int)dword_140404A6C[v3 + 71856272] >= v5 )
    {
      v7 = dword_140404A6C[v3 + 71856292];
      v8 = 7166LL * v7;
      v9 = dword_140404A6C[v8 + 280651336];
      v12[0] = dword_140404A6C[v8 + 280651335];
      v12[2] = dword_140404A6C[v8 + 280651337];
      v12[1] = v9;
      v14 = 1065353216;
      v13[0] = xmmword_140278D30;
      v13[1] = xmmword_140278D30;
      v10 = sub_140054130(v6, v12, nullptr, (unsigned int *)v13);
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_1400E35D0(v10, -1, v7, i) )
          break;
      }
      dword_140404A6C[v3 + 71856272] -= v5;
      ++dword_140404A6C[v3 + 71856279];
      sub_140051DC0(a1);
    }
  }
}

