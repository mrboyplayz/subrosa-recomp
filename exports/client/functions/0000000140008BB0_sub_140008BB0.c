/* Address: 0x140008bb0 | Name: sub_140008BB0 | Size: 646 bytes */
float __fastcall sub_140008BB0(int a1, int a2, int a3, float a4, int a5)
{
  float v5; // xmm5_4
  int v6; // r9d
  __int64 v7; // rbp
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int *v12; // rdx
  unsigned int *v13; // r11
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm3_4

  v5 = 65536.0;
  v6 = 0;
  v7 = a1;
  dword_140404A6C[132384229] = 0;
  if ( a2 == -1 )
    return 65536.0;
  v10 = 396LL * a2;
  v11 = (int)dword_140404A6C[v10 + 225426186];
  if ( v11 <= 0 )
    return 65536.0;
  v12 = &dword_140404A6C[v10 + 225426187];
  v13 = &dword_140404A6C[132384230];
  do
  {
    v14 = *v12++;
    dword_140404A6C[v6 + 132384230] = v14;
    v6 = ++dword_140404A6C[132384229];
    --v11;
  }
  while ( v11 );
  if ( v6 <= 0 )
    return 65536.0;
  v15 = (unsigned int)v6;
  do
  {
    v16 = (int)*v13;
    if ( (_DWORD)v16 != (_DWORD)v7 )
    {
      v17 = dword_140404A6C[v10 + 225426061];
      v18 = 0;
      v19 = 0;
      if ( v17 > 0 )
      {
        v20 = 383 * v16;
        v21 = 1;
        do
        {
          if ( v19 == dword_140404A6C[383 * v7 + 132400996]
            && (v21 & a3) != 0
            && (v21 & dword_140404A6C[v20 + 132401010]) != 0 )
          {
            v18 = 1;
          }
          ++v19;
          v21 = __ROL4__(v21, 1);
        }
        while ( v19 < v17 );
        if ( v18 )
        {
          v22 = *(float *)&dword_140404A6C[v20 + 132401004];
          if ( a5 )
          {
            if ( a4 <= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v20 + 132400644]
                                  * *(float *)&dword_140404A6C[v20 + 132400644])
                          + (float)(*(float *)&dword_140404A6C[v20 + 132400645]
                                  * *(float *)&dword_140404A6C[v20 + 132400645]))
                  + (float)(*(float *)&dword_140404A6C[v20 + 132400646] * *(float *)&dword_140404A6C[v20 + 132400646]))
                - (float)((float)((float)(*(float *)&dword_140404A6C[v20 + 132401005] - a4) * 0.0083333338) + 0.016666668);
          }
          else
          {
            if ( a4 >= v22 )
              goto LABEL_22;
            v23 = fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v20 + 132400644]
                                  * *(float *)&dword_140404A6C[v20 + 132400644])
                          + (float)(*(float *)&dword_140404A6C[v20 + 132400645]
                                  * *(float *)&dword_140404A6C[v20 + 132400645]))
                  + (float)(*(float *)&dword_140404A6C[v20 + 132400646] * *(float *)&dword_140404A6C[v20 + 132400646]))
                + (float)((float)((float)(*(float *)&dword_140404A6C[v20 + 132401005] - a4) - 2.0) * 0.0083333338);
          }
          v5 = fminf(fmaxf(v23, 0.0), v5);
        }
      }
    }
LABEL_22:
    ++v13;
    --v15;
  }
  while ( v15 );
  return v5;
}

