#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140054130) ----------------------------------------------------
__int64            sr_CreateItem(int a1, float *a2, unsigned int *a3, float *a4)
{
  __int64 v4; // rbp
  unsigned int *v7; // rax
  unsigned int v9; // ebx
  __int64 v11; // rsi
  unsigned int v12; // xmm0_4
  unsigned int *v13; // rdx
  unsigned int *v14; // r9
  unsigned int *v15; // r8
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm2_4
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  signed int v22; // edi
  __int64 v23; // rdx
  unsigned int *v24; // rcx
  __m128i si128; // xmm0
  unsigned int *v26; // r8
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  unsigned int v31; // ecx
  unsigned int *v32; // r8
  float v33; // xmm3_4
  unsigned int v34; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140054130[16];
#define v35 (*(unsigned int (*))(void *)(sr_frame_140054130 + 0)) /* [rsp+30h] */
#define v36 (*(int (*))(void *)(sr_frame_140054130 + 4)) /* [rsp+34h] */
#define v37 (*(int (*))(void *)(sr_frame_140054130 + 8)) /* [rsp+38h] */

  v4 = a1;
  v7 = &dword_140404A6C[278845893];
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 1760;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[280648133] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 1760LL * (int)v9;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v11 + 278845894]), 0, 0x1B7Cu);
  v12 = 0;
  dword_140404A6C[v11 + 278845893] = 1;
  dword_140404A6C[v11 + 278845898] = v4;
  dword_140404A6C[v11 + 278845900] = 0xFFFF;
  *(_QWORD *)&dword_140404A6C[v11 + 278845901] = -1;
  v13 = &dword_140404A6C[v11 + 278845916];
  dword_140404A6C[v11 + 278845903] = -1;
  v14 = &dword_140404A6C[v11 + 278845925];
  dword_140404A6C[v11 + 278845899] = dword_140404A6C[1268 * v4 + 278521287];
  *v13 = *(_DWORD *)a2;
  v13[1] = *((_DWORD *)a2 + 1);
  v13[2] = *((_DWORD *)a2 + 2);
  dword_140404A6C[v11 + 278845919] = *(_DWORD *)a2;
  dword_140404A6C[v11 + 278845920] = *((_DWORD *)a2 + 1);
  dword_140404A6C[v11 + 278845921] = *((_DWORD *)a2 + 2);
  if ( a3 )
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v12 = a3[2];
  }
  else
  {
    *(_QWORD *)v14 = 0;
  }
  v14[2] = v12;
  v15 = &dword_140404A6C[v11 + 278845934];
  v16 = dword_140404A6C[1268 * v4 + 278521353];
  *v15 = *(_DWORD *)a4;
  v15[1] = *((_DWORD *)a4 + 1);
  v15[2] = *((_DWORD *)a4 + 2);
  dword_140404A6C[v11 + 278845937] = *((_DWORD *)a4 + 3);
  dword_140404A6C[v11 + 278845938] = *((_DWORD *)a4 + 4);
  dword_140404A6C[v11 + 278845939] = *((_DWORD *)a4 + 5);
  dword_140404A6C[v11 + 278845940] = *((_DWORD *)a4 + 6);
  dword_140404A6C[v11 + 278845941] = *((_DWORD *)a4 + 7);
  dword_140404A6C[v11 + 278845942] = *((_DWORD *)a4 + 8);
  dword_140404A6C[v11 + 278846058] = dword_140404A6C[1268 * v4 + 278521354];
  dword_140404A6C[v11 + 278846059] = dword_140404A6C[1268 * v4 + 278521355];
  dword_140404A6C[v11 + 278846057] = v16;
  *(float *)&dword_140404A6C[v11 + 278846054] = 1.0 / *(float *)&v16;
  *(float *)&v17 = 1.0 / *(float *)&dword_140404A6C[v11 + 278846059];
  *(float *)&dword_140404A6C[v11 + 278846055] = 1.0 / *(float *)&dword_140404A6C[v11 + 278846058];
  dword_140404A6C[v11 + 278846056] = v17;
  v18 = sub_14005CF80(3u, v13, v15, v14, dword_140404A6C[v11 + 278845899], &dword_140404A6C[v11 + 278846054]);
  dword_140404A6C[v11 + 278845915] = v18;
  v19 = 47LL * v18;
  dword_140404A6C[v11 + 278845975] = dword_140404A6C[1268 * v4 + 278521293];
  v20 = dword_140404A6C[1268 * v4 + 278521294];
  dword_140404A6C[v19 + 18215712] = v9;
  dword_140404A6C[v11 + 278845971] = 100;
  dword_140404A6C[v11 + 278845974] = v20;
  dword_140404A6C[v11 + 278845973] = 0;
  dword_140404A6C[v11 + 278845980] = -1;
  dword_140404A6C[v11 + 278846053] = -1;
  dword_140404A6C[v11 + 278846100] = -1;
  switch ( (_DWORD)v4 )
  {
    case 0x27:
      v21 = (int)dword_140404A6C[v11 + 278846111];
      v22 = 2;
      dword_140404A6C[v11 + 278847170] = 2;
      dword_140404A6C[v11 + 278847323] = -1;
      strcpy((char *)&dword_140404A6C[1760 * (int)v9 + 278846114 + 16 * v21], "STARTING CS-DOS...");
      sub_1400C3E00(v9);
      sub_1400C3E00(v9);
      sub_1400C6D90(v9, 0);
      do
        sub_140050F90(v9, v22++);
      while ( v22 < 24 );
      v23 = 32;
      v24 = &dword_140404A6C[v11 + 278846626];
      do
      {
        si128 = _mm_load_si128((     __m128i *)&xmmword_140279200);
        _mm_storeu_si128((__m128i *)(void *)v24, si128);
        _mm_storeu_si128((__m128i *)(void *)(v24 + 4), si128);
        _mm_storeu_si128((__m128i *)(void *)(v24 + 8), si128);
        v24 += 16;
        *((_QWORD *)v24 - 2) = SR_VEC_LANES(128, si128, i64)[0];
        *(v24 - 2) = SR_VEC_LANES(128, si128, i32)[0];
        *((_WORD *)v24 - 2) = SR_VEC_LANES(128, si128, i16)[0];
        *((_BYTE *)v24 - 2) = SR_VEC_LANES(128, si128, i8)[0];
        --v23;
      }
      while ( v23 );
      break;
    case 0x21:
      dword_140404A6C[v11 + 278846085] = *(_DWORD *)a2;
      dword_140404A6C[v11 + 278846086] = *((_DWORD *)a2 + 1);
      dword_140404A6C[v11 + 278846087] = *((_DWORD *)a2 + 2);
      break;
    case 0x1C:
      dword_140404A6C[v11 + 278846079] = *((_DWORD *)a4 + 6);
      v26 = &dword_140404A6C[v11 + 278846085];
      dword_140404A6C[v11 + 278846080] = *((_DWORD *)a4 + 7);
      dword_140404A6C[v11 + 278846081] = *((_DWORD *)a4 + 8);
      v27 = *a4;
      v28 = *a2;
      v37 = 0;
      v29 = v28 - (float)(v27 * 0.4375);
      *(float *)v26 = v29;
      *((float *)v26 + 1) = a2[1] - (float)(a4[1] * 0.4375);
      *((float *)v26 + 2) = a2[2] - (float)(a4[2] * 0.4375);
      *(float *)v26 = v29 - (float)(a4[3] * 0.5);
      *((float *)v26 + 1) = *(float *)&dword_140404A6C[v11 + 278846086] - (float)(a4[4] * 0.5);
      v30 = *(float *)&dword_140404A6C[v11 + 278846087] - (float)(a4[5] * 0.5);
      v36 = -1090519040;
      *((float *)v26 + 2) = v30;
      v31 = dword_140404A6C[v11 + 278845915];
      v35 = -1092616192;
      sub_14004E2E0(v31, &v35, v26);
      v32 = &dword_140404A6C[v11 + 278846088];
      v33 = *a2 - (float)(*a4 * 0.4375);
      *(float *)v32 = v33;
      *((float *)v32 + 1) = a2[1] - (float)(a4[1] * 0.4375);
      *((float *)v32 + 2) = a2[2] - (float)(a4[2] * 0.4375);
      *(float *)v32 = (float)(a4[3] * 0.5) + v33;
      *((float *)v32 + 1) = (float)(a4[4] * 0.5) + *(float *)&dword_140404A6C[v11 + 278846089];
      *((float *)v32 + 2) = (float)(a4[5] * 0.5) + *(float *)&dword_140404A6C[v11 + 278846090];
      v34 = dword_140404A6C[v11 + 278845915];
      v36 = 1056964608;
      sub_14004E2E0(v34, &v35, v32);
      break;
  }
  if ( dword_140404A6C[456202453] )
  {
    if ( v9 <= 0x3FF )
      ++dword_140404A6C[v9 + 280648157];
  }
  return v9;
}
#undef v35
#undef v36
#undef v37

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CA1C0) ----------------------------------------------------
__int64            sub_1400CA1C0(int a1)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned sr_item_contact_candidates[513];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CA1C0[2144];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400CA1C0 + 0)) /* [rsp+0h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1400CA1C0 + 2128)) /* [rsp+850h] */

  v2 = 1760LL * a1;
  if ( dword_140404A6C[1268 * dword_140404A6C[v2 + 278845898] + 278521288] )
  {
    sub_140038230((int *)&sr_item_contact_candidates[0], (int *)&dword_140404A6C[v2 + 278845964], (int *)&dword_140404A6C[v2 + 278845967]);
    if ( (int)sr_item_contact_candidates[0] > 0 )
    {
      v3 = &(*(char *)(void *)(sr_item_contact_candidates+2));
      v4 = sr_item_contact_candidates[0];
      do
      {
        if ( *(_DWORD *)v3 != a1 )
        {
          v5 = *(int *)v3;
          if ( *(_DWORD *)v3 > a1 || dword_140404A6C[1760 * v5 + 278845895] )
          {
            v6 = 1760 * v5;
            if ( *(float *)&dword_140404A6C[1760 * v5 + 278845958] <= *(float *)&dword_140404A6C[v2 + 278845961]
              && *(float *)&dword_140404A6C[v6 + 278845961] >= *(float *)&dword_140404A6C[v2 + 278845958]
              && *(float *)&dword_140404A6C[v6 + 278845960] <= *(float *)&dword_140404A6C[v2 + 278845963]
              && *(float *)&dword_140404A6C[v6 + 278845963] >= *(float *)&dword_140404A6C[v2 + 278845960]
              && *(float *)&dword_140404A6C[v6 + 278845959] <= *(float *)&dword_140404A6C[v2 + 278845962]
              && *(float *)&dword_140404A6C[v6 + 278845962] >= *(float *)&dword_140404A6C[v2 + 278845959]
              && (unsigned int)sub_14004A7A0(
                                 dword_140404A6C[v2 + 278845915],
                                 dword_140404A6C[v6 + 278845915],
                                 (int *)&dword_140404A6C[1268 * dword_140404A6C[v2 + 278845898] + 278522247],
                                 (int *)&dword_140404A6C[1268 * dword_140404A6C[v6 + 278845898] + 278522247],
                                 (float *)&dword_140404A6C[v2 + 278845916],
                                 (float *)&dword_140404A6C[v2 + 278845934],
                                 (float *)&dword_140404A6C[v6 + 278845916],
                                 (float *)&dword_140404A6C[v6 + 278845934])
              && ((int)dword_140404A6C[v6 + 278845896] < 60 || (int)dword_140404A6C[v2 + 278845896] < 60) )
            {
              dword_140404A6C[v2 + 278845895] = 0;
              dword_140404A6C[v6 + 278845895] = 0;
            }
          }
        }
        v3 += 8;
        --v4;
      }
      while ( v4 );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v8
#undef v11

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140278F50: using guessed type __int128 xmmword_140278F50;
// 140278FB0: using guessed type __int128 xmmword_140278FB0;
// 140279030: using guessed type __int128 xmmword_140279030;
// 140279050: using guessed type __int128 xmmword_140279050;
// 1402790A0: using guessed type __int128 xmmword_1402790A0;
// 1402790B0: using guessed type __int128 xmmword_1402790B0;
// 1402790C0: using guessed type __int128 xmmword_1402790C0;
// 1402790D0: using guessed type __int128 xmmword_1402790D0;
// 1402790E0: using guessed type __int128 xmmword_1402790E0;
// 140279100: using guessed type __int128 xmmword_140279100;
// 140279260: using guessed type __int128 xmmword_140279260;
// 140279270: using guessed type __int128 xmmword_140279270;
// 140279280: using guessed type __int128 xmmword_140279280;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAA0: using guessed type unsigned int;
// 160FC47C0: using guessed type unsigned int;
// 16B27ECC4: using guessed type unsigned int;
// 16B27ECF4: using guessed type unsigned int;
// 181290040: using guessed type unsigned int;
// 181290044: using guessed type unsigned int;
// 181290048: using guessed type unsigned int;
// 181290050: using guessed type unsigned int;
// 183E935A0: using guessed type unsigned int;
// 183E935A4: using guessed type unsigned int;
// 183E935B4: using guessed type unsigned int;
// 183E935C4: using guessed type unsigned int;
// 183E935C8: using guessed type unsigned int;
// 183E935D4: using guessed type unsigned int;
// 183E935E4: using guessed type unsigned int;
// 183E935F4: using guessed type unsigned int;
// 183E93618: using guessed type unsigned int;
// 183E9361C: using guessed type unsigned int;
// 183E93628: using guessed type unsigned int;
// 183E9362C: using guessed type unsigned int;
// 183E93638: using guessed type unsigned int;
// 183E9363C: using guessed type unsigned int;
// 183E93648: using guessed type unsigned int;
// 183E93658: using guessed type unsigned int;
// 183E9365C: using guessed type unsigned int;
// 183E93668: using guessed type unsigned int;
// 183E93678: using guessed type unsigned int;
// 183E93688: using guessed type unsigned int;
// 183E936AC: using guessed type unsigned int;
// 183E936CC: using guessed type unsigned int;
// 183E936DC: using guessed type unsigned int;
// 183E936EC: using guessed type unsigned int;
// 183E936F0: using guessed type unsigned int;
// 183E936F4: using guessed type unsigned int;
// 183E93778: using guessed type unsigned int;
// 183EBB0C0: using guessed type unsigned int;
// 183EBC344: using guessed type unsigned int;
// 183EBC3CC: using guessed type unsigned int;
// 183EBC3DC: using guessed type unsigned int;
// 183EBC400: using guessed type unsigned int;
// 183EBE404: using guessed type unsigned int;
// 183EBF0F0: using guessed type unsigned int;
// 183EBF0F4: using guessed type unsigned int;
// 183EBF980: using guessed type unsigned int;
// 183EBFA88: using guessed type unsigned int;
// 1A4CF0928: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1A4CFF7E4: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A7600B98: using guessed type unsigned int;
// 1A7602FA4: using guessed type unsigned int;
// 1A7602FA8: using guessed type unsigned int;
// 1A7602FAC: using guessed type unsigned int;
// 1A760C010: using guessed type unsigned int;
// 1A8A873C0: using guessed type unsigned int;
// 1A8A873C4: using guessed type unsigned int;
// 1A8A873C8: using guessed type unsigned int;
// 1A8A873CC: using guessed type unsigned int;
// 1A8A873DC: using guessed type unsigned int;
// 1A8A873E0: using guessed type unsigned int;
// 1A8A873E4: using guessed type unsigned int;
// 1A8A873F4: using guessed type unsigned int;
// 1A8A873F8: using guessed type unsigned int;
// 1A8A873FC: using guessed type unsigned int;
// 1A8A8740C: using guessed type unsigned int;
// 1A8A87410: using guessed type unsigned int;
// 1A8A87414: using guessed type unsigned int;
// 1A8A87418: using guessed type unsigned int;
// 1A8A8741C: using guessed type unsigned int;

//----- (000000014013EC80) ----------------------------------------------------
// Candidate .sis item-set scanner: references *.sis and filesystem enumeration helper.
void asset_scan_itemsets_sis_candidate()
{
  unsigned int v0; // eax
  int v1; // ebx
  int v2; // edi
  unsigned int *v3; // rcx
  int i; // edi
  unsigned int *v5; // rcx
  int v6; // ebp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  char *v11; // rdx
  unsigned int *v12; // rcx
  char v13; // al
  int v14; // eax
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // rcx
  char v19; // dl
  char v20; // dl
  char v21; // dl
  __int64 v22; // rax
  int v23; // r9d
  unsigned int *v24; // rdx
  char *v25; // r8
  char v26; // al
  char *v27; // rcx
  char v28; // al
  char *v29; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013EC80[560];
#define v32 (*(_BYTE (*)[32])(void *)(sr_frame_14013EC80 + 0)) /* [rsp+0h] */
#define v33 (*(char (*)[36])(void *)(sr_frame_14013EC80 + 32)) /* [rsp+20h] */
#define v34 (*(char (*))(void *)(sr_frame_14013EC80 + 68)) /* [rsp+44h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14013EC80 + 544)) /* [rsp+220h] */

  *(_OWORD *)&dword_140404A6C[272300382] = xmmword_140279510;
  dword_140404A6C[272300381] = 41;
  dword_140404A6C[272300410] = 37;
  *(_OWORD *)&dword_140404A6C[272300411] = xmmword_140279590;
  dword_140404A6C[272300439] = 37;
  dword_140404A6C[272300468] = 37;
  *(_OWORD *)&dword_140404A6C[272300444] = xmmword_140279490;
  dword_140404A6C[272300497] = 37;
  *(_OWORD *)&dword_140404A6C[272300448] = xmmword_140279490;
  dword_140404A6C[272300526] = 37;
  *(_OWORD *)&dword_140404A6C[272300386] = xmmword_140279490;
  dword_140404A6C[272300555] = 37;
  *(_OWORD *)&dword_140404A6C[272300390] = xmmword_140279490;
  dword_140404A6C[272300364] = 7;
  *(_OWORD *)&dword_140404A6C[272300415] = xmmword_140279490;
  dword_140404A6C[272302277] = 41;
  *(_OWORD *)&dword_140404A6C[272300419] = xmmword_140279490;
  dword_140404A6C[272302306] = 44;
  *(_OWORD *)&dword_140404A6C[272300440] = xmmword_1402795F0;
  dword_140404A6C[272302335] = 44;
  dword_140404A6C[272302364] = 44;
  *(_OWORD *)&dword_140404A6C[272300469] = xmmword_140279630;
  dword_140404A6C[272302393] = 44;
  dword_140404A6C[272302422] = 44;
  *(_OWORD *)&dword_140404A6C[272300502] = xmmword_140279490;
  dword_140404A6C[272302451] = 44;
  *(_OWORD *)&dword_140404A6C[272300506] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300473] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300477] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300498] = xmmword_1402795B0;
  *(_OWORD *)&dword_140404A6C[272300527] = xmmword_140279610;
  *(_OWORD *)&dword_140404A6C[272300560] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300564] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300531] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300535] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300556] = xmmword_140279640;
  *(_OWORD *)&dword_140404A6C[272302278] = xmmword_140279510;
  *(_OWORD *)&dword_140404A6C[272302307] = xmmword_140279590;
  *(_OWORD *)&dword_140404A6C[272302282] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302286] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302311] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302315] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302340] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302344] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302336] = xmmword_140279580;
  *(_OWORD *)&dword_140404A6C[272302365] = xmmword_140279570;
  *(_OWORD *)&dword_140404A6C[272302369] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302373] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302398] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302402] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302394] = xmmword_1402795E0;
  *(_OWORD *)&dword_140404A6C[272302423] = xmmword_1402795C0;
  *(_OWORD *)&dword_140404A6C[272302427] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302431] = xmmword_140279490;
  v0 = 3;
  v1 = 0;
  *(_OWORD *)&dword_140404A6C[272302456] = xmmword_140279490;
  dword_140404A6C[272302260] = 7;
  v2 = 0;
  *(_OWORD *)&dword_140404A6C[272302460] = xmmword_140279490;
  dword_140404A6C[272301329] = 38;
  *(_OWORD *)&dword_140404A6C[272302452] = xmmword_140279620;
  dword_140404A6C[272301358] = 37;
  dword_140404A6C[272301387] = 37;
  *(_OWORD *)&dword_140404A6C[272301330] = xmmword_140279520;
  dword_140404A6C[272301312] = 3;
  *(_OWORD *)&dword_140404A6C[272301334] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301338] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301363] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301367] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301359] = xmmword_140279500;
  *(_OWORD *)&dword_140404A6C[272301388] = xmmword_1402794D0;
  *(_OWORD *)&dword_140404A6C[272301392] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301396] = xmmword_140279490;
  do
  {
    dword_140404A6C[29 * v0 + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301330] = 0.5 - (float)((float)v2 * 0.375);
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301331] = 1066663936;
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301332] = 0;
    v3 = &dword_140404A6C[29 * dword_140404A6C[272301312] + 272301333];
    *(_QWORD *)v3 = 1065353216;
    *((_QWORD *)v3 + 1) = 0;
    *((_QWORD *)v3 + 2) = 1065353216;
    *((_QWORD *)v3 + 3) = 0;
    v3[8] = 1065353216;
    sub_14007B2A0(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333],
      (float *)((__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333]),
      sr_export_float_lane_container(1070141403));
    ++v2;
    v0 = ++dword_140404A6C[272301312];
  }
  while ( v2 < 4 );
  for ( i = 0; i < 3; ++i )
  {
    dword_140404A6C[29 * v0 + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301330] = 0.3125 - (float)((float)i * 0.375);
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301331] = 1069023232;
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301332] = 0;
    v5 = &dword_140404A6C[29 * dword_140404A6C[272301312] + 272301333];
    *(_QWORD *)v5 = 1065353216;
    *((_QWORD *)v5 + 1) = 0;
    *((_QWORD *)v5 + 2) = 1065353216;
    *((_QWORD *)v5 + 3) = 0;
    v5[8] = 1065353216;
    sub_14007B2A0(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333],
      (float *)((__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333]),
      sr_export_float_lane_container(1070141403));
    sub_14007B2A0(
      (__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333],
      (float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301336],
      sr_export_float_lane_container(1057360530));
    v0 = ++dword_140404A6C[272301312];
  }
  *(_OWORD *)&dword_140404A6C[272302282] = xmmword_140279490;
  dword_140404A6C[272302277] = 37;
  *(_OWORD *)&dword_140404A6C[272302286] = xmmword_140279490;
  dword_140404A6C[272302306] = 37;
  *(_OWORD *)&dword_140404A6C[272302278] = xmmword_1402794F0;
  dword_140404A6C[272302335] = 37;
  dword_140404A6C[272302364] = 37;
  *(_OWORD *)&dword_140404A6C[272302307] = xmmword_1402794C0;
  dword_140404A6C[272302393] = 37;
  dword_140404A6C[272302422] = 37;
  *(_OWORD *)&dword_140404A6C[272302311] = xmmword_140279490;
  dword_140404A6C[272302451] = 37;
  *(_OWORD *)&dword_140404A6C[272302315] = xmmword_140279490;
  dword_140404A6C[272302480] = 37;
  *(_OWORD *)&dword_140404A6C[272302340] = xmmword_140279490;
  dword_140404A6C[272302260] = 8;
  *(_OWORD *)&dword_140404A6C[272302344] = xmmword_140279490;
  dword_140404A6C[273270149] = 4;
  *(_OWORD *)&dword_140404A6C[272302336] = xmmword_140279560;
  *(_OWORD *)&dword_140404A6C[272302365] = xmmword_140279540;
  *(_OWORD *)&dword_140404A6C[272302369] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302373] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302398] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302402] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302394] = xmmword_1402795A0;
  *(_OWORD *)&dword_140404A6C[272302423] = xmmword_140279580;
  *(_OWORD *)&dword_140404A6C[272302427] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302431] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302456] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302460] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302452] = xmmword_140279600;
  *(_OWORD *)&dword_140404A6C[272302481] = xmmword_1402795D0;
  *(_OWORD *)&dword_140404A6C[272302485] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302489] = xmmword_140279490;
  v6 = sub_14024C22C("data");
  v7 = sub_14024C22C("itemset");
  v8 = sub_14023A198("*.sis", (__int64)v33);
  dword_140404A6C[293119325] = 0;
  v9 = v8;
  v10 = 0;
  if ( (_DWORD)v8 != -1 )
  {
    do
    {
      if ( v10 >= 1024 )
        break;
      if ( (v33[0] & 0x10) == 0 )
      {
        v11 = &v34;
        v12 = &dword_140404A6C[16 * (__int64)v10 + 293119326];
        do
        {
          v13 = *v11++;
          *(_BYTE *)v12 = v13;
          v12 = (unsigned int *)((char *)v12 + 1);
        }
        while ( v13 );
        ++dword_140404A6C[293119325];
      }
      v14 = sub_14023A5C4(v9, (__int64)v33);
      v10 = dword_140404A6C[293119325];
    }
    while ( v14 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v10 + 293119326]) = 0;
  sub_140239CCC(v9);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v15 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v16 = 0;
    do
    {
      v17 = 0;
      v18 = (char *)&dword_140404A6C[v16 + 293119326] + 1;
      do
      {
        v19 = *(v18 - 1);
        if ( !v19 || v19 == 46 )
          break;
        if ( !*v18 || *v18 == 46 )
        {
          ++v17;
          break;
        }
        v20 = v18[1];
        if ( !v20 || v20 == 46 )
        {
          v17 += 2;
          break;
        }
        v21 = v18[2];
        if ( !v21 || v21 == 46 )
        {
          v17 += 3;
          break;
        }
        v17 += 4;
        v18 += 4;
      }
      while ( v17 < 64 );
      v22 = v16 * 4 + v17;
      ++v15;
      v16 += 16;
      *((_BYTE *)&dword_140404A6C[293119326] + v22) = 0;
    }
    while ( v15 < (int)dword_140404A6C[293119325] );
  }
  if ( !v7 )
    sub_14024C22C("..");
  if ( !v6 )
    sub_14024C22C("..");
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v23 = dword_140404A6C[273270149];
    do
    {
      v24 = &dword_140404A6C[16 * (__int64)v1 + 293119326];
      v25 = (char *)v24;
      do
      {
        v26 = *v25;
        *((_BYTE *)&dword_140404A6C[272299397] + 3792LL * v23 - (_QWORD)v24 + (_QWORD)v25) = *v25;
        ++v25;
      }
      while ( v26 );
      v27 = (char *)(v33 - (char *)v24);
      do
      {
        v28 = *(_BYTE *)v24;
        v27[(_QWORD)v24] = *(_BYTE *)v24;
        v24 = (unsigned int *)((char *)v24 + 1);
      }
      while ( v28 );
      v29 = &v32[31];
      while ( *++v29 != 0 )
        ;
      strcpy(v29, ".sis");
      sub_1400E7960(v23, v33);
      ++v1;
      v23 = ++dword_140404A6C[273270149];
    }
    while ( v1 < (int)dword_140404A6C[293119325] );
  }
  return;
}
#undef v32
#undef v33
#undef v34
#undef v35

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 183EBB760: using guessed type unsigned int;
// 183EBB764: using guessed type unsigned int;
// 183EBB770: using guessed type unsigned int;

