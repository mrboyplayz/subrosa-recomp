#include "shared_client.h"


//----- (00000001400589A0) ----------------------------------------------------
__int64            sub_1400589A0(unsigned int a1, int a2, __int64 a3)
{
  signed int v3; // r12d
  __int64 v4; // rsi
  int v5; // r14d
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
       char *v46; // r9
       __m128i *v47; // rbx
  int v48; // r8d
  char *v49; // r9
  float v50; // xmm1_4
  double v51; // xmm2_8
  float v52; // xmm0_4
  int v53; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400589A0[1440];
#define v55 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 0)) /* [rsp+0h] */
#define v56 (*(int (*))(void *)(sr_frame_1400589A0 + 32)) /* [rsp+20h] */
#define v57 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 48)) /* [rsp+30h] */
#define v58 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 52)) /* [rsp+34h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 56)) /* [rsp+38h] */
#define v60 (*(float (*)[4])(void *)(sr_frame_1400589A0 + 64)) /* [rsp+40h] */
#define v61 (*(unsigned int * (*))(void *)(sr_frame_1400589A0 + 80)) /* [rsp+50h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 88)) /* [rsp+58h] */
#define v63 (*(_OWORD (*)[2])(void *)(sr_frame_1400589A0 + 96)) /* [rsp+60h] */
#define v64 (*(int (*))(void *)(sr_frame_1400589A0 + 128)) /* [rsp+80h] */
#define v65 (*(_DWORD (*)[20])(void *)(sr_frame_1400589A0 + 144)) /* [rsp+90h] */
#define v66 (*(char (*)[1024])(void *)(sr_frame_1400589A0 + 400)) /* [rsp+190h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 1424)) /* [rsp+590h] */

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
    sub_14012D310(v5, v3);
LABEL_29:
    a3 = v59;
    goto LABEL_30;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] || !dword_140404A6C[487149972] )
      return 0; /* compatibility result discarded by all reviewed callers */
    v7 = 0x10000;
    v8 = 0;
    if ( (int)dword_140404A6C[487149972] >= 8 && dword_140302080 >= 2 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
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
    sub_140158AB0(v65, "SECRET%02d.TXT", dword_140404A6C[487148677]);
    v27 = 2570 * v24;
    v28 = (int)dword_140404A6C[2570 * v24 + 275754072];
    if ( (int)v28 < 256 )
    {
      dword_140404A6C[6 * v28 + 275754073 + v27] = dword_140404A6C[487148752];
      v29 = (char *)v65;
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
      return 0; /* compatibility result discarded by all reviewed callers */
    sub_14012E620(v26, v5);
    goto LABEL_29;
  }
LABEL_30:
  v62 = v4;
  if ( (int)v4 > 0 )
  {
    v32 = 0;
    v61 = &dword_140404A6C[1268 * v5 + 278521297];
    v33 = v3 / 3600;
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
      sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v39)), 0, 0x45Cu);
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
      v46 = (     char *)v61;
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v41) = v3;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v41) = v45;
      v56 = v43;
      *(float *)((char *)&dword_140404A6C[283831609] + v41) = (float)v43 * 2.499999936844688e-05;
      v47 = (     __m128i *)((char *)&dword_140404A6C[283831611] + v39);
      sub_140158AB0(
        (_BYTE *)&dword_140404A6C[283831611] + v39,
        "Acquisition(%d):\n"
        "We have received reports that Megacorp has disks containing\n"
        "information that will be beneficial to one of our subsidiaries.\n"
        "The %s is in a town car driving around the city.\n"
        "\n"
        "Value:               $%d Bonus\n",
        v35 + 1,
        v46,
        v56);
      v48 = v33 / 60 % -12;
      if ( !v48 )
        v48 = 12;
      sub_140158AB0(v66, "\nThis mission expires at %d:%d%d\n\n", v48, v33 % 60 / 10 % 6, v33 % 60 % 10);
      v49 = &SR_VEC_LANES(128, v47[-1], i8)[15];
      do
        v44 = *++v49 == 0;
      while ( !v44 );
      strcpy(v49, v66);
      sub_140051BD0(v34, v35);
      v64 = 1065353216;
      v50 = *(float *)&dword_140404A6C[v38 + 283831499];
      *(_QWORD *)&v51 = dword_140404A6C[v38 + 283831497];
      LODWORD(v60[0]) = dword_140404A6C[v38 + 283831498];
      *(float *)&v51 = *(float *)&v51 - 1.5707963705062866;
      v52 = *(float *)&dword_140404A6C[v38 + 283831500];
      v60[1] = v50;
      v60[2] = v52;
      v63[0] = xmmword_140278D30;
      v63[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v63, (float *)v63 + 3, v51);
      v53 = sr_CreateItem(34, v60, nullptr, (float *)v63);
      sub_1400584B0(v53, v47);
      a3 = v59;
      ++v32;
    }
    while ( v32 < v62 );
  }
  ++dword_140404A6C[487148677];
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402791B0: using guessed type __int128 xmmword_1402791B0;
// 140302080: using guessed type int dword_140302080;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657DAC: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (00000001400590B0) ----------------------------------------------------
void            sub_1400590B0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int *v4; // r13
  int *v5; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm6_4
  unsigned int v19; // eax
  unsigned __int64 i; // r14
  int v21; // esi
  __int64 v22; // rbx
  unsigned int *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdi
  float v26; // xmm1_4
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // r11d
  __int64 v32; // r9
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400590B0[160];
#define v38 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 8)) /* [rsp+0h] */
#define v39 (*(int (*))(void *)(sr_frame_1400590B0 + 40)) /* [rsp+20h] */
#define v40 (*(unsigned __int64 (*))(void *)(sr_frame_1400590B0 + 48)) /* [rsp+28h] */
#define v41 (*(float (*))(void *)(sr_frame_1400590B0 + 56)) /* [rsp+30h] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_1400590B0 + 64)) /* [rsp+38h] */
#define v43 (*(int (*))(void *)(sr_frame_1400590B0 + 68)) /* [rsp+3Ch] */
#define v44 (*(unsigned int * (*))(void *)(sr_frame_1400590B0 + 72)) /* [rsp+40h] */
#define v45 (*(_OWORD (*)[2])(void *)(sr_frame_1400590B0 + 80)) /* [rsp+48h] */
#define v46 (*(int (*))(void *)(sr_frame_1400590B0 + 112)) /* [rsp+68h] */
#define v47 (*(_DWORD (*)[8])(void *)(sr_frame_1400590B0 + 120)) /* [rsp+70h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 152)) /* [rsp+90h] */

  if ( a2 >= 3 )
  {
    v3 = dword_140404A6C[179992853] + 414000;
    v4 = a3;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v3 = 3870000;
    v5 = v47;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    v42 = v3;
    v44 = a3;
    v43 = a2;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( v8 >= 2 )
      {
        v12 = 1000;
        *v5 = 1000;
        if ( (rand() & 1) == 0 )
        {
          v12 = 1500;
          *v5 = 1500;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
          v12 += 500;
        if ( v9 == 23 )
          v12 *= 5;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 0;
      }
      *v5 = v11;
      ++v8;
      ++v5;
    }
    while ( (int)v8 < a2 );
    v13 = 0;
    v14 = dword_140404A6C[487148744];
    v15 = dword_140404A6C[487148677];
    do
    {
      v16 = 5873LL * (int)v4[v13];
      v45[0] = xmmword_140278D30;
      v45[1] = xmmword_140278D30;
      v46 = 1065353216;
      v17 = (float)(*(float *)&dword_140404A6C[v16 + 283831491] + *(float *)&dword_140404A6C[v16 + 283831494]) * 0.5;
      v18 = (float)(*(float *)&dword_140404A6C[v16 + 283831493] + *(float *)&dword_140404A6C[v16 + 283831496]) * 0.5;
      *((float *)&v40 + 1) = (float)(*(float *)&dword_140404A6C[v16 + 283831492]
                                   + *(float *)&dword_140404A6C[v16 + 283831495])
                           * 0.5;
      *(float *)&v40 = v17 + (float)((float)(v15 & 7) * 0.75);
      v41 = v18 - 1.0;
      if ( !v13 )
      {
        v19 = sr_CreateItem(v9, (float *)&v40, nullptr, (float *)v45);
        v15 = dword_140404A6C[487148677];
        v14 = v19;
        dword_140404A6C[487148744] = v19;
        v41 = v18 + 1.0;
      }
      ++v13;
    }
    while ( v13 < 2 );
    for ( i = 0; ; ++i )
    {
      v21 = 0;
      v39 = v4[i];
      v22 = 0;
      v23 = &dword_140404A6C[5873 * v39 + 283831867];
      while ( *(v23 - 279) )
      {
        if ( !*v23 )
        {
          ++v22;
          ++v21;
          break;
        }
        if ( !v23[279] )
        {
          v22 += 2;
          v21 += 2;
          break;
        }
        if ( !v23[558] )
        {
          v22 += 3;
          v21 += 3;
          break;
        }
        v22 += 4;
        v23 += 1116;
        v21 += 4;
        if ( v22 >= 16 )
          break;
      }
      v24 = 5873LL * v39;
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v21 + 283831588 + v24]), 0, 0x45Cu);
      v40 = 1116 * v22;
      v25 = 1116 * v22 + v24 * 4;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v25) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v25) = v15;
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v25) = v14;
      if ( v7 >= 2 )
      {
        if ( i <= 1 )
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 8;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        v27 = v47[i];
        if ( v7 < 3 )
          v27 *= 2;
        v26 = (float)v27;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v25) = v27;
        *(float *)((char *)&dword_140404A6C[283831609] + v25) = (float)v27 * 2.499999936844688e-05;
      }
      else
      {
        v26 = 0.0;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 7;
        *(_QWORD *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        *(unsigned int *)((char *)&dword_140404A6C[283831609] + v25) = 0;
        if ( !v7 )
          goto LABEL_45;
      }
      v26 = v26 * -1.249999968422344e-05;
LABEL_45:
      v28 = v42;
      *(float *)((char *)&dword_140404A6C[283831610] + v25) = v26;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v25) = v28;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v25) = *v44;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = 0;
      if ( v7 == 2 )
      {
        v29 = v47[i];
        v30 = rand();
        v31 = v39;
        v32 = 3LL * v39;
        v33 = v29 / 1000
            + v30
            % (int)(((int)((unsigned __int64)(91625969LL * v29) >> 32) >> 4)
                  + 1
                  + ((unsigned int)((unsigned __int64)(91625969LL * v29) >> 32) >> 31));
        if ( v33 < 1 )
          v33 = 1;
        v34 = 500 * v33;
        v35 = dword_140404A6C[6 * v39 + 335047061];
        if ( v35 <= 0 )
        {
          v36 = 0;
        }
        else
        {
          v37 = 50
              * ((25
                - (int)(float)((float)((float)v35 * *(float *)&dword_140404A6C[6 * v39 + 335047062])
                             * (float)((float)v34 * -2.499999936844688e-05)))
               / 50);
          v36 = v37;
          if ( v34 >= v37 )
            v37 = v34;
          v34 = v37;
        }
        dword_140404A6C[v24 + 283831608 + v40 / 4] = v36;
        dword_140404A6C[2 * v32 + 335047066] += v34;
        v14 = dword_140404A6C[487148744];
        v15 = dword_140404A6C[487148677];
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = v34;
      }
      else
      {
        v31 = v39;
      }
      sub_1400519F0(v31, v21);
      v4 = v44;
      if ( (int)++v7 >= v43 )
      {
        dword_140404A6C[487148677] = v15 + 1;
        return;
      }
    }
  }
}
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (0000000140059640) ----------------------------------------------------
void            sub_140059640(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // r8d
  int v7; // r13d
  unsigned int v8; // r9d
  int v9; // ebx
  signed int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  __m128i v20; // xmm0
  unsigned int v21; // eax

  v4 = dword_140404A6C[179992853] + 306000;
  v5 = a2;
  v6 = a1;
  v7 = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[179992853] + 306000) > 3870000 )
    v4 = 3870000;
  v8 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v8 = 0;
  dword_140404A6C[487148678] = v8;
  if ( a1 == 1 )
  {
    sub_14012D310(v7, v4);
LABEL_14:
    v6 = a1;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] )
      return;
    v9 = 0;
    v10 = rand() % (signed int)dword_140404A6C[225641186];
    do
    {
      if ( dword_140404A6C[14019 * v10 + 225641203] == 4 )
        break;
      ++v9;
      v10 = rand() % (signed int)dword_140404A6C[225641186];
    }
    while ( v9 < 1024 );
    if ( dword_140404A6C[14019 * v10 + 225641203] != 4 )
      return;
    sub_14012E620(v10, v7);
    goto LABEL_14;
  }
LABEL_15:
  v11 = v5;
  if ( (int)v5 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = *(int *)(a3 + 4 * v12);
      v14 = 0;
      v15 = 0;
      v16 = &dword_140404A6C[5873 * v13 + 283831867];
      while ( *(v16 - 279) )
      {
        if ( !*v16 )
        {
          ++v15;
          ++v14;
          break;
        }
        if ( !v16[279] )
        {
          v15 += 2;
          v14 += 2;
          break;
        }
        if ( !v16[558] )
        {
          v15 += 3;
          v14 += 3;
          break;
        }
        v15 += 4;
        v16 += 1116;
        v14 += 4;
        if ( v15 >= 16 )
          break;
      }
      v17 = 1116 * v15 + 23492LL * *(int *)(a3 + 4 * v12);
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v17) = dword_140404A6C[487148677];
      v18 = 1760LL * (int)dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v17) = dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v17) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v17) = v6;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v17) = dword_140404A6C[v18 + 278845898];
      v19 = 250 * (rand() % 5 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      if ( v7 == 23 )
      {
        v19 *= 4;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      }
      v20 = _mm_cvtsi32_si128(v19);
      v21 = dword_140404A6C[487148753];
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v17) = v4;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v17) = v21;
      *(float *)((char *)&dword_140404A6C[283831609] + v17) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v20), f32)[0] * 2.499999936844688e-05;
      sub_1400519F0(v13, v14);
      v6 = a1;
      ++v12;
    }
    while ( v12 < v11 );
  }
  ++dword_140404A6C[487148677];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (0000000140059920) ----------------------------------------------------
