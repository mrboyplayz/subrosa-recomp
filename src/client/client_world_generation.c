#include "shared_client.h"

//----- (0000000140139E90) ----------------------------------------------------
void            sub_140139E90(__int64 a1, __int64 a2, double a3)
{
  int v3;
  unsigned int *v4;
  unsigned int *v5;
  __int64 v6;
  unsigned int *v7;
  __int64 v8;
  unsigned int *v9;
  void *v10;
  _WORD *v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int *v32;
  int i;
  __int64 v34;
  unsigned int v35;
  unsigned int *v36;
  unsigned int v37;
  unsigned int *v38;
  unsigned int *v39;
  unsigned int *v40;
  unsigned int *v41;
  unsigned int v42;
  unsigned int *v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  __m128i si128;
  __m128i v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int *v64;
  __int64 v65;
  __int64 v66;
  unsigned int *v67;
  int v68;
  int *v69;
  unsigned int *v70;
  int *v71;
  int v72;
  int v73;
  int v74;
  unsigned int *v75;
  int v76;
  unsigned int *v77;
  int v78;
  int v79;
  unsigned int *v80;
  int v81;
  int *v82;
  int *v83;
  int v84;
  int v85;
  int *v86;
  int v87;
  int j;
  signed int v89;
  int k;
  int m;
  int *v92;
  int n;
  __int64 v94;
  int v95;
  unsigned int v96;
  signed int v97;
  signed int v98;
  int v99;
  int v100;
  __int64 v101;
  signed int v102;
  signed int ii;
  __int64 v104;
  signed int v105;
  int v106;
  __int64 v107;
  signed int jj;
  signed int kk;
  signed int v110;
  int v111;
  __int64 v112;
  signed int v113;
  char *v114;
  int v115;
  int v116;
  int *v117;
  int v118;
  int v119;
  int v120;
  int *v121;
  int v122;
  int v123;
  int *v124;
  int v125;
  int *v126;
  int v127;
  int *v128;
  int v129;
  int *v130;
  int *v131;
  signed int *v132;
  __int64 v133;
  __int64 v134;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140139E90[384];
#define v136 (*(__int64 (*))(void *)(sr_frame_140139E90 + 0)) /* [rsp+8h] */
#define v137 (*(_QWORD (*)[2])(void *)(sr_frame_140139E90 + 80)) /* [rsp+58h] */
#define v138 (*(_DWORD (*)[4])(void *)(sr_frame_140139E90 + 96)) /* [rsp+68h] */
#define v139 (*(_DWORD (*)[30])(void *)(sr_frame_140139E90 + 112)) /* [rsp+78h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_140139E90 + 368)) /* [rsp+178h] */

  v3 = 1;
  v4 = &world_vertex_shader;
  g_151E4618C = 1;
  do
  {
    *(v4 - 1) = glCreateProgram();
    *v4 = glCreateShader(35633);
    v4[1] = glCreateShader(35632);
    v4[2] = glCreateShader(36313);
    v4 += 60;
  }
  while ( (__int64)v4 < (__int64)&g_1515AEDC4 );
  v5 = &g_183E9B0C4;
  v6 = 0x2000;
  do
  {
    glGenBuffers(1, v5 - 1);
    glGenBuffers(1, v5);
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v7 = &g_183E990C4;
  v8 = 64;
  do
  {
    glGenFramebuffers(1, v7 - 1);
    glGenRenderbuffers(1, v7);
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v9 = &g_144960AC8;
  do
  {
    v10 = *((void **)v9 - 2);
    *(v9 - 6) = 1;
    *v9 = 1086324736;
    *(v9 - 5) = 0x40000;
    free(v10);
    v11 = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)v9 - 2) = (uint64)(uintptr_t)(v11);
    crt_memset((void *)(uintptr_t)(v11), 0, 0x100000u);
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
  while ( (__int64)v9 < (__int64)&g_144960BC8 );
  g_187BDE460 = (uint64)(uintptr_t)(sub_1401E0760(0xBB80u, 1, 2048, v138));
  sub_1401E0F40(*(int **)&g_187BDE460, 4002, 16000);
  v32 = &g_187BDE660;
  do
  {
    *(_QWORD *)v32 = (uint64)(uintptr_t)(sub_1401E22F0(48000, 1, v138));
    v32 += 2;
  }
  while ( (__int64)v32 < (__int64)&g_187BDE6A0 );
  g_144AF96E0 = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v34 = i;
    v35 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v34 + 18600733] = v35;
  }
  dword_14030186C = i;
  render_cache_camera_uniforms_candidate();
  v36 = &g_183E977C4;
  v37 = 4;
  v38 = &g_183E987C4;
  _mm_storeu_si128((__m128i *)(void *)&g_183E977A4, _mm_load_si128((     __m128i *)&xmmword_140278F50));
  g_183E977A0 = 4;
  do
  {
    *v36++ = v37;
    v37 = ++g_183E977A0;
  }
  while ( (__int64)v36 < (__int64)&g_183E987C4 );
  v39 = &resting_buffer_0;
  do
  {
    *v38++ = v37;
    v37 = ++g_183E977A0;
  }
  while ( (__int64)v38 < (__int64)&resting_buffer_0 );
  v40 = &g_183E98C04;
  do
  {
    *v39++ = v37;
    v37 = ++g_183E977A0;
  }
  while ( (__int64)v39 < (__int64)&g_183E98C04 );
  do
  {
    *v40++ = v37;
    v37 = ++g_183E977A0;
  }
  while ( (__int64)v40 < (__int64)&effect_mesh_buffer );
  g_183E98C4C = v37;
  v41 = &g_183E98C8C;
  g_183E98C50 = v37 + 1;
  g_183E98C54 = v37 + 2;
  g_183E98C58 = v37 + 3;
  g_183E98C5C = v37 + 4;
  g_183E98C60 = v37 + 5;
  g_183E98C64 = v37 + 6;
  g_183E98C68 = v37 + 7;
  v42 = v37 + 8;
  g_183E977A0 = v42;
  do
  {
    *v41++ = v42;
    v42 = ++g_183E977A0;
  }
  while ( (__int64)v41 < (__int64)&g_183E98D8C );
  g_183E9908C = v42;
  v43 = &g_1810FF788;
  v44 = g_183E977A0;
  g_1810FF788 = 64;
  g_1810FF78C = 17161;
  v45 = 128 / __ROL4__(1, 1);
  v46 = __ROL4__(1, 2);
  v47 = (v45 + 3) * (v45 + 3);
  g_183E99090 = v44 + 1;
  v44 += 2;
  g_1810FF790 = 411864;
  g_183E977A0 = v44;
  g_1811177A4 = v47;
  g_183E99094 = v44;
  v48 = g_183E977A0;
  g_1811177A0 = 128;
  g_1811177A8 = 24 * v47;
  g_183E99098 = v48 + 1;
  v49 = (128 / v46 + 3) * (128 / v46 + 3);
  g_183E9909C = v48 + 2;
  g_18112F7BC = v49;
  v48 += 3;
  g_18112F7B8 = 128;
  g_1811477D0 = 512;
  g_18115F7E8 = 1024;
  g_18112F7C0 = 24 * v49;
  g_183E977A0 = v48;
  v50 = 128 / __ROL4__(1, 3);
  g_181177800 = 2048;
  v51 = (v50 + 3) * (v50 + 3);
  g_1811477D4 = v51;
  g_1811477D8 = 24 * v51;
  v52 = 128 / __ROL4__(1, 4);
  v53 = __ROL4__(1, 5);
  v54 = (v52 + 3) * (v52 + 3);
  g_18115F7EC = v54;
  g_18115F7F0 = 24 * v54;
  v55 = (128 / v53 + 3) * (128 / v53 + 3);
  g_181177804 = v55;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278FD0);
  v57 = _mm_load_si128((     __m128i *)&xmmword_140279010);
  g_181177808 = 24 * v55;
  v58 = (unsigned int)__ROL4__(1, 6);
  g_183E990A0 = v48;
  v59 = (128 / (int)v58 + 3) * (128 / (int)v58 + 3);
  v60 = g_183E977A0 + 1;
  g_183E977A0 = v60;
  g_183E990A4 = v60;
  g_18118F818 = 4096;
  g_183E97744 = 0;
  g_18118F81C = v59;
  g_183E97748 = 1;
  g_183E9774C = 2;
  g_183E97790 = 3;
  g_18118F820 = 24 * v59;
  g_183E97794 = 4;
  g_183E98C48 = g_183E977A0 + 1;
  effect_mesh_buffer = g_183E977A0 + 2;
  g_183E977A0 += 3;
  _mm_storeu_si128((__m128i *)(void *)&g_183E97750, si128);
  g_183E97770 = 13;
  _mm_storeu_si128((__m128i *)(void *)&g_183E97760, v57);
  g_183E97774 = 14;
  g_183E97798 = 15;
  g_183E97740 = 16;
  sub_1400C2DB0(v58, (unsigned int)(128 % (int)v58), v60);
  sub_14014CBE0();
  sub_14013DCD0();
  glBindBuffer(34962, dword_140404A6C[2 * g_183E98C48 + 283793813]);
  glBufferData(34962, 1572864, 0, 35048);
  glBindBuffer(34962, dword_140404A6C[2 * effect_mesh_buffer + 283793813]);
  glBufferData(34962, 393216, 0, 35048);
  v64 = &g_183E9908C;
  do
  {
    glBindBuffer(34962, dword_140404A6C[2 * *v64 + 283793813]);
    glBufferData(34962, (int)(*v43 * v43[2]), 0, 35048);
    ++v64;
    v43 += 24582;
  }
  while ( (__int64)v64 <= (__int64)&g_183E990A4 );
  glBindBuffer(34962, dword_140404A6C[2 * resting_buffer_0 + 283793813]);
  glBufferData(34962, 0x200000, 0, 35048);
  glBindBuffer(34962, dword_140404A6C[2 * resting_buffer_1 + 283793813]);
  glBufferData(34962, 0x100000, 0, 35048);
  v67 = &g_183EBBBC4;
  do
  {
    glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[*v67 + 283790166] + 283793813]);
    glBufferData(34962, 196608, 0, 35048);
    ++v67;
  }
  while ( (__int64)v67 < (__int64)&g_183EBBFC4 );
  v68 = 0;
  v69 = (int *)&g_183EBB1C4;
  v70 = &g_192E9A680;
  v71 = (int *)&g_183EBB2C4;
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
  sub_1400FF3C0((__int64)&g_1905A2E60, *v71);
