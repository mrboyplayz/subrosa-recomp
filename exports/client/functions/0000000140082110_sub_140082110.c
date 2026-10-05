/* Address: 0x140082110 | Name: sub_140082110 | Size: 771 bytes */
__int64 sub_140082110()
{
  __m128 v0; // xmm7
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128d v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __m128 v18; // xmm7
  __m128d v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8

  unk_140404050(3553, dword_140404A6C[451221642]);
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v0 = 0;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402792F0;
  MEMORY[0x1401F8A50](v1);
  v5 = 64;
  v6 = 64;
  do
  {
    sub_14007D420(v3, v2, v4);
    sub_14007D420(v8, v7, v9);
    v10 = _mm_cvtps_pd(v0);
    v10.m128d_f64[0] = v10.m128d_f64[0] + 0.0981747704246875;
    v0 = _mm_cvtpd_ps(v10);
    MEMORY[0x1401F8A50](v11);
    sub_14007D420(v13, v12, v14);
    --v6;
  }
  while ( v6 );
  sub_14006E0D0(v3, v2, v4);
  (*(void (**)(void))&dword_140404A6C[18215065])();
  v18 = 0;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279490;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    sub_14007D420(v16, v15, v17);
    v19 = _mm_cvtps_pd(v18);
    v19.m128d_f64[0] = v19.m128d_f64[0] + 0.0981747704246875;
    v18 = _mm_cvtpd_ps(v19);
    MEMORY[0x1401F8A50](v20);
    sub_14007D420(v22, v21, v23);
    --v5;
  }
  while ( v5 );
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402796B0;
  sub_14007D420(v16, v15, v17);
  MEMORY[0x1401F8A50](v24);
  sub_14007D420(v26, v25, v27);
  sub_14006E0D0(v29, v28, v30);
  return (*(__int64 (**)(void))&dword_140404A6C[18215065])();
}

