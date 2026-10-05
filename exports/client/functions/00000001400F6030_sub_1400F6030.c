/* Address: 0x1400f6030 | Name: sub_1400F6030 | Size: 312 bytes */
void sub_1400F6030()
{
  __int64 v0; // rbp
  unsigned int *v1; // r10
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // edx
  float *v8; // r11
  __int64 v9; // rbx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4

  v0 = dword_140404A6C[284021989];
  v1 = &dword_140404A6C[71856292];
  v2 = 1;
  v3 = 256;
  do
  {
    if ( *(v1 - 39) )
    {
      v4 = (int)*v1;
      if ( (_DWORD)v4 != -1 )
      {
        v5 = *(v1 - 10);
        if ( v5 < (int)v0 && (int)v0 > 0 )
        {
          v6 = *(v1 - 9);
          v7 = 1;
          v8 = (float *)&dword_140404A6C[284021992];
          v9 = v0;
          do
          {
            if ( (v6 & v7) == 0 )
            {
              v10 = *(v8 - 1) - *(float *)&dword_140404A6C[7166 * v4 + 280651336];
              v11 = *(v8 - 2) - *(float *)&dword_140404A6C[7166 * v4 + 280651335];
              v12 = *v8 - *(float *)&dword_140404A6C[7166 * v4 + 280651337];
              if ( (float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) >= 16.0 )
              {
                v2 = 0;
              }
              else
              {
                v6 |= v7;
                *(v1 - 10) = ++v5;
              }
            }
            v7 = __ROL4__(v7, 1);
            v8 += 3;
            --v9;
          }
          while ( v9 );
          *(v1 - 9) = v6;
        }
      }
    }
    v1 += 3597;
    --v3;
  }
  while ( v3 );
  if ( !v2 )
    ++dword_140404A6C[283831450];
}

