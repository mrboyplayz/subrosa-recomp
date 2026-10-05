/* Address: 0x1400ca430 | Name: sub_1400CA430 | Size: 770 bytes */
_UNKNOWN **__fastcall sub_1400CA430(int a1)
{
  _UNKNOWN **result; // rax
  unsigned int *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  float *v5; // rdi
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  __int64 v17; // r10
  __int64 v18; // rdx
  float v19; // xmm1_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  unsigned int v24; // xmm9_4
  float v25; // [rsp+50h] [rbp-E8h] BYREF
  float v26; // [rsp+54h] [rbp-E4h]
  float v27; // [rsp+58h] [rbp-E0h]
  unsigned int v28[4]; // [rsp+60h] [rbp-D8h] BYREF
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = &dword_140404A6C[280651442];
  v3 = a1;
  do
  {
    if ( *(v2 - 139) )
    {
      v4 = 0;
      v5 = (float *)v2;
      do
      {
        if ( v4 == 7 || (unsigned __int64)v4 <= 4 || (unsigned __int64)v4 >= 0xA )
        {
          v6 = *(float *)&dword_140404A6C[1760 * v3 + 278845916];
          v7 = *(float *)&dword_140404A6C[1760 * v3 + 278845917];
          v8 = v6 - *(v5 - 2);
          v9 = *(float *)&dword_140404A6C[1760 * v3 + 278845918];
          v10 = v7 - *(v5 - 1);
          v11 = v9 - *v5;
          v25 = v8;
          v26 = v10;
          v27 = v11;
          v12 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v11 * v11));
          if ( v12 < 0.36000001 )
          {
            v13 = 0.36000001 - v12;
            if ( v12 == 0.0 )
            {
              v14 = 0.0;
              v15 = 0.0;
              v16 = 0.0;
            }
            else
            {
              v14 = v8 / v12;
              v15 = v10 / v12;
              v16 = v11 / v12;
            }
            v17 = *((int *)v5 - 3);
            v18 = (int)dword_140404A6C[1760 * v3 + 278845915];
            *(float *)&dword_140404A6C[73006981] = v6 - (float)(v14 * 0.11);
            *(float *)&dword_140404A6C[73006984] = -v14;
            *(float *)&dword_140404A6C[73006985] = -v15;
            *(float *)&dword_140404A6C[73006982] = v7 - (float)(v15 * 0.11);
            v19 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v17 + 18215716];
            *(float *)&v20 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v18 + 18215716];
            *(float *)&dword_140404A6C[73006986] = -v16;
            *(float *)&v21 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v17 + 18215715];
            v22 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v18 + 18215715];
            v26 = v19;
            *(float *)&dword_140404A6C[73006983] = v9 - (float)(v16 * 0.11);
            v28[1] = v20;
            v25 = *(float *)&v21;
            v23 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v17 + 18215717];
            *(float *)&v24 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v18 + 18215717];
            *(float *)v28 = v22;
            v27 = v23;
            v28[2] = v24;
            result = (_UNKNOWN **)sub_1400052C0(
                                    v17,
                                    v18,
                                    (unsigned int *)&v25,
                                    v28,
                                    &dword_140404A6C[73006984],
                                    v13,
                                    0x3ECCCCCDu,
                                    0.03125,
                                    0x3D800000u);
          }
        }
        ++v4;
        v5 += 78;
      }
      while ( v4 < 16 );
    }
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[282485938] );
  return result;
}