__int64            sub_140059920(__int64 a1, int a2, char *a3)
{
  signed __int64 v3; // r14
  unsigned int v5; // eax
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // r12d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  unsigned int v26; // eax
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  int v32; // edi
  int v33; // ebx
  __int64 v34; // rsi
  float v35; // xmm0_4
  unsigned int v36; // r15d
  unsigned __int64 v37; // rbx
  unsigned int v38; // r12d
  unsigned int v39; // edi
  unsigned int v40; // r14d
  unsigned int *v41; // r13
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rcx
  unsigned int *v45; // rax
  __int64 v46; // r10
  __int64 v47; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140059920[160];
#define v49 (*(__int64 (*))(void *)(sr_frame_140059920 + 8)) /* [rsp+8h] */
#define v50 (*(float (*))(void *)(sr_frame_140059920 + 40)) /* [rsp+28h] */
#define v51 (*(float (*))(void *)(sr_frame_140059920 + 44)) /* [rsp+2Ch] */
#define v52 (*(float (*))(void *)(sr_frame_140059920 + 48)) /* [rsp+30h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_140059920 + 56)) /* [rsp+38h] */
#define v54 (*(signed __int64 (*))(void *)(sr_frame_140059920 + 64)) /* [rsp+40h] */
#define v55 (*(char * (*))(void *)(sr_frame_140059920 + 72)) /* [rsp+48h] */
#define v56 (*(_OWORD (*)[2])(void *)(sr_frame_140059920 + 80)) /* [rsp+50h] */
#define v57 (*(int (*))(void *)(sr_frame_140059920 + 112)) /* [rsp+70h] */
#define v58 (*(_DWORD (*)[8])(void *)(sr_frame_140059920 + 120)) /* [rsp+78h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_140059920 + 152)) /* [rsp+98h] */

  v3 = a2;
  v55 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    LODWORD(v53) = v5;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( (unsigned int)v8 >= 2 )
      {
        v12 = 250 * (rand() % 5 + 4);
        if ( v7 > 1 )
          v12 += 250 * (rand() % 5);
        if ( v9 == 23 )
          v12 *= 4;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 100;
      }
      v58[v7] = v11;
      ++v8;
      ++v7;
    }
    while ( v8 < (int)v3 );
    v54 = v3;
    if ( (_DWORD)v3 )
    {
      v13 = 0;
      v14 = a3 - (char *)&dword_140404A6C[487148744];
      do
      {
        v15 = &dword_140404A6C[v13 + 487148744];
        v16 = *(int *)((char *)v15 + v14);
        v56[0] = xmmword_140278D30;
        v56[1] = xmmword_140278D30;
        v57 = 1065353216;
        v17 = *(float *)&dword_140404A6C[5873 * v16 + 283831498];
        v18 = *(float *)&dword_140404A6C[5873 * v16 + 283831499];
        v19 = *(float *)&dword_140404A6C[5873 * v16 + 283831500];
        sub_14007B2A0(
          (__int64)v56,
          (float *)v56 + 3,
          sr_export_float_lane_container((unsigned __int64)dword_140404A6C[5873 * v16 + 283831497]));
        sub_14007B2A0((__int64)v56, (float *)v56 + 3, sr_export_float_lane_container(1078530011));
        v20 = *(float *)v56;
        v21 = *((float *)v56 + 1);
        v22 = *((float *)v56 + 2);
        v23 = (float)(*(float *)v56 * 0.5) + v17;
        v50 = v23;
        v24 = (float)(*((float *)v56 + 1) * 0.5) + v18;
        v25 = (float)(*((float *)v56 + 2) * 0.5) + v19;
        v51 = v24;
        v52 = v25;
        if ( v13 >= 2 )
        {
          if ( v6 < 3 )
          {
            v32 = rand() % 5 + 4;
            if ( v9 == 23 )
              v32 += rand() % 3 + 2;
            v33 = 0;
            if ( v32 > 0 )
            {
              v34 = 5873 * v16;
              do
              {
                if ( (v33 & 3) == 0 )
                {
                  v50 = v23 + (float)(v20 * 0.75);
                  v51 = v24 + (float)(v21 * 0.75);
                  v52 = v25 + (float)(v22 * 0.75);
                  sr_CreateItem(15, &v50, nullptr, (float *)v56);
                  v23 = (float)(*(float *)v56 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
                  v24 = (float)(*((float *)v56 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
                  v25 = (float)(*((float *)v56 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
                  v50 = v23;
                  v51 = v24;
                  v52 = v25;
                }
                sr_CreateItem(17, &v50, nullptr, (float *)v56);
                v20 = *(float *)v56;
                v21 = *((float *)v56 + 1);
                v35 = *(float *)v56;
                v22 = *((float *)v56 + 2);
                ++v33;
                dword_140404A6C[v34 + 283831504] -= 250;
                v23 = v23 + (float)(v35 * 0.5);
                v50 = v23;
                v24 = v24 + (float)(v21 * 0.5);
                v51 = v24;
                v25 = v25 + (float)(v22 * 0.5);
                v52 = v25;
              }
              while ( v33 < v32 );
            }
          }
        }
        else
        {
          v26 = sr_CreateItem(v9, &v50, nullptr, (float *)v56);
          v27 = *(float *)v56;
          v28 = *(float *)v56;
          *v15 = v26;
          dword_140404A6C[5873 * v16 + 283831504] -= v58[v13];
          v29 = (float)((float)(v28 * 0.5) + v23) + (float)(v27 * 0.75);
          v50 = v29;
          v30 = (float)((float)(*((float *)v56 + 1) * 0.5) + v24) + (float)(*((float *)v56 + 1) * 0.75);
          v51 = v30;
          v31 = (float)((float)(*((float *)v56 + 2) * 0.5) + v25) + (float)(*((float *)v56 + 2) * 0.75);
          v52 = v31;
          sr_CreateItem(15, &v50, nullptr, (float *)v56);
          v50 = (float)(*(float *)v56 * 0.75) + v29;
          v51 = (float)(*((float *)v56 + 1) * 0.75) + v30;
          v52 = (float)(*((float *)v56 + 2) * 0.75) + v31;
        }
        ++v6;
        ++v13;
      }
      while ( (__int64)v13 < v54 );
      v36 = dword_140404A6C[487148744];
      v37 = 0;
      v38 = dword_140404A6C[487148745];
      v39 = 0;
      v40 = dword_140404A6C[487148677];
      v41 = (unsigned int *)v55;
      v50 = *(float *)&dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
      do
      {
        v42 = (int)v41[v37];
        v43 = 0;
        v44 = 0;
        v45 = &dword_140404A6C[5873 * v42 + 283831867];
        while ( *(v45 - 279) )
        {
          if ( !*v45 )
          {
            ++v44;
            ++v43;
            break;
          }
          if ( !v45[279] )
          {
            v44 += 2;
            v43 += 2;
            break;
          }
          if ( !v45[558] )
          {
            v44 += 3;
            v43 += 3;
            break;
          }
          v44 += 4;
          v45 += 1116;
          v43 += 4;
          if ( v44 >= 16 )
            break;
        }
        v46 = 279 * v44;
        v47 = 23492 * v42 + 1116 * v44;
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v47) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v47) = v40;
        if ( v37 >= 2 )
        {
          if ( v39 < 3 )
            *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 8;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 7;
        }
        *(float *)((char *)&dword_140404A6C[283831603] + v47) = v50;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v47) = v58[v37];
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v47) = v53;
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v47) = v36;
        *(unsigned int *)((char *)&dword_140404A6C[283831593] + v47) = v38;
        if ( v37 >= 2 )
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = *v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831596] + v47) = v41[1];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
          if ( v39 < 3 )
            dword_140404A6C[5873 * v42 + 283831607 + v46] = -dword_140404A6C[5873 * v42 + 283831504];
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = v41[2];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
        }
        sub_1400519F0(v42, v43);
        ++v39;
        ++v37;
      }
      while ( (__int64)v37 < v54 );
    }
    else
    {
      v40 = dword_140404A6C[487148677];
    }
    dword_140404A6C[487148677] = v40 + 1;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;
// 1B4657D90: using guessed type unsigned int;

//----- (000000014005A0E0) ----------------------------------------------------
__int64            sub_14005A0E0(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3; // r14
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  int v8; // r15d
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  unsigned int v26; // xmm1_4
  signed int v27; // eax
  signed int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // rbx
  bool v31; // zf
  unsigned int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  int v38; // edi
  int i; // ebx
  float v40; // xmm0_4
  unsigned int v41; // esi
  unsigned int v42; // edi
  __int64 v43; // rbx
  unsigned int v44; // r13d
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int *v47; // r10
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  unsigned int *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A0E0[160];
#define v55 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 8)) /* [rsp+8h] */
#define v56 (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 40)) /* [rsp+28h] */
#define v57 (*(float (*))(void *)(sr_frame_14005A0E0 + 48)) /* [rsp+30h] */
#define v58 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 56)) /* [rsp+38h] */
#define v59 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 60)) /* [rsp+3Ch] */
#define v60 (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 64)) /* [rsp+40h] */
#define v61 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 72)) /* [rsp+48h] */
#define v62 (*(_OWORD (*)[2])(void *)(sr_frame_14005A0E0 + 80)) /* [rsp+50h] */
#define v63 (*(int (*))(void *)(sr_frame_14005A0E0 + 112)) /* [rsp+70h] */
#define v64 (*(_DWORD (*)[8])(void *)(sr_frame_14005A0E0 + 120)) /* [rsp+78h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 152)) /* [rsp+98h] */

  v3 = a2;
  v60 = a3;
  if ( a2 < 2 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v4 = a2 - 1;
  v5 = 2 - ((rand() & 3) != 0);
  if ( v5 <= (int)v3 - 1 )
    v4 = v5;
  v6 = dword_140404A6C[179992853] + 414000;
  if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
    v6 = 3870000;
  v59 = v6;
  v7 = 0;
  v8 = dword_140404A6C[487148678] + 19;
  v9 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v9 = 0;
  dword_140404A6C[487148678] = v9;
  if ( (rand() & 3) != 0 )
  {
    v10 = rand();
    v11 = v10 & 0x80000007;
    v58 = v10 & 0x80000007;
    if ( v10 >= 0 )
      goto LABEL_13;
    v11 = (((_BYTE)v11 - 1) | 0xFFFFFFF8) + 1;
  }
  else
  {
    v11 = -1;
  }
  v58 = v11;
LABEL_13:
  v12 = v4;
  v13 = 0;
  do
  {
    if ( v7 )
    {
      v14 = 250 * (rand() % 5 + 4);
      v64[v13] = v14;
      if ( v13 > v12 )
      {
        v14 += 250 * (rand() % 5);
        v64[v13] = v14;
      }
      if ( v8 == 23 )
        v64[v13] = 4 * v14;
    }
    else
    {
      v64[v13] = 100;
    }
    ++v7;
    ++v13;
  }
  while ( v7 < (int)v3 );
  v61 = v3;
  if ( (_DWORD)v3 )
  {
    v15 = 0;
    do
    {
      v63 = 1065353216;
      v62[0] = xmmword_140278D30;
      v16 = 5873LL * (int)v60[v15];
      v62[1] = xmmword_140278D30;
      v17 = *(float *)&dword_140404A6C[v16 + 283831498];
      v18 = *(float *)&dword_140404A6C[v16 + 283831499];
      v19 = *(float *)&dword_140404A6C[v16 + 283831500];
      sub_14007B2A0((__int64)v62, (float *)v62 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v16 + 283831497]));
      sub_14007B2A0((__int64)v62, (float *)v62 + 3, sr_export_float_lane_container(1078530011));
      v20 = *(float *)v62;
      v21 = *((float *)v62 + 1);
      v22 = *((float *)v62 + 2);
      v23 = (float)(*(float *)v62 * 0.5) + v17;
      *(float *)&v56 = v23;
      v24 = (float)(*((float *)v62 + 1) * 0.5) + v18;
      v25 = (float)(*((float *)v62 + 2) * 0.5) + v19;
      *((float *)&v56 + 1) = v24;
      v57 = v25;
      if ( v15 )
      {
        if ( v15 <= v12 )
        {
          v38 = rand() % 3 + 2;
          if ( v8 == 23 )
            v38 += rand() % 3 + 2;
          for ( i = 0; i < v38; v57 = v25 )
          {
            if ( (i & 3) == 0 )
            {
              *(float *)&v56 = v23 + (float)(v20 * 0.75);
              *((float *)&v56 + 1) = v24 + (float)(v21 * 0.75);
              v57 = v25 + (float)(v22 * 0.75);
              sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
              v23 = (float)(*(float *)v62 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
              v24 = (float)(*((float *)v62 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
              v25 = (float)(*((float *)v62 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
              *(float *)&v56 = v23;
              *((float *)&v56 + 1) = v24;
              v57 = v25;
            }
            sr_CreateItem(17, (float *)&v56, nullptr, (float *)v62);
            v20 = *(float *)v62;
            v21 = *((float *)v62 + 1);
            v40 = *(float *)v62;
            v22 = *((float *)v62 + 2);
            ++i;
            dword_140404A6C[v16 + 283831504] -= 250;
            v23 = v23 + (float)(v40 * 0.5);
            *(float *)&v56 = v23;
            v24 = v24 + (float)(v21 * 0.5);
            *((float *)&v56 + 1) = v24;
            v25 = v25 + (float)(v22 * 0.5);
          }
        }
      }
      else if ( v11 == -1 )
      {
        v32 = sr_CreateItem(v8, (float *)&v56, nullptr, (float *)v62);
        v33 = *(float *)v62;
        v34 = *(float *)v62;
        dword_140404A6C[487148744] = v32;
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v35 = (float)((float)(v34 * 0.5) + v23) + (float)(v33 * 0.75);
        *(float *)&v56 = v35;
        v36 = (float)((float)(*((float *)v62 + 1) * 0.5) + v24) + (float)(*((float *)v62 + 1) * 0.75);
        *((float *)&v56 + 1) = v36;
        v37 = (float)((float)(*((float *)v62 + 2) * 0.5) + v25) + (float)(*((float *)v62 + 2) * 0.75);
        v57 = v37;
        sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
        *(float *)&v56 = (float)(*(float *)v62 * 0.75) + v35;
        *((float *)&v56 + 1) = (float)(*((float *)v62 + 1) * 0.75) + v36;
        v57 = (float)(*((float *)v62 + 2) * 0.75) + v37;
      }
      else
      {
        v26 = dword_140404A6C[19 * v11 + 487148757];
        LODWORD(v56) = dword_140404A6C[19 * v11 + 487148756];
        v57 = *(float *)&dword_140404A6C[19 * v11 + 487148758];
        HIDWORD(v56) = v26;
        dword_140404A6C[487148744] = sr_CreateItem(v8, (float *)&v56, nullptr, (float *)v62);
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v27 = sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
        v28 = dword_140404A6C[487148744];
        v29 = v27;
        v30 = 1760LL * v27;
        dword_140404A6C[v30 + 278845898] = 16;
        sub_1400E35D0(v27, v28, -1, 0);
        v31 = dword_140404A6C[456202453] == 0;
        dword_140404A6C[v30 + 278845898] = 15;
        if ( !v31 && (unsigned int)v29 <= 0x3FF )
          ++dword_140404A6C[v29 + 280648157];
      }
      ++v15;
    }
    while ( v15 < v61 );
    v41 = dword_140404A6C[487148744];
    v42 = dword_140404A6C[487148677];
    v43 = 0;
    v44 = v58;
    v45 = v59;
    v56 = &dword_140404A6C[283831867];
    v46 = dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
    do
    {
      v47 = v60;
      v48 = 0;
      v49 = 0;
      v50 = (int)v60[v43];
      v51 = &v56[5873 * v50];
      while ( *(v51 - 279) )
      {
        if ( !*v51 )
        {
          ++v49;
          ++v48;
          break;
        }
        if ( !v51[279] )
        {
          v49 += 2;
          v48 += 2;
          break;
        }
        if ( !v51[558] )
        {
          v49 += 3;
          v48 += 3;
          break;
        }
        v49 += 4;
        v51 += 1116;
        v48 += 4;
        if ( v49 >= 16 )
          break;
      }
      v52 = 5873LL * (int)v60[v43];
      v53 = v52 * 4 + 1116 * v49;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v53) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v53) = v42;
      if ( v43 )
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = (v43 > v12) + 3;
      else
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v53) = v64[v43];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v53) = v41;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v53) = v46;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v53) = v45;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v53) = *v47;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = -1;
      if ( v43 )
      {
        if ( v43 <= v12 )
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = -dword_140404A6C[v52 + 283831504];
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = v44;
      }
      sub_1400519F0(v50, v48);
      ++v43;
    }
    while ( v43 < v61 );
  }
  else
  {
    v42 = dword_140404A6C[487148677];
  }
  dword_140404A6C[487148677] = v42 + 1;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (000000014005A990) ----------------------------------------------------