//----- (00000001401402C0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
void sr_SetupItemTypes()
{
  float v0; // xmm1_4
  float v1; // xmm3_4
  float v2; // xmm4_4
  float v3; // xmm5_4
  double v4; // xmm0_8
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  double v14; // xmm0_8
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  double v19; // xmm0_8
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  double v25; // xmm0_8
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  double v31; // xmm0_8
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  double v37; // xmm0_8
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  double v43; // xmm0_8
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  double v49; // xmm0_8
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  double v55; // xmm0_8
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm0_4
  double v61; // xmm0_8
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm0_4
  double v67; // xmm0_8
  float v68; // xmm1_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  double v73; // xmm0_8
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm0_4
  double v79; // xmm0_8
  float v80; // xmm1_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm0_4
  double v85; // xmm0_8
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm1_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  double v91; // xmm0_8
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  float v96; // xmm0_4
  double v97; // xmm0_8
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm0_4
  double v103; // xmm0_8
  float v104; // xmm1_4
  float v105; // xmm0_4
  float v106; // xmm1_4
  float v107; // xmm2_4
  float v108; // xmm0_4
  double v109; // xmm0_8
  float v110; // xmm1_4
  float v111; // xmm0_4
  float v112; // xmm1_4
  float v113; // xmm2_4
  float v114; // xmm0_4
  double v115; // xmm0_8
  float v116; // xmm1_4
  float v117; // xmm0_4
  float v118; // xmm1_4
  float v119; // xmm2_4
  float v120; // xmm0_4
  double v121; // xmm0_8
  double v122; // xmm0_8
  double v123; // xmm0_8
  double v124; // xmm0_8
  double v125; // xmm0_8
  double v126; // xmm0_8
  double v127; // xmm0_8
  double v128; // xmm0_8
  double v129; // xmm0_8
  double v130; // xmm0_8
  double v131; // xmm0_8
  double v132; // xmm0_8
  double v133; // xmm0_8
  double v134; // xmm0_8
  double v135; // xmm0_8
  double v136; // xmm0_8
  double v137; // xmm0_8
  double v138; // xmm0_8
  double v139; // xmm0_8
  int v140; // r14d
  __int64 v141; // r15
  __int64 v142; // rbx
  float v143; // xmm0_4
  float v144; // xmm1_4
  float *v145; // rax
  float *v146; // rcx
  float v147; // xmm0_4
  char *v148; // rdx
  int v149; // ecx
  int v150; // edx
  unsigned int v151; // ecx
  unsigned int v152; // eax
  float v153; // xmm2_4
  float v154; // xmm0_4
  float v155; // xmm1_4
  __int64 v156; // rcx
  __int64 v157; // rax
  unsigned int v158; // ecx
  unsigned int v159; // eax
  float v160; // xmm2_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  __int64 v163; // rcx
  __int64 v164; // rax
  unsigned int v165; // ecx
  unsigned int v166; // eax
  float v167; // xmm2_4
  float v168; // xmm0_4
  float v169; // xmm1_4
  __int64 v170; // rcx
  __int64 v171; // rax
  unsigned int v172; // ecx
  unsigned int v173; // eax
  float v174; // xmm2_4
  float v175; // xmm0_4
  float v176; // xmm1_4
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  int *v180; // r8
  __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // rcx
  __int64 v190; // rcx
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rax
  __int64 v199; // rax
  int *v200; // r8
  __int64 v201; // rcx
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rcx
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 v217; // rcx
  __int64 v218; // rax
  signed int v219; // esi
  __int64 v220; // rdi
  __int64 v221; // r9
  __int64 v222; // r8
  __int64 v223; // rax
  float v224; // xmm0_4
  float v225; // xmm1_4
  float v226; // xmm2_4
  __int64 v227; // rdx
  float v228; // xmm8_4
  float v229; // xmm7_4
  float v230; // xmm4_4
  __int64 v231; // rax
  float *v232; // rdx
  float v233; // xmm5_4
  float v234; // xmm3_4
  float v235; // xmm6_4
  __int64 v236; // r8
  signed int v237; // ecx
  __int64 v238; // r10
  __int64 v239; // r11
  unsigned __int64 v240; // r9
  unsigned int *v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // rcx
  __int64 v244; // rcx
  __int64 v245; // rcx
  __int64 v246; // r8
  unsigned int *v247; // rdx
  __int64 v248; // rcx
  signed int v249; // edi
  __int64 v250; // rsi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401402C0[112];
#define v252 (*(__int64 (*))(void *)(sr_frame_1401402C0 + 0)) /* [rsp+8h] */
#define v253 (*(float (*))(void *)(sr_frame_1401402C0 + 32)) /* [rsp+28h] */
#define v254 (*(float (*))(void *)(sr_frame_1401402C0 + 36)) /* [rsp+2Ch] */
#define v255 (*(float (*))(void *)(sr_frame_1401402C0 + 40)) /* [rsp+30h] */
#define v256 (*(float (*))(void *)(sr_frame_1401402C0 + 44)) /* [rsp+34h] */
#define v257 (*(__int128 (*))(void *)(sr_frame_1401402C0 + 48)) /* [rsp+38h] */
#define v258 (*(__int128 (*))(void *)(sr_frame_1401402C0 + 64)) /* [rsp+48h] */
#define v259 (*(int (*))(void *)(sr_frame_1401402C0 + 80)) /* [rsp+58h] */
#define v260 (*(sr_frame_i128 (*))(void *)(sr_frame_1401402C0 + 88)) /* [rsp+60h] */

  sub_1400E7F80(0, "data/uzi.itm");
  strcpy((char *)&dword_140404A6C[278521297], "Auto 5");
  dword_140404A6C[278521287] = 1080033280;
  dword_140404A6C[278521286] = 500;
  dword_140404A6C[278521289] = 1;
  dword_140404A6C[278521292] = 2;
  dword_140404A6C[278521291] = 6;
  dword_140404A6C[278521295] = 1087722837;
  dword_140404A6C[278521296] = 1034594987;
  dword_140404A6C[278521293] = 90;
  dword_140404A6C[278521294] = 300;
  dword_140404A6C[278521346] = 1025507328;
  dword_140404A6C[278521349] = 1025507328;
  dword_140404A6C[278521347] = 1056964608;
  dword_140404A6C[278521348] = 1048576000;
  dword_140404A6C[278521316] = 2;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v0 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v0 == 0.0 )
  {
    v1 = 0.0;
    v2 = 0.0;
    v3 = 0.0;
  }
  else
  {
    v1 = v255 * (float)(1.0 / v0);
    v2 = v254 * (float)(1.0 / v0);
    v3 = v253 * (float)(1.0 / v0);
  }
  *(float *)&dword_140404A6C[278521329] = v3;
  *(float *)&dword_140404A6C[278521330] = v2;
  *(float *)&dword_140404A6C[278521331] = v1;
  v4 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  *(float *)&v4 = v4 + v4;
  v258 = xmmword_140278D30;
  dword_140404A6C[278521332] = LODWORD(v4);
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v5 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v5 == 0.0 )
  {
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
  }
  else
  {
    v6 = v255 * (float)(1.0 / v5);
    v7 = v254 * (float)(1.0 / v5);
    v8 = v253 * (float)(1.0 / v5);
  }
  *(float *)&dword_140404A6C[278521333] = v8;
  *(float *)&dword_140404A6C[278521334] = v7;
  *(float *)&dword_140404A6C[278521335] = v6;
  v9 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278521323] = 0;
  dword_140404A6C[278521324] = -1115684864;
  dword_140404A6C[278521325] = 1052770304;
  dword_140404A6C[278521350] = 1023410176;
  *(float *)&v9 = v9 + v9;
  strcpy((char *)&dword_140404A6C[278522565], "AK-47");
  dword_140404A6C[278521351] = 1027604480;
  dword_140404A6C[278521352] = 1054951342;
  dword_140404A6C[278522554] = 500;
  dword_140404A6C[278521336] = LODWORD(v9);
  *(float *)&v9 = *(float *)&dword_140404A6C[278521295]
                * *(float *)&dword_140404A6C[6 * dword_140404A6C[278521292] + 437914197];
  dword_140404A6C[278522557] = 1;
  *(_QWORD *)&dword_140404A6C[278522559] = 8;
  dword_140404A6C[278522564] = 1034594987;
  *(_QWORD *)&dword_140404A6C[278522561] = 90;
  dword_140404A6C[278522614] = 1025507328;
  *(float *)&dword_140404A6C[278521345] = *(float *)&v9 * 0.25;
  dword_140404A6C[278522563] = 1093315243;
  dword_140404A6C[278522555] = 1084227584;
  dword_140404A6C[278522617] = 1025507328;
  dword_140404A6C[278522615] = 1056964608;
  dword_140404A6C[278522616] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278522581] = 0;
  dword_140404A6C[278522583] = -1090015724;
  *(_QWORD *)&dword_140404A6C[278522584] = 2;
  dword_140404A6C[278522586] = -1111490560;
  dword_140404A6C[278522587] = 1031798784;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v10 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
  }
  else
  {
    v11 = v255 * (float)(1.0 / v10);
    v12 = v254 * (float)(1.0 / v10);
    v13 = v253 * (float)(1.0 / v10);
  }
  *(float *)&dword_140404A6C[278522597] = v13;
  *(float *)&dword_140404A6C[278522598] = v12;
  *(float *)&dword_140404A6C[278522599] = v11;
  v14 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278522588] = 0;
  dword_140404A6C[278522589] = -1115684864;
  dword_140404A6C[278522590] = -1107296256;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  *(float *)&v14 = v14 + v14;
  v258 = xmmword_140278D30;
  dword_140404A6C[278522600] = LODWORD(v14);
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v15 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v15 == 0.0 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v16 = v255 * (float)(1.0 / v15);
    v17 = v254 * (float)(1.0 / v15);
    v18 = v253 * (float)(1.0 / v15);
  }
  *(float *)&dword_140404A6C[278522601] = v18;
  *(float *)&dword_140404A6C[278522602] = v17;
  *(float *)&dword_140404A6C[278522603] = v16;
  v19 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278522591] = 0;
  dword_140404A6C[278522592] = -1115684864;
  dword_140404A6C[278522593] = 1052770304;
  dword_140404A6C[278522618] = 1023410176;
  *(float *)&v19 = v19 + v19;
  dword_140404A6C[278522619] = 1027604480;
  dword_140404A6C[278522604] = LODWORD(v19);
  *(float *)&v19 = *(float *)&dword_140404A6C[278522563]
                 * *(float *)&dword_140404A6C[6 * dword_140404A6C[278522560] + 437914197];
  dword_140404A6C[278522620] = 1054951342;
  dword_140404A6C[278523806] = 0;
  dword_140404A6C[278523807] = -1115684864;
  dword_140404A6C[278523808] = 1052770304;
  dword_140404A6C[278522928] = 1;
  dword_140404A6C[278523822] = 50;
  *(float *)&dword_140404A6C[278522613] = *(float *)&v19 * 0.25;
  strcpy((char *)&dword_140404A6C[278523833], "AK-47 Magazine");
  dword_140404A6C[278523825] = 0;
  dword_140404A6C[278523823] = 1061158912;
  dword_140404A6C[278523830] = 30;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v20 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v20 == 0.0 )
  {
    v22 = 0.0;
    v23 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v21 = 1.0 / v20;
    v22 = (float)(1.0 / v20) * v255;
    v23 = v21 * v254;
    v24 = v21 * v253;
  }
  *(float *)&dword_140404A6C[278523865] = v24;
  *(float *)&dword_140404A6C[278523866] = v23;
  *(float *)&dword_140404A6C[278523867] = v22;
  v25 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278525101], "M-16");
  dword_140404A6C[278523886] = 1031798784;
  dword_140404A6C[278523887] = 1040187392;
  *(float *)&v25 = v25 + v25;
  dword_140404A6C[278523888] = 1048576000;
  dword_140404A6C[278523893] = 1;
  dword_140404A6C[278525090] = 750;
  dword_140404A6C[278525093] = 1;
  dword_140404A6C[278525096] = 1;
  dword_140404A6C[278523868] = LODWORD(v25);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278524197], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278525095] = 7;
  dword_140404A6C[278525099] = 1097509547;
  dword_140404A6C[278525091] = 1078984704;
  dword_140404A6C[278525100] = 1028443341;
  *(_QWORD *)&dword_140404A6C[278525097] = 90;
  dword_140404A6C[278525150] = 1025507328;
  dword_140404A6C[278525153] = 1025507328;
  dword_140404A6C[278525151] = 1056964608;
  dword_140404A6C[278525152] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278525117] = 0;
  dword_140404A6C[278525119] = -1088002458;
  *(_QWORD *)&dword_140404A6C[278525120] = 2;
  dword_140404A6C[278525122] = -1111490560;
  dword_140404A6C[278525123] = 1031798784;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v26 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v26 == 0.0 )
  {
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
  }
  else
  {
    v27 = 1.0 / v26;
    v28 = (float)(1.0 / v26) * v255;
    v29 = v27 * v254;
    v30 = v27 * v253;
  }
  *(float *)&dword_140404A6C[278525133] = v30;
  *(float *)&dword_140404A6C[278525134] = v29;
  *(float *)&dword_140404A6C[278525135] = v28;
  v31 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278525124] = 0;
  dword_140404A6C[278525125] = -1115684864;
  dword_140404A6C[278525126] = -1107296256;
  v259 = 1065353216;
  *(float *)&v31 = v31 + v31;
  dword_140404A6C[278525136] = LODWORD(v31);
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v32 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v32 == 0.0 )
  {
    v34 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
  }
  else
  {
    v33 = 1.0 / v32;
    v34 = (float)(1.0 / v32) * v255;
    v35 = v33 * v254;
    v36 = v33 * v253;
  }
  *(float *)&dword_140404A6C[278525137] = v36;
  *(float *)&dword_140404A6C[278525138] = v35;
  *(float *)&dword_140404A6C[278525139] = v34;
  v37 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278525127] = 0;
  dword_140404A6C[278525128] = -1115684864;
  dword_140404A6C[278525129] = 1052770304;
  dword_140404A6C[278525154] = 1023410176;
  *(float *)&v37 = v37 + v37;
  dword_140404A6C[278525155] = 1032847360;
  dword_140404A6C[278525156] = 1052770304;
  dword_140404A6C[278526342] = 0;
  dword_140404A6C[278525140] = LODWORD(v37);
  *(float *)&v37 = *(float *)&dword_140404A6C[278525099]
                 * *(float *)&dword_140404A6C[6 * dword_140404A6C[278525096] + 437914197];
  dword_140404A6C[278526343] = -1124073472;
  dword_140404A6C[278526344] = 1052770304;
  dword_140404A6C[278525464] = 1;
  dword_140404A6C[278526358] = 75;
  dword_140404A6C[278526361] = 0;
  dword_140404A6C[278526359] = 1061158912;
  *(float *)&dword_140404A6C[278525149] = *(float *)&v37 * 0.25;
  strcpy((char *)&dword_140404A6C[278526369], "M-16 Magazine");
  dword_140404A6C[278526366] = 30;
  dword_140404A6C[278526422] = 1031798784;
  dword_140404A6C[278526423] = 1040187392;
  dword_140404A6C[278526424] = 1048576000;
  dword_140404A6C[278526389] = 0;
  dword_140404A6C[278526390] = -1115684864;
  dword_140404A6C[278526391] = -1111490560;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v38 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v38 == 0.0 )
  {
    v40 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
  }
  else
  {
    v39 = 1.0 / v38;
    v40 = (float)(1.0 / v38) * v255;
    v41 = v39 * v254;
    v42 = v39 * v253;
  }
  *(float *)&dword_140404A6C[278526401] = v42;
  *(float *)&dword_140404A6C[278526402] = v41;
  *(float *)&dword_140404A6C[278526403] = v40;
  v43 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278526733], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278526431] = 1;
  dword_140404A6C[278530162] = 300;
  dword_140404A6C[278530165] = 1;
  *(float *)&v43 = v43 + v43;
  dword_140404A6C[278530168] = 2;
  dword_140404A6C[278530167] = 5;
  dword_140404A6C[278530171] = 1087722837;
  dword_140404A6C[278530172] = 1023969417;
  *(_QWORD *)&dword_140404A6C[278530169] = 90;
  dword_140404A6C[278526404] = LODWORD(v43);
  dword_140404A6C[278530163] = 1075838976;
  dword_140404A6C[278530173] = 3493965;
  dword_140404A6C[278530222] = 1025507328;
  dword_140404A6C[278530225] = 1025507328;
  dword_140404A6C[278530223] = 1056964608;
  dword_140404A6C[278530224] = 1048576000;
  *(float *)&dword_140404A6C[278530221] = (float)(*(float *)&dword_140404A6C[437914209] * 6.6666665) * 0.25;
  *(_QWORD *)&dword_140404A6C[278530189] = 0;
  dword_140404A6C[278530191] = -1094881116;
  dword_140404A6C[278530226] = 1023410176;
  dword_140404A6C[278530227] = 1032847360;
  dword_140404A6C[278530228] = 1052770304;
  *(_QWORD *)&dword_140404A6C[278530192] = 2;
  dword_140404A6C[278530194] = -1111490560;
  dword_140404A6C[278530195] = 1031798784;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v44 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v44 == 0.0 )
  {
    v46 = 0.0;
    v47 = 0.0;
    v48 = 0.0;
  }
  else
  {
    v45 = 1.0 / v44;
    v46 = (float)(1.0 / v44) * v255;
    v47 = v45 * v254;
    v48 = v45 * v253;
  }
  *(float *)&dword_140404A6C[278530205] = v48;
  *(float *)&dword_140404A6C[278530206] = v47;
  *(float *)&dword_140404A6C[278530207] = v46;
  v49 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278530196] = 0;
  dword_140404A6C[278530197] = -1115684864;
  dword_140404A6C[278530198] = -1107296256;
  v259 = 1065353216;
  *(float *)&v49 = v49 + v49;
  dword_140404A6C[278530208] = LODWORD(v49);
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v50 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v50 == 0.0 )
  {
    v52 = 0.0;
    v53 = 0.0;
    v54 = 0.0;
  }
  else
  {
    v51 = 1.0 / v50;
    v52 = (float)(1.0 / v50) * v255;
    v53 = v51 * v254;
    v54 = v51 * v253;
  }
  *(float *)&dword_140404A6C[278530209] = v54;
  *(float *)&dword_140404A6C[278530210] = v53;
  *(float *)&dword_140404A6C[278530211] = v52;
  v55 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278531441], "MP5 Magazine");
  *(float *)&v55 = v55 + v55;
  dword_140404A6C[278530199] = 0;
  dword_140404A6C[278530200] = -1115684864;
  dword_140404A6C[278530201] = 1052770304;
  dword_140404A6C[278531414] = 0;
  dword_140404A6C[278531415] = -1115684864;
  dword_140404A6C[278530212] = LODWORD(v55);
  dword_140404A6C[278531416] = 1052770304;
  dword_140404A6C[278530536] = 1;
  dword_140404A6C[278531430] = 30;
  dword_140404A6C[278531433] = 0;
  dword_140404A6C[278531431] = 1059061760;
  dword_140404A6C[278531438] = 30;
  dword_140404A6C[278531494] = 1031798784;
  dword_140404A6C[278531495] = 1040187392;
  dword_140404A6C[278531496] = 1048576000;
  dword_140404A6C[278531461] = 0;
  dword_140404A6C[278531462] = -1115684864;
  dword_140404A6C[278531463] = -1111490560;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v56 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v56 == 0.0 )
  {
    v58 = 0.0;
    v59 = 0.0;
    v60 = 0.0;
  }
  else
  {
    v57 = 1.0 / v56;
    v58 = (float)(1.0 / v56) * v255;
    v59 = v57 * v254;
    v60 = v57 * v253;
  }
  *(float *)&dword_140404A6C[278531473] = v60;
  *(float *)&dword_140404A6C[278531474] = v59;
  *(float *)&dword_140404A6C[278531475] = v58;
  v61 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278531507] = 1;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278531805], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  *(float *)&v61 = v61 + v61;
  dword_140404A6C[278531476] = LODWORD(v61);
  sub_1400E7F80(9, "data/uzi.itm");
  dword_140404A6C[278532698] = 1000;
  dword_140404A6C[278532701] = 1;
  dword_140404A6C[278532704] = 2;
  dword_140404A6C[278532703] = 6;
  dword_140404A6C[278532707] = 1087722837;
  dword_140404A6C[278532708] = 1028443341;
  *(_QWORD *)&dword_140404A6C[278532705] = 90;
  dword_140404A6C[278532699] = 1075838976;
  dword_140404A6C[278532709] = 6912597;
  dword_140404A6C[278532758] = 1025507328;
  dword_140404A6C[278532761] = 1025507328;
  dword_140404A6C[278532759] = 1056964608;
  dword_140404A6C[278532760] = 1048576000;
  dword_140404A6C[278532728] = 2;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v62 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v62 == 0.0 )
  {
    v64 = 0.0;
    v65 = 0.0;
    v66 = 0.0;
  }
  else
  {
    v63 = 1.0 / v62;
    v64 = (float)(1.0 / v62) * v255;
    v65 = v63 * v254;
    v66 = v63 * v253;
  }
  *(float *)&dword_140404A6C[278532741] = v66;
  *(float *)&dword_140404A6C[278532742] = v65;
  *(float *)&dword_140404A6C[278532743] = v64;
  v67 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  *(float *)&v67 = v67 + v67;
  v258 = xmmword_140278D30;
  dword_140404A6C[278532744] = LODWORD(v67);
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v68 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v68 == 0.0 )
  {
    v70 = 0.0;
    v71 = 0.0;
    v72 = 0.0;
  }
  else
  {
    v69 = 1.0 / v68;
    v70 = (float)(1.0 / v68) * v255;
    v71 = v69 * v254;
    v72 = v69 * v253;
  }
  *(float *)&dword_140404A6C[278532745] = v72;
  *(float *)&dword_140404A6C[278532746] = v71;
  *(float *)&dword_140404A6C[278532747] = v70;
  v73 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278532735] = 0;
  dword_140404A6C[278532736] = -1115684864;
  dword_140404A6C[278532737] = 1052770304;
  *(float *)&v73 = v73 + v73;
  dword_140404A6C[278532762] = 1031798784;
  dword_140404A6C[278532763] = 1035993088;
  dword_140404A6C[278532764] = 1050673152;
  dword_140404A6C[278533072] = 1;
  dword_140404A6C[278533950] = 0;
  dword_140404A6C[278532748] = LODWORD(v73);
  *(float *)&v73 = *(float *)&dword_140404A6C[278532707]
                 * *(float *)&dword_140404A6C[6 * dword_140404A6C[278532704] + 437914197];
  dword_140404A6C[278533951] = -1115684864;
  dword_140404A6C[278533952] = 1052770304;
  *(float *)&dword_140404A6C[278532757] = *(float *)&v73 * 0.25;
  sub_1400E7F80(10, "data/uzi_magazine.itm");
  strcpy((char *)&dword_140404A6C[278533977], "Uzi Magazine");
  dword_140404A6C[278533966] = 100;
  dword_140404A6C[278533969] = 0;
  dword_140404A6C[278533967] = 1059061760;
  dword_140404A6C[278533974] = 30;
  dword_140404A6C[278534030] = 1031798784;
  dword_140404A6C[278534031] = 1040187392;
  dword_140404A6C[278534032] = 1040187392;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v74 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v74 == 0.0 )
  {
    v76 = 0.0;
    v77 = 0.0;
    v78 = 0.0;
  }
  else
  {
    v75 = 1.0 / v74;
    v76 = (float)(1.0 / v74) * v255;
    v77 = v75 * v254;
    v78 = v75 * v253;
  }
  *(float *)&dword_140404A6C[278534009] = v78;
  *(float *)&dword_140404A6C[278534010] = v77;
  *(float *)&dword_140404A6C[278534011] = v76;
  v79 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278527637], "Magnum");
  *(float *)&v79 = v79 + v79;
  dword_140404A6C[278534045] = 1;
  dword_140404A6C[278534012] = LODWORD(v79);
  dword_140404A6C[278527627] = 1067450368;
  dword_140404A6C[278527655] = -1090330175;
  dword_140404A6C[278527626] = 10000;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278534341], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278527629] = 1;
  dword_140404A6C[278527630] = 1;
  dword_140404A6C[278527632] = 3;
  dword_140404A6C[278527631] = 30;
  *(float *)&dword_140404A6C[278527685] = (float)(*(float *)&dword_140404A6C[437914215] * 7.6666665) * 0.5;
  strcpy((char *)&dword_140404A6C[278528905], ".45 Bullets");
  dword_140404A6C[278535263] = -1098907648;
  dword_140404A6C[278527635] = 1089819989;
  dword_140404A6C[278527636] = 1023969417;
  *(_QWORD *)&dword_140404A6C[278527633] = 18;
  dword_140404A6C[278527686] = 1031798784;
  dword_140404A6C[278527689] = 1031798784;
  dword_140404A6C[278527687] = 1052770304;
  dword_140404A6C[278527688] = 1040187392;
  *(_QWORD *)&dword_140404A6C[278527653] = 0;
  dword_140404A6C[278527657] = 0;
  dword_140404A6C[278527658] = -1107296256;
  dword_140404A6C[278527659] = 1031798784;
  dword_140404A6C[278527690] = 1031798784;
  dword_140404A6C[278527691] = 1035993088;
  dword_140404A6C[278527692] = 1044381696;
  dword_140404A6C[278528000] = 1;
  dword_140404A6C[278528894] = 1000;
  dword_140404A6C[278528897] = 0;
  dword_140404A6C[278528895] = 1056964608;
  dword_140404A6C[278528902] = 6;
  dword_140404A6C[278528958] = 1031798784;
  dword_140404A6C[278528959] = 1040187392;
  dword_140404A6C[278528960] = 1048576000;
  dword_140404A6C[278528969] = 1;
  __builtin_memcpy((void *)&dword_140404A6C[278529269], (const void *)&dword_140404A6C[278534341], 16);
  dword_140404A6C[278535234] = 50;
  dword_140404A6C[278535237] = 1;
  dword_140404A6C[278535238] = 1;
  dword_140404A6C[278535240] = 2;
  dword_140404A6C[278535239] = 30;
  dword_140404A6C[278535243] = 1087722837;
  dword_140404A6C[278535244] = 1023969417;
  *(_QWORD *)&dword_140404A6C[278535241] = 32;
  dword_140404A6C[278535235] = 1065353216;
  dword_140404A6C[278535245] = 7171385;
  dword_140404A6C[278535294] = 1023410176;
  dword_140404A6C[278535297] = 1023410176;
  dword_140404A6C[278535295] = 1048576000;
  dword_140404A6C[278535296] = 1040187392;
  *(_QWORD *)&dword_140404A6C[278535261] = 0;
  dword_140404A6C[278535298] = 1040187392;
  dword_140404A6C[278535299] = 1044381696;
  dword_140404A6C[278535300] = 1052770304;
  *(_QWORD *)&dword_140404A6C[278535264] = 1;
  dword_140404A6C[278535266] = -1115684864;
  dword_140404A6C[278535267] = -1124073472;
  v259 = 1065353216;
  *(float *)&dword_140404A6C[278535293] = (float)(*(float *)&dword_140404A6C[437914209] * 6.6666665) * 0.5;
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v80 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v80 == 0.0 )
  {
    v82 = 0.0;
    v83 = 0.0;
    v84 = 0.0;
  }
  else
  {
    v81 = 1.0 / v80;
    v82 = (float)(1.0 / v80) * v255;
    v83 = v81 * v254;
    v84 = v81 * v253;
  }
  *(float *)&dword_140404A6C[278535277] = v84;
  *(float *)&dword_140404A6C[278535278] = v83;
  *(float *)&dword_140404A6C[278535279] = v82;
  v85 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278535608] = 1;
  dword_140404A6C[278536502] = 5;
  *(float *)&v85 = v85 + v85;
  dword_140404A6C[278536505] = 0;
  dword_140404A6C[278536503] = 1056964608;
  dword_140404A6C[278536510] = 12;
  dword_140404A6C[278536566] = 1031798784;
  dword_140404A6C[278535280] = LODWORD(v85);
  strcpy((char *)&dword_140404A6C[278536513], "9mm Magazine");
  dword_140404A6C[278536567] = 1040187392;
  dword_140404A6C[278536568] = 1048576000;
  dword_140404A6C[278536583] = 1;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v86 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v86 == 0.0 )
  {
    v88 = 0.0;
    v89 = 0.0;
    v90 = 0.0;
  }
  else
  {
    v87 = 1.0 / v86;
    v88 = (float)(1.0 / v86) * v255;
    v89 = v87 * v254;
    v90 = v87 * v253;
  }
  *(float *)&dword_140404A6C[278536545] = v90;
  *(float *)&dword_140404A6C[278536546] = v89;
  *(float *)&dword_140404A6C[278536547] = v88;
  v91 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278536877], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278539038] = 10;
  dword_140404A6C[278539041] = 0;
  dword_140404A6C[278539046] = 2;
  *(float *)&v91 = v91 + v91;
  dword_140404A6C[278539039] = 1065353216;
  *(_QWORD *)&dword_140404A6C[278539049] = 0x656761646E6142LL;
  v259 = 1065353216;
  dword_140404A6C[278536548] = LODWORD(v91);
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v92 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v92 == 0.0 )
  {
    v94 = 0.0;
    v95 = 0.0;
    v96 = 0.0;
  }
  else
  {
    v93 = 1.0 / v92;
    v94 = (float)(1.0 / v92) * v255;
    v95 = v93 * v254;
    v96 = v93 * v253;
  }
  *(float *)&dword_140404A6C[278539081] = v96;
  *(float *)&dword_140404A6C[278539082] = v95;
  *(float *)&dword_140404A6C[278539083] = v94;
  v97 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278540317], "Briefcase");
  dword_140404A6C[278539102] = 1048576000;
  dword_140404A6C[278539103] = 1040187392;
  *(float *)&v97 = v97 + v97;
  dword_140404A6C[278539104] = 1048576000;
  dword_140404A6C[278540306] = 50;
  dword_140404A6C[278540309] = 0;
  dword_140404A6C[278540307] = 1082130432;
  dword_140404A6C[278539084] = LODWORD(v97);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278539413], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278540370] = 1050673152;
  dword_140404A6C[278540371] = 1040187392;
  dword_140404A6C[278540372] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278540336] = 1;
  dword_140404A6C[278540338] = 0;
  dword_140404A6C[278540339] = 1048576000;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v98 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v98 == 0.0 )
  {
    v100 = 0.0;
    v101 = 0.0;
    v102 = 0.0;
  }
  else
  {
    v99 = 1.0 / v98;
    v100 = (float)(1.0 / v98) * v255;
    v101 = v99 * v254;
    v102 = v99 * v253;
  }
  *(float *)&dword_140404A6C[278540349] = v102;
  *(float *)&dword_140404A6C[278540350] = v101;
  *(float *)&dword_140404A6C[278540351] = v100;
  v103 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  *(float *)&v103 = v103 + v103;
  dword_140404A6C[278541577] = 0;
  dword_140404A6C[278541575] = 1082130432;
  dword_140404A6C[278541638] = 1050673152;
  dword_140404A6C[278541639] = 1040187392;
  dword_140404A6C[278540352] = LODWORD(v103);
  strcpy((char *)&dword_140404A6C[278541585], "Open Briefcase");
  dword_140404A6C[278541640] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278541604] = 1;
  dword_140404A6C[278541606] = -1107296256;
  dword_140404A6C[278541607] = 1048576000;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v104 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v104 == 0.0 )
  {
    v106 = 0.0;
    v107 = 0.0;
    v108 = 0.0;
  }
  else
  {
    v105 = 1.0 / v104;
    v106 = (float)(1.0 / v104) * v255;
    v107 = v105 * v254;
    v108 = v105 * v253;
  }
  *(float *)&dword_140404A6C[278541617] = v108;
  *(float *)&dword_140404A6C[278541618] = v107;
  *(float *)&dword_140404A6C[278541619] = v106;
  v109 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278542853], "Cash");
  dword_140404A6C[278542845] = 0;
  dword_140404A6C[278542843] = 1036831949;
  *(float *)&v109 = v109 + v109;
  v259 = 1065353216;
  dword_140404A6C[278541620] = LODWORD(v109);
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v110 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v110 == 0.0 )
  {
    v112 = 0.0;
    v113 = 0.0;
    v114 = 0.0;
  }
  else
  {
    v111 = 1.0 / v110;
    v112 = (float)(1.0 / v110) * v255;
    v113 = v111 * v254;
    v114 = v111 * v253;
  }
  *(float *)&dword_140404A6C[278542885] = v114;
  *(float *)&dword_140404A6C[278542886] = v113;
  *(float *)&dword_140404A6C[278542887] = v112;
  v115 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278544121], "Cash");
  dword_140404A6C[278542906] = 1040187392;
  dword_140404A6C[278542907] = 1031798784;
  *(float *)&v115 = v115 + v115;
  dword_140404A6C[278542908] = 1048576000;
  dword_140404A6C[278542928] = 1;
  dword_140404A6C[278544113] = 0;
  dword_140404A6C[278544111] = 1036831949;
  dword_140404A6C[278542888] = LODWORD(v115);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278543217], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  *(_QWORD *)&dword_140404A6C[278544141] = 0;
  dword_140404A6C[278544143] = 1040187392;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  v116 = fsqrt((float)((float)(v253 * v253) + (float)(v254 * v254)) + (float)(v255 * v255));
  if ( v116 == 0.0 )
  {
    v118 = 0.0;
    v119 = 0.0;
    v120 = 0.0;
  }
  else
  {
    v117 = 1.0 / v116;
    v118 = (float)(1.0 / v116) * v255;
    v119 = v117 * v254;
    v120 = v117 * v253;
  }
  *(float *)&dword_140404A6C[278544153] = v120;
  *(float *)&dword_140404A6C[278544154] = v119;
  *(float *)&dword_140404A6C[278544155] = v118;
  v121 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278544174] = 1040187392;
  dword_140404A6C[278544175] = 1031798784;
  *(float *)&v121 = v121 + v121;
  dword_140404A6C[278544176] = 1048576000;
  dword_140404A6C[278544196] = 1;
  dword_140404A6C[278545378] = 20;
  dword_140404A6C[278545381] = 0;
  dword_140404A6C[278545379] = 1065353216;
  dword_140404A6C[278544156] = LODWORD(v121);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278544485], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&dword_140404A6C[278545389], "Black Disk");
  dword_140404A6C[278545442] = 1048576000;
  dword_140404A6C[278545443] = 1035993088;
  dword_140404A6C[278545444] = 1048576000;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278545421], &v253);
  v122 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278545464] = 1;
  dword_140404A6C[278545487] = 1;
  *(float *)&v122 = v122 + v122;
  dword_140404A6C[278546649] = 0;
  dword_140404A6C[278546647] = 1065353216;
  dword_140404A6C[278546710] = 1048576000;
  dword_140404A6C[278546711] = 1035993088;
  dword_140404A6C[278545424] = LODWORD(v122);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278545753], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278546712] = 1048576000;
  strcpy((char *)&dword_140404A6C[278546657], "Green Disk");
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278546689], &v253);
  v123 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278546732] = 1;
  dword_140404A6C[278546755] = 1;
  dword_140404A6C[278547917] = 0;
  dword_140404A6C[278547915] = 1065353216;
  *(float *)&v123 = v123 + v123;
  dword_140404A6C[278547978] = 1048576000;
  dword_140404A6C[278547979] = 1035993088;
  dword_140404A6C[278547980] = 1048576000;
  v259 = 1065353216;
  dword_140404A6C[278546692] = LODWORD(v123);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278547021], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&dword_140404A6C[278547925], "Blue Disk");
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278547957], &v253);
  v124 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278548000] = 1;
  dword_140404A6C[278548023] = 1;
  *(float *)&v124 = v124 + v124;
  dword_140404A6C[278549185] = 0;
  dword_140404A6C[278549183] = 1065353216;
  dword_140404A6C[278549246] = 1048576000;
  dword_140404A6C[278549247] = 1035993088;
  dword_140404A6C[278547960] = LODWORD(v124);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278548289], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278549248] = 1048576000;
  strcpy((char *)&dword_140404A6C[278549193], "White Disk");
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278549225], &v253);
  v125 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  *(float *)&v125 = v125 + v125;
  dword_140404A6C[278549268] = 1;
  dword_140404A6C[278549291] = 1;
  dword_140404A6C[278550453] = 0;
  dword_140404A6C[278550451] = 1065353216;
  dword_140404A6C[278549228] = LODWORD(v125);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278549557], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278550514] = 1048576000;
  strcpy((char *)&dword_140404A6C[278550461], "Gold Disk");
  dword_140404A6C[278550515] = 1035993088;
  dword_140404A6C[278550516] = 1048576000;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278550493], &v253);
  v126 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278550536] = 1;
  dword_140404A6C[278550559] = 1;
  dword_140404A6C[278551721] = 0;
  dword_140404A6C[278551719] = 1065353216;
  *(float *)&v126 = v126 + v126;
  dword_140404A6C[278551782] = 1048576000;
  dword_140404A6C[278551783] = 1035993088;
  dword_140404A6C[278551784] = 1048576000;
  v259 = 1065353216;
  dword_140404A6C[278550496] = LODWORD(v126);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278550825], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&dword_140404A6C[278551729], "Red Disk");
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278551761], &v253);
  v127 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278551804] = 1;
  dword_140404A6C[278551827] = 1;
  dword_140404A6C[278552989] = 0;
  dword_140404A6C[278552987] = 1065353216;
  *(float *)&v127 = v127 + v127;
  dword_140404A6C[278551764] = LODWORD(v127);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278552093], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  strcpy((char *)&dword_140404A6C[278552997], "Cell Phone");
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278553029], &v253);
  v128 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278553050] = 1033895936;
  dword_140404A6C[278553051] = 1047527424;
  *(float *)&v128 = v128 + v128;
  dword_140404A6C[278553052] = 1033895936;
  dword_140404A6C[278554257] = 0;
  dword_140404A6C[278554254] = 100;
  dword_140404A6C[278554255] = 1061158912;
  dword_140404A6C[278553032] = LODWORD(v128);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278553361], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  v259 = 1065353216;
  strcpy((char *)&dword_140404A6C[278554265], "Walkie-talkie");
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278554297], &v253);
  v129 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278554319] = 1041235968;
  dword_140404A6C[278554318] = 1027604480;
  dword_140404A6C[278554320] = 1027604480;
  dword_140404A6C[278555525] = 0;
  *(float *)&v129 = v129 + v129;
  dword_140404A6C[278555523] = 1065353216;
  dword_140404A6C[278555533] = 7955787;
  v259 = 1065353216;
  dword_140404A6C[278554300] = LODWORD(v129);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278554629], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278555565], &v253);
  v130 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278577089], "Bottle");
  *(float *)&v130 = v130 + v130;
  strcpy((char *)&dword_140404A6C[278570749], "computer");
  dword_140404A6C[278555568] = LODWORD(v130);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278555897], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278555586] = 1031798784;
  strcpy((char *)&dword_140404A6C[278558069], "Newspaper");
  __builtin_memcpy((void *)&dword_140404A6C[278558089], (const void *)&xmmword_1402798C0, 16);
  dword_140404A6C[278555587] = 1031798784;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278558433], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278555588] = 1040187392;
  dword_140404A6C[278558061] = 0;
  dword_140404A6C[278558059] = 1056964608;
  dword_140404A6C[278558122] = 1048576000;
  dword_140404A6C[278558123] = 1040187392;
  dword_140404A6C[278558124] = 1048576000;
  dword_140404A6C[278558093] = 0;
  dword_140404A6C[278558094] = 1044381696;
  *(_QWORD *)&dword_140404A6C[278568204] = 1;
  dword_140404A6C[278568203] = 1101004800;
  dword_140404A6C[278568213] = 7892802;
  dword_140404A6C[278568266] = 1048576000;
  dword_140404A6C[278568267] = 1048576000;
  dword_140404A6C[278568268] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278577080] = 1;
  dword_140404A6C[278577079] = 1082130432;
  dword_140404A6C[278577142] = 1040187392;
  dword_140404A6C[278577143] = 1048576000;
  dword_140404A6C[278577144] = 1040187392;
  *(_QWORD *)&dword_140404A6C[278570740] = 1;
  dword_140404A6C[278570739] = 1109393408;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278570781], &v253);
  v131 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  *(float *)&v131 = v131 + v131;
  strcpy((char *)&dword_140404A6C[278572017], "arcade");
  dword_140404A6C[278570784] = LODWORD(v131);
  dword_140404A6C[278571065] = -1108297869;
  dword_140404A6C[278571064] = 0;
  dword_140404A6C[278571066] = 1031798784;
  dword_140404A6C[278570802] = 1048576000;
  dword_140404A6C[278570803] = 1048576000;
  dword_140404A6C[278570804] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278572008] = 1;
  dword_140404A6C[278572007] = 1109393408;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278572049], &v253);
  v132 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  dword_140404A6C[278572332] = 0;
  *(_QWORD *)&dword_140404A6C[278569481] = 0x786F4220676942LL;
  strcpy((char *)&dword_140404A6C[278573285], "Table");
  *(float *)&v132 = v132 + v132;
  dword_140404A6C[278572052] = LODWORD(v132);
  dword_140404A6C[278573275] = 1134559232;
  strcpy((char *)&dword_140404A6C[278574553], "tabletest2");
  dword_140404A6C[278575811] = 1117782016;
  dword_140404A6C[278572333] = -1115684864;
  dword_140404A6C[278572334] = 1040187392;
  dword_140404A6C[278572070] = 1048576000;
  dword_140404A6C[278572071] = 1048576000;
  dword_140404A6C[278572072] = 1048576000;
  *(_QWORD *)&dword_140404A6C[278569472] = 1;
  dword_140404A6C[278569471] = 1101004800;
  dword_140404A6C[278569534] = 1065353216;
  dword_140404A6C[278569535] = 1040187392;
  dword_140404A6C[278569536] = 1056964608;
  *(_QWORD *)&dword_140404A6C[278573276] = 1;
  dword_140404A6C[278573338] = 1065353216;
  dword_140404A6C[278573339] = 1056964608;
  dword_140404A6C[278573340] = 1056964608;
  *(_QWORD *)&dword_140404A6C[278574544] = 1;
  dword_140404A6C[278574543] = 1109393408;
  dword_140404A6C[278574606] = 1065353216;
  dword_140404A6C[278574607] = 1056964608;
  dword_140404A6C[278574608] = 1056964608;
  *(_QWORD *)&dword_140404A6C[278575812] = 1;
  strcpy((char *)&dword_140404A6C[278575821], "cubewall");
  dword_140404A6C[278575874] = 1071644672;
  dword_140404A6C[278575875] = 1061158912;
  dword_140404A6C[278575876] = 1040187392;
  sub_1400E7F80(45, "data/watermelon.itm");
  strcpy((char *)&dword_140404A6C[278578357], "Watermelon");
  strcpy((char *)&dword_140404A6C[278556801], "Door");
  dword_140404A6C[278578348] = 1;
  dword_140404A6C[278578346] = 10;
  dword_140404A6C[278578347] = 1082130432;
  dword_140404A6C[278578410] = 1040187392;
  dword_140404A6C[278578411] = 1048576000;
  dword_140404A6C[278578412] = 1040187392;
  *(_QWORD *)&dword_140404A6C[278556792] = 1;
  dword_140404A6C[278556791] = 1101004800;
  *(_QWORD *)&dword_140404A6C[278556821] = 1054867456;
  dword_140404A6C[278556823] = 0;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14007B2A0((__int64)&v257, (float *)&v257 + 3, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278556833], &v253);
  v133 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278559337], "Burger");
  *(float *)&v133 = v133 + v133;
  dword_140404A6C[278556854] = 1054867456;
  dword_140404A6C[278556856] = 1031798784;
  dword_140404A6C[278559329] = 0;
  dword_140404A6C[278559327] = 1065353216;
  dword_140404A6C[278556855] = 1066401792;
  dword_140404A6C[278556836] = LODWORD(v133);
  dword_140404A6C[278559334] = 8;
  *(_QWORD *)&dword_140404A6C[278559357] = 0;
  dword_140404A6C[278559359] = 1031798784;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278559369], &v253);
  v134 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278560605], "Desk");
  *(float *)&v134 = v134 + v134;
  strcpy((char *)&dword_140404A6C[278561873], "Lamp");
  dword_140404A6C[278559390] = 1040187392;
  dword_140404A6C[278559372] = LODWORD(v134);
  strcpy((char *)&dword_140404A6C[278563141], "Pay Phone");
  dword_140404A6C[278559391] = 1040187392;
  dword_140404A6C[278559392] = 1040187392;
  dword_140404A6C[278560597] = 0;
  dword_140404A6C[278560595] = 1098907648;
  dword_140404A6C[278560658] = 1056964608;
  dword_140404A6C[278560659] = 1056964608;
  dword_140404A6C[278560660] = 1056964608;
  dword_140404A6C[278561865] = 0;
  dword_140404A6C[278561863] = 1098907648;
  dword_140404A6C[278561926] = 1056964608;
  dword_140404A6C[278561927] = 1056964608;
  dword_140404A6C[278561928] = 1056964608;
  dword_140404A6C[278563133] = 0;
  dword_140404A6C[278563131] = 1065353216;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278563173], &v253);
  v135 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278564409], "Memo");
  dword_140404A6C[278563194] = 1033895936;
  dword_140404A6C[278563195] = 1047527424;
  *(float *)&v135 = v135 + v135;
  dword_140404A6C[278563196] = 1033895936;
  dword_140404A6C[278564401] = 0;
  dword_140404A6C[278564399] = 1056964608;
  dword_140404A6C[278564462] = 1048576000;
  dword_140404A6C[278563176] = LODWORD(v135);
  __builtin_memcpy((void *)&dword_140404A6C[278564429], (const void *)&xmmword_1402798C0, 16);
  dword_140404A6C[278564463] = 1040187392;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278564773], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  dword_140404A6C[278564464] = 1048576000;
  dword_140404A6C[278564433] = 0;
  dword_140404A6C[278564434] = 1044381696;
  dword_140404A6C[278537770] = 1000;
  dword_140404A6C[278537773] = 0;
  dword_140404A6C[278537778] = 1;
  dword_140404A6C[278537771] = 1061158912;
  *(_QWORD *)&dword_140404A6C[278537781] = 0x6564616E657247LL;
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278537813], &v253);
  v136 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278565677], "Soccer Ball");
  dword_140404A6C[278537834] = 1031798784;
  dword_140404A6C[278537835] = 1031798784;
  *(float *)&v136 = v136 + v136;
  dword_140404A6C[278537836] = 1031798784;
  dword_140404A6C[278565666] = 100;
  dword_140404A6C[278565669] = 0;
  dword_140404A6C[278565674] = 1;
  dword_140404A6C[278537816] = LODWORD(v136);
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278538145], _mm_load_si128((     __m128i *)&xmmword_140278EE0));
  v259 = 1065353216;
  dword_140404A6C[278565667] = 1055286886;
  v257 = xmmword_140278D30;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278565709], &v253);
  v137 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  strcpy((char *)&dword_140404A6C[278566945], "Rope");
  dword_140404A6C[278565730] = 1038174126;
  dword_140404A6C[278565731] = 1038174126;
  *(float *)&v137 = v137 + v137;
  dword_140404A6C[278565732] = 1038174126;
  dword_140404A6C[278566934] = 100;
  dword_140404A6C[278566937] = 0;
  dword_140404A6C[278566942] = 0;
  dword_140404A6C[278565712] = LODWORD(v137);
  dword_140404A6C[278566935] = 0x40000000;
  v257 = xmmword_140278D30;
  v259 = 1065353216;
  v258 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278566977], &v253);
  v138 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  v259 = 1065353216;
  v257 = xmmword_140278D30;
  *(float *)&v138 = v138 + v138;
  v258 = xmmword_140278D30;
  dword_140404A6C[278566980] = LODWORD(v138);
  sub_14007B2A0((__int64)&v257, (float *)&v257, sr_export_float_lane_container(1070141403));
  sub_14010E370(&v253, (float *)&v257);
  sub_14007A240((__int64)&dword_140404A6C[278566981], &v253);
  v139 = acos(fminf(fmaxf(v256, -1.0), 1.0));
  v140 = 0;
  dword_140404A6C[278566998] = 1031798784;
  v141 = 0;
  *(float *)&v139 = v139 + v139;
  dword_140404A6C[278566999] = 1048576000;
  dword_140404A6C[278567000] = 1031798784;
  dword_140404A6C[278566984] = LODWORD(v139);
  do
  {
    v142 = 1268 * v141;
    if ( *(float *)&dword_140404A6C[1268 * v141 + 278521350] <= 0.0
      || (v143 = *(float *)&dword_140404A6C[v142 + 278521351], !(v143 > 0.0f))
      || (v144 = *(float *)&dword_140404A6C[v142 + 278521352], !(v144 > 0.0f)) )
    {
      v147 = 1.0;
      v145 = (float *)(void *)&dword_140404A6C[v142 + 278521353];
      v146 = (float *)(void *)&dword_140404A6C[v142 + 278521354];
      *v145 = 1.0;
      *v146 = 1.0;
    }
    else
    {
      v145 = (float *)(void *)&dword_140404A6C[v142 + 278521353];
      v146 = (float *)(void *)&dword_140404A6C[v142 + 278521354];
      *v145 = 3.0f / (float)((float)(v144 * v144) + (float)(v143 * v143));
      *v146 = 3.0f
            / (float)((float)(*(float *)&dword_140404A6C[v142 + 278521352] * *(float *)&dword_140404A6C[v142 + 278521352])
                    + (float)(*(float *)&dword_140404A6C[v142 + 278521350] * *(float *)&dword_140404A6C[v142 + 278521350]));
      v147 = 3.0f
           / (float)((float)(*(float *)&dword_140404A6C[v142 + 278521351] * *(float *)&dword_140404A6C[v142 + 278521351])
                   + (float)(*(float *)&dword_140404A6C[v142 + 278521350] * *(float *)&dword_140404A6C[v142 + 278521350]));
    }
    *(float *)&dword_140404A6C[1268 * v141 + 278521355] = v147;
    if ( v140 != 35 )
    {
      if ( !v140 || v140 == 9 )
      {
        *v145 = 1.0 / *(float *)&dword_140404A6C[1268 * v141 + 278522406];
        *v146 = 1.0 / *(float *)&dword_140404A6C[1268 * v141 + 278522407];
        *(float *)&dword_140404A6C[1268 * v141 + 278521355] = 1.0 / *(float *)&dword_140404A6C[1268 * v141 + 278522408];
      }
      switch ( v140 )
      {
        case '\'':
          v148 = "data/item/computer.it3";
          v149 = 39;
          break;
        case '(':
          v148 = "data/item/computer.it3";
          v149 = 40;
          break;
        case '*':
          v148 = "data/item/tabletest2.it3";
          v149 = 42;
          break;
        case '+':
          v148 = "data/item/cubewall.it3";
          v149 = 43;
          break;
        default:
          goto LABEL_84;
      }
      sub_1400CB5F0(v149, v148);
      goto LABEL_84;
    }
    *v145 = 2.2222223
          / (float)(*(float *)&dword_140404A6C[v142 + 278521350] * *(float *)&dword_140404A6C[v142 + 278521350]);
    *v146 = 2.2222223
          / (float)(*(float *)&dword_140404A6C[v142 + 278521350] * *(float *)&dword_140404A6C[v142 + 278521350]);
    *(float *)&dword_140404A6C[1268 * v141 + 278521355] = 2.2222223
                                                        / (float)(*(float *)&dword_140404A6C[1268 * v141 + 278521350]
                                                                * *(float *)&dword_140404A6C[1268 * v141 + 278521350]);
LABEL_84:
    if ( !dword_140404A6C[1268 * v141 + 278521288] || v140 == 42 )
      goto LABEL_152;
    if ( v140 == 44 )
    {
      sub_140054750(44, sr_export_float_lane_container(1040187392), 0.09375, 0.5);
    }
    else if ( v140 == 45 )
    {
      sub_140054750(45, sr_export_float_lane_container(1044381696), 0.09375, 0.60000002);
    }
    else
    {
      dword_140404A6C[1268 * v141 + 278522247] = 0;
      *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249] = sr_path_malloc(96);
      v150 = 2;
      v151 = dword_140404A6C[1268 * v141 + 278522247];
      do
      {
        v152 = ((_BYTE)v150 - 2) & 3;
        if ( (((_BYTE)v150 - 2) & 3) == 0 || v152 == 3 )
          v153 = -*(float *)&dword_140404A6C[v142 + 278521350];
        else
          v153 = *(float *)&dword_140404A6C[v142 + 278521350];
        v154 = *(float *)&dword_140404A6C[v142 + 278521351];
        if ( v150 - 2 < 4 )
          v154 = -v154;
        v155 = *(float *)&dword_140404A6C[v142 + 278521352];
        if ( v152 < 2 )
          v155 = -v155;
        v156 = (int)(3 * v151);
        v157 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
        *(float *)(v157 + 4 * v156) = v153;
        *(float *)(v157 + 4 * v156 + 4) = v154;
        *(float *)(v157 + 4 * v156 + 8) = v155;
        v158 = dword_140404A6C[1268 * v141 + 278522247] + 1;
        dword_140404A6C[1268 * v141 + 278522247] = v158;
        v159 = ((_BYTE)v150 - 1) & 3;
        if ( (((_BYTE)v150 - 1) & 3) == 0 || v159 == 3 )
          v160 = -*(float *)&dword_140404A6C[v142 + 278521350];
        else
          v160 = *(float *)&dword_140404A6C[v142 + 278521350];
        v161 = *(float *)&dword_140404A6C[v142 + 278521351];
        if ( v150 - 1 < 4 )
          v161 = -v161;
        v162 = *(float *)&dword_140404A6C[v142 + 278521352];
        if ( v159 < 2 )
          v162 = -v162;
        v163 = (int)(3 * v158);
        v164 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
        *(float *)(v164 + 4 * v163) = v160;
        *(float *)(v164 + 4 * v163 + 4) = v161;
        *(float *)(v164 + 4 * v163 + 8) = v162;
        v165 = dword_140404A6C[1268 * v141 + 278522247] + 1;
        dword_140404A6C[1268 * v141 + 278522247] = v165;
        v166 = v150 & 3;
        if ( (v150 & 3) == 0 || v166 == 3 )
          v167 = -*(float *)&dword_140404A6C[v142 + 278521350];
        else
          v167 = *(float *)&dword_140404A6C[v142 + 278521350];
        v168 = *(float *)&dword_140404A6C[v142 + 278521351];
        if ( v150 < 4 )
          v168 = -v168;
        v169 = *(float *)&dword_140404A6C[v142 + 278521352];
        if ( v166 < 2 )
          v169 = -v169;
        v170 = (int)(3 * v165);
        v171 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
        *(float *)(v171 + 4 * v170) = v167;
        *(float *)(v171 + 4 * v170 + 4) = v168;
        *(float *)(v171 + 4 * v170 + 8) = v169;
        v172 = dword_140404A6C[1268 * v141 + 278522247] + 1;
        dword_140404A6C[1268 * v141 + 278522247] = v172;
        v173 = ((_BYTE)v150 + 1) & 3;
        if ( (((_BYTE)v150 + 1) & 3) == 0 || v173 == 3 )
          v174 = -*(float *)&dword_140404A6C[v142 + 278521350];
        else
          v174 = *(float *)&dword_140404A6C[v142 + 278521350];
        v175 = *(float *)&dword_140404A6C[v142 + 278521351];
        if ( v150 + 1 < 4 )
          v175 = -v175;
        v176 = *(float *)&dword_140404A6C[v142 + 278521352];
        if ( v173 < 2 )
          v176 = -v176;
        v150 += 4;
        v177 = (int)(3 * v172);
        v178 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
        *(float *)(v178 + 4 * v177) = v174;
        *(float *)(v178 + 4 * v177 + 4) = v175;
        *(float *)(v178 + 4 * v177 + 8) = v176;
        v151 = ++dword_140404A6C[1268 * v141 + 278522247];
      }
      while ( v150 - 2 < 8 );
      dword_140404A6C[1268 * v141 + 278522251] = 0;
      *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522253] = 0;
      dword_140404A6C[v142 + 278522255] = 0;
      dword_140404A6C[1268 * v141 + 278522256 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = 8;
      *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522257 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = sr_path_malloc(32);
      **(_DWORD **)&dword_140404A6C[1268 * v141 + 278522257 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = 0;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 4LL) = 1;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 8LL) = 2;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 12LL) = 3;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 16LL) = 4;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 20LL) = 5;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 24LL) = 6;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[1268 * v141
                                            + 278522257
                                            + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]]
                + 28LL) = 7;
      dword_140404A6C[1268 * v141 + 278522259 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = 0;
      v179 = sr_path_malloc(216);
      v180 = dword_1402B3664;
      *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522261 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = v179;
      do
      {
        v181 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v181)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v181)
                  + 8) = *(v180 - 1);
        v182 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v182)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v182)
                  + 12) = *v180;
        v183 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v183)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v183)
                  + 16) = v180[1];
        v184 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v184)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v184)
                  + 20) = v180[2];
        v185 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v185)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v185)
                  + 4) = 4;
        v186 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v186);
        v187 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v187)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v187)
                  + 8) = v180[3];
        v188 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v188)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v188)
                  + 12) = v180[4];
        v189 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v189)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v189)
                  + 16) = v180[5];
        v190 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v190)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v190)
                  + 20) = v180[6];
        v191 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v191)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v191)
                  + 4) = 4;
        v192 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v192);
        v193 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v193)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v193)
                  + 8) = v180[7];
        v194 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v194)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v194)
                  + 12) = v180[8];
        v195 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v195)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v195)
                  + 16) = v180[9];
        v196 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v196)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v196)
                  + 20) = v180[10];
        v180 += 12;
        v197 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v197)
                  + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v197)
                  + 4) = 4;
        v198 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v198);
      }
      while ( (__int64)v180 < (__int64)&dword_1402B36C4 );
      dword_140404A6C[1268 * v141 + 278522263 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = 0;
      v199 = sr_path_malloc(144);
      v200 = dword_1402B3754;
      *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522265 + 14 * (int)dword_140404A6C[1268 * v141 + 278522251]] = v199;
      do
      {
        v201 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v201)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v201)) = *(v200 - 1);
        v202 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v202)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v202)
                  + 4) = *v200;
        v203 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v203);
        v204 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v204)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v204)) = v200[1];
        v205 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v205)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v205)
                  + 4) = v200[2];
        v206 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v206);
        v207 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v207)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v207)) = v200[3];
        v208 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v208)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v208)
                  + 4) = v200[4];
        v209 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v209);
        v210 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v210)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v210)) = v200[5];
        v211 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v211)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v211)
                  + 4) = v200[6];
        v212 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v212);
        v213 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v213)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v213)) = v200[7];
        v214 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v214)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v214)
                  + 4) = v200[8];
        v215 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v215);
        v216 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v216)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v216)) = v200[9];
        v217 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v217)
                  + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v217)
                  + 4) = v200[10];
        v200 += 12;
        v218 = 5072 * v141 + 56LL * (int)dword_140404A6C[1268 * v141 + 278522251];
        ++*(unsigned int *)((char *)&dword_140404A6C[278522263] + v218);
      }
      while ( (__int64)v200 < (__int64)dword_1402B37B4 );
      ++dword_140404A6C[1268 * v141 + 278522251];
    }
    v219 = 0;
    if ( (int)dword_140404A6C[1268 * v141 + 278522259] > 0 )
    {
      v220 = 0;
      do
      {
        v221 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
        v222 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522261];
        v223 = 3 * *(_DWORD *)(v220 + v222 + 8);
        v224 = *(float *)(v221 + 4 * v223);
        v225 = *(float *)(v221 + 4 * v223 + 4);
        v226 = *(float *)(v221 + 4 * v223 + 8);
        v227 = 3 * *(_DWORD *)(v220 + v222 + 12);
        v228 = *(float *)(v221 + 4 * v227) - v224;
        v229 = *(float *)(v221 + 4 * v227 + 4) - v225;
        v230 = *(float *)(v221 + 4 * v227 + 8) - v226;
        v231 = 3 * *(_DWORD *)(v220 + v222 + 16);
        v232 = (float *)(v220 + v222 + 24);
        v233 = *(float *)(v221 + 4 * v231 + 4) - v225;
        v234 = *(float *)(v221 + 4 * v231 + 8) - v226;
        v235 = *(float *)(v221 + 4 * v231) - v224;
        *v232 = (float)(v233 * v230) - (float)(v234 * v229);
        v232[1] = (float)(v228 * v234) - (float)(v235 * v230);
        v232[2] = (float)(v235 * v229) - (float)(v228 * v233);
        sub_14007A240((__int64)v232, v232);
        ++v219;
        v220 += 36;
      }
      while ( v219 < (int)dword_140404A6C[1268 * v141 + 278522259] );
    }
    v236 = (int)dword_140404A6C[1268 * v141 + 278522247];
    v237 = 0;
    dword_140404A6C[349900653] = 0;
    v238 = 0;
    dword_140404A6C[349902702] = 0;
    dword_140404A6C[349907311] = 0;
    *(_QWORD *)&dword_140404A6C[349908848] = 1;
    *(_QWORD *)&dword_140404A6C[349908850] = 0;
    if ( v236 >= 4 )
    {
      v239 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
      v240 = ((unsigned __int64)(v236 - 4) >> 2) + 1;
      v241 = (unsigned int *)(v239 + 20);
      v238 = 4 * v240;
      do
      {
        if ( v237 < 512 )
        {
          v242 = 2LL * v237;
          dword_140404A6C[2 * v242 + 349900654] = *(v241 - 5);
          dword_140404A6C[2 * v242 + 349900655] = *(v241 - 4);
          dword_140404A6C[2 * v242 + 349900656] = *(v241 - 3);
          dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
          v237 = dword_140404A6C[349900653] + 1;
          dword_140404A6C[349900653] = v237;
          if ( v237 < 512 )
          {
            v243 = 2LL * v237;
            dword_140404A6C[2 * v243 + 349900654] = *(v241 - 2);
            dword_140404A6C[2 * v243 + 349900655] = *(v241 - 1);
            dword_140404A6C[2 * v243 + 349900656] = *v241;
            dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
            v237 = dword_140404A6C[349900653] + 1;
            dword_140404A6C[349900653] = v237;
            if ( v237 < 512 )
            {
              v244 = 2LL * v237;
              dword_140404A6C[2 * v244 + 349900654] = v241[1];
              dword_140404A6C[2 * v244 + 349900655] = v241[2];
              dword_140404A6C[2 * v244 + 349900656] = v241[3];
              dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
              v237 = dword_140404A6C[349900653] + 1;
              dword_140404A6C[349900653] = v237;
              if ( v237 < 512 )
              {
                v245 = 2LL * v237;
                dword_140404A6C[2 * v245 + 349900654] = v241[4];
                dword_140404A6C[2 * v245 + 349900655] = v241[5];
                dword_140404A6C[2 * v245 + 349900656] = v241[6];
                dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
                v237 = ++dword_140404A6C[349900653];
              }
            }
          }
        }
        v241 += 12;
        --v240;
      }
      while ( v240 );
      if ( v238 >= v236 )
        goto LABEL_148;
      goto LABEL_144;
    }
    if ( v236 > 0 )
    {
      v239 = *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522249];
