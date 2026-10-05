/* Address: 0x1400589a0 | Name: sub_1400589A0 | Size: 1800 bytes */
__int64 __fastcall sub_1400589A0(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rsi
  unsigned int v5; // r14d
  unsigned int v6; // r9d
  signed int v7; // ebx
  int v8; // edx
  __m128i si128; // xmm4
  __m128i v10; // xmm5
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm4
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  signed int v21; // eax
  int v22; // edi
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  char *v29; // r8
  unsigned int *v30; // rdx
  char v31; // al
  __int64 v32; // rbp
  int v33; // r13d
  __int64 v34; // r15
  int v35; // edi
  __int64 v36; // rbx
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // ecx
  bool v44; // zf
  unsigned int v45; // eax
  const char *v46; // r9
  char *v47; // rbx
  int v48; // r8d
  char *v49; // r9
  unsigned int v50; // xmm1_4
  unsigned int v51; // xmm0_4
  signed int v52; // eax
  __int64 v54; // [rsp+0h] [rbp-5E8h] BYREF
  int v55; // [rsp+20h] [rbp-5C8h]
  int v56; // [rsp+28h] [rbp-5C0h]
  unsigned int v57; // [rsp+30h] [rbp-5B8h]
  unsigned int v58; // [rsp+34h] [rbp-5B4h]
  __int64 v59; // [rsp+38h] [rbp-5B0h]
  unsigned int v60[2]; // [rsp+40h] [rbp-5A8h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-5A0h]
  unsigned int *v62; // [rsp+50h] [rbp-598h]
  __int64 v63; // [rsp+58h] [rbp-590h]
  __int128 v64; // [rsp+60h] [rbp-588h] BYREF
  __int128 v65; // [rsp+70h] [rbp-578h]
  int v66; // [rsp+80h] [rbp-568h]
  int v67; // [rsp+88h] [rbp-560h]
  _DWORD v68[20]; // [rsp+90h] [rbp-558h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-508h]
  __int64 v70; // [rsp+E8h] [rbp-500h]
  __int64 v71; // [rsp+F0h] [rbp-4F8h]
  __int64 v72; // [rsp+F8h] [rbp-4F0h]
  __int64 v73; // [rsp+100h] [rbp-4E8h]
  __int64 v74; // [rsp+108h] [rbp-4E0h]
  char v75[1024]; // [rsp+190h] [rbp-458h] BYREF
  __int64 v76; // [rsp+590h] [rbp-58h]

  v3 = dword_140404A6C[179992853] + 630000;
  v59 = a3;
  v4 = a2;
  v5 = dword_140404A6C[487148678] + 19;
  v57 = a1;
  if ( (signed int)(dword_140404A6C[179992853] + 630000) > 3870000 )
    v3 = 3870000;
  v58 = dword_140404A6C[487148678] + 19;
  v6 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v6 = 0;
  dword_140404A6C[487148678] = v6;
  if ( a1 == 1 )
  {
    sub_14012D310(
      v5,
      v3,
      a3,
      v6,
      v55,
      v56,
      v57,
      v59,
      v60[0],
      v61,
      (_DWORD)v62,
      v63,
      v64,
      DWORD2(v64),
      v65,
      DWORD2(v65),
      v66,
      v67,
      v68[0],
      v68[2],
      v68[4],
      v68[6],
      v68[8],
      v68[10],
      v68[12],
      v68[14],
      v68[16],
      v68[18],
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
LABEL_29:
    a3 = v59;
    goto LABEL_30;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] || !dword_140404A6C[487149972] )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v54 ^ v76);
    v7 = 0x10000;
    v8 = 0;
    if ( (int)dword_140404A6C[487149972] >= 8 && dword_140302080 >= 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1402791B0);
      v10 = si128;
      v11 = 0;
      v12 = &dword_140404A6C[487150492];
      do
      {
        v13 = _mm_cvtsi32_si128(v12[259]);
        v8 += 8;
        v14 = _mm_cvtsi32_si128(*(v12 - 259));
        v11 += 8;
        v15 = _mm_cvtsi32_si128(*v12);
        v16 = _mm_cvtsi32_si128(*(v12 - 518));
        v12 += 2072;
        si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v16, v14), _mm_unpacklo_epi32(v15, v13)));
        v10 = _mm_min_epi32(
                v10,
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v12 - 1554)), _mm_cvtsi32_si128(*(v12 - 1295))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v12 - 1036)), _mm_cvtsi32_si128(*(v12 - 777)))));
      }
      while ( v11 < dword_140404A6C[487149972] - (signed int)dword_140404A6C[487149972] % 8 );
      v17 = _mm_min_epi32(si128, v10);
      v18 = _mm_min_epi32(v17, _mm_srli_si128(v17, 8));
      v7 = _mm_cvtsi128_si32(_mm_min_epi32(v18, _mm_srli_si128(v18, 4)));
    }
    if ( v8 < (int)dword_140404A6C[487149972] )
    {
      v19 = &dword_140404A6C[259 * v8 + 487149974];
      v20 = dword_140404A6C[487149972] - v8;
      do
      {
        v21 = *v19;
        v19 += 259;
        if ( v7 <= v21 )
          v21 = v7;
        v7 = v21;
        --v20;
      }
      while ( v20 );
    }
    v22 = 0;
    v23 = rand() % (signed int)dword_140404A6C[487149972];
    do
    {
      if ( (int)dword_140404A6C[259 * v23 + 487149974] <= v7 )
        break;
      ++v22;
      v23 = rand() % (signed int)dword_140404A6C[487149972];
    }
    while ( v22 < 1024 );
    v24 = v23;
    v25 = 259LL * v23;
    ++dword_140404A6C[v25 + 487149974];
    v26 = (int)dword_140404A6C[v25 + 487149973];
    dword_140404A6C[487148752] = dword_140404A6C[487148677] + 100;
    sub_140158AB0(v68, "SECRET%02d.TXT", dword_140404A6C[487148677]);
    v27 = 2570 * v24;
    v28 = (int)dword_140404A6C[2570 * v24 + 275754072];
    if ( (int)v28 < 256 )
    {
      dword_140404A6C[6 * v28 + 275754073 + v27] = dword_140404A6C[487148752];
      v29 = (char *)v68;
      v30 = &dword_140404A6C[6 * (int)dword_140404A6C[v27 + 275754072] + 275754074 + v27];
      do
      {
        v31 = *v29++;
        *(_BYTE *)v30 = v31;
        v30 = (unsigned int *)((char *)v30 + 1);
      }
      while ( v31 );
      dword_140404A6C[6 * (int)dword_140404A6C[v27 + 275754072]++ + 275754078 + v27] = 0;
    }
    if ( dword_140404A6C[14019 * v26 + 225641203] != 4 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v54 ^ v76);
    sub_14012E620((unsigned int)v26, v5, v3);
    goto LABEL_29;
  }