__int64            sub_14005A990(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 i; // rbx
  __int64 v13; // rax
  int v14; // ecx
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned int *v25; // rbx
  unsigned int *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  float v31; // xmm0_4
  int v32; // esi
  __int64 v33; // rdi
  unsigned int v34; // ebx
  float v35; // xmm0_4
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A990[176];
#define v40 (*(__int64 (*))(void *)(sr_frame_14005A990 + 8)) /* [rsp+0h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_14005A990 + 40)) /* [rsp+20h] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_14005A990 + 44)) /* [rsp+24h] */
#define v43 (*(int (*))(void *)(sr_frame_14005A990 + 48)) /* [rsp+28h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14005A990 + 56)) /* [rsp+30h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14005A990 + 64)) /* [rsp+38h] */
#define v46 (*(float (*))(void *)(sr_frame_14005A990 + 72)) /* [rsp+40h] */
#define v47 (*(_OWORD (*)[2])(void *)(sr_frame_14005A990 + 80)) /* [rsp+48h] */
#define v48 (*(int (*))(void *)(sr_frame_14005A990 + 112)) /* [rsp+68h] */
#define v49 (*(_DWORD (*)[4])(void *)(sr_frame_14005A990 + 120)) /* [rsp+70h] */
#define v50 (*(_DWORD (*)[8])(void *)(sr_frame_14005A990 + 136)) /* [rsp+80h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14005A990 + 168)) /* [rsp+A0h] */

  v3 = a2;
  v4 = a3;
  v44 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    v41 = v5;
    v7 = 3;
    do
    {
      v8 = dword_140404A6C[487148678];
      v9 = 1000;
      v49[v6] = 1000;
      v10 = v8 + 19;
      v11 = v8 + 1;
      v50[v6] = v10;
      if ( (int)(v11 + 19) > 24 )
        v11 = 0;
      dword_140404A6C[487148678] = v11;
      if ( (rand() & 1) == 0 )
      {
        v9 = 1500;
        v49[v6] = 1500;
      }
      if ( (rand() & 1) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 1000;
        v49[v6] = v9;
      }
      if ( v10 == 23 )
        v49[v6] = 5 * v9;
      ++v6;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < 3; ++i )
    {
      v48 = 1065353216;
      v47[0] = xmmword_140278D30;
      v47[1] = xmmword_140278D30;
      v13 = *(int *)((char *)&v50[i] + v4 - (_QWORD)v50);
      v14 = v50[i];
      v15 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831492]
                  + *(float *)&dword_140404A6C[5873 * v13 + 283831495])
          * 0.5;
      *(float *)&v45 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831494]
                             + *(float *)&dword_140404A6C[5873 * v13 + 283831491])
                     * 0.5;
      v16 = *(float *)&dword_140404A6C[5873 * v13 + 283831493] + *(float *)&dword_140404A6C[5873 * v13 + 283831496];
      *((float *)&v45 + 1) = v15;
      v46 = v16 * 0.5;
      dword_140404A6C[i + 487148744] = sr_CreateItem(v14, (float *)&v45, nullptr, (float *)v47);
      v17 = dword_140404A6C[487148677];
      v50[i + 4] = dword_140404A6C[487148677];
      dword_140404A6C[487148677] = v17 + 1;
    }
    v45 = v3;
    if ( (_DWORD)v3 )
    {
      v43 = v49[2];
      v18 = 0;
      v42 = v50[6];
      do
      {
        v19 = *(int *)(v4 + 4 * v18);
        v20 = v18++;
        v21 = v18;
        if ( v18 >= 3 )
          v21 = v18 % 3uLL;
        v22 = 0;
        v23 = 0;
        v24 = 5873 * v19;
        v25 = &dword_140404A6C[5873 * v19 + 283831867];
        v26 = v25;
        while ( *(v26 - 279) )
        {
          if ( !*v26 )
          {
            ++v23;
            ++v22;
            break;
          }
          if ( !v26[279] )
          {
            v23 += 2;
            v22 += 2;
            break;
          }
          if ( !v26[558] )
          {
            v23 += 3;
            v22 += 3;
            break;
          }
          v23 += 4;
          v26 += 1116;
          v22 += 4;
          if ( v23 >= 16 )
            break;
        }
        sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v22 + 283831588 + v24]), 0, 0x45Cu);
        v27 = v24 * 4 + 1116 * v23;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v27) = v50[v21 + 4];
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v27) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v27) = 6 - (v20 < 3);
        v28 = (int)dword_140404A6C[v21 + 487148744];
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v27) = v28;
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v27) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v27) = dword_140404A6C[1760 * v28 + 278845898];
        LODWORD(v28) = v49[v21];
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v27) = v28;
        v29 = _mm_cvtsi32_si128(v28);
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v27) = v41;
        v30 = v44;
        v31 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
        *(float *)((char *)&dword_140404A6C[283831610] + v27) = v31 * -1.249999968422344e-05;
        *(float *)((char *)&dword_140404A6C[283831609] + v27) = v31 * 2.499999936844688e-05;
        *(unsigned int *)((char *)&dword_140404A6C[283831595] + v27) = *(_DWORD *)(v30 + 4 * v21);
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v27) = 0;
        sub_1400519F0(v19, v22);
        if ( !v20 && (rand() & 7) == 0 )
        {
          v32 = 0;
          v33 = 0;
          while ( *(v25 - 279) )
          {
            if ( !*v25 )
            {
              ++v33;
              ++v32;
              break;
            }
            if ( !v25[279] )
            {
              v33 += 2;
              v32 += 2;
              break;
            }
            if ( !v25[558] )
            {
              v33 += 3;
              v32 += 3;
              break;
            }
            v33 += 4;
            v25 += 1116;
            v32 += 4;
            if ( v33 >= 16 )
              break;
          }
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v32 + 283831588 + v24]), 0, 0x45Cu);
          v34 = v43;
          v35 = (float)v43;
          v36 = 1116 * v33 + 23492 * v19;
          *(unsigned int *)((char *)&dword_140404A6C[283831590] + v36) = v42;
          v37 = dword_140404A6C[487148746];
          v38 = 1760LL * (int)dword_140404A6C[487148746];
          *(float *)((char *)&dword_140404A6C[283831609] + v36) = v35 * 2.499999936844688e-05;
          *(float *)((char *)&dword_140404A6C[283831610] + v36) = v35 * -1.249999968422344e-05;
          *(unsigned int *)((char *)&dword_140404A6C[283831592] + v36) = v37;
          *(unsigned int *)((char *)&dword_140404A6C[283831588] + v36) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v36) = 6;
          *(unsigned int *)((char *)&dword_140404A6C[283831604] + v36) = v34;
          *(unsigned int *)((char *)&dword_140404A6C[283831603] + v36) = dword_140404A6C[v38 + 278845898];
          *(unsigned int *)((char *)&dword_140404A6C[283831605] + v36) = v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v36) = *(_DWORD *)(v44 + 8);
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v36) = 0;
          sub_1400519F0(v19, v32);
        }
        v4 = v44;
      }
      while ( v18 < v45 );
    }
  }
  return 0; /* the function has no caller */
}
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D94: using guessed type unsigned int;

//----- (000000014005AF40) ----------------------------------------------------
void            sub_14005AF40(__int64 a1, int a2, char *a3)
{
  int v5; // edi
  int v6; // ebx
  int v7; // r14d
  int *v8; // rdi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  int v13; // ebx
       char *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // r12d
  _DWORD *v18; // rbx
  __int64 v19; // rax
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  int v26; // edi
  unsigned int v27; // eax
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // ebx
  signed int v31; // r14d
  __int64 v32; // rsi
  int v33; // edi
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r15
  int v37; // r13d
  unsigned __int64 v38; // rax
  int v39; // r14d
  int *v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  unsigned int v47; // eax
  int v48; // r8d
  __int64 v49; // rsi
  _BYTE *v50; // rbx
  int v51; // edi
       char *v52; // rax
  int v53; // r9d
  __int64 v54; // r12
  unsigned int *v55; // rax
  int v56; // r8d
  char *v57; // rbx
  __int64 v59; // rcx
  float v60; // xmm1_4
  unsigned int v61; // eax
  unsigned int v62; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005AF40[1280];
#define v63 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 0)) /* [rsp+8h] */
#define v64 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 64)) /* [rsp+48h] */
#define v65 (*(unsigned __int64 (*))(void *)(sr_frame_14005AF40 + 72)) /* [rsp+50h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 80)) /* [rsp+58h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 88)) /* [rsp+60h] */
#define v68 (*(signed int (*))(void *)(sr_frame_14005AF40 + 96)) /* [rsp+68h] */
#define v69 (*(int (*))(void *)(sr_frame_14005AF40 + 100)) /* [rsp+6Ch] */
#define v70 (*(char * (*))(void *)(sr_frame_14005AF40 + 104)) /* [rsp+70h] */
#define v71 (*(unsigned int * (*))(void *)(sr_frame_14005AF40 + 112)) /* [rsp+78h] */
#define v72 (*(int (*))(void *)(sr_frame_14005AF40 + 120)) /* [rsp+80h] */
#define v73 (*(int (*))(void *)(sr_frame_14005AF40 + 128)) /* [rsp+88h] */
#define v74 (*(int (*))(void *)(sr_frame_14005AF40 + 132)) /* [rsp+8Ch] */
#define v75 (*(_OWORD (*)[2])(void *)(sr_frame_14005AF40 + 160)) /* [rsp+A8h] */
#define v76 (*(int (*))(void *)(sr_frame_14005AF40 + 192)) /* [rsp+C8h] */
#define v77 (*(_DWORD (*)[10])(void *)(sr_frame_14005AF40 + 200)) /* [rsp+D0h] */
#define v78 (*(char (*)[1024])(void *)(sr_frame_14005AF40 + 240)) /* [rsp+F8h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 1264)) /* [rsp+4F8h] */

  if ( a2 < 2 )
    return;
  v71 = (unsigned int *)a3;
  v69 = a2;
  v5 = ((rand() & 1) == 0) + 1;
  v6 = v5;
  if ( a2 > 3 && (rand() & 1) == 0 )
    v6 = v5 + 1;
  v7 = a2 - 1;
  v8 = v77;
  if ( v6 <= a2 - 1 )
    v7 = v6;
  v9 = dword_140404A6C[179992853] + 522000;
  if ( (signed int)(dword_140404A6C[179992853] + 522000) > 3870000 )
    v9 = 3870000;
  v68 = v9;
  v10 = 0;
  v11 = dword_140404A6C[487148678] + 19;
  v12 = dword_140404A6C[487148678] + 1;
  LODWORD(v64) = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v12 = 0;
  dword_140404A6C[487148678] = v12;
  do
  {
    if ( v10 )
    {
      v13 = 2000;
      *v8 = 2000;
      if ( (rand() & 1) == 0 )
      {
        v13 = 2500;
        *v8 = 2500;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( v11 == 23 )
        *v8 = 5 * v13;
    }
    else
    {
      *v8 = 0;
    }
    ++v10;
    ++v8;
  }
  while ( v10 < a2 );
  v14 = (     char *)(a3 - (char *)v77);
  v15 = v7;
  v70 = (     char *)(a3 - (char *)v77);
  v16 = 0;
  v67 = v7;
  v17 = 0;
  do
  {
    v75[0] = xmmword_140278D30;
    v76 = 1065353216;
    v18 = &v77[v16];
    v19 = *(int *)&v14[(_QWORD)v18];
    v75[1] = xmmword_140278D30;
    v20 = *(float *)&dword_140404A6C[5873 * v19 + 283831498];
    v21 = *(float *)&dword_140404A6C[5873 * v19 + 283831499];
    v22 = *(float *)&dword_140404A6C[5873 * v19 + 283831500];
    sub_14007B2A0((__int64)v75, (float *)v75 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(*(float *)&dword_140404A6C[5873 * v19 + 283831497] - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
    v23 = v20 - (float)(*(float *)v75 * 1.5);
    *(float *)&v65 = v23;
    v24 = v21 - (float)(*((float *)v75 + 1) * 1.5);
    *((float *)&v65 + 1) = v24;
    v25 = v22 - (float)(*((float *)v75 + 2) * 1.5);
    *(float *)&v66 = v25;
    if ( !v17 )
    {
      v26 = v64;
      v27 = sr_CreateItem(v64, (float *)&v65, nullptr, (float *)v75);
      v28 = *(float *)v75 * 0.75;
      dword_140404A6C[487148744] = v27;
      v29 = *((float *)v75 + 1) * 0.75;
      *(&v73 + v16) = 0;
      *(float *)&v65 = v28 + v23;
      *((float *)&v65 + 1) = v29 + v24;
      *(float *)&v66 = (float)(*((float *)v75 + 2) * 0.75) + v25;
      goto LABEL_52;
    }
    *(&v73 + v16) = 0;
    if ( v16 <= v15 )
    {
      v30 = *v18 - 500;
      *(&v73 + v16) = v30;
      if ( v30 >= 5000 )
      {
        if ( (rand() & 1) != 0 )
        {
LABEL_33:
          if ( (rand() & 1) != 0 )
            goto LABEL_36;
          v30 -= 1000;
          *(&v73 + v16) = v30;
LABEL_35:
          if ( v30 < 1000 )
          {
LABEL_40:
            if ( v30 > 0 )
            {
              do
              {
                v31 = sr_CreateItem(16, (float *)&v65, nullptr, (float *)v75);
                if ( v31 != -1 )
                {
                  v32 = 4;
                  do
                  {
                    if ( v30 > 0 )
                    {
                      v33 = sr_CreateItem(18, (float *)&v65, nullptr, (float *)v75);
                      v30 -= 100;
                      v34 = 1760LL * v33;
                      dword_140404A6C[v34 + 278846062] = 0;
                      for ( dword_140404A6C[v34 + 278846063] = 5; v30 > 0; v30 -= 100 )
                      {
                        if ( !(unsigned int)sub_1400C3AB0(v33, 0, 5) )
                          break;
                      }
                      sub_1400E35D0(v31, v33, -1, 0);
                    }
                    --v32;
                  }
                  while ( v32 );
                }
                v23 = v23 + (float)(*(float *)v75 * 0.75);
                v24 = v24 + (float)(*((float *)v75 + 1) * 0.75);
                v65 = __PAIR64__(LODWORD(v24), LODWORD(v23));
                v25 = v25 + (float)(*((float *)v75 + 2) * 0.75);
                *(float *)&v66 = v25;
              }
              while ( v30 > 0 );
              v15 = v67;
            }
            goto LABEL_51;
          }
LABEL_36:
          if ( (rand() & 1) != 0 || (*(&v73 + v16) = v30 - 500, v30 -= 500, v30 >= 1000) )
          {
            if ( (rand() & 3) == 0 )
            {
              v30 -= 500;
              *(&v73 + v16) = v30;
            }
          }
          goto LABEL_40;
        }
        v30 -= 2000;
        *(&v73 + v16) = v30;
      }
      if ( v30 < 3000 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_51:
    v26 = v64;
LABEL_52:
    v14 = v70;
    ++v17;
    ++v16;
  }
  while ( v17 < v69 );
  v35 = v74;
  v73 = v74;
  if ( v74 < 5000 )
    goto LABEL_56;
  if ( (rand() & 1) != 0 )
    goto LABEL_57;
  v35 -= 2000;
  v73 = v35;
LABEL_56:
  if ( v35 >= 3000 )
  {
LABEL_57:
    if ( (rand() & 1) == 0 )
    {
      v35 -= 1000;
      v73 = v35;
      goto LABEL_59;
    }
LABEL_60:
    if ( (rand() & 3) == 3 || (v35 -= 500, v73 = v35, v35 >= 1000) )
    {
      if ( (rand() & 1) == 0 )
        v73 = v35 - 500;
    }
  }
  else
  {
LABEL_59:
    if ( v35 >= 1000 )
      goto LABEL_60;
  }
  v36 = 0;
  v37 = 0;
  v70 = (     char *)&dword_140404A6C[1268 * v26 + 278521297];
  LODWORD(v64) = v68 / 3600;
  v38 = (char *)v71 - (char *)v77;
  v65 = (char *)v71 - (char *)v77;
  do
  {
    v39 = 0;
    v40 = &v77[v36];
    v41 = 0;
    v42 = *(int *)((char *)v40 + v38);
    v72 = v42;
    v43 = v42;
    v44 = &dword_140404A6C[5873 * v42 + 283831867];
    while ( *(v44 - 279) )
    {
      if ( !*v44 )
      {
        ++v41;
        ++v39;
        break;
      }
      if ( !v44[279] )
      {
        v41 += 2;
        v39 += 2;
        break;
      }
      if ( !v44[558] )
      {
        v41 += 3;
        v39 += 3;
        break;
      }
      v41 += 4;
      v44 += 1116;
      v39 += 4;
      if ( v41 >= 16 )
        break;
    }
    v45 = 23492 * v43;
    v46 = 23492 * v43 + 1116LL * v39;
    sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v46)), 0, 0x45Cu);
    v47 = dword_140404A6C[487148677];
    v48 = v39 + 1;
    v49 = v45 + 1116 * v41;
    v50 = (char *)&dword_140404A6C[283831611] + v46;
    v51 = *v40;
    *(unsigned int *)((char *)&dword_140404A6C[283831588] + v49) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[283831590] + v49) = v47;
    if ( v37 )
    {
      v54 = v67;
      v55 = v71;
      if ( v36 > v67 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 4;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Acquire the disk by any means neccessary.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          v70,
          v51);
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 3;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Negotiate the best terms and execute the deal.\n"
          "You have been provided with $%d.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          *(&v73 + v36),
          v70,
          v51);
      }
    }
    else
    {
      v52 = v70;
      v53 = *(&v73 + v36);
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 2;
      sub_140158AB0(
        v50,
        "Transaction(%d):\n"
        "We have acquired a disk that has information that can be\n"
        "traded for money with another corporation.\n"
        "The corporation expects at least $%d from this deal.\n"
        "\n"
        "%s value:               $%d Bonus",
        v48,
        v53,
        v52,
        v51);
      v54 = v67;
    }
    v56 = (int)v64 / 60 % -12;
    if ( !v56 )
      v56 = 12;
    sub_140158AB0(v78, "\nThis mission expires at %d:%d%d\n\n", v56, (int)v64 % 60 / 10 % 6, (int)v64 % 60 % 10);
    v57 = v50 - 1;
    while ( *++v57 != 0 )
      ;
    strcpy(v57, v78);
    sub_140051BD0(v72, v39);
    v59 = 1760LL * (int)dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831592] + v49) = dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831606] + v49) = -1;
    *(unsigned int *)((char *)&dword_140404A6C[283831603] + v49) = dword_140404A6C[v59 + 278845898];
    if ( v37 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = v51;
      v60 = (float)v51 * -1.249999968422344e-05;
      *(float *)((char *)&dword_140404A6C[283831609] + v49) = (float)v51 * 2.499999936844688e-05;
    }
    else
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = 0;
      v60 = 0.0;
      *(unsigned int *)((char *)&dword_140404A6C[283831609] + v49) = 0;
    }
    v61 = v68;
    *(float *)((char *)&dword_140404A6C[283831610] + v49) = v60;
    ++v37;
    *(unsigned int *)((char *)&dword_140404A6C[283831605] + v49) = v61;
    v67 = v54;
    *(unsigned int *)((char *)&dword_140404A6C[283831595] + v49) = *v71;
    v62 = *(&v73 + v36++);
    *(unsigned int *)((char *)&dword_140404A6C[283831607] + v49) = v62;
    v38 = v65;
  }
  while ( v37 < v69 );
  ++dword_140404A6C[487148677];
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (000000014005D550) ----------------------------------------------------
__int64            sub_14005D550(int a1)
{
  __int64 v1; // r13
  int v2; // r12d
  signed int v3; // r14d
  int v4; // r15d
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  float v13; // xmm1_4
  double v14; // xmm2_8
  float v15; // xmm0_4
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // xmm0_4
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D550[624];
#define v25 (*(__int64 (*))(void *)(sr_frame_14005D550 + 8)) /* [rsp+0h] */
#define v26 (*(float (*)[4])(void *)(sr_frame_14005D550 + 40)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_14005D550 + 56)) /* [rsp+30h] */
#define v28 (*(__int128 (*))(void *)(sr_frame_14005D550 + 64)) /* [rsp+38h] */
#define v29 (*(__int128 (*))(void *)(sr_frame_14005D550 + 80)) /* [rsp+48h] */
#define v30 (*(int (*))(void *)(sr_frame_14005D550 + 96)) /* [rsp+58h] */
#define v31 (*(char (*)[512])(void *)(sr_frame_14005D550 + 104)) /* [rsp+60h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_14005D550 + 616)) /* [rsp+260h] */

  v1 = a1;
  v2 = sub_14024C22C("data");
  v3 = 0;
  v4 = sub_14024C22C("mission");
  v5 = 0;
  do
  {
    v6 = aTestSrm[v5];
    v31[v5++] = v6;
  }
  while ( v6 );
  v7 = sub_14020B8D8(v31, "rb");
  v8 = v7;
  if ( v7 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v7));
    if ( Buffer != 1 )
    {
      sub_14020B9E8(v8);
      goto LABEL_14;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[486132853]), 4, 1, (FILE *)(uintptr_t)(v8));
    v9 = 0;
    if ( (int)dword_140404A6C[486132853] > 0 )
    {
      do
      {
        v10 = 4LL * v9;
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 486132854]), 4, 3, (FILE *)(uintptr_t)(v8));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 486132857]), 4, 1, (FILE *)(uintptr_t)(v8));
        ++v9;
      }
      while ( v9 < (int)dword_140404A6C[486132853] );
      v3 = 0;
    }
    sub_14020B9E8(v8);
  }
  if ( !v4 )
    sub_14024C22C("..");
  if ( !v2 )
    sub_14024C22C("..");