LABEL_144:
      v246 = v236 - v238;
      v247 = (unsigned int *)(v239 + 12 * v238);
      do
      {
        if ( v237 < 512 )
        {
          v248 = 2LL * v237;
          dword_140404A6C[2 * v248 + 349900654] = *v247;
          dword_140404A6C[2 * v248 + 349900655] = v247[1];
          dword_140404A6C[2 * v248 + 349900656] = v247[2];
          dword_140404A6C[4 * dword_140404A6C[349900653] + 349900657] = 0;
          v237 = ++dword_140404A6C[349900653];
        }
        v247 += 3;
        --v246;
      }
      while ( v246 );
    }
LABEL_148:
    v249 = 0;
    if ( (int)dword_140404A6C[1268 * v141 + 278522259] > 0 )
    {
      v250 = 0;
      do
      {
        sub_140048BA0(
          *(_DWORD *)(v250 + *(_QWORD *)&dword_140404A6C[1268 * v141 + 278522261] + 4),
          (unsigned int *)(*(_QWORD *)&dword_140404A6C[1268 * v141 + 278522261] + 4 * (v249 + 8LL * v249 + 2)));
        ++v249;
        v250 += 36;
      }
      while ( v249 < (int)dword_140404A6C[1268 * v141 + 278522259] );
    }
    sub_14004A670((__int64)&dword_140404A6C[1268 * v140 + 278522365]);
    dword_140404A6C[v142 + 278521285] = 1;
