/* Address: 0x14018c340 | Name: sub_14018C340 | Size: 864 bytes */
__int64 __fastcall sub_14018C340(int a1, __int64 a2, int a3, int a4)
{
  __m128 v5; // xmm10
  __m128 v6; // xmm11
  float v7; // xmm12_4
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  int v11; // r9d
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  float v21; // [rsp+40h] [rbp-C8h]
  float v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  float v25; // [rsp+60h] [rbp-A8h]
  __int128 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-78h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-68h]
  int v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]

  v26 = xmmword_140278D30;
  dword_140404A6C[177167565] = 0;
  v27 = xmmword_140278D30;
  dword_140404A6C[177495247] = 0;
  v28 = 1065353216;
  dword_140404A6C[178519250] = 0;
  v20 = 0;
  v21 = 0.0;
  sub_14018C6A0((unsigned int)&v20, (unsigned int)&v26, a3, a4, 1082130432);
  v5 = (__m128)HIDWORD(v26);
  v6 = (__m128)(unsigned int)v27;
  v30 = v27;
  v5.m128_f32[0] = *((float *)&v26 + 3) * 4.0;
  v22[1] = 0.0;
  v6.m128_f32[0] = *(float *)&v27 * 4.0;
  v7 = *((float *)&v27 + 1) * 4.0;
  v20 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  v24 = v20;
  v29 = v26;
  v31 = v28;
  v21 = *((float *)&v27 + 1) * 4.0;
  LODWORD(v23) = 1064852291;
  v22[0] = 0.24253564;
  v25 = *((float *)&v27 + 1) * 4.0;
  sub_14007B2A0((__int64)&v26, v22);
  sub_14007B2A0((__int64)&v29, v22);
  sub_14018C6A0((unsigned int)&v20, (unsigned int)&v26, v8, v9, 1077936128);
  sub_14018C6A0((unsigned int)&v24, (unsigned int)&v29, v10, v11, 1077936128);
  v12 = (__m128)HIDWORD(v26);
  v12.m128_f32[0] = (float)(*((float *)&v26 + 3) * 3.0) + v5.m128_f32[0];
  v13 = (__m128)(unsigned int)v27;
  v30 = v27;
  v13.m128_f32[0] = (float)(*(float *)&v27 * 3.0) + v6.m128_f32[0];
  v21 = (float)(*((float *)&v27 + 1) * 3.0) + v7;
  v29 = v26;
  v20 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
  v24 = v20;
  v31 = v28;
  LODWORD(v23) = -1087044365;
  v22[0] = 0.70710677;
  v25 = v21;
  sub_14007B2A0((__int64)&v26, v22);
  sub_14007B2A0((__int64)&v29, v22);
  sub_14018C6A0((unsigned int)&v20, (unsigned int)&v26, v14, v15, 0x40000000);
  sub_14018C6A0((unsigned int)&v24, (unsigned int)&v29, v16, v17, 0x40000000);
  sub_1401449C0(a1, 1);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v32);
}

