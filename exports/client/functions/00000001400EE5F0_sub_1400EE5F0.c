/* Address: 0x1400ee5f0 | Name: sub_1400EE5F0 | Size: 397 bytes */
__int64 __fastcall sub_1400EE5F0(int a1, int a2)
{
  int v3; // r12d
  __int64 v4; // r15
  int v5; // esi
  int v6; // ecx
  unsigned int *v7; // rbx
  int v8; // edi
  int i; // ebp
  float v10; // xmm0_4
  unsigned int *v11; // rbx
  int v12; // eax

  v3 = a2;
  v4 = 3LL * a1;
  v5 = dword_140404A6C[6 * a1 + 335047061];
  if ( v5 > 0 )
    *(float *)&dword_140404A6C[6 * a1 + 335047062] = (float)((float)a2 / (float)v5)
                                                   + *(float *)&dword_140404A6C[6 * a1 + 335047062];
  v6 = dword_140404A6C[5873 * a1 + 283831506];
  if ( v6 > 0 )
    v3 = a2 / v6;
  v7 = &dword_140404A6C[71856286];
  v8 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v7 - 33) && *v7 == a1 )
    {
      *(v7 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)v7[2] / (float)v5), 0.0), 1.0) * (float)v3);
      sub_140051F50((unsigned int)i);
    }
    v7 += 3597;
  }
  v10 = *(float *)&dword_140404A6C[2 * v4 + 335047062];
  if ( v10 > 500.0 )
  {
    v11 = &dword_140404A6C[71856288];
    *(float *)&dword_140404A6C[2 * v4 + 335047062] = v10 * 0.2;
    do
    {
      if ( *(v11 - 35) && *(v11 - 2) == a1 )
      {
        v5 += 4 * *v11;
        v12 = 5 * *v11;
        dword_140404A6C[2 * v4 + 335047061] = v5;
        *v11 = v12;
        sub_140051F50((unsigned int)v8);
      }
      ++v8;
      v11 += 3597;
    }
    while ( v8 < 256 );
  }
  return sub_140052090();
}