LABEL_152:
    ++v140;
    ++v141;
  }
  while ( v140 < 46 );
  return;
}
#undef v252
#undef v253
#undef v254
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260

//----- (00000001400CB2D0) ----------------------------------------------------
__int64            sub_1400CB2D0(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  signed int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rcx
  char *v17; // rcx
  signed int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB2D0[32];
#define Buffer (*(int (*))(void *)(sr_frame_1400CB2D0 + 0)) /* [rsp+68h] */
#define v25 (*(int (*))(void *)(sr_frame_1400CB2D0 + 8)) /* [rsp+70h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400CB2D0 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[273322513], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[273322513]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[273322513] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 273322514];
      if ( a2 )
        sub_14020CE0C((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[273322513] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[273324050], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[273324050]), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = 0;
  v25 = 0;
  if ( (int)dword_140404A6C[273324050] > 0 )
  {
    v9 = &dword_140404A6C[273324567];
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_140404A6C[273324051] + v11;
      v13 = (char *)&dword_140404A6C[273303053] + v11;
      if ( a2 )
      {
        sub_14020CE0C((__int64)v12, 4, 3, (__int64)Stream);
        sub_14020CE0C((__int64)(v13 + 84004), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v12), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(v13 + 84004), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      v14 = 0;
      if ( (int)*(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_140404A6C[v15 + 273324055 + v14];
          if ( a2 )
            sub_14020CE0C((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[273324567] + v11;
      if ( a2 )
        sub_14020CE0C((__int64)v17, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(Stream));
      v18 = 0;
      if ( (int)*v9 > 0 )
      {
        v19 = (int *)(v9 + 2);
        do
        {
          v20 = (char *)&dword_140404A6C[9 * v18 + 273324569] + v11;
          if ( a2 )
            sub_14020CE0C((__int64)v20, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v20), 4, 1, (FILE *)(uintptr_t)(Stream));
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_140404A6C[v22 + 273324570 + v21];
              if ( a2 )
                sub_14020CE0C((__int64)v23, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(v23), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < (int)*v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < (int)dword_140404A6C[273324050] );
  }
  return 1;
}
#undef Buffer
#undef v25
#undef v26

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CB5F0) ----------------------------------------------------
void            sub_1400CB5F0(int a1, char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // r14
  int i; // ebx
  int v6; // r13d
  unsigned int *v7; // rbp
  __int64 v8; // r14
  signed int v9; // esi
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  unsigned int *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rbp
  signed int v16; // ebx
  __int64 v17; // rsi
  signed int v18; // r15d
  int *v19; // rsi
  int v20; // ebx
  __int64 v21; // rbp
  __int64 v22; // rsi
  void *v23; // rcx
  __int64 v24; // rax
  void *v25; // rcx
  __int64 v26; // rax
  signed int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  unsigned int *v34; // r9
  int v35; // r11d
  signed __int64 v36; // r10
  unsigned int *v37; // r8
  int v38; // eax
  signed int v39; // edx
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  int v42; // r10d
  unsigned int *v43; // r8
  unsigned int v44; // xmm0_4
  unsigned int v45; // xmm1_4
  unsigned int v46; // xmm2_4
  unsigned int v47; // xmm3_4
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  void *v54; // rcx
  __m128i *v55; // rax
  unsigned int v56; // ecx
  __m128i *v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rax
  int v61; // r8d
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  int v66; // ebp
  __int64 v67; // r12
  unsigned int *v68; // rdi
  unsigned int *v69; // rbx
  int v70; // eax
  __int64 v71; // rax
  signed int v72; // r8d
  __int64 v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  signed int v77; // r10d
  _DWORD *v78; // r9
  int v79; // r8d
  char *v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // r14d
  unsigned int *v96; // rbp
  signed int v97; // edi
  __int64 v98; // rbx
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // rax
  float v102; // xmm0_4
  float v103; // xmm1_4
  float v104; // xmm6_4
  __int64 v105; // rdx
  float v106; // xmm8_4
  float v107; // xmm4_4
  float v108; // xmm7_4
  __int64 v109; // rax
  float *v110; // rdx
  float v111; // xmm5_4
  float v112; // xmm2_4
  float v113; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB5F0[160];
#define v114 (*(int (*))(void *)(sr_frame_1400CB5F0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400CB5F0 + 4)) /* [rsp+24h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_1400CB5F0 + 8)) /* [rsp+28h] */
#define v118 (*(int (*))(void *)(sr_frame_1400CB5F0 + 144)) /* [rsp+B0h] */
#define v119 (*(int (*))(void *)(sr_frame_1400CB5F0 + 152)) /* [rsp+B8h] */

  v2 = sub_14020B8D8(a2, "rb");
  v3 = v2;
  v4 = &dword_140404A6C[273306127];
  if ( v2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v2));
    if ( Buffer != 3 )
    {
      sub_14020B9E8(v3);
      return;
    }
    fread_sr((void *)(uintptr_t)(&v118), 4, 1, (FILE *)(uintptr_t)(v3));
    if ( !v118 )
    {
      v119 = 2;
      fread_sr((void *)(uintptr_t)(&v119), 4, 1, (FILE *)(uintptr_t)(v3));
      if ( v119 == 2 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273303053]), 4, 1, (FILE *)(uintptr_t)(v3));
        for ( i = 0; i < (int)dword_140404A6C[273303053]; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * i + 273303054 + i]), 4, 3, (FILE *)(uintptr_t)(v3));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273306126]), 4, 1, (FILE *)(uintptr_t)(v3));
        v6 = 0;
        v114 = 0;
        if ( (int)dword_140404A6C[273306126] > 0 )
        {
          v7 = &dword_140404A6C[273306127];
          do
          {
            v8 = 13LL * v6;
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v8 + 273306127]), 4, 1, (FILE *)(uintptr_t)(v3));
            v9 = 0;
            if ( (int)*v7 > 0 )
            {
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[13 * v6 + 273306128 + v9]), 4, 1, (FILE *)(uintptr_t)(v3));
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v9++ + 273306132 + v8]), 4, 2, (FILE *)(uintptr_t)(v3));
              }
              while ( v9 < (int)*v7 );
              v6 = v114;
            }
            ++v6;
            v7 += 13;
            v114 = v6;
          }
          while ( v6 < (int)dword_140404A6C[273306126] );
        }
      }
    }
    fread_sr((void *)(uintptr_t)(&v118), 4, 1, (FILE *)(uintptr_t)(v3));
    if ( v118 == 1 )
    {
      v114 = 1;
      fread_sr((void *)(uintptr_t)(&v114), 4, 1, (FILE *)(uintptr_t)(v3));
      if ( v114 == 1 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273322513]), 4, 1, (FILE *)(uintptr_t)(v3));
        v10 = 0;
        if ( (int)dword_140404A6C[273322513] > 0 )
        {
          v11 = 0;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v11 + 273322514]), 4, 3, (FILE *)(uintptr_t)(v3));
            ++v10;
            v11 += 3;
          }
          while ( v10 < (int)dword_140404A6C[273322513] );
        }
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[273324050]), 4, 1, (FILE *)(uintptr_t)(v3));
        v12 = 0;
        v119 = 0;
        if ( (int)dword_140404A6C[273324050] > 0 )
        {
          v13 = &dword_140404A6C[273324567];
          do
          {
            v14 = v12;
            v15 = 26648LL * v12;
            v116 = v15;
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324051] + v15), 4, 3, (FILE *)(uintptr_t)(v3));
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324054] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
            v16 = 0;
            if ( (int)*(v13 - 513) > 0 )
            {
              v17 = 6662 * v14;
              do
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[v17 + 273324055 + v16++]), 4, 1, (FILE *)(uintptr_t)(v3));
              while ( v16 < (int)*(v13 - 513) );
            }
            fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[273324567] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
            v18 = 0;
            if ( (int)*v13 > 0 )
            {
              v19 = (int *)(v13 + 2);
              do
              {
                fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[9 * v18 + 273324569] + v15), 4, 1, (FILE *)(uintptr_t)(v3));
                v20 = 0;
                if ( *v19 > 0 )
                {
                  v21 = 9LL * v18 + 6662LL * v119;
                  do
                    fread_sr((void *)(uintptr_t)(&dword_140404A6C[v21 + 273324570 + v20++]), 4, 1, (FILE *)(uintptr_t)(v3));
                  while ( v20 < *v19 );
                  v15 = v116;
                }
                ++v18;
                v19 += 9;
              }
              while ( v18 < (int)*v13 );
            }
            v13 += 6662;
            v12 = ++v119;
          }
          while ( v119 < (int)dword_140404A6C[273324050] );
        }
      }
    }
    sub_14020B9E8(v3);
    v4 = &dword_140404A6C[273306127];
  }
  v22 = 1268LL * a1;
  v23 = *(void **)&dword_140404A6C[v22 + 278522543];
  dword_140404A6C[v22 + 278522541] = dword_140404A6C[273303053];
  free(v23);
  v24 = sr_path_malloc((int)(12 * dword_140404A6C[v22 + 278522541]));
  v25 = *(void **)&dword_140404A6C[v22 + 278522545];
  *(_QWORD *)&dword_140404A6C[v22 + 278522543] = v24;
  free(v25);
  v26 = sr_path_malloc((int)(8 * dword_140404A6C[v22 + 278522541]));
  v27 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522545] = v26;
  if ( (int)dword_140404A6C[v22 + 278522541] > 0 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      v30 = dword_140404A6C[v29 + 273303054];
      v29 += 3;
      v31 = *(_QWORD *)&dword_140404A6C[v22 + 278522543];
      v28 += 8;
      ++v27;
      *(_DWORD *)(v29 * 4 + v31 - 12) = v30;
      *(_DWORD *)(v29 * 4 + v31 - 8) = dword_140404A6C[v29 + 273303052];
      *(_DWORD *)(v29 * 4 + v31 - 4) = dword_140404A6C[v29 + 273303053];
      v32 = *(_QWORD *)&dword_140404A6C[v22 + 278522545];
      *(_DWORD *)(v28 + v32 - 8) = dword_140404A6C[v29 + 273304587];
      *(_DWORD *)(v28 + v32 - 4) = dword_140404A6C[v29 + 273304588];
    }
    while ( v27 < (int)dword_140404A6C[v22 + 278522541] );
  }
  v33 = dword_140404A6C[273306126];
  v34 = &dword_140404A6C[177544402];
  v35 = 0;
  dword_140404A6C[177544400] = dword_140404A6C[273306126];
  if ( (int)dword_140404A6C[273306126] > 0 )
  {
    v36 = (char *)&dword_140404A6C[273306128] - (char *)&dword_140404A6C[177544402];
    v37 = &dword_140404A6C[177544401];
    do
    {
      v38 = *v4;
      v39 = 0;
      *v37 = *v4;
      if ( v38 > 0 )
      {
        v40 = v37 + 1;
        do
        {
          ++v39;
          *v40 = *(_DWORD *)((char *)v40 + v36);
          ++v40;
        }
        while ( v39 < (int)*v37 );
      }
      v33 = dword_140404A6C[177544400];
      ++v35;
      v4 += 13;
      v37 += 5;
      v36 += 32LL;
    }
    while ( v35 < (int)dword_140404A6C[177544400] );
  }
  v41 = 0;
  v42 = 0;
  dword_140404A6C[177495247] = 0;
  if ( v33 > 0 )
  {
    v43 = &dword_140404A6C[273306135];
    do
    {
      v44 = *(v43 - 3);
      v45 = *(v43 - 2);
      v46 = v43[1];
      v47 = v43[2];
      dword_140404A6C[3 * v41 + 177495248] = *v34;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[2];
      v48 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v48 + 178011345] = v44;
      dword_140404A6C[v48 + 178011346] = v45;
      v49 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v49 + 178011347] = *(v43 - 1);
      dword_140404A6C[v49 + 178011348] = *v43;
      v50 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v50 + 178011349] = v46;
      dword_140404A6C[v50 + 178011350] = v47;
      v41 = ++dword_140404A6C[177495247];
      if ( *(v34 - 1) == 4 )
      {
        dword_140404A6C[3 * v41 + 177495248] = *v34;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v34[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v34[3];
        v51 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v51 + 178011345] = v44;
        dword_140404A6C[v51 + 178011346] = v45;
        v52 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v52 + 178011347] = v46;
        dword_140404A6C[v52 + 178011348] = v47;
        v53 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v53 + 178011349] = v43[3];
        dword_140404A6C[v53 + 178011350] = v43[4];
        v41 = ++dword_140404A6C[177495247];
      }
      ++v42;
      v34 += 5;
      v43 += 13;
    }
    while ( v42 < (int)dword_140404A6C[177544400] );
  }
  v54 = *(void **)&dword_140404A6C[v22 + 278522549];
  dword_140404A6C[v22 + 278522547] = v41;
  free(v54);
  v55 = (__m128i *)sr_path_malloc((int)(12 * dword_140404A6C[v22 + 278522547]));
  v56 = dword_140404A6C[v22 + 278522547];
  *(_QWORD *)&dword_140404A6C[v22 + 278522549] = (uint64)(uintptr_t)(v55);
  sub_1401FC920(v55, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v56));
  free(*(void **)&dword_140404A6C[v22 + 278522551]);
  v57 = (__m128i *)sr_path_malloc((int)(24 * dword_140404A6C[v22 + 278522547]));
  v58 = dword_140404A6C[v22 + 278522547];
  *(_QWORD *)&dword_140404A6C[v22 + 278522551] = (uint64)(uintptr_t)(v57);
  sub_1401FC920(v57, (     __m128i *)&dword_140404A6C[178011345], (int)(24 * v58));
  v59 = dword_140404A6C[273322513];
  dword_140404A6C[v22 + 278522247] = dword_140404A6C[273322513];
  v60 = sr_path_malloc((int)(12 * v59));
  v61 = 0;
  *(_QWORD *)&dword_140404A6C[v22 + 278522249] = v60;
  if ( (int)dword_140404A6C[273322513] > 0 )
  {
    v62 = 0;
    do
    {
      v63 = dword_140404A6C[v62 + 273322514];
      v62 += 3;
      v64 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
      ++v61;
      *(_DWORD *)(v62 * 4 + v64 - 12) = v63;
      *(_DWORD *)(v62 * 4 + v64 - 8) = dword_140404A6C[v62 + 273322512];
      *(_DWORD *)(v62 * 4 + v64 - 4) = dword_140404A6C[v62 + 273322513];
    }
    while ( v61 < (int)dword_140404A6C[273322513] );
  }
  v65 = dword_140404A6C[273324050];
  v66 = 0;
  dword_140404A6C[v22 + 278522251] = dword_140404A6C[273324050];
  if ( v65 > 0 )
  {
    v67 = -(__int64)&dword_140404A6C[273324569];
    v68 = &dword_140404A6C[v22 + 278522263];
    v69 = &dword_140404A6C[273324054];
    do
    {
      *(v68 - 10) = *(v69 - 3);
      *(v68 - 9) = *(v69 - 2);
      *(v68 - 8) = *(v69 - 1);
      v70 = *v69;
      *(v68 - 7) = *v69;
      v71 = sr_path_malloc(4 * v70);
      v72 = 0;
      *((_QWORD *)v68 - 3) = v71;
      if ( (int)*v69 > 0 )
      {
        v73 = 0;
        do
        {
          v74 = v69[++v73];
          ++v72;
          *(_DWORD *)(v73 * 4 + *((_QWORD *)v68 - 3) - 4) = v74;
        }
        while ( v72 < (int)*v69 );
      }
      v75 = (int)v69[513];
      *(v68 - 4) = v75;
      v76 = sr_path_malloc(36 * v75);
      v77 = 0;
      *((_QWORD *)v68 - 1) = v76;
      if ( (int)v69[513] > 0 )
      {
        v78 = v69 + 515;
        do
        {
          v79 = 0;
          *(_DWORD *)((char *)v78 + *((_QWORD *)v68 - 1) + v67 + 4) = *v78;
          if ( (int)*v78 > 0 )
          {
            v80 = (char *)v78 + v67 + 8;
            do
            {
              v81 = *(_DWORD *)&v80[(_QWORD)v69 + 2056];
              v80 += 4;
              ++v79;
              *(_DWORD *)&v80[*((_QWORD *)v68 - 1) - 4] = v81;
            }
            while ( v79 < *v78 );
          }
          ++v77;
          v78 += 9;
        }
        while ( v77 < (int)v69[513] );
      }
      *v68 = 0;
      v82 = sr_path_malloc(144);
      v83 = (int)*v68;
      *((_QWORD *)v68 + 1) = v82;
      *(_DWORD *)(v82 + 12 * v83) = dword_1402B3750[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3754[0];
      v84 = (int)*v68;
      *v68 = v84 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v84 + 1)) = dword_1402B3758[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B375C[0];
      v85 = (int)*v68;
      *v68 = v85 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v85 + 1)) = dword_1402B3760[0];
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3764[0];
      v86 = (int)*v68;
      *v68 = v86 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v86 + 1)) = dword_1402B3768;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B376C;
      v87 = (int)*v68;
      *v68 = v87 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v87 + 1)) = dword_1402B3770;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3774;
      v88 = (int)*v68;
      *v68 = v88 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v88 + 1)) = dword_1402B3778;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B377C;
      v89 = (int)*v68;
      *v68 = v89 + 1;
      ++v66;
      v69 += 6662;
      v67 -= 26648;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v89 + 1)) = dword_1402B3780;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3784;
      v90 = (int)*v68;
      *v68 = v90 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v90 + 1)) = dword_1402B3788;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B378C;
      v91 = (int)*v68;
      *v68 = v91 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v91 + 1)) = dword_1402B3790;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B3794;
      v92 = (int)*v68;
      *v68 = v92 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v92 + 1)) = dword_1402B3798;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B379C;
      v93 = (int)*v68;
      *v68 = v93 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v93 + 1)) = dword_1402B37A0;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)*v68 + 4) = dword_1402B37A4;
      v94 = (int)*v68;
      *v68 = v94 + 1;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12 * (v94 + 1)) = dword_1402B37A8;
      *(_DWORD *)(*((_QWORD *)v68 + 1) + 12LL * (int)(*v68)++ + 4) = dword_1402B37AC;
      v65 = dword_140404A6C[273324050];
      v68 += 14;
    }
    while ( v66 < (int)dword_140404A6C[273324050] );
  }
  v95 = 0;
  if ( v65 > 0 )
  {
    v96 = &dword_140404A6C[v22 + 278522259];
    do
    {
      v97 = 0;
      if ( (int)*v96 > 0 )
      {
        v98 = 0;
        do
        {
          v99 = *(_QWORD *)&dword_140404A6C[v22 + 278522249];
          v100 = *((_QWORD *)v96 + 1);
          v101 = 3 * *(_DWORD *)(v100 + v98 + 8);
          v102 = *(float *)(v99 + 4 * v101);
          v103 = *(float *)(v99 + 4 * v101 + 4);
          v104 = *(float *)(v99 + 4 * v101 + 8);
          v105 = 3 * *(_DWORD *)(v100 + v98 + 12);
          v106 = *(float *)(v99 + 4 * v105 + 4) - v103;
          v107 = *(float *)(v99 + 4 * v105 + 8) - v104;
          v108 = *(float *)(v99 + 4 * v105) - v102;
          v109 = 3 * *(_DWORD *)(v100 + v98 + 16);
          v110 = (float *)(v98 + v100 + 24);
          v111 = *(float *)(v99 + 4 * v109 + 4) - v103;
          v112 = *(float *)(v99 + 4 * v109 + 8) - v104;
          v113 = *(float *)(v99 + 4 * v109) - v102;
          *v110 = (float)(v111 * v107) - (float)(v112 * v106);
          v110[2] = (float)(v106 * v113) - (float)(v111 * v108);
          v110[1] = (float)(v112 * v108) - (float)(v107 * v113);
          sub_14007A240((__int64)v110, v110);
          ++v97;
          v98 += 36;
        }
        while ( v97 < (int)*v96 );
        v65 = dword_140404A6C[273324050];
      }
      ++v95;
      v96 += 14;
    }
    while ( v95 < v65 );
  }
}
#undef v114
#undef Buffer
#undef v116
#undef v118
#undef v119

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 1402B3750: using guessed type int dword_1402B3750[];
// 1402B3754: using guessed type int dword_1402B3754[];
// 1402B3758: using guessed type int dword_1402B3758[];
// 1402B375C: using guessed type int dword_1402B375C[];
// 1402B3760: using guessed type int dword_1402B3760[];
// 1402B3764: using guessed type int dword_1402B3764[];
// 1402B3768: using guessed type int dword_1402B3768;
// 1402B376C: using guessed type int dword_1402B376C;
// 1402B3770: using guessed type int dword_1402B3770;
// 1402B3774: using guessed type int dword_1402B3774;
// 1402B3778: using guessed type int dword_1402B3778;
// 1402B377C: using guessed type int dword_1402B377C;
// 1402B3780: using guessed type int dword_1402B3780;
// 1402B3784: using guessed type int dword_1402B3784;
// 1402B3788: using guessed type int dword_1402B3788;
// 1402B378C: using guessed type int dword_1402B378C;
// 1402B3790: using guessed type int dword_1402B3790;
// 1402B3794: using guessed type int dword_1402B3794;
// 1402B3798: using guessed type int dword_1402B3798;
// 1402B379C: using guessed type int dword_1402B379C;
// 1402B37A0: using guessed type int dword_1402B37A0;
// 1402B37A4: using guessed type int dword_1402B37A4;
// 1402B37A8: using guessed type int dword_1402B37A8;
// 1402B37AC: using guessed type int dword_1402B37AC;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 1816962A0: using guessed type unsigned int;
// 1816992A4: using guessed type unsigned int;
// 1816A92B0: using guessed type unsigned int;
// 1816AAAB4: using guessed type unsigned int;

