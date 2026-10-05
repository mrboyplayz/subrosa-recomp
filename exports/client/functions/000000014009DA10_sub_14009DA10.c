/* Address: 0x14009da10 | Name: sub_14009DA10 | Size: 1118 bytes */
__int64 __fastcall sub_14009DA10(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // rcx

  v3 = 44LL * (int)a1;
  v4 = a2;
  dword_140404A6C[468765293] = 256;
  dword_140404A6C[468765294] = 64;
  dword_140404A6C[v3 + 284024933] = 256;
  dword_140404A6C[v3 + 284024934] = 64;
  dword_140404A6C[v3 + 284024935] = 1;
  dword_140404A6C[v3 + 284024936] = 6408;
  dword_140404A6C[v3 + 284024937] = 6408;
  dword_140404A6C[v3 + 284024943] = 0;
  dword_140404A6C[v3 + 284024938] = 10497;
  dword_140404A6C[v3 + 284024939] = 10497;
  dword_140404A6C[v3 + 284024940] = 9729;
  dword_140404A6C[v3 + 284024941] = 9987;
  free(*(void **)&dword_140404A6C[v3 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v3 + 284024945] = 0;
  sub_14014D3E0(a1, 0);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790153] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[v3 + 284024944], 0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  sub_14007A2C0(
    0,
    0,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    (float)(int)dword_140404A6C[468765293],
    (float)(int)dword_140404A6C[468765294],
    (float)(int)dword_140404A6C[468765294]);
  *(float *)&dword_140404A6C[438291414] = (float)(int)dword_140404A6C[468765293];
  *(float *)&dword_140404A6C[438291415] = (float)(int)dword_140404A6C[468765294];
  qword_140302FE8(0, 0, dword_140404A6C[468765293], dword_140404A6C[468765294]);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
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
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v5);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  v6 = dword_140404A6C[438291413];
  v7 = off_1402B2C00[v4];
  v8 = (__m128i)COERCE_UNSIGNED_INT((float)(int)dword_140404A6C[468765294]);
  dword_140404A6C[438291413] = dword_140404A6C[278520159];
  v9 = (__m128i)COERCE_UNSIGNED_INT((float)(int)dword_140404A6C[468765293]);
  *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 * 0.5;
  *(float *)v9.m128i_i32 = *(float *)v9.m128i_i32 * 0.5;
  sub_14006D930(
    v7,
    (unsigned int)_mm_cvtsi128_si32(v9),
    (unsigned int)_mm_cvtsi128_si32(v8),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x42500000u),
    5);
  unk_1404046F0(36160, 0);
  unk_140404050(3553, dword_140404A6C[v3 + 284024944]);
  unk_140404738(3553);
  dword_140404A6C[438291413] = v6;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v10) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v10);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1141899264;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v11);
  return (*(__int64 (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
}

