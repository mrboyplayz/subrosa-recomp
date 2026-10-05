/* Address: 0x140009ba0 | Name: sub_140009BA0 | Size: 644 bytes */
unsigned int *__fastcall sub_140009BA0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int *result; // rax
  unsigned int *v7; // rcx
  float v8; // xmm3_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  unsigned int v11; // xmm3_4
  unsigned int v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // rcx
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  v2 = 7166LL * a2;
  v4 = 3597LL * a1;
  v5 = (int)dword_140404A6C[v2 + 280651313];
  if ( (_DWORD)v5 == -1 )
  {
    result = (unsigned int *)(int)dword_140404A6C[v4 + 71859662];
    if ( (_DWORD)result != -1 )
    {
      v7 = &dword_140404A6C[5210 * (_QWORD)result + 129716720];
      v8 = *(float *)v7;
      dword_140404A6C[v4 + 71859149] = v7[1];
      dword_140404A6C[v4 + 71859150] = v7[2];
      *(float *)&dword_140404A6C[v4 + 71859148] = v8;
      v9 = 5210LL * (int)dword_140404A6C[v4 + 71859662];
      v10 = *(float *)&dword_140404A6C[v9 + 129716733] * 0.75;
      *(float *)&v11 = v8 - (float)(*(float *)&dword_140404A6C[v9 + 129716732] * 0.75);
      dword_140404A6C[v4 + 71859148] = v11;
      *(float *)&v12 = *(float *)&dword_140404A6C[v4 + 71859149] - v10;
      v13 = *(float *)&dword_140404A6C[v9 + 129716734] * 0.75;
      v14 = *(float *)&dword_140404A6C[v2 + 280651441];
      dword_140404A6C[v4 + 71859149] = v12;
      *(float *)&dword_140404A6C[v4 + 71859150] = *(float *)&dword_140404A6C[v4 + 71859150] - v13;
      v15 = 5210LL * (int)dword_140404A6C[v4 + 71859662];
      result = &dword_140404A6C[129716726];
      *(float *)&v16 = *(float *)&v11 - *(float *)&dword_140404A6C[v15 + 129716726];
      dword_140404A6C[v4 + 71859148] = v16;
      *(float *)&v17 = *(float *)&dword_140404A6C[v4 + 71859149] - *(float *)&dword_140404A6C[v15 + 129716727];
      dword_140404A6C[v4 + 71859149] = v17;
      v18 = v14 - *(float *)&v17;
      v19 = *(float *)&dword_140404A6C[v2 + 280651442];
      *(float *)&dword_140404A6C[v4 + 71859150] = *(float *)&dword_140404A6C[v4 + 71859150]
                                                - *(float *)&dword_140404A6C[v15 + 129716728];
      v20 = *(float *)&dword_140404A6C[v2 + 280651440];
      dword_140404A6C[v4 + 71859146] = 0;
      dword_140404A6C[v4 + 71859147] = 1;
      if ( (float)((float)((float)(v18 * v18) + (float)((float)(v20 - *(float *)&v16) * (float)(v20 - *(float *)&v16)))
                 + (float)((float)(v19 - *(float *)&dword_140404A6C[v4 + 71859150])
                         * (float)(v19 - *(float *)&dword_140404A6C[v4 + 71859150]))) < 1.0 )
      {
        if ( (rand() & 7) != 0 )
          dword_140404A6C[v4 + 71856325] |= 0x800u;
        result = (unsigned int *)sub_1400096B0(a1, 0, 1, 0, dword_140404A6C[225392114], dword_140404A6C[225392116]);
        dword_140404A6C[v4 + 71859145] = 26;
        dword_140404A6C[v4 + 71859142] = 1;
      }
    }
  }
  else
  {
    result = (unsigned int *)(dword_140404A6C[v4 + 71859147] - 1);
    if ( (int)dword_140404A6C[v4 + 71859146] >= (int)result )
    {
      result = &dword_140404A6C[129716744];
      if ( fsqrt(
             (float)((float)(*(float *)&dword_140404A6C[5210 * v5 + 129716744]
                           * *(float *)&dword_140404A6C[5210 * v5 + 129716744])
                   + (float)(*(float *)&dword_140404A6C[5210 * v5 + 129716745]
                           * *(float *)&dword_140404A6C[5210 * v5 + 129716745]))
           + (float)(*(float *)&dword_140404A6C[5210 * v5 + 129716746]
                   * *(float *)&dword_140404A6C[5210 * v5 + 129716746])) < 0.033333335 )
        dword_140404A6C[v4 + 71856325] |= 0x800u;
    }
    dword_140404A6C[v4 + 71859662] = -1;
  }
  return result;
}

