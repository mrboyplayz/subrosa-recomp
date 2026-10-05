/* Address: 0x1400d40c0 | Name: sub_1400D40C0 | Size: 672 bytes */
double __fastcall sub_1400D40C0(double result)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // rax
  signed int v4; // edi
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  signed int v7; // r11d
  __int64 i; // r8
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  signed int v15; // eax

  v1 = dword_140404A6C[283830714];
  v2 = 44LL * (int)dword_140404A6C[283830714];
  dword_140404A6C[v2 + 284024933] = 2048;
  dword_140404A6C[v2 + 284024934] = 2048;
  dword_140404A6C[v2 + 284024935] = 1;
  dword_140404A6C[v2 + 284024936] = 6408;
  dword_140404A6C[v2 + 284024937] = 6408;
  dword_140404A6C[v2 + 284024943] = 0;
  dword_140404A6C[v2 + 284024938] = 33071;
  dword_140404A6C[v2 + 284024939] = 33071;
  dword_140404A6C[v2 + 284024940] = 9729;
  dword_140404A6C[v2 + 284024941] = 9987;
  if ( *(_QWORD *)&dword_140404A6C[v2 + 284024945]
    || (v3 = j__malloc_base(0x1000000), (*(_QWORD *)&dword_140404A6C[v2 + 284024945] = v3) != 0) )
  {
    v4 = 0;
    if ( (int)dword_140404A6C[v2 + 284024934] > 0 )
    {
      v5 = -1;
      v6 = 0;
      do
      {
        v7 = 0;
        for ( i = 0;
              v7 < (int)dword_140404A6C[v2 + 284024933];
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 284024945] + 4LL * v15) = ((int)(float)((float)(v12 * 127.0)
                                                                                                 + 128.0) << 8)
                                                                                   - ((int)(float)((float)(v14 * 127.0)
                                                                                                 + -128.0) << 16)
                                                                                   - 0x1000000
                                                                                   + (int)(float)((float)(v13 * 127.0)
                                                                                                + 128.0) )
        {
          v9 = 0.0;
          v10 = 0.0;
          if ( (unsigned __int64)(i - 1) <= 0x7FE )
            v9 = (float)(*(float *)&dword_140404A6C[v6 + 188872559 + i] - *(float *)&dword_140404A6C[v6 + 188872561 + i])
               * 0.5;
          if ( v5 <= 0x7FE )
            v10 = (float)(*(float *)&dword_140404A6C[v6 + 188874609 + i] - *(float *)&dword_140404A6C[v6 + 188870511 + i])
                * 0.5;
          v11 = fsqrt((float)((float)(v9 * v9) + 1.0) + (float)(v10 * v10));
          if ( v11 == 0.0 )
          {
            v13 = 0.0;
            v12 = 0.0;
            v14 = 0.0;
          }
          else
          {
            v12 = 1.0 / v11;
            v13 = v9 * (float)(1.0 / v11);
            v14 = v10 * (float)(1.0 / v11);
          }
          ++i;
          v15 = v7 + dword_140404A6C[v2 + 284024933] * (dword_140404A6C[v2 + 284024934] - v4 - 1);
          ++v7;
        }
        ++v4;
        ++v5;
        v6 += 2049;
      }
      while ( v4 < (int)dword_140404A6C[v2 + 284024934] );
    }
    sub_14014D3E0(v1, 0);
    return unk_140404738(3553);
  }
  return result;
}

