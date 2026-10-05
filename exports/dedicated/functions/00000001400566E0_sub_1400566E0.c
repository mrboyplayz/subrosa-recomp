/* Address: 0x1400566e0 | Name: sub_1400566E0 | Size: 638 bytes */
__int64 __fastcall sub_1400566E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char *v4; // rsi
  char *v5; // rbx
  unsigned __int64 v6; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // xmm0_8
  char *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // xmm0_8
  __m128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 result; // rax
  int v28; // [rsp+20h] [rbp-20h] BYREF
  __int32 v29; // [rsp+24h] [rbp-1Ch]
  int v30; // [rsp+28h] [rbp-18h]
  unsigned __int32 v31; // [rsp+2Ch] [rbp-14h]

  v3 = 28664LL * (int)a1;
  v28 = 0;
  v4 = (char *)&unk_19094846C + v3;
  v5 = (char *)&unk_19094843C + v3;
  *(_QWORD *)v4 = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 1065353216;
  *(_QWORD *)v5 = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 1065353216;
  *(double *)&v6 = _libm_sse2_sincosf_(a1, a2, a3);
  v29 = v6;
  v31 = _mm_shuffle_ps((__m128)v6, (__m128)v6, 1).m128_u32[0];
  v30 = 0;
  sub_14009FD70((char *)&unk_19094843C + v3, (char *)&unk_19094843C + v3, &v28);
  *(double *)&v10 = _libm_sse2_sincosf_(v8, v7, v9);
  v28 = v10;
  v31 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 1).m128_u32[0];
  v29 = 0;
  sub_14009FD70((char *)&unk_19094843C + v3, (char *)&unk_19094843C + v3, &v28);
  sub_14009FD70((char *)&unk_19094846C + v3, (char *)&unk_19094846C + v3, &v28);
  *(double *)&v14 = _libm_sse2_sincosf_(v12, v11, v13);
  v28 = v14;
  v31 = _mm_shuffle_ps((__m128)v14, (__m128)v14, 1).m128_u32[0];
  sub_14009FD70((char *)&unk_19094843C + v3, (char *)&unk_19094843C + v3, &v28);
  v15 = (char *)&unk_19094844C + v3;
  *(_QWORD *)v15 = 0;
  *((_DWORD *)v15 + 2) = 0;
  *((_DWORD *)v15 + 3) = 1065353216;
  *(double *)&v19 = _libm_sse2_sincosf_(v17, v16, v18);
  v28 = v19;
  v31 = _mm_shuffle_ps((__m128)v19, (__m128)v19, 1).m128_u32[0];
  sub_14009FD70((char *)&unk_19094844C + v3, (char *)&unk_19094844C + v3, &v28);
  sub_14009FD70((char *)&unk_19094846C + v3, (char *)&unk_19094846C + v3, &v28);
  v20 = 0;
  v28 = 0;
  *(double *)v20.m128_u64 = _libm_sse2_sincosf_(v22, v21, v23);
  v29 = v20.m128_i32[0];
  v31 = _mm_shuffle_ps(v20, v20, 1).m128_u32[0];
  sub_14009FD70((char *)&unk_19094844C + v3, (char *)&unk_19094844C + v3, &v28);
  sub_14009FD70((char *)&unk_19094846C + v3, (char *)&unk_19094846C + v3, &v28);
  *(double *)v20.m128_u64 = _libm_sse2_sincosf_(v25, v24, v26);
  v29 = v20.m128_i32[0];
  v31 = _mm_shuffle_ps((__m128)v20.m128_u64[0], (__m128)v20.m128_u64[0], 1).m128_u32[0];
  result = sub_14009FD70((char *)&unk_19094844C + v3, (char *)&unk_19094844C + v3, &v28);
  *(_QWORD *)((char *)&unk_1909419A0 + v3 + 27324) = 0;
  *(_DWORD *)((char *)&unk_1909419A0 + v3 + 27332) = 0;
  *(_DWORD *)((char *)&unk_1909419A0 + v3 + 27336) = 1065353216;
  *(float *)v4 = -*(float *)v4;
  *((float *)v4 + 1) = -*((float *)v4 + 1);
  *((float *)v4 + 2) = -*((float *)v4 + 2);
  return result;
}

