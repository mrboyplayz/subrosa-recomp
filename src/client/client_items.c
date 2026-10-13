#include "shared_client.h"

//----- (0000000140054130) ----------------------------------------------------
__int64            sr_CreateItem(int a1, float *a2, unsigned int *a3, float *a4)
{
  __int64 v4;
  unsigned int *v7;
  unsigned int v9;
  __int64 v11;
  unsigned int v12;
  unsigned int *v13;
  unsigned int *v14;
  unsigned int *v15;
  unsigned int v16;
  unsigned int v17;
  signed int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  signed int v22;
  __int64 v23;
  unsigned int *v24;
  __m128i si128;
  unsigned int *v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned int v31;
  unsigned int *v32;
  float v33;
  unsigned int v34;
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
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v11 + 278845894]), 0, 0x1B7Cu);
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
  if ( game_connected )
  {
    if ( v9 <= 0x3FF )
      ++dword_140404A6C[v9 + 280648157];
  }
  return v9;
}
#undef v35
#undef v36
#undef v37

//----- (00000001400CA1C0) ----------------------------------------------------
__int64 sub_1400CA1C0(int item)
{
  extern void item_solve_contacts(int item);
  item_solve_contacts(item);
  return 0; /* compatibility result is unused by the reviewed callers */
}

