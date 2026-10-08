#include "shared_client.h"

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140139E90) ----------------------------------------------------
void            sub_140139E90(__int64 a1, __int64 a2, double a3)
{
  int v3; // edi
  unsigned int *v4; // rbx
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rbx
  __int64 v8; // rsi
  unsigned int *v9; // rbx
  void *v10; // rcx
  _WORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int *v32; // rbx
  int i; // r8d
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int *v36; // rcx
  unsigned int v37; // eax
  unsigned int *v38; // rdx
  unsigned int *v39; // rcx
  unsigned int *v40; // rdx
  unsigned int *v41; // rcx
  unsigned int v42; // eax
  unsigned int *v43; // rbx
  unsigned int v44; // r8d
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  unsigned int v48; // r8d
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  __m128i si128; // xmm0
  __m128i v57; // xmm1
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  unsigned int *v64; // rsi
  __int64 v65; // r8
  __int64 v66; // r8
  unsigned int *v67; // rbx
  int v68; // ebx
  int *v69; // rsi
  unsigned int *v70; // r14
  int *v71; // r15
  int v72; // eax
  int v73; // esi
  int v74; // ebx
  unsigned int *v75; // rbx
  int v76; // ecx
  unsigned int *v77; // rax
  int v78; // esi
  int v79; // ecx
  unsigned int *v80; // rax
  int v81; // esi
  int *v82; // r14
  int *v83; // r14
  int v84; // esi
  int v85; // esi
  int *v86; // r14
  int v87; // esi
  int j; // eax
  signed int v89; // eax
  int k; // ebx
  int m; // ebx
  int *v92; // rbx
  int n; // ebx
  __int64 v94; // rsi
  int v95; // ecx
  unsigned int v96; // r9d
  signed int v97; // r10d
  signed int v98; // r8d
  int v99; // edx
  int v100; // eax
  __int64 v101; // rbx
  signed int v102; // r10d
  signed int ii; // r9d
  __int64 v104; // rcx
  signed int v105; // eax
  int v106; // esi
  __int64 v107; // rbx
  signed int jj; // r9d
  signed int kk; // r8d
  signed int v110; // eax
  int v111; // esi
  __int64 v112; // rbx
  signed int v113; // r10d
  char *v114; // r11
  int v115; // ecx
  int v116; // r8d
  int *v117; // r9
  int v118; // eax
  int v119; // edx
  int v120; // eax
  int *v121; // rbx
  int v122; // esi
  int v123; // esi
  int *v124; // rbx
  int v125; // esi
  int *v126; // rbx
  int v127; // esi
  int *v128; // rbx
  int v129; // esi
  int *v130; // rbx
  int *v131; // rbx
  signed int *v132; // rbx
  __int64 v133; // rdx
  __int64 v134; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140139E90[384];
#define v136 (*(__int64 (*))(void *)(sr_frame_140139E90 + 0)) /* [rsp+8h] */
#define v137 (*(_QWORD (*)[2])(void *)(sr_frame_140139E90 + 80)) /* [rsp+58h] */
#define v138 (*(_DWORD (*)[4])(void *)(sr_frame_140139E90 + 96)) /* [rsp+68h] */
#define v139 (*(_DWORD (*)[30])(void *)(sr_frame_140139E90 + 112)) /* [rsp+78h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_140139E90 + 368)) /* [rsp+178h] */

  v3 = 1;
  v4 = &dword_140404A6C[71737686];
  dword_140404A6C[73991624] = 1;
  do
  {
    *(v4 - 1) = unk_140404208();
    *v4 = unk_140404210(35633);
    v4[1] = unk_140404210(35632);
    v4[2] = unk_140404210(36313);
    v4 += 60;
  }
  while ( (__int64)v4 < (__int64)&dword_140404A6C[71739606] );
  v5 = &dword_140404A6C[283793814];
  v6 = 0x2000;
  do
  {
    unk_140404180(1, v5 - 1);
    unk_140404180(1, v5);
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v7 = &dword_140404A6C[283791766];
  v8 = 64;
  do
  {
    unk_140404700(1, v7 - 1);
    unk_1404046D0(1, v7);
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v9 = &dword_140404A6C[18182167];
  do
  {
    v10 = *((void **)v9 - 2);
    *(v9 - 6) = 1;
    *v9 = 1086324736;
    *(v9 - 5) = 0x40000;
    free(v10);
    v11 = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)v9 - 2) = (uint64)(uintptr_t)(v11);
    sub_1401FCD30((void *)(uintptr_t)(v11), 0, 0x100000u);
    v12 = 0;
    v13 = 384;
    *((_QWORD *)v9 - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)v9 - 2) + 4 * v12) = 0;
      v14 = *((_QWORD *)v9 - 2);
      v15 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v15;
      *(_DWORD *)(v14 + 4 * v15) = 0;
      v16 = *((_QWORD *)v9 - 2);
      v17 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v17;
      *(_DWORD *)(v16 + 4 * v17) = 0;
      v18 = *((_QWORD *)v9 - 2);
      v19 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v19;
      *(_DWORD *)(v18 + 4 * v19) = 0;
      v20 = *((_QWORD *)v9 - 2);
      v21 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v21;
      *(_DWORD *)(v20 + 4 * v21) = 0;
      v22 = *((_QWORD *)v9 - 2);
      v23 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v23;
      *(_DWORD *)(v22 + 4 * v23) = 0;
      v24 = *((_QWORD *)v9 - 2);
      v25 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v25;
      *(_DWORD *)(v24 + 4 * v25) = 0;
      v26 = *((_QWORD *)v9 - 2);
      v27 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v27;
      *(_DWORD *)(v26 + 4 * v27) = 0;
      v28 = *((_QWORD *)v9 - 2);
      v29 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v29;
      *(_DWORD *)(v28 + 4 * v29) = 0;
      v30 = *((_QWORD *)v9 - 2);
      v31 = (*(v9 - 2) + 1) & 0x3FFFF;
      *(v9 - 2) = v31;
      *(_DWORD *)(v30 + 4 * v31) = 0;
      LODWORD(v30) = (*(v9 - 2) + 1) & 0x3FFFF;
      v12 = (unsigned int)v30;
      *(v9 - 2) = v30;
      --v13;
    }
    while ( v13 );
    v9 += 8;
  }
  while ( (__int64)v9 < (__int64)&dword_140404A6C[18182231] );
  *(_QWORD *)&dword_140404A6C[299853437] = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, v138));
  sub_1401E0F40(*(int **)&dword_140404A6C[299853437], 4002, 16000);
  v32 = &dword_140404A6C[299853565];
  do
  {
    *(_QWORD *)v32 = (uint64)(uintptr_t)(sub_1401E22F0(48000, 1, v138));
    v32 += 2;
  }
  while ( (__int64)v32 < (__int64)&dword_140404A6C[299853581] );
  dword_140404A6C[18600733] = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v34 = i;
    v35 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v34 + 18600733] = v35;
  }
  dword_14030186C = i;
  render_cache_camera_uniforms_candidate();
  v36 = &dword_140404A6C[283790166];
  v37 = 4;
  v38 = &dword_140404A6C[283791190];
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283790158], _mm_load_si128((     __m128i *)&xmmword_140278F50));
  dword_140404A6C[283790157] = 4;
  do
  {
    *v36++ = v37;
    v37 = ++dword_140404A6C[283790157];
  }
  while ( (__int64)v36 < (__int64)&dword_140404A6C[283791190] );
  v39 = &dword_140404A6C[283791446];
  do
  {
    *v38++ = v37;
    v37 = ++dword_140404A6C[283790157];
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[283791446] );
  v40 = &dword_140404A6C[283791462];
  do
  {
    *v39++ = v37;
    v37 = ++dword_140404A6C[283790157];
  }
  while ( (__int64)v39 < (__int64)&dword_140404A6C[283791462] );
  do
  {
    *v40++ = v37;
    v37 = ++dword_140404A6C[283790157];
  }
  while ( (__int64)v40 < (__int64)&dword_140404A6C[283791478] );
  dword_140404A6C[283791480] = v37;
  v41 = &dword_140404A6C[283791496];
  dword_140404A6C[283791481] = v37 + 1;
  dword_140404A6C[283791482] = v37 + 2;
  dword_140404A6C[283791483] = v37 + 3;
  dword_140404A6C[283791484] = v37 + 4;
  dword_140404A6C[283791485] = v37 + 5;
  dword_140404A6C[283791486] = v37 + 6;
  dword_140404A6C[283791487] = v37 + 7;
  v42 = v37 + 8;
  dword_140404A6C[283790157] = v42;
  do
  {
    *v41++ = v42;
    v42 = ++dword_140404A6C[283790157];
  }
  while ( (__int64)v41 < (__int64)&dword_140404A6C[283791560] );
  dword_140404A6C[283791752] = v42;
  v43 = &dword_140404A6C[271838023];
  v44 = dword_140404A6C[283790157];
  dword_140404A6C[271838023] = 64;
  dword_140404A6C[271838024] = 17161;
  v45 = 128 / __ROL4__(1, 1);
  v46 = __ROL4__(1, 2);
  v47 = (v45 + 3) * (v45 + 3);
  dword_140404A6C[283791753] = v44 + 1;
  v44 += 2;
  dword_140404A6C[271838025] = 411864;
  dword_140404A6C[283790157] = v44;
  dword_140404A6C[271862606] = v47;
  dword_140404A6C[283791754] = v44;
  v48 = dword_140404A6C[283790157];
  dword_140404A6C[271862605] = 128;
  dword_140404A6C[271862607] = 24 * v47;
  dword_140404A6C[283791755] = v48 + 1;
  v49 = (128 / v46 + 3) * (128 / v46 + 3);
  dword_140404A6C[283791756] = v48 + 2;
  dword_140404A6C[271887188] = v49;
  v48 += 3;
  dword_140404A6C[271887187] = 128;
  dword_140404A6C[271911769] = 512;
  dword_140404A6C[271936351] = 1024;
  dword_140404A6C[271887189] = 24 * v49;
  dword_140404A6C[283790157] = v48;
  v50 = 128 / __ROL4__(1, 3);
  dword_140404A6C[271960933] = 2048;
  v51 = (v50 + 3) * (v50 + 3);
  dword_140404A6C[271911770] = v51;
  dword_140404A6C[271911771] = 24 * v51;
  v52 = 128 / __ROL4__(1, 4);
  v53 = __ROL4__(1, 5);
  v54 = (v52 + 3) * (v52 + 3);
  dword_140404A6C[271936352] = v54;
  dword_140404A6C[271936353] = 24 * v54;
  v55 = (128 / v53 + 3) * (128 / v53 + 3);
  dword_140404A6C[271960934] = v55;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278FD0);
  v57 = _mm_load_si128((     __m128i *)&xmmword_140279010);
  dword_140404A6C[271960935] = 24 * v55;
  v58 = (unsigned int)__ROL4__(1, 6);
  dword_140404A6C[283791757] = v48;
  v59 = (128 / (int)v58 + 3) * (128 / (int)v58 + 3);
  v60 = dword_140404A6C[283790157] + 1;
  dword_140404A6C[283790157] = v60;
  dword_140404A6C[283791758] = v60;
  dword_140404A6C[271985515] = 4096;
  dword_140404A6C[283790134] = 0;
  dword_140404A6C[271985516] = v59;
  dword_140404A6C[283790135] = 1;
  dword_140404A6C[283790136] = 2;
  dword_140404A6C[283790153] = 3;
  dword_140404A6C[271985517] = 24 * v59;
  dword_140404A6C[283790154] = 4;
  dword_140404A6C[283791479] = dword_140404A6C[283790157] + 1;
  dword_140404A6C[283791478] = dword_140404A6C[283790157] + 2;
  dword_140404A6C[283790157] += 3;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283790137], si128);
  dword_140404A6C[283790145] = 13;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283790141], v57);
  dword_140404A6C[283790146] = 14;
  dword_140404A6C[283790155] = 15;
  dword_140404A6C[283790133] = 16;
  sub_1400C2DB0(v58, (unsigned int)(128 % (int)v58), v60);
  sub_14014CBE0();
  sub_14013DCD0();
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791479] + 283793813], v61);
  unk_140404190(34962, 1572864, 0, 35048);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791478] + 283793813], v62);
  unk_140404190(34962, 393216, 0, 35048);
  v64 = &dword_140404A6C[283791752];
  do
  {
    qword_140404170(34962, dword_140404A6C[2 * *v64 + 283793813], v63);
    unk_140404190(34962, (int)(*v43 * v43[2]), 0, 35048);
    ++v64;
    v43 += 24582;
  }
  while ( (__int64)v64 <= (__int64)&dword_140404A6C[283791758] );
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791446] + 283793813], v63);
  unk_140404190(34962, 0x200000, 0, 35048);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791447] + 283793813], v65);
  unk_140404190(34962, 0x100000, 0, 35048);
  v67 = &dword_140404A6C[283827286];
  do
  {
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[*v67 + 283790166] + 283793813], v66);
    unk_140404190(34962, 196608, 0, 35048);
    ++v67;
  }
  while ( (__int64)v67 < (__int64)&dword_140404A6C[283827542] );
  v68 = 0;
  v69 = (int *)&dword_140404A6C[283826646];
  v70 = &dword_140404A6C[346707717];
  v71 = (int *)&dword_140404A6C[283826710];
  while ( v68 == 12 )
  {
    sub_140102ED0(12, *(v69 - 64), "data/helitest.tst");
    sub_140102ED0(12, *v69, "data/helitest.tst");
LABEL_37:
    ++v68;
    ++v69;
    v71 += 4;
    v70 += 24944;
    if ( v68 >= 18 )
      goto LABEL_40;
  }
  if ( v68 == 8 )
  {
    sub_140102ED0(8, *(v69 - 64), "data/van.tst");
    sub_140102ED0(8, *v69, "data/van.tst");
    goto LABEL_37;
  }
  v72 = *(v69 - 64);
  if ( v68 != 17 )
  {
    if ( *v70 )
    {
      sub_140064FF0(v72, v68);
      sub_140064FF0(*v69, v68);
    }
    else
    {
      sub_140061A60(v72, v68);
      sub_1400636E0(*v69, v68);
    }
    goto LABEL_37;
  }
  sub_1400FF660(17, v72);
  sub_1400FF660(17, *v69);
  sub_1400FF3C0((__int64)&dword_140404A6C[335968509], *v71);
