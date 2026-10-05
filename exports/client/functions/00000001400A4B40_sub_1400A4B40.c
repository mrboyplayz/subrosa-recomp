/* Address: 0x1400a4b40 | Name: sub_1400A4B40 | Size: 654 bytes */
__int64 __fastcall sub_1400A4B40(__int64 a1, int a2, float *a3)
{
  signed int v3; // r10d
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int *v8; // r8
  float v9; // xmm9_4
  float v10; // xmm11_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm7_4

  v3 = 0;
  result = a2;
  v5 = 5210LL * a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (int)dword_140404A6C[v5 + 129716768] > 0 )
  {
    v8 = &dword_140404A6C[v5 + 129716769];
    v9 = 0.0;
    v10 = 0.0;
    do
    {
      v11 = 60LL * (int)*v8;
      v12 = *(float *)&dword_140404A6C[v11 + 73007026] - *a3;
      v13 = *(float *)&dword_140404A6C[v11 + 73007028] - a3[2];
      v14 = *(float *)&dword_140404A6C[v11 + 73007027] - a3[1];
      *(float *)a1 = (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6178)
                                                           - (float)(v12 * *(float *)&dword_1402F6180))
                                                   * *(float *)&dword_140404A6C[v11 + 73007033])
                                           + (float)((float)((float)(v14 * *(float *)&dword_1402F6180)
                                                           - (float)(v13 * *(float *)&dword_1402F617C))
                                                   * *(float *)&dword_140404A6C[v11 + 73007032]))
                                   + (float)((float)((float)(v12 * *(float *)&dword_1402F617C)
                                                   - (float)(v14 * *(float *)&dword_1402F6178))
                                           * *(float *)&dword_140404A6C[v11 + 73007034]))
                           * 0.0078125)
                   + *(float *)a1;
      v9 = v9
         + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6188)
                                                 - (float)(v12 * *(float *)&dword_1402F6190))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007033])
                                 * 0.0078125)
                         + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F6190)
                                                 - (float)(v13 * *(float *)&dword_1402F618C))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007032])
                                 * 0.0078125))
                 + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F618C)
                                         - (float)(v14 * *(float *)&dword_1402F6188))
                                 * *(float *)&dword_140404A6C[60 * *v8 + 73007034])
                         * 0.0078125));
      *(float *)(a1 + 4) = v9;
      result = (int)*v8;
      v10 = v10
          + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6198)
                                                  - (float)(v12 * *(float *)&dword_1402F61A0))
                                          * *(float *)&dword_140404A6C[60 * result + 73007033])
                                  * 0.0078125)
                          + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F61A0)
                                                  - (float)(v13 * *(float *)&dword_1402F619C))
                                          * *(float *)&dword_140404A6C[60 * result + 73007032])
                                  * 0.0078125))
                  + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F619C)
                                          - (float)(v14 * *(float *)&dword_1402F6198))
                                  * *(float *)&dword_140404A6C[60 * result + 73007034])
                          * 0.0078125));
      ++v3;
      *(float *)(a1 + 8) = v10;
      ++v8;
    }
    while ( v3 < (int)dword_140404A6C[v5 + 129716768] );
  }
  return result;
}