LABEL_14:
  v11 = 1025 * v1;
  if ( (int)dword_140404A6C[1025 * v1 + 486132853] > 0 )
  {
    v12 = &dword_140404A6C[v11 + 486132856];
    do
    {
      v13 = *((float *)v12 - 1);
      *(_QWORD *)&v14 = v12[1];
      LODWORD(v26[0]) = *(v12 - 2);
      v15 = *(float *)v12;
      v26[1] = v13;
      v26[2] = v15;
      v28 = xmmword_140278D30;
      v30 = 1065353216;
      v29 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v28, (float *)&v28 + 3, v14);
      v16 = (int)sub_14005CCF0();
      v17 = 3597 * v16;
      dword_140404A6C[v17 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v16 + 71856254], Parameters);
      dword_140404A6C[v17 + 71859139] = 1;
      dword_140404A6C[v17 + 71859816] = 1;
      dword_140404A6C[v17 + 71859821] = 3;
      dword_140404A6C[v17 + 71859822] = 1;
      v28 = xmmword_140278D30;
      v30 = 1065353216;
      v29 = xmmword_140278D30;
      v18 = sub_140053840(v26, (float *)&v28, v16);
      v19 = v12[1];
      dword_140404A6C[v17 + 71856292] = v18;
      dword_140404A6C[v17 + 71859143] = v19;
      dword_140404A6C[7166 * v18 + 280651341] = v19;
      sub_140051DC0(v16);
      v20 = sr_CreateItem(1, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v20, -1, dword_140404A6C[3597 * v16 + 71856292], 0);
      v21 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v21, -1, dword_140404A6C[3597 * v16 + 71856292], 1);
      v22 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v22, -1, dword_140404A6C[3597 * v16 + 71856292], 3);
      v23 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v23, -1, dword_140404A6C[3597 * v16 + 71856292], 3);
      ++v3;
      v12 += 4;
    }
    while ( v3 < (int)dword_140404A6C[v11 + 486132853] );
  }
  return 0; /* the function has no caller */
}
#undef v25
#undef v26
#undef Buffer
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005E520) ----------------------------------------------------
__int64 sub_14005E520()
{
  signed int v0; // r8d
  unsigned int *v1; // r10
  int v2; // r9d
  signed int v3; // edi
  int v4; // r11d
  int v5; // ebx
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  unsigned int *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r9d
  int v18; // ebx
  int v19; // esi
  unsigned int v20; // edi
  signed int v21; // edx
  unsigned int *v22; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E520[80];
#define v24 (*(__int64 (*))(void *)(sr_frame_14005E520 + 0)) /* [rsp+0h] */
#define v25 (*(unsigned int (*)[8])(void *)(sr_frame_14005E520 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14005E520 + 64)) /* [rsp+40h] */

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  v3 = 0;
  dword_140404A6C[487148754] = 0;
  dword_140404A6C[283831504] = 0;
  v4 = 0;
  dword_140404A6C[283837377] = 0;
  dword_140404A6C[283843250] = 0;
  dword_140404A6C[487148679] = 0;
  do
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = v4;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    ++v4;
    v1 += 5873;
  }
  while ( v4 < 3 );
  if ( v3 > 0 )
    v2 /= v3;
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( v3 )
  {
    if ( v3 > 1 )
    {
      v12 = 1024;
      do
      {
        v13 = rand() % (signed int)dword_140404A6C[487148679];
        v14 = rand();
        v15 = &dword_140404A6C[v13 + 487148677];
        v16 = v14 % (signed int)dword_140404A6C[487148679];
        v17 = dword_140404A6C[v16 + 487148680];
        dword_140404A6C[v16 + 487148680] = v15[3];
        v15[3] = v17;
        --v12;
      }
      while ( v12 );
      v3 = dword_140404A6C[487148679];
    }
    while ( 1 )
    {
      v18 = v3;
      if ( v3 > 0 )
        sub_1401FC920((__m128i *)v25, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
      v19 = 1;
      if ( v3 >= 2 && (rand() & 7u) < 6 )
      {
        v19 = 0;
        if ( (rand() & 1) == 0 && v3 > 3 )
          v18 = 3;
        if ( (rand() & 0xF) == 0 && v18 > 2 )
          break;
      }
      if ( v18 != 3 || (rand() & 3) != 0 )
      {
        if ( v19 == 1 )
        {
          if ( (rand() & 3u) < 2 && v18 > 3 )
            v18 = 3;
          if ( (rand() & 3) == 0 && v18 > 2 )
            v18 = 2;
          if ( (rand() & 3) == 0 && v18 > 1 )
            v18 = 1;
          sub_140059640(1u, v18, (__int64)v25);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      sub_140059920(3, 3, (char *)v25);
LABEL_56:
      v20 = dword_140404A6C[487148679];
      ++dword_140404A6C[283785906];
      v21 = 0;
      if ( (signed int)(dword_140404A6C[487148679] - v18) > 0 )
      {
        v22 = &dword_140404A6C[487148680];
        do
        {
          ++v21;
          *v22 = v22[v18];
          ++v22;
          v20 = dword_140404A6C[487148679];
        }
        while ( v21 < (signed int)(dword_140404A6C[487148679] - v18) );
      }
      v3 = v20 - v18;
      dword_140404A6C[487148679] = v3;
      if ( v3 <= 0 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v18 = 2;
LABEL_55:
    sub_14005A0E0(0, v18, v25);
    goto LABEL_56;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v24
#undef v25
#undef v26

// 14005E7C2: conditional instruction was optimized away because esi.4==0
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 183E93534: using guessed type unsigned int;
// 183EBFDAC: using guessed type unsigned int;
// 183EC5970: using guessed type unsigned int;
// 183ECB534: using guessed type unsigned int;
// 1B4657C88: using guessed type unsigned int;
// 1B4657DB4: using guessed type unsigned int;

//----- (000000014005E860) ----------------------------------------------------
__int64 sub_14005E860()
{
  int v0; // r9d
  unsigned int *v1; // r10
  int v2; // r11d
  signed int v3; // r8d
  int i; // ebx
  int v5; // edi
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // r9d
  int v24; // ebx
  unsigned int v25; // r8d
  signed int v26; // edx
  unsigned int *v27; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E860[80];
#define v29 (*(__int64 (*))(void *)(sr_frame_14005E860 + 0)) /* [rsp+0h] */
#define v30 (*(__m128i (*)[2])(void *)(sr_frame_14005E860 + 32)) /* [rsp+20h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_14005E860 + 64)) /* [rsp+40h] */

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  dword_140404A6C[487148754] = 0;
  v3 = 0;
  dword_140404A6C[487148679] = 0;
  for ( i = 0; i < 6; ++i )
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = i;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    v1 += 5873;
  }
  if ( v3 > 0 )
    v2 /= v3;
  v12 = dword_140404A6C[283831474];
  v13 = dword_140404A6C[456202453];
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( !dword_140404A6C[283831506] )
  {
    if ( dword_140404A6C[456202453] )
    {
      v14 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v14) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v14) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v14) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v14) = 1;
    }
    dword_140404A6C[283831509] = 1;
  }
  if ( !dword_140404A6C[283837379] )
  {
    if ( v13 )
    {
      v15 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v15) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v15) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15) = 1;
    }
    dword_140404A6C[283837382] = 1;
  }
  if ( !dword_140404A6C[283843252] )
  {
    if ( v13 )
    {
      v16 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v16) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v16) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v16) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v16) = 1;
    }
    dword_140404A6C[283843255] = 1;
  }
  if ( !dword_140404A6C[283849125] )
  {
    if ( v13 )
    {
      v17 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v17) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v17) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v17) = 3;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v17) = 1;
    }
    dword_140404A6C[283849128] = 1;
  }
  if ( !dword_140404A6C[283854998] )
  {
    if ( v13 )
    {
      v18 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v18) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v18) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v18) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v18) = 1;
    }
    dword_140404A6C[283855001] = 1;
  }
  if ( !dword_140404A6C[283860871] )
  {
    if ( v13 )
    {
      v19 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v19) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v19) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v19) = 5;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v19) = 1;
    }
    dword_140404A6C[283860874] = 1;
  }
  if ( v3 && v0 <= 3726000 )
  {
    if ( v3 > 1 )
    {
      v20 = 1024;
      do
      {
        v21 = rand() % (signed int)dword_140404A6C[487148679];
        v22 = 4LL * (rand() % (signed int)dword_140404A6C[487148679]) + 1952808076;
        v23 = *(_DWORD *)(v22 + ((intptr_t)dword_140404A6C - 0x404a6cLL));
        *(_DWORD *)(v22 + ((intptr_t)dword_140404A6C - 0x404a6cLL)) = dword_140404A6C[v21 + 487148680];
        dword_140404A6C[v21 + 487148680] = v23;
        --v20;
      }
      while ( v20 );
      v3 = dword_140404A6C[487148679];
    }
    do
    {
      v24 = v3;
      if ( v3 > 0 )
        sub_1401FC920(v30, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
      if ( (rand() & 3u) < 2 && v24 > 3 )
        v24 = 3;
      if ( (rand() & 3) == 0 && v24 > 2 )
        v24 = 2;
      if ( (rand() & 3) == 0 && v24 > 1 )
        v24 = 1;
      sub_1400589A0(0, v24, (__int64)v30);
      v25 = dword_140404A6C[487148679];
      v26 = 0;
      ++dword_140404A6C[283785906];
      if ( (signed int)(dword_140404A6C[487148679] - v24) > 0 )
      {
        v27 = &dword_140404A6C[487148680];
        do
        {
          ++v26;
          *v27 = v27[v24];
          ++v27;
          v25 = dword_140404A6C[487148679];
        }
        while ( v26 < (signed int)(dword_140404A6C[487148679] - v24) );
      }
      v3 = v25 - v24;
      dword_140404A6C[487148679] = v3;
    }
    while ( v3 > 0 );
  }
  return 0; /* the function has no caller */
}
#undef v29
#undef v30
#undef v31

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 183E93534: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFDC0: using guessed type unsigned int;
// 183EC5984: using guessed type unsigned int;
// 183ECB548: using guessed type unsigned int;
// 183ED110C: using guessed type unsigned int;
// 183ED6CD0: using guessed type unsigned int;
// 183EDC894: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1B4657C88: using guessed type unsigned int;
// 1B4657DB4: using guessed type unsigned int;

//----- (00000001400E7270) ----------------------------------------------------
__int64            sub_1400E7270(int a1, char *a2)
{
  __int64 v2; // rsi
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int *v11; // rbp
  signed int i; // esi
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7270[576];
#define v15 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 0)) /* [rsp+0h] */
#define Buffer (*(_DWORD (*)[4])(void *)(sr_frame_1400E7270 + 32)) /* [rsp+20h] */
#define v17 (*(char (*)[512])(void *)(sr_frame_1400E7270 + 48)) /* [rsp+30h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_1400E7270 + 560)) /* [rsp+230h] */

  v2 = a1;
  v4 = sub_14024C22C("data");
  v5 = sub_14024C22C("mission");
  v6 = v17 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = sub_14020B8D8(v17, "rb");
  v9 = v8;
  if ( v8 )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 4, 1, (FILE *)(uintptr_t)(v8));
    if ( Buffer[0] != 1 )
    {
      sub_14020B9E8(v9);
      return 0; /* the function has no caller */
    }
    v10 = 4100 * v2;
    v11 = &dword_140404A6C[1025 * v2 + 486132853];
    fread_sr((void *)(uintptr_t)(v11), 4, 1, (FILE *)(uintptr_t)(v9));
    for ( i = 0; i < (int)*v11; ++i )
    {
      v13 = v10 + 16LL * i;
      fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[486132854] + v13), 4, 3, (FILE *)(uintptr_t)(v9));
      fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[486132857] + v13), 4, 1, (FILE *)(uintptr_t)(v9));
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  return 0; /* the function has no caller */
}
#undef v15
#undef Buffer
#undef v17
#undef v18

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400EFAD0) ----------------------------------------------------
__int64            sub_1400EFAD0(int a1, int a2)
{
  int v2; // edi
  int v3; // r15d
  unsigned int *v4; // rsi
  int v5; // ebx
  float *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EFAD0[16];
#define v18 (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 0)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1400EFAD0 + 8)) /* [rsp+88h] */

  v2 = 0;
  v3 = 0;
  v4 = &dword_140404A6C[278845898];
  v5 = 0;
  v6 = (float *)&dword_140404A6C[278845916];
  v7 = a1;
  v18 = 5873LL * a1;
  v19 = 279LL * a2;
  do
  {
    if ( *(v4 - 5) && sub_14011B960(v6, v7, 0.0) )
    {
      if ( *v4 == 18 )
      {
        v3 += sub_1400C3D10(v5);
      }
      else if ( dword_140404A6C[v19 + 283831591 + v18] && v5 == dword_140404A6C[v19 + 283831592 + v18] )
      {
        v2 = 1;
      }
    }
    ++v5;
    v6 += 1760;
    v4 += 1760;
  }
  while ( v5 < 1024 );
  v8 = v7;
  v9 = 0;
  if ( (int)dword_140404A6C[2570 * v8 + 276011072] > 0 )
  {
    v10 = 0;
    v11 = &dword_140404A6C[2570 * v8 + 276011073];
    while ( *v11 != dword_140404A6C[v19 + 283831594 + v18] )
    {
      ++v9;
      ++v10;
      v11 += 6;
      if ( v10 >= (int)dword_140404A6C[2570 * v8 + 276011072] )
        goto LABEL_17;
    }
    v2 = 1;
  }
LABEL_17:
  v12 = v19 * 4 + v18 * 4;
  v13 = dword_140404A6C[v19 + 283831591 + v18];
  if ( v13 <= 1 )
  {
    if ( v2 )
      v16 = *(int *)((char *)&dword_140404A6C[283831604] + v12) / 10;
    else
      v16 = -10;
    v15 = v3 / 10 + v16;
    if ( v2 )
      return v15;
  }
  else
  {
    v14 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
    if ( v13 == 2 )
    {
      v15 = v14 + 50;
      if ( v14 < 0 )
        v15 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
      if ( v2 )
      {
        if ( (int)v15 >= -10 )
          v15 += 10;
        else
          return (unsigned int)-10;
        return v15;
      }
    }
    else
    {
      v15 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
      if ( v2 )
        return (unsigned int)(*(int *)((char *)&dword_140404A6C[283831604] + v12) / 10 + v14);
    }
  }
  if ( v3 > 0 )
    return v15;
  result = 4294957296LL;
  if ( (int)dword_140404A6C[179992853] > *(int *)((char *)&dword_140404A6C[283831605] + v12) )
    return v15;
  return result;
}
#undef v18
#undef v19

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F4D00) ----------------------------------------------------
__int64            sub_1400F4D00(int a1, int a2)
{
  int v2; // r15d
  unsigned int *v3; // r13
  __int64 v4; // r9
  unsigned int *v5; // rcx
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // r12d
  unsigned int *v10; // rbx
  __int64 v11; // rax
  char *v12; // rbp
  unsigned int v13; // r14d
  signed int v14; // esi
  unsigned int *v15; // rdi
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  float *v21; // r12
  float v22; // xmm0_4
  signed int v23; // edi
  unsigned int *v24; // rbx
  unsigned int v25; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F4D00[208];
#define v27 (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 0)) /* [rsp+20h] */
#define v29 (*(unsigned int (*))(void *)(sr_frame_1400F4D00 + 184)) /* [rsp+D8h] */
#define v30 (*(unsigned int * (*))(void *)(sr_frame_1400F4D00 + 192)) /* [rsp+E0h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_1400F4D00 + 200)) /* [rsp+E8h] */

  v2 = 0;
  v3 = &dword_140404A6C[335047062];
  v4 = a1;
  v5 = &dword_140404A6C[283831590];
  v30 = &dword_140404A6C[283831590];
  v6 = -(__int64)&dword_140404A6C[283831590];
  v27 = -(__int64)&dword_140404A6C[283831590];
  v7 = dword_140404A6C[5873 * v4 + 283831590 + 279 * a2];
  v8 = 23492 * v4 + 56;
  v31 = v8;
  v29 = v7;
  do
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( !*(v10 - 2) || *(v10 - 1) || *v10 != v7 )
        goto LABEL_37;
      v11 = (int)v10[2];
      if ( (unsigned int)v11 <= 0x3FF )
      {
        dword_140404A6C[1760 * v11 + 278845900] = 0;
        v5 = v30;
      }
      *(v10 - 1) = 1;
      if ( v2 == (_DWORD)v4 )
      {
        v12 = (char *)v5 + v6;
        v13 = dword_140404A6C[283831312];
        v14 = 0;
        v15 = &dword_140404A6C[71856272];
        *(float *)v3 = (float)(*((float *)v10 + 19) + 1.0) * *(float *)v3;
        do
        {
          if ( *(v15 - 19) )
          {
            if ( v15[14] == v2 )
            {
              *v15 += *(_DWORD *)&v12[(_QWORD)v10 + 56];
              if ( v13 == 3 )
                sub_140051F50(v14);
            }
          }
          ++v14;
          v15 += 3597;
        }
        while ( v14 < 256 );
        if ( v10[1] <= 1 )
          *(_OWORD *)(v10 + 21) = xmmword_1402763F0;
        else
          *(_OWORD *)(v10 + 21) = xmmword_140276408;
        strcpy((char *)v10 + 100, "ccess");
        goto LABEL_26;
      }
      if ( *(int *)((char *)v10 + v8) > 0 )
      {
        v16 = v10[1];
        *(float *)v3 = (float)(*((float *)v10 + 20) + 1.0) * *(float *)v3;
        if ( v16 <= 1 )
        {
          qmemcpy(v10 + 21, "Acquisition:  Failed", 20);
        }
        else
        {
          if ( v16 == 2 )
          {
            strcpy((char *)v10 + 84, "Transaction:  Success");
LABEL_26:
            sub_140051BD0(v2, v9);
            LODWORD(v4) = a1;
            v8 = v31;
            v6 = v27;
            goto LABEL_27;
          }
          qmemcpy(v10 + 21, "Transaction:  Failed", 20);
        }
        *((_BYTE *)v10 + 104) = 0;
        goto LABEL_26;
      }
LABEL_27:
      v17 = v10[17];
      if ( v17 > 0 )
      {
        if ( v2 == (_DWORD)v4 && v17 > (int)v10[18] )
          v17 = v10[18];
        v18 = v17 - v3[4];
        v19 = *(v3 - 1);
        if ( v18 < 0 )
          v18 = 0;
        v3[4] = 0;
        if ( v19 > 0 )
          *(float *)v3 = *(float *)v3 - (float)((float)v18 / (float)v19);
        v10[17] = 0;
      }
      v7 = v29;
      v5 = v30;
LABEL_37:
      ++v9;
      v10 += 279;
    }
    while ( v9 < 16 );
    v8 -= 23492;
    v5 += 5873;
    v6 -= 23492;
    v31 = v8;
    ++v2;
    v30 = v5;
    v3 += 6;
    v27 = v6;
  }
  while ( v2 < 6 );
  v20 = 0;
  v21 = (float *)&dword_140404A6C[335047062];
  do
  {
    v22 = *v21;
    if ( *v21 >= 10.0 )
    {
      if ( v22 > 500.0 )
      {
        v23 = 0;
        v24 = &dword_140404A6C[71856288];
        *v21 = v22 * 0.20000000298023224;
        do
        {
          if ( *(v24 - 35) && *(v24 - 2) == v20 )
          {
            v25 = *v24;
            *((_DWORD *)v21 - 1) += 4 * *v24;
            *v24 = 5 * v25;
            sub_140051F50(v23);
          }
          ++v23;
          v24 += 3597;
        }
        while ( v23 < 256 );
      }
    }
    else
    {
      *v21 = 10.0;
    }
    ++v20;
    v21 += 6;
  }
  while ( v20 < 6 );
  return sub_140052090();
}
#undef v27
#undef v29
#undef v30
#undef v31