LABEL_40:
  sub_1400E9A60(g_183EBB6C8, -1, "ak47");
  sub_1400E9A60(g_183EBB6D0, -1, "m16");
  sub_1400E9A60(g_183EBB6E0, -1, "mp5");
  sub_1400E9A60(g_183EBB6CC, -1, "ak47_magazine");
  sub_1400E9A60(g_183EBB6D4, -1, "m16_magazine");
  sub_1400E9A60(g_183EBB6E4, -1, "mp5_magazine");
  sub_1400E9A60(g_183EBB6F4, -1, "9mm_magazine");
  sub_14004EB60(g_183EBB6DC, 3, 0);
  sub_140052240(g_183EBB6D8, 5, a3);
  sub_1400E9A60(g_183EBB6F0, -1, "9mm");
  sub_14004E6E0(g_183EBB700, 0.3125, 0.09375, 0.25);
  sub_14004E6E0(g_183EBB704, 0.3125, 0.09375, 0.25);
  sub_140066EE0(g_183EBBAC4, 0.25, sr_export_float_lane_container(1052770304), 0.28125);
  sub_140066EE0(g_183EBBAC8, 0.25, sr_export_float_lane_container(1049624576), 0.28125);
  sub_140066EE0(g_183EBBACC, 0.25, sr_export_float_lane_container(1050673152), 0.234375);
  sub_140066EE0(g_183EBBAD0, 0.25, sr_export_float_lane_container(1047527424), 0.234375);
  sub_140050280(g_183EBB710, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB714, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB718, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB71C, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB720, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB724, 0.1171875, 0.01953125, 0.1171875);
  sub_140050280(g_183EBB6FC, 0.125, 0.0625, 0.125);
  sub_1400561C0(g_183EBB730);
  sub_140050280(g_183EBB754, 0.03125, 0.28125, 0.03125);
  sub_140050280(g_183EBB734, 0.4375, 1.125, 0.03125);
  sub_14013FCD0(39, g_183EBB760);
  sub_14013FCD0(39, g_183EBB764);
  sub_140050280(
    g_183EBB758,
    *(float *)&g_182AABF94,
    *(float *)&g_182AABF98,
    *(float *)&g_182AABF9C);
  sub_140050280(
    g_183EBB75C,
    *(float *)&g_182AAD364,
    *(float *)&g_182AAD368,
    *(float *)&g_182AAD36C);
  sub_1400555C0(g_183EBB774, 44, sr_export_float_lane_container(1040187392), 0.09375, 0.5);
  v73 = g_183EBB768;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
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
  v75 = &g_16AB13DB4;
  v76 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    v77 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(v77 - 1) = 0;
      ++v76;
      *(_QWORD *)(v77 + 1) = 0;
      *(_QWORD *)(v77 + 3) = 0;
      v77 += 6;
    }
    while ( v76 < (int)mesh_triangle_count );
  }
  sub_1401449C0(v73, 0);
  sub_14013FCD0(42, g_183EBB76C);
  sub_14013FCD0(43, g_183EBB770);
  sub_1400FFAE0(g_183EBB708, 0.043945312, 0.03125, 0.10546875);
  sub_1400FFAE0(g_183EBB70C, 0.051269531, 0.01171875, 0.12304688);
  sub_140050280(g_183EBB738, 0.25, 0.015625, 0.25);
  sub_140050280(g_183EBB74C, 0.25, 0.015625, 0.25);
  v78 = g_183EBC3DC;
  LODWORD(v137[1]) = -1071644672;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  v137[0] = 0;
  sub_140002D00((float *)v137, 0.125, 0.03125, 2.5);
  v79 = 0;
  if ( (int)mesh_triangle_count > 0 )
  {
    v80 = &g_16AB13DB4;
    do
    {
      *(_QWORD *)(v80 - 1) = 0;
      ++v79;
      *(_QWORD *)(v80 + 1) = 0;
      *(_QWORD *)(v80 + 3) = 0;
      v80 += 6;
    }
    while ( v79 < (int)mesh_triangle_count );
  }
  sub_1401449C0(v78, 0);
  sub_1400E9A60(g_183EBB728, -1, "cellphone");
  sub_1400E9A60(g_183EBB72C, -1, "walkietalkie");
  sub_1400E9A60(g_183EBB6F8, -1, "grenade");
  sub_1400E9A60(g_183EBB750, -1, "soccerball");
  sub_1400504C0(g_183EBB748, 0.0625, 0.1875, 0.0625);
  sub_14004FDB0(g_183EBB73C);
  sub_14018C340(g_183EBC3E4);
  v81 = 0;
  if ( (int)g_1812C2060 > 0 )
  {
    v82 = (int *)&g_183EBB780;
    do
      sub_14013F590(v81++, *v82++);
    while ( v81 < (int)g_1812C2060 );
  }
  sub_14013FCD0(9, g_183EBB6E8);
  sub_14013FCD0(10, g_183EBB6EC);
  sub_14013FCD0(45, g_183EBB778);
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
  mesh_vertex_count = 0;
  v83 = (int *)&world_particle_mesh_0;
  mesh_triangle_count = 0;
  v84 = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  do
  {
    sub_14004EB60(*(v83 - 32), v84, 0);
    sub_14004EB60(*v83++, v84++, 1);
  }
  while ( v84 < 4 );
  v85 = 1;
  v86 = (int *)&g_183EBC0C8;
  do
    sub_14005B840(*v86++, v85++);
  while ( v85 < 7 );
  sub_1400E9A60(g_183EBC244, -1, "fhead1");
  sub_1400E9A60(g_183EBC248, -1, "fhead2");
  sub_1400E9A60(g_183EBC24C, -1, "fhead3");
  sub_1400E9A60(g_183EBC250, -1, "fhead4");
  sub_1400E9A60(g_183EBC254, -1, "fhead5");
  sub_1400E9A60(g_183EBC2C4, -1, "fhair1");
  sub_1400E9A60(g_183EBC2C8, -1, "fhair2");
  sub_1400E9A60(g_183EBC2CC, -1, "fhair3");
  sub_1400E9A60(g_183EBC2D0, -1, "fhair4");
  sub_1400E9A60(g_183EBC2D4, -1, "fhair5");
  sub_1400E9A60(g_183EBC2D8, -1, "fhair6");
  sub_1400E9A60(g_183EBC2DC, -1, "fhair7");
  sub_1400E9A60(g_183EBC2E0, -1, "fhair8");
  sub_1400E9A60(g_183EBC2E4, -1, "fhair9");
  sub_1400E9A60(g_183EBC284, -1, "mhead1");
  sub_1400E9A60(g_183EBC288, -1, "mhead2");
  sub_1400E9A60(g_183EBC28C, -1, "mhead3");
  sub_1400E9A60(g_183EBC290, -1, "mhead4");
  sub_1400E9A60(g_183EBC294, -1, "mhead5");
  sub_1400E9A60(g_183EBC304, -1, "mhair1");
  sub_1400E9A60(g_183EBC308, -1, "mhair2");
  sub_1400E9A60(g_183EBC30C, -1, "mhair3");
  sub_1400E9A60(g_183EBC310, -1, "mhair4");
  sub_1400E9A60(g_183EBC314, -1, "mhair5");
  sub_1400E9A60(g_183EBC318, -1, "mhair6");
  sub_1400E9A60(g_183EBC31C, -1, "mhair7");
  sub_1400E9A60(g_183EBC320, -1, "mhair8");
  sub_1400E9A60(g_183EBC324, -1, "mhair9");
  v87 = world_particle_mesh_1;
  mesh_vertex_count = 0;
  mesh_triangle_count = 0;
  g_16AC43DB0 = 0;
  g_16AD03DB4 = 0;
  memset(v137, 0, 12);
  sub_140002D00((float *)v137, 0.02, 0.02, 0.02);
  for ( j = 0; j < (int)mesh_triangle_count; v75 += 6 )
  {
    *(_QWORD *)(v75 - 1) = 0;
    ++j;
    *(_QWORD *)(v75 + 1) = 0;
    *(_QWORD *)(v75 + 3) = 0;
  }
  sub_1401449C0(v87, 0);
  v89 = g_1A4CFF8D0;
  for ( k = 0; k < v89; ++k )
  {
    if ( k != 1 && k != g_1A4CFF7E4 )
    {
      sub_140099730(k, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
      v89 = g_1A4CFF8D0;
    }
  }
  for ( m = 0; m < 11; ++m )
    sub_1400990A0(1, m, 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  sub_14009A5F0(g_183EBE438, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(effect_texture, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(g_183EBF050, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_14009A5F0(g_183EBF0F0, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  v92 = (int *)&g_183EBF074;
  do
    sub_14009A5F0(*v92++, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  while ( (__int64)v92 < (__int64)&g_183EBF08C );
  for ( n = g_183EBF0F4; n <= (int)g_183EBF108; ++n )
    sub_14009A5F0(n, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  sub_1400EDED0(g_183EBF10C, "data/model/tex_2.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF110, "data/model/walkie-talkie1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009A5F0(resting_texture_0, 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u);
  v94 = (int)g_183EBF16C;
  v95 = 128;
  v96 = g_1862AE010;
  v97 = 128;
  g_1B0037420 = 128;
  v98 = 0;
  g_1B0037424 = 128;
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
        v95 = g_1B0037420;
        ++v99;
      }
      while ( v99 < (int)g_1B0037420 );
      v97 = g_1B0037424;
    }
    ++v98;
  }
  while ( v98 < v97 );
  if ( v96 )
  {
    g_1B0037428 = 1612720160;
    g_1B003742C = -425767648;
  }
  else
  {
    g_1B0037428 = 539500640;
    g_1B003742C = 541958118;
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
        v104 = ii + g_1B0037420 * v102;
        v105 = ii + v102 * dword_140404A6C[v101 + 284024933];
        ++ii;
      }
      ++v102;
    }
    while ( v102 < (int)dword_140404A6C[v101 + 284024934] );
  }
  sub_14014D3E0(v94, 1);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF154, "data/terrain_normal.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400ED9D0(g_183EBF158, "data/terrain_detail.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF15C, "data/terrain.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  glTexParameterf(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(g_183EBF160, "data/terrain_reflection.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  sub_14009D7A0(g_183EBF130);
  sub_1400ED9D0(g_183EBF120, "texture/mic.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400EDED0(g_183EBF134, "texture/cash_one.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF138, "texture/cash_five.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF13C, "texture/cash_ten.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF140, "texture/cash_twenty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF144, "texture/cash_fifty.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF148, "texture/cash_hundred.png", 1, 0x812Fu, 0x812Fu, 0x2600u, 0x2702u, 0);
  sub_1400EDED0(g_183EBF14C, "texture/cash_thousand.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2703u, 0);
  sub_1400EDED0(g_183EBF174, "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF178, "data/model/gun_tex.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF17C, "data/model/tex_1.png", 0, 0x812Fu, 0x812Fu, 0x2600u, 0x2600u, 0);
  sub_1400EDED0(g_183EBF5B4, "data/model/grenade.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF60C, "data/model/soccerball.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_1400EDED0(g_183EBF634, "data/model/watermelon.png", 1, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u, 0);
  sub_14009C680(-1, g_183EBF57C);
  v106 = g_183EBF170;
  v107 = 44LL * (int)g_183EBF170;
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
  v111 = g_183EBF128;
  v112 = 44LL * (int)g_183EBF128;
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
  sub_1400ED9D0(g_183EBF980, "texture/title.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400ED9D0(g_183EBF984, "texture/box.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_14009B1A0(g_183EBFA88);
  g_1A7971DA0 = 2048;
  g_1A7971DA4 = 2048;
  g_1A7971DD0 = 0;
  free(*(void **)&g_1A7971DC8);
  g_1A7971DC8 = sr_path_malloc(4 * g_1A7971DA0 * g_1A7971DA4);
  crt_memset(
    (void *)(uintptr_t)(*(_WORD **)&g_1A7971DC8),
    0xFFu,
    4 * g_1A7971DA0 * g_1A7971DA4);
  glGenTextures(1, &g_1A7971DC0);
  glBindTexture(3553, g_1A7971DC0);
  glTexParameteri(3553, 10242, 33071);
  glTexParameteri(3553, 10243, 33071);
  glTexParameteri(3553, 10240, 9729);
  glTexParameteri(3553, 10241, 9729);
  glTexImage2D(3553,
    0,
    6408,
    g_1A7971DA0,
    g_1A7971DA4,
    0,
    6408,
    5121,
    g_1A7971DC8);
  g_18399EBFC = sub_140068FC0(0, "texture/icon-soccer_ball.png");
  g_18399EBC8 = sub_140068FC0(0, "texture/icon-disk-white.png");
  g_18399EBBC = sub_140068FC0(0, "texture/icon-disk-black.png");
  g_18399EBC0 = sub_140068FC0(0, "texture/icon-disk-green.png");
  g_18399EBC4 = sub_140068FC0(0, "texture/icon-disk-blue.png");
  g_18399EBCC = sub_140068FC0(0, "texture/icon-disk-gold.png");
  g_18399EBD0 = sub_140068FC0(0, "texture/icon-disk-red.png");
  g_18399EC0C = sub_140068FC0(0, "texture/icon-keyboard.png");
  g_18399EBAC = sub_140068FC0(0, "texture/icon-case-empty.png");
  g_18399EBB0 = sub_140068FC0(0, "texture/icon-case-empty.png");
  g_18399EBB4 = sub_140068FC0(0, "texture/icon-stack.png");
  g_18399EBB8 = g_18399EBB4;
  g_18399EBA8 = sub_140068FC0(0, "texture/icon-bandage.png");
  g_18399EB9C = sub_140068FC0(0, "texture/icon-pistol.png");
  g_18399EBA0 = sub_140068FC0(0, "texture/icon-clip-pistol.png");
  g_18399EBD4 = sub_140068FC0(0, "texture/icon-phone.png");
  g_18399EB74 = sub_140068FC0(0, "texture/icon-ak47.png");
  g_18399EB78 = sub_140068FC0(0, "texture/icon-clip-ak47.png");
  g_18399EB7C = sub_140068FC0(0, "texture/icon-m16.png");
  g_18399EB80 = sub_140068FC0(0, "texture/icon-clip-m16.png");
  g_18399EB8C = sub_140068FC0(0, "texture/icon-mp5.png");
  g_18399EB90 = sub_140068FC0(0, "texture/icon-clip-mp5.png");
  g_18399EB94 = sub_140068FC0(0, "texture/icon-uzi.png");
  g_18399EB98 = sub_140068FC0(0, "texture/icon-clip-uzi.png");
  g_18399EBDC = sub_140068FC0(0, "texture/icon-key.png");
  g_18399EBA4 = sub_140068FC0(0, "texture/icon-grenade.png");
  g_192E8F444 = sub_140068FC0(0, "texture/icon_speaker.png");
  g_192E8F448 = sub_140068FC0(0, "texture/icon_talking.png");
  v121 = (int *)&g_183E93778;
  g_192E8F44C = sub_140068FC0(0, "texture/icon_muted.png");
  v122 = 1;
  do
  {
    crt_sprintf(v139, "ak47_fire%02d.wav", v122);
    sub_1400EE400(*v121, (__int64)v139, 10.0);
    ++v122;
    ++v121;
  }
  while ( (__int64)v121 < (__int64)&g_183E93790 );
  v123 = 1;
  v124 = (int *)&g_183E937F8;
  do
  {
    crt_sprintf(v139, "m16_fire%02d.wav", v123);
    sub_1400EE400(*v124, (__int64)v139, 10.0);
    ++v123;
    ++v124;
  }
  while ( (__int64)v124 < (__int64)&g_183E93810 );
  v125 = 1;
  v126 = (int *)&g_183E938F8;
  do
  {
    crt_sprintf(v139, "mp5_fire%02d.wav", v125);
    sub_1400EE400(*v126, (__int64)v139, 10.0);
    ++v125;
    ++v126;
  }
  while ( (__int64)v126 < (__int64)&g_183E93910 );
  v127 = 1;
  v128 = (int *)&g_183E93978;
  do
  {
    crt_sprintf(v139, "uzi_fire%02d.wav", v127);
    sub_1400EE400(*v128, (__int64)v139, 10.0);
    ++v127;
    ++v128;
  }
  while ( (__int64)v128 < (__int64)&g_183E93990 );
  v129 = 1;
  v130 = (int *)&g_183E939F8;
  do
  {
    crt_sprintf(v139, "pistol_fire%02d.wav", v129);
    sub_1400EE400(*v130, (__int64)v139, 10.0);
    ++v129;
    ++v130;
  }
  while ( (__int64)v130 < (__int64)&g_183E93A10 );
  sub_1400EE400(g_183E935C4, (__int64)"4cylinder.wav", 10.0);
  sub_1400EE400(g_183E935D4, (__int64)"tiresqueal.wav", 10.0);
  v131 = (int *)&g_183E935D8;
  do
  {
    crt_sprintf(v139, "ricochet%02d.wav", v3);
    sub_1400EE400(*v131, (__int64)v139, 10.0);
    ++v3;
    ++v131;
  }
  while ( (__int64)v131 < (__int64)&g_183E935F8 );
  sub_1400EE400(g_183E93618, (__int64)"carcrash01.wav", 32.0);
  sub_1400EE400(g_183E9361C, (__int64)"carcrash02.wav", 32.0);
  sub_1400EE400(g_183E93628, (__int64)"bullethitbody01.wav", 10.0);
  sub_1400EE400(game_unknown_183e9362c, (__int64)"bullethitbody02.wav", 10.0);
  sub_1400EE400(g_183E93638, (__int64)"bullethitmetal01.wav", 10.0);
  sub_1400EE400(g_183E9363C, (__int64)"bullethitmetal02.wav", 10.0);
  sub_1400EE400(g_183E93658, (__int64)"glassbreak01.wav", 10.0);
  sub_1400EE400(item_event_ring_back, (__int64)"phonering01.wav", 1.0);
  v132 = (signed int *)&g_183E9366C;
  do
    sub_140065AE0(*v132++, 0.25);
  while ( (__int64)v132 < (__int64)&g_183E93698 );
  sub_1400EE400(g_183E936AC, (__int64)"reload01.wav", 1.0);
  sub_1400EE400(particle_landing_sound, (__int64)"shell_hit_cement.wav", 2.0);
  sub_1400EE400(g_183E936D0, (__int64)"gearshift01.wav", 1.0);
  sub_1400EE400(g_183E936D4, (__int64)"helicopter02.wav", 32.0);
  sub_140065AE0(g_183E936D8, 32.0);
  sub_140065AE0(g_183E936DC, 32.0);
  sub_140065AE0(g_183E936E0, 32.0);
  sub_140065AE0(g_183E936E4, 32.0);
  sub_1400EE400(g_183E936E8, (__int64)"factorywhistle.wav", 128.0);
  sub_1400EE400(g_183E936EC, (__int64)"explosion01.wav", 32.0);
  sub_1400EE400(g_183E936F0, (__int64)"modem.wav", 1.0);
  sub_1400EE400(g_183E936F4, (__int64)"floppy.wav", 1.0);
  sub_14013C920(v134, v133, 0.0 /* unused native input */);
  LOWORD(g_15414F280) = 65;
  LOWORD(g_15414F290) = 66;
  LOWORD(g_15414F2A0) = 67;
  LOWORD(g_15414F2B0) = 68;
  LOWORD(g_15414F2C0) = 69;
  LOWORD(g_15414F2D0) = 70;
  LOWORD(g_15414F2E0) = 71;
  LOWORD(g_15414F2F0) = 72;
  LOWORD(g_15414F300) = 73;
  LOWORD(g_15414F310) = 74;
  LOWORD(g_15414F320) = 75;
  LOWORD(g_15414F330) = 76;
  LOWORD(g_15414F340) = 77;
  LOWORD(g_15414F350) = 78;
  LOWORD(g_15414F360) = 79;
  LOWORD(g_15414F370) = 80;
  LOWORD(g_15414F380) = 81;
  LOWORD(g_15414F390) = 82;
  g_154150060 = 7629889;
  LOWORD(g_15414F3A0) = 83;
  LOWORD(g_15414F3B0) = 84;
  LOWORD(g_15414F3C0) = 85;
  LOWORD(g_15414F3D0) = 86;
  LOWORD(g_15414F3E0) = 87;
  LOWORD(g_15414F3F0) = 88;
  LOWORD(g_15414F400) = 89;
  LOWORD(g_15414F410) = 90;
  LOWORD(g_15414F420) = 49;
  LOWORD(g_15414F430) = 50;
  LOWORD(g_15414F440) = 51;
  LOWORD(g_15414F450) = 52;
  LOWORD(g_15414F460) = 53;
  LOWORD(g_15414F470) = 54;
  LOWORD(g_15414F480) = 55;
  LOWORD(g_15414F490) = 56;
  LOWORD(g_15414F4A0) = 57;
  LOWORD(g_15414F4B0) = 48;
  strcpy((char *)&g_15414F740, "Left");
  strcpy((char *)&g_15414F730, "Right");
  strcpy((char *)&g_15414F760, "Up");
  strcpy((char *)&g_15414F750, "Down");
  strcpy((char *)&g_15414F500, "Space");
  strcpy((char *)&g_15414F4C0, "Enter");
  strcpy((char *)&g_154150290, "Center");
  strcpy((char *)&g_154150040, "Ctrl");
  strcpy((char *)&g_154150050, "Shift");
  strcpy((char *)&g_15414F5A0, "Comma");
  strcpy((char *)&g_15414F5B0, "Period");
  strcpy((char *)&g_15414F830, "Home");
  strcpy((char *)&g_1541502D0, "PgUp");
  strcpy((char *)&g_154150270, "PgDn");
  strcpy((char *)&g_154150320, "Plus");
  strcpy((char *)&g_154150310, "Minus");
  strcpy((char *)&g_15414F240, "None");
  g_154150250 = 6581829;
  g_154150240 = 7564873;
  g_1541502E0 = 7103812;
  return;
}
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140

//----- (000000014013DCD0) ----------------------------------------------------
__int64 sub_14013DCD0()
{
  __int64 v0;
  __int64 result;
  int v2;
  unsigned int *v3;
  __int64 v4;
       char *v5;
  unsigned int *v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int *v13;
  unsigned int *v14;
  unsigned int *v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int v20;
  unsigned int *v21;
  unsigned int v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int *v25;
  unsigned int v26;
  unsigned int *v27;
  unsigned int *v28;
  unsigned int v29;
  unsigned int *v30;
  unsigned int v31;
  unsigned int *v32;
  unsigned int v33;
  unsigned int *v34;
  int v35;
  unsigned int *v36;
  float v37;
  unsigned int *v38;
  int v39;
  _DWORD *v40;

  v0 = 138412032;
  if ( g_183F7CBF0 )
    v0 = 553648128;
  g_1A4CF0928 = sr_path_malloc(v0);
  if ( !g_1A4CF0928 )
  {
    result = sub_140198F95(16, (__int64)"Error", (__int64)"Colgrid malloc failed");
    g_160FC47C0 = 1;
    return result;
  }
  v2 = 0;
  v3 = &g_1811BF858;
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
  g_181290050 = sr_path_malloc(0x200000);
  if ( !g_181290050 )
  {
    v5 = "Landmask malloc failed";
LABEL_56:
    result = sub_140198F95(16, (__int64)"Error", (__int64)v5);
    g_160FC47C0 = 1;
    return result;
  }
  physics_points_no_gravity = 1;
  g_16B27ECC4 = 1;
  g_144CBFAA0 = 0x400000;
  g_144CBFAB8 = sr_path_malloc(0x400000);
  if ( !g_144CBFAB8 )
  {
    v5 = "Replay malloc failed";
    goto LABEL_56;
  }
  v6 = &g_183EBB0C4;
  strcpy((char *)(unsigned int *)&g_183EBFAB0, "test2");
  v7 = 0;
  g_183EBB0C0 = 0;
  do
  {
    *v6++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v6 < (__int64)&g_183EBB144 );
  v8 = &g_183EBB1C4;
  do
  {
    *v8++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v8 < (__int64)&g_183EBB244 );
  v9 = &g_183EBB2C8;
  do
  {
    *(v9 - 1) = v7;
    *v9 = ++g_183EBB0C0;
    v9[1] = ++g_183EBB0C0;
    v9[2] = ++g_183EBB0C0;
    v9 += 4;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v9 < (__int64)&g_183EBB4C8 );
  v10 = &g_183EBB6C4;
  v11 = &g_183EBBAC4;
  do
  {
    *v10++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v10 < (__int64)&g_183EBBAC4 );
  do
  {
    *v11++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v11 < (__int64)&g_183EBBB44 );
  v12 = &g_183EBBBC4;
  do
  {
    *v12++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v12 < (__int64)&g_183EBBFC4 );
  v13 = &g_183EBC144;
  v14 = &g_183EBC244;
  do
  {
    *v13++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v13 < (__int64)&g_183EBC244 );
  v15 = &world_particle_mesh_0;
  v16 = &g_183EBC0C4;
  do
  {
    *(v15 - 32) = v7;
    *v15++ = ++g_183EBB0C0;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v15 < (__int64)&g_183EBC0C4 );
  do
  {
    *v16++ = v7;
    v7 = ++g_183EBB0C0;
  }
  while ( (__int64)v16 < (__int64)&g_183EBC144 );
  g_183EBC3CC = v7;
  v17 = &g_183EBC2C4;
  v18 = v7 + 1;
  g_183EBB0C0 = v18;
  do
  {
    *v14++ = v18;
    v18 = ++g_183EBB0C0;
  }
  while ( (__int64)v14 < (__int64)&g_183EBC2C4 );
  do
  {
    *v17++ = v18;
    v18 = ++g_183EBB0C0;
  }
  while ( (__int64)v17 < (__int64)&g_183EBC344 );
  g_183EBC344 = v18;
  v19 = &g_183EBC34C;
  g_183EBC348 = v18 + 1;
  v20 = v18 + 2;
  g_183EBB0C0 = v20;
  do
  {
    *v19++ = v20;
    v20 = ++g_183EBB0C0;
  }
  while ( (__int64)v19 < (__int64)&g_183EBC3CC );
  g_183EBC3DC = v20;
  v21 = &g_183EBC408;
  g_183EBC3E0 = v20 + 1;
  g_183EBC3E4 = v20 + 2;
  g_183EBB0C0 = v20 + 3;
  v22 = 0;
  g_183EBC400 = 0;
  do
  {
    *(v21 - 1) = v22;
    *v21 = ++g_183EBC400;
    v21[1] = ++g_183EBC400;
    v21[2] = ++g_183EBC400;
    v21 += 4;
    v22 = ++g_183EBC400;
  }
  while ( (__int64)v21 < (__int64)&g_183EBD408 );
  g_183EBE404 = v22;
  v23 = &g_183EBE850;
  shading_texture = v22 + 1;
  g_183EBE40C = v22 + 2;
  g_183EBE410 = v22 + 3;
  g_183EBE414 = v22 + 4;
  g_183EBE418 = v22 + 5;
  g_183EBE41C = v22 + 6;
  g_183EBE420 = v22 + 7;
  g_183EBE424 = v22 + 8;
  g_183EBE428 = v22 + 9;
  shading_cube_map = v22 + 10;
  g_183EBE430 = v22 + 11;
  g_183EBE438 = v22 + 12;
  effect_texture = v22 + 13;
  g_183EBE434 = v22 + 14;
  g_183EBF050 = v22 + 15;
  g_183EBF054 = v22 + 16;
  g_183EBF058 = v22 + 17;
  g_183EBF05C = v22 + 18;
  g_183EBF060 = v22 + 19;
  g_183EBF064 = v22 + 20;
  g_183EBF068 = v22 + 21;
  g_183EBF06C = v22 + 22;
  v24 = v22 + 23;
  g_183EBC400 = v24;
  do
  {
    *v23++ = v24;
    v24 = ++g_183EBC400;
  }
  while ( (__int64)v23 < (__int64)&g_183EBEC50 );
  g_183EBF0F0 = v24;
  v25 = &g_183EBF070;
  g_183EBF134 = v24 + 1;
  g_183EBF138 = v24 + 2;
  g_183EBF13C = v24 + 3;
  g_183EBF140 = v24 + 4;
  g_183EBF144 = v24 + 5;
  g_183EBF148 = v24 + 6;
  g_183EBF14C = v24 + 7;
  g_183EBF150 = v24 + 8;
  v26 = v24 + 9;
  g_183EBC400 = v26;
  do
  {
    *v25++ = v26;
    v26 = ++g_183EBC400;
  }
  while ( (__int64)v25 < (__int64)&g_183EBF0F0 );
  g_183EBF0F4 = v26;
  v27 = &g_183EBF180;
  v28 = &g_183EBF580;
  g_183EBF0F8 = v26 + 1;
  g_183EBF0FC = v26 + 2;
  g_183EBF100 = v26 + 3;
  g_183EBF104 = v26 + 4;
  g_183EBF108 = v26 + 5;
  g_183EBF10C = v26 + 6;
  g_183EBF110 = v26 + 7;
  g_183EBF114 = v26 + 8;
  resting_texture_0 = v26 + 9;
  g_183EBF11C = v26 + 10;
  g_183EBF120 = v26 + 11;
  g_183EBF124 = v26 + 12;
  g_183EBF128 = v26 + 13;
  g_183EBF12C = v26 + 14;
  g_183EBF130 = v26 + 15;
  g_183EBF154 = v26 + 16;
  g_183EBF158 = v26 + 17;
  g_183EBF15C = v26 + 18;
  g_183EBF160 = v26 + 19;
  g_183EBF164 = v26 + 20;
  g_183EBF168 = v26 + 21;
  g_183EBF16C = v26 + 22;
  g_183EBF170 = v26 + 23;
  g_183EBF174 = v26 + 24;
  g_183EBF178 = v26 + 25;
  g_183EBF17C = v26 + 26;
  v29 = v26 + 27;
  g_183EBC400 = v29;
  do
  {
    *v27++ = v29;
    v29 = ++g_183EBC400;
  }
  while ( (__int64)v27 < (__int64)&g_183EBF580 );
  do
  {
    *v28++ = v29;
    v29 = ++g_183EBC400;
  }
  while ( (__int64)v28 < (__int64)&g_183EBF780 );
  g_183EBF980 = v29;
  v30 = &g_183EBF988;
  g_183EBF984 = v29 + 1;
  v31 = v29 + 2;
  g_183EBC400 = v31;
  do
  {
    *v30++ = v31;
    v31 = ++g_183EBC400;
  }
  while ( (__int64)v30 < (__int64)&g_183EBFA88 );
  g_183EBFA88 = v31;
  g_183EBC400 = v31 + 1;
  strcpy((char *)&g_1A4CFFCF8, "concrete");
  g_1A4CFF7E4 = 3;
  g_1A4CFF560 = 4;
  g_1A4CFF8D0 = 4;
  sub_140138770();
  g_1A8A873C0 = 1008981770;
  g_1A8A873C4 = 999649058;
  g_1A8A873E0 = 1001795753;
  __builtin_memcpy((void *)&g_1A8A873E4, (const void *)&xmmword_140279270, 16);
  g_1A8A87418 = 0;
  g_1A8A873F8 = 1007908028;
  g_1A8A873C8 = 1006219569;
  __builtin_memcpy((void *)&g_1A8A873FC, (const void *)&xmmword_140279280, 16);
  __builtin_memcpy((void *)&g_1A8A873CC, (const void *)&xmmword_140279260, 16);
  g_1A8A87410 = 1009948138;
  g_1A8A873DC = 998265388;
  g_1A8A87414 = 1023611503;
  g_1A8A873F4 = 1006782914;
  g_1A8A8741C = 1069547520;
  g_1A8A8740C = 1002380023;
  sr_SetupItemTypes();
  v32 = &g_183E936F8;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935A4, _mm_load_si128((     __m128i *)&xmmword_140278F50));
  v33 = 55;
  g_183E935C4 = 8;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935D4, _mm_load_si128((     __m128i *)&xmmword_140279030));
  g_183E935C8 = 9;
  _mm_storeu_si128((__m128i *)(void *)&item_event_ring_back, _mm_load_si128((     __m128i *)&xmmword_1402790A0));
  g_183E935F4 = 18;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935B4, _mm_load_si128((     __m128i *)&xmmword_140278FB0));
  g_183E93618 = 19;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93688, _mm_load_si128((     __m128i *)&xmmword_1402790C0));
  g_183E9361C = 20;
  _mm_storeu_si128((__m128i *)(void *)&g_183E935E4, _mm_load_si128((     __m128i *)&xmmword_140279050));
  g_183E93628 = 21;
  _mm_storeu_si128((__m128i *)(void *)&g_183E936DC, _mm_load_si128((     __m128i *)&xmmword_1402790E0));
  game_unknown_183e9362c = 22;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93678, _mm_load_si128((     __m128i *)&xmmword_1402790B0));
  g_183E93638 = 23;
  _mm_storeu_si128((__m128i *)(void *)&g_183E93648, _mm_load_si128((     __m128i *)&xmmword_140279100));
  g_183E9363C = 24;
  g_183E93658 = 25;
  g_183E9365C = 26;
  g_183E936AC = 39;
  _mm_storeu_si128((__m128i *)(void *)&particle_landing_sound, _mm_load_si128((     __m128i *)&xmmword_1402790D0));
  g_183E936EC = 48;
  g_183E936F0 = 49;
  g_183E936F4 = 50;
  g_183E935A0 = 55;
  do
  {
    *v32++ = v33;
    v33 = ++g_183E935A0;
  }
  while ( (__int64)v32 < (__int64)&g_183E93738 );
  g_183E93778 = v33;
  g_183E9377C = v33 + 1;
  g_183E93780 = v33 + 2;
  g_183E93784 = v33 + 3;
  g_183E93788 = v33 + 4;
  g_183E9378C = v33 + 5;
  g_183E937F8 = v33 + 6;
  g_183E937FC = v33 + 7;
  g_183E93800 = v33 + 8;
  g_183E93804 = v33 + 9;
  g_183E93808 = v33 + 10;
  g_183E9380C = v33 + 11;
  g_183E938F8 = v33 + 12;
  g_183E938FC = v33 + 13;
  g_183E93900 = v33 + 14;
  g_183E93904 = v33 + 15;
  g_183E93908 = v33 + 16;
  g_183E9390C = v33 + 17;
  g_183E93978 = v33 + 18;
  g_183E9397C = v33 + 19;
  g_183E93980 = v33 + 20;
  g_183E93984 = v33 + 21;
  g_183E93988 = v33 + 22;
  g_183E9398C = v33 + 23;
  g_183E939F8 = v33 + 24;
  g_183E939FC = v33 + 25;
  g_183E93A00 = v33 + 26;
  g_183E93A04 = v33 + 27;
  g_183E93A08 = v33 + 28;
  g_183E93A0C = v33 + 29;
  g_183E935A0 = v33 + 30;
  sr_SetupVehicleTypes();
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  g_1A760C010 = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  g_1A7602FA8 = 1078984704;
  g_1A7602FAC = -1082130432;
  g_1A7602FA4 = 0;
  g_1A7600B98 = 1077936128;
  sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
  asset_scan_itemsets_sis_candidate();
  v34 = &g_1A4CFFCE4;
  do
  {
    *v34 = 1048576000;
    v34[1] = 1048576000;
    v34[2] = 1065353216;
    v34[3] = 1067030938;
    v34 += 46;
  }
  while ( (__int64)v34 < (__int64)&g_1A4D0B4E4 );
  *(unsigned int *)&g_181290040 = -981467136;
  g_181290044 = 0;
  *(unsigned int *)&g_181290048 = -981467136;
  dword_140404A6C[46 * g_1A4CFF7E4 + 421784738] = 1;
  v35 = 0;
  v36 = &g_1811BF850;
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
  v38 = &g_1811BF870;
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
  while ( (__int64)v38 < (__int64)&g_181290070 );
  return sub_1400D3190();
}
