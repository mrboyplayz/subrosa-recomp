/* Address: 0x140005360 | Name: sub_140005360 | Size: 645 bytes */
int *__fastcall sub_140005360(int a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  int *result; // rax
  int *v7; // rcx
  float v8; // xmm3_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // rcx
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  v2 = 7166LL * a2;
  v4 = 14388LL * a1;
  v5 = dword_1909419F0[v2];
  if ( (_DWORD)v5 == -1 )
  {
    result = (int *)(int)dword_16D680308[v4 / 4 + 503];
    if ( (_DWORD)result != -1 )
    {
      v7 = &dword_16E6A3C8C[5210 * (_QWORD)result];
      v8 = *(float *)v7;
      *(_DWORD *)((char *)&unk_16D6802E0 + v4) = v7[1];
      *(_DWORD *)((char *)&unk_16D6802E4 + v4) = v7[2];
      *(float *)((char *)&unk_16D6802DC + v4) = v8;
      v9 = 5210LL * (int)dword_16D680308[v4 / 4 + 503];
      v10 = *(float *)&dword_16E6A3CBC[v9 + 1] * 0.75;
      v11 = v8 - (float)(*(float *)&dword_16E6A3CBC[v9] * 0.75);
      *(float *)((char *)&unk_16D6802DC + v4) = v11;
      v12 = *(float *)((char *)&unk_16D6802E0 + v4) - v10;
      v13 = *(float *)&dword_16E6A3CBC[v9 + 2] * 0.75;
      v14 = *(float *)&dword_190941BF0[v2];
      *(float *)((char *)&unk_16D6802E0 + v4) = v12;
      *(float *)((char *)&unk_16D6802E4 + v4) = *(float *)((char *)&unk_16D6802E4 + v4) - v13;
      v15 = 5210LL * (int)dword_16D680308[v4 / 4 + 503];
      result = dword_16E6A3CA4;
      v16 = v11 - *(float *)&dword_16E6A3CA4[v15];
      *(float *)((char *)&unk_16D6802DC + v4) = v16;
      v17 = *(float *)((char *)&unk_16D6802E0 + v4) - *(float *)&dword_16E6A3CA4[v15 + 1];
      *(float *)((char *)&unk_16D6802E0 + v4) = v17;
      v18 = v14 - v17;
      v19 = *(float *)&dword_190941BF4[v2];
      *(float *)((char *)&unk_16D6802E4 + v4) = *(float *)((char *)&unk_16D6802E4 + v4)
                                              - *(float *)&dword_16E6A3CA4[v15 + 2];
      v20 = *(float *)&dword_190941BEC[v2];
      *(_DWORD *)((char *)&unk_16D6802D4 + v4) = 0;
      *(_DWORD *)((char *)&unk_16D6802D8 + v4) = 1;
      if ( (float)((float)((float)(v18 * v18) + (float)((float)(v20 - v16) * (float)(v20 - v16)))
                 + (float)((float)(v19 - *(float *)((char *)&unk_16D6802E4 + v4))
                         * (float)(v19 - *(float *)((char *)&unk_16D6802E4 + v4)))) < 1.0 )
      {
        if ( (rand() & 7) != 0 )
          dword_16D67D6C0[v4 / 4] |= 0x800u;
        result = (int *)sub_140004E70(a1, 0, 1, 0, dword_18398ACB4, dword_18398ACBC);
        *(_DWORD *)((char *)&unk_16D6802D0 + v4) = 26;
        *(_DWORD *)((char *)&unk_16D6802C4 + v4) = 1;
      }
    }
  }
  else
  {
    result = (int *)(unsigned int)(*(_DWORD *)((char *)&unk_16D6802D8 + v4) - 1);
    if ( *(_DWORD *)((char *)&unk_16D6802D4 + v4) >= (int)result )
    {
      result = dword_16E6A3CEC;
      if ( fsqrt(
             (float)((float)(*(float *)&dword_16E6A3CEC[5210 * v5] * *(float *)&dword_16E6A3CEC[5210 * v5])
                   + (float)(*(float *)&dword_16E6A3CEC[5210 * v5 + 1] * *(float *)&dword_16E6A3CEC[5210 * v5 + 1]))
           + (float)(*(float *)&dword_16E6A3CEC[5210 * v5 + 2] * *(float *)&dword_16E6A3CEC[5210 * v5 + 2])) < 0.033333335 )
        dword_16D67D6C0[v4 / 4] |= 0x800u;
    }
    dword_16D680308[v4 / 4 + 503] = -1;
  }
  return result;
}