//----- (000000014013EC80) ----------------------------------------------------
// Candidate .sis item-set scanner: references *.sis and filesystem enumeration helper.
void asset_scan_itemsets_sis_candidate()
{
  unsigned int v0;
  int v1;
  int v2;
  unsigned int *v3;
  int i;
  unsigned int *v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char *v11;
  unsigned int *v12;
  char v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  char *v18;
  char v19;
  char v20;
  char v21;
  __int64 v22;
  int v23;
  unsigned int *v24;
  char *v25;
  char v26;
  char *v27;
  char v28;
  char *v29;
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
  v6 = crt_chdir("data");
  v7 = crt_chdir("itemset");
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
    crt_chdir("..");
  if ( !v6 )
    crt_chdir("..");
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
  float v0;
  float v1;
  float v2;
  float v3;
  double v4;
  float v5;
  float v6;
  float v7;
  float v8;
  double v9;
  float v10;
  float v11;
  float v12;
  float v13;
  double v14;
  float v15;
  float v16;
  float v17;
  float v18;
  double v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  double v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  double v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  double v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  double v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  double v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  double v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  double v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  double v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  double v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  double v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  double v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  double v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  double v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  double v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  double v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  double v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  double v121;
  double v122;
  double v123;
  double v124;
  double v125;
  double v126;
  double v127;
  double v128;
  double v129;
  double v130;
  double v131;
  double v132;
  double v133;
  double v134;
  double v135;
  double v136;
  double v137;
  double v138;
  double v139;
  int v140;
  __int64 v141;
  __int64 v142;
  float v143;
  float v144;
  float *v145;
  float *v146;
  float v147;
  char *v148;
  int v149;
  int v150;
  unsigned int v151;
  unsigned int v152;
  float v153;
  float v154;
  float v155;
  __int64 v156;
  __int64 v157;
  unsigned int v158;
  unsigned int v159;
  float v160;
  float v161;
  float v162;
  __int64 v163;
  __int64 v164;
  unsigned int v165;
  unsigned int v166;
  float v167;
  float v168;
  float v169;
  __int64 v170;
  __int64 v171;
  unsigned int v172;
  unsigned int v173;
  float v174;
  float v175;
  float v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int *v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  int *v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  signed int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  float v224;
  float v225;
  float v226;
  __int64 v227;
  float v228;
  float v229;
  float v230;
  __int64 v231;
  float *v232;
  float v233;
  float v234;
  float v235;
  __int64 v236;
  signed int v237;
  __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  unsigned int *v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  unsigned int *v247;
  __int64 v248;
  signed int v249;
  __int64 v250;
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
  int v5;
  int v6;
  unsigned int *v7;
  int v8;
  unsigned int *v9;
  __int64 v10;
  __int64 v11;
  char *v12;
  char *v13;
  signed int v14;
  __int64 v15;
  unsigned int *v16;
  char *v17;
  signed int v18;
  int *v19;
  char *v20;
  int v21;
  __int64 v22;
  unsigned int *v23;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB2D0[32];
#define Buffer (*(int (*))(void *)(sr_frame_1400CB2D0 + 0)) /* [rsp+68h] */
#define v25 (*(int (*))(void *)(sr_frame_1400CB2D0 + 8)) /* [rsp+70h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400CB2D0 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    crt_fread((__int64)&Buffer, 4, 1, (__int64)Stream);
    crt_fread((__int64)&dword_140404A6C[273322513], 4, 1, (__int64)Stream);
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
        crt_fread((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[273322513] );
  }
  if ( a2 )
    crt_fread((__int64)&dword_140404A6C[273324050], 4, 1, (__int64)Stream);
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
        crt_fread((__int64)v12, 4, 3, (__int64)Stream);
        crt_fread((__int64)(v13 + 84004), 4, 1, (__int64)Stream);
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
            crt_fread((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[273324567] + v11;
      if ( a2 )
        crt_fread((__int64)v17, 4, 1, (__int64)Stream);
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
            crt_fread((__int64)v20, 4, 1, (__int64)Stream);
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
                crt_fread((__int64)v23, 4, 1, (__int64)Stream);
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

//----- (00000001400CB5F0) ----------------------------------------------------
void            sub_1400CB5F0(int a1, char *a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int *v4;
  int i;
  int v6;
  unsigned int *v7;
  __int64 v8;
  signed int v9;
  int v10;
  int v11;
  int v12;
  unsigned int *v13;
  __int64 v14;
  __int64 v15;
  signed int v16;
  __int64 v17;
  signed int v18;
  int *v19;
  int v20;
  __int64 v21;
  __int64 v22;
  void *v23;
  __int64 v24;
  void *v25;
  __int64 v26;
  signed int v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned int *v34;
  int v35;
  signed __int64 v36;
  unsigned int *v37;
  int v38;
  signed int v39;
  _DWORD *v40;
  unsigned int v41;
  int v42;
  unsigned int *v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  void *v54;
  __m128i *v55;
  unsigned int v56;
  __m128i *v57;
  unsigned int v58;
  unsigned int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  unsigned int *v68;
  unsigned int *v69;
  int v70;
  __int64 v71;
  signed int v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  signed int v77;
  _DWORD *v78;
  int v79;
  char *v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  unsigned int *v96;
  signed int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  float v102;
  float v103;
  float v104;
  __int64 v105;
  float v106;
  float v107;
  float v108;
  __int64 v109;
  float *v110;
  float v111;
  float v112;
  float v113;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CB5F0[160];
#define v114 (*(int (*))(void *)(sr_frame_1400CB5F0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400CB5F0 + 4)) /* [rsp+24h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_1400CB5F0 + 8)) /* [rsp+28h] */
#define v118 (*(int (*))(void *)(sr_frame_1400CB5F0 + 144)) /* [rsp+B0h] */
#define v119 (*(int (*))(void *)(sr_frame_1400CB5F0 + 152)) /* [rsp+B8h] */

  v2 = crt_fopen(a2, "rb");
  v3 = v2;
  v4 = &dword_140404A6C[273306127];
  if ( v2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v2));
    if ( Buffer != 3 )
    {
      crt_fclose(v3);
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
    crt_fclose(v3);
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
  crt_memcpy(v55, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v56));
  free(*(void **)&dword_140404A6C[v22 + 278522551]);
  v57 = (__m128i *)sr_path_malloc((int)(24 * dword_140404A6C[v22 + 278522547]));
  v58 = dword_140404A6C[v22 + 278522547];
  *(_QWORD *)&dword_140404A6C[v22 + 278522551] = (uint64)(uintptr_t)(v57);
  crt_memcpy(v57, (     __m128i *)&dword_140404A6C[178011345], (int)(24 * v58));
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

//----- (00000001400CC370) ----------------------------------------------------
__int64            sub_1400CC370(int a1, __int64 a2, int a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int *v8;
  signed int i;
  unsigned int *v11;
  unsigned int *v12;
  signed int v13;
  unsigned int *v14;
  __int64 v15;
  unsigned int *v16;
  signed int v17;
  __int64 v18;
  unsigned int *v19;
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
    crt_fread((__int64)&v24, 4, 1, a2);
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    crt_fread((__int64)v8, 4, 1, a2);
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
      crt_fread((__int64)v11, 4, 3, a2);
    else
      fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a2));
  }
  v12 = &dword_140404A6C[v6 + 273306126];
  if ( v5 )
    crt_fread((__int64)v12, 4, 1, a2);
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
        crt_fread((__int64)v16, 4, 1, a2);
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
            crt_fread((__int64)v19, 4, 1, a2);
            crt_fread((__int64)&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22], 4, 2, a2);
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

