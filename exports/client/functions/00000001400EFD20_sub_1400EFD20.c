/* Address: 0x1400efd20 | Name: sub_1400EFD20 | Size: 716 bytes */
__int64 __fastcall sub_1400EFD20(int a1, int a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm0_4
  unsigned int v10; // xmm2_4
  unsigned int v11; // xmm1_4
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  unsigned int v14; // eax
  unsigned int v15; // ebx
  signed int v16; // ebp
  int i; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v26[4]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-38h]
  __int64 v29; // [rsp+68h] [rbp-30h]

  v3 = 3597LL * a1;
  v4 = dword_140404A6C[v3 + 71856292];
  if ( v4 != -1 && (int)dword_140404A6C[v3 + 71856280] < 3 )
  {
    v5 = (int)dword_140404A6C[v3 + 71856343];
    v6 = a2;
    if ( (int)dword_140404A6C[v3 + 71856272] >= (int)dword_140404A6C[14019 * v5 + 225654127 + 3 * a2] )
    {
      v7 = 14019 * v5;
      v8 = (float)-dword_140404A6C[14019 * v5 + 225654177] * 4.0;
      v9 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641216]) + *(float *)&dword_140404A6C[v7 + 225654178];
      *(float *)&v10 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641218])
                     + *(float *)&dword_140404A6C[v7 + 225654180];
      *(float *)&v11 = (float)(v8 * *(float *)&dword_140404A6C[v7 + 225641217])
                     + *(float *)&dword_140404A6C[v7 + 225654179];
      dword_140404A6C[v7 + 225654177] = ((unsigned __int8)dword_140404A6C[v7 + 225654177] + 1) & 7;
      *(float *)v26 = v9;
      v12 = *(_OWORD *)&dword_140404A6C[14019 * v5 + 225641210];
      v26[2] = v10;
      v27[0] = v12;
      v13 = *(_OWORD *)&dword_140404A6C[14019 * v5 + 225641214];
      v26[1] = v11;
      v27[1] = v13;
      v28 = dword_140404A6C[14019 * v5 + 225641218];
      sub_14007B2A0((__int64)v27, (float *)&dword_1402F6188);
      v14 = sub_14005BCA0(
              dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654126 + 3 * v6],
              v26,
              nullptr,
              (unsigned int *)v27,
              dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654128 + 3 * v6]);
      v15 = v14;
      if ( v14 != -1 )
        dword_140404A6C[5210 * v14 + 129716718] = a1;
      dword_140404A6C[v3 + 71856272] -= dword_140404A6C[14019 * (int)dword_140404A6C[v3 + 71856343] + 225654127 + 3 * v6];
      v16 = sub_140054130(27, v26, nullptr, (unsigned int *)v27);
      dword_140404A6C[1760 * v16 + 278846053] = v15;
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_1400E35D0(v16, -1, v4, i) )
          break;
      }
      ++dword_140404A6C[v3 + 71856280];
      sub_140051DC0(a1);
      if ( dword_140404A6C[283831312] == 3 )
        sub_140051F50((unsigned int)a1);
      v18 = (int)dword_140404A6C[v3 + 71856343];
      v19 = 14019 * v18;
      v20 = (int)dword_140404A6C[14019 * v18 + 225654128];
      if ( (int)v20 > 0 )
      {
        v21 = 4673 * v18;
        dword_140404A6C[v19 + 225654128] = v20 - 1;
        v22 = 3 * (v21 + v20);
        v23 = 3 * (v21 + v6);
        *(_QWORD *)&dword_140404A6C[v23 + 225654126] = *(_QWORD *)&dword_140404A6C[v22 + 225654126];
        dword_140404A6C[v23 + 225654128] = dword_140404A6C[v22 + 225654128];
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v25 ^ v29);
}

