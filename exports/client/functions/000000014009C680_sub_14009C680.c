/* Address: 0x14009c680 | Name: sub_14009C680 | Size: 1677 bytes */
__int64 __fastcall sub_14009C680(int a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  unsigned int *v9; // rbx
  unsigned int v10; // xmm1_4
  unsigned int v11; // xmm0_4
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  unsigned int v37; // r14d
  float v38; // xmm6_4
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // rsi
  int v44; // ebx
  int v45; // ecx
  unsigned int v46; // eax
  __m128i v47; // xmm1
  __m128i v48; // xmm2
  __int64 v49; // r8
  __int64 v50; // rcx
  _DWORD v52[20]; // [rsp+0h] [rbp-4F8h] BYREF
  __int16 v53[512]; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v54; // [rsp+450h] [rbp-A8h]

  v3 = 44LL * (int)a2;
  v4 = a1;
  dword_140404A6C[468765293] = 512;
  dword_140404A6C[468765294] = 512;
  dword_140404A6C[v3 + 284024933] = 512;
  dword_140404A6C[v3 + 284024934] = 512;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9729;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a2, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  sub_14007A2C0(0, 0, 512, 512, 512.0, 512.0, 512.0);
  dword_140404A6C[438291414] = 1140850688;
  dword_140404A6C[438291415] = 1140850688;
  qword_140302FE8(0, 0, 512, 512);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, 1);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(0x4000);
  unk_140404050(3553, dword_140404A6C[451221642]);
  v8 = 0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v9 = &dword_140404A6C[159842359];
  do
  {
    v10 = *v9;
    dword_140404A6C[456807033] = *(v9 - 1);
    v11 = v9[1];
    dword_140404A6C[456807034] = v10;
    dword_140404A6C[456807035] = v11;
    dword_140404A6C[456807036] = 0;
    sub_14007D420(v6, v5, v7);
    sub_14007D420(v13, v12, v14);
    sub_14007D420(v16, v15, v17);
    sub_14007D420(v19, v18, v20);
    ++v8;
    v9 += 6;
  }
  while ( v8 < (int)dword_140404A6C[159842357] );
  sub_14006E0D0(v6, v5, v7);
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(v22, v21, v23);
  sub_14007D420(v25, v24, v26);
  sub_14007D420(v28, v27, v29);
  sub_14007D420(v31, v30, v32);
  sub_14006E0D0(v34, v33, v35);
  LOBYTE(v36) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v36);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  v37 = dword_140404A6C[438291413];
  v38 = 16.0;
  dword_140404A6C[438291413] = 3;
  if ( (_DWORD)v4 != -1 )
  {
    unk_140404050(3553, dword_140404A6C[72787862]);
    v41 = 23;
    v42 = 1760 * v4;
    v43 = 110 * v4;
    v44 = dword_140404A6C[v42 + 278846112];
    do
    {
      sub_140187C70(
        (unsigned int)&dword_140404A6C[16 * (v43 + v44) + 278846114],
        (unsigned int)&dword_140404A6C[16 * (v43 + v44) + 278846626],
        v39,
        v40,
        1098907648);
      v38 = v38 + 16.0;
      v44 = ((_BYTE)v44 + 1) & 0x1F;
      --v41;
    }
    while ( v41 );
    v45 = dword_140404A6C[v42 + 278846113];
    if ( v45 != -1 )
    {
      v52[16] = 1065353216;
      v46 = (v45 >> 6) - dword_140404A6C[v42 + 278846112];
      v52[14] = 1065353216;
      v52[12] = 1065353216;
      v47 = (__m128i)COERCE_UNSIGNED_INT((float)(v45 & 0x3F));
      v53[0] = 127;
      v48 = (__m128i)COERCE_UNSIGNED_INT((float)(v46 & 0x1F));
      v52[10] = 1065353216;
      *(float *)v47.m128i_i32 = (float)(*(float *)v47.m128i_i32 + 1.0) * 8.0;
      *(float *)v48.m128i_i32 = (float)(*(float *)v48.m128i_i32 + 1.0) * 16.0;
      sub_14006D930(
        v53,
        (unsigned int)_mm_cvtsi128_si32(v47),
        (unsigned int)_mm_cvtsi128_si32(v48),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        64);
    }
  }
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v37;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v49) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v49);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v50) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v50);
  (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  return MEMORY[0x1401F8B20]((unsigned __int64)v52 ^ v54);
}