// 1402763F0: using guessed type __int128 xmmword_1402763F0;
// 140276408: using guessed type __int128 xmmword_140276408;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;

//----- (00000001400F50D0) ----------------------------------------------------
__int64            sub_1400F50D0(int a1, int a2, int a3, int a4)
{
  int v8; // r8d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // kr00_8
  unsigned int *v13; // rax
       char *v14; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F50D0[560];
#define v16 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 0)) /* [rsp+0h] */
#define v17 (*(_BYTE (*)[512])(void *)(sr_frame_1400F50D0 + 32)) /* [rsp+20h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_1400F50D0 + 544)) /* [rsp+220h] */

  v8 = a2 + 1;
  v9 = 1116LL * a2 + 23492LL * a1;
  if ( *(unsigned int *)((char *)&dword_140404A6C[283831591] + v9) <= 1 )
  {
    sub_140158AB0(v17, "Acquisition(%d)", v8);
    if ( a3 )
      LODWORD(v11) = *(int *)((char *)&dword_140404A6C[283831604] + v9) / 10;
    else
      LODWORD(v11) = -10;
    v12 = 1717986919LL * a4;
    goto LABEL_15;
  }
  sub_140158AB0(v17, "Transaction(%d)", v8);
  v10 = a4 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v9) / 10;
  if ( *(unsigned int *)((char *)&dword_140404A6C[283831591] + v9) != 2 )
  {
    v11 = (unsigned int)v10;
    if ( !a3 )
      goto LABEL_16;
    v12 = 1717986919LL * *(int *)((char *)&dword_140404A6C[283831604] + v9);
LABEL_15:
    v11 = (unsigned int)((HIDWORD(v12) >> 31) + (SHIDWORD(v12) >> 2) + v11);
    goto LABEL_16;
  }
  v11 = (unsigned int)(v10 + 50);
  if ( v10 < 0 )
    v11 = (unsigned int)v10;
  if ( a3 )
  {
    if ( (int)v11 >= -10 )
      v11 = (unsigned int)(v11 + 10);
    else
      v11 = 4294967286LL;
  }
LABEL_16:
  v13 = &dword_140404A6C[71856272];
  do
  {
    if ( *(v13 - 19) && v13[14] == a1 )
    {
      if ( (int)v11 > 0 )
        *v13 += 10 * v11;
      v13[3] += v11;
    }
    v13 += 3597;
  }
  while ( (__int64)v13 < (__int64)&dword_140404A6C[72777104] );
  v14 = "%s: Complete   Rating:  %d";
  if ( (int)dword_140404A6C[179992853] >= *(int *)((char *)&dword_140404A6C[283831605] + v9) )
    v14 = "%s: Expired    Rating:  %d";
  sub_140158AB0((_BYTE *)&dword_140404A6C[283831611] + v9, v14, v17, v11);
  *(unsigned int *)((char *)&dword_140404A6C[283831589] + v9) = 1;
  sub_140051BD0(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v16
#undef v17
#undef v18

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012C6D0) ----------------------------------------------------
__int64            sub_14012C6D0(int a1, char *a2)
{
  __int64 v3; // rsi
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int *v11; // rbp
  signed int i; // esi
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C6D0[576];
#define v15 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 0)) /* [rsp+0h] */
#define v16 (*(int (*)[4])(void *)(sr_frame_14012C6D0 + 32)) /* [rsp+20h] */
#define v17 (*(char (*)[512])(void *)(sr_frame_14012C6D0 + 48)) /* [rsp+30h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_14012C6D0 + 560)) /* [rsp+230h] */

  v3 = a1;
  v4 = sub_14024C22C("data");
  v5 = sub_14024C22C("mission");
  v6 = v17 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = sub_14020B8D8(v17, "wb");
  v9 = v8;
  if ( v8 )
  {
    v16[0] = 1;
    sub_14020CE0C((__int64)v16, 4, 1, v8);
    v10 = 4100 * v3;
    v11 = &dword_140404A6C[1025 * v3 + 486132853];
    sub_14020CE0C((__int64)v11, 4, 1, v9);
    for ( i = 0; i < (int)*v11; ++i )
    {
      v13 = v10 + 16LL * i;
      sub_14020CE0C((__int64)&dword_140404A6C[486132854] + v13, 4, 3, v9);
      sub_14020CE0C((__int64)&dword_140404A6C[486132857] + v13, 4, 1, v9);
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  return 1; /* 0x14012C86B: mov eax, 1 */
}
#undef v15
#undef v16
#undef v17
#undef v18

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012EB50) ----------------------------------------------------
__int64            sub_14012EB50(int a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // r12d
  __int64 v3; // r8
  signed int v4; // edx
  int v5; // eax
  int v6; // r9d
  signed int v7; // r11d
  signed int v8; // esi
  signed int v9; // r15d
  signed int v10; // r13d
  signed int v11; // ecx
  int v12; // edx
  signed int v13; // eax
  int v14; // ecx
  signed int v15; // edx
  int v16; // eax
  signed int v17; // ecx
  int v18; // edx
  signed int v19; // eax
  int v20; // ecx
  signed int v21; // edx
  bool v22; // cc
  signed int v23; // r8d
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  int v35; // eax
  BOOL v36; // ecx
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rcx
  int *v44; // rsi
  int v45; // eax
  int v46; // r10d
  char *v47; // rcx
  char *v48; // rcx
  int v49; // r9d
  char *v50; // rcx
  char *v51; // rcx
  int v52; // ebx
  char *v53; // rcx
  int v54; // ebx
  char *v55; // rcx
  __int64 v56; // rdx
  char v57; // al
  char *v58; // rcx
  __int64 v59; // rdx
  char v60; // al
  int v61; // r13d
  unsigned int *v62; // rax
  signed int v63; // edi
  signed int v64; // esi
  __int64 v65; // rcx
  char *v66; // rdx
  char v67; // al
  signed int v68; // r14d
  __int64 v69; // r8
  unsigned int v70; // r15d
  __int64 v71; // rsi
  char *v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // r8d
  unsigned int v75; // edx
  char *v76; // rcx
  char *v77; // rcx
  __int64 v78; // rdx
  char v79; // al
  __int64 v80; // rcx
  unsigned int v81; // r8d
  unsigned int v82; // edx
  char *v83; // rcx
  char *v84; // rcx
  __int64 v85; // rdx
  char v86; // al
       char *v87; // rdx
  char *v88; // rdx
  __int64 v89; // r14
  float v90; // xmm1_4
  int v91; // eax
  __int64 v92; // r15
  signed int v93; // edx
  unsigned int *v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // r9
  __int64 v97; // rax
  char *v98; // r8
  unsigned int *v99; // rdx
  char v100; // al
  char *v101; // rcx
  __int64 v102; // rdx
  char v103; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012EB50[2720];
#define v105 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 0)) /* [rsp+0h] */
#define v106 (*(int (*))(void *)(sr_frame_14012EB50 + 48)) /* [rsp+30h] */
#define v107 (*(signed int (*))(void *)(sr_frame_14012EB50 + 52)) /* [rsp+34h] */
#define v108 (*(signed int (*))(void *)(sr_frame_14012EB50 + 56)) /* [rsp+38h] */
#define v109 (*(float (*)[4])(void *)(sr_frame_14012EB50 + 64)) /* [rsp+40h] */
#define v110 (*(_OWORD (*)[2])(void *)(sr_frame_14012EB50 + 80)) /* [rsp+50h] */
#define v111 (*(int (*))(void *)(sr_frame_14012EB50 + 112)) /* [rsp+70h] */
#define v112 (*(_DWORD (*)[255])(void *)(sr_frame_14012EB50 + 144)) /* [rsp+90h] */
#define v113 (*(char (*))(void *)(sr_frame_14012EB50 + 1167)) /* [rsp+48Fh] */
#define v114 (*(char (*)[511])(void *)(sr_frame_14012EB50 + 1168)) /* [rsp+490h] */
#define v115 (*(char (*))(void *)(sr_frame_14012EB50 + 1679)) /* [rsp+68Fh] */
#define v116 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 1680)) /* [rsp+690h] */
#define v117 (*(char (*)[512])(void *)(sr_frame_14012EB50 + 2192)) /* [rsp+890h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_14012EB50 + 2704)) /* [rsp+A90h] */

  v1 = dword_140404A6C[180070377];
  v2 = dword_140404A6C[180105030];
  v3 = 539LL * a1;
  v4 = 256;
  v106 = a1;
  v5 = dword_140404A6C[180001071];
  v6 = dword_140404A6C[v3 + 180001075];
  v7 = dword_140404A6C[v3 + 180035728];
  v8 = dword_140404A6C[v3 + 180070381];
  if ( v6 < 256 )
    v4 = dword_140404A6C[v3 + 180001075];
  v9 = dword_140404A6C[v3 + 180105034];
  v10 = dword_140404A6C[v3 + 180139687];
  if ( (int)dword_140404A6C[180001071] >= 256 )
    v5 = 256;
  v11 = dword_140404A6C[v3 + 180035728];
  if ( v4 <= v7 )
    v11 = v4;
  v12 = dword_140404A6C[180035724];
  if ( v5 <= (int)dword_140404A6C[180035724] )
    v12 = v5;
  v13 = dword_140404A6C[v3 + 180070381];
  if ( v11 <= v8 )
    v13 = v11;
  v14 = dword_140404A6C[180070377];
  if ( v12 <= (int)dword_140404A6C[180070377] )
    v14 = v12;
  v15 = dword_140404A6C[v3 + 180105034];
  if ( v13 <= v9 )
    v15 = v13;
  v16 = dword_140404A6C[180105030];
  if ( v14 <= (int)dword_140404A6C[180105030] )
    v16 = v14;
  v17 = dword_140404A6C[v3 + 180139687];
  if ( v15 <= v10 )
    v17 = v15;
  v18 = dword_140404A6C[180139683];
  if ( v16 <= (int)dword_140404A6C[180139683] )
    v18 = v16;
  v19 = dword_140404A6C[v3 + 180174340];
  v107 = v19;
  if ( v17 <= v19 )
    v19 = v17;
  v20 = dword_140404A6C[180174336];
  if ( v18 <= (int)dword_140404A6C[180174336] )
    v20 = v18;
  v21 = dword_140404A6C[v3 + 180208993];
  v22 = v19 <= v21;
  v23 = v21;
  v108 = v21;
  v24 = dword_140404A6C[180208989];
  if ( v22 )
    v23 = v19;
  if ( v20 <= (int)dword_140404A6C[180208989] )
    v24 = v20;
  if ( v24 <= 0 )
  {
    v25 = 0;
    if ( v6 == v23 && dword_140404A6C[180001071] == v24 )
    {
      v112[0] = 0;
      v25 = 1;
    }
    if ( v7 == v23 && dword_140404A6C[180035724] == v24 )
    {
      v26 = v25++;
      v112[v26] = 1;
    }
    if ( v8 == v23 && v1 == v24 )
    {
      v27 = v25++;
      v112[v27] = 2;
    }
    if ( v9 == v23 )
    {
      v28 = v2 == v24;
      v29 = 3;
      if ( v28 )
      {
        v30 = v25++;
        v112[v30] = 3;
      }
    }
    else
    {
      v29 = 3;
    }
    if ( v10 == v23 && dword_140404A6C[180139683] == v24 )
    {
      v31 = v25++;
      v112[v31] = 4;
    }
    if ( v107 == v23 && dword_140404A6C[180174336] == v24 )
    {
      v32 = v25++;
      v112[v32] = 5;
    }
    if ( v108 == v23 && dword_140404A6C[180208989] == v24 )
    {
      v33 = v25++;
      v112[v33] = 6;
    }
    if ( v25 )
    {
      v34 = 0;
      do
      {
        v35 = rand();
        v36 = 1;
        v37 = (int)v112[v35 % (int)v25];
        if ( (int)dword_140404A6C[283831506] > 0 )
          v36 = (int)dword_140404A6C[34653 * v37 + 180001074] <= 0;
        if ( (int)dword_140404A6C[283837379] > 0 && (int)dword_140404A6C[34653 * v37 + 180001613] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283843252] > 0 && (int)dword_140404A6C[34653 * v37 + 180002152] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283849125] > 0 && (int)dword_140404A6C[34653 * v37 + 180002691] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283854998] > 0 && (int)dword_140404A6C[34653 * v37 + 180003230] > 0 )
          v36 = 0;
        if ( (int)dword_140404A6C[283860871] > 0 && (int)dword_140404A6C[34653 * v37 + 180003769] > 0 )
          v36 = 0;
        ++v34;
      }
      while ( v34 < 100 && v36 );
      LODWORD(v110[0]) = 0;
      v38 = 64;
      *(_QWORD *)((char *)v110 + 4) = 0x200000001LL;
      do
      {
        v39 = rand() % 3;
        v40 = *((_DWORD *)v110 + v39);
        v41 = rand() % 3;
        *((_DWORD *)v110 + v39) = *((_DWORD *)v110 + v41);
        *((_DWORD *)v110 + v41) = v40;
        --v38;
      }
      while ( v38 );
      v42 = 34653 * v37;
      v43 = v106;
      v116[0] = 0;
      v44 = (int *)v110;
      ++dword_140404A6C[34653 * v37 + 180001075 + 539 * v106];
      dword_140404A6C[5 * v43 + 188872240] = 11;
      do
      {
        v45 = *v44;
        if ( *v44 )
        {
          if ( v45 == 1 )
          {
            v114[0] = 0;
            v49 = rand() % 3;
            if ( v49 )
            {
              if ( v49 == 1 )
              {
                sub_140158AB0(v112, "there are new developments in the %s project. ", &dword_140404A6C[v42 + 180035705]);
              }
              else if ( v49 == 2 )
              {
                sub_140158AB0(
                  v112,
                  "the %s project will revolutionize the industry. ",
                  &dword_140404A6C[v42 + 180035705]);
              }
            }
            else
            {
              sub_140158AB0(v112, "project %s has made progress in many areas. ", &dword_140404A6C[v42 + 180035705]);
            }
            v50 = &v113;
            do
              v28 = *++v50 == 0;
            while ( !v28 );
            strcpy(v50, (     char *)v112);
            v51 = &v115;
            do
              v28 = *++v51 == 0;
            while ( !v28 );
            strcpy(v51, v114);
          }
          else if ( v45 == 2 )
          {
            v114[0] = 0;
            if ( (_DWORD)v37 == dword_140404A6C[180001067] )
            {
              v54 = rand() % 2;
              sub_140158AB0(v112, "this project is extremely high value. ");
              if ( v54 == 1 )
                sub_140158AB0(v112, "this is a high priority project. ");
              v55 = &v113;
              do
                v28 = *++v55 == 0;
              while ( !v28 );
              v56 = 0;
              do
              {
                v57 = *((_BYTE *)v112 + v56);
                v55[v56++] = v57;
              }
              while ( v57 );
            }
            else
            {
              v52 = rand() % 4;
              sub_140158AB0(v112, "we are now adding coversheets to tps reports. ");
              switch ( v52 )
              {
                case 1:
                  sub_140158AB0(v112, "the company picnic is next saturday. ");
                  break;
                case 2:
                  sub_140158AB0(v112, "next friday is hawaiian shirt day. ");
                  break;
                case 3:
                  sub_140158AB0(v112, "we need to create more synergy. ");
                  break;
              }
              v53 = &v113;
              do
                v28 = *++v53 == 0;
              while ( !v28 );
              strcpy(v53, (     char *)v112);
            }
            v58 = &v115;
            do
              v28 = *++v58 == 0;
            while ( !v28 );
            v59 = 0;
            do
            {
              v60 = v114[v59];
              v58[v59++] = v60;
            }
            while ( v60 );
          }
        }
        else
        {
          v114[0] = 0;
          v46 = rand() % 3;
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              sub_140158AB0(
                v112,
                "the lab at %s and %s has made great strides. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
            else if ( v46 == 2 )
            {
              sub_140158AB0(
                v112,
                "we are increasing development at the %s and %s laboratory. ",
                &dword_140404A6C[v42 + 180035673],
                &dword_140404A6C[v42 + 180035689]);
            }
          }
          else
          {
            sub_140158AB0(
              v112,
              "the laboratory at %s and %s has the data. ",
              &dword_140404A6C[v42 + 180035673],
              &dword_140404A6C[v42 + 180035689]);
          }
          v47 = &v113;
          do
            v28 = *++v47 == 0;
          while ( !v28 );
          strcpy(v47, (     char *)v112);
          v48 = &v115;
          do
            v28 = *++v48 == 0;
          while ( !v28 );
          strcpy(v48, v114);
        }
        ++v44;
        --v29;
      }
      while ( v29 );
      v61 = v106;
      v62 = &dword_140404A6C[273377349];
      v63 = 0;
      while ( 1 )
      {
        v64 = -1;
        if ( !*v62 )
          break;
        ++v63;
        v62 += 290;
        if ( (__int64)v62 >= (__int64)&dword_140404A6C[275753029] )
        {
          v63 = -1;
          goto LABEL_128;
        }
      }
      if ( v63 != -1 )
      {
        v65 = 290LL * v63;
        dword_140404A6C[v65 + 273377349] = 1;
        dword_140404A6C[v65 + 273377606] = 0;
      }
LABEL_128:
      v66 = v116;
      do
      {
        v67 = *v66;
        v66[(_QWORD)&dword_140404A6C[273377349] + 1160LL * v63 - (_QWORD)v116 + 4] = *v66;
        ++v66;
      }
      while ( v67 );
      sub_140115FF0(v63);
      v116[0] = 0;
      sub_140158AB0(v117, "INTEL%02d.CDE", ++dword_140404A6C[180001068]);
      if ( (rand() & 1) != 0 )
      {
        v89 = 14019LL * (int)dword_140404A6C[259 * (rand() % (signed int)dword_140404A6C[487149972]) + 487149973];
        v90 = *(float *)&dword_140404A6C[v89 + 225653937];
        LODWORD(v109[0]) = dword_140404A6C[v89 + 225653936];
        LODWORD(v109[2]) = dword_140404A6C[v89 + 225653938];
        v109[1] = v90;
        v111 = 1065353216;
        v110[0] = xmmword_140278D30;
        v110[1] = xmmword_140278D30;
        v91 = sr_CreateItem(21, v109, nullptr, (float *)v110);
        v92 = v91;
        if ( v91 != -1 )
        {
          v93 = 0;
          v94 = &dword_140404A6C[275753045];
          while ( *v94 )
          {
            ++v93;
            v94 += 2570;
            if ( (__int64)v94 >= (__int64)&dword_140404A6C[278384725] )
              goto LABEL_173;
          }
          v64 = v93;
          if ( v93 != -1 )
          {
            v95 = 2570LL * v93;
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v95 + 275753046]), 0, 0x2824u);
            dword_140404A6C[v95 + 275753045] = 1;
            dword_140404A6C[v95 + 275753046] = 360;
          }