//----- (00000001400CC370) ----------------------------------------------------
__int64            sub_1400CC370(int a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int *v8; // r14
  signed int i; // ebx
  unsigned int *v11; // rcx
  unsigned int *v12; // rcx
  signed int v13; // eax
  unsigned int *v14; // r15
  __int64 v15; // r14
  unsigned int *v16; // rcx
  signed int v17; // ebx
  __int64 v18; // rcx
  unsigned int *v19; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CC370[144];
#define v20 (*(signed int (*))(void *)(sr_frame_1400CC370 + 0)) /* [rsp+20h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 8)) /* [rsp+28h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_1400CC370 + 16)) /* [rsp+30h] */
#define v24 (*(int (*))(void *)(sr_frame_1400CC370 + 136)) /* [rsp+A8h] */

  v4 = a1;
  v24 = 2;
  v5 = a3;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&v24, 4, 1, a2);
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    sub_14020CE0C((__int64)v8, 4, 1, a2);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&v24), 4, 1, (FILE *)(uintptr_t)(a2));
    if ( v24 != 2 )
      return 0;
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    fread_sr((void *)(uintptr_t)(v8), 4, 1, (FILE *)(uintptr_t)(a2));
  }
  for ( i = 0; i < (int)*v8; ++i )
  {
    v11 = &dword_140404A6C[3 * i + 273303054 + v6];
    if ( v5 )
      sub_14020CE0C((__int64)v11, 4, 3, a2);
    else
      fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a2));
  }
  v12 = &dword_140404A6C[v6 + 273306126];
  if ( v5 )
    sub_14020CE0C((__int64)v12, 4, 1, a2);
  else
    fread_sr((void *)(uintptr_t)(v12), 4, 1, (FILE *)(uintptr_t)(a2));
  v13 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[v6 + 273306126] > 0 )
  {
    v14 = &dword_140404A6C[v6 + 273306127];
    do
    {
      v15 = v13;
      v22 = 13LL * v13;
      v16 = &dword_140404A6C[v22 + 273306127 + v6];
      if ( v5 )
        sub_14020CE0C((__int64)v16, 4, 1, a2);
      else
        fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(a2));
      v17 = 0;
      if ( (int)*v14 > 0 )
      {
        v18 = 13 * v15 + 9730 * v7;
        v21 = 4865 * v7;
        do
        {
          v19 = &dword_140404A6C[v18 + 273306128 + v17];
          if ( a3 )
          {
            sub_14020CE0C((__int64)v19, 4, 1, a2);
            sub_14020CE0C((__int64)&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22], 4, 2, a2);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v19), 4, 1, (FILE *)(uintptr_t)(a2));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22]), 4, 2, (FILE *)(uintptr_t)(a2));
          }
          v18 = 13 * v15 + 9730 * v7;
          ++v17;
        }
        while ( v17 < (int)*v14 );
        v5 = a3;
      }
      v13 = v20 + 1;
      v14 += 13;
      v20 = v13;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 273306126] );
  }
  return 1;
}
#undef v20
#undef v21
#undef v22
#undef v24

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CC610) ----------------------------------------------------
__int64 sub_1400CC610()
{
  __int64 result; // rax
  unsigned int *v1; // rbx
  int v2; // edi
  __int64 v3; // r8
  int v4; // edx
  float v5; // xmm14_4
  float *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm12_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  unsigned int v21; // r9d
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30; // ebp
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned int v34; // r10d
  unsigned __int64 v35; // rax
  BOOL v36; // edx
  __int64 v37; // rax
  __int64 v38; // r8
  BOOL v39; // r9d
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // r8d
  signed int v50; // r9d
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // r8d
  unsigned int *v54; // rcx
  int v55; // edi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r9
  unsigned int v62; // r8d
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  signed int v68; // esi
  unsigned int *v69; // rdi
  unsigned int v70; // ecx
  unsigned int v71; // edx
  int v72; // eax
  unsigned int v73; // eax
  int v74; // edi
  int v75; // r8d
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned int v78; // eax
  unsigned __int8 v79; // al
  __int64 v80; // rax
  int v81; // eax
  unsigned int v82; // eax
  unsigned int *v83; // rdx
  unsigned int v84; // r8d
  unsigned int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // xmm0_4
  unsigned int v88; // xmm1_4
  unsigned int v89; // xmm2_4
  unsigned int v90; // r11d
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  __int64 v93; // rcx
  int v94; // eax
  int v95; // edx
  int v96; // r9d
  float v97; // xmm3_4
  unsigned int *v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r10
  int v101; // eax
  float v102; // xmm2_4
  float v103; // xmm2_4
  int v104; // eax
  float v105; // xmm2_4
  float v106; // xmm2_4
  int v107; // eax
  float v108; // xmm2_4
  float v109; // xmm2_4
  int v110; // eax
  float v111; // xmm2_4
  float v112; // xmm2_4
  __int64 v113; // rcx
  signed int v114; // r8d
  bool v115; // cc
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CC610[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400CC610 + 0)) /* [rsp+E8h] */

  result = (__int64)&retaddr;
  dword_140404A6C[273270157] = 0;
  dword_140404A6C[273270414] = 0;
  dword_140404A6C[273270671] = 0;
  dword_140404A6C[273270928] = 0;
  dword_140404A6C[273271185] = 0;
  dword_140404A6C[273271442] = 0;
  dword_140404A6C[273271699] = 0;
  dword_140404A6C[273271956] = 0;
  dword_140404A6C[273272213] = 0;
  dword_140404A6C[273272470] = 0;
  dword_140404A6C[273272727] = 0;
  dword_140404A6C[273272984] = 0;
  dword_140404A6C[273273241] = 0;
  dword_140404A6C[273273498] = 0;
  dword_140404A6C[273273755] = 0;
  dword_140404A6C[273274012] = 0;
  dword_140404A6C[273274269] = 0;
  dword_140404A6C[273274526] = 0;
  dword_140404A6C[273274783] = 0;
  dword_140404A6C[273275040] = 0;
  dword_140404A6C[273275297] = 0;
  dword_140404A6C[273275554] = 0;
  dword_140404A6C[273275811] = 0;
  dword_140404A6C[273276068] = 0;
  dword_140404A6C[273276325] = 0;
  dword_140404A6C[273276582] = 0;
  dword_140404A6C[273276839] = 0;
  dword_140404A6C[273277096] = 0;
  dword_140404A6C[273277353] = 0;
  dword_140404A6C[273277610] = 0;
  dword_140404A6C[273277867] = 0;
  dword_140404A6C[273278124] = 0;
  dword_140404A6C[273278381] = 0;
  dword_140404A6C[273278638] = 0;
  dword_140404A6C[273278895] = 0;
  dword_140404A6C[273279152] = 0;
  dword_140404A6C[273279409] = 0;
  dword_140404A6C[273279666] = 0;
  dword_140404A6C[273279923] = 0;
  dword_140404A6C[273280180] = 0;
  dword_140404A6C[273280437] = 0;
  dword_140404A6C[273280694] = 0;
  dword_140404A6C[273280951] = 0;
  dword_140404A6C[273281208] = 0;
  dword_140404A6C[273281465] = 0;
  dword_140404A6C[273281722] = 0;
  dword_140404A6C[273281979] = 0;
  dword_140404A6C[273282236] = 0;
  dword_140404A6C[273282493] = 0;
  dword_140404A6C[273282750] = 0;
  dword_140404A6C[273283007] = 0;
  dword_140404A6C[273283264] = 0;
  dword_140404A6C[273283521] = 0;
  dword_140404A6C[273283778] = 0;
  dword_140404A6C[273284035] = 0;
  dword_140404A6C[273284292] = 0;
  dword_140404A6C[273284549] = 0;
  dword_140404A6C[273284806] = 0;
  dword_140404A6C[273285063] = 0;
  dword_140404A6C[273285320] = 0;
  dword_140404A6C[273285577] = 0;
  dword_140404A6C[273285834] = 0;
  dword_140404A6C[273286091] = 0;
  dword_140404A6C[273286348] = 0;
  dword_140404A6C[273286605] = 0;
  dword_140404A6C[273286862] = 0;
  dword_140404A6C[273287119] = 0;
  dword_140404A6C[273287376] = 0;
  dword_140404A6C[273287633] = 0;
  dword_140404A6C[273287890] = 0;
  dword_140404A6C[273288147] = 0;
  dword_140404A6C[273288404] = 0;
  dword_140404A6C[273288661] = 0;
  dword_140404A6C[273288918] = 0;
  dword_140404A6C[273289175] = 0;
  dword_140404A6C[273289432] = 0;
  v1 = &dword_140404A6C[278845898];
  dword_140404A6C[273289689] = 0;
  dword_140404A6C[273289946] = 0;
  v2 = 0;
  dword_140404A6C[273290203] = 0;
  dword_140404A6C[273290460] = 0;
  dword_140404A6C[273290717] = 0;
  dword_140404A6C[273290974] = 0;
  dword_140404A6C[273291231] = 0;
  dword_140404A6C[273291488] = 0;
  dword_140404A6C[273291745] = 0;
  dword_140404A6C[273292002] = 0;
  dword_140404A6C[273292259] = 0;
  dword_140404A6C[273292516] = 0;
  dword_140404A6C[273292773] = 0;
  dword_140404A6C[273293030] = 0;
  dword_140404A6C[273293287] = 0;
  dword_140404A6C[273293544] = 0;
  dword_140404A6C[273293801] = 0;
  dword_140404A6C[273294058] = 0;
  dword_140404A6C[273294315] = 0;
  dword_140404A6C[273294572] = 0;
  dword_140404A6C[273294829] = 0;
  dword_140404A6C[273295086] = 0;
  dword_140404A6C[273295343] = 0;
  dword_140404A6C[273295600] = 0;
  dword_140404A6C[273295857] = 0;
  dword_140404A6C[273296114] = 0;
  dword_140404A6C[273296371] = 0;
  dword_140404A6C[273296628] = 0;
  dword_140404A6C[273296885] = 0;
  dword_140404A6C[273297142] = 0;
  dword_140404A6C[273297399] = 0;
  dword_140404A6C[273297656] = 0;
  dword_140404A6C[273297913] = 0;
  dword_140404A6C[273298170] = 0;
  dword_140404A6C[273298427] = 0;
  dword_140404A6C[273298684] = 0;
  dword_140404A6C[273298941] = 0;
  dword_140404A6C[273299198] = 0;
  dword_140404A6C[273299455] = 0;
  dword_140404A6C[273299712] = 0;
  dword_140404A6C[273299969] = 0;
  dword_140404A6C[273300226] = 0;
  dword_140404A6C[273300483] = 0;
  dword_140404A6C[273300740] = 0;
  dword_140404A6C[273300997] = 0;
  dword_140404A6C[273301254] = 0;
  dword_140404A6C[273301511] = 0;
  dword_140404A6C[273301768] = 0;
  dword_140404A6C[273302025] = 0;
  dword_140404A6C[273302282] = 0;
  dword_140404A6C[273302539] = 0;
  dword_140404A6C[273302796] = 0;
  do
  {
    if ( *(v1 - 5) )
    {
      if ( *v1 == 26 )
      {
        result = v1[213] & 0x7F;
        v3 = (int)dword_140404A6C[257 * result + 273270157];
        if ( (int)v3 < 256 )
        {
          dword_140404A6C[257 * result + 273270158 + v3] = v2;
          ++dword_140404A6C[257 * result + 273270157];
        }
      }
      v4 = v1[4];
      if ( v4 != -1 )
        result = sub_1401380F0(v2, v4);
    }
    ++v2;
    v1 += 1760;
  }
  while ( v2 < 1024 );
  v5 = *(float *)&dword_140404A6C[278571065];
  v6 = (float *)&dword_140404A6C[278845942];
  v7 = 1024;
  do
  {
    if ( *((_DWORD *)v6 - 49) )
    {
      result = *((int *)v6 - 39);
      if ( (_DWORD)result != -1 )
      {
        v8 = 1760 * result;
        v9 = *(float *)&dword_140404A6C[1760 * result + 278845916];
        *(v6 - 26) = v9;
        v10 = *(float *)&dword_140404A6C[1760 * result + 278845917];
        *(v6 - 25) = v10;
        v11 = *(float *)&dword_140404A6C[1760 * result + 278845918];
        *(v6 - 24) = v11;
        v12 = *(float *)&dword_140404A6C[1760 * result + 278845934];
        *(v6 - 8) = v12;
        v13 = *(float *)&dword_140404A6C[1760 * result + 278845935];
        *(v6 - 7) = v13;
        v14 = *(float *)&dword_140404A6C[1760 * result + 278845936];
        *(v6 - 6) = v14;
        v15 = *(float *)&dword_140404A6C[1760 * result + 278845937];
        *(v6 - 5) = v15;
        v16 = *(float *)&dword_140404A6C[1760 * result + 278845938];
        *(v6 - 4) = v16;
        v17 = *(float *)&dword_140404A6C[1760 * result + 278845939];
        *(v6 - 3) = v17;
        v18 = *(float *)&dword_140404A6C[1760 * result + 278845940];
        *(v6 - 2) = v18;
        v19 = *(float *)&dword_140404A6C[1760 * result + 278845941];
        *(v6 - 1) = v19;
        v20 = *(float *)&dword_140404A6C[1760 * result + 278845942];
        *v6 = v20;
        v21 = dword_140404A6C[1760 * result + 278845898];
        result = v21 - 15;
        if ( (unsigned int)result <= 1 )
        {
          result = *((unsigned int *)v6 - 44);
          if ( (_DWORD)result != 17 )
          {
            v28 = v10;
            v27 = v11;
            v23 = v10;
            v26 = v9;
            if ( (_DWORD)result != 18 )
            {
LABEL_22:
              *(v6 - 23) = v26;
              *(v6 - 22) = v28;
              *(v6 - 21) = v27;
              goto LABEL_23;
            }
            v19 = v13;
            v25 = (float)((float)*((int *)v6 - 38) * 0.10546875) - 0.2109375;
            v26 = (float)(v12 * v25) + v9;
            v27 = (float)(v14 * v25) + v11;
            goto LABEL_20;
          }
          v29 = (float)((float)*((int *)v6 - 38) * 0.10546875) - 0.2109375;
          v26 = (float)(v12 * v29) + v9;
          v28 = (float)(v13 * v29) + v10;
          v27 = (float)(v14 * v29) + v11;
        }
        else
        {
          if ( v21 == 39 )
          {
            v22 = (float)(v15 * v5) + v9;
            v23 = (float)(v16 * v5) + v10;
            v24 = (float)(v17 * v5) + v11;
            *(v6 - 26) = v22;
            *(v6 - 25) = v23;
            *(v6 - 24) = v24;
            result = (int)dword_140404A6C[v8 + 278845898];
            v25 = *(float *)&dword_140404A6C[1268 * result + 278521614];
            v26 = (float)(v18 * v25) + v22;
            v27 = (float)(v20 * v25) + v24;
LABEL_20:
            v28 = (float)(v19 * v25) + v23;
            goto LABEL_21;
          }
          v26 = v9 - (float)(v15 * 0.0625);
          v28 = v10 - (float)(v16 * 0.0625);
          v27 = v11 - (float)(v17 * 0.0625);
        }
LABEL_21:
        *(v6 - 26) = v26;
        *(v6 - 25) = v28;
        *(v6 - 24) = v27;
        goto LABEL_22;
      }
    }
LABEL_23:
    v6 += 1760;
    --v7;
  }
  while ( v7 );
  v30 = 0;
  v31 = 0;
  v32 = 0x1002060000LL;
  while ( 2 )
  {
    v33 = 1760 * v31;
    if ( !dword_140404A6C[1760 * v31 + 278845893] )
      goto LABEL_215;
    v34 = dword_140404A6C[v33 + 278845902];
    if ( v34 == -1
      && dword_140404A6C[v33 + 278845903] == -1
      && ((v35 = (int)dword_140404A6C[v33 + 278845898], (unsigned int)v35 > 0x24) || !_bittest64(&v32, v35)) )
    {
      v36 = 1;
    }
    else
    {
      v37 = (int)dword_140404A6C[v33 + 278845903];
      v36 = 0;
      if ( (_DWORD)v37 != -1 && dword_140404A6C[1268 * dword_140404A6C[1760 * v37 + 278845898] + 278521289] )
        v36 = dword_140404A6C[1760 * v37 + 278845902] == -1;
    }
    v38 = (int)dword_140404A6C[v33 + 278845898];
    v39 = 0;
    v40 = dword_140404A6C[v33 + 278845900];
    if ( (unsigned int)(v38 - 19) > 5 )
      v39 = v36;
    if ( v40 < 0x10000 )
    {
LABEL_39:
      if ( !v39 )
        goto LABEL_47;
      if ( v40 > 18000 )
        v40 = 18000;
      v41 = dword_140404A6C[283831312];
      v42 = v40 - 1;
      if ( (int)dword_140404A6C[v33 + 278845906] > 0 )
        v42 = 18000;
      dword_140404A6C[v33 + 278845900] = v42;
      if ( ((v41 - 3) & 0xFFFFFFFD) == 0 && v42 > 0 )
LABEL_48:
        dword_140404A6C[v33 + 278845900] = 0xFFFF;
    }
    else
    {
      if ( v34 != -1 )
      {
        dword_140404A6C[v33 + 278845900] = 18000;
        v40 = 18000;
        goto LABEL_39;
      }
LABEL_47:
      if ( (unsigned int)(v40 - 1) <= 0xFFFE )
        goto LABEL_48;
    }
    if ( dword_140404A6C[1268 * v38 + 278521289] )
      sub_1400CF670(v30);
    v43 = dword_140404A6C[v33 + 278845898];
    if ( v43 == 27 )
    {
      v44 = (int)dword_140404A6C[v33 + 278846053];
      if ( (unsigned int)v44 <= 0x1FF )
      {
        v45 = 5210 * v44;
        if ( dword_140404A6C[5210 * v44 + 129716709] )
          dword_140404A6C[v33 + 278845900] = 0xFFFF;
        v46 = (int)dword_140404A6C[v33 + 278845902];
        dword_140404A6C[v45 + 129716717] = 1;
        if ( (_DWORD)v46 != -1 && dword_140404A6C[7166 * v46 + 280651313] == (_DWORD)v44 )
        {
          dword_140404A6C[v45 + 129716718] = dword_140404A6C[7166 * v46 + 280651305];
          dword_140404A6C[v45 + 129716717] = 0;
        }
      }
      goto LABEL_120;
    }
    if ( v43 == 26 )
    {
      dword_140404A6C[v33 + 278846112] = 0;
      if ( (dword_140404A6C[v33 + 278845977] & 1) != 0 )
        dword_140404A6C[v33 + 278846112] = 1;
      goto LABEL_120;
    }
    if ( ((v43 - 25) & 0xFFFFFFF7) != 0 )
      goto LABEL_120;
    v47 = dword_140404A6C[v33 + 278845972];
    if ( v47 > 0 )
      dword_140404A6C[v33 + 278845972] = v47 - 1;
    v48 = dword_140404A6C[v33 + 278846052];
    switch ( v48 )
    {
      case 0u:
        dword_140404A6C[v33 + 278845982] = 0;
        if ( (dword_140404A6C[v33 + 278845977] & 1) == 0 || (dword_140404A6C[v33 + 278845978] & 1) != 0 )
          goto LABEL_120;
        dword_140404A6C[v33 + 278846052] = 1;
        *(_QWORD *)&dword_140404A6C[v33 + 278845983] = 0;
LABEL_118:
        v59 = v30;
LABEL_119:
        sub_140051940(v59);
        goto LABEL_120;
      case 4u:
        v49 = dword_140404A6C[283831474];
        v50 = dword_140404A6C[v33 + 278845982] + 1;
        dword_140404A6C[v33 + 278845982] = v50;
        if ( (v49 & 0x3F) == 0 && dword_140404A6C[456202453] )
        {
          v51 = dword_140404A6C[283785994];
          v52 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v52) = 19;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v52) = v49;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v52) = v51;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v52) = v30;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v52) = 1065353216;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v52) = 1065353216;
        }
        if ( v50 >= 360 || (dword_140404A6C[v33 + 278845977] & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
        {
          dword_140404A6C[v33 + 278846052] = 0;
          *(_QWORD *)&dword_140404A6C[v33 + 278845982] = 0;
          dword_140404A6C[v33 + 278845984] = 0;
LABEL_117:
          dword_140404A6C[v33 + 278845980] = -1;
          goto LABEL_118;
        }
        goto LABEL_120;
      case 1u:
        dword_140404A6C[v33 + 278845982] = 0;
        if ( (dword_140404A6C[v33 + 278845977] & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
        {
          dword_140404A6C[v33 + 278846052] = 0;
          *(_QWORD *)&dword_140404A6C[v33 + 278845983] = 0;
          sub_140051940(v30);
        }
        v53 = dword_140404A6C[v33 + 278845984];
        if ( v53 >= 1000 )
        {
          dword_140404A6C[v33 + 278845984] = 0;
          v54 = &dword_140404A6C[278845898];
          dword_140404A6C[v33 + 278845972] = 180;
          v55 = 0;
          v56 = 0;
          while ( !*(v54 - 5) || v56 == v31 || ((*v54 - 25) & 0xFFFFFFF7) != 0 || v53 != v54[83] )
          {
            ++v55;
            ++v56;
            v54 += 1760;
            if ( v55 >= 1024 )
              goto LABEL_120;
          }
          v57 = 1760 * v56;
          if ( dword_140404A6C[1760 * v56 + 278845980] != -1 )
          {
            dword_140404A6C[v33 + 278846052] = 4;
            dword_140404A6C[v33 + 278845983] = 0;
            goto LABEL_118;
          }
          dword_140404A6C[v33 + 278846052] = 2;
          dword_140404A6C[v57 + 278846052] = 2;
          v58 = dword_140404A6C[v33 + 278845981];
          dword_140404A6C[v33 + 278845980] = v55;
          dword_140404A6C[v33 + 278845983] = 0;
          dword_140404A6C[v57 + 278845983] = v58;
          sub_140051940(v30);
          v59 = v55;
          goto LABEL_119;
        }
        goto LABEL_120;
      case 3u:
        v60 = (int)dword_140404A6C[v33 + 278845980];
        if ( (_DWORD)v60 != -1 )
        {
          if ( !dword_140404A6C[1760 * v60 + 278845893] )
          {
            dword_140404A6C[v33 + 278846052] = 0;
            dword_140404A6C[v33 + 278845980] = -1;
            dword_140404A6C[v33 + 278845983] = 0;
            sub_140051940(v30);
            v48 = 0;
          }
          goto LABEL_95;
        }
        dword_140404A6C[v33 + 278846052] = 0;
        dword_140404A6C[v33 + 278845980] = -1;
        dword_140404A6C[v33 + 278845983] = 0;
        sub_140051940(v30);
        break;
      default:
LABEL_95:
        if ( v48 == 2 )
        {
          v61 = (int)dword_140404A6C[v33 + 278845980];
          if ( (_DWORD)v61 == -1 || dword_140404A6C[1760 * v61 + 278845980] != -1 )
          {
            dword_140404A6C[v33 + 278845982] = 0;
          }
          else
          {
            v62 = dword_140404A6C[283831474];
            if ( (dword_140404A6C[283831474] & 0x7F) == 0 && dword_140404A6C[456202453] )
            {
              v63 = dword_140404A6C[283785983];
              v64 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
              HIWORD(dword_140404A6C[308307070]) = 0;
              v65 = (int)dword_140404A6C[308307070];
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v64) = 19;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v64) = v62;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v64) = v63;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v64) = v61;
              *(unsigned int *)((char *)&dword_140404A6C[297756297] + v64) = 1065353216;
              *(unsigned int *)((char *)&dword_140404A6C[297756298] + v64) = 1065353216;
              v66 = v65 << 7;
              dword_140404A6C[308307070] = v65 + 1;
              HIWORD(dword_140404A6C[308307070]) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v66) = 19;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v66) = v62;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v66) = v63;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v66) = v30;
              *(unsigned int *)((char *)&dword_140404A6C[297756297] + v66) = 1056964608;
              *(unsigned int *)((char *)&dword_140404A6C[297756298] + v66) = 1065353216;
            }
            if ( (int)++dword_140404A6C[v33 + 278845982] >= 768 )
            {
              dword_140404A6C[v33 + 278846052] = 0;
              dword_140404A6C[1760 * v61 + 278846052] = 0;
              dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845983] = 0;
              sub_140051940(dword_140404A6C[v33 + 278845980]);
              dword_140404A6C[v33 + 278845980] = -1;
              dword_140404A6C[v33 + 278845983] = 0;
              sub_140051940(v30);
            }
          }
        }
        break;
    }
    if ( (dword_140404A6C[v33 + 278845977] & 1) == 0 || (dword_140404A6C[v33 + 278845978] & 1) != 0 )
      goto LABEL_120;
    v67 = (int)dword_140404A6C[v33 + 278845980];
    if ( (_DWORD)v67 != -1 )
    {
      dword_140404A6C[v33 + 278846052] = 0;
      dword_140404A6C[1760 * v67 + 278846052] = 0;
      dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845980] = -1;
      dword_140404A6C[1760 * dword_140404A6C[v33 + 278845980] + 278845983] = 0;
      sub_140051940(dword_140404A6C[v33 + 278845980]);
      dword_140404A6C[v33 + 278845983] = 0;
      goto LABEL_117;
    }
    v68 = 0;
    v69 = &dword_140404A6C[278845898];
    do
    {
      if ( *(v69 - 5) && v68 != v30 && ((*v69 - 25) & 0xFFFFFFF7) == 0 && v69[82] == v30 )
      {
        dword_140404A6C[v33 + 278846052] = 3;
        v69[154] = 3;
        dword_140404A6C[v33 + 278845980] = v68;
        dword_140404A6C[v33 + 278845983] = v69[83];
        sub_140051940(v30);
        v69[85] = dword_140404A6C[v33 + 278845981];
        sub_140051940(v68);
      }
      ++v68;
      v69 += 1760;
    }
    while ( v68 < 1024 );