LABEL_30:
  v63 = v4;
  if ( (int)v4 > 0 )
  {
    v32 = 0;
    v62 = &dword_140404A6C[1268 * v5 + 278521297];
    v33 = (int)v3 / 3600;
    do
    {
      v34 = *(int *)(a3 + 4 * v32);
      v35 = 0;
      v36 = 0;
      v37 = &dword_140404A6C[5873 * v34 + 283831867];
      while ( *(v37 - 279) )
      {
        if ( !*v37 )
        {
          ++v36;
          ++v35;
          break;
        }
        if ( !v37[279] )
        {
          v36 += 2;
          v35 += 2;
          break;
        }
        if ( !v37[558] )
        {
          v36 += 3;
          v35 += 3;
          break;
        }
        v36 += 4;
        v37 += 1116;
        v35 += 4;
        if ( v36 >= 16 )
          break;
      }
      v38 = 5873 * v34;
      v39 = 23492 * v34 + 1116LL * v35;
      MEMORY[0x1401FCD30]((char *)&dword_140404A6C[283831588] + v39, 0, 1116);
      v40 = (int)dword_140404A6C[487148744];
      v41 = 23492 * v34 + 1116 * v36;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v41) = dword_140404A6C[487148677];
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v41) = v57;
      v42 = dword_140404A6C[487148752];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v41) = v40;
      *(unsigned int *)((char *)&dword_140404A6C[283831594] + v41) = v42;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v41) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v41) = dword_140404A6C[1760 * v40 + 278845898];
      v43 = 250 * (rand() % 5 + 4);
      v44 = v58 == 23;
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v41) = v43;
      if ( v44 )
      {
        v43 *= 4;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v41) = v43;
      }
      v45 = dword_140404A6C[487148753];
      v46 = (const char *)v62;
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v41) = v3;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v41) = v45;
      v55 = v43;
      *(float *)((char *)&dword_140404A6C[283831609] + v41) = (float)v43 * 0.000024999999;
      v47 = (char *)&dword_140404A6C[283831611] + v39;
      sub_140158AB0(
        (char *)&dword_140404A6C[283831611] + v39,
        "Acquisition(%d):\n"
        "We have received reports that Megacorp has disks containing\n"
        "information that will be beneficial to one of our subsidiaries.\n"
        "The %s is in a town car driving around the city.\n"
        "\n"
        "Value:               $%d Bonus\n",
        v35 + 1,
        v46,
        v55);
      v48 = v33 / 60 % -12;
      if ( !v48 )
        v48 = 12;
      sub_140158AB0(v75, "\nThis mission expires at %d:%d%d\n\n", v48, v33 % 60 / 10 % 6, v33 % 60 % 10);
      v49 = v47 - 1;
      do
        v44 = *++v49 == 0;
      while ( !v44 );
      strcpy(v49, v75);
      sub_140051BD0(v34, v35);
      v66 = 1065353216;
      v50 = dword_140404A6C[v38 + 283831499];
      v60[0] = dword_140404A6C[v38 + 283831498];
      v51 = dword_140404A6C[v38 + 283831500];
      v60[1] = v50;
      v61 = v51;
      v64 = xmmword_140278D30;
      v65 = xmmword_140278D30;
      sub_14007B2A0(&v64, (char *)&v64 + 12);
      v52 = sub_140054130(34, v60, nullptr, (unsigned int *)&v64);
      sub_1400584B0(v52, (__int64)v47);
      a3 = v59;
      ++v32;
    }
    while ( v32 < v63 );
  }
  ++dword_140404A6C[487148677];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v54 ^ v76);
}