LABEL_173:
          v96 = 2570LL * v64;
          v97 = (int)dword_140404A6C[v96 + 275754072];
          dword_140404A6C[1760 * v92 + 278846098] = v64;
          if ( (int)v97 < 256 )
          {
            dword_140404A6C[6 * v97 + 275754073 + v96] = v63;
            v98 = v117;
            v99 = &dword_140404A6C[6 * (int)dword_140404A6C[v96 + 275754072] + 275754074 + v96];
            do
            {
              v100 = *v98++;
              *(_BYTE *)v99 = v100;
              v99 = (unsigned int *)((char *)v99 + 1);
            }
            while ( v100 );
            dword_140404A6C[6 * (int)dword_140404A6C[v96 + 275754072]++ + 275754078 + v96] = 0;
          }
        }
        sub_140158AB0(
          v114,
          "We have intercepted communications\n"
          "The disk with the info in the lobby of the lab at\n"
          "%s and %s\n"
          "Filename: %s",
          (     char *)&dword_140404A6C[396 * dword_140404A6C[v89 + 225641321] + 225426047],
          (     char *)&dword_140404A6C[396 * dword_140404A6C[v89 + 225641322] + 225426047],
          v117);
        v101 = &v115;
        do
          v28 = *++v101 == 0;
        while ( !v28 );
        v102 = 0;
        do
        {
          v103 = v114[v102];
          v101[v102++] = v103;
        }
        while ( v103 );
        goto LABEL_181;
      }
      v68 = dword_140404A6C[179992853] + 216000;
      v69 = (int)sub_14012DC20(v117, v63, dword_140404A6C[179992853] + 216000);
      v70 = v68 / 3600 / 60 % -12;
      if ( !v70 )
        v70 = 12;
      if ( (_DWORD)v69 != -1 )
      {
        v71 = 383 * v69;
        if ( (int)dword_140404A6C[383 * v69 + 132400671] > 0 )
        {
          sub_140158AB0(v114, "There is in a town car driving around the city with\nvaluable information.\n");
          v72 = &v115;
          do
            v28 = *++v72 == 0;
          while ( !v28 );
          strcpy(v72, v114);
          v73 = 34LL * (int)dword_140404A6C[396 * dword_140404A6C[v71 + 132400672] + 225426056];
          v74 = dword_140404A6C[v73 + 225391236];
          if ( v74 == -1 )
            v74 = dword_140404A6C[v73 + 225391238];
          v75 = dword_140404A6C[v73 + 225391237];
          if ( v75 == -1 )
            v75 = dword_140404A6C[v73 + 225391239];
          if ( v74 != -1 && v75 != -1 )
          {
            v76 = &v115;
            do
              v28 = *++v76 == 0;
            while ( !v28 );
            strcpy(v76, "The car will be driving from ");
            sub_140158AB0(
              v114,
              "%s and %s\n",
              (     char *)&dword_140404A6C[396 * v74 + 225426047],
              (     char *)&dword_140404A6C[396 * v75 + 225426047]);
            v77 = &v115;
            do
              v28 = *++v77 == 0;
            while ( !v28 );
            v78 = 0;
            do
            {
              v79 = v114[v78];
              v77[v78++] = v79;
            }
            while ( v79 );
          }
          v80 = 34LL
              * (int)dword_140404A6C[396 * dword_140404A6C[5 * (int)dword_140404A6C[v71 + 132400671] + 132400667 + v71]
                                   + 225426056];
          v81 = dword_140404A6C[v80 + 225391236];
          if ( v81 == -1 )
            v81 = dword_140404A6C[v80 + 225391238];
          v82 = dword_140404A6C[v80 + 225391237];
          if ( v82 == -1 )
            v82 = dword_140404A6C[v80 + 225391239];
          if ( v81 != -1 && v82 != -1 )
          {
            v83 = &v115;
            do
              v28 = *++v83 == 0;
            while ( !v28 );
            *(_DWORD *)v83 = 2125684;
            sub_140158AB0(
              v114,
              "%s and %s.\n",
              (     char *)&dword_140404A6C[396 * v81 + 225426047],
              (     char *)&dword_140404A6C[396 * v82 + 225426047]);
            v84 = &v115;
            do
              v28 = *++v84 == 0;
            while ( !v28 );
            v85 = 0;
            do
            {
              v86 = v114[v85];
              v84[v85++] = v86;
            }
            while ( v86 );
          }
          v87 = "This mission expires at %d:%02d AM.\n";
          if ( v68 >= 2592000 )
            v87 = "This mission expires at %d:%02d PM.\n";
          sub_140158AB0(v114, v87, v70, (unsigned int)(v68 / 3600 % 60));
          v88 = &v115;
          do
            v28 = *++v88 == 0;
          while ( !v28 );
          strcpy(v88, v114);
LABEL_181:
          sub_140195D20(v61, v116);
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 16B2AAF1C: using guessed type unsigned int;
// 16B2AAF28: using guessed type unsigned int;
// 16B2CCC9C: using guessed type unsigned int;
// 16B2EEA10: using guessed type unsigned int;
// 16B310784: using guessed type unsigned int;
// 16B3324F8: using guessed type unsigned int;
// 16B35426C: using guessed type unsigned int;
// 16B375FE0: using guessed type unsigned int;

//----- (000000014012F890) ----------------------------------------------------
__int64            sub_14012F890(_BYTE *a1,      char *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v10; // ecx
  char *v11; // rcx
  bool v12; // zf
  char *v13; // rcx
  int v14; // ecx
  char *v15; // rdx
  int v16; // r8d
  _OWORD *v17; // rax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
       char *v21; // rdx
  char *v22; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012F890[560];
#define v24 (*(__int64 (*))(void *)(sr_frame_14012F890 + 0)) /* [rsp+0h] */
#define v25 (*(char (*)[512])(void *)(sr_frame_14012F890 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14012F890 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v10 = rand() % 3;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v13 = a1 - 1;
      do
        v12 = *++v13 == 0;
      while ( !v12 );
      strcpy(v13, "Reports indicate that ");
    }
  }
  else
  {
    v11 = a1 - 1;
    do
      v12 = *++v11 == 0;
    while ( !v12 );
    strcpy(v11, "We have received reports that ");
  }
  v14 = rand() % 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      sub_140158AB0(v25, "the lab at %s and %s ", a3, a4);
    }
    else if ( v14 == 2 )
    {
      sub_140158AB0(v25, "%s and %s laboratory ", a3, a4);
    }
  }
  else
  {
    sub_140158AB0(v25, "the laboratory at %s and %s ", a3, a4);
  }
  v15 = a1 - 1;
  do
    v12 = *++v15 == 0;
  while ( !v12 );
  strcpy(v15, v25);
  v16 = rand() % 3;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v18 = a1 - 1;
      do
        v12 = *++v18 == 0;
      while ( !v12 );
      strcpy(v18, "has disks containing info");
    }
    else if ( v16 == 2 )
    {
      v19 = a1 - 1;
      do
        v12 = *++v19 == 0;
      while ( !v12 );
      strcpy(v19, "may have disks");
    }
  }
  else
  {
    v17 = a1 - 1;
    do
    {
      v12 = *((_BYTE *)v17 + 1) == 0;
      v17 = (_OWORD *)((char *)v17 + 1);
    }
    while ( !v12 );
    *v17 = xmmword_1402773D8;
  }
  sub_140158AB0(v25, " the filename is %s ", a2);
  v20 = a1 - 1;
  do
    v12 = *++v20 == 0;
  while ( !v12 );
  strcpy(v20, v25);
  v21 = "project %s is high value";
  if ( !a6 )
    v21 = "project %s is normal value";
  sub_140158AB0(v25, v21, a5);
  v22 = a1 - 1;
  do
    v12 = *++v22 == 0;
  while ( !v12 );
  strcpy(v22, v25);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v24
#undef v25
#undef v26

// 1402773D8: using guessed type __int128 xmmword_1402773D8;

//----- (000000014012FB60) ----------------------------------------------------
__int64            sub_14012FB60(_BYTE *a1, __int64 a2)
{
  int v4; // r9d
  char *v5; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FB60[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 0)) /* [rsp+0h] */
#define v9 (*(char (*)[512])(void *)(sr_frame_14012FB60 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FB60 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v4 = rand() % 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      sub_140158AB0(v9, "the file named %s contains the data. ", a2);
    }
    else if ( v4 == 2 )
    {
      sub_140158AB0(v9, "the secret info is located in %s. ", a2);
    }
  }
  else
  {
    sub_140158AB0(v9, "the data is stored in the file %s. ", a2);
  }
  v5 = a1 - 1;
  while ( *++v5 != 0 )
    ;
  strcpy(v5, v9);
  return 0; /* the function has no caller */
}
#undef v8
#undef v9
#undef v10


//----- (000000014012FC30) ----------------------------------------------------
__int64            sub_14012FC30(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FC30[560];
#define v6 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 0)) /* [rsp+0h] */
#define v7 (*(char (*)[512])(void *)(sr_frame_14012FC30 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FC30 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v2 = rand() % 2;
  sub_140158AB0(v7, "this project is extremely high value. ");
  if ( v2 == 1 )
    sub_140158AB0(v7, "this is a high priority project. ");
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  strcpy(v3, v7);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8


//----- (000000014012FCE0) ----------------------------------------------------
__int64            sub_14012FCE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  char *v7; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FCE0[560];
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 0)) /* [rsp+0h] */
#define v11 (*(char (*)[512])(void *)(sr_frame_14012FCE0 + 32)) /* [rsp+20h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14012FCE0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v6 = rand() % 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_140158AB0(v11, "the lab at %s and %s has made great strides. ", a2, a3);
    }
    else if ( v6 == 2 )
    {
      sub_140158AB0(v11, "we are increasing development at the %s and %s laboratory. ", a2, a3);
    }
  }
  else
  {
    sub_140158AB0(v11, "the laboratory at %s and %s has the data. ", a2, a3);
  }
  v7 = a1 - 1;
  while ( *++v7 != 0 )
    ;
  strcpy(v7, v11);
  return 0; /* the function has no caller */
}
#undef v10
#undef v11
#undef v12


//----- (000000014012FDA0) ----------------------------------------------------
__int64            sub_14012FDA0(_BYTE *a1, __int64 a2)
{
  int v4; // r9d
  char *v5; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FDA0[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 0)) /* [rsp+0h] */
#define v9 (*(char (*)[512])(void *)(sr_frame_14012FDA0 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_14012FDA0 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v4 = rand() % 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      sub_140158AB0(v9, "there are new developments in the %s project. ", a2);
    }
    else if ( v4 == 2 )
    {
      sub_140158AB0(v9, "the %s project will revolutionize the industry. ", a2);
    }
  }
  else
  {
    sub_140158AB0(v9, "project %s has made progress in many areas. ", a2);
  }
  v5 = a1 - 1;
  while ( *++v5 != 0 )
    ;
  strcpy(v5, v9);
  return 0; /* the function has no caller */
}
#undef v8
#undef v9
#undef v10


