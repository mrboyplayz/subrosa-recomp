/* Address: 0x1400817c0 | Name: sub_1400817C0 | Size: 926 bytes */
__int64 sub_1400817C0()
{
  __int64 v0; // r8
  signed int v1; // eax
  double v2; // xmm6_8
  float v3; // xmm9_4
  float v4; // xmm8_4
  signed int v5; // edi
  unsigned int *v6; // rbx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  signed int v10; // r15d
  int *v11; // r12
  signed int v12; // r13d
  int v13; // ecx
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  double v17; // xmm0_8
  __int64 v18; // r8
  signed int v20; // [rsp+120h] [rbp+8h]
  int v21; // [rsp+128h] [rbp+10h]

  unk_140404050(3553, dword_140404A6C[451221642]);
  v1 = dword_140404A6C[315570519];
  *(_QWORD *)&v2 = 1115684864;
  v3 = 384.0;
  v4 = 512.0 / (float)(int)dword_140404A6C[315570519];
  if ( (int)dword_140404A6C[315570520] > 0 )
    v3 = 384.0 / (float)(int)dword_140404A6C[315570520];
  v5 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[315570519] > 0 )
  {
    v6 = &dword_140404A6C[315570524];
    v7 = 57;
    v8 = 0;
    v9 = 0;
    v21 = 0;
    do
    {
      v10 = 0;
      if ( (int)*(v6 - 1) > 0 )
      {
        v11 = (int *)v6;
        v12 = v5;
        do
        {
          v13 = 15731 * (v5 ^ (v5 << 13)) * (v5 ^ (v5 << 13)) + 789221;
          v14 = 15731 * (((v9 + v10) << 13) ^ (v9 + v10)) * (((v9 + v10) << 13) ^ (v9 + v10)) + 789221;
          v15 = (float)((v14 * v14 - 771171059) & 0x7FFFFFFF);
          v16 = (v12 ^ (v12 << 13)) * (v12 ^ (v12 << 13));
          sub_14006CFF0(
            v2,
            COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(512.0 - (float)((float)*v11 * v3))),
            v0,
            (float)v11[1] * v3,
            8,
            COERCE_INT((float)(0.5 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 4.6566129e-10)) + 0.5),
            COERCE_INT((float)(0.5 - (float)(v15 * 4.6566129e-10)) + 0.5),
            COERCE_INT(
              (float)(0.5
                    - (float)((float)(((15731 * v16 + 789221) * (15731 * v16 + 789221) - 771171059) & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 0.5),
            1065353216);
          ++v10;
          v5 += v8 + 57;
          v9 += v8;
          v12 += v7;
          v11 += 3;
        }
        while ( v10 < (int)*(v6 - 1) );
        v1 = dword_140404A6C[315570519];
        v5 = v20;
        v9 = v21;
      }
      ++v5;
      *(float *)&v2 = *(float *)&v2 + v4;
      v9 += 57;
      v20 = v5;
      v7 += 1684013;
      v21 = v9;
      v8 += 54323;
      v6 += 3074;
    }
    while ( v5 < v1 );
  }
  sub_14006CFF0(COERCE_DOUBLE(1115684864), COERCE_DOUBLE(1140850688), v0, 384.0, 8, 1065353216, 0, 0, 1065353216);
  *(_QWORD *)&v17 = COERCE_UNSIGNED_INT((float)(int)dword_140404A6C[315570519]);
  *(float *)&v17 = (float)(*(float *)&v17 * v4) + 64.0;
  return sub_14006CFF0(v17, COERCE_DOUBLE(1140850688), v18, 384.0, 8, 1065353216, 0, 0, 1065353216);
}

