/* Address: 0x1400a1ae0 | Name: sub_1400A1AE0 | Size: 561 bytes */
__int64 __fastcall sub_1400A1AE0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  double v5; // xmm0_8
  float v6; // xmm10_4
  __int64 v7; // rdx
  __int64 v8; // rcx
  double v9; // xmm0_8
  float v10; // xmm2_4
  __int64 v12; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-88h] BYREF
  __int128 v14; // [rsp+30h] [rbp-78h]
  int v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]

  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856292];
  if ( (_DWORD)v2 != -1 && (int)dword_140404A6C[7166 * v2 + 280658139] > 0 )
  {
    v3 = (int)dword_140404A6C[7166 * v2 + 280658140];
    if ( (_DWORD)v3 != -1 )
    {
      v13 = xmmword_140278D30;
      v15 = 1065353216;
      v14 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v13, (float *)&dword_1402F6188);
      v13 = xmmword_140278D30;
      v15 = 1065353216;
      v14 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v13, (float *)&dword_1402F6188);
      v5 = sub_14023F704(7040 * v3, v4);
      v6 = *(float *)&v5;
      sub_14023F704(v8, v7);
      v9 = sub_14000B5F0();
      v10 = *(float *)&v9;
      if ( *(float *)&v9 >= -1.570796326795 )
      {
        if ( *(float *)&v9 > 1.570796326795 )
          v10 = 1.5707964;
      }
      else
      {
        v10 = -1.5707964;
      }
      *(float *)&dword_140404A6C[v1 + 71856293] = v6 + v10;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v16);
}

