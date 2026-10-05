/* Address: 0x14003e5e0 | Name: sub_14003E5E0 | Size: 1800 bytes */
__int64 __fastcall sub_14003E5E0(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rsi
  unsigned int v5; // r14d
  int v6; // r9d
  __int64 result; // rax
  int v8; // ebx
  int v9; // edx
  __m128i si128; // xmm4
  __m128i v11; // xmm5
  __int64 v12; // rcx
  unsigned int *v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm4
  int *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // edi
  int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r9
  char *v29; // r8
  char *v30; // rdx
  char v31; // al
  __int64 v32; // rbp
  __int64 v33; // r15
  int v34; // edi
  __int64 v35; // rbx
  _DWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  char *v44; // r9
  int v46; // xmm1_4
  int v47; // xmm0_4
  unsigned int v48; // eax
  int v50; // [rsp+34h] [rbp-5B4h]
  __int64 v51; // [rsp+38h] [rbp-5B0h]
  int v52[4]; // [rsp+40h] [rbp-5A8h] BYREF
  int *v53; // [rsp+50h] [rbp-598h]
  __int64 v54; // [rsp+58h] [rbp-590h]
  _OWORD v55[2]; // [rsp+60h] [rbp-588h] BYREF
  int v56; // [rsp+80h] [rbp-568h]
  char Buffer[256]; // [rsp+90h] [rbp-558h] BYREF
  char v58[1024]; // [rsp+190h] [rbp-458h] BYREF

  v3 = dword_178C5B8E0 + 630000;
  v51 = a3;
  v4 = a2;
  v5 = dword_163D94A44 + 19;
  if ( dword_178C5B8E0 + 630000 > 3870000 )
    v3 = 3870000;
  v50 = dword_163D94A44 + 19;
  v6 = dword_163D94A44 + 1;
  result = (unsigned int)(dword_163D94A44 + 20);
  if ( (int)result > 24 )
    v6 = 0;
  dword_163D94A44 = v6;
  if ( a1 == 1 )
  {
    result = sub_1400B9710(v5, v3);
LABEL_29:
    a3 = v51;
    goto LABEL_30;
  }
  if ( !a1 )
  {
    if ( !dword_183A7E074 || !dword_163D95E7C )
      return result;
    v8 = 0x10000;
    v9 = 0;
    if ( dword_163D95E7C >= 8 && dword_140148180 >= 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BA0);
      v11 = si128;
      v12 = 0;
      v13 = (unsigned int *)&unk_163D9669C;
      do
      {
        v14 = _mm_cvtsi32_si128(v13[259]);
        v9 += 8;
        v15 = _mm_cvtsi32_si128(*(v13 - 259));
        v12 += 8;
        v16 = _mm_cvtsi32_si128(*v13);
        v17 = _mm_cvtsi32_si128(*(v13 - 518));
        v13 += 2072;
        si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v17, v15), _mm_unpacklo_epi32(v16, v14)));
        v11 = _mm_min_epi32(
                v11,
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v13 - 1554)), _mm_cvtsi32_si128(*(v13 - 1295))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v13 - 1036)), _mm_cvtsi32_si128(*(v13 - 777)))));
      }
      while ( v12 < dword_163D95E7C - dword_163D95E7C % 8 );
      v18 = _mm_min_epi32(si128, v11);
      v19 = _mm_min_epi32(v18, _mm_srli_si128(v18, 8));
      v8 = _mm_cvtsi128_si32(_mm_min_epi32(v19, _mm_srli_si128(v19, 4)));
    }
    if ( v9 < dword_163D95E7C )
    {
      v20 = (int *)((char *)&unk_163D95E84 + 1036 * v9);
      v21 = (unsigned int)(dword_163D95E7C - v9);
      do
      {
        v22 = *v20;
        v20 += 259;
        if ( v8 <= v22 )
          v22 = v8;
        v8 = v22;
        --v21;
      }
      while ( v21 );
    }
    v23 = 0;
    v24 = rand() % dword_163D95E7C;
    do
    {
      if ( *((_DWORD *)&unk_163D95E84 + 259 * v24) <= v8 )
        break;
      ++v23;
      v24 = rand() % dword_163D95E7C;
    }
    while ( v23 < 1024 );
    v25 = v24;
    v26 = 1036LL * v24;
    ++*(_DWORD *)((char *)&unk_163D95E84 + v26);
    v27 = *(int *)((char *)&unk_163D95E80 + v26);
    dword_163D94B6C = dword_163D94A40 + 100;
    sub_1400DBB30(Buffer, "SECRET%02d.TXT");
    v28 = 10280 * v25;
    result = *((int *)&unk_18F7184CC + 2570 * v25);
    if ( (int)result < 256 )
    {
      *(_DWORD *)((char *)&unk_18F7184D0 + 24 * result + v28) = dword_163D94B6C;
      v29 = Buffer;
      v30 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7184CC + v28) + v28;
      do
      {
        v31 = *v29++;
        *v30++ = v31;
      }
      while ( v31 );
      result = v28 + 24LL * *(int *)((char *)&unk_18F7184CC + v28);
      *(_DWORD *)((char *)&unk_18F7184E4 + result) = 0;
      ++*(_DWORD *)((char *)&unk_18F7184CC + v28);
    }
    if ( *((_DWORD *)&unk_183A7E0B8 + 14019 * v27) != 4 )
      return result;
    result = sub_1400BAA30((unsigned int)v27, v5, v3);
    goto LABEL_29;
  }
