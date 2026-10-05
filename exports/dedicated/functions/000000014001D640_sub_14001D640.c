/* Address: 0x14001d640 | Name: sub_14001D640 | Size: 795 bytes */
__int64 sub_14001D640()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  float v3; // xmm7_4
  int v4; // xmm0_4
  unsigned int v5; // ebx
  int v6; // xmm3_4
  int v7; // xmm5_4
  int v8; // xmm2_4
  int v9; // xmm4_4
  int v10; // xmm6_4
  float v11; // xmm13_4
  float v12; // xmm10_4
  float v13; // xmm14_4
  __m128 v14; // xmm0
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  __int64 result; // rax
  int v22; // [rsp+28h] [rbp-79h] BYREF
  int v23; // [rsp+2Ch] [rbp-75h]
  int v24; // [rsp+30h] [rbp-71h]
  int v25; // [rsp+34h] [rbp-6Dh]
  int v26; // [rsp+38h] [rbp-69h]
  int v27; // [rsp+3Ch] [rbp-65h]
  float v28; // [rsp+40h] [rbp-61h]
  float v29; // [rsp+44h] [rbp-5Dh]
  float v30; // [rsp+48h] [rbp-59h]
  float v31; // [rsp+4Ch] [rbp-55h]
  __int128 v32; // [rsp+50h] [rbp-51h]

  v23 = 1103134720;
  v24 = 1150550016;
  v26 = 1103134720;
  v27 = 1150550016;
  v29 = 24.0625;
  *(_QWORD *)&v32 = 0x449C000041C08000LL;
  v22 = 1161756672;
  v25 = 1161887744;
  v28 = 3088.0;
  v30 = 1248.0;
  v31 = 3056.0;
  sub_1400444C0(1, &v22);
  v3 = 0.0;
  v4 = LODWORD(v31);
  v5 = 0;
  v6 = LODWORD(v29);
  v7 = DWORD1(v32);
  v8 = LODWORD(v28);
  v9 = v32;
  v10 = LODWORD(v30);
  v11 = (float)(v31 + v28) * 0.5;
  v12 = (float)(v29 + *(float *)&v32) * 0.5;
  v13 = (float)(*((float *)&v32 + 1) + v30) * 0.5;
  while ( 1 )
  {
    if ( v5 <= 4 )
      goto LABEL_7;
    if ( v5 <= 6 )
    {
      v3 = v3 + -0.78539819;
      goto LABEL_8;
    }
    if ( v5 - 10 <= 3 || v5 == 17 )
LABEL_7:
      v3 = v3 + 0.78539819;
LABEL_8:
    v22 = v4;
    v14 = 0;
    v23 = v9;
    v24 = v7;
    v25 = v8;
    v26 = v6;
    v27 = v10;
    *(double *)v14.m128_u64 = _libm_sse2_sincosf_(v1, v0, v2);
    v13 = v13 + (float)(_mm_shuffle_ps(v14, v14, 1).m128_f32[0] * 64.0);
    v11 = v11 + (float)(v14.m128_f32[0] * 64.0);
    v14.m128_f32[0] = cosf(v3);
    v29 = v12;
    v15 = v14.m128_f32[0] * 16.0;
    v16 = v12;
    v28 = (float)(v14.m128_f32[0] * 16.0) + v11;
    *(double *)v14.m128_u64 = sin(v3);
    v17 = v12;
    *(float *)&v32 = v12;
    v18 = -*(double *)v14.m128_u64;
    v31 = v11 - v15;
    v19 = v12;
    v20 = v18 * 16.0;
    v30 = v20 + v13;
    *((float *)&v32 + 1) = v13 - v20;
    if ( v5 < 4 )
    {
      v17 = v12 + 16.0;
      *(float *)&v32 = v12 + 16.0;
      v19 = v12 + 16.0;
    }
    if ( v5 == 5 )
    {
      v29 = v12 + 16.0;
      v16 = v12 + 16.0;
    }
    if ( v5 - 10 <= 2 )
    {
      v17 = v19 + 16.0;
      *(float *)&v32 = v19 + 16.0;
    }
    if ( v5 == 17 )
    {
      v17 = v17 + 8.0;
      *(float *)&v32 = v17;
    }
    if ( v5 == 19 )
    {
      v29 = v16 + 4.0;
      *(float *)&v32 = v17 + 4.0;
    }
    result = sub_1400444C0(1, &v22);
    if ( (int)++v5 >= 21 )
      return result;
    v7 = DWORD1(v32);
    v9 = v32;
    v4 = LODWORD(v31);
    v10 = LODWORD(v30);
    v6 = LODWORD(v29);
    v8 = LODWORD(v28);
  }
}