LABEL_120:
    if ( dword_140404A6C[v33 + 278845898] == 39 )
    {
      v70 = dword_140404A6C[v33 + 278847324];
      if ( !v70 )
      {
        sub_1400C3ED0(v30);
        v70 = dword_140404A6C[v33 + 278847324];
      }
      v71 = v70;
      if ( v70 == 1 )
      {
        v72 = dword_140404A6C[v33 + 278847584];
        if ( v72 > 0 )
        {
          v73 = v72 - 1;
          dword_140404A6C[v33 + 278847584] = v73;
          if ( !v73 )
          {
            v74 = 0;
            v75 = rand() % 26;
            v76 = 1760 * v31;
            do
            {
              v77 = v76 + (int)dword_140404A6C[v76 + 278847455 + v75];
              if ( dword_140404A6C[v77 + 278847519] && dword_140404A6C[v77 + 278847551] == -1 )
                break;
              ++v74;
              v75 = rand() % 26;
            }
            while ( v74 < 1000 );
            dword_140404A6C[v76 + 278847551 + (int)dword_140404A6C[v76 + 278847455 + v75]] = v75;
            sub_1400C5750(v30);
            LOBYTE(dword_140404A6C[v33 + 278846130]) = 0;
            sub_140050F90(v30, 1);
            v71 = dword_140404A6C[v33 + 278847324];
          }
        }
      }
      if ( v71 == 2 )
      {
        sub_1400C8500(v30);
        v71 = dword_140404A6C[v33 + 278847324];
      }
      if ( v71 == 3 )
        sub_1400C9820(v30);
    }
    v78 = dword_140404A6C[v33 + 278845898];
    if ( v78 == 40 )
    {
      v79 = dword_140404A6C[v33 + 278846111] + 1;
      dword_140404A6C[v33 + 278846112] = 64;
      dword_140404A6C[v33 + 278846111] = v79;
    }
    else if ( v78 == 13 && dword_140404A6C[283831448] == 2 )
    {
      if ( (int)dword_140404A6C[v33 + 278845974] <= 0 )
      {
        v81 = dword_140404A6C[v33 + 278845972];
        if ( v81 > 0 )
        {
          if ( v81 == 240 )
          {
            if ( (dword_140404A6C[v33 + 278845977] & 2) == 0 || (dword_140404A6C[v33 + 278845978] & 2) != 0 )
            {
              if ( dword_140404A6C[v33 + 278845902] == -1 )
                dword_140404A6C[v33 + 278845972] = 239;
            }
            else
            {
              dword_140404A6C[v33 + 278845974] = 1;
              dword_140404A6C[v33 + 278845901] = -1;
            }
          }
          else
          {
            v82 = v81 - 1;
            dword_140404A6C[v33 + 278845972] = v82;
            if ( v82 == 1 )
            {
              dword_140404A6C[v33 + 278845900] = 0;
              v83 = &dword_140404A6C[v33 + 278845916];
              if ( dword_140404A6C[456202453] )
              {
                v84 = dword_140404A6C[308307070];
                v85 = dword_140404A6C[283831474];
                v86 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v86) = 20;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v86) = v85;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v86) = 0;
                if ( v83 )
                {
                  v87 = v83[2];
                  v88 = v83[1];
                  v89 = *v83;
                }
                else
                {
                  v87 = 0;
                  v88 = 0;
                  v89 = 0;
                }
                *(unsigned int *)((char *)&dword_140404A6C[297756287] + v86) = v89;
                *(unsigned int *)((char *)&dword_140404A6C[297756288] + v86) = v88;
                *(unsigned int *)((char *)&dword_140404A6C[297756289] + v86) = v87;
                dword_140404A6C[308307070] = v84 + 1;
                HIWORD(dword_140404A6C[308307070]) = 0;
              }
              sub_1400A70B0(v30);
            }
          }
        }
      }
      else if ( (dword_140404A6C[v33 + 278845977] & 2) != 0 && (dword_140404A6C[v33 + 278845978] & 2) == 0 )
      {
        v80 = (int)dword_140404A6C[v33 + 278845902];
        dword_140404A6C[v33 + 278845972] = 240;
        dword_140404A6C[v33 + 278845974] = 0;
        if ( (_DWORD)v80 != -1 )
          dword_140404A6C[v33 + 278845901] = dword_140404A6C[7166 * v80 + 280651305];
      }
    }
    v90 = dword_140404A6C[v33 + 278845977];
    result = v90 & 1;
    if ( (v90 & 1) != 0 && (dword_140404A6C[v33 + 278845978] & 1) == 0 )
    {
      v91 = dword_140404A6C[v33 + 278845898];
      if ( v91 == 15 )
      {
        dword_140404A6C[v33 + 278845898] = 16;
        goto LABEL_164;
      }
      if ( v91 == 16 )
      {
        dword_140404A6C[v33 + 278845898] = 15;
LABEL_164:
        if ( dword_140404A6C[456202453] && (unsigned int)v30 <= 0x3FF )
          ++dword_140404A6C[v31 + 280648157];
      }
    }
    v92 = dword_140404A6C[v33 + 278845898];
    if ( v92 == 30 )
    {
      if ( (v90 & 1) == 0 && (dword_140404A6C[v33 + 278845978] & 1) != 0 )
      {
        result = (int)dword_140404A6C[v33 + 278845902];
        if ( (_DWORD)result != -1 )
        {
          v93 = 7166 * result;
          if ( !dword_140404A6C[7166 * result + 280651309] )
          {
            dword_140404A6C[v93 + 280651311] += 16;
            v94 = dword_140404A6C[v93 + 280651311];
            dword_140404A6C[v93 + 280651309] = 300;
            if ( v94 > 255 )
              v94 = 255;
            dword_140404A6C[v93 + 280651308] += 8;
            dword_140404A6C[v93 + 280651311] = v94;
            result = dword_140404A6C[v93 + 280651308];
            if ( (int)result > 105 )
              result = 105;
            dword_140404A6C[v93 + 280651308] = result;
            goto LABEL_211;
          }
        }
      }
    }
    else if ( v92 == 14 )
    {
      if ( (v90 & 1) != 0 )
      {
        v95 = 2;
        v96 = -1;
        v97 = 2.0;
        v98 = &dword_140404A6C[280651337];
        v99 = 2;
        v100 = -1;
        do
        {
          if ( *(v98 - 34) )
          {
            v101 = *(v98 - 19);
            if ( v101 > 0 && (v98[6964] || v101 < 10) )
            {
              v102 = *((float *)v98 - 2) - *(float *)&dword_140404A6C[v33 + 278845916];
              v103 = fsqrt(
                       (float)((float)((float)(*((float *)v98 - 1) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 - 1) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v102 * v102))
                     + (float)((float)(*(float *)v98 - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*(float *)v98 - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v103 )
              {
                v96 = v95 - 2;
                v97 = v103;
                v100 = v99 - 2;
              }
            }
          }
          if ( v98[7132] )
          {
            v104 = v98[7147];
            if ( v104 > 0 && (v98[14130] || v104 < 10) )
            {
              v105 = *((float *)v98 + 7164) - *(float *)&dword_140404A6C[v33 + 278845916];
              v106 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 7165) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 7165) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v105 * v105))
                     + (float)((float)(*((float *)v98 + 7166) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 7166) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v106 )
              {
                v96 = v95 - 1;
                v97 = v106;
                v100 = v99 - 1;
              }
            }
          }
          if ( v98[14298] )
          {
            v107 = v98[14313];
            if ( v107 > 0 && (v98[21296] || v107 < 10) )
            {
              v108 = *((float *)v98 + 14330) - *(float *)&dword_140404A6C[v33 + 278845916];
              v109 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 14331) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 14331) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v108 * v108))
                     + (float)((float)(*((float *)v98 + 14332) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 14332) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v109 )
              {
                v96 = v95;
                v100 = v99;
                v97 = v109;
              }
            }
          }
          if ( v98[21464] )
          {
            v110 = v98[21479];
            if ( v110 > 0 && (v98[28462] || v110 < 10) )
            {
              v111 = *((float *)v98 + 21496) - *(float *)&dword_140404A6C[v33 + 278845916];
              v112 = fsqrt(
                       (float)((float)((float)(*((float *)v98 + 21497) - *(float *)&dword_140404A6C[v33 + 278845917])
                                     * (float)(*((float *)v98 + 21497) - *(float *)&dword_140404A6C[v33 + 278845917]))
                             + (float)(v111 * v111))
                     + (float)((float)(*((float *)v98 + 21498) - *(float *)&dword_140404A6C[v33 + 278845918])
                             * (float)(*((float *)v98 + 21498) - *(float *)&dword_140404A6C[v33 + 278845918])));
              if ( v97 > v112 )
              {
                v96 = v95 + 1;
                v97 = v112;
                v100 = v99 + 1;
              }
            }
          }
          v95 += 4;
          v99 += 4;
          v98 += 28664;
          result = (unsigned int)(v95 - 2);
        }
        while ( (int)result < 256 );
        if ( v96 != -1 )
        {
          v113 = (int)dword_140404A6C[v33 + 278845902];
          v114 = dword_140404A6C[v33 + 278845972] + 1;
          dword_140404A6C[v33 + 278845972] = v114;
          if ( (_DWORD)v113 != -1 )
          {
            result = (unsigned int)((v114 << 8) / 256);
            dword_140404A6C[7166 * v113 + 280658334] = result;
          }
          if ( v114 >= 256 )
          {
            result = 28664 * v100;
            dword_140404A6C[v33 + 278845972] = 0;
            v115 = (int)dword_140404A6C[7166 * v100 + 280651318] < 10;
            dword_140404A6C[7166 * v100 + 280658301] = 0;
            if ( v115 )
              *(unsigned int *)((char *)&dword_140404A6C[280651318] + result) = 10;
LABEL_211:
            if ( (int)--dword_140404A6C[v33 + 278845974] <= 0 )
              dword_140404A6C[v33 + 278845900] = 0;
          }
        }
      }
      else
      {
        dword_140404A6C[v33 + 278845972] = 0;
      }
    }
    dword_140404A6C[v33 + 278845978] = v90;
    v32 = 0x1002060000LL;
    dword_140404A6C[v33 + 278845977] = 0;
