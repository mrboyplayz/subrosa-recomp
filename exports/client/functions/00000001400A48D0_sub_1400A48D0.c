/* Address: 0x1400a48d0 | Name: sub_1400A48D0 | Size: 621 bytes */
__int64 __fastcall sub_1400A48D0(int a1, float *a2)
{
  signed int v2; // r9d
  __int64 result; // rax
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  unsigned int *v9; // rdx
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
  *(_QWORD *)&dword_140404A6C[v5 + 129716750] = 0;
  dword_140404A6C[v5 + 129716752] = 0;
  if ( (int)dword_140404A6C[v5 + 129716768] > 0 )
  {
    v9 = &dword_140404A6C[v5 + 129716769];
    do
    {
      ++v2;
      v10 = 60LL * (int)*v9;
      v11 = *(float *)&dword_140404A6C[v10 + 73007026] - *a2;
      v12 = *(float *)&dword_140404A6C[v10 + 73007028] - a2[2];
      v13 = *(float *)&dword_140404A6C[v10 + 73007027] - a2[1];
      v6 = v6
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716726] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716728] * v11))
                                 * *(float *)&dword_140404A6C[v10 + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716728] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716727] * v12))
                                 * *(float *)&dword_140404A6C[v10 + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716727] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716726] * v13))
                         * *(float *)&dword_140404A6C[v10 + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716750] = v6;
      v14 = 60LL * (int)*v9;
      v7 = v7
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716729] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716731] * v11))
                                 * *(float *)&dword_140404A6C[v14 + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716731] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716730] * v12))
                                 * *(float *)&dword_140404A6C[v14 + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716730] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716729] * v13))
                         * *(float *)&dword_140404A6C[v14 + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716751] = v7;
      result = (int)*v9++;
      v8 = v8
         + (float)((float)((float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716732] * v12)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716734] * v11))
                                 * *(float *)&dword_140404A6C[60 * result + 73007033])
                         + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716734] * v13)
                                         - (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v12))
                                 * *(float *)&dword_140404A6C[60 * result + 73007032]))
                 + (float)((float)((float)(*(float *)&dword_140404A6C[v5 + 129716733] * v11)
                                 - (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v13))
                         * *(float *)&dword_140404A6C[60 * result + 73007034]));
      *(float *)&dword_140404A6C[v5 + 129716752] = v8;
    }
    while ( v2 < (int)dword_140404A6C[v5 + 129716768] );
  }
  return result;
}

