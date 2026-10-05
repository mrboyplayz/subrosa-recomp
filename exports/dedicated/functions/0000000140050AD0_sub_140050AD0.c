/* Address: 0x140050ad0 | Name: sub_140050AD0 | Size: 654 bytes */
__int64 __fastcall sub_140050AD0(__int64 a1, int a2, float *a3)
{
  int v3; // r10d
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  int *v8; // r8
  float v9; // xmm9_4
  float v10; // xmm11_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm7_4

  v3 = 0;
  result = a2;
  v5 = 20840LL * a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( *(int *)((char *)&unk_16E6A3D4C + v5) > 0 )
  {
    v8 = &dword_16E6A3D50[v5 / 4];
    v9 = 0.0;
    v10 = 0.0;
    do
    {
      v11 = 60LL * *v8;
      v12 = *(float *)&dword_16E18CAF4[v11] - *a3;
      v13 = *(float *)&dword_16E18CAFC[v11] - a3[2];
      v14 = *(float *)&dword_16E18CAF8[v11] - a3[1];
      *(float *)a1 = (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_140146A18)
                                                           - (float)(v12 * *(float *)&dword_140146A20))
                                                   * *(float *)((char *)&unk_16E18CB10 + v11 * 4))
                                           + (float)((float)((float)(v14 * *(float *)&dword_140146A20)
                                                           - (float)(v13 * *(float *)&dword_140146A1C))
                                                   * *(float *)((char *)&unk_16E18CB0C + v11 * 4)))
                                   + (float)((float)((float)(v12 * *(float *)&dword_140146A1C)
                                                   - (float)(v14 * *(float *)&dword_140146A18))
                                           * *(float *)((char *)&unk_16E18CB14 + v11 * 4)))
                           * 0.0078125)
                   + *(float *)a1;
      v9 = v9
         + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_140146A28)
                                                 - (float)(v12 * *(float *)&dword_140146A30))
                                         * *((float *)&unk_16E18CB0C + 60 * *v8 + 1))
                                 * 0.0078125)
                         + (float)((float)((float)((float)(v14 * *(float *)&dword_140146A30)
                                                 - (float)(v13 * *(float *)&dword_140146A2C))
                                         * *((float *)&unk_16E18CB0C + 60 * *v8))
                                 * 0.0078125))
                 + (float)((float)((float)((float)(v12 * *(float *)&dword_140146A2C)
                                         - (float)(v14 * *(float *)&dword_140146A28))
                                 * *((float *)&unk_16E18CB0C + 60 * *v8 + 2))
                         * 0.0078125));
      *(float *)(a1 + 4) = v9;
      result = *v8;
      v10 = v10
          + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_140146A38)
                                                  - (float)(v12 * *(float *)&dword_140146A40))
                                          * *((float *)&unk_16E18CB0C + 60 * result + 1))
                                  * 0.0078125)
                          + (float)((float)((float)((float)(v14 * *(float *)&dword_140146A40)
                                                  - (float)(v13 * *(float *)&dword_140146A3C))
                                          * *((float *)&unk_16E18CB0C + 60 * result))
                                  * 0.0078125))
                  + (float)((float)((float)((float)(v12 * *(float *)&dword_140146A3C)
                                          - (float)(v14 * *(float *)&dword_140146A38))
                                  * *((float *)&unk_16E18CB0C + 60 * result + 2))
                          * 0.0078125));
      ++v3;
      *(float *)(a1 + 8) = v10;
      ++v8;
    }
    while ( v3 < *(_DWORD *)((char *)&unk_16E6A3D4C + v5) );
  }
  return result;
}