LABEL_40:
  sub_1400E9A60(dword_140404A6C[283826967], -1, "ak47");
  sub_1400E9A60(dword_140404A6C[283826969], -1, "m16");
  sub_1400E9A60(dword_140404A6C[283826973], -1, "mp5");
  sub_1400E9A60(dword_140404A6C[283826968], -1, "ak47_magazine");
  sub_1400E9A60(dword_140404A6C[283826970], -1, "m16_magazine");
  sub_1400E9A60(dword_140404A6C[283826974], -1, "mp5_magazine");
  sub_1400E9A60(dword_140404A6C[283826978], -1, "9mm_magazine");
  sub_14004EB60(dword_140404A6C[283826972], 3, 0);
  sub_140052240(dword_140404A6C[283826971], 5, a3);
  sub_1400E9A60(dword_140404A6C[283826977], -1, "9mm");
  sub_14004E6E0(dword_140404A6C[283826981], 0.3125, 0.09375, 0.25);
  sub_14004E6E0(dword_140404A6C[283826982], 0.3125, 0.09375, 0.25);
  sub_140066EE0(dword_140404A6C[283827222], 0.25, sr_export_float_lane_container(1052770304), 0.28125);
  sub_140066EE0(dword_140404A6C[283827223], 0.25, sr_export_float_lane_container(1049624576), 0.28125);
  sub_140066EE0(dword_140404A6C[283827224], 0.25, sr_export_float_lane_container(1050673152), 0.234375);
  sub_140066EE0(dword_140404A6C[283827225], 0.25, sr_export_float_lane_container(1047527424), 0.234375);
  sub_140050280(dword_140404A6C[283826985], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826986], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826987], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826988], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826989], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826990], 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(dword_140404A6C[283826980], 0.125, 0.0625, 0.125);
  sub_1400561C0(dword_140404A6C[283826993]);
  sub_140050280(dword_140404A6C[283827002], 0.03125, 0.28125, 0.03125);
  sub_140050280(dword_140404A6C[283826994], 0.4375, 1.125, 0.03125);
  sub_14013FCD0(39, dword_140404A6C[283827005]);
  sub_14013FCD0(39, dword_140404A6C[283827006]);
  sub_140050280(
    dword_140404A6C[283827003],
    *(float *)&dword_140404A6C[278568266],
    *(float *)&dword_140404A6C[278568267],
    *(float *)&dword_140404A6C[278568268]);
  sub_140050280(
    dword_140404A6C[283827004],
    *(float *)&dword_140404A6C[278569534],
    *(float *)&dword_140404A6C[278569535],
    *(float *)&dword_140404A6C[278569536]);
  sub_1400555C0(dword_140404A6C[283827010], 44, sr_export_float_lane_container(1040187392), 0.09375, 0.5);
  v73 = dword_140404A6C[283827007];
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  LODWORD(v137[0]) = 0;
  *(_QWORD *)((char *)v137 + 4) = 1054867456;
  sub_140002D00((float *)v137, 1.0, 0.0625, 0.5);
  v74 = 0;
  HIDWORD(v137[0]) = -1115684864;
  do
  {
    if ( !v74 || (LODWORD(v137[0]) = 1064304640, v74 == 3) )
      LODWORD(v137[0]) = -1083179008;
    LODWORD(v137[1]) = -1092616192;
    if ( (unsigned int)v74 >= 2 )
      LODWORD(v137[1]) = 1054867456;
    sub_140002D00((float *)v137, 0.0625, 0.5, 0.0625);
    ++v74;
  }
  while ( v74 < 4 );
  v75 = &dword_140404A6C[178011346];
  v76 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v77 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v77 - 1) = 0;
      ++v76;
      *(_QWORD *)(v77 + 1) = 0;
      *(_QWORD *)(v77 + 3) = 0;
      v77 += 6;
    }
    while ( v76 < (int)dword_140404A6C[177495247] );
  }
  sub_1401449C0(v73, 0);
  sub_14013FCD0(42, dword_140404A6C[283827008]);
  sub_14013FCD0(43, dword_140404A6C[283827009]);
  sub_1400FFAE0(dword_140404A6C[283826983], 0.043945312, 0.03125, 0.10546875);
  sub_1400FFAE0(dword_140404A6C[283826984], 0.051269531, 0.01171875, 0.12304688);
  sub_140050280(dword_140404A6C[283826995], 0.25, 0.015625, 0.25);
  sub_140050280(dword_140404A6C[283827000], 0.25, 0.015625, 0.25);
  v78 = dword_140404A6C[283827804];
  LODWORD(v137[1]) = -1071644672;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v137[0] = 0;
  sub_140002D00((float *)v137, 0.125, 0.03125, 2.5);
  v79 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v80 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v80 - 1) = 0;
      ++v79;
      *(_QWORD *)(v80 + 1) = 0;
      *(_QWORD *)(v80 + 3) = 0;
      v80 += 6;
    }
    while ( v79 < (int)dword_140404A6C[177495247] );
  }
  sub_1401449C0(v78, 0);
  sub_1400E9A60(dword_140404A6C[283826991], -1, "cellphone");
  sub_1400E9A60(dword_140404A6C[283826992], -1, "walkietalkie");
  sub_1400E9A60(dword_140404A6C[283826979], -1, "grenade");
  sub_1400E9A60(dword_140404A6C[283827001], -1, "soccerball");
  sub_1400504C0(dword_140404A6C[283826999], 0.0625, 0.1875, 0.0625);
  sub_14004FDB0(dword_140404A6C[283826996]);
  sub_14018C340(dword_140404A6C[283827806]);
  v81 = 0;
  if ( (int)dword_140404A6C[272299389] > 0 )
  {
    v82 = (int *)&dword_140404A6C[283827013];
    do
      sub_14013F590(v81++, *v82++);
    while ( v81 < (int)dword_140404A6C[272299389] );
  }
  sub_14013FCD0(9, dword_140404A6C[283826975]);
  sub_14013FCD0(10, dword_140404A6C[283826976]);
  sub_14013FCD0(45, dword_140404A6C[283827011]);
  asset_load_character_cmc_candidate(0, "fcasual1");
  asset_load_character_cmc_candidate(1, "fsuit1");
  asset_load_character_cmc_candidate(2, "fsuit2");
  asset_load_character_cmc_candidate(8, "mcasual1");
  asset_load_character_cmc_candidate(9, "msuit1");
  asset_load_character_cmc_candidate(10, "msuit2");
  asset_load_character_cmc_candidate(16, "fnecktie1");
  asset_load_character_cmc_candidate(18, "mnecktie1");
  asset_load_character_cmc_candidate(20, "fnecklace1");
  asset_load_character_cmc_candidate(21, "fnecklace4");
  asset_load_character_cmc_candidate(22, "mnecklace1");
  asset_load_character_cmc_candidate(23, "mnecklace4");
  dword_140404A6C[177167565] = 0;
  v83 = (int *)&dword_140404A6C[283827574];
  dword_140404A6C[177495247] = 0;
  v84 = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  do
  {
    sub_14004EB60(*(v83 - 32), v84, 0);
    sub_14004EB60(*v83++, v84++, 1);
  }
  while ( v84 < 4 );
  v85 = 1;
  v86 = (int *)&dword_140404A6C[283827607];
  do
    sub_14005B840(*v86++, v85++);
  while ( v85 < 7 );
  sub_1400E9A60(dword_140404A6C[283827702], -1, "fhead1");
  sub_1400E9A60(dword_140404A6C[283827703], -1, "fhead2");
  sub_1400E9A60(dword_140404A6C[283827704], -1, "fhead3");
  sub_1400E9A60(dword_140404A6C[283827705], -1, "fhead4");
  sub_1400E9A60(dword_140404A6C[283827706], -1, "fhead5");
  sub_1400E9A60(dword_140404A6C[283827734], -1, "fhair1");
  sub_1400E9A60(dword_140404A6C[283827735], -1, "fhair2");
  sub_1400E9A60(dword_140404A6C[283827736], -1, "fhair3");
  sub_1400E9A60(dword_140404A6C[283827737], -1, "fhair4");
  sub_1400E9A60(dword_140404A6C[283827738], -1, "fhair5");
  sub_1400E9A60(dword_140404A6C[283827739], -1, "fhair6");
  sub_1400E9A60(dword_140404A6C[283827740], -1, "fhair7");
  sub_1400E9A60(dword_140404A6C[283827741], -1, "fhair8");
  sub_1400E9A60(dword_140404A6C[283827742], -1, "fhair9");
  sub_1400E9A60(dword_140404A6C[283827718], -1, "mhead1");
  sub_1400E9A60(dword_140404A6C[283827719], -1, "mhead2");
  sub_1400E9A60(dword_140404A6C[283827720], -1, "mhead3");
  sub_1400E9A60(dword_140404A6C[283827721], -1, "mhead4");
  sub_1400E9A60(dword_140404A6C[283827722], -1, "mhead5");
  sub_1400E9A60(dword_140404A6C[283827750], -1, "mhair1");
  sub_1400E9A60(dword_140404A6C[283827751], -1, "mhair2");
  sub_1400E9A60(dword_140404A6C[283827752], -1, "mhair3");
  sub_1400E9A60(dword_140404A6C[283827753], -1, "mhair4");
  sub_1400E9A60(dword_140404A6C[283827754], -1, "mhair5");
  sub_1400E9A60(dword_140404A6C[283827755], -1, "mhair6");
  sub_1400E9A60(dword_140404A6C[283827756], -1, "mhair7");
  sub_1400E9A60(dword_140404A6C[283827757], -1, "mhair8");
  sub_1400E9A60(dword_140404A6C[283827758], -1, "mhair9");
  v87 = dword_140404A6C[283827769];
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  memset(v137, 0, 12);
  sub_140002D00((float *)v137, 0.02, 0.02, 0.02);
  for ( j = 0; j < (int)dword_140404A6C[177495247]; v75 += 6 )
  {
    *(_QWORD *)(v75 - 1) = 0;
    ++j;
    *(_QWORD *)(v75 + 1) = 0;
    *(_QWORD *)(v75 + 3) = 0;
  }
  sub_1401449C0(v87, 0);
  v89 = dword_140404A6C[421784473];
  for ( k = 0; k < v89; ++k )
  {
    if ( k != 1 && k != dword_140404A6C[421784414] )
    {
      sub_140099730(k, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
      v89 = dword_140404A6C[421784473];
    }
  }
  for ( m = 0; m < 11; ++m )
    sub_1400990A0(1, m, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  sub_14009A5F0(dword_140404A6C[283829875], 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(dword_140404A6C[283829876], 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(dword_140404A6C[283830649], 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(dword_140404A6C[283830689], 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  v92 = (int *)&dword_140404A6C[283830658];
  do
    sub_14009A5F0(*v92++, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  while ( (__int64)v92 < (__int64)&dword_140404A6C[283830664] );
  for ( n = dword_140404A6C[283830690]; n <= (int)dword_140404A6C[283830695]; ++n )
    sub_14009A5F0(n, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_1400EDED0(dword_140404A6C[283830696], "data/model/tex_2.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830697], "data/model/walkie-talkie1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009A5F0(dword_140404A6C[283830699], 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  v94 = (int)dword_140404A6C[283830720];
  v95 = 128;
  v96 = dword_140404A6C[293250409];
  v97 = 128;
  dword_140404A6C[468765293] = 128;
  v98 = 0;
  dword_140404A6C[468765294] = 128;
  do
  {
    v99 = 0;
    if ( v95 > 0 )
    {
      do
      {
        v100 = v99 + v95 * v98;
        if ( v96 )
          dword_140404A6C[v100 + 468765295] = -16711904;
        else
          dword_140404A6C[v100 + 468765295] = 553582847;
        v95 = dword_140404A6C[468765293];
        ++v99;
      }
      while ( v99 < (int)dword_140404A6C[468765293] );
      v97 = dword_140404A6C[468765294];
    }
    ++v98;
  }
  while ( v98 < v97 );
  if ( v96 )
  {
    dword_140404A6C[468765295] = 1612720160;
    dword_140404A6C[468765296] = -425767648;
  }
  else
  {
    dword_140404A6C[468765295] = 539500640;
    dword_140404A6C[468765296] = 541958118;
  }
  v101 = 44 * v94;
  dword_140404A6C[v101 + 284024933] = v95;
  dword_140404A6C[v101 + 284024934] = v97;
  dword_140404A6C[v101 + 284024935] = 1;
  dword_140404A6C[v101 + 284024936] = 6408;
  dword_140404A6C[v101 + 284024937] = 6408;
  dword_140404A6C[v101 + 284024943] = 0;
  dword_140404A6C[v101 + 284024938] = 33071;
  dword_140404A6C[v101 + 284024939] = 33071;
  dword_140404A6C[v101 + 284024940] = 9728;
  dword_140404A6C[v101 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v94 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v101 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[v101 + 284024933]
                                                                     * dword_140404A6C[v101 + 284024934]));
  v102 = 0;
  if ( (int)dword_140404A6C[44 * v94 + 284024934] > 0 )
  {
    do
    {
      for ( ii = 0;
            ii < (int)dword_140404A6C[v101 + 284024933];
            *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v101 + 284024945] + 4LL * v105) = dword_140404A6C[v104 + 468765295] )
      {
        v104 = ii + dword_140404A6C[468765293] * v102;
        v105 = ii + v102 * dword_140404A6C[v101 + 284024933];
        ++ii;
      }
      ++v102;
    }
    while ( v102 < (int)dword_140404A6C[v101 + 284024934] );
  }
  sub_14014D3E0(v94, 1);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283830714], "data/terrain_normal.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400ED9D0(dword_140404A6C[283830715], "data/terrain_detail.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283830716], "data/terrain.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283830717], "data/terrain_reflection.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  sub_14009D7A0(dword_140404A6C[283830705]);
  sub_1400ED9D0(dword_140404A6C[283830701], "texture/mic.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400EDED0(dword_140404A6C[283830706], "texture/cash_one.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830707], "texture/cash_five.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830708], "texture/cash_ten.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830709], "texture/cash_twenty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830710], "texture/cash_fifty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830711], "texture/cash_hundred.png", 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2702u, 0);
  sub_1400EDED0(dword_140404A6C[283830712], "texture/cash_thousand.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2703u, 0);
  sub_1400EDED0(dword_140404A6C[283830722], "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830723], "data/model/gun_tex.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283830724], "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u, 0);
  sub_1400EDED0(dword_140404A6C[283830994], "data/model/grenade.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283831016], "data/model/soccerball.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(dword_140404A6C[283831026], "data/model/watermelon.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009C680(-1, dword_140404A6C[283830980]);
  v106 = dword_140404A6C[283830721];
  v107 = 44LL * (int)dword_140404A6C[283830721];
  dword_140404A6C[v107 + 284024933] = 16;
  dword_140404A6C[v107 + 284024934] = 16;
  dword_140404A6C[v107 + 284024935] = 1;
  dword_140404A6C[v107 + 284024936] = 6408;
  dword_140404A6C[v107 + 284024937] = 6408;
  dword_140404A6C[v107 + 284024943] = 0;
  dword_140404A6C[v107 + 284024938] = 33071;
  dword_140404A6C[v107 + 284024939] = 33071;
  dword_140404A6C[v107 + 284024940] = 9728;
  dword_140404A6C[v107 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[v107 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v107 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[v107 + 284024933]
                                                                     * dword_140404A6C[v107 + 284024934]));
  for ( jj = 0; jj < (int)dword_140404A6C[v107 + 284024934]; ++jj )
  {
    for ( kk = 0;
          kk < (int)dword_140404A6C[v107 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v107 + 284024945] + 4LL * v110) = -1 )
    {
      v110 = kk + jj * dword_140404A6C[v107 + 284024933];
      ++kk;
    }
  }
  sub_14014D3E0(v106, 1);
  v111 = dword_140404A6C[283830703];
  v112 = 44LL * (int)dword_140404A6C[283830703];
  dword_140404A6C[v112 + 284024933] = 32;
  dword_140404A6C[v112 + 284024934] = 16;
  dword_140404A6C[v112 + 284024935] = 1;
  dword_140404A6C[v112 + 284024936] = 6408;
  dword_140404A6C[v112 + 284024937] = 6408;
  dword_140404A6C[v112 + 284024943] = 0;
  dword_140404A6C[v112 + 284024938] = 33071;
  dword_140404A6C[v112 + 284024939] = 33071;
  dword_140404A6C[v112 + 284024940] = 9728;
  dword_140404A6C[v112 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[v112 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v112 + 284024945] = sr_path_malloc((int)(4
                                                                     * dword_140404A6C[v112 + 284024933]
                                                                     * dword_140404A6C[v112 + 284024934]));
  v113 = 0;
  if ( (int)dword_140404A6C[v112 + 284024934] > 0 )
  {
    v114 = (char *)&unk_1402B3470;
    do
    {
      v115 = dword_140404A6C[v112 + 284024933];
      v116 = 0;
      if ( v115 > 0 )
      {
        v117 = (int *)v114;
        do
        {
          v118 = *v117++;
          v119 = -(v118 != 0);
          v120 = v116 + v115 * v113;
          ++v116;
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v112 + 284024945] + 4LL * v120) = v119;
          v115 = dword_140404A6C[v112 + 284024933];
        }
        while ( v116 < v115 );
      }
      ++v113;
      v114 -= 128;
    }
    while ( v113 < (int)dword_140404A6C[v112 + 284024934] );
  }
  sub_14014D3E0(v111, 1);
  sub_14013D1B0();
  sub_1400ED9D0(dword_140404A6C[283831237], "texture/title.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400ED9D0(dword_140404A6C[283831238], "texture/box.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_14009B1A0(dword_140404A6C[283831303]);
  dword_140404A6C[433435853] = 2048;
  dword_140404A6C[433435854] = 2048;
  dword_140404A6C[433435865] = 0;
  free(*(void **)&dword_140404A6C[433435863]);
  *(_QWORD *)&dword_140404A6C[433435863] = sr_path_malloc(4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  sub_1401FCD30(
    (void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[433435863]),
    0xFFu,
    4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  unk_140404060(1, &dword_140404A6C[433435861]);
  qword_140404050(3553, dword_140404A6C[433435861]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    dword_140404A6C[433435853],
    dword_140404A6C[433435854],
    0,
    6408,
    5121,
    *(_QWORD *)&dword_140404A6C[433435863]);
  dword_140404A6C[282486884] = sub_140068FC0(0, "texture/icon-soccer_ball.png");
  dword_140404A6C[282486871] = sub_140068FC0(0, "texture/icon-disk-white.png");
  dword_140404A6C[282486868] = sub_140068FC0(0, "texture/icon-disk-black.png");
  dword_140404A6C[282486869] = sub_140068FC0(0, "texture/icon-disk-green.png");
  dword_140404A6C[282486870] = sub_140068FC0(0, "texture/icon-disk-blue.png");
  dword_140404A6C[282486872] = sub_140068FC0(0, "texture/icon-disk-gold.png");
  dword_140404A6C[282486873] = sub_140068FC0(0, "texture/icon-disk-red.png");
  dword_140404A6C[282486888] = sub_140068FC0(0, "texture/icon-keyboard.png");
  dword_140404A6C[282486864] = sub_140068FC0(0, "texture/icon-case-empty.png");
  dword_140404A6C[282486865] = sub_140068FC0(0, "texture/icon-case-empty.png");
  dword_140404A6C[282486866] = sub_140068FC0(0, "texture/icon-stack.png");
  dword_140404A6C[282486867] = dword_140404A6C[282486866];
  dword_140404A6C[282486863] = sub_140068FC0(0, "texture/icon-bandage.png");
  dword_140404A6C[282486860] = sub_140068FC0(0, "texture/icon-pistol.png");
  dword_140404A6C[282486861] = sub_140068FC0(0, "texture/icon-clip-pistol.png");
  dword_140404A6C[282486874] = sub_140068FC0(0, "texture/icon-phone.png");
  dword_140404A6C[282486850] = sub_140068FC0(0, "texture/icon-ak47.png");
  dword_140404A6C[282486851] = sub_140068FC0(0, "texture/icon-clip-ak47.png");
  dword_140404A6C[282486852] = sub_140068FC0(0, "texture/icon-m16.png");
  dword_140404A6C[282486853] = sub_140068FC0(0, "texture/icon-clip-m16.png");
  dword_140404A6C[282486856] = sub_140068FC0(0, "texture/icon-mp5.png");
  dword_140404A6C[282486857] = sub_140068FC0(0, "texture/icon-clip-mp5.png");
  dword_140404A6C[282486858] = sub_140068FC0(0, "texture/icon-uzi.png");
  dword_140404A6C[282486859] = sub_140068FC0(0, "texture/icon-clip-uzi.png");
  dword_140404A6C[282486876] = sub_140068FC0(0, "texture/icon-key.png");
  dword_140404A6C[282486862] = sub_140068FC0(0, "texture/icon-grenade.png");
  dword_140404A6C[346696310] = sub_140068FC0(0, "texture/icon_speaker.png");
  dword_140404A6C[346696311] = sub_140068FC0(0, "texture/icon_talking.png");
  v121 = (int *)&dword_140404A6C[283786051];
  dword_140404A6C[346696312] = sub_140068FC0(0, "texture/icon_muted.png");
  v122 = 1;
  do
  {
    sub_140158AB0(v139, "ak47_fire%02d.wav", v122);
    sub_1400EE400(*v121, (__int64)v139, 10.0);
    ++v122;
    ++v121;
  }
  while ( (__int64)v121 < (__int64)&dword_140404A6C[283786057] );
  v123 = 1;
  v124 = (int *)&dword_140404A6C[283786083];
  do
  {
    sub_140158AB0(v139, "m16_fire%02d.wav", v123);
    sub_1400EE400(*v124, (__int64)v139, 10.0);
    ++v123;
    ++v124;
  }
  while ( (__int64)v124 < (__int64)&dword_140404A6C[283786089] );
  v125 = 1;
  v126 = (int *)&dword_140404A6C[283786147];
  do
  {
    sub_140158AB0(v139, "mp5_fire%02d.wav", v125);
    sub_1400EE400(*v126, (__int64)v139, 10.0);
    ++v125;
    ++v126;
  }
  while ( (__int64)v126 < (__int64)&dword_140404A6C[283786153] );
  v127 = 1;
  v128 = (int *)&dword_140404A6C[283786179];
  do
  {
    sub_140158AB0(v139, "uzi_fire%02d.wav", v127);
    sub_1400EE400(*v128, (__int64)v139, 10.0);
    ++v127;
    ++v128;
  }
  while ( (__int64)v128 < (__int64)&dword_140404A6C[283786185] );
  v129 = 1;
  v130 = (int *)&dword_140404A6C[283786211];
  do
  {
    sub_140158AB0(v139, "pistol_fire%02d.wav", v129);
    sub_1400EE400(*v130, (__int64)v139, 10.0);
    ++v129;
    ++v130;
  }
  while ( (__int64)v130 < (__int64)&dword_140404A6C[283786217] );
  sub_1400EE400(dword_140404A6C[283785942], (__int64)"4cylinder.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785946], (__int64)"tiresqueal.wav", 10.0);
  v131 = (int *)&dword_140404A6C[283785947];
  do
  {
    sub_140158AB0(v139, "ricochet%02d.wav", v3);
    sub_1400EE400(*v131, (__int64)v139, 10.0);
    ++v3;
    ++v131;
  }
  while ( (__int64)v131 < (__int64)&dword_140404A6C[283785955] );
  sub_1400EE400(dword_140404A6C[283785963], (__int64)"carcrash01.wav", 32.0);
  sub_1400EE400(dword_140404A6C[283785964], (__int64)"carcrash02.wav", 32.0);
  sub_1400EE400(dword_140404A6C[283785967], (__int64)"bullethitbody01.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785968], (__int64)"bullethitbody02.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785971], (__int64)"bullethitmetal01.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785972], (__int64)"bullethitmetal02.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785979], (__int64)"glassbreak01.wav", 10.0);
  sub_1400EE400(dword_140404A6C[283785983], (__int64)"phonering01.wav", 1.0);
  v132 = (signed int *)&dword_140404A6C[283785984];
  do
    sub_140065AE0(*v132++, 0.25);
  while ( (__int64)v132 < (__int64)&dword_140404A6C[283785995] );
  sub_1400EE400(dword_140404A6C[283786000], (__int64)"reload01.wav", 1.0);
  sub_1400EE400(dword_140404A6C[283786008], (__int64)"shell_hit_cement.wav", 2.0);
  sub_1400EE400(dword_140404A6C[283786009], (__int64)"gearshift01.wav", 1.0);
  sub_1400EE400(dword_140404A6C[283786010], (__int64)"helicopter02.wav", 32.0);
  sub_140065AE0(dword_140404A6C[283786011], 32.0);
  sub_140065AE0(dword_140404A6C[283786012], 32.0);
  sub_140065AE0(dword_140404A6C[283786013], 32.0);
  sub_140065AE0(dword_140404A6C[283786014], 32.0);
  sub_1400EE400(dword_140404A6C[283786015], (__int64)"factorywhistle.wav", 128.0);
  sub_1400EE400(dword_140404A6C[283786016], (__int64)"explosion01.wav", 32.0);
  sub_1400EE400(dword_140404A6C[283786017], (__int64)"modem.wav", 1.0);
  sub_1400EE400(dword_140404A6C[283786018], (__int64)"floppy.wav", 1.0);
  sub_14013C920(v134, v133, 0.0 /* unused native input */);
  LOWORD(dword_140404A6C[83175941]) = 65;
  LOWORD(dword_140404A6C[83175945]) = 66;
  LOWORD(dword_140404A6C[83175949]) = 67;
  LOWORD(dword_140404A6C[83175953]) = 68;
  LOWORD(dword_140404A6C[83175957]) = 69;
  LOWORD(dword_140404A6C[83175961]) = 70;
  LOWORD(dword_140404A6C[83175965]) = 71;
  LOWORD(dword_140404A6C[83175969]) = 72;
  LOWORD(dword_140404A6C[83175973]) = 73;
  LOWORD(dword_140404A6C[83175977]) = 74;
  LOWORD(dword_140404A6C[83175981]) = 75;
  LOWORD(dword_140404A6C[83175985]) = 76;
  LOWORD(dword_140404A6C[83175989]) = 77;
  LOWORD(dword_140404A6C[83175993]) = 78;
  LOWORD(dword_140404A6C[83175997]) = 79;
  LOWORD(dword_140404A6C[83176001]) = 80;
  LOWORD(dword_140404A6C[83176005]) = 81;
  LOWORD(dword_140404A6C[83176009]) = 82;
  dword_140404A6C[83176829] = 7629889;
  LOWORD(dword_140404A6C[83176013]) = 83;
  LOWORD(dword_140404A6C[83176017]) = 84;
  LOWORD(dword_140404A6C[83176021]) = 85;
  LOWORD(dword_140404A6C[83176025]) = 86;
  LOWORD(dword_140404A6C[83176029]) = 87;
  LOWORD(dword_140404A6C[83176033]) = 88;
  LOWORD(dword_140404A6C[83176037]) = 89;
  LOWORD(dword_140404A6C[83176041]) = 90;
  LOWORD(dword_140404A6C[83176045]) = 49;
  LOWORD(dword_140404A6C[83176049]) = 50;
  LOWORD(dword_140404A6C[83176053]) = 51;
  LOWORD(dword_140404A6C[83176057]) = 52;
  LOWORD(dword_140404A6C[83176061]) = 53;
  LOWORD(dword_140404A6C[83176065]) = 54;
  LOWORD(dword_140404A6C[83176069]) = 55;
  LOWORD(dword_140404A6C[83176073]) = 56;
  LOWORD(dword_140404A6C[83176077]) = 57;
  LOWORD(dword_140404A6C[83176081]) = 48;
  strcpy((char *)&dword_140404A6C[83176245], "Left");
  strcpy((char *)&dword_140404A6C[83176241], "Right");
  strcpy((char *)&dword_140404A6C[83176253], "Up");
  strcpy((char *)&dword_140404A6C[83176249], "Down");
  strcpy((char *)&dword_140404A6C[83176101], "Space");
  strcpy((char *)&dword_140404A6C[83176085], "Enter");
  strcpy((char *)&dword_140404A6C[83176969], "Center");
  strcpy((char *)&dword_140404A6C[83176821], "Ctrl");
  strcpy((char *)&dword_140404A6C[83176825], "Shift");
  strcpy((char *)&dword_140404A6C[83176141], "Comma");
  strcpy((char *)&dword_140404A6C[83176145], "Period");
  strcpy((char *)&dword_140404A6C[83176305], "Home");
  strcpy((char *)&dword_140404A6C[83176985], "PgUp");
  strcpy((char *)&dword_140404A6C[83176961], "PgDn");
  strcpy((char *)&dword_140404A6C[83177005], "Plus");
  strcpy((char *)&dword_140404A6C[83177001], "Minus");
  strcpy((char *)&dword_140404A6C[83175925], "None");
  dword_140404A6C[83176953] = 6581829;
  dword_140404A6C[83176949] = 7564873;
  dword_140404A6C[83176989] = 7103812;
  return;
}
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140

// 140278F50: using guessed type __int128 xmmword_140278F50;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046C0: using guessed type __int64 (__fastcall *unk_1404046C0)(_QWORD, _QWORD);
// 1404046D8: using guessed type __int64 (__fastcall *unk_1404046D8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404708: using guessed type __int64 (__fastcall *unk_140404708)(_QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404728: using guessed type __int64 (__fastcall *unk_140404728)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 182A7D55C: using guessed type unsigned int;
// 182A7D560: using guessed type unsigned int;
// 183EBE408: using guessed type unsigned int;
// 183EBE414: using guessed type unsigned int;
// 183EBE41C: using guessed type unsigned int;
// 183EBE420: using guessed type unsigned int;
// 183EBE424: using guessed type unsigned int;

//----- (000000014013DCD0) ----------------------------------------------------
__int64 sub_14013DCD0()
{
  __int64 v0; // rcx
  __int64 result; // rax
  int v2; // ebx
  unsigned int *v3; // rdi
  __int64 v4; // rax
       char *v5; // r8
  unsigned int *v6; // rcx
  unsigned int v7; // eax
  unsigned int *v8; // rcx
  unsigned int *v9; // rcx
  unsigned int *v10; // rdx
  unsigned int *v11; // rcx
  unsigned int *v12; // rcx
  unsigned int *v13; // rdx
  unsigned int *v14; // rcx
  unsigned int *v15; // rdx
  unsigned int *v16; // r8
  unsigned int *v17; // rdx
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned int *v21; // rcx
  unsigned int v22; // eax
  unsigned int *v23; // rcx
  unsigned int v24; // eax
  unsigned int *v25; // rcx
  unsigned int v26; // eax
  unsigned int *v27; // rdx
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  unsigned int *v34; // rax
  int v35; // ecx
  unsigned int *v36; // rax
  float v37; // xmm0_4
  unsigned int *v38; // rdx
  int v39; // ecx
  _DWORD *v40; // rax

  v0 = 138412032;
  if ( dword_140404A6C[284024929] )
    v0 = 553648128;
  *(_QWORD *)&dword_140404A6C[421769135] = sr_path_malloc(v0);
  if ( !*(_QWORD *)&dword_140404A6C[421769135] )
  {
    result = sub_140198F95(16, (__int64)"Error", (__int64)"Colgrid malloc failed");
    dword_140404A6C[137297749] = 1;
    return result;
  }
  v2 = 0;
  v3 = &dword_140404A6C[272034683];
  do
  {
    v4 = sr_path_malloc(16793604);
    *(_QWORD *)v3 = v4;
    if ( !v4 )
    {
      v5 = "Land malloc failed";
      goto LABEL_56;
    }
    ++v2;
    v3 += 3336;
  }
  while ( v2 < 64 );
  *(_QWORD *)&dword_140404A6C[272248185] = sr_path_malloc(0x200000);
  if ( !*(_QWORD *)&dword_140404A6C[272248185] )
  {
    v5 = "Landmask malloc failed";
LABEL_56:
    result = sub_140198F95(16, (__int64)"Error", (__int64)v5);
    dword_140404A6C[137297749] = 1;
    return result;
  }
  dword_140404A6C[179955874] = 1;
  dword_140404A6C[179955862] = 1;
  dword_140404A6C[19065869] = 0x400000;
  *(_QWORD *)&dword_140404A6C[19065875] = sr_path_malloc(0x400000);
  if ( !*(_QWORD *)&dword_140404A6C[19065875] )
  {
    v5 = "Replay malloc failed";
    goto LABEL_56;
  }
  v6 = &dword_140404A6C[283826582];
  strcpy((char *)&dword_140404A6C[283831313], "test2");
  v7 = 0;
  dword_140404A6C[283826581] = 0;
  do
  {
    *v6++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v6 < (__int64)&dword_140404A6C[283826614] );
  v8 = &dword_140404A6C[283826646];
  do
  {
    *v8++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v8 < (__int64)&dword_140404A6C[283826678] );
  v9 = &dword_140404A6C[283826711];
  do
  {
    *(v9 - 1) = v7;
    *v9 = ++dword_140404A6C[283826581];
    v9[1] = ++dword_140404A6C[283826581];
    v9[2] = ++dword_140404A6C[283826581];
    v9 += 4;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v9 < (__int64)&dword_140404A6C[283826839] );
  v10 = &dword_140404A6C[283826966];
  v11 = &dword_140404A6C[283827222];
  do
  {
    *v10++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v10 < (__int64)&dword_140404A6C[283827222] );
  do
  {
    *v11++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v11 < (__int64)&dword_140404A6C[283827254] );
  v12 = &dword_140404A6C[283827286];
  do
  {
    *v12++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v12 < (__int64)&dword_140404A6C[283827542] );
  v13 = &dword_140404A6C[283827638];
  v14 = &dword_140404A6C[283827702];
  do
  {
    *v13++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v13 < (__int64)&dword_140404A6C[283827702] );
  v15 = &dword_140404A6C[283827574];
  v16 = &dword_140404A6C[283827606];
  do
  {
    *(v15 - 32) = v7;
    *v15++ = ++dword_140404A6C[283826581];
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v15 < (__int64)&dword_140404A6C[283827606] );
  do
  {
    *v16++ = v7;
    v7 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v16 < (__int64)&dword_140404A6C[283827638] );
  dword_140404A6C[283827800] = v7;
  v17 = &dword_140404A6C[283827734];
  v18 = v7 + 1;
  dword_140404A6C[283826581] = v18;
  do
  {
    *v14++ = v18;
    v18 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v14 < (__int64)&dword_140404A6C[283827734] );
  do
  {
    *v17++ = v18;
    v18 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v17 < (__int64)&dword_140404A6C[283827766] );
  dword_140404A6C[283827766] = v18;
  v19 = &dword_140404A6C[283827768];
  dword_140404A6C[283827767] = v18 + 1;
  v20 = v18 + 2;
  dword_140404A6C[283826581] = v20;
  do
  {
    *v19++ = v20;
    v20 = ++dword_140404A6C[283826581];
  }
  while ( (__int64)v19 < (__int64)&dword_140404A6C[283827800] );
  dword_140404A6C[283827804] = v20;
  v21 = &dword_140404A6C[283827815];
  dword_140404A6C[283827805] = v20 + 1;
  dword_140404A6C[283827806] = v20 + 2;
  dword_140404A6C[283826581] = v20 + 3;
  v22 = 0;
  dword_140404A6C[283827813] = 0;
  do
  {
    *(v21 - 1) = v22;
    *v21 = ++dword_140404A6C[283827813];
    v21[1] = ++dword_140404A6C[283827813];
    v21[2] = ++dword_140404A6C[283827813];
    v21 += 4;
    v22 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v21 < (__int64)&dword_140404A6C[283828839] );
  dword_140404A6C[283829862] = v22;
  v23 = &dword_140404A6C[283830137];
  dword_140404A6C[283829863] = v22 + 1;
  dword_140404A6C[283829864] = v22 + 2;
  dword_140404A6C[283829865] = v22 + 3;
  dword_140404A6C[283829866] = v22 + 4;
  dword_140404A6C[283829867] = v22 + 5;
  dword_140404A6C[283829868] = v22 + 6;
  dword_140404A6C[283829869] = v22 + 7;
  dword_140404A6C[283829870] = v22 + 8;
  dword_140404A6C[283829871] = v22 + 9;
  dword_140404A6C[283829872] = v22 + 10;
  dword_140404A6C[283829873] = v22 + 11;
  dword_140404A6C[283829875] = v22 + 12;
  dword_140404A6C[283829876] = v22 + 13;
  dword_140404A6C[283829874] = v22 + 14;
  dword_140404A6C[283830649] = v22 + 15;
  dword_140404A6C[283830650] = v22 + 16;
  dword_140404A6C[283830651] = v22 + 17;
  dword_140404A6C[283830652] = v22 + 18;
  dword_140404A6C[283830653] = v22 + 19;
  dword_140404A6C[283830654] = v22 + 20;
  dword_140404A6C[283830655] = v22 + 21;
  dword_140404A6C[283830656] = v22 + 22;
  v24 = v22 + 23;
  dword_140404A6C[283827813] = v24;
  do
  {
    *v23++ = v24;
    v24 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v23 < (__int64)&dword_140404A6C[283830393] );
  dword_140404A6C[283830689] = v24;
  v25 = &dword_140404A6C[283830657];
  dword_140404A6C[283830706] = v24 + 1;
  dword_140404A6C[283830707] = v24 + 2;
  dword_140404A6C[283830708] = v24 + 3;
  dword_140404A6C[283830709] = v24 + 4;
  dword_140404A6C[283830710] = v24 + 5;
  dword_140404A6C[283830711] = v24 + 6;
  dword_140404A6C[283830712] = v24 + 7;
  dword_140404A6C[283830713] = v24 + 8;
  v26 = v24 + 9;
  dword_140404A6C[283827813] = v26;
  do
  {
    *v25++ = v26;
    v26 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v25 < (__int64)&dword_140404A6C[283830689] );
  dword_140404A6C[283830690] = v26;
  v27 = &dword_140404A6C[283830725];
  v28 = &dword_140404A6C[283830981];
  dword_140404A6C[283830691] = v26 + 1;
  dword_140404A6C[283830692] = v26 + 2;
  dword_140404A6C[283830693] = v26 + 3;
  dword_140404A6C[283830694] = v26 + 4;
  dword_140404A6C[283830695] = v26 + 5;
  dword_140404A6C[283830696] = v26 + 6;
  dword_140404A6C[283830697] = v26 + 7;
  dword_140404A6C[283830698] = v26 + 8;
  dword_140404A6C[283830699] = v26 + 9;
  dword_140404A6C[283830700] = v26 + 10;
  dword_140404A6C[283830701] = v26 + 11;
  dword_140404A6C[283830702] = v26 + 12;
  dword_140404A6C[283830703] = v26 + 13;
  dword_140404A6C[283830704] = v26 + 14;
  dword_140404A6C[283830705] = v26 + 15;
  dword_140404A6C[283830714] = v26 + 16;
  dword_140404A6C[283830715] = v26 + 17;
  dword_140404A6C[283830716] = v26 + 18;
  dword_140404A6C[283830717] = v26 + 19;
  dword_140404A6C[283830718] = v26 + 20;
  dword_140404A6C[283830719] = v26 + 21;
  dword_140404A6C[283830720] = v26 + 22;
  dword_140404A6C[283830721] = v26 + 23;
  dword_140404A6C[283830722] = v26 + 24;
  dword_140404A6C[283830723] = v26 + 25;
  dword_140404A6C[283830724] = v26 + 26;
  v29 = v26 + 27;
  dword_140404A6C[283827813] = v29;
  do
  {
    *v27++ = v29;
    v29 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v27 < (__int64)&dword_140404A6C[283830981] );
  do
  {
    *v28++ = v29;
    v29 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v28 < (__int64)&dword_140404A6C[283831109] );
  dword_140404A6C[283831237] = v29;
  v30 = &dword_140404A6C[283831239];
  dword_140404A6C[283831238] = v29 + 1;
  v31 = v29 + 2;
  dword_140404A6C[283827813] = v31;
  do
  {
    *v30++ = v31;
    v31 = ++dword_140404A6C[283827813];
  }
  while ( (__int64)v30 < (__int64)&dword_140404A6C[283831303] );
  dword_140404A6C[283831303] = v31;
  dword_140404A6C[283827813] = v31 + 1;
  strcpy((char *)&dword_140404A6C[421784739], "concrete");
  dword_140404A6C[421784414] = 3;
  dword_140404A6C[421784253] = 4;
  dword_140404A6C[421784473] = 4;
  sub_140138770();
  dword_140404A6C[437914197] = 1008981770;
  dword_140404A6C[437914198] = 999649058;
  dword_140404A6C[437914205] = 1001795753;
  __builtin_memcpy((void *)&dword_140404A6C[437914206], (const void *)&xmmword_140279270, 16);
  dword_140404A6C[437914219] = 0;
  dword_140404A6C[437914211] = 1007908028;
  dword_140404A6C[437914199] = 1006219569;
  __builtin_memcpy((void *)&dword_140404A6C[437914212], (const void *)&xmmword_140279280, 16);
  __builtin_memcpy((void *)&dword_140404A6C[437914200], (const void *)&xmmword_140279260, 16);
  dword_140404A6C[437914217] = 1009948138;
  dword_140404A6C[437914204] = 998265388;
  dword_140404A6C[437914218] = 1023611503;
  dword_140404A6C[437914210] = 1006782914;
  dword_140404A6C[437914220] = 1069547520;
  dword_140404A6C[437914216] = 1002380023;
  sr_SetupItemTypes();
  v32 = &dword_140404A6C[283786019];
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785934], _mm_load_si128((     __m128i *)&xmmword_140278F50));
  v33 = 55;
  dword_140404A6C[283785942] = 8;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785946], _mm_load_si128((     __m128i *)&xmmword_140279030));
  dword_140404A6C[283785943] = 9;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785983], _mm_load_si128((     __m128i *)&xmmword_1402790A0));
  dword_140404A6C[283785954] = 18;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785938], _mm_load_si128((     __m128i *)&xmmword_140278FB0));
  dword_140404A6C[283785963] = 19;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785991], _mm_load_si128((     __m128i *)&xmmword_1402790C0));
  dword_140404A6C[283785964] = 20;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785950], _mm_load_si128((     __m128i *)&xmmword_140279050));
  dword_140404A6C[283785967] = 21;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283786012], _mm_load_si128((     __m128i *)&xmmword_1402790E0));
  dword_140404A6C[283785968] = 22;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785987], _mm_load_si128((     __m128i *)&xmmword_1402790B0));
  dword_140404A6C[283785971] = 23;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283785975], _mm_load_si128((     __m128i *)&xmmword_140279100));
  dword_140404A6C[283785972] = 24;
  dword_140404A6C[283785979] = 25;
  dword_140404A6C[283785980] = 26;
  dword_140404A6C[283786000] = 39;
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[283786008], _mm_load_si128((     __m128i *)&xmmword_1402790D0));
  dword_140404A6C[283786016] = 48;
  dword_140404A6C[283786017] = 49;
  dword_140404A6C[283786018] = 50;
  dword_140404A6C[283785933] = 55;
  do
  {
    *v32++ = v33;
    v33 = ++dword_140404A6C[283785933];
  }
  while ( (__int64)v32 < (__int64)&dword_140404A6C[283786035] );
  dword_140404A6C[283786051] = v33;
  dword_140404A6C[283786052] = v33 + 1;
  dword_140404A6C[283786053] = v33 + 2;
  dword_140404A6C[283786054] = v33 + 3;
  dword_140404A6C[283786055] = v33 + 4;
  dword_140404A6C[283786056] = v33 + 5;
  dword_140404A6C[283786083] = v33 + 6;
  dword_140404A6C[283786084] = v33 + 7;
  dword_140404A6C[283786085] = v33 + 8;
  dword_140404A6C[283786086] = v33 + 9;
  dword_140404A6C[283786087] = v33 + 10;
  dword_140404A6C[283786088] = v33 + 11;
  dword_140404A6C[283786147] = v33 + 12;
  dword_140404A6C[283786148] = v33 + 13;
  dword_140404A6C[283786149] = v33 + 14;
  dword_140404A6C[283786150] = v33 + 15;
  dword_140404A6C[283786151] = v33 + 16;
  dword_140404A6C[283786152] = v33 + 17;
  dword_140404A6C[283786179] = v33 + 18;
  dword_140404A6C[283786180] = v33 + 19;
  dword_140404A6C[283786181] = v33 + 20;
  dword_140404A6C[283786182] = v33 + 21;
  dword_140404A6C[283786183] = v33 + 22;
  dword_140404A6C[283786184] = v33 + 23;
  dword_140404A6C[283786211] = v33 + 24;
  dword_140404A6C[283786212] = v33 + 25;
  dword_140404A6C[283786213] = v33 + 26;
  dword_140404A6C[283786214] = v33 + 27;
  dword_140404A6C[283786215] = v33 + 28;
  dword_140404A6C[283786216] = v33 + 29;
  dword_140404A6C[283785933] = v33 + 30;
  sr_SetupVehicleTypes();
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  dword_140404A6C[432545129] = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  dword_140404A6C[432535887] = 1078984704;
  dword_140404A6C[432535888] = -1082130432;
  dword_140404A6C[432535886] = 0;
  dword_140404A6C[432533579] = 1077936128;
  sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
  asset_scan_itemsets_sis_candidate();
  v34 = &dword_140404A6C[421784734];
  do
  {
    *v34 = 1048576000;
    v34[1] = 1048576000;
    v34[2] = 1065353216;
    v34[3] = 1067030938;
    v34 += 46;
  }
  while ( (__int64)v34 < (__int64)&dword_140404A6C[421796510] );
  dword_140404A6C[272248181] = -981467136;
  dword_140404A6C[272248182] = 0;
  dword_140404A6C[272248183] = -981467136;
  dword_140404A6C[46 * dword_140404A6C[421784414] + 421784738] = 1;
  v35 = 0;
  v36 = &dword_140404A6C[272034681];
  do
  {
    *v36 = v35;
    *(v36 - 1) = 0;
    *(v36 - 4) = -981467136;
    *(v36 - 3) = 0;
    v37 = (float)((float)v35 * 2048.0) - 4096.0;
    *((float *)v36 - 2) = v37;
    v36[3336] = v35;
    v36[3335] = 1;
    *((float *)v36 + 3334) = v37;
    v36[3332] = -989855744;
    v36[3333] = 0;
    v36[6672] = v35;
    v36[6671] = 2;
    *((float *)v36 + 6670) = v37;
    *((_QWORD *)v36 + 3334) = 0;
    v36[10008] = v35;
    v36[10007] = 3;
    *((float *)v36 + 10006) = v37;
    *((_QWORD *)v36 + 5002) = 1157627904;
    v36[13344] = v35;
    v36[13343] = 4;
    *((float *)v36 + 13342) = v37;
    *((_QWORD *)v36 + 6670) = 1166016512;
    v36[16680] = v35;
    v36[16679] = 5;
    *((float *)v36 + 16678) = v37;
    *((_QWORD *)v36 + 8338) = 1170210816;
    v36[20016] = v35;
    v36[20015] = 6;
    *((float *)v36 + 20014) = v37;
    *((_QWORD *)v36 + 10006) = 1174405120;
    v36[23352] = v35++;
    v36[23351] = 7;
    *((float *)v36 + 23350) = v37;
    *((_QWORD *)v36 + 11674) = 1176502272;
    v36 += 26688;
  }
  while ( v35 < 8 );
  v38 = &dword_140404A6C[272034689];
  do
  {
    v39 = 0;
    v40 = v38;
    do
    {
      *v40 = v39;
      v40[13] = v39;
      v40[26] = v39;
      v40[39] = v39;
      v40[52] = v39;
      v40[65] = v39;
      v40[78] = v39;
      v40[91] = v39;
      v40[104] = v39;
      v40[117] = v39;
      v40[130] = v39;
      v40[143] = v39;
      v40[156] = v39;
      v40[169] = v39;
      v40[182] = v39;
      v40[195] = v39++;
      *(v40 - 1) = 0;
      v40[12] = 1;
      v40[25] = 2;
      v40[38] = 3;
      v40[51] = 4;
      v40[64] = 5;
      v40[77] = 6;
      v40[90] = 7;
      v40[103] = 8;
      v40[116] = 9;
      v40[129] = 10;
      v40[142] = 11;
      v40[155] = 12;
      v40[168] = 13;
      v40[181] = 14;
      v40[194] = 15;
      v40 += 208;
    }
    while ( v39 < 16 );
    v38 += 3336;
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[272248193] );
  return sub_1400D3190();
}