//----- (000000014012FE70) ----------------------------------------------------
__int64            sub_14012FE70(_BYTE *a1)
{
  int v2; // edi
  char *v3; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012FE70[560];
#define v6 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 0)) /* [rsp+0h] */
#define v7 (*(char (*)[512])(void *)(sr_frame_14012FE70 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_14012FE70 + 544)) /* [rsp+220h] */

  *a1 = 0;
  v2 = rand() % 4;
  sub_140158AB0(v7, "we are now adding coversheets to tps reports. ");
  switch ( v2 )
  {
    case 1:
      sub_140158AB0(v7, "the company picnic is next saturday. ");
      break;
    case 2:
      sub_140158AB0(v7, "next friday is hawaiian shirt day. ");
      break;
    case 3:
      sub_140158AB0(v7, "we need to create more synergy. ");
      break;
  }
  v3 = a1 - 1;
  while ( *++v3 != 0 )
    ;
  strcpy(v3, v7);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8


//----- (000000014014C390) ----------------------------------------------------
__int64 sub_14014C390()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  signed int v2; // r8d
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  signed int v8; // r14d
  __int64 v9; // r12
  bool v10; // cc
  signed int v11; // ebp
  __int64 v12; // r13
  signed int *v13; // rdi
  signed int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
       char *v17; // r8
  unsigned int *v18; // rdx
  char v19; // al
  __int64 v20; // r9
       char *v21; // r8
  unsigned int *v22; // rdx
  char v23; // al
  signed int v24; // ebp
  unsigned int *v25; // r14
  unsigned int v26; // ebx
  __int64 v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+50h] [rbp+8h]

  v0 = 0;
  dword_140404A6C[487149972] = 0;
  if ( dword_140404A6C[283831312] != 8 )
  {
    if ( dword_140404A6C[283831312] != 4 )
      goto LABEL_37;
    v4 = 0;
    v33 = 0;
    if ( (int)dword_140404A6C[225641186] <= 0 )
      goto LABEL_37;
    v5 = &dword_140404A6C[225654181];
    while ( 1 )
    {
      v6 = *(v5 - 12978);
      if ( v6 != 1 )
        goto LABEL_24;
      v7 = (int)*(v5 - 12856);
      v8 = 0;
      v9 = 5873 * v7;
      v10 = (int)*v5 <= 0;
      v11 = 0;
      dword_140404A6C[5873 * v7 + 283831511] = 0;
      if ( !v10 )
        break;
LABEL_36:
      ++v4;
      v5 += 14019;
      v33 = v4;
      if ( v4 >= (int)dword_140404A6C[225641186] )
        goto LABEL_37;
    }
    v12 = 5873 * v7;
    v13 = (signed int *)(v5 + 4);
    do
    {
      v14 = sub_140050EF0(0x2710u);
      v15 = 2570LL * v14;
      *v13 = v14;
      v16 = (int)dword_140404A6C[v15 + 275754072];
      if ( (int)v16 < 256 )
      {
        dword_140404A6C[6 * v16 + 275754073 + v15] = 0;
        v17 = "MISSION.EXE";
        v18 = &dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072] + 275754074 + v15];
        do
        {
          v19 = *v17++;
          *(_BYTE *)v18 = v19;
          v18 = (unsigned int *)((char *)v18 + 1);
        }
        while ( v19 );
        dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072]++ + 275754078 + v15] = 0;
        LODWORD(v16) = dword_140404A6C[v15 + 275754072];
      }
      v20 = 2570LL * v14;
      if ( (int)v16 < 256 )
      {
        v21 = "DECRYPT.EXE";
        dword_140404A6C[6 * (int)v16 + 275754073 + v20] = 0;
        v22 = &dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072] + 275754074 + v20];
        do
        {
          v23 = *v21++;
          *(_BYTE *)v22 = v23;
          v22 = (unsigned int *)((char *)v22 + 1);
        }
        while ( v23 );
        dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072]++ + 275754078 + v20] = 0;
      }
      ++v11;
      v13 += 4;
      dword_140404A6C[v12 + 283831512 + v8] = v14;
      v8 = dword_140404A6C[v9 + 283831511] + 1;
      dword_140404A6C[v9 + 283831511] = v8;
    }
    while ( v11 < (int)*v5 );
    v6 = *(v5 - 12978);
    v0 = dword_140404A6C[487149972];
    v4 = v33;
LABEL_24:
    if ( v6 == 4 )
    {
      v24 = 0;
      *(v5 - 12855) = v0;
      dword_140404A6C[259 * v0 + 487149973] = v4;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
      v10 = (int)*v5 <= 0;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
      if ( !v10 )
      {
        v25 = v5 + 4;
        do
        {
          v26 = 0;
          v27 = 0;
          v28 = &dword_140404A6C[275753045];
          while ( *v28 )
          {
            ++v26;
            ++v27;
            v28 += 2570;
            if ( (__int64)v28 >= (__int64)&dword_140404A6C[278384725] )
            {
              v26 = -1;
              goto LABEL_33;
            }
          }
          if ( v26 != -1 )
          {
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[2570 * v26 + 275753045]), 0, 0x2828u);
            v29 = 2570 * v27;
            dword_140404A6C[v29 + 275753045] = 1;
            dword_140404A6C[v29 + 275753046] = 10000;
          }
LABEL_33:
          v30 = (int)dword_140404A6C[487149972];
          v31 = 259LL * (int)dword_140404A6C[487149972];
          *v25 = v26;
          ++v24;
          v25 += 4;
          dword_140404A6C[259 * v30 + 487149976 + (int)dword_140404A6C[v31 + 487149975]] = v26;
          ++dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975];
        }
        while ( v24 < (int)*v5 );
        v4 = v33;
      }
      v0 = ++dword_140404A6C[487149972];
    }
    goto LABEL_36;
  }
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = &dword_140404A6C[225641326];
    do
    {
      if ( *(v3 - 123) == 4 )
      {
        *v3 = v0;
        dword_140404A6C[259 * v0 + 487149973] = v2;
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
        v1 = dword_140404A6C[225641186];
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
        v0 = ++dword_140404A6C[487149972];
      }
      ++v2;
      v3 += 14019;
    }
    while ( v2 < v1 );
  }
LABEL_37:
  dword_140404A6C[487148756] = 1154924544;
  dword_140404A6C[487148758] = 1151188992;
  dword_140404A6C[487148775] = 1155416064;
  dword_140404A6C[487148757] = 1110966272;
  dword_140404A6C[487148777] = 1148944384;
  strcpy((char *)&dword_140404A6C[487148759], "Hondo Park");
  dword_140404A6C[487148794] = 1152892928;
  dword_140404A6C[487148776] = 1106247680;
  dword_140404A6C[487148796] = 1153089536;
  strcpy((char *)&dword_140404A6C[487148778], "Rio Granary");
  dword_140404A6C[487148813] = 1151352832;
  dword_140404A6C[487148795] = 1112014848;
  dword_140404A6C[487148815] = 1153417216;
  *(_OWORD *)&dword_140404A6C[487148797] = xmmword_1402772B8;
  dword_140404A6C[487148814] = 1115160576;
  dword_140404A6C[487148832] = 1154564096;
  strcpy((char *)&dword_140404A6C[487148816], "Park above the Kamel Building");
  dword_140404A6C[487148834] = 1153220608;
  dword_140404A6C[487148833] = 1115947008;
  dword_140404A6C[487148851] = 1151877120;
  strcpy((char *)&dword_140404A6C[487148835], "Bobson Dugnutt Museum");
  strcpy((char *)&dword_140404A6C[487148854], "The Mall");
  dword_140404A6C[487148853] = 1151483904;
  dword_140404A6C[487148870] = 1154007040;
  dword_140404A6C[487148871] = 1104150528;
  dword_140404A6C[487148872] = 1150402560;
  strcpy((char *)&dword_140404A6C[487148873], "Gas Station");
  dword_140404A6C[487148889] = 1153515520;
  dword_140404A6C[487148891] = 1151320064;
  dword_140404A6C[487148852] = 1108869120;
  dword_140404A6C[487148890] = 1108869120;
  strcpy((char *)&dword_140404A6C[487148892], "Red Cube Park");
  dword_140404A6C[487148755] = 8;
  return 107;
}

// 1402772B8: using guessed type __int128 xmmword_1402772B8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 1B4657DB8: using guessed type unsigned int;
// 1B4657DBC: using guessed type unsigned int;
// 1B4657DC0: using guessed type unsigned int;
// 1B4657DC4: using guessed type unsigned int;
// 1B4657E08: using guessed type unsigned int;
// 1B4657E0C: using guessed type unsigned int;
// 1B4657E10: using guessed type unsigned int;
// 1B4657E54: using guessed type unsigned int;
// 1B4657E58: using guessed type unsigned int;
// 1B4657E5C: using guessed type unsigned int;
// 1B4657E60: using guessed type unsigned int;
// 1B4657EA0: using guessed type unsigned int;
// 1B4657EA4: using guessed type unsigned int;
// 1B4657EA8: using guessed type unsigned int;
// 1B4657EEC: using guessed type unsigned int;
// 1B4657EF0: using guessed type unsigned int;
// 1B4657EF4: using guessed type unsigned int;
// 1B4657F38: using guessed type unsigned int;
// 1B4657F3C: using guessed type unsigned int;
// 1B4657F40: using guessed type unsigned int;
// 1B4657F84: using guessed type unsigned int;
// 1B4657F88: using guessed type unsigned int;
// 1B4657F8C: using guessed type unsigned int;
// 1B4657FD0: using guessed type unsigned int;
// 1B4657FD4: using guessed type unsigned int;
// 1B4657FD8: using guessed type unsigned int;
// 1B46590BC: using guessed type unsigned int;

//----- (00000001401948E0) ----------------------------------------------------
__int64            sub_1401948E0(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r10
  unsigned int *v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl

  result = a1;
  v4 = 5873LL * a1;
  v7 = (int)dword_140404A6C[v4 + 283831511];
  if ( v7 > 0 )
  {
    v8 = &dword_140404A6C[v4 + 283831512];
    do
    {
      v9 = 2570LL * (int)*v8;
      result = (int)dword_140404A6C[v9 + 275754072];
      if ( (int)result < 256 )
      {
        v10 = a2;
        dword_140404A6C[6 * result + 275754073 + v9] = a3;
        v11 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 275754072] + 275754074 + v9];
        do
        {
          v12 = *v10++;
          *(_BYTE *)v11 = v12;
          v11 = (unsigned int *)((char *)v11 + 1);
        }
        while ( v12 );
        result = v9 * 4 + 24LL * (int)dword_140404A6C[v9 + 275754072];
        *(unsigned int *)((char *)&dword_140404A6C[275754078] + result) = 0;
        ++dword_140404A6C[v9 + 275754072];
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401949C0) ----------------------------------------------------
__int64            sub_1401949C0(int a1)
{
  __int64 v1; // r10
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  unsigned int *v8; // r11
  unsigned int *v9; // r11
  unsigned int *v10; // r11
  unsigned int *v11; // r11
  unsigned int *v12; // r11
  signed int v13; // r10d

  v1 = 5873LL * a1;
  v2 = 0;
  v3 = (int)dword_140404A6C[v1 + 283831510];
  if ( (_DWORD)v3 != -1 )
  {
    if ( (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100 >= 0 )
      v2 = (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100;
    if ( v2 > 1000 )
      v2 = 1000;
  }
  v4 = dword_140404A6C[v1 + 283831506];
  if ( v4 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * v4);
  v6 = result + v2;
  if ( !dword_140404A6C[180001071] )
  {
    result = 2156LL * a1;
    v7 = (unsigned int *)((char *)&dword_140404A6C[180001074] + result);
    if ( *(int *)((char *)&dword_140404A6C[180001074] + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180001072] * v6) >> 32) >> 31;
      *v7 = dword_140404A6C[180001072] + (signed int)(dword_140404A6C[180001072] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180035724] )
  {
    result = (__int64)&dword_140404A6C[180035727];
    v8 = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180035725] * v6) >> 32) >> 31;
      *v8 = dword_140404A6C[180035725] + (signed int)(dword_140404A6C[180035725] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180070377] )
  {
    result = (__int64)&dword_140404A6C[180070380];
    v9 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180070378] * v6) >> 32) >> 31;
      *v9 = dword_140404A6C[180070378] + (signed int)(dword_140404A6C[180070378] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180105030] )
  {
    result = (__int64)&dword_140404A6C[180105033];
    v10 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180105031] * v6) >> 32) >> 31;
      *v10 = dword_140404A6C[180105031] + (signed int)(dword_140404A6C[180105031] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180139683] )
  {
    result = (__int64)&dword_140404A6C[180139686];
    v11 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180139684] * v6) >> 32) >> 31;
      *v11 = dword_140404A6C[180139684] + (signed int)(dword_140404A6C[180139684] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180174336] )
  {
    result = (__int64)&dword_140404A6C[180174339];
    v12 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180174337] * v6) >> 32) >> 31;
      *v12 = dword_140404A6C[180174337] + (signed int)(dword_140404A6C[180174337] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180208989] && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    v13 = dword_140404A6C[180208990] * v6;
    dword_140404A6C[539 * a1 + 180208992] = dword_140404A6C[180208990] + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194D40) ----------------------------------------------------
