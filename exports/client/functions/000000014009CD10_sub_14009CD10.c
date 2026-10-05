/* Address: 0x14009cd10 | Name: sub_14009CD10 | Size: 1273 bytes */
__int64 __fastcall sub_14009CD10(int a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // r15d
  int v7; // r14d
  __m128i v8; // xmm6
  __int64 v9; // rbp
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rbx
  char *v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  char v16; // cl
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD v20[20]; // [rsp+0h] [rbp-4D8h] BYREF
  unsigned __int8 v21[1024]; // [rsp+50h] [rbp-488h] BYREF
  __int64 v22; // [rsp+450h] [rbp-88h]

  v3 = 44LL * (int)a2;
  v4 = a1;
  dword_140404A6C[468765293] = 1024;
  dword_140404A6C[468765294] = 1024;
  dword_140404A6C[v3 + 284024933] = 1024;
  dword_140404A6C[v3 + 284024934] = 1024;
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
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3553);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215109])(770);
  sub_14007A2C0(0, 0, 1024, 1024, 1024.0, 1024.0, 1024.0);
  dword_140404A6C[438291414] = 1149239296;
  dword_140404A6C[438291415] = 1149239296;
  qword_140302FE8(0, 0, 1024, 1024);
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
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (__fastcall **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3553);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(3042);
  (*(void (**)(void))&dword_140404A6C[18215089])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215087])(0x4000);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  v6 = dword_140404A6C[438291413];
  v7 = 0;
  v8 = (__m128i)0x41800000u;
  v9 = 0;
  v10 = 1760 * v4;
  dword_140404A6C[438291413] = 3;
  do
  {
    if ( !*((_BYTE *)&dword_140404A6C[v10 + 278846111] + v9) )
      break;
    v11 = 0;
    v12 = 0;
    v13 = (char *)&dword_140404A6C[278846111] + v9 + v10 * 4 - (_QWORD)v21;
    do
    {
      v14 = v21[(_QWORD)&v13[v12]];
      if ( !(_BYTE)v14 )
        break;
      if ( (_BYTE)v14 == 10 )
        break;
      v21[v12] = v14;
      ++v11;
      ++v12;
    }
    while ( v12 < 1024 );
    if ( (unsigned __int64)v12 >= 0x400 )
      sub_1401F8694(v14, v13, v5);
    v20[16] = 1065353216;
    v20[14] = 0;
    v20[12] = 0;
    v20[10] = 0;
    v21[v12] = 0;
    sub_14006D930(
      v21,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41000000u),
      (unsigned int)_mm_cvtsi128_si32(v8),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
      64);
    v9 += v12;
    v15 = v11 + v7;
    v16 = *((_BYTE *)&dword_140404A6C[v10 + 278846111] + v9);
    if ( v16 )
    {
      *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 + 32.0;
      if ( v16 == 10 )
        ++v9;
    }
    v7 = v15 + 1;
    if ( v16 != 10 )
      v7 = v15;
  }
  while ( v9 < 1024 );
  unk_1404046F0(36160, 0);
  dword_140404A6C[438291413] = v6;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3042);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v17);
  dword_140404A6C[438291415] = 1141899264;
  dword_140404A6C[438291414] = 1149239296;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2929);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215099])(v18);
  (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
  return MEMORY[0x1401F8B20]((unsigned __int64)v20 ^ v22);
}

