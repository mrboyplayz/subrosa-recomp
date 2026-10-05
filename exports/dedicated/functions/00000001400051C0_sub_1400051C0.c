/* Address: 0x1400051c0 | Name: sub_1400051C0 | Size: 411 bytes */
void __fastcall sub_1400051C0(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  int v11; // eax

  v2 = a1;
  if ( dword_1915413AC == 1 )
  {
    *((_DWORD *)&qword_16D67D648 + 3597 * a1 + 1) = -1082130432;
  }
  else
  {
    v3 = 5210LL * a2;
    v4 = dword_16E6A72A8[v3];
    if ( (_DWORD)v4 != -1 )
    {
      *((_DWORD *)&unk_16D4FD600 + 383 * v4) = 1;
      sub_1400055F0();
      v5 = dword_16E6A72A8[v3];
      v6 = 14388 * v2;
      v7 = (float)((float)(*(float *)&dword_16E6A3CF0[v3] * *(float *)&dword_16E6A3CC0[v3])
                 + (float)(*(float *)&dword_16E6A3CEC[v3] * *(float *)&dword_16E6A3CBC[v3]))
         + (float)(*(float *)&dword_16E6A3CF4[v3] * *(float *)&dword_16E6A3CC4[v3]);
      *(_DWORD *)((char *)&qword_16D67D640 + v6) = 0x40000000;
      *(_DWORD *)((char *)&qword_16D67D648 + v6) = -1082130432;
      v8 = *((float *)&unk_16D4FD5D4 + 383 * v5);
      v9 = *((float *)&unk_16D4FD5D0 + 383 * v5);
      *(float *)((char *)&qword_16D67D640 + v6 + 4) = v9;
      v10 = (float)(v7 + v8) * 8.0;
      if ( v10 > 1.0 )
        v10 = 1.0;
      *(float *)((char *)&qword_16D67D648 + v6 + 4) = v10 / (float)(fabs(v9) + 1.0);
      if ( v8 < 0.050000001 )
        *(_DWORD *)((char *)&qword_16D67D648 + v6 + 4) = -1082130432;
      v11 = *((_DWORD *)&unk_16D4FDB30 + 383 * v5);
      dword_16D67D6C0[v6 / 4] = 0;
      if ( v11 >= 180 )
      {
        *(_DWORD *)((char *)&qword_16D67D648 + v6 + 4) = 1065353216;
        *(__int64 *)((char *)&qword_16D67D640 + v6) = 0x40000000;
        *(_DWORD *)((char *)&qword_16D67D648 + v6) = 1065353216;
        if ( v11 >= 280 )
          *(_DWORD *)((char *)&qword_16D67D648 + v6 + 4) = -1082130432;
      }
    }
  }
}