LABEL_30:
  v54 = v4;
  if ( (int)v4 > 0 )
  {
    v32 = 0;
    v53 = &dword_1901220F0[1268 * v5];
    do
    {
      v33 = *(int *)(a3 + 4 * v32);
      v34 = 0;
      v35 = 0;
      v36 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v33);
      while ( *(v36 - 279) )
      {
        if ( !*v36 )
        {
          ++v35;
          ++v34;
          break;
        }
        if ( !v36[279] )
        {
          v35 += 2;
          v34 += 2;
          break;
        }
        if ( !v36[558] )
        {
          v35 += 3;
          v34 += 3;
          break;
        }
        v35 += 4;
        v36 += 1116;
        v34 += 4;
        if ( v35 >= 16 )
          break;
      }
      v37 = 23492 * v33;
      v38 = 23492 * v33 + 1116LL * v34;
      memset((char *)&unk_1915415DC + v38, 0, 0x45Cu);
      v39 = dword_163D94B4C;
      v40 = 23492 * v33 + 1116 * v35;
      *(_DWORD *)((char *)&unk_1915415E4 + v40) = dword_163D94A40;
      *(_DWORD *)((char *)&unk_1915415E8 + v40) = a1;
      v41 = dword_163D94B6C;
      *(int *)((char *)&dword_1915415EC + v40) = v39;
      *(_DWORD *)((char *)&unk_1915415F4 + v40) = v41;
      *(_DWORD *)((char *)&unk_1915415DC + v40) = 1;
      *(_DWORD *)((char *)&unk_191541618 + v40) = dword_19025F0D4[1760 * v39];
      v42 = 250 * (rand() % 5 + 4);
      *(_DWORD *)((char *)&unk_19154161C + v40) = v42;
      if ( v50 == 23 )
      {
        v42 *= 4;
        *(_DWORD *)((char *)&unk_19154161C + v40) = v42;
      }
      v43 = dword_163D94B70;
      *(_DWORD *)((char *)&unk_191541634 + v40) = 0;
      *(_DWORD *)((char *)&unk_191541628 + v40) = 0;
      *(_DWORD *)((char *)&unk_191541620 + v40) = v3;
      *(_DWORD *)((char *)&unk_191541624 + v40) = v43;
      *(float *)((char *)&unk_191541630 + v40) = (float)v42 * 0.000024999999;
      sub_1400DBB30(
        &byte_191541638[v38],
        "Acquisition(%d):\n"
        "We have received reports that Megacorp has disks containing\n"
        "information that will be beneficial to one of our subsidiaries.\n"
        "The %s is in a town car driving around the city.\n"
        "\n"
        "Value:               $%d Bonus\n");
      sub_1400DBB30(v58, "\nThis mission expires at %d:%d%d\n\n");
      v44 = &byte_191541638[v38 - 1];
      while ( *++v44 != 0 )
        ;
      strcpy(v44, v58);
      sub_14003A1E0(v33, v34);
      v56 = 1065353216;
      v46 = *(_DWORD *)((char *)&unk_191541478 + v37);
      v52[0] = *(_DWORD *)((char *)&unk_191541474 + v37);
      v47 = *(_DWORD *)((char *)&unk_19154147C + v37);
      v52[1] = v46;
      v52[2] = v47;
      v55[0] = xmmword_1400F78B0;
      v55[1] = xmmword_1400F78B0;
      sub_140049C20(v55, (char *)v55 + 12);
      v48 = sub_14003B080(34, v52, nullptr, (int *)v55);
      result = (__int64)sub_14003E1A0(v48, &byte_191541638[v38]);
      a3 = v51;
      ++v32;
    }
    while ( v32 < v54 );
  }
  ++dword_163D94A40;
  return result;
}

