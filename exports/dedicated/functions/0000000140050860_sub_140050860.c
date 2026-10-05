/* Address: 0x140050860 | Name: sub_140050860 | Size: 621 bytes */
__int64 __fastcall sub_140050860(int a1, float *a2)
{
  int v2; // r9d
  __int64 result; // rax
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  int *v9; // rdx
  __int64 v10; // rcx
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  __int64 v14; // rcx

  v2 = 0;
  result = a1;
  v5 = 5210LL * a1;
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  *(_QWORD *)((char *)&unk_16E6A3D04 + v5 * 4) = 0;
  *(_DWORD *)((char *)&unk_16E6A3D0C + v5 * 4) = 0;
  if ( *(int *)((char *)&unk_16E6A3D4C + v5 * 4) > 0 )
  {
    v9 = &dword_16E6A3D50[v5];
    do
    {
      ++v2;
      v10 = 60LL * *v9;
      v11 = *(float *)&dword_16E18CAF4[v10] - *a2;
      v12 = *(float *)&dword_16E18CAFC[v10] - a2[2];
      v13 = *(float *)&dword_16E18CAF8[v10] - a2[1];
      v6 = v6
         + (float)((float)((float)((float)((float)(*(float *)&dword_16E6A3CA4[v5] * v12)
                                         - (float)(*(float *)&dword_16E6A3CAC[v5] * v11))
                                 * *(float *)((char *)&unk_16E18CB10 + v10 * 4))
                         + (float)((float)((float)(*(float *)&dword_16E6A3CAC[v5] * v13)
                                         - (float)(*(float *)&dword_16E6A3CA8[v5] * v12))
                                 * *(float *)((char *)&unk_16E18CB0C + v10 * 4)))
                 + (float)((float)((float)(*(float *)&dword_16E6A3CA8[v5] * v11)
                                 - (float)(*(float *)&dword_16E6A3CA4[v5] * v13))
                         * *(float *)((char *)&unk_16E18CB14 + v10 * 4)));
      *(float *)((char *)&unk_16E6A3D04 + v5 * 4) = v6;
      v14 = 240LL * *v9;
      v7 = v7
         + (float)((float)((float)((float)((float)(*(float *)&dword_16E6A3CB0[v5] * v12)
                                         - (float)(*(float *)&dword_16E6A3CB8[v5] * v11))
                                 * *(float *)((char *)&unk_16E18CB0C + v14 + 4))
                         + (float)((float)((float)(*(float *)&dword_16E6A3CB8[v5] * v13)
                                         - (float)(*(float *)&dword_16E6A3CB4[v5] * v12))
                                 * *(float *)((char *)&unk_16E18CB0C + v14)))
                 + (float)((float)((float)(*(float *)&dword_16E6A3CB4[v5] * v11)
                                 - (float)(*(float *)&dword_16E6A3CB0[v5] * v13))
                         * *(float *)((char *)&unk_16E18CB0C + v14 + 8)));
      *(float *)((char *)&unk_16E6A3D08 + v5 * 4) = v7;
      result = *v9++;
      v8 = v8
         + (float)((float)((float)((float)((float)(*(float *)&dword_16E6A3CBC[v5] * v12)
                                         - (float)(*(float *)&dword_16E6A3CC4[v5] * v11))
                                 * *((float *)&unk_16E18CB0C + 60 * result + 1))
                         + (float)((float)((float)(*(float *)&dword_16E6A3CC4[v5] * v13)
                                         - (float)(*(float *)&dword_16E6A3CC0[v5] * v12))
                                 * *((float *)&unk_16E18CB0C + 60 * result)))
                 + (float)((float)((float)(*(float *)&dword_16E6A3CC0[v5] * v11)
                                 - (float)(*(float *)&dword_16E6A3CBC[v5] * v13))
                         * *((float *)&unk_16E18CB0C + 60 * result + 2)));
      *(float *)((char *)&unk_16E6A3D0C + v5 * 4) = v8;
    }
    while ( v2 < *(_DWORD *)((char *)&unk_16E6A3D4C + v5 * 4) );
  }
  return result;
}

