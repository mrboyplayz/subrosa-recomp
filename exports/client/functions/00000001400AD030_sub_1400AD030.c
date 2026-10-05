/* Address: 0x1400ad030 | Name: sub_1400AD030 | Size: 638 bytes */
__int64 __fastcall sub_1400AD030(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int *v2; // r15
  unsigned int *v3; // rsi
  unsigned int *v4; // rbx
  unsigned __int64 v5; // xmm0_8
  __int64 v6; // rcx
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // rcx
  unsigned __int64 v9; // xmm0_8
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  __m128 v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int32 v18; // [rsp+24h] [rbp-1Ch]
  int v19; // [rsp+28h] [rbp-18h]
  unsigned __int32 v20; // [rsp+2Ch] [rbp-14h]

  v1 = 7166LL * (int)a1;
  v2 = &dword_140404A6C[280651293];
  v17 = 0;
  v3 = &dword_140404A6C[v1 + 280658128];
  v4 = &dword_140404A6C[v1 + 280658116];
  *(_QWORD *)v3 = 0;
  v3[2] = 0;
  v3[3] = 1065353216;
  *(_QWORD *)v4 = 0;
  v4[2] = 0;
  v4[3] = 1065353216;
  *(double *)&v5 = MEMORY[0x1401F8AC0](a1);
  v18 = v5;
  v20 = _mm_shuffle_ps((__m128)v5, (__m128)v5, 1).m128_u32[0];
  v19 = 0;
  sub_140105930(v4, v4, &v17);
  *(double *)&v7 = MEMORY[0x1401F8AC0](v6);
  v17 = v7;
  v20 = _mm_shuffle_ps((__m128)v7, (__m128)v7, 1).m128_u32[0];
  v18 = 0;
  sub_140105930(v4, v4, &v17);
  sub_140105930(v3, v3, &v17);
  *(double *)&v9 = MEMORY[0x1401F8AC0](v8);
  v17 = v9;
  v20 = _mm_shuffle_ps((__m128)v9, (__m128)v9, 1).m128_u32[0];
  sub_140105930(v4, v4, &v17);
  v10 = &dword_140404A6C[v1 + 280658120];
  *(_QWORD *)v10 = 0;
  v10[2] = 0;
  v10[3] = 1065353216;
  *(double *)&v12 = MEMORY[0x1401F8AC0](v11);
  v17 = v12;
  v20 = _mm_shuffle_ps((__m128)v12, (__m128)v12, 1).m128_u32[0];
  sub_140105930(&v2[v1 + 6827], &v2[v1 + 6827], &v17);
  sub_140105930(v3, v3, &v17);
  v13 = 0;
  v17 = 0;
  *(double *)v13.m128_u64 = MEMORY[0x1401F8AC0](v14);
  v18 = v13.m128_i32[0];
  v20 = _mm_shuffle_ps(v13, v13, 1).m128_u32[0];
  sub_140105930(&v2[v1 + 6827], &v2[v1 + 6827], &v17);
  sub_140105930(v3, v3, &v17);
  *(double *)v13.m128_u64 = MEMORY[0x1401F8AC0](v15);
  v18 = v13.m128_i32[0];
  v20 = _mm_shuffle_ps((__m128)v13.m128_u64[0], (__m128)v13.m128_u64[0], 1).m128_u32[0];
  result = sub_140105930(&v2[v1 + 6827], &v2[v1 + 6827], &v17);
  *(_QWORD *)&dword_140404A6C[v1 + 280658124] = 0;
  dword_140404A6C[v1 + 280658126] = 0;
  dword_140404A6C[v1 + 280658127] = 1065353216;
  *(float *)v3 = -*(float *)v3;
  *((float *)v3 + 1) = -*((float *)v3 + 1);
  *((float *)v3 + 2) = -*((float *)v3 + 2);
  return result;
}

