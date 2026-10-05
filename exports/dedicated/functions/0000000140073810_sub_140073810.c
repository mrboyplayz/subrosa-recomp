/* Address: 0x140073810 | Name: sub_140073810 | Size: 770 bytes */
_UNKNOWN **__fastcall sub_140073810(int a1)
{
  _UNKNOWN **result; // rax
  int *v2; // rsi
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
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm9_4
  float v25; // [rsp+50h] [rbp-E8h] BYREF
  float v26; // [rsp+54h] [rbp-E4h]
  float v27; // [rsp+58h] [rbp-E0h]
  _DWORD v28[4]; // [rsp+60h] [rbp-D8h] BYREF
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = dword_190941BF4;
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
          v6 = *((float *)&unk_19025F0C0 + 1760 * v3 + 23);
          v7 = *((float *)&unk_19025F0C0 + 1760 * v3 + 24);
          v8 = v6 - *(v5 - 2);
          v9 = *((float *)&unk_19025F0C0 + 1760 * v3 + 25);
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
            v18 = *((int *)&unk_19025F0C0 + 1760 * v3 + 22);
            unk_16E18CA40 = v6 - (float)(v14 * 0.11);
            *(float *)&qword_16E18CA4C = -v14;
            *((float *)&qword_16E18CA4C + 1) = -v15;
            *(float *)&qword_16E18CA44 = v7 - (float)(v15 * 0.11);
            v19 = *(float *)&qword_16E18CA44 - *((float *)&unk_140249618 + 47 * v17 + 1);
            v20 = *(float *)&qword_16E18CA44 - *((float *)&unk_140249618 + 47 * v18 + 1);
            *(float *)&dword_16E18CA54 = -v16;
            v21 = unk_16E18CA40 - *((float *)&unk_140249618 + 47 * v17);
            v22 = unk_16E18CA40 - *((float *)&unk_140249618 + 47 * v18);
            v26 = v19;
            *((float *)&qword_16E18CA44 + 1) = v9 - (float)(v16 * 0.11);
            *(float *)&v28[1] = v20;
            v25 = v21;
            v23 = *((float *)&qword_16E18CA44 + 1) - *((float *)&unk_140249618 + 47 * v17 + 2);
            v24 = *((float *)&qword_16E18CA44 + 1) - *((float *)&unk_140249618 + 47 * v18 + 2);
            *(float *)v28 = v22;
            v27 = v23;
            *(float *)&v28[2] = v24;
            result = (_UNKNOWN **)sub_140002C40(
                                    v17,
                                    v18,
                                    &v25,
                                    v28,
                                    &qword_16E18CA4C,
                                    v13,
                                    1053609165,
                                    0.03125,
                                    1031798784);
          }
        }
        ++v4;
        v5 += 78;
      }
      while ( v4 < 16 );
    }
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)dword_1910413F4 );
  return result;
}