//----- (00000001400CC610) ----------------------------------------------------
__int64 sub_1400CC610()
{
  /* Ported to src/engine/item_tick.c and compared with the original
     (tools/native-compare, suite itemtick). The caller discards the result. */
  extern void item_tick_states(void);
  item_tick_states();
  return 0;
}
#undef retaddr

// 1400CCE14: conditional instruction was optimized away because ecx.4<4651

//----- (00000001400E7960) ----------------------------------------------------
void            sub_1400E7960(int a1, char *a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  unsigned int *v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  signed int v14;
  unsigned int *v15;
  int v16;
  unsigned int *v17;
       char *v18;
  unsigned int *v19;
  int v20;
  int v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E7960[576];
#define v23 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400E7960 + 32)) /* [rsp+20h] */
#define v25 (*(int (*))(void *)(sr_frame_1400E7960 + 36)) /* [rsp+24h] */
#define v26 (*(char (*)[512])(void *)(sr_frame_1400E7960 + 48)) /* [rsp+30h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1400E7960 + 560)) /* [rsp+230h] */

  v2 = a1;
  v25 = crt_chdir("data");
  v4 = v25;
  v5 = crt_chdir("itemset");
  v6 = v26 - a2;
  do
  {
    v7 = *a2;
    a2[v6] = *a2;
    ++a2;
  }
  while ( v7 );
  v8 = crt_fopen(v26, "rb");
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
    crt_fclose(v9);
  }
  if ( !v5 )
    crt_chdir("..");
  if ( !v4 )
    crt_chdir("..");
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

//----- (0000000140115FF0) ----------------------------------------------------
__int64            sub_140115FF0(int a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 result;

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

//----- (000000014012C890) ----------------------------------------------------
__int64            sub_14012C890(int a1, char *a2, int a3)
{
  __int64 v3;
  int v6;
  int v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int *v14;
  signed int i;
  __int64 v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012C890[576];
#define v18 (*(__int64 (*))(void *)(sr_frame_14012C890 + 0)) /* [rsp+0h] */
#define v19 (*(int (*)[4])(void *)(sr_frame_14012C890 + 32)) /* [rsp+20h] */
#define v20 (*(char (*)[512])(void *)(sr_frame_14012C890 + 48)) /* [rsp+30h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_14012C890 + 560)) /* [rsp+230h] */

  v3 = a1;
  v6 = crt_chdir("data");
  v7 = crt_chdir("itemset");
  v8 = v20 - a2;
  do
  {
    v9 = *a2;
    a2[v8] = *a2;
    ++a2;
  }
  while ( v9 );
  if ( a3 || (v10 = crt_fopen(v20, "rb")) == 0 )
  {
    v11 = crt_fopen(v20, "wb");
    v12 = v11;
    if ( v11 )
    {
      v19[0] = 1;
      crt_fread((__int64)v19, 4, 1, v11);
      v13 = 3792 * v3;
      v14 = &dword_140404A6C[948 * v3 + 272299397];
      crt_fread((__int64)(v14 + 19), 4, 1, v12);
      for ( i = 0; i < (int)v14[19]; ++i )
      {
        v16 = v13 + 116LL * i;
        crt_fread((__int64)&dword_140404A6C[272299417] + v16, 1, 64, v12);
        crt_fread((__int64)&dword_140404A6C[272299434] + v16, 4, 3, v12);
        crt_fread((__int64)&dword_140404A6C[272299437] + v16, 4, 3, v12);
        crt_fread((__int64)&dword_140404A6C[272299440] + v16, 4, 3, v12);
        crt_fread((__int64)&dword_140404A6C[272299443] + v16, 4, 3, v12);
      }
      crt_fclose(v12);
    }
    if ( !v7 )
      crt_chdir("..");
    if ( !v6 )
      crt_chdir("..");
  }
  else
  {
    crt_fclose(v10);
    if ( !v7 )
      crt_chdir("..");
    if ( !v6 )
      crt_chdir("..");
  }
  return 0; /* the function has no caller */
}

#undef v18
#undef v19
#undef v20
#undef v21

