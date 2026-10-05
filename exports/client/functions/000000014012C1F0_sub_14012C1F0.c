/* Address: 0x14012c1f0 | Name: sub_14012C1F0 | Size: 603 bytes */
void sub_14012C1F0()
{
  signed int v0; // r10d
  float v1; // xmm3_4
  int v2; // edx
  unsigned int v3; // ebx
  unsigned int *v4; // r8
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  unsigned int *v9; // r11
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  float v13; // xmm0_4
  bool v14; // zf
  float v15; // xmm0_4

  if ( (int)dword_140404A6C[133383688] <= 0 )
  {
    v0 = 0;
    v1 = 65536.0;
    v2 = 0;
    v3 = 0;
    if ( (int)dword_140404A6C[132793861] > 0 )
    {
      v4 = &dword_140404A6C[132793864];
      do
      {
        if ( v4[10] == 1 )
        {
          v5 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793862] - *((float *)v4 - 2);
          v6 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793863];
          v7 = *(float *)&dword_140404A6C[18 * dword_140404A6C[133383687] + 132793864];
          v8 = (float)(fsqrt(
                         (float)((float)((float)(v6 - *((float *)v4 - 1)) * (float)(v6 - *((float *)v4 - 1)))
                               + (float)(v5 * v5))
                       + (float)((float)(v7 - *(float *)v4) * (float)(v7 - *(float *)v4)))
                     * 0.0078125)
             + *((float *)v4 + 11);
          if ( v1 > v8 )
          {
            v3 = v2;
            v1 = v8;
          }
        }
        ++v2;
        v4 += 18;
      }
      while ( v2 < (int)dword_140404A6C[132793861] );
    }
    if ( dword_140404A6C[18 * v3 + 132793874] == 1 )
    {
      dword_140404A6C[18 * v3 + 132793874] = 2;
      if ( (int)dword_140404A6C[18 * v3 + 132793865] > 0 )
      {
        v9 = &dword_140404A6C[18 * v3 + 132793866];
        v10 = 1;
        do
        {
          v11 = (int)*v9;
          v12 = dword_140404A6C[18 * v11 + 132793874];
          if ( v12 != 2 )
          {
            if ( v12 )
            {
              if ( (float)(*(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0) < *(float *)&dword_140404A6C[18 * v11 + 132793875] )
              {
                v14 = dword_140404A6C[18 * v11 + 132793879] == 0;
                dword_140404A6C[18 * v11 + 132793876] = v3;
                v15 = *(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0;
                *(float *)&dword_140404A6C[18 * v11 + 132793875] = v15;
                if ( !v14 )
                  *(float *)&dword_140404A6C[18 * v11 + 132793875] = v15 + 256.0;
                if ( (_DWORD)v11 == dword_140404A6C[133383687] )
                {
                  dword_140404A6C[133383689] = v11;
                  for ( dword_140404A6C[133383688] = 1;
                        (_DWORD)v11 != dword_140404A6C[133383686];
                        ++dword_140404A6C[133383688] )
                  {
                    LODWORD(v11) = dword_140404A6C[18 * (int)v11 + 132793876];
                    dword_140404A6C[v10 + 133383689] = v11;
                    v10 = dword_140404A6C[133383688] + 1;
                  }
                  return;
                }
              }
            }
            else
            {
              dword_140404A6C[18 * v11 + 132793874] = 1;
              dword_140404A6C[18 * v11 + 132793876] = v3;
              v13 = *(float *)&dword_140404A6C[18 * v3 + 132793875] + 1.0;
              *(float *)&dword_140404A6C[18 * v11 + 132793875] = v13;
              if ( dword_140404A6C[18 * v11 + 132793879] )
                *(float *)&dword_140404A6C[18 * v11 + 132793875] = v13 + 256.0;
              if ( (_DWORD)v11 == dword_140404A6C[133383687] )
              {
                dword_140404A6C[133383689] = v11;
                for ( dword_140404A6C[133383688] = 1;
                      (_DWORD)v11 != dword_140404A6C[133383686];
                      ++dword_140404A6C[133383688] )
                {
                  LODWORD(v11) = dword_140404A6C[18 * (int)v11 + 132793876];
                  dword_140404A6C[v10 + 133383689] = v11;
                  v10 = dword_140404A6C[133383688] + 1;
                }
                return;
              }
            }
          }
          ++v0;
          ++v9;
        }
        while ( v0 < (int)dword_140404A6C[18 * v3 + 132793865] );
      }
    }
  }
}

