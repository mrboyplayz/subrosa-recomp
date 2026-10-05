/* Address: 0x140090a10 | Name: sub_140090A10 | Size: 397 bytes */
__int64 __fastcall sub_140090A10(int a1, int a2)
{
  int v3; // r12d
  __int64 v4; // r15
  int v5; // esi
  int v6; // ecx
  int *v7; // rbx
  int v8; // edi
  int i; // ebp
  float v10; // xmm0_4
  int *v11; // rbx
  int v12; // eax

  v3 = a2;
  v4 = 3LL * a1;
  v5 = dword_1961996A0[6 * a1];
  if ( v5 > 0 )
    dword_1961996A4[6 * a1] = (float)((float)a2 / (float)v5) + dword_1961996A4[6 * a1];
  v6 = dword_191541494[5873 * a1];
  if ( v6 > 0 )
    v3 = a2 / v6;
  v7 = dword_16D67D624;
  v8 = 0;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v7 - 33) && *v7 == a1 )
    {
      *(v7 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)v7[2] / (float)v5), 0.0), 1.0) * (float)v3);
      sub_14003A560(i);
    }
    v7 += 3597;
  }
  v10 = dword_1961996A4[2 * v4];
  if ( v10 > 500.0 )
  {
    v11 = dword_16D67D62C;
    dword_1961996A4[2 * v4] = v10 * 0.2;
    do
    {
      if ( *(v11 - 35) && *(v11 - 2) == a1 )
      {
        v5 += 4 * *v11;
        v12 = 5 * *v11;
        dword_1961996A0[2 * v4] = v5;
        *v11 = v12;
        sub_14003A560(v8);
      }
      ++v8;
      v11 += 3597;
    }
    while ( v8 < 256 );
  }
  return sub_14003A6A0();
}

