/* Address: 0x14017f820 | Name: sub_14017F820 | Size: 517 bytes */
_OWORD *__fastcall sub_14017F820(_OWORD *a1, __int64 a2, int a3)
{
  int v6; // ebp
  int v7; // r8d
  __int32 v8; // ecx
  unsigned __int8 v9; // al
  int v10; // r10d
  unsigned __int8 v11; // al
  __int64 v12; // rax
  int v13; // r10d
  unsigned __int8 v14; // al
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int8 v17; // al
  __int64 v18; // rax
  int v19; // r9d
  unsigned __int8 v20; // al
  __int64 v21; // rax
  int v22; // r11d
  unsigned __int8 v23; // al
  __int64 v24; // rax
  int v25; // edx
  unsigned __int8 v26; // al
  __int64 v27; // rax
  int v28; // edx
  int v29; // esi
  unsigned __int8 v30; // cl
  __m128i v31; // xmm0
  __int128 v32; // xmm0
  __m128i v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+30h] [rbp-48h] BYREF
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-28h] BYREF

  v6 = -1;
  v34 = *(__m128i *)(a2 + 144);
  if ( _mm_srli_si128(v34, 8).m128i_i32[1] < 0 )
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
  if ( v34.m128i_i32[3] < 0 )
  {
    v8 = v34.m128i_i32[3];
LABEL_35:
    v29 = v8 + a3;
    if ( v29 > v34.m128i_i32[3] || v29 < 0 )
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    if ( v29 > v34.m128i_i32[3] || v29 < 0 || v29 >= v34.m128i_i32[3] )
      v30 = 0;
    else
      v30 = *(_BYTE *)(v29 + v34.m128i_i64[0]);
    v6 = v30;
    goto LABEL_44;
  }
  v7 = 0;
  v8 = 0;
  if ( v34.m128i_i32[3] <= 0 )
    goto LABEL_35;
  v8 = 1;
  if ( !*(_BYTE *)v34.m128i_i64[0] )
    goto LABEL_35;
  if ( *(_BYTE *)v34.m128i_i64[0] == 3 )
  {
    if ( v34.m128i_i32[3] > 1 )
    {
      v8 = 2;
      v9 = *(_BYTE *)(v34.m128i_i64[0] + 1);
    }
    else
    {
      v9 = 0;
    }
    v10 = v9;
    if ( v8 < v34.m128i_i32[3] )
    {
      v12 = v8++;
      v11 = *(_BYTE *)(v12 + v34.m128i_i64[0]);
    }
    else
    {
      v11 = 0;
    }
    v13 = v11 | (v10 << 8);
    if ( v8 < v34.m128i_i32[3] )
    {
      v15 = v8++;
      v14 = *(_BYTE *)(v15 + v34.m128i_i64[0]);
    }
    else
    {
      v14 = 0;
    }
    v16 = v14;
    if ( v8 < v34.m128i_i32[3] )
    {
      v18 = v8++;
      v17 = *(_BYTE *)(v18 + v34.m128i_i64[0]);
    }
    else
    {
      v17 = 0;
    }
    v19 = v17 | (v16 << 8);
    if ( v13 )
    {
      while ( 1 )
      {
        if ( v8 < v34.m128i_i32[3] )
        {
          v21 = v8++;
          v20 = *(_BYTE *)(v21 + v34.m128i_i64[0]);
        }
        else
        {
          v20 = 0;
        }
        v22 = v20;
        if ( v8 < v34.m128i_i32[3] )
        {
          v24 = v8++;
          v23 = *(_BYTE *)(v24 + v34.m128i_i64[0]);
        }
        else
        {
          v23 = 0;
        }
        v25 = v23;
        if ( v8 < v34.m128i_i32[3] )
        {
          v27 = v8++;
          v26 = *(_BYTE *)(v27 + v34.m128i_i64[0]);
        }
        else
        {
          v26 = 0;
        }
        v28 = v26 | (v25 << 8);
        if ( a3 >= v19 && a3 < v28 )
          break;
        ++v7;
        v19 = v28;
        if ( v7 >= v13 )
          goto LABEL_44;
      }
      v6 = v22;
    }
  }
LABEL_44:
  v34 = *(__m128i *)(a2 + 128);
  v31 = *(__m128i *)sub_14017F410(&v36, (__int64)&v34, v6);
  v35 = *(_OWORD *)(a2 + 64);
  v34 = v31;
  v32 = *(_OWORD *)sub_140180F10(v37, &v35, &v34);
  *a1 = v32;
  return a1;
}