LABEL_215:
    ++v30;
    ++v31;
    if ( v30 < 1024 )
      continue;
    return result;
  }
}
#undef retaddr

// 1400CCE14: conditional instruction was optimized away because ecx.4<4651
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1816760A0: using guessed type unsigned int;
// 1816764A4: using guessed type unsigned int;
// 1816768A8: using guessed type unsigned int;
// 181676CAC: using guessed type unsigned int;
// 1816770B0: using guessed type unsigned int;
// 1816774B4: using guessed type unsigned int;
// 1816778B8: using guessed type unsigned int;
// 181677CBC: using guessed type unsigned int;
// 1816780C0: using guessed type unsigned int;
// 1816784C4: using guessed type unsigned int;
// 1816788C8: using guessed type unsigned int;
// 181678CCC: using guessed type unsigned int;
// 1816790D0: using guessed type unsigned int;
// 1816794D4: using guessed type unsigned int;
// 1816798D8: using guessed type unsigned int;
// 181679CDC: using guessed type unsigned int;
// 18167A0E0: using guessed type unsigned int;
// 18167A4E4: using guessed type unsigned int;
// 18167A8E8: using guessed type unsigned int;
// 18167ACEC: using guessed type unsigned int;
// 18167B0F0: using guessed type unsigned int;
// 18167B4F4: using guessed type unsigned int;
// 18167B8F8: using guessed type unsigned int;
// 18167BCFC: using guessed type unsigned int;
// 18167C100: using guessed type unsigned int;
// 18167C504: using guessed type unsigned int;
// 18167C908: using guessed type unsigned int;
// 18167CD0C: using guessed type unsigned int;
// 18167D110: using guessed type unsigned int;
// 18167D514: using guessed type unsigned int;
// 18167D918: using guessed type unsigned int;
// 18167DD1C: using guessed type unsigned int;
// 18167E120: using guessed type unsigned int;
// 18167E524: using guessed type unsigned int;
// 18167E928: using guessed type unsigned int;
// 18167ED2C: using guessed type unsigned int;
// 18167F130: using guessed type unsigned int;
// 18167F534: using guessed type unsigned int;
// 18167F938: using guessed type unsigned int;
// 18167FD3C: using guessed type unsigned int;
// 181680140: using guessed type unsigned int;
// 181680544: using guessed type unsigned int;
// 181680948: using guessed type unsigned int;
// 181680D4C: using guessed type unsigned int;
// 181681150: using guessed type unsigned int;
// 181681554: using guessed type unsigned int;
// 181681958: using guessed type unsigned int;
// 181681D5C: using guessed type unsigned int;
// 181682160: using guessed type unsigned int;
// 181682564: using guessed type unsigned int;
// 181682968: using guessed type unsigned int;
// 181682D6C: using guessed type unsigned int;
// 181683170: using guessed type unsigned int;
// 181683574: using guessed type unsigned int;
// 181683978: using guessed type unsigned int;
// 181683D7C: using guessed type unsigned int;
// 181684180: using guessed type unsigned int;
// 181684584: using guessed type unsigned int;
// 181684988: using guessed type unsigned int;
// 181684D8C: using guessed type unsigned int;
// 181685190: using guessed type unsigned int;
// 181685594: using guessed type unsigned int;
// 181685998: using guessed type unsigned int;
// 181685D9C: using guessed type unsigned int;
// 1816861A0: using guessed type unsigned int;
// 1816865A4: using guessed type unsigned int;
// 1816869A8: using guessed type unsigned int;
// 181686DAC: using guessed type unsigned int;
// 1816871B0: using guessed type unsigned int;
// 1816875B4: using guessed type unsigned int;
// 1816879B8: using guessed type unsigned int;
// 181687DBC: using guessed type unsigned int;
// 1816881C0: using guessed type unsigned int;
// 1816885C4: using guessed type unsigned int;
// 1816889C8: using guessed type unsigned int;
// 181688DCC: using guessed type unsigned int;
// 1816891D0: using guessed type unsigned int;
// 1816895D4: using guessed type unsigned int;
// 1816899D8: using guessed type unsigned int;
// 181689DDC: using guessed type unsigned int;
// 18168A1E0: using guessed type unsigned int;
// 18168A5E4: using guessed type unsigned int;
// 18168A9E8: using guessed type unsigned int;
// 18168ADEC: using guessed type unsigned int;
// 18168B1F0: using guessed type unsigned int;
// 18168B5F4: using guessed type unsigned int;
// 18168B9F8: using guessed type unsigned int;
// 18168BDFC: using guessed type unsigned int;
// 18168C200: using guessed type unsigned int;
// 18168C604: using guessed type unsigned int;
// 18168CA08: using guessed type unsigned int;
// 18168CE0C: using guessed type unsigned int;
// 18168D210: using guessed type unsigned int;
// 18168D614: using guessed type unsigned int;
// 18168DA18: using guessed type unsigned int;
// 18168DE1C: using guessed type unsigned int;
// 18168E220: using guessed type unsigned int;
// 18168E624: using guessed type unsigned int;
// 18168EA28: using guessed type unsigned int;
// 18168EE2C: using guessed type unsigned int;
// 18168F230: using guessed type unsigned int;
// 18168F634: using guessed type unsigned int;
// 18168FA38: using guessed type unsigned int;
// 18168FE3C: using guessed type unsigned int;
// 181690240: using guessed type unsigned int;
// 181690644: using guessed type unsigned int;
// 181690A48: using guessed type unsigned int;
// 181690E4C: using guessed type unsigned int;
// 181691250: using guessed type unsigned int;
// 181691654: using guessed type unsigned int;
// 181691A58: using guessed type unsigned int;
// 181691E5C: using guessed type unsigned int;
// 181692260: using guessed type unsigned int;
// 181692664: using guessed type unsigned int;
// 181692A68: using guessed type unsigned int;
// 181692E6C: using guessed type unsigned int;
// 181693270: using guessed type unsigned int;
// 181693674: using guessed type unsigned int;
// 181693A78: using guessed type unsigned int;
// 181693E7C: using guessed type unsigned int;
// 181694280: using guessed type unsigned int;
// 181694684: using guessed type unsigned int;
// 181694A88: using guessed type unsigned int;
// 181694E8C: using guessed type unsigned int;
// 181695290: using guessed type unsigned int;
// 181695694: using guessed type unsigned int;
// 181695A98: using guessed type unsigned int;
// 181695E9C: using guessed type unsigned int;
// 182AAEB50: using guessed type unsigned int;
// 183E93668: using guessed type unsigned int;
// 183E93694: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400E7960) ----------------------------------------------------
void            sub_1400E7960(int a1, char *a2)
{
  __int64 v2; // rsi
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int *v10; // rbx
  signed int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rsi
  signed int v14; // edi
  unsigned int *v15; // r11
  int v16; // r9d
  unsigned int *v17; // r10
       char *v18; // rbx
  unsigned int *v19; // rax
  int v20; // ecx
  int v21; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7960[576];
#define v23 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400E7960 + 32)) /* [rsp+20h] */
#define v25 (*(int (*))(void *)(sr_frame_1400E7960 + 36)) /* [rsp+24h] */
#define v26 (*(char (*)[512])(void *)(sr_frame_1400E7960 + 48)) /* [rsp+30h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 560)) /* [rsp+230h] */

  v2 = a1;
  v25 = sub_14024C22C("data");
  v4 = v25;
  v5 = sub_14024C22C("itemset");
  v6 = v26 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = sub_14020B8D8(v26, "rb");
  v9 = v8;
  if ( v8 )
  {
    Buffer = 1;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v8));
    v10 = &dword_140404A6C[948 * v2 + 272299397];
    fread_sr((void *)(uintptr_t)(v10 + 19), 4, 1, (FILE *)(uintptr_t)(v9));
    v11 = 0;
    if ( (int)v10[19] > 0 )
    {
      do
      {
        v12 = 3792 * v2 + 116LL * v11;
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[272299417] + v12), 1, 64, (FILE *)(uintptr_t)(v9));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[272299434] + v12), 4, 3, (FILE *)(uintptr_t)(v9));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[272299437] + v12), 4, 3, (FILE *)(uintptr_t)(v9));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[272299440] + v12), 4, 3, (FILE *)(uintptr_t)(v9));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[272299443] + v12), 4, 3, (FILE *)(uintptr_t)(v9));
        ++v11;
      }
      while ( v11 < (int)dword_140404A6C[948 * v2 + 272299416] );
      v4 = v25;
    }
    sub_14020B9E8(v9);
  }
  if ( !v5 )
    sub_14024C22C("..");
  if ( !v4 )
    sub_14024C22C("..");
  v13 = 948 * v2;
  v14 = 0;
  if ( (int)dword_140404A6C[v13 + 272299416] > 0 )
  {
    v15 = &dword_140404A6C[v13 + 272299433];
    do
    {
      v16 = 0;
      v17 = &dword_140404A6C[278521297];
      v18 = (     char *)&dword_140404A6C[29 * v14 + 272299417 + v13];
      do
      {
        v19 = &dword_140404A6C[29 * v14 + 272299417 + v13];
        do
        {
          v20 = *((unsigned __int8 *)v19 + ((char *)v17 - v18));
          v21 = *(unsigned __int8 *)v19 - v20;
          if ( v21 )
            break;
          v19 = (unsigned int *)((char *)v19 + 1);
        }
        while ( v20 );
        if ( !v21 )
          *v15 = v16;
        if ( !strcmp_sr(v18, (     char *)v17 + 5072) )
          *v15 = v16 + 1;
        v16 += 2;
        v17 += 2536;
      }
      while ( v16 < 46 );
      ++v14;
      v15 += 29;
    }
    while ( v14 < (int)dword_140404A6C[v13 + 272299416] );
  }
  return;
}
#undef v23
#undef Buffer
#undef v25
#undef v26
#undef v27

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140115FF0) ----------------------------------------------------
__int64            sub_140115FF0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = 290LL * a1;
  dword_140404A6C[290 * a1 + 273377606] = 1;
  v2 = 1024;
  dword_140404A6C[v1 + 273377607] = 0;
  dword_140404A6C[v1 + 273377608] = 1;
  dword_140404A6C[v1 + 273377609] = 2;
  dword_140404A6C[v1 + 273377610] = 3;
  dword_140404A6C[v1 + 273377611] = 4;
  dword_140404A6C[v1 + 273377612] = 5;
  dword_140404A6C[v1 + 273377613] = 6;
  dword_140404A6C[v1 + 273377614] = 7;
  dword_140404A6C[v1 + 273377615] = 8;
  dword_140404A6C[v1 + 273377616] = 9;
  dword_140404A6C[v1 + 273377617] = 10;
  dword_140404A6C[v1 + 273377618] = 11;
  dword_140404A6C[v1 + 273377619] = 12;
  dword_140404A6C[v1 + 273377620] = 13;
  dword_140404A6C[v1 + 273377621] = 14;
  dword_140404A6C[v1 + 273377622] = 15;
  dword_140404A6C[v1 + 273377623] = 16;
  dword_140404A6C[v1 + 273377624] = 17;
  dword_140404A6C[v1 + 273377625] = 18;
  dword_140404A6C[v1 + 273377626] = 19;
  dword_140404A6C[v1 + 273377627] = 20;
  dword_140404A6C[v1 + 273377628] = 21;
  dword_140404A6C[v1 + 273377629] = 22;
  dword_140404A6C[v1 + 273377630] = 23;
  dword_140404A6C[v1 + 273377631] = 24;
  dword_140404A6C[v1 + 273377632] = 25;
  do
  {
    v3 = rand() % 26;
    v4 = rand();
    v5 = v1 + v3;
    v6 = dword_140404A6C[v5 + 273377607];
    v7 = v1 + v4 % 26;
    result = dword_140404A6C[v7 + 273377607];
    dword_140404A6C[v5 + 273377607] = result;
    dword_140404A6C[v7 + 273377607] = v6;
    --v2;
  }
  while ( v2 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012C890) ----------------------------------------------------
