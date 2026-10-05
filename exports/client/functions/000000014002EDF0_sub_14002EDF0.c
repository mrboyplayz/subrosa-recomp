/* Address: 0x14002edf0 | Name: sub_14002EDF0 | Size: 497 bytes */
void __fastcall sub_14002EDF0(int a1)
{
  __int64 v1; // rdi
  float v2; // xmm8_4
  double v3; // xmm0_8
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm8_4
  float v8; // xmm8_4
  float v9; // xmm1_4
  unsigned int v10; // xmm8_4
  float v11; // xmm2_4
  float v12; // xmm2_4
  unsigned int v13; // xmm0_4

  v1 = 7LL * a1;
  v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_14023F704()));
  v3 = sub_14023EDE4();
  v4 = *(float *)&dword_140404A6C[v1 + 284024384];
  v5 = v3;
  v6 = (float)(1.0 - *(float *)&dword_140404A6C[v1 + 284024386]) * 0.04908738521234375;
  if ( (float)(v4 - v2) >= 3.14159265359 )
    v2 = v2 + 6.2831855;
  if ( (float)(v2 - v4) >= 3.14159265359 )
    v4 = v4 + 6.2831855;
  v7 = v2 - v4;
  if ( v7 >= (float)-v6 )
  {
    if ( v7 <= v6 )
      v8 = 0.0;
    else
      v8 = v7 - v6;
  }
  else
  {
    v8 = v7 + v6;
  }
  v9 = *(float *)&dword_140404A6C[v1 + 284024385];
  *(float *)&v10 = (float)(v8 * 0.125) + *(float *)&dword_140404A6C[v1 + 284024384];
  dword_140404A6C[v1 + 284024384] = v10;
  if ( (float)(v9 - v5) >= 3.14159265359 )
    v5 = v5 + 6.2831855;
  if ( (float)(v5 - v9) >= 3.14159265359 )
    v9 = v9 + 6.2831855;
  v11 = v5 - v9;
  if ( v11 >= (float)-v6 )
  {
    if ( v11 <= v6 )
      v12 = 0.0;
    else
      v12 = v11 - v6;
  }
  else
  {
    v12 = v11 + v6;
  }
  *(float *)&dword_140404A6C[v1 + 284024385] = (float)(v12 * 0.125) + *(float *)&dword_140404A6C[v1 + 284024385];
  if ( *(float *)&v10 < -3.14159265359 )
  {
    *(float *)&v13 = *(float *)&v10 + 6.28318530718;
    dword_140404A6C[v1 + 284024384] = v13;
    v10 = v13;
  }
  if ( *(float *)&v10 > 3.14159265359 )
    *(float *)&dword_140404A6C[v1 + 284024384] = *(float *)&v10 - 6.28318530718;
}

