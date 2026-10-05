/* Address: 0x1400b85c0 | Name: sub_1400B85C0 | Size: 603 bytes */
void sub_1400B85C0()
{
  int v0; // r10d
  float v1; // xmm3_4
  int v2; // edx
  int v3; // ebx
  int *v4; // r8
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  int *v9; // r11
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm0_4
  bool v14; // zf
  float v15; // xmm0_4

  if ( dword_16DC409AC <= 0 )
  {
    v0 = 0;
    v1 = 65536.0;
    v2 = 0;
    v3 = 0;
    if ( dword_16DA009A0[0] > 0 )
    {
      v4 = dword_16DA009AC;
      do
      {
        if ( v4[10] == 1 )
        {
          v5 = *(float *)&dword_16DA009A0[18 * dword_16DC409A8 + 1] - *((float *)v4 - 2);
          v6 = *(float *)&dword_16DA009A0[18 * dword_16DC409A8 + 2];
          v7 = *(float *)&dword_16DA009A0[18 * dword_16DC409A8 + 3];
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
      while ( v2 < dword_16DA009A0[0] );
    }
    if ( dword_16DA009A0[18 * v3 + 13] == 1 )
    {
      dword_16DA009A0[18 * v3 + 13] = 2;
      if ( dword_16DA009A0[18 * v3 + 4] > 0 )
      {
        v9 = &dword_16DA009B4[18 * v3];
        v10 = 1;
        do
        {
          v11 = *v9;
          v12 = dword_16DA009A0[18 * v11 + 13];
          if ( v12 != 2 )
          {
            if ( v12 )
            {
              if ( (float)(*(float *)&dword_16DA009A0[18 * v3 + 14] + 1.0) < *(float *)&dword_16DA009A0[18 * v11 + 14] )
              {
                v14 = dword_16DA009A0[18 * v11 + 18] == 0;
                dword_16DA009A0[18 * v11 + 15] = v3;
                v15 = *(float *)&dword_16DA009A0[18 * v3 + 14] + 1.0;
                *(float *)&dword_16DA009A0[18 * v11 + 14] = v15;
                if ( !v14 )
                  *(float *)&dword_16DA009A0[18 * v11 + 14] = v15 + 256.0;
                if ( (_DWORD)v11 == dword_16DC409A8 )
                {
                  dword_16DC409B0[0] = v11;
                  for ( dword_16DC409AC = 1; (_DWORD)v11 != dword_16DC409A4; ++dword_16DC409AC )
                  {
                    LODWORD(v11) = dword_16DA009A0[18 * (int)v11 + 15];
                    dword_16DA009A0[v10 + 589828] = v11;
                    v10 = dword_16DC409AC + 1;
                  }
                  return;
                }
              }
            }
            else
            {
              dword_16DA009A0[18 * v11 + 13] = 1;
              dword_16DA009A0[18 * v11 + 15] = v3;
              v13 = *(float *)&dword_16DA009A0[18 * v3 + 14] + 1.0;
              *(float *)&dword_16DA009A0[18 * v11 + 14] = v13;
              if ( dword_16DA009A0[18 * v11 + 18] )
                *(float *)&dword_16DA009A0[18 * v11 + 14] = v13 + 256.0;
              if ( (_DWORD)v11 == dword_16DC409A8 )
              {
                dword_16DC409B0[0] = v11;
                for ( dword_16DC409AC = 1; (_DWORD)v11 != dword_16DC409A4; ++dword_16DC409AC )
                {
                  LODWORD(v11) = dword_16DA009A0[18 * (int)v11 + 15];
                  dword_16DA009A0[v10 + 589828] = v11;
                  v10 = dword_16DC409AC + 1;
                }
                return;
              }
            }
          }
          ++v0;
          ++v9;
        }
        while ( v0 < dword_16DA009A0[18 * v3 + 4] );
      }
    }
  }
}

