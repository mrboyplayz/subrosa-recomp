/* Address: 0x1400ef980 | Name: sub_1400EF980 | Size: 321 bytes */
__int64 __fastcall sub_1400EF980(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // r9d
  signed int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdi
  signed int v9; // ecx
  unsigned int v10; // xmm1_4
  signed int v11; // esi
  int i; // ebx
  unsigned int v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-18h]

  result = a1;
  v3 = 3597LL * a1;
  v4 = a2;
  v5 = dword_140404A6C[v3 + 71856279];
  if ( v5 < 10 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v8 = (int)dword_140404A6C[v3 + 71856292];
    result = 3 * (v4 + v7);
    v9 = dword_140404A6C[3 * v4 + 225654127 + 3 * v7];
    if ( v6 >= v9 )
    {
      result = (unsigned int)(v5 + 1);
      dword_140404A6C[v3 + 71856272] = v6 - v9;
      dword_140404A6C[v3 + 71856279] = result;
      if ( (_DWORD)v4 == 1 && (_DWORD)v8 != -1 )
      {
        v10 = dword_140404A6C[7166 * v8 + 280651336];
        v13[0] = dword_140404A6C[7166 * v8 + 280651335];
        v13[2] = dword_140404A6C[7166 * v8 + 280651337];
        v13[1] = v10;
        v15 = 1065353216;
        v14[0] = xmmword_140278D30;
        v14[1] = xmmword_140278D30;
        v11 = sub_140054130(30, v13, nullptr, (unsigned int *)v14);
        for ( i = 0; i < 7; ++i )
        {
          result = sub_1400E35D0(v11, -1, v8, i);
          if ( (_DWORD)result )
            break;
        }
      }
    }
  }
  return result;
}

