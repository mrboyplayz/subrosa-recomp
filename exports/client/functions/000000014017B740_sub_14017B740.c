/* Address: 0x14017b740 | Name: sub_14017B740 | Size: 1394 bytes */
__int64 __fastcall sub_14017B740(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r12d
  int v10; // eax
  int v11; // r15d
  int v12; // eax
  int v13; // r13d
  int v15; // r12d
  int v16; // r15d
  int v17; // r13d
  unsigned int v18; // eax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int32 v21; // eax
  int v22; // eax
  _OWORD *v23; // rax
  int v24; // r15d
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // r9d
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // r8d
  __m128i v33; // [rsp+20h] [rbp-40h] BYREF
  __m128i v34; // [rsp+30h] [rbp-30h] BYREF
  __m128i v35; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v36[16]; // [rsp+50h] [rbp-10h] BYREF
  int v37; // [rsp+A0h] [rbp+40h]
  int v38; // [rsp+A0h] [rbp+40h]
  int v39; // [rsp+A8h] [rbp+48h]

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  v4 = 0;
  v34 = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  v7 = (unsigned int)sub_140180D50(a2, a3, "cmap");
  v8 = sub_140180D50(a2, a3, "loca");
  *(_DWORD *)(a1 + 24) = v8;
  v9 = v8;
  v10 = sub_140180D50(a2, a3, "head");
  *(_DWORD *)(a1 + 28) = v10;
  v11 = v10;
  v39 = sub_140180D50(a2, a3, "glyf");
  *(_DWORD *)(a1 + 32) = v39;
  v12 = sub_140180D50(a2, a3, "hhea");
  *(_DWORD *)(a1 + 36) = v12;
  v13 = v12;
  v37 = sub_140180D50(a2, a3, "hmtx");
  *(_DWORD *)(a1 + 40) = v37;
  *(_DWORD *)(a1 + 44) = sub_140180D50(a2, a3, "kern");
  *(_DWORD *)(a1 + 48) = sub_140180D50(a2, a3, "GPOS");
  if ( !(_DWORD)v7 || !v11 || !v13 || !v37 )
    return 0;
  if ( v39 )
  {
    if ( !v9 )
      return 0;
  }
  else
  {
    v38 = 2;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = sub_140180D50(a2, a3, "CFF ");
    if ( !v18 )
      return 0;
    v34 = 0u;
    *(_OWORD *)(a1 + 128) = 0u;
    v19 = v34;
    v34.m128i_i32[3] = 0x20000000;
    v34.m128i_i64[0] = a2 + v18;
    *(__m128i *)(a1 + 144) = v19;
    v34.m128i_i32[2] = 0;
    v20 = v34;
    *(__m128i *)(a1 + 64) = v34;
    v33 = v20;
    if ( _mm_srli_si128(v20, 8).m128i_i32[1] < 2 )
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    if ( v33.m128i_i32[3] > 2 )
      LOBYTE(v21) = *(_BYTE *)(v33.m128i_i64[0] + 2);
    else
      LOBYTE(v21) = 0;
    v21 = (unsigned __int8)v21;
    if ( (unsigned __int8)v21 > v33.m128i_i32[3] )
    {
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
      v21 = v33.m128i_i32[3];
    }
    v33.m128i_i32[2] = v21;
    sub_14017F1F0(&v35, &v33);
    v34 = *(__m128i *)sub_14017F1F0(&v35, &v33);
    v34 = *(__m128i *)sub_14017F410(&v35, &v34, 0);
    sub_14017F1F0(&v35, &v33);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)sub_14017F1F0(&v35, &v33);
    v35 = *(__m128i *)sub_1401803B0(&v35, &v34, 17);
    if ( v35.m128i_i32[2] < v35.m128i_i32[3] )
      v15 = sub_14017F5B0(&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, &v34, 262);
    if ( v35.m128i_i32[2] < v35.m128i_i32[3] )
      v38 = sub_14017F5B0(&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, &v34, 292);
    if ( v35.m128i_i32[2] < v35.m128i_i32[3] )
      v16 = sub_14017F5B0(&v35);
    v35 = *(__m128i *)sub_1401803B0(&v35, &v34, 293);
    if ( v35.m128i_i32[2] < v35.m128i_i32[3] )
      v17 = sub_14017F5B0(&v35);
    v35 = v34;
    v34 = v33;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)sub_140180F10(v36, &v34, &v35);
    if ( v38 != 2 || !v15 )
      return 0;
    if ( v16 )
    {
      if ( !v17 )
        return 0;
      v22 = v33.m128i_i32[3];
      if ( v16 > v33.m128i_i32[3] || v16 < 0 )
      {
        sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
        v22 = v33.m128i_i32[3];
      }
      if ( v16 > v22 || (v33.m128i_i32[2] = v16, v16 < 0) )
        v33.m128i_i32[2] = v22;
      v23 = (_OWORD *)sub_14017F1F0(v36, &v33);
      v24 = v33.m128i_i32[3];
      v25 = v33.m128i_i32[3] - v17;
      v34 = 0u;
      *(_OWORD *)(a1 + 128) = *v23;
      if ( v17 >= 0 && v25 >= 0 && v17 <= v24 )
      {
        v34.m128i_i64[0] = v33.m128i_i64[0] + v17;
        v34.m128i_i32[3] = v25;
      }
      *(__m128i *)(a1 + 144) = v34;
    }
    else
    {
      v24 = v33.m128i_i32[3];
    }
    if ( v15 > v24 || v15 < 0 )
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    if ( v15 > v24 || (v33.m128i_i32[2] = v15, v15 < 0) )
      v33.m128i_i32[2] = v24;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)sub_14017F1F0(v36, &v33);
  }
  v26 = sub_140180D50(a2, a3, "maxp");
  if ( v26 )
    v27 = *(unsigned __int8 *)(v26 + a2 + 5) + (*(unsigned __int8 *)(v26 + a2 + 4) << 8);
  else
    v27 = 0xFFFF;
  *(_DWORD *)(a1 + 20) = v27;
  v28 = *(unsigned __int8 *)(v7 + a2 + 3);
  v29 = *(unsigned __int8 *)(v7 + a2 + 2) << 8;
  *(_DWORD *)(a1 + 52) = 0;
  v30 = v28 + v29;
  if ( !v30 )
    return 0;
  do
  {
    v31 = (unsigned int)(v7 + 4 + 8 * v4);
    v32 = *(unsigned __int8 *)(v31 + a2 + 1) + (*(unsigned __int8 *)(v31 + a2) << 8);
    if ( !v32
      || v32 == 3
      && (*(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 1
       || *(unsigned __int8 *)(v31 + a2 + 3) + (*(unsigned __int8 *)(v31 + a2 + 2) << 8) == 10) )
    {
      *(_DWORD *)(a1 + 52) = v7
                           + ((((*(unsigned __int8 *)(v31 + a2 + 5) + (*(unsigned __int8 *)(v31 + a2 + 4) << 8)) << 8)
                             + *(unsigned __int8 *)(v31 + a2 + 6)) << 8)
                           + *(unsigned __int8 *)(v31 + a2 + 7);
    }
    ++v4;
  }
  while ( v4 < v30 );
  if ( !*(_DWORD *)(a1 + 52) )
    return 0;
  *(_DWORD *)(a1 + 56) = (*(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 50) << 8)
                       + *(unsigned __int8 *)(*(int *)(a1 + 28) + a2 + 51);
  return 1;
}