__int64            sub_14012C890(int a1, char *a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int *v14; // rsi
  signed int i; // ebp
  __int64 v16; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C890[576];
#define v18 (*(__int64 (*))(void *)(sr_frame_14012C890 + 0)) /* [rsp+0h] */
#define v19 (*(int (*)[4])(void *)(sr_frame_14012C890 + 32)) /* [rsp+20h] */
#define v20 (*(char (*)[512])(void *)(sr_frame_14012C890 + 48)) /* [rsp+30h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14012C890 + 560)) /* [rsp+230h] */

  v3 = a1;
  v6 = sub_14024C22C("data");
  v7 = sub_14024C22C("itemset");
  v8 = v20 - a2;
  do
  {
    v9 = *a2;
    a2[v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = sub_14020B8D8(v20, "rb")) == 0 )
  {
    v11 = sub_14020B8D8(v20, "wb");
    v12 = v11;
    if ( v11 )
    {
      v19[0] = 1;
      sub_14020CE0C((__int64)v19, 4, 1, v11);
      v13 = 3792 * v3;
      v14 = &dword_140404A6C[948 * v3 + 272299397];
      sub_14020CE0C((__int64)(v14 + 19), 4, 1, v12);
      for ( i = 0; i < (int)v14[19]; ++i )
      {
        v16 = v13 + 116LL * i;
        sub_14020CE0C((__int64)&dword_140404A6C[272299417] + v16, 1, 64, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299434] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299437] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299440] + v16, 4, 3, v12);
        sub_14020CE0C((__int64)&dword_140404A6C[272299443] + v16, 4, 3, v12);
      }
      sub_14020B9E8(v12);
    }
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  else
  {
    sub_14020B9E8(v10);
    if ( !v7 )
      sub_14024C22C("..");
    if ( !v6 )
      sub_14024C22C("..");
  }
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20
#undef v21

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