__int64 sub_140194D40()
{
  int v0; // edi
  unsigned int *v1; // rax
  __int64 v2; // rbp
  int v3; // edx
  int v4; // r8d
  signed int v5; // ebx
  __m128i si128; // xmm4
  __m128i v7; // xmm5
  __int64 v8; // rcx
  unsigned int *v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm4
  unsigned int *v16; // rcx
  __int64 v17; // r8
  signed int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  signed int v25; // esi
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // r14
  __int64 v31; // rax
  int i; // ebx
       char *v33; // r8
       char **v34; // rbx
       char *v35; // rcx
  char v36; // al
  __int64 v37; // r9
  __int64 v38; // rax
  char *v39; // r8
  unsigned int *v40; // rdx
  char v41; // al
  int v42; // eax
  BOOL v43; // r14d
  int v44; // eax
  __int64 v45; // rsi
  int v46; // ebx
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ebx
  unsigned int *v50; // rdi
  unsigned int *v51; // rsi
  char *v52; // rcx
  char v53; // al
  char *v54; // rcx
  char v55; // al
  char *v56; // rcx
  char v57; // al
  char *v58; // rcx
  char v59; // al
  unsigned int *v60; // rbx
  __int64 v61; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140194D40[848];
#define v63 (*(__int64 (*))(void *)(sr_frame_140194D40 + 0)) /* [rsp+0h] */
#define v64 (*(unsigned int (*))(void *)(sr_frame_140194D40 + 48)) /* [rsp+30h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_140194D40 + 56)) /* [rsp+38h] */
#define v66 (*(char (*)[256])(void *)(sr_frame_140194D40 + 64)) /* [rsp+40h] */
#define v67 (*(_BYTE (*)[512])(void *)(sr_frame_140194D40 + 320)) /* [rsp+140h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_140194D40 + 832)) /* [rsp+340h] */

  v0 = 0;
  v1 = &dword_140404A6C[180035722];
  while ( *(v1 - 34653) )
  {
    if ( !*v1 )
    {
      ++v0;
      break;
    }
    if ( !v1[34653] )
    {
      v0 += 2;
      break;
    }
    if ( !v1[69306] )
    {
      v0 += 3;
      break;
    }
    v1 += 138612;
    v0 += 4;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[188906890] )
      break;
  }
  if ( v0 != -1 )
  {
    v2 = 34653LL * v0;
    v65 = v0;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v2 + 180001070]), 0, 0x21D70u);
    v3 = dword_140404A6C[487149972];
    dword_140404A6C[v2 + 180001069] = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0x10000;
      if ( v3 >= 8 && dword_140302080 >= 2 )
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
        v7 = si128;
        v8 = 0;
        v9 = &dword_140404A6C[487150492];
        do
        {
          v10 = _mm_cvtsi32_si128(v9[259]);
          v4 += 8;
          v11 = _mm_cvtsi32_si128(*(v9 - 259));
          v8 += 8;
          v12 = _mm_cvtsi32_si128(*v9);
          v13 = _mm_cvtsi32_si128(*(v9 - 518));
          v9 += 2072;
          si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v13, v11), _mm_unpacklo_epi32(v12, v10)));
          v7 = _mm_min_epi32(
                 v7,
                 _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1554)), _mm_cvtsi32_si128(*(v9 - 1295))),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v9 - 1036)), _mm_cvtsi32_si128(*(v9 - 777)))));
        }
        while ( v8 < (int)(v3 - (v3 & 0x80000007)) );
        v14 = _mm_min_epi32(si128, v7);
        v15 = _mm_min_epi32(v14, _mm_srli_si128(v14, 8));
        v5 = _mm_cvtsi128_si32(_mm_min_epi32(v15, _mm_srli_si128(v15, 4)));
      }
      if ( v4 < v3 )
      {
        v16 = &dword_140404A6C[259 * v4 + 487149974];
        v17 = (unsigned int)(v3 - v4);
        do
        {
          v18 = *v16;
          v16 += 259;
          if ( v5 <= v18 )
            v18 = v5;
          v5 = v18;
          --v17;
        }
        while ( v17 );
      }
      v19 = 0;
      v20 = rand() % (signed int)dword_140404A6C[487149972];
      do
      {
        if ( (int)dword_140404A6C[259 * v20 + 487149974] <= v5 )
          break;
        ++v19;
        v20 = rand() % (signed int)dword_140404A6C[487149972];
      }
      while ( v19 < 1024 );
      v21 = v20;
      v22 = 259LL * v20;
      v23 = (int)dword_140404A6C[v22 + 487149973];
      ++dword_140404A6C[v22 + 487149974];
      v24 = 14019 * v23;
      v25 = 0;
      v26 = &dword_140404A6C[273377349];
      v27 = (int)dword_140404A6C[v24 + 225641322];
      v64 = dword_140404A6C[v24 + 225641321];
      while ( *v26 )
      {
        ++v25;
        v26 += 290;
        if ( (__int64)v26 >= (__int64)&dword_140404A6C[275753029] )
          return 0; /* compatibility result discarded by all reviewed callers */
      }
      if ( v25 != -1 )
      {
        v28 = 290LL * v25;
        dword_140404A6C[34653 * v0 + 180035569] = v25;
        dword_140404A6C[v28 + 273377349] = 1;
        dword_140404A6C[v28 + 273377606] = 0;
        v29 = 0;
        if ( &dword_140404A6C[v22 + 487149976] )
          v29 = rand() % (int)dword_140404A6C[v22 + 487149975];
        v30 = (int)dword_140404A6C[259 * v21 + 487149976 + v29];
        v31 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v31 + 485542517] )
            break;
          v31 = rand() & 0x1F;
        }
        dword_140404A6C[v31 + 485542517] = 1;
        v33 = off_1402B2000[v31];
        v34 = &off_1402B2000[v31];
        v35 = v33;
        do
        {
          v36 = *v35;
          v35[(intptr_t)((uintptr_t)(v67) - (uintptr_t)(v33))] = *v35;
          ++v35;
        }
        while ( v36 );
        sub_140158AB0(v66, "%s.DOC", v33);
        v37 = 2570 * v30;
        v38 = (int)dword_140404A6C[2570 * v30 + 275754072];
        if ( (int)v38 < 256 )
        {
          dword_140404A6C[6 * v38 + 275754073 + v37] = v25;
          v39 = v66;
          v40 = &dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072] + 275754074 + v37];
          do
          {
            v41 = *v39++;
            *(_BYTE *)v40 = v41;
            v40 = (unsigned int *)((char *)v40 + 1);
          }
          while ( v41 );
          dword_140404A6C[6 * (int)dword_140404A6C[v37 + 275754072]++ + 275754078 + v37] = 0;
        }
        sub_140158AB0(v66, "%s", *v34);
        v42 = rand();
        v43 = v42 == 5 * (v42 / 5);
        v44 = 2500 * (rand() % 5 + 2);
        dword_140404A6C[34653 * v0 + 180001072] = v44;
        if ( v0 == dword_140404A6C[180001067] )
          dword_140404A6C[34653 * v0 + 180001072] = 5 * v44;
        v45 = 3;
        do
        {
          v46 = 0;
          v47 = rand() % 6;
          v48 = (int)dword_140404A6C[5873 * v47 + 283831510];
          if ( (_DWORD)v48 != -1 )
          {
            if ( (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100 >= 0 )
              v46 = (int)(dword_140404A6C[3597 * v48 + 71856275] - 1000) / 100;
            if ( v46 > 1000 )
              v46 = 1000;
          }
          dword_140404A6C[34653 * v0 + 180001074 + 539 * v47] = dword_140404A6C[34653 * v0 + 180001072]
                                                              + (int)(v46 * dword_140404A6C[34653 * v0 + 180001072])
                                                              / 100;
          --v45;
        }
        while ( v45 );
        v49 = v0 + 200;
        dword_140404A6C[34653 * v0 + 180035589] = v0 + 200;
        sub_140158AB0(&dword_140404A6C[v2 + 180035590], "INTEL%02d.CDE", v0);
        v50 = &dword_140404A6C[396 * v27 + 225426047];
        v51 = &dword_140404A6C[396 * v64 + 225426047];
        sub_14012F890(
          &dword_140404A6C[290 * v49 + 273377350],
          v66,
          (__int64)v51,
          (__int64)v50,
          (__int64)off_1402B2100[v65],
          v43);
        sub_140115FF0(v49);
        v52 = v66;
        do
        {
          v53 = *v52;
          *((_BYTE *)&dword_140404A6C[180035657] + v2 * 4 - (_QWORD)v66 + (_QWORD)v52) = *v52;
          ++v52;
        }
        while ( v53 );
        v54 = (char *)&dword_140404A6C[180035673] + v2 * 4 - (_QWORD)v51;
        do
        {
          v55 = *(_BYTE *)v51;
          v54[(_QWORD)v51] = *(_BYTE *)v51;
          v51 = (unsigned int *)((char *)v51 + 1);
        }
        while ( v55 );
        v56 = (char *)&dword_140404A6C[180035689] + v2 * 4 - (_QWORD)v50;
        do
        {
          v57 = *(_BYTE *)v50;
          v56[(_QWORD)v50] = *(_BYTE *)v50;
          v50 = (unsigned int *)((char *)v50 + 1);
        }
        while ( v57 );
        v58 = v67;
        do
        {
          v59 = *v58;
          *((_BYTE *)&dword_140404A6C[180035705] + v2 * 4 - (_QWORD)v67 + (_QWORD)v58) = *v58;
          ++v58;
        }
        while ( v59 );
        dword_140404A6C[v2 + 180035721] = v43;
        v60 = &dword_140404A6C[v2 + 180001596];
        v61 = 6;
        do
        {
          sub_140158AB0(v60, (     char *)&dword_140273614);
          v60 += 539;
          --v61;
        }
        while ( v61 );
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68

// 140194E6F: conditional instruction was optimized away because edx.4>=8
// 140273614: using guessed type int dword_140273614;
// 1402791B0: using guessed type __int128 xmmword_1402791B0;
// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 1402B2100: using guessed type char *off_1402B2100[8];
// 140302080: using guessed type int dword_140302080;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195970) ----------------------------------------------------
__int64 sub_140195970()
{
  signed int v0; // eax
  unsigned int *v1; // r13
  int v2; // r12d
  unsigned int *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  int i; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int *v13; // r10
  unsigned int *v14; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // rax
  char *v22; // r8
  unsigned int *v23; // rdx
  char v24; // al
  signed int v25; // r15d
  signed int v26; // ebp
  int *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // edx
  unsigned int *v32; // r8
  __int64 v33; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195970[576];
#define v35 (*(__int64 (*))(void *)(sr_frame_140195970 + 0)) /* [rsp+0h] */
#define j (*(int (*))(void *)(sr_frame_140195970 + 32)) /* [rsp+20h] */
#define v37 (*(_BYTE (*)[512])(void *)(sr_frame_140195970 + 48)) /* [rsp+30h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140195970 + 560)) /* [rsp+230h] */

  v0 = dword_140404A6C[487149972];
  v1 = &dword_140404A6C[487149975];
  v2 = 0;
  j = 0;
  if ( (int)dword_140404A6C[487149972] > 0 )
  {
    v3 = &dword_140404A6C[487149975];
    v4 = 0;
    do
    {
      v5 = 64;
      do
      {
        v6 = 0;
        if ( &dword_140404A6C[259 * v2 + 487149976] )
          v6 = rand() % (int)*v3;
        v7 = (int)dword_140404A6C[v4 + 487149976 + v6];
        v8 = rand() & 0x1F;
        for ( i = 0; i < 1024; ++i )
        {
          if ( !dword_140404A6C[v8 + 485542517] )
            break;
          v8 = rand() & 0x1F;
        }
        sub_140158AB0(v37, "%s.DOC", off_1402B2000[v8]);
        v10 = 2570 * v7;
        v11 = 0;
        v12 = (int)dword_140404A6C[2570 * v7 + 275754072];
        if ( (int)v12 <= 0 )
        {
LABEL_17:
          v18 = 0;
          v19 = 0;
          v20 = &dword_140404A6C[273377349];
          while ( *v20 )
          {
            ++v18;
            ++v19;
            v20 += 290;
            if ( (__int64)v20 >= (__int64)&dword_140404A6C[275753029] )
              goto LABEL_26;
          }
          if ( v18 != -1 )
          {
            v21 = 290 * v19;
            dword_140404A6C[v21 + 273377349] = 1;
            dword_140404A6C[v21 + 273377606] = 0;
            if ( (int)v12 < 256 )
            {
              dword_140404A6C[6 * v12 + 275754073 + v10] = v18;
              v22 = v37;
              v23 = &dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072] + 275754074 + v10];
              do
              {
                v24 = *v22++;
                *(_BYTE *)v23 = v24;
                v23 = (unsigned int *)((char *)v23 + 1);
              }
              while ( v24 );
              dword_140404A6C[6 * (int)dword_140404A6C[v10 + 275754072]++ + 275754078 + v10] = 0;
            }
          }
        }
        else
        {
          v13 = &dword_140404A6C[v10 + 275754078];
          while ( 1 )
          {
            if ( !*v13 )
            {
              v14 = &dword_140404A6C[6 * v11 + 275754074 + v10];
              v15 = (_BYTE *)(v37 - (_BYTE *)v14);
              do
              {
                v16 = (unsigned __int8)v15[(_QWORD)v14];
                v17 = *(unsigned __int8 *)v14 - v16;
                if ( v17 )
                  break;
                v14 = (unsigned int *)((char *)v14 + 1);
              }
              while ( v16 );
              if ( !v17 )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            v13 += 6;
            if ( (int)v11 >= (int)v12 )
              goto LABEL_17;
          }
        }
LABEL_26:
        --v5;
      }
      while ( v5 );
      v4 += 259;
      v0 = dword_140404A6C[487149972];
      v2 = j + 1;
      v3 += 259;
      j = v2;
    }
    while ( v2 < (int)dword_140404A6C[487149972] );
    v1 = &dword_140404A6C[487149975];
  }
  v25 = 0;
  for ( j = 0; v25 < v0; j = v25 )
  {
    v26 = 0;
    if ( (int)*v1 > 0 )
    {
      v27 = (int *)(v1 + 1);
      do
      {
        v28 = 2570LL * *v27;
        if ( (int)dword_140404A6C[v28 + 275754072] > 1 )
        {
          v29 = 64;
          do
          {
            v30 = rand() % (int)dword_140404A6C[v28 + 275754072];
            v31 = rand() % (int)dword_140404A6C[v28 + 275754072];
            if ( (_DWORD)v30 != v31 )
            {
              v32 = &dword_140404A6C[6 * v30 + 275754073 + v28];
              v33 = v28 * 4 + 24LL * v31;
              *(_OWORD *)&dword_140404A6C[v28 + 275755609] = *(_OWORD *)v32;
              *(_QWORD *)&dword_140404A6C[v28 + 275755613] = *((_QWORD *)v32 + 2);
              *(_OWORD *)v32 = *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33);
              *((_QWORD *)v32 + 2) = *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33);
              *(_OWORD *)((char *)&dword_140404A6C[275754073] + v33) = *(_OWORD *)&dword_140404A6C[v28 + 275755609];
              *(_QWORD *)((char *)&dword_140404A6C[275754077] + v33) = *(_QWORD *)&dword_140404A6C[v28 + 275755613];
            }
            --v29;
          }
          while ( v29 );
        }
        ++v26;
        ++v27;
      }
      while ( v26 < (int)*v1 );
      v0 = dword_140404A6C[487149972];
      v25 = j;
    }
    ++v25;
    v1 += 259;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v35
#undef j
#undef v37
#undef v38

// 1402B2000: using guessed type _UNKNOWN *off_1402B2000;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B46590BC: using guessed type unsigned int;

//----- (0000000140195D20) ----------------------------------------------------
__int64            sub_140195D20(int a1,      char *a2)
{
  __int64 v3; // rdi
  char *v4; // r8
  __int64 v5; // r9
       char *v6; // rdx
  char *v7; // rdx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  int v12; // eax
  __int64 v13; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195D20[2176];
#define v15 (*(_BYTE (*)[32])(void *)(sr_frame_140195D20 + 0)) /* [rsp+0h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140195D20 + 32)) /* [rsp+20h] */
#define v17 (*(float (*)[4])(void *)(sr_frame_140195D20 + 48)) /* [rsp+30h] */
#define v18 (*(_OWORD (*)[2])(void *)(sr_frame_140195D20 + 64)) /* [rsp+40h] */
#define v19 (*(int (*))(void *)(sr_frame_140195D20 + 96)) /* [rsp+60h] */
#define v20 (*(__m128i (*)[128])(void *)(sr_frame_140195D20 + 112)) /* [rsp+70h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_140195D20 + 2160)) /* [rsp+870h] */

  v3 = a1;
  v4 = off_1402B2890[a1];
  v5 = (unsigned int)((signed int)dword_140404A6C[179992853] / 3600 / 60 % -12);
  v6 = "\n%s Internal Memo\n%d:%02d AM\n\n";
  if ( !(_DWORD)v5 )
    v5 = 12;
  LODWORD(v16) = (signed int)dword_140404A6C[179992853] / 3600 % 60;
  if ( (int)dword_140404A6C[179992853] >= 2592000 )
    v6 = "\n%s Internal Memo\n%d:%02d PM\n\n";
  sub_140158AB0(v20, v6, v4, v5, v16);
  v7 = &v15[111];
  while ( *++v7 != 0 )
    ;
  strcpy(v7, a2);
  v18[0] = xmmword_140278D30;
  v18[1] = xmmword_140278D30;
  v19 = 1065353216;
  v9 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
  v10 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
  v11 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
  sub_14007B2A0((__int64)v18, (float *)v18 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(*(float *)&dword_140404A6C[5873 * v3 + 283831497] - 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
  v17[0] = v9 - (float)(*(float *)v18 * 0.5);
  v17[2] = v11 - (float)(*((float *)v18 + 2) * 0.5);
  v17[1] = v10 - (float)(*((float *)v18 + 1) * 0.5);
  v12 = sr_CreateItem(34, v17, nullptr, (float *)v18);
  v13 = v12;
  if ( v12 != -1 )
  {
    sub_1400584B0(v12, v20);
    dword_140404A6C[1760 * v13 + 278845900] = 0x10000;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140195FB0) ----------------------------------------------------
__int64            sub_140195FB0(int a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  _BYTE *v7; // rcx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned int *v10; // rbx
  unsigned int *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  unsigned int *v16; // rbx
       char **v17; // r14
  __int64 v18; // rsi
  int v19; // r9d
  signed int v20; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140195FB0[1088];
#define v22 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 0)) /* [rsp+0h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 32)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 40)) /* [rsp+28h] */
#define v25 (*(char (*)[1024])(void *)(sr_frame_140195FB0 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140195FB0 + 1072)) /* [rsp+430h] */

  v2 = 34653LL * a1;
  v3 = a2;
  v4 = 539LL * a2;
  LODWORD(v23) = a2;
  v24 = v4 * 4;
  v5 = v4 * 4 + v2 * 4;
  if ( !dword_140404A6C[v4 + 180001073 + v2] )
  {
    *(unsigned int *)((char *)&dword_140404A6C[180001073] + v5) = 1;
    if ( (int)dword_140404A6C[v2 + 180001071] < 2 )
    {
      v6 = *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5);
      v7 = (char *)&dword_140404A6C[180001084] + v5;
      v8 = (int *)((char *)&dword_140404A6C[180001083] + v5);
      if ( v6 <= 0 )
      {
        *v8 = 0;
        sub_140158AB0(v7, "TRADE");
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Trade");
        v14 = v23;
        v15 = 0;
        v16 = &dword_140404A6C[v2 + 180001083];
        v17 = (     char **)off_1402B2890;
        v18 = 0;
        do
        {
          if ( v15 != v14 )
          {
            v19 = *(v16 - 9);
            if ( v19 > 0 )
            {
              if ( dword_140404A6C[v2 + 180001071] )
              {
                v20 = *v16;
              }
              else
              {
                *v16 = 0;
                v20 = 0;
              }
              sub_140158AB0(
                &dword_140404A6C[64 * (__int64)v20 + 180001084 + v18 + v2],
                "%s HAS THE FILE  VALUE: $%d",
                off_1402B2890[v3],
                v19);
              ++*v16;
              sub_140158AB0(&dword_140404A6C[v2 + 180001596 + v18], "Trade");
              sub_140158AB0(
                v25,
                "%s has obtained the file for the\n%s project",
                off_1402B2890[v3],
                (     char *)&dword_140404A6C[v2 + 180035705]);
              sub_140195D20(v15, v25);
              sub_140158AB0(
                (_BYTE *)&dword_140404A6C[64 * (__int64)*v8 + 180001084 + v2] + v24,
                "%s WANTS THE FILE",
                *v17);
              ++*v8;
              v14 = v23;
            }
          }
          ++v15;
          v18 += 539;
          v16 += 539;
          ++v17;
        }
        while ( v15 < 6 );
        dword_140404A6C[v2 + 180001071] = 1;
      }
      else
      {
        dword_140404A6C[5 * v3 + 188872237] += v6;
        v23 = 20 * v3;
        *v8 = 0;
        sub_140158AB0(v7, "MISSION SUCCESS");
        sub_140158AB0(
          &dword_140404A6C[64 * (__int64)++*v8 + 180001084 + v2 + v4],
          "VALUE: $%d",
          *(unsigned int *)((char *)&dword_140404A6C[180001074] + v5));
        ++*v8;
        sub_140158AB0((_BYTE *)&dword_140404A6C[180001596] + v5, "Success");
        v9 = 0;
        v10 = &dword_140404A6C[v2 + 180001083];
        v11 = &dword_140404A6C[v2 + 180001596];
        v12 = 6;
        do
        {
          if ( v9 != v3 )
          {
            *v10 = 0;
            sub_140158AB0((_BYTE *)v11 - 2048, "MISSION CLOSED");
            ++*v10;
            sub_140158AB0(v11, "Closed");
          }
          v11 += 539;
          ++v9;
          v10 += 539;
          --v12;
        }
        while ( v12 );
        v13 = v23;
        dword_140404A6C[v2 + 180001071] = 2;
        if ( *(int *)((char *)&dword_140404A6C[188872240] + v13) > 0 )
          *(unsigned int *)((char *)&dword_140404A6C[188872240] + v13) = 1;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

